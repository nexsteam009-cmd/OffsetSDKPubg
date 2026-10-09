// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8 {
	Invalid,
	Closed,
	Pending,
	Open,
	EBeaconConnectionState_MAX,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8 {
	NoResult,
	RequestPending,
	GeneralError,
	PartyLimitReached,
	IncorrectPlayerCount,
	RequestTimedOut,
	ReservationDuplicate,
	ReservationNotFound,
	ReservationAccepted,
	ReservationDenied,
	ReservationDenied_Banned,
	ReservationRequestCanceled,
	ReservationInvalid,
	BadSessionId,
	EPartyReservationResult_MAX,
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8 {
	NonePending,
	ExistingSessionReservation,
	ReservationUpdate,
	EmptyServerReservation,
	Reconnect,
	Abandon,
	EClientRequestType_MAX,
};

// ScriptStruct OnlineSubsystemUtils.*37d784568b
// Size: 0x108 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*37d784568b {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct OnlineSubsystemUtils.*1c70775bcc
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*1c70775bcc {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FUniqueNetIdRepl *193b0e5ead; // 0x08(0x18)
	struct TArray<struct F*c2fe50c664> *7b7d792065; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemUtils.*c2fe50c664
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c2fe50c664 {
	struct FUniqueNetIdRepl UniqueId; // 0x00(0x18)
	struct FString *7ff9a515f0; // 0x18(0x10)
	float ElapsedTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FPIELoginSettingsInternal {
	struct FString ID; // 0x00(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<bool> TokenBytes; // 0x30(0x10)
};

