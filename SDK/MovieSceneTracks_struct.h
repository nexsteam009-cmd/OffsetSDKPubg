// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X,
	Y,
	Z,
	NEG_X,
	NEG_Y,
	NEG_Z,
	MovieScene3DPathSection_MAX,
};

// Enum MovieSceneTracks.*263ac576ed
enum class *263ac576ed : uint8 {
	*4d28e2f9cd,
	*88600ced34,
	*e57d8e86ef,
	*5e13b0b7b4,
	*263ac576ed_MAX,
};

// Enum MovieSceneTracks.*8f247c798c
enum class *8f247c798c : uint8 {
	*8478b42290,
	*a4e3cb2e26,
	*7ec5d47544,
	*de2787a432,
	*8f247c798c_MAX,
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible,
	Hidden,
	ELevelVisibility_MAX,
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate,
	Deactivate,
	Trigger,
	EParticleKey_MAX,
};

// ScriptStruct MovieSceneTracks.*c23678b1c3
// Size: 0x78 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*c23678b1c3 : F*8c05d24da7 {
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4c]; // 0x2c(0x4c)
};

// ScriptStruct MovieSceneTracks.*438de1ee64
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*438de1ee64 : F*8c05d24da7 {
	struct FVector Scale; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*5e2fa0c927
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*5e2fa0c927 : F*8c05d24da7 {
	struct FRotator Rotation; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*ab2a80b654
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*ab2a80b654 : F*8c05d24da7 {
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct MovieSceneTracks.*7691d454ef
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7691d454ef {
	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float *c730f4425d; // 0x0c(0x04)
	float *527da2ee61; // 0x10(0x04)
	float *bd968ab195; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.*c72cc86a75
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c72cc86a75 {
	struct UClass* *46759e9868; // 0x00(0x08)
	float *c730f4425d; // 0x08(0x04)
	enum class ECameraAnimPlaySpace *93891ae15d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator *3a2dc8ea1c; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct MovieSceneTracks.*ab8d672e9b
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*ab8d672e9b : F*8c05d24da7 {
	struct FLinearColor Color; // 0x08(0x10)
	char pad_18[0x40]; // 0x18(0x40)
};

// ScriptStruct MovieSceneTracks.*d0d0efdb32
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*d0d0efdb32 {
	struct TArray<float> *a85e7703ff; // 0x00(0x10)
	struct TArray<struct FEventPayload> *bc84b6859d; // 0x10(0x10)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FEventPayload {
	struct FName EventName; // 0x00(0x08)
	struct FMovieSceneEventParameters Parameters; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovieSceneEventParameters {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct MovieSceneTracks.*95a66ef051
// Size: 0x1d0 (Inherited: 0x00)  [layout: KHOP]
struct F*95a66ef051 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *14dbee6761; // 0x10(0x70)
	struct FRichCurve *8c006aa9fe; // 0x80(0x70)
	struct FRichCurve *3922c065b6; // 0xf0(0x70)
	struct FRichCurve *83466db326; // 0x160(0x70)
};

// ScriptStruct MovieSceneTracks.*570b0c7fb7
// Size: 0x160 (Inherited: 0x00)  [layout: KHOP]
struct F*570b0c7fb7 {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *0745fb9e91; // 0x10(0x70)
	struct FRichCurve *d768268684; // 0x80(0x70)
	struct FRichCurve *582a14ae09; // 0xf0(0x70)
};

// ScriptStruct MovieSceneTracks.*1e62a8527c
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*1e62a8527c {
	struct FName ParameterName; // 0x00(0x08)
	int32 Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRichCurve *12932fd19a; // 0x10(0x70)
};

// ScriptStruct MovieSceneTracks.*885b9e63e0
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct F*885b9e63e0 {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	float StartOffset; // 0x08(0x04)
	float *c94a129939; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char *f6f7ab613b : 1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName SlotName; // 0x18(0x08)
	struct FRichCurve weight; // 0x20(0x70)
};

// ScriptStruct MovieSceneTracks.*6d5ff12399
// Size: 0x60 (Inherited: 0x48)  [layout: KHOP]
struct F*6d5ff12399 : F*589a993e89 {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Vector; // 0x50(0x10)
};

// ScriptStruct MovieSceneTracks.*589a993e89
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*589a993e89 : F*8c05d24da7 {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct MovieSceneTracks.*26696fe9a7
// Size: 0x58 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct F*26696fe9a7 : F*589a993e89 {
	struct FVector Vector; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct MovieSceneTracks.*4a2af3c6b1
// Size: 0x50 (Inherited: 0x48)  [layout: KHOP]
struct F*4a2af3c6b1 : F*589a993e89 {
	struct FVector2D Vector; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*63ec5e2485
// Size: 0x50 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct F*63ec5e2485 : F*1e8b049fa6 {
	int32 MaterialIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.*1e8b049fa6
// Size: 0x48 (Inherited: 0x18)  [layout: KHOP]
struct F*1e8b049fa6 : F*bfe61af0ca {
	struct TArray<struct F*1e62a8527c> *4518ada168; // 0x18(0x10)
	struct TArray<struct F*570b0c7fb7> Vectors; // 0x28(0x10)
	struct TArray<struct F*95a66ef051> Colors; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.*0bfa76e5df
// Size: 0x88 (Inherited: 0x18)  [layout: KHOP]
struct F*0bfa76e5df : F*bfe61af0ca {
	struct F*5164c0326e Curve; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*c61af151ef
// Size: 0x38 (Inherited: 0x18)  [layout: KHOP]
struct F*c61af151ef : F*bfe61af0ca {
	struct FGuid *2dee009c01; // 0x18(0x10)
	struct FName *6e6d76b9c1; // 0x28(0x08)
	struct FName *c33fd83b70; // 0x30(0x08)
};

// ScriptStruct MovieSceneTracks.*60f1c39da8
// Size: 0xa0 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*60f1c39da8 : F*bfe61af0ca {
	struct FGuid *74c46de493; // 0x18(0x10)
	struct FRichCurve *796dab608c; // 0x28(0x70)
	enum class MovieScene3DPathSection_Axis *ea9b6f84e5; // 0x98(0x01)
	enum class MovieScene3DPathSection_Axis *41475543da; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bFollow : 1; // 0x9c(0x01)
	char *f6f7ab613b : 1; // 0x9c(0x01)
	char *9054031eeb : 1; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// ScriptStruct MovieSceneTracks.*013a36be58
// Size: 0x408 (Inherited: 0x18)  [layout: KHOP]
struct F*013a36be58 : F*bfe61af0ca {
	struct FRichCurve *1ef4dbc8cb[0x03]; // 0x18(0x150)
	struct FRichCurve *f775a511da[0x03]; // 0x168(0x150)
	struct FRichCurve *d678617898[0x03]; // 0x2b8(0x150)
};

// ScriptStruct MovieSceneTracks.*4a75e02580
// Size: 0xc0 (Inherited: 0x18)  [layout: KHOP]
struct F*4a75e02580 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*5164c0326e *b172998bdb; // 0x40(0x70)
	struct TArray<struct FGuid> *2ddc88518d; // 0xb0(0x10)
};

// ScriptStruct MovieSceneTracks.*fd3d36919e
// Size: 0x150 (Inherited: 0x18)  [layout: KHOP]
struct F*fd3d36919e : F*bfe61af0ca {
	struct F*a89291daa8 *2ab88d7f55; // 0x18(0x138)
};

// ScriptStruct MovieSceneTracks.*a89291daa8
// Size: 0x138 (Inherited: 0x00)  [layout: KHOP]
struct F*a89291daa8 {
	struct USoundBase* Sound; // 0x00(0x08)
	float *1c35d8f00d; // 0x08(0x04)
	struct FFloatRange *199661cf37; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FRichCurve *e1c0ede48c; // 0x20(0x70)
	struct FRichCurve *3258b27076; // 0x90(0x70)
	int32 *c17c0d4e83; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	DelegateProperty *f2d01e95e0; // 0x108(0x10)
	struct FMulticastDelegate *58a4ff9d77; // 0x118(0x10)
	struct FMulticastDelegate *ee7338ad49; // 0x128(0x10)
};

// ScriptStruct MovieSceneTracks.*9077733352
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct F*9077733352 : F*bfe61af0ca {
};

// ScriptStruct MovieSceneTracks.*460b46c214
// Size: 0x40 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*460b46c214 : F*899cdc02b7 {
	struct F*c72cc86a75 *9c72b41d0a; // 0x18(0x20)
	float *508e4e2019; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*899cdc02b7
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct F*899cdc02b7 : F*bfe61af0ca {
};

// ScriptStruct MovieSceneTracks.*9c54890bdb
// Size: 0x40 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*9c54890bdb : F*899cdc02b7 {
	struct F*7691d454ef *9c72b41d0a; // 0x18(0x20)
	float *508e4e2019; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct MovieSceneTracks.*ab2165851f
// Size: 0x70 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*ab2165851f : F*bfe61af0ca {
	struct FGuid *a552f16bd4; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *201fa52b2d; // 0x30(0x30)
	bool *af079d68c4; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct MovieSceneTracks.*91ea7e0a7c
// Size: 0x1f0 (Inherited: 0x18)  [layout: KHOP]
struct F*91ea7e0a7c : F*bfe61af0ca {
	struct FName PropertyName; // 0x18(0x08)
	struct FString PropertyPath; // 0x20(0x10)
	struct FRichCurve Curves[0x04]; // 0x30(0x1c0)
};

// ScriptStruct MovieSceneTracks.*1b6d0e1977
// Size: 0x50 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*1b6d0e1977 : F*bfe61af0ca {
	struct F*d0d0efdb32 EventData; // 0x18(0x20)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x38(0x10)
	char *ae6be4529a : 1; // 0x48(0x01)
	char *d0889ef2bb : 1; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct MovieSceneTracks.*c49362bf01
// Size: 0xa0 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*c49362bf01 : F*bfe61af0ca {
	struct FRichCurve *daf85212ab; // 0x18(0x70)
	struct FLinearColor *3fb5984f0d; // 0x88(0x10)
	char *bc9edfbd20 : 1; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct MovieSceneTracks.*d3dc7ce8d7
// Size: 0x30 (Inherited: 0x18)  [layout: KHOP]
struct F*d3dc7ce8d7 : F*bfe61af0ca {
	enum class ELevelVisibility Visibility; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> *7574d8b0de; // 0x20(0x10)
};

// ScriptStruct MovieSceneTracks.*e076c4a594
// Size: 0x50 (Inherited: 0x48)  [layout: KHOP]
struct F*e076c4a594 : F*1e8b049fa6 {
	struct UMaterialParameterCollection* MPC; // 0x48(0x08)
};

// ScriptStruct MovieSceneTracks.*7af25622b9
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct F*7af25622b9 : F*1e8b049fa6 {
};

// ScriptStruct MovieSceneTracks.*d0f2f4fb7c
// Size: 0x88 (Inherited: 0x18)  [layout: KHOP]
struct F*d0f2f4fb7c : F*bfe61af0ca {
	struct F*5164c0326e *b597b978b1; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*11face0db1
// Size: 0x430 (Inherited: 0x18)  [layout: KHOP]
struct F*11face0db1 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct FRichCurve *1ef4dbc8cb[0x03]; // 0x40(0x150)
	struct FRichCurve *f775a511da[0x03]; // 0x190(0x150)
	struct FRichCurve *d678617898[0x03]; // 0x2e0(0x150)
};

// ScriptStruct MovieSceneTracks.*bda6347cd9
// Size: 0x208 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*bda6347cd9 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct FRichCurve *ae8f977c23[0x04]; // 0x40(0x1c0)
	int32 *2650497cf6; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// ScriptStruct MovieSceneTracks.*47a09908ae
// Size: 0xb8 (Inherited: 0x18)  [layout: KHOP]
struct F*47a09908ae : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*7848b67c07 *7848b67c07; // 0x40(0x78)
};

// ScriptStruct MovieSceneTracks.*73524a8b55
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*73524a8b55 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*5164c0326e *3d229a82b6; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*69bde3523f
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*69bde3523f : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*5164c0326e *d766d6ea83; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*2079cae0c9
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*2079cae0c9 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*5164c0326e *a2e2b7bf38; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*f8461cacfe
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*f8461cacfe : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct FRichCurve *13ad54037f; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*6dad957635
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*6dad957635 : F*bfe61af0ca {
	struct F*969fe0ffc5 *208b91bc20; // 0x18(0x28)
	struct F*5164c0326e *4b2d62f5c2; // 0x40(0x70)
};

// ScriptStruct MovieSceneTracks.*c4daf86874
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct F*c4daf86874 : F*bfe61af0ca {
};

// ScriptStruct MovieSceneTracks.*ae5e8e0cdc
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct F*ae5e8e0cdc : F*bfe61af0ca {
	struct F*692fabe829 Params; // 0x18(0x98)
};

// ScriptStruct MovieSceneTracks.*692fabe829
// Size: 0x98 (Inherited: 0x90)  [layout: KHOP]
struct F*692fabe829 : F*885b9e63e0 {
	float *508e4e2019; // 0x90(0x04)
	float *7a19e560a5; // 0x94(0x04)
};

// ScriptStruct MovieSceneTracks.*9be981dc80
// Size: 0x88 (Inherited: 0x18)  [layout: KHOP]
struct F*9be981dc80 : F*bfe61af0ca {
	struct FRichCurve *70ca76372e; // 0x18(0x70)
};

// ScriptStruct MovieSceneTracks.*b78ceeaa37
// Size: 0xb8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct F*b78ceeaa37 : F*6dad957635 {
	bool *54061e23d1; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

