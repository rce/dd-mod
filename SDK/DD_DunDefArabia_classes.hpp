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

// Class DunDefArabia.GenieLamp
// 0x007C (0x0298 - 0x021C)
class AGenieLamp : public AActor
{
public:
	class USkeletalMeshComponent*                      LampMesh;                                                 // 0x021C(0x0004)
	struct FName                                       ActivateAnimName;                                         // 0x0220(0x0008)
	struct FName                                       LoopingActiveAnimName;                                    // 0x0228(0x0008)
	struct FName                                       VFXSocketName;                                            // 0x0230(0x0008)
	struct FName                                       CustomAnimNodeName;                                       // 0x0238(0x0008)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0240(0x0004)
	class UParticleSystemComponent*                    ActiveParticleComponent;                                  // 0x0244(0x0004)
	class AActor*                                      AssociatedSpawnPoint;                                     // 0x0248(0x0004)
	struct FColor                                      ActivationTextColor;                                      // 0x024C(0x0004)
	struct FString                                     ActivationText;                                           // 0x0250(0x000C)
	float                                              AllowableActivationDistance;                              // 0x025C(0x0004)
	class ADunDefEmitterSpawnable*                     ActivateEmitterDirectional;                               // 0x0260(0x0004)
	class UAudioComponent*                             ActiveSoundComponent;                                     // 0x0264(0x0004)
	class USoundCue*                                   ActiveSound;                                              // 0x0268(0x0004)
	class UDynamicLightEnvironmentComponent*           TheLightEnvironment;                                      // 0x026C(0x0004)
	unsigned long                                      bSpawnStartLamp : 1;                                      // 0x0270(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0270(0x0004)
	class UMaterialInstanceConstant*                   myLampMaterialOverride;                                   // 0x0274(0x0004)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x0278(0x0004)
	struct FName                                       myMICParam;                                               // 0x027C(0x0008)
	float                                              myMICParamInActiveValue;                                  // 0x0284(0x0004)
	float                                              myMICParamActiveValue;                                    // 0x0288(0x0004)
	int                                                MaterialOverrideIdx;                                      // 0x028C(0x0004)
	class ADunDefGenieBossController*                  myGenie;                                                  // 0x0290(0x0004)
	float                                              LastUsedTime;                                             // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.GenieLamp");
		return ptr;
	}


	void PlayActivateAnim();
	void ShutDownEffects();
	void StartActiveEffects();
	void DoActivation();
	void RemoveCurrentGenieFromLamp();
	void GiveLampAGenie();
	void GetToolTipPriority();
	void TakesToolTipPriority();
	void ContinueDrawingToolTip();
	void DrawToolTip();
	void GetActivationOffset();
	void GetActivationWeighting();
	void Client_Activate();
	void Server_Activate();
	void AllowActivation();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefArabia.DunDefGenieBossController
