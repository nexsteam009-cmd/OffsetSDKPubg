// Enum DynamicFeatures.EDynamicFeatureTargetState
enum class EDynamicFeatureTargetState : uint8 {
	Registered,
	Activated,
	Count,
	EDynamicFeatureTargetState_MAX,
};

// Enum DynamicFeatures.EDynamicFeatureEventType
enum class EDynamicFeatureEventType : uint8 {
	None,
	Receiver_Added,
	Receiver_Removed,
	ExtensionHandler_Added,
	ExtensionHandler_Removed,
	Max,
	EDynamicFeatureEventType_MAX,
};

// ScriptStruct DynamicFeatures.*dbbbf544c2
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dbbbf544c2 {
	char pad_0[0x90]; // 0x00(0x90)
	struct UDynamicFeatureData* DynamicFeatureData; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct DynamicFeatures.*20698ef389
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*20698ef389 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct DynamicFeatures.*04b3d89308
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*04b3d89308 {
	struct UClass* *e445f27f77; // 0x00(0x20)
	struct UClass* *e93c61a55d; // 0x20(0x20)
	char *a5c2c85e38 : 1; // 0x40(0x01)
	char *f59b5dc6ed : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

