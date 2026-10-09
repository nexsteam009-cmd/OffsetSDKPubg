// AnimBlueprintGeneratedClass ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C
// Size: 0xc08 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_M16_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_D6F74D5B41A3233CF6A89195CAB3F255; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_FCA48CD74AD0034F2AE890A9C54A5CA2; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_79E4A4BB401147D3550250BE6DBD997D; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_1F4D85124D6919FD2CAE82A0CE68D708; // 0x5c0(0x70)
	struct FAnimNode_Slot _bb400d36dc_7138E0F542DAC939723CFD8A66279F3B; // 0x630(0x70)
	struct FAnimNode_AnimDynamics _461f86acf4_08EA19CF4E880E184BBADBB32F89FDC9; // 0x6a0(0x388)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_9D12B0A64BEAC98B6E66759CC678484C; // 0xa28(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_17FDDD02433E9F5CF98C21BFAC13318F; // 0xa70(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_E0711DF2463B2070C094189CC023C816; // 0xab8(0x140)
	float ADSOpticsAlpha; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct ATslWeapon_Gun* Gun; // 0xc00(0x08)

	int32 HandleFireSelector(float CallFunc_Montage_Play_ReturnValue, enum class EFiringMode CallFunc__2c5f61cb42_ReturnValue, bool CallFunc__3518f3f14d_ReturnValue); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.HandleFireSelector //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.Reload1_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_RD_*2a098356c7_E0711DF2463B2070C094189CC023C816(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_RD_*2a098356c7_E0711DF2463B2070C094189CC023C816 //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.CancelReload_Event //  // @ game+0x43bab4
	DelegateProperty ExecuteUbergraph_ABP_Weapon_M16_RD(struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, bool K2Node_DynamicCast_bSuccess, float CallFunc_Montage_Play_ReturnValue3, float CallFunc__59ae027333_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2); // Function ABP_Weapon_M16_RD.ABP_Weapon_M16_RD_C.ExecuteUbergraph_ABP_Weapon_M16_RD // Net|NetReliableNative|UbergraphFunction|MulticastDelegate|Public|Delegate|NetServer|HasOutParms|NetClient|DLLImport|BlueprintCallable|EditorOnly|Const // @ game+0x43bab4
};

