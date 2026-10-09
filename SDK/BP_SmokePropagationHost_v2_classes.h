// BlueprintGeneratedClass BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C
// Size: 0x438 (Inherited: 0x418)  [layout: KHOP]
struct ABP_SmokePropagationHost_v2_C : ATslSmokePropagation {
	struct F*467c63d8f7 UberGraphFrame; // 0x418(0x10)
	struct U*ccf62ed05a* TslSmokePropagation; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)

	void UserConstructionScript(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.UserConstructionScript //  // @ game+0x43bab4
	void End(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.End //  // @ game+0x43bab4
	struct AController* ReceiveAnyDamage(float Damage); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.ReceiveAnyDamage //  // @ game+0x43bab4
	void UpdateExplosionEffectsSorting(); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.UpdateExplosionEffectsSorting //  // @ game+0x43bab4
	struct U*c4837fc2d7* ExecuteUbergraph_BP_SmokePropagationHost_v2(int32 EntryPoint, struct ATslGameStateBase* CallFunc__2ac645cd40_ReturnValue, struct ATslDestructibleSurfaceManager* CallFunc__83c012df93_ReturnValue, struct AController* K2Node_Event_InstigatedBy, struct AActor* K2Node_Event_DamageCauser, bool K2Node_DynamicCast_bSuccess); // Function BP_SmokePropagationHost_v2.BP_SmokePropagationHost_v2_C.ExecuteUbergraph_BP_SmokePropagationHost_v2 // NetReliableEvent|NetResponse|NetMulticast|UbergraphFunction|MulticastDelegate|Public|Protected|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

