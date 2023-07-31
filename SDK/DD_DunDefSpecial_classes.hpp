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

// Class DunDefSpecial.DunDefBuff_Harbinger
// 0x0034 (0x0330 - 0x02FC)
class UDunDefBuff_Harbinger : public UDunDefBuff
{
public:
	TArray<int>                                        DifficultyTickDamageArray;                                // 0x02FC(0x000C)
	TArray<float>                                      DifficultyTickDamageMultiplierArray;                      // 0x0308(0x000C)
	float                                              HarbingerTimeoutRange;                                    // 0x0314(0x0004)
	float                                              TickDamageMultiplier;                                     // 0x0318(0x0004)
	float                                              Damage;                                                   // 0x031C(0x0004)
	class UParticleSystem*                             BeamEmitterTemplate;                                      // 0x0320(0x0004)
	class UParticleSystemComponent*                    beamInstance;                                             // 0x0324(0x0004)
	class UClass*                                      TickDamageType;                                           // 0x0328(0x0004)
	unsigned long                                      bDoLineOfSightCheck : 1;                                  // 0x032C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefBuff_Harbinger");
		return ptr;
	}


	void DeactivateBuff();
	void BuffEffect();
	void Tick();
	void Initialize();
};


// Class DunDefSpecial.DunDefTower_SummonEnemy
// 0x015A (0x0972 - 0x0818)
class ADunDefTower_SummonEnemy : public ADunDefTower
{
public:
	struct FSummonedBoosts                             resistanceBoosting;                                       // 0x0818(0x0024)
	struct FSummonedBoosts                             movementSpeedBoosting;                                    // 0x083C(0x0024)
	struct FSummonedBoosts                             attackAnimSpeedBoosting;                                  // 0x0860(0x0024)
	TArray<TEnumAsByte<EPawnBoostType>>                allowedScalingTypes;                                      // 0x0884(0x000C)
	class ADunDefEnemy*                                myEnemyTemplate;                                          // 0x0890(0x0004)
	class UTexture2D*                                  SelectedIcon;                                             // 0x0894(0x0004)
	class UTexture2D*                                  PendingSelectionIcon;                                     // 0x0898(0x0004)
	class UTexture2D*                                  CmdIcon_MoveDef;                                          // 0x089C(0x0004)
	class UTexture2D*                                  CmdIcon_MoveOf;                                           // 0x08A0(0x0004)
	class UTexture2D*                                  CmdIcon_Attack;                                           // 0x08A4(0x0004)
	class UTexture2D*                                  CmdIcon_Follow;                                           // 0x08A8(0x0004)
	class UTexture2D*                                  CmdIcon_HoldDef;                                          // 0x08AC(0x0004)
	class UTexture2D*                                  CmdIcon_HoldOff;                                          // 0x08B0(0x0004)
	class UTexture2D*                                  currentAttackTargetIcon;                                  // 0x08B4(0x0004)
	class UTexture2D*                                  currentFollowTargetIcon;                                  // 0x08B8(0x0004)
	class ADunDefEnemy*                                myEnemyReference;                                         // 0x08BC(0x0004) (Edit)
	class ADunDefEnemyController*                      myEnemyControllerReference;                               // 0x08C0(0x0004)
	class AActor*                                      currentTargetActor;                                       // 0x08C4(0x0004)
	class AActor*                                      pendingTargetActor;                                       // 0x08C8(0x0004)
	unsigned long                                      bFollowOwner : 1;                                         // 0x08CC(0x0004)
	unsigned long                                      bCheckForFollowReturn : 1;                                // 0x08CC(0x0004)
	unsigned long                                      bAllowSelection : 1;                                      // 0x08CC(0x0004)
	unsigned long                                      bDisableCommandIconDrawing : 1;                           // 0x08CC(0x0004)
	unsigned long                                      bIsSelected : 1;                                          // 0x08CC(0x0004)
	unsigned long                                      bPendingSelection : 1;                                    // 0x08CC(0x0004)
	float                                              SelectedIconSize;                                         // 0x08D0(0x0004)
	float                                              UpdateCommandRate;                                        // 0x08D4(0x0004)
	struct FVector                                     SelectedIconOffset;                                       // 0x08D8(0x000C)
	float                                              ResistanceMultiplier;                                     // 0x08E4(0x0004)
	float                                              AttackRangeMultiplier;                                    // 0x08E8(0x0004)
	float                                              MovementSpeedMult;                                        // 0x08EC(0x0004)
	float                                              AnimAttackSpeedMult;                                      // 0x08F0(0x0004)
	float                                              ReplicatedDmgValue;                                       // 0x08F4(0x0004)
	float                                              ReplicatedAtkRange;                                       // 0x08F8(0x0004)
	struct FString                                     ResistanceString;                                         // 0x08FC(0x000C)
	struct FString                                     MovementSpeedString;                                      // 0x0908(0x000C)
	struct FString                                     AnimSpeedString;                                          // 0x0914(0x000C)
	struct FString                                     AttackAnimSpeedString;                                    // 0x0920(0x000C)
	float                                              HoldOffensive_TargetableRange;                            // 0x092C(0x0004)
	float                                              HoldDefensive_TargetableRange;                            // 0x0930(0x0004)
	float                                              followIconZOffset;                                        // 0x0934(0x0004)
	float                                              attackIconZOffset;                                        // 0x0938(0x0004)
	class USoundCue*                                   AcceptOrderSound;                                         // 0x093C(0x0004)
	class UParticleSystemComponent*                    SelectedParticle;                                         // 0x0940(0x0004)
	class UParticleSystemComponent*                    pendingSelectedParticle;                                  // 0x0944(0x0004)
	class UParticleSystemComponent*                    otherSelectedParticle;                                    // 0x0948(0x0004)
	TArray<class AActor*>                              commandInstigators;                                       // 0x094C(0x000C)
	struct FVector                                     currentCommandPoint;                                      // 0x0958(0x000C)
	struct FVector                                     pendingCommandPoint;                                      // 0x0964(0x000C)
	TEnumAsByte<ESummonedCommand>                      currentCommand;                                           // 0x0970(0x0001)
	TEnumAsByte<ESummonedCommand>                      previousCommand;                                          // 0x0971(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_SummonEnemy");
		return ptr;
	}


	void UpdateBuffValues();
	void GetAttackDamage();
	void SpawnDefaultBuffs();
	void ClientDisableMovementReplication();
	void TransferTowerOwnership();
	void ForceSingleMove();
	void ForceMoveActor();
	void GetAlternateAggroActor();
	void GetPlayerTargetingDesirability();
	void GetTowerTargetingDesirability();
	void GetEnemyTargetingDesirability();
	void DrawToolTip();
	void DrawTowerToolTipStats();
	void GetBoostString();
	void GetBoostedTargets();
	void NotifyOfBoostedRemoval();
	void GetToolTipStatValue();
	void GetPawnBoostAmount();
	void HasPawnBoostingType();
	void TakeDamage();
	void GetAlternateActor();
	void GetHealth();
	void HealDamage();
	void AddHealth();
	void GetHealthPercent();
	void StartRepair();
	void GetToolTipText();
	void ScaleForHeroModifiers();
	void DrawMyHUD();
	void UpdateCommand();
	void HandleCommand();
	void SetCommand();
	void SetSelected();
	void SetPendingSelection();
	void CleanUpSummon();
	void Destroyed();
	void BaseChange();
	void SetUpEnemyValues();
	void SpawnMyEnemy();
	void InitializeForInstigator();
	void GetLastDamageTime();
	void HasBeenRendered();
	void UpdateEnemyCollisionValues();
	void UpdateReplicatedStatValues();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefEmitterDamage
// 0x005C (0x0330 - 0x02D4)
class ADunDefEmitterDamage : public ADunDefEmitterSpawnable
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
	float                                              ScalingHeroStatExponentDamage;                            // 0x02F8(0x0004)
	float                                              ScalingHeroStatExponentRadius;                            // 0x02FC(0x0004)
	float                                              DamageFalloffExponent;                                    // 0x0300(0x0004)
	TEnumAsByte<ELevelUpValueType>                     ScalingHeroStatType;                                      // 0x0304(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	unsigned long                                      bUseAngleForDamage : 1;                                   // 0x0308(0x0004)
	unsigned long                                      bUseOwnerAsInstigator : 1;                                // 0x0308(0x0004)
	unsigned long                                      bScaleDrawScale : 1;                                      // 0x0308(0x0004)
	unsigned long                                      bUseSelfAsDamageCauser : 1;                               // 0x0308(0x0004)
	float                                              MaxTargetDeltaPitch;                                      // 0x030C(0x0004)
	float                                              MaxTargetDeltaYaw;                                        // 0x0310(0x0004)
	TArray<class UDunDefBuff*>                         BuffsToApplyOnHit;                                        // 0x0314(0x000C)
	class UDunDefBuff*                                 FirstTargetBuff;                                          // 0x0320(0x0004)
	TScriptInterface<class UIActorModifierInterface>   MyActorStatModifier;                                      // 0x0324(0x0008)
	float                                              PowerMult;                                                // 0x032C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefEmitterDamage");
		return ptr;
	}


	void GetDamageCauser();
	void CheckValidAngle();
	void GetStatModifierObject();
	void GetStatValueByTag();
	void InitalizeActorStats();
	void STATIC_AllowSpawn();
	void HurtRadius();
	void DoDamage();
	void InitDamageEmitter();
	void PostBeginPlay();
};


// Class DunDefSpecial.CTF_PlayerAbility_PickupFlag
// 0x0008 (0x046C - 0x0464)
class ACTF_PlayerAbility_PickupFlag : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ACTF_Flag*                                   PickUpFlag;                                               // 0x0464(0x0004)
	class USoundCue*                                   StartPickingupSound;                                      // 0x0468(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_PlayerAbility_PickupFlag");
		return ptr;
	}


	void RequestPickup();
};


// Class DunDefSpecial.CTF_Flag
// 0x00B4 (0x02D8 - 0x0224)
class ACTF_Flag : public ADunDefDroppedItem
{
public:
	float                                              PickupOffset;                                             // 0x0224(0x0004)
	float                                              PickupWeighting;                                          // 0x0228(0x0004)
	struct FColor                                      ToolTipDrawColor;                                         // 0x022C(0x0004)
	struct FString                                     PickUpString;                                             // 0x0230(0x000C)
	float                                              ScorePerSecond;                                           // 0x023C(0x0004)
	float                                              HoldTimeForScore;                                         // 0x0240(0x0004)
	float                                              MaxPickupDistance;                                        // 0x0244(0x0004)
	float                                              DamageMultiplierIncreaseSpeed;                            // 0x0248(0x0004)
	float                                              HeldDamageMultiplier;                                     // 0x024C(0x0004)
	float                                              MaxDamageMultiplier;                                      // 0x0250(0x0004)
	float                                              DroppedAutoTeleportTime;                                  // 0x0254(0x0004)
	float                                              WaypointIconOffscreenScale;                               // 0x0258(0x0004)
	float                                              WaypointIconCenterScale;                                  // 0x025C(0x0004)
	float                                              WaypointCenterYOffset;                                    // 0x0260(0x0004)
	class USoundCue*                                   AllyPickedUpFlagSound;                                    // 0x0264(0x0004)
	class USoundCue*                                   EnemyPickedUpFlagSound;                                   // 0x0268(0x0004)
	class ADunDefEmitterSpawnable*                     PickedUpFlagEffects[0x2];                                 // 0x026C(0x0004)
	class UParticleSystemComponent*                    DroppedParticleComponent;                                 // 0x0274(0x0004)
	class UParticleSystemComponent*                    PickedUpParticleComponent;                                // 0x0278(0x0004)
	class UParticleSystem*                             TeamFlagEffects[0x2];                                     // 0x027C(0x0004)
	float                                              MiniMapIconSize;                                          // 0x0284(0x0004)
	float                                              MinimumTowerDistance;                                     // 0x0288(0x0004)
	float                                              OverlappingTowerCheckRadius;                              // 0x028C(0x0004)
	float                                              HolderJumpZMultiplier;                                    // 0x0290(0x0004)
	class UTexture2D*                                  MiniMapIcon;                                              // 0x0294(0x0004)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x0298(0x0004)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x029C(0x0004)
	struct FColor                                      MiniMapDefaultColor;                                      // 0x02A0(0x0004)
	class ADunDefPlayer*                               FlagHolder;                                               // 0x02A4(0x0004) (Edit)
	float                                              currentScoreAccumulation;                                 // 0x02A8(0x0004)
	unsigned long                                      bIsPickedUp : 1;                                          // 0x02AC(0x0004)
	unsigned long                                      bGivePointsForPossesion : 1;                              // 0x02AC(0x0004)
	unsigned long                                      bTeamBasedFlag : 1;                                       // 0x02AC(0x0004)
	unsigned long                                      bAllowTeamReset : 1;                                      // 0x02AC(0x0004)
	unsigned long                                      bAtBase : 1;                                              // 0x02AC(0x0004) (Edit)
	class ACTF_FlagBase*                               myBase;                                                   // 0x02B0(0x0004)
	int                                                myTeamIndex;                                              // 0x02B4(0x0004) (Edit)
	int                                                CapturePoints;                                            // 0x02B8(0x0004)
	struct FName                                       TeamParticleColorParam;                                   // 0x02BC(0x0008)
	class ADunDefEmitterSpawnable*                     CapturedFlagEffects[0x2];                                 // 0x02C4(0x0004)
	struct FString                                     flagCapturedMessage;                                      // 0x02CC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_Flag");
		return ptr;
	}


	void SetAtBase();
	void SetDroppedParticleColor();
	void SetTeam();
	void InitFlag();
	void AutoTeleport();
	void AdjustDamage();
	void PreventTowerAtPoint();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void PhysicsVolumeChange();
	void FellOutOfWorld();
	void ResetCollision();
	void DisableCollision();
	void IsInAuraOrTrap();
	void CaptureFlag();
	void ReturnToBase();
	void DropFlag();
	void PickUpFlag();
	void BeginBeingPickedUp();
	void CanBePickedUp();
	void DrawMiniMapIcon();
	void GetActivationOffset();
	void GetActivationWeighting();
	void Client_Activate();
	void Server_Activate();
	void AllowActivation();
	void GetToolTipPriority();
	void TakesToolTipPriority();
	void ContinueDrawingToolTip();
	void DrawToolTip();
	void Destroyed();
	void PostBeginPlay();
	void DrawMyHUD();
	void OnlyDrawHUDForOwner();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.CTF_UIGlobalHUD
// 0x0030 (0x0738 - 0x0708)
class UCTF_UIGlobalHUD : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    MyTeamNameLabel;                                          // 0x0708(0x0004)
	class UUIPanel*                                    ScorePanel_2;                                             // 0x070C(0x0004)
	class UUIPanel*                                    ScorePanel_3;                                             // 0x0710(0x0004)
	class UUILabel*                                    Team1PlayerList;                                          // 0x0714(0x0004)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0718(0x0004)
	class UUILabel*                                    TeamName_2;                                               // 0x071C(0x0004)
	class UUILabel*                                    TeamName_3;                                               // 0x0720(0x0004)
	class UUILabel*                                    Team1ScoreList;                                           // 0x0724(0x0004)
	class UUILabel*                                    Team2ScoreList;                                           // 0x0728(0x0004)
	class UUILabel*                                    Team1KillList;                                            // 0x072C(0x0004)
	class UUILabel*                                    Team2KillList;                                            // 0x0730(0x0004)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0734(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_UIGlobalHUD");
		return ptr;
	}


	void GetUITeamLists();
	void GetColorString();
	void UpdateTeamPanels();
	void Update();
	void UpdateCompetitive();
};


// Class DunDefSpecial.CTF_DDPRI
// 0x0010 (0x0380 - 0x0370)
class ACTF_DDPRI : public ADunDefPlayerReplicationInfo
{
public:
	int                                                CTF_MyCurrentTowerUnits;                                  // 0x0370(0x0004)
	int                                                CTF_MyMaxTowerUnits;                                      // 0x0374(0x0004)
	unsigned long                                      IsReadyToSpawn : 1;                                       // 0x0378(0x0004)
	int                                                MatchKills;                                               // 0x037C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDPRI");
		return ptr;
	}


	void IsFriendlyToLocal();
	void PrintHeroLevelUpMessage();
	void PrintNewHeroMessage();
	void SetReadyToSpawn();
	void GetTeamName();
	void GetTeamColor();
	void Destroyed();
	void AddToTeam();
	void ReplicatedEvent();
};


// Class DunDefSpecial.CTF_DDGRI
// 0x00EC (0x08CC - 0x07E0)
class ACTF_DDGRI : public ADDGRI_Competitive
{
public:
	struct FCTFTeamData                                CTFTeamDatas[0x2];                                        // 0x07E0(0x0034)
	struct FColor                                      NeutralColor;                                             // 0x0848(0x0004)
	class ACTF_PlayerAbility_PickupFlag*               CTFPickupFlagAbilityTemplate;                             // 0x084C(0x0004)
	class UTexture2D*                                  TeamIconTexture;                                          // 0x0850(0x0004)
	class UTexture2D*                                  FlagIcon;                                                 // 0x0854(0x0004)
	class ACTF_Flag*                                   TheFlag;                                                  // 0x0858(0x0004)
	class ACTF_Flag*                                   TheSecondFlag;                                            // 0x085C(0x0004)
	struct FString                                     FlagIconPath;                                             // 0x0860(0x000C)
	int                                                WinningTeam;                                              // 0x086C(0x0004)
	unsigned long                                      bAutoBalanceTeams : 1;                                    // 0x0870(0x0004)
	unsigned long                                      bIsGameReady : 1;                                         // 0x0870(0x0004)
	unsigned long                                      bUsePersonalTowerUnits : 1;                               // 0x0870(0x0004)
	unsigned long                                      bAllowCountDown : 1;                                      // 0x0870(0x0004)
	unsigned long                                      bPrintWinningPlayerMessage : 1;                           // 0x0870(0x0004)
	unsigned long                                      bDisplayPlayerScore : 1;                                  // 0x0870(0x0004)
	float                                              GameStartTime;                                            // 0x0874(0x0004)
	float                                              FlagHoldingGroundSpeed;                                   // 0x0878(0x0004)
	int                                                LastSentGameTime;                                         // 0x087C(0x0004)
	struct FString                                     EndGameLabelString;                                       // 0x0880(0x000C)
	int                                                WinCTFManaBonus[0x8];                                     // 0x088C(0x0004)
	int                                                WinExpBonus[0x8];                                         // 0x08AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDGRI");
		return ptr;
	}


	void AllowedToTeleport();
	void DoDeathNotification();
	void GetJumpZMultiplier();
	void ExtraDrawHUDInterface();
	void CustomUpdatePlayerScoreLabel();
	void AllowDeathSpectatorMode();
	void ModifyPlayerGroundSpeed();
	void GetGameOverLabelColor();
	void GetVictoryLabelColor();
	void GetGameOverLabelString();
	void GetVictoryLabelString();
	void OverrideEndGameLabel();
	void GetWinningPRI();
	void GetDataListEntries();
	void GetTeamIcon();
	void IsTeamCompetitive();
	void AllowChatBetween();
	void GetTeamThatHasFlag();
	void DoLevelVictory();
	void GiveWinningBonus();
	void WonGame();
	void CheckAllReady();
	void CheckReadyPlayers();
	void SetAllowCountDown();
	void AllowGameCountDown();
	void SetGameReady();
	void SetGameTime();
	void UpdateGameTime();
	void Tick();
	void FilloutTeams();
	void FlushTeams();
	void AutoBalanceTeams();
	void AutoSortTeams();
	void GetLowestBalancedTeam();
	void IncrementTeamScore();
	void PostBeginPlay();
	void ModifyCustomColors();
	void DrawExtraPlayerFloatingHUD();
	void GetTeamScores();
	void Server_AddGRIHeroAbilities();
	void GetColorString();
	void GetTeamLists();
	void GetCompetitivePlayerList();
	void DestroyTowerOnOwnerLeft();
	void GetMaxTowerUnits();
	void GetAltCurrentTowerUnits();
	void GetCurrentTowerUnits();
	void CanPlaceTowerUnitCost();
	void RemovedTower();
	void AddedTower();
	void RemovePlayerFromTeam();
	void AddPlayerToTeam();
	void RemoveFromAnyTeams();
	void GetSmallestTeam();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.CTF_DDPC
// 0x0008 (0x0B40 - 0x0B38)
class ACTF_DDPC : public ADunDefPlayerController
{
public:
	class UUI_TeamSelect*                              TeamSelectUITemplate;                                     // 0x0B38(0x0004)
	class ACTF_Flag*                                   myHeldFlag;                                               // 0x0B3C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_DDPC");
		return ptr;
	}


	void AdjustDamage();
	void PawnDied();
	void GiveFlag();
	void SetIsReady();
	void SetDesiredTeam();
	void CreateHUD();
	void LocalAttemptSpawn();
	void ServerRestartPlayer();
	void ShowTeamSelectionUI();
};


// Class DunDefSpecial.CTD_DDGRI
// 0x000C (0x08D8 - 0x08CC)
class ACTD_DDGRI : public ACTF_DDGRI
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x08CC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTD_DDGRI");
		return ptr;
	}


	void AllowedToTeleport();
	void DoLevelVictory();
	void Tick();
	void GetSkipBuildPhaseString();
	void DrawExtraPlayerFloatingHUD();
	void Server_AddGRIHeroAbilities();
	void DestroyTowerOnOwnerLeft();
	void AllowActivatingCrystal();
	void SetGameReady();
};


// Class DunDefSpecial.UI_TeamSelect
// 0x002C (0x0668 - 0x063C)
class UUI_TeamSelect : public UDunDefUIScene
{
public:
	class UUIScriptWidget_Button*                      ReadyButton;                                              // 0x063C(0x0004)
	class UUIButton_Scripted*                          SwapTeamButton;                                           // 0x0640(0x0004)
	class UUIButton_Scripted*                          AutoSetTeams;                                             // 0x0644(0x0004)
	class UUIButton_Scripted*                          TeamButton_2;                                             // 0x0648(0x0004)
	class UUIButton_Scripted*                          TeamButton_3;                                             // 0x064C(0x0004)
	class UUILabel*                                    GameStartCountdown;                                       // 0x0650(0x0004)
	class UUILabel*                                    Team1PlayerList;                                          // 0x0654(0x0004)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0658(0x0004)
	class UUILabel*                                    TeamName_2;                                               // 0x065C(0x0004)
	class UUILabel*                                    TeamName_3;                                               // 0x0660(0x0004)
	float                                              GameStartTime;                                            // 0x0664(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_TeamSelect");
		return ptr;
	}


	void OnInterceptedInputKey();
	void NotifyWidgetClicked();
	void Update();
	void SceneActivated();
};


