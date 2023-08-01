// dllmain.cpp : Defines the entry point for the DLL application.
#include <locale>
#include "SDK.hpp"
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <Windows.h>
#include "VMTHook.h"
#include "InjectionLock.h"

using namespace Classes;

#define HEX(value) std::setfill('0') << std::setw(8) << std::hex << value << std::dec << std::setfill(' ') << std::setw(0)

#include <fstream>
std::ofstream logfile;

std::vector<std::string> ignored_functions = {
	// ADunDefDroppedEquipment
	"Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh",
	"Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh",
	//"Function Engine.Actor.AllowSpawn",
	// ADunDefPlayerController
	"Function UDKGame.DunDefPlayerController.GetPlayerViewPoint",
	"Function Engine.PlayerController.GetFOVAngle",
	"Function Engine.PlayerController.PreRender", // where postrender?
	"Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick",
	"Function Engine.PlayerController.ClientHearSound",
	"Function Engine.PlayerController.HearSoundFinished",
	// ADunDefPlayer
	"Function UDKGame.DunDefPlayer.Tick",
	"Function UDKGame.DunDefPlayer.Bump",
	"Function UDKGame.DunDefPawn.PlayFootStepSound",
	// DunDefHUD
	"Function UDKGame.DunDefHUD.PostRender", // a lot of noise!
};

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
	bool bKeyHome = GetAsyncKeyState(VK_HOME) & 0x01;
	bool bKeyEnd = GetAsyncKeyState(VK_END) & 0x01;

	auto object_name = pObject->GetFullName();
	auto function_name = pFunction->GetFullName();

	IfIsA<UDunDefViewportClient>(pObject, [function_name, bKeyHome, bKeyEnd](UDunDefViewportClient* pViewport) {
		if (function_name == "Function UDKGame.DunDefViewportClient.PostRender")
		{
			IfIsA<ADunDefPlayerController>(pViewport->GetPlayerController(), [bKeyHome, bKeyEnd](ADunDefPlayerController* pController) {

				IfIsA<AWorldInfo>(pController->WorldInfo, [pController, bKeyHome, bKeyEnd](AWorldInfo* pWorldInfo) {
					IteratePawnList<ADunDefEnemy>(pWorldInfo->PawnList, [](ADunDefEnemy* pEnemy) {
						if (ValidPawn(pEnemy) && !pEnemy->IsPlayerAlly) {
							// TODO: We can read information about enemies here
						}
					});

					IterateActors<ADunDefDroppedEquipment>(pWorldInfo, [](ADunDefDroppedEquipment* pDrop) {
						std::cout << "Found drop: " << pDrop->GetFullName() << std::endl;
						// TODO: And compare dropped gear to our current ones here!
						// Current gear: pController->MyHero->HeroEquipments
						// Dropped gear: pDrop->MyEquipmentObject
					});
				});
			});
		}

		if (function_name == "Function UDKGame.DunDefViewportClient.PostRender")
		{
			UCanvas* pCanvas = nullptr;
			if (pCanvas != nullptr)
			{
				//pCanvas->DrawText();
			}
		}
	});

	auto skipLogging = std::find(ignored_functions.begin(), ignored_functions.end(), function_name) != ignored_functions.end();
	if (!skipLogging)
	{
		logfile << "--- call\n";
		logfile << object_name << "\n";
		logfile << function_name << "\n";
		logfile << "ProcessEvent(" << HEX(pObject) << ", " << HEX(pFunction) << ", " << HEX(pParms) << ", " << HEX(pResult) << ")" << std::endl;

		std::cout << object_name << std::endl;
		std::cout << "- " << function_name << std::endl;
		ignored_functions.push_back(function_name);
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

ADunDefPlayerController* FindPlayerController()
{
	auto x = UObject::FindObjectStartingWith<ADunDefPlayerController>("DunDefPlayerController DD_Lev_");
	if (x) return x;
	return UObject::FindObjectStartingWith<ADunDefPlayerController>("DunDefPlayerController LobbyLevel_Expansion.");
}

void MainThread()
{
	initConsole();
	InjectionLock lock{};

	try
	{
		std::cout << "Running" << std::endl;
		logfile = std::ofstream("logfile.txt");


		uintptr_t PROCESSEVENT_ADDR = 0x00484490;
		//uintptr_t PROCESSEVENT_ADDR = 0x0060A640;
 
		uintptr_t PROCESSEVENT_INDEX = 0x104 / sizeof(void*);

		const uintptr_t GNAMES_ADDR = 0x01138f14;
		const uintptr_t GOBJECTS_ADDR = 0x0114b22c;

		UObject::pProcessEvent = (void*) PROCESSEVENT_ADDR;
		FName::GNames = (TArray<FNameEntry*>*) GNAMES_ADDR;
		UObject::GObjects =(TArray<UObject*>*) GOBJECTS_ADDR;

		std::cout << "Attempting to hook ProcessEvent through DunDefViewportClient Transient.*" << std::endl;
		auto pDunDefViewportClient = UObject::FindObjectStartingWith<UDunDefViewportClient>("DunDefViewportClient Transient.");
		if (pDunDefViewportClient != nullptr)
		{
			std::cout << "Hooking ProcessEvent through DunDefViewportClient" << std::endl;
			pProcessEvent = BareVMTHook(pDunDefViewportClient, PROCESSEVENT_INDEX, ProcessEventHook_Trampoline);
			std::cout << "pProcessEvent: " << HEX(pProcessEvent) << std::endl;
			//pProcessEvent: 

			UObject::pProcessEvent = pProcessEvent;
		}
		else
		{

		std::cout << "Attempting to hook ProcessEvent through PlayerController" << std::endl;
		auto pPlayerController = FindPlayerController();
		if (pPlayerController != nullptr)
		{
			std::cout << "Hooking ProcessEvent through PlayerController" << std::endl;
			pProcessEvent = BareVMTHook(pPlayerController, PROCESSEVENT_INDEX, ProcessEventHook_Trampoline);
			std::cout << "pProcessEvent: " << HEX(pProcessEvent) << std::endl;
			//pProcessEvent: 0060A640

			UObject::pProcessEvent = pProcessEvent;
		}
		else
		{
			std::cout << "Failed to hook ProcessEvent" << std::endl;
		}
		}
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	lock.WaitForLockRequest();
	//SafeDelete(pProcessEventHook);
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