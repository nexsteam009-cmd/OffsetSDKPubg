// BlueprintGeneratedClass DummyTransportAircraft.DummyTransportAircraft_C
// Size: 0x6ec (Inherited: 0x638)  [layout: KHOP]
struct ADummyTransportAircraft_C : ATransportAircraftVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x638(0x10)
	struct UStaticMeshComponent* StaticMesh; // 0x648(0x08)
	struct UStaticMeshComponent* AirTrail_Left_02; // 0x650(0x08)
	struct UStaticMeshComponent* AirTrail_Right_02; // 0x658(0x08)
	struct UStaticMeshComponent* AirTrail_Right_Small; // 0x660(0x08)
	struct UStaticMeshComponent* AirTrail_Left_Small; // 0x668(0x08)
	struct UStaticMeshComponent* AirTrail_Left; // 0x670(0x08)
	struct UStaticMeshComponent* AirTrail_Right; // 0x678(0x08)
	struct UStaticMeshComponent* MotionBlure_04; // 0x680(0x08)
	struct UStaticMeshComponent* MotionBlure_03; // 0x688(0x08)
	struct UStaticMeshComponent* MotionBlure_02; // 0x690(0x08)
	struct UStaticMeshComponent* MotionBlure_01; // 0x698(0x08)
	struct U*406ab173ce* SharedVehicleSeatInteractionCom; // 0x6a0(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x6a8(0x08)
	struct U*1941226d0d* ThirdPersonVehicleSpringArm; // 0x6b0(0x08)
	struct UParticleSystemComponent* Rotors; // 0x6b8(0x08)
	struct UMaterialBillboardComponent* Light_CenterFrontLow; // 0x6c0(0x08)
	struct UMaterialBillboardComponent* Light_CenterBack; // 0x6c8(0x08)
	struct UMaterialBillboardComponent* Light_RightWing; // 0x6d0(0x08)
	struct UMaterialBillboardComponent* Light_LeftWing; // 0x6d8(0x08)
	struct U*7742b76aa6* TslVehicleCommon; // 0x6e0(0x08)
	float DoorAlpha; // 0x6e8(0x04)

	int32 SetAllCloudParticleActivate(int32 CallFunc__f39acf2f68_ReturnValue, struct AEmitter* CallFunc_Array_Get_Item); // Function DummyTransportAircraft.DummyTransportAircraft_C.SetAllCloudParticleActivate //  // @ game+0x43bab4
	void UserConstructionScript(); // Function DummyTransportAircraft.DummyTransportAircraft_C.UserConstructionScript //  // @ game+0x43bab4
	void OnLocalPlayerRide(); // Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerRide //  // @ game+0x43bab4
	void OnLocalPlayerLeave(); // Function DummyTransportAircraft.DummyTransportAircraft_C.OnLocalPlayerLeave //  // @ game+0x43bab4
	void ExecuteUbergraph_DummyTransportAircraft(); // Function DummyTransportAircraft.DummyTransportAircraft_C.ExecuteUbergraph_DummyTransportAircraft //  // @ game+0x43bab4
};

