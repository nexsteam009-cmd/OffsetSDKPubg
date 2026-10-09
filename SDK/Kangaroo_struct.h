// Enum Kangaroo.EKangarooTestCommandGun
enum class EKangarooTestCommandGun : uint8 {
	AKM,
	AUG,
	Beryl,
	Bizon,
	DBS,
	DoubleBarrelShotgun,
	DP28,
	Groza,
	Kar98k,
	M16A4,
	M249,
	M416,
	MG3,
	MicroUZI,
	Mini14,
	Mutant,
	S12K,
	S1897,
	SCAR,
	SKS,
	SLR,
	TommyGun,
	UMP45,
	Vector,
	Win94,
	MAX,
	EKangarooTestCommandGun_MAX,
};

// Enum Kangaroo.EKangarooTestCommandBasicGun
enum class EKangarooTestCommandBasicGun : uint8 {
	BasicCrossbow,
	BasicPistol,
	BasicRevolver,
	BasicSawedOff,
	MAX,
	EKangarooTestCommandBasicGun_MAX,
};

// Enum Kangaroo.*356e77f776
enum class *356e77f776 : uint8 {
	*78c70ecb30,
	*5977a7d42d,
	*fbe9951fd5,
	*9387c972bd,
	*22d3d9da1b,
	*0d9fe1bca4,
	*e239079c22,
	*83144c40c6,
	*c56f9176ac,
	*e57cffc3e7,
	*28dededaaa,
	*ee92d9c480,
	*1273dd078d,
	*d35a9ea35f,
	*3bb4f75a0b,
	*37b2f12135,
	*fbc0ff23af,
	*8224ce9b1a,
	*b6519e3b53,
	*0a5b28a2e1,
	*648778e89b,
	*fb4bf739a0,
	*27306c58bb,
	*18b08a5277,
	*7b1d81b36a,
	*a11f1077bf,
	*356e77f776_MAX,
};

// Enum Kangaroo.EMapName
enum class EMapName : uint8 {
	KARAKIN,
	VIKENDI,
	SANHOK,
	MIRAMAR,
	PARAMO,
	ERANGEL,
	EMapName_MAX,
};

// Enum Kangaroo.EUpgradeFamily
enum class EUpgradeFamily : uint8 {
	Default,
	BingoV3,
	BingoH3,
	BingoH5,
	EUpgradeFamily_MAX,
};

// Enum Kangaroo.EEggsplosivesAttackType
enum class EEggsplosivesAttackType : uint8 {
	GunSweep,
	ThrowGrenades,
	Kamikaze,
	ThrowKnives,
	Lunges,
	BrandishOrRevolver,
	GunSweepSecondary,
	MissilesLaunch,
	Ramming,
	KamikazeRobots,
	MAX,
	EEggsplosivesAttackType_MAX,
};

// Enum Kangaroo.EKamikazeState
enum class EKamikazeState : uint8 {
	None,
	Igniting,
	Flying,
	Stunned,
	PullingBack,
	EKamikazeState_MAX,
};

// Enum Kangaroo.EKangarooLobbyMenuItem
enum class EKangarooLobbyMenuItem : uint8 {
	Kangaroo_Lobby_HardMode,
	Kangaroo_Lobby_Start,
	Kangaroo_Lobby_Leaderboard,
	Kangaroo_Lobby_Help,
	Kangaroo_Lobby_QuitGame,
	Kangaroo_Lobby_MAX,
};

// Enum Kangaroo.EKangarooSystemMenuItem
enum class EKangarooSystemMenuItem : uint8 {
	Kangaroo_System_Resume,
	Kangaroo_System_Upgrade,
	Kangaroo_System_Help,
	Kangaroo_System_GiveUp,
	Kangaroo_System_QuitGame,
	Kangaroo_System_MAX,
};

// Enum Kangaroo.EMeleeAttackType
enum class EMeleeAttackType : uint8 {
	None,
	Swing,
	Lunge,
	EMeleeAttackType_MAX,
};

