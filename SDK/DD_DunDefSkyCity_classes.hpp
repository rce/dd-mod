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

// Class DunDefSkyCity.DunDefProjectile_Meteor
// 0x0034 (0x0388 - 0x0354)
class ADunDefProjectile_Meteor : public ADunDefProjectile
{
public:
	class ADunDefEmitterSpawnable*                     DamagingFireEmitters;                                     // 0x0354(0x0004)
	int                                                MaxNumberofFires;                                         // 0x0358(0x0004)
	float                                              MinDecalSize;                                             // 0x035C(0x0004)
	float                                              MaxDecalSize;                                             // 0x0360(0x0004)
	float                                              MinDecalHeight;                                           // 0x0364(0x0004)
	float                                              MaxDecalHeight;                                           // 0x0368(0x0004)
	float                                              MinFireSpreadRadius;                                      // 0x036C(0x0004)
	float                                              MaxFireSpreadRadius;                                      // 0x0370(0x0004)
	float                                              decalZOffset;                                             // 0x0374(0x0004)
	class ADecalActorMovableSpawnable*                 DecalActorTemplate;                                       // 0x0378(0x0004)
	unsigned long                                      bUseShadow : 1;                                           // 0x037C(0x0004)
	unsigned long                                      bUseHoming : 1;                                           // 0x037C(0x0004)
	class UStaticMeshComponent*                        MyShadow;                                                 // 0x0380(0x0004)
	class ADecalActorMovableSpawnable*                 myDecal;                                                  // 0x0384(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefProjectile_Meteor");
		return ptr;
	}


	void Destroyed();
	void SpawnFires();
	void Explode();
	void UpdateDecal();
	void UpdateShadow();
	void DoHoming();
	void Tick();
	void PostBeginPlay();
};


// Class DunDefSkyCity.DropOffPoint
// 0x0004 (0x031C - 0x0318)
class ADropOffPoint : public AFlightPathNode
{
public:
	unsigned long                                      bIsBeingUsed : 1;                                         // 0x0318(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DropOffPoint");
		return ptr;
	}


	void GetIsBeingUsed();
	void SetBeingUsed();
};


// Class DunDefSkyCity.DunDef_DamagingInterpActor
// 0x0024 (0x02A4 - 0x0280)
class ADunDef_DamagingInterpActor : public AInterpActor
{
public:
	TArray<struct Fdamagee>                            currentDmgTargets;                                        // 0x0280(0x000C)
	unsigned long                                      bAlwaysDamage : 1;                                        // 0x028C(0x0004)
	unsigned long                                      bKillonDmgEncroach : 1;                                   // 0x028C(0x0004)
	unsigned long                                      bDoingDamage : 1;                                         // 0x028C(0x0004)
	float                                              dmgInterval;                                              // 0x0290(0x0004)
	float                                              KnockbackMomentum;                                        // 0x0294(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x0298(0x0004)
	int                                                dmgAmount;                                                // 0x029C(0x0004)
	float                                              DamageMultiplier;                                         // 0x02A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_DamagingInterpActor");
		return ptr;
	}


	void StopsProjectile();
	void GetDamageAmount();
	void RanInto();
	void EncroachingOn();
	void ClearDamageList();
	void SetDoDamage();
};


