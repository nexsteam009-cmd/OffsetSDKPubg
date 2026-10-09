// Class MovieSceneTracks.*61cbc0f5d9
// Size: 0xe0 (Inherited: 0xd0)  [layout: KHOP]
struct U*61cbc0f5d9 : UMovieSceneSection {
	struct FGuid *5cbd49e1e6; // 0xd0(0x10)
};

// Class MovieSceneTracks.*b8aa09777c
// Size: 0x100 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct U*b8aa09777c : U*61cbc0f5d9 {
	struct FName *6e6d76b9c1; // 0xe0(0x08)
	struct FName *c33fd83b70; // 0xe8(0x08)
	char *117aaac229 : 1; // 0xf0(0x01)
	char *c613d48ec9 : 1; // 0xf0(0x01)
	char *29a194cb9b : 1; // 0xf0(0x01)
	char *d7c10aa92a : 1; // 0xf0(0x01)
	char *b87da8e1f5 : 1; // 0xf0(0x01)
	char *a1eb159641 : 1; // 0xf0(0x01)
	char pad_F1[0xf]; // 0xf1(0x0f)
};

// Class MovieSceneTracks.*8cc4f297b6
// Size: 0x160 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct U*8cc4f297b6 : U*61cbc0f5d9 {
	struct FRichCurve *796dab608c; // 0xe0(0x70)
	enum class MovieScene3DPathSection_Axis *ea9b6f84e5; // 0x150(0x01)
	enum class MovieScene3DPathSection_Axis *41475543da; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	char bFollow : 1; // 0x154(0x01)
	char *f6f7ab613b : 1; // 0x154(0x01)
	char *9054031eeb : 1; // 0x154(0x01)
	char pad_155[0xb]; // 0x155(0x0b)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> *a20adbbfba; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x4d0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x03]; // 0xd8(0x150)
	struct FRichCurve Rotation[0x03]; // 0x228(0x150)
	struct FRichCurve Scale[0x03]; // 0x378(0x150)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class MovieSceneTracks.*e1ebb4ed35
// Size: 0x170 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*e1ebb4ed35 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5164c0326e *b172998bdb; // 0xd8(0x70)
	char pad_148[0x10]; // 0x148(0x10)
	struct TArray<struct FString> *2195b25702; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x200 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xd0(0x08)
	float StartOffset; // 0xd8(0x04)
	float AudioStartTime; // 0xdc(0x04)
	float AudioDilationFactor; // 0xe0(0x04)
	float AudioVolume; // 0xe4(0x04)
	struct FRichCurve *b7f8ac0fad; // 0xe8(0x70)
	struct FRichCurve *88eae397bc; // 0x158(0x70)
	bool *b363b1e1bb; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	DelegateProperty *f2d01e95e0; // 0x1d0(0x10)
	struct FMulticastDelegate *58a4ff9d77; // 0x1e0(0x10)
	struct FMulticastDelegate *ee7338ad49; // 0x1f0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *37bd7ca42b; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x150 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneBoolSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	bool DefaultValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct F*5164c0326e *4b2d62f5c2; // 0xe0(0x70)
};

