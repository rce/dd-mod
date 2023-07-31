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

// Function DunDefArabia.GenieLamp.PlayActivateAnim
struct AGenieLamp_PlayActivateAnim_Params
{
};

// Function DunDefArabia.GenieLamp.ShutDownEffects
struct AGenieLamp_ShutDownEffects_Params
{
};

// Function DunDefArabia.GenieLamp.StartActiveEffects
struct AGenieLamp_StartActiveEffects_Params
{
};

// Function DunDefArabia.GenieLamp.DoActivation
struct AGenieLamp_DoActivation_Params
{
};

// Function DunDefArabia.GenieLamp.RemoveCurrentGenieFromLamp
struct AGenieLamp_RemoveCurrentGenieFromLamp_Params
{
};

// Function DunDefArabia.GenieLamp.GiveLampAGenie
struct AGenieLamp_GiveLampAGenie_Params
{
};

// Function DunDefArabia.GenieLamp.GetToolTipPriority
struct AGenieLamp_GetToolTipPriority_Params
{
};

// Function DunDefArabia.GenieLamp.TakesToolTipPriority
struct AGenieLamp_TakesToolTipPriority_Params
{
};

// Function DunDefArabia.GenieLamp.ContinueDrawingToolTip
struct AGenieLamp_ContinueDrawingToolTip_Params
{
};

// Function DunDefArabia.GenieLamp.DrawToolTip
struct AGenieLamp_DrawToolTip_Params
{
};

// Function DunDefArabia.GenieLamp.GetActivationOffset
struct AGenieLamp_GetActivationOffset_Params
{
};

// Function DunDefArabia.GenieLamp.GetActivationWeighting
struct AGenieLamp_GetActivationWeighting_Params
{
};

// Function DunDefArabia.GenieLamp.Client_Activate
struct AGenieLamp_Client_Activate_Params
{
};

// Function DunDefArabia.GenieLamp.Server_Activate
struct AGenieLamp_Server_Activate_Params
{
};

// Function DunDefArabia.GenieLamp.AllowActivation
struct AGenieLamp_AllowActivation_Params
{
};

// Function DunDefArabia.GenieLamp.PostBeginPlay
struct AGenieLamp_PostBeginPlay_Params
{
};

// Function DunDefArabia.GenieLamp.ExecReplicatedFunction
struct AGenieLamp_ExecReplicatedFunction_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyDjinnDeath
struct ADunDefGenieBossController_NotifyDjinnDeath_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SpawnDjinn
struct ADunDefGenieBossController_SpawnDjinn_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.KeepSpawningBabies
struct ADunDefGenieBossController_KeepSpawningBabies_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.ClearHitList
struct ADunDefGenieBossController_ClearHitList_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SetTongueSwing
struct ADunDefGenieBossController_SetTongueSwing_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.AddToSwingHurtList
struct ADunDefGenieBossController_AddToSwingHurtList_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.ShouldDamage
struct ADunDefGenieBossController_ShouldDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckForBurp
struct ADunDefGenieBossController_CheckForBurp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckForMelee
struct ADunDefGenieBossController_CheckForMelee_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckForSuperTongue
struct ADunDefGenieBossController_CheckForSuperTongue_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.BiteStop
struct ADunDefGenieBossController_BiteStop_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.BiteStart
struct ADunDefGenieBossController_BiteStart_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.DoBurp
struct ADunDefGenieBossController_DoBurp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckForCustomAttacks
struct ADunDefGenieBossController_CheckForCustomAttacks_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.GetCDMultiplier
struct ADunDefGenieBossController_GetCDMultiplier_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckPlayerCloseness
struct ADunDefGenieBossController_CheckPlayerCloseness_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.PickLamp
struct ADunDefGenieBossController_PickLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyLampRubbed
struct ADunDefGenieBossController_NotifyLampRubbed_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyReformed
struct ADunDefGenieBossController_NotifyReformed_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.LeaveLamp
struct ADunDefGenieBossController_LeaveLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.CheckActiveDamage
struct ADunDefGenieBossController_CheckActiveDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetRightEye
struct ADunDefGenieBossController_FindTargetRightEye_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.FindTargetLeftEye
struct ADunDefGenieBossController_FindTargetLeftEye_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.TraceRightEye
struct ADunDefGenieBossController_TraceRightEye_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.TraceLeftEye
struct ADunDefGenieBossController_TraceLeftEye_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.ShutDownEyes
struct ADunDefGenieBossController_ShutDownEyes_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.StopEyeTracking
struct ADunDefGenieBossController_StopEyeTracking_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.GoToLamp
struct ADunDefGenieBossController_GoToLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SetRageMode
struct ADunDefGenieBossController_SetRageMode_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.NotifyTakeHitEX
struct ADunDefGenieBossController_NotifyTakeHitEX_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.WantsHurtAnimation
struct ADunDefGenieBossController_WantsHurtAnimation_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.ForceIntoLamp
struct ADunDefGenieBossController_ForceIntoLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.SetInitialState
struct ADunDefGenieBossController_SetInitialState_Params
{
};

