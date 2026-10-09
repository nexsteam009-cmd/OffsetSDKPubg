// Class MovieSceneCapture.*c4d2d20774
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c4d2d20774 : UInterface {
};

// Class MovieSceneCapture.*d4a3d932ff
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d4a3d932ff : UObject {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x250 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FCaptureProtocolID CaptureType; // 0x40(0x08)
	struct U*d4a3d932ff* *10719d842f; // 0x48(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x50(0x50)
	bool bUseSeparateProcess; // 0xa0(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString AdditionalCommandLineArguments; // 0xa8(0x10)
	struct FString *05f7eaa6b9; // 0xb8(0x10)
	char pad_C8[0x188]; // 0xc8(0x188)
};

// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// Size: 0x250 (Inherited: 0x250)  [layout: KHOP]
struct UAutomatedLevelSequenceCapture : UMovieSceneCapture {
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x270 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct ULevelCapture : UMovieSceneCapture {
	bool *b929d3a018; // 0x250(0x01)
	char pad_251[0xb]; // 0x251(0x0b)
	struct FGuid *bfe294573d; // 0x25c(0x10)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class MovieSceneCapture.*65c6f03946
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*65c6f03946 : UObject {

	void *97a17d76fc(); // Function MovieSceneCapture.*65c6f03946.*97a17d76fc //  // @ game+0xed51b60
	void *a1c3259d14(); // Function MovieSceneCapture.*65c6f03946.*a1c3259d14 //  // @ game+0xed51b38
};

// Class MovieSceneCapture.*52dfe03b65
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*52dfe03b65 : U*d4a3d932ff {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MovieSceneCapture.*707deb4481
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*707deb4481 : U*d4a3d932ff {
};

// Class MovieSceneCapture.ImageCaptureSettings
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UImageCaptureSettings : U*52dfe03b65 {
	int32 CompressionQuality; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class MovieSceneCapture.CompositionGraphCaptureSettings
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct UCompositionGraphCaptureSettings : U*d4a3d932ff {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x30(0x10)
	bool bCaptureFramesInHDR; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 HDRCompressionQuality; // 0x44(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FStringAssetReference PostProcessingMaterial; // 0x50(0x10)
};

// Class MovieSceneCapture.VideoCaptureSettings
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct UVideoCaptureSettings : U*52dfe03b65 {
	bool bUseCompression; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float CompressionQuality; // 0x3c(0x04)
	struct FString VideoCodec; // 0x40(0x10)
};