// Class DunDefSpecial.CTF_GameInfo
// 0x0008 (0x0554 - 0x054C)
class ACTF_GameInfo : public AGameInfo_Competitive
{
public:
	int                                                TeamPointsForKill;                                        // 0x054C(0x0004)
	unsigned long                                      bPreventCompetitivePlayerDamage : 1;                      // 0x0550(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_GameInfo");
		return ptr;
	}


	void AdjustDTDamage();
	void AdjustPawnDamage();
	void GetPlayerTeamForStart();
	void CheckScore();
	void ScoreKill();
	void ScoreObjective();
	void AddObjectiveScore();
	void PlayerReplicationInfoInitialized();
	void DoPlayerLeaving();
	void SpawnPlayerController();
};


// Class DunDefSpecial.CTD_GameInfo
// 0x000C (0x0560 - 0x0554)
class ACTD_GameInfo : public ACTF_GameInfo
{
public:
	TArray<float>                                      OgreDifficultyOffsets;                                    // 0x0554(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTD_GameInfo");
		return ptr;
	}


	void WaveSpawnerCreateEnemy();
	void RatePlayerStart();
	void PostBeginPlay();
};


// Class DunDefSpecial.CTF_FlagBase
// 0x0068 (0x0284 - 0x021C)
class ACTF_FlagBase : public AActor
{
public:
	int                                                myTeamIndex;                                              // 0x021C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     CaptureEmitterTemplate[0x2];                              // 0x0220(0x0004)
	class ADunDefEmitterSpawnable*                     FlagStoleEmitterTemplate[0x2];                            // 0x0228(0x0004)
	class UParticleSystemComponent*                    MyParticleComponent;                                      // 0x0230(0x0004)
	class ACTF_Flag*                                   myFlagTemplate;                                           // 0x0234(0x0004)
	struct FName                                       ParticleColorName;                                        // 0x0238(0x0008)
	TArray<class APlayerStart*>                        myAssociatedStarts;                                       // 0x0240(0x000C)
	TArray<class ADunDefTeamTowerVolume*>              myAssociatedVolumes;                                      // 0x024C(0x000C)
	class ACTF_Flag*                                   myFlag;                                                   // 0x0258(0x0004)
	unsigned long                                      bBaseInited : 1;                                          // 0x025C(0x0004)
	class UCylinderComponent*                          myCollisionComponent;                                     // 0x0260(0x0004)
	float                                              MiniMapIconSize;                                          // 0x0264(0x0004)
	float                                              MinimumTowerDistance;                                     // 0x0268(0x0004)
	class UTexture2D*                                  MiniMapIcon;                                              // 0x026C(0x0004)
	TArray<class UMaterialInstanceConstant*>           ZoneMICs;                                                 // 0x0270(0x000C)
	struct FName                                       ZoneMICParamName;                                         // 0x027C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_FlagBase");
		return ptr;
	}


	void PreventTowerAtPoint();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void DrawMiniMapIcon();
	void SpawnFlag();
	void FlagTaken();
	void FlagReturned();
	void DoCaptureEffects();
	void ScoreFlag();
	void Touch();
	void InitBase();
	void SetTeamIndex();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.CTF_MultiFlag_GameInfo
// 0x0004 (0x0558 - 0x0554)
class ACTF_MultiFlag_GameInfo : public ACTF_GameInfo
{
public:
	unsigned long                                      bSetRandomTeamSides : 1;                                  // 0x0554(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_MultiFlag_GameInfo");
		return ptr;
	}


	void RatePlayerStart();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefTeamTowerVolume
// 0x0004 (0x025C - 0x0258)
class ADunDefTeamTowerVolume : public AVolume
{
public:
	int                                                myTeamIndex;                                              // 0x0258(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTeamTowerVolume");
		return ptr;
	}


	void SetMyTeam();
	void Destroyed();
	void PostBeginPlay();
	void AllowTowerAtPoint();
	void PreventTowerAtPoint();
	void CheckAllowance();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.CTFM_DDGRI
// 0x0000 (0x08CC - 0x08CC)
class ACTFM_DDGRI : public ACTF_DDGRI
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTFM_DDGRI");
		return ptr;
	}

};


// Class DunDefSpecial.CTF_UIGameStats
// 0x0024 (0x0FE4 - 0x0FC0)
class UCTF_UIGameStats : public UUI_GameStats
{
public:
	class UUILabel*                                    Team1PlayerList;                                          // 0x0FC0(0x0004)
	class UUILabel*                                    Team2PlayerList;                                          // 0x0FC4(0x0004)
	class UUILabel*                                    TeamName_2;                                               // 0x0FC8(0x0004)
	class UUILabel*                                    TeamName_3;                                               // 0x0FCC(0x0004)
	class UUILabel*                                    Team1ScoreList;                                           // 0x0FD0(0x0004)
	class UUILabel*                                    Team2ScoreList;                                           // 0x0FD4(0x0004)
	class UUILabel*                                    Team1KillList;                                            // 0x0FD8(0x0004)
	class UUILabel*                                    Team2KillList;                                            // 0x0FDC(0x0004)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0FE0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.CTF_UIGameStats");
		return ptr;
	}


	void GetUITeamLists();
	void GetColorString();
	void UpdateTeamPanels();
	void CustomInit();
};


// Class DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_AddPlatformToVerticalTowerMover : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_AddPlatformToVerticalTowerMover");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_VerticalTowerMover
// 0x0014 (0x0230 - 0x021C)
class ADunDef_VerticalTowerMover : public AActor
{
public:
	unsigned long                                      bBuildPhaseOnly : 1;                                      // 0x021C(0x0004)
	TArray<struct FPlatformInfo>                       Platforms;                                                // 0x0220(0x000C)
	int                                                TicksSinceUpdate;                                         // 0x022C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_VerticalTowerMover");
		return ptr;
	}


	void Tick();
	void MoveTowers();
	void RebuildTowerCache();
	void AddInterpActor();
};


// Class DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements
// 0x0001 (0x00E9 - 0x00E8)
class UDunDef_SeqAct_CheckToUnlockAchievements : public USequenceAction
{
public:
	TEnumAsByte<EAchievementCheckSet>                  AchievementCheckSet;                                      // 0x00E8(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_CheckToUnlockAchievements");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam
// 0x0004 (0x00EC - 0x00E8)
class UDunDef_SeqAct_CTDWinGameForTeam : public USequenceAction
{
public:
	int                                                WinningTeamIndex;                                         // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_CTDWinGameForTeam");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_GetMVP
// 0x0000 (0x00E8 - 0x00E8)
class UDunDef_SeqAct_GetMVP : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_GetMVP");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene
// 0x0008 (0x00F0 - 0x00E8)
class UDunDef_SeqAct_HideGlobalUIScene : public USequenceAction
{
public:
	class UDunDefUIScene*                              aUIScene;                                                 // 0x00E8(0x0004)
	unsigned long                                      bForceClose : 1;                                          // 0x00EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDef_SeqAct_HideGlobalUIScene");
		return ptr;
	}


	void Activated();
};


// Class DunDefSpecial.DunDefTower_TripWire
// 0x0100 (0x09E4 - 0x08E4)
class ADunDefTower_TripWire : public ADunDefTower_DetonationType
{
public:
	TArray<struct FBeamTrippers>                       currentBeamTrippers;                                      // 0x08E4(0x000C)
	TArray<class ADunDefTower_TripWire*>               ChildNodes;                                               // 0x08F0(0x000C)
	class ADunDefTower_TripWire*                       ChildNode;                                                // 0x08FC(0x0004) (Edit)
	unsigned long                                      bIsChildNode : 1;                                         // 0x0900(0x0004)
	unsigned long                                      bUseDetonation : 1;                                       // 0x0900(0x0004)
	unsigned long                                      bShowInactiveEffectOnDeactivate : 1;                      // 0x0900(0x0004)
	unsigned long                                      bActiveDamage : 1;                                        // 0x0900(0x0004)
	unsigned long                                      bShutDown : 1;                                            // 0x0900(0x0004)
	unsigned long                                      bDoesStun : 1;                                            // 0x0900(0x0004)
	unsigned long                                      bContinuousProcs : 1;                                     // 0x0900(0x0004)
	unsigned long                                      bAllowTargeting : 1;                                      // 0x0900(0x0004)
	unsigned long                                      bDoesTracing : 1;                                         // 0x0900(0x0004)
	unsigned long                                      bActiveOnStart : 1;                                       // 0x0900(0x0004)
	unsigned long                                      bWantsChildTodrawUpgradeOverlay : 1;                      // 0x0900(0x0004)
	unsigned long                                      bSetFullCollisionForChild : 1;                            // 0x0900(0x0004)
	unsigned long                                      bDoClientTrace : 1;                                       // 0x0900(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x0900(0x0004)
	unsigned long                                      bDidSingleHit : 1;                                        // 0x0900(0x0004)
	class ADunDefTower_TripWire*                       ParentNode;                                               // 0x0904(0x0004)
	float                                              WireDistanceForMaxCost;                                   // 0x0908(0x0004)
	float                                              WireDistanceForMinCost;                                   // 0x090C(0x0004)
	int                                                TowerUnitCostMax;                                         // 0x0910(0x0004)
	struct FVector                                     BeamTraceExtent;                                          // 0x0914(0x000C)
	float                                              ActiveEffectLingerTime;                                   // 0x0920(0x0004)
	class UParticleSystemComponent*                    BeamEffect;                                               // 0x0924(0x0004)
	class UParticleSystemComponent*                    InActiveBeamEffect;                                       // 0x0928(0x0004)
	class UParticleSystemComponent*                    InActiveBeamEndPointEffect;                               // 0x092C(0x0004)
	class UParticleSystemComponent*                    ActiveBeamEndPointEffect;                                 // 0x0930(0x0004)
	class UParticleSystemComponent*                    PreDetonationEndPointEffect;                              // 0x0934(0x0004)
	struct FName                                       BeamSocketName;                                           // 0x0938(0x0008)
	int                                                BaseDamagePerTick;                                        // 0x0940(0x0004)
	float                                              DmgProcInterval;                                          // 0x0944(0x0004)
	float                                              ActiveDuration;                                           // 0x0948(0x0004)
	class UClass*                                      BeamDamageType;                                           // 0x094C(0x0004)
	float                                              TimeTillDetonate;                                         // 0x0950(0x0004)
	float                                              LifeEnergy;                                               // 0x0954(0x0004)
	float                                              LifeEnergyDecrease;                                       // 0x0958(0x0004)
	float                                              LifeEnergyDecreasePerPawnAffected;                        // 0x095C(0x0004)
	float                                              HealAmountMultiplier;                                     // 0x0960(0x0004)
	float                                              NetUpdateFrequencyWhenRepairing;                          // 0x0964(0x0004)
	float                                              LastRepairIncrementTime;                                  // 0x0968(0x0004)
	int                                                MaxLifeEnergy;                                            // 0x096C(0x0004)
	TArray<class UClass*>                              NoStunDamageTypes;                                        // 0x0970(0x000C)
	class UParticleSystem*                             StunnedEffect;                                            // 0x097C(0x0004)
	float                                              BaseStunTime;                                             // 0x0980(0x0004)
	float                                              MaxZHeight;                                               // 0x0984(0x0004)
	float                                              MinZHeight;                                               // 0x0988(0x0004)
	class UTexture2D*                                  MiniMapBeamTexture;                                       // 0x098C(0x0004)
	float                                              MiniMapBeamWidth;                                         // 0x0990(0x0004)
	float                                              StunTimeExponent;                                         // 0x0994(0x0004)
	TEnumAsByte<ELevelUpValueType>                     StunStat;                                                 // 0x0998(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	class USoundCue*                                   DetonateSound;                                            // 0x099C(0x0004)
	class USoundCue*                                   TripCue;                                                  // 0x09A0(0x0004)
	float                                              LinearDUHealthScaleValue;                                 // 0x09A4(0x0004)
	float                                              DUHealthExp;                                              // 0x09A8(0x0004)
	struct FString                                     StunTimeString;                                           // 0x09AC(0x000C)
	struct FString                                     StunIntervalEndString;                                    // 0x09B8(0x000C)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x09C4(0x0004)
	struct FColor                                      MiniMapBeamColor;                                         // 0x09C8(0x0004)
	float                                              StunMultiplier;                                           // 0x09CC(0x0004)
	float                                              LastCleanUpTime;                                          // 0x09D0(0x0004)
	struct FVector                                     spawnInPoint;                                             // 0x09D4(0x000C) (Edit)
	int                                                modifiedDUCost;                                           // 0x09E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripWire");
		return ptr;
	}


	void STATIC_StaticGetTowerScale();
	void AllowAbilityMove();
	void TransferTowerOwnership();
	void CheckAssociateWithHero();
	void CanDetonate();
	void HasCharges();
	void GetSellWorth();
	void GetEnemyTargetingDesirability();
	void DrawMiniMapIcon();
	void HealDetonationStyle();
	void GetAlternateActor();
	void IsMultiActorTower();
	void DrawUpgradeOverlay();
	void GetGlobalTowerHealthMultiplier();
	void PerformFullHeal();
	void SetRadiusScale();
	void DrawTowerToolTipStats();
	void GetToolTipText();
	void ScaleForHeroModifiers();
	void ScaleHealthMultiplier();
	void ReportSummoned();
	void UpdateTowerRatingMaterial();
	void NeedsRepair();
	void GetHealthPercent();
	void HealDamage();
	void HealPctOfMaxHealth();
	void GetHealth();
	void IncrementRepair();
	void IncrementDetonationRepair();
	void GetCurrentRepairPercentage();
	void StartRepair();
	void GetTimeToRepair();
	void GetCostToRepair();
	void GetTimeOfTotalRepair();
	void Died();
	void ReportedDeath();
	void ReportDeath();
	void DecreaseLifeEnergy();
	void ContinueDrawingToolTip();
	void DrawToolTip();
	void Sell();
	void Destroyed();
	void PlaySellFX();
	void Detonate();
	void ChildEndDetonate();
	void ChildDetonate();
	void RemoveStunnedActor();
	void CanStun();
	void AddStunnedActor();
	void ClearBeamTrippers();
	void GetAttackDuration();
	void ResetTrip();
	void DeactivateTrip();
	void ActivateTrip();
	void DrawMyHUD();
	void GetTrapDamageMultiplier();
	void GetDamageMultiplier();
	void GetAttackDamage();
	void GetStunTime();
	void RemoveTowerBooster();
	void AddTowerBooster();
	void UpdateStuns();
	void GetAttackRate();
	void DoTracing();
	void UnTouch();
	void Touch();
	void SetDetonateTimer();
	void GetEndPoint();
	void GetBeamStartLoc();
	void UpdateMovementBeams();
	void Tick();
	void ClientSingleSetMovement();
	void ForceSingleMove();
	void DisableSingleMovementReplication();
	void EnableSingleMovementReplicationTimer();
	void DisableMovementReplication();
	void EnableMovementReplicationTimer();
	void SetDUCost();
	void GetNextUpgradeLevel();
	void GetTimeToUpgradeTower();
	void GetCostToUpgradeTower();
	void GetTowerUpgradeLevelStatModifier();
	void ChildDoUpgrade();
	void ChildDoDowngrade();
	void DoDowngrade();
	void DoUpgrade();
	void CanBeUpgraded();
	void ShutDownBeamEffects();
	void ActivateBeamEffects();
	void ActivateBeam();
	void GetBeamPoint();
	void GetCollisionPoint();
	void SetPlacementPoints();
	void InitializeForInstigator();
	void SetUpCollisionMesh();
	void InitalizeStatObject();
	void OnDestroy_RemoveFromTargetableList();
	void OnPostBeginPlay_AddToTargetableList();
	void PostBeginPlay();
	void SetUseHealthBarMat();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefTower_TripPhysical
// 0x00B0 (0x0A94 - 0x09E4)
class ADunDefTower_TripPhysical : public ADunDefTower_TripWire
{
public:
	struct FVector                                     TargetingLocation;                                        // 0x09E4(0x000C)
	class UParticleSystemComponent*                    TopBeam;                                                  // 0x09F0(0x0004)
	class UParticleSystemComponent*                    SideBeamA;                                                // 0x09F4(0x0004)
	class UParticleSystemComponent*                    SideBeamB;                                                // 0x09F8(0x0004)
	class UParticleSystemComponent*                    ParticlePlane;                                            // 0x09FC(0x0004)
	class UParticleSystemComponent*                    TopPointA;                                                // 0x0A00(0x0004)
	class UParticleSystemComponent*                    TopPointB;                                                // 0x0A04(0x0004)
	struct FName                                       TopBoneControllerName;                                    // 0x0A08(0x0008)
	struct FName                                       TopSocketName;                                            // 0x0A10(0x0008)
	float                                              PlaneFadeTime;                                            // 0x0A18(0x0004)
	float                                              CollisionWidth;                                           // 0x0A1C(0x0004)
	class UMaterialInterface*                          PlaneMaterial;                                            // 0x0A20(0x0004)
	class USoundCue*                                   ExpandSound;                                              // 0x0A24(0x0004)
	struct FVector                                     MeshOffSet;                                               // 0x0A28(0x000C)
	struct FName                                       BottomSocketName;                                         // 0x0A34(0x0008)
	unsigned long                                      bUseBottomSocket : 1;                                     // 0x0A3C(0x0004)
	unsigned long                                      bAllowAbilityMove : 1;                                    // 0x0A3C(0x0004)
	unsigned long                                      bDoSpawnTick : 1;                                         // 0x0A3C(0x0004)
	unsigned long                                      bBeamStarted : 1;                                         // 0x0A3C(0x0004)
	unsigned long                                      bActivatedBeam : 1;                                       // 0x0A3C(0x0004)
	unsigned long                                      bModifyActorLocation : 1;                                 // 0x0A3C(0x0004)
	unsigned long                                      bSetCollisionMeshAsComponent : 1;                         // 0x0A3C(0x0004)
	unsigned long                                      bClientRecievedLoc : 1;                                   // 0x0A3C(0x0004)
	class UMaterialInstanceConstant*                   MyPlaneMIC;                                               // 0x0A40(0x0004)
	class USkelControlSingleBone*                      TopBoneController;                                        // 0x0A44(0x0004)
	float                                              ScaleInTime;                                              // 0x0A48(0x0004)
	float                                              StartScaleTime;                                           // 0x0A4C(0x0004)
	struct FVector                                     topEndPointA;                                             // 0x0A50(0x000C)
	struct FVector                                     topEndPointB;                                             // 0x0A5C(0x000C)
	struct FVector                                     currentPointA;                                            // 0x0A68(0x000C)
	struct FVector                                     currentPointB;                                            // 0x0A74(0x000C)
	float                                              distanceBetween;                                          // 0x0A80(0x0004)
	float                                              theTime;                                                  // 0x0A84(0x0004)
	struct FVector                                     MeshTranslation;                                          // 0x0A88(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripPhysical");
		return ptr;
	}


	void DisableAbilityMove();
	void AllowAbilityMove();
	void ClientDisableMovementReplication();
	void BaseChange();
	void ForceMoveActor();
	void GetSelectionLocation();
	void IsPhysicalTower();
	void DrawMiniMapIcon();
	void UpdateMovementBeams();
	void IsPreviousToolTipActor();
	void UpdateDamageFlashing();
	void PerformFullHeal();
	void HealDamage();
	void IncrementRepair();
	void GetCurrentRepairPercentage();
	void StartRepair();
	void GetTimeToRepair();
	void GetCostToRepair();
	void GetTimeOfTotalRepair();
	void GetToolTipText();
	void GetGlobalTowerHealthMultiplier();
	void Bump();
	void GetOverrideTargetComponent();
	void DrawToolTip();
	void GetHealthPercent();
	void GetHealth();
	void AddHealth();
	void ActivateBeamEffects();
	void ShutDownBeamEffects();
	void ActivateTrip();
	void DrawMyHUD();
	void NeedsRepair();
	void SubtractHealth();
	void TakeDamage();
	void GetAttackRangeOffset();
	void GetTargetingLocation();
	void GetPhysicalTowerDamageMultiplier();
	void GetPhysicalTowerHealthMultiplier();
	void GetAuraDamageMultiplier();
	void UseForTowerSelectionPassThrough();
	void GetTowerTargetingDesirability();
	void GetPlayerTargetingDesirability();
	void ActivatePlaneBeam();
	void ActivateBeam();
	void ModifyTranslation();
	void SetUpCollisionMesh();
	void GetCollisionPoint();
	void GetSecondBeamPoint();
	void ScaleInBeams();
	void StartBeams();
	void PostBeginPlay();
	void SetPlacementPoints();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayer_Hovering
// 0x002C (0x0DAC - 0x0D80)
class ADunDefPlayer_Hovering : public ADunDefPlayer
{
public:
	struct FName                                       HoveringBlenderName;                                      // 0x0D80(0x0008)
	float                                              HoverOnBlendTime;                                         // 0x0D88(0x0004)
	float                                              HoverOffBlendTime;                                        // 0x0D8C(0x0004)
	class USoundCue*                                   HoveringStartSound;                                       // 0x0D90(0x0004)
	class USoundCue*                                   HoveringStopSound;                                        // 0x0D94(0x0004)
	class UParticleSystemComponent*                    HoveringParticleSystem;                                   // 0x0D98(0x0004)
	class UAudioComponent*                             HoveringLoopSound;                                        // 0x0D9C(0x0004)
	struct FName                                       HoveringParticleSystemAttachSocketName;                   // 0x0DA0(0x0008)
	class UAnimNodeBlend*                              HoveringBlender;                                          // 0x0DA8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Hovering");
		return ptr;
	}


