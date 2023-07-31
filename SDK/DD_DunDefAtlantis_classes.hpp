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

// Class DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_PickNewPuzzleSolver : public USequenceAction
{
public:
	class ADunDefPlayer*                               newPuzzleSolver;                                          // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqAct_PickNewPuzzleSolver");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.DunDefGRI_RisingWater
// 0x0070 (0x0790 - 0x0720)
class ADunDefGRI_RisingWater : public ADunDefGameReplicationInfo
{
public:
	class ADunDefPlayer*                               PuzzleSolver;                                             // 0x0720(0x0004)
	struct FString                                     BecamePuzzleSolverString;                                 // 0x0724(0x000C)
	struct FString                                     NewPuzzleSolverString;                                    // 0x0730(0x000C)
	struct FString                                     YouSolvedThePuzzleString;                                 // 0x073C(0x000C)
	struct FString                                     TheySolvedThePuzzleString;                                // 0x0748(0x000C)
	struct FColor                                      BecamePuzzleSolverMessageColor;                           // 0x0754(0x0004)
	struct FColor                                      NewPuzzleSolverMessageColor;                              // 0x0758(0x0004)
	class USoundCue*                                   NewPuzzleSolverSoundEffect;                               // 0x075C(0x0004)
	class USoundCue*                                   PuzzleSolvedSound;                                        // 0x0760(0x0004)
	class UTexture2D*                                  PuzzleIcon;                                               // 0x0764(0x0004)
	struct FVector                                     PuzzleIconPositionOffset;                                 // 0x0768(0x000C)
	float                                              PuzzleIconPositionHeightScale;                            // 0x0774(0x0004)
	float                                              PuzzleIconSize;                                           // 0x0778(0x0004)
	int                                                lastPRIIndex;                                             // 0x077C(0x0004)
	TArray<class ADunDefPlayer*>                       PlayersInWater;                                           // 0x0780(0x000C)
	float                                              WaterCastingMultiplier;                                   // 0x078C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefGRI_RisingWater");
		return ptr;
	}


	void AddPlayerToWaterList();
	void RemovePlayerToWaterList();
	void SetWaterCastingMultiplier();
	void GetCastRateMultiplier();
	void PuzzleComplete();
	void GetRandomPlayer();
	void DrawMyHUD();
	void SetNewSolver();
	void NotifyPuzzleSolverDeath();
	void ClearPuzzleSolver();
	void PickNewSolver();
	void ExecReplicatedFunction();
};


// Class DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle
// 0x000C (0x00F4 - 0x00E8)
class UDunDef_SeqAct_SetUpPuzzle : public USequenceAction
{
public:
	class APuzzleRoomActor*                            PuzzleTemplate;                                           // 0x00E8(0x0004)
	class AActor*                                      SpawnPoint;                                               // 0x00EC(0x0004)
	class AActor*                                      TeleportPoint;                                            // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqAct_SetUpPuzzle");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.PuzzleRoomActor
// 0x0080 (0x029C - 0x021C)
class APuzzleRoomActor : public AActor
{
public:
	TArray<struct FPuzzlePiece>                        PuzzleGrid;                                               // 0x021C(0x000C)
	TArray<struct FPuzzlePiece>                        ValidPath;                                                // 0x0228(0x000C)
	TArray<class APuzzlePieceActor*>                   CurrentPath;                                              // 0x0234(0x000C)
	TArray<struct FVector2D>                           thePath;                                                  // 0x0240(0x000C)
	struct FVector2D                                   PuzzleSize;                                               // 0x024C(0x0008)
	class APuzzlePieceActor*                           PieceTemplate;                                            // 0x0254(0x0004)
	float                                              PieceBufferSpace;                                         // 0x0258(0x0004)
	class AActor*                                      ResetPoint;                                               // 0x025C(0x0004)
	class ADunDefEmitterSpawnable*                     TeleportVFX;                                              // 0x0260(0x0004)
	float                                              DemoPuzzleDelay;                                          // 0x0264(0x0004)
	float                                              FailedPathBaseFadeOutScale;                               // 0x0268(0x0004)
	float                                              FailedPathFadeOutExp;                                     // 0x026C(0x0004)
	float                                              FailedTeleportDelay;                                      // 0x0270(0x0004)
	int                                                MaxVerticalSpaces;                                        // 0x0274(0x0004)
	int                                                MaxHorizontalSpaces;                                      // 0x0278(0x0004)
	float                                              ReShowPathTime;                                           // 0x027C(0x0004)
	class USoundCue*                                   PuzzleFinishedSound;                                      // 0x0280(0x0004)
	float                                              LastPathShowTime;                                         // 0x0284(0x0004)
	int                                                currentPathPoint;                                         // 0x0288(0x0004)
	int                                                DemoingPuzzlePoint;                                       // 0x028C(0x0004)
	unsigned long                                      bPuzzleFinished : 1;                                      // 0x0290(0x0004)
	unsigned long                                      bDebugFailedPath : 1;                                     // 0x0290(0x0004)
	class AActor*                                      FailedActor;                                              // 0x0294(0x0004)
	int                                                totalFailCount;                                           // 0x0298(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.PuzzleRoomActor");
		return ptr;
	}


