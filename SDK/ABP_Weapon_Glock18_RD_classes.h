// AnimBlueprintGeneratedClass ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C
// Size: 0x640 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Glock18_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_22DCE3FF450FA965ED5376BBAE0EF2A4; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_32EDE52A4CA6E53912FDEE9462FC367A; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_9934038B4564466E8995E0BE7DE9E04D; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_8EC5EC534A16309D1007179BFA58CA07; // 0x5c0(0x70)
	struct ATslWeapon_Gun* ActorRef; // 0x630(0x08)
	int32 CurrentAmmo; // 0x638(0x04)
	float ReleaseCatchDelay; // 0x63c(0x04)

	int32 Handle_FireSelector(bool CallFunc__3518f3f14d_ReturnValue); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.Handle_FireSelector //  // @ game+0x43bab4
	bool Handle_Fire(float CallFunc_Montage_Play_ReturnValue, bool CallFunc__ed87d5b0ee_ReturnValue); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.Handle_Fire //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.Reload2_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.FireSelect_Event //  // @ game+0x43bab4
	void SlideRelease(); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.SlideRelease //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_Weapon_Glock18_RD(DelegateProperty _69bd57bce3_OutputDelegate, DelegateProperty _69bd57bce3_OutputDelegate2, int32 CallFunc__c5cb3593f1_ReturnValue, struct AActor* CallFunc__6827ff0522_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, DelegateProperty _69bd57bce3_OutputDelegate4, float CallFunc__0c6cd8cb1d_ReturnValue); // Function ABP_Weapon_Glock18_RD.ABP_Weapon_Glock18_RD_C.ExecuteUbergraph_ABP_Weapon_Glock18_RD // Native|Static|UbergraphFunction|MulticastDelegate|NetServer|HasOutParms|NetClient|DLLImport|BlueprintPure|EditorOnly|Const // @ game+0x43bab4
};