// Class DunDefSkyCity.DunDef_OldOne
// 0x0610 (0x085C - 0x024C)
class ADunDef_OldOne : public ASkeletalMeshActor
{
public:
	TArray<struct FCrystals>                           PhaseOneCrystals;                                         // 0x024C(0x000C)
	float                                              PhaseOneDirectedSmashReach;                               // 0x0258(0x0004)
	int                                                PhaseOneMeteorCustomNodeID;                               // 0x025C(0x0004)
	TArray<struct FSmashAnims>                         PhaseOneSmashLeftAnims;                                   // 0x0260(0x000C)
	TArray<struct FSmashAnims>                         PhaseOneSmashRightAnims;                                  // 0x026C(0x000C)
	struct FSmashAnims                                 PhaseOneSmashDoubleAnim;                                  // 0x0278(0x0020)
	struct FName                                       DoubleSocketName;                                         // 0x0298(0x0008)
	float                                              PhaseOneSmashCD;                                          // 0x02A0(0x0004)
	float                                              PhaseOneSmashDoubleCD;                                    // 0x02A4(0x0004)
	float                                              PhaseOneChanceToForceDblSmash;                            // 0x02A8(0x0004)
	float                                              LastPhaseOneSmashTime;                                    // 0x02AC(0x0004)
	float                                              LastDoublePhaseOneSmashTime;                              // 0x02B0(0x0004)
	float                                              DoubleStombZOffset;                                       // 0x02B4(0x0004)
	struct FName                                       PhaseOneProjectileAnim;                                   // 0x02B8(0x0008)
	float                                              PhaseOneProjectileLargeChance;                            // 0x02C0(0x0004)
	float                                              PhaseOneProjectileCD;                                     // 0x02C4(0x0004)
	int                                                NumSmallMeteors;                                          // 0x02C8(0x0004)
	float                                              LastPhaseOneProjectileTime;                               // 0x02CC(0x0004)
	class AActor*                                      projectileTarget;                                         // 0x02D0(0x0004)
	float                                              PhaseOneTauntCD;                                          // 0x02D4(0x0004)
	struct FName                                       PhaseOneTauntAnim;                                        // 0x02D8(0x0008)
	float                                              LastPhaseOneTauntTime;                                    // 0x02E0(0x0004)
	float                                              LastPhaseOneMeteorTime;                                   // 0x02E4(0x0004)
	struct FName                                       PhaseOneEnterEventName;                                   // 0x02E8(0x0008)
	float                                              PhaseOneMinAttackDelay;                                   // 0x02F0(0x0004)
	float                                              PhaseOneMaxAttackDelay;                                   // 0x02F4(0x0004)
	class ADunDefEmitterShockwave*                     SingleHitShockwave;                                       // 0x02F8(0x0004)
	class ADunDefEmitterShockwave*                     DoubleHitShockwave;                                       // 0x02FC(0x0004)
	int                                                PhaseOneNumMeteors;                                       // 0x0300(0x0004)
	float                                              PhaseOneMeteorCD;                                         // 0x0304(0x0004)
	TArray<struct FCrystals>                           PhaseTwoCrystals;                                         // 0x0308(0x000C)
	float                                              PhaseTwoDirectedSmashReach;                               // 0x0314(0x0004)
	TArray<struct FSmashAnims>                         PhaseTwoSmashLeftAnims;                                   // 0x0318(0x000C)
	TArray<struct FSmashAnims>                         PhaseTwoSmashRightAnims;                                  // 0x0324(0x000C)
	struct FSmashAnims                                 PhaseTwoSmashDoubleAnim;                                  // 0x0330(0x0020)
	float                                              PhaseTwoSmashCD;                                          // 0x0350(0x0004)
	float                                              PhaseTwoSmashDoubleCD;                                    // 0x0354(0x0004)
	float                                              PhaseTwoProjectileCD;                                     // 0x0358(0x0004)
	float                                              PhaseTwoChanceToForceDblSmash;                            // 0x035C(0x0004)
	struct FName                                       PhaseTwoProjectileAnim_L;                                 // 0x0360(0x0008)
	struct FName                                       PhaseTwoProjectileAnim_R;                                 // 0x0368(0x0008)
	struct FName                                       PhaseTwoMeteorStrikeAnim;                                 // 0x0370(0x0008)
	class ADunDefEmitterShockwave*                     DoubleHandHitShockwave;                                   // 0x0378(0x0004)
	class ADunDefHomingProjectile*                     PhaseTwoSingleProjectile;                                 // 0x037C(0x0004)
	class ADunDefProjectile*                           PhaseTwoMeteors;                                          // 0x0380(0x0004)
	float                                              PhaseTwoMeteorSpawnHeight;                                // 0x0384(0x0004)
	int                                                PhaseTwoNumMeteors;                                       // 0x0388(0x0004)
	int                                                PhaseTwoMeteorCustomNodeID;                               // 0x038C(0x0004)
	struct FName                                       PhaseTwoBeamAttackAnim;                                   // 0x0390(0x0008)
	struct FName                                       PhaseTwoBeamLoopAnim;                                     // 0x0398(0x0008)
	struct FName                                       PhaseTwoBeamSocket;                                       // 0x03A0(0x0008)
	struct FName                                       PhaseTwoBeamCrazyAttackAnim;                              // 0x03A8(0x0008)
	float                                              PhaseTwoBeamCD;                                           // 0x03B0(0x0004)
	float                                              PhaseTwoChanceForCrazyBeam;                               // 0x03B4(0x0004)
	float                                              PhaseTwoLazerTime;                                        // 0x03B8(0x0004)
	class ADunDefEmitterSpawnable*                     BellyImpactEmitterTemplate;                               // 0x03BC(0x0004)
	class ADunDefEmitterSpawnable*                     BellyImpactCrazyEmitterTemplate;                          // 0x03C0(0x0004)
	class UParticleSystemComponent*                    BellyBeamStart;                                           // 0x03C4(0x0004)
	class UParticleSystemComponent*                    BellyBeam;                                                // 0x03C8(0x0004)
	class UParticleSystem*                             BellyBeamCrazyTemplate;                                   // 0x03CC(0x0004)
	class UParticleSystem*                             BellyBeamStartCrazyTemplate;                              // 0x03D0(0x0004)
	class UParticleSystem*                             BellyBeamStartTemplate;                                   // 0x03D4(0x0004)
	class UParticleSystem*                             BellyBeamNormalTemplate;                                  // 0x03D8(0x0004)
	class UClass*                                      BellyBeamDmgType;                                         // 0x03DC(0x0004)
	class UClass*                                      CrazyBellyBeamDmgType;                                    // 0x03E0(0x0004)
	float                                              BellyDamageMomentum;                                      // 0x03E4(0x0004)
	int                                                BellyDmgAmount;                                           // 0x03E8(0x0004)
	int                                                BellyDmgAmountCrazy;                                      // 0x03EC(0x0004)
	float                                              BellyDmgFrequency;                                        // 0x03F0(0x0004)
	float                                              BellyTrackingSpeed;                                       // 0x03F4(0x0004)
	float                                              BellyCrazyTrackingSpeed;                                  // 0x03F8(0x0004)
	TArray<struct FCrazyBellyLazers>                   BellyLazersCrazy;                                         // 0x03FC(0x000C)
	TArray<struct FCrazyBellyLazers>                   BellyLazersNormal;                                        // 0x0408(0x000C)
	class ADunDefCustomNode*                           PhaseTwoLazerStartPoint;                                  // 0x0414(0x0004)
	float                                              PhaseTwoTauntCD;                                          // 0x0418(0x0004)
	struct FName                                       PhaseTwoTauntAnim;                                        // 0x041C(0x0008)
	float                                              PhaseTwoMinAttackDelay;                                   // 0x0424(0x0004)
	float                                              PhaseTwoMaxAttackDelay;                                   // 0x0428(0x0004)
	float                                              LastPhaseTwoTauntTime;                                    // 0x042C(0x0004)
	TArray<struct FDmgActors>                          BellyBeamHitActors;                                       // 0x0430(0x000C)
	float                                              PhaseTwoMeteorCD;                                         // 0x043C(0x0004)
	class ADunDefEmitterSpawnable*                     currentLeftEyeImpactEmitter;                              // 0x0440(0x0004)
	class ADunDefEmitterSpawnable*                     currentRightEyeImpactEmitter;                             // 0x0444(0x0004)
	class ADunDefEmitterSpawnable*                     currentBellyImpactEmitter;                                // 0x0448(0x0004)
	float                                              LastPhaseTwoSmashTime;                                    // 0x044C(0x0004)
	float                                              LastDoublePhaseTwoSmashTime;                              // 0x0450(0x0004)
	float                                              LastPhaseTwoProjectileTime;                               // 0x0454(0x0004)
	float                                              LastBeamAttackTime;                                       // 0x0458(0x0004)
	float                                              LastPhaseTwoMeteorTime;                                   // 0x045C(0x0004)
	unsigned long                                      bDoCrazyBellyLazers : 1;                                  // 0x0460(0x0004)
	unsigned long                                      bAllowHurtAnim : 1;                                       // 0x0460(0x0004)
	unsigned long                                      bDoCrazyEyeLazers : 1;                                    // 0x0460(0x0004)
	unsigned long                                      bDoingLazers : 1;                                         // 0x0460(0x0004)
	unsigned long                                      bClampDifficultyToInsane : 1;                             // 0x0460(0x0004)
	unsigned long                                      bAllowSuction : 1;                                        // 0x0460(0x0004)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0460(0x0004)
	unsigned long                                      bDamageFlashOldOne : 1;                                   // 0x0460(0x0004)
	unsigned long                                      bAllowPhaseShiftFinish : 1;                               // 0x0460(0x0004)
	unsigned long                                      bCrazyLazerEyes : 1;                                      // 0x0460(0x0004)
	unsigned long                                      bUsingTimeLimit : 1;                                      // 0x0460(0x0004)
	unsigned long                                      bTriggeredLowHealthEvent : 1;                             // 0x0460(0x0004)
	unsigned long                                      bChainIgnore : 1;                                         // 0x0460(0x0004)
	unsigned long                                      bIsWebbed : 1;                                            // 0x0460(0x0004)
	struct FName                                       PhaseTwoEnterEventName;                                   // 0x0464(0x0008)
	float                                              DoubleHandStompZOffset;                                   // 0x046C(0x0004)
	TArray<struct FSmashAnims>                         PhaseThreeSmashLeftAnims;                                 // 0x0470(0x000C)
	TArray<struct FSmashAnims>                         PhaseThreeSmashRightAnims;                                // 0x047C(0x000C)
	class ADunDefOldOneBreath*                         PhaseThreeFlameBreath;                                    // 0x0488(0x0004)
	class ADunDefOldOneBreath*                         PhaseThreeFlameSweep;                                     // 0x048C(0x0004)
	struct FName                                       PhaseThreeFlameSweepStartAnim;                            // 0x0490(0x0008)
	struct FName                                       PhaseThreeFlameBreathSocket;                              // 0x0498(0x0008)
	struct FName                                       PhaseThreeFlameBreathSweepAnim;                           // 0x04A0(0x0008)
	struct FName                                       PhaseThreeFlameBreathBurstAnim;                           // 0x04A8(0x0008)
	struct FSmashAnims                                 PhaseThreeSweepAnimLeft;                                  // 0x04B0(0x0020)
	struct FSmashAnims                                 PhaseThreeSweepAnimRight;                                 // 0x04D0(0x0020)
	struct FSmashAnims                                 PhaseThreeSmashDoubleAnim;                                // 0x04F0(0x0020)
	struct FCrystals                                   PhaseThreeCrystal;                                        // 0x0510(0x0014)
	struct FName                                       PhaseThreeEnterEventName;                                 // 0x0524(0x0008)
	struct FName                                       PhaseThreeLazerDirectedAnim;                              // 0x052C(0x0008)
	struct FName                                       PhaseThreeLazerCrazyAnim;                                 // 0x0534(0x0008)
	struct FName                                       PhaseThreeLazerLoop;                                      // 0x053C(0x0008)
	float                                              PhaseThreeSmashCD;                                        // 0x0544(0x0004)
	float                                              PhaseThreeSmashDoubleCD;                                  // 0x0548(0x0004)
	float                                              PhaseThreeLazerCD;                                        // 0x054C(0x0004)
	float                                              PhaseThreeChanceToForceDblSmash;                          // 0x0550(0x0004)
	float                                              PhaseThreeDirectedSmashReach;                             // 0x0554(0x0004)
	float                                              PhaseThreeSweepCD;                                        // 0x0558(0x0004)
	float                                              PhaseThreeFlameCD;                                        // 0x055C(0x0004)
	float                                              PhaseThreeLazerTime;                                      // 0x0560(0x0004)
	float                                              LazerDmgAmount;                                           // 0x0564(0x0004)
	float                                              LazerDamageMomentum;                                      // 0x0568(0x0004)
	float                                              LazerDmgFrequency;                                        // 0x056C(0x0004)
	float                                              LazerDmgAmountCrazy;                                      // 0x0570(0x0004)
	float                                              EyeTrackingSpeed;                                         // 0x0574(0x0004)
	class UClass*                                      LazerEyeDmgType;                                          // 0x0578(0x0004)
	class UClass*                                      CrazyLazerEyeDmgType;                                     // 0x057C(0x0004)
	class ADunDefEmitterSpawnable*                     ImpactEmitterTemplate;                                    // 0x0580(0x0004)
	class ADunDefEmitterSpawnable*                     ImpactEmitterCrazyEyeTemplate;                            // 0x0584(0x0004)
	float                                              PhaseThreeMinAttackDelay;                                 // 0x0588(0x0004)
	float                                              PhaseThreeMaxAttackDelay;                                 // 0x058C(0x0004)
	int                                                PhaseThreeMeteorCustomNodeID;                             // 0x0590(0x0004)
	int                                                PhaseThreeNumMeteors;                                     // 0x0594(0x0004)
	struct FName                                       PhaseThreeProjectileAnim_L;                               // 0x0598(0x0008)
	struct FName                                       PhaseThreeProjectileAnim_R;                               // 0x05A0(0x0008)
	TArray<struct FDmgActors>                          LeftEyeHitActors;                                         // 0x05A8(0x000C)
	TArray<struct FDmgActors>                          RightEyeHitActors;                                        // 0x05B4(0x000C)
	float                                              LastPhaseThreeSmashTime;                                  // 0x05C0(0x0004)
	float                                              LastDoublePhaseThreeSmashTime;                            // 0x05C4(0x0004)
	float                                              LastPhaseThreeSweepTime;                                  // 0x05C8(0x0004)
	float                                              LastPhaseThreeFlameTime;                                  // 0x05CC(0x0004)
	float                                              LastPhaseThreeLazerTime;                                  // 0x05D0(0x0004)
	struct FVector                                     prevLeftEyeLoc;                                           // 0x05D4(0x000C)
	struct FVector                                     prevRightEyeLoc;                                          // 0x05E0(0x000C)
	class ADunDefOldOneBreath*                         currentFlame;                                             // 0x05EC(0x0004)
	class AActor*                                      currentLazerTarget;                                       // 0x05F0(0x0004)
	struct FName                                       LeftEyeSocket;                                            // 0x05F4(0x0008)
	struct FName                                       RightEyeSocket;                                           // 0x05FC(0x0008)
	struct FName                                       LeftEyeTopSocket;                                         // 0x0604(0x0008)
	struct FName                                       RightTopEyeSocket;                                        // 0x060C(0x0008)
	class UParticleSystemComponent*                    LeftEyeBeam;                                              // 0x0614(0x0004)
	class UParticleSystemComponent*                    RightEyeBeam;                                             // 0x0618(0x0004)
	class UParticleSystemComponent*                    LeftEyeBeamStart;                                         // 0x061C(0x0004)
	class UParticleSystemComponent*                    RightEyeBeamStart;                                        // 0x0620(0x0004)
	class UParticleSystemComponent*                    LeftEyeTopBeam;                                           // 0x0624(0x0004)
	class UParticleSystemComponent*                    RightEyeTopBeam;                                          // 0x0628(0x0004)
	class UParticleSystemComponent*                    LeftEyeTopBeamStart;                                      // 0x062C(0x0004)
	class UParticleSystemComponent*                    RightEyeTopBeamStart;                                     // 0x0630(0x0004)
	float                                              PhaseThreeMaxFlameBreathAngle;                            // 0x0634(0x0004)
	class ADunDefGasCloud*                             LazerFires;                                               // 0x0638(0x0004)
	float                                              LazerFireFrequency;                                       // 0x063C(0x0004)
	class ADunDefCustomNode*                           PhaseThreeLazerStartPoint;                                // 0x0640(0x0004)
	float                                              LastLazerFireTime;                                        // 0x0644(0x0004)
	float                                              PhaseThreeMaxSwipeRadius;                                 // 0x0648(0x0004)
	float                                              PhaseThreeTauntCD;                                        // 0x064C(0x0004)
	struct FName                                       PhaseThreeTauntAnim;                                      // 0x0650(0x0008)
	TArray<float>                                      PhaseThreeTimeLimit;                                      // 0x0658(0x000C)
	float                                              LastPhaseThreeTauntTime;                                  // 0x0664(0x0004)
	TArray<struct FCrazyBellyLazers>                   PhaseThreeMultiLazer;                                     // 0x0668(0x000C)
	float                                              PhaseThreeLazerCrazyChance;                               // 0x0674(0x0004)
	float                                              PhaseThreeChanceForFlameSweep;                            // 0x0678(0x0004)
	class UParticleSystem*                             EyeBeamCrazyStartTemplate;                                // 0x067C(0x0004)
	class UParticleSystem*                             EyeBeamCrazyTemplate;                                     // 0x0680(0x0004)
	TArray<struct FCollisionBoxes>                     myCollisionBoxes;                                         // 0x0684(0x000C)
	class ADunDefProjectile*                           LargeFireBallProjectile;                                  // 0x0690(0x0004)
	class ADunDefProjectile*                           SmallFireBallProjectile;                                  // 0x0694(0x0004)
	struct FName                                       LeftHandSocketName;                                       // 0x0698(0x0008)
	struct FName                                       RightHandSocketName;                                      // 0x06A0(0x0008)
	struct FName                                       LeftHandSmashSocketName;                                  // 0x06A8(0x0008)
	struct FName                                       RightHandSmashSocketName;                                 // 0x06B0(0x0008)
	struct FName                                       DoubleHandSmashSocketName;                                // 0x06B8(0x0008)
	struct FName                                       LeftFootSocketName;                                       // 0x06C0(0x0008)
	struct FName                                       RightFootSocketName;                                      // 0x06C8(0x0008)
	struct FName                                       DoubleFootSocketName;                                     // 0x06D0(0x0008)
	struct FName                                       TransitionToPhaseOne;                                     // 0x06D8(0x0008)
	struct FName                                       TransitionToPhaseTwo;                                     // 0x06E0(0x0008)
	struct FName                                       TransitionToPhaseThree;                                   // 0x06E8(0x0008)
	struct FName                                       DeathEventName;                                           // 0x06F0(0x0008)
	TEnumAsByte<EPhase>                                myCurrentPhase;                                           // 0x06F8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	TArray<struct FName>                               CustomAnimNodeNames;                                      // 0x06FC(0x000C)
	struct FName                                       CustomAnimBlenderName;                                    // 0x0708(0x0008)
	class UAnimNodeBlend*                              CustomAnimBlender;                                        // 0x0710(0x0004)
	int                                                LastCustomAnimNodePlayIndex;                              // 0x0714(0x0004)
	TArray<class UAnimNodePlayCustomAnim*>             CustomAnimNodes;                                          // 0x0718(0x000C)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x0724(0x000C)
	TArray<float>                                      DifficultyDamageMultipliers;                              // 0x0730(0x000C)
	TArray<float>                                      NumPlayerHealthMultipliers;                               // 0x073C(0x000C)
	float                                              NightmareDamageMultiplier;                                // 0x0748(0x0004)
	float                                              ExtraNightmareHealthMultiplier;                           // 0x074C(0x0004)
	int                                                MaxDifficultySets;                                        // 0x0750(0x0004)
	int                                                MyTargetingTeam;                                          // 0x0754(0x0004)
	float                                              AttackRange;                                              // 0x0758(0x0004)
	struct FName                                       HeadLookAtName;                                           // 0x075C(0x0008)
	struct FName                                       HealthEventName;                                          // 0x0764(0x0008)
	class ADunDefEmitterSpawnable*                     HandMuzzleEffect;                                         // 0x076C(0x0004)
	class UAudioComponent*                             LazerCastingSoundComponent;                               // 0x0770(0x0004)
	float                                              LastFlashingDamageTime;                                   // 0x0774(0x0004)
	float                                              DamageFlashingDuration;                                   // 0x0778(0x0004)
	float                                              DamageFlashingFadeExponent;                               // 0x077C(0x0004)
	float                                              DamageFlashingIntensity;                                  // 0x0780(0x0004)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x0784(0x0008)
	TArray<int>                                        DamageMatInstanceIndices;                                 // 0x078C(0x000C)
	TArray<class UMaterialInstanceConstant*>           MyDamageMatInstances;                                     // 0x0798(0x000C)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x07A4(0x0004)
	class AActor*                                      currentSmashTarget;                                       // 0x07A8(0x0004)
	float                                              currentAttackTime;                                        // 0x07AC(0x0004)
	struct FSmashAnims                                 currentSmashAnim;                                         // 0x07B0(0x0020)
	struct FName                                       currentPhaseShiftAnim;                                    // 0x07D0(0x0008)
	struct FName                                       currentHurtAnim;                                          // 0x07D8(0x0008)
	int                                                crystalsDestroyedThisPhase;                               // 0x07E0(0x0004)
	int                                                difficultyIndex;                                          // 0x07E4(0x0004)
	float                                              DifficultyHealthMultiplier;                               // 0x07E8(0x0004)
	float                                              DifficultyDamageMultiplier;                               // 0x07EC(0x0004)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P1;                                          // 0x07F0(0x000C)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P2;                                          // 0x07FC(0x000C)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P3;                                          // 0x0808(0x000C)
	struct FVector                                     prevLazerLoc;                                             // 0x0814(0x000C)
	class USkelControlLookAt*                          HeadLookAt;                                               // 0x0820(0x0004)
	float                                              currentTimeLimit;                                         // 0x0824(0x0004)
	float                                              currentPhaseStart;                                        // 0x0828(0x0004)
	float                                              tauntChance;                                              // 0x082C(0x0004)
	float                                              projectileChance;                                         // 0x0830(0x0004)
	float                                              smashChance;                                              // 0x0834(0x0004)
	float                                              lazerChance;                                              // 0x0838(0x0004)
	float                                              meteorChance;                                             // 0x083C(0x0004)
	float                                              swipeChance;                                              // 0x0840(0x0004)
	float                                              flameChance;                                              // 0x0844(0x0004)
	float                                              sweepChance;                                              // 0x0848(0x0004)
	class ADunDef_OldOneCrystals*                      primaryCrystal;                                           // 0x084C(0x0004)
	TArray<class ADunDefTower_ChainLightning*>         ChainingTowers;                                           // 0x0850(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_OldOne");
		return ptr;
	}


	void GetLightningTowerDamagePercent();
	void setIsWebbed();
	void isWebbed();
	void GetChainIgnore();
	void SetChainIgnore();
	void IsBeingChainedBy();
	void RemoveFromChainingTowers();
	void AddToChainingTowers();
	void AllowSuction();
	void IsPlayingCustomAnim();
	void SetupDamageFlashing();
	void UpdateDamageFlashing();
	void LocalTookDamage();
	void NotifyHealthLevel();
	void HealPctOfMaxHealth();
	void GetHealthPercent();
	void GetHealth();
	void ForceMoveActor();
	void GetOverrideTargetComponent();
	void GetMass();
	void AllowDarknessIgnorance();
	void ForceFriendlyFire();
	void GetInterpolatedTargetingLocation();
	void GetTargetingLocation();
	void OnDestroy_RemoveFromTargetableList();
	void OnPostBeginPlay_AddToTargetableList();
	void UnregisterAttacker();
	void RegisterAttacker();
	void GetAttackRangeOffset();
	void IgnoreFriendlyFireDamage();
	void GetTargetingTeam();
	void GetTowerTargetingDesirability();
	void GetPlayerTargetingDesirability();
	void TraceEyeMultiBeamDmg();
	void SetMultiEyeBeamLocation();
	void TraceMultiEyeBeam();
	void SpawnFire();
	void TraceRightEyeDmg();
	void SetRightEyeBeamLocation();
	void TraceLeftEyeDmg();
	void SetLeftEyeBeamLocation();
	void TraceRightEye();
	void TraceLeftEye();
	void TraceBellyMultiBeamDmg();
	void TraceBellyBeamDmg();
	void SetBellyBeamLocation();
	void SetMultiBellyBeamLocation();
	void TraceMultiBellyBeam();
	void SetRandomLazerPoint();
	void TraceBellyBeam();
	void SetNormalBellyTarget();
	void InitNormalBeams();
	void ChooseTarget();
	void StartLazers();
	void StopFlameBreath();
	void StartFlameSweep();
	void StartFlameburst();
	void ActivateChestCrystal();
	void ActivateRightHandCrystal();
	void ActivateLeftHandCrystal();
	void DeactivateChestCrystal();
	void DeactivateRightHandCrystal();
	void DeactivateLeftHandCrystal();
	void SpawnDoubleSlamEmitter();
	void SpawnSingleSlamEmitter();
	void DoubleStomp();
	void RightFootStomp();
	void LeftFootStomp();
	void UpdateDifficultyValues();
	void DeActivateCollisionDamage();
	void ActivateCollisionDamage();
	void GetNumCrystalsThisPhase();
	void DoPhaseShift();
	void ArePlayersWithinRange();
	void DoDeath();
	void CheckCrystalDeaths();
	void NotifyCrystalDeath();
	void DoubleFootStomp();
	void LeftHandProjectile();
	void RightHandProjectile();
	void PickSmashAttack();
	void DoProjectileAttack();
	void CheckProjectileAttack();
	void CheckForTaunt();
	void CheckForBeamAttack();
	void DoTaunt();
	void GetTauntAnim();
	void PlayHurtAnim();
	void FinishTaunt();
	void SpawnMeteor();
	void StartMeteorAttack();
	void CheckForMeteorAttack();
	void CheckForFlame();
	void CheckForLazer();
	void CheckForSweep();
	void EndAttack();
	void ShutDownLazers();
	void SetInitalEyeLazerTarget();
	void StartBellyLazer();
	void StartEyeLazer();
	void BeginFlameSweepAnim();
	void DoFlameSweep();
	void DoubleHandStomp();
	void LeftHandStomp();
	void RightHandStomp();
	void GetAttackDelay();
	void SetPhase();
	void OnToggle();
	void StartAttack();
	void PickAttack();
	void StopCustomAnim();
	void PlayCustomAnim();
	void InitCrystals();
	void ClearCrystalsRefs();
	void PopulateCustomNode();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSkyCity.DunDef_OldOneCrystals
