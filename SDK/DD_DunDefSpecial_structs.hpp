#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_CTF_MAX_TEAMS                                      2
#define CONST_NUMWHEELS                                          3
#define CONST_MARGIN                                             64
#define CONST_FORCE_UPDATE_FREQUENCY                             180
#define CONST_NUMGLYPHS                                          5

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DunDefSpecial.DunDefPlayer_DualMelee.Stances
enum class EStances : uint8_t
{
	ST_DEFAULT                     = 0,
	ST_LIGHTNING                   = 1,
	ST_SIPHON                      = 2,
	ST_TURTLE                      = 3,
	ST_HAWK                        = 4,
	ST_TORNADO                     = 5,
	ST_MAX                         = 6
};


// Enum DunDefSpecial.DunDefPlayerAbility_SummonCommand.SummonedCommand
enum class ESummonedCommand : uint8_t
{
	CMD_IDLE                       = 0,
	CMD_FOLLOW                     = 1,
	CMD_ATTACK                     = 2,
	CMD_MOVE_DEFENSIVE             = 3,
	CMD_HOLD_DEFENSIVE             = 4,
	CMD_MOVE_OFFENSIVE             = 5,
	CMD_HOLD_OFFENSIVE             = 6,
	CMD_MAX                        = 7
};


// Enum DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.EGlyphs
enum class EGlyphs : uint8_t
{
	EG_ENEMY                       = 0,
	EG_SWORD                       = 1,
	EG_POTION                      = 2,
	EG_MANATOKEN                   = 3,
	EG_CRYSTALCORE                 = 4,
	EG_MAX                         = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefSpecial.DunDefTower_SummonEnemy.SummonedBoosts
// 0x0024
struct FSummonedBoosts
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              boostExp;                                                 // 0x0004(0x0004)
	float                                              boostBaseValue;                                           // 0x0008(0x0004)
	TEnumAsByte<ELevelUpValueType>                     levelUpStat;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bInvertValue : 1;                                         // 0x0010(0x0004)
	TArray<float>                                      UpgradeLinearBoostMultipliers;                            // 0x0014(0x000C)
	unsigned long                                      bDisplayToolTip : 1;                                      // 0x0020(0x0004)
};

// ScriptStruct DunDefSpecial.CTF_DDGRI.CTFTeamData
// 0x0034
struct FCTFTeamData
{
	int                                                TeamScore;                                                // 0x0000(0x0004)
	int                                                TeamTowerUnits;                                           // 0x0004(0x0004)
	struct FColor                                      TeamColor;                                                // 0x0008(0x0004)
	struct FLinearColor                                TeamLinearColor;                                          // 0x000C(0x0010)
	struct FString                                     TeamName;                                                 // 0x001C(0x000C)
	TArray<class APlayerReplicationInfo*>              TeamPlayers;                                              // 0x0028(0x000C)
};