// Function DunDefArabia.DunDefGenieBossController.PostBeginPlay
struct ADunDefGenieBossController_PostBeginPlay_Params
{
};

// Function DunDefArabia.DjinnLamp.PlayKillAnim
struct ADjinnLamp_PlayKillAnim_Params
{
};

// Function DunDefArabia.DjinnLamp.DoActivation
struct ADjinnLamp_DoActivation_Params
{
};

// Function DunDefArabia.DjinnLamp.RemoveCurrentGenieFromLamp
struct ADjinnLamp_RemoveCurrentGenieFromLamp_Params
{
};

// Function DunDefArabia.DjinnLamp.GiveLampAGenie
struct ADjinnLamp_GiveLampAGenie_Params
{
};

// Function DunDefArabia.DjinnLamp.ExecReplicatedFunction
struct ADjinnLamp_ExecReplicatedFunction_Params
{
};

// Function DunDefArabia.DunDefDjinnController.Destroyed
struct ADunDefDjinnController_Destroyed_Params
{
};

// Function DunDefArabia.DunDefDjinnController.DoAllyDjinnTimeOut
struct ADunDefDjinnController_DoAllyDjinnTimeOut_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyLampRubbed
struct ADunDefDjinnController_NotifyLampRubbed_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PickLamp
struct ADunDefDjinnController_PickLamp_Params
{
};

// Function DunDefArabia.DunDefDjinnController.AllowDeath
struct ADunDefDjinnController_AllowDeath_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyFinishedReforming
struct ADunDefDjinnController_NotifyFinishedReforming_Params
{
};

// Function DunDefArabia.DunDefDjinnController.LeaveLamp
struct ADunDefDjinnController_LeaveLamp_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyGenieOfDeath
struct ADunDefDjinnController_NotifyGenieOfDeath_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PawnDied
struct ADunDefDjinnController_PawnDied_Params
{
};

// Function DunDefArabia.DunDefDjinnController.SetMyGenie
struct ADunDefDjinnController_SetMyGenie_Params
{
};

// Function DunDefArabia.DunDefDjinnController.ForceFlee
struct ADunDefDjinnController_ForceFlee_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForFlee
struct ADunDefDjinnController_CheckForFlee_Params
{
};

// Function DunDefArabia.DunDefDjinnController.GetProjectile
struct ADunDefDjinnController_GetProjectile_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PickProjectileType
struct ADunDefDjinnController_PickProjectileType_Params
{
};

// Function DunDefArabia.DunDefDjinnController.ShootProjectile
struct ADunDefDjinnController_ShootProjectile_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForCustomAttacks
struct ADunDefDjinnController_CheckForCustomAttacks_Params
{
};

// Function DunDefArabia.DunDefDjinnController.IsValidUpgradeTower
struct ADunDefDjinnController_IsValidUpgradeTower_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CastTowerDestructSpell
struct ADunDefDjinnController_CastTowerDestructSpell_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindDestroyTower
struct ADunDefDjinnController_FindDestroyTower_Params
{
};

