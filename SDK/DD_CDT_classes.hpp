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

// Class CDT.DunDefHarbinger
// 0x0034 (0x0D00 - 0x0CCC)
class ADunDefHarbinger : public ADunDefEnemy
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
		static auto ptr = UObject::FindClass("Class CDT.DunDefHarbinger");
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


// Class CDT.DunDefHarbingerController
// 0x000C (0x0644 - 0x0638)
class ADunDefHarbingerController : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                                       // 0x0638(0x0004)
	float                                              AimRandomSpreadPitch;                                     // 0x063C(0x0004)
	class UDunDefBuff_Harbinger*                       BuffTemplate;                                             // 0x0640(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT.DunDefHarbingerController");
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
