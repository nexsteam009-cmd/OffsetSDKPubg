// AnimBlueprintGeneratedClass ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C
// Size: 0xe54 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Kar98k_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_E69D4E33435DD543FE446D92E3351001; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_69E3A14E4848B9AB1FBE58AEA42D4DDA; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_7611638D49D12A187EA61B9A4613CCE2; // 0x588(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_30E0C6B543E766367E0D838EA57CA891; // 0x5f8(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_0059397F4E4786A2DAD4D6A5578B217D; // 0x738(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_0F77FB174B6AC6E8106BCEAEF3B47C12; // 0x780(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_7D8E74C54278A3B39BA63CB206EE0E8B; // 0x7c8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_C8A5A3CA4CA9EA978F9D43B1E338A5C4; // 0x908(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_A561E8874B9063E55AF72689A4F380B7; // 0xa48(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_5A44AABE4BEA0800D89A3B8E5DA99EDE; // 0xb88(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_7040152D456B23291859549FDF417CED; // 0xcc8(0x140)
	struct FAnimNode_RefPose _38c4d66547_D8C3806F4B4254229950278AC71FEFCE; // 0xe08(0x38)
	float ClipShowAlpha; // 0xe40(0x04)
	float MagRootAlpha; // 0xe44(0x04)
	struct ATslWeapon_Gun* GunRef; // 0xe48(0x08)
	float BoltActionAlpha; // 0xe50(0x04)

	void Handle_ReloadByOne_Stop(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Stop //  // @ game+0x43bab4
	void Handle_ReloadByOne_Single(struct AActor* CallFunc__6827ff0522_ReturnValue, bool K2Node_DynamicCast_bSuccess, float CallFunc__969e536e1a_ReturnValue); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Single //  // @ game+0x43bab4
	float Handle_ReloadByOne_Start(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_ReloadByOne_Start //  // @ game+0x43bab4
	struct UAnimMontage* Handle_FireCycle(struct UAnimMontage* Temp_object_Variable, struct UAnimMontage* Temp_object_Variable3, struct FRandomStream CallFunc_MakeRandomStream_ReturnValue); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Handle_FireCycle //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_5A44AABE4BEA0800D89A3B8E5DA99EDE(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_5A44AABE4BEA0800D89A3B8E5DA99EDE //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_7040152D456B23291859549FDF417CED(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_7040152D456B23291859549FDF417CED //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_A561E8874B9063E55AF72689A4F380B7(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_A561E8874B9063E55AF72689A4F380B7 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_C8A5A3CA4CA9EA978F9D43B1E338A5C4(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_C8A5A3CA4CA9EA978F9D43B1E338A5C4 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_7D8E74C54278A3B39BA63CB206EE0E8B(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_7D8E74C54278A3B39BA63CB206EE0E8B //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_30E0C6B543E766367E0D838EA57CA891(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Kar98k_RD_*2a098356c7_30E0C6B543E766367E0D838EA57CA891 //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFireCycle_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void AnimNotify_ClipShow(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipShow //  // @ game+0x43bab4
	void AnimNotify_ClipHide(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ClipHide //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.Reload2_Event //  // @ game+0x43bab4
	void ReloadByOneStart_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneStart_Event //  // @ game+0x43bab4
	void ReloadByOneSingle_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneSingle_Event //  // @ game+0x43bab4
	void ReloadByOneEnd_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ReloadByOneEnd_Event //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.CancelReload_Event //  // @ game+0x43bab4
	struct ATslWeapon_Gun* ExecuteUbergraph_ABP_Weapon_Kar98k_RD(DelegateProperty _69bd57bce3_OutputDelegate, DelegateProperty _69bd57bce3_OutputDelegate3, DelegateProperty _69bd57bce3_OutputDelegate4, float K2Node_Event_DeltaTimeX, struct AActor* CallFunc__6827ff0522_ReturnValue2, struct AP_Sniper_Kar98_BP_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc__ed87d5b0ee_ReturnValue, bool CallFunc__ed87d5b0ee_ReturnValue3); // Function ABP_Weapon_Kar98k_RD.ABP_Weapon_Kar98k_RD_C.ExecuteUbergraph_ABP_Weapon_Kar98k_RD // Exec|Native|Static|UbergraphFunction|MulticastDelegate|Public|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x43bab4
};

