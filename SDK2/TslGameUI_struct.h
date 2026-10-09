// Enum TslGameUI.ETextChangeRejectReason
enum class ETextChangeRejectReason : uint8 {
	None,
	NonAlphabetOrDigit,
	TooLong,
	RegexMismatch,
	ETextChangeRejectReason_MAX,
};

// Enum TslGameUI.*37ade592c3
enum class *37ade592c3 : uint8 {
	*74ab253361,
	*96c8b7a70c,
	*61a0a6c25f,
	*3831cbd77e,
	*37ade592c3_MAX,
};

// Enum TslGameUI.ETslMatchResultDisplayStatType
enum class ETslMatchResultDisplayStatType : uint8 {
	Invalid,
	Ranking,
	NumKills,
	NumHeadShotKills,
	NumAssists,
	DamageDealtOnEnemy,
	DamageTaken,
	DamageDealtRatio,
	NumAssistToRevive,
	NumUsedHealItems,
	NumUsedBoostItems,
	NumUsedThrowableItems,
	ETslMatchResultDisplayStatType_MAX,
};

// Enum TslGameUI.EIBRMatchResultState
enum class EIBRMatchResultState : uint8 {
	PersonalResult,
	TeamResult,
	MatchResult,
	EIBRMatchResultState_MAX,
};

// Enum TslGameUI.ECountInfoAnimType
enum class ECountInfoAnimType : uint8 {
	None,
	Default,
	Decreasing,
	Increasing,
	Warning,
	Emerging,
	Vanishing,
	ECountInfoAnimType_MAX,
};

// Enum TslGameUI.ECounterWidgetType
enum class ECounterWidgetType : uint8 {
	Assist,
	ECounterWidgetType_MAX,
};

// Enum TslGameUI.ETMapWayPointDisplay
enum class ETMapWayPointDisplay : uint8 {
	Direction,
	Destination,
	Ping,
	ETMapWayPointDisplay_MAX,
};

// Enum TslGameUI.EBlueZoneAlarmOutline
enum class EBlueZoneAlarmOutline : uint8 {
	StartSoon,
	Start,
	EndSoon,
	End,
	None,
	EBlueZoneAlarmOutline_MAX,
};

// Enum TslGameUI.EDisplayPlayerInfoType
enum class EDisplayPlayerInfoType : uint8 {
	PlayerList,
	EngagedEnemies,
	NearbyPlayers,
	OtherEngagements,
	ObserverTeamInfoList,
	EDisplayPlayerInfoType_MAX,
};

// Enum TslGameUI.MatchResultTypeEnum
enum class MatchResultTypeEnum : uint8 {
	INVALID,
	DEFAULT,
	OBSERVER,
	LEAGUE,
	TYPE_NUM,
	MatchResultTypeEnum_MAX,
};

// Enum TslGameUI.EGuideKeyType
enum class EGuideKeyType : uint8 {
	PickUp,
	Drop,
	QuickPickUp,
	QuickDrop,
	QuickPack,
	Equip,
	Unequip,
	Swap,
	Detach,
	Unpack,
	Use,
	SwitchSlot,
	Confirm,
	Cancel,
	Apply,
	Purchase,
	DetachAll,
	UnpackAll,
	PickUpAmount,
	DropAmount,
	SwapWeapon,
	DropWeapon,
	QuickEquip,
	QuickEquip_NoHold,
	MoveToTrunk,
	DropFromTrunk,
	VicinityToTrunk,
	WeaponToTrunk,
	Pack,
	Pack_NoHold,
	None,
	EGuideKeyType_MAX,
};

// Enum TslGameUI.EBlueBlockerStateUIType
enum class EBlueBlockerStateUIType : uint8 {
	None,
	Active,
	Deactive,
	Hide,
	EBlueBlockerStateUIType_MAX,
};

// Enum TslGameUI.ENoReloadGuideType
enum class ENoReloadGuideType : uint8 {
	Alwyas,
	WhenCurrentWeapon,
	ENoReloadGuideType_MAX,
};

// Enum TslGameUI.ETslFlareGunWidgetDisplayType
enum class ETslFlareGunWidgetDisplayType : uint8 {
	Worldmap,
	Hud,
	ETslFlareGunWidgetDisplayType_MAX,
};

// Enum TslGameUI.EFlowTextState
enum class EFlowTextState : uint8 {
	None,
	Wait,
	FlowLeftOut,
	FlowLeftIn,
	FlowRightOut,
	FlowRightIn,
	BlinkAnimation,
	EFlowTextState_MAX,
};

