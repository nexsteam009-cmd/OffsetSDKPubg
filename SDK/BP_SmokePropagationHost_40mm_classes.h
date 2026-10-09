// BlueprintGeneratedClass BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C
// Size: 0x444 (Inherited: 0x418)  [layout: KHOP]
struct ABP_SmokePropagationHost_40mm_C : ATslSmokePropagation {
	struct F*467c63d8f7 UberGraphFrame; // 0x418(0x10)
	struct UAkComponent* AkComp; // 0x428(0x08)
	struct U*ccf62ed05a* TslSmokePropagation; // 0x430(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x438(0x08)
	int32 AkID; // 0x440(0x04)

	void UserConstructionScript(); // Function BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C.UserConstructionScript //  // @ game+0x43bab4
	void End(); // Function BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C.End //  // @ game+0x43bab4
	void ReceiveAnyDamage(float Damage, struct AController* InstigatedBy); // Function BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C.ReceiveAnyDamage //  // @ game+0x43bab4
	void UpdateExplosionEffectsSorting(); // Function BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C.UpdateExplosionEffectsSorting //  // @ game+0x43bab4
	bool ExecuteUbergraph_BP_SmokePropagationHost_40mm(struct TArray<struct AExplosionEffectsActor_C*> CallFunc_GetAllActorsOfClass_OutActors, float K2Node_Event_Damage, struct U*c4837fc2d7* K2Node_Event_DamageType, struct AActor* K2Node_Event_DamageCauser); // Function BP_SmokePropagationHost_40mm.BP_SmokePropagationHost_40mm_C.ExecuteUbergraph_BP_SmokePropagationHost_40mm // Exec|Native|Event|MulticastDelegate|HasDefaults|NetValidate // @ game+0x43bab4
};

