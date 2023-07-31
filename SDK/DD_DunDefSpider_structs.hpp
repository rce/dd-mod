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

// ScriptStruct DunDefSpider.DunDefWebProjectile.WebbedActor
// 0x0008
struct FWebbedActor
{
	class AActor*                                      TheActor;                                                 // 0x0000(0x0004)
	class UParticleSystemComponent*                    theEffectComponent;                                       // 0x0004(0x0004)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.WaveKillCounts
// 0x000C
struct FWaveKillCounts
{
	TArray<int>                                        KillCountsPerWave;                                        // 0x0000(0x000C)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_VDay.EnemyGenderOverride
// 0x000C
struct FEnemyGenderOverride
{
	class ADunDefEnemy*                                OriginalArchetype;                                        // 0x0000(0x0004)
	class ADunDefEnemy*                                ReplacementGenderArchetypeBoy;                            // 0x0004(0x0004)
	class ADunDefEnemy*                                ReplacementGenderArchetypeGirl;                           // 0x0008(0x0004)
};

// ScriptStruct DunDefSpider.DunDefMapInfo_PortalDefense.MinMaxValues
// 0x0008
struct FMinMaxValues
{
	float                                              MinValue;                                                 // 0x0000(0x0004)
	float                                              MaxValue;                                                 // 0x0004(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
