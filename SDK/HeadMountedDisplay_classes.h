// Class HeadMountedDisplay.*4f9eb75a20
// Size: 0xa30 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*4f9eb75a20 : UPrimitiveComponent {
	int32 PlayerIndex; // 0x9d0(0x04)
	enum class EControllerHand Hand; // 0x9d4(0x01)
	char pad_9D5[0x3]; // 0x9d5(0x03)
	char bDisableLowLatencyUpdate : 1; // 0x9d8(0x01)
	char pad_9D9[0x3]; // 0x9d9(0x03)
	enum class *af92a21e91 CurrentTrackingStatus; // 0x9dc(0x01)
	char pad_9DD[0x53]; // 0x9dd(0x53)

	void *9ca0825e20(); // Function HeadMountedDisplay.*4f9eb75a20.*9ca0825e20 //  // @ game+0xe7a3c50
};

// Class HeadMountedDisplay.*ec78fab043
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ec78fab043 : UBlueprintFunctionLibrary {

	void *fc45181d4b(); // Function HeadMountedDisplay.*ec78fab043.*fc45181d4b //  // @ game+0xe7a386c
	void *22e90c448a(); // Function HeadMountedDisplay.*ec78fab043.*22e90c448a //  // @ game+0xe7a368c
	void *fdcf354948(); // Function HeadMountedDisplay.*ec78fab043.*fdcf354948 //  // @ game+0xe7a3700
	void *4b691fbc83(); // Function HeadMountedDisplay.*ec78fab043.*4b691fbc83 //  // @ game+0xe7a39b0
	void *bef1f1628f(); // Function HeadMountedDisplay.*ec78fab043.*bef1f1628f //  // @ game+0xe7a3b9c
	void *1e7998ec2c(); // Function HeadMountedDisplay.*ec78fab043.*1e7998ec2c //  // @ game+0xe7a37c4
	void *f9a8b4ada6(); // Function HeadMountedDisplay.*ec78fab043.*f9a8b4ada6 //  // @ game+0xe7a38fc
	void *735a42088e(); // Function HeadMountedDisplay.*ec78fab043.*735a42088e //  // @ game+0xe7a3b0c
	void *18cc352b52(); // Function HeadMountedDisplay.*ec78fab043.*18cc352b52 //  // @ game+0xe7a3618
	void *f55623e436(); // Function HeadMountedDisplay.*ec78fab043.*f55623e436 //  // @ game+0xe7a3ac0
	void *147dcd4b3f(); // Function HeadMountedDisplay.*ec78fab043.*147dcd4b3f //  // @ game+0xe7a3c68
	void *2fa068cd3c(); // Function HeadMountedDisplay.*ec78fab043.*2fa068cd3c //  // @ game+0xe7a3a38
};

// Class HeadMountedDisplay.*35bb1ed331
// Size: 0x290 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*35bb1ed331 : UActorComponent {
	struct FMulticastDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x208(0x10)
	struct FMulticastDelegate HMDTrackingInitializedDelegate; // 0x218(0x10)
	struct FMulticastDelegate HMDRecenteredDelegate; // 0x228(0x10)
	struct FMulticastDelegate HMDLostDelegate; // 0x238(0x10)
	struct FMulticastDelegate HMDReconnectedDelegate; // 0x248(0x10)
	struct FMulticastDelegate HMDConnectCanceledDelegate; // 0x258(0x10)
	struct FMulticastDelegate HMDPutOnHeadDelegate; // 0x268(0x10)
	struct FMulticastDelegate HMDRemovedFromHeadDelegate; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)

	void VRNotificationsDelegate__DelegateSignature(); // DelegateFunction HeadMountedDisplay.*35bb1ed331.VRNotificationsDelegate__DelegateSignature //  // @ game+0x43bab4
};

