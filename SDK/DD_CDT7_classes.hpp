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

// Class CDT7.DunDefProjectile_HarpoonDot
// 0x001C (0x038C - 0x0370)
class ADunDefProjectile_HarpoonDot : public ADunDefProjectile_Harpoon
{
public:
	float                                              DotDamageScale;                                           // 0x0370(0x0004)
	class ADunDefEmitterSpawnable*                     DotTemplate;                                              // 0x0374(0x0004)
	unsigned long                                      bAttach : 1;                                              // 0x0378(0x0004)
	unsigned long                                      bUseDot : 1;                                              // 0x0378(0x0004)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x0378(0x0004)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x0378(0x0004)
	float                                              SlowEnemyTargetPercentage;                                // 0x037C(0x0004)
	float                                              WeakenEnemyTargetPercentage;                              // 0x0380(0x0004)
	float                                              EnemyClearSlowTime;                                       // 0x0384(0x0004)
	float                                              EnemyClearWeakenTime;                                     // 0x0388(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefProjectile_HarpoonDot");
		return ptr;
	}


	void ProcessTouch();
	void SpawnDot();
};


// Class CDT7.DunDefProjectile_StaffDot
// 0x0020 (0x03A4 - 0x0384)
class ADunDefProjectile_StaffDot : public ADunDefProjectile_MagicBolt
{
public:
	float                                              DotDamageScale;                                           // 0x0384(0x0004)
	class ADunDefEmitterSpawnable*                     DotTemplate;                                              // 0x0388(0x0004)
	class ADunDefEmitterSpawnable*                     EffectTemplate;                                           // 0x038C(0x0004)
	unsigned long                                      bAttach : 1;                                              // 0x0390(0x0004)
	unsigned long                                      bUseDot : 1;                                              // 0x0390(0x0004)
	unsigned long                                      bUseEffect : 1;                                           // 0x0390(0x0004)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x0390(0x0004)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x0390(0x0004)
	unsigned long                                      bUseParticleEffectOnHit : 1;                              // 0x0390(0x0004)
	float                                              SlowEnemyTargetPercentage;                                // 0x0394(0x0004)
	float                                              WeakenEnemyTargetPercentage;                              // 0x0398(0x0004)
	float                                              EnemyClearSlowTime;                                       // 0x039C(0x0004)
	float                                              EnemyClearWeakenTime;                                     // 0x03A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefProjectile_StaffDot");
		return ptr;
	}


	void SpawnEffect();
	void Landed();
	void SpawnDot();
	void DoEffect();
	void Explode();
};


// Class CDT7.DunDefWeapon_MagicStaff_Dot
// 0x0000 (0x0614 - 0x0614)
class ADunDefWeapon_MagicStaff_Dot : public ADunDefWeapon_MagicStaff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.DunDefWeapon_MagicStaff_Dot");
		return ptr;
	}


	void ShootProjectiles();
};


