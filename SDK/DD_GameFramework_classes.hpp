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

// Class GameFramework.GameAIController
// 0x0024 (0x03F4 - 0x03D0)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                              // 0x03D0(0x0004)
	unsigned long                                      bHasRunawayCommandList : 1;                               // 0x03D4(0x0004)
	unsigned long                                      bAILogging : 1;                                           // 0x03D4(0x0004)
	unsigned long                                      bAILogToWindow : 1;                                       // 0x03D4(0x0004)
	unsigned long                                      bFlushAILogEachLine : 1;                                  // 0x03D4(0x0004)
	unsigned long                                      bMapBasedLogName : 1;                                     // 0x03D4(0x0004)
	unsigned long                                      bAIDrawDebug : 1;                                         // 0x03D4(0x0004)
	unsigned long                                      bAIBroken : 1;                                            // 0x03D4(0x0004)
	class AFileLog*                                    AILogFile;                                                // 0x03D8(0x0004)
	TArray<struct FName>                               AILogFilter;                                              // 0x03DC(0x000C)
	struct FString                                     DemoActionString;                                         // 0x03E8(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAIController");
		return ptr;
	}


	void GetActionString();
	void GeneratePathToLocation();
	void GeneratePathToActor();
	void SetDesiredRotation();
	void AILog_Internal();
	void RecordDemoAILog();
	void Destroyed();
	void GetAICommandInStack();
	void FindCommandOfClass();
	void DumpCommandStack();
	void CheckCommandCount();
	void GetActiveCommand();
	void AbortCommand();
	void PopCommand();
	void PushCommand();
};


// Class GameFramework.GameAICommand
// 0x001C (0x0058 - 0x003C)
class UGameAICommand : public UObject
{
public:
	class UGameAICommand*                              ChildCommand;                                             // 0x003C(0x0004)
	struct FName                                       ChildStatus;                                              // 0x0040(0x0008)
	class AGameAIController*                           GameAIOwner;                                              // 0x0048(0x0004)
	struct FName                                       Status;                                                   // 0x004C(0x0008)
	unsigned long                                      bAllowNewSameClassInstance : 1;                           // 0x0054(0x0004)
	unsigned long                                      bReplaceActiveSameClassInstance : 1;                      // 0x0054(0x0004)
	unsigned long                                      bAborted : 1;                                             // 0x0054(0x0004)
	unsigned long                                      bIgnoreNotifies : 1;                                      // 0x0054(0x0004)
	unsigned long                                      bPendingPop : 1;                                          // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameAICommand");
		return ptr;
	}


	void GetDebugOverheadText();
	void DrawDebug();
	void GetDumpString();
	void Resumed();
	void Paused();
	void Popped();
	void Pushed();
	void PostPopped();
	void PrePushed();
	void AllowStateTransitionTo();
	void AllowTransitionTo();
	void Tick();
	void ShouldIgnoreNotifies();
	void InternalTick();
	void InternalResumed();
	void InternalPaused();
	void InternalPopped();
	void InternalPushed();
	void InternalPrePushed();
	void STATIC_InitCommand();
	void STATIC_InitCommandUserActor();
};