	void PostBeginPlay();
	void StopHovering();
	void StartHovering();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayer_Summoner
// 0x00A8 (0x0E54 - 0x0DAC)
class ADunDefPlayer_Summoner : public ADunDefPlayer_Hovering
{
public:
	struct FName                                       WheelEntryToOpenOnFire;                                   // 0x0DAC(0x0008)
	struct FName                                       AbilityToActivateOnFire;                                  // 0x0DB4(0x0008)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x0DBC(0x000C)
	struct FLinearColor                                SummonBarTextColor;                                       // 0x0DC8(0x0010)
	struct FLinearColor                                SummonBarColor;                                           // 0x0DD8(0x0010)
	class UParticleSystemComponent*                    HoverEffect;                                              // 0x0DE8(0x0004)
	class UParticleSystemComponent*                    BookHoverEffect;                                          // 0x0DEC(0x0004)
	class UParticleSystemComponent*                    LeftHandGlow;                                             // 0x0DF0(0x0004)
	class UParticleSystemComponent*                    RightHandGlow;                                            // 0x0DF4(0x0004)
	struct FName                                       RightHandSocket;                                          // 0x0DF8(0x0008)
	struct FName                                       LeftHandSocket;                                           // 0x0E00(0x0008)
	struct FName                                       HoverSocket;                                              // 0x0E08(0x0008)
	struct FName                                       BookHoverSocket;                                          // 0x0E10(0x0008)
	class ADunDefEmitterSpawnable*                     RepairingTowerWeaponEmitterTemplate;                      // 0x0E18(0x0004)
	class ADunDefEmitterSpawnable*                     UpgradingTowerWeaponEmitterTemplate;                      // 0x0E1C(0x0004)
	class ADunDefEmitterSpawnable*                     HealingSelfWeaponEmitterTemplate;                         // 0x0E20(0x0004)
	class ADunDefEmitterSpawnable*                     SummoningTowerWeaponEmitterTemplate;                      // 0x0E24(0x0004)
	class ADunDefEmitterSpawnable*                     DetonatingTrapsEmitterTemplate;                           // 0x0E28(0x0004)
	class ADunDefEmitterSpawnable*                     SellTowerEmitterTemplate;                                 // 0x0E2C(0x0004)
	class UTexture2D*                                  OverlordMiniMapIconTexture;                               // 0x0E30(0x0004)
	TArray<class UMaterialInstanceConstant*>           phaseShiftMICoverride;                                    // 0x0E34(0x000C)
	float                                              cameraIconSize;                                           // 0x0E40(0x0004)
	class UAudioComponent*                             OrderIssuedUnitCommand;                                   // 0x0E44(0x0004)
	unsigned long                                      bIsPhased : 1;                                            // 0x0E48(0x0004) (Edit)
	class ADunDefPlayerAbility_PhaseShift*             myPhaseShiftAbility;                                      // 0x0E4C(0x0004)
	class ADunDefEmitterSpawnable*                     castingSpellEmitter;                                      // 0x0E50(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Summoner");
		return ptr;
	}


	void DrawMiniMapIcon();
	void GetPhaseShiftMaterials();
	void IssuedCommand();
	void GetSellTowerEmitter();
	void GetTrapDetonationEmitter();
	void GetUpgradingWeaponEmitter();
	void GetWeaponRepairEmitter();
	void GetHealingWeaponEmitter();
	void GetSummoningTowerEmitter();
	void StopSpellEmitter();
	void StartSpellEmitter();
	void AllowDropPickups();
	void SetOwnerNoSee();
	void Died();
	void GetEnemyTargetingDesirability();
	void TakeDamage();
	void PhaseScaleDown();
	void UsedAbility();
	void CheckForTokens();
	void AllowFamiliarAbilities();
	void AttachAllEquipment();
	void DetachAllEquipment();
	void SetPhased();
	void AllowEquipmentAttachment();
	void Destroyed();
	void StopFire();
	void StartFire();
	void GetSelectedTowers();
	void RemoveSelectedTower();
	void ServerRemoveSelectedTower();
	void RemoveAllSelectedTowers();
	void HasSelectedTower();
	void AddSelectedTowerGroup();
	void ServerAddSelectedTower();
	void AddSelectedTower();
	void ClientSetupColors();
	void SetMyCustomColors();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefDamageType_ProtoBeam
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_ProtoBeam : public UDunDefDamageType_Passive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDamageType_ProtoBeam");
		return ptr;
	}

};


// Class DunDefSpecial.DunDefDecoyTarget
// 0x005C (0x0564 - 0x0508)
class ADunDefDecoyTarget : public ADunDefDamageableTarget
{
public:
	TEnumAsByte<ELevelUpValueType>                     AssociatedHeroStat;                                       // 0x0508(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	float                                              HealthExponent;                                           // 0x050C(0x0004)
	float                                              HealthLinearFactor;                                       // 0x0510(0x0004)
	float                                              TargetingDesirabilityExponent;                            // 0x0514(0x0004)
	unsigned long                                      bDoPoke : 1;                                              // 0x0518(0x0004)
	unsigned long                                      bFadedIn : 1;                                             // 0x0518(0x0004)
	float                                              PokeRadius;                                               // 0x051C(0x0004)
	float                                              PokeAggroAmount;                                          // 0x0520(0x0004)
	float                                              ActiveTime;                                               // 0x0524(0x0004)
	float                                              ActiveTimeExponent;                                       // 0x0528(0x0004)
	float                                              NumAttackersExponent;                                     // 0x052C(0x0004)
	TArray<class UClass*>                              NoPokeClasses;                                            // 0x0530(0x000C)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x053C(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0540(0x0004)
	class ADunDefEmitterSpawnable*                     SpawnedEmitter;                                           // 0x0544(0x0004)
	class UMaterialInterface*                          MyMaterial;                                               // 0x0548(0x0004)
	struct FName                                       MaterialFadeInName;                                       // 0x054C(0x0008)
	float                                              FadeInTime;                                               // 0x0554(0x0004)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0558(0x0004)
	float                                              MiniMapIconSize;                                          // 0x055C(0x0004)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x0560(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDecoyTarget");
		return ptr;
	}


	void DTGetEnemyTargetingDesirability();
	void DrawMyHUD();
	void PlayDeath();
	void AllowHeroGUID();
	void CanDetonate();
	void Detonate();
	void SelfDestruct();
	void ScaleForHeroModifiers();
	void IsClassOnIgnoreList();
	void SetMaxNumberOfAttackers();
	void SetActiveTime();
	void DoPoke();
	void SetDesirability();
	void SetHealth();
	void Tick();
	void DrawMiniMapIcon();
	void Destroyed();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefDropOffPoint
// 0x01BC (0x06C4 - 0x0508)
class ADunDefDropOffPoint : public ADunDefDamageableTarget
{
public:
	class ADunDefPlayer*                               theDroppingOffActor;                                      // 0x0508(0x0004) (Edit)
	TArray<class ADunDefPickupableItem*>               droppedOffItems;                                          // 0x050C(0x000C)
	class UDecalComponent*                             Decal;                                                    // 0x0518(0x0004)
	class USkeletalMeshComponent*                      MyMesh;                                                   // 0x051C(0x0004)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0520(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0524(0x0004)
	class UParticleSystemComponent*                    DropOffParticleComponent;                                 // 0x0528(0x0004)
	class UParticleSystemComponent*                    DropOffCompletedParticleComponent;                        // 0x052C(0x0004)
	class UAudioComponent*                             DropOffSoundComp;                                         // 0x0530(0x0004)
	TArray<struct FName>                               TakeHitAnims;                                             // 0x0534(0x000C)
	struct FName                                       CustomAnimName;                                           // 0x0540(0x0008)
	class USoundCue*                                   DropOffFullSound;                                         // 0x0548(0x0004)
	class USoundCue*                                   DroppedOffItemSound;                                      // 0x054C(0x0004)
	class USoundCue*                                   DropOffPointDiedSound;                                    // 0x0550(0x0004)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0554(0x0004)
	float                                              PushOutOffset;                                            // 0x0558(0x0004)
	float                                              RotPlacementInc;                                          // 0x055C(0x0004)
	float                                              FullOpacityValue;                                         // 0x0560(0x0004)
	struct FColor                                      DropOffUnderAttackMessageColor;                           // 0x0564(0x0004)
	struct FColor                                      DropOffDestroyedColor;                                    // 0x0568(0x0004)
	struct FString                                     DropOffUnderAttackMessageString;                          // 0x056C(0x000C)
	struct FString                                     DropOffDestroyedString;                                   // 0x0578(0x000C)
	struct FString                                     DropOffString;                                            // 0x0584(0x000C)
	struct FString                                     BeganDroppingOffString;                                   // 0x0590(0x000C)
	float                                              DropOffTime;                                              // 0x059C(0x0004)
	class ADunDefTouchForwardingActor*                 myTouchForwardingActor;                                   // 0x05A0(0x0004)
	class UTexture2D*                                  ActiveDropsTexture;                                       // 0x05A4(0x0004)
	class UTexture2D*                                  ActiveDropsBGTexture;                                     // 0x05A8(0x0004)
	class UTexture2D*                                  IconBGTexture;                                            // 0x05AC(0x0004)
	class UTexture2D*                                  IconTexture;                                              // 0x05B0(0x0004)
	float                                              MiniMapScale;                                             // 0x05B4(0x0004)
	float                                              MiniMapOpacity;                                           // 0x05B8(0x0004)
	struct FVector                                     MiniMapOffset;                                            // 0x05BC(0x000C)
	struct FVector                                     ActiveDisplayOffset;                                      // 0x05C8(0x000C)
	float                                              TileTextOffsetY;                                          // 0x05D4(0x0004)
	float                                              TileTextOffsetX;                                          // 0x05D8(0x0004)
	float                                              ActiveDisplayScale;                                       // 0x05DC(0x0004)
	float                                              IconBGScale;                                              // 0x05E0(0x0004)
	float                                              IconBGSizeX;                                              // 0x05E4(0x0004)
	float                                              IconBGSizeY;                                              // 0x05E8(0x0004)
	float                                              IconBGOffsetX;                                            // 0x05EC(0x0004)
	float                                              IconBGOffsetY;                                            // 0x05F0(0x0004)
	float                                              ActiveDisplaySizeX;                                       // 0x05F4(0x0004)
	float                                              ActiveDisplaySizeY;                                       // 0x05F8(0x0004)
	float                                              ActiveDisplayTextScale;                                   // 0x05FC(0x0004)
	float                                              TileScale;                                                // 0x0600(0x0004)
	float                                              ActiveDisplayOffsetX;                                     // 0x0604(0x0004)
	float                                              ActiveDisplayOffsetY;                                     // 0x0608(0x0004)
	float                                              TileOffsetY;                                              // 0x060C(0x0004)
	float                                              TileOffsetX;                                              // 0x0610(0x0004)
	float                                              TileSizeX;                                                // 0x0614(0x0004)
	float                                              TileSizeY;                                                // 0x0618(0x0004)
	float                                              ActiveDisplayTextOffsetX;                                 // 0x061C(0x0004)
	float                                              ActiveDisplayTextOffsetY;                                 // 0x0620(0x0004)
	struct FString                                     fullString;                                               // 0x0624(0x000C)
	struct FString                                     ActiveString;                                             // 0x0630(0x000C)
	struct FString                                     DroppingOffString;                                        // 0x063C(0x000C)
	float                                              MinFadeDistance;                                          // 0x0648(0x0004)
	float                                              FadeDistanceOffset;                                       // 0x064C(0x0004)
	float                                              MinFadeOpacity;                                           // 0x0650(0x0004)
	float                                              FadeDotExponent;                                          // 0x0654(0x0004)
	struct FColor                                      ActiveDisplayTextColor;                                   // 0x0658(0x0004)
	float                                              TowerPreventionRadius;                                    // 0x065C(0x0004)
	float                                              DamageNotifyInterval;                                     // 0x0660(0x0004)
	float                                              IndicateDamageTime;                                       // 0x0664(0x0004)
	struct FName                                       ActiveScalarParamName;                                    // 0x0668(0x0008)
	int                                                ActiveMICIndex;                                           // 0x0670(0x0004)
	class UMaterialInstanceConstant*                   ActiveMIC;                                                // 0x0674(0x0004)
	int                                                MaxHoldableDropOffs;                                      // 0x0678(0x0004)
	int                                                currentDropOffTime;                                       // 0x067C(0x0004)
	float                                              accumulatedDropOffTime;                                   // 0x0680(0x0004)
	int                                                currentNumDropOffs;                                       // 0x0684(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0688(0x0004) (Edit)
	unsigned long                                      bStartedDangerFadeIn : 1;                                 // 0x0688(0x0004)
	unsigned long                                      bDropOffFilled : 1;                                       // 0x0688(0x0004) (Edit)
	class UMaterialInterface*                          InDangerHUDWaypointMatHealthBar;                          // 0x068C(0x0004)
	class UMaterialInterface*                          InDangerHUDWaypointMat;                                   // 0x0690(0x0004)
	class UMaterialInstanceConstant*                   InDangerHUDWaypointMatHealthBarInst;                      // 0x0694(0x0004)
	float                                              InDangerHUDFadeOutTime;                                   // 0x0698(0x0004)
	float                                              InDangerHUDFadeInTime;                                    // 0x069C(0x0004)
	float                                              LastStartedDangerFadeInTime;                              // 0x06A0(0x0004)
	float                                              WarningIconCenterYOffset;                                 // 0x06A4(0x0004)
	float                                              WarningIconCenterScale;                                   // 0x06A8(0x0004)
	struct FString                                     DropOffFilledMessage;                                     // 0x06AC(0x000C)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x06B8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefDropOffPoint");
		return ptr;
	}


	void PreventTowerAtPoint();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void DTGetEnemyTargetingDesirability();
	void PostBeginPlay();
	void NotifyPackageDestroyed();
	void Died();
	void NotifyHealthChange();
	void PlayHitEffect();
	void AdjustDamage();
	void OnlyDrawHUDForOwner();
	void DrawMiniMapIcon();
	void DrawActiveDisplay();
	void DrawMyHUD();
	void DeactivatePoint();
	void TurnOffActiveEffects();
	void TurnOnActiveEffects();
	void ActivatePoint();
	void ClearDropOffActor();
	void SetDropOffActor();
	void NotifyPackageDropOff();
	void PlaceNewItem();
	void IsFull();
	void RemoveDropOffItem();
	void DropOffUnFilled();
	void DropOffFilled();
	void AddDropOffItem();
	void UpdateDropOff();
	void Tick();
	void UnTouch();
	void Touch();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPickupableItem
// 0x00A0 (0x02C4 - 0x0224)
class ADunDefPickupableItem : public ADunDefDroppedItem
{
public:
	class UParticleSystemComponent*                    DropOffParticleComponent;                                 // 0x0224(0x0004)
	class UParticleSystemComponent*                    PickedUpParticleComponent;                                // 0x0228(0x0004)
	TArray<class UStaticMesh*>                         myMeshes;                                                 // 0x022C(0x000C)
	int                                                myMeshIndex;                                              // 0x0238(0x0004) (Edit)
	class UStaticMeshComponent*                        myActiveMesh;                                             // 0x023C(0x0004)
	class ADunDefEmitterSpawnable*                     PackageDestroyTemplate;                                   // 0x0240(0x0004)
	class ADunDefEmitterSpawnable*                     PickUpEmitter;                                            // 0x0244(0x0004)
	float                                              MaxPickupDistance;                                        // 0x0248(0x0004)
	float                                              PickupWeighting;                                          // 0x024C(0x0004)
	float                                              PickupOffset;                                             // 0x0250(0x0004)
	struct FColor                                      ToolTipDrawColor;                                         // 0x0254(0x0004)
	struct FString                                     PickUpString;                                             // 0x0258(0x000C)
	struct FString                                     PickedUpHudMessage;                                       // 0x0264(0x000C)
	struct FString                                     LostPackageString;                                        // 0x0270(0x000C)
	unsigned long                                      bModifyTargetingDesirability : 1;                         // 0x027C(0x0004)
	unsigned long                                      bAllowLonePickUp : 1;                                     // 0x027C(0x0004)
	unsigned long                                      bIsPickedUp : 1;                                          // 0x027C(0x0004)
	unsigned long                                      bCanBePickedUp : 1;                                       // 0x027C(0x0004)
	unsigned long                                      bIsDroppingOff : 1;                                       // 0x027C(0x0004)
	float                                              ModifiedTargetingDesirability;                            // 0x0280(0x0004)
	int                                                MaxAllowedPickUpHits;                                     // 0x0284(0x0004)
	int                                                MaxDroppedHealth;                                         // 0x0288(0x0004)
	int                                                currentHealth;                                            // 0x028C(0x0004)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x0290(0x0004)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x0294(0x0004)
	class UTexture2D*                                  WayPointToMe;                                             // 0x0298(0x0004)
	float                                              WaypointIconOffscreenScale;                               // 0x029C(0x0004)
	float                                              WaypointIconCenterScale;                                  // 0x02A0(0x0004)
	float                                              WaypointCenterYOffset;                                    // 0x02A4(0x0004)
	struct FColor                                      WayPtColor;                                               // 0x02A8(0x0004)
	struct FColor                                      PickedUpColor;                                            // 0x02AC(0x0004)
	class USoundCue*                                   PickupSound;                                              // 0x02B0(0x0004)
	class ADunDefDropOffPoint*                         closestDropOffPoint;                                      // 0x02B4(0x0004)
	class ADunDefPickupableSpawner*                    myPickupSpawner;                                          // 0x02B8(0x0004) (Edit)
	class ADunDefPlayer*                               ItemHolder;                                               // 0x02BC(0x0004)
	class ADunDefDropOffPoint*                         myDropOffPoint;                                           // 0x02C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPickupableItem");
		return ptr;
	}


	void SetDroppingOff();
	void Destroyed();
	void NotifyHolderLost();
	void DoDestroyEffects();
	void DestroyPickUp();
	void PlaceAtPoint();
	void DropOffItem();
	void DrawWaypointToMe();
	void GetDropOffWayPt();
	void OnlyDrawHUDForOwner();
	void DrawMyHUD();
	void CanBePickedUp();
	void PickupItem();
	void BeginBeingPickedUp();
	void AttachToSpawner();
	void InitMesh();
	void GetToolTipPriority();
	void TakesToolTipPriority();
	void ContinueDrawingToolTip();
	void DrawToolTip();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void PreventTowerAtPoint();
	void DrawMiniMapIcon();
	void GetActivationOffset();
	void GetActivationWeighting();
	void Client_Activate();
	void Server_Activate();
	void AllowActivation();
	void SetMyActiveMesh();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefTouchForwardingActor
// 0x0008 (0x0224 - 0x021C)
class ADunDefTouchForwardingActor : public AActor
{
public:
	class AActor*                                      TouchParent;                                              // 0x021C(0x0004)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTouchForwardingActor");
		return ptr;
	}


	void UnTouch();
	void Touch();
	void SetTouchParent();
};


// Class DunDefSpecial.DunDefPlayerController_Delivery
// 0x0008 (0x0B40 - 0x0B38)
class ADunDefPlayerController_Delivery : public ADunDefPlayerController
{
public:
	class ADunDefPickupableItem*                       myCarriedItem;                                            // 0x0B38(0x0004)
	int                                                carriedHitsTaken;                                         // 0x0B3C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerController_Delivery");
		return ptr;
	}


	void PawnDied();
	void NotifyTakeHit();
	void DropCurrentItem();
	void PickupItem();
};


// Class DunDefSpecial.DunDefGRI_Delivery
// 0x0084 (0x07A4 - 0x0720)
class ADunDefGRI_Delivery : public ADunDefGameReplicationInfo
{
public:
	TArray<class ADunDefDropOffPoint*>                 worldDropOffPts;                                          // 0x0720(0x000C)
	TArray<class ADunDefDropOffPoint*>                 activeDropOffPoints;                                      // 0x072C(0x000C)
	int                                                NumFullPoints;                                            // 0x0738(0x0004)
	struct FColor                                      DeliveryTextColor;                                        // 0x073C(0x0004)
	struct FColor                                      DeliveryStatusTextColor;                                  // 0x0740(0x0004)
	class ADunDefPlayerAbility_PickUpItem*             PickupItemAbilityTemplate;                                // 0x0744(0x0004)
	unsigned long                                      bDoneDoingDelivery : 1;                                   // 0x0748(0x0004)
	unsigned long                                      bDisableTimer : 1;                                        // 0x0748(0x0004)
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                            // 0x0748(0x0004)
	TArray<class ADunDefPlayer*>                       PackageHolders;                                           // 0x074C(0x000C)
	float                                              PackageHoldingGroundSpeed;                                // 0x0758(0x0004)
	float                                              DeliveryTimeLimit;                                        // 0x075C(0x0004)
	struct FString                                     TimeLimitString;                                          // 0x0760(0x000C)
	struct FString                                     DeliveryLimitString;                                      // 0x076C(0x000C)
	struct FString                                     DeliveryString;                                           // 0x0778(0x000C)
	struct FString                                     DropOffString;                                            // 0x0784(0x000C)
	struct FString                                     PickUpString;                                             // 0x0790(0x000C)
	struct FColor                                      TimeLimitTextColor;                                       // 0x079C(0x0004)
	class ADunDefPickupableItem*                       currentDeliveryItem;                                      // 0x07A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Delivery");
		return ptr;
	}


	void AllowedToTeleport();
	void SetCurrentDeliveryItem();
	void RemovePackageHolder();
	void AddPackageHolder();
	void ModifyPlayerGroundSpeed();
	void AllowPackageSpawn();
	void SetInCombatPhase();
	void DrawMyHUD();
	void ClearDropPoints();
	void NotifyLostDropOffPoint();
	void NotifyFilledDropOffPoint();
	void SelectNewDropOffPoint();
	void Server_AddGRIHeroAbilities();
	void EndBuildPhase();
	void Tick();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefEnemyCrystalCore
// 0x0028 (0x0530 - 0x0508)
class ADunDefEnemyCrystalCore : public ADunDefDamageableTarget
{
public:
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0508(0x0004)
	class UParticleSystemComponent*                    CoreParticleEffect;                                       // 0x050C(0x0004)
	class UAudioComponent*                             MyAmbientSound;                                           // 0x0510(0x0004)
	class UPointLightComponent*                        CoreLight;                                                // 0x0514(0x0004)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0518(0x0004)
	float                                              MiniMapIconSize;                                          // 0x051C(0x0004)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x0520(0x000C)
	int                                                MaxDifficultySets;                                        // 0x052C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefEnemyCrystalCore");
		return ptr;
	}


	void DrawMiniMapIcon();
	void Destroyed();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefFlashHeal
