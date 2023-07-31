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

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
// (Defined, Simulated, Public)

void ADunDefProjectile_Meteor::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed");

	ADunDefProjectile_Meteor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
// (Defined, Public, HasDefaults)

void ADunDefProjectile_Meteor::SpawnFires()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires");

	ADunDefProjectile_Meteor_SpawnFires_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
// (Defined, Simulated, Public)

void ADunDefProjectile_Meteor::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Explode");

	ADunDefProjectile_Meteor_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
// (Defined, Simulated, Public, HasDefaults)

void ADunDefProjectile_Meteor::UpdateDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal");

	ADunDefProjectile_Meteor_UpdateDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
// (Defined, Simulated, Public, HasDefaults)

void ADunDefProjectile_Meteor::UpdateShadow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow");

	ADunDefProjectile_Meteor_UpdateShadow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
// (Defined, Simulated, Public)

void ADunDefProjectile_Meteor::DoHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming");

	ADunDefProjectile_Meteor_DoHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
// (Defined, Simulated, Event, Public)

void ADunDefProjectile_Meteor::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.Tick");

	ADunDefProjectile_Meteor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefProjectile_Meteor::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay");

	ADunDefProjectile_Meteor_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
// (Defined, Public)

void ADropOffPoint::GetIsBeingUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed");

	ADropOffPoint_GetIsBeingUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
// (Defined, Public)

void ADropOffPoint::SetBeingUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DropOffPoint.SetBeingUsed");

	ADropOffPoint_SetBeingUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
// (Defined, Simulated, Public)

void ADunDef_DamagingInterpActor::StopsProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile");

	ADunDef_DamagingInterpActor_StopsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
// (Defined, Public)

void ADunDef_DamagingInterpActor::GetDamageAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount");

	ADunDef_DamagingInterpActor_GetDamageAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
// (Defined, Event, Public, HasDefaults)

void ADunDef_DamagingInterpActor::RanInto()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto");

	ADunDef_DamagingInterpActor_RanInto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
// (Defined, Event, Public)

void ADunDef_DamagingInterpActor::EncroachingOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn");

	ADunDef_DamagingInterpActor_EncroachingOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
// (Defined, Public)

void ADunDef_DamagingInterpActor::ClearDamageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList");

	ADunDef_DamagingInterpActor_ClearDamageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
// (Defined, HasOptionalParms, Public)

void ADunDef_DamagingInterpActor::SetDoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage");

	ADunDef_DamagingInterpActor_SetDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
// (Defined, Simulated, Public)

void ADunDef_OldOne::GetLightningTowerDamagePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent");

	ADunDef_OldOne_GetLightningTowerDamagePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
// (Defined, Public)

void ADunDef_OldOne::setIsWebbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.setIsWebbed");

	ADunDef_OldOne_setIsWebbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.isWebbed
// (Defined, Public)

void ADunDef_OldOne::isWebbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.isWebbed");

	ADunDef_OldOne_isWebbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
// (Defined, Public)

void ADunDef_OldOne::GetChainIgnore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore");

	ADunDef_OldOne_GetChainIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
// (Defined, Public)

void ADunDef_OldOne::SetChainIgnore()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore");

	ADunDef_OldOne_SetChainIgnore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
// (Defined, Public)

void ADunDef_OldOne::IsBeingChainedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy");

	ADunDef_OldOne_IsBeingChainedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
// (Defined, Public)

void ADunDef_OldOne::RemoveFromChainingTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers");

	ADunDef_OldOne_RemoveFromChainingTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
// (Defined, Public)

void ADunDef_OldOne::AddToChainingTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers");

	ADunDef_OldOne_AddToChainingTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
// (Defined, Public)

void ADunDef_OldOne::AllowSuction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AllowSuction");

	ADunDef_OldOne_AllowSuction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::IsPlayingCustomAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim");

	ADunDef_OldOne_IsPlayingCustomAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOne::SetupDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing");

	ADunDef_OldOne_SetupDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOne::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing");

	ADunDef_OldOne_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