// 0x0178 (0x0784 - 0x060C)
class ADunDefGenieBossController : public ADunDefEnemyController
{
public:
	TArray<struct FBeamHitActors>                      LeftEyeHitActors;                                         // 0x060C(0x000C)
	TArray<struct FBeamHitActors>                      RightEyeHitActors;                                        // 0x0618(0x000C)
	TArray<struct FTongueTraceSockets>                 TongueSockets;                                            // 0x0624(0x000C)
	TArray<class ADunDefProjectile*>                   BurpProjectiles;                                          // 0x0630(0x000C)
	int                                                NumBurpProjectiles;                                       // 0x063C(0x0004)
	struct FRotator                                    BurpShotAngleOffset;                                      // 0x0640(0x000C)
	float                                              BurpCD;                                                   // 0x064C(0x0004)
	float                                              LastBurpTime;                                             // 0x0650(0x0004)
	TArray<float>                                      HeadActiveTime;                                           // 0x0654(0x000C)
	float                                              HeadActiveDmgPct[0x5];                                    // 0x0660(0x0004)
	float                                              currentDmgAmt;                                            // 0x0674(0x0004)
	float                                              MaxLazerDistance;                                         // 0x0678(0x0004)
	float                                              BeamDamageTime;                                           // 0x067C(0x0004)
	float                                              LazerDmgAmount;                                           // 0x0680(0x0004)
	struct FVector                                     LazerDamageMomentum;                                      // 0x0684(0x000C)
	float                                              LazerCastTime;                                            // 0x0690(0x0004)
	float                                              LazerCastCD;                                              // 0x0694(0x0004)
	float                                              LazerCastCrazyEyeChance;                                  // 0x0698(0x0004)
	float                                              RandomCrazyEyesChance;                                    // 0x069C(0x0004)
	float                                              LastLazerCast;                                            // 0x06A0(0x0004)
	unsigned long                                      bDoingCrazyEyes : 1;                                      // 0x06A4(0x0004)
	unsigned long                                      IsToungueSwing : 1;                                       // 0x06A4(0x0004)
	unsigned long                                      bStartEyeDamage : 1;                                      // 0x06A4(0x0004)
	unsigned long                                      bIsBiting : 1;                                            // 0x06A4(0x0004)
	unsigned long                                      bSuperTongue : 1;                                         // 0x06A4(0x0004)
	unsigned long                                      bForcedHidden : 1;                                        // 0x06A4(0x0004)
	unsigned long                                      bRageMode : 1;                                            // 0x06A4(0x0004)
	unsigned long                                      bSetPawnAsHidden : 1;                                     // 0x06A4(0x0004)
	TArray<class AGenieLamp*>                          myLamps;                                                  // 0x06A8(0x000C)
	TArray<class AGenieLamp*>                          spawnStartLamps;                                          // 0x06B4(0x000C)
	class AGenieLamp*                                  currentLamp;                                              // 0x06C0(0x0004)
	class AActor*                                      RightEyeTarget;                                           // 0x06C4(0x0004)
	class AActor*                                      LeftEyeTarget;                                            // 0x06C8(0x0004)
	int                                                BiteDamageAmount;                                         // 0x06CC(0x0004)
	float                                              BiteDamageMomentum;                                       // 0x06D0(0x0004)
	class UClass*                                      BiteDamageType;                                           // 0x06D4(0x0004)
	float                                              BiteHitRadius;                                            // 0x06D8(0x0004)
	float                                              BiteCD;                                                   // 0x06DC(0x0004)
	float                                              meleeDistance;                                            // 0x06E0(0x0004)
	TArray<class AActor*>                              MeleeHurtList;                                            // 0x06E4(0x000C)
	float                                              LastMeleeTime;                                            // 0x06F0(0x0004)
	class ADunDefDjinn*                                BabyDjinnTemplate;                                        // 0x06F4(0x0004)
	int                                                MaxNumDjinnsToSpawn;                                      // 0x06F8(0x0004)
	int                                                MaxNumDjinnsToSpawnPerSet;                                // 0x06FC(0x0004)
	float                                              BabyDjinnSpawnCD;                                         // 0x0700(0x0004)
	TArray<struct FName>                               DjinSpawnSockets;                                         // 0x0704(0x000C)
	TArray<class ADunDefDjinn*>                        MyDjinns;                                                 // 0x0710(0x000C)
	int                                                currentNumActiveDjinns;                                   // 0x071C(0x0004)
	int                                                currentDjinnsSpawnedThisSet;                              // 0x0720(0x0004)
	float                                              LastDjinnSpawnTime;                                       // 0x0724(0x0004)
	float                                              RotationSpeed;                                            // 0x0728(0x0004)
	float                                              TongueSuperAttackCD;                                      // 0x072C(0x0004)
	float                                              TongueSuperAttackRange;                                   // 0x0730(0x0004)
	float                                              LastSuperTongueAttack;                                    // 0x0734(0x0004)
	float                                              TongueAttackCD;                                           // 0x0738(0x0004)
	int                                                TongueDamageAmount;                                       // 0x073C(0x0004)
	float                                              TongueDamageMomentum;                                     // 0x0740(0x0004)
	class UClass*                                      TongueDamageType;                                         // 0x0744(0x0004)
	float                                              HeadActiveTimes[0x5];                                     // 0x0748(0x0004)
	float                                              GeneralActiveDelay;                                       // 0x075C(0x0004)
	float                                              LastActiveTime;                                           // 0x0760(0x0004)
	struct FVector                                     BurpLocation;                                             // 0x0764(0x000C)
	float                                              RageHealthPct;                                            // 0x0770(0x0004)
	float                                              RageModeCDScalar;                                         // 0x0774(0x0004)
	TArray<float>                                      MaxInLampTime;                                            // 0x0778(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefGenieBossController");
		return ptr;
	}


	void NotifyDjinnDeath();
	void SpawnDjinn();
	void KeepSpawningBabies();
	void ClearHitList();
	void SetTongueSwing();
	void AddToSwingHurtList();
	void ShouldDamage();
	void CheckForBurp();
	void CheckForMelee();
	void CheckForSuperTongue();
	void BiteStop();
	void BiteStart();
	void DoBurp();
	void CheckForCustomAttacks();
	void GetCDMultiplier();
	void CheckPlayerCloseness();
	void PickLamp();
	void NotifyLampRubbed();
	void NotifyReformed();
	void LeaveLamp();
	void CheckActiveDamage();
	void FindTargetRightEye();
	void FindTargetLeftEye();
	void TraceRightEye();
	void TraceLeftEye();
	void ShutDownEyes();
	void StopEyeTracking();
	void GoToLamp();
	void SetRageMode();
	void NotifyTakeHitEX();
	void WantsHurtAnimation();
	void ForceIntoLamp();
	void SetInitialState();
	void PostBeginPlay();
};


