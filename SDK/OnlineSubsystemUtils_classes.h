// Class OnlineSubsystemUtils.IpConnection
// Size: 0x658c8 (Inherited: 0x658a8)  [layout: LECH - offset chi la uoc luong]
struct UIpConnection : UNetConnection {
	char pad_658A8[0x20]; // 0x658a8(0x20)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x500 (Inherited: 0x4d0)  [layout: KHOP]
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x4d0(0x01)
	char AllowPlayerPortUnreach : 1; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	uint32 MaxPortCountToTry; // 0x4d4(0x04)
	char pad_4D8[0x18]; // 0x4d8(0x18)
	uint32 ServerDesiredSocketReceiveBufferBytes; // 0x4f0(0x04)
	uint32 ServerDesiredSocketSendBufferBytes; // 0x4f4(0x04)
	uint32 ClientDesiredSocketReceiveBufferBytes; // 0x4f8(0x04)
	uint32 ClientDesiredSocketSendBufferBytes; // 0x4fc(0x04)
};

// Class OnlineSubsystemUtils.*7110e6f3d3
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*7110e6f3d3 : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(); // Function OnlineSubsystemUtils.*7110e6f3d3.GetCachedAchievementProgress //  // @ game+0xf7f8338
	void GetCachedAchievementDescription(); // Function OnlineSubsystemUtils.*7110e6f3d3.GetCachedAchievementDescription //  // @ game+0xf7f800c
};

// Class OnlineSubsystemUtils.*85f159886d
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*85f159886d : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void *550b295563(); // Function OnlineSubsystemUtils.*85f159886d.*550b295563 //  // @ game+0xf7f6e38
	void *f22339ef90(); // Function OnlineSubsystemUtils.*85f159886d.*f22339ef90 //  // @ game+0xf7f6d64
};

// Class OnlineSubsystemUtils.*ebfbf0e2fa
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ebfbf0e2fa : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *0f737a93d9(); // Function OnlineSubsystemUtils.*ebfbf0e2fa.*0f737a93d9 //  // @ game+0xf7f9e8c
};

// Class OnlineSubsystemUtils.*51db3dd30d
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*51db3dd30d : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void ConnectToService(); // Function OnlineSubsystemUtils.*51db3dd30d.ConnectToService //  // @ game+0xf7f708c
};

// Class OnlineSubsystemUtils.*2a63224f4f
// Size: 0x100 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2a63224f4f : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	void CreateSession(); // Function OnlineSubsystemUtils.*2a63224f4f.CreateSession //  // @ game+0xf7f763c
};

// Class OnlineSubsystemUtils.*519bd0bd44
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*519bd0bd44 : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x60]; // 0x50(0x60)

	void DestroySession(); // Function OnlineSubsystemUtils.*519bd0bd44.DestroySession //  // @ game+0xf7f7764
};

// Class OnlineSubsystemUtils.*5fbf18089e
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*5fbf18089e : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	void *8925288000(); // Function OnlineSubsystemUtils.*5fbf18089e.*8925288000 //  // @ game+0xf7f781c
};

// Class OnlineSubsystemUtils.*930c704ebf
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*930c704ebf : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *83e7eb3897(); // Function OnlineSubsystemUtils.*930c704ebf.*83e7eb3897 //  // @ game+0xf7f7aa8
};

// Class OnlineSubsystemUtils.*def0db41ea
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*def0db41ea : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *ad3080a779(); // Function OnlineSubsystemUtils.*def0db41ea.*ad3080a779 //  // @ game+0xf7f8ba0
	void FindSessions(); // Function OnlineSubsystemUtils.*def0db41ea.FindSessions //  // @ game+0xf7f7ce4
	void *7fc337b80a(); // Function OnlineSubsystemUtils.*def0db41ea.*7fc337b80a //  // @ game+0xf7f882c
	void *6b2525490b(); // Function OnlineSubsystemUtils.*def0db41ea.*6b2525490b //  // @ game+0xf7f903c
	void *166721846b(); // Function OnlineSubsystemUtils.*def0db41ea.*166721846b //  // @ game+0xf7f84b4
};

// Class OnlineSubsystemUtils.*b080ec1bc4
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*b080ec1bc4 : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	void *54f350393f(); // Function OnlineSubsystemUtils.*b080ec1bc4.*54f350393f //  // @ game+0xf7f7e0c
};

