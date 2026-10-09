// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add,
	Scale,
	Blend,
	EModifyCurveApplyMode_MAX,
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean,
	Quaternion,
	SwingAngle,
	ERBFDistanceMethod_MAX,
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian,
	Exponential,
	Linear,
	Cubic,
	Quintic,
	ERBFFunctionType_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses,
	DriveCurves,
	EPoseDriverOutput_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation,
	Translation,
	EPoseDriverSource_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist,
	SwingOnly,
	Translation,
	EPoseDriverType_MAX,
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot,
	SnapshotPin,
	ESnapshotSourceMode_MAX,
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace,
	EIT_Additive,
	EIT_MAX,
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset,
	StartPosition,
	ExplicitTime,
	ESequenceEvalReinit_MAX,
};

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner,
	Outer,
	ESphericalLimitType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component,
	Actor,
	World,
	RootRelative,
	BoneRelative,
	AnimPhysSimSpaceType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free,
	Limited,
	AnimPhysLinearConstraintType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular,
	Cone,
	AnimPhysAngularConstraintType_MAX,
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone,
	MorphTarget,
	MaterialParameter,
	EDrivenDestinationMode_MAX,
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput,
	ReplaceComponent,
	AddToRefPose,
	EDrivenBoneModificationMode_MAX,
};

// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8 {
	None,
	TranslationX,
	TranslationY,
	TranslationZ,
	RotationX,
	RotationY,
	RotationZ,
	Scale,
	ScaleX,
	ScaleY,
	ScaleZ,
	EComponentType_MAX,
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate,
	Copy,
	CopyBoneDeltaMode_MAX,
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear,
	Cubic,
	Sinusoidal,
	EaseInOutExponent2,
	EaseInOutExponent3,
	EaseInOutExponent4,
	EaseInOutExponent5,
	MAX,
	EInterpolationBlend_MAX,
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore,
	BMM_Replace,
	BMM_Additive,
	BMM_MAX,
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	X,
	Y,
	Z,
	ESplineBoneAxis_MAX,
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xf8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
	int32 LODThreshold; // 0x48(0x04)
	float ActualAlpha; // 0x4c(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x50(0x01)
	bool bAlphaBoolEnabled; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float Alpha; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x60(0x50)
	struct FName AlphaCurveName; // 0xb0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xb8(0x30)
	char pad_E8[0x10]; // 0xe8(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0xc8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x30(0x10)
	struct TArray<float> BlendTime; // 0x40(0x10)
	enum class EAlphaBlendOption BlendType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x58(0x08)
	struct UBlendProfile* BlendProfile; // 0x60(0x08)
	struct TArray<struct FAlphaBlend> Blends; // 0x68(0x10)
	struct TArray<float> BlendWeights; // 0x78(0x10)
	struct TArray<float> RemainingBlendTimes; // 0x88(0x10)
	int32 LastActiveChildIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct FBlendSampleData> PerBoneSampleData; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	bool bResetChildOnActivation; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FBoneSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBoneReference BoneReference; // 0x08(0x18)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSocketReference {
	struct FName SocketName; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x30(0x18)
	struct FName SlotName; // 0x48(0x08)
	char pad_50[0x20]; // 0x50(0x20)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x128 (Inherited: 0x58)  [layout: KHOP]
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x58(0x04)
	float Y; // 0x5c(0x04)
	float Z; // 0x60(0x04)
	float PlayRate; // 0x64(0x04)
	bool bLoop; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float StartPosition; // 0x6c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x70(0x08)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FBlendFilter BlendFilter; // 0x80(0x90)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x110(0x10)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x120(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x210 (Inherited: 0x128)  [layout: KHOP]
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0x128(0x18)
	int32 LODThreshold; // 0x140(0x04)
	bool bIsLODEnabled; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct FVector LookAtLocation; // 0x148(0x0c)
	char pad_154[0x4]; // 0x154(0x04)
	struct FName SourceSocketName; // 0x158(0x08)
	struct FName PivotSocketName; // 0x160(0x08)
	float Alpha; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FBoneReference SocketBoneReference; // 0x170(0x18)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform SocketLocalTransform; // 0x190(0x30)
	struct FBoneReference PivotSocketBoneReference; // 0x1c0(0x18)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform PivotSocketLocalTransform; // 0x1e0(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0x108 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x30(0x18)
	struct FPoseLink Additive; // 0x48(0x18)
	int32 LODThreshold; // 0x60(0x04)
	float ActualAlpha; // 0x64(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Alpha; // 0x6c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	bool bAlphaBoolEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x80(0x50)
	struct FName AlphaCurveName; // 0xd0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xd8(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xd0 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xe0 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32> EnumToPoseIndex; // 0xc8(0x10)
	bool ActiveEnumValue; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xd0 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32 ActiveChildIndex; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x130 (Inherited: 0x128)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct USkeletalMeshComponent* SourceMeshComponent; // 0x30(0x08)
	char pad_38[0x58]; // 0x38(0x58)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	struct FName SourceBinding; // 0x48(0x08)
	float Alpha; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	TScriptInterface<struct U*fc4e6ad3ee> CurveSource; // 0x58(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xf8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct TArray<struct FPoseLink> BlendPoses; // 0x48(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x58(0x10)
	struct TArray<float> BlendWeights; // 0x68(0x10)
	bool bMeshSpaceRotationBlend; // 0x78(0x01)
	bool bForceOverrideBlendLayers; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FInputBlendPose BlendLayerOverrides; // 0x80(0x10)
	enum class ECurveBlendOption CurveBlendOption; // 0x90(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x91(0x01)
	bool bHasRelevantPoses; // 0x92(0x01)
	char pad_93[0x1]; // 0x93(0x01)
	int32 LODThreshold; // 0x94(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x98(0x10)
	struct FGuid SkeletonGuid; // 0xa8(0x10)
	struct FGuid VirtualBoneGuid; // 0xb8(0x10)
	char pad_C8[0x30]; // 0xc8(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	enum class EModifyCurveApplyMode ApplyMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<float> CurveValues; // 0x50(0x10)
	struct TArray<struct FName> CurveNames; // 0x60(0x10)
	float Alpha; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x30(0x10)
	struct TArray<float> DesiredAlphas; // 0x40(0x10)
	bool bAdditiveNode; // 0x50(0x01)
	bool bNormalizeAlpha; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FInputScaleBias AlphaScaleBias; // 0x54(0x08)
	char pad_5C[0x14]; // 0x5c(0x14)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0xa0 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x58(0x08)
	char pad_60[0x40]; // 0x60(0x40)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xc8 (Inherited: 0xa0)  [layout: KHOP]
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0xa0(0x18)
	enum class EAlphaBlendOption BlendOption; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UCurveFloat* CustomCurve; // 0xc0(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xb0 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0xa0(0x08)
	float PoseWeight; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FRBFParams {
	int32 TargetDimensions; // 0x00(0x04)
	float Radius; // 0x04(0x04)
	enum class ERBFFunctionType Function; // 0x08(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x09(0x01)
	enum class EBoneAxis TwistAxis; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float WeightThreshold; // 0x0c(0x04)
};

