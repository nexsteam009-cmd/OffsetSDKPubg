// AnimBlueprintGeneratedClass ABP_Weapon_RPD.ABP_Weapon_RPD_C
// Size: 0x22a4 (Inherited: 0x4b8)  [layout: KHOP]
struct UABP_Weapon_RPD_C : U*88f9fb7ebe {
	struct F*467c63d8f7 UberGraphFrame; // 0x4b8(0x10)
	struct FAnimNode_Root _5b41b6d333_C4E8E6284E5AF424D2D0708A988DB126; // 0x4c8(0x50)
	struct FAnimNode_RefPose _38c4d66547_69EF89AD4B37C786B2A328B7BC921640; // 0x518(0x38)
	struct FAnimNode_Slot _bb400d36dc_FF91DB7249D2198C3BF35B81E4AA9C04; // 0x550(0x70)
	struct FAnimNode_Slot _bb400d36dc_D21D1F7F4A0E7196DDDE1B8500FEBE7B; // 0x5c0(0x70)
	struct FAnimNode_AnimDynamics _461f86acf4_186E55F0418B8A920269619D886D8650; // 0x630(0x388)
	struct FAnimNode_ModifyBone _2a098356c7_D3A80F254FCD45E1A4B1318F7B9A1C76; // 0x9b8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_CAA739D648D04385862C1DAEC1AAE359; // 0xaf8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_50436BDE45C6CB6DA39979A78F060097; // 0xc38(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_19BBA5524E246534658194B923D82A1F; // 0xd78(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_810C135C4BFD0113F10D78AF82CD5B4C; // 0xeb8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_BA060D64489A686F3BA090AC4A0C65FE; // 0xff8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_9DEB034A4C19D0FF2A8EEF8AF36627F0; // 0x1138(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_D42E048E4C2F680797F4389B0EE3EB73; // 0x1278(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_7C41B6FB42B22AC7F8652194303D0A76; // 0x13b8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_A7517CDD476CB551ECF96DBE78357FD2; // 0x14f8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_F42F2C704FE4E5FB35A2B7BFCD28C6AB; // 0x1638(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_5E014D394D81C961FE0D50A80A550789; // 0x1778(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_94B0DE924C1F8DAF2B0EE2BD69841AD3; // 0x18b8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_B2D5EF82422740AC90F421BEE2124650; // 0x19f8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_EABEA47B4F7975913ECDEFB4333A6F3E; // 0x1b38(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_F4A4446E460902ADDA0B55B16A8E2578; // 0x1c78(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_F7A9D341404C63940DAFAD9C6DC28636; // 0x1db8(0x140)
	struct FAnimNode_ModifyBone _2a098356c7_F3080BA5498EF96BF89EA1A974DF0521; // 0x1ef8(0x140)
	struct FAnimNode_ConvertLocalToComponentSpace _0784c3f024_4874D673412302209BF82DA8B3C84A7D; // 0x2038(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace _a53d403976_A01D905C4D54837D8A3ABBB1D7B22F2C; // 0x2080(0x48)
	struct FAnimNode_ModifyBone _2a098356c7_C823895440AE5A224037E5BD95E08D96; // 0x20c8(0x140)
	struct FVector EF; // 0x2208(0x0c)
	float Alpha; // 0x2214(0x04)
	float Alpha_B; // 0x2218(0x04)
	float Alpha_B; // 0x221c(0x04)
	float Alpha_B; // 0x2220(0x04)
	float Alpha_B; // 0x2224(0x04)
	float Alpha_B; // 0x2228(0x04)
	float Alpha_B; // 0x222c(0x04)
	float Alpha_B; // 0x2230(0x04)
	float Alpha_B; // 0x2234(0x04)
	float Alpha_B; // 0x2238(0x04)
	float Alpha_B; // 0x223c(0x04)
	float Alpha_B; // 0x2240(0x04)
	float Alpha_B; // 0x2244(0x04)
	float Alpha_B; // 0x2248(0x04)
	float Alpha_B; // 0x224c(0x04)
	float Alpha_B; // 0x2250(0x04)
	int32 CurrentBulletCount; // 0x2254(0x04)
	struct ATslWeapon_Gun* GunRef; // 0x2258(0x08)
	struct ATslCharacter* CharRef; // 0x2260(0x08)
	float FollowLHandAlpha; // 0x2268(0x04)
	char pad_226C[0x4]; // 0x226c(0x04)
	struct FTransform ItemLPosition; // 0x2270(0x30)
	float BipodAlpha; // 0x22a0(0x04)

