// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine,
	Feminine,
	Neuter,
	ETextGender_MAX,
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int,
	UInt,
	Float,
	Double,
	Text,
	Gender,
	EFormatArgumentType_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared,
	NewPath,
	UpdatedDueToGoalMoved,
	UpdatedDueToNavigationChanged,
	Invalidated,
	RePathFailed,
	MetaPathUpdate,
	Custom,
	ENavPathEvent_MAX,
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone,
	RCTWM_WeightedArrive,
	RCTWM_WeightedLeave,
	RCTWM_WeightedBoth,
	RCTWM_MAX,
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto,
	RCTM_User,
	RCTM_Break,
	RCTM_None,
	RCTM_MAX,
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear,
	RCIM_Constant,
	RCIM_Cubic,
	RCIM_None,
	RCIM_MAX,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear,
	Cubic,
	HermiteCubic,
	Sinusoidal,
	QuadraticInOut,
	CubicInOut,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	Custom,
	EAlphaBlendOption_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel,
	LoadMapFailure,
	InvalidURL,
	PackageMissing,
	PackageVersion,
	NoDownload,
	TravelFailure,
	CheatCommands,
	PendingNetGameCreateFailure,
	CloudSaveFailure,
	ServerTravelFailure,
	ClientTravelFailure,
	ETravelFailure_MAX,
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists,
	NetDriverCreateFailure,
	NetDriverListenFailure,
	ConnectionLost,
	ConnectionTimeout,
	FailureReceived,
	OutdatedClient,
	OutdatedServer,
	PendingConnectionFailure,
	NetGuidMismatch,
	NetChecksumMismatch,
	ENetworkFailure_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics,
	TG_StartPhysics,
	TG_DuringPhysics,
	TG_EndPhysics,
	TG_PostPhysics,
	TG_PostUpdateWork,
	TG_LastDemotable,
	TG_NewlySpawned,
	TG_MAX,
};

// Enum Engine.EPendingCreationType
enum class EPendingCreationType : uint8 {
	None,
	IncrementalAndOnDemand,
	OnDemandOnly,
	EPendingCreationType_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.*52922ace24
enum class *52922ace24 : uint8 {
	*8d7f742c9a,
	*e8a614a946,
	*151324d9c4,
	*662fa330c8,
	*81a430ba0c,
	*52922ace24_MAX,
};

// Enum Engine.*9d0e0d544c
enum class *9d0e0d544c : uint8 {
	*9aa20161d4,
	*857d47d3e5,
	*b73a7ec411,
	*34865e68b2,
	*168717353c,
	*745e70a54b,
	*2a8782f3f7,
	*9d0e0d544c_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None,
	MOVE_Walking,
	MOVE_NavWalking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX,
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown,
	Portrait,
	PortraitUpsideDown,
	LandscapeLeft,
	LandscapeRight,
	FaceUp,
	FaceDown,
	EScreenOrientation_MAX,
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX,
	ETraceTypeQuery_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
	EObjectTypeQuery_MAX,
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.EStanceMode
enum class EStanceMode : uint8 {
	STANCE_None,
	STANCE_Stand,
	STANCE_Crouch,
	STANCE_Prone,
	STANCE_Carry,
	STANCE_Carried,
	STANCE_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.*8607c99dcb
enum class *8607c99dcb : uint8 {
	*c9c5aa4b58,
	*9f2d1547b0,
	*4ce583d9af,
	*8607c99dcb_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.*b693fa6992
enum class *b693fa6992 : uint8 {
	*302dd5a7ce,
	*0115a2a035,
	*3078e8c32f,
	*4ca452b3d2,
	*b693fa6992_MAX,
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault,
	AlwaysUpdate,
	OnlyUpdateMovable,
	NeverUpdate,
	EActorUpdateOverlapsMethod_MAX,
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.*be6863e3aa
enum class *be6863e3aa : uint8 {
	*c0f5d9d0de,
	*dc39dbe96f,
	*47df4e8e48,
	*be6863e3aa_MAX,
};

// Enum Engine.*795db128a3
enum class *795db128a3 : uint8 {
	*8f4773e23e,
	*9005e948d7,
	*45355709cb,
	*04f527aec3,
	*795db128a3_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled,
	Player0,
	Player1,
	Player2,
	Player3,
	Player4,
	Player5,
	Player6,
	Player7,
	EAutoReceiveInput_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.*13a3d7090c
enum class *13a3d7090c : uint8 {
	*34c6f29c3b,
	*37c39d420d,
	*39f18ca334,
	*8e21f4aa15,
	*0dd6e6023a,
	*91cf19105b,
	*13a3d7090c_MAX,
};

// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Num,
	EDecalChannel_MAX,
};

// Enum Engine.*dc9bbb7e1b
enum class *dc9bbb7e1b : uint8 {
	*efd448433d,
	*9528189c05,
	*7b4af5ec34,
	*4b26a55edf,
	*f5e95e7779,
	*dc9bbb7e1b_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8 {
	Frame1,
	Frame2,
	EConstraintFrame_MAX,
};

// Enum Engine.*29213ec785
enum class *29213ec785 : uint8 {
	*7b4892be22,
	*3bb85f928b,
	*7eb5f8bf49,
	*5f0c002357,
	*29213ec785_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max,
	EPhysicalSurface_MAX,
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default,
	WalkableSlope_Increase,
	WalkableSlope_Decrease,
	WalkableSlope_Unwalkable,
	WalkableSlope_Max,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_ConnectedDormantPartial,
	DORM_Initial,
	DORN_MAX,
	ENetDormancy_MAX,
};

// Enum Engine.*e95df8de8f
enum class *e95df8de8f : uint8 {
	*6186ed3647,
	*e10c706e49,
	*84108ab311,
	*472d59bb90,
	*2b0d182776,
	*ce25f99494,
	*9cf8b37e73,
	*ad34e2aca3,
	*e95df8de8f_MAX,
};

// Enum Engine.*ef90852e39
enum class *ef90852e39 : uint8 {
	*859dafb08a,
	*d4bac523ce,
	*f2fe1684cf,
	*ef90852e39_MAX,
};

// Enum Engine.*052c72b990
enum class *052c72b990 : uint8 {
	*1126f4f802,
	*ea5c3e8cb0,
	*facefb617f,
	*a1bceb3072,
	*052c72b990_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.*c7500664d1
enum class *c7500664d1 : uint8 {
	*7dc0d4c017,
	*7f710e7129,
	*78e508268b,
	*f95bf715ec,
	*4b89b70813,
	*c95c9037c8,
	*c7500664d1_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.*3ce1b7244c
enum class *3ce1b7244c : uint8 {
	*790c993b2e,
	*64bc486808,
	*296d58c905,
	*3ce1b7244c_MAX,
};

// Enum Engine.*a6711154e9
enum class *a6711154e9 : uint8 {
	*2ba3b5a582,
	*6c82ba80b5,
	*554ee87a82,
	*9144b2bc1e,
	*a6711154e9_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.*fb7c530e30
enum class *fb7c530e30 : uint8 {
	*76d0058a41,
	*1cac56e8e3,
	*c44da350b4,
	*fb7c530e30_MAX,
};

// Enum Engine.*fa3ece5894
enum class *fa3ece5894 : uint8 {
	*b2233193b8,
	*06bbd52dde,
	*1a070f6c58,
	*34e5eec533,
	*fa3ece5894_MAX,
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic,
	ECC_WorldDynamic,
	ECC_Pawn,
	ECC_Visibility,
	ECC_Camera,
	ECC_PhysicsBody,
	ECC_Vehicle,
	ECC_Destructible,
	ECC_EngineTraceChannel1,
	ECC_EngineTraceChannel2,
	ECC_EngineTraceChannel3,
	ECC_EngineTraceChannel4,
	ECC_EngineTraceChannel5,
	ECC_EngineTraceChannel6,
	ECC_GameTraceChannel1,
	ECC_GameTraceChannel2,
	ECC_GameTraceChannel3,
	ECC_GameTraceChannel4,
	ECC_GameTraceChannel5,
	ECC_GameTraceChannel6,
	ECC_GameTraceChannel7,
	ECC_GameTraceChannel8,
	ECC_GameTraceChannel9,
	ECC_GameTraceChannel10,
	ECC_GameTraceChannel11,
	ECC_GameTraceChannel12,
	ECC_GameTraceChannel13,
	ECC_GameTraceChannel14,
	ECC_GameTraceChannel15,
	ECC_GameTraceChannel16,
	ECC_GameTraceChannel17,
	ECC_GameTraceChannel18,
	ECC_OverlapAll_Deprecated,
	ECC_MAX,
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled,
	Linear,
	Exponential,
	Replay,
	RotationOnly,
	ENetworkSmoothingMode_MAX,
};

// Enum Engine.*0160f2171d
enum class *0160f2171d : uint8 {
	*e80bb597a5,
	*cb0dfacdb6,
	*b31d87f6c0,
	*4722e492d4,
	*0160f2171d_MAX,
};

// Enum Engine.*3dd1006f1d
enum class *3dd1006f1d : uint8 {
	*6cdc0a86dd,
	*676f08cc5e,
	*7821339040,
	*12e539d91e,
	*eda98c5976,
	*d537fce109,
	*3f76fc370d,
	*3dd1006f1d_MAX,
};

// Enum Engine.*48309b4738
enum class *48309b4738 : uint8 {
	*6ab3fb5948,
	*b7e68e7b88,
	*96086fef99,
	*65187f4bd3,
	*4583175aea,
	*48309b4738_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color,
	SAMPLERTYPE_Grayscale,
	SAMPLERTYPE_Alpha,
	SAMPLERTYPE_Normal,
	SAMPLERTYPE_Masks,
	SAMPLERTYPE_DistanceFieldFont,
	SAMPLERTYPE_LinearColor,
	SAMPLERTYPE_LinearGrayscale,
	SAMPLERTYPE_MAX,
};

// Enum Engine.*973ee8cf71
enum class *973ee8cf71 : uint8 {
	*6606cfffe9,
	*64ef015dd1,
	*7963bb35a4,
	*fbe2ebd781,
	*973ee8cf71_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit,
	MSM_DefaultLit,
	MSM_Subsurface,
	MSM_PreintegratedSkin,
	MSM_ClearCoat,
	MSM_SubsurfaceProfile,
	MSM_TwoSidedFoliage,
	MSM_Hair,
	MSM_Cloth,
	MSM_Eye,
	MSM_MAX,
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth,
	DistanceField,
	HeightBuffer,
	EParticleCollisionMode_MAX,
};

// Enum Engine.*fb368dcb8a
enum class *fb368dcb8a : uint8 {
	*b5adbcff2e,
	*e373acb059,
	*56b57046fc,
	*0eb9dd02eb,
	*fb368dcb8a_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.*0fe85a4a3d
enum class *0fe85a4a3d : uint8 {
	*d442328bcd,
	*9d06bf4233,
	*4fff589df6,
	*b1a7225bd7,
	*0fe85a4a3d_MAX,
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR,
	SCS_SceneColorHDRNoAlpha,
	SCS_FinalColorLDR,
	SCS_SceneColorSceneDepth,
	SCS_SceneDepth,
	SCS_DeviceDepth,
	SCS_Normal,
	SCS_BaseColor,
	SCS_BRO_SuperSampling,
	SCS_BRO_Masked,
	SCS_LightingOnly,
	SCS_MAX,
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance,
	SortByProjectedZ,
	SortAlongAxis,
	ETranslucentSortPolicy_MAX,
};

// Enum Engine.*fe0a93d242
enum class *fe0a93d242 : uint8 {
	*b2d4793871,
	*63caa4294a,
	*f3ce420ff7,
	*fe0a93d242_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional,
	TLM_VolumetricDirectional,
	TLM_VolumetricPerVertexNonDirectional,
	TLM_VolumetricPerVertexDirectional,
	TLM_Surface,
	TLM_SurfaceDirectional,
	TLM_SurfacePerVertexNonDirectional,
	TLM_SurfacePerVertexDirectional,
	TLM_MAX,
};

// Enum Engine.*d7142ae523
enum class *d7142ae523 : uint8 {
	*926e795942,
	*4be5b37e75,
	*37913f9d69,
	*a608c8fedb,
	*d7142ae523_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque,
	BLEND_Masked,
	BLEND_Translucent,
	BLEND_Additive,
	BLEND_Modulate,
	BLEND_AlphaComposite,
	BLEND_MAX,
};

// Enum Engine.*a2a8175adf
enum class *a2a8175adf : uint8 {
	*3e64ca9432,
	*a9139c8124,
	*62b5d015b6,
	*a2a8175adf_MAX,
};

// Enum Engine.*57e521eac5
enum class *57e521eac5 : uint8 {
	*a28bb538fc,
	*46f71d45e5,
	*3ed5f4448c,
	*33951f23f1,
	*57e521eac5_MAX,
};

// Enum Engine.*d3f6c3740d
enum class *d3f6c3740d : uint8 {
	*dfb67a1f4e,
	*708d8f6462,
	*612c282f5c,
	*d3f6c3740d_MAX,
};

// Enum Engine.*626638c958
enum class *626638c958 : uint8 {
	*54046bc03b,
	*ece2fa0199,
	*cf8396705c,
	*83b677f7b4,
	*626638c958_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.*e839c111be
enum class *e839c111be : uint8 {
	*023cce16e8,
	*e1b232145f,
	*77f44f6768,
	*8fdcff6ed6,
	*f48b68c71b,
	*06ac250152,
	*1db01a91b8,
	*9a59b365e9,
	*e3f0764008,
	*47655ed9e1,
	*8edbb5dc1e,
	*cf1aaa0a1f,
	*228eab3e5b,
	*8c20410364,
	*d49320a95a,
	*b032a25423,
	*f4b74e9247,
	*00f685f310,
	*07152da364,
	*7211d2cc53,
	*4c2a2a6564,
	*d9e86e16be,
	*0c092076e2,
	*0086abbec7,
	*3b2d87e318,
	*7edc115460,
	*3513ca1f60,
	*e55b917a69,
	*e85ef97351,
	*ccbc025fbd,
	*aa88c4d844,
	*e839c111be_MAX,
};

// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8 {
	None,
	PlayCommand,
	PlayNoWorld,
	PlayPIE,
	PlayCreateDemoDriver,
	Connect,
	ConnectNoWorld,
	ConnectNoGameInstance,
	ConnectInitBase,
	ConnectStreamingReady,
	ConnectDemoNotFound,
	ConnectCorrupt,
	ConnectSpecificCorrupt,
	ConnectPostNoWorld,
	ConnectLoadMap,
	TickDispatchStreamer,
	TickDispatchFileAr,
	ConditionallyReadFrame,
	ConditionallyReadFrameFileAr,
	ConditionallyReadFrameStreamer,
	ConditionallyReadFrameTimeChecksum,
	ConditionallyReadFrameFileAr2,
	ConditionallyReadFrameExternalData,
	ConditionallyReadFramePacket,
	ConditionallyProcessPacket,
	DownloadHeader,
	DownloadHeaderDemoNotFound,
	DownloadHeaderCorrupt,
	DownloadHeaderSpecificCorrupt,
	DownloadHeaderLevelNamesAndTimes,
	CheckpointReady,
	CheckpointArchiveEmpty,
	CheckpointReadFrame,
	CheckpointReadFrameFileAr,
	CheckpointReadFrameStreamer,
	CheckpointReadFrameTimeChecksum,
	CheckpointReadFrameFileAr2,
	CheckpointReadFrameExternalData,
	CheckpointReadFramePacket,
	CheckpointProcessPacket,
	RecCommand,
	RecNoReplays,
	RecNoWorld,
	RecPIE,
	RecAlreadyPlay,
	RecCreateDemoDriver,
	Listen,
	ListenInitBase,
	ListenNoWorldSettings,
	ListenWriteHeader,
	ListenStreamingReady,
	TickFlushStreamer,
	TickFlushFileAr,
	SeamlessTravelWriteHeader,
	EDemoFailure_MAX,
};

// Enum Engine.*512e84dc38
enum class *512e84dc38 : uint8 {
	*d461ad0bca,
	*db0a8f444f,
	*23aa04e9a1,
	*2aa2bd600c,
	*512e84dc38_MAX,
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging,
	Lagging,
	ENetworkLagState_MAX,
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock,
	LockOnCapture,
	LockAlways,
	EMouseLockMode_MAX,
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture,
	CapturePermanently,
	CapturePermanently_IncludingInitialMouseDown,
	CaptureDuringMouseDown,
	CaptureDuringRightMouseDown,
	EMouseCaptureMode_MAX,
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed,
	IE_Released,
	IE_Repeat,
	IE_DoubleClick,
	IE_Axis,
	IE_MAX,
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled,
	Disabled,
	DevelopmentOnly,
	ENodeEnabledState_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.*584532d04f
enum class *584532d04f : uint8 {
	*042ae306da,
	*0a8e66c077,
	*464109f8e0,
	*584532d04f_MAX,
};

// Enum Engine.*6902d5af05
enum class *6902d5af05 : uint8 {
	*a73f888eba,
	*10191198b8,
	*b70f8cbe43,
	*202448744d,
	*2c753bec3f,
	*219cfda5ce,
	*6902d5af05_MAX,
};

// Enum Engine.*348233a8c0
enum class *348233a8c0 : uint8 {
	*c69d5d8048,
	*d06f2a748e,
	*58d76d11ed,
	*ba1002aa8c,
	*348233a8c0_MAX,
};

// Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8 {
	SG_MATERIAL_CHANNEL_AMBIENT,
	SG_MATERIAL_CHANNEL_DIFFUSE,
	SG_MATERIAL_CHANNEL_SPECULAR,
	SG_MATERIAL_CHANNEL_OPACITY,
	SG_MATERIAL_CHANNEL_EMISSIVE,
	SG_MATERIAL_CHANNEL_NORMALS,
	SG_MATERIAL_CHANNEL_DISPLACEMENT,
	SG_MATERIAL_CHANNEL_BASECOLOR,
	SG_MATERIAL_CHANNEL_ROUGHNESS,
	SG_MATERIAL_CHANNEL_METALLIC,
	SG_MATERIAL_CHANNEL_AO,
	SG_MATERIAL_CHANNEL_SUBSURFACE,
	SG_MATERIAL_CHANNEL_OPACITYMASK,
	SG_MATERIAL_CHANNEL_MAX,
};

// Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8 {
	TextureResolution_65,
	TextureResolution_129,
	TextureResolution_257,
	TextureResolution_513,
	TextureResolution_1025,
	TextureResolution_2049,
	TextureResolution_4097,
	TextureResolution_8193,
	TextureResolution_MAX,
};

// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8 {
	RGBA,
	RGB,
	L,
	ESimplygonColorChannels_MAX,
};

// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	ESimplygonTextureSamplingQuality_MAX,
};

// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8 {
	None,
	Color,
	Normals,
	Opacity,
	ESimplygonCasterType_MAX,
};

// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8 {
	None,
	VerySmall,
	Small,
	Medium,
	Large,
	VeryLarge,
	ESimplygonTextureStrech_MAX,
};

// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8 {
	Off,
	BakeTexture,
	BakeVertexColor,
	Replace,
	EMaterialLODType_MAX,
};

// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8 {
	Reduction,
	Remeshing,
	ESimplygonLODType_MAX,
};

// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8 {
	TrianglePercentage,
	OnScreenSize,
	MaxDeviation,
	EOptimizationMetric_MAX,
};

// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	EMaterialProxySmaplingQuality_MAX,
};

// Enum Engine.EUVStrech
enum class EUVStrech : uint8 {
	Small,
	Medium,
	Large,
	VeryLarge,
	EUVStrech_MAX,
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default,
	MaterialMergeType_Simplygon,
	MaterialMergeType_MAX,
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize,
	TextureSizingType_UseAutomaticBiasedSizes,
	TextureSizingType_UseManualOverrideTextureSize,
	TextureSizingType_UseSimplygonAutomaticSizing,
	TextureSizingType_MAX,
};

// Enum Engine.*bc6779cee3
enum class *bc6779cee3 : uint8 {
	*10807eb0df,
	*f05e667456,
	*d816891a14,
	*bc6779cee3_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.*1388681411
enum class *1388681411 : uint8 {
	*dc1bb08040,
	*b9f5a8565b,
	*f14ed0ffb4,
	*8a4120abed,
	*1388681411_MAX,
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High,
	Medium,
	Low,
	ELandscapeCullingPrecision_MAX,
};

// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8 {
	NoCollision,
	BlockAllWithComplexAsSimple,
	EPhysXAggregationMode_MAX,
};

// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8 {
	TextureSize,
	SurfaceArea,
	PixelDensity,
	UVSize,
	EChartAggregationMode_MAX,
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles,
	Vertices,
	Any,
	EStaticMeshReductionTerimationCriterion_MAX,
};

// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8 {
	No,
	Quarter,
	Half,
	Full,
	EImposterCaptureType_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EAutoBenchPathType
enum class EAutoBenchPathType : uint8 {
	SnakeCurve,
	HilbertCurve,
	EAutoBenchPathType_MAX,
};

// Enum Engine.EAutoBenchViewMode
enum class EAutoBenchViewMode : uint8 {
	Default,
	Top,
	EAutoBenchViewMode_MAX,
};

// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8 {
	Reduction,
	Proxy,
	EStaticMeshLODType_MAX,
};

// Enum Engine.*a8f652510d
enum class *a8f652510d : uint8 {
	*4b29f0cfbf,
	*c825e1cb27,
	*1810b7c212,
	*a8f652510d_MAX,
};

// Enum Engine.*2554d100d3
enum class *2554d100d3 : uint8 {
	*5e37117a0e,
	*7dafed6f79,
	*b0b65098e1,
	*54a907df5c,
	*05e6355b48,
	*f4af11ea1d,
	*b584696753,
	*b08734634b,
	*2554d100d3_MAX,
};

// Enum Engine.*6d2a7476ed
enum class *6d2a7476ed : uint8 {
	*3216d463bc,
	*68d89783de,
	*600fe5cbc1,
	*8925ff4bc5,
	*5d01267a07,
	*dfe828045b,
	*6d2a7476ed_MAX,
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor,
	MP_Opacity,
	MP_OpacityMask,
	MP_DiffuseColor,
	MP_SpecularColor,
	MP_BaseColor,
	MP_Metallic,
	MP_Specular,
	MP_Roughness,
	MP_Normal,
	MP_WorldPositionOffset,
	MP_WorldDisplacement,
	MP_TessellationMultiplier,
	MP_SubsurfaceColor,
	MP_SubsurfaceProfile,
	MP_CustomData0,
	MP_CustomData1,
	MP_AmbientOcclusion,
	MP_Refraction,
	MP_CustomizedUVs0,
	MP_CustomizedUVs1,
	MP_CustomizedUVs2,
	MP_CustomizedUVs3,
	MP_CustomizedUVs4,
	MP_CustomizedUVs5,
	MP_CustomizedUVs6,
	MP_CustomizedUVs7,
	MP_PixelDepthOffset,
	MP_Temperature,
	MP_TemperatureAlpha,
	MP_MaterialAttributes,
	MP_CustomOutput,
	MP_MAX,
};

// Enum Engine.*e1dccc797a
enum class *e1dccc797a : uint8 {
	*2207239894,
	*bca3b015a6,
	*ecee292de6,
	*e1dccc797a_MAX,
};

// Enum Engine.*341a67330c
enum class *341a67330c : uint8 {
	*94ed3dc591,
	*a0f7b94619,
	*55f388e915,
	*1f9bb6b2ec,
	*341a67330c_MAX,
};

// Enum Engine.*6533cb6460
enum class *6533cb6460 : uint8 {
	*59d1f50a31,
	*84394ea900,
	*81e409928c,
	*533f3a294f,
	*b9d2295b56,
	*102986a510,
	*fd90a405e5,
	*6533cb6460_MAX,
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default,
	REVERB_Bathroom,
	REVERB_StoneRoom,
	REVERB_Auditorium,
	REVERB_ConcertHall,
	REVERB_Cave,
	REVERB_Hallway,
	REVERB_StoneCorridor,
	REVERB_Alley,
	REVERB_Forest,
	REVERB_City,
	REVERB_Mountains,
	REVERB_Quarry,
	REVERB_Plain,
	REVERB_ParkingLot,
	REVERB_SewerPipe,
	REVERB_Underwater,
	REVERB_SmallRoom,
	REVERB_MediumRoom,
	REVERB_LargeRoom,
	REVERB_MediumHall,
	REVERB_LargeHall,
	REVERB_Plate,
	REVERB_MAX,
};

// Enum Engine.*20abdab529
enum class *20abdab529 : uint8 {
	*96b228b35a,
	*2318266501,
	*d3a10bf21c,
	*15cb81687f,
	*98ef3380d1,
	*a518a7e3d2,
	*20abdab529_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
	ENavigationOptionFlag_MAX,
};

// Enum Engine.*1807fae6b2
enum class *1807fae6b2 : uint8 {
	*e85a15d472,
	*e249f9cc9d,
	*b9f1c6e9cd,
	*323b9cf677,
	*265f78945e,
	*1807fae6b2_MAX,
};

// Enum Engine.*810c60768b
enum class *810c60768b : uint8 {
	*d50fe6804d,
	*898b3bf820,
	*0fa3584eef,
	*2f97d79e90,
	*956dd7bd8e,
	*810c60768b_MAX,
};

// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8 {
	AOBR_BlurRadius0,
	AOBR_BlurRadius2,
	AOBR_BlurRadius4,
	AOBR_MAX,
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG,
	BM_FFT,
	BM_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None,
	AAM_FXAA,
	AAM_TemporalAA,
	AAM_MSAA,
	AAM_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal,
	World,
	UserDefined,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.*be09c563dc
enum class *be09c563dc : uint8 {
	*2dd422dbef,
	*280303ce29,
	*efc2e8cf27,
	*be09c563dc_MAX,
};

