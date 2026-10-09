// BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C
// Size: 0x450 (Inherited: 0x400)  [layout: KHOP]
struct ABP_ActiveRagdollActor_C : AActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UBillboardComponent* Billboard; // 0x410(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraint; // 0x418(0x08)
	struct UArrowComponent* Arrow; // 0x420(0x08)
	struct UCapsuleComponent* Capsule; // 0x428(0x08)
	struct USceneComponent* Scene; // 0x430(0x08)
	struct FVector ServerPosition; // 0x438(0x0c)
	bool ClientInitialized; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct APlayerPawn_v2_C* ParentRef; // 0x448(0x08)

	void SetServerPos(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos //  // @ game+0x43bab4
	struct FString InitClient(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient //  // @ game+0x43bab4
	void InitServer(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick //  // @ game+0x43bab4
	float ExecuteUbergraph_BP_ActiveRagdollActor(int32 EntryPoint, struct FString CallFunc__5c08aa2dfe_ReturnValue, bool CallFunc__4cbac9db3c_ReturnValue2, float CallFunc__375f389eec_ReturnValue); // Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor // NetRequest|Exec|Native|NetMulticast|MulticastDelegate|Public|Private|NetServer|HasOutParms|HasDefaults|NetClient|DLLImport|BlueprintEvent|NetValidate // @ game+0x43bab4
};

