// ScriptStruct LevelSequence.*e3f605d05e
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*e3f605d05e {
	struct UObject* *f9742e8914; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ComponentName; // 0x20(0x10)
	struct UObject* *4bbf11eca0; // 0x30(0x08)
};

// ScriptStruct LevelSequence.*62acdafd1a
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*62acdafd1a {
	struct TMap<struct FGuid, struct F*5a1d484453> *c5c45b252b; // 0x00(0x50)
};

// ScriptStruct LevelSequence.*5a1d484453
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5a1d484453 {
	struct TArray<struct F*662d17e5bf> References; // 0x00(0x10)
};

// ScriptStruct LevelSequence.*662d17e5bf
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*662d17e5bf {
	struct FString PackageName; // 0x00(0x10)
	struct FString ObjectPath; // 0x10(0x10)
};

// ScriptStruct LevelSequence.*a6e2322f2f
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a6e2322f2f {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct LevelSequence.*82a3fd3d3c
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*82a3fd3d3c {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FLevelSequencePlayerSnapshot {
	struct FText MasterName; // 0x00(0x18)
	float MasterTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText CurrentShotName; // 0x20(0x18)
	float CurrentShotLocalTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCameraComponent* CameraComponent; // 0x40(0x08)
	struct FLevelSequenceSnapshotSettings Settings; // 0x48(0x08)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FLevelSequenceSnapshotSettings {
	bool ZeroPadAmount; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrameRate; // 0x04(0x04)
};

// ScriptStruct LevelSequence.*cb19c045f2
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cb19c045f2 {
	char pad_0[0x1]; // 0x00(0x01)
};

