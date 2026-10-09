// Class LevelSequence.LevelSequenceActor
// Size: 0x490 (Inherited: 0x400)  [layout: KHOP]
struct ALevelSequenceActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	bool bAutoPlay; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x410(0x30)
	struct U*939b22881b* SequencePlayer; // 0x440(0x08)
	struct FStringAssetReference LevelSequence; // 0x448(0x10)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x458(0x10)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x468(0x08)
	struct U*48edecdbd9* BindingOverrides; // 0x470(0x08)
	bool bOverrideInstanceData; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UObject* DefaultInstanceData; // 0x480(0x08)
	struct ULevelSequenceBurnIn* *82217b089a; // 0x488(0x08)

	void *de2255d939(); // Function LevelSequence.LevelSequenceActor.*de2255d939 //  // @ game+0xed4ab38
	void *4ed4b3978c(); // Function LevelSequence.LevelSequenceActor.*4ed4b3978c //  // @ game+0xed4a760
	void *ed01dba5d5(); // Function LevelSequence.LevelSequenceActor.*ed01dba5d5 //  // @ game+0xed4a3ac
	void *131d0d414c(); // Function LevelSequence.LevelSequenceActor.*131d0d414c //  // @ game+0xed4a994
	void RemoveBinding(); // Function LevelSequence.LevelSequenceActor.RemoveBinding //  // @ game+0xed4a544
	void *aa6959dddd(); // Function LevelSequence.LevelSequenceActor.*aa6959dddd //  // @ game+0xed4a678
	void *538010988f(); // Function LevelSequence.LevelSequenceActor.*538010988f //  // @ game+0xed4a4b8
	void *f68de635d8(); // Function LevelSequence.LevelSequenceActor.*f68de635d8 //  // @ game+0xed4a774
};

// Class LevelSequence.*1da37b7462
// Size: 0x70 (Inherited: 0x30)  [layout: KHOP]
struct U*1da37b7462 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequence
// Size: 0x430 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*a6e2322f2f *1b3a465e42; // 0x338(0x50)
	struct F*62acdafd1a *a60de7d77e; // 0x388(0x50)
	struct TMap<struct FString, struct F*e3f605d05e> PossessedObjects; // 0x3d8(0x50)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class LevelSequence.*939b22881b
// Size: 0x790 (Inherited: 0x710)  [layout: LECH - offset chi la uoc luong]
struct U*939b22881b : U*10492bc33c {
	char pad_710[0x20]; // 0x710(0x20)
	struct TArray<struct UObject*> *f3f34759b2; // 0x730(0x10)
	char pad_740[0x50]; // 0x740(0x50)

	void *13d4250888(); // Function LevelSequence.*939b22881b.*13d4250888 //  // @ game+0x98ea30
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct ULevelSequenceBurnInOptions : UObject {
	bool *6ae4dedc76; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FStringClassReference *c38c78ce9b; // 0x38(0x10)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2b0 (Inherited: 0x258)  [layout: KHOP]
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x258(0x50)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2a8(0x08)

	void SetSettings(); // Function LevelSequence.LevelSequenceBurnIn.SetSettings //  // @ game+0x43bab4
	void GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass //  // @ game+0xdb21bf4
};