// ScriptStruct DunDefSpecial.DunDef_VerticalTowerMover.TowerInfo
// 0x0008
struct FTowerInfo
{
	class ADunDefTower*                                Tower;                                                    // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct DunDefSpecial.DunDef_VerticalTowerMover.PlatformInfo
// 0x0014
struct FPlatformInfo
{
	class AInterpActor*                                Platform;                                                 // 0x0000(0x0004)
	float                                              OldZCoordinate;                                           // 0x0004(0x0004)
	TArray<struct FTowerInfo>                          TowerCache;                                               // 0x0008(0x000C)
};

// ScriptStruct DunDefSpecial.DunDefTower_TripWire.BeamTrippers
// 0x001C
struct FBeamTrippers
{
	class AActor*                                      BeamTripper;                                              // 0x0000(0x0004)
	class UParticleSystemComponent*                    stunnedComponent;                                         // 0x0004(0x0004)
	float                                              LastTripTime;                                             // 0x0008(0x0004)
	float                                              StunTime;                                                 // 0x000C(0x0004)
	unsigned long                                      bIsStunned : 1;                                           // 0x0010(0x0004)
	class AActor*                                      AltBeamTripper;                                           // 0x0014(0x0004)
	class UParticleSystemComponent*                    stunnedAltComponent;                                      // 0x0018(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_Delivery.Times
// 0x000C
struct FTimes
{
	TArray<float>                                      waveNumber;                                               // 0x0000(0x000C)
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_Delivery.PerDifficulty
// 0x000C
struct FPerDifficulty
{
	TArray<float>                                      theDifficulty;                                            // 0x0000(0x000C)
};

// ScriptStruct DunDefSpecial.DunDefMapInfo_KillEnemiesTimeLimit.TimeLimitAddition
// 0x0010
struct FTimeLimitAddition
{
	int                                                Temp;                                                     // 0x0000(0x0004)
	TArray<float>                                      PlayerIndexTimeLimitAddition;                             // 0x0004(0x000C)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_StanceBase.StatMultipliers
// 0x0010
struct FStatMultipliers
{
	unsigned long                                      bInverseMult : 1;                                         // 0x0000(0x0004)
	float                                              theMultiplier;                                            // 0x0004(0x0004)
	float                                              HeroStatExponent;                                         // 0x0008(0x0004)
	unsigned long                                      bUseAsPrimary : 1;                                        // 0x000C(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_LeapSlam.HitTarget
// 0x0008
struct ADunDefPlayerAbility_LeapSlam_FHitTarget
{
	float                                              LastHitTime;                                              // 0x0000(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0004(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_BuilTripWire.PreviewPoint
// 0x0010
struct FPreviewPoint
{
	class USkeletalMeshComponent*                      PreviewMeshes;                                            // 0x0000(0x0004)
	struct FVector                                     PlacementPoint;                                           // 0x0004(0x000C)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_GenericMultiActorSpawner.SpawnSettings
// 0x001C
struct FSpawnSettings
{
	struct FRotator                                    RotationOffset;                                           // 0x0000(0x000C)
	struct FVector                                     LocationOffset;                                           // 0x000C(0x000C)
	class AActor*                                      SpawnActorTemplate;                                       // 0x0018(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_SlamDash.HitTarget
// 0x0008
struct ADunDefPlayerAbility_SlamDash_FHitTarget
{
	float                                              LastHitTime;                                              // 0x0000(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0004(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_StanceLightning.StunnedActors
// 0x000C
struct FStunnedActors
{
	class ADunDefEnemy*                                stunnedEnemy;                                             // 0x0000(0x0004)
	class UParticleSystemComponent*                    stunnedComponent;                                         // 0x0004(0x0004)
	float                                              stunnedStartTime;                                         // 0x0008(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GlyphPattern
// 0x0080
struct FGlyphPattern
{
	struct FString                                     Description;                                              // 0x0000(0x000C)
	TEnumAsByte<EGlyphs>                               glyph[0x3];                                               // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	unsigned long                                      bAffectsPlayers : 1;                                      // 0x0010(0x0004)
	unsigned long                                      bAffectsTowers : 1;                                       // 0x0010(0x0004)
	unsigned long                                      bAffectsEnemies : 1;                                      // 0x0010(0x0004)
	unsigned long                                      bAffectsAllies : 1;                                       // 0x0010(0x0004)
	unsigned long                                      bAffectsNonAllies : 1;                                    // 0x0010(0x0004)
	unsigned long                                      bPositiveBoost : 1;                                       // 0x0010(0x0004)
	TArray<TEnumAsByte<EPawnBoostType>>                boostTypes;                                               // 0x0014(0x000C)
	float                                              PctToAffect;                                              // 0x0020(0x0004)
	float                                              PctToAffectExp;                                           // 0x0024(0x0004)
	float                                              PctToAffectMax;                                           // 0x0028(0x0004)
	unsigned long                                      PctToAffectInvert : 1;                                    // 0x002C(0x0004)
	float                                              dmgBoost;                                                 // 0x0030(0x0004)
	float                                              dmgBoostExp;                                              // 0x0034(0x0004)
	unsigned long                                      resistanceBoostInvert : 1;                                // 0x0038(0x0004)
	unsigned long                                      dmgBoostInvert : 1;                                       // 0x0038(0x0004)
	float                                              resistanceBoost;                                          // 0x003C(0x0004)
	float                                              resistanceBoostExp;                                       // 0x0040(0x0004)
	float                                              ActiveTime;                                               // 0x0044(0x0004)
	unsigned long                                      bHealthAsDmg : 1;                                         // 0x0048(0x0004)
	float                                              HealthModifyPct;                                          // 0x004C(0x0004)
	float                                              HealthPctToHealExp;                                       // 0x0050(0x0004)
	float                                              HealthMaxHealPct;                                         // 0x0054(0x0004)
	class UClass*                                      dmgType;                                                  // 0x0058(0x0004)
	TArray<class UClass*>                              disableAbilitiesofType;                                   // 0x005C(0x000C)
	unsigned long                                      SPEC_DoTowerLevels : 1;                                   // 0x0068(0x0004)
	unsigned long                                      SPEC_DownGradeTower : 1;                                  // 0x0068(0x0004)
	int                                                SPEC_numTowersToLevel;                                    // 0x006C(0x0004)
	int                                                SPEC_towerUpgradeLevel;                                   // 0x0070(0x0004)
	unsigned long                                      SPEC_GoldEnemies : 1;                                     // 0x0074(0x0004)
	unsigned long                                      SPEC_StunEnemies : 1;                                     // 0x0074(0x0004)
	unsigned long                                      SPEC_TimeDilation : 1;                                    // 0x0074(0x0004)
	float                                              SPEC_TimeDilationAmt;                                     // 0x0078(0x0004)
	class USoundCue*                                   patternSound;                                             // 0x007C(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPlayerAbility_WheeloFortuna.GlyphIcon
// 0x0020
struct FGlyphIcon
{
	float                                              CurrentValue;                                             // 0x0000(0x0004)
	unsigned long                                      bStopped : 1;                                             // 0x0004(0x0004)
	TEnumAsByte<EGlyphs>                               glyphWheelSlots[0x5];                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              spinSpeed;                                                // 0x0010(0x0004)
	struct FName                                       ParamName;                                                // 0x0014(0x0008)
	unsigned long                                      bScrollDown : 1;                                          // 0x001C(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefPurifyingBomb.BonusDamageType
// 0x0008
struct FBonusDamageType
{
	TEnumAsByte<EnemyClassification>                   ClassificationType;                                       // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BonusMult;                                                // 0x0004(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefTower_Present.spawnChances
// 0x0014
struct FspawnChances
{
	class AActor*                                      ActorArchetype;                                           // 0x0000(0x0004)
	float                                              chanceToSpawnActor;                                       // 0x0004(0x0004)
	int                                                minNumToSpawn;                                            // 0x0008(0x0004)
	int                                                maxNumToSpawn;                                            // 0x000C(0x0004)
	unsigned long                                      bUsed : 1;                                                // 0x0010(0x0004)
};

// ScriptStruct DunDefSpecial.DunDefTower_Present.spawnTypes
// 0x0020
struct FspawnTypes
{
	TArray<struct FspawnChances>                       spawnType;                                                // 0x0000(0x000C)
	float                                              spawnTypeChance;                                          // 0x000C(0x0004)
	struct FString                                     StatDisplayName;                                          // 0x0010(0x000C)
	unsigned long                                      bDoManaSpawn : 1;                                         // 0x001C(0x0004)
	unsigned long                                      bSpawnDroppedEquipment : 1;                               // 0x001C(0x0004)
	unsigned long                                      bFailed : 1;                                              // 0x001C(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
