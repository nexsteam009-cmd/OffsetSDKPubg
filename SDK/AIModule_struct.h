// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8 {
	Success,
	Blocked,
	OffPath,
	Aborted,
	Skipped_DEPRECATED,
	Invalid,
	EPathFollowingResult_MAX,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8 {
	Processing,
	Success,
	Failed,
	Aborted,
	OwnerLost,
	MissingParam,
	EEnvQueryStatus_MAX,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8 {
	Animation,
	Logic,
	Script,
	Gameplay,
	MAX,
	EAILockSource_MAX,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8 {
	SoftScript,
	Logic,
	HardScript,
	Reaction,
	Ultimate,
	MAX,
	EAIRequestPriority_MAX,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8 {
	Invalid,
	FailedToStart,
	InstantAbort,
	FinishedAborting,
	FinishedExecution,
	Push,
	EPawnActionEventType_MAX,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EPawnActionResult_MAX,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8 {
	NeverStarted,
	NotBeingAborted,
	MarkPendingAbort,
	LatentAbortInProgress,
	AbortDone,
	MAX,
	EPawnActionAbortState_MAX,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8 {
	Distance3D,
	Distance2D,
	DistanceZ,
	MAX,
	FAIDistanceType_MAX,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
	EAIOptionFlag_MAX,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8 {
	Failed,
	AlreadyAtGoal,
	RequestSuccessful,
	EPathFollowingRequestResult_MAX,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8 {
	Error,
	NoMove,
	DirectMove,
	PartialPath,
	PathToGoal,
	EPathFollowingAction_MAX,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8 {
	Idle,
	Waiting,
	Paused,
	Moving,
	EPathFollowingStatus_MAX,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	ETeamAttitude_MAX,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8 {
	OnEveryPerception,
	OnPerceptionChange,
	EAISenseNotifyType_MAX,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8 {
	Lowest,
	Low,
	AutonomousAI,
	High,
	Ultimate,
	EAITaskPriority_MAX,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8 {
	None,
	LowerPriority,
	Self,
	Both,
	EBTFlowAbortMode_MAX,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8 {
	Succeeded,
	Failed,
	Aborted,
	InProgress,
	EBTNodeResult_MAX,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8 {
	None,
	SpecifiedValue,
	FilterThreshold,
	EEnvQueryTestClamping_MAX,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8 {
	TwoPoints,
	Rotation,
	EEnvDirection_MAX,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8 {
	Box,
	Sphere,
	Capsule,
	EEnvOverlapShape_MAX,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8 {
	Line,
	Box,
	Sphere,
	Capsule,
	EEnvTraceShape_MAX,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8 {
	None,
	Navigation,
	Geometry,
	NavigationOverLedges,
	EEnvQueryTrace_MAX,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8 {
	Float,
	Int,
	Bool,
	EAIParamType_MAX,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8 {
	Float,
	Int,
	Bool,
	EEnvQueryParam_MAX,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8 {
	SingleResult,
	RandomBest5Pct,
	RandomBest25Pct,
	AllMatching,
	EEnvQueryRunMode_MAX,
};

// Enum AIModule.*efdf277e0b
enum class *efdf277e0b : uint8 {
	*8837fe2d91,
	*1bba840475,
	*188772c64c,
	*5fd95ec292,
	*efdf277e0b_MAX,
};

// Enum AIModule.*69c2bcc591
enum class *69c2bcc591 : uint8 {
	*e0d3813c37,
	*e171112080,
	*77f5bebe0e,
	*69c2bcc591_MAX,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8 {
	Low,
	Medium,
	High,
	EEnvTestCost_MAX,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8 {
	None,
	Square,
	Inverse,
	Unused,
	Constant,
	Skip,
	EEnvTestWeight_MAX,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8 {
	Linear,
	Square,
	InverseLinear,
	SquareRoot,
	Constant,
	EEnvTestScoreEquation_MAX,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8 {
	Minimum,
	Maximum,
	Range,
	Match,
	EEnvTestFilterType_MAX,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8 {
	Filter,
	Score,
	FilterAndScore,
	EEnvTestPurpose_MAX,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8 {
	Invalid,
	Test,
	And,
	Or,
	Not,
	EBTDecoratorLogic_MAX,
};

// Enum AIModule.*7d57d1483f
enum class *7d57d1483f : uint8 {
	*f76142f564,
	*54175aeacc,
	*0ab8b94cf7,
	*7d57d1483f_MAX,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8 {
	Equal,
	NotEqual,
	Contain,
	NotContain,
	ETextKeyOperation_MAX,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8 {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EArithmeticKeyOperation_MAX,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8 {
	Set,
	NotSet,
	EBasicKeyOperation_MAX,
};

// Enum AIModule.*91478a709c
enum class *91478a709c : uint8 {
	*71af8410b1,
	*7b6d3300ce,
	*fb85a7b5b1,
	*91478a709c_MAX,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8 {
	Equal,
	NotEqual,
	EBlackBoardEntryComparison_MAX,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8 {
	NavmeshRaycast2D,
	HierarchicalQuery,
	RegularPathFinding,
	EPathExistanceQueryType_MAX,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8 {
	AbortBackground,
	WaitForBackground,
	EBTParallelMode_MAX,
};

// Enum AIModule.*1a157b2dbc
enum class *1a157b2dbc : uint8 {
	*0df981af97,
	*5e3ab406d0,
	*f6aca1efec,
	*1a157b2dbc_MAX,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8 {
	Absolute,
	RelativeToScores,
	EEQSNormalizationType_MAX,
};

// Enum AIModule.*cb6d0e4da6
enum class *cb6d0e4da6 : uint8 {
	*3cf5b9aa60,
	*e6363ba7a6,
	*a7612a28f6,
	*05e151512c,
	*a4ce2dc1c3,
	*cb6d0e4da6_MAX,
};

// Enum AIModule.*0acefd7883
enum class *0acefd7883 : uint8 {
	*0b70624b10,
	*dbfcf67b14,
	*e87125e29b,
	*0acefd7883_MAX,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8 {
	PathExist,
	PathCost,
	PathLength,
	EEnvTestPathfinding_MAX,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8 {
	All,
	Best5Pct,
	Best25Pct,
	EEnvQueryHightlightMode_MAX,
};

// Enum AIModule.*1c84700c7d
enum class *1c84700c7d : uint8 {
	*6f43f2bd24,
	*7d9a9c284b,
	*8872420ee1,
	*1c84700c7d_MAX,
};

// Enum AIModule.*c58eb497ca
enum class *c58eb497ca : uint8 {
	*099e6cfa1a,
	*3f1dcd5e0c,
	*55871470e6,
	*c58eb497ca_MAX,
};

// Enum AIModule.*12f312ddc6
enum class *12f312ddc6 : uint8 {
	*6a46f9b42e,
	*3c4dbac2bf,
	*b9a44bb8ab,
	*12f312ddc6_MAX,
};

// ScriptStruct AIModule.*f3ccc4d0e9
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*f3ccc4d0e9 {
	uint32 RequestID; // 0x00(0x04)
};

// ScriptStruct AIModule.*de33eb1373
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*de33eb1373 {
	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName Tag; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	char pad_40_0 : 1; // 0x40(0x01)
	char bSuccessfullySensed : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x08)
	struct UClass* SelectedKeyType; // 0x18(0x08)
	bool SelectedKeyID; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bNoneIsAllowedValue : 1; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct AIModule.*4d27604ee0
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4d27604ee0 {
	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)
};

// ScriptStruct AIModule.*e7f0497313
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*e7f0497313 {
	bool TeamId; // 0x00(0x01)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x30 (Inherited: 0x28)  [layout: LECH - offset chi la uoc luong]
struct FAIDataProviderBoolValue : F*72c36ee4a5 {
	bool DefaultValue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIModule.*72c36ee4a5
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*72c36ee4a5 : F*6ed3d8c0b2 {
	struct UClass* PropertyType; // 0x20(0x08)
};

// ScriptStruct AIModule.*6ed3d8c0b2
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*6ed3d8c0b2 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UProperty* *9cf640daf7; // 0x08(0x08)
	struct U*21d2d7b0a7* *10e3c8f6ad; // 0x10(0x08)
	struct FName *1475738ad7; // 0x18(0x08)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x30 (Inherited: 0x28)  [layout: LECH - offset chi la uoc luong]
struct FAIDataProviderFloatValue : F*72c36ee4a5 {
	float DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x30 (Inherited: 0x28)  [layout: LECH - offset chi la uoc luong]
struct FAIDataProviderIntValue : F*72c36ee4a5 {
	int32 DefaultValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIModule.*89871519d8
// Size: 0x30 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*89871519d8 : F*6ed3d8c0b2 {
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct AIModule.*1dd6ced014
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1dd6ced014 {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct F*de33eb1373> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.*4ca244c244
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*4ca244c244 {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct AIModule.*bcdd8a23ee
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bcdd8a23ee {
	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct AIModule.*f035d5608b
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f035d5608b {
	struct AActor* *774af3fcb6; // 0x00(0x08)
	struct AActor* *d7ddc2ec8f; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.*a527be5e3a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*a527be5e3a {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* *47dc6baf74; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)
};

// ScriptStruct AIModule.*5125dd821d
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*5125dd821d {
	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct AIModule.*60899ceeaf
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*60899ceeaf {
	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* *d71cad316c; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)
};

// ScriptStruct AIModule.*cef6a2976d
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cef6a2976d {
	struct UEnvQuery* *1fa3d2e7ce; // 0x00(0x08)
	struct TArray<struct F*17e34b6b79> *d19009600f; // 0x08(0x10)
	struct FBlackboardKeySelector *9350f22a5d; // 0x18(0x28)
	enum class EEnvQueryRunMode *89cf7c7bcd; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct AIModule.*17e34b6b79
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*17e34b6b79 {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.*1dd7df9418
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1dd7df9418 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32 OptionIndex; // 0x2c(0x04)
	int32 QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct AIModule.*a0abe4af3e
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a0abe4af3e {
	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector *6a6c192599; // 0x0c(0x0c)
	enum class ECollisionChannel *e60f9a053f; // 0x18(0x01)
	enum class EEnvOverlapShape *c85cf6d549; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char *81e982a62b : 1; // 0x1c(0x01)
	char *2893564505 : 1; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEnvTraceData {
	int32 *cd09385a1c; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float *54e1339643; // 0x10(0x04)
	float *f7c3c48c26; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float *fbb4027b8a; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel *19c9786558; // 0x29(0x01)
	enum class EEnvTraceShape *1752a6fc12; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char *736abb180d : 1; // 0x2c(0x01)
	char *81e982a62b : 1; // 0x2c(0x01)
	char *8ad042c75d : 1; // 0x2c(0x01)
	char *6382469f39 : 1; // 0x2c(0x01)
	char *b619d9825c : 1; // 0x2c(0x01)
	char *73bc42c12d : 1; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEnvDirection {
	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection *7812f3a333; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FEnvNamedValue {
	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
};

// ScriptStruct AIModule.*695b51ef30
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*695b51ef30 {
	struct UBTCompositeNode* *1e24410fe8; // 0x00(0x08)
	struct UBTTaskNode* ChildTask; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct F*f473ddfcad> DecoratorOps; // 0x20(0x10)
};

// ScriptStruct AIModule.*f473ddfcad
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*f473ddfcad {
	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16 Number; // 0x02(0x02)
};

// ScriptStruct AIModule.*01713da1d7
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*01713da1d7 {
	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlackboardEntry {
	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char *37feb0fd86 : 1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x00(0x04)
	float DesiredVelocityWeight; // 0x04(0x04)
	float CurrentVelocityWeight; // 0x08(0x04)
	float SideBiasWeight; // 0x0c(0x04)
	float ImpactTimeWeight; // 0x10(0x04)
	float ImpactTimeRange; // 0x14(0x04)
	bool CustomPatternIdx; // 0x18(0x01)
	bool AdaptiveDivisions; // 0x19(0x01)
	bool AdaptiveRings; // 0x1a(0x01)
	bool AdaptiveDepth; // 0x1b(0x01)
};

// ScriptStruct AIModule.*27f7615bd8
// Size: 0x1c0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*27f7615bd8 {
	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x1b8]; // 0x08(0x1b8)
};

// ScriptStruct AIModule.*34d2862639
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*34d2862639 {
	struct UEnvQuery* *1fa3d2e7ce; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x10)
	char pad_20[0x50]; // 0x20(0x50)
};

// ScriptStruct AIModule.*5f381a4591
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*5f381a4591 {
	struct U*10d0ce8e40* *0fde3c3615; // 0x00(0x08)
};

// ScriptStruct AIModule.*662d347f04
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*662d347f04 {
	struct U*10d0ce8e40* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

