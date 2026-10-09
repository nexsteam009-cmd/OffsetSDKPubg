// BlueprintGeneratedClass ExplosionEffectsActor.ExplosionEffectsActor_C
// Size: 0x508 (Inherited: 0x400)  [layout: KHOP]
struct AExplosionEffectsActor_C : ABZExplosionEffect {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UParticleSystemComponent* P_Player_Dust_Off; // 0x410(0x08)
	struct UParticleSystemComponent* explosion; // 0x418(0x08)
	struct UPostProcessComponent* Dust_PP; // 0x420(0x08)
	struct UPostProcessComponent* Flash_PP; // 0x428(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x430(0x08)
	bool startDust; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float maxDustValue; // 0x43c(0x04)
	struct UMaterialInstanceDynamic* DustPP_MID; // 0x440(0x08)
	struct UMaterialInstanceDynamic* FlashPP_MID; // 0x448(0x08)
	struct UMaterialInstanceDynamic* playerDust_MID; // 0x450(0x08)
	struct TArray<struct FVector> explosionOrigins; // 0x458(0x10)
	struct TArray<float> flashTimes; // 0x468(0x10)
	struct TArray<float> dustTimes; // 0x478(0x10)
	int32 nextFlashIndex; // 0x488(0x04)
	float flashTimeMultipler; // 0x48c(0x04)
	float flashIntensityMultiplier; // 0x490(0x04)
	float dustSettleTime; // 0x494(0x04)
	float dustBuildTime; // 0x498(0x04)
	float dustDem; // 0x49c(0x04)
	struct UMaterialInstanceDynamic* skyboxDust_MID; // 0x4a0(0x08)
	struct UAkAudioEvent* ExplosionSound; // 0x4a8(0x08)
	struct UMaterialInstanceDynamic* VolumeDust; // 0x4b0(0x08)
	bool Use VolumetricEffect; // 0x4b8(0x01)
	bool PlayerDustOn; // 0x4b9(0x01)
	bool DustLastFrame; // 0x4ba(0x01)
	char pad_4BB[0x1]; // 0x4bb(0x01)
	float dustScale; // 0x4bc(0x04)
	float dustStartOffset; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct AActor*> objectsToSort; // 0x4c8(0x10)
	float UpdateTimer; // 0x4d8(0x04)
	float UndergroundDensity; // 0x4dc(0x04)
	bool wasUnderground; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UMaterialInstance* DustGrungeMatSoftRef; // 0x4e8(0x20)

	struct ALandscapeStreamingProxy* IsUnderGround(struct FVector ExplosionCenter, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z, int32 CallFunc__f39acf2f68_ReturnValue, struct TArray<struct FHitResult> CallFunc_LineTraceMultiForObjects_OutHits, struct FVector CallFunc_BreakHitResult_Location, struct FVector CallFunc_BreakHitResult_ImpactNormal, struct AActor* CallFunc_BreakHitResult_HitActor); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.IsUnderGround // Net|NetRequest|Exec|Native|Event|NetResponse|NetMulticast|UbergraphFunction|Private|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	bool UpdateDustSortOrder(struct FVector Player Location, int32 Index, bool K2Node_DynamicCast_bSuccess, bool K2Node_DynamicCast_bSuccess2, bool K2Node_DynamicCast_bSuccess3, struct AActor* CallFunc_Array_Get_Item2, struct FVector CallFunc__f1cbbe801f_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UpdateDustSortOrder //  // @ game+0x43bab4
	void PlayExplosionFX(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.PlayExplosionFX //  // @ game+0x43bab4
	int32 HandleDust(float CallFunc__3cc7671c4e_ReturnValue3, float CallFunc__d76cc25d00_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item2, bool CallFunc__58c16855d2_ReturnValue2, float K2Node_Select_Default, float CallFunc_Cos_ReturnValue, float CallFunc__3cc7671c4e_ReturnValue7, float CallFunc__3cc7671c4e_ReturnValue8); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleDust //  // @ game+0x43bab4
	float HandleFlash(struct FString CallFunc__5c08aa2dfe_ReturnValue, float CallFunc__3cc7671c4e_ReturnValue, float Temp_float_Variable, float CallFunc_Array_Get_Item, bool CallFunc__7abc43d356_ReturnValue, float CallFunc__d76cc25d00_ReturnValue); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.HandleFlash //  // @ game+0x43bab4
	void Show Dust Mesh(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Show Dust Mesh //  // @ game+0x43bab4
	void UserConstructionScript(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.UserConstructionScript //  // @ game+0x43bab4
	void OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.OnLoaded_ABED7E7C4573CB45B6BA5AAE2C558419 //  // @ game+0x43bab4
	void BeginEffect(struct FVector VolumetricScale); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.BeginEffect //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveTick(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ReceiveTick //  // @ game+0x43bab4
	void Remove Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Remove Sort Object //  // @ game+0x43bab4
	void Add Sort Object(); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.Add Sort Object //  // @ game+0x43bab4
	struct ABP_BZ_DustVolume_C* ExecuteUbergraph_ExplosionEffectsActor(int32 EntryPoint, struct FVector CallFunc__fbae7389c1_ReturnValue, struct FVector CallFunc_BreakTransform_Scale, struct FVector CallFunc__8fbbb0e0e8_ReturnValue, float CallFunc_BreakVector_Y, struct FName CallFunc__61b374cde3_ReturnValue, int32 CallFunc__ac59bee9b0_ReturnValue, bool CallFunc__8c891f7bec_ReturnValue, bool Temp_bool_Variable, bool CallFunc__65add690db_ReturnValue, bool CallFunc__5a18eb01b2_ReturnValue, struct APawn* CallFunc_K2_GetPawn_ReturnValue, struct UObject* K2Node_CustomEvent_Loaded, DelegateProperty _69bd57bce3_OutputDelegate, struct ABP_BZ_DustVolume_C* K2Node_DynamicCast_AsBP_BZ_Dust_Volume, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable2, int32 K2Node_Select2_Default); // Function ExplosionEffectsActor.ExplosionEffectsActor_C.ExecuteUbergraph_ExplosionEffectsActor // Net|UbergraphFunction|Private|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