// (Defined, Simulated, Public)

void ADunDef_OldOne::LocalTookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage");

	ADunDef_OldOne_LocalTookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
// (Defined, Public)

void ADunDef_OldOne::NotifyHealthLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel");

	ADunDef_OldOne_NotifyHealthLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
// (Defined, HasOptionalParms, Public)

void ADunDef_OldOne::HealPctOfMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth");

	ADunDef_OldOne_HealPctOfMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
// (Defined, Simulated, Public)

void ADunDef_OldOne::GetHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent");

	ADunDef_OldOne_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetHealth
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetHealth");

	ADunDef_OldOne_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
// (Simulated, Public)

void ADunDef_OldOne::ForceMoveActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor");

	ADunDef_OldOne_ForceMoveActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
// (Simulated, Public)

void ADunDef_OldOne::GetOverrideTargetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent");

	ADunDef_OldOne_GetOverrideTargetComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetMass
// (Simulated, Public)

void ADunDef_OldOne::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetMass");

	ADunDef_OldOne_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
// (Simulated, Public)

void ADunDef_OldOne::AllowDarknessIgnorance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance");

	ADunDef_OldOne_AllowDarknessIgnorance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
// (HasOptionalParms, Public)

void ADunDef_OldOne::ForceFriendlyFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire");

	ADunDef_OldOne_ForceFriendlyFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
// (Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::GetInterpolatedTargetingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation");

	ADunDef_OldOne_GetInterpolatedTargetingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
// (Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::GetTargetingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation");

	ADunDef_OldOne_GetTargetingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
// (Public)

void ADunDef_OldOne::OnDestroy_RemoveFromTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList");

	ADunDef_OldOne_OnDestroy_RemoveFromTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
// (Public)

void ADunDef_OldOne::OnPostBeginPlay_AddToTargetableList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList");

	ADunDef_OldOne_OnPostBeginPlay_AddToTargetableList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
// (Public)

void ADunDef_OldOne::UnregisterAttacker()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker");

	ADunDef_OldOne_UnregisterAttacker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
// (Public)

void ADunDef_OldOne::RegisterAttacker()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker");

	ADunDef_OldOne_RegisterAttacker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
// (Public)

void ADunDef_OldOne::GetAttackRangeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset");

	ADunDef_OldOne_GetAttackRangeOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
// (Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::IgnoreFriendlyFireDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage");

	ADunDef_OldOne_IgnoreFriendlyFireDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
// (Defined, Simulated, Public)

void ADunDef_OldOne::GetTargetingTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam");

	ADunDef_OldOne_GetTargetingTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
// (Defined, Simulated, Public)

void ADunDef_OldOne::GetTowerTargetingDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability");

	ADunDef_OldOne_GetTowerTargetingDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::GetPlayerTargetingDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability");

	ADunDef_OldOne_GetPlayerTargetingDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::TraceEyeMultiBeamDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg");

	ADunDef_OldOne_TraceEyeMultiBeamDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::SetMultiEyeBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation");

	ADunDef_OldOne_SetMultiEyeBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::TraceMultiEyeBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam");

	ADunDef_OldOne_TraceMultiEyeBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
// (Defined, Public)

void ADunDef_OldOne::SpawnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnFire");

	ADunDef_OldOne_SpawnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::TraceRightEyeDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg");

	ADunDef_OldOne_TraceRightEyeDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::SetRightEyeBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation");

	ADunDef_OldOne_SetRightEyeBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::TraceLeftEyeDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg");

	ADunDef_OldOne_TraceLeftEyeDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::SetLeftEyeBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation");

	ADunDef_OldOne_SetLeftEyeBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::TraceRightEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceRightEye");

	ADunDef_OldOne_TraceRightEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::TraceLeftEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye");

	ADunDef_OldOne_TraceLeftEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::TraceBellyMultiBeamDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg");

	ADunDef_OldOne_TraceBellyMultiBeamDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::TraceBellyBeamDmg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg");

	ADunDef_OldOne_TraceBellyBeamDmg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::SetBellyBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation");

	ADunDef_OldOne_SetBellyBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::SetMultiBellyBeamLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation");

	ADunDef_OldOne_SetMultiBellyBeamLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::TraceMultiBellyBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam");

	ADunDef_OldOne_TraceMultiBellyBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
