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

// Class DunDefSpider.DunDefWebProjectile
// 0x009C (0x0444 - 0x03A8)
class ADunDefWebProjectile : public ADunDefHomingProjectile
{
public:
	class AActor*                                      AttachedTo;                                               // 0x03A8(0x0004)
	TArray<struct FWebbedActor>                        AffectingActors;                                          // 0x03AC(0x000C)
	float                                              MovementSpeedMultiplier;                                  // 0x03B8(0x0004)
	float                                              TowerAttackRateMultiplier;                                // 0x03BC(0x0004)
	float                                              PlayerAttackRateMultiplier;                               // 0x03C0(0x0004)
	float                                              pawnDamageModifier;                                       // 0x03C4(0x0004)
	float                                              PawnAttackSpeedMult;                                      // 0x03C8(0x0004)
	float                                              BaseStatusAffectTime;                                     // 0x03CC(0x0004)
	float                                              BasePawnStatusAffectTime;                                 // 0x03D0(0x0004)
	class UParticleSystemComponent*                    AttachedVFX;                                              // 0x03D4(0x0004)
	class UParticleSystem*                             WebAttachTemplate;                                        // 0x03D8(0x0004)
	float                                              AttachedVFXScale;                                         // 0x03DC(0x0004)
	struct FVector                                     AttachedVFXTranslation;                                   // 0x03E0(0x000C)
	float                                              DefaultBoundsHeight;                                      // 0x03EC(0x0004)
	float                                              DefaultBoundWidth;                                        // 0x03F0(0x0004)
	float                                              WebbedJumpZ;                                              // 0x03F4(0x0004)
	struct FName                                       PlayerAttachSocketName;                                   // 0x03F8(0x0008)
	TArray<class UClass*>                              IgnoreActorsForWeb;                                       // 0x0400(0x000C)
	class UParticleSystem*                             WebbedEffect;                                             // 0x040C(0x0004)
	float                                              WebbedEffectScale;                                        // 0x0410(0x0004)
	unsigned long                                      bUseOriginalHoming : 1;                                   // 0x0414(0x0004)
	unsigned long                                      bUseEnemyPawnDeboosting : 1;                              // 0x0414(0x0004)
	unsigned long                                      bHasAttached : 1;                                         // 0x0414(0x0004)
	unsigned long                                      bIsHoming : 1;                                            // 0x0414(0x0004)
	unsigned long                                      bTempHitPawn : 1;                                         // 0x0414(0x0004)
	unsigned long                                      bShutDown : 1;                                            // 0x0414(0x0004)
	unsigned long                                      bScaleUp : 1;                                             // 0x0414(0x0004)
	TArray<class UTowerDeboosterObject*>               TowerDeBoosters;                                          // 0x0418(0x000C)
	TArray<TEnumAsByte<EPawnBoostType>>                deboostingTypes;                                          // 0x0424(0x000C)
	TEnumAsByte<ETowerBoostType>                       towerBoostType;                                           // 0x0430(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FVector                                     InitialTargetLocation;                                    // 0x0434(0x000C)
	float                                              ScaleTime;                                                // 0x0440(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefWebProjectile");
		return ptr;
	}


	void GetBoostedTargets();
	void NotifyOfBoostedRemoval();
	void GetPawnBoostAmount();
	void HasPawnBoostingType();
	void Destroyed();
	void RemoveWebEffect();
	void AddWebEffect();
	void CanAddWebAffect();
	void EndRadiusDamage();
	void AffectVictim();
	void StartRadiusDamage();
	void SetHomingTarget();
	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
	void EndAttachment();
	void SetScaleTime();
	void AddNewAffected();
	void Expire();
	void Explode();
	void UpdateAttachStatus();
	void Landed();
	void DoHoming();
	void Tick();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSpider.DunDefMapInfo_VDay
