#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DunDefSkyCity.DunDefProjectile_Meteor.Destroyed
struct ADunDefProjectile_Meteor_Destroyed_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.SpawnFires
struct ADunDefProjectile_Meteor_SpawnFires_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Explode
struct ADunDefProjectile_Meteor_Explode_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateDecal
struct ADunDefProjectile_Meteor_UpdateDecal_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.UpdateShadow
struct ADunDefProjectile_Meteor_UpdateShadow_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.DoHoming
struct ADunDefProjectile_Meteor_DoHoming_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.Tick
struct ADunDefProjectile_Meteor_Tick_Params
{
};

// Function DunDefSkyCity.DunDefProjectile_Meteor.PostBeginPlay
struct ADunDefProjectile_Meteor_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DropOffPoint.GetIsBeingUsed
struct ADropOffPoint_GetIsBeingUsed_Params
{
};

// Function DunDefSkyCity.DropOffPoint.SetBeingUsed
struct ADropOffPoint_SetBeingUsed_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.StopsProjectile
struct ADunDef_DamagingInterpActor_StopsProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.GetDamageAmount
struct ADunDef_DamagingInterpActor_GetDamageAmount_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.RanInto
struct ADunDef_DamagingInterpActor_RanInto_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.EncroachingOn
struct ADunDef_DamagingInterpActor_EncroachingOn_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.ClearDamageList
struct ADunDef_DamagingInterpActor_ClearDamageList_Params
{
};