// (Defined, Simulated, Public)

void ADunDef_OldOne::SetRandomLazerPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint");

	ADunDef_OldOne_SetRandomLazerPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::TraceBellyBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam");

	ADunDef_OldOne_TraceBellyBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
// (Defined, Simulated, Public)

void ADunDef_OldOne::SetNormalBellyTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget");

	ADunDef_OldOne_SetNormalBellyTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOne::InitNormalBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams");

	ADunDef_OldOne_InitNormalBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
// (Defined, Public)

void ADunDef_OldOne::ChooseTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ChooseTarget");

	ADunDef_OldOne_ChooseTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartLazers
// (Event, Public)

void ADunDef_OldOne::StartLazers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartLazers");

	ADunDef_OldOne_StartLazers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
// (Defined, Simulated, Event, Public)

void ADunDef_OldOne::StopFlameBreath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath");

	ADunDef_OldOne_StopFlameBreath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::StartFlameSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep");

	ADunDef_OldOne_StartFlameSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::StartFlameburst()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartFlameburst");

	ADunDef_OldOne_StartFlameburst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateChestCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal");

	ADunDef_OldOne_ActivateChestCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateRightHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal");

	ADunDef_OldOne_ActivateRightHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateLeftHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal");

	ADunDef_OldOne_ActivateLeftHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateChestCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal");

	ADunDef_OldOne_DeactivateChestCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateRightHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal");

	ADunDef_OldOne_DeactivateRightHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
// (Defined, Event, Public)

void ADunDef_OldOne::DeactivateLeftHandCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal");

	ADunDef_OldOne_DeactivateLeftHandCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
// (Defined, Simulated, Public)

void ADunDef_OldOne::SpawnDoubleSlamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter");

	ADunDef_OldOne_SpawnDoubleSlamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
// (Defined, Simulated, Public)

void ADunDef_OldOne::SpawnSingleSlamEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter");

	ADunDef_OldOne_SpawnSingleSlamEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleStomp");

	ADunDef_OldOne_DoubleStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::RightFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightFootStomp");

	ADunDef_OldOne_RightFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::LeftFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp");

	ADunDef_OldOne_LeftFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
// (Defined, Public)

void ADunDef_OldOne::UpdateDifficultyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues");

	ADunDef_OldOne_UpdateDifficultyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
// (Defined, Event, Public)

void ADunDef_OldOne::DeActivateCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage");

	ADunDef_OldOne_DeActivateCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
// (Defined, Event, Public)

void ADunDef_OldOne::ActivateCollisionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage");

	ADunDef_OldOne_ActivateCollisionDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
// (Defined, Public)

void ADunDef_OldOne::GetNumCrystalsThisPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase");

	ADunDef_OldOne_GetNumCrystalsThisPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
// (Defined, Public)

void ADunDef_OldOne::DoPhaseShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift");

	ADunDef_OldOne_DoPhaseShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
// (Defined, Public)

void ADunDef_OldOne::ArePlayersWithinRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange");

	ADunDef_OldOne_ArePlayersWithinRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoDeath
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::DoDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoDeath");

	ADunDef_OldOne_DoDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
// (Defined, Public)

void ADunDef_OldOne::CheckCrystalDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths");

	ADunDef_OldOne_CheckCrystalDeaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
// (Defined, Public)

void ADunDef_OldOne::NotifyCrystalDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath");

	ADunDef_OldOne_NotifyCrystalDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleFootStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp");

	ADunDef_OldOne_DoubleFootStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
