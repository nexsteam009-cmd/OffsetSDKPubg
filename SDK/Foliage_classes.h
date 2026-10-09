// Class Foliage.*ff492bd8e8
// Size: 0xe20 (Inherited: 0xe00)  [layout: LECH - offset chi la uoc luong]
struct U*ff492bd8e8 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xdf8(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xe08(0x10)
	char pad_E18[0x8]; // 0xe18(0x08)
};

// Class Foliage.*c69c6fc175
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c69c6fc175 : UBlueprintFunctionLibrary {

	void *e039b4fcee(); // Function Foliage.*c69c6fc175.*e039b4fcee //  // @ game+0xeafade8
	void *09be7a78cb(); // Function Foliage.*c69c6fc175.*09be7a78cb //  // @ game+0xeaface8
};

// Class Foliage.FoliageType
// Size: 0x440 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UFoliageType : UObject {
	struct FGuid *2b68efe1d6; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float *dd23a0f8a9; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct F*2a02917495 *c2859ea494[0x04]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *b8df7db263; // 0xb0(0x04)
	char *ca7e0effee : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float *c7759535c0; // 0xb8(0x04)
	struct FFloatInterval *6bbdf49982; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	struct FName LandscapeLayer; // 0xe0(0x08)
	char CollisionWithWorld : 1; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector *7ade9b3904; // 0xec(0x0c)
	float *eb3c60d45d; // 0xf8(0x04)
	struct FBoxSphereBounds *0a89b56c1f; // 0xfc(0x1c)
	struct FVector *292fa8829f; // 0x118(0x0c)
	enum class EComponentMobility Mobility; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FInt32Interval *9cfb692041; // 0x128(0x08)
	char bEnableStaticLighting : 1; // 0x130(0x01)
	char CastShadow : 1; // 0x130(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x130(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x130(0x01)
	char bCastDynamicShadow : 1; // 0x130(0x01)
	char bCastStaticShadow : 1; // 0x130(0x01)
	char bCastShadowAsTwoSided : 1; // 0x130(0x01)
	char bOverrideLightMapRes : 1; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 OverriddenLightMapRes; // 0x134(0x04)
	char bUseAsOccluder : 1; // 0x138(0x01)
	char bTreatAsGrass : 1; // 0x138(0x01)
	char bRenderCustomDepth : 1; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32 CustomDepthStencilValue; // 0x13c(0x04)
	char *8d01ebca1c : 1; // 0x140(0x01)
	char *fc51d74975 : 1; // 0x140(0x01)
	char *bf8d9ff900 : 1; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	enum class EDecalChannel DecalChannel; // 0x144(0x01)
	enum class EHasCustomNavigableGeometry *680661a3ef; // 0x145(0x01)
	struct FLightingChannels LightingChannels; // 0x146(0x03)
	char pad_149[0x7]; // 0x149(0x07)
	struct FBodyInstance BodyInstance; // 0x150(0x230)
	float *6517de4461; // 0x380(0x04)
	float *2592eb0aa9; // 0x384(0x04)
	int32 *8400c09fd3; // 0x388(0x04)
	float *f54efc6e98; // 0x38c(0x04)
	float *2fbfbbf3d8; // 0x390(0x04)
	float *801675a3ff; // 0x394(0x04)
	int32 *d404bdab00; // 0x398(0x04)
	int32 *6c56257860; // 0x39c(0x04)
	float *00b21dce6d; // 0x3a0(0x04)
	bool bCanGrowInShade; // 0x3a4(0x01)
	bool bSpawnsInShade; // 0x3a5(0x01)
	char pad_3A6[0x2]; // 0x3a6(0x02)
	float MaxInitialAge; // 0x3a8(0x04)
	float *cc556eed2d; // 0x3ac(0x04)
	float *62abf1b8bc; // 0x3b0(0x04)
	struct FFloatInterval *ca6be374f5; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FRuntimeFloatCurve *d678617898; // 0x3c0(0x78)
	int32 *221cba6607; // 0x438(0x04)
	char ReapplyDensity : 1; // 0x43c(0x01)
	char ReapplyRadius : 1; // 0x43c(0x01)
	char ReapplyAlignToNormal : 1; // 0x43c(0x01)
	char ReapplyRandomYaw : 1; // 0x43c(0x01)
	char ReapplyScaling : 1; // 0x43c(0x01)
	char ReapplyScaleX : 1; // 0x43c(0x01)
	char ReapplyScaleY : 1; // 0x43c(0x01)
	char ReapplyScaleZ : 1; // 0x43c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x43d(0x01)
	char ReapplyGroundSlope : 1; // 0x43d(0x01)
	char ReapplyHeight : 1; // 0x43d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x43d(0x01)
	char ReapplyZOffset : 1; // 0x43d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x43d(0x01)
	char *b500c1f013 : 1; // 0x43d(0x01)
	char *513afb5065 : 1; // 0x43d(0x01)
	char pad_43E[0x2]; // 0x43e(0x02)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x460 (Inherited: 0x440)  [layout: KHOP]
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x440(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x448(0x10)
	struct UClass* ComponentClass; // 0x458(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x450 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AInstancedFoliageActor : AActor {
	char pad_400[0x50]; // 0x400(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x470 (Inherited: 0x410)  [layout: LECH - offset chi la uoc luong]
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x410(0x08)
	struct FVector *c3e1f0efc3; // 0x418(0x0c)
	struct FVector *b275a5032f; // 0x424(0x0c)
	struct FVector *28a1c8a8db; // 0x430(0x0c)
	struct FVector *c5c3c26d09; // 0x43c(0x0c)
	float FoliageDamageImpulseScale; // 0x448(0x04)
	float FoliageTouchImpulseScale; // 0x44c(0x04)
	float FoliageStiffness; // 0x450(0x04)
	float FoliageStiffnessQuadratic; // 0x454(0x04)
	float FoliageDamping; // 0x458(0x04)
	float MaxDamageImpulse; // 0x45c(0x04)
	float MaxTouchImpulse; // 0x460(0x04)
	float MaxForce; // 0x464(0x04)
	float Mass; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)

	void CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched //  // @ game+0xeafab18
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xb80 (Inherited: 0xb80)  [layout: KHOP]
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x440 (Inherited: 0x438)  [layout: KHOP]
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x438(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x230 (Inherited: 0x210)  [layout: KHOP]
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x208(0x08)
	float TileOverlap; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct AVolume* SpawningVolume; // 0x218(0x08)
	struct FGuid *3d02a99fdb; // 0x220(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UProceduralFoliageSpawner : UObject {
	int32 RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32 NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	bool *9170ba170c; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	void Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate //  // @ game+0xeafb80c
};

// Class Foliage.*81c1e1dcf2
// Size: 0x160 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*81c1e1dcf2 : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct F*6dc14122df> *0fffebb918; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x440 (Inherited: 0x438)  [layout: KHOP]
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x438(0x08)
};

