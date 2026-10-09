// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8 {
	Visible,
	Collapsed,
	Hidden,
	HitTestInvisible,
	SelfHitTestInvisible,
	ESlateVisibility_MAX,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8 {
	Default,
	Number,
	Web,
	Email,
	Password,
	AlphaNumeric,
	EVirtualKeyboardType_MAX,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8 {
	MouseDown,
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDragPivot_MAX,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8 {
	Automatic,
	Fill,
	ESlateSizeRule_MAX,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8 {
	None,
	Designing,
	ShowOutline,
	ExecutePreConstruct,
	EWidgetDesignFlags_MAX,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8 {
	Function,
	Property,
	EBindingKind_MAX,
};

// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8 {
	FillScreen,
	Custom,
	CustomOnScreen,
	Desired,
	DesiredOnScreen,
	EDesignPreviewSizeMode_MAX,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8 {
	Forward,
	Reverse,
	PingPong,
	EUMGSequencePlayMode_MAX,
};

// Enum UMG.EWidgetForcedLOD
enum class EWidgetForcedLOD : uint8 {
	None,
	Inactive,
	LOD0,
	LOD1,
	LOD2,
	LOD3,
	LOD4,
	LOD5,
	LOD6,
	LOD7,
	EWidgetForcedLOD_MAX,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8 {
	Plane,
	Cylinder,
	Sphere,
	EWidgetGeometryMode_MAX,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8 {
	Opaque,
	Masked,
	Transparent,
	EWidgetBlendMode_MAX,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8 {
	RealTime,
	GameTime,
	EWidgetTimingPolicy_MAX,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8 {
	World,
	Screen,
	EWidgetSpace_MAX,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8 {
	World,
	Mouse,
	CenterScreen,
	Custom,
	EWidgetInteractionSource_MAX,
};

// ScriptStruct UMG.EventReply
// Size: 0xb8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEventReply {
	char pad_0[0xb8]; // 0x00(0xb8)
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FWidgetTransform {
	struct FVector2D Translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ETextShapingMethod TextShapingMethod; // 0x04(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FAnchorData {
	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)
};

// ScriptStruct UMG.*4a5cd09681
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4a5cd09681 {
	struct TArray<struct F*3ed3f37a6a> Segments; // 0x00(0x10)
};

// ScriptStruct UMG.*3ed3f37a6a
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*3ed3f37a6a {
	struct FName Name; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct UField* Field; // 0x18(0x08)
};

// ScriptStruct UMG.*0c1eb149c3
// Size: 0x3c (Inherited: 0x00)  [layout: KHOP]
struct F*0c1eb149c3 {
	struct FVector2D Position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector2D UV1; // 0x14(0x08)
	struct FVector2D UV2; // 0x1c(0x08)
	struct FVector2D UV3; // 0x24(0x08)
	struct FVector2D UV4; // 0x2c(0x08)
	struct FVector2D UV5; // 0x34(0x08)
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSlateChildSize {
	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct UMG.*e36be61d27
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e36be61d27 {
	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct F*4a5cd09681 SourcePath; // 0x20(0x10)
	enum class EBindingKind Kind; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FNamedSlotBinding {
	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)
};

// ScriptStruct UMG.*adbdec8636
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*adbdec8636 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct UMG.*72afb62c8c
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*72afb62c8c {
	struct FName WidgetName; // 0x00(0x08)
	struct FName *034e329a3a; // 0x08(0x08)
	struct FGuid *9c028dd881; // 0x10(0x10)
	bool *976e5eeb2b; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct UMG.*5638a9173e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*5638a9173e {
	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName WidgetToFocus; // 0x08(0x08)
	struct UWidget* Widget; // 0x10(0x08)
};

// ScriptStruct UMG.*e9cb281551
// Size: 0x88 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e9cb281551 {
	struct TArray<struct UUserWidget*> *700c4a80b2; // 0x00(0x10)
	struct TArray<struct UUserWidget*> *f874cd434e; // 0x10(0x10)
	char pad_20[0x68]; // 0x20(0x68)
};

// ScriptStruct UMG.*bffc513539
// Size: 0x350 (Inherited: 0x18)  [layout: KHOP]
struct F*bffc513539 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct FRichCurve Translation[0x02]; // 0x40(0xe0)
	struct FRichCurve Rotation; // 0x120(0x70)
	struct FRichCurve Scale[0x02]; // 0x190(0xe0)
	struct FRichCurve Shear[0x02]; // 0x270(0xe0)
};

// ScriptStruct UMG.*24ff28c035
// Size: 0x200 (Inherited: 0x18)  [layout: KHOP]
struct F*24ff28c035 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct FRichCurve *d0d112a89d; // 0x40(0x70)
	struct FRichCurve *93edb8e2bb; // 0xb0(0x70)
	struct FRichCurve *d391fb88c2; // 0x120(0x70)
	struct FRichCurve *05e72f523d; // 0x190(0x70)
};

// ScriptStruct UMG.*3589fe39e6
// Size: 0x58 (Inherited: 0x48)  [layout: KHOP]
struct F*3589fe39e6 : F*1e8b049fa6 {
	struct TArray<struct FName> *b97fd160a4; // 0x48(0x10)
};