// Class GameFramework.GameCrowdAgent
// 0x01DC (0x03FC - 0x0220)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	class UGameCrowdGroup*                             MyGroup;                                                  // 0x0220(0x0004)
	struct FVector                                     PreferredVelocity;                                        // 0x0224(0x000C)
	float                                              AvoidanceShare;                                           // 0x0230(0x0004)
	class AGameCrowdDestination*                       CurrentDestination;                                       // 0x0234(0x0004)
	class AGameCrowdDestination*                       BehaviorDestination;                                      // 0x0238(0x0004)
	class AGameCrowdDestination*                       PreviousDestination;                                      // 0x023C(0x0004)
	struct FVector                                     ExternalForce;                                            // 0x0240(0x000C)
	float                                              InterpZTranslation;                                       // 0x024C(0x0004)
	int                                                Health;                                                   // 0x0250(0x0004)
	float                                              DeadBodyDuration;                                         // 0x0254(0x0004)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0258(0x0004)
	int                                                ConformTraceFrameCount;                                   // 0x025C(0x0004)
	int                                                AwareUpdateFrameCount;                                    // 0x0260(0x0004)
	TArray<class AActor*>                              NearbyDynamics;                                           // 0x0264(0x000C)
	TArray<class AGameCrowdForcePoint*>                RelevantAttractors;                                       // 0x0270(0x000C)
	unsigned long                                      bUniformScale : 1;                                        // 0x027C(0x0004)
	unsigned long                                      bCheckForObstacles : 1;                                   // 0x027C(0x0004)
	unsigned long                                      bUseNavMeshPathing : 1;                                   // 0x027C(0x0004)
	unsigned long                                      bWantsSeePlayerNotification : 1;                          // 0x027C(0x0004)
	unsigned long                                      bAllowPitching : 1;                                       // 0x027C(0x0004)
	unsigned long                                      bHitObstacle : 1;                                         // 0x027C(0x0004)
	unsigned long                                      bBadHitNormal : 1;                                        // 0x027C(0x0004)
	unsigned long                                      bSimulateThisTick : 1;                                    // 0x027C(0x0004)
	unsigned long                                      bClampMovementSpeed : 1;                                  // 0x027C(0x0004)
	unsigned long                                      bPotentialEncounter : 1;                                  // 0x027C(0x0004)
	unsigned long                                      bIsPanicked : 1;                                          // 0x027C(0x0004)
	unsigned long                                      bWantsGroupIdle : 1;                                      // 0x027C(0x0004)
	unsigned long                                      bPreferVisibleDestination : 1;                            // 0x027C(0x0004)
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;                     // 0x027C(0x0004)
	unsigned long                                      bHasNotifiedSpawner : 1;                                  // 0x027C(0x0004)
	unsigned long                                      bIsInSpawnPool : 1;                                       // 0x027C(0x0004)
	TEnumAsByte<EConformType>                          ConformType;                                              // 0x0280(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              ConformTraceDist;                                         // 0x0284(0x0004)
	int                                                ConformTraceInterval;                                     // 0x0288(0x0004)
	int                                                CurrentConformTraceInterval;                              // 0x028C(0x0004)
	float                                              LastGroundZ;                                              // 0x0290(0x0004)
	float                                              AwareRadius;                                              // 0x0294(0x0004)
	int                                                AwareUpdateInterval;                                      // 0x0298(0x0004)
	float                                              AvoidOtherStrength;                                       // 0x029C(0x0004)
	float                                              AvoidPlayerStrength;                                      // 0x02A0(0x0004)
	float                                              AvoidOtherRadius;                                         // 0x02A4(0x0004)
	float                                              GroupAttractionStrength;                                  // 0x02A8(0x0004)
	float                                              MatchVelStrength;                                         // 0x02AC(0x0004)
	float                                              FollowPathStrength;                                       // 0x02B0(0x0004)
	float                                              VelocityDamping;                                          // 0x02B4(0x0004)
	float                                              RotateToTargetSpeed;                                      // 0x02B8(0x0004)
	float                                              MaxYawRate;                                               // 0x02BC(0x0004)
	struct FVector                                     MeshMinScale3D;                                           // 0x02C0(0x000C)
	struct FVector                                     MeshMaxScale3D;                                           // 0x02CC(0x000C)
	float                                              EyeZOffset;                                               // 0x02D8(0x0004)
	float                                              ProximityLODDist;                                         // 0x02DC(0x0004)
	float                                              VisibleProximityLODDist;                                  // 0x02E0(0x0004)
	struct FVector                                     LastKnownGoodPosition;                                    // 0x02E4(0x000C)
	float                                              GroundOffset;                                             // 0x02F0(0x0004)
	struct FVector                                     IntermediatePoint;                                        // 0x02F4(0x000C)
	struct FVector                                     SearchExtent;                                             // 0x0300(0x000C)
	class UClass*                                      NavigationHandleClass;                                    // 0x030C(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0310(0x0004)
	int                                                ObstacleCheckCount;                                       // 0x0314(0x0004)
	float                                              WalkableFloorZ;                                           // 0x0318(0x0004)
	float                                              LastPathingAttempt;                                       // 0x031C(0x0004)
	float                                              LastUpdateTime;                                           // 0x0320(0x0004)
	float                                              NotVisibleLifeSpan;                                       // 0x0324(0x0004)
	float                                              NotVisibleTickScalingFactor;                              // 0x0328(0x0004)
	class AGameCrowdAgent*                             MyArchetype;                                              // 0x032C(0x0004)
	float                                              MaxWalkingSpeed;                                          // 0x0330(0x0004)
	float                                              MaxRunningSpeed;                                          // 0x0334(0x0004)
	float                                              MaxSpeed;                                                 // 0x0338(0x0004)
	TArray<struct FRecentInteraction>                  RecentInteractions;                                       // 0x033C(0x000C)
	float                                              BeaconMaxDist;                                            // 0x0348(0x0004)
	struct FVector                                     BeaconOffset;                                             // 0x034C(0x000C)
	class UTexture2D*                                  BeaconTexture;                                            // 0x0358(0x0004)
	struct FLinearColor                                BeaconColor;                                              // 0x035C(0x0010)
	class USoundCue*                                   AmbientSoundCue;                                          // 0x036C(0x0004)
	class UAudioComponent*                             AmbientSoundComponent;                                    // 0x0370(0x0004)
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                          // 0x0374(0x0004)
	TArray<struct FBehaviorEntry>                      EncounterAgentBehaviors;                                  // 0x0378(0x000C)
	TArray<struct FBehaviorEntry>                      SeePlayerBehaviors;                                       // 0x0384(0x000C)
	float                                              MaxSeePlayerDistSq;                                       // 0x0390(0x0004)
	float                                              SeePlayerInterval;                                        // 0x0394(0x0004)
	TArray<struct FBehaviorEntry>                      SpawnBehaviors;                                           // 0x0398(0x000C)
	TArray<struct FBehaviorEntry>                      PanicBehaviors;                                           // 0x03A4(0x000C)
	TArray<struct FBehaviorEntry>                      RandomBehaviors;                                          // 0x03B0(0x000C)
	float                                              RandomBehaviorInterval;                                   // 0x03BC(0x0004)
	float                                              ForceUpdateTime;                                          // 0x03C0(0x0004)
	float                                              ReachThreshold;                                           // 0x03C4(0x0004)
	TArray<struct FBehaviorEntry>                      GroupWaitingBehaviors;                                    // 0x03C8(0x000C)
	float                                              DesiredGroupRadius;                                       // 0x03D4(0x0004)
	float                                              DesiredGroupRadiusSq;                                     // 0x03D8(0x0004)
	float                                              MaxLOSLifeDistance;                                       // 0x03DC(0x0004)
	float                                              MaxLOSLifeDistanceSq;                                     // 0x03E0(0x0004)
	TScriptInterface<class UGameCrowdSpawnerInterface> MySpawner;                                                // 0x03E4(0x0008)
	struct FVector                                     SpawnOffset;                                              // 0x03EC(0x000C)
	float                                              InitialLastRenderTime;                                    // 0x03F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		return ptr;
	}


	void GetBehaviorString();
	void GetDestString();
	void PostRenderFor();
	void NativePostRenderFor();
	void GeneratePathToActor();
	void InitNavigationHandle();
	void OverlappedActorEvent();
	void TakeDamage();
	void FireDeathEvent();
	void PlayDeath();
	void UpdateIntermediatePoint();
	void CalcCamera();
	void IsIdle();
	void SetCurrentBehavior();
	void StopBehavior();
	void ActivateInstancedBehavior();
	void ActivateBehavior();
	void ResetSeePlayer();
	void TryRandomBehavior();
	void NotifySeePlayer();
	void PlaySpawnBehavior();
	void HandlePotentialAgentEncounter();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void OnPlayAgentAnimation();
	void InitializeAgent();
	void SetLighting();
	void DisplayDebug();
	void Destroyed();
	void ResetPooledAgent();
	void KillAgent();
	void PostBeginPlay();
	void SetMaxSpeed();
	void SetCurrentDestination();
	void WaitForGroupMembers();
	void PickBehaviorFrom();
	void SetPanic();
	void IsPanicked();
	void FellOutOfWorld();
};


// Class GameFramework.GameCrowdAgentSkeletal
// 0x0080 (0x047C - 0x03FC)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x03FC(0x0004)
	class UAnimNodeBlend*                              SpeedBlendNode;                                           // 0x0400(0x0004)
	class UAnimNodeSlot*                               FullBodySlot;                                             // 0x0404(0x0004)
	class UAnimNodeSequence*                           ActionSeqNode;                                            // 0x0408(0x0004)
	class UAnimNodeSequence*                           WalkSeqNode;                                              // 0x040C(0x0004)
	class UAnimNodeSequence*                           RunSeqNode;                                               // 0x0410(0x0004)
	class UAnimTree*                                   AgentTree;                                                // 0x0414(0x0004)
	TArray<struct FName>                               WalkAnimNames;                                            // 0x0418(0x000C)
	TArray<struct FName>                               RunAnimNames;                                             // 0x0424(0x000C)
	TArray<struct FName>                               IdleAnimNames;                                            // 0x0430(0x000C)
	TArray<struct FName>                               DeathAnimNames;                                           // 0x043C(0x000C)
	float                                              SpeedBlendStart;                                          // 0x0448(0x0004)
	float                                              SpeedBlendEnd;                                            // 0x044C(0x0004)
	float                                              AnimVelRate;                                              // 0x0450(0x0004)
	float                                              MaxSpeedBlendChangeSpeed;                                 // 0x0454(0x0004)
	struct FName                                       MoveSyncGroupName;                                        // 0x0458(0x0008)
	TArray<struct FGameCrowdAttachmentList>            Attachments;                                              // 0x0460(0x000C)
	float                                              MaxTargetAcquireTime;                                     // 0x046C(0x0004)
	unsigned long                                      bUseRootMotionVelocity : 1;                               // 0x0470(0x0004)
	unsigned long                                      bIsPlayingIdleAnimation : 1;                              // 0x0470(0x0004)
	unsigned long                                      bIsPlayingDeathAnimation : 1;                             // 0x0470(0x0004)
	unsigned long                                      bAnimateThisTick : 1;                                     // 0x0470(0x0004)
	float                                              MaxAnimationDistance;                                     // 0x0474(0x0004)
	float                                              MaxAnimationDistanceSq;                                   // 0x0478(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		return ptr;
	}


	void CreateAttachments();
	void OnAnimEnd();
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ClearLatentAnimation();
	void OnPlayAgentAnimation();
	void SetRootMotion();
	void PlayDeath();
	void SetLighting();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdAgentBehavior
// 0x0010 (0x004C - 0x003C)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned long                                      bIdleBehavior : 1;                                        // 0x003C(0x0004)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x003C(0x0004)
	unsigned long                                      bIsViralBehavior : 1;                                     // 0x003C(0x0004)
	unsigned long                                      bIsPanicked : 1;                                          // 0x003C(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x0040(0x0004)
	float                                              MaxPlayerDistance;                                        // 0x0044(0x0004)
	class AGameCrowdAgent*                             MyAgent;                                                  // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAgentBehavior");
		return ptr;
	}


	void AllowBehaviorAt();
	void AllowThisDestination();
	void PropagateViralBehaviorTo();
	void ActivatedBy();
	void GetDestinationActor();
	void ChangingDestination();
	void GetBehaviorString();
	void OnAnimEnd();
	void StopBehavior();
	void InitBehavior();
	void HandleMovement();
	void FinishedTargetRotation();
	void CanBeUsedBy();
	void Tick();
	void ShouldEndIdle();
};


// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x0078 - 0x004C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x004C(0x000C)
	float                                              BlendInTime;                                              // 0x0058(0x0004)
	float                                              BlendOutTime;                                             // 0x005C(0x0004)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x0060(0x0004)
	unsigned long                                      bLookAtPlayer : 1;                                        // 0x0060(0x0004)
	unsigned long                                      bLooping : 1;                                             // 0x0060(0x0004)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x0060(0x0004)
	class AActor*                                      CustomActionTarget;                                       // 0x0064(0x0004)
	int                                                LoopIndex;                                                // 0x0068(0x0004)
	float                                              LoopTime;                                                 // 0x006C(0x0004)
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                             // 0x0070(0x0004)
	int                                                AnimationIndex;                                           // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_PlayAnimation");
		return ptr;
	}


	void GetBehaviorString();
	void StopBehavior();
	void PlayAgentAnimationNow();
	void OnAnimEnd();
	void SetSequenceOutput();
	void FinishedTargetRotation();
	void InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0004 (0x0050 - 0x004C)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                               // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_RunFromPanic");
		return ptr;
	}


	void GetBehaviorString();
	void AllowBehaviorAt();
	void AllowThisDestination();
	void PropagateViralBehaviorTo();
	void StopBehavior();
	void InitBehavior();
	void ActivatedBy();
};


// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x004C - 0x004C)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitForGroup");
		return ptr;
	}


	void StopBehavior();
	void ShouldEndIdle();
	void GetBehaviorString();
	void InitBehavior();
};


// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x0054 - 0x004C)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                                    // 0x004C(0x0004)
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                            // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdBehavior_WaitInQueue");
		return ptr;
	}


	void StopBehavior();
	void ShouldEndIdle();
	void GetBehaviorString();
	void GetDestinationActor();
	void ChangingDestination();
	void HandleMovement();
};


// Class GameFramework.GameCrowdGroup
// 0x000C (0x0048 - 0x003C)
class UGameCrowdGroup : public UObject
{
public:
	TArray<class AGameCrowdAgent*>                     Members;                                                  // 0x003C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdGroup");
		return ptr;
	}


	void UpdateDestinations();
	void RemoveMember();
	void AddMember();
};


// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x0224 - 0x021C)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                           // 0x021C(0x0004)
	class UCylinderComponent*                          CylinderComponent;                                        // 0x0220(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		return ptr;
	}


	void OnToggle();
};


// Class GameFramework.GameCrowdDestination
// 0x0090 (0x02B4 - 0x0224)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;                      // 0x0224(0x0004)
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;                    // 0x0228(0x0004)
	unsigned long                                      bKillWhenReached : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bAllowAsPreviousDestination : 1;                          // 0x022C(0x0004)
	unsigned long                                      bLastAllowableResult : 1;                                 // 0x022C(0x0004)
	unsigned long                                      bAvoidWhenPanicked : 1;                                   // 0x022C(0x0004)
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                              // 0x022C(0x0004)
	unsigned long                                      bFleeDestination : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bMustReachExactly : 1;                                    // 0x022C(0x0004)
	unsigned long                                      bHasRestrictions : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bAllowsSpawning : 1;                                      // 0x022C(0x0004)
	unsigned long                                      bLineSpawner : 1;                                         // 0x022C(0x0004)
	unsigned long                                      bSpawnAtEdge : 1;                                         // 0x022C(0x0004)
	unsigned long                                      bSoftPerimeter : 1;                                       // 0x022C(0x0004)
	unsigned long                                      bIsVisible : 1;                                           // 0x022C(0x0004)
	unsigned long                                      bWillBeVisible : 1;                                       // 0x022C(0x0004)
	unsigned long                                      bCanSpawnHereNow : 1;                                     // 0x022C(0x0004)
	unsigned long                                      bIsBeyondSpawnDistance : 1;                               // 0x022C(0x0004)
	unsigned long                                      bAdjacentToVisibleNode : 1;                               // 0x022C(0x0004)
	TArray<class AGameCrowdDestination*>               NextDestinations;                                         // 0x0230(0x000C)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                                // 0x023C(0x0004)
	int                                                Capacity;                                                 // 0x0240(0x0004)
	float                                              Frequency;                                                // 0x0244(0x0004)
	int                                                CustomerCount;                                            // 0x0248(0x0004)
	TArray<class UClass*>                              SupportedAgentClasses;                                    // 0x024C(0x000C)
	TArray<class UObject*>                             SupportedArchetypes;                                      // 0x0258(0x000C)
	TArray<class UClass*>                              RestrictedAgentClasses;                                   // 0x0264(0x000C)
	TArray<class UObject*>                             RestrictedArchetypes;                                     // 0x0270(0x000C)
	class UClass*                                      NavigationHandleClass;                                    // 0x027C(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x0280(0x0004)
	class AGameCrowdAgent*                             QueryingAgent;                                            // 0x0284(0x0004)
	float                                              ExactReachTolerance;                                      // 0x0288(0x0004)
	struct FName                                       InteractionTag;                                           // 0x028C(0x0008)
	float                                              InteractionDelay;                                         // 0x0294(0x0004)
	float                                              SpawnRadius;                                              // 0x0298(0x0004)
	TArray<struct FBehaviorEntry>                      ReachedBehaviors;                                         // 0x029C(0x000C)
	class AGameCrowdAgent*                             AgentEnRoute;                                             // 0x02A8(0x0004)
	float                                              Priority;                                                 // 0x02AC(0x0004)
	float                                              LastSpawnTime;                                            // 0x02B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		return ptr;
	}


	void GeneratePathToActor();
	void InitNavigationHandle();
	void GetSpawnPosition();
	void AllowableDestinationFor();
	void AtCapacity();
	void IncrementCustomerCount();
	void DecrementCustomerCount();
	void PickNewDestinationFor();
	void ReachedDestination();
	void PostBeginPlay();
	void ReachedByAgent();
	void GetSpreadValue();
	void NotifyPathChanged();
};


// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x0240 - 0x0224)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                        // 0x0224(0x0004)
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                                    // 0x0228(0x0004)
	class AGameCrowdAgent*                             QueuedAgent;                                              // 0x022C(0x0004)
	class AGameCrowdDestination*                       QueueDestination;                                         // 0x0230(0x0004)
	unsigned long                                      bClearingQueue : 1;                                       // 0x0234(0x0004)
	unsigned long                                      bPendingAdvance : 1;                                      // 0x0234(0x0004)
	float                                              AverageReactionTime;                                      // 0x0238(0x0004)
	class UClass*                                      QueueBehaviorClass;                                       // 0x023C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		return ptr;
	}


	void HasCustomer();
	void ClearQueue();
	void AddCustomer();
	void ActuallyAdvance();
	void AdvanceCustomerTo();
	void ReachedDestination();
	void HasSpace();
	void QueueReachedBy();
};


