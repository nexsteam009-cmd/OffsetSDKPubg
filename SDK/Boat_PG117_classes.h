// BlueprintGeneratedClass Boat_PG117.Boat_PG117_C
// Size: 0x7a8 (Inherited: 0x6d8)  [layout: KHOP]
struct ABoat_PG117_C : ABoatBase_C {
	struct F*467c63d8f7 UberGraphFrame; // 0x6d8(0x10)
	struct UBoxComponent* Box; // 0x6e8(0x08)
	struct UBoxComponent* RepairInteractCollision; // 0x6f0(0x08)
	struct UStaticMeshComponent* Windscreen; // 0x6f8(0x08)
	struct USphereComponent* PassengerBCCollision; // 0x700(0x08)
	struct USphereComponent* PassengerBRCollision; // 0x708(0x08)
	struct USphereComponent* PassengerBLCollision; // 0x710(0x08)
	struct USphereComponent* PassengerFRCollision; // 0x718(0x08)
	struct USphereComponent* DriverCollision; // 0x720(0x08)
	struct UCapsuleComponent* Capsule2; // 0x728(0x08)
	struct UCapsuleComponent* Capsule; // 0x730(0x08)
	struct U*cca2d6868e* MaterialClipVolumeSplashTop; // 0x738(0x08)
	struct U*cca2d6868e* MaterialClipVolume; // 0x740(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponentRudder; // 0x748(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x750(0x08)
	struct USphereComponent* Sphere4; // 0x758(0x08)
	struct U*cc699bb8fc* PassengerBCSeat; // 0x760(0x08)
	struct USphereComponent* Sphere3; // 0x768(0x08)
	struct U*cc699bb8fc* PassengerBRSeat; // 0x770(0x08)
	struct USphereComponent* Sphere2; // 0x778(0x08)
	struct U*cc699bb8fc* PassengerBLSeat; // 0x780(0x08)
	struct USphereComponent* Sphere1; // 0x788(0x08)
	struct U*cc699bb8fc* PassengerFRSeat; // 0x790(0x08)
	struct USphereComponent* Sphere; // 0x798(0x08)
	struct U*cc699bb8fc* DriverSeat; // 0x7a0(0x08)

	void UserConstructionScript(); // Function Boat_PG117.Boat_PG117_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function Boat_PG117.Boat_PG117_C.ReceiveBeginPlay //  // @ game+0x43bab4
	struct ATslPlayerStateBase* OnDeath(); // Function Boat_PG117.Boat_PG117_C.OnDeath //  // @ game+0x43bab4
	int32 ExecuteUbergraph_Boat_PG117(DelegateProperty _69bd57bce3_OutputDelegate, struct ATslPlayerStateBase* K2Node_CustomEvent_PlayerInstigator); // Function Boat_PG117.Boat_PG117_C.ExecuteUbergraph_Boat_PG117 // NetRequest|Exec|NetResponse|Static|Public|Private|Protected|Delegate|NetServer|HasDefaults|NetClient|BlueprintEvent|EditorOnly|NetValidate // @ game+0x43bab4
};

