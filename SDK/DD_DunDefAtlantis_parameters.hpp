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

// Function DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver.Activated
struct UDunDef_SeqAct_PickNewPuzzleSolver_Activated_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.AddPlayerToWaterList
struct ADunDefGRI_RisingWater_AddPlayerToWaterList_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.RemovePlayerToWaterList
struct ADunDefGRI_RisingWater_RemovePlayerToWaterList_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetWaterCastingMultiplier
struct ADunDefGRI_RisingWater_SetWaterCastingMultiplier_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetCastRateMultiplier
struct ADunDefGRI_RisingWater_GetCastRateMultiplier_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PuzzleComplete
struct ADunDefGRI_RisingWater_PuzzleComplete_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.GetRandomPlayer
struct ADunDefGRI_RisingWater_GetRandomPlayer_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.DrawMyHUD
struct ADunDefGRI_RisingWater_DrawMyHUD_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.SetNewSolver
struct ADunDefGRI_RisingWater_SetNewSolver_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.NotifyPuzzleSolverDeath
struct ADunDefGRI_RisingWater_NotifyPuzzleSolverDeath_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ClearPuzzleSolver
struct ADunDefGRI_RisingWater_ClearPuzzleSolver_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.PickNewSolver
struct ADunDefGRI_RisingWater_PickNewSolver_Params
{
};

// Function DunDefAtlantis.DunDefGRI_RisingWater.ExecReplicatedFunction
struct ADunDefGRI_RisingWater_ExecReplicatedFunction_Params
{
};

// Function DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle.Activated
struct UDunDef_SeqAct_SetUpPuzzle_Activated_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.Destroyed
struct APuzzleRoomActor_Destroyed_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.FlashPuzzlePiece
struct APuzzleRoomActor_FlashPuzzlePiece_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.ShowPuzzlePath
struct APuzzleRoomActor_ShowPuzzlePath_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayFailedPathVFX
struct APuzzleRoomActor_PlayFailedPathVFX_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PlayInitalFailVFX
struct APuzzleRoomActor_PlayInitalFailVFX_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.FailedPath
struct APuzzleRoomActor_FailedPath_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulMove
struct APuzzleRoomActor_SuccessfulMove_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.SuccessfulFinish
struct APuzzleRoomActor_SuccessfulFinish_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.FinishedPuzzle
struct APuzzleRoomActor_FinishedPuzzle_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.NotifyPieceTouched
struct APuzzleRoomActor_NotifyPieceTouched_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.ResetPuzzle
struct APuzzleRoomActor_ResetPuzzle_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.DrawDebugPathLines
struct APuzzleRoomActor_DrawDebugPathLines_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.StartEffect
struct APuzzleRoomActor_StartEffect_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.AddValidPathPiece
struct APuzzleRoomActor_AddValidPathPiece_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.MakePuzzle
struct APuzzleRoomActor_MakePuzzle_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.CalculatePieceIndex
struct APuzzleRoomActor_CalculatePieceIndex_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.InitGrid
struct APuzzleRoomActor_InitGrid_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.PostBeginPlay
struct APuzzleRoomActor_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.PuzzleRoomActor.ExecReplicatedFunction
struct APuzzleRoomActor_ExecReplicatedFunction_Params
{
};

// Function DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft.Activated
struct UDunDef_SeqEvent_PuzzleSolverLeft_Activated_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.Logout
struct AGameInfo_RisingWater_Logout_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetCurrentPuzzleSolver
struct AGameInfo_RisingWater_SetCurrentPuzzleSolver_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.SetGRIPuzzleSolver
struct AGameInfo_RisingWater_SetGRIPuzzleSolver_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.RestartPlayer
struct AGameInfo_RisingWater_RestartPlayer_Params
{
};

// Function DunDefAtlantis.GameInfo_RisingWater.Killed
struct AGameInfo_RisingWater_Killed_Params
{
};

// Function DunDefAtlantis.DunDefInkCloud.ResetCurrentMoveActors
struct ADunDefInkCloud_ResetCurrentMoveActors_Params
{
};

// Function DunDefAtlantis.DunDefInkCloud.HurtRadius
struct ADunDefInkCloud_HurtRadius_Params
{
};

// Function DunDefAtlantis.DunDefInkCloud.FadeOut
struct ADunDefInkCloud_FadeOut_Params
{
};

// Function DunDefAtlantis.DunDefInkCloud.Init
struct ADunDefInkCloud_Init_Params
{
};

// Function DunDefAtlantis.DunDefKraken.CheckKrakenProximity
struct ADunDefKraken_CheckKrakenProximity_Params
{
};

