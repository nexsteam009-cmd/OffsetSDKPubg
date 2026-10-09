// Class DynamicFeatures.*c7e5011da2
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c7e5011da2 : UObject {
};

// Class DynamicFeatures.*4de266c007
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*4de266c007 : U*c7e5011da2 {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class DynamicFeatures.*122eea7870
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*122eea7870 : UObject {
};

// Class DynamicFeatures.DefaultDynamicFeaturePolicy
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UDefaultDynamicFeaturePolicy : U*122eea7870 {
};

// Class DynamicFeatures.*3611eeabdc
// Size: 0x1f0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*3611eeabdc : U*314482921f {
	char pad_38[0xb0]; // 0x38(0xb0)
	struct TMap<struct F*20698ef389, struct U*78ab70a80d*> *e386e26234; // 0xe8(0x50)
	struct TArray<struct FString> *45aac87b6a; // 0x138(0x10)
	struct TArray<struct UObject*> Observers; // 0x148(0x10)
	struct U*122eea7870* *122eea7870; // 0x158(0x08)
	char pad_160[0x90]; // 0x160(0x90)
};

// Class DynamicFeatures.*78ab70a80d
// Size: 0x140 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*78ab70a80d : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct F*dbbbf544c2 *7108313cde; // 0x40(0xa0)
	char pad_E0[0x60]; // 0xe0(0x60)
};

// Class DynamicFeatures.*66a24e3112
// Size: 0x178 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*66a24e3112 : U*aa53226733 {
	char pad_38[0x140]; // 0x38(0x140)

	void *7ef1ee29b0(); // Function DynamicFeatures.*66a24e3112.*7ef1ee29b0 //  // @ game+0xf96d26c
	void *6132c56ada(); // Function DynamicFeatures.*66a24e3112.*6132c56ada //  // @ game+0xf96e3a8
	void *e027793665(); // Function DynamicFeatures.*66a24e3112.*e027793665 //  // @ game+0xf96e33c
};

// Class DynamicFeatures.*2eaca76932
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2eaca76932 : U*c7e5011da2 {
	struct TArray<struct F*04b3d89308> *75a92df2de; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class DynamicFeatures.DynamicFeatureEntryDefinition
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UDynamicFeatureEntryDefinition : UPrimaryDataAsset {
	struct TArray<struct FString> DynamicFeaturesToEnable; // 0x38(0x10)
};

// Class DynamicFeatures.DynamicFeatureEntrySessionDefinition
// Size: 0xa8 (Inherited: 0x48)  [layout: KHOP]
struct UDynamicFeatureEntrySessionDefinition : UDynamicFeatureEntryDefinition {
	struct FPrimaryAssetId MapID; // 0x48(0x10)
	struct TMap<struct FString, struct FString> ExtraArgs; // 0x58(0x50)
};

// Class DynamicFeatures.MyTestPrimaryDataAsset
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UMyTestPrimaryDataAsset : UPrimaryDataAsset {
	struct FString TestString; // 0x38(0x10)
};

// Class DynamicFeatures.DynamicFeatureData
// Size: 0x60 (Inherited: 0x38)  [layout: KHOP]
struct UDynamicFeatureData : UPrimaryDataAsset {
	struct UDynamicFeatureEntryDefinition* FeatureEntryDefinition; // 0x38(0x08)
	struct TArray<struct U*c7e5011da2*> Actions; // 0x40(0x10)
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x50(0x10)
};

// Class DynamicFeatures.DynamicFeatureManagerComponent
// Size: 0x330 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UDynamicFeatureManagerComponent : UActorComponent {
	struct FString *53ddfda46e; // 0x208(0x10) rep=OnRep_SetFeatureEntrySessionDefinitionPluginURL
	struct TArray<struct FString> *cbf76f6496; // 0x218(0x10) rep=OnRep_SetFeatureEntryDefinitionPluginURLs
	struct TArray<struct FString> *f2f9bff5aa; // 0x228(0x10)
	char pad_238[0xf8]; // 0x238(0xf8)

	void OnRep_SetFeatureEntrySessionDefinitionPluginURL(); // Function DynamicFeatures.DynamicFeatureManagerComponent.OnRep_SetFeatureEntrySessionDefinitionPluginURL //  // @ game+0xf96dea0
	void OnRep_SetFeatureEntryDefinitionPluginURLs(); // Function DynamicFeatures.DynamicFeatureManagerComponent.OnRep_SetFeatureEntryDefinitionPluginURLs //  // @ game+0xf96de8c
};

// Class DynamicFeatures.*45f1cd5428
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*45f1cd5428 : UBlueprintFunctionLibrary {

	void *93a0f1710a(); // Function DynamicFeatures.*45f1cd5428.*93a0f1710a //  // @ game+0xf96dbdc
	void *1d75063c03(); // Function DynamicFeatures.*45f1cd5428.*1d75063c03 //  // @ game+0xf96d6b8
	void *0a2a04fec9(); // Function DynamicFeatures.*45f1cd5428.*0a2a04fec9 //  // @ game+0xf96e494
	void *36f0debbf6(); // Function DynamicFeatures.*45f1cd5428.*36f0debbf6 //  // @ game+0xf96e090
	void *fed300386d(); // Function DynamicFeatures.*45f1cd5428.*fed300386d //  // @ game+0xf96d318
	void *0e2bd35eeb(); // Function DynamicFeatures.*45f1cd5428.*0e2bd35eeb //  // @ game+0xf96d4f4
	void *e27582352a(); // Function DynamicFeatures.*45f1cd5428.*e27582352a //  // @ game+0xf96d87c
	void *d21f978e76(); // Function DynamicFeatures.*45f1cd5428.*d21f978e76 //  // @ game+0xf96e748
};

// Class DynamicFeatures.DynamicFeaturesSettings
// Size: 0x70 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UDynamicFeaturesSettings : U*ba332f0435 {
	struct FStringClassReference DynamicFeaturePolicyClassName; // 0x40(0x10)
	struct TArray<struct FString> DisabledPlugins; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class DynamicFeatures.*a458199bf6
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a458199bf6 : UInterface {
};

