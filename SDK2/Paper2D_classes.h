// Class Paper2D.PaperSpriteActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.PaperCharacter
// Size: 0x930 (Inherited: 0x920)  [layout: LECH - offset chi la uoc luong]
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x920(0x08)
	char pad_928[0x8]; // 0x928(0x08)
};

// Class Paper2D.*26b80b55af
// Size: 0x230 (Inherited: 0x210)  [layout: KHOP]
struct U*26b80b55af : U*c7684e688b {
	bool *d59094659c; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32 *e98fc0103d; // 0x214(0x04)
	struct FText *bae359fd22; // 0x218(0x18)
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*50a8db6895> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *c57f2a932f(); // Function Paper2D.PaperFlipbook.*c57f2a932f //  // @ game+0xf820e74
	void *7d4653c373(); // Function Paper2D.PaperFlipbook.*7d4653c373 //  // @ game+0xf81fd20
	void *9c346c81f3(); // Function Paper2D.PaperFlipbook.*9c346c81f3 //  // @ game+0xf81fc98
	void *0e88b8ae21(); // Function Paper2D.PaperFlipbook.*0e88b8ae21 //  // @ game+0xf81fc3c
	void *716b81c6b5(); // Function Paper2D.PaperFlipbook.*716b81c6b5 //  // @ game+0xf81f080
	void *605d62b41f(); // Function Paper2D.PaperFlipbook.*605d62b41f //  // @ game+0xf5660d8
	void *9db4344306(); // Function Paper2D.PaperFlipbook.*9db4344306 //  // @ game+0xf820eec
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0xb20 (Inherited: 0xae0)  [layout: KHOP]
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* *fc206a8f3c; // 0xad8(0x08) rep=OnRep_SourceFlipbook
	struct UMaterialInterface* Material; // 0xae0(0x08)
	float PlayRate; // 0xae8(0x04)
	char bLooping : 1; // 0xaec(0x01)
	char *bf55da6d62 : 1; // 0xaec(0x01)
	char *593f555c5d : 1; // 0xaec(0x01)
	char pad_AED[0x3]; // 0xaed(0x03)
	float *ce9ae21c69; // 0xaf0(0x04)
	int32 *e6ffb3366d; // 0xaf4(0x04)
	struct FLinearColor SpriteColor; // 0xaf8(0x10)
	struct UBodySetup* *aaa5afae12; // 0xb08(0x08)
	struct FMulticastDelegate OnFinishedPlaying; // 0xb10(0x10)

