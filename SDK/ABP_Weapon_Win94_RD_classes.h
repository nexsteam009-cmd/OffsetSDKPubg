// AnimBlueprintGeneratedClass ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C
// Size: 0x888 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Win94_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_528EEEE64F07886AFCD272A2387FAFF5; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_3562FF0443EAD7DDACD612892D42CB05; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_570E314B44C2E8F294542B97F553F85F; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_0311E2F247B73656501470A1FFBBB1B6; // 0x5c0(0x70)
	struct FAnimNode_Slot _bb400d36dc_E1DF07B64F0D857E6A8A8B9C71990BC9; // 0x630(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_C392821F45A66E6DB393E8B79ECCF5BC; // 0x6a0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_D7E26AD04C712328FAC889826541A309; // 0x7e0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_127B380441FDC2DBF463A4A94E76E8C4; // 0x828(0x48)
	bool bShellInChamber; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float AngledAlpha; // 0x874(0x04)
	struct ATslWeapon_Gun* GunActorRef; // 0x878(0x08)
	struct ATslCharacter* CharActorRef; // 0x880(0x08)

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Win94_RD_*2a098356c7_C392821F45A66E6DB393E8B79ECCF5BC(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Win94_RD_*2a098356c7_C392821F45A66E6DB393E8B79ECCF5BC //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void WeaponFireCycle_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void ReloadByOneStart_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.ReloadByOneStart_Event //  // @ game+0x43bab4
	void ReloadByOneSingle_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.ReloadByOneSingle_Event //  // @ game+0x43bab4
	void ReloadByOneEnd_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.ReloadByOneEnd_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_Win94_RD(int32 EntryPoint, int32 K2Node_CustomEvent_AmmoToReload, bool K2Node_DynamicCast_bSuccess, struct FTransform CallFunc__661f3a5973_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun3, float CallFunc__969e536e1a_ReturnValue2, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue); // Function ABP_Weapon_Win94_RD.ABP_Weapon_Win94_RD_C.ExecuteUbergraph_ABP_Weapon_Win94_RD // NetRequest|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Delegate|Const // @ game+0x43bab4
};

