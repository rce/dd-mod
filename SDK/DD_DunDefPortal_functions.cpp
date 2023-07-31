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

// Function DunDefPortal.DunDefPortalNode.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefPortalNode::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.PostBeginPlay");

	ADunDefPortalNode_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.Tick
// (Defined, Simulated, Event, Public)

void ADunDefPortalNode::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.Tick");

	ADunDefPortalNode_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.AllowSpawn
// (Defined, Event, Static, Public)

void ADunDefPortalNode::STATIC_AllowSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.AllowSpawn");

	ADunDefPortalNode_AllowSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.FadeOut
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefPortalNode::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.FadeOut");

	ADunDefPortalNode_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.Touch
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDefPortalNode::Touch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.Touch");

	ADunDefPortalNode_Touch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefPortalNode::ExecReplicatedFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.ExecReplicatedFunction");

	ADunDefPortalNode_ExecReplicatedFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefPortalNode.ReplicatedEvent
// (Defined, Simulated, Event, Public)

void ADunDefPortalNode::ReplicatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefPortalNode.ReplicatedEvent");

	ADunDefPortalNode_ReplicatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume
// (Defined, Public, HasDefaults)

void ADunDefWeapon_PortalGun::HitBlockingVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HitBlockingVolume");

	ADunDefWeapon_PortalGun_HitBlockingVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume
// (Defined, Public)

void ADunDefWeapon_PortalGun::IsInAnyPortalBlockingVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.IsInAnyPortalBlockingVolume");

	ADunDefWeapon_PortalGun_IsInAnyPortalBlockingVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.Tick
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_PortalGun::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.Tick");

	ADunDefWeapon_PortalGun_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors
// (Defined, Simulated, Public, HasOutParms)

void ADunDefWeapon_PortalGun::GetReloadingColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetReloadingColors");

	ADunDefWeapon_PortalGun_GetReloadingColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::HasBothPortals()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HasBothPortals");

	ADunDefWeapon_PortalGun_HasBothPortals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal
// (Defined, Public)

void ADunDefWeapon_PortalGun::ClearPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ClearPortal");

	ADunDefWeapon_PortalGun_ClearPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_PortalGun::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.Destroyed");

	ADunDefWeapon_PortalGun_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::DetachWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.DetachWeapon");

	ADunDefWeapon_PortalGun_DetachWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied
// (Defined, Public)

void ADunDefWeapon_PortalGun::HolderDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HolderDied");

	ADunDefWeapon_PortalGun_HolderDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire
// (Defined, Simulated, Public, HasDefaults)

void ADunDefWeapon_PortalGun::CustomFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.CustomFire");

	ADunDefWeapon_PortalGun_CustomFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles
// (Simulated, HasOptionalParms, Public)

void ADunDefWeapon_PortalGun::ShootProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ShootProjectiles");

	ADunDefWeapon_PortalGun_ShootProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::HasAnyAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.HasAnyAmmo");

	ADunDefWeapon_PortalGun_HasAnyAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::BeginFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.BeginFire");

	ADunDefWeapon_PortalGun_BeginFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal
// (Defined, Simulated, HasOptionalParms, Public, HasOutParms)

void ADunDefWeapon_PortalGun::GetSiblingPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetSiblingPortal");

	ADunDefWeapon_PortalGun_GetSiblingPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefWeapon_PortalGun::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PostBeginPlay");

	ADunDefWeapon_PortalGun_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::PlayCancelAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PlayCancelAnimation");

	ADunDefWeapon_PortalGun_PlayCancelAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefWeapon_PortalGun::PlayedShootAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.PlayedShootAnimation");

	ADunDefWeapon_PortalGun_PlayedShootAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::GetTotalAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetTotalAmmo");

	ADunDefWeapon_PortalGun_GetTotalAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::GetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetMaxAmmo");

	ADunDefWeapon_PortalGun_GetMaxAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::GetAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmo");

	ADunDefWeapon_PortalGun_GetAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::GetAmmoPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.GetAmmoPercent");

	ADunDefWeapon_PortalGun_GetAmmoPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo
// (Defined, Simulated, Public)

void ADunDefWeapon_PortalGun::UsesAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.UsesAmmo");

	ADunDefWeapon_PortalGun_UsesAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefWeapon_PortalGun::ExecReplicatedFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefPortal.DunDefWeapon_PortalGun.ExecReplicatedFunction");

	ADunDefWeapon_PortalGun_ExecReplicatedFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
