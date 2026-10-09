// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor,
	ExternalActor,
	Component,
	EActorSequenceObjectReferenceType_MAX,
};

// ScriptStruct ActorSequence.*fb28f0edc1
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*fb28f0edc1 {
	struct TArray<struct FGuid> *db452d6b34; // 0x00(0x10)
	struct TArray<struct F*8f297fb6b9> References; // 0x10(0x10)
};

// ScriptStruct ActorSequence.*8f297fb6b9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8f297fb6b9 {
	struct TArray<struct F*7ce4adbbc0> Array; // 0x00(0x10)
};

// ScriptStruct ActorSequence.*7ce4adbbc0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*7ce4adbbc0 {
	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid *2bbb2ec428; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *aed28a0d77; // 0x18(0x10)
};

