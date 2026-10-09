// AnimBlueprintGeneratedClass ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C
// Size: 0x631 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_AWM_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_68E4FC9D43E468FE9841B19FC8FB3315; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_6C56C7C743F5AD3345F1CA81A9E8BB93; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_8E8B95944D8A1CA303D6FC8348D9359F; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_F29EB4024FEA28B687DF9EB5F5606401; // 0x5c0(0x70)
	bool Used; // 0x630(0x01)

	void BlueprintInitializeAnimation(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFireCycle_Event(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.Reload1_Event //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.CancelReload_Event //  // @ game+0x43bab4
	struct ATslWeapon_Gun* ExecuteUbergraph_ABP_Weapon_AWM_RD(float CallFunc_Montage_Play_ReturnValue, bool K2Node_DynamicCast_bSuccess, float CallFunc__969e536e1a_ReturnValue, bool K2Node_DynamicCast_bSuccess3, struct AActor* CallFunc__9cee7bdc11_ReturnValue, struct AP_Sniper_AWM_BP_C* CallFunc_FinishSpawningActor_ReturnValue); // Function ABP_Weapon_AWM_RD.ABP_Weapon_AWM_RD_C.ExecuteUbergraph_ABP_Weapon_AWM_RD // Net|NetRequest|Native|Event|NetResponse|Static|NetMulticast|MulticastDelegate|Public|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x43bab4
};