// Function DunDefSkyCity.DunDef_DamagingInterpActor.SetDoDamage
struct ADunDef_DamagingInterpActor_SetDoDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetLightningTowerDamagePercent
struct ADunDef_OldOne_GetLightningTowerDamagePercent_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.setIsWebbed
struct ADunDef_OldOne_setIsWebbed_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.isWebbed
struct ADunDef_OldOne_isWebbed_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetChainIgnore
struct ADunDef_OldOne_GetChainIgnore_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetChainIgnore
struct ADunDef_OldOne_SetChainIgnore_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.IsBeingChainedBy
struct ADunDef_OldOne_IsBeingChainedBy_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RemoveFromChainingTowers
struct ADunDef_OldOne_RemoveFromChainingTowers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.AddToChainingTowers
struct ADunDef_OldOne_AddToChainingTowers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.AllowSuction
struct ADunDef_OldOne_AllowSuction_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.IsPlayingCustomAnim
struct ADunDef_OldOne_IsPlayingCustomAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetupDamageFlashing
struct ADunDef_OldOne_SetupDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDamageFlashing
struct ADunDef_OldOne_UpdateDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LocalTookDamage
struct ADunDef_OldOne_LocalTookDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyHealthLevel
struct ADunDef_OldOne_NotifyHealthLevel_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.HealPctOfMaxHealth
struct ADunDef_OldOne_HealPctOfMaxHealth_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealthPercent
struct ADunDef_OldOne_GetHealthPercent_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetHealth
struct ADunDef_OldOne_GetHealth_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ForceMoveActor
struct ADunDef_OldOne_ForceMoveActor_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetOverrideTargetComponent
struct ADunDef_OldOne_GetOverrideTargetComponent_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetMass
struct ADunDef_OldOne_GetMass_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.AllowDarknessIgnorance
struct ADunDef_OldOne_AllowDarknessIgnorance_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ForceFriendlyFire
struct ADunDef_OldOne_ForceFriendlyFire_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetInterpolatedTargetingLocation
struct ADunDef_OldOne_GetInterpolatedTargetingLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingLocation
struct ADunDef_OldOne_GetTargetingLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.OnDestroy_RemoveFromTargetableList
struct ADunDef_OldOne_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.OnPostBeginPlay_AddToTargetableList
struct ADunDef_OldOne_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UnregisterAttacker
struct ADunDef_OldOne_UnregisterAttacker_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RegisterAttacker
struct ADunDef_OldOne_RegisterAttacker_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackRangeOffset
struct ADunDef_OldOne_GetAttackRangeOffset_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.IgnoreFriendlyFireDamage
struct ADunDef_OldOne_IgnoreFriendlyFireDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTargetingTeam
struct ADunDef_OldOne_GetTargetingTeam_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTowerTargetingDesirability
struct ADunDef_OldOne_GetTowerTargetingDesirability_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetPlayerTargetingDesirability
struct ADunDef_OldOne_GetPlayerTargetingDesirability_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceEyeMultiBeamDmg
struct ADunDef_OldOne_TraceEyeMultiBeamDmg_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiEyeBeamLocation
struct ADunDef_OldOne_SetMultiEyeBeamLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiEyeBeam
struct ADunDef_OldOne_TraceMultiEyeBeam_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnFire
struct ADunDef_OldOne_SpawnFire_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEyeDmg
struct ADunDef_OldOne_TraceRightEyeDmg_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetRightEyeBeamLocation
struct ADunDef_OldOne_SetRightEyeBeamLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEyeDmg
struct ADunDef_OldOne_TraceLeftEyeDmg_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetLeftEyeBeamLocation
struct ADunDef_OldOne_SetLeftEyeBeamLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceRightEye
struct ADunDef_OldOne_TraceRightEye_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceLeftEye
struct ADunDef_OldOne_TraceLeftEye_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyMultiBeamDmg
struct ADunDef_OldOne_TraceBellyMultiBeamDmg_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeamDmg
struct ADunDef_OldOne_TraceBellyBeamDmg_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetBellyBeamLocation
struct ADunDef_OldOne_SetBellyBeamLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetMultiBellyBeamLocation
struct ADunDef_OldOne_SetMultiBellyBeamLocation_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceMultiBellyBeam
struct ADunDef_OldOne_TraceMultiBellyBeam_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetRandomLazerPoint
struct ADunDef_OldOne_SetRandomLazerPoint_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.TraceBellyBeam
struct ADunDef_OldOne_TraceBellyBeam_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetNormalBellyTarget
struct ADunDef_OldOne_SetNormalBellyTarget_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.InitNormalBeams
struct ADunDef_OldOne_InitNormalBeams_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ChooseTarget
struct ADunDef_OldOne_ChooseTarget_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartLazers
struct ADunDef_OldOne_StartLazers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopFlameBreath
struct ADunDef_OldOne_StopFlameBreath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameSweep
struct ADunDef_OldOne_StartFlameSweep_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartFlameburst
struct ADunDef_OldOne_StartFlameburst_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateChestCrystal
struct ADunDef_OldOne_ActivateChestCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateRightHandCrystal
struct ADunDef_OldOne_ActivateRightHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateLeftHandCrystal
struct ADunDef_OldOne_ActivateLeftHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateChestCrystal
struct ADunDef_OldOne_DeactivateChestCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateRightHandCrystal
struct ADunDef_OldOne_DeactivateRightHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeactivateLeftHandCrystal
struct ADunDef_OldOne_DeactivateLeftHandCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnDoubleSlamEmitter
struct ADunDef_OldOne_SpawnDoubleSlamEmitter_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnSingleSlamEmitter
struct ADunDef_OldOne_SpawnSingleSlamEmitter_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleStomp
struct ADunDef_OldOne_DoubleStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightFootStomp
struct ADunDef_OldOne_RightFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftFootStomp
struct ADunDef_OldOne_LeftFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.UpdateDifficultyValues
struct ADunDef_OldOne_UpdateDifficultyValues_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DeActivateCollisionDamage
struct ADunDef_OldOne_DeActivateCollisionDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ActivateCollisionDamage
struct ADunDef_OldOne_ActivateCollisionDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetNumCrystalsThisPhase
struct ADunDef_OldOne_GetNumCrystalsThisPhase_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoPhaseShift
struct ADunDef_OldOne_DoPhaseShift_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ArePlayersWithinRange
struct ADunDef_OldOne_ArePlayersWithinRange_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoDeath
struct ADunDef_OldOne_DoDeath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckCrystalDeaths
struct ADunDef_OldOne_CheckCrystalDeaths_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.NotifyCrystalDeath
struct ADunDef_OldOne_NotifyCrystalDeath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleFootStomp
struct ADunDef_OldOne_DoubleFootStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandProjectile
struct ADunDef_OldOne_LeftHandProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandProjectile
struct ADunDef_OldOne_RightHandProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickSmashAttack
struct ADunDef_OldOne_PickSmashAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoProjectileAttack
struct ADunDef_OldOne_DoProjectileAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckProjectileAttack
struct ADunDef_OldOne_CheckProjectileAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForTaunt
struct ADunDef_OldOne_CheckForTaunt_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForBeamAttack
struct ADunDef_OldOne_CheckForBeamAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoTaunt
struct ADunDef_OldOne_DoTaunt_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetTauntAnim
struct ADunDef_OldOne_GetTauntAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PlayHurtAnim
struct ADunDef_OldOne_PlayHurtAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.FinishTaunt
struct ADunDef_OldOne_FinishTaunt_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SpawnMeteor
struct ADunDef_OldOne_SpawnMeteor_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartMeteorAttack
struct ADunDef_OldOne_StartMeteorAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForMeteorAttack
struct ADunDef_OldOne_CheckForMeteorAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForFlame
struct ADunDef_OldOne_CheckForFlame_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForLazer
struct ADunDef_OldOne_CheckForLazer_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.CheckForSweep
struct ADunDef_OldOne_CheckForSweep_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.EndAttack
struct ADunDef_OldOne_EndAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ShutDownLazers
struct ADunDef_OldOne_ShutDownLazers_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetInitalEyeLazerTarget
struct ADunDef_OldOne_SetInitalEyeLazerTarget_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartBellyLazer
struct ADunDef_OldOne_StartBellyLazer_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartEyeLazer
struct ADunDef_OldOne_StartEyeLazer_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.BeginFlameSweepAnim
struct ADunDef_OldOne_BeginFlameSweepAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoFlameSweep
struct ADunDef_OldOne_DoFlameSweep_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.DoubleHandStomp
struct ADunDef_OldOne_DoubleHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.LeftHandStomp
struct ADunDef_OldOne_LeftHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.RightHandStomp
struct ADunDef_OldOne_RightHandStomp_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.GetAttackDelay
struct ADunDef_OldOne_GetAttackDelay_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.SetPhase
struct ADunDef_OldOne_SetPhase_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.OnToggle
struct ADunDef_OldOne_OnToggle_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StartAttack
struct ADunDef_OldOne_StartAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PickAttack
struct ADunDef_OldOne_PickAttack_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.StopCustomAnim
struct ADunDef_OldOne_StopCustomAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PlayCustomAnim
struct ADunDef_OldOne_PlayCustomAnim_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.InitCrystals
struct ADunDef_OldOne_InitCrystals_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ClearCrystalsRefs
struct ADunDef_OldOne_ClearCrystalsRefs_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PopulateCustomNode
struct ADunDef_OldOne_PopulateCustomNode_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.PostBeginPlay
struct ADunDef_OldOne_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDef_OldOne.ExecReplicatedFunction
struct ADunDef_OldOne_ExecReplicatedFunction_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetPlayerTargetingDesirability
struct ADunDef_OldOneCrystals_DTGetPlayerTargetingDesirability_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DTGetTowerTargetingDesirability
struct ADunDef_OldOneCrystals_DTGetTowerTargetingDesirability_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.IgnoreFriendlyFireDamage
struct ADunDef_OldOneCrystals_IgnoreFriendlyFireDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DrawMyHUD
struct ADunDef_OldOneCrystals_DrawMyHUD_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayHitEffect
struct ADunDef_OldOneCrystals_PlayHitEffect_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDamageFlashing
struct ADunDef_OldOneCrystals_UpdateDamageFlashing_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.LocalTookDamage
struct ADunDef_OldOneCrystals_LocalTookDamage_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SubtractHealth
struct ADunDef_OldOneCrystals_SubtractHealth_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.SetInPlay
struct ADunDef_OldOneCrystals_SetInPlay_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.RepairCrystal
struct ADunDef_OldOneCrystals_RepairCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.StopsProjectile
struct ADunDef_OldOneCrystals_StopsProjectile_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateHealthColor
struct ADunDef_OldOneCrystals_UpdateHealthColor_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.NotifyHealthChange
struct ADunDef_OldOneCrystals_NotifyHealthChange_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateActivate
struct ADunDef_OldOneCrystals_UpdateActivate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Deactivate
struct ADunDef_OldOneCrystals_Deactivate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Activate
struct ADunDef_OldOneCrystals_Activate_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.BaseChange
struct ADunDef_OldOneCrystals_BaseChange_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ShutDownCrystal
struct ADunDef_OldOneCrystals_ShutDownCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.UpdateDissolve
struct ADunDef_OldOneCrystals_UpdateDissolve_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.DissolveCrystal
struct ADunDef_OldOneCrystals_DissolveCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.PlayDeath
struct ADunDef_OldOneCrystals_PlayDeath_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.Died
struct ADunDef_OldOneCrystals_Died_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.InitCrystal
struct ADunDef_OldOneCrystals_InitCrystal_Params
{
};