// 0x0048 (0x031C - 0x02D4)
class ADunDefFlashHeal : public ADunDefEmitterSpawnable
{
public:
	float                                              HealthPercentToHeal;                                      // 0x02D4(0x0004)
	float                                              HealthPercentToHealExp;                                   // 0x02D8(0x0004)
	float                                              MaxHealPct;                                               // 0x02DC(0x0004)
	float                                              HealRadius;                                               // 0x02E0(0x0004)
	float                                              HealRadiusExp;                                            // 0x02E4(0x0004)
	float                                              EffectRadius;                                             // 0x02E8(0x0004)
	float                                              HealDelay;                                                // 0x02EC(0x0004)
	TEnumAsByte<ELevelUpValueType>                     ScalingHeroStatType;                                      // 0x02F0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	unsigned long                                      bHealSameTeamOnly : 1;                                    // 0x02F4(0x0004)
	class UClass*                                      HealDamageType;                                           // 0x02F8(0x0004)
	TArray<class UClass*>                              AllowedHealClasses;                                       // 0x02FC(0x000C)
	class ADunDefEmitterSpawnable*                     HealEmitter;                                              // 0x0308(0x0004)
	struct FString                                     DummyPercentHealingString;                                // 0x030C(0x000C)
	float                                              HealRadiusMult;                                           // 0x0318(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefFlashHeal");
		return ptr;
	}


	void SpawnHealEmitter();
	void STATIC_AllowSpawn();
	void FlashHeal();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefGRI_Assault
// 0x0058 (0x0778 - 0x0720)
class ADunDefGRI_Assault : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0720(0x0004)
	struct FString                                     NumLivesString;                                           // 0x0724(0x000C)
	struct FString                                     NumCoresString;                                           // 0x0730(0x000C)
	struct FColor                                      NumLivesStringColor;                                      // 0x073C(0x0004)
	struct FColor                                      NumCoresStringColor;                                      // 0x0740(0x0004)
	unsigned long                                      HadPositiveCores : 1;                                     // 0x0744(0x0004)
	float                                              KillPhaseTimeLimit;                                       // 0x0748(0x0004)
	float                                              NightmareGroundSpeedLerp;                                 // 0x074C(0x0004)
	float                                              NightmareTimeLimitMultiplier;                             // 0x0750(0x0004)
	struct FString                                     TimeLimitString;                                          // 0x0754(0x000C)
	struct FColor                                      TimeLimitTextColor;                                       // 0x0760(0x0004)
	struct FString                                     DestroyedEnemyCoreString;                                 // 0x0764(0x000C)
	struct FColor                                      DestroyedEnemyCoreStringColor;                            // 0x0770(0x0004)
	int                                                LastNumberOfCoresRemaining;                               // 0x0774(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Assault");
		return ptr;
	}


	void AllowedToTeleport();
	void GetEnemyLifeSpanMultiplier();
	void ModifyPlayerGroundSpeed();
	void GetTrapRangeMultiplier();
	void GetAuraRangeMultiplier();
	void GetTrapDamageMultiplier();
	void GetTrapHealthMultiplier();
	void GetStrengthDrainAuraMultiplier();
	void GetAuraDamageMultiplier();
	void GetAuraHealthMultiplier();
	void GetProjectileLimitDistance();
	void PostBeginPlay();
	void Tick();
	void GetNumberOfEnemyCoresRemaining();
	void DrawMyHUD();
	void RestartedPlayer();
	void CanEnterSpectatorMode();
	void CanRespawnPlayer();
};


// Class DunDefSpecial.DunDefGRI_Chicken
// 0x0094 (0x07B4 - 0x0720)
class ADunDefGRI_Chicken : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0720(0x0004)
	struct FString                                     NumLivesString;                                           // 0x0724(0x000C)
	struct FColor                                      NumLivesStringColor;                                      // 0x0730(0x0004)
	class ADunDefPlayer*                               ChickenPlayer;                                            // 0x0734(0x0004) (Edit)
	struct FString                                     IsTheChickenString;                                       // 0x0738(0x000C)
	struct FString                                     MSG_YouAreTheChicken;                                     // 0x0744(0x000C)
	struct FString                                     SpectatorNoLivesWaitString;                               // 0x0750(0x000C)
	struct FString                                     MSG_WillBecomeChicken;                                    // 0x075C(0x000C)
	struct FColor                                      ChickenMessageColor;                                      // 0x0768(0x0004)
	struct FColor                                      ChickenMessageYouColor;                                   // 0x076C(0x0004)
	class UTexture2D*                                  ChickenIcon;                                              // 0x0770(0x0004)
	struct FVector                                     ChickenIconPositionOffset;                                // 0x0774(0x000C)
	float                                              ChickenIconPositionHeightScale;                           // 0x0780(0x0004)
	float                                              ChickenIconSize;                                          // 0x0784(0x0004)
	class USoundCue*                                   ChickenSoundEffect;                                       // 0x0788(0x0004)
	TArray<int>                                        LivesRemainings;                                          // 0x078C(0x000C)
	unsigned long                                      bSentChickenChangeNotification : 1;                       // 0x0798(0x0004)
	unsigned long                                      bWasAChicken : 1;                                         // 0x0798(0x0004)
	unsigned long                                      bIsSinglePlayer : 1;                                      // 0x0798(0x0004)
	float                                              LastChickenChangeTime;                                    // 0x079C(0x0004)
	class ADunDefPlayer*                               NewChickenPlayer;                                         // 0x07A0(0x0004)
	float                                              ChickenChangeNotificationInterval;                        // 0x07A4(0x0004)
	float                                              ChickenChangeInterval;                                    // 0x07A8(0x0004)
	float                                              SinglePlayerChickenTimeout;                               // 0x07AC(0x0004)
	float                                              SinglePlayerCombatStartChickenInterval;                   // 0x07B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_Chicken");
		return ptr;
	}


	void PostBeginPlay();
	void GetSpectatorWaitString();
	void RestartedPlayer();
	void CanEnterSpectatorMode();
	void CanRespawnPlayer();
	void DrawMyHUD();
	void BeganCombatPhase();
	void SetChickenPlayer();
	void GetRandomPlayer();
	void Tick();
	void SetInCombatPhase();
	void NotifyOfChicken();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayerAbility_PickUpItem
// 0x0008 (0x046C - 0x0464)
class ADunDefPlayerAbility_PickUpItem : public ADunDefPlayerAbility_GenericSpellTimer
{
public:
	class ADunDefPickupableItem*                       PickupItem;                                               // 0x0464(0x0004)
	class USoundCue*                                   StartPickingupSound;                                      // 0x0468(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PickUpItem");
		return ptr;
	}


	void RequestPickup();
};


// Class DunDefSpecial.DunDefMapInfo_Delivery
// 0x003C (0x0370 - 0x0334)
class UDunDefMapInfo_Delivery : public UDunDefMapInfo
{
public:
	TArray<struct FTimes>                              DifficultyTimeLimits;                                     // 0x0334(0x000C)
	TArray<struct FPerDifficulty>                      NumPlayerTimeMultiplier;                                  // 0x0340(0x000C)
	TArray<int>                                        DropPointsPerWave;                                        // 0x034C(0x000C)
	TArray<int>                                        DUPerWave;                                                // 0x0358(0x000C)
	TArray<int>                                        NumDropOffsPerPoints;                                     // 0x0364(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefMapInfo_Delivery");
		return ptr;
	}


	void GetPointDropOffCount();
	void GetDUForWave();
	void GetTimeLimit();
	void GetWaveDropOffCount();
};


// Class DunDefSpecial.DunDefManaToken_Golden
// 0x0003 (0x0374 - 0x0371)
class ADunDefManaToken_Golden : public ADunDefManaToken
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefManaToken_Golden");
		return ptr;
	}


	void Collected();
};


// Class DunDefSpecial.DunDefGRI_GoldenTokens
// 0x0074 (0x0794 - 0x0720)
class ADunDefGRI_GoldenTokens : public ADunDefGameReplicationInfo
{
public:
	class ADunDefEnemy*                                GoldenEnemy;                                              // 0x0720(0x0004) (Edit)
	class ADunDefEnemy*                                PreviousGoldenEnemy;                                      // 0x0724(0x0004)
	class UParticleSystemComponent*                    PreviousGoldEffectComp;                                   // 0x0728(0x0004)
	class UParticleSystem*                             GoldParticleEffect;                                       // 0x072C(0x0004)
	class ADunDefManaToken_Golden*                     GoldenManaTokenTemplate;                                  // 0x0730(0x0004)
	struct FString                                     GoldenManaTokenCollectedString;                           // 0x0734(0x000C)
	struct FString                                     AllGoldenManaTokenCollectedString;                        // 0x0740(0x000C)
	struct FString                                     GoldenManaTokensToCollectString;                          // 0x074C(0x000C)
	struct FColor                                      GoldenManaTokenCollectedStringColor;                      // 0x0758(0x0004)
	struct FColor                                      AllGoldenManaTokenCollectedStringColor;                   // 0x075C(0x0004)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x0760(0x0004)
	int                                                NumSpawners;                                              // 0x0764(0x0004)
	int                                                NumGoldenTokens;                                          // 0x0768(0x0004) (Edit)
	int                                                LastNumGoldenTokens;                                      // 0x076C(0x0004)
	float                                              NextGoldenEnemyTimer;                                     // 0x0770(0x0004)
	float                                              GoldenEnemyMinInterval;                                   // 0x0774(0x0004)
	float                                              GoldenEnemyMaxInterval;                                   // 0x0778(0x0004)
	float                                              MaxGoldenEnemyAge;                                        // 0x077C(0x0004)
	float                                              GoldenTokenRequirementWaveMultiplier;                     // 0x0780(0x0004)
	float                                              TokenEnemyDifficultyOffset;                               // 0x0784(0x0004)
	TArray<class UDunDef_SeqAct_EnemyWaveSpawner*>     UsedSpawners;                                             // 0x0788(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_GoldenTokens");
		return ptr;
	}


	void DrawMyHUD();
	void SetInCombatPhase();
	void CollectedGoldenToken();
	void PawnDied();
	void SetGoldenEnemy();
	void PostBeginPlay();
	void Tick();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit
// 0x0028 (0x0748 - 0x0720)
class ADunDefGRI_KillEnemiesTimeLimit : public ADunDefGameReplicationInfo
{
public:
	int                                                LivesRemaining;                                           // 0x0720(0x0004)
	float                                              KillPhaseTimeLimit;                                       // 0x0724(0x0004)
	struct FString                                     TimeLimitString;                                          // 0x0728(0x000C)
	struct FColor                                      TimeLimitTextColor;                                       // 0x0734(0x0004)
	TArray<int>                                        LivesRemainings;                                          // 0x0738(0x000C)
	unsigned long                                      bDisableTimer : 1;                                        // 0x0744(0x0004)
	unsigned long                                      bDisableTimerBySpeedBuild : 1;                            // 0x0744(0x0004)
	unsigned long                                      bNightmareDontAllowRespawn : 1;                           // 0x0744(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit");
		return ptr;
	}


	void GetSpectatorWaitString();
	void RestartedPlayer();
	void CanEnterSpectatorMode();
	void CanRespawnPlayer();
	void DrawMyHUD();
	void ReceivedGameClass();
	void SetInCombatPhase();
	void PostBeginPlay();
	void Tick();
};


// Class DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit
// 0x0040 (0x0374 - 0x0334)
class UDunDefMapInfo_KillEnemiesTimeLimit : public UDunDefMapInfo
{
public:
	TArray<float>                                      TimeLimits;                                               // 0x0334(0x000C)
	TArray<float>                                      TimeLimitMultipliers;                                     // 0x0340(0x000C)
	TArray<float>                                      DifficultyTimeLimitAdditions;                             // 0x034C(0x000C)
	TArray<struct FTimeLimitAddition>                  WavePlayerTimeLimitAdditions;                             // 0x0358(0x000C)
	int                                                KillEnemiesTimeLimitWaveToStartAt;                        // 0x0364(0x0004)
	TArray<int>                                        LivesPerDifficulty;                                       // 0x0368(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit");
		return ptr;
	}


	void GetTimeLimit();
};


// Class DunDefSpecial.UI_GlobalHUDUberMF
// 0x0018 (0x0720 - 0x0708)
class UUI_GlobalHUDUberMF : public UUI_GlobalHUD
{
public:
	class UUILabel*                                    ScoreLabel;                                               // 0x0708(0x0004)
	class UUIPanel*                                    ScorePanel;                                               // 0x070C(0x0004)
	class UUILabel*                                    PlayerList;                                               // 0x0710(0x0004)
	class UUILabel*                                    ScoreList;                                                // 0x0714(0x0004)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0718(0x0004)
	struct FColor                                      DefaultPlayerHighLightColor;                              // 0x071C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_GlobalHUDUberMF");
		return ptr;
	}


	void GetPlayerList();
	void GetColorString();
	void UpdateScorePanel();
	void Update();
};


// Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber
// 0x001C (0x0764 - 0x0748)
class ADunDefGRI_KillEnemiesTimeLimit_Uber : public ADunDefGRI_KillEnemiesTimeLimit
{
public:
	struct FColor                                      WinMsgColor;                                              // 0x0748(0x0004)
	struct FString                                     mvpString;                                                // 0x074C(0x000C)
	TArray<float>                                      MoveRepSizes;                                             // 0x0758(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_KillEnemiesTimeLimit_Uber");
		return ptr;
	}


	void Tick();
	void ReadToShowStats();
	void GetGameOverLabelColor();
	void GetVictoryLabelColor();
	void GetGameOverLabelString();
	void GetVictoryLabelString();
	void OverrideEndGameLabel();
	void GetMVP();
	void DoLevelVictory();
};


// Class DunDefSpecial.DunDefGRI_OgreAlly
// 0x0000 (0x0720 - 0x0720)
class ADunDefGRI_OgreAlly : public ADunDefGameReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_OgreAlly");
		return ptr;
	}


	void ReceivedGameClass();
	void SetInCombatPhase();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefGRI_UberAssault
// 0x000C (0x0784 - 0x0778)
class ADunDefGRI_UberAssault : public ADunDefGRI_Assault
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x0778(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_UberAssault");
		return ptr;
	}


	void Tick();
};


// Class DunDefSpecial.DunDefGRI_UberDefense
// 0x000C (0x072C - 0x0720)
class ADunDefGRI_UberDefense : public ADunDefGameReplicationInfo
{
public:
	TArray<float>                                      MoveRepSizes;                                             // 0x0720(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_UberDefense");
		return ptr;
	}


	void Tick();
};


// Class DunDefSpecial.DunDefGRI_VDay2
// 0x0020 (0x0740 - 0x0720)
class ADunDefGRI_VDay2 : public ADunDefGameReplicationInfo
{
public:
	TArray<int>                                        DefaultLivesRemainings;                                   // 0x0720(0x000C)
	int                                                LivesRemaining;                                           // 0x072C(0x0004)
	struct FColor                                      NumLivesStringColor;                                      // 0x0730(0x0004)
	TArray<float>                                      MoveRepSizes;                                             // 0x0734(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_VDay2");
		return ptr;
	}


	void PostBeginPlay();
	void Tick();
	void DrawMyHUD();
	void GetGameOverString();
	void DrawExtraEnemyMinimapIcon();
	void PrintPairMatch();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefGRI_ZippyTerror
// 0x0000 (0x0720 - 0x0720)
class ADunDefGRI_ZippyTerror : public ADunDefGameReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefGRI_ZippyTerror");
		return ptr;
	}

};


// Class DunDefSpecial.DunDefHarbinger_v2
// 0x0034 (0x0D00 - 0x0CCC)
class ADunDefHarbinger_v2 : public ADunDefEnemy
{
public:
	struct FName                                       ShootFireAnimation;                                       // 0x0CCC(0x0008)
	struct FName                                       ChargeAnimationName;                                      // 0x0CD4(0x0008)
	struct FName                                       ProjectileSpawnSocketNameLeft;                            // 0x0CDC(0x0008)
	struct FName                                       ProjectileSpawnSocketNameRight;                           // 0x0CE4(0x0008)
	struct FName                                       GloveEffectSocketName;                                    // 0x0CEC(0x0008)
	class UParticleSystemComponent*                    FireGloveEffectComponent;                                 // 0x0CF4(0x0004)
	class UParticleSystemComponent*                    AuraEffectComponent;                                      // 0x0CF8(0x0004)
	class UParticleSystemComponent*                    FiringAuraEffect;                                         // 0x0CFC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefHarbinger_v2");
		return ptr;
	}


	void FireAttackShootRight();
	void FireAttackShootLeft();
	void FireAttackBegin();
	void PostBeginPlay();
	void GetProjectileSpawnTransformation();
	void IsCurrentlyPlayingAttackAnimation();
	void PlayShootFireAnimation();
	void IsCurrentlyPlayingChargeAnimation();
	void PlayChargeFireAnimation();
	void PlayHurtAnimation();
	void PlayJumpAnimation();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefHarbingerController_v2
// 0x000C (0x0644 - 0x0638)
class ADunDefHarbingerController_v2 : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                                       // 0x0638(0x0004)
	float                                              AimRandomSpreadPitch;                                     // 0x063C(0x0004)
	class UDunDefBuff_Harbinger*                       BuffTemplate;                                             // 0x0640(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefHarbingerController_v2");
		return ptr;
	}


	void PawnDied();
	void CheckPlayer();
	void CheckForNearbyPlayers();
	void ObstructionJump();
	void NotifyTakeHitEX();
	void PostBeginPlay();
	void FireProjectiles();
};


// Class DunDefSpecial.DunDefPickupableSpawner
// 0x00A8 (0x05B0 - 0x0508)
class ADunDefPickupableSpawner : public ADunDefDamageableTarget
{
public:
	class USkeletalMeshComponent*                      MyMesh;                                                   // 0x0508(0x0004)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x050C(0x0004)
	TArray<class ADunDefPickupableItem*>               PickupableTemplates;                                      // 0x0510(0x000C)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x051C(0x0004)
	class UParticleSystemComponent*                    ActiveParticle;                                           // 0x0520(0x0004)
	class ADunDefEmitterSpawnable*                     ActivateEmitter;                                          // 0x0524(0x0004)
	int                                                MaxAllowedSpawnedItems;                                   // 0x0528(0x0004)
	unsigned long                                      bUseSocketForSpawn : 1;                                   // 0x052C(0x0004)
	unsigned long                                      bInCombatPhase : 1;                                       // 0x052C(0x0004)
	unsigned long                                      bAllowActivate : 1;                                       // 0x052C(0x0004) (Edit)
	struct FName                                       SocketName;                                               // 0x0530(0x0008)
	float                                              RespawnNewItemDelay;                                      // 0x0538(0x0004)
	struct FColor                                      ToolTipDrawColor;                                         // 0x053C(0x0004)
	struct FString                                     CombatPhaseString;                                        // 0x0540(0x000C)
	struct FString                                     BuildPhaseString;                                         // 0x054C(0x000C)
	struct FString                                     PickedUpSpawnHudMessage;                                  // 0x0558(0x000C)
	class UTexture2D*                                  MiniMapIconTexture;                                       // 0x0564(0x0004)
	class UTexture2D*                                  OffScreenWaypointTexture;                                 // 0x0568(0x0004)
	class UTexture2D*                                  OnScreenWaypointTexture;                                  // 0x056C(0x0004)
	float                                              WaypointIconOffscreenScale;                               // 0x0570(0x0004)
	float                                              WaypointIconCenterScale;                                  // 0x0574(0x0004)
	float                                              WaypointCenterYOffset;                                    // 0x0578(0x0004)
	float                                              MiniMapIconSize;                                          // 0x057C(0x0004)
	struct FColor                                      MiniMapIconColor;                                         // 0x0580(0x0004)
	struct FColor                                      MiniMapIconColorDisabled;                                 // 0x0584(0x0004)
	struct FColor                                      PickedUpSpawnMessageColor;                                // 0x0588(0x0004)
	TArray<class ADunDefPickupableItem*>               currentPickupItems;                                       // 0x058C(0x000C)
	TArray<class ADunDefPickupableItem*>               currentSpawnedItems;                                      // 0x0598(0x000C)
	float                                              MaxPickupDistance;                                        // 0x05A4(0x0004)
	float                                              PickupWeighting;                                          // 0x05A8(0x0004)
	float                                              PickupOffset;                                             // 0x05AC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPickupableSpawner");
		return ptr;
	}


	void AdjustDamage();
	void OnlyDrawHUDForOwner();
	void DrawMyHUD();
	void DrawToolTip();
	void ChangedGamePhases();
	void NotifyPickUp();
	void NotifyDestroyed();
	void NotifyDrop();
	void GetSpawnLocandRot();
	void ActivateEffects();
	void SpawnPickUpItem();
	void PostBeginPlay();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void PreventTowerAtPoint();
	void DrawMiniMapIcon();
	void Client_Activate();
	void GetActivationOffset();
	void GetActivationWeighting();
	void Server_Activate();
	void AllowActivation();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayer_DualMelee
