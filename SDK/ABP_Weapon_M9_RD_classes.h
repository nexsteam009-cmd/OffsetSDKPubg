// AnimBlueprintGeneratedClass ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C
// Size: 0x5d0 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_M9_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_A45402B34061F4BFBE6DD7A37BE7EAC9; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_BA4123E648265EF03DF19D9D72A86C9D; // 0x518(0x70)
	struct FAnimNode_RefPose _38c4d66547_16D5F5F14C834DDA26C9E690AB5FF5CC; // 0x588(0x38)
	struct ATslWeapon_Gun* ActorRef; // 0x5c0(0x08)
	int32 CurrentAmmo; // 0x5c8(0x04)
	float ReleaseCatchDelay; // 0x5cc(0x04)

	float SlideReleaseFunc(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.SlideReleaseFunc // NetReliableNative|Event|Static|NetMulticast|MulticastDelegate|NetServer|HasOutParms|NetClient|DLLImport|BlueprintPure|EditorOnly|Const // @ game+0x43bab4
	void Handle_SlideRelease(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.Handle_SlideRelease //  // @ game+0x43bab4
	bool Handle_Fire(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.Handle_Fire //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.Reload2_Event //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_Weapon_M9_RD(bool CallFunc_IsValid_ReturnValue); // Function ABP_Weapon_M9_RD.ABP_Weapon_M9_RD_C.ExecuteUbergraph_ABP_Weapon_M9_RD //  // @ game+0x43bab4
};

