#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DunDefMiscNoMedia.DunDefGameStorageUpdates
// 0x03E4 (0x0420 - 0x003C)
class UDunDefGameStorageUpdates : public UObject
{
public:
	struct FGameStorage_FIXED_35                       StorageData_35;                                           // 0x003C(0x01EC)
	struct FGameStorage_FIXED_36                       StorageData_36;                                           // 0x0228(0x01F8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefMiscNoMedia.DunDefGameStorageUpdates");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