// 0x0090 (0x0E10 - 0x0D80)
class ADunDefPlayer_DualMelee : public ADunDefPlayer
{
public:
	TEnumAsByte<EStances>                              myCurrentStance;                                          // 0x0D80(0x0001)
	unsigned char                                      PendingFireMain;                                          // 0x0D81(0x0001)
	unsigned char                                      PendingFireOff;                                           // 0x0D82(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0D83(0x0001) MISSED OFFSET
	struct FName                                       OffHandWeaponSocketName;                                  // 0x0D84(0x0008)
	struct FName                                       StanceIdleNodeName;                                       // 0x0D8C(0x0008)
	struct FName                                       StanceMovementNodeName;                                   // 0x0D94(0x0008)
	float                                              StanceBlendTime;                                          // 0x0D9C(0x0004)
	class UAnimNodeBlendList*                          StanceIdleNode;                                           // 0x0DA0(0x0004)
	class UAnimNodeBlendList*                          StanceMovementNode;                                       // 0x0DA4(0x0004)
	class ADunDefWeapon_MeleeSword*                    PreviousAttackWeapon;                                     // 0x0DA8(0x0004)
	int                                                currentComboSwingIndex;                                   // 0x0DAC(0x0004)
	struct FMeleeSwingInfo                             currentComboMeleeSwingInfo;                               // 0x0DB0(0x002C)
	unsigned long                                      bInCombo : 1;                                             // 0x0DDC(0x0004)
	float                                              LastSwingTime;                                            // 0x0DE0(0x0004)
	class ADunDefWeapon_MeleeSword*                    OffHandWeapon;                                            // 0x0DE4(0x0004)
	TArray<struct FMeleeSwingInfo>                     OffHandMeleeSwingInfos;                                   // 0x0DE8(0x000C)
	TArray<struct FMeleeSwingInfo>                     MainHandMeleeSwingInfos;                                  // 0x0DF4(0x000C)
	class ADunDefPlayerAbility_StanceBase*             myActiveStance;                                           // 0x0E00(0x0004)
	class ADunDefPlayerAbility_StanceBase*             mySecondaryStance;                                        // 0x0E04(0x0004)
	struct FName                                       PreviousAnim;                                             // 0x0E08(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_DualMelee");
		return ptr;
	}


	void SetOwnerNoSee();
	void AutoActivateSecondaryWeapon();
	void AllowNegativeStatusAffecting();
	void GetAlternateStance();
	void SetWeaponSpeedMultiplier();
	void GetOverrideSocketName();
	void JumpOffPawn();
	void ShouldPlayHurtAnimation();
	void AnimNotify_ResetOffhandWeaponSwingDamage();
	void AnimNotify_StopOffhandWeaponSwingDamage();
	void AnimNotify_StartOffhandWeaponSwingDamage();
	void AnimNotify_ResetWeaponSwingDamage();
	void AnimNotify_StopWeaponSwingDamage();
	void AnimNotify_StartWeaponSwingDamage();
	void Destroyed();
	void AdjustDamage();
	void GivePlayerHitInfo();
	void Tick();
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void DoStanceBlend();
	void DeActivateStance();
	void ActivateStance();
	void GetMeleeSwingInfoOverride();
	void OverrideMeleeSwingInfo();
	void CheckAllowMelee();
	void CheckPlayingCustomAnim();
	void StopFire();
	void ServerStopFire();
	void SetComboInfo();
	void DoStanceCheck();
	void StartFire();
	void ServerStartFire();
	void STATIC_GetOffHandSocketName();
	void STATIC_AllowDualWeapon();
	void CreateContainedInventoryFromTemplate();
	void SetOffHandWeapon();
	void SwapOffHandWeaponFor();
	void SwapWeaponFor();
	void HasLightningStance();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceBase
// 0x0098 (0x0510 - 0x0478)
class ADunDefPlayerAbility_StanceBase : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                                   // 0x0478(0x0004)
	class ADunDefEmitterSpawnable*                     AbilityActivateTemplate;                                  // 0x047C(0x0004)
	class USoundCue*                                   AbilityActivateSound;                                     // 0x0480(0x0004)
	class USoundCue*                                   AbilityDeActivateSound;                                   // 0x0484(0x0004)
	struct FStatMultipliers                            GroundSpeed;                                              // 0x0488(0x0010)
	struct FStatMultipliers                            AttackDamage;                                             // 0x0498(0x0010)
	struct FStatMultipliers                            AttackSpeed;                                              // 0x04A8(0x0010)
	struct FStatMultipliers                            AttackKnockBack;                                          // 0x04B8(0x0010)
	struct FStatMultipliers                            MomentumMultiplier;                                       // 0x04C8(0x0010)
	struct FStatMultipliers                            DamageResistance;                                         // 0x04D8(0x0010)
	TEnumAsByte<EStances>                              myStance;                                                 // 0x04E8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	struct FName                                       activeEffectSocket;                                       // 0x04EC(0x0008)
	unsigned long                                      bAllowActivateWhileCasting : 1;                           // 0x04F4(0x0004)
	unsigned long                                      bCancelAllStancesOnActivate : 1;                          // 0x04F4(0x0004)
	unsigned long                                      bCancelTornadoStanceOnActivate : 1;                       // 0x04F4(0x0004)
	unsigned long                                      bCancelTurtleStanceOnActivate : 1;                        // 0x04F4(0x0004)
	unsigned long                                      bCancelHawkStanceOnActivate : 1;                          // 0x04F4(0x0004)
	unsigned long                                      bIsTurtleStance : 1;                                      // 0x04F4(0x0004)
	unsigned long                                      bIsTornadoStance : 1;                                     // 0x04F4(0x0004)
	unsigned long                                      bIsHawkStance : 1;                                        // 0x04F4(0x0004)
	unsigned long                                      bAllowAttackStepTowards : 1;                              // 0x04F4(0x0004)
	unsigned long                                      bNullifyJumpModifier : 1;                                 // 0x04F4(0x0004)
	unsigned long                                      bStatusActive : 1;                                        // 0x04F4(0x0004)
	unsigned long                                      bAllowNegativeStatusAffects : 1;                          // 0x04F4(0x0004)
	struct FName                                       StanceDeactivateAnim;                                     // 0x04F8(0x0008)
	struct FName                                       StanceActivateAnim;                                       // 0x0500(0x0008)
	float                                              JumpZMultiplier;                                          // 0x0508(0x0004)
	float                                              AttackKnockBackMomentumBase;                              // 0x050C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceBase");
		return ptr;
	}


	void AllowNegativeStatusAffecting();
	void ResetWeaponDamage();
	void StopOffHandWeaponDamage();
	void StopWeaponDamage();
	void StartOffHandWeaponDamage();
	void StartWeaponDamage();
	void GivePlayerHitInfo();
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void AllowStanceCancel();
	void CheckDoStanceAttack();
	void GetMultiplierValue();
	void CheckStatus();
	void GetAbilityStatus();
	void OnActivate();
	void AllowStepTowards();
	void GetPlayerMomentumMultiplier();
	void GetPlayerAttackKnockbackMultiplier();
	void GetPlayerAttackSpeedMultiplier();
	void PlayActivationAnimation();
};


// Class DunDefSpecial.DunDefPlayerAbility_LeapSlam
// 0x00B4 (0x04DC - 0x0428)
class ADunDefPlayerAbility_LeapSlam : public ADunDefPlayerAbility
{
public:
	float                                              LeapHeight;                                               // 0x0428(0x0004)
	float                                              LeapSpeed;                                                // 0x042C(0x0004)
	float                                              LeapRotationSpeed;                                        // 0x0430(0x0004)
	int                                                ManaCostToActivate;                                       // 0x0434(0x0004)
	float                                              MaxLeapDistance;                                          // 0x0438(0x0004)
	struct FName                                       LeapStartAnim;                                            // 0x043C(0x0008)
	struct FName                                       LeapLoopAnim;                                             // 0x0444(0x0008)
	struct FName                                       LeapStopAnim;                                             // 0x044C(0x0008)
	class ADunDefEmitterDamage*                        ShockwaveTemplate;                                        // 0x0454(0x0004)
	struct FVector                                     LeapExtent;                                               // 0x0458(0x000C)
	float                                              MassMomentumExponentialScale;                             // 0x0464(0x0004)
	float                                              WeaponDamageMultiplier;                                   // 0x0468(0x0004)
	float                                              AdditionalDamageAmount;                                   // 0x046C(0x0004)
	float                                              HeroStatDamageModifierExponent;                           // 0x0470(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x0474(0x0004)
	float                                              HeroStatMomentumModifierExponent;                         // 0x0478(0x0004)
	float                                              velocityInterp;                                           // 0x047C(0x0004)
	float                                              AirTargetLeapStopDistance;                                // 0x0480(0x0004)
	unsigned long                                      bRequiresAutoAimTarget : 1;                               // 0x0484(0x0004)
	unsigned long                                      bStartedLeap : 1;                                         // 0x0484(0x0004)
	unsigned long                                      bStartDamage : 1;                                         // 0x0484(0x0004)
	unsigned long                                      bStopped : 1;                                             // 0x0484(0x0004) (Edit)
	float                                              leapTimeOut;                                              // 0x0488(0x0004)
	struct FString                                     NotAutoAimTargetFailString;                               // 0x048C(0x000C)
	float                                              HomingScale;                                              // 0x0498(0x0004)
	class AActor*                                      TargetActor;                                              // 0x049C(0x0004)
	struct FVector                                     originalTargetLoc;                                        // 0x04A0(0x000C)
	TArray<struct ADunDefPlayerAbility_LeapSlam_FHitTarget> HitTargets;                                               // 0x04AC(0x000C)
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                                    // 0x04B8(0x0004)
	class UParticleSystemComponent*                    MyParticleSystemComponent;                                // 0x04BC(0x0004)
	struct FVector                                     lastStuckCheck;                                           // 0x04C0(0x000C)
	float                                              hitWallTraceOffset;                                       // 0x04CC(0x0004)
	float                                              StuckCheckInterval;                                       // 0x04D0(0x0004)
	float                                              StuckCheckDistance;                                       // 0x04D4(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x04D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_LeapSlam");
		return ptr;
	}


	void OnActivate();
	void GetCostToActivate();
	void RequestActivation();
	void HasNoAutoAim();
	void GetAbilityStatus();
	void GetMomentum();
	void GetElementalDamage();
	void GetDamage();
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void ConsumesInputWhenActive();
	void DoTimeOut();
	void GetLeapVelocity();
	void CancelAbility();
	void PlayStopAnim();
	void ShutOffVFX();
	void ActivateHandVFX();
	void PushCheck();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayer_Jester
// 0x008C (0x0E0C - 0x0D80)
class ADunDefPlayer_Jester : public ADunDefPlayer
{
public:
	float                                              WeaponIconScale;                                          // 0x0D80(0x0004)
	float                                              WeaponIconFrameSize;                                      // 0x0D84(0x0004)
	float                                              WeaponIconYOffset;                                        // 0x0D88(0x0004)
	float                                              WeaponIconXOffset;                                        // 0x0D8C(0x0004)
	float                                              WeaponIconXOffset_GamePad;                                // 0x0D90(0x0004)
	float                                              WeaponIconYOffset_GamePad;                                // 0x0D94(0x0004)
	float                                              WeaponIconSize;                                           // 0x0D98(0x0004)
	float                                              SplitScreenIconScale;                                     // 0x0D9C(0x0004)
	float                                              FrameInterpSpeed;                                         // 0x0DA0(0x0004)
	float                                              OffHandIconOpacity;                                       // 0x0DA4(0x0004)
	float                                              MainHandIconOpacity;                                      // 0x0DA8(0x0004)
	class ADunDefWeapon*                               storedWeapon;                                             // 0x0DAC(0x0004)
	struct FName                                       WeaponSwapAnim_ToRanged;                                  // 0x0DB0(0x0008)
	struct FName                                       WeaponSwapAnim_ToStaff;                                   // 0x0DB8(0x0008)
	struct FName                                       Shootanim_Spear;                                          // 0x0DC0(0x0008)
	float                                              MinWeaponSwitchDelay;                                     // 0x0DC8(0x0004)
	float                                              LastSwitchTime;                                           // 0x0DCC(0x0004)
	class USoundCue*                                   WeaponSwitchSound;                                        // 0x0DD0(0x0004)
	class USurface*                                    WeaponSelectFrame;                                        // 0x0DD4(0x0004)
	class UAnimSet*                                    CrossBowAnimSet;                                          // 0x0DD8(0x0004)
	class UAnimSet*                                    StaffAnimSet;                                             // 0x0DDC(0x0004)
	struct FName                                       WeaponCrossbow_Socket;                                    // 0x0DE0(0x0008)
	struct FName                                       WeaponStaff_Socket;                                       // 0x0DE8(0x0008)
	struct FName                                       WeaponSpear_Socket;                                       // 0x0DF0(0x0008)
	struct FName                                       WeaponSword_Socket;                                       // 0x0DF8(0x0008)
	int                                                MainHandIndex;                                            // 0x0E00(0x0004)
	unsigned long                                      bDoInterp : 1;                                            // 0x0E04(0x0004)
	float                                              InterpTime;                                               // 0x0E08(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_Jester");
		return ptr;
	}


	void STATIC_StaticGetOverrideSocketName();
	void GetOverrideSocketName();
	void SwapAnimSets();
	void WeaponSet();
	void DrawMyHUD();
	void Tick();
	void GetWeaponIcon();
	void DrawWeaponIcons();
	void Destroyed();
	void CreateContainedInventoryFromTemplate();
	void SwapOffHandWeaponFor();
	void DoWeaponSwap();
	void ServerDoSwap();
	void SetNewMainWeapon();
	void SetStoredWeapon();
	void GetShootAnim();
	void ForceWeaponActivationOverride();
	void SwapWeaponFor();
	void STATIC_AllowDualWeapon();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayer_SeriesEv
// 0x00D0 (0x0E50 - 0x0D80)
class ADunDefPlayer_SeriesEv : public ADunDefPlayer
{
public:
	class ADunDefWeapon*                               storedWeapon;                                             // 0x0D80(0x0004)
	float                                              WeaponIconScale;                                          // 0x0D84(0x0004)
	float                                              WeaponIconFrameSize;                                      // 0x0D88(0x0004)
	float                                              WeaponIconYOffset;                                        // 0x0D8C(0x0004)
	float                                              WeaponIconXOffset;                                        // 0x0D90(0x0004)
	float                                              WeaponIconXOffset_GamePad;                                // 0x0D94(0x0004)
	float                                              WeaponIconYOffset_GamePad;                                // 0x0D98(0x0004)
	float                                              WeaponIconSize;                                           // 0x0D9C(0x0004)
	float                                              SplitScreenIconScale;                                     // 0x0DA0(0x0004)
	float                                              OffHandIconOpacity;                                       // 0x0DA4(0x0004)
	float                                              MainHandIconOpacity;                                      // 0x0DA8(0x0004)
	float                                              ArmUpNoFireTime;                                          // 0x0DAC(0x0004)
	class USurface*                                    WeaponSelectFrame;                                        // 0x0DB0(0x0004)
	struct FName                                       DoubleShootAnim;                                          // 0x0DB4(0x0008)
	struct FName                                       SingleShootAnim;                                          // 0x0DBC(0x0008)
	struct FName                                       WeaponElementalSocket;                                    // 0x0DC4(0x0008)
	struct FName                                       WeaponSwapAnim;                                           // 0x0DCC(0x0008)
	TArray<struct FName>                               GunUpHurtAnims;                                           // 0x0DD4(0x000C)
	class UMaterialInstanceConstant*                   DefaultWeaponIcon;                                        // 0x0DE0(0x0004)
	TArray<struct FGameDamageEntry>                    ElementalWeaponOverrides;                                 // 0x0DE4(0x000C)
	class USoundCue*                                   WeaponSwitchSound;                                        // 0x0DF0(0x0004)
	float                                              FrameInterpSpeed;                                         // 0x0DF4(0x0004)
	float                                              MinWeaponSwitchDelay;                                     // 0x0DF8(0x0004)
	float                                              LastSwitchTime;                                           // 0x0DFC(0x0004)
	class ADunDefPlayerAbility_ManaCharge*             activeChargeAbility;                                      // 0x0E00(0x0004)
	float                                              LastFireTime;                                             // 0x0E04(0x0004)
	unsigned long                                      bArmUp : 1;                                               // 0x0E08(0x0004)
	unsigned long                                      bDoInterp : 1;                                            // 0x0E08(0x0004)
	class UMaterialInstanceConstant*                   MainHandWeapTex;                                          // 0x0E0C(0x0004)
	class UMaterialInstanceConstant*                   OffHandWeapTex;                                           // 0x0E10(0x0004)
	float                                              frameXCenterPos;                                          // 0x0E14(0x0004)
	float                                              frameYCenterPos;                                          // 0x0E18(0x0004)
	int                                                MainHandIndex;                                            // 0x0E1C(0x0004)
	float                                              InterpTime;                                               // 0x0E20(0x0004)
	struct FName                                       HoveringBlenderName;                                      // 0x0E24(0x0008)
	float                                              HoverOnBlendTime;                                         // 0x0E2C(0x0004)
	float                                              HoverOffBlendTime;                                        // 0x0E30(0x0004)
	class USoundCue*                                   HoveringStartSound;                                       // 0x0E34(0x0004)
	class USoundCue*                                   HoveringStopSound;                                        // 0x0E38(0x0004)
	class UParticleSystemComponent*                    HoveringParticleSystem;                                   // 0x0E3C(0x0004)
	class UAudioComponent*                             HoveringLoopSound;                                        // 0x0E40(0x0004)
	struct FName                                       HoveringParticleSystemAttachSocketName;                   // 0x0E44(0x0008)
	class UAnimNodeBlend*                              HoveringBlender;                                          // 0x0E4C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayer_SeriesEv");
		return ptr;
	}


	void PostBeginPlay();
	void StopHovering();
	void StartHovering();
	void Tick();
	void UsedAbility();
	void SetActiveChargeAbility();
	void GetManaTokenAttractionRadius();
	void HasMaxManaPower();
	void TryTokenCollection();
	void IsCurrentlyPlayingHurtAnimation();
	void PlayHurtAnimation();
	void ShouldOverrideWeaponElementalEffects();
	void StopFire();
	void PlayJumpAnimation();
	void StartFire();
	void PutArmDown();
	void PlayShootAnimation();
	void ForceUseInstigatorForMuzzle();
	void CanReload();
	void GetWeaponIcon();
	void DrawWeaponIcons();
	void DrawMyHUD();
	void Destroyed();
	void CreateContainedInventoryFromTemplate();
	void SwapOffHandWeaponFor();
	void DoWeaponSwap();
	void ServerDoSwap();
	void SetNewMainWeapon();
	void SetStoredWeapon();
	void SwapWeaponFor();
	void STATIC_GetOffHandSocketName();
	void OverrideWeaponAttach();
	void STATIC_AllowDualWeapon();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayerAbility_ManaCharge
// 0x0114 (0x058C - 0x0478)
class ADunDefPlayerAbility_ManaCharge : public ADunDefPlayerAbility_CharacterToggle
{
public:
	int                                                currentManaCharge;                                        // 0x0478(0x0004) (Edit)
	float                                              MinShootTime;                                             // 0x047C(0x0004)
	float                                              MaxShootTime;                                             // 0x0480(0x0004)
	int                                                MaxAllowedManaCharge;                                     // 0x0484(0x0004)
	int                                                MinAllowedManaCharge;                                     // 0x0488(0x0004)
	float                                              DamageProcInterval;                                       // 0x048C(0x0004)
	float                                              BeamDamageMomentum;                                       // 0x0490(0x0004)
	float                                              DamageMultiplier;                                         // 0x0494(0x0004)
	float                                              DamageExponent;                                           // 0x0498(0x0004)
	float                                              ManaTimeExponent;                                         // 0x049C(0x0004)
	float                                              ChargeBarExponent;                                        // 0x04A0(0x0004)
	float                                              BeamRange;                                                // 0x04A4(0x0004)
	struct FName                                       ChargingAnim;                                             // 0x04A8(0x0008)
	struct FName                                       ReleasingAnim;                                            // 0x04B0(0x0008)
	struct FName                                       MuzzleSocketName;                                         // 0x04B8(0x0008)
	class UClass*                                      BeamDamageType;                                           // 0x04C0(0x0004)
	class UParticleSystemComponent*                    BeamEffect;                                               // 0x04C4(0x0004)
	class UParticleSystemComponent*                    MuzzleEffect;                                             // 0x04C8(0x0004)
	class UParticleSystemComponent*                    BeamEndEffect;                                            // 0x04CC(0x0004)
	class ADunDefEmitterSpawnable*                     ManaPickUpEffect;                                         // 0x04D0(0x0004)
	float                                              TimeBetweenManaPickUpVFX;                                 // 0x04D4(0x0004)
	float                                              LastManaPickUpTime;                                       // 0x04D8(0x0004)
	class UParticleSystemComponent*                    ChargeEffect;                                             // 0x04DC(0x0004)
	class UMaterialInterface*                          ChargeBar;                                                // 0x04E0(0x0004)
	class ADunDefEmitterSpawnable*                     ActivationEffect;                                         // 0x04E4(0x0004)
	float                                              BarScale;                                                 // 0x04E8(0x0004)
	float                                              ChargingManaAttractionRadiusMultiplier;                   // 0x04EC(0x0004)
	float                                              BarXOffset;                                               // 0x04F0(0x0004)
	float                                              BarYOffset;                                               // 0x04F4(0x0004)
	float                                              BarIconSizeY;                                             // 0x04F8(0x0004)
	float                                              BarIconSizeX;                                             // 0x04FC(0x0004)
	struct FName                                       ManaGatherSocketName;                                     // 0x0500(0x0008)
	struct FName                                       ManaChargeBarSocket;                                      // 0x0508(0x0008)
	struct FVector                                     ChargeBarOffset;                                          // 0x0510(0x000C)
	struct FRotator                                    ChargeBarRot;                                             // 0x051C(0x000C)
	unsigned long                                      bUseCastBarForCharge : 1;                                 // 0x0528(0x0004)
	unsigned long                                      bUseActivateAsToggleOnly : 1;                             // 0x0528(0x0004)
	unsigned long                                      bDoingDamage : 1;                                         // 0x0528(0x0004) (Edit)
	unsigned long                                      ScaleMomentumForPawnMass : 1;                             // 0x0528(0x0004)
	struct FLinearColor                                ChargeBarColor;                                           // 0x052C(0x0010)
	struct FLinearColor                                ChargeBarColorAllowActivate;                              // 0x053C(0x0010)
	struct FString                                     NeedMoreManaChargeMsg;                                    // 0x054C(0x000C)
	struct FColor                                      NeedMoreManaMsgColor;                                     // 0x0558(0x0004)
	class USoundCue*                                   BeginFiringSound;                                         // 0x055C(0x0004)
	class USoundCue*                                   StopFiringSound;                                          // 0x0560(0x0004)
	class UAudioComponent*                             LoopingFiringSound;                                       // 0x0564(0x0004)
	float                                              LoopingFiringSoundFadeInTime;                             // 0x0568(0x0004)
	float                                              LastBeamFireTime;                                         // 0x056C(0x0004)
	class UMaterialInstanceConstant*                   chargeBarMIC;                                             // 0x0570(0x0004)
	float                                              currentTimeLimit;                                         // 0x0574(0x0004)
	float                                              MaxPawnMassMomentumScale;                                 // 0x0578(0x0004)
	float                                              ScaleMomentumForPawnMassExponent;                         // 0x057C(0x0004)
	float                                              MinPawnMassMomentumScale;                                 // 0x0580(0x0004)
	float                                              MaxTargetDeltaPitch;                                      // 0x0584(0x0004)
	float                                              MaxTargetDeltaYaw;                                        // 0x0588(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_ManaCharge");
		return ptr;
	}


	void GetAbilityStatus();
	void AllowUsageDuringCastingStates();
	void DrawChargeBar();
	void GetCooldownStartTime();
	void ShouldDrawManaBar();
	void StopEffects();
	void NotifyStopFire();
	void ServerStartDamage();
	void NotifyStartFire();
	void ActivateEffects();
	void GetSocketName();
	void AttachParticles();
	void GetDamage();
	void ResetManaCharge();
	void AddManaCharge();
	void SpawnManaEffect();
	void ServerCollectManaToken();
	void InCylinderFwd();
	void DoDamage();
	void CheckForFire();
	void GetTimeBasedOnCharge();
	void StartDamage();
	void StartDamageEffects();
	void CanHoldMoreCharge();
	void CancelAbility();
	void OnActivate();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayerAbility_PhaseShift