// 0x0070 (0x03A4 - 0x0334)
class UDunDefMapInfo_VDay : public UDunDefMapInfo
{
public:
	TArray<struct FWaveKillCounts>                     KillCountsPerPlayer;                                      // 0x0334(0x000C)
	TArray<struct FEnemyGenderOverride>                EnemyGenderOverrides;                                     // 0x0340(0x000C)
	float                                              MinTimeBetweenGenderSpawns;                               // 0x034C(0x0004)
	float                                              MaxTimeBetweenGenderSpawns;                               // 0x0350(0x0004)
	float                                              MinTimeBetweenPairSpawns;                                 // 0x0354(0x0004)
	float                                              MaxTimeBetweenPairSpawns;                                 // 0x0358(0x0004)
	float                                              MiniMapGenderIconSize;                                    // 0x035C(0x0004)
	float                                              MiniMapGenderIconOffset;                                  // 0x0360(0x0004)
	float                                              PairMatchDistance;                                        // 0x0364(0x0004)
	TArray<int>                                        MaxGenderPairsAllowed;                                    // 0x0368(0x000C)
	class ADunDefEmitterSpawnable*                     PairMatchedEffect;                                        // 0x0374(0x0004)
	class USoundCue*                                   PairMatchedHUDSound;                                      // 0x0378(0x0004)
	class USoundCue*                                   GenderSpawnedHUDSound;                                    // 0x037C(0x0004)
	unsigned long                                      bNotifyOnGenderSpawn : 1;                                 // 0x0380(0x0004)
	class UTexture2D*                                  BoyIcon;                                                  // 0x0384(0x0004)
	class UTexture2D*                                  GirlIcon;                                                 // 0x0388(0x0004)
	TArray<class ADunDefEnemy*>                        BoyArchetypes;                                            // 0x038C(0x000C)
	TArray<class ADunDefEnemy*>                        GirlArchetypes;                                           // 0x0398(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefMapInfo_VDay");
		return ptr;
	}

};


// Class DunDefSpider.DunDefCrystalCore_PortalDefense
// 0x002C (0x069C - 0x0670)
class ADunDefCrystalCore_PortalDefense : public ADunDefCrystalCore
{
public:
	TArray<class UClass*>                              AllowedToDamageClasses;                                   // 0x0670(0x000C)
	class UParticleSystem*                             WarpEffect;                                               // 0x067C(0x0004)
	class USoundCue*                                   WarpedSound;                                              // 0x0680(0x0004)
	struct FVector                                     WarpEffectOffset;                                         // 0x0684(0x000C)
	float                                              WarpInvincibilityTime;                                    // 0x0690(0x0004)
	float                                              TimeSinceLastTeleport;                                    // 0x0694(0x0004)
	unsigned long                                      bIsInvincible : 1;                                        // 0x0698(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefCrystalCore_PortalDefense");
		return ptr;
	}


	void DrawMyHUD();
	void MakeInvincible();
	void EndWarpInvincibility();
	void OnTeleport();
	void UpdateCrystalCore();
	void TakeDamage();
	void PlayWarpedFX();
	void HandleCoreTouched();
	void Bump();
	void Touch();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSpider.DunDefGRI_PortalDefense