// Class DunDefArabia.DjinnLamp
// 0x0008 (0x02A0 - 0x0298)
class ADjinnLamp : public AGenieLamp
{
public:
	class ADunDefDjinnController*                      myDjinn;                                                  // 0x0298(0x0004)
	class ADunDefEmitterSpawnable*                     KillDjinnEmitter;                                         // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DjinnLamp");
		return ptr;
	}


	void PlayKillAnim();
	void DoActivation();
	void RemoveCurrentGenieFromLamp();
	void GiveLampAGenie();
	void ExecReplicatedFunction();
};


// Class DunDefArabia.DunDefDjinnController
// 0x0110 (0x071C - 0x060C)
class ADunDefDjinnController : public ADunDefEnemyController
{
public:
	class AActor*                                      TargetActor;                                              // 0x060C(0x0004)
	float                                              MaximumProjectileAttackRange;                             // 0x0610(0x0004)
	float                                              MinimumProjectileAttackRange;                             // 0x0614(0x0004)
	TArray<class ADunDefProjectile*>                   ProjectileTemplates;                                      // 0x0618(0x000C)
	float                                              SpellInterruptDmgPct;                                     // 0x0624(0x0004)
	TArray<int>                                        GoldHealAmtPerSec;                                        // 0x0628(0x000C)
	float                                              HealGoldTargetRate;                                       // 0x0634(0x0004)
	float                                              GoldFollowRange;                                          // 0x0638(0x0004)
	TArray<float>                                      GoldEnemyCastTime;                                        // 0x063C(0x000C)
	TArray<float>                                      GoldEnemyCoolDown;                                        // 0x0648(0x000C)
	float                                              LastGoldEnemyCastTime;                                    // 0x0654(0x0004)
	TArray<class AActor*>                              CurrentGoldenEnemies;                                     // 0x0658(0x000C)
	float                                              EnemySafeDistance;                                        // 0x0664(0x0004)
	TArray<float>                                      TowerDestructCastTime;                                    // 0x0668(0x000C)
	float                                              TowerDestructCoolDown;                                    // 0x0674(0x0004)
	TArray<float>                                      TowerDestructRange;                                       // 0x0678(0x000C)
	float                                              TowerLevelTargetScalar;                                   // 0x0684(0x0004)
	float                                              TowerLevelDistanceExponent;                               // 0x0688(0x0004)
	float                                              LastTowerDestructTime;                                    // 0x068C(0x0004)
	int                                                currentDamageTaken;                                       // 0x0690(0x0004)
	float                                              GeneralCastCD;                                            // 0x0694(0x0004)
	float                                              LastSpellCastTime;                                        // 0x0698(0x0004)
	TArray<class UClass*>                              IgnoreForGoldTargeting;                                   // 0x069C(0x000C)
	float                                              GoldLevelTargetScalar;                                    // 0x06A8(0x0004)
	float                                              GoldDistanceExponent;                                     // 0x06AC(0x0004)
	float                                              FleeRadius;                                               // 0x06B0(0x0004)
	struct FName                                       FleeStateName;                                            // 0x06B4(0x0008)
	unsigned long                                      bDoNotFlee : 1;                                           // 0x06BC(0x0004)
	unsigned long                                      bIsCasting : 1;                                           // 0x06BC(0x0004)
	unsigned long                                      bFinishedCasting : 1;                                     // 0x06BC(0x0004)
	unsigned long                                      bCastingLineOfSight : 1;                                  // 0x06BC(0x0004)
	unsigned long                                      bWasInterrupted : 1;                                      // 0x06BC(0x0004)
	unsigned long                                      bOnlyShootProjectiles : 1;                                // 0x06BC(0x0004)
	unsigned long                                      bFindLampOnDeath : 1;                                     // 0x06BC(0x0004)
	unsigned long                                      bBecomeAllyOnLampRelease : 1;                             // 0x06BC(0x0004)
	unsigned long                                      bCountDeathOnLampRelease : 1;                             // 0x06BC(0x0004)
	unsigned long                                      bAlly : 1;                                                // 0x06BC(0x0004)
	class ADunDefPawn*                                 FleeTarget;                                               // 0x06C0(0x0004)
	class ANavigationPoint*                            FleePoint;                                                // 0x06C4(0x0004)
	class AActor*                                      currentSpellTarget;                                       // 0x06C8(0x0004)
	class ADunDefDjinnManager*                         CastManager;                                              // 0x06CC(0x0004)
	class UClass*                                      defaultBackUpManagerClass;                                // 0x06D0(0x0004)
	TArray<class UClass*>                              AllowableDamageInterruptActors;                           // 0x06D4(0x000C)
	int                                                currentProjectileIndex;                                   // 0x06E0(0x0004)
	int                                                LastPlayedHurtHealth;                                     // 0x06E4(0x0004)
	float                                              HurtStateHealthPercentInterval;                           // 0x06E8(0x0004)
	float                                              CastTimeOut;                                              // 0x06EC(0x0004)
	class ADunDefGenieBossController*                  myGenie;                                                  // 0x06F0(0x0004)
	float                                              GoldEnemyRange;                                           // 0x06F4(0x0004)
	TArray<float>                                      MaxInLampTime;                                            // 0x06F8(0x000C)
	float                                              AllyDjinnTimeOut;                                         // 0x0704(0x0004)
	int                                                MaxAllowedTimesInLamp;                                    // 0x0708(0x0004)
	float                                              MinTimeToReFlee;                                          // 0x070C(0x0004)
	float                                              lastFleeTime;                                             // 0x0710(0x0004)
	int                                                TimesInLamp;                                              // 0x0714(0x0004)
	class ADjinnLamp*                                  currentLamp;                                              // 0x0718(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinnController");
		return ptr;
	}


	void Destroyed();
	void DoAllyDjinnTimeOut();
	void NotifyLampRubbed();
	void PickLamp();
	void AllowDeath();
	void NotifyFinishedReforming();
	void LeaveLamp();
	void NotifyGenieOfDeath();
	void PawnDied();
	void SetMyGenie();
	void ForceFlee();
	void CheckForFlee();
	void GetProjectile();
	void PickProjectileType();
	void ShootProjectile();
	void CheckForCustomAttacks();
	void IsValidUpgradeTower();
	void CastTowerDestructSpell();
	void FindDestroyTower();
	void DestroyTower();
	void PlayFinishTowerDestructAnim();
	void FinishTowerDestructCast();
	void HealGoldTarget();
	void CastGoldEnemySpell();
	void FindGoldEnemyTarget();
	void CheckValidGoldTarget();
	void PlayFinishGoldAnim();
	void FinishGoldEnemyCast();
	void CheckCastTimeout();
	void CheckForCastingMovement();
	void ClearCurrentSpellTarget();
	void NotifyTakeHitEX();
	void NotifyDamageTaken();
	void CheckCurrentCastTarget();
	void Cough();
	void InterruptSpellCast();
	void CheckSpellDamageAmount();
	void CheckAllowedCastingStart();
	void IsWithinCastingRange();
	void FindNearestFleePoint();
	void CheckFleeDistance();
	void StopFlee();
	void CheckDirectReachability();
	void CheckIndirectReachability();
	void MoveUnreachable();
	void GetObstructionJumpForwardDir();
	void ObstructionJump();
	void GeneratePathToActor();
	void MoveAroundBlockade();
	void NavActorReachable();
	void FindNearestNavPointTo();
	void GetTargetingMultiplier();
	void PostBeginPlay();
};


