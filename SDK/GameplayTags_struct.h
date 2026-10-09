// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8 {
	Undefined,
	AnyTagsMatch,
	AllTagsMatch,
	NoTagsMatch,
	AnyExprMatch,
	AllExprMatch,
	NoExprMatch,
	EGameplayTagQueryExprType_MAX,
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8 {
	Any,
	All,
	EGameplayContainerMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8 {
	Explicit,
	IncludeParentTags,
	EGameplayTagMatchType_MAX,
};

// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8 {
	Native,
	DefaultTagList,
	TagList,
	DataTable,
	Invalid,
	EGameplayTagSourceType_MAX,
};

// ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayTagQuery {
	int32 *fca036f9b5; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameplayTag> *8f0a679b4a; // 0x08(0x10)
	struct TArray<bool> *8fd2d2f941; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString *12415a3e8e; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayTag {
	struct FName TagName; // 0x00(0x08)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x00(0x10)
	struct TArray<struct FGameplayTag> *cb1480f7f8; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGameplayTagReferenceHelper {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayTags.*6dd0dafa7a
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6dd0dafa7a {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct GameplayTags.*c8bae7c39c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c8bae7c39c {
	struct FName SourceName; // 0x00(0x08)
	enum class EGameplayTagSourceType SourceType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UGameplayTagsList* *7f43855955; // 0x10(0x08)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; // 0x00(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayTagRedirect {
	struct FName OldTagName; // 0x00(0x08)
	struct FName NewTagName; // 0x08(0x08)
};

