// Class CoherentRenderingPlugin.CoherentRenderingSettings
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UCoherentRenderingSettings : UObject {
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x30(0x01)
	bool ShowWarningsOnScreen; // 0x31(0x01)
	bool EnablePerformanceWarnings; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FString DeveloperOptions; // 0x38(0x10)
};

