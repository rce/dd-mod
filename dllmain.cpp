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

std::vector<std::string> ignoredEvents = {
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

void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParms, void* pResult)
{
	auto object_name = pObject->GetFullName();
	auto function_name = pFunction->GetFullName();


	if (function_name == "Function UDKGame.DunDefViewportClient.PostRender")
	{
		UCanvas* pCanvas = nullptr;
#undef DrawText
		if (pCanvas != nullptr)
		{
			//pCanvas->DrawText();
		}
	}
	else
	{
		logfile << "--- call\n";
		logfile << object_name << "\n";
		logfile << function_name << "\n";
		logfile << "ProcessEvent(" << HEX(pObject) << ", " << HEX(pFunction) << ", " << HEX(pParms) << ", " << HEX(pResult) << ")" << std::endl;

		std::cout << object_name << std::endl;
		std::cout << "- " << function_name << std::endl;
	}


	/*
	auto skipLogging = std::find(ignoredEvents.begin(), ignoredEvents.end(), function_name) != ignoredEvents.end();

	if (!skipLogging)
	{
		logfile << "--- call\n";
		logfile << object_name << "\n";
		logfile << function_name << "\n";
		logfile << "ProcessEvent(" << HEX(pObject) << ", " << HEX(pFunction) << ", " << HEX(pArgs) << ", " << HEX(pResult) << ")" << std::endl;
	}

	if (pObject->IsA(ADunDefDroppedEquipment::StaticClass()))
	{
		auto pDropped = static_cast<ADunDefDroppedEquipment*>(pObject);
		if (!skipLogging)
			std::cout << "ADunDefDroppedEquipment :: " << function_name << std::endl;

		if (function_name == "Function Engine.Actor.AllowSpawn"
			|| function_name == "Function UDKGame.DunDefDroppedEquipment.PostBeginPlay"
			|| function_name == "Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats"
			|| function_name == "Function UDKGame.DunDefDroppedEquipment.AddToFloorStats"
			|| function_name == "Function UDKGame.DunDefDroppedEquipment.PlayDroppedSound"
			)
		{
			auto pEquipment = pDropped->MyEquipmentObject;
			if (pEquipment != nullptr)
			{
				std::cout << "pEquipment: " << pEquipment->GetFullName() << std::endl;

				// TODO Check stats
				//pEquipment->MaxEquipmentLevel
				for (size_t i = 0; i < 0xB; i++)
				{
					//pEquipment->StatModifiers[i]
				}
			}
		}
	}
	else if (pObject->IsA(ADunDefPlayer::StaticClass()))
	{
		if (!skipLogging)
			std::cout << "ADunDefPlayer :: " << function_name << std::endl;

		ADunDefPlayer* pPlayer = static_cast<ADunDefPlayer*>(pObject);
		if (pFunction->GetFullName() == "Function UDKGame.DunDefPlayer.Tick")
		{
			// tick
			auto pHero = pPlayer->MyPlayerHero;
			if (pHero != nullptr)
			{
				pHero->CostOfExpBonus = 0;
				pHero->bGaveExpBonus = 0;
			}
		}
	}
	else if (pObject->IsA(ADunDefPlayerController::StaticClass()))
	{
		// ADunDefPlayerController :: Function UDKGame.DunDefPlayerController.CheckActivation -> when picking up
		ADunDefPlayerController* pPlayerController = static_cast<ADunDefPlayerController*>(pObject);
		if (function_name == "Function UDKGame.DunDefPlayerController.PlayerWalking.PlayerTick")
		{
			// tick
			if (GetAsyncKeyState(VK_END) & 0x01)
			{
				for (auto i = 0u; i < UObject::GetGlobalObjects().Num(); ++i)
				{
					auto pObject = UObject::GetGlobalObjects().GetByIndex(i);
					if (pObject != nullptr && pObject->IsA(ADunDefEnemy::StaticClass()))
					{
						auto pEnemy = static_cast<ADunDefEnemy*>(pObject);
						if (ValidPawn(pEnemy))
						{
							pEnemy->Health = 0;
							//pEnemy->lastDamageCauser = pPlayerController;
							//pEnemy->TrueKiller = pPlayerController;
							//pEnemy->TrueDamageCauser = pPlayerController;
							//pEnemy->EnemyLifeSpan = 0.0f;
							//pEnemy->Location = pPlayerController->Location;
							pEnemy->Died();
						}
					}
				}
			}

			auto pHero = pPlayerController->MyHero;
			pHero->bGaveExpBonus = 0;
			pHero->CostOfExpBonus = 0;

			// Inspect gear
			for (size_t i = 0; i < pHero->HeroEquipments.Num(); ++i)
			{
				auto pItem = pHero->HeroEquipments[i];
				// Stats
				pItem->EquipmentType == EEquipmentType::EQT_ARMOR_TORSO;
				pItem->StatModifiers;
				pItem->StatObjectArray;
				pItem->MaxEquipmentLevel;
				pItem->DroppedLocation;
			}
		}
		else
		{
			if (!skipLogging)
				std::cout << "ADunDefPlayerController :: " << function_name << std::endl;
		}
	}
	*/
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

		UObject::pProcessEvent = (UObject::ProcessEvent_t) PROCESSEVENT_ADDR;
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

			UObject::pProcessEvent = (UObject::ProcessEvent_t)pProcessEvent;
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

			UObject::pProcessEvent = (UObject::ProcessEvent_t)pProcessEvent;
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