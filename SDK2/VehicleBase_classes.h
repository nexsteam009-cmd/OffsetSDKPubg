// BlueprintGeneratedClass VehicleBase.VehicleBase_C
// Size: 0x1060 (Inherited: 0x1000)  [layout: KHOP]
struct AVehicleBase_C : ATslWheeledVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x1000(0x10)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x1010(0x08)
	struct U*1941226d0d* ThirdPersonSpringArmInVehicle; // 0x1018(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0x1020(0x08)
	struct U*1941226d0d* FirstPersonSpringArmInVehicle; // 0x1028(0x08)
	struct URadialForceComponent* RadialForce; // 0x1030(0x08)
	struct UTslWheeledVehicleMovement* TslWheeledVehicleMovementRef; // 0x1038(0x08)
	struct UTslWheeledVehicleMovement* MovementComponent_Ref; // 0x1040(0x08)
	struct USpotLightComponent* TopSupportLight; // 0x1048(0x08)
	struct USpotLightComponent* MainHeadlight; // 0x1050(0x08)
	struct UStaticMeshComponent* Pickup_Headlights; // 0x1058(0x08)

	void SetScalarParameters(); // Function VehicleBase.VehicleBase_C.SetScalarParameters //  // @ game+0x43bab4
	void UserConstructionScript(); // Function VehicleBase.VehicleBase_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function VehicleBase.VehicleBase_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_VehicleBase(); // Function VehicleBase.VehicleBase_C.ExecuteUbergraph_VehicleBase //  // @ game+0x43bab4
};