	void Destroyed();
	void FlashPuzzlePiece();
	void ShowPuzzlePath();
	void PlayFailedPathVFX();
	void PlayInitalFailVFX();
	void FailedPath();
	void SuccessfulMove();
	void SuccessfulFinish();
	void FinishedPuzzle();
	void NotifyPieceTouched();
	void ResetPuzzle();
	void DrawDebugPathLines();
	void StartEffect();
	void AddValidPathPiece();
	void MakePuzzle();
	void CalculatePieceIndex();
	void InitGrid();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleFinished
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleFinished : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqEvent_PuzzleFinished");
		return ptr;
	}

};


// Class DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft
// 0x0000 (0x0100 - 0x0100)
class UDunDef_SeqEvent_PuzzleSolverLeft : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDef_SeqEvent_PuzzleSolverLeft");
		return ptr;
	}


	void Activated();
};


// Class DunDefAtlantis.GameInfo_RisingWater
// 0x0004 (0x054C - 0x0548)
class AGameInfo_RisingWater : public AGameInfo_Special
{
public:
	class AController*                                 PuzzleSolver;                                             // 0x0548(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.GameInfo_RisingWater");
		return ptr;
	}


	void Logout();
	void SetCurrentPuzzleSolver();
	void SetGRIPuzzleSolver();
	void RestartPlayer();
	void Killed();
};


// Class DunDefAtlantis.DunDefInkCloud
// 0x0018 (0x0360 - 0x0348)
class ADunDefInkCloud : public ADunDefGasCloud
{
public:
	float                                              Speed;                                                    // 0x0348(0x0004)
	float                                              InkHurtDelay;                                             // 0x034C(0x0004)
	float                                              MovementSpeedMultiplier;                                  // 0x0350(0x0004)
	TArray<class ADunDefPawn*>                         MovementAffectedPawns;                                    // 0x0354(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefInkCloud");
		return ptr;
	}


	void ResetCurrentMoveActors();
	void HurtRadius();
	void FadeOut();
	void Init();
};