// Class GameFramework.GameCrowdForcePoint
// 0x0000 (0x0224 - 0x0224)
class AGameCrowdForcePoint : public AGameCrowdInteractionPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdForcePoint");
		return ptr;
	}


	void AppliedForce();
	void UnTouch();
	void Touch();
};


// Class GameFramework.GameCrowdAttractor
// 0x0008 (0x022C - 0x0224)
class AGameCrowdAttractor : public AGameCrowdForcePoint
{
public:
	float                                              Attraction;                                               // 0x0224(0x0004) (Const)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x0228(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdAttractor");
		return ptr;
	}


	void AppliedForce();
};


// Class GameFramework.GameCrowdRepulsor
// 0x0008 (0x022C - 0x0224)
class AGameCrowdRepulsor : public AGameCrowdForcePoint
{
public:
	float                                              Repulsion;                                                // 0x0224(0x0004) (Const)
	unsigned long                                      bAttractionFalloff : 1;                                   // 0x0228(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdRepulsor");
		return ptr;
	}


	void AppliedForce();
};


// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0054 (0x014C - 0x00F8)
class USeqAct_GameCrowdSpawner : public USeqAct_Latent
{
public:
	unsigned long                                      bSpawningActive : 1;                                      // 0x00F8(0x0004)
	unsigned long                                      bCycleSpawnLocs : 1;                                      // 0x00F8(0x0004)
	unsigned long                                      bRespawnDeadAgents : 1;                                   // 0x00F8(0x0004)
	unsigned long                                      bHasReducedNumberDueToSplitScreen : 1;                    // 0x00F8(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x00F8(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x00F8(0x0004)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x00F8(0x0004)
	unsigned long                                      bOnlySpawnHidden : 1;                                     // 0x00F8(0x0004)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x00F8(0x0004)
	unsigned long                                      bCastShadows : 1;                                         // 0x00F8(0x0004)
	int                                                NextDestinationIndex;                                     // 0x00FC(0x0004)
	TArray<class AActor*>                              SpawnLocs;                                                // 0x0100(0x000C)
	int                                                LastSpawnLocIndex;                                        // 0x010C(0x0004)
	float                                              SpawnRate;                                                // 0x0110(0x0004)
	int                                                SpawnNum;                                                 // 0x0114(0x0004)
	float                                              SpawnRadius;                                              // 0x0118(0x0004)
	float                                              SplitScreenNumReduction;                                  // 0x011C(0x0004)
	float                                              Remainder;                                                // 0x0120(0x0004)
	float                                              AgentFrequencySum;                                        // 0x0124(0x0004)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x0128(0x000C)
	TArray<class AGameCrowdAgent*>                     SpawnedList;                                              // 0x0134(0x000C)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0140(0x0004)
	class AGameCrowdReplicationActor*                  RepActor;                                                 // 0x0144(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0148(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		return ptr;
	}


	void STATIC_GetObjClassVersion();
	void CreateNewAgent();
	void SpawnAgent();
	void UpdateSpawning();
	void KillAgents();
	void CacheSpawnerVars();
	void SpawnedAgent();
};


// Class GameFramework.GameCrowdPopulationManager
// 0x0084 (0x02A0 - 0x021C)
class AGameCrowdPopulationManager : public AActor
{
public:
	unsigned long                                      bSpawningActive : 1;                                      // 0x021C(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x021C(0x0004)
	unsigned long                                      bCastShadows : 1;                                         // 0x021C(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x021C(0x0004)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x021C(0x0004)
	unsigned long                                      bHaveInitialPopulation : 1;                               // 0x021C(0x0004)
	unsigned long                                      bWarmupPosition : 1;                                      // 0x021C(0x0004)
	float                                              SpawnRate;                                                // 0x0220(0x0004)
	int                                                SpawnNum;                                                 // 0x0224(0x0004)
	float                                              SplitScreenNumReduction;                                  // 0x0228(0x0004)
	float                                              Remainder;                                                // 0x022C(0x0004)
	float                                              AgentFrequencySum;                                        // 0x0230(0x0004)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x0234(0x000C)
	TArray<class AGameCrowdAgent*>                     AgentPool;                                                // 0x0240(0x000C)
	int                                                MaxAgentPoolSize;                                         // 0x024C(0x0004)
	int                                                AgentCount;                                               // 0x0250(0x0004)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0254(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0258(0x0004)
	float                                              SpawnPrioritizationInterval;                              // 0x025C(0x0004)
	int                                                PrioritizationIndex;                                      // 0x0260(0x0004)
	int                                                PrioritizationUpdateIndex;                                // 0x0264(0x0004)
	TArray<class AGameCrowdDestination*>               PrioritizedSpawnPoints;                                   // 0x0268(0x000C)
	float                                              PlayerPositionPredictionTime;                             // 0x0274(0x0004)
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x0278(0x000C)
	float                                              MaxSpawnDistSq;                                           // 0x0284(0x0004)
	float                                              MinBehindSpawnDistSq;                                     // 0x0288(0x0004)
	int                                                SpawnedCount;                                             // 0x028C(0x0004)
	int                                                PoolCount;                                                // 0x0290(0x0004)
	int                                                KilledCount;                                              // 0x0294(0x0004)
	float                                              HeadVisibilityOffset;                                     // 0x0298(0x0004)
	float                                              InitialPopulationPct;                                     // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		return ptr;
	}


	void CreateNewAgent();
	void SpawnAgent();
	void ValidateSpawnAt();
	void InitializeSpawnPoints();
	void AddPrioritizedSpawnPoint();
	void AnalyzeSpawnPoints();
	void PrioritizeSpawnPoints();
	void PickSpawnPoint();
	void Tick();
	void DisplayDebug();
	void AddToAgentPool();
	void AgentDestroyed();
	void OnGameCrowdPopulationManagerToggle();
	void PostBeginPlay();
};


// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x0228 - 0x021C)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // 0x021C(0x0004) (Edit)
	unsigned long                                      bSpawningActive : 1;                                      // 0x0220(0x0004) (Edit)
	int                                                DestroyAllCount;                                          // 0x0224(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdReplicationActor");
		return ptr;
	}


	void ReplicatedEvent();
};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.GameDamageType
// 0x003C (0x00C4 - 0x0088)
class UGameDamageType : public UDamageType
{
public:
	class UMaterialInterface*                          MI_DamageOverlay;                                         // 0x0088(0x0004)
	class USoundCue*                                   ExtraSoundToPlayWhenDamaged;                              // 0x008C(0x0004)
	unsigned long                                      bEnvironmentalDamage : 1;                                 // 0x0090(0x0004)
	unsigned long                                      bHighKickDeathAnimation : 1;                              // 0x0090(0x0004)
	unsigned long                                      bForceRagdollDeath : 1;                                   // 0x0090(0x0004)
	unsigned long                                      bSuppressImpactFX : 1;                                    // 0x0090(0x0004)
	unsigned long                                      bSuppressBloodDecals : 1;                                 // 0x0090(0x0004)
	unsigned long                                      bSuppressPlayExplosiveRadialDamageEffects : 1;            // 0x0090(0x0004)
	unsigned long                                      bAllowHeadShotGib : 1;                                    // 0x0090(0x0004)
	float                                              DistFromHitLocToGib;                                      // 0x0094(0x0004)
	struct FCanvasIcon                                 KilledByIcon;                                             // 0x0098(0x0014)
	struct FCanvasIcon                                 HeadshotIcon;                                             // 0x00AC(0x0014)
	float                                              IconScale;                                                // 0x00C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDamageType");
		return ptr;
	}


	void STATIC_HandleDamageFX();
	void STATIC_ShouldHeadShotGib();
	void STATIC_PlayExtraDamageSound();
	void STATIC_IsScriptedDamageType();
	void STATIC_ShouldPlayForceFeedback();
	void STATIC_HandleDeadPlayer();
	void STATIC_HandleKilledPawn();
	void STATIC_HandleDamagedPawn();
	void STATIC_ModifyDamage();
	void STATIC_ShouldGib();
};


// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01C4 - 0x01C4)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		return ptr;
	}

};


// Class GameFramework.GameExplosion
// 0x00B0 (0x00EC - 0x003C)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                                // 0x003C(0x0004)
	unsigned long                                      bAllowTeammateCringes : 1;                                // 0x003C(0x0004)
	unsigned long                                      bFullDamageToAttachee : 1;                                // 0x003C(0x0004)
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;                    // 0x003C(0x0004)
	unsigned long                                      bCausesFracture : 1;                                      // 0x003C(0x0004)
	unsigned long                                      bAllowPerMaterialFX : 1;                                  // 0x003C(0x0004)
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;// 0x003C(0x0004)
	unsigned long                                      bUseMapSpecificValues : 1;                                // 0x003C(0x0004)
	unsigned long                                      bUseOverlapCheck : 1;                                     // 0x003C(0x0004)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004)
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004)
	float                                              DirectionalExplosionAngleDeg;                             // 0x0040(0x0004)
	float                                              DamageDelay;                                              // 0x0044(0x0004)
	float                                              Damage;                                                   // 0x0048(0x0004)
	float                                              DamageRadius;                                             // 0x004C(0x0004)
	float                                              DamageFalloffExponent;                                    // 0x0050(0x0004)
	class AActor*                                      ActorToIgnoreForDamage;                                   // 0x0054(0x0004)
	class UClass*                                      ActorClassToIgnoreForDamage;                              // 0x0058(0x0004)
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;                // 0x005C(0x0004)
	class UClass*                                      MyDamageType;                                             // 0x0060(0x0004)
	float                                              KnockDownRadius;                                          // 0x0064(0x0004)
	float                                              KnockDownStrength;                                        // 0x0068(0x0004)
	float                                              CringeRadius;                                             // 0x006C(0x0004)
	struct FVector2D                                   CringeDuration;                                           // 0x0070(0x0008)
	float                                              MomentumTransferScale;                                    // 0x0078(0x0004)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004)
	float                                              ExplosionEmitterScale;                                    // 0x0080(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0084(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0088(0x000C)
	struct FVector                                     HitNormal;                                                // 0x0094(0x000C)
	class USoundCue*                                   ExplosionSound;                                           // 0x00A0(0x0004)
	class UPointLightComponent*                        ExploLight;                                               // 0x00A4(0x0004)
	float                                              ExploLightFadeOutTime;                                    // 0x00A8(0x0004)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x00AC(0x0004)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x00B0(0x0004)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x00B4(0x0004)
	float                                              FractureMeshRadius;                                       // 0x00B8(0x0004)
	float                                              FracturePartVel;                                          // 0x00BC(0x0004)
	class AActor*                                      Attachee;                                                 // 0x00C0(0x0004)
	class AController*                                 AttacheeController;                                       // 0x00C4(0x0004)
	class UCameraShake*                                CamShake;                                                 // 0x00C8(0x0004)
	class UCameraShake*                                CamShake_Left;                                            // 0x00CC(0x0004)
	class UCameraShake*                                CamShake_Right;                                           // 0x00D0(0x0004)
	class UCameraShake*                                CamShake_Rear;                                            // 0x00D4(0x0004)
	float                                              CamShakeInnerRadius;                                      // 0x00D8(0x0004)
	float                                              CamShakeOuterRadius;                                      // 0x00DC(0x0004)
	float                                              CamShakeFalloff;                                          // 0x00E0(0x0004)
	class UClass*                                      CameraLensEffect;                                         // 0x00E4(0x0004)
	float                                              CameraLensEffectRadius;                                   // 0x00E8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosion");
		return ptr;
	}

};


// Class GameFramework.GameExplosionActor
// 0x0050 (0x026C - 0x021C)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                         // 0x021C(0x0004)
	unsigned long                                      bActiveReloadBonusActive : 1;                             // 0x021C(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x021C(0x0004)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x0220(0x0004)
	float                                              LightFadeTime;                                            // 0x0224(0x0004)
	float                                              LightFadeTimeRemaining;                                   // 0x0228(0x0004)
	float                                              LightInitialBrightness;                                   // 0x022C(0x0004)
	class URadialBlurComponent*                        ExplosionRadialBlur;                                      // 0x0230(0x0004)
	float                                              RadialBlurFadeTime;                                       // 0x0234(0x0004)
	float                                              RadialBlurFadeTimeRemaining;                              // 0x0238(0x0004)
	float                                              RadialBlurMaxBlurAmount;                                  // 0x023C(0x0004)
	class UGameExplosion*                              ExplosionTemplate;                                        // 0x0240(0x0004)
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                                   // 0x0244(0x0004)
	class AController*                                 InstigatorController;                                     // 0x0248(0x0004)
	class AActor*                                      HitActorFromPhysMaterialTrace;                            // 0x024C(0x0004)
	struct FVector                                     HitLocationFromPhysMaterialTrace;                         // 0x0250(0x000C)
	float                                              DirectionalExplosionMinDot;                               // 0x025C(0x0004)
	struct FVector                                     ExplosionDirection;                                       // 0x0260(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionActor");
		return ptr;
	}


	void ChooseCameraShake();
	void DoExplosionCameraEffects();
	void Tick();
	void DoExplosionDamage();
	void DrawDebug();
	void Explode();
	void SpawnExplosionFogVolume();
	void SpawnExplosionDecal();
	void SpawnExplosionParticleSystem();
	void UpdateExplosionTemplateWithPerMaterialFX();
	void KnockdownPawn();
	void CringePawn();
	void DoCringesAndKnockdowns();
	void ShouldDoCringeFor();
	void DoBreakFracturedMeshes();
	void HurtExplosion();
	void IsBehindExplosion();
	void DoFullDamageToActor();
	void GetPhysicalMaterial();
	void PreBeginPlay();
};


// Class GameFramework.GameHUD
// 0x0000 (0x0948 - 0x0948)
class AGameHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameHUD");
		return ptr;
	}

};


// Class GameFramework.MobileHUD
// 0x003C (0x0984 - 0x0948)
class AMobileHUD : public AGameHUD
{
public:
	unsigned long                                      bForceMobileHUD : 1;                                      // 0x0948(0x0004)
	class UTexture2D*                                  ZoneBackgroundOn;                                         // 0x094C(0x0004)
	class UTexture2D*                                  ZoneBackgroundSmallOn;                                    // 0x0950(0x0004)
	class UTexture2D*                                  ZoneBackgroundTinyOn;                                     // 0x0954(0x0004)
	class UTexture2D*                                  FireZoneBackground;                                       // 0x0958(0x0004)
	class UTexture2D*                                  MoveZoneBackground;                                       // 0x095C(0x0004)
	class UTexture2D*                                  SteerZoneBackground;                                      // 0x0960(0x0004)
	struct FColor                                      ZoneTileColor;                                            // 0x0964(0x0004)
	struct FColor                                      ZoneTextColor;                                            // 0x0968(0x0004)
	class UTexture2D*                                  AnalogHat;                                                // 0x096C(0x0004)
	TArray<struct FMobileInputZone>                    MobileInputZones;                                         // 0x0970(0x000C)
	int                                                MobileInputConfig;                                        // 0x097C(0x0004)
	int                                                MobileInputConfigMAX;                                     // 0x0980(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.MobileHUD");
		return ptr;
	}


	void ResetMobileInputConfig();
	void NextMobileInputConfig();
	void DrawInputOverlays();
	void PostRender();
	void PostBeginPlay();
};


