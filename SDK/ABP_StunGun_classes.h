// AnimBlueprintGeneratedClass ABP_StunGun.ABP_StunGun_C
// Size: 0x5d8 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_StunGun_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_BF44E22C4AC0393C7C70FC9E0C23F7CF; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_3C6AE9A8425502ABF96912AA2E7BB1A6; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_EDFDDF2D4A864628CAE7C7838EE257FA; // 0x550(0x70)
	struct AWeapStunGun_C* Stungun; // 0x5c0(0x08)
	int32 CurrentAmmo; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct USkeletalMeshComponent* Cartridge; // 0x5d0(0x08)

	struct AWeapStunGun_C* UpdateProperty(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2); // Function ABP_StunGun.ABP_StunGun_C.UpdateProperty //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_StunGun.ABP_StunGun_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_StunGun.ABP_StunGun_C.WeaponFire_Event //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_StunGun.ABP_StunGun_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_StunGun(); // Function ABP_StunGun.ABP_StunGun_C.ExecuteUbergraph_ABP_StunGun //  // @ game+0x43bab4
};