// Class DunDefAtlantis.DunDefKraken
// 0x010C (0x0E00 - 0x0CF4)
class ADunDefKraken : public ADunDefBoss
{
public:
	float                                              TentacleBlendOutTime;                                     // 0x0CF4(0x0004)
	TArray<struct FTentacle>                           Tentacles;                                                // 0x0CF8(0x000C)
	TArray<struct FTentacle>                           LeftTentacles;                                            // 0x0D04(0x000C)
	TArray<struct FTentacle>                           RightTentacles;                                           // 0x0D10(0x000C)
	struct FName                                       OpenMouthAnim;                                            // 0x0D1C(0x0008)
	struct FName                                       CloseMouthAnim;                                           // 0x0D24(0x0008)
	struct FName                                       WithDrawAnim;                                             // 0x0D2C(0x0008)
	struct FName                                       ProjectileAttack_Left;                                    // 0x0D34(0x0008)
	struct FName                                       ProjectileAttack_Right;                                   // 0x0D3C(0x0008)
	struct FName                                       ProjectileAttack_Giant;                                   // 0x0D44(0x0008)
	struct FName                                       ProjectileAttack_GiantSocket;                             // 0x0D4C(0x0008)
	struct FName                                       BiteAttackAnim;                                           // 0x0D54(0x0008)
	struct FName                                       BiteSocketName;                                           // 0x0D5C(0x0008)
	struct FName                                       TentacleAttackName;                                       // 0x0D64(0x0008)
	struct FName                                       InkSocketName;                                            // 0x0D6C(0x0008)
	struct FName                                       InkAnimName;                                              // 0x0D74(0x0008)
	struct FName                                       DashWindUpAnim;                                           // 0x0D7C(0x0008)
	struct FName                                       CrystalSocketName;                                        // 0x0D84(0x0008)
	float                                              MinimumAngleDotForCrystalHit;                             // 0x0D8C(0x0004)
	float                                              TentacleProjectileAnimSpeed;                              // 0x0D90(0x0004)
	float                                              TentacleRegrowTime[0x4];                                  // 0x0D94(0x0004)
	float                                              PauseAfterAttackTime[0x4];                                // 0x0DA4(0x0004)
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                                // 0x0DB4(0x0004)
	class ADunDefEmitterSpawnable*                     TentacleRetreatEffectTemplate;                            // 0x0DB8(0x0004)
	class UParticleSystemComponent*                    FloatingEffect;                                           // 0x0DBC(0x0004)
	struct FName                                       FloatingEffectSocket;                                     // 0x0DC0(0x0008)
	class UStaticMeshComponent*                        CrystalMesh;                                              // 0x0DC8(0x0004)
	TArray<class AActor*>                              LeftSwingHurtList;                                        // 0x0DCC(0x000C)
	TArray<class AActor*>                              RightSwingHurtList;                                       // 0x0DD8(0x000C)
	unsigned long                                      bMouthOpen : 1;                                           // 0x0DE4(0x0004) (Edit)
	unsigned long                                      bIsCharging : 1;                                          // 0x0DE4(0x0004)
	unsigned long                                      bCheckForPawnEnchroachers : 1;                            // 0x0DE4(0x0004)
	class UAnimNode_MultiBlendPerBone*                 TentacleBlender;                                          // 0x0DE8(0x0004)
	class UAnimNodePlayCustomAnim*                     TentacleCustomAnimNode;                                   // 0x0DEC(0x0004)
	float                                              TimeOfDeath;                                              // 0x0DF0(0x0004)
	float                                              DeathTranslation;                                         // 0x0DF4(0x0004)
	float                                              DeathTranslationTime;                                     // 0x0DF8(0x0004)
	float                                              LastTentactleTakeDamageTime;                              // 0x0DFC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefKraken");
		return ptr;
	}


	void CheckKrakenProximity();
	void Died();
	void DestroyTentacles();
	void GetPlayerTargetingDesirability();
	void BiteStop();
	void BiteStart();
	void PlayTentacleAttackAnimation();
	void PlayBiteAttackAnimation();
	void StopSpit();
	void StartSpit();
	void GetSocketLocAndRot();
	void ShootGiantProjectile();
	void ShootRight();
	void ShootLeft();
	void ResetMovementSettings();
	void SetDashMovementSettings();
	void PlayDashWindUp();
	void PlayInkCloudAttack();
	void PlayGiantProjectileAttack();
	void PlayRightTentacleAttack();
	void GetTowerTargetingDesirability();
	void PlayLeftTentacleAttack();
	void IsValidRightSwingTarget();
	void IsValidLeftSwingTarget();
	void AddToRightSwingHurtList();
	void AddToLeftSwingHurtList();
	void StopMelee();
	void StartMelee();
	void CloseMouth();
	void OpenMouth();
	void PlayMouthOpen();
	void DoSingleWithdraw();
	void ForceWithDraw();
	void BringOutAllTentacles();
	void PlayWithDrawTentacle();
	void NotifyTentacleWithdraw();
	void CheckSpecialCoreDmg();
	void AdjustDamage();
	void PlayRealHurtEffect();
	void NotifyTakeHit();
	void TakeDamage();
	void UpdateDifficultyValues();
	void SetMovementPhysics();
	void GetAttackPauseRate();
	void InitTentacles();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefAtlantis.KrakenTentacle