// Class GameFramework.GamePawn
// 0x0004 (0x048C - 0x0488)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                                  // 0x0488(0x0004)
	unsigned long                                      bRespondToExplosions : 1;                                 // 0x0488(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void UpdateShadowSettings();
	void Cringe();
	void ServerKnockdown();
	void GetTargetFrictionCylinder();
};


// Class GameFramework.GamePlayerController
// 0x0010 (0x0620 - 0x0610)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                                    // 0x0610(0x0004)
	unsigned long                                      bDebugCrowdAwareness : 1;                                 // 0x0610(0x0004)
	unsigned long                                      bIsWarmupPaused : 1;                                      // 0x0610(0x0004)
	float                                              AgentAwareRadius;                                         // 0x0614(0x0004)
	struct FName                                       CurrentSoundMode;                                         // 0x0618(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void ClientColorFade();
	void WarmupPause();
	void CanUnpauseWarmup();
	void GetCurrentMovie();
	void ClientStopMovie();
	void ClientPlayMovie();
	void STATIC_KeepPlayingLoadingMovie();
	void STATIC_ShowLoadingMovie();
	void GetCurrentSoundMode();
	void SetSoundMode();
	void DoForceFeedbackForScreenShake();
	void NotifyCrowdAgentInRadius();
	void NotifyCrowdAgentRefresh();
	void CrowdDebug();
	void CrowdToggle();
	void CrowdFocus();
	void GetUIPlayerIndex();
};


// Class GameFramework.GamePlayerInput
// 0x0000 (0x0170 - 0x0170)
class UGamePlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerInput");
		return ptr;
	}

};


// Class GameFramework.GameProjectile
// 0x0000 (0x025C - 0x025C)
class AGameProjectile : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameProjectile");
		return ptr;
	}

};


// Class GameFramework.GameVehicle
// 0x0000 (0x0618 - 0x0618)
class AGameVehicle : public ASVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameVehicle");
		return ptr;
	}

};


// Class GameFramework.GameWeapon
// 0x0000 (0x030C - 0x030C)
class AGameWeapon : public AWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWeapon");
		return ptr;
	}

};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0064 - 0x0050)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                                 // 0x0050(0x0004)
	struct FVector                                     OutOfViewLocation;                                        // 0x0054(0x000C)
	unsigned long                                      bShowDebug : 1;                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	void STATIC_MustBeHiddenFromThisPoint();
	void RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x0078 - 0x0050)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                                 // 0x0050(0x000C)
	struct FVector                                     Rotation;                                                 // 0x005C(0x000C)
	float                                              DistanceToCheck;                                          // 0x0068(0x0004)
	TArray<struct FVector>                             LocationsToCheck;                                         // 0x006C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		return ptr;
	}


	void Recycle();
	void STATIC_BiasAgainstPolysWithinDistanceOfLocations();
};


// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x010C - 0x00F8)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                                // 0x00F8(0x000C)
	int                                                StartOfRenderingMovieFrame;                               // 0x0104(0x0004)
	int                                                EndOfRenderingMovieFrame;                                 // 0x0108(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		return ptr;
	}

};


// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPct;                                                // 0x00E8(0x0004)
	unsigned long                                      bKillAgentsInstantly : 1;                                 // 0x00EC(0x0004)
	unsigned long                                      bClearOldArchetypes : 1;                                  // 0x00EC(0x0004)
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                           // 0x00F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle");
		return ptr;
	}


	void STATIC_GetObjClassVersion();
	void FindPopMgrTarget();
};


// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x011C - 0x00F8)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray<struct FName>                               AnimationList;                                            // 0x00F8(0x000C)
	float                                              BlendInTime;                                              // 0x0104(0x0004)
	float                                              BlendOutTime;                                             // 0x0108(0x0004)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x010C(0x0004)
	unsigned long                                      bFaceActionTargetFirst : 1;                               // 0x010C(0x0004)
	unsigned long                                      bLooping : 1;                                             // 0x010C(0x0004)
	unsigned long                                      bBlendBetweenAnims : 1;                                   // 0x010C(0x0004)
	int                                                LoopIndex;                                                // 0x0110(0x0004)
	float                                              LoopTime;                                                 // 0x0114(0x0004)
	class AActor*                                      ActionTarget;                                             // 0x0118(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_PlayAgentAnimation");
		return ptr;
	}


	void SetCurrentAnimationActionFor();
	void STATIC_GetObjClassVersion();
};


// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0140 - 0x00C4)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x00C4(0x0004)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x00C4(0x0004)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x00C4(0x0004)
	unsigned long                                      bApplyControl : 1;                                        // 0x00C4(0x0004)
	struct FRecoilDef                                  Recoil;                                                   // 0x00C8(0x0070)
	struct FVector2D                                   Aim;                                                      // 0x0138(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameCameraBase
// 0x0008 (0x0044 - 0x003C)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                             // 0x003C(0x0004)
	unsigned long                                      bResetCameraInterpolation : 1;                            // 0x0040(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCameraBase");
		return ptr;
	}


	void ModifyPostProcessSettings();
	void Init();
	void ProcessViewRotation();
	void UpdateCamera();
	void ResetInterpolation();
	void OnBecomeInActive();
	void OnBecomeActive();
};


