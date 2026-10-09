// BlueprintGeneratedClass BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C
// Size: 0x448 (Inherited: 0x400)  [layout: KHOP]
struct ABP_Rubber_boat_Preview_C : AActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UAkComponent* Ak Sound; // 0x410(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x418(0x08)
	struct UBuoyancyForceComponent* BuoyancyForce; // 0x420(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)
	bool bIsPlayEffect; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UPhysicalMaterial* Water; // 0x440(0x08)

	void UserConstructionScript(); // Function BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C.ReceiveBeginPlay //  // @ game+0x43bab4
	struct FVector BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct AActor* OtherActor); // Function BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C.ReceiveTick //  // @ game+0x43bab4
	float ExecuteUbergraph_BP_Rubber_boat_Preview(struct FVector CallFunc__a26287f0c3_ReturnValue, struct FVector CallFunc_BreakHitResult_Normal, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, struct AActor* CallFunc_BreakHitResult_HitActor, struct FVector CallFunc_BreakHitResult_TraceEnd, struct AActor* _47a48c903f_OtherActor, struct UPrimitiveComponent* _47a48c903f_OtherComp, struct FHitResult _47a48c903f_Hit); // Function BP_Rubber_boat_Preview.BP_Rubber_boat_Preview_C.ExecuteUbergraph_BP_Rubber_boat_Preview // Net|Native|Event|NetResponse|Static|NetMulticast|UbergraphFunction|MulticastDelegate|Private|Protected|NetServer|HasDefaults|NetClient|BlueprintCallable|BlueprintEvent|Const // @ game+0x43bab4
};