// Enum TslGameUI.EOptionWidgetPanel
enum class EOptionWidgetPanel : uint8 {
	Side,
	Content,
	EOptionWidgetPanel_MAX,
};

// Enum TslGameUI.ETslMatchResultStatsEntryType
enum class ETslMatchResultStatsEntryType : uint8 {
	None,
	PlayerStats,
	TeamStats,
	ETslMatchResultStatsEntryType_MAX,
};

// Enum TslGameUI.ELobbyCursorState
enum class ELobbyCursorState : uint8 {
	Default,
	Hover,
	Click,
	ELobbyCursorState_MAX,
};

// Enum TslGameUI.ETslMapMarkerTowerState
enum class ETslMapMarkerTowerState : uint8 {
	Enable,
	Active,
	Disable,
	ETslMapMarkerTowerState_MAX,
};

// Enum TslGameUI.EObserverCanvasSwitcherIndex
enum class EObserverCanvasSwitcherIndex : uint8 {
	Default,
	TeamItem,
	Ranks,
	EObserverCanvasSwitcherIndex_MAX,
};

// Enum TslGameUI.EObserverRank
enum class EObserverRank : uint8 {
	Kill,
	DamageDealt,
	DamageTaken,
	EObserverRank_MAX,
};

// Enum TslGameUI.ERoundEndPointType
enum class ERoundEndPointType : uint8 {
	Empty,
	Lost,
	Won,
	Draw,
	ERoundEndPointType_MAX,
};

// Enum TslGameUI.ESpeakingIcon
enum class ESpeakingIcon : uint8 {
	None,
	Speaking,
	Restricted,
	Disable,
	Collapsed,
	ESpeakingIcon_MAX,
};

// Enum TslGameUI.ETslPulseAnimationType
enum class ETslPulseAnimationType : uint8 {
	None,
	Fire,
	Damaged,
	Electric,
	TeamInfoIcon,
	MAX,
	ETslPulseAnimationType_MAX,
};

// ScriptStruct TslGameUI.*b9ba88be2c
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*b9ba88be2c {
	int32 Rank; // 0x00(0x04)
	bool bIsMyTeam; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 TeamNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TeamName; // 0x10(0x18)
	struct TArray<struct F*ef85f3574b> TeamStatItems; // 0x28(0x10)
	struct TArray<struct F*94b5514de1> PlayerStatsList; // 0x38(0x10)
};

// ScriptStruct TslGameUI.*94b5514de1
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*94b5514de1 {
	bool bIsMine; // 0x00(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText PlayerName; // 0x08(0x18)
	struct TArray<struct F*ef85f3574b> StatItems; // 0x20(0x10)
};

