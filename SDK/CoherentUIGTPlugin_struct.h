// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8 {
	LeftMouseButton,
	RightMouseButton,
	MiddleMouseButton,
	ThumbMouseButton,
	ThumbMouseButton2,
	BackSpace,
	Tab,
	Enter,
	Pause,
	CapsLock,
	Escape,
	SpaceBar,
	PageUp,
	PageDown,
	End,
	Home,
	Left,
	Up,
	Right,
	Down,
	Insert,
	Delete,
	Zero,
	One,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
	NumPadZero,
	NumPadOne,
	NumPadTwo,
	NumPadThree,
	NumPadFour,
	NumPadFive,
	NumPadSix,
	NumPadSeven,
	NumPadEight,
	NumPadNine,
	Multiply,
	Add,
	Subtract,
	Decimal,
	Divide,
	F1,
	F2,
	F3,
	F4,
	F5,
	F6,
	F7,
	F8,
	F9,
	F10,
	F11,
	F12,
	NumLock,
	ScrollLock,
	LeftShift,
	RightShift,
	LeftControl,
	RightControl,
	LeftAlt,
	RightAlt,
	LeftCommand,
	RightCommand,
	Semicolon,
	Equals,
	Comma,
	Underscore,
	Period,
	Slash,
	Tilde,
	LeftBracket,
	Backslash,
	RightBracket,
	Quote,
	Unknown,
	ECoherentUIGTKeys_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTFocusChange
enum class ECoherentUIGTFocusChange : uint8 {
	Received,
	Lost,
	ECoherentUIGTFocusChange_MAX,
};

// Enum CoherentUIGTPlugin.*552055742a
enum class *552055742a : uint8 {
	*d977a2c0b3,
	*41e4558b98,
	*ea7c5b002a,
	*7a4554aed8,
	*552055742a_MAX,
};

// Enum CoherentUIGTPlugin.*545cc09008
enum class *545cc09008 : uint8 {
	*270fe46327,
	*8e4028bf1d,
	*219509d546,
	*545cc09008_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTLinearSpaceRenderingPipeline
enum class ECoherentUIGTLinearSpaceRenderingPipeline : uint8 {
	Disabled,
	SRGBTextures,
	WideTextures,
	ECoherentUIGTLinearSpaceRenderingPipeline_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTImageFormat
enum class ECoherentUIGTImageFormat : uint8 {
	PNG,
	TGA,
	JPG,
	JPEG,
	PSD,
	SVG,
	DDS,
	BMP,
	ASTC,
	PKM,
	KTX,
	ECoherentUIGTImageFormat_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8 {
	MSAA_1x,
	MSAA_2x,
	MSAA_4x,
	MSAA_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTViewLoadPolicy
enum class ECoherentUIGTViewLoadPolicy : uint8 {
	VLP_UseCacheOrLoad,
	VLP_IgnoreCache,
	VLP_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8 {
	Trace,
	Debug,
	Info,
	Warning,
	AssertFailure,
	Error,
	ECoherentUIGTSettingsSeverity_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTTickGroup
enum class ECoherentUIGTTickGroup : uint8 {
	CoherentUIGTTG_PrePhysics,
	CoherentUIGTTG_StartPhysics,
	CoherentUIGTTG_DuringPhysics,
	CoherentUIGTTG_EndPhysics,
	CoherentUIGTTG_PostPhysics,
	CoherentUIGTTG_PostUpdateWork,
	CoherentUIGTTG_LastDemotable,
	CoherentUIGTTG_NewlySpawned,
	CoherentUIGTTG_ManualTick,
	CoherentUIGTTG_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTComponentMeshInit
enum class ECoherentUIGTComponentMeshInit : uint8 {
	LazyInit,
	Immediate,
	ECoherentUIGTComponentMeshInit_MAX,
};

// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8 {
	None,
	Keyboard,
	Joystick,
	KeyboardAndJoystick,
	ECoherentUIGTInputPropagationBehaviour_MAX,
};

// Enum CoherentUIGTPlugin.*5532b666e3
enum class *5532b666e3 : uint8 {
	*618ce32c62,
	*70cc7ffbc8,
	*f96064903c,
	*12c61150a9,
	*5532b666e3_MAX,
};

// ScriptStruct CoherentUIGTPlugin.*cdff66c18a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cdff66c18a {
	struct UAudioComponent* AudioComponent; // 0x00(0x08)
	struct U*8434e9486a* Stream; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct CoherentUIGTPlugin.ResourceHostPair
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FResourceHostPair {
	struct FString Host; // 0x00(0x10)
	struct FString HostLocation; // 0x10(0x10)
};

// ScriptStruct CoherentUIGTPlugin.*2cfb49fe47
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*2cfb49fe47 {
	float MinimumLoadingScreenDisplayTime; // 0x00(0x04)
	bool bAutoCompleteWhenLoadingCompletes; // 0x04(0x01)
	bool bWaitForManualStop; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct CoherentUIGTPlugin.CoherentUIGTWidgetTickFunction
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct FCoherentUIGTWidgetTickFunction : FTickFunction {
	struct UCoherentUIGTWidget* WidgetToTick; // 0x50(0x08)
};

// ScriptStruct CoherentUIGTPlugin.*53c31ba748
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*53c31ba748 {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
	bool IsTransparent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ClickThroughAlphaThreshold; // 0x0c(0x04)
	float AnimationFrameDefer; // 0x10(0x04)
};

