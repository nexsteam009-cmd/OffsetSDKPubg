// Enum TslGameMode.ETutorialStepPlatform
enum class ETutorialStepPlatform : uint8 {
	All,
	PCOnly,
	ConsoleOnly,
	ETutorialStepPlatform_MAX,
};

// Enum TslGameMode.ETutorialBlueZoneState
enum class ETutorialBlueZoneState : uint8 {
	Idle,
	Warning,
	Releasing,
	Paused,
	ETutorialBlueZoneState_MAX,
};

// Enum TslGameMode.ETutorialStepResult
enum class ETutorialStepResult : uint8 {
	Todo,
	InProgress,
	Succeeded,
	Failed,
	ETutorialStepResult_MAX,
};

// Enum TslGameMode.ETslSKBDDifficulty
enum class ETslSKBDDifficulty : uint8 {
	Easy,
	Normal,
	Hard,
	None,
	ETslSKBDDifficulty_MAX,
};

// Enum TslGameMode.ETslSLBStageDifficulty
enum class ETslSLBStageDifficulty : uint8 {
	Easy,
	Normal,
	Hard,
	Max,
	ETslSLBStageDifficulty_MAX,
};

// Enum TslGameMode.ETslSLBStage
enum class ETslSLBStage : uint8 {
	Stage1,
	Stage2,
	Stage3,
	Stage4,
	Stage5,
	Stage6,
	Max,
	ETslSLBStage_MAX,
};

// Enum TslGameMode.EModWeaponSlotType
enum class EModWeaponSlotType : uint8 {
	PrimaryWeapon1,
	PrimaryWeapon2,
	SecondaryWeapon,
	MeleeWeapon,
	ThrowableWeapon,
	None,
	EModWeaponSlotType_MAX,
};

// Enum TslGameMode.EModAirborneRouteType
enum class EModAirborneRouteType : uint8 {
	Center,
	BlueZoneCenter,
	Device,
	Random,
	EModAirborneRouteType_MAX,
};

// Enum TslGameMode.EModHeadIconType
enum class EModHeadIconType : uint8 {
	None,
	NumberOne,
	NumberTwo,
	NumberThree,
	NumberFour,
	NumberFive,
	NumberSix,
	NumberSeven,
	NumberEight,
	NumberNine,
	Cross,
	Reinforced,
	Zombie,
	Defense,
	Target,
	Commander,
	EModHeadIconType_MAX,
};

// Enum TslGameMode.EModTriggerVolumeTriggerType
enum class EModTriggerVolumeTriggerType : uint8 {
	OnEnter,
	OnExit,
	Both,
	EModTriggerVolumeTriggerType_MAX,
};

// Enum TslGameMode.EModVolumeShape
enum class EModVolumeShape : uint8 {
	Box,
	Cube,
	Sphere,
	EModVolumeShape_MAX,
};

// Enum TslGameMode.EActivationRoundPhase
enum class EActivationRoundPhase : uint8 {
	None,
	DeviceCreation,
	Standby_BeforeSpawn,
	Standby_AfterSpawn,
	RoundStart_BeforeSpawn,
	RoundStart_AfterSpawn,
	EActivationRoundPhase_MAX,
};

// Enum TslGameMode.ERoundEventCondition
enum class ERoundEventCondition : uint8 {
	Standby_BeforeSpawn,
	Standby_AfterSpawn,
	RoundStart_BeforeSpawn,
	RoundStart_AfterSpawn,
	AfterRoundStartDelay,
	Timeout,
	RoundEnd,
	ERoundEventCondition_MAX,
};

// Enum TslGameMode.ERoundConditionScope
enum class ERoundConditionScope : uint8 {
	AllRounds,
	SpecificRound,
	ERoundConditionScope_MAX,
};

// Enum TslGameMode.EModColorType
enum class EModColorType : uint8 {
	None,
	White,
	Black,
	Red,
	Green,
	Blue,
	Yellow,
	Cyan,
	Magenta,
	Orange,
	Purple,
	Turquoise,
	Silver,
	Emerald,
	EModColorType_MAX,
};

// Enum TslGameMode.EModItemCategory
enum class EModItemCategory : uint8 {
	None,
	Helmet,
	Armor,
	Backpack,
	AR,
	DMR,
	SR,
	LMG,
	SMG,
	Shotgun,
	Handgun,
	Crossbow,
	Launcher,
	Melee,
	Attachment,
	Ammunition,
	Throwable,
	Consumable,
	Wearable,
	Misc,
	EModItemCategory_MAX,
};

// Enum TslGameMode.EModTargetPlayer
enum class EModTargetPlayer : uint8 {
	ActivatingParty,
	ActivatingPlayer,
	AllPlayers,
	SelectedParty,
	SelectedPlayer,
	HasTagPlayer,
	EModTargetPlayer_MAX,
};

// Enum TslGameMode.EModAIActionOption
enum class EModAIActionOption : uint8 {
	Nothing,
	NavigationMove,
	EModAIActionOption_MAX,
};

// Enum TslGameMode.EModDummyPlayerStanceOption
enum class EModDummyPlayerStanceOption : uint8 {
	Stand,
	Crouch,
	Prone,
	EModDummyPlayerStanceOption_MAX,
};

// Enum TslGameMode.EModDeviceEventType
enum class EModDeviceEventType : uint8 {
	Trigger,
	Action,
	EModDeviceEventType_MAX,
};

// Enum TslGameMode.EModNumericType
enum class EModNumericType : uint8 {
	FixedValue,
	NumericDeviceValue,
	EModNumericType_MAX,
};

// Enum TslGameMode.EModPropertyType
enum class EModPropertyType : uint8 {
	Int,
	Float,
	Bool,
	String,
	Object,
	Array,
	Enum,
	Vector,
	Item,
	Device,
	ModNumeric,
	Max,
	EModPropertyType_MAX,
};

// Enum TslGameMode.EModAirDropTargetType
enum class EModAirDropTargetType : uint8 {
	Center,
	Device,
	EModAirDropTargetType_MAX,
};

// Enum TslGameMode.EBillboardSortType
enum class EBillboardSortType : uint8 {
	Descending,
	Ascending,
	EBillboardSortType_MAX,
};

// Enum TslGameMode.ECheckpointShape
enum class ECheckpointShape : uint8 {
	Circle,
	Square,
	ECheckpointShape_MAX,
};

// Enum TslGameMode.EConditionOperatorType
enum class EConditionOperatorType : uint8 {
	And,
	Or,
	EConditionOperatorType_MAX,
};

// Enum TslGameMode.EConditionCompareType
enum class EConditionCompareType : uint8 {
	Equal,
	Less,
	Greater,
	EConditionCompareType_MAX,
};

// Enum TslGameMode.EModItemRecipientFulledBackpackAction
enum class EModItemRecipientFulledBackpackAction : uint8 {
	DropItem,
	DoNotProvide,
	EModItemRecipientFulledBackpackAction_MAX,
};

// Enum TslGameMode.EModItemRecipientInventoryAction
enum class EModItemRecipientInventoryAction : uint8 {
	AllClear,
	ClearInventory,
	PreserveInventory,
	EModItemRecipientInventoryAction_MAX,
};

// Enum TslGameMode.EModItemReceivePosition
enum class EModItemReceivePosition : uint8 {
	PlayerLocation,
	PlayerInventory,
	EModItemReceivePosition_MAX,
};

// Enum TslGameMode.EModItemSpawnType
enum class EModItemSpawnType : uint8 {
	Sequential,
	Random,
	ConsumeRandom,
	EModItemSpawnType_MAX,
};

// Enum TslGameMode.EModLightType
enum class EModLightType : uint8 {
	PointLight,
	SpotLight,
	EModLightType_MAX,
};

// Enum TslGameMode.EPointManagerPointChangeType
enum class EPointManagerPointChangeType : uint8 {
	Increase,
	Decrease,
	EPointManagerPointChangeType_MAX,
};

// Enum TslGameMode.EModTeamDistributionMethod
enum class EModTeamDistributionMethod : uint8 {
	Custom,
	Balanced,
	Sequential,
	Selector,
	EModTeamDistributionMethod_MAX,
};

// Enum TslGameMode.EModUserSelectPlayType
enum class EModUserSelectPlayType : uint8 {
	NONE,
	SHOOTING_BATTLEROYALE,
	SHOOTING_DEATHMATCH,
	SHOOTING_OCCUPATION,
	SHOOTING_ETC,
	NONSHOOTING_PARKOUR,
	NONSHOOTING_TRAINING,
	NONSHOOTING_DEFENSE,
	NONSHOOTING_ETC,
	EModUserSelectPlayType_MAX,
};

// Enum TslGameMode.EModPropNotifyType
enum class EModPropNotifyType : uint8 {
	Created,
	Destroyed,
	Moved,
	EModPropNotifyType_MAX,
};

// Enum TslGameMode.EModObjectSubCategory
enum class EModObjectSubCategory : uint8 {
	None,
	LargeHouse,
	MediumHouse,
	SmallHouse,
	Wall,
	Floor,
	Stair,
	Foliage,
	Prop,
	Destructible,
	MAX_COUNT,
	EModObjectSubCategory_MAX,
};

// Enum TslGameMode.EModObjectType
enum class EModObjectType : uint8 {
	None,
	Prop,
	Device,
	MAX_COUNT,
	EModObjectType_MAX,
};

// Enum TslGameMode.EModUserPlayType
enum class EModUserPlayType : uint8 {
	Default,
	Spectator,
	Observer,
	EModUserPlayType_MAX,
};

// Enum TslGameMode.ETimeCountFormat
enum class ETimeCountFormat : uint8 {
	Sec,
	MinSec,
	MinSecMilli,
	ETimeCountFormat_MAX,
};

// Enum TslGameMode.EModTagType
enum class EModTagType : uint8 {
	Main,
	Sub,
	Common,
	EModTagType_MAX,
};

// Enum TslGameMode.EModDummyPlayerFillOption
enum class EModDummyPlayerFillOption : uint8 {
	None,
	OnePerEmptyTeam,
	FillAllTeams,
	EModDummyPlayerFillOption_MAX,
};

// Enum TslGameMode.EModPlayerOverflowAction
enum class EModPlayerOverflowAction : uint8 {
	OverflowAssign,
	Spectator,
	Observer,
	EModPlayerOverflowAction_MAX,
};

// Enum TslGameMode.EModStopwatchRecordScope
enum class EModStopwatchRecordScope : uint8 {
	Personal,
	Global,
	EModStopwatchRecordScope_MAX,
};

// Enum TslGameMode.EModSuperJumpType
enum class EModSuperJumpType : uint8 {
	CallerUp,
	Reflect,
	EModSuperJumpType_MAX,
};

// Enum TslGameMode.EModSuperJumpTargetType
enum class EModSuperJumpTargetType : uint8 {
	All,
	CharacterOnly,
	VehicleOnly,
	EModSuperJumpTargetType_MAX,
};

// Enum TslGameMode.ETextDisplayModFontSize
enum class ETextDisplayModFontSize : uint8 {
	Small,
	Medium,
	Large,
	Largest,
	ETextDisplayModFontSize_MAX,
};

// Enum TslGameMode.ETimerWidgetLocation
enum class ETimerWidgetLocation : uint8 {
	Left,
	Center,
	ETimerWidgetLocation_MAX,
};

// Enum TslGameMode.EVariableScope
enum class EVariableScope : uint8 {
	Global,
	Player,
	EVariableScope_MAX,
};

// Enum TslGameMode.EBombGameAreaType
enum class EBombGameAreaType : uint8 {
	None,
	StartArea,
	PlantedASite,
	PlantedBSite,
	NormalArea,
	EBombGameAreaType_MAX,
};

// Enum TslGameMode.EBombItemCategory
enum class EBombItemCategory : uint8 {
	None,
	Pistol,
	SMG,
	AR,
	SG,
	DMR,
	SR,
	Equipment,
	Throwable,
	ETC,
	EBombItemCategory_MAX,
};

// Enum TslGameMode.EBombTeamStateInfoType
enum class EBombTeamStateInfoType : uint8 {
	MoveASite,
	MoveBSite,
	SaveMoney,
	GiveMoney,
	Rush,
	SaveMe,
	MAX,
	EBombTeamStateInfoType_MAX,
};

// Enum TslGameMode.ECoinTakeType
enum class ECoinTakeType : uint8 {
	None,
	StoreSellItemToCustomer,
	CustomerSellItemToStore,
	KillReward,
	KillAssistReward,
	BombInstallReward,
	BombDefuseReward,
	RoundWin,
	Donate,
	Receipt,
	RoundStartNormal,
	RoundStartDecisive,
	RoundDefeat,
	TeamRoleChange,
	MinAllowanceCoin,
	MaxAllowanceCoin,
	ThriftyDiffSpendCoin,
	Admin,
	ECoinTakeType_MAX,
};

// Enum TslGameMode.EBombModeSoundType
enum class EBombModeSoundType : uint8 {
	Unknown,
	BombPlanting_Phase1,
	BombPlanting_Phase2,
	BombPlanting_Phase3,
	BombExplosion,
	BombDefusing,
	GiveCoin,
	ReceiveCoin,
	Purchase,
	BombTimerStart,
	BombTimerDismantle,
	BombTimeStop,
	RestrictionTimer,
	EBombModeSoundType_MAX,
};

// Enum TslGameMode.ETimeBombPhaseType
enum class ETimeBombPhaseType : uint8 {
	Unknown,
	Planting_Phase1,
	Planting_Phase2,
	Planting_Phase3,
	Explosion,
	Defusing,
	ETimeBombPhaseType_MAX,
};

// Enum TslGameMode.EBombMatchWinType
enum class EBombMatchWinType : uint8 {
	Draw,
	ExceedRoundWin,
	ExceedUseBombKit,
	ExceedKillCount,
	EnemyAllLogout,
	EBombMatchWinType_MAX,
};

// Enum TslGameMode.*3758c1e582
enum class *3758c1e582 : uint8 {
	*1fdad8a402,
	*662fa330c8,
	*1692f3e4b2,
	*fa4c07dae0,
	*5ec2c7f2de,
	*3758c1e582_MAX,
};

// Enum TslGameMode.EBombPlantedState
enum class EBombPlantedState : uint8 {
	NotSet,
	Planting,
	Planted,
	Defused,
	Exploded,
	EBombPlantedState_MAX,
};

// Enum TslGameMode.EBombRoundInProgressState
enum class EBombRoundInProgressState : uint8 {
	Invalid,
	TeamDecision,
	Preparing,
	Playing,
	Ending,
	EBombRoundInProgressState_MAX,
};

// Enum TslGameMode.EBombRoundAttribute
enum class EBombRoundAttribute : uint8 {
	None,
	Normal,
	OverTime,
	TeamRoleChanged,
	EBombRoundAttribute_MAX,
};

// Enum TslGameMode.EBombRoundResultConditionType
enum class EBombRoundResultConditionType : uint8 {
	None,
	Excellent,
	Impressive,
	Overwhelming,
	Perfect,
	Thrifty,
	MAX,
	EBombRoundResultConditionType_MAX,
};

// Enum TslGameMode.EBombRoundResultHistoryType
enum class EBombRoundResultHistoryType : uint8 {
	None,
	TimeUp,
	BombExploded,
	BombDefused,
	TeamElimination,
	TeamGameLogout,
	EBombRoundResultHistoryType_MAX,
};

// Enum TslGameMode.EBombUITeamStatusType
enum class EBombUITeamStatusType : uint8 {
	None,
	Attack,
	Defence,
	MAX,
	EBombUITeamStatusType_MAX,
};

// Enum TslGameMode.EBombScopeInfo
enum class EBombScopeInfo : uint8 {
	None,
	Hologram,
	Reddot,
	Scope2x,
	Scope3x,
	Scope4x,
	Scope6x,
	Scope8x,
	Scope15x,
	MAX,
	EBombScopeInfo_MAX,
};

// Enum TslGameMode.EBombTeamRole
enum class EBombTeamRole : uint8 {
	None,
	AttackTeam,
	DefenseTeam,
	ROLE_MAX,
	EBombTeamRole_MAX,
};

// Enum TslGameMode.EBombUIMarkStatusType
enum class EBombUIMarkStatusType : uint8 {
	None,
	BombInstall,
	ExplosionPending,
	ExplosionComplete,
	Disarm,
	DisarmCancel,
	DisarmComplete,
	MAX,
	EBombUIMarkStatusType_MAX,
};

// Enum TslGameMode.EBombUIMatchResultType
enum class EBombUIMatchResultType : uint8 {
	None,
	Lose,
	Win,
	Draw,
	MAX,
	EBombUIMatchResultType_MAX,
};

// Enum TslGameMode.EBombUIPlayerStatusType
enum class EBombUIPlayerStatusType : uint8 {
	None,
	Alive,
	DBNO,
	Die,
	Disconnected,
	MAX,
	EBombUIPlayerStatusType_MAX,
};

// Enum TslGameMode.EBombObserverHudMapMode
enum class EBombObserverHudMapMode : uint8 {
	MiniMap,
	WorldMap,
	EBombObserverHudMapMode_MAX,
};

// Enum TslGameMode.EBombObserverStatusBoardRoundStateUIType
enum class EBombObserverStatusBoardRoundStateUIType : uint8 {
	WaitingRound,
	LeftTeamWin,
	RightTeamWin,
	CurrentRound,
	EBombObserverStatusBoardRoundStateUIType_MAX,
};

// Enum TslGameMode.EBombObserverTeamInfoPlayerStateUIType
enum class EBombObserverTeamInfoPlayerStateUIType : uint8 {
	None,
	Live,
	Dbno,
	Dead,
	EBombObserverTeamInfoPlayerStateUIType_MAX,
};

// Enum TslGameMode.EBombStartEffectWidgetAPI
enum class EBombStartEffectWidgetAPI : uint8 {
	Type1_PlayStartEffect,
	Type2_PlayStartRoundEffect,
	EBombStartEffectWidgetAPI_MAX,
};

// Enum TslGameMode.ETslSLBGeneratorState
enum class ETslSLBGeneratorState : uint8 {
	Breakdown,
	NeedFuel,
	BeforeActivate,
	Activate,
	MAX,
	ETslSLBGeneratorState_MAX,
};

// Enum TslGameMode.ETslSLBZombieSpawnType
enum class ETslSLBZombieSpawnType : uint8 {
	Instant,
	Time,
	ETslSLBZombieSpawnType_MAX,
};

// Enum TslGameMode.EZombieTargetingType
enum class EZombieTargetingType : uint8 {
	Passive,
	Aggressive,
	AggressiveRandom,
	EZombieTargetingType_MAX,
};

// Enum TslGameMode.*f04d1186a4
enum class *f04d1186a4 : uint8 {
	*2371ecd4fd,
	*d80f1e87ea,
	*e17fc3fc58,
	*4844341b78,
	*7cbad077bb,
	*e0fcf4e4b8,
	*4555c2310b,
	*5b4634a5eb,
	*7add0d7a8e,
	*df5507d057,
	*f6b10edd09,
	*dbffd02874,
	*f04d1186a4_MAX,
};

// Enum TslGameMode.EAITaskState
enum class EAITaskState : uint8 {
	Idle,
	Tasking,
	Done,
	InValid,
	EAITaskState_MAX,
};

// Enum TslGameMode.EBossSkillType
enum class EBossSkillType : uint8 {
	Idle,
	Spawn,
	LineLaser,
	SectorLaser,
	Chase,
	InstantKill,
	RandomMove,
	EBossSkillType_MAX,
};

// Enum TslGameMode.ESKBDStage
enum class ESKBDStage : uint8 {
	None,
	Stage1,
	Stage2,
	Stage3,
	ESKBDStage_MAX,
};

// Enum TslGameMode.EInstantKillState
enum class EInstantKillState : uint8 {
	None,
	Prepare,
	Success,
	Fail,
	EInstantKillState_MAX,
};

// Enum TslGameMode.EAIBattleState
enum class EAIBattleState : uint8 {
	None,
	ReturnToSpawnLocation,
	Patrol,
	Battle,
	EAIBattleState_MAX,
};

// Enum TslGameMode.ECaptureAreaState
enum class ECaptureAreaState : uint8 {
	Neutral,
	Progress,
	Stalemate,
	Captured,
	ECaptureAreaState_MAX,
};

// Enum TslGameMode.EModEditManagerContentType
enum class EModEditManagerContentType : uint8 {
	ObjectList,
	RuleSetList,
	PlayOptionList,
	TeamSelectionList,
	CreatorInfoList,
	EModEditManagerContentType_MAX,
};

// Enum TslGameMode.EModRunState
enum class EModRunState : uint8 {
	None,
	Edit,
	Play,
	Waiting,
	EModRunState_MAX,
};

