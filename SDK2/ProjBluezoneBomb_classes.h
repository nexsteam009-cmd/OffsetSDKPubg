// BlueprintGeneratedClass ProjBluezoneBomb.ProjBluezoneBomb_C
// Size: 0xbdc (Inherited: 0xb80)  [layout: KHOP]
struct AProjBluezoneBomb_C : ATslProjectile {
	struct F*467c63d8f7 UberGraphFrame; // 0xb80(0x10)
	struct U*f0b9332390* TslWorldOffset; // 0xb90(0x08)
	struct UAkAudioEvent* StartSmokeSound; // 0xb98(0x08)
	struct UAkAudioEvent* EndSmokeSound; // 0xba0(0x08)
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

	void UserConstructionScript(); // Function ProjBluezoneBomb.ProjBluezoneBomb_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjBluezoneBomb.ProjBluezoneBomb_C.ReceiveTick //  // @ game+0x43bab4
	void End(); // Function ProjBluezoneBomb.ProjBluezoneBomb_C.End //  // @ game+0x43bab4
	void BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(struct FVector InOffset); // Function ProjBluezoneBomb.ProjBluezoneBomb_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature //  // @ game+0x43bab4
	float ExecuteUbergraph_ProjBluezoneBomb(bool CallFunc_IsActive_ReturnValue2, bool Temp_bool_IsClosed_Variable, int32 CallFunc__4d62f6eeb4_ReturnValue, struct FVector _47a48c903f_InOffset, struct FVector CallFunc__ad1a6ecfbd_ReturnValue, struct FVector CallFunc__ad1a6ecfbd_ReturnValue3); // Function ProjBluezoneBomb.ProjBluezoneBomb_C.ExecuteUbergraph_ProjBluezoneBomb // NetReliableNetRequest|Native|UbergraphFunction|Private|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
};