// 0x0020 (0x0740 - 0x0720)
class ADunDefGRI_PortalDefense : public ADunDefGameReplicationInfo
{
public:
	int                                                PortalHitsRemaining;                                      // 0x0720(0x0004)
	int                                                AllowedPortalHits;                                        // 0x0724(0x0004)
	struct FColor                                      TextColor;                                                // 0x0728(0x0004)
	struct FColor                                      InvincibleTextColor;                                      // 0x072C(0x0004)
	struct FString                                     HUDRemainingTouchesString;                                // 0x0730(0x000C)
	unsigned long                                      bIsCoreInvincible : 1;                                    // 0x073C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefGRI_PortalDefense");
		return ptr;
	}


	void NotifyEndWarpInvincibility();
	void NotifyWarpInvincibility();
	void DrawMyHUD();
	void NotifyPortalHit();
	void SetInCombatPhase();
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefSpider
// 0x004C (0x0D18 - 0x0CCC)
class ADunDefSpider : public ADunDefEnemy
{
public:
	struct FName                                       LungeAnimation;                                           // 0x0CCC(0x0008)
	struct FName                                       WebShootAnimation;                                        // 0x0CD4(0x0008)
	struct FName                                       WebChargeAnimation;                                       // 0x0CDC(0x0008)
	struct FName                                       WebShootSocket;                                           // 0x0CE4(0x0008)
	struct FName                                       MeleeSwingSocketName;                                     // 0x0CEC(0x0008)
	struct FName                                       SpawnParticleMeshAttachmentSocket;                        // 0x0CF4(0x0008)
	float                                              MaxWebParticleScale;                                      // 0x0CFC(0x0004)
	class UParticleSystemComponent*                    WebChargeParticleSystem;                                  // 0x0D00(0x0004)
	class USoundCue*                                   WebChargeSound;                                           // 0x0D04(0x0004)
	class UParticleSystemComponent*                    SpawnParticleEffect;                                      // 0x0D08(0x0004)
	unsigned long                                      bAttachSpawnParticleToMesh : 1;                           // 0x0D0C(0x0004)
	unsigned long                                      bUseSpawnEffect : 1;                                      // 0x0D0C(0x0004)
	unsigned long                                      bPlayingWebCharge : 1;                                    // 0x0D0C(0x0004)
	unsigned long                                      bPlaySpawnEffect : 1;                                     // 0x0D0C(0x0004) (Edit)
	float                                              WebStartTime;                                             // 0x0D10(0x0004)
	float                                              WebChargeTime;                                            // 0x0D14(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpider");
		return ptr;
	}


	void PlayDying();
	void Died();
	void Tick();
	void SetWebChargeTime();
	void UpdateWebParticle();
	void PlayMeleeAttackAnimation();
	void ShutDownWebCharge();
	void ShootWeb();
	void MeleeSwingEnd();
	void MeleeSwingStart();
	void GetMeleeSwingLocation();
	void GetWebProjectileLocAndRot();
	void PlayAttackAnimation();
	void PlayWebChargeAnim();
	void PlayWebShootAnim();
	void PlayLungeAnimation();
	void UpdateDifficultyValues();
	void PlaySpawnEffect();
	void ClearSpawnEffect();
	void ReplicatedEvent();
	void ExecReplicatedFunction();
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefMapInfo_PortalDefense
// 0x0038 (0x036C - 0x0334)
class UDunDefMapInfo_PortalDefense : public UDunDefMapInfo
{
public:
	struct FMinMaxValues                               MinMaxEnemyHealth;                                        // 0x0334(0x0008)
	struct FMinMaxValues                               MinMaxEnemyDamage;                                        // 0x033C(0x0008)
	struct FMinMaxValues                               MinMaxEnemyScale;                                         // 0x0344(0x0008)
	float                                              MaxAllowedCoreHits[0x5];                                  // 0x034C(0x0004)
	struct FString                                     RemainingTouchesString;                                   // 0x0360(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefMapInfo_PortalDefense");
		return ptr;
	}


	void GetMaxAllowedCoreHits();
};


// Class DunDefSpider.GameInfo_PortalDefense
// 0x0010 (0x0558 - 0x0548)
class AGameInfo_PortalDefense : public AGameInfo_Special
{
public:
	int                                                currentPortal;                                            // 0x0548(0x0004)
	float                                              GameEnemyHealthMultiplier;                                // 0x054C(0x0004)
	float                                              GameEnemyDamageMultiplier;                                // 0x0550(0x0004)
	float                                              GameEnemyScaleMultiplier;                                 // 0x0554(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.GameInfo_PortalDefense");
		return ptr;
	}


	void GetGameScaleMultiplier();
	void GetGameDamageMultiplier();
	void GetGameHealthMultiplier();
	void UpdateEnemyMultipliers();
	void SetWaveNumber();
	void DoWaveSkipping();
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefGRI_VDay
// 0x0024 (0x0744 - 0x0720)
class ADunDefGRI_VDay : public ADunDefGameReplicationInfo
{
public:
	struct FString                                     PairWasMatched;                                           // 0x0720(0x000C)
	struct FString                                     BoySpawned;                                               // 0x072C(0x000C)
	struct FString                                     GirlSpawned;                                              // 0x0738(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefGRI_VDay");
		return ptr;
	}


	void DrawExtraEnemyMinimapIcon();
	void GenderSpawned();
	void PairMatched();
	void ExecReplicatedFunction();
};