// (Event, Public)

void ADunDef_OldOne::LeftHandProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile");

	ADunDef_OldOne_LeftHandProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
// (Event, Public)

void ADunDef_OldOne::RightHandProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile");

	ADunDef_OldOne_RightHandProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
// (Defined, Simulated, Public)

void ADunDef_OldOne::PickSmashAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack");

	ADunDef_OldOne_PickSmashAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
// (Simulated, Public)

void ADunDef_OldOne::DoProjectileAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack");

	ADunDef_OldOne_DoProjectileAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
// (Simulated, Public)

void ADunDef_OldOne::CheckProjectileAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack");

	ADunDef_OldOne_CheckProjectileAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
// (Simulated, Public)

void ADunDef_OldOne::CheckForTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt");

	ADunDef_OldOne_CheckForTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
// (Public)

void ADunDef_OldOne::CheckForBeamAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack");

	ADunDef_OldOne_CheckForBeamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
// (Simulated, Public)

void ADunDef_OldOne::DoTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoTaunt");

	ADunDef_OldOne_DoTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
// (Defined, Simulated, Public)

void ADunDef_OldOne::GetTauntAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim");

	ADunDef_OldOne_GetTauntAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
// (Defined, Simulated, Public)

void ADunDef_OldOne::PlayHurtAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim");

	ADunDef_OldOne_PlayHurtAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
// (Defined, Public)

void ADunDef_OldOne::FinishTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.FinishTaunt");

	ADunDef_OldOne_FinishTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
// (Defined, Public, HasDefaults)

void ADunDef_OldOne::SpawnMeteor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor");

	ADunDef_OldOne_SpawnMeteor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
// (Defined, Event, Public)

void ADunDef_OldOne::StartMeteorAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack");

	ADunDef_OldOne_StartMeteorAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
// (Public)

void ADunDef_OldOne::CheckForMeteorAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack");

	ADunDef_OldOne_CheckForMeteorAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
// (Public)

void ADunDef_OldOne::CheckForFlame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForFlame");

	ADunDef_OldOne_CheckForFlame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
// (Public)

void ADunDef_OldOne::CheckForLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForLazer");

	ADunDef_OldOne_CheckForLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
// (Public)

void ADunDef_OldOne::CheckForSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.CheckForSweep");

	ADunDef_OldOne_CheckForSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.EndAttack
// (HasOptionalParms, Public)

void ADunDef_OldOne::EndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.EndAttack");

	ADunDef_OldOne_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
// (Defined, Simulated, Public)

void ADunDef_OldOne::ShutDownLazers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers");

	ADunDef_OldOne_ShutDownLazers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
// (Defined, Simulated, Public)

void ADunDef_OldOne::SetInitalEyeLazerTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget");

	ADunDef_OldOne_SetInitalEyeLazerTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
// (Defined, Simulated, Public)

void ADunDef_OldOne::StartBellyLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer");

	ADunDef_OldOne_StartBellyLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
// (Defined, Simulated, Public)

void ADunDef_OldOne::StartEyeLazer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer");

	ADunDef_OldOne_StartEyeLazer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
// (Simulated, Event, Public)

void ADunDef_OldOne::BeginFlameSweepAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim");

	ADunDef_OldOne_BeginFlameSweepAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
// (Defined, Simulated, Public)

void ADunDef_OldOne::DoFlameSweep()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep");

	ADunDef_OldOne_DoFlameSweep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::DoubleHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp");

	ADunDef_OldOne_DoubleHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::LeftHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp");

	ADunDef_OldOne_LeftHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::RightHandStomp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.RightHandStomp");

	ADunDef_OldOne_RightHandStomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
// (Defined, Public)

void ADunDef_OldOne::GetAttackDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay");

	ADunDef_OldOne_GetAttackDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.SetPhase
// (Defined, Public)

void ADunDef_OldOne::SetPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.SetPhase");

	ADunDef_OldOne_SetPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.OnToggle
