// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence,
	MasterSequence,
	External,
	ESpawnOwnership_MAX,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local,
	Root,
	EMovieSceneObjectBindingSpace_MAX,
};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto,
	User,
	Break,
	Linear,
	Constant,
	EMovieSceneKeyInterpolation_MAX,
};

// Enum MovieScene.*8bbe825cf9
enum class *8bbe825cf9 : uint8 {
	*e9d4332c6c,
	*5f9017b050,
	*c6934de378,
	*8bbe825cf9_MAX,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None,
	PreRoll,
	PostRoll,
	ESectionEvaluationFlags_MAX,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static,
	Swept,
	EEvaluationMethod_MAX,
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovieSceneSpawnable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UObject* *f7c42e9734; // 0x20(0x08)
	struct TArray<struct FGuid> *095ce34b73; // 0x28(0x10)
	enum class ESpawnOwnership Ownership; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FMovieSceneBinding {
	struct FGuid *136e600b29; // 0x00(0x10)
	struct FString *8a1c7df616; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FMovieScenePossessable {
	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct UClass* *eec0381514; // 0x20(0x08)
	struct FGuid ParentGuid; // 0x28(0x10)
};

// ScriptStruct MovieScene.*207d79f08b
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*207d79f08b {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FMovieSceneObjectBindingID {
	int32 *bb55e49ba3; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace *2e3dc0d9b2; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.*19c5059ffb
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*19c5059ffb {
	struct TArray<struct FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct F*53d4766ad5> *ca60601cd5; // 0x00(0x50)
	struct FFloatRange *b838070f22; // 0x50(0x10)
	struct FFloatRange *cc5c3d2138; // 0x60(0x10)
};

// ScriptStruct MovieScene.*53d4766ad5
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*53d4766ad5 {
	bool *780b7f93f7; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID *2ed6b51ee1; // 0x00(0x18)
	struct UObject* Object; // 0x18(0x08)
	bool *17636c52a1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FMovieSceneSequencePlaybackSettings {
	int32 LoopCount; // 0x00(0x04)
	float PlayRate; // 0x04(0x04)
	bool bRandomStartTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StartTime; // 0x0c(0x04)
	bool bRestoreState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UObject* InstanceData; // 0x18(0x08)
	TScriptInterface<struct U*03ea474092> BindingOverrides; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct FMovieSceneSectionEvalOptions {
	bool *4259c5c98d; // 0x00(0x01)
	enum class *8bbe825cf9 *4c8404b87c; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovieSceneTrackEvalOptions {
	char *0502bdfb50 : 1; // 0x00(0x01)
	char *22bf6df96d : 1; // 0x00(0x01)
	char *76e32f6a76 : 1; // 0x00(0x01)
	char *cd6977bb93 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct MovieScene.*d5764b595a
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*d5764b595a {
	bool *33e4336af7; // 0x00(0x01)
	bool *7f95c80bba; // 0x01(0x01)
};

// ScriptStruct MovieScene.*af75219986
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*af75219986 {
	uint32 Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.*9bcc2165b9
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*9bcc2165b9 {
	struct TArray<struct FFloatRange> *fd4e82eaa5; // 0x00(0x10)
	struct TArray<struct F*5554a93d76> Groups; // 0x10(0x10)
	struct TArray<struct F*2849ca9104> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.*2849ca9104
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2849ca9104 {
	struct TArray<struct F*207d79f08b> *d05e62f68e; // 0x00(0x10)
};

// ScriptStruct MovieScene.*5554a93d76
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*5554a93d76 {
	struct TArray<struct F*39a74026b7> *d372d6b244; // 0x00(0x10)
	struct TArray<struct F*07d62aeb25> *d4a52da622; // 0x10(0x10)
};

// ScriptStruct MovieScene.*07d62aeb25
// Size: 0x0c (Inherited: 0x08)  [layout: KHOP]
struct F*07d62aeb25 : F*79c9a83d28 {
	int32 *96d3aeec6e; // 0x08(0x04)
};

// ScriptStruct MovieScene.*79c9a83d28
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*79c9a83d28 {
	struct F*207d79f08b *bb55e49ba3; // 0x00(0x04)
	struct F*af75219986 *7a2bf45d22; // 0x04(0x04)
};

// ScriptStruct MovieScene.*39a74026b7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*39a74026b7 {
	bool *1f5eef0c9e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *4969f4b88c; // 0x04(0x04)
	int32 *a7fc53a279; // 0x08(0x04)
	int32 *f16b668767; // 0x0c(0x04)
};

// ScriptStruct MovieScene.*e0804df3e5
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e0804df3e5 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct MovieScene.*a4adeb1f98
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a4adeb1f98 {
	int32 *2eb367fb58; // 0x00(0x04)
	float *56a161f96e; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct MovieScene.*70b7802292
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*70b7802292 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct MovieScene.*ce7ba4b897
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ce7ba4b897 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct MovieScene.*efb3c84859
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*efb3c84859 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*bfe61af0ca
// Size: 0x18 (Inherited: 0x10)  [layout: LECH - offset chi la uoc luong]
struct F*bfe61af0ca : F*70b7802292 {
	enum class *8bbe825cf9 *4c8404b87c; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieScene.*ece462fb00
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ece462fb00 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieScene.*2e781416f2
// Size: 0x10 (Inherited: 0x10)  [layout: KHOP]
struct F*2e781416f2 : F*70b7802292 {
};

// ScriptStruct MovieScene.*ab322165db
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ab322165db {
	struct FGuid *2ed6b51ee1; // 0x00(0x10)
	uint16 *7df8633d7b; // 0x10(0x02)
	enum class EEvaluationMethod *0c5936c135; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct F*e0804df3e5> Segments; // 0x18(0x10)
	struct TArray<struct F*efb3c84859> *e12d54f96f; // 0x28(0x10)
	struct F*ece462fb00 *837b4ba4ad; // 0x38(0x38)
	struct FName *a5428e41fb; // 0x70(0x08)
	char *76e32f6a76 : 1; // 0x78(0x01)
	char *cd6977bb93 : 1; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct MovieScene.*b1526e9331
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*b1526e9331 {
	float TimeScale; // 0x00(0x04)
	float Offset; // 0x04(0x04)
};

// ScriptStruct MovieScene.*677f043e4e
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*677f043e4e {
	float StartOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32 *8bee84e198; // 0x08(0x04)
	float PrerollTime; // 0x0c(0x04)
	float PostrollTime; // 0x10(0x04)
};

// ScriptStruct MovieScene.*601da673e6
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*601da673e6 {
	struct TMap<uint32, struct F*0e608f5bb1> *e6d032e096; // 0x00(0x50)
	struct TMap<uint32, struct F*306fb702d5> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.*306fb702d5
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*306fb702d5 {
	struct F*207d79f08b ParentID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*207d79f08b> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.*0e608f5bb1
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*0e608f5bb1 {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct UObject* *14d8c293c5; // 0x08(0x08)
	struct F*b1526e9331 *b89aecd8b6; // 0x10(0x08)
	struct FGuid *0a9509c57f; // 0x18(0x10)
	struct F*207d79f08b *92368ea98d; // 0x28(0x04)
	struct FFloatRange *c74c0d1f75; // 0x2c(0x10)
	struct FFloatRange *01d53792a5; // 0x3c(0x10)
	int32 *8bee84e198; // 0x4c(0x04)
};

// ScriptStruct MovieScene.*b514e13d93
// Size: 0x220 (Inherited: 0x220)  [layout: KHOP]
struct F*b514e13d93 : F*8edff51100 {
};

// ScriptStruct MovieScene.*8edff51100
// Size: 0x220 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8edff51100 {
	struct TMap<uint32, struct F*ab322165db> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct F*9bcc2165b9 *00cc891094; // 0xa0(0x30)
	struct F*601da673e6 Hierarchy; // 0xd0(0xa0)
	struct F*2df2bb2bee *91a37b032b; // 0x170(0xa8)
	char *7ffbaf2c8c : 1; // 0x218(0x01)
	char *664c9bae39 : 1; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
};

// ScriptStruct MovieScene.*2df2bb2bee
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*2df2bb2bee {
	struct F*af75219986 *4af59f2aa6; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct F*af75219986, int32> *c5802baf26; // 0x08(0x50)
	struct TMap<struct FGuid, struct F*ba31661782> *ed629d126f; // 0x58(0x50)
};

// ScriptStruct MovieScene.*ba31661782
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ba31661782 {
	struct TArray<struct F*af75219986> Data; // 0x00(0x10)
};

// ScriptStruct MovieScene.*c05f447787
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c05f447787 {
	struct UMovieSceneSequence* Sequence; // 0x00(0x08)
	struct FGuid *74a0953b2c; // 0x08(0x10)
};

// ScriptStruct MovieScene.*2e9262d8e3
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct F*2e9262d8e3 : F*bfe61af0ca {
	struct UMovieSceneTrack* Track; // 0x18(0x08)
};

// ScriptStruct MovieScene.*969fe0ffc5
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*969fe0ffc5 {
	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName *9007643baf; // 0x20(0x08)
};

// ScriptStruct MovieScene.*8c05d24da7
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8c05d24da7 {
	char pad_0[0x8]; // 0x00(0x08)
};