// 0x0098 (0x05A0 - 0x0508)
class ADunDef_OldOneCrystals : public ADunDefDamageableTarget
{
public:
	struct FName                                       SocketBaseName;                                           // 0x0508(0x0008)
	class UStaticMeshComponent*                        MyMesh;                                                   // 0x0510(0x0004)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0514(0x0004)
	class UParticleSystemComponent*                    ActiveParticle;                                           // 0x0518(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x051C(0x0004)
	TEnumAsByte<EPhase>                                myPhase;                                                  // 0x0520(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	unsigned long                                      bLimitDamageOnActivation : 1;                             // 0x0524(0x0004)
	unsigned long                                      bFullHealOnDeath : 1;                                     // 0x0524(0x0004)
	unsigned long                                      bPrimaryCrystal : 1;                                      // 0x0524(0x0004)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0524(0x0004)
	unsigned long                                      bDamageFlashOldOne : 1;                                   // 0x0524(0x0004)
	unsigned long                                      bShutDown : 1;                                            // 0x0524(0x0004) (Edit)
	unsigned long                                      bInPlay : 1;                                              // 0x0524(0x0004) (Edit)
	float                                              MaxAllowedDmgPct;                                         // 0x0528(0x0004)
	struct FName                                       MeshActiveColorParamName;                                 // 0x052C(0x0008)
	struct FName                                       DissolveParamName;                                        // 0x0534(0x0008)
	struct FLinearColor                                ActiveColor;                                              // 0x053C(0x0010)
	struct FLinearColor                                InActiveColor;                                            // 0x054C(0x0010)
	struct FName                                       HurtAnimName;                                             // 0x055C(0x0008)
	float                                              NotifyAtHealthPct;                                        // 0x0564(0x0004)
	float                                              ActivateTime;                                             // 0x0568(0x0004)
	float                                              DissolveTime;                                             // 0x056C(0x0004)
	float                                              LastFlashingDamageTime;                                   // 0x0570(0x0004)
	float                                              DamageFlashingDuration;                                   // 0x0574(0x0004)
	float                                              DamageFlashingFadeExponent;                               // 0x0578(0x0004)
	float                                              DamageFlashingIntensity;                                  // 0x057C(0x0004)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x0580(0x0008)
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                                // 0x0588(0x0004)
	int                                                currentDamageAmt;                                         // 0x058C(0x0004)
	class ADunDef_OldOne*                              myOldOne;                                                 // 0x0590(0x0004) (Edit)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x0594(0x0004)
	float                                              ActivateStartTime;                                        // 0x0598(0x0004)
	float                                              DissolveStartTime;                                        // 0x059C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_OldOneCrystals");
		return ptr;
	}


	void DTGetPlayerTargetingDesirability();
	void DTGetTowerTargetingDesirability();
	void IgnoreFriendlyFireDamage();
	void DrawMyHUD();
	void PlayHitEffect();
	void UpdateDamageFlashing();
	void LocalTookDamage();
	void SubtractHealth();
	void SetInPlay();
	void RepairCrystal();
	void StopsProjectile();
	void UpdateHealthColor();
	void NotifyHealthChange();
	void UpdateActivate();
	void Deactivate();
	void Activate();
	void BaseChange();
	void ShutDownCrystal();
	void UpdateDissolve();
	void DissolveCrystal();
	void PlayDeath();
	void Died();
	void InitCrystal();
	void ReplicatedEvent();
};


