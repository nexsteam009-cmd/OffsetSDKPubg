// Class Landscape.ControlPointMeshComponent
// Size: 0xb80 (Inherited: 0xb80)  [layout: KHOP]
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xb50 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9d0(0x04)
	int32 SectionBaseY; // 0x9d4(0x04)
	int32 *ddc39416c9; // 0x9d8(0x04)
	int32 *a1fb21e09b; // 0x9dc(0x04)
	int32 *7e6968d579; // 0x9e0(0x04)
	char pad_9E4[0x4]; // 0x9e4(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x9e8(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x9f0(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x9f8(0x10)
	struct TArray<struct F*89821c8e2a> *48616d3da6; // 0xa08(0x10)
	struct TArray<struct UTexture2D*> *65aa1d738e; // 0xa18(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa28(0x08)
	struct FIntPoint *9d9597283b; // 0xa30(0x08)
	char pad_A38[0x8]; // 0xa38(0x08)
	struct FVector4 *2ac2cd58c0; // 0xa40(0x10)
	float *871a9ce711; // 0xa50(0x04)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa58(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa60(0x08)
	struct FBox *5a9eda9b1d; // 0xa68(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa84(0x1c)
	struct FGuid *3c2d7a5418; // 0xaa0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xab0(0x10)
	int32 CollisionMipLevel; // 0xac0(0x04)
	int32 *78c6906b4d; // 0xac4(0x04)
	float *ad19571ea6; // 0xac8(0x04)
	float *26e9983bad; // 0xacc(0x04)
	float StaticLightingResolution; // 0xad0(0x04)
	int32 ForcedLOD; // 0xad4(0x04)
	int32 LODBias; // 0xad8(0x04)
	struct FGuid *bd2bf7e8e7; // 0xadc(0x10)
	struct FGuid *7510979dfc; // 0xaec(0x10)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xb00(0x08)
	bool *b7c550407a; // 0xb08(0x01)
	bool *cf574dd3da; // 0xb09(0x01)
	char pad_B0A[0x6]; // 0xb0a(0x06)
	struct UMaterialInterface* *e428cb5628; // 0xb10(0x08)
	struct UTexture2D* *c26bbad519; // 0xb18(0x08)
	char pad_B20[0x30]; // 0xb20(0x30)
};

// Class Landscape.LandscapeDeform
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ALandscapeDeform : AActor {
};

// Class Landscape.LandscapeDeformComponent
// Size: 0xc80 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeDeformComponent : UPrimitiveComponent {
	struct FBox2D *6ca3f0aef7; // 0x9d0(0x14)
	float *1d3700f4ff; // 0x9e4(0x04)
	int32 *a2116d09eb; // 0x9e8(0x04)
	char pad_9EC[0x4]; // 0x9ec(0x04)
	struct F*c213b7a9c8 *49bd50fdea; // 0x9f0(0x48)
	struct TArray<struct F*013f960fe7> DeformEvents; // 0xa38(0x10)
	struct ULandscapeDeformSetting* LandscapeDeformSetting; // 0xa48(0x08)
	struct TMap<struct FIntPoint, struct ULandscapeHeightfieldCollisionComponent*> *47f5a0f2ef; // 0xa50(0x50)
	char pad_AA0[0x1a0]; // 0xaa0(0x1a0)
	struct TArray<struct F*07f3b89e30> *244afa69ce; // 0xc40(0x10)
	char pad_C50[0x30]; // 0xc50(0x30)
};

