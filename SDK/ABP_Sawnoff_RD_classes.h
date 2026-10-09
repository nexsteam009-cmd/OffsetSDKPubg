// AnimBlueprintGeneratedClass ABP_Sawnoff_RD.ABP_Sawnoff_RD_C
// Size: 0x944 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Sawnoff_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_A60E43254883B564ACDDD8A8DC60231B; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_425C29394CA5D7CBB50B07895E96A52C; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_6D1E411247F209AF34D17EA1FE29FE1A; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_AC24AA834A8D13E2C169208089018DF8; // 0x5c0(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_68F7AED34101D5150BB3339CE3FF207B; // 0x630(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_8BCCA09B444A76D005C9F0A2713CD98A; // 0x770(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_EC96BD34483A18A68B3FF287C7FD9144; // 0x7b8(0x140)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_7464850F4435FF0BED6AD88B597C66B9; // 0x8f8(0x48)
	float ShellAlpha; // 0x940(0x04)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_RD_*2a098356c7_EC96BD34483A18A68B3FF287C7FD9144(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_RD_*2a098356c7_EC96BD34483A18A68B3FF287C7FD9144 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_RD_*2a098356c7_68F7AED34101D5150BB3339CE3FF207B(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Sawnoff_RD_*2a098356c7_68F7AED34101D5150BB3339CE3FF207B //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	void AnimNotify_ShellShow(); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.AnimNotify_ShellShow //  // @ game+0x43bab4
	struct AActor* ExecuteUbergraph_ABP_Sawnoff_RD(struct AActor* CallFunc__6827ff0522_ReturnValue, struct AActor* CallFunc__6827ff0522_ReturnValue2, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, bool CallFunc_IsValid_ReturnValue); // Function ABP_Sawnoff_RD.ABP_Sawnoff_RD_C.ExecuteUbergraph_ABP_Sawnoff_RD // Net|NetReliableEvent|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|Delegate|BlueprintPure|EditorOnly|Const // @ game+0x43bab4
};