// Class DunDefSkyCity.DunDefOldOneBreath
// 0x000C (0x0354 - 0x0348)
class ADunDefOldOneBreath : public ADunDefGasCloud
{
public:
	float                                              MaxTargetDeltaPitch;                                      // 0x0348(0x0004)
	float                                              MaxTargetDeltaYaw;                                        // 0x034C(0x0004)
	unsigned long                                      bCheckPlayerInvincibility : 1;                            // 0x0350(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefOldOneBreath");
		return ptr;
	}


	void HurtRadius();
};


// Class DunDefSkyCity.DunDefEmitterShockwave
// 0x0058 (0x032C - 0x02D4)
class ADunDefEmitterShockwave : public ADunDefEmitterSpawnable
{
public:
	float                                              MaximumMassMomentumScale;                                 // 0x02D4(0x0004)
	float                                              MassMomentumBaseScale;                                    // 0x02D8(0x0004)
	float                                              MassMomentumScaleExponent;                                // 0x02DC(0x0004)
	int                                                Damage;                                                   // 0x02E0(0x0004)
	float                                              Radius;                                                   // 0x02E4(0x0004)
	float                                              EffectRadius;                                             // 0x02E8(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x02EC(0x0004)
	float                                              MyMomentum;                                               // 0x02F0(0x0004)
	float                                              DamageDelay;                                              // 0x02F4(0x0004)
	float                                              DamageFalloffExponent;                                    // 0x02F8(0x0004)
	unsigned long                                      bExpandingShockwave : 1;                                  // 0x02FC(0x0004)
	unsigned long                                      bExpandAsRing : 1;                                        // 0x02FC(0x0004)
	unsigned long                                      bCheckPlayerInvincibility : 1;                            // 0x02FC(0x0004)
	struct FName                                       ScaleParamName;                                           // 0x0300(0x0008)
	float                                              RingWidth;                                                // 0x0308(0x0004)
	float                                              InitialRadius;                                            // 0x030C(0x0004)
	float                                              RingHeight;                                               // 0x0310(0x0004)
	float                                              ExpansionTime;                                            // 0x0314(0x0004)
	float                                              currentExpansionTime;                                     // 0x0318(0x0004)
	float                                              currentRadius;                                            // 0x031C(0x0004)
	TArray<class AActor*>                              hitActors;                                                // 0x0320(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefEmitterShockwave");
		return ptr;
	}


	void RingHurtRadius();
	void Tick();
	void STATIC_AllowSpawn();
	void HurtRadius();
	void DoDamage();
	void PostBeginPlay();
};


