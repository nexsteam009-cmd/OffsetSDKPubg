// Enum Landscape.*676603ebc2
enum class *676603ebc2 : uint8 {
	*8e0ed8f0e7,
	*84caef1967,
	*5f4f7084d5,
	*84a445b6fa,
	*676603ebc2_MAX,
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform,
	Free,
	LockXY,
	EGrassScaling_MAX,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear,
	SquareRoot,
	ELandscapeLODFalloff_MAX,
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default,
	Alphabetical,
	UserSpecific,
	ELandscapeLayerDisplayMode_MAX,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None,
	UseMaxLayers,
	ExistingOnly,
	UseComponentWhitelist,
	ELandscapeLayerPaintingRestriction_MAX,
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive,
	Layered,
	ELandscapeImportAlphamapType_MAX,
};

// Enum Landscape.*a977317d27
enum class *a977317d27 : uint8 {
	*315f244f29,
	*e80431407c,
	*f7b3b71a8e,
	*fe507f5cfc,
	*8d3064f193,
	*a977317d27_MAX,
};

// Enum Landscape.*4489b4c879
enum class *4489b4c879 : uint8 {
	*411c9d22be,
	*6988dac636,
	*f3e7c4c58c,
	*4489b4c879_MAX,
};

// Enum Landscape.*7c102d544d
enum class *7c102d544d : uint8 {
	*489f8c0e30,
	*d77b73a86a,
	*0a03497b1a,
	*65d3b73113,
	*7c102d544d_MAX,
};

// Enum Landscape.*d77c2ef2ef
enum class *d77c2ef2ef : uint8 {
	*2044456f46,
	*58b0fe1bd5,
	*8819ee80e2,
	*8f60f5616e,
	*8def1fec67,
	*44311239c3,
	*d77c2ef2ef_MAX,
};

// Enum Landscape.*6fe717045f
enum class *6fe717045f : uint8 {
	*41a29ef8e6,
	*f94c557fce,
	*524d7717a6,
	*417c636dea,
	*b6d0e94208,
	*6fe717045f_MAX,
};

// ScriptStruct Landscape.*89821c8e2a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*89821c8e2a {
	struct ULandscapeLayerInfoObject* *1047185688; // 0x00(0x08)
	bool *9b2aaf5153; // 0x08(0x01)
	bool *7e497599ab; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.*cdb7ebd6aa
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*cdb7ebd6aa {
	struct UMaterialInterface* *0066b30efc; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32 *9353e4594e; // 0x10(0x04)
	int32 *c19e15d590; // 0x14(0x04)
	int32 *2da8d6f24a; // 0x18(0x04)
	int32 *0bc3e1a233; // 0x1c(0x04)
	struct UTexture2D* *31e04fb3ae; // 0x20(0x08)
};

// ScriptStruct Landscape.*7fff7401ad
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7fff7401ad {
	struct FVector2D Origin; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	float MaxDepth; // 0x0c(0x04)
};

// ScriptStruct Landscape.*c213b7a9c8
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*c213b7a9c8 {
	struct FIntPoint *a62efb5f04; // 0x00(0x08)
	struct FIntPoint *4979fd6b0b; // 0x08(0x08)
	struct FIntPoint *f3aa5cd680; // 0x10(0x08)
	uint32 *44682d498d; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<uint32> *e1002c52a8; // 0x20(0x10)
	struct TArray<bool> *9002039dd5; // 0x30(0x10)
	uint32 *7373d9fde0; // 0x40(0x04)
	uint32 *8e486d255c; // 0x44(0x04)
};

// ScriptStruct Landscape.*07f3b89e30
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*07f3b89e30 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UTexture2D* Weightmap; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Landscape.*013f960fe7
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*013f960fe7 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Landscape.*ff956a34d6
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ff956a34d6 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.*f8d84c4d65
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*f8d84c4d65 {
	struct UStaticMesh* *2c14b8ba40; // 0x00(0x08)
	float *fe5ab6415c; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *eebb95def7; // 0x10(0x04)
	int32 *b2a4f8458d; // 0x14(0x04)
	int32 *ad4ab69f1a; // 0x18(0x04)
	int32 MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	char *0bd8e58dac : 1; // 0x3c(0x01)
	char *208887ffef : 1; // 0x3c(0x01)
	char *d38145699c : 1; // 0x3c(0x01)
	char *8d01ebca1c : 1; // 0x3c(0x01)
	char *fc51d74975 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *bf8d9ff900 : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class EDecalChannel DecalChannel; // 0x44(0x01)
	struct FLightingChannels LightingChannels; // 0x45(0x03)
};

// ScriptStruct Landscape.*4ce0b8a48e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4ce0b8a48e {
	struct ULandscapeLayerInfoObject* *9a167802e3; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)
};

// ScriptStruct Landscape.*99e4010e96
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*99e4010e96 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*af8558a9cf
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*af8558a9cf {
	struct ULandscapeLayerInfoObject* *9a167802e3; // 0x00(0x08)
};

// ScriptStruct Landscape.*c4b8305e14
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c4b8305e14 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*39a8af3d00
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*39a8af3d00 {
	struct ULandscapeComponent* *bf9bd077ed[0x04]; // 0x00(0x20)
};

// ScriptStruct Landscape.*c4de3cb977
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c4de3cb977 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*ad8f5ac7fa
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ad8f5ac7fa {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.*c97946a5f5
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c97946a5f5 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *d946e0d015; // 0x08(0x10)
	char *e74d4ec28a : 1; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char *0b79b1917c : 1; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class *4489b4c879 Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis *2bd6016326; // 0x35(0x01)
	enum class ESplineMeshAxis *84a0ffe63a; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
};

// ScriptStruct Landscape.*57edfa611b
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*57edfa611b {
	struct ULandscapeSplineControlPoint* *4ca49d843a; // 0x00(0x08)
	float *9df9a42783; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SocketName; // 0x10(0x08)
};

// ScriptStruct Landscape.*3e3f94cf00
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*3e3f94cf00 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector *862e9a3a8e; // 0x24(0x0c)
	struct FVector *6e5b0c70ef; // 0x30(0x0c)
	float *0aa36f463c; // 0x3c(0x04)
};

// ScriptStruct Landscape.*f19afa7ae1
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f19afa7ae1 {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.*1d040b5705
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1d040b5705 {
	struct FName Name; // 0x00(0x08)
	float *3e55ac7b33; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Landscape.*0ceed72278
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*0ceed72278 {
	struct FName Name; // 0x00(0x08)
	struct U*fa2d97f9d4* *d25cdfbeb7; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Landscape.*058a3efd7c
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*058a3efd7c {
	struct FName LayerName; // 0x00(0x08)
	enum class *7c102d544d *7270c6952f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FExpressionInput *ac78c67ba2; // 0x10(0x38)
	struct FExpressionInput *f4d5fc5a65; // 0x48(0x38)
	float *3e55ac7b33; // 0x80(0x04)
	struct FVector *e74c95658d; // 0x84(0x0c)
	float *dc695e8fcd; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