// Function DunDefAtlantis.DunDefKraken.Died
struct ADunDefKraken_Died_Params
{
};

// Function DunDefAtlantis.DunDefKraken.DestroyTentacles
struct ADunDefKraken_DestroyTentacles_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetPlayerTargetingDesirability
struct ADunDefKraken_GetPlayerTargetingDesirability_Params
{
};

// Function DunDefAtlantis.DunDefKraken.BiteStop
struct ADunDefKraken_BiteStop_Params
{
};

// Function DunDefAtlantis.DunDefKraken.BiteStart
struct ADunDefKraken_BiteStart_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayTentacleAttackAnimation
struct ADunDefKraken_PlayTentacleAttackAnimation_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayBiteAttackAnimation
struct ADunDefKraken_PlayBiteAttackAnimation_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StopSpit
struct ADunDefKraken_StopSpit_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StartSpit
struct ADunDefKraken_StartSpit_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetSocketLocAndRot
struct ADunDefKraken_GetSocketLocAndRot_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ShootGiantProjectile
struct ADunDefKraken_ShootGiantProjectile_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ShootRight
struct ADunDefKraken_ShootRight_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ShootLeft
struct ADunDefKraken_ShootLeft_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ResetMovementSettings
struct ADunDefKraken_ResetMovementSettings_Params
{
};

// Function DunDefAtlantis.DunDefKraken.SetDashMovementSettings
struct ADunDefKraken_SetDashMovementSettings_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayDashWindUp
struct ADunDefKraken_PlayDashWindUp_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayInkCloudAttack
struct ADunDefKraken_PlayInkCloudAttack_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayGiantProjectileAttack
struct ADunDefKraken_PlayGiantProjectileAttack_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayRightTentacleAttack
struct ADunDefKraken_PlayRightTentacleAttack_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetTowerTargetingDesirability
struct ADunDefKraken_GetTowerTargetingDesirability_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayLeftTentacleAttack
struct ADunDefKraken_PlayLeftTentacleAttack_Params
{
};

// Function DunDefAtlantis.DunDefKraken.IsValidRightSwingTarget
struct ADunDefKraken_IsValidRightSwingTarget_Params
{
};

// Function DunDefAtlantis.DunDefKraken.IsValidLeftSwingTarget
struct ADunDefKraken_IsValidLeftSwingTarget_Params
{
};

// Function DunDefAtlantis.DunDefKraken.AddToRightSwingHurtList
struct ADunDefKraken_AddToRightSwingHurtList_Params
{
};

// Function DunDefAtlantis.DunDefKraken.AddToLeftSwingHurtList
struct ADunDefKraken_AddToLeftSwingHurtList_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StopMelee
struct ADunDefKraken_StopMelee_Params
{
};

// Function DunDefAtlantis.DunDefKraken.StartMelee
struct ADunDefKraken_StartMelee_Params
{
};

// Function DunDefAtlantis.DunDefKraken.CloseMouth
struct ADunDefKraken_CloseMouth_Params
{
};

// Function DunDefAtlantis.DunDefKraken.OpenMouth
struct ADunDefKraken_OpenMouth_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayMouthOpen
struct ADunDefKraken_PlayMouthOpen_Params
{
};

// Function DunDefAtlantis.DunDefKraken.DoSingleWithdraw
struct ADunDefKraken_DoSingleWithdraw_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ForceWithDraw
struct ADunDefKraken_ForceWithDraw_Params
{
};

// Function DunDefAtlantis.DunDefKraken.BringOutAllTentacles
struct ADunDefKraken_BringOutAllTentacles_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayWithDrawTentacle
struct ADunDefKraken_PlayWithDrawTentacle_Params
{
};

// Function DunDefAtlantis.DunDefKraken.NotifyTentacleWithdraw
struct ADunDefKraken_NotifyTentacleWithdraw_Params
{
};

// Function DunDefAtlantis.DunDefKraken.CheckSpecialCoreDmg
struct ADunDefKraken_CheckSpecialCoreDmg_Params
{
};

// Function DunDefAtlantis.DunDefKraken.AdjustDamage
struct ADunDefKraken_AdjustDamage_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PlayRealHurtEffect
struct ADunDefKraken_PlayRealHurtEffect_Params
{
};

// Function DunDefAtlantis.DunDefKraken.NotifyTakeHit
struct ADunDefKraken_NotifyTakeHit_Params
{
};

// Function DunDefAtlantis.DunDefKraken.TakeDamage
struct ADunDefKraken_TakeDamage_Params
{
};

