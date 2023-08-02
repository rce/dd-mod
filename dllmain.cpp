// dllmain.cpp : Defines the entry point for the DLL application.
#define NOMINMAX

#include <locale>
#include "SDK.hpp"
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <Windows.h>
#include "VMTHook.h"
#include <fstream>

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

using namespace Classes;

#define HEX(value) std::setfill('0') << std::setw(8) << std::hex << value << std::dec << std::setfill(' ') << std::setw(0)

std::ofstream logfile;


bool ValidPawn(APawn* pPawn)
{
	return pPawn != nullptr && !pPawn->bDeleteMe && pPawn->Mesh != nullptr && pPawn->Health > 0;
}

void initConsole()
{
	if (GetConsoleWindow() == NULL)
	{
		AllocConsole();
		FILE* f;
		freopen_s(&f, "CONOUT$", "w", stdout);
		freopen_s(&f, "CONOUT$", "w", stderr);
		std::cout.clear();
		std::cin.clear();
	}
}

template <typename T>
void SafeDelete(T*& ptr)
{
	if (ptr != nullptr)
	{
		delete ptr;
		ptr = nullptr;
	}
}

#include <sstream>
#include <functional>

template <typename T>
void IfIsA(UObject* pObject, std::function<void(T*)> callback)
{
	if (pObject != nullptr && pObject->IsA(T::StaticClass()))
	{
		callback(static_cast<T*>(pObject));
	}
}

template <typename T>
void IteratePawnList(APawn* pPawn, std::function<void(T*)> callback)
{
	APawn* pCurrentPawn = pPawn;
	while (pCurrentPawn != nullptr)
	{
		IfIsA<T>(pCurrentPawn, callback);
		pCurrentPawn = pCurrentPawn->NextPawn;
	}
}

template <typename T>
void IterateActors(AWorldInfo* pWorldInfo, std::function<void(T*)> callback)
{
	auto actorLists = std::vector{
		pWorldInfo->FastOverlapListOne,
		pWorldInfo->FastOverlapListTwo,
		pWorldInfo->FastOverlapListThree,
		pWorldInfo->FastOverlapListFour,
		pWorldInfo->FastOverlapListFive,
		pWorldInfo->FastOverlapListSix,
	};
	for (auto& actors : actorLists) {
		for (size_t i = 0; i < actors.Num(); ++i) {
			IfIsA<T>(actors[i], callback);
		}
	}
}

#include <random>

FVector RandomizeLocationXY(FVector v)
{
	static std::default_random_engine random_engine;
	static std::uniform_real_distribution<float> distribution(-100.0f, 100.0f);
	return FVector{
		v.X + distribution(random_engine),
		v.Y + distribution(random_engine),
		v.Z,
	};
}

bool KeyPressed(ADunDefPlayerController* pController, const std::string& keyName) {
	auto GNames = FName::GetGlobalNames();
	auto keys = pController->PlayerInput->PressedKeys;
	for (size_t i = 0; i < keys.Num(); ++i)
	{
		auto name = GNames.GetByIndex(keys[i].Index);
		if (name->GetName() == keyName) return true;
	}
	return false;
}

