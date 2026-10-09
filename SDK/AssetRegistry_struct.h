// ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x00(0x10)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FAssetBundleEntry {
	struct FPrimaryAssetId BundleScope; // 0x00(0x10)
	struct FName BundleName; // 0x10(0x08)
	struct TArray<struct FStringAssetReference> BundleAssets; // 0x18(0x10)
};

