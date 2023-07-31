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

// Function UDKGame.AlienWareAPI.LightEvent
struct UAlienWareAPI_LightEvent_Params
{
};

// Function UDKGame.AlienWareAPI.Update
struct UAlienWareAPI_Update_Params
{
};

// Function UDKGame.AlienWareAPI.SetAllDefaultLightColors
struct UAlienWareAPI_SetAllDefaultLightColors_Params
{
};

// Function UDKGame.AlienWareAPI.SetAllLightColors
struct UAlienWareAPI_SetAllLightColors_Params
{
};

// Function UDKGame.BuffNativeObject.MarkBuffPendingKill
struct UBuffNativeObject_MarkBuffPendingKill_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.NotifyDied
struct UDunDef_SeqAct_EnemyWaveSpawner_NotifyDied_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.Update
struct UDunDef_SeqAct_EnemyWaveSpawner_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.Tick
struct UDunDef_SeqAct_EnemyWaveSpawner_Tick_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.NativeWaveUpdating
struct UDunDef_SeqAct_EnemyWaveSpawner_NativeWaveUpdating_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.Reset
struct UDunDef_SeqAct_EnemyWaveSpawner_Reset_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.UpdateWave
struct UDunDef_SeqAct_EnemyWaveSpawner_UpdateWave_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.GetNumEnemiesRemainingToKill
struct UDunDef_SeqAct_EnemyWaveSpawner_GetNumEnemiesRemainingToKill_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.GetNumEnemiesRemainingToSpawn
struct UDunDef_SeqAct_EnemyWaveSpawner_GetNumEnemiesRemainingToSpawn_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnemyWaveSpawner.GetMasterWaveNumber
struct UDunDef_SeqAct_EnemyWaveSpawner_GetMasterWaveNumber_Params
{
};

// Function UDKGame.DunDef_UIAction_PlayMovie.Update
struct UDunDef_UIAction_PlayMovie_Update_Params
{
};

// Function UDKGame.DunDefDamageType.GetElementalTrait
struct UDunDefDamageType_GetElementalTrait_Params
{
};

// Function UDKGame.DunDefDamageType.IsPassiveDamageType
struct UDunDefDamageType_IsPassiveDamageType_Params
{
};

// Function UDKGame.DunDefHeroManagerNative.GetModMapNames
struct UDunDefHeroManagerNative_GetModMapNames_Params
{
};

// Function UDKGame.DunDefHeroManagerNative.ServerCheckForDuplicateDroppedEquipment
struct UDunDefHeroManagerNative_ServerCheckForDuplicateDroppedEquipment_Params
{
};

// Function UDKGame.DunDefHeroManagerNative.CheckForDuplicateEquipment
struct UDunDefHeroManagerNative_CheckForDuplicateEquipment_Params
{
};

// Function UDKGame.DunDefHeroManagerNative.GetEquipmentOfType
struct UDunDefHeroManagerNative_GetEquipmentOfType_Params
{
};

// Function UDKGame.DunDefHeroManagerNative.GetDamageTypeIndex
struct UDunDefHeroManagerNative_GetDamageTypeIndex_Params
{
};

// Function UDKGame.HeroEquipmentNative.AccelInterp
struct UHeroEquipmentNative_AccelInterp_Params
{
};

// Function UDKGame.HeroEquipmentNative.ContinousDistanceBetween
struct UHeroEquipmentNative_ContinousDistanceBetween_Params
{
};

// Function UDKGame.HeroEquipmentNative.ContinousInterp
struct UHeroEquipmentNative_ContinousInterp_Params
{
};

// Function UDKGame.HeroEquipmentNative.GetSaveInfo
struct UHeroEquipmentNative_GetSaveInfo_Params
{
};

// Function UDKGame.HeroEquipmentNative.CovertEquipementsToSaveInfos
struct UHeroEquipmentNative_CovertEquipementsToSaveInfos_Params
{
};

// Function UDKGame.DataListEntryInterface.IsRootEntry
struct UDataListEntryInterface_IsRootEntry_Params
{
};

// Function UDKGame.DataListEntryInterface.GetFolderID
struct UDataListEntryInterface_GetFolderID_Params
{
};

// Function UDKGame.DataListEntryInterface.GetDataProps
struct UDataListEntryInterface_GetDataProps_Params
{
};

// Function UDKGame.DataListEntryInterface.GetDataString
struct UDataListEntryInterface_GetDataString_Params
{
};

// Function UDKGame.DataListEntryInterface.GetEntryEnabled
struct UDataListEntryInterface_GetEntryEnabled_Params
{
};

// Function UDKGame.HeroEquipment.GenerateStatObject
struct UHeroEquipment_GenerateStatObject_Params
{
};

// Function UDKGame.HeroEquipment.LoadEnchantments
struct UHeroEquipment_LoadEnchantments_Params
{
};

// Function UDKGame.HeroEquipment.ClearEnchantments
struct UHeroEquipment_ClearEnchantments_Params
{
};

// Function UDKGame.HeroEquipment.RemoveEnchantment
struct UHeroEquipment_RemoveEnchantment_Params
{
};

// Function UDKGame.HeroEquipment.AddEnchantment
struct UHeroEquipment_AddEnchantment_Params
{
};

// Function UDKGame.HeroEquipment.LoadComparisonBiases
struct UHeroEquipment_LoadComparisonBiases_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentOverrideStatValue
struct UHeroEquipment_GetEquipmentOverrideStatValue_Params
{
};

// Function UDKGame.HeroEquipment.GetManaTokenHDIValue
struct UHeroEquipment_GetManaTokenHDIValue_Params
{
};

// Function UDKGame.HeroEquipment.AllowDroppedDestruction
struct UHeroEquipment_AllowDroppedDestruction_Params
{
};

// Function UDKGame.HeroEquipment.CanBeDropped
struct UHeroEquipment_CanBeDropped_Params
{
};

// Function UDKGame.HeroEquipment.GetDescription
struct UHeroEquipment_GetDescription_Params
{
};

// Function UDKGame.HeroEquipment.SwappedShop
struct UHeroEquipment_SwappedShop_Params
{
};

// Function UDKGame.HeroEquipment.RemoveFromDefenderStore
struct UHeroEquipment_RemoveFromDefenderStore_Params
{
};

// Function UDKGame.HeroEquipment.SoldFromPlayerShop
struct UHeroEquipment_SoldFromPlayerShop_Params
{
};

// Function UDKGame.HeroEquipment.AddToDefenderStore
struct UHeroEquipment_AddToDefenderStore_Params
{
};

// Function UDKGame.HeroEquipment.GetURLString
struct UHeroEquipment_GetURLString_Params
{
};

// Function UDKGame.HeroEquipment.GetPlayerShopSellAmount
struct UHeroEquipment_GetPlayerShopSellAmount_Params
{
};

// Function UDKGame.HeroEquipment.UsedInTradeManager
struct UHeroEquipment_UsedInTradeManager_Params
{
};

// Function UDKGame.HeroEquipment.CopyRandomizersFromTemplate
struct UHeroEquipment_CopyRandomizersFromTemplate_Params
{
};

// Function UDKGame.HeroEquipment.GetIconDrawScale
struct UHeroEquipment_GetIconDrawScale_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentDrawScale
struct UHeroEquipment_GetEquipmentDrawScale_Params
{
};

// Function UDKGame.HeroEquipment.AllowStoringInItemBox
struct UHeroEquipment_AllowStoringInItemBox_Params
{
};

// Function UDKGame.HeroEquipment.AllowSaving
struct UHeroEquipment_AllowSaving_Params
{
};

// Function UDKGame.HeroEquipment.GetRespawnTimeMultiplier
struct UHeroEquipment_GetRespawnTimeMultiplier_Params
{
};

// Function UDKGame.HeroEquipment.AllowSelling
struct UHeroEquipment_AllowSelling_Params
{
};

// Function UDKGame.HeroEquipment.GetDenialReasonString
struct UHeroEquipment_GetDenialReasonString_Params
{
};

// Function UDKGame.HeroEquipment.GetClassRequirementString
struct UHeroEquipment_GetClassRequirementString_Params
{
};

// Function UDKGame.HeroEquipment.GetLevelRequirementString
struct UHeroEquipment_GetLevelRequirementString_Params
{
};

// Function UDKGame.HeroEquipment.GetLevelRequirement
struct UHeroEquipment_GetLevelRequirement_Params
{
};

// Function UDKGame.HeroEquipment.SetLocked
struct UHeroEquipment_SetLocked_Params
{
};

// Function UDKGame.HeroEquipment.IsNameFullyVerified
struct UHeroEquipment_IsNameFullyVerified_Params
{
};

// Function UDKGame.HeroEquipment.LocalCustomForgerNameVerified
struct UHeroEquipment_LocalCustomForgerNameVerified_Params
{
};

// Function UDKGame.HeroEquipment.LocalCustomNameVerified
struct UHeroEquipment_LocalCustomNameVerified_Params
{
};

// Function UDKGame.HeroEquipment.GetCustomCreatorName
struct UHeroEquipment_GetCustomCreatorName_Params
{
};

// Function UDKGame.HeroEquipment.GetCustomName
struct UHeroEquipment_GetCustomName_Params
{
};

// Function UDKGame.HeroEquipment.DoesCustomNameNeedVerification
struct UHeroEquipment_DoesCustomNameNeedVerification_Params
{
};

// Function UDKGame.HeroEquipment.ShutDown
struct UHeroEquipment_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment.GetGivenEquipmentMessage
struct UHeroEquipment_GetGivenEquipmentMessage_Params
{
};

// Function UDKGame.HeroEquipment.GetWorldSeconds
struct UHeroEquipment_GetWorldSeconds_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment.IsAuthority
struct UHeroEquipment_IsAuthority_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_WeaponDidDamage
struct UHeroEquipment_NotifyEquipment_WeaponDidDamage_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_PawnDied
struct UHeroEquipment_NotifyEquipment_PawnDied_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_PawnJumped
struct UHeroEquipment_NotifyEquipment_PawnJumped_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_PawnAttacked
struct UHeroEquipment_NotifyEquipment_PawnAttacked_Params
{
};

// Function UDKGame.HeroEquipment.NotifyEquipment_PawnTookDamage
struct UHeroEquipment_NotifyEquipment_PawnTookDamage_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentAttachedComponent
struct UHeroEquipment_GetEquipmentAttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment.ExecHeroEvent
struct UHeroEquipment_ExecHeroEvent_Params
{
};

// Function UDKGame.HeroEquipment.GetPlayerPawn
struct UHeroEquipment_GetPlayerPawn_Params
{
};

// Function UDKGame.HeroEquipment.TickedByPawn
struct UHeroEquipment_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment.GetFullEquipmentSetMultiplier
struct UHeroEquipment_GetFullEquipmentSetMultiplier_Params
{
};

// Function UDKGame.HeroEquipment.HasFullEquipmentSet
struct UHeroEquipment_HasFullEquipmentSet_Params
{
};

// Function UDKGame.HeroEquipment.MatchesEquipmentIDNumbers
struct UHeroEquipment_MatchesEquipmentIDNumbers_Params
{
};

// Function UDKGame.HeroEquipment.MatchesEquipmentIDNetInfo
struct UHeroEquipment_MatchesEquipmentIDNetInfo_Params
{
};

// Function UDKGame.HeroEquipment.MatchesEquipmentID
struct UHeroEquipment_MatchesEquipmentID_Params
{
};

// Function UDKGame.HeroEquipment.CloseAnyEquipmentInfoGUI
struct UHeroEquipment_CloseAnyEquipmentInfoGUI_Params
{
};

// Function UDKGame.HeroEquipment.IsInAnyEquipmentInfoGUI
struct UHeroEquipment_IsInAnyEquipmentInfoGUI_Params
{
};

// Function UDKGame.HeroEquipment.CompareDamageResistance
struct UHeroEquipment_CompareDamageResistance_Params
{
};

// Function UDKGame.HeroEquipment.CompareHeroStat
struct UHeroEquipment_CompareHeroStat_Params
{
};

// Function UDKGame.HeroEquipment.CompareEquipmentStat
struct UHeroEquipment_CompareEquipmentStat_Params
{
};

// Function UDKGame.HeroEquipment.GetNumStatsForRows
struct UHeroEquipment_GetNumStatsForRows_Params
{
};

// Function UDKGame.HeroEquipment.GetForgerName
struct UHeroEquipment_GetForgerName_Params
{
};

// Function UDKGame.HeroEquipment.GetNonZeroResistanceStatAtIndex
struct UHeroEquipment_GetNonZeroResistanceStatAtIndex_Params
{
};

// Function UDKGame.HeroEquipment.GetNonZeroHeroStatAtIndex
struct UHeroEquipment_GetNonZeroHeroStatAtIndex_Params
{
};

// Function UDKGame.HeroEquipment.GetNonZeroEquipmentStatAtIndex
struct UHeroEquipment_GetNonZeroEquipmentStatAtIndex_Params
{
};

// Function UDKGame.HeroEquipment.SetResistanceStatValue
struct UHeroEquipment_SetResistanceStatValue_Params
{
};

// Function UDKGame.HeroEquipment.SetEquipmentStatValue
struct UHeroEquipment_SetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentStatString
struct UHeroEquipment_GetEquipmentStatString_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentStatValue
struct UHeroEquipment_GetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentStatName
struct UHeroEquipment_GetEquipmentStatName_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentStatIcon
struct UHeroEquipment_GetEquipmentStatIcon_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentStatDescription
struct UHeroEquipment_GetEquipmentStatDescription_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentIcon
struct UHeroEquipment_GetEquipmentIcon_Params
{
};

// Function UDKGame.HeroEquipment.UsesColorOverrides
struct UHeroEquipment_UsesColorOverrides_Params
{
};

// Function UDKGame.HeroEquipment.UsesColorSets
struct UHeroEquipment_UsesColorSets_Params
{
};

// Function UDKGame.HeroEquipment.ReattachEquipment
struct UHeroEquipment_ReattachEquipment_Params
{
};

// Function UDKGame.HeroEquipment.LogEquipStats
struct UHeroEquipment_LogEquipStats_Params
{
};

// Function UDKGame.HeroEquipment.RefreshedValues
struct UHeroEquipment_RefreshedValues_Params
{
};

// Function UDKGame.HeroEquipment.ReceivedPlayerActor
struct UHeroEquipment_ReceivedPlayerActor_Params
{
};

// Function UDKGame.HeroEquipment.RemovedFromHero
struct UHeroEquipment_RemovedFromHero_Params
{
};

// Function UDKGame.HeroEquipment.AddAttachments
struct UHeroEquipment_AddAttachments_Params
{
};

// Function UDKGame.HeroEquipment.RemoveAttachments
struct UHeroEquipment_RemoveAttachments_Params
{
};

// Function UDKGame.HeroEquipment.LocalFirstTimeEquipped
struct UHeroEquipment_LocalFirstTimeEquipped_Params
{
};

// Function UDKGame.HeroEquipment.AddedToHero
struct UHeroEquipment_AddedToHero_Params
{
};

// Function UDKGame.HeroEquipment.SetOwnerNoSee
struct UHeroEquipment_SetOwnerNoSee_Params
{
};

// Function UDKGame.HeroEquipment.RemoveEquipmentAttachment
struct UHeroEquipment_RemoveEquipmentAttachment_Params
{
};

// Function UDKGame.HeroEquipment.AddEquipmentAttachment
struct UHeroEquipment_AddEquipmentAttachment_Params
{
};

// Function UDKGame.HeroEquipment.AttachedComponent
struct UHeroEquipment_AttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment.CheckNameVerification
struct UHeroEquipment_CheckNameVerification_Params
{
};

// Function UDKGame.HeroEquipment.ApplyAltDamageMultiplierDisplay
struct UHeroEquipment_ApplyAltDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment.GetAltDamageIncreaseDisplay
struct UHeroEquipment_GetAltDamageIncreaseDisplay_Params
{
};

// Function UDKGame.HeroEquipment.ApplyElementalDamageMultiplierDisplay
struct UHeroEquipment_ApplyElementalDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment.GetElementalDamageIncreaseDisplay
struct UHeroEquipment_GetElementalDamageIncreaseDisplay_Params
{
};

// Function UDKGame.HeroEquipment.GetBaseDamage
struct UHeroEquipment_GetBaseDamage_Params
{
};

// Function UDKGame.HeroEquipment.GetShiftClickUpgradeCount
struct UHeroEquipment_GetShiftClickUpgradeCount_Params
{
};

// Function UDKGame.HeroEquipment.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_ApplyPrimaryDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment.GetPrimaryDamageIncreaseDisplay
struct UHeroEquipment_GetPrimaryDamageIncreaseDisplay_Params
{
};

// Function UDKGame.HeroEquipment.GetStatLevelUpAmountIterations
struct UHeroEquipment_GetStatLevelUpAmountIterations_Params
{
};

// Function UDKGame.HeroEquipment.CheckStatLevelUpIterations
struct UHeroEquipment_CheckStatLevelUpIterations_Params
{
};

// Function UDKGame.HeroEquipment.ApplyLevelUp
struct UHeroEquipment_ApplyLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.GetNextStatLevelUpValue
struct UHeroEquipment_GetNextStatLevelUpValue_Params
{
};

// Function UDKGame.HeroEquipment.GetDamageResistanceStatIndex
struct UHeroEquipment_GetDamageResistanceStatIndex_Params
{
};

// Function UDKGame.HeroEquipment.AllowStatLevelUp
struct UHeroEquipment_AllowStatLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.GetMaxHeroStatValue
struct UHeroEquipment_GetMaxHeroStatValue_Params
{
};

// Function UDKGame.HeroEquipment.NextLevelIsMaximumLevel
struct UHeroEquipment_NextLevelIsMaximumLevel_Params
{
};

// Function UDKGame.HeroEquipment.AtMaximumLevel
struct UHeroEquipment_AtMaximumLevel_Params
{
};

// Function UDKGame.HeroEquipment.AllowManaInvestment
struct UHeroEquipment_AllowManaInvestment_Params
{
};

// Function UDKGame.HeroEquipment.CanLevelUp
struct UHeroEquipment_CanLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.InvestMana
struct UHeroEquipment_InvestMana_Params
{
};

// Function UDKGame.HeroEquipment.GetManaPercentageOfLevelUp
struct UHeroEquipment_GetManaPercentageOfLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.GetRemainingManaForLevelUp
struct UHeroEquipment_GetRemainingManaForLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.GetShopWorth
struct UHeroEquipment_GetShopWorth_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentWorth
struct UHeroEquipment_GetEquipmentWorth_Params
{
};

// Function UDKGame.HeroEquipment.GetManaRequirementForLevelUp
struct UHeroEquipment_GetManaRequirementForLevelUp_Params
{
};

// Function UDKGame.HeroEquipment.GetAltWeaponDamage
struct UHeroEquipment_GetAltWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment.GetWeaponDamage
struct UHeroEquipment_GetWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment.UseEquipmentDrawScale
struct UHeroEquipment_UseEquipmentDrawScale_Params
{
};

// Function UDKGame.HeroEquipment.IsWeapon
struct UHeroEquipment_IsWeapon_Params
{
};

// Function UDKGame.HeroEquipment.GetHowManyDamageReductionTypes
struct UHeroEquipment_GetHowManyDamageReductionTypes_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentColorSet
struct UHeroEquipment_GetEquipmentColorSet_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentRatingPercent
struct UHeroEquipment_GetEquipmentRatingPercent_Params
{
};

// Function UDKGame.HeroEquipment.GetComparisonIndex
struct UHeroEquipment_GetComparisonIndex_Params
{
};

// Function UDKGame.HeroEquipment.GetRemovalRating
struct UHeroEquipment_GetRemovalRating_Params
{
};

// Function UDKGame.HeroEquipment.GetArmourRating
struct UHeroEquipment_GetArmourRating_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentRating
struct UHeroEquipment_GetEquipmentRating_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentName
struct UHeroEquipment_GetEquipmentName_Params
{
};

// Function UDKGame.HeroEquipment.AddRandomizeValues
struct UHeroEquipment_AddRandomizeValues_Params
{
};

// Function UDKGame.HeroEquipment.DetermineUltQuality
struct UHeroEquipment_DetermineUltQuality_Params
{
};

// Function UDKGame.HeroEquipment.SanitiseRandomizers
struct UHeroEquipment_SanitiseRandomizers_Params
{
};

// Function UDKGame.HeroEquipment.GenerateUniqueID
struct UHeroEquipment_GenerateUniqueID_Params
{
};

// Function UDKGame.HeroEquipment.GetIndexOfRandomStatName
struct UHeroEquipment_GetIndexOfRandomStatName_Params
{
};

// Function UDKGame.HeroEquipment.ResetStatsToTemplate
struct UHeroEquipment_ResetStatsToTemplate_Params
{
};

// Function UDKGame.HeroEquipment.GenerateRandomizerValue
struct UHeroEquipment_GenerateRandomizerValue_Params
{
};

// Function UDKGame.HeroEquipment.GetEquipmentWeaponTemplate
struct UHeroEquipment_GetEquipmentWeaponTemplate_Params
{
};

// Function UDKGame.HeroEquipment.GetStatValueAndSign
struct UHeroEquipment_GetStatValueAndSign_Params
{
};

// Function UDKGame.HeroEquipment.GetDamageResistanceAndSign
struct UHeroEquipment_GetDamageResistanceAndSign_Params
{
};

// Function UDKGame.HeroEquipment.GetDamageResistance
struct UHeroEquipment_GetDamageResistance_Params
{
};

// Function UDKGame.HeroEquipment.SetHeroStatValue
struct UHeroEquipment_SetHeroStatValue_Params
{
};

// Function UDKGame.HeroEquipment.GetStatValue
struct UHeroEquipment_GetStatValue_Params
{
};

// Function UDKGame.HeroEquipment.CreateEquipmentFromNetInfo
struct UHeroEquipment_CreateEquipmentFromNetInfo_Params
{
};

// Function UDKGame.HeroEquipment.ConvertSaveInfoToNetInfo
struct UHeroEquipment_ConvertSaveInfoToNetInfo_Params
{
};

// Function UDKGame.HeroEquipment.InitFromNetInfo
struct UHeroEquipment_InitFromNetInfo_Params
{
};

// Function UDKGame.HeroEquipment.GetNetInfo
struct UHeroEquipment_GetNetInfo_Params
{
};

// Function UDKGame.HeroEquipment.GetFullEquipmentName
struct UHeroEquipment_GetFullEquipmentName_Params
{
};

// Function UDKGame.HeroEquipment.IsRootEntry
struct UHeroEquipment_IsRootEntry_Params
{
};

// Function UDKGame.HeroEquipment.GetFolderID
struct UHeroEquipment_GetFolderID_Params
{
};

// Function UDKGame.HeroEquipment.GetEntryEnabled
struct UHeroEquipment_GetEntryEnabled_Params
{
};

// Function UDKGame.HeroEquipment.GetDataProps
struct UHeroEquipment_GetDataProps_Params
{
};

// Function UDKGame.HeroEquipment.GetDataString
struct UHeroEquipment_GetDataString_Params
{
};

// Function UDKGame.NativeDunDefHero.RemoveEquipment
struct UNativeDunDefHero_RemoveEquipment_Params
{
};

// Function UDKGame._DataTypes.SizeCompare
struct U_DataTypes_SizeCompare_Params
{
};

// Function UDKGame._DataTypes.LevelCompare
struct U_DataTypes_LevelCompare_Params
{
};

// Function UDKGame._DataTypes.NameCompare
struct U_DataTypes_NameCompare_Params
{
};

// Function UDKGame._DataTypes.ManaCompare
struct U_DataTypes_ManaCompare_Params
{
};

// Function UDKGame._DataTypes.RatingCompare
struct U_DataTypes_RatingCompare_Params
{
};

// Function UDKGame._DataTypes.QualityCompare
struct U_DataTypes_QualityCompare_Params
{
};

// Function UDKGame._DataTypes.TypeCompare
struct U_DataTypes_TypeCompare_Params
{
};

// Function UDKGame._DataTypes.TypeScoreHeroEquipment
struct U_DataTypes_TypeScoreHeroEquipment_Params
{
};

// Function UDKGame._DataTypes.Merge
struct U_DataTypes_Merge_Params
{
};

// Function UDKGame._DataTypes.MergeSortPets
struct U_DataTypes_MergeSortPets_Params
{
};

// Function UDKGame._DataTypes.MergeSortItems
struct U_DataTypes_MergeSortItems_Params
{
};

// Function UDKGame._DataTypes.PetSizeSortComparer
struct U_DataTypes_PetSizeSortComparer_Params
{
};

// Function UDKGame._DataTypes.ItemSortComparer
struct U_DataTypes_ItemSortComparer_Params
{
};

// Function UDKGame._DataTypes.InitializeHQArray
struct U_DataTypes_InitializeHQArray_Params
{
};

// Function UDKGame._DataTypes.GraphicsQualtyToString
struct U_DataTypes_GraphicsQualtyToString_Params
{
};

// Function UDKGame._DataTypes.GraphicsQualtyToByte
struct U_DataTypes_GraphicsQualtyToByte_Params
{
};

// Function UDKGame._DataTypes.SortingFilterToString
struct U_DataTypes_SortingFilterToString_Params
{
};

// Function UDKGame._DataTypes.SortingFilterToByte
struct U_DataTypes_SortingFilterToByte_Params
{
};

// Function UDKGame.DunDefHero.UpdateBuffValues
struct UDunDefHero_UpdateBuffValues_Params
{
};

// Function UDKGame.DunDefHero.GetHeroTowerArchetypes
struct UDunDefHero_GetHeroTowerArchetypes_Params
{
};

// Function UDKGame.DunDefHero.OnTowerDestroyed
struct UDunDefHero_OnTowerDestroyed_Params
{
};

// Function UDKGame.DunDefHero.OnTowerCreated
struct UDunDefHero_OnTowerCreated_Params
{
};

// Function UDKGame.DunDefHero.CheckHeroForCosmeticSet
struct UDunDefHero_CheckHeroForCosmeticSet_Params
{
};

// Function UDKGame.DunDefHero.SetCosmeticSetBonus
struct UDunDefHero_SetCosmeticSetBonus_Params
{
};

// Function UDKGame.DunDefHero.CheckForCosmeticSet
struct UDunDefHero_CheckForCosmeticSet_Params
{
};

// Function UDKGame.DunDefHero.GetEquipmentOverrideStatValue
struct UDunDefHero_GetEquipmentOverrideStatValue_Params
{
};

// Function UDKGame.DunDefHero.DetachAllEquipments
struct UDunDefHero_DetachAllEquipments_Params
{
};

// Function UDKGame.DunDefHero.AttachAllEquipments
struct UDunDefHero_AttachAllEquipments_Params
{
};

// Function UDKGame.DunDefHero.ReattachAllEquipments
struct UDunDefHero_ReattachAllEquipments_Params
{
};

// Function UDKGame.DunDefHero.SetOwnerNoSee
struct UDunDefHero_SetOwnerNoSee_Params
{
};

// Function UDKGame.DunDefHero.GetTowerHeroInfoLabelString
struct UDunDefHero_GetTowerHeroInfoLabelString_Params
{
};

// Function UDKGame.DunDefHero.AllowForSelection
struct UDunDefHero_AllowForSelection_Params
{
};

// Function UDKGame.DunDefHero.GetGivenHeroMessage
struct UDunDefHero_GetGivenHeroMessage_Params
{
};

// Function UDKGame.DunDefHero.GetGivenCostumeMessage
struct UDunDefHero_GetGivenCostumeMessage_Params
{
};

// Function UDKGame.DunDefHero.IsHeroUnlocked
struct UDunDefHero_IsHeroUnlocked_Params
{
};

// Function UDKGame.DunDefHero.IsCostumeUnlocked
struct UDunDefHero_IsCostumeUnlocked_Params
{
};

// Function UDKGame.DunDefHero.GetNextUnlockedCostumeIndex
struct UDunDefHero_GetNextUnlockedCostumeIndex_Params
{
};

// Function UDKGame.DunDefHero.GetNumberOfUnlockedCostumes
struct UDunDefHero_GetNumberOfUnlockedCostumes_Params
{
};

// Function UDKGame.DunDefHero.GetRemovedHeroSelectionSound
struct UDunDefHero_GetRemovedHeroSelectionSound_Params
{
};

// Function UDKGame.DunDefHero.GetCharacterAnimSet
struct UDunDefHero_GetCharacterAnimSet_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerTemplate
struct UDunDefHero_GetPlayerTemplate_Params
{
};

// Function UDKGame.DunDefHero.GetHeroIconMaterial
struct UDunDefHero_GetHeroIconMaterial_Params
{
};

// Function UDKGame.DunDefHero.GetColorableMiniMapIconMat
struct UDunDefHero_GetColorableMiniMapIconMat_Params
{
};

// Function UDKGame.DunDefHero.GetCharacterMesh
struct UDunDefHero_GetCharacterMesh_Params
{
};

// Function UDKGame.DunDefHero.AtMaxExperience
struct UDunDefHero_AtMaxExperience_Params
{
};

// Function UDKGame.DunDefHero.CleanUpActionWheel
struct UDunDefHero_CleanUpActionWheel_Params
{
};

// Function UDKGame.DunDefHero.ResetForNewMap
struct UDunDefHero_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefHero.GetRespawnTimeMultiplier
struct UDunDefHero_GetRespawnTimeMultiplier_Params
{
};

// Function UDKGame.DunDefHero.TransferAllEquipmentToItemBox
struct UDunDefHero_TransferAllEquipmentToItemBox_Params
{
};

// Function UDKGame.DunDefHero.ResetNameVerification
struct UDunDefHero_ResetNameVerification_Params
{
};

// Function UDKGame.DunDefHero.GetCostOfRespec
struct UDunDefHero_GetCostOfRespec_Params
{
};

// Function UDKGame.DunDefHero.GetCostOfExpBonus
struct UDunDefHero_GetCostOfExpBonus_Params
{
};

// Function UDKGame.DunDefHero.GetCostOfRename
struct UDunDefHero_GetCostOfRename_Params
{
};

// Function UDKGame.DunDefHero.SetName
struct UDunDefHero_SetName_Params
{
};

// Function UDKGame.DunDefHero.AllowRenameHero
struct UDunDefHero_AllowRenameHero_Params
{
};

// Function UDKGame.DunDefHero.AllowExpBonus
struct UDunDefHero_AllowExpBonus_Params
{
};

// Function UDKGame.DunDefHero.AllowRespec
struct UDunDefHero_AllowRespec_Params
{
};

// Function UDKGame.DunDefHero.DoRename
struct UDunDefHero_DoRename_Params
{
};

// Function UDKGame.DunDefHero.DoExpBonus
struct UDunDefHero_DoExpBonus_Params
{
};

// Function UDKGame.DunDefHero.DoRespec
struct UDunDefHero_DoRespec_Params
{
};

// Function UDKGame.DunDefHero.GetPC
struct UDunDefHero_GetPC_Params
{
};

// Function UDKGame.DunDefHero.GetSafeHeroName
struct UDunDefHero_GetSafeHeroName_Params
{
};

// Function UDKGame.DunDefHero.GetLeaderboardName
struct UDunDefHero_GetLeaderboardName_Params
{
};

// Function UDKGame.DunDefHero.GetSubstituteHeroName
struct UDunDefHero_GetSubstituteHeroName_Params
{
};

// Function UDKGame.DunDefHero.LocalCustomNameRejected
struct UDunDefHero_LocalCustomNameRejected_Params
{
};

// Function UDKGame.DunDefHero.LocalCustomNameVerified
struct UDunDefHero_LocalCustomNameVerified_Params
{
};

// Function UDKGame.DunDefHero.GetCustomName
struct UDunDefHero_GetCustomName_Params
{
};

// Function UDKGame.DunDefHero.DoesCustomNameNeedVerification
struct UDunDefHero_DoesCustomNameNeedVerification_Params
{
};

// Function UDKGame.DunDefHero.IsAuthority
struct UDunDefHero_IsAuthority_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_WeaponDidDamage
struct UDunDefHero_NotifyHero_WeaponDidDamage_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_AnimNotifyEquipmentAttachment
struct UDunDefHero_NotifyHero_AnimNotifyEquipmentAttachment_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_PawnDied
struct UDunDefHero_NotifyHero_PawnDied_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_PawnJumped
struct UDunDefHero_NotifyHero_PawnJumped_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_PawnAttacked
struct UDunDefHero_NotifyHero_PawnAttacked_Params
{
};

// Function UDKGame.DunDefHero.NotifyHero_PawnTookDamage
struct UDunDefHero_NotifyHero_PawnTookDamage_Params
{
};

// Function UDKGame.DunDefHero.MultiCastHeroEvent
struct UDunDefHero_MultiCastHeroEvent_Params
{
};

// Function UDKGame.DunDefHero.ExecHeroEvent
struct UDunDefHero_ExecHeroEvent_Params
{
};

// Function UDKGame.DunDefHero.GetManaPower
struct UDunDefHero_GetManaPower_Params
{
};

// Function UDKGame.DunDefHero.GetEquipmentComparisonIndex
struct UDunDefHero_GetEquipmentComparisonIndex_Params
{
};

// Function UDKGame.DunDefHero.DrawTalker
struct UDunDefHero_DrawTalker_Params
{
};

// Function UDKGame.DunDefHero.MeetsHeroLevelRequirement
struct UDunDefHero_MeetsHeroLevelRequirement_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerAbilityForStat
struct UDunDefHero_GetPlayerAbilityForStat_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerName
struct UDunDefHero_GetPlayerName_Params
{
};

// Function UDKGame.DunDefHero.GetHeroNameWithLevel
struct UDunDefHero_GetHeroNameWithLevel_Params
{
};

// Function UDKGame.DunDefHero.GetGUID
struct UDunDefHero_GetGUID_Params
{
};

// Function UDKGame.DunDefHero.MatchesNetGUID
struct UDunDefHero_MatchesNetGUID_Params
{
};

// Function UDKGame.DunDefHero.MatchesGUID
struct UDunDefHero_MatchesGUID_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerPawn
struct UDunDefHero_GetPlayerPawn_Params
{
};

// Function UDKGame.DunDefHero.GetOwningPRI
struct UDunDefHero_GetOwningPRI_Params
{
};

// Function UDKGame.DunDefHero.GetActivePlayer
struct UDunDefHero_GetActivePlayer_Params
{
};

// Function UDKGame.DunDefHero.IsLocalLoadedHero
struct UDunDefHero_IsLocalLoadedHero_Params
{
};

// Function UDKGame.DunDefHero.IsMyGameplayHero
struct UDunDefHero_IsMyGameplayHero_Params
{
};

// Function UDKGame.DunDefHero.IsMyHero
struct UDunDefHero_IsMyHero_Params
{
};

// Function UDKGame.DunDefHero.CheckPointAllocations
struct UDunDefHero_CheckPointAllocations_Params
{
};

// Function UDKGame.DunDefHero.GetStatPointsFromLevelUps
struct UDunDefHero_GetStatPointsFromLevelUps_Params
{
};

// Function UDKGame.DunDefHero.AllowPickupWeaponType
struct UDunDefHero_AllowPickupWeaponType_Params
{
};

// Function UDKGame.DunDefHero.AllowEquipmentPickup
struct UDunDefHero_AllowEquipmentPickup_Params
{
};

// Function UDKGame.DunDefHero.GetHeroOffHandWeaponEquipment
struct UDunDefHero_GetHeroOffHandWeaponEquipment_Params
{
};

// Function UDKGame.DunDefHero.GetHeroWeaponEquipment
struct UDunDefHero_GetHeroWeaponEquipment_Params
{
};

// Function UDKGame.DunDefHero.GetHeroWeaponTemplate
struct UDunDefHero_GetHeroWeaponTemplate_Params
{
};

// Function UDKGame.DunDefHero.GetTotalDamageResistance
struct UDunDefHero_GetTotalDamageResistance_Params
{
};

// Function UDKGame.DunDefHero.AdjustDamage
struct UDunDefHero_AdjustDamage_Params
{
};

// Function UDKGame.DunDefHero.IsCarryingHeroWeapon
struct UDunDefHero_IsCarryingHeroWeapon_Params
{
};

// Function UDKGame.DunDefHero.GetActiveEquipmentOfType
struct UDunDefHero_GetActiveEquipmentOfType_Params
{
};

// Function UDKGame.DunDefHero.GetEquipmentOfType
struct UDunDefHero_GetEquipmentOfType_Params
{
};

// Function UDKGame.DunDefHero.ForceRemoveEquipmentByIndex
struct UDunDefHero_ForceRemoveEquipmentByIndex_Params
{
};

// Function UDKGame.DunDefHero.RemoveEquipmentByIndex
struct UDunDefHero_RemoveEquipmentByIndex_Params
{
};

// Function UDKGame.DunDefHero.GetEquipmentIndex
struct UDunDefHero_GetEquipmentIndex_Params
{
};

// Function UDKGame.DunDefHero.RemoveEquipment
struct UDunDefHero_RemoveEquipment_Params
{
};

// Function UDKGame.DunDefHero.AddEquipment
struct UDunDefHero_AddEquipment_Params
{
};

// Function UDKGame.DunDefHero.ShouldDropMainHandWeapon
struct UDunDefHero_ShouldDropMainHandWeapon_Params
{
};

// Function UDKGame.DunDefHero.GetStatModifier
struct UDunDefHero_GetStatModifier_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerGravityMultiplier
struct UDunDefHero_GetPlayerGravityMultiplier_Params
{
};

// Function UDKGame.DunDefHero.GetPlayerSpeedMultiplier
struct UDunDefHero_GetPlayerSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefHero.GetTotalEquipmentStatValue
struct UDunDefHero_GetTotalEquipmentStatValue_Params
{
};

// Function UDKGame.DunDefHero.GetEquipmentStatValue
struct UDunDefHero_GetEquipmentStatValue_Params
{
};

// Function UDKGame.DunDefHero.CanLevelUpStat
struct UDunDefHero_CanLevelUpStat_Params
{
};

// Function UDKGame.DunDefHero.SetStatValue
struct UDunDefHero_SetStatValue_Params
{
};

// Function UDKGame.DunDefHero.GetStatValue
struct UDunDefHero_GetStatValue_Params
{
};

// Function UDKGame.DunDefHero.GetRandomColors
struct UDunDefHero_GetRandomColors_Params
{
};

// Function UDKGame.DunDefHero.SetColorTemplate
struct UDunDefHero_SetColorTemplate_Params
{
};

// Function UDKGame.DunDefHero.SetRandomColors
struct UDunDefHero_SetRandomColors_Params
{
};

// Function UDKGame.DunDefHero.SetColors
struct UDunDefHero_SetColors_Params
{
};

// Function UDKGame.DunDefHero.GetStatDescription
struct UDunDefHero_GetStatDescription_Params
{
};

// Function UDKGame.DunDefHero.GetStatIcon
struct UDunDefHero_GetStatIcon_Params
{
};

// Function UDKGame.DunDefHero.GetStatName
struct UDunDefHero_GetStatName_Params
{
};

// Function UDKGame.DunDefHero.GetTimeToLevelUp
struct UDunDefHero_GetTimeToLevelUp_Params
{
};

// Function UDKGame.DunDefHero.GetManaRequiredForPreviousLevelUp
struct UDunDefHero_GetManaRequiredForPreviousLevelUp_Params
{
};

// Function UDKGame.DunDefHero.GetManaRequiredForLevelUp
struct UDunDefHero_GetManaRequiredForLevelUp_Params
{
};

// Function UDKGame.DunDefHero.GetMaxManaPower
struct UDunDefHero_GetMaxManaPower_Params
{
};

// Function UDKGame.DunDefHero.GetExperiencePercent
struct UDunDefHero_GetExperiencePercent_Params
{
};

// Function UDKGame.DunDefHero.GetExpRequiredForPreviousLevel
struct UDunDefHero_GetExpRequiredForPreviousLevel_Params
{
};

// Function UDKGame.DunDefHero.GetExpRequiredForNextLevel
struct UDunDefHero_GetExpRequiredForNextLevel_Params
{
};

// Function UDKGame.DunDefHero.GetNumLevelUpsAvailable
struct UDunDefHero_GetNumLevelUpsAvailable_Params
{
};

// Function UDKGame.DunDefHero.DoLevelUp
struct UDunDefHero_DoLevelUp_Params
{
};

// Function UDKGame.DunDefHero.HeroLevelUp
struct UDunDefHero_HeroLevelUp_Params
{
};

// Function UDKGame.DunDefHero.ReachedLevelCap
struct UDunDefHero_ReachedLevelCap_Params
{
};

// Function UDKGame.DunDefHero.GetLevelCap
struct UDunDefHero_GetLevelCap_Params
{
};

// Function UDKGame.DunDefHero.CanHeroLevelUp
struct UDunDefHero_CanHeroLevelUp_Params
{
};

// Function UDKGame.DunDefHero.AddExperience
struct UDunDefHero_AddExperience_Params
{
};

// Function UDKGame.DunDefHero.UpdateHeroIconMat
struct UDunDefHero_UpdateHeroIconMat_Params
{
};

// Function UDKGame.DunDefHero.InitFromSaveInfo
struct UDunDefHero_InitFromSaveInfo_Params
{
};

// Function UDKGame.DunDefHero.GetSaveInfo
struct UDunDefHero_GetSaveInfo_Params
{
};

// Function UDKGame.DunDefHero.GenerateGUID
struct UDunDefHero_GenerateGUID_Params
{
};

// Function UDKGame.DunDefHero.TickedByPawn
struct UDunDefHero_TickedByPawn_Params
{
};

// Function UDKGame.DunDefHero.ReceivedPlayerActor
struct UDunDefHero_ReceivedPlayerActor_Params
{
};

// Function UDKGame.DunDefHero.Updated
struct UDunDefHero_Updated_Params
{
};

// Function UDKGame.DunDefHero.CalcToTheLimit
struct UDunDefHero_CalcToTheLimit_Params
{
};

// Function UDKGame.DunDefHero.CalcHasCompleteArmorSet
struct UDunDefHero_CalcHasCompleteArmorSet_Params
{
};

// Function UDKGame.DunDefHero.ShutDown
struct UDunDefHero_ShutDown_Params
{
};

// Function UDKGame.DunDefHero.NetApplyUpdatedHeroStats
struct UDunDefHero_NetApplyUpdatedHeroStats_Params
{
};

// Function UDKGame.DunDefHero.InitFromNetInfo
struct UDunDefHero_InitFromNetInfo_Params
{
};

// Function UDKGame.DunDefHero.GetNetInfo
struct UDunDefHero_GetNetInfo_Params
{
};

// Function UDKGame.DunDefHero.GetDataListEntries
struct UDunDefHero_GetDataListEntries_Params
{
};

// Function UDKGame.DunDefHero.IsRootEntry
struct UDunDefHero_IsRootEntry_Params
{
};

// Function UDKGame.DunDefHero.GetFolderID
struct UDunDefHero_GetFolderID_Params
{
};

// Function UDKGame.DunDefHero.GetEntryEnabled
struct UDunDefHero_GetEntryEnabled_Params
{
};

// Function UDKGame.DunDefHero.GetDataProps
struct UDunDefHero_GetDataProps_Params
{
};

// Function UDKGame.DunDefHero.GetDataString
struct UDunDefHero_GetDataString_Params
{
};

// Function UDKGame.DunDefHero.GetCurrentHeroTemplate
struct UDunDefHero_GetCurrentHeroTemplate_Params
{
};

// Function UDKGame.DunDefHeroManager.GiveManaToken
struct UDunDefHeroManager_GiveManaToken_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentOnlineSessionName
struct UDunDefHeroManager_GetCurrentOnlineSessionName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetRestrictedPremiumMapTags
struct UDunDefHeroManager_GetRestrictedPremiumMapTags_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNotOwnedRestrictedPremiumMapTags
struct UDunDefHeroManager_GetNotOwnedRestrictedPremiumMapTags_Params
{
};

// Function UDKGame.DunDefHeroManager.RearrangeHeroes
struct UDunDefHeroManager_RearrangeHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.HasAnyPremiumMissionLocked
struct UDunDefHeroManager_HasAnyPremiumMissionLocked_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentMissionEquipmentRandomizerMultiplier
struct UDunDefHeroManager_GetCurrentMissionEquipmentRandomizerMultiplier_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNextHeroIndexForSelection
struct UDunDefHeroManager_GetNextHeroIndexForSelection_Params
{
};

// Function UDKGame.DunDefHeroManager.GetMetaFlagLenght
struct UDunDefHeroManager_GetMetaFlagLenght_Params
{
};

// Function UDKGame.DunDefHeroManager.GetMetaFlags
struct UDunDefHeroManager_GetMetaFlags_Params
{
};

// Function UDKGame.DunDefHeroManager.GetOrSetMetaFlags
struct UDunDefHeroManager_GetOrSetMetaFlags_Params
{
};

// Function UDKGame.DunDefHeroManager.GetMultiplayerModeImage
struct UDunDefHeroManager_GetMultiplayerModeImage_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_LoginAuthenticationError
struct UDunDefHeroManager_RankedMode_LoginAuthenticationError_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_KeepAliveTimedOut
struct UDunDefHeroManager_RankedMode_KeepAliveTimedOut_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_LoadingFailed
struct UDunDefHeroManager_RankedMode_LoadingFailed_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_LoginBanned
struct UDunDefHeroManager_RankedMode_LoginBanned_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_SeriesError
struct UDunDefHeroManager_RankedMode_SeriesError_Params
{
};

// Function UDKGame.DunDefHeroManager.RankedMode_LoadingComplete
struct UDunDefHeroManager_RankedMode_LoadingComplete_Params
{
};

// Function UDKGame.DunDefHeroManager.SetMultiplayerMode
struct UDunDefHeroManager_SetMultiplayerMode_Params
{
};

// Function UDKGame.DunDefHeroManager.ResetForNewMap
struct UDunDefHeroManager_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefHeroManager.IsCheatsEnabled
struct UDunDefHeroManager_IsCheatsEnabled_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNumShopEquipments
struct UDunDefHeroManager_GetNumShopEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.VerifyHeroNames
struct UDunDefHeroManager_VerifyHeroNames_Params
{
};

// Function UDKGame.DunDefHeroManager.GetEquipmentFromItemBox
struct UDunDefHeroManager_GetEquipmentFromItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.SetRandomShopEquipments
struct UDunDefHeroManager_SetRandomShopEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveShopEquipment
struct UDunDefHeroManager_RemoveShopEquipment_Params
{
};

// Function UDKGame.DunDefHeroManager.CheckOnlineNameVerification
struct UDunDefHeroManager_CheckOnlineNameVerification_Params
{
};

// Function UDKGame.DunDefHeroManager.InstallAllDLCEquipments
struct UDunDefHeroManager_InstallAllDLCEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.InstallDLCEquipments
struct UDunDefHeroManager_InstallDLCEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.AddDLCEquipmentEntry
struct UDunDefHeroManager_AddDLCEquipmentEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.AddCampaignLevelEntry
struct UDunDefHeroManager_AddCampaignLevelEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveDLCLevelEntries
struct UDunDefHeroManager_RemoveDLCLevelEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.GetIndexOfEntry
struct UDunDefHeroManager_GetIndexOfEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.SetOptionCampaignTag
struct UDunDefHeroManager_SetOptionCampaignTag_Params
{
};

// Function UDKGame.DunDefHeroManager.SetOptionDifficulty
struct UDunDefHeroManager_SetOptionDifficulty_Params
{
};

// Function UDKGame.DunDefHeroManager.ShowTutorial
struct UDunDefHeroManager_ShowTutorial_Params
{
};

// Function UDKGame.DunDefHeroManager.IsBanned
struct UDunDefHeroManager_IsBanned_Params
{
};

// Function UDKGame.DunDefHeroManager.AddKickedSession
struct UDunDefHeroManager_AddKickedSession_Params
{
};

// Function UDKGame.DunDefHeroManager.GetMaxBankedMana
struct UDunDefHeroManager_GetMaxBankedMana_Params
{
};

// Function UDKGame.DunDefHeroManager.BankAllMana
struct UDunDefHeroManager_BankAllMana_Params
{
};

// Function UDKGame.DunDefHeroManager.GetHeroTemplateWithID
struct UDunDefHeroManager_GetHeroTemplateWithID_Params
{
};

// Function UDKGame.DunDefHeroManager.GetRandomProTip
struct UDunDefHeroManager_GetRandomProTip_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatsStringForLevel
struct UDunDefHeroManager_GetStatsStringForLevel_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatsIndexForLevel
struct UDunDefHeroManager_GetStatsIndexForLevel_Params
{
};

// Function UDKGame.DunDefHeroManager.GetModeTypeIndex
struct UDunDefHeroManager_GetModeTypeIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatsIndex
struct UDunDefHeroManager_GetStatsIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentStatsString
struct UDunDefHeroManager_GetCurrentStatsString_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatsIndexFromDataStore
struct UDunDefHeroManager_GetStatsIndexFromDataStore_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatsString
struct UDunDefHeroManager_GetStatsString_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNumberOfMissionsUnlocked
struct UDunDefHeroManager_GetNumberOfMissionsUnlocked_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNextCampaignLevelEntry
struct UDunDefHeroManager_GetNextCampaignLevelEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.GetHeroIconsForAccessoryTypes
struct UDunDefHeroManager_GetHeroIconsForAccessoryTypes_Params
{
};

// Function UDKGame.DunDefHeroManager.GetHeroIconsForWeaponType
struct UDunDefHeroManager_GetHeroIconsForWeaponType_Params
{
};

// Function UDKGame.DunDefHeroManager.GetHeroTemplateForWeaponType
struct UDunDefHeroManager_GetHeroTemplateForWeaponType_Params
{
};

// Function UDKGame.DunDefHeroManager.CountItemsInFolder
struct UDunDefHeroManager_CountItemsInFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.ChangeLockedStatusAllEquipment
struct UDunDefHeroManager_ChangeLockedStatusAllEquipment_Params
{
};

// Function UDKGame.DunDefHeroManager.SellAllEquipment
struct UDunDefHeroManager_SellAllEquipment_Params
{
};

// Function UDKGame.DunDefHeroManager.SellEquipmentToBank
struct UDunDefHeroManager_SellEquipmentToBank_Params
{
};

// Function UDKGame.DunDefHeroManager.DropEquipmentFromItemBox
struct UDunDefHeroManager_DropEquipmentFromItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.DeleteEquipmentFromItemBox
struct UDunDefHeroManager_DeleteEquipmentFromItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.TransferEquipmentFromPlayerShop
struct UDunDefHeroManager_TransferEquipmentFromPlayerShop_Params
{
};

// Function UDKGame.DunDefHeroManager.TransferEquipmentToPlayerShop
struct UDunDefHeroManager_TransferEquipmentToPlayerShop_Params
{
};

// Function UDKGame.DunDefHeroManager.TransferEquipmentFromItemBox
struct UDunDefHeroManager_TransferEquipmentFromItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.GetMaxItemCount
struct UDunDefHeroManager_GetMaxItemCount_Params
{
};

// Function UDKGame.DunDefHeroManager.IsItemBoxFull
struct UDunDefHeroManager_IsItemBoxFull_Params
{
};

// Function UDKGame.DunDefHeroManager.IsMacAppStore
struct UDunDefHeroManager_IsMacAppStore_Params
{
};

// Function UDKGame.DunDefHeroManager.IsMacOSGameSpy
struct UDunDefHeroManager_IsMacOSGameSpy_Params
{
};

// Function UDKGame.DunDefHeroManager.CanStoreInItemBox
struct UDunDefHeroManager_CanStoreInItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.AddEquipmentToItemBox
struct UDunDefHeroManager_AddEquipmentToItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.AddEquipmentObjectToItemBox
struct UDunDefHeroManager_AddEquipmentObjectToItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.TransferEquipmentToItemBox
struct UDunDefHeroManager_TransferEquipmentToItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshItemBoxEquipmentLists
struct UDunDefHeroManager_RefreshItemBoxEquipmentLists_Params
{
};

// Function UDKGame.DunDefHeroManager.ResetTutorials
struct UDunDefHeroManager_ResetTutorials_Params
{
};

// Function UDKGame.DunDefHeroManager.SetCampaignEntryTag
struct UDunDefHeroManager_SetCampaignEntryTag_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCampaignLevelObjectForOnlineSubSystemInfo
struct UDunDefHeroManager_GetCampaignLevelObjectForOnlineSubSystemInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCampaignLevelObjectForTag
struct UDunDefHeroManager_GetCampaignLevelObjectForTag_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCampaignLevelIndex
struct UDunDefHeroManager_GetCampaignLevelIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentMapFileName
struct UDunDefHeroManager_GetCurrentMapFileName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCampaignLevelId
struct UDunDefHeroManager_GetCampaignLevelId_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLevelEntryWithTag
struct UDunDefHeroManager_GetLevelEntryWithTag_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLevelEntryWithId
struct UDunDefHeroManager_GetLevelEntryWithId_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLevelNameForId
struct UDunDefHeroManager_GetLevelNameForId_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLevelNameForContextID
struct UDunDefHeroManager_GetLevelNameForContextID_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLevelNameForIndex
struct UDunDefHeroManager_GetLevelNameForIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentCampaignLevelObject
struct UDunDefHeroManager_GetCurrentCampaignLevelObject_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentCampaignLevelEntry
struct UDunDefHeroManager_GetCurrentCampaignLevelEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCurrentCampaignLevelIndex
struct UDunDefHeroManager_GetCurrentCampaignLevelIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetWeightedRandomEquipmentFromDropEntries
struct UDunDefHeroManager_GetWeightedRandomEquipmentFromDropEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCustomEquipmentDrop
struct UDunDefHeroManager_GetCustomEquipmentDrop_Params
{
};

// Function UDKGame.DunDefHeroManager.CanAnyPlayerUseWeaponType
struct UDunDefHeroManager_CanAnyPlayerUseWeaponType_Params
{
};

// Function UDKGame.DunDefHeroManager.GetGlobalEquipmentDrop
struct UDunDefHeroManager_GetGlobalEquipmentDrop_Params
{
};

// Function UDKGame.DunDefHeroManager.ServerCreateDroppedEquipment
struct UDunDefHeroManager_ServerCreateDroppedEquipment_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNotPoisonDamageType
struct UDunDefHeroManager_GetNotPoisonDamageType_Params
{
};

// Function UDKGame.DunDefHeroManager.GetRandomDamageType
struct UDunDefHeroManager_GetRandomDamageType_Params
{
};

// Function UDKGame.DunDefHeroManager.GetElementalImpactEffect
struct UDunDefHeroManager_GetElementalImpactEffect_Params
{
};

// Function UDKGame.DunDefHeroManager.GetElementalWeaponEffect
struct UDunDefHeroManager_GetElementalWeaponEffect_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDamageTypeEntry
struct UDunDefHeroManager_GetDamageTypeEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDamageTypeFromIndex
struct UDunDefHeroManager_GetDamageTypeFromIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDamageTypeIndex
struct UDunDefHeroManager_GetDamageTypeIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.ShowHeroInfo
struct UDunDefHeroManager_ShowHeroInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.AddEquipmentFromNetInfo
struct UDunDefHeroManager_AddEquipmentFromNetInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.AddEquipmentFromSaveInfo
struct UDunDefHeroManager_AddEquipmentFromSaveInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.GetActiveHero
struct UDunDefHeroManager_GetActiveHero_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFirstLoadedAvailableHero
struct UDunDefHeroManager_GetFirstLoadedAvailableHero_Params
{
};

// Function UDKGame.DunDefHeroManager.GetActiveHeroIndex
struct UDunDefHeroManager_GetActiveHeroIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFreeHeroIndex
struct UDunDefHeroManager_GetFreeHeroIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.NotifyHeroLeft
struct UDunDefHeroManager_NotifyHeroLeft_Params
{
};

// Function UDKGame.DunDefHeroManager.NotifyPlayerLeft
struct UDunDefHeroManager_NotifyPlayerLeft_Params
{
};

// Function UDKGame.DunDefHeroManager.SetActiveHero
struct UDunDefHeroManager_SetActiveHero_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveActiveHero
struct UDunDefHeroManager_RemoveActiveHero_Params
{
};

// Function UDKGame.DunDefHeroManager.GetRandomHeroName
struct UDunDefHeroManager_GetRandomHeroName_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateNewHero
struct UDunDefHeroManager_CreateNewHero_Params
{
};

// Function UDKGame.DunDefHeroManager.DeleteLoadedHero
struct UDunDefHeroManager_DeleteLoadedHero_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateHeroFromNetInfo
struct UDunDefHeroManager_CreateHeroFromNetInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateHeroFromSaveInfo
struct UDunDefHeroManager_CreateHeroFromSaveInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryUserID
struct UDunDefHeroManager_GetPrimaryUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.CheckSaveInLobby
struct UDunDefHeroManager_CheckSaveInLobby_Params
{
};

// Function UDKGame.DunDefHeroManager.StoreDroppedLobbyEquipments
struct UDunDefHeroManager_StoreDroppedLobbyEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.GetLobbyEquipments
struct UDunDefHeroManager_GetLobbyEquipments_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateLobbyLevelDroppedEquipment
struct UDunDefHeroManager_CreateLobbyLevelDroppedEquipment_Params
{
};

// Function UDKGame.DunDefHeroManager.SaveHeroes
struct UDunDefHeroManager_SaveHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.SaveHeroesFancily
struct UDunDefHeroManager_SaveHeroesFancily_Params
{
};

// Function UDKGame.DunDefHeroManager.SaveForPlayer
struct UDunDefHeroManager_SaveForPlayer_Params
{
};

// Function UDKGame.DunDefHeroManager.SaveForEveryone
struct UDunDefHeroManager_SaveForEveryone_Params
{
};

// Function UDKGame.DunDefHeroManager.HasUniqueProfile
struct UDunDefHeroManager_HasUniqueProfile_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryStats
struct UDunDefHeroManager_GetPrimaryStats_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryOptions
struct UDunDefHeroManager_GetPrimaryOptions_Params
{
};

// Function UDKGame.DunDefHeroManager.IsPrimaryPlayerOrGuest
struct UDunDefHeroManager_IsPrimaryPlayerOrGuest_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryPlayer
struct UDunDefHeroManager_GetPrimaryPlayer_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryPlayerIndex
struct UDunDefHeroManager_GetPrimaryPlayerIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPrimaryCore
struct UDunDefHeroManager_GetPrimaryCore_Params
{
};

// Function UDKGame.DunDefHeroManager.VerifyStrings
struct UDunDefHeroManager_VerifyStrings_Params
{
};

// Function UDKGame.DunDefHeroManager.AddHeroForVerification
struct UDunDefHeroManager_AddHeroForVerification_Params
{
};

// Function UDKGame.DunDefHeroManager.VerificationComplete
struct UDunDefHeroManager_VerificationComplete_Params
{
};

// Function UDKGame.DunDefHeroManager.FindHeroVerificationEntry
struct UDunDefHeroManager_FindHeroVerificationEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.FindEquipmentVerificationEntry
struct UDunDefHeroManager_FindEquipmentVerificationEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.LoadHeroes
struct UDunDefHeroManager_LoadHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.LoadHeroesFancily
struct UDunDefHeroManager_LoadHeroesFancily_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveHeroes
struct UDunDefHeroManager_RemoveHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.SetPrimaryPlayer
struct UDunDefHeroManager_SetPrimaryPlayer_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveSponsoredGuests
struct UDunDefHeroManager_RemoveSponsoredGuests_Params
{
};

// Function UDKGame.DunDefHeroManager.InitCustomCampaignLevelEntry
struct UDunDefHeroManager_InitCustomCampaignLevelEntry_Params
{
};

// Function UDKGame.DunDefHeroManager.Initialize
struct UDunDefHeroManager_Initialize_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshModMapsList
struct UDunDefHeroManager_RefreshModMapsList_Params
{
};

// Function UDKGame.DunDefHeroManager.ModMapToInfo
struct UDunDefHeroManager_ModMapToInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDefaultOptions
struct UDunDefHeroManager_GetDefaultOptions_Params
{
};

// Function UDKGame.DunDefHeroManager.FixUserIDs
struct UDunDefHeroManager_FixUserIDs_Params
{
};

// Function UDKGame.DunDefHeroManager.GetUserNickname
struct UDunDefHeroManager_GetUserNickname_Params
{
};

// Function UDKGame.DunDefHeroManager.SetUserNickname
struct UDunDefHeroManager_SetUserNickname_Params
{
};

// Function UDKGame.DunDefHeroManager.InitializeUserIds
struct UDunDefHeroManager_InitializeUserIds_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshOptionsForAll
struct UDunDefHeroManager_RefreshOptionsForAll_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshOptions
struct UDunDefHeroManager_RefreshOptions_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshCores
struct UDunDefHeroManager_RefreshCores_Params
{
};

// Function UDKGame.DunDefHeroManager.DoLoading
struct UDunDefHeroManager_DoLoading_Params
{
};

// Function UDKGame.DunDefHeroManager.ShowReallyCorruptError
struct UDunDefHeroManager_ShowReallyCorruptError_Params
{
};

// Function UDKGame.DunDefHeroManager.ShowCorruptError
struct UDunDefHeroManager_ShowCorruptError_Params
{
};

// Function UDKGame.DunDefHeroManager.LoadSave
struct UDunDefHeroManager_LoadSave_Params
{
};

// Function UDKGame.DunDefHeroManager.HasPlayerBeaten
struct UDunDefHeroManager_HasPlayerBeaten_Params
{
};

// Function UDKGame.DunDefHeroManager.HasAnyoneBeaten
struct UDunDefHeroManager_HasAnyoneBeaten_Params
{
};

// Function UDKGame.DunDefHeroManager.HasAnyoneUnlocked
struct UDunDefHeroManager_HasAnyoneUnlocked_Params
{
};

// Function UDKGame.DunDefHeroManager.GetBeatenLevels
struct UDunDefHeroManager_GetBeatenLevels_Params
{
};

// Function UDKGame.DunDefHeroManager.GetProgress
struct UDunDefHeroManager_GetProgress_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateMissionCompleteEquipmentDropEntries
struct UDunDefHeroManager_UpdateMissionCompleteEquipmentDropEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.AddBeatenLevel
struct UDunDefHeroManager_AddBeatenLevel_Params
{
};

// Function UDKGame.DunDefHeroManager.AddProgress
struct UDunDefHeroManager_AddProgress_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveLocalHeroOrCostumeUnlock
struct UDunDefHeroManager_RemoveLocalHeroOrCostumeUnlock_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveLocalProgress
struct UDunDefHeroManager_RemoveLocalProgress_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCrystalCoreSettings
struct UDunDefHeroManager_GetCrystalCoreSettings_Params
{
};

// Function UDKGame.DunDefHeroManager.GetItemBoxInfo
struct UDunDefHeroManager_GetItemBoxInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateItemBox
struct UDunDefHeroManager_UpdateItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.ConvertToItemBox
struct UDunDefHeroManager_ConvertToItemBox_Params
{
};

// Function UDKGame.DunDefHeroManager.ConvertToHDInt
struct UDunDefHeroManager_ConvertToHDInt_Params
{
};

// Function UDKGame.DunDefHeroManager.CalculateBankedMana
struct UDunDefHeroManager_CalculateBankedMana_Params
{
};

// Function UDKGame.DunDefHeroManager.AddCrystalCoreSettings
struct UDunDefHeroManager_AddCrystalCoreSettings_Params
{
};

// Function UDKGame.DunDefHeroManager.SetOptions
struct UDunDefHeroManager_SetOptions_Params
{
};

// Function UDKGame.DunDefHeroManager.GetOptionsInfo
struct UDunDefHeroManager_GetOptionsInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.HasOptionsInfo
struct UDunDefHeroManager_HasOptionsInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.AddOptionsInfo
struct UDunDefHeroManager_AddOptionsInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.GetAchievements
struct UDunDefHeroManager_GetAchievements_Params
{
};

// Function UDKGame.DunDefHeroManager.AddAchievements
struct UDunDefHeroManager_AddAchievements_Params
{
};

// Function UDKGame.DunDefHeroManager.GetCoreUnlockInfo
struct UDunDefHeroManager_GetCoreUnlockInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.AddCoreUnlockInfo
struct UDunDefHeroManager_AddCoreUnlockInfo_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveRemoteStats
struct UDunDefHeroManager_RemoveRemoteStats_Params
{
};

// Function UDKGame.DunDefHeroManager.HasStats
struct UDunDefHeroManager_HasStats_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPlayerStatsIndex
struct UDunDefHeroManager_GetPlayerStatsIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.FindStatsByName
struct UDunDefHeroManager_FindStatsByName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStats
struct UDunDefHeroManager_GetStats_Params
{
};

// Function UDKGame.DunDefHeroManager.AddStats
struct UDunDefHeroManager_AddStats_Params
{
};

// Function UDKGame.DunDefHeroManager.ZeroOutAchievements
struct UDunDefHeroManager_ZeroOutAchievements_Params
{
};

// Function UDKGame.DunDefHeroManager.RemoveNullEntries
struct UDunDefHeroManager_RemoveNullEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.HasNullEntries
struct UDunDefHeroManager_HasNullEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.MarkAsUnloaded
struct UDunDefHeroManager_MarkAsUnloaded_Params
{
};

// Function UDKGame.DunDefHeroManager.MarkAsLoaded
struct UDunDefHeroManager_MarkAsLoaded_Params
{
};

// Function UDKGame.DunDefHeroManager.HasBeenLoaded
struct UDunDefHeroManager_HasBeenLoaded_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPlayerFromUserID
struct UDunDefHeroManager_GetPlayerFromUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPlayerUserIDOfPlayer
struct UDunDefHeroManager_GetPlayerUserIDOfPlayer_Params
{
};

// Function UDKGame.DunDefHeroManager.GetUserIDOfPlayer
struct UDunDefHeroManager_GetUserIDOfPlayer_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPlayerIndex
struct UDunDefHeroManager_GetPlayerIndex_Params
{
};

// Function UDKGame.DunDefHeroManager.GetPlayerUserID
struct UDunDefHeroManager_GetPlayerUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.GetUserID
struct UDunDefHeroManager_GetUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.RemovePlayersWithoutHeroes
struct UDunDefHeroManager_RemovePlayersWithoutHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.UnregisterUserID
struct UDunDefHeroManager_UnregisterUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateRegisteredUsers
struct UDunDefHeroManager_UpdateRegisteredUsers_Params
{
};

// Function UDKGame.DunDefHeroManager.PromoteUser
struct UDunDefHeroManager_PromoteUser_Params
{
};

// Function UDKGame.DunDefHeroManager.RegisterUserID
struct UDunDefHeroManager_RegisterUserID_Params
{
};

// Function UDKGame.DunDefHeroManager.FindRemoteIDByName
struct UDunDefHeroManager_FindRemoteIDByName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetUniqueRemoteID
struct UDunDefHeroManager_GetUniqueRemoteID_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNumAvailableHeroes
struct UDunDefHeroManager_GetNumAvailableHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.GetNumLoadedHeroes
struct UDunDefHeroManager_GetNumLoadedHeroes_Params
{
};

// Function UDKGame.DunDefHeroManager.IsUnderLoadedHeroesCap
struct UDunDefHeroManager_IsUnderLoadedHeroesCap_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDefaultHero
struct UDunDefHeroManager_GetDefaultHero_Params
{
};

// Function UDKGame.DunDefHeroManager.GetSortedItemBoxDataEntries
struct UDunDefHeroManager_GetSortedItemBoxDataEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.GetDataListEntries
struct UDunDefHeroManager_GetDataListEntries_Params
{
};

// Function UDKGame.DunDefHeroManager.ItemChangedFolder
struct UDunDefHeroManager_ItemChangedFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateItemsFolder
struct UDunDefHeroManager_UpdateItemsFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFolderName
struct UDunDefHeroManager_GetFolderName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFolderPath
struct UDunDefHeroManager_GetFolderPath_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateFolderName
struct UDunDefHeroManager_UpdateFolderName_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateFolderParent
struct UDunDefHeroManager_UpdateFolderParent_Params
{
};

// Function UDKGame.DunDefHeroManager.GetParentFolder
struct UDunDefHeroManager_GetParentFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.DeleteFolder
struct UDunDefHeroManager_DeleteFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateFolder
struct UDunDefHeroManager_CreateFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.ValidFolder
struct UDunDefHeroManager_ValidFolder_Params
{
};

// Function UDKGame.DunDefHeroManager.RefreshItems
struct UDunDefHeroManager_RefreshItems_Params
{
};

// Function UDKGame.DunDefHeroManager.FolderSpan
struct UDunDefHeroManager_FolderSpan_Params
{
};

// Function UDKGame.DunDefHeroManager.FolderSpan_Helper
struct UDunDefHeroManager_FolderSpan_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.FolderDepth
struct UDunDefHeroManager_FolderDepth_Params
{
};

// Function UDKGame.DunDefHeroManager.FolderDepth_Helper
struct UDunDefHeroManager_FolderDepth_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.SubFolderCount
struct UDunDefHeroManager_SubFolderCount_Params
{
};

// Function UDKGame.DunDefHeroManager.SubFolderCount_Helper
struct UDunDefHeroManager_SubFolderCount_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.CreateFolder_Helper
struct UDunDefHeroManager_CreateFolder_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFolderName_Helper
struct UDunDefHeroManager_GetFolderName_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.GetFolderPath_Helper
struct UDunDefHeroManager_GetFolderPath_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateFolderName_Helper
struct UDunDefHeroManager_UpdateFolderName_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.UpdateFolderParent_Helper
struct UDunDefHeroManager_UpdateFolderParent_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.IsChildFolderOf
struct UDunDefHeroManager_IsChildFolderOf_Params
{
};

// Function UDKGame.DunDefHeroManager.GetParentFolder_Helper
struct UDunDefHeroManager_GetParentFolder_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.DeleteFolder_Helper
struct UDunDefHeroManager_DeleteFolder_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.DeleteFolderWhoseParent_Helper
struct UDunDefHeroManager_DeleteFolderWhoseParent_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.ValidFolder_Helper
struct UDunDefHeroManager_ValidFolder_Helper_Params
{
};

// Function UDKGame.DunDefHeroManager.SyncAllEquipmentToDefendersStore
struct UDunDefHeroManager_SyncAllEquipmentToDefendersStore_Params
{
};

// Function UDKGame.DunDefHeroManager.GenerateAllEquipmentURLs
struct UDunDefHeroManager_GenerateAllEquipmentURLs_Params
{
};

// Function UDKGame.DunDefHeroManager.GetStatName
struct UDunDefHeroManager_GetStatName_Params
{
};

// Function UDKGame.DunDefHeroManager.GetHeroManager
struct UDunDefHeroManager_GetHeroManager_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.GetNativeGamespyVersion
struct UDunDefDataStore_GameSearch_GetNativeGamespyVersion_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.Registered
struct UDunDefDataStore_GameSearch_Registered_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.SubmitGameSearch
struct UDunDefDataStore_GameSearch_SubmitGameSearch_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.SetupGamespyFilter
struct UDunDefDataStore_GameSearch_SetupGamespyFilter_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.AppendSizeCheck
struct UDunDefDataStore_GameSearch_AppendSizeCheck_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.SetupXboxFilter
struct UDunDefDataStore_GameSearch_SetupXboxFilter_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.SetupSteamworksPreFilter
struct UDunDefDataStore_GameSearch_SetupSteamworksPreFilter_Params
{
};

// Function UDKGame.DunDefDataStore_GameSearch.SetupFilter
struct UDunDefDataStore_GameSearch_SetupFilter_Params
{
};

// Function UDKGame.DunDefDataStore_OnlineStats.GetTopEntryValue
struct UDunDefDataStore_OnlineStats_GetTopEntryValue_Params
{
};

// Function UDKGame.DunDefDataStore_OnlineStats.GetStatIndexForClass
struct UDunDefDataStore_OnlineStats_GetStatIndexForClass_Params
{
};

// Function UDKGame.DunDefDataStore_OnlineStats.SetStatsReadString
struct UDunDefDataStore_OnlineStats_SetStatsReadString_Params
{
};

// Function UDKGame.DunDefDataStore_OnlineStats.RefreshStats
struct UDunDefDataStore_OnlineStats_RefreshStats_Params
{
};

// Function UDKGame.DunDefDataStore_OnlineStats.SetStatsReadInfo
struct UDunDefDataStore_OnlineStats_SetStatsReadInfo_Params
{
};

// Function UDKGame.DunDefGameSearch_Xbox.RemoveProperty
struct UDunDefGameSearch_Xbox_RemoveProperty_Params
{
};

// Function UDKGame.DunDefGameSearch_Xbox.AddProperties
struct UDunDefGameSearch_Xbox_AddProperties_Params
{
};

// Function UDKGame.DunDefGameSearchQuick_Xbox.AddProperties
struct UDunDefGameSearchQuick_Xbox_AddProperties_Params
{
};

// Function UDKGame.DunDefGameSearchQuick_Xbox.GetHeroLevel
struct UDunDefGameSearchQuick_Xbox_GetHeroLevel_Params
{
};

// Function UDKGame.DunDefGameSearchQuick_Xbox.SortSearchResults
struct UDunDefGameSearchQuick_Xbox_SortSearchResults_Params
{
};

// Function UDKGame.DunDefGameSearchQuick.GetHeroLevel
struct UDunDefGameSearchQuick_GetHeroLevel_Params
{
};

// Function UDKGame.DunDefGameSearchQuick.SortSearchResults
struct UDunDefGameSearchQuick_SortSearchResults_Params
{
};

// Function UDKGame.DunDefInputNative.PlayerInput
struct UDunDefInputNative_PlayerInput_Params
{
};

// Function UDKGame.DunDefInputNative.NativePlayerInput
struct UDunDefInputNative_NativePlayerInput_Params
{
};

// Function UDKGame.DunDefInputNative.NativeAdjustMouseSensitivity
struct UDunDefInputNative_NativeAdjustMouseSensitivity_Params
{
};

// Function UDKGame.DunDefInputNative.NativeSmoothMouse
struct UDunDefInputNative_NativeSmoothMouse_Params
{
};

// Function UDKGame.DunDefInputNative.NativeClearSmoothing
struct UDunDefInputNative_NativeClearSmoothing_Params
{
};

// Function UDKGame.DunDefInputNative.IsRotatingCamera
struct UDunDefInputNative_IsRotatingCamera_Params
{
};

// Function UDKGame.DunDefNativeUIScene.StopDunDefUIAnim
struct UDunDefNativeUIScene_StopDunDefUIAnim_Params
{
};

// Function UDKGame.DunDefNativeUIScene.PlayDunDefUIAnim
struct UDunDefNativeUIScene_PlayDunDefUIAnim_Params
{
};

// Function UDKGame.DunDefNativeUIScene.PlayUIAnimationSound
struct UDunDefNativeUIScene_PlayUIAnimationSound_Params
{
};

// Function UDKGame.DunDefNativeUIScene.CallNativeProcessKey
struct UDunDefNativeUIScene_CallNativeProcessKey_Params
{
};

// Function UDKGame.DunDefNativeUIScene.GetAlphaNumeric
struct UDunDefNativeUIScene_GetAlphaNumeric_Params
{
};

// Function UDKGame.DunDefNativeUIScene.FormatTime
struct UDunDefNativeUIScene_FormatTime_Params
{
};

// Function UDKGame.DunDefNativeUIScene.FormatNumber
struct UDunDefNativeUIScene_FormatNumber_Params
{
};

// Function UDKGame.DunDefNativeUIScene.RequestViewportUpdate
struct UDunDefNativeUIScene_RequestViewportUpdate_Params
{
};

// Function UDKGame.DunDefNativeUIScene.OnPostEditChange
struct UDunDefNativeUIScene_OnPostEditChange_Params
{
};

// Function UDKGame.DunDefNativeUIScene.IsKeyboardOwned
struct UDunDefNativeUIScene_IsKeyboardOwned_Params
{
};

// Function UDKGame.DunDefNativeUIScene.SceneActivated
struct UDunDefNativeUIScene_SceneActivated_Params
{
};

// Function UDKGame.DunDefNativeUIScene.InitStateExecution
struct UDunDefNativeUIScene_InitStateExecution_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.GetAvailableResolutions
struct UDunDefNativeViewportClient_GetAvailableResolutions_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.HasAnyGlobalInputLockingScene
struct UDunDefNativeViewportClient_HasAnyGlobalInputLockingScene_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.HasAnyInputLockingSceneOpen
struct UDunDefNativeViewportClient_HasAnyInputLockingSceneOpen_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetNumericalProperty
struct UDunDefNativeViewportClient_SetNumericalProperty_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.IsPC
struct UDunDefNativeViewportClient_IsPC_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetDemoMode
struct UDunDefNativeViewportClient_SetDemoMode_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.IsDemoMode
struct UDunDefNativeViewportClient_IsDemoMode_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CheckShouldSkipFloatingText
struct UDunDefNativeViewportClient_CheckShouldSkipFloatingText_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CheckInLocalPlayersInfluence
struct UDunDefNativeViewportClient_CheckInLocalPlayersInfluence_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CheckInLocalPlayersRanges
struct UDunDefNativeViewportClient_CheckInLocalPlayersRanges_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CheckInLocalPlayersFrustums
struct UDunDefNativeViewportClient_CheckInLocalPlayersFrustums_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CheckStaticMeshForBadCollisions
struct UDunDefNativeViewportClient_CheckStaticMeshForBadCollisions_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.GetNumMaterialsForStaticMesh
struct UDunDefNativeViewportClient_GetNumMaterialsForStaticMesh_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.IsStaticMeshComponentTranslucent
struct UDunDefNativeViewportClient_IsStaticMeshComponentTranslucent_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.GetVertexDensityForComponent
struct UDunDefNativeViewportClient_GetVertexDensityForComponent_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.GetNumParticlesForComponent
struct UDunDefNativeViewportClient_GetNumParticlesForComponent_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CreateHUDScene
struct UDunDefNativeViewportClient_CreateHUDScene_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.PrintFloat
struct UDunDefNativeViewportClient_PrintFloat_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.TruncateNumber
struct UDunDefNativeViewportClient_TruncateNumber_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CompareTransformedString
struct UDunDefNativeViewportClient_CompareTransformedString_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.FilteredConsoleCommands
struct UDunDefNativeViewportClient_FilteredConsoleCommands_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.CountDynamicActorsWithArchetype
struct UDunDefNativeViewportClient_CountDynamicActorsWithArchetype_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.StopMovie
struct UDunDefNativeViewportClient_StopMovie_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.IsMoviePlaying
struct UDunDefNativeViewportClient_IsMoviePlaying_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.PlayMovie
struct UDunDefNativeViewportClient_PlayMovie_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.ShowPathTargets
struct UDunDefNativeViewportClient_ShowPathTargets_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetUsedPathWeight
struct UDunDefNativeViewportClient_SetUsedPathWeight_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetParticleLODBias
struct UDunDefNativeViewportClient_SetParticleLODBias_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.ShowDynamicLights
struct UDunDefNativeViewportClient_ShowDynamicLights_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.ShowDynamicShadows
struct UDunDefNativeViewportClient_ShowDynamicShadows_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetKeyboardInputID
struct UDunDefNativeViewportClient_SetKeyboardInputID_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.SetJoystickOffset
struct UDunDefNativeViewportClient_SetJoystickOffset_Params
{
};

// Function UDKGame.DunDefNativeViewportClient.GetJoystickOffset
struct UDunDefNativeViewportClient_GetJoystickOffset_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.SetupDemoAndVersion
struct UDunDefOnlineGameSettingsConsole_SetupDemoAndVersion_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.CreateUniqueSessionID
struct UDunDefOnlineGameSettingsConsole_CreateUniqueSessionID_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.MatchesGameFilter
struct UDunDefOnlineGameSettingsConsole_MatchesGameFilter_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.Customize
struct UDunDefOnlineGameSettingsConsole_Customize_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.IsValidLevel
struct UDunDefOnlineGameSettingsConsole_IsValidLevel_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.UpdateGameSpyCustomKeys
struct UDunDefOnlineGameSettingsConsole_UpdateGameSpyCustomKeys_Params
{
};

// Function UDKGame.DunDefOnlineGameSettingsConsole.IsSpecialMission
struct UDunDefOnlineGameSettingsConsole_IsSpecialMission_Params
{
};

// Function UDKGame.DunDefPlayerAbilityNative.AbilityTick
struct ADunDefPlayerAbilityNative_AbilityTick_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.CheckForCollisionTowerPlacement
struct ADunDefPlayerCameraNative_CheckForCollisionTowerPlacement_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.CheckForCollision
struct ADunDefPlayerCameraNative_CheckForCollision_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.CameraDot
struct ADunDefPlayerCameraNative_CameraDot_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.NativeUpdateViewTargetChase
struct ADunDefPlayerCameraNative_NativeUpdateViewTargetChase_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.NativeUpdateViewTargetBase
struct ADunDefPlayerCameraNative_NativeUpdateViewTargetBase_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.CalculateSpinOffset
struct ADunDefPlayerCameraNative_CalculateSpinOffset_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.SpinCamera
struct ADunDefPlayerCameraNative_SpinCamera_Params
{
};

// Function UDKGame.DunDefPlayerCameraNative.IsInShoulderMode
struct ADunDefPlayerCameraNative_IsInShoulderMode_Params
{
};

// Function UDKGame.HUDWidgetScene.NotifyLocalPlayerRemoved
struct UHUDWidgetScene_NotifyLocalPlayerRemoved_Params
{
};

// Function UDKGame.HUDWidgetScene.UIPostRender
struct UHUDWidgetScene_UIPostRender_Params
{
};

// Function UDKGame.HUDWidgetScene.Update
struct UHUDWidgetScene_Update_Params
{
};

// Function UDKGame.HUDWidgetScene.DrawPrefab
struct UHUDWidgetScene_DrawPrefab_Params
{
};

// Function UDKGame.HUDWidgetScene.SceneDeactivated
struct UHUDWidgetScene_SceneDeactivated_Params
{
};

// Function UDKGame.HUDWidgetScene.SceneActivated
struct UHUDWidgetScene_SceneActivated_Params
{
};

// Function UDKGame.NativeDunDefDamageableTarget.ActorHudProjection
struct ANativeDunDefDamageableTarget_ActorHudProjection_Params
{
};

// Function UDKGame.NativeDunDefDamageableTarget.SortActorsByDistance
struct ANativeDunDefDamageableTarget_SortActorsByDistance_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.ScriptGetTargetingDesire
struct ANativeDunDefEnemyController_ScriptGetTargetingDesire_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.GetTargetingDesire
struct ANativeDunDefEnemyController_GetTargetingDesire_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.FindTarget
struct ANativeDunDefEnemyController_FindTarget_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.NativeFindTarget
struct ANativeDunDefEnemyController_NativeFindTarget_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.GetTargetingMultiplier
struct ANativeDunDefEnemyController_GetTargetingMultiplier_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.GetAggroDesirability
struct ANativeDunDefEnemyController_GetAggroDesirability_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.IsWithinTargetingPreventionVolume
struct ANativeDunDefEnemyController_IsWithinTargetingPreventionVolume_Params
{
};

// Function UDKGame.NativeDunDefEnemyController.SetTarget
struct ANativeDunDefEnemyController_SetTarget_Params
{
};

// Function UDKGame.NativeDunDefGameReplicationInfo.DrawMyHUD
struct ANativeDunDefGameReplicationInfo_DrawMyHUD_Params
{
};

// Function UDKGame.NativeDunDefGameReplicationInfo.DrawFloatingNumbers
struct ANativeDunDefGameReplicationInfo_DrawFloatingNumbers_Params
{
};

// Function UDKGame.NativeDunDefGameReplicationInfo.UpdateFloatingDamageEntries
struct ANativeDunDefGameReplicationInfo_UpdateFloatingDamageEntries_Params
{
};

// Function UDKGame.NativeDunDefPlayerReplicationInfo.UpdatePlayerTalking
struct ANativeDunDefPlayerReplicationInfo_UpdatePlayerTalking_Params
{
};

// Function UDKGame.NativeMain.IsCurrentMapMod
struct ANativeMain_IsCurrentMapMod_Params
{
};

// Function UDKGame.NativeMain.HasPendingInvite
struct ANativeMain_HasPendingInvite_Params
{
};

// Function UDKGame.NativeMain.GetNumPrimaryDunDefPlayers
struct ANativeMain_GetNumPrimaryDunDefPlayers_Params
{
};

// Function UDKGame.NativeMain.GetNumNonLocalDunDefPlayers
struct ANativeMain_GetNumNonLocalDunDefPlayers_Params
{
};

// Function UDKGame.NativeMain.IsMacOS
struct ANativeMain_IsMacOS_Params
{
};

// Function UDKGame.NativeMain.GetNumDunDefPlayers
struct ANativeMain_GetNumDunDefPlayers_Params
{
};

// Function UDKGame.ProfanityFilter.Dirty
struct UProfanityFilter_Dirty_Params
{
};

// Function UDKGame.ProfanityFilter.Init
struct UProfanityFilter_Init_Params
{
};

// Function UDKGame.SaveHelper.AZURE_LoadfileFailure
struct USaveHelper_AZURE_LoadfileFailure_Params
{
};

// Function UDKGame.SaveHelper.AZURE_KeepAliveFailure
struct USaveHelper_AZURE_KeepAliveFailure_Params
{
};

// Function UDKGame.SaveHelper.AZURE_LoginDuplicateError
struct USaveHelper_AZURE_LoginDuplicateError_Params
{
};

// Function UDKGame.SaveHelper.AZURE_BannedError
struct USaveHelper_AZURE_BannedError_Params
{
};

// Function UDKGame.SaveHelper.AZURE_LoginSuccessful
struct USaveHelper_AZURE_LoginSuccessful_Params
{
};

// Function UDKGame.SaveHelper.AZURE_DataLoaded
struct USaveHelper_AZURE_DataLoaded_Params
{
};

// Function UDKGame.SaveHelper.AZURE_SeriousError
struct USaveHelper_AZURE_SeriousError_Params
{
};

// Function UDKGame.SaveHelper.AZURE_UnEndedItemPurchaseSuccess
struct USaveHelper_AZURE_UnEndedItemPurchaseSuccess_Params
{
};

// Function UDKGame.SaveHelper.AZURE_ItemPurchaseFailure
struct USaveHelper_AZURE_ItemPurchaseFailure_Params
{
};

// Function UDKGame.SaveHelper.AZURE_ItemPurchaseSuccess
struct USaveHelper_AZURE_ItemPurchaseSuccess_Params
{
};

// Function UDKGame.SaveHelper.GetSteamID
struct USaveHelper_GetSteamID_Params
{
};

// Function UDKGame.SaveHelper.TriggerHttpEvent
struct USaveHelper_TriggerHttpEvent_Params
{
};

// Function UDKGame.SaveHelper.GenerateCompressedValidURL
struct USaveHelper_GenerateCompressedValidURL_Params
{
};

// Function UDKGame.SaveHelper.IsAppPurchased
struct USaveHelper_IsAppPurchased_Params
{
};

// Function UDKGame.SaveHelper.GetUnEndedPurchasedItem
struct USaveHelper_GetUnEndedPurchasedItem_Params
{
};

// Function UDKGame.SaveHelper.EndItemPurchaseFromStore
struct USaveHelper_EndItemPurchaseFromStore_Params
{
};

// Function UDKGame.SaveHelper.BuyItemFromStore
struct USaveHelper_BuyItemFromStore_Params
{
};

// Function UDKGame.SaveHelper.EndRemoteConnection
struct USaveHelper_EndRemoteConnection_Params
{
};

// Function UDKGame.SaveHelper.AcquireRemoteConnection
struct USaveHelper_AcquireRemoteConnection_Params
{
};

// Function UDKGame.SaveHelper.ProcessMobileConversion
struct USaveHelper_ProcessMobileConversion_Params
{
};

// Function UDKGame.SaveHelper.HasMobileConversion
struct USaveHelper_HasMobileConversion_Params
{
};

// Function UDKGame.SaveHelper.LoadStorageFile
struct USaveHelper_LoadStorageFile_Params
{
};

// Function UDKGame.SaveHelper.SaveStorageFile
struct USaveHelper_SaveStorageFile_Params
{
};

// Function UDKGame.SaveHelper.SavingStorageTimerEnd
struct USaveHelper_SavingStorageTimerEnd_Params
{
};

// Function UDKGame.SaveHelper.SavingStorageTimerBegin
struct USaveHelper_SavingStorageTimerBegin_Params
{
};

// Function UDKGame.SaveHelper.DoWork
struct USaveHelper_DoWork_Params
{
};

// Function UDKGame.SaveHelper.Update
struct USaveHelper_Update_Params
{
};

// Function UDKGame.SaveHelper.OpenWebPage
struct USaveHelper_OpenWebPage_Params
{
};

// Function UDKGame.SaveHelper.ShowLoginUI
struct USaveHelper_ShowLoginUI_Params
{
};

// Function UDKGame.SaveHelper.GetUserIDs
struct USaveHelper_GetUserIDs_Params
{
};

// Function UDKGame.SaveHelper.ShowUserList
struct USaveHelper_ShowUserList_Params
{
};

// Function UDKGame.SaveHelper.IsSignedIn
struct USaveHelper_IsSignedIn_Params
{
};

// Function UDKGame.SaveHelper.GetGuestSponsor
struct USaveHelper_GetGuestSponsor_Params
{
};

// Function UDKGame.SaveHelper.IsUserGuest
struct USaveHelper_IsUserGuest_Params
{
};

// Function UDKGame.SaveHelper.ClearDeviceCacheForUser
struct USaveHelper_ClearDeviceCacheForUser_Params
{
};

// Function UDKGame.SaveHelper.SetupDeviceSelectorDelay
struct USaveHelper_SetupDeviceSelectorDelay_Params
{
};

// Function UDKGame.SaveHelper.ClearDeviceSelectionDelegates
struct USaveHelper_ClearDeviceSelectionDelegates_Params
{
};

// Function UDKGame.SaveHelper.SetupDeviceSelectionDelegates
struct USaveHelper_SetupDeviceSelectionDelegates_Params
{
};

// Function UDKGame.SaveHelper.OnSubscribedMapUpdate
struct USaveHelper_OnSubscribedMapUpdate_Params
{
};

// Function UDKGame.SaveHelper.NotifyStorageDeviceChanged
struct USaveHelper_NotifyStorageDeviceChanged_Params
{
};

// Function UDKGame.SaveHelper.deviceReadProfileSettingsComplete
struct USaveHelper_deviceReadProfileSettingsComplete_Params
{
};

// Function UDKGame.SaveHelper.deviceSelectedFour
struct USaveHelper_deviceSelectedFour_Params
{
};

// Function UDKGame.SaveHelper.deviceSelectedThree
struct USaveHelper_deviceSelectedThree_Params
{
};

// Function UDKGame.SaveHelper.deviceSelectedTwo
struct USaveHelper_deviceSelectedTwo_Params
{
};

// Function UDKGame.SaveHelper.deviceSelectedOne
struct USaveHelper_deviceSelectedOne_Params
{
};

// Function UDKGame.SaveHelper.ShowDeviceSelectorUI
struct USaveHelper_ShowDeviceSelectorUI_Params
{
};

// Function UDKGame.SaveHelper.PromptClosed
struct USaveHelper_PromptClosed_Params
{
};

// Function UDKGame.SaveHelper.WantsDeviceSelector
struct USaveHelper_WantsDeviceSelector_Params
{
};

// Function UDKGame.SaveHelper.DeviceSelectorPromptClosed
struct USaveHelper_DeviceSelectorPromptClosed_Params
{
};

// Function UDKGame.SaveHelper.ShowSaveError
struct USaveHelper_ShowSaveError_Params
{
};

// Function UDKGame.SaveHelper.deviceSelected
struct USaveHelper_deviceSelected_Params
{
};

// Function UDKGame.SaveHelper.HasSave
struct USaveHelper_HasSave_Params
{
};

// Function UDKGame.SaveHelper.IsSaving
struct USaveHelper_IsSaving_Params
{
};

// Function UDKGame.SaveHelper.ReEnumerateContent
struct USaveHelper_ReEnumerateContent_Params
{
};

// Function UDKGame.SaveHelper.UsedFoundStorageDevice
struct USaveHelper_UsedFoundStorageDevice_Params
{
};

// Function UDKGame.SaveHelper.BootBackToMenu
struct USaveHelper_BootBackToMenu_Params
{
};

// Function UDKGame.SaveHelper.OnLoginChangeDelegate
struct USaveHelper_OnLoginChangeDelegate_Params
{
};

// Function UDKGame.SaveHelper.LoadToMainMenu
struct USaveHelper_LoadToMainMenu_Params
{
};

// Function UDKGame.SaveHelper.UsedStorageDeviceDisconnected
struct USaveHelper_UsedStorageDeviceDisconnected_Params
{
};

// Function UDKGame.SaveHelper.DeviceRemovedResponse
struct USaveHelper_DeviceRemovedResponse_Params
{
};

// Function UDKGame.SaveHelper.OnLoginChange
struct USaveHelper_OnLoginChange_Params
{
};

// Function UDKGame.SaveHelper.RegisterUserID
struct USaveHelper_RegisterUserID_Params
{
};

// Function UDKGame.StatSystem.GetAward
struct UStatSystem_GetAward_Params
{
};

// Function UDKGame.StatSystem.GetCumulativeStats
struct UStatSystem_GetCumulativeStats_Params
{
};

// Function UDKGame.StatSystem.HasStats
struct UStatSystem_HasStats_Params
{
};

// Function UDKGame.StatSystem.CreateFromArray
struct UStatSystem_CreateFromArray_Params
{
};

// Function UDKGame.StatSystem.CreateProxyBuffer
struct UStatSystem_CreateProxyBuffer_Params
{
};

// Function UDKGame.StatSystem.SerializeIntoArray
struct UStatSystem_SerializeIntoArray_Params
{
};

// Function UDKGame.StatSystem.GetStoredStats
struct UStatSystem_GetStoredStats_Params
{
};

// Function UDKGame.StatSystem.GetEventStats
struct UStatSystem_GetEventStats_Params
{
};

// Function UDKGame.StatSystem.ClearStoredStats
struct UStatSystem_ClearStoredStats_Params
{
};

// Function UDKGame.StatSystem.PurgeTotalBuffers
struct UStatSystem_PurgeTotalBuffers_Params
{
};

// Function UDKGame.StatSystem.QueryAccumulatedStatForCurrentBuffer
struct UStatSystem_QueryAccumulatedStatForCurrentBuffer_Params
{
};

// Function UDKGame.StatSystem.QueryAccumulatedStat
struct UStatSystem_QueryAccumulatedStat_Params
{
};

// Function UDKGame.StatSystem.ConglomerateEventAlongTimeline
struct UStatSystem_ConglomerateEventAlongTimeline_Params
{
};

// Function UDKGame.StatSystem.GetFirstStatWriter
struct UStatSystem_GetFirstStatWriter_Params
{
};

// Function UDKGame.StatSystem.GetLastStatWriter
struct UStatSystem_GetLastStatWriter_Params
{
};

// Function UDKGame.StatSystem.CheckTimeBasedAward
struct UStatSystem_CheckTimeBasedAward_Params
{
};

// Function UDKGame.StatSystem.ReportGameStat
struct UStatSystem_ReportGameStat_Params
{
};

// Function UDKGame.StatSystem.ReportStat
struct UStatSystem_ReportStat_Params
{
};

// Function UDKGame.StatSystem.IsStatRecording
struct UStatSystem_IsStatRecording_Params
{
};

// Function UDKGame.StatSystem.StopStatRecording
struct UStatSystem_StopStatRecording_Params
{
};

// Function UDKGame.StatSystem.StartStatRecording
struct UStatSystem_StartStatRecording_Params
{
};

// Function UDKGame.StatSystem.GetStatPlayerName
struct UStatSystem_GetStatPlayerName_Params
{
};

// Function UDKGame.StatSystem.StatPlayerAdded
struct UStatSystem_StatPlayerAdded_Params
{
};

// Function UDKGame.StatSystem.HasBestOfValue
struct UStatSystem_HasBestOfValue_Params
{
};

// Function UDKGame.StatSystem.GetBestOfEntry
struct UStatSystem_GetBestOfEntry_Params
{
};

// Function UDKGame.StatSystem.GetBestOfMetadata
struct UStatSystem_GetBestOfMetadata_Params
{
};

// Function UDKGame.StatSystem.SetBestOfMetadata
struct UStatSystem_SetBestOfMetadata_Params
{
};

// Function UDKGame.StatSystem.GetPlayerMetadata
struct UStatSystem_GetPlayerMetadata_Params
{
};

// Function UDKGame.StatSystem.SetPlayerMetadata
struct UStatSystem_SetPlayerMetadata_Params
{
};

// Function UDKGame.StatSystem.AddStatPlayer
struct UStatSystem_AddStatPlayer_Params
{
};

// Function UDKGame.UDKGamePawn.GetInterpolatedRotation
struct AUDKGamePawn_GetInterpolatedRotation_Params
{
};

// Function UDKGame.UDKGamePawn.GetInterpolatedLocation
struct AUDKGamePawn_GetInterpolatedLocation_Params
{
};

// Function UDKGame.UDKGamePawn.IsolatedCalculateVelocity
struct AUDKGamePawn_IsolatedCalculateVelocity_Params
{
};

// Function UDKGame.UDKGamePawn.IsPlayingCustomAnim
struct AUDKGamePawn_IsPlayingCustomAnim_Params
{
};

// Function UDKGame.UDKGamePawn.UpdateLookAtAngles
struct AUDKGamePawn_UpdateLookAtAngles_Params
{
};

// Function UDKGame.UDKGamePawn.DrawFloatingName
struct AUDKGamePawn_DrawFloatingName_Params
{
};

// Function UDKGame.UDKGamePawn.GetAutoAimWeight
struct AUDKGamePawn_GetAutoAimWeight_Params
{
};

// Function UDKGame.UDKGamePawn.UpdateTurnBlender
struct AUDKGamePawn_UpdateTurnBlender_Params
{
};

// Function UDKGame.UDKGamePawn.UpdateTransformInterpolation
struct AUDKGamePawn_UpdateTransformInterpolation_Params
{
};

// Function UDKGame.UDKGamePawn.GetSeededFRand
struct AUDKGamePawn_GetSeededFRand_Params
{
};

// Function UDKGame.UIResolutionContainer.UpdateUIScalePercent
struct UUIResolutionContainer_UpdateUIScalePercent_Params
{
};

// Function UDKGame.UIScriptWidget.EndUIDrawing
struct UUIScriptWidget_EndUIDrawing_Params
{
};

// Function UDKGame.UIScriptWidget.GetBackgroundDrawColor
struct UUIScriptWidget_GetBackgroundDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget.UIDraw
struct UUIScriptWidget_UIDraw_Params
{
};

// Function UDKGame.UIScriptWidget.BeginUIDrawing
struct UUIScriptWidget_BeginUIDrawing_Params
{
};

// Function UDKGame.UIScriptWidget.RenderGame
struct UUIScriptWidget_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget.RenderEditor
struct UUIScriptWidget_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.EndUIDrawing
struct UUIScriptWidget_Button_EndUIDrawing_Params
{
};

// Function UDKGame.UIScriptWidget_Button.UIDrawRotated
struct UUIScriptWidget_Button_UIDrawRotated_Params
{
};

// Function UDKGame.UIScriptWidget_Button.UIDraw
struct UUIScriptWidget_Button_UIDraw_Params
{
};

// Function UDKGame.UIScriptWidget_Button.BeginUIDrawing
struct UUIScriptWidget_Button_BeginUIDrawing_Params
{
};

// Function UDKGame.UIScriptWidget_Button.ButtonClicked
struct UUIScriptWidget_Button_ButtonClicked_Params
{
};

// Function UDKGame.UIScriptWidget_Button.NotifyWidgetClicked
struct UUIScriptWidget_Button_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetToolTipString
struct UUIScriptWidget_Button_GetToolTipString_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetToolTipBGColor
struct UUIScriptWidget_Button_GetToolTipBGColor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetToolTipTextColor
struct UUIScriptWidget_Button_GetToolTipTextColor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.DrawToolTip
struct UUIScriptWidget_Button_DrawToolTip_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetToolTipBG
struct UUIScriptWidget_Button_GetToolTipBG_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetToolTipTextBlocks
struct UUIScriptWidget_Button_GetToolTipTextBlocks_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetBackgroundImage
struct UUIScriptWidget_Button_GetBackgroundImage_Params
{
};

// Function UDKGame.UIScriptWidget_Button.RenderGame
struct UUIScriptWidget_Button_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_Button.SupportsDraggedOntoItem
struct UUIScriptWidget_Button_SupportsDraggedOntoItem_Params
{
};

// Function UDKGame.UIScriptWidget_Button.ApplyRenderOffsets
struct UUIScriptWidget_Button_ApplyRenderOffsets_Params
{
};

// Function UDKGame.UIScriptWidget_Button.IsClickable
struct UUIScriptWidget_Button_IsClickable_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetIsPressed
struct UUIScriptWidget_Button_GetIsPressed_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetScaleMultiplier
struct UUIScriptWidget_Button_GetScaleMultiplier_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetFocused
struct UUIScriptWidget_Button_GetFocused_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetTextDrawColor
struct UUIScriptWidget_Button_GetTextDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetFocusedBGColor
struct UUIScriptWidget_Button_GetFocusedBGColor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetBackgroundDrawColor
struct UUIScriptWidget_Button_GetBackgroundDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_Button.GetCurrentMatrixScale
struct UUIScriptWidget_Button_GetCurrentMatrixScale_Params
{
};

// Function UDKGame.UIScriptWidget_Button.ApplyCurrentScreenMatrix
struct UUIScriptWidget_Button_ApplyCurrentScreenMatrix_Params
{
};

// Function UDKGame.UIScriptWidget_Button.RenderEditor
struct UUIScriptWidget_Button_RenderEditor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetStatModifier
struct ADunDefDamageableTarget_GetStatModifier_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetActorLevelUpStatModifier
struct ADunDefDamageableTarget_GetActorLevelUpStatModifier_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SetActorLevelUpStatModifier
struct ADunDefDamageableTarget_SetActorLevelUpStatModifier_Params
{
};

// Function UDKGame.DunDefDamageableTarget.CalculateStatValue
struct ADunDefDamageableTarget_CalculateStatValue_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetBuffedStatValue
struct ADunDefDamageableTarget_GetBuffedStatValue_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SpawnDefaultBuffs
struct ADunDefDamageableTarget_SpawnDefaultBuffs_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetStatModifierObject
struct ADunDefDamageableTarget_GetStatModifierObject_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetStatValueByTag
struct ADunDefDamageableTarget_GetStatValueByTag_Params
{
};

// Function UDKGame.DunDefDamageableTarget.InitalizeActorStats
struct ADunDefDamageableTarget_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefDamageableTarget.HasStatusEffect
struct ADunDefDamageableTarget_HasStatusEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.RemoveStatusEffect
struct ADunDefDamageableTarget_RemoveStatusEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AddStatusEffect
struct ADunDefDamageableTarget_AddStatusEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AdjustDealtDamage
struct ADunDefDamageableTarget_AdjustDealtDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.OnBuffRemoved
struct ADunDefDamageableTarget_OnBuffRemoved_Params
{
};

// Function UDKGame.DunDefDamageableTarget.OnBuffAdded
struct ADunDefDamageableTarget_OnBuffAdded_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportBuffRemoved
struct ADunDefDamageableTarget_ReportBuffRemoved_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportBuffAdded
struct ADunDefDamageableTarget_ReportBuffAdded_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportActorDealtDamage
struct ADunDefDamageableTarget_ReportActorDealtDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportTookDamage
struct ADunDefDamageableTarget_ReportTookDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportHealedActor
struct ADunDefDamageableTarget_ReportHealedActor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReportKilledActor
struct ADunDefDamageableTarget_ReportKilledActor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetLightningTowerDamagePercent
struct ADunDefDamageableTarget_GetLightningTowerDamagePercent_Params
{
};

// Function UDKGame.DunDefDamageableTarget.setIsWebbed
struct ADunDefDamageableTarget_setIsWebbed_Params
{
};

// Function UDKGame.DunDefDamageableTarget.isWebbed
struct ADunDefDamageableTarget_isWebbed_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetChainIgnore
struct ADunDefDamageableTarget_GetChainIgnore_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SetChainIgnore
struct ADunDefDamageableTarget_SetChainIgnore_Params
{
};

// Function UDKGame.DunDefDamageableTarget.IsBeingChainedBy
struct ADunDefDamageableTarget_IsBeingChainedBy_Params
{
};

// Function UDKGame.DunDefDamageableTarget.RemoveFromChainingTowers
struct ADunDefDamageableTarget_RemoveFromChainingTowers_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AddToChainingTowers
struct ADunDefDamageableTarget_AddToChainingTowers_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AllowSuction
struct ADunDefDamageableTarget_AllowSuction_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetLocation
struct ADunDefDamageableTarget_GetLocation_Params
{
};

// Function UDKGame.DunDefDamageableTarget.PSCFinished
struct ADunDefDamageableTarget_PSCFinished_Params
{
};

// Function UDKGame.DunDefDamageableTarget.RemoveAllAuraEffects
struct ADunDefDamageableTarget_RemoveAllAuraEffects_Params
{
};

// Function UDKGame.DunDefDamageableTarget.HandleAuraEffects
struct ADunDefDamageableTarget_HandleAuraEffects_Params
{
};

// Function UDKGame.DunDefDamageableTarget.RemoveAuraEffect
struct ADunDefDamageableTarget_RemoveAuraEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AddAuraEffect
struct ADunDefDamageableTarget_AddAuraEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.IsFirstAuraOfType
struct ADunDefDamageableTarget_IsFirstAuraOfType_Params
{
};

// Function UDKGame.DunDefDamageableTarget.StopAuraEffects
struct ADunDefDamageableTarget_StopAuraEffects_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ClientTakeDamage
struct ADunDefDamageableTarget_ClientTakeDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.BaseChange
struct ADunDefDamageableTarget_BaseChange_Params
{
};

// Function UDKGame.DunDefDamageableTarget.CanDetonate
struct ADunDefDamageableTarget_CanDetonate_Params
{
};

// Function UDKGame.DunDefDamageableTarget.HealPctOfMaxHealth
struct ADunDefDamageableTarget_HealPctOfMaxHealth_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetHealth
struct ADunDefDamageableTarget_GetHealth_Params
{
};

// Function UDKGame.DunDefDamageableTarget.Detonate
struct ADunDefDamageableTarget_Detonate_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ForceMoveActor
struct ADunDefDamageableTarget_ForceMoveActor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetOverrideTargetComponent
struct ADunDefDamageableTarget_GetOverrideTargetComponent_Params
{
};

// Function UDKGame.DunDefDamageableTarget.LocalTookDamage
struct ADunDefDamageableTarget_LocalTookDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AllowDarknessIgnorance
struct ADunDefDamageableTarget_AllowDarknessIgnorance_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ShouldBlockPlayerAim
struct ADunDefDamageableTarget_ShouldBlockPlayerAim_Params
{
};

// Function UDKGame.DunDefDamageableTarget.NeedsRepair
struct ADunDefDamageableTarget_NeedsRepair_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetToolTipPriority
struct ADunDefDamageableTarget_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefDamageableTarget.TakesToolTipPriority
struct ADunDefDamageableTarget_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetMass
struct ADunDefDamageableTarget_GetMass_Params
{
};

// Function UDKGame.DunDefDamageableTarget.EncroachedBy
struct ADunDefDamageableTarget_EncroachedBy_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ClientSingleSetMovement
struct ADunDefDamageableTarget_ClientSingleSetMovement_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ClientDisableMovementReplication
struct ADunDefDamageableTarget_ClientDisableMovementReplication_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DisableMovementReplication
struct ADunDefDamageableTarget_DisableMovementReplication_Params
{
};

// Function UDKGame.DunDefDamageableTarget.EnableMovementReplicationTimer
struct ADunDefDamageableTarget_EnableMovementReplicationTimer_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SetMovementReplication
struct ADunDefDamageableTarget_SetMovementReplication_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetActivationOffset
struct ADunDefDamageableTarget_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetActivationWeighting
struct ADunDefDamageableTarget_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefDamageableTarget.Client_Activate
struct ADunDefDamageableTarget_Client_Activate_Params
{
};

// Function UDKGame.DunDefDamageableTarget.Server_Activate
struct ADunDefDamageableTarget_Server_Activate_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AllowActivation
struct ADunDefDamageableTarget_AllowActivation_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetToolTipText
struct ADunDefDamageableTarget_GetToolTipText_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DrawToolTip
struct ADunDefDamageableTarget_DrawToolTip_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ContinueDrawingToolTip
struct ADunDefDamageableTarget_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefDamageableTarget.NotifyTookDamage
struct ADunDefDamageableTarget_NotifyTookDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.PlayHitEffect
struct ADunDefDamageableTarget_PlayHitEffect_Params
{
};

// Function UDKGame.DunDefDamageableTarget.NotifyHealthChange
struct ADunDefDamageableTarget_NotifyHealthChange_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AddHealth
struct ADunDefDamageableTarget_AddHealth_Params
{
};

// Function UDKGame.DunDefDamageableTarget.HandleDamageTypeEffects
struct ADunDefDamageableTarget_HandleDamageTypeEffects_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ShowHealingFloatingNumbers
struct ADunDefDamageableTarget_ShowHealingFloatingNumbers_Params
{
};

// Function UDKGame.DunDefDamageableTarget.HealDamage
struct ADunDefDamageableTarget_HealDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SubtractHealth
struct ADunDefDamageableTarget_SubtractHealth_Params
{
};

// Function UDKGame.DunDefDamageableTarget.TakeDamage
struct ADunDefDamageableTarget_TakeDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.AdjustDamage
struct ADunDefDamageableTarget_AdjustDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.PlayDeath
struct ADunDefDamageableTarget_PlayDeath_Params
{
};

// Function UDKGame.DunDefDamageableTarget.Died
struct ADunDefDamageableTarget_Died_Params
{
};

// Function UDKGame.DunDefDamageableTarget.Destroyed
struct ADunDefDamageableTarget_Destroyed_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetGRI
struct ADunDefDamageableTarget_GetGRI_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetHealthPercent
struct ADunDefDamageableTarget_GetHealthPercent_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetCanBePlayerEnemy
struct ADunDefDamageableTarget_GetCanBePlayerEnemy_Params
{
};

// Function UDKGame.DunDefDamageableTarget.SetPlayerTargetableStatus
struct ADunDefDamageableTarget_SetPlayerTargetableStatus_Params
{
};

// Function UDKGame.DunDefDamageableTarget.PostBeginPlay
struct ADunDefDamageableTarget_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetWhiteHealthColor
struct ADunDefDamageableTarget_GetWhiteHealthColor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetHealthColor
struct ADunDefDamageableTarget_GetHealthColor_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DrawMyHUD
struct ADunDefDamageableTarget_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefDamageableTarget.OnlyDrawHUDForOwner
struct ADunDefDamageableTarget_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DTGetEnemyTargetingDesirability
struct ADunDefDamageableTarget_DTGetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DTGetTowerTargetingDesirability
struct ADunDefDamageableTarget_DTGetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.DTGetPlayerTargetingDesirability
struct ADunDefDamageableTarget_DTGetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetInterpolatedTargetingLocation
struct ADunDefDamageableTarget_GetInterpolatedTargetingLocation_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetTargetingLocation
struct ADunDefDamageableTarget_GetTargetingLocation_Params
{
};

// Function UDKGame.DunDefDamageableTarget.OnDestroy_RemoveFromTargetableList
struct ADunDefDamageableTarget_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function UDKGame.DunDefDamageableTarget.OnPostBeginPlay_AddToTargetableList
struct ADunDefDamageableTarget_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function UDKGame.DunDefDamageableTarget.UnregisterAttacker
struct ADunDefDamageableTarget_UnregisterAttacker_Params
{
};

// Function UDKGame.DunDefDamageableTarget.RegisterAttacker
struct ADunDefDamageableTarget_RegisterAttacker_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetEnemyTargetingDesirability
struct ADunDefDamageableTarget_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetTowerTargetingDesirability
struct ADunDefDamageableTarget_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetPlayerTargetingDesirability
struct ADunDefDamageableTarget_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetAttackRangeOffset
struct ADunDefDamageableTarget_GetAttackRangeOffset_Params
{
};

// Function UDKGame.DunDefDamageableTarget.IgnoreFriendlyFireDamage
struct ADunDefDamageableTarget_IgnoreFriendlyFireDamage_Params
{
};

// Function UDKGame.DunDefDamageableTarget.GetTargetingTeam
struct ADunDefDamageableTarget_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ForceFriendlyFire
struct ADunDefDamageableTarget_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ExecReplicatedFunction
struct ADunDefDamageableTarget_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDamageableTarget.ReplicatedEvent
struct ADunDefDamageableTarget_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTower.ChangedDifficulty
struct ADunDefTower_ChangedDifficulty_Params
{
};

// Function UDKGame.DunDefTower.DrawTowerToolTipActorStats
struct ADunDefTower_DrawTowerToolTipActorStats_Params
{
};

// Function UDKGame.DunDefTower.GetTowerHealth
struct ADunDefTower_GetTowerHealth_Params
{
};

// Function UDKGame.DunDefTower.GetAttackInterval
struct ADunDefTower_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefTower.GetAttackDamage
struct ADunDefTower_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower.GetStatModifier
struct ADunDefTower_GetStatModifier_Params
{
};

// Function UDKGame.DunDefTower.GetStatValue
struct ADunDefTower_GetStatValue_Params
{
};

// Function UDKGame.DunDefTower.RemoveTowerStatModifier
struct ADunDefTower_RemoveTowerStatModifier_Params
{
};

// Function UDKGame.DunDefTower.AddTowerStatModifier
struct ADunDefTower_AddTowerStatModifier_Params
{
};

// Function UDKGame.DunDefTower.GetStatModifierObject
struct ADunDefTower_GetStatModifierObject_Params
{
};

// Function UDKGame.DunDefTower.GetStatValueByTag
struct ADunDefTower_GetStatValueByTag_Params
{
};

// Function UDKGame.DunDefTower.UpdateReplicatedStats
struct ADunDefTower_UpdateReplicatedStats_Params
{
};

// Function UDKGame.DunDefTower.UpdateBuffValues
struct ADunDefTower_UpdateBuffValues_Params
{
};

// Function UDKGame.DunDefTower.AllowAbilityMove
struct ADunDefTower_AllowAbilityMove_Params
{
};

// Function UDKGame.DunDefTower.UsesRange
struct ADunDefTower_UsesRange_Params
{
};

// Function UDKGame.DunDefTower.AllowNegativeStatusAffecting
struct ADunDefTower_AllowNegativeStatusAffecting_Params
{
};

// Function UDKGame.DunDefTower.AllowsFamiliarBoosting
struct ADunDefTower_AllowsFamiliarBoosting_Params
{
};

// Function UDKGame.DunDefTower.GetAlternateAggroActor
struct ADunDefTower_GetAlternateAggroActor_Params
{
};

// Function UDKGame.DunDefTower.GetSelectionLocation
struct ADunDefTower_GetSelectionLocation_Params
{
};

// Function UDKGame.DunDefTower.IsPhysicalTower
struct ADunDefTower_IsPhysicalTower_Params
{
};

// Function UDKGame.DunDefTower.GetAlternateActor
struct ADunDefTower_GetAlternateActor_Params
{
};

// Function UDKGame.DunDefTower.IsMultiActorTower
struct ADunDefTower_IsMultiActorTower_Params
{
};

// Function UDKGame.DunDefTower.GetGlobalTowerHealthMultiplier
struct ADunDefTower_GetGlobalTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower.UpdateDamageFlashing
struct ADunDefTower_UpdateDamageFlashing_Params
{
};

// Function UDKGame.DunDefTower.LocalTookDamage
struct ADunDefTower_LocalTookDamage_Params
{
};

// Function UDKGame.DunDefTower.SetInvisible
struct ADunDefTower_SetInvisible_Params
{
};

// Function UDKGame.DunDefTower.CanTargetInvisibleTarget
struct ADunDefTower_CanTargetInvisibleTarget_Params
{
};

// Function UDKGame.DunDefTower.AdjustDamage
struct ADunDefTower_AdjustDamage_Params
{
};

// Function UDKGame.DunDefTower.ReportSold
struct ADunDefTower_ReportSold_Params
{
};

// Function UDKGame.DunDefTower.SetOldReportedSummoned
struct ADunDefTower_SetOldReportedSummoned_Params
{
};

// Function UDKGame.DunDefTower.ReportSummoned
struct ADunDefTower_ReportSummoned_Params
{
};

// Function UDKGame.DunDefTower.ReportedDeath
struct ADunDefTower_ReportedDeath_Params
{
};

// Function UDKGame.DunDefTower.KilledTarget
struct ADunDefTower_KilledTarget_Params
{
};

// Function UDKGame.DunDefTower.CanBeHealed
struct ADunDefTower_CanBeHealed_Params
{
};

// Function UDKGame.DunDefTower.Client_Activate
struct ADunDefTower_Client_Activate_Params
{
};

// Function UDKGame.DunDefTower.Server_Activate
struct ADunDefTower_Server_Activate_Params
{
};

// Function UDKGame.DunDefTower.ForceSingleMove
struct ADunDefTower_ForceSingleMove_Params
{
};

// Function UDKGame.DunDefTower.ForceMoveActor
struct ADunDefTower_ForceMoveActor_Params
{
};

// Function UDKGame.DunDefTower.AllowPushing
struct ADunDefTower_AllowPushing_Params
{
};

// Function UDKGame.DunDefTower.Bump
struct ADunDefTower_Bump_Params
{
};

// Function UDKGame.DunDefTower.SellAllTowers
struct ADunDefTower_SellAllTowers_Params
{
};

// Function UDKGame.DunDefTower.DelayedTurnOffSkelUpdating
struct ADunDefTower_DelayedTurnOffSkelUpdating_Params
{
};

// Function UDKGame.DunDefTower.ForceSkelUpdating
struct ADunDefTower_ForceSkelUpdating_Params
{
};

// Function UDKGame.DunDefTower.HealDamage
struct ADunDefTower_HealDamage_Params
{
};

// Function UDKGame.DunDefTower.PerformFullHeal
struct ADunDefTower_PerformFullHeal_Params
{
};

// Function UDKGame.DunDefTower.DrawTowerToolTipStats
struct ADunDefTower_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower.AllowActivation
struct ADunDefTower_AllowActivation_Params
{
};

// Function UDKGame.DunDefTower.DrawToolTip
struct ADunDefTower_DrawToolTip_Params
{
};

// Function UDKGame.DunDefTower.GetTowerToolTipLocation
struct ADunDefTower_GetTowerToolTipLocation_Params
{
};

// Function UDKGame.DunDefTower.StaticGetTowerScale
struct ADunDefTower_StaticGetTowerScale_Params
{
};

// Function UDKGame.DunDefTower.InitTowerRatingMaterial
struct ADunDefTower_InitTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower.UpdateTowerRatingMaterial
struct ADunDefTower_UpdateTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower.RefreshTowerRating
struct ADunDefTower_RefreshTowerRating_Params
{
};

// Function UDKGame.DunDefTower.DrawUpgradeOverlay
struct ADunDefTower_DrawUpgradeOverlay_Params
{
};

// Function UDKGame.DunDefTower.GetNextUpgradeLevel
struct ADunDefTower_GetNextUpgradeLevel_Params
{
};

// Function UDKGame.DunDefTower.GetTimeToUpgradeTower
struct ADunDefTower_GetTimeToUpgradeTower_Params
{
};

// Function UDKGame.DunDefTower.GetCostToUpgradeTower
struct ADunDefTower_GetCostToUpgradeTower_Params
{
};

// Function UDKGame.DunDefTower.GetTowerUpgradeLevelStatModifier
struct ADunDefTower_GetTowerUpgradeLevelStatModifier_Params
{
};

// Function UDKGame.DunDefTower.StaticGetAttackRange
struct ADunDefTower_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower.GetAttackRange
struct ADunDefTower_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower.Died
struct ADunDefTower_Died_Params
{
};

// Function UDKGame.DunDefTower.ChangedGamePhases
struct ADunDefTower_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefTower.DestroyOwnerLeft
struct ADunDefTower_DestroyOwnerLeft_Params
{
};

// Function UDKGame.DunDefTower.TransferTowerOwnership
struct ADunDefTower_TransferTowerOwnership_Params
{
};

// Function UDKGame.DunDefTower.GetSellWorth
struct ADunDefTower_GetSellWorth_Params
{
};

// Function UDKGame.DunDefTower.Sell
struct ADunDefTower_Sell_Params
{
};

// Function UDKGame.DunDefTower.IsCreatorHeroInActivePlay
struct ADunDefTower_IsCreatorHeroInActivePlay_Params
{
};

// Function UDKGame.DunDefTower.GetDamageMultiplier
struct ADunDefTower_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower.GetPhysicalTowerDamageMultiplier
struct ADunDefTower_GetPhysicalTowerDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower.GetPhysicalTowerHealthMultiplier
struct ADunDefTower_GetPhysicalTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower.ScaleForHeroModifiers
struct ADunDefTower_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefTower.CheckAssociateWithHero
struct ADunDefTower_CheckAssociateWithHero_Params
{
};

// Function UDKGame.DunDefTower.AllowHeroGUID
struct ADunDefTower_AllowHeroGUID_Params
{
};

// Function UDKGame.DunDefTower.InitializeForInstigator
struct ADunDefTower_InitializeForInstigator_Params
{
};

// Function UDKGame.DunDefTower.DoDowngrade
struct ADunDefTower_DoDowngrade_Params
{
};

// Function UDKGame.DunDefTower.DoUpgrade
struct ADunDefTower_DoUpgrade_Params
{
};

// Function UDKGame.DunDefTower.CanBeUpgraded
struct ADunDefTower_CanBeUpgraded_Params
{
};

// Function UDKGame.DunDefTower.PlaySellFX
struct ADunDefTower_PlaySellFX_Params
{
};

// Function UDKGame.DunDefTower.IncrementRepair
struct ADunDefTower_IncrementRepair_Params
{
};

// Function UDKGame.DunDefTower.DisableNetUpdateFrequency
struct ADunDefTower_DisableNetUpdateFrequency_Params
{
};

// Function UDKGame.DunDefTower.GetCurrentRepairPercentage
struct ADunDefTower_GetCurrentRepairPercentage_Params
{
};

// Function UDKGame.DunDefTower.StartRepair
struct ADunDefTower_StartRepair_Params
{
};

// Function UDKGame.DunDefTower.GetTimeOfTotalRepair
struct ADunDefTower_GetTimeOfTotalRepair_Params
{
};

// Function UDKGame.DunDefTower.GetTimeToRepair
struct ADunDefTower_GetTimeToRepair_Params
{
};

// Function UDKGame.DunDefTower.GetCostToRepair
struct ADunDefTower_GetCostToRepair_Params
{
};

// Function UDKGame.DunDefTower.Destroyed
struct ADunDefTower_Destroyed_Params
{
};

// Function UDKGame.DunDefTower.NoWorldGeometryOccluding
struct ADunDefTower_NoWorldGeometryOccluding_Params
{
};

// Function UDKGame.DunDefTower.AutoBindToPlayer
struct ADunDefTower_AutoBindToPlayer_Params
{
};

// Function UDKGame.DunDefTower.InitalizeStatObject
struct ADunDefTower_InitalizeStatObject_Params
{
};

// Function UDKGame.DunDefTower.PostBeginPlay
struct ADunDefTower_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower.TurnOffSpawnEffect
struct ADunDefTower_TurnOffSpawnEffect_Params
{
};

// Function UDKGame.DunDefTower.DoSpawnEffect
struct ADunDefTower_DoSpawnEffect_Params
{
};

// Function UDKGame.DunDefTower.UpdateAI
struct ADunDefTower_UpdateAI_Params
{
};

// Function UDKGame.DunDefTower.ReplicatedEvent
struct ADunDefTower_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTower.ExecReplicatedFunction
struct ADunDefTower_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefTower.DrawUpgradeIcons
struct ADunDefTower_DrawUpgradeIcons_Params
{
};

// Function UDKGame.DunDefTower.GetDamageType
struct ADunDefTower_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower.DrawMyHUD
struct ADunDefTower_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefTower.HasBeenRendered
struct ADunDefTower_HasBeenRendered_Params
{
};

// Function UDKGame.DunDefTower.IsPreviousToolTipActor
struct ADunDefTower_IsPreviousToolTipActor_Params
{
};

// Function UDKGame.DunDefTower.DrawMiniMapIcon
struct ADunDefTower_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefTower.getMinimapDrawSettings
struct ADunDefTower_getMinimapDrawSettings_Params
{
};

// Function UDKGame.DunDefTower.TakeDamage
struct ADunDefTower_TakeDamage_Params
{
};

// Function UDKGame.DunDefTower.GetLastDamageTime
struct ADunDefTower_GetLastDamageTime_Params
{
};

// Function UDKGame.DunDefTower.GetEnemyTargetingDesirability
struct ADunDefTower_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower.GetTowerTargetingDesirability
struct ADunDefTower_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower.GetPlayerTargetingDesirability
struct ADunDefTower_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower.GetBoostAmount
struct ADunDefTower_GetBoostAmount_Params
{
};

// Function UDKGame.DunDefTower.GetTowerBooster
struct ADunDefTower_GetTowerBooster_Params
{
};

// Function UDKGame.DunDefTower.GetTowerDeBooster
struct ADunDefTower_GetTowerDeBooster_Params
{
};

// Function UDKGame.DunDefTower.RemoveTowerDeBooster
struct ADunDefTower_RemoveTowerDeBooster_Params
{
};

// Function UDKGame.DunDefTower.AddTowerDeBooster
struct ADunDefTower_AddTowerDeBooster_Params
{
};

// Function UDKGame.DunDefTower.RemoveTowerBooster
struct ADunDefTower_RemoveTowerBooster_Params
{
};

// Function UDKGame.DunDefTower.AddTowerBooster
struct ADunDefTower_AddTowerBooster_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.TakeDamage
struct ADunDefTower_NonPhysical_TakeDamage_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.IsPhysicalTower
struct ADunDefTower_NonPhysical_IsPhysicalTower_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.GetPhysicalTowerDamageMultiplier
struct ADunDefTower_NonPhysical_GetPhysicalTowerDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.GetPhysicalTowerHealthMultiplier
struct ADunDefTower_NonPhysical_GetPhysicalTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.UseForTowerSelectionPassThrough
struct ADunDefTower_NonPhysical_UseForTowerSelectionPassThrough_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.GetTowerTargetingDesirability
struct ADunDefTower_NonPhysical_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower_NonPhysical.GetPlayerTargetingDesirability
struct ADunDefTower_NonPhysical_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetGlobalTowerHealthMultiplier
struct ADunDefTower_Aura_GetGlobalTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetDamageMultiplier
struct ADunDefTower_Aura_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower_Aura.RefreshRadius
struct ADunDefTower_Aura_RefreshRadius_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetToolTipPriority
struct ADunDefTower_Aura_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefTower_Aura.TakesToolTipPriority
struct ADunDefTower_Aura_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefTower_Aura.PerformFullHeal
struct ADunDefTower_Aura_PerformFullHeal_Params
{
};

// Function UDKGame.DunDefTower_Aura.DrawTowerToolTipStats
struct ADunDefTower_Aura_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_Aura.InitTowerRatingMaterial
struct ADunDefTower_Aura_InitTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower_Aura.UpdateTowerRatingMaterial
struct ADunDefTower_Aura_UpdateTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower_Aura.HealPctOfMaxHealth
struct ADunDefTower_Aura_HealPctOfMaxHealth_Params
{
};

// Function UDKGame.DunDefTower_Aura.HealDamage
struct ADunDefTower_Aura_HealDamage_Params
{
};

// Function UDKGame.DunDefTower_Aura.IncrementRepair
struct ADunDefTower_Aura_IncrementRepair_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetCurrentRepairPercentage
struct ADunDefTower_Aura_GetCurrentRepairPercentage_Params
{
};

// Function UDKGame.DunDefTower_Aura.StartRepair
struct ADunDefTower_Aura_StartRepair_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetTimeToRepair
struct ADunDefTower_Aura_GetTimeToRepair_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetCostToRepair
struct ADunDefTower_Aura_GetCostToRepair_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetTimeOfTotalRepair
struct ADunDefTower_Aura_GetTimeOfTotalRepair_Params
{
};

// Function UDKGame.DunDefTower_Aura.StaticGetAttackRange
struct ADunDefTower_Aura_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_Aura.RemoveTowerBooster
struct ADunDefTower_Aura_RemoveTowerBooster_Params
{
};

// Function UDKGame.DunDefTower_Aura.AddTowerBooster
struct ADunDefTower_Aura_AddTowerBooster_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetAttackRange
struct ADunDefTower_Aura_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetTimedInterval
struct ADunDefTower_Aura_GetTimedInterval_Params
{
};

// Function UDKGame.DunDefTower_Aura.ScaleForHeroModifiers
struct ADunDefTower_Aura_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetHealth
struct ADunDefTower_Aura_GetHealth_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetHealthPercent
struct ADunDefTower_Aura_GetHealthPercent_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetEnemyTargetingDesirability
struct ADunDefTower_Aura_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTower_Aura.GetToolTipText
struct ADunDefTower_Aura_GetToolTipText_Params
{
};

// Function UDKGame.DunDefTower_Aura.ScaleAuraEffect
struct ADunDefTower_Aura_ScaleAuraEffect_Params
{
};

// Function UDKGame.DunDefTower_Aura.SetRadius
struct ADunDefTower_Aura_SetRadius_Params
{
};

// Function UDKGame.DunDefTower_Aura.TimedEffect
struct ADunDefTower_Aura_TimedEffect_Params
{
};

// Function UDKGame.DunDefTower_Aura.Timer
struct ADunDefTower_Aura_Timer_Params
{
};

// Function UDKGame.DunDefTower_Aura.IsInRadiusDT
struct ADunDefTower_Aura_IsInRadiusDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.ExitEffectDT
struct ADunDefTower_Aura_ExitEffectDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.EntryEffectDT
struct ADunDefTower_Aura_EntryEffectDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.TimedEffectDT
struct ADunDefTower_Aura_TimedEffectDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.AffectedDTDied
struct ADunDefTower_Aura_AffectedDTDied_Params
{
};

// Function UDKGame.DunDefTower_Aura.LeftRadiusDT
struct ADunDefTower_Aura_LeftRadiusDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.AttacksDT
struct ADunDefTower_Aura_AttacksDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.EnteredRadiusDT
struct ADunDefTower_Aura_EnteredRadiusDT_Params
{
};

// Function UDKGame.DunDefTower_Aura.CheckForDamagableTargets
struct ADunDefTower_Aura_CheckForDamagableTargets_Params
{
};

// Function UDKGame.DunDefTower_Aura.ExitEffect
struct ADunDefTower_Aura_ExitEffect_Params
{
};

// Function UDKGame.DunDefTower_Aura.EntryEffect
struct ADunDefTower_Aura_EntryEffect_Params
{
};

// Function UDKGame.DunDefTower_Aura.AffectedPawnDied
struct ADunDefTower_Aura_AffectedPawnDied_Params
{
};

// Function UDKGame.DunDefTower_Aura.Destroyed
struct ADunDefTower_Aura_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_Aura.LeftRadius
struct ADunDefTower_Aura_LeftRadius_Params
{
};

// Function UDKGame.DunDefTower_Aura.IgnoresPawn
struct ADunDefTower_Aura_IgnoresPawn_Params
{
};

// Function UDKGame.DunDefTower_Aura.EnteredRadius
struct ADunDefTower_Aura_EnteredRadius_Params
{
};

// Function UDKGame.DunDefTower_Aura.UnTouch
struct ADunDefTower_Aura_UnTouch_Params
{
};

// Function UDKGame.DunDefTower_Aura.CanTargetInvisibleTarget
struct ADunDefTower_Aura_CanTargetInvisibleTarget_Params
{
};

// Function UDKGame.DunDefTower_Aura.Touch
struct ADunDefTower_Aura_Touch_Params
{
};

// Function UDKGame.DunDefTower_Aura.ScaleDown
struct ADunDefTower_Aura_ScaleDown_Params
{
};

// Function UDKGame.DunDefTower_Aura.DecreaseLifeEnergy
struct ADunDefTower_Aura_DecreaseLifeEnergy_Params
{
};

// Function UDKGame.DunDefTower_Aura.IsInRadius
struct ADunDefTower_Aura_IsInRadius_Params
{
};

// Function UDKGame.DunDefTower_Aura.IsValidForLifeEnergyDecrease
struct ADunDefTower_Aura_IsValidForLifeEnergyDecrease_Params
{
};

// Function UDKGame.DunDefTower_Aura.Tick
struct ADunDefTower_Aura_Tick_Params
{
};

// Function UDKGame.DunDefTower_Aura.PostBeginPlay
struct ADunDefTower_Aura_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_Aura.ReplicatedEvent
struct ADunDefTower_Aura_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTower_Aura.SameTeamAs
struct ADunDefTower_Aura_SameTeamAs_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.AddRandomizeValues
struct UHeroEquipment_Familiar_AddRandomizeValues_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.AttachedComponent
struct UHeroEquipment_Familiar_AttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.RemovedFromHero
struct UHeroEquipment_Familiar_RemovedFromHero_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.AddedToHero
struct UHeroEquipment_Familiar_AddedToHero_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetPetMaxDrawScale
struct UHeroEquipment_Familiar_GetPetMaxDrawScale_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetEquipmentDrawScale
struct UHeroEquipment_Familiar_GetEquipmentDrawScale_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.AddEquipmentAttachment
struct UHeroEquipment_Familiar_AddEquipmentAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.NotifyEquipment_PawnDied
struct UHeroEquipment_Familiar_NotifyEquipment_PawnDied_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.NotifyEquipment_PawnJumped
struct UHeroEquipment_Familiar_NotifyEquipment_PawnJumped_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.NotifyEquipment_PawnTookDamage
struct UHeroEquipment_Familiar_NotifyEquipment_PawnTookDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.ExecHeroEvent
struct UHeroEquipment_Familiar_ExecHeroEvent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.IsPlayingCustomAnim
struct UHeroEquipment_Familiar_IsPlayingCustomAnim_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetMeshComponent
struct UHeroEquipment_Familiar_GetMeshComponent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.PlayAnimation
struct UHeroEquipment_Familiar_PlayAnimation_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetDesiredDirection
struct UHeroEquipment_Familiar_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.TickedByPawn
struct UHeroEquipment_Familiar_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.GetPetHealingAmount
struct UHeroEquipment_Familiar_GetPetHealingAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.LimitPetHealing
struct UHeroEquipment_Familiar_LimitPetHealing_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.DoPetHealing
struct UHeroEquipment_Familiar_DoPetHealing_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.DoFairyAbilities
struct UHeroEquipment_Familiar_DoFairyAbilities_Params
{
};

// Function UDKGame.HeroEquipment_Familiar.DoFamiliarAbilities
struct UHeroEquipment_Familiar_DoFamiliarAbilities_Params
{
};

// Function UDKGame.DunDefBuff.GetStatModifierObject
struct UDunDefBuff_GetStatModifierObject_Params
{
};

// Function UDKGame.DunDefBuff.GetStatValueByTag
struct UDunDefBuff_GetStatValueByTag_Params
{
};

// Function UDKGame.DunDefBuff.UpdateBuffRange
struct UDunDefBuff_UpdateBuffRange_Params
{
};

// Function UDKGame.DunDefBuff.RefreshBuffRange
struct UDunDefBuff_RefreshBuffRange_Params
{
};

// Function UDKGame.DunDefBuff.InitalizeActorStats
struct UDunDefBuff_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefBuff.ReportHeroSwapped
struct UDunDefBuff_ReportHeroSwapped_Params
{
};

// Function UDKGame.DunDefBuff.AdjustTargetDamage
struct UDunDefBuff_AdjustTargetDamage_Params
{
};

// Function UDKGame.DunDefBuff.ReportBuffRemoved
struct UDunDefBuff_ReportBuffRemoved_Params
{
};

// Function UDKGame.DunDefBuff.ReportBuffAdded
struct UDunDefBuff_ReportBuffAdded_Params
{
};

// Function UDKGame.DunDefBuff.TriggerEvent
struct UDunDefBuff_TriggerEvent_Params
{
};

// Function UDKGame.DunDefBuff.ReportOwnerDeath
struct UDunDefBuff_ReportOwnerDeath_Params
{
};

// Function UDKGame.DunDefBuff.ReportOwnerJumped
struct UDunDefBuff_ReportOwnerJumped_Params
{
};

// Function UDKGame.DunDefBuff.ReportHealedActor
struct UDunDefBuff_ReportHealedActor_Params
{
};

// Function UDKGame.DunDefBuff.ReportKilledActor
struct UDunDefBuff_ReportKilledActor_Params
{
};

// Function UDKGame.DunDefBuff.ReportHealed
struct UDunDefBuff_ReportHealed_Params
{
};

// Function UDKGame.DunDefBuff.ReportTookDamage
struct UDunDefBuff_ReportTookDamage_Params
{
};

// Function UDKGame.DunDefBuff.ReportActorDealtDamage
struct UDunDefBuff_ReportActorDealtDamage_Params
{
};

// Function UDKGame.DunDefBuff.AdjustDealtDamage
struct UDunDefBuff_AdjustDealtDamage_Params
{
};

// Function UDKGame.DunDefBuff.GetHUD
struct UDunDefBuff_GetHUD_Params
{
};

// Function UDKGame.DunDefBuff.DoBuffNotification
struct UDunDefBuff_DoBuffNotification_Params
{
};

// Function UDKGame.DunDefBuff.UpdateBuff
struct UDunDefBuff_UpdateBuff_Params
{
};

// Function UDKGame.DunDefBuff.GetStatValue
struct UDunDefBuff_GetStatValue_Params
{
};

// Function UDKGame.DunDefBuff.GetTierName
struct UDunDefBuff_GetTierName_Params
{
};

// Function UDKGame.DunDefBuff.GetBuffIcon
struct UDunDefBuff_GetBuffIcon_Params
{
};

// Function UDKGame.DunDefBuff.GetBuffDescription
struct UDunDefBuff_GetBuffDescription_Params
{
};

// Function UDKGame.DunDefBuff.GetBuffName
struct UDunDefBuff_GetBuffName_Params
{
};

// Function UDKGame.DunDefBuff.CheckProcChance
struct UDunDefBuff_CheckProcChance_Params
{
};

// Function UDKGame.DunDefBuff.GetStackCount
struct UDunDefBuff_GetStackCount_Params
{
};

// Function UDKGame.DunDefBuff.SetStackCount
struct UDunDefBuff_SetStackCount_Params
{
};

// Function UDKGame.DunDefBuff.ResetTimer
struct UDunDefBuff_ResetTimer_Params
{
};

// Function UDKGame.DunDefBuff.IsEnemy
struct UDunDefBuff_IsEnemy_Params
{
};

// Function UDKGame.DunDefBuff.IsFriend
struct UDunDefBuff_IsFriend_Params
{
};

// Function UDKGame.DunDefBuff.GetTargetingTeam
struct UDunDefBuff_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefBuff.DrawDebugCone
struct UDunDefBuff_DrawDebugCone_Params
{
};

// Function UDKGame.DunDefBuff.DrawDebugLine
struct UDunDefBuff_DrawDebugLine_Params
{
};

// Function UDKGame.DunDefBuff.DrawDebugSphere
struct UDunDefBuff_DrawDebugSphere_Params
{
};

// Function UDKGame.DunDefBuff.IsTimerActive
struct UDunDefBuff_IsTimerActive_Params
{
};

// Function UDKGame.DunDefBuff.ClearAllTimers
struct UDunDefBuff_ClearAllTimers_Params
{
};

// Function UDKGame.DunDefBuff.ClearTimer
struct UDunDefBuff_ClearTimer_Params
{
};

// Function UDKGame.DunDefBuff.SetTimer
struct UDunDefBuff_SetTimer_Params
{
};

// Function UDKGame.DunDefBuff.StopSound
struct UDunDefBuff_StopSound_Params
{
};

// Function UDKGame.DunDefBuff.PlaySound
struct UDunDefBuff_PlaySound_Params
{
};

// Function UDKGame.DunDefBuff.UpdateLocation
struct UDunDefBuff_UpdateLocation_Params
{
};

// Function UDKGame.DunDefBuff.SetBase
struct UDunDefBuff_SetBase_Params
{
};

// Function UDKGame.DunDefBuff.AttachComponent
struct UDunDefBuff_AttachComponent_Params
{
};

// Function UDKGame.DunDefBuff.ReattachComponent
struct UDunDefBuff_ReattachComponent_Params
{
};

// Function UDKGame.DunDefBuff.SetLocation
struct UDunDefBuff_SetLocation_Params
{
};

// Function UDKGame.DunDefBuff.SetRotation
struct UDunDefBuff_SetRotation_Params
{
};

// Function UDKGame.DunDefBuff.InitializeBuffInfo
struct UDunDefBuff_InitializeBuffInfo_Params
{
};

// Function UDKGame.DunDefBuff.Destroyed
struct UDunDefBuff_Destroyed_Params
{
};

// Function UDKGame.DunDefBuff.SpawnEffect
struct UDunDefBuff_SpawnEffect_Params
{
};

// Function UDKGame.DunDefBuff.DisableBuff
struct UDunDefBuff_DisableBuff_Params
{
};

// Function UDKGame.DunDefBuff.EnableBuff
struct UDunDefBuff_EnableBuff_Params
{
};

// Function UDKGame.DunDefBuff.ToggleBuff
struct UDunDefBuff_ToggleBuff_Params
{
};

// Function UDKGame.DunDefBuff.DeactivateBuff
struct UDunDefBuff_DeactivateBuff_Params
{
};

// Function UDKGame.DunDefBuff.ActivateBuff
struct UDunDefBuff_ActivateBuff_Params
{
};

// Function UDKGame.DunDefBuff.Tick
struct UDunDefBuff_Tick_Params
{
};

// Function UDKGame.DunDefBuff.CheckAlive
struct UDunDefBuff_CheckAlive_Params
{
};

// Function UDKGame.DunDefBuff.BuffEffect
struct UDunDefBuff_BuffEffect_Params
{
};

// Function UDKGame.DunDefBuff.Initialize
struct UDunDefBuff_Initialize_Params
{
};

// Function UDKGame.DunDefBuff.SetBuffID
struct UDunDefBuff_SetBuffID_Params
{
};

// Function UDKGame.DunDefBuff.IsValidTarget
struct UDunDefBuff_IsValidTarget_Params
{
};

// Function UDKGame.DunDefBuff.AddBuff
struct UDunDefBuff_AddBuff_Params
{
};

// Function UDKGame.DunDefBuff.ReplicateToNewPlayerController
struct UDunDefBuff_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.DunDefBuff.ExecReplicatedFunction
struct UDunDefBuff_ExecReplicatedFunction_Params
{
};

// Function UDKGame.ActionWheel.ExecutePlayerAbility
struct UActionWheel_ExecutePlayerAbility_Params
{
};

// Function UDKGame.ActionWheel.SetSelectedEntry
struct UActionWheel_SetSelectedEntry_Params
{
};

// Function UDKGame.ActionWheel.Destroyed
struct UActionWheel_Destroyed_Params
{
};

// Function UDKGame.ActionWheel.SetHotKey
struct UActionWheel_SetHotKey_Params
{
};

// Function UDKGame.ActionWheel.UpdateInput
struct UActionWheel_UpdateInput_Params
{
};

// Function UDKGame.ActionWheel.ProcessBack
struct UActionWheel_ProcessBack_Params
{
};

// Function UDKGame.ActionWheel.ProcessSelection
struct UActionWheel_ProcessSelection_Params
{
};

// Function UDKGame.ActionWheel.ToggleVisible
struct UActionWheel_ToggleVisible_Params
{
};

// Function UDKGame.ActionWheel.Hide
struct UActionWheel_Hide_Params
{
};

// Function UDKGame.ActionWheel.Show
struct UActionWheel_Show_Params
{
};

// Function UDKGame.ActionWheel.SetGamepadHiglightedEntry
struct UActionWheel_SetGamepadHiglightedEntry_Params
{
};

// Function UDKGame.ActionWheel.GetCenterWheelEntry
struct UActionWheel_GetCenterWheelEntry_Params
{
};

// Function UDKGame.ActionWheel.IsVisible
struct UActionWheel_IsVisible_Params
{
};

// Function UDKGame.ActionWheel.DrawGamepadSpinner
struct UActionWheel_DrawGamepadSpinner_Params
{
};

// Function UDKGame.ActionWheel.DrawEntries
struct UActionWheel_DrawEntries_Params
{
};

// Function UDKGame.ActionWheel.GetHudUI
struct UActionWheel_GetHudUI_Params
{
};

// Function UDKGame.ActionWheel.DrawHUD
struct UActionWheel_DrawHUD_Params
{
};

// Function UDKGame.ActionWheel.GetVisibleWheelEntries
struct UActionWheel_GetVisibleWheelEntries_Params
{
};

// Function UDKGame.ActionWheel.FindEntryByNameFromArray
struct UActionWheel_FindEntryByNameFromArray_Params
{
};

// Function UDKGame.ActionWheel.FindEntryByName
struct UActionWheel_FindEntryByName_Params
{
};

// Function UDKGame.ActionWheel.InitializeHotKeys
struct UActionWheel_InitializeHotKeys_Params
{
};

// Function UDKGame.ActionWheel.InitializeWheel
struct UActionWheel_InitializeWheel_Params
{
};

// Function UDKGame.ActionWheelEntry.ProcessSelection
struct UActionWheelEntry_ProcessSelection_Params
{
};

// Function UDKGame.ActionWheelEntry.HandleSelection
struct UActionWheelEntry_HandleSelection_Params
{
};

// Function UDKGame.ActionWheelEntry.IsMouseOrGamepadOverMe
struct UActionWheelEntry_IsMouseOrGamepadOverMe_Params
{
};

// Function UDKGame.ActionWheelEntry.DrawEntry
struct UActionWheelEntry_DrawEntry_Params
{
};

// Function UDKGame.ActionWheelEntry.AbilityActorDestroyed
struct UActionWheelEntry_AbilityActorDestroyed_Params
{
};

// Function UDKGame.ActionWheelEntry.Initialize
struct UActionWheelEntry_Initialize_Params
{
};

// Function UDKGame.ActionWheelEntry.AddChild
struct UActionWheelEntry_AddChild_Params
{
};

// Function UDKGame.ActionWheelEntry.FindEntryByName
struct UActionWheelEntry_FindEntryByName_Params
{
};

// Function UDKGame.DunDefMapInfo.GetMaxPlayers
struct UDunDefMapInfo_GetMaxPlayers_Params
{
};

// Function UDKGame.DunDefMapInfo.EnableVoiceChat
struct UDunDefMapInfo_EnableVoiceChat_Params
{
};

// Function UDKGame.DunDefMapInfo.AllowConsole
struct UDunDefMapInfo_AllowConsole_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientSetCurrentSession
struct ADunDefBasePlayerController_ClientSetCurrentSession_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientReceiveStatBlock
struct ADunDefBasePlayerController_ClientReceiveStatBlock_Params
{
};

// Function UDKGame.DunDefBasePlayerController.CancelStatWriteTimers
struct ADunDefBasePlayerController_CancelStatWriteTimers_Params
{
};

// Function UDKGame.DunDefBasePlayerController.UpdateStatWriteTimers
struct ADunDefBasePlayerController_UpdateStatWriteTimers_Params
{
};

// Function UDKGame.DunDefBasePlayerController.TrySettingHostStats
struct ADunDefBasePlayerController_TrySettingHostStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientSendingStats
struct ADunDefBasePlayerController_ClientSendingStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerSendClientStats
struct ADunDefBasePlayerController_ServerSendClientStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerSendStats
struct ADunDefBasePlayerController_ServerSendStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerReceiveMyStatBlock
struct ADunDefBasePlayerController_ServerReceiveMyStatBlock_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientSendMyStats
struct ADunDefBasePlayerController_ClientSendMyStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerSendingMyStats
struct ADunDefBasePlayerController_ServerSendingMyStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.SendMyStats
struct ADunDefBasePlayerController_SendMyStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientAddRemoteIDToIgnore
struct ADunDefBasePlayerController_ClientAddRemoteIDToIgnore_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientAddRemoteID
struct ADunDefBasePlayerController_ClientAddRemoteID_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerMarkStatsComplete
struct ADunDefBasePlayerController_ServerMarkStatsComplete_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientReceivePlayerStatBlock
struct ADunDefBasePlayerController_ClientReceivePlayerStatBlock_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ClientSendingPlayerStats
struct ADunDefBasePlayerController_ClientSendingPlayerStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerSendClientPlayerStats
struct ADunDefBasePlayerController_ServerSendClientPlayerStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerSendPlayerStats
struct ADunDefBasePlayerController_ServerSendPlayerStats_Params
{
};

// Function UDKGame.DunDefBasePlayerController.CheckMovie
struct ADunDefBasePlayerController_CheckMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.SkippedMovie
struct ADunDefBasePlayerController_SkippedMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.EndedMovie
struct ADunDefBasePlayerController_EndedMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.CacheMovie
struct ADunDefBasePlayerController_CacheMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.StopMoviePlaying
struct ADunDefBasePlayerController_StopMoviePlaying_Params
{
};

// Function UDKGame.DunDefBasePlayerController.StopMovie
struct ADunDefBasePlayerController_StopMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PlayMovie
struct ADunDefBasePlayerController_PlayMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.StartedPlayingMovie
struct ADunDefBasePlayerController_StartedPlayingMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerStopMovie
struct ADunDefBasePlayerController_ServerStopMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerPlayMovie
struct ADunDefBasePlayerController_ServerPlayMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ServerCheckMovie
struct ADunDefBasePlayerController_ServerCheckMovie_Params
{
};

// Function UDKGame.DunDefBasePlayerController.GetCameraParticleEnabled
struct ADunDefBasePlayerController_GetCameraParticleEnabled_Params
{
};

// Function UDKGame.DunDefBasePlayerController.SetCameraParticleEnabled
struct ADunDefBasePlayerController_SetCameraParticleEnabled_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PostCameraUpdate
struct ADunDefBasePlayerController_PostCameraUpdate_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PlayerTick
struct ADunDefBasePlayerController_PlayerTick_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PlayerRealTimeTick
struct ADunDefBasePlayerController_PlayerRealTimeTick_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ReceivedPlayer
struct ADunDefBasePlayerController_ReceivedPlayer_Params
{
};

// Function UDKGame.DunDefBasePlayerController.ToggleCameraParticle
struct ADunDefBasePlayerController_ToggleCameraParticle_Params
{
};

// Function UDKGame.DunDefBasePlayerController.DisableCameraParticle
struct ADunDefBasePlayerController_DisableCameraParticle_Params
{
};

// Function UDKGame.DunDefBasePlayerController.EnableCameraParticle
struct ADunDefBasePlayerController_EnableCameraParticle_Params
{
};

// Function UDKGame.DunDefBasePlayerController.GetGRI
struct ADunDefBasePlayerController_GetGRI_Params
{
};

// Function UDKGame.DunDefBasePlayerController.CreateHUDScene
struct ADunDefBasePlayerController_CreateHUDScene_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PostSpawn
struct ADunDefBasePlayerController_PostSpawn_Params
{
};

// Function UDKGame.DunDefBasePlayerController.PostBeginPlay
struct ADunDefBasePlayerController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerController.SetGlobalEnemyHealth
struct ADunDefPlayerController_SetGlobalEnemyHealth_Params
{
};

// Function UDKGame.DunDefPlayerController.EnableBuffDebug
struct ADunDefPlayerController_EnableBuffDebug_Params
{
};

// Function UDKGame.DunDefPlayerController.SpawnRandomItem
struct ADunDefPlayerController_SpawnRandomItem_Params
{
};

// Function UDKGame.DunDefPlayerController.SkipToWave
struct ADunDefPlayerController_SkipToWave_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleQualityOutline
struct ADunDefPlayerController_ToggleQualityOutline_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleHideGoodEquipmentOverlay
struct ADunDefPlayerController_ToggleHideGoodEquipmentOverlay_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleHideMiniMapBillboards
struct ADunDefPlayerController_ToggleHideMiniMapBillboards_Params
{
};

// Function UDKGame.DunDefPlayerController.SetHideMiniMapBillboards
struct ADunDefPlayerController_SetHideMiniMapBillboards_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleHideMiniMapTowers
struct ADunDefPlayerController_ToggleHideMiniMapTowers_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleHideMiniMapTowers_prev
struct ADunDefPlayerController_ToggleHideMiniMapTowers_prev_Params
{
};

// Function UDKGame.DunDefPlayerController.toggleLootTable
struct ADunDefPlayerController_toggleLootTable_Params
{
};

// Function UDKGame.DunDefPlayerController.toggleItemBeams
struct ADunDefPlayerController_toggleItemBeams_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerKillMe
struct ADunDefPlayerController_ServerKillMe_Params
{
};

// Function UDKGame.DunDefPlayerController.KillMe
struct ADunDefPlayerController_KillMe_Params
{
};

// Function UDKGame.DunDefPlayerController.GetDroppedEquipmentCheckRadius
struct ADunDefPlayerController_GetDroppedEquipmentCheckRadius_Params
{
};

// Function UDKGame.DunDefPlayerController.GetEquipmentPickupRange
struct ADunDefPlayerController_GetEquipmentPickupRange_Params
{
};

// Function UDKGame.DunDefPlayerController.SetOwnerNoSee
struct ADunDefPlayerController_SetOwnerNoSee_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckLobbyAchievements
struct ADunDefPlayerController_CheckLobbyAchievements_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowOverlordBounds
struct ADunDefPlayerController_ShowOverlordBounds_Params
{
};

// Function UDKGame.DunDefPlayerController.SetOverlordMinXY
struct ADunDefPlayerController_SetOverlordMinXY_Params
{
};

// Function UDKGame.DunDefPlayerController.SetOverlordMaxXY
struct ADunDefPlayerController_SetOverlordMaxXY_Params
{
};

// Function UDKGame.DunDefPlayerController.SetOverlordHeight
struct ADunDefPlayerController_SetOverlordHeight_Params
{
};

// Function UDKGame.DunDefPlayerController.RotateCameraRelease
struct ADunDefPlayerController_RotateCameraRelease_Params
{
};

// Function UDKGame.DunDefPlayerController.RotateCameraPress
struct ADunDefPlayerController_RotateCameraPress_Params
{
};

// Function UDKGame.DunDefPlayerController.ReleaseActionWheel
struct ADunDefPlayerController_ReleaseActionWheel_Params
{
};

// Function UDKGame.DunDefPlayerController.AllowBindingSet
struct ADunDefPlayerController_AllowBindingSet_Params
{
};

// Function UDKGame.DunDefPlayerController.AbilityModifierHeld
struct ADunDefPlayerController_AbilityModifierHeld_Params
{
};

// Function UDKGame.DunDefPlayerController.UseMouseIntersectionForPlacement
struct ADunDefPlayerController_UseMouseIntersectionForPlacement_Params
{
};

// Function UDKGame.DunDefPlayerController.UseTowerPlacementLocation
struct ADunDefPlayerController_UseTowerPlacementLocation_Params
{
};

// Function UDKGame.DunDefPlayerController.SetTargetingTeam
struct ADunDefPlayerController_SetTargetingTeam_Params
{
};

// Function UDKGame.DunDefPlayerController.DoWeaponSwap
struct ADunDefPlayerController_DoWeaponSwap_Params
{
};

// Function UDKGame.DunDefPlayerController.ModifyJumpZ
struct ADunDefPlayerController_ModifyJumpZ_Params
{
};

// Function UDKGame.DunDefPlayerController.IsForceFeedbackAllowed
struct ADunDefPlayerController_IsForceFeedbackAllowed_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetWeaponInstigator
struct ADunDefPlayerController_ClientSetWeaponInstigator_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestWeaponInstigator
struct ADunDefPlayerController_ServerRequestWeaponInstigator_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientExecRPC
struct ADunDefPlayerController_ClientExecRPC_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerExecRPC
struct ADunDefPlayerController_ServerExecRPC_Params
{
};

// Function UDKGame.DunDefPlayerController.InFPV
struct ADunDefPlayerController_InFPV_Params
{
};

// Function UDKGame.DunDefPlayerController.InitPlayerReplicationInfo
struct ADunDefPlayerController_InitPlayerReplicationInfo_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerActivateCrystal
struct ADunDefPlayerController_ServerActivateCrystal_Params
{
};

// Function UDKGame.DunDefPlayerController.ResetBossTimers
struct ADunDefPlayerController_ResetBossTimers_Params
{
};

// Function UDKGame.DunDefPlayerController.ValidateStringConcat
struct ADunDefPlayerController_ValidateStringConcat_Params
{
};

// Function UDKGame.DunDefPlayerController.BossTimerSkip
struct ADunDefPlayerController_BossTimerSkip_Params
{
};

// Function UDKGame.DunDefPlayerController.KickAllSplits
struct ADunDefPlayerController_KickAllSplits_Params
{
};

// Function UDKGame.DunDefPlayerController.QuickAddSplits
struct ADunDefPlayerController_QuickAddSplits_Params
{
};

// Function UDKGame.DunDefPlayerController.ControlEmulatorPlayer4
struct ADunDefPlayerController_ControlEmulatorPlayer4_Params
{
};

// Function UDKGame.DunDefPlayerController.ControlEmulatorPlayer3
struct ADunDefPlayerController_ControlEmulatorPlayer3_Params
{
};

// Function UDKGame.DunDefPlayerController.ControlEmulatorPlayer2
struct ADunDefPlayerController_ControlEmulatorPlayer2_Params
{
};

// Function UDKGame.DunDefPlayerController.ControlEmulatorPlayer1
struct ADunDefPlayerController_ControlEmulatorPlayer1_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleSplitScreen
struct ADunDefPlayerController_ToggleSplitScreen_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleHysteresis
struct ADunDefPlayerController_ToggleHysteresis_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleItemCensor
struct ADunDefPlayerController_ToggleItemCensor_Params
{
};

// Function UDKGame.DunDefPlayerController.RepairAllTowers
struct ADunDefPlayerController_RepairAllTowers_Params
{
};

// Function UDKGame.DunDefPlayerController.UpgradeAllTowers
struct ADunDefPlayerController_UpgradeAllTowers_Params
{
};

// Function UDKGame.DunDefPlayerController.DowngradeAllTowers
struct ADunDefPlayerController_DowngradeAllTowers_Params
{
};

// Function UDKGame.DunDefPlayerController.ActivateCrystalForAllPlayers
struct ADunDefPlayerController_ActivateCrystalForAllPlayers_Params
{
};

// Function UDKGame.DunDefPlayerController.ActivateCrystal
struct ADunDefPlayerController_ActivateCrystal_Params
{
};

// Function UDKGame.DunDefPlayerController.PrivatelyDropAllMana
struct ADunDefPlayerController_PrivatelyDropAllMana_Params
{
};

// Function UDKGame.DunDefPlayerController.DropAllMana
struct ADunDefPlayerController_DropAllMana_Params
{
};

// Function UDKGame.DunDefPlayerController.AddCheats
struct ADunDefPlayerController_AddCheats_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleSpectator
struct ADunDefPlayerController_ToggleSpectator_Params
{
};

// Function UDKGame.DunDefPlayerController.UnlockCostume
struct ADunDefPlayerController_UnlockCostume_Params
{
};

// Function UDKGame.DunDefPlayerController.HackLoadingRankedHeroesFailed
struct ADunDefPlayerController_HackLoadingRankedHeroesFailed_Params
{
};

// Function UDKGame.DunDefPlayerController.HackLoadingRankedHeroesComplete
struct ADunDefPlayerController_HackLoadingRankedHeroesComplete_Params
{
};

// Function UDKGame.DunDefPlayerController.CanAllPlayersPlayOnline
struct ADunDefPlayerController_CanAllPlayersPlayOnline_Params
{
};

// Function UDKGame.DunDefPlayerController.PlayBeepSound
struct ADunDefPlayerController_PlayBeepSound_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerFinalTradeConfirmation
struct ADunDefPlayerController_ServerFinalTradeConfirmation_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientRequestFinalTradeConfirmation
struct ADunDefPlayerController_ClientRequestFinalTradeConfirmation_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowTradeUI
struct ADunDefPlayerController_ShowTradeUI_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerCancelTrade
struct ADunDefPlayerController_ServerCancelTrade_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestInitiateTrade
struct ADunDefPlayerController_ServerRequestInitiateTrade_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddTradeEquipment
struct ADunDefPlayerController_ClientAddTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientRemoveTradeEquipment
struct ADunDefPlayerController_ClientRemoveTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientUpdateTradeEquipment
struct ADunDefPlayerController_ClientUpdateTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddTradeEquipment
struct ADunDefPlayerController_ServerAddTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRemoveTradeEquipment
struct ADunDefPlayerController_ServerRemoveTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetTradeConfirmation
struct ADunDefPlayerController_ServerSetTradeConfirmation_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateTradeMana
struct ADunDefPlayerController_ServerUpdateTradeMana_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateTradeEquipment
struct ADunDefPlayerController_ServerUpdateTradeEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.GetCurrentToolTipActors
struct ADunDefPlayerController_GetCurrentToolTipActors_Params
{
};

// Function UDKGame.DunDefPlayerController.SetForceSpecatorMode
struct ADunDefPlayerController_SetForceSpecatorMode_Params
{
};

// Function UDKGame.DunDefPlayerController.AnyLocalPlayerWantsDamageNumbers
struct ADunDefPlayerController_AnyLocalPlayerWantsDamageNumbers_Params
{
};

// Function UDKGame.DunDefPlayerController.CanInvestMana
struct ADunDefPlayerController_CanInvestMana_Params
{
};

// Function UDKGame.DunDefPlayerController.CleanupPawn
struct ADunDefPlayerController_CleanupPawn_Params
{
};

// Function UDKGame.DunDefPlayerController.HasRecentlyFired
struct ADunDefPlayerController_HasRecentlyFired_Params
{
};

// Function UDKGame.DunDefPlayerController.GetRespawnTimeMultiplier
struct ADunDefPlayerController_GetRespawnTimeMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerController.GetLocalPlayer
struct ADunDefPlayerController_GetLocalPlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.AdjustSplitScreenName
struct ADunDefPlayerController_AdjustSplitScreenName_Params
{
};

// Function UDKGame.DunDefPlayerController.StartFire
struct ADunDefPlayerController_StartFire_Params
{
};

// Function UDKGame.DunDefPlayerController.SetForceCamTarget
struct ADunDefPlayerController_SetForceCamTarget_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientWeaponFired
struct ADunDefPlayerController_ClientWeaponFired_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientPlayForceFeedbackWaveform
struct ADunDefPlayerController_ClientPlayForceFeedbackWaveform_Params
{
};

// Function UDKGame.DunDefPlayerController.StartedPlayingMovie
struct ADunDefPlayerController_StartedPlayingMovie_Params
{
};

// Function UDKGame.DunDefPlayerController.IsMobile
struct ADunDefPlayerController_IsMobile_Params
{
};

// Function UDKGame.DunDefPlayerController.OnDLCRemoved
struct ADunDefPlayerController_OnDLCRemoved_Params
{
};

// Function UDKGame.DunDefPlayerController.ClearOnlineDelegates
struct ADunDefPlayerController_ClearOnlineDelegates_Params
{
};

// Function UDKGame.DunDefPlayerController.RegisterOnlineDelegates
struct ADunDefPlayerController_RegisterOnlineDelegates_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckDLCMasks
struct ADunDefPlayerController_CheckDLCMasks_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowWaitingForDLCMasksMessage
struct ADunDefPlayerController_ShowWaitingForDLCMasksMessage_Params
{
};

// Function UDKGame.DunDefPlayerController.RequestDLCMasks
struct ADunDefPlayerController_RequestDLCMasks_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientInitCompatibilityChecks
struct ADunDefPlayerController_ClientInitCompatibilityChecks_Params
{
};

// Function UDKGame.DunDefPlayerController.GenericBootToMenu
struct ADunDefPlayerController_GenericBootToMenu_Params
{
};

// Function UDKGame.DunDefPlayerController.HandleBootedByDLC
struct ADunDefPlayerController_HandleBootedByDLC_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileSetCursorToAutoTarget
struct ADunDefPlayerController_MobileSetCursorToAutoTarget_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileFireReleased
struct ADunDefPlayerController_MobileFireReleased_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileFirePressed
struct ADunDefPlayerController_MobileFirePressed_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileAltFireReleased
struct ADunDefPlayerController_MobileAltFireReleased_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileAltFirePressed
struct ADunDefPlayerController_MobileAltFirePressed_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileTouchTapped
struct ADunDefPlayerController_MobileTouchTapped_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileTouchUnHold
struct ADunDefPlayerController_MobileTouchUnHold_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileTouchHold
struct ADunDefPlayerController_MobileTouchHold_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileTouchPressed
struct ADunDefPlayerController_MobileTouchPressed_Params
{
};

// Function UDKGame.DunDefPlayerController.MobileTouchReleased
struct ADunDefPlayerController_MobileTouchReleased_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetUsingGamepadControl
struct ADunDefPlayerController_ServerSetUsingGamepadControl_Params
{
};

// Function UDKGame.DunDefPlayerController.SetUsingGamepadControl
struct ADunDefPlayerController_SetUsingGamepadControl_Params
{
};

// Function UDKGame.DunDefPlayerController.GetHeroManager
struct ADunDefPlayerController_GetHeroManager_Params
{
};

// Function UDKGame.DunDefPlayerController.GiveEquipmentToItemBox
struct ADunDefPlayerController_GiveEquipmentToItemBox_Params
{
};

// Function UDKGame.DunDefPlayerController.UpdateForOptions
struct ADunDefPlayerController_UpdateForOptions_Params
{
};

// Function UDKGame.DunDefPlayerController.IsPlayerOnMuteList
struct ADunDefPlayerController_IsPlayerOnMuteList_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUnmutePlayer
struct ADunDefPlayerController_ServerUnmutePlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerMutePlayer
struct ADunDefPlayerController_ServerMutePlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerInitiateMute
struct ADunDefPlayerController_ServerInitiateMute_Params
{
};

// Function UDKGame.DunDefPlayerController.UnmutePlayer
struct ADunDefPlayerController_UnmutePlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.MutePlayer
struct ADunDefPlayerController_MutePlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientMutePlayer
struct ADunDefPlayerController_ClientMutePlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRefreshMutingForTravel
struct ADunDefPlayerController_ServerRefreshMutingForTravel_Params
{
};

// Function UDKGame.DunDefPlayerController.GetTargetingTeam
struct ADunDefPlayerController_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientWasKicked
struct ADunDefPlayerController_ClientWasKicked_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetRichPresence
struct ADunDefPlayerController_ClientSetRichPresence_Params
{
};

// Function UDKGame.DunDefPlayerController.GetNumPlayersWhoPossessedPawns
struct ADunDefPlayerController_GetNumPlayersWhoPossessedPawns_Params
{
};

// Function UDKGame.DunDefPlayerController.HasAnyLocalPlayerPossessedPawn
struct ADunDefPlayerController_HasAnyLocalPlayerPossessedPawn_Params
{
};

// Function UDKGame.DunDefPlayerController.SetBankedMana
struct ADunDefPlayerController_SetBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.CalculateBankedMana
struct ADunDefPlayerController_CalculateBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.ReAdjustBankedMana
struct ADunDefPlayerController_ReAdjustBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.RemoveBankedMana
struct ADunDefPlayerController_RemoveBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.AddBankedMana
struct ADunDefPlayerController_AddBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyBankMana
struct ADunDefPlayerController_NotifyBankMana_Params
{
};

// Function UDKGame.DunDefPlayerController.GetBankedManaString
struct ADunDefPlayerController_GetBankedManaString_Params
{
};

// Function UDKGame.DunDefPlayerController.GetBankedMana
struct ADunDefPlayerController_GetBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.GetMaxManaItemBox
struct ADunDefPlayerController_GetMaxManaItemBox_Params
{
};

// Function UDKGame.DunDefPlayerController.GetBankedManaItemBox
struct ADunDefPlayerController_GetBankedManaItemBox_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyJoiningGameFromInvite
struct ADunDefPlayerController_NotifyJoiningGameFromInvite_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyNotEnoughSpaceInInvite
struct ADunDefPlayerController_NotifyNotEnoughSpaceInInvite_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyNotAllPlayersCanJoinInvite
struct ADunDefPlayerController_NotifyNotAllPlayersCanJoinInvite_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyInviteFailed
struct ADunDefPlayerController_NotifyInviteFailed_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyNotSameModeOnInvite
struct ADunDefPlayerController_NotifyNotSameModeOnInvite_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientNetOpenUIScene
struct ADunDefPlayerController_ClientNetOpenUIScene_Params
{
};

// Function UDKGame.DunDefPlayerController.CanReload
struct ADunDefPlayerController_CanReload_Params
{
};

// Function UDKGame.DunDefPlayerController.GetNumPlayersWhoHaveSpawned
struct ADunDefPlayerController_GetNumPlayersWhoHaveSpawned_Params
{
};

// Function UDKGame.DunDefPlayerController.DistributeManaAmongPlayers
struct ADunDefPlayerController_DistributeManaAmongPlayers_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddManaToBank
struct ADunDefPlayerController_ClientAddManaToBank_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddManaToBankHDI
struct ADunDefPlayerController_ClientAddManaToBankHDI_Params
{
};

// Function UDKGame.DunDefPlayerController.OnExternalUIChanged
struct ADunDefPlayerController_OnExternalUIChanged_Params
{
};

// Function UDKGame.DunDefPlayerController.OnGameInviteAccepted
struct ADunDefPlayerController_OnGameInviteAccepted_Params
{
};

// Function UDKGame.DunDefPlayerController.ModMapCheck
struct ADunDefPlayerController_ModMapCheck_Params
{
};

// Function UDKGame.DunDefPlayerController.OnInviteJoinComplete
struct ADunDefPlayerController_OnInviteJoinComplete_Params
{
};

// Function UDKGame.DunDefPlayerController.IsSameVersion
struct ADunDefPlayerController_IsSameVersion_Params
{
};

// Function UDKGame.DunDefPlayerController.IsSameMode
struct ADunDefPlayerController_IsSameMode_Params
{
};

// Function UDKGame.DunDefPlayerController.SetPause
struct ADunDefPlayerController_SetPause_Params
{
};

// Function UDKGame.DunDefPlayerController.OnControllerChanged
struct ADunDefPlayerController_OnControllerChanged_Params
{
};

// Function UDKGame.DunDefPlayerController.TryToAddToMetList
struct ADunDefPlayerController_TryToAddToMetList_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddToRecentPlayersList
struct ADunDefPlayerController_ClientAddToRecentPlayersList_Params
{
};

// Function UDKGame.DunDefPlayerController.IsHoldingToTalk
struct ADunDefPlayerController_IsHoldingToTalk_Params
{
};

// Function UDKGame.DunDefPlayerController.IsPrimaryAuthorityProfile
struct ADunDefPlayerController_IsPrimaryAuthorityProfile_Params
{
};

// Function UDKGame.DunDefPlayerController.IsPrimaryProfile
struct ADunDefPlayerController_IsPrimaryProfile_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientDoUnlockAchievment
struct ADunDefPlayerController_ClientDoUnlockAchievment_Params
{
};

// Function UDKGame.DunDefPlayerController.FlushOnlineStatsComplete
struct ADunDefPlayerController_FlushOnlineStatsComplete_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientWriteLeaderboardStats
struct ADunDefPlayerController_ClientWriteLeaderboardStats_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientWriteMidGameLeaderboardStats
struct ADunDefPlayerController_ClientWriteMidGameLeaderboardStats_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckBestStats
struct ADunDefPlayerController_CheckBestStats_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientBeginStatRecording
struct ADunDefPlayerController_ClientBeginStatRecording_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckUserIDForStats
struct ADunDefPlayerController_CheckUserIDForStats_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientReportGameStat
struct ADunDefPlayerController_ClientReportGameStat_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientCheckPushToTalk
struct ADunDefPlayerController_ClientCheckPushToTalk_Params
{
};

// Function UDKGame.DunDefPlayerController.SetStatsReadString
struct ADunDefPlayerController_SetStatsReadString_Params
{
};

// Function UDKGame.DunDefPlayerController.SetCurrentCampaignTag
struct ADunDefPlayerController_SetCurrentCampaignTag_Params
{
};

// Function UDKGame.DunDefPlayerController.SetCurrentDifficulty
struct ADunDefPlayerController_SetCurrentDifficulty_Params
{
};

// Function UDKGame.DunDefPlayerController.RetryLeaderboardWrite
struct ADunDefPlayerController_RetryLeaderboardWrite_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerMove
struct ADunDefPlayerController_ServerMove_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerMoveEx
struct ADunDefPlayerController_ServerMoveEx_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerMoveExWithLook
struct ADunDefPlayerController_ServerMoveExWithLook_Params
{
};

// Function UDKGame.DunDefPlayerController.DualServerMoveEx
struct ADunDefPlayerController_DualServerMoveEx_Params
{
};

// Function UDKGame.DunDefPlayerController.DualServerMoveExWithLook
struct ADunDefPlayerController_DualServerMoveExWithLook_Params
{
};

// Function UDKGame.DunDefPlayerController.CallServerMove
struct ADunDefPlayerController_CallServerMove_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientGotoState
struct ADunDefPlayerController_ClientGotoState_Params
{
};

// Function UDKGame.DunDefPlayerController.RegisterStatHero
struct ADunDefPlayerController_RegisterStatHero_Params
{
};

// Function UDKGame.DunDefPlayerController.IsInputDisabled
struct ADunDefPlayerController_IsInputDisabled_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPlayerViewPoint
struct ADunDefPlayerController_GetPlayerViewPoint_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerWantToSkipBuildPhase
struct ADunDefPlayerController_ServerWantToSkipBuildPhase_Params
{
};

// Function UDKGame.DunDefPlayerController.TryAutoCombatCamera
struct ADunDefPlayerController_TryAutoCombatCamera_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientEnteredCombatPhase
struct ADunDefPlayerController_ClientEnteredCombatPhase_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientEnteredBuildPhase
struct ADunDefPlayerController_ClientEnteredBuildPhase_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_EnteredCombatPhase
struct ADunDefPlayerController_Server_EnteredCombatPhase_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_EnteredBuildPhase
struct ADunDefPlayerController_Server_EnteredBuildPhase_Params
{
};

// Function UDKGame.DunDefPlayerController.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerController_AnimNotify_CurrentAbility_Off_Params
{
};

// Function UDKGame.DunDefPlayerController.AnimNotify_CurrentAbility_On
struct ADunDefPlayerController_AnimNotify_CurrentAbility_On_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerChangeToSmallestTeam
struct ADunDefPlayerController_ServerChangeToSmallestTeam_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientOpenUI
struct ADunDefPlayerController_ClientOpenUI_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyLoadedWorld
struct ADunDefPlayerController_NotifyLoadedWorld_Params
{
};

// Function UDKGame.DunDefPlayerController.SetDesiredLockedMovementAccel
struct ADunDefPlayerController_SetDesiredLockedMovementAccel_Params
{
};

// Function UDKGame.DunDefPlayerController.GoingToLockedMovementState
struct ADunDefPlayerController_GoingToLockedMovementState_Params
{
};

// Function UDKGame.DunDefPlayerController.PushLockedMovementState
struct ADunDefPlayerController_PushLockedMovementState_Params
{
};

// Function UDKGame.DunDefPlayerController.IsInLockedMovementState
struct ADunDefPlayerController_IsInLockedMovementState_Params
{
};

// Function UDKGame.DunDefPlayerController.PopLockedMovementState
struct ADunDefPlayerController_PopLockedMovementState_Params
{
};

// Function UDKGame.DunDefPlayerController.IsLockedMovementState
struct ADunDefPlayerController_IsLockedMovementState_Params
{
};

// Function UDKGame.DunDefPlayerController.StartCastingAbility
struct ADunDefPlayerController_StartCastingAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.IsCastingPlayerAbility
struct ADunDefPlayerController_IsCastingPlayerAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.IsInCastingState
struct ADunDefPlayerController_IsInCastingState_Params
{
};

// Function UDKGame.DunDefPlayerController.OnEndAbility
struct ADunDefPlayerController_OnEndAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.CanUseAbility
struct ADunDefPlayerController_CanUseAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.RemoveDisabledAbility
struct ADunDefPlayerController_RemoveDisabledAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.AddDisabledAbility
struct ADunDefPlayerController_AddDisabledAbility_Params
{
};

// Function UDKGame.DunDefPlayerController.AdjustDamage
struct ADunDefPlayerController_AdjustDamage_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowHeroLevelUp
struct ADunDefPlayerController_ShowHeroLevelUp_Params
{
};

// Function UDKGame.DunDefPlayerController.GetHeroMaxHealth
struct ADunDefPlayerController_GetHeroMaxHealth_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerApplyHeroModifiers
struct ADunDefPlayerController_ServerApplyHeroModifiers_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerApplyUpdatedHeroStats
struct ADunDefPlayerController_ServerApplyUpdatedHeroStats_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyLevelUp
struct ADunDefPlayerController_NotifyLevelUp_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateEquipmentName
struct ADunDefPlayerController_ServerUpdateEquipmentName_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateHeroName
struct ADunDefPlayerController_ServerUpdateHeroName_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerItemBoxDrop
struct ADunDefPlayerController_ServerItemBoxDrop_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddBuff
struct ADunDefPlayerController_ServerAddBuff_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateHeroEquipment
struct ADunDefPlayerController_ServerUpdateHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRemoveHeroEquipment
struct ADunDefPlayerController_ServerRemoveHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddHeroEquipment
struct ADunDefPlayerController_ServerAddHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetHeroNetInfo
struct ADunDefPlayerController_ServerSetHeroNetInfo_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerFinishedSendingHeroInitial
struct ADunDefPlayerController_ServerFinishedSendingHeroInitial_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerFinishedSendingHeroSwap
struct ADunDefPlayerController_ServerFinishedSendingHeroSwap_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddHeroEquipmentInitial
struct ADunDefPlayerController_ServerAddHeroEquipmentInitial_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyRemovedHeroEquipment
struct ADunDefPlayerController_NotifyRemovedHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyAddedHeroEquipment
struct ADunDefPlayerController_NotifyAddedHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_InitializeForHero
struct ADunDefPlayerController_Server_InitializeForHero_Params
{
};

// Function UDKGame.DunDefPlayerController.DestroyOldPawn
struct ADunDefPlayerController_DestroyOldPawn_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientActivateNetworkEvent
struct ADunDefPlayerController_ClientActivateNetworkEvent_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPlayerPawnArchetype
struct ADunDefPlayerController_GetPlayerPawnArchetype_Params
{
};

// Function UDKGame.DunDefPlayerController.GetDunDefPRI
struct ADunDefPlayerController_GetDunDefPRI_Params
{
};

// Function UDKGame.DunDefPlayerController.GetControllingMatinee
struct ADunDefPlayerController_GetControllingMatinee_Params
{
};

// Function UDKGame.DunDefPlayerController.SkippedMatinee
struct ADunDefPlayerController_SkippedMatinee_Params
{
};

// Function UDKGame.DunDefPlayerController.SkipMatinee
struct ADunDefPlayerController_SkipMatinee_Params
{
};

// Function UDKGame.DunDefPlayerController.IsInCinematic
struct ADunDefPlayerController_IsInCinematic_Params
{
};

// Function UDKGame.DunDefPlayerController.ForceNoBlackBox
struct ADunDefPlayerController_ForceNoBlackBox_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyHeal
struct ADunDefPlayerController_NotifyHeal_Params
{
};

// Function UDKGame.DunDefPlayerController.DoNotifyDirectorControl
struct ADunDefPlayerController_DoNotifyDirectorControl_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientNotifyDirectorControl
struct ADunDefPlayerController_ClientNotifyDirectorControl_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyDirectorControl
struct ADunDefPlayerController_NotifyDirectorControl_Params
{
};

// Function UDKGame.DunDefPlayerController.ResetAllGasTraps
struct ADunDefPlayerController_ResetAllGasTraps_Params
{
};

// Function UDKGame.DunDefPlayerController.ResetAllAbilityCooldowns
struct ADunDefPlayerController_ResetAllAbilityCooldowns_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_CancelAllAbilities
struct ADunDefPlayerController_Server_CancelAllAbilities_Params
{
};

// Function UDKGame.DunDefPlayerController.SpawnPlayerCamera
struct ADunDefPlayerController_SpawnPlayerCamera_Params
{
};

// Function UDKGame.DunDefPlayerController.SetLookTargetToReplicate
struct ADunDefPlayerController_SetLookTargetToReplicate_Params
{
};

// Function UDKGame.DunDefPlayerController.SetRotationToReplicate
struct ADunDefPlayerController_SetRotationToReplicate_Params
{
};

// Function UDKGame.DunDefPlayerController.ShouldTargetActor
struct ADunDefPlayerController_ShouldTargetActor_Params
{
};

// Function UDKGame.DunDefPlayerController.SetTargetingIndicatorPosition
struct ADunDefPlayerController_SetTargetingIndicatorPosition_Params
{
};

// Function UDKGame.DunDefPlayerController.IsOverGround
struct ADunDefPlayerController_IsOverGround_Params
{
};

// Function UDKGame.DunDefPlayerController.AllowTargetUpdating
struct ADunDefPlayerController_AllowTargetUpdating_Params
{
};

// Function UDKGame.DunDefPlayerController.DoPlayerMove
struct ADunDefPlayerController_DoPlayerMove_Params
{
};

// Function UDKGame.DunDefPlayerController.AllowAcceleration
struct ADunDefPlayerController_AllowAcceleration_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPlayerGroundSpeedModifier
struct ADunDefPlayerController_GetPlayerGroundSpeedModifier_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUpdateBankedMana
struct ADunDefPlayerController_ServerUpdateBankedMana_Params
{
};

// Function UDKGame.DunDefPlayerController.SetTargetingIndicatorHidden
struct ADunDefPlayerController_SetTargetingIndicatorHidden_Params
{
};

// Function UDKGame.DunDefPlayerController.SetTargetingIndicatorNormal
struct ADunDefPlayerController_SetTargetingIndicatorNormal_Params
{
};

// Function UDKGame.DunDefPlayerController.SetTargetingIndicatorOverEnemy
struct ADunDefPlayerController_SetTargetingIndicatorOverEnemy_Params
{
};

// Function UDKGame.DunDefPlayerController.SendInitialHeroDataToServer
struct ADunDefPlayerController_SendInitialHeroDataToServer_Params
{
};

// Function UDKGame.DunDefPlayerController.TrySendingStats
struct ADunDefPlayerController_TrySendingStats_Params
{
};

// Function UDKGame.DunDefPlayerController.TryRemoteIDRegistration
struct ADunDefPlayerController_TryRemoteIDRegistration_Params
{
};

// Function UDKGame.DunDefPlayerController.ReceivedPlayerReplicationInfo
struct ADunDefPlayerController_ReceivedPlayerReplicationInfo_Params
{
};

// Function UDKGame.DunDefPlayerController.UpdateGamepadControl
struct ADunDefPlayerController_UpdateGamepadControl_Params
{
};

// Function UDKGame.DunDefPlayerController.PostControllerIdChange
struct ADunDefPlayerController_PostControllerIdChange_Params
{
};

// Function UDKGame.DunDefPlayerController.PreControllerIdChange
struct ADunDefPlayerController_PreControllerIdChange_Params
{
};

// Function UDKGame.DunDefPlayerController.ReceivedPlayer
struct ADunDefPlayerController_ReceivedPlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowHeroSelectionUI
struct ADunDefPlayerController_ShowHeroSelectionUI_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRestartPlayer
struct ADunDefPlayerController_ServerRestartPlayer_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientPostLogin
struct ADunDefPlayerController_ClientPostLogin_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_PostLogin
struct ADunDefPlayerController_Server_PostLogin_Params
{
};

// Function UDKGame.DunDefPlayerController.GetNumLocalPlayerControllers
struct ADunDefPlayerController_GetNumLocalPlayerControllers_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPreviousSpectatee
struct ADunDefPlayerController_GetPreviousSpectatee_Params
{
};

// Function UDKGame.DunDefPlayerController.GetNextSpectatee
struct ADunDefPlayerController_GetNextSpectatee_Params
{
};

// Function UDKGame.DunDefPlayerController.StartSpectatorCamera
struct ADunDefPlayerController_StartSpectatorCamera_Params
{
};

// Function UDKGame.DunDefPlayerController.UpdateSpectatorMode
struct ADunDefPlayerController_UpdateSpectatorMode_Params
{
};

// Function UDKGame.DunDefPlayerController.EndSpectatorMode
struct ADunDefPlayerController_EndSpectatorMode_Params
{
};

// Function UDKGame.DunDefPlayerController.IsInSpectatorMode
struct ADunDefPlayerController_IsInSpectatorMode_Params
{
};

// Function UDKGame.DunDefPlayerController.HandleNoRespawn
struct ADunDefPlayerController_HandleNoRespawn_Params
{
};

// Function UDKGame.DunDefPlayerController.DoCheckRespawn
struct ADunDefPlayerController_DoCheckRespawn_Params
{
};

// Function UDKGame.DunDefPlayerController.LocalAttemptSpawn
struct ADunDefPlayerController_LocalAttemptSpawn_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckRespawn
struct ADunDefPlayerController_CheckRespawn_Params
{
};

// Function UDKGame.DunDefPlayerController.PrivateSetHero
struct ADunDefPlayerController_PrivateSetHero_Params
{
};

// Function UDKGame.DunDefPlayerController.GetHero
struct ADunDefPlayerController_GetHero_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_DestroyPlayerAbilities
struct ADunDefPlayerController_Server_DestroyPlayerAbilities_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_CreatePlayerAbilities
struct ADunDefPlayerController_Server_CreatePlayerAbilities_Params
{
};

// Function UDKGame.DunDefPlayerController.GetAbilityByName
struct ADunDefPlayerController_GetAbilityByName_Params
{
};

// Function UDKGame.DunDefPlayerController.GetAbilityByClass
struct ADunDefPlayerController_GetAbilityByClass_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetHUD
struct ADunDefPlayerController_ClientSetHUD_Params
{
};

// Function UDKGame.DunDefPlayerController.CreateHUD
struct ADunDefPlayerController_CreateHUD_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckForPlayerWaiting
struct ADunDefPlayerController_CheckForPlayerWaiting_Params
{
};

// Function UDKGame.DunDefPlayerController.PlayerTick
struct ADunDefPlayerController_PlayerTick_Params
{
};

// Function UDKGame.DunDefPlayerController.DropAllEquipment
struct ADunDefPlayerController_DropAllEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.DoRespawnEffect
struct ADunDefPlayerController_DoRespawnEffect_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyHealthChange
struct ADunDefPlayerController_NotifyHealthChange_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientNotifyTakeHit
struct ADunDefPlayerController_ClientNotifyTakeHit_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyTakeHit
struct ADunDefPlayerController_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientActivation
struct ADunDefPlayerController_ClientActivation_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestActivation
struct ADunDefPlayerController_ServerRequestActivation_Params
{
};

// Function UDKGame.DunDefPlayerController.FindBestActivatableActor
struct ADunDefPlayerController_FindBestActivatableActor_Params
{
};

// Function UDKGame.DunDefPlayerController.ShouldDrawGameplayCursor
struct ADunDefPlayerController_ShouldDrawGameplayCursor_Params
{
};

// Function UDKGame.DunDefPlayerController.DrawHUD
struct ADunDefPlayerController_DrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerController.AllowCameraRotation
struct ADunDefPlayerController_AllowCameraRotation_Params
{
};

// Function UDKGame.DunDefPlayerController.IsWithinNonSplitScreenOverlayDist
struct ADunDefPlayerController_IsWithinNonSplitScreenOverlayDist_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestDestroy
struct ADunDefPlayerController_ServerRequestDestroy_Params
{
};

// Function UDKGame.DunDefPlayerController.AddFloatingDamageEntryInvincible
struct ADunDefPlayerController_AddFloatingDamageEntryInvincible_Params
{
};

// Function UDKGame.DunDefPlayerController.AddFloatingDamageEntry
struct ADunDefPlayerController_AddFloatingDamageEntry_Params
{
};

// Function UDKGame.DunDefPlayerController.FinishQuitToMainMenu
struct ADunDefPlayerController_FinishQuitToMainMenu_Params
{
};

// Function UDKGame.DunDefPlayerController.OnDestroyOnlineGameComplete
struct ADunDefPlayerController_OnDestroyOnlineGameComplete_Params
{
};

// Function UDKGame.DunDefPlayerController.OnEndOnlineGameComplete
struct ADunDefPlayerController_OnEndOnlineGameComplete_Params
{
};

// Function UDKGame.DunDefPlayerController.GetSessionName
struct ADunDefPlayerController_GetSessionName_Params
{
};

// Function UDKGame.DunDefPlayerController.CleanupOnlineSubsystemSession
struct ADunDefPlayerController_CleanupOnlineSubsystemSession_Params
{
};

// Function UDKGame.DunDefPlayerController.QuitToMainMenu
struct ADunDefPlayerController_QuitToMainMenu_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddToScore
struct ADunDefPlayerController_ClientAddToScore_Params
{
};

// Function UDKGame.DunDefPlayerController.AddToScore
struct ADunDefPlayerController_AddToScore_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientTeleported
struct ADunDefPlayerController_ClientTeleported_Params
{
};

// Function UDKGame.DunDefPlayerController.OnTeleport
struct ADunDefPlayerController_OnTeleport_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyManaChanged
struct ADunDefPlayerController_NotifyManaChanged_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckManaPlayerStat
struct ADunDefPlayerController_CheckManaPlayerStat_Params
{
};

// Function UDKGame.DunDefPlayerController.AddManaPower
struct ADunDefPlayerController_AddManaPower_Params
{
};

// Function UDKGame.DunDefPlayerController.CanAffordMana
struct ADunDefPlayerController_CanAffordMana_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerCollectManaToken
struct ADunDefPlayerController_ServerCollectManaToken_Params
{
};

// Function UDKGame.DunDefPlayerController.CanDoInput
struct ADunDefPlayerController_CanDoInput_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckForStartWave
struct ADunDefPlayerController_CheckForStartWave_Params
{
};

// Function UDKGame.DunDefPlayerController.NoGRICheck
struct ADunDefPlayerController_NoGRICheck_Params
{
};

// Function UDKGame.DunDefPlayerController.PostBeginPlay
struct ADunDefPlayerController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerController.Cleanup
struct ADunDefPlayerController_Cleanup_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAboutToTravel
struct ADunDefPlayerController_ClientAboutToTravel_Params
{
};

// Function UDKGame.DunDefPlayerController.GetSeamlessTravelActorList
struct ADunDefPlayerController_GetSeamlessTravelActorList_Params
{
};

// Function UDKGame.DunDefPlayerController.SeamlessTravelFrom
struct ADunDefPlayerController_SeamlessTravelFrom_Params
{
};

// Function UDKGame.DunDefPlayerController.PreClientTravel
struct ADunDefPlayerController_PreClientTravel_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSwappedHeroes
struct ADunDefPlayerController_ServerSwappedHeroes_Params
{
};

// Function UDKGame.DunDefPlayerController.PawnDied
struct ADunDefPlayerController_PawnDied_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientCheckToApplyLocalLevelUps
struct ADunDefPlayerController_ClientCheckToApplyLocalLevelUps_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerClearAutoAimTarget
struct ADunDefPlayerController_ServerClearAutoAimTarget_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetAutoAimTarget
struct ADunDefPlayerController_ServerSetAutoAimTarget_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestManualReplication
struct ADunDefPlayerController_ServerRequestManualReplication_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientProcessReplicateEquipmentData
struct ADunDefPlayerController_ClientProcessReplicateEquipmentData_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRefreshSetupScreen
struct ADunDefPlayerController_ServerRefreshSetupScreen_Params
{
};

// Function UDKGame.DunDefPlayerController.UpdateProgressToServer
struct ADunDefPlayerController_UpdateProgressToServer_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddBeaten
struct ADunDefPlayerController_ServerAddBeaten_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerAddProgress
struct ADunDefPlayerController_ServerAddProgress_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerUnregisterRemoteID
struct ADunDefPlayerController_ServerUnregisterRemoteID_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetUserNickname
struct ADunDefPlayerController_ClientSetUserNickname_Params
{
};

// Function UDKGame.DunDefPlayerController.WaitForNickname
struct ADunDefPlayerController_WaitForNickname_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetRemoteID
struct ADunDefPlayerController_ClientSetRemoteID_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRegisterRemoteID
struct ADunDefPlayerController_ServerRegisterRemoteID_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerGetUniqueIDToRegister
struct ADunDefPlayerController_ServerGetUniqueIDToRegister_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientRestart
struct ADunDefPlayerController_ClientRestart_Params
{
};

// Function UDKGame.DunDefPlayerController.AcknowledgePossession
struct ADunDefPlayerController_AcknowledgePossession_Params
{
};

// Function UDKGame.DunDefPlayerController.Possess
struct ADunDefPlayerController_Possess_Params
{
};

// Function UDKGame.DunDefPlayerController.EnterStartState
struct ADunDefPlayerController_EnterStartState_Params
{
};

// Function UDKGame.DunDefPlayerController.Server_CheckTowerAssociations
struct ADunDefPlayerController_Server_CheckTowerAssociations_Params
{
};

// Function UDKGame.DunDefPlayerController.AdjustControlSchemeForOptions
struct ADunDefPlayerController_AdjustControlSchemeForOptions_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPawnDistance
struct ADunDefPlayerController_GetPawnDistance_Params
{
};

// Function UDKGame.DunDefPlayerController.NotifyLeaving
struct ADunDefPlayerController_NotifyLeaving_Params
{
};

// Function UDKGame.DunDefPlayerController.DestroyOwnedTowers
struct ADunDefPlayerController_DestroyOwnedTowers_Params
{
};

// Function UDKGame.DunDefPlayerController.TransferTowersOwnership
struct ADunDefPlayerController_TransferTowersOwnership_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerExecuteCommand
struct ADunDefPlayerController_ServerExecuteCommand_Params
{
};

// Function UDKGame.DunDefPlayerController.UpdateStateFromAdjustment
struct ADunDefPlayerController_UpdateStateFromAdjustment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddBuffToGame
struct ADunDefPlayerController_ClientAddBuffToGame_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientUpdateRemoteHeroEquipment
struct ADunDefPlayerController_ClientUpdateRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientRemoveRemoteHeroEquipment
struct ADunDefPlayerController_ClientRemoveRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientAddRemoteHeroEquipment
struct ADunDefPlayerController_ClientAddRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerController.ClientSetRemoteHeroInfo
struct ADunDefPlayerController_ClientSetRemoteHeroInfo_Params
{
};

// Function UDKGame.DunDefPlayerController.ActivateHotKey
struct ADunDefPlayerController_ActivateHotKey_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyTen
struct ADunDefPlayerController_HotKeyTen_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyNine
struct ADunDefPlayerController_HotKeyNine_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyEight
struct ADunDefPlayerController_HotKeyEight_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeySeven
struct ADunDefPlayerController_HotKeySeven_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeySix
struct ADunDefPlayerController_HotKeySix_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyFive
struct ADunDefPlayerController_HotKeyFive_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyFour
struct ADunDefPlayerController_HotKeyFour_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyThree
struct ADunDefPlayerController_HotKeyThree_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyTwo
struct ADunDefPlayerController_HotKeyTwo_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyOne
struct ADunDefPlayerController_HotKeyOne_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyBind
struct ADunDefPlayerController_HotKeyBind_Params
{
};

// Function UDKGame.DunDefPlayerController.HotKeyOff
struct ADunDefPlayerController_HotKeyOff_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckAlternateActivation
struct ADunDefPlayerController_CheckAlternateActivation_Params
{
};

// Function UDKGame.DunDefPlayerController.CheckActivation
struct ADunDefPlayerController_CheckActivation_Params
{
};

// Function UDKGame.DunDefPlayerController.IsActionWheelVisible
struct ADunDefPlayerController_IsActionWheelVisible_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerCallOutOff
struct ADunDefPlayerController_ServerCallOutOff_Params
{
};

// Function UDKGame.DunDefPlayerController.CallOutOff
struct ADunDefPlayerController_CallOutOff_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerCallOutOn
struct ADunDefPlayerController_ServerCallOutOn_Params
{
};

// Function UDKGame.DunDefPlayerController.CallOutOn
struct ADunDefPlayerController_CallOutOn_Params
{
};

// Function UDKGame.DunDefPlayerController.UseCalloutOverrideLoc
struct ADunDefPlayerController_UseCalloutOverrideLoc_Params
{
};

// Function UDKGame.DunDefPlayerController.GetCalloutOverrideLoc
struct ADunDefPlayerController_GetCalloutOverrideLoc_Params
{
};

// Function UDKGame.DunDefPlayerController.ToggleActionWheelExec
struct ADunDefPlayerController_ToggleActionWheelExec_Params
{
};

// Function UDKGame.DunDefPlayerController.ZoomCameraOut
struct ADunDefPlayerController_ZoomCameraOut_Params
{
};

// Function UDKGame.DunDefPlayerController.ZoomCameraIn
struct ADunDefPlayerController_ZoomCameraIn_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetPlacementTowerRangeScaler
struct ADunDefPlayerController_ServerSetPlacementTowerRangeScaler_Params
{
};

// Function UDKGame.DunDefPlayerController.CyclePlacementTowerRadius
struct ADunDefPlayerController_CyclePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerController.IncreasePlacementTowerRadius
struct ADunDefPlayerController_IncreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerController.DecreasePlacementTowerRadius
struct ADunDefPlayerController_DecreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerController.ShowMyHeroInfo
struct ADunDefPlayerController_ShowMyHeroInfo_Params
{
};

// Function UDKGame.DunDefPlayerController.CycleZoom
struct ADunDefPlayerController_CycleZoom_Params
{
};

// Function UDKGame.DunDefPlayerController.DoJump
struct ADunDefPlayerController_DoJump_Params
{
};

// Function UDKGame.DunDefPlayerController.HasMaxMana
struct ADunDefPlayerController_HasMaxMana_Params
{
};

// Function UDKGame.DunDefPlayerController.RequestAddMana
struct ADunDefPlayerController_RequestAddMana_Params
{
};

// Function UDKGame.DunDefPlayerController.RequestSpendMana
struct ADunDefPlayerController_RequestSpendMana_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestAddMana
struct ADunDefPlayerController_ServerRequestAddMana_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerRequestSpendMana
struct ADunDefPlayerController_ServerRequestSpendMana_Params
{
};

// Function UDKGame.DunDefPlayerController.SetInForgeUI
struct ADunDefPlayerController_SetInForgeUI_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerSetInForgeUI
struct ADunDefPlayerController_ServerSetInForgeUI_Params
{
};

// Function UDKGame.DunDefPlayerController.Logout
struct ADunDefPlayerController_Logout_Params
{
};

// Function UDKGame.DunDefPlayerController.Login
struct ADunDefPlayerController_Login_Params
{
};

// Function UDKGame.DunDefPlayerController.EndedMovie
struct ADunDefPlayerController_EndedMovie_Params
{
};

// Function UDKGame.DunDefPlayerController.Pause
struct ADunDefPlayerController_Pause_Params
{
};

// Function UDKGame.DunDefPlayerController.GetNearestPlayerWithinRange
struct ADunDefPlayerController_GetNearestPlayerWithinRange_Params
{
};

// Function UDKGame.DunDefPlayerController.ServerDropMana
struct ADunDefPlayerController_ServerDropMana_Params
{
};

// Function UDKGame.DunDefPlayerController.DropMana
struct ADunDefPlayerController_DropMana_Params
{
};

// Function UDKGame.DunDefPlayerController.AddBankMana
struct ADunDefPlayerController_AddBankMana_Params
{
};

// Function UDKGame.DunDefPlayerController.VerifyEquipmentName
struct ADunDefPlayerController_VerifyEquipmentName_Params
{
};

// Function UDKGame.DunDefPlayerController.VerifyHeroName
struct ADunDefPlayerController_VerifyHeroName_Params
{
};

// Function UDKGame.DunDefPlayerController.SaveForEveryone
struct ADunDefPlayerController_SaveForEveryone_Params
{
};

// Function UDKGame.DunDefPlayerController.SaveHeroes
struct ADunDefPlayerController_SaveHeroes_Params
{
};

// Function UDKGame.DunDefPlayerController.TestWaveStatMultiplier
struct ADunDefPlayerController_TestWaveStatMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerController.StopHovering
struct ADunDefPlayerController_StopHovering_Params
{
};

// Function UDKGame.DunDefPlayerController.StartHovering
struct ADunDefPlayerController_StartHovering_Params
{
};

// Function UDKGame.DunDefPlayerController.JumpReleased
struct ADunDefPlayerController_JumpReleased_Params
{
};

// Function UDKGame.DunDefPlayerController.JumpPressed
struct ADunDefPlayerController_JumpPressed_Params
{
};

// Function UDKGame.DunDefPlayerController.KeyboardInputDone
struct ADunDefPlayerController_KeyboardInputDone_Params
{
};

// Function UDKGame.DunDefPlayerController.ForceTargetingCursor
struct ADunDefPlayerController_ForceTargetingCursor_Params
{
};

// Function UDKGame.DunDefPlayerController.GetPlacingTowerCameraOffset
struct ADunDefPlayerController_GetPlacingTowerCameraOffset_Params
{
};

// Function UDKGame.DunDefPlayerController.GetClassFromString
struct ADunDefPlayerController_GetClassFromString_Params
{
};

// Function UDKGame.DunDefPlayerController.ReplicatedEvent
struct ADunDefPlayerController_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RemoveBuffFromGame
struct ADunDefGameReplicationInfo_RemoveBuffFromGame_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddBuffToGame
struct ADunDefGameReplicationInfo_AddBuffToGame_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetMaxPlayers
struct ADunDefGameReplicationInfo_GetMaxPlayers_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsAtLobbyLevel
struct ADunDefGameReplicationInfo_IsAtLobbyLevel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetFinalWaveNumber
struct ADunDefGameReplicationInfo_GetFinalWaveNumber_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetWaveNumber
struct ADunDefGameReplicationInfo_GetWaveNumber_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsInHardCoreMode
struct ADunDefGameReplicationInfo_IsInHardCoreMode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AnalyticsReport
struct ADunDefGameReplicationInfo_AnalyticsReport_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.EnemyDied
struct ADunDefGameReplicationInfo_EnemyDied_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetOverLordXYBounds
struct ADunDefGameReplicationInfo_GetOverLordXYBounds_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetMaxMinOverlordHeight
struct ADunDefGameReplicationInfo_GetMaxMinOverlordHeight_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ForceAFKShop
struct ADunDefGameReplicationInfo_ForceAFKShop_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetAFKShopMode
struct ADunDefGameReplicationInfo_SetAFKShopMode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowActivatingCrystal
struct ADunDefGameReplicationInfo_AllowActivatingCrystal_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowPlayerSpawn
struct ADunDefGameReplicationInfo_AllowPlayerSpawn_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DrawExtraEnemyMinimapIcon
struct ADunDefGameReplicationInfo_DrawExtraEnemyMinimapIcon_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetWeaponProjectileSpeedBonusMultiplier
struct ADunDefGameReplicationInfo_GetWeaponProjectileSpeedBonusMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTrapRangeMultiplier
struct ADunDefGameReplicationInfo_GetTrapRangeMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetAuraRangeMultiplier
struct ADunDefGameReplicationInfo_GetAuraRangeMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetEnemyLifeSpanMultiplier
struct ADunDefGameReplicationInfo_GetEnemyLifeSpanMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerHealCostMultiplier
struct ADunDefGameReplicationInfo_GetPlayerHealCostMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerHealthMultiplier
struct ADunDefGameReplicationInfo_GetPlayerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetMinimumEqulityDropQualityMultiplier
struct ADunDefGameReplicationInfo_GetMinimumEqulityDropQualityMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTowerHealthMultiplier
struct ADunDefGameReplicationInfo_GetTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTrapDamageMultiplier
struct ADunDefGameReplicationInfo_GetTrapDamageMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTrapHealthMultiplier
struct ADunDefGameReplicationInfo_GetTrapHealthMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetStrengthDrainAuraMultiplier
struct ADunDefGameReplicationInfo_GetStrengthDrainAuraMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetAuraDamageMultiplier
struct ADunDefGameReplicationInfo_GetAuraDamageMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetAuraHealthMultiplier
struct ADunDefGameReplicationInfo_GetAuraHealthMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGlobalPhysicalTowerDamageMultiplier
struct ADunDefGameReplicationInfo_GetGlobalPhysicalTowerDamageMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerDamageResistanceMultiplier
struct ADunDefGameReplicationInfo_GetPlayerDamageResistanceMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetEnemySpeedMultiplier
struct ADunDefGameReplicationInfo_GetEnemySpeedMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetEnemyHealthMultiplier
struct ADunDefGameReplicationInfo_GetEnemyHealthMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetEnemyDamageMultiplier
struct ADunDefGameReplicationInfo_GetEnemyDamageMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerDamageMultiplier
struct ADunDefGameReplicationInfo_GetPlayerDamageMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetJumpZMultiplier
struct ADunDefGameReplicationInfo_GetJumpZMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ModifyCustomColors
struct ADunDefGameReplicationInfo_ModifyCustomColors_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ExtraDrawHUDInterface
struct ADunDefGameReplicationInfo_ExtraDrawHUDInterface_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CustomUpdatePlayerScoreLabel
struct ADunDefGameReplicationInfo_CustomUpdatePlayerScoreLabel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ModifyPlayerAirSpeed
struct ADunDefGameReplicationInfo_ModifyPlayerAirSpeed_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ModifyPlayerGroundSpeed
struct ADunDefGameReplicationInfo_ModifyPlayerGroundSpeed_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGameOverLabelColor
struct ADunDefGameReplicationInfo_GetGameOverLabelColor_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetVictoryLabelColor
struct ADunDefGameReplicationInfo_GetVictoryLabelColor_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGameOverLabelString
struct ADunDefGameReplicationInfo_GetGameOverLabelString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetVictoryLabelString
struct ADunDefGameReplicationInfo_GetVictoryLabelString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.OverrideEndGameLabel
struct ADunDefGameReplicationInfo_OverrideEndGameLabel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DrawnMiniMap
struct ADunDefGameReplicationInfo_DrawnMiniMap_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTeamIcon
struct ADunDefGameReplicationInfo_GetTeamIcon_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsTeamCompetitive
struct ADunDefGameReplicationInfo_IsTeamCompetitive_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowChatBetween
struct ADunDefGameReplicationInfo_AllowChatBetween_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DrawExtraPlayerFloatingHUD
struct ADunDefGameReplicationInfo_DrawExtraPlayerFloatingHUD_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowedToTeleport
struct ADunDefGameReplicationInfo_AllowedToTeleport_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetExtraKnockbackMultiplier
struct ADunDefGameReplicationInfo_GetExtraKnockbackMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoDropEquipmentUponPlayerDeath
struct ADunDefGameReplicationInfo_DoDropEquipmentUponPlayerDeath_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoUseScoreLabel
struct ADunDefGameReplicationInfo_DoUseScoreLabel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UseScoreLabel
struct ADunDefGameReplicationInfo_UseScoreLabel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetCastRateMultiplier
struct ADunDefGameReplicationInfo_GetCastRateMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerAbilityStatusOverride
struct ADunDefGameReplicationInfo_GetPlayerAbilityStatusOverride_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UsePlayerAbilityStatusOverride
struct ADunDefGameReplicationInfo_UsePlayerAbilityStatusOverride_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddGRIActionWheelEntries
struct ADunDefGameReplicationInfo_AddGRIActionWheelEntries_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.Server_AddGRIHeroAbilities
struct ADunDefGameReplicationInfo_Server_AddGRIHeroAbilities_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetProjectileLimitDistance
struct ADunDefGameReplicationInfo_GetProjectileLimitDistance_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsDisplayingLoadingScreen
struct ADunDefGameReplicationInfo_IsDisplayingLoadingScreen_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetWinningPRI
struct ADunDefGameReplicationInfo_GetWinningPRI_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowDeathSpectatorMode
struct ADunDefGameReplicationInfo_AllowDeathSpectatorMode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanDropBankedMana
struct ADunDefGameReplicationInfo_CanDropBankedMana_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowPlayerDamage
struct ADunDefGameReplicationInfo_AllowPlayerDamage_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.StaticIsCompetitive
struct ADunDefGameReplicationInfo_StaticIsCompetitive_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsCompetitive
struct ADunDefGameReplicationInfo_IsCompetitive_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DestroyTowerOnOwnerLeft
struct ADunDefGameReplicationInfo_DestroyTowerOnOwnerLeft_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowEquipmentDrops
struct ADunDefGameReplicationInfo_AllowEquipmentDrops_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsNonLobbyBuildPhase
struct ADunDefGameReplicationInfo_IsNonLobbyBuildPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsGameplayFinished
struct ADunDefGameReplicationInfo_IsGameplayFinished_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsTheGameplayFinished
struct ADunDefGameReplicationInfo_IsTheGameplayFinished_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AtCapacity
struct ADunDefGameReplicationInfo_AtCapacity_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowSplitscreenJoin
struct ADunDefGameReplicationInfo_AllowSplitscreenJoin_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsInCinematic
struct ADunDefGameReplicationInfo_IsInCinematic_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetLevelFriendlyName
struct ADunDefGameReplicationInfo_GetLevelFriendlyName_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetLevelFriendlyNameWithoutFormatting
struct ADunDefGameReplicationInfo_GetLevelFriendlyNameWithoutFormatting_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CheckDLCCompatibility
struct ADunDefGameReplicationInfo_CheckDLCCompatibility_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AreDLCMasksUpToDate
struct ADunDefGameReplicationInfo_AreDLCMasksUpToDate_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ResetForNewMap
struct ADunDefGameReplicationInfo_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanBankManaOnExit
struct ADunDefGameReplicationInfo_CanBankManaOnExit_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsInGameplayLevel
struct ADunDefGameReplicationInfo_IsInGameplayLevel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsInLobbyLevel
struct ADunDefGameReplicationInfo_IsInLobbyLevel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.QueueStatsSending
struct ADunDefGameReplicationInfo_QueueStatsSending_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetScoreMultiplier
struct ADunDefGameReplicationInfo_GetScoreMultiplier_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGameOverString
struct ADunDefGameReplicationInfo_GetGameOverString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetStatReceiveProgress
struct ADunDefGameReplicationInfo_SetStatReceiveProgress_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetScoreAwardMultiplierString
struct ADunDefGameReplicationInfo_GetScoreAwardMultiplierString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetScoreAwardString
struct ADunDefGameReplicationInfo_GetScoreAwardString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetScoreAwardSpeed
struct ADunDefGameReplicationInfo_GetScoreAwardSpeed_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AwardWaveCompletion
struct ADunDefGameReplicationInfo_AwardWaveCompletion_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetTimeBonusSecondsInterval
struct ADunDefGameReplicationInfo_GetTimeBonusSecondsInterval_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddStrategistCount
struct ADunDefGameReplicationInfo_AddStrategistCount_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddGunslingerCount
struct ADunDefGameReplicationInfo_AddGunslingerCount_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UsedTowerToHurt
struct ADunDefGameReplicationInfo_UsedTowerToHurt_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UsedWeaponToHurt
struct ADunDefGameReplicationInfo_UsedWeaponToHurt_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PlayerTookDamage
struct ADunDefGameReplicationInfo_PlayerTookDamage_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ResetWaveBonusChecks
struct ADunDefGameReplicationInfo_ResetWaveBonusChecks_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ViewportTick
struct ADunDefGameReplicationInfo_ViewportTick_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PlayerStoppedTalking
struct ADunDefGameReplicationInfo_PlayerStoppedTalking_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PlayerStartedTalking
struct ADunDefGameReplicationInfo_PlayerStartedTalking_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.VoiceDeviceAdded
struct ADunDefGameReplicationInfo_VoiceDeviceAdded_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AllowLevelUps
struct ADunDefGameReplicationInfo_AllowLevelUps_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DontUseMana
struct ADunDefGameReplicationInfo_DontUseMana_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetHostsName
struct ADunDefGameReplicationInfo_GetHostsName_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetSpectatorWaitString
struct ADunDefGameReplicationInfo_GetSpectatorWaitString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.IsLevelVictory
struct ADunDefGameReplicationInfo_IsLevelVictory_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetDataListEntries
struct ADunDefGameReplicationInfo_GetDataListEntries_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ActivateCustomEvent
struct ADunDefGameReplicationInfo_ActivateCustomEvent_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetMissionObjective
struct ADunDefGameReplicationInfo_SetMissionObjective_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetPlayerRespawnTime
struct ADunDefGameReplicationInfo_GetPlayerRespawnTime_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoUseFamiliarAbilities
struct ADunDefGameReplicationInfo_DoUseFamiliarAbilities_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.WeaponsEnabled
struct ADunDefGameReplicationInfo_WeaponsEnabled_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetDisableWeaponry
struct ADunDefGameReplicationInfo_SetDisableWeaponry_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetDisableTowerPlacementAndRepair
struct ADunDefGameReplicationInfo_SetDisableTowerPlacementAndRepair_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DidAnyoneLocalPossessPawns
struct ADunDefGameReplicationInfo_DidAnyoneLocalPossessPawns_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetStatsScene
struct ADunDefGameReplicationInfo_GetStatsScene_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShowStatsScene
struct ADunDefGameReplicationInfo_ShowStatsScene_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoGameOver
struct ADunDefGameReplicationInfo_DoGameOver_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.FindCustomNodeWithinRange
struct ADunDefGameReplicationInfo_FindCustomNodeWithinRange_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.FindCustomNode
struct ADunDefGameReplicationInfo_FindCustomNode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGRI
struct ADunDefGameReplicationInfo_GetGRI_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.HealAllPlayers
struct ADunDefGameReplicationInfo_HealAllPlayers_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SellAllTowers
struct ADunDefGameReplicationInfo_SellAllTowers_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RefreshLeaderboardSign
struct ADunDefGameReplicationInfo_RefreshLeaderboardSign_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UpdateTowerIter
struct ADunDefGameReplicationInfo_UpdateTowerIter_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanTowerUpdate
struct ADunDefGameReplicationInfo_CanTowerUpdate_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RemoveTowerForCanUpdate
struct ADunDefGameReplicationInfo_RemoveTowerForCanUpdate_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddTowerForCanUpdate
struct ADunDefGameReplicationInfo_AddTowerForCanUpdate_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UpdateFunctionExpense
struct ADunDefGameReplicationInfo_UpdateFunctionExpense_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RequestExpensiveFunction
struct ADunDefGameReplicationInfo_RequestExpensiveFunction_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetLastItemDropValues
struct ADunDefGameReplicationInfo_SetLastItemDropValues_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetupLeaderBoardTimer
struct ADunDefGameReplicationInfo_SetupLeaderBoardTimer_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetupVictoryShopEquipments
struct ADunDefGameReplicationInfo_SetupVictoryShopEquipments_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoLevelVictory
struct ADunDefGameReplicationInfo_DoLevelVictory_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PlayLevelVictoryMusic
struct ADunDefGameReplicationInfo_PlayLevelVictoryMusic_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetNumAlivePlayers
struct ADunDefGameReplicationInfo_GetNumAlivePlayers_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.StaticCanEnterSpectatorMode
struct ADunDefGameReplicationInfo_StaticCanEnterSpectatorMode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanEnterSpectatorMode
struct ADunDefGameReplicationInfo_CanEnterSpectatorMode_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.StaticCanRespawnPlayer
struct ADunDefGameReplicationInfo_StaticCanRespawnPlayer_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetIsInCombatPhase
struct ADunDefGameReplicationInfo_GetIsInCombatPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanRespawnPlayer
struct ADunDefGameReplicationInfo_CanRespawnPlayer_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoUseBuildTimer
struct ADunDefGameReplicationInfo_DoUseBuildTimer_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RefreshBuildSkips
struct ADunDefGameReplicationInfo_RefreshBuildSkips_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetNumPlayersWantingToSkipBuildPhase
struct ADunDefGameReplicationInfo_GetNumPlayersWantingToSkipBuildPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetGameDifficultyAsInt
struct ADunDefGameReplicationInfo_GetGameDifficultyAsInt_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShouldDisableInput
struct ADunDefGameReplicationInfo_ShouldDisableInput_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CheckBadCollisions
struct ADunDefGameReplicationInfo_CheckBadCollisions_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CheckStaticMeshesForBadCollision
struct ADunDefGameReplicationInfo_CheckStaticMeshesForBadCollision_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SendStats
struct ADunDefGameReplicationInfo_SendStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.StopCollectingStats
struct ADunDefGameReplicationInfo_StopCollectingStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ReportAwards
struct ADunDefGameReplicationInfo_ReportAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShouldShowAwards
struct ADunDefGameReplicationInfo_ShouldShowAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CalculateAwards
struct ADunDefGameReplicationInfo_CalculateAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PruneFirstWaveAwards
struct ADunDefGameReplicationInfo_PruneFirstWaveAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CountAwards
struct ADunDefGameReplicationInfo_CountAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CheckAwards
struct ADunDefGameReplicationInfo_CheckAwards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddPlayerAwardStats
struct ADunDefGameReplicationInfo_AddPlayerAwardStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ReadToShowStats
struct ADunDefGameReplicationInfo_ReadToShowStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ReadyToSendStats
struct ADunDefGameReplicationInfo_ReadyToSendStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SendAllPlayerStats
struct ADunDefGameReplicationInfo_SendAllPlayerStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CreateLobbyEquipment
struct ADunDefGameReplicationInfo_CreateLobbyEquipment_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PostBeginPlay
struct ADunDefGameReplicationInfo_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShopExpire
struct ADunDefGameReplicationInfo_ShopExpire_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.Destroyed
struct ADunDefGameReplicationInfo_Destroyed_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DoTravelVisuals
struct ADunDefGameReplicationInfo_DoTravelVisuals_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.CanPlaceTowerUnitCost
struct ADunDefGameReplicationInfo_CanPlaceTowerUnitCost_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RemovedTower
struct ADunDefGameReplicationInfo_RemovedTower_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetMaxTowerUnits
struct ADunDefGameReplicationInfo_GetMaxTowerUnits_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetAltCurrentTowerUnits
struct ADunDefGameReplicationInfo_GetAltCurrentTowerUnits_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetCurrentTowerUnits
struct ADunDefGameReplicationInfo_GetCurrentTowerUnits_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddedTower
struct ADunDefGameReplicationInfo_AddedTower_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.LoadMission
struct ADunDefGameReplicationInfo_LoadMission_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.LoadLevel
struct ADunDefGameReplicationInfo_LoadLevel_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UpdateRichPresence
struct ADunDefGameReplicationInfo_UpdateRichPresence_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClearTalkingDelegates
struct ADunDefGameReplicationInfo_ClearTalkingDelegates_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClientEndGame
struct ADunDefGameReplicationInfo_ClientEndGame_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetViewportClient
struct ADunDefGameReplicationInfo_GetViewportClient_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.Pause
struct ADunDefGameReplicationInfo_Pause_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionActorParam
struct ADunDefGameReplicationInfo_MulticastFunctionActorParam_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionNameParam
struct ADunDefGameReplicationInfo_MulticastFunctionNameParam_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionByteParam
struct ADunDefGameReplicationInfo_MulticastFunctionByteParam_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionFloatParam
struct ADunDefGameReplicationInfo_MulticastFunctionFloatParam_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionVectorAndByteParams
struct ADunDefGameReplicationInfo_MulticastFunctionVectorAndByteParams_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionVectorParam
struct ADunDefGameReplicationInfo_MulticastFunctionVectorParam_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunctionNoParams
struct ADunDefGameReplicationInfo_MulticastFunctionNoParams_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.MulticastFunction
struct ADunDefGameReplicationInfo_MulticastFunction_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShouldGameplayDrawCursor
struct ADunDefGameReplicationInfo_ShouldGameplayDrawCursor_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddCustomFloatingText
struct ADunDefGameReplicationInfo_AddCustomFloatingText_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddFloatingDamageEntryInvincible
struct ADunDefGameReplicationInfo_AddFloatingDamageEntryInvincible_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddFloatingDamageEntry
struct ADunDefGameReplicationInfo_AddFloatingDamageEntry_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.Server_AddFloatingDamageEntry
struct ADunDefGameReplicationInfo_Server_AddFloatingDamageEntry_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.DrawTalkers
struct ADunDefGameReplicationInfo_DrawTalkers_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PostRender
struct ADunDefGameReplicationInfo_PostRender_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UpdateGameOver
struct ADunDefGameReplicationInfo_UpdateGameOver_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.Tick
struct ADunDefGameReplicationInfo_Tick_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.GetSkipBuildPhaseString
struct ADunDefGameReplicationInfo_GetSkipBuildPhaseString_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RefreshBillboards
struct ADunDefGameReplicationInfo_RefreshBillboards_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RefreshEnemyWaveEntries
struct ADunDefGameReplicationInfo_RefreshEnemyWaveEntries_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.LogEquipmentStats
struct ADunDefGameReplicationInfo_LogEquipmentStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ShutdownAllTrapFX
struct ADunDefGameReplicationInfo_ShutdownAllTrapFX_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.BeganCombatPhase
struct ADunDefGameReplicationInfo_BeganCombatPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.EndedCombatPhase
struct ADunDefGameReplicationInfo_EndedCombatPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetInCombatPhase
struct ADunDefGameReplicationInfo_SetInCombatPhase_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.NetworkedHUDMessage
struct ADunDefGameReplicationInfo_NetworkedHUDMessage_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ExecReplicatedFunction
struct ADunDefGameReplicationInfo_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetWaveNumber
struct ADunDefGameReplicationInfo_SetWaveNumber_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SetAllowNonOwnerItemPickups
struct ADunDefGameReplicationInfo_SetAllowNonOwnerItemPickups_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ReplicatedEvent
struct ADunDefGameReplicationInfo_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.FindPCByStatName
struct ADunDefGameReplicationInfo_FindPCByStatName_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.FindRemoteUserID
struct ADunDefGameReplicationInfo_FindRemoteUserID_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.UnpackPlayerStats
struct ADunDefGameReplicationInfo_UnpackPlayerStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.SendStatsInfo
struct ADunDefGameReplicationInfo_SendStatsInfo_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.PreparePlayerStats
struct ADunDefGameReplicationInfo_PreparePlayerStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.RemovePlayerStats
struct ADunDefGameReplicationInfo_RemovePlayerStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClientRegisterProjectileKillAtIndex
struct ADunDefGameReplicationInfo_ClientRegisterProjectileKillAtIndex_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ServerGetProjectileKillIndex
struct ADunDefGameReplicationInfo_ServerGetProjectileKillIndex_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClientProjectileDeath
struct ADunDefGameReplicationInfo_ClientProjectileDeath_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClientGetPlayerStatName
struct ADunDefGameReplicationInfo_ClientGetPlayerStatName_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.ClientAddPlayerStats
struct ADunDefGameReplicationInfo_ClientAddPlayerStats_Params
{
};

// Function UDKGame.DunDefGameReplicationInfo.AddPlayerStats
struct ADunDefGameReplicationInfo_AddPlayerStats_Params
{
};

// Function UDKGame.DunDefHUD.DrawChatMessageText
struct ADunDefHUD_DrawChatMessageText_Params
{
};

// Function UDKGame.DunDefHUD.Message
struct ADunDefHUD_Message_Params
{
};

// Function UDKGame.DunDefHUD.GetHUDCanvasScale
struct ADunDefHUD_GetHUDCanvasScale_Params
{
};

// Function UDKGame.DunDefHUD.DrawKeyBind
struct ADunDefHUD_DrawKeyBind_Params
{
};

// Function UDKGame.DunDefHUD.DrawActivationNotification
struct ADunDefHUD_DrawActivationNotification_Params
{
};

// Function UDKGame.DunDefHUD.GetFontSizeIndex
struct ADunDefHUD_GetFontSizeIndex_Params
{
};

// Function UDKGame.DunDefHUD.SetMobileTouchCoordinates
struct ADunDefHUD_SetMobileTouchCoordinates_Params
{
};

// Function UDKGame.DunDefHUD.TurnOffSpectatorMode
struct ADunDefHUD_TurnOffSpectatorMode_Params
{
};

// Function UDKGame.DunDefHUD.UpdateForSpectactorCamera
struct ADunDefHUD_UpdateForSpectactorCamera_Params
{
};

// Function UDKGame.DunDefHUD.DrawMessageText
struct ADunDefHUD_DrawMessageText_Params
{
};

// Function UDKGame.DunDefHUD.PostRender
struct ADunDefHUD_PostRender_Params
{
};

// Function UDKGame.DunDefHUD.GetMouseCoordinatesVec
struct ADunDefHUD_GetMouseCoordinatesVec_Params
{
};

// Function UDKGame.DunDefHUD.SetAbsoluteMouseCoordinates
struct ADunDefHUD_SetAbsoluteMouseCoordinates_Params
{
};

// Function UDKGame.DunDefHUD.SetMouseCoordinates
struct ADunDefHUD_SetMouseCoordinates_Params
{
};

// Function UDKGame.DunDefHUD.GetScreenCenter
struct ADunDefHUD_GetScreenCenter_Params
{
};

// Function UDKGame.DunDefHUD.GetMouseCoordinates
struct ADunDefHUD_GetMouseCoordinates_Params
{
};

// Function UDKGame.DunDefHUD.Destroyed
struct ADunDefHUD_Destroyed_Params
{
};

// Function UDKGame.DunDefHUD.ToggleHUD
struct ADunDefHUD_ToggleHUD_Params
{
};

// Function UDKGame.DunDefHUD.SetHUDHidden
struct ADunDefHUD_SetHUDHidden_Params
{
};

// Function UDKGame.DunDefHUD.AddToScore
struct ADunDefHUD_AddToScore_Params
{
};

// Function UDKGame.DunDefHUD.GetHUDAspectRatio
struct ADunDefHUD_GetHUDAspectRatio_Params
{
};

// Function UDKGame.DunDefHUD.IsOnScreen
struct ADunDefHUD_IsOnScreen_Params
{
};

// Function UDKGame.DunDefHUD.IsOnTopOfCanvas
struct ADunDefHUD_IsOnTopOfCanvas_Params
{
};

// Function UDKGame.DunDefHUD.IsOnBottomOfCanvas
struct ADunDefHUD_IsOnBottomOfCanvas_Params
{
};

// Function UDKGame.DunDefHUD.IsOnRightOfCanvas
struct ADunDefHUD_IsOnRightOfCanvas_Params
{
};

// Function UDKGame.DunDefHUD.IsOnLeftOfCanvas
struct ADunDefHUD_IsOnLeftOfCanvas_Params
{
};

// Function UDKGame.DunDefHUD.NotifyLevelUp
struct ADunDefHUD_NotifyLevelUp_Params
{
};

// Function UDKGame.DunDefHUD.UpdateNotificationColor
struct ADunDefHUD_UpdateNotificationColor_Params
{
};

// Function UDKGame.DunDefHUD.ShowMajorNotificationLabelCompleted
struct ADunDefHUD_ShowMajorNotificationLabelCompleted_Params
{
};

// Function UDKGame.DunDefHUD.ShowMajorNotificationLabel
struct ADunDefHUD_ShowMajorNotificationLabel_Params
{
};

// Function UDKGame.DunDefHUD.ShowProgressBar
struct ADunDefHUD_ShowProgressBar_Params
{
};

// Function UDKGame.DunDefHUD.NotifyExperienceChange
struct ADunDefHUD_NotifyExperienceChange_Params
{
};

// Function UDKGame.DunDefHUD.NotifyHealthChange
struct ADunDefHUD_NotifyHealthChange_Params
{
};

// Function UDKGame.DunDefHUD.NotifyUpdateManaPower
struct ADunDefHUD_NotifyUpdateManaPower_Params
{
};

// Function UDKGame.DunDefHUD.ResetValues
struct ADunDefHUD_ResetValues_Params
{
};

// Function UDKGame.DunDefHUD.NotifyDied
struct ADunDefHUD_NotifyDied_Params
{
};

// Function UDKGame.DunDefHUD.OpenActionWheelByEntryName
struct ADunDefHUD_OpenActionWheelByEntryName_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelSetHotKey
struct ADunDefHUD_ActionWheelSetHotKey_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelUpdateInput
struct ADunDefHUD_ActionWheelUpdateInput_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelProcessBack
struct ADunDefHUD_ActionWheelProcessBack_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelProcessSelection
struct ADunDefHUD_ActionWheelProcessSelection_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelIsVisible
struct ADunDefHUD_ActionWheelIsVisible_Params
{
};

// Function UDKGame.DunDefHUD.ActionWheelToggle
struct ADunDefHUD_ActionWheelToggle_Params
{
};

// Function UDKGame.DunDefHUD.DrawHUD
struct ADunDefHUD_DrawHUD_Params
{
};

// Function UDKGame.DunDefHUD.InitActionWheel
struct ADunDefHUD_InitActionWheel_Params
{
};

// Function UDKGame.DunDefHUD.UpdateForOptions
struct ADunDefHUD_UpdateForOptions_Params
{
};

// Function UDKGame.DunDefHUD.PostBeginPlay
struct ADunDefHUD_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefUIScene.CinematicCompleted
struct UDunDefUIScene_CinematicCompleted_Params
{
};

// Function UDKGame.DunDefUIScene.UseFastMenuTransitions
struct UDunDefUIScene_UseFastMenuTransitions_Params
{
};

// Function UDKGame.DunDefUIScene.AllowOverlays
struct UDunDefUIScene_AllowOverlays_Params
{
};

// Function UDKGame.DunDefUIScene.CloseByPauseMenu
struct UDunDefUIScene_CloseByPauseMenu_Params
{
};

// Function UDKGame.DunDefUIScene.AllowInputAlias
struct UDunDefUIScene_AllowInputAlias_Params
{
};

// Function UDKGame.DunDefUIScene.SetCustomValueForKismet
struct UDunDefUIScene_SetCustomValueForKismet_Params
{
};

// Function UDKGame.DunDefUIScene.FirstSignedInController
struct UDunDefUIScene_FirstSignedInController_Params
{
};

// Function UDKGame.DunDefUIScene.AnyoneSignedIn
struct UDunDefUIScene_AnyoneSignedIn_Params
{
};

// Function UDKGame.DunDefUIScene.CheckLogin
struct UDunDefUIScene_CheckLogin_Params
{
};

// Function UDKGame.DunDefUIScene.HasAcceptedSignInPrompt
struct UDunDefUIScene_HasAcceptedSignInPrompt_Params
{
};

// Function UDKGame.DunDefUIScene.CustomInit
struct UDunDefUIScene_CustomInit_Params
{
};

// Function UDKGame.DunDefUIScene.OnWidgetClicked
struct UDunDefUIScene_OnWidgetClicked_Params
{
};

// Function UDKGame.DunDefUIScene.SetGamepadBindingHandleInputEnabled
struct UDunDefUIScene_SetGamepadBindingHandleInputEnabled_Params
{
};

// Function UDKGame.DunDefUIScene.SetGamepadBindingsEnabled
struct UDunDefUIScene_SetGamepadBindingsEnabled_Params
{
};

// Function UDKGame.DunDefUIScene.ForceClickWidget
struct UDunDefUIScene_ForceClickWidget_Params
{
};

// Function UDKGame.DunDefUIScene.OnInterceptedInputKey
struct UDunDefUIScene_OnInterceptedInputKey_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyLevelVictory
struct UDunDefUIScene_NotifyLevelVictory_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyGameOver
struct UDunDefUIScene_NotifyGameOver_Params
{
};

// Function UDKGame.DunDefUIScene.GetOwnerPawn
struct UDunDefUIScene_GetOwnerPawn_Params
{
};

// Function UDKGame.DunDefUIScene.GetOwnerHero
struct UDunDefUIScene_GetOwnerHero_Params
{
};

// Function UDKGame.DunDefUIScene.OnLabelChange
struct UDunDefUIScene_OnLabelChange_Params
{
};

// Function UDKGame.DunDefUIScene.SetupLabelDelegates
struct UDunDefUIScene_SetupLabelDelegates_Params
{
};

// Function UDKGame.DunDefUIScene.IsInParty
struct UDunDefUIScene_IsInParty_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyPhaseChange
struct UDunDefUIScene_NotifyPhaseChange_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyPlayerLeft
struct UDunDefUIScene_NotifyPlayerLeft_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyLocalPlayerRemoved
struct UDunDefUIScene_NotifyLocalPlayerRemoved_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyLocalPlayerAdded
struct UDunDefUIScene_NotifyLocalPlayerAdded_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyPlayerJoined
struct UDunDefUIScene_NotifyPlayerJoined_Params
{
};

// Function UDKGame.DunDefUIScene.ShowUIKeyboard
struct UDunDefUIScene_ShowUIKeyboard_Params
{
};

// Function UDKGame.DunDefUIScene.KeyboardInputRejected
struct UDunDefUIScene_KeyboardInputRejected_Params
{
};

// Function UDKGame.DunDefUIScene.KeyboardInputDone
struct UDunDefUIScene_KeyboardInputDone_Params
{
};

// Function UDKGame.DunDefUIScene.EditBoxPopUpCompleted
struct UDunDefUIScene_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.DunDefUIScene.EvaluateKeyboardInput
struct UDunDefUIScene_EvaluateKeyboardInput_Params
{
};

// Function UDKGame.DunDefUIScene.PostInitialSceneUpdate
struct UDunDefUIScene_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.DunDefUIScene.KillToolTip
struct UDunDefUIScene_KillToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyActiveToolTip
struct UDunDefUIScene_NotifyActiveToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.InitializeToolTip
struct UDunDefUIScene_InitializeToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.FindLabelToolTip
struct UDunDefUIScene_FindLabelToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.DrawToolTip
struct UDunDefUIScene_DrawToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.SupportsDraggedOntoItem
struct UDunDefUIScene_SupportsDraggedOntoItem_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyDraggedEvent
struct UDunDefUIScene_NotifyDraggedEvent_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyEquipmentChanged
struct UDunDefUIScene_NotifyEquipmentChanged_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyManaChanged
struct UDunDefUIScene_NotifyManaChanged_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyPlayerTakeHit
struct UDunDefUIScene_NotifyPlayerTakeHit_Params
{
};

// Function UDKGame.DunDefUIScene.ClearPlayerControllerInputs
struct UDunDefUIScene_ClearPlayerControllerInputs_Params
{
};

// Function UDKGame.DunDefUIScene.HideScene
struct UDunDefUIScene_HideScene_Params
{
};

// Function UDKGame.DunDefUIScene.UnhideScene
struct UDunDefUIScene_UnhideScene_Params
{
};

// Function UDKGame.DunDefUIScene.IsPaused
struct UDunDefUIScene_IsPaused_Params
{
};

// Function UDKGame.DunDefUIScene.ReplicateToNewPlayerController
struct UDunDefUIScene_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.DunDefUIScene.ExecReplicatedUIMessage
struct UDunDefUIScene_ExecReplicatedUIMessage_Params
{
};

// Function UDKGame.DunDefUIScene.InitReplicationInfo
struct UDunDefUIScene_InitReplicationInfo_Params
{
};

// Function UDKGame.DunDefUIScene.SceneDeactivated
struct UDunDefUIScene_SceneDeactivated_Params
{
};

// Function UDKGame.DunDefUIScene.CloseWithoutAnimation
struct UDunDefUIScene_CloseWithoutAnimation_Params
{
};

// Function UDKGame.DunDefUIScene.GetOpenAnimation
struct UDunDefUIScene_GetOpenAnimation_Params
{
};

// Function UDKGame.DunDefUIScene.GetCloseAnimation
struct UDunDefUIScene_GetCloseAnimation_Params
{
};

// Function UDKGame.DunDefUIScene.CloseWithAnimation
struct UDunDefUIScene_CloseWithAnimation_Params
{
};

// Function UDKGame.DunDefUIScene.NotifyWidgetClicked
struct UDunDefUIScene_NotifyWidgetClicked_Params
{
};

// Function UDKGame.DunDefUIScene.GetViewportYScaleTo768
struct UDunDefUIScene_GetViewportYScaleTo768_Params
{
};

// Function UDKGame.DunDefUIScene.GetViewportXScaleTo1024
struct UDunDefUIScene_GetViewportXScaleTo1024_Params
{
};

// Function UDKGame.DunDefUIScene.GetViewportClient
struct UDunDefUIScene_GetViewportClient_Params
{
};

// Function UDKGame.DunDefUIScene.GetFinalOpacity
struct UDunDefUIScene_GetFinalOpacity_Params
{
};

// Function UDKGame.DunDefUIScene.CheckUnusedFocus
struct UDunDefUIScene_CheckUnusedFocus_Params
{
};

// Function UDKGame.DunDefUIScene.Update
struct UDunDefUIScene_Update_Params
{
};

// Function UDKGame.DunDefUIScene.GetToolTipPositioning
struct UDunDefUIScene_GetToolTipPositioning_Params
{
};

// Function UDKGame.DunDefUIScene.DoHideScene
struct UDunDefUIScene_DoHideScene_Params
{
};

// Function UDKGame.DunDefUIScene.IsGamepadOwned
struct UDunDefUIScene_IsGamepadOwned_Params
{
};

// Function UDKGame.DunDefUIScene.UseGamePadControl
struct UDunDefUIScene_UseGamePadControl_Params
{
};

// Function UDKGame.DunDefUIScene.IsTopLevelScene
struct UDunDefUIScene_IsTopLevelScene_Params
{
};

// Function UDKGame.DunDefUIScene.GiveFocusToAnyChild
struct UDunDefUIScene_GiveFocusToAnyChild_Params
{
};

// Function UDKGame.DunDefUIScene.FollowMouse
struct UDunDefUIScene_FollowMouse_Params
{
};

// Function UDKGame.DunDefUIScene.RepositionToolTip
struct UDunDefUIScene_RepositionToolTip_Params
{
};

// Function UDKGame.DunDefUIScene.DunDefGetSequenceLength
struct UDunDefUIScene_DunDefGetSequenceLength_Params
{
};

// Function UDKGame.DunDefUIScene.LoadSequences
struct UDunDefUIScene_LoadSequences_Params
{
};

// Function UDKGame.DunDefUIScene.UpdateImagesMaterial
struct UDunDefUIScene_UpdateImagesMaterial_Params
{
};

// Function UDKGame.DunDefUIScene.AllowGlobalVisibilityToggling
struct UDunDefUIScene_AllowGlobalVisibilityToggling_Params
{
};

// Function UDKGame.DunDefUIScene.PostRender
struct UDunDefUIScene_PostRender_Params
{
};

// Function UDKGame.DunDefUIScene.RenderGamepadKey
struct UDunDefUIScene_RenderGamepadKey_Params
{
};

// Function UDKGame.DunDefUIScene.UpdateGamePadBindings
struct UDunDefUIScene_UpdateGamePadBindings_Params
{
};

// Function UDKGame.DunDefUIScene.OnPostEditChange
struct UDunDefUIScene_OnPostEditChange_Params
{
};

// Function UDKGame.DunDefUIScene.SetUIScalePercent
struct UDunDefUIScene_SetUIScalePercent_Params
{
};

// Function UDKGame.DunDefUIScene.SceneActivated
struct UDunDefUIScene_SceneActivated_Params
{
};

// Function UDKGame.DunDefUIScene.OnReceivedInputKey
struct UDunDefUIScene_OnReceivedInputKey_Params
{
};

// Function UDKGame.DunDefUIScene.ReleaseInputKey
struct UDunDefUIScene_ReleaseInputKey_Params
{
};

// Function UDKGame.DunDefUIScene.GetGRI
struct UDunDefUIScene_GetGRI_Params
{
};

// Function UDKGame.DunDefUIScene.GetTheHeroManager
struct UDunDefUIScene_GetTheHeroManager_Params
{
};

// Function UDKGame.DunDefUIScene.GetVPClient
struct UDunDefUIScene_GetVPClient_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyLevelVictory
struct UUI_PlayerHUD_NotifyLevelVictory_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyWidgetClicked
struct UUI_PlayerHUD_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_PlayerHUD.OnReceivedInputKey
struct UUI_PlayerHUD_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_PlayerHUD.SetMobileTouchCoordinates
struct UUI_PlayerHUD_SetMobileTouchCoordinates_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateMobileTouchCoordinates
struct UUI_PlayerHUD_UpdateMobileTouchCoordinates_Params
{
};

// Function UDKGame.UI_PlayerHUD.IsMobile
struct UUI_PlayerHUD_IsMobile_Params
{
};

// Function UDKGame.UI_PlayerHUD.ShowStatusPanel
struct UUI_PlayerHUD_ShowStatusPanel_Params
{
};

// Function UDKGame.UI_PlayerHUD.HideStatusPanel
struct UUI_PlayerHUD_HideStatusPanel_Params
{
};

// Function UDKGame.UI_PlayerHUD.Update
struct UUI_PlayerHUD_Update_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateMobileInput
struct UUI_PlayerHUD_UpdateMobileInput_Params
{
};

// Function UDKGame.UI_PlayerHUD.DisplayMissionObjective
struct UUI_PlayerHUD_DisplayMissionObjective_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateMissionObjectiveTimer
struct UUI_PlayerHUD_UpdateMissionObjectiveTimer_Params
{
};

// Function UDKGame.UI_PlayerHUD.TurnOffSpectatorMode
struct UUI_PlayerHUD_TurnOffSpectatorMode_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateForSpectactorCamera
struct UUI_PlayerHUD_UpdateForSpectactorCamera_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyAddedBankedMana
struct UUI_PlayerHUD_NotifyAddedBankedMana_Params
{
};

// Function UDKGame.UI_PlayerHUD.AddToScore
struct UUI_PlayerHUD_AddToScore_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyExperienceChange
struct UUI_PlayerHUD_NotifyExperienceChange_Params
{
};

// Function UDKGame.UI_PlayerHUD.CheckHeroCanLevelUp
struct UUI_PlayerHUD_CheckHeroCanLevelUp_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyNameChange
struct UUI_PlayerHUD_NotifyNameChange_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyLevelUp
struct UUI_PlayerHUD_NotifyLevelUp_Params
{
};

// Function UDKGame.UI_PlayerHUD.GetHero
struct UUI_PlayerHUD_GetHero_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyHealthChange
struct UUI_PlayerHUD_NotifyHealthChange_Params
{
};

// Function UDKGame.UI_PlayerHUD.RefreshPostEffectBinding
struct UUI_PlayerHUD_RefreshPostEffectBinding_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyLocalPlayerRemoved
struct UUI_PlayerHUD_NotifyLocalPlayerRemoved_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyLocalPlayerAdded
struct UUI_PlayerHUD_NotifyLocalPlayerAdded_Params
{
};

// Function UDKGame.UI_PlayerHUD.NotifyUpdateManaPower
struct UUI_PlayerHUD_NotifyUpdateManaPower_Params
{
};

// Function UDKGame.UI_PlayerHUD.SceneDeactivated
struct UUI_PlayerHUD_SceneDeactivated_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateLowHealthEffect
struct UUI_PlayerHUD_UpdateLowHealthEffect_Params
{
};

// Function UDKGame.UI_PlayerHUD.RefreshBuildPhaseValue
struct UUI_PlayerHUD_RefreshBuildPhaseValue_Params
{
};

// Function UDKGame.UI_PlayerHUD.ResetValues
struct UUI_PlayerHUD_ResetValues_Params
{
};

// Function UDKGame.UI_PlayerHUD.InitHUDUI
struct UUI_PlayerHUD_InitHUDUI_Params
{
};

// Function UDKGame.UI_PlayerHUD.ShowMajorNotificationLabelCompleted
struct UUI_PlayerHUD_ShowMajorNotificationLabelCompleted_Params
{
};

// Function UDKGame.UI_PlayerHUD.UpdateNotificationColor
struct UUI_PlayerHUD_UpdateNotificationColor_Params
{
};

// Function UDKGame.UI_PlayerHUD.ShowMajorNotificationLabel
struct UUI_PlayerHUD_ShowMajorNotificationLabel_Params
{
};

// Function UDKGame.UI_PlayerHUD.ShowProgressBar
struct UUI_PlayerHUD_ShowProgressBar_Params
{
};

// Function UDKGame.Main.EnemyDied
struct AMain_EnemyDied_Params
{
};

// Function UDKGame.Main.AddWaveSpawnerToTick
struct AMain_AddWaveSpawnerToTick_Params
{
};

// Function UDKGame.Main.WaveSpawnerCreateEnemy
struct AMain_WaveSpawnerCreateEnemy_Params
{
};

// Function UDKGame.Main.CloseKillCountUI
struct AMain_CloseKillCountUI_Params
{
};

// Function UDKGame.Main.OpenedKillCountUI
struct AMain_OpenedKillCountUI_Params
{
};

// Function UDKGame.Main.GetCrystalCoreHealthMultiplier
struct AMain_GetCrystalCoreHealthMultiplier_Params
{
};

// Function UDKGame.Main.GetGlobalPhysicalTowerHealthMultiplier
struct AMain_GetGlobalPhysicalTowerHealthMultiplier_Params
{
};

// Function UDKGame.Main.AdjustPawnDamage
struct AMain_AdjustPawnDamage_Params
{
};

// Function UDKGame.Main.AdjustDTDamage
struct AMain_AdjustDTDamage_Params
{
};

// Function UDKGame.Main.PlayerReplicationInfoInitialized
struct AMain_PlayerReplicationInfoInitialized_Params
{
};

// Function UDKGame.Main.AllowCheats
struct AMain_AllowCheats_Params
{
};

// Function UDKGame.Main.GetPlayerEnemyKillStat
struct AMain_GetPlayerEnemyKillStat_Params
{
};

// Function UDKGame.Main.GetTreasureManaDropMultiplier
struct AMain_GetTreasureManaDropMultiplier_Params
{
};

// Function UDKGame.Main.GetRandomEnemyTemplate
struct AMain_GetRandomEnemyTemplate_Params
{
};

// Function UDKGame.Main.ModifyEnemyWaveEntries
struct AMain_ModifyEnemyWaveEntries_Params
{
};

// Function UDKGame.Main.GetEnemyTargetingTeam
struct AMain_GetEnemyTargetingTeam_Params
{
};

// Function UDKGame.Main.PawnPossessedBy
struct AMain_PawnPossessedBy_Params
{
};

// Function UDKGame.Main.ReduceDamage
struct AMain_ReduceDamage_Params
{
};

// Function UDKGame.Main.SetStatsWriteClass
struct AMain_SetStatsWriteClass_Params
{
};

// Function UDKGame.Main.Heartbeat
struct AMain_Heartbeat_Params
{
};

// Function UDKGame.Main.Tick
struct AMain_Tick_Params
{
};

// Function UDKGame.Main.GetPlayerCorpseLifespan
struct AMain_GetPlayerCorpseLifespan_Params
{
};

// Function UDKGame.Main.GetTutorialFlag
struct AMain_GetTutorialFlag_Params
{
};

// Function UDKGame.Main.ClearTutorialFlags
struct AMain_ClearTutorialFlags_Params
{
};

// Function UDKGame.Main.SetTutorialFlag
struct AMain_SetTutorialFlag_Params
{
};

// Function UDKGame.Main.IsTutorialMode
struct AMain_IsTutorialMode_Params
{
};

// Function UDKGame.Main.ShouldSpawnAtStartSpot
struct AMain_ShouldSpawnAtStartSpot_Params
{
};

// Function UDKGame.Main.ProceedToNextCampaignLevel
struct AMain_ProceedToNextCampaignLevel_Params
{
};

// Function UDKGame.Main.GetRegisteredWaveEntriesKillCount
struct AMain_GetRegisteredWaveEntriesKillCount_Params
{
};

// Function UDKGame.Main.GetMain
struct AMain_GetMain_Params
{
};

// Function UDKGame.Main.IsUnderEnemyCap
struct AMain_IsUnderEnemyCap_Params
{
};

// Function UDKGame.Main.InitGame
struct AMain_InitGame_Params
{
};

// Function UDKGame.Main.StartWithMana
struct AMain_StartWithMana_Params
{
};

// Function UDKGame.Main.AddManaAfterRespawn
struct AMain_AddManaAfterRespawn_Params
{
};

// Function UDKGame.Main.IsCompetitiveGameType
struct AMain_IsCompetitiveGameType_Params
{
};

// Function UDKGame.Main.SetGameType
struct AMain_SetGameType_Params
{
};

// Function UDKGame.Main.GetDefaultGameClassPath
struct AMain_GetDefaultGameClassPath_Params
{
};

// Function UDKGame.Main.RemoveExcessItems
struct AMain_RemoveExcessItems_Params
{
};

// Function UDKGame.Main.CheckForExcessiveDroppedEquipment
struct AMain_CheckForExcessiveDroppedEquipment_Params
{
};

// Function UDKGame.Main.UpdateGlobalHeroModifiers
struct AMain_UpdateGlobalHeroModifiers_Params
{
};

// Function UDKGame.Main.GetPlayerIndex
struct AMain_GetPlayerIndex_Params
{
};

// Function UDKGame.Main.SendPlayerStats
struct AMain_SendPlayerStats_Params
{
};

// Function UDKGame.Main.PostLogin
struct AMain_PostLogin_Params
{
};

// Function UDKGame.Main.GetPrimaryLocalPlayerController
struct AMain_GetPrimaryLocalPlayerController_Params
{
};

// Function UDKGame.Main.PlayerConsoleCommand
struct AMain_PlayerConsoleCommand_Params
{
};

// Function UDKGame.Main.PreLogin
struct AMain_PreLogin_Params
{
};

// Function UDKGame.Main.Login
struct AMain_Login_Params
{
};

// Function UDKGame.Main.GenericPlayerInitialization
struct AMain_GenericPlayerInitialization_Params
{
};

// Function UDKGame.Main.StartHumans
struct AMain_StartHumans_Params
{
};

// Function UDKGame.Main.SetPlayerDefaults
struct AMain_SetPlayerDefaults_Params
{
};

// Function UDKGame.Main.GetPlayerControllers
struct AMain_GetPlayerControllers_Params
{
};

// Function UDKGame.Main.SpawnPlayerController
struct AMain_SpawnPlayerController_Params
{
};

// Function UDKGame.Main.SpawnDefaultPawnFor
struct AMain_SpawnDefaultPawnFor_Params
{
};

// Function UDKGame.Main.HandleSeamlessTravelPlayer
struct AMain_HandleSeamlessTravelPlayer_Params
{
};

// Function UDKGame.Main.GetSeamlessTravelActorList
struct AMain_GetSeamlessTravelActorList_Params
{
};

// Function UDKGame.Main.PostSeamlessTravel
struct AMain_PostSeamlessTravel_Params
{
};

// Function UDKGame.Main.UpdateMapName
struct AMain_UpdateMapName_Params
{
};

// Function UDKGame.Main.GetOnlineSessionName
struct AMain_GetOnlineSessionName_Params
{
};

// Function UDKGame.Main.PrintToConsole
struct AMain_PrintToConsole_Params
{
};

// Function UDKGame.Main.GetEngine
struct AMain_GetEngine_Params
{
};

// Function UDKGame.Main.GetViewportClient
struct AMain_GetViewportClient_Params
{
};

// Function UDKGame.Main.GetNumAlivePlayers
struct AMain_GetNumAlivePlayers_Params
{
};

// Function UDKGame.Main.SpawnedEnemy
struct AMain_SpawnedEnemy_Params
{
};

// Function UDKGame.Main.Killed
struct AMain_Killed_Params
{
};

// Function UDKGame.Main.Logout
struct AMain_Logout_Params
{
};

// Function UDKGame.Main.ResolveSplitScreenNames
struct AMain_ResolveSplitScreenNames_Params
{
};

// Function UDKGame.Main.DoPlayerLeaving
struct AMain_DoPlayerLeaving_Params
{
};

// Function UDKGame.Main.SetFinalWaveNumber
struct AMain_SetFinalWaveNumber_Params
{
};

// Function UDKGame.Main.SetWaveNumber
struct AMain_SetWaveNumber_Params
{
};

// Function UDKGame.Main.IsGameplayLevel
struct AMain_IsGameplayLevel_Params
{
};

// Function UDKGame.Main.IsInCinematic
struct AMain_IsInCinematic_Params
{
};

// Function UDKGame.Main.UsedSpotForPlayer
struct AMain_UsedSpotForPlayer_Params
{
};

// Function UDKGame.Main.ChoosePlayerStart
struct AMain_ChoosePlayerStart_Params
{
};

// Function UDKGame.Main.GetPlayerTeamForStart
struct AMain_GetPlayerTeamForStart_Params
{
};

// Function UDKGame.Main.RatePlayerStart
struct AMain_RatePlayerStart_Params
{
};

// Function UDKGame.Main.DoWaveSkipping
struct AMain_DoWaveSkipping_Params
{
};

// Function UDKGame.Main.PlayerCanRestart
struct AMain_PlayerCanRestart_Params
{
};

// Function UDKGame.Main.DisplaySaveNotification
struct AMain_DisplaySaveNotification_Params
{
};

// Function UDKGame.Main.DelayedShowSaveNotification
struct AMain_DelayedShowSaveNotification_Params
{
};

// Function UDKGame.Main.HandleCheater
struct AMain_HandleCheater_Params
{
};

// Function UDKGame.Main.RunAntiCheat
struct AMain_RunAntiCheat_Params
{
};

// Function UDKGame.Main.PostBeginPlay
struct AMain_PostBeginPlay_Params
{
};

// Function UDKGame.Main.PreBeginPlay
struct AMain_PreBeginPlay_Params
{
};

// Function UDKGame.Main.ShowGameOver
struct AMain_ShowGameOver_Params
{
};

// Function UDKGame.Main.GetNumLocalPlayers
struct AMain_GetNumLocalPlayers_Params
{
};

// Function UDKGame.Main.GetMaximumNumberOfEnemies
struct AMain_GetMaximumNumberOfEnemies_Params
{
};

// Function UDKGame.Main.GetMaximumNumberOfManaTokens
struct AMain_GetMaximumNumberOfManaTokens_Params
{
};

// Function UDKGame.Main.NeedToSpawnManaTokens
struct AMain_NeedToSpawnManaTokens_Params
{
};

// Function UDKGame.DunDefPlayerAbility.UpdateBuffValues
struct ADunDefPlayerAbility_UpdateBuffValues_Params
{
};

// Function UDKGame.DunDefPlayerAbility.RemoveAbilityStatModifier
struct ADunDefPlayerAbility_RemoveAbilityStatModifier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AddAbilityStatModifier
struct ADunDefPlayerAbility_AddAbilityStatModifier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetStatModifierObject
struct ADunDefPlayerAbility_GetStatModifierObject_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetStatValueByTag
struct ADunDefPlayerAbility_GetStatValueByTag_Params
{
};

// Function UDKGame.DunDefPlayerAbility.InitalizeActorStats
struct ADunDefPlayerAbility_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IsAbilityActive
struct ADunDefPlayerAbility_IsAbilityActive_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AllowMoveWhileCasting
struct ADunDefPlayerAbility_AllowMoveWhileCasting_Params
{
};

// Function UDKGame.DunDefPlayerAbility.CyclePlacementTowerRadius
struct ADunDefPlayerAbility_CyclePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IncreasePlacementTowerRadius
struct ADunDefPlayerAbility_IncreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility.DecreasePlacementTowerRadius
struct ADunDefPlayerAbility_DecreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPlacingTowerCameraOffset
struct ADunDefPlayerAbility_GetPlacingTowerCameraOffset_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ConsumesInputWhenActive
struct ADunDefPlayerAbility_ConsumesInputWhenActive_Params
{
};

// Function UDKGame.DunDefPlayerAbility.OverridePlayerGroundSpeed
struct ADunDefPlayerAbility_OverridePlayerGroundSpeed_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IsInInfiniteBuildPhase
struct ADunDefPlayerAbility_IsInInfiniteBuildPhase_Params
{
};

// Function UDKGame.DunDefPlayerAbility.HidesActionWheelUponActivation
struct ADunDefPlayerAbility_HidesActionWheelUponActivation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AdjustDamage
struct ADunDefPlayerAbility_AdjustDamage_Params
{
};

// Function UDKGame.DunDefPlayerAbility.MeetsHeroLevelRequirement
struct ADunDefPlayerAbility_MeetsHeroLevelRequirement_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerAbility_AnimNotify_CurrentAbility_Off_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AnimNotify_CurrentAbility_On
struct ADunDefPlayerAbility_AnimNotify_CurrentAbility_On_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPlayerDamageResistanceMultiplier
struct ADunDefPlayerAbility_GetPlayerDamageResistanceMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPlayerAttackDamageMultiplier
struct ADunDefPlayerAbility_GetPlayerAttackDamageMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPlayerGroundSpeedMultiplier
struct ADunDefPlayerAbility_GetPlayerGroundSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastRateMultiplier
struct ADunDefPlayerAbility_GetCastRateMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.PlayCancelNoManaSound
struct ADunDefPlayerAbility_PlayCancelNoManaSound_Params
{
};

// Function UDKGame.DunDefPlayerAbility.HandleAltCancellation
struct ADunDefPlayerAbility_HandleAltCancellation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.HandleAltConfirmation
struct ADunDefPlayerAbility_HandleAltConfirmation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.HandleConfirmation
struct ADunDefPlayerAbility_HandleConfirmation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.HandleCursorInput
struct ADunDefPlayerAbility_HandleCursorInput_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetDescriptiveName
struct ADunDefPlayerAbility_GetDescriptiveName_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IsCasting
struct ADunDefPlayerAbility_IsCasting_Params
{
};

// Function UDKGame.DunDefPlayerAbility.PlayCancelAnimation
struct ADunDefPlayerAbility_PlayCancelAnimation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.StopLoopingAnims
struct ADunDefPlayerAbility_StopLoopingAnims_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingCancelAnimationOverride
struct ADunDefPlayerAbility_GetCastingCancelAnimationOverride_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingWeaponEmitter
struct ADunDefPlayerAbility_GetCastingWeaponEmitter_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingCharacterEmitter
struct ADunDefPlayerAbility_GetCastingCharacterEmitter_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingCharacterAnimation
struct ADunDefPlayerAbility_GetCastingCharacterAnimation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetHUD
struct ADunDefPlayerAbility_GetHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingStateNameAbility
struct ADunDefPlayerAbility_GetCastingStateNameAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCastingStateNamePC
struct ADunDefPlayerAbility_GetCastingStateNamePC_Params
{
};

// Function UDKGame.DunDefPlayerAbility.OnInstigatorTeleport
struct ADunDefPlayerAbility_OnInstigatorTeleport_Params
{
};

// Function UDKGame.DunDefPlayerAbility.NotifyTakeHit
struct ADunDefPlayerAbility_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AllowCastingCancelOnDamage
struct ADunDefPlayerAbility_AllowCastingCancelOnDamage_Params
{
};

// Function UDKGame.DunDefPlayerAbility.OnActivate
struct ADunDefPlayerAbility_OnActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ClientOnActivate
struct ADunDefPlayerAbility_ClientOnActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ReduceCoolDown
struct ADunDefPlayerAbility_ReduceCoolDown_Params
{
};

// Function UDKGame.DunDefPlayerAbility.CompletedAbility
struct ADunDefPlayerAbility_CompletedAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ClientCompletedAbility
struct ADunDefPlayerAbility_ClientCompletedAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.CanAffordAbility
struct ADunDefPlayerAbility_CanAffordAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.RemoveActiveBuffs
struct ADunDefPlayerAbility_RemoveActiveBuffs_Params
{
};

// Function UDKGame.DunDefPlayerAbility.CancelAbility
struct ADunDefPlayerAbility_CancelAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ClientCancelAbility
struct ADunDefPlayerAbility_ClientCancelAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IsAuthority
struct ADunDefPlayerAbility_IsAuthority_Params
{
};

// Function UDKGame.DunDefPlayerAbility.IsLocal
struct ADunDefPlayerAbility_IsLocal_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetManaTokenAttractionRangeMultiplier
struct ADunDefPlayerAbility_GetManaTokenAttractionRangeMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetColorForStatus
struct ADunDefPlayerAbility_GetColorForStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetAbilityStatus
struct ADunDefPlayerAbility_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AllowUsageDuringCastingStates
struct ADunDefPlayerAbility_AllowUsageDuringCastingStates_Params
{
};

// Function UDKGame.DunDefPlayerAbility.LocalNotifyUnlock
struct ADunDefPlayerAbility_LocalNotifyUnlock_Params
{
};

// Function UDKGame.DunDefPlayerAbility.NotifyLocalLevelUp
struct ADunDefPlayerAbility_NotifyLocalLevelUp_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ModifyJumpZ
struct ADunDefPlayerAbility_ModifyJumpZ_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetDisplayCost
struct ADunDefPlayerAbility_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCostToActivate
struct ADunDefPlayerAbility_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPlayer
struct ADunDefPlayerAbility_GetPlayer_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetPC
struct ADunDefPlayerAbility_GetPC_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ServerCancel
struct ADunDefPlayerAbility_ServerCancel_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ServerActivate
struct ADunDefPlayerAbility_ServerActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility.RequestCancellation
struct ADunDefPlayerAbility_RequestCancellation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetActivationFailureString
struct ADunDefPlayerAbility_GetActivationFailureString_Params
{
};

// Function UDKGame.DunDefPlayerAbility.SpawnBuffs
struct ADunDefPlayerAbility_SpawnBuffs_Params
{
};

// Function UDKGame.DunDefPlayerAbility.RequestActivation
struct ADunDefPlayerAbility_RequestActivation_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AbilityReleased
struct ADunDefPlayerAbility_AbilityReleased_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AbilityPressed
struct ADunDefPlayerAbility_AbilityPressed_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetCooldownStartTime
struct ADunDefPlayerAbility_GetCooldownStartTime_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetActivationIntervalRemaining
struct ADunDefPlayerAbility_GetActivationIntervalRemaining_Params
{
};

// Function UDKGame.DunDefPlayerAbility.InitializeForPlayer
struct ADunDefPlayerAbility_InitializeForPlayer_Params
{
};

// Function UDKGame.DunDefPlayerAbility.InitializeForController
struct ADunDefPlayerAbility_InitializeForController_Params
{
};

// Function UDKGame.DunDefPlayerAbility.NotifyActivated
struct ADunDefPlayerAbility_NotifyActivated_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ExecReplicatedFunction
struct ADunDefPlayerAbility_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ReplicatedEvent
struct ADunDefPlayerAbility_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefPlayerAbility.PostBeginPlay
struct ADunDefPlayerAbility_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility.Destroyed
struct ADunDefPlayerAbility_Destroyed_Params
{
};

// Function UDKGame.DunDefPlayerAbility.GetGRI
struct ADunDefPlayerAbility_GetGRI_Params
{
};

// Function UDKGame.DunDefPlayerAbility.AllowHeroGUID
struct ADunDefPlayerAbility_AllowHeroGUID_Params
{
};

// Function UDKGame.DunDefPlayerAbility.ScaleForHeroModifiers
struct ADunDefPlayerAbility_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefPlayerAbility.DrawCastingHUD
struct ADunDefPlayerAbility_DrawCastingHUD_Params
{
};

// Function UDKGame.DunDefPawn.GetBuffedStatValue
struct ADunDefPawn_GetBuffedStatValue_Params
{
};

// Function UDKGame.DunDefPawn.HasStatusEffect
struct ADunDefPawn_HasStatusEffect_Params
{
};

// Function UDKGame.DunDefPawn.RemoveStatusEffect
struct ADunDefPawn_RemoveStatusEffect_Params
{
};

// Function UDKGame.DunDefPawn.AddStatusEffect
struct ADunDefPawn_AddStatusEffect_Params
{
};

// Function UDKGame.DunDefPawn.AdjustDealtDamage
struct ADunDefPawn_AdjustDealtDamage_Params
{
};

// Function UDKGame.DunDefPawn.OnBuffRemoved
struct ADunDefPawn_OnBuffRemoved_Params
{
};

// Function UDKGame.DunDefPawn.OnBuffAdded
struct ADunDefPawn_OnBuffAdded_Params
{
};

// Function UDKGame.DunDefPawn.ReportBuffRemoved
struct ADunDefPawn_ReportBuffRemoved_Params
{
};

// Function UDKGame.DunDefPawn.ReportBuffAdded
struct ADunDefPawn_ReportBuffAdded_Params
{
};

// Function UDKGame.DunDefPawn.ReportActorDealtDamage
struct ADunDefPawn_ReportActorDealtDamage_Params
{
};

// Function UDKGame.DunDefPawn.ReportTookDamage
struct ADunDefPawn_ReportTookDamage_Params
{
};

// Function UDKGame.DunDefPawn.ReportHealedActor
struct ADunDefPawn_ReportHealedActor_Params
{
};

// Function UDKGame.DunDefPawn.ReportKilledActor
struct ADunDefPawn_ReportKilledActor_Params
{
};

// Function UDKGame.DunDefPawn.GetLightningTowerDamagePercent
struct ADunDefPawn_GetLightningTowerDamagePercent_Params
{
};

// Function UDKGame.DunDefPawn.setIsWebbed
struct ADunDefPawn_setIsWebbed_Params
{
};

// Function UDKGame.DunDefPawn.isWebbed
struct ADunDefPawn_isWebbed_Params
{
};

// Function UDKGame.DunDefPawn.GetChainIgnore
struct ADunDefPawn_GetChainIgnore_Params
{
};

// Function UDKGame.DunDefPawn.SetChainIgnore
struct ADunDefPawn_SetChainIgnore_Params
{
};

// Function UDKGame.DunDefPawn.IsBeingChainedBy
struct ADunDefPawn_IsBeingChainedBy_Params
{
};

// Function UDKGame.DunDefPawn.RemoveFromChainingTowers
struct ADunDefPawn_RemoveFromChainingTowers_Params
{
};

// Function UDKGame.DunDefPawn.AddToChainingTowers
struct ADunDefPawn_AddToChainingTowers_Params
{
};

// Function UDKGame.DunDefPawn.AllowSuction
struct ADunDefPawn_AllowSuction_Params
{
};

// Function UDKGame.DunDefPawn.GetLocation
struct ADunDefPawn_GetLocation_Params
{
};

// Function UDKGame.DunDefPawn.WeaponSet
struct ADunDefPawn_WeaponSet_Params
{
};

// Function UDKGame.DunDefPawn.GetEffectSocketPosition
struct ADunDefPawn_GetEffectSocketPosition_Params
{
};

// Function UDKGame.DunDefPawn.GetEffectsSocketName
struct ADunDefPawn_GetEffectsSocketName_Params
{
};

// Function UDKGame.DunDefPawn.AllowsBoosting
struct ADunDefPawn_AllowsBoosting_Params
{
};

// Function UDKGame.DunDefPawn.AllowNegativeStatusAffecting
struct ADunDefPawn_AllowNegativeStatusAffecting_Params
{
};

// Function UDKGame.DunDefPawn.GetBoostAmount
struct ADunDefPawn_GetBoostAmount_Params
{
};

// Function UDKGame.DunDefPawn.GetPawnDeBooster
struct ADunDefPawn_GetPawnDeBooster_Params
{
};

// Function UDKGame.DunDefPawn.RemovePawnDeBooster
struct ADunDefPawn_RemovePawnDeBooster_Params
{
};

// Function UDKGame.DunDefPawn.AddPawnDeBooster
struct ADunDefPawn_AddPawnDeBooster_Params
{
};

// Function UDKGame.DunDefPawn.GetPawnBooster
struct ADunDefPawn_GetPawnBooster_Params
{
};

// Function UDKGame.DunDefPawn.RemoveAllPawnBoosters
struct ADunDefPawn_RemoveAllPawnBoosters_Params
{
};

// Function UDKGame.DunDefPawn.RemovePawnBooster
struct ADunDefPawn_RemovePawnBooster_Params
{
};

// Function UDKGame.DunDefPawn.AddPawnBooster
struct ADunDefPawn_AddPawnBooster_Params
{
};

// Function UDKGame.DunDefPawn.ForceMoveActor
struct ADunDefPawn_ForceMoveActor_Params
{
};

// Function UDKGame.DunDefPawn.GetOverrideTargetComponent
struct ADunDefPawn_GetOverrideTargetComponent_Params
{
};

// Function UDKGame.DunDefPawn.SetupDamageFlashing
struct ADunDefPawn_SetupDamageFlashing_Params
{
};

// Function UDKGame.DunDefPawn.UpdateDamageFlashing
struct ADunDefPawn_UpdateDamageFlashing_Params
{
};

// Function UDKGame.DunDefPawn.LocalTookDamage
struct ADunDefPawn_LocalTookDamage_Params
{
};

// Function UDKGame.DunDefPawn.AllowEnemyDrain
struct ADunDefPawn_AllowEnemyDrain_Params
{
};

// Function UDKGame.DunDefPawn.SetExtraMovementMult
struct ADunDefPawn_SetExtraMovementMult_Params
{
};

// Function UDKGame.DunDefPawn.SetPawnDrainResistanceMult
struct ADunDefPawn_SetPawnDrainResistanceMult_Params
{
};

// Function UDKGame.DunDefPawn.SetPawnDrainDmgMult
struct ADunDefPawn_SetPawnDrainDmgMult_Params
{
};

// Function UDKGame.DunDefPawn.SetWeaponSpeedMultiplier
struct ADunDefPawn_SetWeaponSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefPawn.AllowDarknessIgnorance
struct ADunDefPawn_AllowDarknessIgnorance_Params
{
};

// Function UDKGame.DunDefPawn.AllowMageHealing
struct ADunDefPawn_AllowMageHealing_Params
{
};

// Function UDKGame.DunDefPawn.PossessedBy
struct ADunDefPawn_PossessedBy_Params
{
};

// Function UDKGame.DunDefPawn.AllowTrapSpringing
struct ADunDefPawn_AllowTrapSpringing_Params
{
};

// Function UDKGame.DunDefPawn.JumpOffPawn
struct ADunDefPawn_JumpOffPawn_Params
{
};

// Function UDKGame.DunDefPawn.BaseChange
struct ADunDefPawn_BaseChange_Params
{
};

// Function UDKGame.DunDefPawn.HealPctOfMaxHealth
struct ADunDefPawn_HealPctOfMaxHealth_Params
{
};

// Function UDKGame.DunDefPawn.GetHealth
struct ADunDefPawn_GetHealth_Params
{
};

// Function UDKGame.DunDefPawn.GetMass
struct ADunDefPawn_GetMass_Params
{
};

// Function UDKGame.DunDefPawn.DoCrushed
struct ADunDefPawn_DoCrushed_Params
{
};

// Function UDKGame.DunDefPawn.CrushedBy
struct ADunDefPawn_CrushedBy_Params
{
};

// Function UDKGame.DunDefPawn.SetEnraged
struct ADunDefPawn_SetEnraged_Params
{
};

// Function UDKGame.DunDefPawn.GetScoreWorth
struct ADunDefPawn_GetScoreWorth_Params
{
};

// Function UDKGame.DunDefPawn.AdjustDamage
struct ADunDefPawn_AdjustDamage_Params
{
};

// Function UDKGame.DunDefPawn.GetPawnDamageResistanceModifier
struct ADunDefPawn_GetPawnDamageResistanceModifier_Params
{
};

// Function UDKGame.DunDefPawn.GetPawnDamageModifier
struct ADunDefPawn_GetPawnDamageModifier_Params
{
};

// Function UDKGame.DunDefPawn.StopAuraEffects
struct ADunDefPawn_StopAuraEffects_Params
{
};

// Function UDKGame.DunDefPawn.PSCFinished
struct ADunDefPawn_PSCFinished_Params
{
};

// Function UDKGame.DunDefPawn.SpawnAttachParticleEffect
struct ADunDefPawn_SpawnAttachParticleEffect_Params
{
};

// Function UDKGame.DunDefPawn.RemoveAllAuraEffects
struct ADunDefPawn_RemoveAllAuraEffects_Params
{
};

// Function UDKGame.DunDefPawn.HandleAuraEffects
struct ADunDefPawn_HandleAuraEffects_Params
{
};

// Function UDKGame.DunDefPawn.AllowEnrage
struct ADunDefPawn_AllowEnrage_Params
{
};

// Function UDKGame.DunDefPawn.AllowEnsnare
struct ADunDefPawn_AllowEnsnare_Params
{
};

// Function UDKGame.DunDefPawn.RemoveAuraEffect
struct ADunDefPawn_RemoveAuraEffect_Params
{
};

// Function UDKGame.DunDefPawn.AddAuraEffect
struct ADunDefPawn_AddAuraEffect_Params
{
};

// Function UDKGame.DunDefPawn.IsFirstAuraOfType
struct ADunDefPawn_IsFirstAuraOfType_Params
{
};

// Function UDKGame.DunDefPawn.GetNumberOfAurasOfType
struct ADunDefPawn_GetNumberOfAurasOfType_Params
{
};

// Function UDKGame.DunDefPawn.GetNumberOfAurasOfClass
struct ADunDefPawn_GetNumberOfAurasOfClass_Params
{
};

// Function UDKGame.DunDefPawn.HandleDamageTypeEffects
struct ADunDefPawn_HandleDamageTypeEffects_Params
{
};

// Function UDKGame.DunDefPawn.AnimNotify_ResetWeaponSwingDamage
struct ADunDefPawn_AnimNotify_ResetWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefPawn.AnimNotify_StopWeaponSwingDamage
struct ADunDefPawn_AnimNotify_StopWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefPawn.AnimNotify_StartWeaponSwingDamage
struct ADunDefPawn_AnimNotify_StartWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefPawn.EncroachedBy
struct ADunDefPawn_EncroachedBy_Params
{
};

// Function UDKGame.DunDefPawn.AddToScore
struct ADunDefPawn_AddToScore_Params
{
};

// Function UDKGame.DunDefPawn.PlayJumpAnimation
struct ADunDefPawn_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefPawn.AllowJump
struct ADunDefPawn_AllowJump_Params
{
};

// Function UDKGame.DunDefPawn.DoJump
struct ADunDefPawn_DoJump_Params
{
};

// Function UDKGame.DunDefPawn.GetJumpZ
struct ADunDefPawn_GetJumpZ_Params
{
};

// Function UDKGame.DunDefPawn.GetHealthPercent
struct ADunDefPawn_GetHealthPercent_Params
{
};

// Function UDKGame.DunDefPawn.GetGRI
struct ADunDefPawn_GetGRI_Params
{
};

// Function UDKGame.DunDefPawn.TakeFallingDamage
struct ADunDefPawn_TakeFallingDamage_Params
{
};

// Function UDKGame.DunDefPawn.CreateInventoryFromTemplate
struct ADunDefPawn_CreateInventoryFromTemplate_Params
{
};

// Function UDKGame.DunDefPawn.NetSpawnLocalActor
struct ADunDefPawn_NetSpawnLocalActor_Params
{
};

// Function UDKGame.DunDefPawn.Destroyed
struct ADunDefPawn_Destroyed_Params
{
};

// Function UDKGame.DunDefPawn.SetPlayerTargetableStatus
struct ADunDefPawn_SetPlayerTargetableStatus_Params
{
};

// Function UDKGame.DunDefPawn.GetCanBePlayerEnemy
struct ADunDefPawn_GetCanBePlayerEnemy_Params
{
};

// Function UDKGame.DunDefPawn.PostBeginPlay
struct ADunDefPawn_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPawn.StopCustomAnim
struct ADunDefPawn_StopCustomAnim_Params
{
};

// Function UDKGame.DunDefPawn.PlayCustomAnim
struct ADunDefPawn_PlayCustomAnim_Params
{
};

// Function UDKGame.DunDefPawn.GetAnimSpeedMultiplier
struct ADunDefPawn_GetAnimSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefPawn.PauseAnimationAfterDeath
struct ADunDefPawn_PauseAnimationAfterDeath_Params
{
};

// Function UDKGame.DunDefPawn.PlayDying
struct ADunDefPawn_PlayDying_Params
{
};

// Function UDKGame.DunDefPawn.IsDead
struct ADunDefPawn_IsDead_Params
{
};

// Function UDKGame.DunDefPawn.PlayDeathHurtEffect
struct ADunDefPawn_PlayDeathHurtEffect_Params
{
};

// Function UDKGame.DunDefPawn.GetDescriptiveName
struct ADunDefPawn_GetDescriptiveName_Params
{
};

// Function UDKGame.DunDefPawn.Died
struct ADunDefPawn_Died_Params
{
};

// Function UDKGame.DunDefPawn.GetScoreSwitch
struct ADunDefPawn_GetScoreSwitch_Params
{
};

// Function UDKGame.DunDefPawn.SpawnManaTokens
struct ADunDefPawn_SpawnManaTokens_Params
{
};

// Function UDKGame.DunDefPawn.TakeDamage
struct ADunDefPawn_TakeDamage_Params
{
};

// Function UDKGame.DunDefPawn.PlayHurtEffect
struct ADunDefPawn_PlayHurtEffect_Params
{
};

// Function UDKGame.DunDefPawn.ClientTakeDamage
struct ADunDefPawn_ClientTakeDamage_Params
{
};

// Function UDKGame.DunDefPawn.IsCurrentlyPlayingHurtAnimation
struct ADunDefPawn_IsCurrentlyPlayingHurtAnimation_Params
{
};

// Function UDKGame.DunDefPawn.PlayHurtSound
struct ADunDefPawn_PlayHurtSound_Params
{
};

// Function UDKGame.DunDefPawn.PlayHurtAnimation
struct ADunDefPawn_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefPawn.GetHurtLocation
struct ADunDefPawn_GetHurtLocation_Params
{
};

// Function UDKGame.DunDefPawn.NotifyTakeHitEX
struct ADunDefPawn_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefPawn.ShowHealingFloatingNumbers
struct ADunDefPawn_ShowHealingFloatingNumbers_Params
{
};

// Function UDKGame.DunDefPawn.HealDamage
struct ADunDefPawn_HealDamage_Params
{
};

// Function UDKGame.DunDefPawn.ShouldPlayHurtAnimation
struct ADunDefPawn_ShouldPlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefPawn.NotifyTakeHit
struct ADunDefPawn_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefPawn.PlayShootAnimation
struct ADunDefPawn_PlayShootAnimation_Params
{
};

// Function UDKGame.DunDefPawn.GetAimAtLocation
struct ADunDefPawn_GetAimAtLocation_Params
{
};

// Function UDKGame.DunDefPawn.PlayFootStepSound
struct ADunDefPawn_PlayFootStepSound_Params
{
};

// Function UDKGame.DunDefPawn.ExecReplicatedFunction
struct ADunDefPawn_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPawn.StopCharacterLoopingEmitter
struct ADunDefPawn_StopCharacterLoopingEmitter_Params
{
};

// Function UDKGame.DunDefPawn.SpawnCharacterNonLoopingEmitter
struct ADunDefPawn_SpawnCharacterNonLoopingEmitter_Params
{
};

// Function UDKGame.DunDefPawn.StartCharacterLoopingEmitter
struct ADunDefPawn_StartCharacterLoopingEmitter_Params
{
};

// Function UDKGame.DunDefPawn.OnDestroy_RemoveFromTargetableList
struct ADunDefPawn_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function UDKGame.DunDefPawn.OnPostBeginPlay_AddToTargetableList
struct ADunDefPawn_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function UDKGame.DunDefPawn.UnregisterAttacker
struct ADunDefPawn_UnregisterAttacker_Params
{
};

// Function UDKGame.DunDefPawn.RegisterAttacker
struct ADunDefPawn_RegisterAttacker_Params
{
};

// Function UDKGame.DunDefPawn.GetInterpolatedTargetingLocation
struct ADunDefPawn_GetInterpolatedTargetingLocation_Params
{
};

// Function UDKGame.DunDefPawn.GetTargetingLocation
struct ADunDefPawn_GetTargetingLocation_Params
{
};

// Function UDKGame.DunDefPawn.GetAttackRangeOffset
struct ADunDefPawn_GetAttackRangeOffset_Params
{
};

// Function UDKGame.DunDefPawn.IgnoreFriendlyFireDamage
struct ADunDefPawn_IgnoreFriendlyFireDamage_Params
{
};

// Function UDKGame.DunDefPawn.GetTargetingTeam
struct ADunDefPawn_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefPawn.ForceFriendlyFire
struct ADunDefPawn_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefPawn.Bump
struct ADunDefPawn_Bump_Params
{
};

// Function UDKGame.DunDefPawn.GetEnemyTargetingDesirability
struct ADunDefPawn_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPawn.GetTowerTargetingDesirability
struct ADunDefPawn_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPawn.GetPlayerTargetingDesirability
struct ADunDefPawn_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPawn.ReplicatedEvent
struct ADunDefPawn_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefWeapon.GetWeaponDamageType
struct ADunDefWeapon_GetWeaponDamageType_Params
{
};

// Function UDKGame.DunDefWeapon.SetOwnerNoSee
struct ADunDefWeapon_SetOwnerNoSee_Params
{
};

// Function UDKGame.DunDefWeapon.ClearAttachedComponents
struct ADunDefWeapon_ClearAttachedComponents_Params
{
};

// Function UDKGame.DunDefWeapon.HideWeapon
struct ADunDefWeapon_HideWeapon_Params
{
};

// Function UDKGame.DunDefWeapon.CanUseAbility
struct ADunDefWeapon_CanUseAbility_Params
{
};

// Function UDKGame.DunDefWeapon.GetWeaponSpeedMult
struct ADunDefWeapon_GetWeaponSpeedMult_Params
{
};

// Function UDKGame.DunDefWeapon.GetFireInterval
struct ADunDefWeapon_GetFireInterval_Params
{
};

// Function UDKGame.DunDefWeapon.SetWeaponSpeedMultiplier
struct ADunDefWeapon_SetWeaponSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon.HasRecentlyFired
struct ADunDefWeapon_HasRecentlyFired_Params
{
};

// Function UDKGame.DunDefWeapon.DoAttackForceFeedback
struct ADunDefWeapon_DoAttackForceFeedback_Params
{
};

// Function UDKGame.DunDefWeapon.UsedAbility
struct ADunDefWeapon_UsedAbility_Params
{
};

// Function UDKGame.DunDefWeapon.GetReloadString
struct ADunDefWeapon_GetReloadString_Params
{
};

// Function UDKGame.DunDefWeapon.GetReloadingColors
struct ADunDefWeapon_GetReloadingColors_Params
{
};

// Function UDKGame.DunDefWeapon.IsReloading
struct ADunDefWeapon_IsReloading_Params
{
};

// Function UDKGame.DunDefWeapon.GetReloadPercent
struct ADunDefWeapon_GetReloadPercent_Params
{
};

// Function UDKGame.DunDefWeapon.IsOccupied
struct ADunDefWeapon_IsOccupied_Params
{
};

// Function UDKGame.DunDefWeapon.GetMaxAmmo
struct ADunDefWeapon_GetMaxAmmo_Params
{
};

// Function UDKGame.DunDefWeapon.GetAmmo
struct ADunDefWeapon_GetAmmo_Params
{
};

// Function UDKGame.DunDefWeapon.GetAmmoPercent
struct ADunDefWeapon_GetAmmoPercent_Params
{
};

// Function UDKGame.DunDefWeapon.UsesAmmo
struct ADunDefWeapon_UsesAmmo_Params
{
};

// Function UDKGame.DunDefWeapon.DoKnockback
struct ADunDefWeapon_DoKnockback_Params
{
};

// Function UDKGame.DunDefWeapon.IsLocallyOwned
struct ADunDefWeapon_IsLocallyOwned_Params
{
};

// Function UDKGame.DunDefWeapon.IsAuthority
struct ADunDefWeapon_IsAuthority_Params
{
};

// Function UDKGame.DunDefWeapon.HasInstigatorController
struct ADunDefWeapon_HasInstigatorController_Params
{
};

// Function UDKGame.DunDefWeapon.AdjustDamage
struct ADunDefWeapon_AdjustDamage_Params
{
};

// Function UDKGame.DunDefWeapon.ShouldPlayHurtAnimation
struct ADunDefWeapon_ShouldPlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefWeapon.GetProjectileDamage
struct ADunDefWeapon_GetProjectileDamage_Params
{
};

// Function UDKGame.DunDefWeapon.DrawHUD
struct ADunDefWeapon_DrawHUD_Params
{
};

// Function UDKGame.DunDefWeapon.BeginFire
struct ADunDefWeapon_BeginFire_Params
{
};

// Function UDKGame.DunDefWeapon.PawnTookDamage
struct ADunDefWeapon_PawnTookDamage_Params
{
};

// Function UDKGame.DunDefWeapon.DoWeaponFiredEffect
struct ADunDefWeapon_DoWeaponFiredEffect_Params
{
};

// Function UDKGame.DunDefWeapon.PlayedShootAnimation
struct ADunDefWeapon_PlayedShootAnimation_Params
{
};

// Function UDKGame.DunDefWeapon.StaticSetWeaponEquipmentColorSet
struct ADunDefWeapon_StaticSetWeaponEquipmentColorSet_Params
{
};

// Function UDKGame.DunDefWeapon.StaticSetWeaponEquipmentQuality
struct ADunDefWeapon_StaticSetWeaponEquipmentQuality_Params
{
};

// Function UDKGame.DunDefWeapon.SetWeaponEquipmentColorSet
struct ADunDefWeapon_SetWeaponEquipmentColorSet_Params
{
};

// Function UDKGame.DunDefWeapon.SetWeaponEquipmentQuality
struct ADunDefWeapon_SetWeaponEquipmentQuality_Params
{
};

// Function UDKGame.DunDefWeapon.AnimNotify_ResetWeaponSwingDamage
struct ADunDefWeapon_AnimNotify_ResetWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon.AnimNotify_StopWeaponSwingDamage
struct ADunDefWeapon_AnimNotify_StopWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon.AnimNotify_StartWeaponSwingDamage
struct ADunDefWeapon_AnimNotify_StartWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon.ClientCheckBase
struct ADunDefWeapon_ClientCheckBase_Params
{
};

// Function UDKGame.DunDefWeapon.ClientCheckInstigator
struct ADunDefWeapon_ClientCheckInstigator_Params
{
};

// Function UDKGame.DunDefWeapon.DoAutoActivateChecks
struct ADunDefWeapon_DoAutoActivateChecks_Params
{
};

// Function UDKGame.DunDefWeapon.PostBeginPlay
struct ADunDefWeapon_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWeapon.DetachOverriddenElementalEffects
struct ADunDefWeapon_DetachOverriddenElementalEffects_Params
{
};

// Function UDKGame.DunDefWeapon.DoOverrideElementalEffects
struct ADunDefWeapon_DoOverrideElementalEffects_Params
{
};

// Function UDKGame.DunDefWeapon.ActivateElementalEffects
struct ADunDefWeapon_ActivateElementalEffects_Params
{
};

// Function UDKGame.DunDefWeapon.UninitElementalEffect
struct ADunDefWeapon_UninitElementalEffect_Params
{
};

// Function UDKGame.DunDefWeapon.InitializeElementalEffect
struct ADunDefWeapon_InitializeElementalEffect_Params
{
};

// Function UDKGame.DunDefWeapon.SetScaleForHeroEquipment
struct ADunDefWeapon_SetScaleForHeroEquipment_Params
{
};

// Function UDKGame.DunDefWeapon.InitializeForHeroEquipment
struct ADunDefWeapon_InitializeForHeroEquipment_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentBlockingBonus
struct ADunDefWeapon_GetEquipmentBlockingBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentShotsPerSecondBonus
struct ADunDefWeapon_GetEquipmentShotsPerSecondBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentReloadSpeedBonus
struct ADunDefWeapon_GetEquipmentReloadSpeedBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentTotalAmmoBonus
struct ADunDefWeapon_GetEquipmentTotalAmmoBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentAdditionalDamageAmount
struct ADunDefWeapon_GetEquipmentAdditionalDamageAmount_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentAdditionalDamageType
struct ADunDefWeapon_GetEquipmentAdditionalDamageType_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentChargeSpeedBonus
struct ADunDefWeapon_GetEquipmentChargeSpeedBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentKnockbackBonus
struct ADunDefWeapon_GetEquipmentKnockbackBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentProjectileSpeedBonus
struct ADunDefWeapon_GetEquipmentProjectileSpeedBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentNumProjectilesBonus
struct ADunDefWeapon_GetEquipmentNumProjectilesBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentAltDamageBonus
struct ADunDefWeapon_GetEquipmentAltDamageBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentDamageBonus
struct ADunDefWeapon_GetEquipmentDamageBonus_Params
{
};

// Function UDKGame.DunDefWeapon.GetProtonChargeBlastDamageMultiplier
struct ADunDefWeapon_GetProtonChargeBlastDamageMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon.GetEquipmentDamageMultiplier
struct ADunDefWeapon_GetEquipmentDamageMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon.GetHeroDamageModifier
struct ADunDefWeapon_GetHeroDamageModifier_Params
{
};

// Function UDKGame.DunDefWeapon.GetProjectileSpeed
struct ADunDefWeapon_GetProjectileSpeed_Params
{
};

// Function UDKGame.DunDefWeapon.ShootProjectiles
struct ADunDefWeapon_ShootProjectiles_Params
{
};

// Function UDKGame.DunDefWeapon.CustomFire
struct ADunDefWeapon_CustomFire_Params
{
};

// Function UDKGame.DunDefWeapon.GetProjectileSpawnTransformation
struct ADunDefWeapon_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefWeapon.GetNumProjectiles
struct ADunDefWeapon_GetNumProjectiles_Params
{
};

// Function UDKGame.DunDefWeapon.GetProjectileSpawnRotation
struct ADunDefWeapon_GetProjectileSpawnRotation_Params
{
};

// Function UDKGame.DunDefWeapon.GetMuzzleLoc
struct ADunDefWeapon_GetMuzzleLoc_Params
{
};

// Function UDKGame.DunDefWeapon.GetTotalAdditionalDamage
struct ADunDefWeapon_GetTotalAdditionalDamage_Params
{
};

// Function UDKGame.DunDefWeapon.GetTotalDamage
struct ADunDefWeapon_GetTotalDamage_Params
{
};

// Function UDKGame.DunDefWeapon.GetMuzzleTransformation
struct ADunDefWeapon_GetMuzzleTransformation_Params
{
};

// Function UDKGame.DunDefWeapon.UnHideAdditionalAttachments
struct ADunDefWeapon_UnHideAdditionalAttachments_Params
{
};

// Function UDKGame.DunDefWeapon.HideAdditionalAttachments
struct ADunDefWeapon_HideAdditionalAttachments_Params
{
};

// Function UDKGame.DunDefWeapon.HasAnyAmmo
struct ADunDefWeapon_HasAnyAmmo_Params
{
};

// Function UDKGame.DunDefWeapon.HasAmmo
struct ADunDefWeapon_HasAmmo_Params
{
};

// Function UDKGame.DunDefWeapon.DetachWeapon
struct ADunDefWeapon_DetachWeapon_Params
{
};

// Function UDKGame.DunDefWeapon.AttachWeaponTo
struct ADunDefWeapon_AttachWeaponTo_Params
{
};

// Function UDKGame.DunDefWeapon.PutDownWeapon
struct ADunDefWeapon_PutDownWeapon_Params
{
};

// Function UDKGame.DunDefWeapon.Activate
struct ADunDefWeapon_Activate_Params
{
};

// Function UDKGame.DunDefWeapon.Destroyed
struct ADunDefWeapon_Destroyed_Params
{
};

// Function UDKGame.DunDefWeapon.StopSpellEmitter
struct ADunDefWeapon_StopSpellEmitter_Params
{
};

// Function UDKGame.DunDefWeapon.StartSpellEmitter
struct ADunDefWeapon_StartSpellEmitter_Params
{
};

// Function UDKGame.DunDefWeapon.ExecReplicatedFunction
struct ADunDefWeapon_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefWeapon.ReplicatedEvent
struct ADunDefWeapon_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetWeaponDamageType
struct ADunDefWeapon_MeleeSword_GetWeaponDamageType_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetProjectileDamage
struct ADunDefWeapon_MeleeSword_GetProjectileDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ShootMeleeProjectile
struct ADunDefWeapon_MeleeSword_ShootMeleeProjectile_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.SendToFiringState
struct ADunDefWeapon_MeleeSword_SendToFiringState_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetMomentumMultiplier
struct ADunDefWeapon_MeleeSword_GetMomentumMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.BlockedHit
struct ADunDefWeapon_MeleeSword_BlockedHit_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetBlockingDamageResistancePercent
struct ADunDefWeapon_MeleeSword_GetBlockingDamageResistancePercent_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetHealAmount
struct ADunDefWeapon_MeleeSword_GetHealAmount_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.AdjustDamage
struct ADunDefWeapon_MeleeSword_AdjustDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ShouldPlayHurtAnimation
struct ADunDefWeapon_MeleeSword_ShouldPlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.BlocksHit
struct ADunDefWeapon_MeleeSword_BlocksHit_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.DetachWeapon
struct ADunDefWeapon_MeleeSword_DetachWeapon_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.CustomFire
struct ADunDefWeapon_MeleeSword_CustomFire_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.CheckDisableBlocking
struct ADunDefWeapon_MeleeSword_CheckDisableBlocking_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.CheckEnableBlocking
struct ADunDefWeapon_MeleeSword_CheckEnableBlocking_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ServerStopBlock
struct ADunDefWeapon_MeleeSword_ServerStopBlock_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ServerStartBlock
struct ADunDefWeapon_MeleeSword_ServerStartBlock_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.StopFire
struct ADunDefWeapon_MeleeSword_StopFire_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.StartFire
struct ADunDefWeapon_MeleeSword_StartFire_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.BeginFire
struct ADunDefWeapon_MeleeSword_BeginFire_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.CanUseAbility
struct ADunDefWeapon_MeleeSword_CanUseAbility_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.DisableBlocking
struct ADunDefWeapon_MeleeSword_DisableBlocking_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.CheckUpdateBlocking
struct ADunDefWeapon_MeleeSword_CheckUpdateBlocking_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.EnableBlocking
struct ADunDefWeapon_MeleeSword_EnableBlocking_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.StopSwingingWeapon
struct ADunDefWeapon_MeleeSword_StopSwingingWeapon_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.PawnTookDamage
struct ADunDefWeapon_MeleeSword_PawnTookDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetTotalDamage
struct ADunDefWeapon_MeleeSword_GetTotalDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.DoMeleeAttack
struct ADunDefWeapon_MeleeSword_DoMeleeAttack_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.GetMeleeSwingLocation
struct ADunDefWeapon_MeleeSword_GetMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.DoSwinging
struct ADunDefWeapon_MeleeSword_DoSwinging_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.AnimNotify_StopWeaponSwingDamage
struct ADunDefWeapon_MeleeSword_AnimNotify_StopWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ResetSwing
struct ADunDefWeapon_MeleeSword_ResetSwing_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.AnimNotify_ResetWeaponSwingDamage
struct ADunDefWeapon_MeleeSword_AnimNotify_ResetWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.AnimNotify_StartWeaponSwingDamage
struct ADunDefWeapon_MeleeSword_AnimNotify_StartWeaponSwingDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.Tick
struct ADunDefWeapon_MeleeSword_Tick_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.PostBeginPlay
struct ADunDefWeapon_MeleeSword_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.AddToSwingHurtList
struct ADunDefWeapon_MeleeSword_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ExecReplicatedFunction
struct ADunDefWeapon_MeleeSword_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefWeapon_MeleeSword.ReplicatedEvent
struct ADunDefWeapon_MeleeSword_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefPlayer.GetPRI
struct ADunDefPlayer_GetPRI_Params
{
};

// Function UDKGame.DunDefPlayer.GetStatModifier
struct ADunDefPlayer_GetStatModifier_Params
{
};

// Function UDKGame.DunDefPlayer.OnBuffRemoved
struct ADunDefPlayer_OnBuffRemoved_Params
{
};

// Function UDKGame.DunDefPlayer.OnBuffAdded
struct ADunDefPlayer_OnBuffAdded_Params
{
};

// Function UDKGame.DunDefPlayer.StaticGetOverrideSocketName
struct ADunDefPlayer_StaticGetOverrideSocketName_Params
{
};

// Function UDKGame.DunDefPlayer.AllowDropPickups
struct ADunDefPlayer_AllowDropPickups_Params
{
};

// Function UDKGame.DunDefPlayer.GetCastingCancelAnimation
struct ADunDefPlayer_GetCastingCancelAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.GetSellTowerEmitter
struct ADunDefPlayer_GetSellTowerEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetTrapDetonationEmitter
struct ADunDefPlayer_GetTrapDetonationEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetUpgradingWeaponEmitter
struct ADunDefPlayer_GetUpgradingWeaponEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetWeaponRepairEmitter
struct ADunDefPlayer_GetWeaponRepairEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetHealingWeaponEmitter
struct ADunDefPlayer_GetHealingWeaponEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetSummoningTowerEmitter
struct ADunDefPlayer_GetSummoningTowerEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.StopSpellEmitter
struct ADunDefPlayer_StopSpellEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.StartSpellEmitter
struct ADunDefPlayer_StartSpellEmitter_Params
{
};

// Function UDKGame.DunDefPlayer.GetReloadString
struct ADunDefPlayer_GetReloadString_Params
{
};

// Function UDKGame.DunDefPlayer.GetReloadPercent
struct ADunDefPlayer_GetReloadPercent_Params
{
};

// Function UDKGame.DunDefPlayer.GetMaxAmmo
struct ADunDefPlayer_GetMaxAmmo_Params
{
};

// Function UDKGame.DunDefPlayer.GetAmmo
struct ADunDefPlayer_GetAmmo_Params
{
};

// Function UDKGame.DunDefPlayer.GetAmmoPercent
struct ADunDefPlayer_GetAmmoPercent_Params
{
};

// Function UDKGame.DunDefPlayer.GetAmmoBarColors
struct ADunDefPlayer_GetAmmoBarColors_Params
{
};

// Function UDKGame.DunDefPlayer.UsesAmmoBar
struct ADunDefPlayer_UsesAmmoBar_Params
{
};

// Function UDKGame.DunDefPlayer.GetPetHealingAmount
struct ADunDefPlayer_GetPetHealingAmount_Params
{
};

// Function UDKGame.DunDefPlayer.LimitPetHealing
struct ADunDefPlayer_LimitPetHealing_Params
{
};

// Function UDKGame.DunDefPlayer.AllowPetHealing
struct ADunDefPlayer_AllowPetHealing_Params
{
};

// Function UDKGame.DunDefPlayer.AllowFairy
struct ADunDefPlayer_AllowFairy_Params
{
};

// Function UDKGame.DunDefPlayer.AllowFamiliarAbilities
struct ADunDefPlayer_AllowFamiliarAbilities_Params
{
};

// Function UDKGame.DunDefPlayer.AllowEquipmentAttachment
struct ADunDefPlayer_AllowEquipmentAttachment_Params
{
};

// Function UDKGame.DunDefPlayer.Teleported
struct ADunDefPlayer_Teleported_Params
{
};

// Function UDKGame.DunDefPlayer.SetOwnerNoSee
struct ADunDefPlayer_SetOwnerNoSee_Params
{
};

// Function UDKGame.DunDefPlayer.UsedAbility
struct ADunDefPlayer_UsedAbility_Params
{
};

// Function UDKGame.DunDefPlayer.AllowNegativeStatusAffecting
struct ADunDefPlayer_AllowNegativeStatusAffecting_Params
{
};

// Function UDKGame.DunDefPlayer.ShouldOverrideWeaponElementalEffects
struct ADunDefPlayer_ShouldOverrideWeaponElementalEffects_Params
{
};

// Function UDKGame.DunDefPlayer.AutoActivateSecondaryWeapon
struct ADunDefPlayer_AutoActivateSecondaryWeapon_Params
{
};

// Function UDKGame.DunDefPlayer.ForceUseInstigatorForMuzzle
struct ADunDefPlayer_ForceUseInstigatorForMuzzle_Params
{
};

// Function UDKGame.DunDefPlayer.ShouldDisplayWeapons
struct ADunDefPlayer_ShouldDisplayWeapons_Params
{
};

// Function UDKGame.DunDefPlayer.GetJumpZ
struct ADunDefPlayer_GetJumpZ_Params
{
};

// Function UDKGame.DunDefPlayer.DoWeaponSwap
struct ADunDefPlayer_DoWeaponSwap_Params
{
};

// Function UDKGame.DunDefPlayer.GetOffHandSocketName
struct ADunDefPlayer_GetOffHandSocketName_Params
{
};

// Function UDKGame.DunDefPlayer.GivePlayerHitInfo
struct ADunDefPlayer_GivePlayerHitInfo_Params
{
};

// Function UDKGame.DunDefPlayer.ForceWeaponActivationOverride
struct ADunDefPlayer_ForceWeaponActivationOverride_Params
{
};

// Function UDKGame.DunDefPlayer.GetOverrideSocketName
struct ADunDefPlayer_GetOverrideSocketName_Params
{
};

// Function UDKGame.DunDefPlayer.SwapOffHandWeaponFor
struct ADunDefPlayer_SwapOffHandWeaponFor_Params
{
};

// Function UDKGame.DunDefPlayer.GetMeleeSwingInfoOverride
struct ADunDefPlayer_GetMeleeSwingInfoOverride_Params
{
};

// Function UDKGame.DunDefPlayer.OverrideMeleeSwingInfo
struct ADunDefPlayer_OverrideMeleeSwingInfo_Params
{
};

// Function UDKGame.DunDefPlayer.AllowDualWeapon
struct ADunDefPlayer_AllowDualWeapon_Params
{
};

// Function UDKGame.DunDefPlayer.Pause
struct ADunDefPlayer_Pause_Params
{
};

// Function UDKGame.DunDefPlayer.GetAltActivationString
struct ADunDefPlayer_GetAltActivationString_Params
{
};

// Function UDKGame.DunDefPlayer.DoPlayerYell
struct ADunDefPlayer_DoPlayerYell_Params
{
};

// Function UDKGame.DunDefPlayer.AddVelocity
struct ADunDefPlayer_AddVelocity_Params
{
};

// Function UDKGame.DunDefPlayer.Bump
struct ADunDefPlayer_Bump_Params
{
};

// Function UDKGame.DunDefPlayer.PlayerChangedTeam
struct ADunDefPlayer_PlayerChangedTeam_Params
{
};

// Function UDKGame.DunDefPlayer.GetCanBePlayerEnemy
struct ADunDefPlayer_GetCanBePlayerEnemy_Params
{
};

// Function UDKGame.DunDefPlayer.ShouldBlockPlayerAim
struct ADunDefPlayer_ShouldBlockPlayerAim_Params
{
};

// Function UDKGame.DunDefPlayer.GetPlayerTargetingDesirability
struct ADunDefPlayer_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPlayer.GetTowerTargetingDesirability
struct ADunDefPlayer_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPlayer.GetAbilityByClass
struct ADunDefPlayer_GetAbilityByClass_Params
{
};

// Function UDKGame.DunDefPlayer.Notify_WeaponDidDamage
struct ADunDefPlayer_Notify_WeaponDidDamage_Params
{
};

// Function UDKGame.DunDefPlayer.AnimNotify_EquipmentAttachment
struct ADunDefPlayer_AnimNotify_EquipmentAttachment_Params
{
};

// Function UDKGame.DunDefPlayer.WeaponAttacked
struct ADunDefPlayer_WeaponAttacked_Params
{
};

// Function UDKGame.DunDefPlayer.GetToolTipPriority
struct ADunDefPlayer_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefPlayer.TakesToolTipPriority
struct ADunDefPlayer_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefPlayer.DrawCallOutIcon
struct ADunDefPlayer_DrawCallOutIcon_Params
{
};

// Function UDKGame.DunDefPlayer.CallOutOff
struct ADunDefPlayer_CallOutOff_Params
{
};

// Function UDKGame.DunDefPlayer.CallOutOn
struct ADunDefPlayer_CallOutOn_Params
{
};

// Function UDKGame.DunDefPlayer.CallOutOnLoc
struct ADunDefPlayer_CallOutOnLoc_Params
{
};

// Function UDKGame.DunDefPlayer.ServerCallOutOff
struct ADunDefPlayer_ServerCallOutOff_Params
{
};

// Function UDKGame.DunDefPlayer.ServerCallOutOn
struct ADunDefPlayer_ServerCallOutOn_Params
{
};

// Function UDKGame.DunDefPlayer.ServerSetTapToJumpLocation
struct ADunDefPlayer_ServerSetTapToJumpLocation_Params
{
};

// Function UDKGame.DunDefPlayer.CanReload
struct ADunDefPlayer_CanReload_Params
{
};

// Function UDKGame.DunDefPlayer.DoKnockback
struct ADunDefPlayer_DoKnockback_Params
{
};

// Function UDKGame.DunDefPlayer.GetReloadAnimation
struct ADunDefPlayer_GetReloadAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.NotifyTeamChanged
struct ADunDefPlayer_NotifyTeamChanged_Params
{
};

// Function UDKGame.DunDefPlayer.GetTrueController
struct ADunDefPlayer_GetTrueController_Params
{
};

// Function UDKGame.DunDefPlayer.CleaningUpPlayer
struct ADunDefPlayer_CleaningUpPlayer_Params
{
};

// Function UDKGame.DunDefPlayer.PlayDying
struct ADunDefPlayer_PlayDying_Params
{
};

// Function UDKGame.DunDefPlayer.DrawToolTip
struct ADunDefPlayer_DrawToolTip_Params
{
};

// Function UDKGame.DunDefPlayer.ContinueDrawingToolTip
struct ADunDefPlayer_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefPlayer.GetActivationOffset
struct ADunDefPlayer_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefPlayer.GetActivationWeighting
struct ADunDefPlayer_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefPlayer.Client_Activate
struct ADunDefPlayer_Client_Activate_Params
{
};

// Function UDKGame.DunDefPlayer.Server_Activate
struct ADunDefPlayer_Server_Activate_Params
{
};

// Function UDKGame.DunDefPlayer.AllowActivation
struct ADunDefPlayer_AllowActivation_Params
{
};

// Function UDKGame.DunDefPlayer.GetHero
struct ADunDefPlayer_GetHero_Params
{
};

// Function UDKGame.DunDefPlayer.AllowJump
struct ADunDefPlayer_AllowJump_Params
{
};

// Function UDKGame.DunDefPlayer.DoJump
struct ADunDefPlayer_DoJump_Params
{
};

// Function UDKGame.DunDefPlayer.SetMaxHealth
struct ADunDefPlayer_SetMaxHealth_Params
{
};

// Function UDKGame.DunDefPlayer.ClientSetupColors
struct ADunDefPlayer_ClientSetupColors_Params
{
};

// Function UDKGame.DunDefPlayer.SetMyCustomColors
struct ADunDefPlayer_SetMyCustomColors_Params
{
};

// Function UDKGame.DunDefPlayer.RemoveOverlayEffect
struct ADunDefPlayer_RemoveOverlayEffect_Params
{
};

// Function UDKGame.DunDefPlayer.AddOverlayEffect
struct ADunDefPlayer_AddOverlayEffect_Params
{
};

// Function UDKGame.DunDefPlayer.UpdateOverlayEffect
struct ADunDefPlayer_UpdateOverlayEffect_Params
{
};

// Function UDKGame.DunDefPlayer.SetCustomColors
struct ADunDefPlayer_SetCustomColors_Params
{
};

// Function UDKGame.DunDefPlayer.SetupColorizedMICs
struct ADunDefPlayer_SetupColorizedMICs_Params
{
};

// Function UDKGame.DunDefPlayer.CrushedBy
struct ADunDefPlayer_CrushedBy_Params
{
};

// Function UDKGame.DunDefPlayer.GetScoreWorth
struct ADunDefPlayer_GetScoreWorth_Params
{
};

// Function UDKGame.DunDefPlayer.PossessedBy
struct ADunDefPlayer_PossessedBy_Params
{
};

// Function UDKGame.DunDefPlayer.UnPossessed
struct ADunDefPlayer_UnPossessed_Params
{
};

// Function UDKGame.DunDefPlayer.AnimNotify_CurrentAbility_Off
struct ADunDefPlayer_AnimNotify_CurrentAbility_Off_Params
{
};

// Function UDKGame.DunDefPlayer.AnimNotify_CurrentAbility_On
struct ADunDefPlayer_AnimNotify_CurrentAbility_On_Params
{
};

// Function UDKGame.DunDefPlayer.GetPawnDamageResistanceModifier
struct ADunDefPlayer_GetPawnDamageResistanceModifier_Params
{
};

// Function UDKGame.DunDefPlayer.GetPawnDamageModifier
struct ADunDefPlayer_GetPawnDamageModifier_Params
{
};

// Function UDKGame.DunDefPlayer.AbilitiesOverrideGroundSpeed
struct ADunDefPlayer_AbilitiesOverrideGroundSpeed_Params
{
};

// Function UDKGame.DunDefPlayer.GetPlayerGroundSpeedModifier
struct ADunDefPlayer_GetPlayerGroundSpeedModifier_Params
{
};

// Function UDKGame.DunDefPlayer.GetAirSpeed
struct ADunDefPlayer_GetAirSpeed_Params
{
};

// Function UDKGame.DunDefPlayer.GetGroundSpeed
struct ADunDefPlayer_GetGroundSpeed_Params
{
};

// Function UDKGame.DunDefPlayer.ServerChoseStepTowardsTarget
struct ADunDefPlayer_ServerChoseStepTowardsTarget_Params
{
};

// Function UDKGame.DunDefPlayer.ClientDoStepTowardsTarget
struct ADunDefPlayer_ClientDoStepTowardsTarget_Params
{
};

// Function UDKGame.DunDefPlayer.AdjustDamage
struct ADunDefPlayer_AdjustDamage_Params
{
};

// Function UDKGame.DunDefPlayer.TakeDamage
struct ADunDefPlayer_TakeDamage_Params
{
};

// Function UDKGame.DunDefPlayer.PlayGameOverAnimation
struct ADunDefPlayer_PlayGameOverAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.QueueWaveVictoryAnimation
struct ADunDefPlayer_QueueWaveVictoryAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.PlayWaveVictoryAnimation
struct ADunDefPlayer_PlayWaveVictoryAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.PlayWaveStartAnimation
struct ADunDefPlayer_PlayWaveStartAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.PlayPickupItemAnimation
struct ADunDefPlayer_PlayPickupItemAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.AddHealth
struct ADunDefPlayer_AddHealth_Params
{
};

// Function UDKGame.DunDefPlayer.IncrementRepair
struct ADunDefPlayer_IncrementRepair_Params
{
};

// Function UDKGame.DunDefPlayer.GetCurrentRepairPercentage
struct ADunDefPlayer_GetCurrentRepairPercentage_Params
{
};

// Function UDKGame.DunDefPlayer.StartRepair
struct ADunDefPlayer_StartRepair_Params
{
};

// Function UDKGame.DunDefPlayer.GetTimeToRepair
struct ADunDefPlayer_GetTimeToRepair_Params
{
};

// Function UDKGame.DunDefPlayer.GetCostOfTotalRepair
struct ADunDefPlayer_GetCostOfTotalRepair_Params
{
};

// Function UDKGame.DunDefPlayer.GetCostToRepair
struct ADunDefPlayer_GetCostToRepair_Params
{
};

// Function UDKGame.DunDefPlayer.NeedsRepair
struct ADunDefPlayer_NeedsRepair_Params
{
};

// Function UDKGame.DunDefPlayer.PlayJumpAnimation
struct ADunDefPlayer_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.SetRespawnOff
struct ADunDefPlayer_SetRespawnOff_Params
{
};

// Function UDKGame.DunDefPlayer.PlayRespawnEffect
struct ADunDefPlayer_PlayRespawnEffect_Params
{
};

// Function UDKGame.DunDefPlayer.PlayDestroyedEffect
struct ADunDefPlayer_PlayDestroyedEffect_Params
{
};

// Function UDKGame.DunDefPlayer.TryTokenCollection
struct ADunDefPlayer_TryTokenCollection_Params
{
};

// Function UDKGame.DunDefPlayer.GetManaTokenCollectionRadiusSq
struct ADunDefPlayer_GetManaTokenCollectionRadiusSq_Params
{
};

// Function UDKGame.DunDefPlayer.CheckForTokens
struct ADunDefPlayer_CheckForTokens_Params
{
};

// Function UDKGame.DunDefPlayer.GetManaTokenAttractionRadius
struct ADunDefPlayer_GetManaTokenAttractionRadius_Params
{
};

// Function UDKGame.DunDefPlayer.HasMaxManaPower
struct ADunDefPlayer_HasMaxManaPower_Params
{
};

// Function UDKGame.DunDefPlayer.Tick
struct ADunDefPlayer_Tick_Params
{
};

// Function UDKGame.DunDefPlayer.UpdateHovering
struct ADunDefPlayer_UpdateHovering_Params
{
};

// Function UDKGame.DunDefPlayer.StopHovering
struct ADunDefPlayer_StopHovering_Params
{
};

// Function UDKGame.DunDefPlayer.StartHovering
struct ADunDefPlayer_StartHovering_Params
{
};

// Function UDKGame.DunDefPlayer.FaceRotation
struct ADunDefPlayer_FaceRotation_Params
{
};

// Function UDKGame.DunDefPlayer.Died
struct ADunDefPlayer_Died_Params
{
};

// Function UDKGame.DunDefPlayer.SetLookTarget
struct ADunDefPlayer_SetLookTarget_Params
{
};

// Function UDKGame.DunDefPlayer.GetAimAtLocation
struct ADunDefPlayer_GetAimAtLocation_Params
{
};

// Function UDKGame.DunDefPlayer.GetAutoAimTarget
struct ADunDefPlayer_GetAutoAimTarget_Params
{
};

// Function UDKGame.DunDefPlayer.PlayShootAnimation_Float
struct ADunDefPlayer_PlayShootAnimation_Float_Params
{
};

// Function UDKGame.DunDefPlayer.GetShootAnim
struct ADunDefPlayer_GetShootAnim_Params
{
};

// Function UDKGame.DunDefPlayer.PlayShootAnimation
struct ADunDefPlayer_PlayShootAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.UpdateRotation
struct ADunDefPlayer_UpdateRotation_Params
{
};

// Function UDKGame.DunDefPlayer.SwapWeaponFor
struct ADunDefPlayer_SwapWeaponFor_Params
{
};

// Function UDKGame.DunDefPlayer.ThrowWeaponOnDeath
struct ADunDefPlayer_ThrowWeaponOnDeath_Params
{
};

// Function UDKGame.DunDefPlayer.EnableLocalAccelerationBlender
struct ADunDefPlayer_EnableLocalAccelerationBlender_Params
{
};

// Function UDKGame.DunDefPlayer.PostBeginPlay
struct ADunDefPlayer_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayer.Destroyed
struct ADunDefPlayer_Destroyed_Params
{
};

// Function UDKGame.DunDefPlayer.StopCustomAnim
struct ADunDefPlayer_StopCustomAnim_Params
{
};

// Function UDKGame.DunDefPlayer.StopLoopingAnimations
struct ADunDefPlayer_StopLoopingAnimations_Params
{
};

// Function UDKGame.DunDefPlayer.StartLoopingAnimation
struct ADunDefPlayer_StartLoopingAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.PlayCustomAnimUpperBody
struct ADunDefPlayer_PlayCustomAnimUpperBody_Params
{
};

// Function UDKGame.DunDefPlayer.Landed
struct ADunDefPlayer_Landed_Params
{
};

// Function UDKGame.DunDefPlayer.NotifyTakeHitEX
struct ADunDefPlayer_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefPlayer.NotifyTakeHit
struct ADunDefPlayer_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefPlayer.PlayHurtAnimation
struct ADunDefPlayer_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefPlayer.DrawFloatingTalker
struct ADunDefPlayer_DrawFloatingTalker_Params
{
};

// Function UDKGame.DunDefPlayer.DrawMyHUD
struct ADunDefPlayer_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefPlayer.HasLightningStance
struct ADunDefPlayer_HasLightningStance_Params
{
};

// Function UDKGame.DunDefPlayer.GetHealthColor
struct ADunDefPlayer_GetHealthColor_Params
{
};

// Function UDKGame.DunDefPlayer.GetDescriwptiveName
struct ADunDefPlayer_GetDescriwptiveName_Params
{
};

// Function UDKGame.DunDefPlayer.OnlyDrawHUDForOwner
struct ADunDefPlayer_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDefPlayer.DrawMiniMapIcon
struct ADunDefPlayer_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefPlayer.GetTargetingTeam
struct ADunDefPlayer_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefPlayer.GetEnemyTargetingDesirability
struct ADunDefPlayer_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPlayer.ExecReplicatedFunction
struct ADunDefPlayer_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPlayer.ReplicatedEvent
struct ADunDefPlayer_ReplicatedEvent_Params
{
};

// Function UDKGame.IActorModifierInterface.GetStatModifierObject
struct UIActorModifierInterface_GetStatModifierObject_Params
{
};

// Function UDKGame.IActorModifierInterface.GetStatValueByTag
struct UIActorModifierInterface_GetStatValueByTag_Params
{
};

// Function UDKGame.IActorModifierInterface.InitalizeActorStats
struct UIActorModifierInterface_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefGameMessage.GetString
struct UDunDefGameMessage_GetString_Params
{
};

// Function UDKGame.DunDefGameMessage.PrintGlobalLocalHUDMessage
struct UDunDefGameMessage_PrintGlobalLocalHUDMessage_Params
{
};

// Function UDKGame.DunDefGameMessage.PrintHUDMessage
struct UDunDefGameMessage_PrintHUDMessage_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.GetSpawnFrustumCheckRadius
struct ADunDefEmitterSpawnable_GetSpawnFrustumCheckRadius_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.AllowSpawn
struct ADunDefEmitterSpawnable_AllowSpawn_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.Tick
struct ADunDefEmitterSpawnable_Tick_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.SetDecalSize
struct ADunDefEmitterSpawnable_SetDecalSize_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.SetGameFloatParameter
struct ADunDefEmitterSpawnable_SetGameFloatParameter_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.SetSize
struct ADunDefEmitterSpawnable_SetSize_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.DoCameraShake
struct ADunDefEmitterSpawnable_DoCameraShake_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.RefreshAutoFadeOut
struct ADunDefEmitterSpawnable_RefreshAutoFadeOut_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.PostBeginPlay
struct ADunDefEmitterSpawnable_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.FadeOut
struct ADunDefEmitterSpawnable_FadeOut_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.ReplicatedFadeOut
struct ADunDefEmitterSpawnable_ReplicatedFadeOut_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.Destroyed
struct ADunDefEmitterSpawnable_Destroyed_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.OnParticleSystemFinished
struct ADunDefEmitterSpawnable_OnParticleSystemFinished_Params
{
};

// Function UDKGame.DunDefEmitterSpawnable.ExecReplicatedFunction
struct ADunDefEmitterSpawnable_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.GetTimeSinceActivation
struct ADunDefPlayerAbility_CharacterToggle_GetTimeSinceActivation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.AllowUsageDuringCastingStates
struct ADunDefPlayerAbility_CharacterToggle_AllowUsageDuringCastingStates_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.GetToggleDeactivationString
struct ADunDefPlayerAbility_CharacterToggle_GetToggleDeactivationString_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.GetToggleActivationString
struct ADunDefPlayerAbility_CharacterToggle_GetToggleActivationString_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.CancelAbility
struct ADunDefPlayerAbility_CharacterToggle_CancelAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.OnActivate
struct ADunDefPlayerAbility_CharacterToggle_OnActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.ReplicatedEvent
struct ADunDefPlayerAbility_CharacterToggle_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.IsActive
struct ADunDefPlayerAbility_CharacterToggle_IsActive_Params
{
};

// Function UDKGame.DunDefPlayerAbility_CharacterToggle.GetCostToActivate
struct ADunDefPlayerAbility_CharacterToggle_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Apprentice_Overcharge.GetAbilityStatus
struct ADunDefPlayerAbility_Apprentice_Overcharge_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Apprentice_Overcharge.GetPlayerAttackDamageMultiplier
struct ADunDefPlayerAbility_Apprentice_Overcharge_GetPlayerAttackDamageMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Apprentice_Overcharge.GetCastingMultiplier
struct ADunDefPlayerAbility_Apprentice_Overcharge_GetCastingMultiplier_Params
{
};

// Function UDKGame.StatObject.GetToolTipValueByTag
struct UStatObject_GetToolTipValueByTag_Params
{
};

// Function UDKGame.StatObject.UpdateBuffValues
struct UStatObject_UpdateBuffValues_Params
{
};

// Function UDKGame.StatObject.CanAddBuffs
struct UStatObject_CanAddBuffs_Params
{
};

// Function UDKGame.StatObject.DoesModifyStat
struct UStatObject_DoesModifyStat_Params
{
};

// Function UDKGame.StatObject.GetBuffStatValue
struct UStatObject_GetBuffStatValue_Params
{
};

// Function UDKGame.StatObject.GetStatValue
struct UStatObject_GetStatValue_Params
{
};

// Function UDKGame.StatObject.GetStatValueByTag
struct UStatObject_GetStatValueByTag_Params
{
};

// Function UDKGame.StatObject.GetStatModifierByTag
struct UStatObject_GetStatModifierByTag_Params
{
};

// Function UDKGame.StatObject.GetStatModifierValue
struct UStatObject_GetStatModifierValue_Params
{
};

// Function UDKGame.StatObject.GetModifierValue
struct UStatObject_GetModifierValue_Params
{
};

// Function UDKGame.StatObject.Initalize
struct UStatObject_Initalize_Params
{
};

// Function UDKGame.StatObject.AddedToHero
struct UStatObject_AddedToHero_Params
{
};

// Function UDKGame.StatObject.DeactivateBuffs
struct UStatObject_DeactivateBuffs_Params
{
};

// Function UDKGame.StatObject.ShutDown
struct UStatObject_ShutDown_Params
{
};

// Function UDKGame.StatObject.StaticIsValidForHero
struct UStatObject_StaticIsValidForHero_Params
{
};

// Function UDKGame.StatObject.GetName
struct UStatObject_GetName_Params
{
};

// Function UDKGame.StatObject.GetDescription
struct UStatObject_GetDescription_Params
{
};

// Function UDKGame.StatObject.StaticGetDescription
struct UStatObject_StaticGetDescription_Params
{
};

// Function UDKGame.StatObject.GetStatModifierObject
struct UStatObject_GetStatModifierObject_Params
{
};

// Function UDKGame.StatObject.InitalizeActorStats
struct UStatObject_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefHeroModifierInterface.AllowHeroGUID
struct UDunDefHeroModifierInterface_AllowHeroGUID_Params
{
};

// Function UDKGame.DunDefHeroModifierInterface.ScaleForHeroModifiers
struct UDunDefHeroModifierInterface_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.StopSummonTowerFXCompleted
struct ADunDefPlayerAbility_TowerPlacement_StopSummonTowerFXCompleted_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.StopSummonTowerFX
struct ADunDefPlayerAbility_TowerPlacement_StopSummonTowerFX_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.UpdateSummonTowerFX
struct ADunDefPlayerAbility_TowerPlacement_UpdateSummonTowerFX_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.BeginSummonTowerFX
struct ADunDefPlayerAbility_TowerPlacement_BeginSummonTowerFX_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.CyclePlacementTowerRadius
struct ADunDefPlayerAbility_TowerPlacement_CyclePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.IncreasePlacementTowerRadius
struct ADunDefPlayerAbility_TowerPlacement_IncreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.DecreasePlacementTowerRadius
struct ADunDefPlayerAbility_TowerPlacement_DecreasePlacementTowerRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.GetAbilityStatus
struct ADunDefPlayerAbility_TowerPlacement_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.StopTowerPlacingAnimation
struct ADunDefPlayerAbility_TowerPlacement_StopTowerPlacingAnimation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.StartTowerPlacingAnimation
struct ADunDefPlayerAbility_TowerPlacement_StartTowerPlacingAnimation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.GetCenterLocation
struct ADunDefPlayerAbility_TowerPlacement_GetCenterLocation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.AuthorityInitReplicatedPlacementState
struct ADunDefPlayerAbility_TowerPlacement_AuthorityInitReplicatedPlacementState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.SortTracedActors
struct ADunDefPlayerAbility_TowerPlacement_SortTracedActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.GetTracedActors
struct ADunDefPlayerAbility_TowerPlacement_GetTracedActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PostPlacementUpdate
struct ADunDefPlayerAbility_TowerPlacement_PostPlacementUpdate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.SetInitialPlacementCursor
struct ADunDefPlayerAbility_TowerPlacement_SetInitialPlacementCursor_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PlacementTraceCheckActors
struct ADunDefPlayerAbility_TowerPlacement_PlacementTraceCheckActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PlacementTraceForceTowerSelection
struct ADunDefPlayerAbility_TowerPlacement_PlacementTraceForceTowerSelection_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.FinishedFadingOut
struct ADunDefPlayerAbility_TowerPlacement_FinishedFadingOut_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.AbilityTick
struct ADunDefPlayerAbility_TowerPlacement_AbilityTick_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PostBeginPlay
struct ADunDefPlayerAbility_TowerPlacement_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PreCursorDrawHUD
struct ADunDefPlayerAbility_TowerPlacement_PreCursorDrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.PostCursorDrawHUD
struct ADunDefPlayerAbility_TowerPlacement_PostCursorDrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.DrawCastingHUD
struct ADunDefPlayerAbility_TowerPlacement_DrawCastingHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.ServerSetPlacementTowerRangeScaler
struct ADunDefPlayerAbility_TowerPlacement_ServerSetPlacementTowerRangeScaler_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_TowerPlacement_GetPlacementWeaponEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.GetCursorPlacementTexture
struct ADunDefPlayerAbility_TowerPlacement_GetCursorPlacementTexture_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.ExecReplicatedFunction
struct ADunDefPlayerAbility_TowerPlacement_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPlayerAbility_TowerPlacement.ReplicatedEvent
struct ADunDefPlayerAbility_TowerPlacement_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ServerSetPlacementTowerRangeScaler
struct ADunDefPlayerAbility_BuildTower_ServerSetPlacementTowerRangeScaler_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetTowerUnitDescription
struct ADunDefPlayerAbility_BuildTower_GetTowerUnitDescription_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.CancelAbility
struct ADunDefPlayerAbility_BuildTower_CancelAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.StartSummoningState
struct ADunDefPlayerAbility_BuildTower_StartSummoningState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ClientStartSummoningState
struct ADunDefPlayerAbility_BuildTower_ClientStartSummoningState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ServerRequestBuildTower
struct ADunDefPlayerAbility_BuildTower_ServerRequestBuildTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetActivationFailureString
struct ADunDefPlayerAbility_BuildTower_GetActivationFailureString_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ServerGotoRotationState
struct ADunDefPlayerAbility_BuildTower_ServerGotoRotationState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.PostPlacementUpdate
struct ADunDefPlayerAbility_BuildTower_PostPlacementUpdate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.UpdateDecalPlacement
struct ADunDefPlayerAbility_BuildTower_UpdateDecalPlacement_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.AllowTowerPlacementPosition
struct ADunDefPlayerAbility_BuildTower_AllowTowerPlacementPosition_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.IsTowerPhysical
struct ADunDefPlayerAbility_BuildTower_IsTowerPhysical_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.IsInPlacingTowerState
struct ADunDefPlayerAbility_BuildTower_IsInPlacingTowerState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetOtherAbilityPlacementPreventionRadius
struct ADunDefPlayerAbility_BuildTower_GetOtherAbilityPlacementPreventionRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.FinishedFadingOut
struct ADunDefPlayerAbility_BuildTower_FinishedFadingOut_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.AbilityTick
struct ADunDefPlayerAbility_BuildTower_AbilityTick_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.PostBeginPlay
struct ADunDefPlayerAbility_BuildTower_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.UpdateClientInterpolations
struct ADunDefPlayerAbility_BuildTower_UpdateClientInterpolations_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.AuthorityInitReplicatedPlacementState
struct ADunDefPlayerAbility_BuildTower_AuthorityInitReplicatedPlacementState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_BuildTower_GetPlacementWeaponEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetCursorPlacementTexture
struct ADunDefPlayerAbility_BuildTower_GetCursorPlacementTexture_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ServerReceivePlacementState
struct ADunDefPlayerAbility_BuildTower_ServerReceivePlacementState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetDescriptiveName
struct ADunDefPlayerAbility_BuildTower_GetDescriptiveName_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetDisplayCost
struct ADunDefPlayerAbility_BuildTower_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.CanPlaceTowerUnitCost
struct ADunDefPlayerAbility_BuildTower_CanPlaceTowerUnitCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.GetCostToActivate
struct ADunDefPlayerAbility_BuildTower_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.PlacementTraceCheckActors
struct ADunDefPlayerAbility_BuildTower_PlacementTraceCheckActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.PlacementTraceForceTowerSelection
struct ADunDefPlayerAbility_BuildTower_PlacementTraceForceTowerSelection_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ExecReplicatedFunction
struct ADunDefPlayerAbility_BuildTower_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildTower.ReplicatedEvent
struct ADunDefPlayerAbility_BuildTower_ReplicatedEvent_Params
{
};

// Function UDKGame.ActorFilter.IsActorAllowed
struct UActorFilter_IsActorAllowed_Params
{
};

// Function UDKGame.ActorFilter.IsAllowed
struct UActorFilter_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Buff.IsAllowed
struct UActorFilter_Buff_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Class.IsAllowed
struct UActorFilter_Class_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Collision.IsAllowed
struct UActorFilter_Collision_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_DamageTypeComparison.IsActorAllowed
struct UActorFilter_DamageTypeComparison_IsActorAllowed_Params
{
};

// Function UDKGame.ActorFilter_DamageTypeComparison.IsAllowed
struct UActorFilter_DamageTypeComparison_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Dead.IsAllowed
struct UActorFilter_Dead_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Health.IsAllowed
struct UActorFilter_Health_IsAllowed_Params
{
};

// Function UDKGame.DunDefTargetableInterface.setIsWebbed
struct UDunDefTargetableInterface_setIsWebbed_Params
{
};

// Function UDKGame.DunDefTargetableInterface.isWebbed
struct UDunDefTargetableInterface_isWebbed_Params
{
};

// Function UDKGame.DunDefTargetableInterface.AllowSuction
struct UDunDefTargetableInterface_AllowSuction_Params
{
};

// Function UDKGame.DunDefTargetableInterface.HealPctOfMaxHealth
struct UDunDefTargetableInterface_HealPctOfMaxHealth_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetChainIgnore
struct UDunDefTargetableInterface_GetChainIgnore_Params
{
};

// Function UDKGame.DunDefTargetableInterface.SetChainIgnore
struct UDunDefTargetableInterface_SetChainIgnore_Params
{
};

// Function UDKGame.DunDefTargetableInterface.IsBeingChainedBy
struct UDunDefTargetableInterface_IsBeingChainedBy_Params
{
};

// Function UDKGame.DunDefTargetableInterface.RemoveFromChainingTowers
struct UDunDefTargetableInterface_RemoveFromChainingTowers_Params
{
};

// Function UDKGame.DunDefTargetableInterface.AddToChainingTowers
struct UDunDefTargetableInterface_AddToChainingTowers_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetLightningTowerDamagePercent
struct UDunDefTargetableInterface_GetLightningTowerDamagePercent_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetHealthPercent
struct UDunDefTargetableInterface_GetHealthPercent_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetHealth
struct UDunDefTargetableInterface_GetHealth_Params
{
};

// Function UDKGame.DunDefTargetableInterface.ForceMoveActor
struct UDunDefTargetableInterface_ForceMoveActor_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetOverrideTargetComponent
struct UDunDefTargetableInterface_GetOverrideTargetComponent_Params
{
};

// Function UDKGame.DunDefTargetableInterface.LocalTookDamage
struct UDunDefTargetableInterface_LocalTookDamage_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetMass
struct UDunDefTargetableInterface_GetMass_Params
{
};

// Function UDKGame.DunDefTargetableInterface.AllowDarknessIgnorance
struct UDunDefTargetableInterface_AllowDarknessIgnorance_Params
{
};

// Function UDKGame.DunDefTargetableInterface.ForceFriendlyFire
struct UDunDefTargetableInterface_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetInterpolatedTargetingLocation
struct UDunDefTargetableInterface_GetInterpolatedTargetingLocation_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetTargetingLocation
struct UDunDefTargetableInterface_GetTargetingLocation_Params
{
};

// Function UDKGame.DunDefTargetableInterface.OnDestroy_RemoveFromTargetableList
struct UDunDefTargetableInterface_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function UDKGame.DunDefTargetableInterface.OnPostBeginPlay_AddToTargetableList
struct UDunDefTargetableInterface_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function UDKGame.DunDefTargetableInterface.UnregisterAttacker
struct UDunDefTargetableInterface_UnregisterAttacker_Params
{
};

// Function UDKGame.DunDefTargetableInterface.RegisterAttacker
struct UDunDefTargetableInterface_RegisterAttacker_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetAttackRangeOffset
struct UDunDefTargetableInterface_GetAttackRangeOffset_Params
{
};

// Function UDKGame.DunDefTargetableInterface.IgnoreFriendlyFireDamage
struct UDunDefTargetableInterface_IgnoreFriendlyFireDamage_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetTargetingTeam
struct UDunDefTargetableInterface_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetTowerTargetingDesirability
struct UDunDefTargetableInterface_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefTargetableInterface.GetPlayerTargetingDesirability
struct UDunDefTargetableInterface_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.ActorFilter_Physics.IsAllowed
struct UActorFilter_Physics_IsAllowed_Params
{
};

// Function UDKGame.ActorFilter_Template.IsAllowed
struct UActorFilter_Template_IsAllowed_Params
{
};

// Function UDKGame.AnalyticsXML.ReceivedText
struct AAnalyticsXML_ReceivedText_Params
{
};

// Function UDKGame.AnalyticsXML.MessageToSend
struct AAnalyticsXML_MessageToSend_Params
{
};

// Function UDKGame.AnalyticsXML.Opened
struct AAnalyticsXML_Opened_Params
{
};

// Function UDKGame.AnalyticsXML.Resolved
struct AAnalyticsXML_Resolved_Params
{
};

// Function UDKGame.AnalyticsXML.SendFormattedData
struct AAnalyticsXML_SendFormattedData_Params
{
};

// Function UDKGame.AnimNotify_DisableParticleEffects.Notify
struct UAnimNotify_DisableParticleEffects_Notify_Params
{
};

// Function UDKGame.AnimNotify_ScriptedEquipmentAttachment.Notify
struct UAnimNotify_ScriptedEquipmentAttachment_Notify_Params
{
};

// Function UDKGame.AnimNotify_ToggleLights.Notify
struct UAnimNotify_ToggleLights_Notify_Params
{
};

// Function UDKGame.AntiCheat.CheckGameInfo
struct UAntiCheat_CheckGameInfo_Params
{
};

// Function UDKGame.AntiCheat.CheckSpeedHack
struct UAntiCheat_CheckSpeedHack_Params
{
};

// Function UDKGame.AntiCheat.CheckTowers
struct UAntiCheat_CheckTowers_Params
{
};

// Function UDKGame.AntiCheat.CheckHeroStats
struct UAntiCheat_CheckHeroStats_Params
{
};

// Function UDKGame.AntiCheat.DoAntiCheatChecks
struct UAntiCheat_DoAntiCheatChecks_Params
{
};

// Function UDKGame.AntiCheat.HandleCheater
struct UAntiCheat_HandleCheater_Params
{
};

// Function UDKGame.AntiCheat.KickEveryone
struct UAntiCheat_KickEveryone_Params
{
};

// Function UDKGame.AntiCheat.GetAntiCheatInterval
struct UAntiCheat_GetAntiCheatInterval_Params
{
};

// Function UDKGame.DunDefAchievementManager.GetAchievementManager
struct UDunDefAchievementManager_GetAchievementManager_Params
{
};

// Function UDKGame.DunDefAchievementManager.DoesAnyLocalPlayerHaveAchievementUnlocked
struct UDunDefAchievementManager_DoesAnyLocalPlayerHaveAchievementUnlocked_Params
{
};

// Function UDKGame.DunDefAchievementManager.IsAchievementUnlocked
struct UDunDefAchievementManager_IsAchievementUnlocked_Params
{
};

// Function UDKGame.DunDefAchievementManager.AreAllOtherAchievementsUnlocked
struct UDunDefAchievementManager_AreAllOtherAchievementsUnlocked_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckToUnlockAchivement
struct UDunDefAchievementManager_CheckToUnlockAchivement_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckAllFamiliars
struct UDunDefAchievementManager_CheckAllFamiliars_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckFamiliars
struct UDunDefAchievementManager_CheckFamiliars_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckSurvivalWaveAchievements
struct UDunDefAchievementManager_CheckSurvivalWaveAchievements_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckAwardAchievements
struct UDunDefAchievementManager_CheckAwardAchievements_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckAward
struct UDunDefAchievementManager_CheckAward_Params
{
};

// Function UDKGame.DunDefAchievementManager.CheckLevelCompletionAchievements
struct UDunDefAchievementManager_CheckLevelCompletionAchievements_Params
{
};

// Function UDKGame.DunDefAchievementManager.CanIGetAHug
struct UDunDefAchievementManager_CanIGetAHug_Params
{
};

// Function UDKGame.DunDefAchievementManager.GetAchievemntEntryIndex
struct UDunDefAchievementManager_GetAchievemntEntryIndex_Params
{
};

// Function UDKGame.DunDefAchievementManager.GetCoreUnlockString
struct UDunDefAchievementManager_GetCoreUnlockString_Params
{
};

// Function UDKGame.DunDefAchievementManager.UnlockCores
struct UDunDefAchievementManager_UnlockCores_Params
{
};

// Function UDKGame.DunDefAchievementManager.DoUnlockAchivement
struct UDunDefAchievementManager_DoUnlockAchivement_Params
{
};

// Function UDKGame.DunDefViewportClient.SetSimpleDamageNumbers
struct UDunDefViewportClient_SetSimpleDamageNumbers_Params
{
};

// Function UDKGame.DunDefViewportClient.SetDamageNumberScale
struct UDunDefViewportClient_SetDamageNumberScale_Params
{
};

// Function UDKGame.DunDefViewportClient.SetCensorItems
struct UDunDefViewportClient_SetCensorItems_Params
{
};

// Function UDKGame.DunDefViewportClient.ToggleItemCensor
struct UDunDefViewportClient_ToggleItemCensor_Params
{
};

// Function UDKGame.DunDefViewportClient.SetQualityOutlineFilter
struct UDunDefViewportClient_SetQualityOutlineFilter_Params
{
};

// Function UDKGame.DunDefViewportClient.ToggleQualityOutline
struct UDunDefViewportClient_ToggleQualityOutline_Params
{
};

// Function UDKGame.DunDefViewportClient.SetQualityOutline
struct UDunDefViewportClient_SetQualityOutline_Params
{
};

// Function UDKGame.DunDefViewportClient.ToggleHideMiniMapBillboards
struct UDunDefViewportClient_ToggleHideMiniMapBillboards_Params
{
};

// Function UDKGame.DunDefViewportClient.GetHardcore
struct UDunDefViewportClient_GetHardcore_Params
{
};

// Function UDKGame.DunDefViewportClient.SetHardcore
struct UDunDefViewportClient_SetHardcore_Params
{
};

// Function UDKGame.DunDefViewportClient.SetHideMiniMapBillboards
struct UDunDefViewportClient_SetHideMiniMapBillboards_Params
{
};

// Function UDKGame.DunDefViewportClient.ToggleHideGoodEquipmentOverlay
struct UDunDefViewportClient_ToggleHideGoodEquipmentOverlay_Params
{
};

// Function UDKGame.DunDefViewportClient.SetHideGoodEquipmentOverlay
struct UDunDefViewportClient_SetHideGoodEquipmentOverlay_Params
{
};

// Function UDKGame.DunDefViewportClient.ToggleHideMiniMapTowers
struct UDunDefViewportClient_ToggleHideMiniMapTowers_Params
{
};

// Function UDKGame.DunDefViewportClient.SetHideMiniMapTowers
struct UDunDefViewportClient_SetHideMiniMapTowers_Params
{
};

// Function UDKGame.DunDefViewportClient.IncreaseSF
struct UDunDefViewportClient_IncreaseSF_Params
{
};

// Function UDKGame.DunDefViewportClient.IncreaseDisplayedTowerUpgradeLevel
struct UDunDefViewportClient_IncreaseDisplayedTowerUpgradeLevel_Params
{
};

// Function UDKGame.DunDefViewportClient.CycleItemQualityFx
struct UDunDefViewportClient_CycleItemQualityFx_Params
{
};

// Function UDKGame.DunDefViewportClient.CycleShowEquipmentQualityCount
struct UDunDefViewportClient_CycleShowEquipmentQualityCount_Params
{
};

// Function UDKGame.DunDefViewportClient.SetCosmeticSetVisible
struct UDunDefViewportClient_SetCosmeticSetVisible_Params
{
};

// Function UDKGame.DunDefViewportClient.SetCDPortalVisible
struct UDunDefViewportClient_SetCDPortalVisible_Params
{
};

// Function UDKGame.DunDefViewportClient.SetShowEquipmentQualityCount
struct UDunDefViewportClient_SetShowEquipmentQualityCount_Params
{
};

// Function UDKGame.DunDefViewportClient.SetDroppedItemQualityFx
struct UDunDefViewportClient_SetDroppedItemQualityFx_Params
{
};

// Function UDKGame.DunDefViewportClient.SetOtherPlayerCanSellTower
struct UDunDefViewportClient_SetOtherPlayerCanSellTower_Params
{
};

// Function UDKGame.DunDefViewportClient.SetCanMoveWhileBuilding
struct UDunDefViewportClient_SetCanMoveWhileBuilding_Params
{
};

// Function UDKGame.DunDefViewportClient.SetTowersUseDynamicLighting
struct UDunDefViewportClient_SetTowersUseDynamicLighting_Params
{
};

// Function UDKGame.DunDefViewportClient.SetOutline
struct UDunDefViewportClient_SetOutline_Params
{
};

// Function UDKGame.DunDefViewportClient.SetFrameRateLimit
struct UDunDefViewportClient_SetFrameRateLimit_Params
{
};

// Function UDKGame.DunDefViewportClient.SetGraphicsQuality
struct UDunDefViewportClient_SetGraphicsQuality_Params
{
};

// Function UDKGame.DunDefViewportClient.RemoveSplitscreenPlayers
struct UDunDefViewportClient_RemoveSplitscreenPlayers_Params
{
};

// Function UDKGame.DunDefViewportClient.WorldPreBeginPlay
struct UDunDefViewportClient_WorldPreBeginPlay_Params
{
};

// Function UDKGame.DunDefViewportClient.IsGamepadOwned
struct UDunDefViewportClient_IsGamepadOwned_Params
{
};

// Function UDKGame.DunDefViewportClient.IsAnyPlayerUsingGamepad
struct UDunDefViewportClient_IsAnyPlayerUsingGamepad_Params
{
};

// Function UDKGame.DunDefViewportClient.GetResolutionString
struct UDunDefViewportClient_GetResolutionString_Params
{
};

// Function UDKGame.DunDefViewportClient.CinematicCompleted
struct UDunDefViewportClient_CinematicCompleted_Params
{
};

// Function UDKGame.DunDefViewportClient.HasFullSceenInputLockingUI
struct UDunDefViewportClient_HasFullSceenInputLockingUI_Params
{
};

// Function UDKGame.DunDefViewportClient.PlayMusic
struct UDunDefViewportClient_PlayMusic_Params
{
};

// Function UDKGame.DunDefViewportClient.SetVisibleInWaitingMode
struct UDunDefViewportClient_SetVisibleInWaitingMode_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLastMainMenuButton
struct UDunDefViewportClient_GetLastMainMenuButton_Params
{
};

// Function UDKGame.DunDefViewportClient.SetLastMainMenuButton
struct UDunDefViewportClient_SetLastMainMenuButton_Params
{
};

// Function UDKGame.DunDefViewportClient.IsAnyConsolePointerAvailable
struct UDunDefViewportClient_IsAnyConsolePointerAvailable_Params
{
};

// Function UDKGame.DunDefViewportClient.EditBoxSubmitted
struct UDunDefViewportClient_EditBoxSubmitted_Params
{
};

// Function UDKGame.DunDefViewportClient.EditBoxFocused
struct UDunDefViewportClient_EditBoxFocused_Params
{
};

// Function UDKGame.DunDefViewportClient.FlushPlayerInputs
struct UDunDefViewportClient_FlushPlayerInputs_Params
{
};

// Function UDKGame.DunDefViewportClient.RemoveNonSignedInControllers
struct UDunDefViewportClient_RemoveNonSignedInControllers_Params
{
};

// Function UDKGame.DunDefViewportClient.ShowMessageForLastConnectionErrors
struct UDunDefViewportClient_ShowMessageForLastConnectionErrors_Params
{
};

// Function UDKGame.DunDefViewportClient.ClearCachedMessage
struct UDunDefViewportClient_ClearCachedMessage_Params
{
};

// Function UDKGame.DunDefViewportClient.SetCachedMessage
struct UDunDefViewportClient_SetCachedMessage_Params
{
};

// Function UDKGame.DunDefViewportClient.CachedMessageIsDisplaying
struct UDunDefViewportClient_CachedMessageIsDisplaying_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyLocalPlayerLeaving
struct UDunDefViewportClient_NotifyLocalPlayerLeaving_Params
{
};

// Function UDKGame.DunDefViewportClient.ChangedKeyboardPlayer
struct UDunDefViewportClient_ChangedKeyboardPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.OnInputAxis
struct UDunDefViewportClient_OnInputAxis_Params
{
};

// Function UDKGame.DunDefViewportClient.GameSessionEnded
struct UDunDefViewportClient_GameSessionEnded_Params
{
};

// Function UDKGame.DunDefViewportClient.IsPrimaryProfilePlayer
struct UDunDefViewportClient_IsPrimaryProfilePlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.GetFreeEmulatorSlot
struct UDunDefViewportClient_GetFreeEmulatorSlot_Params
{
};

// Function UDKGame.DunDefViewportClient.EmulatorUnpause
struct UDunDefViewportClient_EmulatorUnpause_Params
{
};

// Function UDKGame.DunDefViewportClient.QuickAddSplits
struct UDunDefViewportClient_QuickAddSplits_Params
{
};

// Function UDKGame.DunDefViewportClient.KickAllSplits
struct UDunDefViewportClient_KickAllSplits_Params
{
};

// Function UDKGame.DunDefViewportClient.HandlePotentialEmulatorLeave
struct UDunDefViewportClient_HandlePotentialEmulatorLeave_Params
{
};

// Function UDKGame.DunDefViewportClient.SetEmulatorPlayer
struct UDunDefViewportClient_SetEmulatorPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.SetKeyboardPlayer
struct UDunDefViewportClient_SetKeyboardPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.RefreshGamepadAssignments
struct UDunDefViewportClient_RefreshGamepadAssignments_Params
{
};

// Function UDKGame.DunDefViewportClient.GetViewportClient
struct UDunDefViewportClient_GetViewportClient_Params
{
};

// Function UDKGame.DunDefViewportClient.UpdateAutoSplitType
struct UDunDefViewportClient_UpdateAutoSplitType_Params
{
};

// Function UDKGame.DunDefViewportClient.ResetForNewMap
struct UDunDefViewportClient_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefViewportClient.Init
struct UDunDefViewportClient_Init_Params
{
};

// Function UDKGame.DunDefViewportClient.HideGlobalScene
struct UDunDefViewportClient_HideGlobalScene_Params
{
};

// Function UDKGame.DunDefViewportClient.ShowGlobalScene
struct UDunDefViewportClient_ShowGlobalScene_Params
{
};

// Function UDKGame.DunDefViewportClient.DelayedShowGlobalScene
struct UDunDefViewportClient_DelayedShowGlobalScene_Params
{
};

// Function UDKGame.DunDefViewportClient.DrawTransitionMessage
struct UDunDefViewportClient_DrawTransitionMessage_Params
{
};

// Function UDKGame.DunDefViewportClient.AdjustSplitScreenPerformance
struct UDunDefViewportClient_AdjustSplitScreenPerformance_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseLoadingScreen
struct UDunDefViewportClient_CloseLoadingScreen_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseAllUIScenesOfClass
struct UDunDefViewportClient_CloseAllUIScenesOfClass_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseAllGlobalUIScenesOfClass
struct UDunDefViewportClient_CloseAllGlobalUIScenesOfClass_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseExtraPauseMenuScenes
struct UDunDefViewportClient_CloseExtraPauseMenuScenes_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseAllGlobalUIScenesForPlayer
struct UDunDefViewportClient_CloseAllGlobalUIScenesForPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseAllInputProcessingScenes
struct UDunDefViewportClient_CloseAllInputProcessingScenes_Params
{
};

// Function UDKGame.DunDefViewportClient.CloseAllGlobalUIScenes
struct UDunDefViewportClient_CloseAllGlobalUIScenes_Params
{
};

// Function UDKGame.DunDefViewportClient.ShowLoadingScreen
struct UDunDefViewportClient_ShowLoadingScreen_Params
{
};

// Function UDKGame.DunDefViewportClient.SetAllGlobalUIScenesVisible
struct UDunDefViewportClient_SetAllGlobalUIScenesVisible_Params
{
};

// Function UDKGame.DunDefViewportClient.GetGameInfo
struct UDunDefViewportClient_GetGameInfo_Params
{
};

// Function UDKGame.DunDefViewportClient.SetResolution
struct UDunDefViewportClient_SetResolution_Params
{
};

// Function UDKGame.DunDefViewportClient.SetPostProcessingEnabled
struct UDunDefViewportClient_SetPostProcessingEnabled_Params
{
};

// Function UDKGame.DunDefViewportClient.SetUIScalePercent
struct UDunDefViewportClient_SetUIScalePercent_Params
{
};

// Function UDKGame.DunDefViewportClient.SetSaturation
struct UDunDefViewportClient_SetSaturation_Params
{
};

// Function UDKGame.DunDefViewportClient.SetGamma
struct UDunDefViewportClient_SetGamma_Params
{
};

// Function UDKGame.DunDefViewportClient.GetEngine
struct UDunDefViewportClient_GetEngine_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyConnectionError
struct UDunDefViewportClient_NotifyConnectionError_Params
{
};

// Function UDKGame.DunDefViewportClient.ReportJoinFailure
struct UDunDefViewportClient_ReportJoinFailure_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyDownloadProgress
struct UDunDefViewportClient_NotifyDownloadProgress_Params
{
};

// Function UDKGame.DunDefViewportClient.OnCancelDownloadProgress
struct UDunDefViewportClient_OnCancelDownloadProgress_Params
{
};

// Function UDKGame.DunDefViewportClient.OnAcceptConnectionError
struct UDunDefViewportClient_OnAcceptConnectionError_Params
{
};

// Function UDKGame.DunDefViewportClient.TestAudioSettings
struct UDunDefViewportClient_TestAudioSettings_Params
{
};

// Function UDKGame.DunDefViewportClient.UpdateAudioSettings
struct UDunDefViewportClient_UpdateAudioSettings_Params
{
};

// Function UDKGame.DunDefViewportClient.SetMusicVolume
struct UDunDefViewportClient_SetMusicVolume_Params
{
};

// Function UDKGame.DunDefViewportClient.SetSFXVolume
struct UDunDefViewportClient_SetSFXVolume_Params
{
};

// Function UDKGame.DunDefViewportClient.FirstTick
struct UDunDefViewportClient_FirstTick_Params
{
};

// Function UDKGame.DunDefViewportClient.PlayerFourInvited
struct UDunDefViewportClient_PlayerFourInvited_Params
{
};

// Function UDKGame.DunDefViewportClient.PlayerThreeInvited
struct UDunDefViewportClient_PlayerThreeInvited_Params
{
};

// Function UDKGame.DunDefViewportClient.PlayerTwoInvited
struct UDunDefViewportClient_PlayerTwoInvited_Params
{
};

// Function UDKGame.DunDefViewportClient.PlayerOneInvited
struct UDunDefViewportClient_PlayerOneInvited_Params
{
};

// Function UDKGame.DunDefViewportClient.CreatePlayerForInvte
struct UDunDefViewportClient_CreatePlayerForInvte_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyEquipmentChanged
struct UDunDefViewportClient_NotifyEquipmentChanged_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyLevelVictory
struct UDunDefViewportClient_NotifyLevelVictory_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyGameOver
struct UDunDefViewportClient_NotifyGameOver_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyPlayerTakeHit
struct UDunDefViewportClient_NotifyPlayerTakeHit_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyPhaseChange
struct UDunDefViewportClient_NotifyPhaseChange_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyPlayerLeft
struct UDunDefViewportClient_NotifyPlayerLeft_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyLocalPlayerRemoved
struct UDunDefViewportClient_NotifyLocalPlayerRemoved_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyLocalPlayerAdded
struct UDunDefViewportClient_NotifyLocalPlayerAdded_Params
{
};

// Function UDKGame.DunDefViewportClient.NotifyPlayerJoined
struct UDunDefViewportClient_NotifyPlayerJoined_Params
{
};

// Function UDKGame.DunDefViewportClient.IsTopLevelSceneForEveryone
struct UDunDefViewportClient_IsTopLevelSceneForEveryone_Params
{
};

// Function UDKGame.DunDefViewportClient.IsTopLevelSceneOrNone
struct UDunDefViewportClient_IsTopLevelSceneOrNone_Params
{
};

// Function UDKGame.DunDefViewportClient.GetActiveScene
struct UDunDefViewportClient_GetActiveScene_Params
{
};

// Function UDKGame.DunDefViewportClient.IsTopLevelScene
struct UDunDefViewportClient_IsTopLevelScene_Params
{
};

// Function UDKGame.DunDefViewportClient.GetActiveUIScenesFromClass
struct UDunDefViewportClient_GetActiveUIScenesFromClass_Params
{
};

// Function UDKGame.DunDefViewportClient.GetActiveUISceneFromClass
struct UDunDefViewportClient_GetActiveUISceneFromClass_Params
{
};

// Function UDKGame.DunDefViewportClient.GetActiveUISceneFromBaseClass
struct UDunDefViewportClient_GetActiveUISceneFromBaseClass_Params
{
};

// Function UDKGame.DunDefViewportClient.GetActiveUIScene
struct UDunDefViewportClient_GetActiveUIScene_Params
{
};

// Function UDKGame.DunDefViewportClient.IsSceneInstanceOpened
struct UDunDefViewportClient_IsSceneInstanceOpened_Params
{
};

// Function UDKGame.DunDefViewportClient.GetSceneShowingKeyboard
struct UDunDefViewportClient_GetSceneShowingKeyboard_Params
{
};

// Function UDKGame.DunDefViewportClient.HideCursor
struct UDunDefViewportClient_HideCursor_Params
{
};

// Function UDKGame.DunDefViewportClient.Tick
struct UDunDefViewportClient_Tick_Params
{
};

// Function UDKGame.DunDefViewportClient.ResolutionChanged
struct UDunDefViewportClient_ResolutionChanged_Params
{
};

// Function UDKGame.DunDefViewportClient.PerformStatsSending
struct UDunDefViewportClient_PerformStatsSending_Params
{
};

// Function UDKGame.DunDefViewportClient.GetFirstGamePlayer
struct UDunDefViewportClient_GetFirstGamePlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLocalPlayerWithController
struct UDunDefViewportClient_GetLocalPlayerWithController_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLocalPlayerFromIndex
struct UDunDefViewportClient_GetLocalPlayerFromIndex_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLocalKeyboardPlayer
struct UDunDefViewportClient_GetLocalKeyboardPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.GetNumLocalPlayers
struct UDunDefViewportClient_GetNumLocalPlayers_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLocalPlayerControllerIds
struct UDunDefViewportClient_GetLocalPlayerControllerIds_Params
{
};

// Function UDKGame.DunDefViewportClient.GetLocalPlayers
struct UDunDefViewportClient_GetLocalPlayers_Params
{
};

// Function UDKGame.DunDefViewportClient.DunDefSetSplitScreen
struct UDunDefViewportClient_DunDefSetSplitScreen_Params
{
};

// Function UDKGame.DunDefViewportClient.AllowSplitscreenJoin
struct UDunDefViewportClient_AllowSplitscreenJoin_Params
{
};

// Function UDKGame.DunDefViewportClient.UpdateActiveSplitscreenType
struct UDunDefViewportClient_UpdateActiveSplitscreenType_Params
{
};

// Function UDKGame.DunDefViewportClient.GetIndexOfLocalPlayer
struct UDunDefViewportClient_GetIndexOfLocalPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.CreatePlayer
struct UDunDefViewportClient_CreatePlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.ResetKeyboardController
struct UDunDefViewportClient_ResetKeyboardController_Params
{
};

// Function UDKGame.DunDefViewportClient.RemovePlayer
struct UDunDefViewportClient_RemovePlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.DebugRemovePlayer
struct UDunDefViewportClient_DebugRemovePlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.DebugCreateLocalPlayer
struct UDunDefViewportClient_DebugCreateLocalPlayer_Params
{
};

// Function UDKGame.DunDefViewportClient.GetCurrentCanvasSize
struct UDunDefViewportClient_GetCurrentCanvasSize_Params
{
};

// Function UDKGame.DunDefViewportClient.SetMousePositionFromWorldVector
struct UDunDefViewportClient_SetMousePositionFromWorldVector_Params
{
};

// Function UDKGame.DunDefViewportClient.SetMousePos
struct UDunDefViewportClient_SetMousePos_Params
{
};

// Function UDKGame.DunDefViewportClient.SetMousePosition
struct UDunDefViewportClient_SetMousePosition_Params
{
};

// Function UDKGame.DunDefViewportClient.ResetCursorParticle
struct UDunDefViewportClient_ResetCursorParticle_Params
{
};

// Function UDKGame.DunDefViewportClient.UpdateCursorParticles
struct UDunDefViewportClient_UpdateCursorParticles_Params
{
};

// Function UDKGame.DunDefViewportClient.DrawCursorParticles
struct UDunDefViewportClient_DrawCursorParticles_Params
{
};

// Function UDKGame.DunDefViewportClient.ShouldDrawGameplayCursor
struct UDunDefViewportClient_ShouldDrawGameplayCursor_Params
{
};

// Function UDKGame.DunDefViewportClient.ChaseCenterCursor
struct UDunDefViewportClient_ChaseCenterCursor_Params
{
};

// Function UDKGame.DunDefViewportClient.ShouldLockCursorPosition
struct UDunDefViewportClient_ShouldLockCursorPosition_Params
{
};

// Function UDKGame.DunDefViewportClient.AreAnyPlayersUsingCursorChaseCamera
struct UDunDefViewportClient_AreAnyPlayersUsingCursorChaseCamera_Params
{
};

// Function UDKGame.DunDefViewportClient.DrawCursor
struct UDunDefViewportClient_DrawCursor_Params
{
};

// Function UDKGame.DunDefViewportClient.ShouldShowCursorParticles
struct UDunDefViewportClient_ShouldShowCursorParticles_Params
{
};

// Function UDKGame.DunDefViewportClient.GetPlayerController
struct UDunDefViewportClient_GetPlayerController_Params
{
};

// Function UDKGame.DunDefViewportClient.HasAnyPawn
struct UDunDefViewportClient_HasAnyPawn_Params
{
};

// Function UDKGame.DunDefViewportClient.PostRender
struct UDunDefViewportClient_PostRender_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.InitFrom
struct UCampaignLevelEntryObject_InitFrom_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.IsRootEntry
struct UCampaignLevelEntryObject_IsRootEntry_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.GetFolderID
struct UCampaignLevelEntryObject_GetFolderID_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.GetEntryEnabled
struct UCampaignLevelEntryObject_GetEntryEnabled_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.GetDataProps
struct UCampaignLevelEntryObject_GetDataProps_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.GetEntryFriendlyName
struct UCampaignLevelEntryObject_GetEntryFriendlyName_Params
{
};

// Function UDKGame.CampaignLevelEntryObject.GetDataString
struct UCampaignLevelEntryObject_GetDataString_Params
{
};

// Function UDKGame.DunDefPlayerStats.FillStats
struct UDunDefPlayerStats_FillStats_Params
{
};

// Function UDKGame.DunDefPlayerStats.Initialize
struct UDunDefPlayerStats_Initialize_Params
{
};

// Function UDKGame.DunDefPlayerStats.GetDataListEntries
struct UDunDefPlayerStats_GetDataListEntries_Params
{
};

// Function UDKGame.ItemFolderStub.IsRootEntry
struct UItemFolderStub_IsRootEntry_Params
{
};

// Function UDKGame.ItemFolderStub.GetDataProps
struct UItemFolderStub_GetDataProps_Params
{
};

// Function UDKGame.ItemFolderStub.GetFolderID
struct UItemFolderStub_GetFolderID_Params
{
};

// Function UDKGame.ItemFolderStub.GetDataString
struct UItemFolderStub_GetDataString_Params
{
};

// Function UDKGame.ItemFolderStub.GetEntryEnabled
struct UItemFolderStub_GetEntryEnabled_Params
{
};

// Function UDKGame.DunDefSceneClient.EmulateOnlineServiceConnect
struct UDunDefSceneClient_EmulateOnlineServiceConnect_Params
{
};

// Function UDKGame.DunDefSceneClient.EmulateOnlineServiceDisconnect
struct UDunDefSceneClient_EmulateOnlineServiceDisconnect_Params
{
};

// Function UDKGame.DunDefSceneClient.EmulateLinkStatusChange
struct UDunDefSceneClient_EmulateLinkStatusChange_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyActiveSplitScreenChanged
struct UDunDefSceneClient_NotifyActiveSplitScreenChanged_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyOnlineServiceStatusChanged
struct UDunDefSceneClient_NotifyOnlineServiceStatusChanged_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyLinkStatusChanged
struct UDunDefSceneClient_NotifyLinkStatusChanged_Params
{
};

// Function UDKGame.DunDefSceneClient.PauseGame
struct UDunDefSceneClient_PauseGame_Params
{
};

// Function UDKGame.DunDefSceneClient.GetDunDefSceneClient
struct UDunDefSceneClient_GetDunDefSceneClient_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyGameSessionEnded
struct UDunDefSceneClient_NotifyGameSessionEnded_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyClientTravel
struct UDunDefSceneClient_NotifyClientTravel_Params
{
};

// Function UDKGame.DunDefSceneClient.MidGameLoadConfirmation
struct UDunDefSceneClient_MidGameLoadConfirmation_Params
{
};

// Function UDKGame.DunDefSceneClient.LoadToMainMenu
struct UDunDefSceneClient_LoadToMainMenu_Params
{
};

// Function UDKGame.DunDefSceneClient.HasActiveDunDefMessageBox
struct UDunDefSceneClient_HasActiveDunDefMessageBox_Params
{
};

// Function UDKGame.DunDefSceneClient.CloseDunDefMessageBox
struct UDunDefSceneClient_CloseDunDefMessageBox_Params
{
};

// Function UDKGame.DunDefSceneClient.ShowDunDefMessageBox
struct UDunDefSceneClient_ShowDunDefMessageBox_Params
{
};

// Function UDKGame.DunDefSceneClient.SetLowParticles
struct UDunDefSceneClient_SetLowParticles_Params
{
};

// Function UDKGame.DunDefSceneClient.RefreshUsedHeroes
struct UDunDefSceneClient_RefreshUsedHeroes_Params
{
};

// Function UDKGame.DunDefSceneClient.RefreshHeroLists
struct UDunDefSceneClient_RefreshHeroLists_Params
{
};

// Function UDKGame.DunDefSceneClient.SetSHLights
struct UDunDefSceneClient_SetSHLights_Params
{
};

// Function UDKGame.DunDefSceneClient.UpdateVisibleStaticMeshes
struct UDunDefSceneClient_UpdateVisibleStaticMeshes_Params
{
};

// Function UDKGame.DunDefSceneClient.ManageSMCVisibility
struct UDunDefSceneClient_ManageSMCVisibility_Params
{
};

// Function UDKGame.DunDefSceneClient.UpdateVisibleActors
struct UDunDefSceneClient_UpdateVisibleActors_Params
{
};

// Function UDKGame.DunDefSceneClient.DisablePostProcessing
struct UDunDefSceneClient_DisablePostProcessing_Params
{
};

// Function UDKGame.DunDefSceneClient.EnablePostProcessing
struct UDunDefSceneClient_EnablePostProcessing_Params
{
};

// Function UDKGame.DunDefSceneClient.ToggleCustomEffects
struct UDunDefSceneClient_ToggleCustomEffects_Params
{
};

// Function UDKGame.DunDefSceneClient.SetupPlayerPostProcess
struct UDunDefSceneClient_SetupPlayerPostProcess_Params
{
};

// Function UDKGame.DunDefSceneClient.GetTemplateChain
struct UDunDefSceneClient_GetTemplateChain_Params
{
};

// Function UDKGame.DunDefSceneClient.AdjustPerformanceForAddedPlayer
struct UDunDefSceneClient_AdjustPerformanceForAddedPlayer_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyPlayerAdded
struct UDunDefSceneClient_NotifyPlayerAdded_Params
{
};

// Function UDKGame.DunDefSceneClient.NotifyPlayerRemoved
struct UDunDefSceneClient_NotifyPlayerRemoved_Params
{
};

// Function UDKGame.DunDefCrystalCore.PlayHitEffect
struct ADunDefCrystalCore_PlayHitEffect_Params
{
};

// Function UDKGame.DunDefCrystalCore.AllowDarknessIgnorance
struct ADunDefCrystalCore_AllowDarknessIgnorance_Params
{
};

// Function UDKGame.DunDefCrystalCore.EncroachedBy
struct ADunDefCrystalCore_EncroachedBy_Params
{
};

// Function UDKGame.DunDefCrystalCore.DTGetEnemyTargetingDesirability
struct ADunDefCrystalCore_DTGetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefCrystalCore.SetBuildEffect
struct ADunDefCrystalCore_SetBuildEffect_Params
{
};

// Function UDKGame.DunDefCrystalCore.SetVictoryEffect
struct ADunDefCrystalCore_SetVictoryEffect_Params
{
};

// Function UDKGame.DunDefCrystalCore.ChangedGamePhases
struct ADunDefCrystalCore_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefCrystalCore.DrawMiniMapIcon
struct ADunDefCrystalCore_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefCrystalCore.SubtractHealth
struct ADunDefCrystalCore_SubtractHealth_Params
{
};

// Function UDKGame.DunDefCrystalCore.UpdateCrystalCore
struct ADunDefCrystalCore_UpdateCrystalCore_Params
{
};

// Function UDKGame.DunDefCrystalCore.PostBeginPlay
struct ADunDefCrystalCore_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefCrystalCore.PreventTowerAtPoint
struct ADunDefCrystalCore_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefCrystalCore.AllowTowerAtPoint
struct ADunDefCrystalCore_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefCrystalCore.CheckAllowance
struct ADunDefCrystalCore_CheckAllowance_Params
{
};

// Function UDKGame.DunDefCrystalCore.GetHeroManager
struct ADunDefCrystalCore_GetHeroManager_Params
{
};

// Function UDKGame.DunDefCrystalCore.Destroyed
struct ADunDefCrystalCore_Destroyed_Params
{
};

// Function UDKGame.DunDefCrystalCore.Died
struct ADunDefCrystalCore_Died_Params
{
};

// Function UDKGame.DunDefCrystalCore.NotifyTookDamage
struct ADunDefCrystalCore_NotifyTookDamage_Params
{
};

// Function UDKGame.DunDefCrystalCore.DrawMyHUD
struct ADunDefCrystalCore_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefCrystalCore.NotifyHealthChange
struct ADunDefCrystalCore_NotifyHealthChange_Params
{
};

// Function UDKGame.DunDefCrystalCore.Client_Activate
struct ADunDefCrystalCore_Client_Activate_Params
{
};

// Function UDKGame.DunDefCrystalCore.Server_Activate
struct ADunDefCrystalCore_Server_Activate_Params
{
};

// Function UDKGame.DunDefCrystalCore.Activate
struct ADunDefCrystalCore_Activate_Params
{
};

// Function UDKGame.DunDefCrystalCore.AllowActivation
struct ADunDefCrystalCore_AllowActivation_Params
{
};

// Function UDKGame.DunDefCrystalCore.GetLobbyActivationString
struct ADunDefCrystalCore_GetLobbyActivationString_Params
{
};

// Function UDKGame.DunDefCrystalCore.DrawToolTip
struct ADunDefCrystalCore_DrawToolTip_Params
{
};

// Function UDKGame.DunDefCrystalCore.ExecReplicatedFunction
struct ADunDefCrystalCore_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefCrystalCore.ReplicatedEvent
struct ADunDefCrystalCore_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefCrystalCore.GetEnemyTargetingDesirability
struct ADunDefCrystalCore_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ForceSetCameraLocation
struct ADunDefPlayerCamera_ForceSetCameraLocation_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ZoomOutValue
struct ADunDefPlayerCamera_ZoomOutValue_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ZoomInValue
struct ADunDefPlayerCamera_ZoomInValue_Params
{
};

// Function UDKGame.DunDefPlayerCamera.MoveCamera
struct ADunDefPlayerCamera_MoveCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UseFreeLook
struct ADunDefPlayerCamera_UseFreeLook_Params
{
};

// Function UDKGame.DunDefPlayerCamera.IsInShoulderMode
struct ADunDefPlayerCamera_IsInShoulderMode_Params
{
};

// Function UDKGame.DunDefPlayerCamera.PlayCameraShake
struct ADunDefPlayerCamera_PlayCameraShake_Params
{
};

// Function UDKGame.DunDefPlayerCamera.InitializeFor
struct ADunDefPlayerCamera_InitializeFor_Params
{
};

// Function UDKGame.DunDefPlayerCamera.InitializeForPlayer
struct ADunDefPlayerCamera_InitializeForPlayer_Params
{
};

// Function UDKGame.DunDefPlayerCamera.NotifyPlayerDied
struct ADunDefPlayerCamera_NotifyPlayerDied_Params
{
};

// Function UDKGame.DunDefPlayerCamera.NotifyPlayerTakeHit
struct ADunDefPlayerCamera_NotifyPlayerTakeHit_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateOptions
struct ADunDefPlayerCamera_UpdateOptions_Params
{
};

// Function UDKGame.DunDefPlayerCamera.CycleZoom
struct ADunDefPlayerCamera_CycleZoom_Params
{
};

// Function UDKGame.DunDefPlayerCamera.GetCameraZoomPercent
struct ADunDefPlayerCamera_GetCameraZoomPercent_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ZoomOut
struct ADunDefPlayerCamera_ZoomOut_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ZoomIn
struct ADunDefPlayerCamera_ZoomIn_Params
{
};

// Function UDKGame.DunDefPlayerCamera.AdjustDesiredFOV
struct ADunDefPlayerCamera_AdjustDesiredFOV_Params
{
};

// Function UDKGame.DunDefPlayerCamera.GetScreenAspectRatio
struct ADunDefPlayerCamera_GetScreenAspectRatio_Params
{
};

// Function UDKGame.DunDefPlayerCamera.AllowTargetPoint
struct ADunDefPlayerCamera_AllowTargetPoint_Params
{
};

// Function UDKGame.DunDefPlayerCamera.ResetInterpolations
struct ADunDefPlayerCamera_ResetInterpolations_Params
{
};

// Function UDKGame.DunDefPlayerCamera.Teleported
struct ADunDefPlayerCamera_Teleported_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateViewTarget
struct ADunDefPlayerCamera_UpdateViewTarget_Params
{
};

// Function UDKGame.DunDefPlayerCamera.PostCameraTransform
struct ADunDefPlayerCamera_PostCameraTransform_Params
{
};

// Function UDKGame.DunDefPlayerCamera.Tick
struct ADunDefPlayerCamera_Tick_Params
{
};

// Function UDKGame.DunDefPlayerCamera.AllowOverTheShoulderCamera
struct ADunDefPlayerCamera_AllowOverTheShoulderCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateFreeLook
struct ADunDefPlayerCamera_UpdateFreeLook_Params
{
};

// Function UDKGame.DunDefPlayerCamera.DisableShoulderCam
struct ADunDefPlayerCamera_DisableShoulderCam_Params
{
};

// Function UDKGame.DunDefPlayerCamera.EnableShoulderCam
struct ADunDefPlayerCamera_EnableShoulderCam_Params
{
};

// Function UDKGame.DunDefPlayerCamera.IsShoulderCamera
struct ADunDefPlayerCamera_IsShoulderCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.SetCameraTransitionPoint
struct ADunDefPlayerCamera_SetCameraTransitionPoint_Params
{
};

// Function UDKGame.DunDefPlayerCamera.StopPlacingTower
struct ADunDefPlayerCamera_StopPlacingTower_Params
{
};

// Function UDKGame.DunDefPlayerCamera.StartPlacingTower
struct ADunDefPlayerCamera_StartPlacingTower_Params
{
};

// Function UDKGame.DunDefPlayerCamera.CalculateSpinOffset
struct ADunDefPlayerCamera_CalculateSpinOffset_Params
{
};

// Function UDKGame.DunDefPlayerCamera.TiltCamera
struct ADunDefPlayerCamera_TiltCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.SpinCamera
struct ADunDefPlayerCamera_SpinCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.PostBeginPlay
struct ADunDefPlayerCamera_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerCamera.TurnSpectatorCameraOff
struct ADunDefPlayerCamera_TurnSpectatorCameraOff_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateSpectatorCamera
struct ADunDefPlayerCamera_UpdateSpectatorCamera_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateSpectatorSmoothZoom
struct ADunDefPlayerCamera_UpdateSpectatorSmoothZoom_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateSpectatorPitch
struct ADunDefPlayerCamera_UpdateSpectatorPitch_Params
{
};

// Function UDKGame.DunDefPlayerCamera.UpdateSpectatorYaw
struct ADunDefPlayerCamera_UpdateSpectatorYaw_Params
{
};

// Function UDKGame.DunDefPlayerCamera.InitSpectatorCamera
struct ADunDefPlayerCamera_InitSpectatorCamera_Params
{
};

// Function UDKGame.UI_GameSetup.NotifyPlayerRemoved
struct UUI_GameSetup_NotifyPlayerRemoved_Params
{
};

// Function UDKGame.UI_GameSetup.NotifyPlayerAdded
struct UUI_GameSetup_NotifyPlayerAdded_Params
{
};

// Function UDKGame.UI_GameSetup.CloseByPauseMenu
struct UUI_GameSetup_CloseByPauseMenu_Params
{
};

// Function UDKGame.UI_GameSetup.OnReceivedInputKey
struct UUI_GameSetup_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_GameSetup.UpdateDifficultyVisibility
struct UUI_GameSetup_UpdateDifficultyVisibility_Params
{
};

// Function UDKGame.UI_GameSetup.Update
struct UUI_GameSetup_Update_Params
{
};

// Function UDKGame.UI_GameSetup.UpdateWaveNumButtons
struct UUI_GameSetup_UpdateWaveNumButtons_Params
{
};

// Function UDKGame.UI_GameSetup.UpdateLevelMinimumButtons
struct UUI_GameSetup_UpdateLevelMinimumButtons_Params
{
};

// Function UDKGame.UI_GameSetup.NotifyPlayerLeft
struct UUI_GameSetup_NotifyPlayerLeft_Params
{
};

// Function UDKGame.UI_GameSetup.NotifyPlayerJoined
struct UUI_GameSetup_NotifyPlayerJoined_Params
{
};

// Function UDKGame.UI_GameSetup.RefreshedList
struct UUI_GameSetup_RefreshedList_Params
{
};

// Function UDKGame.UI_GameSetup.RefreshMapData
struct UUI_GameSetup_RefreshMapData_Params
{
};

// Function UDKGame.UI_GameSetup.AfterDataListUpdate
struct UUI_GameSetup_AfterDataListUpdate_Params
{
};

// Function UDKGame.UI_GameSetup.BeforeDataListUpdate
struct UUI_GameSetup_BeforeDataListUpdate_Params
{
};

// Function UDKGame.UI_GameSetup.GetHeroManager
struct UUI_GameSetup_GetHeroManager_Params
{
};

// Function UDKGame.UI_GameSetup.EntrySelected
struct UUI_GameSetup_EntrySelected_Params
{
};

// Function UDKGame.UI_GameSetup.SetupDifficultyIcons
struct UUI_GameSetup_SetupDifficultyIcons_Params
{
};

// Function UDKGame.UI_GameSetup.SetupBestOfInfo
struct UUI_GameSetup_SetupBestOfInfo_Params
{
};

// Function UDKGame.UI_GameSetup.OnDLCCompatibilityPromptClick
struct UUI_GameSetup_OnDLCCompatibilityPromptClick_Params
{
};

// Function UDKGame.UI_GameSetup.ShowIncompatibleDLCMessage
struct UUI_GameSetup_ShowIncompatibleDLCMessage_Params
{
};

// Function UDKGame.UI_GameSetup.NotifyWidgetClicked
struct UUI_GameSetup_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_GameSetup.RefreshMapDataForMapType
struct UUI_GameSetup_RefreshMapDataForMapType_Params
{
};

// Function UDKGame.UI_GameSetup.SetCurrentMapListType
struct UUI_GameSetup_SetCurrentMapListType_Params
{
};

// Function UDKGame.UI_GameSetup.GetBestStartingWave
struct UUI_GameSetup_GetBestStartingWave_Params
{
};

// Function UDKGame.UI_GameSetup.ResetMapSettings
struct UUI_GameSetup_ResetMapSettings_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelEntry
struct UUI_GameSetup_GetSelectedLevelEntry_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelDisableHardcore
struct UUI_GameSetup_GetSelectedLevelDisableHardcore_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelIsRestrictedDifficultyMission
struct UUI_GameSetup_GetSelectedLevelIsRestrictedDifficultyMission_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelIsSpecialMission
struct UUI_GameSetup_GetSelectedLevelIsSpecialMission_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelTagName
struct UUI_GameSetup_GetSelectedLevelTagName_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelFriendlyName
struct UUI_GameSetup_GetSelectedLevelFriendlyName_Params
{
};

// Function UDKGame.UI_GameSetup.GetSelectedLevelFileName
struct UUI_GameSetup_GetSelectedLevelFileName_Params
{
};

// Function UDKGame.UI_GameSetup.UIPostRender
struct UUI_GameSetup_UIPostRender_Params
{
};

// Function UDKGame.UI_GameSetup.UpdateMinimumLevelLevel
struct UUI_GameSetup_UpdateMinimumLevelLevel_Params
{
};

// Function UDKGame.UI_GameSetup.SetStartAtWave
struct UUI_GameSetup_SetStartAtWave_Params
{
};

// Function UDKGame.UI_GameSetup.SetHardcore
struct UUI_GameSetup_SetHardcore_Params
{
};

// Function UDKGame.UI_GameSetup.SetUseBuildTimer
struct UUI_GameSetup_SetUseBuildTimer_Params
{
};

// Function UDKGame.UI_GameSetup.SetPureStrategy
struct UUI_GameSetup_SetPureStrategy_Params
{
};

// Function UDKGame.UI_GameSetup.SetInfiniteWaves
struct UUI_GameSetup_SetInfiniteWaves_Params
{
};

// Function UDKGame.UI_GameSetup.SetDifficulty
struct UUI_GameSetup_SetDifficulty_Params
{
};

// Function UDKGame.UI_GameSetup.OnNightmarePopupClicked
struct UUI_GameSetup_OnNightmarePopupClicked_Params
{
};

// Function UDKGame.UI_GameSetup.SetMixMode
struct UUI_GameSetup_SetMixMode_Params
{
};

// Function UDKGame.UI_GameSetup.PostInitialSceneUpdate
struct UUI_GameSetup_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_GameSetup.DoHideScene
struct UUI_GameSetup_DoHideScene_Params
{
};

// Function UDKGame.UI_GameSetup.ComputeMinimumLevelRequirement
struct UUI_GameSetup_ComputeMinimumLevelRequirement_Params
{
};

// Function UDKGame.UI_GameSetup.SceneActivated
struct UUI_GameSetup_SceneActivated_Params
{
};

// Function UDKGame.UI_GameSetup.ReplicateToNewPlayerController
struct UUI_GameSetup_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.UI_GameSetup.ExecReplicatedUIMessage
struct UUI_GameSetup_ExecReplicatedUIMessage_Params
{
};

// Function UDKGame.UI_GameSetup.UnhideScene
struct UUI_GameSetup_UnhideScene_Params
{
};

// Function UDKGame.UI_GameSetup.GetImageInfoForTag
struct UUI_GameSetup_GetImageInfoForTag_Params
{
};

// Function UDKGame.UI_GameSetup.AutoSelectCampaignLevel
struct UUI_GameSetup_AutoSelectCampaignLevel_Params
{
};

// Function UDKGame.DunDefGameSettings.ResetForOnlineHost
struct UDunDefGameSettings_ResetForOnlineHost_Params
{
};

// Function UDKGame.DunDefGameSettings.GetDifficultyEquipmentWeightMultiplier
struct UDunDefGameSettings_GetDifficultyEquipmentWeightMultiplier_Params
{
};

// Function UDKGame.DunDefGameSettings.GetDifficultyScoreMultiplier
struct UDunDefGameSettings_GetDifficultyScoreMultiplier_Params
{
};

// Function UDKGame.DunDefDataStore_DLC.GetDLCIdForLevel
struct UDunDefDataStore_DLC_GetDLCIdForLevel_Params
{
};

// Function UDKGame.DunDefDataStore_DLC.GetDLCMask
struct UDunDefDataStore_DLC_GetDLCMask_Params
{
};

// Function UDKGame.DunDefDataStore_DLC.PostInit
struct UDunDefDataStore_DLC_PostInit_Params
{
};

// Function UDKGame.DunDefDataStore_DLC.GetInstalledDLC
struct UDunDefDataStore_DLC_GetInstalledDLC_Params
{
};

// Function UDKGame.DunDefDataStore_DLC.GetDLCDataStore
struct UDunDefDataStore_DLC_GetDLCDataStore_Params
{
};

// Function UDKGame.DunDefGameStorage.DumpStorage
struct UDunDefGameStorage_DumpStorage_Params
{
};

// Function UDKGame.DunDefGameStorage.HelperClear
struct UDunDefGameStorage_HelperClear_Params
{
};

// Function UDKGame.DunDefDroppedItem.ServerPickedupBy
struct ADunDefDroppedItem_ServerPickedupBy_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.AllowDroppedDestruction
struct ADunDefDroppedEquipment_AllowDroppedDestruction_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.IsLocallyDropped
struct ADunDefDroppedEquipment_IsLocallyDropped_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetNumberOfDroppedEquipment
struct ADunDefDroppedEquipment_GetNumberOfDroppedEquipment_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetToolTipPriority
struct ADunDefDroppedEquipment_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.TakesToolTipPriority
struct ADunDefDroppedEquipment_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.DestroyAllDroppedEquipment
struct ADunDefDroppedEquipment_DestroyAllDroppedEquipment_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.FadeOut
struct ADunDefDroppedEquipment_FadeOut_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetActivationOffset
struct ADunDefDroppedEquipment_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetActivationWeighting
struct ADunDefDroppedEquipment_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.Client_Activate
struct ADunDefDroppedEquipment_Client_Activate_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.Server_Activate
struct ADunDefDroppedEquipment_Server_Activate_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.AllowActivation
struct ADunDefDroppedEquipment_AllowActivation_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.AllowPickupByHero
struct ADunDefDroppedEquipment_AllowPickupByHero_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.SetFXComponentVisibility
struct ADunDefDroppedEquipment_SetFXComponentVisibility_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ToggleBeamFX
struct ADunDefDroppedEquipment_ToggleBeamFX_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ToggleCircleFX
struct ADunDefDroppedEquipment_ToggleCircleFX_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.RefreshQualityColor
struct ADunDefDroppedEquipment_RefreshQualityColor_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.InitMyEquipmentObject
struct ADunDefDroppedEquipment_InitMyEquipmentObject_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.FellOutOfWorld
struct ADunDefDroppedEquipment_FellOutOfWorld_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.InitializeDD
struct ADunDefDroppedEquipment_InitializeDD_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.Destroyed
struct ADunDefDroppedEquipment_Destroyed_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ReportEquipmentToStats
struct ADunDefDroppedEquipment_ReportEquipmentToStats_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.AddToFloorStats
struct ADunDefDroppedEquipment_AddToFloorStats_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ReorderQualityIndex
struct ADunDefDroppedEquipment_ReorderQualityIndex_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetGRI
struct ADunDefDroppedEquipment_GetGRI_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.PlayDroppedSound
struct ADunDefDroppedEquipment_PlayDroppedSound_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.DisableCollision
struct ADunDefDroppedEquipment_DisableCollision_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.PostBeginPlay
struct ADunDefDroppedEquipment_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.RotateSkelMesh
struct ADunDefDroppedEquipment_RotateSkelMesh_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ReplicatedEvent
struct ADunDefDroppedEquipment_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.DrawEquipmentOverlay
struct ADunDefDroppedEquipment_DrawEquipmentOverlay_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.DrawToolTip
struct ADunDefDroppedEquipment_DrawToolTip_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ReplicatedMoveItem
struct ADunDefDroppedEquipment_ReplicatedMoveItem_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ExecReplicatedFunction
struct ADunDefDroppedEquipment_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.ContinueDrawingToolTip
struct ADunDefDroppedEquipment_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.DrawMiniMapIcon
struct ADunDefDroppedEquipment_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefDroppedEquipment.GetItemQualityFilterFromEquipment
struct ADunDefDroppedEquipment_GetItemQualityFilterFromEquipment_Params
{
};

// Function UDKGame.UI_HeroInfo.NotifyPhaseChange
struct UUI_HeroInfo_NotifyPhaseChange_Params
{
};

// Function UDKGame.UI_HeroInfo.InitializeForHero
struct UUI_HeroInfo_InitializeForHero_Params
{
};

// Function UDKGame.UI_HeroInfo.GetOwnerPawn
struct UUI_HeroInfo_GetOwnerPawn_Params
{
};

// Function UDKGame.UI_HeroInfo.GetOwnerHero
struct UUI_HeroInfo_GetOwnerHero_Params
{
};

// Function UDKGame.UI_HeroInfo.GetHero
struct UUI_HeroInfo_GetHero_Params
{
};

// Function UDKGame.UI_HeroInfo.GetHeroManager
struct UUI_HeroInfo_GetHeroManager_Params
{
};

// Function UDKGame.UI_HeroInfo.SceneDeactivated
struct UUI_HeroInfo_SceneDeactivated_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.RemoveCustomBuffData
struct ADunDefPlayerReplicationInfo_RemoveCustomBuffData_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.AddCustomBuffData
struct ADunDefPlayerReplicationInfo_AddCustomBuffData_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetCustomBuffData
struct ADunDefPlayerReplicationInfo_GetCustomBuffData_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetTradeStatus
struct ADunDefPlayerReplicationInfo_GetTradeStatus_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetActiveTradeManager
struct ADunDefPlayerReplicationInfo_GetActiveTradeManager_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ServerSetTegraCompatibility
struct ADunDefPlayerReplicationInfo_ServerSetTegraCompatibility_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ServerSetDLCMask
struct ADunDefPlayerReplicationInfo_ServerSetDLCMask_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.DrawTalker
struct ADunDefPlayerReplicationInfo_DrawTalker_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ReceivedPlayerActor
struct ADunDefPlayerReplicationInfo_ReceivedPlayerActor_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ClientInitialize
struct ADunDefPlayerReplicationInfo_ClientInitialize_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetOnlineName
struct ADunDefPlayerReplicationInfo_GetOnlineName_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHumanReadableNameTwoLines
struct ADunDefPlayerReplicationInfo_GetHumanReadableNameTwoLines_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHumanReadableName
struct ADunDefPlayerReplicationInfo_GetHumanReadableName_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHeroIconPath
struct ADunDefPlayerReplicationInfo_GetHeroIconPath_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHeroicName
struct ADunDefPlayerReplicationInfo_GetHeroicName_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.UpdatePlayerLocation
struct ADunDefPlayerReplicationInfo_UpdatePlayerLocation_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Timer
struct ADunDefPlayerReplicationInfo_Timer_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ClientTriggerEvent
struct ADunDefPlayerReplicationInfo_ClientTriggerEvent_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.TriggerEvent
struct ADunDefPlayerReplicationInfo_TriggerEvent_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHealthColor
struct ADunDefPlayerReplicationInfo_GetHealthColor_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetPlayer
struct ADunDefPlayerReplicationInfo_GetPlayer_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.IsInvalidName
struct ADunDefPlayerReplicationInfo_IsInvalidName_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.CleanMeUp
struct ADunDefPlayerReplicationInfo_CleanMeUp_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Destroyed
struct ADunDefPlayerReplicationInfo_Destroyed_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ShouldBroadCastWelcomeMessage
struct ADunDefPlayerReplicationInfo_ShouldBroadCastWelcomeMessage_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.SetWantToSkipBuildPhase
struct ADunDefPlayerReplicationInfo_SetWantToSkipBuildPhase_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ClientAddBuffToGame
struct ADunDefPlayerReplicationInfo_ClientAddBuffToGame_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Client_UpdateRemoteHeroEquipment
struct ADunDefPlayerReplicationInfo_Client_UpdateRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Client_RemoveRemoteHeroEquipment
struct ADunDefPlayerReplicationInfo_Client_RemoveRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Client_AddRemoteHeroEquipment
struct ADunDefPlayerReplicationInfo_Client_AddRemoteHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Client_SetRemoteHero
struct ADunDefPlayerReplicationInfo_Client_SetRemoteHero_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.AllowSendRemoteHeroInfo
struct ADunDefPlayerReplicationInfo_AllowSendRemoteHeroInfo_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ReplicateToNewPlayerController
struct ADunDefPlayerReplicationInfo_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Server_AddBuff
struct ADunDefPlayerReplicationInfo_Server_AddBuff_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Server_UpdatedHeroEquipment
struct ADunDefPlayerReplicationInfo_Server_UpdatedHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Server_RemovedHeroEquipment
struct ADunDefPlayerReplicationInfo_Server_RemovedHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.Server_AddedHeroEquipment
struct ADunDefPlayerReplicationInfo_Server_AddedHeroEquipment_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.SetHero
struct ADunDefPlayerReplicationInfo_SetHero_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.PostBeginPlay
struct ADunDefPlayerReplicationInfo_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.PrintHeroLevelUpMessage
struct ADunDefPlayerReplicationInfo_PrintHeroLevelUpMessage_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.SetPlayerReplicationInfoIsOld
struct ADunDefPlayerReplicationInfo_SetPlayerReplicationInfoIsOld_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.PrintNewHeroMessage
struct ADunDefPlayerReplicationInfo_PrintNewHeroMessage_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.CopyProperties
struct ADunDefPlayerReplicationInfo_CopyProperties_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.NotifyNewPlayer
struct ADunDefPlayerReplicationInfo_NotifyNewPlayer_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.IsLoadingScreenVisible
struct ADunDefPlayerReplicationInfo_IsLoadingScreenVisible_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.ReplicatedEvent
struct ADunDefPlayerReplicationInfo_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.PossessedAnyPawn
struct ADunDefPlayerReplicationInfo_PossessedAnyPawn_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetHero
struct ADunDefPlayerReplicationInfo_GetHero_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.IsRootEntry
struct ADunDefPlayerReplicationInfo_IsRootEntry_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetFolderID
struct ADunDefPlayerReplicationInfo_GetFolderID_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetDataString
struct ADunDefPlayerReplicationInfo_GetDataString_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetDataProps
struct ADunDefPlayerReplicationInfo_GetDataProps_Params
{
};

// Function UDKGame.DunDefPlayerReplicationInfo.GetEntryEnabled
struct ADunDefPlayerReplicationInfo_GetEntryEnabled_Params
{
};

// Function UDKGame.DunDefEnemy.OnBuffRemoved
struct ADunDefEnemy_OnBuffRemoved_Params
{
};

// Function UDKGame.DunDefEnemy.OnBuffAdded
struct ADunDefEnemy_OnBuffAdded_Params
{
};

// Function UDKGame.DunDefEnemy.GetStatModifier
struct ADunDefEnemy_GetStatModifier_Params
{
};

// Function UDKGame.DunDefEnemy.GetActorLevelUpStatModifier
struct ADunDefEnemy_GetActorLevelUpStatModifier_Params
{
};

// Function UDKGame.DunDefEnemy.SetActorLevelUpStatModifier
struct ADunDefEnemy_SetActorLevelUpStatModifier_Params
{
};

// Function UDKGame.DunDefEnemy.CalculateStatValue
struct ADunDefEnemy_CalculateStatValue_Params
{
};

// Function UDKGame.DunDefEnemy.GetBuffedStatValue
struct ADunDefEnemy_GetBuffedStatValue_Params
{
};

// Function UDKGame.DunDefEnemy.RemoveStatusEffect
struct ADunDefEnemy_RemoveStatusEffect_Params
{
};

// Function UDKGame.DunDefEnemy.AddStatusEffect
struct ADunDefEnemy_AddStatusEffect_Params
{
};

// Function UDKGame.DunDefEnemy.SetGolded
struct ADunDefEnemy_SetGolded_Params
{
};

// Function UDKGame.DunDefEnemy.TimedEffectStun
struct ADunDefEnemy_TimedEffectStun_Params
{
};

// Function UDKGame.DunDefEnemy.ChangedGamePhases
struct ADunDefEnemy_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefEnemy.UseMaxSimultaneousAllowedForPlayers
struct ADunDefEnemy_UseMaxSimultaneousAllowedForPlayers_Params
{
};

// Function UDKGame.DunDefEnemy.ClearAnotherExtraStrengthMultiplier
struct ADunDefEnemy_ClearAnotherExtraStrengthMultiplier_Params
{
};

// Function UDKGame.DunDefEnemy.ClearAnotherExtraMovementSpeedMultiplier
struct ADunDefEnemy_ClearAnotherExtraMovementSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefEnemy.AllowEnemyDrain
struct ADunDefEnemy_AllowEnemyDrain_Params
{
};

// Function UDKGame.DunDefEnemy.GetEnemyClassification
struct ADunDefEnemy_GetEnemyClassification_Params
{
};

// Function UDKGame.DunDefEnemy.GetTowerTargetingDesirability
struct ADunDefEnemy_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefEnemy.AllowObstructionJump
struct ADunDefEnemy_AllowObstructionJump_Params
{
};

// Function UDKGame.DunDefEnemy.ShouldBlockPlayerAim
struct ADunDefEnemy_ShouldBlockPlayerAim_Params
{
};

// Function UDKGame.DunDefEnemy.AddVelocity
struct ADunDefEnemy_AddVelocity_Params
{
};

// Function UDKGame.DunDefEnemy.BumpedATarget
struct ADunDefEnemy_BumpedATarget_Params
{
};

// Function UDKGame.DunDefEnemy.GetScoreWorth
struct ADunDefEnemy_GetScoreWorth_Params
{
};

// Function UDKGame.DunDefEnemy.GetEnemyDifficulty
struct ADunDefEnemy_GetEnemyDifficulty_Params
{
};

// Function UDKGame.DunDefEnemy.GetEnemyIconTexture
struct ADunDefEnemy_GetEnemyIconTexture_Params
{
};

// Function UDKGame.DunDefEnemy.BaseChange
struct ADunDefEnemy_BaseChange_Params
{
};

// Function UDKGame.DunDefEnemy.AllowWeaken
struct ADunDefEnemy_AllowWeaken_Params
{
};

// Function UDKGame.DunDefEnemy.AllowSlowByHero
struct ADunDefEnemy_AllowSlowByHero_Params
{
};

// Function UDKGame.DunDefEnemy.AllowEnrage
struct ADunDefEnemy_AllowEnrage_Params
{
};

// Function UDKGame.DunDefEnemy.AllowEnsnare
struct ADunDefEnemy_AllowEnsnare_Params
{
};

// Function UDKGame.DunDefEnemy.GameOver
struct ADunDefEnemy_GameOver_Params
{
};

// Function UDKGame.DunDefEnemy.EnableDarkness
struct ADunDefEnemy_EnableDarkness_Params
{
};

// Function UDKGame.DunDefEnemy.GetElementalDamageModifier
struct ADunDefEnemy_GetElementalDamageModifier_Params
{
};

// Function UDKGame.DunDefEnemy.ClearElementalEffect
struct ADunDefEnemy_ClearElementalEffect_Params
{
};

// Function UDKGame.DunDefEnemy.IsElementalEnemy
struct ADunDefEnemy_IsElementalEnemy_Params
{
};

// Function UDKGame.DunDefEnemy.GetMiniMapIconTexture
struct ADunDefEnemy_GetMiniMapIconTexture_Params
{
};

// Function UDKGame.DunDefEnemy.GetMiniMapIconColor
struct ADunDefEnemy_GetMiniMapIconColor_Params
{
};

// Function UDKGame.DunDefEnemy.DrawMiniMapIcon
struct ADunDefEnemy_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefEnemy.PossessedBy
struct ADunDefEnemy_PossessedBy_Params
{
};

// Function UDKGame.DunDefEnemy.DelayedTurnOffSkelUpdating
struct ADunDefEnemy_DelayedTurnOffSkelUpdating_Params
{
};

// Function UDKGame.DunDefEnemy.ForceSkelUpdatingDelayTurnOff
struct ADunDefEnemy_ForceSkelUpdatingDelayTurnOff_Params
{
};

// Function UDKGame.DunDefEnemy.ForceSkelUpdating
struct ADunDefEnemy_ForceSkelUpdating_Params
{
};

// Function UDKGame.DunDefEnemy.GetMeleeSwingLocation
struct ADunDefEnemy_GetMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefEnemy.PlayDestructionEffects
struct ADunDefEnemy_PlayDestructionEffects_Params
{
};

// Function UDKGame.DunDefEnemy.SpawnDroppedEquipment
struct ADunDefEnemy_SpawnDroppedEquipment_Params
{
};

// Function UDKGame.DunDefEnemy.Cough
struct ADunDefEnemy_Cough_Params
{
};

// Function UDKGame.DunDefEnemy.StopCoughingAnimation
struct ADunDefEnemy_StopCoughingAnimation_Params
{
};

// Function UDKGame.DunDefEnemy.StartCoughingAnimation
struct ADunDefEnemy_StartCoughingAnimation_Params
{
};

// Function UDKGame.DunDefEnemy.PlayDying
struct ADunDefEnemy_PlayDying_Params
{
};

// Function UDKGame.DunDefEnemy.SetTrueDamageCauser
struct ADunDefEnemy_SetTrueDamageCauser_Params
{
};

// Function UDKGame.DunDefEnemy.SetDiedDamageCauser
struct ADunDefEnemy_SetDiedDamageCauser_Params
{
};

// Function UDKGame.DunDefEnemy.GetDescriptiveName
struct ADunDefEnemy_GetDescriptiveName_Params
{
};

// Function UDKGame.DunDefEnemy.Died
struct ADunDefEnemy_Died_Params
{
};

// Function UDKGame.DunDefEnemy.NotifyTakeHit
struct ADunDefEnemy_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefEnemy.Bump
struct ADunDefEnemy_Bump_Params
{
};

// Function UDKGame.DunDefEnemy.NotifyTakeHitEX
struct ADunDefEnemy_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefEnemy.SpawnDefaultController
struct ADunDefEnemy_SpawnDefaultController_Params
{
};

// Function UDKGame.DunDefEnemy.IsCurrentlyPlayingAttackAnimation
struct ADunDefEnemy_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function UDKGame.DunDefEnemy.PlayAttackAnimationWithLocation
struct ADunDefEnemy_PlayAttackAnimationWithLocation_Params
{
};

// Function UDKGame.DunDefEnemy.PlayAttackAnimation
struct ADunDefEnemy_PlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefEnemy.GetAttackAnimSpeedMultiplier
struct ADunDefEnemy_GetAttackAnimSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefEnemy.ClientCheckAttackAnimationForZero
struct ADunDefEnemy_ClientCheckAttackAnimationForZero_Params
{
};

// Function UDKGame.DunDefEnemy.EnemyExpired
struct ADunDefEnemy_EnemyExpired_Params
{
};

// Function UDKGame.DunDefEnemy.Destroyed
struct ADunDefEnemy_Destroyed_Params
{
};

// Function UDKGame.DunDefEnemy.StartedAttack
struct ADunDefEnemy_StartedAttack_Params
{
};

// Function UDKGame.DunDefEnemy.EndedAttack
struct ADunDefEnemy_EndedAttack_Params
{
};

// Function UDKGame.DunDefEnemy.GetPawnDamageModifier
struct ADunDefEnemy_GetPawnDamageModifier_Params
{
};

// Function UDKGame.DunDefEnemy.UpdateDifficultyMaterial
struct ADunDefEnemy_UpdateDifficultyMaterial_Params
{
};

// Function UDKGame.DunDefEnemy.AdjustDamage
struct ADunDefEnemy_AdjustDamage_Params
{
};

// Function UDKGame.DunDefEnemy.GetElementalDamageType
struct ADunDefEnemy_GetElementalDamageType_Params
{
};

// Function UDKGame.DunDefEnemy.InitializeElementalEffects
struct ADunDefEnemy_InitializeElementalEffects_Params
{
};

// Function UDKGame.DunDefEnemy.SetElementalEffect
struct ADunDefEnemy_SetElementalEffect_Params
{
};

// Function UDKGame.DunDefEnemy.SpawnManaTokens
struct ADunDefEnemy_SpawnManaTokens_Params
{
};

// Function UDKGame.DunDefEnemy.UpdateSpeed
struct ADunDefEnemy_UpdateSpeed_Params
{
};

// Function UDKGame.DunDefEnemy.UpdateMaxHealth
struct ADunDefEnemy_UpdateMaxHealth_Params
{
};

// Function UDKGame.DunDefEnemy.UpdateDifficultyValues
struct ADunDefEnemy_UpdateDifficultyValues_Params
{
};

// Function UDKGame.DunDefEnemy.InitializeDD
struct ADunDefEnemy_InitializeDD_Params
{
};

// Function UDKGame.DunDefEnemy.GetDifficultyWaveOffset
struct ADunDefEnemy_GetDifficultyWaveOffset_Params
{
};

// Function UDKGame.DunDefEnemy.UpdateVariedColorMIC
struct ADunDefEnemy_UpdateVariedColorMIC_Params
{
};

// Function UDKGame.DunDefEnemy.GetArchetype
struct ADunDefEnemy_GetArchetype_Params
{
};

// Function UDKGame.DunDefEnemy.RemoveEnemySpawnCollision
struct ADunDefEnemy_RemoveEnemySpawnCollision_Params
{
};

// Function UDKGame.DunDefEnemy.CheckAlive
struct ADunDefEnemy_CheckAlive_Params
{
};

// Function UDKGame.DunDefEnemy.PostBeginPlay
struct ADunDefEnemy_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefEnemy.CheckForCombatStatBuffer
struct ADunDefEnemy_CheckForCombatStatBuffer_Params
{
};

// Function UDKGame.DunDefEnemy.PlayHurtAnimation
struct ADunDefEnemy_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefEnemy.ExecReplicatedFunction
struct ADunDefEnemy_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefEnemy.OnPostBeginPlay_AddToTargetableList
struct ADunDefEnemy_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function UDKGame.DunDefEnemy.GetPlayerTargetingDesirability
struct ADunDefEnemy_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefEnemy.IgnoreFriendlyFireDamage
struct ADunDefEnemy_IgnoreFriendlyFireDamage_Params
{
};

// Function UDKGame.DunDefEnemy.GetTargetingTeam
struct ADunDefEnemy_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefEnemy.GetEnemyTargetingDesirability
struct ADunDefEnemy_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefEnemy.ForceFriendlyFire
struct ADunDefEnemy_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefEnemy.SetEnraged
struct ADunDefEnemy_SetEnraged_Params
{
};

// Function UDKGame.DunDefEnemy.DealHighestProxDamage
struct ADunDefEnemy_DealHighestProxDamage_Params
{
};

// Function UDKGame.DunDefEnemy.TakeDamage
struct ADunDefEnemy_TakeDamage_Params
{
};

// Function UDKGame.DunDefEnemy.IsInitiallyInvincible
struct ADunDefEnemy_IsInitiallyInvincible_Params
{
};

// Function UDKGame.DunDefEnemy.InvincibilityEffectFinished
struct ADunDefEnemy_InvincibilityEffectFinished_Params
{
};

// Function UDKGame.DunDefEnemy.SetInvincible
struct ADunDefEnemy_SetInvincible_Params
{
};

// Function UDKGame.DunDefEnemy.DisableInvincibility
struct ADunDefEnemy_DisableInvincibility_Params
{
};

// Function UDKGame.DunDefEnemy.SetCreator
struct ADunDefEnemy_SetCreator_Params
{
};

// Function UDKGame.DunDefEnemy.DrawUpgradeIcons
struct ADunDefEnemy_DrawUpgradeIcons_Params
{
};

// Function UDKGame.DunDefEnemy.DoDrawHealthBar
struct ADunDefEnemy_DoDrawHealthBar_Params
{
};

// Function UDKGame.DunDefEnemy.GetScoreSwitch
struct ADunDefEnemy_GetScoreSwitch_Params
{
};

// Function UDKGame.DunDefEnemy.GetHealthBarMIC
struct ADunDefEnemy_GetHealthBarMIC_Params
{
};

// Function UDKGame.DunDefEnemy.ReplicatedEvent
struct ADunDefEnemy_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTreasureChest.DrawMiniMapIcon
struct ADunDefTreasureChest_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefTreasureChest.SpawnDroppedEquipment
struct ADunDefTreasureChest_SpawnDroppedEquipment_Params
{
};

// Function UDKGame.DunDefTreasureChest.SpawnManaTokens
struct ADunDefTreasureChest_SpawnManaTokens_Params
{
};

// Function UDKGame.DunDefTreasureChest.SpawnTreasure
struct ADunDefTreasureChest_SpawnTreasure_Params
{
};

// Function UDKGame.DunDefTreasureChest.TornOff
struct ADunDefTreasureChest_TornOff_Params
{
};

// Function UDKGame.DunDefTreasureChest.FadeAway
struct ADunDefTreasureChest_FadeAway_Params
{
};

// Function UDKGame.DunDefTreasureChest.PauseAnimation
struct ADunDefTreasureChest_PauseAnimation_Params
{
};

// Function UDKGame.DunDefTreasureChest.Destroyed
struct ADunDefTreasureChest_Destroyed_Params
{
};

// Function UDKGame.DunDefTreasureChest.PostBeginPlay
struct ADunDefTreasureChest_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTreasureChest.PlayOpening
struct ADunDefTreasureChest_PlayOpening_Params
{
};

// Function UDKGame.DunDefTreasureChest.Bump
struct ADunDefTreasureChest_Bump_Params
{
};

// Function UDKGame.DunDefTreasureChest.GetGRI
struct ADunDefTreasureChest_GetGRI_Params
{
};

// Function UDKGame.DunDefTreasureChest.ReplicatedEvent
struct ADunDefTreasureChest_ReplicatedEvent_Params
{
};

// Function UDKGame.UI_ItemBox.NotifySelectionChanged
struct UUI_ItemBox_NotifySelectionChanged_Params
{
};

// Function UDKGame.UI_ItemBox.OnInterceptedInputKey
struct UUI_ItemBox_OnInterceptedInputKey_Params
{
};

// Function UDKGame.UI_ItemBox.MovePageToFolder
struct UUI_ItemBox_MovePageToFolder_Params
{
};

// Function UDKGame.UI_ItemBox.AddPageToTrade
struct UUI_ItemBox_AddPageToTrade_Params
{
};

// Function UDKGame.UI_ItemBox.Update
struct UUI_ItemBox_Update_Params
{
};

// Function UDKGame.UI_ItemBox.NotifyEquipmentChanged
struct UUI_ItemBox_NotifyEquipmentChanged_Params
{
};

// Function UDKGame.UI_ItemBox.UpdateItemPath
struct UUI_ItemBox_UpdateItemPath_Params
{
};

// Function UDKGame.UI_ItemBox.RefreshedList
struct UUI_ItemBox_RefreshedList_Params
{
};

// Function UDKGame.UI_ItemBox.RefreshEquipmentList
struct UUI_ItemBox_RefreshEquipmentList_Params
{
};

// Function UDKGame.UI_ItemBox.EntryEnabledCheck
struct UUI_ItemBox_EntryEnabledCheck_Params
{
};

// Function UDKGame.UI_ItemBox.EquipmentEntrySelected
struct UUI_ItemBox_EquipmentEntrySelected_Params
{
};

// Function UDKGame.UI_ItemBox.GetHero
struct UUI_ItemBox_GetHero_Params
{
};

// Function UDKGame.UI_ItemBox.GetNextRefreshButton
struct UUI_ItemBox_GetNextRefreshButton_Params
{
};

// Function UDKGame.UI_ItemBox.SellSelectedItem
struct UUI_ItemBox_SellSelectedItem_Params
{
};

// Function UDKGame.UI_ItemBox.SellAll
struct UUI_ItemBox_SellAll_Params
{
};

// Function UDKGame.UI_ItemBox.UnlockedAll
struct UUI_ItemBox_UnlockedAll_Params
{
};

// Function UDKGame.UI_ItemBox.LockedAll
struct UUI_ItemBox_LockedAll_Params
{
};

// Function UDKGame.UI_ItemBox.CancelDeletion
struct UUI_ItemBox_CancelDeletion_Params
{
};

// Function UDKGame.UI_ItemBox.NotifyWidgetClicked
struct UUI_ItemBox_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_ItemBox.NotifyDraggedEvent
struct UUI_ItemBox_NotifyDraggedEvent_Params
{
};

// Function UDKGame.UI_ItemBox.SupportsDraggedOntoItem
struct UUI_ItemBox_SupportsDraggedOntoItem_Params
{
};

// Function UDKGame.UI_ItemBox.EditBoxPopUpCompleted
struct UUI_ItemBox_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.UI_ItemBox.CreateNewFolder
struct UUI_ItemBox_CreateNewFolder_Params
{
};

// Function UDKGame.UI_ItemBox.DeleteFolderByID
struct UUI_ItemBox_DeleteFolderByID_Params
{
};

// Function UDKGame.UI_ItemBox.RenameFolderByID
struct UUI_ItemBox_RenameFolderByID_Params
{
};

// Function UDKGame.UI_ItemBox.MoveUpAFolder
struct UUI_ItemBox_MoveUpAFolder_Params
{
};

// Function UDKGame.UI_ItemBox.ItemUpdateOccured
struct UUI_ItemBox_ItemUpdateOccured_Params
{
};

// Function UDKGame.UI_ItemBox.FolderUpdateOccured
struct UUI_ItemBox_FolderUpdateOccured_Params
{
};

// Function UDKGame.UI_ItemBox.FolderDeletionOccured
struct UUI_ItemBox_FolderDeletionOccured_Params
{
};

// Function UDKGame.UI_ItemBox.ToggleInTrade
struct UUI_ItemBox_ToggleInTrade_Params
{
};

// Function UDKGame.UI_ItemBox.AddToTrade
struct UUI_ItemBox_AddToTrade_Params
{
};

// Function UDKGame.UI_ItemBox.AllowOverlays
struct UUI_ItemBox_AllowOverlays_Params
{
};

// Function UDKGame.UI_ItemBox.PostInitialSceneUpdate
struct UUI_ItemBox_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_ItemBox.SceneActivated
struct UUI_ItemBox_SceneActivated_Params
{
};

// Function UDKGame.PlayerShopManager.GetNumberOfPlayerShopItems
struct APlayerShopManager_GetNumberOfPlayerShopItems_Params
{
};

// Function UDKGame.PlayerShopManager.ClearPendingPurchases
struct APlayerShopManager_ClearPendingPurchases_Params
{
};

// Function UDKGame.PlayerShopManager.ClientAttemptPurchase
struct APlayerShopManager_ClientAttemptPurchase_Params
{
};

// Function UDKGame.PlayerShopManager.ClientPurchaseAuthorized
struct APlayerShopManager_ClientPurchaseAuthorized_Params
{
};

// Function UDKGame.PlayerShopManager.ServerRequestedPurchase
struct APlayerShopManager_ServerRequestedPurchase_Params
{
};

// Function UDKGame.PlayerShopManager.ServerCompletedPurchase
struct APlayerShopManager_ServerCompletedPurchase_Params
{
};

// Function UDKGame.PlayerShopManager.ServerExecCommand
struct APlayerShopManager_ServerExecCommand_Params
{
};

// Function UDKGame.PlayerShopManager.ClientExecCommand
struct APlayerShopManager_ClientExecCommand_Params
{
};

// Function UDKGame.PlayerShopManager.LocalSetFolderSellAmount
struct APlayerShopManager_LocalSetFolderSellAmount_Params
{
};

// Function UDKGame.PlayerShopManager.LocalSetItemSellAmount
struct APlayerShopManager_LocalSetItemSellAmount_Params
{
};

// Function UDKGame.PlayerShopManager.RefreshPlayershops
struct APlayerShopManager_RefreshPlayershops_Params
{
};

// Function UDKGame.PlayerShopManager.ClientRemoveEquipmentData
struct APlayerShopManager_ClientRemoveEquipmentData_Params
{
};

// Function UDKGame.PlayerShopManager.ClientAddOrUpdateEquipmentData
struct APlayerShopManager_ClientAddOrUpdateEquipmentData_Params
{
};

// Function UDKGame.PlayerShopManager.ClientProcessEquipmentManualReplication
struct APlayerShopManager_ClientProcessEquipmentManualReplication_Params
{
};

// Function UDKGame.PlayerShopManager.ServerFolderDeleted
struct APlayerShopManager_ServerFolderDeleted_Params
{
};

// Function UDKGame.PlayerShopManager.ServerFolderUpdated
struct APlayerShopManager_ServerFolderUpdated_Params
{
};

// Function UDKGame.PlayerShopManager.ReplicateToNewPlayerController
struct APlayerShopManager_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.PlayerShopManager.ShowPlayerShopUI
struct APlayerShopManager_ShowPlayerShopUI_Params
{
};

// Function UDKGame.PlayerShopManager.ClientDeleteFolder
struct APlayerShopManager_ClientDeleteFolder_Params
{
};

// Function UDKGame.PlayerShopManager.ClientSetupFolder
struct APlayerShopManager_ClientSetupFolder_Params
{
};

// Function UDKGame.PlayerShopManager.RefreshItems
struct APlayerShopManager_RefreshItems_Params
{
};

// Function UDKGame.PlayerShopManager.ExecReplicatedFunction
struct APlayerShopManager_ExecReplicatedFunction_Params
{
};

// Function UDKGame.PlayerShopManager.LocalRemoveItem
struct APlayerShopManager_LocalRemoveItem_Params
{
};

// Function UDKGame.PlayerShopManager.LocalAddItem
struct APlayerShopManager_LocalAddItem_Params
{
};

// Function UDKGame.PlayerShopManager.GetPlayerShopManager
struct APlayerShopManager_GetPlayerShopManager_Params
{
};

// Function UDKGame.PlayerShopManager.GetDataListEntries
struct APlayerShopManager_GetDataListEntries_Params
{
};

// Function UDKGame.PlayerShopManager.Tick
struct APlayerShopManager_Tick_Params
{
};

// Function UDKGame.PlayerShopManager.PostBeginPlay
struct APlayerShopManager_PostBeginPlay_Params
{
};

// Function UDKGame.PlayerShopManager.ReplicatedEvent
struct APlayerShopManager_ReplicatedEvent_Params
{
};

// Function UDKGame.UI_ForgeMenu.OnReceivedInputKey
struct UUI_ForgeMenu_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_ForgeMenu.CloseForgeUI
struct UUI_ForgeMenu_CloseForgeUI_Params
{
};

// Function UDKGame.UI_ForgeMenu.GetHero
struct UUI_ForgeMenu_GetHero_Params
{
};

// Function UDKGame.UI_ForgeMenu.GetPlayerMana
struct UUI_ForgeMenu_GetPlayerMana_Params
{
};

// Function UDKGame.UI_ForgeMenu.UpdateManaToBank
struct UUI_ForgeMenu_UpdateManaToBank_Params
{
};

// Function UDKGame.UI_ForgeMenu.UpdateBanking
struct UUI_ForgeMenu_UpdateBanking_Params
{
};

// Function UDKGame.UI_ForgeMenu.Update
struct UUI_ForgeMenu_Update_Params
{
};

// Function UDKGame.UI_ForgeMenu.NotifyWidgetClicked
struct UUI_ForgeMenu_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_ForgeMenu.SceneDeactivated
struct UUI_ForgeMenu_SceneDeactivated_Params
{
};

// Function UDKGame.UI_ForgeMenu.SceneActivated
struct UUI_ForgeMenu_SceneActivated_Params
{
};

// Function UDKGame.UI_Shop.ShowDeletionConfirmation
struct UUI_Shop_ShowDeletionConfirmation_Params
{
};

// Function UDKGame.UI_Shop.GiveFocusToAnyChild
struct UUI_Shop_GiveFocusToAnyChild_Params
{
};

// Function UDKGame.UI_Shop.OnReceivedInputKey
struct UUI_Shop_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_Shop.GetDataListEntries
struct UUI_Shop_GetDataListEntries_Params
{
};

// Function UDKGame.UI_Shop.EditBoxPopUpCompleted
struct UUI_Shop_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.UI_Shop.CloseWithAnimation
struct UUI_Shop_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_Shop.RefreshEquipmentList
struct UUI_Shop_RefreshEquipmentList_Params
{
};

// Function UDKGame.UI_Shop.GetSelectedEquipmentItemType
struct UUI_Shop_GetSelectedEquipmentItemType_Params
{
};

// Function UDKGame.UI_Shop.SelectEquipmentItemType
struct UUI_Shop_SelectEquipmentItemType_Params
{
};

// Function UDKGame.UI_Shop.PostInitialSceneUpdate
struct UUI_Shop_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_Shop.SceneDeactivated
struct UUI_Shop_SceneDeactivated_Params
{
};

// Function UDKGame.UI_Shop.SceneActivated
struct UUI_Shop_SceneActivated_Params
{
};

// Function UDKGame.UI_Shop.NotifyWidgetClicked
struct UUI_Shop_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_Shop.AllowBuyingBankedMana
struct UUI_Shop_AllowBuyingBankedMana_Params
{
};

// Function UDKGame.UI_Shop.CanAffordEquipmentHV
struct UUI_Shop_CanAffordEquipmentHV_Params
{
};

// Function UDKGame.UI_Shop.CanAffordEquipment
struct UUI_Shop_CanAffordEquipment_Params
{
};

// Function UDKGame.UI_Shop.BoughtMana
struct UUI_Shop_BoughtMana_Params
{
};

// Function UDKGame.UI_Shop.BuyItem
struct UUI_Shop_BuyItem_Params
{
};

// Function UDKGame.UI_Shop.UpdateItemShopPanel
struct UUI_Shop_UpdateItemShopPanel_Params
{
};

// Function UDKGame.UI_Shop.UpdateServicesPanel
struct UUI_Shop_UpdateServicesPanel_Params
{
};

// Function UDKGame.UI_Shop.Update
struct UUI_Shop_Update_Params
{
};

// Function UDKGame.UI_Shop.updateManaBags
struct UUI_Shop_updateManaBags_Params
{
};

// Function UDKGame.UI_ChooseMultiplayerMode.OnReceivedInputKey
struct UUI_ChooseMultiplayerMode_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_ChooseMultiplayerMode.OnReceivedInputAxis
struct UUI_ChooseMultiplayerMode_OnReceivedInputAxis_Params
{
};

// Function UDKGame.UI_ChooseMultiplayerMode.SceneActivated
struct UUI_ChooseMultiplayerMode_SceneActivated_Params
{
};

// Function UDKGame.UI_ChooseMultiplayerMode.SwitchMultiplayerModeComplete
struct UUI_ChooseMultiplayerMode_SwitchMultiplayerModeComplete_Params
{
};

// Function UDKGame.UI_ChooseMultiplayerMode.NotifyWidgetClicked
struct UUI_ChooseMultiplayerMode_NotifyWidgetClicked_Params
{
};

// Function UDKGame.HeroManagerResources.GetHeroManagerResources
struct UHeroManagerResources_GetHeroManagerResources_Params
{
};

// Function UDKGame.HeroManagerResources.GetRandomStatObjectID
struct UHeroManagerResources_GetRandomStatObjectID_Params
{
};

// Function UDKGame.HeroManagerResources.GetRandomStatObject
struct UHeroManagerResources_GetRandomStatObject_Params
{
};

// Function UDKGame.HeroManagerResources.GetEquipmentStatObjectFromID
struct UHeroManagerResources_GetEquipmentStatObjectFromID_Params
{
};

// Function UDKGame.HeroManagerResources.Initalize
struct UHeroManagerResources_Initalize_Params
{
};

// Function UDKGame.DataListProviderInterface.GetDataListEntries
struct UDataListProviderInterface_GetDataListEntries_Params
{
};

// Function UDKGame.DunDefGameStats.ReportGameStat
struct UDunDefGameStats_ReportGameStat_Params
{
};

// Function UDKGame.DunDefGameStats.IsNewBest
struct UDunDefGameStats_IsNewBest_Params
{
};

// Function UDKGame.DunDefGameStats.MarkNewBestStat
struct UDunDefGameStats_MarkNewBestStat_Params
{
};

// Function UDKGame.DunDefGameStats.GetLevelTime
struct UDunDefGameStats_GetLevelTime_Params
{
};

// Function UDKGame.DunDefGameStats.DumpBufferStat
struct UDunDefGameStats_DumpBufferStat_Params
{
};

// Function UDKGame.DunDefGameStats.DumpBuffer
struct UDunDefGameStats_DumpBuffer_Params
{
};

// Function UDKGame.DunDefGameStats.DumpPlayer
struct UDunDefGameStats_DumpPlayer_Params
{
};

// Function UDKGame.DunDefGameStats.Dump
struct UDunDefGameStats_Dump_Params
{
};

// Function UDKGame.DunDefGameStats.GetPlayerIndex
struct UDunDefGameStats_GetPlayerIndex_Params
{
};

// Function UDKGame.DunDefGameStats.GetPRIPlayerIndex
struct UDunDefGameStats_GetPRIPlayerIndex_Params
{
};

// Function UDKGame.DunDefGameStats.IsCloseEnough
struct UDunDefGameStats_IsCloseEnough_Params
{
};

// Function UDKGame.DunDefGameStats.GetStatPlayerName
struct UDunDefGameStats_GetStatPlayerName_Params
{
};

// Function UDKGame.DunDefGameStats.GetStatPlayerHeroData
struct UDunDefGameStats_GetStatPlayerHeroData_Params
{
};

// Function UDKGame.DunDefGameStats.MarkPlayerLeft
struct UDunDefGameStats_MarkPlayerLeft_Params
{
};

// Function UDKGame.DunDefGameStats.RegisterStatPlayerHero
struct UDunDefGameStats_RegisterStatPlayerHero_Params
{
};

// Function UDKGame.DunDefGameStats.GetStatPlayerNameWithHero
struct UDunDefGameStats_GetStatPlayerNameWithHero_Params
{
};

// Function UDKGame.DunDefGameStats.SetupStatName
struct UDunDefGameStats_SetupStatName_Params
{
};

// Function UDKGame.DunDefGameStats.SetupHeroMetaData
struct UDunDefGameStats_SetupHeroMetaData_Params
{
};

// Function UDKGame.DunDefGameStats.RegisterPlayerController
struct UDunDefGameStats_RegisterPlayerController_Params
{
};

// Function UDKGame.DunDefGameStats.StatPlayerAdded
struct UDunDefGameStats_StatPlayerAdded_Params
{
};

// Function UDKGame.DunDefGameStats.ReportStopCombat
struct UDunDefGameStats_ReportStopCombat_Params
{
};

// Function UDKGame.DunDefGameStats.ReportStartCombat
struct UDunDefGameStats_ReportStartCombat_Params
{
};

// Function UDKGame.DunDefLocalPlayer.UseCursor
struct UDunDefLocalPlayer_UseCursor_Params
{
};

// Function UDKGame.DunDefLocalPlayer.IsConsolePlayer
struct UDunDefLocalPlayer_IsConsolePlayer_Params
{
};

// Function UDKGame.DunDefLocalPlayer.MovieCompleted
struct UDunDefLocalPlayer_MovieCompleted_Params
{
};

// Function UDKGame.DunDefLocalPlayer.CinematicCompleted
struct UDunDefLocalPlayer_CinematicCompleted_Params
{
};

// Function UDKGame.DunDefLocalPlayer.ReceivedPlayerController
struct UDunDefLocalPlayer_ReceivedPlayerController_Params
{
};

// Function UDKGame.DunDefLocalPlayer.ResetForNewMap
struct UDunDefLocalPlayer_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefLocalPlayer.RespawningDown
struct UDunDefLocalPlayer_RespawningDown_Params
{
};

// Function UDKGame.DunDefLocalPlayer.RespawningUp
struct UDunDefLocalPlayer_RespawningUp_Params
{
};

// Function UDKGame.DunDefLocalPlayer.DrawBlackOverlay
struct UDunDefLocalPlayer_DrawBlackOverlay_Params
{
};

// Function UDKGame.DunDefLocalPlayer.PostCanvasRender
struct UDunDefLocalPlayer_PostCanvasRender_Params
{
};

// Function UDKGame.DunDefLocalPlayer.PostHUDRender
struct UDunDefLocalPlayer_PostHUDRender_Params
{
};

// Function UDKGame.DunDefLocalPlayer.GetDunDefNickname
struct UDunDefLocalPlayer_GetDunDefNickname_Params
{
};

// Function UDKGame.DunDefLocalPlayer.Reset
struct UDunDefLocalPlayer_Reset_Params
{
};

// Function UDKGame.DunDefLocalPlayer.GetPlayerIndex
struct UDunDefLocalPlayer_GetPlayerIndex_Params
{
};

// Function UDKGame.DunDefLocalPlayer.GetVC
struct UDunDefLocalPlayer_GetVC_Params
{
};

// Function UDKGame.ToolTipInterface.ActiveStateChanged
struct UToolTipInterface_ActiveStateChanged_Params
{
};

// Function UDKGame.ToolTipInterface.GetAbsoluteParentOverride
struct UToolTipInterface_GetAbsoluteParentOverride_Params
{
};

// Function UDKGame.ToolTipInterface.SearchedForResContainer
struct UToolTipInterface_SearchedForResContainer_Params
{
};

// Function UDKGame.ToolTipInterface.HasSearchedForResContainer
struct UToolTipInterface_HasSearchedForResContainer_Params
{
};

// Function UDKGame.ToolTipInterface.SetResolutionContainer
struct UToolTipInterface_SetResolutionContainer_Params
{
};

// Function UDKGame.ToolTipInterface.GetResolutionContainer
struct UToolTipInterface_GetResolutionContainer_Params
{
};

// Function UDKGame.ToolTipInterface.GetVerticalAlignment
struct UToolTipInterface_GetVerticalAlignment_Params
{
};

// Function UDKGame.ToolTipInterface.GetHorizontalAlignment
struct UToolTipInterface_GetHorizontalAlignment_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipScale
struct UToolTipInterface_GetToolTipScale_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipShouldUse
struct UToolTipInterface_GetToolTipShouldUse_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipMouseFollow
struct UToolTipInterface_GetToolTipMouseFollow_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipFadeOutTime
struct UToolTipInterface_GetToolTipFadeOutTime_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipFadeInTime
struct UToolTipInterface_GetToolTipFadeInTime_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipString
struct UToolTipInterface_GetToolTipString_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipPrefabTemplate
struct UToolTipInterface_GetToolTipPrefabTemplate_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipYOffset
struct UToolTipInterface_GetToolTipYOffset_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipXOffset
struct UToolTipInterface_GetToolTipXOffset_Params
{
};

// Function UDKGame.ToolTipInterface.GetToolTipDelay
struct UToolTipInterface_GetToolTipDelay_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.PostBeginPlay
struct ADunDefUIReplicationInfo_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.GetViewportClient
struct ADunDefUIReplicationInfo_GetViewportClient_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.ReplicateToNewPlayerController
struct ADunDefUIReplicationInfo_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.MulticastUIMessage
struct ADunDefUIReplicationInfo_MulticastUIMessage_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.ExecReplicatedFunction
struct ADunDefUIReplicationInfo_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.Destroyed
struct ADunDefUIReplicationInfo_Destroyed_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.CheckForGRI
struct ADunDefUIReplicationInfo_CheckForGRI_Params
{
};

// Function UDKGame.DunDefUIReplicationInfo.ReplicatedEvent
struct ADunDefUIReplicationInfo_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefInput.SetInvertMouse
struct UDunDefInput_SetInvertMouse_Params
{
};

// Function UDKGame.DunDefInput.AdjustControlSchemeForOptions
struct UDunDefInput_AdjustControlSchemeForOptions_Params
{
};

// Function UDKGame.DunDefInput.ProcessMobileCameraRotation
struct UDunDefInput_ProcessMobileCameraRotation_Params
{
};

// Function UDKGame.DunDefInput.GetIcon
struct UDunDefInput_GetIcon_Params
{
};

// Function UDKGame.DunDefInput.GetDescription
struct UDunDefInput_GetDescription_Params
{
};

// Function UDKGame.DunDefInput.GetBindingDescription
struct UDunDefInput_GetBindingDescription_Params
{
};

// Function UDKGame.DunDefInput.IsKeyBoundToCommand
struct UDunDefInput_IsKeyBoundToCommand_Params
{
};

// Function UDKGame.DunDefInput.SetBindingDescription
struct UDunDefInput_SetBindingDescription_Params
{
};

// Function UDKGame.DunDefInput.SetBinding
struct UDunDefInput_SetBinding_Params
{
};

// Function UDKGame.DunDefInput.CleanUpBindings
struct UDunDefInput_CleanUpBindings_Params
{
};

// Function UDKGame.DunDefInput.GetBinding
struct UDunDefInput_GetBinding_Params
{
};

// Function UDKGame.DunDefInput.GetKey
struct UDunDefInput_GetKey_Params
{
};

// Function UDKGame.DunDefInput.WantsMiniMap
struct UDunDefInput_WantsMiniMap_Params
{
};

// Function UDKGame.DunDefInput.IsRotatingCamera
struct UDunDefInput_IsRotatingCamera_Params
{
};

// Function UDKGame.DunDefInput.Jump
struct UDunDefInput_Jump_Params
{
};

// Function UDKGame.UI_PauseMenu.OpenPauseUIForAllPlayers
struct UUI_PauseMenu_OpenPauseUIForAllPlayers_Params
{
};

// Function UDKGame.UI_PauseMenu.CloseAllPauseUI
struct UUI_PauseMenu_CloseAllPauseUI_Params
{
};

// Function UDKGame.UI_PauseMenu.DoAllPauseUIWantToUnpause
struct UUI_PauseMenu_DoAllPauseUIWantToUnpause_Params
{
};

// Function UDKGame.UI_PauseMenu.WantsToUnpause
struct UUI_PauseMenu_WantsToUnpause_Params
{
};

// Function UDKGame.UI_PauseMenu.Update
struct UUI_PauseMenu_Update_Params
{
};

// Function UDKGame.UI_PauseMenu.ToggleMute
struct UUI_PauseMenu_ToggleMute_Params
{
};

// Function UDKGame.UI_PauseMenu.CloseWithAnimation
struct UUI_PauseMenu_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_PauseMenu.NotifyPlayerLeft
struct UUI_PauseMenu_NotifyPlayerLeft_Params
{
};

// Function UDKGame.UI_PauseMenu.NotifyPlayerJoined
struct UUI_PauseMenu_NotifyPlayerJoined_Params
{
};

// Function UDKGame.UI_PauseMenu.GetSelectedPRI
struct UUI_PauseMenu_GetSelectedPRI_Params
{
};

// Function UDKGame.UI_PauseMenu.GetSelectedHero
struct UUI_PauseMenu_GetSelectedHero_Params
{
};

// Function UDKGame.UI_PauseMenu.RefreshTradeButton
struct UUI_PauseMenu_RefreshTradeButton_Params
{
};

// Function UDKGame.UI_PauseMenu.PlayerEntrySelected
struct UUI_PauseMenu_PlayerEntrySelected_Params
{
};

// Function UDKGame.UI_PauseMenu.UpdatePlayerList
struct UUI_PauseMenu_UpdatePlayerList_Params
{
};

// Function UDKGame.UI_PauseMenu.NotifyWidgetClicked
struct UUI_PauseMenu_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_PauseMenu.ShowDeletionConfirmation
struct UUI_PauseMenu_ShowDeletionConfirmation_Params
{
};

// Function UDKGame.UI_PauseMenu.PostInitialSceneUpdate
struct UUI_PauseMenu_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_PauseMenu.SceneActivated
struct UUI_PauseMenu_SceneActivated_Params
{
};

// Function UDKGame.UI_PauseMenu.SceneDeactivated
struct UUI_PauseMenu_SceneDeactivated_Params
{
};

// Function UDKGame.UI_PauseMenu.ToggleWantToUnpause
struct UUI_PauseMenu_ToggleWantToUnpause_Params
{
};

// Function UDKGame.UI_PauseMenu.DoesAnyPauseUIWantMiniMap
struct UUI_PauseMenu_DoesAnyPauseUIWantMiniMap_Params
{
};

// Function UDKGame.UI_PauseMenu.ShowMiniMap
struct UUI_PauseMenu_ShowMiniMap_Params
{
};

// Function UDKGame.UI_PauseMenu.OnReceivedInputKey
struct UUI_PauseMenu_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_MessageBox.OnReceivedInputKey
struct UUI_MessageBox_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_MessageBox.HandleSceneActivated
struct UUI_MessageBox_HandleSceneActivated_Params
{
};

// Function UDKGame.UI_MessageBox.SceneActivated
struct UUI_MessageBox_SceneActivated_Params
{
};

// Function UDKGame.UI_MessageBox.SceneDeactivated
struct UUI_MessageBox_SceneDeactivated_Params
{
};

// Function UDKGame.UI_MessageBox.OnButtonClicked
struct UUI_MessageBox_OnButtonClicked_Params
{
};

// Function UDKGame.UI_MessageBox.SetMessageBoxType
struct UUI_MessageBox_SetMessageBoxType_Params
{
};

// Function UDKGame.UI_MessageBox.ShowWidget
struct UUI_MessageBox_ShowWidget_Params
{
};

// Function UDKGame.UI_MessageBox.HideWidget
struct UUI_MessageBox_HideWidget_Params
{
};

// Function UDKGame.UI_MessageBox.SetMessage
struct UUI_MessageBox_SetMessage_Params
{
};

// Function UDKGame.UI_MessageBox.SetTitle
struct UUI_MessageBox_SetTitle_Params
{
};

// Function UDKGame.UI_MessageBox.SetForceCloseDelegate
struct UUI_MessageBox_SetForceCloseDelegate_Params
{
};

// Function UDKGame.UI_MessageBox.SetOnClickedCallback
struct UUI_MessageBox_SetOnClickedCallback_Params
{
};

// Function UDKGame.UI_MessageBox.OnForceClose
struct UUI_MessageBox_OnForceClose_Params
{
};

// Function UDKGame.UI_MessageBox.OnMessageBoxClicked
struct UUI_MessageBox_OnMessageBoxClicked_Params
{
};

// Function UDKGame.UIButton_Scripted.ActiveStateChanged
struct UUIButton_Scripted_ActiveStateChanged_Params
{
};

// Function UDKGame.UIButton_Scripted.ButtonClicked
struct UUIButton_Scripted_ButtonClicked_Params
{
};

// Function UDKGame.UIButton_Scripted.NotifyWidgetClicked
struct UUIButton_Scripted_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipScale
struct UUIButton_Scripted_GetToolTipScale_Params
{
};

// Function UDKGame.UIButton_Scripted.GetAbsoluteParentOverride
struct UUIButton_Scripted_GetAbsoluteParentOverride_Params
{
};

// Function UDKGame.UIButton_Scripted.SearchedForResContainer
struct UUIButton_Scripted_SearchedForResContainer_Params
{
};

// Function UDKGame.UIButton_Scripted.HasSearchedForResContainer
struct UUIButton_Scripted_HasSearchedForResContainer_Params
{
};

// Function UDKGame.UIButton_Scripted.SetResolutionContainer
struct UUIButton_Scripted_SetResolutionContainer_Params
{
};

// Function UDKGame.UIButton_Scripted.GetResolutionContainer
struct UUIButton_Scripted_GetResolutionContainer_Params
{
};

// Function UDKGame.UIButton_Scripted.GetVerticalAlignment
struct UUIButton_Scripted_GetVerticalAlignment_Params
{
};

// Function UDKGame.UIButton_Scripted.GetHorizontalAlignment
struct UUIButton_Scripted_GetHorizontalAlignment_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipShouldUse
struct UUIButton_Scripted_GetToolTipShouldUse_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipMouseFollow
struct UUIButton_Scripted_GetToolTipMouseFollow_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipFadeOutTime
struct UUIButton_Scripted_GetToolTipFadeOutTime_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipFadeInTime
struct UUIButton_Scripted_GetToolTipFadeInTime_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipString
struct UUIButton_Scripted_GetToolTipString_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipPrefabTemplate
struct UUIButton_Scripted_GetToolTipPrefabTemplate_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipYOffset
struct UUIButton_Scripted_GetToolTipYOffset_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipXOffset
struct UUIButton_Scripted_GetToolTipXOffset_Params
{
};

// Function UDKGame.UIButton_Scripted.GetToolTipDelay
struct UUIButton_Scripted_GetToolTipDelay_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.ApplyRenderOffsets
struct UUIScriptWidget_ToggleButton_ApplyRenderOffsets_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetScaleMultiplier
struct UUIScriptWidget_ToggleButton_GetScaleMultiplier_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetFocusLostName
struct UUIScriptWidget_ToggleButton_GetFocusLostName_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetFocusGainedName
struct UUIScriptWidget_ToggleButton_GetFocusGainedName_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.ButtonClicked
struct UUIScriptWidget_ToggleButton_ButtonClicked_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetBackgroundImage
struct UUIScriptWidget_ToggleButton_GetBackgroundImage_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.SetValue
struct UUIScriptWidget_ToggleButton_SetValue_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.IsChecked
struct UUIScriptWidget_ToggleButton_IsChecked_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetTextDrawColor
struct UUIScriptWidget_ToggleButton_GetTextDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_ToggleButton.GetBackgroundDrawColor
struct UUIScriptWidget_ToggleButton_GetBackgroundDrawColor_Params
{
};

// Function UDKGame.UIButton_DataListEntry.DoAllowNavigationAway
struct UUIButton_DataListEntry_DoAllowNavigationAway_Params
{
};

// Function UDKGame.UIButton_DataListEntry.InitializeFromDataListEntry
struct UUIButton_DataListEntry_InitializeFromDataListEntry_Params
{
};

// Function UDKGame.UIButton_DataListEntry.ButtonClicked
struct UUIButton_DataListEntry_ButtonClicked_Params
{
};

// Function UDKGame.UIButton_DataListEntry.GainedFocus
struct UUIButton_DataListEntry_GainedFocus_Params
{
};

// Function UDKGame.UIButton_DataListEntry.GetDataList
struct UUIButton_DataListEntry_GetDataList_Params
{
};

// Function UDKGame.UI_OptionsMenu.IsKeyboardOwned
struct UUI_OptionsMenu_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_OptionsMenu.NextPanel
struct UUI_OptionsMenu_NextPanel_Params
{
};

// Function UDKGame.UI_OptionsMenu.PreviousPanel
struct UUI_OptionsMenu_PreviousPanel_Params
{
};

// Function UDKGame.UI_OptionsMenu.OnReceivedInputKey
struct UUI_OptionsMenu_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_OptionsMenu.ActivatePanel
struct UUI_OptionsMenu_ActivatePanel_Params
{
};

// Function UDKGame.UI_OptionsMenu.ToggleButtonClicked
struct UUI_OptionsMenu_ToggleButtonClicked_Params
{
};

// Function UDKGame.UI_OptionsMenu.NotifyWidgetClicked
struct UUI_OptionsMenu_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_OptionsMenu.NotifyWidgetClickedEvent
struct UUI_OptionsMenu_NotifyWidgetClickedEvent_Params
{
};

// Function UDKGame.UI_OptionsMenu.Update
struct UUI_OptionsMenu_Update_Params
{
};

// Function UDKGame.UI_OptionsMenu.TransitionToMainMenu
struct UUI_OptionsMenu_TransitionToMainMenu_Params
{
};

// Function UDKGame.UI_OptionsMenu.GetResolutionString
struct UUI_OptionsMenu_GetResolutionString_Params
{
};

// Function UDKGame.UI_OptionsMenu.GetSplitConfig
struct UUI_OptionsMenu_GetSplitConfig_Params
{
};

// Function UDKGame.UI_OptionsMenu.SetSplitScreenConfig
struct UUI_OptionsMenu_SetSplitScreenConfig_Params
{
};

// Function UDKGame.UI_OptionsMenu.ApplyOptions
struct UUI_OptionsMenu_ApplyOptions_Params
{
};

// Function UDKGame.UI_OptionsMenu.CloseWithAnimation
struct UUI_OptionsMenu_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_OptionsMenu.RefreshKeyBindingLabels
struct UUI_OptionsMenu_RefreshKeyBindingLabels_Params
{
};

// Function UDKGame.UI_OptionsMenu.SceneActivated
struct UUI_OptionsMenu_SceneActivated_Params
{
};

// Function UDKGame.UI_OptionsMenu.DisableSplitScreenOptions
struct UUI_OptionsMenu_DisableSplitScreenOptions_Params
{
};

// Function UDKGame.UI_OptionsMenu.IsDesired
struct UUI_OptionsMenu_IsDesired_Params
{
};

// Function UDKGame.UIPanel_DataList.EntryEnabledCheck
struct UUIPanel_DataList_EntryEnabledCheck_Params
{
};

// Function UDKGame.UIPanel_DataList.GetScreenObjectOwner
struct UUIPanel_DataList_GetScreenObjectOwner_Params
{
};

// Function UDKGame.UIPanel_DataList.Created
struct UUIPanel_DataList_Created_Params
{
};

// Function UDKGame.UIPanel_DataList.HasPrevPage
struct UUIPanel_DataList_HasPrevPage_Params
{
};

// Function UDKGame.UIPanel_DataList.HasNextPage
struct UUIPanel_DataList_HasNextPage_Params
{
};

// Function UDKGame.UIPanel_DataList.ShowFirstPage
struct UUIPanel_DataList_ShowFirstPage_Params
{
};

// Function UDKGame.UIPanel_DataList.ShowPrevPage
struct UUIPanel_DataList_ShowPrevPage_Params
{
};

// Function UDKGame.UIPanel_DataList.ShowNextPage
struct UUIPanel_DataList_ShowNextPage_Params
{
};

// Function UDKGame.UIPanel_DataList.InitFromDataListProvider
struct UUIPanel_DataList_InitFromDataListProvider_Params
{
};

// Function UDKGame.UIPanel_DataList.AfterDataListUpdate
struct UUIPanel_DataList_AfterDataListUpdate_Params
{
};

// Function UDKGame.UIPanel_DataList.BeforeDataListUpdate
struct UUIPanel_DataList_BeforeDataListUpdate_Params
{
};

// Function UDKGame.UIPanel_DataList.HasAnyEnabledEntries
struct UUIPanel_DataList_HasAnyEnabledEntries_Params
{
};

// Function UDKGame.UIPanel_DataList.HasAnyEnabledEntriesForPage
struct UUIPanel_DataList_HasAnyEnabledEntriesForPage_Params
{
};

// Function UDKGame.UIPanel_DataList.IsFirstEnabledEntry
struct UUIPanel_DataList_IsFirstEnabledEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.IsLastEnabledEntry
struct UUIPanel_DataList_IsLastEnabledEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.HandleScrollingUp
struct UUIPanel_DataList_HandleScrollingUp_Params
{
};

// Function UDKGame.UIPanel_DataList.HandleScrollingDown
struct UUIPanel_DataList_HandleScrollingDown_Params
{
};

// Function UDKGame.UIPanel_DataList.GetPreviousEnabledDataEntry
struct UUIPanel_DataList_GetPreviousEnabledDataEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.GetNextEnabledDataEntry
struct UUIPanel_DataList_GetNextEnabledDataEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.BeforeRefreshList
struct UUIPanel_DataList_BeforeRefreshList_Params
{
};

// Function UDKGame.UIPanel_DataList.OnRefreshList
struct UUIPanel_DataList_OnRefreshList_Params
{
};

// Function UDKGame.UIPanel_DataList.SetFocusedEntry
struct UUIPanel_DataList_SetFocusedEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.GetFocusedEntry
struct UUIPanel_DataList_GetFocusedEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.RefreshDataList
struct UUIPanel_DataList_RefreshDataList_Params
{
};

// Function UDKGame.UIPanel_DataList.AddNewEntry
struct UUIPanel_DataList_AddNewEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.CalcXCenterPadding
struct UUIPanel_DataList_CalcXCenterPadding_Params
{
};

// Function UDKGame.UIPanel_DataList.GetNumColumns
struct UUIPanel_DataList_GetNumColumns_Params
{
};

// Function UDKGame.UIPanel_DataList.GetNumRows
struct UUIPanel_DataList_GetNumRows_Params
{
};

// Function UDKGame.UIPanel_DataList.GetButtonAtIndices
struct UUIPanel_DataList_GetButtonAtIndices_Params
{
};

// Function UDKGame.UIPanel_DataList.ClearList
struct UUIPanel_DataList_ClearList_Params
{
};

// Function UDKGame.UIPanel_DataList.UnregisterAllInputEvents
struct UUIPanel_DataList_UnregisterAllInputEvents_Params
{
};

// Function UDKGame.UIPanel_DataList.MakeSecretHiddenButton
struct UUIPanel_DataList_MakeSecretHiddenButton_Params
{
};

// Function UDKGame.UIPanel_DataList.ClearInvisibleButtons
struct UUIPanel_DataList_ClearInvisibleButtons_Params
{
};

// Function UDKGame.UIPanel_DataList.GetSelectedButton
struct UUIPanel_DataList_GetSelectedButton_Params
{
};

// Function UDKGame.UIPanel_DataList.GetSelectedEntry
struct UUIPanel_DataList_GetSelectedEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.SelectEntry
struct UUIPanel_DataList_SelectEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.SelectButton
struct UUIPanel_DataList_SelectButton_Params
{
};

// Function UDKGame.UIPanel_DataList.OnButtonSelected
struct UUIPanel_DataList_OnButtonSelected_Params
{
};

// Function UDKGame.UIPanel_DataList.GetIndexOfButton
struct UUIPanel_DataList_GetIndexOfButton_Params
{
};

// Function UDKGame.UIPanel_DataList.GetFocusedButton
struct UUIPanel_DataList_GetFocusedButton_Params
{
};

// Function UDKGame.UIPanel_DataList.GetButtonForEntry
struct UUIPanel_DataList_GetButtonForEntry_Params
{
};

// Function UDKGame.UIPanel_DataList.GetSelectedIndex
struct UUIPanel_DataList_GetSelectedIndex_Params
{
};

// Function UDKGame.UIPanel_DataList.GetButtonAtIndex
struct UUIPanel_DataList_GetButtonAtIndex_Params
{
};

// Function UDKGame.UIPanel_DataList.GetLastSelectableIndex
struct UUIPanel_DataList_GetLastSelectableIndex_Params
{
};

// Function UDKGame.UIPanel_DataList.GetFirstSelectableIndex
struct UUIPanel_DataList_GetFirstSelectableIndex_Params
{
};

// Function UDKGame.UIPanel_DataList.NotifyButtonClicked
struct UUIPanel_DataList_NotifyButtonClicked_Params
{
};

// Function UDKGame.UIPanel_DataList.GetPrefabToUse
struct UUIPanel_DataList_GetPrefabToUse_Params
{
};

// Function UDKGame.UIPanel_DataList.GetViewportYScaleTo768
struct UUIPanel_DataList_GetViewportYScaleTo768_Params
{
};

// Function UDKGame.UIPanel_DataList.GetViewportXScaleTo1024
struct UUIPanel_DataList_GetViewportXScaleTo1024_Params
{
};

// Function UDKGame.DunDefMiniMap.GetMiniMap
struct ADunDefMiniMap_GetMiniMap_Params
{
};

// Function UDKGame.DunDefMiniMap.ToggleDebugMode
struct ADunDefMiniMap_ToggleDebugMode_Params
{
};

// Function UDKGame.DunDefMiniMap.DoesAnyPlayerWantMiniMap
struct ADunDefMiniMap_DoesAnyPlayerWantMiniMap_Params
{
};

// Function UDKGame.DunDefMiniMap.Tick
struct ADunDefMiniMap_Tick_Params
{
};

// Function UDKGame.DunDefMiniMap.OnToggle
struct ADunDefMiniMap_OnToggle_Params
{
};

// Function UDKGame.DunDefMiniMap.PostBeginPlay
struct ADunDefMiniMap_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefMiniMap.ConvertCanvasCoordToWorldCoord
struct ADunDefMiniMap_ConvertCanvasCoordToWorldCoord_Params
{
};

// Function UDKGame.DunDefMiniMap.ConvertWorldCoordToCenterMapCoord
struct ADunDefMiniMap_ConvertWorldCoordToCenterMapCoord_Params
{
};

// Function UDKGame.DunDefMiniMap.ConvertCenterMapCoordToCanvasCoord
struct ADunDefMiniMap_ConvertCenterMapCoordToCanvasCoord_Params
{
};

// Function UDKGame.DunDefMiniMap.GetTileRotationFromWorldRotation
struct ADunDefMiniMap_GetTileRotationFromWorldRotation_Params
{
};

// Function UDKGame.DunDefMiniMap.DrawMiniMap
struct ADunDefMiniMap_DrawMiniMap_Params
{
};

// Function UDKGame.UI_GlobalHUD.CinematicCompleted
struct UUI_GlobalHUD_CinematicCompleted_Params
{
};

// Function UDKGame.UI_GlobalHUD.InitializeCompetitiveHUD
struct UUI_GlobalHUD_InitializeCompetitiveHUD_Params
{
};

// Function UDKGame.UI_GlobalHUD.UpdateCompetitive
struct UUI_GlobalHUD_UpdateCompetitive_Params
{
};

// Function UDKGame.UI_GlobalHUD.GetGlobalHUD
struct UUI_GlobalHUD_GetGlobalHUD_Params
{
};

// Function UDKGame.UI_GlobalHUD.SetInCinematic
struct UUI_GlobalHUD_SetInCinematic_Params
{
};

// Function UDKGame.UI_GlobalHUD.DoNotifyPhaseChange
struct UUI_GlobalHUD_DoNotifyPhaseChange_Params
{
};

// Function UDKGame.UI_GlobalHUD.NotifyLevelVictory
struct UUI_GlobalHUD_NotifyLevelVictory_Params
{
};

// Function UDKGame.UI_GlobalHUD.NotifyGameOver
struct UUI_GlobalHUD_NotifyGameOver_Params
{
};

// Function UDKGame.UI_GlobalHUD.NotifyPhaseChange
struct UUI_GlobalHUD_NotifyPhaseChange_Params
{
};

// Function UDKGame.UI_GlobalHUD.SceneActivated
struct UUI_GlobalHUD_SceneActivated_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowMajorNotificationLabel
struct UUI_GlobalHUD_ShowMajorNotificationLabel_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowMajorNotificationLabel_LocalizedKismet
struct UUI_GlobalHUD_ShowMajorNotificationLabel_LocalizedKismet_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowMajorNotificationLabel_MapFriendlyName
struct UUI_GlobalHUD_ShowMajorNotificationLabel_MapFriendlyName_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowMajorNotificationLabel_GameOver
struct UUI_GlobalHUD_ShowMajorNotificationLabel_GameOver_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowMajorNotificationLabel_PredefinedType
struct UUI_GlobalHUD_ShowMajorNotificationLabel_PredefinedType_Params
{
};

// Function UDKGame.UI_GlobalHUD.Update
struct UUI_GlobalHUD_Update_Params
{
};

// Function UDKGame.UI_GlobalHUD.IsWavePanelHidden
struct UUI_GlobalHUD_IsWavePanelHidden_Params
{
};

// Function UDKGame.UI_GlobalHUD.ShowWavePanel
struct UUI_GlobalHUD_ShowWavePanel_Params
{
};

// Function UDKGame.UI_GlobalHUD.HideWavePanel
struct UUI_GlobalHUD_HideWavePanel_Params
{
};

// Function UDKGame.UI_GlobalHUD.AllowGlobalVisibilityToggling
struct UUI_GlobalHUD_AllowGlobalVisibilityToggling_Params
{
};

// Function UDKGame.UI_GlobalHUD.SetTowerUnitCosts
struct UUI_GlobalHUD_SetTowerUnitCosts_Params
{
};

// Function UDKGame.UI_GlobalHUD.SetWaveNumber
struct UUI_GlobalHUD_SetWaveNumber_Params
{
};

// Function UDKGame.UI_GlobalHUD.ReplicateToNewPlayerController
struct UUI_GlobalHUD_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.UI_GlobalHUD.ExecReplicatedUIMessage
struct UUI_GlobalHUD_ExecReplicatedUIMessage_Params
{
};

// Function UDKGame.DunDef_SeqVar_LocalizedString.GetObjectPath
struct UDunDef_SeqVar_LocalizedString_GetObjectPath_Params
{
};

// Function UDKGame.DunDef_SeqVar_LocalizedString.GetLocalizedString
struct UDunDef_SeqVar_LocalizedString_GetLocalizedString_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetPlayerHealthMultiplier
struct ADDGRI_Competitive_GetPlayerHealthMultiplier_Params
{
};

// Function UDKGame.DDGRI_Competitive.ModifyPlayerGroundSpeed
struct ADDGRI_Competitive_ModifyPlayerGroundSpeed_Params
{
};

// Function UDKGame.DDGRI_Competitive.DoUseFamiliarAbilities
struct ADDGRI_Competitive_DoUseFamiliarAbilities_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetExtraKnockbackMultiplier
struct ADDGRI_Competitive_GetExtraKnockbackMultiplier_Params
{
};

// Function UDKGame.DDGRI_Competitive.DoUseScoreLabel
struct ADDGRI_Competitive_DoUseScoreLabel_Params
{
};

// Function UDKGame.DDGRI_Competitive.SetupVictoryShopEquipments
struct ADDGRI_Competitive_SetupVictoryShopEquipments_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetWinningPRI
struct ADDGRI_Competitive_GetWinningPRI_Params
{
};

// Function UDKGame.DDGRI_Competitive.AllowDeathSpectatorMode
struct ADDGRI_Competitive_AllowDeathSpectatorMode_Params
{
};

// Function UDKGame.DDGRI_Competitive.AwardWaveCompletion
struct ADDGRI_Competitive_AwardWaveCompletion_Params
{
};

// Function UDKGame.DDGRI_Competitive.SellAllTowers
struct ADDGRI_Competitive_SellAllTowers_Params
{
};

// Function UDKGame.DDGRI_Competitive.PostBeginPlay
struct ADDGRI_Competitive_PostBeginPlay_Params
{
};

// Function UDKGame.DDGRI_Competitive.AllowPlayerDamage
struct ADDGRI_Competitive_AllowPlayerDamage_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetCompetitivePlayerList
struct ADDGRI_Competitive_GetCompetitivePlayerList_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetAltCurrentTowerUnits
struct ADDGRI_Competitive_GetAltCurrentTowerUnits_Params
{
};

// Function UDKGame.DDGRI_Competitive.GetCurrentTowerUnits
struct ADDGRI_Competitive_GetCurrentTowerUnits_Params
{
};

// Function UDKGame.DDGRI_Competitive.CanPlaceTowerUnitCost
struct ADDGRI_Competitive_CanPlaceTowerUnitCost_Params
{
};

// Function UDKGame.DDGRI_Competitive.RemovedTower
struct ADDGRI_Competitive_RemovedTower_Params
{
};

// Function UDKGame.DDGRI_Competitive.AddedTower
struct ADDGRI_Competitive_AddedTower_Params
{
};

// Function UDKGame.DDGRI_Competitive.ThePauseTimer
struct ADDGRI_Competitive_ThePauseTimer_Params
{
};

// Function UDKGame.DDGRI_Competitive.DoLevelVictory
struct ADDGRI_Competitive_DoLevelVictory_Params
{
};

// Function UDKGame.DDGRI_Competitive.WonGame
struct ADDGRI_Competitive_WonGame_Params
{
};

// Function UDKGame.DDGRI_Competitive.DestroyTowerOnOwnerLeft
struct ADDGRI_Competitive_DestroyTowerOnOwnerLeft_Params
{
};

// Function UDKGame.DDGRI_Competitive.DoDeathNotification
struct ADDGRI_Competitive_DoDeathNotification_Params
{
};

// Function UDKGame.DDGRI_Competitive.ExecReplicatedFunction
struct ADDGRI_Competitive_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefBuffManager.RefreshedBuffValues
struct ADunDefBuffManager_RefreshedBuffValues_Params
{
};

// Function UDKGame.DunDefBuffManager.RemoveFromTicking
struct ADunDefBuffManager_RemoveFromTicking_Params
{
};

// Function UDKGame.DunDefBuffManager.RegisterForTicking
struct ADunDefBuffManager_RegisterForTicking_Params
{
};

// Function UDKGame.DunDefBuffManager.Tick
struct ADunDefBuffManager_Tick_Params
{
};

// Function UDKGame.DunDefBuffManager.ShutDown
struct ADunDefBuffManager_ShutDown_Params
{
};

// Function UDKGame.DunDefBuffManager.ReplicateBuff
struct ADunDefBuffManager_ReplicateBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.ClientAddBuff
struct ADunDefBuffManager_ClientAddBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.GetBufffromID
struct ADunDefBuffManager_GetBufffromID_Params
{
};

// Function UDKGame.DunDefBuffManager.GenerateBuffID
struct ADunDefBuffManager_GenerateBuffID_Params
{
};

// Function UDKGame.DunDefBuffManager.CanAddLimitedBuffPerOwnerSpawnCount
struct ADunDefBuffManager_CanAddLimitedBuffPerOwnerSpawnCount_Params
{
};

// Function UDKGame.DunDefBuffManager.CanAddLimitedBuff
struct ADunDefBuffManager_CanAddLimitedBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.AddLimitedBuff
struct ADunDefBuffManager_AddLimitedBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.AddLimitedBuffsPerOwnerSpawnCount
struct ADunDefBuffManager_AddLimitedBuffsPerOwnerSpawnCount_Params
{
};

// Function UDKGame.DunDefBuffManager.RemoveBuff
struct ADunDefBuffManager_RemoveBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.AddBuff
struct ADunDefBuffManager_AddBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.CreatedBuff
struct ADunDefBuffManager_CreatedBuff_Params
{
};

// Function UDKGame.DunDefBuffManager.PostBeginPlay
struct ADunDefBuffManager_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefBuffManager.ReplicateToNewPlayerController
struct ADunDefBuffManager_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.DunDefBuffManager.ExecReplicatedFunction
struct ADunDefBuffManager_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefBuffManager.ReplicatedEvent
struct ADunDefBuffManager_ReplicatedEvent_Params
{
};

// Function UDKGame.UI_GameStats.UIPostRender
struct UUI_GameStats_UIPostRender_Params
{
};

// Function UDKGame.UI_GameStats.SceneActivated
struct UUI_GameStats_SceneActivated_Params
{
};

// Function UDKGame.UI_GameStats.UnhideLeaderboardTab
struct UUI_GameStats_UnhideLeaderboardTab_Params
{
};

// Function UDKGame.UI_GameStats.HideLeaderboardTab
struct UUI_GameStats_HideLeaderboardTab_Params
{
};

// Function UDKGame.UI_GameStats.NotifyLoginStatusChanged
struct UUI_GameStats_NotifyLoginStatusChanged_Params
{
};

// Function UDKGame.UI_GameStats.NotifyLinkStatusChanged
struct UUI_GameStats_NotifyLinkStatusChanged_Params
{
};

// Function UDKGame.UI_GameStats.NotifyOnlineServiceStatusChanged
struct UUI_GameStats_NotifyOnlineServiceStatusChanged_Params
{
};

// Function UDKGame.UI_GameStats.CheckLoginForLeaderboard
struct UUI_GameStats_CheckLoginForLeaderboard_Params
{
};

// Function UDKGame.UI_GameStats.RenderPerWaveBreakdown
struct UUI_GameStats_RenderPerWaveBreakdown_Params
{
};

// Function UDKGame.UI_GameStats.RenderTowerPopup
struct UUI_GameStats_RenderTowerPopup_Params
{
};

// Function UDKGame.UI_GameStats.RenderEnemyPopup
struct UUI_GameStats_RenderEnemyPopup_Params
{
};

// Function UDKGame.UI_GameStats.RenderHeroPopup
struct UUI_GameStats_RenderHeroPopup_Params
{
};

// Function UDKGame.UI_GameStats.CheckLongLine
struct UUI_GameStats_CheckLongLine_Params
{
};

// Function UDKGame.UI_GameStats.SetupHeroPopupPanel
struct UUI_GameStats_SetupHeroPopupPanel_Params
{
};

// Function UDKGame.UI_GameStats.CenterPopup
struct UUI_GameStats_CenterPopup_Params
{
};

// Function UDKGame.UI_GameStats.AdjustPopupBackground
struct UUI_GameStats_AdjustPopupBackground_Params
{
};

// Function UDKGame.UI_GameStats.BuildBestOfString
struct UUI_GameStats_BuildBestOfString_Params
{
};

// Function UDKGame.UI_GameStats.RenderBestOfStat
struct UUI_GameStats_RenderBestOfStat_Params
{
};

// Function UDKGame.UI_GameStats.RenderCompletionIcons
struct UUI_GameStats_RenderCompletionIcons_Params
{
};

// Function UDKGame.UI_GameStats.RenderStatEntries
struct UUI_GameStats_RenderStatEntries_Params
{
};

// Function UDKGame.UI_GameStats.GetPlayerSpecificNamedTowerStats
struct UUI_GameStats_GetPlayerSpecificNamedTowerStats_Params
{
};

// Function UDKGame.UI_GameStats.GetPlayerSpecificNamedKillStats
struct UUI_GameStats_GetPlayerSpecificNamedKillStats_Params
{
};

// Function UDKGame.UI_GameStats.CheckNewBest
struct UUI_GameStats_CheckNewBest_Params
{
};

// Function UDKGame.UI_GameStats.CountAwards
struct UUI_GameStats_CountAwards_Params
{
};

// Function UDKGame.UI_GameStats.RenderPopup
struct UUI_GameStats_RenderPopup_Params
{
};

// Function UDKGame.UI_GameStats.NotifyWidgetClicked
struct UUI_GameStats_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_GameStats.ToggleEnemyWaveIndex
struct UUI_GameStats_ToggleEnemyWaveIndex_Params
{
};

// Function UDKGame.UI_GameStats.OnReceivedInputKey
struct UUI_GameStats_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_GameStats.OnInterceptedInputKey
struct UUI_GameStats_OnInterceptedInputKey_Params
{
};

// Function UDKGame.UI_GameStats.OnReceivedInputAxis
struct UUI_GameStats_OnReceivedInputAxis_Params
{
};

// Function UDKGame.UI_GameStats.BuildAwardsString
struct UUI_GameStats_BuildAwardsString_Params
{
};

// Function UDKGame.UI_GameStats.AppendAwardsString
struct UUI_GameStats_AppendAwardsString_Params
{
};

// Function UDKGame.UI_GameStats.SetMVPAwards
struct UUI_GameStats_SetMVPAwards_Params
{
};

// Function UDKGame.UI_GameStats.SetHeroMIC
struct UUI_GameStats_SetHeroMIC_Params
{
};

// Function UDKGame.UI_GameStats.UpdateText
struct UUI_GameStats_UpdateText_Params
{
};

// Function UDKGame.UI_GameStats.ClearText
struct UUI_GameStats_ClearText_Params
{
};

// Function UDKGame.UI_GameStats.SetTextLine
struct UUI_GameStats_SetTextLine_Params
{
};

// Function UDKGame.UI_GameStats.MoveDown
struct UUI_GameStats_MoveDown_Params
{
};

// Function UDKGame.UI_GameStats.MoveUp
struct UUI_GameStats_MoveUp_Params
{
};

// Function UDKGame.UI_GameStats.DeactivatePopup
struct UUI_GameStats_DeactivatePopup_Params
{
};

// Function UDKGame.UI_GameStats.ActivatePopup
struct UUI_GameStats_ActivatePopup_Params
{
};

// Function UDKGame.UI_GameStats.ShowHeroObjects
struct UUI_GameStats_ShowHeroObjects_Params
{
};

// Function UDKGame.UI_GameStats.FocusSelector
struct UUI_GameStats_FocusSelector_Params
{
};

// Function UDKGame.UI_GameStats.SetSelected
struct UUI_GameStats_SetSelected_Params
{
};

// Function UDKGame.UI_GameStats.BuildFeedbackString
struct UUI_GameStats_BuildFeedbackString_Params
{
};

// Function UDKGame.UI_GameStats.Update
struct UUI_GameStats_Update_Params
{
};

// Function UDKGame.UI_GameStats.MouseSelectionIndex
struct UUI_GameStats_MouseSelectionIndex_Params
{
};

// Function UDKGame.UI_GameStats.ClearSelectorObjects
struct UUI_GameStats_ClearSelectorObjects_Params
{
};

// Function UDKGame.UI_GameStats.UpdateSelectorObjects
struct UUI_GameStats_UpdateSelectorObjects_Params
{
};

// Function UDKGame.UI_GameStats.SetupSelectorObjects
struct UUI_GameStats_SetupSelectorObjects_Params
{
};

// Function UDKGame.UI_GameStats.ActivatePanel
struct UUI_GameStats_ActivatePanel_Params
{
};

// Function UDKGame.UI_GameStats.RightWaveClicked
struct UUI_GameStats_RightWaveClicked_Params
{
};

// Function UDKGame.UI_GameStats.LeftWaveClicked
struct UUI_GameStats_LeftWaveClicked_Params
{
};

// Function UDKGame.UI_GameStats.RightPanelClicked
struct UUI_GameStats_RightPanelClicked_Params
{
};

// Function UDKGame.UI_GameStats.LeftPanelClicked
struct UUI_GameStats_LeftPanelClicked_Params
{
};

// Function UDKGame.UI_GameStats.ToggleButtonClicked
struct UUI_GameStats_ToggleButtonClicked_Params
{
};

// Function UDKGame.UI_GameStats.AddPlayerStats
struct UUI_GameStats_AddPlayerStats_Params
{
};

// Function UDKGame.UI_GameStats.AddEnemyStats
struct UUI_GameStats_AddEnemyStats_Params
{
};

// Function UDKGame.UI_GameStats.AddTowerStats
struct UUI_GameStats_AddTowerStats_Params
{
};

// Function UDKGame.UI_GameStats.Preprocess
struct UUI_GameStats_Preprocess_Params
{
};

// Function UDKGame.UI_GameStats.CustomInit
struct UUI_GameStats_CustomInit_Params
{
};

// Function UDKGame.UI_GameStats.GetOpenAnimation
struct UUI_GameStats_GetOpenAnimation_Params
{
};

// Function UDKGame.UI_GameStats.ShowDeletionConfirmation
struct UUI_GameStats_ShowDeletionConfirmation_Params
{
};

// Function UDKGame.DunDefProjectile.GetStatModifierObject
struct ADunDefProjectile_GetStatModifierObject_Params
{
};

// Function UDKGame.DunDefProjectile.GetStatValueByTag
struct ADunDefProjectile_GetStatValueByTag_Params
{
};

// Function UDKGame.DunDefProjectile.InitalizeActorStats
struct ADunDefProjectile_InitalizeActorStats_Params
{
};

// Function UDKGame.DunDefProjectile.DoDestroy
struct ADunDefProjectile_DoDestroy_Params
{
};

// Function UDKGame.DunDefProjectile.AllowReflect
struct ADunDefProjectile_AllowReflect_Params
{
};

// Function UDKGame.DunDefProjectile.OnProjectileImpacted
struct ADunDefProjectile_OnProjectileImpacted_Params
{
};

// Function UDKGame.DunDefProjectile.HurtRadius
struct ADunDefProjectile_HurtRadius_Params
{
};

// Function UDKGame.DunDefProjectile.AllowDamage
struct ADunDefProjectile_AllowDamage_Params
{
};

// Function UDKGame.DunDefProjectile.DunDefProjHurtRadius
struct ADunDefProjectile_DunDefProjHurtRadius_Params
{
};

// Function UDKGame.DunDefProjectile.EndRadiusDamage
struct ADunDefProjectile_EndRadiusDamage_Params
{
};

// Function UDKGame.DunDefProjectile.AffectVictim
struct ADunDefProjectile_AffectVictim_Params
{
};

// Function UDKGame.DunDefProjectile.StartRadiusDamage
struct ADunDefProjectile_StartRadiusDamage_Params
{
};

// Function UDKGame.DunDefProjectile.Explode
struct ADunDefProjectile_Explode_Params
{
};

// Function UDKGame.DunDefProjectile.SpawnImpactDecal
struct ADunDefProjectile_SpawnImpactDecal_Params
{
};

// Function UDKGame.DunDefProjectile.ApplyFluidSurfaceImpact
struct ADunDefProjectile_ApplyFluidSurfaceImpact_Params
{
};

// Function UDKGame.DunDefProjectile.ScaleForHeroModifiers
struct ADunDefProjectile_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefProjectile.AllowHeroGUID
struct ADunDefProjectile_AllowHeroGUID_Params
{
};

// Function UDKGame.DunDefProjectile.InitializeDD
struct ADunDefProjectile_InitializeDD_Params
{
};

// Function UDKGame.DunDefProjectile.ScaleProjectileVisualEffect
struct ADunDefProjectile_ScaleProjectileVisualEffect_Params
{
};

// Function UDKGame.DunDefProjectile.Init
struct ADunDefProjectile_Init_Params
{
};

// Function UDKGame.DunDefProjectile.InitProjectile
struct ADunDefProjectile_InitProjectile_Params
{
};

// Function UDKGame.DunDefProjectile.Destroyed
struct ADunDefProjectile_Destroyed_Params
{
};

// Function UDKGame.DunDefProjectile.ProcessTouch
struct ADunDefProjectile_ProcessTouch_Params
{
};

// Function UDKGame.DunDefProjectile.HitWall
struct ADunDefProjectile_HitWall_Params
{
};

// Function UDKGame.DunDefProjectile.IsImpactAllowed
struct ADunDefProjectile_IsImpactAllowed_Params
{
};

// Function UDKGame.DunDefProjectile.Expire
struct ADunDefProjectile_Expire_Params
{
};

// Function UDKGame.DunDefProjectile.RefreshSpeedLifeSpan
struct ADunDefProjectile_RefreshSpeedLifeSpan_Params
{
};

// Function UDKGame.DunDefProjectile.PostBeginPlay
struct ADunDefProjectile_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefProjectile.SetRandomDamageType
struct ADunDefProjectile_SetRandomDamageType_Params
{
};

// Function UDKGame.DunDefProjectile.SetClientSideLocation
struct ADunDefProjectile_SetClientSideLocation_Params
{
};

// Function UDKGame.DunDefProjectile.ReplicatedEvent
struct ADunDefProjectile_ReplicatedEvent_Params
{
};

// Function UDKGame.UI_EquipmentInfo.InitForEquipment
struct UUI_EquipmentInfo_InitForEquipment_Params
{
};

// Function UDKGame.UI_EquipmentInfo.SceneDeactivated
struct UUI_EquipmentInfo_SceneDeactivated_Params
{
};

// Function UDKGame.UI_SwapHero.OnReceivedInputKey
struct UUI_SwapHero_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_SwapHero.SelectHeroNumber
struct UUI_SwapHero_SelectHeroNumber_Params
{
};

// Function UDKGame.UI_SwapHero.Update
struct UUI_SwapHero_Update_Params
{
};

// Function UDKGame.UI_SwapHero.InstantSwapHero
struct UUI_SwapHero_InstantSwapHero_Params
{
};

// Function UDKGame.UI_SwapHero.swapHero
struct UUI_SwapHero_swapHero_Params
{
};

// Function UDKGame.UI_SwapHero.RefreshedList
struct UUI_SwapHero_RefreshedList_Params
{
};

// Function UDKGame.UI_SwapHero.RefreshHeroList
struct UUI_SwapHero_RefreshHeroList_Params
{
};

// Function UDKGame.UI_SwapHero.EntryEnabledCheck
struct UUI_SwapHero_EntryEnabledCheck_Params
{
};

// Function UDKGame.UI_SwapHero.PrepareToRefreshHeroList
struct UUI_SwapHero_PrepareToRefreshHeroList_Params
{
};

// Function UDKGame.UI_SwapHero.NotifyWidgetClicked
struct UUI_SwapHero_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_SwapHero.DeleteSelectedHero
struct UUI_SwapHero_DeleteSelectedHero_Params
{
};

// Function UDKGame.UI_SwapHero.HeroEntrySelected
struct UUI_SwapHero_HeroEntrySelected_Params
{
};

// Function UDKGame.UI_SwapHero.PostInitialSceneUpdate
struct UUI_SwapHero_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_SwapHero.SceneActivated
struct UUI_SwapHero_SceneActivated_Params
{
};

// Function UDKGame.UI_SwapHero.GetHeroManager
struct UUI_SwapHero_GetHeroManager_Params
{
};

// Function UDKGame.DunDefManaToken.GetRating
struct ADunDefManaToken_GetRating_Params
{
};

// Function UDKGame.DunDefManaToken.ClearLocalCollection
struct ADunDefManaToken_ClearLocalCollection_Params
{
};

// Function UDKGame.DunDefManaToken.SetClearLocalCollectionTimer
struct ADunDefManaToken_SetClearLocalCollectionTimer_Params
{
};

// Function UDKGame.DunDefManaToken.DestroyAllManaTokens
struct ADunDefManaToken_DestroyAllManaTokens_Params
{
};

// Function UDKGame.DunDefManaToken.GetFramerateForceScale
struct ADunDefManaToken_GetFramerateForceScale_Params
{
};

// Function UDKGame.DunDefManaToken.Tick
struct ADunDefManaToken_Tick_Params
{
};

// Function UDKGame.DunDefManaToken.UpdateCombatLifeSpan
struct ADunDefManaToken_UpdateCombatLifeSpan_Params
{
};

// Function UDKGame.DunDefManaToken.ClearLocalIgnoreAttractor
struct ADunDefManaToken_ClearLocalIgnoreAttractor_Params
{
};

// Function UDKGame.DunDefManaToken.AttractTo
struct ADunDefManaToken_AttractTo_Params
{
};

// Function UDKGame.DunDefManaToken.ClearInstigator
struct ADunDefManaToken_ClearInstigator_Params
{
};

// Function UDKGame.DunDefManaToken.ReenableCollision
struct ADunDefManaToken_ReenableCollision_Params
{
};

// Function UDKGame.DunDefManaToken.PostBeginPlay
struct ADunDefManaToken_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefManaToken.PreBeginPlay
struct ADunDefManaToken_PreBeginPlay_Params
{
};

// Function UDKGame.DunDefManaToken.Destroyed
struct ADunDefManaToken_Destroyed_Params
{
};

// Function UDKGame.DunDefManaToken.FellOutOfWorld
struct ADunDefManaToken_FellOutOfWorld_Params
{
};

// Function UDKGame.DunDefManaToken.TornOff
struct ADunDefManaToken_TornOff_Params
{
};

// Function UDKGame.DunDefManaToken.TakeRadiusDamage
struct ADunDefManaToken_TakeRadiusDamage_Params
{
};

// Function UDKGame.DunDefManaToken.TakeDamage
struct ADunDefManaToken_TakeDamage_Params
{
};

// Function UDKGame.DunDefManaToken.GetManaPower
struct ADunDefManaToken_GetManaPower_Params
{
};

// Function UDKGame.DunDefManaToken.Collected
struct ADunDefManaToken_Collected_Params
{
};

// Function UDKGame.DunDefManaToken.ReEnableattraction
struct ADunDefManaToken_ReEnableattraction_Params
{
};

// Function UDKGame.DunDefManaToken.SetAttractionEnabled
struct ADunDefManaToken_SetAttractionEnabled_Params
{
};

// Function UDKGame.DunDefManaToken.ClearInitialAttractor
struct ADunDefManaToken_ClearInitialAttractor_Params
{
};

// Function UDKGame.DunDefManaToken.SetInitialAttractor
struct ADunDefManaToken_SetInitialAttractor_Params
{
};

// Function UDKGame.DunDefManaToken.ReplicatedEvent
struct ADunDefManaToken_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefGamePhaseSubscriberInterface.ChangedGamePhases
struct UDunDefGamePhaseSubscriberInterface_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefGasCloud.AllowSpawn
struct ADunDefGasCloud_AllowSpawn_Params
{
};

// Function UDKGame.DunDefGasCloud.StaticGetCloudLifeSpan
struct ADunDefGasCloud_StaticGetCloudLifeSpan_Params
{
};

// Function UDKGame.DunDefGasCloud.StaticGetAttackRange
struct ADunDefGasCloud_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefGasCloud.StaticGetAttackDamage
struct ADunDefGasCloud_StaticGetAttackDamage_Params
{
};

// Function UDKGame.DunDefGasCloud.StaticGetAttackRate
struct ADunDefGasCloud_StaticGetAttackRate_Params
{
};

// Function UDKGame.DunDefGasCloud.UpdateEffectInterval
struct ADunDefGasCloud_UpdateEffectInterval_Params
{
};

// Function UDKGame.DunDefGasCloud.GetDamageMult
struct ADunDefGasCloud_GetDamageMult_Params
{
};

// Function UDKGame.DunDefGasCloud.ScaleRadiusEffect
struct ADunDefGasCloud_ScaleRadiusEffect_Params
{
};

// Function UDKGame.DunDefGasCloud.ScaleForHeroModifiers
struct ADunDefGasCloud_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefGasCloud.AllowHeroGUID
struct ADunDefGasCloud_AllowHeroGUID_Params
{
};

// Function UDKGame.DunDefGasCloud.InitializeDD
struct ADunDefGasCloud_InitializeDD_Params
{
};

// Function UDKGame.DunDefGasCloud.SetLifeSpanTimeout
struct ADunDefGasCloud_SetLifeSpanTimeout_Params
{
};

// Function UDKGame.DunDefGasCloud.PostBeginPlay
struct ADunDefGasCloud_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefGasCloud.GetTargetDesirability
struct ADunDefGasCloud_GetTargetDesirability_Params
{
};

// Function UDKGame.DunDefGasCloud.EffectTimer
struct ADunDefGasCloud_EffectTimer_Params
{
};

// Function UDKGame.DunDefGasCloud.GetRadiusDamage
struct ADunDefGasCloud_GetRadiusDamage_Params
{
};

// Function UDKGame.DunDefGasCloud.HurtRadius
struct ADunDefGasCloud_HurtRadius_Params
{
};

// Function UDKGame.DunDefGasCloud.IsClassOnIgnoreList
struct ADunDefGasCloud_IsClassOnIgnoreList_Params
{
};

// Function UDKGame.DunDefGasCloud.FadeOut
struct ADunDefGasCloud_FadeOut_Params
{
};

// Function UDKGame.DunDefGasCloud.ReplicatedEvent
struct ADunDefGasCloud_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefGasCloud.NotifyWeapon
struct ADunDefGasCloud_NotifyWeapon_Params
{
};

// Function UDKGame.UI_BuildTimer.FinishBuildPhase
struct UUI_BuildTimer_FinishBuildPhase_Params
{
};

// Function UDKGame.UI_BuildTimer.Update
struct UUI_BuildTimer_Update_Params
{
};

// Function UDKGame.UI_BuildTimer.RefreshKillCount
struct UUI_BuildTimer_RefreshKillCount_Params
{
};

// Function UDKGame.UI_BuildTimer.SceneActivated
struct UUI_BuildTimer_SceneActivated_Params
{
};

// Function UDKGame.UI_BuildTimer.ReplicateToNewPlayerController
struct UUI_BuildTimer_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.UI_BuildTimer.ExecReplicatedUIMessage
struct UUI_BuildTimer_ExecReplicatedUIMessage_Params
{
};

// Function UDKGame.DunDefWaveBillboard.Destroyed
struct ADunDefWaveBillboard_Destroyed_Params
{
};

// Function UDKGame.DunDefWaveBillboard.PostBeginPlay
struct ADunDefWaveBillboard_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWaveBillboard.GetEntryIndexForEnemyType
struct ADunDefWaveBillboard_GetEntryIndexForEnemyType_Params
{
};

// Function UDKGame.DunDefWaveBillboard.GetFreeDisplayEntryIndex
struct ADunDefWaveBillboard_GetFreeDisplayEntryIndex_Params
{
};

// Function UDKGame.DunDefWaveBillboard.RefreshBillboard
struct ADunDefWaveBillboard_RefreshBillboard_Params
{
};

// Function UDKGame.DunDefWaveBillboard.DrawMiniMapIcon
struct ADunDefWaveBillboard_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefWaveBillboard.DrawBillboard
struct ADunDefWaveBillboard_DrawBillboard_Params
{
};

// Function UDKGame.DunDefWaveBillboard.DrawMyHUD
struct ADunDefWaveBillboard_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefWaveBillboard.OnlyDrawHUDForOwner
struct ADunDefWaveBillboard_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDefWaveBillboard.ClearEnemyEntries
struct ADunDefWaveBillboard_ClearEnemyEntries_Params
{
};

// Function UDKGame.DunDefWaveBillboard.ChangedGamePhases
struct ADunDefWaveBillboard_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefForge.PreventTowerAtPoint
struct ADunDefForge_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefForge.AllowTowerAtPoint
struct ADunDefForge_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefForge.CheckAllowance
struct ADunDefForge_CheckAllowance_Params
{
};

// Function UDKGame.DunDefForge.GetToolTipPriority
struct ADunDefForge_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefForge.TakesToolTipPriority
struct ADunDefForge_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefForge.GetAForge
struct ADunDefForge_GetAForge_Params
{
};

// Function UDKGame.DunDefForge.DrawMiniMapIcon
struct ADunDefForge_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefForge.DrawToolTip
struct ADunDefForge_DrawToolTip_Params
{
};

// Function UDKGame.DunDefForge.shouldShowAltActivation
struct ADunDefForge_shouldShowAltActivation_Params
{
};

// Function UDKGame.DunDefForge.ContinueDrawingToolTip
struct ADunDefForge_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefForge.SetLeaderboardSignString
struct ADunDefForge_SetLeaderboardSignString_Params
{
};

// Function UDKGame.DunDefForge.RemoveLeaderboardSign
struct ADunDefForge_RemoveLeaderboardSign_Params
{
};

// Function UDKGame.DunDefForge.UpdateUnhiding
struct ADunDefForge_UpdateUnhiding_Params
{
};

// Function UDKGame.DunDefForge.UpdateHiding
struct ADunDefForge_UpdateHiding_Params
{
};

// Function UDKGame.DunDefForge.Tick
struct ADunDefForge_Tick_Params
{
};

// Function UDKGame.DunDefForge.GetActivationOffset
struct ADunDefForge_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefForge.ShowLobbyLevelGamerTag
struct ADunDefForge_ShowLobbyLevelGamerTag_Params
{
};

// Function UDKGame.DunDefForge.ShowLeaderboardEntryGamerTag
struct ADunDefForge_ShowLeaderboardEntryGamerTag_Params
{
};

// Function UDKGame.DunDefForge.Client_Activate
struct ADunDefForge_Client_Activate_Params
{
};

// Function UDKGame.DunDefForge.Server_Activate
struct ADunDefForge_Server_Activate_Params
{
};

// Function UDKGame.DunDefForge.GetActivationWeighting
struct ADunDefForge_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefForge.AllowActivation
struct ADunDefForge_AllowActivation_Params
{
};

// Function UDKGame.DunDefForge.ChangedGamePhases
struct ADunDefForge_ChangedGamePhases_Params
{
};

// Function UDKGame.DunDefForge.UpdateLeaderboardSign
struct ADunDefForge_UpdateLeaderboardSign_Params
{
};

// Function UDKGame.DunDefForge.ShowLeaderboardSign
struct ADunDefForge_ShowLeaderboardSign_Params
{
};

// Function UDKGame.DunDefForge.HideLeaderboardSign
struct ADunDefForge_HideLeaderboardSign_Params
{
};

// Function UDKGame.DunDefForge.CheckCombatPhase
struct ADunDefForge_CheckCombatPhase_Params
{
};

// Function UDKGame.DunDefForge.Destroyed
struct ADunDefForge_Destroyed_Params
{
};

// Function UDKGame.DunDefForge.ClearLeaderboardDelegate
struct ADunDefForge_ClearLeaderboardDelegate_Params
{
};

// Function UDKGame.DunDefForge.GetLeaderboardSignString
struct ADunDefForge_GetLeaderboardSignString_Params
{
};

// Function UDKGame.DunDefForge.OnLeaderboardReadComplete
struct ADunDefForge_OnLeaderboardReadComplete_Params
{
};

// Function UDKGame.DunDefForge.ServerAnalyzeHighScoresAgainstCache
struct ADunDefForge_ServerAnalyzeHighScoresAgainstCache_Params
{
};

// Function UDKGame.DunDefForge.ClientUpdateLeaderBoardString
struct ADunDefForge_ClientUpdateLeaderBoardString_Params
{
};

// Function UDKGame.DunDefForge.CheckForLeaderboardHUDMessage
struct ADunDefForge_CheckForLeaderboardHUDMessage_Params
{
};

// Function UDKGame.DunDefForge.RefreshLeaderboardSign
struct ADunDefForge_RefreshLeaderboardSign_Params
{
};

// Function UDKGame.DunDefForge.PostBeginPlay
struct ADunDefForge_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefForge.Deactivate
struct ADunDefForge_Deactivate_Params
{
};

// Function UDKGame.DunDefForge.LightInterpDown
struct ADunDefForge_LightInterpDown_Params
{
};

// Function UDKGame.DunDefForge.LightInterpUp
struct ADunDefForge_LightInterpUp_Params
{
};

// Function UDKGame.DunDefForge.Activate
struct ADunDefForge_Activate_Params
{
};

// Function UDKGame.DunDefForge.ExecReplicatedFunction
struct ADunDefForge_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefForge.ReplicatedEvent
struct ADunDefForge_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefCustomNode.Destroyed
struct ADunDefCustomNode_Destroyed_Params
{
};

// Function UDKGame.DunDefCustomNode.PostBeginPlay
struct ADunDefCustomNode_PostBeginPlay_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetStatLevelUpAmountIterations
struct UHeroEquipment_Familiar_TowerBooster_GetStatLevelUpAmountIterations_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetNextStatLevelUpValue
struct UHeroEquipment_Familiar_TowerBooster_GetNextStatLevelUpValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetShiftClickUpgradeCount
struct UHeroEquipment_Familiar_TowerBooster_GetShiftClickUpgradeCount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.InitFromNetInfo
struct UHeroEquipment_Familiar_TowerBooster_InitFromNetInfo_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.AddRandomizeValues
struct UHeroEquipment_Familiar_TowerBooster_AddRandomizeValues_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.CheckStatLevelUpIterations
struct UHeroEquipment_Familiar_TowerBooster_CheckStatLevelUpIterations_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.AllowStatLevelUp
struct UHeroEquipment_Familiar_TowerBooster_AllowStatLevelUp_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.NotifyEquipment_PawnAttacked
struct UHeroEquipment_Familiar_TowerBooster_NotifyEquipment_PawnAttacked_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_TowerBooster_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetDesiredDirection
struct UHeroEquipment_Familiar_TowerBooster_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.TickedByPawn
struct UHeroEquipment_Familiar_TowerBooster_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetFurthestAdditionalTarget
struct UHeroEquipment_Familiar_TowerBooster_GetFurthestAdditionalTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.UpdateAdditionaBoostTargets
struct UHeroEquipment_Familiar_TowerBooster_UpdateAdditionaBoostTargets_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.RemoveAllTargets
struct UHeroEquipment_Familiar_TowerBooster_RemoveAllTargets_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.ShutDown
struct UHeroEquipment_Familiar_TowerBooster_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetBestAdditionalBoostTarget
struct UHeroEquipment_Familiar_TowerBooster_GetBestAdditionalBoostTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetBestTarget
struct UHeroEquipment_Familiar_TowerBooster_GetBestTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetBoostRange
struct UHeroEquipment_Familiar_TowerBooster_GetBoostRange_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetTowerBoostAmount
struct UHeroEquipment_Familiar_TowerBooster_GetTowerBoostAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.HasTowerBoostingType
struct UHeroEquipment_Familiar_TowerBooster_HasTowerBoostingType_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerBooster.GetTowerBoostingTarget
struct UHeroEquipment_Familiar_TowerBooster_GetTowerBoostingTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_TowerHealer_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.DoHealing
struct UHeroEquipment_Familiar_TowerHealer_DoHealing_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetWeaponDamage
struct UHeroEquipment_Familiar_TowerHealer_GetWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_Familiar_TowerHealer_ApplyPrimaryDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetEquipmentStatValue
struct UHeroEquipment_Familiar_TowerHealer_GetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetAttackInterval
struct UHeroEquipment_Familiar_TowerHealer_GetAttackInterval_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetHealAmount
struct UHeroEquipment_Familiar_TowerHealer_GetHealAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.NotifyEquipment_PawnAttacked
struct UHeroEquipment_Familiar_TowerHealer_NotifyEquipment_PawnAttacked_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_TowerHealer_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetDesiredDirection
struct UHeroEquipment_Familiar_TowerHealer_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.UpdateAI
struct UHeroEquipment_Familiar_TowerHealer_UpdateAI_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.TickedByPawn
struct UHeroEquipment_Familiar_TowerHealer_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.ShutDown
struct UHeroEquipment_Familiar_TowerHealer_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.GetBestTarget
struct UHeroEquipment_Familiar_TowerHealer_GetBestTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_TowerHealer.AttachedComponent
struct UHeroEquipment_Familiar_TowerHealer_AttachedComponent_Params
{
};

// Function UDKGame.DunDef_SeqEvent_CustomEvent.Activated
struct UDunDef_SeqEvent_CustomEvent_Activated_Params
{
};

// Function UDKGame.UI_LoadingScreen.ShowProTip
struct UUI_LoadingScreen_ShowProTip_Params
{
};

// Function UDKGame.UI_LoadingScreen.AllowGlobalVisibilityToggling
struct UUI_LoadingScreen_AllowGlobalVisibilityToggling_Params
{
};

// Function UDKGame.UI_LoadingScreen.SceneActivated
struct UUI_LoadingScreen_SceneActivated_Params
{
};

// Function UDKGame.UI_LoadingScreen.Update
struct UUI_LoadingScreen_Update_Params
{
};

// Function UDKGame.UI_LoadingScreen.CloseWithAnimation
struct UUI_LoadingScreen_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_LoadingScreen.CloseScene
struct UUI_LoadingScreen_CloseScene_Params
{
};

// Function UDKGame.UILabel_ScoreIndicator.Created
struct UUILabel_ScoreIndicator_Created_Params
{
};

// Function UDKGame.UILabel_ScoreIndicator.Update
struct UUILabel_ScoreIndicator_Update_Params
{
};

// Function UDKGame.UILabel_ScoreIndicator.ShowMajorNotificationLabel
struct UUILabel_ScoreIndicator_ShowMajorNotificationLabel_Params
{
};

// Function UDKGame.UILabel_ScoreIndicator.AddPopUp
struct UUILabel_ScoreIndicator_AddPopUp_Params
{
};

// Function UDKGame.UILabel_ScoreIndicator.AddToScore
struct UUILabel_ScoreIndicator_AddToScore_Params
{
};

// Function UDKGame.DunDefHUDInterface.OnlyDrawHUDForOwner
struct UDunDefHUDInterface_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDefHUDInterface.DrawMyHUD
struct UDunDefHUDInterface_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefTower_AuraStrengthDrain.DrawTowerToolTipStats
struct ADunDefTower_AuraStrengthDrain_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_AuraStrengthDrain.GetStrengthDrainMultiplier
struct ADunDefTower_AuraStrengthDrain_GetStrengthDrainMultiplier_Params
{
};

// Function UDKGame.DunDefTower_AuraStrengthDrain.ExitEffect
struct ADunDefTower_AuraStrengthDrain_ExitEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraStrengthDrain.EntryEffect
struct ADunDefTower_AuraStrengthDrain_EntryEffect_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.UsesRange
struct ADunDefTower_DetonationType_UsesRange_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetGlobalTowerHealthMultiplier
struct ADunDefTower_DetonationType_GetGlobalTowerHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetDamageMultiplier
struct ADunDefTower_DetonationType_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.CanTargetInvisibleTarget
struct ADunDefTower_DetonationType_CanTargetInvisibleTarget_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.HealPctOfMaxHealth
struct ADunDefTower_DetonationType_HealPctOfMaxHealth_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.HealDetonationStyle
struct ADunDefTower_DetonationType_HealDetonationStyle_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.HealDamage
struct ADunDefTower_DetonationType_HealDamage_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.AddHealth
struct ADunDefTower_DetonationType_AddHealth_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.PlaySellFX
struct ADunDefTower_DetonationType_PlaySellFX_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.UseForTowerSelectionPassThrough
struct ADunDefTower_DetonationType_UseForTowerSelectionPassThrough_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetDamageType
struct ADunDefTower_DetonationType_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.PerformFullHeal
struct ADunDefTower_DetonationType_PerformFullHeal_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.DrawTowerToolTipStats
struct ADunDefTower_DetonationType_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.IncrementRepair
struct ADunDefTower_DetonationType_IncrementRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetCurrentRepairPercentage
struct ADunDefTower_DetonationType_GetCurrentRepairPercentage_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.StartRepair
struct ADunDefTower_DetonationType_StartRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetTimeOfTotalRepair
struct ADunDefTower_DetonationType_GetTimeOfTotalRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetTimeToRepair
struct ADunDefTower_DetonationType_GetTimeToRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetCostToRepair
struct ADunDefTower_DetonationType_GetCostToRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.NeedsRepair
struct ADunDefTower_DetonationType_NeedsRepair_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetMaxDetonations
struct ADunDefTower_DetonationType_GetMaxDetonations_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.StaticGetTowerScale
struct ADunDefTower_DetonationType_StaticGetTowerScale_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.StaticGetAttackRange
struct ADunDefTower_DetonationType_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetAttackDamage
struct ADunDefTower_DetonationType_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetAttackRate
struct ADunDefTower_DetonationType_GetAttackRate_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetAttackDuration
struct ADunDefTower_DetonationType_GetAttackDuration_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetAttackRange
struct ADunDefTower_DetonationType_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetCollisionRadius
struct ADunDefTower_DetonationType_GetCollisionRadius_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.SetRadiusScale
struct ADunDefTower_DetonationType_SetRadiusScale_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetToolTipText
struct ADunDefTower_DetonationType_GetToolTipText_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.RemoveTowerBooster
struct ADunDefTower_DetonationType_RemoveTowerBooster_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.AddTowerBooster
struct ADunDefTower_DetonationType_AddTowerBooster_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.ScaleForHeroModifiers
struct ADunDefTower_DetonationType_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.ScaleHealthMultiplier
struct ADunDefTower_DetonationType_ScaleHealthMultiplier_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.PostBeginPlay
struct ADunDefTower_DetonationType_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetHealth
struct ADunDefTower_DetonationType_GetHealth_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.GetHealthPercent
struct ADunDefTower_DetonationType_GetHealthPercent_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.DrawMyHUD
struct ADunDefTower_DetonationType_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.CanDetonate
struct ADunDefTower_DetonationType_CanDetonate_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.CheckOverlappedTouchingDetonation
struct ADunDefTower_DetonationType_CheckOverlappedTouchingDetonation_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.CheckTouchingDetonation
struct ADunDefTower_DetonationType_CheckTouchingDetonation_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.Touch
struct ADunDefTower_DetonationType_Touch_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.Detonate
struct ADunDefTower_DetonationType_Detonate_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.SpringTrap
struct ADunDefTower_DetonationType_SpringTrap_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.ExecReplicatedFunction
struct ADunDefTower_DetonationType_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.ReplicatedEvent
struct ADunDefTower_DetonationType_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.OnDestroy_RemoveFromTargetableList
struct ADunDefTower_DetonationType_OnDestroy_RemoveFromTargetableList_Params
{
};

// Function UDKGame.DunDefTower_DetonationType.OnPostBeginPlay_AddToTargetableList
struct ADunDefTower_DetonationType_OnPostBeginPlay_AddToTargetableList_Params
{
};

// Function UDKGame.Dictionary_IntObj.IsEmpty
struct UDictionary_IntObj_IsEmpty_Params
{
};

// Function UDKGame.Dictionary_IntObj.Clear
struct UDictionary_IntObj_Clear_Params
{
};

// Function UDKGame.Dictionary_IntObj.ToArray
struct UDictionary_IntObj_ToArray_Params
{
};

// Function UDKGame.Dictionary_IntObj.GetKeyByValue
struct UDictionary_IntObj_GetKeyByValue_Params
{
};

// Function UDKGame.Dictionary_IntObj.Remove
struct UDictionary_IntObj_Remove_Params
{
};

// Function UDKGame.Dictionary_IntObj.Get
struct UDictionary_IntObj_Get_Params
{
};

// Function UDKGame.Dictionary_IntObj.Add
struct UDictionary_IntObj_Add_Params
{
};

// Function UDKGame.Dictionary_IntObj.Init
struct UDictionary_IntObj_Init_Params
{
};

// Function UDKGame.Dictionary_IntObj.Create
struct UDictionary_IntObj_Create_Params
{
};

// Function UDKGame.DLCDataListProvider.GetDataListEntries
struct UDLCDataListProvider_GetDataListEntries_Params
{
};

// Function UDKGame.DLCListEntry.IsRootEntry
struct UDLCListEntry_IsRootEntry_Params
{
};

// Function UDKGame.DLCListEntry.GetFolderID
struct UDLCListEntry_GetFolderID_Params
{
};

// Function UDKGame.DLCListEntry.GetDataProps
struct UDLCListEntry_GetDataProps_Params
{
};

// Function UDKGame.DLCListEntry.GetDataString
struct UDLCListEntry_GetDataString_Params
{
};

// Function UDKGame.DLCListEntry.GetEntryEnabled
struct UDLCListEntry_GetEntryEnabled_Params
{
};

// Function UDKGame.DunDef_SeqAct_ActivateNetworkEvent.Activated
struct UDunDef_SeqAct_ActivateNetworkEvent_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_AddMana.Activated
struct UDunDef_SeqAct_AddMana_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_AddScore.Activated
struct UDunDef_SeqAct_AddScore_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_AppPurchased.Activated
struct UDunDef_SeqAct_AppPurchased_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_AwardWaveCompletion.Activated
struct UDunDef_SeqAct_AwardWaveCompletion_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_BankAllDrops.Activated
struct UDunDef_SeqAct_BankAllDrops_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_BasicActorSpawner.Activated
struct UDunDef_SeqAct_BasicActorSpawner_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_CheckForLevelUps.Activated
struct UDunDef_SeqAct_CheckForLevelUps_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ConcatString.Activated
struct UDunDef_SeqAct_ConcatString_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_DestroyAllType.Activated
struct UDunDef_SeqAct_DestroyAllType_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_DisablePlayerInput.Activated
struct UDunDef_SeqAct_DisablePlayerInput_Activated_Params
{
};

// Function UDKGame.DunDef_SeqVar_TutorialData.ParsePCString
struct UDunDef_SeqVar_TutorialData_ParsePCString_Params
{
};

// Function UDKGame.DunDef_SeqVar_TutorialData.GetTutorialData
struct UDunDef_SeqVar_TutorialData_GetTutorialData_Params
{
};

// Function UDKGame.DunDef_SeqAct_DisplayTutorialText.Update
struct UDunDef_SeqAct_DisplayTutorialText_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_DisplayTutorialText.Hide
struct UDunDef_SeqAct_DisplayTutorialText_Hide_Params
{
};

// Function UDKGame.DunDef_SeqAct_DisplayTutorialText.Activated
struct UDunDef_SeqAct_DisplayTutorialText_Activated_Params
{
};

// Function UDKGame.UI_TutorialText.SetDisplayText
struct UUI_TutorialText_SetDisplayText_Params
{
};

// Function UDKGame.DunDef_SeqAct_EnablePostMissionCinematic.Activated
struct UDunDef_SeqAct_EnablePostMissionCinematic_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_EndTBRTimer.Activated
struct UDunDef_SeqAct_EndTBRTimer_Activated_Params
{
};

// Function UDKGame.UI_KillCount.IsSurvivalTimeLimitGameType
struct UUI_KillCount_IsSurvivalTimeLimitGameType_Params
{
};

// Function UDKGame.UI_KillCount.SceneDeactivated
struct UUI_KillCount_SceneDeactivated_Params
{
};

// Function UDKGame.UI_KillCount.NotifyLevelVictory
struct UUI_KillCount_NotifyLevelVictory_Params
{
};

// Function UDKGame.UI_KillCount.NotifyGameOver
struct UUI_KillCount_NotifyGameOver_Params
{
};

// Function UDKGame.UI_KillCount.StaticHideBossHealthBar
struct UUI_KillCount_StaticHideBossHealthBar_Params
{
};

// Function UDKGame.UI_KillCount.StaticShowBossHealthBar
struct UUI_KillCount_StaticShowBossHealthBar_Params
{
};

// Function UDKGame.UI_KillCount.StaticSubtractFromKillCount
struct UUI_KillCount_StaticSubtractFromKillCount_Params
{
};

// Function UDKGame.UI_KillCount.Update
struct UUI_KillCount_Update_Params
{
};

// Function UDKGame.UI_KillCount.HideBossHealthBar
struct UUI_KillCount_HideBossHealthBar_Params
{
};

// Function UDKGame.UI_KillCount.ShowBossHealthBar
struct UUI_KillCount_ShowBossHealthBar_Params
{
};

// Function UDKGame.UI_KillCount.SubtractFromKillCount
struct UUI_KillCount_SubtractFromKillCount_Params
{
};

// Function UDKGame.UI_KillCount.HideKillCountPanel
struct UUI_KillCount_HideKillCountPanel_Params
{
};

// Function UDKGame.UI_KillCount.AddKillCountFromWaveEntries
struct UUI_KillCount_AddKillCountFromWaveEntries_Params
{
};

// Function UDKGame.UI_KillCount.SetKillCountRemaining
struct UUI_KillCount_SetKillCountRemaining_Params
{
};

// Function UDKGame.UI_KillCount.SetTotalKillCount
struct UUI_KillCount_SetTotalKillCount_Params
{
};

// Function UDKGame.UI_KillCount.SceneActivated
struct UUI_KillCount_SceneActivated_Params
{
};

// Function UDKGame.UI_KillCount.ReplicateToNewPlayerController
struct UUI_KillCount_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.UI_KillCount.ExecReplicatedUIMessage
struct UUI_KillCount_ExecReplicatedUIMessage_Params
{
};

// Function UDKGame.DunDefEnemyController.GetAttackDamage
struct ADunDefEnemyController_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefEnemyController.WithinFollowRange
struct ADunDefEnemyController_WithinFollowRange_Params
{
};

// Function UDKGame.DunDefEnemyController.WithinRangeOfMovementPoint
struct ADunDefEnemyController_WithinRangeOfMovementPoint_Params
{
};

// Function UDKGame.DunDefEnemyController.GeneratePathToPoint
struct ADunDefEnemyController_GeneratePathToPoint_Params
{
};

// Function UDKGame.DunDefEnemyController.NavPointReachable
struct ADunDefEnemyController_NavPointReachable_Params
{
};

// Function UDKGame.DunDefEnemyController.GetNearestWalkablePointFromPoint
struct ADunDefEnemyController_GetNearestWalkablePointFromPoint_Params
{
};

// Function UDKGame.DunDefEnemyController.TestPathLength
struct ADunDefEnemyController_TestPathLength_Params
{
};

// Function UDKGame.DunDefEnemyController.FindTargetWithinRange
struct ADunDefEnemyController_FindTargetWithinRange_Params
{
};

// Function UDKGame.DunDefEnemyController.IsWithinTargetableRange
struct ADunDefEnemyController_IsWithinTargetableRange_Params
{
};

// Function UDKGame.DunDefEnemyController.IsWithinReturnPointRange
struct ADunDefEnemyController_IsWithinReturnPointRange_Params
{
};

// Function UDKGame.DunDefEnemyController.IsCommandState
struct ADunDefEnemyController_IsCommandState_Params
{
};

// Function UDKGame.DunDefEnemyController.SetMaxFollowRange
struct ADunDefEnemyController_SetMaxFollowRange_Params
{
};

// Function UDKGame.DunDefEnemyController.ForceAttackTarget
struct ADunDefEnemyController_ForceAttackTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.SetDesiredMovementLocation
struct ADunDefEnemyController_SetDesiredMovementLocation_Params
{
};

// Function UDKGame.DunDefEnemyController.SetFollowTarget
struct ADunDefEnemyController_SetFollowTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.GetReturnPoint
struct ADunDefEnemyController_GetReturnPoint_Params
{
};

// Function UDKGame.DunDefEnemyController.SetReturnPoint
struct ADunDefEnemyController_SetReturnPoint_Params
{
};

// Function UDKGame.DunDefEnemyController.SetTargetableRange
struct ADunDefEnemyController_SetTargetableRange_Params
{
};

// Function UDKGame.DunDefEnemyController.GetTargetableRange
struct ADunDefEnemyController_GetTargetableRange_Params
{
};

// Function UDKGame.DunDefEnemyController.SetIdleEnemy
struct ADunDefEnemyController_SetIdleEnemy_Params
{
};

// Function UDKGame.DunDefEnemyController.CheckValidPathNodeID
struct ADunDefEnemyController_CheckValidPathNodeID_Params
{
};

// Function UDKGame.DunDefEnemyController.GetTargetingTeam
struct ADunDefEnemyController_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefEnemyController.CanChooseUntargetableTarget
struct ADunDefEnemyController_CanChooseUntargetableTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.EnableDarkness
struct ADunDefEnemyController_EnableDarkness_Params
{
};

// Function UDKGame.DunDefEnemyController.GetAttackInterval
struct ADunDefEnemyController_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefEnemyController.GetSpreadValue
struct ADunDefEnemyController_GetSpreadValue_Params
{
};

// Function UDKGame.DunDefEnemyController.GeneratePathToActor
struct ADunDefEnemyController_GeneratePathToActor_Params
{
};

// Function UDKGame.DunDefEnemyController.GetWalkablePoint
struct ADunDefEnemyController_GetWalkablePoint_Params
{
};

// Function UDKGame.DunDefEnemyController.NavActorReachable
struct ADunDefEnemyController_NavActorReachable_Params
{
};

// Function UDKGame.DunDefEnemyController.InitNavigationHandle
struct ADunDefEnemyController_InitNavigationHandle_Params
{
};

// Function UDKGame.DunDefEnemyController.NotifyTakeHitEX
struct ADunDefEnemyController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefEnemyController.DoAttack
struct ADunDefEnemyController_DoAttack_Params
{
};

// Function UDKGame.DunDefEnemyController.WantsHurtAnimation
struct ADunDefEnemyController_WantsHurtAnimation_Params
{
};

// Function UDKGame.DunDefEnemyController.Cough
struct ADunDefEnemyController_Cough_Params
{
};

// Function UDKGame.DunDefEnemyController.StuckNotification
struct ADunDefEnemyController_StuckNotification_Params
{
};

// Function UDKGame.DunDefEnemyController.CheckForCustomAttacks
struct ADunDefEnemyController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefEnemyController.ObstructionJump
struct ADunDefEnemyController_ObstructionJump_Params
{
};

// Function UDKGame.DunDefEnemyController.CancelMoveAround
struct ADunDefEnemyController_CancelMoveAround_Params
{
};

// Function UDKGame.DunDefEnemyController.TryOtherBlockadeDirection
struct ADunDefEnemyController_TryOtherBlockadeDirection_Params
{
};

// Function UDKGame.DunDefEnemyController.MoveAroundBlockade
struct ADunDefEnemyController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefEnemyController.BumpedATarget
struct ADunDefEnemyController_BumpedATarget_Params
{
};

// Function UDKGame.DunDefEnemyController.CheckMoveAroundBlockadePoint
struct ADunDefEnemyController_CheckMoveAroundBlockadePoint_Params
{
};

// Function UDKGame.DunDefEnemyController.CancelCurrentTarget
struct ADunDefEnemyController_CancelCurrentTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.CheckDirectReachability
struct ADunDefEnemyController_CheckDirectReachability_Params
{
};

// Function UDKGame.DunDefEnemyController.CheckIndirectReachability
struct ADunDefEnemyController_CheckIndirectReachability_Params
{
};

// Function UDKGame.DunDefEnemyController.IsWithinAttackRange
struct ADunDefEnemyController_IsWithinAttackRange_Params
{
};

// Function UDKGame.DunDefEnemyController.IsWithinLineOfSight
struct ADunDefEnemyController_IsWithinLineOfSight_Params
{
};

// Function UDKGame.DunDefEnemyController.PawnDied
struct ADunDefEnemyController_PawnDied_Params
{
};

// Function UDKGame.DunDefEnemyController.SetTarget
struct ADunDefEnemyController_SetTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.GetATarget
struct ADunDefEnemyController_GetATarget_Params
{
};

// Function UDKGame.DunDefEnemyController.Destroyed
struct ADunDefEnemyController_Destroyed_Params
{
};

// Function UDKGame.DunDefEnemyController.GetReachCheckDuration
struct ADunDefEnemyController_GetReachCheckDuration_Params
{
};

// Function UDKGame.DunDefEnemyController.IsValidTarget
struct ADunDefEnemyController_IsValidTarget_Params
{
};

// Function UDKGame.DunDefEnemyController.AddActorTargetingMultiplier
struct ADunDefEnemyController_AddActorTargetingMultiplier_Params
{
};

// Function UDKGame.DunDefEnemyController.IsWithinTargetingPreventionVolume
struct ADunDefEnemyController_IsWithinTargetingPreventionVolume_Params
{
};

// Function UDKGame.DunDefEnemyController.AddToAggro
struct ADunDefEnemyController_AddToAggro_Params
{
};

// Function UDKGame.DunDefEnemyController.UpdateAggro
struct ADunDefEnemyController_UpdateAggro_Params
{
};

// Function UDKGame.DunDefEnemyController.GetToolTipAttackRange
struct ADunDefEnemyController_GetToolTipAttackRange_Params
{
};

// Function UDKGame.DunDefEnemyController.GetAttackRange
struct ADunDefEnemyController_GetAttackRange_Params
{
};

// Function UDKGame.DunDefEnemyController.AllowMovingAroundPawn
struct ADunDefEnemyController_AllowMovingAroundPawn_Params
{
};

// Function UDKGame.DunDefEnemyController.IgnoreDamageByClass
struct ADunDefEnemyController_IgnoreDamageByClass_Params
{
};

// Function UDKGame.DunDefEnemyController.DrawMyHUD
struct ADunDefEnemyController_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefEnemyController.GetGlobalSpreadValue
struct ADunDefEnemyController_GetGlobalSpreadValue_Params
{
};

// Function UDKGame.DunDefEnemyController.PostSpawnTargetingTeam
struct ADunDefEnemyController_PostSpawnTargetingTeam_Params
{
};

// Function UDKGame.DunDefEnemyController.Possess
struct ADunDefEnemyController_Possess_Params
{
};

// Function UDKGame.DunDefEnemyController.PostBeginPlay
struct ADunDefEnemyController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefEnemyController.InitialMoveTimeOut
struct ADunDefEnemyController_InitialMoveTimeOut_Params
{
};

// Function UDKGame.DunDefEnemyController.OnlyDrawHUDForOwner
struct ADunDefEnemyController_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDef_SeqAct_FinishedWaveScaling.Activated
struct UDunDef_SeqAct_FinishedWaveScaling_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GameLogicInt.Activated
struct UDunDef_SeqAct_GameLogicInt_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GameOver.Activated
struct UDunDef_SeqAct_GameOver_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GameplayMovie.Update
struct UDunDef_SeqAct_GameplayMovie_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetCampaignLevelObject.Activated
struct UDunDef_SeqAct_GetCampaignLevelObject_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetGameInfo.Activated
struct UDunDef_SeqAct_GetGameInfo_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetGameSettings.Activated
struct UDunDef_SeqAct_GetGameSettings_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetMissionSwitchValue.Activated
struct UDunDef_SeqAct_GetMissionSwitchValue_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetNumItemBoxItems.Activated
struct UDunDef_SeqAct_GetNumItemBoxItems_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetRandomInt.Activated
struct UDunDef_SeqAct_GetRandomInt_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetStartWave.Activated
struct UDunDef_SeqAct_GetStartWave_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetTouchingActors.Activated
struct UDunDef_SeqAct_GetTouchingActors_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GetWaveCompletionPercent.Activated
struct UDunDef_SeqAct_GetWaveCompletionPercent_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.GiveEquipment
struct UDunDef_SeqAct_GiveEquipmentToPlayers_GiveEquipment_Params
{
};

// Function UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.Activated
struct UDunDef_SeqAct_GiveEquipmentToPlayers_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GlobalHUDMessage.Activated
struct UDunDef_SeqAct_GlobalHUDMessage_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_GotoURL.Activated
struct UDunDef_SeqAct_GotoURL_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_HasPendingInvite.Activated
struct UDunDef_SeqAct_HasPendingInvite_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_KeyboardConsoleCommand.ShowUIKeyboard
struct UDunDef_SeqAct_KeyboardConsoleCommand_ShowUIKeyboard_Params
{
};

// Function UDKGame.DunDef_SeqAct_KeyboardConsoleCommand.KeyboardInputDone
struct UDunDef_SeqAct_KeyboardConsoleCommand_KeyboardInputDone_Params
{
};

// Function UDKGame.DunDef_SeqAct_KeyboardConsoleCommand.Update
struct UDunDef_SeqAct_KeyboardConsoleCommand_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_KeyboardConsoleCommand.Activated
struct UDunDef_SeqAct_KeyboardConsoleCommand_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_KillAllEnemies.Activated
struct UDunDef_SeqAct_KillAllEnemies_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_LevelVictory.Activated
struct UDunDef_SeqAct_LevelVictory_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_LoadLevel.Activated
struct UDunDef_SeqAct_LoadLevel_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_LockContent.Activated
struct UDunDef_SeqAct_LockContent_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenBuildUI.BuildTimerFinished
struct UDunDef_SeqAct_OpenBuildUI_BuildTimerFinished_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenBuildUI.Update
struct UDunDef_SeqAct_OpenBuildUI_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenBuildUI.Reset
struct UDunDef_SeqAct_OpenBuildUI_Reset_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenBuildUI.Activated
struct UDunDef_SeqAct_OpenBuildUI_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenKillCountUI.AllKilled
struct UDunDef_SeqAct_OpenKillCountUI_AllKilled_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenKillCountUI.Update
struct UDunDef_SeqAct_OpenKillCountUI_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenKillCountUI.Reset
struct UDunDef_SeqAct_OpenKillCountUI_Reset_Params
{
};

// Function UDKGame.DunDef_SeqAct_OpenKillCountUI.Activated
struct UDunDef_SeqAct_OpenKillCountUI_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_PauseGame.Activated
struct UDunDef_SeqAct_PauseGame_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_PlayerCountSwitch.Activated
struct UDunDef_SeqAct_PlayerCountSwitch_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_RateLimiter.Activated
struct UDunDef_SeqAct_RateLimiter_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_RefreshWaveEntries.Activated
struct UDunDef_SeqAct_RefreshWaveEntries_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_RegisterEnemyWaveEntry.Activated
struct UDunDef_SeqAct_RegisterEnemyWaveEntry_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Update
struct UDunDef_SeqAct_ResetEnemyWaveEntries_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_ResetEnemyWaveEntries.Activated
struct UDunDef_SeqAct_ResetEnemyWaveEntries_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_RessurectPlayers.Activated
struct UDunDef_SeqAct_RessurectPlayers_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SaveHeroes.Activated
struct UDunDef_SeqAct_SaveHeroes_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ScaleEnemyWave.Activated
struct UDunDef_SeqAct_ScaleEnemyWave_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ScaleEnemyWave.GetTotalWaveTime
struct UDunDef_SeqAct_ScaleEnemyWave_GetTotalWaveTime_Params
{
};

// Function UDKGame.DunDef_SeqAct_ScaleFloatForPlayerCount.Activated
struct UDunDef_SeqAct_ScaleFloatForPlayerCount_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ScaleIntForPlayerCount.Activated
struct UDunDef_SeqAct_ScaleIntForPlayerCount_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetActorCollision.Activated
struct UDunDef_SeqAct_SetActorCollision_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetAllowPlayerSpawns.Activated
struct UDunDef_SeqAct_SetAllowPlayerSpawns_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetCheckboxWithLabelValue.Activated
struct UDunDef_SeqAct_SetCheckboxWithLabelValue_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetCombatPhase.Activated
struct UDunDef_SeqAct_SetCombatPhase_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetCursorPosition.Activated
struct UDunDef_SeqAct_SetCursorPosition_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetDifficulty.Activated
struct UDunDef_SeqAct_SetDifficulty_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetDTDamageMultiplier.Activated
struct UDunDef_SeqAct_SetDTDamageMultiplier_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetFinalWaveNumber.Activated
struct UDunDef_SeqAct_SetFinalWaveNumber_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetHidden.Activated
struct UDunDef_SeqAct_SetHidden_Activated_Params
{
};

// Function UDKGame.ReplicatedInterpActor.PostBeginPlay
struct AReplicatedInterpActor_PostBeginPlay_Params
{
};

// Function UDKGame.ReplicatedInterpActor.ReplicatedEvent
struct AReplicatedInterpActor_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetHiddenEnemyIcons.Activated
struct UDunDef_SeqAct_SetHiddenEnemyIcons_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetKeyBinding.Activated
struct UDunDef_SeqAct_SetKeyBinding_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetMaxFramerate.Activated
struct UDunDef_SeqAct_SetMaxFramerate_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetMaximumNumberOfEnemies.Activated
struct UDunDef_SeqAct_SetMaximumNumberOfEnemies_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetMissionObjectiveText.Activated
struct UDunDef_SeqAct_SetMissionObjectiveText_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetMixEnemies.Activated
struct UDunDef_SeqAct_SetMixEnemies_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated
struct UDunDef_SeqAct_SetNightmareUnlocked_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetProjectileDistanceLimit.Activated
struct UDunDef_SeqAct_SetProjectileDistanceLimit_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetSkeletalMesh.Activated
struct UDunDef_SeqAct_SetSkeletalMesh_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetSpeedyBuild.Activated
struct UDunDef_SeqAct_SetSpeedyBuild_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetTowerUnits.Activated
struct UDunDef_SeqAct_SetTowerUnits_Activated_Params
{
};

// Function UDKGame.UI_MainMenu.UIPostRender
struct UUI_MainMenu_UIPostRender_Params
{
};

// Function UDKGame.UI_MainMenu.HideLogos
struct UUI_MainMenu_HideLogos_Params
{
};

// Function UDKGame.UI_MainMenu.SceneDeactivated
struct UUI_MainMenu_SceneDeactivated_Params
{
};

// Function UDKGame.UI_MainMenu.PlayDunDefUIAnim
struct UUI_MainMenu_PlayDunDefUIAnim_Params
{
};

// Function UDKGame.UI_MainMenu.NotifyOnlineServiceStatusChanged
struct UUI_MainMenu_NotifyOnlineServiceStatusChanged_Params
{
};

// Function UDKGame.UI_MainMenu.NotifyLinkStatusChanged
struct UUI_MainMenu_NotifyLinkStatusChanged_Params
{
};

// Function UDKGame.UI_MainMenu.NotifyLoginStatusChanged
struct UUI_MainMenu_NotifyLoginStatusChanged_Params
{
};

// Function UDKGame.UI_MainMenu.OnReceivedInputAxis
struct UUI_MainMenu_OnReceivedInputAxis_Params
{
};

// Function UDKGame.UI_MainMenu.Update
struct UUI_MainMenu_Update_Params
{
};

// Function UDKGame.UI_MainMenu.OnReceivedInputKey
struct UUI_MainMenu_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_MainMenu.UnlockFullGame
struct UUI_MainMenu_UnlockFullGame_Params
{
};

// Function UDKGame.UI_MainMenu.LiveSignInValidation
struct UUI_MainMenu_LiveSignInValidation_Params
{
};

// Function UDKGame.UI_MainMenu.OpenOptions
struct UUI_MainMenu_OpenOptions_Params
{
};

// Function UDKGame.UI_MainMenu.PlayGame
struct UUI_MainMenu_PlayGame_Params
{
};

// Function UDKGame.UI_MainMenu.UpdateNetworkButtonState
struct UUI_MainMenu_UpdateNetworkButtonState_Params
{
};

// Function UDKGame.UI_MainMenu.SceneActivated
struct UUI_MainMenu_SceneActivated_Params
{
};

// Function UDKGame.UI_MainMenu.SetLastControl
struct UUI_MainMenu_SetLastControl_Params
{
};

// Function UDKGame.UI_MainMenu.RefocusLastControl
struct UUI_MainMenu_RefocusLastControl_Params
{
};

// Function UDKGame.DunDefToolTipInterface.GetToolTipPriority
struct UDunDefToolTipInterface_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefToolTipInterface.TakesToolTipPriority
struct UDunDefToolTipInterface_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefToolTipInterface.ContinueDrawingToolTip
struct UDunDefToolTipInterface_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefToolTipInterface.DrawToolTip
struct UDunDefToolTipInterface_DrawToolTip_Params
{
};

// Function UDKGame.TradeManager.ClampItemBoxInfo
struct ATradeManager_ClampItemBoxInfo_Params
{
};

// Function UDKGame.TradeManager.GetFinalTradeConfirmation
struct ATradeManager_GetFinalTradeConfirmation_Params
{
};

// Function UDKGame.TradeManager.GetTradeConfirmation
struct ATradeManager_GetTradeConfirmation_Params
{
};

// Function UDKGame.TradeManager.IsPlayerInTrade
struct ATradeManager_IsPlayerInTrade_Params
{
};

// Function UDKGame.TradeManager.AllowAddingMoreEquipments
struct ATradeManager_AllowAddingMoreEquipments_Params
{
};

// Function UDKGame.TradeManager.ExecReplicatedFunction
struct ATradeManager_ExecReplicatedFunction_Params
{
};

// Function UDKGame.TradeManager.CancelTrade
struct ATradeManager_CancelTrade_Params
{
};

// Function UDKGame.TradeManager.InitializeDD
struct ATradeManager_InitializeDD_Params
{
};

// Function UDKGame.TradeManager.CloseTradeScenes
struct ATradeManager_CloseTradeScenes_Params
{
};

// Function UDKGame.TradeManager.Destroyed
struct ATradeManager_Destroyed_Params
{
};

// Function UDKGame.TradeManager.SetTradeConfirmation
struct ATradeManager_SetTradeConfirmation_Params
{
};

// Function UDKGame.TradeManager.RefreshTradeUI
struct ATradeManager_RefreshTradeUI_Params
{
};

// Function UDKGame.TradeManager.SetTradeMana
struct ATradeManager_SetTradeMana_Params
{
};

// Function UDKGame.TradeManager.GetConfirmation
struct ATradeManager_GetConfirmation_Params
{
};

// Function UDKGame.TradeManager.GetTradeMana
struct ATradeManager_GetTradeMana_Params
{
};

// Function UDKGame.TradeManager.GetTraderIndex
struct ATradeManager_GetTraderIndex_Params
{
};

// Function UDKGame.TradeManager.TradeSceneClosed
struct ATradeManager_TradeSceneClosed_Params
{
};

// Function UDKGame.TradeManager.ShowTradeUI
struct ATradeManager_ShowTradeUI_Params
{
};

// Function UDKGame.TradeManager.IsInTrade
struct ATradeManager_IsInTrade_Params
{
};

// Function UDKGame.TradeManager.LocalAddHeroEquipment
struct ATradeManager_LocalAddHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.LocalRemoveHeroEquipment
struct ATradeManager_LocalRemoveHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.LocalUpdateHeroEquipment
struct ATradeManager_LocalUpdateHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.UpdateLocalTradingInfo
struct ATradeManager_UpdateLocalTradingInfo_Params
{
};

// Function UDKGame.TradeManager.PostBeginPlay
struct ATradeManager_PostBeginPlay_Params
{
};

// Function UDKGame.TradeManager.GetOtherTrader
struct ATradeManager_GetOtherTrader_Params
{
};

// Function UDKGame.TradeManager.RemoveLocalTradeItems
struct ATradeManager_RemoveLocalTradeItems_Params
{
};

// Function UDKGame.TradeManager.LocalFinalConfirmTrade
struct ATradeManager_LocalFinalConfirmTrade_Params
{
};

// Function UDKGame.TradeManager.ExecuteTrade
struct ATradeManager_ExecuteTrade_Params
{
};

// Function UDKGame.TradeManager.AcknowledgeFinalTradeConfirmation
struct ATradeManager_AcknowledgeFinalTradeConfirmation_Params
{
};

// Function UDKGame.TradeManager.SendFinalTradeConfirmation
struct ATradeManager_SendFinalTradeConfirmation_Params
{
};

// Function UDKGame.TradeManager.Tick
struct ATradeManager_Tick_Params
{
};

// Function UDKGame.TradeManager.UpdateHeroEquipment
struct ATradeManager_UpdateHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.RemoveHeroEquipment
struct ATradeManager_RemoveHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.AddHeroEquipment
struct ATradeManager_AddHeroEquipment_Params
{
};

// Function UDKGame.TradeManager.IsEquipmentIDInTrade
struct ATradeManager_IsEquipmentIDInTrade_Params
{
};

// Function UDKGame.TradeManager.GetTradeEquipmentIndex
struct ATradeManager_GetTradeEquipmentIndex_Params
{
};

// Function UDKGame.TradeManager.ReplicatedEvent
struct ATradeManager_ReplicatedEvent_Params
{
};

// Function UDKGame.TradeManager.ResetTradeConfirmations
struct ATradeManager_ResetTradeConfirmations_Params
{
};

// Function UDKGame.TradeManager.GetDataListEntries
struct ATradeManager_GetDataListEntries_Params
{
};

// Function UDKGame.UI_HeroSelection.ShowCharacterSelectionCreateHero
struct UUI_HeroSelection_ShowCharacterSelectionCreateHero_Params
{
};

// Function UDKGame.UI_HeroSelection.Update
struct UUI_HeroSelection_Update_Params
{
};

// Function UDKGame.UI_HeroSelection.OnReceivedInputKey
struct UUI_HeroSelection_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_HeroSelection.SelectHeroNumber
struct UUI_HeroSelection_SelectHeroNumber_Params
{
};

// Function UDKGame.UI_HeroSelection.DeleteSelectedHero
struct UUI_HeroSelection_DeleteSelectedHero_Params
{
};

// Function UDKGame.UI_HeroSelection.HandleConfirmation
struct UUI_HeroSelection_HandleConfirmation_Params
{
};

// Function UDKGame.UI_HeroSelection.InstantChooseHero
struct UUI_HeroSelection_InstantChooseHero_Params
{
};

// Function UDKGame.UI_HeroSelection.RefreshedList
struct UUI_HeroSelection_RefreshedList_Params
{
};

// Function UDKGame.UI_HeroSelection.RefreshHeroList
struct UUI_HeroSelection_RefreshHeroList_Params
{
};

// Function UDKGame.UI_HeroSelection.PrepareToRefreshHeroList
struct UUI_HeroSelection_PrepareToRefreshHeroList_Params
{
};

// Function UDKGame.UI_HeroSelection.EditCurrentHero
struct UUI_HeroSelection_EditCurrentHero_Params
{
};

// Function UDKGame.UI_HeroSelection.NotifyWidgetClicked
struct UUI_HeroSelection_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_HeroSelection.HeroEntrySelected
struct UUI_HeroSelection_HeroEntrySelected_Params
{
};

// Function UDKGame.UI_HeroSelection.PostInitialSceneUpdate
struct UUI_HeroSelection_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_HeroSelection.SceneActivated
struct UUI_HeroSelection_SceneActivated_Params
{
};

// Function UDKGame.UI_HeroSelection.GetHeroManager
struct UUI_HeroSelection_GetHeroManager_Params
{
};

// Function UDKGame.DunDefActivatableInterface.GetActivationOffset
struct UDunDefActivatableInterface_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefActivatableInterface.GetActivationWeighting
struct UDunDefActivatableInterface_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefActivatableInterface.Client_Activate
struct UDunDefActivatableInterface_Client_Activate_Params
{
};

// Function UDKGame.DunDefActivatableInterface.Server_Activate
struct UDunDefActivatableInterface_Server_Activate_Params
{
};

// Function UDKGame.DunDefActivatableInterface.AllowActivation
struct UDunDefActivatableInterface_AllowActivation_Params
{
};

// Function UDKGame.HeroEquipmentManualReplicationInterface.ClientProcessEquipmentManualReplication
struct UHeroEquipmentManualReplicationInterface_ClientProcessEquipmentManualReplication_Params
{
};

// Function UDKGame.DunDefManualReplicationInterface.ReplicateToNewPlayerController
struct UDunDefManualReplicationInterface_ReplicateToNewPlayerController_Params
{
};

// Function UDKGame.UI_Spectating.CloseWithAnimation
struct UUI_Spectating_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_Spectating.NotifyGameOver
struct UUI_Spectating_NotifyGameOver_Params
{
};

// Function UDKGame.UI_Spectating.ToggleSpectatorLabel
struct UUI_Spectating_ToggleSpectatorLabel_Params
{
};

// Function UDKGame.UI_Spectating.ToggleWaitLabel
struct UUI_Spectating_ToggleWaitLabel_Params
{
};

// Function UDKGame.UI_Spectating.SetSpectatee
struct UUI_Spectating_SetSpectatee_Params
{
};

// Function UDKGame.DunDefBoss.TakeDamage
struct ADunDefBoss_TakeDamage_Params
{
};

// Function UDKGame.DunDefBoss.CheckForEncroachers
struct ADunDefBoss_CheckForEncroachers_Params
{
};

// Function UDKGame.DunDefBoss.Tick
struct ADunDefBoss_Tick_Params
{
};

// Function UDKGame.DunDefBoss.ForceFriendlyFire
struct ADunDefBoss_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefBoss.Landed
struct ADunDefBoss_Landed_Params
{
};

// Function UDKGame.DunDefBoss.EnableDarkness
struct ADunDefBoss_EnableDarkness_Params
{
};

// Function UDKGame.DunDefBoss.PlayJumpAnimation
struct ADunDefBoss_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefBoss.EnemyExpired
struct ADunDefBoss_EnemyExpired_Params
{
};

// Function UDKGame.DunDefBoss.ForceSkelUpdating
struct ADunDefBoss_ForceSkelUpdating_Params
{
};

// Function UDKGame.DunDefBoss.DrawMiniMapIcon
struct ADunDefBoss_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefBoss.HandleMomentum
struct ADunDefBoss_HandleMomentum_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.ClientSingleSetMovement
struct ADunDefTower_GasTrap_ClientSingleSetMovement_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.ForceSingleMove
struct ADunDefTower_GasTrap_ForceSingleMove_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.InitTowerRatingMaterial
struct ADunDefTower_GasTrap_InitTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.UpdateTowerRatingMaterial
struct ADunDefTower_GasTrap_UpdateTowerRatingMaterial_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.SetRadiusScale
struct ADunDefTower_GasTrap_SetRadiusScale_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.CheckOverlappedTouchingDetonation
struct ADunDefTower_GasTrap_CheckOverlappedTouchingDetonation_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.Destroyed
struct ADunDefTower_GasTrap_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_GasTrap.PostBeginPlay
struct ADunDefTower_GasTrap_PostBeginPlay_Params
{
};

// Function UDKGame.UI_DLCSplash.NotifyWidgetClicked
struct UUI_DLCSplash_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_DLCSplash.RefreshDLC
struct UUI_DLCSplash_RefreshDLC_Params
{
};

// Function UDKGame.UI_DLCSplash.Update
struct UUI_DLCSplash_Update_Params
{
};

// Function UDKGame.UI_DLCSplash.PostInitialSceneUpdate
struct UUI_DLCSplash_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowNotification.GetLocalizedStringSeqVar
struct UDunDef_SeqAct_ShowNotification_GetLocalizedStringSeqVar_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowNotification.Activated
struct UDunDef_SeqAct_ShowNotification_Activated_Params
{
};

// Function UDKGame.DunDefTwoWayRPCInterface.ServerExecCommand
struct UDunDefTwoWayRPCInterface_ServerExecCommand_Params
{
};

// Function UDKGame.DunDefTwoWayRPCInterface.ClientExecCommand
struct UDunDefTwoWayRPCInterface_ClientExecCommand_Params
{
};

// Function UDKGame.DunDef_SeqEvent_SkipToWave.Activated
struct UDunDef_SeqEvent_SkipToWave_Activated_Params
{
};

// Function UDKGame.DunDef_SeqEvent_PlayerLeft.Activated
struct UDunDef_SeqEvent_PlayerLeft_Activated_Params
{
};

// Function UDKGame.DunDef_SeqEvent_PlayerJoined.Activated
struct UDunDef_SeqEvent_PlayerJoined_Activated_Params
{
};

// Function UDKGame.DunDefOgre.UseMaxSimultaneousAllowedForPlayers
struct ADunDefOgre_UseMaxSimultaneousAllowedForPlayers_Params
{
};

// Function UDKGame.DunDefOgre.EnemyExpired
struct ADunDefOgre_EnemyExpired_Params
{
};

// Function UDKGame.DunDefOgre.AddVelocity
struct ADunDefOgre_AddVelocity_Params
{
};

// Function UDKGame.DunDefOgre.HandleMomentum
struct ADunDefOgre_HandleMomentum_Params
{
};

// Function UDKGame.DunDefOgre.Landed
struct ADunDefOgre_Landed_Params
{
};

// Function UDKGame.DunDefOgre.Destroyed
struct ADunDefOgre_Destroyed_Params
{
};

// Function UDKGame.DunDefOgre.DrawMiniMapIcon
struct ADunDefOgre_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefOgre.GetHealthBarMIC
struct ADunDefOgre_GetHealthBarMIC_Params
{
};

// Function UDKGame.DunDefOgre.HealDamage
struct ADunDefOgre_HealDamage_Params
{
};

// Function UDKGame.DunDefOgre.DrawMyHUD
struct ADunDefOgre_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefOgre.OnlyDrawHUDForOwner
struct ADunDefOgre_OnlyDrawHUDForOwner_Params
{
};

// Function UDKGame.DunDefOgre.PoisonAttackShoot
struct ADunDefOgre_PoisonAttackShoot_Params
{
};

// Function UDKGame.DunDefOgre.PoisonAttackBegin
struct ADunDefOgre_PoisonAttackBegin_Params
{
};

// Function UDKGame.DunDefOgre.PostBeginPlay
struct ADunDefOgre_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefOgre.GetProjectileSpawnTransformation
struct ADunDefOgre_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefOgre.IsCurrentlyPlayingAttackAnimation
struct ADunDefOgre_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayAttackAnimation
struct ADunDefOgre_PlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayShootPoisonAnimation
struct ADunDefOgre_PlayShootPoisonAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayPoundAnimation
struct ADunDefOgre_PlayPoundAnimation_Params
{
};

// Function UDKGame.DunDefOgre.IsCurrentlyPlayingHurtAnimation
struct ADunDefOgre_IsCurrentlyPlayingHurtAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayMajorHurtAnimation
struct ADunDefOgre_PlayMajorHurtAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayHurtAnimation
struct ADunDefOgre_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefOgre.PlayJumpAnimation
struct ADunDefOgre_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefOgre.GetAMeleeSwingLocation
struct ADunDefOgre_GetAMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefOgre.PoundedTheGround
struct ADunDefOgre_PoundedTheGround_Params
{
};

// Function UDKGame.DunDefOgre.MeleeSwingEnd
struct ADunDefOgre_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefOgre.MeleeSwingStart
struct ADunDefOgre_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefOgre.ExecReplicatedFunction
struct ADunDefOgre_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefOgre.AllowTrapSpringing
struct ADunDefOgre_AllowTrapSpringing_Params
{
};

// Function UDKGame.DunDefOgre.ForceFriendlyFire
struct ADunDefOgre_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefHeroOverrideList.GetHeroOverride
struct UDunDefHeroOverrideList_GetHeroOverride_Params
{
};

// Function UDKGame.GameInfo_PureStrategy.AdjustPawnDamage
struct AGameInfo_PureStrategy_AdjustPawnDamage_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetTutorialFlag.Activated
struct UDunDef_SeqAct_SetTutorialFlag_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetTutorialMode.Activated
struct UDunDef_SeqAct_SetTutorialMode_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetWaterDetail.Activated
struct UDunDef_SeqAct_SetWaterDetail_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetWaveBillboardSpawnPoints.Activated
struct UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetWaveEntries.Activated
struct UDunDef_SeqAct_SetWaveEntries_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SetWaveNumber.Activated
struct UDunDef_SeqAct_SetWaveNumber_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowBossHealthBar.Activated
struct UDunDef_SeqAct_ShowBossHealthBar_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowGlobalUIScene.Activated
struct UDunDef_SeqAct_ShowGlobalUIScene_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowLoginUI.Activated
struct UDunDef_SeqAct_ShowLoginUI_Activated_Params
{
};

// Function UDKGame.UI_GameSpyLogin.IsGamepadOwned
struct UUI_GameSpyLogin_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_GameSpyLogin.IsKeyboardOwned
struct UUI_GameSpyLogin_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_GameSpyLogin.ConvertKeyNameToSymbol
struct UUI_GameSpyLogin_ConvertKeyNameToSymbol_Params
{
};

// Function UDKGame.UI_GameSpyLogin.OnInterceptedInputKey
struct UUI_GameSpyLogin_OnInterceptedInputKey_Params
{
};

// Function UDKGame.UI_GameSpyLogin.SceneDeactivated
struct UUI_GameSpyLogin_SceneDeactivated_Params
{
};

// Function UDKGame.UI_GameSpyLogin.SceneActivated
struct UUI_GameSpyLogin_SceneActivated_Params
{
};

// Function UDKGame.UI_GameSpyLogin.PostInitialize
struct UUI_GameSpyLogin_PostInitialize_Params
{
};

// Function UDKGame.UI_GameSpyLogin.Initialized
struct UUI_GameSpyLogin_Initialized_Params
{
};

// Function UDKGame.UI_GameSpyLogin.NotifyWidgetClicked
struct UUI_GameSpyLogin_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_GameSpyLogin.LoginCancelled
struct UUI_GameSpyLogin_LoginCancelled_Params
{
};

// Function UDKGame.UI_GameSpyLogin.Update
struct UUI_GameSpyLogin_Update_Params
{
};

// Function UDKGame.UI_GameSpyLogin.OnLoginStatusChange
struct UUI_GameSpyLogin_OnLoginStatusChange_Params
{
};

// Function UDKGame.UI_GameSpyLogin.SaveLogin
struct UUI_GameSpyLogin_SaveLogin_Params
{
};

// Function UDKGame.UI_GameSpyLogin.OnLoginChanged
struct UUI_GameSpyLogin_OnLoginChanged_Params
{
};

// Function UDKGame.UI_GameSpyLogin.ClearLoginSuccessMsg
struct UUI_GameSpyLogin_ClearLoginSuccessMsg_Params
{
};

// Function UDKGame.UI_GameSpyLogin.OnLoginFailed
struct UUI_GameSpyLogin_OnLoginFailed_Params
{
};

// Function UDKGame.UI_GameSpyLogin.ValidateUserPass
struct UUI_GameSpyLogin_ValidateUserPass_Params
{
};

// Function UDKGame.UI_GameSpyLogin.HasChr
struct UUI_GameSpyLogin_HasChr_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowTitleScreen.Activated
struct UDunDef_SeqAct_ShowTitleScreen_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ShowUIScene.Activated
struct UDunDef_SeqAct_ShowUIScene_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_SplitTBRTimer.Activated
struct UDunDef_SeqAct_SplitTBRTimer_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_StartTBRTimer.Activated
struct UDunDef_SeqAct_StartTBRTimer_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ToggleBossMode.Activated
struct UDunDef_SeqAct_ToggleBossMode_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_ToggleDemonElectricPylon.Activated
struct UDunDef_SeqAct_ToggleDemonElectricPylon_Activated_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.DrawMiniMapIcon
struct ADunDefDemonElectricPylon_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.DrawMyHUD
struct ADunDefDemonElectricPylon_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.SetTargetable
struct ADunDefDemonElectricPylon_SetTargetable_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.SetCharged
struct ADunDefDemonElectricPylon_SetCharged_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.CheckCharges
struct ADunDefDemonElectricPylon_CheckCharges_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.Destroyed
struct ADunDefDemonElectricPylon_Destroyed_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.PostBeginPlay
struct ADunDefDemonElectricPylon_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.EnableTargeting
struct ADunDefDemonElectricPylon_EnableTargeting_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.Decharge
struct ADunDefDemonElectricPylon_Decharge_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.IgnoreFriendlyFireDamage
struct ADunDefDemonElectricPylon_IgnoreFriendlyFireDamage_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.TakeDamage
struct ADunDefDemonElectricPylon_TakeDamage_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.Died
struct ADunDefDemonElectricPylon_Died_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.DTGetEnemyTargetingDesirability
struct ADunDefDemonElectricPylon_DTGetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.DTGetTowerTargetingDesirability
struct ADunDefDemonElectricPylon_DTGetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.DTGetPlayerTargetingDesirability
struct ADunDefDemonElectricPylon_DTGetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.GetTargetingTeam
struct ADunDefDemonElectricPylon_GetTargetingTeam_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.ReplicatedEvent
struct ADunDefDemonElectricPylon_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefDemonElectricPylon.AllowActivation
struct ADunDefDemonElectricPylon_AllowActivation_Params
{
};

// Function UDKGame.DunDef_SeqAct_ToggleEmitter.DoWork
struct UDunDef_SeqAct_ToggleEmitter_DoWork_Params
{
};

// Function UDKGame.DunDef_SeqAct_ToggleEmitter.Activated
struct UDunDef_SeqAct_ToggleEmitter_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_TogglePostProcessEffects.Update
struct UDunDef_SeqAct_TogglePostProcessEffects_Update_Params
{
};

// Function UDKGame.DunDef_SeqAct_TogglePostProcessEffects.UpdateEffects
struct UDunDef_SeqAct_TogglePostProcessEffects_UpdateEffects_Params
{
};

// Function UDKGame.DunDef_SeqAct_TogglePostProcessEffects.AddEffectToList
struct UDunDef_SeqAct_TogglePostProcessEffects_AddEffectToList_Params
{
};

// Function UDKGame.DunDef_SeqAct_TogglePostProcessEffects.MakeMaterialEffectConstantUnique
struct UDunDef_SeqAct_TogglePostProcessEffects_MakeMaterialEffectConstantUnique_Params
{
};

// Function UDKGame.DunDef_SeqAct_TogglePostProcessEffects.EnableEffect
struct UDunDef_SeqAct_TogglePostProcessEffects_EnableEffect_Params
{
};

// Function UDKGame.DunDef_SeqAct_UnlockAchievement.Activated
struct UDunDef_SeqAct_UnlockAchievement_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_UnlockCostumes.GiveCostume
struct UDunDef_SeqAct_UnlockCostumes_GiveCostume_Params
{
};

// Function UDKGame.DunDef_SeqAct_UnlockCostumes.Activated
struct UDunDef_SeqAct_UnlockCostumes_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_UnlockMission.Activated
struct UDunDef_SeqAct_UnlockMission_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_UnlockRestrictedDifficultyMission.Activated
struct UDunDef_SeqAct_UnlockRestrictedDifficultyMission_Activated_Params
{
};

// Function UDKGame.DunDef_SeqAct_UpgradeTowers.Activated
struct UDunDef_SeqAct_UpgradeTowers_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_CustomMetaFlag.Activated
struct UDunDef_SeqCond_CustomMetaFlag_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_DifficultySwitch.Activated
struct UDunDef_SeqCond_DifficultySwitch_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_GetGraphicsQuality.Activated
struct UDunDef_SeqCond_GetGraphicsQuality_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_GetMultiplayerMode.Activated
struct UDunDef_SeqCond_GetMultiplayerMode_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_GetPlatform.Activated
struct UDunDef_SeqCond_GetPlatform_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IntSwitch.Activated
struct UDunDef_SeqCond_IntSwitch_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IntSwitchMega.Activated
struct UDunDef_SeqCond_IntSwitchMega_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated
struct UDunDef_SeqCond_IsAchievementUnlocked_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsCostumeUnlocked.Activated
struct UDunDef_SeqCond_IsCostumeUnlocked_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsDemoMode.Activated
struct UDunDef_SeqCond_IsDemoMode_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsDLCInstalled.Activated
struct UDunDef_SeqCond_IsDLCInstalled_Activated_Params
{
};

// Function UDKGame.DunDefDLCSummary.HasLevelEntry
struct UDunDefDLCSummary_HasLevelEntry_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsGameOver.Activated
struct UDunDef_SeqCond_IsGameOver_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsHardcore.Activated
struct UDunDef_SeqCond_IsHardcore_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsHeroTemplate.Activated
struct UDunDef_SeqCond_IsHeroTemplate_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsInCombatPhase.Activated
struct UDunDef_SeqCond_IsInCombatPhase_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsInVolume.Activated
struct UDunDef_SeqCond_IsInVolume_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsLocalPlayer.Activated
struct UDunDef_SeqCond_IsLocalPlayer_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsMissionUnlocked.Activated
struct UDunDef_SeqCond_IsMissionUnlocked_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsOfClass.Activated
struct UDunDef_SeqCond_IsOfClass_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsPlayerUsingGamepad.Activated
struct UDunDef_SeqCond_IsPlayerUsingGamepad_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsPureStrategy.Activated
struct UDunDef_SeqCond_IsPureStrategy_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsSceneOpen.Activated
struct UDunDef_SeqCond_IsSceneOpen_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsStandaloneGame.Activated
struct UDunDef_SeqCond_IsStandaloneGame_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_IsStereoscopic3D.Activated
struct UDunDef_SeqCond_IsStereoscopic3D_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_ShowTutorial.Activated
struct UDunDef_SeqCond_ShowTutorial_Activated_Params
{
};

// Function UDKGame.DunDef_SeqCond_SignedIn.Activated
struct UDunDef_SeqCond_SignedIn_Activated_Params
{
};

// Function UDKGame.DunDef_SeqEvent_DifficultyChanged.Activated
struct UDunDef_SeqEvent_DifficultyChanged_Activated_Params
{
};

// Function UDKGame.DunDef_SeqEvent_OptionsChanged.Activated
struct UDunDef_SeqEvent_OptionsChanged_Activated_Params
{
};

// Function UDKGame.DunDef_SeqEvent_SkipBossTimer.Activated
struct UDunDef_SeqEvent_SkipBossTimer_Activated_Params
{
};

// Function UDKGame.DunDef_TickableAnimNodeInterface.Tick
struct UDunDef_TickableAnimNodeInterface_Tick_Params
{
};

// Function UDKGame.DunDef_UIAction_CheckAllPlayersLoggedIn.Activated
struct UDunDef_UIAction_CheckAllPlayersLoggedIn_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_CheckAllPlayersLoggedIn.AcceptedSaveWarning
struct UDunDef_UIAction_CheckAllPlayersLoggedIn_AcceptedSaveWarning_Params
{
};

// Function UDKGame.DunDef_UIAction_CloseSceneWithAnimation.Activated
struct UDunDef_UIAction_CloseSceneWithAnimation_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_GotoURL.Activated
struct UDunDef_UIAction_GotoURL_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_LoadLevel.Activated
struct UDunDef_UIAction_LoadLevel_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_PlayAnimation.Activated
struct UDunDef_UIAction_PlayAnimation_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_PlayMusic.Activated
struct UDunDef_UIAction_PlayMusic_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_PlaySound.Activated
struct UDunDef_UIAction_PlaySound_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_SetDunDefUICustomValue.Activated
struct UDunDef_UIAction_SetDunDefUICustomValue_Activated_Params
{
};

// Function UDKGame.DunDef_UIAction_UnlockAchievement.Activated
struct UDunDef_UIAction_UnlockAchievement_Activated_Params
{
};

// Function UDKGame.DunDef_UICond_DunDefUIValue.Activated
struct UDunDef_UICond_DunDefUIValue_Activated_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.GetToolTipPriority
struct ADunDefAchievementTrophy_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.TakesToolTipPriority
struct ADunDefAchievementTrophy_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.GetActivationOffset
struct ADunDefAchievementTrophy_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.GetActivationWeighting
struct ADunDefAchievementTrophy_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.ShowAchievementInfo
struct ADunDefAchievementTrophy_ShowAchievementInfo_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.Client_Activate
struct ADunDefAchievementTrophy_Client_Activate_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.Server_Activate
struct ADunDefAchievementTrophy_Server_Activate_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.AllowActivation
struct ADunDefAchievementTrophy_AllowActivation_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.ContinueDrawingToolTip
struct ADunDefAchievementTrophy_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.DrawToolTip
struct ADunDefAchievementTrophy_DrawToolTip_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.SetAchievementUnlocked
struct ADunDefAchievementTrophy_SetAchievementUnlocked_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.Destroyed
struct ADunDefAchievementTrophy_Destroyed_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.PostBeginPlay
struct ADunDefAchievementTrophy_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.UpdateMaterialIcon
struct ADunDefAchievementTrophy_UpdateMaterialIcon_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.UpdateAchievementBinding
struct ADunDefAchievementTrophy_UpdateAchievementBinding_Params
{
};

// Function UDKGame.DunDefAchievementTrophy.ReplicatedEvent
struct ADunDefAchievementTrophy_ReplicatedEvent_Params
{
};

// Function UDKGame.PawnBoosterInterface.GetBoostedTargets
struct UPawnBoosterInterface_GetBoostedTargets_Params
{
};

// Function UDKGame.PawnBoosterInterface.NotifyOfBoostedRemoval
struct UPawnBoosterInterface_NotifyOfBoostedRemoval_Params
{
};

// Function UDKGame.PawnBoosterInterface.GetPawnBoostAmount
struct UPawnBoosterInterface_GetPawnBoostAmount_Params
{
};

// Function UDKGame.PawnBoosterInterface.HasPawnBoostingType
struct UPawnBoosterInterface_HasPawnBoostingType_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.UsesRange
struct ADunDefTower_ChainLightning_UsesRange_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetDamageType
struct ADunDefTower_ChainLightning_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.DrawTowerToolTipStats
struct ADunDefTower_ChainLightning_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetMaxChainTargets
struct ADunDefTower_ChainLightning_GetMaxChainTargets_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.StaticGetAttackRange
struct ADunDefTower_ChainLightning_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetRateDivisor
struct ADunDefTower_ChainLightning_GetRateDivisor_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetAttackDamage
struct ADunDefTower_ChainLightning_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetMaxChainLength
struct ADunDefTower_ChainLightning_GetMaxChainLength_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetAttackRange
struct ADunDefTower_ChainLightning_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetAttackDuration
struct ADunDefTower_ChainLightning_GetAttackDuration_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetMuzzleLocation
struct ADunDefTower_ChainLightning_GetMuzzleLocation_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.GetMuzzleTransformation
struct ADunDefTower_ChainLightning_GetMuzzleTransformation_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.SetTarget
struct ADunDefTower_ChainLightning_SetTarget_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.FindBestTarget
struct ADunDefTower_ChainLightning_FindBestTarget_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.UpdateAI
struct ADunDefTower_ChainLightning_UpdateAI_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.Tick
struct ADunDefTower_ChainLightning_Tick_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.Destroyed
struct ADunDefTower_ChainLightning_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.PostBeginPlay
struct ADunDefTower_ChainLightning_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_ChainLightning.ReplicatedEvent
struct ADunDefTower_ChainLightning_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportHeroSwapped
struct UDunDefBuffEffectInterface_ReportHeroSwapped_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.AdjustTargetDamage
struct UDunDefBuffEffectInterface_AdjustTargetDamage_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportBuffRemoved
struct UDunDefBuffEffectInterface_ReportBuffRemoved_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportBuffAdded
struct UDunDefBuffEffectInterface_ReportBuffAdded_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.TriggerEvent
struct UDunDefBuffEffectInterface_TriggerEvent_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportOwnerDeath
struct UDunDefBuffEffectInterface_ReportOwnerDeath_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportOwnerJumped
struct UDunDefBuffEffectInterface_ReportOwnerJumped_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportHealedActor
struct UDunDefBuffEffectInterface_ReportHealedActor_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportKilledActor
struct UDunDefBuffEffectInterface_ReportKilledActor_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportHealed
struct UDunDefBuffEffectInterface_ReportHealed_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportTookDamage
struct UDunDefBuffEffectInterface_ReportTookDamage_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.ReportActorDealtDamage
struct UDunDefBuffEffectInterface_ReportActorDealtDamage_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.AdjustDealtDamage
struct UDunDefBuffEffectInterface_AdjustDealtDamage_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.GetStatValue
struct UDunDefBuffEffectInterface_GetStatValue_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.GetBuffIcon
struct UDunDefBuffEffectInterface_GetBuffIcon_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.GetBuffDescription
struct UDunDefBuffEffectInterface_GetBuffDescription_Params
{
};

// Function UDKGame.DunDefBuffEffectInterface.GetBuffName
struct UDunDefBuffEffectInterface_GetBuffName_Params
{
};

// Function UDKGame.DunDefBuffInterface.AdjustDealtDamage
struct UDunDefBuffInterface_AdjustDealtDamage_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportBuffRemoved
struct UDunDefBuffInterface_ReportBuffRemoved_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportBuffAdded
struct UDunDefBuffInterface_ReportBuffAdded_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportActorDealtDamage
struct UDunDefBuffInterface_ReportActorDealtDamage_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportTookDamage
struct UDunDefBuffInterface_ReportTookDamage_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportHealedActor
struct UDunDefBuffInterface_ReportHealedActor_Params
{
};

// Function UDKGame.DunDefBuffInterface.ReportKilledActor
struct UDunDefBuffInterface_ReportKilledActor_Params
{
};

// Function UDKGame.DunDefBuffInterface.GetLocation
struct UDunDefBuffInterface_GetLocation_Params
{
};

// Function UDKGame.DunDefBuffInterface.GetHealth
struct UDunDefBuffInterface_GetHealth_Params
{
};

// Function UDKGame.DunDefBuffInterface.OnBuffRemoved
struct UDunDefBuffInterface_OnBuffRemoved_Params
{
};

// Function UDKGame.DunDefBuffInterface.OnBuffAdded
struct UDunDefBuffInterface_OnBuffAdded_Params
{
};

// Function UDKGame.DunDefInventoryManager.DestroyAllWeapons
struct ADunDefInventoryManager_DestroyAllWeapons_Params
{
};

// Function UDKGame.DunDefInventoryManager.ClientWeaponSet
struct ADunDefInventoryManager_ClientWeaponSet_Params
{
};

// Function UDKGame.DunDefInventoryManager.TearOffInventory
struct ADunDefInventoryManager_TearOffInventory_Params
{
};

// Function UDKGame.DunDefInventoryManager.CreateInventoryFromTemplate
struct ADunDefInventoryManager_CreateInventoryFromTemplate_Params
{
};

// Function UDKGame.DunDefInventoryManager.OwnerDied
struct ADunDefInventoryManager_OwnerDied_Params
{
};

// Function UDKGame.DunDefManaItemInterface.GetManaPower
struct UDunDefManaItemInterface_GetManaPower_Params
{
};

// Function UDKGame.DunDefManaItemInterface.Collected
struct UDunDefManaItemInterface_Collected_Params
{
};

// Function UDKGame.DunDefMiniMapIconInterface.DrawMiniMapIcon
struct UDunDefMiniMapIconInterface_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefPracticeDummy.ReportPercentage
struct ADunDefPracticeDummy_ReportPercentage_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetBoostAmount
struct ADunDefPracticeDummy_GetBoostAmount_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetPawnDeBooster
struct ADunDefPracticeDummy_GetPawnDeBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.RemovePawnDeBooster
struct ADunDefPracticeDummy_RemovePawnDeBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.AddPawnDeBooster
struct ADunDefPracticeDummy_AddPawnDeBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetPawnBooster
struct ADunDefPracticeDummy_GetPawnBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.RemoveAllPawnBoosters
struct ADunDefPracticeDummy_RemoveAllPawnBoosters_Params
{
};

// Function UDKGame.DunDefPracticeDummy.RemovePawnBooster
struct ADunDefPracticeDummy_RemovePawnBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.AddPawnBooster
struct ADunDefPracticeDummy_AddPawnBooster_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetEnemyTargetingDesirability
struct ADunDefPracticeDummy_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetTowerTargetingDesirability
struct ADunDefPracticeDummy_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefPracticeDummy.GetToolTipText
struct ADunDefPracticeDummy_GetToolTipText_Params
{
};

// Function UDKGame.DunDefPracticeDummy.Destroyed
struct ADunDefPracticeDummy_Destroyed_Params
{
};

// Function UDKGame.DunDefPracticeDummy.PostBeginPlay
struct ADunDefPracticeDummy_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPracticeDummy.PlayHitAnim
struct ADunDefPracticeDummy_PlayHitAnim_Params
{
};

// Function UDKGame.DunDefPracticeDummy.AdjustDamage
struct ADunDefPracticeDummy_AdjustDamage_Params
{
};

// Function UDKGame.DunDefPracticeDummy.StartTimer
struct ADunDefPracticeDummy_StartTimer_Params
{
};

// Function UDKGame.DunDefPracticeDummy.NotifyTookDamage
struct ADunDefPracticeDummy_NotifyTookDamage_Params
{
};

// Function UDKGame.DunDefPracticeDummy.SubtractHealth
struct ADunDefPracticeDummy_SubtractHealth_Params
{
};

// Function UDKGame.DunDefPracticeDummy.DPSEnd
struct ADunDefPracticeDummy_DPSEnd_Params
{
};

// Function UDKGame.DunDefPracticeDummy.ExecReplicatedFunction
struct ADunDefPracticeDummy_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPracticeDummy.AllowActivation
struct ADunDefPracticeDummy_AllowActivation_Params
{
};

// Function UDKGame.IStatusEffectHandler.HasStatusEffect
struct UIStatusEffectHandler_HasStatusEffect_Params
{
};

// Function UDKGame.IStatusEffectHandler.RemoveStatusEffect
struct UIStatusEffectHandler_RemoveStatusEffect_Params
{
};

// Function UDKGame.IStatusEffectHandler.AddStatusEffect
struct UIStatusEffectHandler_AddStatusEffect_Params
{
};

// Function UDKGame.DunDefCagedPet.Tick
struct ADunDefCagedPet_Tick_Params
{
};

// Function UDKGame.DunDefCagedPet.UpdateMesh
struct ADunDefCagedPet_UpdateMesh_Params
{
};

// Function UDKGame.DunDefCagedPet.PostBeginPlay
struct ADunDefCagedPet_PostBeginPlay_Params
{
};

// Function UDKGame.UI_PlayerStats.IsKeyboardOwned
struct UUI_PlayerStats_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_PlayerStats.UnhideLeaderboardTab
struct UUI_PlayerStats_UnhideLeaderboardTab_Params
{
};

// Function UDKGame.UI_PlayerStats.HideLeaderboardTab
struct UUI_PlayerStats_HideLeaderboardTab_Params
{
};

// Function UDKGame.UI_PlayerStats.NotifyLoginStatusChanged
struct UUI_PlayerStats_NotifyLoginStatusChanged_Params
{
};

// Function UDKGame.UI_PlayerStats.NotifyLinkStatusChanged
struct UUI_PlayerStats_NotifyLinkStatusChanged_Params
{
};

// Function UDKGame.UI_PlayerStats.NotifyOnlineServiceStatusChanged
struct UUI_PlayerStats_NotifyOnlineServiceStatusChanged_Params
{
};

// Function UDKGame.UI_PlayerStats.CheckLoginForLeaderboard
struct UUI_PlayerStats_CheckLoginForLeaderboard_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderPopup
struct UUI_PlayerStats_RenderPopup_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderCompletionIcons
struct UUI_PlayerStats_RenderCompletionIcons_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderAchievements
struct UUI_PlayerStats_RenderAchievements_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderTreasureStats
struct UUI_PlayerStats_RenderTreasureStats_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderEnemyStats
struct UUI_PlayerStats_RenderEnemyStats_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderTowerStats
struct UUI_PlayerStats_RenderTowerStats_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderKillStats
struct UUI_PlayerStats_RenderKillStats_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderSingleLine
struct UUI_PlayerStats_RenderSingleLine_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderBestOfStat
struct UUI_PlayerStats_RenderBestOfStat_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderViewedEndings
struct UUI_PlayerStats_RenderViewedEndings_Params
{
};

// Function UDKGame.UI_PlayerStats.BuildBestOfString
struct UUI_PlayerStats_BuildBestOfString_Params
{
};

// Function UDKGame.UI_PlayerStats.CycleMode
struct UUI_PlayerStats_CycleMode_Params
{
};

// Function UDKGame.UI_PlayerStats.CycleDifficulty
struct UUI_PlayerStats_CycleDifficulty_Params
{
};

// Function UDKGame.UI_PlayerStats.AnyDifficultiesEnabled
struct UUI_PlayerStats_AnyDifficultiesEnabled_Params
{
};

// Function UDKGame.UI_PlayerStats.Cycle
struct UUI_PlayerStats_Cycle_Params
{
};

// Function UDKGame.UI_PlayerStats.OnInterceptedInputKey
struct UUI_PlayerStats_OnInterceptedInputKey_Params
{
};

// Function UDKGame.UI_PlayerStats.OnReceivedInputKey
struct UUI_PlayerStats_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_PlayerStats.Update
struct UUI_PlayerStats_Update_Params
{
};

// Function UDKGame.UI_PlayerStats.NotifyWidgetClicked
struct UUI_PlayerStats_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_PlayerStats.GetNextStat
struct UUI_PlayerStats_GetNextStat_Params
{
};

// Function UDKGame.UI_PlayerStats.SetupLeaderboardDifficulty
struct UUI_PlayerStats_SetupLeaderboardDifficulty_Params
{
};

// Function UDKGame.UI_PlayerStats.GetDifficulty
struct UUI_PlayerStats_GetDifficulty_Params
{
};

// Function UDKGame.UI_PlayerStats.RefreshStats
struct UUI_PlayerStats_RefreshStats_Params
{
};

// Function UDKGame.UI_PlayerStats.RenderAwards
struct UUI_PlayerStats_RenderAwards_Params
{
};

// Function UDKGame.UI_PlayerStats.AppendAwardString
struct UUI_PlayerStats_AppendAwardString_Params
{
};

// Function UDKGame.UI_PlayerStats.SetHostMode
struct UUI_PlayerStats_SetHostMode_Params
{
};

// Function UDKGame.UI_PlayerStats.SetCampaignTag
struct UUI_PlayerStats_SetCampaignTag_Params
{
};

// Function UDKGame.UI_PlayerStats.EnableAllButtons
struct UUI_PlayerStats_EnableAllButtons_Params
{
};

// Function UDKGame.UI_PlayerStats.SceneDeactivated
struct UUI_PlayerStats_SceneDeactivated_Params
{
};

// Function UDKGame.UI_PlayerStats.LevelSelected
struct UUI_PlayerStats_LevelSelected_Params
{
};

// Function UDKGame.UI_PlayerStats.SelectAButton
struct UUI_PlayerStats_SelectAButton_Params
{
};

// Function UDKGame.UI_PlayerStats.SceneActivated
struct UUI_PlayerStats_SceneActivated_Params
{
};

// Function UDKGame.UI_PlayerStats.SetStatReadIndex
struct UUI_PlayerStats_SetStatReadIndex_Params
{
};

// Function UDKGame.UI_PlayerStats.CheckSetupUI
struct UUI_PlayerStats_CheckSetupUI_Params
{
};

// Function UDKGame.UI_PlayerStats.AddEnemyStats
struct UUI_PlayerStats_AddEnemyStats_Params
{
};

// Function UDKGame.UI_PlayerStats.AddTowerStats
struct UUI_PlayerStats_AddTowerStats_Params
{
};

// Function UDKGame.UI_PlayerStats.Preprocess
struct UUI_PlayerStats_Preprocess_Params
{
};

// Function UDKGame.UI_PlayerStats.PostInitialSceneUpdate
struct UUI_PlayerStats_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_PlayerStats.PostInitialize
struct UUI_PlayerStats_PostInitialize_Params
{
};

// Function UDKGame.UI_PlayerStats.Initialized
struct UUI_PlayerStats_Initialized_Params
{
};

// Function UDKGame.DunDefTowerPreventOrAllowInterface.AllowTowerAtPoint
struct UDunDefTowerPreventOrAllowInterface_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerPreventOrAllowInterface.CheckAllowance
struct UDunDefTowerPreventOrAllowInterface_CheckAllowance_Params
{
};

// Function UDKGame.DunDefTowerPreventOrAllowInterface.PreventTowerAtPoint
struct UDunDefTowerPreventOrAllowInterface_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefDarkElf.GetProjectileSpawnTransformation
struct ADunDefDarkElf_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefDarkElf.EndedAttack
struct ADunDefDarkElf_EndedAttack_Params
{
};

// Function UDKGame.DunDefDarkElf.MeleeSwingEnd
struct ADunDefDarkElf_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefDarkElf.MeleeSwingStart
struct ADunDefDarkElf_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefDarkElfController.GetAttackDamage
struct ADunDefDarkElfController_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefDarkElfController.GetAttackRange
struct ADunDefDarkElfController_GetAttackRange_Params
{
};

// Function UDKGame.DunDefDarkElfController.GetAttackInterval
struct ADunDefDarkElfController_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefDarkElfController.FireProjectile
struct ADunDefDarkElfController_FireProjectile_Params
{
};

// Function UDKGame.DunDefEnemyTargetingPreventionInterface.PreventTargeting
struct UDunDefEnemyTargetingPreventionInterface_PreventTargeting_Params
{
};

// Function UDKGame.DunDefTower_Blockade.PlayElementalStealingEffect
struct ADunDefTower_Blockade_PlayElementalStealingEffect_Params
{
};

// Function UDKGame.DunDefTower_Blockade.NotifyTookDamage
struct ADunDefTower_Blockade_NotifyTookDamage_Params
{
};

// Function UDKGame.DunDefTower_Blockade.Bump
struct ADunDefTower_Blockade_Bump_Params
{
};

// Function UDKGame.DunDefTower_Blockade.ExecReplicatedFunction
struct ADunDefTower_Blockade_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDarkElfMage.UpdateDifficultyMaterial
struct ADunDefDarkElfMage_UpdateDifficultyMaterial_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlayDying
struct ADunDefDarkElfMage_PlayDying_Params
{
};

// Function UDKGame.DunDefDarkElfMage.Destroyed
struct ADunDefDarkElfMage_Destroyed_Params
{
};

// Function UDKGame.DunDefDarkElfMage.Died
struct ADunDefDarkElfMage_Died_Params
{
};

// Function UDKGame.DunDefDarkElfMage.FireProjectile
struct ADunDefDarkElfMage_FireProjectile_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlayingSpawnAnim
struct ADunDefDarkElfMage_PlayingSpawnAnim_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlayingHealingAnim
struct ADunDefDarkElfMage_PlayingHealingAnim_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlaySpawnAnim
struct ADunDefDarkElfMage_PlaySpawnAnim_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlayHealingAnim
struct ADunDefDarkElfMage_PlayHealingAnim_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PostBeginPlay
struct ADunDefDarkElfMage_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDarkElfMage.PlayHealEffect
struct ADunDefDarkElfMage_PlayHealEffect_Params
{
};

// Function UDKGame.DunDefDarkElfMage.ExecReplicatedFunction
struct ADunDefDarkElfMage_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.CheckForCustomAttacks
struct ADunDefDarkElfMageController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.GetPawnHealthMultiplier
struct ADunDefDarkElfMageController_GetPawnHealthMultiplier_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.GetHealingRadius
struct ADunDefDarkElfMageController_GetHealingRadius_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.DefaultStateCheck
struct ADunDefDarkElfMageController_DefaultStateCheck_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.GetHealingAmount
struct ADunDefDarkElfMageController_GetHealingAmount_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.GeneratePathToPoint
struct ADunDefDarkElfMageController_GeneratePathToPoint_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.HealCooldown
struct ADunDefDarkElfMageController_HealCooldown_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.SpawnCooldown
struct ADunDefDarkElfMageController_SpawnCooldown_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.NotifySpawnDeath
struct ADunDefDarkElfMageController_NotifySpawnDeath_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.ShouldSpawn
struct ADunDefDarkElfMageController_ShouldSpawn_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.TimedDecideWhatToDo
struct ADunDefDarkElfMageController_TimedDecideWhatToDo_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.CheckForDeadSpawns
struct ADunDefDarkElfMageController_CheckForDeadSpawns_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.DecideWhatToDo
struct ADunDefDarkElfMageController_DecideWhatToDo_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.ShouldPanic
struct ADunDefDarkElfMageController_ShouldPanic_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.ShouldDoHeal
struct ADunDefDarkElfMageController_ShouldDoHeal_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.KillSpawns
struct ADunDefDarkElfMageController_KillSpawns_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.InterruptLatent
struct ADunDefDarkElfMageController_InterruptLatent_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.FireProjectile
struct ADunDefDarkElfMageController_FireProjectile_Params
{
};

// Function UDKGame.DunDefDarkElfMageController.PostBeginPlay
struct ADunDefDarkElfMageController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefSkeleton.PlayingResurrectionAnim
struct ADunDefSkeleton_PlayingResurrectionAnim_Params
{
};

// Function UDKGame.DunDefSkeleton.Resurrect
struct ADunDefSkeleton_Resurrect_Params
{
};

// Function UDKGame.DunDefSkeleton.GetEnemyTargetingDesirability
struct ADunDefSkeleton_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefSkeleton.GetTowerTargetingDesirability
struct ADunDefSkeleton_GetTowerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefSkeleton.GetPlayerTargetingDesirability
struct ADunDefSkeleton_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefSkeleton.TakeDamage
struct ADunDefSkeleton_TakeDamage_Params
{
};

// Function UDKGame.DunDefSkeleton.IsCurrentlyPlayingHurtAnimation
struct ADunDefSkeleton_IsCurrentlyPlayingHurtAnimation_Params
{
};

// Function UDKGame.DunDefSkeleton.PlayDying
struct ADunDefSkeleton_PlayDying_Params
{
};

// Function UDKGame.DunDefSkeleton.PlayTempDying
struct ADunDefSkeleton_PlayTempDying_Params
{
};

// Function UDKGame.DunDefSkeleton.Destroyed
struct ADunDefSkeleton_Destroyed_Params
{
};

// Function UDKGame.DunDefSkeleton.Died
struct ADunDefSkeleton_Died_Params
{
};

// Function UDKGame.DunDefSkeleton.GetMeleeSwingBLocation
struct ADunDefSkeleton_GetMeleeSwingBLocation_Params
{
};

// Function UDKGame.DunDefSkeleton.GetMeleeSwingALocation
struct ADunDefSkeleton_GetMeleeSwingALocation_Params
{
};

// Function UDKGame.DunDefSkeleton.EndMeleeSwing
struct ADunDefSkeleton_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefSkeleton.StartMeleeSwing
struct ADunDefSkeleton_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefSkeleton.ReplicatedEvent
struct ADunDefSkeleton_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefSkeleton.CheckLives
struct ADunDefSkeleton_CheckLives_Params
{
};

// Function UDKGame.DunDefSkeleton.PostBeginPlay
struct ADunDefSkeleton_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefSkeleton.GetMiniMapIconColor
struct ADunDefSkeleton_GetMiniMapIconColor_Params
{
};

// Function UDKGame.DunDefSkeleton.SetCreator
struct ADunDefSkeleton_SetCreator_Params
{
};

// Function UDKGame.DunDefSkeleton.StopsProjectile
struct ADunDefSkeleton_StopsProjectile_Params
{
};

// Function UDKGame.DunDefSkeleton.IsDead
struct ADunDefSkeleton_IsDead_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.AllowTrapSpringing
struct ADunDefDarkElfWarrior_AllowTrapSpringing_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.DoCrushed
struct ADunDefDarkElfWarrior_DoCrushed_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.AddVelocity
struct ADunDefDarkElfWarrior_AddVelocity_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PlayHurtAnimation
struct ADunDefDarkElfWarrior_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.WarriorPlayAttackAnimation
struct ADunDefDarkElfWarrior_WarriorPlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.StuckOnPawn
struct ADunDefDarkElfWarrior_StuckOnPawn_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.JumpOffPawn
struct ADunDefDarkElfWarrior_JumpOffPawn_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.GetMeleeSwingBLocation
struct ADunDefDarkElfWarrior_GetMeleeSwingBLocation_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.GetMeleeSwingALocation
struct ADunDefDarkElfWarrior_GetMeleeSwingALocation_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.EndMeleeSwing
struct ADunDefDarkElfWarrior_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.StartMeleeSwing
struct ADunDefDarkElfWarrior_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.EndDash
struct ADunDefDarkElfWarrior_EndDash_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.StartDash
struct ADunDefDarkElfWarrior_StartDash_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.ResetDashingMetrics
struct ADunDefDarkElfWarrior_ResetDashingMetrics_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.SetDashingMetrics
struct ADunDefDarkElfWarrior_SetDashingMetrics_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.DoShockwave
struct ADunDefDarkElfWarrior_DoShockwave_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.Landed
struct ADunDefDarkElfWarrior_Landed_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.StartLeap
struct ADunDefDarkElfWarrior_StartLeap_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.IsPlayingLeapAnim
struct ADunDefDarkElfWarrior_IsPlayingLeapAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PlayLeapAnim
struct ADunDefDarkElfWarrior_PlayLeapAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.IsPlayingDashAnim
struct ADunDefDarkElfWarrior_IsPlayingDashAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PlayDashForwardAnim
struct ADunDefDarkElfWarrior_PlayDashForwardAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PlayDashAttackAnim
struct ADunDefDarkElfWarrior_PlayDashAttackAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PlayDashAnim
struct ADunDefDarkElfWarrior_PlayDashAnim_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.ExecReplicatedFunction
struct ADunDefDarkElfWarrior_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.GetEnemyTargetingDesirability
struct ADunDefDarkElfWarrior_GetEnemyTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDarkElfWarrior.PostBeginPlay
struct ADunDefDarkElfWarrior_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.GetAttackDamage
struct ADunDefDarkElfWarriorController_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.NotifyTakeHitEX
struct ADunDefDarkElfWarriorController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.GetDamageMultiplier
struct ADunDefDarkElfWarriorController_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.StartShockwave
struct ADunDefDarkElfWarriorController_StartShockwave_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.Tick
struct ADunDefDarkElfWarriorController_Tick_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.StartMeleeSwing
struct ADunDefDarkElfWarriorController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.DoMeleeSwingTrace
struct ADunDefDarkElfWarriorController_DoMeleeSwingTrace_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.AddToShockwaveHurtList
struct ADunDefDarkElfWarriorController_AddToShockwaveHurtList_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.AddToSwingHurtList
struct ADunDefDarkElfWarriorController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.EndMeleeSwing
struct ADunDefDarkElfWarriorController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.CheckForCustomAttacks
struct ADunDefDarkElfWarriorController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefDarkElfWarriorController.IsDashing
struct ADunDefDarkElfWarriorController_IsDashing_Params
{
};

// Function UDKGame.DunDefDataStore_GameSettings.Registered
struct UDunDefDataStore_GameSettings_Registered_Params
{
};

// Function UDKGame.DunDefDemon.Landed
struct ADunDefDemon_Landed_Params
{
};

// Function UDKGame.DunDefDemon.AllowTrapSpringing
struct ADunDefDemon_AllowTrapSpringing_Params
{
};

// Function UDKGame.DunDefDemon.PostBeginPlay
struct ADunDefDemon_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDemon.GetProjectileSpawnTransformation
struct ADunDefDemon_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefDemon.IsCurrentlyPlayingAttackAnimation
struct ADunDefDemon_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayRightAttackAnimation
struct ADunDefDemon_PlayRightAttackAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayLeftAttackAnimation
struct ADunDefDemon_PlayLeftAttackAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayFrontAttackAnimation
struct ADunDefDemon_PlayFrontAttackAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayTakeOffAnimation
struct ADunDefDemon_PlayTakeOffAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayLandingAnimation
struct ADunDefDemon_PlayLandingAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayShootFireballAnimation
struct ADunDefDemon_PlayShootFireballAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlaySummonFlameLineAnimation
struct ADunDefDemon_PlaySummonFlameLineAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayPoundAnimation
struct ADunDefDemon_PlayPoundAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayShockedLandingAnimation
struct ADunDefDemon_PlayShockedLandingAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayDivingToLandAnimation
struct ADunDefDemon_PlayDivingToLandAnimation_Params
{
};

// Function UDKGame.DunDefDemon.StopShockedAnims
struct ADunDefDemon_StopShockedAnims_Params
{
};

// Function UDKGame.DunDefDemon.PlayShockedInAirAnimation
struct ADunDefDemon_PlayShockedInAirAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayShockedOnGroundAnimation
struct ADunDefDemon_PlayShockedOnGroundAnimation_Params
{
};

// Function UDKGame.DunDefDemon.IsCurrentlyPlayingHurtAnimation
struct ADunDefDemon_IsCurrentlyPlayingHurtAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayMajorHurtAnimation
struct ADunDefDemon_PlayMajorHurtAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayHurtAnimation
struct ADunDefDemon_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefDemon.PlayJumpAnimation
struct ADunDefDemon_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefDemon.GetAMeleeSwingLocation
struct ADunDefDemon_GetAMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefDemon.ShootFireball
struct ADunDefDemon_ShootFireball_Params
{
};

// Function UDKGame.DunDefDemon.StopFlameSummoning
struct ADunDefDemon_StopFlameSummoning_Params
{
};

// Function UDKGame.DunDefDemon.StartFlameSummoning
struct ADunDefDemon_StartFlameSummoning_Params
{
};

// Function UDKGame.DunDefDemon.PoundedTheGround
struct ADunDefDemon_PoundedTheGround_Params
{
};

// Function UDKGame.DunDefDemon.MeleeSwingEnd
struct ADunDefDemon_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefDemon.MeleeSwingStart
struct ADunDefDemon_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefDemon.SetShocked
struct ADunDefDemon_SetShocked_Params
{
};

// Function UDKGame.DunDefDemon.SetDyingPhysics
struct ADunDefDemon_SetDyingPhysics_Params
{
};

// Function UDKGame.DunDefDemon.PlayDying
struct ADunDefDemon_PlayDying_Params
{
};

// Function UDKGame.DunDefDemon.ForceFriendlyFire
struct ADunDefDemon_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefDemon.ExecReplicatedFunction
struct ADunDefDemon_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDemon.ReplicatedEvent
struct ADunDefDemon_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefDemonController.ShootFireball
struct ADunDefDemonController_ShootFireball_Params
{
};

// Function UDKGame.DunDefDemonController.DoProjectileAttack
struct ADunDefDemonController_DoProjectileAttack_Params
{
};

// Function UDKGame.DunDefDemonController.CheckForCustomAttacks
struct ADunDefDemonController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefDemonController.DoAttack
struct ADunDefDemonController_DoAttack_Params
{
};

// Function UDKGame.DunDefDemonController.DoFlight
struct ADunDefDemonController_DoFlight_Params
{
};

// Function UDKGame.DunDefDemonController.NotifyTakeHitEX
struct ADunDefDemonController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefDemonController.PostBeginPlay
struct ADunDefDemonController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDemonController.GetNearestLandNodeToTarget
struct ADunDefDemonController_GetNearestLandNodeToTarget_Params
{
};

// Function UDKGame.DunDefDemonController.GetRandomFlightPoint
struct ADunDefDemonController_GetRandomFlightPoint_Params
{
};

// Function UDKGame.DunDefDemonController.Shock
struct ADunDefDemonController_Shock_Params
{
};

// Function UDKGame.DunDefDemonController.ObstructionJump
struct ADunDefDemonController_ObstructionJump_Params
{
};

// Function UDKGame.DunDefDemonController.CancelCurrentTarget
struct ADunDefDemonController_CancelCurrentTarget_Params
{
};

// Function UDKGame.DunDefDemonController.StopFlameSummoning
struct ADunDefDemonController_StopFlameSummoning_Params
{
};

// Function UDKGame.DunDefDemonController.StartFlameSummoning
struct ADunDefDemonController_StartFlameSummoning_Params
{
};

// Function UDKGame.DunDefDemonController.StartShockwave
struct ADunDefDemonController_StartShockwave_Params
{
};

// Function UDKGame.DunDefDemonController.MoveAroundBlockade
struct ADunDefDemonController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefDemonController.AddToSwingHurtList
struct ADunDefDemonController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefDemonController.EndMeleeSwing
struct ADunDefDemonController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefDemonController.StartMeleeSwing
struct ADunDefDemonController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetInterpolatedTargetingLocation
struct ADunDefDragonBoss_GetInterpolatedTargetingLocation_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetTargetingLocation
struct ADunDefDragonBoss_GetTargetingLocation_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetTargetingLocationOffset
struct ADunDefDragonBoss_GetTargetingLocationOffset_Params
{
};

// Function UDKGame.DunDefDragonBoss.UpdateDifficultyValues
struct ADunDefDragonBoss_UpdateDifficultyValues_Params
{
};

// Function UDKGame.DunDefDragonBoss.Died
struct ADunDefDragonBoss_Died_Params
{
};

// Function UDKGame.DunDefDragonBoss.FellOutOfWorld
struct ADunDefDragonBoss_FellOutOfWorld_Params
{
};

// Function UDKGame.DunDefDragonBoss.SetLookAtTarget
struct ADunDefDragonBoss_SetLookAtTarget_Params
{
};

// Function UDKGame.DunDefDragonBoss.AltNeckPitchOn
struct ADunDefDragonBoss_AltNeckPitchOn_Params
{
};

// Function UDKGame.DunDefDragonBoss.AltNeckPitchOff
struct ADunDefDragonBoss_AltNeckPitchOff_Params
{
};

// Function UDKGame.DunDefDragonBoss.NeckPitchOn
struct ADunDefDragonBoss_NeckPitchOn_Params
{
};

// Function UDKGame.DunDefDragonBoss.NeckPitchOff
struct ADunDefDragonBoss_NeckPitchOff_Params
{
};

// Function UDKGame.DunDefDragonBoss.UpdateInterpolation
struct ADunDefDragonBoss_UpdateInterpolation_Params
{
};

// Function UDKGame.DunDefDragonBoss.StartFaceToFaceInterpolation
struct ADunDefDragonBoss_StartFaceToFaceInterpolation_Params
{
};

// Function UDKGame.DunDefDragonBoss.EndFaceToFace
struct ADunDefDragonBoss_EndFaceToFace_Params
{
};

// Function UDKGame.DunDefDragonBoss.DoFalling
struct ADunDefDragonBoss_DoFalling_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetPlayerTargetingDesirability
struct ADunDefDragonBoss_GetPlayerTargetingDesirability_Params
{
};

// Function UDKGame.DunDefDragonBoss.SetFaceToFaceBlender
struct ADunDefDragonBoss_SetFaceToFaceBlender_Params
{
};

// Function UDKGame.DunDefDragonBoss.SetFallingBlender
struct ADunDefDragonBoss_SetFallingBlender_Params
{
};

// Function UDKGame.DunDefDragonBoss.PostBeginPlay
struct ADunDefDragonBoss_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDragonBoss.UpdateStrafing
struct ADunDefDragonBoss_UpdateStrafing_Params
{
};

// Function UDKGame.DunDefDragonBoss.Tick
struct ADunDefDragonBoss_Tick_Params
{
};

// Function UDKGame.DunDefDragonBoss.SetOnAllOverlappingAuras
struct ADunDefDragonBoss_SetOnAllOverlappingAuras_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetAirSpeed
struct ADunDefDragonBoss_GetAirSpeed_Params
{
};

// Function UDKGame.DunDefDragonBoss.StopStrafing
struct ADunDefDragonBoss_StopStrafing_Params
{
};

// Function UDKGame.DunDefDragonBoss.StartStrafing
struct ADunDefDragonBoss_StartStrafing_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayHurtAnimation
struct ADunDefDragonBoss_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayJumpAnimation
struct ADunDefDragonBoss_PlayJumpAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.ForceFriendlyFire
struct ADunDefDragonBoss_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetFlamethrowerSocketTransformation
struct ADunDefDragonBoss_GetFlamethrowerSocketTransformation_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetAMeleeSwingLocation
struct ADunDefDragonBoss_GetAMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefDragonBoss.FlamethrowerEnd
struct ADunDefDragonBoss_FlamethrowerEnd_Params
{
};

// Function UDKGame.DunDefDragonBoss.FlamethrowerStart
struct ADunDefDragonBoss_FlamethrowerStart_Params
{
};

// Function UDKGame.DunDefDragonBoss.EndMeleeSwing
struct ADunDefDragonBoss_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefDragonBoss.StartMeleeSwing
struct ADunDefDragonBoss_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefDragonBoss.FireProjectile
struct ADunDefDragonBoss_FireProjectile_Params
{
};

// Function UDKGame.DunDefDragonBoss.IsCurrentlyPlayingAttackAnimation
struct ADunDefDragonBoss_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayFlamethrowerAnimation
struct ADunDefDragonBoss_PlayFlamethrowerAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayBitingAnimation
struct ADunDefDragonBoss_PlayBitingAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayLandingLetGoAnimation
struct ADunDefDragonBoss_PlayLandingLetGoAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayLandingFinishAnimation
struct ADunDefDragonBoss_PlayLandingFinishAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.PlayShootingFireballAnimation
struct ADunDefDragonBoss_PlayShootingFireballAnimation_Params
{
};

// Function UDKGame.DunDefDragonBoss.GetProjectileSpawnTransformation
struct ADunDefDragonBoss_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefDragonBoss.ExecReplicatedFunction
struct ADunDefDragonBoss_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDragonBoss.ReplicatedEvent
struct ADunDefDragonBoss_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefDragonBossController.GetANavigationTarget
struct ADunDefDragonBossController_GetANavigationTarget_Params
{
};

// Function UDKGame.DunDefDragonBossController.FindNearestNavPointTo
struct ADunDefDragonBossController_FindNearestNavPointTo_Params
{
};

// Function UDKGame.DunDefDragonBossController.GeneratePathToActor
struct ADunDefDragonBossController_GeneratePathToActor_Params
{
};

// Function UDKGame.DunDefDragonBossController.MoveAroundBlockade
struct ADunDefDragonBossController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefDragonBossController.InitNavigationHandle
struct ADunDefDragonBossController_InitNavigationHandle_Params
{
};

// Function UDKGame.DunDefDragonBossController.NavActorReachable
struct ADunDefDragonBossController_NavActorReachable_Params
{
};

// Function UDKGame.DunDefDragonBossController.NotifyTakeHitEX
struct ADunDefDragonBossController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefDragonBossController.DoHitByHarpoon
struct ADunDefDragonBossController_DoHitByHarpoon_Params
{
};

// Function UDKGame.DunDefDragonBossController.FlamethrowerEnd
struct ADunDefDragonBossController_FlamethrowerEnd_Params
{
};

// Function UDKGame.DunDefDragonBossController.FlamethrowerStart
struct ADunDefDragonBossController_FlamethrowerStart_Params
{
};

// Function UDKGame.DunDefDragonBossController.ShouldDamage
struct ADunDefDragonBossController_ShouldDamage_Params
{
};

// Function UDKGame.DunDefDragonBossController.EndMeleeSwing
struct ADunDefDragonBossController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefDragonBossController.StartMeleeSwing
struct ADunDefDragonBossController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefDragonBossController.ShootFireball
struct ADunDefDragonBossController_ShootFireball_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.DrawMiniMapIcon
struct ADunDefDragonBossBallista_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.GetToolTipPriority
struct ADunDefDragonBossBallista_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.TakesToolTipPriority
struct ADunDefDragonBossBallista_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.DrawToolTip
struct ADunDefDragonBossBallista_DrawToolTip_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.ContinueDrawingToolTip
struct ADunDefDragonBossBallista_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.GetActivationOffset
struct ADunDefDragonBossBallista_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.GetActivationWeighting
struct ADunDefDragonBossBallista_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.Client_Activate
struct ADunDefDragonBossBallista_Client_Activate_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.Server_Activate
struct ADunDefDragonBossBallista_Server_Activate_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.AllowActivation
struct ADunDefDragonBossBallista_AllowActivation_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.ShootProjectile
struct ADunDefDragonBossBallista_ShootProjectile_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.Activated
struct ADunDefDragonBossBallista_Activated_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.UpdatePitchController
struct ADunDefDragonBossBallista_UpdatePitchController_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.Destroyed
struct ADunDefDragonBossBallista_Destroyed_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.PostBeginPlay
struct ADunDefDragonBossBallista_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.ExecReplicatedFunction
struct ADunDefDragonBossBallista_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefDragonBossBallista.ReplicatedEvent
struct ADunDefDragonBossBallista_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefHomingProjectile.Explode
struct ADunDefHomingProjectile_Explode_Params
{
};

// Function UDKGame.DunDefHomingProjectile.ProcessTouch
struct ADunDefHomingProjectile_ProcessTouch_Params
{
};

// Function UDKGame.DunDefHomingProjectile.NotifyStopHoming
struct ADunDefHomingProjectile_NotifyStopHoming_Params
{
};

// Function UDKGame.DunDefHomingProjectile.DoHoming
struct ADunDefHomingProjectile_DoHoming_Params
{
};

// Function UDKGame.DunDefHomingProjectile.Tick
struct ADunDefHomingProjectile_Tick_Params
{
};

// Function UDKGame.DunDefHomingProjectile.ExecReplicatedFunction
struct ADunDefHomingProjectile_ExecReplicatedFunction_Params
{
};

// Function UDKGame.HUDPrefabContainer.DestroyedContainer
struct UHUDPrefabContainer_DestroyedContainer_Params
{
};

// Function UDKGame.HUDPrefabContainer.CreatedContainer
struct UHUDPrefabContainer_CreatedContainer_Params
{
};

// Function UDKGame.HUDPrefabContainer.CancelClose
struct UHUDPrefabContainer_CancelClose_Params
{
};

// Function UDKGame.HUDPrefabContainer.IsClosing
struct UHUDPrefabContainer_IsClosing_Params
{
};

// Function UDKGame.HUDPrefabContainer.Update
struct UHUDPrefabContainer_Update_Params
{
};

// Function UDKGame.HUDPrefabContainer.PlayUIAnimationSound
struct UHUDPrefabContainer_PlayUIAnimationSound_Params
{
};

// Function UDKGame.HUDPrefabContainer.DunDefGetSequenceLength
struct UHUDPrefabContainer_DunDefGetSequenceLength_Params
{
};

// Function UDKGame.HUDPrefabContainer.StopDunDefUIAnim
struct UHUDPrefabContainer_StopDunDefUIAnim_Params
{
};

// Function UDKGame.HUDPrefabContainer.PlayDunDefUIAnim
struct UHUDPrefabContainer_PlayDunDefUIAnim_Params
{
};

// Function UDKGame.HUDPrefabContainer.LoadSequences
struct UHUDPrefabContainer_LoadSequences_Params
{
};

// Function UDKGame.UIOverlayContainer_Equipment.InitializeForOwnedEquipment
struct UUIOverlayContainer_Equipment_InitializeForOwnedEquipment_Params
{
};

// Function UDKGame.UIOverlayContainer_Equipment.InitializeForDroppedEquipment
struct UUIOverlayContainer_Equipment_InitializeForDroppedEquipment_Params
{
};

// Function UDKGame.DunDefEnemyTargetingPreventionVolume.Destroyed
struct ADunDefEnemyTargetingPreventionVolume_Destroyed_Params
{
};

// Function UDKGame.DunDefEnemyTargetingPreventionVolume.PostBeginPlay
struct ADunDefEnemyTargetingPreventionVolume_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefEnemyTargetingPreventionVolume.PreventTargeting
struct ADunDefEnemyTargetingPreventionVolume_PreventTargeting_Params
{
};

// Function UDKGame.DunDefOgreController.GetProjectileDamage
struct ADunDefOgreController_GetProjectileDamage_Params
{
};

// Function UDKGame.DunDefOgreController.GetAttackDamage
struct ADunDefOgreController_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefOgreController.DoProjectileAttack
struct ADunDefOgreController_DoProjectileAttack_Params
{
};

// Function UDKGame.DunDefOgreController.GetProjectileShootInterval
struct ADunDefOgreController_GetProjectileShootInterval_Params
{
};

// Function UDKGame.DunDefOgreController.CheckForCustomAttacks
struct ADunDefOgreController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefOgreController.DoAttack
struct ADunDefOgreController_DoAttack_Params
{
};

// Function UDKGame.DunDefOgreController.NotifyTakeHitEX
struct ADunDefOgreController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefOgreController.PostBeginPlay
struct ADunDefOgreController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefOgreController.FireProjectile
struct ADunDefOgreController_FireProjectile_Params
{
};

// Function UDKGame.DunDefOgreController.StartShockwave
struct ADunDefOgreController_StartShockwave_Params
{
};

// Function UDKGame.DunDefOgreController.MoveAroundBlockade
struct ADunDefOgreController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefOgreController.AddToSwingHurtList
struct ADunDefOgreController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefOgreController.EndMeleeSwing
struct ADunDefOgreController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefOgreController.StartMeleeSwing
struct ADunDefOgreController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefForestGolem.AlternateMeleeSwingEnd
struct ADunDefForestGolem_AlternateMeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefForestGolem.AlternateMeleeSwingStart
struct ADunDefForestGolem_AlternateMeleeSwingStart_Params
{
};

// Function UDKGame.DunDefForestGolem.MeleeSwingEnd
struct ADunDefForestGolem_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefForestGolem.MeleeSwingStart
struct ADunDefForestGolem_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefForestGolemController.CheckForCustomAttacks
struct ADunDefForestGolemController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefForestGolemController.GetProjectileShootInterval
struct ADunDefForestGolemController_GetProjectileShootInterval_Params
{
};

// Function UDKGame.DunDefForestGolemController.DoAttack
struct ADunDefForestGolemController_DoAttack_Params
{
};

// Function UDKGame.DunDefForestGolemController.DoProjectileAttack
struct ADunDefForestGolemController_DoProjectileAttack_Params
{
};

// Function UDKGame.DunDefForestGolemController.GetHighestHealthTarget
struct ADunDefForestGolemController_GetHighestHealthTarget_Params
{
};

// Function UDKGame.DunDefForestGolemController.EndAlternateMeleeSwing
struct ADunDefForestGolemController_EndAlternateMeleeSwing_Params
{
};

// Function UDKGame.DunDefForestGolemController.StartAlternateMeleeSwing
struct ADunDefForestGolemController_StartAlternateMeleeSwing_Params
{
};

// Function UDKGame.DunDefForestGolemController.PostBeginPlay
struct ADunDefForestGolemController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefGoblin.PlayGoblinAttackAnimation
struct ADunDefGoblin_PlayGoblinAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblin.PlayAttackAnimation
struct ADunDefGoblin_PlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblin.GetMeleeSwingLocation
struct ADunDefGoblin_GetMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefGoblin.MeleeSwingEnd
struct ADunDefGoblin_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefGoblin.MeleeSwingStart
struct ADunDefGoblin_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefGoblin.ExecReplicatedFunction
struct ADunDefGoblin_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefGoblinController.GetAttackDamage
struct ADunDefGoblinController_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefGoblinController.AddToSwingHurtList
struct ADunDefGoblinController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefGoblinController.EndMeleeSwing
struct ADunDefGoblinController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefGoblinController.StartMeleeSwing
struct ADunDefGoblinController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefGoblinMech.ForceFriendlyFire
struct ADunDefGoblinMech_ForceFriendlyFire_Params
{
};

// Function UDKGame.DunDefGoblinMech.GetAMeleeSwingLocation
struct ADunDefGoblinMech_GetAMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefGoblinMech.MeleeSwingEnd
struct ADunDefGoblinMech_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefGoblinMech.MeleeSwingStart
struct ADunDefGoblinMech_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayRightAttackAnimation
struct ADunDefGoblinMech_PlayRightAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayLeftAttackAnimation
struct ADunDefGoblinMech_PlayLeftAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayFrontAttackAnimation
struct ADunDefGoblinMech_PlayFrontAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.FireProjectile
struct ADunDefGoblinMech_FireProjectile_Params
{
};

// Function UDKGame.DunDefGoblinMech.IsCurrentlyPlayingAttackAnimation
struct ADunDefGoblinMech_IsCurrentlyPlayingAttackAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayShootRocketsAnimation
struct ADunDefGoblinMech_PlayShootRocketsAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.AddVelocity
struct ADunDefGoblinMech_AddVelocity_Params
{
};

// Function UDKGame.DunDefGoblinMech.HandleMomentum
struct ADunDefGoblinMech_HandleMomentum_Params
{
};

// Function UDKGame.DunDefGoblinMech.SetMovementPhysics
struct ADunDefGoblinMech_SetMovementPhysics_Params
{
};

// Function UDKGame.DunDefGoblinMech.Tick
struct ADunDefGoblinMech_Tick_Params
{
};

// Function UDKGame.DunDefGoblinMech.PostBeginPlay
struct ADunDefGoblinMech_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefGoblinMech.GetAngleDot
struct ADunDefGoblinMech_GetAngleDot_Params
{
};

// Function UDKGame.DunDefGoblinMech.GetUpperBodyRotation
struct ADunDefGoblinMech_GetUpperBodyRotation_Params
{
};

// Function UDKGame.DunDefGoblinMech.IsSuperHurtDamage
struct ADunDefGoblinMech_IsSuperHurtDamage_Params
{
};

// Function UDKGame.DunDefGoblinMech.TakeDamage
struct ADunDefGoblinMech_TakeDamage_Params
{
};

// Function UDKGame.DunDefGoblinMech.AdjustDamage
struct ADunDefGoblinMech_AdjustDamage_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlaySuperHurtEffect
struct ADunDefGoblinMech_PlaySuperHurtEffect_Params
{
};

// Function UDKGame.DunDefGoblinMech.NotifyTakeHit
struct ADunDefGoblinMech_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnExhaustOff
struct ADunDefGoblinMech_TurnExhaustOff_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnExhaustOn
struct ADunDefGoblinMech_TurnExhaustOn_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnLowHealthEffectOff
struct ADunDefGoblinMech_TurnLowHealthEffectOff_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnLowHealthEffectOn
struct ADunDefGoblinMech_TurnLowHealthEffectOn_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnMediumHealthEffectOff
struct ADunDefGoblinMech_TurnMediumHealthEffectOff_Params
{
};

// Function UDKGame.DunDefGoblinMech.TurnMediumHealthEffectOn
struct ADunDefGoblinMech_TurnMediumHealthEffectOn_Params
{
};

// Function UDKGame.DunDefGoblinMech.ExecReplicatedFunction
struct ADunDefGoblinMech_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefGoblinMech.ReplicatedEvent
struct ADunDefGoblinMech_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefGoblinMech.SetDyingPhysics
struct ADunDefGoblinMech_SetDyingPhysics_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayDying
struct ADunDefGoblinMech_PlayDying_Params
{
};

// Function UDKGame.DunDefGoblinMech.IsCurrentlyPlayingHurtAnimation
struct ADunDefGoblinMech_IsCurrentlyPlayingHurtAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMech.PlayMajorHurtAnimation
struct ADunDefGoblinMech_PlayMajorHurtAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMechController.GetAttackInterval
struct ADunDefGoblinMechController_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefGoblinMechController.PostBeginPlay
struct ADunDefGoblinMechController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefGoblinMechController.GetClosestNodeMovementPoint
struct ADunDefGoblinMechController_GetClosestNodeMovementPoint_Params
{
};

// Function UDKGame.DunDefGoblinMechController.MoveAroundBlockade
struct ADunDefGoblinMechController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefGoblinMechController.GetNumRockets
struct ADunDefGoblinMechController_GetNumRockets_Params
{
};

// Function UDKGame.DunDefGoblinMechController.WantsHurtAnimation
struct ADunDefGoblinMechController_WantsHurtAnimation_Params
{
};

// Function UDKGame.DunDefGoblinMechController.NotifyTakeHitEX
struct ADunDefGoblinMechController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefGoblinMechController.Cough
struct ADunDefGoblinMechController_Cough_Params
{
};

// Function UDKGame.DunDefGoblinMechController.FireProjectile
struct ADunDefGoblinMechController_FireProjectile_Params
{
};

// Function UDKGame.DunDefGoblinMechController.DoProjectileAttack
struct ADunDefGoblinMechController_DoProjectileAttack_Params
{
};

// Function UDKGame.DunDefGoblinMechController.CheckForCustomAttacks
struct ADunDefGoblinMechController_CheckForCustomAttacks_Params
{
};

// Function UDKGame.DunDefGoblinMechController.AddToSwingHurtList
struct ADunDefGoblinMechController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefGoblinMechController.EndMeleeSwing
struct ADunDefGoblinMechController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefGoblinMechController.StartMeleeSwing
struct ADunDefGoblinMechController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefGoblinMechController.NotifyTakeHit
struct ADunDefGoblinMechController_NotifyTakeHit_Params
{
};

// Function UDKGame.DunDefGoblinMechController.MovementRefreshTimer
struct ADunDefGoblinMechController_MovementRefreshTimer_Params
{
};

// Function UDKGame.DunDefGRI_PureStrategy.SetInCombatPhase
struct ADunDefGRI_PureStrategy_SetInCombatPhase_Params
{
};

// Function UDKGame.StatObject_Equipment.IsRootEntry
struct UStatObject_Equipment_IsRootEntry_Params
{
};

// Function UDKGame.StatObject_Equipment.GetFolderID
struct UStatObject_Equipment_GetFolderID_Params
{
};

// Function UDKGame.StatObject_Equipment.GetDataProps
struct UStatObject_Equipment_GetDataProps_Params
{
};

// Function UDKGame.StatObject_Equipment.GetDataString
struct UStatObject_Equipment_GetDataString_Params
{
};

// Function UDKGame.StatObject_Equipment.GetEntryEnabled
struct UStatObject_Equipment_GetEntryEnabled_Params
{
};

// Function UDKGame.StatObject_Equipment.StaticIsValidForEquipment
struct UStatObject_Equipment_StaticIsValidForEquipment_Params
{
};

// Function UDKGame.DunDefKobold.AutoKamikaze
struct ADunDefKobold_AutoKamikaze_Params
{
};

// Function UDKGame.DunDefKobold.PostBeginPlay
struct ADunDefKobold_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefKobold.Explode
struct ADunDefKobold_Explode_Params
{
};

// Function UDKGame.DunDefKobold.TakeDamage
struct ADunDefKobold_TakeDamage_Params
{
};

// Function UDKGame.DunDefKobold.StartKamikazeSound
struct ADunDefKobold_StartKamikazeSound_Params
{
};

// Function UDKGame.DunDefKobold.StopLightingFuse
struct ADunDefKobold_StopLightingFuse_Params
{
};

// Function UDKGame.DunDefKobold.PlayDying
struct ADunDefKobold_PlayDying_Params
{
};

// Function UDKGame.DunDefKobold.DoLightFuse
struct ADunDefKobold_DoLightFuse_Params
{
};

// Function UDKGame.DunDefKobold.LightFuse
struct ADunDefKobold_LightFuse_Params
{
};

// Function UDKGame.DunDefKobold.BeginLightingFuse
struct ADunDefKobold_BeginLightingFuse_Params
{
};

// Function UDKGame.DunDefKobold.PlayLightFuseAnimation
struct ADunDefKobold_PlayLightFuseAnimation_Params
{
};

// Function UDKGame.DunDefKobold.ExecReplicatedFunction
struct ADunDefKobold_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefKoboldController.GetKamikazeActivationRangeSq
struct ADunDefKoboldController_GetKamikazeActivationRangeSq_Params
{
};

// Function UDKGame.DunDefKoboldController.Cough
struct ADunDefKoboldController_Cough_Params
{
};

// Function UDKGame.DunDefKoboldController.WantsHurtAnimation
struct ADunDefKoboldController_WantsHurtAnimation_Params
{
};

// Function UDKGame.DunDefKoboldController.StartKamikaze
struct ADunDefKoboldController_StartKamikaze_Params
{
};

// Function UDKGame.DunDefKoboldController.MoveAroundBlockade
struct ADunDefKoboldController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefManaBomb.AllowSpawn
struct ADunDefManaBomb_AllowSpawn_Params
{
};

// Function UDKGame.DunDefManaBomb.HurtRadius
struct ADunDefManaBomb_HurtRadius_Params
{
};

// Function UDKGame.DunDefManaBomb.IgnoreDamageByClass
struct ADunDefManaBomb_IgnoreDamageByClass_Params
{
};

// Function UDKGame.DunDefManaBomb.GetDamageRadius
struct ADunDefManaBomb_GetDamageRadius_Params
{
};

// Function UDKGame.DunDefManaBomb.GetDamage
struct ADunDefManaBomb_GetDamage_Params
{
};

// Function UDKGame.DunDefManaBomb.DoDamage
struct ADunDefManaBomb_DoDamage_Params
{
};

// Function UDKGame.DunDefManaBomb.PostBeginPlay
struct ADunDefManaBomb_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.PlayTalkSound
struct ADunDefNPC_BarKeep_PlayTalkSound_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.PlayBuySound
struct ADunDefNPC_BarKeep_PlayBuySound_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.PlaySellSound
struct ADunDefNPC_BarKeep_PlaySellSound_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.PlayIdleQuipSound
struct ADunDefNPC_BarKeep_PlayIdleQuipSound_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.GetActivationIcon
struct ADunDefNPC_BarKeep_GetActivationIcon_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.GetToolTipPriority
struct ADunDefNPC_BarKeep_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.TakesToolTipPriority
struct ADunDefNPC_BarKeep_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.DrawMiniMapIcon
struct ADunDefNPC_BarKeep_DrawMiniMapIcon_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.DrawToolTip
struct ADunDefNPC_BarKeep_DrawToolTip_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.shouldShowAltActivation
struct ADunDefNPC_BarKeep_shouldShowAltActivation_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.ContinueDrawingToolTip
struct ADunDefNPC_BarKeep_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Tick
struct ADunDefNPC_BarKeep_Tick_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.GetActivationOffset
struct ADunDefNPC_BarKeep_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.GetActivationWeighting
struct ADunDefNPC_BarKeep_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Client_Activate
struct ADunDefNPC_BarKeep_Client_Activate_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Server_Activate
struct ADunDefNPC_BarKeep_Server_Activate_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.AllowActivation
struct ADunDefNPC_BarKeep_AllowActivation_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Destroyed
struct ADunDefNPC_BarKeep_Destroyed_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.PostBeginPlay
struct ADunDefNPC_BarKeep_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Deactivate
struct ADunDefNPC_BarKeep_Deactivate_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.Activate
struct ADunDefNPC_BarKeep_Activate_Params
{
};

// Function UDKGame.DunDefNPC_BarKeep.ReplicatedEvent
struct ADunDefNPC_BarKeep_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefOgreNoDerpController.NotifyTakeHitEX
struct ADunDefOgreNoDerpController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.IsGamepadOwned
struct UUI_NetworkMultiplayer_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.IsKeyboardOwned
struct UUI_NetworkMultiplayer_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.Update
struct UUI_NetworkMultiplayer_Update_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnReceivedInputKey
struct UUI_NetworkMultiplayer_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SwitchLANSettings
struct UUI_NetworkMultiplayer_SwitchLANSettings_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.RefreshLANPanel
struct UUI_NetworkMultiplayer_RefreshLANPanel_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SceneActivated
struct UUI_NetworkMultiplayer_SceneActivated_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.TextSubmitted
struct UUI_NetworkMultiplayer_TextSubmitted_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnLanPanelClicked
struct UUI_NetworkMultiplayer_OnLanPanelClicked_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnPasswordEntered
struct UUI_NetworkMultiplayer_OnPasswordEntered_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.JoinCurrentServer
struct UUI_NetworkMultiplayer_JoinCurrentServer_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SceneDeactivated
struct UUI_NetworkMultiplayer_SceneDeactivated_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnSearchCancelled
struct UUI_NetworkMultiplayer_OnSearchCancelled_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SearchForGames
struct UUI_NetworkMultiplayer_SearchForGames_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnJoinGameComplete
struct UUI_NetworkMultiplayer_OnJoinGameComplete_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.BuildJoinURL
struct UUI_NetworkMultiplayer_BuildJoinURL_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.JoinGame
struct UUI_NetworkMultiplayer_JoinGame_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnAcceptJoinFailedClicked
struct UUI_NetworkMultiplayer_OnAcceptJoinFailedClicked_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnCancelJoinClicked
struct UUI_NetworkMultiplayer_OnCancelJoinClicked_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.JoinGameIP
struct UUI_NetworkMultiplayer_JoinGameIP_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnSearchComplete
struct UUI_NetworkMultiplayer_OnSearchComplete_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnResetFilterMessageBox
struct UUI_NetworkMultiplayer_OnResetFilterMessageBox_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.CloseSearchMessage
struct UUI_NetworkMultiplayer_CloseSearchMessage_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnGameCreated
struct UUI_NetworkMultiplayer_OnGameCreated_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnDestroyForCancelComplete
struct UUI_NetworkMultiplayer_OnDestroyForCancelComplete_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.CleanupSession
struct UUI_NetworkMultiplayer_CleanupSession_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.OnCreateCancelled
struct UUI_NetworkMultiplayer_OnCreateCancelled_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.ShowCancelCreateButton
struct UUI_NetworkMultiplayer_ShowCancelCreateButton_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.HostGame
struct UUI_NetworkMultiplayer_HostGame_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SetupSearch
struct UUI_NetworkMultiplayer_SetupSearch_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SetupSettings
struct UUI_NetworkMultiplayer_SetupSettings_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.SetupDefaultCustomKeys
struct UUI_NetworkMultiplayer_SetupDefaultCustomKeys_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.CleanupTags
struct UUI_NetworkMultiplayer_CleanupTags_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.IsIPValid
struct UUI_NetworkMultiplayer_IsIPValid_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.KeyboardInputDone
struct UUI_NetworkMultiplayer_KeyboardInputDone_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.ShowGamerCardForCurrentSelection
struct UUI_NetworkMultiplayer_ShowGamerCardForCurrentSelection_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.NotifyWidgetClicked
struct UUI_NetworkMultiplayer_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_NetworkMultiplayer.ResetGameFilters
struct UUI_NetworkMultiplayer_ResetGameFilters_Params
{
};

// Function UDKGame.DunDefOrc.GetAMeleeSwingLocation
struct ADunDefOrc_GetAMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefOrc.PlayOrcAttackAnimation
struct ADunDefOrc_PlayOrcAttackAnimation_Params
{
};

// Function UDKGame.DunDefOrc.PlayAttackAnimation
struct ADunDefOrc_PlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefOrc.PlayHurtAnimation
struct ADunDefOrc_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefOrc.MeleeSwingEnd
struct ADunDefOrc_MeleeSwingEnd_Params
{
};

// Function UDKGame.DunDefOrc.MeleeSwingStart
struct ADunDefOrc_MeleeSwingStart_Params
{
};

// Function UDKGame.DunDefOrc.ExecReplicatedFunction
struct ADunDefOrc_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefOrcController.PostBeginPlay
struct ADunDefOrcController_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefOrcController.NotifyTakeHitEX
struct ADunDefOrcController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.ResetPhoenix
struct ADunDefPhoenixControllerV3_ResetPhoenix_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.StuckCheck
struct ADunDefPhoenixControllerV3_StuckCheck_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.ShootFireball
struct ADunDefPhoenixControllerV3_ShootFireball_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.GetAFlightNavigationTarget
struct ADunDefPhoenixControllerV3_GetAFlightNavigationTarget_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.AllowDamage
struct ADunDefPhoenixControllerV3_AllowDamage_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.HurtRadius
struct ADunDefPhoenixControllerV3_HurtRadius_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.MiniBirdDied
struct ADunDefPhoenixControllerV3_MiniBirdDied_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.SpawnMiniPhoenix
struct ADunDefPhoenixControllerV3_SpawnMiniPhoenix_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.getMaxAllowedLiveMiniBirds
struct ADunDefPhoenixControllerV3_getMaxAllowedLiveMiniBirds_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.WantsHurtAnimation
struct ADunDefPhoenixControllerV3_WantsHurtAnimation_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.GotToFlyingState
struct ADunDefPhoenixControllerV3_GotToFlyingState_Params
{
};

// Function UDKGame.DunDefPhoenixControllerV3.PostBeginPlay
struct ADunDefPhoenixControllerV3_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWyvern.UpdateDifficultyValues
struct ADunDefWyvern_UpdateDifficultyValues_Params
{
};

// Function UDKGame.DunDefWyvern.AllowObstructionJump
struct ADunDefWyvern_AllowObstructionJump_Params
{
};

// Function UDKGame.DunDefWyvern.CheckWyvernProximity
struct ADunDefWyvern_CheckWyvernProximity_Params
{
};

// Function UDKGame.DunDefWyvern.FireProjectile
struct ADunDefWyvern_FireProjectile_Params
{
};

// Function UDKGame.DunDefWyvern.EndMeleeSwing
struct ADunDefWyvern_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefWyvern.StartMeleeSwing
struct ADunDefWyvern_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefWyvern.Bump
struct ADunDefWyvern_Bump_Params
{
};

// Function UDKGame.DunDefWyvern.GetProjectileSpawnTransformation
struct ADunDefWyvern_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefWyvern.PlayAttackAnimation
struct ADunDefWyvern_PlayAttackAnimation_Params
{
};

// Function UDKGame.DunDefWyvern.IsCurrentlyPlayingRangedAttackAnimation
struct ADunDefWyvern_IsCurrentlyPlayingRangedAttackAnimation_Params
{
};

// Function UDKGame.DunDefWyvern.PlayRangedAttackAnimation
struct ADunDefWyvern_PlayRangedAttackAnimation_Params
{
};

// Function UDKGame.DunDefWyvern.SetMovementPhysics
struct ADunDefWyvern_SetMovementPhysics_Params
{
};

// Function UDKGame.DunDefWyvern.PauseAnimationAfterDeath
struct ADunDefWyvern_PauseAnimationAfterDeath_Params
{
};

// Function UDKGame.DunDefWyvern.ExecReplicatedFunction
struct ADunDefWyvern_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefWyvern.PlayDying
struct ADunDefWyvern_PlayDying_Params
{
};

// Function UDKGame.DunDefWyvern.GetMeleeSwingLocation
struct ADunDefWyvern_GetMeleeSwingLocation_Params
{
};

// Function UDKGame.DunDefWyvern.DisableSpawnCollision
struct ADunDefWyvern_DisableSpawnCollision_Params
{
};

// Function UDKGame.DunDefWyvern.PostBeginPlay
struct ADunDefWyvern_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPhoenixMiniV2.Explode
struct ADunDefPhoenixMiniV2_Explode_Params
{
};

// Function UDKGame.DunDefPhoenixMiniV2.TakeDamage
struct ADunDefPhoenixMiniV2_TakeDamage_Params
{
};

// Function UDKGame.DunDefPhoenixMiniV2.Died
struct ADunDefPhoenixMiniV2_Died_Params
{
};

// Function UDKGame.DunDefPhoenixMiniV2.ExecReplicatedFunction
struct ADunDefPhoenixMiniV2_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefPhoenixMiniV2.PostBeginPlay
struct ADunDefPhoenixMiniV2_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPhoenixV3.TakeDamage
struct ADunDefPhoenixV3_TakeDamage_Params
{
};

// Function UDKGame.DunDefPhoenixV3.ShootFireball
struct ADunDefPhoenixV3_ShootFireball_Params
{
};

// Function UDKGame.DunDefPhoenixV3.EndFlightMortar
struct ADunDefPhoenixV3_EndFlightMortar_Params
{
};

// Function UDKGame.DunDefPhoenixV3.StartFlightMortar
struct ADunDefPhoenixV3_StartFlightMortar_Params
{
};

// Function UDKGame.DunDefPhoenixV3.GotoNoState
struct ADunDefPhoenixV3_GotoNoState_Params
{
};

// Function UDKGame.DunDefPhoenixV3.EndDash
struct ADunDefPhoenixV3_EndDash_Params
{
};

// Function UDKGame.DunDefPhoenixV3.StartDash
struct ADunDefPhoenixV3_StartDash_Params
{
};

// Function UDKGame.DunDefPhoenixV3.StartFlight
struct ADunDefPhoenixV3_StartFlight_Params
{
};

// Function UDKGame.DunDefPhoenixV3.GetDropProjectileSpawnTransformation
struct ADunDefPhoenixV3_GetDropProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefPhoenixV3.GetProjectileSpawnTransformation
struct ADunDefPhoenixV3_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefPhoenixV3.GetPawnDamageModifier
struct ADunDefPhoenixV3_GetPawnDamageModifier_Params
{
};

// Function UDKGame.DunDefPhoenixV3.PlayHurtAnimation
struct ADunDefPhoenixV3_PlayHurtAnimation_Params
{
};

// Function UDKGame.DunDefPhoenixV3.PostBeginPlay
struct ADunDefPhoenixV3_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPhoenixV3.ExecReplicatedFunction
struct ADunDefPhoenixV3_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefWyvernController.GetObstructionJumpForwardDir
struct ADunDefWyvernController_GetObstructionJumpForwardDir_Params
{
};

// Function UDKGame.DunDefWyvernController.ObstructionJump
struct ADunDefWyvernController_ObstructionJump_Params
{
};

// Function UDKGame.DunDefWyvernController.DoRangedAttack
struct ADunDefWyvernController_DoRangedAttack_Params
{
};

// Function UDKGame.DunDefWyvernController.DoAttack
struct ADunDefWyvernController_DoAttack_Params
{
};

// Function UDKGame.DunDefWyvernController.AddToSwingHurtList
struct ADunDefWyvernController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefWyvernController.NotifyTakeHitEX
struct ADunDefWyvernController_NotifyTakeHitEX_Params
{
};

// Function UDKGame.DunDefWyvernController.CheckDirectReachability
struct ADunDefWyvernController_CheckDirectReachability_Params
{
};

// Function UDKGame.DunDefWyvernController.CheckIndirectReachability
struct ADunDefWyvernController_CheckIndirectReachability_Params
{
};

// Function UDKGame.DunDefWyvernController.MoveUnreachable
struct ADunDefWyvernController_MoveUnreachable_Params
{
};

// Function UDKGame.DunDefWyvernController.GeneratePathToActor
struct ADunDefWyvernController_GeneratePathToActor_Params
{
};

// Function UDKGame.DunDefWyvernController.MoveAroundBlockade
struct ADunDefWyvernController_MoveAroundBlockade_Params
{
};

// Function UDKGame.DunDefWyvernController.NavActorReachable
struct ADunDefWyvernController_NavActorReachable_Params
{
};

// Function UDKGame.DunDefWyvernController.DrawMyHUD
struct ADunDefWyvernController_DrawMyHUD_Params
{
};

// Function UDKGame.DunDefWyvernController.FindNearestNavPointTo
struct ADunDefWyvernController_FindNearestNavPointTo_Params
{
};

// Function UDKGame.DunDefWyvernController.DisplayDebug
struct ADunDefWyvernController_DisplayDebug_Params
{
};

// Function UDKGame.DunDefWyvernController.EndMeleeSwing
struct ADunDefWyvernController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefWyvernController.StartMeleeSwing
struct ADunDefWyvernController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefWyvernController.FireProjectile
struct ADunDefWyvernController_FireProjectile_Params
{
};

// Function UDKGame.DunDefPhoenixMiniControllerV2.findPlayer
struct ADunDefPhoenixMiniControllerV2_findPlayer_Params
{
};

// Function UDKGame.DunDefPhoenixMiniControllerV2.Tick
struct ADunDefPhoenixMiniControllerV2_Tick_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.IsFirstAOEAbility
struct ADunDefPlayerAbility_AreaOfEffect_IsFirstAOEAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.IsOnlyAOEAbility
struct ADunDefPlayerAbility_AreaOfEffect_IsOnlyAOEAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.IsAffectingActor
struct ADunDefPlayerAbility_AreaOfEffect_IsAffectingActor_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.SetRange
struct ADunDefPlayerAbility_AreaOfEffect_SetRange_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.DoEffect
struct ADunDefPlayerAbility_AreaOfEffect_DoEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.CanAffect
struct ADunDefPlayerAbility_AreaOfEffect_CanAffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.AddEffect
struct ADunDefPlayerAbility_AreaOfEffect_AddEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.RemoveEffect
struct ADunDefPlayerAbility_AreaOfEffect_RemoveEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.RemoveAllEffects
struct ADunDefPlayerAbility_AreaOfEffect_RemoveAllEffects_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.Destroyed
struct ADunDefPlayerAbility_AreaOfEffect_Destroyed_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.PostBeginPlay
struct ADunDefPlayerAbility_AreaOfEffect_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.ScaleForHeroModifiers
struct ADunDefPlayerAbility_AreaOfEffect_ScaleForHeroModifiers_Params
{
};

// Function UDKGame.DunDefPlayerAbility_AreaOfEffect.ReplicatedEvent
struct ADunDefPlayerAbility_AreaOfEffect_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.UnTouch
struct ADunDefTowerPreventionRadius_UnTouch_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.Touch
struct ADunDefTowerPreventionRadius_Touch_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.Destroyed
struct ADunDefTowerPreventionRadius_Destroyed_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.PostBeginPlay
struct ADunDefTowerPreventionRadius_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.PreventTowerAtPoint
struct ADunDefTowerPreventionRadius_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.AllowTowerAtPoint
struct ADunDefTowerPreventionRadius_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerPreventionRadius.CheckAllowance
struct ADunDefTowerPreventionRadius_CheckAllowance_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildAura.GetOtherAbilityPlacementPreventionRadius
struct ADunDefPlayerAbility_BuildAura_GetOtherAbilityPlacementPreventionRadius_Params
{
};

// Function UDKGame.DunDefPlayerAbility_BuildAura.UpdateDecalPlacement
struct ADunDefPlayerAbility_BuildAura_UpdateDecalPlacement_Params
{
};

// Function UDKGame.DunDefPlayerAbility_DetonateTraps.GetBestPresentToOpen
struct ADunDefPlayerAbility_DetonateTraps_GetBestPresentToOpen_Params
{
};

// Function UDKGame.DunDefPlayerAbility_DetonateTraps.GetBestTrapToDetonate
struct ADunDefPlayerAbility_DetonateTraps_GetBestTrapToDetonate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_DetonateTraps.GetAbilityStatus
struct ADunDefPlayerAbility_DetonateTraps_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_DetonateTraps.OnActivate
struct ADunDefPlayerAbility_DetonateTraps_OnActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_DetonateTraps.RequestActivation
struct ADunDefPlayerAbility_DetonateTraps_RequestActivation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.AddSpread
struct ADunDefPlayerAbility_GenericActorSpawner_AddSpread_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.ServerActivateWithLocation
struct ADunDefPlayerAbility_GenericActorSpawner_ServerActivateWithLocation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.RequestActivation
struct ADunDefPlayerAbility_GenericActorSpawner_RequestActivation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.DoActorSpawn
struct ADunDefPlayerAbility_GenericActorSpawner_DoActorSpawn_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.GetAbilityStatus
struct ADunDefPlayerAbility_GenericActorSpawner_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.SetUpActorSpawn
struct ADunDefPlayerAbility_GenericActorSpawner_SetUpActorSpawn_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.AllowCastingCancelOnDamage
struct ADunDefPlayerAbility_GenericActorSpawner_AllowCastingCancelOnDamage_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.GetCostToActivate
struct ADunDefPlayerAbility_GenericActorSpawner_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericActorSpawner.ManaHoming
struct ADunDefPlayerAbility_GenericActorSpawner_ManaHoming_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericSpellTimer.GetDisplayCost
struct ADunDefPlayerAbility_GenericSpellTimer_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericSpellTimer.GetCostToActivate
struct ADunDefPlayerAbility_GenericSpellTimer_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericSpellTimer.GetActivationFailureString
struct ADunDefPlayerAbility_GenericSpellTimer_GetActivationFailureString_Params
{
};

// Function UDKGame.DunDefPlayerAbility_GenericSpellTimer.GetAbilityStatus
struct ADunDefPlayerAbility_GenericSpellTimer_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Heal.GetDisplayCost
struct ADunDefPlayerAbility_Heal_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Heal.GetCostToActivate
struct ADunDefPlayerAbility_Heal_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Heal.GetActivationFailureString
struct ADunDefPlayerAbility_Heal_GetActivationFailureString_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Heal.GetAbilityStatus
struct ADunDefPlayerAbility_Heal_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Initiate_Invisibility.GetAbilityStatus
struct ADunDefPlayerAbility_Initiate_Invisibility_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.GetAbilityStatus
struct ADunDefPlayerAbility_Recruit_HeroBoost_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.AddEffect
struct ADunDefPlayerAbility_Recruit_HeroBoost_AddEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.RemoveEffect
struct ADunDefPlayerAbility_Recruit_HeroBoost_RemoveEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.DoEffect
struct ADunDefPlayerAbility_Recruit_HeroBoost_DoEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.GetSpeedMultiplier
struct ADunDefPlayerAbility_Recruit_HeroBoost_GetSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.GetHealingAmount
struct ADunDefPlayerAbility_Recruit_HeroBoost_GetHealingAmount_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_HeroBoost.GetDamageMultiplier
struct ADunDefPlayerAbility_Recruit_HeroBoost_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.GetAbilityStatus
struct ADunDefPlayerAbility_Recruit_TowerBoost_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.AddEffect
struct ADunDefPlayerAbility_Recruit_TowerBoost_AddEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.RemoveEffect
struct ADunDefPlayerAbility_Recruit_TowerBoost_RemoveEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.DoEffect
struct ADunDefPlayerAbility_Recruit_TowerBoost_DoEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.GetHealingAmount
struct ADunDefPlayerAbility_Recruit_TowerBoost_GetHealingAmount_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Recruit_TowerBoost.GetDamageMultiplier
struct ADunDefPlayerAbility_Recruit_TowerBoost_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.StartRepairingState
struct ADunDefPlayerAbility_RepairTower_StartRepairingState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.ClientStartRepairingState
struct ADunDefPlayerAbility_RepairTower_ClientStartRepairingState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.PlacementTraceCheckActors
struct ADunDefPlayerAbility_RepairTower_PlacementTraceCheckActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.GetBestRepairTower
struct ADunDefPlayerAbility_RepairTower_GetBestRepairTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.ServerRequestRepairTower
struct ADunDefPlayerAbility_RepairTower_ServerRequestRepairTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.PostBeginPlay
struct ADunDefPlayerAbility_RepairTower_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.PostCursorDrawHUD
struct ADunDefPlayerAbility_RepairTower_PostCursorDrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_RepairTower_GetPlacementWeaponEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.GetCursorPlacementTexture
struct ADunDefPlayerAbility_RepairTower_GetCursorPlacementTexture_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.GetDisplayCost
struct ADunDefPlayerAbility_RepairTower_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_RepairTower.GetCostToActivate
struct ADunDefPlayerAbility_RepairTower_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.SortTracedActors
struct ADunDefPlayerAbility_SellTower_SortTracedActors_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.ServerRequestSellTower
struct ADunDefPlayerAbility_SellTower_ServerRequestSellTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.PostCursorDrawHUD
struct ADunDefPlayerAbility_SellTower_PostCursorDrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.PostBeginPlay
struct ADunDefPlayerAbility_SellTower_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_SellTower_GetPlacementWeaponEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_SellTower.GetCursorPlacementTexture
struct ADunDefPlayerAbility_SellTower_GetCursorPlacementTexture_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_BloodRage.GetAbilityStatus
struct ADunDefPlayerAbility_Squire_BloodRage_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.GetAbilityStatus
struct ADunDefPlayerAbility_Squire_CircleSlice_GetAbilityStatus_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.GetMomentum
struct ADunDefPlayerAbility_Squire_CircleSlice_GetMomentum_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.GetDamage
struct ADunDefPlayerAbility_Squire_CircleSlice_GetDamage_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.AnimNotify_CurrentAbility_Off
struct ADunDefPlayerAbility_Squire_CircleSlice_AnimNotify_CurrentAbility_Off_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.AnimNotify_CurrentAbility_On
struct ADunDefPlayerAbility_Squire_CircleSlice_AnimNotify_CurrentAbility_On_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.RequestCancellation
struct ADunDefPlayerAbility_Squire_CircleSlice_RequestCancellation_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.CancelAbility
struct ADunDefPlayerAbility_Squire_CircleSlice_CancelAbility_Params
{
};

// Function UDKGame.DunDefPlayerAbility_Squire_CircleSlice.GetCostToActivate
struct ADunDefPlayerAbility_Squire_CircleSlice_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetBestTower
struct ADunDefPlayerAbility_UpgradeTower_GetBestTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetBestUpgradeTower
struct ADunDefPlayerAbility_UpgradeTower_GetBestUpgradeTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.PreCursorDrawHUD
struct ADunDefPlayerAbility_UpgradeTower_PreCursorDrawHUD_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.StartUpgradingState
struct ADunDefPlayerAbility_UpgradeTower_StartUpgradingState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.ClientStartUpgradingState
struct ADunDefPlayerAbility_UpgradeTower_ClientStartUpgradingState_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.IsValidUpgradeTower
struct ADunDefPlayerAbility_UpgradeTower_IsValidUpgradeTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.ServerRequestUpgradeTower
struct ADunDefPlayerAbility_UpgradeTower_ServerRequestUpgradeTower_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.PostBeginPlay
struct ADunDefPlayerAbility_UpgradeTower_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetPlacementWeaponEffect
struct ADunDefPlayerAbility_UpgradeTower_GetPlacementWeaponEffect_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetCursorPlacementTexture
struct ADunDefPlayerAbility_UpgradeTower_GetCursorPlacementTexture_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetTowerCost
struct ADunDefPlayerAbility_UpgradeTower_GetTowerCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetDisplayCost
struct ADunDefPlayerAbility_UpgradeTower_GetDisplayCost_Params
{
};

// Function UDKGame.DunDefPlayerAbility_UpgradeTower.GetCostToActivate
struct ADunDefPlayerAbility_UpgradeTower_GetCostToActivate_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.AddDefaultOffHandWeaponAttachment
struct ADunDefPlayerSelectUICharacter_AddDefaultOffHandWeaponAttachment_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.AddDefaultWeaponAttachment
struct ADunDefPlayerSelectUICharacter_AddDefaultWeaponAttachment_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.Unselected
struct ADunDefPlayerSelectUICharacter_Unselected_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.Selected
struct ADunDefPlayerSelectUICharacter_Selected_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.RestoreRotation
struct ADunDefPlayerSelectUICharacter_RestoreRotation_Params
{
};

// Function UDKGame.DunDefPlayerSelectUICharacter.PostBeginPlay
struct ADunDefPlayerSelectUICharacter_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefProjectile_Harpoon.Explode
struct ADunDefProjectile_Harpoon_Explode_Params
{
};

// Function UDKGame.DunDefProjectile_Harpoon.ProcessTouch
struct ADunDefProjectile_Harpoon_ProcessTouch_Params
{
};

// Function UDKGame.DunDefProjectile_Harpoon.IsImpactAllowed
struct ADunDefProjectile_Harpoon_IsImpactAllowed_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.Tick
struct ADunDefProjectile_BowlingBall_Tick_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.Explode
struct ADunDefProjectile_BowlingBall_Explode_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.Destroyed
struct ADunDefProjectile_BowlingBall_Destroyed_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.HitWall
struct ADunDefProjectile_BowlingBall_HitWall_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.TimedExplosion
struct ADunDefProjectile_BowlingBall_TimedExplosion_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.PostBeginPlay
struct ADunDefProjectile_BowlingBall_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.Touch
struct ADunDefProjectile_BowlingBall_Touch_Params
{
};

// Function UDKGame.DunDefProjectile_BowlingBall.Landed
struct ADunDefProjectile_BowlingBall_Landed_Params
{
};

// Function UDKGame.DunDefProjectile_Falling.Landed
struct ADunDefProjectile_Falling_Landed_Params
{
};

// Function UDKGame.DunDefProjectile_Falling.SetGravZ
struct ADunDefProjectile_Falling_SetGravZ_Params
{
};

// Function UDKGame.DunDefProjectile_Falling.ReplicatedEvent
struct ADunDefProjectile_Falling_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefProjectile_MagicBolt.Explode
struct ADunDefProjectile_MagicBolt_Explode_Params
{
};

// Function UDKGame.DunDefProjectile_MagicBolt.InitProjectile
struct ADunDefProjectile_MagicBolt_InitProjectile_Params
{
};

// Function UDKGame.DunDefProjectile_MagicBolt.InitMagicBolt
struct ADunDefProjectile_MagicBolt_InitMagicBolt_Params
{
};

// Function UDKGame.DunDefProjectile_MagicBolt.ReplicatedEvent
struct ADunDefProjectile_MagicBolt_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefProjectile_MagicMissile.ProcessTouch
struct ADunDefProjectile_MagicMissile_ProcessTouch_Params
{
};

// Function UDKGame.DunDefUIController.GetKeys
struct UDunDefUIController_GetKeys_Params
{
};

// Function UDKGame.DunDefUIController.Initialized
struct UDunDefUIController_Initialized_Params
{
};

// Function UDKGame.DunDefUIController.InputKey
struct UDunDefUIController_InputKey_Params
{
};

// Function UDKGame.DunDefSkeletonController.AddToSwingHurtList
struct ADunDefSkeletonController_AddToSwingHurtList_Params
{
};

// Function UDKGame.DunDefSkeletonController.EndMeleeSwing
struct ADunDefSkeletonController_EndMeleeSwing_Params
{
};

// Function UDKGame.DunDefSkeletonController.StartMeleeSwing
struct ADunDefSkeletonController_StartMeleeSwing_Params
{
};

// Function UDKGame.DunDefSkeletonController.AwaitResurrection
struct ADunDefSkeletonController_AwaitResurrection_Params
{
};

// Function UDKGame.DunDefToolTipMesh.Destroyed
struct ADunDefToolTipMesh_Destroyed_Params
{
};

// Function UDKGame.DunDefToolTipMesh.PostBeginPlay
struct ADunDefToolTipMesh_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefToolTipMesh.GetActivationIcon
struct ADunDefToolTipMesh_GetActivationIcon_Params
{
};

// Function UDKGame.DunDefToolTipMesh.GetToolTipPriority
struct ADunDefToolTipMesh_GetToolTipPriority_Params
{
};

// Function UDKGame.DunDefToolTipMesh.TakesToolTipPriority
struct ADunDefToolTipMesh_TakesToolTipPriority_Params
{
};

// Function UDKGame.DunDefToolTipMesh.GetActivationOffset
struct ADunDefToolTipMesh_GetActivationOffset_Params
{
};

// Function UDKGame.DunDefToolTipMesh.GetActivationWeighting
struct ADunDefToolTipMesh_GetActivationWeighting_Params
{
};

// Function UDKGame.DunDefToolTipMesh.Client_Activate
struct ADunDefToolTipMesh_Client_Activate_Params
{
};

// Function UDKGame.DunDefToolTipMesh.Server_Activate
struct ADunDefToolTipMesh_Server_Activate_Params
{
};

// Function UDKGame.DunDefToolTipMesh.AllowActivation
struct ADunDefToolTipMesh_AllowActivation_Params
{
};

// Function UDKGame.DunDefToolTipMesh.ContinueDrawingToolTip
struct ADunDefToolTipMesh_ContinueDrawingToolTip_Params
{
};

// Function UDKGame.DunDefToolTipMesh.DrawToolTip
struct ADunDefToolTipMesh_DrawToolTip_Params
{
};

// Function UDKGame.DunDefToolTipMeshFeedBack.Server_Activate
struct ADunDefToolTipMeshFeedBack_Server_Activate_Params
{
};

// Function UDKGame.DunDefToolTipMeshFeedBack.ShowUIKeyboard
struct ADunDefToolTipMeshFeedBack_ShowUIKeyboard_Params
{
};

// Function UDKGame.DunDefToolTipMeshFeedBack.KeyboardInputDone
struct ADunDefToolTipMeshFeedBack_KeyboardInputDone_Params
{
};

// Function UDKGame.TowerBoosterInterface.GetTowerBoostAmount
struct UTowerBoosterInterface_GetTowerBoostAmount_Params
{
};

// Function UDKGame.TowerBoosterInterface.HasTowerBoostingType
struct UTowerBoosterInterface_HasTowerBoostingType_Params
{
};

// Function UDKGame.TowerBoosterInterface.GetTowerBoostingTarget
struct UTowerBoosterInterface_GetTowerBoostingTarget_Params
{
};

// Function UDKGame.IDifficultyChangedInterface.ChangedDifficulty
struct UIDifficultyChangedInterface_ChangedDifficulty_Params
{
};

// Function UDKGame.DunDefTower_AuraDeathlyHallows.GetDamageType
struct ADunDefTower_AuraDeathlyHallows_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_AuraDeathlyHallows.DrawTowerToolTipStats
struct ADunDefTower_AuraDeathlyHallows_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_AuraDeathlyHallows.GetAttackDamage
struct ADunDefTower_AuraDeathlyHallows_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_AuraDeathlyHallows.TimedEffectDT
struct ADunDefTower_AuraDeathlyHallows_TimedEffectDT_Params
{
};

// Function UDKGame.DunDefTower_AuraDeathlyHallows.TimedEffect
struct ADunDefTower_AuraDeathlyHallows_TimedEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraEnrage.DrawTowerToolTipStats
struct ADunDefTower_AuraEnrage_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_AuraEnrage.GetChanceToEnrage
struct ADunDefTower_AuraEnrage_GetChanceToEnrage_Params
{
};

// Function UDKGame.DunDefTower_AuraEnrage.GetDamageType
struct ADunDefTower_AuraEnrage_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_AuraEnrage.ExitEffect
struct ADunDefTower_AuraEnrage_ExitEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraEnrage.EntryEffect
struct ADunDefTower_AuraEnrage_EntryEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraHeal.IsValidForLifeEnergyDecrease
struct ADunDefTower_AuraHeal_IsValidForLifeEnergyDecrease_Params
{
};

// Function UDKGame.DunDefTower_AuraHeal.GetDamageMultiplier
struct ADunDefTower_AuraHeal_GetDamageMultiplier_Params
{
};

// Function UDKGame.DunDefTower_AuraHeal.DrawTowerToolTipStats
struct ADunDefTower_AuraHeal_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_AuraHeal.GetHealAmount
struct ADunDefTower_AuraHeal_GetHealAmount_Params
{
};

// Function UDKGame.DunDefTower_AuraHeal.TimedEffect
struct ADunDefTower_AuraHeal_TimedEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.GetDamageType
struct ADunDefTower_AuraStickyGloop_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.DrawTowerToolTipStats
struct ADunDefTower_AuraStickyGloop_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.GetMovementSpeedMultiplier
struct ADunDefTower_AuraStickyGloop_GetMovementSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.ExitEffect
struct ADunDefTower_AuraStickyGloop_ExitEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.EntryEffect
struct ADunDefTower_AuraStickyGloop_EntryEffect_Params
{
};

// Function UDKGame.DunDefTower_AuraStickyGloop.TimedEffect
struct ADunDefTower_AuraStickyGloop_TimedEffect_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.UsesRange
struct ADunDefTower_BouncyBlockade_UsesRange_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.GetDamageType
struct ADunDefTower_BouncyBlockade_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.GetAttackInterval
struct ADunDefTower_BouncyBlockade_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.DrawTowerToolTipStats
struct ADunDefTower_BouncyBlockade_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.GetAttackDamage
struct ADunDefTower_BouncyBlockade_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.DoBounce
struct ADunDefTower_BouncyBlockade_DoBounce_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.PostBeginPlay
struct ADunDefTower_BouncyBlockade_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.PlayBouncyAnimation
struct ADunDefTower_BouncyBlockade_PlayBouncyAnimation_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.BouncyRadiusCheck
struct ADunDefTower_BouncyBlockade_BouncyRadiusCheck_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.Destroyed
struct ADunDefTower_BouncyBlockade_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.Tick
struct ADunDefTower_BouncyBlockade_Tick_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.Bump
struct ADunDefTower_BouncyBlockade_Bump_Params
{
};

// Function UDKGame.DunDefTower_BouncyBlockade.ExecReplicatedFunction
struct ADunDefTower_BouncyBlockade_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.UsesRange
struct ADunDefTower_ProjectileType_UsesRange_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetShootAnimationSpeed
struct ADunDefTower_ProjectileType_GetShootAnimationSpeed_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetDamageType
struct ADunDefTower_ProjectileType_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.DrawTowerToolTipStats
struct ADunDefTower_ProjectileType_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.PlayShootAnimation
struct ADunDefTower_ProjectileType_PlayShootAnimation_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetAttackTime
struct ADunDefTower_ProjectileType_GetAttackTime_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetAttackInterval
struct ADunDefTower_ProjectileType_GetAttackInterval_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.DoAttack
struct ADunDefTower_ProjectileType_DoAttack_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.UpdateAI
struct ADunDefTower_ProjectileType_UpdateAI_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.UpdateTarget
struct ADunDefTower_ProjectileType_UpdateTarget_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.ValidateTarget
struct ADunDefTower_ProjectileType_ValidateTarget_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetTargetClassWeight
struct ADunDefTower_ProjectileType_GetTargetClassWeight_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.StaticGetAttackRange
struct ADunDefTower_ProjectileType_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetAttackDamage
struct ADunDefTower_ProjectileType_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.GetAttackRange
struct ADunDefTower_ProjectileType_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.UpdateTurretLookSkelControl
struct ADunDefTower_ProjectileType_UpdateTurretLookSkelControl_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.Tick
struct ADunDefTower_ProjectileType_Tick_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.IsPositionWithinAngleRange
struct ADunDefTower_ProjectileType_IsPositionWithinAngleRange_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.ShootProjectile
struct ADunDefTower_ProjectileType_ShootProjectile_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.Destroyed
struct ADunDefTower_ProjectileType_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.PostBeginPlay
struct ADunDefTower_ProjectileType_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.ReplicatedEvent
struct ADunDefTower_ProjectileType_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefTower_ProjectileType.ExecReplicatedFunction
struct ADunDefTower_ProjectileType_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefTower_BowlingBall.UpdateTurretLookSkelControl
struct ADunDefTower_BowlingBall_UpdateTurretLookSkelControl_Params
{
};

// Function UDKGame.TrapLargeCylinderTriggerWrapper.SetRadius
struct ATrapLargeCylinderTriggerWrapper_SetRadius_Params
{
};

// Function UDKGame.TrapLargeCylinderTriggerWrapper.Touch
struct ATrapLargeCylinderTriggerWrapper_Touch_Params
{
};

// Function UDKGame.DunDefTower_Harpoon.ShowChamberedHarpoon
struct ADunDefTower_Harpoon_ShowChamberedHarpoon_Params
{
};

// Function UDKGame.DunDefTower_Harpoon.ShootProjectile
struct ADunDefTower_Harpoon_ShootProjectile_Params
{
};

// Function UDKGame.DunDefTower_Harpoon.UpdateTurretLookSkelControl
struct ADunDefTower_Harpoon_UpdateTurretLookSkelControl_Params
{
};

// Function UDKGame.DunDefTower_Harpoon.PostBeginPlay
struct ADunDefTower_Harpoon_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_MagicMissile.ChooseAnimation
struct ADunDefTower_MagicMissile_ChooseAnimation_Params
{
};

// Function UDKGame.DunDefTower_MagicMissile.ChooseProjectile
struct ADunDefTower_MagicMissile_ChooseProjectile_Params
{
};

// Function UDKGame.DunDefTower_MagicMissile.ShootProjectile
struct ADunDefTower_MagicMissile_ShootProjectile_Params
{
};

// Function UDKGame.DunDefTower_MagicMissile.PostBeginPlay
struct ADunDefTower_MagicMissile_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_JackInTheBox.GetAttackRange
struct ADunDefTower_JackInTheBox_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.UsesRange
struct ADunDefTower_SliceNDice_UsesRange_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.Destroyed
struct ADunDefTower_SliceNDice_Destroyed_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetDamageType
struct ADunDefTower_SliceNDice_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.DrawTowerToolTipStats
struct ADunDefTower_SliceNDice_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.StaticGetAttackRange
struct ADunDefTower_SliceNDice_StaticGetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetRateDivisor
struct ADunDefTower_SliceNDice_GetRateDivisor_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetSpinDownTime
struct ADunDefTower_SliceNDice_GetSpinDownTime_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetSpinUpTime
struct ADunDefTower_SliceNDice_GetSpinUpTime_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetAttackRange
struct ADunDefTower_SliceNDice_GetAttackRange_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.GetAttackDamage
struct ADunDefTower_SliceNDice_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.UpdateAI
struct ADunDefTower_SliceNDice_UpdateAI_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.Tick
struct ADunDefTower_SliceNDice_Tick_Params
{
};

// Function UDKGame.DunDefTower_SliceNDice.PostBeginPlay
struct ADunDefTower_SliceNDice_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.NotifyTookDamage
struct ADunDefTower_SpikyBlockade_NotifyTookDamage_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.GetDamageType
struct ADunDefTower_SpikyBlockade_GetDamageType_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.DrawTowerToolTipStats
struct ADunDefTower_SpikyBlockade_DrawTowerToolTipStats_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.GetAttackDamage
struct ADunDefTower_SpikyBlockade_GetAttackDamage_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.DoSpikyDamage
struct ADunDefTower_SpikyBlockade_DoSpikyDamage_Params
{
};

// Function UDKGame.DunDefTower_SpikyBlockade.Bump
struct ADunDefTower_SpikyBlockade_Bump_Params
{
};

// Function UDKGame.DunDefTowerAllowanceVolume.Destroyed
struct ADunDefTowerAllowanceVolume_Destroyed_Params
{
};

// Function UDKGame.DunDefTowerAllowanceVolume.PostBeginPlay
struct ADunDefTowerAllowanceVolume_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTowerAllowanceVolume.AllowTowerAtPoint
struct ADunDefTowerAllowanceVolume_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerAllowanceVolume.PreventTowerAtPoint
struct ADunDefTowerAllowanceVolume_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerAllowanceVolume.CheckAllowance
struct ADunDefTowerAllowanceVolume_CheckAllowance_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.Destroyed
struct ADunDefTowerPreventionVolume_Destroyed_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.PostBeginPlay
struct ADunDefTowerPreventionVolume_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.UnTouch
struct ADunDefTowerPreventionVolume_UnTouch_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.Touch
struct ADunDefTowerPreventionVolume_Touch_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.PreventTowerAtPoint
struct ADunDefTowerPreventionVolume_PreventTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.AllowTowerAtPoint
struct ADunDefTowerPreventionVolume_AllowTowerAtPoint_Params
{
};

// Function UDKGame.DunDefTowerPreventionVolume.CheckAllowance
struct ADunDefTowerPreventionVolume_CheckAllowance_Params
{
};

// Function UDKGame.DunDefViewportInput.ResetForNewMap
struct UDunDefViewportInput_ResetForNewMap_Params
{
};

// Function UDKGame.DunDefViewportInput.InputKey
struct UDunDefViewportInput_InputKey_Params
{
};

// Function UDKGame.DunDefViewportInput.PlayCantJoinSound
struct UDunDefViewportInput_PlayCantJoinSound_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.UnHideAdditionalAttachments
struct ADunDefWeapon_Crossbow_UnHideAdditionalAttachments_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.ClearAttachedComponents
struct ADunDefWeapon_Crossbow_ClearAttachedComponents_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.SetWeaponSpeedMultiplier
struct ADunDefWeapon_Crossbow_SetWeaponSpeedMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.UsedAbility
struct ADunDefWeapon_Crossbow_UsedAbility_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetReloadPercent
struct ADunDefWeapon_Crossbow_GetReloadPercent_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetMaxAmmo
struct ADunDefWeapon_Crossbow_GetMaxAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetAmmo
struct ADunDefWeapon_Crossbow_GetAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetAmmoPercent
struct ADunDefWeapon_Crossbow_GetAmmoPercent_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.UsesAmmo
struct ADunDefWeapon_Crossbow_UsesAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.DetachWeapon
struct ADunDefWeapon_Crossbow_DetachWeapon_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.Activate
struct ADunDefWeapon_Crossbow_Activate_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.CheckAmmo
struct ADunDefWeapon_Crossbow_CheckAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.CustomFire
struct ADunDefWeapon_Crossbow_CustomFire_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.AttachWeaponTo
struct ADunDefWeapon_Crossbow_AttachWeaponTo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.MoveComponents
struct ADunDefWeapon_Crossbow_MoveComponents_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.StoppedFire
struct ADunDefWeapon_Crossbow_StoppedFire_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.StartedFire
struct ADunDefWeapon_Crossbow_StartedFire_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetTaggedComponent
struct ADunDefWeapon_Crossbow_GetTaggedComponent_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.ServerReload
struct ADunDefWeapon_Crossbow_ServerReload_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.ServerStopReload
struct ADunDefWeapon_Crossbow_ServerStopReload_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.StartFire
struct ADunDefWeapon_Crossbow_StartFire_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.HasAnyClipAmmo
struct ADunDefWeapon_Crossbow_HasAnyClipAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.HandleFinishedFiring
struct ADunDefWeapon_Crossbow_HandleFinishedFiring_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.ExtraRefireCheckTimer
struct ADunDefWeapon_Crossbow_ExtraRefireCheckTimer_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.CheckReloadFinished
struct ADunDefWeapon_Crossbow_CheckReloadFinished_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.StopReload
struct ADunDefWeapon_Crossbow_StopReload_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.Reload
struct ADunDefWeapon_Crossbow_Reload_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.NeedsReload
struct ADunDefWeapon_Crossbow_NeedsReload_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.PlayNoReloadAllowedSound
struct ADunDefWeapon_Crossbow_PlayNoReloadAllowedSound_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetReloadingColors
struct ADunDefWeapon_Crossbow_GetReloadingColors_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetProtonChargeBlastDamageMultiplier
struct ADunDefWeapon_Crossbow_GetProtonChargeBlastDamageMultiplier_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.IsReloading
struct ADunDefWeapon_Crossbow_IsReloading_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetReloadSpeed
struct ADunDefWeapon_Crossbow_GetReloadSpeed_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetTotalAmmo
struct ADunDefWeapon_Crossbow_GetTotalAmmo_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.GetNumProjectiles
struct ADunDefWeapon_Crossbow_GetNumProjectiles_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.PostBeginPlay
struct ADunDefWeapon_Crossbow_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.PlayedShootAnimation
struct ADunDefWeapon_Crossbow_PlayedShootAnimation_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.InitializeForHeroEquipment
struct ADunDefWeapon_Crossbow_InitializeForHeroEquipment_Params
{
};

// Function UDKGame.DunDefWeapon_Crossbow.ExecReplicatedFunction
struct ADunDefWeapon_Crossbow_ExecReplicatedFunction_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.DoAttackForceFeedback
struct ADunDefWeapon_MagicStaff_DoAttackForceFeedback_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.SpawnKnockbackDecal
struct ADunDefWeapon_MagicStaff_SpawnKnockbackDecal_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.GetProjectileSpawnTransformation
struct ADunDefWeapon_MagicStaff_GetProjectileSpawnTransformation_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.ShootProjectiles
struct ADunDefWeapon_MagicStaff_ShootProjectiles_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.CustomFire
struct ADunDefWeapon_MagicStaff_CustomFire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.ShouldRefire
struct ADunDefWeapon_MagicStaff_ShouldRefire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.StopFire
struct ADunDefWeapon_MagicStaff_StopFire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.StartFire
struct ADunDefWeapon_MagicStaff_StartFire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.GetChargeSpeed
struct ADunDefWeapon_MagicStaff_GetChargeSpeed_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.GetTotalKnockbackMomentum
struct ADunDefWeapon_MagicStaff_GetTotalKnockbackMomentum_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.GetTotalKnockbackRange
struct ADunDefWeapon_MagicStaff_GetTotalKnockbackRange_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.FireAmmunition
struct ADunDefWeapon_MagicStaff_FireAmmunition_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.EndFire
struct ADunDefWeapon_MagicStaff_EndFire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.BeginFire
struct ADunDefWeapon_MagicStaff_BeginFire_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.DetachWeapon
struct ADunDefWeapon_MagicStaff_DetachWeapon_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.RemoveChargeEffects
struct ADunDefWeapon_MagicStaff_RemoveChargeEffects_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.AttachChargeEffects
struct ADunDefWeapon_MagicStaff_AttachChargeEffects_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.AttachWeaponTo
struct ADunDefWeapon_MagicStaff_AttachWeaponTo_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.PostBeginPlay
struct ADunDefWeapon_MagicStaff_PostBeginPlay_Params
{
};

// Function UDKGame.DunDefWeapon_MagicStaff.ReplicatedEvent
struct ADunDefWeapon_MagicStaff_ReplicatedEvent_Params
{
};

// Function UDKGame.DunDefWeapon_MonkSpear.Tick
struct ADunDefWeapon_MonkSpear_Tick_Params
{
};

// Function UDKGame.DunDefWeapon_MonkSpear.GetProjectileDamage
struct ADunDefWeapon_MonkSpear_GetProjectileDamage_Params
{
};

// Function UDKGame.DunDefWeapon_MonkSpear.StopFire
struct ADunDefWeapon_MonkSpear_StopFire_Params
{
};

// Function UDKGame.DunDefWeapon_MonkSpear.StartFire
struct ADunDefWeapon_MonkSpear_StartFire_Params
{
};

// Function UDKGame.DunDefWeapon_MonkSpear.CustomFire
struct ADunDefWeapon_MonkSpear_CustomFire_Params
{
};

// Function UDKGame.GameInfo_Competitive.ScoreKill
struct AGameInfo_Competitive_ScoreKill_Params
{
};

// Function UDKGame.GameInfo_Competitive.GetPlayerEnemyKillStat
struct AGameInfo_Competitive_GetPlayerEnemyKillStat_Params
{
};

// Function UDKGame.GameInfo_Competitive.GetEnemyTargetingTeam
struct AGameInfo_Competitive_GetEnemyTargetingTeam_Params
{
};

// Function UDKGame.GameInfo_Competitive.PawnPossessedBy
struct AGameInfo_Competitive_PawnPossessedBy_Params
{
};

// Function UDKGame.GameInfo_Competitive.IsCompetitiveGameType
struct AGameInfo_Competitive_IsCompetitiveGameType_Params
{
};

// Function UDKGame.GameInfo_Competitive.CheckScore
struct AGameInfo_Competitive_CheckScore_Params
{
};

// Function UDKGame.GameInfo_Competitive.Killed
struct AGameInfo_Competitive_Killed_Params
{
};

// Function UDKGame.GameInfo_Competitive.PostBeginPlay
struct AGameInfo_Competitive_PostBeginPlay_Params
{
};

// Function UDKGame.GameInfo_Competitive.DoPlayerLeaving
struct AGameInfo_Competitive_DoPlayerLeaving_Params
{
};

// Function UDKGame.GameInfo_Competitive.GetFreeTargetingTeam
struct AGameInfo_Competitive_GetFreeTargetingTeam_Params
{
};

// Function UDKGame.GameInfo_Competitive.SpawnPlayerController
struct AGameInfo_Competitive_SpawnPlayerController_Params
{
};

// Function UDKGame.GameInfo_Special.InitGameReplicationInfo
struct AGameInfo_Special_InitGameReplicationInfo_Params
{
};

// Function UDKGame.GameInfo_Special.DoWaveSkipping
struct AGameInfo_Special_DoWaveSkipping_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.HasEnoughBankManaForUpgrade
struct UUI_EquipmentInfo_New_HasEnoughBankManaForUpgrade_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.IsProUpgradeMode
struct UUI_EquipmentInfo_New_IsProUpgradeMode_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.UIPostRender
struct UUI_EquipmentInfo_New_UIPostRender_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.NotifyWidgetClicked
struct UUI_EquipmentInfo_New_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.CloseAllHeroUI
struct UUI_EquipmentInfo_New_CloseAllHeroUI_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.OnReceivedInputKey
struct UUI_EquipmentInfo_New_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.SceneActivated
struct UUI_EquipmentInfo_New_SceneActivated_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.EditBoxPopUpCompleted
struct UUI_EquipmentInfo_New_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.CloseWithAnimation
struct UUI_EquipmentInfo_New_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.SceneDeactivated
struct UUI_EquipmentInfo_New_SceneDeactivated_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.ResetOnExits
struct UUI_EquipmentInfo_New_ResetOnExits_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.GetHero
struct UUI_EquipmentInfo_New_GetHero_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.InitForEquipment
struct UUI_EquipmentInfo_New_InitForEquipment_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.ShowUpgradePanel
struct UUI_EquipmentInfo_New_ShowUpgradePanel_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.UpdateForgeValues
struct UUI_EquipmentInfo_New_UpdateForgeValues_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.UpdateInvestment
struct UUI_EquipmentInfo_New_UpdateInvestment_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.HasAnyManaPower
struct UUI_EquipmentInfo_New_HasAnyManaPower_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.UpdateEffectPanel
struct UUI_EquipmentInfo_New_UpdateEffectPanel_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.Update
struct UUI_EquipmentInfo_New_Update_Params
{
};

// Function UDKGame.UI_EquipmentInfo_New.GetCloseAnimation
struct UUI_EquipmentInfo_New_GetCloseAnimation_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetHealAmount
struct UHeroEquipment_Familiar_WithProjectileAI_GetHealAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.OnDunDefProjectileImpacted
struct UHeroEquipment_Familiar_WithProjectileAI_OnDunDefProjectileImpacted_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.NotifyEquipment_PawnTookDamage
struct UHeroEquipment_Familiar_WithProjectileAI_NotifyEquipment_PawnTookDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_WithProjectileAI_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.ShootProjectile
struct UHeroEquipment_Familiar_WithProjectileAI_ShootProjectile_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetMuzzleTransformation
struct UHeroEquipment_Familiar_WithProjectileAI_GetMuzzleTransformation_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetWeaponDamage
struct UHeroEquipment_Familiar_WithProjectileAI_GetWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_Familiar_WithProjectileAI_ApplyPrimaryDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetEquipmentStatValue
struct UHeroEquipment_Familiar_WithProjectileAI_GetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.AddRandomizeValues
struct UHeroEquipment_Familiar_WithProjectileAI_AddRandomizeValues_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.AllowStatLevelUp
struct UHeroEquipment_Familiar_WithProjectileAI_AllowStatLevelUp_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetAttackInterval
struct UHeroEquipment_Familiar_WithProjectileAI_GetAttackInterval_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetElementalDamageType
struct UHeroEquipment_Familiar_WithProjectileAI_GetElementalDamageType_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetProjectileElementalDamage
struct UHeroEquipment_Familiar_WithProjectileAI_GetProjectileElementalDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetProjectileDamage
struct UHeroEquipment_Familiar_WithProjectileAI_GetProjectileDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetProjectileSpeed
struct UHeroEquipment_Familiar_WithProjectileAI_GetProjectileSpeed_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetNumProjectiles
struct UHeroEquipment_Familiar_WithProjectileAI_GetNumProjectiles_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_WithProjectileAI_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetDesiredDirection
struct UHeroEquipment_Familiar_WithProjectileAI_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.ShutDown
struct UHeroEquipment_Familiar_WithProjectileAI_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.AttachedComponent
struct UHeroEquipment_Familiar_WithProjectileAI_AttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.UpdateAI
struct UHeroEquipment_Familiar_WithProjectileAI_UpdateAI_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.UpdateDelayedShots
struct UHeroEquipment_Familiar_WithProjectileAI_UpdateDelayedShots_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.TickedByPawn
struct UHeroEquipment_Familiar_WithProjectileAI_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetBestTarget
struct UHeroEquipment_Familiar_WithProjectileAI_GetBestTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_WithProjectileAI.GetBestHealingTarget
struct UHeroEquipment_Familiar_WithProjectileAI_GetBestHealingTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.AttachedComponent
struct UHeroEquipment_Familiar_Melee_AttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_Melee_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.ShutDown
struct UHeroEquipment_Familiar_Melee_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.NotifyEquipment_PawnJumped
struct UHeroEquipment_Familiar_Melee_NotifyEquipment_PawnJumped_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.NotifyEquipment_PawnTookDamage
struct UHeroEquipment_Familiar_Melee_NotifyEquipment_PawnTookDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.isEnemyInRange
struct UHeroEquipment_Familiar_Melee_isEnemyInRange_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.UpdateAI
struct UHeroEquipment_Familiar_Melee_UpdateAI_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.GetHealMultiplier
struct UHeroEquipment_Familiar_Melee_GetHealMultiplier_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.GetMomentumMultiplier
struct UHeroEquipment_Familiar_Melee_GetMomentumMultiplier_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.UpdateAttackSwing
struct UHeroEquipment_Familiar_Melee_UpdateAttackSwing_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.AddToSwingHurtList
struct UHeroEquipment_Familiar_Melee_AddToSwingHurtList_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_Melee.TickedByPawn
struct UHeroEquipment_Familiar_Melee_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_MoneyGiver.GetWeaponDamage
struct UHeroEquipment_Familiar_MoneyGiver_GetWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_MoneyGiver.GetEquipmentStatValue
struct UHeroEquipment_Familiar_MoneyGiver_GetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_MoneyGiver.GetManaMultiplier
struct UHeroEquipment_Familiar_MoneyGiver_GetManaMultiplier_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_MoneyGiver.NotifyEquipment_WeaponDidDamage
struct UHeroEquipment_Familiar_MoneyGiver_NotifyEquipment_WeaponDidDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.AddRandomizeValues
struct UHeroEquipment_Familiar_PawnBooster_AddRandomizeValues_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.NotifyOfBoostedRemoval
struct UHeroEquipment_Familiar_PawnBooster_NotifyOfBoostedRemoval_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.AttachedComponent
struct UHeroEquipment_Familiar_PawnBooster_AttachedComponent_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetStatLevelUpAmountIterations
struct UHeroEquipment_Familiar_PawnBooster_GetStatLevelUpAmountIterations_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetNextStatLevelUpValue
struct UHeroEquipment_Familiar_PawnBooster_GetNextStatLevelUpValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.InitFromNetInfo
struct UHeroEquipment_Familiar_PawnBooster_InitFromNetInfo_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.CheckStatLevelUpIterations
struct UHeroEquipment_Familiar_PawnBooster_CheckStatLevelUpIterations_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.AllowStatLevelUp
struct UHeroEquipment_Familiar_PawnBooster_AllowStatLevelUp_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.NotifyEquipment_PawnAttacked
struct UHeroEquipment_Familiar_PawnBooster_NotifyEquipment_PawnAttacked_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_PawnBooster_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetDesiredDirection
struct UHeroEquipment_Familiar_PawnBooster_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.TickedByPawn
struct UHeroEquipment_Familiar_PawnBooster_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetFurthestAdditionalTarget
struct UHeroEquipment_Familiar_PawnBooster_GetFurthestAdditionalTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.UpdateAdditionalBoostTargets
struct UHeroEquipment_Familiar_PawnBooster_UpdateAdditionalBoostTargets_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.RemoveAllTargets
struct UHeroEquipment_Familiar_PawnBooster_RemoveAllTargets_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.ShutDown
struct UHeroEquipment_Familiar_PawnBooster_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetBestAdditionalBoostTarget
struct UHeroEquipment_Familiar_PawnBooster_GetBestAdditionalBoostTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetBestTarget
struct UHeroEquipment_Familiar_PawnBooster_GetBestTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetBoostRange
struct UHeroEquipment_Familiar_PawnBooster_GetBoostRange_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetPawnBoostAmount
struct UHeroEquipment_Familiar_PawnBooster_GetPawnBoostAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.HasPawnBoostingType
struct UHeroEquipment_Familiar_PawnBooster_HasPawnBoostingType_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PawnBooster.GetBoostedTargets
struct UHeroEquipment_Familiar_PawnBooster_GetBoostedTargets_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.ShutDown
struct UHeroEquipment_Familiar_PlayerHealer_ShutDown_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.NotifyEquipment_AnimNotifyAttachment
struct UHeroEquipment_Familiar_PlayerHealer_NotifyEquipment_AnimNotifyAttachment_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.DoHealing
struct UHeroEquipment_Familiar_PlayerHealer_DoHealing_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetWeaponDamage
struct UHeroEquipment_Familiar_PlayerHealer_GetWeaponDamage_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_Familiar_PlayerHealer_ApplyPrimaryDamageMultiplierDisplay_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetEquipmentStatValue
struct UHeroEquipment_Familiar_PlayerHealer_GetEquipmentStatValue_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetAttackInterval
struct UHeroEquipment_Familiar_PlayerHealer_GetAttackInterval_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetHealAmount
struct UHeroEquipment_Familiar_PlayerHealer_GetHealAmount_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.NotifyEquipment_PawnAttacked
struct UHeroEquipment_Familiar_PlayerHealer_NotifyEquipment_PawnAttacked_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_PlayerHealer_GetDesiredSphereRotationalPlacement_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetDesiredDirection
struct UHeroEquipment_Familiar_PlayerHealer_GetDesiredDirection_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.UpdateAI
struct UHeroEquipment_Familiar_PlayerHealer_UpdateAI_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.TickedByPawn
struct UHeroEquipment_Familiar_PlayerHealer_TickedByPawn_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.GetBestTarget
struct UHeroEquipment_Familiar_PlayerHealer_GetBestTarget_Params
{
};

// Function UDKGame.HeroEquipment_Familiar_PlayerHealer.AttachedComponent
struct UHeroEquipment_Familiar_PlayerHealer_AttachedComponent_Params
{
};

// Function UDKGame.IActorEventHandler.AdjustDealtDamage
struct UIActorEventHandler_AdjustDealtDamage_Params
{
};

// Function UDKGame.IActorEventHandler.ReportBuffRemoved
struct UIActorEventHandler_ReportBuffRemoved_Params
{
};

// Function UDKGame.IActorEventHandler.ReportBuffAdded
struct UIActorEventHandler_ReportBuffAdded_Params
{
};

// Function UDKGame.IActorEventHandler.ReportActorDealtDamage
struct UIActorEventHandler_ReportActorDealtDamage_Params
{
};

// Function UDKGame.IActorEventHandler.ReportTookDamage
struct UIActorEventHandler_ReportTookDamage_Params
{
};

// Function UDKGame.IActorEventHandler.ReportHealedActor
struct UIActorEventHandler_ReportHealedActor_Params
{
};

// Function UDKGame.IActorEventHandler.ReportKilledActor
struct UIActorEventHandler_ReportKilledActor_Params
{
};

// Function UDKGame.IBuffModifierInterface.GetStatModifierObject
struct UIBuffModifierInterface_GetStatModifierObject_Params
{
};

// Function UDKGame.IBuffModifierInterface.GetStatValueByTag
struct UIBuffModifierInterface_GetStatValueByTag_Params
{
};

// Function UDKGame.IBuffModifierInterface.InitalizeForBuff
struct UIBuffModifierInterface_InitalizeForBuff_Params
{
};

// Function UDKGame.IHeroChangedInterface.HeroChanged
struct UIHeroChangedInterface_HeroChanged_Params
{
};

// Function UDKGame.LastDamageInfoFilter.IsActorAllowed
struct ULastDamageInfoFilter_IsActorAllowed_Params
{
};

// Function UDKGame.LastDamageInfoFilter.IsAllowed
struct ULastDamageInfoFilter_IsAllowed_Params
{
};

// Function UDKGame.UI_PlayerShop.SceneActivated
struct UUI_PlayerShop_SceneActivated_Params
{
};

// Function UDKGame.UI_PlayerShop.EditBoxPopUpCompleted
struct UUI_PlayerShop_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.UI_PlayerShop.CloseWithAnimation
struct UUI_PlayerShop_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_PlayerShop.SceneDeactivated
struct UUI_PlayerShop_SceneDeactivated_Params
{
};

// Function UDKGame.UI_PlayerShop.ItemUpdateOccured
struct UUI_PlayerShop_ItemUpdateOccured_Params
{
};

// Function UDKGame.UI_PlayerShop.FolderUpdateOccured
struct UUI_PlayerShop_FolderUpdateOccured_Params
{
};

// Function UDKGame.UI_PlayerShop.FolderDeletionOccured
struct UUI_PlayerShop_FolderDeletionOccured_Params
{
};

// Function UDKGame.UI_PlayerShop.EntryEnabledCheck
struct UUI_PlayerShop_EntryEnabledCheck_Params
{
};

// Function UDKGame.UI_PlayerShop.NotifyWidgetClicked
struct UUI_PlayerShop_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_PlayerShop.MoveUpAFolder
struct UUI_PlayerShop_MoveUpAFolder_Params
{
};

// Function UDKGame.UI_PlayerShop.UpdateItemPath
struct UUI_PlayerShop_UpdateItemPath_Params
{
};

// Function UDKGame.UI_PlayerShop.NotifyDraggedEvent
struct UUI_PlayerShop_NotifyDraggedEvent_Params
{
};

// Function UDKGame.UI_PlayerShop.SupportsDraggedOntoItem
struct UUI_PlayerShop_SupportsDraggedOntoItem_Params
{
};

// Function UDKGame.UI_PlayerShop.Update
struct UUI_PlayerShop_Update_Params
{
};

// Function UDKGame.UI_PlayerShop.RefreshEquipmentList
struct UUI_PlayerShop_RefreshEquipmentList_Params
{
};

// Function UDKGame.ScrollablePopupParent.RenderPopup
struct UScrollablePopupParent_RenderPopup_Params
{
};

// Function UDKGame.UI_Trade.OnReceivedInputKey
struct UUI_Trade_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_Trade.ShowEquipmentInfo
struct UUI_Trade_ShowEquipmentInfo_Params
{
};

// Function UDKGame.UI_Trade.EquipmentEntrySelected
struct UUI_Trade_EquipmentEntrySelected_Params
{
};

// Function UDKGame.UI_Trade.RefreshedList
struct UUI_Trade_RefreshedList_Params
{
};

// Function UDKGame.UI_Trade.Update
struct UUI_Trade_Update_Params
{
};

// Function UDKGame.UI_Trade.RefreshEquipmentLists
struct UUI_Trade_RefreshEquipmentLists_Params
{
};

// Function UDKGame.UI_Trade.RemoveEquipment
struct UUI_Trade_RemoveEquipment_Params
{
};

// Function UDKGame.UI_Trade.EditBoxPopUpCompleted
struct UUI_Trade_EditBoxPopUpCompleted_Params
{
};

// Function UDKGame.UI_Trade.NotifyWidgetClicked
struct UUI_Trade_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_Trade.PostInitialSceneUpdate
struct UUI_Trade_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_Trade.GetHero
struct UUI_Trade_GetHero_Params
{
};

// Function UDKGame.UI_Trade.InitializeForTradeManager
struct UUI_Trade_InitializeForTradeManager_Params
{
};

// Function UDKGame.UI_Trade.NotifyDraggedEvent
struct UUI_Trade_NotifyDraggedEvent_Params
{
};

// Function UDKGame.UI_Trade.SceneActivated
struct UUI_Trade_SceneActivated_Params
{
};

// Function UDKGame.UI_Trade.SceneDeactivated
struct UUI_Trade_SceneDeactivated_Params
{
};

// Function UDKGame.UI_Trade.UpdateManaToDrop
struct UUI_Trade_UpdateManaToDrop_Params
{
};

// Function UDKGame.UI_Trade.GetTotalMana
struct UUI_Trade_GetTotalMana_Params
{
};

// Function UDKGame.UI_Trade.GetMaxTradeMana
struct UUI_Trade_GetMaxTradeMana_Params
{
};

// Function UDKGame.UI_CharacterSelect.AcceptedSaveWarning
struct UUI_CharacterSelect_AcceptedSaveWarning_Params
{
};

// Function UDKGame.UI_CharacterSelect.NotifyWidgetClicked
struct UUI_CharacterSelect_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_CharacterSelect.IsGamepadOwned
struct UUI_CharacterSelect_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_CharacterSelect.AllowInputAlias
struct UUI_CharacterSelect_AllowInputAlias_Params
{
};

// Function UDKGame.UI_CharacterSelect.SetCustomValueForKismet
struct UUI_CharacterSelect_SetCustomValueForKismet_Params
{
};

// Function UDKGame.UI_CharacterSelect.OnReceivedInputKey
struct UUI_CharacterSelect_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_CharacterSelect.GetFirstFreeCharacterBox
struct UUI_CharacterSelect_GetFirstFreeCharacterBox_Params
{
};

// Function UDKGame.UI_CharacterSelect.CanAddPlayer
struct UUI_CharacterSelect_CanAddPlayer_Params
{
};

// Function UDKGame.UI_CharacterSelect.StartLocalSession
struct UUI_CharacterSelect_StartLocalSession_Params
{
};

// Function UDKGame.UI_CharacterSelect.OnLocalSessionCreated
struct UUI_CharacterSelect_OnLocalSessionCreated_Params
{
};

// Function UDKGame.UI_CharacterSelect.CreatePlayerForController
struct UUI_CharacterSelect_CreatePlayerForController_Params
{
};

// Function UDKGame.UI_CharacterSelect.NotifyPlayerRemoved
struct UUI_CharacterSelect_NotifyPlayerRemoved_Params
{
};

// Function UDKGame.UI_CharacterSelect.CheckHeroForPlayer
struct UUI_CharacterSelect_CheckHeroForPlayer_Params
{
};

// Function UDKGame.UI_CharacterSelect.GetCharacterForPlayerIndex
struct UUI_CharacterSelect_GetCharacterForPlayerIndex_Params
{
};

// Function UDKGame.UI_CharacterSelect.UpdateCharacterForIndex
struct UUI_CharacterSelect_UpdateCharacterForIndex_Params
{
};

// Function UDKGame.UI_CharacterSelect.ChoseHero
struct UUI_CharacterSelect_ChoseHero_Params
{
};

// Function UDKGame.UI_CharacterSelect.UpdatePlayerSelections
struct UUI_CharacterSelect_UpdatePlayerSelections_Params
{
};

// Function UDKGame.UI_CharacterSelect.AnyPlayersSelected
struct UUI_CharacterSelect_AnyPlayersSelected_Params
{
};

// Function UDKGame.UI_CharacterSelect.ChoseCharacter
struct UUI_CharacterSelect_ChoseCharacter_Params
{
};

// Function UDKGame.UI_CharacterSelect.StartButtonClicked
struct UUI_CharacterSelect_StartButtonClicked_Params
{
};

// Function UDKGame.UI_CharacterSelect.MenuButtonClicked
struct UUI_CharacterSelect_MenuButtonClicked_Params
{
};

// Function UDKGame.UI_CharacterSelect.BackButtonClicked
struct UUI_CharacterSelect_BackButtonClicked_Params
{
};

// Function UDKGame.UI_CharacterSelect.HandleKeyboardPlayerRemoved
struct UUI_CharacterSelect_HandleKeyboardPlayerRemoved_Params
{
};

// Function UDKGame.UI_CharacterSelect.GetPlayerForIndex
struct UUI_CharacterSelect_GetPlayerForIndex_Params
{
};

// Function UDKGame.UI_CharacterSelect.GetChooseCharacterForPlayer
struct UUI_CharacterSelect_GetChooseCharacterForPlayer_Params
{
};

// Function UDKGame.UI_CharacterSelect.Update
struct UUI_CharacterSelect_Update_Params
{
};

// Function UDKGame.UI_CharacterSelect.NotifyControllerStatusChanged
struct UUI_CharacterSelect_NotifyControllerStatusChanged_Params
{
};

// Function UDKGame.UI_CharacterSelect.PostInitialSceneUpdate
struct UUI_CharacterSelect_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_CharacterSelect.SceneActivated
struct UUI_CharacterSelect_SceneActivated_Params
{
};

// Function UDKGame.UI_CharacterSelect.SceneDeactivated
struct UUI_CharacterSelect_SceneDeactivated_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.Update
struct UUIImage_PlayerSelect_Update_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.Destroyed
struct UUIImage_PlayerSelect_Destroyed_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.Created
struct UUIImage_PlayerSelect_Created_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.Unselected
struct UUIImage_PlayerSelect_Unselected_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.ChoseHero
struct UUIImage_PlayerSelect_ChoseHero_Params
{
};

// Function UDKGame.UIImage_PlayerSelect.Selected
struct UUIImage_PlayerSelect_Selected_Params
{
};

// Function UDKGame.UI_CreateHeroBase.ConfirmCreateHero
struct UUI_CreateHeroBase_ConfirmCreateHero_Params
{
};

// Function UDKGame.UI_CreateHeroBase.CreateHero
struct UUI_CreateHeroBase_CreateHero_Params
{
};

// Function UDKGame.UI_CreateHeroBase.FindOutAllAboutHeroes
struct UUI_CreateHeroBase_FindOutAllAboutHeroes_Params
{
};

// Function UDKGame.UI_CreateHeroBase.GetHeroManager
struct UUI_CreateHeroBase_GetHeroManager_Params
{
};

// Function UDKGame.UI_CreateHero.IsKeyboardOwned
struct UUI_CreateHero_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_CreateHero.IsGamepadOwned
struct UUI_CreateHero_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_CreateHero.EvaluateKeyboardInput
struct UUI_CreateHero_EvaluateKeyboardInput_Params
{
};

// Function UDKGame.UI_CreateHero.FindNextSubstring
struct UUI_CreateHero_FindNextSubstring_Params
{
};

// Function UDKGame.UI_CreateHero.RemoveCharacter
struct UUI_CreateHero_RemoveCharacter_Params
{
};

// Function UDKGame.UI_CreateHero.SceneDeactivated
struct UUI_CreateHero_SceneDeactivated_Params
{
};

// Function UDKGame.UI_CreateHero.Update
struct UUI_CreateHero_Update_Params
{
};

// Function UDKGame.UI_CreateHero.CloseWithAnimation
struct UUI_CreateHero_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_CreateHero.Exit
struct UUI_CreateHero_Exit_Params
{
};

// Function UDKGame.UI_CreateHero.FinishEditingHero
struct UUI_CreateHero_FinishEditingHero_Params
{
};

// Function UDKGame.UI_CreateHero.KeyboardInputRejected
struct UUI_CreateHero_KeyboardInputRejected_Params
{
};

// Function UDKGame.UI_CreateHero.NotifyValueChanged
struct UUI_CreateHero_NotifyValueChanged_Params
{
};

// Function UDKGame.UI_CreateHero.NotifyButtonClicked
struct UUI_CreateHero_NotifyButtonClicked_Params
{
};

// Function UDKGame.UI_CreateHero.OnReceivedInputKey
struct UUI_CreateHero_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_CreateHero.InterceptedInputKey
struct UUI_CreateHero_InterceptedInputKey_Params
{
};

// Function UDKGame.UI_CreateHero.EditHero
struct UUI_CreateHero_EditHero_Params
{
};

// Function UDKGame.UI_CreateHero.GetCharacterForPlayerIndex
struct UUI_CreateHero_GetCharacterForPlayerIndex_Params
{
};

// Function UDKGame.UI_CreateHero.SetRandomName
struct UUI_CreateHero_SetRandomName_Params
{
};

// Function UDKGame.UI_CreateHero.UpdateRenderCharacter
struct UUI_CreateHero_UpdateRenderCharacter_Params
{
};

// Function UDKGame.UI_CreateHero.SceneActivated
struct UUI_CreateHero_SceneActivated_Params
{
};

// Function UDKGame.UI_HeroInfoNew.OnReceivedInputKey
struct UUI_HeroInfoNew_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_HeroInfoNew.RemoveAllGear
struct UUI_HeroInfoNew_RemoveAllGear_Params
{
};

// Function UDKGame.UI_HeroInfoNew.CloseEquipmentScenes
struct UUI_HeroInfoNew_CloseEquipmentScenes_Params
{
};

// Function UDKGame.UI_HeroInfoNew.GetTotalMana
struct UUI_HeroInfoNew_GetTotalMana_Params
{
};

// Function UDKGame.UI_HeroInfoNew.Update
struct UUI_HeroInfoNew_Update_Params
{
};

// Function UDKGame.UI_HeroInfoNew.CanLevelUpStat
struct UUI_HeroInfoNew_CanLevelUpStat_Params
{
};

// Function UDKGame.UI_HeroInfoNew.RemovePoint
struct UUI_HeroInfoNew_RemovePoint_Params
{
};

// Function UDKGame.UI_HeroInfoNew.SpendPoint
struct UUI_HeroInfoNew_SpendPoint_Params
{
};

// Function UDKGame.UI_HeroInfoNew.AllocatePointsToStats
struct UUI_HeroInfoNew_AllocatePointsToStats_Params
{
};

// Function UDKGame.UI_HeroInfoNew.ResetLevelUpAllocations
struct UUI_HeroInfoNew_ResetLevelUpAllocations_Params
{
};

// Function UDKGame.UI_HeroInfoNew.UpdateLevelUp
struct UUI_HeroInfoNew_UpdateLevelUp_Params
{
};

// Function UDKGame.UI_HeroInfoNew.FinishLevelUp
struct UUI_HeroInfoNew_FinishLevelUp_Params
{
};

// Function UDKGame.UI_HeroInfoNew.ShowLevelUpAvailable
struct UUI_HeroInfoNew_ShowLevelUpAvailable_Params
{
};

// Function UDKGame.UI_HeroInfoNew.ShowInventory
struct UUI_HeroInfoNew_ShowInventory_Params
{
};

// Function UDKGame.UI_HeroInfoNew.HideInventory
struct UUI_HeroInfoNew_HideInventory_Params
{
};

// Function UDKGame.UI_HeroInfoNew.NotifyWidgetClicked
struct UUI_HeroInfoNew_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_HeroInfoNew.InitializeForHero
struct UUI_HeroInfoNew_InitializeForHero_Params
{
};

// Function UDKGame.UI_HeroInfoNew.CloseWithAnimation
struct UUI_HeroInfoNew_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_HeroInfoNew.SceneActivated
struct UUI_HeroInfoNew_SceneActivated_Params
{
};

// Function UDKGame.UI_CreateHeroInGame.NotifyButtonClicked
struct UUI_CreateHeroInGame_NotifyButtonClicked_Params
{
};

// Function UDKGame.UI_CreateHeroInGame.SceneActivated
struct UUI_CreateHeroInGame_SceneActivated_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.SceneDeactivated
struct UUI_CustomizeCrystal_SceneDeactivated_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.ShutDown
struct UUI_CustomizeCrystal_ShutDown_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.SetCoreIndex
struct UUI_CustomizeCrystal_SetCoreIndex_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.Update
struct UUI_CustomizeCrystal_Update_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.OnReceivedInputKey
struct UUI_CustomizeCrystal_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.NotifyValueChanged
struct UUI_CustomizeCrystal_NotifyValueChanged_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.UpdateColors
struct UUI_CustomizeCrystal_UpdateColors_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.NotifyButtonClicked
struct UUI_CustomizeCrystal_NotifyButtonClicked_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.UISetup
struct UUI_CustomizeCrystal_UISetup_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.LevelSetup
struct UUI_CustomizeCrystal_LevelSetup_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.CoreSetup
struct UUI_CustomizeCrystal_CoreSetup_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.GetHeroManager
struct UUI_CustomizeCrystal_GetHeroManager_Params
{
};

// Function UDKGame.UI_CustomizeCrystal.SceneActivated
struct UUI_CustomizeCrystal_SceneActivated_Params
{
};

// Function UDKGame.UI_DropMana.PostInitialize
struct UUI_DropMana_PostInitialize_Params
{
};

// Function UDKGame.UI_DropMana.OnReceivedInputKey
struct UUI_DropMana_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_DropMana.NotifyWidgetClicked
struct UUI_DropMana_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_DropMana.DropBankedMana
struct UUI_DropMana_DropBankedMana_Params
{
};

// Function UDKGame.UI_DropMana.Update
struct UUI_DropMana_Update_Params
{
};

// Function UDKGame.UI_DropMana.SceneActivated
struct UUI_DropMana_SceneActivated_Params
{
};

// Function UDKGame.UI_DropMana.SceneDeactivated
struct UUI_DropMana_SceneDeactivated_Params
{
};

// Function UDKGame.UI_DropMana.UpdateManaToDrop
struct UUI_DropMana_UpdateManaToDrop_Params
{
};

// Function UDKGame.UI_DropMana.GetTotalMana
struct UUI_DropMana_GetTotalMana_Params
{
};

// Function UDKGame.UI_EditboxPopup.SetMinimumCharacters
struct UUI_EditboxPopup_SetMinimumCharacters_Params
{
};

// Function UDKGame.UI_EditboxPopup.IsKeyboardOwned
struct UUI_EditboxPopup_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_EditboxPopup.IsGamepadOwned
struct UUI_EditboxPopup_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_EditboxPopup.ClickedEditBox
struct UUI_EditboxPopup_ClickedEditBox_Params
{
};

// Function UDKGame.UI_EditboxPopup.OnReceivedInputKey
struct UUI_EditboxPopup_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_EditboxPopup.PostInitialSceneUpdate
struct UUI_EditboxPopup_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_EditboxPopup.SceneDeactivated
struct UUI_EditboxPopup_SceneDeactivated_Params
{
};

// Function UDKGame.UI_EditboxPopup.SceneActivated
struct UUI_EditboxPopup_SceneActivated_Params
{
};

// Function UDKGame.UI_EditboxPopup.ShowConsoleKeyboard
struct UUI_EditboxPopup_ShowConsoleKeyboard_Params
{
};

// Function UDKGame.UI_EditboxPopup.NotifyWidgetClicked
struct UUI_EditboxPopup_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_EditboxPopup.EvaluateKeyboardInput
struct UUI_EditboxPopup_EvaluateKeyboardInput_Params
{
};

// Function UDKGame.UI_EditboxPopup.Update
struct UUI_EditboxPopup_Update_Params
{
};

// Function UDKGame.UI_EditboxPopup.CloseWithAnimation
struct UUI_EditboxPopup_CloseWithAnimation_Params
{
};

// Function UDKGame.UI_EditboxPopup.SetOwnerAndDefaultString
struct UUI_EditboxPopup_SetOwnerAndDefaultString_Params
{
};

// Function UDKGame.UIScriptWidget_MaterialInstance.RenderGame
struct UUIScriptWidget_MaterialInstance_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_MaterialInstance.RenderEditor
struct UUIScriptWidget_MaterialInstance_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_MaterialInstance.SetMICVectorParam
struct UUIScriptWidget_MaterialInstance_SetMICVectorParam_Params
{
};

// Function UDKGame.UIScriptWidget_MaterialInstance.SetMICFloatParam
struct UUIScriptWidget_MaterialInstance_SetMICFloatParam_Params
{
};

// Function UDKGame.UIDataContainer_Equipment.GetHero
struct UUIDataContainer_Equipment_GetHero_Params
{
};

// Function UDKGame.UIDataContainer_Equipment.GetComparisonEquipment
struct UUIDataContainer_Equipment_GetComparisonEquipment_Params
{
};

// Function UDKGame.UIDataContainer_Equipment.GetEquipment
struct UUIDataContainer_Equipment_GetEquipment_Params
{
};

// Function UDKGame.UIDataContainer_Equipment.InitializeEquipmentData
struct UUIDataContainer_Equipment_InitializeEquipmentData_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.LostFocus
struct UUIScriptWidget_EquipmentStat_LostFocus_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.ButtonClicked
struct UUIScriptWidget_EquipmentStat_ButtonClicked_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.ApplyLevelUp
struct UUIScriptWidget_EquipmentStat_ApplyLevelUp_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetStatDescription
struct UUIScriptWidget_EquipmentStat_GetStatDescription_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetToolTipString
struct UUIScriptWidget_EquipmentStat_GetToolTipString_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetTextGradientColor
struct UUIScriptWidget_EquipmentStat_GetTextGradientColor_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetStatTextDrawColor
struct UUIScriptWidget_EquipmentStat_GetStatTextDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetScaleMultiplier
struct UUIScriptWidget_EquipmentStat_GetScaleMultiplier_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetBackgroundDrawColor
struct UUIScriptWidget_EquipmentStat_GetBackgroundDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.ApplyStatDisplayAdd
struct UUIScriptWidget_EquipmentStat_ApplyStatDisplayAdd_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.ApplyStatDisplayMult
struct UUIScriptWidget_EquipmentStat_ApplyStatDisplayMult_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetStatValue
struct UUIScriptWidget_EquipmentStat_GetStatValue_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetUpgradedStatValue
struct UUIScriptWidget_EquipmentStat_GetUpgradedStatValue_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.CheckAllowLevelup
struct UUIScriptWidget_EquipmentStat_CheckAllowLevelup_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.ShouldCensorEquipment
struct UUIScriptWidget_EquipmentStat_ShouldCensorEquipment_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.RenderGame
struct UUIScriptWidget_EquipmentStat_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.HasEnoughBankManaForUpgrade
struct UUIScriptWidget_EquipmentStat_HasEnoughBankManaForUpgrade_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.IsProUpgradeMode
struct UUIScriptWidget_EquipmentStat_IsProUpgradeMode_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetFocusedBGColor
struct UUIScriptWidget_EquipmentStat_GetFocusedBGColor_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetHero
struct UUIScriptWidget_EquipmentStat_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetEquipment
struct UUIScriptWidget_EquipmentStat_GetEquipment_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentStat.GetDataContainer
struct UUIScriptWidget_EquipmentStat_GetDataContainer_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.IsGamepadOwned
struct UUI_MultiplayerMenu_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.IsKeyboardOwned
struct UUI_MultiplayerMenu_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnQuickMatchJoinComplete
struct UUI_MultiplayerMenu_OnQuickMatchJoinComplete_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnCreateComplete
struct UUI_MultiplayerMenu_OnCreateComplete_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnDestroyForCancelComplete
struct UUI_MultiplayerMenu_OnDestroyForCancelComplete_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.CleanupSession
struct UUI_MultiplayerMenu_CleanupSession_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnCreateCancelled
struct UUI_MultiplayerMenu_OnCreateCancelled_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.ShowCancelCreateButton
struct UUI_MultiplayerMenu_ShowCancelCreateButton_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.DoQuickMatchCreate
struct UUI_MultiplayerMenu_DoQuickMatchCreate_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnQuickMatchCreatePrompt
struct UUI_MultiplayerMenu_OnQuickMatchCreatePrompt_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnCancelQuickMatchJoin
struct UUI_MultiplayerMenu_OnCancelQuickMatchJoin_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnCancelQuickMatchSearch
struct UUI_MultiplayerMenu_OnCancelQuickMatchSearch_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.JoinNextGame
struct UUI_MultiplayerMenu_JoinNextGame_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnQuickMatchSearchComplete
struct UUI_MultiplayerMenu_OnQuickMatchSearchComplete_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.StartQuickMatch
struct UUI_MultiplayerMenu_StartQuickMatch_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.Update
struct UUI_MultiplayerMenu_Update_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnReceivedInputKey
struct UUI_MultiplayerMenu_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnButtonClicked
struct UUI_MultiplayerMenu_OnButtonClicked_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.OnPrivateMatchConfirmClicked
struct UUI_MultiplayerMenu_OnPrivateMatchConfirmClicked_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.CreatePrivateMatch
struct UUI_MultiplayerMenu_CreatePrivateMatch_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.SetupDefaultOnlineSettings
struct UUI_MultiplayerMenu_SetupDefaultOnlineSettings_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.SceneDeactivated
struct UUI_MultiplayerMenu_SceneDeactivated_Params
{
};

// Function UDKGame.UI_MultiplayerMenu.SceneActivated
struct UUI_MultiplayerMenu_SceneActivated_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetGamercardFeedbackLabel
struct UUIPanel_Leaderboard_SetGamercardFeedbackLabel_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ShowGamercard
struct UUIPanel_Leaderboard_ShowGamercard_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ApplyColumnFormatting
struct UUIPanel_Leaderboard_ApplyColumnFormatting_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.FindHeroClassMapping
struct UUIPanel_Leaderboard_FindHeroClassMapping_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetViewModeForLevel
struct UUIPanel_Leaderboard_SetViewModeForLevel_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ToggleGameMode
struct UUIPanel_Leaderboard_ToggleGameMode_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ToggleMode
struct UUIPanel_Leaderboard_ToggleMode_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ViewLocalPlayer
struct UUIPanel_Leaderboard_ViewLocalPlayer_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ViewTopRankings
struct UUIPanel_Leaderboard_ViewTopRankings_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ViewFriends
struct UUIPanel_Leaderboard_ViewFriends_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetViewModeLabel
struct UUIPanel_Leaderboard_SetViewModeLabel_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ClearFilter
struct UUIPanel_Leaderboard_ClearFilter_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ResetFilterString
struct UUIPanel_Leaderboard_ResetFilterString_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetFilterString
struct UUIPanel_Leaderboard_SetFilterString_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ScrollFailed
struct UUIPanel_Leaderboard_ScrollFailed_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.FindMyRecord
struct UUIPanel_Leaderboard_FindMyRecord_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetRetrieving
struct UUIPanel_Leaderboard_SetRetrieving_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.OnlineReadComplete
struct UUIPanel_Leaderboard_OnlineReadComplete_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.OnReadComplete
struct UUIPanel_Leaderboard_OnReadComplete_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.QueueNextRead
struct UUIPanel_Leaderboard_QueueNextRead_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.CheckMinimumRecords
struct UUIPanel_Leaderboard_CheckMinimumRecords_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.OnReceivedInputKey
struct UUIPanel_Leaderboard_OnReceivedInputKey_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.SetTitle
struct UUIPanel_Leaderboard_SetTitle_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.GetPlayModeFromString
struct UUIPanel_Leaderboard_GetPlayModeFromString_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.GetDifficultyFromString
struct UUIPanel_Leaderboard_GetDifficultyFromString_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.UpdateLeaderboard
struct UUIPanel_Leaderboard_UpdateLeaderboard_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.AttemptRead
struct UUIPanel_Leaderboard_AttemptRead_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.AddHighlightedOwner
struct UUIPanel_Leaderboard_AddHighlightedOwner_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.HighlightLocalEntries
struct UUIPanel_Leaderboard_HighlightLocalEntries_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.RemovePlayersWithNoHeroes
struct UUIPanel_Leaderboard_RemovePlayersWithNoHeroes_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.GetLocalPlayerName
struct UUIPanel_Leaderboard_GetLocalPlayerName_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.Deactivate
struct UUIPanel_Leaderboard_Deactivate_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.HideModeToggle
struct UUIPanel_Leaderboard_HideModeToggle_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ShowModeToggle
struct UUIPanel_Leaderboard_ShowModeToggle_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.HideGameModeToggle
struct UUIPanel_Leaderboard_HideGameModeToggle_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.ShowGameModeToggle
struct UUIPanel_Leaderboard_ShowGameModeToggle_Params
{
};

// Function UDKGame.UIPanel_Leaderboard.Activate
struct UUIPanel_Leaderboard_Activate_Params
{
};

// Function UDKGame.UIScriptWidget_GameStatsPopup.SetScrollBoundary
struct UUIScriptWidget_GameStatsPopup_SetScrollBoundary_Params
{
};

// Function UDKGame.UIScriptWidget_GameStatsPopup.UpdateScrollAmount
struct UUIScriptWidget_GameStatsPopup_UpdateScrollAmount_Params
{
};

// Function UDKGame.UIScriptWidget_GameStatsPopup.UpdateScroll
struct UUIScriptWidget_GameStatsPopup_UpdateScroll_Params
{
};

// Function UDKGame.UIScriptWidget_GameStatsPopup.RenderGame
struct UUIScriptWidget_GameStatsPopup_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_GameStatsPopup.SetScene
struct UUIScriptWidget_GameStatsPopup_SetScene_Params
{
};

// Function UDKGame.UIImage_HealthBar.SetHealthPercent
struct UUIImage_HealthBar_SetHealthPercent_Params
{
};

// Function UDKGame.UIImage_HealthBar.Update
struct UUIImage_HealthBar_Update_Params
{
};

// Function UDKGame.UIImage_HealthBar.Created
struct UUIImage_HealthBar_Created_Params
{
};

// Function UDKGame.UIImage_ProgressBar.SetProgress
struct UUIImage_ProgressBar_SetProgress_Params
{
};

// Function UDKGame.UIScriptWidget_InvisibleWidget.ActiveStateChanged
struct UUIScriptWidget_InvisibleWidget_ActiveStateChanged_Params
{
};

// Function UDKGame.UIScriptWidget_InvisibleWidget.RenderGame
struct UUIScriptWidget_InvisibleWidget_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.ButtonClicked
struct UUIScriptWidget_HeroStat_ButtonClicked_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.AllocatePointsToStats
struct UUIScriptWidget_HeroStat_AllocatePointsToStats_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.ResetLevelUpAllocation
struct UUIScriptWidget_HeroStat_ResetLevelUpAllocation_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetStatTextDrawColor
struct UUIScriptWidget_HeroStat_GetStatTextDrawColor_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetToolTipTextBlocks
struct UUIScriptWidget_HeroStat_GetToolTipTextBlocks_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetToolTipString
struct UUIScriptWidget_HeroStat_GetToolTipString_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetScaleMultiplier
struct UUIScriptWidget_HeroStat_GetScaleMultiplier_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.RenderGame
struct UUIScriptWidget_HeroStat_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetHeroScene
struct UUIScriptWidget_HeroStat_GetHeroScene_Params
{
};

// Function UDKGame.UIScriptWidget_HeroStat.GetHero
struct UUIScriptWidget_HeroStat_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.InitializeFromDataListEntry
struct UUIScriptWidget_EquipmentIconButton_InitializeFromDataListEntry_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.IsClickable
struct UUIScriptWidget_EquipmentIconButton_IsClickable_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.LostFocus
struct UUIScriptWidget_EquipmentIconButton_LostFocus_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.GainedFocus
struct UUIScriptWidget_EquipmentIconButton_GainedFocus_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.RenderGame
struct UUIScriptWidget_EquipmentIconButton_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.GetEquipment
struct UUIScriptWidget_EquipmentIconButton_GetEquipment_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.GetHero
struct UUIScriptWidget_EquipmentIconButton_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.GetDataContainer
struct UUIScriptWidget_EquipmentIconButton_GetDataContainer_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.DraggedOnto
struct UUIScriptWidget_EquipmentIconButton_DraggedOnto_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.SupportsDraggedOntoItem
struct UUIScriptWidget_EquipmentIconButton_SupportsDraggedOntoItem_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.DragItemEnd
struct UUIScriptWidget_EquipmentIconButton_DragItemEnd_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.DragItemBegin
struct UUIScriptWidget_EquipmentIconButton_DragItemBegin_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.DoubleClickOccured
struct UUIScriptWidget_EquipmentIconButton_DoubleClickOccured_Params
{
};

// Function UDKGame.UIScriptWidget_EquipmentIconButton.Initialized
struct UUIScriptWidget_EquipmentIconButton_Initialized_Params
{
};

// Function UDKGame.UIScriptWidget_HeroInfoExpBar.RenderGame
struct UUIScriptWidget_HeroInfoExpBar_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroInfoExpBar.RenderEditor
struct UUIScriptWidget_HeroInfoExpBar_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_HeroInfoExpBar.GetPlayer
struct UUIScriptWidget_HeroInfoExpBar_GetPlayer_Params
{
};

// Function UDKGame.UIScriptWidget_HeroInfoExpBar.GetHero
struct UUIScriptWidget_HeroInfoExpBar_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.Pressed
struct UUIScriptWidget_Combobox_Pressed_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.SceneReleasedClick
struct UUIScriptWidget_Combobox_SceneReleasedClick_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.ToggleOptionList
struct UUIScriptWidget_Combobox_ToggleOptionList_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.CollapseOptionList
struct UUIScriptWidget_Combobox_CollapseOptionList_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.ExpandOptionList
struct UUIScriptWidget_Combobox_ExpandOptionList_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.ButtonClicked
struct UUIScriptWidget_Combobox_ButtonClicked_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.LostFocus
struct UUIScriptWidget_Combobox_LostFocus_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.ComboBoxElementSelected
struct UUIScriptWidget_Combobox_ComboBoxElementSelected_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.ClearSelection
struct UUIScriptWidget_Combobox_ClearSelection_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.IsToggleBtnFocused
struct UUIScriptWidget_Combobox_IsToggleBtnFocused_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.IsTitleFocused
struct UUIScriptWidget_Combobox_IsTitleFocused_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetFocusedElement
struct UUIScriptWidget_Combobox_GetFocusedElement_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetFocusedSelection
struct UUIScriptWidget_Combobox_GetFocusedSelection_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.DeIncrementSelection
struct UUIScriptWidget_Combobox_DeIncrementSelection_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.IncrementSelection
struct UUIScriptWidget_Combobox_IncrementSelection_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.SetFocusedElement
struct UUIScriptWidget_Combobox_SetFocusedElement_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetComboElementBackgroundImage
struct UUIScriptWidget_Combobox_GetComboElementBackgroundImage_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetTitleBackgroundImage
struct UUIScriptWidget_Combobox_GetTitleBackgroundImage_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetToggleIconImage
struct UUIScriptWidget_Combobox_GetToggleIconImage_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetToggleBackgroundImage
struct UUIScriptWidget_Combobox_GetToggleBackgroundImage_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetElementsCount
struct UUIScriptWidget_Combobox_GetElementsCount_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetComboBoxElementSize
struct UUIScriptWidget_Combobox_GetComboBoxElementSize_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetWidgetCursorPosition
struct UUIScriptWidget_Combobox_GetWidgetCursorPosition_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.UpdateFocusSelection
struct UUIScriptWidget_Combobox_UpdateFocusSelection_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.DrawBox
struct UUIScriptWidget_Combobox_DrawBox_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.RenderGame
struct UUIScriptWidget_Combobox_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.OnInitialSceneUpdateDelegate
struct UUIScriptWidget_Combobox_OnInitialSceneUpdateDelegate_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.OnNotifyResolutionChanged
struct UUIScriptWidget_Combobox_OnNotifyResolutionChanged_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.FindComboElement
struct UUIScriptWidget_Combobox_FindComboElement_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.SelectValue
struct UUIScriptWidget_Combobox_SelectValue_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.SetSelectedComboElement
struct UUIScriptWidget_Combobox_SetSelectedComboElement_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.SetComboElements
struct UUIScriptWidget_Combobox_SetComboElements_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetElementString
struct UUIScriptWidget_Combobox_GetElementString_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetSelectedString
struct UUIScriptWidget_Combobox_GetSelectedString_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.GetSelectedElementIdx
struct UUIScriptWidget_Combobox_GetSelectedElementIdx_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.NotifyTitleClicked
struct UUIScriptWidget_Combobox_NotifyTitleClicked_Params
{
};

// Function UDKGame.UIScriptWidget_Combobox.NotifySelectionChanged
struct UUIScriptWidget_Combobox_NotifySelectionChanged_Params
{
};

// Function UDKGame.UIDataContainer_Equipment_DataList.GetHero
struct UUIDataContainer_Equipment_DataList_GetHero_Params
{
};

// Function UDKGame.UIDataContainer_Equipment_DataList.GetHeroCurrentEquipmentOfType
struct UUIDataContainer_Equipment_DataList_GetHeroCurrentEquipmentOfType_Params
{
};

// Function UDKGame.UIDataContainer_Equipment_DataList.GetEquipment
struct UUIDataContainer_Equipment_DataList_GetEquipment_Params
{
};

// Function UDKGame.UIDataContainer_Equipment_DataList.InitDataContainer_Equipment_DataList
struct UUIDataContainer_Equipment_DataList_InitDataContainer_Equipment_DataList_Params
{
};

// Function UDKGame.UI_Leaderboard.OnReceivedInputKey
struct UUI_Leaderboard_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_Leaderboard.ToggleMode
struct UUI_Leaderboard_ToggleMode_Params
{
};

// Function UDKGame.UI_Leaderboard.SetFilterString
struct UUI_Leaderboard_SetFilterString_Params
{
};

// Function UDKGame.UI_Leaderboard.SetTitle
struct UUI_Leaderboard_SetTitle_Params
{
};

// Function UDKGame.UI_Leaderboard.GetPlayModeFromString
struct UUI_Leaderboard_GetPlayModeFromString_Params
{
};

// Function UDKGame.UI_Leaderboard.GetDifficultyFromString
struct UUI_Leaderboard_GetDifficultyFromString_Params
{
};

// Function UDKGame.UI_Leaderboard.NotifyWidgetClicked
struct UUI_Leaderboard_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_Leaderboard.SceneActivated
struct UUI_Leaderboard_SceneActivated_Params
{
};

// Function UDKGame.UI_Leaderboard.ScrollFailed
struct UUI_Leaderboard_ScrollFailed_Params
{
};

// Function UDKGame.UI_Leaderboard.OnReadComplete
struct UUI_Leaderboard_OnReadComplete_Params
{
};

// Function UDKGame.UI_Leaderboard.FindMyRecord
struct UUI_Leaderboard_FindMyRecord_Params
{
};

// Function UDKGame.UI_Leaderboard.SetRetrieving
struct UUI_Leaderboard_SetRetrieving_Params
{
};

// Function UDKGame.UI_Leaderboard.PostInitialize
struct UUI_Leaderboard_PostInitialize_Params
{
};

// Function UDKGame.UI_Leaderboard.Initialized
struct UUI_Leaderboard_Initialized_Params
{
};

// Function UDKGame.UI_TitleScreen.PlayDunDefUIAnim
struct UUI_TitleScreen_PlayDunDefUIAnim_Params
{
};

// Function UDKGame.UI_TitleScreen.Update
struct UUI_TitleScreen_Update_Params
{
};

// Function UDKGame.UI_TitleScreen.OnReceivedInputKey
struct UUI_TitleScreen_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_TitleScreen.ShowPasswordKeyboard
struct UUI_TitleScreen_ShowPasswordKeyboard_Params
{
};

// Function UDKGame.UI_TitleScreen.PasswordInputDone
struct UUI_TitleScreen_PasswordInputDone_Params
{
};

// Function UDKGame.UI_TitleScreen.PostInitialize
struct UUI_TitleScreen_PostInitialize_Params
{
};

// Function UDKGame.UI_TitleScreen.Initialized
struct UUI_TitleScreen_Initialized_Params
{
};

// Function UDKGame.UI_PasswordPrompt.IsGamepadOwned
struct UUI_PasswordPrompt_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_PasswordPrompt.SceneDeactivated
struct UUI_PasswordPrompt_SceneDeactivated_Params
{
};

// Function UDKGame.UI_PasswordPrompt.IsKeyboardOwned
struct UUI_PasswordPrompt_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_PasswordPrompt.Update
struct UUI_PasswordPrompt_Update_Params
{
};

// Function UDKGame.UI_PasswordPrompt.NotifyWidgetClicked
struct UUI_PasswordPrompt_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_PasswordPrompt.InitForGameName
struct UUI_PasswordPrompt_InitForGameName_Params
{
};

// Function UDKGame.UI_PasswordPrompt.Initialized
struct UUI_PasswordPrompt_Initialized_Params
{
};

// Function UDKGame.UI_SessionBrowser_EntryPanel.Created
struct UUI_SessionBrowser_EntryPanel_Created_Params
{
};

// Function UDKGame.UI_SessionBrowser_EntryPanel.NotifyButtonClicked
struct UUI_SessionBrowser_EntryPanel_NotifyButtonClicked_Params
{
};

// Function UDKGame.UI_SearchFilters.OnReceivedInputKey
struct UUI_SearchFilters_OnReceivedInputKey_Params
{
};

// Function UDKGame.UI_SearchFilters.IsGamepadOwned
struct UUI_SearchFilters_IsGamepadOwned_Params
{
};

// Function UDKGame.UI_SearchFilters.IsKeyboardOwned
struct UUI_SearchFilters_IsKeyboardOwned_Params
{
};

// Function UDKGame.UI_SearchFilters.RestoreRadialValues
struct UUI_SearchFilters_RestoreRadialValues_Params
{
};

// Function UDKGame.UI_SearchFilters.SaveRadialValues
struct UUI_SearchFilters_SaveRadialValues_Params
{
};

// Function UDKGame.UI_SearchFilters.Update
struct UUI_SearchFilters_Update_Params
{
};

// Function UDKGame.UI_SearchFilters.HasCampaignMissionsSelected
struct UUI_SearchFilters_HasCampaignMissionsSelected_Params
{
};

// Function UDKGame.UI_SearchFilters.CheckDifficultyChange
struct UUI_SearchFilters_CheckDifficultyChange_Params
{
};

// Function UDKGame.UI_SearchFilters.SwitchOptionsPanel
struct UUI_SearchFilters_SwitchOptionsPanel_Params
{
};

// Function UDKGame.UI_SearchFilters.NotifyWidgetClicked
struct UUI_SearchFilters_NotifyWidgetClicked_Params
{
};

// Function UDKGame.UI_SearchFilters.SearchFiltersSelectionChanged
struct UUI_SearchFilters_SearchFiltersSelectionChanged_Params
{
};

// Function UDKGame.UI_SearchFilters.ChangeAllDataListSelectionEntries
struct UUI_SearchFilters_ChangeAllDataListSelectionEntries_Params
{
};

// Function UDKGame.UI_SearchFilters.UncheckAll
struct UUI_SearchFilters_UncheckAll_Params
{
};

// Function UDKGame.UI_SearchFilters.ApplyFilterSettings
struct UUI_SearchFilters_ApplyFilterSettings_Params
{
};

// Function UDKGame.UI_SearchFilters.LoadFilterSettings
struct UUI_SearchFilters_LoadFilterSettings_Params
{
};

// Function UDKGame.UI_SearchFilters.AfterDataListUpdate
struct UUI_SearchFilters_AfterDataListUpdate_Params
{
};

// Function UDKGame.UI_SearchFilters.BeforeDataListUpdate
struct UUI_SearchFilters_BeforeDataListUpdate_Params
{
};

// Function UDKGame.UI_SearchFilters.PostInitialSceneUpdate
struct UUI_SearchFilters_PostInitialSceneUpdate_Params
{
};

// Function UDKGame.UI_SearchFilters.RefreshedChallengeList
struct UUI_SearchFilters_RefreshedChallengeList_Params
{
};

// Function UDKGame.UI_SearchFilters.BeforeRefreshedChallengeList
struct UUI_SearchFilters_BeforeRefreshedChallengeList_Params
{
};

// Function UDKGame.UI_SearchFilters.RefreshedCampaignList
struct UUI_SearchFilters_RefreshedCampaignList_Params
{
};

// Function UDKGame.UI_SearchFilters.BeforeRefreshedCampaignList
struct UUI_SearchFilters_BeforeRefreshedCampaignList_Params
{
};

// Function UDKGame.UICheckBox_Scripted.ButtonClicked
struct UUICheckBox_Scripted_ButtonClicked_Params
{
};

// Function UDKGame.UILabel_KeyBinding.DoInit
struct UUILabel_KeyBinding_DoInit_Params
{
};

// Function UDKGame.UIButton_SessionBrowser_Entry.ButtonClicked
struct UUIButton_SessionBrowser_Entry_ButtonClicked_Params
{
};

// Function UDKGame.UIScript_ActionWheelHotkey.RenderGame
struct UUIScript_ActionWheelHotkey_RenderGame_Params
{
};

// Function UDKGame.UIScript_ActionWheelHotkey.RenderEditor
struct UUIScript_ActionWheelHotkey_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_ButtonMultiImage.RenderGame
struct UUIScriptWidget_ButtonMultiImage_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_ButtonMultiImage.InitializeFromDataListEntry
struct UUIScriptWidget_ButtonMultiImage_InitializeFromDataListEntry_Params
{
};

// Function UDKGame.UIScriptWidget_HealthManaIcon.RenderGame
struct UUIScriptWidget_HealthManaIcon_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HealthManaIcon.RenderEditor
struct UUIScriptWidget_HealthManaIcon_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_HealthManaIcon.GetPlayer
struct UUIScriptWidget_HealthManaIcon_GetPlayer_Params
{
};

// Function UDKGame.UIScriptWidget_HealthManaIcon.GetHero
struct UUIScriptWidget_HealthManaIcon_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_HeroIcon.GetIconColor
struct UUIScriptWidget_HeroIcon_GetIconColor_Params
{
};

// Function UDKGame.UIScriptWidget_HeroIcon.GetIcon
struct UUIScriptWidget_HeroIcon_GetIcon_Params
{
};

// Function UDKGame.UIScriptWidget_HeroIcon.RenderGame
struct UUIScriptWidget_HeroIcon_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroIcon.RenderEditor
struct UUIScriptWidget_HeroIcon_RenderEditor_Params
{
};

// Function UDKGame.UIScriptWidget_HeroIcon.GetHero
struct UUIScriptWidget_HeroIcon_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_HeroSelectionButton.RenderGame
struct UUIScriptWidget_HeroSelectionButton_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroSelectionButton.GetHero
struct UUIScriptWidget_HeroSelectionButton_GetHero_Params
{
};

// Function UDKGame.UIScriptWidget_HeroPlayerListButton.LostFocus
struct UUIScriptWidget_HeroPlayerListButton_LostFocus_Params
{
};

// Function UDKGame.UIScriptWidget_HeroPlayerListButton.RenderGame
struct UUIScriptWidget_HeroPlayerListButton_RenderGame_Params
{
};

// Function UDKGame.UIScriptWidget_HeroPlayerListButton.GetHero
struct UUIScriptWidget_HeroPlayerListButton_GetHero_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