// ScriptStruct TslGameUI.*ef85f3574b
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ef85f3574b {
	struct FText Name; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
	bool bHighlighted; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGameUI.TslMatchResultDisplayStatTableRow
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FTslMatchResultDisplayStatTableRow : FTableRowBase {
	enum class ETslMatchResultDisplayStatType *30bfa011cf; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGameUI.*c357631449
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c357631449 {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct TslGameUI.Texture2DAndSizePair
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTexture2DAndSizePair {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGameUI.TooltipFiremodeImage
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FTooltipFiremodeImage {
	struct UTexture2D* FiremodeIcon; // 0x00(0x08)
	struct FText FiremodeName; // 0x08(0x18)
};

// ScriptStruct TslGameUI.UiEffectAnimation_VectorCurve
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct FUiEffectAnimation_VectorCurve {
	struct FSequence_Vector VectorCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGameUI.UiEffectAnimation_FloatCurve
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct FUiEffectAnimation_FloatCurve {
	struct FSequence_Float FloatCurve; // 0x00(0xa0)
	struct TArray<struct FName> ParamNames; // 0xa0(0x10)
};

// ScriptStruct TslGameUI.TslCustomMapGridSettings
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslCustomMapGridSettings {
	struct FVector2D MapGridViewScale; // 0x00(0x08)
	struct FVector2D MapGridCenterPos; // 0x08(0x08)
};

// ScriptStruct TslGameUI.*371c5d9952
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*371c5d9952 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UMaterialInstanceDynamic* *e2bd4181b4; // 0x18(0x08)
};

// ScriptStruct TslGameUI.MapLocationZoomTableRow
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FMapLocationZoomTableRow : FTableRowBase {
	enum class ELocationType LocationType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<bool> VisibilityByZoom; // 0x10(0x10)
	float DesiredAlpha; // 0x20(0x04)
	int32 DesiredFontSize; // 0x24(0x04)
};

// ScriptStruct TslGameUI.ExtendedSizeConfig
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExtendedSizeConfig {
	float MinimapSize; // 0x00(0x04)
	enum class EMinimapFocus MinimapFocus; // 0x04(0x01)
	bool bIsBluezoneInfoIntoMap; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float ViewScale1D; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* ViewScale_AccelerationCurve; // 0x10(0x08)
	struct UCurveFloat* ViewScale_DecelerationCurve; // 0x18(0x08)
	bool bIsExtendedSize; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGameUI.*1094a15388
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1094a15388 {
	struct FFloatInterval HealthPercentRange; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct TslGameUI.TslOverrideTeamMarkAlphaForModeArray
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslOverrideTeamMarkAlphaForModeArray {
	struct TArray<struct FTslOverrideTeamMarkAlpha> OverrideTeamMarkAlphaForModeArray; // 0x00(0x10)
};

// ScriptStruct TslGameUI.TslOverrideTeamMarkAlpha
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FTslOverrideTeamMarkAlpha {
	enum class ETslTeamInfoIconState IconState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Alpha; // 0x04(0x04)
};

// ScriptStruct TslGameUI.*4db90221c0
// Size: 0x988 (Inherited: 0x08)  [layout: KHOP]
struct F*4db90221c0 : FSlateWidgetStyle {
	struct FEditableTextBoxStyle *893927fa6c; // 0x08(0x870)
	struct FSlateBrush *c0d9032262; // 0x878(0x90)
	struct FSlateColor *b576edd983; // 0x908(0x28)
	struct FSlateColor TextColor; // 0x930(0x28)
	struct FSlateSound *27804cb0b4; // 0x958(0x18)
	struct FSlateSound *7f9248a5ce; // 0x970(0x18)
};

// ScriptStruct TslGameUI.TeamMarkerCountInfo
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTeamMarkerCountInfo {
	struct UTslCompassMarkerWidget* MarkerWidget; // 0x00(0x08)
	struct ATeam* MarkerSender; // 0x08(0x08)
};

// ScriptStruct TslGameUI.DirectionTextData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FDirectionTextData {
	struct FText DirectionText; // 0x00(0x18)
	struct FLinearColor TextColor; // 0x18(0x10)
};

// ScriptStruct TslGameUI.TslPadInventoryGuideDataRow
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FTslPadInventoryGuideDataRow : FTableRowBase {
	enum class EGuideKeyType KeyType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FGamepadMultipleKeyIconInfo Info; // 0x10(0x30)
};

// ScriptStruct TslGameUI.TslCustomMatchWaterMarkPosition
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslCustomMatchWaterMarkPosition {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HAlignment; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGameUI.SaveDataForLifegauge
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSaveDataForLifegauge {
	struct ATslCharacter* ViewTargetTslCharacter; // 0x00(0x08)
	float HealthOrDBNOHealth; // 0x08(0x04)
	float HealthMaxOrDBNOHealthMax; // 0x0c(0x04)
	float Healamount; // 0x10(0x04)
	bool bIsDBNO; // 0x14(0x01)
	bool bHasEffect; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGameUI.FiremodeImage
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FFiremodeImage {
	struct TMap<enum class EFiremode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGameUI.HealmodeImage
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FHealmodeImage {
	struct TMap<enum class ETraumaBagHealMode, struct UTexture2D*> TextureData; // 0x00(0x50)
};

// ScriptStruct TslGameUI.TslFlareGunEntryUIData
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslFlareGunEntryUIData {
	int32 Number; // 0x00(0x04)
	bool bVisible; // 0x04(0x01)
	bool bCanFire; // 0x05(0x01)
	bool bWaitingMine; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct TslGameUI.*db48efd3fc
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*db48efd3fc {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGameUI.TslGameOptionCrosshairSampleData
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionCrosshairSampleData {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FTslCrosshairSettings Settings; // 0x08(0x60)
};

// ScriptStruct TslGameUI.MaterialInfo
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMaterialInfo {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGameUI.ConflictActionList
// Size: 0x70 (Inherited: 0x08)  [layout: KHOP]
struct FConflictActionList : FTableRowBase {
	int32 *5fb2bb70af; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> *8788b9ed02; // 0x10(0x10)
	struct TMap<struct FString, struct F*7468786704> ConflictActionList; // 0x20(0x50)
};

// ScriptStruct TslGameUI.*7468786704
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7468786704 {
	struct TArray<struct FName> *7468786704; // 0x00(0x10)
};

// ScriptStruct TslGameUI.EssentialActionsOnKeyBinding
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FEssentialActionsOnKeyBinding : FTableRowBase {
	struct TArray<struct FName> *d3949e4ada; // 0x08(0x10)
	struct FText PopupText; // 0x18(0x18)
	struct FString *aa2fb5896d; // 0x30(0x10)
	bool *57ecc5baf9; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<enum class EGamepadPresets> *35d1c9ff03; // 0x48(0x10)
};

// ScriptStruct TslGameUI.*6ff8a35a71
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6ff8a35a71 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGameUI.TabStringArray
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTabStringArray {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct TslGameUI.*5e07218f5d
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5e07218f5d {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGameUI.ActionAndUnAvailableKeys
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FActionAndUnAvailableKeys : FTableRowBase {
	struct FName ActionName; // 0x08(0x08)
	struct TArray<struct FKey> *bad9198160; // 0x10(0x10)
};

// ScriptStruct TslGameUI.TslItemSlotCache
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslItemSlotCache {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UTslItemSlotBaseWidget*> Cache; // 0x08(0x10)
};

// ScriptStruct TslGameUI.KeyNotifyDataList
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FKeyNotifyDataList {
	struct TArray<struct FKeyNotifyData> KeyInfoList; // 0x00(0x10)
};

// ScriptStruct TslGameUI.KeyNotifyData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FKeyNotifyData {
	struct FName ActionName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGameUI.PrevRankNameplateTextureData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FPrevRankNameplateTextureData {
	struct UTexture2D* LeftTexture; // 0x00(0x20)
	struct UTexture2D* CenterTexture; // 0x20(0x20)
	struct UTexture2D* RightTexture; // 0x40(0x20)
};

// ScriptStruct TslGameUI.*a9bf90ce56
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a9bf90ce56 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGameUI.*cf0710bc52
// Size: 0x160 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cf0710bc52 {
	struct TMap<struct FName, struct UTexture*> *30167db26c; // 0x00(0x50)
	char pad_50[0x110]; // 0x50(0x110)
};

// ScriptStruct TslGameUI.*b8bd4046c4
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b8bd4046c4 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGameUI.*bcae7198ea
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bcae7198ea {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGameUI.*e211c8d77e
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e211c8d77e {
	struct UMapMarkerBaseWidget* *c33dfe3f51; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct TslGameUI.*1e180494a8
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1e180494a8 {
	struct UOutsideMapMarkerWidget* *c33dfe3f51; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGameUI.*068de7f074
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*068de7f074 {
	struct TArray<struct UMapWayPointBaseWidget*> *a6fa428e49; // 0x00(0x10)
};

// ScriptStruct TslGameUI.*ddbae54a8b
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ddbae54a8b {
	struct UImage* head; // 0x00(0x08)
	struct UImage* Body; // 0x08(0x08)
	struct UImage* *420f7df6cd; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct TslGameUI.*b9d2cea9c9
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*b9d2cea9c9 {
	struct UImage* *6cc9b0d1b7; // 0x00(0x08)
	struct F*ddbae54a8b *bbd53157a4; // 0x08(0x28)
};

// ScriptStruct TslGameUI.*80c7201b6f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*80c7201b6f {
	struct UImage* *1314702fcc; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGameUI.*919705f1af
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*919705f1af {
	char pad_0[0x28]; // 0x00(0x28)
	struct UImage* *06ecb822a0; // 0x28(0x08)
	struct UImage* *dc48d35d3c; // 0x30(0x08)
	struct UTslMapMarkerTowerWidget* *77e6149e28; // 0x38(0x08)
};

// ScriptStruct TslGameUI.*5d540c79ce
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5d540c79ce {
	struct UImage* VehicleIcon; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct TslGameUI.TslMapLayerPresetRow
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FTslMapLayerPresetRow : FTableRowBase {
	struct FName *fefa26d3d1; // 0x08(0x08)
	struct TArray<struct FName> Layers; // 0x10(0x10)
};

// ScriptStruct TslGameUI.TslMapLayerRow
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FTslMapLayerRow : FTableRowBase {
	struct FName LayerName; // 0x08(0x08)
	struct UClass* *70c567d2c7; // 0x10(0x20)
	struct TArray<struct UClass*> *cf1d277502; // 0x30(0x10)
};

// ScriptStruct TslGameUI.*9c65852f0b
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct F*9c65852f0b : FTslMenuMetaData {
	struct TMap<struct FString, struct FText> OptionDatas; // 0x38(0x50)
};

// ScriptStruct TslGameUI.TslMenuMetaData
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTslMenuMetaData {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UClass* OptionWidgetClass; // 0x30(0x08)
};

// ScriptStruct TslGameUI.*433b7aa153
// Size: 0xa0 (Inherited: 0x90)  [layout: KHOP]
struct F*433b7aa153 : F*400e057946 {
	int32 MinValue; // 0x90(0x04)
	int32 MaxValue; // 0x94(0x04)
	int32 DefaultValue; // 0x98(0x04)
	int32 StepSize; // 0x9c(0x04)
};

// ScriptStruct TslGameUI.*400e057946
// Size: 0x90 (Inherited: 0x38)  [layout: KHOP]
struct F*400e057946 : FTslMenuMetaData {
	bool *423f53bf26; // 0x38(0x01)
	bool *4938e50164; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TMap<struct FString, struct FText> *1c9bf02078; // 0x40(0x50)
};

// ScriptStruct TslGameUI.*d1c66a84aa
// Size: 0xa0 (Inherited: 0x90)  [layout: KHOP]
struct F*d1c66a84aa : F*400e057946 {
	float MinValue; // 0x90(0x04)
	float MaxValue; // 0x94(0x04)
	float DefaultValue; // 0x98(0x04)
	float StepSize; // 0x9c(0x04)
};

// ScriptStruct TslGameUI.*1bf88198a3
// Size: 0x70 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct F*1bf88198a3 : FTslMenuMetaData {
	struct FText ActiveText; // 0x38(0x18)
	struct FText DeactiveText; // 0x50(0x18)
	bool bDefaultValue; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct TslGameUI.*09caf10d78
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct F*09caf10d78 : FTslMenuMetaData {
	struct FText DefaultValue; // 0x38(0x18)
	int32 MaxLength; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGameUI.TslMenuStepperMetaData
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct FTslMenuStepperMetaData : FTslMenuMetaData {
	struct TArray<struct FText> OptionDatas; // 0x38(0x10)
	int32 DefaultValue; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGameUI.*3b2998c321
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct F*3b2998c321 : FTslMenuMetaData {
	float MinValue; // 0x38(0x04)
	float MaxValue; // 0x3c(0x04)
	float DefaultValue; // 0x40(0x04)
	float StepSize; // 0x44(0x04)
	bool bIntegerValue; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGameUI.*74a9ddd4aa
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*74a9ddd4aa {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Key; // 0x08(0x10)
	struct FString EnumTypeString; // 0x18(0x10)
};

// ScriptStruct TslGameUI.*7e2e4c58f8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7e2e4c58f8 {
	struct UObject* Object; // 0x00(0x08)
	struct FName PropertyName; // 0x08(0x08)
};

// ScriptStruct TslGameUI.SystemMessageInfo
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSystemMessageInfo {
	enum class ESystemMessageType MessageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Duration; // 0x04(0x04)
	float CurrentDeltaTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
	int32 EliminatorTeamNum; // 0x28(0x04)
	int32 EliminatedTeamNum; // 0x2c(0x04)
	bool bIsWipedOut; // 0x30(0x01)
	enum class ESystemMessagePriority Priority; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGameUI.TslMultiCheckBoxItem
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslMultiCheckBoxItem {
	struct FName Key; // 0x00(0x08)
	struct FText Text; // 0x08(0x18)
	bool bInitiallyChecked; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGameUI.*c062af2561
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c062af2561 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGameUI.*0b6fefe55a
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*0b6fefe55a {
	float Score; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
};

// ScriptStruct TslGameUI.RegistedPlayer
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FRegistedPlayer {
	struct ATslPlayerStateBase* PlayerState; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGameUI.*3fd9b2115a
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3fd9b2115a {
	int32 Rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText PlayerName; // 0x08(0x18)
	int32 Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGameUI.TeamEliminationPopUpData
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FTeamEliminationPopUpData {
	int32 TeamNum; // 0x00(0x04)
	int32 TeamRanking; // 0x04(0x04)
};

// ScriptStruct TslGameUI.KeyGuideDataRow
// Size: 0x70 (Inherited: 0x08)  [layout: KHOP]
struct FKeyGuideDataRow : FTableRowBase {
	struct FString CategoryID; // 0x08(0x10)
	int32 ColumnNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText ActionDesc; // 0x20(0x18)
	struct TArray<struct FName> MappedActions; // 0x38(0x10)
	struct TArray<struct F*5de01d4c74> MappedAxies; // 0x48(0x10)
	bool bDummy; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FTslInputKey> DummyInputKeys; // 0x60(0x10)
};

// ScriptStruct TslGameUI.*07df2181c5
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*07df2181c5 {
	struct UTexture2D* *c3020ed837; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct TArray<struct F*d1035bdad6> *f1d91c73de; // 0x20(0x10)
	struct TArray<struct FText> *8ecabb2abf; // 0x30(0x10)
};

// ScriptStruct TslGameUI.*d1035bdad6
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*d1035bdad6 {
	int32 Number; // 0x00(0x04)
	struct FLinearColor *f5f2ccb526; // 0x04(0x10)
	bool bEnabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText *9db73e835c; // 0x18(0x18)
	struct ATslPlayerStateBase* PlayerState; // 0x30(0x08)
};

// ScriptStruct TslGameUI.RankEmblemData
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FRankEmblemData {
	struct TArray<struct UTexture2D*> TextureList; // 0x00(0x10)
	bool bNeedsDivisionNumber; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGameUI.TslRealTimeMissionUIData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslRealTimeMissionUIData {
	struct TArray<struct FTslRealTimeMissionEntryUIData> MissionListEntries; // 0x00(0x10)
};

// ScriptStruct TslGameUI.TslRealTimeMissionEntryUIData
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslRealTimeMissionEntryUIData {
	int32 MissionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FStringAssetReference RewardItemIconRef; // 0x08(0x10)
	struct FName RewardItemId; // 0x18(0x08)
	int32 RewardItemCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FText> MissionNames; // 0x28(0x10)
	struct TArray<float> MissionProgressRatios; // 0x38(0x10)
	int32 MissionCountCurrent; // 0x48(0x04)
	int32 MissionCountMax; // 0x4c(0x04)
	int32 MissionResetRemainCount; // 0x50(0x04)
	bool bIsJackpotMission; // 0x54(0x01)
	bool bIsNewbie; // 0x55(0x01)
	bool bIsCompleted; // 0x56(0x01)
	char pad_57[0x9]; // 0x57(0x09)
};

// ScriptStruct TslGameUI.*f825508251
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*f825508251 {
	struct FText *92dbcafb54; // 0x00(0x18)
	struct FText *0a9d7936d7; // 0x18(0x18)
};

// ScriptStruct TslGameUI.TslTeamInfoIconData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslTeamInfoIconData {
	struct UTexture2D* *48ce65e6ca; // 0x00(0x08)
	struct UMaterialInterface* *54c1aa7d33; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct TslGameUI.*1d65d550fa
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1d65d550fa {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGameUI.*c745cdf1b3
// Size: 0x58 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c745cdf1b3 {
	struct FName TargetName; // 0x00(0x08)
	struct UTexture2D* BgPulseTexture; // 0x08(0x08)
	struct FLinearColor TintColor; // 0x10(0x10)
	float OneBlinkSec; // 0x20(0x04)
	bool bPingPong; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32 BlinkCount; // 0x28(0x04)
	float BlinkAlphaMin; // 0x2c(0x04)
	float BlinkAlphaMax; // 0x30(0x04)
	enum class ESlateVisibility DefaultVisibility; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UWidget* *a075ce757d; // 0x38(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct TslGameUI.VoiceChatMemberUIInfo
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FVoiceChatMemberUIInfo {
	struct FString UniqueNetId; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGameUI.SandboxOptionDataTable
// Size: 0x78 (Inherited: 0x10)  [layout: KHOP]
struct FSandboxOptionDataTable : FBaseSandboxItemDataTable {
	struct FName ItemName; // 0x10(0x08)
	struct FText DisplayText; // 0x18(0x18)
	struct FText DescriptionText; // 0x30(0x18)
	bool *f5dc67e667; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector2D SliderRange; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*f825508251> *322c1112c7; // 0x58(0x10)
	struct UClass* *b7a7b822c3; // 0x68(0x08)
	struct UClass* *2141984bf9; // 0x70(0x08)
};