// Function DunDefAtlantis.DunDefKraken.UpdateDifficultyValues
struct ADunDefKraken_UpdateDifficultyValues_Params
{
};

// Function DunDefAtlantis.DunDefKraken.SetMovementPhysics
struct ADunDefKraken_SetMovementPhysics_Params
{
};

// Function DunDefAtlantis.DunDefKraken.GetAttackPauseRate
struct ADunDefKraken_GetAttackPauseRate_Params
{
};

// Function DunDefAtlantis.DunDefKraken.InitTentacles
struct ADunDefKraken_InitTentacles_Params
{
};

// Function DunDefAtlantis.DunDefKraken.PostBeginPlay
struct ADunDefKraken_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ExecReplicatedFunction
struct ADunDefKraken_ExecReplicatedFunction_Params
{
};

// Function DunDefAtlantis.DunDefKraken.ReplicatedEvent
struct ADunDefKraken_ReplicatedEvent_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetLightningTowerDamagePercent
struct AKrakenTentacle_GetLightningTowerDamagePercent_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.setIsWebbed
struct AKrakenTentacle_setIsWebbed_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.isWebbed
struct AKrakenTentacle_isWebbed_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetChainIgnore
struct AKrakenTentacle_GetChainIgnore_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.SetChainIgnore
struct AKrakenTentacle_SetChainIgnore_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.IsBeingChainedBy
struct AKrakenTentacle_IsBeingChainedBy_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.RemoveFromChainingTowers
struct AKrakenTentacle_RemoveFromChainingTowers_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.AddToChainingTowers
struct AKrakenTentacle_AddToChainingTowers_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.AllowSuction
struct AKrakenTentacle_AllowSuction_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeRadiusDamage
struct AKrakenTentacle_ClientTakeRadiusDamage_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ClientTakeDamage
struct AKrakenTentacle_ClientTakeDamage_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetHealthPercent
struct AKrakenTentacle_GetHealthPercent_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.UpdateDamageFlashing
struct AKrakenTentacle_UpdateDamageFlashing_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.LocalTookDamage
struct AKrakenTentacle_LocalTookDamage_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.HealPctOfMaxHealth
struct AKrakenTentacle_HealPctOfMaxHealth_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ForceMoveActor
struct AKrakenTentacle_ForceMoveActor_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetOverrideTargetComponent
struct AKrakenTentacle_GetOverrideTargetComponent_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.EncroachingOn
struct AKrakenTentacle_EncroachingOn_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.Bump
struct AKrakenTentacle_Bump_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.Touch
struct AKrakenTentacle_Touch_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.SetDoDamageChecks
struct AKrakenTentacle_SetDoDamageChecks_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetHealth
struct AKrakenTentacle_GetHealth_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetMass
struct AKrakenTentacle_GetMass_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.AllowDarknessIgnorance
struct AKrakenTentacle_AllowDarknessIgnorance_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ForceFriendlyFire
struct AKrakenTentacle_ForceFriendlyFire_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetInterpolatedTargetingLocation
struct AKrakenTentacle_GetInterpolatedTargetingLocation_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingLocation
struct AKrakenTentacle_GetTargetingLocation_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.OnDestroy_RemoveFromTargetableList
struct AKrakenTentacle_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.OnPostBeginPlay_AddToTargetableList
struct AKrakenTentacle_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.UnregisterAttacker
struct AKrakenTentacle_UnregisterAttacker_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.RegisterAttacker
struct AKrakenTentacle_RegisterAttacker_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetAttackRangeOffset
struct AKrakenTentacle_GetAttackRangeOffset_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.IgnoreFriendlyFireDamage
struct AKrakenTentacle_IgnoreFriendlyFireDamage_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetTargetingTeam
struct AKrakenTentacle_GetTargetingTeam_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetTowerTargetingDesirability
struct AKrakenTentacle_GetTowerTargetingDesirability_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.GetPlayerTargetingDesirability
struct AKrakenTentacle_GetPlayerTargetingDesirability_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.DecreaseHealth
struct AKrakenTentacle_DecreaseHealth_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ForceWithDraw
struct AKrakenTentacle_ForceWithDraw_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.LeaveShell
struct AKrakenTentacle_LeaveShell_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.WithdrawIntoShell
struct AKrakenTentacle_WithdrawIntoShell_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.TakeDamage
struct AKrakenTentacle_TakeDamage_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.SetWithDrawTime
struct AKrakenTentacle_SetWithDrawTime_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.SetUpMesh
struct AKrakenTentacle_SetUpMesh_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.InitTentacle
struct AKrakenTentacle_InitTentacle_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.PostBeginPlay
struct AKrakenTentacle_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ExecReplicatedFunction
struct AKrakenTentacle_ExecReplicatedFunction_Params
{
};

