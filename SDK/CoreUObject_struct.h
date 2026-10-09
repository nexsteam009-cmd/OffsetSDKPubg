// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8 {
	CIM_Linear,
	CIM_CurveAuto,
	CIM_Constant,
	CIM_CurveUser,
	CIM_CurveBreak,
	CIM_CurveAutoClamped,
	CIM_MAX,
};

// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8 {
	Exclusive,
	Inclusive,
	Open,
	ERangeBoundTypes_MAX,
};

// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8 {
	Info,
	Warning,
	Error,
	EAutomationEventType_MAX,
};

// Enum CoreUObject.EUnit
enum class EUnit : uint8 {
	Micrometers,
	Millimeters,
	Centimeters,
	Meters,
	Kilometers,
	Inches,
	Feet,
	Yards,
	Miles,
	Lightyears,
	Degrees,
	Radians,
	MetersPerSecond,
	KilometersPerHour,
	MilesPerHour,
	Celsius,
	Farenheit,
	Kelvin,
	Micrograms,
	Milligrams,
	Grams,
	Kilograms,
	MetricTons,
	Ounces,
	Pounds,
	Stones,
	Newtons,
	PoundsForce,
	KilogramsForce,
	Hertz,
	Kilohertz,
	Megahertz,
	Gigahertz,
	RevolutionsPerMinute,
	Bytes,
	Kilobytes,
	Megabytes,
	Gigabytes,
	Terabytes,
	Lumens,
	Milliseconds,
	Seconds,
	Minutes,
	Hours,
	Days,
	Months,
	Years,
	Multiplier,
	Unspecified,
	EUnit_MAX,
};

// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8 {
	None,
	Default,
	TextEditBeam,
	ResizeLeftRight,
	ResizeUpDown,
	ResizeSouthEast,
	ResizeSouthWest,
	CardinalCross,
	Crosshairs,
	Hand,
	GrabHand,
	GrabHandClosed,
	SlashedCircle,
	EyeDropper,
	EMouseCursor_MAX,
};

// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8 {
	PF_Unknown,
	PF_A32B32G32R32F,
	PF_B8G8R8A8,
	PF_G8,
	PF_G16,
	PF_DXT1,
	PF_DXT3,
	PF_DXT5,
	PF_UYVY,
	PF_FloatRGB,
	PF_FloatRGBA,
	PF_DepthStencil,
	PF_ShadowDepth,
	PF_R32_FLOAT,
	PF_G16R16,
	PF_G16R16F,
	PF_G16R16F_FILTER,
	PF_G32R32F,
	PF_A2B10G10R10,
	PF_A16B16G16R16,
	PF_D24,
	PF_R16F,
	PF_R16F_FILTER,
	PF_BC5,
	PF_V8U8,
	PF_A1,
	PF_FloatR11G11B10,
	PF_A8,
	PF_R32_UINT,
	PF_R32_SINT,
	PF_PVRTC2,
	PF_PVRTC4,
	PF_R16_UINT,
	PF_R16_SINT,
	PF_R16G16B16A16_UINT,
	PF_R16G16B16A16_SINT,
	PF_R5G6B5_UNORM,
	PF_R8G8B8A8,
	PF_A8R8G8B8,
	PF_BC4,
	PF_R8G8,
	PF_ATC_RGB,
	PF_ATC_RGBA_E,
	PF_ATC_RGBA_I,
	PF_X24_G8,
	PF_ETC1,
	PF_ETC2_RGB,
	PF_ETC2_RGBA,
	PF_R32G32B32A32_UINT,
	PF_R16G16_UINT,
	PF_ASTC_4x4,
	PF_ASTC_6x6,
	PF_ASTC_8x8,
	PF_ASTC_10x10,
	PF_ASTC_12x12,
	PF_BC6H,
	PF_BC7,
	PF_R8_UINT,
	PF_L8,
	PF_XGXR8,
	PF_R32G32_UINT,
	PF_D32,
	PF_MAX,
};

// Enum CoreUObject.EAxis
enum class EAxis : uint8 {
	None,
	X,
	Y,
	Z,
	EAxis_MAX,
};

// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8 {
	None,
	UTC,
	SinceGStartTime,
	ELogTimes_MAX,
};

// Enum CoreUObject.*8dcf791604
enum class *8dcf791604 : uint8 {
	*3c5fa53ca0,
	*f52768afb4,
	*2de5342f3d,
	*8dcf791604_MAX,
};

// Enum CoreUObject.*cd6a526dc0
enum class *cd6a526dc0 : uint8 {
	*8ce17cdbe2,
	*223f3b18ee,
	*4ed0857973,
	*cd6a526dc0_MAX,
};

// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8 {
	COND_None,
	COND_InitialOnly,
	COND_OwnerOnly,
	COND_SkipOwner,
	COND_SimulatedOnly,
	COND_AutonomousOnly,
	COND_SimulatedOrPhysics,
	COND_InitialOrOwner,
	COND_Custom,
	COND_ReplayOrOwner,
	COND_ReplayOnly,
	COND_SimulatedOnlyNoReplay,
	COND_SimulatedOrPhysicsNoReplay,
	COND_SkipReplay,
	COND_OwnerOrViewTarget,
	COND_OwnerOrViewTargetOrReplay,
	COND_Max,
};

// ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FJoinabilitySettings {
	struct FName SessionName; // 0x00(0x08)
	bool bPublicSearchable; // 0x08(0x01)
	bool bAllowInvites; // 0x09(0x01)
	bool bJoinViaPresence; // 0x0a(0x01)
	bool bJoinViaPresenceFriendsOnly; // 0x0b(0x01)
	int32 MaxPlayers; // 0x0c(0x04)
	int32 MaxPartySize; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FUniqueNetIdWrapper {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FGuid {
	int32 A; // 0x00(0x04)
	int32 B; // 0x04(0x04)
	int32 C; // 0x08(0x04)
	int32 D; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FVector4 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector2D
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FVector2D {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTwoVectors {
	struct FVector v1; // 0x00(0x0c)
	struct FVector v2; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0x0c)  [layout: KHOP]
struct FPlane : FVector {
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Rotator
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FRotator {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FQuat {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.PackedNormal
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FPackedNormal {
	bool X; // 0x00(0x01)
	bool Y; // 0x01(0x01)
	bool Z; // 0x02(0x01)
	bool W; // 0x03(0x01)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FPackedRGB10A2N {
	int32 Packed; // 0x00(0x04)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPackedRGBA16N {
	int32 XY; // 0x00(0x04)
	int32 ZW; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntPoint
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FIntPoint {
	int32 X; // 0x00(0x04)
	int32 Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.IntRect
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FIntRect {
	struct FIntPoint Min; // 0x00(0x08)
	struct FIntPoint Max; // 0x08(0x08)
};

// ScriptStruct CoreUObject.IntVector
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FIntVector {
	int32 X; // 0x00(0x04)
	int32 Y; // 0x04(0x04)
	int32 Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.IntVector4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FIntVector4 {
	int32 X; // 0x00(0x04)
	int32 Y; // 0x04(0x04)
	int32 Z; // 0x08(0x04)
	int32 W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Color
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FColor {
	bool B; // 0x00(0x01)
	bool G; // 0x01(0x01)
	bool R; // 0x02(0x01)
	bool A; // 0x03(0x01)
};

// ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FLinearColor {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Box
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
	bool IsValid; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBox2D {
	struct FVector2D Min; // 0x00(0x08)
	struct FVector2D Max; // 0x08(0x08)
	bool bIsValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FBoxSphereBounds {
	struct FVector Origin; // 0x00(0x0c)
	struct FVector BoxExtent; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct CoreUObject.OrientedBox
// Size: 0x3c (Inherited: 0x00)  [layout: KHOP]
struct FOrientedBox {
	struct FVector Center; // 0x00(0x0c)
	struct FVector AxisX; // 0x0c(0x0c)
	struct FVector AxisY; // 0x18(0x0c)
	struct FVector AxisZ; // 0x24(0x0c)
	struct FVector Extent; // 0x30(0x0c)
};

// ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FMatrix {
	struct FPlane XPlane; // 0x00(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointFloat {
	float InVal; // 0x00(0x04)
	float OutVal; // 0x04(0x04)
	float ArriveTangent; // 0x08(0x04)
	float LeaveTangent; // 0x0c(0x04)
	enum class EInterpCurveMode InterpMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointVector2D {
	float InVal; // 0x00(0x04)
	struct FVector2D OutVal; // 0x04(0x08)
	struct FVector2D ArriveTangent; // 0x0c(0x08)
	struct FVector2D LeaveTangent; // 0x14(0x08)
	enum class EInterpCurveMode InterpMode; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointVector {
	float InVal; // 0x00(0x04)
	struct FVector OutVal; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	enum class EInterpCurveMode InterpMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointQuat {
	float InVal; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	enum class EInterpCurveMode InterpMode; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x00(0x04)
	struct FTwoVectors OutVal; // 0x04(0x18)
	struct FTwoVectors ArriveTangent; // 0x1c(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	enum class EInterpCurveMode InterpMode; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpCurvePointLinearColor {
	float InVal; // 0x00(0x04)
	struct FLinearColor OutVal; // 0x04(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	enum class EInterpCurveMode InterpMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x00(0x10)
	bool bIsLooped; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LoopKeyOffset; // 0x14(0x04)
};

// ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTransform {
	struct FQuat Rotation; // 0x00(0x10)
	struct FVector Translation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector Scale3D; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct CoreUObject.RandomStream
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FRandomStream {
	int32 InitialSeed; // 0x00(0x04)
	int32 Seed; // 0x04(0x04)
};

// ScriptStruct CoreUObject.DateTime
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FDateTime {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.Timespan
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTimespan {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct CoreUObject.StringAssetReference
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FStringAssetReference {
	struct FString AssetLongPathname; // 0x00(0x10)
};

// ScriptStruct CoreUObject.StringClassReference
// Size: 0x10 (Inherited: 0x10)  [layout: KHOP]
struct FStringClassReference : FStringAssetReference {
};

// ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPrimaryAssetType {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FPrimaryAssetId {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
	struct FName PrimaryAssetName; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FallbackStruct
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FFallbackStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FFloatRangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FFloatRange {
	struct FFloatRangeBound LowerBound; // 0x00(0x08)
	struct FFloatRangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FInt32RangeBound {
	enum class ERangeBoundTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FInt32Range {
	struct FInt32RangeBound LowerBound; // 0x00(0x08)
	struct FInt32RangeBound UpperBound; // 0x08(0x08)
};

// ScriptStruct CoreUObject.FloatInterval
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FFloatInterval {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.Int32Interval
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FInt32Interval {
	int32 Min; // 0x00(0x04)
	int32 Max; // 0x04(0x04)
};

// ScriptStruct CoreUObject.AutomationEvent
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FAutomationEvent {
	enum class EAutomationEventType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FString Context; // 0x18(0x10)
	struct FString FileName; // 0x28(0x10)
	int32 LineNumber; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FDateTime Timestamp; // 0x40(0x08)
};

