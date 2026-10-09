// BlueprintGeneratedClass ProjSmokeBomb_v2.ProjSmokeBomb_v2_C
// Size: 0xbdc (Inherited: 0xb90)  [layout: KHOP]
struct AProjSmokeBomb_v2_C : ATslProjectile_SmokeBomb {
	struct F*467c63d8f7 UberGraphFrame; // 0xb90(0x10)
	struct U*f0b9332390* TslWorldOffset; // 0xba0(0x08)
	float HitTimer; // 0xba8(0x04)
	float HitImpactMin; // 0xbac(0x04)
	float HitImpactMax; // 0xbb0(0x04)
	float HitMinVelocity; // 0xbb4(0x04)
	float HitTimeDelay; // 0xbb8(0x04)
	bool bSmokeSpawned; // 0xbbc(0x01)
	char pad_BBD[0x3]; // 0xbbd(0x03)
	float ReleaseBuffer; // 0xbc0(0x04)
	struct FVector ActorLocLastTick; // 0xbc4(0x0c)
	struct FVector InterpVelocity; // 0xbd0(0x0c)

	void UserConstructionScript(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveTick //  // @ game+0x43bab4
	void BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(struct FVector InOffset); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveEndPlay(); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveEndPlay //  // @ game+0x43bab4
	float ExecuteUbergraph_ProjSmokeBomb_v2(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, struct FVector _47a48c903f_InOffset, float CallFunc_Lerp_ReturnValue2, struct FVector CallFunc__ad1a6ecfbd_ReturnValue2, struct FVector CallFunc__aaeea91a78_ReturnValue, struct FVector CallFunc__363bbc0483_ReturnValue); // Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ExecuteUbergraph_ProjSmokeBomb_v2 //  // @ game+0x43bab4
};

