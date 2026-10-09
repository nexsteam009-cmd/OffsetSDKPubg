// Class ActorSequence.ActorSequence
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x330(0x08)
	struct F*fb28f0edc1 *1b3a465e42; // 0x338(0x20)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x250 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings *649fdc1b3f; // 0x208(0x30)
	struct UActorSequence* Sequence; // 0x238(0x08)
	struct U*cb57cfcb67* SequencePlayer; // 0x240(0x08)
	bool *ab17cc4de7; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class ActorSequence.*cb57cfcb67
// Size: 0x710 (Inherited: 0x710)  [layout: KHOP]
struct U*cb57cfcb67 : U*10492bc33c {
};

