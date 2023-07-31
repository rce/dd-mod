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

// Class DunDefBuff.DunDefBuff_Boost
// 0x001C (0x0318 - 0x02FC)
class UDunDefBuff_Boost : public UDunDefBuff
{
public:
	TArray<struct FsTowerBoostType>                    TowerBoostTypes;                                          // 0x02FC(0x000C)
	TArray<struct FsPawnBoostType>                     PawnBoostTypes;                                           // 0x0308(0x000C)
	unsigned long                                      bDestroyBuffOnFailedBoost : 1;                            // 0x0314(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Boost");
		return ptr;
	}


	void GetBoostedTargets();
	void NotifyOfBoostedRemoval();
	void GetPawnBoostAmount();
	void HasPawnBoostingType();
	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
	void InitalizeActorStats();
	void DeactivateBuff();
	void ActivateBuff();
};


// Class DunDefBuff.DunDefBuff_Contagion
// 0x001C (0x0318 - 0x02FC)
class UDunDefBuff_Contagion : public UDunDefBuff
{
public:
	TArray<class UDunDefBuff*>                         ContagionBuffs;                                           // 0x02FC(0x000C)
	unsigned long                                      DoLineOfSightCheck : 1;                                   // 0x0308(0x0004)
	unsigned long                                      bEndBuffOnMaxStackCount : 1;                              // 0x0308(0x0004)
	unsigned long                                      bApplyContagionBuffsAsAoe : 1;                            // 0x0308(0x0004)
	unsigned long                                      bDestroyBuffIfNoTarget : 1;                               // 0x0308(0x0004)
	TArray<class AActor*>                              PreviousTargets;                                          // 0x030C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Contagion");
		return ptr;
	}


	void CanAffectTarget();
	void GetNearestTarget();
	void Initialize();
	void BuffEffect();
};


// Class DunDefBuff.DunDefBuff_Damage
// 0x0030 (0x032C - 0x02FC)
class UDunDefBuff_Damage : public UDunDefBuff
{
public:
	unsigned long                                      bDoEffectAsAoe : 1;                                       // 0x02FC(0x0004)
	unsigned long                                      bDoHealing : 1;                                           // 0x02FC(0x0004)
	unsigned long                                      bAddMana : 1;                                             // 0x02FC(0x0004)
	unsigned long                                      bUsePercentageOfTargetMaxHealth : 1;                      // 0x02FC(0x0004)
	unsigned long                                      bMultiplyDamageByStackCount : 1;                          // 0x02FC(0x0004)
	float                                              Damage;                                                   // 0x0300(0x0004)
	float                                              DamageMomentum;                                           // 0x0304(0x0004)
	float                                              AoeDamageFallOff;                                         // 0x0308(0x0004)
	float                                              DamageIncreasePerStack;                                   // 0x030C(0x0004)
	TArray<class UDunDefBuff*>                         OnProcBuffs;                                              // 0x0310(0x000C)
	class UClass*                                      BuffDamageTypeClass;                                      // 0x031C(0x0004)
	TArray<class UClass*>                              ClassesToIgnore;                                          // 0x0320(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Damage");
		return ptr;
	}


	void STATIC_IsValidTarget();
	void InitalizeActorStats();
	void CanDamage();
	void GetBuffDamage();
	void BuffEffect();
};


// Class DunDefBuff.DunDefBuff_DamageAdjuster
// 0x0030 (0x032C - 0x02FC)
class UDunDefBuff_DamageAdjuster : public UDunDefBuff
{
public:
	TArray<class UActorFilter*>                        TargetFilters;                                            // 0x02FC(0x000C)
	TArray<class ULastDamageInfoFilter*>               DamageInfoFilters;                                        // 0x0308(0x000C)
	float                                              DamageMultiplier;                                         // 0x0314(0x0004)
	float                                              MinEffectAngle;                                           // 0x0318(0x0004)
	float                                              MaxEffectAngle;                                           // 0x031C(0x0004)
	unsigned long                                      bUseEffectAngle : 1;                                      // 0x0320(0x0004)
	unsigned long                                      bUseDistanceCheck : 1;                                    // 0x0320(0x0004)
	unsigned long                                      bUseCheckFailing : 1;                                     // 0x0320(0x0004)
	float                                              MinDamageRange;                                           // 0x0324(0x0004)
	float                                              MaxDamageRange;                                           // 0x0328(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_DamageAdjuster");
		return ptr;
	}


	void ResetTimer();
	void IsBetween();
	void InitalizeActorStats();
	void GetDamageMultiplier();
	void IsAdjustAllowed();
	void AdjustDealtDamage();
};


// Class DunDefBuff.DunDefBuff_ExtraLife
// 0x000C (0x0308 - 0x02FC)
class UDunDefBuff_ExtraLife : public UDunDefBuff
{
public:
	unsigned long                                      bTowerDowngradeIfDead : 1;                                // 0x02FC(0x0004)
	unsigned long                                      bInvincibleAfterProc : 1;                                 // 0x02FC(0x0004)
	unsigned long                                      bProcOnKillZDamage : 1;                                   // 0x02FC(0x0004)
	unsigned long                                      bIsInvincible : 1;                                        // 0x02FC(0x0004)
	float                                              InvincibleDuration;                                       // 0x0300(0x0004)
	float                                              healthRestorePct;                                         // 0x0304(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_ExtraLife");
		return ptr;
	}


	void DisableInvincibility();
	void AdjustTargetDamage();
	void BuffEffect();
	void DeactivateBuff();
	void ActivateBuff();
	void CanProc();
	void InitalizeActorStats();
};