void LuaPushEquipment(lua_State* L, UHeroEquipment* pEquipment) {
	bool isWeapon = pEquipment->EquipmentType == EEquipmentType::EQT_WEAPON;
	bool isPet = pEquipment->EquipmentType == EEquipmentType::EQT_FAMILIAR;
	bool isArmor = EEquipmentType::EQT_ARMOR_TORSO <= pEquipment->EquipmentType && pEquipment->EquipmentType <= EEquipmentType::EQT_ARMOR_GLOVES;
	bool isAccessory = EEquipmentType::EQT_ACCESSORY1 <= pEquipment->EquipmentType && pEquipment->EquipmentType <= EEquipmentType::EQT_MASK;

	lua_createtable(L, 0, 0);
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_HEALTH)]);
	lua_setfield(L, -2, "HeroHealth");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_SPEED)]);
	lua_setfield(L, -2, "HeroSpeed");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_DAMAGE)]);
	lua_setfield(L, -2, "HeroDamage");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_CASTINGRATE)]);
	lua_setfield(L, -2, "HeroCastingRate");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_HEROABILITYONE)]);
	lua_setfield(L, -2, "Ability1");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_HEROABILITYTWO)]);
	lua_setfield(L, -2, "Ability2");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_DEFENSEHEALTH)]);
	lua_setfield(L, -2, "TowerHealth");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_DEFENSEATTACKRATE)]);
	lua_setfield(L, -2, "TowerSpeed");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_DEFENSEBASEDAMAGE)]);
	lua_setfield(L, -2, "TowerDamage");
	lua_pushinteger(L, pEquipment->StatModifiers[static_cast<uint8_t>(ELevelUpValueType::LU_DEFENSEAOE)]);
	lua_setfield(L, -2, "TowerArea");
	lua_pushinteger(L, pEquipment->MaxEquipmentLevel);
	lua_setfield(L, -2, "Upgrades");
	lua_pushstring(L, isArmor ? "armor" : isAccessory ? "accessory" : isWeapon ? "weapon" : isPet ? "pet" : "unknown");
	lua_setfield(L, -2, "EquipmentType");
}

void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParms, void* pResult)
{
	static std::vector<std::string> seen_functions{};

	auto object_name = pObject->GetFullName();
	auto function_name = pFunction->GetFullName();

	IfIsA<UDunDefViewportClient>(pObject, [function_name](UDunDefViewportClient* pViewport) {
		if (function_name == "Function UDKGame.DunDefViewportClient.PostRender")
		{
			IfIsA<ADunDefPlayerController>(pViewport->GetPlayerController(), [](ADunDefPlayerController* pController) {
				IfIsA<AWorldInfo>(pController->WorldInfo, [pController](AWorldInfo* pWorldInfo) {
					IteratePawnList<ADunDefEnemy>(pWorldInfo->PawnList, [](ADunDefEnemy* pEnemy) {
						if (ValidPawn(pEnemy) && !pEnemy->IsPlayerAlly) {
							// TODO: We can read information about enemies here
						}
					});

					static bool bEndPreviouslyPressed = false;
					bool bEndPressed = KeyPressed(pController, "End");
					bool bHandleLoot = bEndPressed && !bEndPreviouslyPressed;
					bEndPreviouslyPressed = bEndPressed;
					if (bHandleLoot)
					{
						auto L = luaL_newstate();
						luaL_openlibs(L);
						if (luaL_dofile(L, "custom.lua") == LUA_OK) {
							lua_pop(L, lua_gettop(L));

							IterateActors<ADunDefDroppedEquipment>(pWorldInfo, [pController, bHandleLoot, &L](ADunDefDroppedEquipment* pDrop) {
								auto pEquipment = pDrop->MyEquipmentObject;
								UHeroEquipment* pCurrent = nullptr;
								UHeroEquipment* pCurrent2 = nullptr;

								for (size_t i = 0; i < pController->MyHero->HeroEquipments.Num(); i++) {
									auto pEquip = pController->MyHero->HeroEquipments[i];
									if (pEquip->EquipmentType == pEquipment->EquipmentType) {
										if (pCurrent == nullptr) pCurrent = pEquip;
										else if (pCurrent2 == nullptr) pCurrent2 = pEquip;
										else break;
									}
								}

								bool shouldMove = false;
								lua_getglobal(L, "ShouldLoot"); // func
								if (lua_isfunction(L, -1)) {
									LuaPushEquipment(L, pEquipment);
									if (pCurrent) LuaPushEquipment(L, pCurrent); else lua_pushnil(L);
									if (pCurrent2) LuaPushEquipment(L, pCurrent); else lua_pushnil(L);

									const int argCount = 3;
									const int returnCount = 1;
									if (lua_pcall(L, argCount, returnCount, 0) == LUA_OK) {
										if (lua_isboolean(L, -1)) {
											bool result = lua_toboolean(L, -1);
											lua_pop(L, 1); // pop result
											shouldMove = result;
										}
									}
								}

								if (shouldMove) pDrop->SetLocation(RandomizeLocationXY(pController->Pawn->Location));
								});
						}
						else {
							std::cout << "Error loading lua script" << std::endl;
							bHandleLoot = false;
						}

						lua_close(L);
					}
				});
			});
		}
	});

	auto skipLogging = std::find(seen_functions.begin(), seen_functions.end(), function_name) != seen_functions.end();
	if (!skipLogging)
	{
		logfile << "--- call\n";
		logfile << object_name << "\n";
		logfile << function_name << "\n";
		logfile << "ProcessEvent(" << HEX(pObject) << ", " << HEX(pFunction) << ", " << HEX(pParms) << ", " << HEX(pResult) << ")" << std::endl;

		std::cout << object_name << std::endl;
		std::cout << "- " << function_name << std::endl;
		seen_functions.push_back(function_name);
	}
}

