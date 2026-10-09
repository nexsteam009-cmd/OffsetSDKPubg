// Class CableComponent.CableActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x400(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb80 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xad8(0x01)
	bool bAttachEnd; // 0xad9(0x01)
	bool bUseLocalSpace; // 0xada(0x01)
	struct F*50535ef77f *e06e7fb156; // 0xae0(0x18)
	struct FName *aec5d73993; // 0xaf8(0x08)
	struct FName *85acdcc213; // 0xb00(0x08)
	struct FVector EndLocation; // 0xb08(0x0c)
	float CableLength; // 0xb14(0x04)
	int32 NumSegments; // 0xb18(0x04)
	float SubstepTime; // 0xb1c(0x04)
	int32 SolverIterations; // 0xb20(0x04)
	bool bEnableStiffness; // 0xb24(0x01)
	bool bUseSubstepping; // 0xb25(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xb26(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xb27(0x01)
	bool bEnableCollision; // 0xb28(0x01)
	char pad_B29[0x3]; // 0xb29(0x03)
	float CollisionFriction; // 0xb2c(0x04)
	float LinearDrag; // 0xb30(0x04)
	struct FVector CableForce; // 0xb34(0x0c)
	struct TArray<struct F*2a4825c97d> CustomSocketList; // 0xb40(0x10)
	float CableGravityScale; // 0xb50(0x04)
	float CableWidth; // 0xb54(0x04)
	float ExtendBounds; // 0xb58(0x04)
	int32 NumSides; // 0xb5c(0x04)
	float TileMaterial; // 0xb60(0x04)
	char pad_B64[0x1c]; // 0xb64(0x1c)

	void *e5a5737943(); // Function CableComponent.CableComponent.*e5a5737943 //  // @ game+0xfa926e0
	void *cd7691ef7c(); // Function CableComponent.CableComponent.*cd7691ef7c //  // @ game+0xfa928ac
	void *9abd94a00c(); // Function CableComponent.CableComponent.*9abd94a00c //  // @ game+0xfa92730
	void *2c2c2e8eb9(); // Function CableComponent.CableComponent.*2c2c2e8eb9 //  // @ game+0xfa926f8
};

