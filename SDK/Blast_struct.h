// Enum Blast.EBlastActorDestroyReason
enum class EBlastActorDestroyReason : uint8 {
	Split,
	Remove,
	Network,
	EBlastActorDestroyReason_MAX,
};

// Enum Blast.EBlastAssetChunkFlags
enum class EBlastAssetChunkFlags : uint8 {
	None,
	Static,
	EBlastAssetChunkFlags_MAX,
};

// Enum Blast.EBlastCapMeshForwardAxis
enum class EBlastCapMeshForwardAxis : uint8 {
	AxisX,
	AxisY,
	Max,
	EBlastCapMeshForwardAxis_MAX,
};

// Enum Blast.EBlastMeshTerminationCriterion
enum class EBlastMeshTerminationCriterion : uint8 {
	NumOfTriangles,
	NumOfVertices,
	Max,
	EBlastMeshTerminationCriterion_MAX,
};

// Enum Blast.*d16c51ffdb
enum class *d16c51ffdb : uint8 {
	*8540bcd938,
	*3250e9d11c,
	*3c0bd9bfdb,
	*8238b248d8,
	*ad12886182,
	*3761321133,
	*d16c51ffdb_MAX,
};

// Enum Blast.EBlastDamageResult
enum class EBlastDamageResult : uint8 {
	None,
	Damaged,
	Split,
	EBlastDamageResult_MAX,
};

// Enum Blast.EBlastDebugRenderMode
enum class EBlastDebugRenderMode : uint8 {
	None,
	SupportGraph,
	ChunkCentroids,
	SupportGraphHealth,
	EBlastDebugRenderMode_MAX,
};

// Enum Blast.EBlastDoorState
enum class EBlastDoorState : uint8 {
	Closed,
	Closing,
	Opened,
	Opening,
	EBlastDoorState_MAX,
};

// ScriptStruct Blast.*a1307ce310
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*a1307ce310 {
	int32 ChunkIndex; // 0x00(0x04)
	int32 OtherChunkIndex; // 0x04(0x04)
	float Damage; // 0x08(0x04)
	float HealthLeft; // 0x0c(0x04)
	float BondArea; // 0x10(0x04)
	struct FVector WorldCentroid; // 0x14(0x0c)
	struct FVector WorldNormal; // 0x20(0x0c)
};

// ScriptStruct Blast.*50ab1854d1
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*50ab1854d1 {
	int32 ChunkIndex; // 0x00(0x04)
	float Damage; // 0x04(0x04)
	struct FVector WorldCentroid; // 0x08(0x0c)
};

