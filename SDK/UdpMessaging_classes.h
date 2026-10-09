// Class UdpMessaging.UdpMessagingSettings
// Size: 0xa8 (Inherited: 0x30)  [layout: KHOP]
struct UUdpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString UnicastEndpoint; // 0x38(0x10)
	struct FString MulticastEndpoint; // 0x48(0x10)
	bool MulticastTimeToLive; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FString> StaticEndpoints; // 0x60(0x10)
	bool EnableTunnel; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString TunnelUnicastEndpoint; // 0x78(0x10)
	struct FString TunnelMulticastEndpoint; // 0x88(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x98(0x10)
};

