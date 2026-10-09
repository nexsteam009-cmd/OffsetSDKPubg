// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8 {
	LookAtLocation,
	FollowCamera,
	FollowPawn,
	Stationary,
	EFollowMethod_MAX,
};

// ScriptStruct OceanPlugin.*c909809b72
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c909809b72 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	struct TArray<uint32> *c193a269d8; // 0x08(0x10)
};

// ScriptStruct OceanPlugin.*189d61c4bc
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*189d61c4bc {
	struct F*0b593f113b Wave01; // 0x00(0x14)
	struct F*0b593f113b Wave02; // 0x14(0x14)
	struct F*0b593f113b Wave03; // 0x28(0x14)
	struct F*0b593f113b Wave04; // 0x3c(0x14)
	struct F*0b593f113b Wave05; // 0x50(0x14)
	struct F*0b593f113b Wave06; // 0x64(0x14)
	struct F*0b593f113b Wave07; // 0x78(0x14)
	struct F*0b593f113b Wave08; // 0x8c(0x14)
};

// ScriptStruct OceanPlugin.*0b593f113b
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*0b593f113b {
	float Rotation; // 0x00(0x04)
	float Length; // 0x04(0x04)
	float Amplitude; // 0x08(0x04)
	float Steepness; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
};

// ScriptStruct OceanPlugin.*60b5fda44b
// Size: 0x6c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*60b5fda44b {
	char pad_0[0x6c]; // 0x00(0x6c)
};

// ScriptStruct OceanPlugin.*c9aa4e7503
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c9aa4e7503 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct OceanPlugin.*bc5a3dfb44
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*bc5a3dfb44 {
	struct FName BoneName; // 0x00(0x08)
	float Density; // 0x08(0x04)
	float TestRadius; // 0x0c(0x04)
};

// ScriptStruct OceanPlugin.*c51acdb263
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*c51acdb263 {
	int32 Millisecond; // 0x00(0x04)
	int32 Second; // 0x04(0x04)
	int32 Minute; // 0x08(0x04)
	int32 Hour; // 0x0c(0x04)
	int32 Day; // 0x10(0x04)
	int32 Month; // 0x14(0x04)
	int32 Year; // 0x18(0x04)
};

