// AnimBlueprintGeneratedClass ABP_Integrated_Repair.ABP_Integrated_Repair_C
// Size: 0x629 (Inherited: 0x3b8)  [layout: KHOP]
struct UABP_Integrated_Repair_C : U*6302f2384b {
	struct F*467c63d8f7 UberGraphFrame; // 0x3b8(0x10)
	struct FAnimNode_Root _5b41b6d333_CFD91D3B4ACD7F07EBC906898D080145; // 0x3c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_4ED4B9264FE41C8087FBA296EC809A7C; // 0x418(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_77DFA6344E088966CE6726885FC165FC; // 0x450(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_EF790B4F4241ECE405D098A237E6263C; // 0x590(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_A70E90014126061AF0E95C807A936F1B; // 0x5d8(0x48)
	struct ATslWeapon_RepairKit* repairkit; // 0x620(0x08)
	bool Holster; // 0x628(0x01)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Integrated_Repair_*2a098356c7_77DFA6344E088966CE6726885FC165FC(); // Function ABP_Integrated_Repair.ABP_Integrated_Repair_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Integrated_Repair_*2a098356c7_77DFA6344E088966CE6726885FC165FC //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Integrated_Repair.ABP_Integrated_Repair_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Integrated_Repair.ABP_Integrated_Repair_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_Integrated_Repair(bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc__f2a1876da0_ReturnValue); // Function ABP_Integrated_Repair.ABP_Integrated_Repair_C.ExecuteUbergraph_ABP_Integrated_Repair //  // @ game+0x43bab4
};