// 0x0060 (0x04D8 - 0x0478)
class ADunDefPlayerAbility_PhaseShift : public ADunDefPlayerAbility_CharacterToggle
{
public:
	class UParticleSystemComponent*                    AbilityEffectComponent;                                   // 0x0478(0x0004)
	struct FName                                       UnPhasedScaleDown;                                        // 0x047C(0x0008)
	struct FName                                       UnPhasedScaleUp;                                          // 0x0484(0x0008)
	struct FName                                       PhasedScaleDown;                                          // 0x048C(0x0008)
	struct FName                                       PhaseScaleUp;                                             // 0x0494(0x0008)
	struct FLinearColor                                OverlayEffectColor;                                       // 0x049C(0x0010)
	float                                              ScaleTime;                                                // 0x04AC(0x0004)
	float                                              ReScaleBackUpDelay;                                       // 0x04B0(0x0004)
	unsigned long                                      bEndCastingStateOnScale : 1;                              // 0x04B4(0x0004)
	unsigned long                                      bEnterCastingStateWhilePhased : 1;                        // 0x04B4(0x0004)
	unsigned long                                      bScalingDown : 1;                                         // 0x04B4(0x0004)
	unsigned long                                      bPendingScaleUp : 1;                                      // 0x04B4(0x0004)
	unsigned long                                      bPendingScaleDown : 1;                                    // 0x04B4(0x0004)
	unsigned long                                      bIgnoreCastingState : 1;                                  // 0x04B4(0x0004)
	unsigned long                                      bIsPhased : 1;                                            // 0x04B4(0x0004) (Edit)
	unsigned long                                      bUpScaling : 1;                                           // 0x04B4(0x0004)
	unsigned long                                      bScaling : 1;                                             // 0x04B4(0x0004)
	unsigned long                                      bUnphasing : 1;                                           // 0x04B4(0x0004)
	unsigned long                                      bUnphased : 1;                                            // 0x04B4(0x0004)
	float                                              InitialScale;                                             // 0x04B8(0x0004)
	float                                              ScaleDownCompleteTime;                                    // 0x04BC(0x0004)
	TArray<class UMaterialInstanceConstant*>           myOriginalMICs;                                           // 0x04C0(0x000C)
	TArray<class UMaterialInstanceConstant*>           myMICOverride;                                            // 0x04CC(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PhaseShift");
		return ptr;
	}


	void AllowUsageDuringCastingStates();
	void GetCastingStateNamePC();
	void CancelAbility();
	void ClientForceCancel();
	void ForceCancel();
	void SetPhaseMaterials();
	void StartScaleUp();
	void SetMaterialColors();
	void OnActivate();
	void SetDefaultValues();
	void SetPhaseShiftValue();
	void PhaseScaleDown();
	void GetAbilityStatus();
	void FinishScaleUp();
	void InitializeForPlayer();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayerAbility_BuilTripWire
// 0x0064 (0x0778 - 0x0714)
class ADunDefPlayerAbility_BuilTripWire : public ADunDefPlayerAbility_BuildTower
{
public:
	int                                                PlacementPoints;                                          // 0x0714(0x0004)
	unsigned long                                      bCheckLineOfSight : 1;                                    // 0x0718(0x0004)
	struct FString                                     LineofSightBlockString;                                   // 0x071C(0x000C)
	float                                              DUTextScale;                                              // 0x0728(0x0004)
	float                                              MinPointPlacementDistance;                                // 0x072C(0x0004)
	struct FVector                                     DUStringOffset;                                           // 0x0730(0x000C)
	struct FString                                     DUPlacementString;                                        // 0x073C(0x000C)
	TArray<class UClass*>                              CancelsLineOfSightClass;                                  // 0x0748(0x000C)
	class UParticleSystemComponent*                    PreviewBeamEffect;                                        // 0x0754(0x0004)
	struct FVector                                     LineofSightExtent;                                        // 0x0758(0x000C)
	class ADunDefEmitterSpawnable*                     MyAltSummoningEmitter;                                    // 0x0764(0x0004)
	float                                              MaxTowerDistance;                                         // 0x0768(0x0004)
	TArray<struct FPreviewPoint>                       PreviewPoints;                                            // 0x076C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_BuilTripWire");
		return ptr;
	}


	void PostBeginPlay();
	void CancelAbility();
	void AllowTowerPlacementPosition();
	void GetCenterLocation();
	void CanPlaceTowerUnitCost();
	void GetDUCost();
	void DrawCastingHUD();
	void CreateNewPreviewPoint();
	void ClearPreviewPoints();
	void ServerAddPlacementPoint();
	void PostPlacementUpdate();
	void ServerRequestBuildTower();
	void AbilityTick();
	void HidePreviewPoints();
	void StopAltSummonTowerFXCompleted();
	void StopAltSummonTowerFX();
	void UpdateAltSummonTowerFX();
	void BeginAltSummonTowerFX();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayerAbility_DefenseBoost
// 0x0030 (0x0504 - 0x04D4)
class ADunDefPlayerAbility_DefenseBoost : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	TArray<TEnumAsByte<ETowerBoostType>>               MyTowerBoostType;                                         // 0x04D4(0x000C)
	float                                              ETBAttackRateExponent;                                    // 0x04E0(0x0004)
	float                                              ETBAttackRangeExponent;                                   // 0x04E4(0x0004)
	float                                              ETBDamageExponent;                                        // 0x04E8(0x0004)
	float                                              TowerDamageMultiplier;                                    // 0x04EC(0x0004)
	float                                              TowerRangeMultiplier;                                     // 0x04F0(0x0004)
	float                                              TowerRateMultiplier;                                      // 0x04F4(0x0004)
	TArray<struct FAffectedActor>                      BoostedTowers;                                            // 0x04F8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_DefenseBoost");
		return ptr;
	}


	void GetAbilityStatus();
	void RemoveTower();
	void AddTower();
	void Destroyed();
	void RemoveAllTowers();
	void CheckAllTowers();
	void RemoveAllTowersFor();
	void AddAllTowersFor();
	void AddEffect();
	void RemoveEffect();
	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
};


// Class DunDefSpecial.DunDefPlayerAbility_EnemyDrain
// 0x0018 (0x04EC - 0x04D4)
class ADunDefPlayerAbility_EnemyDrain : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              DamageScalar;                                             // 0x04D4(0x0004)
	float                                              DamageResistanceMultiplier;                               // 0x04D8(0x0004)
	float                                              SpeedMultiplier;                                          // 0x04DC(0x0004)
	float                                              DamageExponent;                                           // 0x04E0(0x0004)
	float                                              DamageResistanceExponent;                                 // 0x04E4(0x0004)
	float                                              SpeedExponent;                                            // 0x04E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_EnemyDrain");
		return ptr;
	}


	void GetAbilityStatus();
	void GetPawnResistanceMultiplier();
	void GetSpeedMultiplier();
	void GetDamageMultiplier();
	void CanAffect();
	void AddEffect();
	void RemoveEffect();
};


// Class DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner
// 0x000C (0x04D4 - 0x04C8)
class ADunDefPlayerAbility_GenericMultiActorSpawner : public ADunDefPlayerAbility_GenericActorSpawner
{
public:
	TArray<struct FSpawnSettings>                      ActorSpawns;                                              // 0x04C8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner");
		return ptr;
	}


	void DoMultiActorSpawn();
	void SetUpActorSpawn();
};


// Class DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower
// 0x0008 (0x04DC - 0x04D4)
class ADunDefPlayerAbility_InstantUpgradeTower : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              TowerUpgradeScale;                                        // 0x04D4(0x0004)
	float                                              ExpTowerUpgradeScale;                                     // 0x04D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_InstantUpgradeTower");
		return ptr;
	}


	void GetAbilityStatus();
	void DoEffect();
	void GetTowerCost();
	void ScaleForHeroModifiers();
	void IsValidUpgradeTower();
};


// Class DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE
// 0x0004 (0x04D8 - 0x04D4)
class ADunDefPlayerAbility_InvisibilityAOE : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              NewTowerTargetableAttackRange;                            // 0x04D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_InvisibilityAOE");
		return ptr;
	}


	void RemovedTower();
	void AddedTower();
	void RemovedPawn();
	void AddedPawn();
	void GetAbilityStatus();
	void AddEffect();
	void RemoveEffect();
};


// Class DunDefSpecial.DunDefPlayerAbility_MoveTower
// 0x0170 (0x06AC - 0x053C)
class ADunDefPlayerAbility_MoveTower : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialMoveTower;                                   // 0x053C(0x0004)
	class ADunDefEmitterSpawnable*                     ChoosingTowerWeaponEmitter;                               // 0x0540(0x0004)
	class UTexture2D*                                  CursorSelectTexture;                                      // 0x0544(0x0004)
	class UTexture2D*                                  CursorMoveTexture;                                        // 0x0548(0x0004)
	class USkeletalMeshComponent*                      TowerMeshComponent;                                       // 0x054C(0x0004)
	float                                              MinimumNormalZForPlacement;                               // 0x0550(0x0004)
	float                                              MinimumRotationInputDistance;                             // 0x0554(0x0004)
	TArray<struct FVector>                             TraceDirections;                                          // 0x0558(0x000C)
	struct FVector                                     TraceExtent;                                              // 0x0564(0x000C)
	struct FVector                                     RotationGamepadCursorOffset;                              // 0x0570(0x000C)
	struct FVector                                     PlacementRotationCursorOffset;                            // 0x057C(0x000C)
	struct FVector                                     ExtentCheckBaseOffset;                                    // 0x0588(0x000C)
	float                                              RotationCursorScale;                                      // 0x0594(0x0004)
	class UTexture2D*                                  CursorRotateTexture;                                      // 0x0598(0x0004)
	float                                              PlacementLightIntensityMultiplier;                        // 0x059C(0x0004)
	class ADunDefEmitterSpawnable*                     MovementEffect;                                           // 0x05A0(0x0004)
	class UMaterialInterface*                          MeshPlacementMaterial;                                    // 0x05A4(0x0004)
	float                                              AutoTowerPlacementMeshScaleBase;                          // 0x05A8(0x0004)
	float                                              OtherAbilityPreventionRadiusBuffer;                       // 0x05AC(0x0004)
	float                                              OtherAbilityPreventionRadiusMultiplier;                   // 0x05B0(0x0004)
	class UStaticMeshComponent*                        rangeMesh;                                                // 0x05B4(0x0004)
	class USkeletalMesh*                               TrapPreviewMesh;                                          // 0x05B8(0x0004)
	struct FVector                                     TrapMeshScaleVec;                                         // 0x05BC(0x000C)
	TArray<struct FString>                             PlacementDeniedStrings;                                   // 0x05C8(0x000C)
	struct FString                                     ChooseWhereToPlaceString;                                 // 0x05D4(0x000C)
	struct FString                                     ChooseTowerString;                                        // 0x05E0(0x000C)
	float                                              TrapZOffset;                                              // 0x05EC(0x0004)
	float                                              AngleIndicatorDecalSize;                                  // 0x05F0(0x0004)
	struct FVector                                     AngleIndicatorDecalOffset;                                // 0x05F4(0x000C)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_361;                          // 0x0600(0x0004)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_121;                          // 0x0604(0x0004)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_91;                           // 0x0608(0x0004)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterial_31;                           // 0x060C(0x0004)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_361;                          // 0x0610(0x0004)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_121;                          // 0x0614(0x0004)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_91;                           // 0x0618(0x0004)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterial_31;                           // 0x061C(0x0004)
	float                                              AngleIndicatorDecalTowerRangeScale;                       // 0x0620(0x0004)
	float                                              baseRangeMeshScale;                                       // 0x0624(0x0004)
	float                                              PlacementRangeExponent;                                   // 0x0628(0x0004)
	float                                              ManaCostToActivate;                                       // 0x062C(0x0004)
	class UDecalComponent*                             AngleIndicatorDecal;                                      // 0x0630(0x0004)
	class UDecalComponent*                             RangeIndicatorDecal;                                      // 0x0634(0x0004)
	class UMaterialInstanceConstant*                   AngleIndicatorDecalMaterialInstance;                      // 0x0638(0x0004)
	class UMaterialInstanceConstant*                   RangeIndicatorDecalMaterialInstance;                      // 0x063C(0x0004)
	struct FVector                                     TowerActorPlacementOffset;                                // 0x0640(0x000C)
	struct FVector                                     ReplicatedPlacementLocation;                              // 0x064C(0x000C)
	struct FRotator                                    ReplicatedPlacementRotation;                              // 0x0658(0x000C)
	unsigned long                                      ReplicatedIsValidPlacement : 1;                           // 0x0664(0x0004) (Edit)
	unsigned long                                      bWasValidTower : 1;                                       // 0x0664(0x0004)
	unsigned long                                      bShowAngleDecal : 1;                                      // 0x0664(0x0004)
	unsigned long                                      bShowRangeDecal : 1;                                      // 0x0664(0x0004)
	unsigned long                                      bClientGotoRotationState : 1;                             // 0x0664(0x0004)
	unsigned long                                      ClientForceNoInterpolation : 1;                           // 0x0664(0x0004)
	float                                              LastTowerMeshScale;                                       // 0x0668(0x0004)
	float                                              TowerRangeScaler;                                         // 0x066C(0x0004)
	float                                              TowerMeshScale;                                           // 0x0670(0x0004)
	float                                              CurrentAngleDecalOpacity;                                 // 0x0674(0x0004)
	class ADunDefTower*                                currentMovingTower;                                       // 0x0678(0x0004)
	class ADunDefTower*                                pendingMovingTower;                                       // 0x067C(0x0004)
	class UParticleSystem*                             defaultParticleTemplate;                                  // 0x0680(0x0004)
	struct FVector                                     GamepadLookDirection;                                     // 0x0684(0x000C)
	struct FRotator                                    PlacementRotation;                                        // 0x0690(0x000C)
	struct FVector                                     LookAtLocation;                                           // 0x069C(0x000C)
	class UMaterialInstanceConstant*                   MeshMaterialInstance;                                     // 0x06A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_MoveTower");
		return ptr;
	}


	void GetCostToActivate();
	void GetAbilityStatus();
	void ClientReset();
	void ServerMoveTower();
	void SetUpTowerMesh();
	void ServerRequestGrabTower();
	void StartMovingState();
	void ClientStartMovingState();
	void ServerReceivePlacementState();
	void PostPlacementUpdate();
	void UpdateDecalPlacement();
	void AllowTowerPlacementPosition();
	void GetOtherMoveAbilityTowerRadius();
	void IsInPlacingTowerState();
	void IsTowerPhysical();
	void OnActivate();
	void UpdateClientInterpolations();
	void ServerGotoRotationState();
	void GetPlacementWeaponEffect();
	void PostBeginPlay();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayerAbility_SummonCommand
// 0x008C (0x05C8 - 0x053C)
class ADunDefPlayerAbility_SummonCommand : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                                       // 0x053C(0x0004)
	float                                              SelectionRadius;                                          // 0x0540(0x0004)
	class UDecalComponent*                             SummonRangeDecal;                                         // 0x0544(0x0004)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                        // 0x0548(0x0004)
	struct FVector                                     SummonIndicatorDecalOffset;                               // 0x054C(0x000C)
	unsigned long                                      bRequiresMovementLocation : 1;                            // 0x0558(0x0004)
	unsigned long                                      bTraceForTarget : 1;                                      // 0x0558(0x0004)
	unsigned long                                      bForceMaualInOverlord : 1;                                // 0x0558(0x0004)
	unsigned long                                      bDoInstantCommand : 1;                                    // 0x0558(0x0004)
	unsigned long                                      bUseInstigatorAsTargetedActor : 1;                        // 0x0558(0x0004)
	unsigned long                                      bOnlyTargetFriendly : 1;                                  // 0x0558(0x0004)
	unsigned long                                      bUsePlayersTarget : 1;                                    // 0x0558(0x0004)
	unsigned long                                      bRequiresSelections : 1;                                  // 0x0558(0x0004)
	TEnumAsByte<ESummonedCommand>                      myCommand;                                                // 0x055C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class UTexture2D*                                  targetedIcon;                                             // 0x0560(0x0004)
	struct FVector                                     TargetedIconOffset;                                       // 0x0564(0x000C)
	float                                              targetedIconSize;                                         // 0x0570(0x0004)
	float                                              SelectRadius;                                             // 0x0574(0x0004)
	float                                              placementSteps;                                           // 0x0578(0x0004)
	float                                              placementRadius;                                          // 0x057C(0x0004)
	float                                              placementIncrease;                                        // 0x0580(0x0004)
	int                                                placementIterations;                                      // 0x0584(0x0004)
	struct FName                                       IssueCommandAnimName;                                     // 0x0588(0x0008)
	struct FName                                       CommandFinishAnim;                                        // 0x0590(0x0008)
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                         // 0x0598(0x0004)
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                              // 0x059C(0x0004)
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                                       // 0x05A0(0x0004)
	class USoundCue*                                   LocalIssueCommandSound;                                   // 0x05A4(0x0004)
	struct FString                                     RequiresMinionsString;                                    // 0x05A8(0x000C)
	class UAudioComponent*                             OrderIssuedUnitCommand;                                   // 0x05B4(0x0004)
	class AActor*                                      targetedActor;                                            // 0x05B8(0x0004)
	class ADunDefPlayer_Summoner*                      mySummoner;                                               // 0x05BC(0x0004)
	float                                              SelectionRangeScaler;                                     // 0x05C0(0x0004)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;                // 0x05C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SummonCommand");
		return ptr;
	}


	void GetAbilityStatus();
	void RequestActivation();
	void StopTowerPlacingAnimation();
	void StartTowerPlacingAnimation();
	void AllowCastingCancelOnDamage();
	void PostPlacementUpdate();
	void UpdateDecalPlacement();
	void ServerRequestSetCommand();
	void HandleInstantCommand();
	void OnActivate();
	void GetCastingStateNamePC();
	void PostBeginPlay();
	void IncreasePlacementTowerRadius();
	void DecreasePlacementTowerRadius();
};


// Class DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord
// 0x00C8 (0x05A0 - 0x04D8)
class ADunDefPlayerAbility_PhaseShiftOverlord : public ADunDefPlayerAbility_PhaseShift
{
public:
	class ADunDefEmitterSpawnable*                     Blip_MoveEmitter;                                         // 0x04D8(0x0004)
	class ADunDefEmitterSpawnable*                     Blip_Follow;                                              // 0x04DC(0x0004)
	class ADunDefEmitterSpawnable*                     Blip_AttackEmitter;                                       // 0x04E0(0x0004)
	class UTexture2D*                                  overFriendly;                                             // 0x04E4(0x0004)
	class UTexture2D*                                  overEnemy;                                                // 0x04E8(0x0004)
	class UTexture2D*                                  overFollow;                                               // 0x04EC(0x0004)
	float                                              mouseOverIconScale;                                       // 0x04F0(0x0004)
	struct FColor                                      overEnemyColor;                                           // 0x04F4(0x0004)
	struct FColor                                      overFriendlyColor;                                        // 0x04F8(0x0004)
	float                                              moveLocRadius;                                            // 0x04FC(0x0004)
	float                                              placementSteps;                                           // 0x0500(0x0004)
	float                                              placementRadius;                                          // 0x0504(0x0004)
	float                                              placementIncrease;                                        // 0x0508(0x0004)
	int                                                placementIterations;                                      // 0x050C(0x0004)
	class USoundCue*                                   MovementClickSound;                                       // 0x0510(0x0004)
	class USoundCue*                                   AttackSound;                                              // 0x0514(0x0004)
	class USoundCue*                                   FollowSound;                                              // 0x0518(0x0004)
	class USoundCue*                                   SelectSound;                                              // 0x051C(0x0004)
	class USoundCue*                                   DeSelectSound;                                            // 0x0520(0x0004)
	struct FName                                       UnphasingCastingStateName;                                // 0x0524(0x0008)
	struct FString                                     UnsupportedGamepadString;                                 // 0x052C(0x000C)
	struct FString                                     SelectMinionsString;                                      // 0x0538(0x000C)
	unsigned long                                      bDrawStringPrompt : 1;                                    // 0x0544(0x0004)
	unsigned long                                      bSelectionStarted : 1;                                    // 0x0544(0x0004)
	unsigned long                                      bForceCancel : 1;                                         // 0x0544(0x0004)
	float                                              BlipZOffset;                                              // 0x0548(0x0004)
	struct FVector2D                                   startMouseCoords;                                         // 0x054C(0x0008)
	struct FVector                                     startMouseProjection;                                     // 0x0554(0x000C)
	struct FVector                                     startMouseDirection;                                      // 0x0560(0x000C)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x056C(0x000C)
	class AActor*                                      currentMousedActor;                                       // 0x0578(0x0004)
	float                                              clickStart;                                               // 0x057C(0x0004)
	struct FColor                                      LineColor;                                                // 0x0580(0x0004)
	class ADunDefDroppedEquipment*                     MovingItem;                                               // 0x0584(0x0004)
	struct FVector                                     MovingItemStartLocation;                                  // 0x0588(0x000C)
	float                                              MovingItemZOffset;                                        // 0x0594(0x0004)
	float                                              MovingItemZOffsetAdditional;                              // 0x0598(0x0004)
	float                                              MovingItemZOffsetMinimum;                                 // 0x059C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_PhaseShiftOverlord");
		return ptr;
	}


	void GetCastingStateNamePC();
	void ServerRequestSetCommand();
	void DoMovementCommand();
	void DrawCastingHUD();
	void RequestActivation();
	void GetAbilityStatus();
	void RequestCancellation();
	void HandleConfirmation();
	void HandleAltCancellation();
	void HandleAltConfirmation();
};


