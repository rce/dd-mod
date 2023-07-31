#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AddRandomizeValues
struct UHeroEquipment_Familiar_CoreHealer_AddRandomizeValues_Params
{
	float                                              equipmentQuality;                                         // (Parm)
	bool                                               doResetStatsToTemplate;                                   // (OptionalParm, Parm)
	bool                                               bDontUseMissionRandomizerMultiplier;                      // (OptionalParm, Parm)
	float                                              RandomizerMultiplierOverride;                             // (OptionalParm, Parm)
	bool                                               bIsForShop;                                               // (OptionalParm, Parm)
	bool                                               bAllowTranscendentGear;                                   // (OptionalParm, Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetStatLevelUpAmountIterations
struct UHeroEquipment_Familiar_CoreHealer_GetStatLevelUpAmountIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetNextStatLevelUpValue
struct UHeroEquipment_Familiar_CoreHealer_GetNextStatLevelUpValue_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	bool                                               SetAsValue;                                               // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.InitFromNetInfo
struct UHeroEquipment_Familiar_CoreHealer_InitFromNetInfo_Params
{
	struct FEquipmentNetInfo                           Info;                                                     // (Parm, NeedCtorLink)
	class UObject*                                     fromDroppedEquipment;                                     // (OptionalParm, Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.CheckStatLevelUpIterations
struct UHeroEquipment_Familiar_CoreHealer_CheckStatLevelUpIterations_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (Parm)
	int                                                EquipmentLevelToCheck;                                    // (Parm)
	float                                              Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AllowStatLevelUp
struct UHeroEquipment_Familiar_CoreHealer_AllowStatLevelUp_Params
{
	TEnumAsByte<EEquipmentStatType>                    EQS;                                                      // (Parm)
	int                                                statSubIndex;                                             // (OptionalParm, Parm)
	bool                                               IsInForgeUI;                                              // (OptionalParm, Parm)
	bool                                               bIgnoreManaRequirement;                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetWeaponDamage
struct UHeroEquipment_Familiar_CoreHealer_GetWeaponDamage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ApplyPrimaryDamageMultiplierDisplay
struct UHeroEquipment_Familiar_CoreHealer_ApplyPrimaryDamageMultiplierDisplay_Params
{
	int                                                StatValue;                                                // (Parm, OutParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatValue
struct UHeroEquipment_Familiar_CoreHealer_GetEquipmentStatValue_Params
{
	TEnumAsByte<EEquipmentStatType>                    equipmentStatType;                                        // (Parm)
	bool                                               returnFinalAddedValue;                                    // (OptionalParm, Parm)
	bool                                               includeStatLevelUp;                                       // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.NotifyEquipment_PawnAttacked
struct UHeroEquipment_Familiar_CoreHealer_NotifyEquipment_PawnAttacked_Params
{
	int                                                FireMode;                                                 // (Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredSphereRotationalPlacement
struct UHeroEquipment_Familiar_CoreHealer_GetDesiredSphereRotationalPlacement_Params
{
	class USkeletalMeshComponent*                      myMeshComp;                                               // (Parm, EditInline)
	class ADunDefPlayer*                               myPlayer;                                                 // (Parm)
	unsigned char                                      HasTarget;                                                // (Parm, OutParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetDesiredDirection
struct UHeroEquipment_Familiar_CoreHealer_GetDesiredDirection_Params
{
	class USkeletalMeshComponent*                      myMeshComp;                                               // (Parm, EditInline)
	class ADunDefPlayer*                               myPlayer;                                                 // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetAttackInterval
struct UHeroEquipment_Familiar_CoreHealer_GetAttackInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealAmount
struct UHeroEquipment_Familiar_CoreHealer_GetHealAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetManaCost
struct UHeroEquipment_Familiar_CoreHealer_GetManaCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetHealRangeSq
struct UHeroEquipment_Familiar_CoreHealer_GetHealRangeSq_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.GetEquipmentStatName
struct UHeroEquipment_Familiar_CoreHealer_GetEquipmentStatName_Params
{
	TEnumAsByte<EEquipmentStatType>                    equipmentStatType;                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateAI
struct UHeroEquipment_Familiar_CoreHealer_UpdateAI_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.TickedByPawn
struct UHeroEquipment_Familiar_CoreHealer_TickedByPawn_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.UpdateRotation
struct UHeroEquipment_Familiar_CoreHealer_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.ShutDown
struct UHeroEquipment_Familiar_CoreHealer_ShutDown_Params
{
	bool                                               isDestruction;                                            // (OptionalParm, Parm)
};

// Function CDT4.HeroEquipment_Familiar_CoreHealer.AttachedComponent
struct UHeroEquipment_Familiar_CoreHealer_AttachedComponent_Params
{
	class UPrimitiveComponent*                         aComp;                                                    // (Parm, EditInline)
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.GetBestTarget
struct UHeroEquipment_Familiar_MiniQueen_GetBestTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginRangedAttack
struct UHeroEquipment_Familiar_MiniQueen_BeginRangedAttack_Params
{
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.BeginMeleeAttack
struct UHeroEquipment_Familiar_MiniQueen_BeginMeleeAttack_Params
{
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.CanWebTarget
struct UHeroEquipment_Familiar_MiniQueen_CanWebTarget_Params
{
	TScriptInterface<class UDunDefTargetableInterface> Target;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CDT4.HeroEquipment_Familiar_MiniQueen.UpdateAI
struct UHeroEquipment_Familiar_MiniQueen_UpdateAI_Params
{
	class ADunDefPlayer*                               PlayerOwner;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