// Class CDT7.HeroEquipment_Familiar_TowerDamageScaling
// 0x00FC (0x0BEC - 0x0AF0)
class UHeroEquipment_Familiar_TowerDamageScaling : public UHeroEquipment_Familiar
{
public:
	float                                              ProjectileShootInterval;                                  // 0x0AF0(0x0004)
	class ADunDefProjectile*                           ProjectileTemplate;                                       // 0x0AF4(0x0004)
	class ADunDefProjectile*                           ProjectileTemplateAlt;                                    // 0x0AF8(0x0004)
	TArray<class ADunDefProjectile*>                   ProjectileTemplates;                                      // 0x0AFC(0x000C)
	struct FName                                       FamiliarSocketName;                                       // 0x0B08(0x0008)
	struct FName                                       MuzzleSocketName;                                         // 0x0B10(0x0008)
	struct FName                                       ShootEffectSocket;                                        // 0x0B18(0x0008)
	float                                              TargetRange;                                              // 0x0B20(0x0004)
	unsigned long                                      ScaleTowerDamage : 1;                                     // 0x0B24(0x0004)
	unsigned long                                      bUseFixedShootSpeed : 1;                                  // 0x0B24(0x0004)
	unsigned long                                      bShootProjectileWithoutTarget : 1;                        // 0x0B24(0x0004)
	unsigned long                                      bForceProjectileMuzzleRotation : 1;                       // 0x0B24(0x0004)
	unsigned long                                      bIgnoreHurtAnimationWhenShooting : 1;                     // 0x0B24(0x0004)
	unsigned long                                      bSlowEnemyTarget : 1;                                     // 0x0B24(0x0004)
	unsigned long                                      bWeakenEnemyTarget : 1;                                   // 0x0B24(0x0004)
	unsigned long                                      bUseProjectileImpactedDelegate : 1;                       // 0x0B24(0x0004)
	unsigned long                                      bMythicalScaleTowerDamage : 1;                            // 0x0B24(0x0004)
	unsigned long                                      bChooseHealingTarget : 1;                                 // 0x0B24(0x0004)
	unsigned long                                      bProjectilesCollideWithOwner : 1;                         // 0x0B24(0x0004)
	unsigned long                                      bAddManaForDamage : 1;                                    // 0x0B24(0x0004)
	unsigned long                                      bUseAltProjectile : 1;                                    // 0x0B24(0x0004)
	unsigned long                                      bIgnoreElementInTargeting : 1;                            // 0x0B24(0x0004)
	unsigned long                                      bDoShotsPerSecondBonusCap : 1;                            // 0x0B24(0x0004)
	unsigned long                                      DoLineOfSightCheck : 1;                                   // 0x0B24(0x0004)
	unsigned long                                      bDidAddManaForDamage : 1;                                 // 0x0B24(0x0004)
	TArray<struct FVector>                             ProjectileSpawnOffsets;                                   // 0x0B28(0x000C)
	struct FVector                                     ProjectileSpawnOffset;                                    // 0x0B34(0x000C)
	TArray<struct FRotator>                            ProjectileRotOffsets;                                     // 0x0B40(0x000C)
	TArray<float>                                      ProjectileDelays;                                         // 0x0B4C(0x000C)
	float                                              MinimumProjectileSpeed;                                   // 0x0B58(0x0004)
	float                                              ProjectileSpeedBonusMultiplier;                           // 0x0B5C(0x0004)
	float                                              MaxAttackAnimationSpeed;                                  // 0x0B60(0x0004)
	float                                              ProjectileDamageMultiplier;                               // 0x0B64(0x0004)
	float                                              ShotsPerSecondExponent;                                   // 0x0B68(0x0004)
	float                                              ShotsPerSecondAnimExponent;                               // 0x0B6C(0x0004)
	float                                              AbsoluteDamageMultiplier;                                 // 0x0B70(0x0004)
	float                                              SlowEnemyTargetPercentage;                                // 0x0B74(0x0004)
	float                                              WeakenEnemyTargetPercentage;                              // 0x0B78(0x0004)
	float                                              EnemyClearSlowTime;                                       // 0x0B7C(0x0004)
	float                                              MythicalScaleDamageStatExponent;                          // 0x0B80(0x0004)
	float                                              EnemyClearWeakenTime;                                     // 0x0B84(0x0004)
	float                                              NightmareDamageMultiplier;                                // 0x0B88(0x0004)
	float                                              ExtraNightmareDamageMultiplier;                           // 0x0B8C(0x0004)
	TEnumAsByte<ELevelUpValueType>                     MythicalScaleDamageStatType;                              // 0x0B90(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B91(0x0003) MISSED OFFSET
	class USoundCue*                                   ShootSound;                                               // 0x0B94(0x0004)
	class UParticleSystem*                             ShootEffect;                                              // 0x0B98(0x0004)
	float                                              BaseHealAmount;                                           // 0x0B9C(0x0004)
	float                                              HealAmountMultiplier;                                     // 0x0BA0(0x0004)
	float                                              NightmareHealingMultiplier;                               // 0x0BA4(0x0004)
	float                                              AltProjectileMinimumRange;                                // 0x0BA8(0x0004)
	float                                              HealingPriorityHealthPercentage;                          // 0x0BAC(0x0004)
	struct FName                                       AttackAnimationAlt;                                       // 0x0BB0(0x0008)
	int                                                ShotsPerSecondBonusCap;                                   // 0x0BB8(0x0004)
	float                                              BaseDamageToManaRatio;                                    // 0x0BBC(0x0004)
	float                                              ManaMultiplier;                                           // 0x0BC0(0x0004)
	float                                              MaxManaPerDamage;                                         // 0x0BC4(0x0004)
	float                                              MinManaPerDamage;                                         // 0x0BC8(0x0004)
	float                                              MaxManaMultiplierExponent;                                // 0x0BCC(0x0004)
	float                                              DamageManaMultiplierExponent;                             // 0x0BD0(0x0004)
	float                                              LastShootProjectileTime;                                  // 0x0BD4(0x0004)
	TScriptInterface<class UDunDefTargetableInterface> BestTargetRef;                                            // 0x0BD8(0x0008)
	TArray<struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot> DelayedShots;                                             // 0x0BE0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.HeroEquipment_Familiar_TowerDamageScaling");
		return ptr;
	}


	void GetHealAmount();
	void OnDunDefProjectileImpacted();
	void NotifyEquipment_PawnTookDamage();
	void NotifyEquipment_AnimNotifyAttachment();
	void ShootProjectile();
	void GetMuzzleTransformation();
	void GetWeaponDamage();
	void ApplyPrimaryDamageMultiplierDisplay();
	void GetEquipmentStatValue();
	void AddRandomizeValues();
	void AllowStatLevelUp();
	void GetAttackInterval();
	void GetElementalDamageType();
	void GetProjectileElementalDamage();
	void GetProjectileDamage();
	void GetProjectileSpeed();
	void GetNumProjectiles();
	void GetDesiredSphereRotationalPlacement();
	void GetDesiredDirection();
	void ShutDown();
	void AttachedComponent();
	void UpdateAI();
	void UpdateDelayedShots();
	void TickedByPawn();
	void GetBestTarget();
	void GetBestHealingTarget();
};


// Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling
// 0x0060 (0x0C4C - 0x0BEC)
class UHeroEquipment_Familiar_Melee_TowerScaling : public UHeroEquipment_Familiar_TowerDamageScaling
{
public:
	float                                              MeleeHitRadius;                                           // 0x0BEC(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x0BF0(0x0004)
	class UClass*                                      MeleeDamageType;                                          // 0x0BF4(0x0004)
	float                                              MaxKnockbackMultiplier;                                   // 0x0BF8(0x0004)
	float                                              KnockbackBonusLinearScale;                                // 0x0BFC(0x0004)
	float                                              KnockbackBonusExpScale;                                   // 0x0C00(0x0004)
	unsigned long                                      bAlsoShootProjectile : 1;                                 // 0x0C04(0x0004)
	unsigned long                                      ScaleMeleeDamageForHero : 1;                              // 0x0C04(0x0004)
	unsigned long                                      bUseRandomizedDamage : 1;                                 // 0x0C04(0x0004)
	unsigned long                                      bDoMeleeHealing : 1;                                      // 0x0C04(0x0004)
	unsigned long                                      bIsAttacking : 1;                                         // 0x0C04(0x0004)
	float                                              MeleeRange;                                               // 0x0C08(0x0004)
	float                                              ScaleDamageStatExponent;                                  // 0x0C0C(0x0004)
	float                                              ExtraNightmareMeleeDamageMultiplier;                      // 0x0C10(0x0004)
	struct FName                                       AlsoShootProjectileAnimation;                             // 0x0C14(0x0008)
	TEnumAsByte<ELevelUpValueType>                     ScaleMeleeDamageForHeroStatType;                          // 0x0C1C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	int                                                RandomizedDamageMultiplierMaximum;                        // 0x0C20(0x0004)
	float                                              RandomizedDamageMultiplierDivisor;                        // 0x0C24(0x0004)
	float                                              BaseDamageToHealRatio;                                    // 0x0C28(0x0004)
	float                                              EquipmentDamageMultiplierBase;                            // 0x0C2C(0x0004)
	float                                              MaxHealPerDamage;                                         // 0x0C30(0x0004)
	float                                              MinHealPerDamage;                                         // 0x0C34(0x0004)
	float                                              MaxHealMultiplierExponent;                                // 0x0C38(0x0004)
	float                                              DamageHealMultiplierExponent;                             // 0x0C3C(0x0004)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x0C40(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT7.HeroEquipment_Familiar_Melee_TowerScaling");
		return ptr;
	}


	void AttachedComponent();
	void NotifyEquipment_AnimNotifyAttachment();
	void ShutDown();
	void UpdateAI();
	void GetHealMultiplier();
	void GetMomentumMultiplier();
	void UpdateAttackSwing();
	void AddToSwingHurtList();
	void TickedByPawn();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
