// Class TcpMessaging.TcpMessagingSettings
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ListenEndpoint; // 0x38(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x48(0x10)
	int32 ConnectionRetryDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