// Class DunDefSpider.DunDefSpiderController
// 0x00AC (0x06B8 - 0x060C)
class ADunDefSpiderController : public ADunDefEnemyController
{
public:
	float                                              LungeAttackDamage;                                        // 0x060C(0x0004)
	float                                              LungeDamageMomentum;                                      // 0x0610(0x0004)
	class UClass*                                      LungeDamageType;                                          // 0x0614(0x0004)
	float                                              Lunge_MaxAttackDistance;                                  // 0x0618(0x0004)
	float                                              Lunge_MinAttackDistance;                                  // 0x061C(0x0004)
	float                                              LungeSpeed_Max;                                           // 0x0620(0x0004)
	float                                              LungeSpeed_Min;                                           // 0x0624(0x0004)
	float                                              LungeCoolDownTime;                                        // 0x0628(0x0004)
	float                                              LungeAngle;                                               // 0x062C(0x0004)
	float                                              LastLungeTime;                                            // 0x0630(0x0004)
	float                                              MinWebAttackPrepTime;                                     // 0x0634(0x0004)
	float                                              MaxWebAttackPrepTime;                                     // 0x0638(0x0004)
	float                                              WebShootCoolDown;                                         // 0x063C(0x0004)
	float                                              Web_MaxShootRange;                                        // 0x0640(0x0004)
	float                                              Web_MinShootRange;                                        // 0x0644(0x0004)
	float                                              WebShootAngle;                                            // 0x0648(0x0004)
	float                                              WebTowerProjectileAggroMult;                              // 0x064C(0x0004)
	unsigned long                                      bAllowWebAttack : 1;                                      // 0x0650(0x0004)
	unsigned long                                      IsInMeleeSwing : 1;                                       // 0x0650(0x0004)
	float                                              LastWebShootTime;                                         // 0x0654(0x0004)
	int                                                MeleeDamageAmount;                                        // 0x0658(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x065C(0x0004)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0660(0x000C)
	class UClass*                                      MeleeDamageType;                                          // 0x066C(0x0004)
	float                                              ShootSpeed;                                               // 0x0670(0x0004)
	float                                              TowerDmgScale;                                            // 0x0674(0x0004)
	float                                              currentWebPrepTime;                                       // 0x0678(0x0004)
	struct FVector                                     PreviousMeleeSwingLocation;                               // 0x067C(0x000C)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x0688(0x000C)
	class ADunDefWebProjectile*                        WebProjectileTemplate;                                    // 0x0694(0x0004)
	struct FName                                       WebAttackStateName;                                       // 0x0698(0x0008)
	struct FName                                       LungeAttackStateName;                                     // 0x06A0(0x0008)
	struct FVector                                     LungeVelocity;                                            // 0x06A8(0x000C)
	class ADunDefSpiderQueenController*                MyQueen;                                                  // 0x06B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderController");
		return ptr;
	}


	void GetToolTipAttackRange();
	void GetTargetableRange();
	void GetAttackDamage();
	void CancelCurrentTarget();
	void SetMyQueen();
	void NotifyQueenOfDeath();
	void PawnDied();
	void IsWithinAttackRange();
	void ShootWeb();
	void GetAttackRange();
	void DoLungeAttack();
	void DoWebAttack();
	void CheckForCustomAttacks();
	void AllowWebAttack();
	void AddToSwingHurtList();
	void EndMeleeSwing();
	void StartMeleeSwing();
	void GetWebChargeTime();
	void NotifyBump();
};


