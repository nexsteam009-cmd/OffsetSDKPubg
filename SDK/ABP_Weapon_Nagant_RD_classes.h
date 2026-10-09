// AnimBlueprintGeneratedClass ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C
// Size: 0x638 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Nagant_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_30B8556F46DD42417457A495D1A543D8; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_1AE318424624D9FFAA36B58D3AFA5F6C; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_26A012084FA6248AFF80479652B869B5; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_32383BD541A32B77FA6E20859F225E00; // 0x5c0(0x70)
	struct ATslWeapon_Gun* ActorRef; // 0x630(0x08)

	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void ReloadByOneStart_Event(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.ReloadByOneStart_Event //  // @ game+0x43bab4
	void ReloadByOneSingle_Event(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.ReloadByOneSingle_Event //  // @ game+0x43bab4
	void ReloadByOneEnd_Event(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.ReloadByOneEnd_Event //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void AnimNotify_ShellEject(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.AnimNotify_ShellEject //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.CancelReload_Event //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_Nagant_RD(DelegateProperty _69bd57bce3_OutputDelegate2, struct AP_Pistol_Nagant_BP_C* CallFunc_FinishSpawningActor_ReturnValue, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2); // Function ABP_Weapon_Nagant_RD.ABP_Weapon_Nagant_RD_C.ExecuteUbergraph_ABP_Weapon_Nagant_RD // Net|Event|Static|NetMulticast|UbergraphFunction|MulticastDelegate|NetServer|HasOutParms|NetClient|DLLImport|BlueprintPure|EditorOnly|Const // @ game+0x43bab4
};