// Function DunDefArabia.DunDefDjinnController.DestroyTower
struct ADunDefDjinnController_DestroyTower_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishTowerDestructAnim
struct ADunDefDjinnController_PlayFinishTowerDestructAnim_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FinishTowerDestructCast
struct ADunDefDjinnController_FinishTowerDestructCast_Params
{
};

// Function DunDefArabia.DunDefDjinnController.HealGoldTarget
struct ADunDefDjinnController_HealGoldTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CastGoldEnemySpell
struct ADunDefDjinnController_CastGoldEnemySpell_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindGoldEnemyTarget
struct ADunDefDjinnController_FindGoldEnemyTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckValidGoldTarget
struct ADunDefDjinnController_CheckValidGoldTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PlayFinishGoldAnim
struct ADunDefDjinnController_PlayFinishGoldAnim_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FinishGoldEnemyCast
struct ADunDefDjinnController_FinishGoldEnemyCast_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckCastTimeout
struct ADunDefDjinnController_CheckCastTimeout_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckForCastingMovement
struct ADunDefDjinnController_CheckForCastingMovement_Params
{
};

// Function DunDefArabia.DunDefDjinnController.ClearCurrentSpellTarget
struct ADunDefDjinnController_ClearCurrentSpellTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyTakeHitEX
struct ADunDefDjinnController_NotifyTakeHitEX_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NotifyDamageTaken
struct ADunDefDjinnController_NotifyDamageTaken_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckCurrentCastTarget
struct ADunDefDjinnController_CheckCurrentCastTarget_Params
{
};

// Function DunDefArabia.DunDefDjinnController.Cough
struct ADunDefDjinnController_Cough_Params
{
};

// Function DunDefArabia.DunDefDjinnController.InterruptSpellCast
struct ADunDefDjinnController_InterruptSpellCast_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckSpellDamageAmount
struct ADunDefDjinnController_CheckSpellDamageAmount_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckAllowedCastingStart
struct ADunDefDjinnController_CheckAllowedCastingStart_Params
{
};

// Function DunDefArabia.DunDefDjinnController.IsWithinCastingRange
struct ADunDefDjinnController_IsWithinCastingRange_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindNearestFleePoint
struct ADunDefDjinnController_FindNearestFleePoint_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckFleeDistance
struct ADunDefDjinnController_CheckFleeDistance_Params
{
};

// Function DunDefArabia.DunDefDjinnController.StopFlee
struct ADunDefDjinnController_StopFlee_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckDirectReachability
struct ADunDefDjinnController_CheckDirectReachability_Params
{
};

// Function DunDefArabia.DunDefDjinnController.CheckIndirectReachability
struct ADunDefDjinnController_CheckIndirectReachability_Params
{
};

// Function DunDefArabia.DunDefDjinnController.MoveUnreachable
struct ADunDefDjinnController_MoveUnreachable_Params
{
};

// Function DunDefArabia.DunDefDjinnController.GetObstructionJumpForwardDir
struct ADunDefDjinnController_GetObstructionJumpForwardDir_Params
{
};

// Function DunDefArabia.DunDefDjinnController.ObstructionJump
struct ADunDefDjinnController_ObstructionJump_Params
{
};

// Function DunDefArabia.DunDefDjinnController.GeneratePathToActor
struct ADunDefDjinnController_GeneratePathToActor_Params
{
};

// Function DunDefArabia.DunDefDjinnController.MoveAroundBlockade
struct ADunDefDjinnController_MoveAroundBlockade_Params
{
};

// Function DunDefArabia.DunDefDjinnController.NavActorReachable
struct ADunDefDjinnController_NavActorReachable_Params
{
};

// Function DunDefArabia.DunDefDjinnController.FindNearestNavPointTo
struct ADunDefDjinnController_FindNearestNavPointTo_Params
{
};

