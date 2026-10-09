// Class GameplayTags.*8dd9893b21
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*8dd9893b21 : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct U*224b9aa499* *2a1ad1b1a2; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.*224b9aa499
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*224b9aa499 : UObject {
};

// Class GameplayTags.*927b3a36cc
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*927b3a36cc : U*224b9aa499 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*6ddd6e0c5a
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*6ddd6e0c5a : U*224b9aa499 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*d49dae3441
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*d49dae3441 : U*224b9aa499 {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.*8f8824c7e0
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*8f8824c7e0 : U*224b9aa499 {
	struct TArray<struct U*224b9aa499*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*2140dac8a4
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*2140dac8a4 : U*224b9aa499 {
	struct TArray<struct U*224b9aa499*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*a406473287
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*a406473287 : U*224b9aa499 {
	struct TArray<struct U*224b9aa499*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.*4460b21921
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4460b21921 : UInterface {

	void *2deda8d392(); // Function GameplayTags.*4460b21921.*2deda8d392 //  // @ game+0xec99f74
	void *2ebb0ea3ab(); // Function GameplayTags.*4460b21921.*2ebb0ea3ab //  // @ game+0xec98824
	void *b6fc8c1829(); // Function GameplayTags.*4460b21921.*b6fc8c1829 //  // @ game+0xec997d0
	void *09d595d651(); // Function GameplayTags.*4460b21921.*09d595d651 //  // @ game+0xec98b14
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	void IsGameplayTagValid(); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid //  // @ game+0xec9a318
	void *2fbb09d603(); // Function GameplayTags.BlueprintGameplayTagLibrary.*2fbb09d603 //  // @ game+0xec97b3c
	void HasAnyTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags //  // @ game+0xec99a4c
	void *cc4aff95b5(); // Function GameplayTags.BlueprintGameplayTagLibrary.*cc4aff95b5 //  // @ game+0xec985bc
	void HasAllTags(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags //  // @ game+0xec992a8
	void MakeGameplayTagQuery(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery //  // @ game+0xec9a648
	void BreakGameplayTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer //  // @ game+0xec970e8
	void *6c23984f71(); // Function GameplayTags.BlueprintGameplayTagLibrary.*6c23984f71 //  // @ game+0xec98304
	void AddGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag //  // @ game+0xec969c8
	void *4807e5f9b6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*4807e5f9b6 //  // @ game+0xec9add4
	void *e4759578c7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*e4759578c7 //  // @ game+0xec9aad4
	void *ede4d0a500(); // Function GameplayTags.BlueprintGameplayTagLibrary.*ede4d0a500 //  // @ game+0xec9ad1c
	void *a421e63b1f(); // Function GameplayTags.BlueprintGameplayTagLibrary.*a421e63b1f //  // @ game+0xec97fc8
	void *42cdf307a7(); // Function GameplayTags.BlueprintGameplayTagLibrary.*42cdf307a7 //  // @ game+0xec97490
	void *7090eb4d53(); // Function GameplayTags.BlueprintGameplayTagLibrary.*7090eb4d53 //  // @ game+0xec9b644
	void *596966aa1a(); // Function GameplayTags.BlueprintGameplayTagLibrary.*596966aa1a //  // @ game+0xec97a84
	void *849380ee9d(); // Function GameplayTags.BlueprintGameplayTagLibrary.*849380ee9d //  // @ game+0xec9a58c
	void *46e7eb38f6(); // Function GameplayTags.BlueprintGameplayTagLibrary.*46e7eb38f6 //  // @ game+0xec97790
	void GetTagName(); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName //  // @ game+0xec98a90
	void *76192dfc33(); // Function GameplayTags.BlueprintGameplayTagLibrary.*76192dfc33 //  // @ game+0xec98228
	void MatchesTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag //  // @ game+0xec9ac10
	void HasTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag //  // @ game+0xec9a000
	void *09d595d651(); // Function GameplayTags.BlueprintGameplayTagLibrary.*09d595d651 //  // @ game+0xec98d90
	void MakeLiteralGameplayTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag //  // @ game+0xec9a7bc
	void NotEqual_TagTag(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag //  // @ game+0xec9b464
	void *5263db02ba(); // Function GameplayTags.BlueprintGameplayTagLibrary.*5263db02ba //  // @ game+0xec96c64
	void MakeGameplayTagContainerFromArray(); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray //  // @ game+0xec9a398
	void *c44c8daf51(); // Function GameplayTags.BlueprintGameplayTagLibrary.*c44c8daf51 //  // @ game+0xec9a830
	void NotEqual_TagContainerTagContainer(); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer //  // @ game+0xec9b260
};

// Class GameplayTags.*7957a72b9f
// Size: 0x188 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*7957a72b9f : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct F*c8bae7c39c> *2db8ad794e; // 0xb0(0x10)
	char pad_C0[0x68]; // 0xc0(0x68)
	struct TArray<struct UDataTable*> *e6dda287c5; // 0x128(0x10)
	char pad_138[0x50]; // 0x138(0x50)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayTagsList : UObject {
	struct FString *546a1b86ab; // 0x30(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xa8 (Inherited: 0x50)  [layout: KHOP]
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x58(0x10)
	bool FastReplication; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FStringAssetReference> GameplayTagTableList; // 0x70(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x80(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0x90(0x10)
	int32 NumBitsForContainerSize; // 0xa0(0x04)
	int32 NetIndexFirstBitSegment; // 0xa4(0x04)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayTagsDeveloperSettings : UObject {
	struct FString DeveloperConfigName; // 0x30(0x10)
};