	void *6c8c3c0b08(); // Function Paper2D.PaperFlipbookComponent.*6c8c3c0b08 //  // @ game+0xf820ecc
	void SetPlayRate(); // Function Paper2D.PaperFlipbookComponent.SetPlayRate //  // @ game+0xf823e14
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd //  // @ game+0xf821580
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse //  // @ game+0xf82156c
	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop //  // @ game+0xf825628
	void *87ba6a0bf5(); // Function Paper2D.PaperFlipbookComponent.*87ba6a0bf5 //  // @ game+0xed42d08
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart //  // @ game+0xf8213b4
	void SetNewTime(); // Function Paper2D.PaperFlipbookComponent.SetNewTime //  // @ game+0xf8234a0
	void *3d31c09fc0(); // Function Paper2D.PaperFlipbookComponent.*3d31c09fc0 //  // @ game+0xf82514c
	void *4e93c68ee7(); // Function Paper2D.PaperFlipbookComponent.*4e93c68ee7 //  // @ game+0xf81eedc
	void *a539683646(); // Function Paper2D.PaperFlipbookComponent.*a539683646 //  // @ game+0xf81ef1c
	void SetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor //  // @ game+0xf825228
	void GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate //  // @ game+0xf81fc5c
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play //  // @ game+0xf8213a0
	void *1eaea7bbed(); // Function Paper2D.PaperFlipbookComponent.*1eaea7bbed //  // @ game+0xf81eebc
	void IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying //  // @ game+0xf820eb0
	void IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping //  // @ game+0xf820e94
	void SetLooping(); // Function Paper2D.PaperFlipbookComponent.SetLooping //  // @ game+0xf823418
	void *084f199286(); // Function Paper2D.PaperFlipbookComponent.*084f199286 //  // @ game+0xf81fc74
	void *de31c0302b(); // Function Paper2D.PaperFlipbookComponent.*de31c0302b //  // @ game+0xf81eefc
	void OnRep_SourceFlipbook(); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook //  // @ game+0xf8212f4
	void SetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition //  // @ game+0xf824788
	void *1c233f15d7(); // Function Paper2D.PaperFlipbookComponent.*1c233f15d7 //  // @ game+0xf81ee94
	void *35cba81520(); // Function Paper2D.PaperFlipbookComponent.*35cba81520 //  // @ game+0xf8206ec
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APaperGroupedSpriteActor : AActor {
	struct U*1a8793303f* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.*1a8793303f
// Size: 0xb10 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct U*1a8793303f : UMeshComponent {
	struct TArray<struct UMaterialInterface*> *1b40d4a8d9; // 0xad8(0x10)
	struct TArray<struct F*b14cb2d1aa> *158f617eed; // 0xae8(0x10)
	char pad_AF8[0x18]; // 0xaf8(0x18)

	void *69fa4dd1da(); // Function Paper2D.*1a8793303f.*69fa4dd1da //  // @ game+0xf81ef34
	void *6c37e80f22(); // Function Paper2D.*1a8793303f.*6c37e80f22 //  // @ game+0xf82559c
	void *29a169ba41(); // Function Paper2D.*1a8793303f.*29a169ba41 //  // @ game+0xf821408
	void *fb011cdf90(); // Function Paper2D.*1a8793303f.*fb011cdf90 //  // @ game+0xf825744
	void *a2c32137aa(); // Function Paper2D.*1a8793303f.*a2c32137aa //  // @ game+0x8de4b0
	void *08b8bec796(); // Function Paper2D.*1a8793303f.*08b8bec796 //  // @ game+0xf81ef1c
	void *52570258f6(); // Function Paper2D.*1a8793303f.*52570258f6 //  // @ game+0xf81dfc4
	void *bea5f753c4(); // Function Paper2D.*1a8793303f.*bea5f753c4 //  // @ game+0xf825640
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x30(0x01)
	bool bEnableTerrainSplineEditing; // 0x31(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xc8 (Inherited: 0x30)  [layout: KHOP]
struct UPaperSprite : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FVector2D SourceUV; // 0x40(0x08)
	struct FVector2D SourceDimension; // 0x48(0x08)
	struct UTexture2D* SourceTexture; // 0x50(0x08)
	struct TArray<struct UTexture*> *363724d843; // 0x58(0x10)
	struct FVector2D *96def1e3b9; // 0x68(0x08)
	struct FVector2D *1ae6c93ba9; // 0x70(0x08)
	struct UTexture2D* *17bf770036; // 0x78(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x80(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x88(0x08)
	struct TArray<struct F*bb24e6b93a> Sockets; // 0x90(0x10)
	enum class ESpriteCollisionMode *ae88989e20; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float *ef665374c3; // 0xa4(0x04)
	struct UBodySetup* BodySetup; // 0xa8(0x08)
	int32 *0708e33993; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FVector4> *721460e84b; // 0xb8(0x10)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.*4ba4acd1ba
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4ba4acd1ba : UBlueprintFunctionLibrary {

	void *01a489ac99(); // Function Paper2D.*4ba4acd1ba.*01a489ac99 //  // @ game+0xf820f78
};

// Class Paper2D.PaperSpriteComponent
// Size: 0xb00 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0xad8(0x08)
	struct UMaterialInterface* MaterialOverride; // 0xae0(0x08)
	struct FLinearColor SpriteColor; // 0xae8(0x10)
	char pad_AF8[0x8]; // 0xaf8(0x08)

	void *b2c2730c69(); // Function Paper2D.PaperSpriteComponent.*b2c2730c69 //  // @ game+0xed42d08
	void SetSpriteColor(); // Function Paper2D.PaperSpriteComponent.SetSpriteColor //  // @ game+0xf8252a8
	void *db7c6a46f6(); // Function Paper2D.PaperSpriteComponent.*db7c6a46f6 //  // @ game+0xf81ee94
};

// Class Paper2D.PaperTerrainActor
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct APaperTerrainActor : AActor {
	struct USceneComponent* *f4ee018501; // 0x400(0x08)
	struct U*9aaf7a62ae* SplineComponent; // 0x408(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x410(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0xa30 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x9d0(0x08)
	bool bClosedSpline; // 0x9d8(0x01)
	bool bFilledSpline; // 0x9d9(0x01)
	char pad_9DA[0x6]; // 0x9da(0x06)
	struct U*9aaf7a62ae* *bbb29a9693; // 0x9e0(0x08)
	int32 RandomSeed; // 0x9e8(0x04)
	float *9c964c7fb0; // 0x9ec(0x04)
	struct FLinearColor TerrainColor; // 0x9f0(0x10)
	int32 *39c94ec978; // 0xa00(0x04)
	enum class ESpriteCollisionMode *ae88989e20; // 0xa04(0x01)
	char pad_A05[0x3]; // 0xa05(0x03)
	float *df1c55ae48; // 0xa08(0x04)
	char pad_A0C[0x4]; // 0xa0c(0x04)
	struct UBodySetup* *aaa5afae12; // 0xa10(0x08)
	char pad_A18[0x18]; // 0xa18(0x18)

	void SetTerrainColor(); // Function Paper2D.PaperTerrainComponent.SetTerrainColor //  // @ game+0xf825328
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct F*ea53f4fa70> Rules; // 0x38(0x10)
	struct UPaperSprite* *9ced0db3fe; // 0x48(0x08)
};

// Class Paper2D.*9aaf7a62ae
// Size: 0xb00 (Inherited: 0xac0)  [layout: LECH - offset chi la uoc luong]
struct U*9aaf7a62ae : USplineComponent {
	char pad_AC0[0x40]; // 0xac0(0x40)
};

// Class Paper2D.*ec224721f2
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*ec224721f2 : UObject {
	struct FText LayerName; // 0x30(0x18)
	int32 LayerWidth; // 0x48(0x04)
	int32 LayerHeight; // 0x4c(0x04)
	char bHiddenInGame : 1; // 0x50(0x01)
	char bLayerCollides : 1; // 0x50(0x01)
	char bOverrideCollisionThickness : 1; // 0x50(0x01)
	char bOverrideCollisionOffset : 1; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CollisionThicknessOverride; // 0x54(0x04)
	float CollisionOffsetOverride; // 0x58(0x04)
	struct FLinearColor LayerColor; // 0x5c(0x10)
	int32 *b7d1a7f9c2; // 0x6c(0x04)
	int32 *5a585d01d6; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct F*bafdac113f> *cfba9ed8b0; // 0x78(0x10)
	struct UPaperTileSet* TileSet; // 0x88(0x08)
	struct TArray<int32> AllocatedGrid; // 0x90(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPaperTileMap : UObject {
	int32 MapWidth; // 0x30(0x04)
	int32 MapHeight; // 0x34(0x04)
	int32 TileWidth; // 0x38(0x04)
	int32 TileHeight; // 0x3c(0x04)
	float *ef665374c3; // 0x40(0x04)
	float *08bb393c1d; // 0x44(0x04)
	float *68d297793a; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	struct UPaperTileSet* *a03b4d3e45; // 0x50(0x20)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct U*ec224721f2*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32 HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32 *ad3a71a261; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x400(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0xb30 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct UPaperTileMapComponent : UMeshComponent {
	int32 MapWidth; // 0xad8(0x04)
	int32 MapHeight; // 0xadc(0x04)
	int32 TileWidth; // 0xae0(0x04)
	int32 TileHeight; // 0xae4(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0xae8(0x08)
	struct UMaterialInterface* Material; // 0xaf0(0x08)
	struct TArray<struct U*ec224721f2*> TileLayers; // 0xaf8(0x10)
	struct FLinearColor *98f457adc6; // 0xb08(0x10)
	int32 *1f841ccb10; // 0xb18(0x04)
	bool *0dc5785e3c; // 0xb1c(0x01)
	char pad_B1D[0x3]; // 0xb1d(0x03)
	struct UPaperTileMap* TileMap; // 0xb20(0x08)
	char pad_B28[0x8]; // 0xb28(0x08)

	void *af5171892a(); // Function Paper2D.PaperTileMapComponent.*af5171892a //  // @ game+0xf81faf0
	void *b1eb70d69a(); // Function Paper2D.PaperTileMapComponent.*b1eb70d69a //  // @ game+0xf821f94
	void *20bf9d2607(); // Function Paper2D.PaperTileMapComponent.*20bf9d2607 //  // @ game+0xf821494
	void *684543d967(); // Function Paper2D.PaperTileMapComponent.*684543d967 //  // @ game+0xf820718
	void *8ae13bbb76(); // Function Paper2D.PaperTileMapComponent.*8ae13bbb76 //  // @ game+0xf8213f4
	void *46ecd86128(); // Function Paper2D.PaperTileMapComponent.*46ecd86128 //  // @ game+0xf82083c
	void *b26c1c60c4(); // Function Paper2D.PaperTileMapComponent.*b26c1c60c4 //  // @ game+0xf81fa4c
	void *19525785ad(); // Function Paper2D.PaperTileMapComponent.*19525785ad //  // @ game+0xf820ad0
	void *3c06023cff(); // Function Paper2D.PaperTileMapComponent.*3c06023cff //  // @ game+0xf8253a8
	void *c16c0de18d(); // Function Paper2D.PaperTileMapComponent.*c16c0de18d //  // @ game+0xf821284
	void *3a2dee7fd4(); // Function Paper2D.PaperTileMapComponent.*3a2dee7fd4 //  // @ game+0xf82137c
	void *147d5e23dd(); // Function Paper2D.PaperTileMapComponent.*147d5e23dd //  // @ game+0xed42d08
	void *049f829875(); // Function Paper2D.PaperTileMapComponent.*049f829875 //  // @ game+0xf8215c8
	void *7619cdb6be(); // Function Paper2D.PaperTileMapComponent.*7619cdb6be //  // @ game+0xf81e164
	void *939736b9bc(); // Function Paper2D.PaperTileMapComponent.*939736b9bc //  // @ game+0xf82551c
	void *c2e3d5f7c6(); // Function Paper2D.PaperTileMapComponent.*c2e3d5f7c6 //  // @ game+0xf820ab4
	void CreateNewTileMap(); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap //  // @ game+0xf81e3f8
	void *a9eabc1de0(); // Function Paper2D.PaperTileMapComponent.*a9eabc1de0 //  // @ game+0xf823330
	void *93d66f6dbd(); // Function Paper2D.PaperTileMapComponent.*93d66f6dbd //  // @ game+0xf820978
};

// Class Paper2D.PaperTileSet
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct F*0d626724e4 BorderMargin; // 0x40(0x10)
	struct FIntPoint PerTileSpacing; // 0x50(0x08)
	struct FIntPoint DrawingOffset; // 0x58(0x08)
	int32 *00a21eee81; // 0x60(0x04)
	int32 *955b5cfd5b; // 0x64(0x04)
	int32 *b7d1a7f9c2; // 0x68(0x04)
	int32 *5a585d01d6; // 0x6c(0x04)
	struct TArray<struct F*728fc8e163> PerTileData; // 0x70(0x10)
	struct TArray<struct F*fbca29bc66> Terrains; // 0x80(0x10)
	int32 TileWidth; // 0x90(0x04)
	int32 TileHeight; // 0x94(0x04)
	int32 Margin; // 0x98(0x04)
	int32 Spacing; // 0x9c(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	void *ca2590f3a1(); // Function Paper2D.TileMapBlueprintLibrary.*ca2590f3a1 //  // @ game+0xf820d34
	void *af071e38fb(); // Function Paper2D.TileMapBlueprintLibrary.*af071e38fb //  // @ game+0xf820dd4
	void MakeTile(); // Function Paper2D.TileMapBlueprintLibrary.MakeTile //  // @ game+0xf8210c8
	void BreakTile(); // Function Paper2D.TileMapBlueprintLibrary.BreakTile //  // @ game+0xf81e1cc
};