// 0x0068 (0x0284 - 0x021C)
class AKrakenTentacle : public AActor
{
public:
	class USkeletalMeshComponent*                      TentacleMesh;                                             // 0x021C(0x0004)
	struct FName                                       TargetingSocket;                                          // 0x0220(0x0008)
	int                                                Health;                                                   // 0x0228(0x0004)
	int                                                HealthMax;                                                // 0x022C(0x0004)
	unsigned long                                      bIsLeftSide : 1;                                          // 0x0230(0x0004)
	unsigned long                                      bWithDrawn : 1;                                           // 0x0230(0x0004)
	unsigned long                                      bDoDamageChecks : 1;                                      // 0x0230(0x0004)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0230(0x0004)
	unsigned long                                      bAllowSuction : 1;                                        // 0x0230(0x0004)
	unsigned long                                      bChainIgnore : 1;                                         // 0x0230(0x0004)
	unsigned long                                      bIsWebbed : 1;                                            // 0x0230(0x0004)
	int                                                TowerTargetingDesirability;                               // 0x0234(0x0004)
	float                                              LastFloatingTakeDamageTime;                               // 0x0238(0x0004)
	float                                              ForceWithdrawTime;                                        // 0x023C(0x0004)
	struct FName                                       myBasedSocket;                                            // 0x0240(0x0008)
	class ADunDefKraken*                               myKraken;                                                 // 0x0248(0x0004) (Edit)
	float                                              LastFlashingDamageTime;                                   // 0x024C(0x0004)
	float                                              DamageFlashingDuration;                                   // 0x0250(0x0004)
	float                                              DamageFlashingFadeExponent;                               // 0x0254(0x0004)
	float                                              DamageFlashingIntensity;                                  // 0x0258(0x0004)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x025C(0x0008)
	int                                                flashMatIndex;                                            // 0x0264(0x0004)
	TArray<float>                                      NumPlayerHealthMultipliers;                               // 0x0268(0x000C)
	class UMaterialInstanceConstant*                   tentacleMIC;                                              // 0x0274(0x0004)
	TArray<class ADunDefTower_ChainLightning*>         ChainingTowers;                                           // 0x0278(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.KrakenTentacle");
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
	void ClientTakeRadiusDamage();
	void ClientTakeDamage();
	void GetHealthPercent();
	void UpdateDamageFlashing();
	void LocalTookDamage();
	void HealPctOfMaxHealth();
	void ForceMoveActor();
	void GetOverrideTargetComponent();
	void EncroachingOn();
	void Bump();
	void Touch();
	void SetDoDamageChecks();
	void GetHealth();
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
	void DecreaseHealth();
	void ForceWithDraw();
	void LeaveShell();
	void WithdrawIntoShell();
	void TakeDamage();
	void SetWithDrawTime();
	void SetUpMesh();
	void InitTentacle();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefAtlantis.DunDefKrakenController
// 0x010C (0x0718 - 0x060C)
class ADunDefKrakenController : public ADunDefEnemyController
{
public:
	TArray<struct FChargeHit>                          DashHitTargets;                                           // 0x060C(0x000C)
	TArray<class AActor*>                              BiteHurtList;                                             // 0x0618(0x000C)
	float                                              BiteDamageAmount;                                         // 0x0624(0x0004)
	float                                              BiteDamageMomentum;                                       // 0x0628(0x0004)
	float                                              BiteHitRadius;                                            // 0x062C(0x0004)
	class UClass*                                      BiteDamageType;                                           // 0x0630(0x0004)
	struct FName                                       BiteAttackStateName;                                      // 0x0634(0x0008)
	struct FName                                       TentacleAttackStateName;                                  // 0x063C(0x0008)
	float                                              PushDamageMomentum;                                       // 0x0644(0x0004)
	float                                              PushDamageAmount;                                         // 0x0648(0x0004)
	float                                              PushHitRadius;                                            // 0x064C(0x0004)
	float                                              DashHitRate;                                              // 0x0650(0x0004)
	float                                              DashStopDistance;                                         // 0x0654(0x0004)
	class UClass*                                      PushDamageType;                                           // 0x0658(0x0004)
	class AActor*                                      TargetActor;                                              // 0x065C(0x0004)
	class ADunDefKraken*                               myPawn;                                                   // 0x0660(0x0004)
	int                                                TentaclesInShell;                                         // 0x0664(0x0004)
	int                                                TentaclesToOpenMouth;                                     // 0x0668(0x0004)
	float                                              TentacleRetreatTime;                                      // 0x066C(0x0004)
	int                                                TentacleDamageAmount;                                     // 0x0670(0x0004)
	float                                              TentacleMomentum;                                         // 0x0674(0x0004)
	class UClass*                                      TentacleDamageType;                                       // 0x0678(0x0004)
	class ADunDefHomingProjectile*                     TentacleProjectile;                                       // 0x067C(0x0004)
	float                                              TetacleProjectileCD;                                      // 0x0680(0x0004)
	float                                              GiantBombAttackChancePct;                                 // 0x0684(0x0004)
	float                                              TetacleProjectileMaxRange;                                // 0x0688(0x0004)
	float                                              TetacleProjectileMinRange;                                // 0x068C(0x0004)
	float                                              TentacleProjectileBurst;                                  // 0x0690(0x0004)
	int                                                CurrentTentacleProjectileBurst;                           // 0x0694(0x0004)
	float                                              LastTentacleProjAttack;                                   // 0x0698(0x0004)
	class ADunDefHomingProjectile*                     GiantProjectile;                                          // 0x069C(0x0004)
	float                                              GiantProjectileCD;                                        // 0x06A0(0x0004)
	float                                              GiantProjectileMaxRange;                                  // 0x06A4(0x0004)
	float                                              GiantProjectileMinRange;                                  // 0x06A8(0x0004)
	float                                              LastGiantProjAttack;                                      // 0x06AC(0x0004)
	float                                              DashCD;                                                   // 0x06B0(0x0004)
	float                                              DashMaxRange;                                             // 0x06B4(0x0004)
	float                                              DashMinRange;                                             // 0x06B8(0x0004)
	float                                              DashRotationRateScalar;                                   // 0x06BC(0x0004)
	float                                              DashAirSpeedScalar;                                       // 0x06C0(0x0004)
	float                                              DashTime;                                                 // 0x06C4(0x0004)
	float                                              LastDashTime;                                             // 0x06C8(0x0004)
	struct FVector                                     DashPoint;                                                // 0x06CC(0x000C)
	class ADunDefInkCloud*                             InkCloudTemplate;                                         // 0x06D8(0x0004)
	float                                              InkCloudCD;                                               // 0x06DC(0x0004)
	float                                              InkProjectileMaxRange;                                    // 0x06E0(0x0004)
	float                                              InkProjectileMinRange;                                    // 0x06E4(0x0004)
	float                                              InkCloudSpawnRate;                                        // 0x06E8(0x0004)
	float                                              InkCloudAllowedZDifference;                               // 0x06EC(0x0004)
	float                                              LastInkCloudTime;                                         // 0x06F0(0x0004)
	float                                              MouthCloseHealthPct;                                      // 0x06F4(0x0004)
	float                                              HealthPctAtMouthClose;                                    // 0x06F8(0x0004)
	float                                              BiteAttackRange;                                          // 0x06FC(0x0004)
	float                                              TentacleMeleeAttackRange;                                 // 0x0700(0x0004)
	unsigned long                                      bMouthOpen : 1;                                           // 0x0704(0x0004)
	unsigned long                                      bIsBiting : 1;                                            // 0x0704(0x0004)
	unsigned long                                      bDoDashDamage : 1;                                        // 0x0704(0x0004)
	struct FVector                                     GiantProjectileShootLoc;                                  // 0x0708(0x000C)
	float                                              LastTentacleAttackTime;                                   // 0x0714(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefKrakenController");
		return ptr;
	}


