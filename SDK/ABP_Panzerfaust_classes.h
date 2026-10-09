// AnimBlueprintGeneratedClass ABP_Panzerfaust.ABP_Panzerfaust_C
// Size: 0xc75 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Panzerfaust_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_D11B9CF2401695878DA2558E29983D75; // 0x4c8(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_3C6787854A95502B03F1E5BECA47ABAD; // 0x510(0x140)
	struct FAnimNode_Slot _bb400d36dc_496C0AFA485F4430D7A8C080F872F100; // 0x650(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_7AD777DC400ECEF4CD243D95278856A1; // 0x6c0(0x140)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_398604934A2DA65A3FEAB2A9244B5DC5; // 0x800(0x48)
	char pad_848[0x8]; // 0x848(0x08)
	struct FAnimNode_TransitionResult _86a0efd7ed_074C6B55440E250A4364B19961F1893B; // 0x850(0x80)
	struct FAnimNode_TransitionResult _86a0efd7ed_A83C4CA247AD080B2A75BC997DA355A4; // 0x8d0(0x80)
	struct FAnimNode_SequencePlayer _289848426d_A8CCCE894799CD048D689994A8219C64; // 0x950(0x70)
	struct FAnimNode_Root _9795f9c123_EDA3B48146035F9BCD352E9B7C14A4D7; // 0x9c0(0x50)
	struct FAnimNode_SequencePlayer _289848426d_0C5DAA9D4E0657BE9A3EB3B4FF957AC0; // 0xa10(0x70)
	struct FAnimNode_Root _9795f9c123_59C21B5348AE082439B60CB9A3DE1C89; // 0xa80(0x50)
	struct FAnimNode_StateMachine _f9ec1fc070_639F03E04A86079CE2F71794120084A5; // 0xad0(0xe0)
	struct FAnimNode_Root _5b41b6d333_7F44C2504A282FBBFFD5DABBE7D4A78A; // 0xbb0(0x50)
	bool Primed; // 0xc00(0x01)
	bool ADS; // 0xc01(0x01)
	char pad_C02[0x2]; // 0xc02(0x02)
	struct FVector Zero; // 0xc04(0x0c)
	struct ATslWeapon_Gun_Launcher* Gun; // 0xc10(0x08)
	struct TMap<int32, float> ZeroMap; // 0xc18(0x50)
	struct FVector AnimatedZero; // 0xc68(0x0c)
	bool SightUp; // 0xc74(0x01)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*86a0efd7ed_A83C4CA247AD080B2A75BC997DA355A4(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*86a0efd7ed_A83C4CA247AD080B2A75BC997DA355A4 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*2a098356c7_7AD777DC400ECEF4CD243D95278856A1(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*2a098356c7_7AD777DC400ECEF4CD243D95278856A1 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*2a098356c7_3C6787854A95502B03F1E5BECA47ABAD(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*2a098356c7_3C6787854A95502B03F1E5BECA47ABAD //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*86a0efd7ed_074C6B55440E250A4364B19961F1893B(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Panzerfaust_*86a0efd7ed_074C6B55440E250A4364B19961F1893B //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.WeaponFire_Event //  // @ game+0x43bab4
	int32 ExecuteUbergraph_ABP_Panzerfaust(struct AActor* CallFunc__6827ff0522_ReturnValue, struct ATslWeapon_Gun_Launcher* K2Node_DynamicCast_AsTsl_Weapon_Gun_Launcher, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc__0dcda80dbc_ReturnValue, struct FVector CallFunc__ad1a6ecfbd_ReturnValue); // Function ABP_Panzerfaust.ABP_Panzerfaust_C.ExecuteUbergraph_ABP_Panzerfaust //  // @ game+0x43bab4
};