// Class GameFramework.GameThirdPersonCamera
// 0x0134 (0x0178 - 0x0044)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	struct FVector                                     LastActualCameraOrigin;                                   // 0x0044(0x000C)
	float                                              WorstLocBlockedPct;                                       // 0x0050(0x0004)
	float                                              WorstLocPenetrationExtentScale;                           // 0x0054(0x0004)
	float                                              PenetrationBlendOutTime;                                  // 0x0058(0x0004)
	float                                              PenetrationBlendInTime;                                   // 0x005C(0x0004)
	float                                              PenetrationBlockedPct;                                    // 0x0060(0x0004)
	float                                              PenetrationExtentScale;                                   // 0x0064(0x0004)
	struct FVector                                     LastActualOriginOffset;                                   // 0x0068(0x000C)
	struct FRotator                                    LastActualCameraOriginRot;                                // 0x0074(0x000C)
	float                                              OriginOffsetInterpSpeed;                                  // 0x0080(0x0004)
	struct FVector                                     LastViewOffset;                                           // 0x0084(0x000C)
	float                                              LastCamFOV;                                               // 0x0090(0x0004)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                                    // 0x0094(0x0004)
	class UClass*                                      ThirdPersonCamDefaultClass;                               // 0x0098(0x0004)
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                           // 0x009C(0x0004)
	float                                              LastHeightAdjustment;                                     // 0x00A0(0x0004)
	float                                              LastPitchAdjustment;                                      // 0x00A4(0x0004)
	float                                              LastYawAdjustment;                                        // 0x00A8(0x0004)
	float                                              LeftoverPitchAdjustment;                                  // 0x00AC(0x0004)
	float                                              Focus_BackOffStrength;                                    // 0x00B0(0x0004)
	float                                              Focus_StepHeightAdjustment;                               // 0x00B4(0x0004)
	int                                                Focus_MaxTries;                                           // 0x00B8(0x0004)
	float                                              Focus_FastAdjustKickInTime;                               // 0x00BC(0x0004)
	float                                              LastFocusChangeTime;                                      // 0x00C0(0x0004)
	struct FVector                                     ActualFocusPointWorldLoc;                                 // 0x00C4(0x000C)
	struct FVector                                     LastFocusPointLoc;                                        // 0x00D0(0x000C)
	struct FCamFocusPointParams                        FocusPoint;                                               // 0x00DC(0x0034)
	unsigned long                                      bFocusPointSet : 1;                                       // 0x0110(0x0004)
	unsigned long                                      bFocusPointSuccessful : 1;                                // 0x0110(0x0004)
	unsigned long                                      bDoingACameraTurn : 1;                                    // 0x0110(0x0004)
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                         // 0x0110(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0110(0x0004)
	unsigned long                                      bDoingDirectLook : 1;                                     // 0x0110(0x0004)
	unsigned long                                      bDebugChangedCameraMode : 1;                              // 0x0110(0x0004)
	float                                              TurnCurTime;                                              // 0x0114(0x0004)
	int                                                TurnStartAngle;                                           // 0x0118(0x0004)
	int                                                TurnEndAngle;                                             // 0x011C(0x0004)
	float                                              TurnTotalTime;                                            // 0x0120(0x0004)
	float                                              TurnDelay;                                                // 0x0124(0x0004)
	int                                                LastPostCamTurnYaw;                                       // 0x0128(0x0004)
	int                                                DirectLookYaw;                                            // 0x012C(0x0004)
	float                                              DirectLookInterpSpeed;                                    // 0x0130(0x0004)
	float                                              WorstLocInterpSpeed;                                      // 0x0134(0x0004)
	struct FVector                                     LastWorstLocationLocal;                                   // 0x0138(0x000C)
	struct FVector                                     LastPreModifierCameraLoc;                                 // 0x0144(0x000C)
	struct FRotator                                    LastPreModifierCameraRot;                                 // 0x0150(0x000C)
	TArray<struct FPenetrationAvoidanceFeeler>         PenetrationAvoidanceFeelers;                              // 0x015C(0x000C)
	float                                              OffsetAdjustmentInterpSpeed;                              // 0x0168(0x0004)
	struct FVector                                     LastOffsetAdjustment;                                     // 0x016C(0x000C) (Parm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		return ptr;
	}


	void ResetInterpolation();
	void ModifyPostProcessSettings();
	void OnBecomeActive();
	void ProcessViewRotation();
	void UpdateCameraMode();
	void FindBestCameraMode();
	void AdjustFocusPointInterpolation();
	void GetActualFocusLocation();
	void UpdateFocusPoint();
	void ClearFocusPoint();
	void GetFocusActor();
	void SetFocusOnActor();
	void SetFocusOnLoc();
	void AdjustTurn();
	void EndTurn();
	void BeginTurn();
	void PlayerUpdateCamera();
	void UpdateCamera();
	void GetDesiredFOV();
	void Init();
	void Reset();
	void CreateCameraMode();
};


// Class GameFramework.GamePlayerCamera
// 0x0068 (0x0480 - 0x0418)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                           // 0x0418(0x0004)
	class UClass*                                      ThirdPersonCameraClass;                                   // 0x041C(0x0004)
	class UGameCameraBase*                             FixedCam;                                                 // 0x0420(0x0004)
	class UClass*                                      FixedCameraClass;                                         // 0x0424(0x0004)
	class UGameCameraBase*                             CurrentCamera;                                            // 0x0428(0x0004)
	unsigned long                                      bUseForcedCamFOV : 1;                                     // 0x042C(0x0004)
	unsigned long                                      bInterpolateCamChanges : 1;                               // 0x042C(0x0004)
	unsigned long                                      bResetInterp : 1;                                         // 0x042C(0x0004)
	float                                              ForcedCamFOV;                                             // 0x0430(0x0004)
	class AActor*                                      LastViewTarget;                                           // 0x0434(0x0004)
	float                                              SplitScreenShakeScale;                                    // 0x0438(0x0004)
	class AActor*                                      LastTargetBase;                                           // 0x043C(0x0004)
	struct FMatrix                                     LastTargetBaseTM;                                         // 0x0440(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		return ptr;
	}


	void AdjustFOVForViewport();
	void ProcessViewRotation();
	void ResetInterpolation();
	void SetColorScale();
	void DisplayDebug();
	void UpdateCameraLensEffects();
	void UpdateViewTarget();
	void ShouldConstrainAspectRatio();
	void FindBestCameraType();
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo();
	void CreateCamera();
};


// Class GameFramework.GameThirdPersonCameraMode
// 0x01EC (0x0228 - 0x003C)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                           // 0x003C(0x0004)
	float                                              FOVAngle;                                                 // 0x0040(0x0004)
	float                                              BlendTime;                                                // 0x0044(0x0004)
	unsigned long                                      bLockedToViewTarget : 1;                                  // 0x0048(0x0004)
	unsigned long                                      bDirectLook : 1;                                          // 0x0048(0x0004)
	unsigned long                                      bFollowTarget : 1;                                        // 0x0048(0x0004)
	unsigned long                                      bInterpLocation : 1;                                      // 0x0048(0x0004)
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                           // 0x0048(0x0004)
	unsigned long                                      bInterpRotation : 1;                                      // 0x0048(0x0004)
	unsigned long                                      bRotInterpSpeedConstant : 1;                              // 0x0048(0x0004)
	unsigned long                                      bDoPredictiveAvoidance : 1;                               // 0x0048(0x0004)
	unsigned long                                      bValidateWorstLoc : 1;                                    // 0x0048(0x0004)
	unsigned long                                      bSkipCameraCollision : 1;                                 // 0x0048(0x0004)
	unsigned long                                      bAdjustDOF : 1;                                           // 0x0048(0x0004)
	unsigned long                                      bDOFUpdated : 1;                                          // 0x0048(0x0004)
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;                // 0x0048(0x0004)
	float                                              FollowingInterpSpeed_Pitch;                               // 0x004C(0x0004)
	float                                              FollowingInterpSpeed_Yaw;                                 // 0x0050(0x0004)
	float                                              FollowingInterpSpeed_Roll;                                // 0x0054(0x0004)
	float                                              FollowingCameraVelThreshold;                              // 0x0058(0x0004)
	float                                              OriginLocInterpSpeed;                                     // 0x005C(0x0004)
	struct FVector                                     PerAxisOriginLocInterpSpeed;                              // 0x0060(0x000C)
	float                                              OriginRotInterpSpeed;                                     // 0x006C(0x0004)
	struct FVector                                     StrafeLeftAdjustment;                                     // 0x0070(0x000C)
	struct FVector                                     StrafeRightAdjustment;                                    // 0x007C(0x000C)
	float                                              StrafeOffsetScalingThreshold;                             // 0x0088(0x0004)
	float                                              StrafeOffsetInterpSpeedIn;                                // 0x008C(0x0004)
	float                                              StrafeOffsetInterpSpeedOut;                               // 0x0090(0x0004)
	struct FVector                                     LastStrafeOffset;                                         // 0x0094(0x000C)
	struct FVector                                     RunFwdAdjustment;                                         // 0x00A0(0x000C)
	struct FVector                                     RunBackAdjustment;                                        // 0x00AC(0x000C)
	float                                              RunOffsetScalingThreshold;                                // 0x00B8(0x0004)
	float                                              RunOffsetInterpSpeedIn;                                   // 0x00BC(0x0004)
	float                                              RunOffsetInterpSpeedOut;                                  // 0x00C0(0x0004)
	struct FVector                                     LastRunOffset;                                            // 0x00C4(0x000C)
	struct FVector                                     WorstLocOffset;                                           // 0x00D0(0x000C)
	struct FVector                                     TargetRelativeCameraOriginOffset;                         // 0x00DC(0x000C)
	struct FViewOffsetData                             ViewOffset;                                               // 0x00E8(0x0024)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[0x6];                      // 0x010C(0x0024)
	float                                              DOF_FalloffExponent;                                      // 0x01E4(0x0004)
	float                                              DOF_BlurKernelSize;                                       // 0x01E8(0x0004)
	float                                              DOF_FocusInnerRadius;                                     // 0x01EC(0x0004)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x01F0(0x0004)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x01F4(0x0004)
	float                                              LastDOFRadius;                                            // 0x01F8(0x0004)
	float                                              LastDOFDistance;                                          // 0x01FC(0x0004)
	float                                              DOFDistanceInterpSpeed;                                   // 0x0200(0x0004)
	struct FVector                                     DOFTraceExtent;                                           // 0x0204(0x000C)
	float                                              DOF_RadiusFalloff;                                        // 0x0210(0x0004)
	struct FVector2D                                   DOF_RadiusRange;                                          // 0x0214(0x0008)
	struct FVector2D                                   DOF_RadiusDistRange;                                      // 0x021C(0x0008)
	float                                              ViewOffsetInterp;                                         // 0x0224(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		return ptr;
	}


	void SetViewOffset();
	void ModifyPostProcessSettings();
	void UpdatePostProcess();
	void DOFTrace();
	void GetDOFFocusLoc();
	void ProcessViewRotation();
	void SetFocusPoint();
	void GetCameraWorstCaseLoc();
	void GetDesiredFOV();
	void AdjustViewOffset();
	void OnBecomeInActive();
	void OnBecomeActive();
};


// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000C (0x0234 - 0x0228)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                                    // 0x0228(0x0004)
	unsigned long                                      bTemporaryOriginRotInterp : 1;                            // 0x022C(0x0004)
	float                                              TemporaryOriginRotInterpSpeed;                            // 0x0230(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		return ptr;
	}

};


// Class GameFramework.GameDecal
// 0x0008 (0x02F4 - 0x02EC)
class UGameDecal : public UDecalComponent
{
public:
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                               // 0x02EC(0x0004)
	class APawn*                                       Instigator;                                               // 0x02F0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDecal");
		return ptr;
	}

};


// Class GameFramework.GameDecalManager
// 0x0004 (0x0250 - 0x024C)
class AGameDecalManager : public ADecalManager
{
public:
	float                                              MinDecalDistanceSq;                                       // 0x024C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameDecalManager");
		return ptr;
	}


	void SpawnDecalMinimal();
	void IsTooCloseToActiveDecal();
};


// Class GameFramework.GameParticleEventManager
// 0x0000 (0x021C - 0x021C)
class AGameParticleEventManager : public AParticleEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameParticleEventManager");
		return ptr;
	}


	void HandleParticleModuleEventSendToGame();
};


// Class GameFramework.GameSpecialMove
// 0x0040 (0x007C - 0x003C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                                // 0x003C(0x0004)
	struct FName                                       Handle;                                                   // 0x0040(0x0008)
	float                                              LastCanDoSpecialMoveTime;                                 // 0x0048(0x0004)
	unsigned long                                      bLastCanDoSpecialMove : 1;                                // 0x004C(0x0004)
	unsigned long                                      bReachPreciseDestination : 1;                             // 0x004C(0x0004)
	unsigned long                                      bReachedPreciseDestination : 1;                           // 0x004C(0x0004)
	unsigned long                                      bReachPreciseRotation : 1;                                // 0x004C(0x0004)
	unsigned long                                      bReachedPreciseRotation : 1;                              // 0x004C(0x0004)
	unsigned long                                      bForcePrecisePosition : 1;                                // 0x004C(0x0004)
	struct FVector                                     PreciseDestination;                                       // 0x0050(0x000C)
	class AActor*                                      PreciseDestBase;                                          // 0x005C(0x0004)
	struct FVector                                     PreciseDestRelOffset;                                     // 0x0060(0x000C)
	float                                              PreciseRotationInterpolationTime;                         // 0x006C(0x0004)
	struct FRotator                                    PreciseRotation;                                          // 0x0070(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSpecialMove");
		return ptr;
	}


	void RelativeToWorldOffset();
	void WorldToRelativeOffset();
	void ForcePawnRotation();
	void MessageEvent();
	void ResetFacePreciseRotation();
	void ReachedPrecisePosition();
	void SetFacePreciseRotation();
	void SetReachPreciseDestination();
	void ShouldReplicate();
	void SpecialMoveFlagsUpdated();
	void Tick();
	void SpecialMoveEnded();
	void SpecialMoveStarted();
	void InternalCanDoSpecialMove();
	void CanDoSpecialMove();
	void CanOverrideSpecialMove();
	void CanOverrideMoveWith();
	void CanChainMove();
	void ExtractSpecialMoveFlags();
	void InitSpecialMoveFlags();
	void InitSpecialMove();
};


// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnerInterface");
		return ptr;
	}


	void AddToAgentPool();
	void AgentDestroyed();
};


// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		return ptr;
	}


	void GetSpawnPosition();
};


// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x02B4 - 0x02B4)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		return ptr;
	}

};


// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0048 - 0x003C)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray<struct FAgentArchetypeInfo>                 ListOfAgents;                                             // 0x003C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		return ptr;
	}

};


// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x02B4 - 0x02B4)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		return ptr;
	}

};


// Class GameFramework.GameExplosionContent
// 0x0048 (0x0084 - 0x003C)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                             // 0x003C(0x0004)
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;                   // 0x003C(0x0004)
	class USoundCue*                                   ExplosionSound;                                           // 0x0040(0x0004)
	class UCameraShake*                                CamShake;                                                 // 0x0044(0x0004)
	class UCameraShake*                                CamShake_Left;                                            // 0x0048(0x0004)
	class UCameraShake*                                CamShake_Right;                                           // 0x004C(0x0004)
	class UCameraShake*                                CamShake_Rear;                                            // 0x0050(0x0004)
	float                                              CamShakeInnerRadius;                                      // 0x0054(0x0004)
	float                                              CamShakeOuterRadius;                                      // 0x0058(0x0004)
	float                                              CamShakeFalloff;                                          // 0x005C(0x0004)
	class UClass*                                      CameraLensEffect;                                         // 0x0060(0x0004)
	float                                              CameraLensEffectRadius;                                   // 0x0064(0x0004)
	class UPointLightComponent*                        ExploLight;                                               // 0x0068(0x0004)
	float                                              ExploLightFadeOutTime;                                    // 0x006C(0x0004)
	class URadialBlurComponent*                        ExploRadialBlur;                                          // 0x0070(0x0004)
	float                                              ExploRadialBlurFadeOutTime;                               // 0x0074(0x0004)
	float                                              ExploRadialBlurMaxBlur;                                   // 0x0078(0x0004)
	class UParticleSystem*                             ParticleEmitterTemplate;                                  // 0x007C(0x0004)
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                                       // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameExplosionContent");
		return ptr;
	}

};


// Class GameFramework.GameFixedCamera
// 0x0004 (0x0048 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                               // 0x0044(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameFixedCamera");
		return ptr;
	}


	void OnBecomeActive();
	void UpdateCamera();
};


// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x0308 - 0x0308)
class AGameKActorSpawnableEffect : public AKActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		return ptr;
	}


	void Tick();
	void FellOutOfWorld();
	void PostBeginPlay();
};


// Class GameFramework.GameWaveForms
// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                                   // 0x003C(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                                    // 0x0040(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                                      // 0x0044(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                                       // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWaveForms");
		return ptr;
	}

};


// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                            // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
