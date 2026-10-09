// BlueprintGeneratedClass BP_Motorglider.BP_Motorglider_C
// Size: 0x1170 (Inherited: 0x10d0)  [layout: KHOP]
struct ABP_Motorglider_C : ATslFlyingVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x10d0(0x10)
	struct USphereComponent* PassengerCollision; // 0x10e0(0x08)
	struct USphereComponent* DriverCollision; // 0x10e8(0x08)
	struct UStaticMeshComponent* WindscreenFront; // 0x10f0(0x08)
	struct USphereComponent* EngineBlockCollision; // 0x10f8(0x08)
	struct UStaticMeshComponent* WeaponCollision_Wheelhub_L; // 0x1100(0x08)
	struct UStaticMeshComponent* WeaponCollision_wheelhub_R; // 0x1108(0x08)
	struct UStaticMeshComponent* WeaponCollision_Wing; // 0x1110(0x08)
	struct UStaticMeshComponent* WeaponCollision_Body; // 0x1118(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x1120(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0x1128(0x08)
	struct U*1941226d0d* ThirdPersonSpringArmInVehicle; // 0x1130(0x08)
	struct U*1941226d0d* FirstPersonSpringArmInVehicle; // 0x1138(0x08)
	struct USphereComponent* Sphere1; // 0x1140(0x08)
	struct U*a3eb76208a* PassengerSeat; // 0x1148(0x08)
	struct USphereComponent* Sphere; // 0x1150(0x08)
	struct U*a3eb76208a* DriverSeat; // 0x1158(0x08)
	bool bDrawCrosshair; // 0x1160(0x01)
	char pad_1161[0x7]; // 0x1161(0x07)
	struct UUserWidget* W_UI; // 0x1168(0x08)

	void SetScalarParameters(); // Function BP_Motorglider.BP_Motorglider_C.SetScalarParameters //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_Motorglider.BP_Motorglider_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Motorglider.BP_Motorglider_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void Server_SpawnRocket(); // Function BP_Motorglider.BP_Motorglider_C.Server_SpawnRocket //  // @ game+0x43bab4
	void ExecuteUbergraph_BP_Motorglider(); // Function BP_Motorglider.BP_Motorglider_C.ExecuteUbergraph_BP_Motorglider //  // @ game+0x43bab4
};

