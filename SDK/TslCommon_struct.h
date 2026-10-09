// ScriptStruct TslCommon.LogBase
// Size: 0x60 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FLogBase : FGdlStructBase {
	struct FLogCommon Common; // 0x08(0x28)
	int32 _V; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString _D; // 0x38(0x10)
	struct FString _T; // 0x48(0x10)
	bool _U; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct TslCommon.LogCommon
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLogCommon {
	struct FString MatchId; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	float IsGame; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslCommon.GameEventBase
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FGameEventBase : FGdlStructBase {
	int32 _V; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName _T; // 0x10(0x08)
};

// ScriptStruct TslCommon.*70cfb1fb06
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*70cfb1fb06 : F*115ae837d2 {
	bool bCompressed; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 UncompressedSize; // 0x24(0x04)
};

// ScriptStruct TslCommon.*115ae837d2
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*115ae837d2 {
	char pad_0[0x8]; // 0x00(0x08)
	int32 *c2c322ec14; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*6b79bb846c> *5c123ca4a5; // 0x10(0x10)
};

// ScriptStruct TslCommon.*6b79bb846c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6b79bb846c {
	struct TArray<bool> Data; // 0x00(0x10)
};

// ScriptStruct TslCommon.*3a25c9ed8a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3a25c9ed8a {
	char pad_0[0x10]; // 0x00(0x10)
};

