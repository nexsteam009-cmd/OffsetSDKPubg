// AnimBlueprintGeneratedClass ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C
// Size: 0x954 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Mk14_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_8751257440E995BC21CA4DB07A89D956; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_1667A1BB4544152731D9598FAF354CFB; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_18AE2B5B42F7A9BEE84F8F9C5CCCB536; // 0x588(0x70)
	struct FAnimNode_RefPose _38c4d66547_5F8E3B0544B077566CF0D6AA1124B58D; // 0x5f8(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_2C066CB9433B3C47A951198C3CA9FD05; // 0x630(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_16FFC0514A5AF9F23BD5C5A085AEE399; // 0x770(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_591AD7AC45177BF7A42956824B432790; // 0x8b0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_1BD5C1744A52FDCD2BC0C08BC6247A5A; // 0x8f8(0x48)
	struct ATslWeapon_Gun* GunRef; // 0x940(0x08)
	struct ATslCharacter* CharRef; // 0x948(0x08)
	float BipodAlpha; // 0x950(0x04)

	float HandleBipod(bool CallFunc_BooleanAND_ReturnValue, float CallFunc__2ed659cc9e_ReturnValue); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.HandleBipod //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_RD_*2a098356c7_16FFC0514A5AF9F23BD5C5A085AEE399(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_RD_*2a098356c7_16FFC0514A5AF9F23BD5C5A085AEE399 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_RD_*2a098356c7_2C066CB9433B3C47A951198C3CA9FD05(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_RD_*2a098356c7_2C066CB9433B3C47A951198C3CA9FD05 //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.CancelReload_Event //  // @ game+0x43bab4
	DelegateProperty ExecuteUbergraph_ABP_Weapon_Mk14_RD(int32 EntryPoint, DelegateProperty _69bd57bce3_OutputDelegate2, float K2Node_Event_DeltaTimeX, bool K2Node_DynamicCast_bSuccess, bool K2Node_DynamicCast_bSuccess2, struct AActor* CallFunc__6827ff0522_ReturnValue3, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun3, bool CallFunc_IsValid_ReturnValue); // Function ABP_Weapon_Mk14_RD.ABP_Weapon_Mk14_RD_C.ExecuteUbergraph_ABP_Weapon_Mk14_RD //  // @ game+0x43bab4
};