UObject* __pObject;
UFunction* __pFunction;
void* __pParms;
void* __pResult;
void* pProcessEvent = nullptr;
void __declspec(naked) ProcessEventHook_Trampoline()
{
	__asm mov __pObject, ecx;
	__asm
	{
		push eax
		mov eax, dword ptr[esp + 0x8]
		mov __pFunction, eax
		mov eax, dword ptr[esp + 0xC]
		mov __pParms, eax
		mov eax, dword ptr[esp + 0x10]
		mov __pResult, eax
		pop eax
	}
	__asm pushad

	ProcessEventHook(__pObject, __pFunction, __pParms, __pResult);

	__asm popad
	__asm
	{
		push __pResult
		push __pParms
		push __pFunction
		mov ecx, __pObject
		call pProcessEvent
		retn 0xC
	}
}

void MainThread()
{
	initConsole();

	try
	{
		std::cout << "Running" << std::endl;
		logfile = std::ofstream("logfile.txt");


		uintptr_t PROCESSEVENT_ADDR = 0x00484490;
		//uintptr_t PROCESSEVENT_ADDR = 0x0060A640;
 
		uintptr_t PROCESSEVENT_INDEX = 0x104 / sizeof(void*);

		const uintptr_t GNAMES_ADDR = 0x01138f14;
		const uintptr_t GOBJECTS_ADDR = 0x0114b22c;

		FName::GNames = (TArray<FNameEntry*>*) GNAMES_ADDR;
		UObject::GObjects =(TArray<UObject*>*) GOBJECTS_ADDR;

		std::cout << "Attempting to hook ProcessEvent through DunDefViewportClient Transient.*" << std::endl;
		auto pDunDefViewportClient = UObject::FindObjectStartingWith<UDunDefViewportClient>("DunDefViewportClient Transient.");
		if (pDunDefViewportClient != nullptr)
		{
			std::cout << "Hooking ProcessEvent through DunDefViewportClient" << std::endl;
			pProcessEvent = BareVMTHook(pDunDefViewportClient, PROCESSEVENT_INDEX, ProcessEventHook_Trampoline);
			std::cout << "pProcessEvent: " << HEX(pProcessEvent) << std::endl;
		}
		else
		{
			std::cout << "Failed to hook ProcessEvent" << std::endl;
		}
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		HANDLE hThread = CreateThread(NULL, 0, [](LPVOID lpThreadParameter) -> DWORD {
			HMODULE hModule = static_cast<HMODULE>(lpThreadParameter);
			MainThread();
			ExitThread(0);
			}, hModule, 0, NULL);
		if (hThread) {
			CloseHandle(hThread);
		}
	}
	return TRUE;
}