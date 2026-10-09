// Class DLSS.DLSSOverrideSettings
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UDLSSOverrideSettings : UObject {
	enum class EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x30(0x01)
	enum class EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x31(0x01)
	enum class EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x32(0x01)
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x33(0x01)
	enum class EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class DLSS.DLSSSettings
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct UDLSSSettings : UObject {
	bool bEnableDLSSD3D12; // 0x30(0x01)
	bool bEnableDLSSD3D11; // 0x31(0x01)
	bool bEnableDLSSInEditorViewports; // 0x32(0x01)
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x33(0x01)
	bool bEnableDLSSInPlayInEditorViewports; // 0x34(0x01)
	bool bShowDLSSSDebugOnScreenMessages; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct FString GenericDLSSBinaryPath; // 0x38(0x10)
	bool bGenericDLSSBinaryExists; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32 NVIDIANGXApplicationId; // 0x4c(0x04)
	struct FString CustomDLSSBinaryPath; // 0x50(0x10)
	bool bCustomDLSSBinaryExists; // 0x60(0x01)
	bool bAllowOTAUpdate; // 0x61(0x01)
	enum class EDLSSPreset DLAAPreset; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	enum class EDLSSPreset DLSSQualityPreset; // 0x64(0x01)
	enum class EDLSSPreset DLSSBalancedPreset; // 0x65(0x01)
	enum class EDLSSPreset DLSSPerformancePreset; // 0x66(0x01)
	enum class EDLSSPreset DLSSUltraPerformancePreset; // 0x67(0x01)
};

