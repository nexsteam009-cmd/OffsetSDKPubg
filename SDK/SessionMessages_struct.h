// ScriptStruct SessionMessages.*ae025c66f4
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ae025c66f4 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*71855b1105
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*71855b1105 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*12ab321786
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*12ab321786 {
	struct TArray<struct FName> Categories; // 0x00(0x10)
	struct TMap<uint32, struct FString> *b89edd1c36; // 0x10(0x50)
	struct FGuid InstanceId; // 0x60(0x10)
};

// ScriptStruct SessionMessages.*54779bf396
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*54779bf396 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SessionMessages.*bedc26d5ac
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bedc26d5ac {
	struct FName Category; // 0x00(0x08)
	struct FString Data; // 0x08(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x08)
	uint32 ThreadId; // 0x30(0x04)
	bool Verbosity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct SessionMessages.*4e46132cb5
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4e46132cb5 {
	bool *2f64d464d7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BuildDate; // 0x08(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString *6cd0538022; // 0x38(0x10)
	bool *485bd29d50; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString PlatformName; // 0x50(0x10)
	struct FGuid SessionId; // 0x60(0x10)
	struct FString SessionName; // 0x70(0x10)
	struct FString SessionOwner; // 0x80(0x10)
	bool Standalone; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SessionMessages.*55be902af8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*55be902af8 {
	struct FString UserName; // 0x00(0x10)
};