	void StopInkCloud();
	void SpawnInkCloud();
	void SpawnGiantProjectile();
	void SpawnRightTentacleProjectiles();
	void SpawnLeftTentacleProjectiles();
	void GetValidShootTargets();
	void CheckCustomOpenMouthAttacks();
	void CheckForCustomClosedMouthAttacks();
	void CheckForCustomAttacks();
	void CloseMouth();
	void NotifyTentacleBroughtOut();
	void NotifyTentecaleWithDrawn();
	void HandleTentacleDamage();
	void EndDash();
	void UpdateDashPoint();
	void AddToDashHurtList();
	void EndMeleeSwing();
	void BiteStart();
	void EndBite();
	void DoBiting();
	void AddToSwingHurtList();
	void ShouldDamage();
	void DoAttack();
	void GeneratePathToActor();
	void MoveAroundBlockade();
	void NavActorReachable();
	void FindNearestNavPointTo();
	void GetAttackRange();
	void ForceTentacleAttack();
	void WantsHurtAnimation();
	void NotifyTakeHitEX();
	void Possess();
};


// Class DunDefAtlantis.DunDefSharkMan
// 0x00E8 (0x0DB4 - 0x0CCC)
class ADunDefSharkMan : public ADunDefEnemy
{
public:
	struct FName                                       LeftFistSocketName;                                       // 0x0CCC(0x0008)
	struct FName                                       RightFistSocketName;                                      // 0x0CD4(0x0008)
	struct FName                                       LeftElbowSocketName;                                      // 0x0CDC(0x0008)
	struct FName                                       RightElbowSocketName;                                     // 0x0CE4(0x0008)
	struct FName                                       ChargeWindupAnimName;                                     // 0x0CEC(0x0008)
	struct FName                                       ChargingAnimName;                                         // 0x0CF4(0x0008)
	struct FName                                       HitWallAnimName;                                          // 0x0CFC(0x0008)
	struct FName                                       ChargeFailAnimName;                                       // 0x0D04(0x0008)
	struct FName                                       ChargeAbortAnimName;                                      // 0x0D0C(0x0008)
	struct FName                                       DizzyAnimName;                                            // 0x0D14(0x0008)
	float                                              ChargePushSize;                                           // 0x0D1C(0x0004)
	float                                              PawnPushBackSpeed;                                        // 0x0D20(0x0004)
	float                                              TowerPushBackSpeed;                                       // 0x0D24(0x0004)
	float                                              ChargingNetUpdateFrequency;                               // 0x0D28(0x0004)
	float                                              TowerCollideDamageMultiplier;                             // 0x0D2C(0x0004)
	float                                              PlayerCollideDamageMultiplier;                            // 0x0D30(0x0004)
	float                                              ChanceForImmediatePoundTheGround;                         // 0x0D34(0x0004)
	float                                              WindupTimeScale;                                          // 0x0D38(0x0004)
	TArray<class ADunDefPlayer*>                       ChargeHurtList;                                           // 0x0D3C(0x000C)
	float                                              GroundPoundDamage;                                        // 0x0D48(0x0004)
	float                                              GroundPoundRadius;                                        // 0x0D4C(0x0004)
	class UClass*                                      GroundPoundDamageType;                                    // 0x0D50(0x0004)
	float                                              ChargeAnimationSpeed;                                     // 0x0D54(0x0004)
	class ADunDefEmitterSpawnable*                     GroundStrikeEffect;                                       // 0x0D58(0x0004)
	struct FVector                                     GroundStrikeEffectOffset;                                 // 0x0D5C(0x000C)
	float                                              GroundStrikeKnockback;                                    // 0x0D68(0x0004)
	float                                              TowerTargetingDesirability_Charging;                      // 0x0D6C(0x0004)
	float                                              TowerTargetingDesirability_WindUp;                        // 0x0D70(0x0004)
	TArray<struct FName>                               UpperBodyCustomAnimNodeNames;                             // 0x0D74(0x000C)
	struct FName                                       UpperBodyCustomAnimBlenderName;                           // 0x0D80(0x0008)
	TArray<float>                                      ChargeSpeeds;                                             // 0x0D88(0x000C)
	class UAnimNodeBlend*                              UpperBodyCustomAnimBlender;                               // 0x0D94(0x0004)
	int                                                LastUpperBodyCustomAnimNodePlayIndex;                     // 0x0D98(0x0004)
	struct FName                                       ArmBlenderName;                                           // 0x0D9C(0x0008)
	class UAudioComponent*                             ScreamLoopSound;                                          // 0x0DA4(0x0004)
	class UParticleSystemComponent*                    DashEffectComponent;                                      // 0x0DA8(0x0004)
	class AActor*                                      ChargeTarget;                                             // 0x0DAC(0x0004)
	unsigned long                                      bWindingUp : 1;                                           // 0x0DB0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefSharkMan");
		return ptr;
	}


	void IsCurrentlyPlayingAttackAnimation();
	void NotifyTakeHitEX();
	void NotifyTakeHit();
	void ClearChargeHurtList();
	void AddToChargeHurtList();
	void EndCharging();
	void SetChargingSpeed();
	void CheckForEncroachers();
	void PlaySharkManChargeAbortAnimation();
	void PlaySharkManHitWallAnimation();
	void PlaySharkManChargeFailAnimation();
	void StopSharkManDizzyAnimation();
	void PlaySharkManDizzyAnimation();
	void PlaySharkManChargeAnimation();
	void PlaySharkManWindupAnimation();
	void Tick();
	void HandleMomentum();
	void SetSharkManArmBlend();
	void PlaySharkManAttackAnimation();
	void PlayHurtAnimation();
	void PlayAttackAnimation();
	void GetEnemyTargetingDesirability();
	void GetTowerTargetingDesirability();
	void GetMeleeSwingLocation();
	void GetMeleeElbowLocation();
	void GetMeleeFistLocation();
	void GroundStrike();
	void MeleeBothEnd();
	void MeleeBothStart();
	void MeleeRightEnd();
	void MeleeRightStart();
	void MeleeLeftEnd();
	void MeleeLeftStart();
	void ExecReplicatedFunction();
	void PostBeginPlay();
};


