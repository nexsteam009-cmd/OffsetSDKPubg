// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGeometryCache : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x38(0x10)
	struct TArray<struct U*c34e80f0d1*> Tracks; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AGeometryCacheActor : AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x400(0x08)

	void *0f1907ac99(); // Function GeometryCache.GeometryCacheActor.*0f1907ac99 //  // @ game+0xdb421c8
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0xb50 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct UGeometryCacheComponent : UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0xad8(0x08)
	bool bRunning; // 0xae0(0x01)
	bool bLooping; // 0xae1(0x01)
	char pad_AE2[0x2]; // 0xae2(0x02)
	float StartTimeOffset; // 0xae4(0x04)
	float PlaybackSpeed; // 0xae8(0x04)
	int32 *def1eca623; // 0xaec(0x04)
	float ElapsedTime; // 0xaf0(0x04)
	char pad_AF4[0x5c]; // 0xaf4(0x5c)

	void *23e8c623e6(); // Function GeometryCache.GeometryCacheComponent.*23e8c623e6 //  // @ game+0xed42bcc
	void *8698486c04(); // Function GeometryCache.GeometryCacheComponent.*8698486c04 //  // @ game+0xed42bec
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause //  // @ game+0xed42c54
	void SetLooping(); // Function GeometryCache.GeometryCacheComponent.SetLooping //  // @ game+0xed42d98
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop //  // @ game+0xed441e4
	void SetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed //  // @ game+0xed42ee0
	void SetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset //  // @ game+0xed43870
	void IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying //  // @ game+0xed42c1c
	void SetGeometryCache(); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache //  // @ game+0xed42d08
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play //  // @ game+0xed42c74
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart //  // @ game+0xed42c94
	void *cc39c614fd(); // Function GeometryCache.GeometryCacheComponent.*cc39c614fd //  // @ game+0xed42cdc
	void IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping //  // @ game+0xed42c04
	void *61ab1295b3(); // Function GeometryCache.GeometryCacheComponent.*61ab1295b3 //  // @ game+0xed42cbc
	void *07228ab95e(); // Function GeometryCache.GeometryCacheComponent.*07228ab95e //  // @ game+0xed42c34
};

// Class GeometryCache.*c34e80f0d1
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*c34e80f0d1 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class GeometryCache.*ea16958ff8
// Size: 0x80 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*ea16958ff8 : U*c34e80f0d1 {
	uint32 *14748fbf2f; // 0x58(0x04)
	char pad_5C[0x24]; // 0x5c(0x24)

	void *865d537d73(); // Function GeometryCache.*ea16958ff8.*865d537d73 //  // @ game+0xed42194
};

// Class GeometryCache.*7ac0381c82
// Size: 0xa8 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*7ac0381c82 : U*c34e80f0d1 {
	char pad_58[0x50]; // 0x58(0x50)

	void *3c520944fd(); // Function GeometryCache.*7ac0381c82.*3c520944fd //  // @ game+0xed42e10
};

// Class GeometryCache.*7e617bbc23
// Size: 0xa8 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*7e617bbc23 : U*c34e80f0d1 {
	char pad_58[0x50]; // 0x58(0x50)

	void *3c520944fd(); // Function GeometryCache.*7e617bbc23.*3c520944fd //  // @ game+0xed42e10
};

