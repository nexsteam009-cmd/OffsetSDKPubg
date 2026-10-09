// ScriptStruct ClothingSystemRuntimeInterface.*56f049bc42
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*56f049bc42 {
	struct TArray<struct F*3545affaeb> Spheres; // 0x00(0x10)
	struct TArray<struct F*c28772e95b> *ce9d6e920f; // 0x10(0x10)
	struct TArray<struct F*ab2a035a0d> *62fe9deb8c; // 0x20(0x10)
};

// ScriptStruct ClothingSystemRuntimeInterface.*ab2a035a0d
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ab2a035a0d {
	struct TArray<struct FPlane> Planes; // 0x00(0x10)
	int32 BoneIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ClothingSystemRuntimeInterface.*c28772e95b
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c28772e95b {
	int32 *574f60c42f[0x02]; // 0x00(0x08)
};

// ScriptStruct ClothingSystemRuntimeInterface.*3545affaeb
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*3545affaeb {
	int32 BoneIndex; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	struct FVector *fd708d4460; // 0x08(0x0c)
};

