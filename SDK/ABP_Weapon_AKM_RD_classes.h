// AnimBlueprintGeneratedClass ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C
// Size: 0x6d8 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_AKM_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_647CB61F41D2E6D5EC9AAEA95DB64FCD; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_AC34577F432383302E7426A1052C993B; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_4D7A05F440E3E6D055E95383925A1458; // 0x588(0x70)
	struct FAnimNode_Slot _bb400d36dc_987A40D44223AF83C38B94AAFA2AF594; // 0x5f8(0x70)
	struct FAnimNode_SequencePlayer _289848426d_29979665471CAE1005B2B68E8DDC2B15; // 0x668(0x70)

	float HandleReloadCharge(struct AActor* CallFunc__6827ff0522_ReturnValue, bool CallFunc__c3598c2ea3_ReturnValue); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.HandleReloadCharge //  // @ game+0x43bab4
	float HandleReloadTactical(bool K2Node_DynamicCast_bSuccess, float CallFunc__969e536e1a_ReturnValue); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.HandleReloadTactical //  // @ game+0x43bab4
	int32 HandleFireSelector(struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, enum class EFiringMode CallFunc__2c5f61cb42_ReturnValue, bool CallFunc__3518f3f14d_ReturnValue); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.HandleFireSelector //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.Reload1_Event //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.Reload2_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.CancelReload_Event //  // @ game+0x43bab4
	DelegateProperty ExecuteUbergraph_ABP_Weapon_AKM_RD(DelegateProperty _69bd57bce3_OutputDelegate2); // Function ABP_Weapon_AKM_RD.ABP_Weapon_AKM_RD_C.ExecuteUbergraph_ABP_Weapon_AKM_RD //  // @ game+0x43bab4
};

