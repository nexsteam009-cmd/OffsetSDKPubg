// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8 {
	Legacy,
	Accurate,
	EClothingWindMethod_MAX,
};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class MaskTarget_PhysMesh : uint8 {
	None,
	MaxDistance,
	BackstopDistance,
	BackstopRadius,
	MaskTarget_MAX,
};

// ScriptStruct ClothingSystemRuntime.*2b5a5a2ef6
// Size: 0xbc (Inherited: 0x00)  [layout: KHOP]
struct F*2b5a5a2ef6 {
	enum class EClothingWindMethod *3cb7950342; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*b38dcb7c43 *72c9b08117; // 0x04(0x10)
	struct F*b38dcb7c43 *196680bfd5; // 0x14(0x10)
	struct F*b38dcb7c43 *fa951af542; // 0x24(0x10)
	struct F*b38dcb7c43 *9b4ea82c2b; // 0x34(0x10)
	float *8269f80536; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float *2f0b874875; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float *1654f8f1c5; // 0x60(0x04)
	float *9710cf2ab5; // 0x64(0x04)
	struct FVector *9b0aa365fe; // 0x68(0x0c)
	struct FVector *e558adf4e4; // 0x74(0x0c)
	struct FVector *35f9fb21a4; // 0x80(0x0c)
	struct FVector *7c602c0839; // 0x8c(0x0c)
	struct FVector *60abbeabfb; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	float TetherStiffness; // 0xb0(0x04)
	float TetherLimit; // 0xb4(0x04)
	float *df1c55ae48; // 0xb8(0x04)
};

// ScriptStruct ClothingSystemRuntime.*b38dcb7c43
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*b38dcb7c43 {
	float *789e4dbed8; // 0x00(0x04)
	float *086bdfd8ea; // 0x04(0x04)
	float *95fb297734; // 0x08(0x04)
	float *7582050e72; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntime.*9f8ffdc3f9
// Size: 0xe8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9f8ffdc3f9 {
	struct F*389d2fe9d1 *1c9dcfd4f5; // 0x00(0x98)
	struct F*56f049bc42 CollisionData; // 0x98(0x30)
	char pad_C8[0x20]; // 0xc8(0x20)
};

// ScriptStruct ClothingSystemRuntime.*389d2fe9d1
// Size: 0x98 (Inherited: 0x00)  [layout: KHOP]
struct F*389d2fe9d1 {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32> Indices; // 0x20(0x10)
	struct TArray<float> *58ece96520; // 0x30(0x10)
	struct TArray<float> *1cc3990a22; // 0x40(0x10)
	struct TArray<float> *8aca69f5b3; // 0x50(0x10)
	struct TArray<float> *29ca2be05d; // 0x60(0x10)
	struct TArray<struct F*2d79fc2f3e> *2a584b1139; // 0x70(0x10)
	int32 *bd16de0418; // 0x80(0x04)
	int32 *6a2ef1db4e; // 0x84(0x04)
	struct TArray<uint32> *96b053cac5; // 0x88(0x10)
};

// ScriptStruct ClothingSystemRuntime.*2d79fc2f3e
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*2d79fc2f3e {
	uint16 BoneIndices[0x08]; // 0x00(0x10)
	float BoneWeights[0x08]; // 0x10(0x20)
};

// ScriptStruct ClothingSystemRuntime.*9e2fd4a9e7
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*9e2fd4a9e7 {
	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
};

