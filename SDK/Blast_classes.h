// Class Blast.*677ffca89a
// Size: 0x1500 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct U*677ffca89a : USkinnedMeshComponent {
	struct UBlastMesh* BlastMesh; // 0xe18(0x08)
	struct U*2b5552aa6d* *9235e534c5; // 0xe20(0x08)
	struct U*2b5552aa6d* *3ac6e74ef3; // 0xe28(0x08)
	struct FTransform *7a7b36e86d; // 0xe30(0x30)
	bool *38ada823ef; // 0xe60(0x01)
	bool bOverride_BlastMaterial; // 0xe61(0x01)
	char pad_E62[0x2]; // 0xe62(0x02)
	struct F*292ed5cdcb *292ed5cdcb; // 0xe64(0x10)
	char pad_E74[0xc]; // 0xe74(0x0c)
	struct FBodyInstance DynamicChunkBodyInstance; // 0xe80(0x230)
	float SplitImpluseFromParent; // 0x10b0(0x04)
	float SplitImpluseFromParentRadius; // 0x10b4(0x04)
	float SplitAngularImpulse; // 0x10b8(0x04)
	float MinNoiseRange; // 0x10bc(0x04)
	float MaxNoiseRange; // 0x10c0(0x04)
	float NoiseTransformScale; // 0x10c4(0x04)
	struct FFloatRange DebrisLifetime; // 0x10c8(0x10)
	bool bUseSecondarySplit; // 0x10d8(0x01)
	char pad_10D9[0x3]; // 0x10d9(0x03)
	struct FFloatRange MergedDebrisLifetime; // 0x10dc(0x10)
	float DebrisSecondarySplitPercentage; // 0x10ec(0x04)
	bool bUseCollapseSimulation; // 0x10f0(0x01)
	bool bUseDetailedCollapseSimulation; // 0x10f1(0x01)
	char pad_10F2[0x2]; // 0x10f2(0x02)
	float CollapseHardness; // 0x10f4(0x04)
	bool bUseDamagePropagation; // 0x10f8(0x01)
	char pad_10F9[0x3]; // 0x10f9(0x03)
	float MinPropagationSleepTime; // 0x10fc(0x04)
	float MaxPropagationSleepTime; // 0x1100(0x04)
	float PropagateLuckThreshold; // 0x1104(0x04)
	float MinPropagationFactor; // 0x1108(0x04)
	float MaxPropagationFactor; // 0x110c(0x04)
	float InitialPropagationFactor; // 0x1110(0x04)
	bool bRemovalOnHit; // 0x1114(0x01)
	bool bAllowSelfHitForDebris; // 0x1115(0x01)
	bool bAllowSelfHitForMergedDebris; // 0x1116(0x01)
	char pad_1117[0x1]; // 0x1117(0x01)
	float VolumeBasedExplosionRadiusMultiplier; // 0x1118(0x04)
	char pad_111C[0x4]; // 0x111c(0x04)
	struct TArray<uint32> *0215a49474; // 0x1120(0x10)
	bool *acef473a48; // 0x1130(0x01)
	enum class *d16c51ffdb *d59fa106fa; // 0x1131(0x01)
	char pad_1132[0x6]; // 0x1132(0x06)
	struct FMulticastDelegate OnDamaged; // 0x1138(0x10)
	struct FMulticastDelegate OnActorCreated; // 0x1148(0x10)
	struct FMulticastDelegate OnActorDestroyed; // 0x1158(0x10)
	struct FMulticastDelegate OnActorCreatedFromDamage; // 0x1168(0x10)
	struct FMulticastDelegate OnBondsDamaged; // 0x1178(0x10)
	struct FMulticastDelegate OnChunksDamaged; // 0x1188(0x10)
	struct FMulticastDelegate OnDebrisDestroyed; // 0x1198(0x10)
	struct FMulticastDelegate OnPostSplitChunks; // 0x11a8(0x10)
	char pad_11B8[0x8]; // 0x11b8(0x08)
	struct TArray<struct UBodySetup*> *b3c9d39c57; // 0x11c0(0x10)
	struct FGuid BlastInstanceUniqueId; // 0x11d0(0x10)
	struct FGuid BlastComponentUniqueId; // 0x11e0(0x10)
	char pad_11F0[0x310]; // 0x11f0(0x310)

	void *ff7a344513(); // Function Blast.*677ffca89a.*ff7a344513 //  // @ game+0xf9adc10
	void *8e63f86cb4(); // Function Blast.*677ffca89a.*8e63f86cb4 //  // @ game+0xf9ab0f4
	void *eb2d47fe7e(); // Function Blast.*677ffca89a.*eb2d47fe7e //  // @ game+0xec9a7bc
	void *e03713c1a9(); // Function Blast.*677ffca89a.*e03713c1a9 //  // @ game+0xf9ab0bc
	void *623395dfa1(); // Function Blast.*677ffca89a.*623395dfa1 //  // @ game+0xf9ab00c
	void *fcb7f7f408(); // Function Blast.*677ffca89a.*fcb7f7f408 //  // @ game+0xf9add58
	void *58307e386f(); // Function Blast.*677ffca89a.*58307e386f //  // @ game+0xf9aaf5c
	void *b73501ba07(); // Function Blast.*677ffca89a.*b73501ba07 //  // @ game+0xf9adadc
	void *4e73c2c2d3(); // Function Blast.*677ffca89a.*4e73c2c2d3 //  // @ game+0xf9adb80
	void *290468d665(); // Function Blast.*677ffca89a.*290468d665 //  // @ game+0xf9adccc
	void *53ef093af3(); // Function Blast.*677ffca89a.*53ef093af3 //  // @ game+0xf9a4568
	void OnHit(); // Function Blast.*677ffca89a.OnHit //  // @ game+0xf9ad904
	void *68a1648d1e(); // Function Blast.*677ffca89a.*68a1648d1e //  // @ game+0xf9aae80
	void ApplyRadialDamage(); // Function Blast.*677ffca89a.ApplyRadialDamage //  // @ game+0xf9a47fc
	void *8152609e90(); // Function Blast.*677ffca89a.*8152609e90 //  // @ game+0xf9a4414
	void *d1ac5060c5(); // Function Blast.*677ffca89a.*d1ac5060c5 //  // @ game+0xf9abf90
	void *cfe0f9ba11(); // Function Blast.*677ffca89a.*cfe0f9ba11 //  // @ game+0xf9a166c
};