// ScriptStruct Blast.*1258a906a0
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1258a906a0 {
	struct FName *b334cd23e3; // 0x00(0x08)
	struct FFilePath *493bf79d86; // 0x08(0x10)
	bool *470ab7bda1; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FFilePath *b993354f06; // 0x20(0x10)
	bool *d62486cd14; // 0x30(0x01)
	bool *fe1cf6b28e; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Blast.*292ed5cdcb
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*292ed5cdcb {
	float Health; // 0x00(0x04)
	float *68c85dd0ad; // 0x04(0x04)
	float *f434f1a8ae; // 0x08(0x04)
	bool *6ee98c395e; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Blast.*5f1e5bf0c9
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5f1e5bf0c9 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Blast.*61d0c1b049
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*61d0c1b049 {
	struct TMap<struct FName, struct F*2d10f0c3c9> *fc9742ecfe; // 0x00(0x50)
};

// ScriptStruct Blast.*2d10f0c3c9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2d10f0c3c9 {
	struct TArray<int32> *07503d1d8d; // 0x00(0x10)
};

// ScriptStruct Blast.*a0b6b1a0dc
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a0b6b1a0dc {
	struct TArray<struct F*79575fdba1> *01aa029b6b; // 0x00(0x10)
};

// ScriptStruct Blast.*79575fdba1
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*79575fdba1 {
	int32 *12f13a629b; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Blast.*a03ea291b9
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*a03ea291b9 {
	int32 *597990e697; // 0x00(0x04)
	int32 *0bc41cadbe; // 0x04(0x04)
};

// ScriptStruct Blast.*0424583a91
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0424583a91 {
	struct U*677ffca89a* MeshComponent; // 0x00(0x08)
	struct FGuid *bf2902af15; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform *10dd1ceb8c; // 0x20(0x30)
	struct TArray<int32> ChunkIDs; // 0x50(0x10)
	struct TArray<struct FTransform> *cc77f57e6c; // 0x60(0x10)
	struct FName *392054e428; // 0x70(0x08)
	struct FGuid *78c0ac6fcf; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Blast.*5519083592
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*5519083592 {
	float ScreenSize; // 0x00(0x04)
	float *c5fcc76274; // 0x04(0x04)
	struct F*3ddbf8d971 ReductionSettings; // 0x08(0x14)
};

// ScriptStruct Blast.*3ddbf8d971
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3ddbf8d971 {
	enum class EBlastMeshTerminationCriterion *d3214c55fb; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *7f4ccb4015; // 0x08(0x04)
	float *32e1c62b4b; // 0x0c(0x04)
	bool *fcaf50c359; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Blast.*f74aa23089
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f74aa23089 {
	struct TArray<struct F*d5e139a74b> Polygons; // 0x00(0x10)
};

// ScriptStruct Blast.*d5e139a74b
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*d5e139a74b {
	struct FVector Normal; // 0x00(0x0c)
	struct FVector Centroid; // 0x0c(0x0c)
	float Area; // 0x18(0x04)
};

// ScriptStruct Blast.*3895f2a7de
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*3895f2a7de {
	struct TArray<bool> Vertices; // 0x00(0x10)
	struct TArray<bool> *f8fe33b0fa; // 0x10(0x10)
	struct TArray<bool> Faces; // 0x20(0x10)
	struct TArray<uint32> *bb3925251b; // 0x30(0x10)
	struct TArray<uint32> *c04f3ee29e; // 0x40(0x10)
	struct TArray<uint32> *abe066443b; // 0x50(0x10)
	struct TArray<struct F*6dc725998e> *909cb3f9d2; // 0x60(0x10)
	struct TArray<uint32> *4d5658ae5b; // 0x70(0x10)
	struct TArray<uint32> Parents; // 0x80(0x10)
	struct TArray<int32> *6a8ee3da70; // 0x90(0x10)
};

// ScriptStruct Blast.*6dc725998e
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*6dc725998e {
	struct TArray<struct FVector> Points; // 0x00(0x10)
	struct TArray<uint32> Indices; // 0x10(0x10)
	struct TArray<struct F*962e44b1e6> *e950f417b5; // 0x20(0x10)
};

// ScriptStruct Blast.*962e44b1e6
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*962e44b1e6 {
	float Plane[0x04]; // 0x00(0x10)
	uint16 *268e341e15; // 0x10(0x02)
	uint16 *0f0b8c5d7d; // 0x12(0x02)
};

// ScriptStruct Blast.*d14a6e1679
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d14a6e1679 {
	struct UBodySetup* *3696af5a90; // 0x00(0x08)
	bool *9c1d4b253c; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Blast.*48bde28f12
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*48bde28f12 {
	struct TArray<uint32> *3180f90452; // 0x00(0x10)
	struct TArray<struct FChunkHierarchy> *ca9f38539c; // 0x10(0x10)
	struct TMap<uint32, uint32> *83ff876ef5; // 0x20(0x50)
};

// ScriptStruct Blast.ChunkHierarchy
// Size: 0x148 (Inherited: 0x00)  [layout: KHOP]
struct FChunkHierarchy {
	bool *e71c932b23; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	SetProperty *19bb80a3b7; // 0x08(0x50)
	struct TMap<uint32, uint32> *d5e1643b31; // 0x58(0x50)
	struct TMap<uint32, float> *ad92b73368; // 0xa8(0x50)
	struct TMap<uint32, float> *72af8ed685; // 0xf8(0x50)
};

// ScriptStruct Blast.*4719acc8e0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4719acc8e0 {
	struct U*b2a70fbb89* *d7d0b0ee87; // 0x00(0x08)
	struct U*77323539fa* InteriorComponent; // 0x08(0x08)
};

// ScriptStruct Blast.*1dd371b89b
// Size: 0xa8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1dd371b89b {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct Blast.*75ae779bcb
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*75ae779bcb {
	char *139b9e3029 : 1; // 0x00(0x01)
	char *fd923c7d28 : 1; // 0x00(0x01)
	char *e4eac076e2 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *05ffc6f3b4; // 0x04(0x04)
	bool *46cb891e08; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Blast.*45a5d7a340
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*45a5d7a340 {
	enum class EBlastDoorState *0bf23fdb04; // 0x00(0x01)
	bool *e832a20903; // 0x01(0x01)
	bool *dea3a0d474; // 0x02(0x01)
};

// ScriptStruct Blast.*5aa915d25a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5aa915d25a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Blast.*b0eb0d283c
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b0eb0d283c {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Blast.*7069eda4db
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7069eda4db {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Blast.*116f8b4abe
// Size: 0x88 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*116f8b4abe {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct Blast.*b7fc44da85
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b7fc44da85 {
	char pad_0[0x10]; // 0x00(0x10)
};

