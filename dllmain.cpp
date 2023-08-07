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
#include "DirectXHook.h"
#include <random>
#include <sstream>
#include <functional>
#include "imgui.h"

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

using namespace Classes;

const uintptr_t GNAMES_ADDR = 0x01138f14;
const uintptr_t GOBJECTS_ADDR = 0x0114b22c;
const uintptr_t PROCESSEVENT_INDEX = 0x104 / sizeof(void*);

struct ProcessEventHookDetails {
	int ObjectInternalInteger;
	VMTHookDetails hookDetails;
};
std::vector<ProcessEventHookDetails> g_ProcessEventHookDetails{};
ProcessEventHookDetails SetProcessEventHook(UObject* pObject);

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

template<typename C, typename V>
bool contains(C coll, V value)
{
	return std::find(coll.begin(), coll.end(), value) != coll.end();
}

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
	if (pController->PlayerInput == nullptr) return false;
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

#define KEY_PRESSED(keyName) \
	static bool b##keyName##PreviouslyPressed = false; \
	bool b##keyName##Pressed = KeyPressed(pController, #keyName); \
	bool b##keyName##WasPressed = b##keyName##Pressed && !b##keyName##PreviouslyPressed; \
	b##keyName##PreviouslyPressed = b##keyName##Pressed;

#define IF_KEY_PRESSED(keyName) \
	KEY_PRESSED(keyName) \
	if (b##keyName##WasPressed)

static int lua_imgui_print(lua_State* L) {
	int nargs = lua_gettop(L);
	std::string logline = "";
	for (int i = 1; i <= nargs; ++i) {
		if (lua_isstring(L, i)) {
			auto str =lua_tostring(L, i);
			logline += str;
		}
		else {
			lua_pop(L, i);
		}
	}
	std::cout << "lua_imgui_print: " << logline.c_str() << std::endl;
	AddLogLine(logline);
	return 0;
}

void ProcessEventHook_Trampoline();

void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParms, void* pResult)
{
	auto object_name = pObject->GetFullName();
	auto function_name = pFunction->GetFullName();

	IfIsA<UDunDefViewportClient>(pObject, [function_name](UDunDefViewportClient* pViewport) {
		if (function_name == "Function Engine.GameViewportClient.LayoutPlayers")
		{
			// We grab and hook the player controller here because calling GetPlayerController()
			// on every frame breaks parts of the UI such as viewing minimap and hides the cursor.
			static APlayerController* pKnownController = nullptr;
			auto pController = pViewport->GetPlayerController();
			if (pController != pKnownController) {
				pKnownController = pController;
				std::cout << "New controller: " << HEX(pController) << std::endl;
				SetProcessEventHook(pController);
			}
		}
	});

	IfIsA<ADunDefPlayerController>(pObject, [function_name](ADunDefPlayerController* pController) {
		if (function_name == "Function Engine.PlayerController.Destroyed") {
			// TODO Cleanup this player controller hook
		} else if (function_name == "Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick") {
			IfIsA<ADunDefPlayerController>(pController, [](ADunDefPlayerController* pController) {
				IfIsA<AWorldInfo>(pController->WorldInfo, [pController](AWorldInfo* pWorldInfo) {
					IF_KEY_PRESSED(End) {
						auto L = luaL_newstate();
						luaL_openlibs(L);
						static const struct luaL_Reg printlib[] = {
							{"print", lua_imgui_print},
							{NULL, NULL},
						};
						lua_getglobal(L, "_G");
						luaL_setfuncs(L, printlib, 0);
						lua_pop(L, 1);
						if (luaL_dofile(L, "custom.lua") != LUA_OK) {
							std::cout << "Lua error: " << lua_tostring(L, lua_gettop(L)) << std::endl;
						} else {
							lua_pop(L, lua_gettop(L));

							IterateActors<ADunDefDroppedEquipment>(pWorldInfo, [pController, &L](ADunDefDroppedEquipment* pDrop) {
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
								// Call function ShouldLoot(droppedEquipment, currentEquipment, currentEquipment2)
								// to figure out whether the equipment should be moved to the player
								lua_getglobal(L, "ShouldLoot");
								if (lua_isfunction(L, -1)) {
									LuaPushEquipment(L, pEquipment);
									if (pCurrent) LuaPushEquipment(L, pCurrent); else lua_pushnil(L);
									if (pCurrent2) LuaPushEquipment(L, pCurrent); else lua_pushnil(L);

									const int argCount = 3;
									const int returnCount = 1;
									if (lua_pcall(L, argCount, returnCount, 0) == LUA_OK) {
										if (lua_isboolean(L, -1)) {
											bool result = lua_toboolean(L, -1);
											lua_pop(L, 1);
											shouldMove = result;
										}
									}
								}

								if (shouldMove) {
									if (pController->Pawn != nullptr) {
										pDrop->SetLocation(RandomizeLocationXY(pController->Pawn->Location));
									}
								}
							});
						}

						lua_close(L);
					}
				});
			});
		}
	});

	static std::vector<std::string> seen_functions{};
	if (!contains(seen_functions, function_name))
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
ProcessEventHookDetails SetProcessEventHook(UObject* pObject) {
	auto details = BareVMTHook(pObject, PROCESSEVENT_INDEX, ProcessEventHook_Trampoline);
	ProcessEventHookDetails hook_info{ pObject->ObjectInternalInteger, details };
	g_ProcessEventHookDetails.push_back(hook_info);
	return hook_info;
}

void RemoveProcessEventHooks() {
	for (auto& hook : g_ProcessEventHookDetails) {
		for (size_t i = 0; i < UObject::GObjects->Num(); ++i) {
			if (UObject::GObjects->IsValidIndex(i)) {
				auto pObject = UObject::GObjects->GetByIndex(i);
				if ((void*)pObject == (void*)hook.hookDetails.object) {
					RevertVMTHook(hook.hookDetails);
				}
			}
		}
	}
	g_ProcessEventHookDetails.clear();
}

void MainThread()
{
	initConsole();

	try
	{
		std::cout << "Running" << std::endl;
		SetupRenderHook();
		logfile = std::ofstream("logfile.txt");

		FName::GNames = (TArray<FNameEntry*>*) GNAMES_ADDR;
		UObject::GObjects =(TArray<UObject*>*) GOBJECTS_ADDR;

		std::cout << "Attempting to hook ProcessEvent through DunDefViewportClient Transient.*" << std::endl;
		auto pDunDefViewportClient = UObject::FindObjectStartingWith<UDunDefViewportClient>("DunDefViewportClient Transient.");
		if (pDunDefViewportClient != nullptr)
		{
			std::cout << "Hooking ProcessEvent through DunDefViewportClient " << HEX(pDunDefViewportClient) << std::endl;
			pProcessEvent = SetProcessEventHook(pDunDefViewportClient).hookDetails.original_function;
			std::cout << "pProcessEvent: " << HEX(pProcessEvent) << std::endl;
		}
		else
		{
			std::cout << "Failed to hook ProcessEvent" << std::endl;
		}

		while (!(GetAsyncKeyState(VK_INSERT) & 0x01)) Sleep(100);
		std::cout << "Cleaning up" << std::endl;
		RemoveProcessEventHooks();
		CleanupRenderHook();
		std::cout << "Cleaned up" << std::endl;
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