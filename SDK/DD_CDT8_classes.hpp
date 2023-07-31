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

// Class CDT8.DunDefWeapon_MagicStaff_Channeling
// 0x0030 (0x0644 - 0x0614)
class ADunDefWeapon_MagicStaff_Channeling : public ADunDefWeapon_MagicStaff
{
public:
	class ADunDefProjectile*                           ChannelingProjectileTemplate;                             // 0x0614(0x0004)
	float                                              ChannelingProjectileFireSpeed;                            // 0x0618(0x0004)
	float                                              ChannelingProjectileDamageMultiplier;                     // 0x061C(0x0004)
	struct FVector                                     ChannelingProjectileLocationOffset;                       // 0x0620(0x000C)
	float                                              ChannelingRangeMultiplier;                                // 0x062C(0x0004)
	TScriptInterface<class UDunDefTargetableInterface> act;                                                      // 0x0630(0x0008)
	TArray<TScriptInterface<class UDunDefTargetableInterface>> Enemies;                                                  // 0x0638(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CDT8.DunDefWeapon_MagicStaff_Channeling");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