// ScriptStruct AnimGraphRuntime.*3101a56a41
// Size: 0x88 (Inherited: 0x10)  [layout: KHOP]
struct F*3101a56a41 : F*d72df6918c {
	float ScaleFactor; // 0x10(0x04)
	bool *6190b96e8f; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRichCurve CustomCurve; // 0x18(0x70)
};

// ScriptStruct AnimGraphRuntime.*d72df6918c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d72df6918c {
	struct TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x178 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0xa0(0x18)
	struct TArray<struct FBoneReference> SourceBones; // 0xb8(0x10)
	bool bOnlyDriveSelectedBones; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xd0(0x10)
	struct FBoneReference EvalSpaceBone; // 0xe0(0x18)
	struct FRBFParams RBFParams; // 0xf8(0x10)
	enum class EPoseDriverSource DriveSource; // 0x108(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0x110(0x10)
	struct FBoneReference SourceBone; // 0x120(0x18)
	enum class EBoneAxis TwistAxis; // 0x138(0x01)
	enum class EPoseDriverType Type; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float RadialScaling; // 0x13c(0x04)
	char pad_140[0x38]; // 0x140(0x38)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xa8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	bool bApplyCustomCurve; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FRichCurve CustomCurve; // 0x28(0x70)
	struct FName DrivenName; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x00(0x0c)
	struct FRotator TargetRotation; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	enum class ESnapshotSourceMode Mode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SnapshotName; // 0x38(0x08)
	struct FPoseSnapshot Snapshot; // 0x40(0x38)
	char pad_78[0x38]; // 0x78(0x38)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	bool bShuffleMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32 MinLoopCount; // 0x0c(0x04)
	int32 MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend BlendIn; // 0x20(0x38)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x30(0x18)
	struct FName Name; // 0x48(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	float Pitch; // 0x48(0x04)
	float Yaw; // 0x4c(0x04)
	struct FRotator MeshToComponent; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x1e8 (Inherited: 0x128)  [layout: KHOP]
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0x128(0x18)
	int32 LODThreshold; // 0x140(0x04)
	bool bIsLODEnabled; // 0x144(0x01)
	enum class EAnimAlphaInputType AlphaInputType; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float Alpha; // 0x148(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x14c(0x08)
	float ActualAlpha; // 0x154(0x04)
	bool bAlphaBoolEnabled; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x160(0x50)
	struct FName AlphaCurveName; // 0x1b0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1b8(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x70 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x58(0x08)
	float ExplicitTime; // 0x60(0x04)
	bool bShouldLoop; // 0x64(0x01)
	bool bTeleportToExplicitTime; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float StartPosition; // 0x68(0x04)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x6c(0x01)
	bool bReinitialized; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0x108 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x30(0x18)
	struct FPoseLink B; // 0x48(0x18)
	enum class EAnimAlphaInputType AlphaInputType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Alpha; // 0x64(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x68(0x08)
	bool bAlphaBoolEnabled; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x78(0x50)
	struct FName AlphaCurveName; // 0xc8(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xd0(0x30)
	float InternalBlendAlpha; // 0x100(0x04)
	bool bAIsRelevant; // 0x104(0x01)
	bool bBIsRelevant; // 0x105(0x01)
	bool bResetChildOnActivation; // 0x106(0x01)
	char pad_107[0x1]; // 0x107(0x01)
};