// Enum Kangaroo.FSizeGroup
enum class FSizeGroup : uint8 {
	Large,
	Medium,
	Small,
	Decoration,
	MAX,
	FSizeGroup_MAX,
};

// Enum Kangaroo.FObstacleMode
enum class FObstacleMode : uint8 {
	None,
	ColliderBound,
	RenderBound,
	FObstacleMode_MAX,
};

// Enum Kangaroo.*14d4a8901a
enum class *14d4a8901a : uint8 {
	*2272310ffe,
	*91ae7cc081,
	*d2a2f919e8,
	*14d4a8901a_MAX,
};

// Enum Kangaroo.FKangarooBingoH3Upgrade
enum class FKangarooBingoH3Upgrade : uint8 {
	PointBlank,
	TriggerHappy,
	Sharpshooter,
	Looter,
	MAX,
	Easier_Headshots,
	DamageUp_CloseRange,
	DamageUp_FarRange,
	FKangarooBingoH3Upgrade_MAX,
};

// Enum Kangaroo.FKangarooBingoV3Upgrade
enum class FKangarooBingoV3Upgrade : uint8 {
	RunAndGun,
	Exploiter,
	TacticoolReloads,
	Sniper,
	MAX,
	Reduced_Damage_After_TakingDamage,
	Grenade_Damage_Bonus,
	FKangarooBingoV3Upgrade_MAX,
};

// Enum Kangaroo.FKangarooDefaultUpgrade
enum class FKangarooDefaultUpgrade : uint8 {
	LuckyPan,
	TacticalRoll,
	ExtMagazine,
	QuickdrawMagazine,
	LastStand,
	Momentum,
	ShoulderPads,
	Vest,
	FirstBlood,
	Patience,
	HardHitter,
	StunGrenade,
	MolotovCocktail,
	Backpack,
	MedicalTraining,
	RedDotSight,
	MAX,
	Higher_RPM_After_Roll,
	Shotgun_Damage_Up,
	SMG_Damage_Up,
	AR_Damage_Up,
	LMG_Damage_Up,
	DMR_SR_Damage_Up,
	SG_Bullets_Penetrate_Enemies,
	SMG_Larger_Mag,
	AR_Larger_Mag,
	Heavy_Larger_Mag,
	SR_Bullets_Penetrate_Enemies,
	Shotgun_Faster_Reload,
	SMG_Faster_Reload,
	AR_Faster_Reload,
	LMG_Faster_Reload,
	DMR_SR_Faster_Reload,
	Choke,
	Vertical_Grip,
	Angle_Grip,
	Bipod,
	Finger_Grip,
	Double_Magazine_Size_But_Same_Ammo_Consumed,
	Melee_Drain,
	Overall_Damage_Bonus,
	Faster_Melee,
	Overall_Less_Spread,
	Movement_Speed_Bonus_Per_Kill,
	FKangarooDefaultUpgrade_MAX,
};

// Enum Kangaroo.EThrowDistance
enum class EThrowDistance : uint8 {
	Short,
	Long,
	MAX,
	EThrowDistance_MAX,
};

// Enum Kangaroo.EHolsterType
enum class EHolsterType : uint8 {
	Rifle_Primary,
	Rifle_Secondary,
	Pistol,
	Melee,
	Throwable,
	MAX,
	EHolsterType_MAX,
};

// Enum Kangaroo.EGunSlotType
enum class EGunSlotType : uint8 {
	Rifle_Primary,
	Rifle_Secondary,
	Pistol,
	MAX,
	EGunSlotType_MAX,
};

// Enum Kangaroo.EWeaponSlotType
enum class EWeaponSlotType : uint8 {
	Pistol,
	Rifle,
	Throwable,
	Melee,
	MAX,
	EWeaponSlotType_MAX,
};

// Enum Kangaroo.EKangarooAmmoType
enum class EKangarooAmmoType : uint8 {
	Ammo_12_Gauge,
	Ammo_SMG,
	Ammo_556mm,
	Ammo_762mm,
	MAX,
	EKangarooAmmoType_MAX,
};

