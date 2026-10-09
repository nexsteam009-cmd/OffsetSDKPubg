// Class AkAudio.*be2f3c565d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*be2f3c565d : UInterface {
};

// Class AkAudio.AkAmbientSound
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct AAkAmbientSound : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	struct UAkComponent* AkComponent; // 0x410(0x08)
	bool AutoPost; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float AutoPlayDistance; // 0x41c(0x04)

	void *9744491b16(); // Function AkAudio.AkAmbientSound.*9744491b16 //  // @ game+0xf81c9b0
	void *9c5f393972(); // Function AkAudio.AkAmbientSound.*9c5f393972 //  // @ game+0xf8177b8
	void *b782caa89c(); // Function AkAudio.AkAmbientSound.*b782caa89c //  // @ game+0xf81ce7c
};

// Class AkAudio.*8ecdbb2991
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*8ecdbb2991 : UObject {
	bool AutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class AkAudio.AkAudioEvent
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UAkAudioEvent : UObject {
	struct U*8ecdbb2991* RequiredBank; // 0x30(0x08)
	float MaxAttenuationRadius; // 0x38(0x04)
	bool IsInfinite; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinimumDuration; // 0x40(0x04)
	float MaximumDuration; // 0x44(0x04)
};

// Class AkAudio.*d7cc0c933f
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*d7cc0c933f : UObject {
	struct U*8ecdbb2991* RequiredBank; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class AkAudio.AkComponent
// Size: 0x6d0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UAkComponent : USceneComponent {
	char pad_480[0x8]; // 0x480(0x08)
	bool *ae9529bcb2; // 0x488(0x01)
	bool *ba3d8ec883; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float AttenuationScalingFactor; // 0x48c(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x490(0x08)
	struct FString EventName; // 0x498(0x10)
	char pad_4A8[0x4]; // 0x4a8(0x04)
	bool *87e8c6d5b8; // 0x4ac(0x01)
	char pad_4AD[0x87]; // 0x4ad(0x87)
	struct F*98cc2b43f8 *45629645d5; // 0x534(0x10)
	char pad_544[0xa8]; // 0x544(0xa8)
	float *966cf0d12a; // 0x5ec(0x04)
	char pad_5F0[0xe0]; // 0x5f0(0xe0)

	void Stop(); // Function AkAudio.AkComponent.Stop //  // @ game+0xf81ccd8
	void GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius //  // @ game+0xf81778c
	void *95c570293f(); // Function AkAudio.AkComponent.*95c570293f //  // @ game+0x1191e48
	void *f49447f81c(); // Function AkAudio.AkComponent.*f49447f81c //  // @ game+0xf81ce98
	void *b61cda9189(); // Function AkAudio.AkComponent.*b61cda9189 //  // @ game+0xf819bac
	void *9c5f393972(); // Function AkAudio.AkComponent.*9c5f393972 //  // @ game+0xf8177e4
	void SetActiveListeners(); // Function AkAudio.AkComponent.SetActiveListeners //  // @ game+0xf8191b8
	void *4f4cdfcb42(); // Function AkAudio.AkComponent.*4f4cdfcb42 //  // @ game+0xf816cac
	void *52f66f14b0(); // Function AkAudio.AkComponent.*52f66f14b0 //  // @ game+0xf817808
	void *b08d6cb0e3(); // Function AkAudio.AkComponent.*b08d6cb0e3 //  // @ game+0xf81d498
	void *5785530b99(); // Function AkAudio.AkComponent.*5785530b99 //  // @ game+0xf81807c
	void *4d62f6eeb4(); // Function AkAudio.AkComponent.*4d62f6eeb4 //  // @ game+0xf817d34
	void SetOutputBusVolume(); // Function AkAudio.AkComponent.SetOutputBusVolume //  // @ game+0xf81a520
	void PostTrigger(); // Function AkAudio.AkComponent.PostTrigger //  // @ game+0xf818cb8
	void *7ade20192a(); // Function AkAudio.AkComponent.*7ade20192a //  // @ game+0xf81c32c
	void SetSwitch(); // Function AkAudio.AkComponent.SetSwitch //  // @ game+0x112593c
	void UseReverbVolumes(); // Function AkAudio.AkComponent.UseReverbVolumes //  // @ game+0xf81d2f0
	void *222bfd3560(); // Function AkAudio.AkComponent.*222bfd3560 //  // @ game+0xf817efc
	void *4cb44e5a53(); // Function AkAudio.AkComponent.*4cb44e5a53 //  // @ game+0xf81d278
	void SetAttenuationScalingFactor(); // Function AkAudio.AkComponent.SetAttenuationScalingFactor //  // @ game+0xf819234
};

// Class AkAudio.*870a6d8f18
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*870a6d8f18 : UBlueprintFunctionLibrary {

	void PostEventAtLocation(); // Function AkAudio.*870a6d8f18.PostEventAtLocation //  // @ game+0xf8182d0
	void *0f2bdfa869(); // Function AkAudio.*870a6d8f18.*0f2bdfa869 //  // @ game+0xf81ce10
	void PostTrigger(); // Function AkAudio.*870a6d8f18.PostTrigger //  // @ game+0xf818ea8
	void *95c570293f(); // Function AkAudio.*870a6d8f18.*95c570293f //  // @ game+0xf81b84c
	void SetSwitch(); // Function AkAudio.*870a6d8f18.SetSwitch //  // @ game+0xf81c3a4
	void *0a39b725cf(); // Function AkAudio.*870a6d8f18.*0a39b725cf //  // @ game+0xf81cf48
	void *e37c1fa86c(); // Function AkAudio.*870a6d8f18.*e37c1fa86c //  // @ game+0xf817d0c
	void *eb13a3bc19(); // Function AkAudio.*870a6d8f18.*eb13a3bc19 //  // @ game+0xf81cb68
	void StopActor(); // Function AkAudio.*870a6d8f18.StopActor //  // @ game+0xf81ccec
	void *abdf10924f(); // Function AkAudio.*870a6d8f18.*abdf10924f //  // @ game+0xf817620
	void PostEventAttached(); // Function AkAudio.*870a6d8f18.PostEventAttached //  // @ game+0xf8187dc
	void *9504477c5e(); // Function AkAudio.*870a6d8f18.*9504477c5e //  // @ game+0xf818ad4
	void SetOutputBusVolume(); // Function AkAudio.*870a6d8f18.SetOutputBusVolume //  // @ game+0xf81ae94
	void UseReverbVolumes(); // Function AkAudio.*870a6d8f18.UseReverbVolumes //  // @ game+0xf81d368
	void StopAll(); // Function AkAudio.*870a6d8f18.StopAll //  // @ game+0xf81cde4
	void PostEvent(); // Function AkAudio.*870a6d8f18.PostEvent //  // @ game+0xf8180b0
	void LoadBanks(); // Function AkAudio.*870a6d8f18.LoadBanks //  // @ game+0xf817b50
	void StartOutputCapture(); // Function AkAudio.*870a6d8f18.StartOutputCapture //  // @ game+0xf81c9f8
	void *933b43ffec(); // Function AkAudio.*870a6d8f18.*933b43ffec //  // @ game+0xf818574
	void *a9f9215c92(); // Function AkAudio.*870a6d8f18.*a9f9215c92 //  // @ game+0xf81cf18
	void GetAkComponent(); // Function AkAudio.*870a6d8f18.GetAkComponent //  // @ game+0xf817648
	void *02945d9c50(); // Function AkAudio.*870a6d8f18.*02945d9c50 //  // @ game+0xf81c280
	void *6e4d3fe8f1(); // Function AkAudio.*870a6d8f18.*6e4d3fe8f1 //  // @ game+0xf81d108
	void *3eda5ccd2c(); // Function AkAudio.*870a6d8f18.*3eda5ccd2c //  // @ game+0x479f5c
	void *b06f5b4ea5(); // Function AkAudio.*870a6d8f18.*b06f5b4ea5 //  // @ game+0xf816b34
	void *b7c9658092(); // Function AkAudio.*870a6d8f18.*b7c9658092 //  // @ game+0xf81c944
	void *2f4c81cdc6(); // Function AkAudio.*870a6d8f18.*2f4c81cdc6 //  // @ game+0xf8179e0
	void *5740fb724a(); // Function AkAudio.*870a6d8f18.*5740fb724a //  // @ game+0xf817820
	void StopOutputCapture(); // Function AkAudio.*870a6d8f18.StopOutputCapture //  // @ game+0xdb23530
};

// Class AkAudio.AkReverbVolume
// Size: 0x470 (Inherited: 0x438)  [layout: KHOP]
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct U*d7cc0c933f* AuxBus; // 0x440(0x08)
	struct FString AuxBusName; // 0x448(0x10)
	float SendLevel; // 0x458(0x04)
	float FadeRate; // 0x45c(0x04)
	float Priority; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct AAkReverbVolume* *c4f50a2722; // 0x468(0x08)
};

