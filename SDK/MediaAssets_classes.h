// Class MediaAssets.*013e43b13a
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*013e43b13a : UObject {
	char pad_30[0x90]; // 0x30(0x90)

	void *98f95b75c8(); // Function MediaAssets.*013e43b13a.*98f95b75c8 //  // @ game+0xf584dec
	void *0ce505690b(); // Function MediaAssets.*013e43b13a.*0ce505690b //  // @ game+0xf5855cc
	void *e578d5d298(); // Function MediaAssets.*013e43b13a.*e578d5d298 //  // @ game+0xf5854e0
};

// Class MediaAssets.MediaPlayer
// Size: 0x170 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMediaPlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastDelegate OnEndReached; // 0x38(0x10)
	struct FMulticastDelegate OnMediaClosed; // 0x48(0x10)
	struct FMulticastDelegate OnMediaOpened; // 0x58(0x10)
	struct FMulticastDelegate OnMediaOpenFailed; // 0x68(0x10)
	struct FMulticastDelegate OnPlaybackResumed; // 0x78(0x10)
	struct FMulticastDelegate OnPlaybackSuspended; // 0x88(0x10)
	bool *83661b9520; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char Shuffle : 1; // 0x9c(0x01)
	char Loop : 1; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct U*013e43b13a* Overlays; // 0xa0(0x08)
	struct U*2f29566f49* PlayList; // 0xa8(0x08)
	int32 PlaylistIndex; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UMediaSoundWave* SoundWave; // 0xb8(0x08)
	struct UMediaTexture* VideoTexture; // 0xc0(0x08)
	char pad_C8[0xa8]; // 0xc8(0xa8)

	void GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration //  // @ game+0xf584ef4
	void *2e16d0f946(); // Function MediaAssets.MediaPlayer.*2e16d0f946 //  // @ game+0xf584aa0
	void *d0fa922843(); // Function MediaAssets.MediaPlayer.*d0fa922843 //  // @ game+0xf585bb4
	void *9f9daa8e01(); // Function MediaAssets.MediaPlayer.*9f9daa8e01 //  // @ game+0xf585440
	void GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl //  // @ game+0xf58591c
	void Seek(); // Function MediaAssets.MediaPlayer.Seek //  // @ game+0xf586498
	void SetLooping(); // Function MediaAssets.MediaPlayer.SetLooping //  // @ game+0xf586ab8
	void *df8e7285e2(); // Function MediaAssets.MediaPlayer.*df8e7285e2 //  // @ game+0xf586624
	void IsReady(); // Function MediaAssets.MediaPlayer.IsReady //  // @ game+0xf585c04
	void SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing //  // @ game+0xf588004
	void *c00058245c(); // Function MediaAssets.MediaPlayer.*c00058245c //  // @ game+0xf585708
	void Next(); // Function MediaAssets.MediaPlayer.Next //  // @ game+0xf585cdc
	void *4f289d015d(); // Function MediaAssets.MediaPlayer.*4f289d015d //  // @ game+0xf585108
	void *08442c62ee(); // Function MediaAssets.MediaPlayer.*08442c62ee //  // @ game+0xf584ed8
	void Play(); // Function MediaAssets.MediaPlayer.Play //  // @ game+0xf586248
	void *03f236b3f8(); // Function MediaAssets.MediaPlayer.*03f236b3f8 //  // @ game+0xf585350
	void *5274f4f48f(); // Function MediaAssets.MediaPlayer.*5274f4f48f //  // @ game+0xf585f0c
	void *4a81a89987(); // Function MediaAssets.MediaPlayer.*4a81a89987 //  // @ game+0xf586b40
	void SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking //  // @ game+0xf588054
	void *34030551de(); // Function MediaAssets.MediaPlayer.*34030551de //  // @ game+0xf58580c
	void *fcd8aa6fa6(); // Function MediaAssets.MediaPlayer.*fcd8aa6fa6 //  // @ game+0xf584b80
	void Reopen(); // Function MediaAssets.MediaPlayer.Reopen //  // @ game+0xf5863c4
	void Pause(); // Function MediaAssets.MediaPlayer.Pause //  // @ game+0xf586218
	void *26def5d039(); // Function MediaAssets.MediaPlayer.*26def5d039 //  // @ game+0xf585b14
	void IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying //  // @ game+0xf585b64
	void Previous(); // Function MediaAssets.MediaPlayer.Previous //  // @ game+0xf58627c
	void IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping //  // @ game+0xf585ac4
	void IsStopped(); // Function MediaAssets.MediaPlayer.IsStopped //  // @ game+0xf585c8c
	void *3471b7a0f2(); // Function MediaAssets.MediaPlayer.*3471b7a0f2 //  // @ game+0xf585fc4
	void *eb790c7660(); // Function MediaAssets.MediaPlayer.*eb790c7660 //  // @ game+0xf585e80
	void *f1027097f2(); // Function MediaAssets.MediaPlayer.*f1027097f2 //  // @ game+0xf58604c
	void *ee7a2147d8(); // Function MediaAssets.MediaPlayer.*ee7a2147d8 //  // @ game+0xf584a54
	void Rewind(); // Function MediaAssets.MediaPlayer.Rewind //  // @ game+0xf58643c
	void *1f582f4588(); // Function MediaAssets.MediaPlayer.*1f582f4588 //  // @ game+0xf5875bc
	void *89148bc847(); // Function MediaAssets.MediaPlayer.*89148bc847 //  // @ game+0xf584f44
	void SelectTrack(); // Function MediaAssets.MediaPlayer.SelectTrack //  // @ game+0xf58654c
	void OpenFile(); // Function MediaAssets.MediaPlayer.OpenFile //  // @ game+0xf585d00
	void *58060cc86c(); // Function MediaAssets.MediaPlayer.*58060cc86c //  // @ game+0xf5851ac
	void Close(); // Function MediaAssets.MediaPlayer.Close //  // @ game+0xf584d28
	void *863a3ee2f6(); // Function MediaAssets.MediaPlayer.*863a3ee2f6 //  // @ game+0xf586bbc
	void *d4581a640a(); // Function MediaAssets.MediaPlayer.*d4581a640a //  // @ game+0xf585394
	void *7b8a6fd9e6(); // Function MediaAssets.MediaPlayer.*7b8a6fd9e6 //  // @ game+0xf587540
	void *7c7bb97d3c(); // Function MediaAssets.MediaPlayer.*7c7bb97d3c //  // @ game+0xf5856b8
	void *b726f2d745(); // Function MediaAssets.MediaPlayer.*b726f2d745 //  // @ game+0xf587638
};

