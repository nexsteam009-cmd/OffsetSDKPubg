// Enum BuildPatchServices.*5435ecf61c
enum class *5435ecf61c : uint8 {
	*06b5a03a7a,
	*848389bac9,
	*9f63be7b2a,
	*5435ecf61c_MAX,
};

// ScriptStruct BuildPatchServices.*fa588a4625
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*fa588a4625 {
	bool Hash[0x14]; // 0x00(0x14)
};

// ScriptStruct BuildPatchServices.*6e86505286
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6e86505286 {
	struct FString FileName; // 0x00(0x10)
	struct F*fa588a4625 FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct F*78ebbeced0> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0xe]; // 0x62(0x0e)
};

// ScriptStruct BuildPatchServices.*78ebbeced0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*78ebbeced0 {
	struct FGuid Guid; // 0x00(0x10)
	uint32 Offset; // 0x10(0x04)
	uint32 Size; // 0x14(0x04)
};

// ScriptStruct BuildPatchServices.*2f4c19ce22
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2f4c19ce22 {
	struct FGuid Guid; // 0x00(0x10)
	uint64 Hash; // 0x10(0x08)
	struct F*fa588a4625 *c681df3e11; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64 FileSize; // 0x30(0x08)
	bool *fa7e11ad1a; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct BuildPatchServices.*88db8581fd
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*88db8581fd {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