// Class AkAudio.AkSettings
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAkSettings : UObject {
	bool MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x48(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x58(0x10)
	bool SuppressWwiseProjectPathWarnings; // 0x68(0x01)
	char pad_69[0x3f]; // 0x69(0x3f)
};

// Class AkAudio.AkSoundVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AAkSoundVolume : AActor {
	struct U*d1c872f300* SoundVolumeComponent; // 0x400(0x08)
};

// Class AkAudio.*a22eb73efe
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct U*a22eb73efe : USceneComponent {
};

// Class AkAudio.*d1c872f300
// Size: 0x5e0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*d1c872f300 : U*a22eb73efe {
	struct F*ceaa727dc6 Struct; // 0x480(0x158)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// Class AkAudio.*ce031be194
// Size: 0x570 (Inherited: 0x480)  [layout: KHOP]
struct U*ce031be194 : U*a22eb73efe {
	struct F*63bafd5ecb Struct; // 0x480(0xf0)
};

// Class AkAudio.AkSoundVolumeManager
// Size: 0x1e8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UAkSoundVolumeManager : U*c82d443ff2 {
	char pad_38[0x150]; // 0x38(0x150)
	struct TMap<struct UObject*, struct F*256cb65f77> *354bfa96e6; // 0x188(0x50)
	char pad_1D8[0x10]; // 0x1d8(0x10)
};