// ScriptStruct AnimGraphRuntime.*3f962d52e0
// Size: 0x750 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct F*3f962d52e0 : F*3dd9bdf3cc {
	char pad_520[0x230]; // 0x520(0x230)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x388 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	enum class AnimPhysSimSpaceType SimulationSpace; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FBoneReference RelativeSpaceBone; // 0x100(0x18)
	bool bChain; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FBoneReference BoundBone; // 0x120(0x18)
	struct FBoneReference ChainEnd; // 0x138(0x18)
	struct FVector BoxExtents; // 0x150(0x0c)
	struct FVector LocalJointOffset; // 0x15c(0x0c)
	float GravityScale; // 0x168(0x04)
	bool bLinearSpring; // 0x16c(0x01)
	bool bAngularSpring; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	float LinearSpringConstant; // 0x170(0x04)
	float AngularSpringConstant; // 0x174(0x04)
	bool bEnableWind; // 0x178(0x01)
	bool bWindWasEnabled; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	float WindScale; // 0x17c(0x04)
	bool bOverrideLinearDamping; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float LinearDampingOverride; // 0x184(0x04)
	bool bOverrideAngularDamping; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float AngularDampingOverride; // 0x18c(0x04)
	bool bOverrideAngularBias; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float AngularBiasOverride; // 0x194(0x04)
	bool bDoUpdate; // 0x198(0x01)
	bool bDoEval; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	int32 NumSolverIterationsPreUpdate; // 0x19c(0x04)
	int32 NumSolverIterationsPostUpdate; // 0x1a0(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1a4(0x5c)
	bool bUsePlanarLimit; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x208(0x10)
	bool bUseSphericalLimits; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x220(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float SphereCollisionRadius; // 0x234(0x04)
	struct FVector ExternalForce; // 0x238(0x0c)
	char pad_244[0x144]; // 0x244(0x144)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x00(0x18)
	struct FVector SphereLocalOffset; // 0x18(0x0c)
	float LimitRadius; // 0x24(0x04)
	enum class ESphericalLimitType LimitType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform PlaneTransform; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x5c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector LinearAxesMin; // 0x04(0x0c)
	struct FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float ConeAngle; // 0x20(0x04)
	float AngularXAngle; // 0x24(0x04)
	float AngularYAngle; // 0x28(0x04)
	float AngularZAngle; // 0x2c(0x04)
	struct FVector AngularLimitsMin; // 0x30(0x0c)
	struct FVector AngularLimitsMax; // 0x3c(0x0c)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FVector AngularTarget; // 0x4c(0x0c)
	bool bLinearFullyLocked; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x170 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xf8(0x18)
	enum class EComponentType SourceComponent; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UCurveFloat* DrivingCurve; // 0x118(0x08)
	float Multiplier; // 0x120(0x04)
	bool bUseRange; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float RangeMin; // 0x128(0x04)
	float RangeMax; // 0x12c(0x04)
	float RemappedMin; // 0x130(0x04)
	float RemappedMax; // 0x134(0x04)
	enum class EDrivenDestinationMode DestinationMode; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FName ParameterName; // 0x140(0x08)
	struct FBoneReference TargetBone; // 0x148(0x18)
	enum class EComponentType TargetComponent; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	char bAffectTargetTranslationX : 1; // 0x164(0x01)
	char bAffectTargetTranslationY : 1; // 0x164(0x01)
	char bAffectTargetTranslationZ : 1; // 0x164(0x01)
	char bAffectTargetRotationX : 1; // 0x164(0x01)
	char bAffectTargetRotationY : 1; // 0x164(0x01)
	char bAffectTargetRotationZ : 1; // 0x164(0x01)
	char bAffectTargetScaleX : 1; // 0x164(0x01)
	char bAffectTargetScaleY : 1; // 0x164(0x01)
	char bAffectTargetScaleZ : 1; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x130 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xf8(0x18)
	struct FBoneReference TargetBone; // 0x110(0x18)
	bool bCopyTranslation; // 0x128(0x01)
	bool bCopyRotation; // 0x129(0x01)
	bool bCopyScale; // 0x12a(0x01)
	enum class EBoneControlSpace ControlSpace; // 0x12b(0x01)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x138 (Inherited: 0xf8)  [layout: KHOP]
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xf8(0x18)
	struct FBoneReference TargetBone; // 0x110(0x18)
	bool bCopyTranslation; // 0x128(0x01)
	bool bCopyRotation; // 0x129(0x01)
	bool bCopyScale; // 0x12a(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0x12b(0x01)
	float TranslationMultiplier; // 0x12c(0x04)
	float RotationMultiplier; // 0x130(0x04)
	float ScaleMultiplier; // 0x134(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1a0 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform EffectorTransform; // 0x100(0x30)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class EBoneRotationSource EffectorRotationSource; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FBoneReference TipBone; // 0x158(0x18)
	struct FBoneReference RootBone; // 0x170(0x18)
	float Precision; // 0x188(0x04)
	int32 MaxIterations; // 0x18c(0x04)
	bool bEnableDebugDraw; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x170 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xf8(0x18)
	struct FBoneReference LeftHandFK; // 0x110(0x18)
	struct FBoneReference RightHandIK; // 0x128(0x18)
	struct FBoneReference LeftHandIK; // 0x140(0x18)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x158(0x10)
	float HandFKWeight; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x120 (Inherited: 0xf8)  [layout: KHOP]
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xf8(0x04)
	int32 MaxIterations; // 0xfc(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0x100(0x10)
	struct TArray<struct FAnimLegIKData> LegsData; // 0x110(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimLegIKData {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x18)
	struct FBoneReference FKFootBone; // 0x18(0x18)
	int32 NumBonesInLimb; // 0x30(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x34(0x01)
	bool bEnableRotationLimit; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float MinRotationAngle; // 0x38(0x04)
	bool bEnableKneeTwistCorrection; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct AnimGraphRuntime.*72dcccb2a0
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*72dcccb2a0 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct AnimGraphRuntime.*821c890ee1
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*821c890ee1 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x200 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xf8(0x18)
	struct FBoneReference LookAtBone; // 0x110(0x18)
	struct FName LookAtSocket; // 0x128(0x08)
	struct FVector LookAtLocation; // 0x130(0x0c)
	enum class EAxisOption LookAtAxis; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FVector CustomLookAtAxis; // 0x140(0x0c)
	struct FAxis LookAt_Axis; // 0x14c(0x10)
	bool bUseLookUpAxis; // 0x15c(0x01)
	enum class EAxisOption LookUpAxis; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	struct FVector CustomLookUpAxis; // 0x160(0x0c)
	struct FAxis LookUp_Axis; // 0x16c(0x10)
	float LookAtClamp; // 0x17c(0x04)
	enum class EInterpolationBlend InterpolationType; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float InterpolationTime; // 0x184(0x04)
	float InterpolationTriggerThreashold; // 0x188(0x04)
	char pad_18C[0x74]; // 0x18c(0x74)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x140 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xf8(0x18)
	struct FVector Translation; // 0x110(0x0c)
	struct FRotator Rotation; // 0x11c(0x0c)
	struct FVector Scale; // 0x128(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0x134(0x01)
	enum class EBoneModificationMode RotationMode; // 0x135(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x136(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x137(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x138(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x138 (Inherited: 0xf8)  [layout: KHOP]
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xf8(0x18)
	enum class EBoneControlSpace DisplaySpace; // 0x110(0x01)
	bool bRelativeToRefPose; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	struct FVector Translation; // 0x114(0x0c)
	struct FRotator Rotation; // 0x120(0x0c)
	struct FVector Scale; // 0x12c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x130 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xf8(0x18)
	struct FBoneReference SourceBone; // 0x110(0x18)
	float Multiplier; // 0x128(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0x12c(0x01)
	bool bIsAdditive; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x30(0x18)
	float DefaultChainLength; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FBoneReference ChainStartBone; // 0x50(0x18)
	struct FBoneReference ChainEndBone; // 0x68(0x18)
	struct FVector TargetLocation; // 0x80(0x0c)
	float Alpha; // 0x8c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x08)
	bool bBoneIndicesCached; // 0x98(0x01)
	char pad_99[0x17]; // 0x99(0x17)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x298 (Inherited: 0xf8)  [layout: KHOP]
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xf8(0x18)
	struct FBoneReference EndBone; // 0x110(0x18)
	enum class ESplineBoneAxis BoneAxis; // 0x128(0x01)
	bool bAutoCalculateSpline; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	int32 PointCount; // 0x12c(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0x130(0x10)
	float Roll; // 0x140(0x04)
	float TwistStart; // 0x144(0x04)
	float TwistEnd; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FAlphaBlend TwistBlend; // 0x150(0x38)
	float Stretch; // 0x188(0x04)
	float Offset; // 0x18c(0x04)
	char pad_190[0x70]; // 0x190(0x70)
	struct FSplineCurves BoneSpline; // 0x200(0x60)
	float OriginalSplineLength; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct FSplineIKCachedBoneData> CachedBoneReferences; // 0x268(0x10)
	struct TArray<float> CachedBoneLengths; // 0x278(0x10)
	struct TArray<struct FQuat> CachedOffsetRotations; // 0x288(0x10)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSplineIKCachedBoneData {
	struct FBoneReference Bone; // 0x00(0x18)
	int32 RefSkeletonIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x160 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xf8(0x18)
	bool bLimitDisplacement; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float MaxDisplacement; // 0x114(0x04)
	float SpringStiffness; // 0x118(0x04)
	float SpringDamping; // 0x11c(0x04)
	float ErrorResetThresh; // 0x120(0x04)
	bool bNoZSpring; // 0x124(0x01)
	bool bTranslateX; // 0x125(0x01)
	bool bTranslateY; // 0x126(0x01)
	bool bTranslateZ; // 0x127(0x01)
	bool bRotateX; // 0x128(0x01)
	bool bRotateY; // 0x129(0x01)
	bool bRotateZ; // 0x12a(0x01)
	char pad_12B[0x35]; // 0x12b(0x35)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x230 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	struct FBoneReference TrailBone; // 0xf8(0x18)
	int32 ChainLength; // 0x110(0x04)
	enum class EAxis ChainBoneAxis; // 0x114(0x01)
	bool bInvertChainBoneAxis; // 0x115(0x01)
	char pad_116[0x2]; // 0x116(0x02)
	float TrailRelaxation; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x78)
	bool bLimitStretch; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float StretchLimit; // 0x19c(0x04)
	struct FVector FakeVelocity; // 0x1a0(0x0c)
	bool bActorSpaceFakeVel; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FBoneReference BaseJoint; // 0x1b0(0x18)
	char pad_1C8[0x68]; // 0x1c8(0x68)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x180 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xf8(0x28)
	struct FReferenceBoneFrame TwistFrame; // 0x120(0x28)
	struct FAxis TwistPlaneNormalAxis; // 0x148(0x10)
	float RangeMax; // 0x158(0x04)
	float RemappedMin; // 0x15c(0x04)
	float RemappedMax; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FAnimCurveParam Curve; // 0x168(0x10)
	char pad_178[0x8]; // 0x178(0x08)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FReferenceBoneFrame {
	struct FBoneReference Bone; // 0x00(0x18)
	struct FAxis Axis; // 0x18(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x158 (Inherited: 0xf8)  [layout: KHOP]
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xf8(0x18)
	struct FVector EffectorLocation; // 0x110(0x0c)
	char bAutoJointTarget : 1; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float AutoJointTargetSourceOrientationWeight; // 0x120(0x04)
	struct FVector JointTargetLocation; // 0x124(0x0c)
	struct FName EffectorSpaceBoneName; // 0x130(0x08)
	char bTakeRotationFromEffectorSpace : 1; // 0x138(0x01)
	char bMaintainEffectorRelRot : 1; // 0x138(0x01)
	char bAllowStretching : 1; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector2D StretchLimits; // 0x13c(0x08)
	float StartStretchRatio; // 0x144(0x04)
	float MaxStretchScale; // 0x148(0x04)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x14c(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	struct FName JointTargetSpaceBoneName; // 0x150(0x08)
};