// Enum Engine.*c16f6ea119
enum class *c16f6ea119 : uint8 {
	*d1358a1935,
	*14b30f83a5,
	*b90aeeb6b0,
	*c16f6ea119_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.*c86629a339
enum class *c86629a339 : uint8 {
	*1b4192f7a6,
	*7bd7079e0c,
	*1b3b1c0e78,
	*1fd2050d92,
	*c86629a339_MAX,
};

// Enum Engine.*034d083530
enum class *034d083530 : uint8 {
	*273227d1d6,
	*01c753afee,
	*f24b247b92,
	*23d87836fa,
	*034d083530_MAX,
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	CustomPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.*96e1e342d5
enum class *96e1e342d5 : uint8 {
	*798b3c0118,
	*a94af0e771,
	*730c10c4cf,
	*0bc25166c0,
	*989a134d45,
	*aaceab8cbf,
	*59d9a36168,
	*c4bd7848f0,
	*a4eea844ce,
	*21eba03d06,
	*12b49c6ebd,
	*96e1e342d5_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.*3c2fc2c9b8
enum class *3c2fc2c9b8 : uint8 {
	*bf3f2d7eb1,
	*0756368a16,
	*28b7b201ad,
	*1e41947d7f,
	*3c2fc2c9b8_MAX,
};

// Enum Engine.*ad3f6805e9
enum class *ad3f6805e9 : uint8 {
	*fd164d512f,
	*f4962b540a,
	*6a1b24d963,
	*a369e1afd5,
	*4e050ff1ea,
	*ad3f6805e9_MAX,
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface,
	MD_GBufferModify,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_Volume,
	MD_PostProcess,
	MD_UI,
	MD_MAX,
};

// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static,
	DynamicModifiersOnly,
	Dynamic,
	LegacyGeneration,
	ERuntimeGenerationType_MAX,
};

// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone,
	Watershed,
	ChunkyMonotone,
	ERecastPartitioning_MAX,
};

// Enum Engine.*4b423a681b
enum class *4b423a681b : uint8 {
	*cf7beb3b60,
	*3bad35ec9e,
	*7333ef9746,
	*655e28f4cc,
	*4b423a681b_MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.*42163a0557
enum class *42163a0557 : uint8 {
	*41393b211c,
	*62f88ca6dd,
	*660ef88349,
	*cf0c8c86b3,
	*42163a0557_MAX,
};

// Enum Engine.*9e910afe84
enum class *9e910afe84 : uint8 {
	*551c6855a4,
	*89b5ff19e8,
	*361619928d,
	*18c60451bc,
	*9e910afe84_MAX,
};

// Enum Engine.*13f471c754
enum class *13f471c754 : uint8 {
	*588f9b54d7,
	*39583daa03,
	*51e97ffc6f,
	*13f471c754_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any,
	EPET_Spawn,
	EPET_Death,
	EPET_Collision,
	EPET_Burst,
	EPET_Blueprint,
	EPET_MAX,
};

// Enum Engine.*3fd533dcc3
enum class *3fd533dcc3 : uint8 {
	*a95acd2884,
	*4a369652df,
	*11df82e63e,
	*3c7e7cf638,
	*3fd533dcc3_MAX,
};

// Enum Engine.*b41ed04210
enum class *b41ed04210 : uint8 {
	*bbd9de6412,
	*0da9d43477,
	*8da0159da7,
	*727fb9af5f,
	*b3ee09514f,
	*c169f5c0f8,
	*d34b2bd16a,
	*1ed079caca,
	*f2a1ea53ab,
	*b41ed04210_MAX,
};

// Enum Engine.*b51b4ffeef
enum class *b51b4ffeef : uint8 {
	*8c287ba3c6,
	*c402376d96,
	*a9d348da58,
	*7694958d31,
	*b51b4ffeef_MAX,
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	Custom,
	EAxisOption_MAX,
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear,
	Step,
	EAnimInterpolationType_MAX,
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	MaxWeight,
	NormalizeByWeight,
	BlendByWeight,
	ECurveBlendOption_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation,
	BRS_KeepLocalSpaceRotation,
	BRS_CopyFromTarget,
	BRS_MAX,
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace,
	BCS_ComponentSpace,
	BCS_ParentBoneSpace,
	BCS_BoneSpace,
	BCS_MAX,
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8 {
	Reduction,
	Proxy,
	ESkeletalMeshLODType_MAX,
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_ScreenSize,
	SMOT_MAX,
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off,
	SMOI_Lowest,
	SMOI_Low,
	SMOI_Normal,
	SMOI_High,
	SMOI_Highest,
	SMOI_MAX,
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles,
	SMTC_NumOfVerts,
	SMTC_TriangleOrVert,
	SMTC_AbsNumOfTriangles,
	SMTC_AbsNumOfVerts,
	SMTC_AbsTriangleOrVert,
	SMTC_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None,
	ACF_Float96NoW,
	ACF_Fixed48NoW,
	ACF_IntervalFixed32NoW,
	ACF_Fixed32NoW,
	ACF_Float32NoW,
	ACF_Identity,
	ACF_MAX,
};

// Enum Engine.*2194bae407
enum class *2194bae407 : uint8 {
	*6196ee3a18,
	*5c9dae0bd7,
	*1a54409a4e,
	*a9c1d72da6,
	*70a0955536,
	*2194bae407_MAX,
};

// Enum Engine.*a57817f14d
enum class *a57817f14d : uint8 {
	*69d0c573a3,
	*aaafb2f955,
	*4c0379ab05,
	*8db12ce6cf,
	*e4d1d97240,
	*a57817f14d_MAX,
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader,
	AlwaysFollower,
	AlwaysLeader,
	TransitionLeader,
	EAnimGroupRole_MAX,
};

// Enum Engine.*41eaaf581d
enum class *41eaaf581d : uint8 {
	*cedf63cd0d,
	*cdad12d78a,
	*b095ed5ae4,
	*1488bda4ab,
	*41eaaf581d_MAX,
};

// Enum Engine.*60121b7540
enum class *60121b7540 : uint8 {
	*bd09993b9e,
	*af4dc2eeae,
	*6fcbb3e43d,
	*51523d9fde,
	*60121b7540_MAX,
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared,
	Finished,
	MarkedForRemoval,
	ERootMotionSourceStatusFlags_MAX,
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override,
	Additive,
	ERootMotionAccumulateMode_MAX,
};

// Enum Engine.*197f0577eb
enum class *197f0577eb : uint8 {
	*ed196a7606,
	*d92c91a723,
	*ae43c81355,
	*30f2e2bb80,
	*197f0577eb_MAX,
};

// Enum Engine.ESplineDecalActorSelector
enum class ESplineDecalActorSelector : uint8 {
	Use_1,
	Use_2,
	Use_3,
	Use_4,
	None,
	ESplineDecalActorSelector_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.*e1f8784a57
enum class *e1f8784a57 : uint8 {
	*72565601f1,
	*64474e1ab5,
	*466e68c89d,
	*dab86d64df,
	*e1f8784a57_MAX,
};

// Enum Engine.*2bffb0a682
enum class *2bffb0a682 : uint8 {
	*44a3621d83,
	*e5ebc40d00,
	*d6d83e12f4,
	*3ac144ed93,
	*704dcd6b49,
	*172e975f3e,
	*1a0b79b276,
	*a2bcd3cf53,
	*2bffb0a682_MAX,
};

// Enum Engine.*7961971726
enum class *7961971726 : uint8 {
	*cc0451fbe5,
	*709900a7b2,
	*200b3f6f6b,
	*630f9ced3c,
	*7961971726_MAX,
};

// Enum Engine.*baa4b811d8
enum class *baa4b811d8 : uint8 {
	*45921aebfb,
	*6abe1d80dc,
	*36e99bcaf6,
	*6b374a5b2d,
	*baa4b811d8_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear,
	Logarithmic,
	Inverse,
	LogReverse,
	NaturalSound,
	Custom,
	EAttenuationDistanceModel_MAX,
};

// Enum Engine.*99714ccaa4
enum class *99714ccaa4 : uint8 {
	*9bf4e5c195,
	*18d518aa04,
	*c94dca9736,
	*99714ccaa4_MAX,
};

// Enum Engine.*6aa9026d9b
enum class *6aa9026d9b : uint8 {
	*6ba665bed9,
	*ed90149819,
	*e10bd81881,
	*bfb1e23e42,
	*ef08fc5963,
	*6aa9026d9b_MAX,
};

// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8 {
	RandomSeed,
	VariantIndex,
	PermutationIndex,
	EPreviewIndexType_MAX,
};

// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8 {
	Probability,
	LocalRatio,
	GlobalRatio,
	ESpawnPointRollType_MAX,
};

// Enum Engine.*1b300b6c96
enum class *1b300b6c96 : uint8 {
	*4e47403444,
	*d56cee4c0b,
	*c4c101b19d,
	*1b300b6c96_MAX,
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled,
	Dependency,
	ExplicitlyEnabled,
	EBlueprintNativizationFlag_MAX,
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default,
	Development,
	FinalRelease,
	EBlueprintCompileMode_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown,
	BS_Dirty,
	BS_Error,
	BS_UpToDate,
	BS_BeingCreated,
	BS_UpToDateWithWarnings,
	BS_MAX,
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown,
	NeverCook,
	DevelopmentCook,
	AlwaysCook,
	EPrimaryAssetCookRule_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8 {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickPoseWhenRendered,
	EMeshComponentUpdateFlag_MAX,
};

// Enum Engine.*4fed81d997
enum class *4fed81d997 : uint8 {
	*961ed9ba9e,
	*27fa21a97b,
	*8370624abb,
	*4fed81d997_MAX,
};

// Enum Engine.*0e659b2a22
enum class *0e659b2a22 : uint8 {
	*5c1861f751,
	*ae7d62582e,
	*96be8406cb,
	*0e659b2a22_MAX,
};

// Enum Engine.*208b11c2e2
enum class *208b11c2e2 : uint8 {
	*f53a76e53b,
	*08651ad9b3,
	*8fd9c4db33,
	*705d459a52,
	*208b11c2e2_MAX,
};

// Enum Engine.*9d461b4f02
enum class *9d461b4f02 : uint8 {
	*237bc8187d,
	*869f5d6d8a,
	*9320881204,
	*9d461b4f02_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8 {
	Default,
	Unfiltered,
	SimpleAverage,
	Sharpen0,
	Sharpen1,
	Sharpen2,
	Sharpen3,
	Sharpen4,
	Sharpen5,
	Sharpen6,
	Sharpen7,
	Sharpen8,
	Sharpen9,
	Sharpen10,
	ETextureDownscaleOptions_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup,
	TMGS_SimpleAverage,
	TMGS_Sharpen0,
	TMGS_Sharpen1,
	TMGS_Sharpen2,
	TMGS_Sharpen3,
	TMGS_Sharpen4,
	TMGS_Sharpen5,
	TMGS_Sharpen6,
	TMGS_Sharpen7,
	TMGS_Sharpen8,
	TMGS_Sharpen9,
	TMGS_Sharpen10,
	TMGS_NoMipmaps,
	TMGS_LeaveExistingMips,
	TMGS_Blur1,
	TMGS_Blur2,
	TMGS_Blur3,
	TMGS_Blur4,
	TMGS_Blur5,
	TMGS_Unfiltered,
	TMGS_MAX,
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World,
	TEXTUREGROUP_WorldNormalMap,
	TEXTUREGROUP_WorldSpecular,
	TEXTUREGROUP_Character,
	TEXTUREGROUP_CharacterNormalMap,
	TEXTUREGROUP_CharacterSpecular,
	TEXTUREGROUP_Weapon,
	TEXTUREGROUP_WeaponNormalMap,
	TEXTUREGROUP_WeaponSpecular,
	TEXTUREGROUP_Vehicle,
	TEXTUREGROUP_VehicleNormalMap,
	TEXTUREGROUP_VehicleSpecular,
	TEXTUREGROUP_Landscape,
	TEXTUREGROUP_LandscapeNormalMap,
	TEXTUREGROUP_LandscapeSpecular,
	TEXTUREGROUP_Cinematic,
	TEXTUREGROUP_Effects,
	TEXTUREGROUP_EffectsNotFiltered,
	TEXTUREGROUP_Skybox,
	TEXTUREGROUP_UI,
	TEXTUREGROUP_Lightmap,
	TEXTUREGROUP_RenderTarget,
	TEXTUREGROUP_MobileFlattened,
	TEXTUREGROUP_ProcBuilding_Face,
	TEXTUREGROUP_ProcBuilding_LightMap,
	TEXTUREGROUP_Shadowmap,
	TEXTUREGROUP_ColorLookupTable,
	TEXTUREGROUP_Terrain_Heightmap,
	TEXTUREGROUP_Terrain_Weightmap,
	TEXTUREGROUP_Bokeh,
	TEXTUREGROUP_IESLightProfile,
	TEXTUREGROUP_Pixels2D,
	TEXTUREGROUP_HierarchicalLOD,
	TEXTUREGROUP_MAX,
};

// Enum Engine.*983b06af31
enum class *983b06af31 : uint8 {
	*4baef96ac1,
	*5d9520caa9,
	*71c3b74f0b,
	*99f055e5cb,
	*167745bad1,
	*8ffd7ac17f,
	*c71b7891e0,
	*fec066e4ca,
	*d2816804c7,
	*88dad0f257,
	*620e56ea48,
	*983b06af31_MAX,
};

// Enum Engine.*0b4ae2d09f
enum class *0b4ae2d09f : uint8 {
	*ec8f80f6fa,
	*9a6ff958f1,
	*f63a5134e0,
	*8bc1540210,
	*0b4ae2d09f_MAX,
};

// Enum Engine.*6cc4082bec
enum class *6cc4082bec : uint8 {
	*07e51756b5,
	*cda316afa9,
	*3c797d25d2,
	*03df82aef4,
	*6cc4082bec_MAX,
};

// Enum Engine.*30fecd1a30
enum class *30fecd1a30 : uint8 {
	*b22c84ecce,
	*8ca73d1f36,
	*a12587cd83,
	*a245da9952,
	*7f379a6a62,
	*56dbad7cff,
	*30fecd1a30_MAX,
};

// Enum Engine.*4e35ac1492
enum class *4e35ac1492 : uint8 {
	*6d7095f6e3,
	*0216629344,
	*670946a498,
	*80087cb71f,
	*4e35ac1492_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default,
	TC_Normalmap,
	TC_Masks,
	TC_Grayscale,
	TC_Displacementmap,
	TC_VectorDisplacementmap,
	TC_HDR,
	TC_EditorIcon,
	TC_Alpha,
	TC_DistanceFieldFont,
	TC_HDR_Compressed,
	TC_BC7,
	TC_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.*4cf92d6148
enum class *4cf92d6148 : uint8 {
	*82b34abdbf,
	*ea13144a14,
	*aa6f14f4a0,
	*b6eab920a6,
	*67145745f1,
	*4cf92d6148_MAX,
};

// Enum Engine.*1cfb9a3d96
enum class *1cfb9a3d96 : uint8 {
	*bf83cbdef2,
	*53d2bdbaef,
	*4c7f93a289,
	*81ee5edd0f,
	*1cfb9a3d96_MAX,
};

// Enum Engine.*95e0c5b63a
enum class *95e0c5b63a : uint8 {
	*18cfd3ba2e,
	*d63866a831,
	*262e975fa5,
	*95e0c5b63a_MAX,
};

// Enum Engine.*74e6c36e18
enum class *74e6c36e18 : uint8 {
	*dd4b2e81af,
	*e0ed80034b,
	*56baa46ab2,
	*bfb52ef8ed,
	*74e6c36e18_MAX,
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked,
	SLT_TrackerLocked,
	SLT_FaceLocked,
	SLT_MAX,
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional,
	Point,
	EWindSourceType_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.*94773f65a3
enum class *94773f65a3 : uint8 {
	*d4217f6534,
	*28046bbdae,
	*6ba1382227,
	*94773f65a3_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_MAX,
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.*2c21681ba0
enum class *2c21681ba0 : uint8 {
	*d20e17eefa,
	*0dd212baaa,
	*f46106acba,
	*ebbade77d9,
	*2c21681ba0_MAX,
};

// Enum Engine.*aa3b123235
enum class *aa3b123235 : uint8 {
	*73ae7f623f,
	*5d4975a427,
	*5c3bb6427f,
	*aa3b123235_MAX,
};

// Enum Engine.*b9880deb78
enum class *b9880deb78 : uint8 {
	*6272ac809b,
	*c98f8df2c3,
	*56b83633b2,
	*b9880deb78_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.*1c16b66e99
enum class *1c16b66e99 : uint8 {
	*24e4989d66,
	*c7082ee5df,
	*f207f8d48e,
	*b6dd97e7ef,
	*768a633e34,
	*1c16b66e99_MAX,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAscending,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor,
	Eye,
	EHMDTrackingOrigin_MAX,
};

// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum Engine.*c7f21d41e2
enum class *c7f21d41e2 : uint8 {
	*acac0a3b6e,
	*c368061e9a,
	*37799de2d6,
	*794a5f40cf,
	*c7f21d41e2_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear,
	Step,
	SinusoidalIn,
	SinusoidalOut,
	SinusoidalInOut,
	EaseIn,
	EaseOut,
	EaseInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	EEasingFunc_MAX,
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven,
	HalfFromZero,
	HalfToZero,
	FromZero,
	ToZero,
	ToNegativeInfinity,
	ToPositiveInfinity,
	ERoundingMode_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None,
	LogicalNegateBool,
	Dereference,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.*c98926c0a7
enum class *c98926c0a7 : uint8 {
	*ba99504a6a,
	*6d09d6d1bd,
	*0d96666021,
	*c98926c0a7_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault,
	CTF_UseSimpleAndComplex,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.*aa4397a427
enum class *aa4397a427 : uint8 {
	*1d0ddaec64,
	*9a588ec422,
	*42354f4fde,
	*aa4397a427_MAX,
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	TT_None,
	TT_Paused,
	TT_Loading,
	TT_Saving,
	TT_Connecting,
	TT_Precaching,
	TT_WaitingToConnect,
	TT_MAX,
};

// Enum Engine.*22e2a60f3d
enum class *22e2a60f3d : uint8 {
	*36b87c51bf,
	*e52e8dd142,
	*9c37c32854,
	*8b93fa723e,
	*8df98d5e38,
	*9cfaabb9cc,
	*22e2a60f3d_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average,
	Min,
	Multiply,
	Max,
	EFrictionCombineMode_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	EMobileMSAASampleCount_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.*27f255531e
enum class *27f255531e : uint8 {
	*315a1b75f8,
	*379d53cc2b,
	*bd379cce2a,
	*2ab764a5cf,
	*27f255531e_MAX,
};

// Enum Engine.*fda3020628
enum class *fda3020628 : uint8 {
	*74e2883814,
	*aa5b231a6c,
	*74baefb99e,
	*bb158eae04,
	*fda3020628_MAX,
};

// Enum Engine.*94718777a6
enum class *94718777a6 : uint8 {
	*d6ce197b6b,
	*cc24d2d79b,
	*72e0c74545,
	*be6a1bf370,
	*1026a99369,
	*b84af78dff,
	*94718777a6_MAX,
};

// Enum Engine.*456c84eba5
enum class *456c84eba5 : uint8 {
	*463b5b9dce,
	*a2efbdb418,
	*bb0da09be4,
	*df124091e7,
	*30e52b2d88,
	*e491b826d0,
	*ab05e5d526,
	*456c84eba5_MAX,
};

// Enum Engine.*2a0e7f4281
enum class *2a0e7f4281 : uint8 {
	*80502f3800,
	*842ec797cf,
	*c812c79913,
	*8a33d5a38d,
	*d0f92bf75a,
	*e6060c9da0,
	*2a0e7f4281_MAX,
};

// Enum Engine.*3efea00a93
enum class *3efea00a93 : uint8 {
	*a0c7250f27,
	*042844e343,
	*08a42e7af4,
	*9c6e090766,
	*3efea00a93_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EGraphicsAPIType
enum class EGraphicsAPIType : uint8 {
	DX11,
	DX11_Enhanced,
	DX12,
	EGraphicsAPIType_MAX,
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWindowMode_MAX,
};

// Enum Engine.*b3102c062a
enum class *b3102c062a : uint8 {
	*47d83d8aac,
	*f9ed6c59b9,
	*8e46735cf9,
	*b750028ce5,
	*b3102c062a_MAX,
};

// Enum Engine.*abc20a9196
enum class *abc20a9196 : uint8 {
	*f74c9b1a27,
	*de95b6e4b9,
	*88dd40a90c,
	*5cb4a371df,
	*abc20a9196_MAX,
};

// Enum Engine.*ac137bec3f
enum class *ac137bec3f : uint8 {
	*0403ff523c,
	*e74c5c0d79,
	*306ce0dc35,
	*808c81434e,
	*736a0d9dc0,
	*d69084bd17,
	*84646a637b,
	*ac137bec3f_MAX,
};

// Enum Engine.*e759acebdc
enum class *e759acebdc : uint8 {
	*f0661a3af4,
	*043a05a470,
	*dc84b82041,
	*af2f4eefd2,
	*643778e1e5,
	*e759acebdc_MAX,
};

// Enum Engine.*70b491607d
enum class *70b491607d : uint8 {
	*9098fec965,
	*f1e75e30cc,
	*29723bde69,
	*1c7a4c8c8c,
	*70b491607d_MAX,
};

// Enum Engine.*0a5a696a1e
enum class *0a5a696a1e : uint8 {
	*49195c7dab,
	*bec752b279,
	*ec1f7af478,
	*27b828068c,
	*0a5a696a1e_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.*77543981e5
enum class *77543981e5 : uint8 {
	*b3efd061ab,
	*bce48d03ea,
	*f99895e257,
	*229e0a8085,
	*77543981e5_MAX,
};

// Enum Engine.*e5f7ae9513
enum class *e5f7ae9513 : uint8 {
	*91f4d69e7c,
	*501c9d95d5,
	*eebf3b89ed,
	*4efaa7fffd,
	*e3029b2f10,
	*e5f7ae9513_MAX,
};

// Enum Engine.*464083379d
enum class *464083379d : uint8 {
	*8ff74ed4fa,
	*196460b1e1,
	*9779f0260a,
	*3977e8ebb6,
	*0944b29ec8,
	*464083379d_MAX,
};

// Enum Engine.*e6c42c26a2
enum class *e6c42c26a2 : uint8 {
	*e5d492cbe9,
	*d863a2aa69,
	*b52f72c65f,
	*b7c50443ba,
	*d8495063d2,
	*ac04c5ce36,
	*ed4a7f2af1,
	*5a74599128,
	*19c01e1865,
	*51c0872645,
	*e6c42c26a2_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex,
	NOISEFUNCTION_GradientTex,
	NOISEFUNCTION_GradientTex3D,
	NOISEFUNCTION_GradientALU,
	NOISEFUNCTION_ValueALU,
	NOISEFUNCTION_VoronoiALU,
	NOISEFUNCTION_MAX,
};

// Enum Engine.*fd5a5aee7f
enum class *fd5a5aee7f : uint8 {
	*a9c291d5bf,
	*25de95816a,
	*0b3ad5e352,
	*fd5a5aee7f_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor,
	PPI_SceneDepth,
	PPI_DiffuseColor,
	PPI_SpecularColor,
	PPI_SubsurfaceColor,
	PPI_BaseColor,
	PPI_Specular,
	PPI_Metallic,
	PPI_WorldNormal,
	PPI_SeparateTranslucency,
	PPI_Opacity,
	PPI_Roughness,
	PPI_MaterialAO,
	PPI_CustomDepth,
	PPI_PostProcessInput0,
	PPI_PostProcessInput1,
	PPI_PostProcessInput2,
	PPI_PostProcessInput3,
	PPI_PostProcessInput4,
	PPI_PostProcessInput5,
	PPI_PostProcessInput6,
	PPI_DecalMask,
	PPI_ShadingModel,
	PPI_AmbientOcclusion,
	PPI_CustomStencil,
	PPI_StoredBaseColor,
	PPI_StoredSpecular,
	PPI_ScreenCopy,
	PPI_SceneStencil,
	PPI_IndoorMask,
	PPI_GIVolumes,
	PPI_Thermal,
	PPI_GMod_WorldNormal,
	PPI_GMod_Metallic,
	PPI_GMod_Specular,
	PPI_GMod_Roughness,
	PPI_GMod_BaseColor,
	PPI_GMod_Opacity,
	PPI_MAX,
};

// Enum Engine.*9e0d4bc8b8
enum class *9e0d4bc8b8 : uint8 {
	*b22eba96c8,
	*4d1540e41d,
	*bb99fbdb2e,
	*3060be9689,
	*9e0d4bc8b8_MAX,
};

// Enum Engine.*7f64136e78
enum class *7f64136e78 : uint8 {
	*807d8f2636,
	*1e9b80ef59,
	*f79f65da2a,
	*7f64136e78_MAX,
};

// Enum Engine.*048f7572de
enum class *048f7572de : uint8 {
	*289b4402c5,
	*7066861edb,
	*afdb16b352,
	*4f53f7a969,
	*9cbe714c08,
	*e8187a8a88,
	*f208a461ef,
	*131892ba47,
	*048f7572de_MAX,
};

// Enum Engine.*90c7e3f888
enum class *90c7e3f888 : uint8 {
	*e0e7bdfa27,
	*996de8b0fd,
	*12f5c232d8,
	*e3ba2ec81c,
	*44972cd137,
	*1304906854,
	*90c7e3f888_MAX,
};

// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8 {
	R,
	G,
	B,
	A,
	ETextureChannel_MAX,
};

// Enum Engine.*4b7d5739ea
enum class *4b7d5739ea : uint8 {
	*55c8fdd7c1,
	*26955e9041,
	*3a36e823c1,
	*c75b8115b8,
	*1226564bb0,
	*4b7d5739ea_MAX,
};

// Enum Engine.*c4105ad78d
enum class *c4105ad78d : uint8 {
	*c27c9b1591,
	*f733fbac33,
	*3de6bde86e,
	*0b0fffd596,
	*5f978f000c,
	*c4105ad78d_MAX,
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize,
	TMTM_TexelSize,
	TMTM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_Camera,
	TRANSFORM_ParticleWorld,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_Camera,
	TRANSFORMSOURCE_ParticleWorld,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_Camera,
	TRANSFORMPOSSOURCE_Particle,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.*e70594cc36
enum class *e70594cc36 : uint8 {
	*46a5dc0379,
	*28ad9d945b,
	*151aa36e76,
	*5f06668397,
	*3cff84082a,
	*854d95da10,
	*e70594cc36_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceViewPosition,
	MEVP_WorldSpaceCameraPosition,
	MEVP_ViewportOffset,
	MEVP_MAX,
};

// Enum Engine.*4fed6020a6
enum class *4fed6020a6 : uint8 {
	*efdc321e10,
	*6e3eab95c7,
	*02559e6ba2,
	*d1cfc25253,
	*35843f6530,
	*9e53aa985d,
	*7b2193fdc2,
	*4fed6020a6_MAX,
};

// Enum Engine.*b6017233f1
enum class *b6017233f1 : uint8 {
	*46c1292a15,
	*fb40fd76fd,
	*3e412c76ad,
	*c165747c97,
	*33c30760cd,
	*e873e78094,
	*2a47f06634,
	*8c237b1bcc,
	*bbde0bec16,
	*b6017233f1_MAX,
};

// Enum Engine.*d5a42b1b64
enum class *d5a42b1b64 : uint8 {
	*b684e5b4d3,
	*1d7dd1d058,
	*ae9ca18a52,
	*5f7b8afa9f,
	*0d76319e62,
	*4417e73ae5,
	*c121102193,
	*d9539c23f9,
	*5cdf4f8c2a,
	*3c7adceffa,
	*40e232d9b7,
	*99f599892a,
	*832a205c8c,
	*d5a42b1b64_MAX,
};

// Enum Engine.*d91c4a4005
enum class *d91c4a4005 : uint8 {
	*9c888e7dae,
	*f652ba07c0,
	*dc34f87e96,
	*34499c4d51,
	*fc3e1898f6,
	*4a763d690f,
	*d91c4a4005_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.*fd033a2040
enum class *fd033a2040 : uint8 {
	*65b2186143,
	*fbb7eba77c,
	*7e7c682168,
	*fd033a2040_MAX,
};

// Enum Engine.*b5b9476706
enum class *b5b9476706 : uint8 {
	*0ab48aa04f,
	*7894d951b6,
	*dcb891d602,
	*0a793d5c45,
	*65fd83c867,
	*7c2035155d,
	*5fc004ca12,
	*0c939640fa,
	*b5b9476706_MAX,
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto,
	Complete,
	DisableTick,
	DisableTickAndKill,
	Num,
	EParticleSystemInsignificanceReaction_MAX,
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low,
	Medium,
	High,
	Critical,
	Num,
	EParticleSignificanceLevel_MAX,
};

// Enum Engine.*5595ddf644
enum class *5595ddf644 : uint8 {
	*149cd43bc4,
	*c75b45ba22,
	*86be9ca197,
	*5595ddf644_MAX,
};

// Enum Engine.*8503795244
enum class *8503795244 : uint8 {
	*dca576f7f6,
	*aa5ff5c8c2,
	*e03942dc88,
	*be0d7d7e30,
	*f0ed3db39c,
	*7bc935a775,
	*e2f2d28772,
	*3a1eb175fb,
	*3f24639201,
	*d200794645,
	*8503795244_MAX,
};

// Enum Engine.*136e2a081b
enum class *136e2a081b : uint8 {
	*2a57b7c7ff,
	*46b3332846,
	*3d1b1a0922,
	*136e2a081b_MAX,
};

// Enum Engine.*bb61234cfc
enum class *bb61234cfc : uint8 {
	*485da26020,
	*0f24924b13,
	*b53fe02cca,
	*17c89a3d2b,
	*bccaa85601,
	*bb61234cfc_MAX,
};

// Enum Engine.*c74e059cea
enum class *c74e059cea : uint8 {
	*5952334175,
	*3c0c4f9bb9,
	*dac7229170,
	*ad9ce3988b,
	*c817dcc053,
	*17c0bddf9d,
	*c74e059cea_MAX,
};

// Enum Engine.*3d38c0107c
enum class *3d38c0107c : uint8 {
	*dc05778d28,
	*9970a04e37,
	*8cabc2cee2,
	*3d38c0107c_MAX,
};

// Enum Engine.*7944475c9d
enum class *7944475c9d : uint8 {
	*71faaf7a0a,
	*f1f9b452a9,
	*2ff787292f,
	*5bd5fe65e7,
	*7944475c9d_MAX,
};

// Enum Engine.*04e2fde1b3
enum class *04e2fde1b3 : uint8 {
	*c31d1ff98c,
	*8936d5ddfd,
	*7d2962c26c,
	*bade388d70,
	*79a7915404,
	*99d6d408f2,
	*206970bff8,
	*04e2fde1b3_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.*d382eb22ba
enum class *d382eb22ba : uint8 {
	*80ca4b0d3c,
	*ba4693ef9d,
	*74793ad21e,
	*d382eb22ba_MAX,
};

// Enum Engine.*c983b176b8
enum class *c983b176b8 : uint8 {
	*eca20dff14,
	*9a8ea6265e,
	*8ea18d7b2b,
	*c983b176b8_MAX,
};

// Enum Engine.*6d49cb011e
enum class *6d49cb011e : uint8 {
	*707a2dd141,
	*6cd61f21cd,
	*e51cdb70d8,
	*6d49cb011e_MAX,
};

// Enum Engine.*5afd25f4f7
enum class *5afd25f4f7 : uint8 {
	*4fbff9b869,
	*d015363dd5,
	*6e1a25fdae,
	*974f47564f,
	*5afd25f4f7_MAX,
};

// Enum Engine.*d8b9adc53b
enum class *d8b9adc53b : uint8 {
	*fd57f7eda1,
	*5eeb28a9be,
	*e810cf3d7f,
	*d8b9adc53b_MAX,
};

// Enum Engine.*6e5f7bad20
enum class *6e5f7bad20 : uint8 {
	*cf2a26fdf4,
	*3840bed8d4,
	*e64a5b9b23,
	*3e2c14e2de,
	*6e5f7bad20_MAX,
};

// Enum Engine.*4ab61602a7
enum class *4ab61602a7 : uint8 {
	*9595025b18,
	*9b0347c1b9,
	*ee3347df3b,
	*4c2bfa1895,
	*5db8f0240b,
	*bef90545af,
	*27a250e2c8,
	*916603a1b7,
	*b6c3a8b91f,
	*619abc77ab,
	*a97f97cf9a,
	*4ab61602a7_MAX,
};

// Enum Engine.*f145005380
enum class *f145005380 : uint8 {
	*02871d8a08,
	*47f9b4e66a,
	*c88791b08f,
	*59fa737516,
	*9121780afc,
	*33d952f75f,
	*badcfcec71,
	*f145005380_MAX,
};

// Enum Engine.*c7a988d74d
enum class *c7a988d74d : uint8 {
	*c4e52b2346,
	*de97ba06ba,
	*110bcf9a30,
	*f66e3b6851,
	*700fc6d2bd,
	*e7093585d8,
	*c7a988d74d_MAX,
};

// Enum Engine.*ac7e2f8d49
enum class *ac7e2f8d49 : uint8 {
	*113f81ef82,
	*fcd74330d4,
	*192dd20ae5,
	*ac7e2f8d49_MAX,
};

// Enum Engine.*fb06e9e896
enum class *fb06e9e896 : uint8 {
	*781576818e,
	*de4174d15b,
	*ad3edabf2a,
	*3d793fff90,
	*fb06e9e896_MAX,
};

// Enum Engine.*9f0ab7b466
enum class *9f0ab7b466 : uint8 {
	*fc261b4ffb,
	*bc556e8aa1,
	*c290400c08,
	*2261fe9f9c,
	*417cd1218c,
	*e6376e650d,
	*9f0ab7b466_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None,
	FlipUV,
	FlipUOnly,
	FlipVOnly,
	RandomFlipUV,
	RandomFlipUOnly,
	RandomFlipVOnly,
	RandomFlipUVIndependent,
	EParticleUVFlipMode_MAX,
};

// Enum Engine.*17eb936a6d
enum class *17eb936a6d : uint8 {
	*0a83a83ff8,
	*408220c67e,
	*3c46ec1e16,
	*955e841bc1,
	*17eb936a6d_MAX,
};

// Enum Engine.*6bd7d42181
enum class *6bd7d42181 : uint8 {
	*c3c8c767ee,
	*4757ae9a3b,
	*42f9f11481,
	*d69a55f0aa,
	*6bd7d42181_MAX,
};

// Enum Engine.*e987ef3f73
enum class *e987ef3f73 : uint8 {
	*d06d3831a8,
	*170e3f387d,
	*a22392d502,
	*7a5ce5d56c,
	*e987ef3f73_MAX,
};

// Enum Engine.*1afeed6772
enum class *1afeed6772 : uint8 {
	*665799bdf3,
	*bd9c05742f,
	*82493f7698,
	*9206e2bdd1,
	*e2e9764592,
	*cb6b0cebb7,
	*7a3356c0be,
	*46096c2dc0,
	*5c7a7030f0,
	*8566ded4f6,
	*8d80287b9d,
	*6b3fd179a3,
	*4f8423daa4,
	*b4a61faaca,
	*1afeed6772_MAX,
};

// Enum Engine.*4264b5be7b
enum class *4264b5be7b : uint8 {
	*3d39369750,
	*52eaefa82a,
	*c0ec691f11,
	*2c96ffc4a5,
	*3d6a882a4c,
	*8604942b65,
	*4264b5be7b_MAX,
};

// Enum Engine.*ee5a565807
enum class *ee5a565807 : uint8 {
	*cd4656da2e,
	*9b853be599,
	*745793ea64,
	*ef03b4da16,
	*ee5a565807_MAX,
};

// Enum Engine.*196c1b0b76
enum class *196c1b0b76 : uint8 {
	*d7aa7c59c6,
	*6a63ce8ffb,
	*973e12c077,
	*d8479ded47,
	*196c1b0b76_MAX,
};

// Enum Engine.*02355f528f
enum class *02355f528f : uint8 {
	*a3e29a6d12,
	*a762e41d4d,
	*c0bab504fc,
	*4e9ab84e1d,
	*b19c4fbd1b,
	*9227375720,
	*c2c34b0807,
	*014b175558,
	*02355f528f_MAX,
};

// Enum Engine.*530f795373
enum class *530f795373 : uint8 {
	*37374aa3ce,
	*c0ac44a59f,
	*44d7b8f526,
	*530f795373_MAX,
};

// Enum Engine.*69ec692c17
enum class *69ec692c17 : uint8 {
	*26fb6edb81,
	*f19fa95ff5,
	*be8bdda0ee,
	*b41e3e3b4f,
	*1f09e0bf20,
	*69ec692c17_MAX,
};

// Enum Engine.*37dd959abf
enum class *37dd959abf : uint8 {
	*a353326e65,
	*a377f1d096,
	*b6af44ad7e,
	*37dd959abf_MAX,
};

// Enum Engine.*51985fa6fc
enum class *51985fa6fc : uint8 {
	*9d77db2fd2,
	*ec6623dbdd,
	*0c80f9a80c,
	*b18ed75f35,
	*51985fa6fc_MAX,
};

// Enum Engine.*df79ac9808
enum class *df79ac9808 : uint8 {
	*35fdafbb42,
	*82a55df6c7,
	*9460b912c3,
	*d43fa5474e,
	*df79ac9808_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation,
	Translation,
	Max,
	EControlConstraint_MAX,
};

// Enum Engine.*47e993767b
enum class *47e993767b : uint8 {
	*328b2303df,
	*d04f0e0efe,
	*eccdb21b8c,
	*d67b13e25d,
	*47e993767b_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	StopLowestPriority,
	StopQuietest,
	StopLowestPriorityThenPreventNew,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default,
	SOUNDGROUP_Effects,
	SOUNDGROUP_UI,
	SOUNDGROUP_Music,
	SOUNDGROUP_Voice,
	SOUNDGROUP_GameSoundGroup1,
	SOUNDGROUP_GameSoundGroup2,
	SOUNDGROUP_GameSoundGroup3,
	SOUNDGROUP_GameSoundGroup4,
	SOUNDGROUP_GameSoundGroup5,
	SOUNDGROUP_GameSoundGroup6,
	SOUNDGROUP_GameSoundGroup7,
	SOUNDGROUP_GameSoundGroup8,
	SOUNDGROUP_GameSoundGroup9,
	SOUNDGROUP_GameSoundGroup10,
	SOUNDGROUP_GameSoundGroup11,
	SOUNDGROUP_GameSoundGroup12,
	SOUNDGROUP_GameSoundGroup13,
	SOUNDGROUP_GameSoundGroup14,
	SOUNDGROUP_GameSoundGroup15,
	SOUNDGROUP_GameSoundGroup16,
	SOUNDGROUP_GameSoundGroup17,
	SOUNDGROUP_GameSoundGroup18,
	SOUNDGROUP_GameSoundGroup19,
	SOUNDGROUP_GameSoundGroup20,
	SOUNDGROUP_MAX,
};

// Enum Engine.*204d5eee34
enum class *204d5eee34 : uint8 {
	*25e810191f,
	*83bb502e11,
	*f9b30bae4b,
	*d13c95bcd5,
	*7875d483eb,
	*51afe4a993,
	*9aa8497c13,
	*91db861d25,
	*c9dc1043e5,
	*204d5eee34_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.*8c9b82cd9a
enum class *8c9b82cd9a : uint8 {
	*274d6d5ca7,
	*bf37ed3370,
	*29812e3a4e,
	*0548752d1e,
	*8c9b82cd9a_MAX,
};

// Enum Engine.*5fd3db7b73
enum class *5fd3db7b73 : uint8 {
	*0b155c16a0,
	*ae6fa378e9,
	*9b8219c28c,
	*ce17882e43,
	*2a2f27568e,
	*5fd3db7b73_MAX,
};

// Enum Engine.*1e21444359
enum class *1e21444359 : uint8 {
	*ae191f015e,
	*8a7956a74b,
	*41fa03edbf,
	*1e21444359_MAX,
};

// Enum Engine.EVolumetricDataFormat
enum class EVolumetricDataFormat : uint8 {
	R8,
	RG8,
	RGBA8,
	R16,
	RG16,
	R16_Float,
	RG16_Float,
	RGBA16_Float,
	R32_Float,
	RG32_Float,
	RGBA32_Float,
	EVolumetricDataFormat_MAX,
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float,
	Bool,
	Curve,
	EAnimAlphaInputType_MAX,
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard,
	EM_Freeze,
	EM_DelayedFreeze,
	EM_MAX,
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose,
	EDS_DestinationPose,
	EDS_MAX,
};

// Enum Engine.*0634ee5bd9
enum class *0634ee5bd9 : uint8 {
	*3ccd3bf0cd,
	*8ac3846406,
	*b76ca5ec04,
	*0634ee5bd9_MAX,
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X,
	Y,
	Z,
	EVertexPaintAxis_MAX,
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow,
	Sphere,
	Line,
	OnScreenMessage,
	CoordinateSystem,
	EDrawDebugItemType_MAX,
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM,
	CustomSphere,
	InnerSphere,
	OuterSphere,
	AnimPhysCollisionType_MAX,
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX,
	AxisY,
	AxisZ,
	AnimPhysTwistAxis_MAX,
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay,
	VerticalBox,
	EWindowTitleBarMode_MAX,
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FDistributionLookupTable {
	bool Op; // 0x00(0x01)
	bool EntryCount; // 0x01(0x01)
	bool EntryStride; // 0x02(0x01)
	bool SubEntryStride; // 0x03(0x01)
	float TimeScale; // 0x04(0x04)
	float TimeBias; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	bool LockFlag; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FRawDistribution {
	struct FDistributionLookupTable table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FFloatDistribution {
	struct FDistributionLookupTable table; // 0x00(0x28)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FVectorDistribution {
	struct FDistributionLookupTable table; // 0x00(0x28)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FVector4Distribution {
	struct FDistributionLookupTable table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32 ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FExpressionInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct FMaterialAttributesInput : FExpressionInput {
	int32 PropertyConnectedBitmask; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExpressionOutput {
	struct FString OutputName; // 0x00(0x10)
	int32 Mask; // 0x10(0x04)
	int32 MaskR; // 0x14(0x04)
	int32 MaskG; // 0x18(0x04)
	int32 MaskB; // 0x1c(0x04)
	int32 MaskA; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FMaterialInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FColor Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector Constant; // 0x3c(0x0c)
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ConstantX; // 0x3c(0x04)
	float ConstantY; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.HitResult
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x18(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x24(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x30(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x3c(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x48(0x0c)
	float PenetrationDepth; // 0x54(0x04)
	int32 Item; // 0x58(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x5c(0x08)
	struct AActor* Actor; // 0x64(0x08)
	struct UPrimitiveComponent* Component; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName BoneName; // 0x78(0x08)
	int32 *89aa2eae9a; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName *1514ff0bf3; // 0x88(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)  [layout: KHOP]
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)  [layout: KHOP]
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x20)  [layout: KHOP]
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x20(0x70)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x10)
	int32 CurveTypeFlags; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.RichCurve
// Size: 0x70 (Inherited: 0x58)  [layout: KHOP]
struct FRichCurve : FIndexedCurve {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x58(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float DefaultValue; // 0x5c(0x04)
	struct TArray<struct FRichCurveKey> Keys; // 0x60(0x10)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FKeyHandleMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FRichCurveKey {
	enum class ERichCurveInterpMode InterpMode; // 0x00(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x01(0x01)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xa8 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float *be4aee6da8; // 0x34(0x04)
	float *3b638a65b6; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool *47bc87cd7e; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 TrackIndex; // 0xa4(0x04)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* *612ddc6b1e; // 0x08(0x08)
	int32 SlotIndex; // 0x10(0x04)
	int32 *96d3aeec6e; // 0x14(0x04)
	enum class EAnimLinkMethod *b4f6a875d6; // 0x18(0x01)
	enum class EAnimLinkMethod *11316c36fd; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float *0f5eb4d40f; // 0x1c(0x04)
	float *3fdb36c2a8; // 0x20(0x04)
	float *aad8a6656d; // 0x24(0x04)
	struct UAnimSequenceBase* *150fa72ecf; // 0x28(0x08)
};

// ScriptStruct Engine.*3376578abf
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3376578abf {
	int32 *8cd6644348; // 0x00(0x04)
	float *5b0b5179ab; // 0x04(0x04)
	enum class EAnimNotifyEventType NotifyEventType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float *be4aee6da8; // 0x3c(0x04)
};

// ScriptStruct Engine.*af5cb241fb
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*af5cb241fb {
	struct FName SlotName; // 0x00(0x08)
	struct F*d1e5bdb7b8 *d1e5bdb7b8; // 0x08(0x10)
};

// ScriptStruct Engine.*d1e5bdb7b8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d1e5bdb7b8 {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32 LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*81528e359c
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct F*81528e359c : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName NextSectionName; // 0x40(0x08)
	struct TArray<struct U*b12630f5a4*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.*08f1054f8e
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*08f1054f8e {
	struct TArray<struct F*8882c248bf> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*8882c248bf
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8882c248bf {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAlphaBlend {
	enum class EAlphaBlendOption BlendOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* CustomCurve; // 0x08(0x08)
	float BlendTime; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
};

// ScriptStruct Engine.*65e6545a8f
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*65e6545a8f {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName *869a1a9642; // 0x08(0x08)
	struct FGuid *884a303572; // 0x10(0x10)
};

// ScriptStruct Engine.*1e1a7d45ee
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*1e1a7d45ee : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.TickFunction
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTickFunction {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup TickGroup; // 0x08(0x01)
	enum class ETickingGroup EndTickGroup; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	char bTickEvenWhenPaused : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char bStartWithTickEnabled : 1; // 0x0c(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x0c(0x01)
	char pad_D[0x33]; // 0x0d(0x33)
	float TickInterval; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct Engine.*5f22c370d5
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5f22c370d5 {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*227d7489e2
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*227d7489e2 {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x01)  [layout: LECH - offset chi la uoc luong]
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct Engine.*f237eecf72
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*f237eecf72 {
	bool *2e77f43fa9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*04df2146b3 Data; // 0x08(0x30)
};

// ScriptStruct Engine.*04df2146b3
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*04df2146b3 {
	struct FName *518e0f5510; // 0x00(0x08)
	enum class *9d0e0d544c Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* *4fc42667af; // 0x28(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FTimerHandle {
	uint64 Handle; // 0x00(0x08)
};

// ScriptStruct Engine.*0c92e16540
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0c92e16540 {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*bda68c12e4
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*bda68c12e4 {
	int32 *3db30a2f78; // 0x00(0x04)
	int32 UUID; // 0x04(0x04)
	struct FName *8997f38646; // 0x08(0x08)
	struct UObject* *ee820512a5; // 0x10(0x08)
};

// ScriptStruct Engine.*72ab9fd122
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*72ab9fd122 {
	int32 Data; // 0x00(0x04)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.*60282223b2
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*60282223b2 {
	int32 *4969f9b150; // 0x00(0x04)
	int32 *e5bb37904d; // 0x04(0x04)
	int32 *fe8cd68f31; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)  [layout: KHOP]
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)  [layout: KHOP]
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.*fdab764c85
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fdab764c85 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*969c4df847
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*969c4df847 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAttackId AttackId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *8aa17c3d74; // 0x10(0x08)
};

// ScriptStruct Engine.AttackId
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FAttackId {
	int32 ID; // 0x00(0x04)
};

// ScriptStruct Engine.*de35836585
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*de35836585 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*f37dc87288
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*f37dc87288 {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 *9c5fb64c3a; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator *bc2a71c4ec; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName *0791d21329; // 0x30(0x08)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)  [layout: KHOP]
struct FRepMovement {
	struct FVector *5719488588; // 0x00(0x0c)
	struct FVector *0730a6bd2e; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char *1df3270959 : 1; // 0x30(0x01)
	char *5f28d50093 : 1; // 0x30(0x01)
	enum class *795db128a3 *1ebbd0722d; // 0x31(0x01)
	enum class *795db128a3 *2ba870b0eb; // 0x32(0x01)
	enum class *be6863e3aa *a95f17ec3e; // 0x33(0x01)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMovementProperties {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x20 (Inherited: 0x04)  [layout: KHOP]
struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* PreferredNavData; // 0x18(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*e835414109
// Size: 0xb8 (Inherited: 0x18)  [layout: KHOP]
struct F*e835414109 : F*969c4df847 {
	float Damage; // 0x18(0x04)
	struct FVector_NetQuantizeNormal *db02a965ac; // 0x1c(0x0c)
	struct FHitResult *09e6694a4e; // 0x28(0x90)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32 BlendDepth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FAnimNode_Base {
	char pad_0[0x8]; // 0x00(0x08)
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExposedValueCopyRecord {
	struct UProperty* SourceProperty; // 0x00(0x08)
	struct FName SourcePropertyName; // 0x08(0x08)
	struct FName SourceSubPropertyName; // 0x10(0x08)
	int32 SourceArrayIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UProperty* DestProperty; // 0x20(0x08)
	int32 DestArrayIndex; // 0x28(0x04)
	int32 Size; // 0x2c(0x04)
	bool bInstanceIsTarget; // 0x30(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UBoolProperty* CachedBoolSourceProperty; // 0x38(0x08)
	struct UBoolProperty* CachedBoolDestProperty; // 0x40(0x08)
	struct UStructProperty* CachedStructDestProperty; // 0x48(0x08)
	struct UObjectProperty* CachedObjectSourceProperty; // 0x50(0x08)
	struct UProperty* CachedObjectSubProperty; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
};

// ScriptStruct Engine.BoneReference
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.PoseLink
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.*c1d67ea7ec
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*c1d67ea7ec {
	char pad_0_0 : 1; // 0x00(0x01)
	char *ce1ceacdb5 : 1; // 0x00(0x01)
	char *4b793cb713 : 1; // 0x00(0x01)
	char *a965c1c245 : 1; // 0x00(0x01)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*3dd9bdf3cc
// Size: 0x520 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3dd9bdf3cc {
	char pad_0[0x520]; // 0x00(0x520)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 GroupIndex; // 0x34(0x04)
	enum class EAnimGroupRole GroupRole; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float BlendWeight; // 0x3c(0x04)
	float InternalTimeAccumulator; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlendSampleData {
	int32 SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlendFilter {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	bool bInitialized; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	float InterpolatedResult; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x38)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.Axis
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAxis {
	struct FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x70 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x58(0x08)
	bool bLoopAnimation; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float PlayRate; // 0x64(0x04)
	float StartPosition; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPerBoneBlendWeight {
	int32 SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct FLightingChannels {
	bool bChannel0; // 0x00(0x01)
	bool bChannel1; // 0x01(0x01)
	bool bChannel2; // 0x02(0x01)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x70)
	struct UCurveFloat* ExternalCurve; // 0x70(0x08)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*5164c0326e
// Size: 0x70 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct F*5164c0326e : FIndexedCurve {
	struct TArray<struct F*59f2f95da7> Keys; // 0x58(0x10)
	int32 DefaultValue; // 0x68(0x04)
	bool *8eddd7f2f6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*59f2f95da7
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*59f2f95da7 {
	float Time; // 0x00(0x04)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct Engine.*7848b67c07
// Size: 0x78 (Inherited: 0x58)  [layout: KHOP]
struct F*7848b67c07 : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct F*7a7ee1d60f> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.*7a7ee1d60f
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*7a7ee1d60f {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.LandscapeOverrideData
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLandscapeOverrideData {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UTexture2D* Heightmap; // 0x08(0x08)
	struct UTexture2D* Normalmap; // 0x10(0x08)
	struct TArray<struct UTexture2D*> Weightmaps; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct Engine.*b11d9a644e
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*b11d9a644e {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.*2f32c925c7
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*2f32c925c7 {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*f773cd26ea GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.*f773cd26ea
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*f773cd26ea {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.*50535ef77f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*50535ef77f {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName *c82041f0d6; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*3c9737ff4a
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*3c9737ff4a {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FWalkableSlopeOverride {
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*acd35b5d64
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*acd35b5d64 {
	struct FRepMovement RepMovement; // 0x00(0x34)
	uint16 *a4c77fa9d1; // 0x34(0x02)
	char pad_36[0x62]; // 0x36(0x62)
};

// ScriptStruct Engine.*546052eda2
// Size: 0x58 (Inherited: 0x28)  [layout: KHOP]
struct F*546052eda2 : F*fbae53070b {
	struct F*04fdcf3a34 Params; // 0x28(0x14)
	struct FVector Origin; // 0x3c(0x0c)
	struct TArray<struct FHitResult> *6a59c62a65; // 0x48(0x10)
};

// ScriptStruct Engine.*fbae53070b
// Size: 0x28 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*fbae53070b : F*969c4df847 {
	struct FVector *5275c1e2cf; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*04fdcf3a34
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*04fdcf3a34 {
	float *46f0859d2c; // 0x00(0x04)
	float *64eab95da2; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float *575fa5819d; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FMeshBuildSettings {
	bool *ecf97c7756; // 0x00(0x01)
	bool bRecomputeNormals; // 0x01(0x01)
	bool bRecomputeTangents; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	bool bBuildAdjacencyBuffer; // 0x04(0x01)
	bool bBuildReversedIndexBuffer; // 0x05(0x01)
	bool bUseHighPrecisionTangentBasis; // 0x06(0x01)
	bool bUseFullPrecisionUVs; // 0x07(0x01)
	bool bGenerateLightmapUVs; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MinLightmapResolution; // 0x0c(0x04)
	int32 SrcLightmapIndex; // 0x10(0x04)
	int32 DstLightmapIndex; // 0x14(0x04)
	float BuildScale; // 0x18(0x04)
	struct FVector BuildScale3D; // 0x1c(0x0c)
	float DistanceFieldResolutionScale; // 0x28(0x04)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DistanceFieldBias; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
};

// ScriptStruct Engine.*a02dd76252
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*a02dd76252 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.*6c6880f1f0
// Size: 0x88 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6c6880f1f0 {
	char pad_0[0x4]; // 0x00(0x04)
	int32 UpdateRate; // 0x04(0x04)
	int32 *64126ec988; // 0x08(0x04)
	bool *05c37ec02e; // 0x0c(0x01)
	bool *3d6f8741da; // 0x0d(0x01)
	bool *7db4a122e3; // 0x0e(0x01)
	bool *106de78b1f; // 0x0f(0x01)
	float *a15c5a53b9; // 0x10(0x04)
	float *ce1eea00d2; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32 *bb02946676; // 0x1c(0x04)
	struct TArray<float> *dc0d2c6f4b; // 0x20(0x10)
	struct TMap<int32, int32> *a8a22643df; // 0x30(0x50)
	int32 *3d2dae46a9; // 0x80(0x04)
	enum class *e95df8de8f *66e81d2dc5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Engine.*ca1cacddee
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ca1cacddee {
	struct FName SlotName; // 0x00(0x08)
	int32 *711619273c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*9910bb0308
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*9910bb0308 {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> *2fdd7e0980; // 0x08(0x10)
};

// ScriptStruct Engine.*56384fe0ae
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*56384fe0ae {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.*daf65e15c6
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*daf65e15c6 {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.*72b4737276
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*72b4737276 {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32 ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*b6e45a1fab
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b6e45a1fab {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char *e54cf8a372 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*3a1c6db3b9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*3a1c6db3b9 {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.*11375ead39
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*11375ead39 {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *c2f3e9d27d; // 0x04(0x04)
	float *8d17e6d671; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.*026f4f4514
// Size: 0x10 (Inherited: 0x0c)  [layout: KHOP]
struct F*026f4f4514 : F*c7e11535ef {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.*c7e11535ef
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c7e11535ef {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*d1e795741c
// Size: 0x0c (Inherited: 0x0c)  [layout: KHOP]
struct F*d1e795741c : F*c7e11535ef {
};

// ScriptStruct Engine.*86937f5865
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*86937f5865 {
	struct FString *a186700bdc; // 0x00(0x10)
	struct TArray<struct F*5f22c370d5> Subtitles; // 0x10(0x10)
	char *1ae5b28511 : 1; // 0x20(0x01)
	char *07e1294fc3 : 1; // 0x20(0x01)
	char *15bac38099 : 1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*bcb1857b7a
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*bcb1857b7a {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector *008d37cf0a; // 0x14(0x0c)
	struct FRotator *5e57131893; // 0x20(0x0c)
	struct FVector *e5de240d26; // 0x2c(0x0c)
};

// ScriptStruct Engine.*5d473124e9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5d473124e9 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.*225756ef07
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*225756ef07 {
	struct TArray<struct F*b79612ce8c> *8892cba4dd; // 0x00(0x10)
	struct FVector *1829f53f57; // 0x10(0x0c)
	struct FVector *c64d5b1a5f; // 0x1c(0x0c)
};

// ScriptStruct Engine.*b79612ce8c
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*b79612ce8c {
	struct FVector *9b4c5a6238; // 0x00(0x0c)
	struct FVector *c20e48d3fc; // 0x0c(0x0c)
	float *335529cb1d; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FRigidBodyErrorCorrection {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.*079715ecc0
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*079715ecc0 {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 *fca5ea5984; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	bool Flags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FResponseChannel {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExposureSettings {
	int32 *4a66ef91f2; // 0x00(0x04)
	bool *1d3c39c825; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.URL
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
	int32 Valid; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*0e483fb0a0
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*0e483fb0a0 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*24952102db
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*24952102db : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*b4ad9b683f
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*b4ad9b683f : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*4446a511dc
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4446a511dc {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*4ad01cd020
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4ad01cd020 {
	struct FString *2cea7aab27; // 0x00(0x10)
	struct FString *1cafb1bb7a; // 0x10(0x10)
	struct UObject* *f75d6e5b6f; // 0x20(0x08)
	bool *70dcdd8e48; // 0x28(0x01)
	bool *6c18526368; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*68ca4d8af2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*68ca4d8af2 {
	struct UEdGraphNode* *9418e97b05; // 0x00(0x08)
	struct FGuid PinId; // 0x08(0x10)
};

// ScriptStruct Engine.*acd9dd0020
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*acd9dd0020 {
	struct FString PinCategory; // 0x00(0x10)
	struct FString PinSubCategory; // 0x10(0x10)
	struct UObject* PinSubCategoryObject; // 0x20(0x08)
	struct FSimpleMemberReference *479df4b05b; // 0x28(0x20)
	struct F*4ad01cd020 *ff7b031881; // 0x48(0x30)
	bool bIsMap; // 0x78(0x01)
	bool bIsSet; // 0x79(0x01)
	bool bIsArray; // 0x7a(0x01)
	bool bIsReference; // 0x7b(0x01)
	bool bIsConst; // 0x7c(0x01)
	bool bIsWeakPointer; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct Engine.*242001646a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*242001646a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*057545cf7e
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*057545cf7e {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FSimplygonMaterialLODSettings {
	bool bActive; // 0x00(0x01)
	enum class EMaterialLODType MaterialLODType; // 0x01(0x01)
	bool bUseAutomaticSizes; // 0x02(0x01)
	enum class ESimplygonTextureResolution TextureWidth; // 0x03(0x01)
	enum class ESimplygonTextureResolution TextureHeight; // 0x04(0x01)
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32 GutterSpace; // 0x08(0x04)
	enum class ESimplygonTextureStrech TextureStrech; // 0x0c(0x01)
	bool bReuseExistingCharts; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FSimplygonChannelCastingSettings> ChannelsToCast; // 0x10(0x10)
	bool bBakeVertexData; // 0x20(0x01)
	bool bBakeActorData; // 0x21(0x01)
	bool bAllowMultiMaterial; // 0x22(0x01)
	bool bPreferTwoSideMaterials; // 0x23(0x01)
	bool bUseVertexWeights; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FOutputMaterialInfo OutputMaterialInfo; // 0x28(0x58)
};

// ScriptStruct Engine.OutputMaterialInfo
// Size: 0x58 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FOutputMaterialInfo {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSimplygonChannelCastingSettings {
	enum class ESimplygonMaterialChannel MaterialChannel; // 0x00(0x01)
	enum class ESimplygonCasterType Caster; // 0x01(0x01)
	bool bActive; // 0x02(0x01)
	enum class ESimplygonColorChannels ColorChannels; // 0x03(0x01)
	int32 BitsPerChannel; // 0x04(0x04)
	bool bUseSRGB; // 0x08(0x01)
	bool bBakeVertexColors; // 0x09(0x01)
	bool bFlipBackfacingNormals; // 0x0a(0x01)
	bool bUseTangentSpaceNormals; // 0x0b(0x01)
	bool bFlipGreenChannel; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x9c (Inherited: 0x00)  [layout: KHOP]
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	enum class ETextureSizingType TextureSizingType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GutterSpace; // 0x0c(0x04)
	enum class EMaterialProxySmaplingQuality SamplingQuality; // 0x10(0x01)
	enum class EUVStrech UVStrech; // 0x11(0x01)
	bool bSplitProxyMaterialBasedOnType; // 0x12(0x01)
	bool bUseTangentSpace; // 0x13(0x01)
	bool bNormalMap; // 0x14(0x01)
	bool bMetallicMap; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MetallicConstant; // 0x18(0x04)
	bool bRoughnessMap; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float RoughnessConstant; // 0x20(0x04)
	bool bSpecularMap; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SpecularConstant; // 0x28(0x04)
	bool bEmissiveMap; // 0x2c(0x01)
	bool bOpacityMap; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float OpacityConstant; // 0x30(0x04)
	bool bAmbientOcclusionMap; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AOConstant; // 0x38(0x04)
	float AmbientOcclusionConstant; // 0x3c(0x04)
	bool bOpacityMaskMap; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OpacityMaskConstant; // 0x44(0x04)
	struct FIntPoint DiffuseTextureSize; // 0x48(0x08)
	struct FIntPoint NormalTextureSize; // 0x50(0x08)
	struct FIntPoint MetallicTextureSize; // 0x58(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x60(0x08)
	struct FIntPoint SpecularTextureSize; // 0x68(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x88(0x08)
	enum class EMaterialMergeType MaterialMergeType; // 0x90(0x01)
	enum class EBlendMode BlendMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32 BakingTextureSizeRatioOutdoor; // 0x94(0x04)
	int32 BakingTextureSizeRatioIndoor; // 0x98(0x04)
};

// ScriptStruct Engine.*853b32a0f1
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*853b32a0f1 {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32 MergeDistance; // 0x10(0x04)
	bool *03f5407878; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *c446ffb936; // 0x18(0x04)
	int32 *7f36c1fe54; // 0x1c(0x04)
	bool *32911bbd5b; // 0x20(0x01)
	bool *909d0a2d30; // 0x21(0x01)
	bool *9f56695174; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FSimplygonMaterialLODSettings *a5fdc821fe; // 0x28(0x80)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xd4 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TargetLightMapResolution; // 0x04(0x04)
	bool bImportVertexColors; // 0x08(0x01)
	bool bPivotPointAtZero; // 0x09(0x01)
	bool bMergePhysicsData; // 0x0a(0x01)
	bool bAssignLODGroup; // 0x0b(0x01)
	int32 LODGroupIndex; // 0x0c(0x04)
	bool bMergeMaterials; // 0x10(0x01)
	bool bForceUniqueUVGeneration; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FMaterialProxySettings MaterialSettings; // 0x14(0x9c)
	bool bBakeVertexDataToMesh; // 0xb0(0x01)
	bool bUseVertexDataForBakingMaterial; // 0xb1(0x01)
	bool bUseTextureBinning; // 0xb2(0x01)
	bool bCalculateCorrectLODModel; // 0xb3(0x01)
	enum class EMeshLODSelectionType LODSelectionType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 ExportSpecificLOD; // 0xb8(0x04)
	int32 SpecificLOD; // 0xbc(0x04)
	bool bUseLandscapeCulling; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinimalBoundsSize; // 0xc4(0x04)
	bool bExportNormalMap; // 0xc8(0x01)
	bool bExportMetallicMap; // 0xc9(0x01)
	bool bExportRoughnessMap; // 0xca(0x01)
	bool bExportSpecularMap; // 0xcb(0x01)
	int32 MergedMaterialAtlasResolution; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xfc (Inherited: 0x00)  [layout: KHOP]
struct FMeshProxySettings {
	int32 ScreenSize; // 0x00(0x04)
	char bOverrideVoxelSize : 1; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float VoxelSize; // 0x08(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x9c)
	int32 TextureWidth; // 0xa8(0x04)
	int32 TextureHeight; // 0xac(0x04)
	bool bExportNormalMap; // 0xb0(0x01)
	bool bExportMetallicMap; // 0xb1(0x01)
	bool bExportRoughnessMap; // 0xb2(0x01)
	bool bExportSpecularMap; // 0xb3(0x01)
	bool bCalculateCorrectLODModel; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float OverrideDistanceForLevelLOD; // 0xb8(0x04)
	float MergeDistance; // 0xbc(0x04)
	float *503fb83229; // 0xc0(0x04)
	struct FColor *5e25aae2fa; // 0xc4(0x04)
	bool bOverrideTransferDistance; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *f014217c26; // 0xcc(0x04)
	bool *0529c4f0f6; // 0xd0(0x01)
	bool bComputeLightMapResolution; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float HardAngleThreshold; // 0xd4(0x04)
	enum class *1388681411 NormalCalculationMethod; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32 LightMapResolution; // 0xdc(0x04)
	bool bRecalculateNormals; // 0xe0(0x01)
	bool bBakeVertexData; // 0xe1(0x01)
	bool bUseLandscapeCulling; // 0xe2(0x01)
	enum class ELandscapeCullingPrecision *e15566ebfe; // 0xe3(0x01)
	bool bAllowAdjacency; // 0xe4(0x01)
	bool bAllowDistanceField; // 0xe5(0x01)
	bool bReuseMeshLightmapUVs; // 0xe6(0x01)
	bool bCreateCollision; // 0xe7(0x01)
	bool bAllowVertexColors; // 0xe8(0x01)
	bool bGenerateLightmapUVs; // 0xe9(0x01)
	bool *258ac1b07f; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	int32 *a5fcdbd5c9; // 0xec(0x04)
	bool *6bb331cb50; // 0xf0(0x01)
	enum class EChartAggregationMode *a78ff7ee3e; // 0xf1(0x01)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0xf2(0x01)
	bool *340bc0e211; // 0xf3(0x01)
	float MergeBoldness; // 0xf4(0x04)
	float MaxTriangleSize; // 0xf8(0x04)
};

// ScriptStruct Engine.*aa14358a8a
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*aa14358a8a {
	char *860b629b21 : 1; // 0x00(0x01)
	char *82d92e63ac : 1; // 0x00(0x01)
	char *458a858af5 : 1; // 0x00(0x01)
	enum class EImposterCaptureType *b83d5f4800; // 0x01(0x01)
	enum class EImposterCaptureType *c11ad4fbdb; // 0x02(0x01)
	enum class EImposterCaptureType *bce40a1c62; // 0x03(0x01)
	enum class EImposterCaptureType *b5181e2c99; // 0x04(0x01)
	enum class EImposterCaptureType *4d89a90560; // 0x05(0x01)
	bool *256804fd51; // 0x06(0x01)
	bool *b29a2f01e6; // 0x07(0x01)
	float ScreenSize; // 0x08(0x04)
	struct FLinearColor *fc0564d863; // 0x0c(0x10)
	float BaseSaturation; // 0x1c(0x04)
	float VariationBrightness; // 0x20(0x04)
	float BaseBrightness; // 0x24(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x158 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMeshReductionSettings {
	int32 BaseLODModel; // 0x00(0x04)
	enum class EOptimizationMetric *4aa7a8b8c4; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float PercentTriangles; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float MaxDeviation; // 0x10(0x04)
	float PixelError; // 0x14(0x04)
	float WeldingThreshold; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	enum class EMeshFeatureImportance *b3c8fbe8bd; // 0x1f(0x01)
	float PercentVertices; // 0x20(0x04)
	bool bRecalculateNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HardAngleThreshold; // 0x28(0x04)
	bool bActive; // 0x2c(0x01)
	bool *66e0a01e90; // 0x2d(0x01)
	bool *8832c1c04c; // 0x2e(0x01)
	bool *0eed14d029; // 0x2f(0x01)
	bool *155004dc24; // 0x30(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x31(0x01)
	enum class EMeshFeatureImportance *ee6918d51d; // 0x32(0x01)
	bool *e4e6a0fe1b; // 0x33(0x01)
	bool *144628453d; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // 0x38(0x80)
	struct FMaterialProxySettings MaterialProxySettings; // 0xb8(0x9c)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct Engine.*ca6fee00c7
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct F*ca6fee00c7 {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	float MergeDistance; // 0x08(0x04)
	float *503fb83229; // 0x0c(0x04)
	float MergeBoldness; // 0x10(0x04)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxTriangleSize; // 0x18(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x1c(0x9c)
	bool bOverrideLandscapeExportLOD; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *bb4250a314; // 0xbc(0x04)
	struct FMaterialProxySettings *d6f069a5a0; // 0xc0(0x9c)
	bool bBakeFoliageToLandscape; // 0x15c(0x01)
	bool bBakeGrassToLandscape; // 0x15d(0x01)
	bool bGenerateMeshNormalMap; // 0x15e(0x01)
	bool bGenerateMeshMetallicMap; // 0x15f(0x01)
	bool bGenerateMeshRoughnessMap; // 0x160(0x01)
	bool bGenerateMeshSpecularMap; // 0x161(0x01)
	bool bGenerateLandscapeNormalMap; // 0x162(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x163(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x164(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x165(0x01)
	bool bUseLandscapeCulling; // 0x166(0x01)
	enum class ELandscapeCullingPrecision *e15566ebfe; // 0x167(0x01)
};

// ScriptStruct Engine.*3bd81ce3e8
// Size: 0x38 (Inherited: 0x28)  [layout: KHOP]
struct F*3bd81ce3e8 : F*a2941f0785 {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool *1adf6e9c5e; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *fc5a7a6f8d; // 0x34(0x04)
};

// ScriptStruct Engine.*a2941f0785
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a2941f0785 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.AutoBenchDetailSetting
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FAutoBenchDetailSetting {
	enum class EAutoBenchViewMode ViewMode; // 0x00(0x01)
	enum class EAutoBenchPathType PathType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 CameraSpeed; // 0x04(0x04)
	int32 CameraHeightOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> StatNames; // 0x10(0x10)
};

// ScriptStruct Engine.*2b2c41be4f
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*2b2c41be4f {
	bool *e54cf8a372; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *7dcce91893[0x04]; // 0x04(0x10)
};

// ScriptStruct Engine.*bc3d0958bd
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*bc3d0958bd {
	uint32 *939177a2a7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *48bc879e38; // 0x08(0x10)
};

// ScriptStruct Engine.*d0ed804177
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d0ed804177 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct F*2b2c41be4f UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*18e91f2714
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*18e91f2714 {
	bool bIsSet; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *e93a7ba2f9; // 0x04(0x0c)
	struct FVector *178ca4932e; // 0x10(0x0c)
	struct FRotator *b0bd8a224b; // 0x1c(0x0c)
};

// ScriptStruct Engine.*36c3d6c7cb
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*36c3d6c7cb {
	struct TMap<struct FString, struct F*57d7e93515> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*57d7e93515
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*57d7e93515 {
	struct TMap<uint32, struct F*6e7189cec2> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*6e7189cec2
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*6e7189cec2 {
	int32 MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool *571121d83b; // 0x05(0x01)
	bool *50c6d9dd4a; // 0x06(0x01)
	bool IndoorOutdoorMask; // 0x07(0x01)
};

// ScriptStruct Engine.*d2ee93dd3d
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*d2ee93dd3d {
	uint16 LODIndex; // 0x00(0x02)
	uint16 SectionIndex; // 0x02(0x02)
};

// ScriptStruct Engine.*ea870e80d3
// Size: 0x4b0 (Inherited: 0x00)  [layout: KHOP]
struct F*ea870e80d3 {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x158)
	struct F*853b32a0f1 RemeshingSettings; // 0x198(0xa8)
	bool *d86cbe0fe5; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x248(0x260)
	float LODDistance; // 0x4a8(0x04)
	float ScreenSize; // 0x4ac(0x04)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x260 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGroupedStaticMeshOptimizationSettings {
	enum class EStaticMeshLODType *9101039012; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMeshReductionSettings ReductionSettings; // 0x08(0x158)
	struct FMeshProxySettings ProxySettings; // 0x160(0xfc)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct Engine.*58f10f44f7
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*58f10f44f7 {
	enum class *a8f652510d *aee8888f37; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *e7279877df; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *7ab2205d11; // 0x14(0x04)
	bool SilhouetteImportance; // 0x18(0x01)
	bool TextureImportance; // 0x19(0x01)
	bool ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.AmbientCube2
// Size: 0xc8 (Inherited: 0x00)  [layout: KHOP]
struct FAmbientCube2 {
	bool bUseCustomCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Saturation; // 0x04(0x04)
	struct FLinearColor *a80119f498; // 0x08(0x10)
	struct FLinearColor *32be97379a; // 0x18(0x10)
	struct FLinearColor *c27f38ad1b; // 0x28(0x10)
	struct FLinearColor *420a4cb020; // 0x38(0x10)
	struct FLinearColor *a84d757774; // 0x48(0x10)
	struct FLinearColor *827c6a6bdf; // 0x58(0x10)
	struct FLinearColor *3889271198; // 0x68(0x10)
	struct FLinearColor *27b2911b10; // 0x78(0x10)
	struct FLinearColor *ad2b5e8a95; // 0x88(0x10)
	struct FLinearColor *2468a869ce; // 0x98(0x10)
	struct FLinearColor *4144a72840; // 0xa8(0x10)
	struct FLinearColor *b3b354d2c0; // 0xb8(0x10)
};

// ScriptStruct Engine.*ed24fd79a2
// Size: 0x94 (Inherited: 0x00)  [layout: KHOP]
struct F*ed24fd79a2 {
	float Saturation; // 0x00(0x04)
	struct F*423831dc4d Faces[0x06]; // 0x04(0x90)
};

// ScriptStruct Engine.*423831dc4d
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*423831dc4d {
	struct FColor Color; // 0x00(0x04)
	struct FLinearColor Tint; // 0x04(0x10)
	float FaceSaturation; // 0x14(0x04)
};

// ScriptStruct Engine.*80eeac9a48
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*80eeac9a48 {
	int32 Type; // 0x00(0x04)
	int32 Index; // 0x04(0x04)
	int32 *6d93ce7f17; // 0x08(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FInteriorSettings {
	char bIsWorldSettings : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FReverbSettings {
	char bApplyReverb : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class ReverbPreset ReverbType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.*bb8bb42407
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*bb8bb42407 {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.*38c29743b2
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*38c29743b2 {
	char *2700900e54 : 1; // 0x00(0x01)
	char *1e0423a974 : 1; // 0x00(0x01)
	char *9d0eb4a05a : 1; // 0x00(0x01)
	char *3ffbdff2f0 : 1; // 0x00(0x01)
	char *93c4316774 : 1; // 0x00(0x01)
	char *99922747e5 : 1; // 0x00(0x01)
	char *048cd1c5b2 : 1; // 0x00(0x01)
	char *db8ff342bb : 1; // 0x00(0x01)
	char *b25f65df2c : 1; // 0x01(0x01)
	char *27ce6e4756 : 1; // 0x01(0x01)
	char *e6422ead0c : 1; // 0x01(0x01)
	char *f84245d713 : 1; // 0x01(0x01)
	char *a8428a0ca7 : 1; // 0x01(0x01)
	char *eadf04217d : 1; // 0x01(0x01)
	char *cffdf4db59 : 1; // 0x01(0x01)
	char *fec0bd5314 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*f33efb6750
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f33efb6750 {
	struct UClass* AreaClass; // 0x00(0x08)
	float *f6de149e15; // 0x08(0x04)
	float *7ad948c443; // 0x0c(0x04)
	char *c4b4a7c598 : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*678897139e
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*678897139e {
	struct FVector TargetLocation; // 0x00(0x0c)
	float GenerateRadiusMin; // 0x0c(0x04)
	float GenerateRadiusMax; // 0x10(0x04)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x50 (Inherited: 0x20)  [layout: KHOP]
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; // 0x20(0x08)
	struct FColor Color; // 0x28(0x04)
	struct FVector DefaultQueryExtent; // 0x2c(0x0c)
	struct UClass* NavigationDataClass; // 0x38(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x40(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x580 (Inherited: 0x00)  [layout: KHOP]
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x03(0x01)
	char bOverride_FilmHealAmount : 1; // 0x03(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x04(0x01)
	char bOverride_FilmBlackClip : 1; // 0x04(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x05(0x01)
	char bOverride_BloomMethod : 1; // 0x05(0x01)
	char bOverride_BloomIntensity : 1; // 0x05(0x01)
	char bOverride_BloomThreshold : 1; // 0x05(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Size : 1; // 0x06(0x01)
	char bOverride_Bloom4Tint : 1; // 0x06(0x01)
	char bOverride_Bloom4Size : 1; // 0x06(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x07(0x01)
	char bOverride_Bloom6Tint : 1; // 0x07(0x01)
	char bOverride_Bloom6Size : 1; // 0x07(0x01)
	char bOverride_BloomSizeScale : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x08(0x01)
	char bOverride_BloomDirtMask : 1; // 0x08(0x01)
	char bOverride_TslBlurIntensity : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeInnerEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeOutterEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthBlackPoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthWhitePoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthGamma : 1; // 0x09(0x01)
	char bOverride_bTslBlurUseBranching : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityStartLuminance : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityFadeSpeed : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleOpacity : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x0a(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0b(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0c(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOPowerExponent : 1; // 0x0d(0x01)
	char bOverride_HBAORadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBias : 1; // 0x0d(0x01)
	char bOverride_HBAODetailAO : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurSharpness : 1; // 0x0e(0x01)
	char bOverride_HBAOMaxViewDepth : 1; // 0x0e(0x01)
	char bOverride_HBAODepthSharpness : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0f(0x01)
	char bOverride_LPVIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSize : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x10(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVFadeRange : 1; // 0x11(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x11(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x11(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldScopeSize : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldMethod : 1; // 0x13(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldBokehShape : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x14(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x14(0x01)
	char bOverride_MotionBlurMax : 1; // 0x14(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x14(0x01)
	char bOverride_ScreenPercentage : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x15(0x01)
	char bOverride_OutlineSettings : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTexture : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScale : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScrollSpeed : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float WhiteTemp; // 0x18(0x04)
	float WhiteTint; // 0x1c(0x04)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	struct FVector4 ColorContrast; // 0x30(0x10)
	struct FVector4 ColorGamma; // 0x40(0x10)
	struct FVector4 ColorGain; // 0x50(0x10)
	struct FVector4 ColorOffset; // 0x60(0x10)
	struct FVector4 ColorSaturationShadows; // 0x70(0x10)
	struct FVector4 ColorContrastShadows; // 0x80(0x10)
	struct FVector4 ColorGammaShadows; // 0x90(0x10)
	struct FVector4 ColorGainShadows; // 0xa0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xb0(0x10)
	float ColorCorrectionShadowsMax; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FVector4 ColorSaturationMidtones; // 0xd0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xe0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xf0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x04)
	float FilmSlope; // 0x174(0x04)
	float FilmToe; // 0x178(0x04)
	float FilmShoulder; // 0x17c(0x04)
	float FilmBlackClip; // 0x180(0x04)
	float FilmWhiteClip; // 0x184(0x04)
	struct FLinearColor FilmWhitePoint; // 0x188(0x10)
	struct FLinearColor FilmShadowTint; // 0x198(0x10)
	float FilmShadowTintBlend; // 0x1a8(0x04)
	float FilmShadowTintAmount; // 0x1ac(0x04)
	float FilmSaturation; // 0x1b0(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1b4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1c4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1d4(0x10)
	float FilmContrast; // 0x1e4(0x04)
	float FilmToeAmount; // 0x1e8(0x04)
	float FilmHealAmount; // 0x1ec(0x04)
	float FilmDynamicRange; // 0x1f0(0x04)
	struct FLinearColor SceneColorTint; // 0x1f4(0x10)
	float SceneFringeIntensity; // 0x204(0x04)
	enum class EBloomMethod BloomMethod; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float BloomIntensity; // 0x20c(0x04)
	float BloomThreshold; // 0x210(0x04)
	float BloomSizeScale; // 0x214(0x04)
	float Bloom1Size; // 0x218(0x04)
	float Bloom2Size; // 0x21c(0x04)
	float Bloom3Size; // 0x220(0x04)
	float Bloom4Size; // 0x224(0x04)
	float Bloom5Size; // 0x228(0x04)
	float Bloom6Size; // 0x22c(0x04)
	struct FLinearColor Bloom1Tint; // 0x230(0x10)
	struct FLinearColor Bloom2Tint; // 0x240(0x10)
	struct FLinearColor Bloom3Tint; // 0x250(0x10)
	struct FLinearColor Bloom4Tint; // 0x260(0x10)
	struct FLinearColor Bloom5Tint; // 0x270(0x10)
	struct FLinearColor Bloom6Tint; // 0x280(0x10)
	struct UTexture2D* BloomConvolutionTexture; // 0x290(0x08)
	float BloomConvolutionSize; // 0x298(0x04)
	struct FVector2D BloomConvolutionCenterUV; // 0x29c(0x08)
	struct FVector BloomConvolutionPreFilter; // 0x2a4(0x0c)
	float BloomConvolutionPreFilterMin; // 0x2b0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2b4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2b8(0x04)
	float BloomConvolutionBufferScale; // 0x2bc(0x04)
	struct UTexture* BloomDirtMask; // 0x2c0(0x08)
	float BloomDirtMaskIntensity; // 0x2c8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2cc(0x10)
	float TslBlurIntensity; // 0x2dc(0x04)
	float TslBlurScopeInnerEdge; // 0x2e0(0x04)
	float TslBlurScopeOutterEdge; // 0x2e4(0x04)
	float TslBlurReticleBrightSceneVisibilityStartLuminance; // 0x2e8(0x04)
	float TslBlurReticleBrightSceneVisibilityFadeSpeed; // 0x2ec(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier; // 0x2f0(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleOpacity; // 0x2f4(0x04)
	float TslBlurDepthBlackPoint; // 0x2f8(0x04)
	float TslBlurDepthWhitePoint; // 0x2fc(0x04)
	float TslBlurDepthGamma; // 0x300(0x04)
	bool bTslBlurUseBranching; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FLinearColor AmbientCubemapTint; // 0x308(0x10)
	float AmbientCubemapIntensity; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UTextureCube* AmbientCubemap; // 0x320(0x08)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float AutoExposureLowPercent; // 0x32c(0x04)
	float AutoExposureHighPercent; // 0x330(0x04)
	float AutoExposureMinBrightness; // 0x334(0x04)
	float AutoExposureMaxBrightness; // 0x338(0x04)
	float AutoExposureSpeedUp; // 0x33c(0x04)
	float AutoExposureSpeedDown; // 0x340(0x04)
	float AutoExposureBias; // 0x344(0x04)
	float HistogramLogMin; // 0x348(0x04)
	float HistogramLogMax; // 0x34c(0x04)
	float LensFlareIntensity; // 0x350(0x04)
	struct FLinearColor LensFlareTint; // 0x354(0x10)
	float LensFlareBokehSize; // 0x364(0x04)
	float LensFlareThreshold; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x370(0x08)
	struct FLinearColor LensFlareTints[0x08]; // 0x378(0x80)
	float VignetteIntensity; // 0x3f8(0x04)
	float GrainJitter; // 0x3fc(0x04)
	float GrainIntensity; // 0x400(0x04)
	float HBAOPowerExponent; // 0x404(0x04)
	float HBAORadius; // 0x408(0x04)
	float HBAOBias; // 0x40c(0x04)
	float HBAODetailAO; // 0x410(0x04)
	enum class EHBAOBlurRadius HBAOBlurRadius; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float HBAOBlurSharpness; // 0x418(0x04)
	float HBAOMaxViewDepth; // 0x41c(0x04)
	float HBAODepthSharpness; // 0x420(0x04)
	float AmbientOcclusionIntensity; // 0x424(0x04)
	float AmbientOcclusionStaticFraction; // 0x428(0x04)
	float AmbientOcclusionRadius; // 0x42c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float AmbientOcclusionFadeDistance; // 0x434(0x04)
	float AmbientOcclusionFadeRadius; // 0x438(0x04)
	float AmbientOcclusionDistance; // 0x43c(0x04)
	float AmbientOcclusionPower; // 0x440(0x04)
	float AmbientOcclusionBias; // 0x444(0x04)
	float AmbientOcclusionQuality; // 0x448(0x04)
	float AmbientOcclusionMipBlend; // 0x44c(0x04)
	float AmbientOcclusionMipScale; // 0x450(0x04)
	float AmbientOcclusionMipThreshold; // 0x454(0x04)
	struct FLinearColor IndirectLightingColor; // 0x458(0x10)
	float IndirectLightingIntensity; // 0x468(0x04)
	float ColorGradingIntensity; // 0x46c(0x04)
	struct UTexture* ColorGradingLUT; // 0x470(0x08)
	enum class EDepthOfFieldMethod DepthOfFieldMethod; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char bMobileHQGaussian : 1; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	float DepthOfFieldFstop; // 0x480(0x04)
	float DepthOfFieldSensorWidth; // 0x484(0x04)
	float DepthOfFieldFocalDistance; // 0x488(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x48c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x490(0x04)
	float DepthOfFieldFocalRegion; // 0x494(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x498(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x49c(0x04)
	float DepthOfFieldScale; // 0x4a0(0x04)
	float DepthOfFieldMaxBokehSize; // 0x4a4(0x04)
	float DepthOfFieldNearBlurSize; // 0x4a8(0x04)
	float DepthOfFieldFarBlurSize; // 0x4ac(0x04)
	struct UTexture* DepthOfFieldBokehShape; // 0x4b0(0x08)
	float DepthOfFieldOcclusion; // 0x4b8(0x04)
	float DepthOfFieldColorThreshold; // 0x4bc(0x04)
	float DepthOfFieldSizeThreshold; // 0x4c0(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x4c4(0x04)
	float DepthOfFieldVignetteSize; // 0x4c8(0x04)
	float MotionBlurAmount; // 0x4cc(0x04)
	float MotionBlurMax; // 0x4d0(0x04)
	float MotionBlurPerObjectSize; // 0x4d4(0x04)
	float LPVIntensity; // 0x4d8(0x04)
	float LPVVplInjectionBias; // 0x4dc(0x04)
	float LPVSize; // 0x4e0(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x4e4(0x04)
	float LPVSecondaryBounceIntensity; // 0x4e8(0x04)
	float LPVGeometryVolumeBias; // 0x4ec(0x04)
	float LPVEmissiveInjectionIntensity; // 0x4f0(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x4f4(0x04)
	float LPVDirectionalOcclusionRadius; // 0x4f8(0x04)
	float LPVDiffuseOcclusionExponent; // 0x4fc(0x04)
	float LPVSpecularOcclusionExponent; // 0x500(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x504(0x04)
	float LPVSpecularOcclusionIntensity; // 0x508(0x04)
	float ScreenSpaceReflectionIntensity; // 0x50c(0x04)
	float ScreenSpaceReflectionQuality; // 0x510(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x514(0x04)
	float LPVFadeRange; // 0x518(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x51c(0x04)
	float ScreenPercentage; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UTexture2D* OutlineMaskTexture; // 0x528(0x08)
	struct FVector2D OutlineMaskTextureScale; // 0x530(0x08)
	struct FVector2D OutlineMaskTextureScrollSpeed; // 0x538(0x08)
	struct TArray<struct FPostProcessOutlineSettings> OutlineSettings; // 0x540(0x10)
	struct FWeightedBlendables WeightedBlendables; // 0x550(0x10)
	struct TArray<struct UMaterialInterface*> GBufferModifyMaterials; // 0x560(0x10)
	struct TArray<struct UObject*> Blendables; // 0x570(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FWeightedBlendable {
	float weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.PostProcessOutlineSettings
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPostProcessOutlineSettings {
	struct FLinearColor Color; // 0x00(0x10)
	float OuterRadius; // 0x10(0x04)
	float InnerRadius; // 0x14(0x04)
	bool bUseNoiseTexture; // 0x18(0x01)
	bool bXRay; // 0x19(0x01)
	bool CustomStencilValue; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0xf0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLatentActionManager {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct Engine.*e59d055926
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*e59d055926 {
	char pad_0[0x30]; // 0x00(0x30)
	bool *6db7e7e762; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *084e2e498a; // 0x34(0x04)
};

// ScriptStruct Engine.*feffdbe66f
// Size: 0x5d0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*feffdbe66f {
	char bConstrainAspectRatio : 1; // 0x00(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OrthoNearClipPlane; // 0x04(0x04)
	struct FVector2D OffCenterProjectionOffset; // 0x08(0x08)
	enum class ECameraProjectionMode ProjectionMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FRotator Rotation; // 0x14(0x0c)
	float FOV; // 0x20(0x04)
	struct FVector Location; // 0x24(0x0c)
	float AspectRatio; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x580)
	float PostProcessBlendWeight; // 0x5c0(0x04)
	float OrthoWidth; // 0x5c4(0x04)
	float OrthoFarClipPlane; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
};

// ScriptStruct Engine.*26e98ec05f
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*26e98ec05f {
	struct F*b9f6f18c48 X; // 0x00(0x0c)
	struct F*b9f6f18c48 Y; // 0x0c(0x0c)
	struct F*b9f6f18c48 Z; // 0x18(0x0c)
};

// ScriptStruct Engine.*b9f6f18c48
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b9f6f18c48 {
	float *16d4e16c59; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class *be09c563dc *4031e6fd77; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*a3aa680f5b
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*a3aa680f5b {
	struct F*b9f6f18c48 Pitch; // 0x00(0x0c)
	struct F*b9f6f18c48 Yaw; // 0x0c(0x0c)
	struct F*b9f6f18c48 Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.*90937eb758
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*90937eb758 {
	float BlendTime; // 0x00(0x04)
	enum class *13a3d7090c BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*4f853adcb3
// Size: 0x5f0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4f853adcb3 {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct F*feffdbe66f POV; // 0x10(0x5d0)
	struct APlayerState* PlayerState; // 0x5e0(0x08)
	char pad_5E8[0x8]; // 0x5e8(0x08)
};

// ScriptStruct Engine.*3663b8ac95
// Size: 0x5e0 (Inherited: 0x00)  [layout: KHOP]
struct F*3663b8ac95 {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct F*feffdbe66f *a02dd76252; // 0x10(0x5d0)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x20)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FInputAxisProperties {
	float DeadZone; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

// ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FKeyBind {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char bDisabled : 1; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*77c45ee601
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*77c45ee601 {
	struct FName ActionName; // 0x00(0x08)
	enum class EInputEvent KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*85469860f7
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*85469860f7 {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.*5aa7490e12
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5aa7490e12 {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*6d872fac0e
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*6d872fac0e {
	char *4da08e94cc : 1; // 0x00(0x01)
	char *56318406c5 : 1; // 0x00(0x01)
	char *9df82869de : 1; // 0x00(0x01)
	char *a5664d2154 : 1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x78)
};

// ScriptStruct Engine.*bf67ee5dce
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bf67ee5dce {
	struct FName PackageName; // 0x00(0x08)
	char bIsVisible : 1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*0b06d5ad9e
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0b06d5ad9e {
	struct FName PackageName; // 0x00(0x08)
	int32 LODIndex; // 0x08(0x04)
	char *9b40b6ab26 : 1; // 0x0c(0x01)
	char *b4eb63e460 : 1; // 0x0c(0x01)
	char *8f2fefb83a : 1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*a8cc5d64f6
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a8cc5d64f6 {
	struct AActor* *77d70b7ee2; // 0x00(0x08)
	struct FVector *4538be0cd6; // 0x08(0x0c)
	struct FVector *da93647271; // 0x14(0x0c)
	struct FString *f4da7e82bd; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char *9b19f36fa5 : 1; // 0x3c(0x01)
	char *871bfdf1c2 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector *3077eb82ef; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float *c22e904708; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	float MBPOuterBoundsExpandSize; // 0x20(0x04)
	uint32 MBPNumSubdivs; // 0x24(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x1e8 (Inherited: 0x00)  [layout: KHOP]
struct FHierarchicalSimplification {
	char pad_0[0x4]; // 0x00(0x04)
	float *1ef9571e5e; // 0x04(0x04)
	bool *aa774f8233; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings *c73e0996d0; // 0x0c(0xfc)
	struct FMeshMergingSettings *eda9eca56c; // 0x108(0xd4)
	float *6757ccc373; // 0x1dc(0x04)
	float *6a676d288c; // 0x1e0(0x04)
	int32 *445aea640a; // 0x1e4(0x04)
};

// ScriptStruct Engine.*656374770c
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*656374770c {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* *9603e85592; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector *8833d8f448; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32 *07a54a5a67; // 0x04(0x04)
	float *d0f49bd7f9; // 0x08(0x04)
	float *b288150b73; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float *e5064ff949; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char *7fe2f3dc28 : 1; // 0x20(0x01)
	char *1d74bf723c : 1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *d3005440f1; // 0x24(0x04)
	float *302c2a8f7d; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float *652670f8b9; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char *5efd4b2738 : 1; // 0x38(0x01)
	char *f4985f8f29 : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *0020bcef72; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*7dede11b03
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*7dede11b03 {
	uint32 *0255b52308; // 0x00(0x04)
	int32 *ed2f4267aa; // 0x04(0x04)
	float *243d07a538; // 0x08(0x04)
};

// ScriptStruct Engine.*e51b9bbd7f
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e51b9bbd7f {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float *243d07a538; // 0x24(0x04)
	uint32 *0255b52308; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x230 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBodyInstance {
	char pad_0[0x14]; // 0x00(0x14)
	struct FCollisionResponseContainer ResponseToChannels; // 0x14(0x20)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName CollisionProfileName; // 0x38(0x08)
	struct F*8a4172221b CollisionResponses; // 0x40(0x30)
	char pad_70[0x4]; // 0x70(0x04)
	char bUseCCD : 1; // 0x74(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x74(0x01)
	char bSimulatePhysics : 1; // 0x74(0x01)
	char bUseComplexForSimulation : 1; // 0x74(0x01)
	char bOverrideMass : 1; // 0x74(0x01)
	char bEnableGravity : 1; // 0x74(0x01)
	char bAutoWeld : 1; // 0x74(0x01)
	char bStartAwake : 1; // 0x74(0x01)
	char bGenerateWakeEvents : 1; // 0x75(0x01)
	char *905591af76 : 1; // 0x75(0x01)
	char *19fa445745 : 1; // 0x75(0x01)
	char *a81daf80c4 : 1; // 0x75(0x01)
	char *4e628a4e8f : 1; // 0x75(0x01)
	char *7fc5fb7f4c : 1; // 0x75(0x01)
	char *f2b5b686da : 1; // 0x75(0x01)
	char *9f686b9a7d : 1; // 0x75(0x01)
	char *ac0c32a846 : 1; // 0x76(0x01)
	char *207f7513e4 : 1; // 0x76(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x76(0x01)
	char pad_77_0 : 1; // 0x77(0x01)
	char bUseAsyncScene : 1; // 0x77(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x77(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x77(0x01)
	float MaxDepenetrationVelocity; // 0x78(0x04)
	char pad_7C[0x8]; // 0x7c(0x08)
	float MassInKgOverride; // 0x84(0x04)
	float LinearDamping; // 0x88(0x04)
	float AngularDamping; // 0x8c(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x90(0x0c)
	struct FVector COMNudge; // 0x9c(0x0c)
	char pad_A8[0x10]; // 0xa8(0x10)
	float MassScale; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xd0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xe0(0x08)
	float MaxAngularVelocity; // 0xe8(0x04)
	float CustomSleepThresholdMultiplier; // 0xec(0x04)
	float StabilizationThresholdMultiplier; // 0xf0(0x04)
	float *1014b1383b; // 0xf4(0x04)
	int32 PositionSolverIterationCount; // 0xf8(0x04)
	char pad_FC[0x34]; // 0xfc(0x34)
	uint64 *86a2ac077e; // 0x130(0x08)
	uint64 *f7eef4251e; // 0x138(0x08)
	int32 VelocitySolverIterationCount; // 0x140(0x04)
	char pad_144[0xe4]; // 0x144(0xe4)
	enum class ESleepFamily SleepFamily; // 0x228(0x01)
	enum class EDOFMode DOFMode; // 0x229(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x22a(0x01)
	enum class ECollisionChannel ObjectType; // 0x22b(0x01)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// ScriptStruct Engine.*8a4172221b
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*8a4172221b {
	struct FCollisionResponseContainer *a6c37bb0cf; // 0x00(0x20)
	struct TArray<struct FResponseChannel> *16c751995c; // 0x20(0x10)
};

// ScriptStruct Engine.*8ab72591f6
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*8ab72591f6 {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.*0971a745ef
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0971a745ef {
	char bWaterSurface : 1; // 0x00(0x01)
	char bWaterFX : 1; // 0x00(0x01)
	char bWeather : 1; // 0x00(0x01)
	char bEnvironment : 1; // 0x00(0x01)
	char bVegetationSmall : 1; // 0x00(0x01)
	char bVegetationMedium : 1; // 0x00(0x01)
	char bVegetationLarge : 1; // 0x00(0x01)
	char bVegetationHuge : 1; // 0x00(0x01)
	char bSmokeGrenade : 1; // 0x01(0x01)
	char bSmoke : 1; // 0x01(0x01)
	char bExplosion : 1; // 0x01(0x01)
	char bMolotov : 1; // 0x01(0x01)
	char bFire : 1; // 0x01(0x01)
	char bSparks : 1; // 0x01(0x01)
	char bDebris : 1; // 0x01(0x01)
	char bWeaponFX : 1; // 0x01(0x01)
	char bVehicleFX : 1; // 0x02(0x01)
	char bOther : 1; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct Engine.*caa3095be2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*caa3095be2 {
	float SamplingScale; // 0x00(0x04)
	int32 *03a96eca2d; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.*69d5d4c919
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*69d5d4c919 {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char *361d4fe333 : 1; // 0x10(0x01)
	char *102894d8b6 : 1; // 0x10(0x01)
	char *2b93aa46ae : 1; // 0x10(0x01)
	char *d7e03227d0 : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*fbd7a596cb
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fbd7a596cb {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct F*2719559b61> PaintedVertices; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Engine.*2719559b61
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*2719559b61 {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.*4cf0b2c81d
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*4cf0b2c81d {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.*f23787fab6
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f23787fab6 {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.*28710f2906
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*28710f2906 {
	struct FString *4117503b76; // 0x00(0x10)
	int32 AreaID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.*85151701fc
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*85151701fc {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*ce5efe2d65
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ce5efe2d65 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 (Inherited: 0x38)  [layout: KHOP]
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x38(0x0c)
	struct FVector LeftEnd; // 0x44(0x0c)
	struct FVector RightStart; // 0x50(0x0c)
	struct FVector RightEnd; // 0x5c(0x0c)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNavigationLinkBase {
	float *1c46865321; // 0x00(0x04)
	float *eae2b7127b; // 0x04(0x04)
	enum class ENavLinkDirection Direction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	float *dd2b160fd0; // 0x10(0x04)
	float *043a8ae9f6; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char *80b8fc9006 : 1; // 0x1c(0x01)
	char *3ace40ae89 : 1; // 0x1c(0x01)
	char *aed269c2e0 : 1; // 0x1c(0x01)
	char *8aedd241bb : 1; // 0x1c(0x01)
	char *877603c1a6 : 1; // 0x1c(0x01)
	char *56e40012ba : 1; // 0x1c(0x01)
	char *be97447374 : 1; // 0x1c(0x01)
	char *6cf051e809 : 1; // 0x1c(0x01)
	char *74230083fc : 1; // 0x1d(0x01)
	char *8542eb4e31 : 1; // 0x1d(0x01)
	char *3345e9746b : 1; // 0x1d(0x01)
	char *e53affcd03 : 1; // 0x1d(0x01)
	char *9f37e495df : 1; // 0x1d(0x01)
	char *8537f97ea6 : 1; // 0x1d(0x01)
	char *a007f57a25 : 1; // 0x1d(0x01)
	char *baaa076550 : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	char bUseSnapHeight : 1; // 0x20(0x01)
	char *9e68cae43e : 1; // 0x20(0x01)
	char *d2b7187448 : 1; // 0x20(0x01)
	char *25b7134999 : 1; // 0x20(0x01)
	char *4d3bd37e3a : 1; // 0x20(0x01)
	char *1c732a27dd : 1; // 0x20(0x01)
	char *8c0c0d899c : 1; // 0x20(0x01)
	char *07eb3c02c2 : 1; // 0x20(0x01)
	char *065f749293 : 1; // 0x21(0x01)
	char *c95ecb365e : 1; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct UClass* AreaClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x38(0x0c)
	struct FVector Right; // 0x44(0x0c)
};

// ScriptStruct Engine.*3f6d404c8d
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*3f6d404c8d {
	float Offset; // 0x00(0x04)
};

// ScriptStruct Engine.*e81d7f5e3d
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e81d7f5e3d {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.*9c3e70fc9a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9c3e70fc9a {
	struct TArray<bool> *46a3ce82c3; // 0x00(0x10)
};

// ScriptStruct Engine.*220fa46d54
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*220fa46d54 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class *b41ed04210 ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.*4d1c3107c7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4d1c3107c7 {
	struct TArray<struct F*58fb01da65> *f695b15154; // 0x00(0x10)
};

// ScriptStruct Engine.*58fb01da65
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*58fb01da65 {
	struct UObject* *e4639b998c; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName *cb3a7820c7; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor *b9750900b8; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.*97b8f2f669
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*97b8f2f669 {
	struct TArray<struct FPerBoneBlendWeight> *3f92ce4d13; // 0x00(0x10)
};

// ScriptStruct Engine.*a6dee56ca4
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a6dee56ca4 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	bool bRecomputeTangent; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName MaterialSlotName; // 0x10(0x08)
	struct F*2b2c41be4f UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString *d0e8d7bafe; // 0x08(0x10)
	bool *a8f5c513c1; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy *ca7c240194; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FClothPhysicsProperties_Legacy {
	float *32a0489b75; // 0x00(0x04)
	float *fa0414a9a5; // 0x04(0x04)
	float *f91cd63e1f; // 0x08(0x04)
	float *0ebc945ce9; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float *cebec3b1b8; // 0x2c(0x04)
	float *9e3120b023; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float *11e5f7dd53; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float *1734780b69; // 0x44(0x04)
	float *5e78ad25b2; // 0x48(0x04)
	float *ca884108ba; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x540 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float *c5fcc76274; // 0x04(0x04)
	struct TArray<int32> LODMaterialMap; // 0x08(0x10)
	struct TArray<bool> bEnableShadowCasting; // 0x18(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x28(0x10)
	char *d86cbe0fe5 : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x188)
	struct TArray<struct FBoneReference> *bdf751e017; // 0x1c8(0x10)
	float *31b9f6ae27; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct F*853b32a0f1 RemeshingSettings; // 0x1e0(0xa8)
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x288(0x290)
	struct TArray<struct FName> RemovedBones; // 0x518(0x10)
	struct FString *04f44de733; // 0x528(0x10)
	char *78ee7678d9 : 1; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x290 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGroupedSkeletalOptimizationSettings {
	bool *d298ca529e; // 0x00(0x01)
	enum class ESkeletalMeshLODType *9101039012; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x08(0x188)
	struct FMeshProxySettings ProxySettings; // 0x190(0xfc)
	bool *755456f44c; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x188 (Inherited: 0x00)  [layout: KHOP]
struct FSkeletalMeshOptimizationSettings {
	enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x00(0x01)
	enum class SkeletalMeshOptimizationType ReductionMethod; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float NumOfVertPercentage; // 0x08(0x04)
	uint32 MaxNumOfTriangles; // 0x0c(0x04)
	uint32 MaxNumOfVerts; // 0x10(0x04)
	float VolumeImportance; // 0x14(0x04)
	float MaxDeviationPercentage; // 0x18(0x04)
	int32 ScreenSize; // 0x1c(0x04)
	float WeldingThreshold; // 0x20(0x04)
	bool bRecalcNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float NormalsThreshold; // 0x28(0x04)
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x2c(0x01)
	enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x2d(0x01)
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x2e(0x01)
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x2f(0x01)
	float BoneReductionRatio; // 0x30(0x04)
	int32 MaxBonesPerVertex; // 0x34(0x04)
	bool bTransferMorphTarget; // 0x38(0x01)
	bool bEnforceBoneBoundaries; // 0x39(0x01)
	bool bLockEdges; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x40(0x10)
	int32 BaseLOD; // 0x50(0x04)
	int32 LODChainLastIndex; // 0x54(0x04)
	bool bUseVertexWeights; // 0x58(0x01)
	bool bUseVertexWeightsForMaterial; // 0x59(0x01)
	bool bSimplifyMaterials; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct FSimplygonMaterialLODSettings MaterialLODSettings; // 0x60(0x80)
	struct FMaterialProxySettings MaterialSettings; // 0xe0(0x9c)
	bool bForceRebuild; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UAnimSequence* BakePose; // 0x180(0x08)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTriangleSortSettings {
	enum class *3dd1006f1d TriangleSorting; // 0x00(0x01)
	enum class *0160f2171d *6c242bd7ca; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FName *55ea93a63d; // 0x08(0x08)
};

// ScriptStruct Engine.*dbc9336854
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dbc9336854 {
	struct FString AssetName; // 0x00(0x10)
	int32 LODIndex; // 0x10(0x04)
	int32 SourceSection; // 0x14(0x04)
	bool *60dd6305bc; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UPhysicsAsset* PhysicsAsset; // 0x20(0x20)
	bool bTryAutoFix; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *9051e17fad; // 0x44(0x04)
	float *443f3bb679; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.*cbb0ac9ea1
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cbb0ac9ea1 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*0d11eed2db
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0d11eed2db {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis *4c160995b5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*d677f83bf9
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d677f83bf9 {
	int32 *30b54523f8; // 0x00(0x04)
	enum class EAxis *4c160995b5; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*7aa3ac75bf
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7aa3ac75bf {
	struct FName GroupName; // 0x00(0x08)
	enum class EAnimGroupRole GroupRole; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*e7a9ce49b9
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*e7a9ce49b9 {
	bool *bf6957d1a4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *0a62eeb32d; // 0x10(0x30)
};

// ScriptStruct Engine.*f72883472d
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f72883472d {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.*6c9bb06b2c
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6c9bb06b2c {
	struct UAnimationAsset* *0bc670926c; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.*cfc9e73c7f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cfc9e73c7f {
	struct FName *85cbc20c9d; // 0x00(0x08)
	struct FName *2e4c43ecbc; // 0x08(0x08)
	float *40e90c5614; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FRootMotionSourceGroup {
	char pad_0[0xe8]; // 0x00(0xe8)
	bool *f6f2e1d377; // 0xe8(0x01)
	bool *4b3d744fb9; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 *7c767f934b; // 0xec(0x0c)
	bool *caf59b1149; // 0xf8(0x01)
	struct F*0d66ab6021 *6268a15b13; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct Engine.*0d66ab6021
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*0d66ab6021 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*f28604e88a
// Size: 0xd0 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct F*f28604e88a : F*f441ddfed8 {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool *4499e47a8d; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct U*5e2750edbb* *c39106fe82; // 0xb0(0x08)
	struct UCurveFloat* *2e199e37c1; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct Engine.*f441ddfed8
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f441ddfed8 {
	char pad_0[0x10]; // 0x00(0x10)
	uint16 Priority; // 0x10(0x02)
	uint16 *40bc031707; // 0x12(0x02)
	enum class ERootMotionAccumulateMode *524130a596; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName *6cd0538022; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float *9765438433; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct F*bb814aeb9b Status; // 0x30(0x01)
	struct F*0d66ab6021 Settings; // 0x31(0x01)
	bool *1be87672be; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct F*e7a9ce49b9 *13de988190; // 0x40(0x40)
	struct F*9159f8abef *49e81a619b; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*9159f8abef
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*9159f8abef {
	enum class *41eaaf581d Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *cdad12d78a; // 0x04(0x0c)
	float *b095ed5ae4; // 0x10(0x04)
};

// ScriptStruct Engine.*bb814aeb9b
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*bb814aeb9b {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*1ed74e750f
// Size: 0xd0 (Inherited: 0xa0)  [layout: KHOP]
struct F*1ed74e750f : F*f441ddfed8 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector *c51abeee05; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool *01f1175716; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct U*5e2750edbb* *c39106fe82; // 0xc0(0x08)
	struct UCurveFloat* *2e199e37c1; // 0xc8(0x08)
};

// ScriptStruct Engine.*f283da9e85
// Size: 0xc0 (Inherited: 0xa0)  [layout: KHOP]
struct F*f283da9e85 : F*f441ddfed8 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool *01f1175716; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct U*5e2750edbb* *c39106fe82; // 0xb8(0x08)
};

// ScriptStruct Engine.*ef8effe525
// Size: 0xe0 (Inherited: 0xa0)  [layout: KHOP]
struct F*ef8effe525 : F*f441ddfed8 {
	struct FVector Location; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct AActor* *6a4d0eb056; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool *28c5ad03d9; // 0xb8(0x01)
	bool *8e531f08c1; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct UCurveFloat* *e4ce045186; // 0xc0(0x08)
	struct UCurveFloat* *f7877bffd6; // 0xc8(0x08)
	bool *1f368234fa; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator *c46c774b7d; // 0xd4(0x0c)
};

// ScriptStruct Engine.*8773e7ddae
// Size: 0xb0 (Inherited: 0xa0)  [layout: KHOP]
struct F*8773e7ddae : F*f441ddfed8 {
	struct FVector force; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCurveFloat* *f7877bffd6; // 0xa8(0x08)
};

// ScriptStruct Engine.*eb5785165d
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eb5785165d {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool *45ca2672cf; // 0x28(0x01)
	bool *cc40c076e8; // 0x29(0x01)
	bool *e568a2242f; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UPrimitiveComponent* *59d97b4003; // 0x30(0x08)
	struct FVector *39bb9476b6; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.*cfe390e867
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct F*cfe390e867 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*3882790057 RootMotion; // 0x08(0x160)
};

// ScriptStruct Engine.*3882790057
// Size: 0x160 (Inherited: 0x00)  [layout: KHOP]
struct F*3882790057 {
	bool *49896f2b03; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName *c719246a31; // 0x38(0x08)
	bool *b4b13d2b39; // 0x40(0x01)
	bool *cc40c076e8; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup *3fa365cd34; // 0x48(0x100)
	struct FVector_NetQuantize10 Acceleration; // 0x148(0x0c)
	struct FVector_NetQuantize10 *5719488588; // 0x154(0x0c)
};

// ScriptStruct Engine.*640934f3ac
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*640934f3ac {
	int32 SortOrder; // 0x00(0x04)
	float *205b49968b; // 0x04(0x04)
	float *3418290bac; // 0x08(0x04)
	float *3284488fb5; // 0x0c(0x04)
	char *db75bb05fb : 1; // 0x10(0x01)
	struct F*c1d67ea7ec *c1d67ea7ec; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector DecalSize; // 0x14(0x0c)
	float *538300e8fe; // 0x20(0x04)
	float *0134b6283d; // 0x24(0x04)
	float *b0296c4344; // 0x28(0x04)
};

// ScriptStruct Engine.*61a6c3f3b6
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*61a6c3f3b6 {
	int32 *aa467e809f; // 0x00(0x04)
	int32 Num; // 0x04(0x04)
};

// ScriptStruct Engine.*9b45cfa5ad
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*9b45cfa5ad {
	struct F*4abe580757 *a95fb3be79; // 0x00(0x10)
	struct F*ef7e20082d *42aa1b4735; // 0x10(0x10)
	struct TArray<struct F*ef7e20082d> *0e9fe08894; // 0x20(0x10)
	struct FBoxSphereBounds *53bf554f3e; // 0x30(0x1c)
	float ScreenSize; // 0x4c(0x04)
};

// ScriptStruct Engine.*ef7e20082d
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ef7e20082d {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	int32 InstanceIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*4abe580757
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4abe580757 {
	struct UHLODContainerComponent* Component; // 0x00(0x08)
	int32 InstanceIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*ed3883767e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ed3883767e {
	struct FName LevelBlockId; // 0x00(0x08)
	int32 *73bd92ac38; // 0x08(0x04)
	int32 InstanceId; // 0x0c(0x04)
};

// ScriptStruct Engine.*105ffd503b
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*105ffd503b {
	struct FVector4 *dbf7bace28; // 0x00(0x10)
	struct FVector4 *eadc0d37ae; // 0x10(0x10)
	struct FVector4 *c32a31109b; // 0x20(0x10)
	struct FVector4 *aa2e6fe991; // 0x30(0x10)
};

// ScriptStruct Engine.RandomLevelData
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FRandomLevelData {
	int32 RandomSeed; // 0x00(0x04)
};

// ScriptStruct Engine.*5ee266f5bc
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5ee266f5bc {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.*e598095509
// Size: 0xf8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e598095509 {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Engine.*cf996a719f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cf996a719f {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*403283a41b
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*403283a41b {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.*fe03e7f5e9
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*fe03e7f5e9 {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName *a6a6e0a765; // 0x10(0x08)
};

// ScriptStruct Engine.*66eacc6092
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*66eacc6092 {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.*4b0376da5c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*4b0376da5c {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct F*69a85adec3> *98490842f8; // 0x08(0x10)
};

// ScriptStruct Engine.*69a85adec3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*69a85adec3 {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.*0788f8edcc
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0788f8edcc {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.*9f627d5e11
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9f627d5e11 {
	struct FName Name; // 0x00(0x08)
	int32 ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode *f69524a694; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*26c71918cf
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*26c71918cf {
	struct TArray<int32> *79f23d46b9; // 0x00(0x10)
	struct TArray<int32> *fd01783e8f; // 0x10(0x10)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x470 (Inherited: 0x20)  [layout: KHOP]
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x20(0x170)
	struct FVectorCurve RotationCurve; // 0x190(0x170)
	struct FVectorCurve ScaleCurve; // 0x300(0x170)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x170 (Inherited: 0x20)  [layout: KHOP]
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x03]; // 0x20(0x150)
};

// ScriptStruct Engine.*25eee8021b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*25eee8021b {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.*a4779ca803
// Size: 0x1e0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a4779ca803 {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	bool *593f555c5d; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *3d63a97fa5; // 0xe4(0x04)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<int32> *65c59956cd; // 0x110(0x10)
	struct TArray<int32> *343f243be9; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct FAnimNotifyEvent> *6833ba03d5; // 0x140(0x10)
	float Position; // 0x150(0x04)
	float PlayRate; // 0x154(0x04)
	struct FAlphaBlend Blend; // 0x158(0x38)
	char pad_190[0x20]; // 0x190(0x20)
	int32 *844ca9cc12; // 0x1b0(0x04)
	char pad_1B4[0x2c]; // 0x1b4(0x2c)
};

// ScriptStruct Engine.*db2d87d85f
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*db2d87d85f {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.*8ed3500b11
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*8ed3500b11 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*45f3bd1284
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*45f3bd1284 {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHitResult HitResult; // 0x10(0x90)
};

// ScriptStruct Engine.*0b4148d76a
// Size: 0x1c (Inherited: 0x14)  [layout: LECH - offset chi la uoc luong]
struct F*0b4148d76a : F*7cd58280e6 {
	float *db3560a03a; // 0x14(0x04)
	enum class *29213ec785 *8fa7f0feeb; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.*7cd58280e6
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7cd58280e6 {
	float *789e4dbed8; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float *842b76dc7f; // 0x08(0x04)
	float *7cf84d07ef; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*e8f8a02a0d
// Size: 0x20 (Inherited: 0x14)  [layout: LECH - offset chi la uoc luong]
struct F*e8f8a02a0d : F*7cd58280e6 {
	float *3fe4aeb34b; // 0x14(0x04)
	float *eed2e7ddc4; // 0x18(0x04)
	enum class *29213ec785 *6612d4f379; // 0x1c(0x01)
	enum class *29213ec785 *de55755c75; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.*f1c7295b48
// Size: 0x1c (Inherited: 0x14)  [layout: LECH - offset chi la uoc luong]
struct F*f1c7295b48 : F*7cd58280e6 {
	float Limit; // 0x14(0x04)
	enum class *baa4b811d8 *1edc3b770a; // 0x18(0x01)
	enum class *baa4b811d8 *1e328a06eb; // 0x19(0x01)
	enum class *baa4b811d8 *cf8aa37623; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*5c18bfb6ba
// Size: 0x4c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5c18bfb6ba {
	struct F*c18344fc0f *089e0c2200; // 0x00(0x10)
	struct F*c18344fc0f *dc70b58436; // 0x10(0x10)
	struct F*c18344fc0f *772c343b42; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.*c18344fc0f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c18344fc0f {
	float *789e4dbed8; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char *34bcfdc842 : 1; // 0x0c(0x01)
	char *f8a0cd98ad : 1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*461042b4f9
// Size: 0x4c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*461042b4f9 {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct F*c18344fc0f *2d0488f20f; // 0x18(0x10)
	struct F*c18344fc0f *bd4ab233b6; // 0x28(0x10)
	struct F*c18344fc0f *ed7b84d178; // 0x38(0x10)
	char *34bcfdc842 : 1; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1f0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName *6f2556f9b0; // 0x18(0x08)
	struct FName *c0b6b4bf88; // 0x20(0x08)
	struct FName *5191adeb64; // 0x28(0x08)
	struct FVector *2211989603; // 0x30(0x0c)
	struct FVector *c5cd983f91; // 0x3c(0x0c)
	struct FVector *86c334f5c6; // 0x48(0x0c)
	struct FVector *8f0cdd425c; // 0x54(0x0c)
	struct FVector *a56ce800c7; // 0x60(0x0c)
	struct FVector *13aaa3b99b; // 0x6c(0x0c)
	struct FRotator *3c274087ff; // 0x78(0x0c)
	char *bfb0dd4660 : 1; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct F*d62734b6ad *984fbfe389; // 0x8c(0x104)
	char pad_190[0x60]; // 0x190(0x60)
};

// ScriptStruct Engine.*d62734b6ad
// Size: 0x104 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d62734b6ad {
	float *c802d4252f; // 0x00(0x04)
	float *b2fb13d3ad; // 0x04(0x04)
	float *5305d62dba; // 0x08(0x04)
	float *6e023c0530; // 0x0c(0x04)
	struct F*f1c7295b48 *19aa7077a0; // 0x10(0x1c)
	struct F*e8f8a02a0d *3ac6d0fa7b; // 0x2c(0x20)
	struct F*0b4148d76a *8a58e8ece2; // 0x4c(0x1c)
	struct F*461042b4f9 *e389c15462; // 0x68(0x4c)
	struct F*5c18bfb6ba *5cf2eec8b5; // 0xb4(0x4c)
	char *e8fdc805e8 : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char *65cfaf412d : 1; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.*7a50502717
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7a50502717 {
	struct FName *c3c82041e2; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*54a14e1c59
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*54a14e1c59 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.*f5b4284c60
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*f5b4284c60 {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32 MaxScatteringOrder; // 0x08(0x04)
	int32 *10e8afecca; // 0x0c(0x04)
	int32 *b268356345; // 0x10(0x04)
	int32 *635cb5c338; // 0x14(0x04)
	int32 *e00e51f174; // 0x18(0x04)
	int32 InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32 *f705c5fe28; // 0x20(0x04)
	int32 *1fc082d3c5; // 0x24(0x04)
	int32 *a3b06aad60; // 0x28(0x04)
};

// ScriptStruct Engine.*9fbfefc038
// Size: 0xa8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9fbfefc038 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x130 (Inherited: 0xa8)  [layout: KHOP]
struct FSoundAttenuationSettings : F*9fbfefc038 {
	char bAttenuate : 1; // 0xa8(0x01)
	char bSpatialize : 1; // 0xa8(0x01)
	char bAttenuateWithLPF : 1; // 0xa8(0x01)
	char bEnableListenerFocus : 1; // 0xa8(0x01)
	char bEnableOcclusion : 1; // 0xa8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class *6aa9026d9b DistanceType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OmniRadius; // 0xb0(0x04)
	float StereoSpread; // 0xb4(0x04)
	enum class *99714ccaa4 SpatializationAlgorithm; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct U*dd520cbffb* SpatializationPluginSettings; // 0xc0(0x08)
	float RadiusMin; // 0xc8(0x04)
	float RadiusMax; // 0xcc(0x04)
	float LPFRadiusMin; // 0xd0(0x04)
	float LPFRadiusMax; // 0xd4(0x04)
	float LPFFrequencyAtMin; // 0xd8(0x04)
	float LPFFrequencyAtMax; // 0xdc(0x04)
	float FocusAzimuth; // 0xe0(0x04)
	float NonFocusAzimuth; // 0xe4(0x04)
	float FocusDistanceScale; // 0xe8(0x04)
	float NonFocusDistanceScale; // 0xec(0x04)
	float FocusPriorityScale; // 0xf0(0x04)
	float NonFocusPriorityScale; // 0xf4(0x04)
	float FocusVolumeAttenuation; // 0xf8(0x04)
	float NonFocusVolumeAttenuation; // 0xfc(0x04)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float OcclusionLowPassFilterFrequency; // 0x104(0x04)
	float OcclusionVolumeAttenuation; // 0x108(0x04)
	float OcclusionInterpolationTime; // 0x10c(0x04)
	struct U*01657e5459* OcclusionPluginSettings; // 0x110(0x08)
	struct U*d1e79edce7* ReverbPluginSettings; // 0x118(0x08)
	float ReverbWetLevelMin; // 0x120(0x04)
	float ReverbWetLevelMax; // 0x124(0x04)
	float ReverbDistanceMin; // 0x128(0x04)
	float ReverbDistanceMax; // 0x12c(0x04)
};

// ScriptStruct Engine.*bdd8401f5f
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*bdd8401f5f {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.*6722b19ab7
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*6722b19ab7 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct FForceFeedbackAttenuationSettings : F*9fbfefc038 {
};

// ScriptStruct Engine.*6b71a788a5
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6b71a788a5 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FSplineParams SplineParams; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.SplineParams
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FSplineParams {
	struct FVector *a74c340d09; // 0x00(0x0c)
	struct FVector *dd7ce6e92b; // 0x0c(0x0c)
	float *d462935516; // 0x18(0x04)
	struct FVector *d261ac6035; // 0x1c(0x0c)
	struct FVector *d39f9aa06d; // 0x28(0x0c)
	float *851473ee01; // 0x34(0x04)
};

// ScriptStruct Engine.*436cc8b3fc
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*436cc8b3fc {
	struct FStringAssetReference Template; // 0x00(0x10)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*6ec19e2486> *99232afab2; // 0x18(0x10)
};

// ScriptStruct Engine.*6ec19e2486
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*6ec19e2486 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Step; // 0x08(0x04)
};

// ScriptStruct Engine.*afc50a0f0e
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*afc50a0f0e {
	float CellSize; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
};

// ScriptStruct Engine.*54ff67390a
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*54ff67390a {
	int32 NumCascade; // 0x00(0x04)
	float *9013ef4a24; // 0x04(0x04)
	float WaveLengthScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector4 FoamBias; // 0x10(0x10)
};

// ScriptStruct Engine.*b34a7127a1
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*b34a7127a1 {
	float Gravity; // 0x00(0x04)
	float Lambda; // 0x04(0x04)
	float Depth; // 0x08(0x04)
	float PeakEnhancement; // 0x0c(0x04)
	float Swell; // 0x10(0x04)
	float Fetch; // 0x14(0x04)
	float SpreadBlend; // 0x18(0x04)
	float ShortWavesFade; // 0x1c(0x04)
	float TimeScale; // 0x20(0x04)
};

// ScriptStruct Engine.*fbf312369f
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*fbf312369f {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct TArray<uint16> *ebeab7f9d3; // 0x08(0x10)
};

// ScriptStruct Engine.*94bacbbd8c
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*94bacbbd8c {
	struct UObject* *9ed29fc717; // 0x00(0x08)
	struct FVector2D *78bf482279; // 0x08(0x08)
	float *962ee2c19b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*0cfb21b5d0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*0cfb21b5d0 {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.*8756d519c0
// Size: 0xf8 (Inherited: 0x00)  [layout: KHOP]
struct F*8756d519c0 {
	struct FName VarName; // 0x00(0x08)
	struct FGuid *bc14a96bb5; // 0x08(0x10)
	struct F*acd9dd0020 VarType; // 0x18(0x80)
	struct FString FriendlyName; // 0x98(0x10)
	struct FText Category; // 0xa8(0x18)
	uint64 PropertyFlags; // 0xc0(0x08)
	struct FName *0a0348d875; // 0xc8(0x08)
	enum class ELifetimeCondition *3b036fb1fc; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct F*295605260e> *9ddf0626dd; // 0xd8(0x10)
	struct FString DefaultValue; // 0xe8(0x10)
};

// ScriptStruct Engine.*295605260e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*295605260e {
	struct FName *9328e2ea65; // 0x00(0x08)
	struct FString *f20c5b2e90; // 0x08(0x10)
};

// ScriptStruct Engine.*0a8cd9b48e
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0a8cd9b48e {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*41b026f111
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*41b026f111 {
	struct FName PlatformName; // 0x00(0x08)
	bool *fae276e252; // 0x08(0x01)
	bool *f36a322363; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> *0a0d5dbe22; // 0x10(0x10)
	SetProperty ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.LandscapeOverrideKey
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FLandscapeOverrideKey {
	struct FGuid LandscapeGuid; // 0x00(0x10)
	struct FIntPoint ComponentId; // 0x10(0x08)
};

// ScriptStruct Engine.LevelCollection
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLevelCollection {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	SetProperty Levels; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.*f265d14ab0
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*f265d14ab0 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*2baca013f7
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*2baca013f7 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*61278fe438
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*61278fe438 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x00(0x0c)
	struct FRotator CamRotation; // 0x0c(0x0c)
	float CamOrthoZoom; // 0x18(0x04)
	bool CamUpdated; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*7dfe377474
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*7dfe377474 {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Extent; // 0x18(0x0c)
};

// ScriptStruct Engine.*4d2b50f2a0
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4d2b50f2a0 {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float *084c4d1419; // 0x20(0x04)
	bool *eda00ef6ab; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.*8e25d8b698
// Size: 0x34 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8e25d8b698 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float *084c4d1419; // 0x2c(0x04)
	bool *eda00ef6ab; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.*8a4ab5faf6
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*8a4ab5faf6 {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct UClass* AssetBaseClass; // 0x08(0x20)
	struct UClass* AssetBaseClassLoaded; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	bool bIsEditorOnly; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x38(0x10)
	struct TArray<struct FStringAssetReference> SpecificAssets; // 0x48(0x10)
	struct FPrimaryAssetRules Rules; // 0x58(0x10)
	struct TArray<struct FString> AssetScanPaths; // 0x68(0x10)
	bool bIsDynamicAsset; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 NumberOfAssets; // 0x7c(0x04)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPrimaryAssetRules {
	int32 Priority; // 0x00(0x04)
	bool bApplyRecursively; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 ChunkId; // 0x08(0x04)
	enum class EPrimaryAssetCookRule CookRule; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*2abec75d36
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2abec75d36 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UStaticMesh* Mesh; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.*deb1878349
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*deb1878349 {
	struct TArray<bool> *c8992beb64; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*aeaa924776
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*aeaa924776 {
	int32 Bones[0x08]; // 0x00(0x20)
	bool Weights[0x08]; // 0x20(0x08)
};

// ScriptStruct Engine.*9f277fcb14
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9f277fcb14 {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*3749128417
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*3749128417 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*baa14b107e
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*baa14b107e : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*ea5f5c4bf5
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*ea5f5c4bf5 {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector EndTangent; // 0x38(0x0c)
	struct FVector2D EndScale; // 0x44(0x08)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.*7ff3e53daa
// Size: 0x64 (Inherited: 0x00)  [layout: KHOP]
struct F*7ff3e53daa {
	struct F*ea5f5c4bf5 *ea5f5c4bf5; // 0x00(0x58)
	struct FVector SplineUpDir; // 0x58(0x0c)
};

// ScriptStruct Engine.*197f4914b3
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*197f4914b3 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*fb45fd4ea4
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*fb45fd4ea4 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*65d51aa6f0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*65d51aa6f0 {
	struct FVector *d7482b6c2d; // 0x00(0x0c)
	int32 *e825f4903b; // 0x0c(0x04)
	struct FVector *45b6755d2f; // 0x10(0x0c)
	int32 *54f9be441d; // 0x1c(0x04)
	int32 *82bbaa823c; // 0x20(0x04)
	int32 *42da62a52e; // 0x24(0x04)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FPerPlatformInt {
	int32 Default; // 0x00(0x04)
};

// ScriptStruct Engine.*4bc0736f0d
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4bc0736f0d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*7763a3c093
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7763a3c093 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*b09fe03967
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b09fe03967 {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* *1347be7e2b; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTimeline {
	enum class *94773f65a3 *a091323f53; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char *bf55da6d62 : 1; // 0x08(0x01)
	char *593f555c5d : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*1c38f603b5> Events; // 0x18(0x10)
	struct TArray<struct F*ebaea99e1b> *191504c30f; // 0x28(0x10)
	struct TArray<struct F*d59255bd7e> *993809aa30; // 0x38(0x10)
	struct TArray<struct F*12aa9757bd> *67d923984a; // 0x48(0x10)
	DelegateProperty *f3d4aef736; // 0x58(0x10)
	DelegateProperty *2ec3548146; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
	struct UObject* *0fe44743db; // 0xc0(0x08)
	struct FName *0ac4222580; // 0xc8(0x08)
	struct UProperty* *d49f9b4310; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.*12aa9757bd
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*12aa9757bd {
	struct U*d3ff18b806* *d62716d289; // 0x00(0x08)
	DelegateProperty *870d3a4437; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *55a3779028; // 0x20(0x08)
	struct UStructProperty* *610701d5c8; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*d59255bd7e
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d59255bd7e {
	struct UCurveFloat* *13ad54037f; // 0x00(0x08)
	DelegateProperty *870d3a4437; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *0c2fd0dcd0; // 0x20(0x08)
	struct UFloatProperty* *aedf48491c; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*ebaea99e1b
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ebaea99e1b {
	struct U*5e2750edbb* VectorCurve; // 0x00(0x08)
	DelegateProperty *870d3a4437; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *d71c236a6e; // 0x20(0x08)
	struct UStructProperty* *fc4cd8046d; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*1c38f603b5
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1c38f603b5 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	DelegateProperty *8bd841aef9; // 0x08(0x10)
};

// ScriptStruct Engine.*c7612a5004
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*c7612a5004 {
	struct TArray<bool> *3c300f00e4; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float *40a0a515a4[0x03]; // 0x20(0x0c)
	float *fd4e82eaa5[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.*284dc248a5
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*284dc248a5 {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> *f773fd9335; // 0x08(0x10)
};

// ScriptStruct Engine.*e828231cf9
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e828231cf9 {
	struct TArray<struct FVector> *4a1c115d06; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*44d0b86d0e
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*44d0b86d0e {
	struct TArray<struct FQuat> *6fc6ebc859; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*4b56720ba2
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*4b56720ba2 {
	struct TArray<struct FVector> *10a88ab27f; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*48bdbe8904
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*48bdbe8904 {
	int32 *da09c44241; // 0x00(0x04)
};

// ScriptStruct Engine.*4b29ac5971
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*4b29ac5971 {
	struct TArray<struct F*0ca9149142> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.*0ca9149142
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*0ca9149142 {
	struct TArray<struct FVector> *10a88ab27f; // 0x00(0x10)
	struct TArray<struct FQuat> *6fc6ebc859; // 0x10(0x10)
	struct TArray<struct FVector> *4a1c115d06; // 0x20(0x10)
};

// ScriptStruct Engine.*b74054cc0b
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b74054cc0b {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *6eaab7366a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*12c7c486b5
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*12c7c486b5 {
	struct F*03da6e385e *c601853082; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.*03da6e385e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*03da6e385e {
	int32 Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector *48ca9ad990; // 0x08(0x0c)
	float *e12abf55ab; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32 GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FInterpolationParameter {
	float *afcbc0586e; // 0x00(0x04)
	enum class *a6711154e9 InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*d41a5e4f2f
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct F*d41a5e4f2f {
	struct TArray<struct FSmartName> *d321602369; // 0x00(0x10)
	struct TArray<struct F*b1c18afc2a> Poses; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TMap<struct FName, int32> *e59391f796; // 0x30(0x50)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.*b1c18afc2a
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*b1c18afc2a {
	struct TArray<struct FTransform> *abd9250c36; // 0x00(0x10)
	struct TArray<bool> *a8eb3182e7; // 0x10(0x10)
	struct TArray<float> *781aca795c; // 0x20(0x10)
};

// ScriptStruct Engine.*6ba36945a0
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*6ba36945a0 {
	struct FName *4f01079a31; // 0x00(0x08)
	int32 *78ab5bc349; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*50495fabbe> States; // 0x10(0x10)
	struct TArray<struct F*98d4da766c> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.*98d4da766c
// Size: 0x40 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*98d4da766c : F*c46de4f2fc {
	int32 *c211892916; // 0x08(0x04)
	int32 NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32 *cbd868c309; // 0x14(0x04)
	int32 *18f05fe672; // 0x18(0x04)
	int32 *2d3efd07f0; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class *aa3b123235 LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*c46de4f2fc
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c46de4f2fc {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.*50495fabbe
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*50495fabbe {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct F*05a9d6d745> Transitions; // 0x08(0x10)
	int32 *171ce8c814; // 0x18(0x04)
	int32 *cbd868c309; // 0x1c(0x04)
	int32 *18f05fe672; // 0x20(0x04)
	int32 *9f582d70e1; // 0x24(0x04)
	bool *8b2039c908; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 *abe0a40b63; // 0x2c(0x04)
	struct TArray<int32> *458a2fa41f; // 0x30(0x10)
	bool *2954b2f0be; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.*05a9d6d745
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*05a9d6d745 {
	int32 *13ee4477b0; // 0x00(0x04)
	int32 *c06832c74a; // 0x04(0x04)
	int32 TransitionIndex; // 0x08(0x04)
	bool *01a99800fa; // 0x0c(0x01)
	bool *d99a3f3ade; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32> *9172ba7ccb; // 0x10(0x10)
};

// ScriptStruct Engine.*52965a9355
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*52965a9355 : F*c46de4f2fc {
	struct TArray<struct F*200f5ddd8c> Transitions; // 0x08(0x10)
	int32 *171ce8c814; // 0x18(0x04)
	int32 *cbd868c309; // 0x1c(0x04)
	int32 *18f05fe672; // 0x20(0x04)
	int32 *9f582d70e1; // 0x24(0x04)
};

// ScriptStruct Engine.*200f5ddd8c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*200f5ddd8c {
	struct FName *6721debb3c; // 0x00(0x08)
	bool *7dfe213716; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*d99c27d9ca
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d99c27d9ca {
	enum class EAdditiveAnimationType *d2c5f35024; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.*7a9e531d2d
// Size: 0x28 (Inherited: 0x10)  [layout: KHOP]
struct F*7a9e531d2d : F*cb5c76945a {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<bool> *28c59c6f3c; // 0x18(0x10)
};

// ScriptStruct Engine.*cb5c76945a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cb5c76945a {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.*947438f83e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*947438f83e {
	struct TArray<int32> *c4afb54454; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*fa0d9b84b5
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fa0d9b84b5 {
	struct UAnimationAsset* *0bc670926c; // 0x00(0x08)
	struct UAnimationAsset* *83334ea83a; // 0x08(0x08)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEditorMapPerformanceTestDefinition {
	struct FStringAssetReference PerformanceTestmap; // 0x00(0x10)
	int32 TestTimer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)  [layout: KHOP]
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1e0(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)  [layout: KHOP]
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FExternalToolDefinition {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.*2a7584b6cd
// Size: 0x3c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2a7584b6cd {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.*41857ca1be
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*41857ca1be {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *359993a3e7; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*4d7ce9cd40
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*4d7ce9cd40 {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid *fea65b8485; // 0x08(0x10)
};

// ScriptStruct Engine.*e8a979fbac
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*e8a979fbac {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCustomChannelSetup {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
	enum class ECollisionResponse DefaultResponse; // 0x10(0x01)
	bool bTraceType; // 0x11(0x01)
	bool bStaticObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCollisionResponseTemplate {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ObjectTypeName; // 0x10(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x18(0x10)
	struct FString HelpMessage; // 0x28(0x10)
	bool bCanModify; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.*d997c57fd8
// Size: 0xc0 (Inherited: 0x00)  [layout: KHOP]
struct F*d997c57fd8 {
	struct TArray<struct F*960dd26a1a> PathData; // 0x00(0x10)
	struct F*960dd26a1a LastTraceDestination; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FHitResult HitResult; // 0x30(0x90)
};

// ScriptStruct Engine.*960dd26a1a
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*960dd26a1a {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.*63b76d7f89
// Size: 0x130 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*63b76d7f89 {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	bool bTraceWithProfile; // 0x25(0x01)
	char pad_26[0xaa]; // 0x26(0xaa)
	enum class ECollisionChannel TraceChannel; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FName TraceProfile; // 0xd8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xe0(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0xf0(0x10)
	float SimFrequency; // 0x100(0x04)
	float OverrideGravityZ; // 0x104(0x04)
	float DragForce; // 0x108(0x04)
	float MaxSpeed; // 0x10c(0x04)
	struct UCurveFloat* MaxSpeedOverTimeCurve; // 0x110(0x08)
	enum class EDrawDebugTrace DrawDebugType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float DrawDebugTime; // 0x11c(0x04)
	bool bTraceComplex; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct Engine.*5f03f31c0e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5f03f31c0e {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*520e2d4cf0
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*520e2d4cf0 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*4f54c4e656
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4f54c4e656 {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*cb5daba91b
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cb5daba91b {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*4361b284b0> *4f5b5518ed; // 0x08(0x10)
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct Engine.*4361b284b0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*4361b284b0 {
	struct FName PropertyName; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* *7665d8ce7b; // 0x10(0x08)
};

// ScriptStruct Engine.*6e9c3d76d1
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6e9c3d76d1 {
	struct UFunction* *509cad25a4; // 0x00(0x08)
	int32 *3a0cc88062; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*c85a71c188
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c85a71c188 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*467c63d8f7
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*467c63d8f7 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*240bfb168a
// Size: 0x1e0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*240bfb168a {
	char pad_0[0x1e0]; // 0x00(0x1e0)
};

// ScriptStruct Engine.*55597d4607
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*55597d4607 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*91b31a8c20
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*91b31a8c20 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*54164c4927
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*54164c4927 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*4963ef65b5
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4963ef65b5 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*22de031da2
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*22de031da2 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*828db50f94
// Size: 0x90 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*828db50f94 : F*22de031da2 {
	struct TArray<struct FVector> *20b3bb7be7; // 0x20(0x10)
	struct FBox *8c94f08a7f; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.*466c7a614b
// Size: 0xa0 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*466c7a614b : F*22de031da2 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float X; // 0x88(0x04)
	float Y; // 0x8c(0x04)
	float Z; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*55e3792a04
// Size: 0x70 (Inherited: 0x20)  [layout: KHOP]
struct F*55e3792a04 : F*22de031da2 {
	struct FMatrix TM; // 0x20(0x40)
	struct FVector Center; // 0x60(0x0c)
	float Radius; // 0x6c(0x04)
};

// ScriptStruct Engine.*222a32ad68
// Size: 0x90 (Inherited: 0x20)  [layout: KHOP]
struct F*222a32ad68 : F*22de031da2 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct Engine.*e06ec6afa3
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e06ec6afa3 {
	struct TArray<struct F*55e3792a04> *f8e6399e24; // 0x00(0x10)
	struct TArray<struct F*466c7a614b> *0e708bebd6; // 0x10(0x10)
	struct TArray<struct F*222a32ad68> *bdb2c58861; // 0x20(0x10)
	struct TArray<struct F*828db50f94> *fb822d5db3; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.*28ab25d1e0
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*28ab25d1e0 {
	struct TArray<struct F*c3b51c0894> *5495a9b55f; // 0x00(0x10)
	struct TArray<struct F*7c72014225> *db7402f69a; // 0x10(0x10)
	struct TArray<struct F*58e8249c42> *d7a2129029; // 0x20(0x10)
};

// ScriptStruct Engine.*58e8249c42
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*58e8249c42 {
	struct TArray<struct FVector2D> *20b3bb7be7; // 0x00(0x10)
};

// ScriptStruct Engine.*7c72014225
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*7c72014225 {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.*c3b51c0894
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*c3b51c0894 {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.*fa32eee2c4
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*fa32eee2c4 {
	struct FName ProfileName; // 0x00(0x08)
	struct F*7a50502717 *7a50502717; // 0x08(0x28)
};

// ScriptStruct Engine.*64a42c4ed0
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*64a42c4ed0 {
	struct TArray<int32> *ceee9364de; // 0x00(0x10)
	int32 Direction; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName ItemName; // 0x18(0x08)
	int32 PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*eca6522f03
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*eca6522f03 {
	struct FString Value; // 0x00(0x10)
	struct FVector2D *4eac849ec6; // 0x10(0x08)
};

// ScriptStruct Engine.*153a06cf4b
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*153a06cf4b {
	float *bedbeef87a; // 0x00(0x04)
	float *74299de028; // 0x04(0x04)
	float *f86cb19dae; // 0x08(0x04)
	float *c479a65b03; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* *a67872cbe5; // 0x18(0x08)
	struct FVector2D *63bd0034cd; // 0x20(0x08)
};

// ScriptStruct Engine.*194dfbcbb9
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*194dfbcbb9 {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.PBRValidationReference
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPBRValidationReference {
	struct FString Name; // 0x00(0x10)
	struct FColor Color; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FPluginRedirect {
	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FStructRedirect {
	struct FName OldStructName; // 0x00(0x08)
	struct FName NewStructName; // 0x08(0x08)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FClassRedirect {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName NewClassClass; // 0x28(0x08)
	struct FName NewClassPackage; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FGameNameRedirect {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.*82daff41f0
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*82daff41f0 {
	uint64 Key; // 0x00(0x08)
	struct FString *145678eb0c; // 0x08(0x10)
	struct FColor *d553027a35; // 0x18(0x04)
	float *d3ae108969; // 0x1c(0x04)
	float *df85eaeb4b; // 0x20(0x04)
	struct FVector2D *549c2be6de; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*186da0c458
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*186da0c458 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FStatColorMapping {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FStatColorMapEntry {
	float In; // 0x00(0x04)
	struct FColor out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x320 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FWorldContext {
	struct U*73e33ac23e* *73e33ac23e; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
	struct TArray<struct F*822e60d5b0> PackagesToFullyLoad; // 0x40(0x10)
	char pad_50[0x138]; // 0x50(0x138)
	struct TArray<struct F*d7723d9248> *71221fe614; // 0x188(0x10)
	struct UGameViewportClient* GameViewport; // 0x198(0x10)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct TArray<struct F*655d35bbf0> *77186ffee2; // 0x1b0(0x10)
	struct FURL *aaf558dd69; // 0x1c0(0x70)
	char pad_230[0x8]; // 0x230(0x08)
	struct TArray<struct U*7786f2b279*> *49fba704d1; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct TArray<struct ULevel*> *fab5163995; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)
	struct UGameInstance* *36dd737bbf; // 0x270(0x10)
	char pad_280[0x10]; // 0x280(0x10)
	struct FURL *f5b97e8fba; // 0x290(0x70)
	char pad_300[0x20]; // 0x300(0x20)
};

// ScriptStruct Engine.*655d35bbf0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*655d35bbf0 {
	struct FName PackageName; // 0x00(0x08)
	char *4c759be9b6 : 1; // 0x08(0x01)
	char *1624788573 : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32 LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*d7723d9248
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d7723d9248 {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*822e60d5b0
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*822e60d5b0 {
	enum class *22e2a60f3d *685838f78f; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> *993052f5e6; // 0x18(0x10)
	struct TArray<struct UObject*> *a071522c24; // 0x28(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FNetDriverDefinition {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 (Inherited: 0x00)  [layout: KHOP]
struct FRuntimeCurveLinearColor {
	struct FRichCurve *7eb4be3784[0x04]; // 0x00(0x1c0)
	struct U*d3ff18b806* ExternalCurve; // 0x1c0(0x08)
};

// ScriptStruct Engine.*8bf211e556
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8bf211e556 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FPreviewMeshCollectionEntry {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x20)
};

// ScriptStruct Engine.*db69bc25a6
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*db69bc25a6 {
	bool *4ca344d3c7; // 0x00(0x01)
	bool *6c93b5cde3; // 0x01(0x01)
	bool *d32f3361f1; // 0x02(0x01)
	bool *3a10ca170f; // 0x03(0x01)
};

// ScriptStruct Engine.*161a3ee1b6
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*161a3ee1b6 {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D *0ef8c00268; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float *56b9e97335; // 0x1c(0x04)
	int32 *5e058baaab; // 0x20(0x04)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0x10)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FAssetManagerRedirect {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x00(0x18)
	int32 MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FPhysicalSurfaceName {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FHardwareCursorReference {
	struct FName CursorPath; // 0x00(0x08)
	struct FVector2D HotSpot; // 0x08(0x08)
};

// ScriptStruct Engine.*71c0cb9ea0
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*71c0cb9ea0 {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString *8bbe1f67a4; // 0x20(0x10)
	struct U*96225cb1b0* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.*f1f6ef22a8
// Size: 0x38 (Inherited: 0x28)  [layout: KHOP]
struct F*f1f6ef22a8 : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct U*f00c361422* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x50 (Inherited: 0x28)  [layout: KHOP]
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct FVector *4d32ab3b6b; // 0x30(0x0c)
	struct FVector *6305cfdcf6; // 0x3c(0x0c)
	struct U*9e847ab720* Distribution; // 0x48(0x08)
};

// ScriptStruct Engine.*15b24d26e8
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*15b24d26e8 {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName *f312cd817a; // 0x10(0x08)
};

// ScriptStruct Engine.*338badbbd4
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*338badbbd4 {
	char *3e95aaa958 : 1; // 0x00(0x01)
	char *a96b39445e : 1; // 0x00(0x01)
	char *94368579fe : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*b101b6cac5
// Size: 0x20 (Inherited: 0x04)  [layout: KHOP]
struct F*b101b6cac5 : F*338badbbd4 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputActionName; // 0x08(0x08)
	enum class EInputEvent *4f74c4e31e; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName *f312cd817a; // 0x18(0x08)
};

// ScriptStruct Engine.*46a01f3afc
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct F*46a01f3afc : F*338badbbd4 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputAxisName; // 0x08(0x08)
	struct FName *f312cd817a; // 0x10(0x08)
};

// ScriptStruct Engine.*a01fd2324f
// Size: 0x28 (Inherited: 0x04)  [layout: KHOP]
struct F*a01fd2324f : F*338badbbd4 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName *f312cd817a; // 0x20(0x08)
};

// ScriptStruct Engine.*a34b1bdd8e
// Size: 0x38 (Inherited: 0x04)  [layout: KHOP]
struct F*a34b1bdd8e : F*338badbbd4 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FInputChord *bfae0ff67e; // 0x08(0x20)
	enum class EInputEvent *4f74c4e31e; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName *f312cd817a; // 0x30(0x08)
};

// ScriptStruct Engine.*77ce53153a
// Size: 0x10 (Inherited: 0x04)  [layout: KHOP]
struct F*77ce53153a : F*338badbbd4 {
	enum class EInputEvent *4f74c4e31e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName *f312cd817a; // 0x08(0x08)
};

// ScriptStruct Engine.*3c48498b16
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*3c48498b16 {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* *e1da8755ff; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*5af211aed9
// Size: 0x108 (Inherited: 0x100)  [layout: KHOP]
struct F*5af211aed9 : F*fb822c0885 {
	struct UEdGraphNode* *b691e5c71d; // 0x100(0x08)
};

// ScriptStruct Engine.*fb822c0885
// Size: 0x100 (Inherited: 0x00)  [layout: KHOP]
struct F*fb822c0885 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32 Grouping; // 0x68(0x04)
	int32 SectionID; // 0x6c(0x04)
	struct TArray<struct FString> *4346e0bd79; // 0x70(0x10)
	struct TArray<struct FString> *ff7e4deede; // 0x80(0x10)
	struct TArray<struct FString> *3301c5fa1e; // 0x90(0x10)
	struct TArray<struct FString> *4cbe5266bf; // 0xa0(0x10)
	struct TArray<struct FString> *861911b46e; // 0xb0(0x10)
	struct TArray<struct FString> *acb8eda0ca; // 0xc0(0x10)
	struct TArray<struct FString> *4e901695ec; // 0xd0(0x10)
	struct TArray<struct FString> *f5dcf73fea; // 0xe0(0x10)
	struct FString *f64bc093f7; // 0xf0(0x10)
};

// ScriptStruct Engine.*a4f9f66168
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a4f9f66168 {
	struct FName LevelBlockId; // 0x00(0x08)
	int32 *3ba32fcd66; // 0x08(0x04)
	int32 *79ebb491aa; // 0x0c(0x04)
};

// ScriptStruct Engine.*7f7b0514db
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7f7b0514db {
	struct FString *29a6799d9f; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char *653c36d7c9 : 1; // 0x14(0x01)
	char *7a02592b92 : 1; // 0x14(0x01)
	char *637a4ebfd4 : 1; // 0x14(0x01)
	char *44707e49e3 : 1; // 0x14(0x01)
	char *1494f6319d : 1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class *3efea00a93 *4e4cdd8b3d; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString *7a9ca7de2b; // 0x20(0x10)
	struct FString *1edcd6110e; // 0x30(0x10)
	struct FString *9107051de0; // 0x40(0x10)
	struct FString *d48fc3144a; // 0x50(0x10)
	char *58100cc4b4 : 1; // 0x60(0x01)
	char *19318fe3dc : 1; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char *377b20e723 : 1; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32 *a6e05f21dc; // 0x78(0x04)
	int32 *ebb4c89c6c; // 0x7c(0x04)
	int32 *6212764849; // 0x80(0x04)
	int32 *251b694972; // 0x84(0x04)
	int32 *400abdf7f5; // 0x88(0x04)
	int32 *6b3215ab93; // 0x8c(0x04)
	int32 *c945ac079d; // 0x90(0x04)
	int32 *a29c66da42; // 0x94(0x04)
	char *32cb41805a : 1; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 *7850dfd60c; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *89e1bd5fc2; // 0xa4(0x04)
	float *a3d92a4ead; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*8fbc7eed0e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8fbc7eed0e {
	int32 *88cabe99b7; // 0x00(0x04)
	int32 *24d13af965; // 0x04(0x04)
	int32 *380c835d9f; // 0x08(0x04)
	int32 *375f389eec; // 0x0c(0x04)
	bool *fb4914a286; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *dd8ce056fd; // 0x14(0x04)
};

// ScriptStruct Engine.*b64c588c9f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b64c588c9f {
	struct U*fdc5741844* *14321e75e3; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 (Inherited: 0x00)  [layout: KHOP]
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x78)
	struct FRuntimeFloatCurve *16d4e16c59; // 0x78(0x78)
};

// ScriptStruct Engine.*4325ad4d59
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*4325ad4d59 {
	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* *87d8d572de; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct F*cb5daba91b *f5311ed173; // 0x30(0x50)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FComponentKey {
	struct UClass* *e54493cca9; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*553c42f8a2
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*553c42f8a2 {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct F*ee04aeadc1> Curves; // 0x10(0x10)
	float *ad8a8aa8d3; // 0x20(0x04)
	float *9d71c16f0e; // 0x24(0x04)
	float *273c454940; // 0x28(0x04)
	float *de81997d38; // 0x2c(0x04)
};

// ScriptStruct Engine.*ee04aeadc1
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*ee04aeadc1 {
	struct UObject* *51fcbd9a39; // 0x00(0x08)
	struct FColor *cf19e4332c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32 *be48e01a34; // 0x20(0x04)
	int32 *33deb550eb; // 0x24(0x04)
	int32 *ed7d472e12; // 0x28(0x04)
	int32 *dae6861c5d; // 0x2c(0x04)
	float *12fbc3fc56; // 0x30(0x04)
	float *f16605b613; // 0x34(0x04)
};

// ScriptStruct Engine.*c1470d5239
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c1470d5239 {
	struct U*638e4a5490* Group; // 0x00(0x08)
	struct U*6e42544ba5* Track; // 0x08(0x08)
	int32 *8e44058fbf; // 0x10(0x04)
	float *cef4719fbf; // 0x14(0x04)
};

// ScriptStruct Engine.*d5677bf95d
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*d5677bf95d {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* *18a962b955; // 0x28(0x08)
};

// ScriptStruct Engine.*49e2670761
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*49e2670761 {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32> *ce51cda528; // 0x10(0x10)
	char *d8ddbe4aa7 : 1; // 0x20(0x01)
	char *360a138769 : 1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*80d279533a
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*80d279533a {
	struct UClass* *c3e59fa1cc; // 0x00(0x08)
	struct FString *9638fdb57e; // 0x08(0x10)
	int32 GroupIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*8b28a21b8c
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8b28a21b8c {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*23320c8222
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*23320c8222 {
	float Time; // 0x00(0x04)
	float *8d3225ec97; // 0x04(0x04)
	struct FName *ae5899fa6d; // 0x08(0x08)
	int32 ShotNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*1d330be6be
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*1d330be6be {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct Engine.*a4418b4193
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a4418b4193 {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float *8dc1350774; // 0x10(0x04)
	float *07e6576d3b; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char *f6f7ab613b : 1; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*cf139e3650
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cf139e3650 {
	struct TArray<struct F*d9b45407c0> Points; // 0x00(0x10)
};

// ScriptStruct Engine.*d9b45407c0
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d9b45407c0 {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*c86e1d7fc5
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*c86e1d7fc5 {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32 ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.*8fbd1d328b
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8fbd1d328b {
	float Time; // 0x00(0x04)
	enum class *e759acebdc ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*0072652ab7
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*0072652ab7 {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.*c9dac7e535
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c9dac7e535 {
	float Time; // 0x00(0x04)
	enum class *0a5a696a1e Action; // 0x04(0x01)
	enum class *70b491607d *ec70dd9ffb; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.*6c7f81d430
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6c7f81d430 {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem; // 0x08(0x08)
};

// ScriptStruct Engine.*8d88618dc3
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8d88618dc3 {
	struct U*3ad5150675* container; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Engine.*c0058a9abc
// Size: 0x110 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c0058a9abc {
	struct FName LevelBlockId; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FIntPoint Size; // 0x40(0x08)
	struct FIntPoint *4c377044e7; // 0x48(0x08)
	char *8a672273cd : 1; // 0x50(0x01)
	char *416d25d205 : 1; // 0x50(0x01)
	char *54559f82b5 : 1; // 0x50(0x01)
	char *b8f4d06e0f : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> *504092fb34; // 0x58(0x10)
	struct TArray<bool> *0ab8380999; // 0x68(0x10)
	struct TArray<struct U*fa2d97f9d4*> *93803d96a2; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
};

// ScriptStruct Engine.*6406a7b5b0
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6406a7b5b0 {
	struct UClass* Type; // 0x00(0x08)
	int32 Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*9a7c5f5ca4
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9a7c5f5ca4 {
	struct FVector DecalSize; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	bool *1506e607dd; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*2aaaacacd5
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2aaaacacd5 {
	struct FName LevelBlockId; // 0x00(0x08)
	struct F*7dfe377474 Volume; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*decfdd1f21
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*decfdd1f21 {
	struct FName LevelBlockId; // 0x00(0x08)
	uint32 TypeId; // 0x08(0x04)
	char *44fbef812e : 1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*b2a10c47c1
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*b2a10c47c1 {
	struct ULevelBlockType* LevelBlockType; // 0x00(0x08)
};

// ScriptStruct Engine.*d161e056e2
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*d161e056e2 {
	struct FName LevelBlockId; // 0x00(0x08)
	struct U*11fb46773f* Data; // 0x08(0x08)
	struct FVector2D Offset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct Engine.*716e1f7d2f
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*716e1f7d2f {
	struct FName LevelBlockId; // 0x00(0x08)
	struct U*c880c50ccf* Data; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*0d9b33fd4c
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0d9b33fd4c {
	struct FString LevelBlockId; // 0x00(0x10)
	struct FTransform LevelBlockTransform; // 0x10(0x30)
	struct FString *7a7e6188d3; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FVector, struct FString> *3cac7c7563; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Engine.*e5662e42c7
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e5662e42c7 {
	struct FString LevelBlockId; // 0x00(0x10)
	struct FTransform LevelBlockTransform; // 0x10(0x30)
	struct FString *94ba8ff8b3; // 0x40(0x10)
	struct FTransform *6143c72fb4; // 0x50(0x30)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.*a9591b852f
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a9591b852f {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.*76815819f1
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*76815819f1 {
	char *2dcc315a9a : 1; // 0x00(0x01)
	char *c066a1a75f : 1; // 0x00(0x01)
	char *d3a3509b62 : 1; // 0x00(0x01)
	char *dd573c8966 : 1; // 0x00(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char LightingChannel0 : 1; // 0x00(0x01)
	char LightingChannel1 : 1; // 0x00(0x01)
	char *9c335f3ee8 : 1; // 0x00(0x01)
	char *6043d292a2 : 1; // 0x01(0x01)
	char *4aeff9245a : 1; // 0x01(0x01)
	char *92a8117e7b : 1; // 0x01(0x01)
	char bUseInverseSquaredFalloff : 1; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* *38341aa804; // 0x08(0x20)
	struct U*0a5889c743* IESTexture; // 0x28(0x20)
	float Temperature; // 0x48(0x04)
	float MaxDrawDistance; // 0x4c(0x04)
	float *7689a9d306; // 0x50(0x04)
	float *a70875843c; // 0x54(0x04)
	float *3863e1bc61; // 0x58(0x04)
	float *d77358bb90; // 0x5c(0x04)
	float ShadowSharpen; // 0x60(0x04)
	float *77f3619119; // 0x64(0x04)
	struct FVector *db6a7fc5d7; // 0x68(0x0c)
	float *f37ed3eac2; // 0x74(0x04)
	float *151e934015; // 0x78(0x04)
	float *6d242b59cc; // 0x7c(0x04)
	float *5f91372dc6; // 0x80(0x04)
	float BloomThreshold; // 0x84(0x04)
	struct FColor *81bd450810; // 0x88(0x04)
	float RayStartOffsetDepthScale; // 0x8c(0x04)
	float AttenuationRadius; // 0x90(0x04)
	float LightFalloffExponent; // 0x94(0x04)
	float *18a941f634; // 0x98(0x04)
	float *99759e1060; // 0x9c(0x04)
	float InnerConeAngle; // 0xa0(0x04)
	float OuterConeAngle; // 0xa4(0x04)
	float *0974a52433; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*e973fdd6ca
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*e973fdd6ca {
	struct FTransform Transform; // 0x00(0x30)
	float *6d4e98b872; // 0x30(0x04)
	float Alpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*9194f31005
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9194f31005 {
	struct UStaticMesh* Mesh; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *d946e0d015; // 0x20(0x10)
	char pad_30[0x1c]; // 0x30(0x1c)
	float CachedMaxDrawDistance; // 0x4c(0x04)
	char bImportantMesh : 1; // 0x50(0x01)
	char *2b0f655d27 : 1; // 0x50(0x01)
	char LightingChannel0 : 1; // 0x50(0x01)
	char LightingChannel1 : 1; // 0x50(0x01)
	char *9c335f3ee8 : 1; // 0x50(0x01)
	char *b09afadb2e : 1; // 0x50(0x01)
	char *14a1366222 : 1; // 0x50(0x01)
	enum class EDecalChannel DecalChannel; // 0x51(0x01)
	enum class *dc9bbb7e1b IndoorOutdoorMask; // 0x52(0x01)
	enum class ECollisionChannel *eb0ae16baa; // 0x53(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<struct FResponseChannel> *572b7ba269; // 0x58(0x10)
	struct FName CollisionProfileName; // 0x68(0x08)
	int32 MeshSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.*6f4b64ec62
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*6f4b64ec62 {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32 *e7715a733d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *c796d8eab3; // 0x18(0x10)
	struct APlayerState* *532ba35bfb; // 0x28(0x08)
	struct APlayerState* *dc28e42d2b; // 0x30(0x08)
	struct UObject* *a74de9957d; // 0x38(0x08)
};

// ScriptStruct Engine.*12404cdc46
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*12404cdc46 {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.*f6303a3d50
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*f6303a3d50 {
	struct U*7b1c6c6cb2* *76f7c74871; // 0x00(0x08)
	struct FGuid *799aa50fc7; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.*e4ed4a3e2f
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*e4ed4a3e2f {
	struct U*cc24f38008* ExpressionInput; // 0x00(0x08)
	struct FGuid *0aac389dc1; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.*c2464eb89e
// Size: 0x128 (Inherited: 0x00)  [layout: KHOP]
struct F*c2464eb89e {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *ec8af16c24; // 0x80(0x38)
	struct FExpressionInput *9e2fa453cb; // 0xb8(0x38)
	struct FExpressionInput NormalTexture; // 0xf0(0x38)
};

// ScriptStruct Engine.*bce0940700
// Size: 0x128 (Inherited: 0x00)  [layout: KHOP]
struct F*bce0940700 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *9e2fa453cb; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
	struct FExpressionInput Specular; // 0xf0(0x38)
};

// ScriptStruct Engine.*e3d2dc9ec8
// Size: 0xf0 (Inherited: 0x00)  [layout: KHOP]
struct F*e3d2dc9ec8 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *9e2fa453cb; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
};

// ScriptStruct Engine.*6ea873aeff
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*6ea873aeff {
	struct FGuid *bd2bf7e8e7; // 0x00(0x10)
	struct UMaterialParameterCollection* *6f470b727b; // 0x10(0x08)
};

// ScriptStruct Engine.*5c4b9348b6
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*5c4b9348b6 {
	struct FGuid *bd2bf7e8e7; // 0x00(0x10)
	struct UMaterialFunction* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x24 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x00(0x01)
	bool bOverride_BlendMode; // 0x01(0x01)
	bool bOverride_ShadingModel; // 0x02(0x01)
	bool bOverride_PrepassMasked; // 0x03(0x01)
	bool bOverride_DitheredLODTransition; // 0x04(0x01)
	bool bOverride_TwoSided; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OpacityMaskClipValue; // 0x08(0x04)
	enum class EBlendMode BlendMode; // 0x0c(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	char PrepassMasked : 1; // 0x10(0x01)
	char TwoSided : 1; // 0x10(0x01)
	char DitheredLODTransition : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	bool bOverride_bApplyMaterialClipVolumes; // 0x14(0x01)
	bool bOverride_MaterialClipVolumeTypes; // 0x15(0x01)
	bool bOverride_MaterialClipVolumeImportance; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct F*0971a745ef MaterialClipVolumeTypes; // 0x1c(0x04)
	enum class *ad3f6805e9 MaterialClipVolumeImportance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.*6c9d5b17e1
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*6c9d5b17e1 {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.*48c6d7addf
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*48c6d7addf {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid ExpressionGUID; // 0x10(0x10)
};

// ScriptStruct Engine.*c537011c2c
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c537011c2c {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid ExpressionGUID; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*76ed9c6570
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*76ed9c6570 {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32 FontPage; // 0x10(0x04)
	struct FGuid ExpressionGUID; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*ecbb0fe96d
// Size: 0x28 (Inherited: 0x18)  [layout: KHOP]
struct F*ecbb0fe96d : F*8d6b24950c {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.*8d6b24950c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8d6b24950c {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.*22381a2e68
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*22381a2e68 : F*8d6b24950c {
	float DefaultValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*b236a9c121
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b236a9c121 {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.*34fa2824cb
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*34fa2824cb {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FPacketSimulationSettings {
	int32 PktLoss; // 0x00(0x04)
	int32 PktOrder; // 0x04(0x04)
	int32 PktDup; // 0x08(0x04)
	int32 PktLag; // 0x0c(0x04)
	int32 PktLagVariance; // 0x10(0x04)
	int32 PktIncomingLoss; // 0x14(0x04)
};

// ScriptStruct Engine.*5a81517fe4
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*5a81517fe4 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
};

// ScriptStruct Engine.*3a4ccb5c43
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3a4ccb5c43 {
	struct FString LevelName; // 0x00(0x10)
	uint32 *7f16c2f8ea; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*dd0c7b9f8d
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*dd0c7b9f8d {
	struct FName *859c892ad1; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *126bbe2973; // 0x10(0x30)
};

// ScriptStruct Engine.*8ff06ee6df
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*8ff06ee6df {
	int32 Count; // 0x00(0x04)
	int32 *ec952e5942; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.*4be709fed2
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*4be709fed2 {
	struct FName ParameterName; // 0x00(0x08)
	char *5ea2702d71 : 1; // 0x08(0x01)
	char *c19b2fa1de : 1; // 0x08(0x01)
	char *d25e54b307 : 1; // 0x08(0x01)
	char *8ff2e1ec18 : 1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32> *42c0f2b02b; // 0x10(0x10)
};

// ScriptStruct Engine.*44cd120b13
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*44cd120b13 {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* *51fcbd9a39; // 0x10(0x08)
};

// ScriptStruct Engine.*3fb9f48af9
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3fb9f48af9 {
	char *d4c8df435e : 1; // 0x00(0x01)
	char *797ed22bd5 : 1; // 0x00(0x01)
	char Block : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*3172ad46be
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*3172ad46be {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Frequency; // 0x04(0x04)
	int32 *f49f3c14f2; // 0x08(0x04)
	char *9db087d517 : 1; // 0x0c(0x01)
	char *9df47a2725 : 1; // 0x0c(0x01)
	char *b76609cd24 : 1; // 0x0c(0x01)
	char *427a73213e : 1; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName *f0ea974cd5; // 0x10(0x08)
	struct TArray<struct U*cc88a207bb*> *5d283f636a; // 0x18(0x10)
};

// ScriptStruct Engine.*f99cd07db1
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f99cd07db1 {
	struct FName *0d8274fd69; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*6b7cf8b2d7
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6b7cf8b2d7 {
	char *7a3878c66c : 1; // 0x00(0x01)
	char *1573025de8 : 1; // 0x00(0x01)
	char *29f4906f34 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*0b73c31e7b
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*0b73c31e7b {
	struct FName ParamName; // 0x00(0x08)
	char *29f4906f34 : 1; // 0x08(0x01)
	char *58748e5cfc : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class *f145005380 *5eaf9a44c5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char *1a9679634b : 1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*f1f6ef22a8 *935c8d6b06; // 0x18(0x38)
};

// ScriptStruct Engine.*748f35a2ad
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*748f35a2ad {
	struct FName TargetName; // 0x00(0x08)
	float *d91783fa2a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*2162352ec5
// Size: 0x180 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2162352ec5 {
	struct TArray<struct FColor> *c8c18f730d; // 0x00(0x10)
	struct TArray<struct FColor> *347ece3501; // 0x10(0x10)
	struct TArray<struct FColor> *5b7c1fa888; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 *d54f6f7bd6; // 0x40(0x10)
	struct FVector4 *9295925006; // 0x50(0x10)
	struct FVector4 *9313c4b795; // 0x60(0x10)
	struct FVector4 *5888ba106e; // 0x70(0x10)
	struct FVector4 *85aabbf527; // 0x80(0x10)
	struct FVector4 *0ad8126957; // 0x90(0x10)
	struct FVector4 *297f7cdc81; // 0xa0(0x10)
	struct FVector *2486e184d4; // 0xb0(0x0c)
	struct FVector *6f6ec99e2a; // 0xbc(0x0c)
	struct FVector *ca228978ab; // 0xc8(0x0c)
	struct FVector *68d2c566a6; // 0xd4(0x0c)
	struct FVector *c45c4673a3; // 0xe0(0x0c)
	struct FVector *883442094f; // 0xec(0x0c)
	struct FVector *4f2e90d947; // 0xf8(0x0c)
	float *ba272f27a7; // 0x104(0x04)
	float *01abfea9c3; // 0x108(0x04)
	float *8ad895cac2; // 0x10c(0x04)
	float *ac34dd0b50; // 0x110(0x04)
	float *85ce7467b7; // 0x114(0x04)
	float *0e7ef993b5; // 0x118(0x04)
	float *c9253e49d9; // 0x11c(0x04)
	float *3c96c9e1b3; // 0x120(0x04)
	float *0467b44a1f; // 0x124(0x04)
	float *5f3e572b89; // 0x128(0x04)
	float *3ba8db716f; // 0x12c(0x04)
	float *8a6ecc562f; // 0x130(0x04)
	float *6c05c49c6b; // 0x134(0x04)
	float *b1bcea1dd2; // 0x138(0x04)
	float *d65b816427; // 0x13c(0x04)
	float *1684ee1908; // 0x140(0x04)
	enum class *b5b9476706 *c3b253a962; // 0x144(0x01)
	enum class *4ab61602a7 *0609faba5f; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D *021685e53a; // 0x148(0x08)
	struct FVector *90740feea9; // 0x150(0x0c)
	struct FVector *978ea93151; // 0x15c(0x0c)
	char *20f30fdaee : 1; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	float *04bdece87e; // 0x16c(0x04)
	float *411507ecbc; // 0x170(0x04)
	char pad_174[0xc]; // 0x174(0x0c)
};

// ScriptStruct Engine.*91497f9582
// Size: 0x2d0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*91497f9582 {
	struct UParticleModuleRequired* *1e6e3e7f50; // 0x00(0x08)
	struct UParticleModuleSpawn* *f2b200009f; // 0x08(0x08)
	struct U*f35eb7b6c2* *e6bcbdcdce; // 0x10(0x08)
	struct TArray<struct UParticleModule*> *e4dacd80c2; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct F*605a95b4ca *354d241347; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x28)
	struct FFloatDistribution DragCoefficient; // 0xc8(0x28)
	struct FFloatDistribution *4f20b79bdb; // 0xf0(0x28)
	struct FFloatDistribution *1a734004df; // 0x118(0x28)
	struct FVector *2486e184d4; // 0x140(0x0c)
	struct FVector *3265708379; // 0x14c(0x0c)
	float *5a27c8d73b; // 0x158(0x04)
	struct FVector *6f6ec99e2a; // 0x15c(0x0c)
	struct FVector *ca228978ab; // 0x168(0x0c)
	struct FVector2D *6416072518; // 0x174(0x08)
	float *25c14aa49b; // 0x17c(0x04)
	float *3f7e6fc516; // 0x180(0x04)
	int32 *18c68533b8; // 0x184(0x04)
	enum class *b5b9476706 *c3b253a962; // 0x188(0x01)
	enum class *4ab61602a7 *0609faba5f; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	char *e2071c6747 : 1; // 0x18c(0x01)
	char bEnableCollision : 1; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	enum class EParticleCollisionMode *34ee587afa; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char *20f30fdaee : 1; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *04bdece87e; // 0x198(0x04)
	float *411507ecbc; // 0x19c(0x04)
	struct FRawDistributionVector *80fbb9faf5; // 0x1a0(0x50)
	struct F*f1f6ef22a8 *82a8a08fe5; // 0x1f0(0x38)
	struct FRawDistributionVector *cb13152922; // 0x228(0x50)
	struct F*f1f6ef22a8 *779c5075df; // 0x278(0x38)
	struct FVector *90740feea9; // 0x2b0(0x0c)
	struct FVector *978ea93151; // 0x2bc(0x0c)
	char pad_2C8[0x8]; // 0x2c8(0x08)
};

// ScriptStruct Engine.*605a95b4ca
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*605a95b4ca {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator *e41f852f13; // 0x40(0x0c)
	struct FRotator *4cf5357c58; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *04fa7aed80; // 0x68(0x04)
	char *cf588b9f05 : 1; // 0x6c(0x01)
	char *92aaf4fa28 : 1; // 0x6c(0x01)
	char *0733615a53 : 1; // 0x6c(0x01)
	char *f8f4cddc22 : 1; // 0x6c(0x01)
	char *a30220ba7b : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*c105cdd804
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c105cdd804 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*d9fb8830a8
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d9fb8830a8 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*27ad8b757b
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*27ad8b757b {
	struct U*e413ab78e0* *e413ab78e0; // 0x00(0x08)
	float *7c43a8f6c8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*551477a941
// Size: 0x110 (Inherited: 0x00)  [layout: KHOP]
struct F*551477a941 {
	struct F*d62734b6ad *c5b1624322; // 0x00(0x104)
	char pad_104[0x4]; // 0x104(0x04)
	struct FName ProfileName; // 0x108(0x08)
};

// ScriptStruct Engine.*9330916f70
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9330916f70 {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.*b18a92a651
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*b18a92a651 {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString *6fa4b2897e; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.*2046156b5c
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*2046156b5c {
	struct TArray<bool> Data; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
	struct FString *35e377be6a; // 0x20(0x10)
};

// ScriptStruct Engine.*d80db2d050
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*d80db2d050 {
	struct FName Node; // 0x00(0x08)
	struct F*8c5bff8293 Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.*8c5bff8293
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8c5bff8293 {
	struct TArray<struct F*545a187191> *1fc36720c4; // 0x00(0x10)
};

// ScriptStruct Engine.*545a187191
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*545a187191 {
	enum class EConstraintTransform *9b29de9af7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *dd53bc880f; // 0x08(0x08)
	float weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool *7efe6fc3c3; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FDestructibleParameters {
	struct F*c32bdc746d DamageParameters; // 0x00(0x1c)
	struct F*db2f129192 DebrisParameters; // 0x1c(0x2c)
	struct F*746142649f AdvancedParameters; // 0x48(0x10)
	struct F*2913c48d9c SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct F*d75b0ee401> DepthParameters; // 0x70(0x10)
	struct F*82b607fe29 Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.*82b607fe29
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*82b607fe29 {
	char *a41c70cd36 : 1; // 0x00(0x01)
	char *aeee6cf3dd : 1; // 0x00(0x01)
	char *0f6214f372 : 1; // 0x00(0x01)
	char *1fb17379c4 : 1; // 0x00(0x01)
	char *030536671e : 1; // 0x00(0x01)
	char *40c5dde36f : 1; // 0x00(0x01)
	char *8f246b1b4c : 1; // 0x00(0x01)
	char *54ba99857f : 1; // 0x00(0x01)
	char *f3d654d5e3 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*d75b0ee401
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*d75b0ee401 {
	enum class *47e993767b *b0a210caa5; // 0x00(0x01)
};

// ScriptStruct Engine.*2913c48d9c
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*2913c48d9c {
	int32 SupportDepth; // 0x00(0x04)
	int32 MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DebrisDepth; // 0x0c(0x04)
	int32 EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.*746142649f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*746142649f {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*db2f129192
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*db2f129192 {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.*c32bdc746d
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*c32bdc746d {
	float DamageThreshold; // 0x00(0x04)
	float *7d8944a4e1; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *eda44f1ea2; // 0x0c(0x04)
	int32 *d29d7a98d1; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *6202d829c5; // 0x18(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x190 (Inherited: 0x00)  [layout: KHOP]
struct FSkeletalMeshLODGroupSettings {
	float ScreenSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x08(0x188)
};

// ScriptStruct Engine.*f0ddcab9f0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f0ddcab9f0 {
	int32 MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*88c06435a1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*88c06435a1 {
	float *c1f3b3ca6a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
};

// ScriptStruct Engine.*68e848d916
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*68e848d916 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.*61db05672d
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*61db05672d {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float *ed0e1d097c; // 0x0c(0x04)
};

// ScriptStruct Engine.*5bb5e3f4be
// Size: 0x2c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5bb5e3f4be {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float *35503a7126; // 0x08(0x04)
	float *873014051c; // 0x0c(0x04)
	float *d7173fe4f0; // 0x10(0x04)
	float *c6c0b170bc; // 0x14(0x04)
	float *4d037f3ae9; // 0x18(0x04)
	char *0789313870 : 1; // 0x1c(0x01)
	char *f08f2b6c3b : 1; // 0x1c(0x01)
	char *4a2943db5e : 1; // 0x1c(0x01)
	char *7d2d09d4c5 : 1; // 0x1c(0x01)
	char *569bc52b9e : 1; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *7695d41e89; // 0x20(0x04)
	char *45de4c9c9b : 1; // 0x24(0x01)
	char *77ebdc178e : 1; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	enum class EAudioOutputTarget *1bb0fc0e4f; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.*a620c49b9c
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a620c49b9c {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*d38cbd153a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d38cbd153a {
	struct U*6ca8b46b01* preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*885ba5bfa4
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*885ba5bfa4 {
	struct USoundClass* *ae6c38edf8; // 0x00(0x08)
	float *bd6676494a; // 0x08(0x04)
	float *1909f5494f; // 0x0c(0x04)
	char *2e53e84ec7 : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *e8832db5b6; // 0x14(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FAudioEQEffect {
	char pad_0[0x8]; // 0x00(0x08)
	float FrequencyCenter0; // 0x08(0x04)
	float Gain0; // 0x0c(0x04)
	float Bandwidth0; // 0x10(0x04)
	float FrequencyCenter1; // 0x14(0x04)
	float Gain1; // 0x18(0x04)
	float Bandwidth1; // 0x1c(0x04)
	float FrequencyCenter2; // 0x20(0x04)
	float Gain2; // 0x24(0x04)
	float Bandwidth2; // 0x28(0x04)
	float FrequencyCenter3; // 0x2c(0x04)
	float Gain3; // 0x30(0x04)
	float Bandwidth3; // 0x34(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.*9406c10dd9
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9406c10dd9 {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float *a571160aad; // 0x0c(0x04)
	float *026cc1049b; // 0x10(0x04)
	float *13b43ba08a; // 0x14(0x04)
	float *850dd5a90c; // 0x18(0x04)
	enum class *8c9b82cd9a *5811bd3416; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x00(0x04)
	struct FLinearColor SubsurfaceColor; // 0x04(0x10)
	struct FLinearColor FalloffColor; // 0x14(0x10)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32 LODBias; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
	int32 NumStreamedMips; // 0x14(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 MinLODSize; // 0x1c(0x04)
	int32 MaxLODSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName MinMagFilter; // 0x28(0x08)
	struct FName MipFilter; // 0x30(0x08)
	float Downscale; // 0x38(0x04)
	enum class ETextureDownscaleOptions DownscaleOptions; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.*fc5000964c
// Size: 0x18 (Inherited: 0x10)  [layout: KHOP]
struct F*fc5000964c : F*fbbd1e54f0 {
	struct U*d3ff18b806* *d3ff18b806; // 0x10(0x08)
};

// ScriptStruct Engine.*fbbd1e54f0
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fbbd1e54f0 {
	struct FName TrackName; // 0x00(0x08)
	bool *c1c9ded12d; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*921db8d619
// Size: 0x18 (Inherited: 0x10)  [layout: KHOP]
struct F*921db8d619 : F*fbbd1e54f0 {
	struct U*5e2750edbb* *5e2750edbb; // 0x10(0x08)
};

// ScriptStruct Engine.*1c747b587a
// Size: 0x18 (Inherited: 0x10)  [layout: KHOP]
struct F*1c747b587a : F*fbbd1e54f0 {
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.*63a2473ea7
// Size: 0x18 (Inherited: 0x10)  [layout: KHOP]
struct F*63a2473ea7 : F*fbbd1e54f0 {
	struct UCurveFloat* *75d04f6c27; // 0x10(0x08)
};

// ScriptStruct Engine.*3667d47c0f
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*3667d47c0f {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D *41f348394c; // 0x18(0x08)
	struct FVector2D *9694b9adea; // 0x20(0x08)
	struct FVector2D *8b29d228af; // 0x28(0x08)
	struct FVector2D *76ee5cd6c7; // 0x30(0x08)
	struct FKey *315767de4a; // 0x38(0x18)
	struct FKey *bc4c054719; // 0x50(0x18)
};

// ScriptStruct Engine.*bbe27677e1
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*bbe27677e1 {
	bool *493edd8792; // 0x00(0x01)
	bool *9691955378; // 0x01(0x01)
	bool *c40210abcf; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.*c064f28893
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*c064f28893 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*abd9250c36
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*abd9250c36 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*484b904734
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*484b904734 {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.*cb39365559
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cb39365559 {
	struct FColor Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*0401c5c9ae
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*0401c5c9ae {
	struct FVector Value; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName Name; // 0x10(0x08)
};

// ScriptStruct Engine.*9d43039a0a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9d43039a0a {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x108 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
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

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xe8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
	float GlobalWeight; // 0x50(0x04)
	char pad_54[0x94]; // 0x54(0x94)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xe0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32 StateMachineIndexInClass; // 0x30(0x04)
	int32 MaxTransitionsPerFrame; // 0x34(0x04)
	bool bSkipFirstUpdateTransition; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	int32 CurrentState; // 0x48(0x04)
	float ElapsedTime; // 0x4c(0x04)
	char pad_50[0x90]; // 0x50(0x90)
};

// ScriptStruct Engine.*fc2c591299
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fc2c591299 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.*d13a83a5ef
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d13a83a5ef {
	char pad_0[0x90]; // 0x00(0x90)
	struct UBlendProfile* BlendProfile; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
};

// ScriptStruct Engine.AnimNode_SubInput
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SubInput : FAnimNode_Base {
	char pad_30[0x38]; // 0x30(0x38)
};

// ScriptStruct Engine.AnimNode_SubInstance
// Size: 0xd8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SubInstance : FAnimNode_Base {
	struct FPoseLink InPose; // 0x30(0x18)
	struct UClass* InstanceClass; // 0x48(0x08)
	bool bShouldReinitialize; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName ReinitializePropertyName; // 0x58(0x08)
	struct UAnimInstance* InstanceToRun; // 0x60(0x08)
	struct TArray<struct UProperty*> InstanceProperties; // 0x68(0x10)
	struct TArray<struct UProperty*> SubInstanceProperties; // 0x78(0x10)
	struct TArray<struct FName> SourcePropertyNames; // 0x88(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	struct UBoolProperty* ReinitializeProperty; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	enum class EEvaluatorDataSource DataSource; // 0x30(0x01)
	enum class EEvaluatorMode EvaluatorMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 FramesToCachePose; // 0x34(0x04)
	char pad_38[0x38]; // 0x38(0x38)
	int32 CacheFramesRemaining; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30(0x01)
	char pad_31[0x4f]; // 0x31(0x4f)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
};

// ScriptStruct Engine.*7266c902e3
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7266c902e3 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*0ae88db5f0
// Size: 0x68 (Inherited: 0x58)  [layout: KHOP]
struct F*0ae88db5f0 : FIndexedCurve {
	struct TArray<struct F*8d3fbbe059> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.*8d3fbbe059
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8d3fbbe059 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString *8401b58ca4; // 0x08(0x10)
	struct FName *869a1a9642; // 0x18(0x08)
	struct FGuid *884a303572; // 0x20(0x10)
	bool *a0ebb008d3; // 0x30(0x01)
	bool *daf760b000; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.*93d1d9a587
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*93d1d9a587 {
	enum class EDrawDebugItemType *5158a89185; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector StartLoc; // 0x04(0x0c)
	struct FVector EndLoc; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32 Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool *8380d913bb; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D *549c2be6de; // 0x60(0x08)
};

// ScriptStruct Engine.*7394008098
// Size: 0x6a0 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct F*7394008098 : F*3dd9bdf3cc {
	char pad_520[0x180]; // 0x520(0x180)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Engine.*092d432529
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*092d432529 {
	struct FVector4 Plane; // 0x00(0x10)
	float PlaneOffsetOutside; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Engine.*4f2983168d
// Size: 0x70 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*4f2983168d : F*8ea1948f82 {
	struct FVector PlaneX; // 0x50(0x0c)
	struct FVector PlaneY; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Engine.*8ea1948f82
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8ea1948f82 {
	struct FVector4 Plane; // 0x00(0x10)
	struct FVector2D PlaneOffset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVector4 PlaneRadiusXYInOut; // 0x20(0x10)
	struct FVector4 FadeRangeXYInOut; // 0x30(0x10)
	struct FVector2D UprightMulAdd; // 0x40(0x08)
	bool bAdditive; // 0x48(0x01)
	enum class *ad3f6805e9 SoftPlaneImportance; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Engine.*8424f7a9c1
// Size: 0xd0 (Inherited: 0x00)  [layout: KHOP]
struct F*8424f7a9c1 {
	char pad_0[0x4]; // 0x00(0x04)
	float BlurLevel; // 0x04(0x04)
	float DepthBlurPower; // 0x08(0x04)
	float DepthBlurBlackPoint; // 0x0c(0x04)
	float DepthBlurWhitePoint; // 0x10(0x04)
	float ScopeRadiusNear; // 0x14(0x04)
	float ScopeRadiusFar; // 0x18(0x04)
	float ScopeEllipseRatio; // 0x1c(0x04)
	char bReverseScopeMask : 1; // 0x20(0x01)
	char bReticleExtendTextureBorder : 1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float ReticleAngularSize; // 0x24(0x04)
	struct FVector2D ReticleTextureCenter; // 0x28(0x08)
	float ReticleGamma; // 0x30(0x04)
	struct FLinearColor ReticleTint; // 0x34(0x10)
	float LensDistortion; // 0x44(0x04)
	float LensCA; // 0x48(0x04)
	float OuterBrightness; // 0x4c(0x04)
	struct FLinearColor LensTint; // 0x50(0x10)
	float ParallaxMovementScale; // 0x60(0x04)
	float ParallaxRadiusScale; // 0x64(0x04)
	struct FVector ScopeCenterNear; // 0x68(0x0c)
	struct FVector ScopeCenterFar; // 0x74(0x0c)
	struct FVector ReticleCenter; // 0x80(0x0c)
	struct FVector ReticleUp; // 0x8c(0x0c)
	struct FVector2D ReticleRect; // 0x98(0x08)
	struct UTexture2D* ReticleTexture; // 0xa0(0x08)
	struct UTexture2D* ReticleMaskTexture; // 0xa8(0x08)
	float ReticleDirtPower; // 0xb0(0x04)
	float ReticleDirtSize; // 0xb4(0x04)
	struct UTexture2D* ReticleDirtTexture; // 0xb8(0x08)
	struct FVector4 ReticleBrightSceneVisibilityMultipliers; // 0xc0(0x10)
};