// Function DunDefArabia.DunDefDjinnController.GetTargetingMultiplier
struct ADunDefDjinnController_GetTargetingMultiplier_Params
{
};

// Function DunDefArabia.DunDefDjinnController.PostBeginPlay
struct ADunDefDjinnController_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia.Activated
struct UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia_Activated_Params
{
};

// Function DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge.RefreshBillboard
struct ADunDefWaveBillBoard_ArabiaChallenge_RefreshBillboard_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetPawnDamageModifier
struct ADunDefDjinn_GetPawnDamageModifier_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconTexture
struct ADunDefDjinn_GetMiniMapIconTexture_Params
{
};

// Function DunDefArabia.DunDefDjinn.UpdateToTeamMaterial
struct ADunDefDjinn_UpdateToTeamMaterial_Params
{
};

// Function DunDefArabia.DunDefDjinn.NotifyTeamSwitch
struct ADunDefDjinn_NotifyTeamSwitch_Params
{
};

// Function DunDefArabia.DunDefDjinn.NotifyOfDeath
struct ADunDefDjinn_NotifyOfDeath_Params
{
};

// Function DunDefArabia.DunDefDjinn.UnHideDjinn
struct ADunDefDjinn_UnHideDjinn_Params
{
};

// Function DunDefArabia.DunDefDjinn.HideDjinn
struct ADunDefDjinn_HideDjinn_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayGoToLamp
struct ADunDefDjinn_PlayGoToLamp_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayLeaveLamp
struct ADunDefDjinn_PlayLeaveLamp_Params
{
};

// Function DunDefArabia.DunDefDjinn.LeaveLamp
struct ADunDefDjinn_LeaveLamp_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetEnemyTargetingDesirability
struct ADunDefDjinn_GetEnemyTargetingDesirability_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetMiniMapIconColor
struct ADunDefDjinn_GetMiniMapIconColor_Params
{
};

// Function DunDefArabia.DunDefDjinn.CheckDjinnProximity
struct ADunDefDjinn_CheckDjinnProximity_Params
{
};

// Function DunDefArabia.DunDefDjinn.TakeDamage
struct ADunDefDjinn_TakeDamage_Params
{
};

// Function DunDefArabia.DunDefDjinn.AllowTrapSpringing
struct ADunDefDjinn_AllowTrapSpringing_Params
{
};

// Function DunDefArabia.DunDefDjinn.ShutDownAllCastingVFX
struct ADunDefDjinn_ShutDownAllCastingVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayAttackAnimation
struct ADunDefDjinn_PlayAttackAnimation_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetProjectileLocAndRot
struct ADunDefDjinn_GetProjectileLocAndRot_Params
{
};

// Function DunDefArabia.DunDefDjinn.FireProjectile
struct ADunDefDjinn_FireProjectile_Params
{
};

// Function DunDefArabia.DunDefDjinn.ResetTowers
struct ADunDefDjinn_ResetTowers_Params
{
};

// Function DunDefArabia.DunDefDjinn.ShutDownTowerVFX
struct ADunDefDjinn_ShutDownTowerVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.StopTowerDestructCast
struct ADunDefDjinn_StopTowerDestructCast_Params
{
};

// Function DunDefArabia.DunDefDjinn.SetInitialTowerValues
struct ADunDefDjinn_SetInitialTowerValues_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartTowerUpgradeCast
struct ADunDefDjinn_StartTowerUpgradeCast_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartTowerDestructCast
struct ADunDefDjinn_StartTowerDestructCast_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartTowerBeam
struct ADunDefDjinn_StartTowerBeam_Params
{
};

// Function DunDefArabia.DunDefDjinn.UpdateTower
struct ADunDefDjinn_UpdateTower_Params
{
};

// Function DunDefArabia.DunDefDjinn.Died
struct ADunDefDjinn_Died_Params
{
};

// Function DunDefArabia.DunDefDjinn.AdjustDamage
struct ADunDefDjinn_AdjustDamage_Params
{
};

