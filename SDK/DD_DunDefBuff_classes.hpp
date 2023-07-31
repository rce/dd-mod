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
	TArray<struct FsTowerBoostType>                    TowerBoostTypes;                                          // 0x02FC(0x000C) (Edit, NeedCtorLink)
	TArray<struct FsPawnBoostType>                     PawnBoostTypes;                                           // 0x0308(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bDestroyBuffOnFailedBoost : 1;                            // 0x0314(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Boost");
		return ptr;
	}


	void GetBoostedTargets(TArray<class APawn*>* boostedTargets);
	void NotifyOfBoostedRemoval(class APawn* removedBoostee);
	float GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType);
	bool HasPawnBoostingType(TEnumAsByte<EPawnBoostType> boostType);
	float GetTowerBoostAmount(TEnumAsByte<ETowerBoostType> boostType);
	bool HasTowerBoostingType(TEnumAsByte<ETowerBoostType> boostType);
	TScriptInterface<class UDunDefTargetableInterface> GetTowerBoostingTarget();
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
	void DeactivateBuff();
	void ActivateBuff();
};


// Class DunDefBuff.DunDefBuff_Contagion
// 0x001C (0x0318 - 0x02FC)
class UDunDefBuff_Contagion : public UDunDefBuff
{
public:
	TArray<class UDunDefBuff*>                         ContagionBuffs;                                           // 0x02FC(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      DoLineOfSightCheck : 1;                                   // 0x0308(0x0004) (Edit)
	unsigned long                                      bEndBuffOnMaxStackCount : 1;                              // 0x0308(0x0004) (Edit)
	unsigned long                                      bApplyContagionBuffsAsAoe : 1;                            // 0x0308(0x0004) (Edit)
	unsigned long                                      bDestroyBuffIfNoTarget : 1;                               // 0x0308(0x0004) (Edit)
	TArray<class AActor*>                              PreviousTargets;                                          // 0x030C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Contagion");
		return ptr;
	}


	bool CanAffectTarget(class AActor* Target);
	TScriptInterface<class UDunDefTargetableInterface> GetNearestTarget();
	void Initialize();
	void BuffEffect();
};


// Class DunDefBuff.DunDefBuff_Damage
// 0x0030 (0x032C - 0x02FC)
class UDunDefBuff_Damage : public UDunDefBuff
{
public:
	unsigned long                                      bDoEffectAsAoe : 1;                                       // 0x02FC(0x0004) (Edit)
	unsigned long                                      bDoHealing : 1;                                           // 0x02FC(0x0004) (Edit)
	unsigned long                                      bAddMana : 1;                                             // 0x02FC(0x0004) (Edit)
	unsigned long                                      bUsePercentageOfTargetMaxHealth : 1;                      // 0x02FC(0x0004) (Edit)
	unsigned long                                      bMultiplyDamageByStackCount : 1;                          // 0x02FC(0x0004) (Edit)
	float                                              Damage;                                                   // 0x0300(0x0004) (Edit)
	float                                              DamageMomentum;                                           // 0x0304(0x0004) (Edit)
	float                                              AoeDamageFallOff;                                         // 0x0308(0x0004) (Edit)
	float                                              DamageIncreasePerStack;                                   // 0x030C(0x0004) (Edit)
	TArray<class UDunDefBuff*>                         OnProcBuffs;                                              // 0x0310(0x000C) (Edit, NeedCtorLink)
	class UClass*                                      BuffDamageTypeClass;                                      // 0x031C(0x0004) (Edit)
	TArray<class UClass*>                              ClassesToIgnore;                                          // 0x0320(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Damage");
		return ptr;
	}


	bool STATIC_IsValidTarget(class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* BuffTemplate);
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
	bool CanDamage(class AActor* Target);
	float GetBuffDamage();
	void BuffEffect();
};