// Class DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia : public USequenceAction
{
public:
	class ADunDefWaveBillBoard_ArabiaChallenge*        waveBillboard;                                            // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDef_SeqAct_SetWaveBillboardSpawnPoints_Arabia");
		return ptr;
	}


	void Activated();
};


// Class DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge
// 0x000C (0x03DC - 0x03D0)
class ADunDefWaveBillBoard_ArabiaChallenge : public ADunDefWaveBillboard
{
public:
	TArray<struct FEnemyWaveEntry>                     SpecialEnemyWaveEntries;                                  // 0x03D0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefWaveBillBoard_ArabiaChallenge");
		return ptr;
	}


	void RefreshBillboard();
};


// Class DunDefArabia.DunDefDjinn
// 0x01A8 (0x0E74 - 0x0CCC)
class ADunDefDjinn : public ADunDefEnemy
{
public:
	class UParticleSystemComponent*                    FlyingParticleComponent;                                  // 0x0CCC(0x0004)
	struct FName                                       FlyingParticleSocketName;                                 // 0x0CD0(0x0008)
	struct FName                                       InterruptAnimName;                                        // 0x0CD8(0x0008)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x0CE0(0x0004)
	class UParticleSystem*                             GoldParticleEffect;                                       // 0x0CE4(0x0004)
	class ADunDefEmitterSpawnable*                     TowerDestroyTemplate;                                     // 0x0CE8(0x0004)
	class ADunDefEmitterSpawnable*                     TowerDestroyTemplate_Ally;                                // 0x0CEC(0x0004)
	class USoundCue*                                   TowerDestroySound;                                        // 0x0CF0(0x0004)
	class ADunDefEmitterSpawnable*                     GoldEnemyConvertTemplate;                                 // 0x0CF4(0x0004)
	class ADunDefEmitterSpawnable*                     GoldEnemyConvertTemplate_Ally;                            // 0x0CF8(0x0004)
	struct FSpellAnims                                 GoldEnemyAnims;                                           // 0x0CFC(0x003C)
	class ADunDefEnemy*                                goldTarget;                                               // 0x0D38(0x0004)
	class UParticleSystemComponent*                    AttachedVFXComponent;                                     // 0x0D3C(0x0004)
	struct FName                                       ProjectileSocketName;                                     // 0x0D40(0x0008)
	class UAnimNodeSequence*                           SpellAnimNode;                                            // 0x0D48(0x0004)
	class UAnimNodeBlend*                              SpellBlender;                                             // 0x0D4C(0x0004)
	struct FSpellAnims                                 TowerDestructAnims;                                       // 0x0D50(0x003C)
	class ADunDefTower*                                towerTarget;                                              // 0x0D8C(0x0004)
	float                                              DeathScaleDownTime;                                       // 0x0D90(0x0004)
	struct FName                                       GoldBeamSocketName;                                       // 0x0D94(0x0008)
	struct FName                                       TowerBeamSocketName;                                      // 0x0D9C(0x0008)
	class UParticleSystemComponent*                    BeamParticleComponent;                                    // 0x0DA4(0x0004)
	class UParticleSystem*                             GoldBeamTemplate;                                         // 0x0DA8(0x0004)
	class UParticleSystem*                             TowerBeamTemplate;                                        // 0x0DAC(0x0004)
	class UParticleSystem*                             GoldBeamTemplate_Ally;                                    // 0x0DB0(0x0004)
	class UParticleSystem*                             TowerBeamTemplate_Ally;                                   // 0x0DB4(0x0004)
	class UParticleSystemComponent*                    CastingParticleComponent;                                 // 0x0DB8(0x0004)
	float                                              MaxGlowColor;                                             // 0x0DBC(0x0004)
	float                                              startTowerScaleValue;                                     // 0x0DC0(0x0004)
	float                                              currentGlowValue;                                         // 0x0DC4(0x0004)
	float                                              castStart;                                                // 0x0DC8(0x0004)
	float                                              scaleDownTime;                                            // 0x0DCC(0x0004)
	float                                              initialTowerScale;                                        // 0x0DD0(0x0004)
	float                                              scaleStartTime;                                           // 0x0DD4(0x0004)
	unsigned long                                      bScaleDownTower : 1;                                      // 0x0DD8(0x0004)
	unsigned long                                      bIgnoreUpdatingTower : 1;                                 // 0x0DD8(0x0004)
	unsigned long                                      bReforming : 1;                                           // 0x0DD8(0x0004)
	float                                              CastTime;                                                 // 0x0DDC(0x0004)
	struct FLinearColor                                GlowColor;                                                // 0x0DE0(0x0010)
	struct FName                                       GlowColorParamName_Squire;                                // 0x0DF0(0x0008)
	struct FName                                       GlowColorParamName_Apprentice;                            // 0x0DF8(0x0008)
	struct FLinearColor                                originalColor;                                            // 0x0E00(0x0010)
	float                                              MinTrapOpacity;                                           // 0x0E10(0x0004)
	float                                              MinAuraScale;                                             // 0x0E14(0x0004)
	TArray<struct FVector>                             DifficultyIdleColor;                                      // 0x0E18(0x000C)
	int                                                djinnNumber;                                              // 0x0E24(0x0004)
	float                                              DjinnPushForce;                                           // 0x0E28(0x0004)
	float                                              DjinnProxDistance;                                        // 0x0E2C(0x0004)
	struct FColor                                      MiniMapPulseColor;                                        // 0x0E30(0x0004)
	float                                              MiniMapPulseRate;                                         // 0x0E34(0x0004)
	struct FName                                       EnterLampAnim;                                            // 0x0E38(0x0008)
	class ADunDefEmitterSpawnable*                     DirectionalLampVFX;                                       // 0x0E40(0x0004)
	float                                              LampScaleDownTime;                                        // 0x0E44(0x0004)
	class UMaterialInterface*                          AlliedMaterial;                                           // 0x0E48(0x0004)
	class UTexture2D*                                  AlliedIcon;                                               // 0x0E4C(0x0004)
	float                                              AllyDmgMultiplier;                                        // 0x0E50(0x0004)
	float                                              TowerDmgMultiplier;                                       // 0x0E54(0x0004)
	float                                              SpawnImmuneTime;                                          // 0x0E58(0x0004)
	float                                              MinUpDotForForcedMovement;                                // 0x0E5C(0x0004)
	float                                              TowerTargetingDesirability_Desummoning;                   // 0x0E60(0x0004)
	float                                              LampScaleDownStartTime;                                   // 0x0E64(0x0004)
	class ADjinnLamp*                                  myLamp;                                                   // 0x0E68(0x0004)
	class UMaterialInstanceConstant*                   DissolveMIC;                                              // 0x0E6C(0x0004)
	class UAudioComponent*                             CastingSoundComponent;                                    // 0x0E70(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinn");
		return ptr;
	}


	void GetPawnDamageModifier();
	void GetMiniMapIconTexture();
	void UpdateToTeamMaterial();
	void NotifyTeamSwitch();
	void NotifyOfDeath();
	void UnHideDjinn();
	void HideDjinn();
	void PlayGoToLamp();
	void PlayLeaveLamp();
	void LeaveLamp();
	void GetEnemyTargetingDesirability();
	void GetMiniMapIconColor();
	void CheckDjinnProximity();
	void TakeDamage();
	void AllowTrapSpringing();
	void ShutDownAllCastingVFX();
	void PlayAttackAnimation();
	void GetProjectileLocAndRot();
	void FireProjectile();
	void ResetTowers();
	void ShutDownTowerVFX();
	void StopTowerDestructCast();
	void SetInitialTowerValues();
	void StartTowerUpgradeCast();
	void StartTowerDestructCast();
	void StartTowerBeam();
	void UpdateTower();
	void Died();
	void AdjustDamage();
	void UnSetGoldenEnemy();
	void SetGoldenEnemy();
	void PlayInterruptAnimation();
	void ShutDownGoldVFX();
	void StopGoldEnemyCast();
	void StartGoldEnemyCast();
	void StartBeam();
	void PlayMajorHurtAnimation();
	void PlayHurtAnimation();
	void UpdateDifficultyMaterial();
	void SetMovementPhysics();
	void DisableSpawnCollision();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void GetTowerTargetingDesirability();
};