// Class DunDefBuff.DunDefBuff_OnHit
// 0x0058 (0x0354 - 0x02FC)
class UDunDefBuff_OnHit : public UDunDefBuff
{
public:
	int                                                ExtraDamageAmount;                                        // 0x02FC(0x0004)
	float                                              ExtraDamageMomentum;                                      // 0x0300(0x0004)
	float                                              DealtDamageMultiplier;                                    // 0x0304(0x0004)
	class UClass*                                      ExtraDamageType;                                          // 0x0308(0x0004)
	class UParticleSystem*                             ExtraDamageParticleEffect;                                // 0x030C(0x0004)
	class UClass*                                      TriggerOnDamageType;                                      // 0x0310(0x0004)
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                          // 0x0314(0x0004)
	unsigned long                                      bScaleOffDealtDamage : 1;                                 // 0x0314(0x0004)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnTargetHit;                                  // 0x0318(0x000C)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnOwner;                                      // 0x0324(0x000C)
	TArray<class UActorFilter*>                        VictimFilters;                                            // 0x0330(0x000C)
	TArray<class UActorFilter*>                        DamageCauserFilters;                                      // 0x033C(0x000C)
	TArray<class UActorFilter*>                        WhatDidDamageFilters;                                     // 0x0348(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_OnHit");
		return ptr;
	}


	void InitalizeActorStats();
	void GetExtraDamageAmount();
	void IsValidHitTarget();
	void ReportActorDealtDamage();
	void AdjustDealtDamage();
};


// Class DunDefBuff.DunDefBuff_Spawn
// 0x0058 (0x0354 - 0x02FC)
class UDunDefBuff_Spawn : public UDunDefBuff
{
public:
	TEnumAsByte<EBuffSpawnEvent>                       EventToTriggerBuff;                                       // 0x02FC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	TArray<class UObject*>                             SpawnTemplates;                                           // 0x0300(0x000C)
	unsigned long                                      bUseRandomSpawnTemplate : 1;                              // 0x030C(0x0004)
	unsigned long                                      bUseBuffOwnerAsTarget : 1;                                // 0x030C(0x0004)
	unsigned long                                      bIgnoreSpawnCollision : 1;                                // 0x030C(0x0004)
	unsigned long                                      bSetTargetAsHomingTarget : 1;                             // 0x030C(0x0004)
	unsigned long                                      bDestroyExcessSpawns : 1;                                 // 0x030C(0x0004)
	unsigned long                                      bDestroyBuffOnSucessfulSpawn : 1;                         // 0x030C(0x0004)
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                          // 0x030C(0x0004)
	int                                                SpawnCount;                                               // 0x0310(0x0004)
	int                                                SpawnLimit;                                               // 0x0314(0x0004)
	TArray<int>                                        TieredSpawnCountArray;                                    // 0x0318(0x000C)
	TArray<class UActorFilter*>                        EventCauserFilters;                                       // 0x0324(0x000C)
	TArray<class UActorFilter*>                        EventOwnerFilters;                                        // 0x0330(0x000C)
	TArray<class UActorFilter*>                        WhatDidDamageFilters;                                     // 0x033C(0x000C)
	TArray<class UObject*>                             SpawnedObjects;                                           // 0x0348(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Spawn");
		return ptr;
	}


	void CanSpawn();
	void DestroySpawn();
	void EnforceSpawnLimit();
	void CheckSpawnCount();
	void GetSpawnCount();
	void SpawnArchetype();
	void ReportBuffRemoved();
	void ReportBuffAdded();
	void ReportOwnerJumped();
	void TriggerEvent();
	void ReportOwnerDeath();
	void ReportHealedActor();
	void ReportHealed();
	void ReportKilledActor();
	void ReportTookDamage();
	void ReportActorDealtDamage();
};


// Class DunDefBuff.DunDefBuff_Web
// 0x001C (0x0334 - 0x0318)
class UDunDefBuff_Web : public UDunDefBuff_Boost
{
public:
	float                                              MovementSpeedMultiplier;                                  // 0x0318(0x0004)
	float                                              TowerAttackRateMultiplier;                                // 0x031C(0x0004)
	float                                              PlayerAttackRateMultiplier;                               // 0x0320(0x0004)
	float                                              pawnDamageModifier;                                       // 0x0324(0x0004)
	float                                              PawnAttackSpeedMult;                                      // 0x0328(0x0004)
	float                                              WebbedJumpZ;                                              // 0x032C(0x0004)
	unsigned long                                      bUsePawnDeboosting : 1;                                   // 0x0330(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Web");
		return ptr;
	}


	void GetPawnBoostAmount();
	void RemoveDebuff();
	void ApplyDebuff();
	void InitalizeActorStats();
	void BuffEffect();
	void STATIC_IsValidTarget();
	void DeactivateBuff();
	void ActivateBuff();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