// Function DunDefSkyCity.DunDef_OldOneCrystals.ReplicatedEvent
struct ADunDef_OldOneCrystals_ReplicatedEvent_Params
{
};

// Function DunDefSkyCity.DunDefOldOneBreath.HurtRadius
struct ADunDefOldOneBreath_HurtRadius_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.RingHurtRadius
struct ADunDefEmitterShockwave_RingHurtRadius_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.Tick
struct ADunDefEmitterShockwave_Tick_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.AllowSpawn
struct ADunDefEmitterShockwave_AllowSpawn_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.HurtRadius
struct ADunDefEmitterShockwave_HurtRadius_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.DoDamage
struct ADunDefEmitterShockwave_DoDamage_Params
{
};

// Function DunDefSkyCity.DunDefEmitterShockwave.PostBeginPlay
struct ADunDefEmitterShockwave_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.TakeDamage
struct ADunDefGoblinCopter_TakeDamage_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetTargetingLocation
struct ADunDefGoblinCopter_GetTargetingLocation_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnFlare
struct ADunDefGoblinCopter_SpawnFlare_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetFlareSpawnLocAndRot
struct ADunDefGoblinCopter_GetFlareSpawnLocAndRot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.CheckGCopterProximity
struct ADunDefGoblinCopter_CheckGCopterProximity_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyValues
struct ADunDefGoblinCopter_UpdateDifficultyValues_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DrawMiniMapIcon
struct ADunDefGoblinCopter_DrawMiniMapIcon_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PauseAnimationAfterDeath
struct ADunDefGoblinCopter_PauseAnimationAfterDeath_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDying
struct ADunDefGoblinCopter_PlayDying_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.Died
struct ADunDefGoblinCopter_Died_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoDoubleShoot
struct ADunDefGoblinCopter_DoDoubleShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoRightShoot
struct ADunDefGoblinCopter_DoRightShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DoLeftShoot
struct ADunDefGoblinCopter_DoLeftShoot_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDoubleShootAnim
struct ADunDefGoblinCopter_PlayDoubleShootAnim_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayRightShootAnim
struct ADunDefGoblinCopter_PlayRightShootAnim_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayLeftShootAnim
struct ADunDefGoblinCopter_PlayLeftShootAnim_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.ResetHeldPawnValues
struct ADunDefGoblinCopter_ResetHeldPawnValues_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.DropPawn
struct ADunDefGoblinCopter_DropPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PlayDropOffAnim
struct ADunDefGoblinCopter_PlayDropOffAnim_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetMovementPhysics
struct ADunDefGoblinCopter_SetMovementPhysics_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.CanBeBaseForPawn
struct ADunDefGoblinCopter_CanBeBaseForPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.InitNewHeldPawn
struct ADunDefGoblinCopter_InitNewHeldPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SetUpHoldingPawn
struct ADunDefGoblinCopter_SetUpHoldingPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.SpawnHoldingPawn
struct ADunDefGoblinCopter_SpawnHoldingPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.GetHeldPawnExtraDifficultyOffset
struct ADunDefGoblinCopter_GetHeldPawnExtraDifficultyOffset_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.Tick
struct ADunDefGoblinCopter_Tick_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.TurnOnVFX
struct ADunDefGoblinCopter_TurnOnVFX_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.UpdateDifficultyMaterial
struct ADunDefGoblinCopter_UpdateDifficultyMaterial_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.PostBeginPlay
struct ADunDefGoblinCopter_PostBeginPlay_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.ExecReplicatedFunction
struct ADunDefGoblinCopter_ExecReplicatedFunction_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopter.ReplicatedEvent
struct ADunDefGoblinCopter_ReplicatedEvent_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SpawnRocket
struct ADunDefGoblinCopterController_SpawnRocket_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PlayMissileShootAnim
struct ADunDefGoblinCopterController_PlayMissileShootAnim_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinDropRange
struct ADunDefGoblinCopterController_IsWithinDropRange_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDropOffLoS
struct ADunDefGoblinCopterController_CheckDropOffLoS_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.ShootFlare
struct ADunDefGoblinCopterController_ShootFlare_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckForDropOffRange
struct ADunDefGoblinCopterController_CheckForDropOffRange_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckAttackSight
struct ADunDefGoblinCopterController_CheckAttackSight_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.IsWithinAttackRange
struct ADunDefGoblinCopterController_IsWithinAttackRange_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.DoAttack
struct ADunDefGoblinCopterController_DoAttack_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindDropOffPoint
struct ADunDefGoblinCopterController_FindDropOffPoint_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetTargetMoveToPoint
struct ADunDefGoblinCopterController_GetTargetMoveToPoint_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GetZDifference
struct ADunDefGoblinCopterController_GetZDifference_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckDirectReachability
struct ADunDefGoblinCopterController_CheckDirectReachability_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.CheckIndirectReachability
struct ADunDefGoblinCopterController_CheckIndirectReachability_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.GeneratePathToActor
struct ADunDefGoblinCopterController_GeneratePathToActor_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.NavActorReachable
struct ADunDefGoblinCopterController_NavActorReachable_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.FindNearestNavPointTo
struct ADunDefGoblinCopterController_FindNearestNavPointTo_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.SetMyPawn
struct ADunDefGoblinCopterController_SetMyPawn_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Possess
struct ADunDefGoblinCopterController_Possess_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.Destroyed
struct ADunDefGoblinCopterController_Destroyed_Params
{
};

// Function DunDefSkyCity.DunDefGoblinCopterController.PostBeginPlay
struct ADunDefGoblinCopterController_PostBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
