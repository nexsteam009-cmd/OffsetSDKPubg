// AnimBlueprintGeneratedClass ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C
// Size: 0x631 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_M24_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_6311D6B5478D589DB71B85BB754C1926; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_0993ABE74AEF0C8F8D95FCA5E088DDA1; // 0x518(0x70)
	struct FAnimNode_RefPose _38c4d66547_5D0DF9234B96EC9C4DB0BEBA688DFED6; // 0x588(0x38)
	struct FAnimNode_Slot _bb400d36dc_5118599A40FB22E39034DF8876E32840; // 0x5c0(0x70)
	bool Used; // 0x630(0x01)

	void WeaponFireCycle_Event(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.Reload2_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.Reload1_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.CancelReload_Event //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_M24_RD(int32 EntryPoint, DelegateProperty _69bd57bce3_OutputDelegate2, DelegateProperty _69bd57bce3_OutputDelegate3, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, float CallFunc_Montage_Play_ReturnValue2, struct FTransform CallFunc__661f3a5973_ReturnValue); // Function ABP_Weapon_M24_Rd.ABP_Weapon_M24_RD_C.ExecuteUbergraph_ABP_Weapon_M24_RD // Net|NetRequest|Event|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x43bab4
};