// (Defined, Simulated, Public)

void ADunDef_OldOne::OnToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.OnToggle");

	ADunDef_OldOne_OnToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StartAttack
// (Simulated, Public)

void ADunDef_OldOne::StartAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StartAttack");

	ADunDef_OldOne_StartAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PickAttack
// (Public)

void ADunDef_OldOne::PickAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PickAttack");

	ADunDef_OldOne_PickAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::StopCustomAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim");

	ADunDef_OldOne_StopCustomAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::PlayCustomAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim");

	ADunDef_OldOne_PlayCustomAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
// (Defined, Public)

void ADunDef_OldOne::InitCrystals()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.InitCrystals");

	ADunDef_OldOne_InitCrystals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
// (Defined, Simulated, Public)

void ADunDef_OldOne::ClearCrystalsRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs");

	ADunDef_OldOne_ClearCrystalsRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
// (Defined, Public)

void ADunDef_OldOne::PopulateCustomNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode");

	ADunDef_OldOne_PopulateCustomNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDef_OldOne::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay");

	ADunDef_OldOne_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOne::ExecReplicatedFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction");

	ADunDef_OldOne_ExecReplicatedFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOneCrystals::DTGetPlayerTargetingDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability");

	ADunDef_OldOneCrystals_DTGetPlayerTargetingDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::DTGetTowerTargetingDesirability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability");

	ADunDef_OldOneCrystals_DTGetTowerTargetingDesirability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDef_OldOneCrystals::IgnoreFriendlyFireDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage");

	ADunDef_OldOneCrystals_IgnoreFriendlyFireDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOneCrystals::DrawMyHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD");

	ADunDef_OldOneCrystals_DrawMyHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::PlayHitEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect");

	ADunDef_OldOneCrystals_PlayHitEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::UpdateDamageFlashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing");

	ADunDef_OldOneCrystals_UpdateDamageFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::LocalTookDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage");

	ADunDef_OldOneCrystals_LocalTookDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
// (Defined, Public)

void ADunDef_OldOneCrystals::SubtractHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth");

	ADunDef_OldOneCrystals_SubtractHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
// (Defined, Public)

void ADunDef_OldOneCrystals::SetInPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay");

	ADunDef_OldOneCrystals_SetInPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
// (Defined, Public)

void ADunDef_OldOneCrystals::RepairCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal");

	ADunDef_OldOneCrystals_RepairCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::StopsProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile");

	ADunDef_OldOneCrystals_StopsProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
// (Simulated, Public)

void ADunDef_OldOneCrystals::UpdateHealthColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor");

	ADunDef_OldOneCrystals_UpdateHealthColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::NotifyHealthChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange");

	ADunDef_OldOneCrystals_NotifyHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOneCrystals::UpdateActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate");

	ADunDef_OldOneCrystals_UpdateActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate");

	ADunDef_OldOneCrystals_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Activate");

	ADunDef_OldOneCrystals_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
// (Event, Public)

void ADunDef_OldOneCrystals::BaseChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange");

	ADunDef_OldOneCrystals_BaseChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::ShutDownCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal");

	ADunDef_OldOneCrystals_ShutDownCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::UpdateDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve");

	ADunDef_OldOneCrystals_UpdateDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::DissolveCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal");

	ADunDef_OldOneCrystals_DissolveCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
// (Defined, Simulated, Public)

void ADunDef_OldOneCrystals::PlayDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath");

	ADunDef_OldOneCrystals_PlayDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
// (Defined, Public)

void ADunDef_OldOneCrystals::Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.Died");

	ADunDef_OldOneCrystals_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
// (Defined, Simulated, Public, HasDefaults)

void ADunDef_OldOneCrystals::InitCrystal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal");

	ADunDef_OldOneCrystals_InitCrystal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
// (Defined, Simulated, Event, Public)

void ADunDef_OldOneCrystals::ReplicatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent");

	ADunDef_OldOneCrystals_ReplicatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