// Enum TslGameMode.EModLaunchMode
enum class EModLaunchMode : uint8 {
	None,
	Build,
	Run,
	EModLaunchMode_MAX,
};

// Enum TslGameMode.EModSampleCategory
enum class EModSampleCategory : uint8 {
	Default,
	Partner,
	EModSampleCategory_MAX,
};

// Enum TslGameMode.EModPlayerMoveMode
enum class EModPlayerMoveMode : uint8 {
	Walk,
	Fly,
	EModPlayerMoveMode_MAX,
};

// Enum TslGameMode.EModInputType
enum class EModInputType : uint8 {
	Click,
	DoubleClick,
	Hold,
	Repeat,
	Release,
	EModInputType_MAX,
};

// Enum TslGameMode.EModResultType
enum class EModResultType : uint8 {
	None,
	CurRound,
	Total,
	EModResultType_MAX,
};

// Enum TslGameMode.ELimitLevel
enum class ELimitLevel : uint8 {
	Normal,
	Reached,
	Exceeded,
	Max,
	ELimitLevel_MAX,
};

// Enum TslGameMode.EModLogLevel
enum class EModLogLevel : uint8 {
	Normal,
	Warning,
	Error,
	EModLogLevel_MAX,
};

// Enum TslGameMode.EModLogContentType
enum class EModLogContentType : uint8 {
	All,
	Edit,
	Play,
	EModLogContentType_MAX,
};

// Enum TslGameMode.EModActorType
enum class EModActorType : uint8 {
	None,
	CaptureArea,
	EModActorType_MAX,
};

// Enum TslGameMode.EModObjectControlMode
enum class EModObjectControlMode : uint8 {
	None,
	NonBuild,
	Normal,
	SelectOne,
	SelectMulti,
	SelectObjectID,
	Copy,
	Cut,
	MAX_COUNT,
	EModObjectControlMode_MAX,
};

// Enum TslGameMode.EModTransformChangeMode
enum class EModTransformChangeMode : uint8 {
	None,
	Rotate,
	Scale,
	MAX_COUNT,
	EModTransformChangeMode_MAX,
};

// Enum TslGameMode.EModGravitySnapMode
enum class EModGravitySnapMode : uint8 {
	None,
	Everything,
	OnlyLandscape,
	MAX_COUNT,
	EModGravitySnapMode_MAX,
};

// Enum TslGameMode.EModTargetAxisType
enum class EModTargetAxisType : uint8 {
	None,
	X,
	Y,
	Z,
	XYZ,
	MAX_COUNT,
	EModTargetAxisType_MAX,
};

// Enum TslGameMode.EModBombState
enum class EModBombState : uint8 {
	None,
	Planted,
	Defused,
	Exploded,
	EModBombState_MAX,
};

// Enum TslGameMode.EModDataTransferReason
enum class EModDataTransferReason : uint8 {
	None,
	CheatSave,
	QuickSave,
	AutoSave,
	ManualSave,
	ManualLoad,
	PatchOverwrite,
	EModDataTransferReason_MAX,
};

// Enum TslGameMode.EOneOnOneRoomState
enum class EOneOnOneRoomState : uint8 {
	None,
	MatchPrepare,
	MatchStart,
	MatchEnd,
	MatchEndResult,
	RoundStart,
	RoundPlaying,
	GiveScore,
	BreakTime,
	RoundResult,
	RoundEnd,
	EOneOnOneRoomState_MAX,
};

// Enum TslGameMode.EOneOnOneTicketState
enum class EOneOnOneTicketState : uint8 {
	None,
	Waiting,
	CountDown,
	Playing,
	EOneOnOneTicketState_MAX,
};

// Enum TslGameMode.EOneOnOneInvenRecoverType
enum class EOneOnOneInvenRecoverType : uint8 {
	None,
	Empty,
	Recover,
	EOneOnOneInvenRecoverType_MAX,
};

// Enum TslGameMode.EOneOnOneMessageType
enum class EOneOnOneMessageType : uint8 {
	None,
	StartSearch_Message,
	StopSearch_Message_Normal,
	StopSearch_Message_UseDiffFacility,
	EnterArena_Message,
	ExitArena_Message_Normal,
	ExitArena_Message_FromAudience,
	CannotSearch_Message_NotInProgress,
	EOneOnOneMessageType_MAX,
};

// Enum TslGameMode.EPropHuntAbilityType
enum class EPropHuntAbilityType : uint8 {
	Taunt,
	Decoy,
	Flash,
	EPropHuntAbilityType_MAX,
};

// Enum TslGameMode.EPropHuntPropSize
enum class EPropHuntPropSize : uint8 {
	VerySmall,
	Small,
	Medium,
	Large,
	VeryLarge,
	EPropHuntPropSize_MAX,
};

// Enum TslGameMode.EPropHuntRoundResult
enum class EPropHuntRoundResult : uint8 {
	None,
	HuntersWin,
	PropsWin,
	Draw,
	EPropHuntRoundResult_MAX,
};

// Enum TslGameMode.EPropHuntMatchPhase
enum class EPropHuntMatchPhase : uint8 {
	WaitingToStart,
	PreparationPhase,
	Round1Phase,
	PropChangePhase,
	Round2Phase,
	FeverTimePhase,
	RoundEnd,
	MAX,
	EPropHuntMatchPhase_MAX,
};

// Enum TslGameMode.EPropHuntRole
enum class EPropHuntRole : uint8 {
	None,
	Hunter,
	Prop,
	EPropHuntRole_MAX,
};

// Enum TslGameMode.ESDMSessionEndReason
enum class ESDMSessionEndReason : uint8 {
	GoalScoreReached,
	TimeLimit,
	AllPlayersLeft,
	Other,
	ESDMSessionEndReason_MAX,
};

// Enum TslGameMode.EBossAKEventType
enum class EBossAKEventType : uint8 {
	Idle,
	PreCharge,
	PostCharge,
	PreRage,
	PostRage,
	PreGroggy,
	PostGroggy,
	EBossAKEventType_MAX,
};

// Enum TslGameMode.ESKBDTimerWidgetType
enum class ESKBDTimerWidgetType : uint8 {
	SelectDifficulty,
	HUD,
	ESKBDTimerWidgetType_MAX,
};

// Enum TslGameMode.EThrowBuffType
enum class EThrowBuffType : uint8 {
	None,
	Invincible,
	SpeedUp,
	EThrowBuffType_MAX,
};

// Enum TslGameMode.ETslSLBInteractionType
enum class ETslSLBInteractionType : uint8 {
	None,
	Generator,
	Refueling,
	ClearDebuff,
	OpenLastDoor,
	MAX,
	ETslSLBInteractionType_MAX,
};

// Enum TslGameMode.EPrivateTrainingRoomPhase
enum class EPrivateTrainingRoomPhase : uint8 {
	None,
	FinishSelect_Practice,
	StartSelect_Weapon,
	SetupStart_Practice,
	CountDownStart_Practice,
	Start_Practice,
	Cancel_Practice,
	Finish_Practice,
	Restart_Practice,
	Exit_Practice,
	EPrivateTrainingRoomPhase_MAX,
};

// Enum TslGameMode.EPrivateWaitingRoomPhase
enum class EPrivateWaitingRoomPhase : uint8 {
	None,
	LoadingMap,
	Ready,
	StartSelect_Practice,
	EPrivateWaitingRoomPhase_MAX,
};

// Enum TslGameMode.ETrainingButtonActiveType
enum class ETrainingButtonActiveType : uint8 {
	Default,
	AimTrainingOnly,
	ETrainingButtonActiveType_MAX,
};

// Enum TslGameMode.EBuffCountType
enum class EBuffCountType : uint8 {
	HideCount,
	ItemCount,
	AmmoCount,
	EBuffCountType_MAX,
};

// Enum TslGameMode.EPackageState
enum class EPackageState : uint8 {
	Normal,
	Broken,
	Empty,
	EPackageState_MAX,
};

// Enum TslGameMode.EHeatState
enum class EHeatState : uint8 {
	Stable,
	IncreaseHeat,
	DecreaseHeat,
	OverHeated,
	CoolingDown,
	EHeatState_MAX,
};

// Enum TslGameMode.EHealthDebuffType
enum class EHealthDebuffType : uint8 {
	None,
	Bleed,
	EHealthDebuffType_MAX,
};

// Enum TslGameMode.*84ca051ea7
enum class *84ca051ea7 : uint8 {
	*008b2167fe,
	*11312260c1,
	*d557b45bb9,
	*84ca051ea7_MAX,
};

// Enum TslGameMode.ETslSLBAreaBlockActorState
enum class ETslSLBAreaBlockActorState : uint8 {
	Close,
	Open,
	MAX,
	ETslSLBAreaBlockActorState_MAX,
};

// Enum TslGameMode.ESLBTriggerShapeType
enum class ESLBTriggerShapeType : uint8 {
	Box,
	Sphere,
	ESLBTriggerShapeType_MAX,
};

// Enum TslGameMode.ETslSLBExitActorState
enum class ETslSLBExitActorState : uint8 {
	Close,
	Open,
	MAX,
	ETslSLBExitActorState_MAX,
};

// Enum TslGameMode.ETslTrainingDashboardRangeUIType
enum class ETslTrainingDashboardRangeUIType : uint8 {
	None,
	Range10,
	Range50,
	Range100,
	ETslTrainingDashboardRangeUIType_MAX,
};

// Enum TslGameMode.ETslTrainingDashboardPracticeUIType
enum class ETslTrainingDashboardPracticeUIType : uint8 {
	None,
	Practice_Aim,
	Practice_Sound,
	ETslTrainingDashboardPracticeUIType_MAX,
};

// Enum TslGameMode.ETrainingRoomInteractionType
enum class ETrainingRoomInteractionType : uint8 {
	None,
	Training_Stop,
	ETrainingRoomInteractionType_MAX,
};

// Enum TslGameMode.ETutorialRank
enum class ETutorialRank : uint8 {
	B,
	A,
	S,
	SS,
	ETutorialRank_MAX,
};

// Enum TslGameMode.ETutorialParachuteLandingResult
enum class ETutorialParachuteLandingResult : uint8 {
	None,
	Perfect,
	Success,
	Fail,
	ETutorialParachuteLandingResult_MAX,
};

// Enum TslGameMode.ETutorialVoicePlaybackMode
enum class ETutorialVoicePlaybackMode : uint8 {
	Queue,
	Interrupt,
	ETutorialVoicePlaybackMode_MAX,
};

// Enum TslGameMode.ETutorialVoiceSegmentType
enum class ETutorialVoiceSegmentType : uint8 {
	Greeting,
	Content,
	Closing,
	Full,
	ETutorialVoiceSegmentType_MAX,
};

// Enum TslGameMode.ETutorialScoreType
enum class ETutorialScoreType : uint8 {
	Bonus,
	Penalty,
	ETutorialScoreType_MAX,
};

// Enum TslGameMode.*3ed9616ad5
enum class *3ed9616ad5 : uint8 {
	*f091e6d6f3,
	*97662e00b3,
	*9430a70782,
	*cee2257e05,
	*c9ec6e7152,
	*3ed9616ad5_MAX,
};

// Enum TslGameMode.ETutorialCameraFadeType
enum class ETutorialCameraFadeType : uint8 {
	FadeOut,
	FadeIn,
	ETutorialCameraFadeType_MAX,
};

// Enum TslGameMode.EDuoBotMapMarkerAction
enum class EDuoBotMapMarkerAction : uint8 {
	SetPing,
	ClearPing,
	AddWaypoint,
	ClearWaypoint,
	EDuoBotMapMarkerAction_MAX,
};

// Enum TslGameMode.ETutorialHealthMode
enum class ETutorialHealthMode : uint8 {
	Percent,
	Value,
	ETutorialHealthMode_MAX,
};

// Enum TslGameMode.ETutorialBlueZoneDamageTriggerMode
enum class ETutorialBlueZoneDamageTriggerMode : uint8 {
	PerPhase,
	Cooldown,
	ETutorialBlueZoneDamageTriggerMode_MAX,
};

// Enum TslGameMode.ETutorialSignalCharacterItemQueryType
enum class ETutorialSignalCharacterItemQueryType : uint8 {
	Inventory,
	Equipment,
	Attachment,
	Armed,
	ETutorialSignalCharacterItemQueryType_MAX,
};

// Enum TslGameMode.ETutorialSignalCharacterStateType
enum class ETutorialSignalCharacterStateType : uint8 {
	Sprinting,
	Vaulting,
	Crouching,
	Proning,
	InVehicle,
	InVehicleAsPassenger,
	ETutorialSignalCharacterStateType_MAX,
};

// Enum TslGameMode.EConditionOperator
enum class EConditionOperator : uint8 {
	And,
	Or,
	EConditionOperator_MAX,
};

// Enum TslGameMode.EAxisCompareType
enum class EAxisCompareType : uint8 {
	GreaterThan,
	LessThan,
	NotZero,
	EAxisCompareType_MAX,
};

// Enum TslGameMode.ETutorialTriggerVolumeTarget
enum class ETutorialTriggerVolumeTarget : uint8 {
	Character,
	Projectile,
	ETutorialTriggerVolumeTarget_MAX,
};

// Enum TslGameMode.ETutorialTriggerVolumeMode
enum class ETutorialTriggerVolumeMode : uint8 {
	Enter,
	Exit,
	ETutorialTriggerVolumeMode_MAX,
};

// Enum TslGameMode.ETslWeaponStateConditionType
enum class ETslWeaponStateConditionType : uint8 {
	ReloadComplete,
	Aiming,
	Scoping,
	AmmoEmpty,
	CookingGrenade,
	ETslWeaponStateConditionType_MAX,
};

