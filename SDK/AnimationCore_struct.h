// ScriptStruct AnimationCore.*1aa677a8f8
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1aa677a8f8 {
	struct F*f24408308d Operator; // 0x00(0x0d)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName SourceNode; // 0x10(0x08)
	struct FName TargetNode; // 0x18(0x08)
	float weight; // 0x20(0x04)
	bool bMaintainOffset; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AnimationCore.*f24408308d
// Size: 0x0d (Inherited: 0x00)  [layout: KHOP]
struct F*f24408308d {
	bool bTranslation; // 0x00(0x01)
	bool bRotation; // 0x01(0x01)
	bool bScale; // 0x02(0x01)
	bool bParent; // 0x03(0x01)
	struct F*25a1d1b41b TranslationAxes; // 0x04(0x03)
	struct F*25a1d1b41b RotationAxes; // 0x07(0x03)
	struct F*25a1d1b41b ScaleAxes; // 0x0a(0x03)
};

// ScriptStruct AnimationCore.*25a1d1b41b
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*25a1d1b41b {
	bool bX; // 0x00(0x01)
	bool bY; // 0x01(0x01)
	bool bZ; // 0x02(0x01)
};

// ScriptStruct AnimationCore.*373d25d443
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*373d25d443 {
	struct FVector Translation; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.*ef9e4490d1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ef9e4490d1 {
	struct TArray<struct FName> Nodes; // 0x00(0x10)
};

// ScriptStruct AnimationCore.*899b4e8854
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*899b4e8854 {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*840dffa856 Hierarchy; // 0x08(0x70)
};

// ScriptStruct AnimationCore.*840dffa856
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*840dffa856 {
	struct TArray<struct F*f6fc5db164> Nodes; // 0x00(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32> *d84e529dd7; // 0x20(0x50)
};

// ScriptStruct AnimationCore.*f6fc5db164
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f6fc5db164 {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
};