// Class MovieSceneTracks.*0f38eac959
// Size: 0x150 (Inherited: 0x150)  [layout: KHOP]
struct U*0f38eac959 : UMovieSceneBoolSection {
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x150 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5164c0326e *a2e2b7bf38; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*49cd376a1c
// Size: 0x110 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*49cd376a1c : UMovieSceneSection {
	struct F*7691d454ef *e98ac7836b; // 0xd0(0x20)
	struct UCameraAnim* CameraAnim; // 0xf0(0x08)
	float PlayRate; // 0xf8(0x04)
	float PlayScale; // 0xfc(0x04)
	float BlendInTime; // 0x100(0x04)
	float BlendOutTime; // 0x104(0x04)
	bool bLooping; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *ac0d5dbbac; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0xe0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	struct FGuid *a552f16bd4; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.*44742e5fc4
// Size: 0x110 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*44742e5fc4 : UMovieSceneSection {
	struct F*c72cc86a75 *1f07423c18; // 0xd0(0x20)
	struct UClass* ShakeClass; // 0xf0(0x08)
	float PlayScale; // 0xf8(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *b8dd5a3a62; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x2a0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *14dbee6761; // 0xd8(0x70)
	struct FRichCurve *8c006aa9fe; // 0x148(0x70)
	struct FRichCurve *3922c065b6; // 0x1b8(0x70)
	struct FRichCurve *83466db326; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class MovieSceneTracks.*1207a4390b
// Size: 0x150 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*1207a4390b : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5164c0326e *d766d6ea83; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*f1d46c600c
// Size: 0x1e0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*f1d46c600c : UMovieSceneSection {
	struct F*0ae88db5f0 Events; // 0xd0(0x68)
	struct F*d0d0efdb32 EventData; // 0x138(0x20)
	char pad_158[0x88]; // 0x158(0x88)
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	struct FGuid *136e600b29; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xe0 (Inherited: 0xc0)  [layout: KHOP]
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char *ae6be4529a : 1; // 0xb8(0x01)
	char *d0889ef2bb : 1; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class *8f247c798c *f7ff3d7f68; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x150 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *13ad54037f; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*5f08673e98
// Size: 0x160 (Inherited: 0x150)  [layout: LECH - offset chi la uoc luong]
struct U*5f08673e98 : UMovieSceneFloatSection {
	struct FLinearColor *3fb5984f0d; // 0x148(0x10)
	char *bc9edfbd20 : 1; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// Class MovieSceneTracks.*86dde3e73f
// Size: 0x150 (Inherited: 0x150)  [layout: KHOP]
struct U*86dde3e73f : UMovieSceneFloatSection {
};

// Class MovieSceneTracks.*1a7da22826
// Size: 0x150 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*1a7da22826 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*5164c0326e *3d229a82b6; // 0xd8(0x70)
	char pad_148[0x8]; // 0x148(0x08)
};

// Class MovieSceneTracks.*bca3155e7b
// Size: 0xf0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*bca3155e7b : UMovieSceneSection {
	enum class ELevelVisibility Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FName> *7574d8b0de; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xe0 (Inherited: 0xc0)  [layout: KHOP]
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct FName PropertyName; // 0xb8(0x08)
	struct FString PropertyPath; // 0xc0(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xd0(0x10)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x100 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct F*1e62a8527c> *8821e65bbe; // 0xd0(0x10)
	struct TArray<struct F*570b0c7fb7> *bcce7c08c5; // 0xe0(0x10)
	struct TArray<struct F*95a66ef051> *5fa9225056; // 0xf0(0x10)
};

// Class MovieSceneTracks.*9785a0f922
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct U*9785a0f922 : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.*41eed22ab8
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct U*41eed22ab8 : U*9785a0f922 {
	int32 MaterialIndex; // 0xc8(0x04)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneMaterialParameterCollectionTrack : U*9785a0f922 {
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.*da006aa36a
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct U*da006aa36a : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x140 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct F*5164c0326e *b597b978b1; // 0xd0(0x70)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *7b1cf12886; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*5aeeefc923
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct U*5aeeefc923 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xf0 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xf0 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class MovieSceneTracks.*c7d7c6c91d
// Size: 0xf0 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct U*c7d7c6c91d : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.*1f9e3a1a58
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct U*1f9e3a1a58 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.*7d0d06c777
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct U*7d0d06c777 : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xf0 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32 *2650497cf6; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x190 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct F*885b9e63e0 Params; // 0xd0(0x90)
	struct UAnimSequence* AnimSequence; // 0x160(0x08)
	struct UAnimSequenceBase* Animation; // 0x168(0x08)
	float StartOffset; // 0x170(0x04)
	float EndOffset; // 0x174(0x04)
	float PlayRate; // 0x178(0x04)
	char bReverse : 1; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FName SlotName; // 0x180(0x08)
	char pad_188[0x8]; // 0x188(0x08)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> *10b615f9a4; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.*2542358ea8
// Size: 0x150 (Inherited: 0xd0)  [layout: KHOP]
struct U*2542358ea8 : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct F*7848b67c07 *7848b67c07; // 0xd8(0x78)
};

// Class MovieSceneTracks.*dde879cc5b
// Size: 0x140 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*dde879cc5b : UMovieSceneSection {
	struct F*677f043e4e Parameters; // 0xd0(0x14)
	float StartOffset; // 0xe4(0x04)
	float TimeScale; // 0xe8(0x04)
	float PrerollTime; // 0xec(0x04)
	struct UMovieSceneSequence* *a4a3b8820b; // 0xf0(0x08)
	struct AActor* *e9b048b9bf; // 0xf8(0x1c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FString *bd19b6dd43; // 0x118(0x10)
	struct FDirectoryPath *559ddbe21c; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class MovieSceneTracks.*66b406c793
// Size: 0x150 (Inherited: 0x140)  [layout: KHOP]
struct U*66b406c793 : U*dde879cc5b {
	struct FText DisplayName; // 0x138(0x18)
};

// Class MovieSceneTracks.MovieSceneSubTrack
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.*1f4dfd00e1
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*1f4dfd00e1 : UInterface {

	void BP_GetTransformOrigin(); // Function MovieSceneTracks.*1f4dfd00e1.BP_GetTransformOrigin //  // @ game+0x43bab4
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x2a0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneVectorSection : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Curves[0x04]; // 0xd8(0x1c0)
	int32 *cf6066581f; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
};

