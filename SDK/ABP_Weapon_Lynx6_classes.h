// AnimBlueprintGeneratedClass ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C
// Size: 0xfa8 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_Lynx6_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_5E02313C4B7EFBC00C576AA8E3C509D7; // 0x4c8(0x50)
	struct FAnimNode_Slot _bb400d36dc_03858E354E3A60D965ADBF86BDAFCD7D; // 0x518(0x70)
	struct FAnimNode_Slot _bb400d36dc_E917DA30414CB5FDE0D028819B7DC2F0; // 0x588(0x70)
	struct FAnimNode_RefPose _38c4d66547_4ACC9DE54056401576C57893A599CABC; // 0x5f8(0x38)
	struct FAnimNode_ModifyBone _2a098356c7_3F7D3784414340CC93736BA5BB37320A; // 0x630(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9996ADB943C520EFABD664BC42F8A99C; // 0x770(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_00B6B8B14CF9F3BB5F8BE7BC6A68A19E; // 0x8b0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_787D2ACB43D62B510C4C9EBE945D935B; // 0x8f8(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_66475EE94A9F9B633D1F7F960769CD09; // 0x940(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_81D8F9D74353A28637C0CFA2D1B7ACEA; // 0xa80(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_0508E1614A04480D6158218671FFD6BF; // 0xbc0(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_E09D2DC94BCB51220440A98B4420AC0D; // 0xd00(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_7A28C74045FA7B0B7C15A08BE6E01488; // 0xe40(0x140)
	struct ATslWeapon_Gun* ActorRef; // 0xf80(0x08)
	float SightAlpha; // 0xf88(0x04)
	char pad_F8C[0x4]; // 0xf8c(0x04)
	struct ATslCharacter* CharRef; // 0xf90(0x08)
	struct ATslWeapon_Gun* GunRef; // 0xf98(0x08)
	float BipodAlpha; // 0xfa0(0x04)
	float PeepholeAlpha; // 0xfa4(0x04)

	enum class EStanceMode HandleBipod(bool CallFunc__e122bfc350_ReturnValue2); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.HandleBipod //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_E09D2DC94BCB51220440A98B4420AC0D(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_E09D2DC94BCB51220440A98B4420AC0D //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_7A28C74045FA7B0B7C15A08BE6E01488(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_7A28C74045FA7B0B7C15A08BE6E01488 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_81D8F9D74353A28637C0CFA2D1B7ACEA(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_81D8F9D74353A28637C0CFA2D1B7ACEA //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_66475EE94A9F9B633D1F7F960769CD09(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_66475EE94A9F9B633D1F7F960769CD09 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_9996ADB943C520EFABD664BC42F8A99C(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_9996ADB943C520EFABD664BC42F8A99C //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_3F7D3784414340CC93736BA5BB37320A(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_3F7D3784414340CC93736BA5BB37320A //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.WeaponFire_Event //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void FireSelect_Event(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.FireSelect_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.Reload2_Event //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_0508E1614A04480D6158218671FFD6BF(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Lynx6_*2a098356c7_0508E1614A04480D6158218671FFD6BF //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.CancelReload_Event //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_Lynx6(int32 EntryPoint, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun2, bool K2Node_DynamicCast_bSuccess2, float CallFunc__969e536e1a_ReturnValue2, struct AActor* CallFunc__6827ff0522_ReturnValue4, bool K2Node_DynamicCast_bSuccess4); // Function ABP_Weapon_Lynx6.ABP_Weapon_Lynx6_C.ExecuteUbergraph_ABP_Weapon_Lynx6 //  // @ game+0x43bab4
};