// Class DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits
// 0x0064 (0x05A0 - 0x053C)
class ADunDefPlayerAbility_SelectSummonUnits : public ADunDefPlayerAbility_TowerPlacement
{
public:
	class UMaterialInstanceConstant*                   DecalMaterialBuild;                                       // 0x053C(0x0004)
	float                                              SelectionRadius;                                          // 0x0540(0x0004)
	float                                              DecalRangeScale;                                          // 0x0544(0x0004)
	TArray<class ADunDefTower_SummonEnemy*>            currentSelectedTowers;                                    // 0x0548(0x000C)
	class UDecalComponent*                             SummonRangeDecal;                                         // 0x0554(0x0004)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterial;                        // 0x0558(0x0004)
	struct FVector                                     SummonIndicatorDecalOffset;                               // 0x055C(0x000C)
	unsigned long                                      bRequiresMovementLocation : 1;                            // 0x0568(0x0004)
	unsigned long                                      DeselectAllTower : 1;                                     // 0x0568(0x0004)
	unsigned long                                      bSelectAllTowers : 1;                                     // 0x0568(0x0004)
	struct FName                                       SelectingAnimName;                                        // 0x056C(0x0008)
	struct FName                                       SelectingStopAnim;                                        // 0x0574(0x0008)
	struct FString                                     SelectUnitsString;                                        // 0x057C(0x000C)
	class USoundCue*                                   SelectSound;                                              // 0x0588(0x0004)
	class USoundCue*                                   DeSelectSound;                                            // 0x058C(0x0004)
	class ADunDefPlayer_Summoner*                      mySummoner;                                               // 0x0590(0x0004)
	float                                              SelectionRangeScaler;                                     // 0x0594(0x0004)
	class UMaterialInstanceConstant*                   SummonRangeIndicatorDecalMaterialInstance;                // 0x0598(0x0004)
	float                                              LastConfirmTime;                                          // 0x059C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SelectSummonUnits");
		return ptr;
	}


	void StopTowerPlacingAnimation();
	void StartTowerPlacingAnimation();
	void AllowCastingCancelOnDamage();
	void DeSelectUnits();
	void SelectAllTowers();
	void OnActivate();
	void PostPlacementUpdate();
	void UpdateDecalPlacement();
	void CancelAbility();
	void AbilityTick();
	void PostBeginPlay();
	void IncreasePlacementTowerRadius();
	void DecreasePlacementTowerRadius();
};


// Class DunDefSpecial.DunDefPlayerAbility_SlamDash
// 0x00B8 (0x0530 - 0x0478)
class ADunDefPlayerAbility_SlamDash : public ADunDefPlayerAbility_CharacterToggle
{
public:
	TArray<struct ADunDefPlayerAbility_SlamDash_FHitTarget> HitTargets;                                               // 0x0478(0x000C)
	float                                              DamageInterval;                                           // 0x0484(0x0004)
	float                                              MaxActiveTime;                                            // 0x0488(0x0004)
	float                                              MeleeDamageMomentum;                                      // 0x048C(0x0004)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0490(0x000C)
	float                                              MassMomentumExponentialScale;                             // 0x049C(0x0004)
	float                                              WeaponDamageMultiplier;                                   // 0x04A0(0x0004)
	float                                              AdditionalDamageAmount;                                   // 0x04A4(0x0004)
	float                                              HeroStatDamageModifierExponent;                           // 0x04A8(0x0004)
	float                                              HeroStatMomentumModifierExponent;                         // 0x04AC(0x0004)
	float                                              DashAnimPlayRate;                                         // 0x04B0(0x0004)
	float                                              DashGroundSpeed;                                          // 0x04B4(0x0004)
	float                                              HeroStatGroundSpeedExponent;                              // 0x04B8(0x0004)
	float                                              PushRadius;                                               // 0x04BC(0x0004)
	float                                              PlayRateExp;                                              // 0x04C0(0x0004)
	float                                              MaxPlayRate;                                              // 0x04C4(0x0004)
	float                                              MaxTravelDistance;                                        // 0x04C8(0x0004)
	struct FVector                                     RunStartPoint;                                            // 0x04CC(0x000C)
	struct FName                                       DashStartAnim;                                            // 0x04D8(0x0008)
	struct FName                                       DashLoopAnim;                                             // 0x04E0(0x0008)
	struct FName                                       DashStopAnim;                                             // 0x04E8(0x0008)
	class ADunDefEmitterSpawnable*                     WeaponEmitterTemplate;                                    // 0x04F0(0x0004)
	class UParticleSystemComponent*                    MyParticleSystemComponent;                                // 0x04F4(0x0004)
	unsigned long                                      bStopped : 1;                                             // 0x04F8(0x0004) (Edit)
	unsigned long                                      bStartedDash : 1;                                         // 0x04F8(0x0004)
	unsigned long                                      SummoningFlameLine : 1;                                   // 0x04F8(0x0004)
	struct FVector                                     lastStuckCheck;                                           // 0x04FC(0x000C)
	float                                              hitWallTraceOffset;                                       // 0x0508(0x0004)
	float                                              StuckCheckInterval;                                       // 0x050C(0x0004)
	float                                              StuckCheckDistance;                                       // 0x0510(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x0514(0x0004)
	class ADunDefGasCloud*                             FlameCloudTemplate;                                       // 0x0518(0x0004)
	float                                              SummonFlameInterval;                                      // 0x051C(0x0004)
	struct FVector                                     FlameOffset;                                              // 0x0520(0x000C)
	float                                              LastSummonFlameLineTime;                                  // 0x052C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_SlamDash");
		return ptr;
	}


	void GetAbilityStatus();
	void ConsumesInputWhenActive();
	void AllowUsageDuringCastingStates();
	void CheckStuck();
	void PlayStopAnim();
	void ShutOffVFX();
	void ActivateHandVFX();
	void PushCheck();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect
// 0x0038 (0x0548 - 0x0510)
class ADunDefPlayerAbility_StanceOnDmgEffect : public ADunDefPlayerAbility_StanceBase
{
public:
	unsigned long                                      bDoStun : 1;                                              // 0x0510(0x0004)
	unsigned long                                      bHealthAsDmg : 1;                                         // 0x0510(0x0004)
	unsigned long                                      bLimitHealAmtPerAttack : 1;                               // 0x0510(0x0004)
	unsigned long                                      bBaseHealOnOwnerHealth : 1;                               // 0x0510(0x0004)
	unsigned long                                      bUseHealAmtforPerAttack : 1;                              // 0x0510(0x0004)
	unsigned long                                      bIgnoreMaxHealAmt : 1;                                    // 0x0510(0x0004)
	struct FStatMultipliers                            HealOnHitMult;                                            // 0x0514(0x0010)
	class UClass*                                      dmgType;                                                  // 0x0524(0x0004)
	float                                              MinHealAmtPct;                                            // 0x0528(0x0004)
	float                                              MaxHealAmtPctPerAttack;                                   // 0x052C(0x0004)
	int                                                BaseHealAmount;                                           // 0x0530(0x0004)
	int                                                MinHealAmount;                                            // 0x0534(0x0004)
	int                                                MaxNumProcs;                                              // 0x0538(0x0004)
	int                                                curNumProcs;                                              // 0x053C(0x0004)
	int                                                accumulatedHeal;                                          // 0x0540(0x0004)
	int                                                MaxHealAmtPerAttack;                                      // 0x0544(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceOnDmgEffect");
		return ptr;
	}


	void GetAbilityStatus();
	void SetMaxHealAmountPerAttack();
	void ResetWeaponDamage();
	void StopOffHandWeaponDamage();
	void StopWeaponDamage();
	void StartOffHandWeaponDamage();
	void StartWeaponDamage();
	void DoAddHealth();
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceLightning
// 0x0040 (0x0588 - 0x0548)
class ADunDefPlayerAbility_StanceLightning : public ADunDefPlayerAbility_StanceOnDmgEffect
{
public:
	TArray<struct FStunnedActors>                      currentStunnedEnemies;                                    // 0x0548(0x000C)
	struct FStatMultipliers                            StunTimeValue;                                            // 0x0554(0x0010)
	class USoundCue*                                   StunEnemySound;                                           // 0x0564(0x0004)
	float                                              StunSoundDelay;                                           // 0x0568(0x0004)
	float                                              LastStunSound;                                            // 0x056C(0x0004)
	class UParticleSystem*                             StunnedEffect;                                            // 0x0570(0x0004)
	float                                              StunTime;                                                 // 0x0574(0x0004)
	unsigned long                                      bAllowBossStun : 1;                                       // 0x0578(0x0004)
	TArray<class UClass*>                              NoStunDamageTypes;                                        // 0x057C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceLightning");
		return ptr;
	}


	void GetAbilityStatus();
	void GetStunTime();
	void ClearStunnedList();
	void RemoveStunnedActor();
	void AddStunnedActor();
	void CanStun();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack
// 0x0044 (0x0554 - 0x0510)
class ADunDefPlayerAbility_StanceSpecialAttack : public ADunDefPlayerAbility_StanceBase
{
public:
	struct FName                                       SpecialAnimation;                                         // 0x0510(0x0008)
	struct FVector                                     MeleeSwingExtent;                                         // 0x0518(0x000C)
	float                                              DamageMomentum;                                           // 0x0524(0x0004)
	float                                              MassMomentumExponentialScale;                             // 0x0528(0x0004)
	float                                              WeaponDamageMultiplier;                                   // 0x052C(0x0004)
	float                                              AdditionalDamageAmount;                                   // 0x0530(0x0004)
	float                                              HeroStatDamageModifierExponent;                           // 0x0534(0x0004)
	float                                              HeroStatMomentumModifierExponent;                         // 0x0538(0x0004)
	float                                              TimeBeforeEndAnimationToFinish;                           // 0x053C(0x0004)
	float                                              CompletedStunDelayTime;                                   // 0x0540(0x0004)
	unsigned long                                      bUseWeaponsIndividual : 1;                                // 0x0544(0x0004)
	unsigned long                                      bUseCombinedDamage : 1;                                   // 0x0544(0x0004)
	unsigned long                                      bLockStanceOnComplete : 1;                                // 0x0544(0x0004)
	unsigned long                                      bAutoActivate : 1;                                        // 0x0544(0x0004)
	unsigned long                                      bSpawnEmitterOnEnd : 1;                                   // 0x0544(0x0004)
	unsigned long                                      bUseOffHandForEmitter : 1;                                // 0x0544(0x0004)
	unsigned long                                      bConsumeManaOnSpecial : 1;                                // 0x0544(0x0004)
	unsigned long                                      bStopAttackOnComplete : 1;                                // 0x0544(0x0004)
	unsigned long                                      bDoingAttack : 1;                                         // 0x0544(0x0004)
	unsigned long                                      bLockedStance : 1;                                        // 0x0544(0x0004) (Edit)
	unsigned long                                      bSpecialStarted : 1;                                      // 0x0544(0x0004) (Edit)
	unsigned long                                      bDoingMainHandDmg : 1;                                    // 0x0544(0x0004)
	unsigned long                                      bDoingOffHandDmg : 1;                                     // 0x0544(0x0004)
	class ADunDefEmitterDamage*                        EndDamageEmitter;                                         // 0x0548(0x0004)
	class UParticleSystemComponent*                    StunEffectComponent;                                      // 0x054C(0x0004)
	int                                                ManaCostForSpecial;                                       // 0x0550(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_StanceSpecialAttack");
		return ptr;
	}


	void GetAbilityStatus();
	void StopOffHandWeaponDamage();
	void StopWeaponDamage();
	void StartOffHandWeaponDamage();
	void StartWeaponDamage();
	void GetMomentum();
	void GetDamage();
	void ClearStanceStun();
	void CancelAbility();
	void CompletedSpecial();
	void ClientCompletedSpecial();
	void SpawnFinishEmitter();
	void AnimNotify_CurrentAbility_Off();
	void AnimNotify_CurrentAbility_On();
	void DoSpecialAttack();
	void ClearHitList();
	void DoSwinging();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPlayerAbility_WheeloFortuna
// 0x02C8 (0x06F0 - 0x0428)
class ADunDefPlayerAbility_WheeloFortuna : public ADunDefPlayerAbility
{
public:
	class UMaterialInterface*                          SlotMachineMat;                                           // 0x0428(0x0004)
	TArray<struct FGlyphPattern>                       myPatterns;                                               // 0x042C(0x000C)
	struct FGlyphIcon                                  wheelSlots[0x3];                                          // 0x0438(0x0020)
	float                                              GlobalSpinSpeedMult;                                      // 0x0498(0x0004)
	float                                              WheelIconSizeX;                                           // 0x049C(0x0004)
	float                                              WheelIconSizeY;                                           // 0x04A0(0x0004)
	float                                              WheelStepValue;                                           // 0x04A4(0x0004)
	unsigned long                                      bForceTestPattern : 1;                                    // 0x04A8(0x0004)
	unsigned long                                      bDoingTimeDilation : 1;                                   // 0x04A8(0x0004)
	unsigned long                                      bForceSelections : 1;                                     // 0x04A8(0x0004)
	unsigned long                                      bDoFadeOut : 1;                                           // 0x04A8(0x0004)
	unsigned long                                      bFinished : 1;                                            // 0x04A8(0x0004)
	struct FGlyphPattern                               testPattern;                                              // 0x04AC(0x0080)
	class UMaterialInstanceConstant*                   GoldMaterialTemplate;                                     // 0x052C(0x0004)
	int                                                defaultManaAmount;                                        // 0x0530(0x0004)
	float                                              defaultManaExp;                                           // 0x0534(0x0004)
	class ADunDefManaToken*                            SmallManaTokenTemplate;                                   // 0x0538(0x0004)
	class ADunDefManaToken*                            MinorManaTokenTemplate;                                   // 0x053C(0x0004)
	class ADunDefManaToken*                            LargeManaTokenTemplate;                                   // 0x0540(0x0004)
	float                                              ManaTokenImpulseMagnitude;                                // 0x0544(0x0004)
	float                                              ManaTokenTorqueMagnitude;                                 // 0x0548(0x0004)
	struct FVector                                     ManaTokenImpulseUpOffset;                                 // 0x054C(0x000C)
	struct FString                                     defaultNoMatchMessage;                                    // 0x0558(0x000C)
	float                                              EndLingerTime;                                            // 0x0564(0x0004)
	struct FName                                       DanceStartAnimName;                                       // 0x0568(0x0008)
	struct FName                                       DanceLoopAnimName;                                        // 0x0570(0x0008)
	struct FName                                       DanceEndAnimName;                                         // 0x0578(0x0008)
	struct FLinearColor                                DefaultSelection;                                         // 0x0580(0x0010)
	struct FLinearColor                                goodSelection;                                            // 0x0590(0x0010)
	struct FName                                       selectionBarParamName;                                    // 0x05A0(0x0008)
	struct FName                                       selectionFlashParamName;                                  // 0x05A8(0x0008)
	float                                              ManaCostToActivate;                                       // 0x05B0(0x0004)
	float                                              WheelFadeInTime;                                          // 0x05B4(0x0004)
	float                                              WheelFadeOutTime;                                         // 0x05B8(0x0004)
	class USoundCue*                                   StopWheelSound;                                           // 0x05BC(0x0004)
	class USoundCue*                                   DefaultSound;                                             // 0x05C0(0x0004)
	class UAudioComponent*                             LoopingWheelSound;                                        // 0x05C4(0x0004)
	struct FName                                       WheelOpacityName;                                         // 0x05C8(0x0008)
	float                                              fadeOutDelay;                                             // 0x05D0(0x0004)
	TArray<class UClass*>                              GRInotallowedon;                                          // 0x05D4(0x000C)
	struct FString                                     DummyPercentDamageString;                                 // 0x05E0(0x000C)
	struct FString                                     DummyPercentHealingString;                                // 0x05EC(0x000C)
	struct FString                                     DummyDamageTakenByPlayerString;                           // 0x05F8(0x000C)
	struct FString                                     DummyDamageDoneByPlayerString;                            // 0x0604(0x000C)
	struct FString                                     DummyDamageTakenByEnemyString;                            // 0x0610(0x000C)
	struct FString                                     DummyDamageDoneByEnemyString;                             // 0x061C(0x000C)
	struct FString                                     DummyPercentGoldedString;                                 // 0x0628(0x000C)
	int                                                currentStopIndex;                                         // 0x0634(0x0004)
	int                                                currentPatternIdx;                                        // 0x0638(0x0004)
	struct FGlyphPattern                               selectedPattern;                                          // 0x063C(0x0080)
	TArray<class ADunDefPawn*>                         boostingPawns;                                            // 0x06BC(0x000C)
	TArray<class ADunDefPracticeDummy*>                boostingDummies;                                          // 0x06C8(0x000C)
	TArray<class ADunDefEnemy*>                        goldedEnemies;                                            // 0x06D4(0x000C)
	TArray<class ADunDefEnemy*>                        stunnedPawns;                                             // 0x06E0(0x000C)
	class UMaterialInstanceConstant*                   mySlotMIC;                                                // 0x06EC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_WheeloFortuna");
		return ptr;
	}


	void GetAbilityStatus();
	void GetCostToActivate();
	void StopLoopingAnims();
	void GetCastingCharacterAnimation();
	void Destroyed();
	void ResetTimeDilation();
	void DoTimeDilation();
	void SpawnManaTokens();
	void GoldEnemy();
	void DoGolding();
	void EndEffect();
	void ClearOutBoosters();
	void HandleEnemyAffects();
	void HandleTowerAffects();
	void HandlePlayerAffects();
	void DoTowerUpgrades();
	void ServerHandleSuccess();
	void ServerHandleDefault();
	void CancelAbility();
	void SetDoFadeOut();
	void FinishSelection();
	void CheckPattern();
	void GetBoostedTargets();
	void NotifyOfBoostedRemoval();
	void GetPawnBoostAmount();
	void HasPawnBoostingType();
	void UpdateStuns();
	void AbilityTick();
	void ForceSelections();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefPlayerAbility_WhirlWind
// 0x008D (0x0561 - 0x04D4)
class ADunDefPlayerAbility_WhirlWind : public ADunDefPlayerAbility_AreaOfEffect
{
public:
	float                                              WhirlWindDamage;                                          // 0x04D4(0x0004)
	float                                              WhirlWindElementalDamage;                                 // 0x04D8(0x0004)
	float                                              WhirlWindDamageMomentum;                                  // 0x04DC(0x0004)
	float                                              WhirlWindDamageMultiplier;                                // 0x04E0(0x0004)
	float                                              WhirlWindDamageExponent;                                  // 0x04E4(0x0004)
	class UClass*                                      WhirlWindDamageType;                                      // 0x04E8(0x0004)
	class UClass*                                      WhirlWindElementalDamageType;                             // 0x04EC(0x0004)
	float                                              WhirlWindDuration;                                        // 0x04F0(0x0004)
	unsigned long                                      bCancelAbilityAfterDuration : 1;                          // 0x04F4(0x0004)
	unsigned long                                      bUseElementalVFX : 1;                                     // 0x04F4(0x0004)
	unsigned long                                      bUseWeaponDamage : 1;                                     // 0x04F4(0x0004)
	struct FName                                       IdleAnimationName;                                        // 0x04F8(0x0008)
	class UParticleSystem*                             ElementalVFXEntries[0xB];                                 // 0x0500(0x0004)
	class UParticleSystem*                             ElementalDamageVFXEntries[0xB];                           // 0x052C(0x0004)
	class UParticleSystem*                             CachedAbilityEffect;                                      // 0x0558(0x0004)
	class UParticleSystem*                             CachedAbilityActorEffect;                                 // 0x055C(0x0004)
	TEnumAsByte<EElementTrait>                         WeaponElementalTrait;                                     // 0x0560(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPlayerAbility_WhirlWind");
		return ptr;
	}


	void ConsumesInputWhenActive();
	void InitalizeActorStats();
	void CanAffect();
	void SetElementalVFX();
	void AbilityReleased();
	void AbilityPressed();
	void CancelEffect();
	void GetElementalDamageType();
	void GetDamageType();
	void GetElementalDamage();
	void GetDamage();
	void GetAbilityStatus();
	void DoEffect();
	void AddEffect();
	void OnActivate();
	void PostBeginPlay();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefPurifyingBomb
// 0x000C (0x033C - 0x0330)
class ADunDefPurifyingBomb : public ADunDefManaBomb
{
public:
	TArray<struct FBonusDamageType>                    BonusDamageTypes;                                         // 0x0330(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefPurifyingBomb");
		return ptr;
	}


	void HurtRadius();
};


// Class DunDefSpecial.DunDefTower_BoostAura
// 0x002C (0x08E0 - 0x08B4)
class ADunDefTower_BoostAura : public ADunDefTower_Aura
{
public:
	struct FString                                     boostedTowerString;                                       // 0x08B4(0x000C)
	TArray<class UClass*>                              DamagableClassesToIgnore;                                 // 0x08C0(0x000C)
	TArray<struct FBoostingtypes>                      BoostValues;                                              // 0x08CC(0x000C)
	float                                              AttackRangeMultiplier;                                    // 0x08D8(0x0004)
	float                                              ResistanceMultiplier;                                     // 0x08DC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_BoostAura");
		return ptr;
	}


	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
	void SetBoostMultiplier();
	void RefreshBoosts();
	void GetAttackInterval();
	void GetAttackDamage();
	void ScaleForHeroModifiers();
	void GetToolTipText();
	void DrawTowerToolTipStats();
	void ExitEffectDT();
	void EntryEffectDT();
	void AttacksDT();
	void EnteredRadiusDT();
	void UnTouch();
	void CanTargetInvisibleTarget();
	void Touch();
	void CheckForDamagableTargets();
	void Timer();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefTower_TripTowerBuff
