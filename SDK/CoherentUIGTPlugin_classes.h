// Class CoherentUIGTPlugin.CoherentUIGTWidget
// Size: 0x460 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UCoherentUIGTWidget : UWidget {
	char pad_130[0x18]; // 0x130(0x18)
	struct AActor* Owner; // 0x148(0x08)
	struct FCoherentUIGTWidgetTickFunction WidgetTick; // 0x150(0x58)
	struct FMulticastDelegate ReadyForBindings; // 0x1a8(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x1b8(0x10)
	struct FMulticastDelegate FinishLoad; // 0x1c8(0x10)
	struct FMulticastDelegate FailLoad; // 0x1d8(0x10)
	struct FMulticastDelegate StartLoading; // 0x1e8(0x10)
	struct FMulticastDelegate NavigateTo; // 0x1f8(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x208(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x218(0x10)
	char pad_228[0x78]; // 0x228(0x78)
	enum class TextureFilter Filter; // 0x2a0(0x01)
	bool bReceiveInput; // 0x2a1(0x01)
	enum class ECoherentUIGTInputPropagationBehaviour InputPropagationBehaviour; // 0x2a2(0x01)
	bool bReceiveInputWhenTransparent; // 0x2a3(0x01)
	bool bGammaCorrectedMaterial; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float TickPeriodInMinimizedGame; // 0x2a8(0x04)
	bool bRunAdvanceConcurrently; // 0x2ac(0x01)
	enum class ECoherentUIGTTickGroup TickGroup; // 0x2ad(0x01)
	bool AllowPerformanceWarnings; // 0x2ae(0x01)
	char pad_2AF[0x1]; // 0x2af(0x01)
	float ExecuteJSTimersThresholdMs; // 0x2b0(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x2b4(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x2b8(0x04)
	float PaintWarningThresholdMs; // 0x2bc(0x04)
	int32 LayersCountThreshold; // 0x2c0(0x04)
	int32 LayerWidthThreshold; // 0x2c4(0x04)
	int32 LayerHeightThreshold; // 0x2c8(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x2cc(0x01)
	char pad_2CD[0xc3]; // 0x2cd(0xc3)
	struct TArray<struct UTexture2D*> PreloadedTextures; // 0x390(0x10)
	struct U*ff51c8c8de* AudioWrapper; // 0x3a0(0x08)
	char pad_3A8[0xa0]; // 0x3a8(0xa0)
	struct FString URL; // 0x448(0x10)
	float ClickThroughAlphaThreshold; // 0x458(0x04)
	bool Transparent; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)

	void HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView //  // @ game+0xf91c32c
	void CreateDataModelFromObject(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject //  // @ game+0xf91b628
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave //  // @ game+0xf91b434
	void IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady //  // @ game+0xf91c50c
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave //  // @ game+0xf91be60
	void UpdateWholeDataModelFromObject(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject //  // @ game+0xf920b38
	void GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour //  // @ game+0xf91c098
	void RemoveDataModelFromObject(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.RemoveDataModelFromObject //  // @ game+0xf91d57c
	void PreloadTextureSync(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.PreloadTextureSync //  // @ game+0xf91cf9c
	void PreloadTextureAsync(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.PreloadTextureAsync //  // @ game+0xf91ccac
	void IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView //  // @ game+0xf91c598
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels //  // @ game+0xf92049c
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw //  // @ game+0xf91d1fc
	void ShowPaintRects(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects //  // @ game+0xf9203d4
	void GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture //  // @ game+0xf91c218
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame //  // @ game+0xf91bd78
	void RemovePreloadedTextureFromPath(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.RemovePreloadedTextureFromPath //  // @ game+0xf91db1c
	void IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent //  // @ game+0xf91c608
	void SetSoundAttenuation(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetSoundAttenuation //  // @ game+0xf91f3b0
	void IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings //  // @ game+0xf91c574
	void SetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold //  // @ game+0xf91e6d0
	void GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold //  // @ game+0xf91c03c
	void UpdateWholeDataModelFromStruct(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct //  // @ game+0xf920d20
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload //  // @ game+0xf91d464
	void RemoveAllPreloadedTextures(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.RemoveAllPreloadedTextures //  // @ game+0xf91d494
	void SetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour //  // @ game+0xf91f1bc
	void Load(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load //  // @ game+0xf91c7bc
	void CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent //  // @ game+0xf91bc98
	void TriggerJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent //  // @ game+0xf9208a0
	void RemovePreloadedTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.RemovePreloadedTexture //  // @ game+0xf91d90c
	void CreateDataModelFromStruct(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct //  // @ game+0xf91ba3c
	void RemoveDataModelFromStruct(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.RemoveDataModelFromStruct //  // @ game+0xf91d764
	void AddPreloadedTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.AddPreloadedTexture //  // @ game+0xf91ac74
};

// Class CoherentUIGTPlugin.*4f370637df
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4f370637df : UObject {
};

// Class CoherentUIGTPlugin.*ff51c8c8de
// Size: 0x1c0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ff51c8c8de : UObject {
	struct UObject* Owner; // 0x30(0x08)
	struct TMap<int32, struct F*cdff66c18a> Sounds; // 0x38(0x50)
	char pad_88[0x138]; // 0x88(0x138)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x418 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ACoherentUIGTSystem : AActor {
	char pad_400[0x18]; // 0x400(0x18)
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0xa8 (Inherited: 0x30)  [layout: KHOP]
struct UCoherentUIGTSettings : UObject {
	bool EnableLiveReload; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FDirectoryPath> LiveReloadWatchedDirectories; // 0x38(0x10)
	int32 InspectorPort; // 0x48(0x04)
	int32 WebdriverPort; // 0x4c(0x04)
	bool EnableWebSecurity; // 0x50(0x01)
	bool EnableLocalization; // 0x51(0x01)
	bool RunAsynchronous; // 0x52(0x01)
	bool bPaintToBackBuffer; // 0x53(0x01)
	bool AlwaysHandleMouseWheelEvents; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float ScrollDelta; // 0x58(0x04)
	bool AllowPerformanceWarningsInEditor; // 0x5c(0x01)
	bool ShowWarningsOnScreen; // 0x5d(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x5e(0x01)
	bool EnablePerformanceWarnings; // 0x5f(0x01)
	bool bEnableThreadUsageLogging; // 0x60(0x01)
	bool bLoadStreamingTexturesImmediately; // 0x61(0x01)
	bool bTryLoadUTexturesFromRawImages; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct TArray<struct FString> ImageExtensions; // 0x68(0x10)
	enum class TextureCompressionSettings CompressionSettings; // 0x78(0x01)
	enum class TextureGroup TextureGroup; // 0x79(0x01)
	bool bAutoSaveImportedTextures; // 0x7a(0x01)
	char pad_7B[0x5]; // 0x7b(0x05)
	struct FString CoUIResourcesRoot; // 0x80(0x10)
	bool TickWhileGameIsPaused; // 0x90(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties; // 0x91(0x01)
	enum class ECoherentUIGTMSAA MSAA; // 0x92(0x01)
	enum class ECoherentUIGTViewLoadPolicy LoadingPolicy; // 0x93(0x01)
	bool bUseInputPreprocessor; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct TArray<struct FResourceHostPair> ResourceHostMapping; // 0x98(0x10)
};

// Class CoherentUIGTPlugin.*f3a1465dae
// Size: 0xd0 (Inherited: 0x30)  [layout: KHOP]
struct U*f3a1465dae : UObject {
	char pad_30[0x90]; // 0x30(0x90)
	struct TArray<struct UStruct*> *c407a4ef10; // 0xc0(0x10)

	void *91fd986df6(); // Function CoherentUIGTPlugin.*f3a1465dae.*91fd986df6 //  // @ game+0xf91a918
	void *5c85a247a0(); // Function CoherentUIGTPlugin.*f3a1465dae.*5c85a247a0 //  // @ game+0xf918f54
	void *05adcfd271(); // Function CoherentUIGTPlugin.*f3a1465dae.*05adcfd271 //  // @ game+0xf91af5c
	void *110f883957(); // Function CoherentUIGTPlugin.*f3a1465dae.*110f883957 //  // @ game+0xf91b2c4
	void AddFloat(); // Function CoherentUIGTPlugin.*f3a1465dae.AddFloat //  // @ game+0xf919efc
	void *069abdb2a0(); // Function CoherentUIGTPlugin.*f3a1465dae.*069abdb2a0 //  // @ game+0xf9193ac
	void *7299ec542f(); // Function CoherentUIGTPlugin.*f3a1465dae.*7299ec542f //  // @ game+0xf91b1e0
	void *c46abd8145(); // Function CoherentUIGTPlugin.*f3a1465dae.*c46abd8145 //  // @ game+0xf91aac4
	void *958a7fb883(); // Function CoherentUIGTPlugin.*f3a1465dae.*958a7fb883 //  // @ game+0xf9194d4
	void *a84ad9cf26(); // Function CoherentUIGTPlugin.*f3a1465dae.*a84ad9cf26 //  // @ game+0xf91a990
};

// Class CoherentUIGTPlugin.*ca4fd4e1f7
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ca4fd4e1f7 : UObject {
	struct FString EventName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void *8842d7eb5d(); // Function CoherentUIGTPlugin.*ca4fd4e1f7.*8842d7eb5d //  // @ game+0xf91c0b0
	void *055f572fbd(); // Function CoherentUIGTPlugin.*ca4fd4e1f7.*055f572fbd //  // @ game+0xf91c23c
	void *e32c803cb8(); // Function CoherentUIGTPlugin.*ca4fd4e1f7.*e32c803cb8 //  // @ game+0xf91d114
	void *ea5cd4279b(); // Function CoherentUIGTPlugin.*ca4fd4e1f7.*ea5cd4279b //  // @ game+0xf91bf24
	void *38c880382d(); // Function CoherentUIGTPlugin.*ca4fd4e1f7.*38c880382d //  // @ game+0xf91c190
};

// Class CoherentUIGTPlugin.*463c2554b7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*463c2554b7 : UObject {
};

// Class CoherentUIGTPlugin.*1fb95a72f8
// Size: 0x4b0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*1fb95a72f8 : UActorComponent {
	struct FMulticastDelegate ReadyForBindings; // 0x208(0x10)
	struct FMulticastDelegate BindingsReleased; // 0x218(0x10)
	struct FMulticastDelegate FinishLoad; // 0x228(0x10)
	struct FMulticastDelegate FailLoad; // 0x238(0x10)
	struct FMulticastDelegate StartLoading; // 0x248(0x10)
	struct FMulticastDelegate NavigateTo; // 0x258(0x10)
	struct FMulticastDelegate JavaScriptEvent; // 0x268(0x10)
	struct FMulticastDelegate UIGTScriptingReady; // 0x278(0x10)
	DelegateProperty *cfce6c6f20; // 0x288(0x10)
	char pad_298[0x78]; // 0x298(0x78)
	struct TArray<struct UTexture2D*> PreloadedTextures; // 0x310(0x10)
	bool AllowPerformanceWarnings; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float ExecuteJSTimersThresholdMs; // 0x324(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x328(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x32c(0x04)
	float PaintWarningThresholdMs; // 0x330(0x04)
	int32 LayersCountThreshold; // 0x334(0x04)
	int32 LayerWidthThreshold; // 0x338(0x04)
	int32 LayerHeightThreshold; // 0x33c(0x04)
	bool bEnableAdditionalDefaultStyles; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UTextureRenderTarget2D* Texture; // 0x348(0x08)
	enum class TextureFilter Filter; // 0x350(0x01)
	bool bReceiveInput; // 0x351(0x01)
	bool bReceiveInputWhenTransparent; // 0x352(0x01)
	bool bDelayedUpdate; // 0x353(0x01)
	enum class ECoherentUIGTTickGroup TickGroup; // 0x354(0x01)
	char pad_355[0xf3]; // 0x355(0xf3)
	struct U*ff51c8c8de* *10e0785544; // 0x448(0x08)
	char pad_450[0x60]; // 0x450(0x60)

	void *01f286635f(); // Function CoherentUIGTPlugin.*1fb95a72f8.*01f286635f //  // @ game+0xf91be94
	void *486f9bb428(); // Function CoherentUIGTPlugin.*1fb95a72f8.*486f9bb428 //  // @ game+0xf91b470
	void *e21e9d67d3(); // Function CoherentUIGTPlugin.*1fb95a72f8.*e21e9d67d3 //  // @ game+0xf91c4cc
	void *d223853d7c(); // Function CoherentUIGTPlugin.*1fb95a72f8.*d223853d7c //  // @ game+0xf91d1cc
	void Resize(); // Function CoherentUIGTPlugin.*1fb95a72f8.Resize //  // @ game+0xf91dca0
	void *2c980179e5(); // Function CoherentUIGTPlugin.*1fb95a72f8.*2c980179e5 //  // @ game+0xf920460
	void *26d3eff065(); // Function CoherentUIGTPlugin.*1fb95a72f8.*26d3eff065 //  // @ game+0xf91bdb4
	void *f2775d2c00(); // Function CoherentUIGTPlugin.*1fb95a72f8.*f2775d2c00 //  // @ game+0xf91d4b0
	void *37089acd5b(); // Function CoherentUIGTPlugin.*1fb95a72f8.*37089acd5b //  // @ game+0xf920350
	void *a83dcbef64(); // Function CoherentUIGTPlugin.*1fb95a72f8.*a83dcbef64 //  // @ game+0xf91ab40
	void *ebbd209e54(); // Function CoherentUIGTPlugin.*1fb95a72f8.*ebbd209e54 //  // @ game+0xf91d998
	void *2264058c60(); // Function CoherentUIGTPlugin.*1fb95a72f8.*2264058c60 //  // @ game+0xf91bd40
	void *cdeb106d86(); // Function CoherentUIGTPlugin.*1fb95a72f8.*cdeb106d86 //  // @ game+0xf91c598
	void *0ae2a74ee7(); // Function CoherentUIGTPlugin.*1fb95a72f8.*0ae2a74ee7 //  // @ game+0xf920a6c
	void *ba5b4018fe(); // Function CoherentUIGTPlugin.*1fb95a72f8.*ba5b4018fe //  // @ game+0xf91be30
	void Load(); // Function CoherentUIGTPlugin.*1fb95a72f8.Load //  // @ game+0xf91c648
	void *c3de32ed49(); // Function CoherentUIGTPlugin.*1fb95a72f8.*c3de32ed49 //  // @ game+0xf920c04
	void *7ddc79a47b(); // Function CoherentUIGTPlugin.*1fb95a72f8.*7ddc79a47b //  // @ game+0xf91f2b8
	void *e1f5bec596(); // Function CoherentUIGTPlugin.*1fb95a72f8.*e1f5bec596 //  // @ game+0xf91b3fc
	void *9a0c10eaf1(); // Function CoherentUIGTPlugin.*1fb95a72f8.*9a0c10eaf1 //  // @ game+0xf91d230
	void *70a69348c8(); // Function CoherentUIGTPlugin.*1fb95a72f8.*70a69348c8 //  // @ game+0xf920504
	void *40f38905cf(); // Function CoherentUIGTPlugin.*1fb95a72f8.*40f38905cf //  // @ game+0xf91b7e0
	void *220743d68f(); // Function CoherentUIGTPlugin.*1fb95a72f8.*220743d68f //  // @ game+0xf91c550
	void *a574e5bc82(); // Function CoherentUIGTPlugin.*1fb95a72f8.*a574e5bc82 //  // @ game+0xf91cb34
	void *2dbd36c75d(); // Function CoherentUIGTPlugin.*1fb95a72f8.*2dbd36c75d //  // @ game+0xf91d478
	void *89a08824d4(); // Function CoherentUIGTPlugin.*1fb95a72f8.*89a08824d4 //  // @ game+0xf91c004
	void *3f1877ced9(); // Function CoherentUIGTPlugin.*1fb95a72f8.*3f1877ced9 //  // @ game+0xf91c5cc
	void *d82ab333dc(); // Function CoherentUIGTPlugin.*1fb95a72f8.*d82ab333dc //  // @ game+0xf91bc98
	void *9a485222d8(); // Function CoherentUIGTPlugin.*1fb95a72f8.*9a485222d8 //  // @ game+0xf91c30c
	void *8b4f58b03d(); // Function CoherentUIGTPlugin.*1fb95a72f8.*8b4f58b03d //  // @ game+0xf91d648
	void *ea948670b8(); // Function CoherentUIGTPlugin.*1fb95a72f8.*ea948670b8 //  // @ game+0xf91d880
	void *f1a16ea65e(); // Function CoherentUIGTPlugin.*1fb95a72f8.*f1a16ea65e //  // @ game+0xf91dd5c
	void *e9f2619de9(); // Function CoherentUIGTPlugin.*1fb95a72f8.*e9f2619de9 //  // @ game+0xf91ce24
	void Reload(); // Function CoherentUIGTPlugin.*1fb95a72f8.Reload //  // @ game+0xf91d434
};

// Class CoherentUIGTPlugin.*73467636c6
// Size: 0x4f0 (Inherited: 0x4b0)  [layout: LECH - offset chi la uoc luong]
struct U*73467636c6 : U*1fb95a72f8 {
	struct FString URL; // 0x4a8(0x10)
	int32 Width; // 0x4b8(0x04)
	int32 Height; // 0x4bc(0x04)
	bool ManualTexture; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	float ClickThroughAlphaThreshold; // 0x4c4(0x04)
	bool Transparent; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct FName PrimitiveName; // 0x4d0(0x08)
	char pad_4D8[0x18]; // 0x4d8(0x18)
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x4f0 (Inherited: 0x4b0)  [layout: LECH - offset chi la uoc luong]
struct UCoherentUIGTHUD : U*1fb95a72f8 {
	struct FStringAssetReference *0bc49b1648; // 0x4a8(0x10)
	struct UMaterial* *7b7585a967; // 0x4b8(0x08)
	struct UMaterialInstanceDynamic* *235a4b0c7d; // 0x4c0(0x08)
	char pad_4C8[0x28]; // 0x4c8(0x28)
};

// Class CoherentUIGTPlugin.*8c2979ac2e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*8c2979ac2e : UBlueprintFunctionLibrary {

	void *c46abd8145(); // Function CoherentUIGTPlugin.*8c2979ac2e.*c46abd8145 //  // @ game+0xf91aa18
	void *c557d543a2(); // Function CoherentUIGTPlugin.*8c2979ac2e.*c557d543a2 //  // @ game+0xf919064
	void *70a69348c8(); // Function CoherentUIGTPlugin.*8c2979ac2e.*70a69348c8 //  // @ game+0xf9206bc
	void *958a7fb883(); // Function CoherentUIGTPlugin.*8c2979ac2e.*958a7fb883 //  // @ game+0xf919428
	void *05adcfd271(); // Function CoherentUIGTPlugin.*8c2979ac2e.*05adcfd271 //  // @ game+0xf91ada8
	void *7299ec542f(); // Function CoherentUIGTPlugin.*8c2979ac2e.*7299ec542f //  // @ game+0xf91b0d0
	void *069abdb2a0(); // Function CoherentUIGTPlugin.*8c2979ac2e.*069abdb2a0 //  // @ game+0xf919300
	void AddFloat(); // Function CoherentUIGTPlugin.*8c2979ac2e.AddFloat //  // @ game+0xf919550
	void *5c85a247a0(); // Function CoherentUIGTPlugin.*8c2979ac2e.*5c85a247a0 //  // @ game+0xf918d70
	void *d82ab333dc(); // Function CoherentUIGTPlugin.*8c2979ac2e.*d82ab333dc //  // @ game+0xf91bcc4
	void *33f2e00929(); // Function CoherentUIGTPlugin.*8c2979ac2e.*33f2e00929 //  // @ game+0xf91f688
	void *91fd986df6(); // Function CoherentUIGTPlugin.*8c2979ac2e.*91fd986df6 //  // @ game+0xf91a870
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x5a8 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x4e8(0x08)
	char pad_4F0[0xb8]; // 0x4f0(0xb8)

	void *24d19afeb3(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*24d19afeb3 //  // @ game+0xf91f840
	void *e392e5bec1(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.*e392e5bec1 //  // @ game+0xf91c35c
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x468 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x400(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x410(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyDown; // 0x420(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorKeyUp; // 0x430(0x10)
	struct FMulticastDelegate OnCoherentUIGTInputActorFocusChanged; // 0x440(0x10)
	char pad_450[0x18]; // 0x450(0x18)

	void Initialize(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize //  // @ game+0xf91c380
	void *a3ab2dfb80(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*a3ab2dfb80 //  // @ game+0xf91f23c
	void *b9da837707(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*b9da837707 //  // @ game+0xf91f044
	void *a872e54afb(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*a872e54afb //  // @ game+0xf9204d8
	void *4b75dbd4e5(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*4b75dbd4e5 //  // @ game+0xf91f0c0
	void *1f45bce14c(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*1f45bce14c //  // @ game+0xf91b380
	void *8f5bdb39dc(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*8f5bdb39dc //  // @ game+0xf91f13c
	void *00a7e117ea(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*00a7e117ea //  // @ game+0xf91c080
	void *0a1798a364(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*0a1798a364 //  // @ game+0xf91f490
	void *7dd5175a2c(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.*7dd5175a2c //  // @ game+0xf91c4a8
};

// Class CoherentUIGTPlugin.*ae738d068e
// Size: 0x240 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*ae738d068e : UActorComponent {
	struct FString LinkName; // 0x208(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x218(0x08)
	char pad_220[0x20]; // 0x220(0x20)

	void *86adbfcec5(); // Function CoherentUIGTPlugin.*ae738d068e.*86adbfcec5 //  // @ game+0xf91c930
};

// Class CoherentUIGTPlugin.*1fd50a4dd7
// Size: 0x100 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*1fd50a4dd7 : U*314482921f {
	char pad_38[0xc8]; // 0x38(0xc8)
};