// Class DunDefBuff.DunDefBuff_DamageAdjuster
// 0x0030 (0x032C - 0x02FC)
class UDunDefBuff_DamageAdjuster : public UDunDefBuff
{
public:
	TArray<class UActorFilter*>                        TargetFilters;                                            // 0x02FC(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class ULastDamageInfoFilter*>               DamageInfoFilters;                                        // 0x0308(0x000C) (Edit, NeedCtorLink, EditInline)
	float                                              DamageMultiplier;                                         // 0x0314(0x0004) (Edit)
	float                                              MinEffectAngle;                                           // 0x0318(0x0004) (Edit)
	float                                              MaxEffectAngle;                                           // 0x031C(0x0004) (Edit)
	unsigned long                                      bUseEffectAngle : 1;                                      // 0x0320(0x0004) (Edit)
	unsigned long                                      bUseDistanceCheck : 1;                                    // 0x0320(0x0004) (Edit)
	unsigned long                                      bUseCheckFailing : 1;                                     // 0x0320(0x0004) (Edit)
	float                                              MinDamageRange;                                           // 0x0324(0x0004) (Edit)
	float                                              MaxDamageRange;                                           // 0x0328(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_DamageAdjuster");
		return ptr;
	}


	void ResetTimer();
	bool IsBetween(float Value, float X, float Y);
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
	float GetDamageMultiplier(class AActor* damagedTarget);
	bool IsAdjustAllowed(class UObject* Target, const struct FsLastDamageInfo& TheDamageInfo);
	void AdjustDealtDamage(class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum);
};


// Class DunDefBuff.DunDefBuff_ExtraLife
// 0x000C (0x0308 - 0x02FC)
class UDunDefBuff_ExtraLife : public UDunDefBuff
{
public:
	unsigned long                                      bTowerDowngradeIfDead : 1;                                // 0x02FC(0x0004) (Edit)
	unsigned long                                      bInvincibleAfterProc : 1;                                 // 0x02FC(0x0004) (Edit)
	unsigned long                                      bProcOnKillZDamage : 1;                                   // 0x02FC(0x0004) (Edit)
	unsigned long                                      bIsInvincible : 1;                                        // 0x02FC(0x0004) (Transient)
	float                                              InvincibleDuration;                                       // 0x0300(0x0004) (Edit)
	float                                              healthRestorePct;                                         // 0x0304(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_ExtraLife");
		return ptr;
	}


	void DisableInvincibility();
	void AdjustTargetDamage(class AActor* forActor, class AController* fromController, class UClass* TheDamageType, class UObject* WhatHitMe, const struct FsLastDamageInfo& damageInfo, int* howMuchDamage, struct FVector* Momentum);
	void BuffEffect();
	void DeactivateBuff();
	void ActivateBuff();
	bool CanProc(class AActor* aActor);
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
};


// Class DunDefBuff.DunDefBuff_OnHit
// 0x0058 (0x0354 - 0x02FC)
class UDunDefBuff_OnHit : public UDunDefBuff
{
public:
	int                                                ExtraDamageAmount;                                        // 0x02FC(0x0004) (Edit)
	float                                              ExtraDamageMomentum;                                      // 0x0300(0x0004) (Edit)
	float                                              DealtDamageMultiplier;                                    // 0x0304(0x0004) (Edit)
	class UClass*                                      ExtraDamageType;                                          // 0x0308(0x0004) (Edit)
	class UParticleSystem*                             ExtraDamageParticleEffect;                                // 0x030C(0x0004) (Edit)
	class UClass*                                      TriggerOnDamageType;                                      // 0x0310(0x0004) (Edit)
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                          // 0x0314(0x0004) (Edit)
	unsigned long                                      bScaleOffDealtDamage : 1;                                 // 0x0314(0x0004) (Edit)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnTargetHit;                                  // 0x0318(0x000C) (Edit, NeedCtorLink)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnOwner;                                      // 0x0324(0x000C) (Edit, NeedCtorLink)
	TArray<class UActorFilter*>                        VictimFilters;                                            // 0x0330(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UActorFilter*>                        DamageCauserFilters;                                      // 0x033C(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UActorFilter*>                        WhatDidDamageFilters;                                     // 0x0348(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_OnHit");
		return ptr;
	}


	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
	float GetExtraDamageAmount(float dealtDamage);
	bool IsValidHitTarget(class AActor* TargetActor, class AActor* DamageCauser, class AController* DamageInstigator, class UClass* DamageType, class UObject* whatDidDamage);
	void ReportActorDealtDamage(int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage);
	void AdjustDealtDamage(class AActor* damagedTarget, int OriginalDamage, int* inDamage, struct FsLastDamageInfo* damageInfo, struct FVector* Momentum);
};


