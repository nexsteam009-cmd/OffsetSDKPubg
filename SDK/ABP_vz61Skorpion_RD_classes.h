// AnimBlueprintGeneratedClass ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C
// Size: 0x6ec (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_vz61Skorpion_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_E3B598B44CAEFED1A49BB6A38CD21373; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_E23B6A9340EB770EC783399B79DCD22A; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_7D3696E246BA053DDE0BF780B824ECB4; // 0x588(0x70)
	struct FAnimNode_Slot _bb400d36dc_3014D1D44D9426C08EEDF4824346672D; // 0x5f8(0x70)
	struct FAnimNode_SequencePlayer _289848426d_EDA778844973802598C5EC95A9B3F84B; // 0x668(0x70)
	float SightAlpha; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	struct ATslWeapon_Gun* ActorRef; // 0x6e0(0x08)
	int32 AmmoCount; // 0x6e8(0x04)

	void HandleFire(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.HandleFire //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.Reload2_Event //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_vz61Skorpion_RD(DelegateProperty _69bd57bce3_OutputDelegate5, struct AActor* CallFunc__6827ff0522_ReturnValue2, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, float CallFunc__969e536e1a_ReturnValue, struct UAnimMontage* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue2, struct AActor* CallFunc__6827ff0522_ReturnValue3, float CallFunc_Montage_Play_ReturnValue3); // Function ABP_vz61Skorpion_RD.ABP_vz61Skorpion_RD_C.ExecuteUbergraph_ABP_vz61Skorpion_RD //  // @ game+0x43bab4
};

