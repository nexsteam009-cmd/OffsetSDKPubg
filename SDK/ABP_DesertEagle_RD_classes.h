// AnimBlueprintGeneratedClass ABP_DesertEagle_RD.ABP_DesertEagle_RD_C
// Size: 0x5d0 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_DesertEagle_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_24AB80744E4DB6E6206C9CAA52E020B8; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_90502657457AD86599ED23B68F258E3C; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_6847793B49E5CE6AD56C61AF92DB2710; // 0x550(0x70)
	struct ATslWeapon_Gun* ActorRef; // 0x5c0(0x08)
	int32 CurrentAmmo; // 0x5c8(0x04)
	float ReleaseCatchDelay; // 0x5cc(0x04)

	void BlueprintUpdateAnimation(); // Function ABP_DesertEagle_RD.ABP_DesertEagle_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_DesertEagle_RD.ABP_DesertEagle_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_DesertEagle_RD.ABP_DesertEagle_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void ReleaseCatch(); // Function ABP_DesertEagle_RD.ABP_DesertEagle_RD_C.ReleaseCatch //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_DesertEagle_RD(float K2Node_Event_DeltaTimeX, int32 CallFunc__c5cb3593f1_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, bool K2Node_DynamicCast_bSuccess); // Function ABP_DesertEagle_RD.ABP_DesertEagle_RD_C.ExecuteUbergraph_ABP_DesertEagle_RD //  // @ game+0x43bab4
};

