// BlueprintGeneratedClass BP_Projectile_40mm_Smoke.BP_Projectile_40mm_Smoke_C
// Size: 0x578 (Inherited: 0x538)  [layout: KHOP]
struct ABP_Projectile_40mm_Smoke_C : ATslProjectile_Grenade40mm {
	struct F*467c63d8f7 UberGraphFrame; // 0x538(0x10)
	struct UStaticMeshComponent* StaticMesh; // 0x548(0x08)
	struct FVector LastLocation; // 0x550(0x0c)
	struct FVector StartLoc; // 0x55c(0x0c)
	bool bFirstHit; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FTimerHandle TimerHandle; // 0x570(0x08)

	void UserConstructionScript(); // Function BP_Projectile_40mm_Smoke.BP_Projectile_40mm_Smoke_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Projectile_40mm_Smoke.BP_Projectile_40mm_Smoke_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveEndPlay(); // Function BP_Projectile_40mm_Smoke.BP_Projectile_40mm_Smoke_C.ReceiveEndPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_BP_Projectile_40mm_Smoke(int32 EntryPoint); // Function BP_Projectile_40mm_Smoke.BP_Projectile_40mm_Smoke_C.ExecuteUbergraph_BP_Projectile_40mm_Smoke //  // @ game+0x43bab4
};

