// BlueprintGeneratedClass ProjStickyGrenade.ProjStickyGrenade_C
// Size: 0xbc4 (Inherited: 0xb80)  [layout: KHOP]
struct AProjStickyGrenade_C : ATslProjectile {
	struct F*467c63d8f7 UberGraphFrame; // 0xb80(0x10)
	struct FVector ExplodeLocation; // 0xb90(0x0c)
	char pad_B9C[0x4]; // 0xb9c(0x04)
	struct ATslCharacter* LocalShooterCharacter; // 0xba0(0x08)
	struct UAkAudioEvent* Tinnitus_Proximity; // 0xba8(0x08)
	struct UAkAudioEvent* Tinnitus_Direct; // 0xbb0(0x08)
	struct U*57e74159e1* BreachWall; // 0xbb8(0x08)
	int32 BreachWallInstanceIndex; // 0xbc0(0x04)

	void UserConstructionScript(); // Function ProjStickyGrenade.ProjStickyGrenade_C.UserConstructionScript //  // @ game+0x43bab4
	struct FRotator ExplodeBP(struct FHitResult Impact); // Function ProjStickyGrenade.ProjStickyGrenade_C.ExplodeBP //  // @ game+0x43bab4
	void OverrideExplosionDelay(); // Function ProjStickyGrenade.ProjStickyGrenade_C.OverrideExplosionDelay //  // @ game+0x43bab4
	struct FVector ReceiveHit(struct AActor* Other, bool bSelfMoved); // Function ProjStickyGrenade.ProjStickyGrenade_C.ReceiveHit //  // @ game+0x43bab4
	void DestroyMe(); // Function ProjStickyGrenade.ProjStickyGrenade_C.DestroyMe //  // @ game+0x43bab4
	bool ExecuteUbergraph_ProjStickyGrenade(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, struct TArray<enum class EObjectTypeQuery> _06972a843a_Array2, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUnderwater_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool K2Node_Event_bSelfMoved, struct FVector K2Node_Event_NormalImpulse, int32 K2Node_CustomEvent_InstanceIndex, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct AActor* CallFunc_BreakHitResult_HitActor, struct FName CallFunc_BreakHitResult_HitBoneName); // Function ProjStickyGrenade.ProjStickyGrenade_C.ExecuteUbergraph_ProjStickyGrenade // Net|NetReliableNetRequest|Native|Event|NetMulticast|Public|Protected|HasOutParms|HasDefaults|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
};

