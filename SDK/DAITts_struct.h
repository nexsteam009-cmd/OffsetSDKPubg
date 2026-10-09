// ScriptStruct DAITts.DAITtsRequestBody
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FDAITtsRequestBody {
	struct FString Data; // 0x00(0x10)
};

// ScriptStruct DAITts.*f940e3dff9
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*f940e3dff9 {
	struct FTtsDeviceCommonConfig Common; // 0x00(0x38)
	struct F*f4aac13426 Korean; // 0x38(0x08)
	struct F*f4aac13426 English; // 0x40(0x08)
	struct F*f4aac13426 Chinese; // 0x48(0x08)
};

// ScriptStruct DAITts.*f4aac13426
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*f4aac13426 {
	float LengthScale; // 0x00(0x04)
	int32 Language; // 0x04(0x04)
};

// ScriptStruct DAITts.TtsDeviceCommonConfig
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTtsDeviceCommonConfig {
	int32 LatentChannels; // 0x00(0x04)
	int32 MelChannels; // 0x04(0x04)
	int32 ContextDim; // 0x08(0x04)
	float GuidanceScale; // 0x0c(0x04)
	float VolumeScale; // 0x10(0x04)
	int32 SampleRate; // 0x14(0x04)
	float TrimSeconds; // 0x18(0x04)
	int32 NumInferenceSteps; // 0x1c(0x04)
	int32 NumThreads; // 0x20(0x04)
	bool TrimPrompt; // 0x24(0x01)
	bool PreloadedMode; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FString Backend; // 0x28(0x10)
};

