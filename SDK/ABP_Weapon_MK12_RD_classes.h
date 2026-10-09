// AnimBlueprintGeneratedClass ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C
// Size: 0x108c (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_MK12_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_8CCEA46646DE2DCB3C5FB58FD67A3BB7; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_5B7CE9304BFF4D99B36757BF02846CA3; // 0x518(0x70)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_9FD11831453F830528AE5893D60C84C7; // 0x588(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_E667F3E24D844F526AA68EBA14525FDD; // 0x5d0(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9C182BED4670F197A00D2F8DB84CA651; // 0x710(0x140)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_3F0E9A684CA38D340292FDBC0395A392; // 0x850(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_696484A34699640021CE5A9BB8F07E7C; // 0x898(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_D0A098594C18CB7345F77A8AAA648CB4; // 0x9d8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_ADA0B7374B9240918DFC1D807ED256BF; // 0xb18(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_23506E4C40D49CC39C2E0888EA15F1BA; // 0xc58(0x140)
	struct FAnimNode_RefPose _38c4d66547_0BF81B3E478EC219747FD49E3B84E7C1; // 0xd98(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_18817B0044A88B3ECD36CAAD14951710; // 0xdd0(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_870E601445B3CDEA8E560BABA3464BBB; // 0xf10(0x140)
	struct ATslCharacter* CharRef; // 0x1050(0x08)
	struct ATslWeapon_Gun* WeaponGunRef; // 0x1058(0x08)
	float SightAlpha; // 0x1060(0x04)
	float BipodAlpha; // 0x1064(0x04)
	struct UAnimMontage* FireMontage; // 0x1068(0x08)
	struct UAnimMontage* TacticalReloadMontage; // 0x1070(0x08)
	struct UAnimMontage* ChargeReloadMontage; // 0x1078(0x08)
	float SightAlphaInterpSpeed; // 0x1080(0x04)
	float BipodAlphaInterpSpeed; // 0x1084(0x04)
	int32 CurrentAmmo; // 0x1088(0x04)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_D0A098594C18CB7345F77A8AAA648CB4(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_D0A098594C18CB7345F77A8AAA648CB4 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_18817B0044A88B3ECD36CAAD14951710(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_18817B0044A88B3ECD36CAAD14951710 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_870E601445B3CDEA8E560BABA3464BBB(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_870E601445B3CDEA8E560BABA3464BBB //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_E667F3E24D844F526AA68EBA14525FDD(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_E667F3E24D844F526AA68EBA14525FDD //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.Reload1_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_696484A34699640021CE5A9BB8F07E7C(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_696484A34699640021CE5A9BB8F07E7C //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.Reload2_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_9C182BED4670F197A00D2F8DB84CA651(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_MK12_RD_*2a098356c7_9C182BED4670F197A00D2F8DB84CA651 //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	DelegateProperty ExecuteUbergraph_ABP_Weapon_MK12_RD(int32 EntryPoint, float CallFunc_Montage_Play_ReturnValue, bool K2Node_DynamicCast_bSuccess, float CallFunc__1aa5021b94_ReturnValue2, bool CallFunc__7a572728dc_ReturnValue, float CallFunc__b3deabbf39_ReturnValue, float CallFunc__b3deabbf39_ReturnValue2, bool CallFunc__e122bfc350_ReturnValue2, int32 CallFunc__c5cb3593f1_ReturnValue); // Function ABP_Weapon_MK12_RD.ABP_Weapon_MK12_RD_C.ExecuteUbergraph_ABP_Weapon_MK12_RD //  // @ game+0x43bab4
};