// Class DunDefArabia.DunDefDjinnManager
// 0x0028 (0x0244 - 0x021C)
class ADunDefDjinnManager : public AActor
{
public:
	TArray<class AActor*>                              ActorsBeingTargeted;                                      // 0x021C(0x000C)
	TArray<class AActor*>                              GoldenActor;                                              // 0x0228(0x000C)
	TArray<class ADjinnLamp*>                          myLamps;                                                  // 0x0234(0x000C)
	float                                              LastGoldPurgeTime;                                        // 0x0240(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefDjinnManager");
		return ptr;
	}


	void PickDjinnLamp();
	void IsActorAlreadyGold();
	void RemoveGoldenActorIndexed();
	void RemoveGoldenActor();
	void AddGoldenActor();
	void IsActorAlreadyTargeted();
	void RemoveTargetedActor();
	void AddTargetedActor();
	void PostBeginPlay();
};


// Class DunDefArabia.DunDefGenieBoss
// 0x0158 (0x0E4C - 0x0CF4)
class ADunDefGenieBoss : public ADunDefBoss
{
public:
	TArray<struct FEyeBeam>                            EyeBeamTypes;                                             // 0x0CF4(0x000C)
	int                                                currentLeftEyeBeamIndex;                                  // 0x0D00(0x0004)
	int                                                currentRightEyeBeamIndex;                                 // 0x0D04(0x0004)
	struct FName                                       EyeAttack_Crazy;                                          // 0x0D08(0x0008)
	struct FName                                       EyeAttack_Start;                                          // 0x0D10(0x0008)
	struct FName                                       EyeAttack_Loop;                                           // 0x0D18(0x0008)
	float                                              CrazyEyesTime;                                            // 0x0D20(0x0004)
	float                                              LampVFXMagnitude;                                         // 0x0D24(0x0004)
	class UParticleSystemComponent*                    HoverEffect;                                              // 0x0D28(0x0004)
	struct FName                                       HoverSocketName;                                          // 0x0D2C(0x0008)
	class ADunDefEmitterSpawnable*                     ImpactTemplate;                                           // 0x0D34(0x0004)
	class ADunDefEmitterSpawnable*                     DirectionalLampVFX;                                       // 0x0D38(0x0004)
	class ADunDefEmitterSpawnable*                     CrystalEmitter;                                           // 0x0D3C(0x0004)
	class ADunDefEmitterSpawnable*                     currentLeftEyeImpactEmitter;                              // 0x0D40(0x0004)
	class ADunDefEmitterSpawnable*                     currentRightEyeImpactEmitter;                             // 0x0D44(0x0004)
	class UParticleSystemComponent*                    LeftEyeBeam;                                              // 0x0D48(0x0004)
	class UParticleSystemComponent*                    RightEyeBeam;                                             // 0x0D4C(0x0004)
	class UParticleSystemComponent*                    LeftEyeBeamStart;                                         // 0x0D50(0x0004)
	class UParticleSystemComponent*                    RightEyeBeamStart;                                        // 0x0D54(0x0004)
	class UParticleSystemComponent*                    RageEffect;                                               // 0x0D58(0x0004)
	struct FName                                       RageEffectSocket;                                         // 0x0D5C(0x0008)
	struct FName                                       LeftEyeSocketName;                                        // 0x0D64(0x0008)
	struct FName                                       RightEyeSocketName;                                       // 0x0D6C(0x0008)
	struct FName                                       BurpSocketName;                                           // 0x0D74(0x0008)
	struct FName                                       BurpAnimName;                                             // 0x0D7C(0x0008)
	struct FName                                       BiteAnim;                                                 // 0x0D84(0x0008)
	struct FName                                       BiteSocket;                                               // 0x0D8C(0x0008)
	struct FName                                       DjinSpawnAnimName;                                        // 0x0D94(0x0008)
	struct FName                                       LickAnimName;                                             // 0x0D9C(0x0008)
	struct FName                                       LickAnimName_Super;                                       // 0x0DA4(0x0008)
	struct FName                                       DeathLoopAnim;                                            // 0x0DAC(0x0008)
	float                                              HeadInterpScalar;                                         // 0x0DB4(0x0004)
	float                                              EyeSkelControlLoopAtInterpSpeed;                          // 0x0DB8(0x0004)
	float                                              MaxLazerDistance;                                         // 0x0DBC(0x0004)
	struct FName                                       DisappearAnimName;                                        // 0x0DC0(0x0008)
	float                                              DissolveTime;                                             // 0x0DC8(0x0004)
	float                                              DeathDissolveTime;                                        // 0x0DCC(0x0004)
	float                                              HeadLookAtRotClamp;                                       // 0x0DD0(0x0004)
	float                                              HeadLookAtInterpRate;                                     // 0x0DD4(0x0004)
	float                                              HeadLookAtRotClamp_Crazy;                                 // 0x0DD8(0x0004)
	float                                              HeadLookAtSinScale;                                       // 0x0DDC(0x0004)
	float                                              HeadLookAtInterpRate_Crazy;                               // 0x0DE0(0x0004)
	struct FColor                                      MiniMapPulseColor;                                        // 0x0DE4(0x0004)
	float                                              MiniMapPulseRate;                                         // 0x0DE8(0x0004)
	float                                              TowerDmgMultiplier;                                       // 0x0DEC(0x0004)
	float                                              DissolveBegin;                                            // 0x0DF0(0x0004)
	unsigned long                                      bAllowEyeTracking : 1;                                    // 0x0DF4(0x0004)
	unsigned long                                      bStartEyeDamage : 1;                                      // 0x0DF4(0x0004)
	unsigned long                                      bStartDissolve : 1;                                       // 0x0DF4(0x0004)
	unsigned long                                      bReforming : 1;                                           // 0x0DF4(0x0004)
	unsigned long                                      bForceIntoLamp : 1;                                       // 0x0DF4(0x0004) (Edit)
	unsigned long                                      bRageMode : 1;                                            // 0x0DF4(0x0004) (Edit)
	class USkelControlLookAt*                          RightEyeLookAt;                                           // 0x0DF8(0x0004)
	class USkelControlLookAt*                          LeftEyeLookAt;                                            // 0x0DFC(0x0004)
	class USkelControlSingleBone*                      HeadLookAt;                                               // 0x0E00(0x0004)
	class UMaterialInstanceConstant*                   HeadMIC;                                                  // 0x0E04(0x0004)
	class UMaterialInstanceConstant*                   TongueMIC;                                                // 0x0E08(0x0004)
	class AActor*                                      LeftEyeTarget;                                            // 0x0E0C(0x0004)
	class AActor*                                      RightEyeTarget;                                           // 0x0E10(0x0004)
	class AActor*                                      HeadLookAtTarget;                                         // 0x0E14(0x0004)
	struct FVector                                     PreviousRightEyeLocation;                                 // 0x0E18(0x000C)
	struct FVector                                     PreviousLeftEyeLocation;                                  // 0x0E24(0x000C)
	float                                              LastValidRightEye;                                        // 0x0E30(0x0004)
	float                                              LastValidLeftEye;                                         // 0x0E34(0x0004)
	float                                              EyeResetTime;                                             // 0x0E38(0x0004)
	float                                              CrazyEyeTime;                                             // 0x0E3C(0x0004)
	class USoundCue*                                   GenieEnterLampSound;                                      // 0x0E40(0x0004)
	class USoundCue*                                   GenieExitLampSound;                                       // 0x0E44(0x0004)
	class UAudioComponent*                             EyeCastingSoundComponent;                                 // 0x0E48(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefArabia.DunDefGenieBoss");
		return ptr;
	}


	void ForceSkelUpdatingDelayTurnOff();
	void ForceSkelUpdating();
	void ClearElementalEffect();
	void GetElementalDamageType();
	void TakeDamage();
	void GetMiniMapIconColor();
	void ActivateRageMode();
	void PauseAnimationAfterDeath();
	void GetBurpProjectileLocAndRot();
	void GetRightEyeLocAndRot();
	void GetLeftEyeLocAndRot();
	void GetRightEyeDmgType();
	void GetLeftEyeDmgType();
	void PickRightEyeBeam();
	void PickLeftEyeBeam();
	void PlayBiteAnim();
	void GetDjinnSpawnLocandRot();
	void GetBiteLocation();
	void SpawnBabyDjinn();
	void ClearHitList();
	void BiteStop();
	void BiteStart();
	void Burp();
	void SpawnMoveToLampVFX();
	void PlayBabySpawnAnim();
	void PlayBurpAnim();
	void PlayDisappearAnim();
	void PlayLickAnim();
	void PlaySuperLickAnim();
	void PlayEyeBeamLoop();
	void TongueStart();
	void GetTongueSocketLocation();
	void StopCrazyEye();
	void PlayCrazyEyesAttack();
	void StartEyeDamage();
	void SetLeftEyeTarget();
	void SetRightEyeTarget();
	void PlayEyeAttackStart();
	void StartUpEyes();
	void AdjustDamage();
	void UnHideHead();
	void HideHead();
	void BringGenieOutOfLamp();
	void ShutDownEyes();
	void SetRightEyeBeamLocation();
	void SetLeftEyeBeamLocation();
	void TraceRightEye();
	void TraceLeftEye();
	void EndEyeAttack();
	void UpdateHeadLookAt();
	void SetMovementPhysics();
	void Tick();
	void SetOnAllOverlappingAuras();
	void SetInitialState();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
