// AnimBlueprintGeneratedClass ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C
// Size: 0xab8 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Winchester_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_4D77CA3B41376DF4E397078950812B6D; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_95FF1D38426EF7F456AA5F8FDA9B530E; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_AFED97FA47486DB5813E20BB7E8C0768; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_1219C715433B16A05BE111901DFC2A7A; // 0x5c0(0x70)
	struct FAnimNode_Slot _bb400d36dc_F5EF82244F5A056DDF7DFCB7E3B664B2; // 0x630(0x70)
	struct FAnimNode_AnimDynamics _461f86acf4_CCEC56EF4C6AE2B58FEC688B6A11F0AA; // 0x6a0(0x388)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_E1967D544E15B4DB737D978E4B4D83EC; // 0xa28(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_26B6AEE1446971DE46637EA9710357BE; // 0xa70(0x48)

	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFireCycle_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.WeaponFireCycle_Event //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void AnimNotify_WinchesterCycle(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.AnimNotify_WinchesterCycle //  // @ game+0x43bab4
	void ReloadByOneStart_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.ReloadByOneStart_Event //  // @ game+0x43bab4
	void ReloadByOneEnd_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.ReloadByOneEnd_Event //  // @ game+0x43bab4
	void ReloadByOneSingle_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.ReloadByOneSingle_Event //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.CancelReload_Event //  // @ game+0x43bab4
	bool ExecuteUbergraph_ABP_Weapon_Winchester_RD(int32 EntryPoint, DelegateProperty _69bd57bce3_OutputDelegate, DelegateProperty _69bd57bce3_OutputDelegate3, float CallFunc_Montage_Play_ReturnValue, struct UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_DynamicCast_bSuccess2, float CallFunc__969e536e1a_ReturnValue, float CallFunc__969e536e1a_ReturnValue2); // Function ABP_Weapon_Winchester_RD.ABP_Weapon_Winchester_RD_C.ExecuteUbergraph_ABP_Weapon_Winchester_RD // Net|NetReliableNetRequest|Native|Event|Static|NetMulticast|UbergraphFunction|Public|Private|Delegate|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|EditorOnly|Const // @ game+0x43bab4
};

