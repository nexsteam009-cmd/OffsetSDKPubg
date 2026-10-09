// Class PhysXVehicles.VehicleWheel
// Size: 0x190 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UVehicleWheel : UObject {
	struct UStaticMesh* *393259dbce; // 0x30(0x08)
	bool *b793d31d2e; // 0x38(0x01)
	bool *da03d93c62; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector Offset; // 0x3c(0x0c)
	float *9a52d91562; // 0x48(0x04)
	float *71ac2a2062; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float *fbf7da4818; // 0x54(0x04)
	float *88e95fa5c7; // 0x58(0x04)
	bool *dc92d5ba66; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct U*e413ab78e0* *e413ab78e0; // 0x60(0x08)
	struct U*ba9a980ef4* *ba9a980ef4; // 0x68(0x08)
	float *dee5c726a6; // 0x70(0x04)
	float *a51a238a87; // 0x74(0x04)
	float *b30fe185f9; // 0x78(0x04)
	float *5d9a5ec472; // 0x7c(0x04)
	float *a941a564b3; // 0x80(0x04)
	struct FVector *432b83a1d7; // 0x84(0x0c)
	struct FVector *2a2223485a; // 0x90(0x0c)
	float *07c7015a96; // 0x9c(0x04)
	float *dbe4063070; // 0xa0(0x04)
	float *5191366924; // 0xa4(0x04)
	float *31f92387ec; // 0xa8(0x04)
	float *3cc3017405; // 0xac(0x04)
	float *34d7d79d0e; // 0xb0(0x04)
	float *2f9f3296db; // 0xb4(0x04)
	struct F*afb5df6030 *afb5df6030; // 0xb8(0x14)
	float *8df61005fe; // 0xcc(0x04)
	float *225721cec7; // 0xd0(0x04)
	enum class ECollisionChannel *43ac0cb0f4; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0xd8(0x08)
	int32 WheelIndex; // 0xe0(0x04)
	float *013b888c73; // 0xe4(0x04)
	float *9407163ebb; // 0xe8(0x04)
	float *fdb1ecf6b6; // 0xec(0x04)
	char pad_F0[0x4]; // 0xf0(0x04)
	float *eccb972b52; // 0xf4(0x04)
	float *a069b919bd; // 0xf8(0x04)
	float *b7c1285143; // 0xfc(0x04)
	struct FVector Location; // 0x100(0x0c)
	struct FVector OldLocation; // 0x10c(0x0c)
	struct FVector Velocity; // 0x118(0x0c)
	float *41100fa180; // 0x124(0x04)
	char pad_128[0x68]; // 0x128(0x68)

	void *0ed42c65e4(); // Function PhysXVehicles.VehicleWheel.*0ed42c65e4 //  // @ game+0xfabeca8
	void *501418b11b(); // Function PhysXVehicles.VehicleWheel.*501418b11b //  // @ game+0xfabee68
	void *719e175387(); // Function PhysXVehicles.VehicleWheel.*719e175387 //  // @ game+0xfabec78
	void *a2b7aeb224(); // Function PhysXVehicles.VehicleWheel.*a2b7aeb224 //  // @ game+0xfabed10
	void *ff562e85a3(); // Function PhysXVehicles.VehicleWheel.*ff562e85a3 //  // @ game+0xfabecf0
	void *244ae038b5(); // Function PhysXVehicles.VehicleWheel.*244ae038b5 //  // @ game+0xfabec90
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x478 (Inherited: 0x468)  [layout: KHOP]
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x468(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x470(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_290[0x1c]; // 0x290(0x1c)
	char *f883ffe421 : 1; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct TArray<bool> *0f23cf40f4; // 0x2b0(0x10) rep=OnRep_TirePunctured
	struct TArray<struct F*7b8f095c83> *b9d1bcb305; // 0x2c0(0x10)
	struct TArray<struct F*0d8bdedc50> *d26efc6e59; // 0x2d0(0x10)
	float Mass; // 0x2e0(0x04)
	float DragCoefficient; // 0x2e4(0x04)
	float *4102aedb51; // 0x2e8(0x04)
	float *dd2ff38fc2; // 0x2ec(0x04)
	bool *1e4b9fd40d; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float *d9ecc18a81; // 0x2f4(0x04)
	float *70337d7aa6; // 0x2f8(0x04)
	float *bc2c097188; // 0x2fc(0x04)
	float *7e9d491eb8; // 0x300(0x04)
	struct FVector *4a74f1f04c; // 0x304(0x0c)
	float *02f77a157a; // 0x310(0x04)
	float *4398a88562; // 0x314(0x04)
	float *cbcdfb8eda; // 0x318(0x04)
	float *6227ef2832; // 0x31c(0x04)
	float *0bc9ccd07e; // 0x320(0x04)
	float *4f69a82454; // 0x324(0x04)
	int32 *a7e8eff176; // 0x328(0x04)
	int32 *97e6621477; // 0x32c(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x330(0x10)
	char pad_340[0x18]; // 0x340(0x18)
	char bUseRVOAvoidance : 1; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float RVOAvoidanceRadius; // 0x35c(0x04)
	float RVOAvoidanceHeight; // 0x360(0x04)
	float AvoidanceConsiderationRadius; // 0x364(0x04)
	float RVOSteeringStep; // 0x368(0x04)
	float RVOThrottleStep; // 0x36c(0x04)
	int32 AvoidanceUID; // 0x370(0x04)
	struct F*db2d87d85f AvoidanceGroup; // 0x374(0x04)
	struct F*db2d87d85f GroupsToAvoid; // 0x378(0x04)
	struct F*db2d87d85f GroupsToIgnore; // 0x37c(0x04)
	float AvoidanceWeight; // 0x380(0x04)
	struct FVector *729cf09d79; // 0x384(0x0c)
	char pad_390[0x4]; // 0x390(0x04)
	struct F*fe70d9ec0d *1edfd38714; // 0x394(0x1c)
	char pad_3B0[0xf0]; // 0x3b0(0xf0)
	float *21f86e371d; // 0x4a0(0x04)
	float *f7c1f2ddb4; // 0x4a4(0x04)
	float *7acc54a90a; // 0x4a8(0x04)
	char *9326049206 : 1; // 0x4ac(0x01)
	char *72ae1db6bf : 1; // 0x4ac(0x01)
	char *065e4a6bfe : 1; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float *d5c46df102; // 0x4b0(0x04)
	float *243cbf7187; // 0x4b4(0x04)
	float *d640920247; // 0x4b8(0x04)
	int32 *7c7e7a5361; // 0x4bc(0x04)
	float *a6fed82dd4; // 0x4c0(0x04)
	float *a8c93645a7; // 0x4c4(0x04)
	float BrakeInput; // 0x4c8(0x04)
	float *ec7e3739c0; // 0x4cc(0x04)
	float *76a726b8ae; // 0x4d0(0x04)
	float *c13bd4bc3f; // 0x4d4(0x04)
	float *469d8b189d; // 0x4d8(0x04)
	struct F*f2f7d55992 *ae0f0f982d; // 0x4dc(0x08)
	struct F*f2f7d55992 *b8ddf19c62; // 0x4e4(0x08)
	struct F*f2f7d55992 *a7d17bec62; // 0x4ec(0x08)
	struct F*f2f7d55992 *1954976b7f; // 0x4f4(0x08)
	char *26dd037848 : 1; // 0x4fc(0x01)
	char pad_4FD[0x43]; // 0x4fd(0x43)

	void *99bcd88ffd(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*99bcd88ffd //  // @ game+0xfabec58
	void *dc8daaa062(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*dc8daaa062 //  // @ game+0xfac3118
	void *8f0bd0dbea(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*8f0bd0dbea //  // @ game+0xfac3b60
	void *fc8a5e9640(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fc8a5e9640 //  // @ game+0xfac1a30
	void *d6979f53ca(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*d6979f53ca //  // @ game+0xfabfd10
	void *27bfd7388d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*27bfd7388d //  // @ game+0xfabed48
	void *c0e4ddf7e0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*c0e4ddf7e0 //  // @ game+0xfabfc8c
	void *ac1370992b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*ac1370992b //  // @ game+0xfac1bb8
	void *169635c4d3(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*169635c4d3 //  // @ game+0xfabf02c
	void *272e762dcd(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*272e762dcd //  // @ game+0xfac1c3c
	void *fce9b6ae46(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*fce9b6ae46 //  // @ game+0xfabec08
	void *b0f5240ec0(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*b0f5240ec0 //  // @ game+0xfac1b40
	void *912d69dc52(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*912d69dc52 //  // @ game+0xfac1d38
	void *7ced8c7e1d(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*7ced8c7e1d //  // @ game+0xfabecc8
	void *54ecf4ab53(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*54ecf4ab53 //  // @ game+0xfac31d0
	void OnRep_TirePunctured(); // Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured //  // @ game+0xfabee80
	void *4068f10841(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*4068f10841 //  // @ game+0xfabfc14
	void *44210f0cc1(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*44210f0cc1 //  // @ game+0xfabed28
	void *6909dd272f(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*6909dd272f //  // @ game+0xfabec28
	void *e91c31a66b(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*e91c31a66b //  // @ game+0xfac1cb4
	void *cbb417c0cb(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*cbb417c0cb //  // @ game+0xfac1ab8
	void *510faba8e7(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*510faba8e7 //  // @ game+0xfabfb44
	void GetVelocity(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetVelocity //  // @ game+0xfabee40
	void *eab49c9b77(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*eab49c9b77 //  // @ game+0xfac2788
	void *052b44f35a(); // Function PhysXVehicles.WheeledVehicleMovementComponent.*052b44f35a //  // @ game+0xfabec40
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x6a0 (Inherited: 0x540)  [layout: LECH - offset chi la uoc luong]
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct F*49b2b66e1d EngineSetup; // 0x538(0x90)
	struct F*0f481c7425 *cf04539a63; // 0x5c8(0x1c)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct FVehicleTransmissionData *45c57d5166; // 0x5e8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x618(0x78)
	float *8b4d7e19a5; // 0x690(0x04)
	char pad_694[0xc]; // 0x694(0x0c)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x920 (Inherited: 0x3a8)  [layout: LECH - offset chi la uoc luong]
struct UVehicleAnimInstance : UAnimInstance {
	char pad_3A8[0x558]; // 0x3a8(0x558)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x900(0x08)
	bool *650509543b; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	float *2d0c8a2baa; // 0x90c(0x04)
	float *a9799815ec; // 0x910(0x04)
	float *b9f99c59b1; // 0x914(0x04)
	char pad_918[0x8]; // 0x918(0x08)

	void *2b0e287889(); // Function PhysXVehicles.VehicleAnimInstance.*2b0e287889 //  // @ game+0xfabed68
};

// Class PhysXVehicles.*ba9a980ef4
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct U*ba9a980ef4 : UDataAsset {
	float *7c43a8f6c8; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct F*fc3c3b2f19> *e9227f5c1c; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct F*eaf6d5505e *3c73903921; // 0x58(0x28)
	bool *e217313df7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *c8e9038147; // 0x84(0x04)
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x540 (Inherited: 0x540)  [layout: KHOP]
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void *4ff8921db8(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*4ff8921db8 //  // @ game+0xfac06a0
	void *09792ccbc2(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*09792ccbc2 //  // @ game+0xfac1dc0
	void *e46a12a3bd(); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.*e46a12a3bd //  // @ game+0xfac1068
};

