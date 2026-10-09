// BlueprintGeneratedClass ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C
// Size: 0xc28 (Inherited: 0xbe0)  [layout: KHOP]
struct AProjPackageFlareGrenade_summerland_C : ATslProjectileStructFlare {
	struct F*467c63d8f7 UberGraphFrame; // 0xbe0(0x10)
	struct U*f0b9332390* TslWorldOffset; // 0xbf0(0x08)
	struct UAkAudioEvent* StartSmokeSound; // 0xbf8(0x08)
	struct UAkAudioEvent* EndSmokeSound; // 0xc00(0x08)
	float ReleaseBuffer; // 0xc08(0x04)
	struct FVector ActorLocLastTick; // 0xc0c(0x0c)
	struct FVector InterpVelocity; // 0xc18(0x0c)
	float Particle_Alpha; // 0xc24(0x04)

	void UserConstructionScript(); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.ReceiveTick //  // @ game+0x43bab4
	void End(); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.End //  // @ game+0x43bab4
	struct FVector BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature(); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.BndEvt__TslWorldOffset_K2Node_ComponentBoundEvent_1_OnApplyWorldOffsetSignature__DelegateSignature //  // @ game+0x43bab4
	void EndEffectBP(); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.EndEffectBP //  // @ game+0x43bab4
	struct FVector ExecuteUbergraph_ProjPackageFlareGrenade_summerland(bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, struct FTimerHandle CallFunc__87d65520ff_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable2, int32 CallFunc__4d62f6eeb4_ReturnValue, bool Temp_bool_IsClosed_Variable2, float CallFunc_RandomFloat_ReturnValue, struct FVector CallFunc__363bbc0483_ReturnValue, struct FVector CallFunc__363bbc0483_ReturnValue2); // Function ProjPackageFlareGrenade_summerland.ProjPackageFlareGrenade_summerland_C.ExecuteUbergraph_ProjPackageFlareGrenade_summerland // NetReliableExec|Static|NetMulticast|MulticastDelegate|HasDefaults|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

