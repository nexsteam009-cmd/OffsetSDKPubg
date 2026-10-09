// AnimBlueprintGeneratedClass ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C
// Size: 0x890 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Crossbow_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_B597EDE64EB83122D4C2D98CBAED8D36; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_DAFA7C01450790B182E13BB5E7600D64; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_59BAC649419A437456DDDCA43BED6945; // 0x588(0x70)
	struct FAnimNode_SequencePlayer _289848426d_868BEEE049D84568D7CA8EB415BC29FB; // 0x5f8(0x70)
	struct FAnimNode_ModifyBone _2a098356c7_4464D7A540A7B2F48ACC9A8F34ECBF2E; // 0x668(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_82F46DE34E62B9196368F09228FFF132; // 0x7a8(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_E33B2F4A4DBAC6BA6BA9688BB5AAD2D4; // 0x7f0(0x48)
	struct UAnimMontage* LoadMontage; // 0x838(0x08)
	struct ATslCharacter* CharRef; // 0x840(0x08)
	struct ATslWeapon_Gun* GunRef; // 0x848(0x08)
	float FollowLHandAlpha; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)
	struct FTransform ItemLPosition; // 0x860(0x30)

	void Handle_Reloads(float CallFunc__c233ce48ee_ReturnValue, struct FTransform CallFunc__661f3a5973_ReturnValue); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.Handle_Reloads // NetReliableNetRequest|NetMulticast|UbergraphFunction|Protected|HasOutParms|NetClient|DLLImport|BlueprintPure|Const // @ game+0x43bab4
	float HandleLoadOnEnteredProcessor(bool CallFunc__3518f3f14d_ReturnValue); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.HandleLoadOnEnteredProcessor //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void Reload_Event(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.Reload_Event //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Crossbow_RD_*2a098356c7_4464D7A540A7B2F48ACC9A8F34ECBF2E(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Crossbow_RD_*2a098356c7_4464D7A540A7B2F48ACC9A8F34ECBF2E //  // @ game+0x43bab4
	void OnEnteredProcessor(); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.OnEnteredProcessor //  // @ game+0x43bab4
	struct ATslCharacter* ExecuteUbergraph_ABP_Weapon_Crossbow_RD(DelegateProperty _69bd57bce3_OutputDelegate, struct FVector CallFunc_BreakTransform_Scale, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, bool CallFunc__26da169f1b_ReturnValue); // Function ABP_Weapon_Crossbow_RD.ABP_Weapon_Crossbow_RD_C.ExecuteUbergraph_ABP_Weapon_Crossbow_RD //  // @ game+0x43bab4
};