// Class AkAudio.AkSoundVolumePortal
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AAkSoundVolumePortal : AActor {
	struct U*ce031be194* SoundVolumePortalComponent; // 0x400(0x08)
};

// Class AkAudio.*de72748a59
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct U*de72748a59 : UDataAsset {
	struct TArray<struct F*e4bb37c27c> *7c039bcd67; // 0x38(0x10)
};

// Class AkAudio.AkSoundVolumesContainerComponent
// Size: 0x270 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UAkSoundVolumesContainerComponent : UActorComponent {
	struct TArray<struct F*ceaa727dc6> Volumes; // 0x208(0x10)
	struct TArray<struct F*63bafd5ecb> Portals; // 0x218(0x10)
	struct TArray<struct F*93f152ed83> *ee2bfbf660; // 0x228(0x10)
	struct TArray<struct F*69c5314679> *8d58063a93; // 0x238(0x10)
	char pad_248[0x28]; // 0x248(0x28)
};

// Class AkAudio.*7553b640bb
// Size: 0xb0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*7553b640bb : U*e2969d165e {
	struct TArray<struct F*544c092255> Events; // 0x98(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*f9606019e2
// Size: 0xb0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*f9606019e2 : U*fcec9d12d0 {
	struct FString Param; // 0x98(0x10)
	char bPlayOnReverse : 1; // 0xa8(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class AkAudio.*463185628a
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*463185628a : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*6d18edb157
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*6d18edb157 : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AkAudio.*04077d2109
// Size: 0xf0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*04077d2109 : UMovieSceneSection {
	struct UAkAudioEvent* Event; // 0xd0(0x08)
	struct FString EventName; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class AkAudio.*5037ec7cdc
// Size: 0x160 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*5037ec7cdc : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FString Name; // 0xd8(0x10)
	struct FRichCurve *13ad54037f; // 0xe8(0x70)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class AkAudio.*43dc93ffc6
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct U*43dc93ffc6 : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
	char *a257d07ec7 : 1; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneAkAudioEventTrack : U*43dc93ffc6 {
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct UMovieSceneAkAudioRTPCTrack : U*43dc93ffc6 {
};