// Class DunDefAtlantis.DunDefSharkmanController
// 0x00CC (0x06D8 - 0x060C)
class ADunDefSharkmanController : public ADunDefEnemyController
{
public:
	unsigned long                                      IsInLeftMeleeSwing : 1;                                   // 0x060C(0x0004)
	unsigned long                                      IsInRightMeleeSwing : 1;                                  // 0x060C(0x0004)
	unsigned long                                      ChargeStopDamageWhileWinding : 1;                         // 0x060C(0x0004)
	unsigned long                                      DrawDebugShapes : 1;                                      // 0x060C(0x0004)
	unsigned long                                      PainInterruptsCombo : 1;                                  // 0x060C(0x0004)
	unsigned long                                      HasPassedChargeTarget : 1;                                // 0x060C(0x0004)
	struct FVector                                     PreviousLeftSwingLocation;                                // 0x0610(0x000C)
	struct FVector                                     PreviousRightSwingLocation;                               // 0x061C(0x000C)
	int                                                AttackNumber;                                             // 0x0628(0x0004)
	TArray<class AActor*>                              SwingHurtList;                                            // 0x062C(0x000C)
	int                                                MeleeDamageAmount;                                        // 0x0638(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x063C(0x0004)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0640(0x000C)
	class UClass*                                      MeleeDamageType;                                          // 0x064C(0x0004)
	TArray<float>                                      MeleeAttackMultipliers;                                   // 0x0650(0x000C)
	float                                              ComboExpiryTime;                                          // 0x065C(0x0004)
	float                                              ChargeMinDistance;                                        // 0x0660(0x0004)
	float                                              ChargeMaxDistance;                                        // 0x0664(0x0004)
	float                                              ChargeStopDamagePercent;                                  // 0x0668(0x0004)
	int                                                ChargeStopDamage;                                         // 0x066C(0x0004)
	float                                              ChargeTargetJitterSize;                                   // 0x0670(0x0004)
	float                                              DizzyTime;                                                // 0x0674(0x0004)
	float                                              ChargeDelay;                                              // 0x0678(0x0004)
	float                                              PlayerDontChargeRadius;                                   // 0x067C(0x0004)
	float                                              TowerDontChargeRadius;                                    // 0x0680(0x0004)
	float                                              CoreTargetDistractionDistance;                            // 0x0684(0x0004)
	float                                              MinChargeDistancePerCheck;                                // 0x0688(0x0004)
	float                                              ChargeDistanceCheckInterval;                              // 0x068C(0x0004)
	struct FVector                                     LastChargeCheck;                                          // 0x0690(0x000C)
	float                                              ChargeAbortTime;                                          // 0x069C(0x0004)
	float                                              ArmBlendNormal;                                           // 0x06A0(0x0004)
	float                                              ArmBlendCharging;                                         // 0x06A4(0x0004)
	float                                              ArmBlendDizzy;                                            // 0x06A8(0x0004)
	struct FVector                                     ChargingHitWallForwardTraceOffset;                        // 0x06AC(0x000C)
	struct FVector                                     ChargeOrigin;                                             // 0x06B8(0x000C)
	float                                              PreviousBaseGroundSpeed;                                  // 0x06C4(0x0004)
	struct FVector                                     ChargeTarget;                                             // 0x06C8(0x000C)
	float                                              LastDizzyTime;                                            // 0x06D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.DunDefSharkmanController");
		return ptr;
	}


	void NotifyTakeHitEX();
	void AbortCharge();
	void CheckTowerViability();
	void CheckForCustomAttacks();
	void GetReachCheckDuration();
	void DoPositionPoll();
	void IsWinding();
	void IsDistractedByCore();
	void IsCloseToTowers();
	void IsCloseToPlayers();
	void AddToSwingHurtList();
	void EndMeleeSwing();
	void StartMeleeSwing();
};


