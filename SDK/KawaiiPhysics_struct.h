// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8 {
	None,
	Spherical,
	Capsule,
	Planar,
	ECollisionLimitType_MAX,
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8 {
	X_Positive,
	X_Negative,
	Y_Positive,
	Y_Negative,
	Z_Positive,
	Z_Negative,
	EBoneForwardAxis_MAX,
};

// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None,
	X,
	Y,
	Z,
	EPlanarConstraint_MAX,
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x280 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBone; // 0xf8(0x18)
	struct TArray<struct FBoneReference> ExcludeBones; // 0x110(0x10)
	int32 TargetFramerate; // 0x120(0x04)
	bool OverrideTargetFramerate; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x128(0x18)
	struct UCurveFloat* DampingCurve; // 0x140(0x08)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x148(0x08)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x150(0x08)
	struct UCurveFloat* StiffnessCurve; // 0x158(0x08)
	struct UCurveFloat* RadiusCurve; // 0x160(0x08)
	struct UCurveFloat* LimitAngleCurve; // 0x168(0x08)
	bool bUpdatePhysicsSettingsInGame; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float DummyBoneLength; // 0x174(0x04)
	enum class EBoneForwardAxis BoneForwardAxis; // 0x178(0x01)
	enum class EPlanarConstraint PlanarConstraint; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x180(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x190(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x1a0(0x10)
	struct U*5b046c8030* LimitsDataAsset; // 0x1b0(0x08)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x1b8(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x1c8(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x1d8(0x10)
	float TeleportDistanceThreshold; // 0x1e8(0x04)
	float TeleportRotationThreshold; // 0x1ec(0x04)
	struct FVector Gravity; // 0x1f0(0x0c)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x200(0x10)
	float TotalBoneLength; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)
	struct FTransform PreSkelCompTransform; // 0x220(0x30)
	bool bInitPhysicsSettings; // 0x250(0x01)
	char pad_251[0x2f]; // 0x251(0x2f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FKawaiiPhysicsModifyBone {
	struct FBoneReference BoneRef; // 0x00(0x18)
	int32 ParentIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32> ChildIndexs; // 0x20(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x30(0x18)
	struct FVector Location; // 0x48(0x0c)
	struct FVector PrevLocation; // 0x54(0x0c)
	struct FQuat PrevRotation; // 0x60(0x10)
	struct FVector PoseLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FQuat PoseRotation; // 0x80(0x10)
	struct FVector PoseScale; // 0x90(0x0c)
	float LengthFromRoot; // 0x9c(0x04)
	bool bDummy; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FKawaiiPhysicsSettings {
	float Damping; // 0x00(0x04)
	float WorldDampingLocation; // 0x04(0x04)
	float WorldDampingRotation; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x60 (Inherited: 0x50)  [layout: KHOP]
struct FPlanarLimit : FCollisionLimitBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FCollisionLimitBase {
	struct FBoneReference DrivingBone; // 0x00(0x18)
	struct FVector OffsetLocation; // 0x18(0x0c)
	struct FRotator OffsetRotation; // 0x24(0x0c)
	struct FVector Location; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FQuat Rotation; // 0x40(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
};

// ScriptStruct KawaiiPhysics.*b9287aa683
// Size: 0x60 (Inherited: 0x50)  [layout: KHOP]
struct F*b9287aa683 : F*e863081a61 {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.*e863081a61
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*e863081a61 {
	struct FName DrivingBoneName; // 0x00(0x08)
	struct FVector OffsetLocation; // 0x08(0x0c)
	struct FRotator OffsetRotation; // 0x14(0x0c)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x10)
	struct FGuid Guid; // 0x40(0x10)
};

// ScriptStruct KawaiiPhysics.*87c7a41254
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*87c7a41254 : F*e863081a61 {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct KawaiiPhysics.*d7a7fa8ce9
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*d7a7fa8ce9 : F*e863081a61 {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
};