// Class Landscape.LandscapeDeformReplicatedActor
// Size: 0x430 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALandscapeDeformReplicatedActor : AActor {
	struct TArray<struct F*7fff7401ad> DeformEvents; // 0x400(0x10) rep=OnRep_DeformEvents
	char pad_410[0x20]; // 0x410(0x20)

	void OnRep_DeformEvents(); // Function Landscape.LandscapeDeformReplicatedActor.OnRep_DeformEvents //  // @ game+0xeb201cc
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x450 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_400[0x50]; // 0x400(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9d0 (Inherited: 0x9d0)  [layout: KHOP]
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*fa2d97f9d4
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*fa2d97f9d4 : UObject {
	struct TArray<struct F*f8d84c4d65> *f2669c9617; // 0x30(0x10)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32 StartCullDistance; // 0x50(0x04)
	int32 EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xb40 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *2294b0d788; // 0x9d0(0x10)
	int32 *a55d904f00; // 0x9e0(0x04)
	int32 *765877091f; // 0x9e4(0x04)
	int32 *6d17a1907b; // 0x9e8(0x04)
	float *7ade9b3904; // 0x9ec(0x04)
	int32 *74f2dfecf1; // 0x9f0(0x04)
	int32 *45676adc76; // 0x9f4(0x04)
	struct TArray<bool> *48597b495a; // 0x9f8(0x10)
	struct FGuid *990c7f754a; // 0xa08(0x10)
	struct FBox *5a9eda9b1d; // 0xa18(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa34(0x1c)
	bool *8ffb4528cf; // 0xa50(0x01)
	char pad_A51[0x87]; // 0xa51(0x87)
	struct TArray<struct UPhysicalMaterial*> *c77f1e7f89; // 0xad8(0x10)
	char pad_AE8[0x58]; // 0xae8(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb60 (Inherited: 0xb40)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *e3da330ad3; // 0xb40(0x10)
	char pad_B50[0x10]; // 0xb50(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *4f77f252af; // 0x4c(0x10)
	int32 *ddc39416c9; // 0x5c(0x04)
	int32 *a1fb21e09b; // 0x60(0x04)
	int32 *372bb108e8; // 0x64(0x04)
	struct FVector *3f9c35d49e; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *b5d3918611; // 0xc8(0x50)
	char pad_118[0xf0]; // 0x118(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeInfoMap : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x38(0x08)
	float Hardness; // 0x40(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1f0 (Inherited: 0x1e8)  [layout: LECH - offset chi la uoc luong]
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char *f276dab9d0 : 1; // 0x1e8(0x01)
	char *efbce3ba1c : 1; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*bcf9ac71e8
// Size: 0x240 (Inherited: 0x1f0)  [layout: LECH - offset chi la uoc luong]
struct U*bcf9ac71e8 : ULandscapeMaterialInstanceConstant {
	char pad_1F0[0x50]; // 0x1f0(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ALandscapeMeshProxyActor : AActor {
	struct U*f3c3c95392* LandscapeMeshProxyComponent; // 0x400(0x08)
};

// Class Landscape.*f3c3c95392
// Size: 0xba0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*f3c3c95392 : UStaticMeshComponent {
	struct FGuid *4f77f252af; // 0xb78(0x10)
	struct TArray<struct FIntPoint> *9f979e8656; // 0xb88(0x10)
	int8 *6ed4c40f8d; // 0xb98(0x01)
	char pad_B99[0x7]; // 0xb99(0x07)
};

// Class Landscape.LandscapeProxy
// Size: 0x8a0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALandscapeProxy : AActor {
	struct FGuid *4f77f252af; // 0x400(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x410(0x08)
	int32 *ddc39416c9; // 0x418(0x04)
	int32 *a1fb21e09b; // 0x41c(0x04)
	int32 *7e6968d579; // 0x420(0x04)
	struct FIntPoint *32883b039d; // 0x424(0x08)
	int32 MaxLODLevel; // 0x42c(0x04)
	float LODDistanceFactor; // 0x430(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	int32 *a82bb7cbed; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x440(0x08)
	float StreamingDistanceMultiplier; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x450(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x458(0x08)
	float *ad19571ea6; // 0x460(0x04)
	float *26e9983bad; // 0x464(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x468(0x10)
	char pad_478[0x28]; // 0x478(0x28)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *47f5a0f2ef; // 0x4a0(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *a87fbbe363; // 0x4b0(0x10)
	char pad_4C0[0x70]; // 0x4c0(0x70)
	char *e9adfde6fa : 1; // 0x530(0x01)
	char bCastStaticShadow : 1; // 0x530(0x01)
	char bCastShadowAsTwoSided : 1; // 0x530(0x01)
	char bCastFarShadow : 1; // 0x530(0x01)
	char *53cae7f2b7 : 1; // 0x530(0x01)
	char bRenderCustomDepth : 1; // 0x530(0x01)
	char bGenerateOverlapEvents : 1; // 0x530(0x01)
	char *bc18fa4d10 : 1; // 0x530(0x01)
	char *51fbe8941c : 1; // 0x531(0x01)
	char *27db91ca06 : 1; // 0x531(0x01)
	char pad_532[0x2]; // 0x532(0x02)
	float StaticLightingResolution; // 0x534(0x04)
	struct FLightingChannels LightingChannels; // 0x538(0x03)
	char pad_53B[0x1]; // 0x53b(0x01)
	int32 CustomDepthStencilValue; // 0x53c(0x04)
	struct F*11375ead39 LightmassSettings; // 0x540(0x18)
	int32 CollisionMipLevel; // 0x558(0x04)
	int32 *78c6906b4d; // 0x55c(0x04)
	float *df1c55ae48; // 0x560(0x04)
	char pad_564[0xc]; // 0x564(0x0c)
	struct FBodyInstance BodyInstance; // 0x570(0x230)
	enum class ENavDataGatheringMode *c159113c44; // 0x7a0(0x01)
	char pad_7A1[0xff]; // 0x7a1(0xff)

	void *460dd8ba80(); // Function Landscape.LandscapeProxy.*460dd8ba80 //  // @ game+0xdac2048
	void *c0f55883f3(); // Function Landscape.LandscapeProxy.*c0f55883f3 //  // @ game+0xeb1f5f8
};

