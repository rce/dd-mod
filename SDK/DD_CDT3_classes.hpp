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

// Class CDT3.DunDefProjectile_Meteor_HeroScaling
// 0x0004 (0x038C - 0x0388)
class ADunDefProjectile_Meteor_HeroScaling : public ADunDefProjectile_Meteor
{
public:
	float                                              FireDamageScale;                                          // 0x0388(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT3.DunDefProjectile_Meteor_HeroScaling");
		return ptr;
	}


	void SpawnFires();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
