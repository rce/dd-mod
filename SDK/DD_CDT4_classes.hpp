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

// Class CDT4.HeroEquipment_Familiar_CoreHealer
// 0x008C (0x0B7C - 0x0AF0)
class UHeroEquipment_Familiar_CoreHealer : public UHeroEquipment_Familiar
{
public:
	float                                              ManaCostStatBase;                                         // 0x0AF0(0x0004)
	float                                              ManaCostMultiplier;                                       // 0x0AF4(0x0004)
	float                                              ManaCostExponent;                                         // 0x0AF8(0x0004)
	float                                              ManaCostMin;                                              // 0x0AFC(0x0004)
	float                                              ManaCostMax;                                              // 0x0B00(0x0004)
	float                                              HealAmountBase;                                           // 0x0B04(0x0004)
	float                                              HealAmountMultiplier;                                     // 0x0B08(0x0004)
	float                                              HealAmountExtraMultiplier;                                // 0x0B0C(0x0004)
	float                                              HealAmountMaxPercent;                                     // 0x0B10(0x0004)
	float                                              MinimumCoreHealthPercent;                                 // 0x0B14(0x0004)
	float                                              HealInterval;                                             // 0x0B18(0x0004)
	float                                              HealRangeBase;                                            // 0x0B1C(0x0004)
	float                                              HealRangeStatBase;                                        // 0x0B20(0x0004)
	float                                              HealRangeStatMultiplier;                                  // 0x0B24(0x0004)
	float                                              HealRangeStatExponent;                                    // 0x0B28(0x0004)
	float                                              HealRangeMaxEffectiveStat;                                // 0x0B2C(0x0004)
	float                                              NightmareHealingMultiplier;                               // 0x0B30(0x0004)
	float                                              RotationSpeed;                                            // 0x0B34(0x0004)
	class ADunDefEmitterSpawnable*                     CoreHealEffect;                                           // 0x0B38(0x0004)
	unsigned long                                      bHealInCombatPhaseOnly : 1;                               // 0x0B3C(0x0004)
	unsigned long                                      bDebug : 1;                                               // 0x0B3C(0x0004)
	struct FString                                     StringHealAmount;                                         // 0x0B40(0x000C)
	struct FString                                     StringHealSpeed;                                          // 0x0B4C(0x000C)
	struct FString                                     StringHealRange;                                          // 0x0B58(0x000C)
	float                                              LastHealTime;                                             // 0x0B64(0x0004)
	TScriptInterface<class UDunDefTargetableInterface> BestTargetRef;                                            // 0x0B68(0x0008)
	struct FRotator                                    CurrentRotation;                                          // 0x0B70(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT4.HeroEquipment_Familiar_CoreHealer");
		return ptr;
	}


	void AddRandomizeValues();
	void GetStatLevelUpAmountIterations();
	void GetNextStatLevelUpValue();
	void InitFromNetInfo();
	void CheckStatLevelUpIterations();
	void AllowStatLevelUp();
	void GetWeaponDamage();
	void ApplyPrimaryDamageMultiplierDisplay();
	void GetEquipmentStatValue();
	void NotifyEquipment_PawnAttacked();
	void GetDesiredSphereRotationalPlacement();
	void GetDesiredDirection();
	void GetAttackInterval();
	void GetHealAmount();
	void GetManaCost();
	void GetHealRangeSq();
	void GetEquipmentStatName();
	void UpdateAI();
	void TickedByPawn();
	void UpdateRotation();
	void ShutDown();
	void AttachedComponent();
};


// Class CDT4.HeroEquipment_Familiar_MiniQueen
// 0x0008 (0x0C54 - 0x0C4C)
class UHeroEquipment_Familiar_MiniQueen : public UHeroEquipment_Familiar_Melee
{
public:
	float                                              WebOverrideRange;                                         // 0x0C4C(0x0004)
	unsigned long                                      bNextAttackRanged : 1;                                    // 0x0C50(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT4.HeroEquipment_Familiar_MiniQueen");
		return ptr;
	}


	void GetBestTarget();
	void BeginRangedAttack();
	void BeginMeleeAttack();
	void CanWebTarget();
	void UpdateAI();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