// 0x0050 (0x0A34 - 0x09E4)
class ADunDefTower_TripTowerBuff : public ADunDefTower_TripWire
{
public:
	TArray<struct FBoostingtypes>                      BoostValues;                                              // 0x09E4(0x000C)
	int                                                MaxAllowedLostTowers;                                     // 0x09F0(0x0004)
	int                                                currentLostTowers;                                        // 0x09F4(0x0004)
	float                                              TowerCheckInterval;                                       // 0x09F8(0x0004)
	float                                              LastTowerCheckTime;                                       // 0x09FC(0x0004)
	float                                              AttachParticleScale;                                      // 0x0A00(0x0004)
	class UParticleSystem*                             AttachParticle;                                           // 0x0A04(0x0004)
	TArray<class UClass*>                              IgnoreForBuffs;                                           // 0x0A08(0x000C)
	struct FString                                     boostedTowerString;                                       // 0x0A14(0x000C)
	float                                              AttackRangeMultiplier;                                    // 0x0A20(0x0004)
	float                                              ResistanceMultiplier;                                     // 0x0A24(0x0004)
	TArray<class ADunDefTower*>                        TracedTowers;                                             // 0x0A28(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_TripTowerBuff");
		return ptr;
	}


	void SetBoostMultiplier();
	void RefreshBoosts();
	void ScaleForHeroModifiers();
	void DrawTowerToolTipStats();
	void SetUseHealthBarMat();
	void GetToolTipText();
	void NeedsRepair();
	void RemoveTowerEffectIndex();
	void RemoveTowerEffect();
	void AddTowerEffect();
	void GetMaxDetonations();
	void Destroyed();
	void RemoveAllBoosts();
	void PostBeginPlay();
	void ClearDeletedTowers();
	void CheckTowers();
	void CanAffectTower();
	void DoTracing();
	void GetTowerBoostAmount();
	void HasTowerBoostingType();
	void GetTowerBoostingTarget();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefTower_BuffSpawner
// 0x003C (0x0854 - 0x0818)
class ADunDefTower_BuffSpawner : public ADunDefTower
{
public:
	TArray<class UDunDefBuff*>                         BuffTemplates;                                            // 0x0818(0x000C)
	TArray<class UClass*>                              ClassesToAffect;                                          // 0x0824(0x000C)
	unsigned long                                      bIsPhysicalTower : 1;                                     // 0x0830(0x0004)
	unsigned long                                      bPreventTowerOverlap : 1;                                 // 0x0830(0x0004)
	unsigned long                                      bDoneInitalOverlap : 1;                                   // 0x0830(0x0004)
	float                                              TowerPreventionRadiusOffset;                              // 0x0834(0x0004)
	int                                                CostPerBuffSpawn;                                         // 0x0838(0x0004)
	TArray<struct FsBuffTarget>                        BuffTargets;                                              // 0x083C(0x000C)
	TArray<class UDunDefBuff*>                         ActiveBuffs;                                              // 0x0848(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_BuffSpawner");
		return ptr;
	}


	void ChangedGamePhases();
	void AllowTowerAtPoint();
	void CheckAllowance();
	void PreventTowerAtPoint();
	void IsPhysicalTower();
	void GetTowerTargetingDesirability();
	void GetPlayerTargetingDesirability();
	void DrawTowerToolTipStats();
	void GetAttackInterval();
	void GetAttackDamage();
	void ScaleForHeroModifiers();
	void RemoveAllBuffTargets();
	void RemoveBuffsFromTarget();
	void AddBuffsToTarget();
	void CanAffectTarget();
	void Tick();
	void TakeDamage();
	void Destroyed();
	void UnTouch();
	void Touch();
	void PostBeginPlay();
	void ExecReplicatedFunction();
};


// Class DunDefSpecial.DunDefTower_EmitterBurst
// 0x0020 (0x08F0 - 0x08D0)
class ADunDefTower_EmitterBurst : public ADunDefTower_ProjectileType
{
public:
	class ADunDefEmitterDamage*                        EmitterTemplate;                                          // 0x08D0(0x0004)
	float                                              DamageHeight;                                             // 0x08D4(0x0004)
	float                                              DamageWidth;                                              // 0x08D8(0x0004)
	float                                              BurstTime;                                                // 0x08DC(0x0004)
	struct FName                                       stopShootAnim;                                            // 0x08E0(0x0008)
	unsigned long                                      bSingleBurst : 1;                                         // 0x08E8(0x0004)
	unsigned long                                      bIsShooting : 1;                                          // 0x08E8(0x0004) (Edit)
	class ADunDefEmitterDamage*                        damageEmitterInstance;                                    // 0x08EC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_EmitterBurst");
		return ptr;
	}


	void GetDamageType();
	void STATIC_StaticGetAttackRange();
	void GetAttackRange();
	void GetAttackDamage();
	void StopShooting();
	void ShootProjectile();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefTower_Present
// 0x0098 (0x08B0 - 0x0818)
class ADunDefTower_Present : public ADunDefTower
{
public:
	struct FString                                     ChanceToSpawnString;                                      // 0x0818(0x000C)
	TArray<struct FspawnTypes>                         mySpawns;                                                 // 0x0824(0x000C)
	int                                                minManatoSpawn;                                           // 0x0830(0x0004)
	int                                                maxManatoSpawn;                                           // 0x0834(0x0004)
	class ADunDefManaToken*                            SmallManaTokenTemplate;                                   // 0x0838(0x0004)
	class ADunDefManaToken*                            MinorManaTokenTemplate;                                   // 0x083C(0x0004)
	class ADunDefManaToken*                            LargeManaTokenTemplate;                                   // 0x0840(0x0004)
	class ADunDefManaToken*                            SuperManaTokenTemplate;                                   // 0x0844(0x0004)
	float                                              ManaTokenImpulseMagnitude;                                // 0x0848(0x0004)
	float                                              ManaTokenTorqueMagnitude;                                 // 0x084C(0x0004)
	struct FVector                                     ManaTokenImpulseUpOffset;                                 // 0x0850(0x000C)
	struct FVector                                     PlacementPosOffset;                                       // 0x085C(0x000C)
	float                                              GlobalEquipmentDropValueMin;                              // 0x0868(0x0004)
	float                                              GlobalEquipmentDropValueMax;                              // 0x086C(0x0004)
	float                                              NightmareAbsoluteMaxEquipmentDropQuality;                 // 0x0870(0x0004)
	float                                              NightmareGlobalEquipmentDropQuality;                      // 0x0874(0x0004)
	float                                              AdditionalEquipmentRarityWeighting;                       // 0x0878(0x0004)
	float                                              MaxDropEquipmentAngle;                                    // 0x087C(0x0004)
	float                                              MaxWaveEquipmentQualityMultiplier;                        // 0x0880(0x0004)
	float                                              EquipmentQualityMultiplierMaxWave;                        // 0x0884(0x0004)
	float                                              AbsoluteMaxEquipmentDropQuality;                          // 0x0888(0x0004)
	float                                              GlobalEquipmentDropQuality;                               // 0x088C(0x0004)
	TArray<float>                                      DifficultyEquipmentQualityMultipliers;                    // 0x0890(0x000C)
	unsigned long                                      bOpenPresentOnCombatPhase : 1;                            // 0x089C(0x0004)
	int                                                spawnGroupIdx;                                            // 0x08A0(0x0004)
	TArray<struct FspawnChances>                       tempSpawnType;                                            // 0x08A4(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_Present");
		return ptr;
	}


	void UpdateTowerRatingMaterial();
	void SpawnDroppedEquipment();
	void SpawnManaTokens();
	void DrawTowerToolTipStats();
	void AllowTowerSpawnAtLoc();
	void DoActorSpawn();
	void DoEnemySpawn();
	void DoTowerSpawn();
	void DoPresentSpawn();
	void PickActor();
	void PickSpawnGroup();
	void Died();
	void ChangedGamePhases();
};


// Class DunDefSpecial.DunDefTower_ProjectileReflect
// 0x0016 (0x0AAA - 0x0A94)
class ADunDefTower_ProjectileReflect : public ADunDefTower_TripPhysical
{
public:
	float                                              costPerReflect;                                           // 0x0A94(0x0004)
	float                                              ProjDmgScale;                                             // 0x0A98(0x0004)
	float                                              ProjDmgExp;                                               // 0x0A9C(0x0004)
	float                                              ProjSecondDmgScale;                                       // 0x0AA0(0x0004)
	float                                              ProjSecondDmgExp;                                         // 0x0AA4(0x0004)
	TEnumAsByte<ELevelUpValueType>                     ProjDmgStatType;                                          // 0x0AA8(0x0001)
	TEnumAsByte<ELevelUpValueType>                     ProjSecondDmgStatType;                                    // 0x0AA9(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_ProjectileReflect");
		return ptr;
	}


	void IsPhysicalTower();
	void GetCostPerReflect();
	void TakeDamage();
	void GetAttackDamage();
	void DoReflection();
	void KilledTarget();
	void Touch();
};


// Class DunDefSpecial.DunDefTower_WebWall
// 0x000C (0x0AA0 - 0x0A94)
class ADunDefTower_WebWall : public ADunDefTower_TripPhysical
{
public:
	class UDunDefBuff*                                 BuffTemplate;                                             // 0x0A94(0x0004)
	int                                                CostPerWeb;                                               // 0x0A98(0x0004)
	unsigned long                                      ActivateTouchForSameTeam : 1;                             // 0x0A9C(0x0004)
	unsigned long                                      bBuffExistingWebbedTargets : 1;                           // 0x0A9C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTower_WebWall");
		return ptr;
	}


	void ScaleForHeroModifiers();
	void DrawTowerToolTipActorStats();
	void DrawTowerToolTipStats();
	void CheckTouchingActor();
	void GetAttackDamage();
	void GetCostPerWeb();
	void TakeDamage();
	void IsPhysicalTower();
	void KilledTarget();
	void Touch();
	void UpdateBuffTargets();
	void PostBeginPlay();
};


// Class DunDefSpecial.DunDefTurkey
// 0x000C (0x0CD8 - 0x0CCC)
class ADunDefTurkey : public ADunDefEnemy
{
public:
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0CCC(0x0004)
	float                                              FleeSpeed;                                                // 0x0CD0(0x0004)
	int                                                FleeSoundIndex;                                           // 0x0CD4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTurkey");
		return ptr;
	}


	void UpdateDifficultyValues();
	void Bump();
	void StopFlee();
	void PlayFleeSound();
	void StartFlee();
	void SetGroundSpeed();
	void Died();
	void Destroyed();
	void ReplicatedEvent();
};


// Class DunDefSpecial.DunDefTurkeyController
// 0x0030 (0x063C - 0x060C)
class ADunDefTurkeyController : public ADunDefEnemyController
{
public:
	float                                              FleeDistance;                                             // 0x060C(0x0004)
	float                                              WanderRange;                                              // 0x0610(0x0004)
	float                                              FleeTimeOut;                                              // 0x0614(0x0004)
	float                                              MaxWanderOffSet;                                          // 0x0618(0x0004)
	float                                              MaxYawOffset;                                             // 0x061C(0x0004)
	int                                                currentFleeIndex;                                         // 0x0620(0x0004)
	float                                              LastFleeChange;                                           // 0x0624(0x0004)
	class ADunDefPlayer*                               FleeTarget;                                               // 0x0628(0x0004)
	struct FVector                                     FleePoint;                                                // 0x062C(0x000C)
	float                                              currentYaw;                                               // 0x0638(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.DunDefTurkeyController");
		return ptr;
	}


	void WantsHurtAnimation();
	void NotifyTakeHitEX();
	void GetWanderPoint();
	void DoFlee();
	void CheckPlayers();
	void TimeOutFlee();
};


// Class DunDefSpecial.GameInfo_AroundTheWorld
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_AroundTheWorld : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_AroundTheWorld");
		return ptr;
	}


	void InitGameReplicationInfo();
	void DoWaveSkipping();
};


// Class DunDefSpecial.GameInfo_Assault
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Assault : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Assault");
		return ptr;
	}


	void InitGameReplicationInfo();
	void DoWaveSkipping();
	void PostBeginPlay();
	void RestartPlayer();
};


// Class DunDefSpecial.GameInfo_Chicken
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Chicken : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Chicken");
		return ptr;
	}


	void RestartPlayer();
};


// Class DunDefSpecial.GameInfo_Delivery
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_Delivery : public AMain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Delivery");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_GoldenTokens
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_GoldenTokens : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_GoldenTokens");
		return ptr;
	}


	void Killed();
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit");
		return ptr;
	}


	void RestartPlayer();
	void DoWaveSkipping();
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit_Uber : public AGameInfo_KillEnemiesTimeLimit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber");
		return ptr;
	}


	void AddObjectiveScore();
	void ScoreKill();
	void Killed();
};


// Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber6
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_KillEnemiesTimeLimit_Uber6 : public AGameInfo_KillEnemiesTimeLimit_Uber
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_KillEnemiesTimeLimit_Uber6");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_NoTowers
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_NoTowers : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_NoTowers");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_OgreAlly
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_OgreAlly : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_OgreAlly");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_RainingGoblins
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_RainingGoblins : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_RainingGoblins");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.GameInfo_UberAssault
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_UberAssault : public AGameInfo_Assault
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_UberAssault");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_UberDefense
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_UberDefense : public AMain
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_UberDefense");
		return ptr;
	}

};


// Class DunDefSpecial.GameInfo_VDay2
// 0x0018 (0x0560 - 0x0548)
class AGameInfo_VDay2 : public AMain
{
public:
	TArray<class ADunDefEnemy*>                        Boys;                                                     // 0x0548(0x000C)
	TArray<class ADunDefEnemy*>                        Girls;                                                    // 0x0554(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_VDay2");
		return ptr;
	}


	void PairMatched();
	void Tick();
	void EnemyDied();
	void WaveSpawnerCreateEnemy();
};


// Class DunDefSpecial.GameInfo_Wizardry
// 0x0008 (0x0550 - 0x0548)
class AGameInfo_Wizardry : public AGameInfo_Special
{
public:
	class ADunDefDarkElfMage*                          RegularMage;                                              // 0x0548(0x0004)
	class ADunDefDarkElfMage*                          RegularMageTwo;                                           // 0x054C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_Wizardry");
		return ptr;
	}


	void MageCheck();
	void PostBeginPlay();
};


// Class DunDefSpecial.GameInfo_ZippyTerror
// 0x0000 (0x0548 - 0x0548)
class AGameInfo_ZippyTerror : public AGameInfo_Special
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.GameInfo_ZippyTerror");
		return ptr;
	}


	void InitGameReplicationInfo();
};


// Class DunDefSpecial.SnowManBoss
// 0x004C (0x0D40 - 0x0CF4)
class ASnowManBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                                 // 0x0CF4(0x0008)
	struct FName                                       PeckSocket;                                               // 0x0CFC(0x0008)
	struct FName                                       SnowShootAnim;                                            // 0x0D04(0x0008)
	struct FName                                       SnowSpawnSocketLeft;                                      // 0x0D0C(0x0008)
	struct FName                                       SnowSpawnSocketRight;                                     // 0x0D14(0x0008)
	class ADunDefEmitterSpawnable*                     SnowShootEffect;                                          // 0x0D1C(0x0004)
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                            // 0x0D20(0x0004)
	class ADunDefEmitterSpawnable*                     StompEffect;                                              // 0x0D24(0x0004)
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0D28(0x0004)
	struct FName                                       StompAnim;                                                // 0x0D2C(0x0008)
	float                                              StompEffectRadius;                                        // 0x0D34(0x0004)
	struct FName                                       SpawnInAnim;                                              // 0x0D38(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.SnowManBoss");
		return ptr;
	}


	void StartMovement();
	void StopMovement();
	void Died();
	void Destroyed();
	void DoStompDamage();
	void DoStomp();
	void DoPeck();
	void GetPeckLoc();
	void SnowBallRight();
	void SnowBallLeft();
	void SpawnSnowShootEffect();
	void GetProjectileSpawnLoc();
	void PlayStomp();
	void PlaySnowShoot();
	void PlayPeckAttack();
	void PlaySpawnIn();
	void PostBeginPlay();
};


// Class DunDefSpecial.SnowManBossController
// 0x0068 (0x0674 - 0x060C)
class ASnowManBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           SnowProjectileTemplate;                                   // 0x060C(0x0004)
	float                                              PeckRange;                                                // 0x0610(0x0004)
	float                                              PeckRadius;                                               // 0x0614(0x0004)
	float                                              BasePeckDamage;                                           // 0x0618(0x0004)
	class UClass*                                      PeckDmgType;                                              // 0x061C(0x0004)
	float                                              PeckMomentum;                                             // 0x0620(0x0004)
	float                                              PeckDmgFallOffExp;                                        // 0x0624(0x0004)
	unsigned long                                      bDoFullPeckRadialDmg : 1;                                 // 0x0628(0x0004)
	unsigned long                                      bDoFullStompRadialDmg : 1;                                // 0x0628(0x0004)
	float                                              SnowShootRange;                                           // 0x062C(0x0004)
	float                                              PeckAngle;                                                // 0x0630(0x0004)
	float                                              PeckCoolDown;                                             // 0x0634(0x0004)
	float                                              LastPeckTime;                                             // 0x0638(0x0004)
	float                                              SnowShootCoolDown;                                        // 0x063C(0x0004)
	float                                              SnowShootAngle;                                           // 0x0640(0x0004)
	float                                              MaxSnowShootRotOffset;                                    // 0x0644(0x0004)
	float                                              LastSnowShoot;                                            // 0x0648(0x0004)
	float                                              StompRadius;                                              // 0x064C(0x0004)
	float                                              BaseStompDamage;                                          // 0x0650(0x0004)
	class UClass*                                      StompDmgType;                                             // 0x0654(0x0004)
	float                                              StompMomentum;                                            // 0x0658(0x0004)
	float                                              StompDmgFallOffExp;                                       // 0x065C(0x0004)
	float                                              BaseStompChance;                                          // 0x0660(0x0004)
	float                                              MinSurroundingEnemiesForStomp;                            // 0x0664(0x0004)
	float                                              MaxSurroundingEnemiesForStomp;                            // 0x0668(0x0004)
	float                                              StompCoolDown;                                            // 0x066C(0x0004)
	float                                              LastStompTime;                                            // 0x0670(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.SnowManBossController");
		return ptr;
	}


	void CheckForCustomAttacks();
	void WantsHurtAnimation();
	void NotifyTakeHitEX();
	void CheckStomp();
	void ChooseAttack();
	void DoPeck();
	void DoStomp();
	void SpawnSnowProjectile();
};


// Class DunDefSpecial.TurkeyBoss
// 0x003C (0x0D30 - 0x0CF4)
class ATurkeyBoss : public ADunDefBoss
{
public:
	struct FName                                       PeckAnim;                                                 // 0x0CF4(0x0008)
	struct FName                                       PeckSocket;                                               // 0x0CFC(0x0008)
	struct FName                                       EggShootAnim;                                             // 0x0D04(0x0008)
	struct FName                                       EggSpawnSocket;                                           // 0x0D0C(0x0008)
	class ADunDefEmitterSpawnable*                     EggShootEffect;                                           // 0x0D14(0x0004)
	class ADunDefEmitterSpawnable*                     PeckHitEffect;                                            // 0x0D18(0x0004)
	class ADunDefEmitterSpawnable*                     StompEffect;                                              // 0x0D1C(0x0004)
	class ADunDefEmitterSpawnable*                     DeathEffect;                                              // 0x0D20(0x0004)
	struct FName                                       StompAnim;                                                // 0x0D24(0x0008)
	float                                              StompEffectRadius;                                        // 0x0D2C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.TurkeyBoss");
		return ptr;
	}


	void Died();
	void Destroyed();
	void DoStompDamage();
	void DoStomp();
	void DoPeck();
	void GetPeckLoc();
	void ShootEgg();
	void SpawnEggShootEffect();
	void GetProjectileSpawnLoc();
	void PlayStomp();
	void PlayEggShoot();
	void PlayPeckAttack();
};


// Class DunDefSpecial.TurkeyBossController
// 0x0068 (0x0674 - 0x060C)
class ATurkeyBossController : public ADunDefEnemyController
{
public:
	class ADunDefProjectile*                           EggProjectileTemplate;                                    // 0x060C(0x0004)
	float                                              PeckRange;                                                // 0x0610(0x0004)
	float                                              PeckRadius;                                               // 0x0614(0x0004)
	float                                              BasePeckDamage;                                           // 0x0618(0x0004)
	class UClass*                                      PeckDmgType;                                              // 0x061C(0x0004)
	float                                              PeckMomentum;                                             // 0x0620(0x0004)
	float                                              PeckDmgFallOffExp;                                        // 0x0624(0x0004)
	unsigned long                                      bDoFullPeckRadialDmg : 1;                                 // 0x0628(0x0004)
	unsigned long                                      bDoFullStompRadialDmg : 1;                                // 0x0628(0x0004)
	float                                              EggShootRange;                                            // 0x062C(0x0004)
	float                                              PeckAngle;                                                // 0x0630(0x0004)
	float                                              PeckCoolDown;                                             // 0x0634(0x0004)
	float                                              LastPeckTime;                                             // 0x0638(0x0004)
	float                                              EggShootCoolDown;                                         // 0x063C(0x0004)
	float                                              EggShootAngle;                                            // 0x0640(0x0004)
	float                                              MaxEggShootRotOffset;                                     // 0x0644(0x0004)
	float                                              LastEggShoot;                                             // 0x0648(0x0004)
	float                                              StompRadius;                                              // 0x064C(0x0004)
	float                                              BaseStompDamage;                                          // 0x0650(0x0004)
	class UClass*                                      StompDmgType;                                             // 0x0654(0x0004)
	float                                              StompMomentum;                                            // 0x0658(0x0004)
	float                                              StompDmgFallOffExp;                                       // 0x065C(0x0004)
	float                                              BaseStompChance;                                          // 0x0660(0x0004)
	float                                              MinSurroundingEnemiesForStomp;                            // 0x0664(0x0004)
	float                                              MaxSurroundingEnemiesForStomp;                            // 0x0668(0x0004)
	float                                              StompCoolDown;                                            // 0x066C(0x0004)
	float                                              LastStompTime;                                            // 0x0670(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.TurkeyBossController");
		return ptr;
	}


	void WantsHurtAnimation();
	void NotifyTakeHitEX();
	void CheckStomp();
	void ChooseAttack();
	void DoPeck();
	void DoStomp();
	void SpawnEggProjectile();
};


// Class DunDefSpecial.UI_GameStatsUberMF
// 0x0010 (0x0FD0 - 0x0FC0)
class UUI_GameStatsUberMF : public UUI_GameStats
{
public:
	class UUILabel*                                    PlayerListLabel;                                          // 0x0FC0(0x0004)
	class UUILabel*                                    ScoreListLabel;                                           // 0x0FC4(0x0004)
	struct FColor                                      LocalPlayerHighLightColor;                                // 0x0FC8(0x0004)
	struct FColor                                      DefaultPlayerHighLightColor;                              // 0x0FCC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSpecial.UI_GameStatsUberMF");
		return ptr;
	}


	void GetPlayerList();
	void GetColorString();
	void UpdateTeamPanels();
	void CustomInit();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