// (Defined, Simulated, HasOptionalParms, Public, HasDefaults)

void ADunDefOldOneBreath::HurtRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius");

	ADunDefOldOneBreath_HurtRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefEmitterShockwave::RingHurtRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius");

	ADunDefEmitterShockwave_RingHurtRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
// (Defined, Simulated, Event, Public, HasDefaults)

void ADunDefEmitterShockwave::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.Tick");

	ADunDefEmitterShockwave_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
// (Defined, Event, Static, Public)

void ADunDefEmitterShockwave::STATIC_AllowSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn");

	ADunDefEmitterShockwave_AllowSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefEmitterShockwave::HurtRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius");

	ADunDefEmitterShockwave_HurtRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
// (Defined, Public)

void ADunDefEmitterShockwave::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage");

	ADunDefEmitterShockwave_DoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefEmitterShockwave::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay");

	ADunDefEmitterShockwave_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
// (Defined, Event, HasOptionalParms, Public)

void ADunDefGoblinCopter::TakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage");

	ADunDefGoblinCopter_TakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefGoblinCopter::GetTargetingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation");

	ADunDefGoblinCopter_GetTargetingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::SpawnFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare");

	ADunDefGoblinCopter_SpawnFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
// (Defined, Public, HasOutParms, HasDefaults)

void ADunDefGoblinCopter::GetFlareSpawnLocAndRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot");

	ADunDefGoblinCopter_GetFlareSpawnLocAndRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopter::CheckGCopterProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity");

	ADunDefGoblinCopter_CheckGCopterProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
// (Defined, HasOptionalParms, Public)

void ADunDefGoblinCopter::UpdateDifficultyValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues");

	ADunDefGoblinCopter_UpdateDifficultyValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
// (Defined, Simulated, Public, HasDefaults)

void ADunDefGoblinCopter::DrawMiniMapIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon");

	ADunDefGoblinCopter_DrawMiniMapIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::PauseAnimationAfterDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath");

	ADunDefGoblinCopter_PauseAnimationAfterDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::PlayDying()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDying");

	ADunDefGoblinCopter_PlayDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.Died
// (Defined, Public)

void ADunDefGoblinCopter::Died()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.Died");

	ADunDefGoblinCopter_Died_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
// (Defined, Event, Public)

void ADunDefGoblinCopter::DoDoubleShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot");

	ADunDefGoblinCopter_DoDoubleShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
// (Defined, Event, Public, HasDefaults)

void ADunDefGoblinCopter::DoRightShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot");

	ADunDefGoblinCopter_DoRightShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
// (Defined, Event, Public, HasDefaults)

void ADunDefGoblinCopter::DoLeftShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot");

	ADunDefGoblinCopter_DoLeftShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::PlayDoubleShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim");

	ADunDefGoblinCopter_PlayDoubleShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::PlayRightShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim");

	ADunDefGoblinCopter_PlayRightShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::PlayLeftShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim");

	ADunDefGoblinCopter_PlayLeftShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::ResetHeldPawnValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues");

	ADunDefGoblinCopter_ResetHeldPawnValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
// (Defined, Event, Public)

void ADunDefGoblinCopter::DropPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.DropPawn");

	ADunDefGoblinCopter_DropPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::PlayDropOffAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim");

	ADunDefGoblinCopter_PlayDropOffAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
// (Defined, Public)

void ADunDefGoblinCopter::SetMovementPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics");

	ADunDefGoblinCopter_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::CanBeBaseForPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn");

	ADunDefGoblinCopter_CanBeBaseForPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::InitNewHeldPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn");

	ADunDefGoblinCopter_InitNewHeldPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
// (Defined, Simulated, Public, HasDefaults)

void ADunDefGoblinCopter::SetUpHoldingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn");

	ADunDefGoblinCopter_SetUpHoldingPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopter::SpawnHoldingPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn");

	ADunDefGoblinCopter_SpawnHoldingPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