// Class OnlineSubsystemUtils.*87771dce66
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*87771dce66 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	void *3f950c07ea(); // Function OnlineSubsystemUtils.*87771dce66.*3f950c07ea //  // @ game+0xf7f71fc
};

// Class OnlineSubsystemUtils.*f74f235c25
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*f74f235c25 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *97d60814b2(); // Function OnlineSubsystemUtils.*f74f235c25.*97d60814b2 //  // @ game+0xf7f73b4
};

// Class OnlineSubsystemUtils.*6b70df3b2c
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*6b70df3b2c : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *4076fa545c(); // Function OnlineSubsystemUtils.*6b70df3b2c.*4076fa545c //  // @ game+0xf7f7494
};

// Class OnlineSubsystemUtils.*df36dd2e5f
// Size: 0x1b0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*df36dd2e5f : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x160]; // 0x50(0x160)

	void JoinSession(); // Function OnlineSubsystemUtils.*df36dd2e5f.JoinSession //  // @ game+0xf7f92b8
};

// Class OnlineSubsystemUtils.*d4bea6b328
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d4bea6b328 : UBlueprintFunctionLibrary {

	void *9bacfc2dce(); // Function OnlineSubsystemUtils.*d4bea6b328.*9bacfc2dce //  // @ game+0xf7fa8ec
};

// Class OnlineSubsystemUtils.*eb3d751ef8
// Size: 0xa0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*eb3d751ef8 : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	void *1d561099aa(); // Function OnlineSubsystemUtils.*eb3d751ef8.*1d561099aa //  // @ game+0xf7f7144
};

// Class OnlineSubsystemUtils.*1efab0a7fe
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*1efab0a7fe : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	void *66624e76fd(); // Function OnlineSubsystemUtils.*1efab0a7fe.*66624e76fd //  // @ game+0xf7f7584
};

// Class OnlineSubsystemUtils.*feae3b7972
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*feae3b7972 : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	void Logout(); // Function OnlineSubsystemUtils.*feae3b7972.Logout //  // @ game+0xf7f93fc
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x428 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AOnlineBeacon : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	float BeaconConnectionInitialTimeout; // 0x408(0x04)
	float BeaconConnectionTimeout; // 0x40c(0x04)
	struct UNetDriver* NetDriver; // 0x410(0x08)
	char pad_418[0x10]; // 0x418(0x10)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x4b0 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* *be3b8ad23b; // 0x428(0x08)
	struct UNetConnection* *7d93f49791; // 0x430(0x08)
	enum class EBeaconConnectionState *8477b2608f; // 0x438(0x01)
	char pad_439[0x77]; // 0x439(0x77)

	void *9ec50a7c04(); // Function OnlineSubsystemUtils.OnlineBeaconClient.*9ec50a7c04 //  // @ game+0xdae4228
};