// Class DunDefAtlantis.PuzzlePieceActor
// 0x00B0 (0x02CC - 0x021C)
class APuzzlePieceActor : public AActor
{
public:
	class UStaticMeshComponent*                        MyMesh;                                                   // 0x021C(0x0004)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004)
	class UParticleSystem*                             ValidTouchingTemplate;                                    // 0x0224(0x0004)
	class UParticleSystem*                             ValidTouchedTemplate;                                     // 0x0228(0x0004)
	class UParticleSystem*                             StartParticleTemplate;                                    // 0x022C(0x0004)
	class ADunDefEmitterSpawnable*                     DemoEmitter;                                              // 0x0230(0x0004)
	class ADunDefEmitterSpawnable*                     FailedVFX;                                                // 0x0234(0x0004)
	class ADunDefEmitterSpawnable*                     PuzzleCompletedVFX;                                       // 0x0238(0x0004)
	struct FVector                                     DemoEmitterOffset;                                        // 0x023C(0x000C)
	struct FLinearColor                                ValidTouchingColor;                                       // 0x0248(0x0010)
	struct FLinearColor                                ValidTouchedColor;                                        // 0x0258(0x0010)
	struct FLinearColor                                DefaultColor;                                             // 0x0268(0x0010)
	struct FLinearColor                                FailedColor;                                              // 0x0278(0x0010)
	class USoundCue*                                   SuccessfulMoveSound;                                      // 0x0288(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x028C(0x0004)
	struct FLinearColor                                startColorLerp;                                           // 0x0290(0x0010)
	struct FLinearColor                                currentColorLerp;                                         // 0x02A0(0x0010)
	float                                              ColorLerpTime;                                            // 0x02B0(0x0004)
	float                                              ColorLerpBegin;                                           // 0x02B4(0x0004)
	float                                              LerpScalar;                                               // 0x02B8(0x0004)
	class APuzzleRoomActor*                            MyPuzzleRoom;                                             // 0x02BC(0x0004)
	class UParticleSystemComponent*                    StatusComponent;                                          // 0x02C0(0x0004)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x02C4(0x0004)
	unsigned long                                      bScaleBackToDefault : 1;                                  // 0x02C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.PuzzlePieceActor");
		return ptr;
	}


	void ScaleColor();
	void TurnOnStartEmitter();
	void PlayDemoEmitter();
	void ShutOffVFX();
	void SetColorLerp();
	void PlayPuzzleCompletedVFX();
	void PlayFailedVFX();
	void SetValidDeactivation();
	void SetValidTouching();
	void Bump();
	void Touch();
	void SetMyPuzzleRoom();
	void PostBeginPlay();
};


