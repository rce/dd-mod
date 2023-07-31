// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires
// (Defined, Public, HasDefaults)

void ADunDefProjectile_Meteor_HeroScaling::SpawnFires()
{
	static auto fn = UObject::FindObject<UFunction>("Function CDT3.DunDefProjectile_Meteor_HeroScaling.SpawnFires");

	ADunDefProjectile_Meteor_HeroScaling_SpawnFires_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
