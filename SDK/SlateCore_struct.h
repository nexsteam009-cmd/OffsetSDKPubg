// Enum SlateCore.*e9a1ff2987
enum class *e9a1ff2987 : uint8 {
	*78277c1253,
	*00522f7c62,
	*0a3af5c986,
	*e9a1ff2987_MAX,
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad,
	Stream,
	Inline,
	EFontLoadingPolicy_MAX,
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default,
	Auto,
	AutoLight,
	Monochrome,
	None,
	EFontHinting_MAX,
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified,
	UseColor_Specified_Link,
	UseColor_Foreground,
	UseColor_Foreground_Subdued,
	UseColor_MAX,
};

// Enum SlateCore.*6511d648f6
enum class *6511d648f6 : uint8 {
	*0d0a4cec61,
	*82509edd01,
	*d2fa6ac560,
	*72630c5f70,
	*6511d648f6_MAX,
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress,
	OnNavigation,
	OnMouseClick,
	Direct,
	ESelectInfo_MAX,
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default,
	OnEnter,
	OnUserMovedFocus,
	OnCleared,
	ETextCommit_MAX,
};

// Enum SlateCore.*e7ca1b07cc
enum class *e7ca1b07cc : uint8 {
	*ffe20114ce,
	*d9fc31b622,
	*884942d885,
	*e7ca1b07cc_MAX,
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal,
	Orient_Vertical,
	Orient_MAX,
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor,
	MenuPlacement_CenteredBelowAnchor,
	MenuPlacement_BelowRightAnchor,
	MenuPlacement_ComboBox,
	MenuPlacement_ComboBoxRight,
	MenuPlacement_MenuRight,
	MenuPlacement_AboveAnchor,
	MenuPlacement_CenteredAboveAnchor,
	MenuPlacement_AboveRightAnchor,
	MenuPlacement_MenuLeft,
	MenuPlacement_Center,
	MenuPlacement_RightLeftCenter,
	MenuPlacement_MAX,
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill,
	VAlign_Top,
	VAlign_Center,
	VAlign_Bottom,
	VAlign_MAX,
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill,
	HAlign_Left,
	HAlign_Center,
	HAlign_Right,
	HAlign_MAX,
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard,
	Controller,
	User,
	ENavigationGenesis_MAX,
};

// Enum SlateCore.*3bd5defc72
enum class *3bd5defc72 : uint8 {
	*b5580a2089,
	*ccc07747c7,
	*cd84217922,
	*3bd5defc72_MAX,
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left,
	Right,
	Up,
	Down,
	Next,
	Previous,
	Num,
	Invalid,
	EUINavigation_MAX,
};

