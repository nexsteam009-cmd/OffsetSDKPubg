// Enum SubstanceCore.*188157b7a0
enum class *188157b7a0 : uint8 {
	*91f008786b,
	*eae79e742f,
	*e7b7c27aa0,
	*98b2522efa,
	*a9d052c2b3,
	*72cd7bb601,
	*43bb426117,
	*812586fb13,
	*c036e75996,
	*b8e95b266b,
	*1366b63750,
	*203031cfc0,
	*188157b7a0_MAX,
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault,
	SGM_Baked,
	SGM_OnLoadSync,
	SGM_OnLoadSyncAndCache,
	SGM_OnLoadAsync,
	SGM_OnLoadAsyncAndCache,
	SGM_MAX,
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU,
	SET_GPU,
	SET_MAX,
};

// Enum SubstanceCore.ESubChannelType
enum class ESubChannelType : uint8 {
	Diffuse,
	Ambient,
	BaseColor,
	Metallic,
	Roughness,
	Emissive,
	Normal,
	Mask,
	Opacity,
	Refraction,
	AmbientOcclusion,
	Glossiness,
	Height,
	displacement,
	Reflection,
	Invalid,
	ESubChannelType_MAX,
};

// Enum SubstanceCore.*2d65374c18
enum class *2d65374c18 : uint8 {
	*85fadfad6e,
	*4e960c4906,
	*ae37cdc8c4,
	*66c9a1dded,
	*d5b4f100bc,
	*9c13cc6105,
	*8a90d581d7,
	*74ee8bdb65,
	*f161424059,
	*ab8103e30d,
	*2d65374c18_MAX,
};

// ScriptStruct SubstanceCore.*193f55d86a
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*193f55d86a {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct F*dd3ef9a83a> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.*dd3ef9a83a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dd3ef9a83a {
	struct FString Name; // 0x00(0x10)
	enum class *188157b7a0 Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.*a00ee0bd01
// Size: 0x48 (Inherited: 0x18)  [layout: KHOP]
struct F*a00ee0bd01 : F*dd3ef9a83a {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*46ad73b74c
// Size: 0x48 (Inherited: 0x18)  [layout: KHOP]
struct F*46ad73b74c : F*dd3ef9a83a {
	struct TArray<int32> Min; // 0x18(0x10)
	struct TArray<int32> Max; // 0x28(0x10)
	struct TArray<int32> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.*bfe8ca99ec
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*bfe8ca99ec {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