// Class DunDefSkyCity.DunDefGoblinCopter
// 0x00DC (0x0DA8 - 0x0CCC)
class ADunDefGoblinCopter : public ADunDefEnemy
{
public:
	TArray<struct FHoldAI>                             HoldableTemplates;                                        // 0x0CCC(0x000C)
	struct FName                                       DropOffAnimName;                                          // 0x0CD8(0x0008)
	struct FName                                       ShootLeftAnimName;                                        // 0x0CE0(0x0008)
	struct FName                                       ShootRightAnimName;                                       // 0x0CE8(0x0008)
	struct FName                                       ShootDoubleAnimName;                                      // 0x0CF0(0x0008)
	TArray<struct FName>                               SpawnInAnimName;                                          // 0x0CF8(0x000C)
	struct FName                                       ShootLeftSocketName;                                      // 0x0D04(0x0008)
	struct FName                                       ShootRightSocketName;                                     // 0x0D0C(0x0008)
	float                                              DeathVelocityForce;                                       // 0x0D14(0x0004)
	float                                              DeathSpinRotRate;                                         // 0x0D18(0x0004)
	float                                              MiniMapHoldOffset;                                        // 0x0D1C(0x0004)
	float                                              MiniMapHoldIconSize;                                      // 0x0D20(0x0004)
	float                                              HeldMiniMapIconSize;                                      // 0x0D24(0x0004)
	TArray<class ADunDefEmitterSpawnable*>             DestructionEffects;                                       // 0x0D28(0x000C)
	class ADunDefEmitterSpawnable*                     FlareTemplate;                                            // 0x0D34(0x0004)
	struct FName                                       RightFlareSocketName;                                     // 0x0D38(0x0008)
	struct FName                                       LeftFlareSocketName;                                      // 0x0D40(0x0008)
	float                                              FlareVelocity;                                            // 0x0D48(0x0004)
	float                                              FlareFallSpeed;                                           // 0x0D4C(0x0004)
	float                                              FlareLifeSpan;                                            // 0x0D50(0x0004)
	float                                              FlareLifeSpanOffset;                                      // 0x0D54(0x0004)
	struct FRotator                                    FlareRotOffset;                                           // 0x0D58(0x000C)
	TArray<struct FHeldPawnDifficultyOffset>           HeldPawnDifficultyOffsets;                                // 0x0D64(0x000C)
	TArray<class UClass*>                              IgnoreDmgTypesWithFlare;                                  // 0x0D70(0x000C)
	float                                              PctDmgtoDroppedPawnOnDrop;                                // 0x0D7C(0x0004)
	class ADunDefEmitterSpawnable*                     myCurrentFlare;                                           // 0x0D80(0x0004)
	class ADunDefEnemy*                                currentHeldPawn;                                          // 0x0D84(0x0004) (Edit)
	int                                                currentHeldIndex;                                         // 0x0D88(0x0004)
	struct FVector                                     currentHoldOffset;                                        // 0x0D8C(0x000C)
	unsigned long                                      bPawnUsedLocInterp : 1;                                   // 0x0D98(0x0004)
	unsigned long                                      bPawnUsedClientRotInterp : 1;                             // 0x0D98(0x0004)
	unsigned long                                      bStartFalling : 1;                                        // 0x0D98(0x0004)
	unsigned long                                      bDamagePawnOnDrop : 1;                                    // 0x0D98(0x0004)
	int                                                GCopterNumber;                                            // 0x0D9C(0x0004)
	float                                              CopterPushForce;                                          // 0x0DA0(0x0004)
	float                                              CopterProxDistance;                                       // 0x0DA4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefGoblinCopter");
		return ptr;
	}


	void TakeDamage();
	void GetTargetingLocation();
	void SpawnFlare();
	void GetFlareSpawnLocAndRot();
	void CheckGCopterProximity();
	void UpdateDifficultyValues();
	void DrawMiniMapIcon();
	void PauseAnimationAfterDeath();
	void PlayDying();
	void Died();
	void DoDoubleShoot();
	void DoRightShoot();
	void DoLeftShoot();
	void PlayDoubleShootAnim();
	void PlayRightShootAnim();
	void PlayLeftShootAnim();
	void ResetHeldPawnValues();
	void DropPawn();
	void PlayDropOffAnim();
	void SetMovementPhysics();
	void CanBeBaseForPawn();
	void InitNewHeldPawn();
	void SetUpHoldingPawn();
	void SpawnHoldingPawn();
	void GetHeldPawnExtraDifficultyOffset();
	void Tick();
	void TurnOnVFX();
	void UpdateDifficultyMaterial();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSkyCity.DunDefGoblinCopterController
