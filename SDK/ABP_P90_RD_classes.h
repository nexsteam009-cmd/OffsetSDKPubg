// AnimBlueprintGeneratedClass ABP_P90_RD.ABP_P90_RD_C
// Size: 0x9c8 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_P90_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_AB2FC7DA45A59287A821E4A7422E8BE8; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_32EF38A340C34144D6304B9B40FBA8E4; // 0x518(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_ACD9C25147737B4069DDCC9AD80AD972; // 0x550(0x140)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_61FC039D432E787F9D115C9110310342; // 0x690(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_FECB02E948AF78836610E68BE8157930; // 0x6d8(0x140)
	struct FAnimNode_Slot _bb400d36dc_0DD7A08644117A550C32EB981287F7A0; // 0x818(0x70)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_79F2B4AC4DA3DBE6D6DA76BD8E592597; // 0x888(0x48)
	struct FAnimNode_Slot _bb400d36dc_F784F1234F0A7F053B3FF587409E2D80; // 0x8d0(0x70)
	struct FAnimNode_Slot _bb400d36dc_D7DB73494781823982AA2A8FFD3B4015; // 0x940(0x70)
	float AngledAlpha; // 0x9b0(0x04)
	char pad_9B4[0x4]; // 0x9b4(0x04)
	struct ATslWeapon_Gun* GunActorRef; // 0x9b8(0x08)
	struct ATslCharacter* CharActorRef; // 0x9c0(0x08)

	void WeaponFire_Event(); // Function ABP_P90_RD.ABP_P90_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_P90_RD.ABP_P90_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_P90_RD.ABP_P90_RD_C.Reload1_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_P90_RD_*2a098356c7_ACD9C25147737B4069DDCC9AD80AD972(); // Function ABP_P90_RD.ABP_P90_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_P90_RD_*2a098356c7_ACD9C25147737B4069DDCC9AD80AD972 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_P90_RD_*2a098356c7_FECB02E948AF78836610E68BE8157930(); // Function ABP_P90_RD.ABP_P90_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_P90_RD_*2a098356c7_FECB02E948AF78836610E68BE8157930 //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_P90_RD.ABP_P90_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_P90_RD.ABP_P90_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_P90_RD.ABP_P90_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_P90_RD(struct AActor* CallFunc__6827ff0522_ReturnValue, DelegateProperty _69bd57bce3_OutputDelegate2, float CallFunc_Montage_Play_ReturnValue, DelegateProperty _69bd57bce3_OutputDelegate4, float CallFunc__2ed659cc9e_ReturnValue2); // Function ABP_P90_RD.ABP_P90_RD_C.ExecuteUbergraph_ABP_P90_RD //  // @ game+0x43bab4
};