// Function DunDefAtlantis.KrakenTentacle.ReplicatedEvent
struct AKrakenTentacle_ReplicatedEvent_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.StopInkCloud
struct ADunDefKrakenController_StopInkCloud_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnInkCloud
struct ADunDefKrakenController_SpawnInkCloud_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnGiantProjectile
struct ADunDefKrakenController_SpawnGiantProjectile_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnRightTentacleProjectiles
struct ADunDefKrakenController_SpawnRightTentacleProjectiles_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.SpawnLeftTentacleProjectiles
struct ADunDefKrakenController_SpawnLeftTentacleProjectiles_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.GetValidShootTargets
struct ADunDefKrakenController_GetValidShootTargets_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CheckCustomOpenMouthAttacks
struct ADunDefKrakenController_CheckCustomOpenMouthAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomClosedMouthAttacks
struct ADunDefKrakenController_CheckForCustomClosedMouthAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CheckForCustomAttacks
struct ADunDefKrakenController_CheckForCustomAttacks_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.CloseMouth
struct ADunDefKrakenController_CloseMouth_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentacleBroughtOut
struct ADunDefKrakenController_NotifyTentacleBroughtOut_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTentecaleWithDrawn
struct ADunDefKrakenController_NotifyTentecaleWithDrawn_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.HandleTentacleDamage
struct ADunDefKrakenController_HandleTentacleDamage_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.EndDash
struct ADunDefKrakenController_EndDash_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.UpdateDashPoint
struct ADunDefKrakenController_UpdateDashPoint_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.AddToDashHurtList
struct ADunDefKrakenController_AddToDashHurtList_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.EndMeleeSwing
struct ADunDefKrakenController_EndMeleeSwing_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.BiteStart
struct ADunDefKrakenController_BiteStart_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.EndBite
struct ADunDefKrakenController_EndBite_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.DoBiting
struct ADunDefKrakenController_DoBiting_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.AddToSwingHurtList
struct ADunDefKrakenController_AddToSwingHurtList_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.ShouldDamage
struct ADunDefKrakenController_ShouldDamage_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.DoAttack
struct ADunDefKrakenController_DoAttack_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.GeneratePathToActor
struct ADunDefKrakenController_GeneratePathToActor_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.MoveAroundBlockade
struct ADunDefKrakenController_MoveAroundBlockade_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NavActorReachable
struct ADunDefKrakenController_NavActorReachable_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.FindNearestNavPointTo
struct ADunDefKrakenController_FindNearestNavPointTo_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.GetAttackRange
struct ADunDefKrakenController_GetAttackRange_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.ForceTentacleAttack
struct ADunDefKrakenController_ForceTentacleAttack_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.WantsHurtAnimation
struct ADunDefKrakenController_WantsHurtAnimation_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.NotifyTakeHitEX
struct ADunDefKrakenController_NotifyTakeHitEX_Params
{
};

// Function DunDefAtlantis.DunDefKrakenController.Possess
struct ADunDefKrakenController_Possess_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.IsCurrentlyPlayingAttackAnimation
struct ADunDefSharkMan_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHitEX
struct ADunDefSharkMan_NotifyTakeHitEX_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.NotifyTakeHit
struct ADunDefSharkMan_NotifyTakeHit_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.ClearChargeHurtList
struct ADunDefSharkMan_ClearChargeHurtList_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.AddToChargeHurtList
struct ADunDefSharkMan_AddToChargeHurtList_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.EndCharging
struct ADunDefSharkMan_EndCharging_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.SetChargingSpeed
struct ADunDefSharkMan_SetChargingSpeed_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.CheckForEncroachers
struct ADunDefSharkMan_CheckForEncroachers_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAbortAnimation
struct ADunDefSharkMan_PlaySharkManChargeAbortAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManHitWallAnimation
struct ADunDefSharkMan_PlaySharkManHitWallAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeFailAnimation
struct ADunDefSharkMan_PlaySharkManChargeFailAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.StopSharkManDizzyAnimation
struct ADunDefSharkMan_StopSharkManDizzyAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManDizzyAnimation
struct ADunDefSharkMan_PlaySharkManDizzyAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManChargeAnimation
struct ADunDefSharkMan_PlaySharkManChargeAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManWindupAnimation
struct ADunDefSharkMan_PlaySharkManWindupAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.Tick
struct ADunDefSharkMan_Tick_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.HandleMomentum
struct ADunDefSharkMan_HandleMomentum_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.SetSharkManArmBlend
struct ADunDefSharkMan_SetSharkManArmBlend_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlaySharkManAttackAnimation
struct ADunDefSharkMan_PlaySharkManAttackAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlayHurtAnimation
struct ADunDefSharkMan_PlayHurtAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PlayAttackAnimation
struct ADunDefSharkMan_PlayAttackAnimation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GetEnemyTargetingDesirability
struct ADunDefSharkMan_GetEnemyTargetingDesirability_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GetTowerTargetingDesirability
struct ADunDefSharkMan_GetTowerTargetingDesirability_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeSwingLocation
struct ADunDefSharkMan_GetMeleeSwingLocation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeElbowLocation
struct ADunDefSharkMan_GetMeleeElbowLocation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GetMeleeFistLocation
struct ADunDefSharkMan_GetMeleeFistLocation_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.GroundStrike
struct ADunDefSharkMan_GroundStrike_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothEnd
struct ADunDefSharkMan_MeleeBothEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeBothStart
struct ADunDefSharkMan_MeleeBothStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightEnd
struct ADunDefSharkMan_MeleeRightEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeRightStart
struct ADunDefSharkMan_MeleeRightStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftEnd
struct ADunDefSharkMan_MeleeLeftEnd_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.MeleeLeftStart
struct ADunDefSharkMan_MeleeLeftStart_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.ExecReplicatedFunction
struct ADunDefSharkMan_ExecReplicatedFunction_Params
{
};

