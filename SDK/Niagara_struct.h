// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
	None,
	Largest,
	Smallest,
	Scalar,
	ENiagaraNumericOutputTypeSelectionMode_MAX,
};

// Enum Niagara.*d8ab67b99d
enum class *d8ab67b99d : uint8 {
	*6edf0989df,
	*76b3750a44,
	*104bfd57e8,
	*d5e7aa5801,
	*81d853f5e4,
	*5b5cb1d5bf,
	*0669ec623b,
	*d8ab67b99d_MAX,
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8 {
	Undefined,
	Parameter,
	Attribute,
	SystemConstant,
	ENiagaraInputNodeUsage_MAX,
};

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8 {
	ParticleData,
	Shared,
	Event,
	ENiagaraDataSetType_MAX,
};

// Enum Niagara.*34a3e722a9
enum class *34a3e722a9 : uint8 {
	*461562e74d,
	*5c03eb5516,
	*29354bf585,
	*a20524006f,
	*34a3e722a9_MAX,
};

// Enum Niagara.*8286f53b50
enum class *8286f53b50 : uint8 {
	*730c03dde2,
	*1f9d36294d,
	*19ea5b7e70,
	*dedc7b77e5,
	*8286f53b50_MAX,
};

// Enum Niagara.*e63263516f
enum class *e63263516f : uint8 {
	*46251656b4,
	*93d0d7d42e,
	*3f112f081b,
	*68798fa586,
	*e63263516f_MAX,
};

// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8 {
	Function,
	Module,
	SpawnScript,
	SpawnScriptInterpolated,
	UpdateScript,
	EffectScript,
	ENiagaraScriptUsage_MAX,
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8 {
	Copy,
	Zero,
	None,
	MarkInvalid,
	PassThrough,
	EUnusedAttributeBehaviour_MAX,
};

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8 {
	None,
	SceneGeometry,
	DepthBuffer,
	DistanceField,
	ENiagaraCollisionMode_MAX,
};

// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8 {
	SpawnScript,
	UpdateScript,
	EventScript,
	EScriptCompileIndices_MAX,
};

// Enum Niagara.*9b082572b7
enum class *9b082572b7 : uint8 {
	*d1841d9a09,
	*0d61353370,
	*71309ba9ca,
	*12179c6bfd,
	*9b082572b7_MAX,
};

// ScriptStruct Niagara.*4cae3d2083
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*4cae3d2083 {
	struct FGuid ID; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct F*2aa55200c7 TypeDef; // 0x18(0x08)
	struct TArray<bool> *987572c2cd; // 0x20(0x10)
};