// Function DunDefArabia.DunDefDjinn.UnSetGoldenEnemy
struct ADunDefDjinn_UnSetGoldenEnemy_Params
{
};

// Function DunDefArabia.DunDefDjinn.SetGoldenEnemy
struct ADunDefDjinn_SetGoldenEnemy_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayInterruptAnimation
struct ADunDefDjinn_PlayInterruptAnimation_Params
{
};

// Function DunDefArabia.DunDefDjinn.ShutDownGoldVFX
struct ADunDefDjinn_ShutDownGoldVFX_Params
{
};

// Function DunDefArabia.DunDefDjinn.StopGoldEnemyCast
struct ADunDefDjinn_StopGoldEnemyCast_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartGoldEnemyCast
struct ADunDefDjinn_StartGoldEnemyCast_Params
{
};

// Function DunDefArabia.DunDefDjinn.StartBeam
struct ADunDefDjinn_StartBeam_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayMajorHurtAnimation
struct ADunDefDjinn_PlayMajorHurtAnimation_Params
{
};

// Function DunDefArabia.DunDefDjinn.PlayHurtAnimation
struct ADunDefDjinn_PlayHurtAnimation_Params
{
};

// Function DunDefArabia.DunDefDjinn.UpdateDifficultyMaterial
struct ADunDefDjinn_UpdateDifficultyMaterial_Params
{
};

// Function DunDefArabia.DunDefDjinn.SetMovementPhysics
struct ADunDefDjinn_SetMovementPhysics_Params
{
};

// Function DunDefArabia.DunDefDjinn.DisableSpawnCollision
struct ADunDefDjinn_DisableSpawnCollision_Params
{
};

// Function DunDefArabia.DunDefDjinn.PostBeginPlay
struct ADunDefDjinn_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefDjinn.ExecReplicatedFunction
struct ADunDefDjinn_ExecReplicatedFunction_Params
{
};

// Function DunDefArabia.DunDefDjinn.GetTowerTargetingDesirability
struct ADunDefDjinn_GetTowerTargetingDesirability_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.PickDjinnLamp
struct ADunDefDjinnManager_PickDjinnLamp_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyGold
struct ADunDefDjinnManager_IsActorAlreadyGold_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActorIndexed
struct ADunDefDjinnManager_RemoveGoldenActorIndexed_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.RemoveGoldenActor
struct ADunDefDjinnManager_RemoveGoldenActor_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.AddGoldenActor
struct ADunDefDjinnManager_AddGoldenActor_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.IsActorAlreadyTargeted
struct ADunDefDjinnManager_IsActorAlreadyTargeted_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.RemoveTargetedActor
struct ADunDefDjinnManager_RemoveTargetedActor_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.AddTargetedActor
struct ADunDefDjinnManager_AddTargetedActor_Params
{
};