// Enum Kangaroo.UCollectibleSpecialEffect
enum class UCollectibleSpecialEffect : uint8 {
	None,
	Heal,
	UniversalAmmo,
	MAX,
	UCollectibleSpecialEffect_MAX,
};

// Enum Kangaroo.EKangarooDifficulty
enum class EKangarooDifficulty : uint8 {
	Easy,
	Normal,
	Hard,
	MAX,
	EKangarooDifficulty_MAX,
};

// Enum Kangaroo.FGunCategory
enum class FGunCategory : uint8 {
	Pistol,
	Shotgun,
	SMG,
	AR,
	DMR_SR,
	Heavy,
	FGunCategory_MAX,
};

// Enum Kangaroo.EKangarooAimingType
enum class EKangarooAimingType : uint8 {
	Classic,
	Synthetik,
	Arcade,
	EKangarooAimingType_MAX,
};

// Enum Kangaroo.*f5994520ee
enum class *f5994520ee : uint8 {
	*85bedde982,
	*8f58983cea,
	*1a08a826c7,
	*46feef73db,
	*f5994520ee_MAX,
};

// Enum Kangaroo.EGunActionType
enum class EGunActionType : uint8 {
	BOLT_ACTION,
	SEMI_AUTOMATIC,
	AUTOMATIC,
	EGunActionType_MAX,
};

// Enum Kangaroo.EGateTransition
enum class EGateTransition : uint8 {
	None,
	Close,
	Open,
	EGateTransition_MAX,
};

// Enum Kangaroo.EEnemyWaveMode
enum class EEnemyWaveMode : uint8 {
	BossHealthBased,
	Sequential,
	InfiniteIfBossAlive,
	BossHealthThreshold,
	EEnemyWaveMode_MAX,
};

// Enum Kangaroo.FGridCell
enum class FGridCell : uint8 {
	Background,
	Floor,
	WallT,
	WallB,
	WallL,
	WallR,
	WallLT,
	WallRT,
	WallRB,
	WallLB,
	WallExtLT,
	WallExtRT,
	WallExtRB,
	WallExtLB,
	WallInterior,
	FloorExternal,
	FloorT,
	FloorB,
	FloorL,
	FloorR,
	FloorLT,
	FloorRT,
	FloorRB,
	FloorLB,
	FloorExtLT,
	FloorExtRT,
	FloorExtRB,
	FloorExtLB,
	FGridCell_MAX,
};

// Enum Kangaroo.FGridCellObject
enum class FGridCellObject : uint8 {
	None,
	Gate,
	SpawnArea,
	Obstacle,
	Decoration,
	Enemy,
	EnemyWaypoint,
	ObstacleAndDecoration,
	FGridCellObject_MAX,
};

// Enum Kangaroo.EAISignalType
enum class EAISignalType : uint8 {
	Sight,
	Hearing,
	Damage,
	MAX,
	EAISignalType_MAX,
};

// Enum Kangaroo.EBBKeyName
enum class EBBKeyName : uint8 {
	SelfActor,
	Enemy,
	AIState,
	HasLineOfSight,
	EnemyLastLocation,
	MAX,
	EBBKeyName_MAX,
};

// Enum Kangaroo.EAIState
enum class EAIState : uint8 {
	Standby,
	Suspect,
	Pursuit,
	Combat,
	MAX,
	EAIState_MAX,
};

// ScriptStruct Kangaroo.KangarooCreditsCategory
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FKangarooCreditsCategory {
	struct TArray<struct FKangarooCreditsEntry> Entries; // 0x00(0x10)
	struct FString CategoryName; // 0x10(0x10)
};

