// BlueprintGeneratedClass ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct AReplayEditorPostProcessVolume_C : ATslReplayEditorPostProcessVolume {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UPostProcessComponent* PostProcess; // 0x410(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x418(0x08)

	void SetAutoExposure(bool IsEnable, struct FPostProcessSettings NewLocalVar); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.SetAutoExposure // NetReliableExec|Static|NetMulticast|Public|Private|Protected|Delegate|HasOutParms|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	void UserConstructionScript(); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.UserConstructionScript //  // @ game+0x43bab4
	float SetDof(float DofBokehMaxSize); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.SetDof //  // @ game+0x43bab4
	void SetColorGrading(bool IsEnable); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.SetColorGrading //  // @ game+0x43bab4
	bool SetBloom(); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.SetBloom //  // @ game+0x43bab4
	bool SetVignette(); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.SetVignette //  // @ game+0x43bab4
	void InitAllSettings(); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.InitAllSettings //  // @ game+0x43bab4
	bool ExecuteUbergraph_ReplayEditorPostProcessVolume(struct FString K2Node_Event_DofMethod, float K2Node_Event_DofFarTransitionRegion, float K2Node_Event_DofBokehMaxSize, float K2Node_Event_DofGaussianNearBlurSize, struct UTexture* K2Node_Event_LUT, struct FPostProcessSettings K2Node_MakeStruct_PostProcessSettings4, float K2Node_Event_Intensity2, struct FPostProcessSettings K2Node_MakeStruct_PostProcessSettings9); // Function ReplayEditorPostProcessVolume.ReplayEditorPostProcessVolume_C.ExecuteUbergraph_ReplayEditorPostProcessVolume // Net|NetRequest|Native|NetResponse|NetMulticast|Public|Private|Protected|Delegate|HasOutParms|BlueprintEvent|BlueprintPure // @ game+0x43bab4
};