// Function DunDefArabia.DunDefDjinnManager.PostBeginPlay
struct ADunDefDjinnManager_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdatingDelayTurnOff
struct ADunDefGenieBoss_ForceSkelUpdatingDelayTurnOff_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ForceSkelUpdating
struct ADunDefGenieBoss_ForceSkelUpdating_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ClearElementalEffect
struct ADunDefGenieBoss_ClearElementalEffect_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetElementalDamageType
struct ADunDefGenieBoss_GetElementalDamageType_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.TakeDamage
struct ADunDefGenieBoss_TakeDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetMiniMapIconColor
struct ADunDefGenieBoss_GetMiniMapIconColor_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ActivateRageMode
struct ADunDefGenieBoss_ActivateRageMode_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PauseAnimationAfterDeath
struct ADunDefGenieBoss_PauseAnimationAfterDeath_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetBurpProjectileLocAndRot
struct ADunDefGenieBoss_GetBurpProjectileLocAndRot_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeLocAndRot
struct ADunDefGenieBoss_GetRightEyeLocAndRot_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeLocAndRot
struct ADunDefGenieBoss_GetLeftEyeLocAndRot_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetRightEyeDmgType
struct ADunDefGenieBoss_GetRightEyeDmgType_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetLeftEyeDmgType
struct ADunDefGenieBoss_GetLeftEyeDmgType_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PickRightEyeBeam
struct ADunDefGenieBoss_PickRightEyeBeam_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PickLeftEyeBeam
struct ADunDefGenieBoss_PickLeftEyeBeam_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayBiteAnim
struct ADunDefGenieBoss_PlayBiteAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetDjinnSpawnLocandRot
struct ADunDefGenieBoss_GetDjinnSpawnLocandRot_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetBiteLocation
struct ADunDefGenieBoss_GetBiteLocation_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SpawnBabyDjinn
struct ADunDefGenieBoss_SpawnBabyDjinn_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ClearHitList
struct ADunDefGenieBoss_ClearHitList_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStop
struct ADunDefGenieBoss_BiteStop_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BiteStart
struct ADunDefGenieBoss_BiteStart_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.Burp
struct ADunDefGenieBoss_Burp_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SpawnMoveToLampVFX
struct ADunDefGenieBoss_SpawnMoveToLampVFX_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayBabySpawnAnim
struct ADunDefGenieBoss_PlayBabySpawnAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayBurpAnim
struct ADunDefGenieBoss_PlayBurpAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayDisappearAnim
struct ADunDefGenieBoss_PlayDisappearAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayLickAnim
struct ADunDefGenieBoss_PlayLickAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlaySuperLickAnim
struct ADunDefGenieBoss_PlaySuperLickAnim_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeBeamLoop
struct ADunDefGenieBoss_PlayEyeBeamLoop_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.TongueStart
struct ADunDefGenieBoss_TongueStart_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.GetTongueSocketLocation
struct ADunDefGenieBoss_GetTongueSocketLocation_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.StopCrazyEye
struct ADunDefGenieBoss_StopCrazyEye_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayCrazyEyesAttack
struct ADunDefGenieBoss_PlayCrazyEyesAttack_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.StartEyeDamage
struct ADunDefGenieBoss_StartEyeDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeTarget
struct ADunDefGenieBoss_SetLeftEyeTarget_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeTarget
struct ADunDefGenieBoss_SetRightEyeTarget_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PlayEyeAttackStart
struct ADunDefGenieBoss_PlayEyeAttackStart_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.StartUpEyes
struct ADunDefGenieBoss_StartUpEyes_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.AdjustDamage
struct ADunDefGenieBoss_AdjustDamage_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.UnHideHead
struct ADunDefGenieBoss_UnHideHead_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.HideHead
struct ADunDefGenieBoss_HideHead_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.BringGenieOutOfLamp
struct ADunDefGenieBoss_BringGenieOutOfLamp_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ShutDownEyes
struct ADunDefGenieBoss_ShutDownEyes_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetRightEyeBeamLocation
struct ADunDefGenieBoss_SetRightEyeBeamLocation_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetLeftEyeBeamLocation
struct ADunDefGenieBoss_SetLeftEyeBeamLocation_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.TraceRightEye
struct ADunDefGenieBoss_TraceRightEye_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.TraceLeftEye
struct ADunDefGenieBoss_TraceLeftEye_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.EndEyeAttack
struct ADunDefGenieBoss_EndEyeAttack_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.UpdateHeadLookAt
struct ADunDefGenieBoss_UpdateHeadLookAt_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetMovementPhysics
struct ADunDefGenieBoss_SetMovementPhysics_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.Tick
struct ADunDefGenieBoss_Tick_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetOnAllOverlappingAuras
struct ADunDefGenieBoss_SetOnAllOverlappingAuras_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.SetInitialState
struct ADunDefGenieBoss_SetInitialState_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.PostBeginPlay
struct ADunDefGenieBoss_PostBeginPlay_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ExecReplicatedFunction
struct ADunDefGenieBoss_ExecReplicatedFunction_Params
{
};

// Function DunDefArabia.DunDefGenieBoss.ReplicatedEvent
struct ADunDefGenieBoss_ReplicatedEvent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