// Enum SlateCore.*60f9b8636f
enum class *60f9b8636f : uint8 {
	*9413a0e02f,
	*bead53d712,
	*93023129de,
	*652aba7595,
	*60f9b8636f_MAX,
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp,
	PreciseTap,
	EButtonTouchMethod_MAX,
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp,
	MouseDown,
	MouseUp,
	PreciseClick,
	EButtonClickMethod_MAX,
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage,
	FullColor,
	Linear,
	ESlateBrushImageType_MAX,
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushMirrorType_MAX,
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile,
	Horizontal,
	Vertical,
	Both,
	ESlateBrushTileType_MAX,
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType,
	Box,
	Border,
	Image,
	ESlateBrushDrawType_MAX,
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked,
	Checked,
	Undetermined,
	ECheckBoxState_MAX,
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox,
	ToggleButton,
	ESlateCheckBoxType_MAX,
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible,
	Always,
	Never,
	EConsumeMouseWheel_MAX,
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto,
	KerningOnly,
	FullShaping,
	ETextShapingMethod_MAX,
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse,
	Navigation,
	SetDirectly,
	Cleared,
	OtherWidgetLostFocus,
	WindowActivate,
	EFocusCause_MAX,
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape,
	Explicit,
	Wrap,
	Stop,
	Custom,
	Invalid,
	EUINavigationRule_MAX,
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSlateColor {
	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct SlateCore.Geometry
// Size: 0x34 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGeometry {
	char pad_0[0x34]; // 0x00(0x34)
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x78 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct FPointerEvent : FInputEvent {
	char pad_20[0x58]; // 0x20(0x58)
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInputEvent {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct FSlateBrush {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector2D ImageSize; // 0x08(0x08)
	enum class ESlateBrushDrawType DrawAs; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FMargin Margin; // 0x14(0x10)
	struct FLinearColor Tint; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
	struct FSlateColor TintColor; // 0x38(0x28)
	enum class ESlateBrushTileType Tiling; // 0x60(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0x61(0x01)
	enum class ESlateBrushImageType ImageType; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct UObject* ResourceObject; // 0x68(0x08)
	struct FName ResourceName; // 0x70(0x08)
	bool bIsDynamicallyLoaded; // 0x78(0x01)
	bool bHasUObject; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	struct FBox2D UVRegion; // 0x7c(0x14)
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FMargin {
	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSlateFontInfo {
	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x28)
	char pad_38[0x10]; // 0x38(0x10)
	struct FName TypefaceFontName; // 0x48(0x08)
	int32 Size; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FName FontName; // 0x58(0x08)
	enum class EFontHinting Hinting; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FFontOutlineSettings {
	int32 OutlineSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* OutlineMaterial; // 0x08(0x08)
	struct FLinearColor OutlineColor; // 0x10(0x10)
	bool bSeparateFillAlpha; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0x838 (Inherited: 0x08)  [layout: KHOP]
struct FTableRowStyle : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; // 0x08(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1b8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x28)
	struct FSlateColor SelectedTextColor; // 0x540(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x568(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x5f8(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x688(0x90)
	struct FSlateBrush ActiveHighlightedBrush; // 0x718(0x90)
	struct FSlateBrush InactiveHighlightedBrush; // 0x7a8(0x90)
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSlateWidgetStyle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x428 (Inherited: 0x08)  [layout: KHOP]
struct FComboBoxStyle : FSlateWidgetStyle {
	struct FComboButtonStyle ComboButtonStyle; // 0x08(0x3e0)
	struct FSlateSound PressedSlateSound; // 0x3e8(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x400(0x18)
	struct FName PressedSound; // 0x418(0x08)
	struct FName SelectionChangeSound; // 0x420(0x08)
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSlateSound {
	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3e0 (Inherited: 0x08)  [layout: KHOP]
struct FComboButtonStyle : FSlateWidgetStyle {
	struct FButtonStyle ButtonStyle; // 0x08(0x2a8)
	struct FSlateBrush DownArrowImage; // 0x2b0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x340(0x90)
	struct FMargin MenuBorderPadding; // 0x3d0(0x10)
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x2a8 (Inherited: 0x08)  [layout: KHOP]
struct FButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush Normal; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1b8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x18)
	struct FSlateSound HoveredSlateSound; // 0x280(0x18)
	struct FName PressedSound; // 0x298(0x08)
	struct FName HoveredSound; // 0x2a0(0x08)
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x248 (Inherited: 0x08)  [layout: KHOP]
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x98(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x128(0x90)
	struct FSlateBrush CaretImage; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x870 (Inherited: 0x08)  [layout: KHOP]
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; // 0x08(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1b8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x68)
	struct FSlateColor ForegroundColor; // 0x2c0(0x28)
	struct FSlateColor BackgroundColor; // 0x2e8(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x310(0x28)
	struct FMargin HScrollBarPadding; // 0x338(0x10)
	struct FMargin VScrollBarPadding; // 0x348(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x358(0x518)
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x518 (Inherited: 0x08)  [layout: KHOP]
struct FScrollBarStyle : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; // 0x08(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1b8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2d8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3f8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x208 (Inherited: 0x08)  [layout: KHOP]
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; // 0x08(0x68)
	struct FSlateColor ColorAndOpacity; // 0x70(0x28)
	struct FVector2D ShadowOffset; // 0x98(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0xa0(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xb0(0x28)
	struct FLinearColor HighlightColor; // 0xd8(0x10)
	struct FSlateBrush HighlightShape; // 0xe8(0x90)
	struct FSlateBrush UnderlineBrush; // 0x178(0x90)
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x310 (Inherited: 0x08)  [layout: KHOP]
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)
};

// ScriptStruct SlateCore.*c9f8b0888b
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c9f8b0888b {
	struct F*628acf1b05 *30866f6857; // 0x00(0x10)
	struct TArray<struct F*3e282964ab> *d6fe74dbb7; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*3e282964ab
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3e282964ab {
	struct F*628acf1b05 *628acf1b05; // 0x00(0x10)
	struct TArray<struct FInt32Range> *369d706bed; // 0x10(0x10)
	float *97f5b3c33e; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct SlateCore.*628acf1b05
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*628acf1b05 {
	struct TArray<struct F*f5576bb2b8> Fonts; // 0x00(0x10)
};

// ScriptStruct SlateCore.*f5576bb2b8
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*f5576bb2b8 {
	struct FName Name; // 0x00(0x08)
	struct F*db0cf75d39 Font; // 0x08(0x20)
};

// ScriptStruct SlateCore.*db0cf75d39
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*db0cf75d39 {
	struct FString *1a8c90ab49; // 0x00(0x10)
	enum class EFontHinting *9800ecec11; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UObject* *b1dcbe7ec7; // 0x18(0x08)
};

// ScriptStruct SlateCore.*0e8c09690f
// Size: 0x10f0 (Inherited: 0x08)  [layout: KHOP]
struct F*0e8c09690f : FSlateWidgetStyle {
	struct FButtonStyle MinimizeButtonStyle; // 0x08(0x2a8)
	struct FButtonStyle MaximizeButtonStyle; // 0x2b0(0x2a8)
	struct FButtonStyle RestoreButtonStyle; // 0x558(0x2a8)
	struct FButtonStyle CloseButtonStyle; // 0x800(0x2a8)
	struct FTextBlockStyle TitleTextStyle; // 0xaa8(0x208)
	struct FSlateBrush ActiveTitleBrush; // 0xcb0(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xd40(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xdd0(0x90)
	struct FSlateColor BackgroundColor; // 0xe60(0x28)
	struct FSlateBrush OutlineBrush; // 0xe88(0x90)
	struct FSlateColor OutlineColor; // 0xf18(0x28)
	struct FSlateBrush BorderBrush; // 0xf40(0x90)
	struct FSlateBrush BackgroundBrush; // 0xfd0(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0x1060(0x90)
};

// ScriptStruct SlateCore.*025bd9872a
// Size: 0x128 (Inherited: 0x08)  [layout: KHOP]
struct F*025bd9872a : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x248 (Inherited: 0x08)  [layout: KHOP]
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)
};

// ScriptStruct SlateCore.*e4dc101bcd
// Size: 0x6e0 (Inherited: 0x08)  [layout: KHOP]
struct F*e4dc101bcd : FSlateWidgetStyle {
	struct FButtonStyle *c5c4a433c2; // 0x08(0x2a8)
	struct FSlateBrush *30a8359a98; // 0x2b0(0x90)
	struct FSlateBrush *505c033f0c; // 0x340(0x90)
	struct FSlateBrush *15cf4d0aa7; // 0x3d0(0x90)
	struct FSlateBrush *aa48c9556c; // 0x460(0x90)
	struct FSlateBrush *cbc49ea938; // 0x4f0(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x580(0x90)
	struct FSlateBrush TabWellBrush; // 0x610(0x90)
	struct FMargin *038e3f338d; // 0x6a0(0x10)
	float OverlapWidth; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct FSlateColor FlashColor; // 0x6b8(0x28)
};

// ScriptStruct SlateCore.*54fe8f934d
// Size: 0xc18 (Inherited: 0x08)  [layout: KHOP]
struct F*54fe8f934d : FSlateWidgetStyle {
	struct F*ec0bc8714e *983ec8324c; // 0x08(0x518)
	struct F*ec0bc8714e *8839d42a82; // 0x520(0x518)
	struct F*d13c7b9337 *0efaa41b5c; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)
};

// ScriptStruct SlateCore.*d13c7b9337
// Size: 0x128 (Inherited: 0x08)  [layout: KHOP]
struct F*d13c7b9337 : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)
};

// ScriptStruct SlateCore.*ec0bc8714e
// Size: 0x518 (Inherited: 0x08)  [layout: KHOP]
struct F*ec0bc8714e : FSlateWidgetStyle {
	struct FSlateBrush *c387417a52; // 0x08(0x90)
	struct FSlateBrush *a8422ead76; // 0x98(0x90)
	struct FSlateBrush *99ab6cef4a; // 0x128(0x90)
	struct FSlateBrush *badf8c7239; // 0x1b8(0x90)
	struct FSlateBrush *30a8359a98; // 0x248(0x90)
	struct FSlateBrush *cbc49ea938; // 0x2d8(0x90)
	struct FSlateBrush *9522d0c61d; // 0x368(0x90)
	struct FSlateBrush *07ab2e27ab; // 0x3f8(0x90)
	struct FSlateBrush *0c5aee056b; // 0x488(0x90)
};

// ScriptStruct SlateCore.*11a4f7e645
// Size: 0xa0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*11a4f7e645 : FSlateWidgetStyle {
	struct FSlateBrush Image; // 0x08(0x90)
	int16 Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct SlateCore.*67fd403628
// Size: 0x528 (Inherited: 0x08)  [layout: KHOP]
struct F*67fd403628 : FSlateWidgetStyle {
	struct FSliderStyle *069dc744da; // 0x08(0x250)
	struct FSlateBrush *81dffe4de2; // 0x258(0x90)
	struct FSlateBrush *98343da7aa; // 0x2e8(0x90)
	struct FSlateBrush *7d7280b6fb; // 0x378(0x90)
	struct FSlateBrush *26f30c9398; // 0x408(0x90)
	struct FSlateBrush *bd2969de64; // 0x498(0x90)
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x250 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush DisabledBarImage; // 0x98(0x90)
	struct FSlateBrush NormalThumbImage; // 0x128(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x1b8(0x90)
	float BarThickness; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// ScriptStruct SlateCore.*9bf460dfc8
// Size: 0xb38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*9bf460dfc8 : FSlateWidgetStyle {
	struct FEditableTextBoxStyle *be7a7165ce; // 0x08(0x870)
	struct FSlateFontInfo *d089dc4788; // 0x878(0x68)
	struct FSlateBrush *226dae5f8a; // 0x8e0(0x90)
	struct FSlateBrush *58ee7ffc93; // 0x970(0x90)
	struct FSlateBrush *13096c361a; // 0xa00(0x90)
	struct FSlateBrush *f5fb8abfde; // 0xa90(0x90)
	struct FMargin *e9ad49e25d; // 0xb20(0x10)
	bool *252ec6bb48; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x130 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct FSlateBrush CollapsedImage; // 0x08(0x90)
	struct FSlateBrush ExpandedImage; // 0x98(0x90)
	float RolloutAnimationSeconds; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1b8 (Inherited: 0x08)  [layout: KHOP]
struct FProgressBarStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xa80 (Inherited: 0x08)  [layout: KHOP]
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x08(0x870)
	struct FTextBlockStyle TextStyle; // 0x878(0x208)
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x4c8 (Inherited: 0x08)  [layout: KHOP]
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct FButtonStyle UnderlineStyle; // 0x08(0x2a8)
	struct FTextBlockStyle TextStyle; // 0x2b0(0x208)
	struct FMargin Padding; // 0x4b8(0x10)
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x5e0 (Inherited: 0x08)  [layout: KHOP]
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xa0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1c0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2e0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x558(0x28)
	struct FSlateSound CheckedSlateSound; // 0x580(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x598(0x18)
	struct FSlateSound HoveredSlateSound; // 0x5b0(0x18)
	struct FName CheckedSound; // 0x5c8(0x08)
	struct FName UncheckedSound; // 0x5d0(0x08)
	struct FName HoveredSound; // 0x5d8(0x08)
};

// ScriptStruct SlateCore.*ffc9f47506
// Size: 0x28 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*ffc9f47506 : FInputEvent {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*14ac95006e
// Size: 0x50 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*14ac95006e : FInputEvent {
	char pad_20[0x30]; // 0x20(0x30)
};

// ScriptStruct SlateCore.ControllerEvent
// Size: 0x40 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct FControllerEvent : FInputEvent {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.*b1ea4bc33e
// Size: 0x28 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*b1ea4bc33e : FInputEvent {
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct SlateCore.*174e93aeb2
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct F*174e93aeb2 : FKeyEvent {
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x40 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct FKeyEvent : FInputEvent {
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FFocusEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

