// ScriptStruct Serialization.*bc47de8954
// Size: 0x1d8 (Inherited: 0x00)  [layout: KHOP]
struct F*bc47de8954 {
	struct F*7e80da4c17 Numerics; // 0x00(0x30)
	struct F*2d2ee6d9e9 Booleans; // 0x30(0x08)
	struct F*8eebf2c081 Objects; // 0x38(0x10)
	struct F*04f02125ec Builtins; // 0x48(0x60)
	struct F*5c7cc53fe4 Arrays; // 0xa8(0x40)
	struct F*02d0d99178 Maps; // 0xe8(0xf0)
};

// ScriptStruct Serialization.*02d0d99178
// Size: 0xf0 (Inherited: 0x00)  [layout: KHOP]
struct F*02d0d99178 {
	struct TMap<int32, struct FString> *63f7c986e9; // 0x00(0x50)
	struct TMap<struct FString, struct FString> *1da0b6b6f1; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> *0040f43e97; // 0xa0(0x50)
};

// ScriptStruct Serialization.*5c7cc53fe4
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*5c7cc53fe4 {
	struct TArray<int32> *315961b3dd; // 0x00(0x10)
	int32 *7efc914e98; // 0x10(0x04)
	int32 *c97dc649d6[0x03]; // 0x14(0x0c)
	float *4e8d030b76[0x03]; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> *238b49f8cc; // 0x30(0x10)
};

// ScriptStruct Serialization.*04f02125ec
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*04f02125ec {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Text; // 0x38(0x18)
	struct FVector Vector; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Serialization.*8eebf2c081
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8eebf2c081 {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* *bb3de79329; // 0x08(0x08)
};

// ScriptStruct Serialization.*2d2ee6d9e9
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*2d2ee6d9e9 {
	bool *b221b0dfaf; // 0x00(0x01)
	bool *a9500c0c90; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32 *b0f909d2a8; // 0x04(0x04)
};

// ScriptStruct Serialization.*7e80da4c17
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*7e80da4c17 {
	int8 Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16 Int16; // 0x02(0x02)
	int32 Int32; // 0x04(0x04)
	int64 Int64; // 0x08(0x08)
	bool UInt8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16 UInt16; // 0x12(0x02)
	uint32 UInt32; // 0x14(0x04)
	uint64 UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

