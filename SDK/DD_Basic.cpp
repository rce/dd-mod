// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
TArray<FNameEntry*>* FName::GNames = nullptr;
TArray<UObject*>* UObject::GObjects = nullptr;
UObject::ProcessEvent_t UObject::pProcessEvent = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