// Class Landscape.Landscape
// Size: 0x8a0 (Inherited: 0x8a0)  [layout: KHOP]
struct ALandscape : ALandscapeProxy {
	bool *8ffb4528cf; // 0x898(0x01)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x8c0 (Inherited: 0x8a0)  [layout: LECH - offset chi la uoc luong]
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x898(0x1c)
	char pad_8B4[0xc]; // 0x8b4(0x0c)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0xa00 (Inherited: 0x9d0)  [layout: KHOP]
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9d0(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x9e0(0x10)
	struct TArray<struct UMeshComponent*> *5ae2f0e647; // 0x9f0(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)  [layout: KHOP]
struct ULandscapeSplineSegment : UObject {
	struct F*57edfa611b *bbb8d83024[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *4b8a78bfaf; // 0x60(0x18)
	struct TArray<struct F*3e3f94cf00> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float *c96c1424e9; // 0x4c(0x04)
	float *b556909762; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*f19afa7ae1> *2b73b439d8; // 0x58(0x10)
	struct TArray<struct F*3e3f94cf00> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*e81b3d3a66
// Size: 0x1b8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*e81b3d3a66 : U*09d4ab6458 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput *9e2fa453cb; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *86ae73cd56; // 0x110(0x38)
	struct FExpressionInput *738b9c1956; // 0x148(0x38)
	struct TArray<struct F*1d040b5705> Layers; // 0x180(0x10)
	uint32 *70680ee562; // 0x190(0x04)
	struct FGuid ExpressionGUID; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*cf58f666cf
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*cf58f666cf : UMaterialExpression {
};

// Class Landscape.*5d73d80a8c
// Size: 0x78 (Inherited: 0x68)  [layout: KHOP]
struct U*5d73d80a8c : U*485bb1da84 {
	struct TArray<struct F*0ceed72278> *93803d96a2; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*058a3efd7c> Layers; // 0x68(0x10)
	struct FGuid ExpressionGUID; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *6fe717045f *29b414814d; // 0x68(0x01)
	enum class *d77c2ef2ef *dd5424360c; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *6c054fb37b; // 0x6c(0x04)
	float *a2289faf1d; // 0x70(0x04)
	float *1cb9786b23; // 0x74(0x04)
	float *ac674ec53b; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*28ec2188dd
// Size: 0x88 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*28ec2188dd : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *3e55ac7b33; // 0x70(0x04)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *7dbbd3fd2b; // 0x68(0x38)
	struct FExpressionInput *5c02e828ea; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *30c569a77f : 1; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid ExpressionGUID; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *3e55ac7b33; // 0xe0(0x04)
	struct FVector *88ecfb09d8; // 0xe4(0x0c)
	struct FGuid ExpressionGUID; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x68(0x10)
};