// Class Blast.BlastExtendedSupportStructure
// Size: 0x428 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ABlastExtendedSupportStructure : AInfo {
	struct TArray<struct AActor*> *08eda10db5; // 0x400(0x10)
	float *690f4efcd0; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct U*b2a70fbb89* *d7d0b0ee87; // 0x418(0x08)
	bool bEnabled; // 0x420(0x01)
	enum class *d16c51ffdb *d59fa106fa; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
};

// Class Blast.BlastHouseActor
// Size: 0x4e0 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct ABlastHouseActor : ABlastExtendedSupportStructure {
	struct U*91ec34a708* *91ec34a708; // 0x428(0x08)
	struct F*4719acc8e0 *39c57ab3d1; // 0x430(0x10)
	struct U*77323539fa* InteriorComponent; // 0x440(0x08)
	char pad_448[0x88]; // 0x448(0x88)
	bool *3e1512af01; // 0x4d0(0x01)
	char pad_4D1[0xf]; // 0x4d1(0x0f)

	void *4967ce47d9(); // Function Blast.BlastHouseActor.*4967ce47d9 //  // @ game+0xf9ab2cc
};

// Class Blast.*77323539fa
// Size: 0x220 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*77323539fa : UActorComponent {
	struct TArray<struct FName> *9b0a2b7e68; // 0x208(0x10) rep=OnRep_HiddenInteriorComponentNames
	char pad_218[0x8]; // 0x218(0x08)

	void *2ea2b5e31a(); // Function Blast.*77323539fa.*2ea2b5e31a //  // @ game+0xf9ab43c
	void OnRep_HiddenInteriorComponentNames(); // Function Blast.*77323539fa.OnRep_HiddenInteriorComponentNames //  // @ game+0xf9adac8
};

