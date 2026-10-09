// BlueprintGeneratedClass AquaRail.AquaRail_C
// Size: 0x738 (Inherited: 0x6d8)  [layout: KHOP]
struct AAquaRail_C : ABoatBase_C {
	struct F*467c63d8f7 UberGraphFrame; // 0x6d8(0x10)
	struct USphereComponent* PassengerCollision; // 0x6e8(0x08)
	struct USphereComponent* DriverCollision; // 0x6f0(0x08)
	struct U*cca2d6868e* MaterialClipVolumeSplashTop; // 0x6f8(0x08)
	struct U*cca2d6868e* MaterialClipVolume; // 0x700(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponentEngine; // 0x708(0x08)
	struct UStaticMeshComponent* WeaponCollisionComponent; // 0x710(0x08)
	struct USphereComponent* Sphere1; // 0x718(0x08)
	struct U*cc699bb8fc* Passenger; // 0x720(0x08)
	struct USphereComponent* Sphere; // 0x728(0x08)
	struct U*cc699bb8fc* DriverSeat; // 0x730(0x08)

	void UserConstructionScript(); // Function AquaRail.AquaRail_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function AquaRail.AquaRail_C.ReceiveBeginPlay //  // @ game+0x43bab4
	struct F*969c4df847 OnDeath(); // Function AquaRail.AquaRail_C.OnDeath //  // @ game+0x43bab4
	struct ATslPlayerStateBase* ExecuteUbergraph_AquaRail(DelegateProperty _69bd57bce3_OutputDelegate, float K2Node_CustomEvent_KillingDamage); // Function AquaRail.AquaRail_C.ExecuteUbergraph_AquaRail // NetReliableNetRequest|NetResponse|NetMulticast|Public|NetServer|HasOutParms|NetClient|BlueprintPure|EditorOnly|Const // @ game+0x43bab4
};

