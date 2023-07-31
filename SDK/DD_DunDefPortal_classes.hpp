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

// Class DunDefPortal.DunDefDamageType_Hearts
// 0x0000 (0x00D4 - 0x00D4)
class UDunDefDamageType_Hearts : public UDunDefDamageType_ForceKnockBack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefDamageType_Hearts");
		return ptr;
	}

};


// Class DunDefPortal.DunDefPortalNode
// 0x004C (0x0320 - 0x02D4)
class ADunDefPortalNode : public ADunDefEmitterSpawnable
{
public:
	class ADunDefEmitterSpawnable*                     TeleportedEffect;                                         // 0x02D4(0x0004)
	class ADunDefEmitterSpawnable*                     ProjectileTeleportedEffect;                               // 0x02D8(0x0004)
	class USceneCapturePortalComponent*                MyPortalComponent;                                        // 0x02DC(0x0004)
	class UMaterialInstanceConstant*                   PortalMaterial;                                           // 0x02E0(0x0004)
	class USoundCue*                                   EnterPortalSound;                                         // 0x02E4(0x0004)
	class USoundCue*                                   ExitPortalSound;                                          // 0x02E8(0x0004)
	class USoundCue*                                   CreationSound;                                            // 0x02EC(0x0004)
	class USoundCue*                                   DeletionSound;                                            // 0x02F0(0x0004)
	float                                              ReteleportInterval;                                       // 0x02F4(0x0004)
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                                   // 0x02F8(0x0004)
	class ADunDefPortalNode*                           LastSibling;                                              // 0x02FC(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0300(0x0004) (Edit)
	unsigned long                                      bFadingMICUp : 1;                                         // 0x0300(0x0004)
	unsigned long                                      bDeleted : 1;                                             // 0x0300(0x0004)
	unsigned long                                      bPortalEffectEnabled : 1;                                 // 0x0300(0x0004)
	class AActor*                                      IgnoreActor;                                              // 0x0304(0x0004)
	float                                              FadingMICValue;                                           // 0x0308(0x0004)
	float                                              LastFadingMICValue;                                       // 0x030C(0x0004)
	TArray<struct FRecentTeleport>                     RecentTeleports;                                          // 0x0310(0x000C)
	class ADunDefWeapon_PortalGun*                     InstigatorWeapon;                                         // 0x031C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefPortalNode");
		return ptr;
	}


	void PostBeginPlay();
	void Tick();
	void STATIC_AllowSpawn();
	void FadeOut();
	void Touch();
	void ExecReplicatedFunction();
	void ReplicatedEvent();
};


// Class DunDefPortal.DunDefWeapon_PortalGun
// 0x00AA (0x0594 - 0x04EA)
class ADunDefWeapon_PortalGun : public ADunDefWeapon
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	struct FName                                       CustomAnimNodeName;                                       // 0x04EC(0x0008)
	struct FName                                       PrimaryShootAnimName;                                     // 0x04F4(0x0008)
	struct FName                                       AltShootAnimName;                                         // 0x04FC(0x0008)
	struct FName                                       PrimaryCancelAnimName;                                    // 0x0504(0x0008)
	struct FName                                       AltCancelAnimName;                                        // 0x050C(0x0008)
	class ADunDefPortalNode*                           PortalNodeTemplates[0x2];                                 // 0x0514(0x0004)
	class AActor*                                      AltTemplate;                                              // 0x051C(0x0004)
	float                                              PortalFireInterval;                                       // 0x0520(0x0004)
	float                                              PortalKillRadius;                                         // 0x0524(0x0004)
	float                                              AmmoRegenInterval;                                        // 0x0528(0x0004)
	float                                              AmmoRegenAmount;                                          // 0x052C(0x0004)
	float                                              AmmoConsumeInterval;                                      // 0x0530(0x0004)
	float                                              AmmoConsumeAmount;                                        // 0x0534(0x0004)
	float                                              FullDrainRegenTimePenalty;                                // 0x0538(0x0004)
	struct FLinearColor                                PrimaryFireColor;                                         // 0x053C(0x0010)
	struct FLinearColor                                AltFireColor;                                             // 0x054C(0x0010)
	struct FColor                                      PrimaryFireLightColor;                                    // 0x055C(0x0004)
	struct FColor                                      AltFireLightColor;                                        // 0x0560(0x0004)
	class UParticleSystemComponent*                    InUseParticleComponent;                                   // 0x0564(0x0004)
	class USoundCue*                                   NotAllowedToPortalSound;                                  // 0x0568(0x0004)
	class UTextureRenderTarget2D*                      PortalTextureTargets[0x2];                                // 0x056C(0x0004)
	class UPointLightComponent*                        MyLightComp;                                              // 0x0574(0x0004)
	float                                              LastFireTimes[0x2];                                       // 0x0578(0x0004)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x0580(0x0004)
	class ADunDefPortalNode*                           PortalNodes[0x2];                                         // 0x0584(0x0004)
	int                                                CurrentAmmo;                                              // 0x058C(0x0004)
	float                                              LastRegenTime;                                            // 0x0590(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefPortal.DunDefWeapon_PortalGun");
		return ptr;
	}


	void HitBlockingVolume();
	void IsInAnyPortalBlockingVolume();
	void Tick();
	void GetReloadingColors();
	void HasBothPortals();
	void ClearPortal();
	void Destroyed();
	void DetachWeapon();
	void HolderDied();
	void CustomFire();
	void ShootProjectiles();
	void HasAnyAmmo();
	void BeginFire();
	void GetSiblingPortal();
	void PostBeginPlay();
	void PlayCancelAnimation();
	void PlayedShootAnimation();
	void GetTotalAmmo();
	void GetMaxAmmo();
	void GetAmmo();
	void GetAmmoPercent();
	void UsesAmmo();
	void ExecReplicatedFunction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