// Function DunDefAtlantis.DunDefSharkMan.PostBeginPlay
struct ADunDefSharkMan_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.NotifyTakeHitEX
struct ADunDefSharkmanController_NotifyTakeHitEX_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.AbortCharge
struct ADunDefSharkmanController_AbortCharge_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckTowerViability
struct ADunDefSharkmanController_CheckTowerViability_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.CheckForCustomAttacks
struct ADunDefSharkmanController_CheckForCustomAttacks_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.GetReachCheckDuration
struct ADunDefSharkmanController_GetReachCheckDuration_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.DoPositionPoll
struct ADunDefSharkmanController_DoPositionPoll_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsWinding
struct ADunDefSharkmanController_IsWinding_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsDistractedByCore
struct ADunDefSharkmanController_IsDistractedByCore_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToTowers
struct ADunDefSharkmanController_IsCloseToTowers_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.IsCloseToPlayers
struct ADunDefSharkmanController_IsCloseToPlayers_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.AddToSwingHurtList
struct ADunDefSharkmanController_AddToSwingHurtList_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.EndMeleeSwing
struct ADunDefSharkmanController_EndMeleeSwing_Params
{
};

// Function DunDefAtlantis.DunDefSharkmanController.StartMeleeSwing
struct ADunDefSharkmanController_StartMeleeSwing_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.ScaleColor
struct APuzzlePieceActor_ScaleColor_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.TurnOnStartEmitter
struct APuzzlePieceActor_TurnOnStartEmitter_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayDemoEmitter
struct APuzzlePieceActor_PlayDemoEmitter_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.ShutOffVFX
struct APuzzlePieceActor_ShutOffVFX_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetColorLerp
struct APuzzlePieceActor_SetColorLerp_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayPuzzleCompletedVFX
struct APuzzlePieceActor_PlayPuzzleCompletedVFX_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PlayFailedVFX
struct APuzzlePieceActor_PlayFailedVFX_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidDeactivation
struct APuzzlePieceActor_SetValidDeactivation_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetValidTouching
struct APuzzlePieceActor_SetValidTouching_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.Bump
struct APuzzlePieceActor_Bump_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.Touch
struct APuzzlePieceActor_Touch_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.SetMyPuzzleRoom
struct APuzzlePieceActor_SetMyPuzzleRoom_Params
{
};

// Function DunDefAtlantis.PuzzlePieceActor.PostBeginPlay
struct APuzzlePieceActor_PostBeginPlay_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.OnModifyProperty
struct ARaisingWaterVolume_OnModifyProperty_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearPawnFXOverrides
struct ARaisingWaterVolume_ClearPawnFXOverrides_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.SetPawnFXOverrides
struct ARaisingWaterVolume_SetPawnFXOverrides_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.Tick
struct ARaisingWaterVolume_Tick_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.ClearAirControl
struct ARaisingWaterVolume_ClearAirControl_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.UnTouch
struct ARaisingWaterVolume_UnTouch_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.Touch
struct ARaisingWaterVolume_Touch_Params
{
};

// Function DunDefAtlantis.RaisingWaterVolume.ExecReplicatedFunction
struct ARaisingWaterVolume_ExecReplicatedFunction_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
