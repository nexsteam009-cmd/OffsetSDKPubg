// AnimBlueprintGeneratedClass ABP_K2_RD.ABP_K2_RD_C
// Size: 0x9d4 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_K2_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_E841916C4B9975E13D4F169CD70C4D91; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_C4C15B2B4145F4E2D6E2709FEA995C9B; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_1F60A17E4287A4FEB5F6DCA9AD3B6892; // 0x588(0x70)
	struct FAnimNode_Slot _bb400d36dc_55BC91494EA2FB66747171BFE2A11C0F; // 0x5f8(0x70)
	struct FAnimNode_RefPose _38c4d66547_AE7EC58B4EE575AFD4F54EA03FC864C8; // 0x668(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_13C2B5A24A8C9B9EF50203A3F458EE1F; // 0x6a0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_63952D4342B2714D99D0BFBE04A5B662; // 0x7e0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_ABE70627447031DDE22C34BE790461BA; // 0x828(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_C0914A9F41DA61BACFA23297D83CE175; // 0x870(0x140)
	struct AActor* Actor; // 0x9b0(0x08)
	float ADSOpticsAlpha; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct ATslWeapon_Gun* Gun; // 0x9c0(0x08)
	struct ATslCharacter* PawnOwner; // 0x9c8(0x08)
	int32 AmmoCount; // 0x9d0(0x04)

	bool HandleFire(); // Function ABP_K2_RD.ABP_K2_RD_C.HandleFire //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_K2_RD_*2a098356c7_13C2B5A24A8C9B9EF50203A3F458EE1F(); // Function ABP_K2_RD.ABP_K2_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_K2_RD_*2a098356c7_13C2B5A24A8C9B9EF50203A3F458EE1F //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_K2_RD.ABP_K2_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_K2_RD.ABP_K2_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_K2_RD.ABP_K2_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_K2_RD.ABP_K2_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_K2_RD.ABP_K2_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_K2_RD.ABP_K2_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_K2_RD.ABP_K2_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_K2_RD_*2a098356c7_C0914A9F41DA61BACFA23297D83CE175(); // Function ABP_K2_RD.ABP_K2_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_K2_RD_*2a098356c7_C0914A9F41DA61BACFA23297D83CE175 //  // @ game+0x43bab4
	int32 ExecuteUbergraph_ABP_K2_RD(DelegateProperty _69bd57bce3_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, struct AActor* CallFunc__6827ff0522_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue2, float CallFunc__1aa5021b94_ReturnValue, float CallFunc__1b439df21c_ReturnValue, bool CallFunc__42476f0c0f_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Montage_Play_ReturnValue3); // Function ABP_K2_RD.ABP_K2_RD_C.ExecuteUbergraph_ABP_K2_RD // Native|NetMulticast|UbergraphFunction|Public|Private|Protected|Delegate|NetServer|HasDefaults|NetClient|BlueprintEvent|EditorOnly|NetValidate // @ game+0x43bab4
};

