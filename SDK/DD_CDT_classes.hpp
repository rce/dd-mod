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
	struct FName                                       ShootFireAnimation;                                       // 0x0CCC(0x0008) (Edit)
	struct FName                                       ChargeAnimationName;                                      // 0x0CD4(0x0008) (Edit)
	struct FName                                       ProjectileSpawnSocketNameLeft;                            // 0x0CDC(0x0008) (Edit)
	struct FName                                       ProjectileSpawnSocketNameRight;                           // 0x0CE4(0x0008) (Edit)
	struct FName                                       GloveEffectSocketName;                                    // 0x0CEC(0x0008) (Edit)
	class UParticleSystemComponent*                    FireGloveEffectComponent;                                 // 0x0CF4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    AuraEffectComponent;                                      // 0x0CF8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    FiringAuraEffect;                                         // 0x0CFC(0x0004) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT.DunDefHarbinger");
		return ptr;
	}


	void FireAttackShootRight();
	void FireAttackShootLeft();
	void FireAttackBegin();
	void PostBeginPlay();
	void GetProjectileSpawnTransformation(const struct FName& socketToUse, struct FVector* Position, struct FRotator* Orientation);
	bool IsCurrentlyPlayingAttackAnimation();
	float PlayShootFireAnimation();
	bool IsCurrentlyPlayingChargeAnimation();
	float PlayChargeFireAnimation();
	void PlayHurtAnimation(class UClass* DamageType, const struct FVector& HitLocation);
	void PlayJumpAnimation();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, bool boolParam1, bool boolParam2, bool boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class CDT.DunDefHarbingerController
// 0x000C (0x0644 - 0x0638)
class ADunDefHarbingerController : public ADunDefDarkElfController
{
public:
	float                                              AimRandomSpreadYaw;                                       // 0x0638(0x0004) (Edit)
	float                                              AimRandomSpreadPitch;                                     // 0x063C(0x0004) (Edit)
	class UDunDefBuff_Harbinger*                       BuffTemplate;                                             // 0x0640(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT.DunDefHarbingerController");
		return ptr;
	}


	void PawnDied(class APawn* inPawn);
	void CheckPlayer(class ADunDefPlayer* aPlayer);
	void CheckForNearbyPlayers();
	void ObstructionJump(const struct FVector& jumpForwardDir, const struct FVector& jumpSideDir);
	void NotifyTakeHitEX(class AController* InstigatedBy, const struct FVector& HitLocation, int Damage, class UClass* DamageType, const struct FVector& Momentum, class AActor* DamageCauser);
	void PostBeginPlay();
	void FireProjectiles(const struct FName& socketToUse);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
