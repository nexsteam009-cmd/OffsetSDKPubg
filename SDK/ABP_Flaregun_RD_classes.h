// AnimBlueprintGeneratedClass ABP_Flaregun_RD.ABP_Flaregun_RD_C
// Size: 0x7e0 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Flaregun_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_5D1B52EF4ED954C9206146AE177A091E; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_59877C4040F773F800B3D2A47318B2D1; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_BE55576E46E2E7ACFF60D4B6F368AD3F; // 0x550(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_9C874442404D3BBD191C0CB1F6CA1D4F; // 0x5c0(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_553153454B9BB6769AFB9C984164102D; // 0x700(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_9B26638F4DB906E8BB0A9F86BE4F65F6; // 0x748(0x48)
	float FollowLHandAlpha; // 0x790(0x04)
	char pad_794[0xc]; // 0x794(0x0c)
	struct FTransform ItemLPosition; // 0x7a0(0x30)
	struct ATslCharacter* CharRef; // 0x7d0(0x08)
	struct ATslWeapon_Gun* GunRef; // 0x7d8(0x08)

	void Handle_Reloads(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.Handle_Reloads // Exec|Event|Static|NetMulticast|Public|Private|Protected|Delegate|NetServer|HasDefaults|NetClient|BlueprintEvent|EditorOnly|NetValidate // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Flaregun_RD_*2a098356c7_9C874442404D3BBD191C0CB1F6CA1D4F(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Flaregun_RD_*2a098356c7_9C874442404D3BBD191C0CB1F6CA1D4F //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.Reload1_Event //  // @ game+0x43bab4
	struct AActor* ExecuteUbergraph_ABP_Flaregun_RD(DelegateProperty _69bd57bce3_OutputDelegate3, struct FVector CallFunc_BreakTransform_Location, struct FRotator CallFunc_BreakTransform_Rotation, DelegateProperty _69bd57bce3_OutputDelegate4, struct ATslCharacter* CallFunc__1a80d8f937_ReturnValue2); // Function ABP_Flaregun_RD.ABP_Flaregun_RD_C.ExecuteUbergraph_ABP_Flaregun_RD //  // @ game+0x43bab4
};