// ScriptStruct Kangaroo.KangarooCreditsEntry
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct FKangarooCreditsEntry {
	struct UFlipbookSetAsset* RunFlipbooks; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct Kangaroo.*547b5fb367
// Size: 0xe0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*547b5fb367 {
	char pad_0[0x10]; // 0x00(0x10)
	struct F*2bf285983e *48c76fd3b3[0x03]; // 0x10(0x90)
	struct F*1fdd08b4f1 Throwable; // 0xa0(0x20)
	struct F*206c1ef56d Melee; // 0xc0(0x18)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Kangaroo.*206c1ef56d
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*206c1ef56d {
	struct UKangarooMeleeDataAsset* Info; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Kangaroo.*1fdd08b4f1
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1fdd08b4f1 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UKangarooThrowableDataAsset* Info; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Kangaroo.*2bf285983e
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*2bf285983e {
	char pad_0[0x18]; // 0x00(0x18)
	struct UKangarooGunInfoAsset* Info; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Kangaroo.*57fe79a95f
// Size: 0x34 (Inherited: 0x00)  [layout: KHOP]
struct F*57fe79a95f {
	float PlayerHealthMult; // 0x00(0x04)
	float PlayerTakenDamageMult; // 0x04(0x04)
	float EnemyFireRateMult; // 0x08(0x04)
	float EnemyAttackCooldownMult; // 0x0c(0x04)
	float EnemyKamikazeCooldownMult; // 0x10(0x04)
	float EnemyKamikazeStunDurationMult; // 0x14(0x04)
	float EnemyKamikazeIgnitionDelayMult; // 0x18(0x04)
	float EnemyKamikazeExplosionRadiusMult; // 0x1c(0x04)
	float EnemyRollSpeedMult; // 0x20(0x04)
	float EnemyRollCooldownMult; // 0x24(0x04)
	float EnemyMovementSpeedMultiplier; // 0x28(0x04)
	float EnemyRecoilMultiplier; // 0x2c(0x04)
	float MedkitDropProbabilityScale; // 0x30(0x04)
};

// ScriptStruct Kangaroo.*0b394c2c24
// Size: 0x2c (Inherited: 0x00)  [layout: KHOP]
struct F*0b394c2c24 {
	struct F*99fe21c0f8 SpawnArrival; // 0x00(0x0c)
	struct F*99fe21c0f8 PickUpArrival; // 0x0c(0x0c)
	float SpawnDepartureAcceleration; // 0x18(0x04)
	float PickupDepartureAcceleration; // 0x1c(0x04)
	struct FVector PlayerPickupIdleTargetOffset; // 0x20(0x0c)
};

// ScriptStruct Kangaroo.*99fe21c0f8
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*99fe21c0f8 {
	float ToleranceRadius; // 0x00(0x04)
	float StartDistance; // 0x04(0x04)
	float SpeedMult; // 0x08(0x04)
};

// ScriptStruct Kangaroo.KangarooUpgradeTableRow
// Size: 0x60 (Inherited: 0x08)  [layout: KHOP]
struct FKangarooUpgradeTableRow : FTableRowBase {
	enum class *356e77f776 Type; // 0x08(0x04)
	bool bIsBingoBonus; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct UTexture2D* Icon; // 0x40(0x08)
	struct TArray<float> UpgradeValues; // 0x48(0x10)
	struct UCurveFloat* UpgradeValueCurve; // 0x58(0x08)
};

// ScriptStruct Kangaroo.*3c6bd72326
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3c6bd72326 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Kangaroo.*ad7d201dee
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*ad7d201dee {
	float FallHeight; // 0x00(0x04)
	float FallDuration; // 0x04(0x04)
	float SwingDuration; // 0x08(0x04)
	float SwingRadius; // 0x0c(0x04)
	float SwingPawnRotationMult; // 0x10(0x04)
	float SwingAngle; // 0x14(0x04)
	float SwingSpeedMultiplier; // 0x18(0x04)
	float PlayLandingSoundWhenProgressLeft; // 0x1c(0x04)
	float PlayLandingAnimationWhenProgressLeft; // 0x20(0x04)
	struct FVector ParachuteOffset; // 0x24(0x0c)
	struct FVector AdditionalParachuteShadowOffset; // 0x30(0x0c)
	struct FVector AdditionalParachuteShadowOppositeOffset; // 0x3c(0x0c)
	struct UAkAudioEvent* SwingSound; // 0x48(0x08)
	struct UAkAudioEvent* LandingSound; // 0x50(0x08)
	struct UPaperFlipbook* ParachuteFallFlipbook; // 0x58(0x08)
	struct UPaperFlipbook* ParachuteDropFlipbook; // 0x60(0x08)
};

// ScriptStruct Kangaroo.*dc55fffc03
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*dc55fffc03 {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*8d5e08f406> Requests; // 0x10(0x10)
};

// ScriptStruct Kangaroo.*8d5e08f406
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*8d5e08f406 {
	char pad_0[0x18]; // 0x00(0x18)
	struct UKangarooPawnDataAsset* Instigator; // 0x18(0x08)
};

// ScriptStruct Kangaroo.*65b56504b9
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*65b56504b9 {
	char pad_0[0x10]; // 0x00(0x10)
	struct UKangarooPawnDataAsset* *89b742287d; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Kangaroo.*34a5b6f0b9
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*34a5b6f0b9 {
	struct AKangarooWeaponBase* Owner; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)
};

// ScriptStruct Kangaroo.*31827b07d6
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*31827b07d6 {
	struct AKangarooWeaponBase* Owner; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct Kangaroo.Foo
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FFoo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kangaroo.*34cc6ed70c
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*34cc6ed70c {
	struct FVector2D *80dd06e662; // 0x00(0x08)
	float *1c143c7c7f; // 0x08(0x04)
};

// ScriptStruct Kangaroo.*978ca95a67
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*978ca95a67 {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Kangaroo.LevelSaveData
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct FLevelSaveData {
	struct TArray<float> StageTime; // 0x00(0x10)
};

// ScriptStruct Kangaroo.*39b8b602a0
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*39b8b602a0 {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float InitialLinearVelocity; // 0x08(0x04)
	float InitialAngularVelocity; // 0x0c(0x04)
	float LinearDamping; // 0x10(0x04)
	float AngularDamping; // 0x14(0x04)
	float DirectionModulationDegrees; // 0x18(0x04)
	float LinearVelocityModulation; // 0x1c(0x04)
	float AngularVelocityModulation; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Kangaroo.*7a18fda9cd
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7a18fda9cd {
	struct AActor* Actor; // 0x00(0x08)
	struct ULevelModuleComponent* Component; // 0x08(0x08)
	char pad_10[0x38]; // 0x10(0x38)
};

// ScriptStruct Kangaroo.*b135e8d085
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*b135e8d085 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Kangaroo.*c7f0ee0cf3
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*c7f0ee0cf3 {
	struct FName WallStartLeft; // 0x00(0x08)
	struct FName WallStartRight; // 0x08(0x08)
	struct FName WallMidLeft; // 0x10(0x08)
	struct FName WallMidRight; // 0x18(0x08)
	struct FName tower; // 0x20(0x08)
	struct FName Passage; // 0x28(0x08)
};

// ScriptStruct Kangaroo.*3a43c9040a
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3a43c9040a {
	struct FName TagName; // 0x00(0x08)
	float Probability; // 0x08(0x04)
	int32 MaxInRoom; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Kangaroo.*d88c5a0e2d
// Size: 0x14 (Inherited: 0x00)  [layout: KHOP]
struct F*d88c5a0e2d {
	float MaxFillPercent; // 0x00(0x04)
	int32 MinSeparation; // 0x04(0x04)
	int32 MaxPlacementAttempts; // 0x08(0x04)
	int32 MaxPlacementAttemptsOfSingleType; // 0x0c(0x04)
	int32 MaxTemplateChoiceAttempts; // 0x10(0x04)
};

// ScriptStruct Kangaroo.*c6c4c5712c
// Size: 0x14 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c6c4c5712c {
	float MinHorizontalDeviation; // 0x00(0x04)
	float MaxHorizontalDeviation; // 0x04(0x04)
	float MinVerticalDeviation; // 0x08(0x04)
	float MaxVerticalDeviation; // 0x0c(0x04)
	bool ForceVerticalConnection; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Kangaroo.*cbdb5a823f
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cbdb5a823f {
	struct UKangarooPawnDataAsset* PawnData; // 0x00(0x08)
	int32 MinWaypoints; // 0x08(0x04)
	int32 MaxWaypoints; // 0x0c(0x04)
	int32 WaypointAreaExtent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Kangaroo.*86ce70f3bd
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*86ce70f3bd {
	struct UKangarooPawnDataAsset* PawnData; // 0x00(0x08)
	float MinDifficulty; // 0x08(0x04)
	float MaxDifficulty; // 0x0c(0x04)
	float Probability; // 0x10(0x04)
	int32 MaximumPerStage; // 0x14(0x04)
	int32 MinWaypoints; // 0x18(0x04)
	int32 MaxWaypoints; // 0x1c(0x04)
	int32 WaypointAreaExtent; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Kangaroo.*15b45525ea
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*15b45525ea {
	struct TArray<struct UClass*> Classes; // 0x00(0x10)
};

// ScriptStruct Kangaroo.*7c47b220fe
// Size: 0x18 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*7c47b220fe : FTableRowBase {
	struct FName *db4855461f; // 0x08(0x08)
	int32 *2619ffc40d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Kangaroo.*00c56bfe81
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct F*00c56bfe81 : F*bcdd8a23ee {
};

// ScriptStruct Kangaroo.Collection
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FCollection {
	struct TArray<struct U*5059df2463*> *f11033955b; // 0x00(0x10)
	int32 *b63b6eda15; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	float *b31636731a; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Kangaroo.*1b45800fe2
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*1b45800fe2 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UKangarooWeaponDataAsset* Info; // 0x08(0x08)
	struct AKangarooWeaponBase* Actor; // 0x10(0x08)
};

// ScriptStruct Kangaroo.*889571c0f1
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*889571c0f1 {
	struct FName DisplayedName; // 0x00(0x08)
	struct UPaperSprite* FlyingCollectibleSprite; // 0x08(0x08)
	int32 AmmoPerCollectible; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Kangaroo.*2d1fe88723
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*2d1fe88723 {
	struct TMap<struct FName, struct UKangarooWeaponAnimBase*> Anims; // 0x00(0x50)
};

// ScriptStruct Kangaroo.*d4c7ae0cb0
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*d4c7ae0cb0 {
	struct TMap<struct FName, struct UKangarooWeaponAnim*> Anims; // 0x00(0x50)
};

// ScriptStruct Kangaroo.*ae22a75fbb
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ae22a75fbb {
	struct UCollectibleDataAsset* Data; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Kangaroo.*cb4b14dca2
// Size: 0x48 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cb4b14dca2 {
	float Duration; // 0x00(0x04)
	float BaseDamage; // 0x04(0x04)
	float TriggerRadius; // 0x08(0x04)
	float StartDamagingAtProgress; // 0x0c(0x04)
	float StopDamagingAtProgress; // 0x10(0x04)
	float Cooldown; // 0x14(0x04)
	float SwingStartAngle; // 0x18(0x04)
	float SwingEndAngle; // 0x1c(0x04)
	float LaunchPower; // 0x20(0x04)
	bool ForceLaunchIfRollNotPossible; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector2D HoldingOffset; // 0x28(0x08)
	struct UAkAudioEvent* InitiateSound; // 0x30(0x08)
	struct UAkAudioEvent* PawnImpactSound; // 0x38(0x08)
	bool UseBoxTrigger; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Kangaroo.*e168d393a6
// Size: 0x68 (Inherited: 0x00)  [layout: KHOP]
struct F*e168d393a6 {
	float ExplosionRadius; // 0x00(0x04)
	float ShakeRadius; // 0x04(0x04)
	float ShakeIntensity; // 0x08(0x04)
	float BaseDamage; // 0x0c(0x04)
	float ExplosionHeight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* DamageType; // 0x18(0x08)
	struct UParticleSystem* ExplosionPS; // 0x20(0x08)
	struct UPaperFlipbook* ExplosionFlipbook; // 0x28(0x08)
	struct UPaperFlipbook* SecondaryExplosionFlipbook; // 0x30(0x08)
	float ExplosionAnimationHeight; // 0x38(0x04)
	float ExplosionFlipbookScale; // 0x3c(0x04)
	float SecondaryExplosionAnimationHeight; // 0x40(0x04)
	float SecondaryExplosionFlipbookScale; // 0x44(0x04)
	struct FName ExplosionQueryProfile; // 0x48(0x08)
	float NoiseRange; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UAkAudioEvent* ExplosionSound; // 0x58(0x08)
	struct UDamageFieldData* SpawnDamageField; // 0x60(0x08)
};

// ScriptStruct Kangaroo.*5847f51960
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5847f51960 {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Kangaroo.*5b667910ec
// Size: 0x0c (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5b667910ec {
	float *9cea22e0ce; // 0x00(0x04)
	int32 EnemyCount; // 0x04(0x04)
	bool *25802be973; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Kangaroo.*05aa967b9e
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*05aa967b9e {
	enum class FGridCellObject Object; // 0x00(0x04)
	enum class FGridCell Cell; // 0x04(0x04)
};

// ScriptStruct Kangaroo.LevelLayout
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FLevelLayout {
	struct TArray<struct FRoom> Rooms; // 0x00(0x10)
	struct FVector2D SpawnPoint; // 0x10(0x08)
	struct FBox2D SpawnArea; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct F*05aa967b9e> Grid; // 0x30(0x10)
	int32 Width; // 0x40(0x04)
	int32 Height; // 0x44(0x04)
	int32 TotalNumEnemies; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Kangaroo.Room
// Size: 0x80 (Inherited: 0x00)  [layout: KHOP]
struct FRoom {
	struct FBox2D Bounds; // 0x00(0x14)
	struct FBox2D Gate; // 0x14(0x14)
	bool Horizontal; // 0x28(0x01)
	bool Right; // 0x29(0x01)
	bool IsBossRoom; // 0x2a(0x01)
	bool IsExitRoom; // 0x2b(0x01)
	bool IsLastRoomBeforeExitRoom; // 0x2c(0x01)
	bool IsLastStandardEnemyRoom; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32 MaxIrregularityDepth; // 0x30(0x04)
	int32 DeviationX; // 0x34(0x04)
	struct URoomTheme* AssignedTheme; // 0x38(0x08)
	int32 NumStandardEnemies; // 0x40(0x04)
	int32 NumBosses; // 0x44(0x04)
	int32 NumGunDroppers; // 0x48(0x04)
	int32 AllEnemiesBeforeThisRoom; // 0x4c(0x04)
	int32 AreaTaken; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct F*5e67c06e4d EnemyDistribution; // 0x58(0x10)
	struct AGateDoors* GateDoors; // 0x68(0x08)
	struct TArray<struct AActor*> CenteredActors; // 0x70(0x10)
};

// ScriptStruct Kangaroo.*5e67c06e4d
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*5e67c06e4d {
	struct TArray<struct F*e0f72de2a8> Enemies; // 0x00(0x10)
};

// ScriptStruct Kangaroo.*e0f72de2a8
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*e0f72de2a8 {
	struct UKangarooPawnDataAsset* PawnData; // 0x00(0x08)
	struct FVector2D SpawnLocation; // 0x08(0x08)
	int32 NumWaypoints; // 0x10(0x04)
	int32 WaypointAreaExtent; // 0x14(0x04)
	bool IsBoss; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Kangaroo.*109b8caed2
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*109b8caed2 {
	struct TArray<struct F*af69c6aa6d> Modules; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Kangaroo.*af69c6aa6d
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*af69c6aa6d {
	struct AActor* Template; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Kangaroo.EnemyInfo
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FEnemyInfo {
	char pad_0[0x18]; // 0x00(0x18)
	struct AKangarooPawn* Pawn; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