// ScriptStruct TslGameMode.*5fd6220c30
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*5fd6220c30 {
	int32 GoalScore; // 0x00(0x04)
	int32 ChainKillBonusStartCount; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*9b34019fa1
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9b34019fa1 {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGameMode.*5e0b2847e0
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5e0b2847e0 {
	int32 GoalScore; // 0x00(0x04)
	bool bIsTeamElimination; // 0x04(0x01)
	bool bUsingTeamXRay; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGameMode.*711337ebbc
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*711337ebbc {
	float TimeLimitSeconds; // 0x00(0x04)
	float LastRespawnTimeSeconds; // 0x04(0x04)
	struct TArray<int32> TeamIds; // 0x08(0x10)
	struct TArray<int32> TeamIndices; // 0x18(0x10)
	struct TArray<struct FString> TeamLeaderNames; // 0x28(0x10)
	struct TArray<struct FString> TeamLeaderClanNames; // 0x38(0x10)
	int32 TeamCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGameMode.*f758dbbf60
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*f758dbbf60 {
	struct FVector Position; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float WarningDuration; // 0x10(0x04)
	float ReleaseDuration; // 0x14(0x04)
	float DamagePerSecond; // 0x18(0x04)
};

// ScriptStruct TslGameMode.*61ec7919e9
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct F*61ec7919e9 : FTableRowBase {
	struct FName ChapterID; // 0x08(0x08)
	struct FText ChapterName; // 0x10(0x18)
	struct UClass* ChapterClass; // 0x28(0x08)
	struct TArray<struct F*bed35f8815> Steps; // 0x30(0x10)
	float ChapterTransitionDelaySec; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName RestartPlayerTag; // 0x48(0x08)
	struct FName RestartDuoBotTag; // 0x50(0x08)
};

// ScriptStruct TslGameMode.*bed35f8815
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*bed35f8815 {
	struct FName StepID; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DisplayNameGamepad; // 0x20(0x18)
	struct UClass* StepClass; // 0x38(0x08)
	bool bHidden; // 0x40(0x01)
	bool bFailedQuiet; // 0x41(0x01)
	enum class ETutorialStepPlatform Platform; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float CompletionDelaySec; // 0x44(0x04)
};

// ScriptStruct TslGameMode.*2e9c0bdef4
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*2e9c0bdef4 {
	int32 *cd5f3559dc; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *dec7129b3d; // 0x08(0x18)
};

// ScriptStruct TslGameMode.*27eb5855f1
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*27eb5855f1 {
	bool *d3c83bf627; // 0x00(0x01)
	bool *d92006c7e4; // 0x01(0x01)
	bool *bda3d08db9; // 0x02(0x01)
	bool *8029c7a42d; // 0x03(0x01)
};

// ScriptStruct TslGameMode.AtoZTutorialWidgetAppearance
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FAtoZTutorialWidgetAppearance {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float WidthOverride; // 0x20(0x04)
};

// ScriptStruct TslGameMode.ModDurabilitySetting
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FModDurabilitySetting {
	bool bCanTakeDamage; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxDurability; // 0x04(0x04)
};

// ScriptStruct TslGameMode.PointEventConfig
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPointEventConfig {
	bool bSendEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 PointThreshold; // 0x04(0x04)
};

// ScriptStruct TslGameMode.RoundEventCondition
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FRoundEventCondition {
	enum class ERoundEventCondition RoundEventCondition; // 0x00(0x04)
	int32 DelayedRoundStartEventSecond; // 0x04(0x04)
};

// ScriptStruct TslGameMode.RoundConditionScope
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FRoundConditionScope {
	enum class ERoundConditionScope RoundConditionScope; // 0x00(0x04)
	int32 SpecificRound; // 0x04(0x04)
};

// ScriptStruct TslGameMode.PointManagerCountCondition
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPointManagerCountCondition {
	bool bLimitActivateCount; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 MaxActivateCount; // 0x04(0x04)
};

// ScriptStruct TslGameMode.ModTargetInfo
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModTargetInfo {
	enum class EModTargetPlayer TargetType; // 0x00(0x04)
	int32 TeamId; // 0x04(0x04)
	int32 SquadMemberID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TargetPlayerTag; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ModObjectInstanceData
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModObjectInstanceData {
	int16 ObjectID; // 0x00(0x02)
	int16 DeviceIndex; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UserDeviceName; // 0x08(0x10)
	struct FString DevicePropertyData; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform SpawnTransform; // 0x30(0x30)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct TslGameMode.ModDeviceInstanceID
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceInstanceID {
	int16 ObjectID; // 0x00(0x02)
	int16 DeviceIndex; // 0x02(0x02)
};

// ScriptStruct TslGameMode.ModDeviceMeshData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FModDeviceMeshData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FString MeshName; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModDeviceDataBase
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceDataBase {
	enum class EActivationRoundPhase ActivationRoundPhase; // 0x00(0x04)
};

// ScriptStruct TslGameMode.ModDeviceVolumeData
// Size: 0x1c (Inherited: 0x04)  [layout: KHOP]
struct FModDeviceVolumeData : FModDeviceDataBase {
	enum class EModVolumeShape VolumeShape; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector BoxExtent; // 0x08(0x0c)
	float CubeExtent; // 0x14(0x04)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGameMode.*dfe5a43681
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*dfe5a43681 {
	struct FModEventID *978b5bd6ef; // 0x00(0x10)
	struct FModEventID ActionID; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ModEventID
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FModEventID {
	struct FModDeviceInstanceID DeviceInstanceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct TslGameMode.ModDeviceInstanceIDTextPair
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceInstanceIDTextPair {
	struct FModDeviceInstanceID DeviceInstanceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModNameTextPair
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModNameTextPair {
	struct FName Name; // 0x00(0x08)
	struct FText Text; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModDeviceInstanceObjectData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceInstanceObjectData {
	int16 DeviceIndex; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 TriggerCount; // 0x04(0x04)
	int32 ActionCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString UserDeviceName; // 0x10(0x10)
	struct AActor* PreviewActor; // 0x20(0x08)
};

// ScriptStruct TslGameMode.ModEventContainer
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModEventContainer {
	struct FModEventID EventID; // 0x00(0x10)
	struct TArray<struct FModEventID> RelationEventID; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ModTriggerParameter
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModTriggerParameter {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGameMode.ModNumericValidatorParam
// Size: 0x48 (Inherited: 0x01)  [layout: KHOP]
struct FModNumericValidatorParam : FModBaseValidatorParam {
	struct TArray<int16> AvailableDeviceObjectIDList; // 0x00(0x10)
	struct TArray<struct FString> ExceptNumericTypes; // 0x10(0x10)
	struct TArray<struct FString> SelectNumericTypes; // 0x20(0x10)
	float MinFixedValue; // 0x30(0x04)
	float MaxFixedValue; // 0x34(0x04)
	struct TArray<float> FixedValueSet; // 0x38(0x10)
};

// ScriptStruct TslGameMode.ModBaseValidatorParam
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModBaseValidatorParam {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGameMode.ModDeviceValidatorParam
// Size: 0x10 (Inherited: 0x01)  [layout: KHOP]
struct FModDeviceValidatorParam : FModBaseValidatorParam {
	struct TArray<int16> AvailableDeviceObjectIDList; // 0x00(0x10)
};

// ScriptStruct TslGameMode.ModEnumValidatorParam
// Size: 0x20 (Inherited: 0x01)  [layout: KHOP]
struct FModEnumValidatorParam : FModBaseValidatorParam {
	struct TArray<struct FString> ExceptEnums; // 0x00(0x10)
	struct TArray<struct FString> SelectEnums; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ModItemValidatorParam
// Size: 0x18 (Inherited: 0x01)  [layout: KHOP]
struct FModItemValidatorParam : FModBaseValidatorParam {
	int32 MaxNum; // 0x00(0x04)
	int32 MinNum; // 0x04(0x04)
	struct TArray<enum class EModItemCategory> ItemCategories; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModVectorValidatorParam
// Size: 0x18 (Inherited: 0x01)  [layout: KHOP]
struct FModVectorValidatorParam : FModBaseValidatorParam {
	struct FVector MinVector; // 0x00(0x0c)
	struct FVector MaxVector; // 0x0c(0x0c)
};

// ScriptStruct TslGameMode.ModArrayValidatorParam
// Size: 0x08 (Inherited: 0x01)  [layout: LECH - offset chi la uoc luong]
struct FModArrayValidatorParam : FModBaseValidatorParam {
	uint32 MaxNum; // 0x00(0x04)
	bool bIgnoreEmptyInitializedValue; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGameMode.ModBoolValidatorParam
// Size: 0x01 (Inherited: 0x01)  [layout: KHOP]
struct FModBoolValidatorParam : FModBaseValidatorParam {
};

// ScriptStruct TslGameMode.ModStringValidatorParam
// Size: 0x10 (Inherited: 0x01)  [layout: KHOP]
struct FModStringValidatorParam : FModBaseValidatorParam {
	int32 MaxLen; // 0x00(0x04)
	bool bAllowEmpty; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UDataTable* StringDataTable; // 0x08(0x08)
};

// ScriptStruct TslGameMode.ModStringTableRow
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct FModStringTableRow : FTableRowBase {
	struct FModStringOrAssetRef DataStr; // 0x08(0x30)
	struct FText DisplayText; // 0x38(0x18)
};

// ScriptStruct TslGameMode.ModStringOrAssetRef
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FModStringOrAssetRef {
	struct FString DataString; // 0x00(0x10)
	struct UObject* AssetRefString; // 0x10(0x20)
};

// ScriptStruct TslGameMode.ModIntValidatorParam
// Size: 0x18 (Inherited: 0x01)  [layout: KHOP]
struct FModIntValidatorParam : FModBaseValidatorParam {
	int32 MinValue; // 0x00(0x04)
	int32 MaxValue; // 0x04(0x04)
	struct TArray<int32> ValueSet; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModFloatValidatorParam
// Size: 0x18 (Inherited: 0x01)  [layout: KHOP]
struct FModFloatValidatorParam : FModBaseValidatorParam {
	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
	struct TArray<float> ValueSet; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModPropertyModNumericValueMetaData
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyModNumericValueMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModNumericValidatorParam ValidatorParam; // 0x08(0x48)
};

// ScriptStruct TslGameMode.ModPropertyDeviceMetaData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyDeviceMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModDeviceValidatorParam ValidatorParam; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModPropertyEnumMetaData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyEnumMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModEnumValidatorParam ValidatorParam; // 0x08(0x20)
};

// ScriptStruct TslGameMode.ModPropertyItemMetaData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyItemMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModItemValidatorParam ValidatorParam; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModPropertyVectorMetaData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyVectorMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModVectorValidatorParam ValidatorParam; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModPropertyArrayMetaData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyArrayMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModArrayValidatorParam ValidatorParam; // 0x08(0x08)
};

// ScriptStruct TslGameMode.ModPropertyBoolMetaData
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModPropertyBoolMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModBoolValidatorParam ValidatorParam; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGameMode.ModPropertyStringMetaData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyStringMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModStringValidatorParam ValidatorParam; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModPropertyIntMetaData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyIntMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModIntValidatorParam ValidatorParam; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModPropertyFloatMetaData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyFloatMetaData {
	struct UClass* Validator; // 0x00(0x08)
	struct FModFloatValidatorParam ValidatorParam; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModNumericValue
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FModNumericValue {
	enum class EModNumericType NumericType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FixedValue; // 0x04(0x04)
	struct FModDeviceInstanceID SourceDeviceInstanceId; // 0x08(0x04)
};

// ScriptStruct TslGameMode.ModItem
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModItem {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.ModPropertySchemaData
// Size: 0xe8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModPropertySchemaData {
	TScriptInterface<struct U*aae82b749e> Validator; // 0x00(0x10)
	struct UProperty* Property; // 0x10(0x08)
	struct FModPropertyUIMetaData UIMetaData; // 0x18(0xb8)
	char pad_D0[0x18]; // 0xd0(0x18)
};

// ScriptStruct TslGameMode.ModPropertyUIMetaData
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyUIMetaData {
	struct FModTextWrapper DisplayName; // 0x00(0x40)
	struct FModTextWrapper Description; // 0x40(0x40)
	bool bIsAdvancedDisplay; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UClass* CustomInitializerClass; // 0x88(0x08)
	struct UClass* CustomUIFactoryClass; // 0x90(0x08)
	struct UModPropertyCustomWidgetFactory* CustomUIFactory; // 0x98(0x08)
	struct UClass* OverrideUIClass; // 0xa0(0x08)
	struct TArray<struct FModPropertyUICustomOption> UICustomOptions; // 0xa8(0x10)
};

// ScriptStruct TslGameMode.ModPropertyUICustomOption
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FModPropertyUICustomOption {
	struct FName Key; // 0x00(0x08)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModTextWrapper
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModTextWrapper {
	struct FText RealText; // 0x00(0x18)
	struct FString SerializedText; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct TslGameMode.ModDeviceEventSchemaData
// Size: 0x180 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceEventSchemaData {
	struct TArray<struct FName> TriggerNames; // 0x00(0x10)
	struct TMap<struct FName, struct FModDeviceEventUIData> TriggerDisplayName; // 0x10(0x50)
	struct TMap<struct FName, struct UClass*> TriggerTargetClasses; // 0x60(0x50)
	struct TArray<struct FName> ActionNames; // 0xb0(0x10)
	struct TMap<struct FName, struct FModDeviceEventUIData> ActionDisplayName; // 0xc0(0x50)
	struct TMap<struct FName, struct UClass*> ActionTargetClasses; // 0x110(0x50)
	struct TArray<struct FName> ExcludedTriggerNames; // 0x160(0x10)
	struct TArray<struct FName> ExcludedActionNames; // 0x170(0x10)
};

// ScriptStruct TslGameMode.ModDeviceEventUIData
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceEventUIData {
	struct FModTextWrapper EventName; // 0x00(0x40)
	struct FModTextWrapper EventDescription; // 0x40(0x40)
};

// ScriptStruct TslGameMode.ModDeviceSchemaData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModDeviceSchemaData {
	struct FString JsonDataSchema; // 0x00(0x10)
	struct FString JsonEventSchema; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ActionRestrictDeviceData
// Size: 0x40 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FActionRestrictDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	struct TArray<enum class EModWeaponSlotType> RestrictedWeaponSlotTypes; // 0x28(0x10)
	bool bRestrictMove; // 0x38(0x01)
	bool bRestrictJump; // 0x39(0x01)
	bool bRestrictDrive; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct TslGameMode.AINavModData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FAINavModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModAINavPoint> CadidateNavPointList; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModAINavPoint
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FModAINavPoint {
	int32 AvailAITeamID; // 0x00(0x04)
	struct FModDeviceInstanceID NextPointNavDevice; // 0x04(0x04)
	int32 weight; // 0x08(0x04)
};

// ScriptStruct TslGameMode.AirborneDeviceData
// Size: 0x48 (Inherited: 0x04)  [layout: KHOP]
struct FAirborneDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	enum class EModAirborneRouteType RouteType; // 0x28(0x04)
	float EjectMinDistancePercent; // 0x2c(0x04)
	float AircraftStartRadiusPercent; // 0x30(0x04)
	float AircraftFlyingSpeed; // 0x34(0x04)
	float AircraftFlyingDistanceToTarget; // 0x38(0x04)
	float AircraftAltitude; // 0x3c(0x04)
	float ParachuteStartDeployAltitude; // 0x40(0x04)
	float ParachuteAutoDeployAltitude; // 0x44(0x04)
};

// ScriptStruct TslGameMode.AirDropDeviceData
// Size: 0x28 (Inherited: 0x04)  [layout: KHOP]
struct FAirDropDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModItem> Items; // 0x08(0x10)
	enum class EModAirDropTargetType DropTargetType; // 0x18(0x04)
	float RandomXOffsetRange; // 0x1c(0x04)
	float RandomYOffsetRange; // 0x20(0x04)
	float FlyingTimeToDropZone; // 0x24(0x04)
};

// ScriptStruct TslGameMode.AreaBlockingModData
// Size: 0x20 (Inherited: 0x1c)  [layout: KHOP]
struct FAreaBlockingModData : FModDeviceVolumeData {
	bool bBlockArea; // 0x1c(0x01)
	bool bBlockThrowables; // 0x1d(0x01)
	bool bBlockWeapon; // 0x1e(0x01)
	bool bBlueEffect; // 0x1f(0x01)
};

// ScriptStruct TslGameMode.BGMModData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FBGMModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FString MusicName; // 0x08(0x10)
};

// ScriptStruct TslGameMode.BillboardModData
// Size: 0x0c (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FBillboardModData : FModDeviceDataBase {
	struct FModDeviceInstanceID ConnectedDevice; // 0x04(0x04)
	enum class EBillboardSortType DisplayOrder; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGameMode.*3f2386241f
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*3f2386241f {
	struct ATslPlayerStateBase* *3090522c66; // 0x00(0x08)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct TslGameMode.BluebombDeviceData
// Size: 0x98 (Inherited: 0x1c)  [layout: LECH - offset chi la uoc luong]
struct FBluebombDeviceData : FModDeviceVolumeData {
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FModTargetInfo ProvideTargetInfo; // 0x20(0x20)
	struct FModTargetInfo PlantableTargetInfo; // 0x40(0x20)
	struct FModTargetInfo DefusableTargetInfo; // 0x60(0x20)
	float PlantTime; // 0x80(0x04)
	float DefuseTime; // 0x84(0x04)
	float ExplosionTime; // 0x88(0x04)
	int32 MaxBombCount; // 0x8c(0x04)
	bool bIsUnequipable; // 0x90(0x01)
	bool bShowBombMessage; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// ScriptStruct TslGameMode.*87eeb9e9db
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct F*87eeb9e9db : F*0383c2d901 {
	float *4882b7be5a; // 0x18(0x04)
	float *7ca7944c54; // 0x1c(0x04)
};

// ScriptStruct TslGameMode.BlueChipRespawnDeviceData
// Size: 0x20 (Inherited: 0x04)  [layout: KHOP]
struct FBlueChipRespawnDeviceData : FModDeviceDataBase {
	float AircraftDepartureInterval; // 0x04(0x04)
	enum class EModAirborneRouteType RouteType; // 0x08(0x04)
	float EjectMinDistancePercent; // 0x0c(0x04)
	float AircraftStartRadiusPercent; // 0x10(0x04)
	float AircraftFlyingSpeed; // 0x14(0x04)
	float AircraftFlyingDistanceToTarget; // 0x18(0x04)
	float AircraftAltitude; // 0x1c(0x04)
};

// ScriptStruct TslGameMode.BlueZoneModData
// Size: 0x20 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FBlueZoneModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModBlueZoneOption> BlueZoneCustomOptions; // 0x08(0x10)
	enum class EBlueZoneShape BlueZoneShape; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGameMode.ModBlueZoneOption
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FModBlueZoneOption {
	float StartDelay; // 0x00(0x04)
	float WarningDuration; // 0x04(0x04)
	float ReleaseDuration; // 0x08(0x04)
	float BlueZoneDamagePerSecond; // 0x0c(0x04)
	float RadiusRate; // 0x10(0x04)
	float SpreadBias; // 0x14(0x04)
	float LandPercent; // 0x18(0x04)
};

// ScriptStruct TslGameMode.CaptureAreaModData
// Size: 0x68 (Inherited: 0x1c)  [layout: LECH - offset chi la uoc luong]
struct FCaptureAreaModData : FModDeviceVolumeData {
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FModTargetInfo TargetInfo; // 0x20(0x20)
	bool bShowCaptureAreaBoundary; // 0x40(0x01)
	bool bShowCaptureProgressMessages; // 0x41(0x01)
	bool bShowCaptureFloorEffects; // 0x42(0x01)
	bool bShowIcon; // 0x43(0x01)
	float CaptureTimeSeconds; // 0x44(0x04)
	float CaptureTimePerTeamMemberSeconds; // 0x48(0x04)
	float AreaEmptyCaptureTimeDecreaseSeconds; // 0x4c(0x04)
	bool bKeepCapturedState; // 0x50(0x01)
	bool bUseCapturedIntervalTrigger; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float CapturedIntervalTriggerSeconds; // 0x54(0x04)
	int32 CapturedIntervalTriggerCount; // 0x58(0x04)
	bool bUseCoolDown; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float CapturedCooldownSeconds; // 0x60(0x04)
	bool bProgressOnStalemateByMajorityTeam; // 0x64(0x01)
	bool bNeutralOnDeactivate; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGameMode.ChanceTriggerModData
// Size: 0x08 (Inherited: 0x04)  [layout: KHOP]
struct FChanceTriggerModData : FModDeviceDataBase {
	float ChancePercent; // 0x04(0x04)
};

// ScriptStruct TslGameMode.CheckpointDeviceData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FCheckpointDeviceData : FModDeviceDataBase {
	enum class ECheckpointShape Shape; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Radius; // 0x08(0x04)
	float Width; // 0x0c(0x04)
	float Height; // 0x10(0x04)
	float Alpha; // 0x14(0x04)
};

// ScriptStruct TslGameMode.*56a9f8f661
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*56a9f8f661 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGameMode.CheckpointManagerDeviceData
// Size: 0x40 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FCheckpointManagerDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModDeviceInstanceID> CheckpointList; // 0x08(0x10)
	struct FModTargetInfo ApplyTarget; // 0x18(0x20)
	bool bEnableLoop; // 0x38(0x01)
	bool bShowEditPath; // 0x39(0x01)
	enum class EModColorType EditPathColor; // 0x3a(0x01)
	bool bShowNavigationWidget; // 0x3b(0x01)
	bool bShowCheckpointIndex; // 0x3c(0x01)
	bool bPlayCheckpointPassedSound; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct TslGameMode.ConditionModData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FConditionModData : FModDeviceDataBase {
	enum class EConditionOperatorType ConditionOperator; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FConditionData> Conditions; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ConditionData
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FConditionData {
	enum class EConditionCompareType CompareType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FModNumericValue LhsValue; // 0x04(0x0c)
	struct FModNumericValue RhsValue; // 0x10(0x0c)
};

// ScriptStruct TslGameMode.CraftingDeviceData
// Size: 0x38 (Inherited: 0x04)  [layout: KHOP]
struct FCraftingDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModCraftingData> CraftRules; // 0x08(0x10)
	struct FModTargetInfo AllowTarget; // 0x18(0x20)
};

// ScriptStruct TslGameMode.ModCraftingData
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModCraftingData {
	struct FModItem CraftingTargetItem; // 0x00(0x10)
	struct FModCraftingWeaponData AdditionalWeaponData; // 0x10(0x18)
	struct TArray<struct FModItem> MaterialItems; // 0x28(0x10)
	struct TArray<struct FModItem> AdditionalSupplyItems; // 0x38(0x10)
	float CraftingDuration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGameMode.ModCraftingWeaponData
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModCraftingWeaponData {
	struct TArray<struct FModItem> Attachments; // 0x00(0x10)
	bool bAutoReload; // 0x10(0x01)
	bool bShouldTransferAttachments; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGameMode.DamageTriggerDeviceData
// Size: 0x58 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct FDamageTriggerDeviceData : FModDeviceMeshData {
	struct FModTargetInfo AllowDamageTargetInfo; // 0x18(0x20)
	float MaxDamageAmount; // 0x38(0x04)
	int32 MaxDamageCount; // 0x3c(0x04)
	struct TArray<enum class EDamageTypeCategory> AllowDamageTypes; // 0x40(0x10)
	bool bTakePointDamage; // 0x50(0x01)
	bool bTakeRadialDamage; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct TslGameMode.DummyPlayerSpawnData
// Size: 0x14 (Inherited: 0x04)  [layout: KHOP]
struct FDummyPlayerSpawnData : FModDeviceDataBase {
	int32 TeamId; // 0x04(0x04)
	int32 MaxSpawnCount; // 0x08(0x04)
	enum class EModDummyPlayerStanceOption StanceOption; // 0x0c(0x01)
	enum class EModAIActionOption ActionOption; // 0x0d(0x01)
	struct FModDeviceInstanceID FirstNavDevice; // 0x0e(0x04)
	bool bTeleportToFirstNavDevice; // 0x12(0x01)
	bool bMoveAtDeviceTransform; // 0x13(0x01)
};

// ScriptStruct TslGameMode.HeadIconDeviceData
// Size: 0x30 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FHeadIconDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	enum class EModHeadIconType IconType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGameMode.HUDControlDeviceData
// Size: 0x30 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FHUDControlDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	bool bDisableMapUI; // 0x28(0x01)
	bool bDisablePlayerInfoUI; // 0x29(0x01)
	bool bDisableMatchInfoUI; // 0x2a(0x01)
	bool bDisableReticleUI; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.InteractTriggerDeviceData
// Size: 0x40 (Inherited: 0x18)  [layout: KHOP]
struct FInteractTriggerDeviceData : FModDeviceMeshData {
	float InteractDuration; // 0x18(0x04)
	bool bRestrictWhileInteract; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FModTargetInfo AllowTarget; // 0x20(0x20)
};

// ScriptStruct TslGameMode.ModProvideData
// Size: 0xf8 (Inherited: 0x04)  [layout: KHOP]
struct FModProvideData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo RecipientType; // 0x08(0x20)
	enum class EModItemReceivePosition ReceivePosition; // 0x28(0x01)
	enum class EModItemRecipientInventoryAction InventoryAction; // 0x29(0x01)
	enum class EModItemRecipientFulledBackpackAction FulledBackpackAction; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct FModProvideItem ItemInfo; // 0x30(0xc8)
};

// ScriptStruct TslGameMode.ModProvideItem
// Size: 0xc8 (Inherited: 0x00)  [layout: KHOP]
struct FModProvideItem {
	struct FModItem HelmetID; // 0x00(0x10)
	struct FModItem VestID; // 0x10(0x10)
	struct FModItem BackpackID; // 0x20(0x10)
	struct FModWeaponItem PrimaryWeapon1; // 0x30(0x28)
	struct FModWeaponItem PrimaryWeapon2; // 0x58(0x28)
	struct FModWeaponItem PistolWeaponID; // 0x80(0x28)
	struct FModItem MeleeWeaponID; // 0xa8(0x10)
	struct TArray<struct FModItem> StackableItems; // 0xb8(0x10)
};

// ScriptStruct TslGameMode.ModWeaponItem
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModWeaponItem {
	struct FModItem WeaponItem; // 0x00(0x10)
	struct TArray<struct FModItem> AttachmentIDs; // 0x10(0x10)
	bool bReloadedWhenProvide; // 0x20(0x01)
	bool bReloadWithoutAnyAmmo; // 0x21(0x01)
	bool bInfiniteAmmo; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct TslGameMode.ItemSpawnData
// Size: 0x28 (Inherited: 0x04)  [layout: KHOP]
struct FItemSpawnData : FModDeviceDataBase {
	bool bVisibleDevice; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float FirstSpawnTime; // 0x08(0x04)
	float RespawnTime; // 0x0c(0x04)
	bool bRandomExclusive; // 0x10(0x01)
	bool bReloadedWhenProvide; // 0x11(0x01)
	bool bReloadWithoutAnyAmmo; // 0x12(0x01)
	bool bInfiniteAmmo; // 0x13(0x01)
	enum class EModItemSpawnType SpawnType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FModItem> ModItemList; // 0x18(0x10)
};

// ScriptStruct TslGameMode.LightModData
// Size: 0x18 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FLightModData : FModDeviceDataBase {
	enum class EModLightType LightType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Intensity; // 0x08(0x04)
	enum class EModColorType LightColor; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float AttenuationRadius; // 0x10(0x04)
	bool bCastShadows; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGameMode.MarketDeviceData
// Size: 0x38 (Inherited: 0x04)  [layout: KHOP]
struct FMarketDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModMarketItem> SellItemList; // 0x08(0x10)
	struct FModTargetInfo AccessibleTargetInfo; // 0x18(0x20)
};

// ScriptStruct TslGameMode.ModMarketItem
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModMarketItem {
	struct FModItem Item; // 0x00(0x10)
	int32 Price; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.MessageDeviceData
// Size: 0x40 (Inherited: 0x04)  [layout: KHOP]
struct FMessageDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Message; // 0x08(0x10)
	float Duration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FModTargetInfo MessageTargetInfo; // 0x20(0x20)
};

// ScriptStruct TslGameMode.MoverModData
// Size: 0x1c (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FMoverModData : FModDeviceDataBase {
	struct FVector MoveDirection; // 0x04(0x0c)
	float MoveDistanceCm; // 0x10(0x04)
	float MoveDurationSec; // 0x14(0x04)
	bool bMoveRollbackWhenStop; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct TslGameMode.PlayerDamageDeviceData
// Size: 0x30 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FPlayerDamageDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo ApplyTarget; // 0x08(0x20)
	float DamageAmount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.PlayerEventDeviceData
// Size: 0x60 (Inherited: 0x04)  [layout: KHOP]
struct FPlayerEventDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo ApplyTarget; // 0x08(0x20)
	struct FPointEventConfig PointGainEventConfig; // 0x28(0x08)
	struct FPointEventConfig PointLossEventConfig; // 0x30(0x08)
	bool bSendOnEnemyKilled; // 0x38(0x01)
	bool bSendOnEnemyKilledHeadshot; // 0x39(0x01)
	bool bSendOnEnemyKiledlHeadIcon; // 0x3a(0x01)
	bool bSendOnEnemyKilledLast; // 0x3b(0x01)
	bool bSendOnDeathByEnemy; // 0x3c(0x01)
	bool bSendOnDeathByEnemyHeadshot; // 0x3d(0x01)
	bool bSendOnDeathByEnemyHeadIcon; // 0x3e(0x01)
	bool bSendOnDeathByEnemyLast; // 0x3f(0x01)
	bool bSendOnEnemyDBNO; // 0x40(0x01)
	bool bSendOnDBNOByEnemy; // 0x41(0x01)
	bool bSendOnLastSurvival; // 0x42(0x01)
	bool bSendOnSpawned; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct FItemEventConfig UsingItemEventConfig; // 0x48(0x18)
};

// ScriptStruct TslGameMode.ItemEventConfig
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FItemEventConfig {
	bool bSendEvent; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FModItem> EventItemList; // 0x08(0x10)
};

// ScriptStruct TslGameMode.PlayerSpawnDeviceData
// Size: 0x30 (Inherited: 0x04)  [layout: KHOP]
struct FPlayerSpawnDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo ApplyTarget; // 0x08(0x20)
	bool bBaseSpawner; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float EnemyDetectionSize; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.PlayerStatusDeviceData
// Size: 0x50 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FPlayerStatusDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	float Health; // 0x28(0x04)
	float MaxHealth; // 0x2c(0x04)
	bool bHealthBarTextVisible; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CharacterScalePercent; // 0x34(0x04)
	float GravityScalePercent; // 0x38(0x04)
	float JumpScalePercent; // 0x3c(0x04)
	float SpeedScalePercent; // 0x40(0x04)
	float SoundRangeScalePercent; // 0x44(0x04)
	bool bGodMode; // 0x48(0x01)
	bool bCanTakeFallDamage; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGameMode.PlayerTagModData
// Size: 0x38 (Inherited: 0x04)  [layout: KHOP]
struct FPlayerTagModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	struct FString Tag; // 0x28(0x10)
};

// ScriptStruct TslGameMode.PointManagerDeviceData
// Size: 0x40 (Inherited: 0x04)  [layout: KHOP]
struct FPointManagerDeviceData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo ApplyTarget; // 0x08(0x20)
	int32 Point; // 0x28(0x04)
	int32 MaxPointClamp; // 0x2c(0x04)
	int32 MinPointClamp; // 0x30(0x04)
	int32 TargetPoint; // 0x34(0x04)
	struct FPointManagerCountCondition Condition; // 0x38(0x08)
};

// ScriptStruct TslGameMode.RandomTriggerModData
// Size: 0x08 (Inherited: 0x04)  [layout: KHOP]
struct FRandomTriggerModData : FModDeviceDataBase {
	int32 TargetCount; // 0x04(0x04)
};

// ScriptStruct TslGameMode.SpecialZoneRequestModData
// Size: 0x1c (Inherited: 0x04)  [layout: KHOP]
struct FSpecialZoneRequestModData : FModDeviceDataBase {
	enum class ESpecialZoneType SpecialZoneType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ZoneBeginDelay; // 0x08(0x04)
	float ZoneDuration; // 0x0c(0x04)
	float ZoneRadius; // 0x10(0x04)
	int32 ZoneRepeatTime; // 0x14(0x04)
	float NextZoneInterval; // 0x18(0x04)
};

// ScriptStruct TslGameMode.RedZoneModData
// Size: 0x18 (Inherited: 0x04)  [layout: KHOP]
struct FRedZoneModData : FModDeviceDataBase {
	float ZoneBeginDelay; // 0x04(0x04)
	float ZoneDuration; // 0x08(0x04)
	float ZoneRadius; // 0x0c(0x04)
	int32 ZoneRepeatTime; // 0x10(0x04)
	float NextZoneInterval; // 0x14(0x04)
};

// ScriptStruct TslGameMode.RoundEventDeviceData
// Size: 0x14 (Inherited: 0x04)  [layout: KHOP]
struct FRoundEventDeviceData : FModDeviceDataBase {
	struct FRoundEventCondition SendRoundEvent; // 0x04(0x08)
	struct FRoundConditionScope ApplyRoundScope; // 0x0c(0x08)
};

// ScriptStruct TslGameMode.SmokeModDeviceData
// Size: 0x04 (Inherited: 0x04)  [layout: KHOP]
struct FSmokeModDeviceData : FModDeviceDataBase {
};

// ScriptStruct TslGameMode.ModRuleSetSchemaData
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FModRuleSetSchemaData {
	struct FString UserSelectableDataSchema; // 0x00(0x10)
	struct TArray<struct FString> IgnoredUserSelectableDataStringParameters; // 0x10(0x10)
	struct FString RoundRuleSchema; // 0x20(0x10)
	struct TArray<struct FString> IgnoredRoundStringParameters; // 0x30(0x10)
	struct FString CharacterRuleSchema; // 0x40(0x10)
	struct TArray<struct FString> IgnoredCharacterStringParameters; // 0x50(0x10)
	struct FString GameRuleSchema; // 0x60(0x10)
	struct TArray<struct FString> IgnoredGameStringParameters; // 0x70(0x10)
};

// ScriptStruct TslGameMode.ModRuleDataContainer
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FModRuleDataContainer {
	struct FModUserSelectableData UserSelectableData; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FModRoundRuleData RoundRuleData; // 0x04(0x1c)
	struct FModCharacterRuleData CharacterRuleData; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FModGameRuleData GameRuleData; // 0x24(0x2c)
};

// ScriptStruct TslGameMode.ModGameRuleData
// Size: 0x2c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModGameRuleData {
	int32 TeamSize; // 0x00(0x04)
	int32 SquadSize; // 0x04(0x04)
	enum class EModTeamDistributionMethod TeamDistributionMethod; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TeamKillDamageModifier; // 0x0c(0x04)
	bool ShowKillFeedSquadNumber; // 0x10(0x01)
	bool EnableDBNO; // 0x11(0x01)
	enum class ECameraViewBehaviour CameraViewBehaviour; // 0x12(0x01)
	bool UseRespawn; // 0x13(0x01)
	float RespawnPeriod; // 0x14(0x04)
	bool RespawnBuffEnabled; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float RespawnInvincibleDuration; // 0x1c(0x04)
	bool EnableLootBox; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float LootBoxLifeTime; // 0x24(0x04)
	bool UseScoreLeaderboard; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGameMode.ModCharacterRuleData
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModCharacterRuleData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGameMode.ModRoundRuleData
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModRoundRuleData {
	int32 RoundGameCount; // 0x00(0x04)
	int32 GoalRoundCount; // 0x04(0x04)
	int32 GoalScore; // 0x08(0x04)
	float TimeLimit; // 0x0c(0x04)
	float WarmupTime; // 0x10(0x04)
	float RoundWarmupTime; // 0x14(0x04)
	bool bSaveInventoryWhenRoundEnded; // 0x18(0x01)
	bool bSaveInventoryWhenDied; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct TslGameMode.ModUserSelectableData
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct FModUserSelectableData {
	enum class EModUserSelectPlayType ModUserSelectPlayType; // 0x00(0x01)
};

// ScriptStruct TslGameMode.ModObjectSpawnLimitData
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FModObjectSpawnLimitData {
	enum class EModObjectType ObjectType; // 0x00(0x01)
	enum class EModObjectSubCategory Subcategory; // 0x01(0x01)
	int16 ObjectID; // 0x02(0x02)
	int32 SpawnLimit; // 0x04(0x04)
	int32 CurrentAmount; // 0x08(0x04)
};

// ScriptStruct TslGameMode.ModSelectedTeamData
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModSelectedTeamData {
	struct ATslPlayerStateBase* PlayerState; // 0x00(0x08)
	int32 TeamId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.ModData
// Size: 0x150 (Inherited: 0x00)  [layout: KHOP]
struct FModData {
	struct FString Name; // 0x00(0x10)
	int32 DataVersion; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString BuildVersion; // 0x18(0x10)
	struct FModEditFileData EditFileData; // 0x28(0x58)
	struct FModCreatorData CreatorData; // 0x80(0x60)
	struct TArray<struct FModObjectInstanceData> Objects; // 0xe0(0x10)
	struct TArray<struct FModEventContainer> DeviceEventList; // 0xf0(0x10)
	struct FModUserSelectableData UserSelectableData; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FModRoundRuleData RoundRuleData; // 0x104(0x1c)
	struct FModCharacterRuleData CharacterRuleData; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	struct FModGameRuleData GameRuleData; // 0x124(0x2c)
};

// ScriptStruct TslGameMode.ModCreatorData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FModCreatorData {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FName MainTagID; // 0x20(0x08)
	struct TArray<struct FName> SubTagIDs; // 0x28(0x10)
	int32 VersionMajor; // 0x38(0x04)
	int32 VersionMinor; // 0x3c(0x04)
	struct FString OwnerAccountId; // 0x40(0x10)
	struct FString OwnerNickName; // 0x50(0x10)
};

// ScriptStruct TslGameMode.ModEditFileData
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct FModEditFileData {
	struct FString CreateAccountID; // 0x00(0x10)
	int64 CreateTime; // 0x10(0x08)
	struct FString LastModifierAccountId; // 0x18(0x10)
	int64 LastModifiedTime; // 0x28(0x08)
	struct TArray<struct FModEditPlayerDataContainer> EditPlayers; // 0x30(0x10)
	struct FModEditPlayerDataContainer LastHostPlayerData; // 0x40(0x18)
};

// ScriptStruct TslGameMode.ModEditPlayerDataContainer
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FModEditPlayerDataContainer {
	struct FString AccountId; // 0x00(0x10)
	struct FModEditPlayerData EditData; // 0x10(0x08)
};

// ScriptStruct TslGameMode.ModEditPlayerData
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FModEditPlayerData {
	uint32 EditCount; // 0x00(0x04)
	uint32 EditTime; // 0x04(0x04)
};

// ScriptStruct TslGameMode.ModHostTeamControlData
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FModHostTeamControlData {
	enum class EModPlayerOverflowAction ModPlayerOverflowAction; // 0x00(0x04)
	bool bAllowDeviceEdit; // 0x04(0x01)
	bool bAllowObjectControl; // 0x05(0x01)
	enum class EModDummyPlayerFillOption ModDummyPlayerFillOption; // 0x06(0x01)
	bool bAllowObserverVoiceChat; // 0x07(0x01)
};

// ScriptStruct TslGameMode.StopwatchModData
// Size: 0x14 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FStopwatchModData : FModDeviceDataBase {
	float StartSecond; // 0x04(0x04)
	bool bShowWidget; // 0x08(0x01)
	enum class ETimeCountFormat TimeFormat; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 MaxRecordCount; // 0x0c(0x04)
	enum class EModStopwatchRecordScope RecordScope; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGameMode.SuperJumpModData
// Size: 0x0c (Inherited: 0x04)  [layout: KHOP]
struct FSuperJumpModData : FModDeviceDataBase {
	enum class EModSuperJumpType Type; // 0x04(0x01)
	enum class EModSuperJumpTargetType TargetType; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float UpwardSpeedPercent; // 0x08(0x04)
};

// ScriptStruct TslGameMode.TeleportModData
// Size: 0x30 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FTeleportModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TeleportTargetInfo; // 0x08(0x20)
	enum class EModColorType VisualizeColor; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGameMode.TextDisplayModData
// Size: 0x30 (Inherited: 0x04)  [layout: KHOP]
struct FTextDisplayModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Content; // 0x08(0x10)
	enum class ETextDisplayModFontSize FontSize; // 0x18(0x01)
	enum class EModColorType FontColor; // 0x19(0x01)
	enum class EModColorType PlateColor; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FVector PlatePosition; // 0x1c(0x0c)
	int32 Width; // 0x28(0x04)
	int32 Height; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.TimerModData
// Size: 0x18 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FTimerModData : FModDeviceDataBase {
	int32 RepeatCount; // 0x04(0x04)
	float IntervalSecond; // 0x08(0x04)
	bool bShowWidget; // 0x0c(0x01)
	enum class ETimeCountFormat TimeFormat; // 0x0d(0x01)
	enum class ETimerWidgetLocation WidgetLoc; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	int32 EndWarningSoundPlayCount; // 0x10(0x04)
	bool bPlayEndSound; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGameMode.VariableModData
// Size: 0x20 (Inherited: 0x04)  [layout: LECH - offset chi la uoc luong]
struct FVariableModData : FModDeviceDataBase {
	enum class EVariableScope Scope; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString DisplayName; // 0x08(0x10)
	float DefaultValue; // 0x18(0x04)
	bool bDisplay; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGameMode.VehicleSpawnModData
// Size: 0x58 (Inherited: 0x1c)  [layout: LECH - offset chi la uoc luong]
struct FVehicleSpawnModData : FModDeviceVolumeData {
	bool bConsumeFuel; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float InitialFuelTankPercent; // 0x20(0x04)
	float VehicleHealth; // 0x24(0x04)
	bool bRemoveVehicleOnDestruction; // 0x28(0x01)
	bool bAutoRespawnVehicle; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString SpawnVehicleName; // 0x30(0x10)
	struct FVehiclePerformanceModData VehiclePerformanceData; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGameMode.VehiclePerformanceModData
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FVehiclePerformanceModData {
	float MaxRPMMultiplier; // 0x00(0x04)
	float TorqueMultiplier; // 0x04(0x04)
	float DragMultiplier; // 0x08(0x04)
	float MassMultiplier; // 0x0c(0x04)
	bool CanBeTirePunctured; // 0x10(0x01)
	bool CanBeDamaged; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct TslGameMode.VendingMachineSpawnModData
// Size: 0x28 (Inherited: 0x04)  [layout: KHOP]
struct FVendingMachineSpawnModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FModVendingMachineItem> MachineItemList; // 0x08(0x10)
	int32 ItemProvideLimit; // 0x18(0x04)
	float ItemProvideCoolTime; // 0x1c(0x04)
	struct FModDurabilitySetting DurabilitySetting; // 0x20(0x08)
};

// ScriptStruct TslGameMode.ModVendingMachineItem
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModVendingMachineItem {
	struct FModItem ItemInfo; // 0x00(0x10)
	int32 weight; // 0x10(0x04)
	bool bJackpot; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGameMode.VolumeTriggerDeviceData
// Size: 0x48 (Inherited: 0x1c)  [layout: LECH - offset chi la uoc luong]
struct FVolumeTriggerDeviceData : FModDeviceVolumeData {
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FModTargetInfo ApplyTarget; // 0x20(0x20)
	float CheckInterval; // 0x40(0x04)
	enum class EModTriggerVolumeTriggerType TriggerType; // 0x44(0x01)
	enum class EModColorType VisualizeColor; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct TslGameMode.WeaponDamageModData
// Size: 0x68 (Inherited: 0x04)  [layout: KHOP]
struct FWeaponDamageModData : FModDeviceDataBase {
	char pad_4[0x4]; // 0x04(0x04)
	struct FModTargetInfo TargetInfo; // 0x08(0x20)
	struct FCustomDamagePercent Bullet; // 0x28(0x14)
	struct FCustomDamagePercent Melee; // 0x3c(0x14)
	struct FCustomDamagePercent Punch; // 0x50(0x14)
	float ThrowablePercent; // 0x64(0x04)
};

// ScriptStruct TslGameMode.WorldSettingModData
// Size: 0x08 (Inherited: 0x04)  [layout: KHOP]
struct FWorldSettingModData : FModDeviceDataBase {
	float TimeDilationPercent; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*03b3295aa0
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*03b3295aa0 {
	int32 *1b80af2b94; // 0x00(0x04)
	enum class ECoinTakeType *7c35fdcf1e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGameMode.BombGameAreaDesc
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FBombGameAreaDesc {
	enum class EBombGameAreaType *08af066ef2; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *8bd8eb36f6; // 0x08(0x18)
};

// ScriptStruct TslGameMode.*38516ab04b
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*38516ab04b {
	enum class ECoinTakeType *7c35fdcf1e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 OverrideIndex; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*f8b584ec86
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f8b584ec86 {
	bool *0a0dfbe812; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGameMode.BombGameTeamScore
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FBombGameTeamScore {
	int32 TeamId; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	int32 DeathCount; // 0x08(0x04)
	int32 AssistCount; // 0x0c(0x04)
	int32 *786f95d58c; // 0x10(0x04)
	int32 *b9b96fce49; // 0x14(0x04)
};

// ScriptStruct TslGameMode.BombGameRoundResult
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombGameRoundResult {
	int32 *04a89be968; // 0x00(0x04)
	enum class EBombTeamRole *085f04489a; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FBombRoundResultHistory BombRoundResultHistory; // 0x08(0x08)
	bool *d3676f1f0c; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct TslGameMode.BombRoundResultHistory
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FBombRoundResultHistory {
	enum class EBombRoundResultHistoryType BombRoundResultHistoryType; // 0x00(0x01)
	enum class EBombRoundResultConditionType *0c362fd52a; // 0x01(0x01)
	enum class EBombUITeamStatusType *8faaef0c33; // 0x02(0x01)
	bool *d0ad3c9714; // 0x03(0x01)
	int32 *99317ce365; // 0x04(0x04)
};

// ScriptStruct TslGameMode.BombPlayerStartData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FBombPlayerStartData {
	struct FString BattleAreaType; // 0x00(0x10)
	enum class EBombTeamRole TeamRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 TeamMemberIndex; // 0x14(0x04)
};

// ScriptStruct TslGameMode.BombGameTeamRoleData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FBombGameTeamRoleData {
	int32 *c9b78f0ae7; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATslPlayerStateBase*> *b22ca866d4; // 0x08(0x10)
};

// ScriptStruct TslGameMode.BombUIEquipWeapon
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct FBombUIEquipWeapon {
	struct FName ItemID; // 0x00(0x08)
	struct F*eea6eb6dc0 EquipPosition; // 0x08(0x08)
	int32 Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct TArray<struct FStringAssetReference> AttachIcons; // 0x30(0x10)
	bool bNeedAmmoInfo; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 AmmoNumLoaded; // 0x44(0x04)
	int32 AmmoNumUnloaded; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FStringAssetReference AmmoIcon; // 0x50(0x10)
	struct FText AmmoName; // 0x60(0x18)
};

// ScriptStruct TslGameMode.BombUIEquipItem
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FBombUIEquipItem {
	struct FName ID; // 0x00(0x08)
	struct UTexture* Icon; // 0x08(0x20)
	int32 ItemNum; // 0x28(0x04)
	int32 DefensivePower; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.BombUIStoreItem
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FBombUIStoreItem {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	bool bOwned; // 0x30(0x01)
	bool bFull; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 Price; // 0x34(0x04)
};

// ScriptStruct TslGameMode.BombUIStateColor
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FBombUIStateColor {
	struct FLinearColor Normal; // 0x00(0x10)
	struct FLinearColor Hover; // 0x10(0x10)
	struct FLinearColor Disabled; // 0x20(0x10)
	struct FLinearColor Selected; // 0x30(0x10)
	struct FLinearColor LackCoin; // 0x40(0x10)
};

// ScriptStruct TslGameMode.BombUIStoreWeapon
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombUIStoreWeapon {
	struct FName ID; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FStringAssetReference Icon; // 0x20(0x10)
	struct FStringAssetReference AmmoIcon; // 0x30(0x10)
	bool bOwned; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 Price; // 0x44(0x04)
	int32 AmmoNum; // 0x48(0x04)
	enum class EBombScopeInfo Scope; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct TslGameMode.BombUIStorePlayer
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombUIStorePlayer {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText PlayerName; // 0x18(0x18)
	struct TArray<struct UTexture2D*> Equips; // 0x30(0x10)
	int32 Coin; // 0x40(0x04)
	int32 DonationUnit; // 0x44(0x04)
	bool IsOwn; // 0x48(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGameMode.BombUIScorePlayer
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombUIScorePlayer {
	int32 SquadMemberIndex; // 0x00(0x04)
	enum class EBombUIPlayerStatusType *1e87117e33; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FText PlayerName; // 0x08(0x18)
	int32 Kill; // 0x20(0x04)
	int32 Assist; // 0x24(0x04)
	int32 death; // 0x28(0x04)
	int32 *1b80af2b94; // 0x2c(0x04)
	bool *6fa35c6ea3; // 0x30(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGameMode.BombRoundResultEffectData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FBombRoundResultEffectData {
	bool bConditionShow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBombRoundResultEffectConditionData Condition; // 0x08(0x20)
	bool bResultShow; // 0x28(0x01)
	bool bOverTimeRound; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32 ResultShowDelaySeconds; // 0x2c(0x04)
	struct FBombRoundResultEffectResultData Result; // 0x30(0x30)
};

// ScriptStruct TslGameMode.BombRoundResultEffectResultData
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombRoundResultEffectResultData {
	int32 RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Message; // 0x08(0x18)
	enum class EBombUITeamStatusType MyTeamStatusType; // 0x20(0x01)
	bool bMyTeamWin; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 MyTeamWinCount; // 0x24(0x04)
	int32 EnemyTeamWinCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.BombRoundResultEffectConditionData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FBombRoundResultEffectConditionData {
	enum class EBombRoundResultConditionType Type; // 0x00(0x01)
	enum class EBombUITeamStatusType TeamStatusType; // 0x01(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct TslGameMode.BombUITeamStatus
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FBombUITeamStatus {
	struct TArray<enum class EBombUIPlayerStatusType> *55d34d8bd6; // 0x00(0x10)
};

// ScriptStruct TslGameMode.BombUIPlayerStatusDesign
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FBombUIPlayerStatusDesign {
	struct UTexture2D* IconTexture; // 0x00(0x08)
	struct FLinearColor IconColor; // 0x08(0x10)
	struct UTexture2D* BgTexture; // 0x18(0x08)
	struct FLinearColor BgColor; // 0x20(0x10)
};

// ScriptStruct TslGameMode.*cc06d0bdc4
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cc06d0bdc4 {
	int32 *04a89be968; // 0x00(0x04)
	enum class EBombMatchWinType *5d90cd31e2; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGameMode.*97381625b4
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*97381625b4 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGameMode.*293216ea4c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*293216ea4c {
	struct FName *f3574b9b81; // 0x00(0x08)
	struct FName *b7148b2eec; // 0x08(0x08)
};

// ScriptStruct TslGameMode.BombHUDRoundCountWidgetTestValue
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombHUDRoundCountWidgetTestValue {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGameMode.BombHUDRoundCountWidgetSettingValue
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FBombHUDRoundCountWidgetSettingValue {
	struct FText RoundText; // 0x00(0x18)
	struct FText OverTimeRoundText; // 0x18(0x18)
	struct FSlateColor RoundTextColor; // 0x30(0x28)
	struct FSlateColor OverTimeRoundTextColor; // 0x58(0x28)
};

// ScriptStruct TslGameMode.BombObserverStatusBoardUIData
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverStatusBoardUIData {
	struct FText LeftTeamName; // 0x00(0x18)
	struct FText RightTeamName; // 0x18(0x18)
	bool bLeftTeamAttack; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RemainRoundTimeSeconds; // 0x34(0x04)
	float RemainBombTimeSeconds; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<enum class EBombRoundResultHistoryType> LeftTeamRoundResultHistoryTypes; // 0x40(0x10)
	struct TArray<enum class EBombRoundResultHistoryType> RightTeamRoundResultHistoryTypes; // 0x50(0x10)
	struct TArray<enum class EBombObserverStatusBoardRoundStateUIType> RoundStateTypes; // 0x60(0x10)
};

// ScriptStruct TslGameMode.BombObserverTeamInfoTeamUIData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverTeamInfoTeamUIData {
	bool bAttackTeam; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TeamName; // 0x08(0x18)
	int32 PlantOrDefuse; // 0x20(0x04)
	int32 Kills; // 0x24(0x04)
};

// ScriptStruct TslGameMode.BombObserverTeamInfoEntryUIData
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverTeamInfoEntryUIData {
	bool bInitialized; // 0x00(0x01)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x01(0x01)
	bool bSelected; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32 PlayerNumber; // 0x04(0x04)
	bool bAttackTeam; // 0x08(0x01)
	enum class EBombObserverTeamInfoPlayerStateUIType PlayerStateType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText PlayerName; // 0x10(0x18)
	float PlayerHp; // 0x28(0x04)
	int32 ThrowGrenadeCount; // 0x2c(0x04)
	int32 ThrowSmokeCount; // 0x30(0x04)
	int32 ThrowFlashBangCount; // 0x34(0x04)
	int32 Coin; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTexture2D* WeaponTexture; // 0x40(0x08)
	bool bHasBullets; // 0x48(0x01)
	bool bVisibleKDA; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 KillCount; // 0x4c(0x04)
	int32 Damage; // 0x50(0x04)
	int32 AssistCount; // 0x54(0x04)
};

// ScriptStruct TslGameMode.BombObserverTeamInfoEntryUISettings
// Size: 0x1c8 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverTeamInfoEntryUISettings {
	struct FLinearColor BackgroundColorDead; // 0x00(0x10)
	struct FLinearColor HpBackgroundColor; // 0x10(0x10)
	struct FSlateColor PlayerNumberTextColorSelected; // 0x20(0x28)
	struct FLinearColor PlayerNumberBgColorSelected; // 0x48(0x10)
	struct FLinearColor AttackTeamBackgroundColor; // 0x58(0x10)
	struct FLinearColor AttackTeamHpColor; // 0x68(0x10)
	struct FLinearColor AttackTeamHpEffectColor; // 0x78(0x10)
	struct FSlateColor AttackTeamTextColor; // 0x88(0x28)
	struct FSlateColor AttackTeamPlayerNumberTextColor; // 0xb0(0x28)
	struct FLinearColor AttackTeamPlayerNumberBgColor; // 0xd8(0x10)
	struct FLinearColor DefenseTeamBackgroundColor; // 0xe8(0x10)
	struct FLinearColor DefenseTeamHpColor; // 0xf8(0x10)
	struct FLinearColor DefenseTeamHpEffectColor; // 0x108(0x10)
	struct FSlateColor DefenseTeamTextColor; // 0x118(0x28)
	struct FSlateColor DefenseTeamPlayerNumberTextColor; // 0x140(0x28)
	struct FLinearColor DefenseTeamPlayerNumberBgColor; // 0x168(0x10)
	struct FLinearColor WeaponActiveColor; // 0x178(0x10)
	struct FLinearColor WeaponDeactiveColor; // 0x188(0x10)
	struct FLinearColor WeaponDbnoColor; // 0x198(0x10)
	struct FLinearColor ThrowWeaponActiveColor; // 0x1a8(0x10)
	struct FLinearColor ThrowWeaponDeactiveColor; // 0x1b8(0x10)
};

// ScriptStruct TslGameMode.BombObserverWorldMapStatusBoardUIData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverWorldMapStatusBoardUIData {
	int32 RemainRoundTimeSeconds; // 0x00(0x04)
	float RemainBombTimeSeconds; // 0x04(0x04)
	int32 CurrentRoundNumber; // 0x08(0x04)
	bool bLeftTeamAttack; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText LeftTeamName; // 0x10(0x18)
	int32 LeftTeamScore; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText RightTeamName; // 0x30(0x18)
	int32 RightTeamScore; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FBombObserverWorldMapStatusBoardRoundEntryUIData> RoundEntryDatas; // 0x50(0x10)
};

// ScriptStruct TslGameMode.BombObserverWorldMapStatusBoardRoundEntryUIData
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombObserverWorldMapStatusBoardRoundEntryUIData {
	bool bOverTime; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 RoundNumber; // 0x04(0x04)
	enum class EBombRoundResultHistoryType LeftRoundResultHistoryType; // 0x08(0x01)
	enum class EBombRoundResultHistoryType RightRoundResultHistoryType; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct TslGameMode.BombObserverWorldMapStatusBoardRoundEntryUISettings
// Size: 0x110 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverWorldMapStatusBoardRoundEntryUISettings {
	struct FLinearColor RoundNumberColorPast; // 0x00(0x10)
	struct FLinearColor RoundNumberColorCurrent; // 0x10(0x10)
	struct FLinearColor RoundNumberColorFuture; // 0x20(0x10)
	struct FLinearColor RoundNumberBgColorNormal; // 0x30(0x10)
	struct FLinearColor RoundNumberBgColorOverTime; // 0x40(0x10)
	struct FLinearColor AttackTeamBgColorNormal; // 0x50(0x10)
	struct FLinearColor AttackTeamBgColorOverTime; // 0x60(0x10)
	struct FLinearColor DefenseTeamBgColorNormal; // 0x70(0x10)
	struct FLinearColor DefenseTeamBgColorOverTime; // 0x80(0x10)
	struct FLinearColor IconColorNormal; // 0x90(0x10)
	struct FLinearColor IconColorFuture; // 0xa0(0x10)
	struct FLinearColor IconColorAttack; // 0xb0(0x10)
	struct FLinearColor IconColorDefense; // 0xc0(0x10)
	struct FLinearColor IconColorDefeat; // 0xd0(0x10)
	struct UTexture2D* ResultIconTexutreTimeUp; // 0xe0(0x08)
	struct UTexture2D* ResultIconTexutreBombExploded; // 0xe8(0x08)
	struct UTexture2D* ResultIconTexutreBombDefused; // 0xf0(0x08)
	struct UTexture2D* ResultIconTexutreTeamElimination; // 0xf8(0x08)
	struct UTexture2D* ResultIconTexutreDefeat; // 0x100(0x08)
	struct UMaterialInterface* CurrentRoundEffectMaterial; // 0x108(0x08)
};

// ScriptStruct TslGameMode.BombObserverWorldMapStatusBoardUISettings
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FBombObserverWorldMapStatusBoardUISettings {
	struct UClass* RoundEntryWidgetClass; // 0x00(0x08)
	struct FLinearColor AttackTeamBgColor; // 0x08(0x10)
	struct FLinearColor AttackTeamNameColor; // 0x18(0x10)
	struct FLinearColor DefenseTeamBgColor; // 0x28(0x10)
	struct FLinearColor DefenseTeamNameColor; // 0x38(0x10)
};

// ScriptStruct TslGameMode.BombUserPlayData
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FBombUserPlayData : FBaseUserPlayData {
	struct TMap<struct FName, struct FWeaponAttachmentIds> WeaponAttachmentsMap; // 0x08(0x50)
};

// ScriptStruct TslGameMode.WeaponAttachmentIds
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponAttachmentIds {
	struct TArray<struct FName> AttachmentIDs; // 0x00(0x10)
};

// ScriptStruct TslGameMode.BombStartEffectWidgetSettingValues
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FBombStartEffectWidgetSettingValues {
	struct FText RoundText; // 0x00(0x18)
	struct FText OverTimeRoundText; // 0x18(0x18)
	struct FLinearColor Round_Attack_BgColor; // 0x30(0x10)
	struct FLinearColor Round_Defence_BgColor; // 0x40(0x10)
	struct FLinearColor Round_Neutrality_BgColor; // 0x50(0x10)
};

// ScriptStruct TslGameMode.BombStartEffectWidgetTestValues
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombStartEffectWidgetTestValues {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGameMode.SLBRewardData
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FSLBRewardData : FTableRowBase {
	int32 UID; // 0x08(0x04)
	struct FTslSLBStageID StageID; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FName ItemID; // 0x10(0x08)
	struct FName SkinItemID; // 0x18(0x08)
	struct UTexture2D* RewardSkinIconImage; // 0x20(0x08)
	struct TArray<struct FName> Attachments; // 0x28(0x10)
	int32 StackCount; // 0x38(0x04)
	int32 weight; // 0x3c(0x04)
	bool bShowItem; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGameMode.TslSLBStageID
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct FTslSLBStageID {
	enum class ETslSLBStage Stage; // 0x00(0x01)
	enum class ETslSLBStageDifficulty Difficulty; // 0x01(0x01)
};

// ScriptStruct TslGameMode.TslSLBStageRowData
// Size: 0x88 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTslSLBStageRowData : FTableRowBase {
	struct FTslSLBStageID StageID; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct F*4a317c1757 ItemSpawnData; // 0x10(0x38)
	struct UClass* StageControllerAsset; // 0x48(0x20)
	struct F*f931f3f805 MissionData; // 0x68(0x18)
	int32 RespawnCount; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGameMode.*f931f3f805
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f931f3f805 {
	struct FName MissionItemID; // 0x00(0x08)
	int32 MissionItemSpawnCount; // 0x08(0x04)
	enum class EItemSpotGroupType MissionItemSpotGroupType; // 0x0c(0x01)
	enum class EItemSpotType MissionItemSpotType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32 MissionInteractionObjectCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.*4a317c1757
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4a317c1757 {
	struct TArray<struct F*0af41f34b8> RawSpotGroupProperties; // 0x00(0x10)
	struct FStringAssetReference RawItemSpawnDataTable; // 0x10(0x10)
	struct FStringAssetReference RawItemSpawnTogetherDataTable; // 0x20(0x10)
	enum class EItemSpawnType ItemSpawnType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGameMode.*d465dc8649
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*d465dc8649 : FTableRowBase {
	struct FName StatusName; // 0x08(0x08)
	struct FTslSLBStageID Stage; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct F*277ce6b2fb> ExclusiveDropItems; // 0x18(0x10)
};

// ScriptStruct TslGameMode.*277ce6b2fb
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*277ce6b2fb {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.*fdf6f4ea3f
// Size: 0x68 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*fdf6f4ea3f : FTableRowBase {
	struct FName *5c90f3e936; // 0x08(0x08)
	struct TMap<struct FName, struct F*9201748d61> *4bf4d9d113; // 0x10(0x50)
	bool *30cd30ff8e; // 0x60(0x01)
	bool *c8f5ab41df; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct TslGameMode.*9201748d61
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9201748d61 {
	struct TArray<struct F*f91ce92f43> *445cf03793; // 0x00(0x10)
	struct TArray<struct F*0cffe62b9a> *83517f9df8; // 0x10(0x10)
	int32 GroupID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGameMode.*f91ce92f43
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f91ce92f43 {
	struct FName SLBZombieStatusName; // 0x00(0x08)
	struct FName SLBOverrideZombieMovementName; // 0x08(0x08)
	struct UBehaviorTree* OverrideBehaviorTree; // 0x10(0x08)
	int32 SpawnCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> BuffTargetSpawnerNameOverride; // 0x20(0x10)
	struct TArray<struct F*df1a3bcebf> RunnerSummonDatas; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct TslGameMode.*df1a3bcebf
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*df1a3bcebf {
	struct FName *b27ff28dd1; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	int32 SpawnCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.TslSLBZombieSpawnEventData
// Size: 0x78 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTslSLBZombieSpawnEventData : FTableRowBase {
	struct FName SpawnEventName; // 0x08(0x08)
	enum class ETslSLBZombieSpawnType SpawnType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<struct FName, struct F*fe8ea02d97> ZombieSpawnerSpawnDataMap; // 0x18(0x50)
	bool bPlayBGM; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SpawnTime; // 0x6c(0x04)
	bool bDisablePatrol; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGameMode.*fe8ea02d97
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*fe8ea02d97 {
	struct TArray<struct F*f91ce92f43> ZombieSpawnDatas; // 0x00(0x10)
	struct F*e47d135970 ZombieOverrideData; // 0x10(0x14)
	int32 GroupID; // 0x24(0x04)
};

// ScriptStruct TslGameMode.*e47d135970
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*e47d135970 {
	float *9e9ab61098; // 0x00(0x04)
	float *a6a9597048; // 0x04(0x04)
	float *3ac36f9cdb; // 0x08(0x04)
	float *b7b8717ca2; // 0x0c(0x04)
	int32 *ecffa43a68; // 0x10(0x04)
};

// ScriptStruct TslGameMode.SLBZombieMovementData
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FSLBZombieMovementData : FTableRowBase {
	struct FName *04f883787c; // 0x08(0x08)
	struct FTslSLBStageID Stage; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	int32 *d0af7b2c92; // 0x14(0x04)
	bool *d7448dbc2d; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *4220a80251; // 0x1c(0x04)
	float ThrowDelayterm; // 0x20(0x04)
	float SmokeParticleLifetime; // 0x24(0x04)
	float SmokeParticleRadius; // 0x28(0x04)
	bool *26b21389fd; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32 *e8848a0264; // 0x30(0x04)
	bool *b6dbe29b8c; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float C4ActivateDistance; // 0x38(0x04)
	float AdditionalSpeedModifier; // 0x3c(0x04)
	bool *1db9af282f; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float C4ExplosionTime; // 0x44(0x04)
	float *a188416208; // 0x48(0x04)
	float *4e32431288; // 0x4c(0x04)
	float GrenadeDamage; // 0x50(0x04)
	float GrenadeExplosionRadius; // 0x54(0x04)
};

// ScriptStruct TslGameMode.SLBZombieStatusDB
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct FSLBZombieStatusDB : FTableRowBase {
	int32 StatusID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Pawn; // 0x10(0x08)
	float ATKMultiplier; // 0x18(0x04)
	float Hp; // 0x1c(0x04)
	float SPDMultiplier; // 0x20(0x04)
	float JumpHeightMultiplier; // 0x24(0x04)
	enum class EZombieTargetingType TargetingType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AggressiveDistance; // 0x2c(0x04)
	float PatrolSearchRadius; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName StatusName; // 0x38(0x08)
	struct FTslSLBStageID Stage; // 0x40(0x02)
	char pad_42[0x2]; // 0x42(0x02)
	float ThrowDistance; // 0x44(0x04)
	int32 EnableRoamingDoorOpen; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UBehaviorTree* RootBehaviorTree; // 0x50(0x08)
	struct TArray<struct UClass*> ImmunBuffList; // 0x58(0x10)
};

// ScriptStruct TslGameMode.*9300e96b36
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9300e96b36 {
	float AggressiveDistance; // 0x00(0x04)
	enum class EZombieTargetingType TargetingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGameMode.*8a38a7ac79
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8a38a7ac79 {
	enum class EAITaskState *6403f15aa8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGameMode.*3fe596147f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*3fe596147f {
	int32 *deb3f76207; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ASKBDBossMonster* *1b8be6e723; // 0x08(0x08)
};

// ScriptStruct TslGameMode.*84431ca748
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct F*84431ca748 : FTableRowBase {
	enum class ETslSKBDDifficulty Difficulty; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ItemID; // 0x10(0x08)
	int32 ClearStackCount; // 0x18(0x04)
	int32 FailStackCount; // 0x1c(0x04)
	struct UTexture2D* ItemTexture; // 0x20(0x08)
	struct FText ItemName; // 0x28(0x18)
	struct FText ItemDescription; // 0x40(0x18)
};

// ScriptStruct TslGameMode.SKBDVaultItem
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSKBDVaultItem {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*b533d47f55
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*b533d47f55 : FTableRowBase {
	enum class ETslSKBDDifficulty Difficulty; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*bfe916113f> DropItems; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*bfe916113f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*bfe916113f {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	float DropProbability; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*d301db5239
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*d301db5239 : FTableRowBase {
	enum class ETslSKBDDifficulty Difficulty; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct F*95c7e6e22d> *dae9ee7723; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*95c7e6e22d
// Size: 0x150 (Inherited: 0x00)  [layout: KHOP]
struct F*95c7e6e22d {
	float Hp; // 0x00(0x04)
	float *d2de47036e; // 0x04(0x04)
	float *80a4439669; // 0x08(0x04)
	float *8fe5eab0d0; // 0x0c(0x04)
	float groggy; // 0x10(0x04)
	float *4600ccc39f; // 0x14(0x04)
	float *d640ee33ae; // 0x18(0x04)
	float *2c1ac294cc; // 0x1c(0x04)
	struct TArray<struct F*3b08c70f3d> *8e17987e67; // 0x20(0x10)
	struct UClass* Pawn; // 0x30(0x08)
	float SpawnRadius; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct F*41a0e7f8be> *9c339456ce; // 0x40(0x10)
	struct F*b680a8451a *84fe232928; // 0x50(0x10)
	struct F*2f7c951a47 *9d7b73ceba; // 0x60(0x38)
	struct F*243c9548ad *5cd12c2d04; // 0x98(0x30)
	struct F*a377403a02 *1a57954de4; // 0xc8(0x50)
	float *8778ec27d3; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UBehaviorTree* *7277418900; // 0x120(0x08)
	struct TArray<struct F*38959204ad> Skills; // 0x128(0x10)
	struct UClass* *8aa17c3d74; // 0x138(0x08)
	float *841325adbd; // 0x140(0x04)
	float *c54ab2e069; // 0x144(0x04)
	float *8f75ce53e8; // 0x148(0x04)
	float *38218deed9; // 0x14c(0x04)
};

// ScriptStruct TslGameMode.*38959204ad
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*38959204ad {
	enum class EBossSkillType *3f2af303cf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *afd853d674; // 0x04(0x04)
	float *06cce17325; // 0x08(0x04)
	float *885f8745a3; // 0x0c(0x04)
	float PlayTime; // 0x10(0x04)
	bool *9d0b3446e9; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UClass* *8aa17c3d74; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGameMode.*a377403a02
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*a377403a02 : FTableRowBase {
	float Damage; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText *992dd6cb72; // 0x10(0x18)
	float *06f8601645; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText *0ae7511e3a; // 0x30(0x18)
	float *5522ea5f70; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGameMode.*243c9548ad
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*243c9548ad : FTableRowBase {
	struct TArray<struct FName> *6b370e0b68; // 0x08(0x10)
	float *1f8d7d579f; // 0x18(0x04)
	float *af5cb9ac0e; // 0x1c(0x04)
	struct FRotator *df2f1e68d0; // 0x20(0x0c)
	float *160a81dcf6; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.*2f7c951a47
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*2f7c951a47 : FTableRowBase {
	struct TArray<struct FName> *6b370e0b68; // 0x08(0x10)
	float *d276202915; // 0x18(0x04)
	float *6f521ff849; // 0x1c(0x04)
	float *160a81dcf6; // 0x20(0x04)
	float *af5cb9ac0e; // 0x24(0x04)
	struct FRotator *df2f1e68d0; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGameMode.*b680a8451a
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*b680a8451a : FTableRowBase {
	float *9ff27a6c32; // 0x08(0x04)
	float *4e13e47db4; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*41a0e7f8be
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*41a0e7f8be {
	float Hp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Pawn; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*960c2be0d6> *0a870567ba; // 0x18(0x10)
	int32 *45cb4d6b1e; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*960c2be0d6> *5b6f809d80; // 0x30(0x10)
	int32 *f5524627be; // 0x40(0x04)
	int32 SpawnCount; // 0x44(0x04)
};

// ScriptStruct TslGameMode.*960c2be0d6
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*960c2be0d6 {
	struct UClass* Buff; // 0x00(0x08)
	int32 weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*3b08c70f3d
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*3b08c70f3d {
	enum class EDamageTypeCategory DamageTypeCategory; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *27fec8d9bd; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*37e99965d0
// Size: 0x98 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*37e99965d0 : FTableRowBase {
	enum class ETslSKBDDifficulty Difficulty; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UParticleSystem* *cbd997d810; // 0x10(0x08)
	struct UClass* *97fc936a35; // 0x18(0x08)
	struct UParticleSystem* *7079c9deb0; // 0x20(0x08)
	struct UMaterial* *4cbecf35da; // 0x28(0x08)
	struct UMaterial* *12a802818c; // 0x30(0x08)
	struct UMaterial* *e408ab3b5b; // 0x38(0x08)
	struct UMaterial* *9bfcd8b613; // 0x40(0x08)
	struct UParticleSystem* *0433446c53; // 0x48(0x08)
	struct FName *a18583fcba; // 0x50(0x08)
	struct UParticleSystem* *bcc35ecb76; // 0x58(0x08)
	struct FName *78384ebdd3; // 0x60(0x08)
	struct UClass* *63656556e5; // 0x68(0x08)
	struct UParticleSystem* *e04799ce0f; // 0x70(0x08)
	struct FName *c8fe88286a; // 0x78(0x08)
	float *3216903d7d; // 0x80(0x04)
	float *58d055a5f4; // 0x84(0x04)
	float *12542f2793; // 0x88(0x04)
	float *d2099d621a; // 0x8c(0x04)
	float *dd6a9e0b40; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct TslGameMode.*0c166eec30
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0c166eec30 {
	int32 TeamId; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	struct AController* *0a761db1d1; // 0x08(0x08)
};

// ScriptStruct TslGameMode.CraftGuideLineData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FCraftGuideLineData {
	struct TArray<struct FString> LineName; // 0x00(0x10)
	struct TMap<struct FString, struct UWidget*> CachedWidgetByName; // 0x10(0x50)
};

// ScriptStruct TslGameMode.FBRClassDescription
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FFBRClassDescription {
	struct FText Title; // 0x00(0x18)
	struct FText Subtitle; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TArray<bool> Stats; // 0x48(0x10)
	struct FStringAssetReference Image; // 0x58(0x10)
};

// ScriptStruct TslGameMode.*1454f26768
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*1454f26768 {
	struct TArray<struct FName> ItemIds; // 0x00(0x10)
};

// ScriptStruct TslGameMode.FBRClassItemSlotData
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FFBRClassItemSlotData {
	struct TArray<struct FName> WeaponItemIDs; // 0x00(0x10)
	struct TArray<struct FName> SkillItemIDs; // 0x10(0x10)
	struct TArray<struct FName> ArmorItemIDs; // 0x20(0x10)
};

// ScriptStruct TslGameMode.ModCreatorInfoRowData
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FModCreatorInfoRowData {
	int32 GridRow; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
};

// ScriptStruct TslGameMode.*5fd2690cba
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5fd2690cba {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGameMode.*64ea629fc5
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*64ea629fc5 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UScriptStruct* ScriptStruct; // 0x18(0x08)
};

// ScriptStruct TslGameMode.ModEditManagerMainTabData
// Size: 0x88 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FModEditManagerMainTabData : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	struct FText DisplayText; // 0x10(0x18)
	struct TMap<struct FName, struct FModEditManagerSubTabData> SubTabDataMap; // 0x28(0x50)
	int32 Priority; // 0x78(0x04)
	char pad_7C[0xc]; // 0x7c(0x0c)
};

// ScriptStruct TslGameMode.ModEditManagerSubTabData
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModEditManagerSubTabData {
	struct FName Name; // 0x00(0x08)
	struct FText DisplayText; // 0x08(0x18)
	struct FModEditManagerContentInfo ContentInfo; // 0x20(0x18)
	int32 Priority; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGameMode.ModEditManagerContentInfo
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FModEditManagerContentInfo {
	enum class EModEditManagerContentType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FModEditManagerObjectListContentData ObjectListContentData; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModEditManagerObjectListContentData
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModEditManagerObjectListContentData {
	struct FName CategoryName; // 0x00(0x08)
	enum class EModObjectType ObjectType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGameMode.ModObjectTableRow
// Size: 0xd8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FModObjectTableRow : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText DisplayDescription; // 0x20(0x18)
	int16 ObjectID; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UClass* ObjectClass; // 0x40(0x20)
	struct UClass* PreviewActorClass; // 0x60(0x20)
	struct UClass* ModComponentClass; // 0x80(0x08)
	struct FModDeviceSchemaData DeviceSchemaData; // 0x88(0x20)
	struct UTexture2D* IconTexture; // 0xa8(0x20)
	bool bRequestGenerateIconTexture; // 0xc8(0x01)
	bool bUniformScaleOnly; // 0xc9(0x01)
	bool bUnScaleable; // 0xca(0x01)
	enum class EModObjectType ObjectType; // 0xcb(0x01)
	enum class EModObjectSubCategory Subcategory; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	int32 SpawnWeight; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGameMode.ModSampleDataTableRow
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct FModSampleDataTableRow : FTableRowBase {
	int32 SampleID; // 0x08(0x04)
	enum class EModSampleCategory SampleCategory; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText SampleName; // 0x10(0x18)
	struct FText SampleDescription; // 0x28(0x18)
	struct UClass* SampleDataClass; // 0x40(0x20)
};

// ScriptStruct TslGameMode.UGCQuickSlotData
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FUGCQuickSlotData {
	int32 SlotNumber; // 0x00(0x04)
	int16 ObjectID; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGameMode.UGCUserPlayData
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FUGCUserPlayData : FBaseUserPlayData {
	struct TArray<struct FUGCQuickSlotData> SavedQuickSlotData; // 0x08(0x10)
};

// ScriptStruct TslGameMode.*13666deaa1
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*13666deaa1 {
	int32 SampleID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText *30be954d7a; // 0x08(0x18)
	enum class EModSampleCategory *f1010e3e23; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGameMode.ModHUDKeyGuideFunctionWrapper
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModHUDKeyGuideFunctionWrapper {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGameMode.*adcb981c37
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*adcb981c37 : FTableRowBase {
	struct TArray<struct FName> *d3949e4ada; // 0x08(0x10)
};

// ScriptStruct TslGameMode.*05f8c191bb
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*05f8c191bb : FTableRowBase {
	struct FText *807b965172; // 0x08(0x18)
};

// ScriptStruct TslGameMode.*07bbc62964
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*07bbc62964 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGameMode.*39f3d8bddc
// Size: 0x180 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*39f3d8bddc {
	char pad_0[0x180]; // 0x00(0x180)
};

// ScriptStruct TslGameMode.*a27bf2ab2c
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a27bf2ab2c {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGameMode.ModInputPresetRow
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct FModInputPresetRow : FTableRowBase {
	struct TArray<struct F*4e1aa693b5> *a7d6ac3277; // 0x08(0x10)
	SetProperty *a17836ec72; // 0x18(0x50)
};

// ScriptStruct TslGameMode.*4e1aa693b5
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4e1aa693b5 {
	struct FName ActionName; // 0x00(0x08)
	struct FText DescriptionText; // 0x08(0x18)
	enum class EModInputType InputType; // 0x20(0x01)
	bool *a12fa73518; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGameMode.*24b5127c46
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*24b5127c46 : FTableRowBase {
	struct TArray<struct FName> *d3949e4ada; // 0x08(0x10)
};

// ScriptStruct TslGameMode.ModActionNameLocalizeRow
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FModActionNameLocalizeRow : FTableRowBase {
	struct FText DefaultText; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModItemTableRow
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FModItemTableRow : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	enum class EModItemCategory ItemCategory; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGameMode.TeamVisualStyle
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FTeamVisualStyle {
	struct UTexture2D* HeaderBg; // 0x00(0x08)
	struct UTexture2D* BodyBg; // 0x08(0x08)
	struct FSlateColor HeaderFontColor; // 0x10(0x28)
	struct FLinearColor LineDecoColor; // 0x38(0x10)
};

// ScriptStruct TslGameMode.ModLeaderboardEmptyRowRule
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FModLeaderboardEmptyRowRule {
	int32 MinPlayerCount; // 0x00(0x04)
	int32 MinRowCount; // 0x04(0x04)
};

// ScriptStruct TslGameMode.ModLogData
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FModLogData {
	float TimeSeconds; // 0x00(0x04)
	enum class EModRunState RunState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString StringKey; // 0x08(0x10)
	struct TArray<struct FModLogNamedArgument> NamedArguments; // 0x18(0x10)
	struct TArray<struct FModLogWidgetArgument> WidgetArguments; // 0x28(0x10)
	struct TArray<struct FModLogDetailData> DetailLogs; // 0x38(0x10)
};

// ScriptStruct TslGameMode.ModLogDetailData
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FModLogDetailData {
	struct FString StringKey; // 0x00(0x10)
	struct TArray<struct FModLogNamedArgument> NamedArguments; // 0x10(0x10)
	struct TArray<struct FModLogWidgetArgument> WidgetArguments; // 0x20(0x10)
};

// ScriptStruct TslGameMode.ModLogWidgetArgument
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModLogWidgetArgument {
	struct FString Key; // 0x00(0x10)
	struct FModDeviceInstanceID DeviceInstanceID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.ModLogNamedArgument
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FModLogNamedArgument {
	struct FString Key; // 0x00(0x10)
	struct FText Value; // 0x10(0x18)
};

// ScriptStruct TslGameMode.ModMatchDataRow
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FModMatchDataRow : FTableRowBase {
	struct FFilePath PUGCFilePath; // 0x08(0x10)
};

// ScriptStruct TslGameMode.*35c59f5a68
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*35c59f5a68 {
	enum class EModActorType ActorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	bool *f0c621049a; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGameMode.*e4577077ec
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*e4577077ec {
	float *7ab2e3aa6b; // 0x00(0x04)
	float *f8986dfa9b; // 0x04(0x04)
	int32 TeamId; // 0x08(0x04)
};

// ScriptStruct TslGameMode.*34bf1fa7be
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*34bf1fa7be {
	float TimeSeconds; // 0x00(0x04)
	enum class EModRunState *7cbfd455c7; // 0x04(0x01)
	char pad_5[0x1]; // 0x05(0x01)
	int16 *31e3b4a97f; // 0x06(0x02)
	struct TArray<struct F*74d67523a7> *46f8909fd6; // 0x08(0x10)
	struct TArray<struct F*3c3b397093> *0f96960303; // 0x18(0x10)
	struct TArray<struct F*e8f32f6290> *8b2261892f; // 0x28(0x10)
};

// ScriptStruct TslGameMode.*e8f32f6290
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*e8f32f6290 {
	int16 *31e3b4a97f; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct F*74d67523a7> *46f8909fd6; // 0x08(0x10)
	struct TArray<struct F*3c3b397093> *0f96960303; // 0x18(0x10)
};

// ScriptStruct TslGameMode.*3c3b397093
// Size: 0x06 (Inherited: 0x00)  [layout: KHOP]
struct F*3c3b397093 {
	int16 *8e44058fbf; // 0x00(0x02)
	struct FModDeviceInstanceID DeviceInstanceID; // 0x02(0x04)
};

// ScriptStruct TslGameMode.*74d67523a7
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*74d67523a7 {
	int16 *8e44058fbf; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Value; // 0x08(0x18)
};

// ScriptStruct TslGameMode.*5d163d20d8
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5d163d20d8 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGameMode.ModResultTypeData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FModResultTypeData {
	enum class EModResultType TabType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TabDisplayName; // 0x08(0x18)
};

// ScriptStruct TslGameMode.ModRuleSetWidgetData
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FModRuleSetWidgetData {
	struct U*366ebe387e* WidgetFactory; // 0x00(0x08)
	struct UModPropertyBaseElementWidget* RootElementWidget; // 0x08(0x08)
	struct UModEditManagerCategoryGroupWidget* CategoryGroupWidget; // 0x10(0x08)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct TslGameMode.*e56e059310
// Size: 0x40 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*e56e059310 : FTableRowBase {
	struct FName CategoryID; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FName> AvailableForMainTagIDs; // 0x28(0x10)
	int32 MaxSelectCount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGameMode.*1c15bbdb8d
// Size: 0x40 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*1c15bbdb8d : FTableRowBase {
	struct FName TagID; // 0x08(0x08)
	enum class EModTagType TagType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName CategoryID; // 0x18(0x08)
	struct FText DisplayName; // 0x20(0x18)
	int32 SortOrder; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGameMode.*5053e479e6
// Size: 0x158 (Inherited: 0x00)  [layout: KHOP]
struct F*5053e479e6 {
	float *4104dfa6c5; // 0x00(0x04)
	bool *5b3a84b783; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 *9861e58535; // 0x08(0x04)
	int32 RoundCount; // 0x0c(0x04)
	float *aac3d20a1a; // 0x10(0x04)
	enum class EOneOnOneInvenRecoverType *20f60924d8; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FName> *6df20eb91d; // 0x18(0x10)
	struct TArray<struct FName> *131c132842; // 0x28(0x10)
	struct TMap<enum class EAccessorySlot, struct FName> *0b1a2187b8; // 0x38(0x50)
	struct TArray<struct FName> *f282dd4edf; // 0x88(0x10)
	struct TArray<struct FName> *12ad786783; // 0x98(0x10)
	struct TArray<struct FName> *1df0acbaa7; // 0xa8(0x10)
	struct TMap<enum class EEquipSlotID, struct FName> *0d8ddb9cee; // 0xb8(0x50)
	struct TMap<struct FName, int32> *8e6782d8ee; // 0x108(0x50)
};

// ScriptStruct TslGameMode.*8d13cea2cc
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*8d13cea2cc {
	enum class EOneOnOneTicketState MatchState; // 0x00(0x01)
	enum class EOneOnOneStageType *36ea4a39d0; // 0x01(0x01)
	enum class EOneOnOneSideType *1c14a33504; // 0x02(0x01)
};

// ScriptStruct TslGameMode.OneOnOneMessageTableRowBase
// Size: 0x70 (Inherited: 0x08)  [layout: KHOP]
struct FOneOnOneMessageTableRowBase : FTableRowBase {
	struct FText *64d1ee763d; // 0x08(0x18)
	struct TMap<enum class EOneOnOneMessageType, struct FText> *ebeb30d931; // 0x20(0x50)
};

// ScriptStruct TslGameMode.*fb05aebb34
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fb05aebb34 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGameMode.*9bc13a7190
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9bc13a7190 {
	struct TArray<struct FPropHuntPlayerData> *a6f74a1e8a; // 0x00(0x10)
	struct TArray<struct FPropHuntPlayerData> *c2870ce663; // 0x10(0x10)
	int32 RoundCount; // 0x20(0x04)
	bool *a5a05655be; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGameMode.PropHuntPlayerData
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPropHuntPlayerData {
	bool bIsInitialized; // 0x00(0x01)
	bool bIsHunter; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText PlayerName; // 0x08(0x18)
	int32 KillCount; // 0x20(0x04)
	int32 DeathTime; // 0x24(0x04)
	struct FString PlayerNetId; // 0x28(0x10)
	enum class EOutGamePlatformProvider OutGamePlatformProvider; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct TslGameMode.PropHuntAreaConfig
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FPropHuntAreaConfig : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	struct FString AreaName; // 0x18(0x10)
	int32 weight; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct U*1523073850* *4db9e6bf97; // 0x30(0x08)
};

// ScriptStruct TslGameMode.*6b6505ba9c
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*6b6505ba9c {
	struct UAkAudioEvent* *3bf4a9e0d8; // 0x00(0x08)
	struct UAkAudioEvent* *79f96a35b6; // 0x08(0x08)
	struct UAkAudioEvent* *bfff9b618f; // 0x10(0x08)
	struct UAkAudioEvent* *084e200d59; // 0x18(0x08)
	struct UAkAudioEvent* *d94304237f; // 0x20(0x08)
	struct UAkAudioEvent* *ce50239df1; // 0x28(0x08)
	struct UAkAudioEvent* *cabb9d991a; // 0x30(0x08)
	struct UAkAudioEvent* *f62b5266ea; // 0x38(0x08)
	struct UAkAudioEvent* *1484b0495d; // 0x40(0x08)
	struct UAkAudioEvent* *462ca48772; // 0x48(0x08)
	struct UAkAudioEvent* *99b2b336e2; // 0x50(0x08)
	struct UAkAudioEvent* *5160e52d3d; // 0x58(0x08)
	struct TArray<struct UAkAudioEvent*> *30d8ba9dc2; // 0x60(0x10)
	struct UAkAudioEvent* *aebdae3b8f; // 0x70(0x08)
	struct UAkAudioEvent* *38a9bd308c; // 0x78(0x08)
	struct UAkAudioEvent* *708e56448b; // 0x80(0x08)
	struct UAkAudioEvent* *00f35c61cb; // 0x88(0x08)
	struct UAkAudioEvent* *a6fd456669; // 0x90(0x08)
	struct UAkAudioEvent* *e19ad63a34; // 0x98(0x08)
	struct UAkAudioEvent* *ccfade1a36; // 0xa0(0x08)
	struct UAkAudioEvent* *0660eb7a6e; // 0xa8(0x08)
};

// ScriptStruct TslGameMode.PropHuntPropInfo
// Size: 0x40 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FPropHuntPropInfo : FTableRowBase {
	struct UStaticMesh* *f4b69aead5; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct UTexture2D* *d77522ce24; // 0x28(0x08)
	bool *19f02b2735; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 SpawnWeight; // 0x34(0x04)
	float DamageMultiplier; // 0x38(0x04)
	enum class EPropHuntPropSize PropSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct TslGameMode.*11c301f744
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*11c301f744 {
	struct TArray<struct FName> *ae71dab1a9; // 0x00(0x10)
	struct TArray<struct F*e5d04fe24a> *8a9957a16c; // 0x10(0x10)
	struct TArray<struct FName> *1bae1b9c79; // 0x20(0x10)
	struct TArray<struct F*e5d04fe24a> *afc8893a9c; // 0x30(0x10)
};

// ScriptStruct TslGameMode.*e5d04fe24a
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e5d04fe24a {
	struct FName WeaponID; // 0x00(0x08)
	struct TArray<struct FName> *9d3873aff4; // 0x08(0x10)
	bool *735ae638a2; // 0x18(0x01)
	bool *1fc9a89853; // 0x19(0x01)
	bool *42f0298bd9; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct TslGameMode.*e4031a74e8
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct F*e4031a74e8 : F*8536a6d018 {
	struct UClass* *eedab040f9; // 0x60(0x08)
	float FlashDelay; // 0x68(0x04)
	float FlashRadius; // 0x6c(0x04)
	float BlindnessDuration; // 0x70(0x04)
	float FlashDistanceMultiplier; // 0x74(0x04)
};

// ScriptStruct TslGameMode.*8536a6d018
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8536a6d018 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class EPropHuntMatchPhase, float> Cooldown; // 0x08(0x50)
	int32 MaxUsesPerPhase; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGameMode.*d2dff5484d
// Size: 0x70 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct F*d2dff5484d : F*8536a6d018 {
	int32 MaxDecoysPerMatch; // 0x60(0x04)
	float DecoySpawnDistance; // 0x64(0x04)
	float DecoyHealth; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGameMode.*ea5ac60cc8
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct F*ea5ac60cc8 : F*8536a6d018 {
	float MinIdleTauntInterval; // 0x60(0x04)
	float MaxIdleTauntInterval; // 0x64(0x04)
	float ManualTauntDelay; // 0x68(0x04)
	float IdleThresholdDistance; // 0x6c(0x04)
};

// ScriptStruct TslGameMode.*8963b3b11e
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8963b3b11e {
	struct F*5ee4579fce *d86f43c04a; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct F*e1453c2012 *deb83c6db0; // 0x18(0x28)
	struct F*e1453c2012 *c706e62323; // 0x40(0x28)
	struct FLinearColor *3378c23e79; // 0x68(0x10)
	struct FLinearColor *e432614a4c; // 0x78(0x10)
	struct FLinearColor *e0714ab88b; // 0x88(0x10)
	bool *64aaa75567; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct TslGameMode.*e1453c2012
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*e1453c2012 {
	struct UParticleSystem* *63ba399860; // 0x00(0x08)
	struct UParticleSystem* *fe1a17a3c7; // 0x08(0x08)
	struct UParticleSystem* *72ad1c5b1a; // 0x10(0x08)
	struct UParticleSystem* *bd4b7111f6; // 0x18(0x08)
	struct UParticleSystem* *d2d537296f; // 0x20(0x08)
};

// ScriptStruct TslGameMode.*5ee4579fce
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*5ee4579fce {
	float *925bac409d; // 0x00(0x04)
	float *3af430c0f5; // 0x04(0x04)
	float *8f2f089f9c; // 0x08(0x04)
	float *d79d7e4a06; // 0x0c(0x04)
	float *56d92fa353; // 0x10(0x04)
};

// ScriptStruct TslGameMode.*d2e21b009b
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*d2e21b009b {
	float PropSpringArmLength; // 0x00(0x04)
	struct FVector *2749c99e32; // 0x04(0x0c)
	float *1394ca01f0; // 0x10(0x04)
	float BaseFallBackDistance; // 0x14(0x04)
	float MaxFallBackDistance; // 0x18(0x04)
	float BoundsFitMargin; // 0x1c(0x04)
	float InterpolationSpeed; // 0x20(0x04)
	float ManualAdjustmentSpeed; // 0x24(0x04)
	float PropMeshGroundOffset; // 0x28(0x04)
};

// ScriptStruct TslGameMode.*e914e948d9
// Size: 0x34 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e914e948d9 {
	float PreparationPhaseDuration; // 0x00(0x04)
	float Round1PhaseDuration; // 0x04(0x04)
	float PropChangePhaseDuration; // 0x08(0x04)
	float Round2PhaseDuration; // 0x0c(0x04)
	float FeverTimePhaseDuration; // 0x10(0x04)
	float RoundEndDuration; // 0x14(0x04)
	int32 MinPlayersToStart; // 0x18(0x04)
	float HunterRatio; // 0x1c(0x04)
	float PropSelectionTimeInPreparation; // 0x20(0x04)
	float HunterMovementSpeedMultiplier; // 0x24(0x04)
	float HunterHealthRecoveryOnHit; // 0x28(0x04)
	float HunterHealthPenaltyOnMiss; // 0x2c(0x04)
	bool bForceHunterFPP; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct TslGameMode.*20361c1ff8
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*20361c1ff8 {
	float *2459da5058; // 0x00(0x04)
	float *38713bd6ce; // 0x04(0x04)
};

// ScriptStruct TslGameMode.SDMUserPlayData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FSDMUserPlayData : FBaseUserPlayData {
	struct TArray<bool> CompressedSavedSpawnkits; // 0x08(0x10)
	struct TArray<struct FString> UsingSpawnKitIDs; // 0x18(0x10)
};

// ScriptStruct TslGameMode.*a28fa62182
// Size: 0xc8 (Inherited: 0x00)  [layout: KHOP]
struct F*a28fa62182 {
	struct F*ee566d2bde *9896507f22; // 0x00(0xc8)
};

// ScriptStruct TslGameMode.*ee566d2bde
// Size: 0xc8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct F*ee566d2bde : F*fdab764c85 {
	struct TArray<struct F*78ce58242f> Items; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct TslGameMode.*78ce58242f
// Size: 0x30 (Inherited: 0x0c)  [layout: KHOP]
struct F*78ce58242f : F*60282223b2 {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *1064931426; // 0x10(0x10)
	struct TArray<struct F*34384792be> *fba2bfe862; // 0x20(0x10)
};

// ScriptStruct TslGameMode.*a62f08be04
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*a62f08be04 {
	struct FString *1064931426; // 0x00(0x10)
	struct TArray<struct F*34384792be> *fba2bfe862; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*a5a9d76cc2
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*a5a9d76cc2 {
	int32 Kill; // 0x00(0x04)
	int32 *c798fc13b7; // 0x04(0x04)
	int32 MaxChainKill; // 0x08(0x04)
	int32 death; // 0x0c(0x04)
	float Damage; // 0x10(0x04)
	float *b83e13a7d7; // 0x14(0x04)
	float Score; // 0x18(0x04)
};

// ScriptStruct TslGameMode.*e39a958d84
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e39a958d84 {
	int32 Rank; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
	int32 MaxScore; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText PlayerName; // 0x10(0x18)
	bool bIsMe; // 0x28(0x01)
	enum class EOutGamePlatformProvider Platform; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGameMode.*473cb901a1
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*473cb901a1 {
	struct FText PlayerName; // 0x00(0x18)
	int32 Kill; // 0x18(0x04)
	int32 death; // 0x1c(0x04)
	int32 Damage; // 0x20(0x04)
	int32 Score; // 0x24(0x04)
	bool *a2bef37156; // 0x28(0x01)
	enum class EOutGamePlatformProvider Platform; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGameMode.*896ce2adb7
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*896ce2adb7 {
	struct FName DropItemID; // 0x00(0x08)
	int32 DropItemCount; // 0x08(0x04)
	int32 DropItemRate; // 0x0c(0x04)
	float DropProbability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.*b7f551872c
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b7f551872c {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGameMode.*5430b6fcf1
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5430b6fcf1 {
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> *80912a42f5; // 0x00(0x50)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct TslGameMode.*5cd12c2d04
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5cd12c2d04 {
	struct FVector *936d25441c; // 0x00(0x0c)
	struct FVector StartPoint; // 0x0c(0x0c)
	struct FVector *2da2586e13; // 0x18(0x0c)
	struct FVector TargetPoint; // 0x24(0x0c)
	float Distance; // 0x30(0x04)
	float *e6363ba7a6; // 0x34(0x04)
	float *5d824840e8; // 0x38(0x04)
	bool *35a8e53c35; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FName SocketName; // 0x40(0x08)
	struct FVector *11e72a2521; // 0x48(0x0c)
	float *6f4824c24b; // 0x54(0x04)
	float *b1f5589654; // 0x58(0x04)
	float Thickness; // 0x5c(0x04)
	float *885f8745a3; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGameMode.*9d7b73ceba
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*9d7b73ceba {
	struct FVector StartPoint; // 0x00(0x0c)
	struct FVector EndPoint; // 0x0c(0x0c)
	struct FVector *81eb8977a5; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SocketName; // 0x28(0x08)
	struct FVector *11e72a2521; // 0x30(0x0c)
	float Thickness; // 0x3c(0x04)
	float *76d0b07252; // 0x40(0x04)
	float *885f8745a3; // 0x44(0x04)
};

// ScriptStruct TslGameMode.*b6a2e81d66
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*b6a2e81d66 {
	enum class ETslSKBDDifficulty Difficulty; // 0x00(0x01)
	bool bClear; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 ClearTimeSec; // 0x04(0x04)
	int32 AcquiredApPoints; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*2fc2a47321> RewardItems; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*2fc2a47321
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2fc2a47321 {
	struct UTexture2D* ItemTexture; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	bool bSpecial; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGameMode.*8e6c974a27
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*8e6c974a27 {
	enum class ETslSKBDDifficulty Difficulty; // 0x00(0x01)
	bool bMostVoted; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 MyNumber; // 0x04(0x04)
	struct TArray<int32> SelectedMemberNumbers; // 0x08(0x10)
	struct TArray<int32> ClearMemberNumbers; // 0x18(0x10)
};

// ScriptStruct TslGameMode.*a5a2da8f70
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*a5a2da8f70 {
	struct UTexture2D* ItemTexture; // 0x00(0x08)
	struct FText ItemName; // 0x08(0x18)
	struct FText ItemDescription; // 0x20(0x18)
};

// ScriptStruct TslGameMode.SKBDDifficultySelectStageListEntryWidgetData
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FSKBDDifficultySelectStageListEntryWidgetData {
	struct UAkAudioEvent* SoundHoverEvent; // 0x00(0x08)
};

// ScriptStruct TslGameMode.SKBDDifficultySelectWidgetData
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FSKBDDifficultySelectWidgetData {
	struct UClass* RewardListEntryWidgetClass; // 0x00(0x08)
	struct FText TextDifficultyEasy; // 0x08(0x18)
	struct FText TextDifficultyNormal; // 0x20(0x18)
	struct FText TextDifficultyHard; // 0x38(0x18)
	struct UAkAudioEvent* SoundOpenEvent; // 0x50(0x08)
	struct UAkAudioEvent* SoundCloseEvent; // 0x58(0x08)
	struct UAkAudioEvent* SoundSelectStageEvent; // 0x60(0x08)
};

// ScriptStruct TslGameMode.*73c41249d9
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*73c41249d9 : F*fdab764c85 {
	struct TArray<struct F*323bd3575c> Array; // 0xb0(0x10)
	struct ASKBDLaserDamageFieldContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGameMode.*323bd3575c
// Size: 0x30 (Inherited: 0x0c)  [layout: KHOP]
struct F*323bd3575c : F*60282223b2 {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *39aa5f7e82; // 0x1c(0x04)
	int32 *c0dce6da10; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UParticleSystemComponent* ParticleComp; // 0x28(0x08)
};

// ScriptStruct TslGameMode.*460a935ebb
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*460a935ebb {
	struct UParticleSystemComponent* Start; // 0x00(0x08)
	struct AActor* *992e146b98; // 0x08(0x08)
	struct UParticleSystemComponent* Impact; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGameMode.*4582e93ec5
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*4582e93ec5 {
	struct UDecalComponent* DecalComponent; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UMaterialInstanceDynamic* *d9f9290d93; // 0x18(0x08)
	struct UMaterialInstanceDynamic* *1461e78a9e; // 0x20(0x08)
};

// ScriptStruct TslGameMode.SKBDUserPlayData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FSKBDUserPlayData : FBaseUserPlayData {
	struct TArray<struct FSKBDVaultItem> Vault; // 0x08(0x10)
	struct TArray<enum class ETslSKBDDifficulty> ClearDifficultyHistory; // 0x18(0x10)
};

// ScriptStruct TslGameMode.SKBDResultWidgetData
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct FSKBDResultWidgetData {
	struct UClass* RewardListEntryWidgetClass; // 0x00(0x08)
	struct FText TextDifficultyEasy; // 0x08(0x18)
	struct FText TextDifficultyNormal; // 0x20(0x18)
	struct FText TextDifficultyHard; // 0x38(0x18)
	struct FText TextClear; // 0x50(0x18)
	struct FText TextFailed; // 0x68(0x18)
	struct FText TextRemainTime; // 0x80(0x18)
	struct UAkAudioEvent* SoundWinBGM; // 0x98(0x08)
	struct UAkAudioEvent* SoundLoseBGM; // 0xa0(0x08)
};

// ScriptStruct TslGameMode.*0f89a302c3
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct F*0f89a302c3 : F*0ab61af153 {
	enum class EZombieTargetingType TargetingType; // 0x30(0x01)
	struct FTslSLBStageID Stage; // 0x31(0x02)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<struct UClass*> *cb3fbdf4f6; // 0x38(0x10)
};

// ScriptStruct TslGameMode.*b36dbbcf4b
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*b36dbbcf4b {
	bool *1f297979b0; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *a9891fff63; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*7b2a050a8f
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*7b2a050a8f {
	bool *9a91df7801; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DurationTime; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*37fa64557a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*37fa64557a {
	struct FName *0085642061; // 0x00(0x08)
	struct TArray<struct UTexture2D*> *79b666ba68; // 0x08(0x10)
};

// ScriptStruct TslGameMode.*963c41bfcf
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*963c41bfcf : F*31687bb0fc {
	struct TArray<struct F*df1a3bcebf> *b3ae6f3167; // 0x08(0x10)
};

// ScriptStruct TslGameMode.*6d9fc1d4e8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6d9fc1d4e8 {
	struct TArray<struct FSLBVaultItem> Vault; // 0x00(0x10)
};

// ScriptStruct TslGameMode.SLBVaultItem
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSLBVaultItem {
	struct FName ItemID; // 0x00(0x08)
	struct FName SkinItemID; // 0x08(0x08)
	struct TArray<struct FName> Attachments; // 0x10(0x10)
	int32 StackCount; // 0x20(0x04)
	bool bLastEquipped; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGameMode.*90928f2ef6
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*90928f2ef6 {
	struct FName ItemID; // 0x00(0x08)
	bool *4225ec2e1d; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGameMode.*f271e6803f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f271e6803f {
	struct TArray<struct F*ca82628ca4> *0a870567ba; // 0x00(0x10)
};

// ScriptStruct TslGameMode.SLBUISelectRewardData
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FSLBUISelectRewardData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* RewardSkinIconImage; // 0x08(0x08)
	struct FText RewardName; // 0x10(0x18)
	struct FText RewardDescription; // 0x28(0x18)
	struct TArray<struct FSLBUIStagePlayerHistory> TeamHistory; // 0x40(0x10)
};

// ScriptStruct TslGameMode.SLBUIStagePlayerHistory
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSLBUIStagePlayerHistory {
	int32 SquadMemberIndex; // 0x00(0x04)
	struct FLinearColor Color; // 0x04(0x10)
	enum class ETslSLBStageDifficulty History; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGameMode.*942eed8b68
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*942eed8b68 {
	enum class ETslSLBStage ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
	enum class ETslSLBStageDifficulty MyHistory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FSLBUIStagePlayerHistory> TeamHistory; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*ee05ac7b2f
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*ee05ac7b2f {
	enum class ETslSLBStageDifficulty ID; // 0x00(0x01)
	bool bIsSelected; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 VotedNum; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*ec9128c9e0
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ec9128c9e0 {
	struct ATslPlayerStateBase* PlayerState; // 0x00(0x08)
	int32 SquadMemberIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerName; // 0x10(0x10)
	int32 Kill; // 0x20(0x04)
	int32 *dc3b296c0d; // 0x24(0x04)
	bool *6fa35c6ea3; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGameMode.*bdb39182c9
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bdb39182c9 {
	struct FName *0085642061; // 0x00(0x08)
	int32 *fbc0f5f682; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.SLBUserPlayData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FSLBUserPlayData : FBaseUserPlayData {
	struct TArray<struct FSLBVaultItem> Vault; // 0x08(0x10)
	struct TArray<struct FTslSLBStageID> BestClearStageDifficulty; // 0x18(0x10)
};

// ScriptStruct TslGameMode.*b9b84ad55c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*b9b84ad55c {
	int32 Kill; // 0x00(0x04)
	int32 *dc3b296c0d; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*bdfbaab468
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*bdfbaab468 {
	enum class ETslSLBInteractionType *25e471a14d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *6f8c527cbe; // 0x04(0x04)
	float *ecfec8fa71; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ATslSLBMissionGeneratorActor* *bc6e10c281; // 0x10(0x08)
	struct ATslSLBExitActor* *221cd9b7be; // 0x18(0x08)
};

// ScriptStruct TslGameMode.*bcfee0378a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*bcfee0378a {
	struct TArray<int32> *687422cd68; // 0x00(0x10)
	struct UMaterialInstance* Material; // 0x10(0x08)
};

// ScriptStruct TslGameMode.*96ca6836ce
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*96ca6836ce {
	enum class ERespawnType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* Class; // 0x08(0x08)
};

// ScriptStruct TslGameMode.TDMUserPlayData
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTDMUserPlayData : FBaseUserPlayData {
	struct TArray<bool> CompressedSavedSpawnkits; // 0x08(0x10)
	struct TArray<struct FString> UsingSpawnKitIDs; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct TslGameMode.*1f80c5cff0
// Size: 0xc8 (Inherited: 0x00)  [layout: KHOP]
struct F*1f80c5cff0 {
	struct F*3dc1c4b815 *9896507f22; // 0x00(0xc8)
};

// ScriptStruct TslGameMode.*3dc1c4b815
// Size: 0xc8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct F*3dc1c4b815 : F*fdab764c85 {
	struct TArray<struct F*4a447933fb> Items; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct TslGameMode.*4a447933fb
// Size: 0x30 (Inherited: 0x0c)  [layout: KHOP]
struct F*4a447933fb : F*60282223b2 {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *1064931426; // 0x10(0x10)
	struct TArray<struct F*34384792be> *fba2bfe862; // 0x20(0x10)
};

// ScriptStruct TslGameMode.*bfe90e17aa
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*bfe90e17aa {
	struct FString *1064931426; // 0x00(0x10)
	struct TArray<struct F*34384792be> *fba2bfe862; // 0x10(0x10)
};

// ScriptStruct TslGameMode.*a0040220aa
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a0040220aa {
	struct TArray<int32> Kills; // 0x00(0x10)
	int32 death; // 0x10(0x04)
	int32 Assist; // 0x14(0x04)
	int32 *11d3f316e6; // 0x18(0x04)
	int32 *55d4b14705; // 0x1c(0x04)
	int32 *35a57be4bc; // 0x20(0x04)
	int32 *bbc5c6fd4e; // 0x24(0x04)
	float *b83e13a7d7; // 0x28(0x04)
	char pad_2C[0xc]; // 0x2c(0x0c)
};

// ScriptStruct TslGameMode.*61fec7f5e8
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*61fec7f5e8 {
	struct TMap<int32, int32> *4e4bb5a557; // 0x00(0x50)
	struct TArray<int32> *f9edf71d1b; // 0x50(0x10)
};

// ScriptStruct TslGameMode.*796caef8f5
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*796caef8f5 {
	struct F*be8dc0c71f *8210ea5518; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct U*96fe947291* *2cc3f2e139; // 0x08(0x08)
};

// ScriptStruct TslGameMode.*be8dc0c71f
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*be8dc0c71f {
	enum class EPrivateWaitingRoomPhase *bc1d3eae5a; // 0x00(0x01)
	enum class EPrivateTrainingRoomPhase *a3c6482dd7; // 0x01(0x01)
	enum class ETrainingPracticeType PracticeType; // 0x02(0x01)
};

// ScriptStruct TslGameMode.*e10171f270
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*e10171f270 {
	float *5fa99fe211; // 0x00(0x04)
	float *4a44d649ae; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*c426f78dc2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c426f78dc2 {
	int32 *267ddf2fc6; // 0x00(0x04)
	int32 *3ed618c63b; // 0x04(0x04)
	int32 *f3d076ae91; // 0x08(0x04)
	int32 *b46a4f55f7; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.TrainingUserPlayData
// Size: 0x2c0 (Inherited: 0x08)  [layout: KHOP]
struct FTrainingUserPlayData : FBaseUserPlayData {
	struct FString SavedEquipmentItemsJsonString; // 0x08(0x10)
	int32 ArenaWinningStreak; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTrainingData AimTrainingData; // 0x20(0x150)
	struct FTrainingData SoundTrainingData; // 0x170(0x150)
};

// ScriptStruct TslGameMode.*24f8bf33a2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*24f8bf33a2 {
	int32 TeleportType; // 0x00(0x04)
	int32 PracticeType; // 0x04(0x04)
	struct FString DestinationActorName; // 0x08(0x10)
};

// ScriptStruct TslGameMode.OneOnOneUserPlayData
// Size: 0x60 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FOneOnOneUserPlayData : FBaseUserPlayData {
	struct TMap<enum class EAccessorySlot, struct FSavedItemInfo> SavedItems; // 0x08(0x50)
	int32 ArenaWinningStreak; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGameMode.SavedItemInfo
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSavedItemInfo {
	struct FString ItemID; // 0x00(0x10)
	struct TArray<struct FString> AttachedItems; // 0x10(0x10)
	int32 ItemCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGameMode.*c61932788e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c61932788e {
	struct UClass* Class; // 0x00(0x08)
	struct FVector2D Size; // 0x08(0x08)
};

// ScriptStruct TslGameMode.*8e4f25ad76
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*8e4f25ad76 {
	int32 HouseID; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector *39ce78bda5; // 0x10(0x0c)
	struct FVector BoxExtent; // 0x1c(0x0c)
	int32 *2968c2c6ba; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*d1fbeb2e4c> *89917408d9; // 0x30(0x10)
	struct TArray<struct FVector> *95a3c484fb; // 0x40(0x10)
};

// ScriptStruct TslGameMode.*d1fbeb2e4c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d1fbeb2e4c {
	int32 *75350041fb; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
};

// ScriptStruct TslGameMode.SLBUIIOverrideColorData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FSLBUIIOverrideColorData {
	struct FName ItemID; // 0x00(0x08)
	struct FLinearColor OverrideColor; // 0x08(0x10)
};

// ScriptStruct TslGameMode.FBREquipableLevel
// Size: 0x10 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FFBREquipableLevel : FTableRowBase {
	int32 Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*45830215d9
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*45830215d9 {
	struct FString *fd8f639818; // 0x00(0x10)
	float *bf7f9acb1d; // 0x10(0x04)
	float *4e933d669c; // 0x14(0x04)
};

// ScriptStruct TslGameMode.BuffIconDisplaySetting
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FBuffIconDisplaySetting {
	enum class EFBRClass ClassType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 SpacerIndex; // 0x04(0x04)
	struct FWeaponIconSetting DefaultWeaponIconSetting; // 0x08(0x30)
	struct TArray<struct FWeaponIconSetting> WeaponIconSettings; // 0x38(0x10)
	struct TArray<struct FBuffIconSetting> IconSettings; // 0x48(0x10)
	struct TArray<struct FAttachToWeaponHudCanvasWidgetSetting> AttachToWeaponHudCanvasWidgetSettings; // 0x58(0x10)
};

// ScriptStruct TslGameMode.AttachToWeaponHudCanvasWidgetSetting
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FAttachToWeaponHudCanvasWidgetSetting {
	struct FName WeaponTag; // 0x00(0x08)
	struct FAnchorData Anchor; // 0x08(0x28)
	bool bShowToSpectator; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UClass* WidgetClass; // 0x38(0x08)
};

// ScriptStruct TslGameMode.BuffIconSetting
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FBuffIconSetting {
	struct UClass* IconWidgetClass; // 0x00(0x08)
	enum class EEquipSlotID EquipSlotID; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 EquipPositionIndex; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 SkillIndex; // 0x18(0x04)
	enum class EBuffCountType CountType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FName GamepadActionName; // 0x20(0x08)
};

// ScriptStruct TslGameMode.WeaponIconSetting
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponIconSetting {
	struct FName WeaponTag; // 0x00(0x08)
	struct FBuffIconSetting IconSetting; // 0x08(0x28)
};

// ScriptStruct TslGameMode.FBRTeamInfoImageData
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FFBRTeamInfoImageData {
	struct UTexture2D* IconBackground; // 0x00(0x20)
	struct UTexture2D* MemberIndexBackground; // 0x20(0x20)
	struct UTexture2D* FullWidgetBackground; // 0x40(0x20)
};

// ScriptStruct TslGameMode.*fc33e05287
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*fc33e05287 {
	int32 *3347361edc; // 0x00(0x04)
};

// ScriptStruct TslGameMode.*67b8f0e85d
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*67b8f0e85d {
	int16 *c3dd72d4bd; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *387695966d; // 0x04(0x04)
	int32 *32aebcf190; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FModTargetInfo *50ccea6799; // 0x10(0x20)
	struct FModTargetInfo *6d67399d05; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct TslGameMode.*db2d183c88
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*db2d183c88 : F*fdab764c85 {
	struct UObject* Owner; // 0xb0(0x08)
	struct TArray<struct F*6fe75b35d1> Items; // 0xb8(0x10)
};

// ScriptStruct TslGameMode.*6fe75b35d1
// Size: 0x14 (Inherited: 0x0c)  [layout: KHOP]
struct F*6fe75b35d1 : F*60282223b2 {
	int32 TeamId; // 0x0c(0x04)
	float Point; // 0x10(0x04)
};

// ScriptStruct TslGameMode.TslSLBActivateObjectEventData
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FTslSLBActivateObjectEventData : FTableRowBase {
	struct FName ActivateEventName; // 0x08(0x08)
	struct TArray<struct FName> ActivateObjectNames; // 0x10(0x10)
};

// ScriptStruct TslGameMode.SLBMissionUIData
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSLBMissionUIData {
	struct FText MissionFormat; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGameMode.*5e5a28681a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*5e5a28681a {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor *0ce1bb52c6; // 0x04(0x10)
	float *2fe02f8f52; // 0x14(0x04)
};

// ScriptStruct TslGameMode.TslTrainingDashboardUIData
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardUIData {
	bool bFirstTime; // 0x00(0x01)
	enum class ETslTrainingDashboardPracticeUIType PracticeType; // 0x01(0x01)
	enum class ETslTrainingDashboardRangeUIType RangeType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FTslTrainingDashboardRecordUIData RecordAimRecent; // 0x08(0x50)
	struct FTslTrainingDashboardRecordUIData RecordAimHighest; // 0x58(0x50)
	struct FTslTrainingDashboardRecordUIData RecordSoundRecent; // 0xa8(0x50)
	struct FTslTrainingDashboardRecordUIData RecordSoundHighest; // 0xf8(0x50)
	struct FTslTrainingDashboardScoreHistoryUIData ScoresHistory; // 0x148(0x20)
};

// ScriptStruct TslGameMode.TslTrainingDashboardScoreHistoryUIData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardScoreHistoryUIData {
	int32 TopScore; // 0x00(0x04)
	int32 MedianScore; // 0x04(0x04)
	float AverageScore; // 0x08(0x04)
	int32 ChangedScore; // 0x0c(0x04)
	struct TArray<int32> HistoryScores; // 0x10(0x10)
};

// ScriptStruct TslGameMode.TslTrainingDashboardRecordUIData
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardRecordUIData {
	int32 Score; // 0x00(0x04)
	int32 KillCount; // 0x04(0x04)
	struct FTslTrainingDashboardRecordAimUIData AimData; // 0x08(0x38)
	struct FTslTrainingDashboardRecordSoundUIData SoundData; // 0x40(0x10)
};

// ScriptStruct TslGameMode.TslTrainingDashboardRecordSoundUIData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardRecordSoundUIData {
	struct FString AverageResponseTime; // 0x00(0x10)
};

// ScriptStruct TslGameMode.TslTrainingDashboardRecordAimUIData
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslTrainingDashboardRecordAimUIData {
	float Accuracy; // 0x00(0x04)
	int32 headshot; // 0x04(0x04)
	struct FText WeaponName; // 0x08(0x18)
	float AccuracyHeadRatio; // 0x20(0x04)
	float AccuracyTorsoRatio; // 0x24(0x04)
	float AccuracyArmRatio; // 0x28(0x04)
	float AccuracyPelvisRatio; // 0x2c(0x04)
	float AccuracyLegRatio; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGameMode.TslTrainingDashboardScoreHistoryChartWidgetCachedDatas
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardScoreHistoryChartWidgetCachedDatas {
	struct FLinearColor BaseLinearColor; // 0x00(0x10)
	enum class ETslTrainingDashboardRangeUIType RangeType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> Scores; // 0x18(0x10)
};

// ScriptStruct TslGameMode.TslTrainingDashboardScoreHistoryChartWidgetSettings
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardScoreHistoryChartWidgetSettings {
	struct FLinearColor EmphasisLinearColor; // 0x00(0x10)
	float ScoreTextMarginY; // 0x10(0x04)
	float ChartPointTopMarginY; // 0x14(0x04)
	float PointRadius; // 0x18(0x04)
	float AnimateSpeed; // 0x1c(0x04)
	float LastChartPointImageRadiusRatio; // 0x20(0x04)
};

// ScriptStruct TslGameMode.TslTrainingDashboardScoreHistoryWidgetSettings
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardScoreHistoryWidgetSettings {
	struct FSlateColor SlateColorTextAim; // 0x00(0x28)
	struct FSlateColor SlateColorTextSound; // 0x28(0x28)
	struct FLinearColor LinearColorChartAim; // 0x50(0x10)
	struct FLinearColor LinearColorChartSound; // 0x60(0x10)
};

// ScriptStruct TslGameMode.TslTrainingDashboardWidgetDatas
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardWidgetDatas {
	struct FTslTrainingDashboardUIData TrainingDashboardData; // 0x00(0x168)
};

// ScriptStruct TslGameMode.TslTrainingDashboardWidgetSettings
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingDashboardWidgetSettings {
	struct FText DetailsTitleTextAim; // 0x00(0x18)
	struct FText DetailsTitleTextSound; // 0x18(0x18)
	float KeypadBHoldTime; // 0x30(0x04)
	float KeypadXHoldTime; // 0x34(0x04)
};

// ScriptStruct TslGameMode.TslTrainingResultArray
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingResultArray {
	struct TArray<struct FTslTrainingResultInfo> TrainingResults; // 0x00(0x10)
};

// ScriptStruct TslGameMode.TslTrainingResultInfo
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FTslTrainingResultInfo {
	enum class ETrainingScoreType TrainingScoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ScoreTitleText; // 0x08(0x18)
	struct UTexture2D* ScoreImageTexture; // 0x20(0x08)
};

// ScriptStruct TslGameMode.PlayerInfo
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPlayerInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGameMode.TslTrainingRoomSoundDBDataRow
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FTslTrainingRoomSoundDBDataRow : FTableRowBase {
	int32 TrainingSoundID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SoundOwnerWeaponName; // 0x10(0x18)
	int32 MinAudibleRangeMeter; // 0x28(0x04)
	int32 MaxAudibleRangeMeter; // 0x2c(0x04)
	float MinSoundPlayDelay; // 0x30(0x04)
	float MaxSoundPlayDelay; // 0x34(0x04)
	float MinSoundPlayContinuousPeriod; // 0x38(0x04)
	float MaxSoundPlayContinuousPeriod; // 0x3c(0x04)
	float TimeBetweenShots; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UTexture* WeaponIcon; // 0x48(0x08)
	struct UAkAudioEvent* TrainingSound_Fire_LongTail; // 0x50(0x08)
};

// ScriptStruct TslGameMode.TrainingToolTipDataStruct
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FTrainingToolTipDataStruct {
	enum class ETslTrainingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TypeTipDescription; // 0x08(0x18)
	struct UTexture2D* TypeTexture; // 0x20(0x08)
	struct UTexture2D* BackGroundTexture; // 0x28(0x08)
};

// ScriptStruct TslGameMode.*d143774809
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*d143774809 {
	int32 ClearScore; // 0x00(0x04)
	int32 BonusScore; // 0x04(0x04)
	int32 PenaltyScore; // 0x08(0x04)
	int32 TimeAttackScore; // 0x0c(0x04)
	int32 TotalScore; // 0x10(0x04)
	enum class ETutorialRank Rank; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float ElapsedTimeSec; // 0x18(0x04)
	int32 KillCount; // 0x1c(0x04)
	float DamageDealt; // 0x20(0x04)
};

// ScriptStruct TslGameMode.*8873abd6a2
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*8873abd6a2 {
	enum class ETutorialRank Rank; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 MinScore; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*017556492c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*017556492c {
	float MaxTimeSec; // 0x00(0x04)
	int32 Score; // 0x04(0x04)
};

// ScriptStruct TslGameMode.*51511ea8f9
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*51511ea8f9 {
	struct FName ChapterID; // 0x00(0x08)
	struct TArray<struct F*086e532d7e> *8ae9b67efd; // 0x08(0x10)
	int32 *9814696863; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGameMode.*086e532d7e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*086e532d7e {
	struct FName StepID; // 0x00(0x08)
	enum class ETutorialStepResult Status; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 *903f728aab; // 0x0c(0x04)
	int32 *38836afd9f; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGameMode.*82e5e013d5
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*82e5e013d5 {
	struct FVector2D *0fe2e99d71; // 0x00(0x08)
	float *2c9d5c672a; // 0x08(0x04)
	float *b7d8e4fd0d; // 0x0c(0x04)
	float *11031595dd; // 0x10(0x04)
	float *c334d8c80e; // 0x14(0x04)
	float *5806d1adf3; // 0x18(0x04)
};

// ScriptStruct TslGameMode.*d63d839c5a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d63d839c5a {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.*4972dc0fb7
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*4972dc0fb7 {
	enum class ETutorialRank Rank; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Score; // 0x04(0x04)
	int32 CompletionPoints; // 0x08(0x04)
	int32 PerformancePoints; // 0x0c(0x04)
	float TotalPlayTime; // 0x10(0x04)
	int32 Kills; // 0x14(0x04)
	int32 Damage; // 0x18(0x04)
};

// ScriptStruct TslGameMode.*c9f299309b
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c9f299309b {
	bool bRandomMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName VoiceId; // 0x08(0x08)
	struct FName *348619e083; // 0x10(0x08)
	struct FName VoiceGroup; // 0x18(0x08)
	struct FName *c1c2b1c09c; // 0x20(0x08)
	enum class ETutorialVoicePlaybackMode *6ca1c8fcce; // 0x28(0x01)
	bool *a449ac04f5; // 0x29(0x01)
	uint16 *e796ddda37; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGameMode.*55d02b72c8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*55d02b72c8 {
	int32 *4c375e6031; // 0x00(0x04)
	int32 *e52964fc96; // 0x04(0x04)
	int32 *6f810b7bba; // 0x08(0x04)
	enum class ETutorialVoicePlaybackMode *6ca1c8fcce; // 0x0c(0x01)
	bool *a449ac04f5; // 0x0d(0x01)
	uint16 *e796ddda37; // 0x0e(0x02)
};

// ScriptStruct TslGameMode.*6092678c09
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*6092678c09 : FTableRowBase {
	struct FName VoiceId; // 0x08(0x08)
	struct FString *d15d16b5cd; // 0x10(0x10)
	enum class ETutorialVoiceSegmentType *9b8c843552; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName VoiceGroup; // 0x28(0x08)
};

// ScriptStruct TslGameMode.*1a3a67972a
// Size: 0xc0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1a3a67972a {
	struct TArray<struct FName> *493d615a79; // 0x00(0x10)
	struct TMap<struct FName, int32> Equipment; // 0x10(0x50)
	enum class ETutorialEnemyDropType *b45c06d2e6; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TMap<struct FName, int32> *6c78012e96; // 0x68(0x50)
	bool *eb506d510d; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct TslGameMode.TutorialUserPlayData
// Size: 0x10 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTutorialUserPlayData : FBaseUserPlayData {
	bool bClearTutorial; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGameMode.*de2402ca8b
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*de2402ca8b {
	struct FName *978b5bd6ef; // 0x00(0x08)
	struct UClass* *3e2ef4b76f; // 0x08(0x08)
	struct TArray<bool> *f31954e2c3; // 0x10(0x10)
};

// ScriptStruct TslGameMode.TutorialWidgetAppearance
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FTutorialWidgetAppearance {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float WidthOverride; // 0x20(0x04)
};

// ScriptStruct TslGameMode.BombModeCoinDataTableRow
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FBombModeCoinDataTableRow : FTableRowBase {
	enum class ECoinTakeType CoinTakeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 BannedRoundAttributes; // 0x0c(0x04)
	int32 TakeValue; // 0x10(0x04)
	bool bOverwrite; // 0x14(0x01)
	bool bUseCustomOverride; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct FBombCoinTakeOverride> CustomOverrideValues; // 0x18(0x10)
};

// ScriptStruct TslGameMode.BombCoinTakeOverride
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FBombCoinTakeOverride {
	int32 OverrideIndex; // 0x00(0x04)
	int32 OverrideValue; // 0x04(0x04)
};

// ScriptStruct TslGameMode.BombModeItemRuleDataTableRow
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FBombModeItemRuleDataTableRow : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	bool bEssential; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 CarryLimit; // 0x14(0x04)
	enum class EBombItemCategory Category; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 SortID; // 0x1c(0x04)
	bool Purchasable; // 0x20(0x01)
	bool bGiveItemAfterRestart; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	int32 Price; // 0x24(0x04)
	struct TArray<struct FName> WeaponAttachments; // 0x28(0x10)
	struct FBombModeItemRuleData_Ammo WeaponAmmoData; // 0x38(0x10)
	enum class EBombScopeInfo ScopeInfo; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGameMode.BombModeItemRuleData_Ammo
// Size: 0x10 (Inherited: 0x10)  [layout: KHOP]
struct FBombModeItemRuleData_Ammo : FBombModeItemRuleData_ItemInfo {
};

// ScriptStruct TslGameMode.BombModeItemRuleData_ItemInfo
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBombModeItemRuleData_ItemInfo {
	struct FName ItemID; // 0x00(0x08)
	int32 Stack; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGameMode.BombModeItemRuleData_Essential
// Size: 0x20 (Inherited: 0x10)  [layout: LECH - offset chi la uoc luong]
struct FBombModeItemRuleData_Essential : FBombModeItemRuleData_ItemInfo {
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGameMode.ModModeFeatureRow
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FModModeFeatureRow : FTableRowBase {
	struct FName *7cb3c1b619; // 0x08(0x08)
	struct UClass* *5ebb934444; // 0x10(0x20)
};

// ScriptStruct TslGameMode.*38debbbfb9
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*38debbbfb9 : FTableRowBase {
	struct FText StringKey; // 0x08(0x18)
};

// ScriptStruct TslGameMode.IntenseBattleRoyaleRandomAreaDataTableRow
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FIntenseBattleRoyaleRandomAreaDataTableRow : FTableRowBase {
	struct FString MapName; // 0x08(0x10)
	float InitialRadius; // 0x18(0x04)
	float InitialSpread; // 0x1c(0x04)
	float LandRatio; // 0x20(0x04)
	int32 AttachmentSupplyBoxCount; // 0x24(0x04)
	int32 WeaponSupplyBoxCount; // 0x28(0x04)
	int32 RareSupplyBoxCount; // 0x2c(0x04)
	float SupplyBoxMinDistance; // 0x30(0x04)
	int32 VehicleSpawnCount; // 0x34(0x04)
	float RoadVehicleRatio; // 0x38(0x04)
	float RandomVehicleRatio; // 0x3c(0x04)
};

