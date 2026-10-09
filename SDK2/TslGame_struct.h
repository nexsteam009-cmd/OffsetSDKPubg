// Enum TslGame.EBreathType
enum class EBreathType : uint8 {
	Apnea,
	ADS,
	EBreathType_MAX,
};

// Enum TslGame.EPickupAnimType
enum class EPickupAnimType : uint8 {
	None,
	EPickupAnimType_MAX,
};

// Enum TslGame.EHitDirection
enum class EHitDirection : uint8 {
	Hit_Front,
	Hit_Back,
	Hit_Left,
	Hit_Right,
	Hit_MAX,
};

// Enum TslGame.ECastAnim
enum class ECastAnim : uint8 {
	None,
	Door,
	UnlockDoor,
	Custom,
	ECastAnim_MAX,
};

// Enum TslGame.EDoorState
enum class EDoorState : uint8 {
	Closed,
	Closing,
	Opened,
	Opening,
	EDoorState_MAX,
};

// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID : uint8 {
	None,
	Muzzle,
	LowerRail,
	UpperRail,
	Magazine,
	Stock,
	Angled,
	TacPack1,
	TacPack2,
	TacPack3,
	TacPack4,
	MAX,
	EWeaponAttachmentSlotID_MAX,
};

// Enum TslGame.*f8ce4dec69
enum class *f8ce4dec69 : uint8 {
	*96e4a8c042,
	*b48b10b112,
	*dc1956db52,
	*f8ce4dec69_MAX,
};

// Enum TslGame.ESystemMessagePriority
enum class ESystemMessagePriority : uint8 {
	VeryLow,
	Low,
	Normal,
	High,
	VeryHigh,
	ESystemMessagePriority_MAX,
};

// Enum TslGame.ESystemMessageType
enum class ESystemMessageType : uint8 {
	Debug,
	Notify,
	Warning,
	Error,
	Important,
	NotifyCommand,
	ESystemMessageType_MAX,
};

// Enum TslGame.ESkinCategory
enum class ESkinCategory : uint8 {
	Skin_None,
	Skin_Equipment,
	Skin_Parachute,
	Skin_Weapon,
	Skin_MeleeWeapon,
	Skin_Vehicle,
	Skin_Throwable,
	Skin_Castable,
	Skin_MAX,
};

// Enum TslGame.EOutGamePlatformProvider
enum class EOutGamePlatformProvider : uint8 {
	Unknown,
	Bro,
	PcSteam,
	PcDmm,
	PcMailRu,
	PcKakao,
	PcTencent,
	ConsoleXbox,
	ConsolePsn,
	PcLiteGarena,
	PcLiteGlobalAccount,
	PcLiteGlobalAccountJp,
	ConsoleStadia,
	PcEpic,
	AI,
	Max,
	EOutGamePlatformProvider_MAX,
};

// Enum TslGame.EDamageReason
enum class EDamageReason : uint8 {
	None,
	HeadShot,
	TorsoShot,
	PelvisShot,
	ArmShot,
	LegShot,
	NonSpecific,
	Blocked,
	CKO,
	EDamageReason_MAX,
};

// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory : uint8 {
	Damage_None,
	Damage_Instant,
	Damage_Gun,
	Damage_Melee,
	Damage_Punch,
	Damage_ZombiePunch,
	Damage_DBNO,
	Damage_BlueZone,
	Damage_VehicleHit,
	Damage_VehicleCrashHit,
	Damage_Molotov,
	Damage_Explosion,
	Damage_Explosion_Grenade,
	Damage_Explosion_RedZone,
	Damage_Explosion_Vehicle,
	Damage_Explosion_PlantedTimeBomb,
	Damage_Instant_Fall,
	Damage_Drown,
	Damage_BleedOut,
	Damage_Explosion_JerryCan,
	Damage_MeleeThrow,
	Damage_Explosion_C4,
	Damage_Explosion_StickyBomb,
	Damage_Explosion_Breach,
	Damage_Explosion_PanzerFaustWarhead,
	Damage_Explosion_PanzerFaustWarheadVehicleArmorPenetration,
	Damage_Explosion_PanzerFaustBackBlast,
	Damage_Explosion_Mortar,
	Damage_Explosion_BlackZone,
	Damage_Explosion_Meteor,
	Damage_TrainHit,
	Damage_Explosion_PropaneTank,
	Damage_LootTruckHit,
	Damage_Explosion_LootTruck,
	Damage_ShipHit,
	Damage_Lava,
	Damage_KillTruckHit,
	Damage_KillTruckTurret,
	Damage_HelicopterHit,
	Damage_Explosion_Aircraft,
	Damage_BlueZoneGrenade,
	Damage_FBRMolotov,
	Damage_Monster,
	Damage_Ability,
	Damage_Rotor,
	Damage_MotorGlider,
	Damage_Gun_Penetrate_BRDM,
	Damage_Explosion_GasPump,
	Damage_Blizzard,
	Damage_SandStorm,
	Damage_SatelliteCrash,
	Damage_SatelliteCrashGround,
	Damage_BlueZoneModule,
	Damage_CableCarHit,
	Damage_DropStructHit,
	Damage_Poision,
	Damage_ZombieDash,
	Damage_StunGun,
	Damage_EventWeapon,
	Damage_SKBD_NormalToilet,
	Damage_SKBD_BossToilet,
	Damage_SKBD_LaserLine,
	Damage_SKBD_LaserSemiCircle,
	Damage_SKBD_AOEBeneath,
	Damage_SKBD_AOEInstantKill,
	Damage_SKBD_FireDebuff,
	Damage_BlueZoneGL,
	Damage_CarePackageDropHit,
	Damage_CKO,
	Damage_Kick,
	Damage_MAX,
};

// Enum TslGame.*a336d8d7cb
enum class *a336d8d7cb : uint8 {
	*bc6a3b46ee,
	*007686116e,
	*b42c6c9e8b,
	*a336d8d7cb_MAX,
};

// Enum TslGame.ESkydiveState
enum class ESkydiveState : uint8 {
	Skydive_None,
	Skydive_Freefall,
	Skydive_ParachuteDeploying,
	Skydive_ParachuteDeployed,
	Skydive_ParachuteCollapsing,
	Skydive_MAX,
};

// Enum TslGame.EWuCompetitiveRankLobbyTier
enum class EWuCompetitiveRankLobbyTier : uint8 {
	NONE,
	UNRANKED,
	BRONZE,
	SILVER,
	GOLD,
	PLATINUM,
	CRYSTAL,
	DIAMOND,
	MASTER,
	SURVIVOR,
	EWuCompetitiveRankLobbyTier_MAX,
};

// Enum TslGame.EWuRankUnplayableReason
enum class EWuRankUnplayableReason : uint8 {
	NONE,
	PENALTY,
	SECOND_PASSWORD,
	RESTRICTED,
	EWuRankUnplayableReason_MAX,
};

// Enum TslGame.ETargetingType
enum class ETargetingType : uint8 {
	Targeting_None,
	Targeting_Aiming,
	Targeting_Scoping,
	Targeting_MAX,
};

// Enum TslGame.EVoiceInputMode
enum class EVoiceInputMode : uint8 {
	OpenMic,
	PushToTalk,
	Toggle,
	Disable,
	MAX,
	EVoiceInputMode_MAX,
};

// Enum TslGame.ETslOvercastAction
enum class ETslOvercastAction : uint8 {
	Initialized,
	Prolonged,
	CreateThunder,
	ETslOvercastAction_MAX,
};

// Enum TslGame.EQualityType
enum class EQualityType : uint8 {
	EMainQuality,
	EViewDistanceQuality,
	EShadowQuality,
	EAntiAliasingQuality,
	ETextureQuality,
	EVisualEffectQuality,
	EPostProcessingQuality,
	EFoliageQuality,
	EQualityType_MAX,
};

// Enum TslGame.ETslAIPlayerType
enum class ETslAIPlayerType : uint8 {
	HumanPlayer,
	AITypeNone,
	CommonAI,
	PillarAI,
	DummyAI,
	ZombieAI,
	MonsterAI,
	UltronAI,
	ScriptBotAI,
	MarketAI,
	ChickenManAI,
	DuoBotAI,
	ETslAIPlayerType_MAX,
};

// Enum TslGame.ESubjectToReport
enum class ESubjectToReport : uint8 {
	None,
	Killer,
	Spectating_Player,
	Replay_Player,
	Team_Member,
	OtherTeam_Members,
	Assistant,
	DBNOCauser,
	ESubjectToReport_MAX,
};

// Enum TslGame.EEquipSlotID
enum class EEquipSlotID : uint8 {
	Head,
	Hat,
	Eyes,
	Mask,
	Ghillie,
	Torso,
	TorsoArmor,
	Outer,
	Backpack,
	Hands,
	Legs,
	Feet,
	Belt,
	Special01,
	Special02,
	WeaponPrimary,
	WeaponSecondary,
	WeaponMelee,
	WeaponThrowable,
	Bluechip,
	MaxOrNone,
	EEquipSlotID_MAX,
};

// Enum TslGame.*912e68b3b1
enum class *912e68b3b1 : uint8 {
	*9b2269a4e4,
	*3f1cfd1333,
	*c423c59790,
	*251cf0c0d6,
	*4d69d7c4ed,
	*067c672274,
	*1f559ba8c3,
	*12eb1323e3,
	*912e68b3b1_MAX,
};

// Enum TslGame.ETirePunctureReason
enum class ETirePunctureReason : uint8 {
	Shot,
	Environment,
	Explosion,
	PanzerFaustExplosion,
	SkipFX,
	ManualRemoval,
	Other,
	ETirePunctureReason_MAX,
};

// Enum TslGame.*04b8dfa1fd
enum class *04b8dfa1fd : uint8 {
	*37f864243d,
	*7d6c58d326,
	*14b5f4254a,
	*2b20fbc7dc,
	*0c44f41835,
	*dd8a7a658a,
	*4444aa6fae,
	*04b8dfa1fd_MAX,
};

// Enum TslGame.EDistanceBasedEvent
enum class EDistanceBasedEvent : uint8 {
	Undefined,
	Bullet_Hitted_LivingThings,
	Bullet_Hitted_Others,
	Weapon_Gun_Firing,
	Weapon_Grenade_Bounce,
	Weapon_Grenade_Explosion,
	Weapon_Grenade_ExplosionSound,
	Vehicle_Exhausting,
	Vehicle_Crash,
	Character_FootStep,
	Character_Landing,
	MAX,
	EDistanceBasedEvent_MAX,
};

// Enum TslGame.ETslWorldMapInfoTabType
enum class ETslWorldMapInfoTabType : uint8 {
	None,
	Map,
	Mission,
	MatchLog,
	Max,
	ETslWorldMapInfoTabType_MAX,
};

// Enum TslGame.EPopupStyle
enum class EPopupStyle : uint8 {
	Ok_Cancel,
	Ok,
	Yes_No,
	Controller_KeyboardMouse,
	EPopupStyle_MAX,
};

// Enum TslGame.EVoiceChannelForcing
enum class EVoiceChannelForcing : uint8 {
	NotDefined,
	ToGlobal,
	ToTeam,
	ToNone,
	EVoiceChannelForcing_MAX,
};

// Enum TslGame.ECastableItemType
enum class ECastableItemType : uint8 {
	None,
	Bandage,
	FirstAid,
	Medkit,
	BattleReadyKit,
	EnergyDrink,
	Painkiller,
	Adrenaline,
	GasCan,
	Key,
	EmergencyPickup,
	SelfRevive,
	Ascender,
	RevivalTransmitter,
	TacticalGear,
	Bicycle,
	SkinVehicle,
	Buff,
	RubberBoat,
	AccessCard,
	ECastableItemType_MAX,
};

// Enum TslGame.EItemRequestType
enum class EItemRequestType : uint8 {
	None,
	Heal,
	Ammo,
	EItemRequestType_MAX,
};

// Enum TslGame.ESpecialZoneAdditionalEffect
enum class ESpecialZoneAdditionalEffect : uint8 {
	RemoveFireAndSmoke,
	DeactivateElecWorldObject,
	DeactivateReticle,
	DeactivateVehicle,
	ESpecialZoneAdditionalEffect_MAX,
};

// Enum TslGame.ERevivalMethod
enum class ERevivalMethod : uint8 {
	None,
	BluechipTower,
	RevivalTransmitter,
	Cheat,
	ERevivalMethod_MAX,
};

// Enum TslGame.ETslMapName
enum class ETslMapName : uint8 {
	Other,
	Baltic,
	Desert,
	Savage,
	DihorOtok,
	Summerland,
	Tiger,
	Chimera,
	Heaven,
	Kiki,
	Neon,
	Erangel,
	ETslMapName_MAX,
};

// Enum TslGame.EAscenderSettlePoint
enum class EAscenderSettlePoint : uint8 {
	INVALID,
	RopeAttachPoint_LOWER,
	RopeAttachPoint_UPPER,
	RopeAttachPoint_START,
	EAscenderSettlePoint_MAX,
};

// Enum TslGame.ERequestPartyState
enum class ERequestPartyState : uint8 {
	Wait,
	Accept,
	Decline,
	ERequestPartyState_MAX,
};

// Enum TslGame.EBuffPropertyType
enum class EBuffPropertyType : uint8 {
	CoolTime,
	MeleeDamageRatio,
	OtherDamageRatio,
	AllDamageRatio,
	MeleeAttackDamageRatio,
	OtherAttackDamageRatio,
	MeleeBehindAttackDamageRatio,
	LandingDamageRatio,
	GetBoostOnDeal,
	MovementSpeedModifier,
	OnFootSpeedAccelModifier,
	JumpVelocityModifier,
	MaxHpModifier,
	DecreaseRevivalCastTime,
	ReloadingSpeedModifier,
	MultiProperty,
	RecoilModifier,
	ReduceGaugeRatio,
	DebuffResistance,
	KnockBackRatioBonus,
	KnockDownRatioBonus,
	KnockDownTimeModifier,
	EBuffPropertyType_MAX,
};

// Enum TslGame.EAutoSpectatePriority
enum class EAutoSpectatePriority : uint8 {
	None,
	Vehicle,
	Distance,
	Combat,
	EAutoSpectatePriority_MAX,
};

// Enum TslGame.EFBRClass
enum class EFBRClass : uint8 {
	WARRIOR,
	RANGER,
	WIZARD,
	PALADIN,
	EFBRClass_MAX,
};

// Enum TslGame.EPartnerLevel
enum class EPartnerLevel : uint8 {
	None,
	Normal,
	Lead,
	EPartnerLevel_MAX,
};

// Enum TslGame.ELeagueMatchStatistic
enum class ELeagueMatchStatistic : uint8 {
	Kill,
	Damage,
	Assist,
	ELeagueMatchStatistic_MAX,
};

// Enum TslGame.EBlueZoneShape
enum class EBlueZoneShape : uint8 {
	None,
	Circle,
	Rectangle,
	EBlueZoneShape_MAX,
};

// Enum TslGame.EGameZoneType
enum class EGameZoneType : uint8 {
	SafeZone,
	PlayZone,
	BlueZone,
	RedZone,
	BlackZone,
	EGameZoneType_MAX,
};

// Enum TslGame.ERespawnType
enum class ERespawnType : uint8 {
	Airborne,
	DeadPoint,
	StartPoint,
	Selectable,
	RandomPoint,
	CheckPoint,
	ERespawnType_MAX,
};

// Enum TslGame.EPlatoonTeam
enum class EPlatoonTeam : uint8 {
	None,
	Blue,
	Red,
	EPlatoonTeam_MAX,
};

// Enum TslGame.EPrivateTrainingRoomType
enum class EPrivateTrainingRoomType : uint8 {
	IndoorRange,
	PracticalTrainingRoom,
	None,
	EPrivateTrainingRoomType_MAX,
};

// Enum TslGame.*8f7eb97495
enum class *8f7eb97495 : uint8 {
	*7017a6d0d3,
	*87f8edf121,
	*b14b3548df,
	*8f7eb97495_MAX,
};

// Enum TslGame.EUserRank
enum class EUserRank : uint8 {
	ElementaryRank,
	IntermediateRank,
	HighRank,
	ExpertRank,
	EUserRank_MAX,
};

// Enum TslGame.EWeatherChange
enum class EWeatherChange : uint8 {
	NoChange,
	Rainy,
	Foggy,
	EWeatherChange_MAX,
};

// Enum TslGame.*28f9ca5654
enum class *28f9ca5654 : uint8 {
	*560107b104,
	*7f0a846594,
	*a8feedfaf8,
	*f413e8f366,
	*36c335b2a1,
	*30555c36fe,
	*28f9ca5654_MAX,
};

// Enum TslGame.EMinimapColorType
enum class EMinimapColorType : uint8 {
	DESATURATED,
	SATURATED,
	EMinimapColorType_MAX,
};

// Enum TslGame.EServerStatType
enum class EServerStatType : uint8 {
	UE,
	NET,
	FRAMEPRO,
	EServerStatType_MAX,
};

// Enum TslGame.*e0e9c5996a
enum class *e0e9c5996a : uint8 {
	*59ccaa4000,
	*89cf36284b,
	*23d082da75,
	*e0e9c5996a_MAX,
};

// Enum TslGame.EMarketCategoryType
enum class EMarketCategoryType : uint8 {
	None,
	Store,
	RandomItem,
	Weapon,
	GarageOpen,
	Selling,
	EMarketCategoryType_MAX,
};

// Enum TslGame.EStoreCategory
enum class EStoreCategory : uint8 {
	None,
	Equipment,
	Attachment,
	ETC,
	Intermediate,
	HighLevel,
	AR,
	DMR,
	SR,
	SG,
	SMG,
	CarePackage,
	CarePackage2,
	EStoreCategory_MAX,
};

// Enum TslGame.EMarketLevel
enum class EMarketLevel : uint8 {
	None,
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	EMarketLevel_MAX,
};

// Enum TslGame.ERedZoneGenerateType
enum class ERedZoneGenerateType : uint8 {
	None,
	Uniform_Distribution,
	Inside,
	Ringtaw,
	Outsider,
	RingtawOrOutsider,
	InsideOrRingtawOrOutsider,
	ERedZoneGenerateType_MAX,
};

// Enum TslGame.EReadyToPlayState
enum class EReadyToPlayState : uint8 {
	AllFinished,
	OnPreLoadMap,
	OnPostLoadMap,
	CheckMapLoadFinished,
	NotMapFullyLoaded,
	CheckPreloadingMap,
	LoadMapRequested,
	EReadyToPlayState_MAX,
};

// Enum TslGame.EActionType
enum class EActionType : uint8 {
	Action,
	Axis,
	Action_Combo,
	EActionType_MAX,
};

// Enum TslGame.EEmergencyPickupState
enum class EEmergencyPickupState : uint8 {
	None,
	Prepare,
	Aircraft,
	EEmergencyPickupState_MAX,
};

// Enum TslGame.*c591bd99e6
enum class *c591bd99e6 : uint8 {
	*33a2ec7e94,
	*ade6b70435,
	*dd19b05c20,
	*a6434632ee,
	*e3696ea432,
	*c591bd99e6_MAX,
};

// Enum TslGame.EGamepadInputResponseTypes
enum class EGamepadInputResponseTypes : uint8 {
	Pressed,
	Released,
	Tap,
	Hold,
	DoubleTap,
	EGamepadInputResponseTypes_MAX,
};

// Enum TslGame.EGamepadPresets
enum class EGamepadPresets : uint8 {
	ControllerTypeA,
	ControllerTypeB,
	ControllerTypeC,
	CustomType,
	Max,
	EGamepadPresets_MAX,
};

// Enum TslGame.ETslInputModes
enum class ETslInputModes : uint8 {
	Toggle,
	Hold,
	DoubleTap,
	ETslInputModes_MAX,
};

// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay : uint8 {
	Replay,
	Killcam,
	KeyGuide,
	EGameplayClientReplay_MAX,
};

// Enum TslGame.*b066511d04
enum class *b066511d04 : uint8 {
	*a8e6a962fe,
	*bc46e13770,
	*b066511d04_MAX,
};

// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions : uint8 {
	Crouch,
	Prone,
	Walk,
	Sprint,
	HoldRotation,
	HoldBreath,
	Peek,
	Map,
	ADS,
	Aim,
	HoldAngled,
	Inventory,
	MinimapExpand,
	ThrowableItemWheel,
	HealItemWheel,
	RadioMessageWheel,
	ActionWheel,
	EInputModeSettingActions_MAX,
};

// Enum TslGame.*4ef20c47a6
enum class *4ef20c47a6 : uint8 {
	*b8e9e076bb,
	*1d7fc7f0e8,
	*c636fb2d21,
	*4ef20c47a6_MAX,
};

// Enum TslGame.*0b1d2be749
enum class *0b1d2be749 : uint8 {
	*438098d0e6,
	*443b33e3fb,
	*ce35173bd3,
	*31a14e9ca2,
	*806ddec6c9,
	*883f81cb2a,
	*0b1d2be749_MAX,
};

// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode : uint8 {
	FixedCamera,
	FreeCamera,
	PlayerCamera,
	FollowCamera,
	EObserverCameraMode_MAX,
};

// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType : uint8 {
	None,
	FromBeginning,
	AfterDeath,
	AfterExtermination,
	EagleEye,
	EObserverAuthorityType_MAX,
};

// Enum TslGame.EGameModeType
enum class EGameModeType : uint8 {
	BattleRoyale,
	War,
	TDM,
	Training,
	ESports,
	AtoZTutorial,
	IntenseBattleRoyale,
	Bomb,
	SLB,
	MOD,
	SKBD,
	PropHunt,
	BinarySpot,
	HeistRoyale,
	SDM,
	Tutorial,
	None,
	EGameModeType_MAX,
};

// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel : uint8 {
	Default,
	Low,
	Middle,
	High,
	ENearClippingLevel_MAX,
};

// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType : uint8 {
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	GroupE,
	GroupF,
	GroupG,
	GroupH,
	GroupI,
	GroupJ,
	GroupK,
	GroupL,
	GroupM,
	GroupN,
	GroupO,
	GroupP,
	GroupQ,
	GroupR,
	GroupS,
	GroupT,
	GroupU,
	GroupV,
	GroupW,
	GroupX,
	GroupY,
	GroupZ,
	MAX,
	EThingSpotGroupType_MAX,
};

// Enum TslGame.EMapMarkerGroupType
enum class EMapMarkerGroupType : uint8 {
	General,
	Loot,
	MAX,
	EMapMarkerGroupType_MAX,
};

// Enum TslGame.EMarkerType
enum class EMarkerType : uint8 {
	Normal,
	Attack,
	Danger,
	Defend,
	Loot,
	Farming,
	Vehicle,
	Trap,
	EMarkerType_MAX,
};

// Enum TslGame.EColorBlindType
enum class EColorBlindType : uint8 {
	Normal,
	Deuteranopia,
	Protanopia,
	Tritanopia,
	EColorBlindType_MAX,
};

// Enum TslGame.ECrosshairWeaponGroup
enum class ECrosshairWeaponGroup : uint8 {
	Rifle,
	Shotgun,
	Pistol,
	Throwable,
	Max,
	ECrosshairWeaponGroup_MAX,
};

// Enum TslGame.EFrameRateLimitType
enum class EFrameRateLimitType : uint8 {
	Unlimited,
	Fixed_31,
	Fixed_61,
	Customizable,
	DisplayBased,
	EFrameRateLimitType_MAX,
};

// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour : uint8 {
	FpsAndTps,
	FpsOnly,
	TpsOnly,
	ECameraViewBehaviour_MAX,
};

// Enum TslGame.*2ee55b9333
enum class *2ee55b9333 : uint8 {
	*e1c723ef42,
	*4860639872,
	*398b82329c,
	*2ee55b9333_MAX,
};

// Enum TslGame.EMatchStartType
enum class EMatchStartType : uint8 {
	Normal,
	Airborne,
	Monster,
	EMatchStartType_MAX,
};

// Enum TslGame.ETslDestructibleObjectType
enum class ETslDestructibleObjectType : uint8 {
	None,
	JerryCan,
	BulletproofShield,
	Window,
	Door,
	Fence,
	Hay,
	Camera,
	Bamboo,
	Helmet,
	Vehicle,
	Wheel,
	Land,
	BirdCage,
	JukeBox,
	ETslDestructibleObjectType_MAX,
};

// Enum TslGame.ETslInputDeviceTypeBranch_BPOnly
enum class ETslInputDeviceTypeBranch_BPOnly : uint8 {
	KeyboardMouse,
	XboxGamepad,
	PS4Gamepad,
	SwitchGamepad,
	PS5Gamepad,
	ETslInputDeviceTypeBranch_MAX,
};

// Enum TslGame.ETslInputDeviceGroupBranch_BPOnly
enum class ETslInputDeviceGroupBranch_BPOnly : uint8 {
	KeyboardMouse,
	Gamepad,
	ETslInputDeviceGroupBranch_MAX,
};

// Enum TslGame.ETslPlatformTypeBranch_BPOnly
enum class ETslPlatformTypeBranch_BPOnly : uint8 {
	PC,
	Xbox,
	PS4,
	PS5,
	Invalid,
	ETslPlatformTypeBranch_MAX,
};

// Enum TslGame.ETslPlatformGroupBranch_BPOnly
enum class ETslPlatformGroupBranch_BPOnly : uint8 {
	PC,
	Console,
	ETslPlatformGroupBranch_MAX,
};

// Enum TslGame.EKickProcess
enum class EKickProcess : uint8 {
	Disconnect,
	Shutdown,
	ShutdownIn10Sec,
	DuplicatedLogin,
	EKickProcess_MAX,
};

// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType : uint8 {
	Default,
	Character,
	Vehicle,
	Wheel,
	DestructibleActor,
	ExplosiveItem,
	DummyAI,
	EDamageVictimActorType_MAX,
};

// Enum TslGame.ESkinMeshParamerType
enum class ESkinMeshParamerType : uint8 {
	None,
	GunAiming,
	GunScoping,
	ESkinMeshParamerType_MAX,
};

// Enum TslGame.*0a3753fa29
enum class *0a3753fa29 : uint8 {
	*ea03b0b19e,
	*dff20f54af,
	*8afd4fd8ae,
	*9bd52a2f5a,
	*78e9acf21c,
	*0a3753fa29_MAX,
};

// Enum TslGame.ESkinMeshType
enum class ESkinMeshType : uint8 {
	SkeletalMesh,
	AsyncStaticMesh,
	StaticMesh,
	ESkinMeshType_MAX,
};

// Enum TslGame.EVehicleSkinCategory
enum class EVehicleSkinCategory : uint8 {
	None,
	FourSeaterSUV,
	FourSeaterSedan,
	TwoSeaterSportsCar,
	TwoSeaterMotorbike,
	OneSeaterBicycle,
	EVehicleSkinCategory_MAX,
};

// Enum TslGame.EFiremode
enum class EFiremode : uint8 {
	None,
	FullAuto,
	ThreeRoundBurst,
	TwoRoundBurst,
	SemiAuto,
	Single,
	FullAutoFast,
	FullAuto_SG,
	ThreeRoundBurst_SG,
	SemiAuto_SG,
	MAX,
	EFiremode_MAX,
};

// Enum TslGame.ETslHUDConfigType
enum class ETslHUDConfigType : uint8 {
	None,
	Main,
	Mode,
	Map,
	Platform,
	ModeFeature,
	Event,
	Debug,
	ETslHUDConfigType_MAX,
};

// Enum TslGame.EAuxilaryIconRequestor
enum class EAuxilaryIconRequestor : uint8 {
	None,
	Minimap,
	OwningWidget,
	EAuxilaryIconRequestor_MAX,
};

// Enum TslGame.ERadioMessageAlarmSoundCategory
enum class ERadioMessageAlarmSoundCategory : uint8 {
	Normal,
	Notify,
	Warning,
	Important,
	Invalid,
	ERadioMessageAlarmSoundCategory_MAX,
};

// Enum TslGame.EInventoryRadioMessageType
enum class EInventoryRadioMessageType : uint8 {
	Default,
	Vicinity,
	Inventory,
	Equipment,
	Weapon,
	Attachment,
	Empty_Head,
	Empty_TorsoArmor,
	Empty_Backpack,
	Empty_PrimaryWeapon,
	Empty_SecondaryWeapon,
	Empty_WeaponMelee,
	Empty_WeaponThrowable,
	None,
	EInventoryRadioMessageType_MAX,
};

// Enum TslGame.EDeleteMarkerMethod
enum class EDeleteMarkerMethod : uint8 {
	Action,
	Button,
	Marker,
	EDeleteMarkerMethod_MAX,
};

// Enum TslGame.EMessageRadialCloseReason
enum class EMessageRadialCloseReason : uint8 {
	None,
	MessageSent_Default,
	MessageSent_Select,
	Cancelled_Center,
	Cancelled_RightClick,
	Cancelled_EmptySlot,
	Cancelled_Escape,
	Cancelled_NoPingTarget,
	Forced,
	EMessageRadialCloseReason_MAX,
};

// Enum TslGame.ERadioMessageInteractionType
enum class ERadioMessageInteractionType : uint8 {
	DroppedItem,
	Vehicle,
	CarepackageOrDeadbox,
	VendingMachine,
	RevivalTower,
	TeammateSpotted,
	Normal,
	None,
	ERadioMessageInteractionType_MAX,
};

// Enum TslGame.ERadioMessageCategory
enum class ERadioMessageCategory : uint8 {
	Affirmative,
	ThankYou,
	NeedMed,
	Negative,
	Sorry,
	NeedAmmo,
	EnemySpotted,
	EnemyAreaSpotted,
	ItemSpotted,
	Ping,
	AreaPing,
	HelpMe,
	Attack,
	Defend,
	GroupUp,
	AreaNeedHelp,
	AreaBackup,
	WayPoint,
	EmergencyPickup,
	TeamMateEmote,
	Inventory,
	PlantingBomb,
	DefusingBomb,
	MovePlantedBombSite,
	BombCoin,
	Rush,
	RewardProvided,
	TeamParkourReady,
	IngameMission,
	Emoji,
	Heal,
	Revive,
	Reviving,
	Recall,
	Move,
	Escape,
	LetsCharge,
	BeQuiet,
	VoiceTalk,
	FlareGun,
	Vehicle,
	RevivalTower,
	TeammateSpotted,
	Max,
	Invalid,
	ERadioMessageCategory_MAX,
};

// Enum TslGame.ERadioMessageDecorateType
enum class ERadioMessageDecorateType : uint8 {
	None,
	EnemySpotted,
	WorldMapPing,
	RewardProvided,
	ERadioMessageDecorateType_MAX,
};

// Enum TslGame.*85d8e98336
enum class *85d8e98336 : uint8 {
	*44ed21d25c,
	*4479362c1e,
	*18bdef9c61,
	*f3ce420ff7,
	*85d8e98336_MAX,
};

// Enum TslGame.EAuxilaryIconType
enum class EAuxilaryIconType : uint8 {
	Invalid,
	Detected_Player,
	Detected_Player_Above,
	Detected_Player_Below,
	EAuxilaryIconType_MAX,
};

// Enum TslGame.EDirectMessageType
enum class EDirectMessageType : uint8 {
	Radio,
	Direct,
	DirectReply,
	Warning,
	System,
	EDirectMessageType_MAX,
};

// Enum TslGame.EDirectMessageOutGameType
enum class EDirectMessageOutGameType : uint8 {
	Normal,
	Preset,
	System,
	ClanNormal,
	ClanSystem,
	EDirectMessageOutGameType_MAX,
};

// Enum TslGame.EObserverHudAnimType
enum class EObserverHudAnimType : uint8 {
	TeamWipeOutAnim,
	PersonalKillingSpreeAnim,
	TeamTotalKillingSpreeAnim,
	EObserverHudAnimType_MAX,
};

// Enum TslGame.ESystemMenuButtonType
enum class ESystemMenuButtonType : uint8 {
	RESUME,
	SETTINGS,
	TEAM_MANAGEMENT,
	KEY_GUIDE,
	RESTART_LOBBY,
	LEAVE_MATCH,
	RETURN_TO_GAME,
	EXIT_TO_DESKTOP,
	GM_COMMAND_INGAME_HELPER,
	MATCH_LOG,
	ESystemMenuButtonType_MAX,
};

// Enum TslGame.EUIAkEvent
enum class EUIAkEvent : uint8 {
	None,
	HoverWeak,
	HoverMedium,
	SettingSlider,
	Confirm,
	Cancel,
	PopupModal,
	SystemMessage,
	EUIAkEvent_MAX,
};

// Enum TslGame.ERadioMessagePresets
enum class ERadioMessagePresets : uint8 {
	Preset1,
	Preset2,
	ERadioMessagePresets_MAX,
};

// Enum TslGame.EReportUiType
enum class EReportUiType : uint8 {
	Normal,
	Respawn,
	EReportUiType_MAX,
};

// Enum TslGame.EUiShowType
enum class EUiShowType : uint8 {
	AlwaysShow,
	TpsOnlyShow,
	FpsOnlyShow,
	AlwaysHide,
	EUiShowType_MAX,
};

// Enum TslGame.ETslHudType
enum class ETslHudType : uint8 {
	None,
	CharacterHud,
	SpectatorHud,
	ObserverHud,
	ReplayHud,
	LeagueReplayHud,
	ETslHudType_MAX,
};

// Enum TslGame.*c69348be34
enum class *c69348be34 : uint8 {
	*c68bfe680b,
	*8ca134706d,
	*85494bdcda,
	*4e548d8aa0,
	*040a92c05f,
	*c69348be34_MAX,
};

// Enum TslGame.EMinimapFocus
enum class EMinimapFocus : uint8 {
	None,
	CharacterFocus,
	NextPlayzoneFocus,
	EMinimapFocus_MAX,
};

// Enum TslGame.ETslUpdateHudReason
enum class ETslUpdateHudReason : uint8 {
	None,
	HUD_Initialize,
	HUD_ApplySettings,
	HUD_NewMatchState,
	HUD_NewGameMode,
	PC_ChangeState,
	PC_SetViewTarget,
	PC_RepPawn,
	PC_RepRider,
	PC_SwitchToObserver,
	ForceUpdate,
	ETslUpdateHudReason_MAX,
};

// Enum TslGame.EWidgetShowType
enum class EWidgetShowType : uint8 {
	Show,
	Hide,
	Toggle,
	EWidgetShowType_MAX,
};

// Enum TslGame.ECastLevel
enum class ECastLevel : uint8 {
	None,
	NoRestriction,
	Restriction,
	OnlyRotationRestriction,
	ECastLevel_MAX,
};

// Enum TslGame.ECastPriority
enum class ECastPriority : uint8 {
	None,
	Low,
	Normal,
	High,
	Max,
	ECastPriority_MAX,
};

// Enum TslGame.EScopeType
enum class EScopeType : uint8 {
	Main,
	Right,
	Total,
	None,
	EScopeType_MAX,
};

// Enum TslGame.EEquippedWeaponRTPC
enum class EEquippedWeaponRTPC : uint8 {
	None,
	HandBomb_Bottle,
	HandBomb_Metal,
	Melee,
	Pistol,
	SMG,
	AR,
	SR,
	Max,
	EEquippedWeaponRTPC_MAX,
};

// Enum TslGame.*501a4190f8
enum class *501a4190f8 : uint8 {
	*eae2127fe1,
	*cbfcc4a3ce,
	*2de46c4b48,
	*e8b2c09cdb,
	*45e1fdc847,
	*6aae12d53c,
	*dbbc731618,
	*501a4190f8_MAX,
};

// Enum TslGame.EReticleType
enum class EReticleType : uint8 {
	RedDot,
	HoloSight,
	Scope2x,
	Scope3x,
	Scope4x,
	Scope6x,
	Scope8x,
	EReticleType_MAX,
};

// Enum TslGame.EDamageZoneType
enum class EDamageZoneType : uint8 {
	Head,
	Torso,
	Arm,
	Pelvis,
	Leg,
	EDamageZoneType_MAX,
};

// Enum TslGame.ETppAimCameraPosition
enum class ETppAimCameraPosition : uint8 {
	LatestAimPosition,
	LastPeekingPosition,
	ResetToRightShoulderPosition,
	ResetToLeftShoulderPosition,
	ETppAimCameraPosition_MAX,
};

// Enum TslGame.EAccessorySlot
enum class EAccessorySlot : uint8 {
	Slot_Primary,
	Slot_Secondary,
	Slot_SideArm,
	Slot_Melee,
	Slot_Thrown,
	Slot_None,
	Slot_MAX,
};

// Enum TslGame.EWeaponDisplayTypes
enum class EWeaponDisplayTypes : uint8 {
	None,
	Handgun,
	SMG,
	AR,
	Shotgun,
	SR,
	DMR,
	LMG,
	AMR,
	Melee,
	Throwable,
	Shield,
	Crossbow,
	Launcher,
	GrenadeLauncher,
	Mortar,
	TacticalGear,
	FlareGun,
	Special,
	EWeaponDisplayTypes_MAX,
};

// Enum TslGame.EWeaponClass
enum class EWeaponClass : uint8 {
	Class_None,
	Class_Pistol,
	Class_SMG,
	Class_Rifle,
	Class_Carbine,
	Class_Shotgun,
	Class_Sniper,
	Class_DMR,
	Class_LMG,
	Class_Melee,
	Class_Throwable,
	Class_Shield,
	Class_Crossbow,
	Class_Launcher,
	Class_GrenadeLauncher,
	Class_Mortar,
	Class_Plantable,
	EWeaponClass_MAX,
};

// Enum TslGame.EAllowedThrowMode
enum class EAllowedThrowMode : uint8 {
	Any,
	ThrowHigh,
	ThrowLow,
	EAllowedThrowMode_MAX,
};

// Enum TslGame.*f51c4f9594
enum class *f51c4f9594 : uint8 {
	*678a1a26c9,
	*d16919ab07,
	*2706a4cd86,
	*f51c4f9594_MAX,
};

// Enum TslGame.ETwoHandedWeapon
enum class ETwoHandedWeapon : uint8 {
	JerryCan,
	TacPack,
	TraumaBag,
	SpotterScope,
	Drone,
	BlueChipDetector,
	Toolbox,
	SpareTire,
	IntegratedRepairKit,
	PlantedBombKit,
	DefusingBombKit,
	ETwoHandedWeapon_MAX,
};

// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType : uint8 {
	Thrown_Grenade,
	Thrown_Molotov,
	Thrown_Melee,
	Thrown_Trap,
	Thrown_StickyBomb,
	Thrown_C4,
	Thrown_JerryCan,
	Thrown_BZ_Grenade,
	Thrown_TacPack,
	Thrown_TraumaBag,
	Thrown_Toolbox,
	Thrown_CanBomb,
	Thrown_SpareTire,
	Thrown_IntegratedRepairKit,
	Thrown_PlantedBombKit,
	Thrown_DefusingBombKit,
	Thrown_Other,
	Thrown_StructFlare,
	Thrown_CamoNet,
	Thrown_MAX,
};

// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType : uint8 {
	Addition,
	Multiply,
	EAttachmentCalculateType_MAX,
};

// Enum TslGame.EAutoEquipAttachmentForScopeMode
enum class EAutoEquipAttachmentForScopeMode : uint8 {
	Off,
	Sight_Only,
	ALL,
	EAutoEquipAttachmentForScopeMode_MAX,
};

// Enum TslGame.EFiringMode
enum class EFiringMode : uint8 {
	Normal,
	Burst,
	FullAuto,
	FullAutoFast,
	EFiringMode_MAX,
};

// Enum TslGame.EWeaponHand
enum class EWeaponHand : uint8 {
	Left,
	Right,
	Total,
	EWeaponHand_MAX,
};

// Enum TslGame.EWeaponArmState
enum class EWeaponArmState : uint8 {
	None,
	NotArmed,
	Arming,
	Armed,
	UnArming,
	EWeaponArmState_MAX,
};

// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType : uint8 {
	NotStart,
	Impact,
	Delay,
	ImpactOrDelay,
	EProjectileExplosionStartType_MAX,
};

// Enum TslGame.ETurningDirection
enum class ETurningDirection : uint8 {
	None,
	Right_46,
	Right_91,
	Right_136,
	Right_181,
	Left_46,
	Left_91,
	Left_136,
	Left_181,
	ETurningDirection_MAX,
};

// Enum TslGame.*af85c34cee
enum class *af85c34cee : uint8 {
	*9cfc0d8763,
	*5e5fa27748,
	*c999b8ea35,
	*3a82021e52,
	*d6a73c5ebb,
	*058d856ab1,
	*71aaa27923,
	*8de6a6a126,
	*7d506665e4,
	*af85c34cee_MAX,
};

// Enum TslGame.ETargetAnimDynamicsHairType
enum class ETargetAnimDynamicsHairType : uint8 {
	None,
	Ponytail,
	Twintails,
	LongPonyTail,
	ETargetAnimDynamicsHairType_MAX,
};

// Enum TslGame.EAnimDynamicsMutableTagType
enum class EAnimDynamicsMutableTagType : uint8 {
	None,
	HEAD_NS,
	EAnimDynamicsMutableTagType_MAX,
};

// Enum TslGame.ETargetAnimDynamicsType
enum class ETargetAnimDynamicsType : uint8 {
	None,
	Hair,
	Coat,
	ETargetAnimDynamicsType_MAX,
};

// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes : uint8 {
	Hair,
	Outer,
	Legs,
	Torso,
	Head,
	Mask,
	Ghillie,
	Backpack,
	Eyes,
	TorsoArmor,
	Hands,
	Feet,
	Belt,
	Face,
	Max,
	EAnimatableCustomizableTypes_MAX,
};

// Enum TslGame.EAnimWeaponSpecificClass
enum class EAnimWeaponSpecificClass : uint8 {
	None,
	EAnimWeaponSpecificClass_MAX,
};

// Enum TslGame.EAnimVehicleSeatRuleType
enum class EAnimVehicleSeatRuleType : uint8 {
	Driver,
	Passenger,
	None,
	EAnimVehicleSeatRuleType_MAX,
};

// Enum TslGame.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : uint8 {
	Rider,
	Pillion,
	VehicleDriver,
	VehiclePassenger,
	Pilot,
	AircraftPassenger,
	GliderPassenger,
	None,
	EAnimVehicleSeatType_MAX,
};

// Enum TslGame.*e5986971dc
enum class *e5986971dc : uint8 {
	*3914b625f1,
	*e4e0b7b587,
	*085d5dda41,
	*324da6e931,
	*b30984aa83,
	*e5986971dc_MAX,
};

// Enum TslGame.EUnarmedAnimType
enum class EUnarmedAnimType : uint8 {
	Default,
	Spray,
	EUnarmedAnimType_MAX,
};

// Enum TslGame.EAnimStance
enum class EAnimStance : uint8 {
	Stand,
	Crouch,
	Prone,
	DBNO,
	EAnimStance_MAX,
};

// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType : uint8 {
	None,
	Rifle,
	Launcher,
	Pistol,
	Throwable,
	SpikeTrap,
	Melee,
	Shield,
	Mortar,
	MAX,
	EAnimWeaponType_MAX,
};

// Enum TslGame.ERaycastDirection
enum class ERaycastDirection : uint8 {
	Forward,
	Down_45_Degrees,
	Down,
	ERaycastDirection_MAX,
};

// Enum TslGame.EObjectCarryGripIKType
enum class EObjectCarryGripIKType : uint8 {
	None,
	LeftHand,
	RightHand,
	TwoHand,
	EObjectCarryGripIKType_MAX,
};

// Enum TslGame.EObjectCarryRestrictedAction
enum class EObjectCarryRestrictedAction : uint8 {
	None,
	Sprint,
	Crouch,
	Prone,
	Jump,
	Arming,
	Vaulting,
	VaultingWithArm,
	Falling,
	Peeking,
	WheelAction,
	DoorInteraction,
	VehicleSeatInteraction,
	ItemPackageInteraction,
	VendingMachineInteraction,
	FireworkInteraction,
	JukeBoxInteraction,
	Max,
	EObjectCarryRestrictedAction_MAX,
};

// Enum TslGame.EObjectCarryAnimState
enum class EObjectCarryAnimState : uint8 {
	PrepareAction,
	StartAction,
	EndAction,
	EObjectCarryAnimState_MAX,
};

// Enum TslGame.EObjectCarryPickUpDeltaType
enum class EObjectCarryPickUpDeltaType : uint8 {
	None,
	Low,
	Middle,
	High,
	EObjectCarryPickUpDeltaType_MAX,
};

// Enum TslGame.EObjectCarryState
enum class EObjectCarryState : uint8 {
	NonCarried,
	Carried,
	PickUp,
	Drop,
	Throw,
	EObjectCarryState_MAX,
};

// Enum TslGame.ECarriableObjectMaterialParamType
enum class ECarriableObjectMaterialParamType : uint8 {
	None,
	ObjectCarryInFPP,
	ECarriableObjectMaterialParamType_MAX,
};

// Enum TslGame.ECarriableObjectType
enum class ECarriableObjectType : uint8 {
	None,
	DeathDropBox,
	DroppedItem,
	ECarriableObjectType_MAX,
};

// Enum TslGame.EWuLiveViewResultCode
enum class EWuLiveViewResultCode : uint8 {
	Success,
	Pending,
	Failed,
	EWuLiveViewResultCode_MAX,
};

// Enum TslGame.EWuStatTrakPreviewType
enum class EWuStatTrakPreviewType : uint8 {
	Activated,
	Locked,
	Error,
	EWuStatTrakPreviewType_MAX,
};

// Enum TslGame.EWuContenderUpgradeType
enum class EWuContenderUpgradeType : uint8 {
	None,
	Skin,
	Emote,
	LobbyPose,
	KillEffect,
	KillBadge,
	DivingTrail,
	CKO,
	EWuContenderUpgradeType_MAX,
};

// Enum TslGame.EWuFrontendAsyncResult
enum class EWuFrontendAsyncResult : uint8 {
	Failed,
	Success,
	Pending,
	EWuFrontendAsyncResult_MAX,
};

// Enum TslGame.EWuLobbyPosePlayType
enum class EWuLobbyPosePlayType : uint8 {
	None,
	Normal,
	Ranked,
	Profile,
	EndOfMatch,
	ContenderSelect,
	ContenderRoom,
	EWuLobbyPosePlayType_MAX,
};

// Enum TslGame.EWuViewModeCategory
enum class EWuViewModeCategory : uint8 {
	None,
	Weapon,
	Parachute,
	Character,
	Vehicle,
	FloatingVehicle,
	LootCrate,
	BulletproofShield,
	EWuViewModeCategory_MAX,
};

// Enum TslGame.EWuCameraType
enum class EWuCameraType : uint8 {
	None,
	WholeBody,
	Top,
	Head,
	Body,
	Legs,
	Feet,
	EWuCameraType_MAX,
};

// Enum TslGame.EWuSceneMoveType
enum class EWuSceneMoveType : uint8 {
	Teleport,
	CameraMove,
	FadeInOut,
	CameraMoveFast,
	EWuSceneMoveType_MAX,
};

// Enum TslGame.EWuLobbyItemSequenceTag
enum class EWuLobbyItemSequenceTag : uint8 {
	None,
	Ready,
	Unready,
	EWuLobbyItemSequenceTag_MAX,
};

// Enum TslGame.EWuLobbyCustomizingSlotType
enum class EWuLobbyCustomizingSlotType : uint8 {
	None,
	VehicleSlot,
	WeaponSlot,
	MannequinSlot,
	EWuLobbyCustomizingSlotType_MAX,
};

// Enum TslGame.EWuPcbangAuthenticator
enum class EWuPcbangAuthenticator : uint8 {
	None,
	Nexon,
	Kakao,
	EWuPcbangAuthenticator_MAX,
};

// Enum TslGame.EWuSubjectToReport
enum class EWuSubjectToReport : uint8 {
	None,
	Killer,
	SpectatingPlayer,
	ReplayPlayer,
	TeamMember,
	OtherTeamMember,
	Assistant,
	GroggyCauser,
	EWuSubjectToReport_MAX,
};

// Enum TslGame.EWuPlatformProvider
enum class EWuPlatformProvider : uint8 {
	Unknown,
	Bro,
	PcSteam,
	PcDmm,
	PcMailRu,
	PcKakao,
	PcTencent,
	ConsoleXbox,
	ConsolePsn,
	PcLiteGarena,
	PcLiteGlobalAccount,
	PcLiteGlobalAccountJp,
	ConsoleStadia,
	PcEpic,
	AI,
	EWuPlatformProvider_MAX,
};

// Enum TslGame.EWuAiPlayerType
enum class EWuAiPlayerType : uint8 {
	HumanPlayer,
	AiTypeNone,
	CommonAi,
	PillarAi,
	DummyAi,
	ZombieAi,
	MonsterAi,
	UltronAi,
	ScriptBotAi,
	MarketAi,
	EWuAiPlayerType_MAX,
};

// Enum TslGame.EWuPartnerLevel
enum class EWuPartnerLevel : uint8 {
	None,
	Normal,
	Lead,
	EWuPartnerLevel_MAX,
};

// Enum TslGame.EWuOnlineStoreOfferDiscountType
enum class EWuOnlineStoreOfferDiscountType : uint8 {
	NotOnSale,
	Percentage,
	DiscountAmount,
	PayAmount,
	EWuOnlineStoreOfferDiscountType_MAX,
};

// Enum TslGame.EWuDisplayMode
enum class EWuDisplayMode : uint8 {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWuDisplayMode_MAX,
};

// Enum TslGame.EWuClanNoticeUgcLevel
enum class EWuClanNoticeUgcLevel : uint8 {
	Hide,
	Show,
	EWuClanNoticeUgcLevel_MAX,
};

// Enum TslGame.EWuClanNameUgcLevel
enum class EWuClanNameUgcLevel : uint8 {
	HideAll,
	OnlyMine,
	MineAndOthersTag,
	ShowAll,
	EWuClanNameUgcLevel_MAX,
};

// Enum TslGame.EWuDirectMessageType
enum class EWuDirectMessageType : uint8 {
	Normal,
	Preset,
	System,
	ClanNormal,
	ClanSystem,
	EWuDirectMessageType_MAX,
};

// Enum TslGame.ELobbyPoseProcessType
enum class ELobbyPoseProcessType : uint8 {
	PreviewScenePose,
	DefaultScenePose,
	ELobbyPoseProcessType_MAX,
};

// Enum TslGame.ELobbyPosePlayType
enum class ELobbyPosePlayType : uint8 {
	None,
	Normal,
	Ranked,
	Profile,
	EndOfMatch,
	ContenderSelect,
	ContenderRoom,
	ELobbyPosePlayType_MAX,
};

// Enum TslGame.*9a674c763e
enum class *9a674c763e : uint8 {
	*7eec01a32f,
	*3a8ec44dd1,
	*61acf60109,
	*9a674c763e_MAX,
};

// Enum TslGame.*761ae7806d
enum class *761ae7806d : uint8 {
	*ecc23a3a47,
	*a9dd76b85c,
	*19fff98392,
	*1e76469b37,
	*b958d35f36,
	*761ae7806d_MAX,
};

// Enum TslGame.ELobbyCharacterTransitionType
enum class ELobbyCharacterTransitionType : uint8 {
	AppealReady,
	AppealNotReady,
	Ready,
	NotReady,
	ReadyToNotReady,
	NotReadyToReady,
	EmoteToReady,
	EmoteToNotReady,
	ELobbyCharacterTransitionType_MAX,
};

// Enum TslGame.EOutGameMontageState
enum class EOutGameMontageState : uint8 {
	Default,
	PlayingEmote,
	PlayingLobbyPose,
	Interrupted,
	Finished,
	EOutGameMontageState_MAX,
};

// Enum TslGame.EOutGameMontageObjectType
enum class EOutGameMontageObjectType : uint8 {
	EmoteObject,
	LobbyPoseObject,
	EOutGameMontageObjectType_MAX,
};

// Enum TslGame.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates : uint8 {
	AlwaysOff,
	AlwaysOn,
	ELobbyBlurChangingStates_MAX,
};

// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates : uint8 {
	XBox_Home,
	Main_1,
	Main_2,
	Menu_1,
	Custom_1,
	Custom_2,
	EventPass_Milestone_1,
	EventPass_Milestone_2,
	EventPass_Missions,
	ViewMode_Character,
	ViewMode_Weapon,
	ViewMode_Parachute,
	EventPass_Milestone_0_Particle,
	None,
	ELobbyCameraStates_MAX,
};

// Enum TslGame.ELobbyCustomizingSlotType
enum class ELobbyCustomizingSlotType : uint8 {
	None,
	VehicleSlot,
	WeaponSlot,
	MannequinSlot,
	ELobbyCustomizingSlotType_MAX,
};

// Enum TslGame.ETslOutGameCloudRequestErrorType
enum class ETslOutGameCloudRequestErrorType : uint8 {
	Unknown,
	InternalError,
	ServerError,
	RequestTimedOut,
	DataCorrupted,
	CompressionFailed,
	DecompressionFailed,
	ETslOutGameCloudRequestErrorType_MAX,
};

// Enum TslGame.ETslOutGameCloudRequestType
enum class ETslOutGameCloudRequestType : uint8 {
	Invalid,
	SaveToCloud,
	LoadFromCloud,
	CreateGameOptionCode,
	LoadGameOptionByCode,
	ETslOutGameCloudRequestType_MAX,
};

// Enum TslGame.EViewModeActorCenterPosition
enum class EViewModeActorCenterPosition : uint8 {
	None,
	Center,
	Bottom,
	EViewModeActorCenterPosition_MAX,
};

// Enum TslGame.EObjectType
enum class EObjectType : uint8 {
	AnimSpawnObject,
	AnimDestroyObject,
	PhysicsBody,
	EObjectType_MAX,
};

// Enum TslGame.EEmoteMoveType
enum class EEmoteMoveType : uint8 {
	None,
	MoveForward,
	EEmoteMoveType_MAX,
};

// Enum TslGame.EEmotePlayType
enum class EEmotePlayType : uint8 {
	None,
	Normal,
	Group,
	Interaction,
	OnStage,
	EEmotePlayType_MAX,
};

// Enum TslGame.EPlayerInputType
enum class EPlayerInputType : uint8 {
	KeyboardMouse,
	Gamepad,
	Mixed,
	EPlayerInputType_MAX,
};

// Enum TslGame.ECollisionProfileType
enum class ECollisionProfileType : uint8 {
	Profiles,
	DefaultChannelResponses,
	EditProfiles,
	ProfileRedirects,
	CollisionChannelRedirects,
	ECollisionProfileType_MAX,
};

// Enum TslGame.EAntiCheatKickType
enum class EAntiCheatKickType : uint8 {
	Default,
	HWID,
	MouseMacro,
	InGame,
	BattleEye,
	EAntiCheatKickType_MAX,
};

// Enum TslGame.EMovingState
enum class EMovingState : uint8 {
	Walk,
	Run,
	Sprint,
	EMovingState_MAX,
};

// Enum TslGame.ERpcCategory
enum class ERpcCategory : uint8 {
	MeleeAttack,
	VehicleSeatMove,
	Interaction,
	Max,
	ERpcCategory_MAX,
};

// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType : uint8 {
	Normal,
	WeeklyDouble,
	ELobbyItemPointSellingType_MAX,
};

// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform : uint8 {
	PC_Steam,
	PC_NonSteam,
	Xbox,
	ELobbyItemPlatform_MAX,
};

// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier : uint8 {
	Basic,
	Common,
	Classic,
	Special,
	Rare,
	Elite,
	Epic,
	Legendary,
	Ultimate,
	Event,
	ELobbyItemTier_MAX,
};

// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory : uint8 {
	Belt,
	Body,
	Eyes,
	Feet,
	Head,
	Jacket,
	Legs,
	Mask,
	Hands,
	Box,
	Key,
	WeaponSkin,
	ParachuteSkin,
	HelmetSkin,
	BackpackSkin,
	TorsoArmorSkin,
	VehicleSkin,
	CastableSkin,
	Multislot,
	ELobbyItemCategory_MAX,
};

// Enum TslGame.EEquipableItemLevelType
enum class EEquipableItemLevelType : uint8 {
	None,
	Level1,
	Level2,
	Level3,
	Level4,
	Level5,
	Level6,
	EEquipableItemLevelType_MAX,
};

// Enum TslGame.EConstraintSlotType
enum class EConstraintSlotType : uint8 {
	Block,
	Hide,
	Max,
	EConstraintSlotType_MAX,
};

// Enum TslGame.*f7d19701c6
enum class *f7d19701c6 : uint8 {
	*2d3db02cd6,
	*3cd6c96bc8,
	*7ee8d03295,
	*f7d19701c6_MAX,
};

// Enum TslGame.*bb4bf9cbb9
enum class *bb4bf9cbb9 : uint8 {
	*6d2b93dd7c,
	*5b4947c2e9,
	*b920d7597b,
	*a8d4880f9f,
	*b0c925171d,
	*bb4bf9cbb9_MAX,
};

// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType : uint8 {
	GroupA,
	GroupB,
	GroupC,
	GroupD,
	GroupE,
	GroupF,
	GroupG,
	GroupH,
	GroupI,
	GroupJ,
	GroupK,
	GroupL,
	GroupM,
	GroupN,
	GroupO,
	GroupP,
	GroupQ,
	GroupR,
	GroupS,
	GroupT,
	GroupU,
	GroupV,
	GroupW,
	GroupX,
	GroupY,
	GroupZ,
	MAX,
	EItemSpotGroupType_MAX,
};

// Enum TslGame.EItemSpotType
enum class EItemSpotType : uint8 {
	TypeA,
	TypeB,
	TypeC,
	TypeD,
	TypeE,
	TypeF,
	TypeG,
	TypeH,
	TypeI,
	TypeJ,
	TypeK,
	TypeL,
	TypeM,
	TypeN,
	TypeO,
	TypeP,
	TypeQ,
	TypeR,
	TypeS,
	TypeT,
	TypeU,
	TypeV,
	TypeW,
	TypeX,
	TypeY,
	TypeZ,
	MAX,
	EItemSpotType_MAX,
};

// Enum TslGame.EItemOverrideType
enum class EItemOverrideType : uint8 {
	NONE,
	TypeA,
	TypeB,
	TypeC,
	TypeD,
	TypeE,
	TypeF,
	TypeG,
	TypeH,
	TypeI,
	TypeJ,
	TypeK,
	TypeL,
	TypeM,
	TypeN,
	EItemOverrideType_MAX,
};

// Enum TslGame.EContinuousHealItem
enum class EContinuousHealItem : uint8 {
	Continuous_On,
	Bandaged_Only,
	Continuous_Off,
	EContinuousHealItem_MAX,
};

// Enum TslGame.ECustomPartType
enum class ECustomPartType : uint8 {
	Vehicle,
	ECustomPartType_MAX,
};

// Enum TslGame.EThermalItemType
enum class EThermalItemType : uint8 {
	Character,
	Vehicle,
	Blood,
	Fire,
	Ghillie,
	CountOrNone,
	EThermalItemType_MAX,
};

// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType : uint8 {
	None,
	Vest,
	LongCoat,
	HipSack,
	Cloth,
	BackPack,
	MilitaryShoes,
	Sneakers,
	EEquipableItemSoundType_MAX,
};

// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup : uint8 {
	Default,
	Shoes,
	EEquipableItemSoundGroup_MAX,
};

// Enum TslGame.EItemCategory
enum class EItemCategory : uint8 {
	None,
	Equipment,
	Weapon,
	Attachment,
	Ammunition,
	Use,
	Skin,
	Part,
	EItemCategory_MAX,
};

// Enum TslGame.ItemPackageType
enum class ItemPackageType : uint8 {
	None,
	LootBox,
	CarePackage,
	VehicleTrunk,
	ItemPackageType_MAX,
};

// Enum TslGame.EControlType
enum class EControlType : uint8 {
	Move,
	Jump,
	Fire,
	Aim,
	Arm,
	Unarm,
	Reload,
	Interact,
	Peek,
	Roll,
	Crouch,
	Prone,
	UseItem,
	ThrowMelee,
	CookThrowable,
	ItemCatch,
	ItemThrow,
	InspectWeapon,
	ToggleFiringMode,
	ToggleThrowMode,
	ToggleCamera,
	Sprint,
	MAX,
	EControlType_MAX,
};

// Enum TslGame.ECharacterActionComponentType
enum class ECharacterActionComponentType : uint8 {
	MovementAction,
	Jump,
	Vault,
	ItemUse,
	StanceAction,
	Gunplay,
	UnarmedAttack,
	Max,
	ECharacterActionComponentType_MAX,
};

// Enum TslGame.ESetHealthReason
enum class ESetHealthReason : uint8 {
	Undefined,
	ByPlayerHeal,
	ByPlayerDamage,
	ByPassiveRecovery,
	ByReviveOrDeploy,
	BySystem,
	ESetHealthReason_MAX,
};

// Enum TslGame.ECharacterActionEventType
enum class ECharacterActionEventType : uint8 {
	None,
	WeaponChange,
	ItemUseCast,
	TakeDamage,
	PostDealDamage,
	TryToUnarmedAttack,
	TryToMeleeAttack,
	ECharacterActionEventType_MAX,
};

// Enum TslGame.*849e406cd3
enum class *849e406cd3 : uint8 {
	*044c6d9f02,
	*943c2286c0,
	*a01018f6c7,
	*4f92c79eec,
	*7088bdd55d,
	*1e919ecfb9,
	*fac068d15a,
	*08e6878438,
	*849e406cd3_MAX,
};

// Enum TslGame.ECharacterNegativeEffects
enum class ECharacterNegativeEffects : uint8 {
	Blind,
	Burning,
	Stun,
	Taser,
	Total,
	ECharacterNegativeEffects_MAX,
};

// Enum TslGame.ECharacterGait
enum class ECharacterGait : uint8 {
	Walk,
	Run,
	Sprint,
	ECharacterGait_MAX,
};

// Enum TslGame.ETslCharacterType
enum class ETslCharacterType : uint8 {
	none,
	user,
	user_ai,
	npc_pillar,
	npc_guard,
	monster_bear,
	monster_chicken,
	npc_killtruck,
	npc_zombie,
	monster,
	ETslCharacterType_MAX,
};

// Enum TslGame.EGender
enum class EGender : uint8 {
	Male,
	Female,
	EGender_MAX,
};

// Enum TslGame.EVehicleConvertState
enum class EVehicleConvertState : uint8 {
	None,
	Play,
	Cancel,
	Finish,
	EVehicleConvertState_MAX,
};

// Enum TslGame.EVehiclePartType
enum class EVehiclePartType : uint8 {
	BodyColor,
	WheelColor,
	BrakeCaliperColor,
	BoostEffect,
	WheelMesh,
	PinstripeColor,
	Spoiler,
	Interior,
	LicensePlate,
	TrimColor,
	EVehiclePartType_MAX,
};

// Enum TslGame.EVehicleRideType
enum class EVehicleRideType : uint8 {
	None,
	Normal,
	Aircraft,
	Mortar,
	EVehicleRideType_MAX,
};

// Enum TslGame.*08ad0bed8e
enum class *08ad0bed8e : uint8 {
	*6967fb326f,
	*3e6b1ec525,
	*726aeee21b,
	*08ad0bed8e_MAX,
};

// Enum TslGame.*a423a1952c
enum class *a423a1952c : uint8 {
	*fa1555596a,
	*3cbefba466,
	*11693a6c25,
	*9543daf16e,
	*a423a1952c_MAX,
};

// Enum TslGame.*d3d6bdcb7d
enum class *d3d6bdcb7d : uint8 {
	*58aea5986c,
	*92547e9cc9,
	*5b58618065,
	*9bcf315fb2,
	*0a8b219614,
	*f53888758a,
	*f77ec123e5,
	*10eb55002f,
	*34851f0826,
	*3899b8925a,
	*509b4a76cb,
	*35b83a3887,
	*cc37d44dd7,
	*4a7fcb6d9d,
	*358a7ef509,
	*e2920221ef,
	*8761255526,
	*f6fc9c2cd7,
	*29756225cf,
	*c1d35ffb09,
	*ad396d6cc0,
	*7f65a316c7,
	*e893f96dc6,
	*1013d70582,
	*7114ed57b3,
	*7023d21ea1,
	*b8e1a45a4f,
	*7b6a70e19b,
	*3fc0aa7c00,
	*5fc2ed4697,
	*61b5ecb20a,
	*eee63b86eb,
	*1f9902da00,
	*5177318489,
	*badb6993cf,
	*012ac31169,
	*ca2a0b0d3a,
	*66c8cc2c22,
	*d80939e69c,
	*bcf2fab891,
	*26604ceedd,
	*d2fc69c71d,
	*7a62ec4f26,
	*3a0b103fe8,
	*2120abfe02,
	*8a6383144f,
	*abc5400bf9,
	*72abf4e753,
	*5161a25ac3,
	*8c0d8e9a73,
	*195816e579,
	*2e6650f256,
	*4c0179564a,
	*d186fe2822,
	*acedf88091,
	*d3d6bdcb7d_MAX,
};

// Enum TslGame.*b2317de76b
enum class *b2317de76b : uint8 {
	*7ec7624b9a,
	*7c6f2bb202,
	*0e42a834e6,
	*92b0309b02,
	*b2317de76b_MAX,
};

// Enum TslGame.ERiderType
enum class ERiderType : uint8 {
	Driver,
	Passenger,
	ERiderType_MAX,
};

// Enum TslGame.EMovementBaseType
enum class EMovementBaseType : uint8 {
	None,
	Train,
	Ship,
	CableCar,
	Escalator,
	COUNT,
	EMovementBaseType_MAX,
};

// Enum TslGame.ESeatState
enum class ESeatState : uint8 {
	Empty,
	Player,
	Teammate,
	Enemy,
	ESeatState_MAX,
};

// Enum TslGame.EAttackType
enum class EAttackType : uint8 {
	None,
	Weapon,
	VehicleCrash,
	VehicleExplosion,
	Fall,
	BlueZone,
	RedZone,
	BlackZone,
	EAttackType_MAX,
};

// Enum TslGame.*339d56bc47
enum class *339d56bc47 : uint8 {
	*a51847c4c7,
	*459b5986e9,
	*0b6b0e6da7,
	*41b2f73ded,
	*339d56bc47_MAX,
};

// Enum TslGame.EVaultAnimType
enum class EVaultAnimType : uint8 {
	VaultNone,
	Vault200_Stationary,
	Vault200_Mobile,
	Vault200_Narrow,
	Vault160_Stationary,
	Vault160_Mobile,
	Vault160_Narrow,
	Vault120_Stationary,
	Vault120_Mobile,
	Vault120_Slide,
	Vault120_Narrow,
	Vault90_Stationary,
	Vault90_Mobile,
	Vault90_Slide,
	Vault90_Narrow,
	Climb200_Stationary,
	Climb200_Mobile,
	Climb200_Slide,
	Climb200_Narrow,
	Climb160_Stationary,
	Climb160_Mobile,
	Climb160_Slide,
	Climb160_Narrow,
	Climb120_Stationary,
	Climb120_Mobile,
	Climb120_Slide,
	Climb120_Narrow,
	Climb90_Stationary,
	Climb90_Mobile,
	Climb90_Slide,
	Climb90_Narrow,
	Vault90Roll,
	Vault120Window,
	Vault60_Stationary,
	Vault60_Mobile,
	Vault60_Slide,
	Vault60_Narrow,
	Climb60_Stationary,
	Climb60_Mobile,
	Climb60_Narrow,
	LedgeGrab_Up_Climb,
	LedgeGrab_Up_Climb_Swing,
	LedgeGrab_Up_Climb_HalfSwing,
	LedgeGrab_Up_Vault,
	LedgeGrab_Up_Vault_Swing,
	LedgeGrab_Up_Vault_HalfSwing,
	LedgeGrab_High_Climb,
	LedgeGrab_High_Climb_Swing,
	LedgeGrab_High_Climb_HalfSwing,
	LedgeGrab_High_Vault,
	LedgeGrab_High_Vault_Swing,
	LedgeGrab_High_Vault_HalfSwing,
	LedgeGrab_Low_Climb,
	LedgeGrab_Low_Climb_Swing,
	LedgeGrab_Low_Climb_HalfSwing,
	LedgeGrab_Low_Vault,
	LedgeGrab_Low_Vault_Swing,
	LedgeGrab_Low_Vault_HalfSwing,
	LedgeGrab_Low_Vault_Narrow,
	LedgeGrab_Low_Vault_HalfSwing_Narrow,
	LedgeGrab_Low_Vault_Swing_Narrow,
	LedgeGrab_High_Vault_Narrow,
	LedgeGrab_High_Vault_HalfSwing_Narrow,
	LedgeGrab_High_Vault_Swing_Narrow,
	LedgeGrab_Up_Vault_Narrow,
	LedgeGrab_Up_Vault_HalfSwing_Narrow,
	LedgeGrab_Up_Vault_Swing_Narrow,
	EVaultAnimType_MAX,
};

// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod : uint8 {
	IgnoreLater,
	Overwrite,
	RestartTimer,
	Stack,
	EBuffOverlapSolveMethod_MAX,
};

// Enum TslGame.EGuardRank
enum class EGuardRank : uint8 {
	Grunt,
	Boss,
	EGuardRank_MAX,
};

// Enum TslGame.EReportDetailCauseType
enum class EReportDetailCauseType : uint8 {
	None,
	AutoAim,
	NoRecoil,
	EspOrPenetration,
	Speedhack,
	WallPenetration,
	FlyingCar,
	Other,
	EReportDetailCauseType_MAX,
};

// Enum TslGame.EReportedSessionType
enum class EReportedSessionType : uint8 {
	PublicOrCustomGame,
	Killcam,
	Replay,
	PublicDuel,
	EReportedSessionType_MAX,
};

// Enum TslGame.EReportCause
enum class EReportCause : uint8 {
	Default,
	Cheat,
	TeamKill,
	Teaming,
	InappropriateID,
	VerbalHarassment,
	Griefing,
	StreamSniping,
	InappropriateClanTag,
	Abusing,
	MarketingSpamming,
	EReportCause_MAX,
};

// Enum TslGame.ETslBpRewardLogicType
enum class ETslBpRewardLogicType : uint8 {
	None,
	Public,
	ScoreBased,
	ETslBpRewardLogicType_MAX,
};

// Enum TslGame.ETslApRewardLogicType
enum class ETslApRewardLogicType : uint8 {
	None,
	Public,
	ETslApRewardLogicType_MAX,
};

// Enum TslGame.EVoiceChannelType
enum class EVoiceChannelType : uint8 {
	None,
	All,
	GlobalOnly,
	TeamOnly,
	EVoiceChannelType_MAX,
};

// Enum TslGame.ETslCustomMovementMode
enum class ETslCustomMovementMode : uint8 {
	Vaulting,
	Freefalling,
	Parachuting,
	UsingAscender,
	TeamParkour,
	Execution,
	ETslCustomMovementMode_MAX,
};

// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState : uint8 {
	None,
	Light,
	Heavy,
	VeryHeavy,
	ELandingSoundSwitchState_MAX,
};

// Enum TslGame.EInteractableActorType
enum class EInteractableActorType : uint8 {
	None,
	BlueChipTower,
	GasPump,
	JukeBox,
	PlantedBomb,
	Vehicle_Seat,
	Vehicle_Wheel,
	Door,
	DroppedItem,
	Ascender,
	Zipline,
	VendingMachine,
	Firework,
	StrongBox,
	ElectricCharger,
	ItemPackage,
	EInteractableActorType_MAX,
};

// Enum TslGame.EInteractInputType
enum class EInteractInputType : uint8 {
	None,
	MainInteract,
	SecondaryInteract,
	MainInteract_Hold,
	SecondaryInteract_Hold,
	EInteractInputType_MAX,
};

// Enum TslGame.ECastCancelReason
enum class ECastCancelReason : uint8 {
	Invalid,
	CasterAiming,
	CasterArming,
	CasterApnea,
	CasterSprinting,
	CasterJumping,
	CasterFallingLong,
	CasterFiring,
	CasterDBNO,
	CasterDBNOOnZeroTimeCast,
	CasterHipped,
	CasterInvalid,
	CasterNotAlive,
	CasterPickedUpDroppedItem,
	CasterPickedUpItemFromPackage,
	CasterReloading,
	CasterRolling,
	CasterTargeting,
	CasterUnarmAttacking,
	CasterVault,
	CasterStanceInvalid,
	CasterFreefalling,
	CastObjectInvalid,
	CastObjectNotExecutable,
	FailedCasterMovementDistCheckOnClient,
	FailedCasterMovementDistCheckOnServer,
	FailedCasterAndCastObjDistCheckOnClient,
	FailedCasterAndCastObjDistCheckOnServer,
	CharacterBeingRevivedDead,
	ManualCancel,
	NewCastOnClient,
	NewCastOnServer,
	VehicleLanding,
	VehicleSeatChanged,
	VehicleMoving,
	VehicleUpsideDown,
	StuntEmoteOnVehicle,
	VehicleJumping,
	EmergencyPickupAircraft,
	BodyCarry,
	UplaodingTeamParkour,
	CasterStunned,
	VehicleFuelFull,
	FailedPlanting,
	ObjectCarry,
	Execution,
	CasterAttackedByKick,
	ECastCancelReason_MAX,
};

// Enum TslGame.GamepadHudDataType
enum class GamepadHudDataType : uint8 {
	EFloat,
	EBool,
	EFString,
	GamepadHudDataType_MAX,
};

// Enum TslGame.ESandboxGroupType
enum class ESandboxGroupType : uint8 {
	None,
	Weapon,
	Attachment,
	Item,
	Vehicle,
	Sensitivity,
	Power,
	Special,
	ESandboxGroupType_MAX,
};

// Enum TslGame.ESandboxQuantityType
enum class ESandboxQuantityType : uint8 {
	None,
	Item,
	Vehicle,
	ESandboxQuantityType_MAX,
};

// Enum TslGame.ESandboxSpecialButtonType
enum class ESandboxSpecialButtonType : uint8 {
	None,
	EquipLv3,
	AddAmmo,
	SettingAPrevious,
	SettingAGunset,
	SaveGear,
	LoadGear,
	ESandboxSpecialButtonType_MAX,
};

// Enum TslGame.ESandboxPowerType
enum class ESandboxPowerType : uint8 {
	None,
	Fly,
	InvulnerableEffect,
	CarePackage,
	RedZone,
	Revive,
	TeamRevive,
	GiveItemToEveryone,
	BlueZone,
	ESandboxPowerType_MAX,
};

// Enum TslGame.ESandboxSoundType
enum class ESandboxSoundType : uint8 {
	None,
	ItemSpawnClick,
	ItemSpawnSuccess,
	ESandboxSoundType_MAX,
};

// Enum TslGame.ESandboxValidateItemResult
enum class ESandboxValidateItemResult : uint8 {
	Success,
	Invalid_Item_IdMismatch,
	Invalid_Item_RequestParamMismatch,
	Invalid_Power_Training,
	Invalid_Vehicle_Training,
	ESandboxValidateItemResult_MAX,
};

// Enum TslGame.ESpecialZoneState
enum class ESpecialZoneState : uint8 {
	Disabled,
	BeforeMatch,
	WaitingStartDelay,
	Warning,
	Activating,
	ActivationDone,
	Deactivating,
	Removed,
	Finished,
	ESpecialZoneState_MAX,
};

// Enum TslGame.ESpecialZoneType
enum class ESpecialZoneType : uint8 {
	None,
	Blizzard,
	SandStorm,
	EMP,
	RedZone,
	BlackZone,
	SatelliteCrash,
	ESpecialZoneType_MAX,
};

// Enum TslGame.ECKOTaskState
enum class ECKOTaskState : uint8 {
	NotInQueue,
	BeforePlay,
	Playing,
	AnimFinish,
	Canceled,
	End,
	Max,
	ECKOTaskState_MAX,
};

// Enum TslGame.ECharFlagsNormal
enum class ECharFlagsNormal : uint8 {
	IsInDBNO,
	IsActiveRagdollActive,
	HasShieldEquipped,
	IsInBlueZone,
	IsBeingHealed,
	IsSelfHemostasis,
	IsInBlueGrenadeArea,
	ECharFlagsNormal_MAX,
};

// Enum TslGame.ECharFlagsSkipOwner
enum class ECharFlagsSkipOwner : uint8 {
	WantsToRun,
	WantsToSprint,
	WantsToSprintingAuto,
	WantsToRollingLeft,
	WantsToRollingRight,
	AimStateActive,
	IsThirdPerson,
	IsReviving,
	IgnoreRotation,
	IsWeaponObstructed,
	IsObstructedWeaponLookingUpperSide,
	IsCoatEquipped,
	IsThrowHigh,
	WantsToCancelVault,
	IsScopingRemote,
	IsAimingRemote,
	IsFirstPersonRemote,
	IsInVehicleRemote,
	IsPeekLeftRemote,
	IsPeekRightRemote,
	IsHoldingAngled,
	ECharFlagsSkipOwner_MAX,
};

// Enum TslGame.EKickType
enum class EKickType : uint8 {
	None,
	Ground,
	Jump,
	EKickType_MAX,
};

// Enum TslGame.EUnarmedCombatState
enum class EUnarmedCombatState : uint8 {
	None,
	Kick,
	Kicked,
	EUnarmedCombatState_MAX,
};

// Enum TslGame.*8384568f9a
enum class *8384568f9a : uint8 {
	*5273207adc,
	*c940aafc56,
	*dbc4075955,
	*8384568f9a_MAX,
};

// Enum TslGame.EEmotePlayContext
enum class EEmotePlayContext : uint8 {
	None,
	Self,
	TeamParticipation,
	OtherTeamSpectating,
	OtherTeamSameEmote,
	OnStageSpectating,
	OnStageParticipation,
	EEmotePlayContext_MAX,
};

// Enum TslGame.*807a73deb5
enum class *807a73deb5 : uint8 {
	*b94b872590,
	*6e30fa7ef9,
	*d6f2dc64a0,
	*2440323391,
	*10ff7157b0,
	*807a73deb5_MAX,
};

// Enum TslGame.EWeaponCrosshairType
enum class EWeaponCrosshairType : uint8 {
	Main,
	Angled,
	EWeaponCrosshairType_MAX,
};

// Enum TslGame.ECustomGripBlendSpaceType
enum class ECustomGripBlendSpaceType : uint8 {
	None,
	Stand,
	Crouch,
	Prone,
	ProneTransition,
	ProneLocomotion,
	ECustomGripBlendSpaceType_MAX,
};

// Enum TslGame.EMasteryItemType
enum class EMasteryItemType : uint8 {
	Charm,
	Mesh,
	EMasteryItemType_MAX,
};

// Enum TslGame.TableType
enum class TableType : uint8 {
	Ammo,
	Attachment,
	Equipment,
	Skin,
	SkinThrowable,
	Weapon,
	WeaponThrowable,
	WeaponShield,
	Castable,
	UsedByAction,
	Craft,
	VehiclePart,
	Bluechip,
	Market,
	Contender,
	TableType_MAX,
};

// Enum TslGame.*226f2c63ab
enum class *226f2c63ab : uint8 {
	*c80e322baa,
	*168a1e9cf5,
	*0b9839ad65,
	*226f2c63ab_MAX,
};

// Enum TslGame.ECorrectedSpawnLocationTraceType
enum class ECorrectedSpawnLocationTraceType : uint8 {
	Sweep,
	Trace,
	ECorrectedSpawnLocationTraceType_MAX,
};

// Enum TslGame.EThrowableState
enum class EThrowableState : uint8 {
	Idle,
	PinOff,
	Cooking,
	Throw,
	Dropped,
	EThrowableState_MAX,
};

// Enum TslGame.EAIPoseState
enum class EAIPoseState : uint8 {
	Stand,
	Crouch,
	Prone,
	Jump,
	Reload,
	UnArmed,
	EAIPoseState_MAX,
};

// Enum TslGame.*aeffff8711
enum class *aeffff8711 : uint8 {
	*c740f0bfcf,
	*da6b642726,
	*f96da56bac,
	*ad4013ad0d,
	*3c1c6b0da7,
	*79cbb45b31,
	*8c9a4b2039,
	*aeffff8711_MAX,
};

// Enum TslGame.*e3ef44e49c
enum class *e3ef44e49c : uint8 {
	*7ffd9a96a6,
	*56530d82d7,
	*a568983b8d,
	*59afe07c13,
	*5a27cf52f0,
	*e3ef44e49c_MAX,
};

// Enum TslGame.*6b9b87be33
enum class *6b9b87be33 : uint8 {
	*36c0f9409b,
	*0faa645867,
	*ed8d34dd61,
	*12cadc678b,
	*6b9b87be33_MAX,
};

// Enum TslGame.*c31c312d5f
enum class *c31c312d5f : uint8 {
	*6ffb2d6e87,
	*aeacf3b7c9,
	*fef4d01661,
	*91f91f6684,
	*2b2614e734,
	*217b6bc906,
	*98135dae27,
	*c31c312d5f_MAX,
};

// Enum TslGame.*e6603ebfde
enum class *e6603ebfde : uint8 {
	*fdad30208c,
	*a2475710a9,
	*bab6bd3e3b,
	*e9e7dae4f5,
	*e2262dae1f,
	*e6603ebfde_MAX,
};

// Enum TslGame.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8 {
	SWPS_MainShootWeapon1,
	SWPS_MainShootWeapon2,
	SWPS_SubShootWeapon,
	SWPS_MeleeWeapon,
	SWPS_HandProp,
	SWPS_Max,
};

// Enum TslGame.*c2e3ed6da8
enum class *c2e3ed6da8 : uint8 {
	*e2b70b1243,
	*de9f3e99ca,
	*26df98a236,
	*eb4aa51e67,
	*d733c014db,
	*f5aa0e2fd3,
	*b3a37e99d7,
	*c438eba1de,
	*c2e3ed6da8_MAX,
};

// Enum TslGame.*0f3e31b43b
enum class *0f3e31b43b : uint8 {
	*c8c1bee351,
	*a4a4995472,
	*9d3ca473c3,
	*0f3e31b43b_MAX,
};

// Enum TslGame.EAINewFocusPriority
enum class EAINewFocusPriority : uint8 {
	Default,
	Move,
	Gameplay,
	EAINewFocusPriority_MAX,
};

// Enum TslGame.EAIMovePose
enum class EAIMovePose : uint8 {
	Walk,
	Run,
	CrouchSprint,
	KeepCurrentPose,
	EAIMovePose_MAX,
};

// Enum TslGame.EAITriggerAttrType
enum class EAITriggerAttrType : uint8 {
	None,
	Health,
	Energy,
	EAITriggerAttrType_MAX,
};

// Enum TslGame.EAIAttrCompareType
enum class EAIAttrCompareType : uint8 {
	None,
	Great,
	Less,
	EAIAttrCompareType_MAX,
};

// Enum TslGame.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8 {
	Shoot_Weap,
	Backpack,
	other,
	EAIEquipSpawnItemType_MAX,
};

// Enum TslGame.*de200864a2
enum class *de200864a2 : uint8 {
	*dbd0db96e4,
	*9aa75ce802,
	*e4cf11501b,
	*ed9104f002,
	*d84d7bc16f,
	*f0aab3cef5,
	*e389c6afdf,
	*de200864a2_MAX,
};

// Enum TslGame.*fc33e2fffe
enum class *fc33e2fffe : uint8 {
	*467b829817,
	*d90e0ea8f1,
	*57387bc065,
	*5aee82268a,
	*fc33e2fffe_MAX,
};

// Enum TslGame.EAscenderDirection
enum class EAscenderDirection : uint8 {
	RopeForward,
	RopeBackward,
	MAX,
	EAscenderDirection_MAX,
};

// Enum TslGame.EAscenderRopeSubType
enum class EAscenderRopeSubType : uint8 {
	None,
	Ziplinegun,
	EAscenderRopeSubType_MAX,
};

// Enum TslGame.EAscenderRopeType
enum class EAscenderRopeType : uint8 {
	None,
	AscenderRope,
	AscenderZipline,
	EAscenderRopeType_MAX,
};

// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8 {
	Magazine,
	OneByOne,
	OneByOneAndClip,
	EWeaponReloadMethod_MAX,
};

// Enum TslGame.EWeaponReloadCancelReason
enum class EWeaponReloadCancelReason : uint8 {
	Default,
	PlayerInterrupted,
	PlayerMovement,
	PlayerInteraction,
	WeaponSwitch,
	PlayerIncapacitated,
	VehicleMoving,
	EWeaponReloadCancelReason_MAX,
};

// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec : uint8 {
	Tactical,
	Charge,
	Single,
	Loop,
	EWeaponReloadAnimExec_MAX,
};

// Enum TslGame.EWeaponState
enum class EWeaponState : uint8 {
	Idle,
	Firing,
	Reloading,
	EWeaponState_MAX,
};

// Enum TslGame.EWeaponTransitionState
enum class EWeaponTransitionState : uint8 {
	Stable,
	Arming,
	UnArming,
	EWeaponTransitionState_MAX,
};

// Enum TslGame.ESightState
enum class ESightState : uint8 {
	None,
	Seen,
	Visible,
	ESightState_MAX,
};

// Enum TslGame.EPerceptionType
enum class EPerceptionType : uint8 {
	Sight,
	Hearing,
	Attack,
	None,
	EPerceptionType_MAX,
};

// Enum TslGame.EAttachParent
enum class EAttachParent : uint8 {
	None,
	Character,
	WeaponGun,
	EAttachParent_MAX,
};

// Enum TslGame.ETslParticleEnvironmentAttachPolicy
enum class ETslParticleEnvironmentAttachPolicy : uint8 {
	Nearest,
	Manual,
	ETslParticleEnvironmentAttachPolicy_MAX,
};

// Enum TslGame.ESpecialEquipmentType
enum class ESpecialEquipmentType : uint8 {
	Default,
	BluezoneBlocker,
	EmergencyParachute,
	Toolbox,
	TacPack,
	TraumaBag,
	SoftRole,
	ESpecialEquipmentType_MAX,
};

// Enum TslGame.ELogAIMoveToFailureType
enum class ELogAIMoveToFailureType : uint8 {
	Unknown,
	BlockingJumpSkippedByObstacle,
	MoveRequestInvalid,
	NoPathFollowingComponent,
	InvalidDestination,
	NavProjectionFailed,
	BuildPathQueryFailed,
	FindPathFailed,
	RequestMoveFailed,
	Num,
	ELogAIMoveToFailureType_MAX,
};

// Enum TslGame.EItemPickupInfo
enum class EItemPickupInfo : uint8 {
	None,
	RealLooting,
	BluezonePhase,
	FakeLooting,
	CheckWeaponTask,
	Test,
	LootCountByPhase,
	EItemPickupInfo_MAX,
};

// Enum TslGame.EComparisonTarget
enum class EComparisonTarget : uint8 {
	Value,
	BBKey,
	EComparisonTarget_MAX,
};

// Enum TslGame.EAIMapName
enum class EAIMapName : uint8 {
	Baltic,
	Desert,
	Sanhok,
	DihorOtok,
	Summerland,
	Paramo,
	Tiger,
	Chimera,
	Heaven,
	Kiki,
	Other,
	EAIMapName_MAX,
};

// Enum TslGame.EAICommand
enum class EAICommand : uint8 {
	None,
	Moving,
	Battle,
	EAICommand_MAX,
};

// Enum TslGame.EAIActionState
enum class EAIActionState : uint8 {
	Idle,
	Battle,
	BattleMoving,
	Healing,
	Farming,
	Moving,
	Swimming,
	EAIActionState_MAX,
};

// Enum TslGame.EPickupItemStatus
enum class EPickupItemStatus : uint8 {
	NeedWeapon,
	NeedBaseEquip,
	NeedOneMoreWeapon,
	NeedHealItem,
	NeedBoostItem,
	NeedThrowableItem,
	NeedPan,
	NeedNoItem,
	EPickupItemStatus_MAX,
};

// Enum TslGame.EIntoCircleLevel
enum class EIntoCircleLevel : uint8 {
	AlreadyInWhite,
	NearWhite,
	MiddleWhite,
	ReachableWhite,
	UnreachableWhite,
	EIntoCircleLevel_MAX,
};

// Enum TslGame.EValueCompareFunc
enum class EValueCompareFunc : uint8 {
	MoreThan,
	MoreThanOrEqual,
	LessThan,
	LessThanOrEqual,
	Equal,
	NotEqual,
	EValueCompareFunc_MAX,
};

// Enum TslGame.EAIParameter
enum class EAIParameter : uint8 {
	None,
	Offensive,
	PrepareType,
	EAIParameter_MAX,
};

// Enum TslGame.EAIBehaviors
enum class EAIBehaviors : uint8 {
	Normal,
	Chasing,
	Runaway,
	EAIBehaviors_MAX,
};

// Enum TslGame.EComparisonTargetCircle
enum class EComparisonTargetCircle : uint8 {
	WhiteCircle,
	BlueCircle,
	EComparisonTargetCircle_MAX,
};

// Enum TslGame.*4e2812a3b9
enum class *4e2812a3b9 : uint8 {
	*2a716a1279,
	*13addc1b87,
	*029a675e61,
	*4e2812a3b9_MAX,
};

// Enum TslGame.EPercivedGrenadeType
enum class EPercivedGrenadeType : uint8 {
	FragGrenade,
	StickyBomb,
	C4,
	EPercivedGrenadeType_MAX,
};

// Enum TslGame.EEnemyCompareElement
enum class EEnemyCompareElement : uint8 {
	None,
	HouseId,
	EEnemyCompareElement_MAX,
};

// Enum TslGame.EItemEquippedOWnedCheck
enum class EItemEquippedOWnedCheck : uint8 {
	Equipped_Check,
	Owned_Check,
	EItemEquippedOWnedCheck_MAX,
};

// Enum TslGame.EInfoPointWithHouse
enum class EInfoPointWithHouse : uint8 {
	All,
	InHouse,
	OutHouse,
	EInfoPointWithHouse_MAX,
};

// Enum TslGame.ETargetLocation
enum class ETargetLocation : uint8 {
	WhiteCircle,
	OtherLocation,
	ETargetLocation_MAX,
};

// Enum TslGame.ETestMoveDirection
enum class ETestMoveDirection : uint8 {
	Front,
	Back,
	Left,
	Right,
	ETestMoveDirection_MAX,
};

// Enum TslGame.EThownWeapon_AI
enum class EThownWeapon_AI : uint8 {
	GRENADE,
	MOLOTOV,
	SMOKEBOMB,
	FLASHBANG,
	EThownWeapon_MAX,
};

// Enum TslGame.EPatrolSpeed
enum class EPatrolSpeed : uint8 {
	Walk,
	Run,
	Sprint,
	EPatrolSpeed_MAX,
};

// Enum TslGame.*babecc20e7
enum class *babecc20e7 : uint8 {
	*462e3977fc,
	*9095fbc16e,
	*7f95303ed4,
	*585e79cb42,
	*babecc20e7_MAX,
};

// Enum TslGame.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8 {
	Int,
	Float,
	Bool,
	String,
	Object,
	Vector3,
	EModifyBlackboardDataValueType_MAX,
};

// Enum TslGame.EThrowWeaponActionMethod
enum class EThrowWeaponActionMethod : uint8 {
	Default,
	MaintainCookingAndFinish,
	ThrowImmediatelyAndFinish,
	EThrowWeaponActionMethod_MAX,
};

// Enum TslGame.EThownWeapon
enum class EThownWeapon : uint8 {
	GRENADE,
	MOLOTOV,
	SMOKEBOMB,
	FLASHBANG,
	EThownWeapon_MAX,
};

// Enum TslGame.EBoosterItem
enum class EBoosterItem : uint8 {
	ADRENALINE,
	PAINKILLER,
	ENERGYDRINK,
	EBoosterItem_MAX,
};

// Enum TslGame.*f8c1141bc8
enum class *f8c1141bc8 : uint8 {
	*ffa1ff3695,
	*8c12eb4ad1,
	*4607fd4a9a,
	*c5188dbac1,
	*0ad8a2405a,
	*f8c1141bc8_MAX,
};

// Enum TslGame.*e95b905f9f
enum class *e95b905f9f : uint8 {
	*18515dadd7,
	*566977dfd8,
	*1ea0d20e6e,
	*8e8026fea5,
	*1ae0e05208,
	*e95b905f9f_MAX,
};

// Enum TslGame.*57160c5d6d
enum class *57160c5d6d : uint8 {
	*a6c8f0b5eb,
	*06b636b6d2,
	*c9f5f08d26,
	*2208dc1560,
	*57160c5d6d_MAX,
};

// Enum TslGame.EReactionObjectType
enum class EReactionObjectType : uint8 {
	Fence,
	Hay,
	Camera,
	Bamboo,
	BirdCage,
	LandscapeReacting,
	ItemBox,
	EReactionObjectType_MAX,
};

// Enum TslGame.*48701a31d3
enum class *48701a31d3 : uint8 {
	*827f645539,
	*7f910aba38,
	*c90f9c6d79,
	*2cac0f30be,
	*48701a31d3_MAX,
};

// Enum TslGame.ECraftResult
enum class ECraftResult : uint8 {
	Success,
	Invalid_Character,
	Invalid_Inventory,
	Invalid_Equipment,
	Invalid_CraftRepObject,
	Invalid_CraftItemData,
	Invalid_ReservedCraftItem,
	Invalid_PlayerState,
	Not_Enough_Material,
	Not_Enough_Space,
	Miss_Matched_RestrictFilter,
	Restricted_Stance,
	ECraftResult_MAX,
};

// Enum TslGame.EDecoyFiringState
enum class EDecoyFiringState : uint8 {
	Firing,
	BetweenShots,
	BetweenSequences,
	EDecoyFiringState_MAX,
};

// Enum TslGame.EDecoyState
enum class EDecoyState : uint8 {
	Uninitialized,
	Cooking,
	DelayedFiring,
	Firing,
	Reloading,
	DelayedEnding,
	EndOfLife,
	EDecoyState_MAX,
};

// Enum TslGame.EDESPMode
enum class EDESPMode : uint8 {
	None,
	UniformDivision,
	RadiusFromCenter,
	EDESPMode_MAX,
};

// Enum TslGame.ETslUnarmedImpactActionType
enum class ETslUnarmedImpactActionType : uint8 {
	Punch,
	Kick,
	ETslUnarmedImpactActionType_MAX,
};

// Enum TslGame.EDoorKickReactionType
enum class EDoorKickReactionType : uint8 {
	None,
	BreakWholeDoor,
	EDoorKickReactionType_MAX,
};

// Enum TslGame.EDestrucibleSurfaceSourceType
enum class EDestrucibleSurfaceSourceType : uint8 {
	Unknown,
	Projectile,
	Grenade,
	Warhead,
	Slashing,
	EDestrucibleSurfaceSourceType_MAX,
};

// Enum TslGame.EFExplosivePropDataType
enum class EFExplosivePropDataType : uint8 {
	Default,
	PropaneTank,
	SmallTank,
	RacingExplosive,
	GasPump,
	EVCharger,
	EFExplosivePropDataType_MAX,
};

// Enum TslGame.EGlassWindowState
enum class EGlassWindowState : uint8 {
	Normal,
	Breaking,
	Broken,
	EGlassWindowState_MAX,
};

// Enum TslGame.*9c769915a9
enum class *9c769915a9 : uint8 {
	*62c99c3de2,
	*226b57170e,
	*3047247624,
	*df842beb6b,
	*a157835103,
	*9c769915a9_MAX,
};

// Enum TslGame.ELoadingScreenType
enum class ELoadingScreenType : uint8 {
	NONE,
	ICE_BRAKE,
	RULE_SET,
	WEAPON,
	ATTACHMENT,
	EQUIPMENT,
	ITEM,
	VEHICLE,
	SYSTEM,
	DEFAULT,
	GAME_MODE,
	EXPOSE_WITH_HIGHEST_PRIORITY,
	ELoadingScreenType_MAX,
};

// Enum TslGame.*25b51d4008
enum class *25b51d4008 : uint8 {
	*f894302a6a,
	*5df6ab7e6b,
	*40f23515a7,
	*25b51d4008_MAX,
};

// Enum TslGame.EValueType
enum class EValueType : uint8 {
	Float,
	Int,
	String,
	Bool,
	EValueType_MAX,
};

// Enum TslGame.ELobbyCharacterAnimationType
enum class ELobbyCharacterAnimationType : uint8 {
	Default,
	Wardrobe,
	Appearance,
	ELobbyCharacterAnimationType_MAX,
};

// Enum TslGame.ECrosshairOptionMode
enum class ECrosshairOptionMode : uint8 {
	Default,
	Enable,
	Disable,
	ECrosshairOptionMode_MAX,
};

// Enum TslGame.ETslCrosshairDotType
enum class ETslCrosshairDotType : uint8 {
	None,
	Dot,
	ThreeDots,
	Ring,
	Square,
	Triangle,
	Cross,
	Star,
	Heart,
	Pistol,
	ETslCrosshairDotType_MAX,
};

// Enum TslGame.ETslCrosshairShape
enum class ETslCrosshairShape : uint8 {
	CrossWithFocus,
	Cross,
	TShape,
	YShape,
	Dash,
	Ring,
	Shotgun,
	Pistol,
	None,
	Throwable,
	FlareGun,
	Zipline,
	ETslCrosshairShape_MAX,
};

// Enum TslGame.EOptionTab
enum class EOptionTab : uint8 {
	Graphics,
	Audio,
	Controls,
	Gameplay,
	KeyBindings,
	Count,
	EOptionTab_MAX,
};

// Enum TslGame.ETslGameOptionKeyBindingType
enum class ETslGameOptionKeyBindingType : uint8 {
	None,
	Action,
	Axis,
	ETslGameOptionKeyBindingType_MAX,
};

// Enum TslGame.ETslGameOptionSupplementaryType
enum class ETslGameOptionSupplementaryType : uint8 {
	None,
	KeyboardLayout,
	PreviewImage,
	PreviewCrosshair,
	VolumeUnitMeter,
	PreviewMaterial,
	LinkButton,
	ETslGameOptionSupplementaryType_MAX,
};

// Enum TslGame.EDynamicWeather
enum class EDynamicWeather : uint8 {
	NotInitialized,
	Initialized,
	BlendInStarted,
	Saturated,
	BlendOutStarted,
	BlendOutEnded,
	Finished,
	EDynamicWeather_MAX,
};

// Enum TslGame.ETslWeatherAction
enum class ETslWeatherAction : uint8 {
	NotDefined,
	Initialized,
	Prolonged,
	ETslWeatherAction_MAX,
};

// Enum TslGame.*db39f12970
enum class *db39f12970 : uint8 {
	*3c7b3a3cd2,
	*7a6eafc818,
	*efc993e78f,
	*9e30b3b600,
	*db39f12970_MAX,
};

// Enum TslGame.*4fc9cdf529
enum class *4fc9cdf529 : uint8 {
	*fbb8092983,
	*a5ef2d2e25,
	*6fddfc6a24,
	*393c39eecb,
	*f140976f23,
	*4fc9cdf529_MAX,
};

// Enum TslGame.ESeatDirection
enum class ESeatDirection : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	DirMax,
	ESeatDirection_MAX,
};

// Enum TslGame.ETslControllerType
enum class ETslControllerType : uint8 {
	Mouse,
	GamePad,
	Total,
	ETslControllerType_MAX,
};

// Enum TslGame.ECombinationKeyHoldType
enum class ECombinationKeyHoldType : uint8 {
	LastKeyTap,
	AllKeysHold,
	AllKeysTap,
	ECombinationKeyHoldType_MAX,
};

// Enum TslGame.ETableCheckerHideOption
enum class ETableCheckerHideOption : uint8 {
	Hide,
	Show,
	ETableCheckerHideOption_MAX,
};

// Enum TslGame.EKeyHintGradeSettingValue
enum class EKeyHintGradeSettingValue : uint8 {
	Basic,
	Advanced,
	EKeyHintGradeSettingValue_MAX,
};

// Enum TslGame.EKeyHintGradeBitmask
enum class EKeyHintGradeBitmask : uint8 {
	Basic,
	Advanced,
	EKeyHintGradeBitmask_MAX,
};

// Enum TslGame.EDLSSModelOption
enum class EDLSSModelOption : uint8 {
	CNN,
	Transformer,
	EDLSSModelOption_MAX,
};

// Enum TslGame.EUpscalingQualityOption
enum class EUpscalingQualityOption : uint8 {
	UltraPerformance,
	Performance,
	Balanced,
	Quality,
	MaxQuality,
	Auto,
	EUpscalingQualityOption_MAX,
};

// Enum TslGame.EUpscalingMethod
enum class EUpscalingMethod : uint8 {
	None,
	DLSS,
	FSR,
	EUpscalingMethod_MAX,
};

// Enum TslGame.EBeginningState
enum class EBeginningState : uint8 {
	Invalid,
	Normal,
	StartIsland,
	Airplane,
	Skydiving,
	Parachuting,
	EBeginningState_MAX,
};

// Enum TslGame.EGameStartupTimeRecordType
enum class EGameStartupTimeRecordType : uint8 {
	ExecPubgBegin,
	ClientBegin,
	MoviePlaying,
	MovieEnded,
	WelcomeScreenLoadStarted,
	WelcomeScreenLoadEnded,
	LobbyLoadStarted,
	LobbyLoadEnded,
	Count,
	SectionSeparator,
	EGameStartupTimeRecordType_MAX,
};

// Enum TslGame.EBlueChipTowerInteractState
enum class EBlueChipTowerInteractState : uint8 {
	Inactive_NoTower,
	Inactive_Crouching,
	Inactive_BodyCarry,
	Inactive_Occupied,
	Inactive_Cooltime,
	Inactive_Breakdown,
	Inactive_InvalidPhase,
	CastFail_DisconnectedTeamBlueChip,
	CastFail_CharacterAccel,
	CastFail_RevivalDisabled,
	CastFail_NoTeamBlueChip,
	CastFail_NoEnemyBlueChip,
	CastFail_DifferentBlueChipCount,
	CastFail_UnRetrievable,
	Allowed,
	EBlueChipTowerInteractState_MAX,
};

// Enum TslGame.EInteractionPriority
enum class EInteractionPriority : uint8 {
	PlantedBomb,
	Character,
	Max,
	EInteractionPriority_MAX,
};

// Enum TslGame.ETdmSpawnKit
enum class ETdmSpawnKit : uint8 {
	Shotgun,
	Smg,
	Ar,
	Dmr,
	Sr,
	Etc,
	Max,
	ETdmSpawnKit_MAX,
};

// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType : uint8 {
	Bundle,
	Generator,
	ELobbyItemBundleType_MAX,
};

// Enum TslGame.*27e7816e3f
enum class *27e7816e3f : uint8 {
	*e52d34800a,
	*da065c1ca5,
	*6d7fda1c1d,
	*5bd2d08052,
	*ff9f3f15c8,
	*50c01e0b1f,
	*84de475d50,
	*e25b7d70f9,
	*c288f10659,
	*6510b4acea,
	*c5b6396660,
	*15a392469a,
	*9b36282714,
	*27e7816e3f_MAX,
};

// Enum TslGame.ELocationType
enum class ELocationType : uint8 {
	LANDMARK,
	EXTRA_LANDMARK,
	CITY,
	CITY_DETAIL,
	TOWN,
	COMPOUNDS,
	EXTRA,
	TEST_SHOW_ALL,
	ELocationType_MAX,
};

// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel : uint8 {
	R,
	G,
	B,
	A,
	RGBA,
	Undefined,
	EParameterLUTChannel_MAX,
};

// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType : uint8 {
	Bool,
	Scalar,
	Vector,
	Texture,
	Undefined,
	EMaterialParameterType_MAX,
};

// Enum TslGame.*f7929dcc90
enum class *f7929dcc90 : uint8 {
	*fe2d650b61,
	*96d6ee8ce4,
	*1b4c3f782e,
	*cbe4c9a477,
	*f7929dcc90_MAX,
};

// Enum TslGame.ENpcDirection
enum class ENpcDirection : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	ForwardRight,
	BackwardRight,
	BackwardLeft,
	ForwardLeft,
	ENpcDirection_MAX,
};

// Enum TslGame.ENpcWalkingSpeedType
enum class ENpcWalkingSpeedType : uint8 {
	Idle,
	Walk,
	Run,
	Sprint,
	None,
	ENpcWalkingSpeedType_MAX,
};

// Enum TslGame.ENpcCharacterStateType
enum class ENpcCharacterStateType : uint8 {
	Default,
	Respawn,
	Fire1,
	Fire2,
	Fire3,
	Knockback,
	Knockdown,
	Getup,
	ThrowPhase1,
	ThrowPhase2,
	ThrowPhase3,
	Blind,
	Despawn,
	RunnerScream,
	ThrowBuff,
	Scream,
	Kidnap,
	Dash,
	InSafeZone,
	MeleeAttackWhileKidnapping,
	DoctorThrowPhase1,
	DoctorThrowPhase2,
	DoctorThrowPhase3,
	ENpcCharacterStateType_MAX,
};

// Enum TslGame.ERandomType
enum class ERandomType : uint8 {
	Random,
	Shuffle,
	Ascending,
	Descending,
	ERandomType_MAX,
};

// Enum TslGame.ECustomAnimDataType
enum class ECustomAnimDataType : uint8 {
	CustomAnimData,
	AnimSequence,
	ECustomAnimDataType_MAX,
};

// Enum TslGame.ECustomAnimSlotType
enum class ECustomAnimSlotType : uint8 {
	FullBody,
	UpperBody,
	FullBodyInstance,
	UpperBodyInstance,
	LowerBody,
	ECustomAnimSlotType_MAX,
};

// Enum TslGame.ERetriggerCounter
enum class ERetriggerCounter : uint8 {
	First,
	Sec,
	Third,
	Fourth,
	ERetriggerCounter_MAX,
};

// Enum TslGame.EPathDebugType
enum class EPathDebugType : uint8 {
	None,
	Location,
	SelectNpc,
	EPathDebugType_MAX,
};

// Enum TslGame.*03fd6e3082
enum class *03fd6e3082 : uint8 {
	*139b62e2b3,
	*93b71d5e4e,
	*4448679c64,
	*9179cb3a37,
	*248ae0f002,
	*03fd6e3082_MAX,
};

// Enum TslGame.*4a0f4201b8
enum class *4a0f4201b8 : uint8 {
	*0a15db5a27,
	*4e7521c6ec,
	*1fe075ca60,
	*3093dfee82,
	*4a0f4201b8_MAX,
};

// Enum TslGame.*a7e029bc99
enum class *a7e029bc99 : uint8 {
	*909427d3e4,
	*5a64207294,
	*d0a0aac0d7,
	*ce6e930085,
	*a7e029bc99_MAX,
};

// Enum TslGame.*1781a33a16
enum class *1781a33a16 : uint8 {
	*49896b150a,
	*1c07beb70d,
	*17d9ae2cef,
	*0b1eda97a0,
	*1781a33a16_MAX,
};

// Enum TslGame.ETargetInteractionPurpose
enum class ETargetInteractionPurpose : uint8 {
	Move,
	Reset,
	ETargetInteractionPurpose_MAX,
};

// Enum TslGame.ECamoNetState
enum class ECamoNetState : uint8 {
	None,
	Casting,
	Deployed,
	Removing,
	Destroyed,
	ECamoNetState_MAX,
};

// Enum TslGame.ESpareTireProcessState
enum class ESpareTireProcessState : uint8 {
	None,
	PutWorking,
	PutCancel,
	PutFinish,
	TakeWorking,
	TakeCancel,
	TakeFinish,
	ESpareTireProcessState_MAX,
};

// Enum TslGame.ESmokeReleaseObjectType
enum class ESmokeReleaseObjectType : uint8 {
	Default,
	SmokeCylinder_Long,
	SmokeCylinder_Short,
	ESmokeReleaseObjectType_MAX,
};

// Enum TslGame.EMapColor
enum class EMapColor : uint8 {
	Undefined,
	Red,
	Green,
	Blue,
	Yellow,
	EMapColor_MAX,
};

// Enum TslGame.EDeathDropBoxMovementState
enum class EDeathDropBoxMovementState : uint8 {
	None,
	PickUpMovement,
	DropMovement,
	ImpactWater,
	EDeathDropBoxMovementState_MAX,
};

// Enum TslGame.EPackageDoorState
enum class EPackageDoorState : uint8 {
	CLOSED,
	OPENING,
	OPENED,
	EPackageDoorState_MAX,
};

// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType : uint8 {
	None,
	Probability,
	TotalCount,
	EThingGroupSpawnType_MAX,
};

// Enum TslGame.*287f0f50d3
enum class *287f0f50d3 : uint8 {
	*b7a760f1e8,
	*38d42f5da1,
	*e449e539ca,
	*91ab99d859,
	*95ffcc987c,
	*6d45c32639,
	*95e17921f1,
	*8d2c988d3c,
	*287f0f50d3_MAX,
};

// Enum TslGame.ETeamParkourRole
enum class ETeamParkourRole : uint8 {
	Role_None,
	Role_Supporter,
	Role_Uploader,
	Role_MAX,
};

// Enum TslGame.ETeamParkourState
enum class ETeamParkourState : uint8 {
	None,
	ReadyToRaising,
	ReadyToPulling,
	Uploading,
	Finish,
	Failed,
	ETeamParkourState_MAX,
};

// Enum TslGame.*1a9e676ab5
enum class *1a9e676ab5 : uint8 {
	*f5e8d64b7c,
	*90b4f1e5a7,
	*5817b24090,
	*32b393a7b9,
	*b688539186,
	*1a9e676ab5_MAX,
};

// Enum TslGame.*2980aca18d
enum class *2980aca18d : uint8 {
	*142527f2df,
	*1d69d63387,
	*c9940f65b1,
	*6ea7969ff2,
	*2980aca18d_MAX,
};

// Enum TslGame.*ba77cddb97
enum class *ba77cddb97 : uint8 {
	*76c7051a92,
	*8ebc4fca1a,
	*92b338572f,
	*927d4c9a40,
	*d3c39cfbec,
	*700fc04215,
	*ba77cddb97_MAX,
};

// Enum TslGame.EContainerState
enum class EContainerState : uint8 {
	Closed,
	Opening,
	Opened,
	EContainerState_MAX,
};

// Enum TslGame.ESpawnDestroyTiming
enum class ESpawnDestroyTiming : uint8 {
	Undefined,
	SpawnOnMatchStart,
	DestoryOnMatchStart,
	ESpawnDestroyTiming_MAX,
};

// Enum TslGame.ETutorialEnemyActionType
enum class ETutorialEnemyActionType : uint8 {
	None,
	MoveTo,
	LookRotation,
	ShootAtPlayer,
	Battle,
	Death,
	ETutorialEnemyActionType_MAX,
};

// Enum TslGame.EDuoBotActionType
enum class EDuoBotActionType : uint8 {
	None,
	MoveTo,
	LookRotation,
	PlayEmote,
	Wait,
	Parachute,
	DBNO,
	Death,
	PickupWeapon,
	Battle,
	LookAt,
	UseCastableItem,
	EDuoBotActionType_MAX,
};

// Enum TslGame.ETutorialEnemyDropType
enum class ETutorialEnemyDropType : uint8 {
	None,
	Equipment,
	Custom,
	ETutorialEnemyDropType_MAX,
};

// Enum TslGame.*0835c4cbd0
enum class *0835c4cbd0 : uint8 {
	*0545528230,
	*9dfaca4693,
	*8611b7fdc2,
	*0835c4cbd0_MAX,
};

// Enum TslGame.EHelicopterState
enum class EHelicopterState : uint8 {
	Normal,
	Smoke,
	Explosion,
	EHelicopterState_MAX,
};

// Enum TslGame.EEmPickup_PathValidationState
enum class EEmPickup_PathValidationState : uint8 {
	None,
	InProgress,
	Valid,
	Invalid,
	EEmPickup_MAX,
};

// Enum TslGame.*e89d2346d9
enum class *e89d2346d9 : uint8 {
	*75acccf158,
	*c511a88755,
	*6a27a8e5c9,
	*929e64912a,
	*8913cecab6,
	*1c30d8edd6,
	*83ad223114,
	*cec2fcf0fe,
	*e16ad8b2eb,
	*b76b27c472,
	*1898c2a6ca,
	*c64c15307b,
	*9b6a948aa7,
	*e89d2346d9_MAX,
};

// Enum TslGame.EAnimSharedStateKey
enum class EAnimSharedStateKey : uint8 {
	VehicleSubAnim,
	LocomotionSubAnim,
	IKSubAnim,
	Max,
	EAnimSharedStateKey_MAX,
};

// Enum TslGame.*e13dfcf288
enum class *e13dfcf288 : uint8 {
	*82cc5f9bf0,
	*14c5813f36,
	*e421f844b6,
	*88c8572cd0,
	*e13dfcf288_MAX,
};

// Enum TslGame.*40bb6af353
enum class *40bb6af353 : uint8 {
	*b71c0b9a1c,
	*1d76738356,
	*fcc9f818b0,
	*46e81eb3f8,
	*9df72ce94d,
	*da3e4f7f6c,
	*40bb6af353_MAX,
};

// Enum TslGame.*aa0b6ca6ba
enum class *aa0b6ca6ba : uint8 {
	*bd5e964ce4,
	*c68ffc1f84,
	*dbea41b5aa,
	*b91bfc02ec,
	*f94d9be1ba,
	*ab77885662,
	*df70f804fb,
	*ae06c33d48,
	*6ae777c334,
	*aa0b6ca6ba_MAX,
};

// Enum TslGame.ETslTrainingTeleportType
enum class ETslTrainingTeleportType : uint8 {
	InfoThumnail,
	MapIconVolume,
	NONE,
	ETslTrainingTeleportType_MAX,
};

// Enum TslGame.ETslTrainingType
enum class ETslTrainingType : uint8 {
	Aim_Sound_Lab,
	Grenades,
	FiringRange,
	VehicleSpot,
	GunItemSpot,
	CarShootingRange,
	JumpSchool,
	PracticeRange,
	OneOnOneArena,
	NONE,
	ETslTrainingType_MAX,
};

// Enum TslGame.ETrainingScoreType
enum class ETrainingScoreType : uint8 {
	None,
	HeadShot,
	Kill,
	SoundCatch,
	TotalScore,
	AimAccuracy,
	ETrainingScoreType_MAX,
};

// Enum TslGame.ETrainingPracticeType
enum class ETrainingPracticeType : uint8 {
	None,
	Practice_Aim,
	Practice_Sound,
	ETrainingPracticeType_MAX,
};

// Enum TslGame.EOneOnOneResultType
enum class EOneOnOneResultType : uint8 {
	None,
	Lose,
	Win,
	Draw,
	Escape,
	EOneOnOneResultType_MAX,
};

// Enum TslGame.EOneOnOneSideType
enum class EOneOnOneSideType : uint8 {
	None,
	Home,
	Away,
	Audience,
	EOneOnOneSideType_MAX,
};

// Enum TslGame.EOneOnOneStageType
enum class EOneOnOneStageType : uint8 {
	None,
	Arena,
	Audience,
	EOneOnOneStageType_MAX,
};

// Enum TslGame.*1439e49d05
enum class *1439e49d05 : uint8 {
	*de4ab7818e,
	*74b5e68289,
	*2f40eec874,
	*a009a34417,
	*1439e49d05_MAX,
};

// Enum TslGame.ERepairKitTargetType
enum class ERepairKitTargetType : uint8 {
	None,
	DroppedItem,
	Character,
	Vehicle,
	ERepairKitTargetType_MAX,
};

// Enum TslGame.ELobbySceneTravelState
enum class ELobbySceneTravelState : uint8 {
	Started,
	Inprogress,
	InprogressEnd,
	Finished,
	ELobbySceneTravelState_MAX,
};

// Enum TslGame.ETslPreloadPriority
enum class ETslPreloadPriority : uint8 {
	Static,
	Dynamic,
	ETslPreloadPriority_MAX,
};

// Enum TslGame.EBlueChipTowerState
enum class EBlueChipTowerState : uint8 {
	IsUnavailable,
	IsAvailable,
	IsInUse,
	IsInItemCall,
	IsInRetrieve,
	IsLaunching,
	IsItemCallLaunching,
	RegisterFinished,
	ItemCallFinished,
	RetrieveFinished,
	NeedToCharge,
	Cancel,
	Broken,
	EBlueChipTowerState_MAX,
};

// Enum TslGame.BlueChipTowerAnimState
enum class BlueChipTowerAnimState : uint8 {
	Wait,
	IsInUse,
	Success,
	BlueChipTowerAnimState_MAX,
};

// Enum TslGame.EFollowTargetType
enum class EFollowTargetType : uint8 {
	Bot,
	CurrentPlayer,
	EFollowTargetType_MAX,
};

// Enum TslGame.EControlDebuffType
enum class EControlDebuffType : uint8 {
	None,
	Stun,
	Trap,
	Slow,
	EControlDebuffType_MAX,
};

// Enum TslGame.EBulletproofShieldDurabilityState
enum class EBulletproofShieldDurabilityState : uint8 {
	None,
	Normal,
	Damaged,
	DamagedSeverely,
	Destroyed,
	EBulletproofShieldDurabilityState_MAX,
};

// Enum TslGame.EBulletproofShieldInstallState
enum class EBulletproofShieldInstallState : uint8 {
	None,
	InstallInprogress,
	InstallComplete,
	Destroyed,
	EBulletproofShieldInstallState_MAX,
};

// Enum TslGame.ELobbyWeaponProcessorSlot
enum class ELobbyWeaponProcessorSlot : uint8 {
	CustomizeViewModeSlot,
	LobbyPoseSlot,
	None,
	ELobbyWeaponProcessorSlot_MAX,
};

// Enum TslGame.EBodyCarryState
enum class EBodyCarryState : uint8 {
	Inactive,
	Active,
	PickingUp,
	Dropping,
	EBodyCarryState_MAX,
};

// Enum TslGame.ECustomDamageEventReactionType
enum class ECustomDamageEventReactionType : uint8 {
	SpawnActor,
	StopSpawnedParticles,
	HideMesh,
	HideMeshInstance,
	HideBone,
	ApplyPhysicalAnimationProfile,
	SetCollisionEnabled,
	ECustomDamageEventReactionType_MAX,
};

// Enum TslGame.*7a0cb1d14c
enum class *7a0cb1d14c : uint8 {
	*ca9fe76a74,
	*aa8bb3ea5b,
	*6b4f7527c6,
	*7a0cb1d14c_MAX,
};

// Enum TslGame.EScmCollisionGroup
enum class EScmCollisionGroup : uint8 {
	Default,
	FireField,
	ExplosiveItem,
	EScmCollisionGroup_MAX,
};

// Enum TslGame.EDamageFieldType
enum class EDamageFieldType : uint8 {
	Default,
	DirectTick,
	EDamageFieldType_MAX,
};

// Enum TslGame.*b35d505d5b
enum class *b35d505d5b : uint8 {
	*036cf293c8,
	*fd5f09b485,
	*a3b8ee4371,
	*baa11d0331,
	*b35d505d5b_MAX,
};

// Enum TslGame.*8c2d006a59
enum class *8c2d006a59 : uint8 {
	*f2cf9199e2,
	*b1b0b87fe7,
	*2b85c4d0fb,
	*565f2e0a4b,
	*8c2d006a59_MAX,
};

// Enum TslGame.*79e53bc1f0
enum class *79e53bc1f0 : uint8 {
	*353997e137,
	*1b2afdb65d,
	*a876835ae1,
	*a67cfcd006,
	*79e53bc1f0_MAX,
};

// Enum TslGame.ENaviGamepadInputType
enum class ENaviGamepadInputType : uint8 {
	DPad_Pressed,
	DPad_Released,
	Axis,
	Axis_Hold,
	ENaviGamepadInputType_MAX,
};

// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector : uint8 {
	None,
	Use_2,
	Use_3,
	Use_4,
	Use_5,
	MAX,
	ETslFenceSelector_MAX,
};

// Enum TslGame.EVehicleEngineState
enum class EVehicleEngineState : uint8 {
	EEngineStateAutoOff,
	EEngineStateAutoOn,
	EEngineStateManualOff,
	EEngineStateManualOn,
	EVehicleEngineState_MAX,
};

// Enum TslGame.*66f021d81f
enum class *66f021d81f : uint8 {
	*11ccb4124d,
	*58b81544f0,
	*cc7d882ff1,
	*af3f36bddc,
	*66f021d81f_MAX,
};

// Enum TslGame.ERespawnAircraftRouteType
enum class ERespawnAircraftRouteType : uint8 {
	BlueZone,
	MapCenter,
	Designated,
	Random,
	ERespawnAircraftRouteType_MAX,
};

// Enum TslGame.EBalanceType
enum class EBalanceType : uint8 {
	Float,
	Int,
	Bool,
	EBalanceType_MAX,
};

// Enum TslGame.EItemSpawnType
enum class EItemSpawnType : uint8 {
	FixedRatioAndAdjustableTotalNumber,
	AdjustableRatioAndFixedTotalNumber,
	AdjustableRatioAndAdjustableTotalNumber,
	Invalid,
	EItemSpawnType_MAX,
};

// Enum TslGame.EUltronEnableState
enum class EUltronEnableState : uint8 {
	Disabled,
	Enabled,
	MissingParameter,
	WrongMap,
	EUltronEnableState_MAX,
};

// Enum TslGame.EItemClientAnimSeqUnload
enum class EItemClientAnimSeqUnload : uint8 {
	None,
	Disable,
	Enable,
	EItemClientAnimSeqUnload_MAX,
};

// Enum TslGame.EGarageState
enum class EGarageState : uint8 {
	None,
	DoorClosed,
	DoorOpening,
	DoorOpenedWithSiren,
	DoorOpenedWithFlashing,
	FinalState,
	EGarageState_MAX,
};

// Enum TslGame.EGasPumpType
enum class EGasPumpType : uint8 {
	Fuel,
	Electric,
	EGasPumpType_MAX,
};

// Enum TslGame.EGasPumpState
enum class EGasPumpState : uint8 {
	Inactive,
	StartFueling,
	StopFueling,
	StopFuelingFull,
	EGasPumpState_MAX,
};

// Enum TslGame.*6c6251c484
enum class *6c6251c484 : uint8 {
	*32b33336db,
	*47485865ef,
	*ed232694a4,
	*6c6251c484_MAX,
};

// Enum TslGame.*fcf7a06667
enum class *fcf7a06667 : uint8 {
	*b568d7646d,
	*fffbd1530c,
	*ff1a3c290a,
	*225b9c2637,
	*fcf7a06667_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_InteractionType
enum class ETslIngameMission_ConditionData_InteractionType : uint8 {
	None,
	VehicleRadio,
	BodyCarry,
	InteractableActor,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_PlaceType
enum class ETslIngameMission_Condition_PlaceType : uint8 {
	None,
	SecretRoom,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_VisitType
enum class ETslIngameMission_ConditionData_VisitType : uint8 {
	None,
	Region,
	Place,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ReviveType
enum class ETslIngameMission_ConditionData_ReviveType : uint8 {
	None,
	SelfDBNO,
	TeamDBNO,
	Bluechip,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_ParkourType
enum class ETslIngameMission_Condition_ParkourType : uint8 {
	None,
	Vaulting,
	Cooperative,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_KillType
enum class ETslIngameMission_ConditionData_KillType : uint8 {
	None,
	Vehicle,
	RidingShot,
	HeadShot,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_KillAssistType
enum class ETslIngameMission_ConditionData_KillAssistType : uint8 {
	Kill,
	Assist,
	KillOrAssist,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_Condition_ComparisonType
enum class ETslIngameMission_Condition_ComparisonType : uint8 {
	Less,
	Greater,
	ETslIngameMission_Condition_MAX,
};

// Enum TslGame.ETslIngameMission_CoditionData_VehicleType
enum class ETslIngameMission_CoditionData_VehicleType : uint8 {
	None,
	Floating,
	Wheeled,
	MotorBike,
	Flying,
	All,
	ETslIngameMission_CoditionData_MAX,
};

// Enum TslGame.ETslIngameMission_CoditionData_MoveType
enum class ETslIngameMission_CoditionData_MoveType : uint8 {
	None,
	Walk,
	Drive,
	Parachute,
	Swim,
	SafeZone,
	ETslIngameMission_CoditionData_MAX,
};

// Enum TslGame.ETslIngameMissionCondition_FlareGunUsage
enum class ETslIngameMissionCondition_FlareGunUsage : uint8 {
	None,
	BRDM,
	CarePackage,
	ETslIngameMissionCondition_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemType
enum class ETslIngameMission_ConditionData_ItemType : uint8 {
	Any,
	Equipable,
	Weapon,
	Castable,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemUseType
enum class ETslIngameMission_ConditionData_ItemUseType : uint8 {
	None,
	ItemConsume,
	Flaregun,
	ItemThrow,
	FireWeapon,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMission_ConditionData_ItemMissionType
enum class ETslIngameMission_ConditionData_ItemMissionType : uint8 {
	None,
	PickUp,
	Use,
	Request,
	Give,
	ETslIngameMission_ConditionData_MAX,
};

// Enum TslGame.ETslIngameMissionRewardType
enum class ETslIngameMissionRewardType : uint8 {
	Normal,
	Jackpot,
	ETslIngameMissionRewardType_MAX,
};

// Enum TslGame.ETslIngameMissionType
enum class ETslIngameMissionType : uint8 {
	None,
	Newbie,
	Easy,
	Normal,
	Hard,
	Event,
	ETslIngameMissionType_MAX,
};

// Enum TslGame.*16e7e0949d
enum class *16e7e0949d : uint8 {
	*c5d46002b1,
	*996e98b2a9,
	*ce891e9a20,
	*16e7e0949d_MAX,
};

// Enum TslGame.ETslIngameMissionFailReason
enum class ETslIngameMissionFailReason : uint8 {
	Success,
	Invalid_IngameMissionManagerClass,
	Invalid_IngameMissionManagerObject,
	Invalid_IngameMissionDataTables,
	Invalid_IngameMissionCondition,
	Fail_EnableIngameMission,
	Fail_CheckMissionActivation_MissionDataNull,
	Fail_CheckMissionActivation_Inactive,
	Fail_CheckMissionActivation_InvalidMap,
	Fail_CheckMissionActivation_InvalidMode,
	Fail_CheckMissionActivation_LackTeammates,
	Fail_CheckMissionActivation_GameStateNull,
	Fail_CheckMissionActivation_ReachSurvivalLvLimit,
	Fail_CheckMissionActivation_UsedMission,
	Fail_CheckRewardActivation_MissionDataNull,
	Fail_CheckRewardActivation_InvalidMap,
	Fail_ReplaceMission_InvalidMissionId,
	Fail_ReplaceMission_MissionCompleted,
	Fail_ReplaceMission_NoDataLeft,
	Fail_ReplaceMission_ReachReplacementLimit,
	Fail_ProcessNewMission_TooFewMissions,
	Fail_ProcessNewMission_InvalidIndex,
	ETslIngameMissionFailReason_MAX,
};

// Enum TslGame.EFireworkLauncherState
enum class EFireworkLauncherState : uint8 {
	ACTIVATED,
	DEACTIVATED_TEMPORARILY_BY_FIRE_DELAY,
	DEACTIVATED_PERMANENTLY_BY_OUT_OF_STOCK,
	EFireworkLauncherState_MAX,
};

// Enum TslGame.EInteractionSpawnerState
enum class EInteractionSpawnerState : uint8 {
	ACTIVATED,
	DEACTIVATED_OPERATING,
	DEACTIVATED_SHOWING_RESULT,
	DEACTIVATED_TEMPORARILY_BY_INTERACTION_DELAY,
	DEACTIVATED_TEMPORARILY_BY_DAMAGE,
	DEACTIVATED_TEMPORARILY_BY_JACKPOT,
	DEACTIVATED_PERMANANTLY_BY_EXCEEDED_MAX_INTERACTION_COUNT,
	EInteractionSpawnerState_MAX,
};

// Enum TslGame.ESatelliteItemPackageGroup
enum class ESatelliteItemPackageGroup : uint8 {
	A,
	B,
	C,
	D,
	None,
	ESatelliteItemPackageGroup_MAX,
};

// Enum TslGame.JukeBoxAnimState
enum class JukeBoxAnimState : uint8 {
	OPEN,
	CLOSED,
	JukeBoxAnimState_MAX,
};

// Enum TslGame.ELivingThingThreatLevel
enum class ELivingThingThreatLevel : uint8 {
	NoChanged,
	IncrementThreatLevel,
	DecrementThreatLevel,
	Calm,
	Fear,
	Panic,
	Dead,
	MAX,
	ELivingThingThreatLevel_MAX,
};

// Enum TslGame.ELivingThingCustomEvent
enum class ELivingThingCustomEvent : uint8 {
	HittedByBullet,
	HittedByExplosion,
	HittedByCar,
	HittedByCharacter,
	HittedByLivingThing,
	HittedByPhysicsBody,
	HittedByOthers,
	Custom1,
	Custom2,
	Custom3,
	Custom4,
	Custom5,
	Custom6,
	Custom7,
	Custom8,
	Custom9,
	Custom10,
	Custom11,
	Custom12,
	Custom13,
	Custom14,
	Custom15,
	Custom16,
	Custom17,
	Custom18,
	Custom19,
	Custom20,
	MAX,
	ELivingThingCustomEvent_MAX,
};

// Enum TslGame.ETLMeshSelection
enum class ETLMeshSelection : uint8 {
	Auto,
	StaticMesh,
	SkeletalMesh,
	None,
	ETLMeshSelection_MAX,
};

// Enum TslGame.ETslOfflineModeLoadResult
enum class ETslOfflineModeLoadResult : uint8 {
	Success,
	FileNotFound,
	DecryptFailed,
	DecompressFailed,
	ParseFailed,
	ETslOfflineModeLoadResult_MAX,
};

// Enum TslGame.EMissileState
enum class EMissileState : uint8 {
	None,
	Initialized,
	Falling,
	HitGroundButNotExploded,
	ExplodingOnLandscapeOrRoad,
	ExplodingOnAir,
	ExplodingImmediately,
	EMissileState_MAX,
};

// Enum TslGame.EDeployedAirDropState
enum class EDeployedAirDropState : uint8 {
	Transporting,
	Falling,
	Landing,
	EDeployedAirDropState_MAX,
};

// Enum TslGame.EEmPickupAircraftStatus
enum class EEmPickupAircraftStatus : uint8 {
	Available,
	InvalidPhase_Early,
	InvalidPhase_Late,
	QueueFull,
	Disabled,
	EEmPickupAircraftStatus_MAX,
};

// Enum TslGame.ETslRevivalPlayerState
enum class ETslRevivalPlayerState : uint8 {
	None,
	Initialized,
	Dead,
	RevivalTarget,
	RevivalRegisted,
	Revived,
	ETslRevivalPlayerState_MAX,
};

// Enum TslGame.EGpuVendor
enum class EGpuVendor : uint8 {
	Unknown,
	Nvidia,
	Amd,
	Intel,
	EGpuVendor_MAX,
};

// Enum TslGame.ETurnTableAnimState
enum class ETurnTableAnimState : uint8 {
	PLAYING,
	STOPPED,
	ETurnTableAnimState_MAX,
};

// Enum TslGame.EMaterialParamType
enum class EMaterialParamType : uint8 {
	Scalar,
	Vector,
	EMaterialParamType_MAX,
};

// Enum TslGame.ETslParticleCullType
enum class ETslParticleCullType : uint8 {
	None,
	Distance,
	Frustum,
	LastRenderedTime,
	SameTransform,
	NearbyTransform,
	DistAndFrustumAndNear,
	All,
	ETslParticleCullType_MAX,
};

// Enum TslGame.ETslParticleGroupPriority
enum class ETslParticleGroupPriority : uint8 {
	High,
	Low,
	ETslParticleGroupPriority_MAX,
};

// Enum TslGame.EBlueBombState
enum class EBlueBombState : uint8 {
	None,
	Planted,
	Activated,
	CircleAreaEffectEnded,
	Destroyed,
	EBlueBombState_MAX,
};

// Enum TslGame.EMatchLogTab
enum class EMatchLogTab : uint8 {
	All,
	Squad,
	You,
	EMatchLogTab_MAX,
};

// Enum TslGame.EPlayerAction
enum class EPlayerAction : uint8 {
	ToggleCrouch,
	ToggleCameraTpptoFpp,
	ToggleCameraFpptoTpp,
	PeekLeft,
	PeekRight,
	HoldBreath,
	HoldAngled,
	ToggleQuickThrow,
	StartCookingThrowable,
	WeaponInspection,
	ToggleEngine,
	SetMapMarkerAtCurrentPosition,
	AddWayPoint,
	ToggleExtendedMinimap,
	ToggleEmoteWheel,
	ToggleThrowableItemWheel,
	ToggleHealItemWheel,
	ToggleRadioMessageTextWheel,
	OpenWorldmapKeyInput,
	OpenMatchlogKeyInput,
	OpenMissionKeyInput,
	OpenWorldmapTabClick,
	OpenMatchlogTabClick,
	OpenMissionTabClick,
	Max,
	EPlayerAction_MAX,
};

// Enum TslGame.*33be415ad9
enum class *33be415ad9 : uint8 {
	*28e69347ca,
	*166ccd943f,
	*1b1e71f781,
	*eefb837169,
	*05e0720768,
	*33be415ad9_MAX,
};

// Enum TslGame.ESpikeDeploymentState
enum class ESpikeDeploymentState : uint8 {
	PreDeploy,
	Deploying,
	PostDeploy,
	Popped,
	Idle,
	ESpikeDeploymentState_MAX,
};

// Enum TslGame.E40mmDeployState
enum class E40mmDeployState : uint8 {
	None,
	FuseTriggered,
	DeployStarted,
	DeployFinished,
	DeployFailed,
	E40mmDeployState_MAX,
};

// Enum TslGame.*edb6711d41
enum class *edb6711d41 : uint8 {
	*ff2e9177e9,
	*ebd3a6adc0,
	*2c61c39c47,
	*edb6711d41_MAX,
};

// Enum TslGame.ETslPubgIdAssetType
enum class ETslPubgIdAssetType : uint8 {
	NONE,
	NAMEPLATE,
	EMBLEM,
	EMBLEM_ANIMATED,
	MEDAL1,
	MEDAL2,
	CLANPLATE,
	CLANPLATE_LOW_DEFINITION,
	TIER,
	ETslPubgIdAssetType_MAX,
};

// Enum TslGame.EPubgIdStatueStatus
enum class EPubgIdStatueStatus : uint8 {
	IDLE,
	CHANGING,
	CHANGED,
	EPubgIdStatueStatus_MAX,
};

// Enum TslGame.EMessageArgBuilderType
enum class EMessageArgBuilderType : uint8 {
	None,
	FocusItemName,
	FocusItemNameWithCount,
	FocusWeapon,
	FocusVehicle,
	FocusSlotDisplayName_Deprecated,
	Attachment,
	StatusHeal,
	StatusBoost,
	StatusAttackThrow,
	StatusDefThrow,
	StatusArmor,
	StatusVehicle,
	StatusUsingAmmo,
	NotifyMarkerWithMemberIndex,
	EMessageArgBuilderType_MAX,
};

// Enum TslGame.EMarkerIconTextureType
enum class EMarkerIconTextureType : uint8 {
	UI,
	World,
	EMarkerIconTextureType_MAX,
};

// Enum TslGame.ERadioMessageCondition
enum class ERadioMessageCondition : uint8 {
	None,
	TargetItem,
	TargetItemStack,
	TargetCarepackageOrDeadbox,
	TargetVendingMachine,
	TargetTeammate,
	EnemySpotted,
	TargetVehicle,
	TargetRevivalTower,
	SelfInVehicle,
	SelfDBNO,
	SlotEquipped,
	SlotEquippedAmmoWeapon,
	EquippedAnyAmmoWeapon,
	ArmorAnyEquipped,
	ArmorAllEmpty,
	ArmorHelmetOnly,
	ArmorVestOnly,
	ArmorAllEquipped,
	TargetFloorItem,
	TargetTrunkItem,
	TargetPackageItem,
	TargetInventoryItem,
	TargetInventoryEquipment,
	TargetInventoryEquipmentEmpty,
	TargetFloorItemStack,
	TargetTrunkItemStack,
	TargetPackageItemStack,
	TargetInventoryItemStack,
	TargetTacPackSlot,
	ERadioMessageCondition_MAX,
};

// Enum TslGame.ESignalLightState
enum class ESignalLightState : uint8 {
	TurnOff,
	Warning,
	TurnOn,
	ESignalLightState_MAX,
};

// Enum TslGame.EDestructibleHardDoorState
enum class EDestructibleHardDoorState : uint8 {
	Normal,
	Damaged,
	Crashed,
	EDestructibleHardDoorState_MAX,
};

// Enum TslGame.ETslReferenceObjType
enum class ETslReferenceObjType : uint8 {
	GameMode,
	Character,
	Preload,
	ETslReferenceObjType_MAX,
};

// Enum TslGame.EZiplinegunAnimState
enum class EZiplinegunAnimState : uint8 {
	None,
	ShowHide,
	EZiplinegunAnimState_MAX,
};

// Enum TslGame.ESatelliteDropState
enum class ESatelliteDropState : uint8 {
	Waiting,
	Falling,
	Bumped,
	Stopped,
	ESatelliteDropState_MAX,
};

// Enum TslGame.*267943e109
enum class *267943e109 : uint8 {
	*fbe730d02e,
	*67c6ec04dd,
	*f1459ea7f9,
	*19f5691acc,
	*259c49dfc5,
	*267943e109_MAX,
};

// Enum TslGame.ESoftRoleState
enum class ESoftRoleState : uint8 {
	Open,
	Closed,
	Inspect,
	ESoftRoleState_MAX,
};

// Enum TslGame.EReplayTimelineMode
enum class EReplayTimelineMode : uint8 {
	ReplayPlay,
	ReplayEditor,
	ReplayRender,
	EReplayTimelineMode_MAX,
};

// Enum TslGame.*662c6b0101
enum class *662c6b0101 : uint8 {
	*5dfc54ee3d,
	*a0f236fc6e,
	*024b5b8b06,
	*6a4491c7be,
	*9fe5e00f89,
	*662c6b0101_MAX,
};

// Enum TslGame.EEventClipPriority
enum class EEventClipPriority : uint8 {
	Invalid,
	None,
	Standard,
	Featured,
	EEventClipPriority_MAX,
};

// Enum TslGame.*a9773e439a
enum class *a9773e439a : uint8 {
	*9846b8a9c3,
	*724409e412,
	*8bb798013b,
	*971aee9f79,
	*2d599f6899,
	*ada795d47a,
	*16e16a0c1b,
	*fda778c4c9,
	*3488de22fd,
	*571e906ec1,
	*a9773e439a_MAX,
};

// Enum TslGame.*841ddba195
enum class *841ddba195 : uint8 {
	*2978df065e,
	*fb93f4f1eb,
	*43215af3ce,
	*9613faacd1,
	*281cdafe50,
	*4c57a8de26,
	*03a3f54736,
	*41d4bce9ee,
	*0966ae951e,
	*841ddba195_MAX,
};

// Enum TslGame.*f35d175ddd
enum class *f35d175ddd : uint8 {
	*87586b2893,
	*da155783e7,
	*4de6b9a518,
	*8cb1ea6837,
	*8807ffbf05,
	*9c0069f7fc,
	*f35d175ddd_MAX,
};

// Enum TslGame.*70cee24e91
enum class *70cee24e91 : uint8 {
	*e0c152994a,
	*30e8c0586c,
	*243ad34b05,
	*d0c754ba6c,
	*ae62148724,
	*ba2168cd7e,
	*fafe21169e,
	*71a0a8c8b4,
	*9a9458722f,
	*ad4e36cfd2,
	*e4b86c02c0,
	*c4c101b19d,
	*70cee24e91_MAX,
};

// Enum TslGame.ESwitcherHideWhen
enum class ESwitcherHideWhen : uint8 {
	UsingKeyboardMouse,
	UsingGamepad,
	ESwitcherHideWhen_MAX,
};

// Enum TslGame.EActionWheelMessageType
enum class EActionWheelMessageType : uint8 {
	FailSpray,
	FailWeaponInspect,
	FailGroupEmote,
	EActionWheelMessageType_MAX,
};

// Enum TslGame.EDirectMessageColorType
enum class EDirectMessageColorType : uint8 {
	Alert,
	System,
	Chat,
	Clan,
	MAX,
	EDirectMessageColorType_MAX,
};

// Enum TslGame.EKeyIconCombinationDisplayType
enum class EKeyIconCombinationDisplayType : uint8 {
	NotUsed,
	Empty,
	Plus,
	Slash,
	EKeyIconCombinationDisplayType_MAX,
};

// Enum TslGame.EGamepadKeyIconDisplayType
enum class EGamepadKeyIconDisplayType : uint8 {
	Tap,
	DoubleTap,
	ComboHold,
	TimerHoldCircle,
	TimerHoldBar,
	EGamepadKeyIconDisplayType_MAX,
};

// Enum TslGame.ETslWheelWidgetMouseCursorDirectionType
enum class ETslWheelWidgetMouseCursorDirectionType : uint8 {
	ABSOLUTE_COORD,
	AREA_RESTRICTED_COORD,
	CIRCULAR_RESTRICTED_COORD,
	ETslWheelWidgetMouseCursorDirectionType_MAX,
};

// Enum TslGame.ETslWheelWidgetSelectType
enum class ETslWheelWidgetSelectType : uint8 {
	BY_CLICK,
	BY_RELEASE,
	BY_MAX,
};

// Enum TslGame.EWorldMapRadialMode
enum class EWorldMapRadialMode : uint8 {
	MapMarker,
	WayPointPing,
	EWorldMapRadialMode_MAX,
};

// Enum TslGame.ETeenageInfoType
enum class ETeenageInfoType : uint8 {
	Normal,
	Season,
	ETeenageInfoType_MAX,
};

// Enum TslGame.EDebugCrosshairType
enum class EDebugCrosshairType : uint8 {
	None,
	Rifle,
	Shotgun,
	Pistol,
	EDebugCrosshairType_MAX,
};

// Enum TslGame.EDuelUIState
enum class EDuelUIState : uint8 {
	None,
	Battle,
	Spectating,
	MAX,
	EDuelUIState_MAX,
};

// Enum TslGame.EDuelUITeam
enum class EDuelUITeam : uint8 {
	None,
	MyTeam,
	OpposingTeam,
	MAX,
	EDuelUITeam_MAX,
};

// Enum TslGame.EPresetNumSlotState
enum class EPresetNumSlotState : uint8 {
	Normal,
	Focus,
	Select,
	Lock,
	Disable,
	FocusConsole,
	SelectFocus,
	SelectFocusConsole,
	EPresetNumSlotState_MAX,
};

// Enum TslGame.EDragState
enum class EDragState : uint8 {
	Block,
	Backpack,
	Drop,
	Equip,
	Swap,
	Trunk,
	None,
	EDragState_MAX,
};

// Enum TslGame.EKeyboardKeyIconDisplayType
enum class EKeyboardKeyIconDisplayType : uint8 {
	Tap,
	DoubleTap,
	Hold,
	EKeyboardKeyIconDisplayType_MAX,
};

// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath : uint8 {
	HeadShot,
	DBNO,
	DBNOByHeadShot,
	CKO,
	None,
	EConditionOfDeath_MAX,
};

// Enum TslGame.ETslNotificationMessageAnimationType
enum class ETslNotificationMessageAnimationType : uint8 {
	None,
	Appear,
	Loop,
	ETslNotificationMessageAnimationType_MAX,
};

// Enum TslGame.ETslNotificationMessageColorType
enum class ETslNotificationMessageColorType : uint8 {
	RichText,
	Default,
	Blue,
	Red,
	Yellow,
	ETslNotificationMessageColorType_MAX,
};

// Enum TslGame.ERacingHUDState
enum class ERacingHUDState : uint8 {
	None,
	Running,
	Finished,
	Failed,
	ERacingHUDState_MAX,
};

// Enum TslGame.EVehicleAIAvoidanceMode
enum class EVehicleAIAvoidanceMode : uint8 {
	Off,
	SingleTrace,
	MultiTrace,
	EVehicleAIAvoidanceMode_MAX,
};

// Enum TslGame.ESpawnType
enum class ESpawnType : uint8 {
	Single,
	ContinuousOnTimer,
	ContinuousOnDeath,
	ESpawnType_MAX,
};

// Enum TslGame.*6992cbfcc5
enum class *6992cbfcc5 : uint8 {
	*dc0e799d8b,
	*76d81cf07c,
	*13f7df711e,
	*6c398cfd72,
	*40460e69fd,
	*6992cbfcc5_MAX,
};

// Enum TslGame.*29456009df
enum class *29456009df : uint8 {
	*387a3e75b8,
	*b5d959906e,
	*b35c97094f,
	*47f6f571fe,
	*bcf41c3d84,
	*a659ccc9d7,
	*044f9f3a15,
	*961bfe0b56,
	*57c9c6eb19,
	*353bff1763,
	*29456009df_MAX,
};

// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect : uint8 {
	S_None,
	S_Concrete_Roll,
	S_Concrete_Skid,
	S_Concrete_Spin,
	S_Dirt_Roll,
	S_Dirt_Skid,
	S_Dirt_Spin,
	S_Water_Roll,
	S_Water_Skid,
	S_Water_Spin,
	S_Metal_Roll,
	S_Metal_Skid,
	S_Metal_Spin,
	S_Wood_Roll,
	S_Wood_Skid,
	S_Wood_Spin,
	S_Rock_Roll,
	S_Rock_Skid,
	S_Rock_Spin,
	S_Grass_Roll,
	S_Grass_Skid,
	S_Grass_Spin,
	S_Sand_Roll,
	S_Sand_Skid,
	S_Sand_Spin,
	S_Concrete_Brake,
	S_Dirt_Brake,
	S_Water_Brake,
	S_Metal_Brake,
	S_Wood_Brake,
	S_Rock_Brake,
	S_Grass_Brake,
	S_Sand_Brake,
	S_Snow_Brake,
	S_SnowRock_Brake,
	S_Ice_Brake,
	S_Common_BrakeDisc,
	S_Concrete_Punctured_Roll,
	S_Concrete_Punctured_Skid,
	S_Concrete_Punctured_Spin,
	S_Concrete_Punctured_Brake,
	S_Snow_Roll,
	S_Snow_Skid,
	S_Snow_Spin,
	S_SnowRock_Roll,
	S_SnowRock_Skid,
	S_SnowRock_Spin,
	S_Ice_Roll,
	S_Ice_Skid,
	S_Ice_Spin,
	S_Mud_Roll,
	S_Mud_Skid,
	S_Mud_Spin,
	S_Mud_Brake,
	S_Common_Neutral,
	S_MAX,
};

// Enum TslGame.ETslTTSMode
enum class ETslTTSMode : uint8 {
	Unresolved,
	Disabled,
	ForceCPU,
	Auto,
	ETslTTSMode_MAX,
};

// Enum TslGame.ETslVoicePlaybackState
enum class ETslVoicePlaybackState : uint8 {
	Idle,
	Generating,
	Playing,
	ETslVoicePlaybackState_MAX,
};

// Enum TslGame.EMortarWeaponInstallState
enum class EMortarWeaponInstallState : uint8 {
	None,
	InstallInprogress,
	InstallComplete,
	Installed,
	EMortarWeaponInstallState_MAX,
};

// Enum TslGame.*fa096e1ffd
enum class *fa096e1ffd : uint8 {
	*6626d20b07,
	*fe3dd8e25d,
	*999591f478,
	*f03f62f11e,
	*b5fa7253f2,
	*fa096e1ffd_MAX,
};

// Enum TslGame.ETslZiplinegunState
enum class ETslZiplinegunState : uint8 {
	None,
	Ready,
	Hooked,
	Withdraw,
	ETslZiplinegunState_MAX,
};

// Enum TslGame.EMeleeThrowState
enum class EMeleeThrowState : uint8 {
	Idle,
	Prepare,
	Throw,
	EMeleeThrowState_MAX,
};

// Enum TslGame.*297d0c0271
enum class *297d0c0271 : uint8 {
	*b55c3c04a7,
	*a405024c34,
	*5423ea0b5e,
	*297d0c0271_MAX,
};

// Enum TslGame.EPlantableWeaponState
enum class EPlantableWeaponState : uint8 {
	None,
	Planting,
	Planted,
	EPlantableWeaponState_MAX,
};

// Enum TslGame.EPlantingFailureType
enum class EPlantingFailureType : uint8 {
	None,
	GeneralFailure,
	DistanceExceeded,
	AngleExceeded,
	PlantingWithMoving,
	Interrupted,
	EPlantingFailureType_MAX,
};

// Enum TslGame.EDeployState
enum class EDeployState : uint8 {
	INVALID,
	UNDEPLOYED,
	DEPLOYING,
	DEPLOYED,
	EDeployState_MAX,
};

// Enum TslGame.ERepairKitMode
enum class ERepairKitMode : uint8 {
	Helmet,
	Vest,
	None,
	ERepairKitMode_MAX,
};

// Enum TslGame.ETraumaBagHealMode
enum class ETraumaBagHealMode : uint8 {
	NoHealItem,
	Bandage,
	FirstAidKit,
	Medkit,
	BattleReadyKit,
	MaxAndNone,
	ETraumaBagHealMode_MAX,
};

// Enum TslGame.*2cc1fa59b4
enum class *2cc1fa59b4 : uint8 {
	*b83c02efaa,
	*c29c9bfbd3,
	*ee696519f0,
	*2cc1fa59b4_MAX,
};

// Enum TslGame.ETslTeamInfoIconState
enum class ETslTeamInfoIconState : uint8 {
	Default,
	Vehicle,
	Mortar,
	Parachute,
	Die,
	DBNO,
	Quitter,
	AirCraft,
	ItemRequest,
	EmergencyPickup,
	Revival,
	SpecificMode,
	Tasered,
	Healing,
	Reviving,
	Swimming,
	BodyCarry,
	Observer,
	ETslTeamInfoIconState_MAX,
};

// Enum TslGame.EFakeCursorState
enum class EFakeCursorState : uint8 {
	Active,
	Suspended,
	Shutdown,
	EFakeCursorState_MAX,
};

// Enum TslGame.EUmgFakeCursorInputType
enum class EUmgFakeCursorInputType : uint8 {
	None,
	CursorAxisX,
	CursorAxisY,
	CursorWheelX,
	CursorWheelY,
	CursorLeftPress,
	CursorLeftRelease,
	CursorRightPress,
	CursorRightRelease,
	CursorSlowModeToggle,
	EUmgFakeCursorInputType_MAX,
};

// Enum TslGame.EBlendSequenceByBoolStartType
enum class EBlendSequenceByBoolStartType : uint8 {
	Restart,
	SameTime,
	EBlendSequenceByBoolStartType_MAX,
};

// Enum TslGame.ETslCopyBoneAxis
enum class ETslCopyBoneAxis : uint8 {
	X,
	Y,
	Z,
	ETslCopyBoneAxis_MAX,
};

// Enum TslGame.EJumpStartAnimationType
enum class EJumpStartAnimationType : uint8 {
	Stationary,
	Forward,
	Backward,
	EJumpStartAnimationType_MAX,
};

// Enum TslGame.ERotateBoneInputType
enum class ERotateBoneInputType : uint8 {
	Rotator,
	AngleAxis,
	ERotateBoneInputType_MAX,
};

// Enum TslGame.ERotateBoneSpace
enum class ERotateBoneSpace : uint8 {
	BoneSpace,
	LocalSpace,
	WorldSpace,
	ERotateBoneSpace_MAX,
};

// Enum TslGame.EObserverPlayerListType
enum class EObserverPlayerListType : uint8 {
	Distance,
	Kill,
	Survivor,
	Max,
	EObserverPlayerListType_MAX,
};

// Enum TslGame.EDuelMatchResult
enum class EDuelMatchResult : uint8 {
	Win,
	Lose,
	EDuelMatchResult_MAX,
};

// Enum TslGame.ELogSendTiming
enum class ELogSendTiming : uint8 {
	DuelMatchEnd,
	MatchEnd,
	ELogSendTiming_MAX,
};

// Enum TslGame.*d3bed0151e
enum class *d3bed0151e : uint8 {
	*4041e229fc,
	*251e6ca9af,
	*a85a0305b8,
	*511bd576eb,
	*d3bed0151e_MAX,
};

// Enum TslGame.*04dc7837be
enum class *04dc7837be : uint8 {
	*d9e7d48096,
	*908f9dce73,
	*3651f9da3f,
	*04dc7837be_MAX,
};

// Enum TslGame.ETslCharacterNativeAction
enum class ETslCharacterNativeAction : uint8 {
	None,
	InspectWeapon,
	GroupEmote,
	ETslCharacterNativeAction_MAX,
};

// Enum TslGame.TestUEnum
enum class TestUEnum : uint8 {
	None,
	State1,
	State2,
	TestUEnum_MAX,
};

// ScriptStruct TslGame.*e59dc07d5b
// Size: 0xf0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e59dc07d5b {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct TslGame.*e0dcef2347
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e0dcef2347 {
	struct FString PartyId; // 0x00(0x10)
	int32 PartySize; // 0x10(0x04)
	bool *2c03819162; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*6b84f6be44
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*6b84f6be44 {
	float *55cd1becd2; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*f19ed4497e* *f99ce3ac0a; // 0x08(0x08)
	float *e47362862a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* *c4837fc2d7; // 0x18(0x08)
	struct ATslPlayerStateBase* *1cd11b08bd; // 0x20(0x08)
	struct FVector_NetQuantize *c2761d5d89; // 0x28(0x0c)
	struct FVector_NetQuantize *6c82978301; // 0x34(0x0c)
	struct FName BoneName; // 0x40(0x08)
	float *24b067bb41; // 0x48(0x04)
	bool *f2c08bddd3; // 0x4c(0x01)
	bool *7564696694; // 0x4d(0x01)
	char *f46a0f8122 : 1; // 0x4e(0x01)
	char *c7520e7197 : 1; // 0x4e(0x01)
	char *b57803c5d7 : 1; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	int32 AttackId; // 0x50(0x04)
	bool *feb8bbff8b; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FName *ccf03a4037; // 0x58(0x08)
};

// ScriptStruct TslGame.*befaa1820e
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*befaa1820e {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.WeaponAttachmentAssetData
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponAttachmentAssetData {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x10(0x20)
	struct FName AttachmentMeshName; // 0x30(0x08)
};

// ScriptStruct TslGame.DeathMessage
// Size: 0x138 (Inherited: 0x00)  [layout: KHOP]
struct FDeathMessage {
	struct FText KillerName; // 0x00(0x18)
	struct FText VictimName; // 0x18(0x18)
	struct FText KillerUniqueId; // 0x30(0x18)
	struct FUniqueNetIdRepl DBNOCauserUniqueId; // 0x48(0x18)
	struct FText VictimUniqueId; // 0x60(0x18)
	char bKillerIsOwner : 1; // 0x78(0x01)
	char bVictimIsOwner : 1; // 0x78(0x01)
	char bVictimIsPillarOrEventBot : 1; // 0x78(0x01)
	char bVictimIsMonster : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 KillerTeamNum; // 0x7c(0x04)
	int32 VictimTeamNum; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct U*ad6de9a11f* DamageType; // 0x88(0x08)
	struct FText InsertMessage; // 0x90(0x18)
	enum class EDamageReason DamageReason; // 0xa8(0x01)
	bool bDBNO; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32 AlivePlayerNum; // 0xac(0x04)
	int32 AliveTeamNum; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FText DamageCauserName; // 0xb8(0x18)
	int32 DamageCauserLevel; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UTexture* DamageCauserIcon; // 0xd8(0x08)
	float DamageCauserIconRatio; // 0xe0(0x04)
	bool bIsKillerExist; // 0xe4(0x01)
	bool bIsStealKilled; // 0xe5(0x01)
	bool bIsStealKilledAboutAnyone; // 0xe6(0x01)
	bool bIsObserver; // 0xe7(0x01)
	bool bIsObserverAndKillerIsSpectated; // 0xe8(0x01)
	bool bIsObserverAndVictimIsSpectated; // 0xe9(0x01)
	bool bIsMidGameBanMessage; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	float DistanceFromKillerToVictim; // 0xec(0x04)
	bool bIsKillerAttackTeam; // 0xf0(0x01)
	enum class EOutGamePlatformProvider KillerPlatform; // 0xf1(0x01)
	enum class EOutGamePlatformProvider VictimPlatform; // 0xf2(0x01)
	char pad_F3[0x5]; // 0xf3(0x05)
	struct ATslPlayerStateBase* KillerPlayerState; // 0xf8(0x08)
	struct ATslPlayerStateBase* VictimPlayerState; // 0x100(0x08)
	struct ATslPlayerStateBase* DBNOPlayerInstigatorPlayerState; // 0x108(0x08)
	struct TArray<struct ATslPlayerStateBase*> AssistPlayers; // 0x110(0x10)
	bool bIsAssistMessage; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	int32 AssistCount; // 0x124(0x04)
	struct FSkinParam WeaponSkinParamOfAttacker; // 0x128(0x10)
};

// ScriptStruct TslGame.SkinParam
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FSkinParam {
	enum class ESkinCategory SkinCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName SkinName; // 0x08(0x08)
};

// ScriptStruct TslGame.TslReplayOvercast
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTslReplayOvercast {
	float DemoTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Weather; // 0x08(0x10)
	enum class ETslOvercastAction Action; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float InitElapsedTime; // 0x1c(0x04)
	float SaturateTime; // 0x20(0x04)
	float BlendInTime; // 0x24(0x04)
	float BlendOutTime; // 0x28(0x04)
	float TimeMultiplier; // 0x2c(0x04)
	float ThunderAngle; // 0x30(0x04)
	float ThunderDistance; // 0x34(0x04)
};

// ScriptStruct TslGame.TslReplayCustomFog
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslReplayCustomFog {
	float DemoTime; // 0x00(0x04)
	float FogFallOff; // 0x04(0x04)
	float FogStartDistance; // 0x08(0x04)
	float FogDensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ec2a5c6a4b
// Size: 0x138 (Inherited: 0x00)  [layout: KHOP]
struct F*ec2a5c6a4b {
	bool bIsCustomGame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MapName; // 0x08(0x10)
	struct FString ModeName; // 0x18(0x10)
	struct FString MatchId; // 0x28(0x10)
	int32 TeamCount; // 0x38(0x04)
	int32 MinPlayerCount; // 0x3c(0x04)
	int32 MaxPlayerCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FString, struct FString> StringParameter; // 0x48(0x50)
	struct TMap<struct FString, struct FString> *3227d772fd; // 0x98(0x50)
	struct TMap<struct FString, struct FString> *d62e6b2ea4; // 0xe8(0x50)
};

// ScriptStruct TslGame.TslReplaySummary
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct FTslReplaySummary {
	struct FString MatchId; // 0x00(0x10)
	bool bIsServerRecording; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString RecordUserId; // 0x18(0x10)
	struct FString RecordAccountId; // 0x28(0x10)
	struct FString RecordUserNickName; // 0x38(0x10)
	struct FString MapName; // 0x48(0x10)
	struct FString WeatherName; // 0x58(0x10)
	struct FString RegionName; // 0x68(0x10)
	int32 NumPlayers; // 0x78(0x04)
	int32 NumTeams; // 0x7c(0x04)
	struct TArray<struct FWuPlayerSummary> PlayerStateSummaries; // 0x80(0x10)
};

// ScriptStruct TslGame.WuPlayerSummary
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuPlayerSummary : FGdlStructBase {
	struct FString UniqueId; // 0x08(0x10)
	struct FString PlayerName; // 0x18(0x10)
	int32 TeamNumber; // 0x28(0x04)
	int32 Ranking; // 0x2c(0x04)
	int32 HeadShots; // 0x30(0x04)
	int32 NumKills; // 0x34(0x04)
	float TotalGivenDamages; // 0x38(0x04)
	float LongestDistanceKill; // 0x3c(0x04)
	float TotalMovedDistanceMeter; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*62f1005da7
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*62f1005da7 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*e0e45376f0
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e0e45376f0 {
	struct FString Type; // 0x00(0x10)
	struct FString Log; // 0x10(0x10)
};

// ScriptStruct TslGame.*e4c1aad236
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e4c1aad236 {
	struct UExponentialHeightFogComponent* *239e38a748; // 0x00(0x08)
	bool *f5988b2f4b; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*6eae8f1542
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*6eae8f1542 {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.*d958a45a72
// Size: 0x88 (Inherited: 0x00)  [layout: KHOP]
struct F*d958a45a72 {
	struct FString MissionId; // 0x00(0x10)
	bool *c2fb87f04d; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Description; // 0x18(0x10)
	int32 Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Type; // 0x30(0x10)
	bool bLocked; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ProgressRatio; // 0x44(0x04)
	struct FString ProgressText; // 0x48(0x10)
	struct FString MissionIconName; // 0x58(0x10)
	int32 InitialProgress; // 0x68(0x04)
	int32 *903f728aab; // 0x6c(0x04)
	int32 MaximumProgress; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FName> TargetGameModeList; // 0x78(0x10)
};

// ScriptStruct TslGame.PointInfo
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FPointInfo {
	int32 TeamCount; // 0x00(0x04)
	int32 *b017fdbd95; // 0x04(0x04)
};

// ScriptStruct TslGame.TeamInfo
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct FTeamInfo {
	struct FString TeamName; // 0x00(0x10)
	struct FString *cbff738902; // 0x10(0x10)
	struct UTexture2D* TeamIcon; // 0x20(0x08)
	struct FLinearColor TeamColor; // 0x28(0x10)
	struct FLinearColor *2db4049057; // 0x38(0x10)
	struct UTexture2D* TeamMember; // 0x48(0x08)
};

// ScriptStruct TslGame.ReplayItem
// Size: 0x110 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FReplayItem {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct TslGame.*0e1d763a0a
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct F*0e1d763a0a {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString KillerName; // 0x38(0x10)
	struct FString KillerNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bDBNO; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString KillerPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*b2432486b4
// Size: 0x108 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b2432486b4 {
	float LastUpdateTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KillerUniqueId; // 0x08(0x10)
	struct FString KillerName; // 0x18(0x10)
	struct FString KillerPlayerId; // 0x28(0x10)
	struct FString VictimUniqueId; // 0x38(0x10)
	struct FString VictimName; // 0x48(0x10)
	struct FString VictimPlayerId; // 0x58(0x10)
	char pad_68[0xa0]; // 0x68(0xa0)
};

// ScriptStruct TslGame.*8223e5db2b
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*8223e5db2b {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RecordTargetName; // 0x38(0x10)
	struct FString RecordTargetNetId; // 0x48(0x10)
};

// ScriptStruct TslGame.*efd93300da
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*efd93300da {
	int32 DataSetNumber; // 0x00(0x04)
	int32 TimeMS; // 0x04(0x04)
	bool IsSkip; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Type; // 0x10(0x10)
	float FOV; // 0x20(0x04)
	float PositionX; // 0x24(0x04)
	float PositionY; // 0x28(0x04)
	float PositionZ; // 0x2c(0x04)
	float RotationX; // 0x30(0x04)
	float RotationY; // 0x34(0x04)
	float RotationZ; // 0x38(0x04)
	float Angle; // 0x3c(0x04)
	struct FString Target; // 0x40(0x10)
	struct FString InterpolationType; // 0x50(0x10)
	struct FString CameraDirection; // 0x60(0x10)
	struct FString ReplaySpeed; // 0x70(0x10)
	bool IsAutoExposureEnable; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString DofMethod; // 0x88(0x10)
	float DofFocalRegion; // 0x98(0x04)
	bool IsDofAutoFocus; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float DofFocalDistance; // 0xa0(0x04)
	float DofNearTransitionRegion; // 0xa4(0x04)
	float DofFarTransitionRegion; // 0xa8(0x04)
	float DofBokehScale; // 0xac(0x04)
	float DofBokehMaxSize; // 0xb0(0x04)
	float DofGaussianNearBlurSize; // 0xb4(0x04)
	float DofGaussianFarBlurSize; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString ColorGradingLUT; // 0xc0(0x10)
	float ColorGradingLUTIntensity; // 0xd0(0x04)
	float BloomIntensity; // 0xd4(0x04)
	float VignetteIntensity; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.*cd41826cce
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*cd41826cce {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RejoinedPlayerNetId; // 0x38(0x10)
	struct FString RejoinedPlayerName; // 0x48(0x10)
};

// ScriptStruct TslGame.*77718b738f
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*77718b738f {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString RevivedPlayerNetId; // 0x38(0x10)
	struct FString RevivedPlayerName; // 0x48(0x10)
};

// ScriptStruct TslGame.*d1a844ed64
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*d1a844ed64 {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString EtceteraEventCode; // 0x38(0x10)
	struct FString TargetNetId; // 0x48(0x10)
	struct FString TargetName; // 0x58(0x10)
};

// ScriptStruct TslGame.*a340d7c59f
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct F*a340d7c59f {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32 Time1; // 0x30(0x04)
	int32 Time2; // 0x34(0x04)
	struct FString InstigatorName; // 0x38(0x10)
	struct FString InstigatorNetId; // 0x48(0x10)
	struct FString VictimName; // 0x58(0x10)
	struct FString VictimNetId; // 0x68(0x10)
	struct FString DamageCauseClassName; // 0x78(0x10)
	int32 DamageTypeCategory; // 0x88(0x04)
	int32 DamageReason; // 0x8c(0x04)
	bool bDBNO; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString InstigatorPlayerId; // 0x98(0x10)
	struct FString VictimPlayerId; // 0xa8(0x10)
};

// ScriptStruct TslGame.*082cf88790
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*082cf88790 {
	char *139b9e3029 : 1; // 0x00(0x01)
	char *fd923c7d28 : 1; // 0x00(0x01)
	char *e4eac076e2 : 1; // 0x00(0x01)
};

// ScriptStruct TslGame.TslReportUserInfo
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslReportUserInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FString ClanId; // 0x10(0x10)
	struct FString ClanTag; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString StreamerFakeName; // 0x38(0x10)
	struct FString NetId; // 0x48(0x10)
	struct FString AccountId; // 0x58(0x10)
	int32 TeamId; // 0x68(0x04)
	enum class ESubjectToReport SubjectToReport; // 0x6c(0x01)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x6d(0x01)
	enum class ETslAIPlayerType AIType; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct TslGame.*64ab5bc066
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*64ab5bc066 {
	int32 SeatIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslCharacter* Rider; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct TslGame.*cd98f09930
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cd98f09930 {
	float *651ea90899; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct TslGame.*4a2325e615
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4a2325e615 {
	struct FVector2D *7b80c3e4fa; // 0x00(0x08)
	struct FVector2D *2212ddedea; // 0x08(0x08)
};

// ScriptStruct TslGame.*2c34bbb336
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2c34bbb336 {
	float TrainingScore; // 0x00(0x04)
	float TrainingPlayTime; // 0x04(0x04)
	bool TrainingStartCountDown; // 0x08(0x01)
	bool HeadShotCount; // 0x09(0x01)
	bool KillCount; // 0x0a(0x01)
	bool AimAccuracy; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
	float *05ce2a3d38; // 0x20(0x04)
	bool *45fe2d9777; // 0x24(0x01)
	bool *5d379d9880; // 0x25(0x01)
	bool *56c0ee8c1a; // 0x26(0x01)
	bool *52a41bd6bc; // 0x27(0x01)
	bool *4e9eaeca74; // 0x28(0x01)
	bool *be628641e3; // 0x29(0x01)
	bool *da2a45e77c; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.TslInputKey
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslInputKey {
	struct FKey Key; // 0x00(0x18)
	char bShift : 1; // 0x18(0x01)
	char bCtrl : 1; // 0x18(0x01)
	char bAlt : 1; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*2444f7c960
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2444f7c960 {
	int32 *3ca0c2af2d; // 0x00(0x04)
	int32 *1dabd427fe; // 0x04(0x04)
	int32 *d3f3d04170; // 0x08(0x04)
	bool *19da3864c2; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*2f1e1cb46b
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*2f1e1cb46b {
	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
	float Angle; // 0x10(0x04)
};

// ScriptStruct TslGame.*450396eb0d
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*450396eb0d {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*29538049a8
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*29538049a8 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*f9ed204c58
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f9ed204c58 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct TslGame.*f7f617ddd4
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f7f617ddd4 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*973f6059b0
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*973f6059b0 {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.LimitCustomStringParameter
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FLimitCustomStringParameter {
	struct FString CustomStringParameter; // 0x00(0x10)
	float MinLimit; // 0x10(0x04)
	float MaxLimit; // 0x14(0x04)
};

// ScriptStruct TslGame.*a9fccaac16
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*a9fccaac16 {
	float ReviveCastingTime; // 0x00(0x04)
	float MultiplierDBNODamagePerSecond; // 0x04(0x04)
	float MultiplierPunchDamage; // 0x08(0x04)
};

// ScriptStruct TslGame.*969eea0be3
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*969eea0be3 {
	float StartDelay; // 0x00(0x04)
	float WarningDuration; // 0x04(0x04)
	float ReleaseDuration; // 0x08(0x04)
	float WarningRadius; // 0x0c(0x04)
	struct FVector WarningPosition; // 0x10(0x0c)
	float RadiusRate; // 0x1c(0x04)
	float RandomRadiusRate; // 0x20(0x04)
	float SpreadBias; // 0x24(0x04)
	float LandRatio; // 0x28(0x04)
	float BlueZoneDamagePerSecond; // 0x2c(0x04)
	float DamageMagnifier; // 0x30(0x04)
	float TimeToDamageIncrease; // 0x34(0x04)
	float DamageIncreaseDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x40(0x08)
	bool *ac383c5c5b; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 FastPlayerCount; // 0x4c(0x04)
	float FastWarningDuration; // 0x50(0x04)
	float FastReleaseDuration; // 0x54(0x04)
	bool bIgnoreSafetyZone; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct TslGame.*83fc84d930
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*83fc84d930 {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct TslGame.*c31e3fde3e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c31e3fde3e {
	struct FName SkinId; // 0x00(0x08)
	int32 *457b3387fd; // 0x08(0x04)
	int32 *98ecf621bf; // 0x0c(0x04)
};

// ScriptStruct TslGame.*77d2ad319f
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*77d2ad319f {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotator; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*74a49ed342
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*74a49ed342 {
	enum class *e0e9c5996a *be49175b41; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EGameModeType> *b426e37595; // 0x08(0x10)
};

// ScriptStruct TslGame.*a0652141e0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*a0652141e0 {
	enum class *e0e9c5996a *be49175b41; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class ETslMapName> *b426e37595; // 0x08(0x10)
};

// ScriptStruct TslGame.*7a617a36f3
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*7a617a36f3 {
	bool bUseMateriaSlotIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<int32> MaterialSlotIndex; // 0x08(0x10)
	bool bUseMaterialSlotName; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FName> MaterialSlotName; // 0x20(0x10)
};

// ScriptStruct TslGame.*cb5d88a2c7
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cb5d88a2c7 {
	struct FString *1f444e3122; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)
};

// ScriptStruct TslGame.BaseUserPlayData
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBaseUserPlayData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.ActionOrAxis
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FActionOrAxis {
	struct FName Name; // 0x00(0x08)
	bool bIsAxis; // 0x08(0x01)
	bool bKeepActionOriginSetting; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float Scale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*5de01d4c74
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5de01d4c74 {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*23f69d53ff
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*23f69d53ff {
	float Health; // 0x00(0x04)
	int32 Count; // 0x04(0x04)
	bool bEnabled; // 0x08(0x01)
	bool bUseRandomizedWeaponKits; // 0x09(0x01)
	bool bUseUniqueWeaponKits; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct TslGame.*814a008e30
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*814a008e30 {
	enum class EAutoSpectatePriority *369f499c6c; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TeamId; // 0x04(0x04)
	struct FString PlayerNetId; // 0x08(0x10)
	float *5a18d988f4; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*a3b509d062
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*a3b509d062 {
	float *2053ae97a4; // 0x00(0x04)
	float *f2831dc356; // 0x04(0x04)
};

// ScriptStruct TslGame.*7c8be3d8ac
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7c8be3d8ac {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*e30234a057
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e30234a057 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.RankingInfo
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FRankingInfo {
	int32 TeamId; // 0x00(0x04)
	int32 Ranking; // 0x04(0x04)
	int32 *36cd20662b; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
	int32 Order; // 0x10(0x04)
	bool *be297068be; // 0x14(0x01)
	bool *6db80b33f2; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*8d85915f14
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8d85915f14 {
	struct FStringClassReference ObjectClass; // 0x00(0x10)
};

// ScriptStruct TslGame.TextureAndRatio
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTextureAndRatio {
	struct UTexture* Texture; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.ScreenResolution
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FScreenResolution {
	int32 Width; // 0x00(0x04)
	int32 Height; // 0x04(0x04)
};

// ScriptStruct TslGame.DisplayActorNames
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FDisplayActorNames {
	struct FString ActorName; // 0x00(0x10)
	int32 *b69dc152a3; // 0x10(0x04)
	struct FVector ActorLocation; // 0x14(0x0c)
	bool *5ae7738c16; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString Description; // 0x28(0x10)
	struct FLinearColor *8287d961ca; // 0x38(0x10)
};

// ScriptStruct TslGame.*29833af44d
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*29833af44d {
	struct FString PlayerNetId; // 0x00(0x10)
	float *17ea91f759; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*29bdb009d4
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*29bdb009d4 {
	char pad_0[0x8]; // 0x00(0x08)
	int32 Counter; // 0x08(0x04)
};

// ScriptStruct TslGame.*a9af33a36d
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*a9af33a36d {
	enum class EWeatherChange newWeather; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float weight; // 0x04(0x04)
};

// ScriptStruct TslGame.*a6b64465df
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*a6b64465df {
	enum class EMarketCategoryType *015695f1c8; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ProductID; // 0x04(0x04)
	int32 MarketID; // 0x08(0x04)
};

// ScriptStruct TslGame.*082b8abb10
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*082b8abb10 {
	int32 AircraftCount; // 0x00(0x04)
	float AircraftCooldown; // 0x04(0x04)
	int32 InvalidBeforePhase; // 0x08(0x04)
	int32 InvalidAfterPhase; // 0x0c(0x04)
};

// ScriptStruct TslGame.BlueZoneCustomOption
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FBlueZoneCustomOption {
	int32 BlueZonePhase; // 0x00(0x04)
	float StartDelay; // 0x04(0x04)
	float WarningDuration; // 0x08(0x04)
	float ReleaseDuration; // 0x0c(0x04)
	float RadiusRate; // 0x10(0x04)
	float SpreadBias; // 0x14(0x04)
	float LandRatio; // 0x18(0x04)
	float BlueZoneDamagePerSecond; // 0x1c(0x04)
};

// ScriptStruct TslGame.*5a55bc7e4b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5a55bc7e4b {
	int32 PlayerCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct ATslPlayerStart* PlayerStart; // 0x08(0x08)
};

// ScriptStruct TslGame.*d45a7f01af
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*d45a7f01af {
	int32 TeamId; // 0x00(0x04)
	int32 SquadIndex; // 0x04(0x04)
	int32 SquadMemberIndex; // 0x08(0x04)
};

// ScriptStruct TslGame.Teams
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTeams {
	int32 TeamNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeam*> Members; // 0x08(0x10)
};

// ScriptStruct TslGame.WorldMarker
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FWorldMarker {
	bool Show; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize100 MarkerPosition; // 0x04(0x0c)
	struct FVector_NetQuantize100 MarkerOffset; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* TrackedActor; // 0x20(0x08)
	enum class EMarkerType MarkerType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MarkerCreationTime; // 0x2c(0x04)
	float MarkerLifetime; // 0x30(0x04)
	struct FGuid MarkerID; // 0x34(0x10)
	struct FLinearColor MarkerColor; // 0x44(0x10)
	bool bUseSquadColor; // 0x54(0x01)
	bool bIsPassiveMarker; // 0x55(0x01)
	int8 *4ce9dd87e0; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct TArray<int8> *163b98b91f; // 0x58(0x10)
};

// ScriptStruct TslGame.NearClippingLevelOverZ
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNearClippingLevelOverZ {
	float Z; // 0x00(0x04)
	enum class ENearClippingLevel Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.NearClippingValue
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FNearClippingValue {
	enum class ENearClippingLevel Level; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FLevelLoadingBoostParameters {
	float AsyncLoadingTimeLimit; // 0x00(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x04(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x08(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d34545aa4a
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d34545aa4a {
	struct AActor* *d85b5b4b79; // 0x00(0x08)
	struct AController* *ec5462c4d4; // 0x08(0x08)
	struct ATslPlayerStateBase* *1cd11b08bd; // 0x10(0x08)
	struct AActor* DamageCauser; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct TslGame.*f1248f085e
// Size: 0xc0 (Inherited: 0xb8)  [layout: KHOP]
struct F*f1248f085e : F*e835414109 {
	bool *ad771a45e4; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float *8164c81d84; // 0xbc(0x04)
};

// ScriptStruct TslGame.*00225afecf
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*00225afecf {
	float *a7a4b55817; // 0x00(0x04)
	enum class EDamageVictimActorType *15314b1374; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*8fd4bb66b8
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*8fd4bb66b8 : FTableRowBase {
	struct FString *9fe4e5a906; // 0x08(0x10)
	struct FString Note; // 0x18(0x10)
};

// ScriptStruct TslGame.*be2b3087c5
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*be2b3087c5 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FString> *bb5b628ec4; // 0x10(0x10)
	struct FString Note; // 0x20(0x10)
};

// ScriptStruct TslGame.*cadd25cf65
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*cadd25cf65 : FTableRowBase {
	struct FName SkinItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*29a99e44e7
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*29a99e44e7 {
	struct ATslPlayerStateBase* *9fcfadd64f; // 0x00(0x08)
	struct UClass* *8b8a673f26; // 0x08(0x08)
	struct F*60fc7c1f80 *60fc7c1f80; // 0x10(0x28)
	struct FDateTime *e84280cdd7; // 0x38(0x08)
	enum class EDamageReason DamageReason; // 0x40(0x01)
	enum class EDamageTypeCategory DamageTypeCategory; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FName DamageCauser; // 0x48(0x08)
	struct TArray<struct FString> *c1d418fad2; // 0x50(0x10)
	float Distance; // 0x60(0x04)
	bool IsThroughPenetrableWall; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct ATslPlayerStateBase*> *5e15ea9629; // 0x68(0x10)
};

// ScriptStruct TslGame.*60fc7c1f80
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*60fc7c1f80 {
	struct FName SkinItemID; // 0x00(0x08)
	struct FSkinParam SkinParam; // 0x08(0x10)
	int32 *b46135fc1a; // 0x18(0x04)
	int32 *79fad9f90d; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*57e9a8b8b8
// Size: 0x1e8 (Inherited: 0x1e8)  [layout: KHOP]
struct F*57e9a8b8b8 : F*09b302d3b5 {
};

// ScriptStruct TslGame.*09b302d3b5
// Size: 0x1e8 (Inherited: 0x138)  [layout: KHOP]
struct F*09b302d3b5 : F*3b1d63a452 {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x138(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x168(0x30)
	struct F*f7667cd97f CustomizableObjectSkin; // 0x198(0x20)
	struct FGuid *8144c6f7e6; // 0x1b8(0x10)
	struct FGuid *2202e2de95; // 0x1c8(0x10)
	struct TArray<struct F*a43f4eae9e> AnimationSkinDatas; // 0x1d8(0x10)
};

// ScriptStruct TslGame.*3b1d63a452
// Size: 0x138 (Inherited: 0x08)  [layout: KHOP]
struct F*3b1d63a452 : FTableRowBase {
	struct TMap<struct FName, struct F*af7ba74753> SkinnedMeshSet; // 0x08(0x50)
	struct TMap<struct FName, struct F*051997299b> SkinnedMaterialSet; // 0x58(0x50)
	struct UTexture2D* Icon; // 0xa8(0x20)
	bool bForceSyncLoad; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FName> SkinnableTagList; // 0xd0(0x10)
	struct FRotator DefaultViewModeRotation; // 0xe0(0x0c)
	struct FRotator PivotModifierRotation; // 0xec(0x0c)
	struct FVector PCViewModeLocation; // 0xf8(0x0c)
	struct FVector ConsoleViewModeLocation; // 0x104(0x0c)
	struct FVector RecommendArrowOffset; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct F*77f684027a> MaterialParameters; // 0x120(0x10)
	struct UActorComponent* *c22d0379db; // 0x130(0x08)
};

// ScriptStruct TslGame.*77f684027a
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*77f684027a {
	bool ParamType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName TargetMaterialName; // 0x08(0x08)
	struct FName ParameterName; // 0x10(0x08)
	float RestoreValue; // 0x18(0x04)
	float StartValue; // 0x1c(0x04)
	float EndValue; // 0x20(0x04)
	float Duration; // 0x24(0x04)
};

// ScriptStruct TslGame.*051997299b
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*051997299b {
	enum class *0a3753fa29 SkinApplicationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*d318df725b> SkinMaterials; // 0x08(0x10)
};

// ScriptStruct TslGame.*d318df725b
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*d318df725b {
	struct FName MaterialSlotName; // 0x00(0x08)
	int32 MaterialSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x10(0x20)
};

// ScriptStruct TslGame.*af7ba74753
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*af7ba74753 {
	enum class ESkinMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* MeshAsset; // 0x08(0x20)
};

// ScriptStruct TslGame.*a43f4eae9e
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*a43f4eae9e {
	struct USkeletalMesh* AdditionalSkeletalMesh; // 0x00(0x08)
	struct UClass* AnimInstance; // 0x08(0x08)
	struct UAnimationAsset* AnimationAsset; // 0x10(0x08)
	bool bIsLooping; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector RelativeLocation; // 0x1c(0x0c)
	struct FRotator RelativeRotation; // 0x28(0x0c)
	struct FVector RelativeScale3D; // 0x34(0x0c)
	struct FName SkeletalMeshSocketName; // 0x40(0x08)
};

// ScriptStruct TslGame.*de58cefd07
// Size: 0x1e8 (Inherited: 0x1e8)  [layout: KHOP]
struct F*de58cefd07 : F*09b302d3b5 {
};

// ScriptStruct TslGame.*c66c686a90
// Size: 0x1e8 (Inherited: 0x1e8)  [layout: KHOP]
struct F*c66c686a90 : F*09b302d3b5 {
};

// ScriptStruct TslGame.*24f13f68be
// Size: 0x1e8 (Inherited: 0x1e8)  [layout: KHOP]
struct F*24f13f68be : F*09b302d3b5 {
};

// ScriptStruct TslGame.*7983574448
// Size: 0x2d8 (Inherited: 0x2d8)  [layout: KHOP]
struct F*7983574448 : FTslWeaponSkinData {
};

// ScriptStruct TslGame.TslWeaponSkinData
// Size: 0x2d8 (Inherited: 0x138)  [layout: KHOP]
struct FTslWeaponSkinData : F*3b1d63a452 {
	char bStatTrak : 1; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FStringAssetReference StatTrakActorClass; // 0x140(0x10)
	struct FName StatTrakSocketName; // 0x150(0x08)
	struct UAnimMontage* *b2d6eafaae; // 0x158(0x08)
	struct UBlendSpaceBase* *ad33ced216; // 0x160(0x08)
	struct UBlendSpaceBase* *fb502256d2; // 0x168(0x08)
	struct UClass* WeaponAnimInst; // 0x170(0x20)
	bool bAllowHolsterAnimationDuringSleep; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FName *49a747163b; // 0x198(0x08)
	struct TMap<struct FName, struct FLinearColor> SkinnedColorSet; // 0x1a0(0x50)
	struct UClass* KillEffectClass; // 0x1f0(0x20)
	struct FName KillEffectSocketName; // 0x210(0x08)
	struct UClass* KillTrailEffectClass; // 0x218(0x20)
	struct FName KillTrailEffectSocketName; // 0x238(0x08)
	struct UClass* ConstantEffectClass; // 0x240(0x20)
	struct FName ConstantEffectSocketName; // 0x260(0x08)
	struct U*348c7d82c2* EffectDataAsset; // 0x268(0x08)
	struct TArray<struct F*f6181c4dc2> AdditionalStaticPartsSet; // 0x270(0x10)
	struct TMap<struct FName, float> WeaponParticleTypeByOptic; // 0x280(0x50)
	struct FName CKOID; // 0x2d0(0x08)
};

// ScriptStruct TslGame.*f6181c4dc2
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*f6181c4dc2 {
	struct FName SocketName; // 0x00(0x08)
	struct UStaticMesh* *5e41305233; // 0x08(0x20)
	struct TArray<struct UMaterialInstance*> *780bb97079; // 0x28(0x10)
};

// ScriptStruct TslGame.*44771776d0
// Size: 0x130 (Inherited: 0x08)  [layout: KHOP]
struct F*44771776d0 : FTableRowBase {
	struct F*0b864bea3d *5ca4ad9eda; // 0x08(0x48)
	struct F*0b864bea3d *2f1a194afb; // 0x50(0x48)
	struct F*0b864bea3d *c0c89822f0; // 0x98(0x48)
	struct FName *9fd4a4f8cf; // 0xe0(0x08)
	struct FName *b592d5bf21; // 0xe8(0x08)
	struct UTexture2D* *27e90dc5b5; // 0xf0(0x20)
	struct UTexture2D* *09b048e242; // 0x110(0x20)
};

// ScriptStruct TslGame.*0b864bea3d
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*0b864bea3d {
	struct UTexture2D* Image; // 0x00(0x20)
	struct UTexture2D* *f8be16d316; // 0x20(0x20)
	int32 *92812c49e8; // 0x40(0x04)
	int32 *133a3ede0e; // 0x44(0x04)
};

// ScriptStruct TslGame.*ae84b885f0
// Size: 0x108 (Inherited: 0x08)  [layout: KHOP]
struct F*ae84b885f0 : FTableRowBase {
	struct UTexture2D* *07044f6277; // 0x08(0x20)
	struct UTexture2D* *54979147ea; // 0x28(0x20)
	struct FSlateColor *5f4ba57ed4; // 0x48(0x28)
	struct FName *9fd4a4f8cf; // 0x70(0x08)
	struct FSlateColor *8122a89351; // 0x78(0x28)
	struct UMaterialInterface* *6b4951b4fb; // 0xa0(0x20)
	struct UTexture2D* *3fd5f512f4; // 0xc0(0x20)
	struct UTexture2D* *151a4331da; // 0xe0(0x20)
	int32 *73f9f2fc29; // 0x100(0x04)
	int32 *133a3ede0e; // 0x104(0x04)
};

// ScriptStruct TslGame.*6102fbeb21
// Size: 0x138 (Inherited: 0x138)  [layout: KHOP]
struct F*6102fbeb21 : F*3b1d63a452 {
};

// ScriptStruct TslGame.*add07ac6b1
// Size: 0x2d8 (Inherited: 0x2d8)  [layout: KHOP]
struct F*add07ac6b1 : FTslWeaponSkinData {
};

// ScriptStruct TslGame.*a9fbc5b89f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a9fbc5b89f {
	struct FName SkinName; // 0x00(0x08)
	struct UClass* SkinActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*95a8dc359e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*95a8dc359e {
	struct FName TargetName; // 0x00(0x08)
	struct FName *dd43249b21; // 0x08(0x08)
};

// ScriptStruct TslGame.AuxilaryIcon
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FAuxilaryIcon {
	struct FAuxilaryIconData AuxilaryIconData; // 0x00(0x3c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UImage* AuxilaryIconWidget; // 0x40(0x08)
};

// ScriptStruct TslGame.AuxilaryIconData
// Size: 0x3c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAuxilaryIconData {
	struct FGuid IconGUID; // 0x00(0x10)
	struct FVector WorldLocation; // 0x10(0x0c)
	struct FRotator WorldRotation; // 0x1c(0x0c)
	struct FLinearColor IconColor; // 0x28(0x10)
	enum class EAuxilaryIconType IconType; // 0x38(0x01)
	bool bIsVisible; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
};

// ScriptStruct TslGame.*1aea20d548
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1aea20d548 {
	enum class ERadioMessageCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *a9c88b4113; // 0x08(0x10)
	struct TArray<struct FText> *5681b1315c; // 0x18(0x10)
	int32 MessageID; // 0x28(0x04)
	enum class ERadioMessageDecorateType *1d9cc94e95; // 0x2c(0x01)
	enum class *85d8e98336 *0009eace16; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct TslGame.*0eed8f94ee
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0eed8f94ee {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* KeyIcon; // 0x18(0x08)
	struct UTexture* KeyIcon_PS; // 0x20(0x08)
	float IconRatio; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*62cad36b64
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct F*62cad36b64 : FTableRowBase {
	struct FString WidgetName; // 0x08(0x10)
	struct TMap<struct FString, struct F*85697a7d8c> *c36217db02; // 0x18(0x50)
};

// ScriptStruct TslGame.*85697a7d8c
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*85697a7d8c {
	struct FStringAssetReference *806af600eb; // 0x00(0x10)
	bool *d4a165f158; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*a0813f5dff *d83817758c; // 0x18(0x20)
};

// ScriptStruct TslGame.*a0813f5dff
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*a0813f5dff {
	bool bDefaultShow; // 0x00(0x01)
	bool bUseMouse; // 0x01(0x01)
	bool bCloseByEscape; // 0x02(0x01)
	bool bRemovedByHiding; // 0x03(0x01)
	int32 ZOrder; // 0x04(0x04)
	bool bUsePcOnly; // 0x08(0x01)
	bool bUseConsoleOnly; // 0x09(0x01)
	bool bCharacterHudUi; // 0x0a(0x01)
	bool bSpectatorHudUi; // 0x0b(0x01)
	bool bObserverHudUi; // 0x0c(0x01)
	bool bReplayHudUi; // 0x0d(0x01)
	bool bLeagueReplayHudUi; // 0x0e(0x01)
	enum class *c69348be34 WidgetCreationMethod; // 0x0f(0x01)
	struct TArray<struct FString> HideWidgetList; // 0x10(0x10)
};

// ScriptStruct TslGame.*dfbb3c8372
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct F*dfbb3c8372 : FTableRowBase {
	struct FString WidgetName; // 0x08(0x10)
	struct F*85697a7d8c *2e672f1b38; // 0x18(0x38)
};

// ScriptStruct TslGame.*95dacfe697
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*95dacfe697 {
	struct FString WidgetName; // 0x00(0x10)
	struct F*85697a7d8c WidgetConfig; // 0x10(0x38)
};

// ScriptStruct TslGame.*1691cb1f4c
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1691cb1f4c {
	enum class EObserverHudAnimType AnimType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 EliminatorTeamNum; // 0x04(0x04)
	int32 EliminatedTeamNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString KillingSpreePlayerName; // 0x10(0x10)
	struct FString KillingSpreeClanName; // 0x20(0x10)
	struct FString KillingSpreeTeamName; // 0x30(0x10)
	int32 KillingSpreeTeamNum; // 0x40(0x04)
	int32 KillingSpreeKillCount; // 0x44(0x04)
	enum class EOutGamePlatformProvider KillingSpreePlayerPlatform; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*bda2ad42a4
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bda2ad42a4 {
	struct F*85697a7d8c Config; // 0x00(0x38)
	struct UClass* WidgetClass; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct UUserWidget* Widget; // 0x48(0x08)
	char pad_50[0x20]; // 0x50(0x20)
};

// ScriptStruct TslGame.*12d2e0d6b5
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*12d2e0d6b5 {
	struct FName Tag; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*7ebf0c1e1e
// Size: 0x230 (Inherited: 0x00)  [layout: KHOP]
struct F*7ebf0c1e1e {
	struct FText CastName; // 0x00(0x18)
	float CastTime; // 0x18(0x04)
	enum class ECastPriority CastPriority; // 0x1c(0x01)
	enum class ECastLevel CastLevel; // 0x1d(0x01)
	bool bIgnoreCastDistanceLimitation; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float CastMaxDistance; // 0x20(0x04)
	float CastMaxDistanceMultiplierOnServer; // 0x24(0x04)
	float CasterAndCastObjectMaxDistance; // 0x28(0x04)
	float CasterAndCastObjectMaxDistanceMultiplierOnServer; // 0x2c(0x04)
	bool bCanCastInsideMovingVehicle; // 0x30(0x01)
	bool bKeepCastWhenVehicleHandling; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MaxLinAcceleration; // 0x34(0x04)
	float CastMaxSpeed; // 0x38(0x04)
	float CastWalkSpeedModifier; // 0x3c(0x04)
	bool bNeedUnarm; // 0x40(0x01)
	bool bRecastsOnFinish; // 0x41(0x01)
	bool bLimitViewRotation; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	struct FVector2D LimitYawRange; // 0x44(0x08)
	struct FVector2D LimitPitchRange; // 0x4c(0x08)
	bool bSkipRestoreCharacterStance; // 0x54(0x01)
	bool bLockRotation; // 0x55(0x01)
	bool bCanCancelCasting; // 0x56(0x01)
	bool bCheckCastableConditionInProgress; // 0x57(0x01)
	bool bCancleWhenSprint; // 0x58(0x01)
	bool bCancelWhenJump; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float CancelBlockDuration; // 0x5c(0x04)
	bool bForceStance; // 0x60(0x01)
	enum class EStanceMode Stance; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<enum class EStanceMode> AllowedStanceTransition; // 0x68(0x10)
	enum class ECastAnim CastAnim; // 0x78(0x01)
	bool *f5315e669c; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float CastBlendingTime; // 0x7c(0x04)
	float NonCastBlendingTime; // 0x80(0x04)
	bool bFullbody_Animation_override; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct F*31adb93cbf CustomCastAnim; // 0x88(0xc0)
	struct F*31adb93cbf CustomCastAnim_Teen; // 0x148(0xc0)
	bool bApplyCastAimOffset; // 0x208(0x01)
	bool bFixAORotatorWhenCastStart; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct F*8dbebcbcdd CustomCastAimOffset; // 0x210(0x18)
	struct UTexture* *e43c71ff73; // 0x228(0x08)
};

// ScriptStruct TslGame.*8dbebcbcdd
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8dbebcbcdd {
	struct UBlendSpaceBase* *ac803548a5; // 0x00(0x08)
	struct UBlendSpaceBase* *cee8daf282; // 0x08(0x08)
	struct UBlendSpaceBase* *ae60ca0360; // 0x10(0x08)
};

// ScriptStruct TslGame.*31adb93cbf
// Size: 0xc0 (Inherited: 0x00)  [layout: KHOP]
struct F*31adb93cbf {
	struct F*8e6e1949b8 StartAnim; // 0x00(0x40)
	struct F*8e6e1949b8 LoopAnim; // 0x40(0x40)
	struct F*8e6e1949b8 EndAnim; // 0x80(0x40)
};

// ScriptStruct TslGame.*8e6e1949b8
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*8e6e1949b8 {
	struct F*a829096d30 AnimSequence; // 0x00(0x10)
	struct F*a829096d30 AnimSequenceFPP; // 0x10(0x10)
	struct F*a829096d30 AnimSequenceProne; // 0x20(0x10)
	struct F*a829096d30 AnimSequenceProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*a829096d30
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a829096d30 {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*fbcfcf7ffc
// Size: 0x1b8 (Inherited: 0x00)  [layout: KHOP]
struct F*fbcfcf7ffc {
	struct UClass* *21c4e7acc7; // 0x00(0x08)
	char IsPermanentCasting : 1; // 0x08(0x01)
	char IsCastAnimLoop : 1; // 0x08(0x01)
	enum class ECastAnim CastAnim; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct F*5393f1b377 CastingAnimDataSet; // 0x10(0xe8)
	struct F*31adb93cbf CustomCastAnim_Teen; // 0xf8(0xc0)
};

// ScriptStruct TslGame.*5393f1b377
// Size: 0xe8 (Inherited: 0x00)  [layout: KHOP]
struct F*5393f1b377 {
	char *7d949c0297 : 1; // 0x00(0x01)
	char bApplyCastAimOffset : 1; // 0x00(0x01)
	char *01724cbf19 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8a3c223d03; // 0x04(0x04)
	float *17898eca11; // 0x08(0x04)
	float *6a58cbf291; // 0x0c(0x04)
	struct F*31adb93cbf *22a4fbf3de; // 0x10(0xc0)
	struct F*8dbebcbcdd *cf22234ace; // 0xd0(0x18)
};

// ScriptStruct TslGame.*677b382933
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*677b382933 {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*12d2e0d6b5> DataList; // 0x08(0x10)
};

// ScriptStruct TslGame.*871dce4f37
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*871dce4f37 {
	struct FName LevelBlockId; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	int32 *73bd92ac38; // 0x14(0x04)
	int32 *6e5a0885d0; // 0x18(0x04)
	int32 *b807654a32; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3163fa5ce1
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*3163fa5ce1 {
	float *12863cf916; // 0x00(0x04)
	float *820798bdb5; // 0x04(0x04)
	bool *ae9529bcb2; // 0x08(0x01)
	bool *87e8c6d5b8; // 0x09(0x01)
	bool *ba3d8ec883; // 0x0a(0x01)
	bool *fc0240979b; // 0x0b(0x01)
};

// ScriptStruct TslGame.*8d40df8420
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8d40df8420 {
	struct FString EventName; // 0x00(0x10)
	struct UAkAudioEvent* AkAudioEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*611f41ac5f
// Size: 0x06 (Inherited: 0x00)  [layout: KHOP]
struct F*611f41ac5f {
	bool *98de769876; // 0x00(0x01)
	bool *3c9187c436; // 0x01(0x01)
	enum class EAutoEquipAttachmentForScopeMode *31b1686854; // 0x02(0x01)
	bool *935f893891; // 0x03(0x01)
	bool *2a297ab347; // 0x04(0x01)
	bool *e17b1adca2; // 0x05(0x01)
};

// ScriptStruct TslGame.*85b4b50c3b
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*85b4b50c3b {
	struct FName *50c911f2ee; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4d01319f40
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*4d01319f40 {
	struct FString *16d9f2fe88; // 0x00(0x10)
	struct FString *754646036c; // 0x10(0x10)
};

// ScriptStruct TslGame.*7aeef90b29
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7aeef90b29 {
	bool *800ed5bb30; // 0x00(0x01)
	bool *3d6f8741da; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<int32, int32> *a8a22643df; // 0x08(0x50)
	int32 *bb02946676; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> *dc0d2c6f4b; // 0x60(0x10)
	int32 *3d2dae46a9; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*4143176c0e
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4143176c0e {
	char bIsArmed : 1; // 0x00(0x01)
	char bIsGun : 1; // 0x00(0x01)
	char bIsHipped : 1; // 0x00(0x01)
	char bUseHandIKInLobby : 1; // 0x00(0x01)
	enum class EWeaponClass WeaponClass; // 0x01(0x01)
	enum class EWeaponClass LobbyAnimationClass; // 0x02(0x01)
	enum class EThrownWeaponType ThrownWeaponClass; // 0x03(0x01)
	enum class EAnimWeaponType AnimWeaponType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UBlendSpace1D* GripBlendspace; // 0x08(0x08)
	struct UBlendSpaceBase* LHGripBlendspace; // 0x10(0x08)
	int32 GripTypeIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.AnimMontageData
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FAnimMontageData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e21e1ffd51
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e21e1ffd51 {
	struct UBlendSpace1D* BlendSpaceFPP; // 0x00(0x08)
	struct UBlendSpace1D* BlendSpaceTPP; // 0x08(0x08)
	struct FInputBlendPose BlendSettings; // 0x10(0x10)
};

// ScriptStruct TslGame.*8542b46578
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*8542b46578 {
	struct F*108efe2d18 Stand; // 0x00(0x10)
	struct F*108efe2d18 Crouch; // 0x10(0x10)
	struct F*108efe2d18 Prone; // 0x20(0x10)
};

// ScriptStruct TslGame.*108efe2d18
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*108efe2d18 {
	float *b3c2ff6cae; // 0x00(0x04)
	float *1f513ddb34; // 0x04(0x04)
	float *0a8c131c97; // 0x08(0x04)
	float *b68e4e501b; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2bf04d68ba
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2bf04d68ba {
	struct TArray<struct F*963ec6c585> IdleAnimations; // 0x00(0x10)
};

// ScriptStruct TslGame.*963ec6c585
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*963ec6c585 {
	struct UAnimSequence* AnimAsset; // 0x00(0x08)
	struct FInt32Range LoopingCounter; // 0x08(0x10)
	float ChanceToPlay; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
};

// ScriptStruct TslGame.*b0deac419e
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct F*b0deac419e : F*fa15c8dd46 {
	struct UBlendSpace* BlendSpaceStop; // 0x98(0x08)
};

// ScriptStruct TslGame.*fa15c8dd46
// Size: 0x98 (Inherited: 0x00)  [layout: KHOP]
struct F*fa15c8dd46 {
	struct UAnimSequence* BasePose; // 0x00(0x08)
	struct F*2bf04d68ba IdleAnimations; // 0x08(0x10)
	struct UBlendSpace* BlendSpaceAimOffset; // 0x18(0x08)
	struct F*7d65d4c3f7 TurningInPlace; // 0x20(0x20)
	struct UBlendSpace* BlendSpaceLocomotion; // 0x40(0x08)
	struct UBlendSpace* BlendSpaceStart; // 0x48(0x08)
	struct F*037691484b AnimSpeed_Walk; // 0x50(0x20)
	struct F*037691484b AnimSpeed_Run; // 0x70(0x20)
	float AnimSpeed_Sprint; // 0x90(0x04)
	float AimOffsetBlendTime; // 0x94(0x04)
};

// ScriptStruct TslGame.*037691484b
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*037691484b {
	float F; // 0x00(0x04)
	float L; // 0x04(0x04)
	float R; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float FL; // 0x10(0x04)
	float FR; // 0x14(0x04)
	float BL; // 0x18(0x04)
	float BR; // 0x1c(0x04)
};

// ScriptStruct TslGame.*7d65d4c3f7
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*7d65d4c3f7 {
	struct UAnimSequence* Left90; // 0x00(0x08)
	struct UAnimSequence* Left180; // 0x08(0x08)
	struct UAnimSequence* Right90; // 0x10(0x08)
	struct UAnimSequence* Right180; // 0x18(0x08)
};

// ScriptStruct TslGame.*fa9d8d0354
// Size: 0xa8 (Inherited: 0x98)  [layout: KHOP]
struct F*fa9d8d0354 : F*fa15c8dd46 {
	struct UBlendSpace* BlendSpaceStopLeft; // 0x98(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xa0(0x08)
};

// ScriptStruct TslGame.*bda664c93b
// Size: 0xf0 (Inherited: 0x98)  [layout: KHOP]
struct F*bda664c93b : F*fa15c8dd46 {
	struct UAnimSequence* JumpStartForward; // 0x98(0x08)
	struct UAnimSequence* JumpStartBackward; // 0xa0(0x08)
	struct UAnimSequence* JumpStartStationary; // 0xa8(0x08)
	struct UAnimSequence* JumpStartLocalForward; // 0xb0(0x08)
	struct UAnimSequence* JumpStartLocalBackward; // 0xb8(0x08)
	struct UAnimSequence* JumpStartLocalStationary; // 0xc0(0x08)
	struct UBlendSpace* BlendSpaceStopLeft; // 0xc8(0x08)
	struct UBlendSpace* BlendSpaceStopRight; // 0xd0(0x08)
	struct UBlendSpace* BlendSpacePivotLeft; // 0xd8(0x08)
	struct UBlendSpace* BlendSpacePivotRight; // 0xe0(0x08)
	struct UBlendSpace* BlendSpaceFastTurnPivot; // 0xe8(0x08)
};

// ScriptStruct TslGame.*5644b21548
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5644b21548 {
	struct UAnimSequence* IdleBasePose; // 0x00(0x08)
	struct UAnimSequence* IdleBasePose_LegPoseforBlending; // 0x08(0x08)
	struct UAnimSequence* IdleBasePoseFPP; // 0x10(0x08)
	struct UAnimSequence* Additive_Normal; // 0x18(0x08)
	struct UAnimSequence* Additive_Sprint; // 0x20(0x08)
	struct F*2bf04d68ba IdleAnimations; // 0x28(0x10)
	struct F*2bf04d68ba IdleAnimationsCold; // 0x38(0x10)
	struct F*7d65d4c3f7 TurningInPlace; // 0x48(0x20)
	struct UBlendSpace* LocomotionBlendspace; // 0x68(0x08)
	struct UBlendSpace1D* LocomotionBlendspace_1D; // 0x70(0x08)
	struct UBlendSpace* LocomotionBlendspaceFPP; // 0x78(0x08)
	struct UBlendSpace1D* LocomotionBlendspace_1D_FPP; // 0x80(0x08)
	struct UBlendSpace* LocomotionStartBlendspace; // 0x88(0x08)
	struct UBlendSpace* LocomotionStopBlendspace; // 0x90(0x08)
	struct F*037691484b AnimSpeed_Walk; // 0x98(0x20)
	struct F*037691484b AnimSpeed_Run; // 0xb8(0x20)
	float AnimSpeed_Sprint; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.*1a6edf67ea
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*1a6edf67ea {
	struct F*20c3ddbfd1 StandTPP; // 0x00(0x10)
	struct F*20c3ddbfd1 StandFPP; // 0x10(0x10)
	struct F*20c3ddbfd1 ProneTPP; // 0x20(0x10)
	struct F*20c3ddbfd1 ProneFPP; // 0x30(0x10)
};

// ScriptStruct TslGame.*20c3ddbfd1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*20c3ddbfd1 {
	struct UAnimSequence* Default; // 0x00(0x08)
	struct UAnimSequence* ParentControl; // 0x08(0x08)
};

// ScriptStruct TslGame.*0cd20613b3
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*0cd20613b3 {
	float Walk; // 0x00(0x04)
	float Run; // 0x04(0x04)
	float Sprint; // 0x08(0x04)
};

// ScriptStruct TslGame.*b560ab37b6
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*b560ab37b6 {
	enum class ERaycastDirection Direction; // 0x00(0x01)
	bool bUseCustomDirection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector *c153d0df5b; // 0x04(0x0c)
	struct FName *1c5493ac2a; // 0x10(0x08)
	float *cc8af506d8; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct U*c771da137d* *9a27908a18; // 0x20(0x08)
	struct F*9965317244 *1199adaca3; // 0x28(0x10)
};

// ScriptStruct TslGame.*9965317244
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9965317244 {
	struct FVector Offset; // 0x00(0x0c)
	bool *db81fdd872; // 0x0c(0x01)
	bool *736abb180d; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*316322f8c8
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*316322f8c8 {
	float *9fc5198a01; // 0x00(0x04)
	bool *2932d26f6e; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *1b9cdaaae3; // 0x08(0x04)
	float *3a3354a135; // 0x0c(0x04)
	struct FVector *dfe34ea336; // 0x10(0x0c)
	float *dfbc23be1a; // 0x1c(0x04)
	struct FFloatRange *1c4ae44a82; // 0x20(0x10)
};

// ScriptStruct TslGame.*e2f265c745
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e2f265c745 {
	float *5722356138; // 0x00(0x04)
	bool *a1d65f8b2f; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *a1729f54ca; // 0x08(0x04)
	bool *de8cbcb51b; // 0x0c(0x01)
	bool bForceStance; // 0x0d(0x01)
	enum class EStanceMode *48bd1d13b8; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct TMap<enum class EStanceMode, float> *c64e4e1533; // 0x10(0x50)
	bool bCustomReleaseConfig; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct U*30ba6487d1* *83d50e28fe; // 0x68(0x08)
	bool *1d67a08e6c; // 0x70(0x01)
	enum class *f51c4f9594 *fd4d7724b4; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct TslGame.*56d46432ad
// Size: 0x148 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*56d46432ad {
	struct UAnimMontage* CarryActionMontage; // 0x00(0x08)
	bool *69971574dc; // 0x08(0x01)
	bool *ce729638d4; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UAnimSequence* IdlePose; // 0x10(0x08)
	struct UAnimSequence* IdlePose_FPP; // 0x18(0x08)
	struct UBlendSpaceBase* LocomotionBlendspace; // 0x20(0x08)
	struct UBlendSpaceBase* LocomotionBlendspace_FPP; // 0x28(0x08)
	struct FVector2D *d931f62d02; // 0x30(0x08)
	struct TMap<enum class EObjectCarryState, struct FVector2D> *a07269c6ef; // 0x38(0x50)
	float ObjectCarryLocoAnimSpeedInterpSpeed; // 0x88(0x04)
	bool *a3664b9153; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float *af79aadc1b; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TMap<enum class EObjectCarryState, struct UBlendSpaceBase*> CarryActionAimOffsetMap; // 0x98(0x50)
	struct UAnimSequence* *09dabff7db; // 0xe8(0x08)
	SetProperty *62db334ac6; // 0xf0(0x50)
	bool *8e4970f706; // 0x140(0x01)
	enum class EObjectCarryGripIKType *8398d6ed89; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
};

// ScriptStruct TslGame.*25fc92bba4
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*25fc92bba4 {
	enum class ECarriableObjectMaterialParamType *611823d0b9; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *4569786865; // 0x08(0x08)
	struct FName ParameterName; // 0x10(0x08)
	float *1ef83f4935; // 0x18(0x04)
	float *bdde933052; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuPubgIdData
// Size: 0x98 (Inherited: 0x08)  [layout: KHOP]
struct FWuPubgIdData : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	struct FString Nickname; // 0x18(0x10)
	int32 SurvivalTier; // 0x28(0x04)
	int32 SurvivalLevel; // 0x2c(0x04)
	int32 ReputationLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NameplateId; // 0x38(0x10)
	struct FString EmblemId; // 0x48(0x10)
	struct FString MedalOne; // 0x58(0x10)
	struct FString MedalTwo; // 0x68(0x10)
	struct FString ClanTag; // 0x78(0x10)
	struct FString ClanplateId; // 0x88(0x10)
};

// ScriptStruct TslGame.WuDirectMessage
// Size: 0x148 (Inherited: 0x08)  [layout: KHOP]
struct FWuDirectMessage : FGdlStructBase {
	enum class EWuDirectMessageType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Message; // 0x10(0x10)
	struct FString LobbyStringKey; // 0x20(0x10)
	struct FString IngameStringKey; // 0x30(0x10)
	struct FWuDirectMessageParameter MessageParameter; // 0x40(0x58)
	struct FString FromAccountId; // 0x98(0x10)
	struct FString FromNickname; // 0xa8(0x10)
	struct FString FromPlatform; // 0xb8(0x10)
	struct FString FromClanId; // 0xc8(0x10)
	struct FString FromClanTag; // 0xd8(0x10)
	int32 FromClanLevel; // 0xe8(0x04)
	bool FromOfflineOrStreamerMode; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FString ToAccountId; // 0xf0(0x10)
	struct FString ToNickname; // 0x100(0x10)
	struct FString ToPlatform; // 0x110(0x10)
	struct FString ToClanId; // 0x120(0x10)
	struct FString ToClanTag; // 0x130(0x10)
	int32 ToClanLevel; // 0x140(0x04)
	int32 ToComplimentType; // 0x144(0x04)
};

// ScriptStruct TslGame.WuDirectMessageParameter
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuDirectMessageParameter : FGdlStructBase {
	struct TArray<struct FWuDMNicknamePlatformData> DMLoginUsers; // 0x08(0x10)
	struct TArray<struct FWuDMNicknamePlatformData> DMMatchWinUsers; // 0x18(0x10)
	int32 DMClearClanChallenge; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FWuDMNicknamePlatformData> DMClanRandomBoxResultUsers; // 0x30(0x10)
	struct FString DMClanRandomBoxResultItem; // 0x40(0x10)
	bool DMIsAdminMessage; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.WuDMNicknamePlatformData
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuDMNicknamePlatformData : FGdlStructBase {
	struct FString DMNickname; // 0x08(0x10)
	struct FString DMPlatform; // 0x18(0x10)
	struct FString DMClanTag; // 0x28(0x10)
};

// ScriptStruct TslGame.WuUdpEncryptionKey
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuUdpEncryptionKey : FGdlStructBase {
	struct FString Key; // 0x08(0x10)
	struct FString ServerIV; // 0x18(0x10)
	struct FString ClientIV; // 0x28(0x10)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// Size: 0xb0 (Inherited: 0x08)  [layout: KHOP]
struct FWuCharacterCustomizationOptions : FGdlStructBase {
	struct TArray<struct FWuStringBoolPair> BoolOptions; // 0x08(0x10)
	struct TArray<struct FWuStringFloatPair> FloatOptions; // 0x18(0x10)
	struct TArray<struct FWuStringStringPair> StringOptions; // 0x28(0x10)
	struct TArray<struct FString> ItemIds; // 0x38(0x10)
	struct FString ActionSlots; // 0x48(0x10)
	struct TArray<struct FString> IngameEquipableItemIds; // 0x58(0x10)
	struct TArray<struct FWuVehicleSkinInfo> VehicleSkinInfos; // 0x68(0x10)
	struct FWuContenderCustomizationOption ContenderCustomizationOption; // 0x78(0x38)
};

// ScriptStruct TslGame.WuContenderCustomizationOption
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuContenderCustomizationOption : FGdlStructBase {
	struct FString OutfitLevel; // 0x08(0x10)
	struct TArray<struct FWuContenderOutfitOption> OutfitOptions; // 0x18(0x10)
	struct TArray<struct FString> SignatureOptions; // 0x28(0x10)
};

// ScriptStruct TslGame.WuContenderOutfitOption
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuContenderOutfitOption : FGdlStructBase {
	struct FString Subcategory; // 0x08(0x10)
	struct FString ID; // 0x18(0x10)
};

// ScriptStruct TslGame.WuVehicleSkinInfo
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuVehicleSkinInfo : FGdlStructBase {
	struct FString ItemID; // 0x08(0x10)
	int32 EquipSlot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FString> PartItemIds; // 0x20(0x10)
};

// ScriptStruct TslGame.WuStringStringPair
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuStringStringPair : FGdlStructBase {
	struct FString First; // 0x08(0x10)
	struct FString Second; // 0x18(0x10)
};

// ScriptStruct TslGame.WuStringFloatPair
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuStringFloatPair : FGdlStructBase {
	struct FString First; // 0x08(0x10)
	float Second; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuStringBoolPair
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuStringBoolPair : FGdlStructBase {
	struct FString First; // 0x08(0x10)
	bool Second; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.WuStringIntPair
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuStringIntPair : FGdlStructBase {
	struct FString First; // 0x08(0x10)
	int32 Second; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuIntIntPair
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuIntIntPair : FGdlStructBase {
	int32 First; // 0x08(0x04)
	int32 Second; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuGameOptionByCodeResultArgs
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameOptionByCodeResultArgs : FGdlStructBase {
	struct FString ID; // 0x08(0x10)
	bool IsLoaded; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Code; // 0x20(0x10)
	struct TArray<bool> DataBytes; // 0x30(0x10)
	struct FString ErrorCode; // 0x40(0x10)
};

// ScriptStruct TslGame.WuAppliedGameOption
// Size: 0x38 (Inherited: 0x20)  [layout: KHOP]
struct FWuAppliedGameOption : FWuFrontendReplyBase {
	bool IsCanceled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> AppliedTabs; // 0x28(0x10)
};

// ScriptStruct TslGame.WuFrontendReplyBase
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuFrontendReplyBase : FGdlStructBase {
	enum class EWuFrontendAsyncResult Result; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ErrorMessage; // 0x10(0x10)
};

// ScriptStruct TslGame.WuWeaponPreviewOptions
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuWeaponPreviewOptions : FGdlStructBase {
	struct FString TargetItemId; // 0x08(0x10)
	struct FString SkinItemID; // 0x18(0x10)
	struct FString CharmItemId; // 0x28(0x10)
};

// ScriptStruct TslGame.WuStatTrakPreviewOptions
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuStatTrakPreviewOptions : FGdlStructBase {
	enum class EWuStatTrakPreviewType StatTrakPreviewType; // 0x08(0x01)
	bool IsKillVisible; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 NumOfKills; // 0x0c(0x04)
	bool IsHeadshotKillVisible; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 NumOfHeadshotKills; // 0x14(0x04)
};

// ScriptStruct TslGame.WuPremiumCraftEffectData_L10N
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuPremiumCraftEffectData_L10N : FGdlStructBase {
	struct FString Title; // 0x08(0x10)
	struct FString ItemName; // 0x18(0x10)
	struct FString Grade; // 0x28(0x10)
};

// ScriptStruct TslGame.WuPremiumCraftEffectData
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuPremiumCraftEffectData : FGdlStructBase {
	struct FString IconURL; // 0x08(0x10)
	struct FString Level; // 0x18(0x10)
	struct FString GradeHexColorCode; // 0x28(0x10)
};

// ScriptStruct TslGame.WuFinalLevelUpEffectData_L10N
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuFinalLevelUpEffectData_L10N : FGdlStructBase {
	struct FString Title; // 0x08(0x10)
	struct FString ItemName; // 0x18(0x10)
};

// ScriptStruct TslGame.WuFinalLevelUpEffectData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuFinalLevelUpEffectData : FGdlStructBase {
	struct FString IconURL; // 0x08(0x10)
	struct FString Level; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLevelUpEffectData_L10N
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuLevelUpEffectData_L10N : FGdlStructBase {
	struct FString Title; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLevelUpEffectData
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuLevelUpEffectData : FGdlStructBase {
	struct FString Level; // 0x08(0x10)
};

// ScriptStruct TslGame.WuUMGEffectMetaData
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuUMGEffectMetaData : FGdlStructBase {
	struct FString renderTargetRef; // 0x08(0x10)
	int32 Width; // 0x18(0x04)
	int32 Height; // 0x1c(0x04)
	struct FString umgId; // 0x20(0x10)
};

// ScriptStruct TslGame.WuProfileCharacterLiveViewResult
// Size: 0x30 (Inherited: 0x20)  [layout: KHOP]
struct FWuProfileCharacterLiveViewResult : FWuFrontendReplyBase {
	struct FString renderTargetRef; // 0x20(0x10)
};

// ScriptStruct TslGame.WuProfileCharacterLiveViewData
// Size: 0x118 (Inherited: 0x08)  [layout: KHOP]
struct FWuProfileCharacterLiveViewData : FGdlStructBase {
	struct FString sceneName; // 0x08(0x10)
	bool isGenderMale; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FWuCharacterCustomizationOptions customization; // 0x20(0xb0)
	struct FWuLobbyPosePlayData LobbyPose; // 0xd0(0x48)
};

// ScriptStruct TslGame.WuLobbyPosePlayData
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct FWuLobbyPosePlayData : FGdlStructBase {
	int32 LobbyCharacterSlotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString LobbyPoseId; // 0x10(0x10)
	enum class EWuLobbyPosePlayType LobbyPosePlayType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString WeaponItemId; // 0x28(0x10)
	struct FString WeaponSkinId; // 0x38(0x10)
};

// ScriptStruct TslGame.WuUMGEffectPlayed
// Size: 0x30 (Inherited: 0x20)  [layout: KHOP]
struct FWuUMGEffectPlayed : FWuFrontendReplyBase {
	struct FString renderTargetRef; // 0x20(0x10)
};

// ScriptStruct TslGame.WuSystemMenuClosed
// Size: 0x20 (Inherited: 0x20)  [layout: KHOP]
struct FWuSystemMenuClosed : FWuFrontendReplyBase {
};

// ScriptStruct TslGame.WuProgressiveSkinPreviewOptions
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuProgressiveSkinPreviewOptions : FGdlStructBase {
	enum class EWuViewModeCategory ViewModeCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString TargetItemId; // 0x10(0x10)
	struct FString SkinItemID; // 0x20(0x10)
	struct TArray<struct FString> Attachments; // 0x30(0x10)
};

// ScriptStruct TslGame.WuKillBadgeSkinPreviewOptions
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuKillBadgeSkinPreviewOptions : FGdlStructBase {
	bool IsVisible; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SkinItemID; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
};

// ScriptStruct TslGame.WuKillFeedSkinPreviewOptions
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuKillFeedSkinPreviewOptions : FGdlStructBase {
	bool IsVisible; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString TargetItemId; // 0x10(0x10)
	struct FString SkinItemID; // 0x20(0x10)
	struct FString Nickname; // 0x30(0x10)
};

// ScriptStruct TslGame.WuLobbyEmotePlaySetData
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLobbyEmotePlaySetData : FGdlStructBase {
	struct FString EmoteName; // 0x08(0x10)
	struct FString PlayType; // 0x18(0x10)
	struct FString EmoteLeaderNetId; // 0x28(0x10)
	struct FString SectionName; // 0x38(0x10)
	bool IsEmoteFollower; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.WuSceneTravel
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuSceneTravel : FGdlStructBase {
	struct FString sceneName; // 0x08(0x10)
	enum class EWuSceneMoveType SceneMoveType; // 0x18(0x01)
	enum class EWuCameraType CameraType; // 0x19(0x01)
	enum class EWuViewModeCategory ViewModeCategory; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct TslGame.WuLobbyCharacterCreateData
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLobbyCharacterCreateData : FGdlStructBase {
	int32 LobbyCharacterSlotIndex; // 0x08(0x04)
	bool isGenderMale; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString NetId; // 0x10(0x10)
	struct FString Nickname; // 0x20(0x10)
	enum class EWuPlatformProvider PlatformProvider; // 0x30(0x01)
	bool CreateWithVisible; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct TslGame.WuDedicatedServerJoinData
// Size: 0x88 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuDedicatedServerJoinData : FGdlStructBase {
	struct FString Address; // 0x08(0x10)
	struct FWuUdpEncryptionKey EncryptionKey; // 0x18(0x38)
	struct FString SessionId; // 0x50(0x10)
	struct FString SessionZkToken; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	bool CrossPlay; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.WuReplayPlayData
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuReplayPlayData : FGdlStructBase {
	struct FString MatchId; // 0x08(0x10)
	int32 PlayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Type; // 0x20(0x10)
};

// ScriptStruct TslGame.WuReplaySummary
// Size: 0x88 (Inherited: 0x08)  [layout: KHOP]
struct FWuReplaySummary : FGdlStructBase {
	struct FString MatchId; // 0x08(0x10)
	bool IsServerRecording; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString RecordUserId; // 0x20(0x10)
	struct FString RecordUserNickName; // 0x30(0x10)
	struct FString MapName; // 0x40(0x10)
	struct FString WeatherName; // 0x50(0x10)
	struct FString RegionName; // 0x60(0x10)
	int32 NumPlayers; // 0x70(0x04)
	int32 NumTeams; // 0x74(0x04)
	struct TArray<struct FWuPlayerSummary> PlayerStateSummaries; // 0x78(0x10)
};

// ScriptStruct TslGame.WuReplay
// Size: 0x108 (Inherited: 0x08)  [layout: KHOP]
struct FWuReplay : FGdlStructBase {
	struct FString FriendlyName; // 0x08(0x10)
	struct FString Name; // 0x18(0x10)
	bool IsLive; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString Date; // 0x30(0x10)
	int32 SizeInBytes; // 0x40(0x04)
	int32 LengthInMS; // 0x44(0x04)
	int32 NumViewers; // 0x48(0x04)
	bool IsIncomplete; // 0x4c(0x01)
	bool IsVersionCompatible; // 0x4d(0x01)
	bool IsCorrupted; // 0x4e(0x01)
	bool IsServerRecording; // 0x4f(0x01)
	bool ShouldKeep; // 0x50(0x01)
	bool IsArchived; // 0x51(0x01)
	bool IsAllDeadOrWin; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FString Mode; // 0x58(0x10)
	struct FString RecordUserId; // 0x68(0x10)
	struct FString RecordUserNickName; // 0x78(0x10)
	struct FString MapName; // 0x88(0x10)
	bool HasCameraEvent; // 0x98(0x01)
	bool IsClip; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32 ClipEndTime; // 0x9c(0x04)
	int32 ClipStartTime; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString ClipTargetUserId; // 0xa8(0x10)
	struct FString ClipTargetUserNickName; // 0xb8(0x10)
	int32 ClipTime; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString GameVersion; // 0xd0(0x10)
	int32 MK3DReplayVersion; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString RecordAccountId; // 0xe8(0x10)
	struct FString ReportToken; // 0xf8(0x10)
};

// ScriptStruct TslGame.WuLobbyCustomizingData
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct FWuLobbyCustomizingData : FGdlStructBase {
	enum class EWuLobbyCustomizingSlotType LobbyCustomizingSlotType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 SlotIndex; // 0x0c(0x04)
	struct FWuLobbyItemViewData LobbyItemViewData; // 0x10(0x50)
};

// ScriptStruct TslGame.WuLobbyItemViewData
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLobbyItemViewData : FGdlStructBase {
	struct FString TargetItemId; // 0x08(0x10)
	struct FString SkinItemID; // 0x18(0x10)
	struct TArray<struct FString> PartIds; // 0x28(0x10)
	enum class EWuLobbyItemSequenceTag SequenceTag; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float InitialScale; // 0x3c(0x04)
	float ZoomMultiplier; // 0x40(0x04)
	float ViewModeScaleMin; // 0x44(0x04)
	float ViewModeScaleMax; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.WuPubgIdRenderingData
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct FWuPubgIdRenderingData : FGdlStructBase {
	struct TArray<struct FWuNameplateRenderingData> NameplateList; // 0x08(0x10)
	struct TArray<struct FWuEmblemRenderingData> EmblemList; // 0x18(0x10)
	struct TArray<struct FWuMedalRenderingData> MedalList; // 0x28(0x10)
	struct TArray<struct FWuClanPlateRenderingData> ClanPlateList; // 0x38(0x10)
};

// ScriptStruct TslGame.WuClanPlateRenderingData
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FWuClanPlateRenderingData : FGdlStructBase {
	struct FString ClanplateId; // 0x08(0x10)
	struct FString TopColor; // 0x18(0x10)
	struct FString BottomColor; // 0x28(0x10)
	struct FString OutgameImagePath; // 0x38(0x10)
	struct FString OutgameImagePathLD; // 0x48(0x10)
};

// ScriptStruct TslGame.WuMedalRenderingData
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuMedalRenderingData : FGdlStructBase {
	struct FString MedalId; // 0x08(0x10)
	struct FString OutgameImagePathFHD; // 0x18(0x10)
	struct FString OutgameImagePathFHDLarge; // 0x28(0x10)
};

// ScriptStruct TslGame.WuEmblemRenderingData
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuEmblemRenderingData : FGdlStructBase {
	struct FString EmblemId; // 0x08(0x10)
	bool IsAnim; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString OutgameImagePath; // 0x20(0x10)
	struct FString OutgameImagePathFHD; // 0x30(0x10)
	struct FString OutgameAnimPath; // 0x40(0x10)
	float IntervalLengthSec; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.WuNameplateRenderingData
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuNameplateRenderingData : FGdlStructBase {
	struct FString NameplateId; // 0x08(0x10)
	bool IsAnim; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString OutgameImagePath; // 0x20(0x10)
	struct FString OutgameAnimPath; // 0x30(0x10)
};

// ScriptStruct TslGame.WuRankDetail
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuRankDetail : FGdlStructBase {
	enum class EWuCompetitiveRankLobbyTier tier; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 division; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuReceipt
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuReceipt : FGdlStructBase {
	struct FString TransactionId; // 0x08(0x10)
	struct FString OfferId; // 0x18(0x10)
	int32 Quantity; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString EntitlementId; // 0x30(0x10)
};

// ScriptStruct TslGame.WuOffer
// Size: 0xa8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuOffer : FGdlStructBase {
	struct FString OfferId; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	struct FString LongDescription; // 0x38(0x10)
	struct FString RegularPriceText; // 0x48(0x10)
	int32 RegularPrice; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString PriceText; // 0x60(0x10)
	int32 NumericPrice; // 0x70(0x04)
	int32 PurchasedCount; // 0x74(0x04)
	int32 DecimalPoint; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString CurrencyCode; // 0x80(0x10)
	struct FDateTime ReleaseDate; // 0x90(0x08)
	struct FDateTime ExpirationDate; // 0x98(0x08)
	enum class EWuOnlineStoreOfferDiscountType DiscountType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct TslGame.WuLiveViewMetaData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLiveViewMetaData : FGdlStructBase {
	float fps; // 0x08(0x04)
	int32 Width; // 0x0c(0x04)
	int32 Height; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString BackgroundColor; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLiveViewItem
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuLiveViewItem : FGdlStructBase {
	struct FWuLiveViewItemBase Basedata; // 0x08(0x28)
	struct TArray<struct FString> Attachments; // 0x30(0x10)
};

// ScriptStruct TslGame.WuLiveViewItemBase
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLiveViewItemBase : FGdlStructBase {
	struct FString ItemID; // 0x08(0x10)
	struct FString SkinId; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLiveViewCharacter
// Size: 0xc0 (Inherited: 0x08)  [layout: KHOP]
struct FWuLiveViewCharacter : FGdlStructBase {
	bool Gender; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FWuCharacterCustomizationOptions CustomizationOptions; // 0x10(0xb0)
};

// ScriptStruct TslGame.WuLastMatchInfo
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLastMatchInfo : FGdlStructBase {
	struct FString MatchId; // 0x08(0x10)
	bool IsQuitter; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.WuInGameMission
// Size: 0x80 (Inherited: 0x08)  [layout: KHOP]
struct FWuInGameMission : FGdlStructBase {
	struct TArray<struct FString> TargetGameModeList; // 0x08(0x10)
	struct FString __Type; // 0x18(0x10)
	struct FString MissionId; // 0x28(0x10)
	bool IsAchieved; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString Description; // 0x40(0x10)
	bool IsLocked; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ProgressRatio; // 0x54(0x04)
	struct FString ProgressText; // 0x58(0x10)
	int32 InitialProgress; // 0x68(0x04)
	int32 MaximumProgress; // 0x6c(0x04)
	struct FString MissionIconName; // 0x70(0x10)
};

// ScriptStruct TslGame.WuPartyMemberVoiceChatInfo
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuPartyMemberVoiceChatInfo : FGdlStructBase {
	struct FString UniqueId; // 0x08(0x10)
	struct FString Nickname; // 0x18(0x10)
	enum class EWuPlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.WuCommunicateTargetInfo
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuCommunicateTargetInfo : FGdlStructBase {
	struct FString UniqueId; // 0x08(0x10)
	struct FString Nickname; // 0x18(0x10)
	enum class EWuPlatformProvider PlatformProvider; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FWuCommunicationPrivilege CommunicationPrivilege; // 0x30(0x10)
	bool IsMyFollower; // 0x40(0x01)
	bool AmIFollowing; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// ScriptStruct TslGame.WuCommunicationPrivilege
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuCommunicationPrivilege : FGdlStructBase {
	int32 Multiplay; // 0x08(0x04)
	int32 CrossPlay; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuClientAuthData
// Size: 0x78 (Inherited: 0x08)  [layout: KHOP]
struct FWuClientAuthData : FGdlStructBase {
	struct FString PlatformType; // 0x08(0x10)
	struct FString AppId; // 0x18(0x10)
	struct FString FullGameVersion; // 0x28(0x10)
	struct FString UserSerial; // 0x38(0x10)
	struct FString AccessToken; // 0x48(0x10)
	struct FString UserDisplayName; // 0x58(0x10)
	struct FString PlayerNetId; // 0x68(0x10)
};

// ScriptStruct TslGame.*4c5ff8ac79
// Size: 0x38 (Inherited: 0x28)  [layout: KHOP]
struct F*4c5ff8ac79 : F*0b9530309e {
	enum class EWeaponClass WeaponClassEnum; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName SkinTag; // 0x30(0x08)
};

// ScriptStruct TslGame.*0b9530309e
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*0b9530309e {
	struct FText ItemName; // 0x00(0x18)
	struct FString BlueprintId; // 0x18(0x10)
};

// ScriptStruct TslGame.*3ac306a4c4
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*3ac306a4c4 {
	enum class ETslOutGameCloudRequestType RequestType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayText; // 0x08(0x18)
	float *b136d474b9; // 0x20(0x04)
	float *53954bd4c5; // 0x24(0x04)
	struct FText *5c15bd65ed; // 0x28(0x18)
	struct FText *6d80bc63ef; // 0x40(0x18)
	struct TMap<enum class ETslOutGameCloudRequestErrorType, struct FText> *988053de71; // 0x58(0x50)
};

// ScriptStruct TslGame.*4472c92c9d
// Size: 0x38 (Inherited: 0x28)  [layout: KHOP]
struct F*4472c92c9d : F*0b9530309e {
	struct TArray<struct FName> SkinnableTagList; // 0x28(0x10)
};

// ScriptStruct TslGame.*89163fcbe0
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*89163fcbe0 {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAnimMontage* *c19c19987a; // 0x50(0x08)
	struct TArray<struct UAnimSequenceBase*> *8b0ccda193; // 0x58(0x10)
	struct U*234f5ce436* *6035700c16; // 0x68(0x08)
};

// ScriptStruct TslGame.TslLobbyCustomizingData
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct FTslLobbyCustomizingData {
	enum class ELobbyCustomizingSlotType LobbyCustomizingSlotType; // 0x00(0x01)
	bool SlotIndex; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FWuLobbyItemViewData LobbyItemViewData; // 0x08(0x50)
};

// ScriptStruct TslGame.*a2647bd6b1
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*a2647bd6b1 {
	struct FString WeaponID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
	struct TArray<struct FName> WeaponAttachmentIDList; // 0x20(0x10)
	struct U*234f5ce436* *234f5ce436; // 0x30(0x08)
};

// ScriptStruct TslGame.*5cf81497ac
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*5cf81497ac {
	struct FVector InitialActorOffset; // 0x00(0x0c)
	struct FVector TraceVector; // 0x0c(0x0c)
	float SphereRadius; // 0x18(0x04)
};

// ScriptStruct TslGame.EmoteDBDataRow
// Size: 0xa8 (Inherited: 0x08)  [layout: KHOP]
struct FEmoteDBDataRow : FTableRowBase {
	int32 EmoteID; // 0x08(0x04)
	enum class EEmotePlayType PlayType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText EmoteLocalizedName; // 0x10(0x18)
	struct UTexture2D* UITexture; // 0x28(0x08)
	struct UAnimMontage* AnimMogtage_SoftRef; // 0x30(0x20)
	struct FEmoteArray RandomEmoteIDs; // 0x50(0x10)
	int32 EmoteIDforSpectators; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FEmoteArray EmoteIDsForParticipants; // 0x68(0x10)
	bool bRandomGroupEmoteID; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 AllowedParticipantNumber; // 0x7c(0x04)
	struct FName StartInteractSectionName; // 0x80(0x08)
	bool bRandomPlayInteractScetion; // 0x88(0x01)
	enum class EEmoteMoveType MoveType; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float MaxMoveSpeed; // 0x8c(0x04)
	float MovingEmoteCollisionRadius; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FName> AllowedItemIDs; // 0x98(0x10)
};

// ScriptStruct TslGame.EmoteArray
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FEmoteArray {
	struct TArray<int32> EmoteIDs; // 0x00(0x10)
};

// ScriptStruct TslGame.*89df27ebd7
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*89df27ebd7 {
	struct UAnimMontage* *83418b9fb3; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
};

// ScriptStruct TslGame.WuLogTutorialClear
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialClear : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 ClearScore; // 0x70(0x04)
	int32 BonusScore; // 0x74(0x04)
	int32 PenaltyScore; // 0x78(0x04)
	int32 TimeAttackScore; // 0x7c(0x04)
	int32 TotalScore; // 0x80(0x04)
	int32 KillCount; // 0x84(0x04)
	float DamageDealt; // 0x88(0x04)
	float ElapsedTimeSec; // 0x8c(0x04)
	struct FString Rank; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogTutorialPlayerExit
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialPlayerExit : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString ChapterID; // 0x70(0x10)
	struct FString StepID; // 0x80(0x10)
	struct FString ExitReason; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogTutorialPlayerDeath
// Size: 0xc0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialPlayerDeath : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString ChapterID; // 0x70(0x10)
	struct FString StepID; // 0x80(0x10)
	struct FVector Location; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString DamageReason; // 0xa0(0x10)
	struct FString DamageTypeCategory; // 0xb0(0x10)
};

// ScriptStruct TslGame.WuLogTutorialChapterResult
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialChapterResult : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString ChapterID; // 0x70(0x10)
	float ElapsedTimeSec; // 0x80(0x04)
	bool bSucceeded; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct TArray<struct FWuLogTutorialStepResult> StepResults; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogTutorialStepResult
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogTutorialStepResult : FGdlStructBase {
	struct FString StepID; // 0x08(0x10)
	bool bHidden; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Result; // 0x20(0x10)
	float ElapsedTimeSec; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuLogTutorialChapterStart
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialChapterStart : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString ChapterID; // 0x70(0x10)
	int32 AttemptNumber; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString StartReason; // 0x88(0x10)
};

// ScriptStruct TslGame.WuLogTutorialEnter
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTutorialEnter : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogAIMoveTo
// Size: 0x160 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogAIMoveTo : FLogBase {
	struct FVector StartLocation; // 0x60(0x0c)
	struct FVector GoalLocation; // 0x6c(0x0c)
	struct FWuLogCharacter Character; // 0x78(0xc8)
	struct FString FailureType; // 0x140(0x10)
	struct FString Description; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogCharacter
// Size: 0xc8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogCharacter : FGdlStructBase {
	struct FString Name; // 0x08(0x10)
	struct FString NetId; // 0x18(0x10)
	int32 TeamId; // 0x28(0x04)
	float Health; // 0x2c(0x04)
	struct FVector Location; // 0x30(0x0c)
	int32 Ranking; // 0x3c(0x04)
	int32 IndividualRanking; // 0x40(0x04)
	int32 Platform; // 0x44(0x04)
	struct FString AccountId; // 0x48(0x10)
	bool IsInBlueZone; // 0x58(0x01)
	bool IsInRedZone; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FString InSpecialZone; // 0x60(0x10)
	bool IsInVehicle; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FString> Zone; // 0x78(0x10)
	struct FString MovementBase; // 0x88(0x10)
	bool IsAI; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString ParticipatedState; // 0xa0(0x10)
	struct FString Type; // 0xb0(0x10)
	bool IsDBNO; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct TslGame.WuLogModeMissionData
// Size: 0x1c0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogModeMissionData : FLogBase {
	struct FString LogName; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct TMap<struct FString, bool> BoolParameters; // 0x80(0x50)
	struct TMap<struct FString, int32> IntParameters; // 0xd0(0x50)
	struct TMap<struct FString, float> FloatParameters; // 0x120(0x50)
	struct TMap<struct FString, struct FString> StringParameters; // 0x170(0x50)
};

// ScriptStruct TslGame.WuLogBSAllMissionsCompleted
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBSAllMissionsCompleted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogBSSkillCrafted
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBSSkillCrafted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 SkillId; // 0x70(0x04)
	int32 PointsUsed; // 0x74(0x04)
	bool bRefunded; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct TslGame.WuLogBSSuperCrafted
// Size: 0x88 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBSSuperCrafted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString SuperTag; // 0x70(0x10)
	int32 FragmentUsed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogBSMissionCleared
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBSMissionCleared : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString Stage; // 0x70(0x10)
	int32 tier; // 0x80(0x04)
	bool Clear; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	int32 Reason; // 0x88(0x04)
	float PlayTime; // 0x8c(0x04)
	int32 Kills; // 0x90(0x04)
	int32 Difficulty; // 0x94(0x04)
};

// ScriptStruct TslGame.WuLogPlayTimeRecordUpdate
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayTimeRecordUpdate : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 SurvivalTime; // 0x70(0x04)
	int32 TeamSpectatingTime; // 0x74(0x04)
	bool bPaused; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct TslGame.WuLogRankingData
// Size: 0xd0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogRankingData : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString ContentType; // 0x70(0x10)
	struct TMap<struct FString, double> Stats; // 0x80(0x50)
};

// ScriptStruct TslGame.WuLogVoiceBanKick
// Size: 0x88 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVoiceBanKick : FLogBase {
	struct FString SpeakerAccountId; // 0x60(0x10)
	struct TArray<struct FWuVoiceBanReportContext> ReportContexts; // 0x70(0x10)
	float ThresholdRatio; // 0x80(0x04)
	float ReportedRatio; // 0x84(0x04)
};

// ScriptStruct TslGame.WuVoiceBanReportContext
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct FWuVoiceBanReportContext : FGdlStructBase {
	struct FString ReporterAccountId; // 0x08(0x10)
	struct FString ResultCode; // 0x18(0x10)
	struct FString TextFilePath; // 0x28(0x10)
	struct FString WavFilePath; // 0x38(0x10)
};

// ScriptStruct TslGame.WuLogVoiceBanSuspicious
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVoiceBanSuspicious : FLogBase {
	struct FString SpeakerAccountId; // 0x60(0x10)
	struct FString ReporterAccountId; // 0x70(0x10)
	struct FString ResultCode; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogObjectCarryUsage
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogObjectCarryUsage : FLogBase {
	struct FWuLogCharacter CarryingCharacter; // 0x60(0xc8)
	struct FString CarriableObjectType; // 0x128(0x10)
	struct FString ObjectCarryState; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogStandalone
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogStandalone : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	int32 RetryCount; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString ModeId; // 0x78(0x10)
	struct FWuLogPobg pobg; // 0x88(0x18)
};

// ScriptStruct TslGame.WuLogPobg
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogPobg : FGdlStructBase {
	int32 PlayTime; // 0x08(0x04)
	int32 MapCleared; // 0x0c(0x04)
	int32 Kill; // 0x10(0x04)
	int32 Difficulty; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogUGCUsage
// Size: 0x140 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUGCUsage : FLogBase {
	struct FString CreatorAccountId; // 0x60(0x10)
	int64 CreateTimestamp; // 0x70(0x08)
	struct FString LastModifierAccountId; // 0x78(0x10)
	int64 LastModifiedTimestamp; // 0x88(0x08)
	struct FString OwnerAccountId; // 0x90(0x10)
	struct FString OwnerNickName; // 0xa0(0x10)
	struct FString ModName; // 0xb0(0x10)
	struct FString ModDesc; // 0xc0(0x10)
	struct FString ModMainTag; // 0xd0(0x10)
	struct FString ModSubTag; // 0xe0(0x10)
	int32 ModMajorVersion; // 0xf0(0x04)
	int32 ModMinorVersion; // 0xf4(0x04)
	int32 ModFinishedRound; // 0xf8(0x04)
	int32 ModTotalRound; // 0xfc(0x04)
	int32 ModStartPlayer; // 0x100(0x04)
	int32 ModPlayingPlayer; // 0x104(0x04)
	int32 ModTotalPlayer; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	int64 ModPlayDuration; // 0x110(0x08)
	struct FString ModFilePath; // 0x118(0x10)
	int64 ModFileSize; // 0x128(0x08)
	struct FString ModFileCRC; // 0x130(0x10)
};

// ScriptStruct TslGame.WuLogUGCPlay
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUGCPlay : FLogBase {
	bool IsPlayEnded; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString PlayType; // 0x68(0x10)
	struct FString UserSelectPlayType; // 0x78(0x10)
	int32 PlayTime; // 0x88(0x04)
	int32 TeamCount; // 0x8c(0x04)
	int32 TeamMemberCount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FWuUGCRoundPlayData> RoundDataList; // 0x98(0x10)
	struct TArray<struct FWuUGCUserPlayData> UserPlayDataList; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuUGCUserPlayData
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuUGCUserPlayData : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	int32 UserPlayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuUGCRoundPlayData
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuUGCRoundPlayData : FGdlStructBase {
	struct FString RoundPlayType; // 0x08(0x10)
	int32 RoundPlayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogUGCEdit
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUGCEdit : FLogBase {
	struct FString HostAccountId; // 0x60(0x10)
	int32 TotalEditCount; // 0x70(0x04)
	int32 TotalSaveCount; // 0x74(0x04)
	int32 TotalLoadCount; // 0x78(0x04)
	int32 TotalEditTime; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogSDMRespawn
// Size: 0x88 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSDMRespawn : FLogBase {
	struct FString BattleAreaType; // 0x60(0x10)
	float NearestEnemyDist; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString RespawnPointName; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogSDMMatchResult
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSDMMatchResult : FLogBase {
	struct FString MapName; // 0x60(0x10)
	struct FString BattleAreaType; // 0x70(0x10)
	struct TArray<struct FWuSDMPlayerMatchSummary> Players; // 0x80(0x10)
	struct FString SessionEndReason; // 0x90(0x10)
};

// ScriptStruct TslGame.WuSDMPlayerMatchSummary
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuSDMPlayerMatchSummary : FGdlStructBase {
	int32 Rank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Nickname; // 0x10(0x10)
	struct FString AccountId; // 0x20(0x10)
	int32 Kill; // 0x30(0x04)
	int32 MaxChainKill; // 0x34(0x04)
	float Damage; // 0x38(0x04)
	int32 death; // 0x3c(0x04)
	float Score; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.WuLogTdm
// Size: 0xc0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTdm : FLogBase {
	struct FString BattleAreaType; // 0x60(0x10)
	struct FString TeamWon; // 0x70(0x10)
	struct FWuTdmTeamNums StartPlayers; // 0x80(0x10)
	struct FWuTdmTeamNums BreakinPlayers; // 0x90(0x10)
	struct FWuTdmTeamNums DropoutPlayers; // 0xa0(0x10)
	struct FWuTdmTeamNums EndPlayers; // 0xb0(0x10)
};

// ScriptStruct TslGame.WuTdmTeamNums
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuTdmTeamNums : FGdlStructBase {
	int32 Blue; // 0x08(0x04)
	int32 Red; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuLogCustomInputSettings
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCustomInputSettings : FLogBase {
	struct TArray<struct FWuLogActionKey> ActionKeys; // 0x60(0x10)
	struct TArray<struct FWuLogAxisKey> AxisKeys; // 0x70(0x10)
	struct FString AccountId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogAxisKey
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogAxisKey : FGdlStructBase {
	struct FString AxisName; // 0x08(0x10)
	float Scale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Key; // 0x20(0x10)
};

// ScriptStruct TslGame.WuLogActionKey
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogActionKey : FGdlStructBase {
	struct FString ActionName; // 0x08(0x10)
	struct FString Key; // 0x18(0x10)
	bool Shift; // 0x28(0x01)
	bool Ctrl; // 0x29(0x01)
	bool Alt; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.WuLogPlayerActionSummary
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerActionSummary : FLogBase {
	struct TArray<struct FWuStringIntPair> ActionCount; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogSuccessRecallPlayer
// Size: 0xa8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSuccessRecallPlayer : FLogBase {
	struct FString RecallPlayerAccountId; // 0x60(0x10)
	struct FString LastKillerAccountId; // 0x70(0x10)
	struct FString RegisterAccountId; // 0x80(0x10)
	struct FString RevivalMethod; // 0x90(0x10)
	int32 Phase; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogDuelMatchResult
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogDuelMatchResult : FLogBase {
	struct FString Reason; // 0x60(0x10)
	struct TArray<struct FWuLogDuelTeamResult> DuelTeamResults; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogDuelTeamResult
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogDuelTeamResult : FGdlStructBase {
	struct FString Result; // 0x08(0x10)
	int32 TeamId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString SessionId; // 0x20(0x10)
	bool IsPerfectMatch; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 Score; // 0x34(0x04)
	int32 KillScore; // 0x38(0x04)
	int32 RankScore; // 0x3c(0x04)
	struct TArray<struct FString> AccountIds; // 0x40(0x10)
};

// ScriptStruct TslGame.WuLogTeamParkourUsage
// Size: 0x210 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTeamParkourUsage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogCharacter TargetCharacter; // 0x128(0xc8)
	struct FString TeamParkourRole; // 0x1f0(0x10)
	struct FString TeamParkourState; // 0x200(0x10)
};

// ScriptStruct TslGame.WuLogDestructLandscape
// Size: 0x150 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogDestructLandscape : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString CauserName; // 0x128(0x10)
	struct FVector Location; // 0x138(0x0c)
	float Radius; // 0x144(0x04)
	float Depth; // 0x148(0x04)
	float Damage; // 0x14c(0x04)
};

// ScriptStruct TslGame.WuLogUseMarketCategory
// Size: 0x160 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUseMarketCategory : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString MarketLevel; // 0x128(0x10)
	struct FString MarketCategory; // 0x138(0x10)
	struct FString ItemID; // 0x148(0x10)
	int32 ItemCount; // 0x158(0x04)
	int32 BRCoinCount; // 0x15c(0x04)
};

// ScriptStruct TslGame.WuLogUseMarket
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUseMarket : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString MarketLevel; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSubAircraftAppearance
// Size: 0x68 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSubAircraftAppearance : FLogBase {
	bool SubAircraftCreated; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float SubAircraftProbability; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogDropStructPositions
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogDropStructPositions : FLogBase {
	struct TArray<struct FString> DropStructNames; // 0x60(0x10)
	struct TArray<float> DropStructCreationTime; // 0x70(0x10)
	struct TArray<struct FVector> DropStructPositions; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogStructFlarePos
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogStructFlarePos : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogIngameMissionRewardProvided
// Size: 0x160 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogIngameMissionRewardProvided : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString MissionId; // 0x128(0x10)
	struct FString RewardId; // 0x138(0x10)
	bool EveryRewardEarned; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct FWuLogItem> EarnedRewardItems; // 0x150(0x10)
};

// ScriptStruct TslGame.WuLogItem
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogItem : FGdlStructBase {
	struct FString ItemID; // 0x08(0x10)
	int32 StackCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Category; // 0x20(0x10)
	struct FString Subcategory; // 0x30(0x10)
	struct TArray<struct FString> AttachedItems; // 0x40(0x10)
	bool HasRandomAttachments; // 0x50(0x01)
	bool IsUnique; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct TslGame.WuLogIngameMissionReplacementInfo
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogIngameMissionReplacementInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString PreviousMissionId; // 0x128(0x10)
	struct FString ReplacedMissionId; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionStatistic
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogIngameMissionStatistic : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString MapName; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	struct TArray<struct FWuLogIngameMissionProgress> MissionStatistics; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionProgress
// Size: 0xe0 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogIngameMissionProgress : FGdlStructBase {
	struct FWuLogCharacter Character; // 0x08(0xc8)
	struct TArray<struct FWuLogIngameMissionInfo> Missions; // 0xd0(0x10)
};

// ScriptStruct TslGame.WuLogIngameMissionInfo
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogIngameMissionInfo : FGdlStructBase {
	struct FString MissionId; // 0x08(0x10)
	struct FString RewardId; // 0x18(0x10)
	struct TArray<struct FWuLogItem> RewardItems; // 0x28(0x10)
	int32 Progress; // 0x38(0x04)
	int32 Goal; // 0x3c(0x04)
	bool Result; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.WuLogAliveCharacterNum
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogAliveCharacterNum : FLogBase {
	int32 AliveAINum; // 0x60(0x04)
	int32 AliveAITeamNum; // 0x64(0x04)
	int32 AlivePlayerNum; // 0x68(0x04)
	int32 AlivePlayerTeamNum; // 0x6c(0x04)
	struct TArray<struct FString> VictimCharacterAccountId; // 0x70(0x10)
	struct TArray<struct FString> ReviveOrRespawnCharacterAccountId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogPlayerCureDebuff
// Size: 0x200 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerCureDebuff : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogCharacter TargetCharacter; // 0x128(0xc8)
	struct FString DebuffName; // 0x1f0(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHungryStage
// Size: 0x140 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerHungryStage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 PreviousStage; // 0x128(0x04)
	int32 CurrentStage; // 0x12c(0x04)
	struct FString DebuffName; // 0x130(0x10)
};

// ScriptStruct TslGame.WuLogSLBItemTransmit
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSLBItemTransmit : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct TArray<struct FWuLogItem> TransmitedItem; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSLBItemReward
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSLBItemReward : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct TArray<struct FWuLogItem> Item; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSLBClearResult
// Size: 0xa0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSLBClearResult : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 Stage; // 0x70(0x04)
	int32 Difficulty; // 0x74(0x04)
	bool Clear; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString Reason; // 0x80(0x10)
	int32 PlayTime; // 0x90(0x04)
	int32 Score; // 0x94(0x04)
	int32 MaxSatietyTime; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.WuLogSLBStartStage
// Size: 0x68 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSLBStartStage : FLogBase {
	int32 Stage; // 0x60(0x04)
	int32 Difficulty; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogSKBDPlayerBuffed
// Size: 0x150 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSKBDPlayerBuffed : FLogBase {
	struct FString BuffName; // 0x60(0x10)
	int32 BuffStacks; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString StageInfo; // 0x78(0x10)
	struct FWuLogCharacter Character; // 0x88(0xc8)
};

// ScriptStruct TslGame.WuLogSKBDBossGroggy
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSKBDBossGroggy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString StageInfo; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSKBDBossSkillUse
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSKBDBossSkillUse : FLogBase {
	struct FString UsedSkill; // 0x60(0x10)
	struct FString StageInfo; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogSKBDClearResult
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSKBDClearResult : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString Difficulty; // 0x70(0x10)
	bool Clear; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString Reason; // 0x88(0x10)
	int32 PlayTime; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString RewardItem; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogSKBDStartStage
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSKBDStartStage : FLogBase {
	struct FString Difficulty; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogBombPlayerDefuse
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombPlayerDefuse : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xe8)
};

// ScriptStruct TslGame.WuLogBombMissionInfo
// Size: 0xe8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBombMissionInfo : FGdlStructBase {
	struct FWuLogCharacter Character; // 0x08(0xc8)
	struct FString Action; // 0xd0(0x10)
	int32 CurrentRound; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerPlant
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombPlayerPlant : FLogBase {
	struct FWuLogBombMissionInfo Info; // 0x60(0xe8)
};

// ScriptStruct TslGame.WuLogBombMoneyDonation
// Size: 0xc8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombMoneyDonation : FLogBase {
	struct FWuLogBombPlayerCoinInfo Giver; // 0x60(0x30)
	struct FWuLogBombPlayerCoinInfo Taker; // 0x90(0x30)
	int32 Amount; // 0xc0(0x04)
	int32 CurrentRound; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerCoinInfo
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBombPlayerCoinInfo : FGdlStructBase {
	struct FString CharacterName; // 0x08(0x10)
	struct FString AccountId; // 0x18(0x10)
	int32 PresentCurrency; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLogBombItemBuy
// Size: 0x190 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombItemBuy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 PresentCurrency; // 0x128(0x04)
	int32 Cost; // 0x12c(0x04)
	int32 CurrentRound; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FWuLogItem Item; // 0x138(0x58)
};

// ScriptStruct TslGame.WuLogBombMatchResult
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombMatchResult : FLogBase {
	struct FWuLogBombMatchResultTeamInfo VictoryTeam; // 0x60(0x20)
	struct FWuLogBombMatchResultTeamInfo DefeatTeam; // 0x80(0x20)
	struct FString FinishCause; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogBombMatchResultTeamInfo
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBombMatchResultTeamInfo : FGdlStructBase {
	int32 TeamId; // 0x08(0x04)
	int32 TotalKills; // 0x0c(0x04)
	int32 TotalAssists; // 0x10(0x04)
	int32 TotalPlantCount; // 0x14(0x04)
	int32 TotalDefuseCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogBombPlayerIncome
// Size: 0x150 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBombPlayerIncome : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 Amount; // 0x128(0x04)
	int32 CurrentRound; // 0x12c(0x04)
	struct FWuBombRoundSummary RoundSummary; // 0x130(0x20)
};

// ScriptStruct TslGame.WuBombRoundSummary
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuBombRoundSummary : FGdlStructBase {
	int32 KillCount; // 0x08(0x04)
	int32 AssistCount; // 0x0c(0x04)
	bool PlantOrDefuse; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 DefeatStreak; // 0x14(0x04)
	bool DeciveRound; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.WuLogBombRoundFinished
// Size: 0xc8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBombRoundFinished : FLogBase {
	struct FWuLogBombRoundFinishTeamInfo VictoryTeam; // 0x60(0x28)
	struct FWuLogBombRoundFinishTeamInfo DefeatTeam; // 0x88(0x28)
	struct FString FinishCause; // 0xb0(0x10)
	int32 CurrentRound; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogBombRoundFinishTeamInfo
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBombRoundFinishTeamInfo : FGdlStructBase {
	int32 TeamId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TeamType; // 0x10(0x10)
	int32 AlivePlayerCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogTireReplaced
// Size: 0x1f0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogTireReplaced : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle ParentVehicle; // 0x128(0x68)
	struct FWuLogItem Item; // 0x190(0x58)
	float Durability; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// ScriptStruct TslGame.WuLogVehicle
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogVehicle : FGdlStructBase {
	struct FString VehicleType; // 0x08(0x10)
	struct FString SpawnId; // 0x18(0x10)
	struct FString VehicleId; // 0x28(0x10)
	int32 VehicleUniqueId; // 0x38(0x04)
	int32 SeatIndex; // 0x3c(0x04)
	float HealthPercent; // 0x40(0x04)
	float FeulPercent; // 0x44(0x04)
	float RotationPitch; // 0x48(0x04)
	float AltitudeAbs; // 0x4c(0x04)
	float AltitudeRel; // 0x50(0x04)
	float Velocity; // 0x54(0x04)
	bool IsWheelsInAir; // 0x58(0x01)
	bool IsInWaterVolume; // 0x59(0x01)
	bool IsEngineOn; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	struct FVector Location; // 0x5c(0x0c)
};

// ScriptStruct TslGame.WuLogTirePulledOut
// Size: 0x1f0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogTirePulledOut : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle ParentVehicle; // 0x128(0x68)
	struct FWuLogItem Item; // 0x190(0x58)
	float Durability; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// ScriptStruct TslGame.WuLogSoftRoleRepairkitUse
// Size: 0x318 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSoftRoleRepairkitUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	struct FWuLogItem RepairedItem; // 0x180(0x58)
	struct FWuLogVehicle RepairedVehicle; // 0x1d8(0x68)
	struct FWuLogCharacter TargetCharacter; // 0x240(0xc8)
	float PreviousRepairedStatus; // 0x308(0x04)
	float RepairedStatus; // 0x30c(0x04)
	int32 Remainedcount; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
};

// ScriptStruct TslGame.WuLogRevivalAircraft
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogRevivalAircraft : FLogBase {
	int32 Phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> ReviveAccounts; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogSuccessRegisterBluechip
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSuccessRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogTryRegisterBluechip
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTryRegisterBluechip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString RegisteredByAccountId; // 0x70(0x10)
	struct FString RegisteringMethod; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogBluechipLooted
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBluechipLooted : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString LootingUserAccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogBluechipRemove
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBluechipRemove : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogBluechipCreate
// Size: 0x78 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBluechipCreate : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 Phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRejectReconnect
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerRejectReconnect : FLogBase {
	struct FString AccountId; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerDisconnected
// Size: 0x158 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerDisconnected : FLogBase {
	struct FWuGameResultPerPlayer GameResult; // 0x60(0xe0)
	struct FString Reason; // 0x140(0x10)
	bool IsRewardConfirmed; // 0x150(0x01)
	bool IsPenaltyWaived; // 0x151(0x01)
	bool ExitToDesktop; // 0x152(0x01)
	bool WasKicked; // 0x153(0x01)
	bool ExitProcessIntentionally; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// Size: 0xe0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuGameResultPerPlayer : FGdlStructBase {
	struct FString PlayerNetId; // 0x08(0x10)
	int32 Rank; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString GameResult; // 0x20(0x10)
	int32 TeamId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FWuGameResultStatsPerPlayer Stats; // 0x38(0x88)
	bool IsBpGrinder; // 0xc0(0x01)
	bool IsXpGrinder; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FString AccountId; // 0xc8(0x10)
	bool IsRewardAbuse; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// Size: 0x88 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameResultStatsPerPlayer : FGdlStructBase {
	int32 KillCount; // 0x08(0x04)
	float Score; // 0x0c(0x04)
	float Xp; // 0x10(0x04)
	float DistanceOnFoot; // 0x14(0x04)
	float DistanceOnSwim; // 0x18(0x04)
	float DistanceOnVehicle; // 0x1c(0x04)
	float DistanceOnParachute; // 0x20(0x04)
	float DistanceOnFreefall; // 0x24(0x04)
	struct FWuLogPlayTimeRecord PlayTime; // 0x28(0x10)
	struct FWuBpRewardDetail BpRewardDetail; // 0x38(0x20)
	struct FWuArcadeRewardDetail ArcadeRewardDetail; // 0x58(0x10)
	struct TArray<struct FWuStatTrakData> StatTrakDataPairs; // 0x68(0x10)
	struct TArray<struct FWuStatTrakData> HeadshotStatTrakDataPairs; // 0x78(0x10)
};

// ScriptStruct TslGame.WuStatTrakData
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuStatTrakData : FGdlStructBase {
	struct FString GameItemId; // 0x08(0x10)
	int32 Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuArcadeRewardDetail
// Size: 0x10 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuArcadeRewardDetail : FGdlStructBase {
	int32 ByPlayTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuBpRewardDetail
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuBpRewardDetail : FGdlStructBase {
	float ByPlayTime; // 0x08(0x04)
	float ByRanking; // 0x0c(0x04)
	float ByKills; // 0x10(0x04)
	float ByDamageDealt; // 0x14(0x04)
	float BoostAmount; // 0x18(0x04)
	float ByModeScore; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogPlayTimeRecord
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogPlayTimeRecord : FGdlStructBase {
	int32 SurvivalTime; // 0x08(0x04)
	int32 TeamSpectatingTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerConnected
// Size: 0x88 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerConnected : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	bool IsReconnect; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Reason; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogCrowbarInteraction
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCrowbarInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString TargetName; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogUsePresetSlotIngame
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogUsePresetSlotIngame : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 SlotIndex; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatching
// Size: 0xe0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLog1vs1ArenaMatching : FLogBase {
	struct FString SearchStartTime; // 0x60(0x10)
	struct FWuLog1vs1ArenaTimeRecord MatchingTimeRecord; // 0x70(0x28)
	struct TArray<struct FString> SavedItems; // 0x98(0x10)
	struct TArray<int32> Results; // 0xa8(0x10)
	int32 RoundCount; // 0xb8(0x04)
	int32 WinningStreak; // 0xbc(0x04)
	struct FString AccountId; // 0xc0(0x10)
	struct FString NetId; // 0xd0(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaTimeRecord
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLog1vs1ArenaTimeRecord : FGdlStructBase {
	struct FString StartTime; // 0x08(0x10)
	struct FString EndTime; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaMatchingSearch
// Size: 0xa8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLog1vs1ArenaMatchingSearch : FLogBase {
	struct FWuLog1vs1ArenaTimeRecord TimeRecord; // 0x60(0x28)
	struct FString AccountId; // 0x88(0x10)
	struct FString NetId; // 0x98(0x10)
};

// ScriptStruct TslGame.WuLog1vs1ArenaOberserver
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLog1vs1ArenaOberserver : FLogBase {
	struct TArray<struct FWuLog1vs1ArenaTimeRecord> TimeRecords; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString NetId; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleport
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMinimapTeleport : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuLogMinimapTeleportData> TeleportDatas; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogMinimapTeleportData
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogMinimapTeleportData : FGdlStructBase {
	int32 TeleportType; // 0x08(0x04)
	int32 PracticeType; // 0x0c(0x04)
	struct FString DestinationActorName; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLogAbilitySummer
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogAbilitySummer : FLogBase {
	struct FWuLogCharacter Owner; // 0x60(0xc8)
	struct TArray<struct FWuLogAbilityData> AbilityDataArr; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogAbilityData
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogAbilityData : FGdlStructBase {
	struct FString AbilityID; // 0x08(0x10)
	int32 TotalActivate; // 0x18(0x04)
	int32 TotalSuccess; // 0x1c(0x04)
	int32 TotalCancel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogAbilityActivate
// Size: 0x160 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogAbilityActivate : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Owner; // 0x68(0xc8)
	struct FWuLogAbility Ability; // 0x130(0x28)
	int32 Index; // 0x158(0x04)
	bool IsSuccess; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
};

// ScriptStruct TslGame.WuLogAbility
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogAbility : FGdlStructBase {
	struct FString AbilityID; // 0x08(0x10)
	struct TArray<struct FString> Attributes; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLogLivingthingAlertTime
// Size: 0x78 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogLivingthingAlertTime : FLogBase {
	struct FString LivingthingName; // 0x60(0x10)
	int32 TotalAlertTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromChickenBox
// Size: 0x188 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogItemPickupFromChickenBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 ChickenBoxId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogSandboxItemUsageCount
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSandboxItemUsageCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct TArray<struct FWuLogSandboxItemDataUsage> ItemsPerCategory; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSandboxItemDataUsage
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogSandboxItemDataUsage : FGdlStructBase {
	struct FString ItemCategory; // 0x08(0x10)
	struct TArray<struct FWuStringIntPair> Items; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLogRadioWheel
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogRadioWheel : FLogBase {
	struct FString RadioWheelOperation; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogWorldMapButton
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogWorldMapButton : FLogBase {
	struct FString ButtonType; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogDeleteMarker
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogDeleteMarker : FLogBase {
	struct FString Method; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogCloseMessageRadial
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCloseMessageRadial : FLogBase {
	struct FString RadialType; // 0x60(0x10)
	struct FString Reason; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogOpenMessageRadial
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogOpenMessageRadial : FLogBase {
	struct FString RadialType; // 0x60(0x10)
	struct FString InputMethod; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogRadioMessage
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogRadioMessage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString MessageCategory; // 0x128(0x10)
	int32 MessageID; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogAtoZTutorialAllMissionClear
// Size: 0x128 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogAtoZTutorialAllMissionClear : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZone
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemTypeOverrideZone : FLogBase {
	int32 ItemTypeOverrideZone; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FWuLogItemTypeOverrideZoneData> ItemTypeOverrideZoneDatas; // 0x68(0x10)
};

// ScriptStruct TslGame.WuLogItemTypeOverrideZoneData
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogItemTypeOverrideZoneData : FGdlStructBase {
	struct FString OverrideType; // 0x08(0x10)
	struct FVector ItemTypeOverrideZonePosition; // 0x18(0x0c)
	float ItemTypeOverrideZoneRadius; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeploy
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerRedeploy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 Phase; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerRedeployBRStart
// Size: 0x78 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerRedeployBRStart : FLogBase {
	struct TArray<struct FWuLogCharacter> Characters; // 0x60(0x10)
	int32 Phase; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogUsedBlueBlockerAndReturnedToSafeZone
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogUsedBlueBlockerAndReturnedToSafeZone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 NumTimesUsedBlueBlockerAndReturnedToSafeZone; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogBlueBlockerAbsorbBlueZoneDamage
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBlueBlockerAbsorbBlueZoneDamage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem DamageBlockedItem; // 0x128(0x58)
	float DamageAbsorbed; // 0x180(0x04)
	int32 NumTimesBlueZoneAbsorbed; // 0x184(0x04)
	struct FString DamageTypeCategory; // 0x188(0x10)
};

// ScriptStruct TslGame.WuLogVoiceChatUseage
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVoiceChatUseage : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct TArray<struct FWuStringFloatPair> Option; // 0x70(0x10)
	float PushTime; // 0x80(0x04)
	float TimeSpent; // 0x84(0x04)
	float TimeSpeaking; // 0x88(0x04)
	int32 PlatformProvider; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuEventDamage
// Size: 0x70 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventDamage : FGameEventBase {
	bool IsDetailStatus; // 0x18(0x01)
	bool IsVictimMe; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float Damage; // 0x1c(0x04)
	struct FString DamageTypeCategory; // 0x20(0x10)
	struct FString AttackerName; // 0x30(0x10)
	struct FVector AttackerLocation; // 0x40(0x0c)
	int32 AttackerTeamId; // 0x4c(0x04)
	struct FString VictimName; // 0x50(0x10)
	struct FVector VictimLocation; // 0x60(0x0c)
	int32 VictimTeamId; // 0x6c(0x04)
};

// ScriptStruct TslGame.WuEventKill
// Size: 0x90 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct FWuEventKill : FGameEventBase {
	bool IsDetailStatus; // 0x18(0x01)
	bool IsKillerMe; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString KillerName; // 0x20(0x10)
	struct FVector KillerLocation; // 0x30(0x0c)
	int32 KillerTeamId; // 0x3c(0x04)
	bool IsVictimMe; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString VictimName; // 0x48(0x10)
	struct FVector VictimLocation; // 0x58(0x0c)
	int32 VictimTeamId; // 0x64(0x04)
	struct FString DamageCauser; // 0x68(0x10)
	struct FString DamageReason; // 0x78(0x10)
	bool IsGroggy; // 0x88(0x01)
	bool IsStealKilled; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
};

// ScriptStruct TslGame.WuEventMatchResult
// Size: 0x40 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventMatchResult : FGameEventBase {
	struct FString MatchId; // 0x18(0x10)
	int32 StartPlayerCount; // 0x28(0x04)
	int32 StartTeamCount; // 0x2c(0x04)
	struct TArray<struct FWuEventDataTeamResult> Teams; // 0x30(0x10)
};

// ScriptStruct TslGame.WuEventDataTeamResult
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuEventDataTeamResult : FGdlStructBase {
	int32 TeamId; // 0x08(0x04)
	int32 Ranking; // 0x0c(0x04)
	struct TArray<struct FWuEventDataPlayerResult> Members; // 0x10(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerResult
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuEventDataPlayerResult : FGdlStructBase {
	struct FString PlayerName; // 0x08(0x10)
	int32 KillCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuEventPlayerMatchResult
// Size: 0x50 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventPlayerMatchResult : FGameEventBase {
	struct FString MatchId; // 0x18(0x10)
	int32 StartPlayerCount; // 0x28(0x04)
	int32 StartTeamCount; // 0x2c(0x04)
	struct FString PlayerName; // 0x30(0x10)
	int32 Ranking; // 0x40(0x04)
	int32 KillCount; // 0x44(0x04)
	int32 HeadShotCount; // 0x48(0x04)
	float GivenDamages; // 0x4c(0x04)
};

// ScriptStruct TslGame.WuEventMatchStatus
// Size: 0xd0 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventMatchStatus : FGameEventBase {
	bool IsDetailStatus; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString MatchId; // 0x20(0x10)
	struct FString TeamMode; // 0x30(0x10)
	struct FString CameraMode; // 0x40(0x10)
	struct FString MatchState; // 0x50(0x10)
	int32 ElapsedTime; // 0x60(0x04)
	int32 BlueZonePhase; // 0x64(0x04)
	bool IsBlueZoneMoving; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float BluezoneRadius; // 0x6c(0x04)
	struct FVector BlueZoneLocation; // 0x70(0x0c)
	float WhiteZoneRadius; // 0x7c(0x04)
	struct FVector WhiteZoneLocation; // 0x80(0x0c)
	float RedZoneRadius; // 0x8c(0x04)
	struct FVector RedZoneLocation; // 0x90(0x0c)
	float BlackZoneRadius; // 0x9c(0x04)
	struct FVector BlackZoneLocation; // 0xa0(0x0c)
	int32 StartPlayerCount; // 0xac(0x04)
	int32 AlivePlayerCount; // 0xb0(0x04)
	int32 StartTeamCount; // 0xb4(0x04)
	int32 AliveTeamCount; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FWuEventDataPlayerInfo> PlayerInfos; // 0xc0(0x10)
};

// ScriptStruct TslGame.WuEventDataPlayerInfo
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FWuEventDataPlayerInfo : FGdlStructBase {
	struct FString PlayerName; // 0x08(0x10)
	int32 TeamId; // 0x18(0x04)
	struct FVector Location; // 0x1c(0x0c)
	float Health; // 0x28(0x04)
	float BoostGauge; // 0x2c(0x04)
	struct FString State; // 0x30(0x10)
	struct FString ArmedWeapon; // 0x40(0x10)
	int32 ArmedAmmoCount; // 0x50(0x04)
	int32 InventoryAmmoCount; // 0x54(0x04)
};

// ScriptStruct TslGame.WuEventPlayerStatus
// Size: 0xb0 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventPlayerStatus : FGameEventBase {
	struct FString MatchId; // 0x18(0x10)
	struct FString MyPlayerName; // 0x28(0x10)
	bool IsSpetating; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector SpectatingCameraLocation; // 0x3c(0x0c)
	struct FWuEventDataPlayerInfo CurrentPlayerInfo; // 0x48(0x58)
	struct TArray<struct FWuEventDataPlayerInfo> TeamMatesInfo; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuEventMatchLeave
// Size: 0x28 (Inherited: 0x18)  [layout: KHOP]
struct FWuEventMatchLeave : FGameEventBase {
	struct FString MatchId; // 0x18(0x10)
};

// ScriptStruct TslGame.WuEventMatchJoin
// Size: 0x50 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct FWuEventMatchJoin : FGameEventBase {
	struct FString MatchId; // 0x18(0x10)
	struct FString TeamMode; // 0x28(0x10)
	struct FString CameraMode; // 0x38(0x10)
	bool IsDetailObserver; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.WuLogRumbleTeamExtermination
// Size: 0xc8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogRumbleTeamExtermination : FLogBase {
	struct TArray<struct FString> AccountIds; // 0x60(0x10)
	struct FString MatchId; // 0x70(0x10)
	struct FString MatchStartTime; // 0x80(0x10)
	int32 TeamRank; // 0x90(0x04)
	int32 TeamKillCounts; // 0x94(0x04)
	int32 TeamSurvivalTimeInSec; // 0x98(0x04)
	float TeamSurvivalRumblePoint; // 0x9c(0x04)
	float TeamSurvivalTimeRumblePoint; // 0xa0(0x04)
	float TeamRankRumblePoint; // 0xa4(0x04)
	float TeamKillRumblePoint; // 0xa8(0x04)
	float TeamTotalRumblePoint; // 0xac(0x04)
	bool IsWWCD; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FWuRumbleMatchResult> RumbleMatchResultByAccountId; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuRumbleMatchResult
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuRumbleMatchResult : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	struct FString MatchId; // 0x18(0x10)
	int32 KillCounts; // 0x28(0x04)
	int32 SurvivalTimeInSec; // 0x2c(0x04)
	float KillPoint; // 0x30(0x04)
	float SurvivalTimePoint; // 0x34(0x04)
};

// ScriptStruct TslGame.WuLogSpawnBlueChipCarePackage
// Size: 0xa0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSpawnBlueChipCarePackage : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector TowerLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Date; // 0x80(0x10)
	struct FVector CarePackageLocation; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.WuLogSuccessRetrieveBlueChip
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSuccessRetrieveBlueChip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Date; // 0x80(0x10)
	struct TArray<struct FString> RetrievedBlueChipAccountId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogTryRetrieveBlueChip
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTryRetrieveBlueChip : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Date; // 0x80(0x10)
	struct TArray<struct FString> RetrievableBlueChipAccountId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogSuccessBlueChipCarePackageCall
// Size: 0xa8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSuccessBlueChipCarePackageCall : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Date; // 0x80(0x10)
	int32 BlueZonePhase; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FString> BlueChipPackageCalledBlueChipAccountId; // 0x98(0x10)
};

// ScriptStruct TslGame.WuLogTryBlueChipCarePackageCall
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTryBlueChipCarePackageCall : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString Date; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogPropUseSkill
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPropUseSkill : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString SkillName; // 0x128(0x10)
	struct FString AdditionalInfo; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogPropHuntRoundResult
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPropHuntRoundResult : FLogBase {
	int32 RoundNumber; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString WinningTeam; // 0x68(0x10)
	int32 HunterNumbers; // 0x78(0x04)
	int32 PropNumbers; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogPropHuntPhaseInfo
// Size: 0x88 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPropHuntPhaseInfo : FLogBase {
	int32 RoundNumber; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString Phase; // 0x68(0x10)
	struct FString EndReason; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogPropHuntStartRound
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPropHuntStartRound : FLogBase {
	int32 RoundNumber; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString MapName; // 0x68(0x10)
	struct FString AreaName; // 0x78(0x10)
	int32 HunterNumbers; // 0x88(0x04)
	int32 PropNumbers; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogRacingTrack
// Size: 0x90 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogRacingTrack : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString VehicleId; // 0x70(0x10)
	float Record; // 0x80(0x04)
	int32 MatchElapsedTime; // 0x84(0x04)
	bool IsSuccess; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct TslGame.WuLogMedalUnderFire
// Size: 0x1f0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMedalUnderFire : FLogBase {
	struct FWuLogCharacter Killer; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
};

// ScriptStruct TslGame.WuLogMedalEdgeOfSafety
// Size: 0x1f0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMedalEdgeOfSafety : FLogBase {
	struct FWuLogCharacter Killer; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
};

// ScriptStruct TslGame.WuLogPlayerTaserKill
// Size: 0x1f0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerTaserKill : FLogBase {
	struct FWuLogCharacter Killer; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
};

// ScriptStruct TslGame.WuLogPlayerAirborneKill
// Size: 0x1f8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerAirborneKill : FLogBase {
	struct FWuLogCharacter Killer; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
	float RelativeAltitude; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// ScriptStruct TslGame.WuLogLivingThingKilled
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogLivingThingKilled : FLogBase {
	struct FString KilledReason; // 0x60(0x10)
	struct FVector KilledLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogVisitedLocation
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVisitedLocation : FLogBase {
	struct FString VisitedLocationName; // 0x60(0x10)
	struct FWuLogCharacter Character; // 0x70(0xc8)
};

// ScriptStruct TslGame.WuLogSpecialZoneAffectActor
// Size: 0xd0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSpecialZoneAffectActor : FLogBase {
	struct FWuLogSpecialZone ZoneInfo; // 0x60(0x40)
	struct FString ActorClass; // 0xa0(0x10)
	struct FString ActorName; // 0xb0(0x10)
	struct FString AffectedType; // 0xc0(0x10)
};

// ScriptStruct TslGame.WuLogSpecialZone
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogSpecialZone : FGdlStructBase {
	struct FString ZoneType; // 0x08(0x10)
	struct FVector Position; // 0x18(0x0c)
	float HorizontalRadius; // 0x24(0x04)
	float VerticalRadius; // 0x28(0x04)
	int32 UniqueId; // 0x2c(0x04)
	struct FString ZoneState; // 0x30(0x10)
};

// ScriptStruct TslGame.WuLogSpecialZoneInCharacters
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSpecialZoneInCharacters : FLogBase {
	struct FWuLogSpecialZone ZoneInfo; // 0x60(0x40)
	struct TArray<struct FWuLogCharacter> CharactersInZone; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogIndoorRangeScore
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogIndoorRangeScore : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	struct TArray<struct FWuIntIntPair> Score; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogChangeTargetDistance
// Size: 0x88 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogChangeTargetDistance : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	int32 Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogEnterIndoorRange
// Size: 0x88 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogEnterIndoorRange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString NetId; // 0x70(0x10)
	bool bIsExit; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.WuLogSpray
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSpray : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString SprayName; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogHelmetHide
// Size: 0x68 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogHelmetHide : FLogBase {
	bool IsHat; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.WuLogLobbyMusic
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogLobbyMusic : FLogBase {
	struct FString MusicEventName; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogTdmRespawn
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogTdmRespawn : FLogBase {
	struct FString RespawnPointName; // 0x60(0x10)
	float NearestAllyDist; // 0x70(0x04)
	float NearestEnemyDist; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogInPacketStat
// Size: 0xa8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogInPacketStat : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutOfOrder; // 0xa4(0x04)
};

// ScriptStruct TslGame.WuLogOutPacketLoss
// Size: 0xd0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogOutPacketLoss : FLogBase {
	struct FString LeagueType; // 0x60(0x10)
	struct FString ModeName; // 0x70(0x10)
	struct FString Name; // 0x80(0x10)
	struct FString AccountId; // 0x90(0x10)
	float ElapsedTimeSec; // 0xa0(0x04)
	int32 NumOutBunch; // 0xa4(0x04)
	int32 NumOutPacket; // 0xa8(0x04)
	int32 NumOutPacketNaked; // 0xac(0x04)
	struct TArray<struct FWuLostPacketData> NakedPacketDataList; // 0xb0(0x10)
	struct TArray<struct FWuLostBunchData> NakedBunchDataList; // 0xc0(0x10)
};

// ScriptStruct TslGame.WuLostBunchData
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuLostBunchData : FGdlStructBase {
	int32 NumSent; // 0x08(0x04)
	int32 NumLoss; // 0x0c(0x04)
	struct FString Content; // 0x10(0x10)
};

// ScriptStruct TslGame.WuLostPacketData
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLostPacketData : FGdlStructBase {
	int32 NumLoss; // 0x08(0x04)
	int32 SizeBitsPlain; // 0x0c(0x04)
	int32 SizeBitsEncryped; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.WuLogParachuteFollowReleaseByHoldKey
// Size: 0x128 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogParachuteFollowReleaseByHoldKey : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0xc8)
};

// ScriptStruct TslGame.WuLogParachuteFollow
// Size: 0x150 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogParachuteFollow : FLogBase {
	struct FWuLogCharacter UserInfo; // 0x60(0xc8)
	bool IsFollower; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 FollowerNum; // 0x12c(0x04)
	struct FString TargetName; // 0x130(0x10)
	struct FString ModeName; // 0x140(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMovementBaseChanged
// Size: 0x150 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerMovementBaseChanged : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString NewMovementBase; // 0x128(0x10)
	struct FString OldMovementBase; // 0x138(0x10)
	float MovedDistance; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerScore
// Size: 0x170 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerScore : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 KillScore; // 0x128(0x04)
	int32 KillCount; // 0x12c(0x04)
	int32 DeathScore; // 0x130(0x04)
	int32 DeathCount; // 0x134(0x04)
	int32 AssistScore; // 0x138(0x04)
	int32 AssistCount; // 0x13c(0x04)
	int32 ChainKillScore; // 0x140(0x04)
	int32 ChainKillCount; // 0x144(0x04)
	int32 WinRoundScore; // 0x148(0x04)
	int32 WinRoundCount; // 0x14c(0x04)
	int32 DefeatRoundScore; // 0x150(0x04)
	int32 DefeatRoundCount; // 0x154(0x04)
	int32 WinMatchScore; // 0x158(0x04)
	int32 WinMatchCount; // 0x15c(0x04)
	int32 DefeatMatchScore; // 0x160(0x04)
	int32 DefeatMatchCount; // 0x164(0x04)
	int32 TotalScore; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct TslGame.WuDevLog
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuDevLog : FLogBase {
	struct FString DevLogKey; // 0x60(0x10)
	struct TArray<struct FWuDevLogElement> DevLogs; // 0x70(0x10)
};

// ScriptStruct TslGame.WuDevLogElement
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuDevLogElement : FGdlStructBase {
	struct FString Key; // 0x08(0x10)
	struct FString Value; // 0x18(0x10)
};

// ScriptStruct TslGame.WuLogPlayerHealed
// Size: 0x218 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerHealed : FLogBase {
	struct FWuLogCharacter Healer; // 0x60(0xc8)
	struct FWuLogCharacter Target; // 0x128(0xc8)
	int32 HealId; // 0x1f0(0x04)
	float Healamount; // 0x1f4(0x04)
	struct FString HealCauserName; // 0x1f8(0x10)
	struct FString HealTypeCategory; // 0x208(0x10)
};

// ScriptStruct TslGame.WuLogPlayerBuffed
// Size: 0x218 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerBuffed : FLogBase {
	struct FWuLogCharacter Buffer; // 0x60(0xc8)
	struct FWuLogCharacter Target; // 0x128(0xc8)
	int32 BuffId; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FString BuffCauserName; // 0x1f8(0x10)
	struct FString BuffType; // 0x208(0x10)
};

// ScriptStruct TslGame.WuLogItemSkillSpawn
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemSkillSpawn : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogCraftResult
// Size: 0x1b8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCraftResult : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	bool SUCCESS; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FString FailedReason; // 0x130(0x10)
	struct FString CraftItem; // 0x140(0x10)
	struct FWuLogItem ItemResult; // 0x150(0x58)
	struct TArray<struct FWuLogItem> Materials; // 0x1a8(0x10)
};

// ScriptStruct TslGame.WuLogConnectionTimeOutError
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogConnectionTimeOutError : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	float DriverTime; // 0x70(0x04)
	float Threshold; // 0x74(0x04)
	struct FString RemoteAddress; // 0x78(0x10)
	bool IsServer; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString UniqueId; // 0x90(0x10)
};

// ScriptStruct TslGame.WuLogServerInfo
// Size: 0xf0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogServerInfo : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString InstanceId; // 0x70(0x10)
	struct FString PublicIp; // 0x80(0x10)
	struct FString InstanceType; // 0x90(0x10)
	struct FString GameServerVersion; // 0xa0(0x10)
	struct FString Weather; // 0xb0(0x10)
	struct FString MapName; // 0xc0(0x10)
	struct FString StartTimeStamp; // 0xd0(0x10)
	struct FString EndTimeStamp; // 0xe0(0x10)
};

// ScriptStruct TslGame.WuLogPing
// Size: 0xc8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPing : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	float MissRate; // 0x90(0x04)
	float ReliableDelay; // 0x94(0x04)
	float UnreliableDelay; // 0x98(0x04)
	float ReliableDelayRange; // 0x9c(0x04)
	float UnreliableDelayRange; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString Nickname; // 0xa8(0x10)
	struct FString AccountId; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuLogNickname
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogNickname : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString Nickname; // 0x80(0x10)
	struct FString Ip; // 0x90(0x10)
	struct FString ClientVersion; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuLogLocationCorrection
// Size: 0xf0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogLocationCorrection : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
	struct FString PlayerName; // 0x80(0x10)
	float LocDiff; // 0x90(0x04)
	float AllowedDiff; // 0x94(0x04)
	struct FVector Velocity; // 0x98(0x0c)
	float Speed; // 0xa4(0x04)
	struct FString MovementMode; // 0xa8(0x10)
	struct FString CustomMovementMode; // 0xb8(0x10)
	struct FString ClientMovementMode; // 0xc8(0x10)
	struct FString ClientCustomMovementMode; // 0xd8(0x10)
	float Ping; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogFps
// Size: 0xb8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogFps : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	struct FString ModeName; // 0x80(0x10)
	int32 ServerFps; // 0x90(0x04)
	int32 AlivePlayers; // 0x94(0x04)
	int32 JoinPlayers; // 0x98(0x04)
	float Duration; // 0x9c(0x04)
	float AvgInBytesPerSecond; // 0xa0(0x04)
	float AvgOutBytesPerSecond; // 0xa4(0x04)
	int32 MaxInBytesPerSecond; // 0xa8(0x04)
	int32 MaxOutBytesPerSecond; // 0xac(0x04)
	float UsedVirtualMemoryMiB; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.WuLogVehicleInteraction
// Size: 0x1b0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVehicleInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	struct FString EventType; // 0x190(0x10)
	struct TArray<struct FWuStringIntPair> EventInfo; // 0x1a0(0x10)
};

// ScriptStruct TslGame.WuLogObjectInteraction
// Size: 0x158 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogObjectInteraction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString ObjectType; // 0x128(0x10)
	struct FString ObjectTypeStatus; // 0x138(0x10)
	struct TArray<struct FWuStringIntPair> ObjectTypeAdditionalInfo; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogSafeZoneFlaregunCalled
// Size: 0x150 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSafeZoneFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	bool IsCalledSuccessfully; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 FiredPhase; // 0x12c(0x04)
	struct FVector FlareFiredPhaseSafeZonePosition; // 0x130(0x0c)
	float FlareFiredPhaseSafeZoneRadius; // 0x13c(0x04)
	struct FVector NewSafeZonePosition; // 0x140(0x0c)
	float NewSafeZoneRadius; // 0x14c(0x04)
};

// ScriptStruct TslGame.WuLogFlaregunCalled
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogFlaregunCalled : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	bool IsInWhiteZone; // 0x128(0x01)
	bool IsCalledSuccessfully; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
};

// ScriptStruct TslGame.WuLogPlayerDeath
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerDeath : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct TArray<struct FString> Weapons; // 0x128(0x10)
	struct TArray<struct FString> Equips; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogXboxUnautorizedDevice
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogXboxUnautorizedDevice : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	int32 KillCount; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogNetDriverError
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogNetDriverError : FLogBase {
	struct TArray<struct FWuDdosInfo> Infos; // 0x60(0x10)
};

// ScriptStruct TslGame.WuDdosInfo
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuDdosInfo : FGdlStructBase {
	struct FString ErrorType; // 0x08(0x10)
	struct FString Ip; // 0x18(0x10)
	int32 Port; // 0x28(0x04)
	int32 Count; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLogMissionListOpen
// Size: 0x128 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMissionListOpen : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
};

// ScriptStruct TslGame.WuLogWeaponFireCount
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogWeaponFireCount : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString WeaponID; // 0x128(0x10)
	int32 FireCount; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogRedZoneEnded
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogRedZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Drivers; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogParachuteLanding
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogParachuteLanding : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	float Distance; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogBlastHouse
// Size: 0x158 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBlastHouse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString DamageCauserName; // 0x128(0x10)
	struct FVector ExplosionLocation; // 0x138(0x0c)
	struct FVector HouseLocation; // 0x144(0x0c)
	bool bDestroyed; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// ScriptStruct TslGame.WuLogObjectDestroy
// Size: 0x158 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogObjectDestroy : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString ObjectType; // 0x128(0x10)
	struct FVector ObjectLocation; // 0x138(0x0c)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString DamageCauserName; // 0x148(0x10)
};

// ScriptStruct TslGame.WuLogObjectTakeDamage
// Size: 0x178 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogObjectTakeDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FString ObjectType; // 0x130(0x10)
	struct FVector ObjectLocation; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FString DamageCauserName; // 0x150(0x10)
	struct FString DamageTypeCategory; // 0x160(0x10)
	float Damage; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogEmote
// Size: 0x170 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogEmote : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString EmoteName; // 0x128(0x10)
	struct FString EmoteType; // 0x138(0x10)
	bool IsParticipatingToOtherTeamEmote; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FString EmotePlayContext; // 0x150(0x10)
	struct TArray<struct FWuStringStringPair> AdditionalParameters; // 0x160(0x10)
};

// ScriptStruct TslGame.WuLogVaultStart
// Size: 0x130 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogVaultStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	bool IsLedgeGrab; // 0x128(0x01)
	bool IsVaultOnVehicle; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
};

// ScriptStruct TslGame.WuLogSkinUpdate
// Size: 0x1b0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSkinUpdate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	struct FString SkinName; // 0x180(0x10)
	struct FString SkinCategory; // 0x190(0x10)
	struct TArray<struct FWuLogItem> PartItems; // 0x1a0(0x10)
};

// ScriptStruct TslGame.WuLogMovementSpam
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMovementSpam : FLogBase {
	struct FString AttackerId; // 0x60(0x10)
	struct FString VictimId; // 0x70(0x10)
	int32 AttackerLeftLeans; // 0x80(0x04)
	int32 AttackerRightLeans; // 0x84(0x04)
	int32 AttackerCrouches; // 0x88(0x04)
	int32 VictimLeftLeans; // 0x8c(0x04)
	int32 VictimRightLeans; // 0x90(0x04)
	int32 VictimCrouches; // 0x94(0x04)
};

// ScriptStruct TslGame.WuLogStatAccuracy
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogStatAccuracy : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	int32 NumShots; // 0x70(0x04)
	int32 NumHits; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogLoadingFinished
// Size: 0x1b0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogLoadingFinished : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString Timestamp; // 0x70(0x10)
	struct FString MatchId; // 0x80(0x10)
	struct FString ServerName; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString Date; // 0xb0(0x10)
	struct FString State; // 0xc0(0x10)
	int32 LoadingTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FWuLogCharacter Character; // 0xd8(0xc8)
	struct FString ActualHardwareName; // 0x1a0(0x10)
};

// ScriptStruct TslGame.WuLogFreeMemory
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogFreeMemory : FLogBase {
	struct FString DeviceName; // 0x60(0x10)
	struct FString PlayerNetId; // 0x70(0x10)
	struct FString AccountId; // 0x80(0x10)
	struct TArray<struct FWuMemoryStat> MemoryStats; // 0x90(0x10)
	struct FString ActualHardwareName; // 0xa0(0x10)
};

// ScriptStruct TslGame.WuMemoryStat
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuMemoryStat : FGdlStructBase {
	struct FString Name; // 0x08(0x10)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuLogMatchSetting
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMatchSetting : FLogBase {
	bool IsCustomGame; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString MapName; // 0x68(0x10)
	struct FString ModeName; // 0x78(0x10)
	struct FString MatchId; // 0x88(0x10)
	int32 TeamCount; // 0x98(0x04)
	int32 MinPlayerCount; // 0x9c(0x04)
	int32 MaxPlayerCount; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FWuStringStringPair> MatchSettings; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogBulletShotDistance
// Size: 0xf0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBulletShotDistance : FLogBase {
	struct FVector VictimLocation; // 0x60(0x0c)
	struct FVector HitLocation; // 0x6c(0x0c)
	float Distance; // 0x78(0x04)
	bool IsVictimInVehicle; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	float VictimSpeed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString VictimStanceMode; // 0x88(0x10)
	struct FString VictimMovementMode; // 0x98(0x10)
	struct FString AttackerAccountId; // 0xa8(0x10)
	float AttackerPing; // 0xb8(0x04)
	float AttackerRDelay; // 0xbc(0x04)
	float AttackerUDelay; // 0xc0(0x04)
	float AttackerUMissPercent; // 0xc4(0x04)
	struct FString VictimAccountId; // 0xc8(0x10)
	float VictimPing; // 0xd8(0x04)
	float VictimRDelay; // 0xdc(0x04)
	float VictimUDelay; // 0xe0(0x04)
	float VictimUMissPercent; // 0xe4(0x04)
	int32 AttackId; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct TslGame.WuLogSteamNoNetworkConnection
// Size: 0x88 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSteamNoNetworkConnection : FLogBase {
	int32 DisconnectionCountPerGame; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString SteamKickReason; // 0x68(0x10)
	struct FString AccountId; // 0x78(0x10)
};

// ScriptStruct TslGame.WuLogBodyPenetrationDamageInfo
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBodyPenetrationDamageInfo : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	float DamageDiff; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FString DamageZone; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogCheat
// Size: 0x170 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCheat : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString CheatType; // 0x128(0x10)
	struct FString Description; // 0x138(0x10)
	float ParamFloat1; // 0x148(0x04)
	float ParamFloat2; // 0x14c(0x04)
	struct FString ParamString1; // 0x150(0x10)
	struct FString ParamString2; // 0x160(0x10)
};

// ScriptStruct TslGame.WuLogPlayerWaterStateChange
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerWaterStateChange : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString WaterState; // 0x128(0x10)
	float PrevSegmentDistance; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerWaterAction
// Size: 0x160 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerWaterAction : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString WaterActionType; // 0x128(0x10)
	struct FString WaterState; // 0x138(0x10)
	struct FString WeaponItemId; // 0x148(0x10)
	int32 AttackId; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct TslGame.WuLogSwimEnd
// Size: 0x130 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSwimEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	float SwimDistance; // 0x128(0x04)
	float MaxSwimDepthOfWater; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogSwimStart
// Size: 0x128 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSwimStart : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
};

// ScriptStruct TslGame.WuLogCamoNetDestroy
// Size: 0x1d0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogCamoNetDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogCamoNet CamoNet; // 0x130(0x78)
	struct FString DamageTypeCategory; // 0x1a8(0x10)
	struct FString DamageCauserName; // 0x1b8(0x10)
	float Distance; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// ScriptStruct TslGame.WuLogCamoNet
// Size: 0x78 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogCamoNet : FGdlStructBase {
	struct FWuLogVehicle Vehicle; // 0x08(0x68)
	float HealthPercent; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogCamoNetDamage
// Size: 0x1d0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCamoNetDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogCamoNet CamoNet; // 0x130(0x78)
	struct FString DamageTypeCategory; // 0x1a8(0x10)
	struct FString DamageCauserName; // 0x1b8(0x10)
	float Damage; // 0x1c8(0x04)
	float Distance; // 0x1cc(0x04)
};

// ScriptStruct TslGame.WuLogWheelDestroy
// Size: 0x1c0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogWheelDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogVehicle Vehicle; // 0x130(0x68)
	int32 WheelIndex; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct FString DamageTypeCategory; // 0x1a0(0x10)
	struct FString DamageCauserName; // 0x1b0(0x10)
};

// ScriptStruct TslGame.WuLogVehicleRefuel
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogVehicleRefuel : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString VehicleId; // 0x128(0x10)
	float Fuel; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// Size: 0x1c0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogVehicleDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogVehicle Vehicle; // 0x130(0x68)
	struct FString DamageTypeCategory; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	float Distance; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WuLogVehicleDamage
// Size: 0x1c0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVehicleDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogVehicle Vehicle; // 0x130(0x68)
	struct FString DamageTypeCategory; // 0x198(0x10)
	struct FString DamageCauserName; // 0x1a8(0x10)
	float Damage; // 0x1b8(0x04)
	float Distance; // 0x1bc(0x04)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// Size: 0x1b0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVehicleLeave : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	float RideDistance; // 0x190(0x04)
	int32 SeatIndex; // 0x194(0x04)
	float MaxSpeed; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x1a0(0x10)
};

// ScriptStruct TslGame.WuLogVehicleRide
// Size: 0x1a8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVehicleRide : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	int32 SeatIndex; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct TArray<struct FWuLogCharacter> FellowPassengers; // 0x198(0x10)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogVehicleSpawn : FLogBase {
	struct FString VehicleId; // 0x60(0x10)
	struct FVector Location; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.WuLogVehicleAISpawn
// Size: 0xd8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogVehicleAISpawn : FLogBase {
	struct FString SpawnId; // 0x60(0x10)
	struct FWuLogVehicle Vehicle; // 0x70(0x68)
};

// ScriptStruct TslGame.WuLogUseRevivalTransmitter
// Size: 0x88 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogUseRevivalTransmitter : FLogBase {
	int32 Phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	struct FVector UsingPosition; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct TslGame.WuLogUseRevivalTower
// Size: 0x80 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogUseRevivalTower : FLogBase {
	int32 Phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString AccountId; // 0x68(0x10)
	bool bIsSuccess; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct TslGame.WuLogRevivalTowerSpawn
// Size: 0x70 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogRevivalTowerSpawn : FLogBase {
	struct FVector SpawnedPosition; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCarePackageLand : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x38)
};

// ScriptStruct TslGame.WuLogItemPackage
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogItemPackage : FGdlStructBase {
	struct FString ItemPackageId; // 0x08(0x10)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FWuLogItem> Items; // 0x28(0x10)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// Size: 0x98 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCarePackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x38)
};

// ScriptStruct TslGame.WuLogLootTruckPackageSpawn
// Size: 0x1c8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogLootTruckPackageSpawn : FLogBase {
	struct FWuLogItemPackage ItemPackage; // 0x60(0x38)
	struct FWuLogCharacter Character; // 0x98(0xc8)
	struct FWuLogVehicle Vehicle; // 0x160(0x68)
};

// ScriptStruct TslGame.WuLogLanguage
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogLanguage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString WindowsLanguage; // 0x128(0x10)
	struct FString GameLanguage; // 0x138(0x10)
};

// ScriptStruct TslGame.WuSystemInfo
// Size: 0x2b0 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuSystemInfo : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString OsLanguage; // 0x128(0x10)
	struct FString GameLanguage; // 0x138(0x10)
	struct FString OsVersion; // 0x148(0x10)
	struct FString CpuName; // 0x158(0x10)
	struct FString GpuName; // 0x168(0x10)
	struct FString GpuDriverVersion; // 0x178(0x10)
	int32 RamInGB; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FString BaseBoardSerial; // 0x190(0x10)
	struct TArray<struct FString> MemorySerials; // 0x1a0(0x10)
	int32 ArpIpCount; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FString OsUserAccount; // 0x1b8(0x10)
	struct TArray<struct FString> DiskModelNames; // 0x1c8(0x10)
	struct TArray<struct FString> DiskSerials; // 0x1d8(0x10)
	struct TArray<struct FString> MonitorModelNames; // 0x1e8(0x10)
	struct TArray<struct FString> MonitorSerials; // 0x1f8(0x10)
	struct TArray<struct FString> MemoryModelNames; // 0x208(0x10)
	struct FString BaseBoardModelName; // 0x218(0x10)
	struct TArray<struct FString> GatewayMacAddress; // 0x228(0x10)
	struct FWuGraphicSettings GraphicSettings; // 0x238(0x58)
	struct FString CpuClock; // 0x290(0x10)
	bool bSecureBootEnabled; // 0x2a0(0x01)
	bool bSecureBootCapable; // 0x2a1(0x01)
	bool bHvciKmciEnabled; // 0x2a2(0x01)
	bool bHvciAuditModeEnabled; // 0x2a3(0x01)
	bool bHvciStrictModeEnabled; // 0x2a4(0x01)
	bool bHvciIumEnabled; // 0x2a5(0x01)
	bool bDmaProtectionEnabled; // 0x2a6(0x01)
	char pad_2A7[0x1]; // 0x2a7(0x01)
	int32 TpmVersion; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
};

// ScriptStruct TslGame.WuGraphicSettings
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuGraphicSettings : FGdlStructBase {
	int32 ResolutionWidth; // 0x08(0x04)
	int32 ResolutionHeight; // 0x0c(0x04)
	bool VSync; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 DisplayMode; // 0x14(0x04)
	int32 FOV; // 0x18(0x04)
	int32 ScreenScale; // 0x1c(0x04)
	int32 AntiAliasing; // 0x20(0x04)
	int32 PostProcessing; // 0x24(0x04)
	int32 Shadows; // 0x28(0x04)
	int32 Textures; // 0x2c(0x04)
	int32 Effects; // 0x30(0x04)
	int32 Foliage; // 0x34(0x04)
	int32 ViewDistance; // 0x38(0x04)
	bool MotionBlur; // 0x3c(0x01)
	bool MinimapDynamicZoom; // 0x3d(0x01)
	bool FreelockInterpolation; // 0x3e(0x01)
	bool Replay; // 0x3f(0x01)
	bool DeathCam; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 GraphicsAPI; // 0x44(0x04)
	int32 UpscalingMethod; // 0x48(0x04)
	int32 UpscalingQuality; // 0x4c(0x04)
	int32 DLSSModel; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.WuLogHeal
// Size: 0x188 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogHeal : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	float Healamount; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogEmPickupLiftOff
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogEmPickupLiftOff : FLogBase {
	struct FWuLogCharacter Instigator; // 0x60(0xc8)
	struct TArray<struct FWuLogCharacter> Riders; // 0x128(0x10)
	int32 VehicleUniqueId; // 0x138(0x04)
	int32 BlueZonePhase; // 0x13c(0x04)
	float DistanceToBluezone; // 0x140(0x04)
	float DistanceToSafezone; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogMortarInstall
// Size: 0x138 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogMortarInstall : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FVector Location; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct TslGame.WuLogItemInstantUse
// Size: 0x188 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogItemInstantUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 ItemAmount; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// ScriptStruct TslGame.WuLogItemThrow
// Size: 0x250 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogItemThrow : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogCharacter Target; // 0x128(0xc8)
	struct FWuLogItem Item; // 0x1f0(0x58)
	float Distance; // 0x248(0x04)
	bool IsSuccess; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
};

// ScriptStruct TslGame.WuLogItemUse
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemUse : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogItemDetach
// Size: 0x1d8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemDetach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem ParentItem; // 0x128(0x58)
	struct FWuLogItem ChildItem; // 0x180(0x58)
};

// ScriptStruct TslGame.WuLogItemAttachedAll
// Size: 0x1d8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemAttachedAll : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem ParentItem; // 0x128(0x58)
	struct FWuLogItem ChildItem; // 0x180(0x58)
};

// ScriptStruct TslGame.WuLogItemAttach
// Size: 0x1d8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemAttach : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem ParentItem; // 0x128(0x58)
	struct FWuLogItem ChildItem; // 0x180(0x58)
};

// ScriptStruct TslGame.WuLogItemUnequip
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemUnequip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogItemEquip
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemEquip : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogItemDrop
// Size: 0x188 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogItemDrop : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	bool IsDropVolatility; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// ScriptStruct TslGame.WuLogItemPickupFromCustomPackage
// Size: 0x1a0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromCustomPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	struct FString SourceUniqueId; // 0x180(0x10)
	struct FString CustomPackageUniqueId; // 0x190(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromVehicleTrunk
// Size: 0x1f0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	struct FWuLogItem Item; // 0x190(0x58)
	float BeforeTrunkCapacity; // 0x1e8(0x04)
	float CurrentTrunkCapacity; // 0x1ec(0x04)
};

// ScriptStruct TslGame.WuLogItemPutToVehicleTrunk
// Size: 0x1f0 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPutToVehicleTrunk : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	struct FWuLogItem Item; // 0x190(0x58)
	float BeforeTrunkCapacity; // 0x1e8(0x04)
	float CurrentTrunkCapacity; // 0x1ec(0x04)
};

// ScriptStruct TslGame.WuLogItemPickupFromRandomBox
// Size: 0x190 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromRandomBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Weapon; // 0x128(0x58)
	struct FString RandomBoxName; // 0x180(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromLootBox
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromLootBox : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 OwnerTeamId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString CreatorAccountId; // 0x188(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromItemPackage
// Size: 0x190 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromItemPackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	struct FString PackageName; // 0x180(0x10)
};

// ScriptStruct TslGame.WuLogPickupItemBlueChipCarePackage
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPickupItemBlueChipCarePackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 BlueChipCarePackageUniqueId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString BlueChipCarePackageName; // 0x188(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromPackageFlare
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromPackageFlare : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 PackageFlareUniqueId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString PackageFlareName; // 0x188(0x10)
};

// ScriptStruct TslGame.WuLogItemPickupFromCarepackage
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickupFromCarepackage : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
	int32 CarePackageUniqueId; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FString CarePackageName; // 0x188(0x10)
};

// ScriptStruct TslGame.WuLogItemPickup
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemPickup : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem Item; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogItemSpawn
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogItemSpawn : FLogBase {
	struct FString ItemID; // 0x60(0x10)
	int32 SpawnCount; // 0x70(0x04)
	int32 StackCount; // 0x74(0x04)
};

// ScriptStruct TslGame.WuLogMatchLastDefeat
// Size: 0xc8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogMatchLastDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogMatchFirstDefeat
// Size: 0xc8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogMatchFirstDefeat : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString DamageTypeCategory; // 0x70(0x10)
	struct FString VictimAccountId; // 0x80(0x10)
	struct FString DamageCauserName; // 0x90(0x10)
	struct FVector AttackerLocation; // 0xa0(0x0c)
	struct FVector VictimLocation; // 0xac(0x0c)
	bool IsFatal; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DBNOId; // 0xbc(0x04)
	int32 VictimTeamId; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.WuLogExterminatedFromOutgame
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogExterminatedFromOutgame : FLogBase {
	struct TArray<struct FString> TeamAccounts; // 0x60(0x10)
	struct TArray<struct FString> KillerTeamAccounts; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerMatchFinished
// Size: 0x230 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerMatchFinished : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuGameResultPerPlayer GameResult; // 0x128(0xe0)
	struct FWuPlayerWeaponStats WeaponStats; // 0x208(0x28)
};

// ScriptStruct TslGame.WuPlayerWeaponStats
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuPlayerWeaponStats : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	struct TArray<struct FWuWeaponStatsRecord> Stats; // 0x18(0x10)
};

// ScriptStruct TslGame.WuWeaponStatsRecord
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuWeaponStatsRecord : FGdlStructBase {
	struct FString Weapon; // 0x08(0x10)
	int32 Damage; // 0x18(0x04)
	int32 DBNODamage; // 0x1c(0x04)
	int32 Shots; // 0x20(0x04)
	int32 Hits; // 0x24(0x04)
	int32 DBNOHits; // 0x28(0x04)
	int32 HoldingTime; // 0x2c(0x04)
	struct TArray<struct FWuWeaponHitDetails> HitDetails; // 0x30(0x10)
};

// ScriptStruct TslGame.WuWeaponHitDetails
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuWeaponHitDetails : FGdlStructBase {
	struct FString BodyPart; // 0x08(0x10)
	int32 Kills; // 0x18(0x04)
	int32 DBNOs; // 0x1c(0x04)
	int32 Hits; // 0x20(0x04)
	int32 DBNOHits; // 0x24(0x04)
	int32 Damage; // 0x28(0x04)
	int32 DBNODamage; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLogCKOCancel
// Size: 0xc8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCKOCancel : FLogBase {
	struct FString FinisherId; // 0x60(0x10)
	struct FString TargetId; // 0x70(0x10)
	struct FString CKOID; // 0x80(0x10)
	struct FString CancelReason; // 0x90(0x10)
	struct FString MapName; // 0xa0(0x10)
	int32 Phase; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString MatchId; // 0xb8(0x10)
};

// ScriptStruct TslGame.WuLogCKOComplete
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCKOComplete : FLogBase {
	struct FString FinisherId; // 0x60(0x10)
	struct FString TargetId; // 0x70(0x10)
	struct FString CKOID; // 0x80(0x10)
	struct FString MapName; // 0x90(0x10)
	int32 Phase; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString MatchId; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogCKOStart
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCKOStart : FLogBase {
	struct FString FinisherId; // 0x60(0x10)
	struct FString TargetId; // 0x70(0x10)
	struct FString CKOID; // 0x80(0x10)
	struct FString MapName; // 0x90(0x10)
	int32 Phase; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString MatchId; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogPlayerKillV2
// Size: 0x688 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerKillV2 : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 DBNOId; // 0x64(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x68(0xe0)
	struct FWuLogCharacter Victim; // 0x148(0xc8)
	struct FWuLogVehicle VictimVehicle; // 0x210(0x68)
	struct FString VictimWeapon; // 0x278(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x288(0x10)
	struct FWuLogCharacter DBNOMaker; // 0x298(0xc8)
	struct FWuLogKillDamageInfo DBNODamageInfo; // 0x360(0x50)
	struct FWuLogCharacter Finisher; // 0x3b0(0xc8)
	struct FWuLogKillDamageInfo FinishDamageInfo; // 0x478(0x50)
	struct FWuLogCharacter Killer; // 0x4c8(0xc8)
	struct FWuLogKillDamageInfo KillerDamageInfo; // 0x590(0x50)
	struct FWuLogVehicle KillerVehicle; // 0x5e0(0x68)
	struct TArray<struct FString> Assists_AccountId; // 0x648(0x10)
	struct TArray<struct FString> TeamKillers_AccountId; // 0x658(0x10)
	bool IsSuicide; // 0x668(0x01)
	bool IsKillSteal; // 0x669(0x01)
	char pad_66A[0x6]; // 0x66a(0x06)
	struct TArray<struct FString> ReloadedWeaponsOfKiller; // 0x670(0x10)
	bool IsVictimIsBlind; // 0x680(0x01)
	char pad_681[0x3]; // 0x681(0x03)
	int32 AmmoInClipOfKiller; // 0x684(0x04)
};

// ScriptStruct TslGame.WuLogKillDamageInfo
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogKillDamageInfo : FGdlStructBase {
	struct FString DamageReason; // 0x08(0x10)
	struct FString DamageTypeCategory; // 0x18(0x10)
	struct FString DamageCauserName; // 0x28(0x10)
	struct TArray<struct FString> AdditionalInfo; // 0x38(0x10)
	float Distance; // 0x48(0x04)
	bool IsThroughPenetrableWall; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct TslGame.WuLogPlayerKill
// Size: 0x418 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerKill : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Killer; // 0x68(0xc8)
	struct FWuLogCharacter Victim; // 0x130(0xc8)
	struct FWuLogCharacter Assistant; // 0x1f8(0xc8)
	int32 DBNOId; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FString DamageReason; // 0x2c8(0x10)
	struct FString DamageTypeCategory; // 0x2d8(0x10)
	struct FString DamageCauserName; // 0x2e8(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x2f8(0x10)
	struct FString VictimWeapon; // 0x308(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x318(0x10)
	float Distance; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FWuGameResultPerPlayer VictimGameResult; // 0x330(0xe0)
	bool IsThroughPenetrableWall; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// Size: 0x1f8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerRevive : FLogBase {
	struct FWuLogCharacter Reviver; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
	int32 DBNOId; // 0x1f0(0x04)
	bool UseTraumaBag; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
};

// ScriptStruct TslGame.WuLogArmorDestroy
// Size: 0x288 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogArmorDestroy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogCharacter Victim; // 0x130(0xc8)
	struct FString DamageTypeCategory; // 0x1f8(0x10)
	struct FString DamageReason; // 0x208(0x10)
	struct FString DamageCauserName; // 0x218(0x10)
	struct FWuLogItem Item; // 0x228(0x58)
	float Distance; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// Size: 0x268 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerMakeGroggy : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogCharacter Victim; // 0x130(0xc8)
	struct FString DamageReason; // 0x1f8(0x10)
	struct FString DamageTypeCategory; // 0x208(0x10)
	struct FString DamageCauserName; // 0x218(0x10)
	struct TArray<struct FString> DamageCauserAdditionalInfo; // 0x228(0x10)
	struct FString VictimWeapon; // 0x238(0x10)
	struct TArray<struct FString> VictimWeaponAdditionalInfo; // 0x248(0x10)
	float Distance; // 0x258(0x04)
	bool IsAttackerInVehicle; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	int32 DBNOId; // 0x260(0x04)
	bool IsThroughPenetrableWall; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// Size: 0x238 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerTakeDamage : FLogBase {
	int32 AttackId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FWuLogCharacter Victim; // 0x130(0xc8)
	struct FString DamageTypeCategory; // 0x1f8(0x10)
	struct FString DamageReason; // 0x208(0x10)
	float Damage; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FString DamageCauserName; // 0x220(0x10)
	bool IsThroughPenetrableWall; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// ScriptStruct TslGame.WuLogPlayerUseFlareGun
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerUseFlareGun : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FString AttackType; // 0x130(0x10)
	struct FWuLogItem Weapon; // 0x140(0x58)
};

// ScriptStruct TslGame.WuLogPlayerDestroyBreachableWall
// Size: 0x180 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerDestroyBreachableWall : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0xc8)
	struct FWuLogItem Weapon; // 0x128(0x58)
};

// ScriptStruct TslGame.WuLogPlayerDestroyProp
// Size: 0x148 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerDestroyProp : FLogBase {
	struct FWuLogCharacter Attacker; // 0x60(0xc8)
	struct FString ObjectType; // 0x128(0x10)
	struct FVector ObjectLocation; // 0x138(0x0c)
	char pad_144[0x4]; // 0x144(0x04)
};

// ScriptStruct TslGame.WuLogBlackZoneEnded
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogBlackZoneEnded : FLogBase {
	struct TArray<struct FWuLogCharacter> Survivors; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogPlayerSummonBlackZone
// Size: 0x128 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerSummonBlackZone : FLogBase {
	struct FWuLogCharacter Player; // 0x60(0xc8)
};

// ScriptStruct TslGame.WuLogPlayerUseProjDecoy
// Size: 0x138 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerUseProjDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0xc8)
	struct FVector Location; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseWeapDecoy
// Size: 0x138 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerUseWeapDecoy : FLogBase {
	struct FWuLogCharacter DecoyInstigator; // 0x60(0xc8)
	struct FVector Location; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct TslGame.WuLogUnarmedKick
// Size: 0x240 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogUnarmedKick : FLogBase {
	struct FWuLogCharacter Kicker; // 0x60(0xc8)
	struct FWuLogCharacter Victim; // 0x128(0xc8)
	struct FString EventType; // 0x1f0(0x10)
	struct FString KickType; // 0x200(0x10)
	struct FString TargetType; // 0x210(0x10)
	struct TArray<struct FString> Results; // 0x220(0x10)
	struct FString Detail; // 0x230(0x10)
};

// ScriptStruct TslGame.WuLogSmokeInteractionCount
// Size: 0x130 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSmokeInteractionCount : FLogBase {
	struct FWuLogCharacter Instigator; // 0x60(0xc8)
	int32 ExplosionInteractionCount; // 0x128(0x04)
	int32 VehicleInteractionCount; // 0x12c(0x04)
};

// ScriptStruct TslGame.WuLogPlayerUseThrowable
// Size: 0x198 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerUseThrowable : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FString AttackType; // 0x130(0x10)
	struct FWuLogItem Weapon; // 0x140(0x58)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// Size: 0x200 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerAttack : FLogBase {
	int32 AttackId; // 0x60(0x04)
	int32 FireWeaponStackCount; // 0x64(0x04)
	struct FWuLogCharacter Attacker; // 0x68(0xc8)
	struct FString AttackType; // 0x130(0x10)
	struct FWuLogItem Weapon; // 0x140(0x58)
	struct FWuLogVehicle Vehicle; // 0x198(0x68)
};

// ScriptStruct TslGame.WuLogClientHitch
// Size: 0x178 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogClientHitch : FLogBase {
	struct FString GameModeType; // 0x60(0x10)
	struct FString LeagueType; // 0x70(0x10)
	float ElapsedTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FWuLogCharacter CharacterLog; // 0x88(0xc8)
	struct FVector CharacterVelocity; // 0x150(0x0c)
	bool IsInAircraft; // 0x15c(0x01)
	bool IsFallingWithParachute; // 0x15d(0x01)
	bool IsParachuting; // 0x15e(0x01)
	bool IsInCar; // 0x15f(0x01)
	struct FString RecentShownWidget; // 0x160(0x10)
	int32 AvailableCpuPhysicalMemory; // 0x170(0x04)
	int32 AvailableCpuVirtualMemory; // 0x174(0x04)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// Size: 0x1b8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogPlayerPosition : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogVehicle Vehicle; // 0x128(0x68)
	float ElapsedTime; // 0x190(0x04)
	int32 NumAlivePlayers; // 0x194(0x04)
	float ClientFPS; // 0x198(0x04)
	int32 Under10FPS; // 0x19c(0x04)
	int32 Under20FPS; // 0x1a0(0x04)
	int32 Under30FPS; // 0x1a4(0x04)
	int32 Under60FPS; // 0x1a8(0x04)
	int32 MinFPS; // 0x1ac(0x04)
	int32 MaxFPS; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerKicked : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString Reason; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerLogout : FLogBase {
	struct FString NetId; // 0x60(0x10)
	struct FString AccountId; // 0x70(0x10)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerLogin : FLogBase {
	struct FString NetId; // 0x60(0x10)
	bool Result; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString ErrorMessage; // 0x78(0x10)
	struct FString AccountId; // 0x88(0x10)
	struct FString Ip; // 0x98(0x10)
	struct FString ClientVersion; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPlayerCreate : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct TArray<struct FString> Equips; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogServerFpsWatchDog
// Size: 0x190 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogServerFpsWatchDog : FLogBase {
	struct FString ProfileType; // 0x60(0x10)
	struct FString MatchId; // 0x70(0x10)
	struct FString MapName; // 0x80(0x10)
	struct FString LeagueType; // 0x90(0x10)
	struct FString ModeName; // 0xa0(0x10)
	struct FString CpuName; // 0xb0(0x10)
	int32 RamInGB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString InfraCode; // 0xc8(0x10)
	int32 FrameCount; // 0xd8(0x04)
	int32 SessionElapsedTime; // 0xdc(0x04)
	float MillisecondsPerCycle; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FWuLogServerFps GameThreadStats; // 0xe8(0xa8)
};

// ScriptStruct TslGame.WuLogServerFps
// Size: 0xa8 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogServerFps : FGdlStructBase {
	int64 FrameTime; // 0x08(0x08)
	int64 GameEngineTick; // 0x10(0x08)
	int64 WorldTickTime; // 0x18(0x08)
	int64 TickTime; // 0x20(0x08)
	int64 TG_PrePhysics; // 0x28(0x08)
	int64 TG_EndPhysics; // 0x30(0x08)
	int64 TG_StartPhysics; // 0x38(0x08)
	int64 TG_DuringPhysics; // 0x40(0x08)
	int64 TG_PostPhysics; // 0x48(0x08)
	int64 TG_PostUpdateWork; // 0x50(0x08)
	int64 TG_LastDemotable; // 0x58(0x08)
	int64 NetBroadcastTickTime; // 0x60(0x08)
	int64 NetConnectionTick; // 0x68(0x08)
	int64 NetUpdateUnmappedObjectsTime; // 0x70(0x08)
	int64 QueueTicks; // 0x78(0x08)
	int64 UpdateCameraTime; // 0x80(0x08)
	int64 NetWorldTickTime; // 0x88(0x08)
	int64 GTTickableTime; // 0x90(0x08)
	int64 TickAsyncLoadingGT; // 0x98(0x08)
	int64 DeferredTickTime; // 0xa0(0x08)
};

// ScriptStruct TslGame.WuLogServerStat
// Size: 0x90 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogServerStat : FLogBase {
	int32 ElapsedTime; // 0x60(0x04)
	int32 NumAliveTeams; // 0x64(0x04)
	int32 NumJoinPlayers; // 0x68(0x04)
	int32 NumStartPlayers; // 0x6c(0x04)
	int32 NumAlivePlayers; // 0x70(0x04)
	float PingMin; // 0x74(0x04)
	float PingMax; // 0x78(0x04)
	float PingAvg; // 0x7c(0x04)
	float FrameRateMin; // 0x80(0x04)
	float FrameRateMax; // 0x84(0x04)
	float FrameRateAvg; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// Size: 0xc8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogGameStatePeriodic : FLogBase {
	struct FWuLogGameState GameState; // 0x60(0x68)
};

// ScriptStruct TslGame.WuLogGameState
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogGameState : FGdlStructBase {
	int32 ElapsedTime; // 0x08(0x04)
	int32 NumStartTeams; // 0x0c(0x04)
	int32 NumAliveTeams; // 0x10(0x04)
	int32 NumParticipatedTeams; // 0x14(0x04)
	int32 NumJoinPlayers; // 0x18(0x04)
	int32 NumStartPlayers; // 0x1c(0x04)
	int32 NumAlivePlayers; // 0x20(0x04)
	int32 NumParticipatedPlayers; // 0x24(0x04)
	struct FVector SafetyZonePosition; // 0x28(0x0c)
	float SafetyZoneRadius; // 0x34(0x04)
	struct FVector PoisonGasWarningPosition; // 0x38(0x0c)
	float PoisonGasWarningRadius; // 0x44(0x04)
	struct FVector RedZonePosition; // 0x48(0x0c)
	float RedZoneRadius; // 0x54(0x04)
	struct FVector BlackZonePosition; // 0x58(0x0c)
	float BlackZoneRadius; // 0x64(0x04)
};

// ScriptStruct TslGame.WuLogWeaponAccuracyStats
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogWeaponAccuracyStats : FLogBase {
	struct TArray<struct FWuPlayerWeaponStats> Players; // 0x60(0x10)
};

// ScriptStruct TslGame.WuLogWeaponChange
// Size: 0x90 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogWeaponChange : FLogBase {
	struct FString AccountId; // 0x60(0x10)
	struct FString WeaponInHand; // 0x70(0x10)
	struct FString WeaponHolstered; // 0x80(0x10)
};

// ScriptStruct TslGame.WuLogMatchEnd
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMatchEnd : FLogBase {
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x60(0x10)
	struct TArray<struct FWuLogRewardDetail> RewardDetail; // 0x70(0x10)
	struct FWuGameFinishedResult GameResultOnFinished; // 0x80(0x18)
	struct TArray<struct FWuWaypointStat> WaypointStats; // 0x98(0x10)
	struct TArray<struct FWuPlayerWeaponStats> AllWeaponStats; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuWaypointStat
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuWaypointStat : FGdlStructBase {
	struct FString UserName; // 0x08(0x10)
	int32 WaypointUsedCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.WuGameFinishedResult
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameFinishedResult : FGdlStructBase {
	struct TArray<struct FWuGameResultPerPlayer> Results; // 0x08(0x10)
};

// ScriptStruct TslGame.WuLogRewardDetail
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct FWuLogRewardDetail : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	struct FWuLogPlayTimeRecord PlayTimeRecord; // 0x18(0x10)
	struct FWuLogBpReward BpReward; // 0x28(0x28)
};

// ScriptStruct TslGame.WuLogBpReward
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogBpReward : FGdlStructBase {
	int32 PlayTime; // 0x08(0x04)
	int32 Ranking; // 0x0c(0x04)
	int32 Kill; // 0x10(0x04)
	int32 Damage; // 0x14(0x04)
	int32 Boosting; // 0x18(0x04)
	int32 RawTotal; // 0x1c(0x04)
	int32 BoostedTotal; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.WuLogCharacterWeapons
// Size: 0x108 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogCharacterWeapons : FGdlStructBase {
	struct FWuLogCharacter Character; // 0x08(0xc8)
	struct FString PrimaryWeaponFirst; // 0xd0(0x10)
	struct FString PrimaryWeaponSecond; // 0xe0(0x10)
	struct FString SecondaryWeapon; // 0xf0(0x10)
	int32 SpawnKitIndex; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.WuLogMatchStart
// Size: 0xb8 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMatchStart : FLogBase {
	struct FString MapName; // 0x60(0x10)
	struct FString WeatherId; // 0x70(0x10)
	struct TArray<struct FWuLogCharacterWeapons> Characters; // 0x80(0x10)
	struct FString CameraViewBehaviour; // 0x90(0x10)
	int32 TeamSize; // 0xa0(0x04)
	bool IsCustomGame; // 0xa4(0x01)
	bool IsEventMode; // 0xa5(0x01)
	bool IsAIMode; // 0xa6(0x01)
	char pad_A7[0x1]; // 0xa7(0x01)
	struct FString BlueZoneCustomOptions; // 0xa8(0x10)
};

// ScriptStruct TslGame.WuLogGasPumpValue
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogGasPumpValue : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString Action; // 0x128(0x10)
	float Value; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogGasPump
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogGasPump : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString Action; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleBlueChipDetector
// Size: 0x140 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSoftroleBlueChipDetector : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString Action; // 0x128(0x10)
	float ScanningDistance; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeEnd
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSoftroleSpotterScopeEnd : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString PrimaryWeaponFirst; // 0x128(0x10)
	struct FString PrimaryWeaponSecond; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeBegin
// Size: 0x148 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSoftroleSpotterScopeBegin : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString PrimaryWeaponFirst; // 0x128(0x10)
	struct FString PrimaryWeaponSecond; // 0x138(0x10)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMarkDrone
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSoftroleSpotterScopeMarkDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FVector Location; // 0x128(0x0c)
	float Distance; // 0x134(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleSpotterScopeMark
// Size: 0x1f8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSoftroleSpotterScopeMark : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogCharacter MarkedCharacter; // 0x128(0xc8)
	float Distance; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// ScriptStruct TslGame.WuLogSoftroleTraumaBag
// Size: 0x248 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogSoftroleTraumaBag : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogCharacter Target; // 0x128(0xc8)
	struct FWuLogItem HealingItem; // 0x1f0(0x58)
};

// ScriptStruct TslGame.WuLogSoftroleDrone
// Size: 0x198 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct FWuLogSoftroleDrone : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FWuLogItem InventoryItem; // 0x128(0x58)
	struct FString Action; // 0x180(0x10)
	float FlyingElapsedTime; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// ScriptStruct TslGame.WuLogCharacterCarry
// Size: 0x138 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogCharacterCarry : FLogBase {
	struct FWuLogCharacter Character; // 0x60(0xc8)
	struct FString CarryState; // 0x128(0x10)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// Size: 0x120 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogMatchDefinition : FLogBase {
	struct FString MatchId; // 0x60(0x10)
	struct FString ModeId; // 0x70(0x10)
	struct FString SubmodeId; // 0x80(0x10)
	struct FString PingQuality; // 0x90(0x10)
	struct FString SeasonState; // 0xa0(0x10)
	struct TArray<struct FWuLogCharacterRating> Ratings; // 0xb0(0x10)
	struct FString DivisionId; // 0xc0(0x10)
	struct FString InstanceId; // 0xd0(0x10)
	struct FString PublicId; // 0xe0(0x10)
	struct FString InstanceType; // 0xf0(0x10)
	struct FString GameServerVersion; // 0x100(0x10)
	struct FString OsPlatform; // 0x110(0x10)
};

// ScriptStruct TslGame.WuLogCharacterRating
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLogCharacterRating : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	struct FString NetId; // 0x18(0x10)
	int32 MMR; // 0x28(0x04)
	int32 RankPoint; // 0x2c(0x04)
	int32 Ping; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.WuLogPhaseChange
// Size: 0x78 (Inherited: 0x60)  [layout: KHOP]
struct FWuLogPhaseChange : FLogBase {
	int32 Phase; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FString> PlayersInWhiteCircle; // 0x68(0x10)
};

// ScriptStruct TslGame.WuPlayDataResult
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuPlayDataResult : FGdlStructBase {
	struct FString AccountId; // 0x08(0x10)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString ResultDescription; // 0x20(0x10)
	struct FString PlayData; // 0x30(0x10)
};

// ScriptStruct TslGame.WuMissionProgressUpdateData
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuMissionProgressUpdateData : FGdlStructBase {
	struct TArray<struct FWuStringIntPair> Updates; // 0x08(0x10)
};

// ScriptStruct TslGame.WuPrepareUsersResult
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuPrepareUsersResult : FGdlStructBase {
	struct TArray<struct FString> AccountIds; // 0x08(0x10)
};

// ScriptStruct TslGame.WuGameStartInfo
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameStartInfo : FGdlStructBase {
	struct TArray<struct FWuGameStartInfoPerPlayer> Players; // 0x08(0x10)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameStartInfoPerPlayer : FGdlStructBase {
	struct FString PlayerNetId; // 0x08(0x10)
	struct FString AccountId; // 0x18(0x10)
};

// ScriptStruct TslGame.WuGameInitializedResult
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameInitializedResult : FGdlStructBase {
	bool IsSuccess; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 Port; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuGameStartRequest
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameStartRequest : FGdlStructBase {
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x08(0x10)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameOverrideParameterRequest : FGdlStructBase {
	struct FString MatchId; // 0x08(0x10)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x18(0x10)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct FWuGameInitializeRequest : FGdlStructBase {
	bool IsCustomGame; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString MapName; // 0x10(0x10)
	struct FString MatchId; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
	int32 TeamCount; // 0x40(0x04)
	int32 MinPlayerCount; // 0x44(0x04)
	int32 MaxPlayerCount; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FWuStringStringPair> StringParameters; // 0x50(0x10)
};

// ScriptStruct TslGame.WuUserAuthInfo
// Size: 0x360 (Inherited: 0x08)  [layout: KHOP]
struct FWuUserAuthInfo : FGdlStructBase {
	struct FString PlayerNetId; // 0x08(0x10)
	int32 TeamId; // 0x18(0x04)
	int32 TeamMemberIndex; // 0x1c(0x04)
	int32 SquadIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FWuMatchRating Rating; // 0x28(0x10)
	bool IsZombie; // 0x38(0x01)
	bool IsMaster; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FWuCharacterInfo CharacterInfo; // 0x40(0x1d8)
	int32 Platform; // 0x218(0x04)
	bool IsStreamerModeOn; // 0x21c(0x01)
	char pad_21D[0x3]; // 0x21d(0x03)
	struct FString PartnerLevel; // 0x220(0x10)
	int32 ObserverAuthorityType; // 0x230(0x04)
	bool BattlEyeDisabled; // 0x234(0x01)
	bool IsSuspect; // 0x235(0x01)
	bool DisallowVoiceChat; // 0x236(0x01)
	bool IsBypassAnticheat; // 0x237(0x01)
	bool IsAvatarBanned; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	int32 AcVerificationScore; // 0x23c(0x04)
	struct FString AccountId; // 0x240(0x10)
	int32 v1; // 0x250(0x04)
	int32 v2; // 0x254(0x04)
	int32 V3; // 0x258(0x04)
	int32 V4; // 0x25c(0x04)
	struct FWuUdpEncryptionKey UdpEncryptionKey; // 0x260(0x38)
	struct TArray<struct FWuStringStringPair> CustomParameters; // 0x298(0x10)
	struct FWuChatRestrictStatus ChatRestrictStatus; // 0x2a8(0x20)
	float BpBoost; // 0x2c8(0x04)
	bool IsPCCafeUser; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct TArray<struct FWuStringIntPair> StatTrakDataPairs; // 0x2d0(0x10)
	struct TArray<struct FWuStringIntPair> HeadshotStatTrakDataPairs; // 0x2e0(0x10)
	struct FWuLobbyPartyInfo LobbyPartyInfo; // 0x2f0(0x30)
	struct TArray<struct FString> TdmSpawnKitIds; // 0x320(0x10)
	struct FWuDuelPairInfo DuelPairInfo; // 0x330(0x30)
};

// ScriptStruct TslGame.WuDuelPairInfo
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuDuelPairInfo : FGdlStructBase {
	struct FString MyTeamSessionId; // 0x08(0x10)
	struct FString OpponentTeamSessionId; // 0x18(0x10)
	int32 OpponentTeamId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.WuLobbyPartyInfo
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuLobbyPartyInfo : FGdlStructBase {
	struct FString PartyId; // 0x08(0x10)
	struct FString PartyLeaderId; // 0x18(0x10)
	int32 PartySize; // 0x28(0x04)
	bool AllowAnyMember; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.WuChatRestrictStatus
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct FWuChatRestrictStatus : FGdlStructBase {
	bool IsBlocked; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 Reason; // 0x0c(0x04)
	struct FString UntilTimeStamp; // 0x10(0x10)
};

// ScriptStruct TslGame.WuCharacterInfo
// Size: 0x1d8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuCharacterInfo : FGdlStructBase {
	struct FString Nickname; // 0x08(0x10)
	bool Gender; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FWuCharacterCustomizationOptions CustomizationOptions; // 0x20(0xb0)
	struct FWuCharacterWeaponMasteryInfo WeaponMasteryInfo; // 0xd0(0x18)
	struct FWuCharacterClanInfo ClanInfo; // 0xe8(0x40)
	struct FWuPubgIdData PubgIdData; // 0x128(0x98)
	struct TArray<struct FWuCustomizationPresetInfo> CustomizationPresetInfos; // 0x1c0(0x10)
	int32 PresetIndex; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
};

// ScriptStruct TslGame.WuCustomizationPresetInfo
// Size: 0x70 (Inherited: 0x08)  [layout: KHOP]
struct FWuCustomizationPresetInfo : FGdlStructBase {
	bool Gender; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FString> ItemIds; // 0x10(0x10)
	struct TArray<struct FWuStringStringPair> StringOptions; // 0x20(0x10)
	bool IsUnlocked; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FWuContenderCustomizationOption ContenderCustomizationOption; // 0x38(0x38)
};

// ScriptStruct TslGame.WuCharacterClanInfo
// Size: 0x40 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FWuCharacterClanInfo : FGdlStructBase {
	struct FString ClanId; // 0x08(0x10)
	struct FString ClanName; // 0x18(0x10)
	struct FString ClanTag; // 0x28(0x10)
	int32 ClanLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.WuCharacterWeaponMasteryInfo
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FWuCharacterWeaponMasteryInfo : FGdlStructBase {
	struct TArray<struct FWuStringIntPair> WeaponMasteryTiers; // 0x08(0x10)
};

// ScriptStruct TslGame.WuMatchRating
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FWuMatchRating : FGdlStructBase {
	int32 RankPoint; // 0x08(0x04)
	int32 MMR; // 0x0c(0x04)
};

// ScriptStruct TslGame.WuTeamInfo
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct FWuTeamInfo : FGdlStructBase {
	int32 TeamId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> AccountIds; // 0x10(0x10)
	struct TArray<int32> TeamMemberIndices; // 0x20(0x10)
	struct TArray<int32> SquadIndices; // 0x30(0x10)
};

// ScriptStruct TslGame.WuUnrealPlayerCard
// Size: 0x200 (Inherited: 0x08)  [layout: KHOP]
struct FWuUnrealPlayerCard : FGdlStructBase {
	int32 CurrentLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PrimaryBackgroundColor; // 0x10(0x10)
	struct FString BackgroundId; // 0x20(0x10)
	struct FString EmblemId; // 0x30(0x10)
	struct FString BannerId; // 0x40(0x10)
	int32 OriginType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString NetId; // 0x58(0x10)
	struct FWuUnrealPlayerCardStat Slot1; // 0x68(0x78)
	struct FWuUnrealPlayerCardStat Slot2; // 0xe0(0x78)
	struct FWuUnrealPlayerCardStat Slot3; // 0x158(0x78)
	struct FWuUnrealPlayerCardRankPointData RankPoint; // 0x1d0(0x30)
};

// ScriptStruct TslGame.WuUnrealPlayerCardRankPointData
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FWuUnrealPlayerCardRankPointData : FGdlStructBase {
	int32 RankPoints; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString tier; // 0x10(0x10)
	struct FString SubTier; // 0x20(0x10)
};

// ScriptStruct TslGame.WuUnrealPlayerCardStat
// Size: 0x78 (Inherited: 0x08)  [layout: KHOP]
struct FWuUnrealPlayerCardStat : FGdlStructBase {
	struct FString IconId; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString TitleArg; // 0x28(0x10)
	struct FString Subtitle; // 0x38(0x10)
	struct FString SubtitleArg; // 0x48(0x10)
	struct FString Value; // 0x58(0x10)
	struct FString ValueArg; // 0x68(0x10)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct FWuCustomizableObjectIdPair : FGdlStructBase {
	struct FString CustomizableObjectKey; // 0x08(0x10)
	struct FString CustomizableObjectValue; // 0x18(0x10)
};

// ScriptStruct TslGame.*d181f0f060
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d181f0f060 {
	struct TArray<struct FString> *055388bf9a; // 0x00(0x10)
	struct TArray<struct FString> *61453ec2fa; // 0x10(0x10)
	struct TArray<struct FString> *20d0863b4f; // 0x20(0x10)
	struct TArray<bool> *bd1354ef13; // 0x30(0x10)
	struct TArray<struct FString> *69c14009bf; // 0x40(0x10)
	struct TArray<float> *fac85c2ca5; // 0x50(0x10)
	struct TArray<struct FString> ItemIds; // 0x60(0x10)
	bool *399817be04; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*bb18cbf715
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bb18cbf715 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*d475e8cfcd
// Size: 0x06 (Inherited: 0x00)  [layout: KHOP]
struct F*d475e8cfcd {
	int16 *6ad2e71f54; // 0x00(0x02)
	int16 *d5e4b23d78; // 0x02(0x02)
	uint16 *e62cbd05ba; // 0x04(0x02)
};

// ScriptStruct TslGame.*1eae6afca1
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*1eae6afca1 {
	struct FString AssetName; // 0x00(0x10)
	struct TArray<struct F*a38dc0c778> Entries; // 0x10(0x10)
};

// ScriptStruct TslGame.*a38dc0c778
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*a38dc0c778 {
	struct FString *fada90e0be; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
};

// ScriptStruct TslGame.*426e4c4121
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*426e4c4121 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*ffc2915e2a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ffc2915e2a {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*8ef12ce451
// Size: 0x44 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8ef12ce451 {
	char pad_0[0x44]; // 0x00(0x44)
};

// ScriptStruct TslGame.*2a6405e90c
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2a6405e90c {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct TslGame.*34ff37f546
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*34ff37f546 {
	int64 *730379cca6; // 0x00(0x08)
	float *99a77715b7; // 0x08(0x04)
	float *c4252213f4; // 0x0c(0x04)
	enum class EAnimStance AnimStance; // 0x10(0x01)
	bool *04020c8684; // 0x11(0x01)
	bool *4172c7e71a; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct TslGame.*1aa42649c6
// Size: 0x2c8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1aa42649c6 {
	char pad_0[0x2c8]; // 0x00(0x2c8)
};

// ScriptStruct TslGame.*242bb5b01e
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct F*242bb5b01e : F*0affa24be2 {
	struct FString AttackerAccountId; // 0x38(0x10)
};

// ScriptStruct TslGame.*0affa24be2
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*0affa24be2 {
	uint32 HitCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> *1a88e68404; // 0x08(0x10)
	struct TArray<float> *e74236bee6; // 0x18(0x10)
	struct TArray<float> *81cbb677f4; // 0x28(0x10)
};

// ScriptStruct TslGame.*5316f6b107
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5316f6b107 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*a514c25a4e
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*a514c25a4e {
	float *a22781ddf8; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector2D> *0cedf7f44f; // 0x08(0x10)
	float *034bec94b8; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FVector2D> *fb36b2af32; // 0x20(0x10)
};

// ScriptStruct TslGame.UpdateFiredData
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FUpdateFiredData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*4a4afa56ba
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4a4afa56ba {
	struct TArray<struct F*d475e8cfcd> *650ca4a9df; // 0x00(0x10)
	struct TArray<uint16> *e607b223e8; // 0x10(0x10)
	float *6327323853; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*c8f07d6569
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c8f07d6569 {
	struct TArray<struct FString> *c8f07d6569; // 0x00(0x10)
};

// ScriptStruct TslGame.*d47f9e8e2c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d47f9e8e2c {
	struct ATslPlayerStateBase* PlayerState; // 0x00(0x08)
	uint64 Data; // 0x08(0x08)
};

// ScriptStruct TslGame.*3cf5485cec
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*3cf5485cec {
	char *214f1e703f : 1; // 0x00(0x01)
	char bPointSellable : 1; // 0x00(0x01)
	char *3216faf06d : 1; // 0x00(0x01)
	char bPointRefundable : 1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *5b0f5cf985; // 0x08(0x10)
	enum class ELobbyItemTier tier; // 0x18(0x01)
	enum class ELobbyItemCategory Category; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FText Description; // 0x20(0x18)
	bool *340256795a; // 0x38(0x01)
	bool *f5562e9768; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TArray<enum class ELobbyItemPlatform> Platforms; // 0x40(0x10)
	float *ab6cfd340c; // 0x50(0x04)
	enum class ELobbyItemPointSellingType *2699848be8; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *76e4ee2f88; // 0x58(0x04)
	int32 *8e2929606d; // 0x5c(0x04)
};

// ScriptStruct TslGame.*d08f71cd8c
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*d08f71cd8c {
	struct UAnimMontage* *53c7b750d7; // 0x00(0x08)
	struct UAnimMontage* *89494cb539; // 0x08(0x08)
	struct UAnimMontage* Cooking; // 0x10(0x08)
	struct UAnimMontage* *a41b5f46af; // 0x18(0x08)
	struct UAnimMontage* *3800acde1c; // 0x20(0x08)
};

// ScriptStruct TslGame.CensoredUnderwearCustomizeData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FCensoredUnderwearCustomizeData {
	struct FString CustomizableObjectGroupName; // 0x00(0x10)
	enum class EEquipSlotID EquipSlotID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName EquipableItemID; // 0x18(0x08)
};

// ScriptStruct TslGame.*e3e475d835
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e3e475d835 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> AttachmentItemIDs; // 0x10(0x10)
};

// ScriptStruct TslGame.*32ca060c6c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*32ca060c6c {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*16a5d72ef4
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*16a5d72ef4 {
	bool bRandomSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RandomSpawnRadius; // 0x04(0x04)
	float *f1f419773c; // 0x08(0x04)
};

// ScriptStruct TslGame.*862c22acd9
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*862c22acd9 {
	int32 *78bb130b4c; // 0x00(0x04)
	int32 *b59648180d; // 0x04(0x04)
	int32 *b982b4e08c; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ADroppedItem* *4e2ab4d016; // 0x10(0x08)
	enum class EEquipSlotID EquipSlotID; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 *4958d4149d; // 0x1c(0x04)
};

// ScriptStruct TslGame.*3610a0a5f6
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3610a0a5f6 {
	struct FName SkinItemID; // 0x00(0x08)
	int32 *b46135fc1a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b43778dd34
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b43778dd34 {
	enum class EConstraintSlotType ConstraintSlotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*eea6eb6dc0 EquipPosition; // 0x04(0x08)
	enum class EEquipableItemSoundType OverrideSoundType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*eea6eb6dc0
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*eea6eb6dc0 {
	enum class EEquipSlotID SlotID; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Index; // 0x04(0x04)
};

// ScriptStruct TslGame.*1ed31e9c5f
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*1ed31e9c5f {
	struct FRotator *1f538db405; // 0x00(0x0c)
	struct FRotator *fea969db35; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FVector Direction; // 0x24(0x0c)
	struct U*30ba6487d1* ThrowableConfig; // 0x30(0x08)
	int32 *30841970e6; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct ATslCharacter* TargetCharacter; // 0x40(0x08)
	struct UPrimitiveComponent* *59d97b4003; // 0x48(0x08)
};

// ScriptStruct TslGame.*b40f874a6c
// Size: 0x190 (Inherited: 0x00)  [layout: KHOP]
struct F*b40f874a6c {
	struct TMap<struct UClass*, struct F*10549f1180> SlotOffset_Primary_PerWeapon; // 0x00(0x50)
	struct TMap<struct UClass*, struct F*10549f1180> SlotOffset_Secondary_PerWeapon; // 0x50(0x50)
	struct TMap<struct UClass*, struct F*10549f1180> SlotOffset_SideArm_PerWeapon; // 0xa0(0x50)
	struct TMap<struct UClass*, struct F*10549f1180> SlotOffset_Melee_PerWeapon; // 0xf0(0x50)
	struct TMap<struct UClass*, struct F*10549f1180> SlotOffset_Thrown_PerWeapon; // 0x140(0x50)
};

// ScriptStruct TslGame.*10549f1180
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*10549f1180 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*357279b46c
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*357279b46c {
	struct FVector SlotOffset_Primary_Location; // 0x00(0x0c)
	struct FVector SlotOffset_Secondary_Location; // 0x0c(0x0c)
	struct FVector SlotOffset_SideArm_Location; // 0x18(0x0c)
	struct FVector SlotOffset_Melee_Location; // 0x24(0x0c)
	struct FVector SlotOffset_Thrown_Location; // 0x30(0x0c)
	struct FRotator SlotOffset_Primary_Rotation; // 0x3c(0x0c)
	struct FRotator SlotOffset_Secondary_Rotation; // 0x48(0x0c)
	struct FRotator SlotOffset_SideArm_Rotation; // 0x54(0x0c)
	struct FRotator SlotOffset_Melee_Rotation; // 0x60(0x0c)
	struct FRotator SlotOffset_Thrown_Rotation; // 0x6c(0x0c)
};

// ScriptStruct TslGame.*87a8a39237
// Size: 0x08 (Inherited: 0x08)  [layout: KHOP]
struct F*87a8a39237 : FTableRowBase {
};

// ScriptStruct TslGame.*7dff736ba8
// Size: 0x290 (Inherited: 0x08)  [layout: KHOP]
struct F*7dff736ba8 : FTableRowBase {
	char bStackable : 1; // 0x08(0x01)
	char bUsable : 1; // 0x08(0x01)
	char bIsConsumable : 1; // 0x08(0x01)
	char bSetStackMaterialParameter : 1; // 0x08(0x01)
	char bDisableSpawnInGame : 1; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 StackCount; // 0x0c(0x04)
	int32 DefaultStackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText ItemName; // 0x18(0x18)
	struct FText ItemCategory; // 0x30(0x18)
	struct FText ItemDetailedName; // 0x48(0x18)
	struct FText ItemDescription; // 0x60(0x18)
	float ItemMaxInteractableDistance; // 0x78(0x04)
	int32 StackCountMax; // 0x7c(0x04)
	float SpacePerItem; // 0x80(0x04)
	float WeightPerItem; // 0x84(0x04)
	struct UStaticMesh* DroppedMesh; // 0x88(0x20)
	float DroppedMeshScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct U*f777e53711* ObjectCarryDataAsset; // 0xb0(0x20)
	float ObjectCarryMeshScale; // 0xd0(0x04)
	int32 ObjectCarryStackCount; // 0xd4(0x04)
	bool bChangeableDroppedMeshByStackCount; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct F*95d2465a11> DroppedItemMeshData; // 0xe0(0x10)
	bool bDropAsProjectile; // 0xf0(0x01)
	bool bThermalScopeInteractive; // 0xf1(0x01)
	enum class EThermalItemType ThermalItemType; // 0xf2(0x01)
	char pad_F3[0x5]; // 0xf3(0x05)
	struct U*30ba6487d1* ProjectileConfig; // 0xf8(0x20)
	struct UTexture* Icon; // 0x118(0x20)
	struct UAkAudioEvent* DropSoundAk; // 0x138(0x20)
	struct FName DropAnimation; // 0x158(0x08)
	struct UAkAudioEvent* PickUpSoundAk; // 0x160(0x20)
	enum class EPickupAnimType PickUpAnimationOverride; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct UAkAudioEvent* InventoryPutSoundAk; // 0x188(0x20)
	int32 SortPriority; // 0x1a8(0x04)
	enum class EItemCategory Category; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FName Subcategory; // 0x1b0(0x08)
	bool bIsToy; // 0x1b8(0x01)
	bool bNeedToCheckPopup; // 0x1b9(0x01)
	bool bCanSell; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	int32 Price; // 0x1bc(0x04)
	bool bCanAddToTacPack; // 0x1c0(0x01)
	bool bIsLobbyItem; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	int32 LobbyItemID; // 0x1c4(0x04)
	struct F*3cf5485cec LobbyItemDesc; // 0x1c8(0x60)
	bool bIsLobbyWeapon; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32 LobbyWeaponID; // 0x22c(0x04)
	struct UClass* LobbyWeaponInstance; // 0x230(0x20)
	bool *ef716626b9; // 0x250(0x01)
	bool *73353d9cc2; // 0x251(0x01)
	bool *03e1d8ca67; // 0x252(0x01)
	char pad_253[0x5]; // 0x253(0x05)
	struct FString Note; // 0x258(0x10)
	int32 AIFullValue; // 0x268(0x04)
	int32 ItemSubType; // 0x26c(0x04)
	struct FName ItemID; // 0x270(0x08)
	struct UClass* ItemClass; // 0x278(0x08)
	struct UClass* *7f1e189ef4; // 0x280(0x08)
	struct U*2d2120365c* *adeba4c2a8; // 0x288(0x08)
};

// ScriptStruct TslGame.*95d2465a11
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*95d2465a11 {
	struct UStaticMesh* DroppedItemMesh; // 0x00(0x20)
	int32 MinStackCount; // 0x20(0x04)
	int32 MaxStackCount; // 0x24(0x04)
};

// ScriptStruct TslGame.*259053e3f5
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*259053e3f5 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct ATslPlayerStateBase*, uint64> *5894ce01ea; // 0x08(0x50)
};

// ScriptStruct TslGame.*3099851940
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*3099851940 {
	float Health; // 0x00(0x04)
};

// ScriptStruct TslGame.*b273d46fdb
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b273d46fdb {
	float *1293a71744; // 0x00(0x04)
	float *521f90ac18; // 0x04(0x04)
	float *3c1a9e6afa; // 0x08(0x04)
	float *b2f6b8010c; // 0x0c(0x04)
	float *f7ef69c6ea; // 0x10(0x04)
	float *d7368cad9e; // 0x14(0x04)
	bool *83c2f37356; // 0x18(0x01)
	bool *ddb1da4537; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct TslGame.*b5ef6d850c
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*b5ef6d850c {
	float *0840e05aed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *6d8fa2ed1b; // 0x08(0x08)
	bool bShowTrunkMesh; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct F*3be1f23007> *f2dba78b71; // 0x18(0x10)
};

// ScriptStruct TslGame.*3be1f23007
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*3be1f23007 {
	struct UStaticMesh* TrunkMesh; // 0x00(0x20)
	float MinCapacityPercent; // 0x20(0x04)
	float MaxCapacityPercent; // 0x24(0x04)
};

// ScriptStruct TslGame.*2b61728c47
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2b61728c47 {
	struct FVector Location; // 0x00(0x0c)
	bool *28c2748d53; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*4e5b9bbfc4
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4e5b9bbfc4 {
	struct FName *0816ad332f; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*3b48fee9ba
// Size: 0x140 (Inherited: 0x00)  [layout: KHOP]
struct F*3b48fee9ba {
	struct UClass* explosion; // 0x00(0x08)
	float DamagedPercentMax; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* Damaged; // 0x10(0x08)
	struct UClass* Destroyed; // 0x18(0x08)
	struct UAkAudioEvent* EngineSound; // 0x20(0x08)
	struct UAkAudioEvent* EngineSound_Remote; // 0x28(0x08)
	struct UAkAudioEvent* EngineSound_Stop; // 0x30(0x08)
	struct UAkAudioEvent* DelayedExplosion; // 0x38(0x08)
	struct UClass* Muffler; // 0x40(0x08)
	struct UClass* Muffler2; // 0x48(0x08)
	struct UClass* Muffler3; // 0x50(0x08)
	struct UClass* Muffler4; // 0x58(0x08)
	struct UClass* Boost; // 0x60(0x08)
	struct UClass* Boost2; // 0x68(0x08)
	struct UClass* Boost3; // 0x70(0x08)
	struct UClass* Boost4; // 0x78(0x08)
	struct UClass* FrontTrail; // 0x80(0x08)
	struct UClass* RearTrail; // 0x88(0x08)
	struct UClass* Thruster; // 0x90(0x08)
	struct UClass* Thruster2; // 0x98(0x08)
	struct UClass* FrontFoamLeft; // 0xa0(0x08)
	struct UClass* FrontFoamRight; // 0xa8(0x08)
	struct UClass* SpashEffectOverride; // 0xb0(0x08)
	struct UStaticMesh* Rotor; // 0xb8(0x08)
	struct UStaticMesh* RotorDamaged; // 0xc0(0x08)
	struct UClass* ExhaustPopEffect; // 0xc8(0x08)
	struct FFloatRange ImpactNormalForceRange; // 0xd0(0x10)
	struct UClass* ImpactDefault; // 0xe0(0x08)
	int32 MaxImpactCount; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TMap<enum class EPhysicalSurface, struct UClass*> ImpactEffectMap; // 0xf0(0x50)
};

// ScriptStruct TslGame.*4bd7edb3e5
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4bd7edb3e5 {
	struct UAkAudioEvent* *28b750ba99; // 0x00(0x08)
	struct UAkAudioEvent* *aec3e315dd; // 0x08(0x08)
};

// ScriptStruct TslGame.*9537f3ea9a
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*9537f3ea9a {
	int32 NumKills; // 0x00(0x04)
	int32 *3eb2056a9b; // 0x04(0x04)
	int32 *b44529cc36; // 0x08(0x04)
};

// ScriptStruct TslGame.*fc41211c19
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fc41211c19 {
	float TotalMovedDistanceMeter; // 0x00(0x04)
	float TotalGivenDamages; // 0x04(0x04)
	float LongestDistanceKill; // 0x08(0x04)
	int32 HeadShots; // 0x0c(0x04)
};

// ScriptStruct TslGame.*92b13ac1a6
// Size: 0x170 (Inherited: 0x00)  [layout: KHOP]
struct F*92b13ac1a6 {
	float *e2ea91f412; // 0x00(0x04)
	float *4d304b9341; // 0x04(0x04)
	float *99184aec26; // 0x08(0x04)
	float *2d1e7d9fa7; // 0x0c(0x04)
	float *cd64f0ba04; // 0x10(0x04)
	int32 *23afb91038; // 0x14(0x04)
	int32 *f664ef1dba; // 0x18(0x04)
	int32 *6f8593e628; // 0x1c(0x04)
	int32 *be1ec2579b; // 0x20(0x04)
	int32 *6f2acd31b9; // 0x24(0x04)
	int32 *c7ef9611cd; // 0x28(0x04)
	int32 *93dd6504f3; // 0x2c(0x04)
	struct TMap<struct FString, struct F*1fcc156009> *a35e535301; // 0x30(0x50)
	struct TMap<struct FString, struct F*1fcc156009> *52a04876b2; // 0x80(0x50)
	struct TMap<struct FString, int32> *49e2fc161a; // 0xd0(0x50)
	struct TMap<enum class EMovementBaseType, float> *2c43def21c; // 0x120(0x50)
};

// ScriptStruct TslGame.*1fcc156009
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*1fcc156009 {
	int32 Shots; // 0x00(0x04)
	float *2aefe07c3c; // 0x04(0x04)
	struct TMap<enum class EDamageReason, struct F*b1c2da850a> *3d9998550d; // 0x08(0x50)
};

// ScriptStruct TslGame.*b1c2da850a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b1c2da850a {
	int32 Hits; // 0x00(0x04)
	int32 DBNOHits; // 0x04(0x04)
	float *ae9433d99f; // 0x08(0x04)
	float *bca81a8967; // 0x0c(0x04)
	int32 Kills; // 0x10(0x04)
	int32 DBNOs; // 0x14(0x04)
};

// ScriptStruct TslGame.*ef9185143e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ef9185143e {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*589e40743d
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*589e40743d {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*9c62db78da
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9c62db78da {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*8d9c58839d
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8d9c58839d {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*6bc67a203b
// Size: 0xd0 (Inherited: 0x00)  [layout: KHOP]
struct F*6bc67a203b {
	struct FInt32Range RowRange; // 0x00(0x10)
	struct FFloatRange CapsuleRelativeRange; // 0x10(0x10)
	struct FFloatRange SpeedRange; // 0x20(0x10)
	struct FFloatRange ZSpeedRange; // 0x30(0x10)
	struct FInt32Range LedgeRange; // 0x40(0x10)
	struct FInt32Range FreeSpaceRange; // 0x50(0x10)
	enum class *339d56bc47 IsVault; // 0x60(0x01)
	enum class *339d56bc47 IsClimb; // 0x61(0x01)
	enum class *339d56bc47 IsLedgeGrab; // 0x62(0x01)
	enum class *339d56bc47 IsSlide; // 0x63(0x01)
	enum class *339d56bc47 IsNarrow; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct F*6da8714b4c ExecConfig; // 0x68(0x68)
};

// ScriptStruct TslGame.*6da8714b4c
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6da8714b4c {
	float ExecutionDistance; // 0x00(0x04)
	float AnticipationDistance; // 0x04(0x04)
	struct FVector2D AnticipationMapIn; // 0x08(0x08)
	struct FVector2D AnticipationMapOut; // 0x10(0x08)
	float MinExecutionDOT; // 0x18(0x04)
	bool bUseAnimStartForDistance; // 0x1c(0x01)
	bool bUse3DDistance; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FFloatRange ExecutionZRange; // 0x20(0x10)
	bool bUseAnticipationAnim; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAnimSequenceBase* AnticipationAnim; // 0x38(0x08)
	struct UCurveFloat* AnticipationAnimCurve; // 0x40(0x08)
	char pad_48[0x20]; // 0x48(0x20)
};

// ScriptStruct TslGame.*abdc25338b
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*abdc25338b {
	bool *817c4022d6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *a7db8a3505; // 0x08(0x08)
	bool *e98f86c3c3; // 0x10(0x01)
	bool bOverrideOverlapSolveMethod; // 0x11(0x01)
	enum class EBuffOverlapSolveMethod *8b484aab77; // 0x12(0x01)
	bool bOverrideBuffDuration; // 0x13(0x01)
	float *20b242375f; // 0x14(0x04)
	bool bOverrideInfinite; // 0x18(0x01)
	bool *8fb0fe45b7; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*ca82628ca4
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ca82628ca4 {
	struct UClass* *66c5afc618; // 0x00(0x08)
	float *23680ad5b7; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f72fe27584
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f72fe27584 {
	struct UClass* *57c5724e49; // 0x00(0x08)
	float *eab1484170; // 0x08(0x04)
	bool *3406471f1f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*b40cd9aa97
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b40cd9aa97 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* *35f8790e2a; // 0x10(0x08)
	struct UClass* *382d64cc78; // 0x18(0x08)
	struct UClass* *c95b3f6bc5; // 0x20(0x08)
	struct UClass* *c439b4e2ba; // 0x28(0x08)
	struct UClass* *bdf911cc42; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct F*a5ce2867a3 *7d509e4ae0; // 0x48(0x08)
	struct FVector *fab533446b; // 0x50(0x0c)
	struct FVector *f970e0a7bf; // 0x5c(0x0c)
	struct FVector *b13f3e469d; // 0x68(0x0c)
	struct FVector *a46af331b1; // 0x74(0x0c)
	struct FVector *be326f9973; // 0x80(0x0c)
	struct FVector *b22b7a5e5c; // 0x8c(0x0c)
	struct F*a5ce2867a3 *d9cb5e9588; // 0x98(0x08)
	float *8d9ec0eb64; // 0xa0(0x04)
	char pad_A4[0x2c]; // 0xa4(0x2c)
};

// ScriptStruct TslGame.*a5ce2867a3
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*a5ce2867a3 {
	float *afa3aec33b; // 0x00(0x04)
	float *94ef603698; // 0x04(0x04)
};

// ScriptStruct TslGame.*82193cbb4e
// Size: 0x98 (Inherited: 0x00)  [layout: KHOP]
struct F*82193cbb4e {
	struct FString PlayerName; // 0x00(0x10)
	uint32 PlayerKey; // 0x10(0x04)
	int32 TeamId; // 0x14(0x04)
	bool *d662d98e70; // 0x18(0x01)
	bool Gender; // 0x19(0x01)
	bool *70cda1ddcb; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TArray<int32> *5359762ad9; // 0x20(0x10)
	struct TArray<int32> *ea5604464e; // 0x30(0x10)
	struct TArray<int32> *dced0799ea; // 0x40(0x10)
	struct FString Emotes; // 0x50(0x10)
	struct FName *fb5f77f94b; // 0x60(0x08)
	struct FName *a0d0244db9; // 0x68(0x08)
	float *c0f612b4e6; // 0x70(0x04)
	float *0b1b587ba7; // 0x74(0x04)
	float *3cea3c3e1f; // 0x78(0x04)
	float *65e9b3abcd; // 0x7c(0x04)
	bool *82353f6e25; // 0x80(0x01)
	bool *3a37c0f204; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString *948911eb94; // 0x88(0x10)
};

// ScriptStruct TslGame.*94a5ebc768
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*94a5ebc768 {
	struct TArray<bool> *f330f2f2c8; // 0x00(0x10)
};

// ScriptStruct TslGame.*1fa544ae18
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*1fa544ae18 {
	struct FString Key; // 0x00(0x10)
	struct TArray<struct F*55b57febfc> Logs; // 0x10(0x10)
};

// ScriptStruct TslGame.*55b57febfc
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*55b57febfc {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*4556c376a4
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*4556c376a4 {
	struct FString PlayerName; // 0x00(0x10)
	struct FString FullPlayerName; // 0x10(0x10)
	struct FString ClanName; // 0x20(0x10)
	int32 ClanLevel; // 0x30(0x04)
	int32 TeamId; // 0x34(0x04)
	int32 NumStartTeamMember; // 0x38(0x04)
	enum class EOutGamePlatformProvider PlayerPlatform; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct F*2aab519457 Stats; // 0x40(0x28)
};

// ScriptStruct TslGame.*2aab519457
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*2aab519457 {
	int32 Ranking; // 0x00(0x04)
	int32 NumKills; // 0x04(0x04)
	int32 NumHeadShotKills; // 0x08(0x04)
	int32 NumAssists; // 0x0c(0x04)
	float DamageDealtOnEnemy; // 0x10(0x04)
	float DamageTaken; // 0x14(0x04)
	int32 NumAssistToRevive; // 0x18(0x04)
	int32 NumUsedHealItems; // 0x1c(0x04)
	int32 NumUsedBoostItems; // 0x20(0x04)
	int32 NumUsedThrowableItems; // 0x24(0x04)
};

// ScriptStruct TslGame.*df9faf4bd6
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*df9faf4bd6 {
	struct FString AccountId; // 0x00(0x10)
	float *b27d7e671c; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.TslReportedInfo
// Size: 0x108 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslReportedInfo {
	struct FString MatchId; // 0x00(0x10)
	struct FTslReportUserInfo UserInfo; // 0x10(0x70)
	struct FTslReporterInfo ReporterInfo; // 0x80(0x48)
	struct FString Cause; // 0xc8(0x10)
	struct TArray<struct FString> DetailCauseList; // 0xd8(0x10)
	struct FString ReportedSessionType; // 0xe8(0x10)
	float MatchElapsedTimeSec; // 0xf8(0x04)
	bool bIsKilledByReportedUser; // 0xfc(0x01)
	bool bIsDBNOedByReportedUser; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float DamagedAmountByReportedUser; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct TslGame.TslReporterInfo
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FTslReporterInfo {
	struct FString AccountId; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	int32 TeamId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClanId; // 0x28(0x10)
	struct FString ClanTag; // 0x38(0x10)
};

// ScriptStruct TslGame.*97fa351eea
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*97fa351eea {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.ReportDetailCauseTypeDescription
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FReportDetailCauseTypeDescription {
	enum class EReportDetailCauseType ReportDetailCauseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
};

// ScriptStruct TslGame.*5612d646df
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5612d646df {
	float SurvivalTimeStart; // 0x00(0x04)
	float TeamSpectatingTimeStart; // 0x04(0x04)
	float SurvivalTimeAccumulated; // 0x08(0x04)
	float TeamSpectatingTimeAccumulated; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7e4fabeafc
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7e4fabeafc {
	float *14bef01691; // 0x00(0x04)
	float BpBoost; // 0x04(0x04)
	bool *e1a3550e06; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*0e48a37eea
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*0e48a37eea {
	float ByPlayTime; // 0x00(0x04)
	float ByRanking; // 0x04(0x04)
	float ByKills; // 0x08(0x04)
	float ByDamageDealt; // 0x0c(0x04)
	float BoostAmount; // 0x10(0x04)
	float ByModeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*c825a25757
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c825a25757 {
	float *22691c3042; // 0x00(0x04)
	float *9e0cf06e5b; // 0x04(0x04)
};

// ScriptStruct TslGame.LostConnectionToHostLog
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FLostConnectionToHostLog {
	struct FString AccountId; // 0x00(0x10)
	struct FString LoadingState; // 0x10(0x10)
};

// ScriptStruct TslGame.*754f769846
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*754f769846 {
	struct FString ServerURL; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString Issuer; // 0x20(0x10)
};

// ScriptStruct TslGame.*a0751d970b
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a0751d970b {
	struct FString UniqueId; // 0x00(0x10)
	bool *514595ef6f; // 0x10(0x01)
	bool *dd4b3faa48; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.*4c19b648fe
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4c19b648fe {
	struct FString UniqueId; // 0x00(0x10)
	struct FString Nickname; // 0x10(0x10)
	enum class EOutGamePlatformProvider *79bf0cb96d; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FCommunicationPrivilege *04d4721ff3; // 0x24(0x08)
	bool *514595ef6f; // 0x2c(0x01)
	bool *dd4b3faa48; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct TslGame.CommunicationPrivilege
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FCommunicationPrivilege {
	int32 *c9b9c4f0b8; // 0x00(0x04)
	int32 *2b3cf564fa; // 0x04(0x04)
};

// ScriptStruct TslGame.*d43f270c29
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*d43f270c29 {
	float BasicMultiplier; // 0x00(0x04)
	float AfterTeamParkourRaisingMultiplier; // 0x04(0x04)
	float AfterUsingAscenderMultiplier; // 0x08(0x04)
};

// ScriptStruct TslGame.*96363fcc83
// Size: 0x74 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*96363fcc83 {
	struct FVector V_Start; // 0x00(0x0c)
	struct FVector V_Apex; // 0x0c(0x0c)
	struct FVector V_ApexAdditive; // 0x18(0x0c)
	struct FVector V_End; // 0x24(0x0c)
	struct FVector V_CharRelLoc; // 0x30(0x0c)
	enum class EVaultAnimType InVaultType; // 0x3c(0x01)
	bool bEndToFall; // 0x3d(0x01)
	bool bForceCrouch; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float Direction; // 0x40(0x04)
	float PlayerSpeed; // 0x44(0x04)
	float DistanceFromObject; // 0x48(0x04)
	float AdditiveEndZOffset; // 0x4c(0x04)
	struct UPrimitiveComponent* BaseComp; // 0x50(0x08)
	struct FVector BaseWorldLoc; // 0x58(0x0c)
	struct FRotator BaseWorldDir; // 0x64(0x0c)
	char pad_70[0x4]; // 0x70(0x04)
};

// ScriptStruct TslGame.*3d1240744f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3d1240744f {
	struct UObject* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*f8782a9db5
// Size: 0x7b0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f8782a9db5 {
	char pad_0[0x7b0]; // 0x00(0x7b0)
};

// ScriptStruct TslGame.*3ae7940ed5
// Size: 0x770 (Inherited: 0x00)  [layout: KHOP]
struct F*3ae7940ed5 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FVector Apex; // 0x18(0x0c)
	struct FVector ApexAdditive; // 0x24(0x0c)
	float Direction; // 0x30(0x04)
	float PlayerSpeed2D; // 0x34(0x04)
	float DistanceFromObject; // 0x38(0x04)
	float AdditiveEndZOffset; // 0x3c(0x04)
	enum class EVaultAnimType VaultType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MoveIndex; // 0x44(0x04)
	char bIsPassed : 1; // 0x48(0x01)
	char bIsClimbing : 1; // 0x48(0x01)
	char bIsEndToFall : 1; // 0x48(0x01)
	char bForceCrouch : 1; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*6da8714b4c ExecConfig; // 0x50(0x68)
	struct F*2009b55659 HitData; // 0xb8(0x6b8)
};

// ScriptStruct TslGame.*2009b55659
// Size: 0x6b8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2009b55659 {
	char pad_0[0x6b8]; // 0x00(0x6b8)
};

// ScriptStruct TslGame.*0832f68609
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*0832f68609 {
	struct FVector ImpactLocation; // 0x00(0x0c)
	struct FVector CapsulePredictedLocation; // 0x0c(0x0c)
	struct FVector CapsuleImpactLocation; // 0x18(0x0c)
	struct FVector Normal2D; // 0x24(0x0c)
	struct FVector DirectionVector; // 0x30(0x0c)
	float JumpDistance; // 0x3c(0x04)
	char bIsForceVault : 1; // 0x40(0x01)
	char bIsBlockVault : 1; // 0x40(0x01)
	char bIsBlockClimb : 1; // 0x40(0x01)
	char bIsLedgeGrab : 1; // 0x40(0x01)
	char bIsVehicle : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 FirstRow; // 0x44(0x04)
	struct FVector ImpactVelocity; // 0x48(0x0c)
	int32 RowOffset; // 0x54(0x04)
	float NormalSampleDotThreshold; // 0x58(0x04)
	struct FVector CharacterVelocity; // 0x5c(0x0c)
};

// ScriptStruct TslGame.*12b3576189
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct F*12b3576189 : FTickFunction {
	struct UCastComponent* Target; // 0x50(0x08)
};

// ScriptStruct TslGame.TslAxisInputCallbackConfig
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslAxisInputCallbackConfig {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName CallbackName; // 0x10(0x08)
	bool bConsume; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*ce755f3f46
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ce755f3f46 {
	struct FName ActionName; // 0x00(0x08)
	struct FName *d919d27eb5; // 0x08(0x08)
	bool *a4601390ed; // 0x10(0x01)
	enum class EInputEvent *9205d1d952; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct TslGame.UmgWidgetBinder_Gerneral
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_Gerneral : FUmgWidgetBinder {
	struct UWidget* CachedWidget; // 0x18(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FUmgWidgetBinder {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
	struct UUserWidget* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.Sequence_Vector
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct FSequence_Vector : FSequenceBase {
	struct U*5e2750edbb* VectorCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.SequenceBase
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSequenceBase {
	char pad_0[0x18]; // 0x00(0x18)
	struct UUserWidget* Widget; // 0x18(0x08)
	char pad_20[0x78]; // 0x20(0x78)
};

// ScriptStruct TslGame.Sequence_Float
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct FSequence_Float : FSequenceBase {
	struct UCurveFloat* FloatCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.*44f42feb4c
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct F*44f42feb4c : FUmgWidgetBinder {
	struct USpacer* *45e75018cf; // 0x18(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_Animation
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_Animation : FUmgWidgetBinder {
	struct U*7fa8406bd3* CachedAnimation; // 0x18(0x08)
};

// ScriptStruct TslGame.*14611e2c5e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*14611e2c5e {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*27a61e4502
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct F*27a61e4502 : FUmgWidgetBinder {
	struct UWebBrowser* *7c782a30c4; // 0x18(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_UserWidget
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_UserWidget : FUmgWidgetBinder {
	struct UUserWidget* CachedWidget; // 0x18(0x08)
};

// ScriptStruct TslGame.*8117f1dc87
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*8117f1dc87 : FUmgWidgetBinder_Panel {
	struct UScrollBox* *128be5b0fb; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_Panel
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_Panel : FUmgWidgetBinder {
	struct UPanelWidget* CachedPanel; // 0x18(0x08)
};

// ScriptStruct TslGame.*6e3e54baa2
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*6e3e54baa2 : FUmgWidgetBinder_Panel {
	struct UScaleBox* *97fa366ead; // 0x20(0x08)
};

// ScriptStruct TslGame.*ddc3ca702c
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*ddc3ca702c : FUmgWidgetBinder_Panel {
	struct UInvalidationBox* *87954b501b; // 0x20(0x08)
};

// ScriptStruct TslGame.*187b1ff71f
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*187b1ff71f : FUmgWidgetBinder_Panel {
	struct URetainerBox* *65dac602d6; // 0x20(0x08)
};

// ScriptStruct TslGame.*b0ce6b9cf6
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*b0ce6b9cf6 : FUmgWidgetBinder_Panel {
	struct UWrapBox* *3022b89dc3; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_SizeBox
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_SizeBox : FUmgWidgetBinder_Panel {
	struct USizeBox* CachedSizeBox; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_Border
// Size: 0x30 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_Border : FUmgWidgetBinder_Panel {
	struct UBorder* CachedBorder; // 0x20(0x08)
	struct UMaterialInstanceDynamic* CachedMaterial; // 0x28(0x08)
};

// ScriptStruct TslGame.*16555a93c1
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct F*16555a93c1 : FUmgWidgetBinder {
	struct UEditableText* *b5a510d28d; // 0x18(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_TextBlock
// Size: 0x20 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_TextBlock : FUmgWidgetBinder {
	struct UTextBlock* CachedTextBlock; // 0x18(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_WidgetSwitcher
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_WidgetSwitcher : FUmgWidgetBinder_Panel {
	struct UWidgetSwitcher* CachedWidgetSwitcher; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_HorizontalBox
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_HorizontalBox : FUmgWidgetBinder_Panel {
	struct UHorizontalBox* CachedHorizontalBox; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_VerticalBox
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_VerticalBox : FUmgWidgetBinder_Panel {
	struct UVerticalBox* CachedVerticalBox; // 0x20(0x08)
};

// ScriptStruct TslGame.*ba267fba67
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*ba267fba67 : FUmgWidgetBinder_Panel {
	struct UOverlay* *d5de3f9630; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_CanvasPanel
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct FUmgWidgetBinder_CanvasPanel : FUmgWidgetBinder_Panel {
	struct UCanvasPanel* CachedCanvasPanel; // 0x20(0x08)
};

// ScriptStruct TslGame.UmgWidgetBinder_Image
// Size: 0x28 (Inherited: 0x18)  [layout: KHOP]
struct FUmgWidgetBinder_Image : FUmgWidgetBinder {
	struct UImage* CachedImage; // 0x18(0x08)
	struct UMaterialInstanceDynamic* CachedMaterial; // 0x20(0x08)
};

// ScriptStruct TslGame.GamepadInputQueueData
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGamepadInputQueueData {
	struct UTextBlock* TextWidget; // 0x00(0x08)
	struct UTextBlock* ResponseWidget; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct TslGame.GamepadInputDebugtData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FGamepadInputDebugtData {
	struct UTextBlock* TextWidget; // 0x00(0x08)
	enum class GamepadHudDataType E_DataType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StickValue; // 0x0c(0x04)
	bool StickState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString StickName; // 0x18(0x10)
};

// ScriptStruct TslGame.*f218dcdefd
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*f218dcdefd : F*75c6ba3b7a {
	struct FName ItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*75c6ba3b7a
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*75c6ba3b7a {
	enum class ESandboxGroupType *113058f43f; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *bf8de83986; // 0x04(0x04)
};

// ScriptStruct TslGame.*d290344c55
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*d290344c55 {
	enum class ESandboxGroupType *113058f43f; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*b281c7cba0> Categories; // 0x08(0x10)
};

// ScriptStruct TslGame.*b281c7cba0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b281c7cba0 {
	int32 CategoryIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*e17bd76dab> Items; // 0x08(0x10)
};

// ScriptStruct TslGame.*e17bd76dab
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*e17bd76dab {
	int32 *216916d676; // 0x00(0x04)
	int32 *5d61f14532; // 0x04(0x04)
};

// ScriptStruct TslGame.*67e64eee8b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*67e64eee8b {
	enum class ESandboxPowerType Type; // 0x00(0x04)
	bool *ed86d3f0dd; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UParticleSystemComponent* *682d27c964; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxItemDataTable
// Size: 0x68 (Inherited: 0x10)  [layout: LECH - offset chi la uoc luong]
struct FSandboxItemDataTable : FBaseSandboxItemDataTable {
	struct FName CategoryName; // 0x10(0x08)
	struct FStringClassReference *9b1be19bed; // 0x18(0x10)
	struct FName ItemID; // 0x28(0x08)
	struct FString *b4b1513b63; // 0x30(0x10)
	struct FString *657528eb20; // 0x40(0x10)
	struct FString *b8308ce07b; // 0x50(0x10)
	int32 Index; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.BaseSandboxItemDataTable
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FBaseSandboxItemDataTable : FTableRowBase {
	struct FName LogName; // 0x08(0x08)
};

// ScriptStruct TslGame.SandboxL10NDataTable
// Size: 0x48 (Inherited: 0x10)  [layout: LECH - offset chi la uoc luong]
struct FSandboxL10NDataTable : FBaseSandboxItemDataTable {
	struct FString NameSpace; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
	struct FString MsgId; // 0x30(0x10)
	int32 Index; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*b73796e3b5
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b73796e3b5 {
	enum class EStanceMode *e04a1818e7; // 0x00(0x01)
	char pad_1[0x37]; // 0x01(0x37)
};

// ScriptStruct TslGame.*991216c8a1
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*991216c8a1 {
	struct U*69db7c4a75* *662693b00a; // 0x00(0x08)
	struct FName *164fe5863c; // 0x08(0x08)
	struct FName *85765aaa87; // 0x10(0x08)
};

// ScriptStruct TslGame.*894f9941cb
// Size: 0xb8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*894f9941cb {
	float BlurLevel; // 0x00(0x04)
	float ScopeRadiusNear; // 0x04(0x04)
	float ScopeRadiusFar; // 0x08(0x04)
	struct FVector2D ReticleRect; // 0x0c(0x08)
	float ReticleAngularSize; // 0x14(0x04)
	struct FLinearColor ReticleTint; // 0x18(0x10)
	float ReticleGamma; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTexture* ReticleTexture; // 0x30(0x08)
	bool bReticleExtendTextureBorder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct U*79041fa115* ReticleSettings; // 0x40(0x08)
	float ScopeLensDistortion; // 0x48(0x04)
	float ScopeLensCA; // 0x4c(0x04)
	struct FLinearColor ScopeLensTint; // 0x50(0x10)
	float ScopeOuterBrightness; // 0x60(0x04)
	float DepthBlurPower; // 0x64(0x04)
	float DepthBlurWhitePoint; // 0x68(0x04)
	float DepthBlurBlackPoint; // 0x6c(0x04)
	struct FVector2D RelativeOffsetMap; // 0x70(0x08)
	float ParallaxMovementScale; // 0x78(0x04)
	float ParallaxRadiusScale; // 0x7c(0x04)
	float BloomIntensity; // 0x80(0x04)
	float NearClipStaticOffset; // 0x84(0x04)
	float NearClipMinClamp; // 0x88(0x04)
	struct FVector WeaponCycleCameraOffset; // 0x8c(0x0c)
	struct FReticleBrightSceneVisibility BrightSceneVisibility; // 0x98(0x0c)
	bool *afc52180b5; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct UTexture2D* ReticleMaskTexture; // 0xa8(0x08)
	bool *af3b61208e; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.ReticleBrightSceneVisibility
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FReticleBrightSceneVisibility {
	float LuminanceMultiplier; // 0x00(0x04)
	float OpacityMultiplier; // 0x04(0x04)
	float OpacityMultiplierLowResolution; // 0x08(0x04)
};

// ScriptStruct TslGame.*c0eefbf577
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c0eefbf577 {
	enum class ESpecialZoneType SpecialZoneType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *a9b97e42b1; // 0x04(0x04)
	float *4dc6c9c4fe; // 0x08(0x04)
	float *71d4466706; // 0x0c(0x04)
	int32 *597cef6ee4; // 0x10(0x04)
	float *9242c576b4; // 0x14(0x04)
};

// ScriptStruct TslGame.*4a9f7a997d
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4a9f7a997d {
	struct FVector2D *877b80ca79; // 0x00(0x08)
	struct ATslSpecialZoneActor* *743a1cb97e; // 0x08(0x08)
};

// ScriptStruct TslGame.CKOTaskDataRow
// Size: 0x98 (Inherited: 0x08)  [layout: KHOP]
struct FCKOTaskDataRow : FTableRowBase {
	struct FCKOTaskData Data; // 0x08(0x90)
};

// ScriptStruct TslGame.CKOTaskData
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct FCKOTaskData {
	struct UAnimMontage* CKOFinisherMontage; // 0x00(0x20)
	struct U*fd1a5f138d* CKOFinisherMovingCurveOnServer; // 0x20(0x08)
	float CKOFinisherStartZOffset; // 0x28(0x04)
	float CKOFinisherStartYawOffset; // 0x2c(0x04)
	struct UAnimMontage* CKOTargetMontage; // 0x30(0x20)
	float CKOTargetStartYawOffset; // 0x50(0x04)
	struct FVector CKOTargetStartPositionOffset; // 0x54(0x0c)
	struct U*fd1a5f138d* CKOTargetMovingCurveOnServer; // 0x60(0x08)
	float PlayRate; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct ULevelSequence* CKOSequence; // 0x70(0x20)
};

// ScriptStruct TslGame.CKOSubTask
// Size: 0xf0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCKOSubTask {
	struct FVector *b553fd1b09; // 0x00(0x0c)
	float *ce9f15cbfc; // 0x0c(0x04)
	struct U*fd1a5f138d* *b5ea605637; // 0x10(0x08)
	struct ATslCharacter* Target; // 0x18(0x08)
	struct FTransform *b3c1fd9cc7; // 0x20(0x30)
	struct FVector *790ee0508e; // 0x50(0x0c)
	bool *9a35f8b952; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UPrimitiveComponent* *7f4dcc0de3; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform *505bc2aec4; // 0x70(0x30)
	struct FTransform *6552f6bce5; // 0xa0(0x30)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FStringAssetReference PlayMontage; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct TslGame.*7396147815
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7396147815 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct TslGame.*ad5f2f6ca9
// Size: 0xc0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ad5f2f6ca9 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UClass* *9d93d70de2; // 0x08(0x08)
	struct TMap<struct FName, struct ATslParticle*> *7361f4354c; // 0x10(0x50)
	struct UClass* *e21f9c3e3b; // 0x60(0x08)
	struct TMap<struct FName, struct ATslParticle*> *6ece5523b8; // 0x68(0x50)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct TslGame.*c29fce28da
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct F*c29fce28da {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*29a99e44e7 *a473e0dd22; // 0x08(0x78)
	TScriptInterface<struct UTslVehicleInterface> *077a36649a; // 0x80(0x10)
	struct TArray<enum class ECharacterNegativeEffects> *5c91add556; // 0x90(0x10)
	float *d39f1f0540; // 0xa0(0x04)
	bool *d0c110b6d8; // 0xa4(0x01)
	bool *ab4ba39cb1; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct FString *51336e71d1; // 0xa8(0x10)
};

// ScriptStruct TslGame.*da5dc7d321
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*da5dc7d321 {
	bool *006f4d964d; // 0x00(0x01)
	bool *04ea77eeae; // 0x01(0x01)
	bool *f4a3d3b4d3; // 0x02(0x01)
	bool *5037d593cf; // 0x03(0x01)
};

// ScriptStruct TslGame.*ee4cb56b4c
// Size: 0x05 (Inherited: 0x00)  [layout: KHOP]
struct F*ee4cb56b4c {
	bool *13412cd063; // 0x00(0x01)
	bool *3ca588e75d; // 0x01(0x01)
	bool *a78bed1f8d; // 0x02(0x01)
	bool *ed8d172edc; // 0x03(0x01)
	bool *9658023f68; // 0x04(0x01)
};

// ScriptStruct TslGame.*9333c672c4
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*9333c672c4 {
	float *59973cc742; // 0x00(0x04)
	float TotalTime; // 0x04(0x04)
	bool *1e6eeaf17a; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText *12ccd8d072; // 0x10(0x18)
	enum class ECastAnim *d4368d4fe2; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct UObject* *ed76e3bcb0; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UTexture* *e43c71ff73; // 0x38(0x08)
};

// ScriptStruct TslGame.*7f671b70ce
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7f671b70ce {
	struct FName *a698bac73d; // 0x00(0x08)
	struct FName *360f2f1276; // 0x08(0x08)
	enum class EEmotePlayType *802110f7c3; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *4a50e2f939; // 0x14(0x04)
	bool *ea413ae933; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*4e5364fba9
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*4e5364fba9 {
	float BoostGauge; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* Buff; // 0x08(0x08)
	struct FName OverlapId; // 0x10(0x08)
};

// ScriptStruct TslGame.*05fa7d6204
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*05fa7d6204 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*ccbc31ebd4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ccbc31ebd4 {
	struct UAnimMontage* *6cc8d6b25f; // 0x00(0x08)
	struct UAnimMontage* *32ddf0bedc; // 0x08(0x08)
};

// ScriptStruct TslGame.ReplayRecordTargetEvent
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FReplayRecordTargetEvent {
	struct FString RecordTargetNetId; // 0x00(0x10)
	struct FString RecordTargetName; // 0x10(0x10)
};

// ScriptStruct TslGame.ReplayPlayerRejoinEvent
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FReplayPlayerRejoinEvent {
	struct FString RejoinedPlayerNetId; // 0x00(0x10)
	struct FString RejoinedPlayerName; // 0x10(0x10)
};

// ScriptStruct TslGame.ReplayCharacterReviveEvent
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FReplayCharacterReviveEvent {
	struct FString RevivedPlayerNetId; // 0x00(0x10)
	struct FString RevivedPlayerName; // 0x10(0x10)
};

// ScriptStruct TslGame.ReplayEtceteraEvent
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FReplayEtceteraEvent {
	struct FString EtceteraEventCode; // 0x00(0x10)
	struct FString TargetNetId; // 0x10(0x10)
	struct FString TargetName; // 0x20(0x10)
};

// ScriptStruct TslGame.ReplayEvent
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FReplayEvent {
	struct FString InstigatorNetId; // 0x00(0x10)
	struct FString InstigatorName; // 0x10(0x10)
	struct FString VictimNetId; // 0x20(0x10)
	struct FString VictimName; // 0x30(0x10)
	struct FString DamageCauseClassName; // 0x40(0x10)
	struct FString DamageTypeCategory; // 0x50(0x10)
	struct FString DamageReason; // 0x60(0x10)
	bool bDBNO; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString InstigatorPlayerId; // 0x78(0x10)
	struct FString VictimPlayerId; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
};

// ScriptStruct TslGame.BodyTypeDef
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FBodyTypeDef {
	int32 *d95fdc128d; // 0x00(0x04)
	int32 *c41e65140f; // 0x04(0x04)
};

// ScriptStruct TslGame.*62706e2e7c
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*62706e2e7c {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*f4e32625d5
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f4e32625d5 {
	struct FName EmoteName; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	int32 *cf62891e0a; // 0x10(0x04)
	enum class EEmotePlayType PlayType; // 0x14(0x01)
	bool *e00e4e2089; // 0x15(0x01)
	bool *ea413ae933; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct TslGame.*66fd6e6022
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*66fd6e6022 {
	enum class EWeaponAttachmentSlotID *c8afe43f25; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*954dea4270
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*954dea4270 {
	struct FName WeaponTag; // 0x00(0x08)
	struct UStaticMesh* AttachmentMeshAsset; // 0x08(0x20)
	struct FWeaponAttachmentData AttachmentData; // 0x28(0x80)
};

// ScriptStruct TslGame.WeaponAttachmentData
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponAttachmentData {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AttachmentTag; // 0x08(0x08)
	struct FName Name; // 0x10(0x08)
	int32 GripType_MN; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UParticleSystem* MuzzleFx; // 0x20(0x08)
	struct FName MuzzleAttachPoint; // 0x28(0x08)
	enum class *807a73deb5 WeaponGripLeft; // 0x30(0x01)
	bool bIsSuppressor; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FStringAssetReference MuzzleSound; // 0x38(0x10)
	struct UAnimMontage* CharacterReloadTactical; // 0x48(0x08)
	struct UAnimMontage* WeaponReloadTactical; // 0x50(0x08)
	struct UAnimMontage* CharacterReloadCharge; // 0x58(0x08)
	struct UAnimMontage* WeaponReloadCharge; // 0x60(0x08)
	bool bThermalTemperatureInteractive; // 0x68(0x01)
	bool bBlocksGameplayTracers; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TArray<struct F*0db8eb110f> *006273bf75; // 0x70(0x10)
};

// ScriptStruct TslGame.*0db8eb110f
// Size: 0x268 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0db8eb110f {
	struct FName Name; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	enum class EWeaponCrosshairType *88ab881cc4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName MouseSensitiveName; // 0x28(0x08)
	float MagnificationFOVMaxIncrement; // 0x30(0x04)
	int32 *6255aba69c; // 0x34(0x04)
	float MagnificationFOV; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct F*bd00ab5c88 *134c69f936; // 0x40(0x20)
	struct TArray<float> *5efe3038d9; // 0x60(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> *f832d14160; // 0x70(0x50)
	struct TMap<struct FName, struct U*79041fa115*> *d3bb1e7ec1; // 0xc0(0x50)
	struct U*69db7c4a75* *1ddbe465ee; // 0x110(0x08)
	int32 *b231c7dc88; // 0x118(0x04)
	float *f7c9ff0dab; // 0x11c(0x04)
	float *8e26e0acf3; // 0x120(0x04)
	float *0a933d9c9b; // 0x124(0x04)
	float *7ab023bfbc; // 0x128(0x04)
	float *9cfda8e17a; // 0x12c(0x04)
	float *77f3925014; // 0x130(0x04)
	float *c0838bcd72; // 0x134(0x04)
	float *a62960a7ae; // 0x138(0x04)
	float *554996bd77; // 0x13c(0x04)
	float *0606eccd6f; // 0x140(0x04)
	float *9cd0f9ebdf; // 0x144(0x04)
	float *9caf9c6eed; // 0x148(0x04)
	struct FVector *9428c0e06f; // 0x14c(0x0c)
	struct TMap<struct FName, struct FName> *6ae59895de; // 0x158(0x50)
	float *e2967249b0; // 0x1a8(0x04)
	bool *053d9c3489; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct TMap<int32, struct FVector2D> *0abc39ebe8; // 0x1b0(0x50)
	float *835a46e29c; // 0x200(0x04)
	float *6163ed5602; // 0x204(0x04)
	float *88be9d710a; // 0x208(0x04)
	float *7597b35f1c; // 0x20c(0x04)
	bool *2b0c7303a0; // 0x210(0x01)
	bool *e8a4da1402; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct TArray<struct F*b16b0193d8> *4192b20008; // 0x218(0x10)
	struct F*ff27b58425 *ff27b58425; // 0x228(0x3c)
	char pad_264[0x4]; // 0x264(0x04)
};

// ScriptStruct TslGame.*ff27b58425
// Size: 0x3c (Inherited: 0x00)  [layout: KHOP]
struct F*ff27b58425 {
	bool GlintEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D GlintStartFade; // 0x04(0x08)
	struct FVector ScopeEndPositionLS; // 0x0c(0x0c)
	float ScopeRadiusLS; // 0x18(0x04)
	float GlintRadiusScreen; // 0x1c(0x04)
	float ScopeRadiusScreen; // 0x20(0x04)
	struct FLinearColor GlintColor; // 0x24(0x10)
	struct FVector2D GlintVisibilityArcLength; // 0x34(0x08)
};

// ScriptStruct TslGame.*b16b0193d8
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b16b0193d8 {
	float ReticleAngularSize; // 0x00(0x04)
	struct FVector2D ReticleCenter; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* ReticleTexture; // 0x10(0x08)
	bool bUseHaloTexture; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float HaloTextureScale; // 0x1c(0x04)
	struct FVector ReticleColor; // 0x20(0x0c)
	float ReticleScale; // 0x2c(0x04)
	float BrightSceneLuminanceMultiplier; // 0x30(0x04)
	float BrightSceneOpacityMultiplier; // 0x34(0x04)
	float BrightSceneOpacityMultiplierLowResolution; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct TslGame.*bd00ab5c88
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*bd00ab5c88 {
	struct U*5e2750edbb* ReticleBrightnessSettingsCurve; // 0x00(0x08)
	struct FName ReticleBrightnessParamX; // 0x08(0x08)
	struct FName ReticleBrightnessParamY; // 0x10(0x08)
	struct FName ReticleBrightnessParamZ; // 0x18(0x08)
};

// ScriptStruct TslGame.*2a5ed06a38
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*2a5ed06a38 {
	enum class EWeaponAttachmentSlotID Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *c9327d8567; // 0x08(0x10)
	struct TArray<struct FName> *18c640521c; // 0x18(0x10)
};

// ScriptStruct TslGame.*f6a334a3a2
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f6a334a3a2 {
	enum class EWeaponAttachmentSlotID *d33c81e4e5; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *0faddac266; // 0x08(0x08)
	struct TArray<struct F*ad14a8bd6a> *ddd37afecf; // 0x10(0x10)
};

// ScriptStruct TslGame.*ad14a8bd6a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ad14a8bd6a {
	struct FName *01a8b3273c; // 0x00(0x08)
	struct FName *0faddac266; // 0x08(0x08)
};

// ScriptStruct TslGame.*5522c807a1
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*5522c807a1 {
	enum class EWeaponAttachmentSlotID *d33c81e4e5; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> *25ca8d073b; // 0x08(0x10)
};

// ScriptStruct TslGame.*bcb6bd888f
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bcb6bd888f {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct TslGame.*d35e837f1e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*d35e837f1e {
	struct UAnimMontage* *da18397e99; // 0x00(0x08)
	struct UAnimMontage* *4a1dd56300; // 0x08(0x08)
	struct UAnimMontage* Pickup; // 0x10(0x08)
};

// ScriptStruct TslGame.*5f4ea218f7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5f4ea218f7 {
	struct UAnimMontage* RollLeft; // 0x00(0x08)
	struct UAnimMontage* RollRight; // 0x08(0x08)
};

// ScriptStruct TslGame.*2930faefc3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2930faefc3 {
	struct UAnimMontage* *9d6e1feb16; // 0x00(0x08)
	struct UAnimMontage* *f999af9d86; // 0x08(0x08)
};

// ScriptStruct TslGame.*76e88772fe
// Size: 0x2c0 (Inherited: 0x00)  [layout: KHOP]
struct F*76e88772fe {
	float *a8b5bcbf78; // 0x00(0x04)
	struct FRotator *39451f329e; // 0x04(0x0c)
	struct TArray<float> *741a9e6e4d; // 0x10(0x10)
	float *b135b426f0; // 0x20(0x04)
	bool *4ab0d8aa2c; // 0x24(0x01)
	bool *b09e89190a; // 0x25(0x01)
	bool *43547164f0; // 0x26(0x01)
	bool *e2f3de0b13; // 0x27(0x01)
	bool *3e116f8647; // 0x28(0x01)
	bool *4760d5a52f; // 0x29(0x01)
	bool *d34da5d503; // 0x2a(0x01)
	bool *231076a75c; // 0x2b(0x01)
	bool *e9c68ffe92; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *727e76363f; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* *2f54f36f8f; // 0x38(0x08)
	struct UAkAudioEvent* *54077938d6; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform *a349f7a0cb; // 0x50(0x30)
	struct FTransform *96a5002335; // 0x80(0x30)
	struct FTransform *24d2e578aa; // 0xb0(0x30)
	struct FTransform *efca12e79f; // 0xe0(0x30)
	bool *2130fb703d; // 0x110(0x01)
	bool *bf3e683cbe; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	struct FVector *24a4ee34c3; // 0x114(0x0c)
	bool *4be9544d3a; // 0x120(0x01)
	bool *218709efc5; // 0x121(0x01)
	bool *6040aaff7f; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	float *497ddab4b3; // 0x124(0x04)
	bool *365b3658de; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *eaa63cbb37; // 0x12c(0x04)
	bool *9ad3c512cb; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *5c6ce16cbc; // 0x134(0x04)
	SetProperty *6ac39f47d6; // 0x138(0x50)
	enum class EThrownWeaponType *d194e75db0; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float *6f0b2c9722; // 0x18c(0x04)
	struct TMap<enum class EScopeType, struct FVector2D> *d53a8834c5; // 0x190(0x50)
	bool *25d1c4d625; // 0x1e0(0x01)
	char pad_1E1[0x3]; // 0x1e1(0x03)
	float *a13eccb514; // 0x1e4(0x04)
	bool *3fa0066e6c; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float *09cdb237a9; // 0x1ec(0x04)
	enum class EWeaponClass *37178ea754; // 0x1f0(0x01)
	bool DestructibleDoor; // 0x1f1(0x01)
	char pad_1F2[0x2]; // 0x1f2(0x02)
	float TargetingFOV; // 0x1f4(0x04)
	enum class EAnimWeaponSpecificClass *a1f2a0b4df; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float *33831e316d; // 0x1fc(0x04)
	struct FVector *0da36e9ea0; // 0x200(0x0c)
	float *6abfd8c724; // 0x20c(0x04)
	struct UAnimMontage* *30740723f0; // 0x210(0x08)
	float *409a9f8b4f; // 0x218(0x04)
	enum class EWeaponClass *e2a050f8cd; // 0x21c(0x01)
	enum class *807a73deb5 *7ea3f667a3; // 0x21d(0x01)
	char pad_21E[0x2]; // 0x21e(0x02)
	float *829b705d28; // 0x220(0x04)
	float *16e29c3e6a; // 0x224(0x04)
	bool *fdb17b06ba; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float *0ba58d9c77; // 0x22c(0x04)
	bool *05c8e7ad92; // 0x230(0x01)
	bool *aad9117ca0; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)
	struct TMap<enum class ECustomGripBlendSpaceType, struct F*e21e1ffd51> *2cebe0958a; // 0x238(0x50)
	float *4e55c7f1d9; // 0x288(0x04)
	float *8cd8d5b960; // 0x28c(0x04)
	struct FName *55094422d1; // 0x290(0x08)
	bool *77f4eb67e2; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FName *922d5e9361; // 0x2a0(0x08)
	float *36e0542b1b; // 0x2a8(0x04)
	float *ec6ded3428; // 0x2ac(0x04)
	struct FRotator *9239a52e48; // 0x2b0(0x0c)
	float *d951b7c98d; // 0x2bc(0x04)
};

// ScriptStruct TslGame.*f392217dda
// Size: 0xc0 (Inherited: 0x28)  [layout: KHOP]
struct F*f392217dda : F*46244e2a8c {
	struct UObject* CharmAsset; // 0x28(0x20)
	struct UStaticMesh* CharmAssetStatic; // 0x48(0x20)
	struct UClass* CharmAnimBlueprint; // 0x68(0x08)
	struct TMap<struct FName, struct UMaterialInterface*> MaterialOverrides; // 0x70(0x50)
};

// ScriptStruct TslGame.*46244e2a8c
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*46244e2a8c : FTableRowBase {
	struct FText MasteryItemName; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*a6d32151e5
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*a6d32151e5 {
	uint16 *b8f545031d; // 0x00(0x02)
	uint16 MeshId; // 0x02(0x02)
};

// ScriptStruct TslGame.*43af33c2b7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*43af33c2b7 {
	struct FName ItemID; // 0x00(0x08)
	struct UClass* *e2a050f8cd; // 0x08(0x08)
};

// ScriptStruct TslGame.*71507ed90f
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*71507ed90f {
	struct TMap<struct FName, struct UItem*> *f4e3ca9654; // 0x00(0x50)
	struct TMap<int32, struct UItem*> *c769dc714d; // 0x50(0x50)
};

// ScriptStruct TslGame.*2f081e57b7
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*2f081e57b7 {
	struct U*4f9bccdaa5* *4f9bccdaa5; // 0x00(0x20)
	struct U*fe45bf58f3* *fe45bf58f3; // 0x20(0x20)
	struct FStringAssetReference *aaf7e01bd2; // 0x40(0x10)
};

// ScriptStruct TslGame.*909102b24c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*909102b24c {
	struct TArray<struct FStringAssetReference> container; // 0x00(0x10)
};

// ScriptStruct TslGame.WeaponSoundConfig
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponSoundConfig {
	struct UAkAudioEvent* *e875763ba0; // 0x00(0x08)
	struct UAkAudioEvent* *b7129082c8; // 0x08(0x08)
	struct FVector2D *afdab369b8; // 0x10(0x08)
	struct UAkAudioEvent* *0cec634d2b; // 0x18(0x08)
	struct UAkAudioEvent* *1da3a8c5dd; // 0x20(0x08)
	struct UAkAudioEvent* *110e11550a; // 0x28(0x08)
	struct UAkAudioEvent* *69e07c9d71; // 0x30(0x08)
	struct UAkAudioEvent* *9947d87bbe; // 0x38(0x08)
	struct UAkAudioEvent* *fb650a26ff; // 0x40(0x08)
	struct UAkAudioEvent* *10a3c2f530; // 0x48(0x08)
	struct UAkAudioEvent* *8184cae47b; // 0x50(0x08)
	struct UAkAudioEvent* EquipSoundAk_Primary; // 0x58(0x08)
	struct UAkAudioEvent* *952cba3e15; // 0x60(0x08)
	struct UAkAudioEvent* *1c54462ac7; // 0x68(0x08)
	struct UAkAudioEvent* *25ead9f16d; // 0x70(0x08)
	struct UAkAudioEvent* *5c6a2618e6; // 0x78(0x08)
	struct UAkAudioEvent* *92cf75bd22; // 0x80(0x08)
	struct UAkAudioEvent* *0ef2e8256a; // 0x88(0x08)
	char *b62e6889f4 : 1; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UAkAudioEvent* DropAllAttachmentsSoundAk; // 0x98(0x08)
	struct UAkAudioEvent* InventoryPutAllAttachmentsSoundAk; // 0xa0(0x08)
	struct UAkAudioEvent* DropAndInventoryPutAttachmentsSoundAk; // 0xa8(0x08)
	struct UAkAudioEvent* *d2b4e5f1bb; // 0xb0(0x08)
};

// ScriptStruct TslGame.*982f14d16d
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*982f14d16d {
	enum class EWeaponAttachmentSlotID *c8afe43f25; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *bdcfe6a193; // 0x04(0x04)
};

// ScriptStruct TslGame.*73e9925b68
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*73e9925b68 {
	struct TArray<struct F*e873f9fcef> Targets; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*e873f9fcef
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e873f9fcef {
	struct F*77f684027a *624d0988a3; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*ef6d25e96a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*ef6d25e96a {
	struct FName WeaponMasteryCharmSocket; // 0x00(0x08)
	struct FName WeaponMasteryCharmAttachSocket; // 0x08(0x08)
	int32 CharmWeaponLODVisibility; // 0x10(0x04)
	int32 VariantWeaponLODVisibility; // 0x14(0x04)
};

// ScriptStruct TslGame.*8fb6c61a4a
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8fb6c61a4a {
	struct UClass* *0b2d2f988d; // 0x00(0x08)
	bool *4399749edf; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *83fbf264fe; // 0x10(0x08)
	struct UClass* *589f0af930; // 0x18(0x08)
	struct UClass* Ring; // 0x20(0x08)
	struct FName *8cf739f9d6; // 0x28(0x08)
	enum class EProjectileExplosionStartType *4b8e3cba29; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ExplosionDelay; // 0x34(0x04)
	bool *5cddfa49e9; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *ab007a2048; // 0x3c(0x04)
	float FireDelay; // 0x40(0x04)
	float *4df1650377; // 0x44(0x04)
	struct UCurveFloat* *fcef4b062a; // 0x48(0x08)
	float *2eeab57130; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* *96083fa7f2; // 0x58(0x08)
	float *28987bdd2e; // 0x60(0x04)
	float *66db92d494; // 0x64(0x04)
	bool *cd94978e07; // 0x68(0x01)
	bool *844efade72; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct F*d08f71cd8c *94ece30a54; // 0x70(0x28)
	float *4c9d69b6f2; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.*e32a3de0aa
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e32a3de0aa {
	struct UAnimDB* GrenadeArmedHighAnimDB_CP; // 0x00(0x08)
	struct UAnimDB* GrenadeArmedLowAnimDB_CP; // 0x08(0x08)
	struct UAnimDB* GrenadeAnimDB_CP; // 0x10(0x08)
	struct UAnimDB* GrenadeLowAnimDB_CP; // 0x18(0x08)
};

// ScriptStruct TslGame.*a838b76390
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a838b76390 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*28b5fd8024
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*28b5fd8024 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*a81db7898f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a81db7898f {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*f4a432086b
// Size: 0xf0 (Inherited: 0x00)  [layout: KHOP]
struct F*f4a432086b {
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *498ee6b9d1; // 0x00(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *3e432836c1; // 0x50(0x50)
	struct TMap<enum class EMovingState, struct UAnimSequenceBase*> *7f0e007cef; // 0xa0(0x50)
};

// ScriptStruct TslGame.*054b915e7b
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*054b915e7b {
	struct TMap<enum class EThrowableState, struct F*c8f07d6569> *e474df4a62; // 0x00(0x50)
};

// ScriptStruct TslGame.*6530a822bc
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*6530a822bc {
	struct TMap<struct FName, struct FString> *5df029d30e; // 0x00(0x50)
};

// ScriptStruct TslGame.*eac2e1ffb6
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eac2e1ffb6 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*a8e53c370c
// Size: 0x08 (Inherited: 0x08)  [layout: KHOP]
struct F*a8e53c370c : F*eac2e1ffb6 {
};

// ScriptStruct TslGame.*a685255bd8
// Size: 0x08 (Inherited: 0x08)  [layout: KHOP]
struct F*a685255bd8 : F*eac2e1ffb6 {
};

// ScriptStruct TslGame.*eed9404ee2
// Size: 0x08 (Inherited: 0x08)  [layout: KHOP]
struct F*eed9404ee2 : F*eac2e1ffb6 {
};

// ScriptStruct TslGame.*0d74d8b244
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*0d74d8b244 {
	int32 *b215786aee; // 0x00(0x04)
	int32 *f0ab6bdd3f; // 0x04(0x04)
	int32 *02fbc77a54; // 0x08(0x04)
	float *29343a5676; // 0x0c(0x04)
	float *ae04a00faf; // 0x10(0x04)
	float *c6c4833a40; // 0x14(0x04)
	float *86b62cd8c9; // 0x18(0x04)
	float *6508eb7d89; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ecf0325b7c
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*ecf0325b7c {
	float Stand[0x03]; // 0x00(0x0c)
	float Crouch[0x03]; // 0x0c(0x0c)
	float Prone[0x03]; // 0x18(0x0c)
};

// ScriptStruct TslGame.*efabc25bca
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*efabc25bca {
	struct TArray<enum class *e6603ebfde> *f068eb2e74; // 0x00(0x10)
};

// ScriptStruct TslGame.*7ecfec5ebf
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7ecfec5ebf {
	enum class *e6603ebfde ActionType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
};

// ScriptStruct TslGame.AttackMode
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FAttackMode {
	float *63e16495e9; // 0x00(0x04)
	int32 AttackId; // 0x04(0x04)
	float *8975517179; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EWeaponClass> *9232bec037; // 0x10(0x10)
};

// ScriptStruct TslGame.*af69e3907c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*af69e3907c {
	int32 AreaID; // 0x00(0x04)
	float *3198c0a44d; // 0x04(0x04)
	int32 *4a234a9303; // 0x08(0x04)
	int32 *c07bfd2e7f; // 0x0c(0x04)
};

// ScriptStruct TslGame.*6eeab66ca8
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6eeab66ca8 {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct TslGame.*0ecd55b6b7
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*0ecd55b6b7 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> *ece605f282; // 0x08(0x10)
};

// ScriptStruct TslGame.*fd9f330ad8
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fd9f330ad8 {
	struct FName *50c911f2ee; // 0x00(0x08)
	int32 *58b4069703; // 0x08(0x04)
	int32 *ac7c8750bf; // 0x0c(0x04)
	int32 *3bb900300b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*aee1845a09
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*aee1845a09 {
	float Distance; // 0x00(0x04)
	enum class ETargetingType TargetingMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*18d6ca3eed
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*18d6ca3eed {
	int32 *6f1a8b8c66; // 0x00(0x04)
	float *6f99d489f4; // 0x04(0x04)
	struct TArray<struct F*65bf84f47a> *6dfae2e7cc; // 0x08(0x10)
};

// ScriptStruct TslGame.*65bf84f47a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*65bf84f47a {
	int32 *034bc205fb; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*1c8ca61b63> Item; // 0x08(0x10)
};

// ScriptStruct TslGame.*1c8ca61b63
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1c8ca61b63 {
	enum class EAIEquipSpawnItemType *5158a89185; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Item; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8f1f983a6b
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*8f1f983a6b {
	enum class EAITriggerAttrType *78074f8e17; // 0x00(0x01)
	enum class EAIAttrCompareType CompareType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 *e3f97fb0a7; // 0x04(0x04)
};

// ScriptStruct TslGame.*dc8724e7e4
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*dc8724e7e4 {
	int32 Probability; // 0x00(0x04)
	int32 *b09231b08f; // 0x04(0x04)
};

// ScriptStruct TslGame.*688cba669c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*688cba669c {
	struct FRotator *8a71ec7607; // 0x00(0x0c)
	struct FRotator *e13b08c5a4; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*71cf2d0270
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*71cf2d0270 {
	struct UCurveFloat* *fcef4b062a; // 0x00(0x08)
	float *39c7958eab; // 0x08(0x04)
	float *7b7aaac544; // 0x0c(0x04)
	float *f6e05665b6; // 0x10(0x04)
	float MaxSpeed; // 0x14(0x04)
	float *7df387cbae; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e8ee4b9f08
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*e8ee4b9f08 {
	bool *187e8eaff1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *f0431d0591; // 0x04(0x04)
	bool *ba5395778e; // 0x08(0x01)
	bool *d5f1301457; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *89b794b0f6; // 0x0c(0x04)
	float *0e1d241b12; // 0x10(0x04)
	float *01431e393f; // 0x14(0x04)
};

// ScriptStruct TslGame.*0ac022a689
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0ac022a689 {
	float *9953c26b84; // 0x00(0x04)
	float *49d849f1f6; // 0x04(0x04)
	float *bec9221449; // 0x08(0x04)
	float *bca4459c7e; // 0x0c(0x04)
};

// ScriptStruct TslGame.AscenderMovementSettings
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FAscenderMovementSettings {
	float UpwardAcceleration; // 0x00(0x04)
	float DownwardAcceleration; // 0x04(0x04)
	float DownwardAccelerationSprinting; // 0x08(0x04)
	float Friction; // 0x0c(0x04)
	float BrakingFriction; // 0x10(0x04)
	float MaxVelocityUp; // 0x14(0x04)
	float MaxVelocityDown; // 0x18(0x04)
	float MaxVelocityDownSprint; // 0x1c(0x04)
};

// ScriptStruct TslGame.*ee7ec280b1
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*ee7ec280b1 {
	float Distance; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotator; // 0x10(0x0c)
};

// ScriptStruct TslGame.*b0453bc0e7
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b0453bc0e7 {
	struct FVector *b58a709f82; // 0x00(0x0c)
	struct FVector *11117f2c3f; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*e113ecc4b0
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e113ecc4b0 {
	float FPPViewYawMin; // 0x00(0x04)
	float FPPViewYawMax; // 0x04(0x04)
	float FPPViewPitchMin; // 0x08(0x04)
	float FPPViewPitchMax; // 0x0c(0x04)
	float TPPViewYawMin; // 0x10(0x04)
	float TPPViewYawMax; // 0x14(0x04)
	float TPPViewPitchMin; // 0x18(0x04)
	float TPPViewPitchMax; // 0x1c(0x04)
};

// ScriptStruct TslGame.*983c119d06
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*983c119d06 {
	float *9ab72957e8; // 0x00(0x04)
	float *81693775a7; // 0x04(0x04)
	float *cfbc6c6293; // 0x08(0x04)
	enum class EAscenderDirection Direction; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*ac19cf208d
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*ac19cf208d {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse Response; // 0x01(0x01)
};

// ScriptStruct TslGame.*59427a1a3a
// Size: 0xa8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*59427a1a3a {
	bool bUseBurstRecoilMap; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D BurstRecoilInMap; // 0x04(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x0c(0x08)
	float RecoilKickADS; // 0x14(0x04)
	float RecoilKick_MovementSpeedMax; // 0x18(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0x1c(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0x20(0x0c)
	float DeviationRecoilGain; // 0x2c(0x04)
	float DeviationRecoilGainAim; // 0x30(0x04)
	float DeviationRecoilGainADS; // 0x34(0x04)
	float VerticalRecoilMin; // 0x38(0x04)
	float VerticalRecoilMax; // 0x3c(0x04)
	float VerticalRecoilRecoveryMin; // 0x40(0x04)
	float VerticalRecoilVariation; // 0x44(0x04)
	float VerticalRecoveryModifier; // 0x48(0x04)
	float VerticalRecoveryClamp; // 0x4c(0x04)
	float VerticalRecoveryMax; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct U*5e2750edbb* RecoilCurve; // 0x58(0x08)
	float RecoilSpeed_Vertical; // 0x60(0x04)
	float RecoilSpeed_Horizontal; // 0x64(0x04)
	float RecoverySpeed_Vertical; // 0x68(0x04)
	float RecoilValue_Climb; // 0x6c(0x04)
	float RecoilValue_Fall; // 0x70(0x04)
	float RecoilModifier_Stand; // 0x74(0x04)
	float RecoilModifier_Crouch; // 0x78(0x04)
	float RecoilModifier_Prone; // 0x7c(0x04)
	float RecoilHorizontalMinScalar; // 0x80(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x84(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x8c(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x94(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.WeaponAnimConfig
// Size: 0x1c8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FWeaponAnimConfig {
	char *c1ae867a76 : 1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBlendSpace1D* *36df5f7197; // 0x08(0x08)
	struct UBlendSpaceBase* *cd026a8d57; // 0x10(0x08)
	struct UAnimMontage* *0b88ca036d; // 0x18(0x08)
	struct UAnimMontage* *b11cd6c04a; // 0x20(0x08)
	struct UAnimMontage* *5097aa2ac7; // 0x28(0x08)
	struct UAnimMontage* *4efbbdf457; // 0x30(0x08)
	struct UAnimMontage* *da6bf00a97; // 0x38(0x08)
	struct UAnimMontage* *d620bed304; // 0x40(0x08)
	struct UAnimMontage* *c3990689e9; // 0x48(0x08)
	struct UAnimMontage* *0977c12f54; // 0x50(0x08)
	struct UAnimMontage* *6fe87a7489; // 0x58(0x08)
	struct UAnimMontage* *c95ec1aa24; // 0x60(0x08)
	struct UAnimMontage* *993e8c1ea6; // 0x68(0x08)
	struct UBlendSpaceBase* *4d47528913; // 0x70(0x08)
	struct UBlendSpaceBase* *40aa703aff; // 0x78(0x08)
	enum class EWeaponClass *1ca4715e6e; // 0x80(0x01)
	bool *ba824c1455; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float *238b83eb03; // 0x84(0x04)
	float *475f50181a; // 0x88(0x04)
	float *a175a4b49b; // 0x8c(0x04)
	float *4031db21b3; // 0x90(0x04)
	float *81ce55342f; // 0x94(0x04)
	bool *be42dbffbc; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float *6b77627177; // 0x9c(0x04)
	float *211fcd8bf3; // 0xa0(0x04)
	float *47cd72010b; // 0xa4(0x04)
	bool *0709d9db69; // 0xa8(0x01)
	bool *4499586bda; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	int32 *bc50f681e2; // 0xac(0x04)
	struct UClass* *a30249d62e; // 0xb0(0x08)
	struct UClass* *2da9c1a893; // 0xb8(0x08)
	struct UClass* *65804bd4bc; // 0xc0(0x08)
	struct UClass* *65808a7a24; // 0xc8(0x08)
	float RecoilKickADS; // 0xd0(0x04)
	float RecoilKick_MovementSpeedMax; // 0xd4(0x04)
	float RecoilKick_MovementMaxMultiplier; // 0xd8(0x04)
	struct FVector RecoilADSSocketOffsetScale; // 0xdc(0x0c)
	struct FVector *5c656fad1a; // 0xe8(0x0c)
	struct FVector *edd45d919d; // 0xf4(0x0c)
	float *75a7d8c86b; // 0x100(0x04)
	float *0108c29e48; // 0x104(0x04)
	bool bUseBurstRecoilMap; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FVector2D BurstRecoilInMap; // 0x10c(0x08)
	struct FVector2D BurstRecoilOutMap; // 0x114(0x08)
	float *64e7417ab6; // 0x11c(0x04)
	struct TMap<enum class EAnimStance, float> *35f881f9df; // 0x120(0x50)
	struct TMap<enum class EAnimStance, float> *d246d79c0e; // 0x170(0x50)
	float *e446d40cc2; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
};

// ScriptStruct TslGame.WeaponDeviationConfig
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct FWeaponDeviationConfig {
	float *7981c2a4ec; // 0x00(0x04)
	float *12d9dbcda7; // 0x04(0x04)
	float *b5a6ac6106; // 0x08(0x04)
	float DeviationRecoilGain; // 0x0c(0x04)
	float DeviationRecoilGainAim; // 0x10(0x04)
	float DeviationRecoilGainADS; // 0x14(0x04)
	float *8538f8e7b5; // 0x18(0x04)
	float *b58e7f498d; // 0x1c(0x04)
	float *5cd443e164; // 0x20(0x04)
	float *be63816818; // 0x24(0x04)
	float *8cfea9229e; // 0x28(0x04)
	float *9869478bc0; // 0x2c(0x04)
	float *2d18e8dd97; // 0x30(0x04)
	float *5a8a36231e; // 0x34(0x04)
	float *85ac3d801c; // 0x38(0x04)
	float *183a1f8d62; // 0x3c(0x04)
	float *62f9f7ab8c; // 0x40(0x04)
	float *bb2acd52e2; // 0x44(0x04)
	float *3e4d00aa9a; // 0x48(0x04)
	float *043e1ee129; // 0x4c(0x04)
	float *30e025d61b; // 0x50(0x04)
	float *aadfdfc933; // 0x54(0x04)
	float *78685c92d2; // 0x58(0x04)
	float *58fa0f4890; // 0x5c(0x04)
	float *660b4bf3bb; // 0x60(0x04)
	float *3e432218cb; // 0x64(0x04)
	float *d9e1c721b0; // 0x68(0x04)
	float *4da5c74eed; // 0x6c(0x04)
};

// ScriptStruct TslGame.*74580a8d76
// Size: 0x2b0 (Inherited: 0x00)  [layout: KHOP]
struct F*74580a8d76 {
	struct FName *50c911f2ee; // 0x00(0x08)
	struct UParticleSystem* *9a1e434734; // 0x08(0x08)
	int32 *ec8d7ac3b4; // 0x10(0x04)
	int32 *dcbd3fd9a0; // 0x14(0x04)
	bool bUseGameplayTracers; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* GameplayTracerClassOverride; // 0x20(0x08)
	int32 GameplayTracerAmmoModOverride; // 0x28(0x04)
	int32 GameplayTracerAmmoMinOverride; // 0x2c(0x04)
	int32 *b231c7dc88; // 0x30(0x04)
	float TimeBetweenShots; // 0x34(0x04)
	struct TArray<struct F*5522c807a1> AttachmentTagData; // 0x38(0x10)
	int32 RPM; // 0x48(0x04)
	float MaxTimeToEndBlockFiring; // 0x4c(0x04)
	struct TMap<enum class EFiringMode, float> TimeBetweenShotsOverride; // 0x50(0x50)
	bool bUseTimeBetweenBursts; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float TimeBetweenBursts; // 0xa4(0x04)
	float NoAnimReloadDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<enum class EFiringMode> *a65c2e8c69; // 0xb0(0x10)
	int32 *8eb85ca42a; // 0xc0(0x04)
	float *1d88128150; // 0xc4(0x04)
	int32 BulletPerFiring; // 0xc8(0x04)
	float *312b9646fd; // 0xcc(0x04)
	bool *13aafe56e4; // 0xd0(0x01)
	bool *433c3b2cae; // 0xd1(0x01)
	enum class EWeaponReloadMethod *d6591e84b5; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float *41e60174b6; // 0xd4(0x04)
	float *1e5983b01a; // 0xd8(0x04)
	float *9cd0f9ebdf; // 0xdc(0x04)
	float *9caf9c6eed; // 0xe0(0x04)
	float *743edd13b8; // 0xe4(0x04)
	float *c08ed6daf3; // 0xe8(0x04)
	float *67f52ca0ec; // 0xec(0x04)
	float *cb7efc7347; // 0xf0(0x04)
	float *bd56b3c41f; // 0xf4(0x04)
	bool *514a3036ff; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FVector *3cb89fbb22; // 0xfc(0x0c)
	struct FVector *bf805c3563; // 0x108(0x0c)
	struct FVector *d7112bd2d1; // 0x114(0x0c)
	bool *925a8cf1f5; // 0x120(0x01)
	bool *f931196c20; // 0x121(0x01)
	bool *befa1461ff; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	float *fbdc4e6faa; // 0x124(0x04)
	bool *05140a95b7; // 0x128(0x01)
	bool *5ff5db525e; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct TMap<int32, struct FVector2D> *5123c565d8; // 0x130(0x50)
	float *bb68dda329; // 0x180(0x04)
	float *e608ca38e5; // 0x184(0x04)
	bool *67d8d4a085; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float *cd2d283073; // 0x18c(0x04)
	float *fc7f0e1a78; // 0x190(0x04)
	float *cd03781e9a; // 0x194(0x04)
	float *95dbd5ea15; // 0x198(0x04)
	float *288d8bb042; // 0x19c(0x04)
	float *dd86812c13; // 0x1a0(0x04)
	float *f147f5d45b; // 0x1a4(0x04)
	float *28cc16f720; // 0x1a8(0x04)
	bool *2d69ef6c86; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	float *b1034698a3; // 0x1b0(0x04)
	bool *e050bd5835; // 0x1b4(0x01)
	bool *a188f280e9; // 0x1b5(0x01)
	bool *2b1b4d6ab2; // 0x1b6(0x01)
	char pad_1B7[0x1]; // 0x1b7(0x01)
	int32 *7f1e32bbf7; // 0x1b8(0x04)
	bool *a105434973; // 0x1bc(0x01)
	bool *3ee2dd164b; // 0x1bd(0x01)
	char pad_1BE[0x2]; // 0x1be(0x02)
	struct TMap<int32, float> *53fa806c82; // 0x1c0(0x50)
	struct TMap<enum class EFiringMode, struct UAkAudioEvent*> *9e07bfa810; // 0x210(0x50)
	struct TMap<enum class EScopeType, float> *bf0e5b6c6d; // 0x260(0x50)
};

// ScriptStruct TslGame.*bed68c4b03
// Size: 0x2d8 (Inherited: 0x290)  [layout: KHOP]
struct F*bed68c4b03 : F*7dff736ba8 {
	struct UTexture* AmmoIcon; // 0x290(0x20)
	float AmmoIconRatio; // 0x2b0(0x04)
	int32 MaxUseCount; // 0x2b4(0x04)
	struct UTexture2D* SimpleIconTexture; // 0x2b8(0x20)
};

// ScriptStruct TslGame.*740785e943
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*740785e943 {
	int32 MaterialInstanceIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ParameterName; // 0x08(0x08)
	struct UCurveFloat* ParameterRatioCurveFloat; // 0x10(0x08)
	struct U*5e2750edbb* ParameterRatioCurveVector; // 0x18(0x08)
	struct U*d3ff18b806* ParameterRatioCurveLinearColor; // 0x20(0x08)
	bool bUseConstantScalar; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ConstantScalarValue; // 0x2c(0x04)
	bool bUseConstantLinearColor; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FLinearColor ConstantLinearColorValue; // 0x34(0x10)
	bool bUseConstantVector; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FVector ConstantVectorValue; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct UMaterialInstance* MaterialInstance; // 0x58(0x08)
	bool bIsParticle; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*b2b13d6cfb
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*b2b13d6cfb {
	enum class EScopeType *4a880e7b91; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *bdcfe6a193; // 0x04(0x04)
	float *1d7e463d21; // 0x08(0x04)
};

// ScriptStruct TslGame.*6b4d5f30d4
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*6b4d5f30d4 {
	enum class EScopeType *4a880e7b91; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 *bdcfe6a193; // 0x04(0x04)
	int32 *ad948a9ee6; // 0x08(0x04)
};

// ScriptStruct TslGame.*e26e63d8c5
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e26e63d8c5 {
	enum class EWeaponCrosshairType *88ab881cc4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText *a9ba6b37ca; // 0x08(0x18)
};

// ScriptStruct TslGame.*e76fb2b91a
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*e76fb2b91a {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	bool *3a3b1bff8f; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName *688404de15; // 0x10(0x08)
	struct FName *a19296e0a1; // 0x18(0x08)
	struct FName SocketName; // 0x20(0x08)
};

// ScriptStruct TslGame.*13d0dd5581
// Size: 0x05 (Inherited: 0x00)  [layout: KHOP]
struct F*13d0dd5581 {
	bool *de057044e1; // 0x00(0x01)
	int8 *e1bd23a21f; // 0x01(0x01)
	int8 *9499df493e; // 0x02(0x01)
	enum class EWeaponTransitionState State; // 0x03(0x01)
	enum class EWeaponTransitionState *23364a017f; // 0x04(0x01)
};

// ScriptStruct TslGame.*2d92ad05f1
// Size: 0x80 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct F*2d92ad05f1 : F*6ca249c588 {
	char pad_70[0x10]; // 0x70(0x10)
};

// ScriptStruct TslGame.*6ca249c588
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6ca249c588 {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*117e9cc220
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*117e9cc220 {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct TslGame.ParticleParameter
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FParticleParameter {
	struct FName Name; // 0x00(0x08)
	struct FVector Value; // 0x08(0x0c)
	bool bEnableRTPC; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*f9d26ab93d
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f9d26ab93d {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UClass* ParticleEnvironment; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct TslGame.*6f6df36230
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6f6df36230 {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct UParticleSystem* ParticleSystem; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform ParticleLocation; // 0x20(0x30)
	bool PlayOnNearbyExplosion; // 0x50(0x01)
	bool UseWorldTransform; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
};

// ScriptStruct TslGame.*a8b3ecdcaa
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a8b3ecdcaa {
	struct UParticleSystem* Particle; // 0x00(0x08)
	struct UAkAudioEvent* *714d630d54; // 0x08(0x08)
};

// ScriptStruct TslGame.*ade180f0b5
// Size: 0x468 (Inherited: 0x290)  [layout: KHOP]
struct F*ade180f0b5 : F*7dff736ba8 {
	enum class EEquipSlotID EquipSlotID; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float SpaceExtension; // 0x294(0x04)
	float DamageReductionRate; // 0x298(0x04)
	float DurabilityMax; // 0x29c(0x04)
	bool DestroyByDurability; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float Durability; // 0x2a4(0x04)
	enum class *f7d19701c6 DurabilityConsumeType; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float DamageTransferRate; // 0x2ac(0x04)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; // 0x2b0(0x30)
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; // 0x2e0(0x30)
	struct F*f7667cd97f CustomizableObjectOriginalSkin; // 0x310(0x20)
	struct FGuid *8144c6f7e6; // 0x330(0x10)
	struct FGuid *2202e2de95; // 0x340(0x10)
	struct UAkAudioEvent* EquipedSoundAk; // 0x350(0x20)
	struct UAkAudioEvent* BlueBlockerEnterBlueZoneSoundAk; // 0x370(0x20)
	struct UAkAudioEvent* BlueBlockerExitBlueZoneSoundAk; // 0x390(0x20)
	struct UAkAudioEvent* BlueBlockerLowHealthSoundAk; // 0x3b0(0x20)
	struct UAkAudioEvent* BlueBlockerNoHealthSoundAk; // 0x3d0(0x20)
	float BlueBlockerLowHealthThreshold; // 0x3f0(0x04)
	enum class EEquipableItemSoundGroup SoundGroup; // 0x3f4(0x01)
	enum class EEquipableItemSoundType SoundType; // 0x3f5(0x01)
	enum class *bb4bf9cbb9 SlotOffsetType; // 0x3f6(0x01)
	char pad_3F7[0x1]; // 0x3f7(0x01)
	struct FName SkinTag; // 0x3f8(0x08)
	bool bDisableEquipmentSkinning; // 0x400(0x01)
	bool bDisableSkinMessages; // 0x401(0x01)
	bool bDisableMasteryMessages; // 0x402(0x01)
	enum class EEquipableItemLevelType EquipableItemLevelType; // 0x403(0x01)
	bool bIsUnequipable; // 0x404(0x01)
	bool bIsCensorTarget; // 0x405(0x01)
	enum class ESpecialEquipmentType SpecialEquipmentType; // 0x406(0x01)
	char pad_407[0x1]; // 0x407(0x01)
	struct UTexture* HudDisplayEquipIcon; // 0x408(0x20)
	struct TArray<struct F*b43778dd34> ConstraintSlotConfigs; // 0x428(0x10)
	struct TArray<struct F*ca82628ca4> *63151cc8b1; // 0x438(0x10)
	struct FName EquipmentOverridableFilter; // 0x448(0x08)
	bool bIsHoody; // 0x450(0x01)
	bool bIsGhillieSuit; // 0x451(0x01)
	bool bIsTacticalGear; // 0x452(0x01)
	bool bIgnoreGhillieConstraint; // 0x453(0x01)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct F*a43f4eae9e> AnimationSkinDatas; // 0x458(0x10)
};

// ScriptStruct TslGame.TslAnimNode_MirrorAnimation
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_MirrorAnimation : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct U*19ef21422a* BoneMirrorSettings; // 0x48(0x08)
	struct U*19ef21422a* PrevBoneMirrorSettings; // 0x50(0x08)
	struct FBoneReference ItemBone; // 0x58(0x18)
	struct FBoneReference ItemBoneNewParent; // 0x70(0x18)
	char pad_88[0x20]; // 0x88(0x20)
};

// ScriptStruct TslGame.*04facc8969
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*04facc8969 {
	struct FName BoneName; // 0x00(0x08)
	struct FName *21ff1f4ada; // 0x08(0x08)
	struct FRotator *bc2a71c4ec; // 0x10(0x0c)
	enum class EAxis *abe074c224; // 0x1c(0x01)
	enum class EAxis *94f8eff65b; // 0x1d(0x01)
	bool *4c6bc5282e; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct TslGame.*1de5da0793
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1de5da0793 {
	char pad_0[0x10]; // 0x00(0x10)
	struct AUltAIController* *f7fad5a34a; // 0x10(0x08)
};

// ScriptStruct TslGame.MultiBlackboardKey
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMultiBlackboardKey {
	struct FBlackboardKeySelector BlackboardKey; // 0x00(0x28)
	bool *b356f8b2bd; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FBlackboardKeySelector *2d8bd84325; // 0x30(0x28)
	int32 IntValue; // 0x58(0x04)
	float FloatValue; // 0x5c(0x04)
	struct FString StringValue; // 0x60(0x10)
	bool OperationType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct TslGame.*20f37f32d6
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*20f37f32d6 {
	int32 *bf8b6d09ac; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct UClass*, int32> *53fa17c87b; // 0x08(0x50)
	struct TArray<struct UClass*> *146dcab1a7; // 0x58(0x10)
};

// ScriptStruct TslGame.*6e9fcee9ad
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*6e9fcee9ad {
	float *16ceda7cae; // 0x00(0x04)
	float TraceLength; // 0x04(0x04)
	struct FVector *7ac0aa9640; // 0x08(0x0c)
	struct FRotator *28ca289e58; // 0x14(0x0c)
	float *d2e0d3ec9e; // 0x20(0x04)
	float *26ac430ab7; // 0x24(0x04)
};

// ScriptStruct TslGame.*7a28903910
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7a28903910 {
	struct ATslPatrolPath* *1164ecacb8; // 0x00(0x08)
	struct TArray<struct F*7838b4a986> *db7b61be21; // 0x08(0x10)
	enum class EGuardRank *b6f8fd32d5; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*7838b4a986
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7838b4a986 {
	struct FTransform Transform; // 0x00(0x30)
	bool *c277b289d8; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Radius; // 0x34(0x04)
	char pad_38[0x10]; // 0x38(0x10)
	bool *4b87dd7a15; // 0x48(0x01)
	enum class EStanceMode *8a3ee6bf15; // 0x49(0x01)
	enum class EStanceMode *f6c344ab4f; // 0x4a(0x01)
	enum class EPatrolSpeed *d2de47036e; // 0x4b(0x01)
	float *0023fb47c0; // 0x4c(0x04)
	bool *9d33c601c3; // 0x50(0x01)
	enum class *6b9b87be33 AIPeek; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct AActor*> *ce5890e8aa; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct TslGame.*28aa0251f8
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*28aa0251f8 {
	struct FName EmoteName; // 0x00(0x08)
	int32 weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*acae91e19e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*acae91e19e {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*7c81df5d49
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7c81df5d49 {
	float *c10a024f95; // 0x00(0x04)
	float *433a5fa475; // 0x04(0x04)
	float *48eae26b3f; // 0x08(0x04)
	float *eb97f530f2; // 0x0c(0x04)
};

// ScriptStruct TslGame.*fd46f5e5f1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fd46f5e5f1 {
	struct TArray<struct F*67f943c3bc> *bbb8d83024; // 0x00(0x10)
};

// ScriptStruct TslGame.*67f943c3bc
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*67f943c3bc {
	struct ATslAIWaypointSegment* *42bbed4d9f; // 0x00(0x08)
	float *a40f9a1105; // 0x08(0x04)
	bool *57f770a01d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*d29694e3c6
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*d29694e3c6 {
	struct TMap<struct F*a2cd49e53f, struct F*7bb8958ed3> *6f64846c42; // 0x00(0x50)
};

// ScriptStruct TslGame.*a2cd49e53f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a2cd49e53f {
	struct ATslAIWaypointSegment* path; // 0x00(0x08)
	float InputKey; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7bb8958ed3
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*7bb8958ed3 {
	float *d9523027e0; // 0x00(0x04)
	float *9eb65e3c45; // 0x04(0x04)
};

// ScriptStruct TslGame.*7621cd1bc4
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7621cd1bc4 {
	struct U*881937b76f* *6a2876e0dc; // 0x00(0x08)
	struct ATslAIWaypointSegment* path; // 0x08(0x08)
	int32 *654dbf5f9b; // 0x10(0x04)
	bool *bf4ef599a4; // 0x14(0x01)
	bool *9d78501dc1; // 0x15(0x01)
	bool *9b98a5895e; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float *e09fb1d882; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e1e28d3cdb
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e1e28d3cdb {
	enum class *f8c1141bc8 Action; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *170a6f3a2c; // 0x08(0x08)
	float *2c042662e2; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*afd28ef110
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*afd28ef110 {
	char pad_0[0x8]; // 0x00(0x08)
	float HappenTime; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float TotalDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.*a3350e3fe7
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*a3350e3fe7 {
	struct FName ItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*a69fae07c8
// Size: 0xb8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a69fae07c8 {
	struct TMap<struct FName, struct F*3b666f4aa1> *70e1be648e; // 0x00(0x50)
	struct F*ab2949dd9b *3ab5ae3e49; // 0x50(0x50)
	struct TArray<struct FName> *6321b976cc; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// ScriptStruct TslGame.*ab2949dd9b
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*ab2949dd9b {
	struct TMap<struct FString, struct F*c9e707d817> table; // 0x00(0x50)
};

// ScriptStruct TslGame.*c9e707d817
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c9e707d817 {
	struct TArray<struct F*f257acd670> Values; // 0x00(0x10)
};

// ScriptStruct TslGame.*f257acd670
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*f257acd670 {
	char pad_0[0x10]; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*3b666f4aa1
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*3b666f4aa1 {
	struct TMap<struct FName, struct F*e8de4d2ca2> Values; // 0x00(0x50)
};

// ScriptStruct TslGame.*e8de4d2ca2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*e8de4d2ca2 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*1de95a406f> Elements; // 0x08(0x10)
};

// ScriptStruct TslGame.*1de95a406f
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1de95a406f {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	struct FName SkinId; // 0x10(0x08)
};

// ScriptStruct TslGame.*0de47aa75f
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*0de47aa75f {
	struct TMap<struct FName, int32> *36fee805ba; // 0x00(0x50)
};

// ScriptStruct TslGame.*f2c4247d47
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*f2c4247d47 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 SpawnLimit; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*caa86302b0
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct F*caa86302b0 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	int32 StackCount; // 0x18(0x04)
	int32 CountMin; // 0x1c(0x04)
	int32 CountMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName SpawnedItemID; // 0x28(0x08)
	struct FName TogetherItemID; // 0x30(0x08)
};

// ScriptStruct TslGame.*225ee13592
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct F*225ee13592 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	struct FName SubCategoryFilter; // 0x18(0x08)
	int32 StackCount; // 0x20(0x04)
	int32 weight; // 0x24(0x04)
	struct FName ItemID; // 0x28(0x08)
	struct FName SkinId; // 0x30(0x08)
};

// ScriptStruct TslGame.*b75f705280
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b75f705280 {
	float ProbabilityPercent; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
};

// ScriptStruct TslGame.*121d883d07
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*121d883d07 {
	int32 TeamPlayers; // 0x00(0x04)
	int32 SpawnCount; // 0x04(0x04)
};

// ScriptStruct TslGame.*4e392db885
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*4e392db885 {
	struct TArray<struct F*121d883d07> *fbe108d1c5; // 0x00(0x10)
	struct UDataTable* *c47ff2d2df; // 0x10(0x08)
	struct UDataTable* *312709771b; // 0x18(0x08)
	struct TArray<struct F*b75f705280> *1effd706fe; // 0x20(0x10)
};

// ScriptStruct TslGame.*e04f627fcc
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*e04f627fcc {
	struct FBox Box; // 0x00(0x1c)
	float *1a8e6fa3bf; // 0x1c(0x04)
	float *271256ab8e; // 0x20(0x04)
	float *f6a5d58ff5; // 0x24(0x04)
	float *878feec750; // 0x28(0x04)
	float *11e84278c8; // 0x2c(0x04)
	float *d9c1bfae22; // 0x30(0x04)
	float *f0faa8986d; // 0x34(0x04)
};

// ScriptStruct TslGame.*d165e210eb
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d165e210eb {
	struct UCurveFloat* *a0fa025a42; // 0x00(0x08)
	float *7eb3ba4806; // 0x08(0x04)
	bool bActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*4661e56017
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*4661e56017 {
	enum class *48701a31d3 *0554a2af91; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b2bcf82300; // 0x04(0x04)
	float *e746601a16; // 0x08(0x04)
	float *b4d3d72147; // 0x0c(0x04)
	struct TArray<struct F*aeb94d7178> *aeb94d7178; // 0x10(0x10)
	struct TArray<struct F*c1091c205a> *563c79c643; // 0x20(0x10)
};

// ScriptStruct TslGame.*c1091c205a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c1091c205a {
	struct TArray<struct UClass*> *9b24f99dc2; // 0x00(0x10)
	float *466c4c01ef; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*aeb94d7178
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*aeb94d7178 {
	enum class EDamageTypeCategory *c4837fc2d7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *466c4c01ef; // 0x04(0x04)
	float *b4d3d72147; // 0x08(0x04)
};

// ScriptStruct TslGame.*f5383be47d
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f5383be47d {
	enum class *48701a31d3 *0554a2af91; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b2bcf82300; // 0x04(0x04)
	float *e746601a16; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*c3a7cbf6a3> *aeb94d7178; // 0x10(0x10)
};

// ScriptStruct TslGame.*c3a7cbf6a3
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c3a7cbf6a3 {
	enum class EDamageTypeCategory *c4837fc2d7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *466c4c01ef; // 0x04(0x04)
};

// ScriptStruct TslGame.*ec29319451
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*ec29319451 {
	enum class *48701a31d3 *0554a2af91; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *b2bcf82300; // 0x04(0x04)
	float *680178ed6e; // 0x08(0x04)
};

// ScriptStruct TslGame.*ec923a43bb
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*ec923a43bb {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceDownLength; // 0x20(0x04)
	float MaxFloorDiff; // 0x24(0x04)
	float MaxRotationDegree; // 0x28(0x04)
	float OverlapBoxDistanceOffset; // 0x2c(0x04)
	struct FVector OverlapBoxHalfExtent; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> DisablePhysMtrlNames; // 0x40(0x10)
};

// ScriptStruct TslGame.*367ccd0d2b
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*367ccd0d2b {
	struct FRotator RotationOffset; // 0x00(0x0c)
	struct FVector RubberBox; // 0x0c(0x0c)
	float TraceForwardLength; // 0x18(0x04)
	float TraceDownLength; // 0x1c(0x04)
	bool bSpawnInWater; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float OffsetZ; // 0x24(0x04)
	float OffsetZCrouch; // 0x28(0x04)
};

// ScriptStruct TslGame.*15d05c2c55
// Size: 0x3c (Inherited: 0x00)  [layout: KHOP]
struct F*15d05c2c55 {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	float TraceOriginUpOffset; // 0x18(0x04)
	float TraceForwardLength; // 0x1c(0x04)
	float TraceUpLength; // 0x20(0x04)
	float TraceDownLength; // 0x24(0x04)
	bool bOrientToFloor; // 0x28(0x01)
	bool bCheckOverlaps; // 0x29(0x01)
	bool bSphereSweep; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float CapsuleRadius; // 0x2c(0x04)
	float CapsuleHalfHeight; // 0x30(0x04)
	float BalloonRadius; // 0x34(0x04)
	float SweepUpDistance; // 0x38(0x04)
};

// ScriptStruct TslGame.*0d1c63efad
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0d1c63efad {
	struct FVector LocationOffset; // 0x00(0x0c)
	struct FRotator RotationOffset; // 0x0c(0x0c)
	struct TArray<enum class ECollisionChannel> ResponseBlockChannels; // 0x18(0x10)
	float TraceOriginUpOffset; // 0x28(0x04)
	float TraceForwardLength; // 0x2c(0x04)
	float TraceDownLength; // 0x30(0x04)
	bool bOrientToFloor; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct TslGame.TslCinematicLightParams
// Size: 0x34 (Inherited: 0x00)  [layout: KHOP]
struct FTslCinematicLightParams {
	bool bCastShadows; // 0x00(0x01)
	bool bUseTemperature; // 0x01(0x01)
	bool bUseInverseSquaredFalloff; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Temperature; // 0x04(0x04)
	float SourceRadius; // 0x08(0x04)
	float SourceLength; // 0x0c(0x04)
	float InnerConeAngle; // 0x10(0x04)
	float OuterConeAngle; // 0x14(0x04)
	float Intensity; // 0x18(0x04)
	float AttenuationRadius; // 0x1c(0x04)
	float LightFalloffExponent; // 0x20(0x04)
	struct FLinearColor Color; // 0x24(0x10)
};

// ScriptStruct TslGame.*6af7e89ffd
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*6af7e89ffd {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.*79363994bf
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*79363994bf {
	struct FString PlatformType; // 0x00(0x10)
	struct FString AppId; // 0x10(0x10)
	struct FString FullGameVersion; // 0x20(0x10)
	struct FString UserSerial; // 0x30(0x10)
	struct FString AccessToken; // 0x40(0x10)
	struct FString UserDisplayName; // 0x50(0x10)
	struct FString PlayerNetId; // 0x60(0x10)
};

// ScriptStruct TslGame.*7b4995bf56
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*7b4995bf56 {
	struct FLinearColor RankColor; // 0x00(0x10)
	struct FStringAssetReference RankTexture; // 0x10(0x10)
};

// ScriptStruct TslGame.*304604ab0b
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*304604ab0b {
	struct TArray<struct FVector> *20b3bb7be7; // 0x00(0x10)
	struct FBox *8c94f08a7f; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Transform; // 0x30(0x30)
};

// ScriptStruct TslGame.CraftableItemAndCount
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCraftableItemAndCount {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemStackCount; // 0x08(0x04)
	int32 Count; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.CraftItemDataRow
// Size: 0x80 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FCraftItemDataRow : FTableRowBase {
	int32 CraftID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName AllowFilter; // 0x10(0x08)
	struct FName CraftItemID; // 0x18(0x08)
	float CraftTime; // 0x20(0x04)
	int32 CraftItemStackCount; // 0x24(0x04)
	struct TArray<struct FCraftMaterialCount> MaterialItems; // 0x28(0x10)
	bool bShouldTransferAmmoInClip; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SlotTag; // 0x40(0x10)
	struct TArray<struct FCraftMaterialCount> AdditionalCraftItem; // 0x50(0x10)
	struct TArray<struct FName> AdditionalRemoveItemIDs; // 0x60(0x10)
	int32 RestrictedStance; // 0x70(0x04)
	bool bAutoReload; // 0x74(0x01)
	bool bShouldTransferAttachments; // 0x75(0x01)
	char pad_76[0xa]; // 0x76(0x0a)
};

// ScriptStruct TslGame.CraftMaterialCount
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCraftMaterialCount {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7ae7b149b8
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7ae7b149b8 {
	int32 *7a8f03860f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *9e31c0f99e; // 0x08(0x08)
	int32 *56fc65eb16; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8b898674ca
// Size: 0x98 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*8b898674ca : FTableRowBase {
	struct FText WeaponTag; // 0x08(0x18)
	struct FText SimpleWeaponName; // 0x20(0x18)
	struct U*08ee068e89* WeaponGunData; // 0x38(0x08)
	struct F*a874c95d3a WeaponFX; // 0x40(0x20)
	enum class EFiringMode FiringMode; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float MinClipFractionPerSequence; // 0x64(0x04)
	float MaxClipFractionPerSequence; // 0x68(0x04)
	float FiringCooldownMin; // 0x6c(0x04)
	float FiringCooldownMax; // 0x70(0x04)
	float MinTimeBetweenShots; // 0x74(0x04)
	float MaxTimeBetweenShots; // 0x78(0x04)
	int32 ClipSize; // 0x7c(0x04)
	int32 BurstSize; // 0x80(0x04)
	float ReloadTime; // 0x84(0x04)
	float DecoyDelay; // 0x88(0x04)
	float CookDelay; // 0x8c(0x04)
	float DecoyLifetime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct TslGame.*a874c95d3a
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*a874c95d3a {
	struct UAkAudioEvent* FireSoundAk; // 0x00(0x08)
	struct UAkAudioEvent* FireLoopSoundAk; // 0x08(0x08)
	struct UAkAudioEvent* FireFinishSoundAk; // 0x10(0x08)
	struct UParticleSystem* MuzzleFx; // 0x18(0x08)
};

// ScriptStruct TslGame.*5bf0941cb4
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5bf0941cb4 {
	struct UClass* *5158a89185; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
	int32 Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*7ca871363c
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7ca871363c {
	struct ATslCharacter* *d18c4a5bcf; // 0x00(0x08)
	enum class ETslUnarmedImpactActionType ActionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FHitResult HitResult; // 0x10(0x90)
	struct FVector *1b78aea762; // 0xa0(0x0c)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*04a7b2af00
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*04a7b2af00 {
	enum class EInteractInputType InputType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *be2369ad2a; // 0x08(0x08)
	bool *74c747d3fb; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*ee6f8792ac
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*ee6f8792ac {
	enum class EDoorState State; // 0x00(0x01)
	bool *16e4d153b5; // 0x01(0x01)
};

// ScriptStruct TslGame.*0ba226046c
// Size: 0xe0 (Inherited: 0x00)  [layout: KHOP]
struct F*0ba226046c {
	struct FGuid ID; // 0x00(0x10)
	struct TArray<struct UActorComponent*> StaticComponents; // 0x10(0x10)
	struct TMap<struct UStaticMeshComponent*, struct F*6676720b3b> InstancedComponents; // 0x20(0x50)
	struct TArray<struct UDoorInteractionComponent*> DoorComponents; // 0x70(0x10)
	struct TArray<struct APostProcessVolume*> PostProcessVolumes; // 0x80(0x10)
	struct TMap<struct UAkSoundVolumesContainerComponent*, struct F*e19ebd3cac> LinkedSoundVolumesMap; // 0x90(0x50)
};

// ScriptStruct TslGame.*e19ebd3cac
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e19ebd3cac {
	struct TArray<int32> *934706c79a; // 0x00(0x10)
};

// ScriptStruct TslGame.*6676720b3b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6676720b3b {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*c104c29005
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c104c29005 {
	struct TArray<struct F*10be58b68f> Beacons; // 0x00(0x10)
};

// ScriptStruct TslGame.*10be58b68f
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*10be58b68f {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FTransform BeaconTransform; // 0x10(0x30)
	struct FVector BuildingLocalOriginOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*6f6df36230> ParticleEffects; // 0x50(0x10)
	struct TArray<struct F*f9d26ab93d> ParticleEnvironments; // 0x60(0x10)
	float NearbyHitParticleDistance; // 0x70(0x04)
	float DamageRadius; // 0x74(0x04)
	struct FVector VolumetricScale; // 0x78(0x0c)
	struct FGuid DestructibleId; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
	struct USkeletalMesh* DestructionMesh; // 0x98(0x08)
	struct UAnimationAsset* DestructionAnimation; // 0xa0(0x08)
	float DestroyAnimationDelayTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*40a8fae43e> BeaconKillBoxes; // 0xb0(0x10)
	bool WasHit; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct TslGame.*40a8fae43e
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*40a8fae43e {
	struct FGuid DestructibleId; // 0x00(0x10)
	struct FTransform KillZoneTransfrom; // 0x10(0x30)
	struct FVector KillZoneExtent; // 0x40(0x0c)
	bool KillPlayers; // 0x4c(0x01)
	bool DeleteItems; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct TslGame.*c5f414263e
// Size: 0x24 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c5f414263e {
	struct FGuid BlackZoneGroupId; // 0x00(0x10)
	struct FVector BlackZoneOrigin; // 0x10(0x0c)
	float BlackZoneRadius; // 0x1c(0x04)
	bool BeaconsPresent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*b46f660f40
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b46f660f40 {
	bool *9058e96fe6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ID; // 0x04(0x10)
	float *495cb312c1; // 0x14(0x04)
};

// ScriptStruct TslGame.*121336116a
// Size: 0xe20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*121336116a {
	struct F*1b95898383 *eb8f6ffad4; // 0x00(0x78)
	struct F*1b95898383 *014c67441a; // 0x78(0x78)
	struct F*1b95898383 *6b6aae0fa3; // 0xf0(0x78)
	struct F*1b95898383 *6f70e63880; // 0x168(0x78)
	struct F*1b95898383 *c88b9a980d; // 0x1e0(0x78)
	struct F*1b95898383 *ef2664d231; // 0x258(0x78)
	struct F*1b95898383 *49d68e3e8d; // 0x2d0(0x78)
	struct F*1b95898383 *83df1838a7; // 0x348(0x78)
	struct F*1b95898383 *f3d835da99; // 0x3c0(0x78)
	struct F*1b95898383 *471ec14d01; // 0x438(0x78)
	struct F*1b95898383 FleshDecal; // 0x4b0(0x78)
	struct F*1b95898383 *4c3d11da80; // 0x528(0x78)
	struct F*1b95898383 *2217226935; // 0x5a0(0x78)
	struct F*1b95898383 *174800f68c; // 0x618(0x78)
	struct F*1b95898383 *d6d3834dd4; // 0x690(0x78)
	struct F*1b95898383 *0d4a0e3dbd; // 0x708(0x78)
	struct F*1b95898383 *953961454d; // 0x780(0x78)
	struct F*1b95898383 *0b0d7093ee; // 0x7f8(0x78)
	struct F*1b95898383 *cb5239508e; // 0x870(0x78)
	struct F*1b95898383 *07e163031e; // 0x8e8(0x78)
	struct F*1b95898383 *6eced98b4c; // 0x960(0x78)
	struct F*1b95898383 *fe800adad7; // 0x9d8(0x78)
	bool *24d142d1d7; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct F*1b95898383 SprayDecal; // 0xa58(0x78)
	struct F*1b95898383 *5651bab754; // 0xad0(0x78)
	struct F*1b95898383 *b64f628100; // 0xb48(0x78)
	struct F*1b95898383 *4e7b2bb53a; // 0xbc0(0x78)
	struct F*1b95898383 *fb1dc6fd84; // 0xc38(0x78)
	struct F*1b95898383 *f9a28e8465; // 0xcb0(0x78)
	struct F*1b95898383 *42b4615eea; // 0xd28(0x78)
	struct F*1b95898383 *a8a57d7cfd; // 0xda0(0x78)
	bool *7bafc23028; // 0xe18(0x01)
	char pad_E19[0x7]; // 0xe19(0x07)
};

// ScriptStruct TslGame.*1b95898383
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*1b95898383 {
	struct UMaterial* Material; // 0x00(0x08)
	struct UMaterial* RicochetMaterial; // 0x08(0x08)
	struct FFloatRange Size; // 0x10(0x10)
	struct FFloatRange NormalFadeAngle; // 0x20(0x10)
	float FadeScreenSize; // 0x30(0x04)
	float FadeStartDelay; // 0x34(0x04)
	float FadeDuration; // 0x38(0x04)
	char bUseRandomInput : 1; // 0x3c(0x01)
	char bUseRandomRoll : 1; // 0x3c(0x01)
	char bReversal : 1; // 0x3c(0x01)
	char bUseRicochet : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct F*c1d67ea7ec DecalChannels; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D DotProductLongScaleMapIn; // 0x44(0x08)
	struct FVector2D DotProductLongScaleMapOut; // 0x4c(0x08)
	struct FVector2D DotProductLatScaleMapIn; // 0x54(0x08)
	struct FVector2D DotProductLatScaleMapOut; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture* *8632ab63e8; // 0x68(0x08)
	int32 *c2965b6811; // 0x70(0x04)
	float *538300e8fe; // 0x74(0x04)
};

// ScriptStruct TslGame.*661f4cbc9e
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*661f4cbc9e {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*eb639cda6c
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eb639cda6c {
	float MaxDot; // 0x00(0x04)
	struct FFloatRange RicochetChance; // 0x04(0x10)
	bool bAlwaysScaleDecal; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*8b2f128947
// Size: 0x110 (Inherited: 0x00)  [layout: KHOP]
struct F*8b2f128947 {
	struct UStaticMesh* *0069bd9664; // 0x00(0x08)
	struct TArray<struct UMaterialInstance*> *31e94430d7; // 0x08(0x10)
	struct UStaticMesh* *fe099280bf; // 0x18(0x08)
	struct TArray<struct UMaterialInstance*> *edc5d36f69; // 0x20(0x10)
	struct UStaticMesh* *ce5586f2fe; // 0x30(0x08)
	struct TArray<struct UMaterialInstance*> *0825f6e039; // 0x38(0x10)
	struct UClass* *b783e23f47; // 0x48(0x08)
	struct UClass* *bdab3f6808; // 0x50(0x08)
	bool *0f112ed7e3; // 0x58(0x01)
	bool *78732532c4; // 0x59(0x01)
	bool *a8dcaeeace; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct UPhysicalMaterial* PhysMaterial; // 0x60(0x08)
	struct UTexture2D* *92da3626ce; // 0x68(0x08)
	struct U*85aa4c84ab* *2da6f6a25e; // 0x70(0x08)
	struct UTexture2D* *e4ec31e96a; // 0x78(0x08)
	struct TArray<struct U*e183ad7730*> *a87b23f24a; // 0x80(0x10)
	bool *6cbfd4a42a; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInstance*> *f3cb5a6a0a; // 0x98(0x10)
	struct UStaticMesh* *edec1b230a; // 0xa8(0x08)
	struct TArray<struct UMaterialInstance*> *74bd879931; // 0xb0(0x10)
	int32 *b284c1074c; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UClass* *9b8bfb1e77; // 0xc8(0x08)
	struct TArray<enum class EDestrucibleSurfaceSourceType> *bfe8a82a9b; // 0xd0(0x10)
	bool *82acc0d7fb; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *8a48ce7ccf; // 0xe4(0x04)
	float *13d3f96bbc; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UClass* *b0c1bf59ab; // 0xf0(0x08)
	float *a9885690af; // 0xf8(0x04)
	float BulletEntranceRadiusSize; // 0xfc(0x04)
	float BulletExitRadiusSize; // 0x100(0x04)
	bool HitsOnlyAffectFacingSurface; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UStaticMesh* FrameComplexCollisionMesh; // 0x108(0x08)
};

// ScriptStruct TslGame.*da1ecda6fe
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*da1ecda6fe {
	uint16 *9d58c56681; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32 InstanceIndex; // 0x04(0x04)
};

// ScriptStruct TslGame.*79515ea521
// Size: 0x34 (Inherited: 0x00)  [layout: KHOP]
struct F*79515ea521 {
	uint16 *9d58c56681; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct F*ec2d8ba367 Hit; // 0x04(0x30)
};

// ScriptStruct TslGame.*ec2d8ba367
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*ec2d8ba367 {
	struct FVector_NetQuantize HitLocation; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal *db02a965ac; // 0x0c(0x0c)
	int32 InstanceIndex; // 0x18(0x04)
	enum class EDestrucibleSurfaceSourceType *c4837fc2d7; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Radius; // 0x20(0x04)
	struct FVector_NetQuantize *78c25789c5; // 0x24(0x0c)
};

// ScriptStruct TslGame.*61cb3a68c3
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*61cb3a68c3 {
	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector AttackerLocation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*5ac1e15fce
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*5ac1e15fce : FTableRowBase {
	enum class EFExplosivePropDataType *3394d33019; // 0x08(0x01)
	bool *2307d47673; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *aac3d20a1a; // 0x0c(0x04)
	float *7d78043e39; // 0x10(0x04)
	float *e770050cde; // 0x14(0x04)
	float *27c33f4b14; // 0x18(0x04)
	float *c7369b85c1; // 0x1c(0x04)
	float *46f0859d2c; // 0x20(0x04)
	float *63abe05a15; // 0x24(0x04)
	struct UCurveFloat* *927374d11f; // 0x28(0x08)
	struct UClass* *8aa17c3d74; // 0x30(0x08)
	struct FVector *ba60df43b9; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*db65b26039
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*db65b26039 {
	enum class EGlassWindowState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize HitLocation; // 0x04(0x0c)
	struct FVector_NetQuantizeNormal *f86775f434; // 0x10(0x0c)
};

// ScriptStruct TslGame.*6fb11abd80
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*6fb11abd80 : FTableRowBase {
	struct FString *56e766fde8; // 0x08(0x10)
};

// ScriptStruct TslGame.*07bc2353bd
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*07bc2353bd {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct U*9d728e94a6* *9d728e94a6; // 0x40(0x08)
	struct U*5d046e33a5* ReactionDoorData; // 0x48(0x08)
	struct FVector *9ad38bbf4d; // 0x50(0x0c)
	float BoundsScale; // 0x5c(0x04)
	char LightingChannel0 : 1; // 0x60(0x01)
	char LightingChannel1 : 1; // 0x60(0x01)
	char *9c335f3ee8 : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*23252e0b47
// Size: 0x98 (Inherited: 0x00)  [layout: KHOP]
struct F*23252e0b47 {
	struct FHitResult *b587901ec2; // 0x00(0x90)
	struct UPrimitiveComponent* *59d97b4003; // 0x90(0x08)
};

// ScriptStruct TslGame.*980052cefe
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*980052cefe {
	struct UPrimitiveComponent* *59d97b4003; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantize Velocity; // 0x14(0x0c)
	bool *ba1250eaf1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*4dd517f880
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4dd517f880 {
	struct UPrimitiveComponent* *59d97b4003; // 0x00(0x08)
	struct UPrimitiveComponent* *10e708bec6; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	uint16 *0f16d95cec; // 0x28(0x02)
	bool *12c12b0be1; // 0x2a(0x01)
	bool *67806edad7; // 0x2b(0x01)
	bool *ba1250eaf1; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct TslGame.*c761b236a3
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c761b236a3 {
	struct FRotator *1f538db405; // 0x00(0x0c)
	struct FRotator *fea969db35; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FVector Location; // 0x24(0x0c)
	struct USceneComponent* BaseComp; // 0x30(0x08)
	struct U*30ba6487d1* ThrowableConfig; // 0x38(0x08)
	bool *9e96b8daeb; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.*89eb1bd522
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*89eb1bd522 : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*490299ea8d
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*490299ea8d : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*90584589a8
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*90584589a8 {
	struct UItem* Item; // 0x00(0x08)
	struct F*16a5d72ef4 *5540043a6e; // 0x08(0x0c)
	char pad_14[0x14]; // 0x14(0x14)
};

// ScriptStruct TslGame.*443da01f97
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*443da01f97 {
	int32 Mode; // 0x00(0x04)
	int32 Type; // 0x04(0x04)
};

// ScriptStruct TslGame.*a686ee6dec
// Size: 0x88 (Inherited: 0x00)  [layout: KHOP]
struct F*a686ee6dec {
	char pad_0[0x68]; // 0x00(0x68)
	struct U*5e2750edbb* *372f856f99; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
	struct UPrimitiveComponent* *8a4af469ef; // 0x80(0x08)
};

// ScriptStruct TslGame.*3d1003cf4b
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct F*3d1003cf4b : F*8525d76572 {
	float *4bbf59cc38; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*8525d76572
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*8525d76572 {
	struct FVector *12bb9bd4fe; // 0x00(0x0c)
	struct FVector Dir; // 0x0c(0x0c)
	struct FAttackId AttackId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UClass* *e2a050f8cd; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)
};

// ScriptStruct TslGame.*f033e1f2e0
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*f033e1f2e0 {
	float InitialSpeed; // 0x00(0x04)
	float *9a95b54f15; // 0x04(0x04)
	float *4d7ff20fc9; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*c13e840642> *ffb474a194; // 0x10(0x10)
	float *54ffa5c3dd; // 0x20(0x04)
	float *4e944602c7; // 0x24(0x04)
	struct U*5e2750edbb* *ced517632a; // 0x28(0x08)
	float RangeModifier; // 0x30(0x04)
	float ReferenceDistance; // 0x34(0x04)
	float TravelDistanceMax; // 0x38(0x04)
	bool bUseMaxDamageDistance; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float SimulationSubstepTime; // 0x40(0x04)
	float VDragCoefficient; // 0x44(0x04)
	float BDS; // 0x48(0x04)
	bool bUseAdvancedBallistics; // 0x4c(0x01)
	bool bCanProduceCrackSound; // 0x4d(0x01)
	bool *953bd3fa70; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UClass* *c4837fc2d7; // 0x50(0x08)
	char *f252d42a55 : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float WeaponSpread; // 0x5c(0x04)
	struct U*f19ed4497e* *47cdd71e17; // 0x60(0x08)
	struct U*5e2750edbb* *fad1f3c07d; // 0x68(0x08)
};

// ScriptStruct TslGame.*c13e840642
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c13e840642 {
	float Damage; // 0x00(0x04)
	float Probability; // 0x04(0x04)
};

// ScriptStruct TslGame.*49adef099f
// Size: 0xd0 (Inherited: 0x00)  [layout: KHOP]
struct F*49adef099f {
	float VerticalRecoilMin; // 0x00(0x04)
	float VerticalRecoilMax; // 0x04(0x04)
	float VerticalRecoilRecoveryMin; // 0x08(0x04)
	float VerticalRecoilVariation; // 0x0c(0x04)
	float VerticalRecoveryModifier; // 0x10(0x04)
	float VerticalRecoveryClamp; // 0x14(0x04)
	float VerticalRecoveryMax; // 0x18(0x04)
	float LeftMax; // 0x1c(0x04)
	float RightMax; // 0x20(0x04)
	float HorizontalTendency; // 0x24(0x04)
	struct U*5e2750edbb* RecoilCurve; // 0x28(0x08)
	int32 BulletsPerSwitch; // 0x30(0x04)
	float RecoilSpeed_Vertical; // 0x34(0x04)
	float RecoilSpeed_Horizontal; // 0x38(0x04)
	float RecoverySpeed_Vertical; // 0x3c(0x04)
	float RecoilValue_Climb; // 0x40(0x04)
	float RecoilValue_Fall; // 0x44(0x04)
	float RecoilModifier_Stand; // 0x48(0x04)
	float RecoilModifier_Crouch; // 0x4c(0x04)
	float RecoilModifier_Prone; // 0x50(0x04)
	float RecoilModifier_Vehicle; // 0x54(0x04)
	float RecoilHorizontalMinScalar; // 0x58(0x04)
	struct FVector2D RecoilStartTimeInMap; // 0x5c(0x08)
	struct FVector2D RecoilStartTimeOutMap; // 0x64(0x08)
	struct FVector2D RecoilBlendInInMap; // 0x6c(0x08)
	struct FVector2D RecoilBlendInOutMap; // 0x74(0x08)
	float VehicleRecoilScalar; // 0x7c(0x04)
	struct TMap<enum class EFiringMode, struct F*8429f437dc> ROFRecoilMap; // 0x80(0x50)
};

// ScriptStruct TslGame.*8429f437dc
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*8429f437dc {
	struct TMap<enum class EAnimStance, float> StanceMap; // 0x00(0x50)
};

// ScriptStruct TslGame.*4d2a318b7c
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*4d2a318b7c : FTableRowBase {
	bool bUseCharacterHitFeedback; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor PartsColor; // 0x0c(0x10)
	float DamageReduceMultiplier; // 0x1c(0x04)
	enum class EDamageZoneType PartsDamageZoneType; // 0x20(0x01)
	enum class EDamageReason PartsDamageReason; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*ab9e19d6d4
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*ab9e19d6d4 {
	struct FLinearColor *55305736c7; // 0x00(0x10)
	enum class EDamageReason DamageReason; // 0x10(0x01)
	enum class EDamageZoneType *9ae02b1cb7; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float *9a95b54f15; // 0x14(0x04)
};

// ScriptStruct TslGame.*1bd4b1422a
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1bd4b1422a {
	struct UTexture2D* PartsTargetImage; // 0x00(0x08)
	struct FString *17c3f0e3d5; // 0x08(0x10)
	bool bUsingCharacterHitFeedback; // 0x18(0x01)
	bool bUsingDamageIndicator; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*ef4ce8306a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ef4ce8306a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*cf0ea967eb
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*cf0ea967eb {
	float RecoilValue; // 0x00(0x04)
	float RecoilVertical; // 0x04(0x04)
	float RecoilHorizontal; // 0x08(0x04)
	float RecoilTargetPitch; // 0x0c(0x04)
	float RecoilTargetYaw; // 0x10(0x04)
	float RecoilRecoveryTarget; // 0x14(0x04)
	float RecoilVerticalDelta; // 0x18(0x04)
	float RecoilHorizontalDelta; // 0x1c(0x04)
	float RecoilCharacterPitch; // 0x20(0x04)
	float RecoilWeaponPitch; // 0x24(0x04)
};

// ScriptStruct TslGame.*01abcd26c7
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*01abcd26c7 {
	struct ATslWeapon_Trajectory* Weapon; // 0x00(0x08)
	struct U*5e2750edbb* *ced517632a; // 0x08(0x08)
	struct ATslParticle* Particle; // 0x10(0x08)
	char pad_18[0x60]; // 0x18(0x60)
};

// ScriptStruct TslGame.*6321b62f0a
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*6321b62f0a : FTableRowBase {
	struct UTexture2D* BackgroundImage; // 0x08(0x20)
	float ApperanceModifier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*56b52e3dfd
// Size: 0xd8 (Inherited: 0xa0)  [layout: KHOP]
struct F*56b52e3dfd : F*b517f53879 {
	bool bIsImageOnlyLoadingScreen; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText Title; // 0xa8(0x18)
	struct FText Description; // 0xc0(0x18)
};

// ScriptStruct TslGame.*b517f53879
// Size: 0xa0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*b517f53879 : FTableRowBase {
	enum class ELoadingScreenType LoadingScreenType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName GameModeAlias; // 0x10(0x08)
	enum class *25b51d4008 RankGuideType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* BackgroundImage; // 0x20(0x20)
	struct TMap<struct FName, struct F*0d3c5f76d1> OverrideByMap; // 0x40(0x50)
	bool bIsKeyGuide; // 0x90(0x01)
	bool bExposedOnPCAndKeyboard; // 0x91(0x01)
	bool bExposedOnPCAndGamepad; // 0x92(0x01)
	bool bExposedOnXboxOne; // 0x93(0x01)
	bool bExposedOnPS4; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float ApperanceModifier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.*0d3c5f76d1
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*0d3c5f76d1 {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* BackgroundImage; // 0x30(0x20)
};

// ScriptStruct TslGame.*6b4f22f54e
// Size: 0xa8 (Inherited: 0xa0)  [layout: KHOP]
struct F*6b4f22f54e : F*b517f53879 {
	struct UClass* TipWidget; // 0xa0(0x08)
};

// ScriptStruct TslGame.LoadingScreenTypePercentConfig
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FLoadingScreenTypePercentConfig {
	struct TArray<struct FLoadingScreenTypePercent> LoadingScreenTypePercentForElementaryRank; // 0x00(0x10)
	struct TArray<struct FLoadingScreenTypePercent> LoadingScreenTypePercentForIntermediateRank; // 0x10(0x10)
	struct TArray<struct FLoadingScreenTypePercent> LoadingScreenTypePercentForHighRank; // 0x20(0x10)
	struct TArray<struct FLoadingScreenTypePercent> LoadingScreenTypePercentForExpertRank; // 0x30(0x10)
};

// ScriptStruct TslGame.LoadingScreenTypePercent
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FLoadingScreenTypePercent {
	enum class ELoadingScreenType LoadingScreenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Percent; // 0x04(0x04)
};

// ScriptStruct TslGame.ElementaryRankGuidePercentConfig
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FElementaryRankGuidePercentConfig : FTableRowBase {
	float ShowElementaryRankPercentForElementaryRank; // 0x08(0x04)
	float ShowElementaryRankPercentForIntermediateRank; // 0x0c(0x04)
	float ShowElementaryRankPercentForHighRank; // 0x10(0x04)
	float ShowElementaryRankPercentForExpertRank; // 0x14(0x04)
};

// ScriptStruct TslGame.TestSpecialVehicleData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTestSpecialVehicleData {
	struct FStringAssetReference TestSpecialVehicleClass; // 0x00(0x10)
	struct FName TestSpecialVehicleSkinItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.TeamColorAndName
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FTeamColorAndName {
	struct FText ColorNameText; // 0x00(0x18)
	struct FLinearColor Color; // 0x18(0x10)
};

// ScriptStruct TslGame.NamedFovRecord
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FNamedFovRecord {
	struct FName SensitiveName; // 0x00(0x08)
	float FOV; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*49e2291b93
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*49e2291b93 : FTableRowBase {
	struct FName *e06bf244fb; // 0x08(0x08)
	struct TArray<struct FActionOrAxis> *0714d1ba4f; // 0x10(0x10)
};

// ScriptStruct TslGame.GamepadReportStepperDesc
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FGamepadReportStepperDesc {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
};

// ScriptStruct TslGame.OptionContentDesc
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FOptionContentDesc {
	struct FName OptionName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	bool bIsStepper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> StepperContents; // 0x40(0x10)
	int32 StepperDefaultIndex; // 0x50(0x04)
	bool bIsSlider; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float SliderMin; // 0x58(0x04)
	float SliderMax; // 0x5c(0x04)
	float SliderDefaultValue; // 0x60(0x04)
	bool bIsSeparator; // 0x64(0x01)
	bool bIsPalette; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*6d2110d288
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*6d2110d288 {
	struct TArray<struct FTslGamepadActionKeyData> ActionKeyDatas; // 0x00(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> AxisKeyDatas; // 0x10(0x10)
};

// ScriptStruct TslGame.TslGamepadAxisKeyData
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FTslGamepadAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKey GamepadAxisKey; // 0x10(0x18)
};

// ScriptStruct TslGame.TslGamepadActionKeyData
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FTslGamepadActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct FTslGamepadInputKey GamepadActionKey; // 0x08(0x40)
};

// ScriptStruct TslGame.TslGamepadInputKey
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FTslGamepadInputKey {
	struct FKey Key; // 0x00(0x18)
	enum class EGamepadInputResponseTypes ResponseType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ResponseTime; // 0x1c(0x04)
	bool bBlockDuplicatedKeyAction; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FKey CombinationKey; // 0x28(0x18)
};

// ScriptStruct TslGame.*e0a0a694d7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e0a0a694d7 {
	struct TArray<struct FTslGamepadInputKey> *6fba40a64a; // 0x00(0x10)
};

// ScriptStruct TslGame.*6540450a3a
// Size: 0xc8 (Inherited: 0x08)  [layout: KHOP]
struct F*6540450a3a : FTableRowBase {
	enum class EGamepadPresets GamepadPreset; // 0x08(0x01)
	enum class EActionType ActionType; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName ActionName; // 0x10(0x08)
	struct FName FollowToActionName; // 0x18(0x08)
	struct FKey Key; // 0x20(0x18)
	bool bIsConfirmOrCancel; // 0x38(0x01)
	enum class EGamepadInputResponseTypes ResponseType; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float ResponseTime; // 0x3c(0x04)
	float Scale; // 0x40(0x04)
	bool bBlockDuplicatedKeyAction; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString GuideTabCategory; // 0x48(0x10)
	struct FText GuideText; // 0x58(0x18)
	struct FKey CombinationKey; // 0x70(0x18)
	struct FString FakeResponseTypeForGuide; // 0x88(0x10)
	struct FString BindingTabName; // 0x98(0x10)
	int32 BindingGroupNumber; // 0xa8(0x04)
	int32 FunctionalGroupNumber; // 0xac(0x04)
	struct FKey RelatedAxisKey; // 0xb0(0x18)
};

// ScriptStruct TslGame.PresetColor
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FPresetColor {
	struct FLinearColor Color; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct FString ColorString; // 0x28(0x10)
};

// ScriptStruct TslGame.AnimatableCustomizableHairData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FAnimatableCustomizableHairData {
	enum class ETargetAnimDynamicsHairType HairType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> MutableNames; // 0x08(0x10)
};

// ScriptStruct TslGame.AnimatableCustomizableObjectData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FAnimatableCustomizableObjectData {
	enum class EAnimatableCustomizableTypes MutableType; // 0x00(0x01)
	enum class ETargetAnimDynamicsType TargetAnimDynamicType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> MutableNames; // 0x08(0x10)
};

// ScriptStruct TslGame.ColorBlindType
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FColorBlindType {
	enum class EColorBlindType Key; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.TeamColorAndIcon
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FTeamColorAndIcon {
	struct FColorBlindColorSet TeamMemberColor; // 0x00(0x10)
	struct UTexture* MarkerColorTextIcon; // 0x10(0x08)
	struct UTexture* MarkerIcon; // 0x18(0x08)
	struct UTexture* PlayerIcon; // 0x20(0x08)
	struct UTexture* CompassIcon; // 0x28(0x08)
	struct UTexture* IndicatorIcon; // 0x30(0x08)
	struct UTexture* MapDeathIcon; // 0x38(0x08)
};

// ScriptStruct TslGame.ColorBlindColorSet
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FColorBlindColorSet {
	struct TArray<struct FColorBlindColorData> ColorSet; // 0x00(0x10)
};

// ScriptStruct TslGame.ColorBlindColorData
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FColorBlindColorData {
	enum class EColorBlindType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
};

// ScriptStruct TslGame.SeatColors
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FSeatColors {
	enum class ESeatState SeatState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FColorBlindColorSet ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.ReticleColors
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FReticleColors {
	enum class EReticleType ReticleType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FColorBlindColorSet ColorSet; // 0x08(0x10)
};

// ScriptStruct TslGame.*69ae70aebf
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*69ae70aebf : FTableRowBase {
	struct FColorBlindColorSet BlindColorSet; // 0x08(0x10)
	struct FLinearColor ShadowColor; // 0x18(0x10)
	struct FVector2D ShadowOffset; // 0x28(0x08)
};

// ScriptStruct TslGame.UiType
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FUiType {
	struct FText DisplayUiName; // 0x00(0x18)
	struct FString UiKey; // 0x18(0x10)
};

// ScriptStruct TslGame.OverrideScalability
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FOverrideScalability {
	enum class EQualityType QualityType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FOverrideScalabilityValue> OverrideScalabilityValues; // 0x08(0x10)
};

// ScriptStruct TslGame.OverrideScalabilityValue
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FOverrideScalabilityValue {
	struct FString ConsoleName; // 0x00(0x10)
	enum class EValueType ValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> Values; // 0x18(0x10)
};

// ScriptStruct TslGame.KeyInputModeName
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FKeyInputModeName {
	struct FName ModeName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct TslGame.SurportQualityLevel
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FSurportQualityLevel {
	int32 QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DisplayQualityLevelName; // 0x08(0x18)
};

// ScriptStruct TslGame.CustomizableGamePadSensitiveName
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FCustomizableGamePadSensitiveName {
	struct FText DisplayName; // 0x00(0x18)
	struct FName GamePadSensitiveName; // 0x18(0x08)
	float GamePadSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* GamePadCurve; // 0x28(0x08)
};

// ScriptStruct TslGame.CustomizableMouseSensitiveName
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCustomizableMouseSensitiveName {
	struct FText DisplayName; // 0x00(0x18)
	struct FName MouseSensitiveName; // 0x18(0x08)
	float MouseSensitivity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.CustomizableAxisName
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCustomizableAxisName {
	struct FName Category; // 0x00(0x08)
	struct FName AxisName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	float Scale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.CustomizableActionName
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FCustomizableActionName {
	struct FName Category; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct TslGame.ReportCauseData
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FReportCauseData {
	struct FText DisplayName; // 0x00(0x18)
	enum class EReportCause ReportCauseType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class EReportDetailCauseType> DetailCauseTypeList; // 0x20(0x10)
};

// ScriptStruct TslGame.AimAcceleration
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FAimAcceleration {
	struct UCurveFloat* RampUpTimeForTargetingCurve; // 0x00(0x08)
};

// ScriptStruct TslGame.SubjectToReport
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSubjectToReport {
	struct FText DisplayName; // 0x00(0x18)
	enum class ESubjectToReport SubjectToReportType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.CustomizableCategoryData
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FCustomizableCategoryData {
	struct FText DisplayName; // 0x00(0x18)
	struct FName Category; // 0x18(0x08)
	struct TArray<struct FName> NotDuplicateCategoryNames; // 0x20(0x10)
};

// ScriptStruct TslGame.BoneBinding
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FBoneBinding {
	struct FName ImpactBone; // 0x00(0x08)
	struct FName ReactionBone; // 0x08(0x08)
};

// ScriptStruct TslGame.InteractionCollisionData
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FInteractionCollisionData {
	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	struct FVector CapsuleOffset; // 0x08(0x0c)
};

// ScriptStruct TslGame.*863c9230bb
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*863c9230bb {
	struct FName AxisName; // 0x00(0x08)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x08(0x10)
};

// ScriptStruct TslGame.*8ee8cbbccf
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8ee8cbbccf {
	struct FName ActionName; // 0x00(0x08)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x08(0x10)
};

// ScriptStruct TslGame.*a50d0a6af9
// Size: 0x160 (Inherited: 0xf0)  [layout: KHOP]
struct F*a50d0a6af9 : FTslLobbySceneData {
	struct FName ContenderBackgroundActorName; // 0xf0(0x08)
	struct FName ContenderFloorActorName; // 0xf8(0x08)
	struct UMaterialInterface* ContenderBackgroundMaterial; // 0x100(0x08)
	struct UMaterialInterface* ContenderFloorMaterial; // 0x108(0x08)
	struct TArray<struct F*5d59625218> Effects; // 0x110(0x10)
	struct TArray<struct F*19ed1e251b> Lights; // 0x120(0x10)
	struct AStaticMeshActor* *15fe38023e; // 0x130(0x08)
	struct AStaticMeshActor* *38c7930d87; // 0x138(0x08)
	struct TArray<struct UParticleSystemComponent*> Particles; // 0x140(0x10)
	struct TArray<struct ATslLobbyLightActor*> *17ea613b85; // 0x150(0x10)
};

// ScriptStruct TslGame.TslLobbySceneData
// Size: 0xf0 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct FTslLobbySceneData : FTslBaseLobbySceneData {
	struct TArray<struct FName> LobbyCharacterPivotTags; // 0xb0(0x10)
	char pad_C0[0x30]; // 0xc0(0x30)
};

// ScriptStruct TslGame.TslBaseLobbySceneData
// Size: 0xb0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTslBaseLobbySceneData : FTableRowBase {
	struct FName SceneCameraTag; // 0x08(0x08)
	struct FName SceneLevelName; // 0x10(0x08)
	enum class ELobbyCharacterAnimationType LobbyCharacterAnimationType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<enum class EWuCameraType, struct FName> LobbyCharacterCameras; // 0x20(0x50)
	bool bHideMainLobbyCharacter; // 0x70(0x01)
	bool bHideOtherLobbyCharacter; // 0x71(0x01)
	bool bHideWeaponMasteryObjects; // 0x72(0x01)
	enum class ELobbyBlurChangingStates LobbyBlurChangingStates; // 0x73(0x01)
	bool bHideDefaultParticle; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<struct FName> ShowParticleTags; // 0x78(0x10)
	bool bUseOutgameVisibilityValue; // 0x88(0x01)
	bool bCanTargetObjectRotation; // 0x89(0x01)
	bool bNeedToSpawnOnGround; // 0x8a(0x01)
	bool bShouldSuppressNametag; // 0x8b(0x01)
	bool bApplyPivotRotation; // 0x8c(0x01)
	bool bAsyncLoadingSceneLevel; // 0x8d(0x01)
	bool bAllowToggleZoomCamera; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	struct FName ToggleZoomInCameraTag; // 0x90(0x08)
	struct FName ToggleZoomOutCameraTag; // 0x98(0x08)
	struct FVector2D LoadingSpinnerOffset; // 0xa0(0x08)
	bool bResetCharacterTransformOnUpdate; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct TslGame.*19ed1e251b
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*19ed1e251b {
	struct UClass* LightActorClass; // 0x00(0x08)
	struct FVector LocationToSpawnActor; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5d59625218
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*5d59625218 {
	struct UParticleSystem* ParticleEffect; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	struct FRotator Rotator; // 0x14(0x0c)
	struct FName PivotName; // 0x20(0x08)
};

// ScriptStruct TslGame.*958be645cb
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*958be645cb {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.TslLobbySceneTravelData
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FTslLobbySceneTravelData : FTableRowBase {
	struct UClass* LobbySceneTravelClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*3cb44a4974
// Size: 0x150 (Inherited: 0xf0)  [layout: LECH - offset chi la uoc luong]
struct F*3cb44a4974 : FTslLobbySceneData {
	struct TMap<enum class ELobbyCustomizingSlotType, struct F*7144ebcb19> CustomizeLobbyModeScenePivots; // 0xf0(0x50)
	char pad_140[0x10]; // 0x140(0x10)
};

// ScriptStruct TslGame.*7144ebcb19
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7144ebcb19 {
	struct TArray<struct F*e9d21ea0ac> CusLobbyScenePivotsDesc; // 0x00(0x10)
};

// ScriptStruct TslGame.*e9d21ea0ac
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e9d21ea0ac {
	struct FName CustomizeObjectPivotTag; // 0x00(0x08)
	struct TArray<struct F*839dbef206> CustomizeObjectOffsetInfos; // 0x08(0x10)
	struct AActor* *82ee59238f; // 0x18(0x08)
};

// ScriptStruct TslGame.*839dbef206
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*839dbef206 {
	struct FString *22185b5ab6; // 0x00(0x10)
	struct FTransform *d94206adff; // 0x10(0x30)
	struct TArray<struct F*ce9dcc95f5> *837e489422; // 0x40(0x10)
};

// ScriptStruct TslGame.*ce9dcc95f5
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*ce9dcc95f5 {
	struct FString *5ace712d41; // 0x00(0x10)
	struct FTransform Offset; // 0x10(0x30)
};

// ScriptStruct TslGame.TslLobbyViewModeSceneData
// Size: 0x198 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct FTslLobbyViewModeSceneData : FTslBaseLobbySceneData {
	struct TMap<enum class EWuViewModeCategory, struct FName> ViewModePivots; // 0xb0(0x50)
	struct TArray<enum class EWuViewModeCategory> DisableScaleList; // 0x100(0x10)
	struct TArray<enum class EWuViewModeCategory> DisableYAxisList; // 0x110(0x10)
	struct TArray<enum class EWuViewModeCategory> DisableRotationRollbackList; // 0x120(0x10)
	struct TArray<enum class EWuViewModeCategory> DisableZoomList; // 0x130(0x10)
	struct TMap<enum class EWuViewModeCategory, struct FTargetObjectRatationRange> TargetObjectRatationRanges; // 0x140(0x50)
	bool bAllowZoom; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
};

// ScriptStruct TslGame.TargetObjectRatationRange
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTargetObjectRatationRange {
	struct FFloatInterval PitchRange; // 0x00(0x08)
	struct FFloatInterval RollRange; // 0x08(0x08)
};

// ScriptStruct TslGame.TslCrosshairSettings
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FTslCrosshairSettings {
	bool bUseGeneralWeaponCrosshair; // 0x00(0x01)
	enum class ECrosshairOptionMode ColorMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FLinearColor Color; // 0x04(0x10)
	enum class ECrosshairOptionMode LineMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FTslCrosshairLineSettings LINE; // 0x18(0x18)
	enum class ECrosshairOptionMode DotMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FTslCrosshairDotSettings Dot; // 0x34(0x10)
	enum class ECrosshairOptionMode OutlineMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FTslCrosshairOutlineSettings Outline; // 0x48(0x18)
};

// ScriptStruct TslGame.TslCrosshairOutlineSettings
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslCrosshairOutlineSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	float Thickness; // 0x14(0x04)
};

// ScriptStruct TslGame.TslCrosshairDotSettings
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslCrosshairDotSettings {
	bool bEnabled; // 0x00(0x01)
	enum class ETslCrosshairDotType Type; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Rotation; // 0x04(0x04)
	float Size; // 0x08(0x04)
	float Opacity; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslCrosshairLineSettings
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslCrosshairLineSettings {
	bool bEnabled; // 0x00(0x01)
	enum class ETslCrosshairShape Shape; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Length; // 0x04(0x04)
	float Thickness; // 0x08(0x04)
	float Opacity; // 0x0c(0x04)
	float Rotation; // 0x10(0x04)
	float Angle; // 0x14(0x04)
};

// ScriptStruct TslGame.*4594ee10e7
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*4594ee10e7 : FTableRowBase {
	struct FString Category; // 0x08(0x10)
	struct TArray<struct FString> *76f18d6699; // 0x18(0x10)
};

// ScriptStruct TslGame.*b7f8c858bb
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*b7f8c858bb : FTableRowBase {
	struct FString *e276f9c7fa; // 0x08(0x10)
	struct FString *1cef1080b2; // 0x18(0x10)
};

// ScriptStruct TslGame.*2b8ec72989
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct F*2b8ec72989 : F*dda85a1d9f {
	struct FName TabName; // 0x30(0x08)
	struct FName *0d93eb9460; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct F*6bb9a84aa7 *c17f7f4adc; // 0x48(0x02)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct TslGame.*dda85a1d9f
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*dda85a1d9f : FTableRowBase {
	int32 *216916d676; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText *3b2aad74f6; // 0x10(0x18)
	struct F*98b102ec9a *7175b8f31f; // 0x28(0x02)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct TslGame.*98b102ec9a
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*98b102ec9a {
	bool bKeyboardMouse; // 0x00(0x01)
	bool bGamepad; // 0x01(0x01)
};

// ScriptStruct TslGame.*6bb9a84aa7
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*6bb9a84aa7 {
	bool bVisibleInLobby; // 0x00(0x01)
	bool bVisibleInGame; // 0x01(0x01)
};

// ScriptStruct TslGame.*40c1fbc611
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct F*40c1fbc611 : F*dda85a1d9f {
	struct FName TabName; // 0x30(0x08)
	struct FName *0d93eb9460; // 0x38(0x08)
};

// ScriptStruct TslGame.*f57c9c5a45
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct F*f57c9c5a45 : F*dda85a1d9f {
	struct FName TabName; // 0x30(0x08)
};

// ScriptStruct TslGame.*e24636a398
// Size: 0x218 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct F*e24636a398 : F*dda85a1d9f {
	enum class EOptionTab TabName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName *0d93eb9460; // 0x38(0x08)
	struct FName CategoryName; // 0x40(0x08)
	struct FName ItemName; // 0x48(0x08)
	struct FText DescriptionText; // 0x50(0x18)
	struct UClass* *b7a7b822c3; // 0x68(0x08)
	struct FTslGameOptionSupplementaryData *a3e05185c3; // 0x70(0x138)
	struct UClass* *8093f88734; // 0x1a8(0x08)
	bool *c0dd835406; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct TArray<struct FTslGameOptionItemStepperData_EditorType> *322c1112c7; // 0x1b8(0x10)
	struct FTslGameOptionKeyBindingDesc *de4679ba18; // 0x1c8(0x38)
	struct FString *2f0a96761a; // 0x200(0x10)
	struct F*6bb9a84aa7 *c17f7f4adc; // 0x210(0x02)
	bool bUseIndentation; // 0x212(0x01)
	char pad_213[0x5]; // 0x213(0x05)
};

// ScriptStruct TslGame.TslGameOptionKeyBindingDesc
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionKeyBindingDesc {
	enum class ETslGameOptionKeyBindingType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName InputName; // 0x08(0x08)
	float InputAxisScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FKey> ForbiddenKeys; // 0x18(0x10)
	struct TArray<struct FTslGameOptionDuplicateProhibitedKeyBinderData> DuplicateProhibitionData; // 0x28(0x10)
};

// ScriptStruct TslGame.TslGameOptionDuplicateProhibitedKeyBinderData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionDuplicateProhibitedKeyBinderData {
	struct FName DuplicateProhibitedTabName; // 0x00(0x08)
	struct FName DuplicateProhibitedCategoryName; // 0x08(0x08)
	struct FName DuplicateProhibitedItemName; // 0x10(0x08)
};

// ScriptStruct TslGame.TslGameOptionItemStepperData_EditorType
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionItemStepperData_EditorType {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct FTslGameOptionSupplementaryData SupplementData; // 0x30(0x138)
};

// ScriptStruct TslGame.TslGameOptionSupplementaryData
// Size: 0x138 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionSupplementaryData {
	enum class ETslGameOptionSupplementaryType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	bool bHasPreviewColor; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FTslCrosshairSettings CrosshairSettings; // 0x18(0x60)
	bool bHasPreviewCrosshairSettings; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UTexture2D* TextureData; // 0x80(0x20)
	struct UMaterialInterface* MaterialData; // 0xa0(0x20)
	struct TMap<struct FName, float> MaterialParameters; // 0xc0(0x50)
	struct FText LinkButtonTextData; // 0x110(0x18)
	struct FString ExternalLink; // 0x128(0x10)
};

// ScriptStruct TslGame.TslGameOptionItemStepperData
// Size: 0x168 (Inherited: 0x00)  [layout: KHOP]
struct FTslGameOptionItemStepperData {
	struct FText DisplayNameText; // 0x00(0x18)
	struct FText DetailedDescriptionText; // 0x18(0x18)
	struct FTslGameOptionSupplementaryData SupplementData; // 0x30(0x138)
};

// ScriptStruct TslGame.*c8a5a5ee8f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c8a5a5ee8f {
	struct TArray<struct F*7c1310fcf4> Hierarchy; // 0x00(0x10)
};

// ScriptStruct TslGame.*7c1310fcf4
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*7c1310fcf4 {
	struct F*f57c9c5a45 TabDesc_DataTableRow; // 0x00(0x38)
	struct TArray<struct F*9e946a5b3f> SubTabs; // 0x38(0x10)
};

// ScriptStruct TslGame.*9e946a5b3f
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*9e946a5b3f {
	struct F*40c1fbc611 SubTabDesc_DataTableRow; // 0x00(0x40)
	struct TArray<struct F*e48d16826d> Categories; // 0x40(0x10)
};

// ScriptStruct TslGame.*e48d16826d
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*e48d16826d {
	struct F*2b8ec72989 CategoryDesc_DataTableRow; // 0x00(0x50)
	struct TArray<struct F*e24636a398> Items_DataTable; // 0x50(0x10)
};

// ScriptStruct TslGame.*c4399404d3
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*c4399404d3 {
	struct TArray<enum class EGameModeType> GameModeTypeList; // 0x00(0x10)
	struct FString WidgetName; // 0x10(0x10)
	bool bRemoveWidget; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct F*85697a7d8c NewWidgetConfig; // 0x28(0x38)
};

// ScriptStruct TslGame.*40d2c563de
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*40d2c563de {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*a3ae4ebc27 RegionalSetting; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*a3ae4ebc27
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*a3ae4ebc27 {
	float FogDensity; // 0x00(0x04)
	struct FLinearColor FogColor; // 0x04(0x10)
	float FogStartDistance; // 0x14(0x04)
	float VolFogExtinctionScale; // 0x18(0x04)
	float WeatherParticleSpawnScale; // 0x1c(0x04)
	float WindScale; // 0x20(0x04)
};

// ScriptStruct TslGame.*55979b3734
// Size: 0x28 (Inherited: 0x10)  [layout: KHOP]
struct F*55979b3734 : F*add63e1dca {
	struct FLinearColor VectorValue; // 0x10(0x10)
	struct U*5e2750edbb* VectorCurve; // 0x20(0x08)
};

// ScriptStruct TslGame.*add63e1dca
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*add63e1dca {
	struct FName ParamName; // 0x00(0x08)
	float TargetTime; // 0x08(0x04)
	float BlendTime; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f307cac04d
// Size: 0x20 (Inherited: 0x10)  [layout: KHOP]
struct F*f307cac04d : F*add63e1dca {
	float ScalarValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UCurveFloat* FloatCurve; // 0x18(0x08)
};

// ScriptStruct TslGame.*b0e63b44f0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b0e63b44f0 {
	float Strength; // 0x00(0x04)
	float Speed; // 0x04(0x04)
	float MinGustAmount; // 0x08(0x04)
	float MaxGustAmount; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float Yaw; // 0x14(0x04)
};

// ScriptStruct TslGame.DynamicWeatherHistory
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FDynamicWeatherHistory {
	int32 WeatherIndex; // 0x00(0x04)
	float SustainedTime; // 0x04(0x04)
};

// ScriptStruct TslGame.*ba471d37a2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ba471d37a2 {
	struct TArray<struct U*1ea233ad94*> *338ef1942c; // 0x00(0x10)
};

// ScriptStruct TslGame.TslReplayWeather
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FTslReplayWeather {
	float ReplayEventTime; // 0x00(0x04)
	enum class ETslWeatherAction Action; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 WeatherIndex; // 0x08(0x04)
	int32 OldWeatherIndex; // 0x0c(0x04)
	float SaturateTime; // 0x10(0x04)
	float BlendInTime; // 0x14(0x04)
	float BlendOutTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FDynamicWeatherHistory> DynamicWeatherHistory; // 0x20(0x10)
};

// ScriptStruct TslGame.*2c3e30a8b1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2c3e30a8b1 {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct TslGame.*1458272ab5
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1458272ab5 {
	struct ATslWeatherParticle* *72f7f05d52; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*33bae1a1eb
// Size: 0xd8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*33bae1a1eb {
	struct APostProcessVolume* PostProcessVolume; // 0x00(0x08)
	struct F*05196b3dfd *05196b3dfd; // 0x08(0x20)
	bool bUseCustomSetting; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct F*5f3a39bc9f LocalWeatherSetting; // 0x30(0x58)
	char pad_88[0x50]; // 0x88(0x50)
};

// ScriptStruct TslGame.*5f3a39bc9f
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*5f3a39bc9f {
	struct F*5ceabf21a2 EnvironmentLightSetting; // 0x00(0x10)
	struct ATslParticle* LocalWeatherParticle; // 0x10(0x08)
	float WeatherParticleSpawnScale; // 0x18(0x04)
	char bIgnoreGlobalSpawnScale : 1; // 0x1c(0x01)
	char bIgnoreGlobalParticle : 1; // 0x1c(0x01)
	char bUseWetEffectWithSpawnScale : 1; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float FogDensity; // 0x20(0x04)
	struct FLinearColor FogColor; // 0x24(0x10)
	float FogStartDistance; // 0x34(0x04)
	float VolFogExtinctionScale; // 0x38(0x04)
	float SoundScale; // 0x3c(0x04)
	struct F*b0e63b44f0 WindDataSetting; // 0x40(0x18)
};

// ScriptStruct TslGame.*5ceabf21a2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5ceabf21a2 {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*05196b3dfd
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*05196b3dfd {
	struct APostProcessVolume* *0446607385; // 0x00(0x08)
	struct ATslParticleEnvironment* *f340cb0a62; // 0x08(0x08)
	float *c0f531bd8d; // 0x10(0x04)
	float *33219a861f; // 0x14(0x04)
	bool *d27c106033; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*d91f63e04c
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d91f63e04c {
	char pad_0[0x10]; // 0x00(0x10)
	struct ATslWeatherParticle* *e13f6c850f; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct ATslWeatherParticle* *47807bf4ac; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct TslGame.*05ae3a341b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*05ae3a341b {
	float DirectionalLightIntensity; // 0x00(0x04)
	float DirectionalLightTemperature; // 0x04(0x04)
	float DirectionalLightVolumetricScattering; // 0x08(0x04)
	float SkyLightIntensity; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f5408cd47d
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f5408cd47d {
	struct FString WeatherName; // 0x00(0x10)
	struct ATslDynamicWeather* DynamicWeather; // 0x10(0x08)
	float weight; // 0x18(0x04)
	float DirectionalLightIntensity; // 0x1c(0x04)
	float DirectionalLightTemperature; // 0x20(0x04)
	float DirectionalLightVolumetricScattering; // 0x24(0x04)
	float SkyLightIntensity; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UTextureCube* SkyLightCubemap; // 0x30(0x08)
	float SkyLightCubemapAngle; // 0x38(0x04)
	float SkyLightCubemapResolution; // 0x3c(0x04)
	char bUseBlendSkyBox : 1; // 0x40(0x01)
	char bRefreshLightSetting : 1; // 0x40(0x01)
	char bOverrideDurationTime : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OverrideDurationTimeMin; // 0x44(0x04)
	float OverrideDurationTimeMax; // 0x48(0x04)
	char bUseDistanceDepthBlur : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float DepthBlurIntensity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCurveFloat* DepthBlurCurveAsset; // 0x58(0x08)
	char bClearFootprints : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct TslGame.*eca9420092
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*eca9420092 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString HairType; // 0x08(0x10)
	struct TArray<struct F*bb8dc00cb7> ColorData; // 0x18(0x10)
};

// ScriptStruct TslGame.*bb8dc00cb7
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*bb8dc00cb7 {
	int32 *68729e5868; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *47025f5149; // 0x08(0x20)
};

// ScriptStruct TslGame.*5e8c16f1e1
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*5e8c16f1e1 {
	enum class EGender Gender; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString *22ba479bc9; // 0x08(0x10)
	struct TArray<struct F*97b642bf55> ColorData; // 0x18(0x10)
};

// ScriptStruct TslGame.*97b642bf55
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*97b642bf55 {
	int32 *68729e5868; // 0x00(0x04)
	struct FColor Color; // 0x04(0x04)
	struct UCustomizableObject* *702e33afb1; // 0x08(0x20)
	struct UCustomizableObject* *63e27ac660; // 0x28(0x20)
};

// ScriptStruct TslGame.*d3fdec3802
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d3fdec3802 {
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct TslGame.*dd8395d35f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dd8395d35f {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.PostProcessMaterial
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPostProcessMaterial {
	struct UMaterialInterface* EffectMaterial; // 0x00(0x08)
	float BlendWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ab9d821647
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*ab9d821647 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> StandingTraceTargets; // 0x08(0x10)
	struct TArray<struct FVector2D> CrouchTraceTargets; // 0x18(0x10)
	struct TArray<struct FVector> ProneTraceTargets; // 0x28(0x10)
	float ProxyTraceMaxLenght; // 0x38(0x04)
	float ProxyTraceMinLenght; // 0x3c(0x04)
};

// ScriptStruct TslGame.SpecialDecal
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FSpecialDecal {
	struct FString DecalName; // 0x00(0x10)
	struct FVector2D DecalSize; // 0x10(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x18(0x08)
};

// ScriptStruct TslGame.CustomInputSettings
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCustomInputSettings {
	struct TArray<struct FCustomActionKeyData> ActionKeyList; // 0x00(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeyList; // 0x10(0x10)
	bool bIsUsingPerScopeMouseSensitivity; // 0x20(0x01)
	bool bIsUsingPerScopeGamepadSensitivity; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FCustomMouseSensitiveData> MouseSensitiveList; // 0x28(0x10)
	struct TArray<struct FCustomGamePadSensitiveData> GamePadSensitiveList; // 0x38(0x10)
	struct TMap<enum class ETslControllerType, struct FCustomSensitiveDataArray> SensitiveMap; // 0x48(0x50)
	float MouseVerticalSensitivityMultiplierAdjusted; // 0x98(0x04)
	bool bInvertMouse; // 0x9c(0x01)
	bool bInvertGamePadY; // 0x9d(0x01)
	bool bInvertGamePadX; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float GamePadDeadZone; // 0xa0(0x04)
	float GamepadVerticalSensitivityMultiplier; // 0xa4(0x04)
	float StartRunningSensitivity; // 0xa8(0x04)
	float GamePadDeadZone_Left; // 0xac(0x04)
	bool bEnableAimAccPad; // 0xb0(0x01)
	char pad_B1[0x1f]; // 0xb1(0x1f)
};

// ScriptStruct TslGame.CustomSensitiveDataArray
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCustomSensitiveDataArray {
	struct TArray<struct FCustomSensitiveData> Array; // 0x00(0x10)
};

// ScriptStruct TslGame.CustomSensitiveData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCustomSensitiveData {
	struct FName SensitiveName; // 0x00(0x08)
	float Sensitivity; // 0x08(0x04)
	float LastConvertedSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomGamePadSensitiveData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCustomGamePadSensitiveData {
	struct FName GamePadSensitiveName; // 0x00(0x08)
	float GamePadSensitivity; // 0x08(0x04)
	float LastConvertedGamePadSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FCustomMouseSensitiveData {
	struct FName MouseSensitiveName; // 0x00(0x08)
	float MouseSensitivity; // 0x08(0x04)
	float LastConvertedMouseSensitivity; // 0x0c(0x04)
};

// ScriptStruct TslGame.CustomAxisKeyData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FCustomAxisKeyData {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTslInputKey> Keys; // 0x10(0x10)
};

// ScriptStruct TslGame.CustomActionKeyData
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FCustomActionKeyData {
	struct FName ActionName; // 0x00(0x08)
	struct TArray<struct FTslInputKey> Keys; // 0x08(0x10)
};

// ScriptStruct TslGame.TslKeyHintSet
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct FTslKeyHintSet : FTableRowBase {
	int32 Priority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UClass*> Conditions; // 0x10(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x20(0x10)
	struct TArray<struct FTslKeyHintTableCheckerSet> KeyHintTableChekcerData; // 0x30(0x10)
	struct TArray<struct FName> KeyHintInfoRowNames; // 0x40(0x10)
	struct TArray<struct FTslKeyHintInfo> HintInfos; // 0x50(0x10)
};

// ScriptStruct TslGame.TslKeyHintInfo
// Size: 0xb8 (Inherited: 0x08)  [layout: KHOP]
struct FTslKeyHintInfo : FTableRowBase {
	bool ShowWhenUnassigned; // 0x08(0x01)
	bool bCheckConditionOnTick; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FActionOrAxis> ActionsAndAxes; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FText InputModeText; // 0x38(0x18)
	struct FSlateColor DisplayNameColor; // 0x50(0x28)
	bool GradeSetting; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UClass*> AdditionalConditions; // 0x80(0x10)
	struct TArray<struct FName> TableChekcerRowNames; // 0x90(0x10)
	struct TArray<struct FTslKeyHintTableCheckerSet> KeyHintTableChekcerData; // 0xa0(0x10)
	bool UniqueKeyHintWidgetFromSameAction; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class ECombinationKeyHoldType CombinationKeyHoldType; // 0xb4(0x04)
};

// ScriptStruct TslGame.TslKeyHintTableCheckerSet
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct FTslKeyHintTableCheckerSet : FTableRowBase {
	enum class ETableCheckerHideOption HideOrShow; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* KeyHintTableChecker; // 0x10(0x08)
	struct TArray<struct FString> WeaponNames; // 0x18(0x10)
	struct TArray<struct FString> ScopeNames; // 0x28(0x10)
	struct TArray<struct FString> AttachmentNames; // 0x38(0x10)
	struct TArray<struct FString> GameModeNames; // 0x48(0x10)
};

// ScriptStruct TslGame.TslOutGameCloudOptionData
// Size: 0x300 (Inherited: 0x00)  [layout: KHOP]
struct FTslOutGameCloudOptionData {
	bool bIsDirty; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CultureName; // 0x08(0x10)
	bool bMuteMaster; // 0x18(0x01)
	bool bMuteEffect; // 0x19(0x01)
	bool bMuteUI; // 0x1a(0x01)
	bool bMuteBGM; // 0x1b(0x01)
	bool bHRTF; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString MusicTitle; // 0x20(0x10)
	bool bOpenRadioAudio; // 0x30(0x01)
	bool bIsRenewalWeaponSoundEnabled; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float MasterVolume; // 0x34(0x04)
	float EffectVolume; // 0x38(0x04)
	float EmoteVolume; // 0x3c(0x04)
	float UIVolume; // 0x40(0x04)
	float BGMVolume; // 0x44(0x04)
	bool bVoiceInputMute; // 0x48(0x01)
	bool bVoiceOutputMute; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32 VoiceInputVolume; // 0x4c(0x04)
	int32 VoiceOutputVolume; // 0x50(0x04)
	bool bPushToTalk; // 0x54(0x01)
	bool bToggleVoiceChat; // 0x55(0x01)
	bool bGlobalVoice; // 0x56(0x01)
	bool bTeamVoice; // 0x57(0x01)
	bool bInvMouse; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float VertMult; // 0x5c(0x04)
	bool bScopeUniv; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TMap<struct FName, float> Sensitivities; // 0x68(0x50)
	struct TMap<enum class EInputModeSettingActions, enum class ETslInputModes> InputModes; // 0xb8(0x50)
	struct TArray<struct FCustomActionKeyData> ActionKeys; // 0x108(0x10)
	struct TArray<struct FCustomAxisKeyData> AxisKeys; // 0x118(0x10)
	enum class EColorBlindType ColorBlindType; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FString CrosshairColorStr; // 0x130(0x10)
	struct FColor CustomCrosshairColor; // 0x140(0x04)
	struct FTslCrosshairSettings RifleCrosshairSettings; // 0x144(0x60)
	struct FTslCrosshairSettings ShotgunCrosshairSettings; // 0x1a4(0x60)
	struct FTslCrosshairSettings PistolCrosshairSettings; // 0x204(0x60)
	struct FTslCrosshairSettings ThrowableCrosshairSettings; // 0x264(0x60)
	bool bShowSpectatedPlayerCrosshair; // 0x2c4(0x01)
	enum class EUiShowType FppWeaponIconShowType; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	int32 WorldMapZoomLv; // 0x2c8(0x04)
	enum class EMinimapColorType MinimapColorType; // 0x2cc(0x01)
	bool bMinimapDynZoom; // 0x2cd(0x01)
	bool bIconKillfeed; // 0x2ce(0x01)
	char pad_2CF[0x1]; // 0x2cf(0x01)
	int32 KillfeedListSize; // 0x2d0(0x04)
	bool bHideKillfeedName; // 0x2d4(0x01)
	bool bDisplayClanMessage; // 0x2d5(0x01)
	bool bHighlightInteraction; // 0x2d6(0x01)
	bool bShowCompassShade; // 0x2d7(0x01)
	bool bNetStat; // 0x2d8(0x01)
	bool bOnScrKeyGuide; // 0x2d9(0x01)
	enum class EKeyHintGradeSettingValue KeyhintGrade; // 0x2da(0x01)
	bool bUseNewDropItemEffects; // 0x2db(0x01)
	bool bEnablePadInventoryTooltip; // 0x2dc(0x01)
	bool bDisplayDirectMessage; // 0x2dd(0x01)
	bool bShowHead; // 0x2de(0x01)
	bool bShowTorsoArmor; // 0x2df(0x01)
	bool bShowBelt; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	int32 InstantVolumeReducerIntensity; // 0x2e4(0x04)
	bool bFreeLookInterp; // 0x2e8(0x01)
	enum class ETppAimCameraPosition TppAimCam; // 0x2e9(0x01)
	bool bAutoReload; // 0x2ea(0x01)
	enum class EFiringMode HGsMode; // 0x2eb(0x01)
	enum class EFiringMode SMGsMode; // 0x2ec(0x01)
	enum class EFiringMode ARsMode; // 0x2ed(0x01)
	enum class EFiringMode DMRsMode; // 0x2ee(0x01)
	enum class EFiringMode ShotgunsMode; // 0x2ef(0x01)
	enum class EFiringMode SecondarySMGsMode; // 0x2f0(0x01)
	enum class EFiringMode SecondaryARsMode; // 0x2f1(0x01)
	bool bAutoEquipAttachByInteract; // 0x2f2(0x01)
	bool bAutoReplaceAttachment; // 0x2f3(0x01)
	bool bAutoEquipAttachFromInv; // 0x2f4(0x01)
	bool bAutoWeaponSkinReplacement; // 0x2f5(0x01)
	bool bReplay; // 0x2f6(0x01)
	bool bKillCam; // 0x2f7(0x01)
	bool bUseActionQueuing; // 0x2f8(0x01)
	bool bRecommendBullet; // 0x2f9(0x01)
	bool bRecommendEquipment; // 0x2fa(0x01)
	bool bRecommendAttachment; // 0x2fb(0x01)
	bool bPreventVehicleFall; // 0x2fc(0x01)
	bool ShowFlightTrail; // 0x2fd(0x01)
	bool ShowPingOrWaypoint; // 0x2fe(0x01)
	bool bVehicleSkinAutoApply; // 0x2ff(0x01)
};

// ScriptStruct TslGame.*13e6446820
// Size: 0x398 (Inherited: 0x290)  [layout: KHOP]
struct F*13e6446820 : F*7dff736ba8 {
	struct UWeaponAttachmentDataAsset* WeaponAttachmentData; // 0x290(0x08)
	struct FWeaponAttachmentData AttachmentData; // 0x298(0x80)
	struct UStaticMesh* AttachmentMeshAsset; // 0x318(0x20)
	struct FName AttachmentMeshName; // 0x338(0x08)
	struct TArray<struct F*954dea4270> AttachmentWeaponTagData; // 0x340(0x10)
	bool EquipOnPickUp; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UAkAudioEvent* *7ea918cfc7; // 0x358(0x20)
	struct UAkAudioEvent* *6144f2c0c8; // 0x378(0x20)
};

// ScriptStruct TslGame.TslPersistantData
// Size: 0x498 (Inherited: 0x00)  [layout: KHOP]
struct FTslPersistantData {
	struct FCustomInputSettings CustomInputSettings; // 0x00(0xd0)
	bool bUseForceFeedback; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float ForceFeedbackMultiplier; // 0xd4(0x04)
	float FpsCameraFov; // 0xd8(0x04)
	float Gamma; // 0xdc(0x04)
	bool bIsMasterSoundMute; // 0xe0(0x01)
	bool bIsEffectSoundMute; // 0xe1(0x01)
	bool bIsUISoundMute; // 0xe2(0x01)
	bool bIsRenewalWeaponSoundEnabled; // 0xe3(0x01)
	bool bIsBGMSoundMute; // 0xe4(0x01)
	bool bIsEnabledHrtfRemoteWeaponSound; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FString CultureName; // 0xe8(0x10)
	bool bIconKillfeedEnabled; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32 ColorBlindType; // 0xfc(0x04)
	struct FString CrosshairColorString; // 0x100(0x10)
	struct FColor CustomCrosshairColor; // 0x110(0x04)
	enum class ECrosshairWeaponGroup CurrentCrosshairWeaponGroup; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FTslCrosshairSettings RifleCrosshairSettings; // 0x118(0x60)
	struct FTslCrosshairSettings ShotgunCrosshairSettings; // 0x178(0x60)
	struct FTslCrosshairSettings PistolCrosshairSettings; // 0x1d8(0x60)
	struct FTslCrosshairSettings ThrowableCrosshairSettings; // 0x238(0x60)
	bool bShowSpectatedPlayerCrosshair; // 0x298(0x01)
	bool bUseKeyHint; // 0x299(0x01)
	enum class EKeyHintGradeSettingValue EKeyhintGrade; // 0x29a(0x01)
	bool bShowNetworkInfo; // 0x29b(0x01)
	enum class ETppAimCameraPosition TppAimCamPosRecoveryType; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	float ForwardRunningSensitivity; // 0x2a0(0x04)
	float MasterSoundVolume; // 0x2a4(0x04)
	float EffectSoundVolume; // 0x2a8(0x04)
	float EmoteSoundVolume; // 0x2ac(0x04)
	float UISoundVolume; // 0x2b0(0x04)
	float BGMSoundVolume; // 0x2b4(0x04)
	float PlaygroundBGMSoundVolume; // 0x2b8(0x04)
	float PlaygroundWebSoundVolume; // 0x2bc(0x04)
	struct FString MusicTitle; // 0x2c0(0x10)
	struct FString MusicTitleKeyOfLasPlayedSeason; // 0x2d0(0x10)
	bool bUseCustomReticleType; // 0x2e0(0x01)
	enum class EFiringMode HGsFiringMode; // 0x2e1(0x01)
	enum class EFiringMode SMGsFiringMode; // 0x2e2(0x01)
	enum class EFiringMode ARsFiringMode; // 0x2e3(0x01)
	enum class EFiringMode DMRsFiringMode; // 0x2e4(0x01)
	enum class EFiringMode ShotgunsFiringMode; // 0x2e5(0x01)
	enum class EFiringMode SecondarySMGsFiringMode; // 0x2e6(0x01)
	enum class EFiringMode SecondaryARsFiringMode; // 0x2e7(0x01)
	bool bUseRes4K; // 0x2e8(0x01)
	bool bUseTAA; // 0x2e9(0x01)
	bool bAutoReloadOnOutOfAmmoFire; // 0x2ea(0x01)
	bool bShowCompassShade; // 0x2eb(0x01)
	int32 GamepadPresets; // 0x2ec(0x04)
	bool AutoEquipAttachment; // 0x2f0(0x01)
	enum class EAutoEquipAttachmentForScopeMode AutoEquipAttachmentForScope; // 0x2f1(0x01)
	bool AutoReplaceAttachment; // 0x2f2(0x01)
	bool bEnableUniversalGamma; // 0x2f3(0x01)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TMap<struct FString, float> GammasForMap; // 0x2f8(0x50)
	bool bAutoWeaponSkinReplacement; // 0x348(0x01)
	bool bAutoVehicleSkinReplacement; // 0x349(0x01)
	bool bHidePlayerNicknames; // 0x34a(0x01)
	bool bDisplayClanMessage; // 0x34b(0x01)
	bool bEnableRadioMessage; // 0x34c(0x01)
	bool bDisplayDirectMessage; // 0x34d(0x01)
	bool bOpenRadioAudio; // 0x34e(0x01)
	bool bEnableCrossNetworkPlay; // 0x34f(0x01)
	enum class EContinuousHealItem ContinuousType; // 0x350(0x01)
	enum class ERadioMessagePresets RadioMessagePreset; // 0x351(0x01)
	bool bEnableRadioMessageQuickPing; // 0x352(0x01)
	bool bUseKillCam; // 0x353(0x01)
	bool bUseActionQueuing; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	int32 InstantVolumeReducerIntensity; // 0x358(0x04)
	float HDRGamma; // 0x35c(0x04)
	enum class EUiShowType FppWeaponIconShowType; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	int32 WorldMapZoomSpeedLevel; // 0x364(0x04)
	enum class EUiShowType TpsWeaponIconShowType; // 0x368(0x01)
	bool InputDeviceType; // 0x369(0x01)
	enum class ETslInputModes InputModeCrouch; // 0x36a(0x01)
	enum class ETslInputModes InputModeProne; // 0x36b(0x01)
	enum class ETslInputModes InputModeWalk; // 0x36c(0x01)
	enum class ETslInputModes bToggleSprint; // 0x36d(0x01)
	enum class ETslInputModes InputModeHoldRotation; // 0x36e(0x01)
	enum class ETslInputModes InputModeHoldBreath; // 0x36f(0x01)
	enum class ETslInputModes InputModeHoldAngled; // 0x370(0x01)
	enum class ETslInputModes InputModePeek; // 0x371(0x01)
	enum class ETslInputModes InputModeMap; // 0x372(0x01)
	enum class ETslInputModes InputModeADS; // 0x373(0x01)
	enum class ETslInputModes InputModeAim; // 0x374(0x01)
	enum class ETslInputModes InputModeInventory; // 0x375(0x01)
	enum class ETslInputModes InputModeMinimapExpand; // 0x376(0x01)
	enum class ETslInputModes InputModeThrowableItemWheel; // 0x377(0x01)
	enum class ETslInputModes InputModeHealItemWheel; // 0x378(0x01)
	enum class ETslInputModes InputModeRadioMessageWheel; // 0x379(0x01)
	bool bUseNewDropItemEffects; // 0x37a(0x01)
	bool bShowTracerDisplay; // 0x37b(0x01)
	bool bUseTracerTeamColor; // 0x37c(0x01)
	bool bShowHead; // 0x37d(0x01)
	bool bShowTorsoArmor; // 0x37e(0x01)
	bool bShowBelt; // 0x37f(0x01)
	bool bEnablePadInventoryTooltip; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float ObserverMovingSpeed; // 0x384(0x04)
	bool ObserverHeaderGunUseage; // 0x388(0x01)
	bool ObserverTagUseage; // 0x389(0x01)
	bool ObserverXRayUseage; // 0x38a(0x01)
	bool ObserverXRayTeamColorUseage; // 0x38b(0x01)
	bool ObserverDamageIndicatorUsage; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct TMap<struct FName, int32> DefaultReticleMap; // 0x390(0x50)
	struct TArray<struct FTslGamepadActionKeyData> GamepadCustomActionKeys; // 0x3e0(0x10)
	struct TArray<struct FTslGamepadAxisKeyData> GamepadCustomAxisKeys; // 0x3f0(0x10)
	enum class EGamepadPresets BasePresetForCustomKeyBinding; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TMap<struct FName, float> DefaultReticleBrightnessMap; // 0x408(0x50)
	struct FString BuildVersion; // 0x458(0x10)
	float GamepadInventoryNavigationSensitivity; // 0x468(0x04)
	float SafeZonePercentage; // 0x46c(0x04)
	bool bUseBulletRecommandOption; // 0x470(0x01)
	bool bUseEquipmentRecommandOption; // 0x471(0x01)
	bool bUseAttachmentRecommendOption; // 0x472(0x01)
	bool bIsVoiceInputMute; // 0x473(0x01)
	bool bEnableVehicleFallPrevention; // 0x474(0x01)
	bool bEnableVehicleSkinAutoApply; // 0x475(0x01)
	bool bIsVoiceOutputMute; // 0x476(0x01)
	char pad_477[0x1]; // 0x477(0x01)
	int32 VoiceInputVolume; // 0x478(0x04)
	int32 VoiceOutputVolume; // 0x47c(0x04)
	bool ShowFlightTrail; // 0x480(0x01)
	bool ShowPingOrWaypoint; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct FString HandledKeyBindingExceptions; // 0x488(0x10)
};

// ScriptStruct TslGame.OutgameUserDataSet
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FOutgameUserDataSet {
	struct TArray<struct FOutgameUserData> OutGameUserDateSet; // 0x00(0x10)
};

// ScriptStruct TslGame.OutgameUserData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FOutgameUserData {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct TslGame.TslPsnLog
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FTslPsnLog {
	struct FString FunctionName; // 0x00(0x10)
	bool isSuccessful; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString failResult; // 0x18(0x10)
	struct FString additionalData; // 0x28(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastable
// Size: 0x520 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct FItemTableRowCastable : F*7dff736ba8 {
	bool *40ebbe9f5e; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct F*7ebf0c1e1e *7ebf0c1e1e; // 0x298(0x230)
	enum class ECastableItemType *674ed7ca25; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UClass* *7fe33f040a; // 0x4d0(0x08)
	bool *0f79423b59; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UTexture2D* *45ff05d613; // 0x4e0(0x20)
	struct TArray<struct UClass*> *0a870567ba; // 0x500(0x10)
	struct FName SkinTag; // 0x510(0x08)
	bool bDisableCastableSkinning; // 0x518(0x01)
	bool bKeepSkinByDropping; // 0x519(0x01)
	char pad_51A[0x6]; // 0x51a(0x06)
};

// ScriptStruct TslGame.ItemTableRowCastableSelectBox
// Size: 0x540 (Inherited: 0x520)  [layout: KHOP]
struct FItemTableRowCastableSelectBox : FItemTableRowCastable {
	struct TArray<struct FName> SelectableItems; // 0x520(0x10)
	int32 SelectCount; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UClass* *21de3e17f1; // 0x538(0x08)
};

// ScriptStruct TslGame.*56b2319105
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*56b2319105 : FTableRowBase {
	struct FVector Transition; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct TslGame.*9737edc067
// Size: 0x68 (Inherited: 0x08)  [layout: KHOP]
struct F*9737edc067 : FTableRowBase {
	struct FName *486adeaf06; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	struct TArray<int32> StackCount; // 0x18(0x10)
	uint32 weight; // 0x28(0x04)
	bool *684ea98dab; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float *5862a8d18c; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> Attachments; // 0x38(0x10)
	struct F*0cb0bb7c93 *44ec8bcc04; // 0x48(0x20)
};

// ScriptStruct TslGame.*0cb0bb7c93
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*0cb0bb7c93 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<int32> StackCount; // 0x08(0x10)
	bool *684ea98dab; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *5862a8d18c; // 0x1c(0x04)
};

// ScriptStruct TslGame.HighlightRecordConfig
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FHighlightRecordConfig {
	float BeforeDurationSec; // 0x00(0x04)
	float AfterDurationSec; // 0x04(0x04)
	float LinkWaitDurationSec; // 0x08(0x04)
};

// ScriptStruct TslGame.*91c8985acc
// Size: 0x238 (Inherited: 0x00)  [layout: KHOP]
struct F*91c8985acc {
	float MaxInteractableDistance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*7ebf0c1e1e CastConfig; // 0x08(0x230)
};

// ScriptStruct TslGame.ItemTableRowCraft
// Size: 0x290 (Inherited: 0x290)  [layout: KHOP]
struct FItemTableRowCraft : F*7dff736ba8 {
};

// ScriptStruct TslGame.ItemTableRowBluechip
// Size: 0x290 (Inherited: 0x290)  [layout: KHOP]
struct FItemTableRowBluechip : F*7dff736ba8 {
};

// ScriptStruct TslGame.ItemTableRowCastableEquipmentRepairKit
// Size: 0x5e8 (Inherited: 0x520)  [layout: KHOP]
struct FItemTableRowCastableEquipmentRepairKit : FItemTableRowCastable {
	enum class EEquipSlotID EquipSlot; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	float RepairAmount; // 0x524(0x04)
	struct F*31adb93cbf Anim_CastOnTarget; // 0x528(0xc0)
};

// ScriptStruct TslGame.ItemTableRowCastableHealOverTime
// Size: 0x540 (Inherited: 0x520)  [layout: KHOP]
struct FItemTableRowCastableHealOverTime : FItemTableRowCastable {
	struct UClass* *ab5a0831cd; // 0x520(0x20)
};

// ScriptStruct TslGame.ItemTableRowCastableHealInstant
// Size: 0x528 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct FItemTableRowCastableHealInstant : FItemTableRowCastable {
	float *82b027d413; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
};

// ScriptStruct TslGame.*431b1522bd
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*431b1522bd : FTableRowBase {
	struct FName SpawnKitName; // 0x08(0x08)
	struct TArray<struct FSpawnKitInfo> SpawnKitInfos; // 0x10(0x10)
};

// ScriptStruct TslGame.SpawnKitInfo
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct FSpawnKitInfo : FTableRowBase {
	enum class EWeaponClass WeaponCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString SpawnKitId; // 0x10(0x10)
	struct FText InfoName; // 0x20(0x18)
	struct TArray<struct FSpawnKitItemInfo> ItemInfos; // 0x38(0x10)
};

// ScriptStruct TslGame.SpawnKitItemInfo
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FSpawnKitItemInfo {
	int32 ItemCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	struct TArray<struct FName> AttachmentIDs; // 0x10(0x10)
	struct FName SkinItemID; // 0x20(0x08)
};

// ScriptStruct TslGame.*34384792be
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*34384792be {
	struct FName WeaponItemId; // 0x00(0x08)
	struct TArray<struct FName> *9d3873aff4; // 0x08(0x10)
};

// ScriptStruct TslGame.*ed3cd726ad
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*ed3cd726ad {
	struct TMap<struct FString, struct F*48dffc46d3> *69cdc7518b; // 0x00(0x50)
};

// ScriptStruct TslGame.*48dffc46d3
// Size: 0xc8 (Inherited: 0x10)  [layout: KHOP]
struct F*48dffc46d3 : F*3c3927baa0 {
	struct FString *1064931426; // 0x10(0x10)
	float *de6b3b6818; // 0x20(0x04)
	float *202c65bbaf; // 0x24(0x04)
	struct TMap<enum class EEquipSlotID, int32> *062f664d1c; // 0x28(0x50)
	struct TMap<enum class EEquipSlotID, int32> *ed1212ace9; // 0x78(0x50)
};

// ScriptStruct TslGame.*3c3927baa0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*3c3927baa0 {
	struct TArray<struct UItem*> Items; // 0x00(0x10)
};

// ScriptStruct TslGame.ItemTableRowCastableRandomBox
// Size: 0x538 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct FItemTableRowCastableRandomBox : FItemTableRowCastable {
	struct TArray<struct F*bf1150d8ee> RandomBoxDatas; // 0x520(0x10)
	bool *66f2a376ca; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
};

// ScriptStruct TslGame.*bf1150d8ee
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*bf1150d8ee {
	float weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSpawnKitInfo SpawnKitInfo; // 0x08(0x48)
};

// ScriptStruct TslGame.ItemTableRowCastableVehicleRepairKit
// Size: 0x528 (Inherited: 0x520)  [layout: KHOP]
struct FItemTableRowCastableVehicleRepairKit : FItemTableRowCastable {
	float RepairAmount; // 0x520(0x04)
	float VehicleSpeedThreshold; // 0x524(0x04)
};

// ScriptStruct TslGame.ItemTableRowContender
// Size: 0x2f0 (Inherited: 0x290)  [layout: KHOP]
struct FItemTableRowContender : F*7dff736ba8 {
	struct FName *67867a0a2c; // 0x290(0x08)
	struct TArray<struct FContenderParticleDivingTrailData> ParticleDivingTrailDataArray; // 0x298(0x10)
	struct TArray<struct F*fee25cf089> *420e6aba1a; // 0x2a8(0x10)
	float *2e0dbb06a3; // 0x2b8(0x04)
	float SpawnPerUnit; // 0x2bc(0x04)
	float *b5c5819fbf; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct F*45b58a40e6> *540ae8f4a9; // 0x2c8(0x10)
	struct FName *98b8805e38; // 0x2d8(0x08)
	struct TArray<struct F*028ae1f06b> *ed50166434; // 0x2e0(0x10)
};

// ScriptStruct TslGame.*028ae1f06b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*028ae1f06b {
	struct FName *e8c73482ce; // 0x00(0x08)
	struct FName *56bd990090; // 0x08(0x08)
};

// ScriptStruct TslGame.*45b58a40e6
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*45b58a40e6 {
	struct UClass* *e1d85cf58d; // 0x00(0x20)
	struct FName SocketName; // 0x20(0x08)
	struct F*750f7c483e *750f7c483e; // 0x28(0x03)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*750f7c483e
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*750f7c483e {
	bool *b1c1cc22ae; // 0x00(0x01)
	bool *f7b6fb248c; // 0x01(0x01)
	bool *73284d560d; // 0x02(0x01)
};

// ScriptStruct TslGame.*fee25cf089
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*fee25cf089 {
	struct UClass* *c9a6e0a5d9; // 0x00(0x20)
	struct UClass* *85ae2e7055; // 0x20(0x20)
	struct UClass* *cedef196cf; // 0x40(0x20)
	struct UClass* *62605f455c; // 0x60(0x20)
};

// ScriptStruct TslGame.ContenderParticleDivingTrailData
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct FContenderParticleDivingTrailData {
	struct UClass* *c9a6e0a5d9; // 0x00(0x20)
	struct UClass* *cedef196cf; // 0x20(0x20)
	struct FName *b98f031f0a; // 0x40(0x08)
	struct UStaticMesh* StaticMesh; // 0x48(0x20)
	struct FName *94fbd661cd; // 0x68(0x08)
};

// ScriptStruct TslGame.*fc8a0a561b
// Size: 0x4b8 (Inherited: 0x468)  [layout: KHOP]
struct F*fc8a0a561b : F*ade180f0b5 {
	struct UClass* WeaponType; // 0x468(0x20)
	struct FName WeaponTag; // 0x488(0x08)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x490(0x01)
	bool bShowAmmoInfoOnWidget; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct UTexture2D* SimpleIconTexture; // 0x498(0x20)
};

// ScriptStruct TslGame.*72b640e101
// Size: 0x4c8 (Inherited: 0x4b8)  [layout: KHOP]
struct F*72b640e101 : F*fc8a0a561b {
	int32 AmmoCount; // 0x4b8(0x04)
	int32 ForcedPrimarySlotIndex; // 0x4bc(0x04)
	bool bDisablePrimaryWeaponSwap; // 0x4c0(0x01)
	bool bDisableDropAndDetachAttachments; // 0x4c1(0x01)
	bool bHasNumberOfUses; // 0x4c2(0x01)
	char pad_4C3[0x1]; // 0x4c3(0x01)
	int32 NumberOfUses; // 0x4c4(0x04)
};

// ScriptStruct TslGame.*04f5bc4d4e
// Size: 0x4d0 (Inherited: 0x4c8)  [layout: LECH - offset chi la uoc luong]
struct F*04f5bc4d4e : F*72b640e101 {
	int32 DebuffChargesCount; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
};

// ScriptStruct TslGame.*80090fbdac
// Size: 0x488 (Inherited: 0x468)  [layout: KHOP]
struct F*80090fbdac : F*ade180f0b5 {
	struct TArray<struct FString> CustomizationGroups; // 0x468(0x10)
	struct TArray<struct F*ede4ad043c> SignatureWeaponSkinData; // 0x478(0x10)
};

// ScriptStruct TslGame.*ede4ad043c
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*ede4ad043c {
	struct FString *e351a62d28; // 0x00(0x10)
	struct FString *70c66bfbdd; // 0x10(0x10)
};

// ScriptStruct TslGame.*a747b426c7
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*a747b426c7 : FTableRowBase {
	struct FString *ea7be28c7f; // 0x08(0x10)
	struct TArray<struct F*5319c834f4> *188b4fcfc6; // 0x18(0x10)
};

// ScriptStruct TslGame.*5319c834f4
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*5319c834f4 {
	struct FCustomizableObjectIdentifier CustomizableObjectIdentifier; // 0x00(0x30)
	struct F*f7667cd97f *c520a529de; // 0x30(0x20)
	struct FString *2c14e2da2e; // 0x50(0x10)
};

// ScriptStruct TslGame.*a616184f4b
// Size: 0x560 (Inherited: 0x468)  [layout: KHOP]
struct F*a616184f4b : F*ade180f0b5 {
	int32 ItemLevel; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FTransform SlotOffset_Primary; // 0x470(0x30)
	struct FTransform SlotOffset_Secondary; // 0x4a0(0x30)
	struct FTransform SlotOffset_SideArm; // 0x4d0(0x30)
	struct FTransform SlotOffset_Melee; // 0x500(0x30)
	struct FTransform SlotOffset_Thrown; // 0x530(0x30)
};

// ScriptStruct TslGame.*62a3650e1f
// Size: 0x290 (Inherited: 0x290)  [layout: KHOP]
struct F*62a3650e1f : F*7dff736ba8 {
};

// ScriptStruct TslGame.*5d4bd0a4fc
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*5d4bd0a4fc {
	int32 BundleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString BundleName; // 0x08(0x10)
	enum class ELobbyItemBundleType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct F*71e6dbae95> *5762af8e99; // 0x20(0x10)
};

// ScriptStruct TslGame.*71e6dbae95
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*71e6dbae95 {
	struct UClass* *afc233f51b; // 0x00(0x20)
	int32 BundleId; // 0x20(0x04)
	int32 Quantity; // 0x24(0x04)
};

// ScriptStruct TslGame.*443cd0f891
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*443cd0f891 {
	struct U*286da7131b* *6288199cf1; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*66abf8900c
// Size: 0x190 (Inherited: 0x138)  [layout: KHOP]
struct F*66abf8900c : F*3b1d63a452 {
	struct FStringClassReference ReplaceVehicle; // 0x138(0x10)
	enum class EVehicleSkinCategory VehicleSkinCategory; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct UClass* VehicleAnimInst; // 0x150(0x08)
	struct TArray<struct F*642c6082f2> DefaultPartSkinList; // 0x158(0x10)
	bool bOverwriteWheelSetups; // 0x168(0x01)
	bool bOverwriteWheelRadius; // 0x169(0x01)
	bool bOverwriteEngineSetups; // 0x16a(0x01)
	bool bOverwriteMassSetups; // 0x16b(0x01)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct UAnimSequence* *68753c2a5d; // 0x170(0x20)
};

// ScriptStruct TslGame.*642c6082f2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*642c6082f2 {
	enum class EVehiclePartType *8eb879dee0; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *f23bfdf656; // 0x08(0x08)
};

// ScriptStruct TslGame.*3d4a864914
// Size: 0x2a8 (Inherited: 0x290)  [layout: KHOP]
struct F*3d4a864914 : F*7dff736ba8 {
	bool bAutoAction; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FSkinParam SkinParam; // 0x298(0x10)
};

// ScriptStruct TslGame.ItemTableRowUsedByAction
// Size: 0x290 (Inherited: 0x290)  [layout: KHOP]
struct FItemTableRowUsedByAction : F*7dff736ba8 {
};

// ScriptStruct TslGame.*ed8e025d3c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ed8e025d3c {
	struct TArray<struct UItemSpotComponent*> *46173230c0; // 0x00(0x10)
};

// ScriptStruct TslGame.*9a30b0d8f4
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9a30b0d8f4 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.*587cded6ac
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*587cded6ac {
	struct FName LevelBlockId; // 0x00(0x08)
	int32 *c9a06d4389; // 0x08(0x04)
	int32 *0438a8a0e4; // 0x0c(0x04)
	enum class EItemSpotGroupType *cd9d0f7d78; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*db22e38941
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*db22e38941 {
	struct FVector Location; // 0x00(0x0c)
	int32 *73bd92ac38; // 0x0c(0x04)
};

// ScriptStruct TslGame.*2ae4bccdb6
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2ae4bccdb6 {
	struct FVector *23a930e3d1; // 0x00(0x0c)
	struct F*16a5d72ef4 *5540043a6e; // 0x0c(0x0c)
	uint32 HouseID; // 0x18(0x04)
	enum class EItemSpotType *5fe54ac626; // 0x1c(0x01)
	bool *0b6b4c6f83; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct TslGame.*e7a9221aa3
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e7a9221aa3 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FName LevelBlockId; // 0x18(0x08)
};

// ScriptStruct TslGame.*7cd060d16b
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*7cd060d16b {
	struct AActor* *1449e0e79f; // 0x00(0x08)
	float *6cb1ba57d9; // 0x08(0x04)
	float *1da658fe59; // 0x0c(0x04)
	float *3a5296ca86; // 0x10(0x04)
	float *e20a053765; // 0x14(0x04)
	struct FVector *fe25ff2a32; // 0x18(0x0c)
	float *06cfae2dab; // 0x24(0x04)
};

// ScriptStruct TslGame.*d2ed6dd7e2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*d2ed6dd7e2 {
	float *076def6fa5; // 0x00(0x04)
	float *df397f6bef; // 0x04(0x04)
	float *9671789f73; // 0x08(0x04)
	float *442887ff6e; // 0x0c(0x04)
	float *7a3b126017; // 0x10(0x04)
	float *e99bd9df6d; // 0x14(0x04)
};

// ScriptStruct TslGame.*a1fd2105e4
// Size: 0xe8 (Inherited: 0x00)  [layout: KHOP]
struct F*a1fd2105e4 {
	bool bIgnoreBots; // 0x00(0x01)
	bool bIgnorePillar; // 0x01(0x01)
	bool bIgnoreDBNO; // 0x02(0x01)
	bool bArmed; // 0x03(0x01)
	bool PatrolSafeZoneEdgePhase; // 0x04(0x01)
	bool bIgnorePriorityTargetsAfterPatrolSafeZoneEdgePhase; // 0x05(0x01)
	enum class ECollisionChannel TruckLineOfSightTraceChannel; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float TruckSightRadius; // 0x08(0x04)
	float TruckFieldOfViewHalfAngle; // 0x0c(0x04)
	float TruckHearingRadius; // 0x10(0x04)
	float TruckHearingLosRadius; // 0x14(0x04)
	float TruckSensingInterval; // 0x18(0x04)
	float TruckStopNearTargetMinDistance; // 0x1c(0x04)
	float TruckStopNearTargetMaxDistance; // 0x20(0x04)
	enum class ECollisionChannel *3f8c166994; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MainTurretBlindRadius; // 0x28(0x04)
	float MainTurretSightRadius; // 0x2c(0x04)
	float MainTurretFieldOfView; // 0x30(0x04)
	float MainTurretFiringRange; // 0x34(0x04)
	float MainTurretFiringAngle; // 0x38(0x04)
	float MainTurretSightCheckInterval; // 0x3c(0x04)
	float MainTurretMaxWeaponSpread; // 0x40(0x04)
	float MainTurretMinWeaponSpread; // 0x44(0x04)
	float IncendiaryTriggerRadius; // 0x48(0x04)
	float IncendiaryTargetsCheckInterval; // 0x4c(0x04)
	bool bIncendiariesGenerateSightThreat; // 0x50(0x01)
	bool bIncendiaryPriortityTargetOnlyFireIfInCover; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float IncendiaryPriortityTargetInCoverDelay; // 0x54(0x04)
	float IncendiaryPriorityTargetRange; // 0x58(0x04)
	float IncendiaryPriorityTargetRearCollisionCheckDistance; // 0x5c(0x04)
	float IncendiaryTurretsFiringRange; // 0x60(0x04)
	float IncendiaryTurretsHorizontalFiringAngle; // 0x64(0x04)
	float IncendiaryTurretsVerticalFiringAngle; // 0x68(0x04)
	struct F*d2ed6dd7e2 DamageThreatConfig; // 0x6c(0x18)
	struct F*d2ed6dd7e2 SightThreatConfig; // 0x84(0x18)
	struct F*d2ed6dd7e2 NoiseThreatConfig; // 0x9c(0x18)
	float TimeToKill; // 0xb4(0x04)
	float TimeToKillMinimumTargetDistance; // 0xb8(0x04)
	float TimeToKillMaximumTargetDistance; // 0xbc(0x04)
	float MinimumTargetDistanceTimeToKillGainMultiplier; // 0xc0(0x04)
	float MaximumTargetDistanceTimeToGainKillMultiplier; // 0xc4(0x04)
	float DistanceTimeToKillMultiplierWeight; // 0xc8(0x04)
	float PotentialTargetTimeToKillGainMultiplier; // 0xcc(0x04)
	float PotentialTargetTimeToKillMultiplierWeight; // 0xd0(0x04)
	float ActiveTargetTimeToKillGainMultiplier; // 0xd4(0x04)
	float ActiveTargetTimeToKillMultiplierWeight; // 0xd8(0x04)
	float TimeToKillUpdateInterval; // 0xdc(0x04)
	float TurretCollisionCheckInterval; // 0xe0(0x04)
	float TurretCollisionDisabledSpeed; // 0xe4(0x04)
};

// ScriptStruct TslGame.*a2ab2286a0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*a2ab2286a0 {
	enum class ELocationType LocationType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText LocationName; // 0x08(0x18)
	struct FVector2D Position_MC; // 0x20(0x08)
};

// ScriptStruct TslGame.OutGamePremiumCraftEffectParam
// Size: 0x78 (Inherited: 0x18)  [layout: KHOP]
struct FOutGamePremiumCraftEffectParam : FOutGameEffectParam {
	struct FString TitleText; // 0x18(0x10)
	struct FString IconURL; // 0x28(0x10)
	struct FString Level; // 0x38(0x10)
	struct FString ItemName; // 0x48(0x10)
	struct FString GradeText; // 0x58(0x10)
	struct FString GradeHexColorCode; // 0x68(0x10)
};

// ScriptStruct TslGame.OutGameEffectParam
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FOutGameEffectParam {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString umgId; // 0x08(0x10)
};

// ScriptStruct TslGame.OutGameFinalLevelUpEffectParam
// Size: 0x58 (Inherited: 0x18)  [layout: KHOP]
struct FOutGameFinalLevelUpEffectParam : FOutGameEffectParam {
	struct FString TitleText; // 0x18(0x10)
	struct FString IconURL; // 0x28(0x10)
	struct FString Level; // 0x38(0x10)
	struct FString ItemName; // 0x48(0x10)
};

// ScriptStruct TslGame.OutGameItemLevelUpEffectParam
// Size: 0x38 (Inherited: 0x18)  [layout: KHOP]
struct FOutGameItemLevelUpEffectParam : FOutGameEffectParam {
	struct FString TitleText; // 0x18(0x10)
	struct FString Level; // 0x28(0x10)
};

// ScriptStruct TslGame.*a79e0d7828
// Size: 0x60 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*a79e0d7828 : FTableRowBase {
	struct UAnimSequence* PlayerPose; // 0x08(0x08)
	struct FTransform SurvivalPageTransform; // 0x10(0x30)
	struct FString SurvivalPageScene; // 0x40(0x10)
	struct UClass* PoseAsset; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*f30944e495
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f30944e495 {
	struct TArray<struct FLinearColor> Vectors; // 0x00(0x10)
	struct TArray<struct UTexture*> Textures; // 0x10(0x10)
};

// ScriptStruct TslGame.*eacc765a02
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eacc765a02 {
	struct FName Name; // 0x00(0x08)
	enum class EMaterialParameterType Type; // 0x08(0x01)
	bool *8af01b3281; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32 *47ae850aa7; // 0x0c(0x04)
	enum class EParameterLUTChannel *77248cd888; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*735a4ec8f6
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*735a4ec8f6 {
	struct FVector ActorLocation; // 0x00(0x0c)
	struct FVector *7c278c4136; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
};

// ScriptStruct TslGame.*3368445c21
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3368445c21 {
	struct FName *86eac504c1; // 0x00(0x08)
	float *bd968ab195; // 0x08(0x04)
	bool *4ed95edde6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*8e4d378d7c
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct F*8e4d378d7c {
	struct F*fc4016ab53 *fc4016ab53; // 0x00(0x88)
	float *a6a05eb8bb; // 0x88(0x04)
	int32 *9f732a0734; // 0x8c(0x04)
};

// ScriptStruct TslGame.*fc4016ab53
// Size: 0x88 (Inherited: 0x00)  [layout: KHOP]
struct F*fc4016ab53 {
	struct TArray<struct UAnimSequenceBase*> *55f08e7c8f; // 0x00(0x10)
	struct FAlphaBlend *ea3af5710a; // 0x10(0x38)
	struct FAlphaBlend *bfa1d67436; // 0x48(0x38)
	float PlayRate; // 0x80(0x04)
	enum class ECustomAnimSlotType *247c641cf4; // 0x84(0x01)
	bool *0ad6ab4eca; // 0x85(0x01)
	bool *97059f2230; // 0x86(0x01)
	bool bLooping; // 0x87(0x01)
};

// ScriptStruct TslGame.*13b42bd202
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*13b42bd202 {
	float *6ea7343345; // 0x00(0x04)
	int32 *3c8e119e3f; // 0x04(0x04)
	int32 *e46b991150; // 0x08(0x04)
	int32 *b37b25f816; // 0x0c(0x04)
	int32 *63042cead1; // 0x10(0x04)
	int32 *700445be0e; // 0x14(0x04)
	int32 *581cccdcfd; // 0x18(0x04)
	float *1764e424b6; // 0x1c(0x04)
};

// ScriptStruct TslGame.*db2cecdb2c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*db2cecdb2c {
	int32 Score; // 0x00(0x04)
	bool bIsVisible; // 0x04(0x01)
	bool *e16b42d7ed; // 0x05(0x01)
	bool *d23a99a1d9; // 0x06(0x01)
	bool *f916e08baf; // 0x07(0x01)
	float DistanceSq; // 0x08(0x04)
	float *4a3019c200; // 0x0c(0x04)
	struct AActor* Target; // 0x10(0x08)
};

// ScriptStruct TslGame.*6bd999a0fd
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6bd999a0fd {
	struct FVector RelativeLocation; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct UClass* *8aa17c3d74; // 0x10(0x08)
	float *c7cb9403ea; // 0x18(0x04)
	float *b27d7e671c; // 0x1c(0x04)
	float *8c9fade036; // 0x20(0x04)
	enum class ENpcWalkingSpeedType *4154629196; // 0x24(0x01)
	bool *77030d76e1; // 0x25(0x01)
	bool *3cd05b3d98; // 0x26(0x01)
	bool *edf03cd0ba; // 0x27(0x01)
	float *96c8cbd84c; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*03977c2f7e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*03977c2f7e {
	float *e5aff7e26b; // 0x00(0x04)
	int32 SpawnNum; // 0x04(0x04)
	struct TArray<struct F*0f2787e41f> *0c6704c76b; // 0x08(0x10)
};

// ScriptStruct TslGame.*0f2787e41f
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*0f2787e41f {
	int32 *da2f5aaf80; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
};

// ScriptStruct TslGame.*cbb81af4a0
// Size: 0x2c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cbb81af4a0 {
	int32 *da2f5aaf80; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	int32 Count; // 0x1c(0x04)
	struct UObject* Instigator; // 0x20(0x08)
	bool *bfc95ec82b; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct TslGame.*e0681a7721
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e0681a7721 {
	struct UClass* Pawn; // 0x00(0x08)
	struct UClass* Controller; // 0x08(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x10(0x08)
	struct TArray<struct F*b56e96851e> *29857f844a; // 0x18(0x10)
	bool *701e0ff2f7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*b56e96851e
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*b56e96851e {
	struct TArray<struct UClass*> *7dae882d57; // 0x00(0x10)
	struct TArray<struct FName> ItemIds; // 0x10(0x10)
};

// ScriptStruct TslGame.*c3200ea50a
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c3200ea50a {
	float ElapsedTimeSec; // 0x00(0x04)
	uint16 *87bce7d6b0; // 0x04(0x02)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct TslGame.*0135f92a83
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*0135f92a83 {
	float ElapsedTimeSec; // 0x00(0x04)
	uint16 NumOutBunch; // 0x04(0x02)
	uint16 NumOutPacket; // 0x06(0x02)
	uint16 NumOutPacketNaked; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct F*2093b7a948> NakedPacketDataList; // 0x10(0x10)
	struct TArray<struct F*dff7cdf528> NakedBunchDataList; // 0x20(0x10)
};

// ScriptStruct TslGame.*dff7cdf528
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*dff7cdf528 {
	uint16 NumSent; // 0x00(0x02)
	uint16 NumLoss; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Content; // 0x08(0x08)
};

// ScriptStruct TslGame.*2093b7a948
// Size: 0x06 (Inherited: 0x00)  [layout: KHOP]
struct F*2093b7a948 {
	uint16 NumLoss; // 0x00(0x02)
	uint16 SizeBitsPlain; // 0x02(0x02)
	uint16 SizeBitsEncryped; // 0x04(0x02)
};

// ScriptStruct TslGame.*dcfb7da6d3
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dcfb7da6d3 {
	struct FName LevelBlockId; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	int32 *73bd92ac38; // 0x20(0x04)
	int32 *f0c38e1b50; // 0x24(0x04)
	int32 *ec314a256a; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*1099a32e9c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*1099a32e9c {
	struct UParticleSystem* Template; // 0x00(0x08)
	float *820798bdb5; // 0x08(0x04)
	float *dc635963c8; // 0x0c(0x04)
};

// ScriptStruct TslGame.*cafdfce67c
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*cafdfce67c {
	float PillarGruntStartHealth; // 0x00(0x04)
	float PillarBossStartHealth; // 0x04(0x04)
	float PatrolAlarmDuration; // 0x08(0x04)
	float *f914eb2309; // 0x0c(0x04)
	float *1c2599a0cd; // 0x10(0x04)
};

// ScriptStruct TslGame.*676fc01f6e
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*676fc01f6e {
	enum class *03fd6e3082 X; // 0x00(0x01)
	enum class *03fd6e3082 Y; // 0x01(0x01)
	enum class *03fd6e3082 Z; // 0x02(0x01)
};

// ScriptStruct TslGame.*4f78a2b311
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4f78a2b311 {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	enum class *a7e029bc99 ForwardAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector LocalOffset; // 0x1c(0x0c)
	float Length; // 0x28(0x04)
	struct FVector2D RotationRange; // 0x2c(0x08)
	float Scale; // 0x34(0x04)
	bool bScaleXYZ; // 0x38(0x01)
	bool bFlip; // 0x39(0x01)
	bool bOffsetShiftWithScale; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct TslGame.*9285c621f9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9285c621f9 {
	struct UClass* TargetClass; // 0x00(0x08)
	struct UClass* *4e4953a864; // 0x08(0x08)
};

// ScriptStruct TslGame.*558722c83d
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*558722c83d {
	float *c3640c98b4; // 0x00(0x04)
	float *fb9b41b707; // 0x04(0x04)
};

// ScriptStruct TslGame.*e101280a1c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*e101280a1c {
	struct FVector2D *35f59420f3; // 0x00(0x08)
	float *d66a23a65e; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *82cb5b990c; // 0x10(0x08)
};

// ScriptStruct TslGame.*c4aec76e09
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*c4aec76e09 {
	struct TMap<enum class EWeaponClass, struct FVector2D> *4089cb35da; // 0x00(0x50)
	bool *87f4437501; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<int32, struct FVector2D> *9d7f9fb4df; // 0x58(0x50)
};

// ScriptStruct TslGame.*bedad4a628
// Size: 0xf0 (Inherited: 0x00)  [layout: KHOP]
struct F*bedad4a628 {
	struct FText *520869ae94; // 0x00(0x18)
	struct FText *8521634410; // 0x18(0x18)
	struct FText *0d81907845; // 0x30(0x18)
	struct FText *cacc808a28; // 0x48(0x18)
	struct FText *718a26dafe; // 0x60(0x18)
	struct FText *290a613ac7; // 0x78(0x18)
	struct FText *fc5e62f11b; // 0x90(0x18)
	struct FText *fd750d3f3d; // 0xa8(0x18)
	struct FText *4dd8d02985; // 0xc0(0x18)
	struct FText *95f63f65c1; // 0xd8(0x18)
};

// ScriptStruct TslGame.*7ed627e2e2
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*7ed627e2e2 : FTableRowBase {
	enum class ESmokeReleaseObjectType ObjectType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *aac3d20a1a; // 0x0c(0x04)
	float *c6536a1c69; // 0x10(0x04)
	float *1f9e2d2c79; // 0x14(0x04)
};

// ScriptStruct TslGame.*0929e8e57d
// Size: 0x44 (Inherited: 0x00)  [layout: KHOP]
struct F*0929e8e57d {
	float SpotlightTargetLostInterval; // 0x00(0x04)
	float SpotlightTargetBroadcastDelay; // 0x04(0x04)
	struct FRotator SpotlightNeutralRotation; // 0x08(0x0c)
	float PatrolCooldown; // 0x14(0x04)
	float AlarmCooldown; // 0x18(0x04)
	int32 PatrolSafeZoneEdgePhase; // 0x1c(0x04)
	int32 IgnoreAlarmPhase; // 0x20(0x04)
	float MinBZPatrolRadiusScale; // 0x24(0x04)
	float MaxBZPatrolRadiusScale; // 0x28(0x04)
	bool bIgnoreBots; // 0x2c(0x01)
	bool bIgnorePillar; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float *fa521166c7; // 0x30(0x04)
	float *56d927d2db; // 0x34(0x04)
	float *9eff262a54; // 0x38(0x04)
	float *6265fe413d; // 0x3c(0x04)
	float *28b6a1ff06; // 0x40(0x04)
};

// ScriptStruct TslGame.*f7893ff88a
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f7893ff88a {
	struct TArray<struct F*c31e3fde3e> *a97206daaa; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*4d1efee4c1
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4d1efee4c1 {
	int32 MaterialIndex; // 0x00(0x04)
	float delayTime; // 0x04(0x04)
	float *e13fea7383; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*12f553ffe8
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*12f553ffe8 {
	struct UAnimMontage* *ce18c6039d; // 0x00(0x08)
	struct UAnimMontage* *ce61ac098f; // 0x08(0x08)
	float *5eed658458; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.InventoryItem
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FInventoryItem {
	int32 Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UItem* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*4915f706fd
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*4915f706fd {
	bool *84bd11b8f8; // 0x00(0x01)
	bool bIsHiddenOnClient; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> *3155367af4; // 0x08(0x10)
	struct TArray<struct F*bb2c6e0bee> *ed32214013; // 0x18(0x10)
};

// ScriptStruct TslGame.*bb2c6e0bee
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*bb2c6e0bee {
	struct FName *a844e06bf7; // 0x00(0x08)
	struct UClass* *0a516c7323; // 0x08(0x08)
};

// ScriptStruct TslGame.*bbb38ba3cb
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bbb38ba3cb {
	struct UClass* *4670b8bc00; // 0x00(0x08)
	bool *20accc7b41; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*081394b4f7
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*081394b4f7 {
	bool bLoadableEquipSlotID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*90b21117c7> LoadableEquipSlotInfos; // 0x08(0x10)
};

// ScriptStruct TslGame.*90b21117c7
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*90b21117c7 {
	float ApplySpaceRate; // 0x00(0x04)
	enum class EEquipSlotID LoadableEquipSlotID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*ca43835a0b
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ca43835a0b {
	enum class EThingSpotGroupType GroupType; // 0x00(0x01)
	bool bActiveByStartVolume; // 0x01(0x01)
	enum class EThingGroupSpawnType SpawnType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FName TargetSpotTag; // 0x08(0x08)
	struct FFloatRange TotalCountRange; // 0x10(0x10)
	float TotalCountMultiplierWithPlayerCount; // 0x20(0x04)
	float ProbabilityPercent; // 0x24(0x04)
	float ProbabilityPercentMultiplierWithPlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*568a2dbdde
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*568a2dbdde : FTableRowBase {
	enum class EThingSpotGroupType GroupType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* SpawnTarget; // 0x10(0x08)
	bool bSnapToFloor; // 0x18(0x01)
	bool bIsControlledByStringParameter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString StringParameterKey; // 0x20(0x10)
};

// ScriptStruct TslGame.*df6ed5cfd9
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*df6ed5cfd9 {
	struct FName Name; // 0x00(0x08)
	int32 weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*e2e8996ca8
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*e2e8996ca8 : FTableRowBase {
	struct FName CategoryFilter; // 0x08(0x08)
	struct FName SubCategoryFilter; // 0x10(0x08)
	struct UClass* Vehicle; // 0x18(0x08)
	int32 weight; // 0x20(0x04)
	bool bSnapToFloor; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct TslGame.*e64fb1d0c9
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct F*e64fb1d0c9 : F*ca43835a0b {
	struct TArray<struct F*df6ed5cfd9> WeightsPerCategory; // 0x30(0x10)
	struct FFloatRange FuelPercentRange; // 0x40(0x10)
	bool bSnapToFloor; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.*3eb09ec0c8
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*3eb09ec0c8 {
	struct FVector2D SupporterToUploadingStartLocation; // 0x00(0x08)
	struct FVector SupporterToUploadingEndLocation; // 0x08(0x0c)
	float MaxInteractableDistance; // 0x14(0x04)
};

// ScriptStruct TslGame.*ca2991f7d9
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ca2991f7d9 {
	enum class ETeamParkourState State; // 0x00(0x01)
	enum class ETeamParkourState *b50ec7710d; // 0x01(0x01)
	enum class ETeamParkourRole Role; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct FVector> *64beeb17b9; // 0x08(0x10)
	int32 *a7ac9c3201; // 0x18(0x04)
	int32 *e721776f3e; // 0x1c(0x04)
	int32 *424560bba0; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.TestLog
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct FTestLog : FLogBase {
	uint32 UInt32Max; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	uint64 UInt64Max; // 0x68(0x08)
	uint32 UInt32Min; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	uint64 UInt64Min; // 0x78(0x08)
	int32 Int32Max; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64 Int64Max; // 0x88(0x08)
	int32 Int32Min; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	int64 Int64Min; // 0x98(0x08)
};

// ScriptStruct TslGame.BenchmarkSequenceConfig
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBenchmarkSequenceConfig {
	struct FString MapName; // 0x00(0x10)
	struct FString BenchmarkPath; // 0x10(0x10)
	struct FString LevelSequenceName; // 0x20(0x10)
	struct FString CameraName; // 0x30(0x10)
	float PlayRate; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct TslGame.*1c76c3ecdc
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1c76c3ecdc {
	struct FName FunctionName; // 0x00(0x08)
	struct FString CommandName; // 0x08(0x10)
	float delayTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*e868941dfb
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*e868941dfb {
	struct UAnimMontage* *993e8c1ea6; // 0x00(0x08)
};

// ScriptStruct TslGame.*df54a5f38a
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*df54a5f38a {
	struct FName LevelBlockId; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector2D *9f3e4dfd47; // 0x20(0x08)
	struct FName *1d3b6c9d37; // 0x28(0x08)
	enum class EThingSpotGroupType *cd9d0f7d78; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.*f444df8a02
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*f444df8a02 {
	struct FStringAssetReference *55706f04c2; // 0x00(0x10)
	struct FStringAssetReference *cf945ad938; // 0x10(0x10)
	struct FStringAssetReference *a14a7d5a61; // 0x20(0x10)
};

// ScriptStruct TslGame.*6df6cdc899
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6df6cdc899 {
	float Distance; // 0x00(0x04)
	float Angle; // 0x04(0x04)
	char UsingDir : 1; // 0x08(0x01)
	bool bStopMove; // 0x09(0x01)
	bool bTrace; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct TslGame.*712e2db4d2
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*712e2db4d2 {
	struct F*fe3dfbf051 TargetData; // 0x00(0x28)
	struct TArray<struct F*88b7d2eeb8> TargetGameplayEffectSpecs; // 0x28(0x10)
};

// ScriptStruct TslGame.*1012bb526f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*1012bb526f {
	struct TArray<struct UClass*> TargetGameplayEffectClasses; // 0x00(0x10)
};

// ScriptStruct TslGame.*756224b30a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*756224b30a {
	struct FName AbilityID; // 0x00(0x08)
	int32 TotalActivate; // 0x08(0x04)
	int32 TotalSuccess; // 0x0c(0x04)
	int32 TotalCancel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*998506ec30
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*998506ec30 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*2d9ade41ce
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*2d9ade41ce {
	enum class EAccessorySlot Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *bdd8640f2a; // 0x08(0x08)
};

// ScriptStruct TslGame.*5fb4490cf2
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5fb4490cf2 {
	char pad_0[0xe0]; // 0x00(0xe0)
};

// ScriptStruct TslGame.*d0453a885e
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*d0453a885e {
	float Stand_RunningSpeedModifier; // 0x00(0x04)
	float Stand_SprintingSpeedModifier; // 0x04(0x04)
	float *e580c5cc6d; // 0x08(0x04)
	float *5b4beca4ee; // 0x0c(0x04)
	float *25026c7333; // 0x10(0x04)
	float *2fe6eee0a9; // 0x14(0x04)
};

// ScriptStruct TslGame.*c0a2464741
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c0a2464741 {
	int32 MaterialIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName MaterialParameterName; // 0x08(0x08)
	struct UCurveFloat* Curve; // 0x10(0x08)
};

// ScriptStruct TslGame.*f406ae2aaa
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f406ae2aaa {
	struct FVector TargetLocation; // 0x00(0x0c)
	bool *152d8f946f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*3e85614ae7
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*3e85614ae7 : FTableRowBase {
	int32 weight; // 0x08(0x04)
	enum class EGender *54025674f6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct F*5a1b340aee> *a56f0af1b4; // 0x10(0x10)
};

// ScriptStruct TslGame.*5a1b340aee
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5a1b340aee {
	enum class EEquipSlotID SlotName; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName AvatarItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*fdb53a34a9
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fdb53a34a9 {
	struct ATslSpawnScriptBotBox* Box; // 0x00(0x08)
	struct UClass* *61eca0e4b7; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	enum class EGuardRank *717a5e6893; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct ATslPatrolPath* *ba3a99548b; // 0x48(0x08)
	struct ATslPatrolPath* *9e866d1e67; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct TslGame.*36f100197a
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*36f100197a {
	struct ATslScriptBotCharacter* *9b129f261c; // 0x00(0x08)
	struct FGuid *caf1fd92fc; // 0x08(0x10)
};

// ScriptStruct TslGame.*a7658beaf8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a7658beaf8 {
	struct TArray<struct F*f125486d8f> *f93a8744e2; // 0x00(0x10)
};

// ScriptStruct TslGame.*f125486d8f
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*f125486d8f {
	bool *c9d9675457; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* *cd28a60bc1; // 0x08(0x08)
	struct FTransform *a5088d5efe; // 0x10(0x30)
	struct TArray<struct ATslStaticContainer*> *d37d5c6ad2; // 0x40(0x10)
	struct TArray<struct AActor*> *cc5a2aa073; // 0x50(0x10)
	struct TArray<struct ATslPatrolPath*> Paths; // 0x60(0x10)
	struct TArray<struct ATslScriptBotCharacter*> *770a4b1fc7; // 0x70(0x10)
	struct TArray<struct ATslParticleEnvironment*> *b7383805c1; // 0x80(0x10)
	struct TArray<struct F*06b0f4f59e> *f3472c878b; // 0x90(0x10)
	struct FGuid *caf1fd92fc; // 0xa0(0x10)
};

// ScriptStruct TslGame.*06b0f4f59e
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*06b0f4f59e {
	struct UClass* ParticleEnvironment; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleTransform; // 0x10(0x30)
	float ActivateDistances; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*f9666b88b7
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f9666b88b7 {
	struct FStringAssetReference *1d76b17070; // 0x00(0x10)
	struct TArray<struct F*d5d1f388ae> *715d5134c8; // 0x10(0x10)
};

// ScriptStruct TslGame.*d5d1f388ae
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*d5d1f388ae {
	struct UPrefabAsset* PrefabAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform PrefabTransform; // 0x10(0x30)
};

// ScriptStruct TslGame.*259373f0fc
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*259373f0fc : FTableRowBase {
	struct UPrefabAsset* ArtPrefabAsset; // 0x08(0x08)
	struct UPrefabAsset* AiPrefabAsset; // 0x10(0x08)
};

// ScriptStruct TslGame.*53b612a7c4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*53b612a7c4 {
	struct TArray<struct ATslPatrolPoint*> *db7b61be21; // 0x00(0x10)
};

// ScriptStruct TslGame.*deb5fc9968
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*deb5fc9968 {
	enum class *aeffff8711 Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Dist; // 0x04(0x04)
};

// ScriptStruct TslGame.*c807285bbc
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c807285bbc {
	float ProbabilityFirstHit; // 0x00(0x04)
	float DurationTime; // 0x04(0x04)
	float DurationDamageMax; // 0x08(0x04)
	float DurationEmptyShot; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ed9f6acea3
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ed9f6acea3 {
	struct ATslScriptBotCharacter* *065c47dc0e; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*8c42e74e23
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8c42e74e23 {
	struct U*57bd5fcbdd* *df24c0b9bb; // 0x00(0x08)
	char pad_8[0x70]; // 0x08(0x70)
};

// ScriptStruct TslGame.*b5d28daf80
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b5d28daf80 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct TslGame.HouseGroup
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FHouseGroup {
	struct FString GroupName; // 0x00(0x10)
	float Radius; // 0x10(0x04)
	struct FVector AvgLocation; // 0x14(0x0c)
	struct TArray<int32> ChildrenHouseIds; // 0x20(0x10)
	bool bInHotSpot; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName HotSpotName; // 0x38(0x08)
	bool bIsBanned; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.BRBotTeleportGroup
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FBRBotTeleportGroup {
	int32 GroupID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> Locations; // 0x08(0x10)
	struct TArray<int32> HouseIds; // 0x18(0x10)
	struct FVector CenterLocation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
};

// ScriptStruct TslGame.UltHouse
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FUltHouse {
	int32 HouseID; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector BoxOrigin; // 0x10(0x0c)
	struct FVector BoxExtent; // 0x1c(0x0c)
	int32 ParentHouseGroupIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> DoorLocations; // 0x30(0x10)
	struct TArray<struct FUltItemSpotInfo> ItemSpotInfos; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct TslGame.UltItemSpotInfo
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FUltItemSpotInfo {
	int32 ItemSpotId; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*b8772852e0
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*b8772852e0 {
	float *37476ad721; // 0x00(0x04)
	float *3920f69c2c; // 0x04(0x04)
	float *95237163b6; // 0x08(0x04)
	float *1380d38e28; // 0x0c(0x04)
	float *8c89928d49; // 0x10(0x04)
	int32 *067c94feb1; // 0x14(0x04)
	int32 *e9fa21de62; // 0x18(0x04)
	int32 *5928bc8d2b; // 0x1c(0x04)
};

// ScriptStruct TslGame.*25af81395e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*25af81395e {
	float *144f84229a; // 0x00(0x04)
	float *a6b2a8ac46; // 0x04(0x04)
	int32 *f32b906814; // 0x08(0x04)
	float *38cbe530e0; // 0x0c(0x04)
};

// ScriptStruct TslGame.*74c47ef6bc
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*74c47ef6bc : FTableRowBase {
	int32 *b9fc186016; // 0x08(0x04)
	float *51e4cafd82; // 0x0c(0x04)
	float *54139334fe; // 0x10(0x04)
	int32 LootCount; // 0x14(0x04)
};

// ScriptStruct TslGame.*fcb52a6043
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*fcb52a6043 : FTableRowBase {
	struct FName *fc88035421; // 0x08(0x08)
	struct TArray<struct F*193bf94212> *f1c308f91a; // 0x10(0x10)
	bool *91df1e3ee6; // 0x20(0x01)
	bool *81c69918ca; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*193bf94212
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*193bf94212 {
	struct FName ItemID; // 0x00(0x08)
	int32 Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f58c7ac466
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*f58c7ac466 : FTableRowBase {
	int32 LootCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 *92d1f8c125; // 0x18(0x04)
	int32 weight; // 0x1c(0x04)
};

// ScriptStruct TslGame.*61b1daf7ca
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*61b1daf7ca : FTableRowBase {
	int32 *b9fc186016; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*193bf94212> *e20746874d; // 0x10(0x10)
	int32 weight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*da89301627
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*da89301627 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 MaxCount; // 0x10(0x04)
	int32 *51dc986748; // 0x14(0x04)
};

// ScriptStruct TslGame.*ed50a53f03
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*ed50a53f03 {
	struct U*57bd5fcbdd* Origin; // 0x00(0x08)
};

// ScriptStruct TslGame.*8ce590f22c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8ce590f22c {
	struct TArray<struct F*0454465380> *834d62f5bd; // 0x00(0x10)
};

// ScriptStruct TslGame.*0454465380
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*0454465380 {
	enum class EItemPickupInfo Type; // 0x00(0x04)
	int32 BlueZonePhase; // 0x04(0x04)
	int32 LootCount; // 0x08(0x04)
	float PickupTime; // 0x0c(0x04)
	struct FString ItemID; // 0x10(0x10)
	int32 Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString FailReason; // 0x28(0x10)
};

// ScriptStruct TslGame.*7f40f709bf
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*7f40f709bf : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*3e8fb7d509
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3e8fb7d509 {
	struct AUltAIController* AIController; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
};

// ScriptStruct TslGame.*694c2a2c22
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*694c2a2c22 {
	struct TArray<struct FName> Bodies; // 0x00(0x10)
	struct TArray<struct FName> Legs; // 0x10(0x10)
	struct TArray<struct FName> *0e1f1772fd; // 0x20(0x10)
	struct TArray<struct FName> *e5f97caca4; // 0x30(0x10)
	struct TArray<struct FName> Hands; // 0x40(0x10)
	struct TArray<struct FName> *0aaa3762af; // 0x50(0x10)
};

// ScriptStruct TslGame.*f4eaa67685
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f4eaa67685 {
	char pad_0[0x38]; // 0x00(0x38)
	int32 *aebf83910d; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
	struct F*6ca9afbcef *df34a84960; // 0x48(0x18)
	char pad_60[0x18]; // 0x60(0x18)
};

// ScriptStruct TslGame.*6ca9afbcef
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*6ca9afbcef {
	int32 PresetIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *192f7715c1; // 0x08(0x10)
};

// ScriptStruct TslGame.*1be9f9aa5a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*1be9f9aa5a {
	struct TArray<int32> *3898f0ba93; // 0x00(0x10)
};

// ScriptStruct TslGame.*c907cf6c55
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c907cf6c55 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.*7030a02947
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*7030a02947 {
	char pad_0[0x8]; // 0x00(0x08)
	float *ae1536f412; // 0x08(0x04)
};

// ScriptStruct TslGame.*c3c9090a1b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c3c9090a1b {
	struct UClass* *3c69e3d0f3; // 0x00(0x08)
	struct FName *0791d21329; // 0x08(0x08)
};

// ScriptStruct TslGame.*f15bd97669
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f15bd97669 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*fdd8f7c9e3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fdd8f7c9e3 {
	int32 DropCount; // 0x00(0x04)
	float DropPercent; // 0x04(0x04)
	struct UClass* OverrideCarePackageItemSpawnerClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*31531fc2bd
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*31531fc2bd {
	struct UClass* *402fb6b893; // 0x00(0x08)
	struct UClass* *0c36418978; // 0x08(0x08)
	enum class *0835c4cbd0 *4fe98af12b; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* *36aef1b946; // 0x18(0x08)
	float *a8a8ddc838; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*8fb42f60cd
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8fb42f60cd {
	struct FName *a3df95d068; // 0x00(0x08)
	struct UAkAudioEvent* *bd3476707c; // 0x08(0x08)
	struct UAkAudioEvent* *36f8c6a79a; // 0x10(0x08)
	bool *54204871e3; // 0x18(0x01)
	bool *18ac212d0b; // 0x19(0x01)
	bool *5c2c24dffe; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float *23a99cbbed; // 0x1c(0x04)
	float *5ed15a94c1; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*c34ac7d310
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*c34ac7d310 {
	struct TArray<struct F*d7fbeb7ebc> *abdd3a78f0; // 0x00(0x10)
};

// ScriptStruct TslGame.*d7fbeb7ebc
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d7fbeb7ebc {
	struct UClass* *46759e9868; // 0x00(0x08)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float Falloff; // 0x10(0x04)
	bool *1eadc3feec; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*b1561e6ce1
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*b1561e6ce1 {
	struct F*8d7d034685 *6918c4679a; // 0x00(0x08)
	struct F*7dc5459333 *66d5309c6f; // 0x08(0x40)
	struct F*5d3246ccc9 *1f95b925d1; // 0x48(0x30)
};

// ScriptStruct TslGame.*5d3246ccc9
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5d3246ccc9 {
	struct UAnimSequence* *597023e041; // 0x00(0x08)
	struct UBlendSpaceBase* *8290eb6ace; // 0x08(0x08)
	struct UBlendSpaceBase* *aff422e70c; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*7dc5459333
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7dc5459333 {
	struct UBlendSpaceBase* *39fd218bed; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct TslGame.*8d7d034685
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8d7d034685 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*484da24623
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*484da24623 {
	struct UAnimMontage* Stand; // 0x00(0x08)
	struct UAnimMontage* Crouch; // 0x08(0x08)
	struct UAnimMontage* Prone; // 0x10(0x08)
	struct UAnimMontage* DBNO; // 0x18(0x08)
};

// ScriptStruct TslGame.*a2b89d6126
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a2b89d6126 {
	struct UBlendSpaceBase* CurrentLocomotionBlendspace; // 0x00(0x08)
	struct UBlendSpaceBase* LocomotionFirst; // 0x08(0x08)
	struct UBlendSpaceBase* LocomotionSecond; // 0x10(0x08)
	float LocomotionAlpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4ce08ef4a5
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*4ce08ef4a5 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, struct F*55bc2d05f4> *246711f5d2; // 0x08(0x50)
};

// ScriptStruct TslGame.*55bc2d05f4
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*55bc2d05f4 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*2b72a224d2
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2b72a224d2 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*bbd99231f3
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*bbd99231f3 : FTableRowBase {
	float *f1541d8670; // 0x08(0x04)
	float *0e28c5a0a1; // 0x0c(0x04)
	float *adfbb659e2; // 0x10(0x04)
	float *58a59448a9; // 0x14(0x04)
	float *bef1081dc4; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*2906774852
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*2906774852 {
	struct TArray<enum class EOneOnOneResultType> *2ba04e1760; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	enum class EOutGamePlatformProvider TargetPlatform; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32 TeamId; // 0x24(0x04)
	int32 WinningStreak; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AccountId; // 0x30(0x10)
};

// ScriptStruct TslGame.TrainingData
// Size: 0x150 (Inherited: 0x00)  [layout: KHOP]
struct FTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRangedTrainingData Ranged10TrainingData; // 0x08(0x68)
	struct FRangedTrainingData Ranged50TrainingData; // 0x70(0x68)
	struct FRangedTrainingData Ranged100TrainingData; // 0xd8(0x68)
	struct TArray<struct FSingleTrainingData> TrainingDataList; // 0x140(0x10)
};

// ScriptStruct TslGame.SingleTrainingData
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct FSingleTrainingData {
	int32 TrainingScore; // 0x00(0x04)
	float AimAccuracy; // 0x04(0x04)
	int32 headshot; // 0x08(0x04)
	int32 KillCount; // 0x0c(0x04)
	float SoundReactionRate; // 0x10(0x04)
	int32 HeadHitCount; // 0x14(0x04)
	int32 ArmHitCount; // 0x18(0x04)
	int32 TorsoHitCount; // 0x1c(0x04)
	int32 PelvisHitCount; // 0x20(0x04)
	int32 LegHitCount; // 0x24(0x04)
	struct FString WeaponName; // 0x28(0x10)
};

// ScriptStruct TslGame.RangedTrainingData
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct FRangedTrainingData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FSingleTrainingData> RangedTrainingDataList; // 0x08(0x10)
	int32 BestDataRange; // 0x18(0x04)
	float MedianScore; // 0x1c(0x04)
	float AverageScore; // 0x20(0x04)
	int32 MaxScore; // 0x24(0x04)
	int32 MinScore; // 0x28(0x04)
	int32 MaximumDeviation; // 0x2c(0x04)
	struct FSingleTrainingData BestTrainingData; // 0x30(0x38)
};

// ScriptStruct TslGame.KickMessageKey
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FKickMessageKey {
	enum class EAntiCheatKickType KickType; // 0x00(0x01)
	enum class EKickProcess KickProcess; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString KeyString; // 0x08(0x10)
};

// ScriptStruct TslGame.*51b173dfb2
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*51b173dfb2 {
	struct TMap<enum class *1439e49d05, int32> Data; // 0x00(0x50)
};

// ScriptStruct TslGame.*e795c67a92
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*e795c67a92 {
	enum class *1439e49d05 Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Count; // 0x04(0x04)
};

// ScriptStruct TslGame.*dc3a8ab0bf
// Size: 0xb8 (Inherited: 0x00)  [layout: KHOP]
struct F*dc3a8ab0bf {
	struct FTslLobbyCustomizingData *94f102c37a; // 0x00(0x58)
	struct UObject* RequestAsyncLoadWeaponItem; // 0x58(0x08)
	struct UClass* *4cb516f040; // 0x60(0x20)
	struct TArray<struct UClass*> *e9858f52f2; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct AActor* *682b3434a5; // 0xa0(0x08)
	struct FString *7dbf128082; // 0xa8(0x10)
};

// ScriptStruct TslGame.*6846b77c3f
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*6846b77c3f {
	struct UClass* *6deaf3e870; // 0x00(0x20)
	struct FName SkinItemID; // 0x20(0x08)
	struct TArray<struct FString> PartItemIds; // 0x28(0x10)
	struct TArray<struct UClass*> *db9aabb7de; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	enum class EWuViewModeCategory ViewModeCategory; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString *a4fff85f4c; // 0x60(0x10)
};

// ScriptStruct TslGame.*8ad3a3b364
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*8ad3a3b364 {
	struct FString WidgetName; // 0x00(0x10)
	struct FMulticastDelegate *d41eb72076; // 0x10(0x10)
};

// ScriptStruct TslGame.*b11ed0e839
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*b11ed0e839 {
	struct FString *2705addde0; // 0x00(0x10)
	struct FString *db55caae71; // 0x10(0x10)
};

// ScriptStruct TslGame.*a936680d59
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a936680d59 {
	struct TArray<struct UObject*> Objects; // 0x00(0x10)
};

// ScriptStruct TslGame.*b22cd7b84d
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b22cd7b84d {
	int32 CircleNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName *decf751d88; // 0x08(0x08)
	struct FName *915bcfeebe; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*212fd76d2f
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*212fd76d2f {
	struct FStringAssetReference DataTable; // 0x00(0x10)
};

// ScriptStruct TslGame.*a49e36f61d
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*a49e36f61d {
	SetProperty *ea3db26abc; // 0x00(0x50)
};

// ScriptStruct TslGame.*e9b802f640
// Size: 0x1d8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e9b802f640 {
	char pad_0[0x1d8]; // 0x00(0x1d8)
};

// ScriptStruct TslGame.*ea151a1e97
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*ea151a1e97 {
	struct TMap<int32, struct F*558c51eea1> *b69e92f79f; // 0x00(0x50)
};

// ScriptStruct TslGame.*558c51eea1
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*558c51eea1 {
	struct TArray<int32> *7d4b27eb4b; // 0x00(0x10)
};

// ScriptStruct TslGame.*458f8e4d2c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*458f8e4d2c {
	int32 TeamId; // 0x00(0x04)
	int32 *0f8ff3be88; // 0x04(0x04)
};

// ScriptStruct TslGame.*90d7e4191a
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*90d7e4191a {
	int32 Index; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	enum class EBlueChipTowerState *b2bedb19f3; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32> *07d001db31; // 0x18(0x10)
};

// ScriptStruct TslGame.*38d948ca05
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*38d948ca05 {
	struct TArray<struct FVehicleDrivingTestBotConfig> Bots; // 0x00(0x10)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FRotator *90fc8b2eb6; // 0x1c(0x0c)
	struct FRotator *5827de19c3; // 0x28(0x0c)
	int32 *12282b293c; // 0x34(0x04)
	bool *28108dc88d; // 0x38(0x01)
	bool *01d0ff9911; // 0x39(0x01)
	bool *1d05ab80a0; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float Timeout; // 0x3c(0x04)
};

// ScriptStruct TslGame.VehicleDrivingTestBotConfig
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FVehicleDrivingTestBotConfig {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator SpawnRotation; // 0x0c(0x0c)
	uint32 ID; // 0x18(0x04)
	uint32 VehicleId; // 0x1c(0x04)
	struct TArray<struct U*4c029a57b1*> Actions; // 0x20(0x10)
};

// ScriptStruct TslGame.*2746b33456
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*2746b33456 {
	uint32 *854e1355f6; // 0x00(0x04)
	enum class EFollowTargetType TargetType; // 0x04(0x04)
};

// ScriptStruct TslGame.*05d4bf7691
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct F*05d4bf7691 : FTableRowBase {
	float *1396282131; // 0x08(0x04)
	float *96e341300a; // 0x0c(0x04)
	float *511d9c1520; // 0x10(0x04)
	float *2592d2712d; // 0x14(0x04)
	float *7d9a1d42d6; // 0x18(0x04)
	int32 *7063dc7046; // 0x1c(0x04)
	float *65a60e2e84; // 0x20(0x04)
	float *584849d3e0; // 0x24(0x04)
	float *230463f51a; // 0x28(0x04)
	float *d24165f4cf; // 0x2c(0x04)
	float *f1541d8670; // 0x30(0x04)
	float *adfbb659e2; // 0x34(0x04)
	float *6adff16123; // 0x38(0x04)
	float *b28206af9d; // 0x3c(0x04)
	float *e3122198e0; // 0x40(0x04)
	float *8f79342ef7; // 0x44(0x04)
	float *db63b4bd25; // 0x48(0x04)
	float *4d3646261d; // 0x4c(0x04)
	float *3e44cbbda8; // 0x50(0x04)
	float *8a58a86b20; // 0x54(0x04)
	float *16325107f3; // 0x58(0x04)
	float *66758eb44e; // 0x5c(0x04)
};

// ScriptStruct TslGame.*c6b5abb5ad
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*c6b5abb5ad : FTableRowBase {
	float *5f9bbef483; // 0x08(0x04)
	float *841b21b5f4; // 0x0c(0x04)
	float *a00606d76a; // 0x10(0x04)
	float *151f671461; // 0x14(0x04)
};

// ScriptStruct TslGame.*f4b8a64aee
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f4b8a64aee {
	struct TArray<struct F*339b214f64> *81186b0b8c; // 0x00(0x10)
	int8 *e1071e9238; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*339b214f64
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*339b214f64 {
	struct TArray<struct FVector> *0b7a0bb145; // 0x00(0x10)
	int32 *9ea0ee4091; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*a6ce7d5c8c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*a6ce7d5c8c {
	float Gauge; // 0x00(0x04)
	float *6336561fa4; // 0x04(0x04)
};

// ScriptStruct TslGame.*953f173afa
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*953f173afa {
	float Height; // 0x00(0x04)
	float *9953c26b84; // 0x04(0x04)
	float *49d849f1f6; // 0x08(0x04)
	float *bec9221449; // 0x0c(0x04)
	float *bca4459c7e; // 0x10(0x04)
	bool *187e8eaff1; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *f0431d0591; // 0x18(0x04)
	bool *ba5395778e; // 0x1c(0x01)
	bool *d5f1301457; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float *89b794b0f6; // 0x20(0x04)
	float *0e1d241b12; // 0x24(0x04)
	float *01431e393f; // 0x28(0x04)
};

// ScriptStruct TslGame.*9b0efe0950
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9b0efe0950 {
	struct UMaterialInterface* DefaultMaterial; // 0x00(0x08)
	struct FName *868d087e03; // 0x08(0x08)
};

// ScriptStruct TslGame.*8305761d44
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8305761d44 {
	struct TArray<struct UClass*> *c419d2b5c9; // 0x00(0x10)
	struct TArray<struct F*eb3b73fc11> *b0943a0846; // 0x10(0x10)
	struct UClass* *c4837fc2d7; // 0x20(0x08)
	bool *7e526be71b; // 0x28(0x01)
	bool *e38d264671; // 0x29(0x01)
	bool *df50bfa4af; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct TslGame.*eb3b73fc11
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eb3b73fc11 {
	struct UClass* *4674927b7c; // 0x00(0x08)
	bool *85754a056c; // 0x08(0x01)
	bool *4e6475fd5d; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float *fed37c5e45; // 0x0c(0x04)
	float *ad18a77236; // 0x10(0x04)
	float *f2a121d581; // 0x14(0x04)
	float *0105f7490c; // 0x18(0x04)
	float *2a054ff81b; // 0x1c(0x04)
	enum class *3ce1b7244c *292504b4bd; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*fc5da1b813
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*fc5da1b813 {
	struct FVector *20c68636e2; // 0x00(0x0c)
	struct FVector *7e571de7d7; // 0x0c(0x0c)
	struct FVector *2a28403502; // 0x18(0x0c)
	struct FColor Color; // 0x24(0x04)
};

// ScriptStruct TslGame.*a98164942a
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*a98164942a : F*fdab764c85 {
	struct TArray<struct F*3147e4562d> Array; // 0xb0(0x10)
	struct ATslNpcCharacter* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*3147e4562d
// Size: 0x48 (Inherited: 0x0c)  [layout: LECH - offset chi la uoc luong]
struct F*3147e4562d : F*60282223b2 {
	float *55cd1becd2; // 0x0c(0x04)
	struct UClass* *c4837fc2d7; // 0x10(0x08)
	struct ATslPlayerStateBase* *1cd11b08bd; // 0x18(0x08)
	struct FVector_NetQuantize *6c82978301; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString BoneName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct TslGame.*dca4141323
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*dca4141323 {
	enum class ELobbyWeaponProcessorSlot *4f25bf3138; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*00aeecb26f> *e9c2baca06; // 0x08(0x10)
};

// ScriptStruct TslGame.*00aeecb26f
// Size: 0x28 (Inherited: 0x20)  [layout: KHOP]
struct F*00aeecb26f : F*38d028e693 {
	struct ATslLobbyWeapon* TslWeapon; // 0x20(0x08)
};

// ScriptStruct TslGame.*38d028e693
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*38d028e693 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ItemID; // 0x08(0x10)
	struct UItem* Item; // 0x18(0x08)
};

// ScriptStruct TslGame.*bc03d0b9df
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*bc03d0b9df {
	enum class ECastAnim CastAnim; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *e3ea78d8c6; // 0x04(0x04)
	struct UClass* *ab5a0831cd; // 0x08(0x08)
};

// ScriptStruct TslGame.*83ec57f90a
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*83ec57f90a {
	bool AttackMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *46cf69c27f; // 0x04(0x04)
};

// ScriptStruct TslGame.*6c082c18ac
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*6c082c18ac : FTableRowBase {
	int32 weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName ItemID; // 0x10(0x08)
	int32 Stack; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*6b90360f8b
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*6b90360f8b {
	enum class *8384568f9a PunchDamageType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *5c0df3cbc8; // 0x04(0x04)
};

// ScriptStruct TslGame.*96ce1d66a6
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*96ce1d66a6 {
	float Distance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class EWeaponClass> *988868dd68; // 0x08(0x10)
};

// ScriptStruct TslGame.TslCharacterOverrideProperty
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FTslCharacterOverrideProperty {
	float HealthByRevive; // 0x00(0x04)
	float DBNODamagePerSecond; // 0x04(0x04)
	float ReviveCastingTime; // 0x08(0x04)
	float MultiplierDBNODamagePerSecond; // 0x0c(0x04)
	float MultiplierPunchDamage; // 0x10(0x04)
};

// ScriptStruct TslGame.ChromaEventDamage
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct FChromaEventDamage : FChromaEvent {
	enum class EDamageTypeCategory DamageType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DamageValue; // 0x34(0x04)
};

// ScriptStruct TslGame.ChromaEvent
// Size: 0x30 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct FChromaEvent : FGameEventBase {
	struct FName CategoryName; // 0x18(0x08)
	struct FName AnimationName; // 0x20(0x08)
	bool ShouldPlay; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.ChromaEventBluezone
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct FChromaEventBluezone : FChromaEvent {
};

// ScriptStruct TslGame.ChromaEventDBNO
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FChromaEventDBNO : FChromaEvent {
	bool VictimIsMe; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.ChromaEventKill
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FChromaEventKill : FChromaEvent {
	bool VictimIsMe; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.ChromaEventItemPickup
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FChromaEventItemPickup : FChromaEvent {
	enum class EItemCategory ItemCategory; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.ChromaEventCast
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FChromaEventCast : FChromaEvent {
	enum class ECastableItemType CastableItemType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.ChromaEventWheel
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct FChromaEventWheel : FChromaEvent {
};

// ScriptStruct TslGame.*f17918129c
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f17918129c {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*0d8a207f9d
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0d8a207f9d {
	struct UClass* *3c69e3d0f3; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
	float *f31f0f36b6; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct TslGame.*782068bca0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*782068bca0 {
	struct FName ParamName; // 0x00(0x08)
	struct UCurveBase* *781aca795c; // 0x08(0x08)
};

// ScriptStruct TslGame.*2099aa619d
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*2099aa619d {
	struct FString Kind; // 0x00(0x10)
	struct FString path; // 0x10(0x10)
};

// ScriptStruct TslGame.*9a6cf311ba
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*9a6cf311ba {
	enum class EBodyCarryState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ATslCharacterBase* Target; // 0x08(0x08)
	struct ATslCharacterBase* Parent; // 0x10(0x08)
};

// ScriptStruct TslGame.*58b05611f4
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*58b05611f4 {
	struct TArray<struct FVector> *c9555fed26; // 0x00(0x10)
	struct TMap<struct FName, struct FVector> *d825b4ff01; // 0x10(0x50)
	float *a143b2adec; // 0x60(0x04)
	struct FVector *790f4c2438; // 0x64(0x0c)
	float *810e99717b; // 0x70(0x04)
	bool *04c303dfea; // 0x74(0x01)
	bool *a6eacb90d6; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	struct UPrimitiveComponent* *f93ee305d3; // 0x78(0x08)
	struct FTransform *47972beb2d; // 0x80(0x30)
};

// ScriptStruct TslGame.*5a8a95b8ea
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*5a8a95b8ea : FTableRowBase {
	struct FName *e903b0fef0; // 0x08(0x08)
	enum class EWeaponClass *e2a050f8cd; // 0x10(0x01)
	bool *1163cf73c8; // 0x11(0x01)
	enum class ECrosshairWeaponGroup *1faa056a6b; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct UClass* *4e808f6de6; // 0x18(0x08)
};

// ScriptStruct TslGame.*7e3c5de68d
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7e3c5de68d {
	struct UClass* *4670b8bc00; // 0x00(0x08)
	float weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ad9ded5053
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ad9ded5053 {
	struct FCustomDamageEvent Event; // 0x00(0xd8)
	float *6ac687ac54; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct TslGame.CustomDamageEvent
// Size: 0xd8 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FCustomDamageEvent : FTableRowBase {
	bool *c9d9675457; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGuid *397a6b4fd7; // 0x0c(0x10)
	bool bEnabled; // 0x1c(0x01)
	bool *e9d70abb18; // 0x1d(0x01)
	bool *a34918e2a9; // 0x1e(0x01)
	bool *4d813c1a2e; // 0x1f(0x01)
	enum class *7a0cb1d14c *04d8b34441; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *2a7d012cd5; // 0x24(0x04)
	float *195188ffda; // 0x28(0x04)
	bool *9b5b76780b; // 0x2c(0x01)
	enum class ECustomDamageEventReactionType *d5e8cbe80b; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct UClass* *f856fe3e7b; // 0x30(0x20)
	bool *13c3c5317a; // 0x50(0x01)
	bool *5eefd340c0; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct UClass* *f0e7842b1c; // 0x58(0x20)
	bool *391bdf62d0; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName *9cf10a9f3b; // 0x80(0x08)
	struct FName *03768c7e83; // 0x88(0x08)
	struct FName *173d95a33b; // 0x90(0x08)
	bool *bf8751b86a; // 0x98(0x01)
	bool *78654f444e; // 0x99(0x01)
	bool *59acc5e648; // 0x9a(0x01)
	bool *3aabc9d537; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName *0d4353cbd7; // 0xa0(0x08)
	struct FName *0784fe4a88; // 0xa8(0x08)
	int32 *77dd0ec7b8; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName BoneName; // 0xb8(0x08)
	struct FName *d2f3817b9c; // 0xc0(0x08)
	struct FName *8d95ad5b3a; // 0xc8(0x08)
	enum class ECollisionEnabled *4213604a68; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct TslGame.*d8e91128fc
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d8e91128fc {
	struct UClass* TargetClass; // 0x00(0x08)
	float Multiplier; // 0x08(0x04)
	float *55cd1becd2; // 0x0c(0x04)
};

// ScriptStruct TslGame.*ec16fc3f20
// Size: 0x58 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ec16fc3f20 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct TslGame.*8bcc71ad08
// Size: 0x04 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8bcc71ad08 {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct TslGame.*a2c65898fd
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a2c65898fd {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*6094cfc0ac
// Size: 0x5b0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6094cfc0ac {
	char pad_0[0x5b0]; // 0x00(0x5b0)
};

// ScriptStruct TslGame.*54a59c74cf
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*54a59c74cf {
	struct UPrimitiveComponent* *876c0dbf95; // 0x00(0x08)
	struct F*4c0a0ed3a0 Sphere; // 0x08(0x10)
	float *2b7e67725b; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4c0a0ed3a0
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4c0a0ed3a0 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*cbb150f3eb
// Size: 0x2c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cbb150f3eb {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct TslGame.*68906ee5f9
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*68906ee5f9 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*940f721ce2
// Size: 0x3c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*940f721ce2 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct TslGame.*6ad74915d5
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6ad74915d5 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*ba5e0ac54d
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ba5e0ac54d {
	float *8e507d5bc1; // 0x00(0x04)
	struct FVector2D *9c5fb64c3a; // 0x04(0x08)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*c619e3d55a
// Size: 0x128 (Inherited: 0x00)  [layout: KHOP]
struct F*c619e3d55a {
	float *b62f89ebbf; // 0x00(0x04)
	float *634f43d0d0; // 0x04(0x04)
	int32 *5f542cc9f7; // 0x08(0x04)
	float *9c53148d4a; // 0x0c(0x04)
	float *8cde163b5a; // 0x10(0x04)
	float *b344bad781; // 0x14(0x04)
	struct UCurveFloat* *875a291c92; // 0x18(0x08)
	float *4baa1e9915; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* *927374d11f; // 0x28(0x08)
	struct UCurveFloat* *b1b48e7102; // 0x30(0x08)
	float *a0f61a02f4; // 0x38(0x04)
	float *dc4d1bc0f6; // 0x3c(0x04)
	struct UClass* *c4837fc2d7; // 0x40(0x08)
	int32 *2c5d61f549; // 0x48(0x04)
	float *fbd01e0d21; // 0x4c(0x04)
	float *65a21e22d1; // 0x50(0x04)
	float *ab86eb749c; // 0x54(0x04)
	char *a5c5169c25 : 1; // 0x58(0x01)
	char *50153c433e : 1; // 0x58(0x01)
	char *33fa67ba90 : 1; // 0x58(0x01)
	char *340df6da45 : 1; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<enum class EDamageTypeCategory> *35770f8fe2; // 0x60(0x10)
	struct TArray<enum class EDamageTypeCategory> *dab439c2f5; // 0x70(0x10)
	struct TArray<enum class EDamageTypeCategory> *ab6ca2c1f8; // 0x80(0x10)
	bool *9e42838bfd; // 0x90(0x01)
	bool *d31c255b29; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<enum class EPhysicalSurface> *fe02d7b7dd; // 0x98(0x10)
	struct TArray<struct UClass*> *14d63bac94; // 0xa8(0x10)
	bool *904c6b54b1; // 0xb8(0x01)
	bool *b416cc2a42; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	float *7d4ab9a977; // 0xbc(0x04)
	float *7334d9765f; // 0xc0(0x04)
	float *0efb86cab7; // 0xc4(0x04)
	struct UTexture* DamageCauserIcon; // 0xc8(0x08)
	float DamageIconRatio; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FText DamageCauserItemName; // 0xd8(0x18)
	enum class EWeaponClass DamageCauserClass; // 0xf0(0x01)
	bool *7a6516464e; // 0xf1(0x01)
	bool *e95d5bb27d; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float *eda44f1ea2; // 0xf4(0x04)
	struct UCurveFloat* *c7684db926; // 0xf8(0x08)
	struct UClass* *b036c2f22e; // 0x100(0x08)
	struct F*d16c136a1b *3d4e5c663c; // 0x108(0x20)
};

// ScriptStruct TslGame.*d16c136a1b
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*d16c136a1b {
	bool *ac45cfde2b; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *5f542cc9f7; // 0x04(0x04)
	bool *74ec76ebd3; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UCurveFloat* *927374d11f; // 0x10(0x08)
	bool *96151c0153; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *9c53148d4a; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fd5d816baf
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fd5d816baf {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*474bf99ca2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*474bf99ca2 {
	bool *9058e96fe6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct UPrimitiveComponent* *eda25f5639; // 0x04(0x08)
	uint16 *9d58c56681; // 0x0c(0x02)
	uint16 InstanceIndex; // 0x0e(0x02)
	bool *58eaaa553c; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *91f0861e45; // 0x14(0x04)
};

// ScriptStruct TslGame.TslStickInputHelper
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FTslStickInputHelper {
	float Timestamp; // 0x00(0x04)
	float BlockingTime; // 0x04(0x04)
	float ContinuousCheckTime; // 0x08(0x04)
	float DeadZoneValueX; // 0x0c(0x04)
	float DeadZoneValueY; // 0x10(0x04)
};

// ScriptStruct TslGame.*eef1ce17f7
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*eef1ce17f7 {
	enum class ETslHUDConfigType *1f43bf2216; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDataTable* *4e16de4537; // 0x08(0x08)
};

// ScriptStruct TslGame.*02cf861948
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*02cf861948 {
	struct FName root; // 0x00(0x08)
	struct FName Strap; // 0x08(0x08)
	struct FName BackpackRing; // 0x10(0x08)
	struct FVector DefaultStrapLocation; // 0x18(0x0c)
	struct FRotator DefaultStrapRotation; // 0x24(0x0c)
	struct FVector DefaultSeatLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FAlphaBlend Blend; // 0x40(0x38)
};

// ScriptStruct TslGame.*42dba447f6
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*42dba447f6 {
	struct USceneComponent* *2c77dff6c6; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*fc25322532
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fc25322532 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*3d05105c97
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3d05105c97 {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct TslGame.*cb2a28e6bb
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cb2a28e6bb {
	struct F*a3b509d062 *1f09645255; // 0x00(0x08)
	struct F*a3b509d062 *d207a0b182; // 0x08(0x08)
	struct F*4a2325e615 *fbd4476e67; // 0x10(0x10)
	struct F*4a2325e615 *d033168359; // 0x20(0x10)
	struct UCurveFloat* *a1331a01f0; // 0x30(0x08)
	float *92d6ad019f; // 0x38(0x04)
	float *034330ad8a; // 0x3c(0x04)
	float *e98a211134; // 0x40(0x04)
	float *13813e9a64; // 0x44(0x04)
	float *0b2ed5d50d; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*c497333666
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*c497333666 {
	struct FVector *4968a608ce; // 0x00(0x0c)
	float GravityScale; // 0x0c(0x04)
	bool *19df1131d6; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *9cfa3535cb; // 0x14(0x04)
	float *e7e2bea9e3; // 0x18(0x04)
	struct F*4a2325e615 *37d5124eca; // 0x1c(0x10)
};

// ScriptStruct TslGame.*f8547c2c8b
// Size: 0xb0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f8547c2c8b {
	float *bb412c70dc; // 0x00(0x04)
	struct F*4a2325e615 *ff4f780c64; // 0x04(0x10)
	struct FVector *6fa3fffa7e; // 0x14(0x0c)
	struct F*4a2325e615 *ef70bbde7a; // 0x20(0x10)
	struct FVector *6aafb84354; // 0x30(0x0c)
	struct F*4a2325e615 *d6503bb1c1; // 0x3c(0x10)
	struct FVector *03d2db5d62; // 0x4c(0x0c)
	float *439db16320; // 0x58(0x04)
	float *fba36e38e6; // 0x5c(0x04)
	struct FVector *32bd8be89b; // 0x60(0x0c)
	struct F*4a2325e615 *2c299482fb; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* *cecd6fcdc7; // 0x80(0x08)
	struct UCurveFloat* *4cd2799904; // 0x88(0x08)
	struct FVector *cb37a5f7b8; // 0x90(0x0c)
	struct F*4a2325e615 *8e9a8f62a2; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct TslGame.*abeb0819e3
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*abeb0819e3 {
	float *c374867016; // 0x00(0x04)
	float *a806645e3b; // 0x04(0x04)
	float *7fada83939; // 0x08(0x04)
	struct FVector *affdd059af; // 0x0c(0x0c)
	struct F*4a2325e615 *8c9b201ea7; // 0x18(0x10)
	struct U*5e2750edbb* *0c22a87e40; // 0x28(0x08)
	struct U*5e2750edbb* *a6d98938ed; // 0x30(0x08)
};

// ScriptStruct TslGame.*feac361d39
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct F*feac361d39 {
	float *e487559afb; // 0x00(0x04)
	float *8ff9d77b28; // 0x04(0x04)
	float *c374867016; // 0x08(0x04)
	float *a806645e3b; // 0x0c(0x04)
	struct F*4a2325e615 *1270339357; // 0x10(0x10)
	struct F*4a2325e615 *c94d9867ba; // 0x20(0x10)
	struct F*4a2325e615 *3b1df3df68; // 0x30(0x10)
	struct F*4a2325e615 *25da8226ec; // 0x40(0x10)
	struct F*4a2325e615 *eae42f3961; // 0x50(0x10)
	struct F*4a2325e615 *3f9407647f; // 0x60(0x10)
	struct F*4a2325e615 *d1b0e9d645; // 0x70(0x10)
	struct F*4a2325e615 *e26411b3fb; // 0x80(0x10)
};

// ScriptStruct TslGame.*f486bfd303
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*f486bfd303 {
	float *32a8201852; // 0x00(0x04)
	float *e01d136c44; // 0x04(0x04)
	float *2cb4d282b6; // 0x08(0x04)
};

// ScriptStruct TslGame.*960ce63da3
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*960ce63da3 {
	struct F*4a2325e615 *0fa4a27a2d; // 0x00(0x10)
	struct F*4a2325e615 *7363292a41; // 0x10(0x10)
	struct UCurveFloat* *fadc3c8144; // 0x20(0x08)
	struct U*5e2750edbb* *83b1bfc99b; // 0x28(0x08)
	float *1819198891; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*cbe74d2687
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*cbe74d2687 {
	float *7fada83939; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct U*5e2750edbb* *3743da7a0e; // 0x08(0x08)
	struct F*4a2325e615 *146d9620e6; // 0x10(0x10)
	struct FVector *affdd059af; // 0x20(0x0c)
	struct FVector *70a261d934; // 0x2c(0x0c)
	struct F*4a2325e615 *27722920a9; // 0x38(0x10)
	struct FVector *ff8481976a; // 0x48(0x0c)
	struct F*4a2325e615 *d0abe375b1; // 0x54(0x10)
	struct F*4a2325e615 *15a9d4ef04; // 0x64(0x10)
	struct F*4a2325e615 *0d256d4ed1; // 0x74(0x10)
	struct F*4a2325e615 *a3532d2727; // 0x84(0x10)
	float *db5929eba5; // 0x94(0x04)
	float *2d613f69b7; // 0x98(0x04)
	float *dee753459b; // 0x9c(0x04)
	struct F*a3b509d062 *0f7ca6cd55; // 0xa0(0x08)
	struct F*a3b509d062 *739d0a7f3a; // 0xa8(0x08)
};

// ScriptStruct TslGame.*9b3ab9faa6
// Size: 0x24 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9b3ab9faa6 {
	struct F*a3b509d062 *58b645a161; // 0x00(0x08)
	struct F*a3b509d062 *8f2920f6bb; // 0x08(0x08)
	struct F*a3b509d062 *b280ec0fcb; // 0x10(0x08)
	struct F*a3b509d062 *fea41af4f1; // 0x18(0x08)
	bool *73975691ee; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct TslGame.*fcd49037e9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*fcd49037e9 {
	float Throttle; // 0x00(0x04)
	struct FVector *3e03e4d9a4; // 0x04(0x0c)
};

// ScriptStruct TslGame.*700ae22b34
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*700ae22b34 {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EVehicleEngineState ServerState; // 0x01(0x01)
	char pad_2[0x1]; // 0x02(0x01)
	bool *21b1dd86ab; // 0x03(0x01)
	float *9caf39afb9; // 0x04(0x04)
	float *8642b5f961; // 0x08(0x04)
	float *abd062bda4; // 0x0c(0x04)
	float StartTime; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct TslGame.*5a86afa977
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*5a86afa977 {
	float MaxAcceleration; // 0x00(0x04)
	float *4eac6178bd; // 0x04(0x04)
};

// ScriptStruct TslGame.*7b8fe88949
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*7b8fe88949 {
	float *5b0b5179ab[0x04]; // 0x00(0x10)
	struct TArray<struct FName> *61a5f0e32d; // 0x10(0x10)
	struct UClass* *30106d2dad; // 0x20(0x08)
	struct UClass* *49695900b9; // 0x28(0x08)
};

// ScriptStruct TslGame.*9ac3c106e4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9ac3c106e4 {
	float StartTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	struct ATslCharacter* *7c5b0e388d; // 0x08(0x08)
};

// ScriptStruct TslGame.*72ba95c8b7
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*72ba95c8b7 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UParticleSystem* ParticleSystem_Console; // 0x08(0x08)
	struct UParticleSystem* ParticleSystem_KoreanAndChinese; // 0x10(0x08)
	float MinRadius; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*efb9f88483
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*efb9f88483 {
	struct UDecalComponent* DecalComp; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x08(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct TslGame.*2892e68688
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*2892e68688 : F*fdab764c85 {
	struct TArray<struct F*98cd1da693> Array; // 0xb0(0x10)
	struct ATslFuelPuddleContainer* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*98cd1da693
// Size: 0x48 (Inherited: 0x0c)  [layout: KHOP]
struct F*98cd1da693 : F*60282223b2 {
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *39aa5f7e82; // 0x1c(0x04)
	float *dd3d565ddf; // 0x20(0x04)
	bool *f0f632f419; // 0x24(0x01)
	bool *8ca86b97e7; // 0x25(0x01)
	bool *dab46e81ff; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32 *c0dce6da10; // 0x28(0x04)
	float *d4b41092da; // 0x2c(0x04)
	struct FVector *b8d805160c; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct U*bcabd1d9a2* Receiver; // 0x40(0x08)
};

// ScriptStruct TslGame.*42887b2427
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*42887b2427 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*27693cc946
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*27693cc946 {
	uint16 *0f16d95cec; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	struct FVector Velocity; // 0x1c(0x0c)
	struct F*e91ea4547c InputData; // 0x28(0x20)
};

// ScriptStruct TslGame.*e91ea4547c
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*e91ea4547c {
	float *0c1d7fb0c7; // 0x00(0x04)
	float *574cf98ad6; // 0x04(0x04)
	float *01ccf0aa05; // 0x08(0x04)
	float *98687f7be2; // 0x0c(0x04)
	bool *86c9070cfb; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *3cc30690b6; // 0x14(0x04)
	float *ce45333e65; // 0x18(0x04)
	float *1b26ec8017; // 0x1c(0x04)
};

// ScriptStruct TslGame.*680486292f
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*680486292f {
	float *d3d9419f8b; // 0x00(0x04)
	float *a0a5695894; // 0x04(0x04)
	float *26b863953a; // 0x08(0x04)
	struct FVector2D *06ce73c26c; // 0x0c(0x08)
	struct FVector2D *5b6edacce6; // 0x14(0x08)
	float *b591b9fa3c; // 0x1c(0x04)
	float *54f411cf22; // 0x20(0x04)
	float *d4d6e3fdb1; // 0x24(0x04)
};

// ScriptStruct TslGame.*8ee84153d6
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*8ee84153d6 {
	struct FVector *9056d07750; // 0x00(0x0c)
	float *b070475b83; // 0x0c(0x04)
	struct F*8d6b592d8c *aa0ca86dee; // 0x10(0x14)
};

// ScriptStruct TslGame.*8d6b592d8c
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*8d6b592d8c {
	bool *818968151f; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Radius; // 0x04(0x04)
	struct FVector Extent; // 0x08(0x0c)
};

// ScriptStruct TslGame.*9f08edfa5b
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9f08edfa5b {
	float *5602ab6a0f; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* *2c36d980f3; // 0x08(0x08)
	struct UAkAudioEvent* *bb549aa377; // 0x10(0x08)
	struct UAkAudioEvent* *94dada9201; // 0x18(0x08)
	struct UAkAudioEvent* *4c5a06db18; // 0x20(0x08)
	struct FName *6f42c4b406; // 0x28(0x08)
	struct FName *fee8cc6d15; // 0x30(0x08)
	struct FName *15d9cbac4c; // 0x38(0x08)
	struct FName *e6311aefd2; // 0x40(0x08)
	struct FName *897f234850; // 0x48(0x08)
	struct FName *7ac432bf56; // 0x50(0x08)
	struct FName *5cce464e74; // 0x58(0x08)
	float *f3088cc65f; // 0x60(0x04)
	float *ff78ec11a8; // 0x64(0x04)
	float *fe56c00615; // 0x68(0x04)
	float *1296e2f6f6; // 0x6c(0x04)
	float *b2055258f4; // 0x70(0x04)
	float *bf0d06e821; // 0x74(0x04)
	float *9b45c470f6; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*88eb13214e
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*88eb13214e {
	bool *9307989a69; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D *773aeac764; // 0x04(0x08)
	struct FVector2D *52eef643cc; // 0x0c(0x08)
	struct FVector2D *7c10512d6d; // 0x14(0x08)
	struct FVector2D *6ca816d845; // 0x1c(0x08)
	struct FVector2D *1cd73f97c0; // 0x24(0x08)
	struct FVector2D *fdceff524b; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* *c4837fc2d7; // 0x38(0x08)
	float *1ce11c3140; // 0x40(0x04)
	float *71bb6d3cb0; // 0x44(0x04)
};

// ScriptStruct TslGame.*2817aabfbc
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*2817aabfbc {
	struct TArray<struct F*e385c65255> *f8c2021ebb; // 0x00(0x10)
	struct UAnimMontage* *5715f6105c; // 0x10(0x08)
};

// ScriptStruct TslGame.*e385c65255
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*e385c65255 {
	enum class *66f021d81f *fce4d32261; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *290fc99bc7; // 0x04(0x04)
	struct UAnimMontage* *23bd986fd8; // 0x08(0x08)
	struct UAnimMontage* *25a8a5d819; // 0x10(0x08)
	bool *a27e36b3d2; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *c9e2d480c6; // 0x1c(0x04)
	struct UAnimMontage* *98865c5634; // 0x20(0x08)
	struct FName *619b003894; // 0x28(0x08)
};

// ScriptStruct TslGame.*266b9718de
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*266b9718de {
	float *01bca85396; // 0x00(0x04)
	float *a182eaf414; // 0x04(0x04)
	float *1e8e13645b; // 0x08(0x04)
	bool *a716748d71; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float *ccdd74b948; // 0x10(0x04)
	bool *0a1dd4809e; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *3c4a14c71e; // 0x18(0x04)
	struct FVector *eadcded51a; // 0x1c(0x0c)
	float *1c69397ce4; // 0x28(0x04)
	float *cf49c41a86; // 0x2c(0x04)
	float *464ecc0774; // 0x30(0x04)
	bool *9f965b675a; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FVector *270bd5a9dd; // 0x38(0x0c)
	bool *62d87ee878; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *53ca6c5a6a; // 0x48(0x04)
	float *299d007576; // 0x4c(0x04)
};

// ScriptStruct TslGame.*ed174b98dc
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*ed174b98dc {
	struct UParticleSystem* *f8613f269f; // 0x00(0x08)
	struct UParticleSystem* *9111f80071; // 0x08(0x08)
	struct FVector2D *b81c39d4ee; // 0x10(0x08)
	struct FVector2D *aa4621cd89; // 0x18(0x08)
	struct FVector2D *bd050de85f; // 0x20(0x08)
	struct FVector2D *e293b0caa8; // 0x28(0x08)
	struct FVector2D *e759420687; // 0x30(0x08)
	struct FVector2D *c73602017c; // 0x38(0x08)
	struct UClass* *ccd91bb77c; // 0x40(0x08)
	struct UClass* *494017cb0c; // 0x48(0x08)
	struct U*5e2750edbb* *e9fdac5e8b; // 0x50(0x08)
};

// ScriptStruct TslGame.*4fff673fbb
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*4fff673fbb {
	bool *2354be5ec7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *89b794b0f6; // 0x04(0x04)
	bool *d5f1301457; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *0e1d241b12; // 0x0c(0x04)
	float *848adf1ee3; // 0x10(0x04)
};

// ScriptStruct TslGame.*bb389f3b11
// Size: 0xc0 (Inherited: 0x00)  [layout: KHOP]
struct F*bb389f3b11 {
	float *13894a18e9; // 0x00(0x04)
	struct FVector *1ab6cb7093; // 0x04(0x0c)
	float *bb718504b9; // 0x10(0x04)
	float *86b9326644; // 0x14(0x04)
	float *f1915fc6b0; // 0x18(0x04)
	float *23fd7bf8fc; // 0x1c(0x04)
	float *73d0d723f4; // 0x20(0x04)
	float *13950d7726; // 0x24(0x04)
	float *3028955687; // 0x28(0x04)
	float *9ed42848c7; // 0x2c(0x04)
	float *c552983f52; // 0x30(0x04)
	float *132c4729bc; // 0x34(0x04)
	struct FVector CapsuleOffset; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct USkeletalMesh* *c056cd0a15; // 0x48(0x08)
	struct UClass* *824bd610a5; // 0x50(0x08)
	struct FRotator *115101492b; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicsAsset* *3c3514074f; // 0x68(0x08)
	struct TMap<enum class ESkydiveState, struct F*17701cca22> *9a0330173e; // 0x70(0x50)
};

// ScriptStruct TslGame.*17701cca22
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*17701cca22 {
	float *527da2ee61; // 0x00(0x04)
	enum class *13a3d7090c *a0b57dbfdd; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float *01ecc741de; // 0x08(0x04)
	bool *e8dcbe1a90; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*69eb746c32
// Size: 0x7c (Inherited: 0x00)  [layout: KHOP]
struct F*69eb746c32 {
	float *3627439a93; // 0x00(0x04)
	float *403f637e7d; // 0x04(0x04)
	float *9030b42166; // 0x08(0x04)
	float *0b2f7e59ae; // 0x0c(0x04)
	float *3134eb18eb; // 0x10(0x04)
	float *6eba7d3ce7; // 0x14(0x04)
	float *69b9d43435; // 0x18(0x04)
	float *acf484c408; // 0x1c(0x04)
	float *ca80d22961; // 0x20(0x04)
	float *e8674339b0; // 0x24(0x04)
	float *a6dfa036e2; // 0x28(0x04)
	float *3ca975858d; // 0x2c(0x04)
	struct FVector2D *9d29710d34; // 0x30(0x08)
	struct FVector2D *8491af77c4; // 0x38(0x08)
	float *02f84c5efb; // 0x40(0x04)
	float *d6222d5b22; // 0x44(0x04)
	float *a0226bbbba; // 0x48(0x04)
	float *22b0b87ac9; // 0x4c(0x04)
	float *8a9259640f; // 0x50(0x04)
	float *2c7784e755; // 0x54(0x04)
	float *d07a26c2c2; // 0x58(0x04)
	float *0e975d1865; // 0x5c(0x04)
	float *258b11324e; // 0x60(0x04)
	float *19a52cfa87; // 0x64(0x04)
	float *d64392070c; // 0x68(0x04)
	struct FVector2D *5763bf08f6; // 0x6c(0x08)
	struct FVector2D *0777264f3b; // 0x74(0x08)
};

// ScriptStruct TslGame.*f069187a15
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*f069187a15 {
	float *6845d0813e; // 0x00(0x04)
	float *07a6146a1f; // 0x04(0x04)
	float *0dd65971de; // 0x08(0x04)
	float *f07bcb1c75; // 0x0c(0x04)
	float *7ef7345a7d; // 0x10(0x04)
	float *98d16c5ca0; // 0x14(0x04)
	float *39d0df8530; // 0x18(0x04)
	float *0d58c5a711; // 0x1c(0x04)
	float *5de20617c5; // 0x20(0x04)
	float *0a32214774; // 0x24(0x04)
	float *3946309808; // 0x28(0x04)
	float *35da04e5d1; // 0x2c(0x04)
};

// ScriptStruct TslGame.*faa8ce5fb0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*faa8ce5fb0 {
	float *512f9edbbe; // 0x00(0x04)
	float *e42d41ee8c; // 0x04(0x04)
	float *3aa7761a80; // 0x08(0x04)
	float *926e8eed93; // 0x0c(0x04)
	float *1ddbc5333c; // 0x10(0x04)
	bool *b2eaee42cc; // 0x14(0x01)
	bool *ecee896b61; // 0x15(0x01)
	bool *59e978cef5; // 0x16(0x01)
	bool *a208a35461; // 0x17(0x01)
	float *88300d05ee; // 0x18(0x04)
	float *de9a293496; // 0x1c(0x04)
	float *2b56eb9a54; // 0x20(0x04)
	float *c49ade8d3a; // 0x24(0x04)
};

// ScriptStruct TslGame.*fca06deb4e
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*fca06deb4e {
	float *f3583816dd; // 0x00(0x04)
	struct FVector2D *cdaa8bc2a2; // 0x04(0x08)
	struct FVector2D *ebb6310a60; // 0x0c(0x08)
	float *c18a3f3219; // 0x14(0x04)
	struct FVector2D *34893ec6f0; // 0x18(0x08)
};

// ScriptStruct TslGame.*62160c466c
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*62160c466c {
	float DragScale; // 0x00(0x04)
	float *081a9a0ce0; // 0x04(0x04)
	float *8c793c1219; // 0x08(0x04)
	float *927aa29418; // 0x0c(0x04)
	float *f82e08744b; // 0x10(0x04)
};

// ScriptStruct TslGame.*3cbf3643bc
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*3cbf3643bc {
	float *d549844e2a; // 0x00(0x04)
	float *e8b740aa59; // 0x04(0x04)
	float *eb37ba9026; // 0x08(0x04)
	bool *60fcd4ce28; // 0x0c(0x01)
	bool *b3fba4d951; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float *748dd0a023; // 0x10(0x04)
	float *cae1bc81c2; // 0x14(0x04)
};

// ScriptStruct TslGame.FreefallVelocitySettings
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct FFreefallVelocitySettings {
	float SpeedMin; // 0x00(0x04)
	float *e12d484985; // 0x04(0x04)
	float *0b6377d5f7; // 0x08(0x04)
};

// ScriptStruct TslGame.*cffac906f0
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*cffac906f0 {
	struct FVector2D *a0645d3245; // 0x00(0x08)
	struct FVector2D *71e01b48f9; // 0x08(0x08)
	struct FVector2D *c355d71633; // 0x10(0x08)
	float *9556764dec; // 0x18(0x04)
	struct FVector2D *12699068be; // 0x1c(0x08)
	struct FVector2D *4c87aa7ef1; // 0x24(0x08)
	float *cbe992ccc5; // 0x2c(0x04)
};

// ScriptStruct TslGame.*0383c2d901
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0383c2d901 {
	enum class ERespawnAircraftRouteType *2cc4399505; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *fa966bff1f; // 0x04(0x04)
	float *c334d8c80e; // 0x08(0x04)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*eed21c4f2f
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct F*eed21c4f2f : FTableRowBase {
	struct FName *bcbfadc128; // 0x08(0x08)
	struct F*f2cceb2abd *f2cceb2abd; // 0x10(0x50)
};

// ScriptStruct TslGame.*f2cceb2abd
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*f2cceb2abd {
	SetProperty Abilities; // 0x00(0x50)
};

// ScriptStruct TslGame.*0ab61af153
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*0ab61af153 : FTableRowBase {
	struct FName *bcbfadc128; // 0x08(0x08)
	struct UClass* Pawn; // 0x10(0x08)
	struct TArray<struct F*0cffe62b9a> *0cffe62b9a; // 0x18(0x10)
	struct UBehaviorTree* *142460419b; // 0x28(0x08)
};

// ScriptStruct TslGame.*0cffe62b9a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0cffe62b9a {
	struct FGameplayTag Tag; // 0x00(0x08)
	enum class EBalanceType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float FloatValue; // 0x0c(0x04)
	int32 IntValue; // 0x10(0x04)
	bool BoolValue; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*5aa26e618b
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*5aa26e618b {
	bool bFixedBluezoneInfo; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector StartPosition; // 0x04(0x0c)
	float StartRadius; // 0x10(0x04)
	bool bApplyBlueZoneDamage; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float BlueZoneDamagePerSecond; // 0x18(0x04)
	float DamageMagnifier; // 0x1c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x20(0x08)
};

// ScriptStruct TslGame.*ceccd6d6ae
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*ceccd6d6ae {
	bool *ec5c6a0669; // 0x00(0x01)
	bool *9ba697e227; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *fa6b815429; // 0x04(0x04)
	struct FBox *b9a2501733; // 0x08(0x1c)
	float *7c612d7a53; // 0x24(0x04)
};

// ScriptStruct TslGame.*1e3a0443e7
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*1e3a0443e7 {
	bool *af5effbc28; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *db9a6cbb85; // 0x04(0x04)
	float *df2dcd01ff; // 0x08(0x04)
	int32 MinCount; // 0x0c(0x04)
	int32 MaxCount; // 0x10(0x04)
};

// ScriptStruct TslGame.*73a6ee6fcc
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*73a6ee6fcc {
	struct TArray<struct F*ce69956467> *aaa74a37f6; // 0x00(0x10)
};

// ScriptStruct TslGame.*ce69956467
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ce69956467 {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct TslGame.*486d1cda96
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*486d1cda96 {
	struct TMap<struct FName, struct F*e007df655b> *c171ab1e70; // 0x00(0x50)
};

// ScriptStruct TslGame.*e007df655b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e007df655b {
	struct U*08ee068e89* *d3481898b3; // 0x00(0x08)
	struct UWeaponTrajectoryData* *339b41d808; // 0x08(0x08)
};

// ScriptStruct TslGame.*15a7294f3f
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct F*15a7294f3f : FTableRowBase {
	struct FName WeaponTag; // 0x08(0x08)
	struct U*08ee068e89* OverridingGunData; // 0x10(0x20)
	struct UWeaponTrajectoryData* OverridingTrajectoryData; // 0x30(0x20)
};

// ScriptStruct TslGame.*4c94731703
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*4c94731703 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	struct FVector *9c5fb64c3a; // 0x10(0x0c)
	struct FRotator *bc2a71c4ec; // 0x1c(0x0c)
};

// ScriptStruct TslGame.*3dc921188e
// Size: 0x70 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*3dc921188e : FTableRowBase {
	struct FName GroupName; // 0x08(0x08)
	struct FName ItemID; // 0x10(0x08)
	float SpawnWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> *5835d54563; // 0x20(0x10)
	struct FVector *9c5fb64c3a; // 0x30(0x0c)
	struct FRotator *bc2a71c4ec; // 0x3c(0x0c)
	bool bSpawnAmmoIfGun; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32 *c3ec45e3b0; // 0x4c(0x04)
	bool *4c8b367eba; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector *8796c387e5; // 0x54(0x0c)
	struct FRotator *8f9a0df14b; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct TslGame.*482ad972f6
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*482ad972f6 {
	struct FVector2D *b9b9973b52; // 0x00(0x08)
	struct FVector2D *c5015bbd52; // 0x08(0x08)
	struct FVector2D *0acfc91ba7; // 0x10(0x08)
	struct FVector2D *5120ad944f; // 0x18(0x08)
	struct FVector2D *a7054317af; // 0x20(0x08)
	float *8210f48abb; // 0x28(0x04)
	struct FVector2D *3346352375; // 0x2c(0x08)
	float *1da779739d; // 0x34(0x04)
	struct FStringAssetReference *cc6a769e54; // 0x38(0x10)
	struct FVector *042924ea9b; // 0x48(0x0c)
	struct FVector *ebb8835031; // 0x54(0x0c)
};

// ScriptStruct TslGame.*ca4b2c8529
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*ca4b2c8529 {
	float *f22dfd27d2; // 0x00(0x04)
	float *53ce235ad0; // 0x04(0x04)
	float *f6f5bc8df1; // 0x08(0x04)
	float *8210f48abb; // 0x0c(0x04)
	float *859fe54568; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FStringAssetReference *cc6a769e54; // 0x18(0x10)
};

// ScriptStruct TslGame.*466f7dcf37
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*466f7dcf37 {
	float DamageMultiplier; // 0x00(0x04)
	float *ef6b49395c; // 0x04(0x04)
};

// ScriptStruct TslGame.CustomDamagePercent
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct FCustomDamagePercent {
	float HeadPercent; // 0x00(0x04)
	float UpperBodyPercent; // 0x04(0x04)
	float LowerBodyPercent; // 0x08(0x04)
	float ArmsPercent; // 0x0c(0x04)
	float LegsPercent; // 0x10(0x04)
};

// ScriptStruct TslGame.*3b95086fae
// Size: 0xb8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3b95086fae {
	float *8865ffe14a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *2509f17ade; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, float> *fce0ff69c8; // 0x58(0x50)
	float *50c380b3d8; // 0xa8(0x04)
	float *c9fb19a144; // 0xac(0x04)
	enum class EEquipSlotID *690810932b; // 0xb0(0x01)
	enum class EDamageReason DamageReason; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct TslGame.*4e50ba39e2
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*4e50ba39e2 : FTableRowBase {
	struct FName OriginItemID; // 0x08(0x08)
	struct FName SwitchItemID; // 0x10(0x08)
	int32 SwitchItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*cc0f5dc4bb
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cc0f5dc4bb {
	struct FVector2D StartPosition; // 0x00(0x08)
	struct FVector2D EndPosition; // 0x08(0x08)
};

// ScriptStruct TslGame.*38a2b39c45
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*38a2b39c45 {
	float Damage; // 0x00(0x04)
	float DamagingStartTime; // 0x04(0x04)
	float TickCount; // 0x08(0x04)
	bool bUsePlayerFence; // 0x0c(0x01)
	bool bUseOutsideDamage; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct TslGame.*75b50f9a33
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*75b50f9a33 {
	struct FName MissionId; // 0x00(0x08)
	int32 *21dda11065; // 0x08(0x04)
	int32 *c57bbe3efc; // 0x0c(0x04)
};

// ScriptStruct TslGame.*37923436e0
// Size: 0x90 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*37923436e0 : FTableRowBase {
	struct FName MissionId; // 0x08(0x08)
	struct FName GroupID; // 0x10(0x08)
	struct FName *afa8aa5cc9; // 0x18(0x08)
	struct FText *db4855461f; // 0x20(0x18)
	struct FText *247429e993; // 0x38(0x18)
	struct UClass* *3e2ef4b76f; // 0x50(0x08)
	struct FString *5583559262; // 0x58(0x10)
	int32 *31c8030f91; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UClass* *5891ba5877; // 0x70(0x08)
	struct FString *3e3d777670; // 0x78(0x10)
	int32 *832755f9b0; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*55fe22ac9b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*55fe22ac9b {
	struct TArray<struct F*3c3927baa0> Instances; // 0x00(0x10)
};

// ScriptStruct TslGame.*e1faa0b9fa
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*e1faa0b9fa : FTableRowBase {
	struct UClass* *5ebb934444; // 0x08(0x08)
	struct TArray<struct FName> *100a0e4378; // 0x10(0x10)
	struct TArray<struct FName> *9bcc4c482f; // 0x20(0x10)
};

// ScriptStruct TslGame.*a40b7b132d
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*a40b7b132d {
	struct FName *4046bc3c43; // 0x00(0x08)
	struct UClass* ActorClass; // 0x08(0x20)
};

// ScriptStruct TslGame.*1b7a77dc27
// Size: 0x30 (Inherited: 0x28)  [layout: LECH - offset chi la uoc luong]
struct F*1b7a77dc27 : F*3e64af8f6b {
	int32 RouletteIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*3e64af8f6b
// Size: 0x28 (Inherited: 0x08)  [layout: KHOP]
struct F*3e64af8f6b : FTableRowBase {
	struct TArray<struct F*e3e475d835> ItemsToDrop; // 0x08(0x10)
	float weight; // 0x18(0x04)
	bool bJackpot; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct UAkAudioEvent* AkAudioEvent; // 0x20(0x08)
};

// ScriptStruct TslGame.*4f8c0ba642
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*4f8c0ba642 : FTableRowBase {
	struct FName ValueFilter; // 0x08(0x08)
	struct FName CategoryFilter; // 0x10(0x08)
	float CategoryFilterWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*fd3ade675c
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*fd3ade675c : FTableRowBase {
	enum class EItemSpotGroupType SpotGroupType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SpotGroupPercent; // 0x0c(0x04)
	enum class EItemSpotType SpotType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float SpotPercentMin; // 0x14(0x04)
	float SpotPercentMax; // 0x18(0x04)
	int32 ItemsPerSpotMin; // 0x1c(0x04)
	int32 ItemsPerSpotMax; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName ValueFilter; // 0x28(0x08)
	float ValueFilterWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.*0af41f34b8
// Size: 0x5c8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0af41f34b8 {
	enum class EItemSpotGroupType SpotGroupType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotGroupPercent; // 0x04(0x04)
	struct TArray<struct F*ca098910d2> SpotTypeProperties; // 0x08(0x10)
	char pad_18[0x5b0]; // 0x18(0x5b0)
};

// ScriptStruct TslGame.*ca098910d2
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*ca098910d2 {
	enum class EItemSpotType SpotType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SpotPercentMin; // 0x04(0x04)
	float SpotPercentMax; // 0x08(0x04)
	int32 ItemsPerSpotMin; // 0x0c(0x04)
	int32 ItemsPerSpotMax; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*df6ed5cfd9> WeightsPerValue; // 0x18(0x10)
	struct TArray<struct F*df6ed5cfd9> WeightsPerCategory; // 0x28(0x10)
};

// ScriptStruct TslGame.*5f7103b600
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*5f7103b600 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	float LottoProb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName LottoBoxTag; // 0x18(0x08)
};

// ScriptStruct TslGame.*135b8ca5e1
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*135b8ca5e1 : FTableRowBase {
	struct FName BoxTag; // 0x08(0x08)
	struct FName ValueFilter; // 0x10(0x08)
	struct FName CategoryFilter; // 0x18(0x08)
	bool ItemAmount; // 0x20(0x01)
	bool bUnique; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct TslGame.*4ce4394421
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*4ce4394421 {
	enum class ERedZoneGenerateType *b35dbce1a8; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *729c66d400; // 0x04(0x0c)
	float *e6fdbf6e8d; // 0x10(0x04)
	float *45078dda04; // 0x14(0x04)
	struct FVector2D *39d645518f; // 0x18(0x08)
};

// ScriptStruct TslGame.*9b4d45401a
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*9b4d45401a {
	bool *154dea2288; // 0x00(0x01)
	bool *c501fdf1fb; // 0x01(0x01)
	bool *8dd25cf76c; // 0x02(0x01)
};

// ScriptStruct TslGame.*83edee1a3e
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*83edee1a3e {
	float *e289f7cc5d; // 0x00(0x04)
	float *ae8d07ae4c; // 0x04(0x04)
	float *1b4690387e; // 0x08(0x04)
	float *ee7df5252d; // 0x0c(0x04)
	float *d896f7eaf2; // 0x10(0x04)
	float *3b1334ef7b; // 0x14(0x04)
	int32 ModuleCount; // 0x18(0x04)
	struct FVector2D *96496b1c95; // 0x1c(0x08)
	struct FVector2D *ccdbeec8bc; // 0x24(0x08)
	float *d6ec7f0ac0; // 0x2c(0x04)
};

// ScriptStruct TslGame.*eecd92cb35
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*eecd92cb35 : FTableRowBase {
	int32 *6f1a8b8c66; // 0x08(0x04)
	float *6f99d489f4; // 0x0c(0x04)
	struct TArray<struct F*65bf84f47a> *6dfae2e7cc; // 0x10(0x10)
};

// ScriptStruct TslGame.*361059283a
// Size: 0x160 (Inherited: 0x08)  [layout: KHOP]
struct F*361059283a : FTableRowBase {
	struct FName PresetID; // 0x08(0x08)
	struct FName PresetName; // 0x10(0x08)
	struct FName ModeName; // 0x18(0x08)
	struct UWorld* MapName; // 0x20(0x20)
	struct FName Logic; // 0x40(0x08)
	struct FName AntiCheat; // 0x48(0x08)
	struct FName Connection; // 0x50(0x08)
	struct FName *fc760c6f8d; // 0x58(0x08)
	struct FName *60baadd018; // 0x60(0x08)
	struct FName AirborneMatchPreparer; // 0x68(0x08)
	struct FName NormalMatchPreparer; // 0x70(0x08)
	struct FName Bluezone; // 0x78(0x08)
	struct FName PlayerFence; // 0x80(0x08)
	struct FName *5d702f6b5f; // 0x88(0x08)
	struct FName SpecialZone; // 0x90(0x08)
	struct FName VehicleSpawn; // 0x98(0x08)
	struct FName ItemSpawn; // 0xa0(0x08)
	struct FName SpawnKit; // 0xa8(0x08)
	struct FName SecretRoom; // 0xb0(0x08)
	struct FName CarePackage; // 0xb8(0x08)
	struct FName *6e45fa0fdf; // 0xc0(0x08)
	struct FName BlueChip; // 0xc8(0x08)
	struct FName *32b48a08d0; // 0xd0(0x08)
	struct FName EmergencyPickup; // 0xd8(0x08)
	struct FName VendingMachine; // 0xe0(0x08)
	struct FName DestructibleItemBox; // 0xe8(0x08)
	struct FName *b438c2ef71; // 0xf0(0x08)
	struct FName *0fb740d50b; // 0xf8(0x08)
	struct FName BluechipCarePackage; // 0x100(0x08)
	struct FName LevelBound; // 0x108(0x08)
	struct FName Respawn; // 0x110(0x08)
	struct FName Round; // 0x118(0x08)
	struct FName *7579d726e6; // 0x120(0x08)
	struct FName InteractiveSmoke; // 0x128(0x08)
	struct TArray<struct FName> *f47f715bed; // 0x130(0x10)
	struct TArray<struct UWorld*> *d1888146c9; // 0x140(0x10)
	struct TArray<struct UWorld*> *6b2454bcff; // 0x150(0x10)
};

// ScriptStruct TslGame.*fe2ab09501
// Size: 0x40 (Inherited: 0x08)  [layout: KHOP]
struct F*fe2ab09501 : FTableRowBase {
	struct FName *7cb3c1b619; // 0x08(0x08)
	struct FName GroupName; // 0x10(0x08)
	struct UClass* *5ebb934444; // 0x18(0x20)
	struct UClass* *10220df713; // 0x38(0x08)
};

// ScriptStruct TslGame.*6028508b12
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6028508b12 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName ActionName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct TslGame.*762f45126a
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*762f45126a {
	struct FName SocketName; // 0x00(0x08)
	struct FName *9025f4d05c; // 0x08(0x08)
};

// ScriptStruct TslGame.*c55a25db21
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*c55a25db21 {
	bool bInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Disabled; // 0x08(0x10)
	struct TArray<struct FString> Enabled; // 0x18(0x10)
	struct TArray<struct FString> ModeFeature; // 0x28(0x10)
};

// ScriptStruct TslGame.*a59eb60dc3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*a59eb60dc3 {
	struct TArray<struct FStringAssetReference> References; // 0x00(0x10)
};

// ScriptStruct TslGame.*ad919b8f7e
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ad919b8f7e {
	struct FName Key; // 0x00(0x08)
	struct FVector Param; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*5bbab9a691
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5bbab9a691 {
	struct TArray<struct ATeam*> Teams; // 0x00(0x10)
};

// ScriptStruct TslGame.*6e479a40d1
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6e479a40d1 {
	struct FName ItemID; // 0x00(0x08)
	int32 Limits; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7b4ee8d47b
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7b4ee8d47b {
	struct FName Name; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*241b453835
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*241b453835 {
	float GaugeDecreaseAmount; // 0x00(0x04)
	float GaugeDecreaseInterval; // 0x04(0x04)
};

// ScriptStruct TslGame.BlockAction
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlockAction {
	struct FName ActionName; // 0x00(0x08)
	enum class EInputEvent KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct TslGame.*a80f8038dc
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*a80f8038dc {
	struct FString Category; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
	enum class *6c6251c484 Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 DefaultParameter; // 0x44(0x04)
};

// ScriptStruct TslGame.*bb316b423f
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bb316b423f {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*703a164e13
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*703a164e13 {
	struct UParticleSystem* *e3d1171b9b; // 0x00(0x08)
	struct FName *44e08d39d1; // 0x08(0x08)
	struct FName *084586f78c; // 0x10(0x08)
	struct FName *46f749e718; // 0x18(0x08)
	struct TMap<int32, struct FVector> *3247ecb278; // 0x20(0x50)
	float *bc7ef7bd23; // 0x70(0x04)
	float *10681efa82; // 0x74(0x04)
	float *069965cedb; // 0x78(0x04)
	float *6249e57a71; // 0x7c(0x04)
	float *d944f3f28e; // 0x80(0x04)
	float *924f43a3d6; // 0x84(0x04)
	float *1f2b1f2b80; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct TslGame.*606e75534b
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*606e75534b {
	float *183a1f8d62; // 0x00(0x04)
};

// ScriptStruct TslGame.*c3811e6332
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*c3811e6332 {
	float *2ef4be1621; // 0x00(0x04)
	struct FVector2D *cd47e88d86; // 0x04(0x08)
};

// ScriptStruct TslGame.*9c4ae21083
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*9c4ae21083 {
	float *d530afffb2; // 0x00(0x04)
	float *46d0b61646; // 0x04(0x04)
	float *a6c94d57c8; // 0x08(0x04)
	bool *c79b54fb59; // 0x0c(0x01)
	bool *f66c993eb6; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct UCurveFloat* *895669a326; // 0x10(0x08)
	struct UCurveFloat* *a7a386b3c4; // 0x18(0x08)
};

// ScriptStruct TslGame.*99ad8b3327
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*99ad8b3327 {
	float *010f1e4c9a; // 0x00(0x04)
	float *e4468a8dfb; // 0x04(0x04)
	float *2000b46067; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct TslGame.*80a3e6b40d
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*80a3e6b40d {
	float DragCoefficient; // 0x00(0x04)
	float SectionArea; // 0x04(0x04)
};

// ScriptStruct TslGame.*cc9462377f
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*cc9462377f {
	bool *343985cc20; // 0x00(0x01)
	enum class *a423a1952c *edc5ce73d8; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *953e35d3be; // 0x04(0x04)
};

// ScriptStruct TslGame.*8235af5b11
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8235af5b11 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*0d92991737
// Size: 0xf8 (Inherited: 0x00)  [layout: KHOP]
struct F*0d92991737 {
	struct F*a0652141e0 *e43058fdc1; // 0x00(0x18)
	struct F*74a49ed342 *9e1b5c4ff7; // 0x18(0x18)
	struct TArray<struct FString> *b5128a0a27; // 0x30(0x10)
	struct F*6092c3a453 *067e74f041; // 0x40(0x68)
	struct F*e7e13e9fe0 *aafb9acdce; // 0xa8(0x50)
};

// ScriptStruct TslGame.*e7e13e9fe0
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*e7e13e9fe0 {
	struct TMap<enum class ETslIngameMissionType, struct F*54f26c2a54> *6a0a7c6f18; // 0x00(0x50)
};

// ScriptStruct TslGame.*54f26c2a54
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*54f26c2a54 {
	float *ab771bbbd1; // 0x00(0x04)
	float *eed25e53bd; // 0x04(0x04)
};

// ScriptStruct TslGame.*6092c3a453
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*6092c3a453 {
	int32 *97662e00b3; // 0x00(0x04)
	int32 MissionReplacementCount; // 0x04(0x04)
	int32 *d971138ed3; // 0x08(0x04)
	int32 *d94a98253d; // 0x0c(0x04)
	float *482a1b1f3a; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class ETslIngameMissionType, int32> *d7ae1605e2; // 0x18(0x50)
};

// ScriptStruct TslGame.*bc0eac88bc
// Size: 0x68 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*bc0eac88bc : FTableRowBase {
	bool *d8407a1759; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName RewardId; // 0x10(0x08)
	enum class ETslIngameMissionType *1c68ea6795; // 0x18(0x01)
	enum class ETslIngameMissionRewardType *687215862d; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct F*22b139e8e2> RewardItems; // 0x20(0x10)
	struct FStringAssetReference Icon; // 0x30(0x10)
	int32 weight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*a0652141e0 *173e95410b; // 0x48(0x18)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct TslGame.*22b139e8e2
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*22b139e8e2 {
	struct FName *afaac4c1e5; // 0x00(0x08)
	int32 *3740f2a7ff; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d815e20661
// Size: 0x88 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*d815e20661 : FTableRowBase {
	bool *279b65fc3d; // 0x08(0x01)
	bool *d8407a1759; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName ID; // 0x10(0x08)
	enum class ETslIngameMissionType *1c68ea6795; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText Description; // 0x20(0x18)
	enum class ETslIngameMissionType *687215862d; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 weight; // 0x3c(0x04)
	struct F*a0652141e0 *173e95410b; // 0x40(0x18)
	struct F*74a49ed342 ModeSelector; // 0x58(0x18)
	struct TArray<struct F*ce91cf080e> Conditions; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct TslGame.*ce91cf080e
// Size: 0xd0 (Inherited: 0x00)  [layout: KHOP]
struct F*ce91cf080e {
	struct TArray<struct F*efba7775f2> Item; // 0x00(0x10)
	struct TArray<struct F*5606193ffb> Heal; // 0x10(0x10)
	struct TArray<struct F*6bba28e116> KillAssist; // 0x20(0x10)
	struct TArray<struct F*4ee488f806> DealDamage; // 0x30(0x10)
	struct TArray<struct F*2123e4ec26> TakeDamage; // 0x40(0x10)
	struct TArray<struct F*19733c46b1> Revive; // 0x50(0x10)
	struct TArray<struct F*314c79d1a6> Move; // 0x60(0x10)
	struct TArray<struct F*f66bf040f1> Destroy; // 0x70(0x10)
	struct TArray<struct F*719e60eb05> Interact; // 0x80(0x10)
	struct TArray<struct F*99e11787cc> Emote; // 0x90(0x10)
	struct TArray<struct F*7f16c1c249> Visit; // 0xa0(0x10)
	struct TArray<struct F*9fb1faa188> Parkour; // 0xb0(0x10)
	struct TArray<struct F*3292bf907a> Transportation; // 0xc0(0x10)
};

// ScriptStruct TslGame.*3292bf907a
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*3292bf907a : F*59e59316c0 {
	enum class EMovementBaseType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*59e59316c0
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*59e59316c0 {
	char pad_0[0x8]; // 0x00(0x08)
	struct F*55f9a944ff Goal; // 0x08(0x08)
	struct F*2fbe43623a Timer; // 0x10(0x08)
};

// ScriptStruct TslGame.*2fbe43623a
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2fbe43623a {
	int32 *dc2448fd9b; // 0x00(0x04)
	enum class ETslIngameMission_Condition_ComparisonType *86e942c0a8; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*55f9a944ff
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*55f9a944ff {
	int32 *2cd3a2c317; // 0x00(0x04)
	enum class ETslIngameMission_Condition_ComparisonType *86e942c0a8; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct TslGame.*9fb1faa188
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*9fb1faa188 : F*59e59316c0 {
	enum class ETslIngameMission_Condition_ParkourType Type; // 0x18(0x01)
	struct F*248470455f Settings; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*248470455f
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*248470455f {
	struct F*8349e695c2 Vaulting; // 0x00(0x01)
};

// ScriptStruct TslGame.*8349e695c2
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*8349e695c2 {
	bool *9366072c13; // 0x00(0x01)
};

// ScriptStruct TslGame.*7f16c1c249
// Size: 0x38 (Inherited: 0x18)  [layout: KHOP]
struct F*7f16c1c249 : F*59e59316c0 {
	enum class ETslIngameMission_ConditionData_VisitType *efdee072c4; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*ab483b9e44 Settings; // 0x20(0x18)
};

// ScriptStruct TslGame.*ab483b9e44
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ab483b9e44 {
	struct F*7a5e9db6ac Region; // 0x00(0x10)
	struct F*c791bb434f Place; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*c791bb434f
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*c791bb434f {
	enum class ETslIngameMission_Condition_PlaceType Type; // 0x00(0x01)
};

// ScriptStruct TslGame.*7a5e9db6ac
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*7a5e9db6ac {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct TslGame.*99e11787cc
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct F*99e11787cc : F*59e59316c0 {
};

// ScriptStruct TslGame.*719e60eb05
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*719e60eb05 : F*59e59316c0 {
	enum class ETslIngameMission_ConditionData_InteractionType Type; // 0x18(0x01)
	struct F*dccbd14985 Settings; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct TslGame.*dccbd14985
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*dccbd14985 {
	struct F*af342ff38c *80eda28ce1; // 0x00(0x01)
};

// ScriptStruct TslGame.*af342ff38c
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct F*af342ff38c {
	enum class EInteractableActorType Type; // 0x00(0x01)
};

// ScriptStruct TslGame.*f66bf040f1
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*f66bf040f1 : F*59e59316c0 {
	enum class ETslDestructibleObjectType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*314c79d1a6
// Size: 0x38 (Inherited: 0x18)  [layout: KHOP]
struct F*314c79d1a6 : F*59e59316c0 {
	enum class ETslIngameMission_CoditionData_MoveType *fefd6187d4; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*905e3ad342 Settings; // 0x20(0x18)
};

// ScriptStruct TslGame.*905e3ad342
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*905e3ad342 {
	struct F*7ee7e2bd6c Drive; // 0x00(0x18)
};

// ScriptStruct TslGame.*7ee7e2bd6c
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*7ee7e2bd6c {
	enum class ETslIngameMission_CoditionData_VehicleType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct TslGame.*19733c46b1
// Size: 0x30 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*19733c46b1 : F*59e59316c0 {
	struct TArray<enum class ETslIngameMission_ConditionData_ReviveType> *23e7da6523; // 0x18(0x10)
	enum class ERevivalMethod *c1fb3a2c7e; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*2123e4ec26
// Size: 0x20 (Inherited: 0x18)  [layout: LECH - offset chi la uoc luong]
struct F*2123e4ec26 : F*59e59316c0 {
	int32 BlueZonePhase; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*4ee488f806
// Size: 0x58 (Inherited: 0x18)  [layout: KHOP]
struct F*4ee488f806 : F*59e59316c0 {
	struct TArray<enum class EWeaponClass> *9c2c89edcd; // 0x18(0x10)
	struct TArray<struct FName> *c13e6e3acb; // 0x28(0x10)
	struct TArray<struct FName> *2d2b1c54b5; // 0x38(0x10)
	struct TArray<enum class ETslAIPlayerType> *016704dee9; // 0x48(0x10)
};

// ScriptStruct TslGame.*6bba28e116
// Size: 0x68 (Inherited: 0x18)  [layout: KHOP]
struct F*6bba28e116 : F*59e59316c0 {
	enum class ETslIngameMission_ConditionData_KillAssistType *d0f5b04429; // 0x18(0x01)
	enum class ETslIngameMission_ConditionData_KillType *ab7941237c; // 0x19(0x01)
	bool *e30b09fcca; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct F*55f9a944ff *27ba62bb9f; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<enum class EWeaponClass> *9c2c89edcd; // 0x28(0x10)
	struct TArray<struct FName> *c13e6e3acb; // 0x38(0x10)
	struct TArray<struct FName> *2d2b1c54b5; // 0x48(0x10)
	struct TArray<enum class ETslAIPlayerType> *016704dee9; // 0x58(0x10)
};

// ScriptStruct TslGame.*5606193ffb
// Size: 0x18 (Inherited: 0x18)  [layout: KHOP]
struct F*5606193ffb : F*59e59316c0 {
};

// ScriptStruct TslGame.*efba7775f2
// Size: 0x78 (Inherited: 0x18)  [layout: KHOP]
struct F*efba7775f2 : F*59e59316c0 {
	enum class ETslIngameMission_ConditionData_ItemMissionType *e88cce1ff5; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct F*45a7ea2d75 Settings; // 0x20(0x58)
};

// ScriptStruct TslGame.*45a7ea2d75
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*45a7ea2d75 {
	bool *1fd40351f6; // 0x00(0x01)
	enum class ItemPackageType *7b0d217486; // 0x01(0x01)
	enum class ETslIngameMission_ConditionData_ItemUseType *55435455ea; // 0x02(0x01)
	enum class EItemRequestType *65c025f796; // 0x03(0x01)
	enum class ETslIngameMission_ConditionData_ItemType *5158a89185; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct F*b7c8adf074 *4b85a4e710; // 0x08(0x50)
};

// ScriptStruct TslGame.*b7c8adf074
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*b7c8adf074 {
	struct F*f58d53fdf5 Any; // 0x00(0x08)
	struct F*354a14137a *1f14a62b61; // 0x08(0x18)
	struct F*a389110b2b Weapon; // 0x20(0x20)
	struct F*705d840aa0 *d4ea2416cc; // 0x40(0x10)
};

// ScriptStruct TslGame.*705d840aa0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*705d840aa0 {
	struct TArray<enum class ECastableItemType> *48dc6bbe6e; // 0x00(0x10)
};

// ScriptStruct TslGame.*a389110b2b
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a389110b2b {
	bool *c62d828af6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EWeaponClass> *af5f89dd98; // 0x08(0x10)
	enum class ETslIngameMissionCondition_FlareGunUsage *544bda992b; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*354a14137a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*354a14137a {
	struct TArray<enum class EEquipableItemLevelType> *f554bc64fc; // 0x00(0x10)
	enum class EEquipSlotID *9912286281; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*f58d53fdf5
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*f58d53fdf5 {
	struct FName ItemID; // 0x00(0x08)
};

// ScriptStruct TslGame.*f6dcc613e3
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*f6dcc613e3 {
	int32 *00de86b702; // 0x00(0x04)
	int32 *3882fa659c; // 0x04(0x04)
	struct TArray<struct F*f1269aebed> *042193e104; // 0x08(0x10)
};

// ScriptStruct TslGame.*f1269aebed
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f1269aebed {
	int32 Progress; // 0x00(0x04)
	int32 Goal; // 0x04(0x04)
	bool *fc595df13f; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*2235853c6d
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*2235853c6d {
	char pad_0[0x90]; // 0x00(0x90)
	struct ATslPlayerController* *f5d17cdcca; // 0x90(0x08)
	struct AActor* DamageCauser; // 0x98(0x08)
};

// ScriptStruct TslGame.*23bd14b17c
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*23bd14b17c {
	struct TMap<int32, struct F*ad96dc990d> *e40ee6bee6; // 0x00(0x50)
};

// ScriptStruct TslGame.*ad96dc990d
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*ad96dc990d {
	struct TArray<int32> Indices; // 0x00(0x10)
};

// ScriptStruct TslGame.*656684b39b
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*656684b39b {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.TslMultiAssetLoader
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct FTslMultiAssetLoader : FTslAssetLoaderBase {
	struct TArray<struct UObject*> AssetPtrs; // 0x60(0x10)
};

// ScriptStruct TslGame.TslAssetLoaderBase
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslAssetLoaderBase {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.TslAssetLoader
// Size: 0x80 (Inherited: 0x60)  [layout: KHOP]
struct FTslAssetLoader : FTslAssetLoaderBase {
	struct UObject* AssetPtr; // 0x60(0x20)
};

// ScriptStruct TslGame.*0ca4775e33
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*0ca4775e33 {
	struct UParticleSystem* Particle; // 0x00(0x20)
	struct UAkAudioEvent* *999877bcd4; // 0x20(0x08)
};

// ScriptStruct TslGame.*fe7679f9db
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*fe7679f9db {
	struct F*b444c713d5 *7212c1820f; // 0x00(0x08)
	struct F*b444c713d5 *980003c534; // 0x08(0x08)
	struct F*b444c713d5 *66c4015d48; // 0x10(0x08)
	struct F*b444c713d5 *fb17bd39f6; // 0x18(0x08)
	struct F*b444c713d5 *999db0d09c; // 0x20(0x08)
};

// ScriptStruct TslGame.*b444c713d5
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*b444c713d5 {
	float ActiveValue; // 0x00(0x04)
	float *fe22bb0c02; // 0x04(0x04)
};

// ScriptStruct TslGame.*017a2633c4
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*017a2633c4 {
	int32 *fb891352a2; // 0x00(0x04)
	int32 *827222f2cc; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*d7a7fcaa0e
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d7a7fcaa0e {
	enum class EStoreCategory StoreCategory; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ProductID; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	int32 StackCount; // 0x10(0x04)
	int32 StoreItemPrice; // 0x14(0x04)
	int32 SortingPriority; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*657339752c
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*657339752c {
	enum class EMarketLevel MarketLevel; // 0x00(0x01)
	enum class EStoreCategory StoreCategory; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText GroupName; // 0x08(0x18)
	enum class EMarketCategoryType MarketCategoryType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*ba66326a11
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*ba66326a11 : FTableRowBase {
	enum class EMarketLevel MarketLevel; // 0x08(0x01)
	enum class EStoreCategory StoreCategory; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FText GroupName; // 0x10(0x18)
	enum class EMarketCategoryType MarketCategoryType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*8b9a1999be
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*8b9a1999be : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 weight; // 0x10(0x04)
	int32 AdditionalAmmoCount; // 0x14(0x04)
};

// ScriptStruct TslGame.MarketShopUIItemCategoryInfo
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct FMarketShopUIItemCategoryInfo {
	struct FText Name; // 0x00(0x18)
	enum class EStoreCategory StoreCategory; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<int32> ProductIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*997cf5360d
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*997cf5360d : FTableRowBase {
	enum class ESatelliteItemPackageGroup ItemPackageGroup; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 Quantity; // 0x0c(0x04)
	struct TArray<struct F*e5dbb50295> Items; // 0x10(0x10)
};

// ScriptStruct TslGame.*e5dbb50295
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e5dbb50295 {
	struct FName ItemID; // 0x00(0x08)
	int32 SpawnWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*62706e0a10
// Size: 0xd8 (Inherited: 0x08)  [layout: KHOP]
struct F*62706e0a10 : FTableRowBase {
	struct FString LobbyPoseId; // 0x08(0x10)
	struct TMap<enum class ELobbyPosePlayType, struct F*df33f94b74> *aa22088638; // 0x18(0x50)
	struct UAnimMontage* *fd94db0607; // 0x68(0x20)
	struct TMap<enum class ELobbyPosePlayType, struct FName> *32056eefff; // 0x88(0x50)
};

// ScriptStruct TslGame.*df33f94b74
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*df33f94b74 {
	struct TArray<struct F*d1bd8bebb1> *81edb7500a; // 0x00(0x10)
	struct TMap<enum class *761ae7806d, struct FTransform> *f47ecb9da1; // 0x10(0x50)
	bool *556f32a964; // 0x60(0x01)
	bool *c97b96f8db; // 0x61(0x01)
	bool *c7cddeacc2; // 0x62(0x01)
	enum class ELobbyPosePlayType *42dd452151; // 0x63(0x01)
	bool *94df27199b; // 0x64(0x01)
	bool *f0da0dd7d0; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct TslGame.*d1bd8bebb1
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*d1bd8bebb1 {
	enum class ELobbyCharacterTransitionType *334c17d8e4; // 0x00(0x01)
	bool *41f060dabe; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct UAnimSequenceBase*> *0dae6b401f; // 0x08(0x10)
	struct TArray<struct F*08a7bc0045> *b3a6a97510; // 0x18(0x10)
};

// ScriptStruct TslGame.*08a7bc0045
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*08a7bc0045 {
	enum class *761ae7806d *6e1d98a33a; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<bool> *192b09b4e8; // 0x08(0x10)
};

// ScriptStruct TslGame.*49d4b53b2a
// Size: 0x5e0 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct F*49d4b53b2a : F*3dd9bdf3cc {
	struct F*8f5287e58e *72ab477066; // 0x518(0xc0)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// ScriptStruct TslGame.*8f5287e58e
// Size: 0xc0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8f5287e58e {
	struct FWuLobbyPosePlayData *18decb3ea9; // 0x00(0x48)
	struct F*df33f94b74 *df33f94b74; // 0x48(0x68)
	struct UAnimSequenceBase* CurrentLobbyPoseSequence; // 0xb0(0x08)
	float CurrentSequencePosition; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct TslGame.*a52aa2e16d
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*a52aa2e16d {
	struct FName *e903b0fef0; // 0x00(0x08)
	struct TArray<struct F*5522c807a1> *aad3b01b23; // 0x08(0x10)
	struct TArray<enum class EWeaponAttachmentSlotID> *f919821005; // 0x18(0x10)
};

// ScriptStruct TslGame.*3a6d99b9e8
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3a6d99b9e8 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*a4da2a6722
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*a4da2a6722 {
	struct TArray<struct UItem*> InventoryItems; // 0x00(0x10)
	struct TArray<struct F*e502010595> *e962245869; // 0x10(0x10)
};

// ScriptStruct TslGame.*e502010595
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e502010595 {
	char pad_0[0x8]; // 0x00(0x08)
	struct U*6c7f0ccc53* Item; // 0x08(0x08)
};

// ScriptStruct TslGame.*321b6d4cbe
// Size: 0x03 (Inherited: 0x00)  [layout: KHOP]
struct F*321b6d4cbe {
	bool *7a6c9a6d2b; // 0x00(0x01)
	bool *91563c4d1e; // 0x01(0x01)
	bool *a64da0dd3c; // 0x02(0x01)
};

// ScriptStruct TslGame.*954e136f2d
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*954e136f2d : FTableRowBase {
	struct UTexture2D* *48ce65e6ca; // 0x08(0x08)
	bool *51fdb2b201; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText KillerName; // 0x18(0x18)
};

// ScriptStruct TslGame.*d76f2a7fbf
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*d76f2a7fbf {
	int32 *397a6b4fd7; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	float Damage; // 0x10(0x04)
	float Radius; // 0x14(0x04)
	float Depth; // 0x18(0x04)
};

// ScriptStruct TslGame.WeatherLevelInfo
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FWeatherLevelInfo {
	struct FString WeatherId; // 0x00(0x10)
	int32 weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName WeatherLevel; // 0x18(0x08)
};

// ScriptStruct TslGame.*e05867f5c5
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e05867f5c5 {
	int32 ParticleIndex; // 0x00(0x04)
	float *abfe3ab729; // 0x04(0x04)
	float *617ed0298f; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct TslGame.*581b2b7ae5
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*581b2b7ae5 {
	int32 *35f5a61ec3; // 0x00(0x04)
	float *60eaf7b4a9; // 0x04(0x04)
	struct TArray<struct FVector> *89ba4940d6; // 0x08(0x10)
	int32 *5dd2aa530d; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> *22b2cbd8f5; // 0x20(0x10)
	struct TArray<bool> *aa596a85be; // 0x30(0x10)
	struct TArray<struct UClass*> *3f33c2fbc4; // 0x40(0x10)
};

// ScriptStruct TslGame.*611515ac89
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*611515ac89 {
	struct ATslLivingThingVolume* *c81dfc058b; // 0x00(0x08)
	int32 *35f5a61ec3; // 0x08(0x04)
	float *60eaf7b4a9; // 0x0c(0x04)
	int32 *ca27f7c6ce; // 0x10(0x04)
	float SpawnRate; // 0x14(0x04)
	int32 RandomSeed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct F*97ff37e2fa> *efc243c478; // 0x20(0x10)
};

// ScriptStruct TslGame.*97ff37e2fa
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*97ff37e2fa {
	int32 *9a7f515385; // 0x00(0x04)
	float *7d93a1a078; // 0x04(0x04)
	struct TArray<struct F*664ce5e2cd> *1a55d1c993; // 0x08(0x10)
};

// ScriptStruct TslGame.*664ce5e2cd
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*664ce5e2cd {
	float ServerTimeSeconds; // 0x00(0x04)
	bool EventID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<bool> Params; // 0x08(0x10)
};

// ScriptStruct TslGame.*35d6e4272c
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*35d6e4272c {
	enum class ELivingThingThreatLevel ThreatLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastServerTimeSeconds; // 0x04(0x04)
};

// ScriptStruct TslGame.*da1f824647
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*da1f824647 {
	int32 NetGUID; // 0x00(0x04)
	float SpawnTimeSeconds; // 0x04(0x04)
	float DestroyTimeSeconds; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator SpawnRotation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* ActorClass; // 0x28(0x08)
	struct TArray<struct F*664ce5e2cd> EventArray; // 0x30(0x10)
};

// ScriptStruct TslGame.*5d50916b62
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*5d50916b62 {
	enum class EDistanceBasedEvent DistanceBasedEvent; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *1ae5ebcda5; // 0x04(0x04)
};

// ScriptStruct TslGame.*e5ab3904fa
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*e5ab3904fa {
	struct TArray<struct F*d640490087> TextureParams; // 0x00(0x10)
	struct TArray<struct F*8147da7369> ScalarParams; // 0x10(0x10)
	struct TArray<struct F*c9a4a3ba43> VectorParams; // 0x20(0x10)
};

// ScriptStruct TslGame.*c9a4a3ba43
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*c9a4a3ba43 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Value; // 0x08(0x10)
};

// ScriptStruct TslGame.*8147da7369
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8147da7369 {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*d640490087
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d640490087 {
	struct FName Name; // 0x00(0x08)
	struct UTexture2D* Value; // 0x08(0x08)
};

// ScriptStruct TslGame.*9036e0db85
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9036e0db85 {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
};

// ScriptStruct TslGame.*84a885ff10
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*84a885ff10 {
	struct FName AnimName; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float ServerTimeSeconds; // 0x0c(0x04)
	float PlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*d55db1df71
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*d55db1df71 {
	float *031cfabb47; // 0x00(0x04)
	int32 *9a7f515385; // 0x04(0x04)
	float *d5d7b57e8d; // 0x08(0x04)
};

// ScriptStruct TslGame.*eaf2a4dfa1
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*eaf2a4dfa1 {
	float *031cfabb47; // 0x00(0x04)
	int32 *9a7f515385; // 0x04(0x04)
	float *60eaf7b4a9; // 0x08(0x04)
	struct FVector SpawnLocation; // 0x0c(0x0c)
	struct FRotator *7083df1110; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FStringAssetReference ActorClass; // 0x28(0x10)
};

// ScriptStruct TslGame.*fd73db4406
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*fd73db4406 {
	float *031cfabb47; // 0x00(0x04)
	float *c2306458ff; // 0x04(0x04)
	int32 *397a6b4fd7; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<bool> *ce3342e944; // 0x10(0x10)
	struct TArray<int32> NetGUIDs; // 0x20(0x10)
};

// ScriptStruct TslGame.*a37f24a431
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct F*a37f24a431 : FTableRowBase {
	float CellSize; // 0x08(0x04)
	struct FBoxSphereBounds VolumeBounds; // 0x0c(0x1c)
	struct TArray<struct F*a3c5019e75> *7ec03619ab; // 0x28(0x10)
};

// ScriptStruct TslGame.*a3c5019e75
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*a3c5019e75 {
	int32 *cb340a35a4; // 0x00(0x04)
	int32 *8242c189e5; // 0x04(0x04)
	int32 *0cfb81472a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int16> *6ff322207d; // 0x10(0x10)
	struct TArray<float> LocationZ; // 0x20(0x10)
};

// ScriptStruct TslGame.*15b341c05a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*15b341c05a {
	struct UClass* Class; // 0x00(0x08)
	float Ratio; // 0x08(0x04)
	bool *431a94a71f; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*dd0f93ba15
// Size: 0x80 (Inherited: 0x08)  [layout: KHOP]
struct F*dd0f93ba15 : FTableRowBase {
	enum class *761ae7806d Poisition; // 0x08(0x01)
	enum class ELobbyCharacterTransitionType State; // 0x09(0x01)
	bool bDefaultAnimation; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float CycleTimes; // 0x0c(0x04)
	struct UAnimSequenceBase* UnArmed; // 0x10(0x08)
	struct UAnimSequenceBase* Pistol; // 0x18(0x08)
	struct UAnimSequenceBase* SMG; // 0x20(0x08)
	struct UAnimSequenceBase* Rifle; // 0x28(0x08)
	struct UAnimSequenceBase* Carbine; // 0x30(0x08)
	struct UAnimSequenceBase* Shotgun; // 0x38(0x08)
	struct UAnimSequenceBase* Sniper; // 0x40(0x08)
	struct UAnimSequenceBase* DMR; // 0x48(0x08)
	struct UAnimSequenceBase* LMG; // 0x50(0x08)
	struct UAnimSequenceBase* Melee; // 0x58(0x08)
	struct UAnimSequenceBase* Throwable; // 0x60(0x08)
	struct UAnimSequenceBase* Shield; // 0x68(0x08)
	struct UAnimSequenceBase* crossbow; // 0x70(0x08)
	struct UAnimSequenceBase* Launcher; // 0x78(0x08)
};

// ScriptStruct TslGame.*dc2fe0865c
// Size: 0xc0 (Inherited: 0x00)  [layout: KHOP]
struct F*dc2fe0865c {
	struct F*89163fcbe0 *89163fcbe0; // 0x00(0x70)
	struct FLobbyPoseAsyncLoadHandler LobbyPoseAsyncLoadHandler; // 0x70(0x50)
};

// ScriptStruct TslGame.LobbyPoseAsyncLoadHandler
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLobbyPoseAsyncLoadHandler {
	struct UAnimMontage* *d72b99dafb; // 0x00(0x20)
	struct TArray<struct UAnimSequenceBase*> *2bedbcfc13; // 0x20(0x10)
	char pad_30[0x20]; // 0x30(0x20)
};

// ScriptStruct TslGame.*97bf653c9a
// Size: 0x120 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*97bf653c9a {
	char pad_0[0x50]; // 0x00(0x50)
	struct F*df33f94b74 *b1ac2e7ee4; // 0x50(0x68)
	struct UAnimMontage* *49b1ba4c10; // 0xb8(0x20)
	char pad_D8[0x48]; // 0xd8(0x48)
};

// ScriptStruct TslGame.*e11f54e394
// Size: 0x28 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*e11f54e394 : F*dd265ae101 {
	float Timestamp; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*dd265ae101
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*dd265ae101 {
	struct FName *6f8cb8a6fb; // 0x00(0x08)
	enum class EMarkerType *e3709b815e; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FVector> *3ac9d514f6; // 0x10(0x10)
};

// ScriptStruct TslGame.*d074fd61dc
// Size: 0x28 (Inherited: 0x20)  [layout: LECH - offset chi la uoc luong]
struct F*d074fd61dc : F*dd265ae101 {
	bool *4ef27378c1; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*08321c53cf
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*08321c53cf {
	struct FName Name; // 0x00(0x08)
	struct U*99ee1152b1* Media; // 0x08(0x08)
	struct UAkAudioEvent* Sound; // 0x10(0x08)
	struct UTexture* Image; // 0x18(0x08)
};

// ScriptStruct TslGame.*6fe05f95a8
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6fe05f95a8 {
	struct TArray<struct U*99ee1152b1*> LODs; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct TslGame.*fc833067e4
// Size: 0x1b8 (Inherited: 0x08)  [layout: KHOP]
struct F*fc833067e4 : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush *0dd09b5481; // 0x98(0x90)
	struct FSlateBrush *d730208e0a; // 0x128(0x90)
};

// ScriptStruct TslGame.*ddead23e20
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct F*ddead23e20 : FSlateWidgetStyle {
	struct FSlateSound *a4fdf7e1ed; // 0x08(0x18)
	struct FSlateSound *e170669b45; // 0x20(0x18)
};

// ScriptStruct TslGame.*50dd5b87bb
// Size: 0x218 (Inherited: 0x08)  [layout: KHOP]
struct F*50dd5b87bb : FSlateWidgetStyle {
	struct FSlateBrush *67308dea29; // 0x08(0x90)
	struct FSlateBrush *584285ebf6; // 0x98(0x90)
	struct FSlateBrush *ed2c8de872; // 0x128(0x90)
	struct FSlateSound *fe55d96324; // 0x1b8(0x18)
	struct FSlateSound *ba67e90bd4; // 0x1d0(0x18)
	struct FSlateSound *7884d1d44d; // 0x1e8(0x18)
	struct FSlateSound *5e69acc3fc; // 0x200(0x18)
};

// ScriptStruct TslGame.*8ebdad6c84
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*8ebdad6c84 {
	enum class EMissileState State; // 0x00(0x04)
	float *9c53148d4a; // 0x04(0x04)
	struct FVector *734fc498d5; // 0x08(0x0c)
	bool *b518d85936; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct TslGame.*0766cc81e7
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0766cc81e7 {
	struct FVector2D *caf3bde124; // 0x00(0x08)
	int32 AircraftID; // 0x08(0x04)
	enum class *0835c4cbd0 *4fe98af12b; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString *da57172cfb; // 0x10(0x10)
	enum class EDeployedAirDropState State; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct TslGame.*6bf88204a9
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*6bf88204a9 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<bool> Rules; // 0x08(0x10)
	bool *d905a062c5; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *4856b5a7d2; // 0x1c(0x04)
	float SendInterval; // 0x20(0x04)
	int32 SendChunkSize; // 0x24(0x04)
	float *eef7a89c70; // 0x28(0x04)
	int32 *ab699f0fdd; // 0x2c(0x04)
};

// ScriptStruct TslGame.*fa24256a4f
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*fa24256a4f : F*fdab764c85 {
	struct TArray<struct F*49d3cd0976> Array; // 0xb0(0x10)
	struct U*1cce1960fb* Owner; // 0xc0(0x08)
};

// ScriptStruct TslGame.*49d3cd0976
// Size: 0x28 (Inherited: 0x0c)  [layout: LECH - offset chi la uoc luong]
struct F*49d3cd0976 : F*60282223b2 {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString *fd8f639818; // 0x10(0x10)
	float *2046dd6eb2; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*f64ba3d344
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*f64ba3d344 {
	bool bEnabled; // 0x00(0x01)
	bool *fa60e43c95; // 0x01(0x01)
	bool *ec25e734f3; // 0x02(0x01)
	bool *28069c86a6; // 0x03(0x01)
	float AircraftCooldown; // 0x04(0x04)
	float *4ca1208d65; // 0x08(0x04)
};

// ScriptStruct TslGame.*eeb8cbbc23
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*eeb8cbbc23 {
	struct ATslPlayerStateBase* *a82203014e; // 0x00(0x08)
	bool *f050961375; // 0x08(0x01)
	enum class ETslRevivalPlayerState State; // 0x09(0x01)
	bool *6878ad8e28; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *d61ff2e950; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b18b700172
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*b18b700172 {
	bool *f050961375; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *13df020365; // 0x04(0x04)
	float *6e132a2afc; // 0x08(0x04)
	int32 *db3516bd8f; // 0x0c(0x04)
};

// ScriptStruct TslGame.*52b37be2df
// Size: 0x05 (Inherited: 0x00)  [layout: KHOP]
struct F*52b37be2df {
	struct F*51ea58fce9 Round; // 0x00(0x02)
	struct F*51ea58fce9 *2221c116e5; // 0x02(0x02)
	bool *8781608125; // 0x04(0x01)
};

// ScriptStruct TslGame.*51ea58fce9
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*51ea58fce9 {
	int8 *05a847f58a; // 0x00(0x01)
	int8 *a2a6edaccf; // 0x01(0x01)
};

// ScriptStruct TslGame.*b57cdee6c6
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*b57cdee6c6 {
	enum class ESpecialZoneType ZoneType; // 0x00(0x01)
	enum class ESpecialZoneState ZoneState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *83cce9b22d; // 0x04(0x04)
	struct FVector2D *2d905e36fc; // 0x08(0x08)
	struct TArray<struct FVector2D> *29e4e202eb; // 0x10(0x10)
	struct TArray<struct FRotator> *1a52eba768; // 0x20(0x10)
	float *5da2046002; // 0x30(0x04)
	float *71d4466706; // 0x34(0x04)
};

// ScriptStruct TslGame.ModeHardwareCondition
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct FModeHardwareCondition : FTableRowBase {
	struct FName ModeName; // 0x08(0x08)
	struct F*026a528768 Gpu; // 0x10(0x38)
};

// ScriptStruct TslGame.*026a528768
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*026a528768 {
	enum class EGpuVendor Vendor; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 MinVRamSizeMB; // 0x04(0x04)
	int32 MinModelNumber; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString MinDriverVersion; // 0x10(0x10)
	bool bRequireHardwareAcceleration; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> ExcludeModelNameList; // 0x28(0x10)
};

// ScriptStruct TslGame.*7542913ef4
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*7542913ef4 {
	struct FString MapName; // 0x00(0x10)
	struct TMap<enum class EWeaponClass, float> *04b085c14a; // 0x10(0x50)
};

// ScriptStruct TslGame.*b1a6dd63b6
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*b1a6dd63b6 {
	struct FName MonsterName; // 0x00(0x08)
	struct FString NormalKill; // 0x08(0x10)
	struct FString DBNOKill; // 0x18(0x10)
	struct FString MonsterL10Name; // 0x28(0x10)
	struct UClass* DamageType; // 0x38(0x08)
	struct UTexture* DamageCauserIcon; // 0x40(0x08)
};

// ScriptStruct TslGame.*388a87b9b0
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*388a87b9b0 {
	struct TArray<uint64> *36d47ada65; // 0x00(0x10)
	uint16 AreaID; // 0x10(0x02)
	uint16 *67a5db15c4; // 0x12(0x02)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*4a96ee01b3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4a96ee01b3 {
	struct TArray<struct F*f8dd55d831> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*f8dd55d831
// Size: 0x28 (Inherited: 0x18)  [layout: KHOP]
struct F*f8dd55d831 : F*424fc90591 {
	struct FVector *788010a6d5; // 0x18(0x0c)
	float Scale; // 0x24(0x04)
};

// ScriptStruct TslGame.*424fc90591
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*424fc90591 {
	struct FString String; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
};

// ScriptStruct TslGame.*90aff2ba76
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*90aff2ba76 {
	struct TArray<struct F*424fc90591> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*30096dc995
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*30096dc995 {
	struct TArray<struct F*0235ee25b1> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*0235ee25b1
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0235ee25b1 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Rotation; // 0x20(0x10)
	struct FColor Color; // 0x30(0x04)
	float *188d9cc797; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*0b7cfe0e19
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0b7cfe0e19 {
	struct TArray<struct F*fe42459be2> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*fe42459be2
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*fe42459be2 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *188d9cc797; // 0x1c(0x04)
	float Width; // 0x20(0x04)
};

// ScriptStruct TslGame.*de1c4b8230
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*de1c4b8230 {
	struct TArray<struct F*ad8ccae5a4> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*ad8ccae5a4
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*ad8ccae5a4 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector2D Size; // 0x0c(0x08)
	struct FColor Color; // 0x14(0x04)
	float *188d9cc797; // 0x18(0x04)
	float Width; // 0x1c(0x04)
};

// ScriptStruct TslGame.*04b1892122
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*04b1892122 {
	struct TArray<struct F*b1ee2d3e0b> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*b1ee2d3e0b
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*b1ee2d3e0b {
	struct FVector Origin; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	float *744274b9ae; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	float *188d9cc797; // 0x24(0x04)
	float Width; // 0x28(0x04)
};

// ScriptStruct TslGame.*6285c93e85
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6285c93e85 {
	struct TArray<struct F*3bf7b704d4> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*3bf7b704d4
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*3bf7b704d4 {
	struct FVector Origin; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
	float *188d9cc797; // 0x14(0x04)
	float Width; // 0x18(0x04)
};

// ScriptStruct TslGame.*4df5948bbb
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4df5948bbb {
	struct TArray<struct F*6e53845730> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*6e53845730
// Size: 0x28 (Inherited: 0x24)  [layout: KHOP]
struct F*6e53845730 : F*8f25da5545 {
	float ArrowSize; // 0x24(0x04)
};

// ScriptStruct TslGame.*8f25da5545
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct F*8f25da5545 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector_NetQuantize10 Offset; // 0x0c(0x0c)
	struct FColor Color; // 0x18(0x04)
	float *188d9cc797; // 0x1c(0x04)
	float Width; // 0x20(0x04)
};

// ScriptStruct TslGame.*f05fb7809b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*f05fb7809b {
	struct TArray<struct F*8f25da5545> *1cf0544ddd; // 0x00(0x10)
};

// ScriptStruct TslGame.*12b5a1e76f
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*12b5a1e76f : F*31687bb0fc {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct TslGame.*ae075f0329
// Size: 0x168 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ae075f0329 {
	float *8865ffe14a; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FName, float> *2509f17ade; // 0x08(0x50)
	struct TMap<enum class EWeaponClass, struct F*d3c34b59fe> *8bddf3cafa; // 0x58(0x50)
	struct TMap<struct FName, struct F*d3c34b59fe> *4748ef0360; // 0xa8(0x50)
	struct TMap<enum class EWeaponClass, struct F*cc0a958335> *914ad1684b; // 0xf8(0x50)
	float *4e01b58bf6; // 0x148(0x04)
	float *b8cd54b878; // 0x14c(0x04)
	float *1feb52bf02; // 0x150(0x04)
	float *49bfdcf111; // 0x154(0x04)
	float *cddf1539c5; // 0x158(0x04)
	float *a49d095755; // 0x15c(0x04)
	float *c820fb9312; // 0x160(0x04)
	enum class EDamageReason DamageReason; // 0x164(0x01)
	bool *ceb2e791d5; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
};

// ScriptStruct TslGame.*cc0a958335
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cc0a958335 {
	float *d10d3639c2; // 0x00(0x04)
	float *0ff8a37869; // 0x04(0x04)
	float *bde3bbf969; // 0x08(0x04)
	bool *41eb56d8cd; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*d3c34b59fe
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*d3c34b59fe {
	float *bde3bbf969; // 0x00(0x04)
	float *637d883ba4; // 0x04(0x04)
	float *3de4eced94; // 0x08(0x04)
	float *4dce39a3be; // 0x0c(0x04)
	float *8ad688b5f3; // 0x10(0x04)
	float *f20fc504ce; // 0x14(0x04)
	float *f413a1222e; // 0x18(0x04)
	float *21e8e49930; // 0x1c(0x04)
};

// ScriptStruct TslGame.*d3bd059eb0
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d3bd059eb0 {
	struct F*1ed31e9c5f *ad04d4b4bf; // 0x00(0x50)
	struct FVector *83e6b3de13; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct TslGame.*c8a9822deb
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c8a9822deb {
	struct UObject* *2321cd3b3e; // 0x00(0x08)
	enum class ECarriableObjectType CarriableObjectType; // 0x08(0x01)
	enum class EObjectCarryState CarryState; // 0x09(0x01)
	enum class EObjectCarryPickUpDeltaType *d70564b03b; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FTransform *792d2eedcf; // 0x10(0x30)
	struct FTransform *d274659043; // 0x40(0x30)
	float *914d22cdc8; // 0x70(0x04)
	int32 *2c0a798d27; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct TslGame.*890766d562
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*890766d562 {
	struct TArray<struct FName> *bdb8bf0ba9; // 0x00(0x10)
	struct FName ParameterName; // 0x10(0x08)
	struct UCurveFloat* *12932fd19a; // 0x18(0x08)
};

// ScriptStruct TslGame.*1722573030
// Size: 0xb8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1722573030 {
	float *00bf5b470e; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USkeletalMesh* *d875265617; // 0x08(0x20)
	struct UStaticMesh* *6b29c9dc91; // 0x28(0x20)
	struct TArray<struct F*e931e186c1> *c3038d9103; // 0x48(0x10)
	struct TArray<struct F*4af7412691> *65855deafa; // 0x58(0x10)
	struct UAnimSequence* *d91b0562b7; // 0x68(0x20)
	bool *6856c25d53; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAkAudioEvent* *b009fe2ef1; // 0x90(0x20)
	bool *3a737f1681; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct TslGame.*4af7412691
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4af7412691 {
	struct UClass* *0a516c7323; // 0x00(0x08)
	struct FName *e5371a11a1; // 0x08(0x08)
	struct FTransform *b061a6d458; // 0x10(0x30)
	bool *15b200ae0e; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
};

// ScriptStruct TslGame.*e931e186c1
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e931e186c1 {
	struct UMaterialInstance* *72ae83fa2b; // 0x00(0x20)
	int32 MaterialIndex; // 0x20(0x04)
	bool bIsDynamicMaterial; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FName *24b490dfdc; // 0x28(0x08)
	float ParameterValue; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct UCurveFloat* *12932fd19a; // 0x38(0x08)
	bool *15b200ae0e; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.*19084f2743
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*19084f2743 {
	int32 *738442dfff; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ParameterName; // 0x08(0x08)
	enum class EMaterialParamType *96bf8c430c; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* *6e5e03b794; // 0x18(0x08)
	struct U*5e2750edbb* VectorCurve; // 0x20(0x08)
	float ElapsedTime; // 0x28(0x04)
	float delayTime; // 0x2c(0x04)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x30(0x08)
};

// ScriptStruct TslGame.*35602a13cf
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*35602a13cf {
	struct TArray<struct AActor*> *e3cc8dd095; // 0x00(0x10)
};

// ScriptStruct TslGame.TslParticleGroupInfo
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslParticleGroupInfo {
	struct FName GroupName; // 0x00(0x08)
	enum class ETslParticleGroupPriority GroupPriority; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MaxObjectCount; // 0x0c(0x04)
	enum class ETslParticleCullType CullType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxDistance; // 0x14(0x04)
	float MaxRenderDuration; // 0x18(0x04)
	int32 MaxSameTransformCount; // 0x1c(0x04)
	int32 MaxNearbyTransformCount; // 0x20(0x04)
	char pad_24[0x6c]; // 0x24(0x6c)
};

// ScriptStruct TslGame.*bb8448f8af
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bb8448f8af {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*dd679ea848
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*dd679ea848 {
	int32 PlayerId; // 0x00(0x04)
	float ElapsedTime; // 0x04(0x04)
	float *fc8b70d274; // 0x08(0x04)
};

// ScriptStruct TslGame.*abe804c79e
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*abe804c79e {
	struct ATslPlayerStateBase* PlayerState; // 0x00(0x08)
	float *fe6d7a07c0; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*48de23269d
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*48de23269d : FTableRowBase {
	enum class EPhysicalSurface *52242e1d2e; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct F*4b3378d93e *c357631449; // 0x10(0x10)
};

// ScriptStruct TslGame.*4b3378d93e
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4b3378d93e {
	float Damage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* *c4837fc2d7; // 0x08(0x08)
};

// ScriptStruct TslGame.*1fc173fd28
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1fc173fd28 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.MatchLog
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMatchLog {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.*a62dd65f69
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*a62dd65f69 {
	float *4a2f31658d; // 0x00(0x04)
	float *2fdbc04443; // 0x04(0x04)
	float *e2e38388de; // 0x08(0x04)
	float *d7bde2d0d8; // 0x0c(0x04)
	int32 *a417950dd1; // 0x10(0x04)
	int32 *844a65d855; // 0x14(0x04)
	int32 *1979f51be8; // 0x18(0x04)
};

// ScriptStruct TslGame.*51d33750ad
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*51d33750ad {
	bool *c71de6259e; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime *75f05a950a; // 0x08(0x08)
	struct FString *63df04fadb; // 0x10(0x10)
};

// ScriptStruct TslGame.*854ceffa93
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*854ceffa93 {
	struct FName ItemID; // 0x00(0x08)
	int32 ItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*7625ed8665
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7625ed8665 {
	struct UClass* *0c9be264dc; // 0x00(0x08)
	int32 ItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*b8ed482a83
// Size: 0x180 (Inherited: 0x00)  [layout: KHOP]
struct F*b8ed482a83 {
	struct FTslCrosshairSettings *f4aba1c260; // 0x00(0x60)
	struct FTslCrosshairSettings *542b61a776; // 0x60(0x60)
	struct FTslCrosshairSettings *58a33410d4; // 0xc0(0x60)
	struct FTslCrosshairSettings *5a808204ba; // 0x120(0x60)
};

// ScriptStruct TslGame.*e6144c18e0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e6144c18e0 {
	int32 ItemCount; // 0x00(0x04)
	enum class ECastableItemType *5158a89185; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName ItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*60463a60e0
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*60463a60e0 {
	struct ATslCharacter* *d7bba0cad5; // 0x00(0x08)
	struct ATslCharacter* *0f03ea8162; // 0x08(0x08)
	struct ATslPostProcessEffect* Effect; // 0x10(0x08)
	struct ATslPlayerController* PlayerController; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct TslGame.*433d0240e7
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*433d0240e7 {
	struct UClass* MonsterTemplate; // 0x00(0x08)
	int32 SpawnMaxCount; // 0x08(0x04)
	int32 CurTotalSpawnCount; // 0x0c(0x04)
	int32 CurSameSpawnCount; // 0x10(0x04)
	int32 *df438edece; // 0x14(0x04)
	int32 SpawnWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct TslGame.*73da363696
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*73da363696 {
	struct TMap<struct FName, struct F*02c3f0887f> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*02c3f0887f
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*02c3f0887f {
	struct TMap<struct FName, struct FString> Map; // 0x00(0x50)
};

// ScriptStruct TslGame.*48440c39dc
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*48440c39dc {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*f898f1f627
// Size: 0x24 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f898f1f627 {
	char pad_0[0x24]; // 0x00(0x24)
};

// ScriptStruct TslGame.*b4b34d5006
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b4b34d5006 {
	float *492ae31216; // 0x00(0x04)
	float *fc3f299446; // 0x04(0x04)
	float *4b7789e99f; // 0x08(0x04)
	float *f01c53ac19; // 0x0c(0x04)
	float *2e1e9f3aa9; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UParticleSystem* *803cdf469c; // 0x18(0x08)
	struct UClass* *8ecad3dc5c; // 0x20(0x08)
	struct UClass* *3a04829a74; // 0x28(0x08)
	struct UAkAudioEvent* *23b5f9b0a6; // 0x30(0x08)
	struct UAkAudioEvent* *db6b066f7f; // 0x38(0x08)
	struct UAkAudioEvent* *01a06d83e0; // 0x40(0x08)
	struct UAkAudioEvent* *3513b7c7bb; // 0x48(0x08)
	struct UAkAudioEvent* *518ca9231e; // 0x50(0x08)
	float *b76926edd9; // 0x58(0x04)
	float *9667876262; // 0x5c(0x04)
	float *50c07e5431; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct TslGame.*08c489816f
// Size: 0x110 (Inherited: 0x00)  [layout: KHOP]
struct F*08c489816f {
	int32 *5f542cc9f7; // 0x00(0x04)
	float *9c53148d4a; // 0x04(0x04)
	float *4baa1e9915; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *927374d11f; // 0x10(0x08)
	struct UClass* *c4837fc2d7; // 0x18(0x08)
	struct UClass* *ef71a8bc71; // 0x20(0x08)
	struct UClass* *bb082a4f77; // 0x28(0x08)
	struct UClass* *566bcffcac; // 0x30(0x08)
	struct UClass* *bb4c2bc461; // 0x38(0x08)
	int32 *b1627921e7; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* *46fa36a901; // 0x48(0x08)
	float *64fab128d9; // 0x50(0x04)
	float *6102963af0; // 0x54(0x04)
	struct UTexture* DamageCauserIcon; // 0x58(0x08)
	float DamageIconRatio; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText DamageCauserItemName; // 0x68(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *ea5e8530e8; // 0x84(0x04)
	char *33fa67ba90 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RotationSpeed; // 0x8c(0x04)
	struct F*ab9d821647 *ab9d821647; // 0x90(0x40)
	bool *e380e12900; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float PenetrationDepth; // 0xd4(0x04)
	float *fb523d85fc; // 0xd8(0x04)
	float *06b758a93d; // 0xdc(0x04)
	float *8cde163b5a; // 0xe0(0x04)
	float *b344bad781; // 0xe4(0x04)
	struct UCurveFloat* *875a291c92; // 0xe8(0x08)
	struct F*d16c136a1b *3d4e5c663c; // 0xf0(0x20)
};

// ScriptStruct TslGame.PubgIdTierData
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FPubgIdTierData {
	struct FString ID; // 0x00(0x10)
	struct FString ImagePath; // 0x10(0x10)
};

// ScriptStruct TslGame.*6cf4c51543
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6cf4c51543 {
	enum class ETslPubgIdAssetType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
	struct UTexture2D* Texture; // 0x18(0x08)
	struct FTimerHandle TimerHandle; // 0x20(0x08)
	int32 RefCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*2dedad20f0
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2dedad20f0 {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*77e8189bd4
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*77e8189bd4 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct TslGame.*17f4228605
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*17f4228605 {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct TslGame.*c453e097a6
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c453e097a6 {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct TslGame.*a9e2389ee7
// Size: 0xd0 (Inherited: 0x00)  [layout: KHOP]
struct F*a9e2389ee7 {
	struct ATslPlayerStateBase* *2a99c5a06c; // 0x00(0x08)
	struct FWuPubgIdData PubgIdData; // 0x08(0x98)
	bool *b7d6d4d717; // 0xa0(0x01)
	enum class EOutGamePlatformProvider PlatformProvider; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString PlayerName; // 0xa8(0x10)
	struct FString *35f8d379d0; // 0xb8(0x10)
	int32 *2fc825e909; // 0xc8(0x04)
	int32 TeamId; // 0xcc(0x04)
};

// ScriptStruct TslGame.*344c5c167f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*344c5c167f {
	struct UAkAudioEvent* *fccdc0e57c; // 0x00(0x08)
	float *524914697b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*4394ea70f3
// Size: 0x10 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*4394ea70f3 : FTableRowBase {
	enum class EMessageArgBuilderType BuilderType; // 0x08(0x01)
	bool bEnabled; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct TslGame.*ad62114e43
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*ad62114e43 {
	struct TArray<enum class ERadioMessageCondition> SatisfiedConditions; // 0x00(0x10)
	struct AActor* TargetActor; // 0x10(0x08)
};

// ScriptStruct TslGame.*bd61033788
// Size: 0x80 (Inherited: 0x08)  [layout: KHOP]
struct F*bd61033788 : FTableRowBase {
	struct FName ContextName; // 0x08(0x08)
	int32 PageNumber; // 0x10(0x04)
	int32 SlotPosition; // 0x14(0x04)
	enum class EWeaponDisplayTypes WeaponDisplayType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName AmmoItemID; // 0x20(0x08)
	int32 BaseMessageID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TMap<struct FString, struct FText> ExtraArgs; // 0x30(0x50)
};

// ScriptStruct TslGame.*fbf587dc51
// Size: 0x48 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*fbf587dc51 : FTableRowBase {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ItemID; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* SlotIconOverride; // 0x20(0x20)
	bool bEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct TslGame.*67a9566244
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*67a9566244 : FTableRowBase {
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText EmptySlotDisplayName; // 0x10(0x18)
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*ede89a4b98
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*ede89a4b98 : FTableRowBase {
	enum class EEquipSlotID EquipSlotID; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText DisplayName; // 0x10(0x18)
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.*97244262e2
// Size: 0x20 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*97244262e2 : FTableRowBase {
	int32 MessageID; // 0x08(0x04)
	float SegmentLength; // 0x0c(0x04)
	float GapLength; // 0x10(0x04)
	float LineOpacity; // 0x14(0x04)
	bool bDisplayMarkerOnAllNodes; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.*04a20e3c37
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct F*04a20e3c37 : FTableRowBase {
	struct FName MarkerDefinitionKey; // 0x08(0x08)
	enum class EMarkerType MarkerType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UTexture2D* UIIconTexture; // 0x18(0x20)
	struct UTexture2D* WorldIconTexture; // 0x38(0x20)
};

// ScriptStruct TslGame.*bf9112d93d
// Size: 0xb8 (Inherited: 0x08)  [layout: KHOP]
struct F*bf9112d93d : FTableRowBase {
	int32 MessageID; // 0x08(0x04)
	int32 PageNumber; // 0x0c(0x04)
	struct FString MessageKey; // 0x10(0x10)
	struct TArray<enum class ERadioMessageCondition> Condition; // 0x20(0x10)
	int32 Priority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName MarkerDefinitionKey; // 0x38(0x08)
	enum class ERadioMessageDecorateType DecorateType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText PageDisplayName; // 0x48(0x18)
	int32 SlotPosition; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* SlotIcon; // 0x68(0x20)
	struct FText SlotDisplayName; // 0x88(0x18)
	bool bRequireArgRule; // 0xa0(0x01)
	enum class ERadioMessageCategory MessageCategory; // 0xa1(0x01)
	enum class ERadioMessageAlarmSoundCategory AlarmSoundCategory; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
	struct TArray<enum class EGameModeType> SoundsApplyModeTypes; // 0xa8(0x10)
};

// ScriptStruct TslGame.*7561a72b98
// Size: 0x50 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*7561a72b98 : FTableRowBase {
	struct FString ImageKey; // 0x08(0x10)
	int32 RelatedMessageID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture2D* Texture; // 0x20(0x20)
	struct FVector2D Size; // 0x40(0x08)
	bool bEnabled; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct TslGame.*a4558f484b
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*a4558f484b : FTableRowBase {
	enum class ERadioMessageAlarmSoundCategory *21af927f79; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* *13adc86b8b; // 0x10(0x08)
};

// ScriptStruct TslGame.*63cbabc3d6
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*63cbabc3d6 : FTableRowBase {
	struct FString StringKey; // 0x08(0x10)
};

// ScriptStruct TslGame.*cc77227409
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*cc77227409 {
	struct FName Context; // 0x00(0x08)
	struct UDataTable* DataTable; // 0x08(0x08)
};

// ScriptStruct TslGame.*37bee310ea
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*37bee310ea {
	struct FName *748c303f40; // 0x00(0x08)
	struct UCurveFloat* *256abbcce3; // 0x08(0x08)
	bool *2dfb28adc1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float StartTime; // 0x14(0x04)
	float *7ec20cb203; // 0x18(0x04)
	char pad_1C[0x8]; // 0x1c(0x08)
	float *3d9fc98d49; // 0x24(0x04)
	float *25a1be7418; // 0x28(0x04)
	float *30b05b48a2; // 0x2c(0x04)
};

// ScriptStruct TslGame.*bf35b4b871
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*bf35b4b871 {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *d09d905ca0; // 0x04(0x04)
	int32 *289ad37ad9; // 0x08(0x04)
	float *eaa6701488; // 0x0c(0x04)
	float *43d9c08559; // 0x10(0x04)
	float *f2e6cc12fa; // 0x14(0x04)
	float *4403b0424d; // 0x18(0x04)
	float *b31796348d; // 0x1c(0x04)
	float *06af04dcc1; // 0x20(0x04)
	float *9410b17263; // 0x24(0x04)
};

// ScriptStruct TslGame.*f186428d96
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*f186428d96 {
	struct FString ModeName; // 0x00(0x10)
	struct FString *ba41a710b1; // 0x10(0x10)
};

// ScriptStruct TslGame.*c0fd39b603
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*c0fd39b603 : FTableRowBase {
	bool *abb4156034; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *5ac213c9d1; // 0x0c(0x04)
	bool *5565547b4c; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *e8e8453fa4; // 0x14(0x04)
	bool *a23a7819e7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float *3af95f3130; // 0x1c(0x04)
};

// ScriptStruct TslGame.*f577c10130
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*f577c10130 {
	int32 *ac1edf46ad; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> *8f69e8ca62; // 0x08(0x10)
};

// ScriptStruct TslGame.*8496a1fb60
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8496a1fb60 {
	struct FName CategoryName; // 0x00(0x08)
	struct FName ItemID; // 0x08(0x08)
};

// ScriptStruct TslGame.*3a11653343
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*3a11653343 {
	enum class ESandboxPowerType *80864cb0fe; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*eded613d87> *0c454eba35; // 0x08(0x10)
};

// ScriptStruct TslGame.*eded613d87
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eded613d87 {
	struct UParticleSystem* PS; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FRotator RelativeRotation; // 0x10(0x0c)
	bool *ed86d3f0dd; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.*5e1de91963
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*5e1de91963 {
	struct FVector StartPosition; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	float Speed; // 0x18(0x04)
	float Accel; // 0x1c(0x04)
};

// ScriptStruct TslGame.*028066e0d9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*028066e0d9 {
	struct USceneComponent* *2c77dff6c6; // 0x00(0x08)
	struct AActor* ChildActor; // 0x08(0x08)
};

// ScriptStruct TslGame.*e4f7464ba3
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e4f7464ba3 {
	struct FName Name; // 0x00(0x08)
	float *a53fa7dd0e; // 0x08(0x04)
	float *76b7406b02; // 0x0c(0x04)
	struct FVector *eb40441542; // 0x10(0x0c)
	struct FRotator *87d4efcf7d; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform *44f86819bc; // 0x30(0x30)
	struct FTransform *0b6dc607a0; // 0x60(0x30)
	float *4a303a3e1a; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct TslGame.*4df096eb50
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct F*4df096eb50 {
	struct FVector2D RealTime; // 0x00(0x08)
	struct FVector2D TimeDilation; // 0x08(0x08)
	struct FVector2D Area; // 0x10(0x08)
	float *cf740ce445; // 0x18(0x04)
};

// ScriptStruct TslGame.*d2e627d31c
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*d2e627d31c {
	struct FVector2D RealTime; // 0x00(0x08)
	float TimeDilation; // 0x08(0x04)
};

// ScriptStruct TslGame.*85742f20df
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct F*85742f20df : FTickFunction {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct TslGame.*8c525e40fa
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8c525e40fa {
	struct TArray<struct FName> *3a4589bfef; // 0x00(0x10)
	struct FName ItemID; // 0x10(0x08)
};

// ScriptStruct TslGame.*895544ac78
// Size: 0x540 (Inherited: 0x00)  [layout: KHOP]
struct F*895544ac78 {
	struct F*7ebf0c1e1e *80b7208609; // 0x00(0x230)
	struct F*7ebf0c1e1e *89e9fba804; // 0x230(0x230)
	struct FName *06abb6b78e; // 0x460(0x08)
	struct FName *a5984b8c2b; // 0x468(0x08)
	float *f0f8078e29; // 0x470(0x04)
	float *2c8821250c; // 0x474(0x04)
	float *a95ee42f3d; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UClass* *2dbc2a2210; // 0x480(0x20)
	struct UClass* *0a7cca8f1f; // 0x4a0(0x20)
	struct UClass* *a1491c8859; // 0x4c0(0x20)
	struct UClass* *47011b54f2; // 0x4e0(0x20)
	struct UClass* *689d16ad45; // 0x500(0x20)
	struct UClass* *229c8fe4cd; // 0x520(0x20)
};

// ScriptStruct TslGame.*4cd3b42ab2
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4cd3b42ab2 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct TslGame.*8c9b79f1a2
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8c9b79f1a2 {
	struct UAnimDB* SoftroleAnimDB_CP; // 0x00(0x08)
	struct UAnimDB* Softrole_Aim_AnimDB_CP; // 0x08(0x08)
};

// ScriptStruct TslGame.*86e5a65a11
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*86e5a65a11 {
	struct FName ItemID; // 0x00(0x08)
	struct TArray<struct UTexture2D*> ReticleDeactivatedTextures; // 0x08(0x10)
};

// ScriptStruct TslGame.*57ef28fb90
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*57ef28fb90 {
	struct FString NetId; // 0x00(0x10)
	int32 Kill; // 0x10(0x04)
	int32 Assist; // 0x14(0x04)
	float DamageDealt; // 0x18(0x04)
	float *1949a7f93f; // 0x1c(0x04)
	float *ce48262772; // 0x20(0x04)
	float *b582359cee; // 0x24(0x04)
	float *38d7187b90; // 0x28(0x04)
	float *79780a24f2; // 0x2c(0x04)
	int32 *d8291c277c; // 0x30(0x04)
	int32 *07107541b5; // 0x34(0x04)
	int32 *a2756cd004; // 0x38(0x04)
	int32 *bc21d9bca8; // 0x3c(0x04)
};

// ScriptStruct TslGame.*2909390e47
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*2909390e47 {
	struct FVector Loc; // 0x00(0x0c)
	struct FRotator Rot; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*2c9bb2aa05
// Size: 0x80 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*2c9bb2aa05 : FTableRowBase {
	int32 SprayDecalID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SprayDecalLocalizedName; // 0x10(0x18)
	struct UTexture2D* IconTexture; // 0x28(0x20)
	struct UTexture2D* SprayDecalTexture; // 0x48(0x20)
	int32 SpraySize; // 0x68(0x04)
	struct FLinearColor SprayColor; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*db1c452d1d
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*db1c452d1d {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.*7503f3eb7a
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7503f3eb7a {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct TslGame.*d43acaf082
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*d43acaf082 {
	struct TArray<int32> *fca84eac62; // 0x00(0x10)
};

// ScriptStruct TslGame.*83046415bc
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*83046415bc {
	struct TArray<struct F*bbaeabd99d> *5d21b3771c; // 0x00(0x10)
	struct FString *67cd8aaabd; // 0x10(0x10)
};

// ScriptStruct TslGame.*bbaeabd99d
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bbaeabd99d {
	struct FString *67cd8aaabd; // 0x00(0x10)
	struct FName *23cc740c18; // 0x10(0x08)
	int32 *d73bb66243; // 0x18(0x04)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantize Location; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct UPrimitiveComponent* Component; // 0x40(0x08)
	struct AActor* Actor; // 0x48(0x08)
	float *538300e8fe; // 0x50(0x04)
	char pad_54[0x1c]; // 0x54(0x1c)
};

// ScriptStruct TslGame.*cfa6e92f96
// Size: 0x58 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*cfa6e92f96 : FTableRowBase {
	enum class *a9773e439a *e3709b815e; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString *214e2de8cf; // 0x10(0x10)
	struct FText Title; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	uint32 Priority; // 0x50(0x04)
	enum class EEventClipPriority *c0d3c01a1e; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct TslGame.*e331ed54f7
// Size: 0x1c8 (Inherited: 0x00)  [layout: KHOP]
struct F*e331ed54f7 {
	struct F*02f1187523 *66d5309c6f; // 0x00(0x1c8)
};

// ScriptStruct TslGame.*02f1187523
// Size: 0x1c8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*02f1187523 {
	struct F*5644b21548 *2f2fac374a; // 0x00(0xe0)
	struct F*5644b21548 *454cd227b5; // 0xe0(0xe0)
	char pad_1C0[0x8]; // 0x1c0(0x08)
};

// ScriptStruct TslGame.*8a46b5119b
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*8a46b5119b {
	struct F*57d71075e4 *66d5309c6f; // 0x00(0x02)
};

// ScriptStruct TslGame.*57d71075e4
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*57d71075e4 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct TslGame.*9444611709
// Size: 0x02 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9444611709 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct TslGame.*e3b5af1902
// Size: 0x90 (Inherited: 0x00)  [layout: KHOP]
struct F*e3b5af1902 {
	struct F*0c356d114d *6918c4679a; // 0x00(0x1c)
	struct F*eeb493066c *69165d6f25; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct F*9a3080063f *66d5309c6f; // 0x20(0x70)
};

// ScriptStruct TslGame.*9a3080063f
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9a3080063f {
	struct UBlendSpace1D* *e6d9881cef; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct TslGame.*eeb493066c
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*eeb493066c {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct TslGame.*0c356d114d
// Size: 0x1c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0c356d114d {
	char pad_0[0x18]; // 0x00(0x18)
	bool bIsDriver; // 0x18(0x01)
	bool bIsInVehicle; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct TslGame.*fdf0a24ac2
// Size: 0x150 (Inherited: 0x00)  [layout: KHOP]
struct F*fdf0a24ac2 {
	struct F*afcbfe7594 *6918c4679a; // 0x00(0x18)
	struct F*0e927b53b2 *69165d6f25; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct F*a688a4fd75 *66d5309c6f; // 0x30(0x90)
	struct F*f601af1b78 *1f95b925d1; // 0xc0(0x90)
};

// ScriptStruct TslGame.*f601af1b78
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f601af1b78 {
	struct UBlendSpaceBase* *5d8fc785a0; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct UAnimSequence* *09dabff7db; // 0x18(0x08)
	char pad_20[0x70]; // 0x20(0x70)
};

// ScriptStruct TslGame.*a688a4fd75
// Size: 0x90 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a688a4fd75 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct TslGame.*0e927b53b2
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0e927b53b2 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct TslGame.*afcbfe7594
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*afcbfe7594 {
	struct UBlendSpace1D* GripBlendspace; // 0x00(0x08)
	float WeaponGripType; // 0x08(0x04)
	float ReverseWeaponIKLH; // 0x0c(0x04)
	float ReverseWeaponIKRH; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*8e18d7a9fc
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct F*8e18d7a9fc {
	struct F*52ebd2d0fa *66d5309c6f; // 0x00(0x80)
};

// ScriptStruct TslGame.*52ebd2d0fa
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*52ebd2d0fa {
	struct UAnimDB* *4fc6803a46; // 0x00(0x08)
	struct UAnimDB* *dc0789019f; // 0x08(0x08)
	struct UAnimDB* *1bb2000095; // 0x10(0x08)
	struct UBlendSpace1D* *e6d9881cef; // 0x18(0x08)
	char pad_20[0x60]; // 0x20(0x60)
};

// ScriptStruct TslGame.*740ff782a7
// Size: 0xc0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*740ff782a7 {
	struct UAnimSequence* PassengerIdleFront; // 0x00(0x08)
	struct UAnimSequence* PassengerIdleBack; // 0x08(0x08)
	struct UAnimSequence* PassengerAiming; // 0x10(0x08)
	struct UBlendSpaceBase* PassengerAimingFront; // 0x18(0x08)
	bool bPassengerAimBlendSpaceF1D; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UBlendSpaceBase* PassengerAimingFront_FPP; // 0x28(0x08)
	bool bPassengerAimBlendSpaceF1D_FPP; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UBlendSpaceBase* PassengerAimingBack; // 0x38(0x08)
	bool bPassengerAimBlendSpaceB1D; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UBlendSpaceBase* PassengerAimingBack_FPP; // 0x48(0x08)
	bool bPassengerAimBlendSpaceB1D_FPP; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UBlendSpaceBase* PassengerAimingLeft; // 0x58(0x08)
	struct UBlendSpaceBase* PassengerAimingRight; // 0x60(0x08)
	struct F*19fbc57901 PassengerTransitionFB; // 0x68(0x10)
	struct F*19fbc57901 PassengerTransitionBF; // 0x78(0x10)
	struct F*19fbc57901 PassengerTransitionRotateL; // 0x88(0x10)
	struct F*19fbc57901 PassengerTransitionRotateR; // 0x98(0x10)
	struct UAnimSequence* PassengerDirectionAdditive; // 0xa8(0x08)
	struct UAnimSequence* PassengerDBNOFPP; // 0xb0(0x08)
	bool bApplyPelvisBoneBlend_FPP; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct TslGame.*19fbc57901
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*19fbc57901 {
	struct UAnimSequence* TransitionSequence; // 0x00(0x08)
	float PlayRate_FPP; // 0x08(0x04)
	float PlayRate; // 0x0c(0x04)
};

// ScriptStruct TslGame.*654491def7
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*654491def7 {
	struct UBlendSpaceBase* *bab7545b25; // 0x00(0x08)
	struct UBlendSpaceBase* *0d2789ecfc; // 0x08(0x08)
	bool bCheckDriverOn; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UAnimSequence* *2d79920f4c; // 0x18(0x08)
	struct UBlendSpaceBase* *08406abbf7; // 0x20(0x08)
	struct UBlendSpaceBase* *5dc0107002; // 0x28(0x08)
	struct UBlendSpaceBase* *fe67e2613b; // 0x30(0x08)
};

// ScriptStruct TslGame.*95e4039feb
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*95e4039feb {
	struct F*19fbc57901 *363069adf4; // 0x00(0x10)
	struct F*19fbc57901 *97951d4cce; // 0x10(0x10)
	struct F*19fbc57901 *58606ea564; // 0x20(0x10)
	struct F*19fbc57901 *62c0130058; // 0x30(0x10)
	bool bCheckDriverOn; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct F*19fbc57901 *2cddae405e; // 0x48(0x10)
	struct F*19fbc57901 *b35e9805ac; // 0x58(0x10)
};

// ScriptStruct TslGame.*c1ce00ae4c
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*c1ce00ae4c {
	struct UAnimSequence* *89132ea9ad; // 0x00(0x08)
	struct UAnimSequence* *01cf32a2f5; // 0x08(0x08)
	bool bCheckDriverOn; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UAnimSequence* *f99f46306d; // 0x18(0x08)
	struct UAnimSequence* *02d6d6f03c; // 0x20(0x08)
};

// ScriptStruct TslGame.*0e3ab3416d
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*0e3ab3416d {
	struct FName *3b0510bea2; // 0x00(0x08)
	struct TMap<struct FName, int32> *b21cead84b; // 0x08(0x50)
	struct TArray<struct FName> *702e5e4c84; // 0x58(0x10)
	struct TArray<struct FName> *6d62f3d609; // 0x68(0x10)
	struct TArray<struct FName> *c634e52926; // 0x78(0x10)
	struct TArray<struct FName> *94d14d665c; // 0x88(0x10)
	int32 StateMachineIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct TslGame.*857046a886
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*857046a886 {
	struct U*a3e9c240ca* *bfb5592b8d; // 0x00(0x08)
	enum class EAnimWeaponType WeaponType; // 0x08(0x01)
	bool *0a23299aa2; // 0x09(0x01)
	bool *15c3c06237; // 0x0a(0x01)
	bool *cbe984ee65; // 0x0b(0x01)
	bool *e4d75bd44d; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct TslGame.*4872b41b9c
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4872b41b9c {
	enum class EDamageZoneType DamageZoneType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct TslGame.*1de6d87b7d
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1de6d87b7d {
	struct TArray<struct FColor> *395ffcc0ed; // 0x00(0x10)
	struct FVector2D TextureSize; // 0x10(0x08)
};

// ScriptStruct TslGame.*43b0960812
// Size: 0x6a8 (Inherited: 0x00)  [layout: KHOP]
struct F*43b0960812 {
	bool bUseSelfCasting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*7ebf0c1e1e SelfWithCastConfig; // 0x08(0x230)
	bool bUseSelfCasting_Unarmed; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*7ebf0c1e1e SelfWithCastConfig_Unarmed; // 0x240(0x230)
	bool bUseTeammateCasting; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct F*7ebf0c1e1e TeammateWithCastConfig; // 0x478(0x230)
};

// ScriptStruct TslGame.*f0463c3118
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f0463c3118 {
	uint32 UniqueId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FVector Location; // 0x18(0x0c)
	struct FVector *01b757e0f2; // 0x24(0x0c)
	bool *fd43a890e2; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *53103842e7; // 0x34(0x0c)
	struct FVector *f63dc76f8d; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.*b8907d0a7d
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b8907d0a7d {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*4ffa23d726
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*4ffa23d726 {
	struct FName ItemID; // 0x00(0x08)
	struct ATslWeapon* *6ab2fef26e; // 0x08(0x08)
};

// ScriptStruct TslGame.*aad32a6bba
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*aad32a6bba {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*a30f4ee6d2
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a30f4ee6d2 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct TslGame.RadioMessageBlockInputsByPreset
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FRadioMessageBlockInputsByPreset {
	enum class ERadioMessagePresets preset; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FBlockAction> BlockActionList; // 0x08(0x10)
	struct TArray<struct FName> BlockAxisList; // 0x18(0x10)
};

// ScriptStruct TslGame.TslRadioMessageDecorateData
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct FTslRadioMessageDecorateData : FTableRowBase {
	enum class ERadioMessageDecorateType DecorateType; // 0x08(0x01)
	bool bHighlight; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FLinearColor HighlightColor; // 0x0c(0x10)
	bool bPlayHighlightAnim; // 0x1c(0x01)
	bool bAttachIcon; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FStringAssetReference IconTexture; // 0x20(0x10)
};

// ScriptStruct TslGame.*addb22befc
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*addb22befc {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FGamepadMultipleKeyIconInfo> *40859f8630; // 0x08(0x10)
};

// ScriptStruct TslGame.GamepadMultipleKeyIconInfo
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGamepadMultipleKeyIconInfo {
	struct TArray<struct FGamepadKeyIconInfo> KeyIconInfos; // 0x00(0x10)
	struct FText DescriptionText; // 0x10(0x18)
	bool bNewLineAfterThis; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct TslGame.GamepadKeyIconInfo
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FGamepadKeyIconInfo {
	bool bIsButtonXorO; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)
	bool bUseActionName; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FName ActionName; // 0x28(0x08)
	enum class EGamepadKeyIconDisplayType DisplayType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float HoldDuration; // 0x34(0x04)
	bool bUseHoldEffect; // 0x38(0x01)
	enum class EKeyIconCombinationDisplayType NextCombinationType; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct TslGame.TslDynamicWheelItem
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FTslDynamicWheelItem {
	int32 ItemSlotID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> ItemIds; // 0x08(0x10)
};

// ScriptStruct TslGame.TslWheelMenuItem
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct FTslWheelMenuItem {
	int32 ItemSlotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName ItemID; // 0x08(0x08)
	bool bIsUsable; // 0x10(0x01)
	bool bIsEquipped; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<int32> EquippedWeaponSlotIndex; // 0x18(0x10)
};

// ScriptStruct TslGame.*b9061f58ce
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*b9061f58ce : FTableRowBase {
	enum class ETslMapName *0e21c9b9c6; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UClass*> *8bfbc139ad; // 0x10(0x10)
	struct TArray<struct F*bbda32bb48> *53188c195a; // 0x20(0x10)
};

// ScriptStruct TslGame.*bbda32bb48
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*bbda32bb48 {
	bool *541d2d93a7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* TargetActor; // 0x08(0x08)
	struct FTransform *b061a6d458; // 0x10(0x30)
};

// ScriptStruct TslGame.*2c0b91abca
// Size: 0x20 (Inherited: 0x08)  [layout: KHOP]
struct F*2c0b91abca : FTableRowBase {
	struct FText *164d8897fb; // 0x08(0x18)
};

// ScriptStruct TslGame.AuxilaryIconAssetInfo
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FAuxilaryIconAssetInfo : FTableRowBase {
	enum class EAuxilaryIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* IconTexture; // 0x10(0x08)
	struct UCurveFloat* IconRatioCurve; // 0x18(0x08)
	float MinimapIconRatio; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*7a4223b5a4
// Size: 0x58 (Inherited: 0x08)  [layout: KHOP]
struct F*7a4223b5a4 : FTableRowBase {
	struct TMap<struct FName, struct F*7fbf463d3f> TargetStateData; // 0x08(0x50)
};

// ScriptStruct TslGame.*7fbf463d3f
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*7fbf463d3f {
	struct UAnimationAsset* StateAnimation; // 0x00(0x20)
};

// ScriptStruct TslGame.*ab3c885032
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ab3c885032 {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct TslGame.BorderBrushType
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct FBorderBrushType {
	struct FSlateBrush Background; // 0x00(0x90)
	struct FLinearColor BrushColor; // 0x90(0x10)
};

// ScriptStruct TslGame.TestSpot
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTestSpot {
	struct FVector2D Location; // 0x00(0x08)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.*aca72905d8
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*aca72905d8 {
	struct TArray<struct F*2d36090779> *bc8ae0b793; // 0x00(0x10)
};

// ScriptStruct TslGame.*2d36090779
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2d36090779 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	bool Disabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct TslGame.ConditionOfDeathData
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct FConditionOfDeathData : FTableRowBase {
	enum class EConditionOfDeath ConditionOfDeathCategory; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture* ConditionOfDeathIcon; // 0x10(0x08)
};

// ScriptStruct TslGame.TslNotificationMessageDataRow
// Size: 0x38 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FTslNotificationMessageDataRow : FTableRowBase {
	struct FText Message; // 0x08(0x18)
	enum class ETslNotificationMessageColorType MessageColorType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UTexture2D* IconTexture; // 0x28(0x08)
	enum class ETslNotificationMessageAnimationType AnimationType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct TslGame.RacingHUDStateData
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct FRacingHUDStateData {
	struct FText StateText; // 0x00(0x18)
	struct FSlateColor HeaderTextColor; // 0x18(0x28)
	struct FLinearColor StateBgColor; // 0x40(0x10)
	struct FSlateColor MyScoreColor; // 0x50(0x28)
};

// ScriptStruct TslGame.TslRichText_Unit
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslRichText_Unit {
	struct UClass* Widget; // 0x00(0x20)
	struct UTexture2D* Texture; // 0x20(0x20)
	bool bOverrideSize; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector2D Size; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct TslGame.TslWidgetArray
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct FTslWidgetArray {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
	struct TMap<struct FName, struct UUserWidget*> AliasToWidgetMap; // 0x10(0x50)
};

// ScriptStruct TslGame.*651725d1e6
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*651725d1e6 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct TslGame.TslSessionMissionWidgetAppearance
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FTslSessionMissionWidgetAppearance {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FMargin Padding; // 0x10(0x10)
	float WidthOverride; // 0x20(0x04)
};

// ScriptStruct TslGame.TslWeaponNamePlateTextures
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FTslWeaponNamePlateTextures {
	struct UTexture2D* Left; // 0x00(0x08)
	struct UTexture2D* Right; // 0x08(0x08)
};

// ScriptStruct TslGame.*7d16356915
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7d16356915 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*e1840895ab
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e1840895ab {
	struct TArray<struct ATslAIWaypointSegment*> *df6e58b5bc; // 0x00(0x10)
};

// ScriptStruct TslGame.*dc5378386f
// Size: 0xa0 (Inherited: 0x00)  [layout: KHOP]
struct F*dc5378386f {
	struct TMap<struct F*a2cd49e53f, bool> *ed320abac4; // 0x00(0x50)
	struct TMap<struct F*a2cd49e53f, struct F*7bb8958ed3> *b8249663e1; // 0x50(0x50)
};

// ScriptStruct TslGame.*7c12361ac6
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*7c12361ac6 {
	int32 SpawnCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName VehicleTag; // 0x08(0x08)
	struct FName SpawnTag; // 0x10(0x08)
	bool *9b33ebae66; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SpawnLocation; // 0x1c(0x0c)
	struct FRotator *7083df1110; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct F*67f943c3bc *198791e68e; // 0x38(0x10)
};

// ScriptStruct TslGame.*71c17c0f84
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*71c17c0f84 {
	struct APawn* *b8961705d6; // 0x00(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x08(0x08)
	struct UBlackboardData* BlackboardData; // 0x10(0x08)
	struct F*67f943c3bc *198791e68e; // 0x18(0x10)
};

// ScriptStruct TslGame.VehicleSpawn
// Size: 0xc0 (Inherited: 0x08)  [layout: KHOP]
struct FVehicleSpawn : FTableRowBase {
	struct FGuid ID; // 0x08(0x10)
	enum class ESpawnType SpawnType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FName VehicleTag; // 0x20(0x08)
	struct UClass* VehicleClass; // 0x28(0x20)
	struct UBehaviorTree* BehaviorTreeAsset; // 0x48(0x20)
	struct UBlackboardData* BlackboardDataAsset; // 0x68(0x20)
	float InitialSpawnDelay; // 0x88(0x04)
	float SubsequentSpawnDelay; // 0x8c(0x04)
	int32 MaxTriggers; // 0x90(0x04)
	bool MinToSpawn; // 0x94(0x01)
	bool MaxToSpawn; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	struct F*062d3ce5c2 SpawnFilter; // 0x98(0x28)
};

// ScriptStruct TslGame.*062d3ce5c2
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*062d3ce5c2 {
	bool bLimitSpawnPoints; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ValidSpawnPoints; // 0x08(0x10)
	struct TArray<struct FName> InvalidSpawnPoints; // 0x18(0x10)
};

// ScriptStruct TslGame.*3d6a57d9ce
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3d6a57d9ce {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct TslGame.*a840d3d00e
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*a840d3d00e {
	struct FGuid ID; // 0x00(0x10)
	struct FString SpawnId; // 0x10(0x10)
	struct UClass* VehicleClass; // 0x20(0x08)
	struct UBehaviorTree* BehaviorTree; // 0x28(0x08)
	struct UBlackboardData* BlackboardData; // 0x30(0x08)
	struct F*062d3ce5c2 SpawnSettings; // 0x38(0x28)
};

// ScriptStruct TslGame.*6bccdbdc0b
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*6bccdbdc0b {
	bool bUseConstReduction; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *875ea6302f; // 0x04(0x04)
	bool bUseScalarReduction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *a23a6b88d8; // 0x0c(0x04)
};

// ScriptStruct TslGame.*64f55d12de
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*64f55d12de {
	float *9698a201ff; // 0x00(0x04)
	float *ff2f5a5e9d; // 0x04(0x04)
	struct UCurveFloat* *b1bf0f4fcd; // 0x08(0x08)
	bool *18688dacf9; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct TslGame.*79b4193e38
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*79b4193e38 {
	float *eb9fb2c875; // 0x00(0x04)
	float *dd48ae1b5c; // 0x04(0x04)
	float *f0ca654209; // 0x08(0x04)
	float *51d690bddc; // 0x0c(0x04)
};

// ScriptStruct TslGame.*f108c25db1
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*f108c25db1 {
	struct TMap<struct UClass*, struct F*8fedaea411> *956f22628a; // 0x00(0x50)
};

// ScriptStruct TslGame.*8fedaea411
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8fedaea411 {
	struct TArray<struct ATslParticle*> *a618925086; // 0x00(0x10)
};

// ScriptStruct TslGame.*ddb0067733
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*ddb0067733 {
	int32 *c6b3bbb89e; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct F*7b8f095c83> *b9d1bcb305; // 0x08(0x10)
};

// ScriptStruct TslGame.*1342b739e9
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1342b739e9 {
	bool *33077aa8a9; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InWaterAlpha; // 0x04(0x04)
	float PropulsionAlpha; // 0x08(0x04)
	float *f43d965966; // 0x0c(0x04)
	struct FVector *30f95a11f1; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FName *ca8f1618c1; // 0x20(0x08)
	float *d6d99ac88a; // 0x28(0x04)
	struct FVector *1284cca354; // 0x2c(0x0c)
	float PropulsionForceScale; // 0x38(0x04)
	float *91e3535fbd; // 0x3c(0x04)
	struct FVector *bc202118e5; // 0x40(0x0c)
	float *1133fe3e04; // 0x4c(0x04)
	float *a864abda09; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FVector4 *d17c9284ab; // 0x60(0x10)
	bool *e0f2c453bd; // 0x70(0x01)
	bool IsInWaterGearLock; // 0x71(0x01)
	bool *59d017590d; // 0x72(0x01)
	char pad_73[0xd]; // 0x73(0x0d)
};

// ScriptStruct TslGame.*b9308ea40b
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b9308ea40b {
	bool *2b24145134; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FVector4 *6570025642; // 0x10(0x10)
	struct FVector2D *fe92080f95; // 0x20(0x08)
	struct FVector2D *4120289ece; // 0x28(0x08)
	struct FVector2D *aebafe3387; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct TslGame.*9a1701c779
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9a1701c779 {
	bool bUseVelocityTransmission; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *6dcb7267dc; // 0x04(0x04)
	bool *4317b579be; // 0x08(0x01)
	bool *93258ab040; // 0x09(0x01)
	bool *9d014a33e4; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float *c219863aac; // 0x0c(0x04)
	struct TArray<struct F*c11ed0c5d1> *357cd59026; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct TslGame.*c11ed0c5d1
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*c11ed0c5d1 {
	float *a8f29828a4; // 0x00(0x04)
	float *ae3a061b33; // 0x04(0x04)
};

// ScriptStruct TslGame.*5c31876526
// Size: 0x06 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5c31876526 {
	char pad_0[0x6]; // 0x00(0x06)
};

// ScriptStruct TslGame.*f9cbdaad18
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*f9cbdaad18 {
	bool bOverrideEngineMaxRPM; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *8f1238c702; // 0x04(0x04)
	bool bOverrideCenterOfMass; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector CenterOfMass; // 0x0c(0x0c)
	bool bOverrideTransmissionSetup; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FVehicleTransmissionData *45c57d5166; // 0x20(0x30)
};

// ScriptStruct TslGame.*90a0dc666c
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*90a0dc666c {
	struct UPrimitiveComponent* BaseComp; // 0x00(0x08)
	bool *55e9495e96; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector *02e8f4d5b8; // 0x0c(0x0c)
	struct FRotator *149dfcc8aa; // 0x18(0x0c)
	struct FRepMovement RepMovement; // 0x24(0x34)
};

// ScriptStruct TslGame.*8db5290496
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*8db5290496 {
	struct FVector2D *3c4f1bcd9b; // 0x00(0x08)
	struct FVector2D *5ec05bb3e5; // 0x08(0x08)
	struct FVector2D *243dd65b27; // 0x10(0x08)
	struct FVector2D *3d375e7a11; // 0x18(0x08)
	struct FVector2D *e72e0d5412; // 0x20(0x08)
	struct FVector2D *fa3f93c2d3; // 0x28(0x08)
	struct FVector *a30a29869a; // 0x30(0x0c)
	float *3b89b4007e; // 0x3c(0x04)
};

// ScriptStruct TslGame.*6d5bf4f02a
// Size: 0x94 (Inherited: 0x00)  [layout: KHOP]
struct F*6d5bf4f02a {
	float *160640ef79; // 0x00(0x04)
	float *ed5f39eab7; // 0x04(0x04)
	float *8a7713ee6a; // 0x08(0x04)
	float *945095f289; // 0x0c(0x04)
	struct FVector2D *dd3ec0266e; // 0x10(0x08)
	struct FVector2D *11ac8f2035; // 0x18(0x08)
	struct FVector2D *ae31db9689; // 0x20(0x08)
	struct FVector2D *364cf8fc44; // 0x28(0x08)
	struct FVector2D *e2ab09f652; // 0x30(0x08)
	struct FVector2D *b6fcc2044e; // 0x38(0x08)
	struct FVector2D *0c2fd0ba87; // 0x40(0x08)
	struct FVector2D *36a162d7c5; // 0x48(0x08)
	struct FVector2D *2064d19f08; // 0x50(0x08)
	struct FVector2D *2cc7a1442f; // 0x58(0x08)
	struct FVector2D *c09d733209; // 0x60(0x08)
	struct FVector2D *e9da0d52b5; // 0x68(0x08)
	struct FVector2D *3fa457254a; // 0x70(0x08)
	struct FVector2D *528bfe7c27; // 0x78(0x08)
	float *9484e3bca4; // 0x80(0x04)
	float *893ea1a505; // 0x84(0x04)
	float *a32f337fad; // 0x88(0x04)
	float *bbb325ce91; // 0x8c(0x04)
	float *6e03134471; // 0x90(0x04)
};

// ScriptStruct TslGame.*b488233185
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b488233185 {
	float Timeout; // 0x00(0x04)
	float Chance; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct TslGame.*98bfd4c2c3
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*98bfd4c2c3 {
	float *58b8b53e7e; // 0x00(0x04)
	float *a86374a629; // 0x04(0x04)
	float *d6689e5587; // 0x08(0x04)
	float *f55f7b4908; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a86cc2f6e2
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*a86cc2f6e2 {
	struct UAkAudioEvent* *9ec94fbb21; // 0x00(0x08)
	struct UAkAudioEvent* *7d253d3c6c; // 0x08(0x08)
	struct UAkAudioEvent* *e8fc6a0738; // 0x10(0x08)
	struct UAkAudioEvent* *167769b1b5; // 0x18(0x08)
	struct UAkAudioEvent* *982e567b54; // 0x20(0x08)
	struct UAkAudioEvent* *6b2bfcbe5e; // 0x28(0x08)
	struct UAkAudioEvent* *36e2b4c538; // 0x30(0x08)
	struct UAkAudioEvent* *684312d0fb; // 0x38(0x08)
	struct UAkAudioEvent* *889d6ceec0; // 0x40(0x08)
	struct UAkAudioEvent* *31d8ea2f5b; // 0x48(0x08)
	struct UAkAudioEvent* *a7d44993f6; // 0x50(0x08)
	struct UAkAudioEvent* *8ca6097136; // 0x58(0x08)
};

// ScriptStruct TslGame.*9dce88bbc6
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*9dce88bbc6 {
	float *029c441313; // 0x00(0x04)
	float *4071549829; // 0x04(0x04)
	float *29ab937e13; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	float *901e26b8be; // 0x10(0x04)
	float *193ad1cc14; // 0x14(0x04)
	struct FName *5851ebf2a9; // 0x18(0x08)
	struct FVector *d9b4dfccd9; // 0x20(0x0c)
	struct FVector BoxExtent; // 0x2c(0x0c)
	struct UClass* *c4837fc2d7; // 0x38(0x08)
};

// ScriptStruct TslGame.*1fbf36d405
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*1fbf36d405 {
	struct F*a54b5c460d *f41c988f68; // 0x00(0x20)
	struct F*a54b5c460d *6b8febd079; // 0x20(0x20)
};

// ScriptStruct TslGame.*a54b5c460d
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a54b5c460d {
	float *0a9474dfad; // 0x00(0x04)
	float *c173310c3e; // 0x04(0x04)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
	struct U*be269ad3ae* Instance; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct TslGame.*7de0d36b11
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7de0d36b11 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct TslGame.*2c7b54568f
// Size: 0x58 (Inherited: 0x00)  [layout: KHOP]
struct F*2c7b54568f {
	enum class EVehiclePartType *6865166826; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<int32, struct UMaterialInterface*> *7093b65430; // 0x08(0x50)
};

// ScriptStruct TslGame.*832442b428
// Size: 0x98 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*832442b428 {
	bool *ca91e95d86; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *c69b73a32a; // 0x04(0x04)
	struct FName *1d980f995c; // 0x08(0x08)
	struct FVector2D *001a792fae; // 0x10(0x08)
	struct FVector2D *7eafe5a40e; // 0x18(0x08)
	struct FVector *9216ee7724; // 0x20(0x0c)
	struct FVector2D *9255dd0776; // 0x2c(0x08)
	struct FVector2D *eb500fa867; // 0x34(0x08)
	float ZOffset; // 0x3c(0x04)
	float *344a71bc06; // 0x40(0x04)
	float *bb45352111; // 0x44(0x04)
	struct FVector *d48c47c396; // 0x48(0x0c)
	struct FVector *a2b9302bee; // 0x54(0x0c)
	struct FVector2D *d7453d07be; // 0x60(0x08)
	float *5e50a983c0; // 0x68(0x04)
	bool *aa72ab3eca; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *39ed3ba421; // 0x70(0x04)
	bool *fbe8f6d6b6; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FVector2D *5d3f538286; // 0x78(0x08)
	struct U*5e2750edbb* *f2d33d5021; // 0x80(0x08)
	bool *6c32e24e93; // 0x88(0x01)
	char pad_89[0xf]; // 0x89(0x0f)
};

// ScriptStruct TslGame.*decc6a956c
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*decc6a956c {
	struct FName *44240134a4; // 0x00(0x08)
	float *120146c846; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName *c0a4a99ed6; // 0x10(0x08)
	float *682948435f; // 0x18(0x04)
	float *3ad805aa50; // 0x1c(0x04)
	struct UCurveFloat* CurveEngineOn; // 0x20(0x08)
	struct UCurveFloat* CurveEngineOff; // 0x28(0x08)
	float EngineSwitchMaxTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName HeadLightIntensityParamName; // 0x38(0x08)
	float HeadLightIntensity_Mat; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FName TailLightIntensityParamName; // 0x48(0x08)
	float TailLightIntensity_Mat; // 0x50(0x04)
	bool bTickIndicatorSpeedText; // 0x54(0x01)
	bool bTickIndicatorGearText; // 0x55(0x01)
	bool bTickIndicatorHealth; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName TextRenderIntensityParameterName; // 0x58(0x08)
	struct FName HealthStateParameterName; // 0x60(0x08)
};

// ScriptStruct TslGame.*185e938cc4
// Size: 0x130 (Inherited: 0x00)  [layout: KHOP]
struct F*185e938cc4 {
	bool *653dd28c5e; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *58814773b9; // 0x04(0x04)
	float *4e30cc7eec; // 0x08(0x04)
	float *29efaf816b; // 0x0c(0x04)
	float *413b969395; // 0x10(0x04)
	struct FFloatRange *7cf152cd98; // 0x14(0x10)
	float *dfdb2ab4be; // 0x24(0x04)
	float *3093cb9b33; // 0x28(0x04)
	float *ded6ae976d; // 0x2c(0x04)
	float *c60388db73; // 0x30(0x04)
	int32 *c73741a782; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<enum class EPhysicalSurface, struct F*8c0e78d589> *da88f6c8c8; // 0x40(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*8c0e78d589> *a9f8e906c5; // 0x90(0x50)
	struct TMap<enum class EPhysicalSurface, struct F*aecc2e4db2> *f2edb241ec; // 0xe0(0x50)
};

// ScriptStruct TslGame.*aecc2e4db2
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*aecc2e4db2 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAkComponent* *4891035ac1; // 0x18(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x20(0x08)
};

// ScriptStruct TslGame.*8c0e78d589
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*8c0e78d589 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct TslGame.*8a9f6b7b90
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*8a9f6b7b90 {
	char pad_0[0x18]; // 0x00(0x18)
	struct USceneComponent* *869b61fb79; // 0x18(0x08)
	struct USceneComponent* *8521fd7415; // 0x20(0x08)
};

// ScriptStruct TslGame.*e048969c0d
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*e048969c0d {
	int32 *756db7646d; // 0x00(0x04)
	float *2b983f70e3; // 0x04(0x04)
	float *67a21ceb7b; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *927374d11f; // 0x10(0x08)
	struct UCurveFloat* *14487f5192; // 0x18(0x08)
	struct UClass* *c4837fc2d7; // 0x20(0x08)
};

// ScriptStruct TslGame.*aa510d75fe
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*aa510d75fe {
	struct FName *591fb4c946; // 0x00(0x08)
	struct FName *7ed5702d91; // 0x08(0x08)
};

// ScriptStruct TslGame.*17cc3fffed
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*17cc3fffed {
	struct UClass* *0b2d2f988d; // 0x00(0x08)
};

// ScriptStruct TslGame.*84c1c76614
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct F*84c1c76614 : FTickFunction {
	struct ATslWeapon_Ziplinegun* Target; // 0x50(0x08)
};

// ScriptStruct TslGame.*2dff97d47a
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2dff97d47a {
	struct ATslZiplinegunHook* Hook; // 0x00(0x08)
	struct ATslZiplinegunCable* CableActor; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)
};

// ScriptStruct TslGame.*2544cef9de
// Size: 0xe28 (Inherited: 0x00)  [layout: KHOP]
struct F*2544cef9de {
	struct UAnimMontage* *7dfd2a8377; // 0x00(0x08)
	struct F*121336116a *8a33ad0d73; // 0x08(0xe20)
};

// ScriptStruct TslGame.*4b4f800644
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*4b4f800644 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct AActor*> *45f04a58f5; // 0x08(0x10)
	struct TArray<struct UPrimitiveComponent*> *045fb6c13f; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct TslGame.*ae3b86fe2e
// Size: 0x190 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ae3b86fe2e {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform *9247e0e09e; // 0x10(0x30)
	struct FTransform *7299092c28; // 0x40(0x30)
	struct FTransform *5c6f135f00; // 0x70(0x30)
	struct FTransform *070fde0981; // 0xa0(0x30)
	struct FVector *54f270e7bc; // 0xd0(0x0c)
	struct FLinearColor *cc1e82ebf8; // 0xdc(0x10)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FHitResult *c7d93f13a0; // 0xf0(0x90)
	enum class EPlantingFailureType *aeefd6788a; // 0x180(0x01)
	char pad_181[0xf]; // 0x181(0x0f)
};

// ScriptStruct TslGame.TslWeaponDisplayDataRow
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct FTslWeaponDisplayDataRow : FTableRowBase {
	float DefaultScale; // 0x08(0x04)
	float ZoomScale; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1d07236ef5
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*1d07236ef5 {
	struct FString ItemID; // 0x00(0x10)
	struct FString SkinId; // 0x10(0x10)
};

// ScriptStruct TslGame.*c4959a9a1e
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c4959a9a1e {
	struct FString PopupId; // 0x00(0x10)
	struct FString Uri; // 0x10(0x10)
	float X; // 0x20(0x04)
	float Y; // 0x24(0x04)
	float Width; // 0x28(0x04)
	float Height; // 0x2c(0x04)
	struct FColor BackgroundColor; // 0x30(0x04)
	bool UseBackgroundColor; // 0x34(0x01)
	bool ShowButtonGroup; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct TslGame.*94f95b0033
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*94f95b0033 {
	float *4cf1f1ff88; // 0x00(0x04)
	float *06f1da2f97; // 0x04(0x04)
	float *80b699254f; // 0x08(0x04)
	float *44d7d1e0b3; // 0x0c(0x04)
	float *abeb38b626; // 0x10(0x04)
	bool *e83639518e; // 0x14(0x01)
	bool *a433e6a5a0; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct TslGame.*c430308277
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c430308277 {
	struct UAkAudioEvent* *26a66416a9; // 0x00(0x08)
	struct UAkAudioEvent* *6893fc0e77; // 0x08(0x08)
	float *64d2cf0717; // 0x10(0x04)
	float *c06f2e6e88; // 0x14(0x04)
	struct FString *fe98e6e8df; // 0x18(0x10)
	float *0caa956738; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*cbbdf9255e
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*cbbdf9255e {
	float *8b06b9853a; // 0x00(0x04)
	struct FVector2D *8847ede5eb; // 0x04(0x08)
	struct FVector2D *70e2efe3ea; // 0x0c(0x08)
	float *dcf9fe08c6; // 0x14(0x04)
	float *19f737c003; // 0x18(0x04)
	float *f36b8f6b62; // 0x1c(0x04)
	struct FVector2D *eef94d3751; // 0x20(0x08)
	struct FVector2D *ee27ac87e8; // 0x28(0x08)
};

// ScriptStruct TslGame.*00f7677ccf
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*00f7677ccf {
	bool *0324235539; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct TslGame.*2b8230345f
// Size: 0x58 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2b8230345f {
	float *8973192471; // 0x00(0x04)
	float *0cc374f712; // 0x04(0x04)
	struct FVector2D *6d765f37ec; // 0x08(0x08)
	struct FVector2D *4902d9893d; // 0x10(0x08)
	struct FVector2D *ea45668aee; // 0x18(0x08)
	struct FVector2D *6723719011; // 0x20(0x08)
	struct FVector2D *be9d60c72c; // 0x28(0x08)
	struct FVector2D *165933c532; // 0x30(0x08)
	struct FVector2D *d2107a784a; // 0x38(0x08)
	float *3a39c11c44; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimMontage* *eccbe76d14; // 0x48(0x08)
	float *ce1c4ad3d3; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct TslGame.*329af5afe0
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*329af5afe0 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*8f3ca3324b
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*8f3ca3324b {
	float *a88517ab3d; // 0x00(0x04)
	float *cb6fbd113f; // 0x04(0x04)
	float *cc6a05fd70; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* *aa80b462d1; // 0x10(0x08)
	float *a1819ec449; // 0x18(0x04)
	float *28affa5a93; // 0x1c(0x04)
	float *f7eb8d3d6e; // 0x20(0x04)
	float *89423692fb; // 0x24(0x04)
	struct FVector2D *dea26db849; // 0x28(0x08)
	struct FVector2D *85da3f3cfa; // 0x30(0x08)
	float *f8664994a6; // 0x38(0x04)
	float *694cffb10a; // 0x3c(0x04)
};

// ScriptStruct TslGame.*9fc5d758fc
// Size: 0x14 (Inherited: 0x14)  [layout: KHOP]
struct F*9fc5d758fc : F*c32bb46457 {
};

// ScriptStruct TslGame.*c32bb46457
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c32bb46457 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct TslGame.*2b8ddec066
// Size: 0x14 (Inherited: 0x14)  [layout: KHOP]
struct F*2b8ddec066 : F*c32bb46457 {
};

// ScriptStruct TslGame.*0b8a773cc2
// Size: 0x1c (Inherited: 0x14)  [layout: LECH - offset chi la uoc luong]
struct F*0b8a773cc2 : F*c32bb46457 {
	char pad_14[0x8]; // 0x14(0x08)
};

// ScriptStruct TslGame.*6c7f482e64
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*6c7f482e64 : FTableRowBase {
	enum class EUIAkEvent *19c42c1528; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAkAudioEvent* AkEvent; // 0x10(0x08)
};

// ScriptStruct TslGame.*7db7e4249e
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7db7e4249e {
	struct UCurveFloat* *4c4aeb2d43; // 0x00(0x08)
	float DamageMultiplier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*a6feee3432
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*a6feee3432 {
	struct ATslCharacterBase* Character; // 0x00(0x08)
	struct AController* Controller; // 0x08(0x08)
	struct AActor* *a586adcac4; // 0x10(0x08)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct TslGame.*8a984c3b47
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*8a984c3b47 {
	struct FVector Center; // 0x00(0x0c)
	struct FVector *98ec9e7f7d; // 0x0c(0x0c)
};

// ScriptStruct TslGame.*21d89512b9
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*21d89512b9 {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct F*25613f741e> *5a271c3f06; // 0x08(0x10)
};

// ScriptStruct TslGame.*25613f741e
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*25613f741e {
	char pad_0[0x30]; // 0x00(0x30)
	TScriptInterface<struct U*aa249653ff> *c3efe3dc80; // 0x30(0x10)
};

// ScriptStruct TslGame.*55a2da440c
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*55a2da440c {
	bool bFakeCursorCustomProfile; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<enum class EUmgFakeCursorInputType, struct F*ce755f3f46> *91cc8ea984; // 0x08(0x50)
	struct TMap<enum class EUmgFakeCursorInputType, struct FTslAxisInputCallbackConfig> *ef98740ce2; // 0x58(0x50)
};

// ScriptStruct TslGame.*03b9443535
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*03b9443535 {
	struct USkeletalMesh* *1ebfcb504d; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *b7bc07f3b5; // 0x20(0x10)
};

// ScriptStruct TslGame.*b1828ed338
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*b1828ed338 {
	struct USkeletalMesh* *e76c0ed030; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> *9f0d082c95; // 0x08(0x10)
};

// ScriptStruct TslGame.*e159b0155e
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*e159b0155e {
	struct TArray<struct F*114f230f13> StartParticleList; // 0x00(0x10)
	struct TArray<struct F*114f230f13> FinishParticleList; // 0x10(0x10)
	struct F*051997299b OverrideMaterial; // 0x20(0x18)
};

// ScriptStruct TslGame.*114f230f13
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*114f230f13 {
	struct TArray<struct FName> AttachSocketCandidates; // 0x00(0x10)
	struct FStringClassReference ParticleClass; // 0x10(0x10)
};

// ScriptStruct TslGame.*03c4e71f39
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*03c4e71f39 : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	int32 weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*0e6e302d2a
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*0e6e302d2a {
	struct TMap<enum class EPhysicalSurface, float> *2005e975a0; // 0x00(0x50)
};

// ScriptStruct TslGame.*9de1786ce9
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*9de1786ce9 {
	float *26585136ab; // 0x00(0x04)
	float *c55aed867b; // 0x04(0x04)
};

// ScriptStruct TslGame.*003c77ead4
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*003c77ead4 {
	bool AtlasIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UClass*> WheelTypes; // 0x08(0x10)
	struct TArray<struct UClass*> ExemptedWheelTypes; // 0x18(0x10)
};

// ScriptStruct TslGame.*5be04c4ea2
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*5be04c4ea2 {
	struct UStaticMesh* StaticMesh; // 0x00(0x20)
	struct UDestructibleMesh* DestructibleMesh; // 0x20(0x20)
	struct UAkAudioEvent* *8f0cef8edb; // 0x40(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x48(0x08)
	float *19a486df5f; // 0x50(0x04)
	enum class *dc9bbb7e1b IndoorOutdoorMask; // 0x54(0x01)
	char LightingChannel1 : 1; // 0x55(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FName CollisionProfileName; // 0x58(0x08)
};

// ScriptStruct TslGame.*ea3c678a03
// Size: 0x48 (Inherited: 0x08)  [layout: KHOP]
struct F*ea3c678a03 : FTableRowBase {
	struct UTexture* Icon; // 0x08(0x20)
	struct F*6df6cdc899 AbilityAttribute; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FName AbilityID; // 0x38(0x08)
	struct UClass* AbilityClass; // 0x40(0x08)
};

// ScriptStruct TslGame.*1080ca28e2
// Size: 0x80 (Inherited: 0x70)  [layout: KHOP]
struct F*1080ca28e2 : F*c57ff0c15c {
	struct UClass* *c4837fc2d7; // 0x70(0x08)
	enum class *1a9e676ab5 *0bd4685172; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *63abe05a15; // 0x7c(0x04)
};

// ScriptStruct TslGame.AnimNode_LocomotionBSPlayer
// Size: 0x140 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_LocomotionBSPlayer : FAnimNode_AssetPlayerBase {
	float NodeSpeed; // 0x58(0x04)
	float Dir; // 0x5c(0x04)
	enum class EAnimStance AnimStance; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UAnimDB* AnimDB; // 0x68(0x08)
	bool bIsSprinting; // 0x70(0x01)
	bool bIsRelaxed; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float PlayRate; // 0x74(0x04)
	bool bLoop; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float StartPosition; // 0x7c(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x80(0x08)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FBlendFilter BlendFilter; // 0x90(0x90)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x120(0x10)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x130(0x08)
	float Speed; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
};

// ScriptStruct TslGame.*fcf74a4a90
// Size: 0x02 (Inherited: 0x00)  [layout: KHOP]
struct F*fcf74a4a90 {
	struct F*9444611709 Vehicle; // 0x00(0x02)
};

// ScriptStruct TslGame.*e4df65a3e9
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*e4df65a3e9 {
	struct F*eeb493066c Vehicle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*0e927b53b2 IK; // 0x04(0x0c)
};

// ScriptStruct TslGame.*e2e274f883
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct F*e2e274f883 {
	uint32 *88d8337471; // 0x00(0x04)
	struct F*0c356d114d Vehicle; // 0x04(0x1c)
	struct F*8d7d034685 Locomotion; // 0x20(0x08)
	struct F*afcbfe7594 IK; // 0x28(0x18)
};

// ScriptStruct TslGame.AnimNode_TslKawaiiPhysics
// Size: 0x2a0 (Inherited: 0x280)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_TslKawaiiPhysics : FAnimNode_KawaiiPhysics {
	struct U*5b046c8030* RuntimeLimitsDataAsset; // 0x280(0x08)
	bool bResetDynamicsOnLimitsDataAssetChange; // 0x288(0x01)
	bool bUseWorldDamping; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct U*5b046c8030* AppliedLimitsDataAsset; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct TslGame.TslAnimNode_AimOffsets
// Size: 0xb0 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_AimOffsets : FAnimNode_AssetPlayerBase {
	struct U*ace4288ca9* AnimDBMap; // 0x58(0x08)
	struct U*ace4288ca9* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslAimOffsetsNodeBlendSpaceData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float Y; // 0x94(0x04)
	float NormalizedTime; // 0x98(0x04)
	char pad_9C[0x8]; // 0x9c(0x08)
	enum class EAnimStance Stance; // 0xa4(0x01)
	bool bRelaxed; // 0xa5(0x01)
	enum class EWeaponClass WeaponClass; // 0xa6(0x01)
	enum class EAnimWeaponSpecificClass AnimWeaponSpecificClass; // 0xa7(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct TslGame.TslAimOffsetsNodeBlendSpaceData
// Size: 0xc8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslAimOffsetsNodeBlendSpaceData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb0]; // 0x18(0xb0)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBoneBase
// Size: 0x128 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BlendPerBoneBase : FAnimNode_Base {
	char pad_30[0x4]; // 0x30(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x34(0x01)
	bool bAlphaBoolEnabled; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Alpha; // 0x38(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x48(0x50)
	struct FName AlphaCurveName; // 0x98(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa0(0x30)
	int32 LODThreshold; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<float> PerBoneBlendWeights; // 0xd8(0x10)
	struct FGuid SkeletonGuid; // 0xe8(0x10)
	struct FGuid VirtualBoneGuid; // 0xf8(0x10)
	char pad_108[0x20]; // 0x108(0x20)
};

// ScriptStruct TslGame.BlendBoneSettings
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBlendBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	float weight; // 0x18(0x04)
	bool bPropagateToChildren; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBone
// Size: 0x168 (Inherited: 0x158)  [layout: KHOP]
struct FTslAnimNode_ApplyAdditivePerBone : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x158(0x10)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditivePerBoneBase
// Size: 0x158 (Inherited: 0x128)  [layout: KHOP]
struct FTslAnimNode_ApplyAdditivePerBoneBase : FTslAnimNode_BlendPerBoneBase {
	struct FPoseLink Base; // 0x128(0x18)
	struct FPoseLink Additive; // 0x140(0x18)
};

// ScriptStruct TslGame.TslAnimNode_ApplyAdditiveExcludeBones
// Size: 0x168 (Inherited: 0x158)  [layout: KHOP]
struct FTslAnimNode_ApplyAdditiveExcludeBones : FTslAnimNode_ApplyAdditivePerBoneBase {
	struct TArray<struct FExcludeBoneSettings> ExcludeBones; // 0x158(0x10)
};

// ScriptStruct TslGame.ExcludeBoneSettings
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FExcludeBoneSettings {
	struct FBoneReference Bone; // 0x00(0x18)
	bool bPropagateToChildren; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpace
// Size: 0xb8 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BlendListBlendSpace : FAnimNode_AssetPlayerBase {
	float X; // 0x58(0x04)
	float Y; // 0x5c(0x04)
	struct UCurveFloat* CustomBlendCurve; // 0x60(0x08)
	struct UBlendSpace* LastActiveBlendSpace; // 0x68(0x08)
	struct TArray<struct UBlendSpace*> BlendSpace; // 0x70(0x10)
	struct TArray<float> BlendTime; // 0x80(0x10)
	struct TArray<struct FTslBlendSpaceBlendData> BlendSpaceData; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	float PlayRate; // 0xb0(0x04)
	bool bLoop; // 0xb4(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// ScriptStruct TslGame.TslBlendSpaceBlendData
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslBlendSpaceBlendData {
	struct UBlendSpace* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_BlendListBlendSpaceByEnum
// Size: 0xd0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BlendListBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpace {
	struct TArray<bool> EnumToPoseIndex; // 0xb8(0x10)
	char pad_C8[0x5]; // 0xc8(0x05)
	bool ActiveEnumValue; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
};

// ScriptStruct TslGame.TslAnimNode_BlendEvaluatorBlendSpaceByEnum
// Size: 0xd8 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BlendEvaluatorBlendSpaceByEnum : FTslAnimNode_BlendListBlendSpaceByEnum {
	float NormalizedTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct TslGame.TslAnimNode_BlendListRandom
// Size: 0x118 (Inherited: 0xc8)  [layout: KHOP]
struct FTslAnimNode_BlendListRandom : FAnimNode_BlendListBase {
	int32 ActiveChildIndex; // 0xc8(0x04)
	enum class ERandomType RandomType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct TArray<struct FBlendPosePlayInfo> PlayChances; // 0xd0(0x10)
	struct TArray<int32> PlayList; // 0xe0(0x10)
	int32 LoopingCounter; // 0xf0(0x04)
	float RandomPlayTime; // 0xf4(0x04)
	float RandomAccumlateTime; // 0xf8(0x04)
	struct FRandomStream RandomStream; // 0xfc(0x08)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<float> NormalizedPlayChances; // 0x108(0x10)
};

// ScriptStruct TslGame.BlendPosePlayInfo
// Size: 0x24 (Inherited: 0x00)  [layout: KHOP]
struct FBlendPosePlayInfo {
	float PlayChance; // 0x00(0x04)
	struct FInt32Range LoopingCounter; // 0x04(0x10)
	struct FFloatRange RandomPlayTime; // 0x14(0x10)
};

// ScriptStruct TslGame.TslAnimNode_BlendPerBone
// Size: 0x188 (Inherited: 0x128)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BlendPerBone : FTslAnimNode_BlendPerBoneBase {
	struct TArray<struct FBlendBoneSettings> OverrideBones; // 0x128(0x10)
	struct FPoseLink BasePose; // 0x138(0x18)
	struct FPoseLink BlendPose; // 0x150(0x18)
	struct FBoneReference BlendBone; // 0x168(0x18)
	bool bMeshSpaceRotationBlend; // 0x180(0x01)
	bool bKeepBlendBonePosition; // 0x181(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
};

// ScriptStruct TslGame.TslAnimNode_BlendSequencesByBool
// Size: 0xb0 (Inherited: 0x58)  [layout: KHOP]
struct FTslAnimNode_BlendSequencesByBool : FAnimNode_AssetPlayerBase {
	bool ActiveValue; // 0x58(0x01)
	enum class EAlphaBlendOption BlendType; // 0x59(0x01)
	bool bLooping; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	enum class EBlendSequenceByBoolStartType StartType; // 0x5c(0x04)
	struct TArray<struct FTslBlendSequencesByBoolAnimationData> SequencesData; // 0x60(0x10)
	struct UAnimSequence* TrueSequence; // 0x70(0x08)
	struct UAnimSequence* FalseSequence; // 0x78(0x08)
	struct UAnimSequence* LastActiveSequence; // 0x80(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	float TrueBlendTime; // 0xa0(0x04)
	float FalseBlendTime; // 0xa4(0x04)
	float TruePlayRate; // 0xa8(0x04)
	float FalsePlayRate; // 0xac(0x04)
};

// ScriptStruct TslGame.TslBlendSequencesByBoolAnimationData
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslBlendSequencesByBoolAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_BonesLookAtEachOther
// Size: 0x118 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_BonesLookAtEachOther : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslBonesLookAtEachOtherSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslBonesLookAtEachOtherSettings
// Size: 0x58 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslBonesLookAtEachOtherSettings {
	struct FBoneReference Bone1; // 0x00(0x18)
	struct FBoneReference Bone2; // 0x18(0x18)
	struct FAxis LookAt_Axis; // 0x30(0x10)
	struct FAxis LookUp_Axis; // 0x40(0x10)
	bool bUseLookUpAxis; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct TslGame.TslAnimNode_BranchByBool
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct FTslAnimNode_BranchByBool : FAnimNode_Base {
	bool ActiveValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FPoseLink TruePose; // 0x38(0x18)
	struct FPoseLink FalsePose; // 0x50(0x18)
};

// ScriptStruct TslGame.TslAnimNode_CCDIK
// Size: 0x1c0 (Inherited: 0xf8)  [layout: KHOP]
struct FTslAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xf8(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x104(0x01)
	char pad_105[0xb]; // 0x105(0x0b)
	struct FBoneSocketTarget EffectorTarget; // 0x110(0x60)
	struct FBoneReference TipBone; // 0x170(0x18)
	struct FBoneReference RootBone; // 0x188(0x18)
	float Precision; // 0x1a0(0x04)
	int32 MaxIterations; // 0x1a4(0x04)
	bool bStartFromTail; // 0x1a8(0x01)
	bool bEnableRotationLimit; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct TArray<struct FCCDIKJointSettings> RotationLimitPerJoints; // 0x1b0(0x10)
};

// ScriptStruct TslGame.CCDIKJointSettings
// Size: 0x1c (Inherited: 0x00)  [layout: KHOP]
struct FCCDIKJointSettings {
	float MaxConeAngle; // 0x00(0x04)
	float MaxAngleX; // 0x04(0x04)
	float MinAngleX; // 0x08(0x04)
	float MaxAngleY; // 0x0c(0x04)
	float MinAngleY; // 0x10(0x04)
	float MaxAngleZ; // 0x14(0x04)
	float MinAngleZ; // 0x18(0x04)
};

// ScriptStruct TslGame.TslAnimNode_CopyBoneFromPose
// Size: 0x130 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_CopyBoneFromPose : FAnimNode_SkeletalControlBase {
	struct FComponentSpacePoseLink PoseToCopy; // 0xf8(0x18)
	struct FBoneReference CopyBone; // 0x110(0x18)
	bool CopyTranslation; // 0x128(0x01)
	bool bCopyRotation; // 0x129(0x01)
	bool bCopyScale; // 0x12a(0x01)
	char pad_12B[0x5]; // 0x12b(0x05)
};

// ScriptStruct TslGame.TslAnimNode_CopyBones
// Size: 0x118 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_CopyBones : FAnimNode_SkeletalControlBase {
	struct TArray<struct FTslCopyBoneSettings> Bones; // 0xf8(0x10)
	char pad_108[0x10]; // 0x108(0x10)
};

// ScriptStruct TslGame.TslCopyBoneSettings
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslCopyBoneSettings {
	struct FBoneReference SourceBone; // 0x00(0x18)
	struct FBoneReference TargetBone; // 0x18(0x18)
	bool bCopyTranslation; // 0x30(0x01)
	bool bCopyRotation; // 0x31(0x01)
	bool bCopyScale; // 0x32(0x01)
	enum class EBoneControlSpace ControlSpace; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct TslGame.TslAnimNode_SequencePerspective
// Size: 0x88 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_SequencePerspective : FAnimNode_SequencePlayer {
	struct UAnimSequenceBase* Sequence_TPP; // 0x70(0x08)
	struct UAnimSequenceBase* Sequence_FPP; // 0x78(0x08)
	bool bIsFPP; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.TslAnimNode_CustomAnimSequence
// Size: 0x90 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_CustomAnimSequence : FAnimNode_SequencePlayer {
	struct U*0843a6a44d* AnimDataAsset; // 0x70(0x08)
	struct FName AnimName; // 0x78(0x08)
	struct FName AltAnimName; // 0x80(0x08)
	int32 AnimationIndex; // 0x88(0x04)
	enum class ECustomAnimDataType CustomAnimDataType; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct TslGame.TslAnimNode_FabrikElbow
// Size: 0x1b0 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_FabrikElbow : FAnimNode_SkeletalControlBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform EffectorTransform; // 0x100(0x30)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FBoneReference EffectorTransformBone; // 0x138(0x18)
	enum class EBoneRotationSource EffectorRotationSource; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FBoneReference TipBone; // 0x158(0x18)
	struct FBoneReference RootBone; // 0x170(0x18)
	struct FBoneReference ElbowBone; // 0x188(0x18)
	float ElbowInterpCoef; // 0x1a0(0x04)
	float Precision; // 0x1a4(0x04)
	int32 MaxIterations; // 0x1a8(0x04)
	bool bEnableDebugDraw; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
};

// ScriptStruct TslGame.TslAnimNode_Falling
// Size: 0xa0 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_Falling : FAnimNode_AssetPlayerBase {
	struct U*ace4288ca9* AnimDBMap; // 0x58(0x08)
	struct U*ace4288ca9* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslFallingNodeAnimationData> BlendSpacesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	float X; // 0x90(0x04)
	float BlendTime; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	enum class EWeaponClass WeaponClass; // 0x9c(0x01)
	enum class EAlphaBlendOption BlendType; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
};

// ScriptStruct TslGame.TslFallingNodeAnimationData
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslFallingNodeAnimationData {
	struct UBlendSpace1D* BlendSpace; // 0x00(0x08)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0x08(0x10)
	char pad_18[0xb8]; // 0x18(0xb8)
};

// ScriptStruct TslGame.TslAnimNode_Healing
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_Healing : FAnimNode_Base {
	struct U*ace4288ca9* AnimDBMap; // 0x30(0x08)
	struct U*ace4288ca9* PrevAnimDBMap; // 0x38(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x40(0x08)
	struct TArray<struct FTslHealingSequenceData> SequencesData; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)
	float PlayRate; // 0x70(0x04)
	float BlendTime; // 0x74(0x04)
	enum class EAlphaBlendOption BlendType; // 0x78(0x01)
	enum class ECastAnim CurrentItem; // 0x79(0x01)
	bool IsParentControl; // 0x7a(0x01)
	enum class EAnimStance Stance; // 0x7b(0x01)
	bool IsFPP; // 0x7c(0x01)
	bool Looping; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct TslGame.TslHealingSequenceData
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslHealingSequenceData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct TslGame.TslAnimNode_Idles
// Size: 0xa8 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_Idles : FAnimNode_AssetPlayerBase {
	struct U*ace4288ca9* AnimDBMap; // 0x58(0x08)
	struct U*ace4288ca9* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslIdlesNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)
	float PlayRate; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	enum class EAnimStance Stance; // 0xa0(0x01)
	enum class EWeaponClass WeaponClass; // 0xa1(0x01)
	bool Relaxed; // 0xa2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct TslGame.TslIdlesNodeAnimationData
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslIdlesNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct TslGame.TslAnimNode_JumpStart
// Size: 0xb8 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_JumpStart : FAnimNode_AssetPlayerBase {
	struct U*ace4288ca9* AnimDBMap; // 0x58(0x08)
	struct U*ace4288ca9* PrevAnimDBMap; // 0x60(0x08)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct TArray<struct FTslJumpStartNodeAnimationData> SequencesData; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct FVector Velocity; // 0x90(0x0c)
	float Yaw; // 0x9c(0x04)
	float JumpHeight; // 0xa0(0x04)
	float BlendTime; // 0xa4(0x04)
	float BackwardAngleThreshold; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	enum class EWeaponClass WeaponClass; // 0xb0(0x01)
	bool bRelaxed; // 0xb1(0x01)
	bool bIsLocalPlayer; // 0xb2(0x01)
	enum class EAlphaBlendOption BlendType; // 0xb3(0x01)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct TslGame.TslJumpStartNodeAnimationData
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslJumpStartNodeAnimationData {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct TslGame.TslAnimNode_LayeredBlendByBool
// Size: 0x198 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_LayeredBlendByBool : FAnimNode_Base {
	bool bActiveValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FPoseLink BasePose; // 0x38(0x18)
	struct TArray<struct FPoseLink> BlendPoses; // 0x50(0x10)
	struct FTslLayeredBlendData TrueBlendData; // 0x60(0x88)
	struct FTslLayeredBlendData FalseBlendData; // 0xe8(0x88)
	bool bSeparateBlendPose; // 0x170(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	struct FGuid SkeletonGuid; // 0x174(0x10)
	struct FGuid VirtualBoneGuid; // 0x184(0x10)
	char pad_194[0x4]; // 0x194(0x04)
};

// ScriptStruct TslGame.TslLayeredBlendData
// Size: 0x88 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslLayeredBlendData {
	struct FInputBlendPose BlendFilter; // 0x00(0x10)
	float BlendTime; // 0x10(0x04)
	float PoseBlendWeight; // 0x14(0x04)
	bool bMeshSpaceRotationBlend; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x20(0x10)
	char pad_30[0x58]; // 0x30(0x58)
};

// ScriptStruct TslGame.TslAnimNode_LobbyPoseSequence
// Size: 0xd0 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_LobbyPoseSequence : FAnimNode_SequencePlayer {
	enum class ELobbyCharacterTransitionType TransitionType; // 0x70(0x01)
	bool bStartPointPose; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct UAnimSequenceBase* PlayLobbyPoseSequence; // 0x78(0x08)
	struct FWuLobbyPosePlayData PlayLobbyPosePlayData; // 0x80(0x48)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct TslGame.TslAnimNode_PlayIdleSequence
// Size: 0xd0 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_PlayIdleSequence : FAnimNode_AssetPlayerBase {
	struct U*60853cf645* LocomotionAnimInstance; // 0x58(0x08)
	struct UAnimDB* AnimDB; // 0x60(0x08)
	float BlendTime; // 0x68(0x04)
	float PlayRate; // 0x6c(0x04)
	float IdleTriggerTimeMin; // 0x70(0x04)
	float IdleTriggerTimeVariation; // 0x74(0x04)
	bool bIsFPP; // 0x78(0x01)
	bool bIsTppAiming; // 0x79(0x01)
	bool bIsCold; // 0x7a(0x01)
	enum class EAnimStance Stance; // 0x7b(0x01)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FSequenceData ActiveSequence; // 0x80(0x10)
	struct FSequenceData PreviousSequence; // 0x90(0x10)
	char pad_A0[0x30]; // 0xa0(0x30)
};

// ScriptStruct TslGame.SequenceData
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSequenceData {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float AccumulatedTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.TslAnimNode_RotateBones
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_RotateBones : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	struct TArray<struct FName> Bone; // 0x48(0x10)
	struct TArray<enum class ERotateBoneSpace> Space; // 0x58(0x10)
	struct TArray<enum class EAxis> Axis; // 0x68(0x10)
	struct TArray<float> Angle; // 0x78(0x10)
	struct TArray<struct FRotator> Rotator; // 0x88(0x10)
	struct TArray<float> Alpha; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	enum class ERotateBoneInputType InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct TslGame.TslAnimNode_RotateRootBone
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
	float Yaw; // 0x58(0x04)
	float Pitch; // 0x5c(0x04)
	bool bKeepChildTransforms; // 0x60(0x01)
	bool bInvert; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct TslGame.TslAnimNode_SequenceEvaluatorWithBlending
// Size: 0xa0 (Inherited: 0x58)  [layout: KHOP]
struct FTslAnimNode_SequenceEvaluatorWithBlending : FAnimNode_AssetPlayerBase {
	struct UAnimSequence* Sequence; // 0x58(0x08)
	struct UAnimSequence* PrevSequence; // 0x60(0x08)
	struct TArray<struct FTslSequenceBlending> SequencesData; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	float ExplicitTime; // 0x88(0x04)
	float BlendTime; // 0x8c(0x04)
	enum class EAlphaBlendOption BlendType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x98(0x08)
};

// ScriptStruct TslGame.TslSequenceBlending
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FTslSequenceBlending {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct TslGame.TslAnimNode_Slot
// Size: 0x78 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_Slot : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	enum class ECustomAnimSlotType SlotType; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct TslGame.TslAnimNode_SlotByEnum
// Size: 0x1b0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_SlotByEnum : FAnimNode_Base {
	struct FPoseLink Source; // 0x30(0x18)
	char pad_48[0x4]; // 0x48(0x04)
	bool ActiveEnumValue; // 0x4c(0x01)
	char pad_4D[0x1]; // 0x4d(0x01)
	enum class EAlphaBlendOption BlendType; // 0x4e(0x01)
	char pad_4F[0x21]; // 0x4f(0x21)
	struct TArray<struct FName> Slot; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	struct TArray<float> BlendTime; // 0x90(0x10)
	struct TArray<int32> EnumToSlotIndex; // 0xa0(0x10)
	struct UCurveFloat* CustomBlendCurve; // 0xb0(0x08)
	enum class EAnimAlphaInputType AlphaInputType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float Alpha; // 0xbc(0x04)
	char pad_C0[0x4]; // 0xc0(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0xd0(0x50)
	struct FName AlphaCurveName; // 0x120(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x128(0x30)
	char pad_158[0x50]; // 0x158(0x50)
	bool bAlphaBoolEnabled; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// ScriptStruct TslGame.TslAnimNode_SlotByWeapon
// Size: 0x118 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct FTslAnimNode_SlotByWeapon : FAnimNode_Slot {
	float Alpha; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<enum class EAnimWeaponType, struct FName> SlotNames; // 0x78(0x50)
	enum class EAnimWeaponType InWeapon; // 0xc8(0x01)
	char pad_C9[0x4f]; // 0xc9(0x4f)
};

// ScriptStruct TslGame.TslAnimNode_SyncBypassPlayer
// Size: 0x78 (Inherited: 0x70)  [layout: KHOP]
struct FTslAnimNode_SyncBypassPlayer : FAnimNode_SequencePlayer {
	float SyncGroupPositionLimit; // 0x70(0x04)
	int32 SyncBypassGroupIndex; // 0x74(0x04)
};

// ScriptStruct TslGame.*554d8eedd9
// Size: 0x28 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*554d8eedd9 : FTableRowBase {
	float Phase; // 0x08(0x04)
	float killer_x; // 0x0c(0x04)
	float killer_y; // 0x10(0x04)
	float killer_z; // 0x14(0x04)
	float victim_x; // 0x18(0x04)
	float victim_y; // 0x1c(0x04)
	float victim_z; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct TslGame.*b38363ef83
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*b38363ef83 : FTableRowBase {
	struct FVector BeachPointLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*76f85d51d7
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*76f85d51d7 : FTableRowBase {
	int32 LocationX; // 0x08(0x04)
	int32 LocationY; // 0x0c(0x04)
	int32 LocationZ; // 0x10(0x04)
	int32 SafeScore; // 0x14(0x04)
};

// ScriptStruct TslGame.*46d6ff20dc
// Size: 0x60 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*46d6ff20dc : FTableRowBase {
	float NormalArea; // 0x08(0x04)
	char pad_C[0x54]; // 0x0c(0x54)
};

// ScriptStruct TslGame.*010bd36eeb
// Size: 0xc8 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct F*010bd36eeb : F*46d6ff20dc {
	float Farm; // 0x60(0x04)
	float FerryPier; // 0x64(0x04)
	float Gatka; // 0x68(0x04)
	float Georgopol; // 0x6c(0x04)
	float Hospital; // 0x70(0x04)
	float Kameshki; // 0x74(0x04)
	float Lipovka; // 0x78(0x04)
	float Mansion; // 0x7c(0x04)
	float Mylta; // 0x80(0x04)
	float MyltaPower; // 0x84(0x04)
	float Novorepnoye; // 0x88(0x04)
	float Pochinki; // 0x8c(0x04)
	float Primorsk; // 0x90(0x04)
	float Prison; // 0x94(0x04)
	float Quarry; // 0x98(0x04)
	float Rozhok; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float school; // 0xa4(0x04)
	float Severny; // 0xa8(0x04)
	float Shelter; // 0xac(0x04)
	float ShootingRange; // 0xb0(0x04)
	float SosnovkaMilitaryBase; // 0xb4(0x04)
	float Stalber; // 0xb8(0x04)
	float YasnayaPolyana; // 0xbc(0x04)
	float Zharki; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct TslGame.*5db485bea6
// Size: 0x70 (Inherited: 0x60)  [layout: KHOP]
struct F*5db485bea6 : F*46d6ff20dc {
	float Level_A; // 0x60(0x04)
	float Level_B; // 0x64(0x04)
	float Level_C; // 0x68(0x04)
	float Level_D; // 0x6c(0x04)
};

// ScriptStruct TslGame.*627dacdef0
// Size: 0xd8 (Inherited: 0x60)  [layout: KHOP]
struct F*627dacdef0 : F*46d6ff20dc {
	float Alcantara; // 0x60(0x04)
	float CampoMilitar; // 0x64(0x04)
	float Chumacera; // 0x68(0x04)
	float Craterfields; // 0x6c(0x04)
	float CruzdelValle; // 0x70(0x04)
	float ElAzahar; // 0x74(0x04)
	float ElPozo; // 0x78(0x04)
	float Graveyard; // 0x7c(0x04)
	float HeciendadelPatron; // 0x80(0x04)
	float Junkyard; // 0x84(0x04)
	float LaBendita; // 0x88(0x04)
	float LaCobreria; // 0x8c(0x04)
	float Ladrillera; // 0x90(0x04)
	float Lmpala; // 0x94(0x04)
	float LosHigos; // 0x98(0x04)
	float LosLeones; // 0x9c(0x04)
	float MinasdelSur; // 0xa0(0x04)
	float MinasGenerales; // 0xa4(0x04)
	float MonteNuevo; // 0xa8(0x04)
	float Pecado; // 0xac(0x04)
	float Powergrid; // 0xb0(0x04)
	float Prison; // 0xb4(0x04)
	float PuertoParaiso; // 0xb8(0x04)
	float Ruins; // 0xbc(0x04)
	float SanMartin; // 0xc0(0x04)
	float TierraBronca; // 0xc4(0x04)
	float TorreAhumada; // 0xc8(0x04)
	float TrailerPark; // 0xcc(0x04)
	float ValledelMar; // 0xd0(0x04)
	float WaterTreatment; // 0xd4(0x04)
};

// ScriptStruct TslGame.*4d8de14be7
// Size: 0xa0 (Inherited: 0x60)  [layout: KHOP]
struct F*4d8de14be7 : F*46d6ff20dc {
	float castle; // 0x60(0x04)
	float CoalMine; // 0x64(0x04)
	float Cosmodrome; // 0x68(0x04)
	float DekaMesto; // 0x6c(0x04)
	float Dinoland; // 0x70(0x04)
	float Kranik; // 0x74(0x04)
	float Laveni; // 0x78(0x04)
	float Laznova; // 0x7c(0x04)
	float LumberYard; // 0x80(0x04)
	float Naros; // 0x84(0x04)
	float Observatory; // 0x88(0x04)
	float Pavilka; // 0x8c(0x04)
	float TrainStation; // 0x90(0x04)
	float Trika; // 0x94(0x04)
	float Villa; // 0x98(0x04)
	float Winery; // 0x9c(0x04)
};

// ScriptStruct TslGame.*86de9b87aa
// Size: 0x78 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct F*86de9b87aa : F*46d6ff20dc {
	float CoalYards; // 0x60(0x04)
	float Docks; // 0x64(0x04)
	float IndustrialPark; // 0x68(0x04)
	float RailYard; // 0x6c(0x04)
	float Steelmill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*834f770023
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct F*834f770023 : F*46d6ff20dc {
	float Arena; // 0x60(0x04)
	float Assembly; // 0x64(0x04)
	float Cabana_Town; // 0x68(0x04)
	float Coastal_Towns; // 0x6c(0x04)
	float Concert; // 0x70(0x04)
	float Dam_Town; // 0x74(0x04)
	float downtown; // 0x78(0x04)
	float Fulfillment_Center; // 0x7c(0x04)
	float Hill_Town; // 0x80(0x04)
	float Hydroelectric_Dam; // 0x84(0x04)
	float Little_City; // 0x88(0x04)
	float Lodge; // 0x8c(0x04)
	float Simple_Town; // 0x90(0x04)
	float Solar_Town; // 0x94(0x04)
	float Storage_Town; // 0x98(0x04)
	float Sunken_Town; // 0x9c(0x04)
	float swamp; // 0xa0(0x04)
	float Swamp_Town; // 0xa4(0x04)
	float Trailer_Town; // 0xa8(0x04)
	float Wind_Farms; // 0xac(0x04)
};

// ScriptStruct TslGame.*76e9beb685
// Size: 0xb0 (Inherited: 0x60)  [layout: KHOP]
struct F*76e9beb685 : F*46d6ff20dc {
	float AirField; // 0x60(0x04)
	float BanTai; // 0x64(0x04)
	float Bootcamp; // 0x68(0x04)
	float CampAlpha; // 0x6c(0x04)
	float CampBravo; // 0x70(0x04)
	float CampCharlie; // 0x74(0x04)
	float Cave; // 0x78(0x04)
	float Getaway; // 0x7c(0x04)
	float Hatinh; // 0x80(0x04)
	float Kampong; // 0x84(0x04)
	float Khao; // 0x88(0x04)
	float Lawaki; // 0x8c(0x04)
	float NaKham; // 0x90(0x04)
	float Painan; // 0x94(0x04)
	float ParadiseResort; // 0x98(0x04)
	float Quarry; // 0x9c(0x04)
	float Ruins; // 0xa0(0x04)
	float Sahmee; // 0xa4(0x04)
	float Tambang; // 0xa8(0x04)
	float Tatmok; // 0xac(0x04)
};

// ScriptStruct TslGame.*7d43c0ef68
// Size: 0x78 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct F*7d43c0ef68 : F*46d6ff20dc {
	float AlHabar; // 0x60(0x04)
	float AlHayik; // 0x64(0x04)
	float Bahrsahir; // 0x68(0x04)
	float Bashara; // 0x6c(0x04)
	float Hadiqanemo; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct TslGame.*8e7617709c
// Size: 0xa8 (Inherited: 0x60)  [layout: KHOP]
struct F*8e7617709c : F*46d6ff20dc {
	float airport; // 0x60(0x04)
	float ArmyBase; // 0x64(0x04)
	float Buksansa; // 0x68(0x04)
	float FishingCamp; // 0x6c(0x04)
	float Godok; // 0x70(0x04)
	float Haemoosa; // 0x74(0x04)
	float Hapo; // 0x78(0x04)
	float Hosan; // 0x7c(0x04)
	float HosanPrison; // 0x80(0x04)
	float Kangneung; // 0x84(0x04)
	float Ohyang; // 0x88(0x04)
	float Palace; // 0x8c(0x04)
	float school; // 0x90(0x04)
	float ShipYard; // 0x94(0x04)
	float Songam; // 0x98(0x04)
	float Studio; // 0x9c(0x04)
	float Terminal; // 0xa0(0x04)
	float Wolsong; // 0xa4(0x04)
};

// ScriptStruct TslGame.*e35ec2db9f
// Size: 0x88 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct F*e35ec2db9f : F*cbce80fc9f {
	bool *bd76443a9e; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct TslGame.*cbce80fc9f
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cbce80fc9f {
	float LocationX; // 0x00(0x04)
	float LocationY; // 0x04(0x04)
	float LocationZ; // 0x08(0x04)
	bool MovementMode; // 0x0c(0x01)
	bool CustomMovementMode; // 0x0d(0x01)
	bool StanceMode; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float *518d2ba4ba; // 0x10(0x04)
	float *3f96639922; // 0x14(0x04)
	float *aeb5acd735; // 0x18(0x04)
	bool *f381e660fa; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Hp; // 0x20(0x04)
	float Boosting; // 0x24(0x04)
	bool IsReloading; // 0x28(0x01)
	bool IsSprinting; // 0x29(0x01)
	bool *f42ea17364; // 0x2a(0x01)
	bool *4ca1947e6b; // 0x2b(0x01)
	bool *67eac33e05; // 0x2c(0x01)
	bool IsInVehicle; // 0x2d(0x01)
	bool *2ea3f8d9c7; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FName *f774f4382b; // 0x30(0x08)
	bool HelmetDurability; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName *7b3c62ed45; // 0x40(0x08)
	bool *295c948eba; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName *c3d216cf0f; // 0x50(0x08)
	bool *9cff3d211f; // 0x58(0x01)
	bool *187f7a250b; // 0x59(0x01)
	bool *4ea72a5027; // 0x5a(0x01)
	char pad_5B[0x1]; // 0x5b(0x01)
	float *bf9b17cb0d; // 0x5c(0x04)
	bool *fc05964131; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *386d8fedd8; // 0x64(0x04)
	float *cb3a8d1c48; // 0x68(0x04)
	float *deeb68a137; // 0x6c(0x04)
	float *988eef80d2; // 0x70(0x04)
	float *237586464a; // 0x74(0x04)
	float *adaac3a0aa; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct TslGame.*9d018bf375
// Size: 0x130 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct F*9d018bf375 : F*cbce80fc9f {
	float *59836ce212; // 0x80(0x04)
	int8 *90daef7d95; // 0x84(0x01)
	int8 *fff48914a4; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct FName WeaponName; // 0x88(0x08)
	struct FName Muzzle; // 0x90(0x08)
	struct FName LowerRail; // 0x98(0x08)
	struct FName UpperRail; // 0xa0(0x08)
	struct FName Magazine; // 0xa8(0x08)
	struct FName Stock; // 0xb0(0x08)
	struct FName Angled; // 0xb8(0x08)
	struct FName TacPack1; // 0xc0(0x08)
	struct FName TacPack2; // 0xc8(0x08)
	struct FName TacPack3; // 0xd0(0x08)
	struct FName TacPack4; // 0xd8(0x08)
	bool Hit; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float RelativeYaw; // 0xe4(0x04)
	float *c0cc30763e; // 0xe8(0x04)
	float *02f05f7e2f; // 0xec(0x04)
	float *0b9f33e23d; // 0xf0(0x04)
	float *d777b1fec0; // 0xf4(0x04)
	float *6084581c8e; // 0xf8(0x04)
	float *efc9f3cbca; // 0xfc(0x04)
	float *362a670b37; // 0x100(0x04)
	float *643af624b2; // 0x104(0x04)
	float *2dbd29ff78; // 0x108(0x04)
	float *aa9c4fc28e; // 0x10c(0x04)
	float *c2ea8192b3; // 0x110(0x04)
	float *a20fd2b908; // 0x114(0x04)
	float *e8e1dcc4bd; // 0x118(0x04)
	float *3b15ed96bf; // 0x11c(0x04)
	float *3e4781fa00; // 0x120(0x04)
	float *7ab10cb12c; // 0x124(0x04)
	float *d53242d052; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
};

// ScriptStruct TslGame.*dc04a40d79
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*dc04a40d79 : FTableRowBase {
	int32 Rank; // 0x08(0x04)
	int32 Score; // 0x0c(0x04)
};

// ScriptStruct TslGame.*0e4ebe5f07
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*0e4ebe5f07 : FTableRowBase {
	struct FName SceneLevelName; // 0x08(0x08)
};

// ScriptStruct TslGame.*7a242e68e3
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*7a242e68e3 : FTableRowBase {
	struct FName umgId; // 0x08(0x08)
	struct UClass* LiveViewWidget; // 0x10(0x20)
};

// ScriptStruct TslGame.*1c561b8f9f
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct F*1c561b8f9f : FTableRowBase {
	struct FName ItemID; // 0x08(0x08)
	float FOV; // 0x10(0x04)
	struct FVector Scale3D; // 0x14(0x0c)
	struct FRotator Rotator; // 0x20(0x0c)
	struct FVector LocationOffset; // 0x2c(0x0c)
};

// ScriptStruct TslGame.*34ccac8e7b
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*34ccac8e7b {
	int32 *c253455269; // 0x00(0x04)
	int32 *3fc0e716b8; // 0x04(0x04)
	float *5ab8c1b275; // 0x08(0x04)
	float *fec4777a49; // 0x0c(0x04)
	int32 *c056ead478; // 0x10(0x04)
};

// ScriptStruct TslGame.*db63cf64ed
// Size: 0x520 (Inherited: 0x520)  [layout: KHOP]
struct F*db63cf64ed : F*3dd9bdf3cc {
};

// ScriptStruct TslGame.*d187010dce
// Size: 0x278 (Inherited: 0x08)  [layout: KHOP]
struct F*d187010dce : FTableRowBase {
	enum class *d3bed0151e CharacterInteractType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxInteractableDistance; // 0x0c(0x04)
	struct FText InteractionVerb; // 0x10(0x18)
	struct FText InteractiveObjectName; // 0x28(0x18)
	bool bUseTraceCheck; // 0x40(0x01)
	bool bTraceComplexForInteraction; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct F*7ebf0c1e1e CastConfig; // 0x48(0x230)
};

// ScriptStruct TslGame.HealthCheckData
// Size: 0x480 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FHealthCheckData {
	struct FFPSStatus FPSStatus; // 0x00(0x290)
	struct FMemoryStatus MemoryStatus; // 0x290(0x1b0)
	struct FInGameStatus InGameStatus; // 0x440(0x38)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct TslGame.InGameStatus
// Size: 0x38 (Inherited: 0x08)  [layout: KHOP]
struct FInGameStatus : FBaseStatus {
	int32 CharacterCount; // 0x08(0x04)
	int32 VehicleCount; // 0x0c(0x04)
	float Timestamp; // 0x10(0x04)
	struct FVector ViewPosition; // 0x14(0x0c)
	int64 UObjectCount; // 0x20(0x08)
	struct FString TextMarker; // 0x28(0x10)
};

// ScriptStruct TslGame.BaseStatus
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FBaseStatus {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct TslGame.MemoryStatus
// Size: 0x1b0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FMemoryStatus : FBaseStatus {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMinMaxAverage FreeCPUMemoryKB; // 0x10(0xa0)
	struct FMinMaxAverage FreeGPUMemoryKB; // 0xb0(0xa0)
	struct FString LLMDefaultTagCSV; // 0x150(0x10)
	struct FString LLMDefaultValueCSV; // 0x160(0x10)
	struct FString LLMPlatformTagCSV; // 0x170(0x10)
	struct FString LLMPlatformValueCSV; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
};

// ScriptStruct TslGame.MinMaxAverage
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FMinMaxAverage {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Average; // 0x08(0x04)
	char pad_C[0x94]; // 0x0c(0x94)
};

// ScriptStruct TslGame.FPSStatus
// Size: 0x290 (Inherited: 0x08)  [layout: KHOP]
struct FFPSStatus : FBaseStatus {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMinMaxAverage Frame; // 0x10(0xa0)
	struct FMinMaxAverage GameMS; // 0xb0(0xa0)
	struct FMinMaxAverage DrawMS; // 0x150(0xa0)
	struct FMinMaxAverage GPUMS; // 0x1f0(0xa0)
};

// ScriptStruct TslGame.HealthCheckHeader
// Size: 0x40 (Inherited: 0x00)  [layout: KHOP]
struct FHealthCheckHeader {
	struct FString DeviceName; // 0x00(0x10)
	struct FString ClientVersion; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString ModeName; // 0x30(0x10)
};

// ScriptStruct TslGame.HemostasisTableRow
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct FHemostasisTableRow : FTableRowBase {
	int32 Stack; // 0x08(0x04)
	bool bCanHemostasis; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float HemostasisPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct TslGame.*18d88cbe64
// Size: 0x550 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct F*18d88cbe64 : F*ade180f0b5 {
	struct UCurveFloat* MaterialControlAsset; // 0x468(0x20)
	struct TArray<float> BurnEffectTriggerDurabilityRatio; // 0x488(0x10)
	float EffectDuration; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UClass* DurabilityLowIdleParticleClass; // 0x4a0(0x20)
	struct UClass* DurabilityLowMovingParticleClass; // 0x4c0(0x20)
	struct TArray<struct FName> DurabilityLowParticleAttachedSocketNames; // 0x4e0(0x10)
	float DurabilityLowParticleSpawnThresholdRatio; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct UClass* DurabilityZeroIdleParticleClass; // 0x4f8(0x20)
	struct UClass* DurabilityZeroMovingParticleClass; // 0x518(0x20)
	struct TArray<struct FName> DurabilityZeroParticleAttachedSocketNames; // 0x538(0x10)
	float ParticleTransitionTimeFromIdleToMove; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
};

// ScriptStruct TslGame.*7333ff23ab
// Size: 0x530 (Inherited: 0x520)  [layout: KHOP]
struct F*7333ff23ab : FItemTableRowCastable {
	struct TArray<struct F*ea43156cb4> SupplyItems; // 0x520(0x10)
};

// ScriptStruct TslGame.*ea43156cb4
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ea43156cb4 {
	struct FName SupplyItemID; // 0x00(0x08)
	int32 StackCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct TslGame.*1f4ce1b8d9
// Size: 0x2a8 (Inherited: 0x290)  [layout: KHOP]
struct F*1f4ce1b8d9 : F*7dff736ba8 {
	enum class ECustomPartType CustomPart; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct TArray<struct FName> PartTags; // 0x298(0x10)
};

// ScriptStruct TslGame.*c955888a26
// Size: 0x2a8 (Inherited: 0x2a8)  [layout: KHOP]
struct F*c955888a26 : F*3d4a864914 {
};

// ScriptStruct TslGame.ItemTableRowVehiclePart
// Size: 0x338 (Inherited: 0x2a8)  [layout: LECH - offset chi la uoc luong]
struct FItemTableRowVehiclePart : F*1f4ce1b8d9 {
	enum class EVehiclePartType VehiclePart; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct UMaterialInterface*> Materials; // 0x2b0(0x10)
	struct TMap<int32, struct UMaterialInterface*> OverrideDestroyedMaterial; // 0x2c0(0x50)
	struct USkeletalMesh* SkeletalMesh; // 0x310(0x20)
	int32 WheelSize; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
};

// ScriptStruct TslGame.*e0a2a1b4eb
// Size: 0x50 (Inherited: 0x08)  [layout: KHOP]
struct F*e0a2a1b4eb : FTableRowBase {
	enum class ETslCharacterNativeAction ActionType; // 0x08(0x01)
	enum class *04dc7837be InputAllowLevel; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UTexture2D* IconTexture; // 0x10(0x08)
	struct FText LocalizedNameText; // 0x18(0x18)
	struct FText DescText; // 0x30(0x18)
	struct UTexture2D* NativeActionBrushTexture; // 0x48(0x08)
};

// ScriptStruct TslGame.*57c37d5b97
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*57c37d5b97 {
	float *43ea8e59b6; // 0x00(0x04)
	float *43dc4247c4; // 0x04(0x04)
};

// ScriptStruct TslGame.*f6d3e6bf0c
// Size: 0x38 (Inherited: 0x00)  [layout: KHOP]
struct F*f6d3e6bf0c {
	float *43ea8e59b6; // 0x00(0x04)
	float *bff06e2426; // 0x04(0x04)
	int32 *a9c75138ef; // 0x08(0x04)
	float *ae56d347c8; // 0x0c(0x04)
	float *b144307cf6; // 0x10(0x04)
	float *34acdb43b5; // 0x14(0x04)
	int32 *380db94273; // 0x18(0x04)
	float *4167bbde95; // 0x1c(0x04)
	struct TArray<struct F*25d8a8369b> *d8cbddd6d2; // 0x20(0x10)
	bool *b0893910f1; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *a54e29327c; // 0x34(0x04)
};

// ScriptStruct TslGame.*25d8a8369b
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*25d8a8369b {
	struct FString MapName; // 0x00(0x10)
	struct FString *25e89a857d; // 0x10(0x10)
	struct FVector Location; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct TslGame.*2acdd70fc9
// Size: 0x18 (Inherited: 0x08)  [layout: KHOP]
struct F*2acdd70fc9 : FTableRowBase {
	struct UStaticMesh* OldMesh; // 0x08(0x08)
	struct UStaticMesh* NewMesh; // 0x10(0x08)
};

// ScriptStruct TslGame.*4c8ca9c4cb
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*4c8ca9c4cb : FTableRowBase {
	struct UStaticMesh* Mesh; // 0x08(0x08)
};

// ScriptStruct TslGame.*c62e403af0
// Size: 0x30 (Inherited: 0x08)  [layout: KHOP]
struct F*c62e403af0 : FTableRowBase {
	enum class *348233a8c0 DetailMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct UStaticMesh*> MeshesToOverride; // 0x10(0x10)
	struct TArray<struct UMaterialInterface*> DecalMaterialsToOverride; // 0x20(0x10)
};

// ScriptStruct TslGame.*695c7e8ca6
// Size: 0x10 (Inherited: 0x08)  [layout: KHOP]
struct F*695c7e8ca6 : FTableRowBase {
	struct UClass* BPClass; // 0x08(0x08)
};

// ScriptStruct TslGame.*23015c5c4c
// Size: 0x60 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*23015c5c4c : FTableRowBase {
	struct FStringAssetReference *48edf1986f; // 0x08(0x10)
	struct FStringAssetReference *4161091cb6; // 0x18(0x10)
	struct FStringAssetReference *1a6e6eb4b3; // 0x28(0x10)
	struct FStringAssetReference *af2315fd3c; // 0x38(0x10)
	struct FStringAssetReference *785b6dfc36; // 0x48(0x10)
	float Ratio; // 0x58(0x04)
	bool *cb1b7e6c14; // 0x5c(0x01)
	bool *7856bfc3d6; // 0x5d(0x01)
	bool *a186d4f62b; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
};

// ScriptStruct TslGame.*62514a0295
// Size: 0x68 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*62514a0295 : FTableRowBase {
	float StartDelay; // 0x08(0x04)
	float WarningDuration; // 0x0c(0x04)
	float ReleaseDuration; // 0x10(0x04)
	float RadiusRate; // 0x14(0x04)
	float RandomRadiusRate; // 0x18(0x04)
	float BlueZoneDPS; // 0x1c(0x04)
	float SpreadBias; // 0x20(0x04)
	float DamageMagnifier; // 0x24(0x04)
	float TimeToDamageIncrease; // 0x28(0x04)
	float DamageIncreaseDuration; // 0x2c(0x04)
	struct UCurveFloat* DamageMagnifierCurve; // 0x30(0x20)
	float LandRatio; // 0x50(0x04)
	int32 FastPlayerCount; // 0x54(0x04)
	float FastReleaseDuration; // 0x58(0x04)
	float FastWarningDuration; // 0x5c(0x04)
	bool bIgnoreSafetyZone; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

