// BlueprintGeneratedClass BP_Bicycle_Succubus.BP_Bicycle_Succubus_C
// Size: 0x139d (Inherited: 0x1330)  [layout: KHOP]
struct ABP_Bicycle_Succubus_C : ATslBicycleVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x1330(0x10)
	struct UCapsuleComponent* DriverCollision; // 0x1340(0x08)
	struct U*219c752cd7* BicycleItemInteraction; // 0x1348(0x08)
	struct UStaticMeshComponent* WeaponCollision_Body; // 0x1350(0x08)
	struct USphereComponent* Sphere; // 0x1358(0x08)
	struct U*a3eb76208a* DriverSeat; // 0x1360(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0x1368(0x08)
	struct U*1941226d0d* FirstPersonSpringArmInVehicle; // 0x1370(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x1378(0x08)
	struct U*1941226d0d* ThirdPersonSpringArmInVehicle; // 0x1380(0x08)
	struct UTslWheeledVehicleMovement* TslMovementRef; // 0x1388(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0x1390(0x08)
	float JumpBuffer; // 0x1398(0x04)
	bool TickJump; // 0x139c(0x01)

	void SetScalarParameters(); // Function BP_Bicycle_Succubus.BP_Bicycle_Succubus_C.SetScalarParameters //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_Bicycle_Succubus.BP_Bicycle_Succubus_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Bicycle_Succubus.BP_Bicycle_Succubus_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_BP_Bicycle_Succubus(); // Function BP_Bicycle_Succubus.BP_Bicycle_Succubus_C.ExecuteUbergraph_BP_Bicycle_Succubus //  // @ game+0x43bab4
};