// (Defined, Public)

void ADunDefGoblinCopter::GetHeldPawnExtraDifficultyOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset");

	ADunDefGoblinCopter_GetHeldPawnExtraDifficultyOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.Tick
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.Tick");

	ADunDefGoblinCopter_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::TurnOnVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX");

	ADunDefGoblinCopter_TurnOnVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
// (Defined, Simulated, Public)

void ADunDefGoblinCopter::UpdateDifficultyMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial");

	ADunDefGoblinCopter_UpdateDifficultyMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay");

	ADunDefGoblinCopter_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
// (Defined, Simulated, HasOptionalParms, Public)

void ADunDefGoblinCopter::ExecReplicatedFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction");

	ADunDefGoblinCopter_ExecReplicatedFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopter::ReplicatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent");

	ADunDefGoblinCopter_ReplicatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopterController::SpawnRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket");

	ADunDefGoblinCopterController_SpawnRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
// (Defined, Public)

void ADunDefGoblinCopterController::PlayMissileShootAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim");

	ADunDefGoblinCopterController_PlayMissileShootAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
// (Defined, Public)

void ADunDefGoblinCopterController::IsWithinDropRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange");

	ADunDefGoblinCopterController_IsWithinDropRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
// (Defined, Public)

void ADunDefGoblinCopterController::CheckDropOffLoS()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS");

	ADunDefGoblinCopterController_CheckDropOffLoS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
// (Defined, Public, HasDefaults)

void ADunDefGoblinCopterController::ShootFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare");

	ADunDefGoblinCopterController_ShootFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
// (Defined, Public)

void ADunDefGoblinCopterController::CheckForDropOffRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange");

	ADunDefGoblinCopterController_CheckForDropOffRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
// (Defined, Public)

void ADunDefGoblinCopterController::CheckAttackSight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight");

	ADunDefGoblinCopterController_CheckAttackSight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
// (Defined, HasOptionalParms, Public, HasDefaults)

void ADunDefGoblinCopterController::IsWithinAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange");

	ADunDefGoblinCopterController_IsWithinAttackRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
// (Defined, Public)

void ADunDefGoblinCopterController::DoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack");

	ADunDefGoblinCopterController_DoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
// (Defined, Public)

void ADunDefGoblinCopterController::FindDropOffPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint");

	ADunDefGoblinCopterController_FindDropOffPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
// (Defined, Public)

void ADunDefGoblinCopterController::GetTargetMoveToPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint");

	ADunDefGoblinCopterController_GetTargetMoveToPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
// (Defined, Public)

void ADunDefGoblinCopterController::GetZDifference()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference");

	ADunDefGoblinCopterController_GetZDifference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
// (Defined, Public)

void ADunDefGoblinCopterController::CheckDirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability");

	ADunDefGoblinCopterController_CheckDirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
// (Defined, Public)

void ADunDefGoblinCopterController::CheckIndirectReachability()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability");

	ADunDefGoblinCopterController_CheckIndirectReachability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public, HasDefaults)

void ADunDefGoblinCopterController::GeneratePathToActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor");

	ADunDefGoblinCopterController_GeneratePathToActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
// (Defined, Public)

void ADunDefGoblinCopterController::NavActorReachable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable");

	ADunDefGoblinCopterController_NavActorReachable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
// (Defined, HasOptionalParms, Public)

void ADunDefGoblinCopterController::FindNearestNavPointTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo");

	ADunDefGoblinCopterController_FindNearestNavPointTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
// (Defined, Public)

void ADunDefGoblinCopterController::SetMyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn");

	ADunDefGoblinCopterController_SetMyPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
// (Defined, Event, Public)

void ADunDefGoblinCopterController::Possess()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.Possess");

	ADunDefGoblinCopterController_Possess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopterController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed");

	ADunDefGoblinCopterController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ADunDefGoblinCopterController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay");

	ADunDefGoblinCopterController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
