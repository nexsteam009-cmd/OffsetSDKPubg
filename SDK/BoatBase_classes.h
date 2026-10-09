// BlueprintGeneratedClass BoatBase.BoatBase_C
// Size: 0x6d8 (Inherited: 0x670)  [layout: KHOP]
struct ABoatBase_C : ATslFloatingVehicle {
	struct F*467c63d8f7 UberGraphFrame; // 0x670(0x10)
	struct URadialForceComponent* RadialForce; // 0x680(0x08)
	struct UCameraComponent* FirstPersonCameraInVehicle; // 0x688(0x08)
	struct UCameraComponent* ThirdPersonCameraInVehicle; // 0x690(0x08)
	struct U*1941226d0d* FirstPersonSpringArmInVehicle; // 0x698(0x08)
	struct U*1941226d0d* ThirdPersonSpringArmInVehicle; // 0x6a0(0x08)
	float LaunchVelocityFactorOnHitCharacter; // 0x6a8(0x04)
	char pad_6AC[0x4]; // 0x6ac(0x04)
	struct UCurveFloat* DamageCurve; // 0x6b0(0x08)
	float ImpactModifier; // 0x6b8(0x04)
	float ImpactModifierUpsideDown; // 0x6bc(0x04)
	float ImpactAbsorption; // 0x6c0(0x04)
	float ImpactAbsorptionUpsideDown; // 0x6c4(0x04)
	float ImpactAbsorptionPassenger; // 0x6c8(0x04)
	float ImpactAbsorptionPassengerUpsideDown; // 0x6cc(0x04)
	float ExplosionRadius_Inner; // 0x6d0(0x04)
	float ExplosionRadius_Outer; // 0x6d4(0x04)

	void SetScalarParameters(); // Function BoatBase.BoatBase_C.SetScalarParameters //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BoatBase.BoatBase_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BoatBase.BoatBase_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_BoatBase(); // Function BoatBase.BoatBase_C.ExecuteUbergraph_BoatBase //  // @ game+0x43bab4
};

