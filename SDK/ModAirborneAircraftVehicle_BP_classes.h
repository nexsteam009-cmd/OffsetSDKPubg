// BlueprintGeneratedClass ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C
// Size: 0x67c (Inherited: 0x638)  [layout: KHOP]
struct AModAirborneAircraftVehicle_BP_C : AModAirborneAircraftVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x638(0x10)
	struct UParticleSystemComponent* ParticleSystem; // 0x648(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x650(0x08)
	struct U*406ab173ce* SharedVehicleSeatInteractionCom; // 0x658(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x660(0x08)
	struct U*1941226d0d* ThirdPersonVehicleSpringArm; // 0x668(0x08)
	struct U*7742b76aa6* TslVehicleCommon; // 0x670(0x08)
	float DoorAlpha; // 0x678(0x04)

	bool SetAllCloudParticleActivate(bool active, int32 Temp_int_Loop_Counter_Variable); // Function ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C.SetAllCloudParticleActivate //  // @ game+0x43bab4
	void UserConstructionScript(); // Function ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C.UserConstructionScript //  // @ game+0x43bab4
	void OnLocalPlayerRide(); // Function ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C.OnLocalPlayerRide //  // @ game+0x43bab4
	void OnLocalPlayerLeave(); // Function ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C.OnLocalPlayerLeave //  // @ game+0x43bab4
	void ExecuteUbergraph_ModAirborneAircraftVehicle_BP(); // Function ModAirborneAircraftVehicle_BP.ModAirborneAircraftVehicle_BP_C.ExecuteUbergraph_ModAirborneAircraftVehicle_BP //  // @ game+0x43bab4
};