// Class DunDefSpider.DunDefSpiderQueenController
// 0x00C0 (0x06CC - 0x060C)
class ADunDefSpiderQueenController : public ADunDefEnemyController
{
public:
	class ADunDefSpider*                               BabySpiderTemplate;                                       // 0x060C(0x0004)
	TArray<int>                                        NumberOfBabiesToSpawnPerNumPlayers;                       // 0x0610(0x000C)
	float                                              PctOfBabiesAllowedBeforeRespawn;                          // 0x061C(0x0004)
	float                                              BabySpawnAnimSpeed;                                       // 0x0620(0x0004)
	float                                              BabyLaunchSpeed;                                          // 0x0624(0x0004)
	float                                              BabyRespawnDelay;                                         // 0x0628(0x0004)
	int                                                NumSimultaneousBabySpawns;                                // 0x062C(0x0004)
	int                                                MaxNumOfBabies;                                           // 0x0630(0x0004)
	TArray<class ADunDefSpider*>                       MyBabies;                                                 // 0x0634(0x000C)
	int                                                CurrentNumberOfBabies;                                    // 0x0640(0x0004)
	int                                                currentSpawnedBabiesThisSet;                              // 0x0644(0x0004)
	float                                              LastBabySpawnTime;                                        // 0x0648(0x0004)
	unsigned long                                      bSpawnBaby : 1;                                           // 0x064C(0x0004)
	unsigned long                                      IsInMeleeSwing : 1;                                       // 0x064C(0x0004)
	int                                                NumWebProjectiles;                                        // 0x0650(0x0004)
	float                                              WebRefireDelay;                                           // 0x0654(0x0004)
	class ADunDefWebProjectile*                        WebProjectileTemplate;                                    // 0x0658(0x0004)
	float                                              WebShootAngle;                                            // 0x065C(0x0004)
	float                                              ShootSpeed;                                               // 0x0660(0x0004)
	float                                              MinWebShootDistance;                                      // 0x0664(0x0004)
	float                                              MaxWebShootDistance;                                      // 0x0668(0x0004)
	float                                              MinWebAttackPrepTime;                                     // 0x066C(0x0004)
	float                                              MaxWebAttackPrepTime;                                     // 0x0670(0x0004)
	struct FRotator                                    WebShotAngleOffset;                                       // 0x0674(0x000C)
	float                                              MeleeRadius;                                              // 0x0680(0x0004)
	struct FName                                       WebAttackStateName;                                       // 0x0684(0x0008)
	float                                              LastWebShootTime;                                         // 0x068C(0x0004)
	float                                              currentWebPrepTime;                                       // 0x0690(0x0004)
	int                                                currentNumFiredProjectiles;                               // 0x0694(0x0004)
	int                                                MeleeDamageAmount;                                        // 0x0698(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x069C(0x0004)
	struct FVector                                     MeleeSwingExtent;                                         // 0x06A0(0x000C)
	class UClass*                                      MeleeDamageType;                                          // 0x06AC(0x0004)
	struct FVector                                     PreviousMeleeSwingLocation;                               // 0x06B0(0x000C)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x06BC(0x000C)
	float                                              StunTime;                                                 // 0x06C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderQueenController");
		return ptr;
	}


	void SetTarget();
	void ShootWeb();
	void GetWebChargeTime();
	void DoWebAttack();
	void NotifyBabyDeath();
	void GetAttackInterval();
	void CheckForCustomAttacks();
	void FindValidBabyShootLoc();
	void SpawnBaby();
	void FlagSpawnBaby();
	void StartBabySpawn();
	void ForceWakeUp();
	void AddToSwingHurtList();
	void EndMeleeSwing();
	void StartMeleeSwing();
	void PostBeginPlay();
};