// Class MediaAssets.*2f29566f49
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*2f29566f49 : UObject {
	struct TArray<struct U*99ee1152b1*> Items; // 0x30(0x10)

	void Get(); // Function MediaAssets.*2f29566f49.Get //  // @ game+0xf584d3c
	void RemoveAt(); // Function MediaAssets.*2f29566f49.RemoveAt //  // @ game+0xf586320
	void *2d0dcf45db(); // Function MediaAssets.*2f29566f49.*2d0dcf45db //  // @ game+0xf5851fc
	void *365db09c77(); // Function MediaAssets.*2f29566f49.*365db09c77 //  // @ game+0xf5852bc
	void Add(); // Function MediaAssets.*2f29566f49.Add //  // @ game+0xf5849b8
	void Num(); // Function MediaAssets.*2f29566f49.Num //  // @ game+0xf567448
	void *e750b3f6d2(); // Function MediaAssets.*2f29566f49.*e750b3f6d2 //  // @ game+0xf585074
	void Remove(); // Function MediaAssets.*2f29566f49.Remove //  // @ game+0xf5862a0
	void Insert(); // Function MediaAssets.*2f29566f49.Insert //  // @ game+0xf5859d4
};

// Class MediaAssets.MediaSoundWave
// Size: 0x370 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct UMediaSoundWave : USoundWave {
	char pad_290[0x8]; // 0x290(0x08)
	int32 AudioTrackIndex; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x2a0(0x08)
	char pad_2A8[0xc8]; // 0x2a8(0xc8)
};

// Class MediaAssets.*99ee1152b1
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*99ee1152b1 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class MediaAssets.*b719a5e60e
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct U*b719a5e60e : U*99ee1152b1 {
	struct FName PlayerName; // 0x38(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UFileMediaSource : U*b719a5e60e {
	struct FString FilePath; // 0x40(0x10)
	bool PrecacheFile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	void *8342110867(); // Function MediaAssets.FileMediaSource.*8342110867 //  // @ game+0xf5866a0
};

// Class MediaAssets.StreamMediaSource
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct UStreamMediaSource : U*b719a5e60e {
	struct FString StreamUrl; // 0x40(0x10)
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct UPlatformMediaSource : U*99ee1152b1 {
	struct U*99ee1152b1* *99ee1152b1; // 0x38(0x08)
};

// Class MediaAssets.MediaTexture
// Size: 0x260 (Inherited: 0x180)  [layout: LECH - offset chi la uoc luong]
struct UMediaTexture : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class *4e35ac1492 AddressX; // 0x188(0x01)
	enum class *4e35ac1492 AddressY; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	bool bDelayedInitialization; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct UMediaPlayer* MediaPlayer; // 0x1a0(0x08)
	int32 VideoTrackIndex; // 0x1a8(0x04)
	char pad_1AC[0xb4]; // 0x1ac(0xb4)

	void *96844b0f2b(); // Function MediaAssets.MediaTexture.*96844b0f2b //  // @ game+0xf584dc4
	void *5b048e221d(); // Function MediaAssets.MediaTexture.*5b048e221d //  // @ game+0xf58593c
	void *d28d84997f(); // Function MediaAssets.MediaTexture.*d28d84997f //  // @ game+0xf584fdc
};

