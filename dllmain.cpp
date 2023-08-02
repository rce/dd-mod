// dllmain.cpp : Defines the entry point for the DLL application.
#include <locale>
#include "SDK.hpp"
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <Windows.h>
#include "VMTHook.h"
#include <fstream>

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
		for (auto i = 0; i < actors.Num(); ++i) {
			IfIsA<T>(actors[i], callback);
		}
	}
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

					bool bHandleLoot = GetAsyncKeyState(VK_END) & 0x01;
					IterateActors<ADunDefDroppedEquipment>(pWorldInfo, [pController, bHandleLoot](ADunDefDroppedEquipment* pDrop) {
						if (!bHandleLoot) return;
						// TODO: And compare dropped gear to our current ones here!
						// Current gear: pController->MyHero->HeroEquipments
						// Dropped gear: pDrop->MyEquipmentObject
						auto pEquipment = pDrop->MyEquipmentObject;

						// 0 = ?
						// 1 = HERO_HEALTH
						// 2 = HERO_SPEED
						// 3 = HERO_DAMAGE
						// 4 = HERO_CAST_RATE
						// 5 = HERO_ABILITY ?
						// 6 = HERO_ABILITY ?
						// 7 = TOWER_HEALTH
						// 8 = TOWER_CAST_RATE
						// 9 = HERO_DAMAGE
						// 10 = TOWER_RANGE
						for (size_t i = 0; i < 0xb; i++)
						{
							if (pEquipment->StatModifiers[i] > 150)
							{
								pDrop->SetLocation(pController->Pawn->Location);
							}
						}
					});
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