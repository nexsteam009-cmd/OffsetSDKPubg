// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UHoudiniAsset : UObject {
	struct FString *20560c1e85; // 0x30(0x10)
	struct U*9a19f23f9a* *9a19f23f9a; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x4b0 (Inherited: 0x30)  [layout: KHOP]
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServerHost; // 0x38(0x10)
	int32 ServerPort; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ServerPipeName; // 0x50(0x10)
	bool bStartAutomaticServer; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AutomaticServerTimeout; // 0x64(0x04)
	bool bShowMultiAssetDialog; // 0x68(0x01)
	bool bPauseCookingOnStart; // 0x69(0x01)
	bool bEnableCooking; // 0x6a(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x6b(0x01)
	bool bTransformChangeTriggersCooks; // 0x6c(0x01)
	bool bDisplaySlateCookingNotifications; // 0x6d(0x01)
	bool bCookCurvesOnMouseRelease; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	struct FText TemporaryCookFolder; // 0x70(0x18)
	bool bTreatRampParametersAsMultiparms; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString CollisionGroupNamePrefix; // 0x90(0x10)
	struct FString RenderedCollisionGroupNamePrefix; // 0xa0(0x10)
	struct FString UCXCollisionGroupNamePrefix; // 0xb0(0x10)
	struct FString UCXRenderedCollisionGroupNamePrefix; // 0xc0(0x10)
	struct FString SimpleCollisionGroupNamePrefix; // 0xd0(0x10)
	struct FString SimpleRenderedCollisionGroupNamePrefix; // 0xe0(0x10)
	struct FString MarshallingAttributeMaterial; // 0xf0(0x10)
	struct FString MarshallingAttributeMaterialHole; // 0x100(0x10)
	struct FString MarshallingAttributeInstanceOverride; // 0x110(0x10)
	struct FString MarshallingAttributeFaceSmoothingMask; // 0x120(0x10)
	struct FString MarshallingAttributeLightmapResolution; // 0x130(0x10)
	struct FString MarshallingAttributeGeneratedMeshName; // 0x140(0x10)
	struct FString MarshallingAttributeInputMeshName; // 0x150(0x10)
	struct FString MarshallingAttributeInputSourceFile; // 0x160(0x10)
	float MarshallingSplineResolution; // 0x170(0x04)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x174(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x175(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x176(0x01)
	char pad_177[0x1]; // 0x177(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x178(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x17c(0x04)
	float GeneratedGeometryScaleFactor; // 0x180(0x04)
	float TransformScaleFactor; // 0x184(0x04)
	enum class EHoudiniRuntimeSettingsAxisImport ImportAxis; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bDoubleSidedGeometry : 1; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FBodyInstance *c9d190db53; // 0x1a0(0x230)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32 LightMapResolution; // 0x3d4(0x04)
	float LpvBiasMultiplier; // 0x3d8(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x3dc(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x3e0(0x10)
	int32 LightMapCoordinateIndex; // 0x3f0(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	float StreamingDistanceMultiplier; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UFoliageType_InstancedStaticMesh* *e42de3ded3; // 0x400(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x408(0x10)
	bool bUseFullPrecisionUVs; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32 SrcLightmapIndex; // 0x41c(0x04)
	int32 DstLightmapIndex; // 0x420(0x04)
	int32 MinLightmapResolution; // 0x424(0x04)
	bool bRemoveDegenerates; // 0x428(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x429(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x42a(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x42b(0x01)
	bool bUseMikkTSpace; // 0x42c(0x01)
	bool bBuildAdjacencyBuffer; // 0x42d(0x01)
	bool bUseCustomHoudiniLocation; // 0x42e(0x01)
	char pad_42F[0x1]; // 0x42f(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x430(0x10)
	bool bHidePlacementModeHoudiniTools; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct FHoudiniToolDirectory> CustomHoudiniToolsLocation; // 0x448(0x10)
	int32 CookingThreadStackSize; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x460(0x10)
	struct FString OtlSearchPath; // 0x470(0x10)
	struct FString DsoSearchPath; // 0x480(0x10)
	struct FString ImageDsoSearchPath; // 0x490(0x10)
	struct FString AudioDsoSearchPath; // 0x4a0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x12b0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UHoudiniAssetComponent : UPrimitiveComponent {
	char pad_9D0[0x8]; // 0x9d0(0x08)
	char *785511a0f8 : 1; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	struct UPhysicalMaterial* *25de18dae3; // 0x9e0(0x08)
	char pad_9E8[0x8]; // 0x9e8(0x08)
	struct FBodyInstance *c9d190db53; // 0x9f0(0x230)
	enum class ECollisionTraceFlag *0755fa1857; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	int32 *1b0fa30179; // 0xc24(0x04)
	float GeneratedLpvBiasMultiplier; // 0xc28(0x04)
	float *49188d5fd5; // 0xc2c(0x04)
	struct FWalkableSlopeOverride *c7ffacc065; // 0xc30(0x10)
	int32 *cd268a438a; // 0xc40(0x04)
	char *c6d037e8fb : 1; // 0xc44(0x01)
	char pad_C45[0x3]; // 0xc45(0x03)
	float *028b34e8d0; // 0xc48(0x04)
	char pad_C4C[0x4]; // 0xc4c(0x04)
	struct UFoliageType_InstancedStaticMesh* *20212b5e71; // 0xc50(0x08)
	struct TArray<struct UAssetUserData*> *fc9cf9d6f7; // 0xc58(0x10)
	char pad_C68[0x478]; // 0xc68(0x478)
	struct FText BakeFolder; // 0x10e0(0x18)
	struct FText *56c6f79f1f; // 0x10f8(0x18)
	char pad_1110[0x1a0]; // 0x1110(0x1a0)

	void *06b5912eab(); // Function HoudiniEngineRuntime.HoudiniAssetComponent.*06b5912eab //  // @ game+0xfa92ec0
};

