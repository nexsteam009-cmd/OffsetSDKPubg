// AnimBlueprintGeneratedClass ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C
// Size: 0x2164 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_M249_RD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_05B2AFB94C16E2372EA486AC6AA0BDD6; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_8A30B9CE4585E11D8646E1907FADCEFB; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_9D8603504B2C605D011460B5DE54AD6D; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_A98459334DCFC0DAAA59E8B84812C6B4; // 0x5c0(0x70)
	struct FAnimNode_AnimDynamics _461f86acf4_98BC0BA24B9B0122F3BB4CB5260ACD2A; // 0x630(0x388)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_5F89D0A04ED3685BB7AD85A64BB36DE5; // 0x9b8(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_3D87CCA246E49E5CB5B744B01A0728DC; // 0xa00(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_AEAB7DBD41576E6174EFE0810D8013C4; // 0xa48(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_55894E944B20995F9D5BBC8EEF6988D3; // 0xb88(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_14D885C3434A259867129896E3F5FBD0; // 0xcc8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_C44E4CCE4071630B37DF6CA3F30BCC7E; // 0xe08(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_3D3646164B23641E797BBE846DF062CB; // 0xf48(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_3630842143FA1CACFC0C5AB257409209; // 0x1088(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9CA613584D80BEC81EA0F3A64DDEAEA1; // 0x11c8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_C55ACFA64BDBBA886BEA56AB0F1AE40C; // 0x1308(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_B17F72514932D3D30E44269868F5AC14; // 0x1448(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9109F57744CEAB603EAE4EA5A781BBC6; // 0x1588(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_40DFA03347F9B9C4B4E76DA0F310B4C9; // 0x16c8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_136F1DC74956968D10B005B835FEBD56; // 0x1808(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_7B2BB07846170EB78EF906AAABEB211E; // 0x1948(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_3E8DBEDD431FAE8BD29AADB03AD05DD6; // 0x1a88(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_C615A8F748CEE819005355A829CE8649; // 0x1bc8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_BA6D5CD043DFA2DAAEB6058257B85D9F; // 0x1d08(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_374FDAE247BE783A67B8AEA1F039C1DA; // 0x1e48(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9ED8154F4C70D1AFFBB3EE96B82E7D99; // 0x1f88(0x140)
	struct FVector EF; // 0x20c8(0x0c)
	float Alpha; // 0x20d4(0x04)
	float Alpha_B; // 0x20d8(0x04)
	float Alpha_B; // 0x20dc(0x04)
	float Alpha_B; // 0x20e0(0x04)
	float Alpha_B; // 0x20e4(0x04)
	float Alpha_B; // 0x20e8(0x04)
	float Alpha_B; // 0x20ec(0x04)
	float Alpha_B; // 0x20f0(0x04)
	float Alpha_B; // 0x20f4(0x04)
	float Alpha_B; // 0x20f8(0x04)
	float Alpha_B; // 0x20fc(0x04)
	float Alpha_B; // 0x2100(0x04)
	float Alpha_B; // 0x2104(0x04)
	float Alpha_B; // 0x2108(0x04)
	float Alpha_B; // 0x210c(0x04)
	float Alpha_B; // 0x2110(0x04)
	int32 CurrentBulletCount; // 0x2114(0x04)
	struct ATslWeapon_Gun* GunRef; // 0x2118(0x08)
	struct ATslCharacter* CharRef; // 0x2120(0x08)
	float FollowLHandAlpha; // 0x2128(0x04)
	char pad_212C[0x4]; // 0x212c(0x04)
	struct FTransform ItemLPosition; // 0x2130(0x30)
	float BipodAlpha; // 0x2160(0x04)

	float Handle_Bipod(bool CallFunc_BooleanAND_ReturnValue); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.Handle_Bipod //  // @ game+0x43bab4
	void Handle_Reloads(bool CallFunc__ed87d5b0ee_ReturnValue); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.Handle_Reloads // Exec|Event|NetResponse|Public|Protected|HasOutParms|HasDefaults|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
	float EvaluateAmmo_Total(bool CallFunc_IsValid_ReturnValue, bool CallFunc__2845f0168c_ReturnValue, bool CallFunc__a9d85eef4e_ReturnValue, float CallFunc__2097e75d5c_ReturnValue, float CallFunc__2097e75d5c_ReturnValue5, bool CallFunc__a9d85eef4e_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue12, bool CallFunc__a9d85eef4e_ReturnValue13, float CallFunc__2097e75d5c_ReturnValue13); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateAmmo_Total //  // @ game+0x43bab4
	float EvaluateAmmo(bool CallFunc__4cbac9db3c_ReturnValue, float CallFunc__2097e75d5c_ReturnValue, float CallFunc__2097e75d5c_ReturnValue2, float CallFunc__2097e75d5c_ReturnValue6, bool CallFunc__a9d85eef4e_ReturnValue7, bool CallFunc__a9d85eef4e_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue13, float CallFunc__2097e75d5c_ReturnValue14, bool CallFunc__a9d85eef4e_ReturnValue15); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateAmmo //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_40DFA03347F9B9C4B4E76DA0F310B4C9(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_40DFA03347F9B9C4B4E76DA0F310B4C9 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_136F1DC74956968D10B005B835FEBD56(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_136F1DC74956968D10B005B835FEBD56 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_7B2BB07846170EB78EF906AAABEB211E(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_7B2BB07846170EB78EF906AAABEB211E //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3E8DBEDD431FAE8BD29AADB03AD05DD6(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3E8DBEDD431FAE8BD29AADB03AD05DD6 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C615A8F748CEE819005355A829CE8649(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C615A8F748CEE819005355A829CE8649 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_BA6D5CD043DFA2DAAEB6058257B85D9F(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_BA6D5CD043DFA2DAAEB6058257B85D9F //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_374FDAE247BE783A67B8AEA1F039C1DA(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_374FDAE247BE783A67B8AEA1F039C1DA //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9ED8154F4C70D1AFFBB3EE96B82E7D99(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9ED8154F4C70D1AFFBB3EE96B82E7D99 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C55ACFA64BDBBA886BEA56AB0F1AE40C(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C55ACFA64BDBBA886BEA56AB0F1AE40C //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9CA613584D80BEC81EA0F3A64DDEAEA1(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9CA613584D80BEC81EA0F3A64DDEAEA1 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3630842143FA1CACFC0C5AB257409209(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3630842143FA1CACFC0C5AB257409209 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9109F57744CEAB603EAE4EA5A781BBC6(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_9109F57744CEAB603EAE4EA5A781BBC6 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3D3646164B23641E797BBE846DF062CB(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_3D3646164B23641E797BBE846DF062CB //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C44E4CCE4071630B37DF6CA3F30BCC7E(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_C44E4CCE4071630B37DF6CA3F30BCC7E //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_14D885C3434A259867129896E3F5FBD0(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_14D885C3434A259867129896E3F5FBD0 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_55894E944B20995F9D5BBC8EEF6988D3(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_55894E944B20995F9D5BBC8EEF6988D3 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_AEAB7DBD41576E6174EFE0810D8013C4(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_AEAB7DBD41576E6174EFE0810D8013C4 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*461f86acf4_98BC0BA24B9B0122F3BB4CB5260ACD2A(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*461f86acf4_98BC0BA24B9B0122F3BB4CB5260ACD2A //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_B17F72514932D3D30E44269868F5AC14(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_RD_*2a098356c7_B17F72514932D3D30E44269868F5AC14 //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.WeaponFire_Event //  // @ game+0x43bab4
	void WeaponCharge_Event(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.WeaponCharge_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.Reload2_Event //  // @ game+0x43bab4
	void AnimNotify_HideAmmo(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.AnimNotify_HideAmmo //  // @ game+0x43bab4
	void AnimNotify_ShowAmmo(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.AnimNotify_ShowAmmo //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.CancelReload_Event //  // @ game+0x43bab4
	void OnEnteredProcessor(); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.OnEnteredProcessor //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_M249_RD(struct FVector CallFunc_BreakTransform_Location, float K2Node_Event_DeltaTimeX, struct AActor* CallFunc__6827ff0522_ReturnValue, struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, DelegateProperty _69bd57bce3_OutputDelegate6, struct ATslWeapon_Gun* K2Node_DynamicCast_AsTsl_Weapon_Gun, bool K2Node_DynamicCast_bSuccess); // Function ABP_Weapon_M249_RD.ABP_Weapon_M249_RD_C.ExecuteUbergraph_ABP_Weapon_M249_RD //  // @ game+0x43bab4
};