// Class OnlineSubsystemUtils.*2e85b36c13
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2e85b36c13 : UObject {
	struct FName SessionName; // 0x30(0x08)
	int32 *833c4986b4; // 0x38(0x04)
	int32 *780acb1267; // 0x3c(0x04)
	int32 NumTeams; // 0x40(0x04)
	int32 *79ddf43b35; // 0x44(0x04)
	struct FName *865539f788; // 0x48(0x08)
	int32 *d5fb10189a; // 0x50(0x04)
	int32 *cf417f8933; // 0x54(0x04)
	struct TArray<struct F*1c70775bcc> *f64a493ace; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x5e0 (Inherited: 0x4b0)  [layout: LECH - offset chi la uoc luong]
struct APartyBeaconClient : AOnlineBeaconClient {
	char pad_4B0[0xc0]; // 0x4b0(0xc0)
	struct FString *584f846497; // 0x570(0x10)
	struct F*1c70775bcc *52c4360f96; // 0x580(0x30)
	enum class EClientRequestType RequestType; // 0x5b0(0x01)
	bool *f16437ed4d; // 0x5b1(0x01)
	bool *f5258f31e2; // 0x5b2(0x01)
	char pad_5B3[0x2d]; // 0x5b3(0x2d)

	void *8f92ab3567(); // Function OnlineSubsystemUtils.PartyBeaconClient.*8f92ab3567 //  // @ game+0xf7f6f10
	void *2cf20503fe(); // Function OnlineSubsystemUtils.PartyBeaconClient.*2cf20503fe //  // @ game+0xf3d6954
	void *6499c07d0b(); // Function OnlineSubsystemUtils.PartyBeaconClient.*6499c07d0b //  // @ game+0xf7f9934
	void *73454ac69f(); // Function OnlineSubsystemUtils.PartyBeaconClient.*73454ac69f //  // @ game+0xf7f6f90
	void *581749baaa(); // Function OnlineSubsystemUtils.PartyBeaconClient.*581749baaa //  // @ game+0xf7f7010
	void *461a9dea49(); // Function OnlineSubsystemUtils.PartyBeaconClient.*461a9dea49 //  // @ game+0xf7f9b84
	void *179551f70c(); // Function OnlineSubsystemUtils.PartyBeaconClient.*179551f70c //  // @ game+0xf7f97f8
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x4b0 (Inherited: 0x4b0)  [layout: KHOP]
struct ATestBeaconClient : AOnlineBeaconClient {

	void *47a10d00ff(); // Function OnlineSubsystemUtils.TestBeaconClient.*47a10d00ff //  // @ game+0xdb45604
	void *458d20ad13(); // Function OnlineSubsystemUtils.TestBeaconClient.*458d20ad13 //  // @ game+0xf7f98e8
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x4e0 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct AOnlineBeaconHost : AOnlineBeacon {
	int32 ListenPort; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct AOnlineBeaconClient*> *66a1c84bd2; // 0x430(0x10)
	char pad_440[0xa0]; // 0x440(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x428 (Inherited: 0x400)  [layout: KHOP]
struct AOnlineBeaconHostObject : AActor {
	struct FString *a5b2fd0355; // 0x400(0x10)
	struct UClass* *69722da652; // 0x410(0x08)
	struct TArray<struct AOnlineBeaconClient*> *66a1c84bd2; // 0x418(0x10)
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x580 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct U*2e85b36c13* State; // 0x428(0x08)
	char pad_430[0x140]; // 0x430(0x140)
	bool bLogoutOnSessionTimeout; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	float SessionTimeoutSecs; // 0x574(0x04)
	float TravelSessionTimeoutSecs; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x428 (Inherited: 0x428)  [layout: KHOP]
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x180 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UOnlineEngineInterfaceImpl : U*2754b17ba2 {
	struct FName VoiceSubsystemNameOverride; // 0x30(0x08)
	char pad_38[0x148]; // 0x38(0x148)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x58 (Inherited: 0x40)  [layout: KHOP]
struct UOnlinePIESettings : U*ba332f0435 {
	bool bOnlinePIEEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x48(0x10)
};

// Class OnlineSubsystemUtils.*1fbd847cef
// Size: 0x310 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*1fbd847cef : UOnlineSession {
	char pad_30[0x2d0]; // 0x30(0x2d0)
	bool bIsFromInvite; // 0x300(0x01)
	bool *aec2473c92; // 0x301(0x01)
	char pad_302[0xe]; // 0x302(0x0e)
};

// Class OnlineSubsystemUtils.*7e3e83dc95
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*7e3e83dc95 : U*ef26176ef7 {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	void *ae7169bedb(); // Function OnlineSubsystemUtils.*7e3e83dc95.*ae7169bedb //  // @ game+0xf7f94b4
};

// Class OnlineSubsystemUtils.*0ce8be6634
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*0ce8be6634 : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)

	void *aced73563d(); // Function OnlineSubsystemUtils.*0ce8be6634.*aced73563d //  // @ game+0xf7f9dd4
};

// Class OnlineSubsystemUtils.*ac685e350b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ac685e350b : UBlueprintFunctionLibrary {

	void GetMyPlayerIndex(); // Function OnlineSubsystemUtils.*ac685e350b.GetMyPlayerIndex //  // @ game+0xf7f894c
	void GetIsMyTurn(); // Function OnlineSubsystemUtils.*ac685e350b.GetIsMyTurn //  // @ game+0xf7f85d8
	void *b94d24fe64(); // Function OnlineSubsystemUtils.*ac685e350b.*b94d24fe64 //  // @ game+0xf7f8cc0
	void *2c6045f270(); // Function OnlineSubsystemUtils.*ac685e350b.*2c6045f270 //  // @ game+0xf7f970c
};

