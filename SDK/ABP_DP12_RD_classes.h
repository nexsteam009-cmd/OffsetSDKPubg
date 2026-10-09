// AnimBlueprintGeneratedClass ABP_DP12_RD.ABP_DP12_RD_C
// Size: 0xa8c (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_DP12_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_89E7690441CB2B49B4013EBCD0913E6D; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_0C1451194B728E35A7C9C5ABB6E818A9; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_5AFB058E4DE912F9911288848C9508C6; // 0x550(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_404C237B4D8D9DFB94006A93DFD6C77F; // 0x5c0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_2FD95A99494C4BB6A3F043B4C0AD6E6C; // 0x700(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_FA4217DF47AB03211124388C386AF6BF; // 0x748(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_A0719D3D4FA9FEA3976781A5E4B3A59C; // 0x790(0x140)
	struct FAnimNode_Slot _bb400d36dc_41884ABE4D66C7D73B8927AAD72596B7; // 0x8d0(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_0252A5B6434233BEFBAC5DB1CF57035F; // 0x940(0x140)
	struct ATslWeapon_Gun* ActorRef; // 0xa80(0x08)
	float SightAlpha; // 0xa88(0x04)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP12_RD_*2a098356c7_A0719D3D4FA9FEA3976781A5E4B3A59C(); // Function ABP_DP12_RD.ABP_DP12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP12_RD_*2a098356c7_A0719D3D4FA9FEA3976781A5E4B3A59C //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP12_RD_*2a098356c7_404C237B4D8D9DFB94006A93DFD6C77F(); // Function ABP_DP12_RD.ABP_DP12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP12_RD_*2a098356c7_404C237B4D8D9DFB94006A93DFD6C77F //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_DP12_RD.ABP_DP12_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFireCycle_Event(); // Function ABP_DP12_RD.ABP_DP12_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void ReloadByOneStart_Event(); // Function ABP_DP12_RD.ABP_DP12_RD_C.ReloadByOneStart_Event //  // @ game+0x43bab4
	void ReloadByOneEnd_Event(); // Function ABP_DP12_RD.ABP_DP12_RD_C.ReloadByOneEnd_Event //  // @ game+0x43bab4
	void ReloadByOneSingle_Event(); // Function ABP_DP12_RD.ABP_DP12_RD_C.ReloadByOneSingle_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_DP12_RD.ABP_DP12_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void AnimNotify_EjectFX(); // Function ABP_DP12_RD.ABP_DP12_RD_C.AnimNotify_EjectFX //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_DP12_RD.ABP_DP12_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_DP12_RD(bool CallFunc__55e9c7fa94_ReturnValue, struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc_BreakTransform_Scale, float CallFunc__969e536e1a_ReturnValue, float CallFunc_Montage_Play_ReturnValue2, struct AActor* CallFunc__6827ff0522_ReturnValue4); // Function ABP_DP12_RD.ABP_DP12_RD_C.ExecuteUbergraph_ABP_DP12_RD // Native|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Protected|HasDefaults|DLLImport|BlueprintEvent|Const // @ game+0x43bab4
};

