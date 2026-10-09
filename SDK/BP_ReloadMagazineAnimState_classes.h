// BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct UBP_ReloadMagazineAnimState_C : U*6cb3274cae {
	enum class Enum_MagazineReloadAnimStateActionType ActionType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct AActor* Gun; // 0x48(0x08)

	void DropMag(struct USkeletalMeshComponent* MeshComp, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.DropMag //  // @ game+0x43bab4
	struct AActor* AttachMag(struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.AttachMag //  // @ game+0x43bab4
	void ShowMag(struct USkeletalMeshComponent* MeshComp, struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.ShowMag //  // @ game+0x43bab4
	bool Received_NotifyEnd(); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyEnd //  // @ game+0x43bab4
	struct UAnimSequenceBase* Received_NotifyBegin(float TotalDuration); // Function BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C.Received_NotifyBegin //  // @ game+0x43bab4
};

