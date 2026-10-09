// BlueprintGeneratedClass ProjStructureFlareGrenade.ProjStructureFlareGrenade_C
// Size: 0xc28 (Inherited: 0xbe0)  [layout: KHOP]
struct AProjStructureFlareGrenade_C : ATslProjectileStructFlare {
	struct F*467c63d8f7 UberGraphFrame; // 0xbe0(0x10)
	struct U*f0b9332390* TslWorldOffset; // 0xbf0(0x08)
	struct UAkAudioEvent* StartSmokeSound; // 0xbf8(0x08)
	struct UAkAudioEvent* EndSmokeSound; // 0xc00(0x08)
	float ReleaseBuffer; // 0xc08(0x04)
	struct FVector ActorLocLastTick; // 0xc0c(0x0c)
	struct FVector InterpVelocity; // 0xc18(0x0c)
	float Particle_Alpha; // 0xc24(0x04)

	void UserConstructionScript(); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.ReceiveTick //  // @ game+0x43bab4
	void End(); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.End //  // @ game+0x43bab4
	struct FVector BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature //  // @ game+0x43bab4
	void EndEffectBP(); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.EndEffectBP //  // @ game+0x43bab4
	float ExecuteUbergraph_ProjStructureFlareGrenade(bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable2, bool CallFunc_IsActive_ReturnValue, bool Temp_bool_IsClosed_Variable2, float CallFunc_RandomFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue2); // Function ProjStructureFlareGrenade.ProjStructureFlareGrenade_C.ExecuteUbergraph_ProjStructureFlareGrenade // NetReliableNetRequest|Exec|UbergraphFunction|Public|Protected|HasOutParms|HasDefaults|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
};

