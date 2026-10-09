// Enum AkAudio.*0afea93da3
enum class *0afea93da3 : uint8 {
	*0a0009f6b0,
	*d4e7885258,
	*4851d2ff9a,
	*0afea93da3_MAX,
};

// Enum AkAudio.*e3bc51685f
enum class *e3bc51685f : uint8 {
	*3533f1239b,
	*2f63c2d49d,
	*5008d57684,
	*d774efc19f,
	*55bead599e,
	*e3bc51685f_MAX,
};

// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8 {
	Box,
	Sphere,
	Capsule,
	ESoundVolumeShape_MAX,
};

// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8 {
	None,
	Left,
	Right,
	Front,
	Back,
	LeftAndRight,
	LeftAndFront,
	LeftAndBack,
	RightAndFront,
	RightAndBack,
	BackAndFront,
	EAkIgnoreRolloffDirection_MAX,
};

// ScriptStruct AkAudio.*98cc2b43f8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*98cc2b43f8 {
	enum class *e3bc51685f Mode; // 0x00(0x01)
	enum class *0afea93da3 *d24ae3054e; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *4e1e45855f; // 0x04(0x04)
	float *a8b56afbfb; // 0x08(0x04)
	float MaxOcclusionDistance; // 0x0c(0x04)
};

// ScriptStruct AkAudio.*f9638dc1dd
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f9638dc1dd {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRotator Rotation; // 0x08(0x0c)
	struct FVector Location; // 0x14(0x0c)
	char pad_20[0x9]; // 0x20(0x09)
	enum class ESoundVolumeShape Shape; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector BoxExtents; // 0x2c(0x0c)
	float Radius; // 0x38(0x04)
	float CapsuleHalfHeight; // 0x3c(0x04)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct AkAudio.*ceaa727dc6
// Size: 0x158 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct F*ceaa727dc6 : F*f9638dc1dd {
	struct TMap<struct U*d7cc0c933f*, float> *d33a77bec4; // 0x80(0x50)
	struct U*de72748a59* *4b83936bd0; // 0xd0(0x08)
	int32 Priority; // 0xd8(0x04)
	float *017a01dbce; // 0xdc(0x04)
	bool *92d0233b52; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *01263cd358; // 0xe4(0x04)
	enum class EAkIgnoreRolloffDirection *d6d45f120a; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
};

// ScriptStruct AkAudio.*63bafd5ecb
// Size: 0xf0 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct F*63bafd5ecb : F*f9638dc1dd {
	float Openness; // 0x80(0x04)
	float *6281d3b97e; // 0x84(0x04)
	float *017a01dbce; // 0x88(0x04)
	float *7a352d814e; // 0x8c(0x04)
	char pad_90[0x60]; // 0x90(0x60)
};

// ScriptStruct AkAudio.*256cb65f77
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*256cb65f77 {
	struct TArray<struct F*ceaa727dc6> Volumes; // 0x00(0x10)
	struct TArray<struct F*63bafd5ecb> Portals; // 0x10(0x10)
};

// ScriptStruct AkAudio.*e4bb37c27c
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e4bb37c27c {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AkAudio.*69c5314679
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*69c5314679 {
	int32 *f17c3c6492; // 0x00(0x04)
	int32 *1922c06866; // 0x04(0x04)
};

// ScriptStruct AkAudio.*93f152ed83
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*93f152ed83 {
	struct TArray<int32> *01fe1fb4be; // 0x00(0x10)
	bool *277d7d7ff8; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AkAudio.*544c092255
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*544c092255 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.*c34e06888a
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*c34e06888a {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*04077d2109* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*c9d587a204
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*c9d587a204 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*5037ec7cdc* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*33d9c0990c
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*33d9c0990c {
	struct FString *fd8f639818; // 0x00(0x10)
	struct FRichCurve *a6d51b4cd9; // 0x10(0x70)
};

