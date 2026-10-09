// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	LockXZ,
	LockYZ,
	EFoliageScaling_MAX,
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	MAX_None,
	EVertexColorMaskChannel_MAX,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled,
	FOLIAGEVERTEXCOLORMASK_Red,
	FOLIAGEVERTEXCOLORMASK_Green,
	FOLIAGEVERTEXCOLORMASK_Blue,
	FOLIAGEVERTEXCOLORMASK_Alpha,
	FOLIAGEVERTEXCOLORMASK_MAX,
};

// Enum Foliage.*c90a641f4b
enum class *c90a641f4b : uint8 {
	*cb95a6049f,
	*e5c0fc5ad6,
	*b7b4b064df,
	*4d06f75c7b,
	*c90a641f4b_MAX,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8 {
	CollisionOverlap,
	ShadeOverlap,
	None,
	ESimulationOverlap_MAX,
};

// ScriptStruct Foliage.*2a02917495
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2a02917495 {
	char *33e9596ea1 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *629ecffcc0; // 0x04(0x04)
	char *25a48690f1 : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Foliage.*6dc14122df
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6dc14122df {
	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0x0c)
	float Age; // 0x2c(0x04)
	float Scale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
};

// ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x00(0x08)
	struct UFoliageType_InstancedStaticMesh* *8f1513bbff; // 0x08(0x08)
	bool *9e8d8322ae; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* Type; // 0x18(0x08)
};

