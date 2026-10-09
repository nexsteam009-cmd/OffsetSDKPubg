// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8 {
	WireBox,
	WireSphere,
	EPrefabVisualizerType_MAX,
};

// ScriptStruct PrefabAsset.*4920202733
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*4920202733 {
	char bImportant : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *dc9bbb7e1b IndoorOutdoor; // 0x04(0x01)
	struct FLightingChannels LightingChannels; // 0x05(0x03)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x08(0x10)
	struct FString ParentPrefab; // 0x18(0x10)
};

