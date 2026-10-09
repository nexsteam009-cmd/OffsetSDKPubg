// BlueprintGeneratedClass P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C
// Size: 0x528 (Inherited: 0x4f0)  [layout: KHOP]
struct AP_Vehicle_Explosion_BP_C : ATslParticle {
	bool bEnableSurfaceSwitch; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UParticleSystem* PS_Water; // 0x4f8(0x08)
	struct UParticleSystem* PS_Dirt; // 0x500(0x08)
	struct UParticleSystem* PS_Default; // 0x508(0x08)
	struct UParticleSystem* PS_Sand; // 0x510(0x08)
	struct UParticleSystem* PS_Mud; // 0x518(0x08)
	struct UParticleSystem* PS_Snow; // 0x520(0x08)

	bool SwitchBasedOnSurface(enum class EPhysicalSurface HitSurface, float CallFunc_BreakRotator_Yaw, bool CallFunc__28e0028cfd_ReturnValue, bool CallFunc__ee1d426b8e_OutbIsInWater, float CallFunc__ee1d426b8e_OutWaterHeight, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Z2, float CallFunc__d76cc25d00_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue, struct FHitResult CallFunc_K2_SetActorLocation_SweepHitResult); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.SwitchBasedOnSurface // NetRequest|Exec|Native|NetResponse|UbergraphFunction|Public|Private|Delegate|NetServer|NetClient|BlueprintCallable|EditorOnly|Const // @ game+0x43bab4
	void UserConstructionScript(); // Function P_Vehicle_Explosion_BP.P_Vehicle_Explosion_BP_C.UserConstructionScript //  // @ game+0x43bab4
};

