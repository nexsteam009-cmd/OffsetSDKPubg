// Enum HoudiniEngineRuntime.*d3ba411753
enum class *d3ba411753 : uint8 {
	*e1cd9c2d96,
	*012c6deef8,
	*615029efd5,
	*fa54d7dc43,
	*d3ba411753_MAX,
};

// Enum HoudiniEngineRuntime.*4603962af2
enum class *4603962af2 : uint8 {
	*a4f8b841ae,
	*e6b014913b,
	*206551384a,
	*54bb03c967,
	*4dab33ba7a,
	*4603962af2_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsAxisImport
enum class EHoudiniRuntimeSettingsAxisImport : uint8 {
	HRSAI_Unreal,
	HRSAI_Houdini,
	HRSAI_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8 {
	HRSRF_Always,
	HRSRF_OnlyIfMissing,
	HRSRF_Nothing,
	HRSRF_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8 {
	HRSST_InProcess,
	HRSST_Socket,
	HRSST_NamedPipe,
	HRSST_MAX,
};

// Enum HoudiniEngineRuntime.*346f331b5b
enum class *346f331b5b : uint8 {
	*63fda42006,
	*03ad770acb,
	*467a6ec898,
	*1c77a56086,
	*346f331b5b_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8 {
	Xform,
	Bounder,
	Unsupported,
	EHoudiniHandleType_MAX,
};

// ScriptStruct HoudiniEngineRuntime.HoudiniToolDirectory
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FHoudiniToolDirectory {
	struct FString Name; // 0x00(0x10)
	struct FDirectoryPath path; // 0x10(0x10)
	struct FString ContentDirID; // 0x20(0x10)
};

