// BlueprintGeneratedClass Flare_Projectile.Flare_Projectile_C
// Size: 0x5c0 (Inherited: 0x568)  [layout: KHOP]
struct AFlare_Projectile_C : ATslProjectile_Flare {
	struct F*467c63d8f7 UberGraphFrame; // 0x568(0x10)
	struct UParticleSystemComponent* ParticleEffect_Tail; // 0x578(0x08)
	struct UParticleSystemComponent* ParticleEffect_Flare; // 0x580(0x08)
	bool HighAltReached; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	struct FVector LastLocation; // 0x58c(0x0c)
	struct FVector ProcessedLocation; // 0x598(0x0c)
	bool bIsPlayingTrailAk; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	int32 AkID; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UParticleSystem* Flare_Dry; // 0x5b0(0x08)
	struct UParticleSystem* Flare_Wet; // 0x5b8(0x08)

	void GetFlareParticle(); // Function Flare_Projectile.Flare_Projectile_C.GetFlareParticle //  // @ game+0x43bab4
	struct FParticleSysParam UpdateFlareParameters(struct FParticleSysParam K2Node_MakeStruct_ParticleSysParam3, struct FParticleSysParam K2Node_MakeStruct_ParticleSysParam4); // Function Flare_Projectile.Flare_Projectile_C.UpdateFlareParameters // NetRequest|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Private|Protected|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintCallable|BlueprintEvent|EditorOnly|Const // @ game+0x43bab4
	float CheckTrace(struct FVector CallFunc__a26287f0c3_ReturnValue, struct FVector CallFunc__0ce3f0f9b9_ReturnValue, struct FVector CallFunc__f1cbbe801f_ReturnValue2); // Function Flare_Projectile.Flare_Projectile_C.CheckTrace //  // @ game+0x43bab4
	void CheckBurn(); // Function Flare_Projectile.Flare_Projectile_C.CheckBurn //  // @ game+0x43bab4
	void ActivateFlare(); // Function Flare_Projectile.Flare_Projectile_C.ActivateFlare //  // @ game+0x43bab4
	void UserConstructionScript(); // Function Flare_Projectile.Flare_Projectile_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function Flare_Projectile.Flare_Projectile_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveDestroyed(); // Function Flare_Projectile.Flare_Projectile_C.ReceiveDestroyed //  // @ game+0x43bab4
	void SetAkAttenuationScaling_BP(); // Function Flare_Projectile.Flare_Projectile_C.SetAkAttenuationScaling_BP //  // @ game+0x43bab4
	void ActivateFlare_BP(); // Function Flare_Projectile.Flare_Projectile_C.ActivateFlare_BP //  // @ game+0x43bab4
	void OnUnderwaterChanged_BP(); // Function Flare_Projectile.Flare_Projectile_C.OnUnderwaterChanged_BP //  // @ game+0x43bab4
	void OnParticleTouchedWater_BP(); // Function Flare_Projectile.Flare_Projectile_C.OnParticleTouchedWater_BP //  // @ game+0x43bab4
	bool ExecuteUbergraph_Flare_Projectile(int32 EntryPoint, float K2Node_Event_InAttScale); // Function Flare_Projectile.Flare_Projectile_C.ExecuteUbergraph_Flare_Projectile //  // @ game+0x43bab4
};