// Class DunDefSpider.DunDefSpiderQueen
// 0x00D0 (0x0DC4 - 0x0CF4)
class ADunDefSpiderQueen : public ADunDefBoss
{
public:
	float                                              StunDelay;                                                // 0x0CF4(0x0004)
	float                                              CoreDamageMultiplier;                                     // 0x0CF8(0x0004)
	float                                              MinimumAngleDotForSuperHit;                               // 0x0CFC(0x0004)
	TArray<float>                                      NonStunnedDmgScalar;                                      // 0x0D00(0x000C)
	float                                              CurrentNonStunnedDmgScalar;                               // 0x0D0C(0x0004)
	float                                              BabySpawnPlayRate;                                        // 0x0D10(0x0004)
	struct FName                                       BabySpawnLocSocket;                                       // 0x0D14(0x0008)
	struct FName                                       BabySpawnAnimName;                                        // 0x0D1C(0x0008)
	struct FName                                       StunnedAnimLoop;                                          // 0x0D24(0x0008)
	struct FName                                       CrystalSocketName;                                        // 0x0D2C(0x0008)
	struct FName                                       MeleeSwingSocketName;                                     // 0x0D34(0x0008)
	struct FName                                       WebShootSocket;                                           // 0x0D3C(0x0008)
	struct FName                                       WebShootAnimation;                                        // 0x0D44(0x0008)
	struct FName                                       StunnedHurtAnim;                                          // 0x0D4C(0x0008)
	class ADunDefEmitterSpawnable*                     StunnedHurtEffectTemplate;                                // 0x0D54(0x0004)
	class UParticleSystemComponent*                    StunnedCoreVFX;                                           // 0x0D58(0x0004)
	class UParticleSystemComponent*                    EnragedVFX;                                               // 0x0D5C(0x0004)
	struct FName                                       EnrageSocketName;                                         // 0x0D60(0x0008)
	struct FName                                       UpperBodyLookAtName;                                      // 0x0D68(0x0008)
	float                                              CrystalScaleDownTime;                                     // 0x0D70(0x0004)
	float                                              MinCrystalBrightnessScale;                                // 0x0D74(0x0004)
	float                                              EnrageHealthPct;                                          // 0x0D78(0x0004)
	float                                              EnrageDmgMult;                                            // 0x0D7C(0x0004)
	float                                              EnrageBabySpawnMult;                                      // 0x0D80(0x0004)
	float                                              EnrageIntervalMult;                                       // 0x0D84(0x0004)
	float                                              EnrageGroundSpeedMult;                                    // 0x0D88(0x0004)
	unsigned long                                      bRageMode : 1;                                            // 0x0D8C(0x0004)
	unsigned long                                      bIsStunned : 1;                                           // 0x0D8C(0x0004)
	unsigned long                                      bLookAtTarget : 1;                                        // 0x0D8C(0x0004)
	float                                              TimeOfDeath;                                              // 0x0D90(0x0004)
	class UMaterialInstanceConstant*                   QueenMIC;                                                 // 0x0D94(0x0004)
	class USkelControlLookAt*                          UpperBodyLookAt;                                          // 0x0D98(0x0004)
	class USkelControlLookAt*                          IKTest;                                                   // 0x0D9C(0x0004)
	class AActor*                                      TheLastDamageCauser;                                      // 0x0DA0(0x0004)
	float                                              WebChargeTime;                                            // 0x0DA4(0x0004)
	float                                              WebStartTime;                                             // 0x0DA8(0x0004)
	float                                              currentTakenStunnedDamage;                                // 0x0DAC(0x0004)
	float                                              AllowedDmgStunnedPct;                                     // 0x0DB0(0x0004)
	struct FLinearColor                                EnrageCoreColor;                                          // 0x0DB4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.DunDefSpiderQueen");
		return ptr;
	}


	void SetDyingPhysics();
	void Died();
	void SetUpperBodyLookAt();
	void Tick();
	void PlayStunnedHurtEffect();
	void ShootWeb();
	void PlayWebShootAnim();
	void PlayWebChargeAnim();
	void SetWebChargeTime();
	void GetWebProjectileLocAndRot();
	void GetMeleeSwingLocation();
	void MeleeSwingEnd();
	void MeleeSwingStart();
	void SetRageMode();
	void GetEnrageIntervalMult();
	void TakeDamage();
	void CheckSpecialCoreDmg();
	void AdjustDamage();
	void NotifyTakeHit();
	void GetBabySpawnLocandRot();
	void DoSpawnBaby();
	void StopStunAnimation();
	void PlayStunAnimation();
	void PlayBabySpawnAnim();
	void GetPawnDamageModifier();
	void UpdateDifficultyValues();
	void PostBeginPlay();
	void PlayJumpAnimation();
	void ExecReplicatedFunction();
};


// Class DunDefSpider.TowerDeboosterObject
// 0x0008 (0x0044 - 0x003C)
class UTowerDeboosterObject : public UObject
{
public:
	TEnumAsByte<ETowerBoostType>                       MyBoostType;                                              // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              MyBoostAmount;                                            // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.TowerDeboosterObject");
		return ptr;
	}


	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
	void SetBoostAmount();
	void SetBoostType();
};


// Class DunDefSpider.GameInfo_VDay
// 0x0024 (0x056C - 0x0548)
class AGameInfo_VDay : public AMain
{
public:
	TArray<class ADunDefEnemy*>                        Boys;                                                     // 0x0548(0x000C)
	TArray<class ADunDefEnemy*>                        Girls;                                                    // 0x0554(0x000C)
	unsigned long                                      bUsingGenderSpawnTimer : 1;                               // 0x0560(0x0004)
	float                                              GenderSpawnTimer;                                         // 0x0564(0x0004)
	class UUI_KillCount*                               myKillCountUI;                                            // 0x0568(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpider.GameInfo_VDay");
		return ptr;
	}


	void PairMatched();
	void Tick();
	void FindBestTemplate();
	void WaveSpawnerCreateEnemy();
	void OpenedKillCountUI();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
