// BlueprintGeneratedClass ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C
// Size: 0xc28 (Inherited: 0xbe0)  [layout: KHOP]
struct AProjPackageFlareGrenade_nonDest_C : ATslProjectileStructFlare {
	struct F*467c63d8f7 UberGraphFrame; // 0xbe0(0x10)
	struct U*f0b9332390* TslWorldOffset; // 0xbf0(0x08)
	struct UAkAudioEvent* StartSmokeSound; // 0xbf8(0x08)
	struct UAkAudioEvent* EndSmokeSound; // 0xc00(0x08)
	float ReleaseBuffer; // 0xc08(0x04)
	struct FVector ActorLocLastTick; // 0xc0c(0x0c)
	struct FVector InterpVelocity; // 0xc18(0x0c)
	float Particle_Alpha; // 0xc24(0x04)

	void UserConstructionScript(); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.ReceiveTick //  // @ game+0x43bab4
	void End(); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.End //  // @ game+0x43bab4
	void BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(struct FVector InOffset); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature //  // @ game+0x43bab4
	void EndEffectBP(); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.EndEffectBP //  // @ game+0x43bab4
	float ExecuteUbergraph_ProjPackageFlareGrenade_nonDest(bool Temp_bool_Has_Been_Initd_Variable2, float CallFunc__0c6cd8cb1d_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2); // Function ProjPackageFlareGrenade_nonDest.ProjPackageFlareGrenade_nonDest_C.ExecuteUbergraph_ProjPackageFlareGrenade_nonDest // NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|HasDefaults|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