// 0x006C (0x0678 - 0x060C)
class ADunDefGoblinCopterController : public ADunDefEnemyController
{
public:
	class AActor*                                      TargetActor;                                              // 0x060C(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x0610(0x000C)
	float                                              LastNavCheck;                                             // 0x061C(0x0004)
	class ADunDefGoblinCopter*                         myPawn;                                                   // 0x0620(0x0004)
	float                                              DropOffPointSearchRadius;                                 // 0x0624(0x0004)
	float                                              FloatHeight;                                              // 0x0628(0x0004)
	float                                              RangeFromTarget;                                          // 0x062C(0x0004)
	float                                              DropOffRange;                                             // 0x0630(0x0004)
	class ADunDefHomingProjectile*                     HomingProjectileTemplate;                                 // 0x0634(0x0004)
	float                                              DropOffSearchTimeOutTime;                                 // 0x0638(0x0004)
	float                                              DropOffSearchStart;                                       // 0x063C(0x0004)
	float                                              BarrageChance;                                            // 0x0640(0x0004)
	float                                              BarrageAnimPlayRate;                                      // 0x0644(0x0004)
	int                                                BarrageMissileCount;                                      // 0x0648(0x0004)
	unsigned long                                      bDoingBarrage : 1;                                        // 0x064C(0x0004)
	unsigned long                                      bHasPayLoad : 1;                                          // 0x064C(0x0004)
	unsigned long                                      bWantsDropOff : 1;                                        // 0x064C(0x0004)
	unsigned long                                      bForceDropOffPoint : 1;                                   // 0x064C(0x0004)
	int                                                BarrageCount;                                             // 0x0650(0x0004)
	TArray<class ADropOffPoint*>                       DropOffPoints;                                            // 0x0654(0x000C)
	class ADropOffPoint*                               currentDropOffPoint;                                      // 0x0660(0x0004)
	float                                              FlareRefireTime;                                          // 0x0664(0x0004)
	float                                              MaxForcePathRange;                                        // 0x0668(0x0004)
	struct FVector                                     CheckDropOffLoSExtent;                                    // 0x066C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefGoblinCopterController");
		return ptr;
	}


	void SpawnRocket();
	void PlayMissileShootAnim();
	void IsWithinDropRange();
	void CheckDropOffLoS();
	void ShootFlare();
	void CheckForDropOffRange();
	void CheckAttackSight();
	void IsWithinAttackRange();
	void DoAttack();
	void FindDropOffPoint();
	void GetTargetMoveToPoint();
	void GetZDifference();
	void CheckDirectReachability();
	void CheckIndirectReachability();
	void GeneratePathToActor();
	void NavActorReachable();
	void FindNearestNavPointTo();
	void SetMyPawn();
	void Possess();
	void Destroyed();
	void PostBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
