// AnimBlueprintGeneratedClass ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C
// Size: 0x878 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Tommygun_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_416353274456B27478E074A67FBE497B; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_BBACBEA84FB60D3F02C0768DA4A55CF7; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_24106C06432A360DD2431B858F3F9EC1; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_B9E537D14FA53BF6DD46E590F1E0925F; // 0x5c0(0x70)
	struct FAnimNode_Slot _bb400d36dc_25BF921B48FE55367FFB8E8C583E51A4; // 0x630(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_4F0DA36E4CE544C4C68B5AAB6BD57478; // 0x6a0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_483AE4C542A1731EEB26758761B44ED3; // 0x7e0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_ADFF27B448530F0D99162588448C4DC3; // 0x828(0x48)
	struct ATslWeapon_Gun* ActorRef; // 0x870(0x08)

	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.Reload2_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_Tommygun_RD(DelegateProperty _69bd57bce3_OutputDelegate4, DelegateProperty _69bd57bce3_OutputDelegate5, struct UAnimMontage* Temp_object_Variable, struct UAnimMontage* Temp_object_Variable2, float CallFunc_Montage_Play_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, bool K2Node_DynamicCast_bSuccess, float CallFunc__969e536e1a_ReturnValue, struct UAnimMontage* K2Node_Select_Default); // Function ABP_Weapon_Tommygun_RD.ABP_Weapon_Tommygun_RD_C.ExecuteUbergraph_ABP_Weapon_Tommygun_RD //  // @ game+0x43bab4
};

