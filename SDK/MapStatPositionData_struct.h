// UserDefinedStruct MapStatPositionData.MapStatPositionData
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FMapStatPositionData {
	int32 WorldIndexX_26_E4EA437B435AC01A4392AFA89818B06F; // 0x00(0x04)
	int32 WorldIndexY_27_941B901240E6C56400BA92BDF73F1AAC; // 0x04(0x04)
	struct FVector CameraCenter_28_179F8E4E451F4DE0CB8DA3BCE7C62409; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTransform> CameraTransforms_19_644B33EF4A303A7E926395AC9280C0FD; // 0x18(0x10)
	struct TArray<struct FMapStatRawData> MapStatRawDatas_18_77CED96A4F8E18D8DFADCA954BBCE41A; // 0x28(0x10)
};

