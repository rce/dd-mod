#pragma once

// Dungeon Defenders (9.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CDT7.HeroEquipment_Familiar_TowerDamageScaling.DelayedShot
// 0x0024
struct UHeroEquipment_Familiar_TowerDamageScaling_FDelayedShot
{
	float                                              Timer;                                                    // 0x0000(0x0004)
	class ADunDefProjectile*                           Projectile;                                               // 0x0004(0x0004)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	struct FVector                                     Direction;                                                // 0x0014(0x000C)
	float                                              Damage;                                                   // 0x0020(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
