// AnimBlueprintGeneratedClass ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C
// Size: 0x9fc (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_SCAR_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_5E4E76794EE9E85EB9269287E9ABBF05; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_58F36EE440097F0264F8D9A1710C3813; // 0x518(0x38)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_845F8E72419FC91B9F86BF97E4FE8CC3; // 0x550(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_D93E8B51425068DA8D3A1FBC24EDB3EF; // 0x598(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_EAAA825D46EF0E84EB81E7B09D7E8B1D; // 0x6d8(0x140)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_94839F9740A8823EFAA5D6A4450B370A; // 0x818(0x48)
	struct FAnimNode_Slot _bb400d36dc_9505E61941C0E46404569D8796EC2DCE; // 0x860(0x70)
	struct FAnimNode_Slot _bb400d36dc_C35D219B4E68D892D005C69B58D6266F; // 0x8d0(0x70)
	struct FAnimNode_Slot _bb400d36dc_FDE208644F6AFEFBEBEFECB74FFB5886; // 0x940(0x70)
	struct ATslWeapon_Gun* ActorRef; // 0x9b0(0x08)
	float SightAlpha; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct FWeaponAttachmentAssetData SightSlot; // 0x9c0(0x38)
	int32 AmmoCount; // 0x9f8(0x04)

	float Handle_Fire(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.Handle_Fire //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.Reload1_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_RD_*2a098356c7_D93E8B51425068DA8D3A1FBC24EDB3EF(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_RD_*2a098356c7_D93E8B51425068DA8D3A1FBC24EDB3EF //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.Reload2_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_RD_*2a098356c7_EAAA825D46EF0E84EB81E7B09D7E8B1D(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_RD_*2a098356c7_EAAA825D46EF0E84EB81E7B09D7E8B1D //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.CancelReload_Event //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_SCAR_RD(DelegateProperty _69bd57bce3_OutputDelegate3, float K2Node_Event_DeltaTimeX, struct AActor* CallFunc__6827ff0522_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun3, float CallFunc__969e536e1a_ReturnValue2); // Function ABP_Weapon_SCAR_RD.ABP_Weapon_SCAR_RD_C.ExecuteUbergraph_ABP_Weapon_SCAR_RD //  // @ game+0x43bab4
};

