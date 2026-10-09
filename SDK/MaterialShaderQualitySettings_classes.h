// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x30)  [layout: KHOP]
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> *39225e64e0; // 0x30(0x50)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x03]; // 0x30(0x12)
	char pad_42[0x6]; // 0x42(0x06)
};

