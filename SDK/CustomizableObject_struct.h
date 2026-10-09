// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8 {
	Planar,
	Cylindrical,
	Wrapping,
	ECustomizableObjectProjectorType_MAX,
};

// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8 {
	Full,
	Local,
	LocalAndChildren,
	AddWorkingSetNoChildren,
	AddWorkingSetAndChildren,
	EMutableCompileMeshType_MAX,
};

// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8 {
	COGT_TOGGLE,
	COGT_ALL,
	COGT_ONE,
	COGT_ONE_OR_NONE,
	COGT_MAX,
};

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8 {
	None,
	Bool,
	Int,
	Float,
	Color,
	Projector,
	Texture,
	EMutableParameterType_MAX,
};

// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8 {
	All,
	ClientOnly,
	ECustomizableObjectRelevancy_MAX,
};

// ScriptStruct CustomizableObject.*f7667cd97f
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f7667cd97f {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString CustomizableObjectName; // 0x10(0x10)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FCustomizableObjectIdentifier {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	struct FString *ae35bd685b; // 0x10(0x10)
	struct FString Guid; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*a89ef57ebe
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*a89ef57ebe {
	struct FString ParameterName; // 0x00(0x10)
	struct F*02dbbad0b3 Value; // 0x10(0x38)
	struct FString UID; // 0x48(0x10)
	struct TArray<struct F*02dbbad0b3> *daaa88ca3e; // 0x58(0x10)
};

// ScriptStruct CustomizableObject.*02dbbad0b3
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*02dbbad0b3 {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector Up; // 0x18(0x0c)
	struct FVector Scale; // 0x24(0x0c)
	enum class ECustomizableObjectProjectorType ProjectionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Angle; // 0x34(0x04)
};

// ScriptStruct CustomizableObject.*e0145c7e20
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*e0145c7e20 {
	struct FString ParameterName; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
};

// ScriptStruct CustomizableObject.*35ffc657fd
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*35ffc657fd {
	struct FString ParameterName; // 0x00(0x10)
	uint64 ParameterValue; // 0x10(0x08)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*4049a60e61
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*4049a60e61 {
	struct FString ParameterName; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UID; // 0x18(0x10)
	struct TArray<float> *be040f4c73; // 0x28(0x10)
};

// ScriptStruct CustomizableObject.*97f8ccbf76
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*97f8ccbf76 {
	struct FString ParameterName; // 0x00(0x10)
	struct FString *534b8703d5; // 0x10(0x10)
	struct FString UID; // 0x20(0x10)
	struct TArray<struct FString> *76dfb20e39; // 0x30(0x10)
};

// ScriptStruct CustomizableObject.*6dbe8dcf1d
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*6dbe8dcf1d {
	struct FString ParameterName; // 0x00(0x10)
	bool ParameterValue; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString UID; // 0x18(0x10)
};

// ScriptStruct CustomizableObject.*ce08bc1e39
// Size: 0x118 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ce08bc1e39 {
	struct FString Name; // 0x00(0x10)
	struct F*b7eaffd438 ParamUIMetadata; // 0x10(0xe8)
	enum class EMutableParameterType Type; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct F*c9283781cf> ArrayIntegerParameterOption; // 0x100(0x10)
	enum class ECustomizableObjectGroupType IntegerParameterGroupType; // 0x110(0x01)
	bool bDontCompressRuntimeTextures; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct CustomizableObject.*c9283781cf
// Size: 0xf8 (Inherited: 0x00)  [layout: KHOP]
struct F*c9283781cf {
	struct FString Name; // 0x00(0x10)
	struct F*b7eaffd438 ParamUIMetadata; // 0x10(0xe8)
};

// ScriptStruct CustomizableObject.*b7eaffd438
// Size: 0xe8 (Inherited: 0x00)  [layout: KHOP]
struct F*b7eaffd438 {
	struct FString ObjectFriendlyName; // 0x00(0x10)
	struct FString UISectionName; // 0x10(0x10)
	int32 UIOrder; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UTexture2D* UIThumbnail; // 0x28(0x20)
	struct TMap<struct FString, struct FString> ExtraInformation; // 0x48(0x50)
	struct TMap<struct FString, struct UObject*> ExtraAssets; // 0x98(0x50)
};

// ScriptStruct CustomizableObject.*cf74a49d7c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cf74a49d7c {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Texture; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*185f902222
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*185f902222 {
	struct TArray<struct UTexture2D*> Images; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*3ebb68acbd
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*3ebb68acbd {
	struct TArray<struct F*ae740c5422> Textures; // 0x00(0x10)
};

// ScriptStruct CustomizableObject.*ae740c5422
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*ae740c5422 {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
};

// ScriptStruct CustomizableObject.*883990099c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*883990099c {
	int32 ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct CustomizableObject.*dbdcd801c1
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*dbdcd801c1 {
	struct FGuid *8ecc128db0; // 0x00(0x10)
	int32 *53cebea9f7; // 0x10(0x04)
};

// ScriptStruct CustomizableObject.*85e4426cf8
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*85e4426cf8 {
	struct UCustomizableObject* *26fc5a8b90; // 0x00(0x20)
};

// ScriptStruct CustomizableObject.*8f929dcded
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*8f929dcded {
	int32 *4360293b78; // 0x00(0x04)
	int32 *5d5b2fec3a; // 0x04(0x04)
};

// ScriptStruct CustomizableObject.*6645ece8da
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*6645ece8da {
	int32 SizeX; // 0x00(0x04)
	int32 SizeY; // 0x04(0x04)
	struct TArray<uint32> Data; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*eeb0457f1d
// Size: 0x118 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eeb0457f1d {
	struct FString Name; // 0x00(0x10)
	enum class EMutableParameterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *37ffdb4d1c; // 0x14(0x04)
	struct TArray<struct F*c3d508ec6a> *7c3b097e3b; // 0x18(0x10)
	struct F*b7eaffd438 *3b60119b91; // 0x28(0xe8)
	bool *90d85ce89f; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct CustomizableObject.*c3d508ec6a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c3d508ec6a {
	struct FString Name; // 0x00(0x10)
	int32 Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct CustomizableObject.*2b4fd84610
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2b4fd84610 {
	struct FString *9df4ac8b41; // 0x00(0x10)
	enum class TextureFilter Filter; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char SRGB : 1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32 LODBias; // 0x18(0x04)
	enum class *4e35ac1492 AddressX; // 0x1c(0x01)
	enum class *4e35ac1492 AddressY; // 0x1d(0x01)
	enum class TextureGroup LODGroup; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct CustomizableObject.*412e1a1316
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*412e1a1316 {
	bool *edaf676268; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString TargetPlatform; // 0x08(0x10)
};

// ScriptStruct CustomizableObject.*1f48eda8d7
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1f48eda8d7 {
	bool *edaf676268; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *016234a7fc; // 0x04(0x04)
	bool *16329049b0; // 0x08(0x01)
	bool *d9fecb6bb0; // 0x09(0x01)
	char pad_A[0x46]; // 0x0a(0x46)
};

// ScriptStruct CustomizableObject.*44cc057da8
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*44cc057da8 {
	struct FString ProfileName; // 0x00(0x10)
	struct TArray<struct F*6dbe8dcf1d> BoolParameters; // 0x10(0x10)
	struct TArray<struct F*97f8ccbf76> IntParameters; // 0x20(0x10)
	struct TArray<struct F*4049a60e61> FloatParameters; // 0x30(0x10)
	struct TArray<struct F*35ffc657fd> *5d9b3ae08a; // 0x40(0x10)
	struct TArray<struct F*e0145c7e20> *f167615e44; // 0x50(0x10)
	struct TArray<struct F*a89ef57ebe> *70db662ad2; // 0x60(0x10)
};

// ScriptStruct CustomizableObject.*8f4f522c5b
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*8f4f522c5b {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct TArray<struct USkinnedMeshComponent*> Components; // 0x08(0x10)
	double Timestamp; // 0x18(0x08)
};

