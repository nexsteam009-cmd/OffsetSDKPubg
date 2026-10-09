// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709,
	HCGM_P3DCI,
	HCGM_Rec2020,
	HCGM_ACES,
	HCGM_ACEScg,
	HCGM_MAX,
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovieSceneCaptureSettings {
	struct FDirectoryPath OutputDirectory; // 0x00(0x10)
	bool bCreateTemporaryCopiesOfLevels; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* GameModeOverride; // 0x18(0x08)
	struct FString OutputFormat; // 0x20(0x10)
	bool bOverwriteExisting; // 0x30(0x01)
	bool bUseRelativeFrameNumbers; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 HandleFrames; // 0x34(0x04)
	bool ZeroPadFrameNumbers; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 FrameRate; // 0x3c(0x04)
	struct FCaptureResolution Resolution; // 0x40(0x08)
	bool bEnableTextureStreaming; // 0x48(0x01)
	bool bCinematicEngineScalability; // 0x49(0x01)
	bool bCinematicMode; // 0x4a(0x01)
	bool bAllowMovement; // 0x4b(0x01)
	bool bAllowTurning; // 0x4c(0x01)
	bool bShowPlayer; // 0x4d(0x01)
	bool bShowHUD; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FCaptureResolution {
	uint32 ResX; // 0x00(0x04)
	uint32 ResY; // 0x04(0x04)
};

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FCaptureProtocolID {
	struct FName Identifier; // 0x00(0x08)
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCompositionGraphCapturePasses {
	struct TArray<struct FString> Value; // 0x00(0x10)
};

