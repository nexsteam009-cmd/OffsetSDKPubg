// Class AnimGraphRuntime.*1b7943e0b6
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct U*1b7943e0b6 : UAnimNotify {
	struct FName NotifyName; // 0x40(0x08)
};

// Class AnimGraphRuntime.*4206d5fce7
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct U*4206d5fce7 : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.*6f97664a74
// Size: 0x3a8 (Inherited: 0x3a8)  [layout: KHOP]
struct U*6f97664a74 : UAnimInstance {
};

// Class AnimGraphRuntime.*d5bc11be80
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d5bc11be80 : UBlueprintFunctionLibrary {

	void *fdc335ea81(); // Function AnimGraphRuntime.*d5bc11be80.*fdc335ea81 //  // @ game+0xeb60d18
	void *9b82a06a90(); // Function AnimGraphRuntime.*d5bc11be80.*9b82a06a90 //  // @ game+0xeb60168
};

// Class AnimGraphRuntime.*317b39b9a6
// Size: 0x110 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*317b39b9a6 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)

	void *b1ff153b18(); // Function AnimGraphRuntime.*317b39b9a6.*b1ff153b18 //  // @ game+0xeb61930
	void *066aedc81a(); // Function AnimGraphRuntime.*317b39b9a6.*066aedc81a //  // @ game+0xeb5ee88
	void OnNotifyEndReceived(); // Function AnimGraphRuntime.*317b39b9a6.OnNotifyEndReceived //  // @ game+0xeb61b94
	void OnMontageEnded(); // Function AnimGraphRuntime.*317b39b9a6.OnMontageEnded //  // @ game+0xeb619ec
	void OnNotifyBeginReceived(); // Function AnimGraphRuntime.*317b39b9a6.OnNotifyBeginReceived //  // @ game+0xeb61aa8
};

