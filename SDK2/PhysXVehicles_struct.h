// Enum PhysXVehicles.*a5d7a4a31d
enum class *a5d7a4a31d : uint8 {
	*4da12c4dfb,
	*6cf2222fca,
	*42b3d8fb73,
	*cdd3a9eb16,
	*20f56b0028,
	*1ad1464689,
	*af7a485334,
	*a5d7a4a31d_MAX,
};

// ScriptStruct PhysXVehicles.*7b8f095c83
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7b8f095c83 {
	struct UClass* *7c18fddb09; // 0x00(0x08)
	struct UClass* *9fffb4e066; // 0x08(0x08)
	struct UClass* *fd8f438c14; // 0x10(0x08)
	struct FName BoneName; // 0x18(0x08)
	struct FVector *4ad151e6d1; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *6c6928b82e; // 0x04(0x04)
	float *574583f671; // 0x08(0x04)
	float *e73e29e910; // 0x0c(0x04)
	struct TArray<struct F*5c4b22990f> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float *14a62795c4; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct PhysXVehicles.*5c4b22990f
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*5c4b22990f {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*eaf6d5505e
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eaf6d5505e {
	bool *df9d7fee6c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> *8cf69eff89; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct PhysXVehicles.*fc3c3b2f19
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fc3c3b2f19 {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float *7c43a8f6c8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct PhysXVehicles.*0bbb741ff0
// Size: 0x540 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct F*0bbb741ff0 : F*3dd9bdf3cc {
	char pad_520[0x20]; // 0x520(0x20)
};

// ScriptStruct PhysXVehicles.*afb5df6030
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*afb5df6030 {
	float *f31f172147; // 0x00(0x04)
	float *1a0451cdbf; // 0x04(0x04)
	float *1f9b62e68f; // 0x08(0x04)
	float *32311e9ee0; // 0x0c(0x04)
	float *c98c92b520; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.*ff38db11e5
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*ff38db11e5 {
	bool *61de89b65e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x08(0x08)
	struct FVector *c20e48d3fc; // 0x10(0x0c)
	struct FVector ContactPoint; // 0x1c(0x0c)
	struct FVector *8f7a78b04b; // 0x28(0x0c)
	struct FVector *11c845fddc; // 0x34(0x0c)
	float *1f0c4690bf; // 0x40(0x04)
	float *ed574a0a66; // 0x44(0x04)
	float *9abd8dd554; // 0x48(0x04)
	float *508894dd86; // 0x4c(0x04)
	float *45d55f4305; // 0x50(0x04)
	float *88e95fa5c7; // 0x54(0x04)
	float RotationAngle; // 0x58(0x04)
	float RotationSpeed; // 0x5c(0x04)
};

// ScriptStruct PhysXVehicles.*0d8bdedc50
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*0d8bdedc50 {
	uint32 *30a81f66dc; // 0x00(0x04)
	uint32 *dfc2e4b44a; // 0x04(0x04)
	float *789e4dbed8; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.*f2f7d55992
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*f2f7d55992 {
	float *2053ae97a4; // 0x00(0x04)
	float *f2831dc356; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.*fe70d9ec0d
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*fe70d9ec0d {
	float *a6fed82dd4; // 0x00(0x04)
	float *a8c93645a7; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float *ec7e3739c0; // 0x0c(0x04)
	int16 *d5bf66daeb; // 0x10(0x02)
	int16 *36007517bb; // 0x12(0x02)
	uint32 *678187166e; // 0x14(0x04)
	uint32 *92d4f2ff31; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.*49b2b66e1d
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*49b2b66e1d {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x78)
	float *c27f22e2b1; // 0x78(0x04)
	float *d25222d80f; // 0x7c(0x04)
	float *93bfbdce09; // 0x80(0x04)
	float *350b3e47b6; // 0x84(0x04)
	float *f75a5935d9; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct PhysXVehicles.*0f481c7425
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*0f481c7425 {
	enum class *a5d7a4a31d *6573ae39d7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *3f6d14ea9f; // 0x04(0x04)
	float *b9a8854d7b; // 0x08(0x04)
	float *a0b351bfd8; // 0x0c(0x04)
	float *e6f7f520d6; // 0x10(0x04)
	float *8c03de2866; // 0x14(0x04)
	float *f8e1063d3b; // 0x18(0x04)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x110 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	char pad_F8[0x18]; // 0xf8(0x18)
};