// Class HoudiniEngineRuntime.*084fc3bf2f
// Size: 0xd8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*084fc3bf2f : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class HoudiniEngineRuntime.*97dd5fc068
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*97dd5fc068 : UObject {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class HoudiniEngineRuntime.*129310d8ef
// Size: 0x190 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*129310d8ef : U*97dd5fc068 {
	char pad_A8[0xe8]; // 0xa8(0xe8)
};

// Class HoudiniEngineRuntime.*dfc89d9ca0
// Size: 0x1b0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*dfc89d9ca0 : UObject {
	char pad_30[0x180]; // 0x30(0x180)
};

// Class HoudiniEngineRuntime.*9a23652f92
// Size: 0x240 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*9a23652f92 : U*97dd5fc068 {
	char pad_A8[0x198]; // 0xa8(0x198)
};

// Class HoudiniEngineRuntime.*447aee8055
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*447aee8055 : U*97dd5fc068 {
};

// Class HoudiniEngineRuntime.*9ce4bc176e
// Size: 0xe0 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*9ce4bc176e : U*97dd5fc068 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*1379557bac
// Size: 0xb8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*1379557bac : U*97dd5fc068 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*c8c2b61188
// Size: 0xd0 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*c8c2b61188 : U*97dd5fc068 {
	char pad_A8[0x28]; // 0xa8(0x28)
};

// Class HoudiniEngineRuntime.*28f6fcb570
// Size: 0xe0 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*28f6fcb570 : U*97dd5fc068 {
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class HoudiniEngineRuntime.*3c16848c16
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*3c16848c16 : U*97dd5fc068 {
};

// Class HoudiniEngineRuntime.*6052eb1c08
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*6052eb1c08 : U*97dd5fc068 {
};

// Class HoudiniEngineRuntime.*d19e2ac4eb
// Size: 0xd8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*d19e2ac4eb : U*97dd5fc068 {
	char pad_A8[0x30]; // 0xa8(0x30)
};

// Class HoudiniEngineRuntime.*dac258d143
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*dac258d143 : U*97dd5fc068 {
};

// Class HoudiniEngineRuntime.*b897f39167
// Size: 0xb8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*b897f39167 : U*97dd5fc068 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*fb90c78d1e
// Size: 0xb8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct U*fb90c78d1e : UCurveFloat {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class HoudiniEngineRuntime.*5510074c62
// Size: 0x210 (Inherited: 0x1f8)  [layout: LECH - offset chi la uoc luong]
struct U*5510074c62 : U*d3ff18b806 {
	char pad_1F8[0x18]; // 0x1f8(0x18)
};

// Class HoudiniEngineRuntime.*a76165c9bc
// Size: 0xd0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*a76165c9bc : U*b897f39167 {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class HoudiniEngineRuntime.*833df8f590
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*833df8f590 : U*97dd5fc068 {
};

// Class HoudiniEngineRuntime.*6fc01f6e0b
// Size: 0xb8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*6fc01f6e0b : U*97dd5fc068 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*7fee7d322d
// Size: 0xb8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*7fee7d322d : U*97dd5fc068 {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.*a6cf22cd1c
// Size: 0x220 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*a6cf22cd1c : UActorComponent {
	char pad_210[0x10]; // 0x210(0x10)
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UHoudiniEngineConvertBgeoCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UHoudiniEngineConvertBgeoDirCommandlet : UCommandlet {
};

// Class HoudiniEngineRuntime.*b93a16627d
// Size: 0x530 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*b93a16627d : USceneComponent {
	char pad_480[0xa8]; // 0x480(0xa8)
	enum class EHoudiniHandleType *e3a140c8df; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
};

// Class HoudiniEngineRuntime.*3363555cb0
// Size: 0x490 (Inherited: 0x480)  [layout: KHOP]
struct U*3363555cb0 : USceneComponent {
	struct UObject* *42e7dc203d; // 0x478(0x08)
	struct TArray<struct AActor*> Instances; // 0x480(0x10)
};

// Class HoudiniEngineRuntime.*e889abc48e
// Size: 0x4a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*e889abc48e : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x478(0x10)
	struct UMaterialInterface* OverrideMaterial; // 0x488(0x08)
	struct UStaticMesh* InstancedMesh; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
};

// Class HoudiniEngineRuntime.*47b76516a3
// Size: 0x580 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*47b76516a3 : USceneComponent {
	char pad_480[0x100]; // 0x480(0x100)
};

// Class HoudiniEngineRuntime.*8a591a5d94
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*8a591a5d94 : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

