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

// Function DunDefBuff.DunDefBuff_Boost.GetBoostedTargets
struct UDunDefBuff_Boost_GetBoostedTargets_Params
{
	TArray<class APawn*>                               boostedTargets;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function DunDefBuff.DunDefBuff_Boost.NotifyOfBoostedRemoval
struct UDunDefBuff_Boost_NotifyOfBoostedRemoval_Params
{
	class APawn*                                       removedBoostee;                                           // (Parm)
};

// Function DunDefBuff.DunDefBuff_Boost.GetPawnBoostAmount
struct UDunDefBuff_Boost_GetPawnBoostAmount_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Boost.HasPawnBoostingType
struct UDunDefBuff_Boost_HasPawnBoostingType_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostAmount
struct UDunDefBuff_Boost_GetTowerBoostAmount_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Boost.HasTowerBoostingType
struct UDunDefBuff_Boost_HasTowerBoostingType_Params
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Boost.GetTowerBoostingTarget
struct UDunDefBuff_Boost_GetTowerBoostingTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Boost.InitalizeActorStats
struct UDunDefBuff_Boost_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Boost.DeactivateBuff
struct UDunDefBuff_Boost_DeactivateBuff_Params
{
};

// Function DunDefBuff.DunDefBuff_Boost.ActivateBuff
struct UDunDefBuff_Boost_ActivateBuff_Params
{
};

// Function DunDefBuff.DunDefBuff_Contagion.CanAffectTarget
struct UDunDefBuff_Contagion_CanAffectTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Contagion.GetNearestTarget
struct UDunDefBuff_Contagion_GetNearestTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Contagion.Initialize
struct UDunDefBuff_Contagion_Initialize_Params
{
};

// Function DunDefBuff.DunDefBuff_Contagion.BuffEffect
struct UDunDefBuff_Contagion_BuffEffect_Params
{
};

// Function DunDefBuff.DunDefBuff_Damage.IsValidTarget
struct UDunDefBuff_Damage_IsValidTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	class AActor*                                      BuffOwner;                                                // (Parm)
	class UDunDefBuff*                                 BuffTemplate;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Damage.InitalizeActorStats
struct UDunDefBuff_Damage_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Damage.CanDamage
struct UDunDefBuff_Damage_CanDamage_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Damage.GetBuffDamage
struct UDunDefBuff_Damage_GetBuffDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Damage.BuffEffect
struct UDunDefBuff_Damage_BuffEffect_Params
{
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.ResetTimer
struct UDunDefBuff_DamageAdjuster_ResetTimer_Params
{
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsBetween
struct UDunDefBuff_DamageAdjuster_IsBetween_Params
{
	float                                              Value;                                                    // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.InitalizeActorStats
struct UDunDefBuff_DamageAdjuster_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.GetDamageMultiplier
struct UDunDefBuff_DamageAdjuster_GetDamageMultiplier_Params
{
	class AActor*                                      damagedTarget;                                            // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.IsAdjustAllowed
struct UDunDefBuff_DamageAdjuster_IsAdjustAllowed_Params
{
	class UObject*                                     Target;                                                   // (Parm)
	struct FsLastDamageInfo                            TheDamageInfo;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_DamageAdjuster.AdjustDealtDamage
struct UDunDefBuff_DamageAdjuster_AdjustDealtDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	class AActor*                                      damagedTarget;                                            // (Parm)
	struct FsLastDamageInfo                            damageInfo;                                               // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	int                                                OriginalDamage;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DisableInvincibility
struct UDunDefBuff_ExtraLife_DisableInvincibility_Params
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.AdjustTargetDamage
struct UDunDefBuff_ExtraLife_AdjustTargetDamage_Params
{
	class AActor*                                      forActor;                                                 // (Parm)
	int                                                howMuchDamage;                                            // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	class AController*                                 fromController;                                           // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	class UObject*                                     WhatHitMe;                                                // (OptionalParm, Parm)
	struct FsLastDamageInfo                            damageInfo;                                               // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_ExtraLife.BuffEffect
struct UDunDefBuff_ExtraLife_BuffEffect_Params
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.DeactivateBuff
struct UDunDefBuff_ExtraLife_DeactivateBuff_Params
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.ActivateBuff
struct UDunDefBuff_ExtraLife_ActivateBuff_Params
{
};

// Function DunDefBuff.DunDefBuff_ExtraLife.CanProc
struct UDunDefBuff_ExtraLife_CanProc_Params
{
	class AActor*                                      aActor;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_ExtraLife.InitalizeActorStats
struct UDunDefBuff_ExtraLife_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_OnHit.InitalizeActorStats
struct UDunDefBuff_OnHit_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_OnHit.GetExtraDamageAmount
struct UDunDefBuff_OnHit_GetExtraDamageAmount_Params
{
	float                                              dealtDamage;                                              // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_OnHit.IsValidHitTarget
struct UDunDefBuff_OnHit_IsValidHitTarget_Params
{
	class AActor*                                      TargetActor;                                              // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	class AController*                                 DamageInstigator;                                         // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	class UObject*                                     whatDidDamage;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_OnHit.ReportActorDealtDamage
struct UDunDefBuff_OnHit_ReportActorDealtDamage_Params
{
	int                                                dealtDamage;                                              // (Parm)
	class AActor*                                      Victim;                                                   // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	class AController*                                 DamageInstigator;                                         // (Parm)
	int                                                adjustedDamage;                                           // (OptionalParm, Parm)
	class UObject*                                     whatDidDamage;                                            // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_OnHit.AdjustDealtDamage
struct UDunDefBuff_OnHit_AdjustDealtDamage_Params
{
	int                                                inDamage;                                                 // (Parm, OutParm)
	class AActor*                                      damagedTarget;                                            // (Parm)
	struct FsLastDamageInfo                            damageInfo;                                               // (Parm, OutParm)
	struct FVector                                     Momentum;                                                 // (Parm, OutParm)
	int                                                OriginalDamage;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.CanSpawn
struct UDunDefBuff_Spawn_CanSpawn_Params
{
	class UObject*                                     EventCauser;                                              // (OptionalParm, Parm)
	class UObject*                                     EventOwner;                                               // (OptionalParm, Parm)
	class UObject*                                     whatDidDamage;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Spawn.DestroySpawn
struct UDunDefBuff_Spawn_DestroySpawn_Params
{
	class UObject*                                     theObject;                                                // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.EnforceSpawnLimit
struct UDunDefBuff_Spawn_EnforceSpawnLimit_Params
{
	int                                                aspawnCount;                                              // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.CheckSpawnCount
struct UDunDefBuff_Spawn_CheckSpawnCount_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Spawn.GetSpawnCount
struct UDunDefBuff_Spawn_GetSpawnCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Spawn.SpawnArchetype
struct UDunDefBuff_Spawn_SpawnArchetype_Params
{
	class AActor*                                      TargetActor;                                              // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffRemoved
struct UDunDefBuff_Spawn_ReportBuffRemoved_Params
{
	class UDunDefBuff*                                 BuffRemoved;                                              // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportBuffAdded
struct UDunDefBuff_Spawn_ReportBuffAdded_Params
{
	class UDunDefBuff*                                 BuffAdded;                                                // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerJumped
struct UDunDefBuff_Spawn_ReportOwnerJumped_Params
{
};

// Function DunDefBuff.DunDefBuff_Spawn.TriggerEvent
struct UDunDefBuff_Spawn_TriggerEvent_Params
{
	TEnumAsByte<EBuffSpawnEvent>                       EventToTrigger;                                           // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportOwnerDeath
struct UDunDefBuff_Spawn_ReportOwnerDeath_Params
{
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealedActor
struct UDunDefBuff_Spawn_ReportHealedActor_Params
{
	int                                                healedAmount;                                             // (Parm)
	class AActor*                                      healed;                                                   // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportHealed
struct UDunDefBuff_Spawn_ReportHealed_Params
{
	int                                                healedAmount;                                             // (Parm)
	class AActor*                                      Healer;                                                   // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportKilledActor
struct UDunDefBuff_Spawn_ReportKilledActor_Params
{
	class AActor*                                      killedActor;                                              // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	class AController*                                 Killer;                                                   // (Parm)
	class AActor*                                      KillingActor;                                             // (Parm)
	class UObject*                                     WhatKilledThem;                                           // (Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportTookDamage
struct UDunDefBuff_Spawn_ReportTookDamage_Params
{
	int                                                dealtDamage;                                              // (Parm)
	class AActor*                                      damager;                                                  // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	int                                                adjustedDamage;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Spawn.ReportActorDealtDamage
struct UDunDefBuff_Spawn_ReportActorDealtDamage_Params
{
	int                                                dealtDamage;                                              // (Parm)
	class AActor*                                      Victim;                                                   // (Parm)
	class UClass*                                      TheDamageType;                                            // (Parm)
	class AActor*                                      DamageCauser;                                             // (Parm)
	class AController*                                 DamageInstigator;                                         // (Parm)
	int                                                adjustedDamage;                                           // (OptionalParm, Parm)
	class UObject*                                     whatDidDamage;                                            // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Web.GetPawnBoostAmount
struct UDunDefBuff_Web_GetPawnBoostAmount_Params
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Web.RemoveDebuff
struct UDunDefBuff_Web_RemoveDebuff_Params
{
};

// Function DunDefBuff.DunDefBuff_Web.ApplyDebuff
struct UDunDefBuff_Web_ApplyDebuff_Params
{
};

// Function DunDefBuff.DunDefBuff_Web.InitalizeActorStats
struct UDunDefBuff_Web_InitalizeActorStats_Params
{
	TScriptInterface<class UIActorModifierInterface>   ActorStatObject;                                          // (Parm)
	class UObject*                                     CallingObject;                                            // (OptionalParm, Parm)
	int                                                Tier;                                                     // (OptionalParm, Parm)
	bool                                               bBaseValueOnly;                                           // (OptionalParm, Parm)
};

// Function DunDefBuff.DunDefBuff_Web.BuffEffect
struct UDunDefBuff_Web_BuffEffect_Params
{
};

// Function DunDefBuff.DunDefBuff_Web.IsValidTarget
struct UDunDefBuff_Web_IsValidTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	class AActor*                                      BuffOwner;                                                // (Parm)
	class UDunDefBuff*                                 aBuffTemplate;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DunDefBuff.DunDefBuff_Web.DeactivateBuff
struct UDunDefBuff_Web_DeactivateBuff_Params
{
};

// Function DunDefBuff.DunDefBuff_Web.ActivateBuff
struct UDunDefBuff_Web_ActivateBuff_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
