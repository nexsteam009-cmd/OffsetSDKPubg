// BlueprintGeneratedClass BP_Motorbike_04.BP_Motorbike_04_C
// Size: 0x1250 (Inherited: 0x11d0)  [layout: KHOP]
struct ABP_Motorbike_04_C : ATslMotorbikeVehicle_Standalone {
	struct F*467c63d8f7 UberGraphFrame; // 0x11d0(0x10)
	struct UCapsuleComponent* DriverCollision; // 0x11e0(0x08)
	struct UCapsuleComponent* PassengerCollision; // 0x11e8(0x08)
	struct UStaticMeshComponent* WeaponCollision_Body; // 0x11f0(0x08)
	struct USphereComponent* Sphere1; // 0x11f8(0x08)
	struct U*a3eb76208a* PassengerSeat; // 0x1200(0x08)
	struct USphereComponent* Sphere; // 0x1208(0x08)
	struct U*a3eb76208a* DriverSeat; // 0x1210(0x08)
	struct URadialForceComponent* RadialForce; // 0x1218(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0x1220(0x08)
	struct U*1941226d0d* FirstPersonSpringArmInVehicle; // 0x1228(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x1230(0x08)
	struct U*1941226d0d* ThirdPersonSpringArmInVehicle; // 0x1238(0x08)
	struct UTslWheeledVehicleMovement* TslMovementRef; // 0x1240(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0x1248(0x08)

	void SetScalarParameters(); // Function BP_Motorbike_04.BP_Motorbike_04_C.SetScalarParameters //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_Motorbike_04.BP_Motorbike_04_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Motorbike_04.BP_Motorbike_04_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_BP_Motorbike_04(); // Function BP_Motorbike_04.BP_Motorbike_04_C.ExecuteUbergraph_BP_Motorbike_04 //  // @ game+0x43bab4
};

