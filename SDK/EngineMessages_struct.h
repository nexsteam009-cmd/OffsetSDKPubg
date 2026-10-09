// ScriptStruct EngineMessages.*c736c34f4d
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c736c34f4d {
	struct FString Text; // 0x00(0x10)
	double TimeSeconds; // 0x10(0x08)
};

// ScriptStruct EngineMessages.*15ddf5c7e1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*15ddf5c7e1 {
	struct FString UserName; // 0x00(0x10)
};

// ScriptStruct EngineMessages.*822b803517
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*822b803517 {
	struct FString Command; // 0x00(0x10)
	struct FString UserName; // 0x10(0x10)
};

// ScriptStruct EngineMessages.*d35dd4d20e
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*d35dd4d20e {
	struct FString UserName; // 0x00(0x10)
	struct FString *cee7f33286; // 0x10(0x10)
};

// ScriptStruct EngineMessages.*1b3d290dd6
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*1b3d290dd6 {
	struct FString UserName; // 0x00(0x10)
	struct FString *1134d79894; // 0x10(0x10)
};

// ScriptStruct EngineMessages.*e42a10dc53
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e42a10dc53 {
	struct FString CurrentLevel; // 0x00(0x10)
	int32 EngineVersion; // 0x10(0x04)
	bool *4ac84da057; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FGuid InstanceId; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float *c086064665; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct EngineMessages.*1100b6df91
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1100b6df91 {
	char pad_0[0x1]; // 0x00(0x01)
};