// Class Blast.*2b5552aa6d
// Size: 0x128 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2b5552aa6d : UObject {
	struct TArray<enum class EBlastAssetChunkFlags> *4fd32d7a1b; // 0x30(0x10)
	struct FGuid *7325bddb13; // 0x40(0x10)
	char pad_50[0xd8]; // 0x50(0xd8)
};

// Class Blast.*3881034ddf
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct U*3881034ddf : UAssetImportData {
	struct F*1258a906a0 ImportOptions; // 0x30(0x38)
	struct FStringAssetReference *c643598360; // 0x68(0x10)
};

// Class Blast.BlastMesh
// Size: 0x228 (Inherited: 0x128)  [layout: LECH - offset chi la uoc luong]
struct UBlastMesh : U*2b5552aa6d {
	char pad_128[0x8]; // 0x128(0x08)
	struct USkeletalMesh* Mesh; // 0x130(0x08)
	struct USkeleton* Skeleton; // 0x138(0x08)
	struct UPhysicalMaterial* *0ad33356d1; // 0x140(0x08)
	struct F*292ed5cdcb *292ed5cdcb; // 0x148(0x10)
	struct UParticleSystem* *b236e9a455; // 0x158(0x08)
	struct UParticleSystem* *d781b85827; // 0x160(0x08)
	struct UParticleSystem* *873321d822; // 0x168(0x08)
	struct TArray<struct FName> *99551b569d; // 0x170(0x10)
	struct TArray<uint32> ChunkIndexToBoneIndex; // 0x180(0x10)
	struct TArray<struct UStaticMesh*> *dd10979042; // 0x190(0x10)
	float *c254557825; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TMap<struct F*a03ea291b9, struct F*a0b6b1a0dc> *4ade884ff6; // 0x1a8(0x50)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct TArray<struct F*d14a6e1679> *8d5ca24de0; // 0x200(0x10)
	struct TArray<struct FTransform> *f8d0f0afad; // 0x210(0x10)
	int32 *a2200a82fe; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
};

// Class Blast.*0dc7546d36
// Size: 0x228 (Inherited: 0x228)  [layout: KHOP]
struct U*0dc7546d36 : UBlastMesh {
};

// Class Blast.*624eda46ba
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct U*624eda46ba : USceneComponent {
	bool bDamageOnHit; // 0x478(0x01)
};

// Class Blast.*433f2d11b0
// Size: 0x4b0 (Inherited: 0x480)  [layout: KHOP]
struct U*433f2d11b0 : U*624eda46ba {
	float Damage; // 0x480(0x04)
	float MinRadius; // 0x484(0x04)
	float MaxRadius; // 0x488(0x04)
	bool bAddPhysicsImpulse; // 0x48c(0x01)
	char pad_48D[0x1b]; // 0x48d(0x1b)
	struct URadialForceComponent* *c5dafca663; // 0x4a8(0x08)
};

// Class Blast.*08ac573dc6
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*08ac573dc6 : UBlueprintFunctionLibrary {

	void *dd6c9e23b8(); // Function Blast.*08ac573dc6.*dd6c9e23b8 //  // @ game+0xf9ab1f4
	void *a522dfcca4(); // Function Blast.*08ac573dc6.*a522dfcca4 //  // @ game+0xf9ab17c
};

// Class Blast.*371b882bc8
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*371b882bc8 : UInterface {
};

// Class Blast.*5e2a3e4a14
// Size: 0x128 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*5e2a3e4a14 : U*f2bad73143 {
	char pad_88[0xa0]; // 0x88(0xa0)
};