// Class DunDefBuff.DunDefBuff_Spawn
// 0x0058 (0x0354 - 0x02FC)
class UDunDefBuff_Spawn : public UDunDefBuff
{
public:
	TEnumAsByte<EBuffSpawnEvent>                       EventToTriggerBuff;                                       // 0x02FC(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	TArray<class UObject*>                             SpawnTemplates;                                           // 0x0300(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bUseRandomSpawnTemplate : 1;                              // 0x030C(0x0004) (Edit)
	unsigned long                                      bUseBuffOwnerAsTarget : 1;                                // 0x030C(0x0004) (Edit)
	unsigned long                                      bIgnoreSpawnCollision : 1;                                // 0x030C(0x0004) (Edit)
	unsigned long                                      bSetTargetAsHomingTarget : 1;                             // 0x030C(0x0004) (Edit)
	unsigned long                                      bDestroyExcessSpawns : 1;                                 // 0x030C(0x0004) (Edit)
	unsigned long                                      bDestroyBuffOnSucessfulSpawn : 1;                         // 0x030C(0x0004) (Edit)
	unsigned long                                      bIgnoreIntervalBetweenProcs : 1;                          // 0x030C(0x0004) (Edit)
	int                                                SpawnCount;                                               // 0x0310(0x0004) (Edit)
	int                                                SpawnLimit;                                               // 0x0314(0x0004) (Edit)
	TArray<int>                                        TieredSpawnCountArray;                                    // 0x0318(0x000C) (Edit, NeedCtorLink)
	TArray<class UActorFilter*>                        EventCauserFilters;                                       // 0x0324(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UActorFilter*>                        EventOwnerFilters;                                        // 0x0330(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UActorFilter*>                        WhatDidDamageFilters;                                     // 0x033C(0x000C) (Edit, NeedCtorLink, EditInline)
	TArray<class UObject*>                             SpawnedObjects;                                           // 0x0348(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Spawn");
		return ptr;
	}


	bool CanSpawn(class UObject* EventCauser, class UObject* EventOwner, class UObject* whatDidDamage);
	void DestroySpawn(class UObject* theObject);
	void EnforceSpawnLimit(int aspawnCount);
	bool CheckSpawnCount();
	int GetSpawnCount();
	void SpawnArchetype(class AActor* TargetActor);
	void ReportBuffRemoved(class UDunDefBuff* BuffRemoved);
	void ReportBuffAdded(class UDunDefBuff* BuffAdded);
	void ReportOwnerJumped();
	void TriggerEvent(TEnumAsByte<EBuffSpawnEvent> EventToTrigger);
	void ReportOwnerDeath();
	void ReportHealedActor(int healedAmount, class AActor* healed);
	void ReportHealed(int healedAmount, class AActor* Healer);
	void ReportKilledActor(class AActor* killedActor, class UClass* TheDamageType, class AController* Killer, class AActor* KillingActor, class UObject* WhatKilledThem);
	void ReportTookDamage(int dealtDamage, class AActor* damager, class UClass* TheDamageType, int adjustedDamage);
	void ReportActorDealtDamage(int dealtDamage, class AActor* Victim, class UClass* TheDamageType, class AActor* DamageCauser, class AController* DamageInstigator, int adjustedDamage, class UObject* whatDidDamage);
};


// Class DunDefBuff.DunDefBuff_Web
// 0x001C (0x0334 - 0x0318)
class UDunDefBuff_Web : public UDunDefBuff_Boost
{
public:
	float                                              MovementSpeedMultiplier;                                  // 0x0318(0x0004) (Edit)
	float                                              TowerAttackRateMultiplier;                                // 0x031C(0x0004) (Edit)
	float                                              PlayerAttackRateMultiplier;                               // 0x0320(0x0004) (Edit)
	float                                              pawnDamageModifier;                                       // 0x0324(0x0004) (Edit)
	float                                              PawnAttackSpeedMult;                                      // 0x0328(0x0004) (Edit)
	float                                              WebbedJumpZ;                                              // 0x032C(0x0004) (Edit)
	unsigned long                                      bUsePawnDeboosting : 1;                                   // 0x0330(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefBuff.DunDefBuff_Web");
		return ptr;
	}


	float GetPawnBoostAmount(TEnumAsByte<EPawnBoostType> boostType);
	void RemoveDebuff();
	void ApplyDebuff();
	void InitalizeActorStats(const TScriptInterface<class UIActorModifierInterface>& ActorStatObject, class UObject* CallingObject, int Tier, bool bBaseValueOnly);
	void BuffEffect();
	bool STATIC_IsValidTarget(class AActor* Target, class AActor* BuffOwner, class UDunDefBuff* aBuffTemplate);
	void DeactivateBuff();
	void ActivateBuff();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