// ScriptStruct Niagara.*2aa55200c7
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*2aa55200c7 {
	struct UStruct* Struct; // 0x00(0x08)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x00(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraTestStruct
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FNiagaraTestStruct {
	struct FVector *5444f5c55b; // 0x00(0x0c)
	struct FVector Vector2; // 0x0c(0x0c)
	struct F*996e937272 *f23509a43f; // 0x18(0x18)
	struct F*996e937272 *3be92a7aec; // 0x30(0x18)
};

// ScriptStruct Niagara.*996e937272
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*996e937272 {
	struct FVector *f0ed713131; // 0x00(0x0c)
	struct FVector *ba3c3856b2; // 0x0c(0x0c)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNiagaraNumeric {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Niagara.NiagaraBool
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FNiagaraBool {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraInt32
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FNiagaraInt32 {
	int32 Value; // 0x00(0x04)
};

// ScriptStruct Niagara.NiagaraFloat
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FNiagaraFloat {
	float Value; // 0x00(0x04)
};

// ScriptStruct Niagara.*776bc11dbd
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*776bc11dbd {
	struct FName Name; // 0x00(0x08)
	struct FGuid OwnerId; // 0x08(0x10)
	struct TArray<bool> *3a2fbad83c; // 0x18(0x10)
	int32 *5d5e6afdd4; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Niagara.*68b8fed211
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*68b8fed211 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Niagara.*53a3c09aa7
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*53a3c09aa7 {
	struct U*2e8db15b60* *e36840c73b; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x08)
};

// ScriptStruct Niagara.*7e4791e53e
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7e4791e53e {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*4cae3d2083> Inputs; // 0x08(0x10)
	struct TArray<struct F*4cae3d2083> Outputs; // 0x18(0x10)
	struct FGuid OwnerId; // 0x28(0x10)
	bool *62f282968a; // 0x38(0x01)
	bool *2feb3a9da7; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Niagara.*a616e81096
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*a616e81096 {
	bool *0114dd41dc; // 0x00(0x01)
};

// ScriptStruct Niagara.*0bc9e8110e
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*0bc9e8110e {
	struct F*6d4860dc85 ID; // 0x00(0x10)
	struct TArray<struct F*4cae3d2083> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.*6d4860dc85
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6d4860dc85 {
	struct FName Name; // 0x00(0x08)
	enum class ENiagaraDataSetType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Niagara.*b9223d9a85
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b9223d9a85 {
	struct TArray<int32> *6c3d641116; // 0x00(0x10)
	char pad_10[0x58]; // 0x10(0x58)
};

// ScriptStruct Niagara.*fc5d2675e4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fc5d2675e4 {
	int32 Tri; // 0x00(0x04)
	struct FVector *dbb46098a5; // 0x04(0x0c)
};

// ScriptStruct Niagara.*60924d3268
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*60924d3268 {
	struct FGuid ID; // 0x00(0x10)
	struct FName *76bda9bc75; // 0x10(0x08)
	bool bIsEnabled; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName Name; // 0x20(0x08)
	struct U*61f5c8c9d7* Instance; // 0x28(0x08)
};

// ScriptStruct Niagara.*7cd0bba9b0
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*7cd0bba9b0 {
	struct FGuid *9f07fce69b; // 0x00(0x10)
	struct FGuid *1a7ae5e452; // 0x10(0x10)
	struct FString *eb662af236; // 0x20(0x10)
};

// ScriptStruct Niagara.*868b980394
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*868b980394 {
	struct FGuid *9f07fce69b; // 0x00(0x10)
	struct FGuid *1a7ae5e452; // 0x10(0x10)
	struct FGuid *b235d99cb5; // 0x20(0x10)
};

// ScriptStruct Niagara.*c9fcc48855
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c9fcc48855 {
	struct TArray<struct F*4cae3d2083> Parameters; // 0x00(0x10)
};

// ScriptStruct Niagara.*d41ba431b6
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*d41ba431b6 {
	struct FVector *89dc245bf3; // 0x00(0x0c)
	struct FVector CollisionNormal; // 0x0c(0x0c)
	int32 PhysicalMaterialIndex; // 0x18(0x04)
	struct FVector CollisionVelocity; // 0x1c(0x0c)
	int32 ParticleIndex; // 0x28(0x04)
};

// ScriptStruct Niagara.*cbdeaffd7e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cbdeaffd7e {
	float Time; // 0x00(0x04)
	float *b42d58e220; // 0x04(0x04)
	uint32 *5bb1d15f1b; // 0x08(0x04)
	uint32 *85aca4fd55; // 0x0c(0x04)
};

// ScriptStruct Niagara.*d21a7933f5
// Size: 0x50 (Inherited: 0x28)  [layout: KHOP]
struct F*d21a7933f5 : F*8dad58a322 {
	enum class *9b082572b7 *39d86c2ea3; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32 *dbcba75dc9; // 0x2c(0x04)
	uint32 *7fbc02bf80; // 0x30(0x04)
	struct FGuid *667c5e38bf; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName *249f196356; // 0x48(0x08)
};

// ScriptStruct Niagara.*8dad58a322
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*8dad58a322 {
	struct U*f0fbc01339* Script; // 0x00(0x08)
	struct TArray<struct F*5c0e3207b0> EventReceivers; // 0x08(0x10)
	struct TArray<struct F*1ae6e723f5> *d9eb70c5f0; // 0x18(0x10)
};

// ScriptStruct Niagara.*1ae6e723f5
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*1ae6e723f5 {
	int32 *7fbc02bf80; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct F*0bc9e8110e *6fd67ad190; // 0x18(0x20)
};

// ScriptStruct Niagara.*5c0e3207b0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*5c0e3207b0 {
	struct FName Name; // 0x00(0x08)
	struct FName *2446ee8969; // 0x08(0x08)
	struct FName *115f18ed82; // 0x10(0x08)
	struct TArray<struct U*4b47ceed83*> EmitterActions; // 0x18(0x10)
};

