// Class PrefabAsset.PrefabActor
// Size: 0x430 (Inherited: 0x400)  [layout: KHOP]
struct APrefabActor : AActor {
	struct UPrefabComponent* PrefabComponent; // 0x400(0x08)
	struct FText BackupPrefabCopyData; // 0x408(0x18)
	bool bKeepMaterialOverrides; // 0x420(0x01)
	bool bKeepTslOverrides; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct ULODParentComponent* BuildingHLOD; // 0x428(0x08)

	void *76a94132ad(); // Function PrefabAsset.PrefabActor.*76a94132ad //  // @ game+0xf991eb0
	void *0ebad11c69(); // Function PrefabAsset.PrefabActor.*0ebad11c69 //  // @ game+0xf991e30
	void *c8ab4806fb(); // Function PrefabAsset.PrefabActor.*c8ab4806fb //  // @ game+0xda977bc
	void *dd3bb468f1(); // Function PrefabAsset.PrefabActor.*dd3bb468f1 //  // @ game+0xf991e10
};

// Class PrefabAsset.PrefabActorHolder
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct APrefabActorHolder : AActor {
};

// Class PrefabAsset.PrefabLODHolder
// Size: 0x410 (Inherited: 0x400)  [layout: KHOP]
struct APrefabLODHolder : APrefabActorHolder {
	struct ULODParentComponent* HLODParentComponent; // 0x400(0x08)
	struct UStaticMesh* LevelLODMesh; // 0x408(0x08)
};

// Class PrefabAsset.PrefabAsset
// Size: 0x138 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPrefabAsset : UObject {
	struct FGuid *b32b4e9bf8; // 0x30(0x10)
	struct FText PrefabContent; // 0x40(0x18)
	struct FVector PrefabPivot; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString *46b8f38b77; // 0x68(0x10)
	struct TMap<struct FString, struct FStringAssetReference> AssetReferences; // 0x78(0x50)
	int32 NumActors; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FStringAssetReference *14b3ebefc5; // 0xd0(0x10)
	struct TMap<struct FString, struct F*4920202733> *bf318e15cd; // 0xe0(0x50)
	bool *555ec1a6b6; // 0x130(0x01)
	bool *0234cd6111; // 0x131(0x01)
	bool *a1824330c3; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
};

// Class PrefabAsset.PrefabBuildingCreator
// Size: 0x468 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APrefabBuildingCreator : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	bool bSpawnInOrder; // 0x408(0x01)
	bool bLockConfiguration; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct TArray<struct UPrefabAsset*> PrefabAssetList; // 0x410(0x10)
	struct TArray<struct UPrefabAsset*> PrefabOverrides; // 0x420(0x10)
	bool bUseRoofPrefab; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UPrefabAsset* RoofPrefab; // 0x438(0x08)
	struct AActor* SpawnedRoofPrefab; // 0x440(0x08)
	struct TArray<struct AActor*> SpawnedPrefabActors; // 0x448(0x10)
	float FloorHeight; // 0x458(0x04)
	float BaseOffset; // 0x45c(0x04)
	int32 NumberOfFloors; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
};

// Class PrefabAsset.PrefabComponent
// Size: 0xac0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UPrefabComponent : UPrimitiveComponent {
	char *b01e925303 : 1; // 0x9d0(0x01)
	char *e63ca2ad1c : 1; // 0x9d0(0x01)
	char *538969e3e7 : 1; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct TMap<struct FString, struct F*4920202733> ComponentPrefabOverrideMap; // 0x9d8(0x50)
	struct FVector *93a2e39d6f; // 0xa28(0x0c)
	struct FVector *eec5c6c5c3; // 0xa34(0x0c)
	char *abfc3edddb : 1; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	struct UBlueprint* GeneratedBlueprint; // 0xa48(0x08)
	struct UPrefabAsset* Prefab; // 0xa50(0x08)
	struct TMap<struct FName, struct AActor*> PrefabInstancesMap; // 0xa58(0x50)
	char bTransient : 1; // 0xaa8(0x01)
	char pad_AA9[0x3]; // 0xaa9(0x03)
	bool bIsBaseBuilding; // 0xaac(0x01)
	char pad_AAD[0x3]; // 0xaad(0x03)
	uint32 HouseID; // 0xab0(0x04)
	bool *0234cd6111; // 0xab4(0x01)
	char pad_AB5[0x1]; // 0xab5(0x01)
	bool bWasDisconnectedBeforeBake; // 0xab6(0x01)
	char pad_AB7[0x9]; // 0xab7(0x09)
};

// Class PrefabAsset.PrefabToolSettings
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPrefabToolSettings : UObject {
	bool bReplaceActorsWithCreatedPrefab; // 0x30(0x01)
	bool bUpdateAllPrefabActorsWhenOpenMap; // 0x31(0x01)
	bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x32(0x01)
	bool bShouldLockAllPrefabsOnMapOpen; // 0x33(0x01)
	bool bUpdatePrefabThumbnailOnSave; // 0x34(0x01)
	char pad_35[0x4]; // 0x35(0x04)
	bool bIsolateWhenEnteringPrefab; // 0x39(0x01)
	bool bExpandComponentDestroyAndConvert; // 0x3a(0x01)
	bool bExpandComponentPivotAndSnap; // 0x3b(0x01)
	bool bExpandComponentCollapse; // 0x3c(0x01)
	bool bExpandComponentTSLSettings; // 0x3d(0x01)
	bool bExpandComponentSelectionSettings; // 0x3e(0x01)
	bool bExpandComponentDestruction; // 0x3f(0x01)
	bool bExpandComponentGeneratedBP; // 0x40(0x01)
	bool bEnablePrefabComponentVisualizer; // 0x41(0x01)
	enum class EPrefabVisualizerType PrefabComponentVisualizerType; // 0x42(0x01)
	bool bDisplayPrefabComponentVisualizerEvenNotSelected; // 0x43(0x01)
	struct FColor PrefabViewVisualizerColor; // 0x44(0x04)
	struct FColor PrefabViewVisualizerColorBaseBuilding; // 0x48(0x04)
	struct FColor PrefabViewVisualizerColorDesignItems; // 0x4c(0x04)
	struct FColor TargetActorColor; // 0x50(0x04)
	struct FColor UnLockedConnectedColor; // 0x54(0x04)
	struct FColor LockedConnectedColor; // 0x58(0x04)
	struct FColor UnLockedDisConnectedColor; // 0x5c(0x04)
	struct FColor LockedDisConnectedColor; // 0x60(0x04)
	struct FColor UnLockedNoPrefabAssignedColor; // 0x64(0x04)
	struct FColor LockedNoPrefabAssignedColor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FStringAssetReference PrefabMaterialPath; // 0x70(0x10)
	struct UMaterial* PrefabMaterial; // 0x80(0x08)
	char pad_88[0x1]; // 0x88(0x01)
	bool bDisableLockPrefabSelectionFeature; // 0x89(0x01)
	char pad_8A[0x30]; // 0x8a(0x30)
	bool bLockPrefabChildSelection; // 0xba(0x01)
	bool bDebugMode; // 0xbb(0x01)
	bool bTransparentvisualizer; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

