// Class AudioMixer.*6a6bc3261d
// Size: 0xc0 (Inherited: 0x48)  [layout: KHOP]
struct U*6a6bc3261d : U*5986260596 {
	char pad_48[0x50]; // 0x48(0x50)
	struct F*2e1e83ac92 Settings; // 0x98(0x28)

	void *ae26eabc1a(); // Function AudioMixer.*6a6bc3261d.*ae26eabc1a //  // @ game+0xf5cd078
};

// Class AudioMixer.*d6c69b114c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d6c69b114c : UBlueprintFunctionLibrary {

	void *48cc828ea6(); // Function AudioMixer.*d6c69b114c.*48cc828ea6 //  // @ game+0xf5ccd5c
	void *7d117c65cf(); // Function AudioMixer.*d6c69b114c.*7d117c65cf //  // @ game+0xf5ccad0
	void *8145afe4dc(); // Function AudioMixer.*d6c69b114c.*8145afe4dc //  // @ game+0xf5cce68
	void *74fc458803(); // Function AudioMixer.*d6c69b114c.*74fc458803 //  // @ game+0xf5cc978
	void *20fa53ac0c(); // Function AudioMixer.*d6c69b114c.*20fa53ac0c //  // @ game+0xf5ccbc0
	void *370d1c4784(); // Function AudioMixer.*d6c69b114c.*370d1c4784 //  // @ game+0xf5ccf50
	void *8bc96d7cd8(); // Function AudioMixer.*d6c69b114c.*8bc96d7cd8 //  // @ game+0xf5ccc60
};

// Class AudioMixer.*434efe789a
// Size: 0xd0 (Inherited: 0x48)  [layout: KHOP]
struct U*434efe789a : U*5986260596 {
	char pad_48[0x58]; // 0x48(0x58)
	struct F*ed47d47f91 Settings; // 0xa0(0x30)

	void *ae26eabc1a(); // Function AudioMixer.*434efe789a.*ae26eabc1a //  // @ game+0xf5cd160
	void *1f96fdcfec(); // Function AudioMixer.*434efe789a.*1f96fdcfec //  // @ game+0xf5cd424
};

// Class AudioMixer.*a2e5815c15
// Size: 0x90 (Inherited: 0x48)  [layout: KHOP]
struct U*a2e5815c15 : U*5986260596 {
	char pad_48[0x38]; // 0x48(0x38)
	struct F*63b2b60a67 Settings; // 0x80(0x10)

	void *ae26eabc1a(); // Function AudioMixer.*a2e5815c15.*ae26eabc1a //  // @ game+0xf5cd250
};

// Class AudioMixer.*84f91c4659
// Size: 0x330 (Inherited: 0x310)  [layout: LECH - offset chi la uoc luong]
struct U*84f91c4659 : U*8434e9486a {
	char pad_310[0x20]; // 0x310(0x20)
};

// Class AudioMixer.*c43986a32f
// Size: 0x640 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*c43986a32f : USceneComponent {
	char *5161b69f6a : 1; // 0x478(0x01)
	char *356eb9e97a : 1; // 0x478(0x01)
	char bAllowSpatialization : 1; // 0x478(0x01)
	char bOverrideAttenuation : 1; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct USoundAttenuation* AttenuationSettings; // 0x480(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x488(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x5b8(0x08)
	struct USoundClass* SoundClass; // 0x5c0(0x08)
	struct U*ade6a5ea24* SourceEffectChain; // 0x5c8(0x08)
	float DefaultMasterReverbSendAmount; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct USoundSubmix* SoundSubmix; // 0x5d8(0x08)
	struct TArray<struct F*88c06435a1> SoundSubmixSends; // 0x5e0(0x10)
	char pad_5F0[0x8]; // 0x5f0(0x08)
	struct U*84f91c4659* Synth; // 0x5f8(0x08)
	struct UAudioComponent* AudioComponent; // 0x600(0x08)
	char pad_608[0x38]; // 0x608(0x38)

	void Stop(); // Function AudioMixer.*c43986a32f.Stop //  // @ game+0xf5ce798
	void Start(); // Function AudioMixer.*c43986a32f.Start //  // @ game+0xf5ce784
	void *b096c37a80(); // Function AudioMixer.*c43986a32f.*b096c37a80 //  // @ game+0xf5cddd4
	void IsPlaying(); // Function AudioMixer.*c43986a32f.IsPlaying //  // @ game+0xf5ccd18
};