// Class Blast.BlastCommandReplicator
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ABlastCommandReplicator : AActor {

	void *20071d2936(); // Function Blast.BlastCommandReplicator.*20071d2936 //  // @ game+0xf9ab5b0
	void *70aa7af1f2(); // Function Blast.BlastCommandReplicator.*70aa7af1f2 //  // @ game+0xf9aca1c
	void *36c9809f8a(); // Function Blast.BlastCommandReplicator.*36c9809f8a //  // @ game+0xdb3a134
	void *bed43c820a(); // Function Blast.BlastCommandReplicator.*bed43c820a //  // @ game+0xf9ab4bc
};

// Class Blast.*439e0434b4
// Size: 0xb90 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*439e0434b4 : UStaticMeshComponent {
	struct TArray<struct UClass*> DestroyPropagationWhitelist; // 0xb78(0x10)
	char pad_B88[0x8]; // 0xb88(0x08)
};

// Class Blast.*f7308477b2
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f7308477b2 : UInterface {
};

// Class Blast.BlastGlueVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ABlastGlueVolume : AVolume {
	char pad_438[0x8]; // 0x438(0x08)
};

// Class Blast.*91ec34a708
// Size: 0xa10 (Inherited: 0xa00)  [layout: LECH - offset chi la uoc luong]
struct U*91ec34a708 : UBoxComponent {
	char pad_A00[0x10]; // 0xa00(0x10)
};

// Class Blast.*417e79811d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*417e79811d : UInterface {
};

// Class Blast.BlastMeshActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ABlastMeshActor : AActor {
	struct U*677ffca89a* BlastMeshComponent; // 0x400(0x08)
};

// Class Blast.*b2a70fbb89
// Size: 0x1650 (Inherited: 0x1500)  [layout: KHOP]
struct U*b2a70fbb89 : U*677ffca89a {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x14f8(0x10)
	struct TArray<struct F*0424583a91> *db5d6e5546; // 0x1508(0x10)
	struct TArray<struct FIntPoint> *77d25b8efa; // 0x1518(0x10)
	struct TMap<struct FIntPoint, int32> *daae4bf981; // 0x1528(0x50)
	struct F*48bde28f12 *f70083f744; // 0x1578(0x70)
	char pad_15E8[0x8]; // 0x15e8(0x08)
	struct TMap<struct F*a03ea291b9, struct F*a0b6b1a0dc> *f0b33ff40c; // 0x15f0(0x50)
	struct TArray<struct F*116f8b4abe> *d3c63b7b4d; // 0x1640(0x10) rep=OnRep_BlastNetworkBinaryDataArray

	void OnRep_BlastNetworkBinaryDataArray(); // Function Blast.*b2a70fbb89.OnRep_BlastNetworkBinaryDataArray //  // @ game+0xf9ada98
};

// Class Blast.*bdb626a306
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*bdb626a306 : UInterface {
};

// Class Blast.*a3c8b2c907
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a3c8b2c907 : UInterface {
};

// Class Blast.*503bbada0d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*503bbada0d : UBlueprintFunctionLibrary {

	void *462823a7a7(); // Function Blast.*503bbada0d.*462823a7a7 //  // @ game+0xf9a6d20
	void *b49866589b(); // Function Blast.*503bbada0d.*b49866589b //  // @ game+0xf9a46bc
	void *079f638721(); // Function Blast.*503bbada0d.*079f638721 //  // @ game+0xf9a166c
	void *d1b00e5032(); // Function Blast.*503bbada0d.*d1b00e5032 //  // @ game+0xf9a9240
};

// Class Blast.*e82620e32e
// Size: 0x198 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e82620e32e : U*c82d443ff2 {
	char pad_38[0x160]; // 0x38(0x160)

	void OnBlastActorDestroyed(); // Function Blast.*e82620e32e.OnBlastActorDestroyed //  // @ game+0xf9ad438
	void OnBlastPostSplitChunks(); // Function Blast.*e82620e32e.OnBlastPostSplitChunks //  // @ game+0xf9ad68c
};