	float Handle_Bipod(bool CallFunc_BooleanAND_ReturnValue); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.Handle_Bipod //  // @ game+0x43bab4
	struct FTransform Handle_Reloads(bool CallFunc__ed87d5b0ee_ReturnValue2); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.Handle_Reloads // Net|Native|Static|NetMulticast|MulticastDelegate|Private|HasDefaults|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|EditorOnly|Const // @ game+0x43bab4
	bool EvaluateAmmo_Total(int32 LocalBulletCount, int32 CallFunc__8c4babad91_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc__a9d85eef4e_ReturnValue3, bool CallFunc__a9d85eef4e_ReturnValue4, bool CallFunc__a9d85eef4e_ReturnValue5, bool CallFunc__a9d85eef4e_ReturnValue6, float CallFunc__2097e75d5c_ReturnValue6, bool CallFunc__a9d85eef4e_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue7, float CallFunc__2097e75d5c_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue9, bool CallFunc__a9d85eef4e_ReturnValue13, float CallFunc__2097e75d5c_ReturnValue13); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateAmmo_Total //  // @ game+0x43bab4
	float EvaluateAmmo(bool CallFunc_IsValid_ReturnValue, struct ATslCharacter* CallFunc__1a80d8f937_ReturnValue, bool CallFunc__4cbac9db3c_ReturnValue, float CallFunc__2097e75d5c_ReturnValue3, float CallFunc__2097e75d5c_ReturnValue5, bool CallFunc__a9d85eef4e_ReturnValue6, bool CallFunc__a9d85eef4e_ReturnValue8, float CallFunc__2097e75d5c_ReturnValue9, bool CallFunc__a9d85eef4e_ReturnValue11, float CallFunc__2097e75d5c_ReturnValue12, bool CallFunc__a9d85eef4e_ReturnValue13, float CallFunc__2097e75d5c_ReturnValue13, bool CallFunc__a9d85eef4e_ReturnValue15); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateAmmo //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F42F2C704FE4E5FB35A2B7BFCD28C6AB(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F42F2C704FE4E5FB35A2B7BFCD28C6AB //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_5E014D394D81C961FE0D50A80A550789(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_5E014D394D81C961FE0D50A80A550789 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_94B0DE924C1F8DAF2B0EE2BD69841AD3(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_94B0DE924C1F8DAF2B0EE2BD69841AD3 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_B2D5EF82422740AC90F421BEE2124650(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_B2D5EF82422740AC90F421BEE2124650 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_EABEA47B4F7975913ECDEFB4333A6F3E(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_EABEA47B4F7975913ECDEFB4333A6F3E //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F4A4446E460902ADDA0B55B16A8E2578(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F4A4446E460902ADDA0B55B16A8E2578 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F7A9D341404C63940DAFAD9C6DC28636(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F7A9D341404C63940DAFAD9C6DC28636 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F3080BA5498EF96BF89EA1A974DF0521(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_F3080BA5498EF96BF89EA1A974DF0521 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_C823895440AE5A224037E5BD95E08D96(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_C823895440AE5A224037E5BD95E08D96 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_7C41B6FB42B22AC7F8652194303D0A76(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_7C41B6FB42B22AC7F8652194303D0A76 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_D42E048E4C2F680797F4389B0EE3EB73(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_D42E048E4C2F680797F4389B0EE3EB73 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_9DEB034A4C19D0FF2A8EEF8AF36627F0(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_9DEB034A4C19D0FF2A8EEF8AF36627F0 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_BA060D64489A686F3BA090AC4A0C65FE(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_BA060D64489A686F3BA090AC4A0C65FE //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_810C135C4BFD0113F10D78AF82CD5B4C(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_810C135C4BFD0113F10D78AF82CD5B4C //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_19BBA5524E246534658194B923D82A1F(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_19BBA5524E246534658194B923D82A1F //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_50436BDE45C6CB6DA39979A78F060097(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_50436BDE45C6CB6DA39979A78F060097 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_CAA739D648D04385862C1DAEC1AAE359(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_CAA739D648D04385862C1DAEC1AAE359 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_D3A80F254FCD45E1A4B1318F7B9A1C76(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_D3A80F254FCD45E1A4B1318F7B9A1C76 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*461f86acf4_186E55F0418B8A920269619D886D8650(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*461f86acf4_186E55F0418B8A920269619D886D8650 //  // @ game+0x43bab4
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_A7517CDD476CB551ECF96DBE78357FD2(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_RPD_*2a098356c7_A7517CDD476CB551ECF96DBE78357FD2 //  // @ game+0x43bab4
	void BlueprintUpdateAnimation(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void BlueprintInitializeAnimation(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void WeaponFire_Event(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.WeaponFire_Event //  // @ game+0x43bab4
	void WeaponCharge_Event(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.WeaponCharge_Event //  // @ game+0x43bab4
	void Reload1_Event(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.Reload1_Event //  // @ game+0x43bab4
	void Reload2_Event(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.Reload2_Event //  // @ game+0x43bab4
	void AnimNotify_HideAmmo(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.AnimNotify_HideAmmo //  // @ game+0x43bab4
	void AnimNotify_ShowAmmo(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.AnimNotify_ShowAmmo //  // @ game+0x43bab4
	void CancelReload_Event(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.CancelReload_Event //  // @ game+0x43bab4
	void OnEnteredProcessor(); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.OnEnteredProcessor //  // @ game+0x43bab4
	float ExecuteUbergraph_ABP_Weapon_RPD(struct FVector CallFunc__ad1a6ecfbd_ReturnValue, struct FVector CallFunc__206d1f34b4_ReturnValue, struct FVector CallFunc__363bbc0483_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue2); // Function ABP_Weapon_RPD.ABP_Weapon_RPD_C.ExecuteUbergraph_ABP_Weapon_RPD //  // @ game+0x43bab4
};

