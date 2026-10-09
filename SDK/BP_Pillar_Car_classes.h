// BlueprintGeneratedClass BP_Pillar_Car.BP_Pillar_Car_C
// Size: 0x10c8 (Inherited: 0x1060)  [layout: KHOP]
struct ABP_Pillar_Car_C : AVehicleBase_C {
	struct F*467c63d8f7 UberGraphFrame; // 0x1060(0x10)
	struct UStaticMeshComponent* Windscreen; // 0x1070(0x08)
	struct U*cca2d6868e* MaterialClipVolume; // 0x1078(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x1080(0x08)
	struct USphereComponent* Sphere3; // 0x1088(0x08)
	struct U*cc699bb8fc* PassengerBRSeat; // 0x1090(0x08)
	struct USphereComponent* Sphere2; // 0x1098(0x08)
	struct U*cc699bb8fc* PassengerBLSeat; // 0x10a0(0x08)
	struct USphereComponent* Sphere1; // 0x10a8(0x08)
	struct U*cc699bb8fc* PassengerFRSeat; // 0x10b0(0x08)
	struct USphereComponent* Sphere; // 0x10b8(0x08)
	struct U*cc699bb8fc* DriverSeat; // 0x10c0(0x08)

	void UserConstructionScript(); // Function BP_Pillar_Car.BP_Pillar_Car_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveActorBeginOverlap(); // Function BP_Pillar_Car.BP_Pillar_Car_C.ReceiveActorBeginOverlap //  // @ game+0x43bab4
	int32 ExecuteUbergraph_BP_Pillar_Car(); // Function BP_Pillar_Car.BP_Pillar_Car_C.ExecuteUbergraph_BP_Pillar_Car //  // @ game+0x43bab4
};

