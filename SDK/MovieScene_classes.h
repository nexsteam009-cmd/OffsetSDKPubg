// Class MovieScene.*d3e5caa19b
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*d3e5caa19b : UObject {
	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x70]; // 0x40(0x70)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)  [layout: KHOP]
struct UMovieScene : U*d3e5caa19b {
	struct TArray<struct FMovieSceneSpawnable> *9e942564b9; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *25fa03a17f; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *94064cb655; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FFloatRange SelectionRange; // 0xf8(0x10)
	struct FFloatRange *8b7d0f9162; // 0x108(0x10)
	bool *adc40d2f04; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *ee291d0256; // 0x11c(0x04)
	float InTime; // 0x120(0x04)
	float OutTime; // 0x124(0x04)
	float StartTime; // 0x128(0x04)
	float EndTime; // 0x12c(0x04)
};

// Class MovieScene.*03ea474092
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*03ea474092 : UInterface {
};

// Class MovieScene.*48edecdbd9
// Size: 0xa0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*48edecdbd9 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *4a00881b8d; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)
};

// Class MovieScene.*a8e1d2f9ef
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a8e1d2f9ef : UInterface {
};

// Class MovieScene.*d5d2e3d53d
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*d5d2e3d53d : UObject {
	struct FName FolderName; // 0x30(0x08)
	struct TArray<struct U*d5d2e3d53d*> *ec6c6bda1f; // 0x38(0x10)
	struct TArray<struct UMovieSceneTrack*> *d86c592b41; // 0x48(0x10)
	struct TArray<struct FString> *697eaf9ba4; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class MovieScene.*10492bc33c
// Size: 0x710 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*10492bc33c : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct FMulticastDelegate OnPlay; // 0x378(0x10)
	struct FMulticastDelegate OnStop; // 0x388(0x10)
	struct FMulticastDelegate OnPause; // 0x398(0x10)
	char *4b50e189bb : 1; // 0x3a8(0x01)
	char *bf55da6d62 : 1; // 0x3a8(0x01)
	char *3c4e8d56a1 : 1; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UMovieSceneSequence* Sequence; // 0x3b0(0x08)
	float *f45fb8e402; // 0x3b8(0x04)
	float StartTime; // 0x3bc(0x04)
	float EndTime; // 0x3c0(0x04)
	int32 *2c2eeb4332; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct FMovieSceneSequencePlaybackSettings *649fdc1b3f; // 0x3d8(0x30)
	char pad_408[0x308]; // 0x408(0x308)

	void *d1eca3e912(); // Function MovieScene.*10492bc33c.*d1eca3e912 //  // @ game+0xeb3c434
	void *70643a2e08(); // Function MovieScene.*10492bc33c.*70643a2e08 //  // @ game+0xeb3c470
	void Pause(); // Function MovieScene.*10492bc33c.Pause //  // @ game+0xeb3c4d4
	void GetPlayRate(); // Function MovieScene.*10492bc33c.GetPlayRate //  // @ game+0xeb3c458
	void *a539683646(); // Function MovieScene.*10492bc33c.*a539683646 //  // @ game+0xeb3c488
	void *eccd226eb8(); // Function MovieScene.*10492bc33c.*eccd226eb8 //  // @ game+0xeb3d7ec
	void SetPlaybackPosition(); // Function MovieScene.*10492bc33c.SetPlaybackPosition //  // @ game+0xeb3ce78
	void IsPlaying(); // Function MovieScene.*10492bc33c.IsPlaying //  // @ game+0xeb3c4b8
	void SetPlayRate(); // Function MovieScene.*10492bc33c.SetPlayRate //  // @ game+0xeb3c504
	void *ce84aaf394(); // Function MovieScene.*10492bc33c.*ce84aaf394 //  // @ game+0xeb3c4a0
	void PlayReverse(); // Function MovieScene.*10492bc33c.PlayReverse //  // @ game+0xeb3c4e8
	void *ce89534804(); // Function MovieScene.*10492bc33c.*ce89534804 //  // @ game+0xeb3c330
	void Stop(); // Function MovieScene.*10492bc33c.Stop //  // @ game+0xeb3e1c8
	void *3b7aed675a(); // Function MovieScene.*10492bc33c.*3b7aed675a //  // @ game+0xeb3c314
	void Play(); // Function MovieScene.*10492bc33c.Play //  // @ game+0x1366650
	void *8f334b3415(); // Function MovieScene.*10492bc33c.*8f334b3415 //  // @ game+0x1271184
	void *f36f457e7b(); // Function MovieScene.*10492bc33c.*f36f457e7b //  // @ game+0xeb3e1b4
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)  [layout: KHOP]
struct UMovieSceneSection : U*d3e5caa19b {
	struct FMovieSceneSectionEvalOptions *e9ea509e7d; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime; // 0xb4(0x04)
	float EndTime; // 0xb8(0x04)
	int32 *c17c0d4e83; // 0xbc(0x04)
	int32 *62abf1b8bc; // 0xc0(0x04)
	char *49896f2b03 : 1; // 0xc4(0x01)
	char *18c68cb9d3 : 1; // 0xc4(0x01)
	char *1f297979b0 : 1; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *5524860846; // 0xc8(0x04)
	float *088a1a41eb; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneTrack : U*d3e5caa19b {
	struct FMovieSceneTrackEvalOptions *e9ea509e7d; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*a892c601bb
// Size: 0xd0 (Inherited: 0xc0)  [layout: KHOP]
struct U*a892c601bb : UMovieSceneTrack {
	bool *c75567e24c; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *25019636d3; // 0xc0(0x10)
};

// Class MovieScene.*d4d729dacc
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct U*d4d729dacc : UMovieSceneSection {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UMovieSceneSequence : U*d3e5caa19b {
	struct F*b514e13d93 *b3f12c821c; // 0xb0(0x220)
	struct F*d5764b595a *2ae31ef9e1; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*b514e13d93> *7447a438cd; // 0x2d8(0x50)
	bool *98d7e49883; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)  [layout: KHOP]
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