// Class DunDefAtlantis.RaisingWaterVolume
// 0x0040 (0x0298 - 0x0258)
class ARaisingWaterVolume : public AVolume
{
public:
	TArray<class ADunDefPawn*>                         TouchingPawns;                                            // 0x0258(0x000C)
	TArray<struct FAirControlPawn>                     FallingOutPawns;                                          // 0x0264(0x000C)
	float                                              MovementMultiplier;                                       // 0x0270(0x0004) (Const)
	float                                              PlayerAttackRateMultiplier;                               // 0x0274(0x0004) (Const)
	float                                              PlayerCastingRateMultiplier;                              // 0x0278(0x0004) (Const)
	float                                              AirControlTime;                                           // 0x027C(0x0004)
	float                                              AirControlScalar;                                         // 0x0280(0x0004)
	class USoundCue*                                   OverridePawnFootStepSound;                                // 0x0284(0x0004)
	class UParticleSystem*                             OverridePawnFootStepParticle;                             // 0x0288(0x0004)
	float                                              SpeedToUseFootsetpOverrides;                              // 0x028C(0x0004)
	float                                              UpdateWeaponAttackValueInterval;                          // 0x0290(0x0004)
	float                                              currentWeaponUpdateTime;                                  // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefAtlantis.RaisingWaterVolume");
		return ptr;
	}


	void OnModifyProperty();
	void ClearPawnFXOverrides();
	void SetPawnFXOverrides();
	void Tick();
	void ClearAirControl();
	void UnTouch();
	void Touch();
	void ExecReplicatedFunction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
