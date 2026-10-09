// Class TslGameMode.AreaBlockingModActor
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct AAreaBlockingModActor : AActor {
	struct F*27eb5855f1 *a82eec8385; // 0x400(0x04) rep=OnRep_ActivateData
	char pad_404[0x4]; // 0x404(0x04)
	struct U*d78fc4e4b4* *0c421d99c6; // 0x408(0x08) rep=OnRep_VolumeShapeComponent
	struct UMaterialInterface* *3e9156b5cb; // 0x410(0x08)

	void OnRep_ActivateData(); // Function TslGameMode.AreaBlockingModActor.OnRep_ActivateData //  // @ game+0xe183d2c
	void OnRep_VolumeShapeComponent(); // Function TslGameMode.AreaBlockingModActor.OnRep_VolumeShapeComponent //  // @ game+0xe183dac
};

// Class TslGameMode.TDMAssistManager
// Size: 0x150 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTDMAssistManager : U*fa9c878c28 {
	char pad_30[0x70]; // 0x30(0x70)
	int32 *60246648f2; // 0xa0(0x04)
	int32 *80fb768474; // 0xa4(0x04)
	struct UAssistNetDebugHelper* *f52ac0f1f0; // 0xa8(0x08)
	char pad_B0[0xa0]; // 0xb0(0xa0)
};

// Class TslGameMode.AssistNetDebugHelper
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAssistNetDebugHelper : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class TslGameMode.AtoZTutorialMissionListWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UAtoZTutorialMissionListWidget : UTutorialMissionListWidget {
	struct UVerticalBox* TutorialMissionListVerticalBox; // 0x420(0x08)
	struct UClass* MissionWidgetClass; // 0x428(0x08)
	struct TArray<struct UAtoZTutorialMissionWidget*> MissionWidgets; // 0x430(0x10)
	float EmergingAnimDelay; // 0x440(0x04)
	char pad_444[0xc]; // 0x444(0x0c)
};

// Class TslGameMode.AtoZTutorialMissionWidget
// Size: 0x4e0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UAtoZTutorialMissionWidget : UUmgBaseWidget {
	struct UBorder* MissionBorder; // 0x420(0x08)
	struct UHorizontalBox* MissionHorizontalBox; // 0x428(0x08)
	struct USizeBox* MissionSizeBox; // 0x430(0x08)
	struct UWidgetSwitcher* CheckboxSwitcher; // 0x438(0x08)
	struct UTslRichTextBlock* MissionText; // 0x440(0x08)
	struct FAtoZTutorialWidgetAppearance CurrentAppearance; // 0x448(0x24)
	struct FAtoZTutorialWidgetAppearance NormalAppearance; // 0x46c(0x24)
	struct U*7fa8406bd3* TransitionNormalCurrent; // 0x490(0x08)
	struct U*7fa8406bd3* TransitionCurrentComplete; // 0x498(0x08)
	struct FLinearColor ClearColor; // 0x4a0(0x10)
	struct FLinearColor NormalColor; // 0x4b0(0x10)
	char pad_4C0[0x20]; // 0x4c0(0x20)
};

// Class TslGameMode.*aae82b749e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*aae82b749e : UInterface {
};

// Class TslGameMode.ModFloatValidator
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModFloatValidator : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class TslGameMode.ModIntValidator
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModIntValidator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class TslGameMode.ModStringValidator
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModStringValidator : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FModStringValidatorParam DefaultParam; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)
};

// Class TslGameMode.ModBoolValidator
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModBoolValidator : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class TslGameMode.ModArrayValidator
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UModArrayValidator : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	TScriptInterface<struct U*aae82b749e> ChildValidator; // 0x40(0x10)
};

// Class TslGameMode.ModArrayUniqueValidator
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UModArrayUniqueValidator : UModArrayValidator {
};

// Class TslGameMode.ModVectorValidator
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModVectorValidator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class TslGameMode.ModItemValidator
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModItemValidator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class TslGameMode.ModItemNonStackableValidator
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UModItemNonStackableValidator : UModItemValidator {
};

// Class TslGameMode.ModEnumValidator
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModEnumValidator : UObject {
	char pad_30[0x30]; // 0x30(0x30)
};

// Class TslGameMode.ModDeviceValidator
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceValidator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class TslGameMode.ModNumericValidator
// Size: 0x98 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModNumericValidator : UObject {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class TslGameMode.*366ebe387e
// Size: 0x1a0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*366ebe387e : UObject {
	struct TMap<enum class EModPropertyType, struct UClass*> *fcb1e4c69f; // 0x30(0x50)
	struct UClass* *679f4d2ad2; // 0x80(0x08)
	struct UClass* *55805573fe; // 0x88(0x08)
	struct UClass* *3d63602407; // 0x90(0x08)
	struct TMap<struct UScriptStruct*, struct UModPropertyCustomWidgetFactory*> *8a6b2b4d8c; // 0x98(0x50)
	struct TMap<struct UEnum*, struct UModPropertyCustomWidgetFactory*> *190ac59768; // 0xe8(0x50)
	char pad_138[0x68]; // 0x138(0x68)
};

// Class TslGameMode.ModPropertyCustomWidgetFactory
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UModPropertyCustomWidgetFactory : UObject {
};

// Class TslGameMode.ModPropertyCustomWidgetFactoryWrapper
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyCustomWidgetFactoryWrapper : UModPropertyCustomWidgetFactory {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class TslGameMode.ModPropertySchema
// Size: 0xc8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModPropertySchema : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct TMap<struct FString, struct FModPropertySchemaData> PropertyPathSchemaMap; // 0x68(0x50)
	struct UScriptStruct* PropertyDataStruct; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class TslGameMode.ModDeviceSchema
// Size: 0x250 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceSchema : UModPropertySchema {
	char pad_C8[0x188]; // 0xc8(0x188)
};

// Class TslGameMode.ModEventManager
// Size: 0x1e0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModEventManager : UObject {
	char pad_30[0x1b0]; // 0x30(0x1b0)
};

// Class TslGameMode.BaseModComponent
// Size: 0x2a0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UBaseModComponent : UActorComponent {
	char pad_210[0x80]; // 0x210(0x80)
	struct U*0085d2f8fa* *2f62b5a405; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void OnDeactivateDevice(); // Function TslGameMode.BaseModComponent.OnDeactivateDevice //  // @ game+0xe183b74
	void OnActivateDevice(); // Function TslGameMode.BaseModComponent.OnActivateDevice //  // @ game+0xe18380c
	void DeactivateDevice(); // Function TslGameMode.BaseModComponent.DeactivateDevice //  // @ game+0xe18365c
	void ActivateDevice(); // Function TslGameMode.BaseModComponent.ActivateDevice //  // @ game+0xe1832fc
};

// Class TslGameMode.*263272e7ee
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*263272e7ee : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void ActionRemoveRestrictions(); // Function TslGameMode.*263272e7ee.ActionRemoveRestrictions //  // @ game+0xe18314c
	void ActionApplyRestrictions(); // Function TslGameMode.*263272e7ee.ActionApplyRestrictions //  // @ game+0xe182f9c
	void TriggerRestrictionsRemoved(); // Function TslGameMode.*263272e7ee.TriggerRestrictionsRemoved //  // @ game+0xe1845a8
	void TriggerRestrictionsApplied(); // Function TslGameMode.*263272e7ee.TriggerRestrictionsApplied //  // @ game+0xe1843f8
};

// Class TslGameMode.*9dadeb83db
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*9dadeb83db : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void TriggerAIReachedPoint(); // Function TslGameMode.*9dadeb83db.TriggerAIReachedPoint //  // @ game+0xe184248
};

// Class TslGameMode.ModAirborneAircraftVehicle
// Size: 0x638 (Inherited: 0x638)  [layout: KHOP]
struct AModAirborneAircraftVehicle : ATransportAircraftVehicle {
};

// Class TslGameMode.*ee18605534
// Size: 0x300 (Inherited: 0x2a0)  [layout: KHOP]
struct U*ee18605534 : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)
	struct UClass* *63b9a73d21; // 0x2e0(0x20)

	void OnCharacterEject(); // Function TslGameMode.*ee18605534.OnCharacterEject //  // @ game+0xe1839c4
	void OnStartAirborne(); // Function TslGameMode.*ee18605534.OnStartAirborne //  // @ game+0xe184098
	void *937be09a37(); // Function TslGameMode.*ee18605534.*937be09a37 //  // @ game+0xe183dc0
	void Airborne(); // Function TslGameMode.*ee18605534.Airborne //  // @ game+0xe1834ac
};

// Class TslGameMode.*54de23cdde
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*54de23cdde : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void OnAirDrop(); // Function TslGameMode.*54de23cdde.OnAirDrop //  // @ game+0xe196c14
	void AirDrop(); // Function TslGameMode.*54de23cdde.AirDrop //  // @ game+0xe1928c4
};

// Class TslGameMode.*87c1ab05a1
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*87c1ab05a1 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void ActionDeactivateBlocking(); // Function TslGameMode.*87c1ab05a1.ActionDeactivateBlocking //  // @ game+0xe1903f0
	void ActionDeactivateBlueEffect(); // Function TslGameMode.*87c1ab05a1.ActionDeactivateBlueEffect //  // @ game+0xe1905a0
	void ActionActivateWeaponBlocking(); // Function TslGameMode.*87c1ab05a1.ActionActivateWeaponBlocking //  // @ game+0xe18fd30
	void ActionActivateThrowablesBlocking(); // Function TslGameMode.*87c1ab05a1.ActionActivateThrowablesBlocking //  // @ game+0xe18fb80
	void ActionDeactivateWeaponBlocking(); // Function TslGameMode.*87c1ab05a1.ActionDeactivateWeaponBlocking //  // @ game+0xe190900
	void ActionActivateBlueEffect(); // Function TslGameMode.*87c1ab05a1.ActionActivateBlueEffect //  // @ game+0xe18f9d0
	void ActionActivateBlocking(); // Function TslGameMode.*87c1ab05a1.ActionActivateBlocking //  // @ game+0xe18f820
	void ActionDeactivateThrowablesBlocking(); // Function TslGameMode.*87c1ab05a1.ActionDeactivateThrowablesBlocking //  // @ game+0xe190750
};

// Class TslGameMode.*9a34ad1379
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*9a34ad1379 : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void LowerVolume(); // Function TslGameMode.*9a34ad1379.LowerVolume //  // @ game+0xe195d10
	void OnAllReset(); // Function TslGameMode.*9a34ad1379.OnAllReset //  // @ game+0xe196dc4
	void SpeedUp(); // Function TslGameMode.*9a34ad1379.SpeedUp //  // @ game+0xe1ab494
	void ResetVolume(); // Function TslGameMode.*9a34ad1379.ResetVolume //  // @ game+0xe1a61bc
	void OnStopBGM(); // Function TslGameMode.*9a34ad1379.OnStopBGM //  // @ game+0xe1a237c
	void PlayBGM(); // Function TslGameMode.*9a34ad1379.PlayBGM //  // @ game+0xe1a4f64
	void OnPlayBGM(); // Function TslGameMode.*9a34ad1379.OnPlayBGM //  // @ game+0xe19de18
	void OnSpeedUp(); // Function TslGameMode.*9a34ad1379.OnSpeedUp //  // @ game+0xe1a1c94
	void OnLowerVolume(); // Function TslGameMode.*9a34ad1379.OnLowerVolume //  // @ game+0xe19c3f4
	void OnPauseBGM(); // Function TslGameMode.*9a34ad1379.OnPauseBGM //  // @ game+0xe19dc68
	void ResumeBGM(); // Function TslGameMode.*9a34ad1379.ResumeBGM //  // @ game+0xe1a63a4
	void PauseBGM(); // Function TslGameMode.*9a34ad1379.PauseBGM //  // @ game+0xe1a4bb8
	void OnSpeedDown(); // Function TslGameMode.*9a34ad1379.OnSpeedDown //  // @ game+0xe1a1ae4
	void SpeedDown(); // Function TslGameMode.*9a34ad1379.SpeedDown //  // @ game+0xe1ab2a8
	void AllReset(); // Function TslGameMode.*9a34ad1379.AllReset //  // @ game+0xe192a74
	void ResetSpeed(); // Function TslGameMode.*9a34ad1379.ResetSpeed //  // @ game+0xe1a5f2c
	void OnResumeBGM(); // Function TslGameMode.*9a34ad1379.OnResumeBGM //  // @ game+0xe1a02d0
	void StopBGM(); // Function TslGameMode.*9a34ad1379.StopBGM //  // @ game+0xe1abd68
	void OnResetVolume(); // Function TslGameMode.*9a34ad1379.OnResetVolume //  // @ game+0xe1a00f4
	void OnResetSpeed(); // Function TslGameMode.*9a34ad1379.OnResetSpeed //  // @ game+0xe19ff44
};

// Class TslGameMode.*2bc69cca2d
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*2bc69cca2d : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void UpdateBillboard(); // Function TslGameMode.*2bc69cca2d.UpdateBillboard //  // @ game+0xe1b1280
};

// Class TslGameMode.*b338aed96e
// Size: 0x370 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*b338aed96e : UBaseModComponent {
	struct FName *9ab0d671a4; // 0x298(0x08)
	struct FText *31acef7623; // 0x2a0(0x18)
	struct FText *4b0a3779d3; // 0x2b8(0x18)
	char pad_2D0[0xa0]; // 0x2d0(0xa0)

	void TriggerBombPlanted(); // Function TslGameMode.*b338aed96e.TriggerBombPlanted //  // @ game+0xe1ad3f4
	void TriggerBombExploded(); // Function TslGameMode.*b338aed96e.TriggerBombExploded //  // @ game+0xe1ad244
	void TriggerHitByExplosion(); // Function TslGameMode.*b338aed96e.TriggerHitByExplosion //  // @ game+0xe1ae9e4
	void TriggerBombDefused(); // Function TslGameMode.*b338aed96e.TriggerBombDefused //  // @ game+0xe1ad094
	void ActionProvideBombKit(); // Function TslGameMode.*b338aed96e.ActionProvideBombKit //  // @ game+0xe1913a0
	void OnEquippedBombKitWeapon(); // Function TslGameMode.*b338aed96e.OnEquippedBombKitWeapon //  // @ game+0xe19ae1c
};

// Class TslGameMode.*680dc7f86e
// Size: 0x1a0 (Inherited: 0x1a0)  [layout: KHOP]
struct U*680dc7f86e : U*436f0b8f28 {
};

// Class TslGameMode.*9db23bb5ea
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*9db23bb5ea : UBaseModComponent {
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void TriggerAircraftStarted(); // Function TslGameMode.*9db23bb5ea.TriggerAircraftStarted //  // @ game+0xe1acd34
	void ActionRequestRespawn(); // Function TslGameMode.*9db23bb5ea.ActionRequestRespawn //  // @ game+0xe191c48
};

// Class TslGameMode.*a9b8440298
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*a9b8440298 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void TriggerStopBlueZone(); // Function TslGameMode.*a9b8440298.TriggerStopBlueZone //  // @ game+0xe1b0ba4
	void ResumeBlueZone(); // Function TslGameMode.*a9b8440298.ResumeBlueZone //  // @ game+0xe1a6590
	void StartBlueZone(); // Function TslGameMode.*a9b8440298.StartBlueZone //  // @ game+0xe1ab67c
	void TriggerPauseBlueZone(); // Function TslGameMode.*a9b8440298.TriggerPauseBlueZone //  // @ game+0xe1af764
	void StopBlueZone(); // Function TslGameMode.*a9b8440298.StopBlueZone //  // @ game+0xe1abf54
	void PauseBlueZone(); // Function TslGameMode.*a9b8440298.PauseBlueZone //  // @ game+0xe1a4da0
	void TriggerStartBlueZone(); // Function TslGameMode.*a9b8440298.TriggerStartBlueZone //  // @ game+0xe1b0694
	void TriggerResumeBlueZone(); // Function TslGameMode.*a9b8440298.TriggerResumeBlueZone //  // @ game+0xe1affd4
};

// Class TslGameMode.*abc6b266d2
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*abc6b266d2 : UBaseModComponent {
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void OnProgressTrigger(); // Function TslGameMode.*abc6b266d2.OnProgressTrigger //  // @ game+0xe19e7f4
	void HideMapIcon(); // Function TslGameMode.*abc6b266d2.HideMapIcon //  // @ game+0xe195800
	void OnStalemateTrigger(); // Function TslGameMode.*abc6b266d2.OnStalemateTrigger //  // @ game+0xe1a1e44
	void OnCoolDownFinishedTrigger(); // Function TslGameMode.*abc6b266d2.OnCoolDownFinishedTrigger //  // @ game+0xe19a368
	void OnCapturedIntervalTrigger(); // Function TslGameMode.*abc6b266d2.OnCapturedIntervalTrigger //  // @ game+0xe197cb4
	void ShowXRay(); // Function TslGameMode.*abc6b266d2.ShowXRay //  // @ game+0xe1aad3c
	void HideXRay(); // Function TslGameMode.*abc6b266d2.HideXRay //  // @ game+0xe1959b0
	void ShowMapIcon(); // Function TslGameMode.*abc6b266d2.ShowMapIcon //  // @ game+0xe1aab8c
	void OnNeutralTrigger(); // Function TslGameMode.*abc6b266d2.OnNeutralTrigger //  // @ game+0xe19cf84
	void OnCapturedTrigger(); // Function TslGameMode.*abc6b266d2.OnCapturedTrigger //  // @ game+0xe197e64
};

// Class TslGameMode.*f000482bbe
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct U*f000482bbe : UBaseModComponent {

	void OnSuccess(); // Function TslGameMode.*f000482bbe.OnSuccess //  // @ game+0xe1a2874
	void Trigger(); // Function TslGameMode.*f000482bbe.Trigger //  // @ game+0xe1ac9a8
	void OnFail(); // Function TslGameMode.*f000482bbe.OnFail //  // @ game+0xe19b574
};

// Class TslGameMode.*e060c5ab4b
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*e060c5ab4b : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void TriggerCheckpointPassed(); // Function TslGameMode.*e060c5ab4b.TriggerCheckpointPassed //  // @ game+0xe1ad754
};

// Class TslGameMode.CheckpointModActor
// Size: 0x448 (Inherited: 0x400)  [layout: KHOP]
struct ACheckpointModActor : AActor {
	struct FModDeviceInstanceID DeviceInstanceID; // 0x400(0x04)
	enum class ECheckpointShape *9c1baa8f30; // 0x404(0x01) rep=OnRep_CheckpointShape
	char pad_405[0x3]; // 0x405(0x03)
	float *d79e9d773a; // 0x408(0x04) rep=OnRep_CheckpointDimensions
	float *ed1053f022; // 0x40c(0x04) rep=OnRep_CheckpointDimensions
	float *587edbb01e; // 0x410(0x04) rep=OnRep_CheckpointDimensions
	float *cda14a966d; // 0x414(0x04) rep=OnRep_CheckpointDimensions
	char pad_418[0x18]; // 0x418(0x18)
	struct UStaticMeshComponent* CircleMesh; // 0x430(0x08)
	struct UStaticMeshComponent* RectangleMesh; // 0x438(0x08)
	struct UWidgetComponent* *16226b2a41; // 0x440(0x08)

	void OnRep_CheckpointShape(); // Function TslGameMode.CheckpointModActor.OnRep_CheckpointShape //  // @ game+0xe19eebc
	void OnRep_CheckpointDimensions(); // Function TslGameMode.CheckpointModActor.OnRep_CheckpointDimensions //  // @ game+0xe19eebc
};

// Class TslGameMode.*9cb8ef5172
// Size: 0x350 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*9cb8ef5172 : UBaseModComponent {
	struct UAkAudioEvent* *9d47f9896f; // 0x298(0x08)
	char pad_2A0[0xb0]; // 0x2a0(0xb0)

	void TriggerCheckpointPassed(); // Function TslGameMode.*9cb8ef5172.TriggerCheckpointPassed //  // @ game+0xe1ad5a4
	void TriggerAllCheckpointsPassed(); // Function TslGameMode.*9cb8ef5172.TriggerAllCheckpointsPassed //  // @ game+0xe1acee4
};

// Class TslGameMode.*4e39663340
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*4e39663340 : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void TriggerOnConditionMatched(); // Function TslGameMode.*4e39663340.TriggerOnConditionMatched //  // @ game+0xe1af254
	void TriggerOnCheckCondition(); // Function TslGameMode.*4e39663340.TriggerOnCheckCondition //  // @ game+0xe1af0a4
	void ActionCheckCondition(); // Function TslGameMode.*4e39663340.ActionCheckCondition //  // @ game+0xe190240
	void TriggerOnConditionMismatched(); // Function TslGameMode.*4e39663340.TriggerOnConditionMismatched //  // @ game+0xe1af404
};

// Class TslGameMode.*a7416194f8
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*a7416194f8 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void OnSucceedCraft(); // Function TslGameMode.*a7416194f8.OnSucceedCraft //  // @ game+0xe1a26c4
	void *cd4184468c(); // Function TslGameMode.*a7416194f8.*cd4184468c //  // @ game+0xe193528
	void *b86ad4d973(); // Function TslGameMode.*a7416194f8.*b86ad4d973 //  // @ game+0xe19a518
	void *7e6bf046dd(); // Function TslGameMode.*a7416194f8.*7e6bf046dd //  // @ game+0xe1a0a80
};

// Class TslGameMode.*0cf627ec2d
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*0cf627ec2d : UBaseModComponent {
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void OnMaxDamageAmountReached(); // Function TslGameMode.*0cf627ec2d.OnMaxDamageAmountReached //  // @ game+0xe19c7c8
	void OnDamaged(); // Function TslGameMode.*0cf627ec2d.OnDamaged //  // @ game+0xe19a780
	void ResetDamageCountAmountEvent(); // Function TslGameMode.*0cf627ec2d.ResetDamageCountAmountEvent //  // @ game+0xe1a59e8
	void OnMaxDamageCountReached(); // Function TslGameMode.*0cf627ec2d.OnMaxDamageCountReached //  // @ game+0xe19c978
	void ResetAccumulatedDamageEvent(); // Function TslGameMode.*0cf627ec2d.ResetAccumulatedDamageEvent //  // @ game+0xe1a5828
};

// Class TslGameMode.*a2145caa22
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*a2145caa22 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void TriggerDummySpawn(); // Function TslGameMode.*a2145caa22.TriggerDummySpawn //  // @ game+0xe1ad904
	void ActionDummySpawn(); // Function TslGameMode.*a2145caa22.ActionDummySpawn //  // @ game+0xe190ca0
};

// Class TslGameMode.GameEventModComponent
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct UGameEventModComponent : UBaseModComponent {

	void TriggerStartGame(); // Function TslGameMode.GameEventModComponent.TriggerStartGame //  // @ game+0xe1b0844
};

// Class TslGameMode.*cb08c386b2
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*cb08c386b2 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void OnSetIcon(); // Function TslGameMode.*cb08c386b2.OnSetIcon //  // @ game+0xe1a1020
	void SetIcon(); // Function TslGameMode.*cb08c386b2.SetIcon //  // @ game+0xe1a9f74
};

// Class TslGameMode.*85975fc193
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*85975fc193 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void OnSetWidgetVisibility(); // Function TslGameMode.*85975fc193.OnSetWidgetVisibility //  // @ game+0xe1a11d0
	void SetWidgetVisibility(); // Function TslGameMode.*85975fc193.SetWidgetVisibility //  // @ game+0xe1aa9c8
};

// Class TslGameMode.*43bec0276c
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*43bec0276c : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void OnStartInteract(); // Function TslGameMode.*43bec0276c.OnStartInteract //  // @ game+0xe1a1ff4
	void OnCancelInteract(); // Function TslGameMode.*43bec0276c.OnCancelInteract //  // @ game+0xe197b04
	void OnFinishInteract(); // Function TslGameMode.*43bec0276c.OnFinishInteract //  // @ game+0xe19b74c
};

// Class TslGameMode.*f81a4765fe
// Size: 0x390 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*f81a4765fe : UBaseModComponent {
	char pad_2A0[0xf0]; // 0x2a0(0xf0)

	void ActionProvideItem(); // Function TslGameMode.*f81a4765fe.ActionProvideItem //  // @ game+0xe191550
	void TriggerExecutedProvideItem(); // Function TslGameMode.*f81a4765fe.TriggerExecutedProvideItem //  // @ game+0xe1ae834
};

// Class TslGameMode.*3ae99f1089
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*3ae99f1089 : UBaseModComponent {
	struct ADroppedItem* *f9993d6159; // 0x298(0x08)
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void ActionSpawnItem(); // Function TslGameMode.*3ae99f1089.ActionSpawnItem //  // @ game+0xe192330
	void TriggerExecutedItemSpawn(); // Function TslGameMode.*3ae99f1089.TriggerExecutedItemSpawn //  // @ game+0xe1ae684
};

// Class TslGameMode.*b7d4b0b893
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*b7d4b0b893 : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)
};

// Class TslGameMode.*df1fbd6b8f
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*df1fbd6b8f : UBaseModComponent {
	struct UClass* *2a925dabc1; // 0x298(0x08)
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void TriggerMarketSellItem(); // Function TslGameMode.*df1fbd6b8f.TriggerMarketSellItem //  // @ game+0xe1aeef4
};

// Class TslGameMode.*b25c797c81
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*b25c797c81 : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void OnStartMessage(); // Function TslGameMode.*b25c797c81.OnStartMessage //  // @ game+0xe1a21a4
	void SendMessage(); // Function TslGameMode.*b25c797c81.SendMessage //  // @ game+0xe1a6874
	void OnFinishMessage(); // Function TslGameMode.*b25c797c81.OnFinishMessage //  // @ game+0xe19b8fc
};

// Class TslGameMode.*ffdd134737
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ffdd134737 : UInterface {
};

// Class TslGameMode.*d9a0459677
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*d9a0459677 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void OnRequestStopMove(); // Function TslGameMode.*d9a0459677.OnRequestStopMove //  // @ game+0xe19fd08
	void OnRequestStartMove(); // Function TslGameMode.*d9a0459677.OnRequestStartMove //  // @ game+0xe19fb58
	void RequestStopMove(); // Function TslGameMode.*d9a0459677.RequestStopMove //  // @ game+0xe1a547c
	void RequestStartMove(); // Function TslGameMode.*d9a0459677.RequestStartMove //  // @ game+0xe1a5294
};

// Class TslGameMode.*b9d0f86811
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*b9d0f86811 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void OnDamagePlayer(); // Function TslGameMode.*b9d0f86811.OnDamagePlayer //  // @ game+0xe19a5d0
	void DamagePlayer(); // Function TslGameMode.*b9d0f86811.DamagePlayer //  // @ game+0xe194e58
};

// Class TslGameMode.*9e46ac1ce2
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*9e46ac1ce2 : UBaseModComponent {
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void TriggerEvent(); // Function TslGameMode.*9e46ac1ce2.TriggerEvent //  // @ game+0xe1adc64
};

// Class TslGameMode.*7316d5300d
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*7316d5300d : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void TriggerPlayerSpawnInDevice(); // Function TslGameMode.*7316d5300d.TriggerPlayerSpawnInDevice //  // @ game+0xe1afac4
};

// Class TslGameMode.*f4a9b04ee9
// Size: 0x2f0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*f4a9b04ee9 : UBaseModComponent {
	char pad_2A0[0x50]; // 0x2a0(0x50)

	void SetSoundRangeScale(); // Function TslGameMode.*f4a9b04ee9.SetSoundRangeScale //  // @ game+0xe1aa5d8
	void SetSpeedScale(); // Function TslGameMode.*f4a9b04ee9.SetSpeedScale //  // @ game+0xe1aa788
	void OnChangeGodMode(); // Function TslGameMode.*f4a9b04ee9.OnChangeGodMode //  // @ game+0xe198438
	void OnChangeJumpScale(); // Function TslGameMode.*f4a9b04ee9.OnChangeJumpScale //  // @ game+0xe19895c
	void OnChangeMaxHealth(); // Function TslGameMode.*f4a9b04ee9.OnChangeMaxHealth //  // @ game+0xe198b0c
	void SetGravityScale(); // Function TslGameMode.*f4a9b04ee9.SetGravityScale //  // @ game+0xe1a9a64
	void SetHealth(); // Function TslGameMode.*f4a9b04ee9.SetHealth //  // @ game+0xe1a9c14
	void OnChangeCharacterScale(); // Function TslGameMode.*f4a9b04ee9.OnChangeCharacterScale //  // @ game+0xe1981ec
	void ApplyAll(); // Function TslGameMode.*f4a9b04ee9.ApplyAll //  // @ game+0xe192f9c
	void SetCharacterScale(); // Function TslGameMode.*f4a9b04ee9.SetCharacterScale //  // @ game+0xe1a9680
	void SetMaxHealth(); // Function TslGameMode.*f4a9b04ee9.SetMaxHealth //  // @ game+0xe1aa38c
	void OnChangeCanTakeFallDamage(); // Function TslGameMode.*f4a9b04ee9.OnChangeCanTakeFallDamage //  // @ game+0xe19803c
	void OnChangeHealth(); // Function TslGameMode.*f4a9b04ee9.OnChangeHealth //  // @ game+0xe198798
	void SetJumpScale(); // Function TslGameMode.*f4a9b04ee9.SetJumpScale //  // @ game+0xe1aa1dc
	void OnChangeGravityScale(); // Function TslGameMode.*f4a9b04ee9.OnChangeGravityScale //  // @ game+0xe1985e8
	void OnChangeSoundRangeScale(); // Function TslGameMode.*f4a9b04ee9.OnChangeSoundRangeScale //  // @ game+0xe198cbc
	void OnApplyAll(); // Function TslGameMode.*f4a9b04ee9.OnApplyAll //  // @ game+0xe197078
	void SetGodMode(); // Function TslGameMode.*f4a9b04ee9.SetGodMode //  // @ game+0xe1a98b4
	void SetHealthBarTextVisibility(); // Function TslGameMode.*f4a9b04ee9.SetHealthBarTextVisibility //  // @ game+0xe1a9dc4
	void SetCanTakeFallDamage(); // Function TslGameMode.*f4a9b04ee9.SetCanTakeFallDamage //  // @ game+0xe1a94d0
	void OnChangeSpeedScale(); // Function TslGameMode.*f4a9b04ee9.OnChangeSpeedScale //  // @ game+0xe198e6c
};

// Class TslGameMode.*34d9002519
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*34d9002519 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void ActionAddTag(); // Function TslGameMode.*34d9002519.ActionAddTag //  // @ game+0xe18fee0
	void ActionAllClearTag(); // Function TslGameMode.*34d9002519.ActionAllClearTag //  // @ game+0xe190090
	void ActionRemoveTag(); // Function TslGameMode.*34d9002519.ActionRemoveTag //  // @ game+0xe1918e8
};

// Class TslGameMode.*1d424a4f8e
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*1d424a4f8e : UBaseModComponent {
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void TriggerEventOnIncreased(); // Function TslGameMode.*1d424a4f8e.TriggerEventOnIncreased //  // @ game+0xe1ae4d4
	void TriggerEventOnChanged(); // Function TslGameMode.*1d424a4f8e.TriggerEventOnChanged //  // @ game+0xe1ade14
	void ChangePointEvent(); // Function TslGameMode.*1d424a4f8e.ChangePointEvent //  // @ game+0xe1935c4
	void TriggerEventOnDecreased(); // Function TslGameMode.*1d424a4f8e.TriggerEventOnDecreased //  // @ game+0xe1ae324
	void TriggerEventOnCondition(); // Function TslGameMode.*1d424a4f8e.TriggerEventOnCondition //  // @ game+0xe1adfc4
	void ResetPointEvent(); // Function TslGameMode.*1d424a4f8e.ResetPointEvent //  // @ game+0xe1a5ba8
};

// Class TslGameMode.*a09c82fb58
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct U*a09c82fb58 : UBaseModComponent {

	void OnTrigger(); // Function TslGameMode.*a09c82fb58.OnTrigger //  // @ game+0xe1a37f0
	void Trigger(); // Function TslGameMode.*a09c82fb58.Trigger //  // @ game+0xe1acb58
};

// Class TslGameMode.*bcc7271a8f
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*bcc7271a8f : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void ActionRequestSpecialZone(); // Function TslGameMode.*bcc7271a8f.ActionRequestSpecialZone //  // @ game+0xe191df8
};

// Class TslGameMode.*15167b4f5a
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*15167b4f5a : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void ActionRequestRedZone(); // Function TslGameMode.*15167b4f5a.ActionRequestRedZone //  // @ game+0xe191a98
};

// Class TslGameMode.*5b509cf6e2
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*5b509cf6e2 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void TriggerEventOnCondition(); // Function TslGameMode.*5b509cf6e2.TriggerEventOnCondition //  // @ game+0xe1ae174
};

// Class TslGameMode.*5d27d1a212
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct U*5d27d1a212 : UBaseModComponent {

	void StopSmoke(); // Function TslGameMode.*5d27d1a212.StopSmoke //  // @ game+0xe1ac2b8
	void StartSmoke(); // Function TslGameMode.*5d27d1a212.StartSmoke //  // @ game+0xe1ab9e0
	void OnSmokeStopped(); // Function TslGameMode.*5d27d1a212.OnSmokeStopped //  // @ game+0xe1a1594
	void OnSmokeStarted(); // Function TslGameMode.*5d27d1a212.OnSmokeStarted //  // @ game+0xe1a13e4
};

// Class TslGameMode.*f87d70e30b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f87d70e30b : UInterface {
};

// Class TslGameMode.*8c89f98be7
// Size: 0x2c0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*8c89f98be7 : UBaseModComponent {
	char pad_2A0[0x20]; // 0x2a0(0x20)

	void TriggerEndWatch(); // Function TslGameMode.*8c89f98be7.TriggerEndWatch //  // @ game+0xe1adab4
	void ActionResumeWatch(); // Function TslGameMode.*8c89f98be7.ActionResumeWatch //  // @ game+0xe192180
	void TriggerRecordWatch(); // Function TslGameMode.*8c89f98be7.TriggerRecordWatch //  // @ game+0xe1afe24
	void TriggerResumeWatch(); // Function TslGameMode.*8c89f98be7.TriggerResumeWatch //  // @ game+0xe1b0184
	void ActionStartWatch(); // Function TslGameMode.*8c89f98be7.ActionStartWatch //  // @ game+0xe192508
	void ActionEndWatch(); // Function TslGameMode.*8c89f98be7.ActionEndWatch //  // @ game+0xe190e50
	void ActionRecordWatch(); // Function TslGameMode.*8c89f98be7.ActionRecordWatch //  // @ game+0xe191738
	void ActionPauseWatch(); // Function TslGameMode.*8c89f98be7.ActionPauseWatch //  // @ game+0xe1911f0
	void TriggerStartWatch(); // Function TslGameMode.*8c89f98be7.TriggerStartWatch //  // @ game+0xe1b09f4
	void TriggerPauseWatch(); // Function TslGameMode.*8c89f98be7.TriggerPauseWatch //  // @ game+0xe1af914
};

// Class TslGameMode.*a3d21b8903
// Size: 0x2b0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*a3d21b8903 : UBaseModComponent {
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void OnJumpStarted(); // Function TslGameMode.*a3d21b8903.OnJumpStarted //  // @ game+0xe19c0a8
	void Launch(); // Function TslGameMode.*a3d21b8903.Launch //  // @ game+0xe195b60
};

// Class TslGameMode.*55a5faad5a
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*55a5faad5a : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void TriggerTeleport(); // Function TslGameMode.*55a5faad5a.TriggerTeleport //  // @ game+0xe1b0d54
	void TeleportToTarget(); // Function TslGameMode.*55a5faad5a.TeleportToTarget //  // @ game+0xe1ac7b4
};

// Class TslGameMode.*4afcbaf1f3
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*4afcbaf1f3 : UBaseModComponent {
	char pad_2A0[0x30]; // 0x2a0(0x30)
};

// Class TslGameMode.*cc9cf260bd
// Size: 0x2e0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*cc9cf260bd : UBaseModComponent {
	struct UAkAudioEvent* *d771a1b627; // 0x298(0x08)
	struct UAkAudioEvent* *04f9ec068d; // 0x2a0(0x08)
	char pad_2A8[0x38]; // 0x2a8(0x38)

	void TriggerTime(); // Function TslGameMode.*cc9cf260bd.TriggerTime //  // @ game+0xe1b0f04
	void StopTimer(); // Function TslGameMode.*cc9cf260bd.StopTimer //  // @ game+0xe1ac468
	void StartTimer(); // Function TslGameMode.*cc9cf260bd.StartTimer //  // @ game+0xe1abb90
};

// Class TslGameMode.*c7db3c1f01
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c7db3c1f01 : UInterface {
};

// Class TslGameMode.*0e423e63cd
// Size: 0x320 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*0e423e63cd : UBaseModComponent {
	char pad_2A0[0x80]; // 0x2a0(0x80)

	void ActionIncreaseVariable(); // Function TslGameMode.*0e423e63cd.ActionIncreaseVariable //  // @ game+0xe191000
	void TriggerOnUpdateVariable(); // Function TslGameMode.*0e423e63cd.TriggerOnUpdateVariable //  // @ game+0xe1af5b4
	void ActionResetVariable(); // Function TslGameMode.*0e423e63cd.ActionResetVariable //  // @ game+0xe191fa8
	void ActionDecreaseVariable(); // Function TslGameMode.*0e423e63cd.ActionDecreaseVariable //  // @ game+0xe190ab0
};

// Class TslGameMode.*e26fee0f47
// Size: 0x340 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*e26fee0f47 : UBaseModComponent {
	struct APawn* *cba7ac814d; // 0x298(0x08)
	char pad_2A0[0xa0]; // 0x2a0(0xa0)

	void TriggerVehicleDestruction(); // Function TslGameMode.*e26fee0f47.TriggerVehicleDestruction //  // @ game+0xe1b10b4
	void OnLeave(); // Function TslGameMode.*e26fee0f47.OnLeave //  // @ game+0xe19c328
	void TriggerLeaveVehicle(); // Function TslGameMode.*e26fee0f47.TriggerLeaveVehicle //  // @ game+0xe1aed44
	void SpawnVehicle(); // Function TslGameMode.*e26fee0f47.SpawnVehicle //  // @ game+0xe1aaeec
	void TriggerSpawnVehicle(); // Function TslGameMode.*e26fee0f47.TriggerSpawnVehicle //  // @ game+0xe1b04e4
	void OnVehicleReplaced(); // Function TslGameMode.*e26fee0f47.OnVehicleReplaced //  // @ game+0x2d09fc0
	void TriggerRideVehicle(); // Function TslGameMode.*e26fee0f47.TriggerRideVehicle //  // @ game+0xe1b0334
	void OnRide(); // Function TslGameMode.*e26fee0f47.OnRide //  // @ game+0xe1a0480
	void OnVehicleDeath(); // Function TslGameMode.*e26fee0f47.OnVehicleDeath //  // @ game+0xe1a3d10
};

// Class TslGameMode.*dcb0c0623a
// Size: 0x2d0 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*dcb0c0623a : UBaseModComponent {
	struct UAkAudioEvent* *4a13de7cdb; // 0x298(0x08)
	struct UAkAudioEvent* *e3f7c97b69; // 0x2a0(0x08)
	char pad_2A8[0x28]; // 0x2a8(0x28)

	void TriggerJackpot(); // Function TslGameMode.*dcb0c0623a.TriggerJackpot //  // @ game+0xe1aeb94
	void TriggerProvideItem(); // Function TslGameMode.*dcb0c0623a.TriggerProvideItem //  // @ game+0xe1afc74
	void OnJackpot(); // Function TslGameMode.*dcb0c0623a.OnJackpot //  // @ game+0xe19c02c
	void OnProvideItem(); // Function TslGameMode.*dcb0c0623a.OnProvideItem //  // @ game+0xe19ea64
};

// Class TslGameMode.MovableModInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UMovableModInterface : UInterface {

	void StartMove(); // Function TslGameMode.MovableModInterface.StartMove //  // @ game+0xe1ab82c
	void StopMove(); // Function TslGameMode.MovableModInterface.StopMove //  // @ game+0xe1ac104
};

// Class TslGameMode.*e69c865f5d
// Size: 0x390 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*e69c865f5d : UBaseModComponent {
	char pad_2A0[0x90]; // 0x2a0(0x90)
	struct U*f1ae092dd3* *f1ae092dd3; // 0x330(0x08)
	SetProperty *69d875eebf; // 0x338(0x50)
	char pad_388[0x8]; // 0x388(0x08)

	void OnEnterEvent(); // Function TslGameMode.*e69c865f5d.OnEnterEvent //  // @ game+0xe19ac58
	void OnExitEvent(); // Function TslGameMode.*e69c865f5d.OnExitEvent //  // @ game+0xe19b3c4
};

// Class TslGameMode.*5aa5431e1d
// Size: 0x300 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct U*5aa5431e1d : UBaseModComponent {
	char pad_2A0[0x60]; // 0x2a0(0x60)

	void Apply(); // Function TslGameMode.*5aa5431e1d.Apply //  // @ game+0xe192dec
	void Reset(); // Function TslGameMode.*5aa5431e1d.Reset //  // @ game+0xe1a5678
};

// Class TslGameMode.*8f1f595d70
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct U*8f1f595d70 : UBaseModComponent {

	void ApplySetting(); // Function TslGameMode.*8f1f595d70.ApplySetting //  // @ game+0xe19314c
	void ResetSetting(); // Function TslGameMode.*8f1f595d70.ResetSetting //  // @ game+0xe1a5d58
};

// Class TslGameMode.BillboardModActor
// Size: 0x438 (Inherited: 0x400)  [layout: KHOP]
struct ABillboardModActor : AActor {
	struct UWidgetComponent* FrontBoard; // 0x400(0x08)
	struct UWidgetComponent* BackBoard; // 0x408(0x08)
	struct UTslModBillboardWidget* *08eecac2a7; // 0x410(0x08)
	struct UTslModBillboardWidget* *9537d96282; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	struct TArray<struct F*3f2386241f> *e0ca2b0083; // 0x428(0x10) rep=OnRep_BillboardRecords

	void OnRep_BillboardRecords(); // Function TslGameMode.BillboardModActor.OnRep_BillboardRecords //  // @ game+0xe19ecbc
};

// Class TslGameMode.BlueChipTowerModActor
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ABlueChipTowerModActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	bool *279b65fc3d; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void OnServerInteractionSucceed(); // Function TslGameMode.BlueChipTowerModActor.OnServerInteractionSucceed //  // @ game+0xe1a0c08
	void *8c25aea5f6(); // Function TslGameMode.BlueChipTowerModActor.*8c25aea5f6 //  // @ game+0xe192c60
};

// Class TslGameMode.*7973af4855
// Size: 0xc8 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*7973af4855 : U*adc663050a {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class TslGameMode.BombModeType
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBombModeType : UObject {
};

// Class TslGameMode.BombCoinEarnTypeDataAsset
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UBombCoinEarnTypeDataAsset : UDataAsset {
	struct TMap<enum class ECoinTakeType, int32> EarnCoinTypes; // 0x38(0x50)
};

// Class TslGameMode.BombModeSoundDataAsset
// Size: 0xd8 (Inherited: 0x38)  [layout: KHOP]
struct UBombModeSoundDataAsset : UDataAsset {
	struct TMap<enum class EBombModeSoundType, struct UAkAudioEvent*> *61294c49a1; // 0x38(0x50)
	struct TMap<struct FString, struct UAkAudioEvent*> *a846ca2ee9; // 0x88(0x50)
};

// Class TslGameMode.BombCoinWidget
// Size: 0x398 (Inherited: 0x330)  [layout: KHOP]
struct UBombCoinWidget : UTslUserWidget {
	bool IsShowCoin; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FSlateColor TextColor; // 0x338(0x28)
	char pad_360[0x10]; // 0x360(0x10)
	struct U*7fa8406bd3* IncreaseAnim; // 0x370(0x08)
	struct U*7fa8406bd3* DecreaseAnim; // 0x378(0x08)
	struct UTextBlock* CoinAniTextBlock; // 0x380(0x08)
	struct UImage* CoinImage; // 0x388(0x08)
	struct UTextBlock* CoinTextBlock; // 0x390(0x08)
};

// Class TslGameMode.BombGameAreaVolume
// Size: 0x4b8 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct ABombGameAreaVolume : APhysicsVolume {
	enum class EBombGameAreaType *fab32c85bb; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FText *8bd8eb36f6; // 0x458(0x18)
	int32 *f727ec7471; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UClass* *4a1914947c; // 0x478(0x08)
	struct UStaticMeshComponent* StartAreaBlockingMeshComponent; // 0x480(0x08)
	float *1ed340efa0; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct TArray<struct AActor*> *f0eb468aab; // 0x490(0x10)
	char pad_4A0[0x18]; // 0x4a0(0x18)

	void *3ab1ba748d(); // Function TslGameMode.BombGameAreaVolume.*3ab1ba748d //  // @ game+0xe1a0538
	void *d914f8bcb4(); // Function TslGameMode.BombGameAreaVolume.*d914f8bcb4 //  // @ game+0xe1a3c18
};

// Class TslGameMode.BombGameResultEffectWidget
// Size: 0x410 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombGameResultEffectWidget : UTslUserWidget {
	struct UTextBlock* BindTextDrawOrLose; // 0x330(0x08)
	struct UTextBlock* TextObserverTeamName; // 0x338(0x08)
	struct UGridPanel* PanelVictoryTitle; // 0x340(0x08)
	struct U*7fa8406bd3* BindAnimationWinEffect; // 0x348(0x08)
	struct U*7fa8406bd3* BindAnimationDrawOrLoseEffect; // 0x350(0x08)
	struct FText DrawText; // 0x358(0x18)
	struct FText LoseText; // 0x370(0x18)
	char pad_388[0x78]; // 0x388(0x78)
	float VictoryTitlePosY; // 0x400(0x04)
	char pad_404[0xc]; // 0x404(0x0c)

	void OnEffectAnimationFinished(); // Function TslGameMode.BombGameResultEffectWidget.OnEffectAnimationFinished //  // @ game+0xe19ac20
};

// Class TslGameMode.*4012e45583
// Size: 0x490 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*4012e45583 : U*606d3b4d41 {
	struct UBombModeSoundDataAsset* *5e18e98fd5; // 0x238(0x08)
	struct TArray<struct F*293216ea4c> *0d7e9de7ab; // 0x240(0x10)
	float BombPlantTimeInSec; // 0x250(0x04)
	float BombDefuseTimeInSec; // 0x254(0x04)
	float BombToExplosionTimeInSec; // 0x258(0x04)
	enum class EBombRoundInProgressState *9ee4064741; // 0x25c(0x01) rep=OnRep_RoundProgressState
	char pad_25D[0x3]; // 0x25d(0x03)
	int32 RemainingReadyTime; // 0x260(0x04) rep=OnRep_RemainingReadyTime
	int8 *a17cc1a562; // 0x264(0x01) rep=OnRep_SwitchedTeamRoleCount
	bool *8f37fd5732; // 0x265(0x01)
	enum class EBombGameAreaType *296cd97b61; // 0x266(0x01)
	bool *f73309b186; // 0x267(0x01)
	enum class EBombPlantedState *3eb0eb8da7; // 0x268(0x01) rep=OnRep_BombState
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct FBombGameTeamRoleData> *9d6cdf6ce4; // 0x270(0x10) rep=OnRep_TeamRoleData
	struct TArray<struct FBombGameTeamScore> *195b6f8a3e; // 0x280(0x10)
	struct TArray<struct FBombGameRoundResult> *63e0febcd9; // 0x290(0x10) rep=OnRep_RoundResults
	struct TArray<float> *8ca17012b4; // 0x2a0(0x10)
	struct F*f8b584ec86 *f8b584ec86; // 0x2b0(0x10) rep=OnRep_TimeBombInfo
	struct UDataTable* *5a9b425162; // 0x2c0(0x08) rep=OnRep_BombModeItemRuleDataTable
	struct UDataTable* *6fae69c2f3; // 0x2c8(0x08) rep=OnRep_BombModeCoinDataTable
	struct F*cc06d0bdc4 MatchResult; // 0x2d0(0x08) rep=OnRep_MatchResult
	struct ATslPlayerStateBase* *95d787d197; // 0x2d8(0x08)
	struct ATslPlayerStateBase* *2cad270214; // 0x2e0(0x08)
	struct ATslPlayerStateBase* *ef8557b13e; // 0x2e8(0x08)
	SetProperty *66eaf01d1e; // 0x2f0(0x50)
	SetProperty *1505696f1e; // 0x340(0x50)
	struct TArray<struct ABombGameAreaVolume*> *56cf190761; // 0x390(0x10)
	char pad_3A0[0xb8]; // 0x3a0(0xb8)
	struct FText *060cf3f6f8; // 0x458(0x18)
	struct FText *9051b1c649; // 0x470(0x18)
	char pad_488[0x8]; // 0x488(0x08)

	void OnRep_RemainingReadyTime(); // Function TslGameMode.*4012e45583.OnRep_RemainingReadyTime //  // @ game+0xe19f81c
	void OnRep_MatchResult(); // Function TslGameMode.*4012e45583.OnRep_MatchResult //  // @ game+0x1053c04
	void OnRep_SwitchedTeamRoleCount(); // Function TslGameMode.*4012e45583.OnRep_SwitchedTeamRoleCount //  // @ game+0xdaa89b0
	void OnRep_RoundResults(); // Function TslGameMode.*4012e45583.OnRep_RoundResults //  // @ game+0xe19f8b0
	void OnRep_TimeBombInfo(); // Function TslGameMode.*4012e45583.OnRep_TimeBombInfo //  // @ game+0xe19fa28
	void OnRep_TeamRoleData(); // Function TslGameMode.*4012e45583.OnRep_TeamRoleData //  // @ game+0xe19f9f0
	void OnRep_BombModeCoinDataTable(); // Function TslGameMode.*4012e45583.OnRep_BombModeCoinDataTable //  // @ game+0xe19ecd0
	void OnRep_BombModeItemRuleDataTable(); // Function TslGameMode.*4012e45583.OnRep_BombModeItemRuleDataTable //  // @ game+0xe19ecec
	void OnRep_RoundProgressState(); // Function TslGameMode.*4012e45583.OnRep_RoundProgressState //  // @ game+0xe19f850
	void OnRep_BombState(); // Function TslGameMode.*4012e45583.OnRep_BombState //  // @ game+0xe19ed78
};

// Class TslGameMode.BombGameStore
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBombGameStore : UObject {
	struct ATslGameModeBase* *9ee2c733d3; // 0x30(0x08)
	struct U*4012e45583* *f8af326a76; // 0x38(0x08)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class TslGameMode.BombHUDRoundCountWidget
// Size: 0x3d8 (Inherited: 0x330)  [layout: KHOP]
struct UBombHUDRoundCountWidget : UTslUserWidget {
	struct FBombHUDRoundCountWidgetSettingValue SettingValue; // 0x330(0x80)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	struct UTextBlock* CurrentRoundTextBlock; // 0x3c0(0x08)
	struct UTextBlock* MaxRoundTextBlock; // 0x3c8(0x08)
	struct UTextBlock* AdditionalInfoTextBlock; // 0x3d0(0x08)
};

// Class TslGameMode.BombHUDStoreTimerWidget
// Size: 0x460 (Inherited: 0x420)  [layout: KHOP]
struct UBombHUDStoreTimerWidget : UUmgBaseWidget {
	struct UTextBlock* TextTravelTimeout; // 0x420(0x08)
	struct UTextBlock* TimeTextBlock; // 0x428(0x08)
	struct UTslKeyboardAndMouseIconWidget* WidgetKeyboardIcon; // 0x430(0x08)
	struct U*7fa8406bd3* EmergingNormal; // 0x438(0x08)
	struct U*7fa8406bd3* VanishingNormal; // 0x440(0x08)
	struct U*7fa8406bd3* EmergingObserverMode; // 0x448(0x08)
	struct U*7fa8406bd3* VanishingObserverMode; // 0x450(0x08)
	int32 TextFontSizeNormal; // 0x458(0x04)
	int32 TextFontSizeObserverMode; // 0x45c(0x04)
};

// Class TslGameMode.BombHUDWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBombHUDWidget : UUmgBaseWidget {
	struct UBombStatusBoardWidget* StatusBoard; // 0x420(0x08)
	struct UBombHUDRoundCountWidget* HUDRoundcount; // 0x428(0x08)
	struct UBombCoinWidget* HUDCoin; // 0x430(0x08)
	struct UBombHUDStoreTimerWidget* StoreTimer; // 0x438(0x08)
	struct UBombStartEffectWidget* StartEffect; // 0x440(0x08)
	struct UBombRoundResultEffectWidget* RoundResultEffect; // 0x448(0x08)
	char pad_450[0x58]; // 0x450(0x58)

	void UpdateMarketKeyboardIcon(); // Function TslGameMode.BombHUDWidget.UpdateMarketKeyboardIcon //  // @ game+0xe1b1444
	void SetAllChildWidgetVisiblity(); // Function TslGameMode.BombHUDWidget.SetAllChildWidgetVisiblity //  // @ game+0xe1a9454
};

// Class TslGameMode.BombObserverHUDWidget
// Size: 0x4f0 (Inherited: 0x4a8)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverHUDWidget : UBombHUDWidget {
	struct UBorder* BorderWorldMapBg; // 0x4a8(0x08)
	struct UMapGridWidget* WidgetMapGrid; // 0x4b0(0x08)
	struct UPlayerHeadManagerWidget* PlayerHead; // 0x4b8(0x08)
	struct UBombObserverWorldMapStatusBoardWidget* WorldMapStatusBoardWidget; // 0x4c0(0x08)
	struct UBombObserverStatusBoardWidget* WidgetStatusBoard; // 0x4c8(0x08)
	struct UBombObserverTeamInfoWidget* WidgetTeamInfoWidget; // 0x4d0(0x08)
	float MinimapSize; // 0x4d8(0x04)
	float WorldMapSize; // 0x4dc(0x04)
	float WorldMapTopMargin; // 0x4e0(0x04)
	enum class EBombObserverHudMapMode MapMode; // 0x4e4(0x01)
	char pad_4E5[0xb]; // 0x4e5(0x0b)

	void OnTogglePlayerList(); // Function TslGameMode.BombObserverHUDWidget.OnTogglePlayerList //  // @ game+0xe1a37c8
};

// Class TslGameMode.BombKeyNotifyWidget
// Size: 0x4b0 (Inherited: 0x4a0)  [layout: LECH - offset chi la uoc luong]
struct UBombKeyNotifyWidget : UTslKeyNotifyWidget_Customizable {
	char pad_4A0[0x10]; // 0x4a0(0x10)
};

// Class TslGameMode.*71d9bacabb
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct U*71d9bacabb : UTslMapImageMapLayer {
};

// Class TslGameMode.BombMatchResultWidget
// Size: 0x638 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UBombMatchResultWidget : UBaseResultWidget {
	enum class EBombUIMatchResultType MatchResultType; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FText TitleVictory; // 0x498(0x18)
	struct FText TitleDefeat; // 0x4b0(0x18)
	struct FText TitleDraw; // 0x4c8(0x18)
	struct FLinearColor TextColorVictory; // 0x4e0(0x10)
	struct FLinearColor TextColorDefeat; // 0x4f0(0x10)
	struct FLinearColor TextColorDraw; // 0x500(0x10)
	struct FLinearColor BGColorVictory; // 0x510(0x10)
	struct FLinearColor BGColorDefeat; // 0x520(0x10)
	struct FLinearColor BGColorDraw; // 0x530(0x10)
	struct FText RemainTimeSingularFormatText; // 0x540(0x18)
	struct FText RemainTimePluralFormatText; // 0x558(0x18)
	struct FString SecFormatArgText; // 0x570(0x10)
	int32 MaxRemainingTime; // 0x580(0x04)
	char pad_584[0x14]; // 0x584(0x14)
	float BHoldTimeToExit; // 0x598(0x04)
	bool bIsObserver; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	struct FText TitleObserverVictory; // 0x5a0(0x18)
	int32 VictoryTeamId; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct UTextBlock* ResultText; // 0x5c0(0x08)
	struct UImage* ResultBGImage; // 0x5c8(0x08)
	struct UImage* ResultLineTopImage; // 0x5d0(0x08)
	struct UImage* ResultLineBottomImage; // 0x5d8(0x08)
	struct UBombScoreBoardTeamWidget* ScoreBoardOwn; // 0x5e0(0x08)
	struct UBombScoreBoardTeamWidget* ScoreBoardRival; // 0x5e8(0x08)
	struct UTslRichTextBlock* TimerText; // 0x5f0(0x08)
	struct UButton* ExitButton; // 0x5f8(0x08)
	struct UButton* ReportButton; // 0x600(0x08)
	struct UTslUserWidget* ReportGamepad; // 0x608(0x08)
	struct UImage* ImageTwinkleBgBind; // 0x610(0x08)
	struct U*7fa8406bd3* ShowAnim; // 0x618(0x08)
	struct UTextBlock* RewardPointsTotal; // 0x620(0x08)
	struct UHorizontalBox* ListReward; // 0x628(0x08)
	char pad_630[0x8]; // 0x630(0x08)

	void OnClicked_ButtonLobbyWrapper(); // Function TslGameMode.BombMatchResultWidget.OnClicked_ButtonLobbyWrapper //  // @ game+0x6d0c20
	void OnClicked_ButtonReport(); // Function TslGameMode.BombMatchResultWidget.OnClicked_ButtonReport //  // @ game+0xe199ccc
	void OnBReleased(); // Function TslGameMode.BombMatchResultWidget.OnBReleased //  // @ game+0xe1974a8
	void OnBPressed(); // Function TslGameMode.BombMatchResultWidget.OnBPressed //  // @ game+0xe197450
};

// Class TslGameMode.BombModeFeature
// Size: 0x2b8 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct UBombModeFeature : UTslLogicModeFeature {
	bool *a5744069d7; // 0xa0(0x01)
	enum class *3758c1e582 *173f7da867; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	float *8b17c37502; // 0xa4(0x04)
	float RoundGameTimeInSec; // 0xa8(0x04)
	float BombPlantTimeInSec; // 0xac(0x04)
	float BombDefuseTimeInSec; // 0xb0(0x04)
	float BombToExplosionTimeInSec; // 0xb4(0x04)
	struct FName *cc7e452c3f; // 0xb8(0x08)
	struct FName *ed13bcf965; // 0xc0(0x08)
	struct FName *c10f2dd1b3; // 0xc8(0x08)
	struct TArray<struct FName> *a7d93a3349; // 0xd0(0x10)
	float *1330e10fee; // 0xe0(0x04)
	float *53ecdb61db; // 0xe4(0x04)
	float *c4b45893f1; // 0xe8(0x04)
	float DeathCamToSpectatingTime; // 0xec(0x04)
	struct FString BattleAreaType; // 0xf0(0x10)
	struct FStringAssetReference BombModeItemRuleDataTableRef; // 0x100(0x10)
	struct FStringAssetReference BombModeCoinTableRef; // 0x110(0x10)
	float *5f05e2c562; // 0x120(0x04)
	float EndRoundWaitingTime; // 0x124(0x04)
	int32 MinTeamPlayerCount; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UBombGameStore* BombGameStore; // 0x130(0x08)
	struct U*4012e45583* *f8af326a76; // 0x138(0x08)
	struct TMap<struct FBombPlayerStartData, struct ABombPlayerStart*> *d27548d22b; // 0x140(0x50)
	SetProperty *55fca1b46f; // 0x190(0x50)
	struct TMap<uint32, struct F*a4da2a6722> *a365fbe417; // 0x1e0(0x50)
	char pad_230[0x88]; // 0x230(0x88)

	void *257bb46b4d(); // Function TslGameMode.BombModeFeature.*257bb46b4d //  // @ game+0xe1a36a8
	void *1a9eae1a8b(); // Function TslGameMode.BombModeFeature.*1a9eae1a8b //  // @ game+0xe1a36e4
	void *69cf93530c(); // Function TslGameMode.BombModeFeature.*69cf93530c //  // @ game+0xe1a3634
	void *dbdcafd06f(); // Function TslGameMode.BombModeFeature.*dbdcafd06f //  // @ game+0xe1a3664
	void *099bf763f5(); // Function TslGameMode.BombModeFeature.*099bf763f5 //  // @ game+0xe1a3678
};

// Class TslGameMode.BombModeMapAreaWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBombModeMapAreaWidget : UUmgBaseWidget {
	struct FStringAssetReference ASiteTexture; // 0x420(0x10)
	struct FStringAssetReference BSiteTexture; // 0x430(0x10)
	struct FStringAssetReference PlantedSiteTexture; // 0x440(0x10)
	struct UImage* AreaImage; // 0x450(0x08)
	struct UImage* AreaDirectionImage; // 0x458(0x08)
	struct ABombGameAreaVolume* Area; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)

	void OnBombStateChanged(); // Function TslGameMode.BombModeMapAreaWidget.OnBombStateChanged //  // @ game+0xe197580
};

// Class TslGameMode.BombModeMapTimeBombIconWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UBombModeMapTimeBombIconWidget : UUmgBaseWidget {
	struct UImage* TimeBombIcon; // 0x420(0x08)
};

// Class TslGameMode.BombModeMinimapCanvasWidget
// Size: 0x568 (Inherited: 0x560)  [layout: KHOP]
struct UBombModeMinimapCanvasWidget : UMinimapCanvasWidget {
	struct UTextBlock* AreaNameText; // 0x560(0x08)
};

// Class TslGameMode.BombModeTeam
// Size: 0x5a0 (Inherited: 0x598)  [layout: LECH - offset chi la uoc luong]
struct ABombModeTeam : ATeam {
	bool *2295f8709b; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
};

// Class TslGameMode.BombObserverMarkCanvasWidget
// Size: 0x458 (Inherited: 0x450)  [layout: KHOP]
struct UBombObserverMarkCanvasWidget : UTslScreenIndicatorCanvasWidget {
	struct UBombObserverMarkWidget* BombMark; // 0x450(0x08)
};

// Class TslGameMode.BombObserverMarkWidget
// Size: 0x4b8 (Inherited: 0x450)  [layout: KHOP]
struct UBombObserverMarkWidget : UScreenIndicatorBaseWidget {
	char pad_450[0x8]; // 0x450(0x08)
	struct UClass* GameLogicClass; // 0x458(0x08)
	struct UBombObserverMarkWidgetLogic* GameLogic; // 0x460(0x08)
	struct FName ParamNameAlphaEnd; // 0x468(0x08)
	struct UGridPanel* PanelBombIcon; // 0x470(0x08)
	struct USizeBox* SizeboxArrow; // 0x478(0x08)
	struct UImage* ImageBg; // 0x480(0x08)
	struct U*7fa8406bd3* AnimBombInstall; // 0x488(0x08)
	struct U*7fa8406bd3* AnimExplosionPending; // 0x490(0x08)
	struct U*7fa8406bd3* AnimExplosionComplete; // 0x498(0x08)
	struct U*7fa8406bd3* AnimDisarm; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimDisarmCancel; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimDisarmComplete; // 0x4b0(0x08)
};

// Class TslGameMode.BombObserverMarkWidgetLogic
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverMarkWidgetLogic : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class TslGameMode.BombObserverMarkWidgetTestLogic
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverMarkWidgetTestLogic : UBombObserverMarkWidgetLogic {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class TslGameMode.BombObserverStatusBoardRoundCircleWidget
// Size: 0x370 (Inherited: 0x330)  [layout: KHOP]
struct UBombObserverStatusBoardRoundCircleWidget : UTslUserWidget {
	struct UImage* ImageCircle; // 0x330(0x08)
	struct UImage* ImageCurrentRoundEffect; // 0x338(0x08)
	struct FLinearColor WaitingRoundColor; // 0x340(0x10)
	struct FLinearColor AttackTeamWinColor; // 0x350(0x10)
	struct FLinearColor DefenseTeamWinColor; // 0x360(0x10)
};

// Class TslGameMode.BombObserverStatusBoardWidget
// Size: 0x5f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverStatusBoardWidget : UUmgBaseWidget {
	struct UTextBlock* TextRoundCurrent; // 0x420(0x08)
	struct UTextBlock* TextRoundMax; // 0x428(0x08)
	struct UTextBlock* TextRemainRoundTime; // 0x430(0x08)
	struct UTextBlock* TextRemainBombTime; // 0x438(0x08)
	struct UPanelWidget* PanelLeftResultIconGroup; // 0x440(0x08)
	struct UBorder* BorderLeftInfo; // 0x448(0x08)
	struct UTextBlock* TextLeftTeamName; // 0x450(0x08)
	struct UTextBlock* TextLeftScore; // 0x458(0x08)
	struct UPanelWidget* PanelRightResultIconGroup; // 0x460(0x08)
	struct UBorder* BorderRightInfo; // 0x468(0x08)
	struct UTextBlock* TextRightTeamName; // 0x470(0x08)
	struct UTextBlock* TextRightScore; // 0x478(0x08)
	struct UPanelWidget* PanelRoundCircleGroup; // 0x480(0x08)
	struct U*7fa8406bd3* AnimInit; // 0x488(0x08)
	struct U*7fa8406bd3* AnimBombPlantedStart; // 0x490(0x08)
	struct U*7fa8406bd3* AnimBombPlantedEnd; // 0x498(0x08)
	struct UTexture2D* ResultIconTextureBombExploded; // 0x4a0(0x08)
	struct UTexture2D* ResultIconTextureBombDefused; // 0x4a8(0x08)
	struct UClass* RoundCircleWidgetClass; // 0x4b0(0x08)
	struct FLinearColor AttackTeamBgColor; // 0x4b8(0x10)
	struct FSlateColor AttackTeamTextColor; // 0x4c8(0x28)
	struct FLinearColor AttackTeamResultIconColor; // 0x4f0(0x10)
	struct FLinearColor DefenseTeamBgColor; // 0x500(0x10)
	struct FSlateColor DefenseTeamTextColor; // 0x510(0x28)
	struct FLinearColor DefenseTeamResultIconColor; // 0x538(0x10)
	struct FBombObserverStatusBoardUIData CachedUIData; // 0x548(0x70)
	struct UClass* GameLogicClass; // 0x5b8(0x08)
	struct UBombObserverStatusBoardWidgetLogic* GameLogic; // 0x5c0(0x08)
	struct TArray<struct UImage*> ResultIconWidgetPool; // 0x5c8(0x10)
	struct TArray<struct UBombObserverStatusBoardRoundCircleWidget*> RoundCircleWidgetPool; // 0x5d8(0x10)
	char pad_5E8[0x8]; // 0x5e8(0x08)
};

// Class TslGameMode.BombObserverStatusBoardWidgetLogic
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverStatusBoardWidgetLogic : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class TslGameMode.*8be4aefa46
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*8be4aefa46 : UBombObserverStatusBoardWidgetLogic {
	char pad_40[0x8]; // 0x40(0x08)
};

// Class TslGameMode.BombObserverTeamInfoEntryWidget
// Size: 0x680 (Inherited: 0x330)  [layout: KHOP]
struct UBombObserverTeamInfoEntryWidget : UTslUserWidget {
	char pad_330[0x70]; // 0x330(0x70)
	bool bLeftEntryWidget; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UBorder* BorderBg; // 0x3a8(0x08)
	struct UBorder* BorderPlayerNumber; // 0x3b0(0x08)
	struct UTextBlock* TextPlayerNumber; // 0x3b8(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x3c0(0x08)
	struct UTextBlock* TextPlayerName; // 0x3c8(0x08)
	struct UTextBlock* TextCoin; // 0x3d0(0x08)
	struct UImage* ImageThrowGrenade; // 0x3d8(0x08)
	struct UImage* ImageThrowSmoke; // 0x3e0(0x08)
	struct UImage* ImageThrowFlashBang; // 0x3e8(0x08)
	struct UTextBlock* TextGrenadeCount; // 0x3f0(0x08)
	struct UTextBlock* TextSmokeCount; // 0x3f8(0x08)
	struct UTextBlock* TextFlashBangCount; // 0x400(0x08)
	struct UImage* ImageWeapon; // 0x408(0x08)
	struct ULifeGaugeTemplateBaseWidget* WidgetHpGauge; // 0x410(0x08)
	struct UButton* Button; // 0x418(0x08)
	struct UImage* ImageSelectedOutline; // 0x420(0x08)
	struct UWidget* SizeBoxKDAInfo; // 0x428(0x08)
	struct UTextBlock* TextKillCount; // 0x430(0x08)
	struct UTextBlock* TextDamage; // 0x438(0x08)
	struct UTextBlock* TextAssistCount; // 0x440(0x08)
	struct U*7fa8406bd3* AnimNormal; // 0x448(0x08)
	struct U*7fa8406bd3* AnimDbno; // 0x450(0x08)
	struct U*7fa8406bd3* AnimDead; // 0x458(0x08)
	struct FBombObserverTeamInfoEntryUISettings UISettings; // 0x460(0x1c8)
	struct FBombObserverTeamInfoEntryUIData CachedUIData; // 0x628(0x58)

	void HandleButtonClicked(); // Function TslGameMode.BombObserverTeamInfoEntryWidget.HandleButtonClicked //  // @ game+0xe1951f0
};

// Class TslGameMode.BombObserverTeamInfoTeamWidget
// Size: 0x388 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverTeamInfoTeamWidget : UTslUserWidget {
	struct UTextBlock* TextTeamName; // 0x330(0x08)
	struct UTextBlock* TextPlantOrDefuse; // 0x338(0x08)
	struct UTextBlock* TextKills; // 0x340(0x08)
	struct U*7fa8406bd3* AnimAttackTeam; // 0x348(0x08)
	struct U*7fa8406bd3* AnimDefenseTeam; // 0x350(0x08)
	struct FBombObserverTeamInfoTeamUIData CachedUIData; // 0x358(0x28)
	char pad_380[0x8]; // 0x380(0x08)
};

// Class TslGameMode.BombObserverTeamInfoWidget
// Size: 0x510 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverTeamInfoWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UClass* GrenadeWeaponType; // 0x490(0x08)
	struct UClass* SmokeBombWeaponType; // 0x498(0x08)
	struct UClass* FlashBangWeaponType; // 0x4a0(0x08)
	struct UBombObserverTeamInfoTeamWidget* WidgetLeftTeam; // 0x4a8(0x08)
	struct UBombObserverTeamInfoTeamWidget* WidgetRightTeam; // 0x4b0(0x08)
	struct UPanelWidget* PanelLeftEntryList; // 0x4b8(0x08)
	struct UPanelWidget* PanelRightEntryList; // 0x4c0(0x08)
	struct UClass* GameLogicClass; // 0x4c8(0x08)
	struct UBombObserverTeamInfoWidgetLogic* GameLogic; // 0x4d0(0x08)
	char pad_4D8[0x38]; // 0x4d8(0x38)

	void HandleReportPlayerGamePad(); // Function TslGameMode.BombObserverTeamInfoWidget.HandleReportPlayerGamePad //  // @ game+0xe1957d8
};

// Class TslGameMode.BombObserverTeamInfoWidgetLogic
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverTeamInfoWidgetLogic : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TslGameMode.*99a43ee314
// Size: 0x68 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*99a43ee314 : UBombObserverTeamInfoWidgetLogic {
	char pad_38[0x30]; // 0x38(0x30)
};

// Class TslGameMode.BombObserverWorldMapStatusBoardRoundEntryWidget
// Size: 0x490 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverWorldMapStatusBoardRoundEntryWidget : UTslUserWidget {
	struct UImage* ImageRoundNumberBg; // 0x330(0x08)
	struct UTextBlock* TextRoundNumber; // 0x338(0x08)
	struct UImage* ImageLeftTeamBg; // 0x340(0x08)
	struct UImage* ImageLeftTeamResultcon; // 0x348(0x08)
	struct UImage* ImageRightTeamBg; // 0x350(0x08)
	struct UImage* ImageRightTeamResultIcon; // 0x358(0x08)
	struct UImage* ImageCurrentEffect; // 0x360(0x08)
	struct FBombObserverWorldMapStatusBoardRoundEntryUISettings UISettings; // 0x368(0x110)
	struct FBombObserverWorldMapStatusBoardRoundEntryUIData CachedUIData; // 0x478(0x0c)
	int32 CurrentRoundNumber; // 0x484(0x04)
	bool bLeftTeamAttack; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
};

// Class TslGameMode.BombObserverWorldMapStatusBoardWidget
// Size: 0x548 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverWorldMapStatusBoardWidget : UUmgBaseWidget {
	struct UTextBlock* TextRemainTime; // 0x420(0x08)
	struct UImage* ImageLeftTeamBg; // 0x428(0x08)
	struct UTextBlock* TextLeftTeamName; // 0x430(0x08)
	struct UTextBlock* TextLeftTeamScore; // 0x438(0x08)
	struct UImage* ImageRightTeamBg; // 0x440(0x08)
	struct UTextBlock* TextRightTeamName; // 0x448(0x08)
	struct UTextBlock* TextRightTeamScore; // 0x450(0x08)
	struct UPanelWidget* PanelRoundEntryGroup; // 0x458(0x08)
	struct U*7fa8406bd3* AnimInit; // 0x460(0x08)
	struct U*7fa8406bd3* AnimBombPlantedStart; // 0x468(0x08)
	struct U*7fa8406bd3* AnimBombPlantedEnd; // 0x470(0x08)
	struct UClass* GameLogicClass; // 0x478(0x08)
	struct FBombObserverWorldMapStatusBoardUISettings UISettings; // 0x480(0x48)
	struct FBombObserverWorldMapStatusBoardUIData CachedUIData; // 0x4c8(0x60)
	struct UBombObserverWorldMapStatusBoardWidgetLogic* GameLogic; // 0x528(0x08)
	struct TArray<struct UBombObserverWorldMapStatusBoardRoundEntryWidget*> RoundEntryWidgetPool; // 0x530(0x10)
	char pad_540[0x8]; // 0x540(0x08)
};

// Class TslGameMode.BombObserverWorldMapStatusBoardWidgetLogic
// Size: 0xa0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBombObserverWorldMapStatusBoardWidgetLogic : UObject {
	char pad_30[0x70]; // 0x30(0x70)
};

// Class TslGameMode.*309b05e626
// Size: 0xa8 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct U*309b05e626 : UBombObserverWorldMapStatusBoardWidgetLogic {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class TslGameMode.*e12efa8580
// Size: 0x148 (Inherited: 0x148)  [layout: KHOP]
struct U*e12efa8580 : UTslObservingCharacterIconMapLayer {
};

// Class TslGameMode.*6be0c51ed1
// Size: 0x3a0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*6be0c51ed1 : U*481d3a4609 {
	bool *1f3bec8e18; // 0x330(0x01)
	bool *f4c984d875; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct FName *48c5258a91; // 0x338(0x08)
	struct FBombGameAreaDesc BombGameAreaDesc; // 0x340(0x20)
	float DeathCamToSpectatingTime; // 0x360(0x04)
	char pad_364[0x3c]; // 0x364(0x3c)

	void *04eb677161(); // Function TslGameMode.*6be0c51ed1.*04eb677161 //  // @ game+0xe1b146c
	void *9bf36b2a65(); // Function TslGameMode.*6be0c51ed1.*9bf36b2a65 //  // @ game+0xe199030
	void *3117615074(); // Function TslGameMode.*6be0c51ed1.*3117615074 //  // @ game+0xe195f2c
	void *dbf82eb91a(); // Function TslGameMode.*6be0c51ed1.*dbf82eb91a //  // @ game+0xe1a914c
	void *322da28ee8(); // Function TslGameMode.*6be0c51ed1.*322da28ee8 //  // @ game+0xe194c5c
	void *7cee13659f(); // Function TslGameMode.*6be0c51ed1.*7cee13659f //  // @ game+0xe194990
	void *af6b2ae759(); // Function TslGameMode.*6be0c51ed1.*af6b2ae759 //  // @ game+0xe1a9078
	void *56815af56d(); // Function TslGameMode.*6be0c51ed1.*56815af56d //  // @ game+0xe1a8f3c
	void *1732cec7af(); // Function TslGameMode.*6be0c51ed1.*1732cec7af //  // @ game+0xe19fb44
	void *16df781bd9(); // Function TslGameMode.*6be0c51ed1.*16df781bd9 //  // @ game+0xe194a10
	void *d38898f8f3(); // Function TslGameMode.*6be0c51ed1.*d38898f8f3 //  // @ game+0xe1a8cd4
	void *29f005fdee(); // Function TslGameMode.*6be0c51ed1.*29f005fdee //  // @ game+0xe1a8fdc
	void *217dac861b(); // Function TslGameMode.*6be0c51ed1.*217dac861b //  // @ game+0xe194d9c
	void *17cec70738(); // Function TslGameMode.*6be0c51ed1.*17cec70738 //  // @ game+0xe1a3700
	void *f34904677a(); // Function TslGameMode.*6be0c51ed1.*f34904677a //  // @ game+0xe194cdc
	void *06598b30b0(); // Function TslGameMode.*6be0c51ed1.*06598b30b0 //  // @ game+0xe194834
	void *d794eeff59(); // Function TslGameMode.*6be0c51ed1.*d794eeff59 //  // @ game+0xe1948b4
	void *e4e7d05ec0(); // Function TslGameMode.*6be0c51ed1.*e4e7d05ec0 //  // @ game+0xe1a3714
	void *25001c59e1(); // Function TslGameMode.*6be0c51ed1.*25001c59e1 //  // @ game+0xe1a8c2c
	void *6ca4e44890(); // Function TslGameMode.*6be0c51ed1.*6ca4e44890 //  // @ game+0xe1995ac
	void *434730b224(); // Function TslGameMode.*6be0c51ed1.*434730b224 //  // @ game+0xe194bdc
};

// Class TslGameMode.BombPlayerStart
// Size: 0x478 (Inherited: 0x460)  [layout: KHOP]
struct ABombPlayerStart : ATslPlayerStart {
	struct FBombPlayerStartData *47a7e7b106; // 0x460(0x18)
};

// Class TslGameMode.*19fda59c73
// Size: 0x390 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*19fda59c73 : U*13a763f8f8 {
	struct FBombGameAreaDesc *860461dd16; // 0x2d0(0x20)
	enum class EBombTeamStateInfoType *98230e031c; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct F*03b3295aa0 *1b80af2b94; // 0x2f4(0x08) rep=OnRep_Coin
	int32 KillCount; // 0x2fc(0x04) rep=OnRep_KillCount
	int32 DeathCount; // 0x300(0x04) rep=OnRep_DeathCount
	int32 AssistCount; // 0x304(0x04) rep=OnRep_AssistCount
	int32 *12e51ec1ba; // 0x308(0x04) rep=OnRep_BombInstallCount
	int32 *a99a3771d3; // 0x30c(0x04) rep=OnRep_BombDefuseCount
	char pad_310[0x80]; // 0x310(0x80)

	void *a71fae7fc8(); // Function TslGameMode.*19fda59c73.*a71fae7fc8 //  // @ game+0xe19501c
	void OnRep_BombDefuseCount(); // Function TslGameMode.*19fda59c73.OnRep_BombDefuseCount //  // @ game+0xe19ec94
	void OnRep_AssistCount(); // Function TslGameMode.*19fda59c73.OnRep_AssistCount //  // @ game+0xe19ec94
	void OnRep_Coin(); // Function TslGameMode.*19fda59c73.OnRep_Coin //  // @ game+0xe19eed0
	void OnRep_DeathCount(); // Function TslGameMode.*19fda59c73.OnRep_DeathCount //  // @ game+0xe19ec94
	void OnRep_BombInstallCount(); // Function TslGameMode.*19fda59c73.OnRep_BombInstallCount //  // @ game+0xe19ec94
	void *8844506708(); // Function TslGameMode.*19fda59c73.*8844506708 //  // @ game+0xe1a93bc
	void OnRep_KillCount(); // Function TslGameMode.*19fda59c73.OnRep_KillCount //  // @ game+0xe19ec94
};

// Class TslGameMode.BombRoundResultEffectWidget
// Size: 0x680 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombRoundResultEffectWidget : UTslUserWidget {
	char pad_330[0xe0]; // 0x330(0xe0)
	struct UTextBlock* TextConditionTypeBind; // 0x410(0x08)
	struct UTslUserPlatformImageWidget* WidgetConditionUserPlatformImageBind; // 0x418(0x08)
	struct UWidget* PanelConditionMessageBind; // 0x420(0x08)
	struct UTextBlock* TextConditionMessageBind; // 0x428(0x08)
	struct U*7fa8406bd3* AnimConditionAttackEffectBind; // 0x430(0x08)
	struct U*7fa8406bd3* AnimConditionDefenceEffectBind; // 0x438(0x08)
	struct UTextBlock* TextResultRoundBind; // 0x440(0x08)
	struct UTextBlock* TextResultMyWinNumBind; // 0x448(0x08)
	struct UTextBlock* TextResultMyIncreaseNumBind; // 0x450(0x08)
	struct UTextBlock* TextMyTeamName; // 0x458(0x08)
	struct UWidgetSwitcher* SwitcherResultMyStatusBind; // 0x460(0x08)
	struct UTextBlock* TextResultEnemyWinNumBind; // 0x468(0x08)
	struct UTextBlock* TextResultEnemyIncreaseNumBind; // 0x470(0x08)
	struct UTextBlock* TextEnemyTeamName; // 0x478(0x08)
	struct UTextBlock* TextResultMessageBind; // 0x480(0x08)
	struct UWidgetSwitcher* SwitcherResultEnemyStatusBind; // 0x488(0x08)
	struct UTextBlock* TextObserverModeTeamName; // 0x490(0x08)
	struct U*7fa8406bd3* AnimResultMyTeamWinEffectBind; // 0x498(0x08)
	struct U*7fa8406bd3* AnimResultEnemyTeamWinEffectBind; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimResultObserverLeftWinEffectBind; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimResultObserverRightWinEffectBind; // 0x4b0(0x08)
	struct FText RoundText; // 0x4b8(0x18)
	struct FText OverTimeRoundText; // 0x4d0(0x18)
	struct FSlateColor ObserverModeAttackTeamNameColor; // 0x4e8(0x28)
	struct FSlateColor ObserverModeDefenceTeamNameColor; // 0x510(0x28)
	struct FText MyTeamText; // 0x538(0x18)
	struct FText EnenmyTeamText; // 0x550(0x18)
	struct FText ObserverLeftTeamText; // 0x568(0x18)
	struct FText ObserverRightTeamText; // 0x580(0x18)
	struct FText ConditionTypeExcellentText; // 0x598(0x18)
	struct FText ConditionTypeImpressiveText; // 0x5b0(0x18)
	struct FText ConditionTypeOverwhelmingText; // 0x5c8(0x18)
	struct FText ConditionTypePerfectText; // 0x5e0(0x18)
	struct FText ConditionTypeThriftyText; // 0x5f8(0x18)
	struct FBombRoundResultEffectData RoundResultEffectData; // 0x610(0x60)
	char pad_670[0x10]; // 0x670(0x10)

	void OnResultConditionEffectAnimationFinished(); // Function TslGameMode.BombRoundResultEffectWidget.OnResultConditionEffectAnimationFinished //  // @ game+0xe1a02a4
	void OnResultInfoEffectAnimationFinished(); // Function TslGameMode.BombRoundResultEffectWidget.OnResultInfoEffectAnimationFinished //  // @ game+0xe19ac3c
};

// Class TslGameMode.BombScoreBoardPlayerWidget
// Size: 0x470 (Inherited: 0x330)  [layout: KHOP]
struct UBombScoreBoardPlayerWidget : UTslUserWidget {
	bool bIsMyCharacter; // 0x330(0x01)
	bool bIsShowCoin; // 0x331(0x01)
	enum class EBombUIPlayerStatusType PlayerType; // 0x332(0x01)
	enum class EBombUITeamStatusType TeamType; // 0x333(0x01)
	struct FLinearColor Attack_AliveColor_BG; // 0x334(0x10)
	struct FLinearColor Attack_AliveColor_LightBG; // 0x344(0x10)
	struct FLinearColor Attack_AliveColor_Bar; // 0x354(0x10)
	struct FLinearColor Defence_AliveColor_BG; // 0x364(0x10)
	struct FLinearColor Defence_AliveColor_LightBG; // 0x374(0x10)
	struct FLinearColor Defence_AliveColor_Bar; // 0x384(0x10)
	struct FLinearColor AliveColor_Text; // 0x394(0x10)
	struct FLinearColor AliveColor_MyCharacterText; // 0x3a4(0x10)
	struct FLinearColor NoneColor_BG; // 0x3b4(0x10)
	struct FLinearColor NoneColor_Bar; // 0x3c4(0x10)
	struct FLinearColor DieColor_BG; // 0x3d4(0x10)
	struct FLinearColor DieColor_DieLightBG; // 0x3e4(0x10)
	struct FLinearColor DieColor_Bar; // 0x3f4(0x10)
	struct FLinearColor DieColor_PlatformIcon; // 0x404(0x10)
	struct FLinearColor DieColor_Text; // 0x414(0x10)
	char pad_424[0x4]; // 0x424(0x04)
	struct UImage* BG_Image; // 0x428(0x08)
	struct UImage* LightBG_Image; // 0x430(0x08)
	struct UImage* Bar_Image; // 0x438(0x08)
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x440(0x08)
	struct UTextBlock* PlayerName_Text; // 0x448(0x08)
	struct UTextBlock* Kill_Text; // 0x450(0x08)
	struct UTextBlock* Assist_Text; // 0x458(0x08)
	struct UTextBlock* Death_Text; // 0x460(0x08)
	struct UTextBlock* Coin_text; // 0x468(0x08)
};

// Class TslGameMode.BombScoreBoardTeamWidget
// Size: 0x458 (Inherited: 0x330)  [layout: KHOP]
struct UBombScoreBoardTeamWidget : UTslUserWidget {
	enum class EBombUITeamStatusType TeamType; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FText TeamName; // 0x338(0x18)
	int32 Score; // 0x350(0x04)
	int32 Mission; // 0x354(0x04)
	int32 TotalKill; // 0x358(0x04)
	bool bIsLeft; // 0x35c(0x01)
	enum class EBombUIMatchResultType MatchResultType; // 0x35d(0x01)
	char pad_35E[0x2]; // 0x35e(0x02)
	struct FLinearColor Victory_Color_TopLight; // 0x360(0x10)
	struct FLinearColor Defeat_Color_TopLight; // 0x370(0x10)
	struct FLinearColor None_Color_TopLight; // 0x380(0x10)
	struct FLinearColor None_Color_ScoreBG; // 0x390(0x10)
	struct FLinearColor Attack_Color_TopLight; // 0x3a0(0x10)
	struct FLinearColor Attack_Color_ScoreBG; // 0x3b0(0x10)
	struct FLinearColor Defence_Color_TopLight; // 0x3c0(0x10)
	struct FLinearColor Defence_Color_ScoreBG; // 0x3d0(0x10)
	bool bVisibleTwinkleBg; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UWrapBox* PlayerList_WrapBox; // 0x3e8(0x08)
	struct UImage* TopLight_Image; // 0x3f0(0x08)
	struct UImage* ScoreBG_Image; // 0x3f8(0x08)
	struct UImage* ScoreBG_T_Image; // 0x400(0x08)
	struct UImage* ScoreBG_B_Image; // 0x408(0x08)
	struct UTextBlock* Team_Text; // 0x410(0x08)
	struct UTextBlock* Score_Text; // 0x418(0x08)
	struct UTextBlock* Mission_Text; // 0x420(0x08)
	struct UTextBlock* TotalKill_Text; // 0x428(0x08)
	struct UImage* TitleRow_Coin_Image; // 0x430(0x08)
	struct UImage* ImageScoreTwinkleBgBind; // 0x438(0x08)
	struct U*7fa8406bd3* ScoreBoardTeam_Anim; // 0x440(0x08)
	struct TArray<struct UBombScoreBoardPlayerWidget*> PlayerWidgets; // 0x448(0x10)
};

// Class TslGameMode.BombScoreBoardWidget
// Size: 0x688 (Inherited: 0x608)  [layout: LECH - offset chi la uoc luong]
struct UBombScoreBoardWidget : UTslNewWorldMapWidget {
	int32 Round; // 0x608(0x04)
	bool bIsMyTeamAttack; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	struct FLinearColor Attack_Color_Round; // 0x610(0x10)
	struct FLinearColor Defence_Color_Round; // 0x620(0x10)
	struct UBombScoreBoardTeamWidget* ScoreBoard_Own; // 0x630(0x08)
	struct UBombScoreBoardTeamWidget* ScoreBoard_Rival; // 0x638(0x08)
	struct UMapGridWidget* MapGridWidget; // 0x640(0x08)
	struct UImage* RoundTitleBGLeft_Image; // 0x648(0x08)
	struct UImage* RoundTitleBGRight_Image; // 0x650(0x08)
	struct UTextBlock* RoundCount_Text; // 0x658(0x08)
	struct U*7fa8406bd3* ScoreBoard_Anim; // 0x660(0x08)
	struct U*4012e45583* CachedBombGSC; // 0x668(0x08)
	struct ATslHUD* CachedHUD; // 0x670(0x08)
	char pad_678[0x10]; // 0x678(0x10)
};

// Class TslGameMode.BombStartEffectWidget
// Size: 0x430 (Inherited: 0x330)  [layout: KHOP]
struct UBombStartEffectWidget : UTslUserWidget {
	char pad_330[0x70]; // 0x330(0x70)
	struct FBombStartEffectWidgetSettingValues SettingValue; // 0x3a0(0x60)
	char pad_400[0x8]; // 0x400(0x08)
	struct UTextBlock* BW_Text_Round; // 0x408(0x08)
	struct UImage* BW_Image_RoundBG; // 0x410(0x08)
	struct U*7fa8406bd3* BW_Anim_Attack; // 0x418(0x08)
	struct U*7fa8406bd3* BW_Anim_Defence; // 0x420(0x08)
	struct U*7fa8406bd3* BW_Anim_Round; // 0x428(0x08)

	void OnEffectAnimationFinished(); // Function TslGameMode.BombStartEffectWidget.OnEffectAnimationFinished //  // @ game+0xe19ac3c
};

// Class TslGameMode.BombStatusBoardPlayerWidget
// Size: 0x3e8 (Inherited: 0x330)  [layout: KHOP]
struct UBombStatusBoardPlayerWidget : UTslUserWidget {
	enum class EBombUITeamStatusType TeamType; // 0x330(0x01)
	enum class EBombUIPlayerStatusType PlayerType; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TMap<enum class EBombUITeamStatusType, struct FLinearColor> TypeColor; // 0x338(0x50)
	struct TMap<enum class EBombUIPlayerStatusType, struct FBombUIPlayerStatusDesign> IconDesign; // 0x388(0x50)
	struct UBorder* PlayerBorder; // 0x3d8(0x08)
	struct UImage* PlayerIcon; // 0x3e0(0x08)
};

// Class TslGameMode.BombStatusBoardTeamWidget
// Size: 0x388 (Inherited: 0x330)  [layout: KHOP]
struct UBombStatusBoardTeamWidget : UTslUserWidget {
	bool IsMyTeam; // 0x330(0x01)
	enum class EBombUITeamStatusType TeamType; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct UTexture2D* AttackBgTexture; // 0x338(0x08)
	struct UTexture2D* DefenceBgTexture; // 0x340(0x08)
	char pad_348[0x18]; // 0x348(0x18)
	struct UHorizontalBox* ParentBox; // 0x360(0x08)
	struct USizeBox* TeamTypeBox; // 0x368(0x08)
	struct UHorizontalBox* PlayerBox; // 0x370(0x08)
	struct UImage* BgImage; // 0x378(0x08)
	struct UTextBlock* ScoreTextBlock; // 0x380(0x08)
};

// Class TslGameMode.BombStatusBoardWidget
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombStatusBoardWidget : UTslUserWidget {
	struct UBombStatusBoardTeamWidget* StatusBoardOwnBind; // 0x330(0x08)
	struct UBombStatusBoardTeamWidget* StatusBoardRivalBind; // 0x338(0x08)
	struct UTslRoundCountWidget* RoundCountBind; // 0x340(0x08)
	struct UTslRoundTimeWidget* RoundTimeBind; // 0x348(0x08)
	struct UBombTimerWidget* BombTimerBind; // 0x350(0x08)
	struct U*7fa8406bd3* AnimBombAttackBind; // 0x358(0x08)
	struct U*7fa8406bd3* AnimBombDefenceBind; // 0x360(0x08)
	struct U*7fa8406bd3* AnimTimerResetBind; // 0x368(0x08)
	char pad_370[0x10]; // 0x370(0x10)
};

// Class TslGameMode.BombStoreEquipEntryWidget
// Size: 0x3f0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombStoreEquipEntryWidget : UTslUserWidget {
	int32 SlotOrder; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UTextBlock* NumText; // 0x338(0x08)
	struct UTextBlock* DefenseTextBlock; // 0x340(0x08)
	struct UOverlay* DefensiveIconBlock; // 0x348(0x08)
	struct UImage* Icon; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
	struct FTslAssetLoader IconLoader; // 0x360(0x80)
	struct UTexture2D* BaseIconTexture; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)

	void OnIconLoaded(); // Function TslGameMode.BombStoreEquipEntryWidget.OnIconLoaded //  // @ game+0xe19bc54
};

// Class TslGameMode.BombStoreEquipListWidget
// Size: 0x360 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreEquipListWidget : UTslUserWidget {
	struct UClass* ItemEntryClass; // 0x330(0x08)
	struct UTexture2D* BaseHelmetIcon; // 0x338(0x08)
	struct UTexture2D* BaseVestIcon; // 0x340(0x08)
	struct TArray<struct UBombStoreEquipEntryWidget*> EntryPool; // 0x348(0x10)
	struct UWrapBox* ContainerBox; // 0x358(0x08)
};

// Class TslGameMode.BombStoreEquipWeaponEntry
// Size: 0x5b0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombStoreEquipWeaponEntry : UTslUserWidget {
	int32 Index; // 0x330(0x04)
	char pad_334[0xc]; // 0x334(0x0c)
	struct FTslAssetLoader RTAssetLoader; // 0x340(0x80)
	struct FTslAssetLoader RTConsoleAssetLoader; // 0x3c0(0x80)
	struct UClass* ItemStudioClass; // 0x440(0x08)
	struct TArray<struct UImage*> AttatchImages; // 0x448(0x10)
	struct UMaterialInstanceDynamic* WeaponCaptureMaterial; // 0x458(0x08)
	struct UTextBlock* IndexTextBlock; // 0x460(0x08)
	struct UTextBlock* NameTextBlock; // 0x468(0x08)
	struct UImage* WeaponCaptureImage; // 0x470(0x08)
	bool bShowAmmoInfo; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UTextBlock* AmmoLoadedTextBlock; // 0x480(0x08)
	struct UTextBlock* AmmoUnLoadedTextBlock; // 0x488(0x08)
	struct UTextBlock* AmmoNameTextBlock; // 0x490(0x08)
	struct UImage* AmmoImage; // 0x498(0x08)
	struct UWrapBox* AttatchBox; // 0x4a0(0x08)
	struct UTextureRenderTarget2D* LoadedRenderTargetTexture; // 0x4a8(0x08)
	struct FTslAssetLoader AmmoIconLoader; // 0x4b0(0x80)
	struct FTslMultiAssetLoader AttachmentIconsLoader; // 0x530(0x70)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	void OnAmmoIconLoaded(); // Function TslGameMode.BombStoreEquipWeaponEntry.OnAmmoIconLoaded //  // @ game+0xe196f74
	void OnSpawnActorInSceneCaptureWorld(); // Function TslGameMode.BombStoreEquipWeaponEntry.OnSpawnActorInSceneCaptureWorld //  // @ game+0xe1a1744
	void OnRenderTextureLoadFinished(); // Function TslGameMode.BombStoreEquipWeaponEntry.OnRenderTextureLoadFinished //  // @ game+0xe19ebe4
	void OnAttachmentIconsLoaded(); // Function TslGameMode.BombStoreEquipWeaponEntry.OnAttachmentIconsLoaded //  // @ game+0xe19743c
	void DestroyItemStudio(); // Function TslGameMode.BombStoreEquipWeaponEntry.DestroyItemStudio //  // @ game+0xe195008
};

// Class TslGameMode.BombStoreEquipWeaponList
// Size: 0x388 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreEquipWeaponList : UTslUserWidget {
	struct TMap<int32, struct UBombStoreEquipWeaponEntry*> SlotMap; // 0x330(0x50)
	struct UGridPanel* ContainerBox; // 0x380(0x08)
};

// Class TslGameMode.BombStoreItemEntryWidget
// Size: 0x510 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreItemEntryWidget : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
	struct FBombUIStateColor NameColor; // 0x350(0x50)
	struct FBombUIStateColor PriceColor; // 0x3a0(0x50)
	char pad_3F0[0x18]; // 0x3f0(0x18)
	struct UTslFlowingTextWidget* NameTextBlock; // 0x408(0x08)
	struct UTextBlock* PriceTextBlock; // 0x410(0x08)
	struct UTextBlock* TagText; // 0x418(0x08)
	struct UImage* IconImage; // 0x420(0x08)
	struct UImage* CoinImage; // 0x428(0x08)
	struct UImage* BgImage; // 0x430(0x08)
	struct UImage* HoverLineImage; // 0x438(0x08)
	struct UImage* DisabledImage; // 0x440(0x08)
	struct UImage* ConsoleImage; // 0x448(0x08)
	struct UBorder* OwnedBox; // 0x450(0x08)
	struct UButton* ItemButton; // 0x458(0x08)
	struct FTslAssetLoader IconLoader; // 0x460(0x80)
	struct FText TagText_Owned; // 0x4e0(0x18)
	struct FText TagText_Full; // 0x4f8(0x18)

	void HandleOnClick(); // Function TslGameMode.BombStoreItemEntryWidget.HandleOnClick //  // @ game+0xe1953d4
	void OnIconLoaded(); // Function TslGameMode.BombStoreItemEntryWidget.OnIconLoaded //  // @ game+0xe19bc68
	void HandleOnUnHover(); // Function TslGameMode.BombStoreItemEntryWidget.HandleOnUnHover //  // @ game+0xe1957b0
	void HandleOnHover(); // Function TslGameMode.BombStoreItemEntryWidget.HandleOnHover //  // @ game+0xe195600
};

// Class TslGameMode.BombStoreItemListWidget
// Size: 0x380 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreItemListWidget : UTslUserWidget {
	char pad_330[0x28]; // 0x330(0x28)
	struct UClass* ItemEntryClass; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)
	struct TArray<struct UBombStoreItemEntryWidget*> EntryPool; // 0x368(0x10)
	struct UWrapBox* ContainerBox; // 0x378(0x08)

	void HandleOnClick(); // Function TslGameMode.BombStoreItemListWidget.HandleOnClick //  // @ game+0xe1953e8
	void HandleOnHover(); // Function TslGameMode.BombStoreItemListWidget.HandleOnHover //  // @ game+0xe195614
};

// Class TslGameMode.BombStorePlayerEntryWidget
// Size: 0x448 (Inherited: 0x330)  [layout: KHOP]
struct UBombStorePlayerEntryWidget : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
	struct FSlateColor OwnColor; // 0x350(0x28)
	struct FSlateColor NormalColor; // 0x378(0x28)
	struct TArray<struct UImage*> EquipImages; // 0x3a0(0x10)
	struct TArray<struct UTexture2D*> EquipTextures; // 0x3b0(0x10)
	char pad_3C0[0x28]; // 0x3c0(0x28)
	struct UTextBlock* NumberTextBlock; // 0x3e8(0x08)
	struct UBorder* PlayerColorBorder; // 0x3f0(0x08)
	struct UTextBlock* PlayerNameText; // 0x3f8(0x08)
	struct UWidgetSwitcher* DonationSwitcher; // 0x400(0x08)
	struct UHorizontalBox* EquipBox; // 0x408(0x08)
	struct UTextBlock* DonationTextBlock; // 0x410(0x08)
	struct UBombCoinWidget* CoinCount; // 0x418(0x08)
	struct UTslCommonButton* DonationButton; // 0x420(0x08)
	struct UButton* RequestButton; // 0x428(0x08)
	struct UImage* ConsoleImage; // 0x430(0x08)
	struct UImage* OthersBg; // 0x438(0x08)
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x440(0x08)

	void HandleOnHoverDonation(); // Function TslGameMode.BombStorePlayerEntryWidget.HandleOnHoverDonation //  // @ game+0xe195788
	void HandleOnClickDonation(); // Function TslGameMode.BombStorePlayerEntryWidget.HandleOnClickDonation //  // @ game+0xe1954fc
	void HandleOnUnHoverRequestButton(); // Function TslGameMode.BombStorePlayerEntryWidget.HandleOnUnHoverRequestButton //  // @ game+0xe1957c4
	void HandleOnHoverRequestButton(); // Function TslGameMode.BombStorePlayerEntryWidget.HandleOnHoverRequestButton //  // @ game+0xe19579c
};

// Class TslGameMode.BombStorePlayerListWidget
// Size: 0x388 (Inherited: 0x330)  [layout: KHOP]
struct UBombStorePlayerListWidget : UTslUserWidget {
	char pad_330[0x40]; // 0x330(0x40)
	struct TArray<struct UBombStorePlayerEntryWidget*> PlayerWidgets; // 0x370(0x10)
	struct UVerticalBox* PlayerBox; // 0x380(0x08)

	void HandleOnClickDonation(); // Function TslGameMode.BombStorePlayerListWidget.HandleOnClickDonation //  // @ game+0xe195510
	void HandleOnHoverDonation(); // Function TslGameMode.BombStorePlayerListWidget.HandleOnHoverDonation //  // @ game+0xe195614
};

// Class TslGameMode.BombStoreTabBtnWidget
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UBombStoreTabBtnWidget : UTslUserWidget {
	char pad_330[0x10]; // 0x330(0x10)
	struct FText Label; // 0x340(0x18)
	int32 TabIndex; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UTslCommonButton* Button; // 0x360(0x08)
	struct UTextBlock* NameTextBlock; // 0x368(0x08)
	struct UBorder* TextBorder; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)

	void ClickTabHandler(); // Function TslGameMode.BombStoreTabBtnWidget.ClickTabHandler //  // @ game+0xe19391c
};

// Class TslGameMode.BombStoreTabsWidget
// Size: 0x3c0 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreTabsWidget : UTslUserWidget {
	char pad_330[0x30]; // 0x330(0x30)
	struct UBombStoreTabBtnWidget* LastTab; // 0x360(0x08)
	struct TMap<int32, struct UBombStoreTabBtnWidget*> TabMap; // 0x368(0x50)
	struct UHorizontalBox* TabBox; // 0x3b8(0x08)

	void HandleOnClickTab(); // Function TslGameMode.BombStoreTabsWidget.HandleOnClickTab //  // @ game+0xe195588
};

// Class TslGameMode.BombStoreTimerWidget
// Size: 0x350 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreTimerWidget : UTslUserWidget {
	struct UBombCoinWidget* CoinCount; // 0x330(0x08)
	struct UBombHUDRoundCountWidget* RoundCount; // 0x338(0x08)
	struct UTslRoundTimeWidget* RoundTime; // 0x340(0x08)
	struct UTextBlock* RoundTimeText; // 0x348(0x08)
};

// Class TslGameMode.BombStoreWeaponEntryWidget
// Size: 0x5c0 (Inherited: 0x330)  [layout: KHOP]
struct UBombStoreWeaponEntryWidget : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
	struct FBombUIStateColor NameColor; // 0x350(0x50)
	struct FBombUIStateColor PriceColor; // 0x3a0(0x50)
	struct FBombUIStateColor AmmoColor; // 0x3f0(0x50)
	char pad_440[0x10]; // 0x440(0x10)
	struct UTextBlock* NameTextBlock; // 0x450(0x08)
	struct UTextBlock* AmmoTextBlock; // 0x458(0x08)
	struct UTextBlock* AmmoMultipleSignTextBlock; // 0x460(0x08)
	struct UTextBlock* PriceTextBlock; // 0x468(0x08)
	struct UImage* IconImage; // 0x470(0x08)
	struct UImage* CoinImage; // 0x478(0x08)
	struct UImage* AmmoImage; // 0x480(0x08)
	struct UImage* BgImage; // 0x488(0x08)
	struct UImage* HoverLineImage; // 0x490(0x08)
	struct UImage* ConsoleImage; // 0x498(0x08)
	struct UImage* DisabledImage; // 0x4a0(0x08)
	struct UWidgetSwitcher* ScopeSwitcher; // 0x4a8(0x08)
	struct UBorder* OwnedBox; // 0x4b0(0x08)
	struct UButton* ItemButton; // 0x4b8(0x08)
	struct FTslAssetLoader IconLoader; // 0x4c0(0x80)
	struct FTslAssetLoader AmmoIconLoader; // 0x540(0x80)

	void HandleOnClick(); // Function TslGameMode.BombStoreWeaponEntryWidget.HandleOnClick //  // @ game+0xe195470
	void HandleOnUnHover(); // Function TslGameMode.BombStoreWeaponEntryWidget.HandleOnUnHover //  // @ game+0xe1957b0
	void HandleOnHover(); // Function TslGameMode.BombStoreWeaponEntryWidget.HandleOnHover //  // @ game+0xe1956b8
};

// Class TslGameMode.BombStoreWeaponListWidget
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UBombStoreWeaponListWidget : UUmgBaseWidget {
	char pad_420[0x28]; // 0x420(0x28)
	struct UClass* WeaponEntryClass; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)
	struct TArray<struct UBombStoreWeaponEntryWidget*> EntryPool; // 0x458(0x10)
	struct UWrapBox* ContainerBox; // 0x468(0x08)

	void HandleOnClick(); // Function TslGameMode.BombStoreWeaponListWidget.HandleOnClick //  // @ game+0xe195484
	void HandleOnHover(); // Function TslGameMode.BombStoreWeaponListWidget.HandleOnHover //  // @ game+0xe1956cc
};

// Class TslGameMode.BombStoreWidget
// Size: 0x600 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UBombStoreWidget : UBlockInputUserWidget {
	struct TArray<struct FText> ConsoleGuideTextLeft; // 0x470(0x10)
	struct TArray<struct FText> ConsoleGuideTextRequest; // 0x480(0x10)
	struct UBombStoreTimerWidget* StoreTimer; // 0x490(0x08)
	struct UBombStorePlayerListWidget* PlayerList; // 0x498(0x08)
	struct UBombStoreTabsWidget* Tabs; // 0x4a0(0x08)
	struct UBombStoreWeaponListWidget* WeaponList; // 0x4a8(0x08)
	struct UBombStoreItemListWidget* ItemList; // 0x4b0(0x08)
	struct UBombStoreEquipListWidget* EquipItemList; // 0x4b8(0x08)
	struct UBombStoreEquipWeaponList* EquipWeaponList; // 0x4c0(0x08)
	struct UTslGamepadMultipleKeyIconWidget* ConsoleGuideLeft; // 0x4c8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* DonationRequestConsoleGuide; // 0x4d0(0x08)
	char pad_4D8[0x128]; // 0x4d8(0x128)

	void OnPressedConsoleMoveRight(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleMoveRight //  // @ game+0xe19e790
	void OnPressedConsoleLB(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleLB //  // @ game+0xe19e740
	void OnBuyItemHandler(); // Function TslGameMode.BombStoreWidget.OnBuyItemHandler //  // @ game+0xe197a54
	void OnPressedConsoleMoveUp(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleMoveUp //  // @ game+0xe19e7a4
	void OnPressedConsoleB(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleB //  // @ game+0xe19e72c
	void OnPressedConsoleLT(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleLT //  // @ game+0xe19e754
	void OnPressedConsoleR3(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleR3 //  // @ game+0xe19e7b8
	void OnPressedConsoleMoveLeft(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleMoveLeft //  // @ game+0xe19e77c
	void OnPressedConsoleMoveDown(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleMoveDown //  // @ game+0xe19e768
	void OnPressedConsoleRT(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleRT //  // @ game+0xe19e7e0
	void OnDonationHandler(); // Function TslGameMode.BombStoreWidget.OnDonationHandler //  // @ game+0xe19aac4
	void OnPressedConsoleRB(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleRB //  // @ game+0xe19e7cc
	void OnPressedConsoleA(); // Function TslGameMode.BombStoreWidget.OnPressedConsoleA //  // @ game+0xe19e718
	void OnDonationRequestHandler(); // Function TslGameMode.BombStoreWidget.OnDonationRequestHandler //  // @ game+0xe19ab3c
	void UpdateTeammate(); // Function TslGameMode.BombStoreWidget.UpdateTeammate //  // @ game+0xe1b1480
	void OnSelectTabHandler(); // Function TslGameMode.BombStoreWidget.OnSelectTabHandler //  // @ game+0xe1a06cc
	void OnBuyWeaponHandler(); // Function TslGameMode.BombStoreWidget.OnBuyWeaponHandler //  // @ game+0xe197a54
};

// Class TslGameMode.BombTimerWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UBombTimerWidget : UTslUserWidget {
	struct UTextBlock* TextSecond; // 0x330(0x08)
	struct UTextBlock* TextMillisecond; // 0x338(0x08)
};

// Class TslGameMode.BombWeapon_BombModeKit
// Size: 0xb50 (Inherited: 0xb50)  [layout: KHOP]
struct ABombWeapon_BombModeKit : ATslWeapon_SoftRole {

	void OnApplyDBNOState(); // Function TslGameMode.BombWeapon_BombModeKit.OnApplyDBNOState //  // @ game+0xe19723c
};

// Class TslGameMode.BombWeapon_DefusingBombKit
// Size: 0xb60 (Inherited: 0xb50)  [layout: LECH - offset chi la uoc luong]
struct ABombWeapon_DefusingBombKit : ABombWeapon_BombModeKit {
	char pad_B50[0x10]; // 0xb50(0x10)

	void *d0fd629dcd(); // Function TslGameMode.BombWeapon_DefusingBombKit.*d0fd629dcd //  // @ game+0xe1a8e5c
	void *7992959105(); // Function TslGameMode.BombWeapon_DefusingBombKit.*7992959105 //  // @ game+0xe1a8ea8
};

// Class TslGameMode.BombWeapon_PlantedTimeBombKit
// Size: 0x11c0 (Inherited: 0x1160)  [layout: LECH - offset chi la uoc luong]
struct ABombWeapon_PlantedTimeBombKit : ATslWeapon_Plantable {
	float *e581c921c2; // 0x1158(0x04)
	float *ec42d36ccd; // 0x115c(0x04)
	float *1d968f9df7; // 0x1160(0x04)
	char pad_1164[0xc]; // 0x1164(0x0c)
	struct FTransform *61a4cd5167; // 0x1170(0x30)
	char pad_11A0[0x20]; // 0x11a0(0x20)

	void *292b6d7383(); // Function TslGameMode.BombWeapon_PlantedTimeBombKit.*292b6d7383 //  // @ game+0xe1a3a34
};

// Class TslGameMode.BRTwoTeamScoreboardWidget
// Size: 0x520 (Inherited: 0x508)  [layout: LECH - offset chi la uoc luong]
struct UBRTwoTeamScoreboardWidget : UTwoTeamScoreboardWidget {
	char pad_508[0x18]; // 0x508(0x18)
};

// Class TslGameMode.BTService_CanDash_SLB
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UBTService_CanDash_SLB : UBTService {
	float *486823cd42; // 0x88(0x04)
	float *ec97a46849; // 0x8c(0x04)
	float *d0e61b19e0; // 0x90(0x04)
	float *b72e2b814c; // 0x94(0x04)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class TslGameMode.*340cb1dc11
// Size: 0x100 (Inherited: 0x88)  [layout: KHOP]
struct U*340cb1dc11 : UBTService {
	struct FBlackboardKeySelector *3721667f28; // 0x88(0x28)
	struct FBlackboardKeySelector *5c63fb8409; // 0xb0(0x28)
	struct FBlackboardKeySelector *32ab8ff5a0; // 0xd8(0x28)
};

// Class TslGameMode.*18b3106bb2
// Size: 0xb8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*18b3106bb2 : UBTService {
	struct FBlackboardKeySelector *227c688542; // 0x88(0x28)
	float Radius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class TslGameMode.BTService_GetLocationToPatrol_SLB
// Size: 0xd8 (Inherited: 0x88)  [layout: KHOP]
struct UBTService_GetLocationToPatrol_SLB : UBTService {
	struct FBlackboardKeySelector *afa2368d3d; // 0x88(0x28)
	struct FBlackboardKeySelector *e99f12c2fd; // 0xb0(0x28)
};

// Class TslGameMode.*b9d1aa5821
// Size: 0x100 (Inherited: 0x88)  [layout: KHOP]
struct U*b9d1aa5821 : UBTService {
	struct FBlackboardKeySelector *b1a3ca7c11; // 0x88(0x28)
	struct FBlackboardKeySelector *c843b44065; // 0xb0(0x28)
	struct FBlackboardKeySelector *ccbf0b9af9; // 0xd8(0x28)
};

// Class TslGameMode.BTService_GetZombieState_SLB
// Size: 0x1f0 (Inherited: 0x88)  [layout: KHOP]
struct UBTService_GetZombieState_SLB : UBTService {
	struct FBlackboardKeySelector *b1a3ca7c11; // 0x88(0x28)
	struct FBlackboardKeySelector *c843b44065; // 0xb0(0x28)
	struct FBlackboardKeySelector *ccbf0b9af9; // 0xd8(0x28)
	struct FBlackboardKeySelector *658cc318c4; // 0x100(0x28)
	struct FBlackboardKeySelector *accee8340d; // 0x128(0x28)
	struct FBlackboardKeySelector *c1ab3dc332; // 0x150(0x28)
	struct FBlackboardKeySelector *f576943b66; // 0x178(0x28)
	struct FBlackboardKeySelector *afa2368d3d; // 0x1a0(0x28)
	struct FBlackboardKeySelector *cd129c613d; // 0x1c8(0x28)
};

// Class TslGameMode.BTService_RunnerBB_SLB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTService_RunnerBB_SLB : UBTService {
};

// Class TslGameMode.*bfb7484a26
// Size: 0xd8 (Inherited: 0x88)  [layout: KHOP]
struct U*bfb7484a26 : UBTService {
	struct FBlackboardKeySelector *853441d915; // 0x88(0x28)
	struct FBlackboardKeySelector *b1a3ca7c11; // 0xb0(0x28)
};

// Class TslGameMode.TslSLBMissionGeneratorActor
// Size: 0x958 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBMissionGeneratorActor : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	bool bEssentialActor; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	int32 MaxInteractionCount; // 0x414(0x04)
	struct F*7ebf0c1e1e FuelCastConfig; // 0x418(0x230)
	struct F*7ebf0c1e1e ActivateCastConfig; // 0x648(0x230)
	struct TArray<float> SpeedModifier; // 0x878(0x10)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x888(0x08)
	struct UAnimSequence* OffAnim; // 0x890(0x08)
	struct UAnimSequence* TryAnim; // 0x898(0x08)
	struct UAnimSequence* OnAnim; // 0x8a0(0x08)
	struct U*1ab043e4b9* InteractionComp; // 0x8a8(0x08)
	struct USceneComponent* ActivatingEffectComp; // 0x8b0(0x08)
	struct USceneComponent* BreakdownEffectComp; // 0x8b8(0x08)
	struct USceneComponent* ActivatedEffectComp; // 0x8c0(0x08)
	struct U*5b93e10c3e* OwnerOutlineComp; // 0x8c8(0x08)
	struct UClass* BreakdownParticleClass; // 0x8d0(0x08)
	struct UClass* ActivatingParticleClass; // 0x8d8(0x08)
	struct UClass* ActivatedParticleClass; // 0x8e0(0x08)
	struct UAkComponent* AkComponent; // 0x8e8(0x08)
	struct FVector SoundOffset; // 0x8f0(0x0c)
	char pad_8FC[0x4]; // 0x8fc(0x04)
	struct UAkAudioEvent* ActivatingStart; // 0x900(0x08)
	struct UAkAudioEvent* ActivatingLoop; // 0x908(0x08)
	struct UAkAudioEvent* ActivatingLoopEnd; // 0x910(0x08)
	struct UAkAudioEvent* ActivatingFail; // 0x918(0x08)
	struct UAkAudioEvent* ActivatedLoop; // 0x920(0x08)
	enum class ETslSLBGeneratorState *24d45ba857; // 0x928(0x01) rep=OnRep_GeneratorState
	char pad_929[0x7]; // 0x929(0x07)
	struct TArray<struct ATslCharacter*> *e2926a8ae6; // 0x930(0x10)
	float *3cd596c9d3; // 0x940(0x04)
	char pad_944[0x4]; // 0x944(0x04)
	struct ATslParticle* *48334d6b37; // 0x948(0x08)
	char pad_950[0x8]; // 0x950(0x08)

	void OnRep_GeneratorState(); // Function TslGameMode.TslSLBMissionGeneratorActor.OnRep_GeneratorState //  // @ game+0xe19f0ec
	void OnServerStartInteract(); // Function TslGameMode.TslSLBMissionGeneratorActor.OnServerStartInteract //  // @ game+0xe1a0d7c
	void OnServerInteractionSucceed(); // Function TslGameMode.TslSLBMissionGeneratorActor.OnServerInteractionSucceed //  // @ game+0xe1a0d00
	void OnServerCancelInteract(); // Function TslGameMode.TslSLBMissionGeneratorActor.OnServerCancelInteract //  // @ game+0xe1a0a04
	void *8c25aea5f6(); // Function TslGameMode.TslSLBMissionGeneratorActor.*8c25aea5f6 //  // @ game+0xe192d68
	void OnServerInteractionFailed(); // Function TslGameMode.TslSLBMissionGeneratorActor.OnServerInteractionFailed //  // @ game+0xe1a0b10
};

// Class TslGameMode.*1ab043e4b9
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct U*1ab043e4b9 : UInteractionComponent {
	struct UPrimitiveComponent* *522e88278e; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class TslGameMode.TslSLBStageController
// Size: 0x420 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBStageController : AActor {
	struct FTslSLBStageID StageID; // 0x400(0x02)
	char pad_402[0x6]; // 0x402(0x06)
	struct USLBModeFeature* SLBModeFeature; // 0x408(0x08)
	struct UWorld* World; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)

	void OnServer_ChangeGeneratorState(); // Function TslGameMode.TslSLBStageController.OnServer_ChangeGeneratorState //  // @ game+0x43bab4
	void *b778c9635e(); // Function TslGameMode.TslSLBStageController.*b778c9635e //  // @ game+0xe1a6114
	void OnServer_SpawnZombieEvent(); // Function TslGameMode.TslSLBStageController.OnServer_SpawnZombieEvent //  // @ game+0x43bab4
	void *4382e46966(); // Function TslGameMode.TslSLBStageController.*4382e46966 //  // @ game+0xe1a0df8
	void OnServer_SpawnZombieEventStart(); // Function TslGameMode.TslSLBStageController.OnServer_SpawnZombieEventStart //  // @ game+0x43bab4
	void OnServer_AllGeneratorActivate(); // Function TslGameMode.TslSLBStageController.OnServer_AllGeneratorActivate //  // @ game+0x43bab4
	void *fe24a25c10(); // Function TslGameMode.TslSLBStageController.*fe24a25c10 //  // @ game+0xe1926b8
	void *f4b7b6a4b8(); // Function TslGameMode.TslSLBStageController.*f4b7b6a4b8 //  // @ game+0xe1ab09c
	void OnServer_TriggerEvent(); // Function TslGameMode.TslSLBStageController.OnServer_TriggerEvent //  // @ game+0x43bab4
	void StartStage(); // Function TslGameMode.TslSLBStageController.StartStage //  // @ game+0x100d054
	void EndStage(); // Function TslGameMode.TslSLBStageController.EndStage //  // @ game+0xdac1ed4
	void OnServer_SpawnZombieEventEnd(); // Function TslGameMode.TslSLBStageController.OnServer_SpawnZombieEventEnd //  // @ game+0x43bab4
	void OnServer_AnnihilateSpawnedZombiesByEvent(); // Function TslGameMode.TslSLBStageController.OnServer_AnnihilateSpawnedZombiesByEvent //  // @ game+0x43bab4
};

// Class TslGameMode.TslSLBAICharacter
// Size: 0x1370 (Inherited: 0xfa0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBAICharacter : ATslNpcCharacter {
	char pad_FA0[0x74]; // 0xfa0(0x74)
	float *eaee6268dd; // 0x1014(0x04)
	struct UClass* *a964ecbd17; // 0x1018(0x08)
	float *d4dfa4a0cf; // 0x1020(0x04)
	float *98d1ab7437; // 0x1024(0x04)
	struct F*9300e96b36 *ea63125950; // 0x1028(0x08)
	struct UAkAudioEvent* *df78ba39c4; // 0x1030(0x08)
	bool *5eb4b8a7ce; // 0x1038(0x01)
	char pad_1039[0x7]; // 0x1039(0x07)
	struct UClass* *0b2d2f988d; // 0x1040(0x08)
	char pad_1048[0x10]; // 0x1048(0x10)
	bool *1731ad8c80; // 0x1058(0x01)
	char pad_1059[0x7]; // 0x1059(0x07)
	struct UClass* *567e11ceb6; // 0x1060(0x08)
	float *01083895d0; // 0x1068(0x04)
	char pad_106C[0xc]; // 0x106c(0x0c)
	bool *e6085fd040; // 0x1078(0x01)
	enum class *f04d1186a4 *769936f1d0; // 0x1079(0x01)
	char pad_107A[0x12]; // 0x107a(0x12)
	int32 *b3bf1b3a10; // 0x108c(0x04)
	struct UClass* *c4837fc2d7; // 0x1090(0x20)
	enum class EProjectileExplosionStartType *6f56e39e3f; // 0x10b0(0x01)
	char pad_10B1[0x3]; // 0x10b1(0x03)
	float *553e16a6fb; // 0x10b4(0x04)
	struct UMeshComponent* WeaponMeshComp; // 0x10b8(0x08)
	char pad_10C0[0x98]; // 0x10c0(0x98)
	struct ATslSLBZombieSpawner* *3e3546732f; // 0x1158(0x08)
	struct TArray<struct ATslSLBZombieSpawner*> *a17ec35fd5; // 0x1160(0x10)
	struct TMap<struct ATslSLBAICharacter*, struct FName> *bbcef13d89; // 0x1170(0x50)
	char pad_11C0[0x1]; // 0x11c0(0x01)
	bool *49df0fc7f0; // 0x11c1(0x01)
	char pad_11C2[0x2]; // 0x11c2(0x02)
	float *5e4a90cca8; // 0x11c4(0x04)
	struct TMap<enum class EThrowBuffType, struct FLinearColor> *894a78d7b5; // 0x11c8(0x50)
	char pad_1218[0x4]; // 0x1218(0x04)
	float *2768b3e3ca; // 0x121c(0x04)
	float *6fcfca9261; // 0x1220(0x04)
	char pad_1224[0x4]; // 0x1224(0x04)
	struct TArray<struct ATslSLBAICharacter*> *6c58a2bd01; // 0x1228(0x10)
	char pad_1238[0x1]; // 0x1238(0x01)
	struct F*8a38a7ac79 *f8e26e5415; // 0x1239(0x02) rep=OnRep_WeaponState
	bool *2cea25badc; // 0x123b(0x01)
	float *0ab8d9520b; // 0x123c(0x04)
	float *25d07d6808; // 0x1240(0x04)
	struct FVector2D *c21046aa5f; // 0x1244(0x08)
	char pad_124C[0x14]; // 0x124c(0x14)
	struct UAkAudioEvent* *d59defb0b5; // 0x1260(0x08)
	struct UAkComponent* AkComponent; // 0x1268(0x08)
	struct UClass* *9daa31c827; // 0x1270(0x20)
	struct U*3aee2cee00* *462f1683e6; // 0x1290(0x08)
	struct UCurveFloat* *927374d11f; // 0x1298(0x08)
	struct UCurveFloat* *fbaef6c565; // 0x12a0(0x08)
	float C4ExplosionTime; // 0x12a8(0x04)
	char pad_12AC[0x4]; // 0x12ac(0x04)
	struct F*ab9d821647 *b186d1b560; // 0x12b0(0x40)
	char pad_12F0[0x20]; // 0x12f0(0x20)
	struct UClass* *46066d1aff; // 0x1310(0x20)
	struct FVector *ba174f48a7; // 0x1330(0x0c)
	float *bed4fb4dac; // 0x133c(0x04)
	float *e22e3d7861; // 0x1340(0x04)
	struct FVector *b648bd040f; // 0x1344(0x0c)
	enum class ENpcCharacterStateType *23d862f523; // 0x1350(0x01)
	char pad_1351[0x1f]; // 0x1351(0x1f)

	void *c5bcb01005(); // Function TslGameMode.TslSLBAICharacter.*c5bcb01005 //  // @ game+0xe1935b0
	void *d19bd161d8(); // Function TslGameMode.TslSLBAICharacter.*d19bd161d8 //  // @ game+0xe195f14
	void *c1d24cde79(); // Function TslGameMode.TslSLBAICharacter.*c1d24cde79 //  // @ game+0xe1b1264
	void *ed2e1832ef(); // Function TslGameMode.TslSLBAICharacter.*ed2e1832ef //  // @ game+0xe1a5244
	void OnRep_WeaponState(); // Function TslGameMode.TslSLBAICharacter.OnRep_WeaponState //  // @ game+0xe19fb0c
	void SetC4LightState(); // Function TslGameMode.TslSLBAICharacter.SetC4LightState //  // @ game+0x43bab4
};

// Class TslGameMode.BTService_SLBFindDoctorBuffTarget
// Size: 0xb0 (Inherited: 0x88)  [layout: KHOP]
struct UBTService_SLBFindDoctorBuffTarget : UBTService {
	int32 *937f9954a6; // 0x88(0x04)
	int32 *60ba7c62e0; // 0x8c(0x04)
	struct FName BuffId; // 0x90(0x08)
	struct TArray<enum class *f04d1186a4> *7ebf97bde5; // 0x98(0x10)
	float *e61078e401; // 0xa8(0x04)
	float *046da727d4; // 0xac(0x04)
};

// Class TslGameMode.*2272863f2b
// Size: 0xe0 (Inherited: 0x88)  [layout: KHOP]
struct U*2272863f2b : UBTService {
	struct FBlackboardKeySelector *3721667f28; // 0x88(0x28)
	struct FBlackboardKeySelector *5c63fb8409; // 0xb0(0x28)
	float *e6af5f9ee3; // 0xd8(0x04)
	float *79bdc698b6; // 0xdc(0x04)
};

// Class TslGameMode.*75d34ad256
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct U*75d34ad256 : UBTTaskNode {
};

// Class TslGameMode.*25419625f7
// Size: 0x1f0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*25419625f7 : UBTTaskNode {
	float *55791a92c2; // 0x88(0x04)
	char pad_8C[0x164]; // 0x8c(0x164)
};

// Class TslGameMode.BTTask_Dash_SLB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_Dash_SLB : UBTTaskNode {
};

// Class TslGameMode.BTTask_GetLocationToPatrol_SLB
// Size: 0xd8 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_GetLocationToPatrol_SLB : UBTTaskNode {
	struct FBlackboardKeySelector *afa2368d3d; // 0x88(0x28)
	struct FBlackboardKeySelector *e99f12c2fd; // 0xb0(0x28)
};

// Class TslGameMode.BTTask_Kidnap_SLB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_Kidnap_SLB : UBTTaskNode {
};

// Class TslGameMode.BTTask_MoveTo_SLB
// Size: 0xd0 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_MoveTo_SLB : UBTTask_MoveTo {
	bool *4cfe5bc193; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class TslGameMode.*58c13ba8d3
// Size: 0x1f8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*58c13ba8d3 : UBTTaskNode {
	float *55791a92c2; // 0x88(0x04)
	float *201539b898; // 0x8c(0x04)
	float *c288f45d22; // 0x90(0x04)
	float *461b4795e8; // 0x94(0x04)
	char pad_98[0x160]; // 0x98(0x160)
};

// Class TslGameMode.*d448a4f783
// Size: 0x200 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*d448a4f783 : UBTTaskNode {
	float *55791a92c2; // 0x88(0x04)
	float *fb366030b6; // 0x8c(0x04)
	char pad_90[0x170]; // 0x90(0x170)
};

// Class TslGameMode.BTTask_RunnerScream_SLB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_RunnerScream_SLB : UBTTaskNode {
};

// Class TslGameMode.BTTask_Scream_SLB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_Scream_SLB : UBTTaskNode {
};

// Class TslGameMode.BTTask_SetAIBattleState
// Size: 0xb8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_SetAIBattleState : UBTTask_BlackboardBase {
	enum class EAIBattleState AIBattleState; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class TslGameMode.BTTask_SLBThrowInvincibleBuff
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_SLBThrowInvincibleBuff : UBTTaskNode {
};

// Class TslGameMode.BTTask_ThrowWeapon_SLB
// Size: 0xb0 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_ThrowWeapon_SLB : UBTTaskNode {
	struct FBlackboardKeySelector *3721667f28; // 0x88(0x28)
};

// Class TslGameMode.*a6ab6dcb0f
// Size: 0x98 (Inherited: 0x88)  [layout: KHOP]
struct U*a6ab6dcb0f : UBTTaskNode {
	struct FGameplayTag *fabbf0eb60; // 0x88(0x08)
	struct FGameplayTag *7282aa8baa; // 0x90(0x08)
};

// Class TslGameMode.*a6a6b02302
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*a6a6b02302 : U*a6ab6dcb0f {
};

// Class TslGameMode.*3a502eb3b9
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*3a502eb3b9 : U*a6ab6dcb0f {
};

// Class TslGameMode.*c2d484f57a
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*c2d484f57a : U*a6ab6dcb0f {
};

// Class TslGameMode.*39869d3409
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*39869d3409 : U*a6ab6dcb0f {
};

// Class TslGameMode.*9dbfd55cd9
// Size: 0xb0 (Inherited: 0x88)  [layout: KHOP]
struct U*9dbfd55cd9 : UBTTaskNode {
	struct FBlackboardKeySelector *5b6dded02a; // 0x88(0x28)
};

// Class TslGameMode.*bc771e3101
// Size: 0xb0 (Inherited: 0xb0)  [layout: KHOP]
struct U*bc771e3101 : U*9dbfd55cd9 {
};

// Class TslGameMode.*db994c107d
// Size: 0xb0 (Inherited: 0xb0)  [layout: KHOP]
struct U*db994c107d : U*9dbfd55cd9 {
};

// Class TslGameMode.*f111a76e0c
// Size: 0xb0 (Inherited: 0xb0)  [layout: KHOP]
struct U*f111a76e0c : U*9dbfd55cd9 {
};

// Class TslGameMode.*aa4e1d0b27
// Size: 0xb0 (Inherited: 0xb0)  [layout: KHOP]
struct U*aa4e1d0b27 : U*9dbfd55cd9 {
};

// Class TslGameMode.CaptureAreaModActor
// Size: 0x7f0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ACaptureAreaModActor : AActor {
	char pad_400[0x2a0]; // 0x400(0x2a0)
	struct TArray<float> *3678e993d0; // 0x6a0(0x10)
	struct FText *db02b3088e; // 0x6b0(0x18)
	struct FText *8e056f5acb; // 0x6c8(0x18)
	struct FText *4ad776c97b; // 0x6e0(0x18)
	struct USkeletalMeshComponent* FlagMesh; // 0x6f8(0x08)
	struct UDecalComponent* DecalComp; // 0x700(0x08)
	struct UStaticMeshComponent* *7f5b5cc8b9; // 0x708(0x08)
	struct UStaticMeshComponent* *db100cc38b; // 0x710(0x08)
	struct UBillboardComponent* BillboardComp; // 0x718(0x08)
	struct UWidgetComponent* WidgetComp; // 0x720(0x08)
	struct UMaterialInstanceDynamic* *993b20b29d; // 0x728(0x08)
	struct UMaterialInstanceDynamic* *86b42fbf99; // 0x730(0x08)
	struct FCaptureAreaModData *190b61b8d4; // 0x738(0x68) rep=OnRep_CaptureAreaModData
	struct F*0c166eec30 *421e08b9c3; // 0x7a0(0x10) rep=OnRep_ProgressData
	enum class ECaptureAreaState *927b8816f8; // 0x7b0(0x01) rep=OnRep_CaptureAreaState
	bool *279b65fc3d; // 0x7b1(0x01) rep=OnRep_Activate
	bool *440500514c; // 0x7b2(0x01) rep=OnRep_ShowXRay
	char pad_7B3[0x5]; // 0x7b3(0x05)
	struct TArray<struct ATslCharacter*> *9c63b89a84; // 0x7b8(0x10) rep=OnRep_OverlappingCharacters
	struct U*f1ae092dd3* *f1ae092dd3; // 0x7c8(0x08)
	char pad_7D0[0x20]; // 0x7d0(0x20)

	void OnRep_ProgressData(); // Function TslGameMode.CaptureAreaModActor.OnRep_ProgressData //  // @ game+0xe19f748
	void OnRep_Activate(); // Function TslGameMode.CaptureAreaModActor.OnRep_Activate //  // @ game+0xe19ebf8
	void OnRep_ShowXRay(); // Function TslGameMode.CaptureAreaModActor.OnRep_ShowXRay //  // @ game+0xe19f998
	void OnRep_CaptureAreaState(); // Function TslGameMode.CaptureAreaModActor.OnRep_CaptureAreaState //  // @ game+0xe19ee8c
	void OnRep_CaptureAreaModData(); // Function TslGameMode.CaptureAreaModActor.OnRep_CaptureAreaModData //  // @ game+0xe19ee78
	void OnRep_OverlappingCharacters(); // Function TslGameMode.CaptureAreaModActor.OnRep_OverlappingCharacters //  // @ game+0xe19f3cc
};

// Class TslGameMode.CaptureAreaProgressWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UCaptureAreaProgressWidget : UUmgBaseWidget {
	struct UImage* CircleProgressImage; // 0x420(0x08)
	struct UTextBlock* RemainTimeTextBlock; // 0x428(0x08)
	struct UTextBlock* TeamIDTextBlock; // 0x430(0x08)
	struct UMaterialInstanceDynamic* CircleProgressMaterial; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
};

// Class TslGameMode.CastableItemImplement_BoostSLBHungerGauge
// Size: 0x2a8 (Inherited: 0x2a0)  [layout: LECH - offset chi la uoc luong]
struct UCastableItemImplement_BoostSLBHungerGauge : UCastableItemImplement {
	float BoostHungerGaugeAmount; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
};

// Class TslGameMode.*0085d2f8fa
// Size: 0xb0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*0085d2f8fa : UObject {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class TslGameMode.*f1ae092dd3
// Size: 0x1c0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*f1ae092dd3 : UObject {
	char pad_30[0x190]; // 0x30(0x190)
};

// Class TslGameMode.CheckpointIndexWidget
// Size: 0x298 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UCheckpointIndexWidget : UUserWidget {
	struct UTextBlock* IndexText; // 0x258(0x08)
	struct UTextBlock* DistanceText; // 0x260(0x08)
	struct UImage* BgImage; // 0x268(0x08)
	struct UImage* GoalImage; // 0x270(0x08)
	char pad_278[0x20]; // 0x278(0x20)

	void SetIndex(); // Function TslGameMode.CheckpointIndexWidget.SetIndex //  // @ game+0xe1aa124
	void SetDisplayColor(); // Function TslGameMode.CheckpointIndexWidget.SetDisplayColor //  // @ game+0xe1a9830
};

// Class TslGameMode.CheckpointNavigationWidget
// Size: 0x278 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UCheckpointNavigationWidget : UUserWidget {
	float ArrowBaseAngle; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UImage* ArrowImage; // 0x260(0x08)
	char pad_268[0x10]; // 0x268(0x10)

	void SetTargetLocation(); // Function TslGameMode.CheckpointNavigationWidget.SetTargetLocation //  // @ game+0xe1aa938
};

// Class TslGameMode.CraftingModActor
// Size: 0x490 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ACraftingModActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct UInteractionComponent* InteractionComponent; // 0x408(0x08)
	struct U*a7416194f8* *b0445cf01b; // 0x410(0x08)
	struct FCraftingDeviceData *9164bfef40; // 0x418(0x38) rep=OnRep_CraftingDeviceData
	struct TArray<int32> *b53300f359; // 0x450(0x10) rep=OnRep_CraftingIdList
	struct TArray<struct FCraftItemDataRow> *c22a25c80a; // 0x460(0x10)
	struct FText *8371a75cfc; // 0x470(0x18)
	char pad_488[0x2]; // 0x488(0x02)
	bool *49896f2b03; // 0x48a(0x01)
	char pad_48B[0x5]; // 0x48b(0x05)

	void OnRep_CraftingIdList(); // Function TslGameMode.CraftingModActor.OnRep_CraftingIdList //  // @ game+0xe19eff0
	void OnClientInteractionSucceed(); // Function TslGameMode.CraftingModActor.OnClientInteractionSucceed //  // @ game+0xe199d08
	void *8c25aea5f6(); // Function TslGameMode.CraftingModActor.*8c25aea5f6 //  // @ game+0xe192ce0
	void OnRep_CraftingDeviceData(); // Function TslGameMode.CraftingModActor.OnRep_CraftingDeviceData //  // @ game+0xe19efc4
};

// Class TslGameMode.DamageTriggerModActor
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct ADamageTriggerModActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct U*0cf627ec2d* *48ca9dc6f2; // 0x408(0x08)
	struct UStaticMesh* StaticMesh; // 0x410(0x08) rep=OnRep_StaticMesh

	void OnRep_StaticMesh(); // Function TslGameMode.DamageTriggerModActor.OnRep_StaticMesh //  // @ game+0xe19f9c0
};

// Class TslGameMode.FBR2021CraftItemListWidget
// Size: 0x650 (Inherited: 0x4a8)  [layout: LECH - offset chi la uoc luong]
struct UFBR2021CraftItemListWidget : UCraftItemListWidget {
	struct FCraftGuideLineData MainLine; // 0x4a8(0x60)
	struct FCraftGuideLineData SecondLine; // 0x508(0x60)
	struct FCraftGuideLineData ThirdLine; // 0x568(0x60)
	struct UGridPanel* Crafting_GridPanel; // 0x5c8(0x08)
	struct TMap<struct FString, struct UCraftItemSlotWidget*> ItemSlotsByTag; // 0x5d0(0x50)
	char pad_620[0x30]; // 0x620(0x30)

	void OnEquipmentUpdated(); // Function TslGameMode.FBR2021CraftItemListWidget.OnEquipmentUpdated //  // @ game+0xe19ae08
};

// Class TslGameMode.FBR2021CraftItemSlotWidget
// Size: 0x570 (Inherited: 0x528)  [layout: LECH - offset chi la uoc luong]
struct UFBR2021CraftItemSlotWidget : UCraftItemSlotWidget {
	struct FString SlotTag; // 0x528(0x10)
	struct UWidgetSwitcher* Skill_Switcher; // 0x538(0x08)
	struct UButton* CraftableButton; // 0x540(0x08)
	struct UButton* NotCraftableButton; // 0x548(0x08)
	struct TArray<struct FCraftItemDataRow> CraftDataRows; // 0x550(0x10)
	char pad_560[0x10]; // 0x560(0x10)
};

// Class TslGameMode.FBR2021CraftItemToolTipWidget
// Size: 0x560 (Inherited: 0x508)  [layout: KHOP]
struct UFBR2021CraftItemToolTipWidget : UCraftItemToolTipWidget {
	struct UHorizontalBox* IngredientsItemSlotHorizontalBoxB; // 0x508(0x08)
	struct UTextBlock* IngredientsTitleA_Text; // 0x510(0x08)
	struct UTextBlock* IngredientsTitleB_Text; // 0x518(0x08)
	char pad_520[0x10]; // 0x520(0x10)
	struct TArray<struct UCraftMaterialIconWidget*> CachedIconBWidgets; // 0x530(0x10)
	struct TArray<struct UCraftMaterialIconWidget*> CachedAllIconWidgets; // 0x540(0x10)
	struct TArray<struct UTextBlock*> CachedAllIngredientTextBlocks; // 0x550(0x10)
};

// Class TslGameMode.FBR2021InventoryWidget_GamePad
// Size: 0x768 (Inherited: 0x760)  [layout: LECH - offset chi la uoc luong]
struct UFBR2021InventoryWidget_GamePad : UTslInventoryWidget_GamePad {
	char pad_760[0x8]; // 0x760(0x08)

	void OnChildSlotFocusOnCrafting(); // Function TslGameMode.FBR2021InventoryWidget_GamePad.OnChildSlotFocusOnCrafting //  // @ game+0xe199b28
};

// Class TslGameMode.FBRClassSelectButtonWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UFBRClassSelectButtonWidget : UUmgBaseWidget {
	struct UTslFakeButton* ClassSelect_Button; // 0x420(0x08)
	struct UImage* Select_Image; // 0x428(0x08)
};

// Class TslGameMode.FBRClassSelectWidget
// Size: 0x608 (Inherited: 0x498)  [layout: LECH - offset chi la uoc luong]
struct UFBRClassSelectWidget : UTslSpawnKitWithDataWidget {
	struct UImage* ClassImage; // 0x498(0x08)
	struct UButton* ClassConfirmButton; // 0x4a0(0x08)
	struct UTextBlock* LobbyTimerTitleText; // 0x4a8(0x08)
	struct UTextBlock* LobbyTimerNumberText; // 0x4b0(0x08)
	struct UTextBlock* ClassTitleText; // 0x4b8(0x08)
	struct UTextBlock* ClassInfoSubtitleText; // 0x4c0(0x08)
	struct UTextBlock* ClassDescriptionText; // 0x4c8(0x08)
	struct UPanelWidget* ClassSelectButtonPanel; // 0x4d0(0x08)
	struct UPanelWidget* ClassItemPanel; // 0x4d8(0x08)
	struct UPanelWidget* ClassStatGaugePanel; // 0x4e0(0x08)
	struct UPanelWidget* ItemToolTipPanel; // 0x4e8(0x08)
	struct UItemToolTipWidget* ItemToolTipWidget; // 0x4f0(0x08)
	struct UPanelWidget* ItemToolTipPanel_Gamepad; // 0x4f8(0x08)
	struct UItemToolTipWidget* ItemToolTipWidget_Gamepad; // 0x500(0x08)
	struct TArray<struct UTslFakeButton*> ClassSelectButtons; // 0x508(0x10)
	struct TArray<struct UItemWidget*> ItemWidgets; // 0x518(0x10)
	struct TArray<struct UImage*> StatWidgets; // 0x528(0x10)
	struct FName GaugeMaterialParameter; // 0x538(0x08)
	struct TMap<enum class EFBRClass, struct FFBRClassDescription> ClassDescriptionData; // 0x540(0x50)
	struct TArray<enum class EEquipSlotID> ItemSlotOrder; // 0x590(0x10)
	struct FText TextMatchStartsIn; // 0x5a0(0x18)
	struct FText TextMatchStarted; // 0x5b8(0x18)
	float ItemToolTipEmergingTime_Gamepad; // 0x5d0(0x04)
	int32 DefaultItemFocusRowOnConsole; // 0x5d4(0x04)
	int32 DefaultItemFocusColumnOnConsole; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct UItemWidget* CurrentItemFocusOnConsole; // 0x5e0(0x08)
	char pad_5E8[0x20]; // 0x5e8(0x20)

	void OnMoveLeft(); // Function TslGameMode.FBRClassSelectWidget.OnMoveLeft //  // @ game+0xe19cd7c
	void OnItemWidgetUnhovered(); // Function TslGameMode.FBRClassSelectWidget.OnItemWidgetUnhovered //  // @ game+0xe19c018
	void OnMoveDown(); // Function TslGameMode.FBRClassSelectWidget.OnMoveDown //  // @ game+0xe19cd20
	void OnTimerEmergeItemToolTipGamepad(); // Function TslGameMode.FBRClassSelectWidget.OnTimerEmergeItemToolTipGamepad //  // @ game+0xe1a35f4
	void OnSelectNextClass(); // Function TslGameMode.FBRClassSelectWidget.OnSelectNextClass //  // @ game+0xe1a068c
	void OnRemainingTimeUpdated(); // Function TslGameMode.FBRClassSelectWidget.OnRemainingTimeUpdated //  // @ game+0xe19eb6c
	void Hide(); // Function TslGameMode.FBRClassSelectWidget.Hide //  // @ game+0xe1957ec
	void OnItemWidgetHovered(); // Function TslGameMode.FBRClassSelectWidget.OnItemWidgetHovered //  // @ game+0xe19bf8c
	void OnMatchStateChanged(); // Function TslGameMode.FBRClassSelectWidget.OnMatchStateChanged //  // @ game+0xe19c62c
	void OnClickedConfirm(); // Function TslGameMode.FBRClassSelectWidget.OnClickedConfirm //  // @ game+0xe199c74
	void OnSelectPreviousClass(); // Function TslGameMode.FBRClassSelectWidget.OnSelectPreviousClass //  // @ game+0xe1a06ac
	void OnMoveUp(); // Function TslGameMode.FBRClassSelectWidget.OnMoveUp //  // @ game+0xe19ce3c
	void Show(); // Function TslGameMode.FBRClassSelectWidget.Show //  // @ game+0xe1aab78
	void OnMoveRight(); // Function TslGameMode.FBRClassSelectWidget.OnMoveRight //  // @ game+0xe19cddc
};

// Class TslGameMode.FBR2021ClassSelectWidget
// Size: 0x670 (Inherited: 0x608)  [layout: KHOP]
struct UFBR2021ClassSelectWidget : UFBRClassSelectWidget {
	int32 NumItemSlotsPerCategory; // 0x608(0x04)
	float ItemToolTipOffset; // 0x60c(0x04)
	struct TMap<enum class EFBRClass, struct FFBRClassItemSlotData> OverrideItemSlotData; // 0x610(0x50)
	struct TArray<struct UFBRClassSelectButtonWidget*> ClassSelectButtonWidgets; // 0x660(0x10)
};

// Class TslGameMode.FBRMatchResultWidget
// Size: 0x618 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UFBRMatchResultWidget : UBaseResultWidget {
	struct UTextBlock* PlayerNameText; // 0x490(0x08)
	struct UTextBlock* ResultMsgText; // 0x498(0x08)
	struct UTextBlock* FinalRankText; // 0x4a0(0x08)
	struct UTextBlock* TotalPlayersText; // 0x4a8(0x08)
	struct UTextBlock* RankText; // 0x4b0(0x08)
	struct UTextBlock* KillCountText; // 0x4b8(0x08)
	struct UTextBlock* RewardPointsTotalText; // 0x4c0(0x08)
	struct UTextBlock* LobbyButtonText; // 0x4c8(0x08)
	struct UTextBlock* SpectateButtonText; // 0x4d0(0x08)
	struct UWidgetSwitcher* ButtonsSwitcher; // 0x4d8(0x08)
	struct UPanelWidget* Buttons_PC; // 0x4e0(0x08)
	struct UPanelWidget* Buttons_Console; // 0x4e8(0x08)
	struct UButton* LobbyButton; // 0x4f0(0x08)
	struct UButton* SpectateButton; // 0x4f8(0x08)
	struct UHorizontalBox* ButtonSpectate_Console; // 0x500(0x08)
	struct UButton* ReportButton; // 0x508(0x08)
	struct UHorizontalBox* ButtonReport_Console; // 0x510(0x08)
	struct UTslUserPlatformImageWidget* PlatformIcon; // 0x518(0x08)
	struct U*7fa8406bd3* WinAnim; // 0x520(0x08)
	struct U*7fa8406bd3* LoseAnim; // 0x528(0x08)
	struct U*7fa8406bd3* DeathAnim; // 0x530(0x08)
	struct U*7fa8406bd3* WinRollingAnim; // 0x538(0x08)
	struct FText WinnerMessage; // 0x540(0x18)
	struct FText TopTenMessage; // 0x558(0x18)
	struct FText NoTopTenMessage; // 0x570(0x18)
	struct FText TeamRemainsMessage; // 0x588(0x18)
	struct FLinearColor NormalTextButtonColor; // 0x5a0(0x10)
	struct FLinearColor HoverTextButtonColor; // 0x5b0(0x10)
	struct UAkAudioEvent* AkEvent_Win; // 0x5c0(0x08)
	float AkEventDelayTime_Win; // 0x5c8(0x04)
	float BHoldTime; // 0x5cc(0x04)
	struct UTextBlock* TimerText; // 0x5d0(0x08)
	struct FText RemainTimePluralFormatText; // 0x5d8(0x18)
	struct FString SecFormatArgText; // 0x5f0(0x10)
	char pad_600[0x18]; // 0x600(0x18)

	void OnHoveredReportButton(); // Function TslGameMode.FBRMatchResultWidget.OnHoveredReportButton //  // @ game+0xe19bbd0
	void OnBPressed(); // Function TslGameMode.FBRMatchResultWidget.OnBPressed //  // @ game+0xe197464
	void OpenReport(); // Function TslGameMode.FBRMatchResultWidget.OpenReport //  // @ game+0xe1a4ba4
	void OnUnhoveredSpectateButton(); // Function TslGameMode.FBRMatchResultWidget.OnUnhoveredSpectateButton //  // @ game+0xe1a3a18
	void PlayAkEvent_Win(); // Function TslGameMode.FBRMatchResultWidget.PlayAkEvent_Win //  // @ game+0xe1a4f50
	void OnUnhoveredReportButton(); // Function TslGameMode.FBRMatchResultWidget.OnUnhoveredReportButton //  // @ game+0xe1a39fc
	void OnBReleased(); // Function TslGameMode.FBRMatchResultWidget.OnBReleased //  // @ game+0xe1974cc
	void OnHoveredLobbyButton(); // Function TslGameMode.FBRMatchResultWidget.OnHoveredLobbyButton //  // @ game+0xe19bbb4
	void OnMatchStateChanged(); // Function TslGameMode.FBRMatchResultWidget.OnMatchStateChanged //  // @ game+0xe19c6b4
	void UpdateMatchResult(); // Function TslGameMode.FBRMatchResultWidget.UpdateMatchResult //  // @ game+0xe1b1458
	void OpenGoToLobbyPopup(); // Function TslGameMode.FBRMatchResultWidget.OpenGoToLobbyPopup //  // @ game+0xe1a4b90
	void OnUpdateRanking(); // Function TslGameMode.FBRMatchResultWidget.OnUpdateRanking //  // @ game+0xe1a3ba4
	void OnHoveredSpectateButton(); // Function TslGameMode.FBRMatchResultWidget.OnHoveredSpectateButton //  // @ game+0xe19bbec
	void GoSpectate(); // Function TslGameMode.FBRMatchResultWidget.GoSpectate //  // @ game+0xe1951c8
	void OnUnhoveredLobbyButton(); // Function TslGameMode.FBRMatchResultWidget.OnUnhoveredLobbyButton //  // @ game+0xe1a39e0
};

// Class TslGameMode.*801f92988c
// Size: 0xb8 (Inherited: 0xb8)  [layout: KHOP]
struct U*801f92988c : U*adc663050a {
};

// Class TslGameMode.FBRVehicleAndTeamManageWidget
// Size: 0x490 (Inherited: 0x488)  [layout: KHOP]
struct UFBRVehicleAndTeamManageWidget : UTslVehicleStanceAndTeamListManageWidget {
	struct UPanelWidget* FBRClassSelectGuideOuterBox; // 0x488(0x08)

	void OnMatchStateChanged(); // Function TslGameMode.FBRVehicleAndTeamManageWidget.OnMatchStateChanged //  // @ game+0xe19c72c
	void OnToggleClassSelectWidgetVisibility(); // Function TslGameMode.FBRVehicleAndTeamManageWidget.OnToggleClassSelectWidgetVisibility //  // @ game+0xe1a3738
};

// Class TslGameMode.IBRAirborneMatchPreparerModeFeature
// Size: 0x160 (Inherited: 0x148)  [layout: KHOP]
struct UIBRAirborneMatchPreparerModeFeature : UTslAirborneMatchPreparerModeFeature {
	float *0fe7c87f46; // 0x148(0x04)
	float *e206323521; // 0x14c(0x04)
	float *b1b2eb8962; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct ATslAirborneEjectionArea* *cec4b7e59f; // 0x158(0x08)
};

// Class TslGameMode.InteractTriggerModActor
// Size: 0x500 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AInteractTriggerModActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct UInteractionComponent* InteractionComponent; // 0x408(0x08)
	struct U*43bec0276c* *e59c726d14; // 0x410(0x08)
	struct FInteractTriggerDeviceData *5f94e7bebb; // 0x418(0x40) rep=OnRep_InteractTriggerDeviceData
	bool *fd8a7da400; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FText *8371a75cfc; // 0x460(0x18)
	char pad_478[0x88]; // 0x478(0x88)

	void OnServerInteractionSucceed(); // Function TslGameMode.InteractTriggerModActor.OnServerInteractionSucceed //  // @ game+0xe1a0c84
	void OnServerInteractionStarted(); // Function TslGameMode.InteractTriggerModActor.OnServerInteractionStarted //  // @ game+0xe1a0b8c
	void *028bfac73d(); // Function TslGameMode.InteractTriggerModActor.*028bfac73d //  // @ game+0xe1a2354
	void OnServerInteractionCanceled(); // Function TslGameMode.InteractTriggerModActor.OnServerInteractionCanceled //  // @ game+0xe1a0a94
	void OnRep_InteractTriggerDeviceData(); // Function TslGameMode.InteractTriggerModActor.OnRep_InteractTriggerDeviceData //  // @ game+0xe19f15c
};

// Class TslGameMode.ItemModActor
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AItemModActor : AActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x400(0x08)
	bool *53d27de3ad; // 0x408(0x01) rep=OnRep_VisibleDevice
	char pad_409[0x7]; // 0x409(0x07)

	void OnRep_VisibleDevice(); // Function TslGameMode.ItemModActor.OnRep_VisibleDevice //  // @ game+0xe19fae4
};

// Class TslGameMode.ItemSpawnModActor
// Size: 0x410 (Inherited: 0x410)  [layout: KHOP]
struct AItemSpawnModActor : AItemModActor {
};

// Class TslGameMode.*fc28308867
// Size: 0x250 (Inherited: 0x230)  [layout: LECH - offset chi la uoc luong]
struct U*fc28308867 : U*5757366fea {
	struct FName *754686712e; // 0x230(0x08)
	struct FName *eec755ce40; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)
};

// Class TslGameMode.LandmarkBlueZoneCreateArea
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct ALandmarkBlueZoneCreateArea : ATslBlueZoneCreateArea {
};

// Class TslGameMode.*7c5839625d
// Size: 0x370 (Inherited: 0x320)  [layout: KHOP]
struct U*7c5839625d : UTslBlueZoneModeFeature {
	struct TMap<struct FString, struct UDataTable*> *5d0d145e4b; // 0x320(0x50)
};

// Class TslGameMode.LightModActor
// Size: 0x430 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALightModActor : AActor {
	struct USceneComponent* SceneRoot; // 0x400(0x08)
	struct ULightComponent* LightComponent; // 0x408(0x08)
	struct FLightModData *3ef568b973; // 0x410(0x18) rep=OnRep_LightConfiguration
	bool *279b65fc3d; // 0x428(0x01) rep=OnRep_Activate
	char pad_429[0x7]; // 0x429(0x07)

	void OnRep_LightConfiguration(); // Function TslGameMode.LightModActor.OnRep_LightConfiguration //  // @ game+0xe19f248
	void OnRep_Activate(); // Function TslGameMode.LightModActor.OnRep_Activate //  // @ game+0xe19ec0c
};

// Class TslGameMode.*c2e1813a24
// Size: 0x220 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*c2e1813a24 : U*91c4ed04ba {
	char pad_210[0x10]; // 0x210(0x10)
};

// Class TslGameMode.ModAircraftCarePackage
// Size: 0x5f0 (Inherited: 0x5d8)  [layout: LECH - offset chi la uoc luong]
struct AModAircraftCarePackage : AAircraftCarePackage {
	struct TArray<struct FModItem> *0a44cf2bdf; // 0x5d8(0x10)
	char pad_5E8[0x8]; // 0x5e8(0x08)
};

// Class TslGameMode.*d07bc8d629
// Size: 0x7f0 (Inherited: 0x7f0)  [layout: KHOP]
struct U*d07bc8d629 : U*71d7cc0b74 {
};

// Class TslGameMode.*01bd3ba8cf
// Size: 0x60 (Inherited: 0x60)  [layout: KHOP]
struct U*01bd3ba8cf : U*902e8552c8 {
};

// Class TslGameMode.*866e7516bd
// Size: 0x230 (Inherited: 0x230)  [layout: KHOP]
struct U*866e7516bd : U*5757366fea {
};

// Class TslGameMode.*6066e79e5c
// Size: 0x60 (Inherited: 0x60)  [layout: KHOP]
struct U*6066e79e5c : U*85555f539e {
};

// Class TslGameMode.*0ac052711f
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*0ac052711f : U*6b123102ec {
};

// Class TslGameMode.*685b6e5e73
// Size: 0x328 (Inherited: 0x320)  [layout: LECH - offset chi la uoc luong]
struct U*685b6e5e73 : UTslBlueZoneModeFeature {
	char pad_320[0x8]; // 0x320(0x08)
};

// Class TslGameMode.*e35dae4b0f
// Size: 0x128 (Inherited: 0x110)  [layout: LECH - offset chi la uoc luong]
struct U*e35dae4b0f : UTslCarePackageModeFeature {
	struct UClass* *2c984c7f69; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
};

// Class TslGameMode.ModCharacterControlComponent
// Size: 0x240 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UModCharacterControlComponent : UActorComponent {
	char pad_210[0x30]; // 0x210(0x30)

	void *c74bb0c62b(); // Function TslGameMode.ModCharacterControlComponent.*c74bb0c62b //  // @ game+0xe1a8500
	void *5ed6982700(); // Function TslGameMode.ModCharacterControlComponent.*5ed6982700 //  // @ game+0xe1a85a8
};

// Class TslGameMode.ModCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UModCheatManager : UTslCheatManager {

	void LoadModData(); // Function TslGameMode.ModCheatManager.LoadModData //  // @ game+0xdadf054
	void ChangeModRunState(); // Function TslGameMode.ModCheatManager.ChangeModRunState //  // @ game+0xda977bc
	void SetQuickSlot(); // Function TslGameMode.ModCheatManager.SetQuickSlot //  // @ game+0xe1aa53c
	void SaveModData(); // Function TslGameMode.ModCheatManager.SaveModData //  // @ game+0x1053c04
	void OverrideModDataName(); // Function TslGameMode.ModCheatManager.OverrideModDataName //  // @ game+0xdadf054
	void SetHostPlayer(); // Function TslGameMode.ModCheatManager.SetHostPlayer //  // @ game+0x1053c04
	void SetModTeamPoint(); // Function TslGameMode.ModCheatManager.SetModTeamPoint //  // @ game+0xdae91e8
};

// Class TslGameMode.ModCreatorInfoWidget
// Size: 0x6a0 (Inherited: 0x420)  [layout: KHOP]
struct UModCreatorInfoWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockTakeOwnership; // 0x420(0x08)
	struct UTextBlock* TextBlockReleaseOwnership; // 0x428(0x08)
	struct UTslFlowingTextWidget* FlowTextCreator; // 0x430(0x08)
	struct UTslFlowingTextWidget* FlowTextCreatorName; // 0x438(0x08)
	struct UTslFlowingTextWidget* FlowTextModName; // 0x440(0x08)
	struct UTslFlowingTextWidget* FlowTextModDescription; // 0x448(0x08)
	struct UTslFlowingTextWidget* FlowTextModTag; // 0x450(0x08)
	struct UTslFlowingTextWidget* FlowTextModVersion; // 0x458(0x08)
	struct UTslFlowingTextWidget* FlowTextDifferentLastModifier; // 0x460(0x08)
	struct UTslCommonButton* ButtonToggleOwnership; // 0x468(0x08)
	struct UWidgetSwitcher* WidgetSwitcherOwnership; // 0x470(0x08)
	struct UTslCondEditableText* EditableTextModName; // 0x478(0x08)
	struct UMultiLineEditableText* EditableTextModDescription; // 0x480(0x08)
	struct UTslCondEditableText* EditableTextVersionMajor; // 0x488(0x08)
	struct UTslCondEditableText* EditableTextVersionMinor; // 0x490(0x08)
	struct UWrapBox* WrapBoxTagView; // 0x498(0x08)
	struct UTslCommonButton* ButtonAddTag; // 0x4a0(0x08)
	struct UGridPanel* GridPanelContent; // 0x4a8(0x08)
	struct UModEditManagerWidget* ModEditManagerWidget; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct FText NoOwnerText; // 0x4c0(0x18)
	struct FText DifferentLastModifierText; // 0x4d8(0x18)
	struct FText SameLastModifierText; // 0x4f0(0x18)
	struct FLinearColor DifferentLastModifierColor; // 0x508(0x10)
	struct FLinearColor SameLastModifierColor; // 0x518(0x10)
	struct TArray<struct FModCreatorInfoRowData> RowDescriptionData; // 0x528(0x10)
	struct UClass* TagItemWidgetClass; // 0x538(0x08)
	struct UDataTable* TagDataTable; // 0x540(0x08)
	char pad_548[0x50]; // 0x548(0x50)
	int32 MaxSubTagCount; // 0x598(0x04)
	int32 DescriptionMaxLength; // 0x59c(0x04)
	struct FString DescriptionRegexPattern; // 0x5a0(0x10)
	bool bAllowPictogram; // 0x5b0(0x01)
	char pad_5B1[0xd7]; // 0x5b1(0xd7)
	struct UModTagSelectItemWidget* MainTagWidget; // 0x688(0x08)
	struct TArray<struct UModTagSelectItemWidget*> SubTagWidgets; // 0x690(0x10)

	void OnModNameCommitted(); // Function TslGameMode.ModCreatorInfoWidget.OnModNameCommitted //  // @ game+0xe19cc44
	void OnModDescriptionCommitted(); // Function TslGameMode.ModCreatorInfoWidget.OnModDescriptionCommitted //  // @ game+0xe19cb3c
	void OnVersionMajorCommitted(); // Function TslGameMode.ModCreatorInfoWidget.OnVersionMajorCommitted //  // @ game+0xe1a479c
	void OnAddTagClicked(); // Function TslGameMode.ModCreatorInfoWidget.OnAddTagClicked //  // @ game+0xe196c00
	void OnToggleOwnershipClicked(); // Function TslGameMode.ModCreatorInfoWidget.OnToggleOwnershipClicked //  // @ game+0xe1a37b4
	void OnVersionMinorCommitted(); // Function TslGameMode.ModCreatorInfoWidget.OnVersionMinorCommitted //  // @ game+0xe1a4858
};

// Class TslGameMode.ModDeviceEditorItemListWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceEditorItemListWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockLabel; // 0x420(0x08)
	struct UVerticalBox* VerticalBoxChild; // 0x428(0x08)
	struct UImage* ImageArrow; // 0x430(0x08)
	struct UTslCommonButton* ButtonFold; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)

	void OnButtonFoldClicked(); // Function TslGameMode.ModDeviceEditorItemListWidget.OnButtonFoldClicked //  // @ game+0xe197894
};

// Class TslGameMode.ModDeviceEditorItemSlotWidget
// Size: 0x580 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceEditorItemSlotWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct FLinearColor BgColorNormal; // 0x460(0x10)
	struct FLinearColor BgColorHighlighted; // 0x470(0x10)
	struct FLinearColor IconBgColorNormal; // 0x480(0x10)
	struct FLinearColor IconBgColorHighlighted; // 0x490(0x10)
	struct FLinearColor TextColorNormal; // 0x4a0(0x10)
	struct FLinearColor TextColorHighlighted; // 0x4b0(0x10)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x4c0(0x08)
	struct UImage* ImageIcon; // 0x4c8(0x08)
	struct UImage* ImageIconBg; // 0x4d0(0x08)
	struct UImage* ImageSelectedBg; // 0x4d8(0x08)
	struct UButton* ButtonItem; // 0x4e0(0x08)
	char pad_4E8[0x98]; // 0x4e8(0x98)

	void OnClicked(); // Function TslGameMode.ModDeviceEditorItemSlotWidget.OnClicked //  // @ game+0xe197830
	void OnUnhovered(); // Function TslGameMode.ModDeviceEditorItemSlotWidget.OnUnhovered //  // @ game+0xe1a39a0
	void OnHovered(); // Function TslGameMode.ModDeviceEditorItemSlotWidget.OnHovered //  // @ game+0xe19bb78
};

// Class TslGameMode.ModDeviceEventBaseWidget
// Size: 0x440 (Inherited: 0x420)  [layout: KHOP]
struct UModDeviceEventBaseWidget : UUmgBaseWidget {
	struct FLinearColor ColorOptionNormal; // 0x420(0x10)
	struct FLinearColor ColorOptionHighlight; // 0x430(0x10)
};

// Class TslGameMode.ModDeviceEventElementWidget
// Size: 0x6f0 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceEventElementWidget : UModDeviceEventBaseWidget {
	char pad_440[0x1c0]; // 0x440(0x1c0)
	struct UModPropertyBGWidget* WidgetBG; // 0x600(0x08)
	struct UTextBlock* TextBlockEventName; // 0x608(0x08)
	struct UTextBlock* TextBlockDisplayOrder; // 0x610(0x08)
	struct UButton* ButtonOrderUp; // 0x618(0x08)
	struct UButton* ButtonOrderDown; // 0x620(0x08)
	struct UWidgetSwitcher* WidgetSwitcherIcon; // 0x628(0x08)
	struct UImage* ImageIcon; // 0x630(0x08)
	struct UImage* ImageIconAni; // 0x638(0x08)
	struct UGridPanel* GridPanelArrow; // 0x640(0x08)
	struct UTexture2D* IconTexture; // 0x648(0x08)
	char pad_650[0xa0]; // 0x650(0xa0)

	void OnButtonOrderDownClicked(); // Function TslGameMode.ModDeviceEventElementWidget.OnButtonOrderDownClicked //  // @ game+0xe197920
	void OnButtonOrderUpClicked(); // Function TslGameMode.ModDeviceEventElementWidget.OnButtonOrderUpClicked //  // @ game+0xe197940
	void OnButtonDeleteClicked(); // Function TslGameMode.ModDeviceEventElementWidget.OnButtonDeleteClicked //  // @ game+0xe1977d4
	void OnButtonClicked(); // Function TslGameMode.ModDeviceEventElementWidget.OnButtonClicked //  // @ game+0xe197674
};

// Class TslGameMode.ModDeviceEventListWidget
// Size: 0x660 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceEventListWidget : UModDeviceEventBaseWidget {
	struct UClass* EventElementWidgetClass; // 0x440(0x08)
	struct UModPropertyBGWidget* WidgetBG; // 0x448(0x08)
	struct UButton* ButtonFold; // 0x450(0x08)
	struct UVerticalBox* VerticalBoxChild; // 0x458(0x08)
	struct UButton* ButtonAddElement; // 0x460(0x08)
	struct UImage* ImageIcon; // 0x468(0x08)
	struct UImage* ImageIconAni; // 0x470(0x08)
	struct UWidgetSwitcher* WidgetSwitcherIcon; // 0x478(0x08)
	struct UTextBlock* TextBlockChildNum; // 0x480(0x08)
	struct UTextBlock* TextBlockChildName; // 0x488(0x08)
	struct TArray<struct UModDeviceEventElementWidget*> EventElementWidgets; // 0x490(0x10)
	struct UTexture2D* IconTexture; // 0x4a0(0x08)
	char pad_4A8[0x1b8]; // 0x4a8(0x1b8)

	void OnButtonFoldClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnButtonFoldClicked //  // @ game+0xe1978a8
	void OnEventDeleteButtonClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnEventDeleteButtonClicked //  // @ game+0xe19afa8
	void OnEventOrderUpButtonClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnEventOrderUpButtonClicked //  // @ game+0xe19b348
	void OnEventElementButtonClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnEventElementButtonClicked //  // @ game+0xe19b0f4
	void OnButtonAddElementClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnButtonAddElementClicked //  // @ game+0xe19764c
	void OnEventOrderDownButtonClicked(); // Function TslGameMode.ModDeviceEventListWidget.OnEventOrderDownButtonClicked //  // @ game+0xe19b2cc
};

// Class TslGameMode.ModDeviceEventWidget
// Size: 0x480 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceEventWidget : UUmgBaseWidget {
	struct UClass* EventListWidgetClass; // 0x420(0x08)
	struct UWidgetSwitcher* EventTypeSwitcher; // 0x428(0x08)
	struct UVerticalBox* VerticalBoxTriggerList; // 0x430(0x08)
	struct UVerticalBox* VerticalBoxActionList; // 0x438(0x08)
	struct TArray<struct UModDeviceEventListWidget*> TriggerListWidgets; // 0x440(0x10)
	struct TArray<struct UModDeviceEventListWidget*> ActionListWidgets; // 0x450(0x10)
	char pad_460[0x20]; // 0x460(0x20)
};

// Class TslGameMode.*9fc348f187
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9fc348f187 : U*96becd27f1 {
};

// Class TslGameMode.*c6722aa18e
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*c6722aa18e : U*9fc348f187 {
	struct UClass* *7da7d94f8d; // 0x30(0x08)
	struct UClass* *100ec924c5; // 0x38(0x08)
	struct UModOptionSelectorDeviceSlotWidget* *471ca18112; // 0x40(0x08)
	struct UModOptionSelectorEventSlotWidget* *b3911a085b; // 0x48(0x08)
	struct UModDeviceEventListWidget* *1b17a54d14; // 0x50(0x08)
	struct UModDeviceEventElementWidget* *bf2f669a09; // 0x58(0x08)
	struct TArray<struct UModOptionSelectorDeviceSlotWidget*> *96c4bfc34f; // 0x60(0x10)
	char pad_70[0x60]; // 0x70(0x60)

	void *36c1294cac(); // Function TslGameMode.*c6722aa18e.*36c1294cac //  // @ game+0xe1a078c
	void *c74f1b2e6a(); // Function TslGameMode.*c6722aa18e.*c74f1b2e6a //  // @ game+0xe1a0884
};

// Class TslGameMode.*2456fc74f7
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2456fc74f7 : U*9fc348f187 {
	struct UClass* *5e8ca1a70e; // 0x30(0x08)
	struct UClass* *cb2b85c7af; // 0x38(0x08)
	struct UModPropertyItemArrayWidget* *15cca63c33; // 0x40(0x08)
	struct UModPropertyItemWidget* *1a02fa3ca2; // 0x48(0x08)
	struct UTslMenuNumericTextBoxWidget* *c34d700482; // 0x50(0x08)
	struct UScrollBox* *2ae6ac46de; // 0x58(0x08)
	struct TArray<struct UModDeviceEditorItemSlotWidget*> *6ee46c7581; // 0x60(0x10)
	struct TArray<struct UModDeviceEditorItemListWidget*> *f0f371322c; // 0x70(0x10)
	int32 *a856479e4a; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)

	void *3a9e2821a0(); // Function TslGameMode.*2456fc74f7.*3a9e2821a0 //  // @ game+0xe19bf0c
};

// Class TslGameMode.*de0ec21ec9
// Size: 0xa8 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct U*de0ec21ec9 : U*2456fc74f7 {
	struct TArray<struct UModDeviceEditorItemSlotWidget*> *a2700a94cb; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	void *3a9e2821a0(); // Function TslGameMode.*de0ec21ec9.*3a9e2821a0 //  // @ game+0xe19bf0c
};

// Class TslGameMode.*4fe3606d14
// Size: 0x98 (Inherited: 0x90)  [layout: KHOP]
struct U*4fe3606d14 : U*2456fc74f7 {
	struct UModDeviceEditorItemSlotWidget* *4b576ce366; // 0x90(0x08)

	void *3a9e2821a0(); // Function TslGameMode.*4fe3606d14.*3a9e2821a0 //  // @ game+0xe19bf0c
};

// Class TslGameMode.*9f78dd6f63
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*9f78dd6f63 : U*9fc348f187 {
	struct UClass* *7da7d94f8d; // 0x30(0x08)
	struct UModOptionSelectorDeviceSlotWidget* *471ca18112; // 0x38(0x08)
	struct UModPropertyDeviceElementWidget* *ded7d211ea; // 0x40(0x08)
	struct TArray<struct UModOptionSelectorDeviceSlotWidget*> *96c4bfc34f; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	void *36c1294cac(); // Function TslGameMode.*9f78dd6f63.*36c1294cac //  // @ game+0xe1a0808
};

// Class TslGameMode.ModDeviceOptionSelectorWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceOptionSelectorWidget : UUmgBaseWidget {
	struct UVerticalBox* VerticalBoxFirst; // 0x420(0x08)
	struct UVerticalBox* VerticalBoxSecond; // 0x428(0x08)
	struct UWidgetSwitcher* WidgetSwitcherSearch; // 0x430(0x08)
	struct UModEventManagerSearchWidget* WidgetSearch; // 0x438(0x08)
	struct UWidgetSwitcher* WidgetSwitcherItemAction; // 0x440(0x08)
	struct UTslMenuNumericTextBoxWidget* NumericTextBoxWidget; // 0x448(0x08)
	struct UButton* ButtonConfirm; // 0x450(0x08)
	struct UButton* ButtonCancel; // 0x458(0x08)
	struct UScrollBox* ScrollBoxObjList; // 0x460(0x08)
	struct UClass* ModDeviceEventOptionSelectorLogic; // 0x468(0x08)
	struct UClass* ModDeviceMultiItemOptionSelectorLogic; // 0x470(0x08)
	struct UClass* ModDeviceItemOptionSelectorLogic; // 0x478(0x08)
	struct UClass* ModDeviceOptionSelectorLogic; // 0x480(0x08)
	char pad_488[0x10]; // 0x488(0x10)

	void CloseWidget(); // Function TslGameMode.ModDeviceOptionSelectorWidget.CloseWidget //  // @ game+0xe194e1c
	void OnClickedCancel(); // Function TslGameMode.ModDeviceOptionSelectorWidget.OnClickedCancel //  // @ game+0xdbdbab4
	void OnClickedConfirm(); // Function TslGameMode.ModDeviceOptionSelectorWidget.OnClickedConfirm //  // @ game+0x11fadb0
};

// Class TslGameMode.ModDevicePropertyWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModDevicePropertyWidget : UUmgBaseWidget {
	struct UScrollBox* Content; // 0x420(0x08)
	struct UClass* DefaultWidgetFactoryClass; // 0x428(0x08)
	struct U*366ebe387e* DefaultWidgetFactory; // 0x430(0x08)
	struct UModPropertyBaseElementWidget* RootElementWidget; // 0x438(0x08)
	char pad_440[0x58]; // 0x440(0x58)
};

// Class TslGameMode.ModDeviceTypeCache
// Size: 0x490 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AModDeviceTypeCache : AActor {
	char pad_400[0x70]; // 0x400(0x70)
	struct TArray<struct FModDeviceInstanceObjectData> *f8d6b53f7d; // 0x470(0x10) rep=OnRep_ModDeviceInstanceData
	int16 DeviceType; // 0x480(0x02)
	char pad_482[0xe]; // 0x482(0x0e)

	void OnRep_ModDeviceInstanceData(); // Function TslGameMode.ModDeviceTypeCache.OnRep_ModDeviceInstanceData //  // @ game+0xe19f25c
};

// Class TslGameMode.ModDeviceWidget
// Size: 0x6d0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModDeviceWidget : UBlockInputUserWidget {
	float ApplyInterval; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TMap<struct FName, struct FModEditManagerSubTabData> SubTabDataMap; // 0x478(0x50)
	struct UClass* DeviceToolTipWidgetClass; // 0x4c8(0x08)
	int32 TooltipZOrder; // 0x4d0(0x04)
	float ShowTooltipTime; // 0x4d4(0x04)
	struct FVector2D ToolTipOffset; // 0x4d8(0x08)
	struct TMap<enum class ETextChangeRejectReason, struct FText> ChangeRejectMessageMap; // 0x4e0(0x50)
	struct FText TriggerLimitText; // 0x530(0x18)
	struct U*7fa8406bd3* AniExpand; // 0x548(0x08)
	struct UTslCondEditableText* EditableTextDeviceName; // 0x550(0x08)
	struct UTextBlock* TextBlockDeviceObjName; // 0x558(0x08)
	struct UModDeviceOptionSelectorWidget* DeviceOptionSelectorWidget; // 0x560(0x08)
	struct UWidgetSwitcher* DeviceWidgetSwitcher; // 0x568(0x08)
	struct UModDevicePropertyWidget* PropertyWidget; // 0x570(0x08)
	struct UModDeviceEventWidget* EventWidget; // 0x578(0x08)
	struct UModEditManagerSubTabListWidget* TabListWidget; // 0x580(0x08)
	struct UImage* ImageDeviceIcon; // 0x588(0x08)
	struct UBorder* BorderExpander; // 0x590(0x08)
	struct UTslCommonButton* ButtonApply; // 0x598(0x08)
	struct UTslCommonButton* ButtonReset; // 0x5a0(0x08)
	struct UTslCommonButton* ButtonCancel; // 0x5a8(0x08)
	struct UTslCommonButton* ButtonViewEvent; // 0x5b0(0x08)
	struct UModPanelTimerWidget* ApplyTimerWidget; // 0x5b8(0x08)
	struct UModLimitEntryWidget* TriggerEventCountWidget; // 0x5c0(0x08)
	struct UTexture2D* DeviceIconTexture; // 0x5c8(0x08)
	struct UTslTooltipWidget* DeviceToolTipWidget; // 0x5d0(0x08)
	char pad_5D8[0xf8]; // 0x5d8(0xf8)

	void OnDeviceIconLoaded(); // Function TslGameMode.ModDeviceWidget.OnDeviceIconLoaded //  // @ game+0xe19a944
	void CloseWidget(); // Function TslGameMode.ModDeviceWidget.CloseWidget //  // @ game+0xe194e30
	void OnDeviceNameRejected(); // Function TslGameMode.ModDeviceWidget.OnDeviceNameRejected //  // @ game+0xe19aa4c
	void OnClicked_ButtonReset(); // Function TslGameMode.ModDeviceWidget.OnClicked_ButtonReset //  // @ game+0xe199ce0
	void OnSubTabClicked(); // Function TslGameMode.ModDeviceWidget.OnSubTabClicked //  // @ game+0xe1a252c
	void OnClicked_ButtonCancel(); // Function TslGameMode.ModDeviceWidget.OnClicked_ButtonCancel //  // @ game+0xe194e30
	void OnDeviceNameCommitted(); // Function TslGameMode.ModDeviceWidget.OnDeviceNameCommitted //  // @ game+0xe19a96c
	void OnClicked_ButtonViewEvent(); // Function TslGameMode.ModDeviceWidget.OnClicked_ButtonViewEvent //  // @ game+0xe199cf4
	void OnClicked_ButtonApply(); // Function TslGameMode.ModDeviceWidget.OnClicked_ButtonApply //  // @ game+0xe199ca4
};

// Class TslGameMode.ModDoorFrameComponent
// Size: 0xc70 (Inherited: 0xc70)  [layout: KHOP]
struct UModDoorFrameComponent : UDoorFrameComponent {
};

// Class TslGameMode.ModDummyAIController
// Size: 0x598 (Inherited: 0x568)  [layout: LECH - offset chi la uoc luong]
struct AModDummyAIController : ATslAIControllerBase {
	char pad_568[0x30]; // 0x568(0x30)
};

// Class TslGameMode.ModDummyAIPlayerState
// Size: 0x1150 (Inherited: 0x1140)  [layout: LECH - offset chi la uoc luong]
struct AModDummyAIPlayerState : ATslPlayerStateBase {
	bool *3c0c252c67; // 0x1140(0x01)
	char pad_1141[0xf]; // 0x1141(0x0f)
};

// Class TslGameMode.ModEditManagerCategoryGroupWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UModEditManagerCategoryGroupWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockLabel; // 0x420(0x08)
	struct UVerticalBox* VerticalBoxItems; // 0x428(0x08)
};

// Class TslGameMode.ModEditManagerDetailWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerDetailWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockCategory; // 0x420(0x08)
	struct UTextBlock* TextBlockTitle; // 0x428(0x08)
	struct UTslRichTextBlock* DescriptionBlock; // 0x430(0x08)
	struct TArray<struct FText> ExtraCategoryStack; // 0x438(0x10)
	char pad_448[0x30]; // 0x448(0x30)
};

// Class TslGameMode.ModEditManagerEndGroupEntryWidget
// Size: 0x500 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerEndGroupEntryWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UModPropertyBGWidget* WidgetBG; // 0x490(0x08)
	struct FSlateColor TextColorNormal; // 0x498(0x28)
	struct FSlateColor TextColorHighlighted; // 0x4c0(0x28)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void OnButtonClicked(); // Function TslGameMode.ModEditManagerEndGroupEntryWidget.OnButtonClicked //  // @ game+0xdbdc908
};

// Class TslGameMode.ModEditManagerEndGroupListWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerEndGroupListWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UVerticalBox* VerticalBoxList; // 0x490(0x08)
	struct UClass* GroupEntryWidgetClass; // 0x498(0x08)
	struct TArray<struct UModEditManagerEndGroupEntryWidget*> GroupEntryWidgets; // 0x4a0(0x10)
	struct UModEditManagerEndGroupEntryWidget* SelectedWidget; // 0x4b0(0x08)
	char pad_4B8[0x18]; // 0x4b8(0x18)
};

// Class TslGameMode.ModEditManagerFormCtrlListWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UModEditManagerFormCtrlListWidget : UUmgBaseWidget {
	struct UVerticalBox* VerticalBoxList; // 0x420(0x08)
};

// Class TslGameMode.ModEditManagerObjectListWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerObjectListWidget : UUmgBaseWidget {
	struct UWrapBox* WrapBoxGrid; // 0x420(0x08)
	struct UClass* ObjectSlotWidgetClass; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
};

// Class TslGameMode.ModEditManagerObjectSlotWidget
// Size: 0x5f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerObjectSlotWidget : UUmgBaseWidget {
	struct UBorder* HighlightBorder; // 0x420(0x08)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x428(0x08)
	struct UButton* ButtonItem; // 0x430(0x08)
	struct UWidgetSwitcher* SwitcherIconAni; // 0x438(0x08)
	struct UImage* ImageIcon; // 0x440(0x08)
	struct UImage* ImageIconAni; // 0x448(0x08)
	struct UImage* ImageSelectedBg; // 0x450(0x08)
	struct FLinearColor ColorNormal; // 0x458(0x10)
	struct FLinearColor ColorHighlighted; // 0x468(0x10)
	struct TMap<enum class EModObjectType, struct UMaterialInterface*> IconAniMap; // 0x478(0x50)
	char pad_4C8[0x128]; // 0x4c8(0x128)

	void OnButtonHovered(); // Function TslGameMode.ModEditManagerObjectSlotWidget.OnButtonHovered //  // @ game+0xe1978d0
	void OnButtonClicked(); // Function TslGameMode.ModEditManagerObjectSlotWidget.OnButtonClicked //  // @ game+0xe197694
	void OnIconLoaded(); // Function TslGameMode.ModEditManagerObjectSlotWidget.OnIconLoaded //  // @ game+0xe19bc7c
	void OnButtonUnhovered(); // Function TslGameMode.ModEditManagerObjectSlotWidget.OnButtonUnhovered //  // @ game+0xe1979ac
};

// Class TslGameMode.ModEditManagerQuickSlotListWidget
// Size: 0x478 (Inherited: 0x420)  [layout: KHOP]
struct UModEditManagerQuickSlotListWidget : UUmgBaseWidget {
	struct UHorizontalBox* QuickSlotListBox; // 0x420(0x08)
	struct TMap<int32, struct UModEditManagerQuickSlotWidget*> QuickSlotWidgetMap; // 0x428(0x50)
};

// Class TslGameMode.ModEditManagerSubTabEntryWidget
// Size: 0x4a0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerSubTabEntryWidget : UUmgBaseWidget {
	struct UButton* ButtonTab; // 0x420(0x08)
	struct UTextBlock* TextBlockNormal; // 0x428(0x08)
	struct UTextBlock* TextBlockSelected; // 0x430(0x08)
	struct UTextBlock* TextBlockHover; // 0x438(0x08)
	struct UWidgetSwitcher* SwitcherTab; // 0x440(0x08)
	char pad_448[0x58]; // 0x448(0x58)

	void OnLabelButtonClicked(); // Function TslGameMode.ModEditManagerSubTabEntryWidget.OnLabelButtonClicked //  // @ game+0xe19c258
	void OnLabelButtonOut(); // Function TslGameMode.ModEditManagerSubTabEntryWidget.OnLabelButtonOut //  // @ game+0xe19c314
	void OnLabelButtonHover(); // Function TslGameMode.ModEditManagerSubTabEntryWidget.OnLabelButtonHover //  // @ game+0xe19c300
};

// Class TslGameMode.ModEditManagerSubTabListWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UModEditManagerSubTabListWidget : UUmgBaseWidget {
	struct UHorizontalBox* HorizontalBoxTabs; // 0x420(0x08)
	struct UClass* TabWidgetClass; // 0x428(0x08)
};

// Class TslGameMode.ModEditManagerTabEntryWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerTabEntryWidget : UUmgBaseWidget {
	struct FLinearColor LabelTextNormalColor; // 0x420(0x10)
	struct FLinearColor LabelTextHighlightColor; // 0x430(0x10)
	struct UButton* ButtonTab; // 0x440(0x08)
	struct UTextBlock* TextBlockLabel; // 0x448(0x08)
	struct UBorder* BorderActive; // 0x450(0x08)
	struct USizeBox* SizeBoxHighlightDecoration; // 0x458(0x08)
	char pad_460[0x50]; // 0x460(0x50)

	void OnLabelButtonClicked(); // Function TslGameMode.ModEditManagerTabEntryWidget.OnLabelButtonClicked //  // @ game+0xe19c278
};

// Class TslGameMode.ModEditManagerTabListWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UModEditManagerTabListWidget : UUmgBaseWidget {
	struct UHorizontalBox* HorizontalBoxTabs; // 0x420(0x08)
	struct UClass* TabWidgetClass; // 0x428(0x08)
};

// Class TslGameMode.ModEditManagerWidget
// Size: 0x650 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerWidget : UBlockInputUserWidget {
	struct UDataTable* TabInfoDataTable; // 0x470(0x08)
	struct FText DirtyPopupMessageText; // 0x478(0x18)
	struct FText ResetPopupTitle; // 0x490(0x18)
	struct FText ResetPopupMsg; // 0x4a8(0x18)
	struct UTextBlock* WidgetTitleText; // 0x4c0(0x08)
	struct UModEditManagerTabListWidget* TabListWidget; // 0x4c8(0x08)
	struct UModEditManagerSubTabListWidget* SubTabListWidget; // 0x4d0(0x08)
	struct UBorder* BorderEndGroupCategory; // 0x4d8(0x08)
	struct UModEditManagerEndGroupListWidget* WidgetEndGroupList; // 0x4e0(0x08)
	struct UWidgetSwitcher* SwitcherContentsList; // 0x4e8(0x08)
	struct UModEditManagerObjectListWidget* ObjectListWidget; // 0x4f0(0x08)
	struct UModRulesetEditWidget* RulesetEditWidget; // 0x4f8(0x08)
	struct UModPlayOptionEditWidget* PlayOptionEditWidget; // 0x500(0x08)
	struct UModTeamSelectionWidget* TeamSelectionWidget; // 0x508(0x08)
	struct UModCreatorInfoWidget* CreatorInfoWidget; // 0x510(0x08)
	struct UModEditManagerDetailWidget* DetailWidget; // 0x518(0x08)
	struct USpacer* SpacerQuickSlot; // 0x520(0x08)
	struct UWidgetSwitcher* SwitcherModRunState; // 0x528(0x08)
	struct UButton* ButtonPlay; // 0x530(0x08)
	struct UButton* ButtonEdit; // 0x538(0x08)
	struct UButton* ButtonApply; // 0x540(0x08)
	struct UButton* ButtonSaveAs; // 0x548(0x08)
	struct UButton* ButtonSave; // 0x550(0x08)
	struct UButton* ButtonLoad; // 0x558(0x08)
	struct UButton* ButtonCancel; // 0x560(0x08)
	struct UButton* ButtonReset; // 0x568(0x08)
	struct UModPanelTimerWidget* ApplyTimerWidget; // 0x570(0x08)
	struct UModPanelTimerWidget* SaveTimerWidget; // 0x578(0x08)
	struct UModPanelTimerWidget* SaveAsTimerWidget; // 0x580(0x08)
	struct UBorder* QuickSlotListBorder; // 0x588(0x08)
	struct UModEditManagerQuickSlotListWidget* QuickSlotListWidget; // 0x590(0x08)
	struct TMap<struct FName, struct FModEditManagerMainTabData> TabDatas; // 0x598(0x50)
	struct UModEditManagerObjectSlotWidget* CurrentSelectObjectSlot; // 0x5e8(0x08)
	struct TArray<struct UButton*> EditStateEnabledButtons; // 0x5f0(0x10)
	struct TArray<struct UButton*> SaveButtons; // 0x600(0x10)
	struct TArray<struct UButton*> HostPlayerEnabledButtons; // 0x610(0x10)
	char pad_620[0x30]; // 0x620(0x30)

	void OnSaveAsButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnSaveAsButtonClicked //  // @ game+0xe1a054c
	void OnResetButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnResetButtonClicked //  // @ game+0xe19feb8
	void CheckDirtyPlay(); // Function TslGameMode.ModEditManagerWidget.CheckDirtyPlay //  // @ game+0xe193884
	void OnApplyButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnApplyButtonClicked //  // @ game+0xe197228
	void OnQuickSlotSelected(); // Function TslGameMode.ModEditManagerWidget.OnQuickSlotSelected //  // @ game+0xe19eae0
	void OnLoadButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnLoadButtonClicked //  // @ game+0xe19c3e0
	void OnMainTabClicked(); // Function TslGameMode.ModEditManagerWidget.OnMainTabClicked //  // @ game+0xe19c5a4
	void OnPlayButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnPlayButtonClicked //  // @ game+0xe19dfc8
	void CheckDirtyChangeMainTab(); // Function TslGameMode.ModEditManagerWidget.CheckDirtyChangeMainTab //  // @ game+0xe193774
	void OnCancelButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnCancelButtonClicked //  // @ game+0xe197adc
	void OnSubTabClicked(); // Function TslGameMode.ModEditManagerWidget.OnSubTabClicked //  // @ game+0xe1a25b4
	void CheckDirtyChangeSubTab(); // Function TslGameMode.ModEditManagerWidget.CheckDirtyChangeSubTab //  // @ game+0xe1937fc
	void OnResetPopupButtonPressed(); // Function TslGameMode.ModEditManagerWidget.OnResetPopupButtonPressed //  // @ game+0xe19fecc
	void OnChangeCustomHostPlayer(); // Function TslGameMode.ModEditManagerWidget.OnChangeCustomHostPlayer //  // @ game+0xe198424
	void OnEditButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnEditButtonClicked //  // @ game+0xe19abf8
	void OnSaveButtonClicked(); // Function TslGameMode.ModEditManagerWidget.OnSaveButtonClicked //  // @ game+0xe1a0560
};

// Class TslGameMode.*8df2d5e847
// Size: 0x120 (Inherited: 0x110)  [layout: KHOP]
struct U*8df2d5e847 : U*1cce1960fb {
	struct TArray<struct FString> *aa5a3f205c; // 0x110(0x10)

	void *73575e95ed(); // Function TslGameMode.*8df2d5e847.*73575e95ed //  // @ game+0xe1ac63c
};

// Class TslGameMode.ModEventManagerDeviceEntryWidget
// Size: 0x5b0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEventManagerDeviceEntryWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct FLinearColor ColorHighlighted; // 0x490(0x10)
	struct FLinearColor ColorNormal; // 0x4a0(0x10)
	struct UTexture2D* IconTexture; // 0x4b0(0x08)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x4b8(0x08)
	struct UTextBlock* TextBlockTrigger; // 0x4c0(0x08)
	struct UTextBlock* TextBlockAction; // 0x4c8(0x08)
	struct UImage* ImageSelectedBg; // 0x4d0(0x08)
	struct UImage* ImageIcon; // 0x4d8(0x08)
	struct UImage* ImageIconAni; // 0x4e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcherIcon; // 0x4e8(0x08)
	struct UGridPanel* PanelArrow; // 0x4f0(0x08)
	struct UButton* ButtonItem; // 0x4f8(0x08)
	char pad_500[0xb0]; // 0x500(0xb0)

	void OnClicked(); // Function TslGameMode.ModEventManagerDeviceEntryWidget.OnClicked //  // @ game+0xdbdc908
	void OnUnhovered(); // Function TslGameMode.ModEventManagerDeviceEntryWidget.OnUnhovered //  // @ game+0xe1a39b4
	void OnHovered(); // Function TslGameMode.ModEventManagerDeviceEntryWidget.OnHovered //  // @ game+0xe19bb8c
};

// Class TslGameMode.ModEventManagerEventEntryWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEventManagerEventEntryWidget : UUmgBaseWidget {
	char pad_420[0x80]; // 0x420(0x80)
	struct UTexture2D* IconTexture; // 0x4a0(0x08)
	struct UTextBlock* TextBlockLabel; // 0x4a8(0x08)
	struct UTextBlock* TextBlockEventName; // 0x4b0(0x08)
	struct UTextBlock* TextBlockDisplayOrder; // 0x4b8(0x08)
	struct UImage* ImageIcon; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class TslGameMode.ModEventManagerEventListWidget
// Size: 0x510 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEventManagerEventListWidget : UUmgBaseWidget {
	struct UTexture2D* IconTexture; // 0x420(0x08)
	char pad_428[0x88]; // 0x428(0x88)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x4b0(0x08)
	struct UButton* ButtonFold; // 0x4b8(0x08)
	struct UVerticalBox* VerticalBoxChild; // 0x4c0(0x08)
	struct UImage* ImageIcon; // 0x4c8(0x08)
	struct UImage* ImageIconAni; // 0x4d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcherIcon; // 0x4d8(0x08)
	struct UTextBlock* TextBlockChildNum; // 0x4e0(0x08)
	struct UTextBlock* TextBlockChildName; // 0x4e8(0x08)
	struct UClass* EventEntryWidgetClass; // 0x4f0(0x08)
	struct TArray<struct UModEventManagerEventEntryWidget*> CacheEventEntryWidgets; // 0x4f8(0x10)
	char pad_508[0x8]; // 0x508(0x08)

	void OnButtonFoldClicked(); // Function TslGameMode.ModEventManagerEventListWidget.OnButtonFoldClicked //  // @ game+0xe1978bc
};

// Class TslGameMode.ModEventManagerSearchWidget
// Size: 0x4c0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModEventManagerSearchWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UEditableText* EditableTextKeyword; // 0x490(0x08)
	struct UButton* ButtonClearKeyword; // 0x498(0x08)
	float DelayedSendSearchKeywordTime; // 0x4a0(0x04)
	char pad_4A4[0x1c]; // 0x4a4(0x1c)

	void OnSearchKeywordCommitted(); // Function TslGameMode.ModEventManagerSearchWidget.OnSearchKeywordCommitted //  // @ game+0xe1a0574
	void ClearKeyword(); // Function TslGameMode.ModEventManagerSearchWidget.ClearKeyword //  // @ game+0xe193908
};

// Class TslGameMode.ModEventManagerTriggerActionListWidget
// Size: 0x440 (Inherited: 0x420)  [layout: KHOP]
struct UModEventManagerTriggerActionListWidget : UUmgBaseWidget {
	struct UVerticalBox* VerticalBoxEventList; // 0x420(0x08)
	struct UClass* EventListWidgetClass; // 0x428(0x08)
	struct TArray<struct UModEventManagerEventListWidget*> CacheEventListWidgets; // 0x430(0x10)
};

// Class TslGameMode.ModEventManagerWidget
// Size: 0x510 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModEventManagerWidget : UBlockInputUserWidget {
	struct UModEventManagerSearchWidget* WidgetSearch; // 0x470(0x08)
	struct UModEventManagerTriggerActionListWidget* WidgetTrigger; // 0x478(0x08)
	struct UModEventManagerTriggerActionListWidget* WidgetAction; // 0x480(0x08)
	struct UVerticalBox* VerticalBoxDeviceList; // 0x488(0x08)
	struct UTslCommonButton* ButtonEdit; // 0x490(0x08)
	struct UTslCommonButton* ButtonTeleport; // 0x498(0x08)
	struct UTslCommonButton* ButtonCancel; // 0x4a0(0x08)
	struct UTslCommonButton* ButtonDelete; // 0x4a8(0x08)
	struct UBorder* BorderTriggerAction; // 0x4b0(0x08)
	struct UImage* ImageLoadingSpinner; // 0x4b8(0x08)
	struct UClass* DeviceEntryWidgetClass; // 0x4c0(0x08)
	struct TArray<struct UModEventManagerDeviceEntryWidget*> DeviceEntryCache; // 0x4c8(0x10)
	struct TArray<struct UModEventManagerDeviceEntryWidget*> CurrentDeviceEntryList; // 0x4d8(0x10)
	struct UModEventManagerDeviceEntryWidget* LastSelectedDeviceEntryWidget; // 0x4e8(0x08)
	char pad_4F0[0x20]; // 0x4f0(0x20)

	void OnTeleportClicked(); // Function TslGameMode.ModEventManagerWidget.OnTeleportClicked //  // @ game+0xe1a35e0
	void OnEditClicked(); // Function TslGameMode.ModEventManagerWidget.OnEditClicked //  // @ game+0xe19ac0c
	void OnDeleteClicked(); // Function TslGameMode.ModEventManagerWidget.OnDeleteClicked //  // @ game+0xe19a930
	void OnCancelClicked(); // Function TslGameMode.ModEventManagerWidget.OnCancelClicked //  // @ game+0xe197af0
};

// Class TslGameMode.ModSampleData
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UModSampleData : UObject {
	struct FFilePath PUGCFilePath; // 0x30(0x10)
	struct FString JsonStringData; // 0x40(0x10)
};

// Class TslGameMode.*efaf59ff72
// Size: 0xa50 (Inherited: 0xa00)  [layout: LECH - offset chi la uoc luong]
struct U*efaf59ff72 : UBillboardComponent {
	struct TMap<enum class EModHeadIconType, struct UTexture2D*> *045f4985b9; // 0x9f8(0x50)
	enum class EModHeadIconType *fffda4cd23; // 0xa48(0x01) rep=OnRep_HeadIconType
	char pad_A49[0x7]; // 0xa49(0x07)

	void OnRep_HeadIconType(); // Function TslGameMode.*efaf59ff72.OnRep_HeadIconType //  // @ game+0xe19f114
	void ClientOnDeath(); // Function TslGameMode.*efaf59ff72.ClientOnDeath //  // @ game+0xe193f08
};

// Class TslGameMode.*2b1323b85d
// Size: 0x600 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*2b1323b85d : U*13a763f8f8 {
	char pad_2D0[0x230]; // 0x2d0(0x230)
	float *39c7958eab; // 0x500(0x04)
	float *c3928fe450; // 0x504(0x04)
	float GravityScale; // 0x508(0x04) rep=OnRep_GravityScale
	float *6a9d38322f; // 0x50c(0x04) rep=OnRep_JumpScale
	float NextRespawnTimeSeconds; // 0x510(0x04) rep=OnRep_NextRespawnTimeSeconds
	int32 *70ee542856; // 0x514(0x04) rep=OnRep_SelectedTeamID
	bool *40ada84aec; // 0x518(0x01) rep=OnRep_HealthBarTextVisible
	enum class EModHeadIconType *fffda4cd23; // 0x519(0x01)
	char pad_51A[0x6]; // 0x51a(0x06)
	struct UClass* *0772d1bb16; // 0x520(0x08)
	struct TArray<struct FString> *70ce971324; // 0x528(0x10)
	float *5cbb4efa00; // 0x538(0x04) rep=OnRep_PersonalPoint
	float *6a8af0a968; // 0x53c(0x04) rep=OnRep_PersonalPoint
	struct TArray<struct FModDeviceInstanceID> *bab7e051c2; // 0x540(0x10) rep=OnRep_VisibleCheckpoints
	char pad_550[0x50]; // 0x550(0x50)
	struct FVector *188c7ab6f0; // 0x5a0(0x0c) rep=OnRep_NextCheckpoint
	int32 *9fee0c6ba2; // 0x5ac(0x04) rep=OnRep_NextCheckpoint
	struct FModDeviceInstanceID *9be190f5f3; // 0x5b0(0x04) rep=OnRep_NextCheckpoint
	bool *dbdfa70f7f; // 0x5b4(0x01) rep=OnRep_NextCheckpoint
	bool *0e66cb32cd; // 0x5b5(0x01) rep=OnRep_NextCheckpoint
	char pad_5B6[0x2]; // 0x5b6(0x02)
	int32 *1914399263; // 0x5b8(0x04) rep=OnRep_NextCheckpoint
	char pad_5BC[0xc]; // 0x5bc(0x0c)
	struct TArray<float> *f88b4685e8; // 0x5c8(0x10) rep=OnRep_RecordTime
	int32 *872b18d208; // 0x5d8(0x04) rep=OnRep_RecordTime
	char pad_5DC[0x24]; // 0x5dc(0x24)

	void OnRep_RecordTime(); // Function TslGameMode.*2b1323b85d.OnRep_RecordTime //  // @ game+0xe19f800
	void OnRep_NextCheckpoint(); // Function TslGameMode.*2b1323b85d.OnRep_NextCheckpoint //  // @ game+0xe19f394
	void OnRep_SelectedTeamID(); // Function TslGameMode.*2b1323b85d.OnRep_SelectedTeamID //  // @ game+0xe19f904
	void *91042e392a(); // Function TslGameMode.*2b1323b85d.*91042e392a //  // @ game+0xe195fac
	void OnRep_HealthBarTextVisible(); // Function TslGameMode.*2b1323b85d.OnRep_HealthBarTextVisible //  // @ game+0xe19f12c
	void OnRep_PersonalPoint(); // Function TslGameMode.*2b1323b85d.OnRep_PersonalPoint //  // @ game+0xe19f3f4
	void OnRep_VisibleCheckpoints(); // Function TslGameMode.*2b1323b85d.OnRep_VisibleCheckpoints //  // @ game+0xe19fac8
	void OnRep_GravityScale(); // Function TslGameMode.*2b1323b85d.OnRep_GravityScale //  // @ game+0xe19f100
	void OnRep_JumpScale(); // Function TslGameMode.*2b1323b85d.OnRep_JumpScale //  // @ game+0xe19f198
	void *066bb6dba0(); // Function TslGameMode.*2b1323b85d.*066bb6dba0 //  // @ game+0xe1a9324
	void OnRep_NextRespawnTimeSeconds(); // Function TslGameMode.*2b1323b85d.OnRep_NextRespawnTimeSeconds //  // @ game+0x1053c04
};

// Class TslGameMode.*3c39ad6165
// Size: 0xf40 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*3c39ad6165 : U*606d3b4d41 {
	char pad_240[0x5b0]; // 0x240(0x5b0)
	struct FModRuleSetSchemaData *e1e6ee098b; // 0x7f0(0x80)
	struct UDataTable* *4f32a21d84; // 0x870(0x08)
	struct UDataTable* ModMatchDataTable; // 0x878(0x08)
	float *1221139ba9; // 0x880(0x04)
	int32 *67d071c63a; // 0x884(0x04)
	struct TArray<struct UClass*> *2ceb6bb7ac; // 0x888(0x10)
	float *ae6ee6bf5d; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)
	struct TArray<struct UDataTable*> *180bc79e92; // 0x8a0(0x10) rep=OnRep_ModObjectDataTables
	struct TArray<struct UDataTable*> *c880dc67f5; // 0x8b0(0x10) rep=OnRep_ModItemDataTables
	enum class EModLaunchMode *1a9afd8de8; // 0x8c0(0x01) rep=OnRep_ModLaunchMode
	enum class EModRunState *857ec20c44; // 0x8c1(0x01) rep=OnRep_ModRunState
	bool *8431d9cd14; // 0x8c2(0x01) rep=OnRep_MatchStartAllowed
	char pad_8C3[0x5]; // 0x8c3(0x05)
	struct TArray<struct AModDeviceTypeCache*> *7ba84df8cc; // 0x8c8(0x10) rep=OnRep_ModDeviceTypeCaches
	struct TMap<int16, struct AModDeviceTypeCache*> *1b3d6a16eb; // 0x8d8(0x50)
	float *fe516050f4; // 0x928(0x04) rep=OnRep_DeviceEventCacheTime
	struct FModHostTeamControlData *f2e5dd4d7d; // 0x92c(0x08) rep=OnRep_HostTeamControlData
	char pad_934[0x4]; // 0x934(0x04)
	struct FModCreatorData *9ce291822c; // 0x938(0x60) rep=OnRep_CreatorData
	bool *e48e5035e9; // 0x998(0x01) rep=OnRep_HasDifferentLastModifier
	struct FModUserSelectableData *bd26a48e23; // 0x999(0x01) rep=OnRep_UserSelectableData
	char pad_99A[0x2]; // 0x99a(0x02)
	struct FModRoundRuleData *d42ee1cdf8; // 0x99c(0x1c) rep=OnRep_RoundRuleData
	struct FModCharacterRuleData *b7aa93c524; // 0x9b8(0x01) rep=OnRep_CharacterRuleData
	char pad_9B9[0x3]; // 0x9b9(0x03)
	struct FModGameRuleData *2473cec3bd; // 0x9bc(0x2c) rep=OnRep_GameRuleData
	struct UModRuleSetSchema* *b0ba8ccd74; // 0x9e8(0x08)
	struct UModRuleSetSchema* *666019fcb6; // 0x9f0(0x08)
	struct UModRuleSetSchema* *07c1d33908; // 0x9f8(0x08)
	struct UModRuleSetSchema* *5b76f4897f; // 0xa00(0x08)
	struct TMap<int16, struct UModDeviceSchema*> *42d8dd71d3; // 0xa08(0x50)
	char pad_A58[0xa0]; // 0xa58(0xa0)
	struct TArray<struct FModObjectSpawnLimitData> *cdc6e0c458; // 0xaf8(0x10) rep=OnRep_ObjectSpawnLimitArray
	bool *0439a6ff2d; // 0xb08(0x01)
	bool *d9d4de6660; // 0xb09(0x01)
	char pad_B0A[0x16]; // 0xb0a(0x16)
	struct TArray<struct F*13666deaa1> *8a6d59dffc; // 0xb20(0x10)
	struct TArray<struct FName> *084aba0717; // 0xb30(0x10) rep=OnRep_PreloadItemArray
	struct TArray<struct UAkAudioEvent*> *97c114a478; // 0xb40(0x10) rep=OnRep_PreloadSoundArray
	char pad_B50[0x3f0]; // 0xb50(0x3f0)

	void OnRep_UserSelectableData(); // Function TslGameMode.*3c39ad6165.OnRep_UserSelectableData //  // @ game+0xe19f25c
	void OnRep_PreloadItemArray(); // Function TslGameMode.*3c39ad6165.OnRep_PreloadItemArray //  // @ game+0xe19f41c
	void OnRep_ModDeviceTypeCaches(); // Function TslGameMode.*3c39ad6165.OnRep_ModDeviceTypeCaches //  // @ game+0xe19f278
	void OnRep_RoundRuleData(); // Function TslGameMode.*3c39ad6165.OnRep_RoundRuleData //  // @ game+0xe19f8c4
	void OnRep_HostTeamControlData(); // Function TslGameMode.*3c39ad6165.OnRep_HostTeamControlData //  // @ game+0xe19f140
	void OnRep_GameRuleData(); // Function TslGameMode.*3c39ad6165.OnRep_GameRuleData //  // @ game+0xe19f0d0
	void OnRep_CreatorData(); // Function TslGameMode.*3c39ad6165.OnRep_CreatorData //  // @ game+0xe19f01c
	void OnRep_HasDifferentLastModifier(); // Function TslGameMode.*3c39ad6165.OnRep_HasDifferentLastModifier //  // @ game+0xe19ac20
	void OnRep_CharacterRuleData(); // Function TslGameMode.*3c39ad6165.OnRep_CharacterRuleData //  // @ game+0xe19eea0
	void OnRep_ObjectSpawnLimitArray(); // Function TslGameMode.*3c39ad6165.OnRep_ObjectSpawnLimitArray //  // @ game+0xe19f3b0
	void OnRep_ModItemDataTables(); // Function TslGameMode.*3c39ad6165.OnRep_ModItemDataTables //  // @ game+0xe19f28c
	void OnRep_PreloadSoundArray(); // Function TslGameMode.*3c39ad6165.OnRep_PreloadSoundArray //  // @ game+0xe19f5cc
	void OnRep_DeviceEventCacheTime(); // Function TslGameMode.*3c39ad6165.OnRep_DeviceEventCacheTime //  // @ game+0xe19f090
	void OnRep_ModLaunchMode(); // Function TslGameMode.*3c39ad6165.OnRep_ModLaunchMode //  // @ game+0xe19f2a0
	void OnRep_ModObjectDataTables(); // Function TslGameMode.*3c39ad6165.OnRep_ModObjectDataTables //  // @ game+0xe19f2d0
	void OnRep_ModRunState(); // Function TslGameMode.*3c39ad6165.OnRep_ModRunState //  // @ game+0xe19f2f8
	void OnRep_MatchStartAllowed(); // Function TslGameMode.*3c39ad6165.OnRep_MatchStartAllowed //  // @ game+0x2d09f90
};

// Class TslGameMode.ModGhostObjectActor
// Size: 0x488 (Inherited: 0x400)  [layout: KHOP]
struct AModGhostObjectActor : AActor {
	struct UMaterialInterface* *b044f0b536; // 0x400(0x08)
	struct UMaterialInterface* *2392e37ff0; // 0x408(0x08)
	struct UMaterialInstanceDynamic* *e293e790f0; // 0x410(0x08)
	struct UMaterialInstanceDynamic* *cbea8ad6d0; // 0x418(0x08)
	char pad_420[0x28]; // 0x420(0x28)
	struct TArray<struct UStaticMeshComponent*> *ee36ca0b1e; // 0x448(0x10)
	struct TArray<struct USkeletalMeshComponent*> *172947efd9; // 0x458(0x10)
	struct TArray<struct UPrimitiveComponent*> *e765d97f2b; // 0x468(0x10)
	struct TArray<struct UPrimitiveComponent*> *0a77765199; // 0x478(0x10)
};

// Class TslGameMode.ModHouseActor
// Size: 0x420 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AModHouseActor : AActor {
	char pad_400[0x20]; // 0x400(0x20)
};

// Class TslGameMode.ModHUDKeyboardAndMouseHintWidget
// Size: 0x4d8 (Inherited: 0x4d8)  [layout: KHOP]
struct UModHUDKeyboardAndMouseHintWidget : UTslKeyHintWidget {
};

// Class TslGameMode.ModHUDKeyGuideElementWidget
// Size: 0x5b0 (Inherited: 0x5a0)  [layout: LECH - offset chi la uoc luong]
struct UModHUDKeyGuideElementWidget : UTslKeyboardMultipleKeyIconWidget {
	struct FName ActionName; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)
};

// Class TslGameMode.ModHUDKeyGuideWidget
// Size: 0x4a0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModHUDKeyGuideWidget : UUmgBaseWidget {
	struct UVerticalBox* KeyGuideList; // 0x420(0x08)
	struct UClass* KeyGuideElementClass; // 0x428(0x08)
	struct UStringTable* InputStringTable; // 0x430(0x08)
	float KeyGuideElementVerticalSpacing; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TMap<struct FName, struct FModHUDKeyGuideFunctionWrapper> ActionNameToCustomUpdateFunctionMap; // 0x440(0x50)
	char pad_490[0x10]; // 0x490(0x10)
};

// Class TslGameMode.ModHUDModeIndicatorWidget
// Size: 0x480 (Inherited: 0x420)  [layout: KHOP]
struct UModHUDModeIndicatorWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockLabel; // 0x420(0x08)
	struct UBorder* BorderMode; // 0x428(0x08)
	struct FLinearColor PlayBgColor; // 0x430(0x10)
	struct FLinearColor EditBgColor; // 0x440(0x10)
	struct FText PlayText; // 0x450(0x18)
	struct FText EditText; // 0x468(0x18)
};

// Class TslGameMode.ModHUDPointWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UModHUDPointWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockLabel; // 0x420(0x08)
	struct UTextBlock* TextBlockCurrent; // 0x428(0x08)
	struct UTextBlock* TextBlockTarget; // 0x430(0x08)
	struct FText Label; // 0x438(0x18)
};

// Class TslGameMode.ModHUDRankEntryWidget
// Size: 0x4e0 (Inherited: 0x420)  [layout: KHOP]
struct UModHUDRankEntryWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AniBold; // 0x420(0x08)
	struct UBorder* BorderTeam; // 0x428(0x08)
	struct UTextBlock* TextBlockRank; // 0x430(0x08)
	struct UTextBlock* TextBlockRankAni; // 0x438(0x08)
	struct UTextBlock* TextBlockTeamName; // 0x440(0x08)
	struct UTextBlock* TextBlockPoint; // 0x448(0x08)
	struct UTextBlock* TextBlockWin; // 0x450(0x08)
	bool bIsMyTeam; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FText RankFormatText; // 0x460(0x18)
	struct FText WinFormatText; // 0x478(0x18)
	struct FLinearColor MyBgColor; // 0x490(0x10)
	struct FLinearColor OpponentBgColor; // 0x4a0(0x10)
	struct FLinearColor MyTextColor; // 0x4b0(0x10)
	struct FLinearColor OpponentTextColor; // 0x4c0(0x10)
	struct UTexture2D* MyTexture; // 0x4d0(0x08)
	struct UTexture2D* OpponentTexture; // 0x4d8(0x08)
};

// Class TslGameMode.ModHUDRankListWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModHUDRankListWidget : UUmgBaseWidget {
	struct UVerticalBox* RankList; // 0x420(0x08)
	struct UTextBlock* TextBlockTargetPoint; // 0x428(0x08)
	struct UTextBlock* TextBlockTargetWin; // 0x430(0x08)
	struct UClass* RankEntryWidgetClass; // 0x438(0x08)
	int32 DisplayCount; // 0x440(0x04)
	char pad_444[0x2c]; // 0x444(0x2c)

	void OnTeamIdUpdated(); // Function TslGameMode.ModHUDRankListWidget.OnTeamIdUpdated //  // @ game+0xe1a35b8
};

// Class TslGameMode.ModHUDRankTrackWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModHUDRankTrackWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockTopScore; // 0x420(0x08)
	struct UTextBlock* TextBlockMyRank; // 0x428(0x08)
	struct UTextBlock* TextBlockMyScore; // 0x430(0x08)
	struct UImage* ImageGauge; // 0x438(0x08)
	struct UImage* ImageTopPoint; // 0x440(0x08)
	struct UImage* ImageMyPoint; // 0x448(0x08)
	struct UHorizontalBox* PanelTop; // 0x450(0x08)
	struct UHorizontalBox* PanelMine; // 0x458(0x08)
	float TextBoxHeight; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)
};

// Class TslGameMode.ModHUDSpawnLimitListWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UModHUDSpawnLimitListWidget : UTslUserWidget {
	struct UVerticalBox* SpawnLimitList; // 0x330(0x08)
	struct UClass* EntryWidgetClass; // 0x338(0x08)
};

// Class TslGameMode.ModHUDWidget
// Size: 0x4c0 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UModHUDWidget : UTslEventDrivenBaseWidget {
	struct UModHUDPointWidget* WidgetRound; // 0x440(0x08)
	struct UModHUDRankListWidget* WidgetRankList; // 0x448(0x08)
	struct UTslRoundTimeWidget* WidgetRoundTimer; // 0x450(0x08)
	struct UModHUDModeIndicatorWidget* WidgetModeIndicator; // 0x458(0x08)
	struct UModHUDKeyGuideWidget* WidgetKeyGuide; // 0x460(0x08)
	struct UWidgetSwitcher* WidgetSwitcherSpectator; // 0x468(0x08)
	struct UWidgetSwitcher* WidgetSwitcherInfoList; // 0x470(0x08)
	struct UHorizontalBox* SessionTimeHorizontalBox; // 0x478(0x08)
	struct UTextBlock* SessionTimeText; // 0x480(0x08)
	struct UCheckpointNavigationWidget* WidgetCheckpointNavigation; // 0x488(0x08)
	struct UModStopwatchWidget* StopwatchWidget; // 0x490(0x08)
	struct UModTimerWidget* TimerWidget; // 0x498(0x08)
	char pad_4A0[0x20]; // 0x4a0(0x20)

	void OnUpdateViewTarget(); // Function TslGameMode.ModHUDWidget.OnUpdateViewTarget //  // @ game+0xe1a3c94
};

// Class TslGameMode.*087e759cd2
// Size: 0x490 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*087e759cd2 : UActorComponent {
	float *526639615f; // 0x208(0x04)
	float *54ba6776c4; // 0x20c(0x04)
	struct UDataTable* *f078ada488; // 0x210(0x08)
	struct UDataTable* *b0079867b4; // 0x218(0x08)
	struct UDataTable* *0c4ca244bb; // 0x220(0x08)
	struct TMap<struct FName, struct FText> *4ae344c349; // 0x228(0x50)
	struct TMap<struct FName, struct FModInputPresetRow> *f27c1e8bd8; // 0x278(0x50)
	struct TMap<struct FName, struct F*a27bf2ab2c> *9f8044da5b; // 0x2c8(0x50)
	struct TMap<struct FInputChord, struct F*39f3d8bddc> *4b85fea1be; // 0x318(0x50)
	struct TMap<struct FName, struct U*5ed7932f40*> *70a953e24e; // 0x368(0x50)
	char pad_3B8[0xd8]; // 0x3b8(0xd8)
};

// Class TslGameMode.ModInputTextPopupWidget
// Size: 0x5a0 (Inherited: 0x560)  [layout: KHOP]
struct UModInputTextPopupWidget : UTslPopupBoxWidget {
	char pad_560[0x18]; // 0x560(0x18)
	struct UEditableText* InputTextName; // 0x578(0x08)
	struct UTextBlock* TextBlockWarning; // 0x580(0x08)
	struct UHorizontalBox* HorizontalBoxMessage; // 0x588(0x08)
	struct FString InvalidCharsPattern; // 0x590(0x10)

	void OnBtnOkClicked(); // Function TslGameMode.ModInputTextPopupWidget.OnBtnOkClicked //  // @ game+0x11fadb0
	void OnBtnCancelClicked(); // Function TslGameMode.ModInputTextPopupWidget.OnBtnCancelClicked //  // @ game+0xdbdbab4
};

// Class TslGameMode.ModSavePopupWidget
// Size: 0x640 (Inherited: 0x5a0)  [layout: LECH - offset chi la uoc luong]
struct UModSavePopupWidget : UModInputTextPopupWidget {
	float SaveMessageDuration; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FText SaveOverwriteSameNameText; // 0x5a8(0x18)
	struct FText SaveOverwriteSameNameDescText; // 0x5c0(0x18)
	struct FText SaveWarningInvalidText; // 0x5d8(0x18)
	struct FText SaveWarningInvalidDescText; // 0x5f0(0x18)
	struct FText SaveModSuccessText; // 0x608(0x18)
	struct FText SaveModFailText; // 0x620(0x18)
	char pad_638[0x8]; // 0x638(0x08)

	void OnBtnCancelClicked(); // Function TslGameMode.ModSavePopupWidget.OnBtnCancelClicked //  // @ game+0xdbdbab4
	void OnBtnOkClicked(); // Function TslGameMode.ModSavePopupWidget.OnBtnOkClicked //  // @ game+0x11fadb0
	void OnOverwritePopupConfirmClicked(); // Function TslGameMode.ModSavePopupWidget.OnOverwritePopupConfirmClicked //  // @ game+0xe19d148
	void OnPopupConfirmClicked(); // Function TslGameMode.ModSavePopupWidget.OnPopupConfirmClicked //  // @ game+0xe19dff0
};

// Class TslGameMode.*e2f5cc9251
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*e2f5cc9251 : U*96becd27f1 {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TslGameMode.*9cb9e111a8
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*9cb9e111a8 : U*e2f5cc9251 {

	void StartTestLogic(); // Function TslGameMode.*9cb9e111a8.StartTestLogic //  // @ game+0x43bab4
	void *28aba10656(); // Function TslGameMode.*9cb9e111a8.*28aba10656 //  // @ game+0xe193320
};

// Class TslGameMode.*10fb9fb44f
// Size: 0xb8 (Inherited: 0xb8)  [layout: KHOP]
struct U*10fb9fb44f : U*f29852c155 {
};

// Class TslGameMode.ModItemSlotTempWidget
// Size: 0x400 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModItemSlotTempWidget : UTslUserWidget {
	char pad_330[0x10]; // 0x330(0x10)
	struct UTslCommonButton* Button; // 0x340(0x08)
	struct UImage* IconImage; // 0x348(0x08)
	struct UTexture* Icon; // 0x350(0x20)
	char pad_370[0x90]; // 0x370(0x90)

	void OnButtonClicked(); // Function TslGameMode.ModItemSlotTempWidget.OnButtonClicked //  // @ game+0xe1976cc
	void OnIconLoaded(); // Function TslGameMode.ModItemSlotTempWidget.OnIconLoaded //  // @ game+0xe19bc90
};

// Class TslGameMode.ModLeaderboardPlayerEntry
// Size: 0x468 (Inherited: 0x420)  [layout: KHOP]
struct UModLeaderboardPlayerEntry : UUmgBaseWidget {
	struct UTextBlock* TextPlayer; // 0x420(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x428(0x08)
	struct UTextBlock* TextScore; // 0x430(0x08)
	struct FLinearColor MyPlayerTextColor; // 0x438(0x10)
	struct FLinearColor NormalPlayerNameColor; // 0x448(0x10)
	struct FLinearColor NormalScoreColor; // 0x458(0x10)
};

// Class TslGameMode.ModLeaderboardTeamEntry
// Size: 0x5a8 (Inherited: 0x420)  [layout: KHOP]
struct UModLeaderboardTeamEntry : UUmgBaseWidget {
	struct UTslObserverPlayerIconWidget* WidgetTeamIcon; // 0x420(0x08)
	struct UTextBlock* TextRanking; // 0x428(0x08)
	struct UImage* ImageHeader; // 0x430(0x08)
	struct UImage* ImageBody; // 0x438(0x08)
	struct UImage* ImageLine; // 0x440(0x08)
	struct UTextBlock* TextHeader; // 0x448(0x08)
	struct UTextBlock* TextScoreName; // 0x450(0x08)
	struct UTextBlock* TextScore; // 0x458(0x08)
	struct UVerticalBox* ListPlayer; // 0x460(0x08)
	struct UWidget* PanelContents; // 0x468(0x08)
	struct UWidget* PanelEmpty; // 0x470(0x08)
	struct UClass* PlayerEntryWidgetClass; // 0x478(0x08)
	struct TMap<enum class EModResultType, struct FText> ResultTypePointTextMap; // 0x480(0x50)
	struct FTeamVisualStyle WinnerTeamStyle; // 0x4d0(0x48)
	struct FTeamVisualStyle MyTeamStyle; // 0x518(0x48)
	struct FTeamVisualStyle NormalTeamStyle; // 0x560(0x48)
};

// Class TslGameMode.ModLeaderboardTeamList
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UModLeaderboardTeamList : UUmgBaseWidget {
	struct UWrapBox* ListTeams; // 0x420(0x08)
	struct UClass* TeamEntryWidgetClass; // 0x428(0x08)
	int32 ColumnsPerRow; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct FModLeaderboardEmptyRowRule> EmptyRowRulesByPlayerCount; // 0x438(0x10)
};

// Class TslGameMode.ModLimitEntryWidget
// Size: 0x3a8 (Inherited: 0x330)  [layout: KHOP]
struct UModLimitEntryWidget : UTslUserWidget {
	struct UTextBlock* TextBlockLimitType; // 0x330(0x08)
	struct UTextBlock* TextBlockCurrentAmount; // 0x338(0x08)
	struct UTextBlock* TextBlockSlash; // 0x340(0x08)
	struct UTextBlock* TextBlockSpawnLimit; // 0x348(0x08)
	enum class ELimitLevel DisplayLimitLevel; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TMap<enum class ELimitLevel, struct FSlateColor> WidgetTextColor; // 0x358(0x50)
};

// Class TslGameMode.*534ef84a22
// Size: 0x250 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*534ef84a22 : UActorComponent {
	struct UParticleSystem* *08ddb044e9; // 0x208(0x08)
	float OffsetAmount; // 0x210(0x04)
	struct FVector Offset; // 0x214(0x0c)
	struct UParticleSystemComponent* *7ea34add38; // 0x220(0x08)
	char pad_228[0x28]; // 0x228(0x28)
};

// Class TslGameMode.ModLoadPopupEntryWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModLoadPopupEntryWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct FLinearColor TextColor_Normal; // 0x430(0x10)
	struct FLinearColor TextColor_Highlight; // 0x440(0x10)
	struct UTslFlowingTextWidget* FlowTextName; // 0x450(0x08)
	struct UBorder* HighlightBorder; // 0x458(0x08)
	struct UTextBlock* TextBlockDate; // 0x460(0x08)
	struct UButton* ButtonSelect; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)

	void OnButtonSelectClicked(); // Function TslGameMode.ModLoadPopupEntryWidget.OnButtonSelectClicked //  // @ game+0xe197960
};

// Class TslGameMode.ModLoadPopupWidget
// Size: 0x630 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModLoadPopupWidget : UBlockInputUserWidget {
	struct UVerticalBox* VerticalBoxItems; // 0x470(0x08)
	struct UTslCommonButton* ButtonOK; // 0x478(0x08)
	struct UTslCommonButton* ButtonCancel; // 0x480(0x08)
	struct UTslCommonButton* ButtonDelete; // 0x488(0x08)
	struct UTslCommonButton* ButtonOpenExplorer; // 0x490(0x08)
	struct UTslCommonButton* ButtonFileNameTab; // 0x498(0x08)
	struct UTslCommonButton* ButtonFileSavedDateTab; // 0x4a0(0x08)
	struct UModEditManagerSubTabListWidget* SubTabListWidget; // 0x4a8(0x08)
	struct UHorizontalBox* LastLoaded_HorizontalBox; // 0x4b0(0x08)
	struct UTextBlock* TextLastLoaded; // 0x4b8(0x08)
	struct TMap<struct FName, struct FModEditManagerSubTabData> SubTabDataMap; // 0x4c0(0x50)
	struct UClass* EntryTemplate; // 0x510(0x08)
	struct FText LoadText; // 0x518(0x18)
	struct FText LoadDescText; // 0x530(0x18)
	struct FText LoadDeleteText; // 0x548(0x18)
	struct FText LoadDeleteDescText; // 0x560(0x18)
	struct FText LoadPatchText; // 0x578(0x18)
	struct FText LoadPatchDescText; // 0x590(0x18)
	struct TArray<struct UModLoadPopupEntryWidget*> CachedLoadEntries; // 0x5a8(0x10)
	char pad_5B8[0x78]; // 0x5b8(0x78)

	void OnPopupPatchOKClicked(); // Function TslGameMode.ModLoadPopupWidget.OnPopupPatchOKClicked //  // @ game+0xe19e548
	void OnFileNameTabClicked(); // Function TslGameMode.ModLoadPopupWidget.OnFileNameTabClicked //  // @ game+0xe19b724
	void OnFileSavedDateTabClicked(); // Function TslGameMode.ModLoadPopupWidget.OnFileSavedDateTabClicked //  // @ game+0xe19b738
	void OnButtonOKClicked(); // Function TslGameMode.ModLoadPopupWidget.OnButtonOKClicked //  // @ game+0xe1978f8
	void OnButtonDeleteClicked(); // Function TslGameMode.ModLoadPopupWidget.OnButtonDeleteClicked //  // @ game+0xe1977f4
	void OnPopupDeleteOKClicked(); // Function TslGameMode.ModLoadPopupWidget.OnPopupDeleteOKClicked //  // @ game+0xe19e064
	void OnPopupLoadOKClicked(); // Function TslGameMode.ModLoadPopupWidget.OnPopupLoadOKClicked //  // @ game+0xe19e2d8
	void OnButtonOpenExplorerClicked(); // Function TslGameMode.ModLoadPopupWidget.OnButtonOpenExplorerClicked //  // @ game+0xe19790c
	void OnSubTabClicked(); // Function TslGameMode.ModLoadPopupWidget.OnSubTabClicked //  // @ game+0xe1a263c
	void SelectEntryWidget(); // Function TslGameMode.ModLoadPopupWidget.SelectEntryWidget //  // @ game+0xe1a67fc
	void OnChangeHostPlayer(); // Function TslGameMode.ModLoadPopupWidget.OnChangeHostPlayer //  // @ game+0xe198948
	void OnButtonCancelClicked(); // Function TslGameMode.ModLoadPopupWidget.OnButtonCancelClicked //  // @ game+0xe197660
};

// Class TslGameMode.*2ab1578895
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*2ab1578895 : U*96becd27f1 {
	char pad_30[0x40]; // 0x30(0x40)
};

// Class TslGameMode.*f0a626b70e
// Size: 0x70 (Inherited: 0x70)  [layout: KHOP]
struct U*f0a626b70e : U*2ab1578895 {

	void StartTestLogic(); // Function TslGameMode.*f0a626b70e.StartTestLogic //  // @ game+0x43bab4
	void *d9da299ea8(); // Function TslGameMode.*f0a626b70e.*d9da299ea8 //  // @ game+0xda977bc
};

// Class TslGameMode.ModLogDetailElementWidget
// Size: 0x268 (Inherited: 0x258)  [layout: KHOP]
struct UModLogDetailElementWidget : UUserWidget {
	struct UStringTable* StringTable; // 0x258(0x08)
	struct UTslRichTextBlock* MessageBlock; // 0x260(0x08)
};

// Class TslGameMode.ModLogDetailListWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UModLogDetailListWidget : UUmgBaseWidget {
	struct UScrollBox* LogScrollBox; // 0x420(0x08)
	struct UVerticalBox* LogVerticalBox; // 0x428(0x08)
	struct UClass* LogDetailElementWidgetClass; // 0x430(0x08)
};

// Class TslGameMode.ModLogElementWidget
// Size: 0x320 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UModLogElementWidget : UUserWidget {
	char pad_258[0x90]; // 0x258(0x90)
	struct UStringTable* StringTable; // 0x2e8(0x08)
	struct UButton* SelfButton; // 0x2f0(0x08)
	struct UTextBlock* TimestampTextBlock; // 0x2f8(0x08)
	struct UTslRichTextBlock* MessageBlock; // 0x300(0x08)
	struct UImage* HighlightImage; // 0x308(0x08)
	struct USizeBox* MatchLogContentSizeBox; // 0x310(0x08)
	char pad_318[0x8]; // 0x318(0x08)

	void HandleButtonPressed(); // Function TslGameMode.ModLogElementWidget.HandleButtonPressed //  // @ game+0xe19521c
};

// Class TslGameMode.ModLogManager
// Size: 0x120 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModLogManager : UObject {
	char pad_30[0x70]; // 0x30(0x70)
	struct TArray<struct U*fdb0bb3dc7*> *24816ef807; // 0xa0(0x10)
	char pad_B0[0x70]; // 0xb0(0x70)
};

// Class TslGameMode.ModLogManagerDeviceElementWidget
// Size: 0x300 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UModLogManagerDeviceElementWidget : UUserWidget {
	struct UButton* DeviceButton; // 0x258(0x08)
	struct UImage* DeviceIconImage; // 0x260(0x08)
	struct UTextBlock* DeviceNameTextBlock; // 0x268(0x08)
	char pad_270[0x90]; // 0x270(0x90)

	void OnClicked(); // Function TslGameMode.ModLogManagerDeviceElementWidget.OnClicked //  // @ game+0xe199c60
	void OnDeviceIconLoaded(); // Function TslGameMode.ModLogManagerDeviceElementWidget.OnDeviceIconLoaded //  // @ game+0xe19a958
};

// Class TslGameMode.ModLogManagerTabEntryWidget
// Size: 0x2e0 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UModLogManagerTabEntryWidget : UUserWidget {
	struct FLinearColor LabelTextNormalColor; // 0x258(0x10)
	struct FLinearColor LabelTextHighlightColor; // 0x268(0x10)
	enum class EModLogContentType ContentType; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct UButton* ButtonTab; // 0x280(0x08)
	struct UTextBlock* TextBlockLabel; // 0x288(0x08)
	struct UBorder* BorderActive; // 0x290(0x08)
	struct USizeBox* SizeBoxHighlightDecoration; // 0x298(0x08)
	char pad_2A0[0x40]; // 0x2a0(0x40)

	void OnLabelButtonClicked(); // Function TslGameMode.ModLogManagerTabEntryWidget.OnLabelButtonClicked //  // @ game+0xe19c298
};

// Class TslGameMode.ModLogManagerTabListWidget
// Size: 0x2b8 (Inherited: 0x258)  [layout: KHOP]
struct UModLogManagerTabListWidget : UUserWidget {
	struct UClass* TabEntryWidgetClass; // 0x258(0x08)
	struct TMap<enum class EModLogContentType, struct FText> ContentToTextMap; // 0x260(0x50)
	struct UHorizontalBox* HorizontalBoxTabs; // 0x2b0(0x08)
};

// Class TslGameMode.ModLogManagerWidget
// Size: 0x4f8 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModLogManagerWidget : UBlockInputUserWidget {
	struct UClass* LogElementWidgetClass; // 0x470(0x08)
	float ScrollSpeedMultiplier; // 0x478(0x04)
	int32 VisibleContentsMax; // 0x47c(0x04)
	char pad_480[0x8]; // 0x480(0x08)
	struct UModLogManagerTabListWidget* TabListWidget; // 0x488(0x08)
	struct UModLogDetailListWidget* DetailListWidget; // 0x490(0x08)
	struct UScrollBox* ContentsScrollBox; // 0x498(0x08)
	struct UTslGamepadKeyIconWidget* GamepadScrollGuideKeyIcon; // 0x4a0(0x08)
	struct UButton* BackButton; // 0x4a8(0x08)
	struct USpacer* TopSpacer; // 0x4b0(0x08)
	struct USpacer* BottomSpacer; // 0x4b8(0x08)
	struct UVerticalBox* LogVerticalBox; // 0x4c0(0x08)
	struct UTextBlock* NoModLogTextBlock; // 0x4c8(0x08)
	struct TArray<struct UModLogElementWidget*> LogElementWidgetPool; // 0x4d0(0x10)
	struct TArray<bool> ContentWidgetUsages; // 0x4e0(0x10)
	char pad_4F0[0x8]; // 0x4f0(0x08)

	void OnChangeContentType(); // Function TslGameMode.ModLogManagerWidget.OnChangeContentType //  // @ game+0xe19839c
	void HandleBackButtonClicked(); // Function TslGameMode.ModLogManagerWidget.HandleBackButtonClicked //  // @ game+0xe1951dc
};

// Class TslGameMode.ModMatchDataTable
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UModMatchDataTable : UDataTable {
};

// Class TslGameMode.ModMatchEndWidget
// Size: 0x4e0 (Inherited: 0x4c0)  [layout: KHOP]
struct UModMatchEndWidget : UTslRoundResultBaseWidget {
	struct UTextBlock* TextBlockVictory; // 0x4c0(0x08)
	struct UTextBlock* TextBlockLose; // 0x4c8(0x08)
	struct U*7fa8406bd3* AnimWinEffect; // 0x4d0(0x08)
	struct U*7fa8406bd3* AnimLoseEffect; // 0x4d8(0x08)
};

// Class TslGameMode.ModMatchResultWidget
// Size: 0x4a0 (Inherited: 0x490)  [layout: KHOP]
struct UModMatchResultWidget : UBaseResultWidget {
	struct UModLeaderboardTeamList* ListTotal; // 0x490(0x08)
	struct UButton* ButtonLobby; // 0x498(0x08)

	void OnClicked_ButtonLobby(); // Function TslGameMode.ModMatchResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
};

// Class TslGameMode.ModMinimapCaptureActor
// Size: 0x440 (Inherited: 0x418)  [layout: LECH - offset chi la uoc luong]
struct AModMinimapCaptureActor : ASceneCapture2D {
	struct UTextureRenderTarget2D* *990e31f4aa; // 0x418(0x08)
	float *88bf36d1fd; // 0x420(0x04)
	struct FRotator Rot; // 0x424(0x0c)
	float *6ba5e698e1; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)
};

// Class TslGameMode.*e6c97309f9
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct U*e6c97309f9 : UTslModeFeatureRepObject {
	struct TArray<struct F*35c59f5a68> *65e6dbe887; // 0x38(0x10)
};

// Class TslGameMode.*729f6ca62d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*729f6ca62d : UInterface {
};

// Class TslGameMode.ModModeFeature
// Size: 0x7d8 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct UModModeFeature : UTslLogicModeFeature {
	struct FModData *d112f85078; // 0xa0(0x150)
	struct TArray<struct UDataTable*> ModObjectDataTables; // 0x1f0(0x10)
	struct TArray<struct UDataTable*> ModItemDataTables; // 0x200(0x10)
	struct UDataTable* ModModeFeatureDataTable; // 0x210(0x08)
	struct TArray<struct FName> PlayModeFeatureNames; // 0x218(0x10)
	struct TArray<struct FName> EditModeFeatureNames; // 0x228(0x10)
	struct TArray<struct FName> RunModeFeatureNames; // 0x238(0x10)
	float CheckDefaultPlayerStartLength; // 0x248(0x04)
	float DefaultPlayerStartRadius; // 0x24c(0x04)
	struct TMap<enum class EModObjectType, int32> *57039a54f2; // 0x250(0x50)
	struct TMap<enum class EModObjectSubCategory, int32> *32121e02f2; // 0x2a0(0x50)
	struct TMap<int16, int32> *03de3fb4c1; // 0x2f0(0x50)
	struct FText *73e3c109dd; // 0x340(0x18)
	struct FText *6577da6cce; // 0x358(0x18)
	struct FText *87dea08925; // 0x370(0x18)
	float PropNetUpdateFrequency; // 0x388(0x04)
	float PropReplicationScaleRelativeToCharacter; // 0x38c(0x04)
	int32 MaxDummyAIPlayerCount; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UModEventManager* ModEventManager; // 0x398(0x08)
	struct UModLogManager* ModLogManager; // 0x3a0(0x08)
	struct U*fd7f069d89* *fd7f069d89; // 0x3a8(0x08)
	struct ATslPlayerStart* DefaultPlayerStart; // 0x3b0(0x08)
	struct TArray<struct AModDummyAIController*> *663931321f; // 0x3b8(0x10)
	struct TMap<uint32, struct F*a4da2a6722> *a365fbe417; // 0x3c8(0x50)
	struct TArray<TScriptInterface<struct U*729f6ca62d>> *60674fc395; // 0x418(0x10)
	char pad_428[0x3b0]; // 0x428(0x3b0)
};

// Class TslGameMode.*e5f2d35287
// Size: 0x68 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct U*e5f2d35287 : U*b091bbb047 {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class TslGameMode.ModNormalMatchPreparerModeFeature
// Size: 0xb8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct UModNormalMatchPreparerModeFeature : UTslNormalMatchPreparerModeFeature {
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class TslGameMode.ModObjectControlComponent
// Size: 0x450 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UModObjectControlComponent : UActorComponent {
	char pad_210[0x18]; // 0x210(0x18)
	struct USceneComponent* *e95591df11; // 0x228(0x08)
	struct USceneComponent* *6040029c4c; // 0x230(0x08)
	float *766f310914; // 0x238(0x04)
	float *2a0ab9521a; // 0x23c(0x04)
	float *0a0f23e8cc; // 0x240(0x04)
	struct FVector *12a883a5ad; // 0x244(0x0c)
	struct FVector *64ccfccad7; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FHitResult *90793c224d; // 0x260(0x90)
	struct FFloatRange *adf9b64384; // 0x2f0(0x10)
	float *2af760bdb9; // 0x300(0x04)
	char pad_304[0xc]; // 0x304(0x0c)
	float *63624ebc85; // 0x310(0x04)
	float *3ed0766d42; // 0x314(0x04)
	float *8a367be928; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	float *e7fed55d84; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<float> *38038e24e7; // 0x328(0x10)
	char pad_338[0x8]; // 0x338(0x08)
	struct TArray<float> *c02b883c43; // 0x340(0x10)
	char pad_350[0x8]; // 0x350(0x08)
	struct TArray<float> *d22198f49d; // 0x358(0x10)
	char pad_368[0xc]; // 0x368(0x0c)
	int32 *ba3b692462; // 0x374(0x04)
	struct UClass* *79221e249a; // 0x378(0x20)
	struct TArray<struct AModGhostObjectActor*> *479faf1ec2; // 0x398(0x10)
	struct TArray<struct AModGhostObjectActor*> *a129b3a878; // 0x3a8(0x10)
	struct U*3c39ad6165* *522fa273fd; // 0x3b8(0x08)
	struct U*fdb0bb3dc7* *3cc8f20e19; // 0x3c0(0x08)
	struct U*2b1323b85d* *8f01b0cc58; // 0x3c8(0x08)
	char pad_3D0[0x80]; // 0x3d0(0x80)

	void *fccb113993(); // Function TslGameMode.ModObjectControlComponent.*fccb113993 //  // @ game+0xe1a8770
	void *1a0490b7de(); // Function TslGameMode.ModObjectControlComponent.*1a0490b7de //  // @ game+0xe1a7560
	void *cfebe81ca9(); // Function TslGameMode.ModObjectControlComponent.*cfebe81ca9 //  // @ game+0xe1a7c7c
	void *3a695a1ac6(); // Function TslGameMode.ModObjectControlComponent.*3a695a1ac6 //  // @ game+0xe1a7d20
};

// Class TslGameMode.ModObjectSlotWidget
// Size: 0x3d0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModObjectSlotWidget : UTslUserWidget {
	struct UTslCommonButton* Button; // 0x330(0x08)
	struct UImage* IconImage; // 0x338(0x08)
	struct UTextBlock* TextBlockSlotNum; // 0x340(0x08)
	char pad_348[0x88]; // 0x348(0x88)

	void HandleButtonHoverd(); // Function TslGameMode.ModObjectSlotWidget.HandleButtonHoverd //  // @ game+0x1053c04
	void OnIconLoaded(); // Function TslGameMode.ModObjectSlotWidget.OnIconLoaded //  // @ game+0xe19bca4
	void HandleButtonPressed(); // Function TslGameMode.ModObjectSlotWidget.HandleButtonPressed //  // @ game+0xe195280
};

// Class TslGameMode.ModObjectListWidget
// Size: 0x498 (Inherited: 0x470)  [layout: KHOP]
struct UModObjectListWidget : UBlockInputUserWidget {
	struct UVerticalBox* MainVBox; // 0x470(0x08)
	struct UHorizontalBox* CategoryBox; // 0x478(0x08)
	struct UUniformGridPanel* ObjectGrid; // 0x480(0x08)
	struct UClass* ModObjectSlotWidgetClass; // 0x488(0x08)
	int32 MaxRowCount; // 0x490(0x04)
	int32 MaxColumnCount; // 0x494(0x04)
};

// Class TslGameMode.ModOptionSelectorDeviceSlotWidget
// Size: 0x580 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModOptionSelectorDeviceSlotWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct FLinearColor BgColorNormal; // 0x460(0x10)
	struct FLinearColor BgColorHighlighted; // 0x470(0x10)
	struct FLinearColor TextColorNormal; // 0x480(0x10)
	struct FLinearColor TextColorHighlighted; // 0x490(0x10)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x4a0(0x08)
	struct UImage* ImageIcon; // 0x4a8(0x08)
	struct UImage* ImageDeviceIconAni; // 0x4b0(0x08)
	struct UImage* ImageSelectedBg; // 0x4b8(0x08)
	struct UWidgetSwitcher* SwitcherIconAni; // 0x4c0(0x08)
	struct UButton* ButtonItem; // 0x4c8(0x08)
	struct UTexture2D* IconTexture; // 0x4d0(0x08)
	char pad_4D8[0xa8]; // 0x4d8(0xa8)

	void OnClicked(); // Function TslGameMode.ModOptionSelectorDeviceSlotWidget.OnClicked //  // @ game+0xe197830
	void OnUnhovered(); // Function TslGameMode.ModOptionSelectorDeviceSlotWidget.OnUnhovered //  // @ game+0xe1a39cc
	void OnHovered(); // Function TslGameMode.ModOptionSelectorDeviceSlotWidget.OnHovered //  // @ game+0xe19bba0
};

// Class TslGameMode.ModOptionSelectorEventSlotWidget
// Size: 0x4a0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModOptionSelectorEventSlotWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct FLinearColor TextColorNormal; // 0x460(0x10)
	struct FLinearColor TextColorHighlighted; // 0x470(0x10)
	struct UTslFlowingTextWidget* FlowTextLabel; // 0x480(0x08)
	struct UTslCommonButton* ButtonEvent; // 0x488(0x08)
	char pad_490[0x10]; // 0x490(0x10)

	void OnButtonEventClicked(); // Function TslGameMode.ModOptionSelectorEventSlotWidget.OnButtonEventClicked //  // @ game+0xe197830
};

// Class TslGameMode.ModPanelTimerWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModPanelTimerWidget : UUmgBaseWidget {
	struct UTextBlock* TextBlockTimer; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)
};

// Class TslGameMode.ModPlantedBombActor
// Size: 0x510 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AModPlantedBombActor : AActor {
	float *582f0018aa; // 0x400(0x04)
	float *67be873959; // 0x404(0x04)
	struct UStaticMesh* *4bfcd07f3b; // 0x408(0x08)
	float *a402b59a79; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UStaticMesh* *d7214a9eac; // 0x418(0x08)
	struct FVector *a4b6ec05fc; // 0x420(0x0c)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct USceneComponent* SceneRoot; // 0x430(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x438(0x08)
	struct UStaticMeshComponent* ExplosionEffectComponent; // 0x440(0x08)
	struct U*4c8ef0916d* InteractionComponent; // 0x448(0x08)
	struct UWidgetComponent* WidgetComponent; // 0x450(0x08)
	struct UAkComponent* AkComponent; // 0x458(0x08)
	struct TMap<enum class EModBombState, struct UAkAudioEvent*> *656022d461; // 0x460(0x50)
	enum class EModBombState *3eb0eb8da7; // 0x4b0(0x01) rep=OnRep_BombState
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FModDeviceVolumeData *761a95d297; // 0x4b4(0x1c) rep=OnRep_VolumeData
	struct F*e4577077ec *e4577077ec; // 0x4d0(0x0c) rep=OnRep_ModPlantedBombData
	int16 *c3dd72d4bd; // 0x4dc(0x02)
	char pad_4DE[0x32]; // 0x4de(0x32)

	void OnRep_VolumeData(); // Function TslGameMode.ModPlantedBombActor.OnRep_VolumeData //  // @ game+0xe19faf8
	void OnRep_ModPlantedBombData(); // Function TslGameMode.ModPlantedBombActor.OnRep_ModPlantedBombData //  // @ game+0xe19f2e4
	void OnRep_BombState(); // Function TslGameMode.ModPlantedBombActor.OnRep_BombState //  // @ game+0xe19ed00
};

// Class TslGameMode.*4c8ef0916d
// Size: 0x620 (Inherited: 0x610)  [layout: KHOP]
struct U*4c8ef0916d : UInteractionComponent {
	struct FText *0aed5a8369; // 0x608(0x18)
};

// Class TslGameMode.*fdb0bb3dc7
// Size: 0x7a0 (Inherited: 0x330)  [layout: KHOP]
struct U*fdb0bb3dc7 : U*481d3a4609 {
	struct UClass* *ac232fed3b; // 0x330(0x08)
	struct UClass* *c51c54a694; // 0x338(0x08)
	struct UClass* *e716a355c9; // 0x340(0x08)
	struct UClass* *7eae8395cf; // 0x348(0x08)
	struct AModMinimapCaptureActor* *576db87b4e; // 0x350(0x08)
	struct U*087e759cd2* *39bfcb7a62; // 0x358(0x08)
	struct UModCharacterControlComponent* *2afa4401f6; // 0x360(0x08) rep=OnRep_ControlComponents
	struct UModObjectControlComponent* *627f60df0f; // 0x368(0x08) rep=OnRep_ControlComponents
	char pad_370[0x8]; // 0x370(0x08)
	struct TMap<int32, int16> *de656ed1e1; // 0x378(0x50)
	struct TMap<int32, struct UClass*> *5af427750e; // 0x3c8(0x50)
	float *3bd89439e5; // 0x418(0x04)
	float *42e313ea37; // 0x41c(0x04)
	float *e78b2a7d54; // 0x420(0x04)
	float *63fcef49fe; // 0x424(0x04)
	int32 *ef03ae05cd; // 0x428(0x04)
	int32 *f442006348; // 0x42c(0x04)
	float *e753536829; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<struct FString> *723e648d18; // 0x438(0x10)
	bool *35379e819c; // 0x448(0x01) rep=OnRep_ModLogListenState
	bool *ceb71b5e0d; // 0x449(0x01) rep=OnRep_CanActivateBuildMode
	char pad_44A[0x6]; // 0x44a(0x06)
	struct TArray<enum class EModWeaponSlotType> *ba631dd2a5; // 0x450(0x10)
	bool *3610b50c7a; // 0x460(0x01)
	bool *4b1fd129f5; // 0x461(0x01)
	bool *30a95250cd; // 0x462(0x01)
	char pad_463[0x5]; // 0x463(0x05)
	struct FText *9e95f1e50f; // 0x468(0x18)
	float *525425bcbc; // 0x480(0x04)
	bool *986aab8545; // 0x484(0x01)
	char pad_485[0x313]; // 0x485(0x313)
	struct ATslPlayerStateBase* *0c09ec6718; // 0x798(0x08) rep=OnRep_SpectatingPlayerState

	void *af19a20566(); // Function TslGameMode.*fdb0bb3dc7.*af19a20566 //  // @ game+0xe1a7684
	void *018b7dd505(); // Function TslGameMode.*fdb0bb3dc7.*018b7dd505 //  // @ game+0xe194358
	void *2cfb633001(); // Function TslGameMode.*fdb0bb3dc7.*2cfb633001 //  // @ game+0xe1a8418
	void *fb1022f5bd(); // Function TslGameMode.*fdb0bb3dc7.*fb1022f5bd //  // @ game+0xe1a892c
	void *8ed4357565(); // Function TslGameMode.*fdb0bb3dc7.*8ed4357565 //  // @ game+0xe1a6b28
	void *721665660d(); // Function TslGameMode.*fdb0bb3dc7.*721665660d //  // @ game+0xe1a710c
	void *cd1ff64062(); // Function TslGameMode.*fdb0bb3dc7.*cd1ff64062 //  // @ game+0xe193f80
	void *3f6ce47da8(); // Function TslGameMode.*fdb0bb3dc7.*3f6ce47da8 //  // @ game+0xe193d7c
	void *e5b8f8831b(); // Function TslGameMode.*fdb0bb3dc7.*e5b8f8831b //  // @ game+0xe1a7064
	void *6c2fd07c33(); // Function TslGameMode.*fdb0bb3dc7.*6c2fd07c33 //  // @ game+0xe1a71b0
	void *83d895a804(); // Function TslGameMode.*fdb0bb3dc7.*83d895a804 //  // @ game+0xe1a7798
	void ServerOnViewTargetUpdated(); // Function TslGameMode.*fdb0bb3dc7.ServerOnViewTargetUpdated //  // @ game+0xe1a771c
	void *358edb59a1(); // Function TslGameMode.*fdb0bb3dc7.*358edb59a1 //  // @ game+0xe1a7f90
	void *562d1a138b(); // Function TslGameMode.*fdb0bb3dc7.*562d1a138b //  // @ game+0xe1a8080
	void *342951539d(); // Function TslGameMode.*fdb0bb3dc7.*342951539d //  // @ game+0xe19460c
	void *7fa8e845d4(); // Function TslGameMode.*fdb0bb3dc7.*7fa8e845d4 //  // @ game+0xe1a8250
	void *e88bc1e0fe(); // Function TslGameMode.*fdb0bb3dc7.*e88bc1e0fe //  // @ game+0xe1a79e8
	void *20ec68dc65(); // Function TslGameMode.*fdb0bb3dc7.*20ec68dc65 //  // @ game+0xe1a742c
	void OnRep_CanActivateBuildMode(); // Function TslGameMode.*fdb0bb3dc7.OnRep_CanActivateBuildMode //  // @ game+0xe19ee04
	void OnRep_SpectatingPlayerState(); // Function TslGameMode.*fdb0bb3dc7.OnRep_SpectatingPlayerState //  // @ game+0xe19f9ac
	void *156246f8b9(); // Function TslGameMode.*fdb0bb3dc7.*156246f8b9 //  // @ game+0xe1a6a24
	void *437f2988bf(); // Function TslGameMode.*fdb0bb3dc7.*437f2988bf //  // @ game+0xe1a6fc4
	void *5860f0d50e(); // Function TslGameMode.*fdb0bb3dc7.*5860f0d50e //  // @ game+0xe193f98
	void *f66069b20a(); // Function TslGameMode.*fdb0bb3dc7.*f66069b20a //  // @ game+0xe1a89d0
	void *3a75403fb4(); // Function TslGameMode.*fdb0bb3dc7.*3a75403fb4 //  // @ game+0xe1a74c8
	void *f21c3cf8b6(); // Function TslGameMode.*fdb0bb3dc7.*f21c3cf8b6 //  // @ game+0xe1a7e08
	void *962bd8d535(); // Function TslGameMode.*fdb0bb3dc7.*962bd8d535 //  // @ game+0xe194418
	void *50d908dca1(); // Function TslGameMode.*fdb0bb3dc7.*50d908dca1 //  // @ game+0xe194230
	void *db39610ff8(); // Function TslGameMode.*fdb0bb3dc7.*db39610ff8 //  // @ game+0xe1944d4
	void *ef8072903c(); // Function TslGameMode.*fdb0bb3dc7.*ef8072903c //  // @ game+0xe1a7248
	void *ca9ab81c06(); // Function TslGameMode.*fdb0bb3dc7.*ca9ab81c06 //  // @ game+0xe1a6e78
	void *f6aa0c58b0(); // Function TslGameMode.*fdb0bb3dc7.*f6aa0c58b0 //  // @ game+0xe1a493c
	void *5db203e500(); // Function TslGameMode.*fdb0bb3dc7.*5db203e500 //  // @ game+0xe193d64
	void *47ea64ee3a(); // Function TslGameMode.*fdb0bb3dc7.*47ea64ee3a //  // @ game+0xe1a6c90
	void OnRep_ControlComponents(); // Function TslGameMode.*fdb0bb3dc7.OnRep_ControlComponents //  // @ game+0xe19ef88
	void *aad261132d(); // Function TslGameMode.*fdb0bb3dc7.*aad261132d //  // @ game+0xe1946c4
	void *312088787c(); // Function TslGameMode.*fdb0bb3dc7.*312088787c //  // @ game+0xe194018
	void OnRep_ModLogListenState(); // Function TslGameMode.*fdb0bb3dc7.OnRep_ModLogListenState //  // @ game+0xe19f2b4
	void *ba6333aa07(); // Function TslGameMode.*fdb0bb3dc7.*ba6333aa07 //  // @ game+0xe193e38
	void *c0082cd1e2(); // Function TslGameMode.*fdb0bb3dc7.*c0082cd1e2 //  // @ game+0xe1a8a6c
};

// Class TslGameMode.ModPlayerStart
// Size: 0x468 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct AModPlayerStart : ATslPlayerStart {
	float *3b57073e23; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
};

// Class TslGameMode.ModPlayOptionEditWidget
// Size: 0x530 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModPlayOptionEditWidget : UUmgBaseWidget {
	struct UVerticalBox* VBoxOptions; // 0x420(0x08)
	struct UClass* PlayOptionElementWidgetClass; // 0x428(0x08)
	struct TMap<struct FName, struct FTslMenuStepperMetaData> HostOnlyOptionDataMap; // 0x430(0x50)
	struct FTslMenuStepperMetaData UseLogMetaData; // 0x480(0x50)
	struct TArray<struct UModPlayOptionElementWidget*> OnlyHostWidgets; // 0x4d0(0x10)
	struct TArray<struct UModPlayOptionElementWidget*> AllPlayOptionWidgets; // 0x4e0(0x10)
	char pad_4F0[0x40]; // 0x4f0(0x40)
};

// Class TslGameMode.ModPlayOptionElementWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModPlayOptionElementWidget : UUmgBaseWidget {
	struct UModPropertyBGWidget* WidgetBG; // 0x420(0x08)
	struct UTslMenuOptionWidget* MenuOptionWidget; // 0x428(0x08)
	char pad_430[0x40]; // 0x430(0x40)
};

// Class TslGameMode.ModTeamSelectionElementWidget
// Size: 0x620 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModTeamSelectionElementWidget : UModPlayOptionElementWidget {
	struct UTslGameOptionItemButtonWidget* PopupButton; // 0x470(0x08)
	struct UTslGameOptionItemButtonWidget* KickPopupButton; // 0x478(0x08)
	struct UImage* DisconnectIconImage; // 0x480(0x08)
	struct FString HostPlayerPrefix; // 0x488(0x10)
	struct FLinearColor LocalPlayerLabelColor; // 0x498(0x10)
	struct FLinearColor LocalPlayerLabelColor_Highlighted; // 0x4a8(0x10)
	struct FLinearColor DefaultPlayerLabelColor; // 0x4b8(0x10)
	struct FLinearColor DefaultPlayerLabelColor_Highlighted; // 0x4c8(0x10)
	struct FText TransferHostPopupButtonText; // 0x4d8(0x18)
	struct FText TransferHostPopupTitle; // 0x4f0(0x18)
	struct FText TransferHostPopupMessage; // 0x508(0x18)
	struct FText KickUserPopupButtonText; // 0x520(0x18)
	struct FText KickUserPopupTitle; // 0x538(0x18)
	struct FText KickUserPopupMessage; // 0x550(0x18)
	char pad_568[0xb8]; // 0x568(0xb8)

	void RequestTransferHost(); // Function TslGameMode.ModTeamSelectionElementWidget.RequestTransferHost //  // @ game+0xe1a5664
	void RequestKickPlayer(); // Function TslGameMode.ModTeamSelectionElementWidget.RequestKickPlayer //  // @ game+0xe1a5280
};

// Class TslGameMode.*748f60c8ae
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*748f60c8ae : U*6b123102ec {
};

// Class TslGameMode.ModPreviewActor
// Size: 0x510 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AModPreviewActor : AActor {
	bool *f0c621049a; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UInteractionComponent* InteractionComponent; // 0x408(0x08)
	struct UBillboardComponent* BillboardComponent; // 0x410(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x418(0x08)
	struct F*64ea629fc5 *8af0e7a1cb; // 0x420(0x20) rep=OnRep_DevicePropertyData
	struct FModDeviceInstanceID DeviceInstanceID; // 0x440(0x04) rep=OnRep_DeviceInstanceID
	char pad_444[0x4]; // 0x444(0x04)
	struct FString *1e15a7df10; // 0x448(0x10)
	struct TArray<struct FModEventContainer> *24e3d5f5c1; // 0x458(0x10)
	struct TArray<struct FModEventContainer> *60403471c9; // 0x468(0x10)
	char pad_478[0x88]; // 0x478(0x88)
	bool *8a9cfd218b; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float *b14010a327; // 0x504(0x04)
	char pad_508[0x8]; // 0x508(0x08)

	void OnRep_DeviceInstanceID(); // Function TslGameMode.ModPreviewActor.OnRep_DeviceInstanceID //  // @ game+0xe19f0a4
	void OnRep_DevicePropertyData(); // Function TslGameMode.ModPreviewActor.OnRep_DevicePropertyData //  // @ game+0xdac1ed4
	void *7aa5e979c7(); // Function TslGameMode.ModPreviewActor.*7aa5e979c7 //  // @ game+0xe1950fc
	void OnClientInteractionSucceed(); // Function TslGameMode.ModPreviewActor.OnClientInteractionSucceed //  // @ game+0xe199fcc
	void *260f7f2c37(); // Function TslGameMode.ModPreviewActor.*260f7f2c37 //  // @ game+0xe193930
};

// Class TslGameMode.AINavModPreviewActor
// Size: 0x580 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct AAINavModPreviewActor : AModPreviewActor {
	struct UClass* *6117b7518a; // 0x508(0x08)
	char pad_510[0x70]; // 0x510(0x70)
};

// Class TslGameMode.CheckpointManagerModPreviewActor
// Size: 0x620 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct ACheckpointManagerModPreviewActor : AModPreviewActor {
	struct UClass* *6117b7518a; // 0x508(0x08)
	struct UClass* *efad92820e; // 0x510(0x08)
	struct FVector *4b4c5a703e; // 0x518(0x0c)
	char pad_524[0x14]; // 0x524(0x14)
	struct TMap<struct FModDeviceInstanceID, struct U*534ef84a22*> *601ea4bfec; // 0x538(0x50)
	struct TMap<struct FModDeviceInstanceID, struct UWidgetComponent*> *ff31dceccb; // 0x588(0x50)
	char pad_5D8[0x48]; // 0x5d8(0x48)
};

// Class TslGameMode.CheckpointModPreviewActor
// Size: 0x530 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct ACheckpointModPreviewActor : AModPreviewActor {
	struct UStaticMeshComponent* CircleMesh; // 0x508(0x08)
	struct UStaticMeshComponent* RectangleMesh; // 0x510(0x08)
	char pad_518[0x18]; // 0x518(0x18)
};

// Class TslGameMode.LightModPreviewActor
// Size: 0x520 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct ALightModPreviewActor : AModPreviewActor {
	struct ULightComponent* *20395beab3; // 0x508(0x08)
	struct UArrowComponent* *8ba934baae; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
};

// Class TslGameMode.MeshModPreviewActor
// Size: 0x5a0 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct AMeshModPreviewActor : AModPreviewActor {
	char pad_510[0x90]; // 0x510(0x90)

	void *028bfac73d(); // Function TslGameMode.MeshModPreviewActor.*028bfac73d //  // @ game+0xe1a2368
};

// Class TslGameMode.TextDisplayModPreviewActor
// Size: 0x520 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct ATextDisplayModPreviewActor : AModPreviewActor {
	struct UStaticMeshComponent* StaticMeshComp; // 0x508(0x08)
	struct UChildActorComponent* ModActorComp; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
};

// Class TslGameMode.VariableModPreviewActor
// Size: 0x510 (Inherited: 0x510)  [layout: KHOP]
struct AVariableModPreviewActor : AModPreviewActor {
};

// Class TslGameMode.VolumeModPreviewActor
// Size: 0x530 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct AVolumeModPreviewActor : AModPreviewActor {
	struct UStaticMesh* *4bfcd07f3b; // 0x508(0x08)
	float *a402b59a79; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct UStaticMesh* *d7214a9eac; // 0x518(0x08)
	struct FVector *a4b6ec05fc; // 0x520(0x0c)
	char pad_52C[0x4]; // 0x52c(0x04)
};

// Class TslGameMode.VehicleModPreviewActor
// Size: 0x5d0 (Inherited: 0x530)  [layout: LECH - offset chi la uoc luong]
struct AVehicleModPreviewActor : AVolumeModPreviewActor {
	struct USkeletalMeshComponent* VehMesh; // 0x530(0x08)
	char pad_538[0x98]; // 0x538(0x98)
};

// Class TslGameMode.ModPropertyBaseElementWidget
// Size: 0x610 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyBaseElementWidget : UUmgBaseWidget {
	char pad_420[0x80]; // 0x420(0x80)
	struct UModPropertyBGWidget* WidgetBG; // 0x4a0(0x08)
	struct U*366ebe387e* PropertyWidgetFactory; // 0x4a8(0x08)
	struct U*123ed8d360* CustomInitializer; // 0x4b0(0x08)
	char pad_4B8[0x158]; // 0x4b8(0x158)

	void OnClickDeleteAsArrayRemove(); // Function TslGameMode.ModPropertyBaseElementWidget.OnClickDeleteAsArrayRemove //  // @ game+0xe199c4c
};

// Class TslGameMode.ModPropertyArrayElementWidget
// Size: 0x630 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyArrayElementWidget : UModPropertyBaseElementWidget {
	struct UButton* FoldButton; // 0x610(0x08)
	struct UPanelWidget* ArrayElementContent; // 0x618(0x08)
	struct UModPropertyBaseElementWidget* ChildWidget; // 0x620(0x08)
	char pad_628[0x8]; // 0x628(0x08)

	void ToggleFold(); // Function TslGameMode.ModPropertyArrayElementWidget.ToggleFold //  // @ game+0xe1ac994
	void OnArrayIndexDeleteButtonClicked(); // Function TslGameMode.ModPropertyArrayElementWidget.OnArrayIndexDeleteButtonClicked //  // @ game+0xe197414
};

// Class TslGameMode.ModPropertyArrayWidget
// Size: 0x660 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyArrayWidget : UModPropertyBaseElementWidget {
	struct UButton* ButtonFold; // 0x610(0x08)
	struct UTextBlock* TextBlockChildNum; // 0x618(0x08)
	struct UVerticalBox* VerticalBoxChild; // 0x620(0x08)
	struct UButton* ButtonAddElement; // 0x628(0x08)
	struct TArray<struct UModPropertyBaseElementWidget*> ChildWidgets; // 0x630(0x10)
	char pad_640[0x20]; // 0x640(0x20)

	void OnFoldButtonClicked(); // Function TslGameMode.ModPropertyArrayWidget.OnFoldButtonClicked //  // @ game+0xe19bad4
	void OnAddElementButtonClicked(); // Function TslGameMode.ModPropertyArrayWidget.OnAddElementButtonClicked //  // @ game+0xdbebc94
};

// Class TslGameMode.ModPropertyItemArrayWidget
// Size: 0x660 (Inherited: 0x660)  [layout: KHOP]
struct UModPropertyItemArrayWidget : UModPropertyArrayWidget {

	void OnItemDeleteButtonClicked(); // Function TslGameMode.ModPropertyItemArrayWidget.OnItemDeleteButtonClicked //  // @ game+0xe19bccc
	void OnAddElementButtonClicked(); // Function TslGameMode.ModPropertyItemArrayWidget.OnAddElementButtonClicked //  // @ game+0xdbebc94
};

// Class TslGameMode.ModPropertyElementWidget
// Size: 0x610 (Inherited: 0x610)  [layout: KHOP]
struct UModPropertyElementWidget : UModPropertyBaseElementWidget {
};

// Class TslGameMode.ModPropertyBoolElementWidget
// Size: 0x650 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyBoolElementWidget : UModPropertyElementWidget {
	struct UTslMenuCheckBoxWidget* MenuCheckBox; // 0x610(0x08)
	struct FText TrueText; // 0x618(0x18)
	struct FText FalseText; // 0x630(0x18)
	char pad_648[0x8]; // 0x648(0x08)
};

// Class TslGameMode.ModPropertyComboBoxElementWidget
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyComboBoxElementWidget : UModPropertyElementWidget {
	struct UTslMenuComboBoxWidget* MenuComboBoxWidget; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class TslGameMode.ModPropertyDeviceElementWidget
// Size: 0x6c0 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyDeviceElementWidget : UModPropertyElementWidget {
	struct UTslFlowingTextWidget* FlowTextDeviceName; // 0x610(0x08)
	struct UWidgetSwitcher* WidgetSwitcherIcon; // 0x618(0x08)
	struct UImage* ImageIcon; // 0x620(0x08)
	struct UImage* ImageIconAni; // 0x628(0x08)
	struct UTexture2D* IconTexture; // 0x630(0x08)
	char pad_638[0x88]; // 0x638(0x88)

	void OnButtonClicked(); // Function TslGameMode.ModPropertyDeviceElementWidget.OnButtonClicked //  // @ game+0xe197720
	void OnButtonDeleteClicked(); // Function TslGameMode.ModPropertyDeviceElementWidget.OnButtonDeleteClicked //  // @ game+0xe197808
};

// Class TslGameMode.ModPropertyItemWidget
// Size: 0x720 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyItemWidget : UModPropertyElementWidget {
	char pad_610[0x70]; // 0x610(0x70)
	struct UTextBlock* TextBlockItemNum; // 0x680(0x08)
	struct UImage* ImageIcon; // 0x688(0x08)
	struct UGridPanel* GridPanelArrow; // 0x690(0x08)
	char pad_698[0x88]; // 0x698(0x88)

	void OnButtonClicked(); // Function TslGameMode.ModPropertyItemWidget.OnButtonClicked //  // @ game+0xe197734
	void OnButtonDeleteClicked(); // Function TslGameMode.ModPropertyItemWidget.OnButtonDeleteClicked //  // @ game+0xe19781c
};

// Class TslGameMode.ModPropertyNumericEditableTextWidget
// Size: 0x630 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyNumericEditableTextWidget : UModPropertyElementWidget {
	struct UTslMenuNumericTextBoxWidget* MenuNumericTextBox; // 0x610(0x08)
	struct UButton* MinButton; // 0x618(0x08)
	struct UButton* MaxButton; // 0x620(0x08)
	char pad_628[0x8]; // 0x628(0x08)

	void OnMinButtonClicked(); // Function TslGameMode.ModPropertyNumericEditableTextWidget.OnMinButtonClicked //  // @ game+0xe19cb28
	void OnMaxButtonClicked(); // Function TslGameMode.ModPropertyNumericEditableTextWidget.OnMaxButtonClicked //  // @ game+0xe19c7b4
};

// Class TslGameMode.ModPropertyNumericSliderWidget
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyNumericSliderWidget : UModPropertyElementWidget {
	struct UTslMenuSliderWidget* MenuSliderWidget; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class TslGameMode.ModPropertyStepperWidget
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyStepperWidget : UModPropertyElementWidget {
	struct UTslMenuStepperWidget* MenuStepperWidget; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class TslGameMode.ModPropertyStringElementWidget
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyStringElementWidget : UModPropertyElementWidget {
	struct UTslMenuTextBoxWidget* MenuTextBox; // 0x610(0x08)
	uint32 DefaultMaxLength; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
};

// Class TslGameMode.ModPropertyVectorElementWidget
// Size: 0x670 (Inherited: 0x610)  [layout: KHOP]
struct UModPropertyVectorElementWidget : UModPropertyElementWidget {
	struct UTslMenuNumericTextBoxWidget* XMenuNumericTextBox; // 0x610(0x08)
	struct UTslMenuNumericTextBoxWidget* YMenuNumericTextBox; // 0x618(0x08)
	struct UTslMenuNumericTextBoxWidget* ZMenuNumericTextBox; // 0x620(0x08)
	struct FText XText; // 0x628(0x18)
	struct FText YText; // 0x640(0x18)
	struct FText ZText; // 0x658(0x18)
};

// Class TslGameMode.ModPropertyObjectWidget
// Size: 0x640 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct UModPropertyObjectWidget : UModPropertyBaseElementWidget {
	struct UTslCommonButton* ObjectFoldButton; // 0x610(0x08)
	struct UImage* ObjectDownArrowImage; // 0x618(0x08)
	struct UVerticalBox* ChildVerticalBox; // 0x620(0x08)
	struct TArray<struct UModPropertyBaseElementWidget*> ChildWidgets; // 0x628(0x10)
	char pad_638[0x8]; // 0x638(0x08)

	void OnObjectFoldButtonClicked(); // Function TslGameMode.ModPropertyObjectWidget.OnObjectFoldButtonClicked //  // @ game+0xe19d134
};

// Class TslGameMode.ModPropertyBGWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: KHOP]
struct UModPropertyBGWidget : UUmgBaseWidget {
	struct FMulticastDelegate OnClick; // 0x420(0x10)
	struct FMulticastDelegate OnClickDelete; // 0x430(0x10)
	struct FLinearColor ColorEnabled; // 0x440(0x10)
	struct FLinearColor ColorDisabled; // 0x450(0x10)
	struct FLinearColor ColorNormal; // 0x460(0x10)
	struct FLinearColor ColorHighlighted; // 0x470(0x10)
	int32 FontSize; // 0x480(0x04)
	bool bTextAutoSize; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	float TextMaxClippingWidth; // 0x488(0x04)
	struct FVector2D TextClippingSize; // 0x48c(0x08)
	float LeftMargin; // 0x494(0x04)
	float BgHeight; // 0x498(0x04)
	bool bIsSubItem; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct UTslFlowingTextWidget* TextItemName; // 0x4a0(0x08)
	struct UButton* ButtonBase; // 0x4a8(0x08)
	struct UButton* ButtonDelete; // 0x4b0(0x08)
	struct UTslGameOptionHoverWidget* OptionHover; // 0x4b8(0x08)
	struct USpacer* SpacerLeftMargin; // 0x4c0(0x08)

	void OnClickedDeleteElement(); // Function TslGameMode.ModPropertyBGWidget.OnClickedDeleteElement //  // @ game+0xe199c88
	void OnClickButtonBase(); // Function TslGameMode.ModPropertyBGWidget.OnClickButtonBase //  // @ game+0xe199c30
};

// Class TslGameMode.CraftingDeviceWidgetFactory
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UCraftingDeviceWidgetFactory : UModPropertyCustomWidgetFactory {
};

// Class TslGameMode.ModArrayDeleteCustomWidgetFactory
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UModArrayDeleteCustomWidgetFactory : UModPropertyCustomWidgetFactory {
};

// Class TslGameMode.VehicleSpawnDeviceWidgetFactory
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UVehicleSpawnDeviceWidgetFactory : UModPropertyCustomWidgetFactory {
};

// Class TslGameMode.ModRuleSetSchema
// Size: 0xd8 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct UModRuleSetSchema : UModPropertySchema {
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class TslGameMode.*123ed8d360
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*123ed8d360 : UObject {
};

// Class TslGameMode.*fceea4850e
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*fceea4850e : UActorComponent {
	char pad_210[0x20]; // 0x210(0x20)
};

// Class TslGameMode.ModQuickSlotListWidget
// Size: 0x3a0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModQuickSlotListWidget : UTslUserWidget {
	struct UHorizontalBox* QuickSlotListBox; // 0x330(0x08)
	struct UImage* SelectedFrameImage; // 0x338(0x08)
	struct UTextBlock* ObjectNameTextBlock; // 0x340(0x08)
	struct TMap<int32, struct UModQuickSlotWidget*> QuickSlotWidgetMap; // 0x348(0x50)
	char pad_398[0x8]; // 0x398(0x08)
};

// Class TslGameMode.ModQuickSlotWidget
// Size: 0x3d0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModQuickSlotWidget : UTslUserWidget {
	struct UImage* IconImage; // 0x330(0x08)
	struct UTextBlock* TextBlockSlotNum; // 0x338(0x08)
	int32 SlotNumber; // 0x340(0x04)
	char pad_344[0x8c]; // 0x344(0x8c)

	void OnIconLoaded(); // Function TslGameMode.ModQuickSlotWidget.OnIconLoaded //  // @ game+0xe19bcb8
};

// Class TslGameMode.ModEditManagerQuickSlotWidget
// Size: 0x420 (Inherited: 0x3d0)  [layout: LECH - offset chi la uoc luong]
struct UModEditManagerQuickSlotWidget : UModQuickSlotWidget {
	struct UButton* Button; // 0x3d0(0x08)
	char pad_3D8[0x48]; // 0x3d8(0x48)

	void OnButtonClicked(); // Function TslGameMode.ModEditManagerQuickSlotWidget.OnButtonClicked //  // @ game+0xe1976a8
	void OnButtonUnhovered(); // Function TslGameMode.ModEditManagerQuickSlotWidget.OnButtonUnhovered //  // @ game+0x1053c04
	void OnButtonHovered(); // Function TslGameMode.ModEditManagerQuickSlotWidget.OnButtonHovered //  // @ game+0x1053c04
};

// Class TslGameMode.ModReactionPropActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AModReactionPropActor : AActor {
	struct U*8627762d8c* ReactionComponent; // 0x400(0x08)

	void *426cc185fa(); // Function TslGameMode.ModReactionPropActor.*426cc185fa //  // @ game+0xdb421c8
};

// Class TslGameMode.*78ce784a43
// Size: 0x110 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct U*78ce784a43 : U*2124a9fa23 {
	char pad_F8[0x18]; // 0xf8(0x18)
};

// Class TslGameMode.ModResultTabEntryWidget
// Size: 0x2f0 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UModResultTabEntryWidget : UUserWidget {
	char pad_258[0x48]; // 0x258(0x48)
	struct FLinearColor LabelTextNormalColor; // 0x2a0(0x10)
	struct FLinearColor LabelTextHighlightColor; // 0x2b0(0x10)
	struct UButton* ButtonTab; // 0x2c0(0x08)
	struct UTextBlock* TextLabel; // 0x2c8(0x08)
	struct UBorder* BorderActive; // 0x2d0(0x08)
	struct USizeBox* PanelHighlightDecoration; // 0x2d8(0x08)
	char pad_2E0[0x10]; // 0x2e0(0x10)

	void OnButtonClicked(); // Function TslGameMode.ModResultTabEntryWidget.OnButtonClicked //  // @ game+0xe197748
};

// Class TslGameMode.ModResultTabListWidget
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UModResultTabListWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct UHorizontalBox* HorizontalBoxTabs; // 0x460(0x08)
	struct UClass* TabWidgetClass; // 0x468(0x08)
};

// Class TslGameMode.ModRoundEndWidget
// Size: 0x510 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct UModRoundEndWidget : UTslRoundResultBaseWidget {
	struct FLinearColor MyTeamTextColor; // 0x4c0(0x10)
	struct FLinearColor OtherTeamTextColor; // 0x4d0(0x10)
	float ShowDuration; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UTextBlock* TextBlockWinningTeam; // 0x4e8(0x08)
	struct UTextBlock* TextBlockCurrentRound; // 0x4f0(0x08)
	struct U*7fa8406bd3* AnimWinEffect; // 0x4f8(0x08)
	struct U*7fa8406bd3* AnimLoseEffect; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)
};

// Class TslGameMode.ModRoundResultWidget
// Size: 0x4a0 (Inherited: 0x470)  [layout: KHOP]
struct UModRoundResultWidget : UBlockInputUserWidget {
	struct UModResultTabListWidget* WidgetTab; // 0x470(0x08)
	struct UWidgetSwitcher* SwitcherTab; // 0x478(0x08)
	struct UModLeaderboardTeamList* ListCurrent; // 0x480(0x08)
	struct UModLeaderboardTeamList* ListTotal; // 0x488(0x08)
	struct TArray<struct FModResultTypeData> ResultTypeDataArray; // 0x490(0x10)

	void CloseWidget(); // Function TslGameMode.ModRoundResultWidget.CloseWidget //  // @ game+0xe194e44
};

// Class TslGameMode.ModRulesetEditWidget
// Size: 0x5a0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModRulesetEditWidget : UUmgBaseWidget {
	struct UVerticalBox* VBoxCategory; // 0x420(0x08)
	struct UClass* CategoryWidgetClass; // 0x428(0x08)
	struct FText UserSelectableDataTitle; // 0x430(0x18)
	struct FText RoundRuleTitle; // 0x448(0x18)
	struct FText CharacterRuleTitle; // 0x460(0x18)
	struct FText GameRuleTitle; // 0x478(0x18)
	struct UClass* DefaultWidgetFactoryClass; // 0x490(0x08)
	struct TMap<int16, struct FModRuleSetWidgetData> RuleSetDataMap; // 0x498(0x50)
	char pad_4E8[0xb8]; // 0x4e8(0xb8)
};

// Class TslGameMode.ModSaveOwnerCheckPopupWidget
// Size: 0x580 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct UModSaveOwnerCheckPopupWidget : UTslPopupBoxWidget {
	struct UTslCommonButton* ButtonGoToCreatorInfo; // 0x558(0x08)
	char pad_560[0x20]; // 0x560(0x20)

	void OnBtnGoToCreatorInfoClicked(); // Function TslGameMode.ModSaveOwnerCheckPopupWidget.OnBtnGoToCreatorInfoClicked //  // @ game+0xe197638
};

// Class TslGameMode.*069f0d579a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*069f0d579a : U*96becd27f1 {

	void SaveMod(); // Function TslGameMode.*069f0d579a.SaveMod //  // @ game+0xe1a6740
};

// Class TslGameMode.*fd7f069d89
// Size: 0x2a8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*fd7f069d89 : UObject {
	char pad_30[0x278]; // 0x30(0x278)
};

// Class TslGameMode.ModStopwatchWidget
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModStopwatchWidget : UTslUserWidget {
	struct AStopwatchModActor* TargetModActor; // 0x330(0x08)
	struct TArray<struct UModTimeRecordWidget*> RecordWidgets; // 0x338(0x10)
	float HideDelayAfterStopTimer; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UTextBlock* TextHeader; // 0x350(0x08)
	struct UTextBlock* TextTime; // 0x358(0x08)
	struct UWrapBox* ListRecords; // 0x360(0x08)
	struct U*7fa8406bd3* AnimStart; // 0x368(0x08)
	struct U*7fa8406bd3* AnimFinish; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)
};

// Class TslGameMode.ModTagCategoryGroupWidget
// Size: 0x490 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModTagCategoryGroupWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct UTextBlock* TextCategoryName; // 0x460(0x08)
	struct UWrapBox* WrapBoxTags; // 0x468(0x08)
	struct UClass* TagSelectItemWidgetClass; // 0x470(0x08)
	struct TArray<struct UModTagSelectItemWidget*> TagWidgets; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)
};

// Class TslGameMode.ModTagSelectItemWidget
// Size: 0xe30 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModTagSelectItemWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct UTslCommonButton* ButtonTag; // 0x460(0x08)
	struct UTextBlock* TextTagName; // 0x468(0x08)
	struct UImage* ImageSelected; // 0x470(0x08)
	struct FButtonStyle MainTagButtonStyle; // 0x478(0x2a8)
	struct FButtonStyle CommonTagButtonStyle; // 0x720(0x2a8)
	struct FButtonStyle SubTagButtonStyle; // 0x9c8(0x2a8)
	struct FSlateBrush MainTagSelectedBrush; // 0xc70(0x90)
	struct FSlateBrush CommonTagSelectedBrush; // 0xd00(0x90)
	struct FSlateBrush SubTagSelectedBrush; // 0xd90(0x90)
	char pad_E20[0x10]; // 0xe20(0x10)

	void OnButtonClicked(); // Function TslGameMode.ModTagSelectItemWidget.OnButtonClicked //  // @ game+0xe19776c
};

// Class TslGameMode.ModTagSelectPopupWidget
// Size: 0x780 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct UModTagSelectPopupWidget : UTslPopupBoxWidget {
	char pad_560[0x40]; // 0x560(0x40)
	struct UVerticalBox* VerticalBoxMainTags; // 0x5a0(0x08)
	struct UVerticalBox* VerticalBoxSubCategories; // 0x5a8(0x08)
	struct UVerticalBox* VerticalBoxCommonTags; // 0x5b0(0x08)
	struct UDataTable* CategoryDataTable; // 0x5b8(0x08)
	struct UClass* CategoryGroupWidgetClass; // 0x5c0(0x08)
	int32 MaxSubTagCount; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct UTextBlock* TextRestriction; // 0x5d0(0x08)
	struct UDataTable* TagDataTable; // 0x5d8(0x08)
	struct UModTagCategoryGroupWidget* MainTagCategoryGroup; // 0x5e0(0x08)
	struct TMap<struct FName, struct UModTagCategoryGroupWidget*> SubCategoryGroupWidgets; // 0x5e8(0x50)
	struct UModTagCategoryGroupWidget* CommonTagCategoryGroup; // 0x638(0x08)
	char pad_640[0x140]; // 0x640(0x140)
};

// Class TslGameMode.ModTeamSelectionWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModTeamSelectionWidget : UUmgBaseWidget {
	struct UClass* TeamSelectionElementWidgetClass; // 0x420(0x08)
	struct FText ModTeamDistributionMethodText; // 0x428(0x18)
	float RefreshInterval; // 0x440(0x04)
	bool bShowOwnerDataOnTop; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct UVerticalBox* VBoxElements; // 0x448(0x08)
	struct UModPlayOptionElementWidget* TeamDistributionMethodDisplay; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
	struct TMap<struct FString, struct UModTeamSelectionElementWidget*> ElementWidgetMap; // 0x468(0x50)
	char pad_4B8[0x10]; // 0x4b8(0x10)

	void UpdateElementWidgets(); // Function TslGameMode.ModTeamSelectionWidget.UpdateElementWidgets //  // @ game+0xe1b1430
};

// Class TslGameMode.ModTeamSelectorPlayerEntryWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: KHOP]
struct UModTeamSelectorPlayerEntryWidget : UUmgBaseWidget {
	struct UImage* ImageIcon; // 0x420(0x08)
	struct UImage* ImageSquadBg; // 0x428(0x08)
	struct UTextBlock* TextSquadNum; // 0x430(0x08)
	struct FLinearColor MyPlayerColorNormal; // 0x438(0x10)
	struct FLinearColor MyPlayerColorFull; // 0x448(0x10)
	struct FLinearColor NormalPlayerColorNormal; // 0x458(0x10)
	struct FLinearColor NormalPlayerColorFull; // 0x468(0x10)
	struct FLinearColor SquadBgColorFull; // 0x478(0x10)
	struct FSlateColor SquadNumTextColorNormal; // 0x488(0x28)
	struct FSlateColor SquadNumTextColorFull; // 0x4b0(0x28)
};

// Class TslGameMode.ModTeamSelectorTeamEntryWidget
// Size: 0x508 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UModTeamSelectorTeamEntryWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* SwitcherContents; // 0x420(0x08)
	struct UButton* ButtonTeam; // 0x428(0x08)
	struct UWidgetSwitcher* SwitcherOver; // 0x430(0x08)
	struct UWidget* PanelEmpty; // 0x438(0x08)
	struct UWidget* PanelFull; // 0x440(0x08)
	struct UWidget* PanelSelectable; // 0x448(0x08)
	struct UWidget* PanelCancel; // 0x450(0x08)
	struct UImage* ImageMyTeam; // 0x458(0x08)
	struct UTslObserverPlayerIconWidget* WidgetTeamIcon; // 0x460(0x08)
	struct UTextBlock* TextTeamName; // 0x468(0x08)
	struct UTextBlock* TextPlayerCount; // 0x470(0x08)
	struct UWrapBox* ListPlayer; // 0x478(0x08)
	struct UClass* PlayerEntryWidgetClass; // 0x480(0x08)
	struct FSlateColor PlayerCountTextColorNormal; // 0x488(0x28)
	struct FSlateColor PlayerCountTextColorFull; // 0x4b0(0x28)
	struct FText TeamFullSystemMessage; // 0x4d8(0x18)
	char pad_4F0[0x18]; // 0x4f0(0x18)

	void OnTeamClicked(); // Function TslGameMode.ModTeamSelectorTeamEntryWidget.OnTeamClicked //  // @ game+0xe1a3590
	void OnTeamUnhovered(); // Function TslGameMode.ModTeamSelectorTeamEntryWidget.OnTeamUnhovered //  // @ game+0xe1a35cc
	void OnTeamHovered(); // Function TslGameMode.ModTeamSelectorTeamEntryWidget.OnTeamHovered //  // @ game+0xe1a35a4
};

// Class TslGameMode.ModTeamSelectorWidget
// Size: 0x4a0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UModTeamSelectorWidget : UBlockInputUserWidget {
	struct UTextBlock* TextTimerMin; // 0x470(0x08)
	struct UTextBlock* TextTimerSec; // 0x478(0x08)
	struct UWrapBox* ListTeam; // 0x480(0x08)
	struct UClass* TeamEntryWidgetClass; // 0x488(0x08)
	int32 MininumTeamEntryCount; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)
};

// Class TslGameMode.ModTimeRecordWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UModTimeRecordWidget : UTslUserWidget {
	struct UTextBlock* TextRecordCount; // 0x330(0x08)
	struct UTextBlock* TextTime; // 0x338(0x08)
};

// Class TslGameMode.ModTimerWidget
// Size: 0x3c8 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UModTimerWidget : UTslUserWidget {
	struct ATimerModActor* TargetModActor; // 0x330(0x08)
	struct UImage* ImageHeaderBg; // 0x338(0x08)
	struct UTextBlock* TextHeader; // 0x340(0x08)
	struct UBorder* BorderTimer; // 0x348(0x08)
	struct UGridPanel* PanelTimer; // 0x350(0x08)
	struct UHorizontalBox* ListTimer; // 0x358(0x08)
	struct UTextBlock* TextTime; // 0x360(0x08)
	struct U*7fa8406bd3* AnimStart; // 0x368(0x08)
	struct U*7fa8406bd3* AnimFinish; // 0x370(0x08)
	bool bIsCenteredLayout; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UTexture2D* TimerGradientLeft; // 0x380(0x08)
	struct UTexture2D* TimerGradientCenter; // 0x388(0x08)
	struct FMargin TimerPaddingLeft; // 0x390(0x10)
	struct FMargin TimerPaddingCenter; // 0x3a0(0x10)
	float HideDelayAfterStopTimer; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct UMaterialInstanceDynamic* CachedHeaderBgMaterial; // 0x3b8(0x08)
	char pad_3C0[0x8]; // 0x3c0(0x08)
};

// Class TslGameMode.*d78fc4e4b4
// Size: 0xbb0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*d78fc4e4b4 : UStaticMeshComponent {
	enum class EModVolumeShape Shape; // 0xb78(0x01) rep=OnRep_Shape
	struct FVector BoxExtent; // 0xb7c(0x0c) rep=OnRep_BoxExtent
	float SphereRadius; // 0xb88(0x04) rep=OnRep_SphereRadius
	enum class EModColorType Color; // 0xb8c(0x01) rep=OnRep_Color
	bool *6c6656c139; // 0xb8d(0x01) rep=OnRep_UseColor
	char pad_B8E[0xa]; // 0xb8e(0x0a)
	struct UMaterialInterface* MaterialTemplate; // 0xb98(0x08)
	struct UMaterialInstanceDynamic* Material; // 0xba0(0x08)
	char pad_BA8[0x8]; // 0xba8(0x08)

	void OnRep_BoxExtent(); // Function TslGameMode.*d78fc4e4b4.OnRep_BoxExtent //  // @ game+0xe19edf0
	void OnRep_Color(); // Function TslGameMode.*d78fc4e4b4.OnRep_Color //  // @ game+0xe19edf0
	void OnRep_UseColor(); // Function TslGameMode.*d78fc4e4b4.OnRep_UseColor //  // @ game+0xe19edf0
	void OnRep_SphereRadius(); // Function TslGameMode.*d78fc4e4b4.OnRep_SphereRadius //  // @ game+0xe19edf0
	void OnRep_Shape(); // Function TslGameMode.*d78fc4e4b4.OnRep_Shape //  // @ game+0xe19edf0
	void *4f9c78edb1(); // Function TslGameMode.*d78fc4e4b4.*4f9c78edb1 //  // @ game+0xe1a3608
};

// Class TslGameMode.ModWeapon_PlantingBombKit
// Size: 0x11c0 (Inherited: 0x1180)  [layout: LECH - offset chi la uoc luong]
struct AModWeapon_PlantingBombKit : ATslWeapon_PlantableBlueBomb {
	struct FMulticastDelegate OnBombPlanted; // 0x1180(0x10)
	char pad_1190[0x8]; // 0x1190(0x08)
	float *7d383273aa; // 0x1198(0x04)
	int16 *c3dd72d4bd; // 0x119c(0x02)
	char pad_119E[0x2]; // 0x119e(0x02)
	struct FText *e5e1b978a2; // 0x11a0(0x18)
	char pad_11B8[0x8]; // 0x11b8(0x08)

	void OnApplyDBNOState(); // Function TslGameMode.ModWeapon_PlantingBombKit.OnApplyDBNOState //  // @ game+0xe19723c
};

// Class TslGameMode.OneOnOneArenaBoxOffice
// Size: 0x488 (Inherited: 0x408)  [layout: KHOP]
struct AOneOnOneArenaBoxOffice : ATslInteractableActor {
	struct FText InteractionVerb; // 0x408(0x18)
	struct FText InteractiveObjectName; // 0x420(0x18)
	struct FText *6dba367a58; // 0x438(0x18)
	struct FText *169d6c717c; // 0x450(0x18)
	enum class EOneOnOneStageType *a0f0c37575; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UClass* *4d7820fafa; // 0x470(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x478(0x08)
	struct UOneOnOneArenaBoxOfficeStaff* *abd28c3747; // 0x480(0x08)

	void *8c25aea5f6(); // Function TslGameMode.OneOnOneArenaBoxOffice.*8c25aea5f6 //  // @ game+0xdb743d8
	void *b648d963d2(); // Function TslGameMode.OneOnOneArenaBoxOffice.*b648d963d2 //  // @ game+0xe195030
};

// Class TslGameMode.OneOnOneArenaBoxOfficeStaff
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UOneOnOneArenaBoxOfficeStaff : UObject {

	void OnSellArenaTicket(); // Function TslGameMode.OneOnOneArenaBoxOfficeStaff.OnSellArenaTicket //  // @ game+0xe1a0980
	void OnBuyArenaTicket(); // Function TslGameMode.OneOnOneArenaBoxOfficeStaff.OnBuyArenaTicket //  // @ game+0xe1979d4
	void OnAnswerForArenaExit(); // Function TslGameMode.OneOnOneArenaBoxOfficeStaff.OnAnswerForArenaExit //  // @ game+0xe197000
	void OnAnswerForArenaEnter(); // Function TslGameMode.OneOnOneArenaBoxOfficeStaff.OnAnswerForArenaEnter //  // @ game+0xe196f88
};

// Class TslGameMode.*f1842ede2d
// Size: 0xd0 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*f1842ede2d : U*6b123102ec {
	struct UClass* *4bb516dd57; // 0x50(0x08)
	float *4104dfa6c5; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<enum class EOneOnOneRoomState, int32> *88d1ebd0b5; // 0x60(0x50)
	char pad_B0[0x20]; // 0xb0(0x20)
};

// Class TslGameMode.*a06d3a5ca6
// Size: 0xf0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*a06d3a5ca6 : U*f1842ede2d {
	char pad_D0[0x20]; // 0xd0(0x20)
};

// Class TslGameMode.*989f6eb0f0
// Size: 0x610 (Inherited: 0x610)  [layout: KHOP]
struct U*989f6eb0f0 : UInteractionComponent {
};

// Class TslGameMode.PlantedTimeBombActor
// Size: 0x4b0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APlantedTimeBombActor : AActor {
	struct UClass* BombExplosionAfterEffectAsset; // 0x400(0x20)
	struct UClass* BomePlantedEffectAsset; // 0x420(0x20)
	struct TArray<struct FFloatRange> PlantedBombPhaseAtRemainTime; // 0x440(0x10)
	float PlantedEffectAdditionalLocationZ; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct ATslParticle* PlantedEffect; // 0x458(0x08)
	struct U*989f6eb0f0* InteractionComponent; // 0x460(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x468(0x08)
	struct UAkComponent* AkComponent; // 0x470(0x08)
	struct AActor* *9795a5af2e; // 0x478(0x08)
	struct FText *4a40244658; // 0x480(0x18)
	enum class EBombPlantedState *70cedc767a; // 0x498(0x01) rep=OnRep_UpdateBombState
	char pad_499[0x17]; // 0x499(0x17)

	void OnBombIsDismantled(); // Function TslGameMode.PlantedTimeBombActor.OnBombIsDismantled //  // @ game+0xe197504
	void SetPlantedAfterEffect_Internal(); // Function TslGameMode.PlantedTimeBombActor.SetPlantedAfterEffect_Internal //  // @ game+0x43bab4
	void *6d893aae71(); // Function TslGameMode.PlantedTimeBombActor.*6d893aae71 //  // @ game+0xe1b1494
	void OnRep_UpdateBombState(); // Function TslGameMode.PlantedTimeBombActor.OnRep_UpdateBombState //  // @ game+0xe19fa68
	void *292b6d7383(); // Function TslGameMode.PlantedTimeBombActor.*292b6d7383 //  // @ game+0xe1a3aec
};

// Class TslGameMode.PlantedTimeBombAnimInstance
// Size: 0x3b0 (Inherited: 0x3a8)  [layout: LECH - offset chi la uoc luong]
struct UPlantedTimeBombAnimInstance : UAnimInstance {
	enum class EBombPlantedState BombPlantedAnimState; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
};

// Class TslGameMode.PopupTargetDataAsset
// Size: 0x60 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UPopupTargetDataAsset : UDataAsset {
	float *7c4995bb3e; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* *27a8121797; // 0x40(0x08)
	float *4aa2eae11b; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* *0c356a9c0a; // 0x50(0x08)
	float *c511dc0171; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class TslGameMode.PopupTargetMeshComponent
// Size: 0xd60 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct UPopupTargetMeshComponent : UStaticMeshComponent {
	char pad_B80[0x1e0]; // 0xb80(0x1e0)
};

// Class TslGameMode.PracticeTarget
// Size: 0x560 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APracticeTarget : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct USceneComponent* RootSceneComponent; // 0x408(0x08)
	struct UStaticMeshComponent* TargetRootComponent; // 0x410(0x08)
	struct UStaticMeshComponent* TargetMeshComponent; // 0x418(0x08)
	struct UAkComponent* AkComponent; // 0x420(0x08)
	bool bReplicationDisconnect; // 0x428(0x01)
	bool bMovingTarget; // 0x429(0x01)
	bool bRandomizeInitialMovingProperty; // 0x42a(0x01)
	char pad_42B[0x1]; // 0x42b(0x01)
	struct FVector MovingStartRelativeLocation; // 0x42c(0x0c)
	struct FVector MovingEndRelativeLocation; // 0x438(0x0c)
	float MovementTimeSec; // 0x444(0x04)
	struct FVector TargetForward; // 0x448(0x0c)
	struct FVector FlippingAxis; // 0x454(0x0c)
	bool bReverseFlippingDirection; // 0x460(0x01)
	bool bAutoFlippingTarget; // 0x461(0x01)
	bool bRandomizeInitialFlippingProperty; // 0x462(0x01)
	char pad_463[0x1]; // 0x463(0x01)
	float FlippingInitialDegree; // 0x464(0x04)
	float FlippingAutoDegree; // 0x468(0x04)
	float FlippingAutoTimeSec; // 0x46c(0x04)
	float FlippingDegree; // 0x470(0x04)
	float FlippingHitTimeSec; // 0x474(0x04)
	struct UCurveFloat* HitFlippingCurve; // 0x478(0x08)
	struct UAkAudioEvent* MovingAudio; // 0x480(0x08)
	struct UAkAudioEvent* FlippingAudio; // 0x488(0x08)
	struct FMulticastDelegate OnChangedMoveDirectionDelegate; // 0x490(0x10)
	struct FMulticastDelegate OnHitDelegate; // 0x4a0(0x10)
	char pad_4B0[0x30]; // 0x4b0(0x30)
	struct F*1bd4b1422a *c45ca11283; // 0x4e0(0x20)
	char pad_500[0x40]; // 0x500(0x40)
	struct FQuat *5ca2123ab1; // 0x540(0x10)
	int32 *c457850631; // 0x550(0x04) rep=OnRep_ServerFlipState
	bool *c00f5af596; // 0x554(0x01) rep=OnRep_ServerAutoFlipForward
	char pad_555[0xb]; // 0x555(0x0b)

	void OnChangedMoveDirection(); // Function TslGameMode.PracticeTarget.OnChangedMoveDirection //  // @ game+0xe19901c
	void OnRep_ServerFlipState(); // Function TslGameMode.PracticeTarget.OnRep_ServerFlipState //  // @ game+0xe19f984
	void OnRep_ServerAutoFlipForward(); // Function TslGameMode.PracticeTarget.OnRep_ServerAutoFlipForward //  // @ game+0xe19f918
	void *f98b473e63(); // Function TslGameMode.PracticeTarget.*f98b473e63 //  // @ game+0xe193bb8
	void OnHit(); // Function TslGameMode.PracticeTarget.OnHit //  // @ game+0xe19bb64
	void OnTakenPointDamage(); // Function TslGameMode.PracticeTarget.OnTakenPointDamage //  // @ game+0xe1a2a24
};

// Class TslGameMode.ImprovedPracticeTarget
// Size: 0x610 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct AImprovedPracticeTarget : APracticeTarget {
	bool bRandomMoving; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float RandomChangeHoldingTime; // 0x564(0x04)
	float ForceChangeHoldingTime; // 0x568(0x04)
	bool bRandomVelocity; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	float TargetVelocity; // 0x570(0x04)
	float TargetMinVelocity; // 0x574(0x04)
	float TargetMaxVelocity; // 0x578(0x04)
	float VelocityChangeInterval; // 0x57c(0x04)
	float AccelerationTime; // 0x580(0x04)
	bool bAutoFlippingOnEndOfTrack; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	float AutoFlippingTime; // 0x588(0x04)
	bool bFlippingOnHit; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct USplineMeshComponent* TrackMeshComponent; // 0x590(0x08)
	char pad_598[0x78]; // 0x598(0x78)
};

// Class TslGameMode.PopupTarget
// Size: 0x5a0 (Inherited: 0x560)  [layout: KHOP]
struct APopupTarget : APracticeTarget {
	struct UPopupTargetDataAsset* PopupTargetDataAsset; // 0x560(0x08)
	struct TArray<struct UPopupTargetMeshComponent*> *74f9303fb4; // 0x568(0x10)
	int32 *7328261513; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct TArray<int32> *8ca2369a1f; // 0x580(0x10)
	struct TArray<int32> *4770899172; // 0x590(0x10)
};

// Class TslGameMode.TrainingRoomPracticeTarget
// Size: 0x600 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct ATrainingRoomPracticeTarget : APracticeTarget {
	char pad_560[0x10]; // 0x560(0x10)
	struct USphereComponent* HeadShotComponent; // 0x570(0x08)
	struct UClass* ActiveTargetParticle; // 0x578(0x20)
	struct UClass* AnswerNotifyParticleClass; // 0x598(0x08)
	float TargetHpGauge; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FText TargetName; // 0x5a8(0x18)
	bool *bfa303f458; // 0x5c0(0x01) rep=OnRep_UpdateTargetVisible
	bool *c85d2c3a65; // 0x5c1(0x01) rep=OnRep_UpdateTargetActive
	bool *fc63b08959; // 0x5c2(0x01) rep=OnRep_TargetShowAnswerParticle
	int8 *3afa59d606; // 0x5c3(0x01) rep=OnRep_UpdateRandomStaticMeshIndex
	char pad_5C4[0x2c]; // 0x5c4(0x2c)
	struct ATslParticle* *107f740ec5; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)

	void *55d1b8fc4c(); // Function TslGameMode.TrainingRoomPracticeTarget.*55d1b8fc4c //  // @ game+0xe1a2a24
	void OnRep_TargetShowAnswerParticle(); // Function TslGameMode.TrainingRoomPracticeTarget.OnRep_TargetShowAnswerParticle //  // @ game+0xe19f9dc
	void OnRep_UpdateRandomStaticMeshIndex(); // Function TslGameMode.TrainingRoomPracticeTarget.OnRep_UpdateRandomStaticMeshIndex //  // @ game+0xe19fa7c
	void OnRep_UpdateTargetVisible(); // Function TslGameMode.TrainingRoomPracticeTarget.OnRep_UpdateTargetVisible //  // @ game+0xe19fab4
	void OnRep_UpdateTargetActive(); // Function TslGameMode.TrainingRoomPracticeTarget.OnRep_UpdateTargetActive //  // @ game+0xe19faa0
};

// Class TslGameMode.*0a2877849b
// Size: 0x7f0 (Inherited: 0x7f0)  [layout: KHOP]
struct U*0a2877849b : U*71d7cc0b74 {
};

// Class TslGameMode.*aba18fc5d6
// Size: 0x60 (Inherited: 0x60)  [layout: KHOP]
struct U*aba18fc5d6 : U*902e8552c8 {
};

// Class TslGameMode.PropHuntAreaBlocker
// Size: 0x440 (Inherited: 0x400)  [layout: KHOP]
struct APropHuntAreaBlocker : AActor {
	struct UBoxComponent* AreaBox; // 0x400(0x08)
	struct UStaticMeshComponent* VisualMesh; // 0x408(0x08)
	struct UBoxComponent* BlockingFront; // 0x410(0x08)
	struct UBoxComponent* BlockingBack; // 0x418(0x08)
	struct UBoxComponent* BlockingLeft; // 0x420(0x08)
	struct UBoxComponent* BlockingRight; // 0x428(0x08)
	struct UBoxComponent* BlockingCeiling; // 0x430(0x08)
	struct UBoxComponent* BlockingBottom; // 0x438(0x08)
};

// Class TslGameMode.PropHuntBlockingActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APropHuntBlockingActor : AActor {
	struct UBoxComponent* BlockingBox; // 0x400(0x08)
};

// Class TslGameMode.PropHuntBlockingVolume
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APropHuntBlockingVolume : AActor {
	struct UStaticMeshComponent* VisualMesh; // 0x400(0x08)
	bool bIsEnabled; // 0x408(0x01) rep=OnRep_IsEnabled
	char pad_409[0x7]; // 0x409(0x07)

	void OnRep_IsEnabled(); // Function TslGameMode.PropHuntBlockingVolume.OnRep_IsEnabled //  // @ game+0xe19f184
};

// Class TslGameMode.PropHuntBlueZoneCreateArea
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct APropHuntBlueZoneCreateArea : ATslBlueZoneCreateArea {
};

// Class TslGameMode.*c64eb3d706
// Size: 0x370 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*c64eb3d706 : UActorComponent {
	struct U*fc9115ffd7* *12c86a8b31; // 0x208(0x08)
	struct U*249ce7652c* PropHuntSpringArm; // 0x210(0x08)
	struct UCameraComponent* *6d91435a92; // 0x218(0x08)
	struct USpringArmComponent* *b824b41adf; // 0x220(0x08)
	char pad_228[0x71]; // 0x228(0x71)
	bool *d3e1b8fef5; // 0x299(0x01) rep=OnRep_PositionLocked
	char pad_29A[0x2]; // 0x29a(0x02)
	float *b7027107b8; // 0x29c(0x04) rep=OnRep_PropMeshYaw
	char pad_2A0[0x6]; // 0x2a0(0x06)
	bool *89bc4c807e; // 0x2a6(0x01)
	char pad_2A7[0x21]; // 0x2a7(0x21)
	bool *d59ae05b96; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float *9d8fba3043; // 0x2cc(0x04) rep=OnRep_NextAutoTauntServerTime
	char pad_2D0[0x1c]; // 0x2d0(0x1c)
	float *d5f859a91c; // 0x2ec(0x04) rep=OnRep_LastManualTauntServerTime
	char pad_2F0[0x80]; // 0x2f0(0x80)

	void *5886b4fd5c(); // Function TslGameMode.*c64eb3d706.*5886b4fd5c //  // @ game+0xe1a51c8
	void OnWeaponArmed(); // Function TslGameMode.*c64eb3d706.OnWeaponArmed //  // @ game+0xe1a4914
	void *1832fea015(); // Function TslGameMode.*c64eb3d706.*1832fea015 //  // @ game+0xe196ac8
	void *8de9628950(); // Function TslGameMode.*c64eb3d706.*8de9628950 //  // @ game+0xe1a927c
	void OnWeaponUnarmed(); // Function TslGameMode.*c64eb3d706.OnWeaponUnarmed //  // @ game+0xe1a4914
	void OnRep_LastManualTauntServerTime(); // Function TslGameMode.*c64eb3d706.OnRep_LastManualTauntServerTime //  // @ game+0xe19f1e0
	void *8e1ade25f3(); // Function TslGameMode.*c64eb3d706.*8e1ade25f3 //  // @ game+0xe1a8dc4
	void OnMovementModeChanged(); // Function TslGameMode.*c64eb3d706.OnMovementModeChanged //  // @ game+0xe19ce98
	void *9d4dc40973(); // Function TslGameMode.*c64eb3d706.*9d4dc40973 //  // @ game+0xe1a9230
	void OnRep_PropMeshYaw(); // Function TslGameMode.*c64eb3d706.OnRep_PropMeshYaw //  // @ game+0xe19f7a8
	void *fa06920610(); // Function TslGameMode.*c64eb3d706.*fa06920610 //  // @ game+0xe1969f8
	void *ca8e9329ee(); // Function TslGameMode.*c64eb3d706.*ca8e9329ee //  // @ game+0xe1a514c
	void OnPlayerStateReplicated(); // Function TslGameMode.*c64eb3d706.OnPlayerStateReplicated //  // @ game+0xe19dfdc
	void *b3a8a88aec(); // Function TslGameMode.*c64eb3d706.*b3a8a88aec //  // @ game+0xe196a10
	void *d20e023243(); // Function TslGameMode.*c64eb3d706.*d20e023243 //  // @ game+0xe1a8e10
	void *0f62c44585(); // Function TslGameMode.*c64eb3d706.*0f62c44585 //  // @ game+0xe19697c
	void OnOwnerTakeDamage(); // Function TslGameMode.*c64eb3d706.OnOwnerTakeDamage //  // @ game+0xe19d1d0
	void OnRep_PositionLocked(); // Function TslGameMode.*c64eb3d706.OnRep_PositionLocked //  // @ game+0xe19f408
	void OnRep_NextAutoTauntServerTime(); // Function TslGameMode.*c64eb3d706.OnRep_NextAutoTauntServerTime //  // @ game+0xe19f360
};

// Class TslGameMode.PropHuntCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UPropHuntCheatManager : UTslCheatManager {

	void PropHuntSpottedEffect(); // Function TslGameMode.PropHuntCheatManager.PropHuntSpottedEffect //  // @ game+0xdac6c7c
	void PropHuntDeathEffect(); // Function TslGameMode.PropHuntCheatManager.PropHuntDeathEffect //  // @ game+0xdac6c7c
};

// Class TslGameMode.PropHuntCountDownWidget
// Size: 0x388 (Inherited: 0x388)  [layout: KHOP]
struct UPropHuntCountDownWidget : UTslCountDownWidget {

	void OnToggleRoleSelectWidget(); // Function TslGameMode.PropHuntCountDownWidget.OnToggleRoleSelectWidget //  // @ game+0xe1a37dc
};

// Class TslGameMode.PropHuntDecoyActor
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct APropHuntDecoyActor : AActor {
	struct UStaticMeshComponent* DecoyMesh; // 0x400(0x08)
	float Health; // 0x408(0x04)
	float *aac3d20a1a; // 0x40c(0x04)
	struct U*1523073850* *d39dd1c06f; // 0x410(0x08)
	struct ATslCharacter* *589111b999; // 0x418(0x08)

	void *629435b455(); // Function TslGameMode.PropHuntDecoyActor.*629435b455 //  // @ game+0xe196b48
	void *80c020efff(); // Function TslGameMode.PropHuntDecoyActor.*80c020efff //  // @ game+0xdb51934
	void *afad88fab8(); // Function TslGameMode.PropHuntDecoyActor.*afad88fab8 //  // @ game+0xdaac2bc
};

// Class TslGameMode.*7bc9528b59
// Size: 0x2b0 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct U*7bc9528b59 : UFlashbangComponent {
	struct FVector *5ccffae535; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
	struct ATslCharacter* *9bf0c1042b; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
};

// Class TslGameMode.PropHuntFreeCameraPawn
// Size: 0x500 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct APropHuntFreeCameraPawn : APawn {
	char pad_468[0x10]; // 0x468(0x10)
	struct USphereComponent* CollisionComponent; // 0x478(0x08)
	struct UCameraComponent* CameraComponent; // 0x480(0x08)
	struct UStaticMeshComponent* CameraMeshComponent; // 0x488(0x08)
	struct UTextRenderComponent* PlayerNameTextComponent; // 0x490(0x08)
	struct UArrowComponent* AudioListenerComponent; // 0x498(0x08)
	struct FVector_NetQuantize *4e1470c322; // 0x4a0(0x0c) rep=OnRep_FreeCamTransform
	struct FRotator *f14fce8b6a; // 0x4ac(0x0c)
	struct ATslCharacter* *aa8a2c7dcd; // 0x4b8(0x08) rep=OnRep_ControllerCharacter
	struct ATslPlayerStateBase* *7bcc62ce31; // 0x4c0(0x08) rep=OnRep_ControllerPlayerState
	struct UStaticMesh* *3a453518bc; // 0x4c8(0x08)
	float *d2de47036e; // 0x4d0(0x04)
	float *8eda8fd98f; // 0x4d4(0x04)
	float *e03430ef2a; // 0x4d8(0x04)
	float *b6f29993fc; // 0x4dc(0x04)
	struct FColor *bebdd6c3f9; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UFloatingPawnMovement* MovementComponent; // 0x4e8(0x08)
	char pad_4F0[0x10]; // 0x4f0(0x10)

	void OnRep_FreeCamTransform(); // Function TslGameMode.PropHuntFreeCameraPawn.OnRep_FreeCamTransform //  // @ game+0x1053c04
	void *8763a67225(); // Function TslGameMode.PropHuntFreeCameraPawn.*8763a67225 //  // @ game+0xe1a8b0c
	void OnRep_ControllerPlayerState(); // Function TslGameMode.PropHuntFreeCameraPawn.OnRep_ControllerPlayerState //  // @ game+0xe19efb0
	void OnRep_ControllerCharacter(); // Function TslGameMode.PropHuntFreeCameraPawn.OnRep_ControllerCharacter //  // @ game+0xe19ef9c
};

// Class TslGameMode.*ca2f67574a
// Size: 0x2a0 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*ca2f67574a : U*606d3b4d41 {
	enum class EPropHuntMatchPhase *deb3f76207; // 0x238(0x01) rep=OnRep_CurrentPhase
	float *02d4210c92; // 0x23c(0x04)
	enum class EPropHuntRoundResult *e6b62156d5; // 0x240(0x01) rep=OnRep_RoundResult
	char pad_241[0x3]; // 0x241(0x03)
	int32 *b0aaa5305d; // 0x244(0x04)
	int32 *82597dfad8; // 0x248(0x04)
	int32 *c889da3cda; // 0x24c(0x04)
	int32 *ce21a04b4e; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct U*1523073850* *1523073850; // 0x258(0x08) rep=OnRep_PropHuntSettings
	struct U*512cab9289* GlobalSettings; // 0x260(0x08)
	float *1783590116; // 0x268(0x04) rep=OnRep_PropSelectionTimeRemaining
	int32 *7d5dfb2b2e; // 0x26c(0x04)
	int32 *27d52bd00c; // 0x270(0x04)
	int32 *f25a9ab8df; // 0x274(0x04)
	int32 *5cf28e6d9f; // 0x278(0x04)
	char pad_27C[0x14]; // 0x27c(0x14)
	float *b7634570b1; // 0x290(0x04)
	char pad_294[0xc]; // 0x294(0x0c)

	void OnRep_RoundResult(); // Function TslGameMode.*ca2f67574a.OnRep_RoundResult //  // @ game+0xe19f864
	void OnRep_CurrentPhase(); // Function TslGameMode.*ca2f67574a.OnRep_CurrentPhase //  // @ game+0xe19f038
	void OnRep_PropHuntSettings(); // Function TslGameMode.*ca2f67574a.OnRep_PropHuntSettings //  // @ game+0xe19f794
	void OnRep_PropSelectionTimeRemaining(); // Function TslGameMode.*ca2f67574a.OnRep_PropSelectionTimeRemaining //  // @ game+0xe19f7bc
};

// Class TslGameMode.*512cab9289
// Size: 0x1b8 (Inherited: 0x38)  [layout: KHOP]
struct U*512cab9289 : UDataAsset {
	struct F*8963b3b11e *0168aa3552; // 0x38(0xa0)
	struct F*6b6505ba9c SoundSettings; // 0xd8(0xb0)
	struct TArray<struct U*8ecdbb2991*> *9e7b9516f8; // 0x188(0x10)
	struct TArray<enum class EDamageTypeCategory> *43edbe904b; // 0x198(0x10)
	struct TArray<enum class EDamageTypeCategory> *c8a39d9fc7; // 0x1a8(0x10)
};

// Class TslGameMode.PropHuntHelpGuideWidget
// Size: 0x480 (Inherited: 0x470)  [layout: KHOP]
struct UPropHuntHelpGuideWidget : UBlockInputUserWidget {
	struct UBorder* BorderTimer; // 0x470(0x08)
	struct UTextBlock* TextNextRoundWaitTime; // 0x478(0x08)
};

// Class TslGameMode.*fc9115ffd7
// Size: 0xb80 (Inherited: 0xb80)  [layout: KHOP]
struct U*fc9115ffd7 : UStaticMeshComponent {

	void *89e2c389a2(); // Function TslGameMode.*fc9115ffd7.*89e2c389a2 //  // @ game+0xdac6bb4
	void *175747f54f(); // Function TslGameMode.*fc9115ffd7.*175747f54f //  // @ game+0xdac6984
	void *8fc73d5f6d(); // Function TslGameMode.*fc9115ffd7.*8fc73d5f6d //  // @ game+0xaae194
	void *7c2aa0c310(); // Function TslGameMode.*fc9115ffd7.*7c2aa0c310 //  // @ game+0x9db448
};

// Class TslGameMode.PropHuntModeFeature
// Size: 0x2d8 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntModeFeature : UTslLogicModeFeature {
	struct U*1523073850* DefaultSettings; // 0xa0(0x08)
	bool bAutoStartMatch; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float AutoStartDelay; // 0xac(0x04)
	struct UDataTable* *d6eadcb172; // 0xb0(0x08)
	struct FString *4eafb27c58; // 0xb8(0x10)
	struct TMap<enum class EPropHuntMatchPhase, struct FText> *f8564e072c; // 0xc8(0x50)
	char pad_118[0x150]; // 0x118(0x150)
	struct TMap<enum class EPropHuntRole, struct ATslPlayerStart*> *f64da9594b; // 0x268(0x50)
	struct TArray<struct APropHuntBlueZoneCreateArea*> *e06832d337; // 0x2b8(0x10)
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// Class TslGameMode.*f01f4f8fe5
// Size: 0x3f0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*f01f4f8fe5 : U*481d3a4609 {
	char pad_330[0x10]; // 0x330(0x10)
	float *f90dcce29c; // 0x340(0x04)
	float *6f13b44c3e; // 0x344(0x04)
	float *01b02ea8d5; // 0x348(0x04)
	char pad_34C[0x3c]; // 0x34c(0x3c)
	struct UClass* *a626f0ee9c; // 0x388(0x08)
	struct APropHuntFreeCameraPawn* *8a701f2c72; // 0x390(0x08)
	struct ATslCharacter* *fe563c03ef; // 0x398(0x08)
	char pad_3A0[0x50]; // 0x3a0(0x50)

	void *923eddbae6(); // Function TslGameMode.*f01f4f8fe5.*923eddbae6 //  // @ game+0xe1a8380
	void *1bdbdf6a0c(); // Function TslGameMode.*f01f4f8fe5.*1bdbdf6a0c //  // @ game+0xe194b4c
	void *00359967eb(); // Function TslGameMode.*f01f4f8fe5.*00359967eb //  // @ game+0xe1a83cc
	void *77321e4655(); // Function TslGameMode.*f01f4f8fe5.*77321e4655 //  // @ game+0xc2590c
	void *eb3ac86596(); // Function TslGameMode.*f01f4f8fe5.*eb3ac86596 //  // @ game+0xe1a8204
	void *1af3061972(); // Function TslGameMode.*f01f4f8fe5.*1af3061972 //  // @ game+0xe1a73e0
	void *950c324e6b(); // Function TslGameMode.*f01f4f8fe5.*950c324e6b //  // @ game+0xe1a8650
	void *f4278ab040(); // Function TslGameMode.*f01f4f8fe5.*f4278ab040 //  // @ game+0xe194acc
	void *0cb3bb1250(); // Function TslGameMode.*f01f4f8fe5.*0cb3bb1250 //  // @ game+0xe1a82e8
	void *a1744a952a(); // Function TslGameMode.*f01f4f8fe5.*a1744a952a //  // @ game+0xe1a7ea0
	void *952b5e7d75(); // Function TslGameMode.*f01f4f8fe5.*952b5e7d75 //  // @ game+0xe1a815c
	void *4900ebcaed(); // Function TslGameMode.*f01f4f8fe5.*4900ebcaed //  // @ game+0xe1a8464
	void *bbbb48ff2c(); // Function TslGameMode.*f01f4f8fe5.*bbbb48ff2c //  // @ game+0xe1a7dbc
	void *f73cab1930(); // Function TslGameMode.*f01f4f8fe5.*f73cab1930 //  // @ game+0xe1a8034
};

// Class TslGameMode.*a33f8eb3b8
// Size: 0x470 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*a33f8eb3b8 : U*13a763f8f8 {
	char pad_2D0[0xe8]; // 0x2d0(0xe8)
	enum class EPropHuntRole *79c664e826; // 0x3b8(0x01) rep=OnRep_AssignedRole
	enum class EPropHuntRole *6d9587e199; // 0x3b9(0x01) rep=OnRep_SelectedRole
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct UStaticMesh* *dbf1e8e70e; // 0x3c0(0x08) rep=OnRep_CurrentPropMesh
	enum class EPropHuntPropSize *243992c665; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UStaticMesh* *0688fead9d; // 0x3d0(0x08) rep=OnRep_PendingPropMesh
	bool *cf76886428; // 0x3d8(0x01) rep=OnRep_IsAliveInPropHunt
	char pad_3D9[0x3]; // 0x3d9(0x03)
	float *89265422ca; // 0x3dc(0x04) rep=OnRep_LastPropChangeServerTime
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct TArray<struct UStaticMesh*> *c847e3ab07; // 0x3e8(0x10) rep=OnRep_AvailablePropChoices
	int32 *11aa3a3da5; // 0x3f8(0x04)
	int32 *5c102bd6e8; // 0x3fc(0x04)
	float *65dc244019; // 0x400(0x04) rep=OnRep_LastDecoySpawnServerTime
	char pad_404[0x4]; // 0x404(0x04)
	int32 *7c8520988a; // 0x408(0x04)
	struct FVector *2bacf44f52; // 0x40c(0x0c)
	char pad_418[0x8]; // 0x418(0x08)
	struct FPropHuntPlayerData *c23e176fc3; // 0x420(0x40) rep=OnRep_PropHuntPlayerData
	int32 *822846f67e; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)

	void OnRep_SelectedRole(); // Function TslGameMode.*a33f8eb3b8.OnRep_SelectedRole //  // @ game+0xe19f8e0
	void OnRep_LastDecoySpawnServerTime(); // Function TslGameMode.*a33f8eb3b8.OnRep_LastDecoySpawnServerTime //  // @ game+0xe19f1ac
	void OnRep_IsAliveInPropHunt(); // Function TslGameMode.*a33f8eb3b8.OnRep_IsAliveInPropHunt //  // @ game+0xe19f170
	void OnRep_AvailablePropChoices(); // Function TslGameMode.*a33f8eb3b8.OnRep_AvailablePropChoices //  // @ game+0xe19eca8
	void OnRep_AssignedRole(); // Function TslGameMode.*a33f8eb3b8.OnRep_AssignedRole //  // @ game+0xe19ec20
	void OnRep_PropHuntPlayerData(); // Function TslGameMode.*a33f8eb3b8.OnRep_PropHuntPlayerData //  // @ game+0xe19f75c
	void OnRep_CurrentPropMesh(); // Function TslGameMode.*a33f8eb3b8.OnRep_CurrentPropMesh //  // @ game+0xe19f07c
	void OnRep_LastPropChangeServerTime(); // Function TslGameMode.*a33f8eb3b8.OnRep_LastPropChangeServerTime //  // @ game+0xe19f214
	void OnRep_PendingPropMesh(); // Function TslGameMode.*a33f8eb3b8.OnRep_PendingPropMesh //  // @ game+0xe19f3e0
};

// Class TslGameMode.PropHuntPropChoiceItemWidget
// Size: 0x368 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntPropChoiceItemWidget : UTslUserWidget {
	char pad_330[0x10]; // 0x330(0x10)
	struct UButton* ButtonChoice; // 0x340(0x08)
	struct UImage* ImageFocus; // 0x348(0x08)
	struct UImage* ImagePropPreview; // 0x350(0x08)
	struct UStaticMesh* PropMesh; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)

	void OnButtonClicked(); // Function TslGameMode.PropHuntPropChoiceItemWidget.OnButtonClicked //  // @ game+0xe19778c
};

// Class TslGameMode.PropHuntPropSelectionWidget
// Size: 0x3a8 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntPropSelectionWidget : UTslUserWidget {
	struct UTextBlock* TextInstruction; // 0x330(0x08)
	struct UWrapBox* ListChoices; // 0x338(0x08)
	struct UButton* ButtonRefresh; // 0x340(0x08)
	struct UTextBlock* TextRefreshCount; // 0x348(0x08)
	struct UTextBlock* TextRefreshCountConsole; // 0x350(0x08)
	struct UClass* PropChoiceItemWidgetClass; // 0x358(0x08)
	struct FText RemainTimeFormatText; // 0x360(0x18)
	struct FString SecFormatArgText; // 0x378(0x10)
	int32 RefreshableCount; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct UPropHuntPropChoiceItemWidget*> ChoiceWidgets; // 0x390(0x10)
	char pad_3A0[0x8]; // 0x3a0(0x08)

	void OnPropChoiceSelected(); // Function TslGameMode.PropHuntPropSelectionWidget.OnPropChoiceSelected //  // @ game+0xe19e9d4
	void OnRefreshButtonClicked(); // Function TslGameMode.PropHuntPropSelectionWidget.OnRefreshButtonClicked //  // @ game+0xe19eb58
	void OnPropChoicedSelectedPad(); // Function TslGameMode.PropHuntPropSelectionWidget.OnPropChoicedSelectedPad //  // @ game+0xe19ea4c
	void OnFocusMoveLeft(); // Function TslGameMode.PropHuntPropSelectionWidget.OnFocusMoveLeft //  // @ game+0xe19baac
	void OnFocusMoveRight(); // Function TslGameMode.PropHuntPropSelectionWidget.OnFocusMoveRight //  // @ game+0xe19bac0
};

// Class TslGameMode.PropHuntPropSkillWidget
// Size: 0x450 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntPropSkillWidget : UTslUserWidget {
	struct UImage* ImageBg; // 0x330(0x08)
	struct URetainerBox* RetainerboxRemainTime; // 0x338(0x08)
	struct UTextBlock* TextRemainTime; // 0x340(0x08)
	struct UTslGamepadKeyIconWidget* PcKey; // 0x348(0x08)
	struct UTslGamepadKeyIconWidget* ConsoleKey; // 0x350(0x08)
	struct UTextBlock* TextSkillCount; // 0x358(0x08)
	struct UImage* ImageEffect; // 0x360(0x08)
	struct UMaterialInstanceDynamic* BgMID; // 0x368(0x08)
	struct UTexture2D* SkillIcon; // 0x370(0x08)
	struct UTexture2D* DefaultSkillIcon; // 0x378(0x08)
	float Highlight; // 0x380(0x04)
	struct FLinearColor ActiveColor; // 0x384(0x10)
	struct FLinearColor InactiveColor; // 0x394(0x10)
	struct FLinearColor EffectColor; // 0x3a4(0x10)
	bool bIsMouseIcon; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FVector2D MouseIconPosY; // 0x3b8(0x08)
	struct FGamepadKeyIconInfo PcKeyIconInfo; // 0x3c0(0x40)
	struct FGamepadKeyIconInfo ConsoleKeyIconInfo; // 0x400(0x40)
	char pad_440[0x10]; // 0x440(0x10)
};

// Class TslGameMode.PropHuntPropStatusWidget
// Size: 0x3a8 (Inherited: 0x330)  [layout: KHOP]
struct UPropHuntPropStatusWidget : UTslUserWidget {
	struct UWidget* PropStatusContainer; // 0x330(0x08)
	struct UPropHuntPropSkillWidget* Flashbang; // 0x338(0x08)
	struct UPropHuntPropSkillWidget* Decoy; // 0x340(0x08)
	struct UPropHuntPropSkillWidget* Taunt; // 0x348(0x08)
	struct UPropHuntPropSkillWidget* Taser; // 0x350(0x08)
	struct UPropHuntPropSkillWidget* PropChange; // 0x358(0x08)
	struct UPropHuntPropSkillWidget* Locked; // 0x360(0x08)
	struct UPropHuntPropSkillWidget* Outline; // 0x368(0x08)
	struct UPropHuntPropSkillWidget* FreeCam; // 0x370(0x08)
	struct UPropHuntPropSkillWidget* CamCollision; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)
	struct U*ca2f67574a* CachedGameStateComponent; // 0x388(0x08)
	struct U*a33f8eb3b8* CachedPlayerStateComponent; // 0x390(0x08)
	struct U*c64eb3d706* CachedCharacterComponent; // 0x398(0x08)
	struct U*f01f4f8fe5* CachedPlayerControllerComponent; // 0x3a0(0x08)
};

// Class TslGameMode.PropHuntRoleSelectionWidget
// Size: 0x3a0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntRoleSelectionWidget : UTslUserWidget {
	struct UTextBlock* TextTimer; // 0x330(0x08)
	struct UButton* ButtonHunter; // 0x338(0x08)
	struct UButton* ButtonProp; // 0x340(0x08)
	struct UImage* ImageHunterIcon; // 0x348(0x08)
	struct UImage* ImageHunterCheckIcon; // 0x350(0x08)
	struct UImage* ImagePropIcon; // 0x358(0x08)
	struct UImage* ImagePropCheckIcon; // 0x360(0x08)
	struct UTextBlock* TextHunterMaxCount; // 0x368(0x08)
	struct UTextBlock* TextHunterCount; // 0x370(0x08)
	struct UTextBlock* TextPropMaxCount; // 0x378(0x08)
	struct UTextBlock* TextPropCount; // 0x380(0x08)
	struct U*7fa8406bd3* AnimHunterDim; // 0x388(0x08)
	struct U*7fa8406bd3* AnimPropDim; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnHunterButtonHovered(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnHunterButtonHovered //  // @ game+0xe19bc1c
	void OnSelectedRoleChanged(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnSelectedRoleChanged //  // @ game+0xe1a0900
	void OnPropButtonClicked(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnPropButtonClicked //  // @ game+0xe19e9a4
	void OnPropButtonHovered(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnPropButtonHovered //  // @ game+0xe19e9b8
	void OnHunterButtonClicked(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnHunterButtonClicked //  // @ game+0xe19bc08
	void OnCloseWidget(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnCloseWidget //  // @ game+0xe19a354
	void OnHunterButtonUnhovered(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnHunterButtonUnhovered //  // @ game+0xe19bc38
	void OnSelectButtonPressedPad(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnSelectButtonPressedPad //  // @ game+0xe1a0664
	void OnPropButtonUnhovered(); // Function TslGameMode.PropHuntRoleSelectionWidget.OnPropButtonUnhovered //  // @ game+0xe19bc38
};

// Class TslGameMode.PropHuntRoundCountWidget
// Size: 0x358 (Inherited: 0x330)  [layout: KHOP]
struct UPropHuntRoundCountWidget : UTslUserWidget {
	struct UImage* ImageRound1; // 0x330(0x08)
	struct UImage* ImageRound2; // 0x338(0x08)
	struct UImage* ImageRound3; // 0x340(0x08)
	struct UTexture2D* ActiveIcon; // 0x348(0x08)
	struct UTexture2D* InactiveIcon; // 0x350(0x08)
};

// Class TslGameMode.PropHuntRoundEndWidget
// Size: 0x4c8 (Inherited: 0x4c0)  [layout: KHOP]
struct UPropHuntRoundEndWidget : UTslRoundResultBaseWidget {
	struct UPropHuntScoreBoardWidget* ScoreBoard; // 0x4c0(0x08)
};

// Class TslGameMode.PropHuntRoundProgressWidget
// Size: 0x468 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntRoundProgressWidget : UTslUserWidget {
	struct UTextBlock* TextPhaseName; // 0x330(0x08)
	struct UTextBlock* RemainingTimeText; // 0x338(0x08)
	struct UProgressBar* PhaseProgressBar; // 0x340(0x08)
	struct UCanvasPanel* PanelTimestamp; // 0x348(0x08)
	struct TMap<enum class EPropHuntMatchPhase, struct FText> PhaseDisplayNameMap; // 0x350(0x50)
	struct UClass* TimestampWidgetClass; // 0x3a0(0x08)
	struct FVector2D TimestampPosXRange; // 0x3a8(0x08)
	float TimestampPosY; // 0x3b0(0x04)
	char pad_3B4[0xc]; // 0x3b4(0x0c)
	struct TMap<enum class EPropHuntMatchPhase, struct UPropHuntRoundTimestampWidget*> TimestampWidgetMap; // 0x3c0(0x50)
	char pad_410[0x58]; // 0x410(0x58)
};

// Class TslGameMode.PropHuntRoundTimestampWidget
// Size: 0x348 (Inherited: 0x330)  [layout: KHOP]
struct UPropHuntRoundTimestampWidget : UTslUserWidget {
	struct UImage* ImageIcon; // 0x330(0x08)
	struct UTexture2D* ReachedIcon; // 0x338(0x08)
	struct UTexture2D* NotReachedIcon; // 0x340(0x08)
};

// Class TslGameMode.PropHuntScoreBoardPlayerWidget
// Size: 0x3d0 (Inherited: 0x330)  [layout: KHOP]
struct UPropHuntScoreBoardPlayerWidget : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
	struct FText Survived; // 0x350(0x18)
	struct FText KillCountFormat; // 0x368(0x18)
	struct FLinearColor NormalColor; // 0x380(0x10)
	struct FLinearColor SurvivedColor; // 0x390(0x10)
	struct U*d4d01c3d35* NaviWidgetComp; // 0x3a0(0x08)
	struct UImage* ImageBar; // 0x3a8(0x08)
	struct UImage* ImageFocused; // 0x3b0(0x08)
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x3b8(0x08)
	struct UTextBlock* TextPlayerName; // 0x3c0(0x08)
	struct UTextBlock* TextPlayerStatus; // 0x3c8(0x08)

	void OnLThumbPressed(); // Function TslGameMode.PropHuntScoreBoardPlayerWidget.OnLThumbPressed //  // @ game+0x1053c04
};

// Class TslGameMode.PropHuntScoreBoardTeamWidget
// Size: 0x3b8 (Inherited: 0x330)  [layout: KHOP]
struct UPropHuntScoreBoardTeamWidget : UTslUserWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UImage* ImageBg; // 0x338(0x08)
	struct UImage* ImageBgRole; // 0x340(0x08)
	struct UImage* ImageIconRole; // 0x348(0x08)
	struct UTextBlock* TextPlayerRole; // 0x350(0x08)
	struct UScrollBox* ScrollPlayerRole; // 0x358(0x08)
	struct TArray<struct UPropHuntScoreBoardPlayerWidget*> ScoreWidgetArray; // 0x360(0x10)
	struct FLinearColor ColorBg; // 0x370(0x10)
	struct FLinearColor ColorPlayerBar; // 0x380(0x10)
	struct UTexture2D* BgRole; // 0x390(0x08)
	struct UTexture2D* IconRole; // 0x398(0x08)
	struct FText RoleName; // 0x3a0(0x18)
};

// Class TslGameMode.PropHuntScoreBoardWidget
// Size: 0x638 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntScoreBoardWidget : UBlockInputUserWidget {
	char pad_470[0x10]; // 0x470(0x10)
	float BHoldTime; // 0x480(0x04)
	char pad_484[0xc]; // 0x484(0x0c)
	struct FText TitleHunterWin; // 0x490(0x18)
	struct FText TitlePropWin; // 0x4a8(0x18)
	struct FText RoundEnd; // 0x4c0(0x18)
	struct FString RoundFormatArgText; // 0x4d8(0x10)
	struct FText RemainTimeFormatText; // 0x4e8(0x18)
	struct FString SecFormatArgText; // 0x500(0x10)
	struct UTexture2D* HunterIcon; // 0x510(0x08)
	struct FLinearColor HunterBgColor; // 0x518(0x10)
	struct FLinearColor HunterDim; // 0x528(0x10)
	struct FLinearColor HunterLight; // 0x538(0x10)
	struct FLinearColor HunterTextColor; // 0x548(0x10)
	struct FLinearColor HunterTextShadowColor; // 0x558(0x10)
	struct UTexture2D* PropIcon; // 0x568(0x08)
	struct FLinearColor PropBgColor; // 0x570(0x10)
	struct FLinearColor PropDim; // 0x580(0x10)
	struct FLinearColor PropLight; // 0x590(0x10)
	struct FLinearColor PropTextColor; // 0x5a0(0x10)
	struct FLinearColor PropTextShadowColor; // 0x5b0(0x10)
	struct UImage* ImageBgTitle; // 0x5c0(0x08)
	struct UTextBlock* TextNextRoundWaitTime; // 0x5c8(0x08)
	struct UTextBlock* TextCurrentRound; // 0x5d0(0x08)
	struct UTslRichTextBlock* TextRoundResult; // 0x5d8(0x08)
	struct UTextBlock* TextPlayTimeDesc; // 0x5e0(0x08)
	struct UTextBlock* TextClearTime; // 0x5e8(0x08)
	struct UPropHuntScoreBoardTeamWidget* ScoreBoardHunter; // 0x5f0(0x08)
	struct UPropHuntScoreBoardTeamWidget* ScoreBoardProp; // 0x5f8(0x08)
	struct UWidget* ListExit; // 0x600(0x08)
	struct UTextBlock* TextLobbyTimer; // 0x608(0x08)
	struct UButton* ButtonLobby; // 0x610(0x08)
	struct UBorder* BorderTimer; // 0x618(0x08)
	struct UWidget* UIVSwitcherGamerCard; // 0x620(0x08)
	char pad_628[0x10]; // 0x628(0x10)

	void HandleGamepadDownOfChild(); // Function TslGameMode.PropHuntScoreBoardWidget.HandleGamepadDownOfChild //  // @ game+0xdbd0598
	void OnClicked_ButtonLobby(); // Function TslGameMode.PropHuntScoreBoardWidget.OnClicked_ButtonLobby //  // @ game+0xe199cb8
	void HandleGamepadLeftOfChild(); // Function TslGameMode.PropHuntScoreBoardWidget.HandleGamepadLeftOfChild //  // @ game+0xe195294
	void HandleFocusReceivedOfChild(); // Function TslGameMode.PropHuntScoreBoardWidget.HandleFocusReceivedOfChild //  // @ game+0xdbd064c
	void HandleGamepadUpOfChild(); // Function TslGameMode.PropHuntScoreBoardWidget.HandleGamepadUpOfChild //  // @ game+0xdbd06ec
	void OnBPressed(); // Function TslGameMode.PropHuntScoreBoardWidget.OnBPressed //  // @ game+0xe197478
	void HandleGamepadRightOfChild(); // Function TslGameMode.PropHuntScoreBoardWidget.HandleGamepadRightOfChild //  // @ game+0xe195334
	void OnBReleased(); // Function TslGameMode.PropHuntScoreBoardWidget.OnBReleased //  // @ game+0xe1974e0
	void OnGoToLobby(); // Function TslGameMode.PropHuntScoreBoardWidget.OnGoToLobby //  // @ game+0xe19bae8
};

// Class TslGameMode.*1523073850
// Size: 0x318 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*1523073850 : UDataAsset {
	struct F*e914e948d9 GameSettings; // 0x38(0x34)
	struct F*d2e21b009b CameraSettings; // 0x6c(0x2c)
	struct F*ea5ac60cc8 *4180b3ef89; // 0x98(0x70)
	struct F*d2dff5484d *04ad53f692; // 0x108(0x70)
	struct F*e4031a74e8 *586f6546ac; // 0x178(0x78)
	struct UDataTable* *d6624f70b8; // 0x1f0(0x08)
	struct UStaticMesh* *65660a763c; // 0x1f8(0x08)
	float PropChangeCooldown; // 0x200(0x04)
	int32 MaxPropChangeAttempts; // 0x204(0x04)
	float SpottedCooldownDuration; // 0x208(0x04)
	float *a19e151245; // 0x20c(0x04)
	float *e2ed83c267; // 0x210(0x04)
	float PropModeCapsuleScaleDivisor; // 0x214(0x04)
	struct TMap<enum class EPropHuntMatchPhase, struct F*11c301f744> *3621372673; // 0x218(0x50)
	struct TMap<enum class EPropHuntMatchPhase, struct F*20361c1ff8> *7c71428f81; // 0x268(0x50)
	char pad_2B8[0x60]; // 0x2b8(0x60)
};

// Class TslGameMode.*249ce7652c
// Size: 0x500 (Inherited: 0x500)  [layout: KHOP]
struct U*249ce7652c : USpringArmComponent {
};

// Class TslGameMode.PropHuntTaserDebuff
// Size: 0x550 (Inherited: 0x550)  [layout: KHOP]
struct APropHuntTaserDebuff : ATslTaserDebuff {
};

// Class TslGameMode.PropHuntTeamSurvivorsWidget
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UPropHuntTeamSurvivorsWidget : UTslUserWidget {
	struct UTextBlock* TextHunterLabel; // 0x330(0x08)
	struct UTextBlock* TextHunterCount; // 0x338(0x08)
	struct UTextBlock* TextPropCount; // 0x340(0x08)
	struct UTextBlock* TextPropLabel; // 0x348(0x08)
	struct UWidget* RootContainer; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class TslGameMode.*b5e0bc90af
// Size: 0x630 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*b5e0bc90af : USceneComponent {
	bool *f099c308cc; // 0x478(0x01)
	struct UClass* *ef71a8bc71; // 0x480(0x08)
	float ExplosionDelay; // 0x488(0x04)
	float *12d5b126c6; // 0x48c(0x04)
	struct F*ab9d821647 *ab9d821647; // 0x490(0x40)
	struct UAkAudioEvent* *13013b839e; // 0x4d0(0x08)
	struct UAkAudioEvent* *4289661db2; // 0x4d8(0x08)
	struct F*c619e3d55a *08c489816f; // 0x4e0(0x128)
	char pad_608[0x28]; // 0x608(0x28)

	void *123eef1db1(); // Function TslGameMode.*b5e0bc90af.*123eef1db1 //  // @ game+0xe1ac964
	void *9d190b7151(); // Function TslGameMode.*b5e0bc90af.*9d190b7151 //  // @ game+0xe1ac980
	void ExplodeBP(); // Function TslGameMode.*b5e0bc90af.ExplodeBP //  // @ game+0x43bab4
	void *ddfe79538c(); // Function TslGameMode.*b5e0bc90af.*ddfe79538c //  // @ game+0xe195efc
};

// Class TslGameMode.SDMModeFeature
// Size: 0x1f0 (Inherited: 0xa0)  [layout: KHOP]
struct USDMModeFeature : UTslLogicModeFeature {
	int32 GoalScore; // 0xa0(0x04)
	float PersonalPoint_Kill; // 0xa4(0x04)
	int32 ChainKillBonusStartCount; // 0xa8(0x04)
	float PersonalPoint_ChainKill; // 0xac(0x04)
	float PersonalPoint_Damage; // 0xb0(0x04)
	float DamageRequiredForPoint; // 0xb4(0x04)
	float RespawnOffTimeLeftRatio; // 0xb8(0x04)
	enum class ERespawnType RespawnType; // 0xbc(0x01)
	bool bUseInstantRespawn; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct FString BattleAreaType; // 0xc0(0x10)
	struct TMap<int32, struct ATslPlayerStart*> *14abcdec3f; // 0xd0(0x50)
	char pad_120[0x8]; // 0x120(0x08)
	struct U*2ac62a4beb* *d192e0483b; // 0x128(0x08)
	struct TArray<struct ATslBlueZoneCreateArea*> *7ea831862e; // 0x130(0x10)
	SetProperty *746846a4a1; // 0x140(0x50)
	struct TMap<struct AController*, struct AActor*> *c4a7498ffe; // 0x190(0x50)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct U*afc53e4a85* *62e6198bfe; // 0x1e8(0x08)
};

// Class TslGameMode.*2ac62a4beb
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*2ac62a4beb : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float *f53eecf238; // 0x38(0x04)
	float *572f567e99; // 0x3c(0x04)
	float *1e33715bb0; // 0x40(0x04)
	float *95df7a164a; // 0x44(0x04)
	float *0cd891301d; // 0x48(0x04)
	float *6aea106f06; // 0x4c(0x04)
};

// Class TslGameMode.*7a5cb41abd
// Size: 0x130 (Inherited: 0x110)  [layout: LECH - offset chi la uoc luong]
struct U*7a5cb41abd : UTslCarePackageModeFeature {
	float *b4d32e87a8; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<float> *f2969329fa; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class TslGameMode.SDMCK_EquipmentWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct USDMCK_EquipmentWidget : UUmgBaseWidget {
	struct UTDMCK_CapacityWidget* InventoryCapacityWidget; // 0x420(0x08)
	struct UTDMCK_EquipmentSlotWidget* HeadSlotWidget; // 0x428(0x08)
	struct UTDMCK_EquipmentSlotWidget* ArmorSlotWidget; // 0x430(0x08)
	struct UTDMCK_EquipmentSlotWidget* BagSlotWidget; // 0x438(0x08)
	struct U*aa3c11ce97* CachedSpawnKit; // 0x440(0x08)

	void RefreshWidget(); // Function TslGameMode.SDMCK_EquipmentWidget.RefreshWidget //  // @ game+0xe1a5258
};

// Class TslGameMode.SDMCK_MainWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct USDMCK_MainWidget : UUmgBaseWidget {
	struct USDMCK_SpawnKitListWidget* SpawnKitListWidget; // 0x420(0x08)
	struct USDMCK_WeaponListWidget* WeaponListWidget; // 0x428(0x08)
	struct UTextBlock* SDMCustomizeKitTitleText; // 0x430(0x08)
};

// Class TslGameMode.*aa3c11ce97
// Size: 0x178 (Inherited: 0x30)  [layout: KHOP]
struct U*aa3c11ce97 : UObject {
	struct U*32216dffde* *341c629a20; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<struct FString, struct F*48dffc46d3> *afedc982cb; // 0x48(0x50)
	char pad_98[0x50]; // 0x98(0x50)
	struct TArray<struct FSpawnKitInfo> *d8c352120a; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct TArray<struct UTexture*> *5f35070df7; // 0x100(0x10)
	struct TArray<struct UStaticMesh*> *c45c2a5795; // 0x110(0x10)
	char pad_120[0x50]; // 0x120(0x50)
	struct UWorld* *8833e45cb1; // 0x170(0x08)
};

// Class TslGameMode.SDMCK_SpawnKitListWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct USDMCK_SpawnKitListWidget : UUmgBaseWidget {
	struct USDMCK_TabWidget* ShotgunTab; // 0x420(0x08)
	struct USDMCK_TabWidget* SmgTab; // 0x428(0x08)
	struct USDMCK_TabWidget* ArTab; // 0x430(0x08)
	struct USDMCK_TabWidget* DmrTab; // 0x438(0x08)
	struct USDMCK_TabWidget* SrTab; // 0x440(0x08)
	struct USDMCK_TabWidget* EtcTab; // 0x448(0x08)
	struct UWrapBox* ItemContainer; // 0x450(0x08)
	struct UAkAudioEvent* SelectSound; // 0x458(0x08)
	struct UAkAudioEvent* EquipSound; // 0x460(0x08)
	struct UClass* SDMCK_SpawnKitWidgetClass; // 0x468(0x08)
	int32 MaxItemWidget; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct USDMCK_SpawnKitWidget*> SpawnKitWidgets; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)
	struct U*aa3c11ce97* CachedSpawnKit; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct TArray<struct USDMCK_SpawnKitWidget*> CurTabSpawnKitWidgets; // 0x4a0(0x10)

	void OnSlotSelect(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnSlotSelect //  // @ game+0xe1a13bc
	void OnCategoryNext(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnCategoryNext //  // @ game+0xe198014
	void OnSlotUp(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnSlotUp //  // @ game+0xe1a13d0
	void OnSlotLeft(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnSlotLeft //  // @ game+0xe1a1394
	void OnSlotDown(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnSlotDown //  // @ game+0xe1a1380
	void OnCategoryPrev(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnCategoryPrev //  // @ game+0xe198028
	void RefreshWidget(); // Function TslGameMode.SDMCK_SpawnKitListWidget.RefreshWidget //  // @ game+0xe1a526c
	void OnSlotRight(); // Function TslGameMode.SDMCK_SpawnKitListWidget.OnSlotRight //  // @ game+0xe1a13a8
};

// Class TslGameMode.SDMCK_SpawnKitWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USDMCK_SpawnKitWidget : UUmgBaseWidget {
	struct FSlateColor ButtonNormalColor; // 0x420(0x28)
	struct FSlateColor ButtonHoverColor; // 0x448(0x28)
	struct UWidgetSwitcher* ItemBGSwitcher; // 0x470(0x08)
	struct UImage* IconImage; // 0x478(0x08)
	struct UTextBlock* ItemNameText; // 0x480(0x08)
	struct UTextBlock* AmmoName; // 0x488(0x08)
	struct UTextBlock* AmmoCountText; // 0x490(0x08)
	struct USizeBox* EquippedTagSizeBox; // 0x498(0x08)
	struct UAkAudioEvent* EquipSound; // 0x4a0(0x08)
	struct UAkAudioEvent* HoverSound; // 0x4a8(0x08)
	char pad_4B0[0x28]; // 0x4b0(0x28)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.SDMCK_SpawnKitWidget.OnAsyncLoadIconFinished //  // @ game+0xe197428
};

// Class TslGameMode.SDMCK_TabWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USDMCK_TabWidget : UUmgBaseWidget {
	struct FText TabText; // 0x420(0x18)
	struct UButton* Button; // 0x438(0x08)
	struct UImage* LineImage; // 0x440(0x08)
	struct USDMCK_SpawnKitListWidget* SpawnKitListWidget; // 0x448(0x08)
	struct UTslFlowingTextWidget* TabNameFlowText; // 0x450(0x08)
	struct UAkAudioEvent* ClickSound; // 0x458(0x08)
	struct UAkAudioEvent* HoverSound; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)

	void OnButtonClicked(); // Function TslGameMode.SDMCK_TabWidget.OnButtonClicked //  // @ game+0xe1977c0
	void OnButtonHovered(); // Function TslGameMode.SDMCK_TabWidget.OnButtonHovered //  // @ game+0xe1978e4
};

// Class TslGameMode.SDMCK_WeaponBodySlotWidget
// Size: 0x780 (Inherited: 0x748)  [layout: LECH - offset chi la uoc luong]
struct USDMCK_WeaponBodySlotWidget : UTslWeaponBodySlotWidget {
	char pad_748[0x8]; // 0x748(0x08)
	struct TArray<struct FWeaponAttachmentAssetData> AttachmentDatas; // 0x750(0x10)
	struct UHorizontalBox* AmmoHorizontalBox; // 0x760(0x08)
	char pad_768[0x18]; // 0x768(0x18)

	void OnSpawnActorInSceneCaptureWorld(); // Function TslGameMode.SDMCK_WeaponBodySlotWidget.OnSpawnActorInSceneCaptureWorld //  // @ game+0xe1a1a64
};

// Class TslGameMode.SDMCK_WeaponEquipmentSlotWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct USDMCK_WeaponEquipmentSlotWidget : UUmgBaseWidget {
	struct USDMCK_WeaponBodySlotWidget* WeaponBodySlotWidget; // 0x420(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Muzzle; // 0x428(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* LowerRail; // 0x430(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Magazine; // 0x438(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* UpperRail; // 0x440(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* CantedSight; // 0x448(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Stock; // 0x450(0x08)
	struct TMap<enum class EWeaponAttachmentSlotID, struct UTDMCK_WeaponAttachmentSlotWidget*> AttachableMap; // 0x458(0x50)
	struct UTextureRenderTarget2D* RenderTargetTexture; // 0x4a8(0x08)
};

// Class TslGameMode.SDMCK_WeaponListWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct USDMCK_WeaponListWidget : UUmgBaseWidget {
	struct USDMCK_WeaponEquipmentSlotWidget* Weapon001; // 0x420(0x08)
	struct USDMCK_WeaponEquipmentSlotWidget* Weapon003; // 0x428(0x08)
	struct USDMCK_WeaponEquipmentSlotWidget* Weapon004; // 0x430(0x08)

	void RefreshWidget(); // Function TslGameMode.SDMCK_WeaponListWidget.RefreshWidget //  // @ game+0xe1d7c7c
};

// Class TslGameMode.*faba81d439
// Size: 0x3e0 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*faba81d439 : U*13a763f8f8 {
	float NextRespawnTimeSeconds; // 0x2c8(0x04)
	struct F*a5a9d76cc2 *a0040220aa; // 0x2cc(0x1c) rep=OnRep_PersonalStat
	struct FSDMUserPlayData *e0c0f98c05; // 0x2e8(0x28) rep=OnRep_UsingSpawnkitIds
	struct F*a28fa62182 *a28fa62182; // 0x310(0xc8)
	char pad_3D8[0x8]; // 0x3d8(0x08)

	void OnRep_PersonalStat(); // Function TslGameMode.*faba81d439.OnRep_PersonalStat //  // @ game+0xe1d2a90
	void OnRep_UsingSpawnkitIds(); // Function TslGameMode.*faba81d439.OnRep_UsingSpawnkitIds //  // @ game+0xe1d2f48
};

// Class TslGameMode.*afc53e4a85
// Size: 0x330 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*afc53e4a85 : U*606d3b4d41 {
	int32 GoalScore; // 0x238(0x04) rep=OnRep_InitModeProperties
	bool bUseInstantRespawn; // 0x23c(0x01) rep=OnRep_InitModeProperties
	enum class ERespawnType RespawnType; // 0x23d(0x01) rep=OnRep_InitModeProperties
	int32 ChainKillBonusStartCount; // 0x240(0x04) rep=OnRep_InitModeProperties
	char pad_244[0x4]; // 0x244(0x04)
	struct FMulticastDelegate OnInitModePropertyReplicated; // 0x248(0x10)
	char pad_258[0x4]; // 0x258(0x04)
	float LastRespawnTimeSeconds; // 0x25c(0x04)
	struct FMulticastDelegate OnStartModePropertyReplicated; // 0x260(0x10)
	char pad_270[0x18]; // 0x270(0x18)
	float NextRespawnTimeSeconds; // 0x288(0x04) rep=OnRep_NextRespawnTimeSeconds
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FMulticastDelegate OnRespawnTimeUpdated; // 0x290(0x10)
	bool bRespawnOffed; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct TArray<struct FString> ActivatedPlayerStartNames; // 0x2a8(0x10)
	struct UClass* *a88a41f2c6; // 0x2b8(0x08) rep=OnRep_SDMSpawnKitModeFeatureClass
	struct U*aa3c11ce97* *466d9dfe3f; // 0x2c0(0x08)
	char pad_2C8[0x68]; // 0x2c8(0x68)

	void OnRep_InitModeProperties(); // Function TslGameMode.*afc53e4a85.OnRep_InitModeProperties //  // @ game+0xe1d1e78
	void OnRep_SDMSpawnKitModeFeatureClass(); // Function TslGameMode.*afc53e4a85.OnRep_SDMSpawnKitModeFeatureClass //  // @ game+0xe1d2bd0
	void OnRep_NextRespawnTimeSeconds(); // Function TslGameMode.*afc53e4a85.OnRep_NextRespawnTimeSeconds //  // @ game+0xe1d29ac
};

// Class TslGameMode.SDMHUDScoreSlotWidget
// Size: 0x468 (Inherited: 0x420)  [layout: KHOP]
struct USDMHUDScoreSlotWidget : UUmgBaseWidget {
	struct UTextBlock* TextRank; // 0x420(0x08)
	struct UTextBlock* TextPlayerName; // 0x428(0x08)
	struct UTextBlock* TextScore; // 0x430(0x08)
	struct UImage* ImageProgressBar; // 0x438(0x08)
	struct UImage* ImageBest; // 0x440(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x448(0x08)
	struct UMaterialInstanceDynamic* MIProgressBar; // 0x450(0x08)
	struct UTexture2D* TextureMyBg; // 0x458(0x08)
	struct UTexture2D* TextureOtherBg; // 0x460(0x08)
};

// Class TslGameMode.SDMHUDWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USDMHUDWidget : UUmgBaseWidget {
	struct UTextBlock* TextLeftSec; // 0x420(0x08)
	struct UTextBlock* TextLeftMin; // 0x428(0x08)
	struct USDMHUDScoreSlotWidget* ScoreSlot1; // 0x430(0x08)
	struct USDMHUDScoreSlotWidget* ScoreSlot2; // 0x438(0x08)
	struct U*7fa8406bd3* AnimGainFirstPlace; // 0x440(0x08)
	struct U*7fa8406bd3* AnimLoseFirstPlace; // 0x448(0x08)
	char pad_450[0x10]; // 0x450(0x10)
};

// Class TslGameMode.SDMLeaderboardEntryWidget
// Size: 0x2c0 (Inherited: 0x258)  [layout: KHOP]
struct USDMLeaderboardEntryWidget : UUserWidget {
	struct UBorder* BorderBg; // 0x258(0x08)
	struct UTextBlock* TextRank; // 0x260(0x08)
	struct UTextBlock* TextPlayerName; // 0x268(0x08)
	struct UTextBlock* TextKill; // 0x270(0x08)
	struct UTextBlock* TextDeath; // 0x278(0x08)
	struct UTextBlock* TextDamage; // 0x280(0x08)
	struct UTextBlock* TextScore; // 0x288(0x08)
	struct UImage* ImageBest; // 0x290(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x298(0x08)
	struct FLinearColor NormalTextColor; // 0x2a0(0x10)
	struct FLinearColor LocalPlayerTextColor; // 0x2b0(0x10)
};

// Class TslGameMode.SDMLeaderboardStatusWidget
// Size: 0x520 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct USDMLeaderboardStatusWidget : UBlockInputUserWidget {
	struct UCanvasPanel* PanelContents; // 0x470(0x08)
	struct UCanvasPanel* SDMCustomizeKitCanvas; // 0x478(0x08)
	struct USDMCK_MainWidget* SDMCustomizeKitWidget; // 0x480(0x08)
	struct UButton* CustomizeButton; // 0x488(0x08)
	struct UButton* BackToMapButton; // 0x490(0x08)
	struct USDMSpawnKitWidget* SDMSpawnKitWidget; // 0x498(0x08)
	struct USDMLeaderboardWidget* WidgetLeaderboard; // 0x4a0(0x08)
	struct UTextBlock* TextMapName; // 0x4a8(0x08)
	float MapModeOffsetY; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FSlateColor ButtonNormalColor; // 0x4b8(0x28)
	struct FSlateColor ButtonHoverColor; // 0x4e0(0x28)
	char pad_508[0x18]; // 0x508(0x18)

	void OnClickedCustomizeButton(); // Function TslGameMode.SDMLeaderboardStatusWidget.OnClickedCustomizeButton //  // @ game+0xe1cba24
	void OnClickedCloseWidget(); // Function TslGameMode.SDMLeaderboardStatusWidget.OnClickedCloseWidget //  // @ game+0xe1cb990
	void OnClickedBackToMapButton(); // Function TslGameMode.SDMLeaderboardStatusWidget.OnClickedBackToMapButton //  // @ game+0xe1cb954
};

// Class TslGameMode.SDMLeaderboardWidget
// Size: 0x458 (Inherited: 0x420)  [layout: KHOP]
struct USDMLeaderboardWidget : UUmgBaseWidget {
	struct UVerticalBox* ListEntry; // 0x420(0x08)
	struct UClass* EntryWidgetClass; // 0x428(0x08)
	struct TArray<struct UTexture2D*> RankBackgroundTextures; // 0x430(0x10)
	struct UTexture2D* DefaultBackgroundTexture; // 0x440(0x08)
	struct TArray<struct USDMLeaderboardEntryWidget*> EntryWidgets; // 0x448(0x10)
};

// Class TslGameMode.SDMMatchEndWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct USDMMatchEndWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimMatchEnd; // 0x420(0x08)
};

// Class TslGameMode.SDMMatchPreparerModeFeature
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct USDMMatchPreparerModeFeature : UTslNormalMatchPreparerModeFeature {
};

// Class TslGameMode.SDMMatchResultWidget
// Size: 0x4c8 (Inherited: 0x490)  [layout: KHOP]
struct USDMMatchResultWidget : UBaseResultWidget {
	struct USDMLeaderboardWidget* WidgetLeaderboard; // 0x490(0x08)
	struct UTextBlock* TextRewardAP; // 0x498(0x08)
	struct UButton* ButtonExitToLobby; // 0x4a0(0x08)
	struct UButton* ButtonReport; // 0x4a8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* WidgetExitGamepadKeyIcon; // 0x4b0(0x08)
	struct U*7fa8406bd3* AnimLoop; // 0x4b8(0x08)
	struct U*7fa8406bd3* AnimMatchEnd; // 0x4c0(0x08)

	void OnClicked_ButtonLobby(); // Function TslGameMode.SDMMatchResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
	void OnClickedReport(); // Function TslGameMode.SDMMatchResultWidget.OnClickedReport //  // @ game+0xe199ccc
};

// Class TslGameMode.SDMPlayerControllerComponent
// Size: 0x480 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct USDMPlayerControllerComponent : U*481d3a4609 {
	char pad_330[0x14]; // 0x330(0x14)
	float RespawnRequestTerm; // 0x344(0x04)
	struct TArray<struct ATslWeapon*> *9a37dc4b92; // 0x348(0x10)
	struct TArray<struct ATslWeapon*> *44e318d287; // 0x358(0x10)
	float *d84b0a4cfb; // 0x368(0x04)
	char pad_36C[0x9c]; // 0x36c(0x9c)
	struct FString *56729f2ec8; // 0x408(0x10)
	char pad_418[0x68]; // 0x418(0x68)

	void OnPersonalScoreChanged(); // Function TslGameMode.SDMPlayerControllerComponent.OnPersonalScoreChanged //  // @ game+0xe1d0e24
	void *845c13461f(); // Function TslGameMode.SDMPlayerControllerComponent.*845c13461f //  // @ game+0xe1d9508
	void OnPlayerStateReplicatedAtClient(); // Function TslGameMode.SDMPlayerControllerComponent.OnPlayerStateReplicatedAtClient //  // @ game+0xe1d0e90
	void *1bdb2d8aaf(); // Function TslGameMode.SDMPlayerControllerComponent.*1bdb2d8aaf //  // @ game+0xe1d8478
	void *372d97645f(); // Function TslGameMode.SDMPlayerControllerComponent.*372d97645f //  // @ game+0xe1d898c
};

// Class TslGameMode.*7e9b53844d
// Size: 0x138 (Inherited: 0x138)  [layout: KHOP]
struct U*7e9b53844d : U*c5925ff5f9 {
};

// Class TslGameMode.*0a2b1efc88
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct U*0a2b1efc88 : U*b61cdf786e {
};

// Class TslGameMode.*32216dffde
// Size: 0x1d8 (Inherited: 0x110)  [layout: KHOP]
struct U*32216dffde : UTslSpawnKitModeFeature {
	struct UDataTable* sdmSpawnKitDataTable; // 0x110(0x08)
	struct TArray<struct FString> *821f619361; // 0x118(0x10)
	float *0a00c76034; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct U*aa3c11ce97* *aa3c11ce97; // 0x130(0x08)
	char pad_138[0x50]; // 0x138(0x50)
	struct TMap<struct FString, struct F*ed3cd726ad> *330e66ec81; // 0x188(0x50)
};

// Class TslGameMode.SDMSpawnKitWidget
// Size: 0x528 (Inherited: 0x478)  [layout: KHOP]
struct USDMSpawnKitWidget : UTslSpawnKitBaseWidget {
	struct TArray<struct UTDMSpawnKitItemWidget*> ItemWidgets; // 0x478(0x10)
	struct UClass* SpawnKitItemWidgetClass; // 0x488(0x08)
	struct UHorizontalBox* SpawnKitButtonsHorizontalBox; // 0x490(0x08)
	struct USizeBox* PrimaryWeaponSizeBox_01; // 0x498(0x08)
	struct UImage* PrimaryWeaponImage_01; // 0x4a0(0x08)
	struct USizeBox* PrimaryWeaponSizeBox_02; // 0x4a8(0x08)
	struct UImage* PrimaryWeaponImage_02; // 0x4b0(0x08)
	struct USizeBox* SecondaryWeaponSizeBox; // 0x4b8(0x08)
	struct UImage* SecondaryWeaponImage; // 0x4c0(0x08)
	struct USizeBox* ThrowableWeaponSizeBox; // 0x4c8(0x08)
	struct UImage* ThrowableWeaponImage; // 0x4d0(0x08)
	struct USizeBox* MeleeWeaponSizeBox; // 0x4d8(0x08)
	struct UImage* MeleeWeaponImage; // 0x4e0(0x08)
	struct USizeBox* HelmetSizeBox; // 0x4e8(0x08)
	struct UWidgetSwitcher* HelmetSwitcher; // 0x4f0(0x08)
	struct USizeBox* VestSizeBox; // 0x4f8(0x08)
	struct UWidgetSwitcher* VestSwitcher; // 0x500(0x08)
	struct USizeBox* LeftBumperSizeBox; // 0x508(0x08)
	struct USizeBox* RightBumperSizeBox; // 0x510(0x08)
	struct U*aa3c11ce97* CachedSpawnKit; // 0x518(0x08)
	struct UAkAudioEvent* SelectSound; // 0x520(0x08)

	void RefreshAllSpawnKitWidget(); // Function TslGameMode.SDMSpawnKitWidget.RefreshAllSpawnKitWidget //  // @ game+0xe1d7c2c
	void ChangeIndex(); // Function TslGameMode.SDMSpawnKitWidget.ChangeIndex //  // @ game+0xe1c001c
	void OnAsyncLoadWeaponFinish(); // Function TslGameMode.SDMSpawnKitWidget.OnAsyncLoadWeaponFinish //  // @ game+0xe1ca818
	void OnLBPressed(); // Function TslGameMode.SDMSpawnKitWidget.OnLBPressed //  // @ game+0xe1cebac
	void OnRBPressed(); // Function TslGameMode.SDMSpawnKitWidget.OnRBPressed //  // @ game+0xe1d1540
};

// Class TslGameMode.SKBDAICharacter
// Size: 0x1020 (Inherited: 0xfa0)  [layout: KHOP]
struct ASKBDAICharacter : ATslNpcCharacter {
	float *cf8fb04823; // 0xfa0(0x04)
	char pad_FA4[0x4]; // 0xfa4(0x04)
	struct FString *5fdb2bd233; // 0xfa8(0x10)
	struct UOnetimeInteractionComponent* InteractionComponent; // 0xfb8(0x08)
	char pad_FC0[0x50]; // 0xfc0(0x50)
	struct UClass* Buff; // 0x1010(0x08)
	struct UClass* *5b6f809d80; // 0x1018(0x08)

	void OnServerInteractionSucceed(); // Function TslGameMode.SKBDAICharacter.OnServerInteractionSucceed //  // @ game+0xe1d4064
};

// Class TslGameMode.SKBDAIController
// Size: 0x578 (Inherited: 0x570)  [layout: LECH - offset chi la uoc luong]
struct ASKBDAIController : ADummyAIController {
	char pad_570[0x8]; // 0x570(0x08)
};

// Class TslGameMode.SKBDAIPlayerState
// Size: 0x1140 (Inherited: 0x1140)  [layout: KHOP]
struct ASKBDAIPlayerState : ADummyAIPlayerState {
};

// Class TslGameMode.*7210ed6f25
// Size: 0x250 (Inherited: 0x230)  [layout: LECH - offset chi la uoc luong]
struct U*7210ed6f25 : U*5757366fea {
	struct FName *bacb72c408; // 0x230(0x08)
	struct FName *bb4af3a6be; // 0x238(0x08)
	struct FName *e4e2c57f68; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)
};

// Class TslGameMode.SKBDModeFeature
// Size: 0x260 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct USKBDModeFeature : UTslLogicModeFeature {
	struct U*46051e33b2* *46051e33b2; // 0xa0(0x08)
	struct UDataTable* *949efd6967; // 0xa8(0x08)
	struct UDataTable* *c7ed3b27f4; // 0xb0(0x08)
	struct UDataTable* *fbb3b61f59; // 0xb8(0x08)
	struct UDataTable* RewardDataTable; // 0xc0(0x08)
	struct TMap<enum class ETslSKBDDifficulty, struct FString> *fb7b3130ec; // 0xc8(0x50)
	float *ef5c8c3311; // 0x118(0x04)
	float *ccb039e5d5; // 0x11c(0x04)
	float *2c1ff3e8f2; // 0x120(0x04)
	float *05a449b611; // 0x124(0x04)
	struct FText *c5c14e4b14; // 0x128(0x18)
	int32 *4a6b668aa1; // 0x140(0x04)
	float *518d2b8969; // 0x144(0x04)
	struct TArray<struct FName> *35c1b65a9e; // 0x148(0x10)
	struct ASKBDDifficultyVolume* *59a9f7da92; // 0x158(0x08)
	struct U*400bb6c300* *d192e0483b; // 0x160(0x08)
	struct FName *4336329836; // 0x168(0x08)
	float *5115fea580; // 0x170(0x04)
	char pad_174[0x7c]; // 0x174(0x7c)
	struct TMap<uint32, struct F*a4da2a6722> *a365fbe417; // 0x1f0(0x50)
	char pad_240[0x8]; // 0x240(0x08)
	struct TArray<struct F*b7f551872c> *6c693e8f10; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)
};

// Class TslGameMode.*400bb6c300
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*400bb6c300 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float *f53eecf238; // 0x38(0x04)
	float *572f567e99; // 0x3c(0x04)
	float *1e33715bb0; // 0x40(0x04)
	float *95df7a164a; // 0x44(0x04)
	float *0cd891301d; // 0x48(0x04)
	float *6aea106f06; // 0x4c(0x04)
};

// Class TslGameMode.SKBDBossAIController
// Size: 0x578 (Inherited: 0x570)  [layout: LECH - offset chi la uoc luong]
struct ASKBDBossAIController : ADummyAIController {
	char pad_570[0x8]; // 0x570(0x08)
};

// Class TslGameMode.SKBDBossGaugeWidget
// Size: 0x538 (Inherited: 0x420)  [layout: KHOP]
struct USKBDBossGaugeWidget : UUmgBaseWidget {
	struct FLinearColor GroggyColor; // 0x420(0x10)
	struct FLinearColor GroggyRecoveryColor; // 0x430(0x10)
	struct FLinearColor GroggyBarBaseColor; // 0x440(0x10)
	struct FLinearColor GroggyBarBodyColor; // 0x450(0x10)
	struct TMap<int32, struct UTexture2D*> ImageMapBoss; // 0x460(0x50)
	struct UImage* ImageBoss; // 0x4b0(0x08)
	struct UImage* ImageLastBoss; // 0x4b8(0x08)
	struct UImage* ImageHP; // 0x4c0(0x08)
	struct UImage* ImageGroggy; // 0x4c8(0x08)
	struct UImage* ImageAOEGlow; // 0x4d0(0x08)
	struct U*7fa8406bd3* AnimDamage; // 0x4d8(0x08)
	struct U*7fa8406bd3* AnimBattleStart; // 0x4e0(0x08)
	struct U*7fa8406bd3* AnimBattleFinish; // 0x4e8(0x08)
	struct U*7fa8406bd3* AnimStageFinish; // 0x4f0(0x08)
	struct U*7fa8406bd3* AnimReset; // 0x4f8(0x08)
	struct U*7fa8406bd3* AnimPrepareAOESkill; // 0x500(0x08)
	struct U*7fa8406bd3* AnimExecuteAOESkill; // 0x508(0x08)
	struct USKBDDifficultySelectTimerWidget* HUDTimer; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
	struct UMaterialInstanceDynamic* MIHP; // 0x520(0x08)
	struct UMaterialInstanceDynamic* MIGroggy; // 0x528(0x08)
	struct UMaterialInstanceDynamic* MIBoss; // 0x530(0x08)
};

// Class TslGameMode.SKBDBossMonster
// Size: 0x1440 (Inherited: 0xfa0)  [layout: LECH - offset chi la uoc luong]
struct ASKBDBossMonster : ATslNpcCharacter {
	char pad_FA0[0x8]; // 0xfa0(0x08)
	struct FString *5fdb2bd233; // 0xfa8(0x10)
	struct UClass* *80a149eb99; // 0xfb8(0x08)
	struct UClass* *5c13a87020; // 0xfc0(0x08)
	struct UClass* *d485d63492; // 0xfc8(0x08)
	struct UClass* *a6c58866ff; // 0xfd0(0x08)
	float DBNOHealth; // 0xfd8(0x04)
	bool *25c7d98974; // 0xfdc(0x01) rep=OnRep_DBNO
	enum class EInstantKillState *dd2790bae1; // 0xfdd(0x01) rep=OnRep_InstantKillState
	char pad_FDE[0x12]; // 0xfde(0x12)
	struct F*95c7e6e22d *a7325e3a6e; // 0xff0(0x150)
	struct F*37e99965d0 BossEffectData; // 0x1140(0x98)
	bool *06e0089efe; // 0x11d8(0x01) rep=OnRep_BossSpawned
	char pad_11D9[0x7]; // 0x11d9(0x07)
	struct ASKBDLaserEffectActor* *88c0109dd7; // 0x11e0(0x08)
	struct ASKBDLaserGuideEffectActor* *fd410f4e4c; // 0x11e8(0x08)
	struct ASKBDLaserBurnEffectActor* *89f486dcf0; // 0x11f0(0x08)
	struct ASKBDLaserDamageFieldContainer* *72f62804d4; // 0x11f8(0x08)
	struct UParticleSystemComponent* InstantKillEffect; // 0x1200(0x08)
	struct UParticleSystemComponent* GroggyEffect; // 0x1208(0x08)
	struct UParticleSystemComponent* SpawnEffect; // 0x1210(0x08)
	struct TArray<struct UParticleSystemComponent*> *fdfc9c4979; // 0x1218(0x10)
	char pad_1228[0xb8]; // 0x1228(0xb8)
	struct UAkComponent* AkComponent; // 0x12e0(0x08)
	struct TMap<enum class EBossAKEventType, struct UAkAudioEvent*> *6fae46802e; // 0x12e8(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> *d053148298; // 0x1338(0x10)
	char pad_1348[0xf8]; // 0x1348(0xf8)

	void *d8271d7737(); // Function TslGameMode.SKBDBossMonster.*d8271d7737 //  // @ game+0xe1ca068
	void OnRep_DBNO(); // Function TslGameMode.SKBDBossMonster.OnRep_DBNO //  // @ game+0xe1d1d68
	void *d3bd42881a(); // Function TslGameMode.SKBDBossMonster.*d3bd42881a //  // @ game+0xe1c9ee0
	void OnRep_InstantKillState(); // Function TslGameMode.SKBDBossMonster.OnRep_InstantKillState //  // @ game+0xe1d1f5c
	void *ad7d7bef19(); // Function TslGameMode.SKBDBossMonster.*ad7d7bef19 //  // @ game+0xe1ca050
	void *8a91437c44(); // Function TslGameMode.SKBDBossMonster.*8a91437c44 //  // @ game+0xe195f14
	void *68c1ac6644(); // Function TslGameMode.SKBDBossMonster.*68c1ac6644 //  // @ game+0xe1c3c88
	void *00614735df(); // Function TslGameMode.SKBDBossMonster.*00614735df //  // @ game+0xe1cc29c
	void *9720db9c5a(); // Function TslGameMode.SKBDBossMonster.*9720db9c5a //  // @ game+0xda95480
	void OnRep_BossSpawned(); // Function TslGameMode.SKBDBossMonster.OnRep_BossSpawned //  // @ game+0xe1d1b60
	void *55f601f728(); // Function TslGameMode.SKBDBossMonster.*55f601f728 //  // @ game+0xe1c9d70
	void *cec1817f75(); // Function TslGameMode.SKBDBossMonster.*cec1817f75 //  // @ game+0xe1c9d40
	void *cdfd5855c2(); // Function TslGameMode.SKBDBossMonster.*cdfd5855c2 //  // @ game+0xe1c3d04
	void *78fbbb16fb(); // Function TslGameMode.SKBDBossMonster.*78fbbb16fb //  // @ game+0xe1c9d58
};

// Class TslGameMode.SKBDBuffListWidget
// Size: 0x478 (Inherited: 0x420)  [layout: KHOP]
struct USKBDBuffListWidget : UUmgBaseWidget {
	struct UHorizontalBox* container; // 0x420(0x08)
	struct TMap<enum class EBuffPropertyType, struct USKBDBuffWidget*> IconMap; // 0x428(0x50)
};

// Class TslGameMode.SKBDBuffWidget
// Size: 0x4b8 (Inherited: 0x420)  [layout: KHOP]
struct USKBDBuffWidget : UUmgBaseWidget {
	enum class EBuffPropertyType BuffPropertyType; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<int32> ComboLevels; // 0x428(0x10)
	struct TArray<struct UTexture2D*> ComboIcons; // 0x438(0x10)
	struct UImage* ImageIcon; // 0x448(0x08)
	struct UTextBlock* TextBlockCombo; // 0x450(0x08)
	struct USizeBox* SizeBoxCombo; // 0x458(0x08)
	struct U*7fa8406bd3* AnimCombo0; // 0x460(0x08)
	struct U*7fa8406bd3* AnimCombo1; // 0x468(0x08)
	struct U*7fa8406bd3* AnimCombo2; // 0x470(0x08)
	struct U*7fa8406bd3* AnimCombo3; // 0x478(0x08)
	struct U*7fa8406bd3* AnimCombo4; // 0x480(0x08)
	struct U*7fa8406bd3* AnimCombo5; // 0x488(0x08)
	char pad_490[0x18]; // 0x490(0x18)
	struct TArray<struct U*7fa8406bd3*> ComboAnim; // 0x4a8(0x10)
};

// Class TslGameMode.*aa417a82cb
// Size: 0x6b0 (Inherited: 0x678)  [layout: LECH - offset chi la uoc luong]
struct U*aa417a82cb : U*e45aef6e5d {
	float *0f6cc42e57; // 0x678(0x04)
	float *ebfd1d01d9; // 0x67c(0x04)
	float *739b08db89; // 0x680(0x04)
	bool bIsGroggy; // 0x684(0x01)
	bool bIsRage; // 0x685(0x01)
	bool bIsDespawn; // 0x686(0x01)
	char pad_687[0x1]; // 0x687(0x01)
	float AdditivePitch; // 0x688(0x04)
	float AdditiveHeight; // 0x68c(0x04)
	char pad_690[0x20]; // 0x690(0x20)
};

// Class TslGameMode.SKBDCharacterBuff
// Size: 0x5d0 (Inherited: 0x508)  [layout: LECH - offset chi la uoc luong]
struct ASKBDCharacterBuff : ATslReplicatedBuff {
	char pad_508[0x8]; // 0x508(0x08)
	enum class EBuffPropertyType *4853356dda; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float Ratio; // 0x514(0x04)
	bool bUseOnlyOneControlRestriction; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct TMap<enum class EControlType, int32> *c0dbc40a67; // 0x520(0x50)
	int32 *dfc14a6c6e; // 0x570(0x04)
	char pad_574[0x54]; // 0x574(0x54)
	float *9892730648; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
};

// Class TslGameMode.SKBDCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct USKBDCheatManager : UTslCheatManager {

	void SKBDRestartAll(); // Function TslGameMode.SKBDCheatManager.SKBDRestartAll //  // @ game+0x1053c04
	void SKBDPauseAll(); // Function TslGameMode.SKBDCheatManager.SKBDPauseAll //  // @ game+0x1053c04
	void BossUseInstantKill(); // Function TslGameMode.SKBDCheatManager.BossUseInstantKill //  // @ game+0x1053c04
	void RemoveSKBDBestClearDifficulty(); // Function TslGameMode.SKBDCheatManager.RemoveSKBDBestClearDifficulty //  // @ game+0xda977bc
	void AddSKBDBestClearDifficulty(); // Function TslGameMode.SKBDCheatManager.AddSKBDBestClearDifficulty //  // @ game+0xda977bc
	void KillBossToilet(); // Function TslGameMode.SKBDCheatManager.KillBossToilet //  // @ game+0x1053c04
	void SKBDRemoveBuff(); // Function TslGameMode.SKBDCheatManager.SKBDRemoveBuff //  // @ game+0xda95664
	void SetBossHealth(); // Function TslGameMode.SKBDCheatManager.SetBossHealth //  // @ game+0xdac6c7c
	void KillAllNormalToilet(); // Function TslGameMode.SKBDCheatManager.KillAllNormalToilet //  // @ game+0x1053c04
	void BossLineLaserAttack(); // Function TslGameMode.SKBDCheatManager.BossLineLaserAttack //  // @ game+0x1053c04
	void BossSectorLaserAttack(); // Function TslGameMode.SKBDCheatManager.BossSectorLaserAttack //  // @ game+0x1053c04
};

// Class TslGameMode.SKBDCountDownWidget
// Size: 0x3e8 (Inherited: 0x388)  [layout: KHOP]
struct USKBDCountDownWidget : UTslCountDownWidget {
	struct TMap<int32, struct UTexture2D*> ImageMapCount; // 0x388(0x50)
	struct UAkAudioEvent* UICountdownSound; // 0x3d8(0x08)
	struct UImage* ImageCountDown; // 0x3e0(0x08)

	void OnDifficultySelect(); // Function TslGameMode.SKBDCountDownWidget.OnDifficultySelect //  // @ game+0xe1cd82c
};

// Class TslGameMode.SKBDCraftingActor
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct ASKBDCraftingActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct U*73c48ccd03* CraftingInteractionComp; // 0x408(0x08)
	struct U*5b93e10c3e* OwnerOutlineComp; // 0x410(0x08)

	void OnClientInteractionSucceed(); // Function TslGameMode.SKBDCraftingActor.OnClientInteractionSucceed //  // @ game+0xe1cbb18
};

// Class TslGameMode.*73c48ccd03
// Size: 0x610 (Inherited: 0x610)  [layout: KHOP]
struct U*73c48ccd03 : UInteractionComponent {
	struct UPrimitiveComponent* *522e88278e; // 0x608(0x08)
};

// Class TslGameMode.SKBDDifficultySelectMemberNumberWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct USKBDDifficultySelectMemberNumberWidget : UUmgBaseWidget {
	struct UBorder* BorderNumber; // 0x420(0x08)
	struct UTextBlock* TextNumber; // 0x428(0x08)
};

// Class TslGameMode.SKBDDifficultySelectRewardListEntryWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct USKBDDifficultySelectRewardListEntryWidget : UUmgBaseWidget {
	struct UImage* ImageItem; // 0x420(0x08)
	struct UTextBlock* TextName; // 0x428(0x08)
	struct UTextBlock* TextDescription; // 0x430(0x08)
};

// Class TslGameMode.SKBDDifficultySelectStageListEntryWidget
// Size: 0x530 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USKBDDifficultySelectStageListEntryWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UButton* Button; // 0x490(0x08)
	struct UPanelWidget* PanelSelectedMembers; // 0x498(0x08)
	struct UPanelWidget* PanelClearMemberNumbers; // 0x4a0(0x08)
	struct UWidget* PanelStageClear; // 0x4a8(0x08)
	struct UWidgetSwitcher* SwitcherBossImage; // 0x4b0(0x08)
	struct UImage* PanelHoveredBg; // 0x4b8(0x08)
	struct UPanelWidget* PanelMostVoted; // 0x4c0(0x08)
	struct U*7fa8406bd3* AnimDefault; // 0x4c8(0x08)
	struct U*7fa8406bd3* AnimHovered; // 0x4d0(0x08)
	struct U*7fa8406bd3* AnimSelected; // 0x4d8(0x08)
	struct FSKBDDifficultySelectStageListEntryWidgetData WidgetData; // 0x4e0(0x08)
	struct TArray<struct UWidget*> SelectedMemberWidgetList; // 0x4e8(0x10)
	struct TArray<struct USKBDDifficultySelectMemberNumberWidget*> ClearMemberNumberWidgetList; // 0x4f8(0x10)
	char pad_508[0x28]; // 0x508(0x28)

	void HandleButtonHovered(); // Function TslGameMode.SKBDDifficultySelectStageListEntryWidget.HandleButtonHovered //  // @ game+0xe1c6df4
	void HandleButtonClicked(); // Function TslGameMode.SKBDDifficultySelectStageListEntryWidget.HandleButtonClicked //  // @ game+0xe1c6dbc
	void HandleButtonUnhovered(); // Function TslGameMode.SKBDDifficultySelectStageListEntryWidget.HandleButtonUnhovered //  // @ game+0xe1c6e40
};

// Class TslGameMode.SKBDDifficultySelectStageListWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USKBDDifficultySelectStageListWidget : UUmgBaseWidget {
	char pad_420[0x80]; // 0x420(0x80)
	struct UPanelWidget* PanelEntryList; // 0x4a0(0x08)
	struct TArray<struct USKBDDifficultySelectStageListEntryWidget*> ListEntries; // 0x4a8(0x10)
	char pad_4B8[0x18]; // 0x4b8(0x18)
};

// Class TslGameMode.SKBDDifficultySelectTimerWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct USKBDDifficultySelectTimerWidget : UUmgBaseWidget {
	struct UTextBlock* TextMinute; // 0x420(0x08)
	struct UTextBlock* TextSecond; // 0x428(0x08)
};

// Class TslGameMode.SKBDDifficultySelectWidget
// Size: 0x5a0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct USKBDDifficultySelectWidget : UBlockInputUserWidget {
	struct FMulticastDelegate OnSKBDDifficultySelectStageClick; // 0x470(0x10)
	struct USKBDDifficultySelectStageListWidget* WBPStageList; // 0x480(0x08)
	struct UPanelWidget* PanelRewardList; // 0x488(0x08)
	struct USKBDDifficultySelectTimerWidget* WBPTimer; // 0x490(0x08)
	struct UTextBlock* TextReward; // 0x498(0x08)
	struct FSKBDDifficultySelectWidgetData WidgetData; // 0x4a0(0x68)
	char pad_508[0x98]; // 0x508(0x98)

	void SetRewardItemDatas(); // Function TslGameMode.SKBDDifficultySelectWidget.SetRewardItemDatas //  // @ game+0xe1dbad8
	void OnPressedConsolMoveLeft(); // Function TslGameMode.SKBDDifficultySelectWidget.OnPressedConsolMoveLeft //  // @ game+0xe1d0f7c
	void OnPressedConsolMoveRight(); // Function TslGameMode.SKBDDifficultySelectWidget.OnPressedConsolMoveRight //  // @ game+0xe1d0fa4
	void SetStageEntryDatas(); // Function TslGameMode.SKBDDifficultySelectWidget.SetStageEntryDatas //  // @ game+0xe1dbb7c
	void SetRemainTime(); // Function TslGameMode.SKBDDifficultySelectWidget.SetRemainTime //  // @ game+0xe1db8c4
	void OnPressedConsolA(); // Function TslGameMode.SKBDDifficultySelectWidget.OnPressedConsolA //  // @ game+0xe1d0f24
	void CloseWidget(); // Function TslGameMode.SKBDDifficultySelectWidget.CloseWidget //  // @ game+0xe1c4748
};

// Class TslGameMode.SKBDDifficultyVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ASKBDDifficultyVolume : AVolume {
	int32 Phase; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
};

// Class TslGameMode.SKBDGameRulesGuideWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct USKBDGameRulesGuideWidget : UUmgBaseWidget {
	struct USKBDDifficultySelectTimerWidget* DifficultySelectTimer; // 0x420(0x08)
	struct USKBDDifficultySelectTimerWidget* HUDTimer; // 0x428(0x08)
	struct UWidgetSwitcher* SwitcherTimer; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)

	void SetTime(); // Function TslGameMode.SKBDGameRulesGuideWidget.SetTime //  // @ game+0xe1dbc20
	void CloseWidget(); // Function TslGameMode.SKBDGameRulesGuideWidget.CloseWidget //  // @ game+0xe1c475c
	void SetGameState(); // Function TslGameMode.SKBDGameRulesGuideWidget.SetGameState //  // @ game+0xe1dad60
};

// Class TslGameMode.*46051e33b2
// Size: 0x300 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*46051e33b2 : U*606d3b4d41 {
	float *83e4928f98; // 0x238(0x04) rep=OnRep_BossGroggyGauge
	float *d1b639b3f6; // 0x23c(0x04) rep=OnRep_BossHealthGauge
	struct FStringAssetReference RawRewardDataTable; // 0x240(0x10)
	bool *2211aed1c9; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct FName> *fb8b9ae6d4; // 0x258(0x10)
	char pad_268[0x10]; // 0x268(0x10)
	struct UDataTable* LoadedRewardDataTable; // 0x278(0x08)
	enum class ETslSKBDDifficulty *6482813a40; // 0x280(0x01) rep=OnRep_SelectDifficulty
	char pad_281[0x7]; // 0x281(0x07)
	struct F*3fe596147f *3fe596147f; // 0x288(0x10) rep=OnRep_BossInfo
	char pad_298[0x50]; // 0x298(0x50)
	struct FName *4336329836; // 0x2e8(0x08)
	float ElapsedTime; // 0x2f0(0x04)
	char pad_2F4[0xc]; // 0x2f4(0x0c)

	void OnRep_BossGroggyGauge(); // Function TslGameMode.*46051e33b2.OnRep_BossGroggyGauge //  // @ game+0xe1d1b24
	void OnRep_SelectDifficulty(); // Function TslGameMode.*46051e33b2.OnRep_SelectDifficulty //  // @ game+0x1053c04
	void *ee5db7f40f(); // Function TslGameMode.*46051e33b2.*ee5db7f40f //  // @ game+0xe1cb690
	void OnRep_BossHealthGauge(); // Function TslGameMode.*46051e33b2.OnRep_BossHealthGauge //  // @ game+0xe1d1b38
	void OnRep_BossInfo(); // Function TslGameMode.*46051e33b2.OnRep_BossInfo //  // @ game+0xe1d1b4c
};

// Class TslGameMode.SKBDHUDWidget
// Size: 0x550 (Inherited: 0x440)  [layout: KHOP]
struct USKBDHUDWidget : UTslEventDrivenBaseWidget {
	struct TMap<enum class ETslSKBDDifficulty, struct FText> TextMapDifficulty; // 0x440(0x50)
	struct TMap<int32, struct UTexture2D*> ImageMapBoss; // 0x490(0x50)
	struct USKBDBossGaugeWidget* WidgetBossGauge; // 0x4e0(0x08)
	struct UTextBlock* TextBlockDifficulty; // 0x4e8(0x08)
	struct UTutorialMissionListWidget* TutorialMissionListWidget; // 0x4f0(0x08)
	struct UWidgetSwitcher* KeyHint_Switcher; // 0x4f8(0x08)
	struct TArray<struct FText> MissionTextArray; // 0x500(0x10)
	struct USKBDBuffListWidget* BuffListWidget; // 0x510(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x518(0x08)
	struct UClass* MonsterHeadHPHelperClass; // 0x520(0x08)
	struct U*6db7134f63* MonsterHeadHPHelper; // 0x528(0x08)
	char pad_530[0x18]; // 0x530(0x18)
	struct UCanvasPanel* HeadWidgetManagerCanvasPanel; // 0x548(0x08)

	void SetGroggyGauge(); // Function TslGameMode.SKBDHUDWidget.SetGroggyGauge //  // @ game+0xe1dae58
	void OnReset(); // Function TslGameMode.SKBDHUDWidget.OnReset //  // @ game+0xe1d308c
	void SetElapsedTimer(); // Function TslGameMode.SKBDHUDWidget.SetElapsedTimer //  // @ game+0xe1dad4c
	void SetGroggy(); // Function TslGameMode.SKBDHUDWidget.SetGroggy //  // @ game+0xe1daddc
	void OnChangeMissionCount(); // Function TslGameMode.SKBDHUDWidget.OnChangeMissionCount //  // @ game+0xe1cb668
	void ExecuteAOESkill(); // Function TslGameMode.SKBDHUDWidget.ExecuteAOESkill //  // @ game+0xe1c4e84
	void FinishBattle(); // Function TslGameMode.SKBDHUDWidget.FinishBattle //  // @ game+0xe1c540c
	void OnSKBDModeBossAttacked(); // Function TslGameMode.SKBDHUDWidget.OnSKBDModeBossAttacked //  // @ game+0xe1d33b4
	void SetInvincible(); // Function TslGameMode.SKBDHUDWidget.SetInvincible //  // @ game+0xe1db848
	void ClearBuffIcons(); // Function TslGameMode.SKBDHUDWidget.ClearBuffIcons //  // @ game+0xe1c0164
	void SetDifficulty(); // Function TslGameMode.SKBDHUDWidget.SetDifficulty //  // @ game+0xe1dacd4
	void SetHPGauge(); // Function TslGameMode.SKBDHUDWidget.SetHPGauge //  // @ game+0xe1d33b4
	void OnSKBDModeMonsterAttacked(); // Function TslGameMode.SKBDHUDWidget.OnSKBDModeMonsterAttacked //  // @ game+0xe1d3d28
	void InitBossGauge(); // Function TslGameMode.SKBDHUDWidget.InitBossGauge //  // @ game+0xe1c98c8
	void StartBattle(); // Function TslGameMode.SKBDHUDWidget.StartBattle //  // @ game+0xe1dca18
	void SetBossImage(); // Function TslGameMode.SKBDHUDWidget.SetBossImage //  // @ game+0xe1dac5c
	void ShowBossGauge(); // Function TslGameMode.SKBDHUDWidget.ShowBossGauge //  // @ game+0xe1dbc34
	void AddBuff(); // Function TslGameMode.SKBDHUDWidget.AddBuff //  // @ game+0xe1bde30
	void PrepareAOESkill(); // Function TslGameMode.SKBDHUDWidget.PrepareAOESkill //  // @ game+0xe1d7bb0
};

// Class TslGameMode.SKBDLaserDamageFieldContainer
// Size: 0x548 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASKBDLaserDamageFieldContainer : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct UClass* *a631845b24; // 0x408(0x08)
	struct UClass* *5dd427e7fc; // 0x410(0x08)
	float *12b32b7687; // 0x418(0x04)
	float *11c5ee5b9b; // 0x41c(0x04)
	float *97d11c0061; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UParticleSystem* *5120f2830f; // 0x428(0x08)
	struct UParticleSystem* *6d7be92b20; // 0x430(0x08)
	struct UParticleSystem* *e428fece7b; // 0x438(0x08)
	struct UAkComponent* AkComponent; // 0x440(0x08)
	struct UAkAudioEvent* *b87904e6ea; // 0x448(0x08)
	struct UAkAudioEvent* *a213410aa1; // 0x450(0x08)
	float *1a8fa98403; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct F*73c41249d9 *ad8a738c5f; // 0x460(0xc8)
	float *be0b40370c; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct U*bcabd1d9a2* SimpleCollisionReceiver; // 0x530(0x08)
	struct U*be269ad3ae* *f47003bd05; // 0x538(0x08)
	char pad_540[0x8]; // 0x540(0x08)

	void *a80a9a8a51(); // Function TslGameMode.SKBDLaserDamageFieldContainer.*a80a9a8a51 //  // @ game+0xe1cc00c
};

// Class TslGameMode.SKBDLaserEffectActor
// Size: 0x4a8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASKBDLaserEffectActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct UAkComponent* AkComponent; // 0x408(0x08)
	struct UAkAudioEvent* *36e202fca0; // 0x410(0x08)
	struct UAkAudioEvent* *1486501756; // 0x418(0x08)
	struct FRotator *3e4d637006; // 0x420(0x0c)
	struct FRotator *781db67a96; // 0x42c(0x0c)
	struct USkeletalMeshComponent* MeshComponent; // 0x438(0x08)
	struct TMap<struct FName, struct F*460a935ebb> *a2a065b8e3; // 0x440(0x50)
	struct U*be269ad3ae* *f47003bd05; // 0x490(0x08)
	char pad_498[0x10]; // 0x498(0x10)
};

// Class TslGameMode.SKBDLaserGuideEffectActor
// Size: 0x5b0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASKBDLaserGuideEffectActor : AActor {
	struct TMap<struct FName, struct F*4582e93ec5> *e5188b0427; // 0x400(0x50)
	char pad_450[0x160]; // 0x450(0x160)
};

// Class TslGameMode.SKBDLaserBurnEffectActor
// Size: 0x5d8 (Inherited: 0x5b0)  [layout: LECH - offset chi la uoc luong]
struct ASKBDLaserBurnEffectActor : ASKBDLaserGuideEffectActor {
	struct UMaterial* *e408ab3b5b; // 0x5b0(0x08)
	struct UMaterial* *9bfcd8b613; // 0x5b8(0x08)
	struct TArray<struct F*4582e93ec5> *1d852a87de; // 0x5c0(0x10)
	char pad_5D0[0x8]; // 0x5d0(0x08)
};

// Class TslGameMode.SKBDMatchPreparerModeFeature
// Size: 0xa0 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct USKBDMatchPreparerModeFeature : UTslMatchPreparerModeFeature {
	int32 *24b9065fbd; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)

	void *4344a59f47(); // Function TslGameMode.SKBDMatchPreparerModeFeature.*4344a59f47 //  // @ game+0x9b4fa0
	void Finalize(); // Function TslGameMode.SKBDMatchPreparerModeFeature.Finalize //  // @ game+0xdb87190
};

// Class TslGameMode.SKBDMonsterAIController
// Size: 0x570 (Inherited: 0x570)  [layout: KHOP]
struct ASKBDMonsterAIController : ADummyAIController {
};

// Class TslGameMode.*7c43771df5
// Size: 0x340 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*7c43771df5 : U*481d3a4609 {
	char pad_330[0x10]; // 0x330(0x10)

	void *5f3a526920(); // Function TslGameMode.*7c43771df5.*5f3a526920 //  // @ game+0xe1da0d4
	void *0472cf9e50(); // Function TslGameMode.*7c43771df5.*0472cf9e50 //  // @ game+0xe1cf9cc
	void *c337322a19(); // Function TslGameMode.*7c43771df5.*c337322a19 //  // @ game+0xe1d9fa0
};

// Class TslGameMode.*a43ca251f0
// Size: 0x320 (Inherited: 0x2d0)  [layout: KHOP]
struct U*a43ca251f0 : U*13a763f8f8 {
	enum class ETslSKBDDifficulty Difficulty; // 0x2c8(0x01) rep=OnRep_Difficulty
	struct TArray<enum class ETslSKBDDifficulty> *facdea36c1; // 0x2d0(0x10) rep=OnRep_ClearDifficultyHistory
	bool *66e1dc6601; // 0x2e0(0x01) rep=OnRep_ClearStage
	char pad_2E1[0x2f]; // 0x2e1(0x2f)
	struct TArray<uint32> *c1fa69b1c6; // 0x310(0x10) rep=OnRep_ControlTypeRestrictions

	void OnRep_Difficulty(); // Function TslGameMode.*a43ca251f0.OnRep_Difficulty //  // @ game+0xe1d1d7c
	void OnRep_ClearDifficultyHistory(); // Function TslGameMode.*a43ca251f0.OnRep_ClearDifficultyHistory //  // @ game+0xe1d1b90
	void OnRep_ClearStage(); // Function TslGameMode.*a43ca251f0.OnRep_ClearStage //  // @ game+0xe1d1c14
	void OnRep_ControlTypeRestrictions(); // Function TslGameMode.*a43ca251f0.OnRep_ControlTypeRestrictions //  // @ game+0xe1d1ccc
};

// Class TslGameMode.*02b2d90803
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct U*02b2d90803 : U*2124a9fa23 {
};

// Class TslGameMode.SKBDResultRewardItemWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct USKBDResultRewardItemWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* SwitcherBg; // 0x420(0x08)
	struct UImage* ImageRewardItem; // 0x428(0x08)
	struct UTextBlock* TextRewardItemCount; // 0x430(0x08)
};

// Class TslGameMode.SKBDResultWidget
// Size: 0x5e8 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct USKBDResultWidget : UBaseResultWidget {
	struct UWidgetSwitcher* SwitcherContentBg; // 0x490(0x08)
	struct UTextBlock* TextTitleDifficulty; // 0x498(0x08)
	struct UTextBlock* TextTitleResult; // 0x4a0(0x08)
	struct UTextBlock* TextDifficulty; // 0x4a8(0x08)
	struct UTextBlock* TextResult; // 0x4b0(0x08)
	struct UWidgetSwitcher* SwitcherResultInfo; // 0x4b8(0x08)
	struct UGridPanel* GridPanelClear; // 0x4c0(0x08)
	struct UTextBlock* TextClearTime; // 0x4c8(0x08)
	struct UTextBlock* TextAPPoint; // 0x4d0(0x08)
	struct UVerticalBox* VerticalBoxReward; // 0x4d8(0x08)
	struct UPanelWidget* PanelRewardList; // 0x4e0(0x08)
	struct UTextBlock* TextLobbyTimer; // 0x4e8(0x08)
	struct UTslCommonButton* ButtonLobby; // 0x4f0(0x08)
	struct UTslGamepadKeyIconWidget* WidgetKeyGuideLobby; // 0x4f8(0x08)
	struct U*7fa8406bd3* AnimAppearMotion; // 0x500(0x08)
	struct FSKBDResultWidgetData WidgetData; // 0x508(0xa8)
	char pad_5B0[0x10]; // 0x5b0(0x10)
	struct FText RemainTimeFormatText; // 0x5c0(0x18)
	char pad_5D8[0x10]; // 0x5d8(0x10)

	void SetResultData(); // Function TslGameMode.SKBDResultWidget.SetResultData //  // @ game+0xe1db950
	void OnClicked_ButtonLobby(); // Function TslGameMode.SKBDResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
	void SetRemainTime(); // Function TslGameMode.SKBDResultWidget.SetRemainTime //  // @ game+0xe1db8d8
};

// Class TslGameMode.*96525b380f
// Size: 0xd8 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*96525b380f : U*b61cdf786e {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class TslGameMode.*64c47bdafa
// Size: 0x2a0 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct U*64c47bdafa : UTslSupplyBoxSpawnModeFeature {
	float *97925677e6; // 0x290(0x04)
	char pad_294[0xc]; // 0x294(0x0c)

	void *b982fa9197(); // Function TslGameMode.*64c47bdafa.*b982fa9197 //  // @ game+0xe1d7ed0
};

// Class TslGameMode.SKBDToiletSpawner
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASKBDToiletSpawner : AActor {
	enum class ETslSKBDDifficulty Difficulty; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
};

// Class TslGameMode.*f8769b0790
// Size: 0x16f0 (Inherited: 0x16f0)  [layout: KHOP]
struct U*f8769b0790 : U*b294bd9005 {

	void *8c3797a95c(); // Function TslGameMode.*f8769b0790.*8c3797a95c //  // @ game+0xe1ca080
	void *2f0129d453(); // Function TslGameMode.*f8769b0790.*2f0129d453 //  // @ game+0xe1ca338
	void *16742a94b4(); // Function TslGameMode.*f8769b0790.*16742a94b4 //  // @ game+0xe1ca1dc
};

// Class TslGameMode.SLBAbilityTask_AddBuff
// Size: 0xc0 (Inherited: 0x88)  [layout: KHOP]
struct USLBAbilityTask_AddBuff : UAbilityTask {
	struct ATslCharacterBase* Target; // 0x88(0x08)
	struct ATslCharacterBase* Instigator; // 0x90(0x08)
	struct TArray<struct UClass*> *719ea16e6a; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct TArray<struct ATslBuff*> *16d34cf0b6; // 0xb0(0x10)
};

// Class TslGameMode.SLBAbilityTask_Dash
// Size: 0xc8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct USLBAbilityTask_Dash : UAbilityTask {
	struct TArray<struct UClass*> *eef8e89bf9; // 0x88(0x10)
	struct UClass* *068ed88521; // 0x98(0x08)
	char pad_A0[0x28]; // 0xa0(0x28)
};

// Class TslGameMode.SLBAbilityTask_OverrideVelocity
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct USLBAbilityTask_OverrideVelocity : UAbilityTask {
	struct UTslNpcCharacterMovement* CharacterMovement; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class TslGameMode.*6090fa1205
// Size: 0x270 (Inherited: 0x100)  [layout: LECH - offset chi la uoc luong]
struct U*6090fa1205 : U*86c593ae2e {
	struct UDataTable* ZombieSpawnEventDataTable; // 0xf8(0x08)
	float *b6dadf7698; // 0x100(0x04)
	float *0dad3b979f; // 0x104(0x04)
	char pad_108[0xa8]; // 0x108(0xa8)
	struct U*615dc8b7ce* *9e774c4193; // 0x1b0(0x08)
	char pad_1B8[0xb8]; // 0x1b8(0xb8)
};

// Class TslGameMode.*fcb0f2031d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*fcb0f2031d : UGameplayEffectComponent {
};

// Class TslGameMode.*09e69c25c9
// Size: 0x240 (Inherited: 0x230)  [layout: KHOP]
struct U*09e69c25c9 : U*5757366fea {
	struct FName *167636c03c; // 0x230(0x08)
	struct FName *bfbfecc250; // 0x238(0x08)
};

// Class TslGameMode.*994b61a39b
// Size: 0x98 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct U*994b61a39b : U*85555f539e {
	float BGMAttenuationTimePerZombie; // 0x60(0x04)
	float BGMAttenuationTime; // 0x64(0x04)
	char pad_68[0x30]; // 0x68(0x30)
};

// Class TslGameMode.*9ebf7ee62c
// Size: 0x5c0 (Inherited: 0x590)  [layout: LECH - offset chi la uoc luong]
struct U*9ebf7ee62c : U*881bd73d7c {
	struct F*b36dbbcf4b *b36dbbcf4b; // 0x590(0x08)
	struct UClass* *a07745e507; // 0x598(0x08)
	enum class ENpcWalkingSpeedType *035a4c4d4c; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct FGameplayTag *ad1b98b741; // 0x5a8(0x08)
	struct FGameplayTag *03f7d22d5e; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void GotoNextState(); // Function TslGameMode.*9ebf7ee62c.GotoNextState //  // @ game+0xdafe600
};

// Class TslGameMode.*b3bc05b998
// Size: 0x5c0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*b3bc05b998 : U*9ebf7ee62c {

	void OnBlindEnd(); // Function TslGameMode.*b3bc05b998.OnBlindEnd //  // @ game+0xe1ca9b4
};

// Class TslGameMode.*d4cb88a17d
// Size: 0x650 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*d4cb88a17d : U*9ebf7ee62c {
	struct TMap<enum class ERetriggerCounter, struct F*b36dbbcf4b> *3018e8207d; // 0x5c0(0x50)
	struct TArray<struct UClass*> *719ea16e6a; // 0x610(0x10)
	struct TArray<struct UClass*> *eef8e89bf9; // 0x620(0x10)
	float *f4d4f94149; // 0x630(0x04)
	float *0dc171aff5; // 0x634(0x04)
	float *ec97a46849; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct UClass* *068ed88521; // 0x640(0x08)
	enum class ERetriggerCounter *70605206ab; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
};

// Class TslGameMode.*a7aff1b6f5
// Size: 0x5c0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*a7aff1b6f5 : U*9ebf7ee62c {
};

// Class TslGameMode.*a58206ced5
// Size: 0x5c0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*a58206ced5 : U*9ebf7ee62c {
};

// Class TslGameMode.*b69ac6225c
// Size: 0x5d0 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*b69ac6225c : U*9ebf7ee62c {
	uint32 *200b187219; // 0x5c0(0x04)
	char pad_5C4[0xc]; // 0x5c4(0x0c)
};

// Class TslGameMode.*4f02430ff3
// Size: 0x5c0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*4f02430ff3 : U*9ebf7ee62c {
};

// Class TslGameMode.*0be312d825
// Size: 0x5d0 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*0be312d825 : U*9ebf7ee62c {
	char pad_5C0[0x10]; // 0x5c0(0x10)
};

// Class TslGameMode.*b0f441dae0
// Size: 0x5d0 (Inherited: 0x5d0)  [layout: KHOP]
struct U*b0f441dae0 : U*0be312d825 {
};

// Class TslGameMode.*4a7630398b
// Size: 0x5e0 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*4a7630398b : U*9ebf7ee62c {
	struct UClass* *fb7f58422d; // 0x5c0(0x08)
	struct TArray<struct F*6bd999a0fd> *cb4b14dca2; // 0x5c8(0x10)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	void MeleeAttackImpl(); // Function TslGameMode.*4a7630398b.MeleeAttackImpl //  // @ game+0xe1c9cfc
};

// Class TslGameMode.*dd8f1efcda
// Size: 0x5c0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*dd8f1efcda : U*9ebf7ee62c {
};

// Class TslGameMode.*94bf999720
// Size: 0x5e0 (Inherited: 0x5c0)  [layout: KHOP]
struct U*94bf999720 : U*9ebf7ee62c {
	float *093c92c304; // 0x5c0(0x04)
	float *3319b245cd; // 0x5c4(0x04)
	float *8e8a5bc12e; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct TArray<struct UClass*> *719ea16e6a; // 0x5d0(0x10)

	void ApplyBuffToTarget(); // Function TslGameMode.*94bf999720.ApplyBuffToTarget //  // @ game+0xdbd078c
};

// Class TslGameMode.*1beb0587c2
// Size: 0x600 (Inherited: 0x5e0)  [layout: KHOP]
struct U*1beb0587c2 : U*94bf999720 {
	int32 *8613d97297; // 0x5e0(0x04)
	float *6331eb529a; // 0x5e4(0x04)
	int32 *3b70873992; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct TArray<struct F*df1a3bcebf> *51ae53bba5; // 0x5f0(0x10)
};

// Class TslGameMode.*43cbcfe9fa
// Size: 0x640 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*43cbcfe9fa : U*9ebf7ee62c {
	struct UClass* *46066d1aff; // 0x5c0(0x08)
	struct FVector *ba174f48a7; // 0x5c8(0x0c)
	enum class EProjectileExplosionStartType *6f56e39e3f; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	float *98d1ab7437; // 0x5d8(0x04)
	float *478e7bca6d; // 0x5dc(0x04)
	struct TMap<enum class ERetriggerCounter, struct F*7b2a050a8f> *0895221593; // 0x5e0(0x50)
	enum class ERetriggerCounter *32d1b9790c; // 0x630(0x01)
	char pad_631[0xf]; // 0x631(0x0f)

	void Throw(); // Function TslGameMode.*43cbcfe9fa.Throw //  // @ game+0xe1ddcb0
};

// Class TslGameMode.*5e991582f4
// Size: 0x5d0 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct U*5e991582f4 : U*9ebf7ee62c {
	struct UClass* *57c5724e49; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)
};

// Class TslGameMode.SLBGameplayCueNotify_DashEyeLightParticle
// Size: 0x470 (Inherited: 0x460)  [layout: KHOP]
struct ASLBGameplayCueNotify_DashEyeLightParticle : AGameplayCueNotify_Actor {
	struct ATslParticle* *fd20ab7b24; // 0x460(0x08)
	struct UClass* *23eab23afd; // 0x468(0x08)
};

// Class TslGameMode.*0d7b5af916
// Size: 0x58 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct U*0d7b5af916 : UGameplayCueNotify_Static {
	struct UClass* *49f63eeb50; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class TslGameMode.*9d047543ae
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct U*9d047543ae : UGameplayCueNotify_Static {
};

// Class TslGameMode.TslSLBDataAsset
// Size: 0x58 (Inherited: 0x38)  [layout: KHOP]
struct UTslSLBDataAsset : UDataAsset {
	struct TArray<struct F*37fa64557a> DebuffIconList; // 0x38(0x10)
	struct TArray<struct UAkAudioEvent*> *3529525a21; // 0x48(0x10)
};

// Class TslGameMode.*f67be583b8
// Size: 0x430 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*f67be583b8 : U*606d3b4d41 {
	char pad_240[0x18]; // 0x240(0x18)
	struct FStringAssetReference RawRewardDataTable; // 0x258(0x10)
	struct TArray<float> *0b686e3332; // 0x268(0x10)
	struct TArray<float> *5cc48861c4; // 0x278(0x10)
	struct TArray<float> *43b9d6cb2c; // 0x288(0x10)
	struct TArray<struct FName> *14481c2bb5; // 0x298(0x10)
	struct UDataTable* LoadedRewardDataTable; // 0x2a8(0x08)
	struct UDataTable* *778f925f4e; // 0x2b0(0x08)
	struct FTslSLBStageID *7a8ce308bd; // 0x2b8(0x02) rep=OnRep_SelectStageID
	char pad_2BA[0x2]; // 0x2ba(0x02)
	enum class ETslSLBStage *abdb5b57a9; // 0x2bc(0x01) rep=OnRep_ConfirmedStage
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct TArray<struct AActor*> *5a34522f09; // 0x2c0(0x10) rep=OnRep_NotSpawnedMissionItemSpawner
	struct UTslSLBDataAsset* SLBDataAsset; // 0x2d0(0x08)
	bool *2211aed1c9; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TMap<enum class ETslSLBStage, struct FText> *da9d06df0b; // 0x2e0(0x50)
	struct TMap<enum class ETslSLBStageDifficulty, struct FText> *a82cee918c; // 0x330(0x50)
	int32 *0cba376fda; // 0x380(0x04) rep=OnRep_ChangeMissionCount
	int32 *8ec7c634ce; // 0x384(0x04) rep=OnRep_ChangeMissionCount
	int32 *d1284c4033; // 0x388(0x04) rep=OnRep_ChangeMissionCount
	int32 *b76f06d128; // 0x38c(0x04) rep=OnRep_ChangeMissionCount
	bool *38a26bcc7c; // 0x390(0x01) rep=OnRep_OpenLastGate
	char pad_391[0x3]; // 0x391(0x03)
	struct FVector *4286ce150d; // 0x394(0x0c)
	int32 *5805007411; // 0x3a0(0x04)
	int32 *e428125866; // 0x3a4(0x04) rep=OnRep_RemainMatchTime
	struct TArray<struct UItem*> *f34397f1c7; // 0x3a8(0x10)
	char pad_3B8[0x18]; // 0x3b8(0x18)
	struct FName *4336329836; // 0x3d0(0x08)
	char pad_3D8[0x58]; // 0x3d8(0x58)

	void OnCraftDataTableUpdated(); // Function TslGameMode.*f67be583b8.OnCraftDataTableUpdated //  // @ game+0xe1cc098
	void *122fa06781(); // Function TslGameMode.*f67be583b8.*122fa06781 //  // @ game+0xe1cb748
	void OnRep_SelectStageID(); // Function TslGameMode.*f67be583b8.OnRep_SelectStageID //  // @ game+0xe1d2d68
	void OnRep_ChangeMissionCount(); // Function TslGameMode.*f67be583b8.OnRep_ChangeMissionCount //  // @ game+0xe1d1b74
	void OnRep_ConfirmedStage(); // Function TslGameMode.*f67be583b8.OnRep_ConfirmedStage //  // @ game+0xe1d1c74
	void OnRep_RemainMatchTime(); // Function TslGameMode.*f67be583b8.OnRep_RemainMatchTime //  // @ game+0xe1d2ae8
	void OnRep_NotSpawnedMissionItemSpawner(); // Function TslGameMode.*f67be583b8.OnRep_NotSpawnedMissionItemSpawner //  // @ game+0xe1d2a54
	void OnRep_OpenLastGate(); // Function TslGameMode.*f67be583b8.OnRep_OpenLastGate //  // @ game+0xe1d2a68
};

// Class TslGameMode.*2c3012b463
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*2c3012b463 : U*382074a164 {
};

// Class TslGameMode.SLBMatchPreparerModeFeature
// Size: 0xa0 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct USLBMatchPreparerModeFeature : UTslMatchPreparerModeFeature {
	int32 *24b9065fbd; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)

	void *ae17497600(); // Function TslGameMode.SLBMatchPreparerModeFeature.*ae17497600 //  // @ game+0xe1c52b0
	void *4344a59f47(); // Function TslGameMode.SLBMatchPreparerModeFeature.*4344a59f47 //  // @ game+0x9b4fa0
};

// Class TslGameMode.*cc27b2832d
// Size: 0x2c0 (Inherited: 0x220)  [layout: LECH - offset chi la uoc luong]
struct U*cc27b2832d : U*9663249ec3 {
	char pad_220[0x94]; // 0x220(0x94)
	float *9ba2e56088; // 0x2b4(0x04) rep=OnRep_CurrentDebuffAlertGauge
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void Initialize(); // Function TslGameMode.*cc27b2832d.Initialize //  // @ game+0x124a490
	void OnRep_CurrentDebuffAlertGauge(); // Function TslGameMode.*cc27b2832d.OnRep_CurrentDebuffAlertGauge //  // @ game+0xe1d1ce0
	void *081da550e0(); // Function TslGameMode.*cc27b2832d.*081da550e0 //  // @ game+0xdb9a31c
};

// Class TslGameMode.SLBModeFeature
// Size: 0x470 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct USLBModeFeature : UTslLogicModeFeature {
	struct UDataTable* AICharacterDropItemTable; // 0xa0(0x08)
	struct FName *4336329836; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct FStringAssetReference RawStageDataTable; // 0xc0(0x10)
	struct TArray<struct F*90928f2ef6> *d2b1c7b3d6; // 0xd0(0x10)
	int32 *b4ef564b8b; // 0xe0(0x04)
	int32 *36d03e59ed; // 0xe4(0x04)
	struct FStringAssetReference RawRewardDataTable; // 0xe8(0x10)
	struct UClass* *c3075171d0; // 0xf8(0x08)
	struct UClass* *89f33b2a82; // 0x100(0x08)
	struct TArray<struct F*241b453835> HungerGaugeDecreaseRateList; // 0x108(0x10)
	struct TArray<struct F*f271e6803f> SatietyBuffsByLevel; // 0x118(0x10)
	struct UClass* ORCAManagerClass; // 0x128(0x08)
	struct TMap<enum class ETslSLBStage, struct FString> *66708a8b80; // 0x130(0x50)
	float *ef5c8c3311; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct TMap<enum class ETslSLBStage, struct UWorld*> *16d81bc38f; // 0x188(0x50)
	struct TArray<struct UClass*> HungerDebuffList; // 0x1d8(0x10)
	struct UClass* *c143a64995; // 0x1e8(0x08)
	struct UDataTable* LoadedRawStageDataTable; // 0x1f0(0x08)
	struct UDataTable* LoadedRewardDataTable; // 0x1f8(0x08)
	struct U*f67be583b8* *f67be583b8; // 0x200(0x08)
	struct FTslSLBStageRowData *68a48d1d0c; // 0x208(0x88)
	struct ATslSLBStageVolume* *e89a6ad079; // 0x290(0x08)
	struct UTslSLBZombieSpawnManager* *b352396d5a; // 0x298(0x08)
	struct UTslSLBActivateObjectManager* *0db61282f0; // 0x2a0(0x08)
	struct U*615dc8b7ce* *9e774c4193; // 0x2a8(0x08)
	struct ATslSLBStageController* *47d1dd88b0; // 0x2b0(0x08)
	struct U*6e0f311e84* *1f495ad790; // 0x2b8(0x08)
	struct TArray<struct ATslSLBSafeArea*> *b39ea2bc65; // 0x2c0(0x10)
	struct TArray<struct ATslPlayerStart*> *1096c49d25; // 0x2d0(0x10)
	struct AORCAManager* *292dd057d4; // 0x2e0(0x08)
	struct TMap<struct FName, struct F*90928f2ef6> *75e95010e7; // 0x2e8(0x50)
	struct TMap<struct AController*, struct AActor*> *def29da902; // 0x338(0x50)
	char pad_388[0xc0]; // 0x388(0xc0)
	float *5a33479de4; // 0x448(0x04)
	float *b7196a2873; // 0x44c(0x04)
	char pad_450[0x20]; // 0x450(0x20)

	void *256819a8e9(); // Function TslGameMode.SLBModeFeature.*256819a8e9 //  // @ game+0xe1d1620
	void *5c7d8781f9(); // Function TslGameMode.SLBModeFeature.*5c7d8781f9 //  // @ game+0xe1d17c8
	void *85415079fa(); // Function TslGameMode.SLBModeFeature.*85415079fa //  // @ game+0xe1c00ac
	void OnServerItemCountChanged(); // Function TslGameMode.SLBModeFeature.OnServerItemCountChanged //  // @ game+0xe1d42e4
	void *9d89874ed9(); // Function TslGameMode.SLBModeFeature.*9d89874ed9 //  // @ game+0xe1cd840
};

// Class TslGameMode.*f0444a85ad
// Size: 0x78 (Inherited: 0x58)  [layout: KHOP]
struct U*f0444a85ad : U*c96d356cbc {
	float *bc5166be86; // 0x58(0x04)
	char pad_5C[0xc]; // 0x5c(0x0c)
	struct ATslSLBAICharacter* *d6d1264bd7; // 0x68(0x08)
	float *3319b245cd; // 0x70(0x04)
	float *8e8a5bc12e; // 0x74(0x04)
};

// Class TslGameMode.*02f33b63b6
// Size: 0x70 (Inherited: 0x70)  [layout: KHOP]
struct U*02f33b63b6 : U*382aadc668 {
};

// Class TslGameMode.TslSLBAICharacterState_SmokeThrow
// Size: 0x70 (Inherited: 0x70)  [layout: KHOP]
struct UTslSLBAICharacterState_SmokeThrow : U*02f33b63b6 {
};

// Class TslGameMode.*48992a7453
// Size: 0x60 (Inherited: 0x58)  [layout: KHOP]
struct U*48992a7453 : U*c96d356cbc {
	struct UClass* *57c5724e49; // 0x58(0x08)
};

// Class TslGameMode.*34a7fa47c6
// Size: 0x4f0 (Inherited: 0x4d0)  [layout: KHOP]
struct U*34a7fa47c6 : UPathFollowingComponent {
	char pad_4D0[0x18]; // 0x4d0(0x18)
	struct ATslSLBAIController* *8eeb429e61; // 0x4e8(0x08)

	void *45623f7681(); // Function TslGameMode.*34a7fa47c6.*45623f7681 //  // @ game+0xe1d7d0c
};

// Class TslGameMode.SLBPlayerControllerComponent
// Size: 0x420 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct USLBPlayerControllerComponent : U*481d3a4609 {
	struct UClass* *2c153e8850; // 0x330(0x08)
	struct UClass* *c1cb1b1b5d; // 0x338(0x08)
	struct FVector *b1b6f75754; // 0x340(0x0c)
	bool *80abaa74c4; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	struct ATslPostProcessEffect* *968561832f; // 0x350(0x08)
	struct USpotLightComponent* *f5e91c9e1f; // 0x358(0x08)
	struct FLinearColor *8cd6090197; // 0x360(0x10)
	struct UClass* SLBLightControllerComp; // 0x370(0x08)
	struct UClass* *6d8099d9c2; // 0x378(0x08)
	char pad_380[0x30]; // 0x380(0x30)
	struct UAkAudioEvent* *3758d785ac; // 0x3b0(0x08)
	struct UAkAudioEvent* *f24d449a43; // 0x3b8(0x08)
	float *82877ab9f9; // 0x3c0(0x04)
	float *f6a0d9bd70; // 0x3c4(0x04)
	char pad_3C8[0x18]; // 0x3c8(0x18)
	struct ATslSLBStageVolume* *2cd211ce09; // 0x3e0(0x08)
	char pad_3E8[0x38]; // 0x3e8(0x38)

	void *fc714db897(); // Function TslGameMode.SLBPlayerControllerComponent.*fc714db897 //  // @ game+0xe1cc304
	void *e863140df0(); // Function TslGameMode.SLBPlayerControllerComponent.*e863140df0 //  // @ game+0xe1cd818
	void *0472cf9e50(); // Function TslGameMode.SLBPlayerControllerComponent.*0472cf9e50 //  // @ game+0xe1cfa4c
	void *1fa46f2053(); // Function TslGameMode.SLBPlayerControllerComponent.*1fa46f2053 //  // @ game+0xe1da16c
	void *eb6e946a73(); // Function TslGameMode.SLBPlayerControllerComponent.*eb6e946a73 //  // @ game+0xe1c382c
	void OnViewTargetClearStage(); // Function TslGameMode.SLBPlayerControllerComponent.OnViewTargetClearStage //  // @ game+0xe1d7774
	void *564a8c5f16(); // Function TslGameMode.SLBPlayerControllerComponent.*564a8c5f16 //  // @ game+0xe1d95f0
	void *e8b7471170(); // Function TslGameMode.SLBPlayerControllerComponent.*e8b7471170 //  // @ game+0xe1da208
	void *cf157d513c(); // Function TslGameMode.SLBPlayerControllerComponent.*cf157d513c //  // @ game+0xe1c2d38
	void OnSLBInteractionState(); // Function TslGameMode.SLBPlayerControllerComponent.OnSLBInteractionState //  // @ game+0xe1d3e20
	void *8a62fc2c75(); // Function TslGameMode.SLBPlayerControllerComponent.*8a62fc2c75 //  // @ game+0xe1d9554
	void *c3aa50a0fd(); // Function TslGameMode.SLBPlayerControllerComponent.*c3aa50a0fd //  // @ game+0xe1c22e0
	void *5acb8a4dbd(); // Function TslGameMode.SLBPlayerControllerComponent.*5acb8a4dbd //  // @ game+0xe1da2a4
	void *a6ce87b8fe(); // Function TslGameMode.SLBPlayerControllerComponent.*a6ce87b8fe //  // @ game+0xe1d56d4
	void *c337322a19(); // Function TslGameMode.SLBPlayerControllerComponent.*c337322a19 //  // @ game+0xe1da038
	void *13e441e481(); // Function TslGameMode.SLBPlayerControllerComponent.*13e441e481 //  // @ game+0xe1d4a5c
};

// Class TslGameMode.TslSLBBuff
// Size: 0x4f0 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBBuff : ATslBuff {
	char pad_4E8[0x4]; // 0x4e8(0x04)
	bool *77f88b7ffd; // 0x4ec(0x01)
	bool *053d86e8c0; // 0x4ed(0x01)
	char pad_4EE[0x2]; // 0x4ee(0x02)
};

// Class TslGameMode.*f459676184
// Size: 0x450 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*f459676184 : U*13a763f8f8 {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct F*b9b84ad55c *f91a24b36b; // 0x2d8(0x08) rep=OnRep_SLBScorePlayer
	char pad_2E0[0x10]; // 0x2e0(0x10)
	bool *72d981433d; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32 *c94d73cc28; // 0x2f4(0x04)
	struct TArray<struct FSLBVaultItem> RewardItems; // 0x2f8(0x10)
	bool *66e1dc6601; // 0x308(0x01) rep=OnRep_ClearStage
	struct FTslSLBStageID *deb8a799e0; // 0x309(0x02) rep=OnRep_VotedStageID
	char pad_30B[0x5]; // 0x30b(0x05)
	struct TArray<struct F*bdb39182c9> *5d04786965; // 0x310(0x10) rep=OnRep_SLBDebuffList
	struct F*bdfbaab468 *7a27bbeb02; // 0x320(0x20) rep=OnRep_SLBInteractionState
	float *54a732f4c6; // 0x340(0x04)
	float *3195070036; // 0x344(0x04)
	struct TArray<struct FTslSLBStageID> *4ef1fa0a79; // 0x348(0x10) rep=OnRep_BestClearStageDifficulty
	struct UAnimMontage* *5069e72d62; // 0x358(0x08)
	bool *100413ba7a; // 0x360(0x01) rep=OnRep_IsKidnaped
	char pad_361[0x7]; // 0x361(0x07)
	struct TArray<int32> *9819044e5e; // 0x368(0x10) rep=OnRep_ShowTransferItems
	char pad_378[0x50]; // 0x378(0x50)
	struct TArray<struct UItem*> *267dd045a6; // 0x3c8(0x10)
	struct TArray<struct UItem*> *267ceea45c; // 0x3d8(0x10)
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct ATslCharacter* *3959d52cbb; // 0x3f8(0x08)
	char pad_400[0x50]; // 0x400(0x50)

	void OnRep_VotedStageID(); // Function TslGameMode.*f459676184.OnRep_VotedStageID //  // @ game+0xe1d2f70
	void OnRep_ShowTransferItems(); // Function TslGameMode.*f459676184.OnRep_ShowTransferItems //  // @ game+0xe1d2d7c
	void OnRep_BestClearStageDifficulty(); // Function TslGameMode.*f459676184.OnRep_BestClearStageDifficulty //  // @ game+0xe1d1aa0
	void OnRep_SLBDebuffList(); // Function TslGameMode.*f459676184.OnRep_SLBDebuffList //  // @ game+0xe1d2be4
	void OnRep_SLBInteractionState(); // Function TslGameMode.*f459676184.OnRep_SLBInteractionState //  // @ game+0xe1d2c68
	void OnRep_IsKidnaped(); // Function TslGameMode.*f459676184.OnRep_IsKidnaped //  // @ game+0xe1d1f84
	void OnRep_ClearStage(); // Function TslGameMode.*f459676184.OnRep_ClearStage //  // @ game+0xe1d1c60
	void OnRep_SLBScorePlayer(); // Function TslGameMode.*f459676184.OnRep_SLBScorePlayer //  // @ game+0xe1d2c94
};

// Class TslGameMode.SLBRespawnModeFeature
// Size: 0x128 (Inherited: 0xf8)  [layout: KHOP]
struct USLBRespawnModeFeature : U*2124a9fa23 {
	int32 *84921989f7; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FName *9b7abce32f; // 0x100(0x08)
	float *e1771d11af; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FText *e59aac94c3; // 0x110(0x18)
};

// Class TslGameMode.SLBTableItemSpawnModeFeature
// Size: 0x9930 (Inherited: 0x9910)  [layout: LECH - offset chi la uoc luong]
struct USLBTableItemSpawnModeFeature : UTslTableItemSpawnModeFeature {
	char pad_9910[0x20]; // 0x9910(0x20)
};

// Class TslGameMode.SmokeModActor
// Size: 0x458 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASmokeModActor : AActor {
	struct UClass* *133777a2f8; // 0x400(0x08)
	struct ATslSmokePropagation* *17d6ace0e7; // 0x408(0x08)
	char pad_410[0x48]; // 0x410(0x48)
};

// Class TslGameMode.TslFBRBuff
// Size: 0x510 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRBuff : ATslCooltimeBuff {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	float *23680ad5b7; // 0x4f8(0x04)
	struct FFloatRange *43b841afde; // 0x4fc(0x10)
	enum class EBuffPropertyType PropertyType; // 0x50c(0x01)
	bool *f2cbae1d58; // 0x50d(0x01)
	char pad_50E[0x2]; // 0x50e(0x02)
};

// Class TslGameMode.*9ccd39def8
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*9ccd39def8 : U*a4eb022b27 {
	struct ATslCharacter* Character; // 0x30(0x08)
	struct TArray<struct F*bcfee0378a> *aee343a10f; // 0x38(0x10)
	struct TArray<struct F*bcfee0378a> *c38f32e869; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class TslGameMode.TslFBRStealthBuff
// Size: 0x550 (Inherited: 0x510)  [layout: KHOP]
struct ATslFBRStealthBuff : ATslFBRBuff {
	struct FName *24b490dfdc; // 0x510(0x08)
	float *f5f4ad8763; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct F*bcfee0378a> *1f3bac2bad; // 0x520(0x10)
	struct TArray<struct F*bcfee0378a> *23853c157b; // 0x530(0x10)
	struct TArray<struct F*bcfee0378a> *bcac27f085; // 0x540(0x10)
};

// Class TslGameMode.StopwatchModActor
// Size: 0x460 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AStopwatchModActor : AActor {
	struct FText DeviceName; // 0x400(0x18)
	struct FStopwatchModData *45edfde530; // 0x418(0x14)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UModStopwatchWidget* *7b6faf8cd0; // 0x430(0x08)
	char pad_438[0x28]; // 0x438(0x28)

	void *4f85a7edfa(); // Function TslGameMode.StopwatchModActor.*4f85a7edfa //  // @ game+0x2f318c
	void *d4200e2bfe(); // Function TslGameMode.StopwatchModActor.*d4200e2bfe //  // @ game+0xdae4228
	void *c63df3e4f8(); // Function TslGameMode.StopwatchModActor.*c63df3e4f8 //  // @ game+0xdac1ed4
	void *135bc82525(); // Function TslGameMode.StopwatchModActor.*135bc82525 //  // @ game+0xdb35e14
	void *2448699d0f(); // Function TslGameMode.StopwatchModActor.*2448699d0f //  // @ game+0xdb35418
};

// Class TslGameMode.*cb4c3a307a
// Size: 0x250 (Inherited: 0x230)  [layout: LECH - offset chi la uoc luong]
struct U*cb4c3a307a : U*5757366fea {
	struct FName *90bc109c8c; // 0x230(0x08)
	struct FName *7a41c3f64e; // 0x238(0x08)
	char pad_240[0x10]; // 0x240(0x10)
};

// Class TslGameMode.TDMBlueZoneCreateArea
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct ATDMBlueZoneCreateArea : ATslBlueZoneCreateArea {
};

// Class TslGameMode.TDMModeFeature
// Size: 0x2b0 (Inherited: 0xa0)  [layout: KHOP]
struct UTDMModeFeature : UTslLogicModeFeature {
	char pad_A0[0x38]; // 0xa0(0x38)
	struct UClass* *3aa2633dbb; // 0xd8(0x20)
	struct UTDMBoostGaugeSystem* *d192e0483b; // 0xf8(0x08)
	struct TArray<struct ATslBlueZoneCreateArea*> *7ea831862e; // 0x100(0x10)
	SetProperty *746846a4a1; // 0x110(0x50)
	struct TMap<struct AController*, struct AActor*> *da6f0d1a8c; // 0x160(0x50)
	struct UClass* DropItemFxClass; // 0x1b0(0x08)
	int32 GoalScore; // 0x1b8(0x04)
	bool bCanHaveNegativeScore; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float PointDBNO; // 0x1c0(0x04)
	float PointKill; // 0x1c4(0x04)
	float PointTeamDBNO; // 0x1c8(0x04)
	float PointTeamKill; // 0x1cc(0x04)
	float PointRevive; // 0x1d0(0x04)
	float PointAssist; // 0x1d4(0x04)
	float PointDeath; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UCurveFloat* BonusKillPointRatioCurve; // 0x1e0(0x08)
	float PersonalPoint_Kill; // 0x1e8(0x04)
	float PersonalPoint_ChainKill; // 0x1ec(0x04)
	float PersonalPoint_Death; // 0x1f0(0x04)
	float PersonalPoint_Assist; // 0x1f4(0x04)
	float PersonalPoint_RoundWin; // 0x1f8(0x04)
	float PersonalPoint_RoundLoss; // 0x1fc(0x04)
	float PersonalPoint_MatchWin; // 0x200(0x04)
	float PersonalPoint_MatchLoss; // 0x204(0x04)
	bool bTeamElimination; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float RespawnOffTimeLeftRatio; // 0x20c(0x04)
	float DBNOEnabledAltitudeInCentiMeter; // 0x210(0x04)
	bool bUseTeamXRay; // 0x214(0x01)
	enum class ERespawnType RespawnType; // 0x215(0x01)
	bool bUseInstantRespawn; // 0x216(0x01)
	bool *1c6ba914aa; // 0x217(0x01)
	struct FString BattleAreaType; // 0x218(0x10)
	int32 MinTeamPlayerCount; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TMap<int32, struct ATslPlayerStart*> *40e8c56011; // 0x230(0x50)
	char pad_280[0x28]; // 0x280(0x28)
	struct U*910ee0f41d* *9a06a4f9bd; // 0x2a8(0x08)
};

// Class TslGameMode.TDMBoostGaugeSystem
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UTDMBoostGaugeSystem : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float *f53eecf238; // 0x38(0x04)
	float *572f567e99; // 0x3c(0x04)
	float *1e33715bb0; // 0x40(0x04)
	float *95df7a164a; // 0x44(0x04)
	float *0cd891301d; // 0x48(0x04)
	float *6aea106f06; // 0x4c(0x04)
};

// Class TslGameMode.*00cbc77985
// Size: 0x138 (Inherited: 0x110)  [layout: KHOP]
struct U*00cbc77985 : UTslCarePackageModeFeature {
	float *8e2abff1f2; // 0x110(0x04)
	char bUseScoreOfEachTeamForCarePackage : 1; // 0x114(0x01)
	char bUseScoreOfAllTeamsForCarePackage : 1; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct TArray<float> *af25465e01; // 0x118(0x10)
	struct TArray<float> *51a0ce0444; // 0x128(0x10)
};

// Class TslGameMode.TDMCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UTDMCheatManager : UTslCheatManager {

	void SetChangeStartingPoint(); // Function TslGameMode.TDMCheatManager.SetChangeStartingPoint //  // @ game+0xda977bc
	void ReadJson_TdmSpawnKits(); // Function TslGameMode.TDMCheatManager.ReadJson_TdmSpawnKits //  // @ game+0x1053c04
	void WriteJson_TdmSpawnKits(); // Function TslGameMode.TDMCheatManager.WriteJson_TdmSpawnKits //  // @ game+0x1053c04
};

// Class TslGameMode.TDMCK_CapacityWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_CapacityWidget : UUmgBaseWidget {
	struct UImage* CapacityImage; // 0x420(0x08)
};

// Class TslGameMode.TDMCK_EquipmentSlotWidget
// Size: 0x430 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTDMCK_EquipmentSlotWidget : UUmgBaseWidget {
	struct UImage* IconImage; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.TDMCK_EquipmentSlotWidget.OnAsyncLoadIconFinished //  // @ game+0xe1ca78c
};

// Class TslGameMode.TDMCK_EquipmentWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_EquipmentWidget : UUmgBaseWidget {
	struct UTDMCK_CapacityWidget* InventoryCapacityWidget; // 0x420(0x08)
	struct UTDMCK_EquipmentSlotWidget* HeadSlotWidget; // 0x428(0x08)
	struct UTDMCK_EquipmentSlotWidget* ArmorSlotWidget; // 0x430(0x08)
	struct UTDMCK_EquipmentSlotWidget* BagSlotWidget; // 0x438(0x08)
	struct UTdmSpawnKit* CachedTdmSpawnKit; // 0x440(0x08)

	void RefreshWidget(); // Function TslGameMode.TDMCK_EquipmentWidget.RefreshWidget //  // @ game+0xe1d7c90
};

// Class TslGameMode.TDMCK_MainWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_MainWidget : UUmgBaseWidget {
	struct UTDMCK_SpawnKitListWidget* SpawnKitListWidget; // 0x420(0x08)
	struct UTDMCK_WeaponListWidget* WeaponListWidget; // 0x428(0x08)
	struct UTextBlock* TdmCustomizeKitTitleText; // 0x430(0x08)
};

// Class TslGameMode.TdmSpawnKit
// Size: 0x178 (Inherited: 0x30)  [layout: KHOP]
struct UTdmSpawnKit : UObject {
	struct UTDMSpawnKitModeFeature* *341c629a20; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct TMap<struct FString, struct F*48dffc46d3> *afedc982cb; // 0x48(0x50)
	char pad_98[0x50]; // 0x98(0x50)
	struct TArray<struct FSpawnKitInfo> *d8c352120a; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct TArray<struct UTexture*> *5f35070df7; // 0x100(0x10)
	struct TArray<struct UStaticMesh*> *c45c2a5795; // 0x110(0x10)
	char pad_120[0x50]; // 0x120(0x50)
	struct UWorld* *8833e45cb1; // 0x170(0x08)
};

// Class TslGameMode.TDMCK_SpawnKitListWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_SpawnKitListWidget : UUmgBaseWidget {
	struct UTDMCK_TabWidget* ShotgunTab; // 0x420(0x08)
	struct UTDMCK_TabWidget* SmgTab; // 0x428(0x08)
	struct UTDMCK_TabWidget* ArTab; // 0x430(0x08)
	struct UTDMCK_TabWidget* DmrTab; // 0x438(0x08)
	struct UTDMCK_TabWidget* SrTab; // 0x440(0x08)
	struct UTDMCK_TabWidget* EtcTab; // 0x448(0x08)
	struct UWrapBox* ItemContainer; // 0x450(0x08)
	struct UAkAudioEvent* SelectSound; // 0x458(0x08)
	struct UAkAudioEvent* EquipSound; // 0x460(0x08)
	struct UClass* TDMCK_SpawnKitWidgetClass; // 0x468(0x08)
	int32 MaxItemWidget; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct UTDMCK_SpawnKitWidget*> SpawnKitWidgets; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)
	struct UTdmSpawnKit* CachedTdmSpawnKit; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct TArray<struct UTDMCK_SpawnKitWidget*> CurTabSpawnKitWidgets; // 0x4a0(0x10)

	void OnSlotSelect(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnSlotSelect //  // @ game+0xe1d4974
	void OnCategoryNext(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnCategoryNext //  // @ game+0xe1cac24
	void OnSlotUp(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnSlotUp //  // @ game+0xe1a13d0
	void OnSlotLeft(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnSlotLeft //  // @ game+0xe1a1394
	void OnSlotDown(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnSlotDown //  // @ game+0xe1a1380
	void OnCategoryPrev(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnCategoryPrev //  // @ game+0xe1cac38
	void RefreshWidget(); // Function TslGameMode.TDMCK_SpawnKitListWidget.RefreshWidget //  // @ game+0xe1d7ca4
	void OnSlotRight(); // Function TslGameMode.TDMCK_SpawnKitListWidget.OnSlotRight //  // @ game+0xe1a13a8
};

// Class TslGameMode.TDMCK_SpawnKitWidget
// Size: 0x4e0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTDMCK_SpawnKitWidget : UUmgBaseWidget {
	struct FSlateColor ButtonNormalColor; // 0x420(0x28)
	struct FSlateColor ButtonHoverColor; // 0x448(0x28)
	struct UWidgetSwitcher* ItemBGSwitcher; // 0x470(0x08)
	struct UImage* IconImage; // 0x478(0x08)
	struct UWidgetSwitcher* ScopeSwitcher; // 0x480(0x08)
	struct UTextBlock* ItemNameText; // 0x488(0x08)
	struct UTextBlock* AmmoName; // 0x490(0x08)
	struct UTextBlock* AmmoCountText; // 0x498(0x08)
	struct USizeBox* EquippedTagSizeBox; // 0x4a0(0x08)
	struct UAkAudioEvent* EquipSound; // 0x4a8(0x08)
	struct UAkAudioEvent* HoverSound; // 0x4b0(0x08)
	char pad_4B8[0x28]; // 0x4b8(0x28)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.TDMCK_SpawnKitWidget.OnAsyncLoadIconFinished //  // @ game+0xe1ca7a0
};

// Class TslGameMode.TDMCK_TabWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTDMCK_TabWidget : UUmgBaseWidget {
	struct FText TabText; // 0x420(0x18)
	struct UButton* Button; // 0x438(0x08)
	struct UImage* LineImage; // 0x440(0x08)
	struct UTDMCK_SpawnKitListWidget* SpawnKitListWidget; // 0x448(0x08)
	struct UTslFlowingTextWidget* TabNameFlowText; // 0x450(0x08)
	struct UAkAudioEvent* ClickSound; // 0x458(0x08)
	struct UAkAudioEvent* HoverSound; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)

	void OnButtonClicked(); // Function TslGameMode.TDMCK_TabWidget.OnButtonClicked //  // @ game+0xe1cabe8
	void OnButtonHovered(); // Function TslGameMode.TDMCK_TabWidget.OnButtonHovered //  // @ game+0xe1cabfc
};

// Class TslGameMode.TDMCK_WeaponAttachmentSlotWidget
// Size: 0x430 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTDMCK_WeaponAttachmentSlotWidget : UUmgBaseWidget {
	struct UImage* AttachmentIcon; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.TDMCK_WeaponAttachmentSlotWidget.OnAsyncLoadIconFinished //  // @ game+0xe1ca7b4
};

// Class TslGameMode.TDMCK_WeaponBodySlotWidget
// Size: 0x780 (Inherited: 0x748)  [layout: LECH - offset chi la uoc luong]
struct UTDMCK_WeaponBodySlotWidget : UTslWeaponBodySlotWidget {
	char pad_748[0x8]; // 0x748(0x08)
	struct TArray<struct FWeaponAttachmentAssetData> AttachmentDatas; // 0x750(0x10)
	struct UHorizontalBox* AmmoHorizontalBox; // 0x760(0x08)
	char pad_768[0x18]; // 0x768(0x18)

	void OnSpawnActorInSceneCaptureWorld(); // Function TslGameMode.TDMCK_WeaponBodySlotWidget.OnSpawnActorInSceneCaptureWorld //  // @ game+0xe1a1a64
};

// Class TslGameMode.TDMCK_WeaponEquipmentSlotWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_WeaponEquipmentSlotWidget : UUmgBaseWidget {
	struct UTDMCK_WeaponBodySlotWidget* WeaponBodySlotWidget; // 0x420(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Muzzle; // 0x428(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* LowerRail; // 0x430(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Magazine; // 0x438(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* UpperRail; // 0x440(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* CantedSight; // 0x448(0x08)
	struct UTDMCK_WeaponAttachmentSlotWidget* Stock; // 0x450(0x08)
	struct TMap<enum class EWeaponAttachmentSlotID, struct UTDMCK_WeaponAttachmentSlotWidget*> AttachableMap; // 0x458(0x50)
	struct UTextureRenderTarget2D* RenderTargetTexture; // 0x4a8(0x08)
};

// Class TslGameMode.TDMCK_WeaponListWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTDMCK_WeaponListWidget : UUmgBaseWidget {
	struct UTDMCK_WeaponEquipmentSlotWidget* Weapon001; // 0x420(0x08)
	struct UTDMCK_WeaponEquipmentSlotWidget* Weapon003; // 0x428(0x08)
	struct UTDMCK_WeaponEquipmentSlotWidget* Weapon004; // 0x430(0x08)

	void RefreshWidget(); // Function TslGameMode.TDMCK_WeaponListWidget.RefreshWidget //  // @ game+0xe1d7cb8
};

// Class TslGameMode.TDMCK_WeaponStudio
// Size: 0x4d0 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct ATDMCK_WeaponStudio : AWeaponStudio {
	struct TArray<struct FWeaponAttachmentAssetData> *f117d3167e; // 0x4b8(0x10)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class TslGameMode.*5cedeae552
// Size: 0x450 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*5cedeae552 : U*13a763f8f8 {
	float MyGameScoreInTeam; // 0x2c8(0x04) rep=OnRep_MyGameScoreInTeam
	struct FMulticastDelegate OnMyGainedScoreChanged; // 0x2d0(0x10)
	float NextRespawnTimeSeconds; // 0x2e0(0x04) rep=OnRep_NextRespawnTimeSeconds
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FMulticastDelegate OnRespawnTimeUpdated; // 0x2e8(0x10)
	struct FName *18fe20f37b; // 0x2f8(0x08) rep=OnRep_RespawnSpotName
	struct FMulticastDelegate OnRespawnSpotChangedAtClient; // 0x300(0x10)
	struct F*a0040220aa *a0040220aa; // 0x310(0x38) rep=OnRep_PersonalStat
	struct FTDMUserPlayData *99cb7294ff; // 0x348(0x38) rep=OnRep_UsingSpawnkitIds
	struct F*1f80c5cff0 *1f80c5cff0; // 0x380(0xc8)
	char pad_448[0x8]; // 0x448(0x08)

	void OnRep_MyGameScoreInTeam(); // Function TslGameMode.*5cedeae552.OnRep_MyGameScoreInTeam //  // @ game+0xe1d2034
	void OnRep_RespawnSpotName(); // Function TslGameMode.*5cedeae552.OnRep_RespawnSpotName //  // @ game+0xe1d2b2c
	void OnRep_PersonalStat(); // Function TslGameMode.*5cedeae552.OnRep_PersonalStat //  // @ game+0xe1d2aa4
	void OnRep_NextRespawnTimeSeconds(); // Function TslGameMode.*5cedeae552.OnRep_NextRespawnTimeSeconds //  // @ game+0xe1d2a1c
	void *f62e61d13c(); // Function TslGameMode.*5cedeae552.*f62e61d13c //  // @ game+0xe1d89d8
	void OnRep_UsingSpawnkitIds(); // Function TslGameMode.*5cedeae552.OnRep_UsingSpawnkitIds //  // @ game+0xe1d2f5c
};

// Class TslGameMode.*910ee0f41d
// Size: 0x400 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*910ee0f41d : U*606d3b4d41 {
	int32 GoalScore; // 0x23c(0x04) rep=OnRep_InitModeProperties
	bool bIsTeamElimination; // 0x240(0x01) rep=OnRep_InitModeProperties
	bool bUsingTeamXRay; // 0x241(0x01) rep=OnRep_InitModeProperties
	bool bIndividualRespawn; // 0x242(0x01) rep=OnRep_InitModeProperties
	bool bUseInstantRespawn; // 0x243(0x01) rep=OnRep_InitModeProperties
	enum class ERespawnType RespawnType; // 0x244(0x01) rep=OnRep_InitModeProperties
	char pad_245[0x3]; // 0x245(0x03)
	float PersonalPoint_Kill; // 0x248(0x04)
	float PersonalPoint_ChainKill; // 0x24c(0x04)
	float PersonalPoint_Death; // 0x250(0x04)
	float PersonalPoint_Assist; // 0x254(0x04)
	float PersonalPoint_RoundWin; // 0x258(0x04)
	float PersonalPoint_RoundLoss; // 0x25c(0x04)
	float PersonalPoint_MatchWin; // 0x260(0x04)
	float PersonalPoint_MatchLoss; // 0x264(0x04)
	struct FMulticastDelegate OnInitModePropertyReplicated; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct F*711337ebbc StartModeProperties; // 0x280(0x50)
	float LastRespawnTimeSeconds; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FMulticastDelegate OnStartModePropertyRelicated; // 0x2d8(0x10)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct TArray<float> TeamScores; // 0x2f0(0x10) rep=OnRep_TeamScores
	struct FMulticastDelegate OnScoreChanged; // 0x300(0x10)
	char pad_310[0x10]; // 0x310(0x10)
	float NextRespawnTimeSeconds; // 0x320(0x04) rep=OnRep_NextRespawnTimeSeconds
	char pad_324[0x4]; // 0x324(0x04)
	struct FMulticastDelegate OnRespawnTimeUpdated; // 0x328(0x10)
	bool bRespawnOffed; // 0x338(0x01) rep=OnRep_RespawnOffed
	char pad_339[0x17]; // 0x339(0x17)
	struct TArray<struct FString> ActivatedPlayerStartNames; // 0x350(0x10) rep=OnRep_ActivatedPlayerStartNames
	char pad_360[0x80]; // 0x360(0x80)
	struct UClass* *3102cde0d0; // 0x3e0(0x08) rep=OnRep_TDMSpawnKitModeFeatureClass
	bool *0044a7b3c9; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UTdmSpawnKit* *466d9dfe3f; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void OnRep_TeamScores(); // Function TslGameMode.*910ee0f41d.OnRep_TeamScores //  // @ game+0xe1d2e24
	void OnRep_RespawnOffed(); // Function TslGameMode.*910ee0f41d.OnRep_RespawnOffed //  // @ game+0xe1d2b10
	void OnRep_ActivatedPlayerStartNames(); // Function TslGameMode.*910ee0f41d.OnRep_ActivatedPlayerStartNames //  // @ game+0xe1d1974
	void OnRep_NextRespawnTimeSeconds(); // Function TslGameMode.*910ee0f41d.OnRep_NextRespawnTimeSeconds //  // @ game+0xe1d29e4
	void OnRep_InitModeProperties(); // Function TslGameMode.*910ee0f41d.OnRep_InitModeProperties //  // @ game+0xe1d1ee4
	void OnRep_TDMSpawnKitModeFeatureClass(); // Function TslGameMode.*910ee0f41d.OnRep_TDMSpawnKitModeFeatureClass //  // @ game+0xe1d2da4
};

// Class TslGameMode.TDMKillMessageWidget
// Size: 0x4d0 (Inherited: 0x428)  [layout: KHOP]
struct UTDMKillMessageWidget : UTslObserverKillAnimWidget {
	struct UTextBlock* TextPlayerName; // 0x428(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformImage; // 0x430(0x08)
	struct UTextBlock* TextKillingSpree; // 0x438(0x08)
	struct UTextBlock* TextKillCount; // 0x440(0x08)
	struct UTextBlock* TextKills; // 0x448(0x08)
	struct UTextBlock* TextKillCountEffect; // 0x450(0x08)
	struct UTextBlock* TextKillsEffect; // 0x458(0x08)
	struct UGridPanel* PanelKillInfo; // 0x460(0x08)
	struct UTslKillBannerAnimationWidget* KillBanner; // 0x468(0x08)
	struct U*7fa8406bd3* AnimKill; // 0x470(0x08)
	struct U*7fa8406bd3* AnimFirstKill; // 0x478(0x08)
	struct UMaterialParameterCollection* KillInfoMPC; // 0x480(0x08)
	struct FLinearColor KillingSpreeColor; // 0x488(0x10)
	struct FLinearColor DominatingColor; // 0x498(0x10)
	struct FLinearColor UnstoppableColor; // 0x4a8(0x10)
	int32 KillingSpreeFontSize; // 0x4b8(0x04)
	int32 UnstoppableFontSize; // 0x4bc(0x04)
	float KillInfoAssistPosY; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct UAkAudioEvent* ObserverTotalKillSound; // 0x4c8(0x08)

	void KillingSpreeAnimationFinish(); // Function TslGameMode.TDMKillMessageWidget.KillingSpreeAnimationFinish //  // @ game+0xe1c9cd4
};

// Class TslGameMode.TdmMatchResultWidget
// Size: 0x520 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UTdmMatchResultWidget : UBaseResultWidget {
	TScriptInterface<struct U*ea8557fa8d> LastFocusedWidget; // 0x490(0x10)
	char pad_4A0[0x30]; // 0x4a0(0x30)
	struct UTextBlock* Team01TotalScore; // 0x4d0(0x08)
	struct UTextBlock* Team02TotalScore; // 0x4d8(0x08)
	struct UTextBlock* PlayerMatchResultText; // 0x4e0(0x08)
	struct UTdmPersonalScoreTableWidget* Team01ScoreBoardWidget; // 0x4e8(0x08)
	struct UTdmPersonalScoreTableWidget* Team02ScoreBoardWidget; // 0x4f0(0x08)
	struct UTextBlock* RewardPointsTotal; // 0x4f8(0x08)
	struct UButton* ButtonLobby; // 0x500(0x08)
	struct UButton* ButtonReport; // 0x508(0x08)
	struct UHorizontalBox* RewardsHorizontalBox; // 0x510(0x08)
	float BHoldTime; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)

	void UpdateConsoleKeyGuideVisibility(); // Function TslGameMode.TdmMatchResultWidget.UpdateConsoleKeyGuideVisibility //  // @ game+0x43bab4
	void OnClicked_ButtonLobby(); // Function TslGameMode.TdmMatchResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
	void OnShowFocusedGamerCard(); // Function TslGameMode.TdmMatchResultWidget.OnShowFocusedGamerCard //  // @ game+0xdbe3894
	void HandleGamepadLeftOfChild(); // Function TslGameMode.TdmMatchResultWidget.HandleGamepadLeftOfChild //  // @ game+0xe1c714c
	void HandleGamepadRightOfChild(); // Function TslGameMode.TdmMatchResultWidget.HandleGamepadRightOfChild //  // @ game+0xe1c7234
	void OnBPressed(); // Function TslGameMode.TdmMatchResultWidget.OnBPressed //  // @ game+0xe1ca928
	void OnClicked_ButtonReport(); // Function TslGameMode.TdmMatchResultWidget.OnClicked_ButtonReport //  // @ game+0xe199ccc
	void OnBReleased(); // Function TslGameMode.TdmMatchResultWidget.OnBReleased //  // @ game+0xe1ca96c
	void OnReport(); // Function TslGameMode.TdmMatchResultWidget.OnReport //  // @ game+0xe1d2f84
	void HandleGamepadUpOfChild(); // Function TslGameMode.TdmMatchResultWidget.HandleGamepadUpOfChild //  // @ game+0xe195294
	void HandleGamepadDownOfChild(); // Function TslGameMode.TdmMatchResultWidget.HandleGamepadDownOfChild //  // @ game+0xdbd064c
	void HandleFocusReceivedOfChild(); // Function TslGameMode.TdmMatchResultWidget.HandleFocusReceivedOfChild //  // @ game+0xe1c7090
	void UpdateData_internal(); // Function TslGameMode.TdmMatchResultWidget.UpdateData_internal //  // @ game+0xe1dde18
};

// Class TslGameMode.TDMNewWorldMapWidget
// Size: 0x6c0 (Inherited: 0x608)  [layout: LECH - offset chi la uoc luong]
struct UTDMNewWorldMapWidget : UTslNewWorldMapWidget {
	struct UVerticalBox* ListScoreBoard; // 0x608(0x08)
	float DefaultZoomRadius; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	float CanvasViewportRatio; // 0x618(0x04)
	float ZoomRadiusMarginRatio; // 0x61c(0x04)
	struct FSlateColor ButtonNormalColor; // 0x620(0x28)
	struct FSlateColor ButtonHoverColor; // 0x648(0x28)
	struct UTdmPersonalScoreBoardWidget* ScoreBoardWidget; // 0x670(0x08)
	struct UCanvasPanel* MapCanvas; // 0x678(0x08)
	struct UCanvasPanel* TdmCustomizeKitCanvas; // 0x680(0x08)
	struct UTDMCK_MainWidget* TdmCustomizeKitWidget; // 0x688(0x08)
	struct UButton* CustomizeButton; // 0x690(0x08)
	struct UButton* BackToMapButton; // 0x698(0x08)
	struct UTDMSpawnKitWidget* TDMSpawnKitWidget; // 0x6a0(0x08)
	char pad_6A8[0x18]; // 0x6a8(0x18)

	void OnClickedCustomizeButton(); // Function TslGameMode.TDMNewWorldMapWidget.OnClickedCustomizeButton //  // @ game+0xe1cba38
	void OnClickedBackToMapButton(); // Function TslGameMode.TDMNewWorldMapWidget.OnClickedBackToMapButton //  // @ game+0xe1cb968
};

// Class TslGameMode.TdmPersonalScoreBoardWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTdmPersonalScoreBoardWidget : UUmgBaseWidget {
	struct UTdmPersonalScoreTableWidget* ScoreTableLeft; // 0x420(0x08)
	struct UTdmPersonalScoreTableWidget* ScoreTableRight; // 0x428(0x08)
	struct USizeBox* SizeBox_Map; // 0x430(0x08)

	void UpdateData_internal(); // Function TslGameMode.TdmPersonalScoreBoardWidget.UpdateData_internal //  // @ game+0xe1dde04
};

// Class TslGameMode.TdmPersonalScoreTableWidget
// Size: 0x4e0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTdmPersonalScoreTableWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BG; // 0x428(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Banner; // 0x430(0x08)
	struct UTextBlock* TextBlock_HomeTeamName; // 0x438(0x08)
	struct UTextBlock* TextBlock_AwayTeamName; // 0x440(0x08)
	struct UVerticalBox* VerticalBox_PersonalScoreList; // 0x448(0x08)
	struct UTextBlock* TextBlock_ListTitle_Name; // 0x450(0x08)
	struct UTextBlock* TextBlock_ListTitle_Kill; // 0x458(0x08)
	struct UTextBlock* TextBlock_ListTitle_Assist; // 0x460(0x08)
	struct UTextBlock* TextBlock_ListTitle_Death; // 0x468(0x08)
	struct UTextBlock* TextBlock_ListTitle_Score; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct TArray<struct UTdmPersonalScoreWidget*> ScoreWidgetArray; // 0x480(0x10)
	char pad_490[0x50]; // 0x490(0x50)
};

// Class TslGameMode.TdmPersonalScoreWidget
// Size: 0x600 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTdmPersonalScoreWidget : UUmgBaseWidget {
	char pad_420[0x160]; // 0x420(0x160)
	struct FLinearColor HighlightedColor; // 0x580(0x10)
	struct FLinearColor NormalColor; // 0x590(0x10)
	char pad_5A0[0x8]; // 0x5a0(0x08)
	struct U*d4d01c3d35* NaviWidgetComp; // 0x5a8(0x08)
	struct UTextBlock* TextBlock_Name; // 0x5b0(0x08)
	struct UTextBlock* TextBlock_Kill; // 0x5b8(0x08)
	struct UTextBlock* TextBlock_Assist; // 0x5c0(0x08)
	struct UTextBlock* TextBlock_Death; // 0x5c8(0x08)
	struct UTextBlock* TextBlock_Score; // 0x5d0(0x08)
	struct UBorder* TDMScoreBoardPlayerBorder; // 0x5d8(0x08)
	struct FLinearColor MyCharacterTextColor; // 0x5e0(0x10)
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)

	void UpdateDesign_Normal(); // Function TslGameMode.TdmPersonalScoreWidget.UpdateDesign_Normal //  // @ game+0xdbdbab4
	void UpdateDesign_Focused(); // Function TslGameMode.TdmPersonalScoreWidget.UpdateDesign_Focused //  // @ game+0x11fadb0
};

// Class TslGameMode.TDMPlayerControllerComponent
// Size: 0x540 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTDMPlayerControllerComponent : U*481d3a4609 {
	struct FMulticastDelegate OnMyTeamRankChangedAtClient; // 0x330(0x10)
	struct FMulticastDelegate OnMyTeamScoreChangedAtClient; // 0x340(0x10)
	struct FMulticastDelegate OnHighEnemyScoreChangedAtClient; // 0x350(0x10)
	struct TArray<struct ATslWeapon*> *9a37dc4b92; // 0x360(0x10)
	struct TArray<struct ATslWeapon*> *44e318d287; // 0x370(0x10)
	float *d84b0a4cfb; // 0x380(0x04)
	char pad_384[0x74]; // 0x384(0x74)
	struct FString *56729f2ec8; // 0x3f8(0x10)
	char pad_408[0x124]; // 0x408(0x124)
	float RespawnRequestTerm; // 0x52c(0x04)
	char pad_530[0x10]; // 0x530(0x10)

	void OnScoreChanged(); // Function TslGameMode.TDMPlayerControllerComponent.OnScoreChanged //  // @ game+0xe1d3f18
	void *845c13461f(); // Function TslGameMode.TDMPlayerControllerComponent.*845c13461f //  // @ game+0xe1d9508
	void *372d97645f(); // Function TslGameMode.TDMPlayerControllerComponent.*372d97645f //  // @ game+0xe1d898c
	void *e4f10eaf87(); // Function TslGameMode.TDMPlayerControllerComponent.*e4f10eaf87 //  // @ game+0xe1d8614
	void UpdateTeamScoreUI(); // Function TslGameMode.TDMPlayerControllerComponent.UpdateTeamScoreUI //  // @ game+0xe1ddee8
};

// Class TslGameMode.TDMRandomRespawnModeFeature
// Size: 0x138 (Inherited: 0x138)  [layout: KHOP]
struct UTDMRandomRespawnModeFeature : U*c5925ff5f9 {
};

// Class TslGameMode.TDMSpawnKitItemWidget
// Size: 0x4c0 (Inherited: 0x448)  [layout: LECH - offset chi la uoc luong]
struct UTDMSpawnKitItemWidget : UTslSpawnKitItemBaseWidget {
	struct UWidgetSwitcher* SpawnKitButtonSwitcher; // 0x448(0x08)
	struct UButton* SpawnKitButtonDefaultButton; // 0x450(0x08)
	struct UButton* SpawnKitButtonSelectButton; // 0x458(0x08)
	struct UImage* DefaultSpawnKitWeaponIcon; // 0x460(0x08)
	struct UImage* SelectSpawnKitWeaponIcon; // 0x468(0x08)
	struct UTextBlock* DefaultSpawnKitName; // 0x470(0x08)
	struct UTextBlock* SelectSpawnKitName; // 0x478(0x08)
	struct UBorder* DefaultBorder; // 0x480(0x08)
	struct FLinearColor DefaultBorderHoverColor; // 0x488(0x10)
	struct FLinearColor DefaultBorderColor; // 0x498(0x10)
	struct UAkAudioEvent* ClickSound; // 0x4a8(0x08)
	struct UAkAudioEvent* HoverSound; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void OnSelected(); // Function TslGameMode.TDMSpawnKitItemWidget.OnSelected //  // @ game+0xdbdbab4
	void OnAsyncLoadIconFinished(); // Function TslGameMode.TDMSpawnKitItemWidget.OnAsyncLoadIconFinished //  // @ game+0xe1ca7c8
	void OnButtonHovered(); // Function TslGameMode.TDMSpawnKitItemWidget.OnButtonHovered //  // @ game+0xe1cac10
};

// Class TslGameMode.TDMSpawnKitModeFeature
// Size: 0x1d8 (Inherited: 0x110)  [layout: KHOP]
struct UTDMSpawnKitModeFeature : UTslSpawnKitModeFeature {
	struct UDataTable* *54f99c8647; // 0x110(0x08)
	struct TArray<struct FString> *193b1d3a85; // 0x118(0x10)
	float *0a00c76034; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct UTdmSpawnKit* TdmSpawnKit; // 0x130(0x08)
	char pad_138[0x50]; // 0x138(0x50)
	struct TMap<struct FString, struct F*ed3cd726ad> *330e66ec81; // 0x188(0x50)
};

// Class TslGameMode.TDMSpawnKitWidget
// Size: 0x530 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTDMSpawnKitWidget : UTslSpawnKitBaseWidget {
	struct TArray<struct UTDMSpawnKitItemWidget*> ItemWidgets; // 0x478(0x10)
	struct UClass* SpawnKitItemWidgetClass; // 0x488(0x08)
	struct UHorizontalBox* SpawnKitButtonsHorizontalBox; // 0x490(0x08)
	struct USizeBox* PrimaryWeaponSizeBox_01; // 0x498(0x08)
	struct UImage* PrimaryWeaponImage_01; // 0x4a0(0x08)
	struct USizeBox* PrimaryWeaponSizeBox_02; // 0x4a8(0x08)
	struct UImage* PrimaryWeaponImage_02; // 0x4b0(0x08)
	struct USizeBox* SecondaryWeaponSizeBox; // 0x4b8(0x08)
	struct UImage* SecondaryWeaponImage; // 0x4c0(0x08)
	struct USizeBox* ThrowableWeaponSizeBox; // 0x4c8(0x08)
	struct UImage* ThrowableWeaponImage; // 0x4d0(0x08)
	struct USizeBox* MeleeWeaponSizeBox; // 0x4d8(0x08)
	struct UImage* MeleeWeaponImage; // 0x4e0(0x08)
	struct USizeBox* HelmetSizeBox; // 0x4e8(0x08)
	struct UWidgetSwitcher* HelmetSwitcher; // 0x4f0(0x08)
	struct USizeBox* VestSizeBox; // 0x4f8(0x08)
	struct UWidgetSwitcher* VestSwitcher; // 0x500(0x08)
	struct USizeBox* LeftBumperSizeBox; // 0x508(0x08)
	struct USizeBox* RightBumperSizeBox; // 0x510(0x08)
	struct UTdmSpawnKit* CachedTdmSpawnKit; // 0x518(0x08)
	struct UAkAudioEvent* SelectSound; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)

	void RefreshAllSpawnKitWidget(); // Function TslGameMode.TDMSpawnKitWidget.RefreshAllSpawnKitWidget //  // @ game+0xe1d7c54
	void ChangeIndex(); // Function TslGameMode.TDMSpawnKitWidget.ChangeIndex //  // @ game+0xe1c001c
	void OnAsyncLoadWeaponFinish(); // Function TslGameMode.TDMSpawnKitWidget.OnAsyncLoadWeaponFinish //  // @ game+0xe1ca8a0
	void OnLBPressed(); // Function TslGameMode.TDMSpawnKitWidget.OnLBPressed //  // @ game+0xe1cebc0
	void OnRBPressed(); // Function TslGameMode.TDMSpawnKitWidget.OnRBPressed //  // @ game+0xe1d1554
};

// Class TslGameMode.TDMTwoTeamScoreboardWidget
// Size: 0x538 (Inherited: 0x508)  [layout: LECH - offset chi la uoc luong]
struct UTDMTwoTeamScoreboardWidget : UTwoTeamScoreboardWidget {
	struct USizeBox* SizeboxRespawnTimer; // 0x508(0x08)
	struct UTextBlock* TextTargetScore; // 0x510(0x08)
	struct FText TargetScoreText; // 0x518(0x18)
	char pad_530[0x8]; // 0x530(0x08)

	void OnModeStarted(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnModeStarted //  // @ game+0xe1cf904
	void ShowInstantRespawnMessage(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.ShowInstantRespawnMessage //  // @ game+0xe1dbcb0
	void OnRespawnTimeUpdated(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnRespawnTimeUpdated //  // @ game+0xe1d3144
	void OnMyTeamScoreChanged(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnMyTeamScoreChanged //  // @ game+0xe1d0468
	void OnModeInitialized(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnModeInitialized //  // @ game+0xe1cf87c
	void OnMatchStarted(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnMatchStarted //  // @ game+0xe1cece0
	void OnTimeLimitUpdated(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnTimeLimitUpdated //  // @ game+0xe1d5290
	void OnResetLevel(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnResetLevel //  // @ game+0xdbd67a8
	void OnHighEnemyScoreChanged(); // Function TslGameMode.TDMTwoTeamScoreboardWidget.OnHighEnemyScoreChanged //  // @ game+0xe1ce048
};

// Class TslGameMode.TslTrainingInteractableActor
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct ATslTrainingInteractableActor : ATslInteractableActor {
};

// Class TslGameMode.TeleportPrivateTraining
// Size: 0x468 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATeleportPrivateTraining : ATslTrainingInteractableActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x408(0x08)
	struct FText *6dba367a58; // 0x410(0x18)
	struct FText *023a9cd762; // 0x428(0x18)
	struct TArray<struct ATeleportDestinationActor*> *0a85e60041; // 0x440(0x10)
	bool bIsExit; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float *b10ff50073; // 0x454(0x04)
	float MaxInteractableDistance; // 0x458(0x04)
	int32 *f170c057e6; // 0x45c(0x04)
	enum class EPrivateTrainingRoomType *e250650858; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)

	void *8c25aea5f6(); // Function TslGameMode.TeleportPrivateTraining.*8c25aea5f6 //  // @ game+0xdb743d8
	void HandleOnOneOnOneStopSearchPopup(); // Function TslGameMode.TeleportPrivateTraining.HandleOnOneOnOneStopSearchPopup //  // @ game+0xe1c7548
};

// Class TslGameMode.TeleportDestinationActor
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATeleportDestinationActor : AActor {
	float StartRadius; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
};

// Class TslGameMode.TextDisplayModActor
// Size: 0x440 (Inherited: 0x400)  [layout: KHOP]
struct ATextDisplayModActor : AActor {
	struct UWidgetComponent* PlateWidget; // 0x400(0x08)
	struct UStaticMeshComponent* PlateMesh; // 0x408(0x08)
	struct FTextDisplayModData *9504d4d9b5; // 0x410(0x30) rep=OnRep_DisplayData

	void OnRep_DisplayData(); // Function TslGameMode.TextDisplayModActor.OnRep_DisplayData //  // @ game+0xe1d1d90
};

// Class TslGameMode.TextDisplayModActorWidget
// Size: 0x490 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTextDisplayModActorWidget : UUmgBaseWidget {
	struct USizeBox* SizeBox; // 0x420(0x08)
	struct UBorder* PlateBG; // 0x428(0x08)
	struct UTextBlock* TextBlock; // 0x430(0x08)
	struct TMap<enum class ETextDisplayModFontSize, int32> FontSizeMap; // 0x438(0x50)
	int32 MaxContentLength; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
};

// Class TslGameMode.*49d25a725b
// Size: 0xc0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*49d25a725b : U*adc663050a {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TslGameMode.TimerModActor
// Size: 0x448 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATimerModActor : AActor {
	struct FText DeviceName; // 0x400(0x18)
	struct FTimerModData *f44a8b6278; // 0x418(0x18)
	struct UModTimerWidget* *b979c1f80d; // 0x430(0x08)
	char pad_438[0x10]; // 0x438(0x10)

	void *d4200e2bfe(); // Function TslGameMode.TimerModActor.*d4200e2bfe //  // @ game+0xdb39b60
	void *135bc82525(); // Function TslGameMode.TimerModActor.*135bc82525 //  // @ game+0xdac2048
	void *4f85a7edfa(); // Function TslGameMode.TimerModActor.*4f85a7edfa //  // @ game+0x100d054
};

// Class TslGameMode.TrainingCountDownWidget
// Size: 0x388 (Inherited: 0x388)  [layout: KHOP]
struct UTrainingCountDownWidget : UTslCountDownWidget {
};

// Class TslGameMode.TrainingDamageInfoWidget
// Size: 0x550 (Inherited: 0x500)  [layout: KHOP]
struct UTrainingDamageInfoWidget : UDamageInfoBaseWidget {
	struct UHorizontalBox* HeadShotHorizontalBox; // 0x500(0x08)
	float AdditionalWidgetYOffset; // 0x508(0x04)
	float PlayerInfoDistanceLimit; // 0x50c(0x04)
	struct FLinearColor HeadShotTextColor; // 0x510(0x10)
	struct FLinearColor HeadShotBackGroundTintColor; // 0x520(0x10)
	struct FLinearColor NormalHitTextColor; // 0x530(0x10)
	struct FLinearColor NormalHitBackGroundTintColor; // 0x540(0x10)
};

// Class TslGameMode.SKBDDamageInfoWidget
// Size: 0x570 (Inherited: 0x550)  [layout: KHOP]
struct USKBDDamageInfoWidget : UTrainingDamageInfoWidget {
	int32 SmallDamageSize; // 0x550(0x04)
	int32 MediumDamageSize; // 0x554(0x04)
	int32 LargeDamageSize; // 0x558(0x04)
	int32 MediumDamageThreshold; // 0x55c(0x04)
	int32 LargeDamageThreshold; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct UImage* ImageSubBg; // 0x568(0x08)
};

// Class TslGameMode.*d88c8f9dea
// Size: 0x2a0 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*d88c8f9dea : U*606d3b4d41 {
	struct FMulticastDelegate OnTimeLimitReplicated; // 0x238(0x10)
	float TimeLimitSeconds; // 0x248(0x04) rep=OnRep_TimeLimitSeconds
	struct F*e10171f270 *0c6fc6d8d7; // 0x24c(0x08)
	char pad_254[0x4]; // 0x254(0x04)
	struct UDataTable* *1610ff9df3; // 0x258(0x08) rep=OnRep_TrainingRoomSoundDataTable
	struct UClass* TargetPartsHitFeedbackManagerClass; // 0x260(0x08)
	struct ATslOneOnOneArenaRoom* *c0b1463a5b; // 0x268(0x08)
	struct FStringAssetReference *7b10ef7490; // 0x270(0x10) rep=OnRep_ArenaMessageTableRef
	struct UDataTable* *2391e40516; // 0x280(0x08)
	bool *24309b2a47; // 0x288(0x01) rep=OnRep_ArenaInProgress
	char pad_289[0x17]; // 0x289(0x17)

	void OnRep_TrainingRoomSoundDataTable(); // Function TslGameMode.*d88c8f9dea.OnRep_TrainingRoomSoundDataTable //  // @ game+0xe1d2eec
	void OnRep_TimeLimitSeconds(); // Function TslGameMode.*d88c8f9dea.OnRep_TimeLimitSeconds //  // @ game+0xe1d2ea0
	void OnRep_ArenaInProgress(); // Function TslGameMode.*d88c8f9dea.OnRep_ArenaInProgress //  // @ game+0xe1d1a78
	void OnRep_ArenaMessageTableRef(); // Function TslGameMode.*d88c8f9dea.OnRep_ArenaMessageTableRef //  // @ game+0xe1d1a8c
};

// Class TslGameMode.*d98c6e915a
// Size: 0x2a0 (Inherited: 0x2a0)  [layout: KHOP]
struct U*d98c6e915a : U*d88c8f9dea {
};

// Class TslGameMode.TrainingMatchPreparerModeFeature
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct UTrainingMatchPreparerModeFeature : UTslNormalMatchPreparerModeFeature {
};

// Class TslGameMode.TrainingModeFeature
// Size: 0xb0 (Inherited: 0xa0)  [layout: KHOP]
struct UTrainingModeFeature : UTslLogicModeFeature {
	struct UClass* PrivateTrainingRoomManagerClass; // 0xa0(0x08)
	struct UTslPrivateTrainingRoomManager* *adbfcb1e04; // 0xa8(0x08)
};

// Class TslGameMode.OneOnOneArenaModeFeature
// Size: 0x158 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UOneOnOneArenaModeFeature : UTrainingModeFeature {
	char pad_B0[0xa8]; // 0xb0(0xa8)
};

// Class TslGameMode.*f233f8b7d4
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*f233f8b7d4 : U*481d3a4609 {
	char pad_330[0x10]; // 0x330(0x10)
	struct FText *023a9cd762; // 0x340(0x18)
	char pad_358[0x8]; // 0x358(0x08)

	void *df04dbb81d(); // Function TslGameMode.*f233f8b7d4.*df04dbb81d //  // @ game+0xe1d9a78
	void *f136cb06d6(); // Function TslGameMode.*f233f8b7d4.*f136cb06d6 //  // @ game+0xe1d9cd8
	void *0b65958bb1(); // Function TslGameMode.*f233f8b7d4.*0b65958bb1 //  // @ game+0xe1d9ba8
	void *8942d881c4(); // Function TslGameMode.*f233f8b7d4.*8942d881c4 //  // @ game+0xe1c3a34
	void *d369a6cbc2(); // Function TslGameMode.*f233f8b7d4.*d369a6cbc2 //  // @ game+0xe1c3d84
	void *f46c003580(); // Function TslGameMode.*f233f8b7d4.*f46c003580 //  // @ game+0xe1d98e4
	void *be7e36e3fe(); // Function TslGameMode.*f233f8b7d4.*be7e36e3fe //  // @ game+0xe1dd228
	void *03b2c5c17f(); // Function TslGameMode.*f233f8b7d4.*03b2c5c17f //  // @ game+0xe1d9d70
	void *6b3f45b126(); // Function TslGameMode.*f233f8b7d4.*6b3f45b126 //  // @ game+0xe1d9b10
	void *57b5e2c0ea(); // Function TslGameMode.*f233f8b7d4.*57b5e2c0ea //  // @ game+0xe1d9e08
	void HandleOnExitPopupResponse(); // Function TslGameMode.*f233f8b7d4.HandleOnExitPopupResponse //  // @ game+0xe1c74c8
	void *5c4c871aaa(); // Function TslGameMode.*f233f8b7d4.*5c4c871aaa //  // @ game+0xe1c3bdc
	void *fec9e31760(); // Function TslGameMode.*f233f8b7d4.*fec9e31760 //  // @ game+0xe1d9a2c
};

// Class TslGameMode.*d405f71fb0
// Size: 0x360 (Inherited: 0x360)  [layout: KHOP]
struct U*d405f71fb0 : U*f233f8b7d4 {
};

// Class TslGameMode.TslTrainingMapIconVolume
// Size: 0x458 (Inherited: 0x438)  [layout: KHOP]
struct ATslTrainingMapIconVolume : AVolume {
	int32 *5cb212ef2e; // 0x438(0x04)
	float *2c3fce7943; // 0x43c(0x04)
	struct TArray<struct ATeleportDestinationActor*> *7a5a98d693; // 0x440(0x10)
	enum class ETslTrainingType *29009ab234; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float *b10ff50073; // 0x454(0x04)
};

// Class TslGameMode.*96fe947291
// Size: 0x980 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*96fe947291 : U*13a763f8f8 {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct F*796caef8f5 *0be63b9d95; // 0x2d8(0x10) rep=OnRep_TrainingPracticePlayerState
	struct F*2c34bbb336 *5e5b80d560; // 0x2e8(0x30)
	bool *0f38037415; // 0x318(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *0916c8dc82; // 0x319(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	char pad_31A[0x6]; // 0x31a(0x06)
	struct FString *b667b16cd5; // 0x320(0x10) rep=OnRep_UpdateTrainingRoomPlayData
	bool *88c49c07ed; // 0x330(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *535558755d; // 0x331(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *a804981a3f; // 0x332(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *be628641e3; // 0x333(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *da2a45e77c; // 0x334(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	char pad_335[0x3]; // 0x335(0x03)
	float TrainingScore; // 0x338(0x04) rep=OnRep_UpdateTrainingRoomPlayData
	float *f9c0bc3fbe; // 0x33c(0x04) rep=OnRep_UpdateTrainingRoomPlayData
	bool *3f1ff2192e; // 0x340(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *559202f5c4; // 0x341(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *f622b01930; // 0x342(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *55d2e3aff8; // 0x343(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	bool *78975cdd93; // 0x344(0x01) rep=OnRep_UpdateTrainingRoomPlayData
	char pad_345[0x3]; // 0x345(0x03)
	struct UTslPlayerTrainingComponent* TrainingComponent; // 0x348(0x08)
	struct FTrainingData *181cbdb743; // 0x350(0x150)
	struct FTrainingData *795f5481d5; // 0x4a0(0x150)
	char pad_5F0[0x354]; // 0x5f0(0x354)
	int32 *41bd4ad9b3; // 0x944(0x04)
	struct UTslOneOnOneArenaStateComponent* OneOnOneArenaComponent; // 0x948(0x08)
	char pad_950[0x30]; // 0x950(0x30)

	void OnRep_TrainingPracticePlayerState(); // Function TslGameMode.*96fe947291.OnRep_TrainingPracticePlayerState //  // @ game+0xe1d2ed8
	void *8085dec3a2(); // Function TslGameMode.*96fe947291.*8085dec3a2 //  // @ game+0xe1d88f4
	void OnRep_UpdateTrainingRoomPlayData(); // Function TslGameMode.*96fe947291.OnRep_UpdateTrainingRoomPlayData //  // @ game+0xe1d2f34
};

// Class TslGameMode.*7f5dae4c15
// Size: 0xa10 (Inherited: 0x980)  [layout: LECH - offset chi la uoc luong]
struct U*7f5dae4c15 : U*96fe947291 {
	char pad_980[0x90]; // 0x980(0x90)

	void *6b927b95c7(); // Function TslGameMode.*7f5dae4c15.*6b927b95c7 //  // @ game+0xe1c3c58
	void *fe5c0e131a(); // Function TslGameMode.*7f5dae4c15.*fe5c0e131a //  // @ game+0xe1c3c70
	void *5727ad5ffd(); // Function TslGameMode.*7f5dae4c15.*5727ad5ffd //  // @ game+0xe1d9984
	void *d137484c0d(); // Function TslGameMode.*7f5dae4c15.*d137484c0d //  // @ game+0xe1c3a1c
};

// Class TslGameMode.TrainingRoomBlockingVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ATrainingRoomBlockingVolume : AVolume {
	char pad_438[0x8]; // 0x438(0x08)
};

// Class TslGameMode.TrainingRoomInteractionButton
// Size: 0x428 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATrainingRoomInteractionButton : ATslInteractableActor {
	struct UStaticMeshComponent* *1a29928279; // 0x408(0x08)
	struct USceneComponent* ArrowComponent; // 0x410(0x08)
	struct UActorComponent* *88edb7075e; // 0x418(0x08)
	enum class ETrainingButtonActiveType *2d4b8ec16e; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)

	void *8c25aea5f6(); // Function TslGameMode.TrainingRoomInteractionButton.*8c25aea5f6 //  // @ game+0xdb743d8
};

// Class TslGameMode.TrainingRoomSpawnKit
// Size: 0x170 (Inherited: 0x110)  [layout: LECH - offset chi la uoc luong]
struct UTrainingRoomSpawnKit : UTslSpawnKitModeFeature {
	struct TMap<enum class ETrainingPracticeType, struct FName> *17cb581ae6; // 0x110(0x50)
	struct FName *ab91d6f07b; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
};

// Class TslGameMode.*e2c4f4d241
// Size: 0x120 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*e2c4f4d241 : U*adc663050a {
	struct TMap<enum class ETslTrainingType, struct F*c61932788e> *9e38b98edf; // 0xb8(0x50)
	char pad_108[0x18]; // 0x108(0x18)
};

// Class TslGameMode.TslBasePrivateTrainingRoom
// Size: 0xf8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslBasePrivateTrainingRoom : UObject {
	int32 *6aec46bc12; // 0x30(0x04)
	enum class ETrainingPracticeType PracticeType; // 0x34(0x01)
	enum class EPrivateTrainingRoomPhase *6a32ef5d9d; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct TArray<struct ATrainingRoomPracticeTarget*> *48fae4326b; // 0x38(0x10)
	struct F*2c34bbb336 *17d53b9ab9; // 0x48(0x30)
	char pad_78[0x8]; // 0x78(0x08)
	float PlayTime; // 0x80(0x04)
	float ActiveDelayTime; // 0x84(0x04)
	struct TMap<enum class EPrivateTrainingRoomPhase, float> RoomPhaseFinishDelayTime; // 0x88(0x50)
	char pad_D8[0x20]; // 0xd8(0x20)
};

// Class TslGameMode.TslAimPrivateTrainingRoom
// Size: 0x208 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct UTslAimPrivateTrainingRoom : UTslBasePrivateTrainingRoom {
	int32 StartTargetCount; // 0xf8(0x04)
	int32 MaxTargetCount; // 0xfc(0x04)
	int32 MinTargetCountWithoutDelay; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TMap<enum class EDamageReason, float> ScoreOnTargetShot; // 0x108(0x50)
	struct TMap<float, float> ScoreOnTimeBetweenNextTarget; // 0x158(0x50)
	struct TMap<bool, float> ScoreOnTargetSpawnedDistanceLevel; // 0x1a8(0x50)
	char pad_1F8[0x10]; // 0x1f8(0x10)
};

// Class TslGameMode.TslSoundPrivateTrainingRoom
// Size: 0x1a8 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct UTslSoundPrivateTrainingRoom : UTslBasePrivateTrainingRoom {
	float NextSoundPrepareDelay; // 0xf8(0x04)
	float NextSoundPrepareDelayAfterHit; // 0xfc(0x04)
	struct TArray<float> ScoreOntargetDistance; // 0x100(0x10)
	struct TMap<float, float> ScoreOnAfterSoundPlay; // 0x110(0x50)
	struct UClass* SoundProcessorClass; // 0x160(0x08)
	struct ATslTrainingRoomSoundProcessor* *c4c68cac20; // 0x168(0x08)
	char pad_170[0x38]; // 0x170(0x38)
};

// Class TslGameMode.TslBombMessageRadialWidget
// Size: 0x608 (Inherited: 0x608)  [layout: KHOP]
struct UTslBombMessageRadialWidget : UTslMessageRadialWidget {
};

// Class TslGameMode.*4e40e94996
// Size: 0x260 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*4e40e94996 : U*606d3b4d41 {
	struct TArray<int32> *d000ea0d90; // 0x238(0x10) rep=OnRep_TeamProperties
	struct TArray<struct F*2f1e1cb46b> *3195efd35c; // 0x248(0x10) rep=OnRep_AircraftDataArray
	bool *cc378a5bbe; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void OnRep_TeamProperties(); // Function TslGameMode.*4e40e94996.OnRep_TeamProperties //  // @ game+0xe1d2de0
	void OnRep_AircraftDataArray(); // Function TslGameMode.*4e40e94996.OnRep_AircraftDataArray //  // @ game+0x1275024
};

// Class TslGameMode.*2d82a0a8b5
// Size: 0x260 (Inherited: 0x260)  [layout: KHOP]
struct U*2d82a0a8b5 : U*4e40e94996 {
};

// Class TslGameMode.*a419bfb1ed
// Size: 0x260 (Inherited: 0x260)  [layout: KHOP]
struct U*a419bfb1ed : U*2d82a0a8b5 {
};

// Class TslGameMode.TslBRModeFeature
// Size: 0xe0 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct UTslBRModeFeature : UTslLogicModeFeature {
	struct UClass* *b1e8edf87b; // 0xa0(0x08)
	struct U*42cb5db743* *e1e9a12507; // 0xa8(0x08)
	struct F*23f69d53ff LootTruckCustomOption; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UClass* *5dce618843; // 0xc0(0x08)
	struct UTslIngameMissionManager* *7be8ef18c2; // 0xc8(0x08)
	struct U*873975529e* *b5f7310277; // 0xd0(0x08)
	bool *7c9a626959; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class TslGameMode.LandmarkModeFeature
// Size: 0x108 (Inherited: 0xe0)  [layout: KHOP]
struct ULandmarkModeFeature : UTslBRModeFeature {
	char pad_E0[0x20]; // 0xe0(0x20)
	struct UClass* LandmarkSignalClass; // 0x100(0x08)
};

// Class TslGameMode.TslIBRModeFeature
// Size: 0x210 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRModeFeature : UTslBRModeFeature {
	struct U*a9c28db836* *396848b5b5; // 0xe0(0x08)
	struct FString *d1d635ecd1; // 0xe8(0x10)
	int32 *9f810e573a; // 0xf8(0x04)
	float *0a9a8579c6; // 0xfc(0x04)
	struct UDataTable* IBRRandomAreaTable; // 0x100(0x08)
	struct UClass* *d37a703cbc; // 0x108(0x08)
	struct UClass* *95ef871483; // 0x110(0x08)
	struct UClass* *9184bb5a71; // 0x118(0x08)
	struct UClass* *3f84fae492; // 0x120(0x08)
	struct FVector *9904c129d9; // 0x128(0x0c)
	struct FVector *897494caf1; // 0x134(0x0c)
	struct TArray<struct FString> *4918eb170f; // 0x140(0x10)
	float *0ae0baf2ac; // 0x150(0x04)
	float *f16e4df322; // 0x154(0x04)
	char pad_158[0xb8]; // 0x158(0xb8)
};

// Class TslGameMode.*24ae7129fe
// Size: 0x340 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*24ae7129fe : U*481d3a4609 {
	char pad_330[0x10]; // 0x330(0x10)
};

// Class TslGameMode.*5185e4b599
// Size: 0x340 (Inherited: 0x340)  [layout: KHOP]
struct U*5185e4b599 : U*24ae7129fe {
};

// Class TslGameMode.*09e943f49d
// Size: 0x2f0 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*09e943f49d : U*13a763f8f8 {
	struct F*2444f7c960 *2444f7c960; // 0x2c8(0x10) rep=OnRep_DuelMatchScore
	char pad_2D8[0x18]; // 0x2d8(0x18)

	void OnRep_DuelMatchScore(); // Function TslGameMode.*09e943f49d.OnRep_DuelMatchScore //  // @ game+0xe1d1da4
};

// Class TslGameMode.TslCountCompileErrorCommandlet
// Size: 0xc8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UTslCountCompileErrorCommandlet : UCommandlet {
	char pad_88[0x40]; // 0x88(0x40)
};

// Class TslGameMode.TslCraftingBaseWidget
// Size: 0x4c0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslCraftingBaseWidget : UBlockInputUserWidget {
	struct TArray<struct UTslSLBCraftingItem*> CraftingItems; // 0x470(0x10)
	struct TArray<struct UTslSLBCraftingItem*> SortCraftingItems; // 0x480(0x10)
	struct UClass* CraftItemWidgetClass; // 0x490(0x08)
	struct UScrollBox* ScrollboxCraftingItems; // 0x498(0x08)
	struct UVerticalBox* ListCraftingItems; // 0x4a0(0x08)
	struct UTextBlock* TextWarning; // 0x4a8(0x08)
	struct UUmgBaseWidget* CraftIcon; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void OnClickedCraftingItem(); // Function TslGameMode.TslCraftingBaseWidget.OnClickedCraftingItem //  // @ game+0xe1cb9a4
	void OnPressedEscape(); // Function TslGameMode.TslCraftingBaseWidget.OnPressedEscape //  // @ game+0xe1d1010
	void OnPressedConsolMoveUp(); // Function TslGameMode.TslCraftingBaseWidget.OnPressedConsolMoveUp //  // @ game+0xe1d0fcc
	void OnPressedConsoleA(); // Function TslGameMode.TslCraftingBaseWidget.OnPressedConsoleA //  // @ game+0xdbd078c
	void UpdateWidget(); // Function TslGameMode.TslCraftingBaseWidget.UpdateWidget //  // @ game+0x6d0c20
	void OnPressedConsolMoveDown(); // Function TslGameMode.TslCraftingBaseWidget.OnPressedConsolMoveDown //  // @ game+0xe1d0f4c
};

// Class TslGameMode.TslSLBCraftingWidget
// Size: 0x528 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBCraftingWidget : UTslCraftingBaseWidget {
	struct FLinearColor ItemNameColor; // 0x4c0(0x10)
	struct TArray<struct FSLBUIIOverrideColorData> OverrideColor; // 0x4d0(0x10)
	float ConsoleTooltipDelay; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UAkAudioEvent* CraftingOpen; // 0x4e8(0x08)
	struct UAkAudioEvent* CraftingClose; // 0x4f0(0x08)
	struct UAkAudioEvent* CraftingSuccess; // 0x4f8(0x08)
	struct UBorder* BorderTooltip; // 0x500(0x08)
	struct UTslRichTextBlock* TextTooltipDesc; // 0x508(0x08)
	struct U*7fa8406bd3* AnimTooltip; // 0x510(0x08)
	char pad_518[0x10]; // 0x518(0x10)

	void OnPressedConsoleA(); // Function TslGameMode.TslSLBCraftingWidget.OnPressedConsoleA //  // @ game+0xdbd078c
	void UpdateWidget(); // Function TslGameMode.TslSLBCraftingWidget.UpdateWidget //  // @ game+0x6d0c20
	void OnCraftFinished(); // Function TslGameMode.TslSLBCraftingWidget.OnCraftFinished //  // @ game+0xe1cc10c
	void OnHoverChangedCraftingItem(); // Function TslGameMode.TslSLBCraftingWidget.OnHoverChangedCraftingItem //  // @ game+0xe1cea38
	void OnClickedCraftingItem(); // Function TslGameMode.TslSLBCraftingWidget.OnClickedCraftingItem //  // @ game+0xe1cb9a4
};

// Class TslGameMode.SKBDCraftingWidget
// Size: 0x528 (Inherited: 0x528)  [layout: KHOP]
struct USKBDCraftingWidget : UTslSLBCraftingWidget {
};

// Class TslGameMode.TslUGCCraftingWidget
// Size: 0x4d0 (Inherited: 0x4c0)  [layout: KHOP]
struct UTslUGCCraftingWidget : UTslCraftingBaseWidget {
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct ACraftingModActor* OwnerModActor; // 0x4c8(0x08)

	void OnClickedCraftingItem(); // Function TslGameMode.TslUGCCraftingWidget.OnClickedCraftingItem //  // @ game+0xe1cb9a4
	void UpdateWidget(); // Function TslGameMode.TslUGCCraftingWidget.UpdateWidget //  // @ game+0x6d0c20
	void OnCraftFinished(); // Function TslGameMode.TslUGCCraftingWidget.OnCraftFinished //  // @ game+0xe1cc1d4
	void OnPressedConsoleA(); // Function TslGameMode.TslUGCCraftingWidget.OnPressedConsoleA //  // @ game+0xdbd078c
};

// Class TslGameMode.*883aa63be7
// Size: 0x280 (Inherited: 0x280)  [layout: KHOP]
struct U*883aa63be7 : U*fe6c4900b3 {
};

// Class TslGameMode.*a7a43d224d
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct U*a7a43d224d : U*7411f341c8 {
	int32 *11b200f327; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> WeaponItemId; // 0x38(0x10)
};

// Class TslGameMode.*634418a53f
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct U*634418a53f : U*6b123102ec {
	struct UDataTable* *618c8c23ab; // 0x50(0x08)
};

// Class TslGameMode.TslFBRItemBuff
// Size: 0x530 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRItemBuff : ATslFBRBuff {
	char pad_510[0x8]; // 0x510(0x08)
	struct FName ItemID; // 0x518(0x08)
	int32 *2db37e35d2; // 0x520(0x04)
	int32 *1e320954d1; // 0x524(0x04)
	bool *89fa429905; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
};

// Class TslGameMode.TslFBRSoundBuff
// Size: 0x520 (Inherited: 0x510)  [layout: KHOP]
struct ATslFBRSoundBuff : ATslFBRBuff {
	struct TArray<struct F*45830215d9> *e6da43bc0c; // 0x510(0x10)
};

// Class TslGameMode.TslIncreaseMaxHpBuff
// Size: 0x510 (Inherited: 0x510)  [layout: KHOP]
struct ATslIncreaseMaxHpBuff : ATslFBRBuff {
};

// Class TslGameMode.TslFBRBuffIconBaseWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslFBRBuffIconBaseWidget : UUmgBaseWidget {
	struct UInvalidationBox* CachedInvalidationBox; // 0x420(0x08)
	int32 IconIndex; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMaterialInterface* MI_ProgressBar; // 0x430(0x08)
	struct FName ProgressBarMaterialParam; // 0x438(0x08)
	struct UMaterialInstanceDynamic* MID_ProgressBar; // 0x440(0x08)
	char pad_448[0x10]; // 0x448(0x10)
	bool bShowCountText; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
};

// Class TslGameMode.TslFBRBuffIconDataAsset
// Size: 0x1d8 (Inherited: 0x38)  [layout: KHOP]
struct UTslFBRBuffIconDataAsset : UDataAsset {
	struct FBuffIconDisplaySetting *abe48a49d6[0x04]; // 0x38(0x1a0)
};

// Class TslGameMode.TslFBRSkillSlotWidget
// Size: 0x578 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UTslFBRSkillSlotWidget : UTslFBRBuffIconBaseWidget {
	struct UImage* SkillIconImage; // 0x460(0x08)
	struct UImage* SkillProgressBar_Image; // 0x468(0x08)
	struct UTextBlock* SkillCountText; // 0x470(0x08)
	struct UTextBlock* SkillIndexText; // 0x478(0x08)
	struct UBorder* SkillIcon_Border; // 0x480(0x08)
	struct UGridPanel* SkillCountGridPanel; // 0x488(0x08)
	struct UTslGamepadKeyIconWidget* GamepadKeyIcon; // 0x490(0x08)
	struct FLinearColor SkillIconImage_ActivatedColor; // 0x498(0x10)
	struct FLinearColor SkillIconImage_DeactivatedColor; // 0x4a8(0x10)
	struct FLinearColor SkillIconBorder_ActivatedColor; // 0x4b8(0x10)
	struct FLinearColor SkillIconBorder_DeactivatedColor; // 0x4c8(0x10)
	struct FLinearColor SkillIconBorder_ActivatedBrushColor; // 0x4d8(0x10)
	struct FLinearColor SkillIconBorder_DeactivatedBrushColor; // 0x4e8(0x10)
	struct FSlateColor SkillCountText_ActivatedColor; // 0x4f8(0x28)
	struct FSlateColor SkillCountText_DeactivatedColor; // 0x520(0x28)
	char pad_548[0x30]; // 0x548(0x30)

	void OnUpdateIconColor(); // Function TslGameMode.TslFBRSkillSlotWidget.OnUpdateIconColor //  // @ game+0x43bab4
};

// Class TslGameMode.TslFBRBuffWidget
// Size: 0x4f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslFBRBuffWidget : UUmgBaseWidget {
	struct UHorizontalBox* IconHorizontalBox; // 0x420(0x08)
	struct USpacer* IconSpacer; // 0x428(0x08)
	struct UTslFBRBuffIconDataAsset* BuffIconDataAsset; // 0x430(0x08)
	struct TArray<struct UTslFBRBuffIconBaseWidget*> IconSlotList; // 0x438(0x10)
	struct UTslFBRBuffIconBaseWidget* CachedPrimaryWeaponIcon; // 0x448(0x08)
	struct FBuffIconDisplaySetting IconDisplaySetting; // 0x450(0x68)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct TArray<struct UUmgBaseWidget*> AdditionalWeaponWidgets; // 0x4c0(0x10)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	bool bCollapseEmptyIconWidget; // 0x4e0(0x01)
	char pad_4E1[0xf]; // 0x4e1(0x0f)

	void OnUpdateSpawnKit(); // Function TslGameMode.TslFBRBuffWidget.OnUpdateSpawnKit //  // @ game+0xe1d6eec
	void OnWeaponUnarmed(); // Function TslGameMode.TslFBRBuffWidget.OnWeaponUnarmed //  // @ game+0xe1d7818
	void OnUpdateViewTarget(); // Function TslGameMode.TslFBRBuffWidget.OnUpdateViewTarget //  // @ game+0xe1d72ac
	void OnWeaponArmed(); // Function TslGameMode.TslFBRBuffWidget.OnWeaponArmed //  // @ game+0xe1d77f0
	void OnMatchStateChanged(); // Function TslGameMode.TslFBRBuffWidget.OnMatchStateChanged //  // @ game+0xe1ceddc
	void OnUpdateViewTargetSpawnKit(); // Function TslGameMode.TslFBRBuffWidget.OnUpdateViewTargetSpawnKit //  // @ game+0xe1d7458
};

// Class TslGameMode.TslFBRCarePackageItem
// Size: 0x7f8 (Inherited: 0x768)  [layout: KHOP]
struct ATslFBRCarePackageItem : ACarePackageItem {
	int32 *fd9500c700; // 0x768(0x04)
	char pad_76C[0x4]; // 0x76c(0x04)
	SetProperty *00cace1d8e; // 0x770(0x50)
	int32 *11ae960963; // 0x7c0(0x04)
	char pad_7C4[0x4]; // 0x7c4(0x04)
	struct TArray<struct F*ca82628ca4> *71801e94f1; // 0x7c8(0x10)
	struct F*abdc25338b *338c945feb; // 0x7d8(0x20)

	void *26acf5509e(); // Function TslGameMode.TslFBRCarePackageItem.*26acf5509e //  // @ game+0xe1cba4c
};

// Class TslGameMode.FBRDestructibleCarePackageItem
// Size: 0x9f0 (Inherited: 0x7f8)  [layout: LECH - offset chi la uoc luong]
struct AFBRDestructibleCarePackageItem : ATslFBRCarePackageItem {
	bool bAsyncLoadSkeletalMesh; // 0x7f8(0x01)
	char pad_7F9[0x7]; // 0x7f9(0x07)
	struct USkeletalMeshComponent* *79917858a1; // 0x800(0x08)
	struct USkeletalMesh* *6082800db2; // 0x808(0x20)
	char pad_828[0x8]; // 0x828(0x08)
	struct FTslAssetLoader *a34b40ed15; // 0x830(0x80)
	struct FTslAssetLoader *c1b7765436; // 0x8b0(0x80)
	struct FTslAssetLoader *751e0cfbd5; // 0x930(0x80)
	struct UClass* *0ec41c0353; // 0x9b0(0x08)
	float MaxHP; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct ATslParticle* OpenFx; // 0x9c0(0x08)
	enum class EPackageState *ff0fb9f0ee; // 0x9c8(0x01) rep=OnRep_PackageState
	char pad_9C9[0x27]; // 0x9c9(0x27)

	void *c89ef550c3(); // Function TslGameMode.FBRDestructibleCarePackageItem.*c89ef550c3 //  // @ game+0xdafe618
	void OnRep_PackageState(); // Function TslGameMode.FBRDestructibleCarePackageItem.OnRep_PackageState //  // @ game+0xe1d2a7c
};

// Class TslGameMode.TslFBRDashBuff
// Size: 0x500 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRDashBuff : ATslBuff {
	char pad_4E8[0x8]; // 0x4e8(0x08)
	float *f4b0b568f7; // 0x4f0(0x04)
	float *2a02039fbe; // 0x4f4(0x04)
	float *1ea9e2c266; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class TslGameMode.TslFBRFlashbangComponent_Paladin
// Size: 0x2a0 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct UTslFBRFlashbangComponent_Paladin : UFlashbangComponent {
	struct UClass* *57c5724e49; // 0x288(0x08)
	float *1784f45940; // 0x290(0x04)
	char pad_294[0xc]; // 0x294(0x0c)

	void *91f642a387(); // Function TslGameMode.TslFBRFlashbangComponent_Paladin.*91f642a387 //  // @ game+0x1131ca4
};

// Class TslGameMode.TslFBRGunImpact
// Size: 0x14e0 (Inherited: 0x14d0)  [layout: KHOP]
struct ATslFBRGunImpact : ATslGunImpact {
	struct UParticleSystem* *294128afa6; // 0x14d0(0x08)
	struct UParticleSystem* *2630fb16d9; // 0x14d8(0x08)
};

// Class TslGameMode.TslFBRProjectile_SmokeBomb_Ranger
// Size: 0xbc0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRProjectile_SmokeBomb_Ranger : ATslProjectile {
	struct UClass* *ecf6208781; // 0xb78(0x08)
	float SmokeRemainTime; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct UClass* *fae5dc7744; // 0xb88(0x08)
	float *963ab1f79d; // 0xb90(0x04)
	char pad_B94[0x1c]; // 0xb94(0x1c)
	struct ATslParticle* *3b0bebc6de; // 0xbb0(0x08)
	char pad_BB8[0x8]; // 0xbb8(0x08)

	void *0444a811ca(); // Function TslGameMode.TslFBRProjectile_SmokeBomb_Ranger.*0444a811ca //  // @ game+0xe1c9a24
};

// Class TslGameMode.TslFBRProjectileSpikeTrap
// Size: 0xbb0 (Inherited: 0xba0)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRProjectileSpikeTrap : ATslProjectileSpikeTrap {
	int32 SegmentCount; // 0xba0(0x04)
	float MaxDeployHeightDifferential; // 0xba4(0x04)
	char pad_BA8[0x8]; // 0xba8(0x08)
};

// Class TslGameMode.TslFBRTeamInfoWidget
// Size: 0x6b0 (Inherited: 0x5e8)  [layout: LECH - offset chi la uoc luong]
struct UTslFBRTeamInfoWidget : UTslTeamInfoWidget {
	struct UImage* ClassIconImageWidget; // 0x5e8(0x08)
	struct UPanelWidget* TeamInfoGroup; // 0x5f0(0x08)
	struct UImage* IconBackgroundImageWidget; // 0x5f8(0x08)
	struct UImage* MemberIndexBackgroundImageWidget; // 0x600(0x08)
	struct UImage* FullBackgroundImageWidget; // 0x608(0x08)
	struct UPanelWidget* LevelPanelWidget; // 0x610(0x08)
	struct UTextBlock* PlayeLevelText; // 0x618(0x08)
	struct TMap<enum class EFBRClass, struct UTexture2D*> ClassTextureData; // 0x620(0x50)
	struct TArray<struct FFBRTeamInfoImageData> ImageByMemberIndex; // 0x670(0x10)
	struct FMargin SlotPaddingOverride; // 0x680(0x10)
	struct FName MaterialParam_Texture; // 0x690(0x08)
	struct FName MaterialParam_IsGray; // 0x698(0x08)
	struct FName MaterialParam_IsBlink; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)

	void OnTeamSpawnKitUpdated(); // Function TslGameMode.TslFBRTeamInfoWidget.OnTeamSpawnKitUpdated //  // @ game+0xe1d4fa8
	void OnToggleClassSelectWidget(); // Function TslGameMode.TslFBRTeamInfoWidget.OnToggleClassSelectWidget //  // @ game+0xe1d5448
};

// Class TslGameMode.TslFBRWeapon_GatlingGun
// Size: 0x1580 (Inherited: 0x1500)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRWeapon_GatlingGun : ATslWeapon_Trajectory {
	float *3ba21d6592; // 0x1500(0x04)
	float *afd853d674; // 0x1504(0x04)
	enum class EHeatState *eb709bcff5; // 0x1508(0x01) rep=OnRep_HeatState
	char pad_1509[0x77]; // 0x1509(0x77)

	void OnRep_HeatState(); // Function TslGameMode.TslFBRWeapon_GatlingGun.OnRep_HeatState //  // @ game+0xe1d1dfc
	void *df0f113fd5(); // Function TslGameMode.TslFBRWeapon_GatlingGun.*df0f113fd5 //  // @ game+0xe1c0248
};

// Class TslGameMode.*cc8f72d466
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*cc8f72d466 : UInterface {
};

// Class TslGameMode.TslFBRWeapon_MeleeSkill
// Size: 0xdb0 (Inherited: 0xd20)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRWeapon_MeleeSkill : ATslWeapon_Melee {
	char pad_D20[0x8]; // 0xd20(0x08)
	bool *2910ded9e1; // 0xd28(0x01)
	char pad_D29[0x3]; // 0xd29(0x03)
	float *dc12042418; // 0xd2c(0x04)
	float *42e12a0849; // 0xd30(0x04)
	char pad_D34[0x4]; // 0xd34(0x04)
	struct FName *0791d21329; // 0xd38(0x08)
	struct UClass* *e2e39694c1; // 0xd40(0x08)
	struct FName *c9c643c97e; // 0xd48(0x08)
	struct UClass* *0c5890d0f6; // 0xd50(0x08)
	struct TArray<struct UClass*> *c5e3242412; // 0xd58(0x10)
	struct TArray<struct UClass*> *8eb684d002; // 0xd68(0x10)
	struct TArray<struct FName> *0c474d9390; // 0xd78(0x10)
	struct ATslServerParticle* *2c31a1bcab; // 0xd88(0x08)
	struct ATslServerParticle* *c232f6dcef; // 0xd90(0x08)
	char pad_D98[0x18]; // 0xd98(0x18)

	void *be91491f72(); // Function TslGameMode.TslFBRWeapon_MeleeSkill.*be91491f72 //  // @ game+0xe1d9c8c
	void *2941cc1590(); // Function TslGameMode.TslFBRWeapon_MeleeSkill.*2941cc1590 //  // @ game+0xe1d9c40
	void *49cd1a56fe(); // Function TslGameMode.TslFBRWeapon_MeleeSkill.*49cd1a56fe //  // @ game+0xe1c4b5c
	void *aec64d492f(); // Function TslGameMode.TslFBRWeapon_MeleeSkill.*aec64d492f //  // @ game+0xe1c9d10
	void *0a2ed9b168(); // Function TslGameMode.TslFBRWeapon_MeleeSkill.*0a2ed9b168 //  // @ game+0xe1c9d28
};

// Class TslGameMode.TslFBRWeapon_MeleeDashAxe
// Size: 0xef0 (Inherited: 0xdb0)  [layout: LECH - offset chi la uoc luong]
struct ATslFBRWeapon_MeleeDashAxe : ATslFBRWeapon_MeleeSkill {
	struct FTslAssetLoader *cc016648a2; // 0xdb0(0x80)
	float *d96093b4fc; // 0xe30(0x04)
	float *a175981a7b; // 0xe34(0x04)
	float *059c1128d5; // 0xe38(0x04)
	float InputYawScale; // 0xe3c(0x04)
	float *be7db939e1; // 0xe40(0x04)
	float *8f3e4ec5e6; // 0xe44(0x04)
	float *a620eea4b4; // 0xe48(0x04)
	float *1a219aaea7; // 0xe4c(0x04)
	float *259cacd054; // 0xe50(0x04)
	char pad_E54[0xc]; // 0xe54(0x0c)
	struct FTslAssetLoader *5eee595875; // 0xe60(0x80)
	char pad_EE0[0x10]; // 0xee0(0x10)

	void *0db1650a77(); // Function TslGameMode.TslFBRWeapon_MeleeDashAxe.*0db1650a77 //  // @ game+0xe1ddcc4
};

// Class TslGameMode.TslFBRWeapon_MeleeTugHalberd
// Size: 0xdc0 (Inherited: 0xdb0)  [layout: KHOP]
struct ATslFBRWeapon_MeleeTugHalberd : ATslFBRWeapon_MeleeSkill {
	struct UCapsuleComponent* HitTugCapsuleComponent; // 0xdb0(0x08)
	float *f402e9d751; // 0xdb8(0x04)
	float *190ceac576; // 0xdbc(0x04)

	void OnMontageEnded(); // Function TslGameMode.TslFBRWeapon_MeleeTugHalberd.OnMontageEnded //  // @ game+0xdc17bfc
};

// Class TslGameMode.*1bde14504f
// Size: 0x220 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*1bde14504f : UActorComponent {
	struct ATslWeapon* *2be86ddbae; // 0x208(0x08)
	bool *ce448f04ff; // 0x210(0x01)
	bool *f1fab17779; // 0x211(0x01)
	bool *227d20ac33; // 0x212(0x01)
	bool *667e72df27; // 0x213(0x01)
	bool *4b35c41cc7; // 0x214(0x01) rep=OnRep_MeshVisibility
	char pad_215[0xb]; // 0x215(0x0b)

	void OnUpdateVisibility(); // Function TslGameMode.*1bde14504f.OnUpdateVisibility //  // @ game+0xe1d76d8
	void OnRep_MeshVisibility(); // Function TslGameMode.*1bde14504f.OnRep_MeshVisibility //  // @ game+0xe1d2020
	void OnUpdatedCharacterEvent(); // Function TslGameMode.*1bde14504f.OnUpdatedCharacterEvent //  // @ game+0xe1d76ec
};

// Class TslGameMode.*78bdb34482
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*78bdb34482 : UInterface {
};

// Class TslGameMode.TslHealthDebuff
// Size: 0x558 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct ATslHealthDebuff : ATslBuff {
	char pad_4E8[0x30]; // 0x4e8(0x30)
	enum class EHealthDebuffType HealthDebuffType; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	float DamagePerTick; // 0x51c(0x04)
	struct UClass* DamageType; // 0x520(0x08)
	struct UTexture* DamageCauserIcon; // 0x528(0x08)
	float DamageIconRatio; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct FText DamageCauserItemName; // 0x538(0x18)
	enum class EWeaponClass DamageCauserClass; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
};

// Class TslGameMode.*a9c28db836
// Size: 0x98 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*a9c28db836 : UObject {
	float *5723813ea1; // 0x30(0x04)
	float *db386bba53; // 0x34(0x04)
	float *ee910e5e16; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct ATslPassBluezoneArea*> *439b906be3; // 0x40(0x10)
	struct TArray<struct ATslPassBlueZoneAreaRectangle*> *b29cd33b4b; // 0x50(0x10)
	struct ALevelAttribute* LevelAttribute; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
	float LandRatio; // 0x78(0x04)
	float SpreadBias; // 0x7c(0x04)
	char pad_80[0x18]; // 0x80(0x18)
};

// Class TslGameMode.TslKeyHintChecker_IsOneOnOneObserver
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsOneOnOneObserver : U*336a8ab80b {
};

// Class TslGameMode.*9851240dff
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9851240dff : U*336a8ab80b {
};

// Class TslGameMode.*6de0358973
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6de0358973 : U*336a8ab80b {
};

// Class TslGameMode.*b7816585fd
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b7816585fd : U*336a8ab80b {
};

// Class TslGameMode.*611b55d0a9
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*611b55d0a9 : U*336a8ab80b {
};

// Class TslGameMode.*ee8d91e1c0
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ee8d91e1c0 : U*336a8ab80b {
};

// Class TslGameMode.TslMakeRedirectsCommandlet
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UTslMakeRedirectsCommandlet : UCommandlet {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class TslGameMode.*6266a8e7c3
// Size: 0x138 (Inherited: 0xd8)  [layout: KHOP]
struct U*6266a8e7c3 : U*eab4677b30 {
	struct TMap<enum class EModActorType, struct UTexture*> *74a012e950; // 0xd8(0x50)
	struct TArray<struct UImage*> *001ce5e9e1; // 0x128(0x10)
};

// Class TslGameMode.TslModBillboardEntryWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: KHOP]
struct UTslModBillboardEntryWidget : UUmgBaseWidget {
	struct FText RankNumber; // 0x420(0x18)
	struct FLinearColor RankBgColor; // 0x438(0x10)
	struct FSlateColor RankTextColor; // 0x448(0x28)
	struct FSlateColor RecordTextColor; // 0x470(0x28)
	struct UTextBlock* TextBlockText; // 0x498(0x08)
	struct UTextBlock* TextBlockRank; // 0x4a0(0x08)
	struct UBorder* BorderRank; // 0x4a8(0x08)
	struct UHorizontalBox* HorizontalBoxEntry; // 0x4b0(0x08)
	struct UTslPubgIdWidget* WidgetPubgId; // 0x4b8(0x08)
	struct UImage* ImageDefault; // 0x4c0(0x08)
};

// Class TslGameMode.TslModBillboardWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslModBillboardWidget : UUmgBaseWidget {
	struct TArray<struct UTslModBillboardEntryWidget*> LeaderboardEntries; // 0x420(0x10)
	struct UUniformGridPanel* GridPanelLeaderboard; // 0x430(0x08)
	struct UTslModBillboardEntryWidget* WidgetRank1; // 0x438(0x08)
	struct UTslModBillboardEntryWidget* WidgetRank2; // 0x440(0x08)
	struct UTslModBillboardEntryWidget* WidgetRank3; // 0x448(0x08)
	struct UTslModBillboardEntryWidget* WidgetRank4; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
};

// Class TslGameMode.*37f8afda43
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct U*37f8afda43 : UTslModeFeatureRepObject {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct F*67b8f0e85d> *375c3e8249; // 0x40(0x10)
};

// Class TslGameMode.*3784d4ff2b
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*3784d4ff2b : UTslModeFeatureRepObject {

	void *4b0560c3c6(); // Function TslGameMode.*3784d4ff2b.*4b0560c3c6 //  // @ game+0xe1d54e8
	void *df51100658(); // Function TslGameMode.*3784d4ff2b.*df51100658 //  // @ game+0xe1d54c4
};

// Class TslGameMode.*0d0e05d080
// Size: 0x108 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*0d0e05d080 : UTslModeFeatureRepObject {
	struct F*db2d183c88 Snapshot; // 0x38(0xc8)
	char pad_100[0x8]; // 0x100(0x08)

	void OnServerTeamIdUpdated(); // Function TslGameMode.*0d0e05d080.OnServerTeamIdUpdated //  // @ game+0xe1d4890
};

// Class TslGameMode.TslModMarket
// Size: 0x518 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct ATslModMarket : ATslMarket {
	struct FModTargetInfo *527123adfe; // 0x4e8(0x20)
	bool *fd8a7da400; // 0x508(0x01)
	char pad_509[0xf]; // 0x509(0x0f)
};

// Class TslGameMode.*3f34eb5329
// Size: 0x60 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*3f34eb5329 : U*90348dfbc8 {
	uint32 *200b187219; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class TslGameMode.TslOneOnOneArenaRoom
// Size: 0x920 (Inherited: 0x410)  [layout: LECH - offset chi la uoc luong]
struct ATslOneOnOneArenaRoom : ATslArenaRoomBase {
	char pad_410[0x8]; // 0x410(0x08)
	struct F*5053e479e6 *4c53670889; // 0x418(0x158)
	struct FStringAssetReference *7b10ef7490; // 0x570(0x10)
	char pad_580[0x200]; // 0x580(0x200)
	enum class EOneOnOneRoomState *bc48c450c6; // 0x780(0x01) rep=OnRep_RoomState
	char pad_781[0x3]; // 0x781(0x03)
	int32 *59973cc742; // 0x784(0x04) rep=OnRep_RemainingTime
	int32 CurrentRound; // 0x788(0x04) rep=OnRep_CurrentRound
	char pad_78C[0x4]; // 0x78c(0x04)
	struct TArray<int32> *35f9cbe285; // 0x790(0x10) rep=OnRep_MatchRemainTimes
	bool bActive; // 0x7a0(0x01)
	char pad_7A1[0x3]; // 0x7a1(0x03)
	float *b10ff50073; // 0x7a4(0x04)
	int32 *f170c057e6; // 0x7a8(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
	struct F*2906774852 *e2fab5160c; // 0x7b0(0x40)
	struct TArray<struct U*96fe947291*> *5314359453; // 0x7f0(0x10)
	char pad_800[0x120]; // 0x800(0x120)

	void OnRep_RoomState(); // Function TslGameMode.TslOneOnOneArenaRoom.OnRep_RoomState //  // @ game+0xe1d2bbc
	void OnSomeoneKilled(); // Function TslGameMode.TslOneOnOneArenaRoom.OnSomeoneKilled //  // @ game+0xe1d4988
	void OnRep_MatchRemainTimes(); // Function TslGameMode.TslOneOnOneArenaRoom.OnRep_MatchRemainTimes //  // @ game+0xe1d1fd4
	void OnRep_RemainingTime(); // Function TslGameMode.TslOneOnOneArenaRoom.OnRep_RemainingTime //  // @ game+0xe1d2afc
	void OnRep_CurrentRound(); // Function TslGameMode.TslOneOnOneArenaRoom.OnRep_CurrentRound //  // @ game+0xe1d1d1c
};

// Class TslGameMode.TslOneOnOneArenaStateComponent
// Size: 0x410 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UTslOneOnOneArenaStateComponent : UActorComponent {
	char pad_210[0xa0]; // 0x210(0xa0)
	struct TArray<enum class EOneOnOneResultType> *2ba04e1760; // 0x2b0(0x10) rep=OnRep_Scores
	struct F*8d13cea2cc Ticket; // 0x2c0(0x03) rep=OnRep_Ticket
	enum class EOneOnOneStageType CurrentStage; // 0x2c3(0x01) rep=OnRep_CurrentStage
	int32 TeamId; // 0x2c4(0x04)
	float *058b4de87d; // 0x2c8(0x04)
	float *7e47a49e5b; // 0x2cc(0x04)
	char pad_2D0[0x140]; // 0x2d0(0x140)

	void OnRep_Scores(); // Function TslGameMode.TslOneOnOneArenaStateComponent.OnRep_Scores //  // @ game+0xe1d2d2c
	void *7bcf069a5e(); // Function TslGameMode.TslOneOnOneArenaStateComponent.*7bcf069a5e //  // @ game+0xe1d9808
	void *bcf5f53c25(); // Function TslGameMode.TslOneOnOneArenaStateComponent.*bcf5f53c25 //  // @ game+0xe1c399c
	void OnRep_CurrentStage(); // Function TslGameMode.TslOneOnOneArenaStateComponent.OnRep_CurrentStage //  // @ game+0xe1d1d54
	void OnRep_Ticket(); // Function TslGameMode.TslOneOnOneArenaStateComponent.OnRep_Ticket //  // @ game+0xe1d2e8c
	void *4985f58293(); // Function TslGameMode.TslOneOnOneArenaStateComponent.*4985f58293 //  // @ game+0xe1d9f08
};

// Class TslGameMode.TslOneOnOneArenaTargetPoint
// Size: 0x418 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslOneOnOneArenaTargetPoint : ATargetPoint {
	char pad_400[0x10]; // 0x400(0x10)
	enum class EOneOnOneStageType *36ea4a39d0; // 0x410(0x01)
	enum class EOneOnOneSideType *1c14a33504; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
};

// Class TslGameMode.TslOneOnOneBlockingVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ATslOneOnOneBlockingVolume : AVolume {
	char pad_438[0x8]; // 0x438(0x08)
};

// Class TslGameMode.TslPlayerStartAndRespawn
// Size: 0x478 (Inherited: 0x460)  [layout: KHOP]
struct ATslPlayerStartAndRespawn : ATslPlayerStart {
	enum class EPlatoonTeam BaseTeam; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct FString BattleAreaType; // 0x468(0x10)
};

// Class TslGameMode.TslPlayerTrainingComponent
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UTslPlayerTrainingComponent : UActorComponent {
	char pad_210[0x20]; // 0x210(0x20)

	void *b11605533b(); // Function TslGameMode.TslPlayerTrainingComponent.*b11605533b //  // @ game+0xe1d54fc
	void *38a7646617(); // Function TslGameMode.TslPlayerTrainingComponent.*38a7646617 //  // @ game+0xe1ce9c0
	void *497dc617bd(); // Function TslGameMode.TslPlayerTrainingComponent.*497dc617bd //  // @ game+0xe1d559c
	void *6c48697434(); // Function TslGameMode.TslPlayerTrainingComponent.*6c48697434 //  // @ game+0xe1d55d8
	void *c914a86eed(); // Function TslGameMode.TslPlayerTrainingComponent.*c914a86eed //  // @ game+0xe1d5588
	void *6c3aea8773(); // Function TslGameMode.TslPlayerTrainingComponent.*6c3aea8773 //  // @ game+0xe1d55c4
	void *d023c04b1f(); // Function TslGameMode.TslPlayerTrainingComponent.*d023c04b1f //  // @ game+0xe1d4c58
	void *aafab145ca(); // Function TslGameMode.TslPlayerTrainingComponent.*aafab145ca //  // @ game+0xe1d55b0
};

// Class TslGameMode.*ccd84a36b0
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ccd84a36b0 : U*1be5d204cb {
	float LifeTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class TslGameMode.*14d3f75386
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*14d3f75386 : U*1be5d204cb {
	float *69faa1395d; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class TslGameMode.TslPrivateTrainingRoomManager
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslPrivateTrainingRoomManager : UObject {
	struct UClass* AimPrivateTrainingRoomClass; // 0x30(0x08)
	struct UClass* SoundPrivateTrainingRoomClass; // 0x38(0x08)
	struct UDataTable* TrainingRoomSoundDataTable; // 0x40(0x08)
	struct TMap<enum class EPrivateWaitingRoomPhase, float> WaitingRoomPhaseFinishDelayTime; // 0x48(0x50)
	struct TArray<struct ATslTrainingTargetSpawner*> *f873580b7a; // 0x98(0x10)
	struct TArray<struct UTslBasePrivateTrainingRoom*> *5c863250ce; // 0xa8(0x10)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TslGameMode.TslProjectileBuff
// Size: 0xb90 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct ATslProjectileBuff : ATslProjectile {
	struct TArray<struct UClass*> *0a870567ba; // 0xb78(0x10)
	bool *a103c4ae47; // 0xb88(0x01)
	char pad_B89[0x7]; // 0xb89(0x07)
};

// Class TslGameMode.TslRangeDoor
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct ATslRangeDoor : AActor {
	bool bEnabled; // 0x400(0x01)
	bool bOpen; // 0x401(0x01)
	enum class *84ca051ea7 *b81f91433e; // 0x402(0x01)
	char pad_403[0x1]; // 0x403(0x01)
	float *b29df5514d; // 0x404(0x04)
	struct UStaticMeshComponent* DoorFrame; // 0x408(0x08)
	struct UStaticMeshComponent* *266d1c57e3; // 0x410(0x08)
	struct UStaticMeshComponent* *47d96f495a; // 0x418(0x08)
};

// Class TslGameMode.TslRemoveInvalidAssetCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UTslRemoveInvalidAssetCommandlet : UCommandlet {
};

// Class TslGameMode.TslRemoveRedirectsCommandlet
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UTslRemoveRedirectsCommandlet : UCommandlet {
	char pad_88[0x18]; // 0x88(0x18)
};

// Class TslGameMode.TslReparentCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UTslReparentCommandlet : UCommandlet {
};

// Class TslGameMode.*eace6efe1f
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*eace6efe1f : UInterface {
};

// Class TslGameMode.*21387ebd8b
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*21387ebd8b : UActorComponent {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x210(0x08)
	struct UAnimationAsset* *4264769ed2; // 0x218(0x08)
	bool *e1c17f5be2; // 0x220(0x01) rep=OnRep_PlayAnimation
	char pad_221[0xf]; // 0x221(0x0f)

	void OnRep_PlayAnimation(); // Function TslGameMode.*21387ebd8b.OnRep_PlayAnimation //  // @ game+0xe1d2ab8
};

// Class TslGameMode.*c23c19163c
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*c23c19163c : UActorComponent {
	struct UAkComponent* AkComponent; // 0x210(0x08)
	struct UAkAudioEvent* *7a6b0a5865; // 0x218(0x08)
	bool *b5a642e692; // 0x220(0x01) rep=OnRep_PlaySound
	char pad_221[0xf]; // 0x221(0x0f)

	void OnRep_PlaySound(); // Function TslGameMode.*c23c19163c.OnRep_PlaySound //  // @ game+0xe1d2ad4
};

// Class TslGameMode.*f452fd00a3
// Size: 0x220 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*f452fd00a3 : UActorComponent {
	struct UClass* *afe74d21f1; // 0x210(0x08)
	char pad_218[0x8]; // 0x218(0x08)
};

// Class TslGameMode.TslSLBActivateObject
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBActivateObject : AActor {
	char pad_400[0x8]; // 0x400(0x08)
};

// Class TslGameMode.TslSLBActivateObjectManager
// Size: 0xe0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBActivateObjectManager : UObject {
	struct UDataTable* ActivateObjectEventDataTable; // 0x30(0x08)
	char pad_38[0xa8]; // 0x38(0xa8)

	void *50d4274661(); // Function TslGameMode.TslSLBActivateObjectManager.*50d4274661 //  // @ game+0xe1bdcb8
};

// Class TslGameMode.*0066c1b07c
// Size: 0xd8 (Inherited: 0x88)  [layout: KHOP]
struct U*0066c1b07c : UTslAttributeSet {
	struct F*9d4837b9c0 AggressiveDistance; // 0x88(0x10)
	struct F*9d4837b9c0 PatrolSearchRadius; // 0x98(0x10)
	struct F*9d4837b9c0 MeleeAttackDist; // 0xa8(0x10)
	struct F*9d4837b9c0 OrcaRadius; // 0xb8(0x10)
	struct F*9d4837b9c0 WalkingSpeedType; // 0xc8(0x10)
};

// Class TslGameMode.TslSLBThrowingAttributeSet
// Size: 0x68 (Inherited: 0x38)  [layout: KHOP]
struct UTslSLBThrowingAttributeSet : UAttributeSet {
	struct F*9d4837b9c0 ThrowDistance; // 0x38(0x10)
	struct F*9d4837b9c0 ThrowDelayterm; // 0x48(0x10)
	struct F*9d4837b9c0 CanThrowDelaytermCancelByHit; // 0x58(0x10)
};

// Class TslGameMode.TslSLBSmokeAttributeSet
// Size: 0x68 (Inherited: 0x38)  [layout: KHOP]
struct UTslSLBSmokeAttributeSet : UAttributeSet {
	struct F*9d4837b9c0 SmokeParticleLifetime; // 0x38(0x10)
	struct F*9d4837b9c0 SmokeParticleRadius; // 0x48(0x10)
	struct F*9d4837b9c0 CanRemainItemByDeath; // 0x58(0x10)
};

// Class TslGameMode.TslSLBGrenadeAttributeSet
// Size: 0x58 (Inherited: 0x38)  [layout: KHOP]
struct UTslSLBGrenadeAttributeSet : UAttributeSet {
	struct F*9d4837b9c0 GrenadeDamage; // 0x38(0x10)
	struct F*9d4837b9c0 GrenadeExplosionRadius; // 0x48(0x10)
};

// Class TslGameMode.TslSLBC4AttributeSet
// Size: 0x98 (Inherited: 0x58)  [layout: KHOP]
struct UTslSLBC4AttributeSet : UTslSLBGrenadeAttributeSet {
	struct F*9d4837b9c0 C4ExplosionTime; // 0x58(0x10)
	struct F*9d4837b9c0 C4ActivateDistance; // 0x68(0x10)
	struct F*9d4837b9c0 AdditionalSpeedModifier; // 0x78(0x10)
	struct F*9d4837b9c0 CanRushCancelByHit; // 0x88(0x10)
};

// Class TslGameMode.SLBGASAICharacter
// Size: 0x13e0 (Inherited: 0x1370)  [layout: LECH - offset chi la uoc luong]
struct ASLBGASAICharacter : ATslSLBAICharacter {
	char pad_1370[0x10]; // 0x1370(0x10)
	struct TMap<struct FGameplayTag, enum class ENpcCharacterStateType> *2bd40685a5; // 0x1380(0x50)
	char pad_13D0[0x10]; // 0x13d0(0x10)

	void *38f5428e22(); // Function TslGameMode.SLBGASAICharacter.*38f5428e22 //  // @ game+0xe1d4e34
	void *82a3a87201(); // Function TslGameMode.SLBGASAICharacter.*82a3a87201 //  // @ game+0xe1d1568
	void *e55bb04bf2(); // Function TslGameMode.SLBGASAICharacter.*e55bb04bf2 //  // @ game+0xe1cdf18
	void *432a1abb7e(); // Function TslGameMode.SLBGASAICharacter.*432a1abb7e //  // @ game+0xe1ca69c
	void *24b43488d6(); // Function TslGameMode.SLBGASAICharacter.*24b43488d6 //  // @ game+0xe1d32fc
};

// Class TslGameMode.*f744b6a095
// Size: 0x68 (Inherited: 0x60)  [layout: LECH - offset chi la uoc luong]
struct U*f744b6a095 : U*3f5e9afc41 {
	float *f4d4f94149; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class TslGameMode.*5bd3fe03c0
// Size: 0xa8 (Inherited: 0x58)  [layout: KHOP]
struct U*5bd3fe03c0 : U*c96d356cbc {
	struct TArray<struct UClass*> *0a870567ba; // 0x58(0x10)
	float *4df05c0edc; // 0x68(0x04)
	int32 *8613d97297; // 0x6c(0x04)
	int32 *3b70873992; // 0x70(0x04)
	float *b6e37ddc60; // 0x74(0x04)
	float *6331eb529a; // 0x78(0x04)
	char pad_7C[0xc]; // 0x7c(0x0c)
	struct TArray<struct F*df1a3bcebf> *51ae53bba5; // 0x88(0x10)
	struct TArray<struct ATslSLBAICharacter*> *8d1482d9df; // 0x98(0x10)
};

// Class TslGameMode.TslSLBAIController
// Size: 0x5a8 (Inherited: 0x570)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBAIController : ADummyAIController {
	float *cd4bf5bcb6; // 0x570(0x04)
	char pad_574[0x1c]; // 0x574(0x1c)
	struct U*615dc8b7ce* *9e774c4193; // 0x590(0x08)
	char pad_598[0x10]; // 0x598(0x10)

	void *1cbb106b39(); // Function TslGameMode.TslSLBAIController.*1cbb106b39 //  // @ game+0xe1d7ae8
	void *c660e7781d(); // Function TslGameMode.TslSLBAIController.*c660e7781d //  // @ game+0xe1d7eb8
	void *7abcb8a8b3(); // Function TslGameMode.TslSLBAIController.*7abcb8a8b3 //  // @ game+0xe1dd1ac
};

// Class TslGameMode.*615dc8b7ce
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*615dc8b7ce : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class TslGameMode.TslSLBAIPlayerState
// Size: 0x1140 (Inherited: 0x1140)  [layout: KHOP]
struct ATslSLBAIPlayerState : ADummyAIPlayerState {
};

// Class TslGameMode.TslSLBAreaBlockActor
// Size: 0x458 (Inherited: 0x400)  [layout: KHOP]
struct ATslSLBAreaBlockActor : AActor {
	enum class ETslSLBAreaBlockActorState *969fc57bb0; // 0x400(0x01) rep=OnRep_AreaBlockState
	enum class ETslSLBAreaBlockActorState *5c18880ef3; // 0x401(0x01) rep=OnRep_InteractionSwitchState
	bool *41a903ffa2; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UTslSLBAreaBlockInteractionComponent* *35ecfbdfff; // 0x408(0x08)
	struct USkeletalMeshComponent* *79917858a1; // 0x410(0x08)
	struct USkeletalMeshComponent* InteractionMeshComp; // 0x418(0x08)
	struct UAnimationAsset* *4264769ed2; // 0x420(0x08)
	struct UAnimationAsset* *2e1523fe39; // 0x428(0x08)
	struct UAnimationAsset* *65638e3eea; // 0x430(0x08)
	struct UAnimationAsset* *84d5504cf4; // 0x438(0x08)
	struct FName *f4bf797e54; // 0x440(0x08)
	struct FName GeneratorName; // 0x448(0x08)
	struct ATslSLBMissionGeneratorActor* *74cf1d9604; // 0x450(0x08)

	void OnServerCancelInteract(); // Function TslGameMode.TslSLBAreaBlockActor.OnServerCancelInteract //  // @ game+0xe1d3f5c
	void OnServerInteractionSucceed(); // Function TslGameMode.TslSLBAreaBlockActor.OnServerInteractionSucceed //  // @ game+0xe1d41ec
	void OnServerInteractionFailed(); // Function TslGameMode.TslSLBAreaBlockActor.OnServerInteractionFailed //  // @ game+0xe1d3f5c
	void *8c25aea5f6(); // Function TslGameMode.TslSLBAreaBlockActor.*8c25aea5f6 //  // @ game+0xe1bfc40
	void OnServerStartInteract(); // Function TslGameMode.TslSLBAreaBlockActor.OnServerStartInteract //  // @ game+0xe1d4798
	void OnRep_AreaBlockState(); // Function TslGameMode.TslSLBAreaBlockActor.OnRep_AreaBlockState //  // @ game+0xe1d1a5c
	void OnRep_InteractionSwitchState(); // Function TslGameMode.TslSLBAreaBlockActor.OnRep_InteractionSwitchState //  // @ game+0xe1d1f70
};

// Class TslGameMode.TslSLBAreaBlockInteractionComponent
// Size: 0x7c0 (Inherited: 0x7c0)  [layout: KHOP]
struct UTslSLBAreaBlockInteractionComponent : U*4a95730744 {
	struct UPrimitiveComponent* *522e88278e; // 0x7b8(0x08)
};

// Class TslGameMode.TslSLBAttackDamageBuff
// Size: 0x500 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBAttackDamageBuff : ATslSLBBuff {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	float *e9865aa056; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class TslGameMode.TslSLBBleedDebuff
// Size: 0x510 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBBleedDebuff : ATslSLBBuff {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	struct F*ca82628ca4 *02d9292925; // 0x4f8(0x10)
	float *dee1bdb002; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
};

// Class TslGameMode.TslSLBBlurDebuff
// Size: 0x4f8 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBBlurDebuff : ATslSLBBuff {
	float *977d45f58a; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
};

// Class TslGameMode.TslSLBDBNODebuff
// Size: 0x4f8 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBDBNODebuff : ATslSLBBuff {
	uint32 *200b187219; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
};

// Class TslGameMode.TslSLBDizzinessDebuff
// Size: 0x4f0 (Inherited: 0x4f0)  [layout: KHOP]
struct ATslSLBDizzinessDebuff : ATslSLBBuff {
};

// Class TslGameMode.TslSLBForceTargetingDebuff
// Size: 0x4f8 (Inherited: 0x4f0)  [layout: KHOP]
struct ATslSLBForceTargetingDebuff : ATslSLBBuff {
	struct AActor* *0c71c12a5f; // 0x4f0(0x08)

	void OnTargetEndPlay(); // Function TslGameMode.TslSLBForceTargetingDebuff.OnTargetEndPlay //  // @ game+0xe1d4eec
};

// Class TslGameMode.TslSLBRecoilDebuff
// Size: 0x500 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBRecoilDebuff : ATslSLBBuff {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	float *c6b1691740; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class TslGameMode.TslSLBSpeedDebuff
// Size: 0x500 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBSpeedDebuff : ATslSLBBuff {
	char pad_4F0[0x8]; // 0x4f0(0x08)
	float *23680ad5b7; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class TslGameMode.TslSLBStarvingAnimDebuff
// Size: 0x598 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBStarvingAnimDebuff : ATslSLBBuff {
	struct TMap<enum class EStanceMode, struct UAnimMontage*> StarvingStartAnimMontageMap; // 0x4f0(0x50)
	struct TMap<enum class EStanceMode, struct UAnimMontage*> StarvingEndAnimMontageMap; // 0x540(0x50)
	uint32 *200b187219; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
};

// Class TslGameMode.TslSLBStunDebuff
// Size: 0x500 (Inherited: 0x4f0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBStunDebuff : ATslSLBBuff {
	struct UAnimMontage* StunAnimMontage; // 0x4f0(0x08)
	uint32 *200b187219; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)
};

// Class TslGameMode.*c17da71b14
// Size: 0x138 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*c17da71b14 : U*c96d356cbc {
	struct UWorld* *94b9446817; // 0x58(0x08)
	struct UCapsuleComponent* *20cc983e0f; // 0x60(0x08)
	struct TMap<enum class ERetriggerCounter, float> *3018e8207d; // 0x68(0x50)
	struct TArray<struct UClass*> *0a870567ba; // 0xb8(0x10)
	struct TArray<struct UClass*> *eef8e89bf9; // 0xc8(0x10)
	float *f4d4f94149; // 0xd8(0x04)
	float *0dc171aff5; // 0xdc(0x04)
	float *ec97a46849; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UClass* *ab198dcd55; // 0xe8(0x08)
	struct UClass* *e6cf9ce653; // 0xf0(0x08)
	struct UClass* *068ed88521; // 0xf8(0x08)
	struct ATslParticle* *3aee2f8a1b; // 0x100(0x08)
	struct ATslParticle* *800749393a; // 0x108(0x08)
	char pad_110[0x28]; // 0x110(0x28)
};

// Class TslGameMode.TslSLBCharacterTrigger
// Size: 0x428 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBCharacterTrigger : AActor {
	int32 TriggerCharacterCount; // 0x400(0x04)
	struct FColor ShapeColor; // 0x404(0x04)
	enum class ESLBTriggerShapeType TriggerShapeType; // 0x408(0x04)
	struct FVector BoxExtent; // 0x40c(0x0c)
	float SphereRadius; // 0x418(0x04)
	float TickInterval; // 0x41c(0x04)
	char pad_420[0x8]; // 0x420(0x08)

	void *12f61c8f1b(); // Function TslGameMode.TslSLBCharacterTrigger.*12f61c8f1b //  // @ game+0xe1d30bc
};

// Class TslGameMode.TslSLBCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UTslSLBCheatManager : UTslCheatManager {

	void SLBDropReward(); // Function TslGameMode.TslSLBCheatManager.SLBDropReward //  // @ game+0x1053c04
	void SLBPlayerVisibility(); // Function TslGameMode.TslSLBCheatManager.SLBPlayerVisibility //  // @ game+0xda977bc
	void SLBAllGeneratorActivate(); // Function TslGameMode.TslSLBCheatManager.SLBAllGeneratorActivate //  // @ game+0x1053c04
	void ServerSpawnSLBAIZombie(); // Function TslGameMode.TslSLBCheatManager.ServerSpawnSLBAIZombie //  // @ game+0xe1d8a78
	void SLBTestLogoutDBNO(); // Function TslGameMode.TslSLBCheatManager.SLBTestLogoutDBNO //  // @ game+0x1053c04
	void SpawnSLBAIZombie(); // Function TslGameMode.TslSLBCheatManager.SpawnSLBAIZombie //  // @ game+0xdaf3ad4
	void SLBRemoveDebuff(); // Function TslGameMode.TslSLBCheatManager.SLBRemoveDebuff //  // @ game+0xda95664
	void SLBHaveRewardItem(); // Function TslGameMode.TslSLBCheatManager.SLBHaveRewardItem //  // @ game+0xda977bc
	void SLBGetAmmo(); // Function TslGameMode.TslSLBCheatManager.SLBGetAmmo //  // @ game+0xe1d7ef8
	void SLBKillZombieInEvent(); // Function TslGameMode.TslSLBCheatManager.SLBKillZombieInEvent //  // @ game+0xda95664
	void SLBAbortCarry(); // Function TslGameMode.TslSLBCheatManager.SLBAbortCarry //  // @ game+0x1053c04
	void SLBKillTargetZombieWithSpawner(); // Function TslGameMode.TslSLBCheatManager.SLBKillTargetZombieWithSpawner //  // @ game+0x1053c04
	void SLBRemoveAllDebuff(); // Function TslGameMode.TslSLBCheatManager.SLBRemoveAllDebuff //  // @ game+0x1053c04
	void SpawnSLBZombieCustomEvent(); // Function TslGameMode.TslSLBCheatManager.SpawnSLBZombieCustomEvent //  // @ game+0xe1dbef0
	void SLBSetHungerGauge(); // Function TslGameMode.TslSLBCheatManager.SLBSetHungerGauge //  // @ game+0xdac6c7c
	void SpawnSLBZombie(); // Function TslGameMode.TslSLBCheatManager.SpawnSLBZombie //  // @ game+0xdaf3ad4
	void SLBUpdateTransferItems(); // Function TslGameMode.TslSLBCheatManager.SLBUpdateTransferItems //  // @ game+0x1053c04
	void SLBBestClearStageDifficulty(); // Function TslGameMode.TslSLBCheatManager.SLBBestClearStageDifficulty //  // @ game+0xdadea8c
	void SLBTriggerActivateObjectEvent(); // Function TslGameMode.TslSLBCheatManager.SLBTriggerActivateObjectEvent //  // @ game+0xe1d7f70
	void SLBAllDebuffImmune(); // Function TslGameMode.TslSLBCheatManager.SLBAllDebuffImmune //  // @ game+0xda977bc
	void SLBKillZombieInSpawner(); // Function TslGameMode.TslSLBCheatManager.SLBKillZombieInSpawner //  // @ game+0xda95664
	void SLBTriggerZombieSpawnEvent(); // Function TslGameMode.TslSLBCheatManager.SLBTriggerZombieSpawnEvent //  // @ game+0xe1d8188
};

// Class TslGameMode.TslSLBClearDebuffInteractBehavior
// Size: 0x298 (Inherited: 0x280)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBClearDebuffInteractBehavior : U*a173b36a6d {
	struct TArray<struct UClass*> *a99c5ef1ba; // 0x280(0x10)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class TslGameMode.TslSLBControlLightIntensityVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBControlLightIntensityVolume : AVolume {
	float IntensityRatio; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
};

// Class TslGameMode.TslSLBCountDownWidget
// Size: 0x3c8 (Inherited: 0x388)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBCountDownWidget : UTslCountDownWidget {
	struct UTslSLBStageInfoWidget* StageInfo; // 0x388(0x08)
	struct USizeBox* SizeboxKeyHint; // 0x390(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyHintPcIconRules; // 0x398(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyHintPcIconSelectStage; // 0x3a0(0x08)
	struct UHorizontalBox* ListKeyHintPcSelectStage; // 0x3a8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* KeyHintGamepadSelectStage; // 0x3b0(0x08)
	float MinimapExtendedOffset; // 0x3b8(0x04)
	float FlareGunExtendedOffset; // 0x3bc(0x04)
	char pad_3C0[0x8]; // 0x3c0(0x08)

	void UpdatePositionOnMinimapExtended(); // Function TslGameMode.TslSLBCountDownWidget.UpdatePositionOnMinimapExtended //  // @ game+0xe1dded4
	void OnGameUserSettingApplied(); // Function TslGameMode.TslSLBCountDownWidget.OnGameUserSettingApplied //  // @ game+0xe1cdef0
	void OnOpenStageSelect(); // Function TslGameMode.TslSLBCountDownWidget.OnOpenStageSelect //  // @ game+0xe1d0df4
};

// Class TslGameMode.TslSLBCraftingActor
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct ATslSLBCraftingActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct U*2700accfdc* CraftingInteractionComp; // 0x408(0x08)
	struct U*5b93e10c3e* OwnerOutlineComp; // 0x410(0x08)

	void OnClientInteractionSucceed(); // Function TslGameMode.TslSLBCraftingActor.OnClientInteractionSucceed //  // @ game+0xe1cbde8
};

// Class TslGameMode.*2700accfdc
// Size: 0x610 (Inherited: 0x610)  [layout: KHOP]
struct U*2700accfdc : UInteractionComponent {
	struct UPrimitiveComponent* *522e88278e; // 0x608(0x08)
};

// Class TslGameMode.TslSLBCraftingIngredient
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBCraftingIngredient : UTslUserWidget {
	int32 Count; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UImage* ImageIngredient; // 0x338(0x08)
	struct UTextBlock* TextNumber; // 0x340(0x08)
	struct UTextBlock* TextTotalNumber; // 0x348(0x08)
	char pad_350[0x10]; // 0x350(0x10)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.TslSLBCraftingIngredient.OnAsyncLoadIconFinished //  // @ game+0xe1ca7dc
};

// Class TslGameMode.TslSLBCraftingItem
// Size: 0x478 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBCraftingItem : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
	struct FLinearColor ColorBgNormal; // 0x350(0x10)
	struct FLinearColor ColorBgDisable; // 0x360(0x10)
	struct FLinearColor ColorCraftedItemName; // 0x370(0x10)
	struct FText CraftedItemDesc; // 0x380(0x18)
	struct UImage* ImageBg; // 0x398(0x08)
	struct UImage* ImageCraftedItem; // 0x3a0(0x08)
	struct UImage* ImageContBg; // 0x3a8(0x08)
	struct UTextBlock* TextCountCraftedItem; // 0x3b0(0x08)
	struct UTextBlock* TextCraftedItem; // 0x3b8(0x08)
	struct UWrapBox* ListIngredients; // 0x3c0(0x08)
	struct UTslCommonButton* ButtonCrafting; // 0x3c8(0x08)
	struct UImage* ImageFocus; // 0x3d0(0x08)
	struct U*7fa8406bd3* AnimIncrease; // 0x3d8(0x08)
	struct TArray<struct UTslSLBCraftingIngredient*> CraftingIngredients; // 0x3e0(0x10)
	char pad_3F0[0x88]; // 0x3f0(0x88)

	void OnUnhoveredCraftingItem(); // Function TslGameMode.TslSLBCraftingItem.OnUnhoveredCraftingItem //  // @ game+0xe1d56c0
	void OnHoveredCraftingItem(); // Function TslGameMode.TslSLBCraftingItem.OnHoveredCraftingItem //  // @ game+0xe1ceb04
	void OnAsyncLoadIconFinished(); // Function TslGameMode.TslSLBCraftingItem.OnAsyncLoadIconFinished //  // @ game+0xe1ca7f0
	void OnClickCraftingItem(); // Function TslGameMode.TslSLBCraftingItem.OnClickCraftingItem //  // @ game+0xe1cb928
};

// Class TslGameMode.TslSLBDifficultyIconWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBDifficultyIconWidget : UUmgBaseWidget {
	enum class ETslSLBStageDifficulty Difficulty; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	struct FVector2D IconSize; // 0x424(0x08)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UImage* ImageS1; // 0x430(0x08)
	struct UImage* ImageS2; // 0x438(0x08)
	struct UImage* ImageS3; // 0x440(0x08)
};

// Class TslGameMode.TslSLBDisableDoorInteractionComponent
// Size: 0xab0 (Inherited: 0xab0)  [layout: KHOP]
struct UTslSLBDisableDoorInteractionComponent : UDoorInteractionComponent {
};

// Class TslGameMode.TslSLBDoorFrameComponent
// Size: 0xc90 (Inherited: 0xc70)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBDoorFrameComponent : UDoorFrameComponent {
	struct UTslSLBReactionComponent* DoorMesh; // 0xc70(0x08)
	struct UTslReactionData* *05e53880f8; // 0xc78(0x08)
	struct UStaticMesh* ReactionStaticMesh; // 0xc80(0x08)
	char pad_C88[0x8]; // 0xc88(0x08)
};

// Class TslGameMode.TslSLBExitActor
// Size: 0x700 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBExitActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct F*7ebf0c1e1e OpenCastConfig; // 0x408(0x230)
	int32 MaxInteractionCount; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct USkeletalMeshComponent* *c1d62f12a1; // 0x640(0x08)
	struct USkeletalMeshComponent* *6d6a1bd17d; // 0x648(0x08)
	struct UTslSLBExitDoorInteractionComponent* InteractionComp; // 0x650(0x08)
	struct TArray<float> SpeedModifier; // 0x658(0x10)
	struct UAnimationAsset* *56ebc6fc8e; // 0x668(0x08)
	struct UAnimationAsset* *d2e28004d8; // 0x670(0x08)
	struct UAnimationAsset* *d58874005c; // 0x678(0x08)
	struct UBoxComponent* ExitBoxComp; // 0x680(0x08)
	struct USceneComponent* ActivateExitParticleSceneComp; // 0x688(0x08)
	struct UBoxComponent* *415d5b2a77; // 0x690(0x08)
	enum class ETslSLBExitActorState *991bc5d82e; // 0x698(0x01) rep=OnRep_ExitActorState
	enum class ETslSLBExitActorState *72b0197523; // 0x699(0x01) rep=OnRep_LastExitDoorState
	char pad_69A[0x6]; // 0x69a(0x06)
	struct TArray<struct ATslCharacter*> *e2926a8ae6; // 0x6a0(0x10)
	float *77ca2d516b; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct USkeletalMeshComponent* *47e7cc5bfd; // 0x6b8(0x08)
	struct TArray<struct ATslCharacter*> *76f6d47bbf; // 0x6c0(0x10)
	struct UAkComponent* AkComponent; // 0x6d0(0x08)
	struct U*5b93e10c3e* OwnerOutlineComp; // 0x6d8(0x08)
	struct UAkAudioEvent* LastDoorStart; // 0x6e0(0x08)
	struct UAkAudioEvent* LastDoorCancel; // 0x6e8(0x08)
	struct UAkAudioEvent* LastDoorOpenComplete; // 0x6f0(0x08)
	char pad_6F8[0x8]; // 0x6f8(0x08)

	void *8c25aea5f6(); // Function TslGameMode.TslSLBExitActor.*8c25aea5f6 //  // @ game+0xe1bfcc8
	void OnRep_LastExitDoorState(); // Function TslGameMode.TslSLBExitActor.OnRep_LastExitDoorState //  // @ game+0xe1d1f98
	void OnServerCancelInteract(); // Function TslGameMode.TslSLBExitActor.OnServerCancelInteract //  // @ game+0xe1d3fd4
	void *f3ed77dc57(); // Function TslGameMode.TslSLBExitActor.*f3ed77dc57 //  // @ game+0xe1d7b60
	void OnRep_ExitActorState(); // Function TslGameMode.TslSLBExitActor.OnRep_ExitActorState //  // @ game+0xe1d1db8
	void OnServerInteractionEnded(); // Function TslGameMode.TslSLBExitActor.OnServerInteractionEnded //  // @ game+0xe1d3fd4
	void OnServerStartInteract(); // Function TslGameMode.TslSLBExitActor.OnServerStartInteract //  // @ game+0xe1d4814
};

// Class TslGameMode.TslSLBExitDoorInteractionComponent
// Size: 0x7c0 (Inherited: 0x7c0)  [layout: KHOP]
struct UTslSLBExitDoorInteractionComponent : U*4a95730744 {
	struct UPrimitiveComponent* *522e88278e; // 0x7b8(0x08)
};

// Class TslGameMode.*6f7216b645
// Size: 0x218 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*6f7216b645 : UObject {
	char pad_30[0x1e8]; // 0x30(0x1e8)
};

// Class TslGameMode.TslSLBGameRuleGuideWidget
// Size: 0x480 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBGameRuleGuideWidget : UBlockInputUserWidget {
	struct UTslRoundTimeWidget* Timer; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)

	void CloseWidget(); // Function TslGameMode.TslSLBGameRuleGuideWidget.CloseWidget //  // @ game+0xe1c4770
};

// Class TslGameMode.TslSLBGeneratorAlertVolume
// Size: 0x458 (Inherited: 0x438)  [layout: KHOP]
struct ATslSLBGeneratorAlertVolume : AVolume {
	struct FName GeneratorName; // 0x438(0x08)
	int32 Order; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct USceneComponent* PlaneComponent; // 0x448(0x08)
	struct ATslSLBMissionGeneratorActor* *74cf1d9604; // 0x450(0x08)
};

// Class TslGameMode.TslSLBHUDStageInfoWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBHUDStageInfoWidget : UUmgBaseWidget {
	struct TMap<enum class ETslSLBStage, struct FText> StageNames; // 0x420(0x50)
	struct FText NightmareName; // 0x470(0x18)
	struct FLinearColor NorTextColor; // 0x488(0x10)
	struct FLinearColor NightmareTextColor; // 0x498(0x10)
	struct UTextBlock* TextStage; // 0x4a8(0x08)
};

// Class TslGameMode.TslSLBHUDWidget
// Size: 0x550 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBHUDWidget : UTslEventDrivenBaseWidget {
	struct UTslSLBHUDStageInfoWidget* StageInfoWidget; // 0x440(0x08)
	struct UCanvasPanel* HeadWidgetManagerCanvasPanel; // 0x448(0x08)
	struct UTutorialMissionListWidget* TutorialMissionListWidget; // 0x450(0x08)
	struct UTextBlock* TextKillBind; // 0x458(0x08)
	struct UTslSLBHungerGaugeWidget* HungerGaugeWidget; // 0x460(0x08)
	struct UTslTeamInfoAdditionalIcon* AdditionalIcon; // 0x468(0x08)
	struct UWidgetSwitcher* KeyHint_Switcher; // 0x470(0x08)
	struct UWidgetSwitcher* SwitcherKilllIcon; // 0x478(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyHintPcIconCrafting; // 0x480(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyHintPcIconScoreBoard; // 0x488(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyHintPcIconRules; // 0x490(0x08)
	struct FSLBMissionUIData FuelMissionData; // 0x498(0x20)
	struct FSLBMissionUIData GeneratorMissionData; // 0x4b8(0x20)
	struct FText LastOpenGateText; // 0x4d8(0x18)
	struct UClass* MonsterHeadHPHelperClass; // 0x4f0(0x08)
	struct ATslPlayerStateBase* ViewTargetPlayerState; // 0x4f8(0x08)
	struct U*6db7134f63* MonsterHeadHPHelper; // 0x500(0x08)
	struct FName MaxHPOverlapId; // 0x508(0x08)
	struct TArray<struct UTslHealthGaugeData*> HealthGaugeDatasByMaxHPLevel; // 0x510(0x10)
	int32 SessionCountDownStartTime; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct FName SessionCountDownMessageName; // 0x528(0x08)
	char pad_530[0x20]; // 0x530(0x20)

	void OnGameUserSettingApplied(); // Function TslGameMode.TslSLBHUDWidget.OnGameUserSettingApplied //  // @ game+0xe1cdf04
	void OnLocalEndSpectatingState(); // Function TslGameMode.TslSLBHUDWidget.OnLocalEndSpectatingState //  // @ game+0xe1cec50
	void OnChangeMissionCount(); // Function TslGameMode.TslSLBHUDWidget.OnChangeMissionCount //  // @ game+0xe1cb67c
	void UpdateAllSLBDebuff(); // Function TslGameMode.TslSLBHUDWidget.UpdateAllSLBDebuff //  // @ game+0xe1ddddc
	void OnSLBModeMonsterAttacked(); // Function TslGameMode.TslSLBHUDWidget.OnSLBModeMonsterAttacked //  // @ game+0xe1d3e9c
	void OnWidgetShowChanged(); // Function TslGameMode.TslSLBHUDWidget.OnWidgetShowChanged //  // @ game+0xe1d7894
	void OnLocalBeginSpectatingState(); // Function TslGameMode.TslSLBHUDWidget.OnLocalBeginSpectatingState //  // @ game+0xe1cebd4
	void OnSLBDebuffUpdated(); // Function TslGameMode.TslSLBHUDWidget.OnSLBDebuffUpdated //  // @ game+0xe1d3da4
	void OnUpdateScore(); // Function TslGameMode.TslSLBHUDWidget.OnUpdateScore //  // @ game+0xe1d6a38
	void UpdateOpenLastGateMission(); // Function TslGameMode.TslSLBHUDWidget.UpdateOpenLastGateMission //  // @ game+0xe1ddec0
	void OnReset(); // Function TslGameMode.TslSLBHUDWidget.OnReset //  // @ game+0xe1d30a0
};

// Class TslGameMode.TslSLBHungerGaugeWidget
// Size: 0x4e0 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBHungerGaugeWidget : UTslEventDrivenBaseWidget {
	struct FVector4 SplitPoint; // 0x440(0x10)
	struct UImage* ImageIcon; // 0x450(0x08)
	struct UOverlay* PanelGauge; // 0x458(0x08)
	struct UImage* ImageGauge; // 0x460(0x08)
	struct UTextBlock* TextBlockTime; // 0x468(0x08)
	struct UMaterialInstanceDynamic* MIIcon; // 0x470(0x08)
	struct UMaterialInstanceDynamic* MIGauge; // 0x478(0x08)
	char pad_480[0x60]; // 0x480(0x60)

	void OnChangeHungerGauge(); // Function TslGameMode.TslSLBHungerGaugeWidget.OnChangeHungerGauge //  // @ game+0xe1cac60
	void CheckHungerGauge(); // Function TslGameMode.TslSLBHungerGaugeWidget.CheckHungerGauge //  // @ game+0xe1c00c0
};

// Class TslGameMode.TslSLBInteractionWidget
// Size: 0x490 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBInteractionWidget : UUmgBaseWidget {
	struct UTexture2D* IconGenerator; // 0x420(0x08)
	struct UTexture2D* IconRefueling; // 0x428(0x08)
	struct UTexture2D* IconHealing; // 0x430(0x08)
	struct UTexture2D* IconOpenLastDoor; // 0x438(0x08)
	struct FName ParameterNameFillAmount; // 0x440(0x08)
	float IconHeight; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UImage* ImageIcon; // 0x450(0x08)
	struct UImage* ImageGauge; // 0x458(0x08)
	struct UPanelWidget* SwitcherKeyGuideIcon; // 0x460(0x08)
	struct UMaterialInstanceDynamic* MaterialInteractionGauge; // 0x468(0x08)
	char pad_470[0x20]; // 0x470(0x20)
};

// Class TslGameMode.TslSLBInvincibleBuff
// Size: 0x510 (Inherited: 0x508)  [layout: KHOP]
struct ATslSLBInvincibleBuff : ATslReplicatedBuff {
	struct ATslSLBAICharacter* *4f4f5961e3; // 0x508(0x08)
};

// Class TslGameMode.TslSLBLightController
// Size: 0x300 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBLightController : UActorComponent {
	float *44c0ab1a4a; // 0x208(0x04)
	struct FName *1c2e5c317d; // 0x210(0x08)
	struct ATslPlayerController* *ec5b61d024; // 0x218(0x08)
	char pad_220[0x20]; // 0x220(0x20)
	struct TArray<struct ATslSLBControlLightIntensityVolume*> *0d8c2d5a42; // 0x240(0x10)
	char pad_250[0xb0]; // 0x250(0xb0)

	void Init(); // Function TslGameMode.TslSLBLightController.Init //  // @ game+0xe1c98b4
};

// Class TslGameMode.TslSLBLinkSplineEffect
// Size: 0x4c0 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBLinkSplineEffect : ATslServerParticle {
	struct ATslSLBAICharacter* *4f4f5961e3; // 0x440(0x08)
	struct USkeletalMeshComponent* *6f9b7df1bb; // 0x448(0x08)
	struct USkeletalMeshComponent* *bc60147bf0; // 0x450(0x08)
	struct FVector RelativeDoctorLoc; // 0x458(0x0c)
	float *669e4e7e8c; // 0x464(0x04)
	char pad_468[0x8]; // 0x468(0x08)
	struct UParticleSystem* *3b689f1835; // 0x470(0x08)
	float *7951b96301; // 0x478(0x04)
	char pad_47C[0xc]; // 0x47c(0x0c)
	struct UAkAudioEvent* *092430e9f8; // 0x488(0x08)
	struct UAkAudioEvent* *34e354db8a; // 0x490(0x08)
	struct FName *cdc9a7ee32; // 0x498(0x08)
	struct FName *c8865c5fee; // 0x4a0(0x08)
	enum class EThrowBuffType BuffType; // 0x4a8(0x01)
	char pad_4A9[0x17]; // 0x4a9(0x17)

	void SetBranchParameter(); // Function TslGameMode.TslSLBLinkSplineEffect.SetBranchParameter //  // @ game+0x43bab4
	void TurnOnLinkParticle(); // Function TslGameMode.TslSLBLinkSplineEffect.TurnOnLinkParticle //  // @ game+0x43bab4
};

// Class TslGameMode.*6e0f311e84
// Size: 0x80 (Inherited: 0x30)  [layout: KHOP]
struct U*6e0f311e84 : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct ATslSLBStageVolume* *bb68085e6a; // 0x50(0x08)
	struct UWorld* World; // 0x58(0x08)
	struct TArray<struct ATslSLBMissionGeneratorActor*> *20a2f8e466; // 0x60(0x10)
	struct ATslSLBExitActor* *58862b16d4; // 0x70(0x08)
	struct U*f67be583b8* *f67be583b8; // 0x78(0x08)

	void *97f0ccb362(); // Function TslGameMode.*6e0f311e84.*97f0ccb362 //  // @ game+0xe1d48a4
};

// Class TslGameMode.TslSLBPoisionDebuff
// Size: 0x548 (Inherited: 0x4e8)  [layout: KHOP]
struct ATslSLBPoisionDebuff : ATslBuff {
	char pad_4E8[0x30]; // 0x4e8(0x30)
	float *b582cde022; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct UClass* *c4837fc2d7; // 0x520(0x08)
	struct FText DamageCauserName; // 0x528(0x18)
	struct UTexture* *8d4a6197c0; // 0x540(0x08)
};

// Class TslGameMode.TslSLBProjectile_DecoyGrenade
// Size: 0xbb0 (Inherited: 0xba0)  [layout: KHOP]
struct ATslSLBProjectile_DecoyGrenade : AProjDecoyGrenade {
	struct F*ca82628ca4 BuffType; // 0xba0(0x10)

	void *b2591a6a9a(); // Function TslGameMode.TslSLBProjectile_DecoyGrenade.*b2591a6a9a //  // @ game+0xdbe3764
};

// Class TslGameMode.TslSLBProjectile_SmokeBomb
// Size: 0xb90 (Inherited: 0xb90)  [layout: KHOP]
struct ATslSLBProjectile_SmokeBomb : ATslProjectile_SmokeBomb {
};

// Class TslGameMode.TslSLBReactionComponent
// Size: 0xc00 (Inherited: 0xbf0)  [layout: KHOP]
struct UTslSLBReactionComponent : U*8627762d8c {
	bool *28533c967b; // 0xbf0(0x01)
	char pad_BF1[0x7]; // 0xbf1(0x07)
	struct UStaticMesh* ReactionStaticMesh; // 0xbf8(0x08)
};

// Class TslGameMode.TslSLBRespawnInteractionActor
// Size: 0x430 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBRespawnInteractionActor : AActor {
	struct UTslSLBRespawnInteractionComponent* *35ecfbdfff; // 0x400(0x08)
	struct UStaticMeshComponent* InteractionMeshComp; // 0x408(0x08)
	struct USceneComponent* RespawnLocation; // 0x410(0x08)
	struct FName *9b7abce32f; // 0x418(0x08)
	float *81fcc0d63f; // 0x420(0x04)
	bool *0777a845d8; // 0x424(0x01)
	char pad_425[0xb]; // 0x425(0x0b)

	void OnServerInteractionSucceed(); // Function TslGameMode.TslSLBRespawnInteractionActor.OnServerInteractionSucceed //  // @ game+0xe1d4268
};

// Class TslGameMode.TslSLBRespawnInteractionComponent
// Size: 0x7c0 (Inherited: 0x7c0)  [layout: KHOP]
struct UTslSLBRespawnInteractionComponent : U*4a95730744 {
	struct UPrimitiveComponent* *522e88278e; // 0x7b8(0x08)
};

// Class TslGameMode.TslSLBResultRewardItemWidget
// Size: 0x378 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBResultRewardItemWidget : UTslUserWidget {
	char pad_330[0x28]; // 0x330(0x28)
	struct UImage* ImageRewardItem; // 0x358(0x08)
	struct UTextBlock* RewardItemCount; // 0x360(0x08)
	struct U*7fa8406bd3* AnimNormal; // 0x368(0x08)
	struct U*7fa8406bd3* AnimSpecial; // 0x370(0x08)
};

// Class TslGameMode.TslSLBResultWidget
// Size: 0x5f8 (Inherited: 0x490)  [layout: KHOP]
struct UTslSLBResultWidget : UBaseResultWidget {
	struct FText RemainTimeFormatText; // 0x490(0x18)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct UTextBlock* TextTitle; // 0x4c8(0x08)
	struct UTextBlock* TextTag; // 0x4d0(0x08)
	struct UTslSLBSelectDifficultyViewWidget* DifficultyView; // 0x4d8(0x08)
	struct UTextBlock* TextTitleReward; // 0x4e0(0x08)
	struct UTextBlock* TextAPValue; // 0x4e8(0x08)
	struct UGridPanel* PanelReward; // 0x4f0(0x08)
	struct UTextBlock* TextLobbyTimer; // 0x4f8(0x08)
	struct UTslCommonButton* ButtonLobby; // 0x500(0x08)
	struct UTslCommonButton* ButtonSpactate; // 0x508(0x08)
	struct UUmgBaseWidget* KeyGuideSpectate; // 0x510(0x08)
	struct UWrapBox* ListRewardItems; // 0x518(0x08)
	struct U*7fa8406bd3* AnimShow; // 0x520(0x08)
	struct TMap<int32, struct FText> TextTagMap; // 0x528(0x50)
	struct TMap<enum class ETslSLBStageDifficulty, struct FText> TextTitleRewardMap; // 0x578(0x50)
	struct UClass* RewardItemWidgetClass; // 0x5c8(0x08)
	struct TArray<struct UTslSLBResultRewardItemWidget*> RewardItems; // 0x5d0(0x10)
	struct UAkAudioEvent* WinBGM; // 0x5e0(0x08)
	struct UAkAudioEvent* LoseBGM; // 0x5e8(0x08)
	struct UAkAudioEvent* SpectatorEvent; // 0x5f0(0x08)

	void OnChangeAPReward(); // Function TslGameMode.TslSLBResultWidget.OnChangeAPReward //  // @ game+0xe1cac4c
	void OnClicked_ButtonLobby(); // Function TslGameMode.TslSLBResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
	void OnBReleased(); // Function TslGameMode.TslSLBResultWidget.OnBReleased //  // @ game+0xe1ca990
	void OnClickedButtonSpectate(); // Function TslGameMode.TslSLBResultWidget.OnClickedButtonSpectate //  // @ game+0xe1cb97c
	void OnBPressed(); // Function TslGameMode.TslSLBResultWidget.OnBPressed //  // @ game+0xe1ca958
};

// Class TslGameMode.TslSLBSafeArea
// Size: 0x470 (Inherited: 0x448)  [layout: KHOP]
struct ATslSLBSafeArea : ANavModifierVolume {
	bool bStageStart; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float *ed6ec6c10f; // 0x44c(0x04)
	float *4a938e7167; // 0x450(0x04)
	char pad_454[0x14]; // 0x454(0x14)
	struct UBrushComponent* *714b444380; // 0x468(0x08)
};

// Class TslGameMode.TslSLBScoreBoardPlayerWidget
// Size: 0x358 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBScoreBoardPlayerWidget : UTslUserWidget {
	struct UTextBlock* TextRank; // 0x330(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformIcon; // 0x338(0x08)
	struct UTextBlock* TextPlayerName; // 0x340(0x08)
	struct UTextBlock* TextKill; // 0x348(0x08)
	struct UTextBlock* TextRescue; // 0x350(0x08)
};

// Class TslGameMode.TslSLBScoreBoardWidget
// Size: 0x380 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBScoreBoardWidget : UTslUserWidget {
	int32 MyCharacterBgSpacing; // 0x330(0x04)
	struct FLinearColor ColorDefault; // 0x334(0x10)
	struct FLinearColor ColorMyCharacter; // 0x344(0x10)
	char pad_354[0x4]; // 0x354(0x04)
	struct UImage* ImageMyCharacterBg; // 0x358(0x08)
	struct UWrapBox* ListPlayerInfo; // 0x360(0x08)
	struct UTslSLBStageInfoWidget* StageInfo; // 0x368(0x08)
	struct TArray<struct UTslSLBScoreBoardPlayerWidget*> PlayerWidgets; // 0x370(0x10)
};

// Class TslGameMode.TslSLBSelectDifficultyButtonWidget
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectDifficultyButtonWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct FText Label; // 0x430(0x18)
	enum class ETslSLBStageDifficulty ID; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UTextBlock* TextName; // 0x450(0x08)
	struct UTslCommonButton* Button; // 0x458(0x08)
	struct UTslSLBSelectStageVoteWidget* VoteStatus; // 0x460(0x08)
	struct UTslSLBDifficultyIconWidget* IconDifficulty; // 0x468(0x08)

	void HandleOnClick(); // Function TslGameMode.TslSLBSelectDifficultyButtonWidget.HandleOnClick //  // @ game+0xe1c72e8
};

// Class TslGameMode.TslSLBSelectDifficultyListWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectDifficultyListWidget : UUmgBaseWidget {
	char pad_420[0x20]; // 0x420(0x20)
	struct TArray<struct UTslSLBSelectDifficultyButtonWidget*> ButtonArray; // 0x440(0x10)
	struct TMap<enum class ETslSLBStageDifficulty, struct UTslSLBSelectDifficultyButtonWidget*> ButtonMap; // 0x450(0x50)
	struct UHorizontalBox* PanelList; // 0x4a0(0x08)

	void HandleOnClick(); // Function TslGameMode.TslSLBSelectDifficultyListWidget.HandleOnClick //  // @ game+0xe1c731c
};

// Class TslGameMode.TslSLBSelectDifficultyViewWidget
// Size: 0x458 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectDifficultyViewWidget : UUmgBaseWidget {
	enum class ETslSLBStageDifficulty ID; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FText Name; // 0x428(0x18)
	float FontSize; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UTextBlock* TextName; // 0x448(0x08)
	struct UTslSLBDifficultyIconWidget* IconDifficulty; // 0x450(0x08)
};

// Class TslGameMode.TslSLBSelectRewardGroupWidget
// Size: 0x358 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBSelectRewardGroupWidget : UTslUserWidget {
	struct UPanelWidget* PanelRewardGroup; // 0x330(0x08)
	struct TArray<struct UTslSLBSelectRewardWidget*> RewardWidgetArray; // 0x338(0x10)
	struct TArray<struct FSLBUISelectRewardData> CachedDatas; // 0x348(0x10)
};

// Class TslGameMode.TslSLBSelectRewardWidget
// Size: 0x3b0 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBSelectRewardWidget : UTslUserWidget {
	struct UImage* ImageRewardItem; // 0x330(0x08)
	struct UTextBlock* TextItemName; // 0x338(0x08)
	struct UTextBlock* TextItemDescription; // 0x340(0x08)
	struct UHorizontalBox* ListHistory; // 0x348(0x08)
	struct TArray<struct UTslSLBSelectStageHistoryWidget*> HistoryIconArray; // 0x350(0x10)
	struct FSLBUISelectRewardData CachedData; // 0x360(0x50)

	void OnAsyncLoadIconFinished(); // Function TslGameMode.TslSLBSelectRewardWidget.OnAsyncLoadIconFinished //  // @ game+0xe1ca804
};

// Class TslGameMode.TslSLBSelectStageButtonWidget
// Size: 0x500 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectStageButtonWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	enum class ETslSLBStage ID; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FText ButtonName; // 0x438(0x18)
	struct UTexture2D* TextureStage; // 0x450(0x08)
	struct TMap<enum class ETslSLBStageDifficulty, struct UTexture2D*> DifficultyTexture; // 0x458(0x50)
	struct TArray<struct UTslSLBSelectStageHistoryWidget*> HistoryIconArray; // 0x4a8(0x10)
	struct UTslSLBDifficultyIconWidget* IconDifficulty; // 0x4b8(0x08)
	struct UImage* ImageStage; // 0x4c0(0x08)
	struct UImage* ImageConsol; // 0x4c8(0x08)
	struct UTextBlock* TextName; // 0x4d0(0x08)
	struct UTslCommonButton* Button; // 0x4d8(0x08)
	struct UTslSLBSelectStageVoteWidget* VoteStatus; // 0x4e0(0x08)
	struct UBorder* PanelHistoryBorder; // 0x4e8(0x08)
	struct UWrapBox* ListHistory; // 0x4f0(0x08)
	struct USizeBox* PanelMyHistory; // 0x4f8(0x08)

	void HandleOnClick(); // Function TslGameMode.TslSLBSelectStageButtonWidget.HandleOnClick //  // @ game+0xe1c73a4
};

// Class TslGameMode.TslSLBSelectStageHistoryWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBSelectStageHistoryWidget : UUmgBaseWidget {
	struct UBorder* PlayerColorBorder; // 0x420(0x08)
	struct UTextBlock* NumberTextBlock; // 0x428(0x08)
	struct UTslSLBDifficultyIconWidget* IconDifficulty; // 0x430(0x08)
	bool bShowIconDifficulty; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// Class TslGameMode.TslSLBSelectStageListWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectStageListWidget : UUmgBaseWidget {
	char pad_420[0x28]; // 0x420(0x28)
	struct TArray<struct UTslSLBSelectStageButtonWidget*> ButtonArray; // 0x448(0x10)
	struct TMap<enum class ETslSLBStage, struct UTslSLBSelectStageButtonWidget*> ButtonMap; // 0x458(0x50)
	struct UWrapBox* PanelList; // 0x4a8(0x08)

	void HandleOnClick(); // Function TslGameMode.TslSLBSelectStageListWidget.HandleOnClick //  // @ game+0xe1c731c
};

// Class TslGameMode.TslSLBSelectStageVoteWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UTslSLBSelectStageVoteWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UImage* ImageMine; // 0x430(0x08)
	struct UImage* ImageP1; // 0x438(0x08)
	struct UImage* ImageP2; // 0x440(0x08)
	struct UImage* ImageP3; // 0x448(0x08)
};

// Class TslGameMode.TslSLBSelectStageWidget
// Size: 0x5e8 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBSelectStageWidget : UBlockInputUserWidget {
	struct TMap<enum class ETslSLBStage, struct UTexture2D*> StageTexture; // 0x470(0x50)
	struct UTslSLBSelectStageListWidget* StageList; // 0x4c0(0x08)
	struct UTslSLBSelectDifficultyListWidget* DifficultyList; // 0x4c8(0x08)
	struct UImage* ImageDestination; // 0x4d0(0x08)
	struct UTslSLBStageInfoWidget* StageInfo; // 0x4d8(0x08)
	struct UTslSLBSelectRewardGroupWidget* PanelRewardGroup; // 0x4e0(0x08)
	struct UTslRoundTimeWidget* Timer; // 0x4e8(0x08)
	struct UAkAudioEvent* OpenEvent; // 0x4f0(0x08)
	struct UAkAudioEvent* CloseEvent; // 0x4f8(0x08)
	struct UAkAudioEvent* SelectStageEvent; // 0x500(0x08)
	char pad_508[0xe0]; // 0x508(0xe0)

	void HandleOnClickDifficulty(); // Function TslGameMode.TslSLBSelectStageWidget.HandleOnClickDifficulty //  // @ game+0xe1c73d8
	void OnPressedConsolY(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolY //  // @ game+0xe1d0ffc
	void RemainTimeTimer(); // Function TslGameMode.TslSLBSelectStageWidget.RemainTimeTimer //  // @ game+0xe1d7ccc
	void OnPressedConsolMoveRight(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolMoveRight //  // @ game+0xe1d0fb8
	void OnPressedConsolMoveUp(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolMoveUp //  // @ game+0xe1d0fe8
	void OnPressedConsolMoveDown(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolMoveDown //  // @ game+0xe1d0f68
	void OnPressedConsolA(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolA //  // @ game+0xe1d0f38
	void CloseWidget(); // Function TslGameMode.TslSLBSelectStageWidget.CloseWidget //  // @ game+0xe1c4784
	void HandleOnClickStage(); // Function TslGameMode.TslSLBSelectStageWidget.HandleOnClickStage //  // @ game+0xe1c7450
	void OnPressedConsolMoveLeft(); // Function TslGameMode.TslSLBSelectStageWidget.OnPressedConsolMoveLeft //  // @ game+0xe1d0f90
};

// Class TslGameMode.TslSLBStageFogController
// Size: 0x410 (Inherited: 0x400)  [layout: KHOP]
struct ATslSLBStageFogController : AActor {
	struct TArray<struct F*5e5a28681a> *3a31fb6f90; // 0x400(0x10)
};

// Class TslGameMode.TslSLBStageInfoWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UTslSLBStageInfoWidget : UTslUserWidget {
	struct UTextBlock* TextDestinationStage; // 0x330(0x08)
	struct UTslSLBSelectDifficultyViewWidget* DifficultyView; // 0x338(0x08)
};

// Class TslGameMode.TslSLBStageVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBStageVolume : AVolume {
	enum class ETslSLBStage Stage; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// Class TslGameMode.TslSLBStaticFence
// Size: 0x5e8 (Inherited: 0x5e0)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBStaticFence : ATslStaticFence {
	struct FLightingChannels *a7660e65b5; // 0x5e0(0x03)
	char pad_5E3[0x5]; // 0x5e3(0x05)
};

// Class TslGameMode.TslSLBWeapon_DecoyGrenade
// Size: 0xcb0 (Inherited: 0xc90)  [layout: LECH - offset chi la uoc luong]
struct ATslSLBWeapon_DecoyGrenade : AWeapDecoyGrenade {
	char pad_C90[0x8]; // 0xc90(0x08)
	struct F*ca82628ca4 BuffType; // 0xc98(0x10)
	char pad_CA8[0x8]; // 0xca8(0x08)

	void OnServerFire(); // Function TslGameMode.TslSLBWeapon_DecoyGrenade.OnServerFire //  // @ game+0xe1d4050
};

// Class TslGameMode.TslSLBZombieAnimInstance
// Size: 0x8f8 (Inherited: 0x8f0)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBZombieAnimInstance : U*49da7d7689 {
	bool bIsBaseZombie; // 0x8f0(0x01)
	bool bIsChasing; // 0x8f1(0x01)
	char pad_8F2[0x6]; // 0x8f2(0x06)
};

// Class TslGameMode.TslSLBZombieSpawner
// Size: 0x458 (Inherited: 0x400)  [layout: KHOP]
struct ATslSLBZombieSpawner : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct FVector *a91a8bfa3f; // 0x408(0x0c)
	bool *ab4428198d; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float *b7b8717ca2; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UBoxComponent* BoxComponent; // 0x420(0x08)
	struct TArray<struct ATslSLBZombieSpawner*> *78f2706992; // 0x428(0x10)
	struct TArray<struct F*df1a3bcebf> *51ae53bba5; // 0x438(0x10)
	struct TArray<struct ATslSLBAICharacter*> *05f9c8bc68; // 0x448(0x10)
};

// Class TslGameMode.TslSLBZombieSpawnManager
// Size: 0x290 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslSLBZombieSpawnManager : UObject {
	struct UDataTable* ZombieSpawnEventDataTable; // 0x30(0x08)
	struct UDataTable* ZombieStatusTable; // 0x38(0x08)
	struct UDataTable* ZombieStatusTable_Console; // 0x40(0x08)
	struct UDataTable* ZombieMovementDataTable; // 0x48(0x08)
	struct UDataTable* ZombieMovementDataTable_Console; // 0x50(0x08)
	int32 *7ac94c1668; // 0x58(0x04)
	int32 *c1377cd39f; // 0x5c(0x04)
	float TickTime; // 0x60(0x04)
	float *b6dadf7698; // 0x64(0x04)
	float *0dad3b979f; // 0x68(0x04)
	char pad_6C[0x144]; // 0x6c(0x144)
	struct UWorld* World; // 0x1b0(0x08)
	struct U*615dc8b7ce* *9e774c4193; // 0x1b8(0x08)
	char pad_1C0[0xd0]; // 0x1c0(0xd0)

	void *c2cebe51c9(); // Function TslGameMode.TslSLBZombieSpawnManager.*c2cebe51c9 //  // @ game+0xe1dc97c
	void *fc714db897(); // Function TslGameMode.TslSLBZombieSpawnManager.*fc714db897 //  // @ game+0xe1ccd80
};

// Class TslGameMode.TslSpikeTrapActor_Character
// Size: 0x548 (Inherited: 0x530)  [layout: LECH - offset chi la uoc luong]
struct ATslSpikeTrapActor_Character : ATslSpikeTrapActor {
	struct UClass* *9a80f66fcc; // 0x530(0x08)
	int32 *d72c8b167b; // 0x538(0x04)
	char pad_53C[0xc]; // 0x53c(0x0c)

	void *a80a9a8a51(); // Function TslGameMode.TslSpikeTrapActor_Character.*a80a9a8a51 //  // @ game+0xdbdc99c
	void *9ebda9bfde(); // Function TslGameMode.TslSpikeTrapActor_Character.*9ebda9bfde //  // @ game+0xdae4228
};

// Class TslGameMode.TslTrainingCharacterPropertyOverrider
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UTslTrainingCharacterPropertyOverrider : U*a2b2e3a9ec {
};

// Class TslGameMode.TslTrainingCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UTslTrainingCheatManager : UTslCheatManager {

	void Spawn_SavedEquipmentSet(); // Function TslGameMode.TslTrainingCheatManager.Spawn_SavedEquipmentSet //  // @ game+0x1053c04
	void WriteJson_SavedEquipmentSet(); // Function TslGameMode.TslTrainingCheatManager.WriteJson_SavedEquipmentSet //  // @ game+0x1053c04
	void ShowOneOnOneArenaWinningStreak(); // Function TslGameMode.TslTrainingCheatManager.ShowOneOnOneArenaWinningStreak //  // @ game+0x1053c04
	void AddTestTrainingData(); // Function TslGameMode.TslTrainingCheatManager.AddTestTrainingData //  // @ game+0xda977bc
};

// Class TslGameMode.TslTrainingDashboardCanvasWidget
// Size: 0x490 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardCanvasWidget : UUmgBaseWidget {
	struct UButton* ExitButton; // 0x420(0x08)
	struct UButton* AimTrainingButton; // 0x428(0x08)
	struct UButton* SoundTrainingButton; // 0x430(0x08)
	struct UButton* RecordRange10Button; // 0x438(0x08)
	struct UButton* RecordRange50Button; // 0x440(0x08)
	struct UButton* RecordRange100Button; // 0x448(0x08)
	struct UWidgetSwitcher* RecordInfoSwitcher; // 0x450(0x08)
	struct UTslTrainingDashboardInfoWidgetBase* LatestAimRecordInfoWidget; // 0x458(0x08)
	struct UTslTrainingDashboardInfoWidgetBase* BestAimRecordInfoWidget; // 0x460(0x08)
	struct UTslTrainingDashboardInfoWidgetBase* LatestSoundRecordInfoWidget; // 0x468(0x08)
	struct UTslTrainingDashboardInfoWidgetBase* BestSoundRecordInfoWidget; // 0x470(0x08)
	struct UTslTrainingDashboardGraphWidget* RecordGraphWidget; // 0x478(0x08)
	struct UCanvasPanel* EmptyDataBlockerPanel; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)

	void OnHoveredButton(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnHoveredButton //  // @ game+0x1053c04
	void OnSoundTrainingButton(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnSoundTrainingButton //  // @ game+0xe1d4a40
	void OnDashboardRange10Button(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnDashboardRange10Button //  // @ game+0xe1cc2cc
	void OnCloseDashboard(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnCloseDashboard //  // @ game+0xe1cbff8
	void OnAimTrainingButton(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnAimTrainingButton //  // @ game+0xe1ca754
	void OnDashboardRange50Button(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnDashboardRange50Button //  // @ game+0xe1cc2e8
	void OnDashboardRange100Button(); // Function TslGameMode.TslTrainingDashboardCanvasWidget.OnDashboardRange100Button //  // @ game+0xe1cc2b0
};

// Class TslGameMode.TslTrainingDashboardGraphWidget
// Size: 0x310 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardGraphWidget : UUserWidget {
	struct UTextBlock* BestScoreText; // 0x258(0x08)
	struct UTextBlock* MedianScoreText; // 0x260(0x08)
	struct UTextBlock* AverageScoreText; // 0x268(0x08)
	struct UTextBlock* ScoreMaximumDeviationText; // 0x270(0x08)
	struct UVerticalBox* TextContainerBox; // 0x278(0x08)
	struct UBorder* GraphContainerBorder; // 0x280(0x08)
	struct USlateBrushAsset* DotSlateBrushAsset; // 0x288(0x08)
	int32 DotWidth; // 0x290(0x04)
	int32 DotHeight; // 0x294(0x04)
	float GraphHeightLimitRatio; // 0x298(0x04)
	char pad_29C[0x74]; // 0x29c(0x74)
};

// Class TslGameMode.TslTrainingDashboardInfoWidgetBase
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingDashboardInfoWidgetBase : UUmgBaseWidget {
	struct UTextBlock* InfoTypeText; // 0x420(0x08)
};

// Class TslGameMode.TslTrainingDashboardAimInfoWidget
// Size: 0x478 (Inherited: 0x428)  [layout: KHOP]
struct UTslTrainingDashboardAimInfoWidget : UTslTrainingDashboardInfoWidgetBase {
	struct UTextBlock* ScoreText; // 0x428(0x08)
	struct UTextBlock* AccuracyText; // 0x430(0x08)
	struct UTextBlock* HeadShotKillText; // 0x438(0x08)
	struct UTextBlock* KillText; // 0x440(0x08)
	struct UTextBlock* WeaponText; // 0x448(0x08)
	struct UTextBlock* HeadHitText; // 0x450(0x08)
	struct UTextBlock* ArmHitText; // 0x458(0x08)
	struct UTextBlock* TorsoHitText; // 0x460(0x08)
	struct UTextBlock* PelvisHitText; // 0x468(0x08)
	struct UTextBlock* LegHitText; // 0x470(0x08)
};

// Class TslGameMode.TslTrainingDashboardSoundInfoWidget
// Size: 0x448 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardSoundInfoWidget : UTslTrainingDashboardInfoWidgetBase {
	struct UTextBlock* ScoreText; // 0x428(0x08)
	struct UTextBlock* AccuracyText; // 0x430(0x08)
	struct UTextBlock* ReactionRateText; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
};

// Class TslGameMode.TslTrainingDashboardRecordWidget
// Size: 0x3c0 (Inherited: 0x330)  [layout: KHOP]
struct UTslTrainingDashboardRecordWidget : UTslUserWidget {
	struct UTextBlock* TextTitleBind; // 0x330(0x08)
	struct UTextBlock* TextScoreBind; // 0x338(0x08)
	struct UTextBlock* TextKillCountBind; // 0x340(0x08)
	struct U*7fa8406bd3* AnimAppearBind; // 0x348(0x08)
	enum class ETslTrainingDashboardPracticeUIType DashboardPracticeType; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FText TitleText; // 0x358(0x18)
	struct FTslTrainingDashboardRecordUIData CachedUIData; // 0x370(0x50)
};

// Class TslGameMode.TslTrainingDashboardRecordAimWidget
// Size: 0x440 (Inherited: 0x3c0)  [layout: KHOP]
struct UTslTrainingDashboardRecordAimWidget : UTslTrainingDashboardRecordWidget {
	struct UTextBlock* TextHeadShotCountBind; // 0x3c0(0x08)
	struct UTextBlock* TextAccuracyBind; // 0x3c8(0x08)
	struct UTextBlock* TextWeaponNameBind; // 0x3d0(0x08)
	struct UImage* ImagePersonHeadBind; // 0x3d8(0x08)
	struct UImage* ImagePersonTorsoBind; // 0x3e0(0x08)
	struct UImage* ImagePersonArmBind; // 0x3e8(0x08)
	struct UImage* ImagePersonPelvisBind; // 0x3f0(0x08)
	struct UImage* ImagePersonLegBind; // 0x3f8(0x08)
	struct UWidget* PanelPersonValuesBind; // 0x400(0x08)
	struct UTextBlock* TextHeadValueBind; // 0x408(0x08)
	struct UTextBlock* TextTorsoValueBind; // 0x410(0x08)
	struct UTextBlock* TextArmValueBind; // 0x418(0x08)
	struct UTextBlock* TextPelvisValueBind; // 0x420(0x08)
	struct UTextBlock* TextLegValueBind; // 0x428(0x08)
	struct TArray<struct FLinearColor> HitRatioStepColors; // 0x430(0x10)
};

// Class TslGameMode.TslTrainingDashboardRecordSoundWidget
// Size: 0x3d8 (Inherited: 0x3c0)  [layout: KHOP]
struct UTslTrainingDashboardRecordSoundWidget : UTslTrainingDashboardRecordWidget {
	struct UTextBlock* TextAverageResponseTimeBind; // 0x3c0(0x08)
	struct UImage* ImageBackgroundBind; // 0x3c8(0x08)
	struct UTexture2D* BackgroundImage; // 0x3d0(0x08)
};

// Class TslGameMode.TslTrainingDashboardScoreHistoryChartLinesWidget
// Size: 0x350 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardScoreHistoryChartLinesWidget : UTslUserWidget {
	char pad_330[0x20]; // 0x330(0x20)
};

// Class TslGameMode.TslTrainingDashboardScoreHistoryChartWidget
// Size: 0x440 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardScoreHistoryChartWidget : UTslUserWidget {
	struct UWidgetSwitcher* SwitcherChartBgBind; // 0x330(0x08)
	struct UImage* ImageRecentryLineBind; // 0x338(0x08)
	struct USizeBox* SizeboxChartBind; // 0x340(0x08)
	struct UTslTrainingDashboardScoreHistoryChartLinesWidget* WidgetChartLinesBind; // 0x348(0x08)
	struct UPanelWidget* PanelChartPointContainerBind; // 0x350(0x08)
	struct UImage* ImageChartPointBind; // 0x358(0x08)
	struct UImage* ImageChartPointLastBind; // 0x360(0x08)
	struct UTextBlock* TextFirstScoreBind; // 0x368(0x08)
	struct UTextBlock* TextBestScoreBind; // 0x370(0x08)
	struct UTextBlock* TextWorstScoreBind; // 0x378(0x08)
	struct UTextBlock* TextLastScoreBind; // 0x380(0x08)
	struct U*7fa8406bd3* AnimHideTextGroupBind; // 0x388(0x08)
	struct U*7fa8406bd3* AnimAppearTextGroupBind; // 0x390(0x08)
	struct UAkAudioEvent* ScoreHistoryChartStartSoundEvent; // 0x398(0x08)
	struct UAkAudioEvent* ScoreHistoryChartEndSoundEvent; // 0x3a0(0x08)
	struct FTslTrainingDashboardScoreHistoryChartWidgetSettings Settings; // 0x3a8(0x24)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FTslTrainingDashboardScoreHistoryChartWidgetCachedDatas CachedDatas; // 0x3d0(0x28)
	struct TArray<struct UImage*> ChartPointImagePool; // 0x3f8(0x10)
	char pad_408[0x38]; // 0x408(0x38)
};

// Class TslGameMode.TslTrainingDashboardScoreHistoryWidget
// Size: 0x3c8 (Inherited: 0x330)  [layout: KHOP]
struct UTslTrainingDashboardScoreHistoryWidget : UTslUserWidget {
	struct UTextBlock* TextTopScoreBind; // 0x330(0x08)
	struct UTextBlock* TextMedianScoreBind; // 0x338(0x08)
	struct UTextBlock* TextAverageScoreBind; // 0x340(0x08)
	struct UTextBlock* TextChangedScoreBind; // 0x348(0x08)
	struct UTslTrainingDashboardScoreHistoryChartWidget* WidgetChartBind; // 0x350(0x08)
	struct FTslTrainingDashboardScoreHistoryWidgetSettings Settings; // 0x358(0x70)
};

// Class TslGameMode.TslTrainingDashboardTabButtonWidget
// Size: 0x4a0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardTabButtonWidget : UTslUserWidget {
	struct UButton* WidgetButtonBind; // 0x330(0x08)
	struct UTextBlock* TextLabelBind; // 0x338(0x08)
	struct UWidget* WidgetSelectedBind; // 0x340(0x08)
	struct FText Label; // 0x348(0x18)
	struct FSlateColor SlateColorLabelNormal; // 0x360(0x28)
	struct FSlateColor SlateColorLabelSelected; // 0x388(0x28)
	char pad_3B0[0xf0]; // 0x3b0(0xf0)

	void HandleButtonHovered(); // Function TslGameMode.TslTrainingDashboardTabButtonWidget.HandleButtonHovered //  // @ game+0xe1c6e08
	void HandleButtonClicked(); // Function TslGameMode.TslTrainingDashboardTabButtonWidget.HandleButtonClicked //  // @ game+0xe1c6dd0
};

// Class TslGameMode.TslTrainingDashboardTabGroupWidget
// Size: 0x470 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardTabGroupWidget : UTslUserWidget {
	struct UHorizontalBox* PanelButtonGroupBind; // 0x330(0x08)
	int32 SelectedIndex; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TMap<int32, struct UTslTrainingDashboardTabButtonWidget*> TabButtonMap; // 0x340(0x50)
	char pad_390[0xe0]; // 0x390(0xe0)
};

// Class TslGameMode.TslTrainingDashboardPracticeTypeTabGroupWidget
// Size: 0x470 (Inherited: 0x470)  [layout: KHOP]
struct UTslTrainingDashboardPracticeTypeTabGroupWidget : UTslTrainingDashboardTabGroupWidget {

	void HandleGamepadLBReleased(); // Function TslGameMode.TslTrainingDashboardPracticeTypeTabGroupWidget.HandleGamepadLBReleased //  // @ game+0xe1c7130
	void HandleGamepadRBReleased(); // Function TslGameMode.TslTrainingDashboardPracticeTypeTabGroupWidget.HandleGamepadRBReleased //  // @ game+0xe1c71ec
};

// Class TslGameMode.TslTrainingDashboardRangeTabGroupWidget
// Size: 0x470 (Inherited: 0x470)  [layout: KHOP]
struct UTslTrainingDashboardRangeTabGroupWidget : UTslTrainingDashboardTabGroupWidget {

	void HandleGamepadRThumbLeft(); // Function TslGameMode.TslTrainingDashboardRangeTabGroupWidget.HandleGamepadRThumbLeft //  // @ game+0xe1c720c
	void HandleGamepadRThumbRight(); // Function TslGameMode.TslTrainingDashboardRangeTabGroupWidget.HandleGamepadRThumbRight //  // @ game+0xe1c7220
};

// Class TslGameMode.TslTrainingDashboardWidget
// Size: 0x690 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingDashboardWidget : UBlockInputUserWidget {
	struct UTslTrainingDashboardPracticeTypeTabGroupWidget* WidgetPracticeTypeTabGroupBind; // 0x470(0x08)
	struct UTslTrainingDashboardRangeTabGroupWidget* WidgetDashboardRangeTabGroupBind; // 0x478(0x08)
	struct UTextBlock* TextDetailsTitleBind; // 0x480(0x08)
	struct UWidgetSwitcher* SwitcherRecordsBind; // 0x488(0x08)
	struct UTslTrainingDashboardRecordWidget* WidgetRecordAimRecentBind; // 0x490(0x08)
	struct UTslTrainingDashboardRecordWidget* WidgetRecordAimHighestBind; // 0x498(0x08)
	struct UTslTrainingDashboardRecordWidget* WidgetRecordSoundRecentBind; // 0x4a0(0x08)
	struct UTslTrainingDashboardRecordWidget* WidgetRecordSoundHighestBind; // 0x4a8(0x08)
	struct UTslTrainingDashboardScoreHistoryWidget* WidgetScoreHistoryBind; // 0x4b0(0x08)
	struct UTslCommonButton* ButtonExitBind; // 0x4b8(0x08)
	struct UTslCommonButton* ButtonTrainingMenuBind; // 0x4c0(0x08)
	struct UTslCommonButton* ButtonRepeatBind; // 0x4c8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* GamepadButtonRepeat; // 0x4d0(0x08)
	struct FTslTrainingDashboardWidgetSettings Settings; // 0x4d8(0x38)
	struct FTslTrainingDashboardWidgetDatas CachedUIDatas; // 0x510(0x168)
	char pad_678[0x18]; // 0x678(0x18)

	void OnKeypadReleasedB(); // Function TslGameMode.TslTrainingDashboardWidget.OnKeypadReleasedB //  // @ game+0xe1ceb78
	void HandleButtonRepeatButtonClicked(); // Function TslGameMode.TslTrainingDashboardWidget.HandleButtonRepeatButtonClicked //  // @ game+0xe1c6e2c
	void HandleButtonHoverd(); // Function TslGameMode.TslTrainingDashboardWidget.HandleButtonHoverd //  // @ game+0xe195788
	void OnKeypadPressedX(); // Function TslGameMode.TslTrainingDashboardWidget.OnKeypadPressedX //  // @ game+0xe1ceb48
	void HandleExitButtonClicked(); // Function TslGameMode.TslTrainingDashboardWidget.HandleExitButtonClicked //  // @ game+0xe1c7000
	void HandleTrainingMenuButtonClicked(); // Function TslGameMode.TslTrainingDashboardWidget.HandleTrainingMenuButtonClicked //  // @ game+0xe1c9848
	void OnKeypadPressedB(); // Function TslGameMode.TslTrainingDashboardWidget.OnKeypadPressedB //  // @ game+0xe1ceb18
	void OnKeypadReleasedX(); // Function TslGameMode.TslTrainingDashboardWidget.OnKeypadReleasedX //  // @ game+0xe1ceb98
};

// Class TslGameMode.ParachuteExperienceActor
// Size: 0x420 (Inherited: 0x408)  [layout: KHOP]
struct AParachuteExperienceActor : ATslTrainingInteractableActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x408(0x08)
	float TeleportMaxXYRadius; // 0x410(0x04)
	float TeleportZDistance; // 0x414(0x04)
	struct FName ParachuteItemID; // 0x418(0x08)

	void *8c25aea5f6(); // Function TslGameMode.ParachuteExperienceActor.*8c25aea5f6 //  // @ game+0xdb743d8
	void *d7e06f2a53(); // Function TslGameMode.ParachuteExperienceActor.*d7e06f2a53 //  // @ game+0xe1dd05c
	void HandleOnOneOnOneStopSearchPopup(); // Function TslGameMode.ParachuteExperienceActor.HandleOnOneOnOneStopSearchPopup //  // @ game+0xe1c7548
};

// Class TslGameMode.TslTrainingMenuButtonWidget
// Size: 0x4b8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingMenuButtonWidget : UUmgBaseWidget {
	struct FText TrainingTitleText; // 0x420(0x18)
	struct FText TrainingDetailText; // 0x438(0x18)
	struct UTexture2D* ButtonImageTexture; // 0x450(0x08)
	enum class ETrainingPracticeType PracticeType; // 0x458(0x01)
	char pad_459[0x17]; // 0x459(0x17)
	struct FVector2D TrainingMenuButtonHoveredScale; // 0x470(0x08)
	struct FVector2D TrainingMenuButtonUnHoveredScale; // 0x478(0x08)
	struct UTextBlock* TitleText; // 0x480(0x08)
	struct UTextBlock* DetailText; // 0x488(0x08)
	struct UImage* ButtonImage; // 0x490(0x08)
	struct UImage* ConsoleHighlight; // 0x498(0x08)
	struct UButton* TrainingMenuButton; // 0x4a0(0x08)
	struct USizeBox* TrainingMenuButtonSizeBox; // 0x4a8(0x08)
	char pad_4B0[0x8]; // 0x4b0(0x08)

	void OnHoveredButton(); // Function TslGameMode.TslTrainingMenuButtonWidget.OnHoveredButton //  // @ game+0xe1ceaf0
	void OnTrainingMenuSelect(); // Function TslGameMode.TslTrainingMenuButtonWidget.OnTrainingMenuSelect //  // @ game+0xe1d5574
	void OnUnHoveredButton(); // Function TslGameMode.TslTrainingMenuButtonWidget.OnUnHoveredButton //  // @ game+0xe1d56ac
};

// Class TslGameMode.TslTrainingMenuCanvasWidget
// Size: 0x580 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingMenuCanvasWidget : UBlockInputUserWidget {
	struct TMap<enum class ETrainingPracticeType, struct FTslTrainingResultArray> TrainingResultMap; // 0x470(0x50)
	struct UClass* TrainingScoreWidgetClass; // 0x4c0(0x08)
	float TrainingResultScoreNextAnimDelay; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UAkAudioEvent* TrainingCancelSoundEvent; // 0x4d0(0x08)
	struct UAkAudioEvent* TrainingResultSoundEvent; // 0x4d8(0x08)
	struct UWidgetSwitcher* SwitcherTrainingMenuBind; // 0x4e0(0x08)
	struct UTextBlock* TextTrainingResultTitleBind; // 0x4e8(0x08)
	struct UWidgetSwitcher* ButtonsPlatformSwitcher; // 0x4f0(0x08)
	struct UButton* ButtonExitBind; // 0x4f8(0x08)
	struct UButton* ButtonTrainingResultBind; // 0x500(0x08)
	struct UHorizontalBox* PanelTrainingMenuButtonBind; // 0x508(0x08)
	struct UHorizontalBox* PanelTrainingResultScoreBind; // 0x510(0x08)
	struct U*7fa8406bd3* AnimMenuEmergeBind; // 0x518(0x08)
	struct U*7fa8406bd3* AnimVanishBind; // 0x520(0x08)
	struct U*7fa8406bd3* AnimResultTitleEmergeBind; // 0x528(0x08)
	struct U*7fa8406bd3* AnimResultButtonEmergeBind; // 0x530(0x08)
	struct U*7fa8406bd3* AnimCancelTitleEmergeBind; // 0x538(0x08)
	struct TArray<struct UTslTrainingScoreWidget*> TrainingScoreWidgets; // 0x540(0x10)
	char pad_550[0x10]; // 0x550(0x10)
	struct UTslGamepadMultipleKeyIconWidget* WidgetSelectGamepadBind; // 0x560(0x08)
	struct UTslGamepadMultipleKeyIconWidget* WidgetButtonMenuGamepadBind; // 0x568(0x08)
	char pad_570[0x10]; // 0x570(0x10)

	void OnPressedB(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnPressedB //  // @ game+0xe1d0f10
	void OnMoveRight(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnMoveRight //  // @ game+0xe1d0454
	void OnMoveAxisThumbStick(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnMoveAxisThumbStick //  // @ game+0xe1cfacc
	void HideTrainingMenu(); // Function TslGameMode.TslTrainingMenuCanvasWidget.HideTrainingMenu //  // @ game+0xe1c988c
	void PlayTrainingResultScoreAnim(); // Function TslGameMode.TslTrainingMenuCanvasWidget.PlayTrainingResultScoreAnim //  // @ game+0xe1d7b9c
	void OnReleasedB(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnReleasedB //  // @ game+0xe1d1940
	void OnReleasedX(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnReleasedX //  // @ game+0xe1d1960
	void OnReleasedA(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnReleasedA //  // @ game+0xe1d192c
	void OnMoveLeft(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnMoveLeft //  // @ game+0xe1d0440
	void OnHoveredButton(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnHoveredButton //  // @ game+0xe195788
	void OnExitTrainingRoom(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnExitTrainingRoom //  // @ game+0xe1cdedc
	void OnOpenDashboardButton(); // Function TslGameMode.TslTrainingMenuCanvasWidget.OnOpenDashboardButton //  // @ game+0xe1d0de0
};

// Class TslGameMode.TslTrainingOneOnOneCanvasWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneCanvasWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UTslRoundCountWidget* RoundCount; // 0x430(0x08)
	struct UTslRoundTimeWidget* RoundTime; // 0x438(0x08)
	char pad_440[0x20]; // 0x440(0x20)
};

// Class TslGameMode.TslTrainingOneOnOneArenaHudWidget
// Size: 0x478 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneArenaHudWidget : UTslTrainingOneOnOneCanvasWidget {
	struct UTslRoundScorePointsWidget* ScorePoints; // 0x460(0x08)
	struct UTslTrainingOneOnOneWinningStreakWidget* WinningStreak; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneObserverHudWidget
// Size: 0x580 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneObserverHudWidget : UTslTrainingOneOnOneCanvasWidget {
	struct UPlayerHeadManagerWidget* PlayerHeadManager; // 0x460(0x08)
	struct UBorder* HP_Border; // 0x468(0x08)
	struct UTslRoundScorePointsWidget* Player_Score; // 0x470(0x08)
	struct UTslRoundScorePointsWidget* Enemy_Score; // 0x478(0x08)
	struct UImage* Player_Gauge_Image; // 0x480(0x08)
	struct UImage* Enemy_Gauge_Image; // 0x488(0x08)
	struct UTslUserPlatformImageWidget* Player_PlatformIcon; // 0x490(0x08)
	struct UTslUserPlatformImageWidget* Enemy_PlatformIcon; // 0x498(0x08)
	struct UTextBlock* PlayerName_Text; // 0x4a0(0x08)
	struct UTextBlock* EnemyName_Text; // 0x4a8(0x08)
	struct U*7fa8406bd3* Hit0_Anim; // 0x4b0(0x08)
	struct U*7fa8406bd3* Hit1_Anim; // 0x4b8(0x08)
	struct U*7fa8406bd3* Open_Anim; // 0x4c0(0x08)
	char pad_4C8[0xa0]; // 0x4c8(0xa0)
	struct UTslTrainingOneOnOneWinningStreakWidget* PlayerWinningStreak; // 0x568(0x08)
	struct UTslTrainingOneOnOneWinningStreakWidget* EnemyWinningStreak; // 0x570(0x08)
	char pad_578[0x8]; // 0x578(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneCountDownWidget
// Size: 0x388 (Inherited: 0x388)  [layout: KHOP]
struct UTslTrainingOneOnOneCountDownWidget : UTslCountDownWidget {

	void OnUpdateOneOnOneCountDownTime(); // Function TslGameMode.TslTrainingOneOnOneCountDownWidget.OnUpdateOneOnOneCountDownTime //  // @ game+0xe1d60c4
};

// Class TslGameMode.TslTrainingOneOnOneMatchEndResultWidget
// Size: 0x5a0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneMatchEndResultWidget : UBlockInputUserWidget {
	struct UInvalidationBox* InvalidationBox; // 0x470(0x08)
	struct UGridPanel* Contents_GridPanel; // 0x478(0x08)
	struct UTslTrainingOneOnOneNoticeWidget* QuitterNoticeWidget; // 0x480(0x08)
	struct UResultTitleWidget* ResultTitleWidget; // 0x488(0x08)
	struct UTextBlock* ScorePlayer; // 0x490(0x08)
	struct UTextBlock* ScoreEnemy; // 0x498(0x08)
	struct UWidgetSwitcher* Result_Switcher; // 0x4a0(0x08)
	struct UBorder* Spectateur_Border; // 0x4a8(0x08)
	struct UTextBlock* SpectateurName_Text; // 0x4b0(0x08)
	struct UTextBlock* PlayerName_Text; // 0x4b8(0x08)
	struct UTextBlock* EnemyName_Text; // 0x4c0(0x08)
	struct UTslRichTextBlock* TimerText; // 0x4c8(0x08)
	struct UTslUserPlatformImageWidget* Player_PlatformIcon; // 0x4d0(0x08)
	struct UTslUserPlatformImageWidget* Enemy_PlatformIcon; // 0x4d8(0x08)
	struct UTslUserPlatformImageWidget* Spectateur_PlatformIcon; // 0x4e0(0x08)
	struct UWidgetSwitcher* Exit_PlatformSwitcher; // 0x4e8(0x08)
	struct UButton* Exit_Button; // 0x4f0(0x08)
	struct UTslGamepadMultipleKeyIconWidget* Exit_Gamepad; // 0x4f8(0x08)
	struct UTslTrainingOneOnOneWinningStreakWidget* PlayerWinningStreak; // 0x500(0x08)
	struct UTslTrainingOneOnOneWinningStreakWidget* EnemyWinningStreak; // 0x508(0x08)
	struct UTslTrainingOneOnOneMatchResultPerRound* Round1; // 0x510(0x08)
	struct UTslTrainingOneOnOneMatchResultPerRound* Round2; // 0x518(0x08)
	struct UTslTrainingOneOnOneMatchResultPerRound* Round3; // 0x520(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x528(0x08)
	int32 MaxRemainingTime; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct FText RemainTimeSingularFormatText; // 0x538(0x18)
	struct FText RemainTimePluralFormatText; // 0x550(0x18)
	struct FString SecFormatArgText; // 0x568(0x10)
	struct UAkAudioEvent* MatchEndSoundEvent; // 0x578(0x08)
	char pad_580[0x20]; // 0x580(0x20)

	void Anim_ResultRound2(); // Function TslGameMode.TslTrainingOneOnOneMatchEndResultWidget.Anim_ResultRound2 //  // @ game+0xdbdbab4
	void Anim_ResultRound1(); // Function TslGameMode.TslTrainingOneOnOneMatchEndResultWidget.Anim_ResultRound1 //  // @ game+0x6d0c20
	void OnClicked_ExitButton(); // Function TslGameMode.TslTrainingOneOnOneMatchEndResultWidget.OnClicked_ExitButton //  // @ game+0xdafe600
	void Anim_ResultRound3(); // Function TslGameMode.TslTrainingOneOnOneMatchEndResultWidget.Anim_ResultRound3 //  // @ game+0x11fadb0
};

// Class TslGameMode.ArcadeOneOnOneMatchEndResultWidget
// Size: 0x5c0 (Inherited: 0x5a0)  [layout: LECH - offset chi la uoc luong]
struct UArcadeOneOnOneMatchEndResultWidget : UTslTrainingOneOnOneMatchEndResultWidget {
	struct UButton* ButtonReport; // 0x5a0(0x08)
	struct UTslGamepadMultipleKeyIconWidget* WidgetReportKeyGuide; // 0x5a8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* WidgetGamerCardKeyGuide; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void OnShowGamerCardWidget(); // Function TslGameMode.ArcadeOneOnOneMatchEndResultWidget.OnShowGamerCardWidget //  // @ game+0x1053c04
	void OnClicked_ButtonReport(); // Function TslGameMode.ArcadeOneOnOneMatchEndResultWidget.OnClicked_ButtonReport //  // @ game+0xe199ccc
	void OnGoToLobby(); // Function TslGameMode.ArcadeOneOnOneMatchEndResultWidget.OnGoToLobby //  // @ game+0xe1cdfd0
	void OnClicked_ExitButton(); // Function TslGameMode.ArcadeOneOnOneMatchEndResultWidget.OnClicked_ExitButton //  // @ game+0xdafe600
};

// Class TslGameMode.TslTrainingOneOnOneMatchResultOutcome
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneMatchResultOutcome : UUmgBaseWidget {
	struct UWidgetSwitcher* ResultMark_Switcher; // 0x420(0x08)
	struct UWidgetSwitcher* ResultText_Switcher; // 0x428(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneMatchResultPerRound
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingOneOnOneMatchResultPerRound : UUmgBaseWidget {
	struct UTslTrainingOneOnOneMatchResultOutcome* Round_Player; // 0x420(0x08)
	struct UTslRoundTimeWidget* Round_Time; // 0x428(0x08)
	struct UTslTrainingOneOnOneMatchResultOutcome* Round_Enemy; // 0x430(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x438(0x08)
	struct UAkAudioEvent* PerRoundSoundEvent; // 0x440(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneMatchResultRoundTime
// Size: 0x270 (Inherited: 0x258)  [layout: KHOP]
struct UTslTrainingOneOnOneMatchResultRoundTime : UUserWidget {
	struct UTextBlock* Count_Text; // 0x258(0x08)
	struct UTextBlock* Hour_Text; // 0x260(0x08)
	struct UTextBlock* Minute_Text; // 0x268(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneNoticeWidget
// Size: 0x2c8 (Inherited: 0x258)  [layout: KHOP]
struct UTslTrainingOneOnOneNoticeWidget : UUserWidget {
	struct UTslUserPlatformImageWidget* PlatformIcon; // 0x258(0x08)
	struct UTextBlock* Name_Text; // 0x260(0x08)
	struct UTextBlock* Notice_Text; // 0x268(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x270(0x08)
	struct FLinearColor Player1Color; // 0x278(0x10)
	struct FLinearColor Player2Color; // 0x288(0x10)
	struct FText ArenaQuitterText; // 0x298(0x18)
	struct FText AudienceQuitterText; // 0x2b0(0x18)
};

// Class TslGameMode.TslTrainingOneOnOneReadyWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneReadyWidget : UUmgBaseWidget {
	struct UTextBlock* TextOpponentMatchReady; // 0x420(0x08)
	struct UTextBlock* TextMatchReady; // 0x428(0x08)
	struct UWidgetSwitcher* SwitcherMyMatchReadyIcon; // 0x430(0x08)
	struct U*7fa8406bd3* AnimReset; // 0x438(0x08)
	struct U*7fa8406bd3* AnimOpponentMatchReadyAppear; // 0x440(0x08)
	struct U*7fa8406bd3* AnimOpponentMatchReadyDisappear; // 0x448(0x08)
	struct U*7fa8406bd3* AnimMyMatchReadyAppear; // 0x450(0x08)
	struct U*7fa8406bd3* AnimMyMatchReadyDisappear; // 0x458(0x08)
	struct FText OpponentReadyComplete; // 0x460(0x18)
	struct FText BeginSoonMatchStart; // 0x478(0x18)
	struct FText MyMatchReady; // 0x490(0x18)
	struct FText MyMatchReadyComplete; // 0x4a8(0x18)
	char pad_4C0[0x8]; // 0x4c0(0x08)

	void OnOpponentReady(); // Function TslGameMode.TslTrainingOneOnOneReadyWidget.OnOpponentReady //  // @ game+0xe1d0e08
	void OnPlayerReady(); // Function TslGameMode.TslTrainingOneOnOneReadyWidget.OnPlayerReady //  // @ game+0xe1d0e50
	void OnMatchStarted(); // Function TslGameMode.TslTrainingOneOnOneReadyWidget.OnMatchStarted //  // @ game+0xe1ced60
	void OnAllPlayerReady(); // Function TslGameMode.TslTrainingOneOnOneReadyWidget.OnAllPlayerReady //  // @ game+0xe1ca770
};

// Class TslGameMode.TslTrainingOneOnOneRoundStartWidget
// Size: 0x288 (Inherited: 0x258)  [layout: KHOP]
struct UTslTrainingOneOnOneRoundStartWidget : UUserWidget {
	struct UTextBlock* Count_Text; // 0x258(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x260(0x08)
	struct UHorizontalBox* EnemyName_HorizontalBox; // 0x268(0x08)
	struct UTslUserPlatformImageWidget* EnemyPlatformIcon; // 0x270(0x08)
	struct UTextBlock* EnemyName_Text; // 0x278(0x08)
	struct UAkAudioEvent* RoundStartSoundEvent; // 0x280(0x08)
};

// Class TslGameMode.TslTrainingOneOnOneSearchWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingOneOnOneSearchWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* Open_Anim; // 0x420(0x08)
	struct U*7fa8406bd3* Close_Anim; // 0x428(0x08)
	struct U*7fa8406bd3* Found_Anim; // 0x430(0x08)
	struct U*7fa8406bd3* MatchStart_Anim; // 0x438(0x08)
	struct U*7fa8406bd3* MatchEnd_Anim; // 0x440(0x08)
	struct UCanvasPanel* Search_CanvasPanel; // 0x448(0x08)
	struct UTextBlock* Search_Sub_TextBlock; // 0x450(0x08)
	struct UGridPanel* Search_GridPanel; // 0x458(0x08)
	struct UBorder* Search_Border; // 0x460(0x08)
	struct FText TimeTextFormat; // 0x468(0x18)
	struct FString SecFormatArgText; // 0x480(0x10)
	struct FString MinFormatArgText; // 0x490(0x10)
	char pad_4A0[0x8]; // 0x4a0(0x08)

	void OnMatchFound(); // Function TslGameMode.TslTrainingOneOnOneSearchWidget.OnMatchFound //  // @ game+0xe1ceccc
	void OnUpdateMatchWaitingElapsedTime(); // Function TslGameMode.TslTrainingOneOnOneSearchWidget.OnUpdateMatchWaitingElapsedTime //  // @ game+0xe1d5750
	void OnSearchCanceled(); // Function TslGameMode.TslTrainingOneOnOneSearchWidget.OnSearchCanceled //  // @ game+0xe1d3f34
	void OnSearchStarted(); // Function TslGameMode.TslTrainingOneOnOneSearchWidget.OnSearchStarted //  // @ game+0xe1d3f48
};

// Class TslGameMode.TslTrainingOneOnOneWinningStreakWidget
// Size: 0x508 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingOneOnOneWinningStreakWidget : UTslWinningStreakWidget {
	struct FSlateBrush WinningStreakBG; // 0x420(0x90)
	int32 WinningStreakWidth; // 0x4b0(0x04)
	int32 WinningStreakHeight; // 0x4b4(0x04)
	struct FMargin WinningStreakPadding; // 0x4b8(0x10)
	enum class EHorizontalAlignment WinningStreakHAlign; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FLinearColor WinningStreakWinsTextColor; // 0x4cc(0x10)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UTextBlock* WinningStreakTitleText; // 0x4e0(0x08)
	struct UTextBlock* WinningStreakWinsText; // 0x4e8(0x08)
	struct USizeBox* WinningStreak_SizeBox; // 0x4f0(0x08)
	struct UHorizontalBox* WinningStreak_HorizontalBox; // 0x4f8(0x08)
	struct UBorder* WinningStreak_Border; // 0x500(0x08)
};

// Class TslGameMode.TslTrainingRoomCountDownWidget
// Size: 0x388 (Inherited: 0x388)  [layout: KHOP]
struct UTslTrainingRoomCountDownWidget : UTslCountDownWidget {

	void OnUpdateTrainingCountDownTime(); // Function TslGameMode.TslTrainingRoomCountDownWidget.OnUpdateTrainingCountDownTime //  // @ game+0xe1d6f64
};

// Class TslGameMode.TslTrainingRoomCountInfo
// Size: 0x5d0 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingRoomCountInfo : UTslCountInfoBase {
	enum class ETrainingScoreType TrainingScoreType; // 0x5c0(0x01)
	char pad_5C1[0xf]; // 0x5c1(0x0f)
};

// Class TslGameMode.TslTrainingRoomHudCanvasWidget
// Size: 0x4c0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingRoomHudCanvasWidget : UBlockInputUserWidget {
	struct UAkAudioEvent* HitTartgetSoundEvent; // 0x470(0x08)
	struct UAkAudioEvent* NearHitTartgetSoundEvent; // 0x478(0x08)
	struct UAkAudioEvent* MissHitTartgetSoundEvent; // 0x480(0x08)
	float WrongTargetMessageDuration; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UWidgetSwitcher* TrainingInfoSwitcher; // 0x490(0x08)
	struct UUserWidget* UI_TrainingRoomCountDownWidget; // 0x498(0x08)
	struct UUserWidget* UI_TrainingTimerWidget; // 0x4a0(0x08)
	struct UUserWidget* UI_TrainingTurnInfoWidget; // 0x4a8(0x08)
	struct UUserWidget* ScoreInfo; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void OnUpdateSoundProcessorState(); // Function TslGameMode.TslTrainingRoomHudCanvasWidget.OnUpdateSoundProcessorState //  // @ game+0xe1d6e34
};

// Class TslGameMode.TslTrainingRoomInfoStrategy
// Size: 0x60 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingRoomInfoStrategy : U*d51199f832 {
	char pad_58[0x8]; // 0x58(0x08)

	void UpdateTrainingRoomInfo(); // Function TslGameMode.TslTrainingRoomInfoStrategy.UpdateTrainingRoomInfo //  // @ game+0xe1ddf68
};

// Class TslGameMode.TslTrainingRoomInteractionComponent
// Size: 0x7d0 (Inherited: 0x7c0)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingRoomInteractionComponent : U*4a95730744 {
	struct UStaticMeshComponent* InteractionButton; // 0x7b8(0x08)
	enum class ETrainingRoomInteractionType InteractionType; // 0x7c0(0x04)
	char pad_7C4[0xc]; // 0x7c4(0x0c)
};

// Class TslGameMode.TslTrainingRoomSoundDB
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UTslTrainingRoomSoundDB : UDataTable {
};

// Class TslGameMode.TslTrainingRoomSoundProcessor
// Size: 0x428 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslTrainingRoomSoundProcessor : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	struct USphereComponent* SphereComponent; // 0x410(0x08)
	struct UAkComponent* AkComponent; // 0x418(0x08)
	int32 *9f63de9e02; // 0x420(0x04) rep=OnRep_CurrentPlaySoundInfo
	char pad_424[0x4]; // 0x424(0x04)

	void OnRep_CurrentPlaySoundInfo(); // Function TslGameMode.TslTrainingRoomSoundProcessor.OnRep_CurrentPlaySoundInfo //  // @ game+0xe1d1d08
};

// Class TslGameMode.TslTrainingRoomTimeWidget
// Size: 0x350 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingRoomTimeWidget : UTslUserWidget {
	struct UTextBlock* TimeText; // 0x330(0x08)
	struct UTextBlock* TimeEffectText; // 0x338(0x08)
	struct U*7fa8406bd3* Under10SAnim; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)

	void OnUpdateTrainingRoomTime(); // Function TslGameMode.TslTrainingRoomTimeWidget.OnUpdateTrainingRoomTime //  // @ game+0xe1d710c
};

// Class TslGameMode.TslTrainingScoreWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingScoreWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	float ScoreTextStartTime; // 0x430(0x04)
	float ScoreTextUpdateTime; // 0x434(0x04)
	float ScoreTextMaxTime; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UAkAudioEvent* ScoreRiseSoundEvent; // 0x440(0x08)
	struct UAkAudioEvent* ScoreRiseSoundEndEvent; // 0x448(0x08)
	struct UImage* TrainingScoreIconImage; // 0x450(0x08)
	struct UTextBlock* TrainingScoreTitleText; // 0x458(0x08)
	struct UTextBlock* TrainingScoreNumberText; // 0x460(0x08)
	struct U*7fa8406bd3* Emerge; // 0x468(0x08)
	char pad_470[0x38]; // 0x470(0x38)

	void StartAnimScoreText(); // Function TslGameMode.TslTrainingScoreWidget.StartAnimScoreText //  // @ game+0xe1dca04
	void PlayNextScoreAnim(); // Function TslGameMode.TslTrainingScoreWidget.PlayNextScoreAnim //  // @ game+0xe1d7b88
	void UpdateAnimScoreText(); // Function TslGameMode.TslTrainingScoreWidget.UpdateAnimScoreText //  // @ game+0xe1dddf0
};

// Class TslGameMode.TslTrainingSoundTurnInfoWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingSoundTurnInfoWidget : UUmgBaseWidget {
	struct UTextBlock* TurnNumber_Text; // 0x420(0x08)
	struct UTextBlock* WeaponName_Text; // 0x428(0x08)
	struct UImage* Weapon_Image; // 0x430(0x08)
};

// Class TslGameMode.TslTrainingTargetSpawner
// Size: 0x450 (Inherited: 0x400)  [layout: KHOP]
struct ATslTrainingTargetSpawner : ATargetPoint {
	struct UClass* *5c6adab1ae; // 0x400(0x08)
	bool bRandomMeshSetting; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct FStringAssetReference> *fe83648a86; // 0x410(0x10)
	enum class ETrainingPracticeType PracticeType; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32 *e5a66c50ce; // 0x424(0x04)
	int32 *2a705125c2; // 0x428(0x04)
	bool bUseFloorRaycast; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	float *1c2c09597c; // 0x430(0x04)
	bool bSpawnCircleShape; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float *e3eb88e6eb; // 0x438(0x04)
	int32 *e2e4acf149; // 0x43c(0x04)
	struct TArray<struct UStaticMesh*> *e4a389fb58; // 0x440(0x10)
};

// Class TslGameMode.TslTrainingTeleportButton
// Size: 0x5b0 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingTeleportButton : UUmgBaseWidget {
	enum class ETslTrainingType TrainingType; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FText TitleText; // 0x428(0x18)
	struct UTexture2D* BackGroundTexture; // 0x440(0x08)
	struct UTexture2D* TrainingTypeImage; // 0x448(0x08)
	struct UImage* TrainingIconImage; // 0x450(0x08)
	struct UImage* BackgroundImage; // 0x458(0x08)
	struct UButton* TeleportButton; // 0x460(0x08)
	struct UTslFlowingTextWidget* Title_Text; // 0x468(0x08)
	char pad_470[0x128]; // 0x470(0x128)
	struct UTslWorldMapTrainingInfoWidget* ParentWidget; // 0x598(0x08)
	struct U*7fa8406bd3* OnBtnHovered_Anim; // 0x5a0(0x08)
	float SelectedAlpha; // 0x5a8(0x04)
	float UnSelectedAlpha; // 0x5ac(0x04)

	void OnBtnClicked(); // Function TslGameMode.TslTrainingTeleportButton.OnBtnClicked //  // @ game+0xe1caa30
	void OnBtnHoverEnded(); // Function TslGameMode.TslTrainingTeleportButton.OnBtnHoverEnded //  // @ game+0xe1caad0
	void OnBtnHovered(); // Function TslGameMode.TslTrainingTeleportButton.OnBtnHovered //  // @ game+0xe1cab5c
};

// Class TslGameMode.TslTrainingWorldMapWidget
// Size: 0x670 (Inherited: 0x608)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingWorldMapWidget : UTslNewWorldMapWidget {
	struct UMapGridWidget* TrainingMapGrid; // 0x608(0x08)
	struct UWidget* MapViewArea; // 0x610(0x08)
	struct UTslTrainingWorldmapTooltipWidget* TrainingSpotToolTipWidget; // 0x618(0x08)
	struct TArray<struct FTrainingToolTipDataStruct> ToolTipDatas; // 0x620(0x10)
	struct FTrainingToolTipDataStruct DefaultData; // 0x630(0x30)
	char pad_660[0x10]; // 0x660(0x10)

	void OnPutMarkerPad(); // Function TslGameMode.TslTrainingWorldMapWidget.OnPutMarkerPad //  // @ game+0x11fadb0
};

// Class TslGameMode.TslTrainingWorldmapTooltipWidget
// Size: 0x468 (Inherited: 0x420)  [layout: KHOP]
struct UTslTrainingWorldmapTooltipWidget : UUmgBaseWidget {
	char pad_420[0x30]; // 0x420(0x30)
	struct UTslFlowingTextWidget* ToolTipTitleText; // 0x450(0x08)
	struct UImage* ToolTipImage; // 0x458(0x08)
	struct UImage* BackgroundImage; // 0x460(0x08)
};

// Class TslGameMode.*17f80cb0db
// Size: 0xbd0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*17f80cb0db : UStaticMeshComponent {
	struct TMap<int32, struct UMaterialInterface*> *7093b65430; // 0xb78(0x50)
	char pad_BC8[0x8]; // 0xbc8(0x08)
};

// Class TslGameMode.*4815de9a17
// Size: 0x1370 (Inherited: 0x1320)  [layout: LECH - offset chi la uoc luong]
struct U*4815de9a17 : USkeletalMeshComponent {
	struct TMap<int32, struct UMaterialInterface*> *7093b65430; // 0x1318(0x50)
	char pad_1368[0x8]; // 0x1368(0x08)
};

// Class TslGameMode.TslWeapon_FBRShield
// Size: 0xe30 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct ATslWeapon_FBRShield : ATslWeapon_Shield {
	bool *649a2bea84; // 0xe1c(0x01)
	bool *fc6a2e1f6c; // 0xe1d(0x01)
	bool *ce448f04ff; // 0xe1e(0x01)
	bool *f1fab17779; // 0xe1f(0x01)
	bool *4b35c41cc7; // 0xe20(0x01)
	bool *69caec02e8; // 0xe21(0x01)
	char pad_E22[0xe]; // 0xe22(0x0e)

	void *1ceed1d312(); // Function TslGameMode.TslWeapon_FBRShield.*1ceed1d312 //  // @ game+0xe1c02c4
	void *d6c02481a5(); // Function TslGameMode.TslWeapon_FBRShield.*d6c02481a5 //  // @ game+0xe1d83a0
	void *715333528b(); // Function TslGameMode.TslWeapon_FBRShield.*715333528b //  // @ game+0xe1cb810
	void *45067f9c36(); // Function TslGameMode.TslWeapon_FBRShield.*45067f9c36 //  // @ game+0xe1ddcd8
};

// Class TslGameMode.TslWeapon_Trajectory_Buff
// Size: 0x1500 (Inherited: 0x1500)  [layout: KHOP]
struct ATslWeapon_Trajectory_Buff : ATslWeapon_Trajectory {
	struct UClass* *eff518ff16; // 0x1490(0x08)
};

// Class TslGameMode.TslWorldMapTeleportButtonIcon
// Size: 0x570 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslWorldMapTeleportButtonIcon : UUmgBaseWidget {
	struct ATslTrainingMapIconVolume* MapIconActor; // 0x420(0x08)
	struct UImage* IconImage; // 0x428(0x08)
	struct UButton* TeleportButton; // 0x430(0x08)
	struct UTextBlock* ButtonNumber; // 0x438(0x08)
	char pad_440[0x124]; // 0x440(0x124)
	float SelectedAlpha; // 0x564(0x04)
	float UnSelectedAlpha; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)

	void OnBtnClicked(); // Function TslGameMode.TslWorldMapTeleportButtonIcon.OnBtnClicked //  // @ game+0xe1caa44
	void HandleOnOneOnOneStopSearchPopup(); // Function TslGameMode.TslWorldMapTeleportButtonIcon.HandleOnOneOnOneStopSearchPopup //  // @ game+0xe1c75c0
};

// Class TslGameMode.TslWorldMapTrainingInfoWidget
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UTslWorldMapTrainingInfoWidget : UTslWorldMapInfoWidgetBase {
	struct UVerticalBox* info_VerticalBox; // 0x420(0x08)
	struct TArray<struct UTslTrainingTeleportButton*> TrainingTeleportButtons; // 0x428(0x10)
	struct UTslTrainingTeleportButton* CurSelectedButton; // 0x438(0x08)
	struct TArray<struct UTslWorldMapTeleportButtonIcon*> WorldmapTeleportIcons; // 0x440(0x10)
	struct FMulticastDelegate OnClickTeleportButton; // 0x450(0x10)
	struct FMulticastDelegate OnHoverTeleportButton; // 0x460(0x10)
	struct FMulticastDelegate OnUnHoverTeleportButton; // 0x470(0x10)
	struct UMapGridWidget* TrainingMapGrid; // 0x480(0x08)

	void OnBtnClicked(); // Function TslGameMode.TslWorldMapTrainingInfoWidget.OnBtnClicked //  // @ game+0xe1caa58
	void OnBtnHoverEnded(); // Function TslGameMode.TslWorldMapTrainingInfoWidget.OnBtnHoverEnded //  // @ game+0xe1caae4
	void OnBtnHovered(); // Function TslGameMode.TslWorldMapTrainingInfoWidget.OnBtnHovered //  // @ game+0xe1cab70
};

// Class TslGameMode.TutorialActor
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATutorialActor : AActor {
	bool bReplicatedHidden; // 0x400(0x01) rep=OnRep_bReplicatedHidden
	char pad_401[0x7]; // 0x401(0x07)

	void *fd23780354(); // Function TslGameMode.TutorialActor.*fd23780354 //  // @ game+0xe1db7cc
	void OnRep_bReplicatedHidden(); // Function TslGameMode.TutorialActor.OnRep_bReplicatedHidden //  // @ game+0x100d054
};

// Class TslGameMode.TutorialCombatVolume
// Size: 0x418 (Inherited: 0x408)  [layout: KHOP]
struct ATutorialCombatVolume : ATutorialActor {
	struct FVector BoxExtent; // 0x408(0x0c)
	struct FColor VolumeColor; // 0x414(0x04)
};

// Class TslGameMode.TutorialHittingTarget
// Size: 0x530 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATutorialHittingTarget : ATutorialActor {
	char pad_408[0x8]; // 0x408(0x08)
	struct F*1bd4b1422a *c45ca11283; // 0x410(0x20)
	struct FName *5ac9fa302e; // 0x430(0x08)
	struct UStaticMeshComponent* TargetMesh; // 0x438(0x08)
	bool bUseFlipActivation; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FName *91cfc0936c; // 0x448(0x08)
	struct UStaticMeshComponent* *ca87fba927; // 0x450(0x08)
	struct FVector *9b166738c6; // 0x458(0x0c)
	float *9753968dee; // 0x464(0x04)
	float *0825ee7d2d; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UCurveFloat* *474c1e97b9; // 0x470(0x08)
	struct F*6b84f6be44 *9a164515da; // 0x478(0x60) rep=OnRep_LastTakeHitInfo
	char pad_4D8[0x58]; // 0x4d8(0x58)

	void OnRep_LastTakeHitInfo(); // Function TslGameMode.TutorialHittingTarget.OnRep_LastTakeHitInfo //  // @ game+0xe1d1fc0
};

// Class TslGameMode.TutorialItemSpawnActor
// Size: 0x440 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATutorialItemSpawnActor : ATutorialActor {
	struct TArray<struct F*a3350e3fe7> ItemsToSpawn; // 0x408(0x10)
	bool bEnableRespawn; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float RespawnDelay; // 0x41c(0x04)
	float RespawnCheckInterval; // 0x420(0x04)
	char pad_424[0x1c]; // 0x424(0x1c)

	void *5e2d2a853d(); // Function TslGameMode.TutorialItemSpawnActor.*5e2d2a853d //  // @ game+0xe1dbedc
	void *ca81512399(); // Function TslGameMode.TutorialItemSpawnActor.*ca81512399 //  // @ game+0xe1c4da8
};

// Class TslGameMode.TutorialParachuteLandingZone
// Size: 0x428 (Inherited: 0x408)  [layout: KHOP]
struct ATutorialParachuteLandingZone : ATutorialActor {
	struct FVector PerfectZoneExtent; // 0x408(0x0c)
	struct FVector SuccessZoneExtent; // 0x414(0x0c)
	struct FColor PerfectZoneColor; // 0x420(0x04)
	struct FColor SuccessZoneColor; // 0x424(0x04)

	void *b22f6b8129(); // Function TslGameMode.TutorialParachuteLandingZone.*b22f6b8129 //  // @ game+0xe1c00d4
};

// Class TslGameMode.TutorialTriggerVolume
// Size: 0x500 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATutorialTriggerVolume : ATutorialActor {
	struct FMulticastDelegate OnCharacterEntered; // 0x408(0x10)
	struct FMulticastDelegate OnCharacterExited; // 0x418(0x10)
	struct FMulticastDelegate OnProjectileEntered; // 0x428(0x10)
	struct FMulticastDelegate OnProjectileExited; // 0x438(0x10)
	struct FVector BoxExtent; // 0x448(0x0c)
	struct FColor VolumeColor; // 0x454(0x04)
	float CheckInterval; // 0x458(0x04)
	bool bIgnoreDyingCharacter; // 0x45c(0x01)
	bool bDetectProjectiles; // 0x45d(0x01)
	char pad_45E[0xa2]; // 0x45e(0xa2)

	void *342617ff2d(); // Function TslGameMode.TutorialTriggerVolume.*342617ff2d //  // @ game+0xe1c98dc
	void *0fff63ff6f(); // Function TslGameMode.TutorialTriggerVolume.*0fff63ff6f //  // @ game+0xe1c6538
	void *f09acd2f8d(); // Function TslGameMode.TutorialTriggerVolume.*f09acd2f8d //  // @ game+0xe1c9a3c
	void *7ce5699bef(); // Function TslGameMode.TutorialTriggerVolume.*7ce5699bef //  // @ game+0xe1c65b8
};

// Class TslGameMode.TutorialVehicleSpawnActor
// Size: 0x420 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct ATutorialVehicleSpawnActor : ATutorialActor {
	struct UClass* VehicleClass; // 0x408(0x08)
	float InitialFuelPercent; // 0x410(0x04)
	float InitialHP; // 0x414(0x04)
	char pad_418[0x8]; // 0x418(0x08)

	void SpawnVehicle(); // Function TslGameMode.TutorialVehicleSpawnActor.SpawnVehicle //  // @ game+0xe1dc968
	void *59bd4eb9a0(); // Function TslGameMode.TutorialVehicleSpawnActor.*59bd4eb9a0 //  // @ game+0xe1c4e34
};

// Class TslGameMode.*87fad76e97
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*87fad76e97 : UInterface {
};

// Class TslGameMode.*81a69e0757
// Size: 0x78 (Inherited: 0x38)  [layout: KHOP]
struct U*81a69e0757 : UDataAsset {
	struct TArray<struct F*0ecd55b6b7> *5ab96d5989; // 0x38(0x10)
	struct TArray<struct F*0ecd55b6b7> *2d0f7eec17; // 0x48(0x10)
	struct UDataTable* *381b42ab32; // 0x58(0x20)
};

// Class TslGameMode.TutorialAircraftCarePackage
// Size: 0x5e8 (Inherited: 0x5d8)  [layout: LECH - offset chi la uoc luong]
struct ATutorialAircraftCarePackage : AAircraftCarePackage {
	char pad_5D8[0x10]; // 0x5d8(0x10)
};

// Class TslGameMode.*c031c833e6
// Size: 0x1c0 (Inherited: 0x1a0)  [layout: LECH - offset chi la uoc luong]
struct U*c031c833e6 : U*436f0b8f28 {
	struct F*82e5e013d5 *0f4d6f37f8; // 0x1a0(0x1c)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// Class TslGameMode.TutorialBlueChipTower
// Size: 0x640 (Inherited: 0x5d0)  [layout: LECH - offset chi la uoc luong]
struct ATutorialBlueChipTower : ATslBlueChipTower {
	char pad_5D0[0x70]; // 0x5d0(0x70)
};

// Class TslGameMode.*80635d9906
// Size: 0x240 (Inherited: 0x198)  [layout: LECH - offset chi la uoc luong]
struct U*80635d9906 : U*d66296f25a {
	struct FMulticastDelegate OnPhaseCompleted; // 0x198(0x10)
	struct FVector *b8c6c1138b; // 0x1a8(0x0c)
	float *5efa7fbe06; // 0x1b4(0x04)
	struct TArray<struct F*f758dbbf60> *9f086db70b; // 0x1b8(0x10)
	char pad_1C8[0x78]; // 0x1c8(0x78)

	void *f091e6d6f3(); // Function TslGameMode.*80635d9906.*f091e6d6f3 //  // @ game+0xe1dcba0
	void OnPhaseCompleted__DelegateSignature(); // DelegateFunction TslGameMode.*80635d9906.OnPhaseCompleted__DelegateSignature //  // @ game+0x43bab4
	void *a8281eef2c(); // Function TslGameMode.*80635d9906.*a8281eef2c //  // @ game+0xe1dbe64
	void *9430a70782(); // Function TslGameMode.*80635d9906.*9430a70782 //  // @ game+0xe1d7b74
	void *80e711cb19(); // Function TslGameMode.*80635d9906.*80e711cb19 //  // @ game+0xe1c6218
	void *64419903dd(); // Function TslGameMode.*80635d9906.*64419903dd //  // @ game+0xe1c61e8
	void *97662e00b3(); // Function TslGameMode.*80635d9906.*97662e00b3 //  // @ game+0xe1dcbbc
	void *cee2257e05(); // Function TslGameMode.*80635d9906.*cee2257e05 //  // @ game+0xe1d7ee4
};

// Class TslGameMode.*0a6ea430f9
// Size: 0xb0 (Inherited: 0xa8)  [layout: KHOP]
struct U*0a6ea430f9 : U*688d826d36 {
	struct UClass* *63b9a73d21; // 0xa8(0x08)
};

// Class TslGameMode.*619c1499c7
// Size: 0x148 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*619c1499c7 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnStepPreEntryCompletedDelegate; // 0x40(0x10)
	int32 CurrentStepIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct U*493abe4ff0*> ActiveSteps; // 0x58(0x10)
	struct F*61ec7919e9 ChapterData; // 0x68(0x58)
	struct TArray<struct U*fcb0576794*> *62ccb626e4; // 0xc0(0x10)
	struct TArray<struct U*fcb0576794*> *67f3a728b5; // 0xd0(0x10)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct TArray<struct U*493abe4ff0*> *ccfb3ab6df; // 0xe8(0x10)
	char pad_F8[0x50]; // 0xf8(0x50)

	void *cc30912883(); // Function TslGameMode.*619c1499c7.*cc30912883 //  // @ game+0xe1c69b4
	void *e0ad4789f8(); // Function TslGameMode.*619c1499c7.*e0ad4789f8 //  // @ game+0xe1dcec0
	void *5ec26ba5f8(); // Function TslGameMode.*619c1499c7.*5ec26ba5f8 //  // @ game+0xe1c0098
	void *214f42a414(); // Function TslGameMode.*619c1499c7.*214f42a414 //  // @ game+0xe1c9c14
	void OnChapterEnd(); // Function TslGameMode.*619c1499c7.OnChapterEnd //  // @ game+0x1180b28
	void *228c13a7b9(); // Function TslGameMode.*619c1499c7.*228c13a7b9 //  // @ game+0xe1c47ac
	void OnStepPreEntryCompleted(); // Function TslGameMode.*619c1499c7.OnStepPreEntryCompleted //  // @ game+0xe1d4db4
	void *bb956cd7db(); // Function TslGameMode.*619c1499c7.*bb956cd7db //  // @ game+0xe1bff1c
	void *cec5fa9a6c(); // Function TslGameMode.*619c1499c7.*cec5fa9a6c //  // @ game+0xe1bfe90
	void *8582953db4(); // Function TslGameMode.*619c1499c7.*8582953db4 //  // @ game+0xe1c6050
	void *7739c5da3d(); // Function TslGameMode.*619c1499c7.*7739c5da3d //  // @ game+0xe1c529c
	void *c0d5067948(); // Function TslGameMode.*619c1499c7.*c0d5067948 //  // @ game+0xe1c4898
	void *7db9f5674a(); // Function TslGameMode.*619c1499c7.*7db9f5674a //  // @ game+0xe1c9b84
	void OnChapterCompleted__DelegateSignature(); // DelegateFunction TslGameMode.*619c1499c7.OnChapterCompleted__DelegateSignature //  // @ game+0x43bab4
	void *142b800969(); // Function TslGameMode.*619c1499c7.*142b800969 //  // @ game+0xe1c68a4
	void OnChapterBegin(); // Function TslGameMode.*619c1499c7.OnChapterBegin //  // @ game+0xdb87190
	void HandleStepCompleted(); // Function TslGameMode.*619c1499c7.HandleStepCompleted //  // @ game+0xe1c76b4
	void OnStepCompleted(); // Function TslGameMode.*619c1499c7.OnStepCompleted //  // @ game+0xe1d4c6c
	void OnStepPreEntryCompletedChapter__DelegateSignature(); // DelegateFunction TslGameMode.*619c1499c7.OnStepPreEntryCompletedChapter__DelegateSignature //  // @ game+0x43bab4
	void *c2edbf4210(); // Function TslGameMode.*619c1499c7.*c2edbf4210 //  // @ game+0xe1c5eb0
	void *2fb9f04288(); // Function TslGameMode.*619c1499c7.*2fb9f04288 //  // @ game+0xe1dcd24
	void *c804899a41(); // Function TslGameMode.*619c1499c7.*c804899a41 //  // @ game+0xe1bfd50
	void *8850cdf8b9(); // Function TslGameMode.*619c1499c7.*8850cdf8b9 //  // @ game+0xe1c4e98
	void *dfd8f922d9(); // Function TslGameMode.*619c1499c7.*dfd8f922d9 //  // @ game+0xe1dcc34
	void *19cac4758b(); // Function TslGameMode.*619c1499c7.*19cac4758b //  // @ game+0xe1c5224
	void *1a17ed2371(); // Function TslGameMode.*619c1499c7.*1a17ed2371 //  // @ game+0xe1c6788
	void *fe89a493ed(); // Function TslGameMode.*619c1499c7.*fe89a493ed //  // @ game+0xe1c4e48
	void *e0df16c50d(); // Function TslGameMode.*619c1499c7.*e0df16c50d //  // @ game+0xe1dccac
	void HandleStepPreEntryCompleted(); // Function TslGameMode.*619c1499c7.HandleStepPreEntryCompleted //  // @ game+0xe1c776c
	void *1af7176b8a(); // Function TslGameMode.*619c1499c7.*1af7176b8a //  // @ game+0xe1c6810
	void *ee5c372a65(); // Function TslGameMode.*619c1499c7.*ee5c372a65 //  // @ game+0xe1bff94
	void *129aa28fb5(); // Function TslGameMode.*619c1499c7.*129aa28fb5 //  // @ game+0xe1dd0f8
};

// Class TslGameMode.*9bb3b1e0c9
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9bb3b1e0c9 : UInterface {
};

// Class TslGameMode.TutorialCheatManager
// Size: 0x518 (Inherited: 0x518)  [layout: KHOP]
struct UTutorialCheatManager : UTslCheatManager {
};

// Class TslGameMode.TutorialEOMWidget
// Size: 0x5e0 (Inherited: 0x490)  [layout: KHOP]
struct UTutorialEOMWidget : UBaseResultWidget {
	struct UTslCommonButton* ButtonExitToLobby; // 0x490(0x08)
	struct UTextBlock* TextRank; // 0x498(0x08)
	struct UTextBlock* TextScore; // 0x4a0(0x08)
	struct UTextBlock* TextCompletionPoints; // 0x4a8(0x08)
	struct UTextBlock* TextPerformancePoints; // 0x4b0(0x08)
	struct UTextBlock* TextTotalPlayTime; // 0x4b8(0x08)
	struct UTextBlock* TextLobbyTimer; // 0x4c0(0x08)
	struct UTextBlock* TextKills; // 0x4c8(0x08)
	struct UTextBlock* TextDamage; // 0x4d0(0x08)
	struct UImage* ImageGauge; // 0x4d8(0x08)
	struct UImage* ImageGaugeTip; // 0x4e0(0x08)
	struct UImage* ImageMedal; // 0x4e8(0x08)
	char pad_4F0[0x50]; // 0x4f0(0x50)
	struct TMap<enum class ETutorialRank, struct UTexture2D*> MedalTextureMap; // 0x540(0x50)
	struct TMap<enum class ETutorialRank, struct FText> RankTextMap; // 0x590(0x50)

	void UpdateEOMData(); // Function TslGameMode.TutorialEOMWidget.UpdateEOMData //  // @ game+0xe1dde2c
};

// Class TslGameMode.*069bacfba3
// Size: 0x260 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct U*069bacfba3 : U*606d3b4d41 {
	struct FMulticastDelegate OnTimeLimitReplicated; // 0x238(0x10)
	float TimeLimitSeconds; // 0x248(0x04) rep=OnRep_TimeLimitSeconds
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UClass* *da10b6099c; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	void OnRep_TimeLimitSeconds(); // Function TslGameMode.*069bacfba3.OnRep_TimeLimitSeconds //  // @ game+0xe1d2ea0
};

// Class TslGameMode.*55387a1beb
// Size: 0x270 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*55387a1beb : UObject {
	struct FMulticastDelegate OnChapterCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnChapterStarted; // 0x40(0x10)
	char pad_50[0xe0]; // 0x50(0xe0)
	struct UDataTable* *fdff738518; // 0x130(0x08)
	char pad_138[0x8]; // 0x138(0x08)
	struct U*5b6732e3a8* *9b6de6618d; // 0x140(0x08)
	struct ATslPlayerController* TutorialPlayer; // 0x148(0x08)
	struct U*619c1499c7* *46e335c564; // 0x150(0x08)
	char pad_158[0x60]; // 0x158(0x60)
	struct TArray<struct F*017556492c> *3a5788cb6f; // 0x1b8(0x10)
	struct TArray<struct F*8873abd6a2> *dd7cf0c32a; // 0x1c8(0x10)
	float *4af98a3c4c; // 0x1d8(0x04)
	int32 *5ae5d73c9a; // 0x1dc(0x04)
	struct TArray<struct UTutorialSignalTrigger*> *d7e7931ce8; // 0x1e0(0x10)
	struct TArray<struct U*fcb0576794*> *9f014e8684; // 0x1f0(0x10)
	char pad_200[0x70]; // 0x200(0x70)

	void *d5d971332b(); // Function TslGameMode.*55387a1beb.*d5d971332b //  // @ game+0xe1bfb4c
	void *7a2f9985a2(); // Function TslGameMode.*55387a1beb.*7a2f9985a2 //  // @ game+0xe1c9cb0
	void *16135cab34(); // Function TslGameMode.*55387a1beb.*16135cab34 //  // @ game+0xe1d7ea4
	void *d0592bbc86(); // Function TslGameMode.*55387a1beb.*d0592bbc86 //  // @ game+0xe1be854
	void *181c14c47e(); // Function TslGameMode.*55387a1beb.*181c14c47e //  // @ game+0xe1be7dc
	void *ac533c97c0(); // Function TslGameMode.*55387a1beb.*ac533c97c0 //  // @ game+0xe1c52c4
	void *8d46bca96f(); // Function TslGameMode.*55387a1beb.*8d46bca96f //  // @ game+0xe1bddb8
	void *bbc284e6a4(); // Function TslGameMode.*55387a1beb.*bbc284e6a4 //  // @ game+0xe1bfbc4
	void *6b07631d78(); // Function TslGameMode.*55387a1beb.*6b07631d78 //  // @ game+0xe1bf1d0
	void *8f56b6c887(); // Function TslGameMode.*55387a1beb.*8f56b6c887 //  // @ game+0xe1d7cf8
	void *74a123c54b(); // Function TslGameMode.*55387a1beb.*74a123c54b //  // @ game+0xe1dcae8
	void HandleChapterCompleted(); // Function TslGameMode.*55387a1beb.HandleChapterCompleted //  // @ game+0xe1c6e54
	void *23e548f70b(); // Function TslGameMode.*55387a1beb.*23e548f70b //  // @ game+0xe1c66f0
	void *eaa8ece35d(); // Function TslGameMode.*55387a1beb.*eaa8ece35d //  // @ game+0xe1c0178
	void *4f2f538a22(); // Function TslGameMode.*55387a1beb.*4f2f538a22 //  // @ game+0xe1dca2c
	void *54d2397ea9(); // Function TslGameMode.*55387a1beb.*54d2397ea9 //  // @ game+0xe1c4e5c
	void *c0406e9cf4(); // Function TslGameMode.*55387a1beb.*c0406e9cf4 //  // @ game+0xe1c6200
};

// Class TslGameMode.TutorialModeFeature
// Size: 0x350 (Inherited: 0xa0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialModeFeature : UTslLogicModeFeature {
	char pad_A0[0x70]; // 0xa0(0x70)
	struct UClass* *9a9393e28b; // 0x110(0x08)
	struct FName *11badd7acf; // 0x118(0x08)
	struct FName *842a810225; // 0x120(0x08)
	struct UClass* *63b9a73d21; // 0x128(0x20)
	struct FVector2D *0fe2e99d71; // 0x148(0x08)
	float *2c9d5c672a; // 0x150(0x04)
	float *b7d8e4fd0d; // 0x154(0x04)
	float *11031595dd; // 0x158(0x04)
	float *c334d8c80e; // 0x15c(0x04)
	float *5806d1adf3; // 0x160(0x04)
	struct F*4fff673fbb *4fff673fbb; // 0x164(0x14)
	struct UClass* *d6f670cb4e; // 0x178(0x08)
	struct TMap<struct FName, int32> *0d28d6bd03; // 0x180(0x50)
	struct UClass* *6005c5370b; // 0x1d0(0x08)
	struct TArray<struct F*1a3a67972a> *78bf64d76a; // 0x1d8(0x10)
	struct U*81a69e0757* *72b28c26f0; // 0x1e8(0x08)
	struct FName *f8e652f21a; // 0x1f0(0x08)
	int32 *c2107c7f91; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FString *e47918576f; // 0x200(0x10)
	struct UClass* *672a22cead; // 0x210(0x08)
	struct F*a4da2a6722 *3ba06d8bdb; // 0x218(0x20)
	char pad_238[0x28]; // 0x238(0x28)
	struct U*55387a1beb* *55387a1beb; // 0x260(0x08)
	struct U*08764739b2* *08764739b2; // 0x268(0x08)
	struct ATslPlayerStateBase* *8d4031b1f3; // 0x270(0x08)
	struct UDataTable* *2274d57ee3; // 0x278(0x08)
	char pad_280[0xd0]; // 0x280(0xd0)

	void *8994d81da6(); // Function TslGameMode.TutorialModeFeature.*8994d81da6 //  // @ game+0xe1c6708
	void *1a1e80255a(); // Function TslGameMode.TutorialModeFeature.*1a1e80255a //  // @ game+0xe1c62b4
	void HandleChapterCompleted(); // Function TslGameMode.TutorialModeFeature.HandleChapterCompleted //  // @ game+0xe1c6ecc
	void HandleChapterStarted(); // Function TslGameMode.TutorialModeFeature.HandleChapterStarted //  // @ game+0xe1c6f44
};

// Class TslGameMode.*55482b90bc
// Size: 0x410 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*55482b90bc : U*481d3a4609 {
	bool *f85bc61079; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UClass* *a33d38f46a; // 0x338(0x08)
	float *7d150e6484; // 0x340(0x04)
	float *c58563f8c8; // 0x344(0x04)
	float *342cad8634; // 0x348(0x04)
	float *c94092be14; // 0x34c(0x04)
	struct FString *4d690d7b30; // 0x350(0x10)
	struct FString *0a62f650d7; // 0x360(0x10)
	struct U*42545a37c0* *f974cc5d06; // 0x370(0x08)
	struct U*42ebcabdbb* *4d5c6a610b; // 0x378(0x08)
	char pad_380[0x7d]; // 0x380(0x7d)
	enum class ETslTTSMode *51aab82832; // 0x3fd(0x01) rep=OnRep_TTSMode
	char pad_3FE[0x2]; // 0x3fe(0x02)
	float *f09925e7ca; // 0x400(0x04) rep=OnRep_TTSGenerationTimeoutSecondsOverride
	char pad_404[0xc]; // 0x404(0x0c)

	void *7eb1aa356e(); // Function TslGameMode.*55482b90bc.*7eb1aa356e //  // @ game+0xe1c185c
	void OnRep_TTSGenerationTimeoutSecondsOverride(); // Function TslGameMode.*55482b90bc.OnRep_TTSGenerationTimeoutSecondsOverride //  // @ game+0xe1d2db8
	void *da50ca069e(); // Function TslGameMode.*55482b90bc.*da50ca069e //  // @ game+0xe1c0d08
	void *1275499cde(); // Function TslGameMode.*55482b90bc.*1275499cde //  // @ game+0xe1c17dc
	void *159d40cb1c(); // Function TslGameMode.*55482b90bc.*159d40cb1c //  // @ game+0xe1c0ddc
	void *6dd810ff1c(); // Function TslGameMode.*55482b90bc.*6dd810ff1c //  // @ game+0xe1d8850
	void HandleVoicePlaybackFinished(); // Function TslGameMode.*55482b90bc.HandleVoicePlaybackFinished //  // @ game+0xe1c985c
	void OnRep_TTSMode(); // Function TslGameMode.*55482b90bc.OnRep_TTSMode //  // @ game+0xe1d2dcc
	void *4da1a81b10(); // Function TslGameMode.*55482b90bc.*4da1a81b10 //  // @ game+0xe1c0c3c
	void *9d72e39655(); // Function TslGameMode.*55482b90bc.*9d72e39655 //  // @ game+0xe1c018c
};

// Class TslGameMode.*f786500c47
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f786500c47 : UInterface {
};

// Class TslGameMode.*15a4a0f415
// Size: 0x2e0 (Inherited: 0x2d0)  [layout: LECH - offset chi la uoc luong]
struct U*15a4a0f415 : U*13a763f8f8 {
	char pad_2D0[0x10]; // 0x2d0(0x10)
};

// Class TslGameMode.*9c62617752
// Size: 0x100 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*9c62617752 : UTslModeFeatureRepObject {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*51511ea8f9 *51511ea8f9; // 0xb0(0x20) rep=OnRep_TutorialState
	struct F*d143774809 *9782371c75; // 0xd0(0x24) rep=OnRep_ScoreResult
	bool *fd9721a0b6; // 0xf4(0x01) rep=OnRep_ShowWWCD
	char pad_F5[0xb]; // 0xf5(0x0b)

	void *04de12e00e(); // Function TslGameMode.*9c62617752.*04de12e00e //  // @ game+0xe1c66c0
	void *f74966bb2b(); // Function TslGameMode.*9c62617752.*f74966bb2b //  // @ game+0xe1c6c9c
	void OnRep_ShowWWCD(); // Function TslGameMode.*9c62617752.OnRep_ShowWWCD //  // @ game+0xe1d2d90
	void OnRep_TutorialState(); // Function TslGameMode.*9c62617752.OnRep_TutorialState //  // @ game+0xe1d2f14
	void OnRep_ScoreResult(); // Function TslGameMode.*9c62617752.OnRep_ScoreResult //  // @ game+0xe1d2d18
};

// Class TslGameMode.*fcb0576794
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*fcb0576794 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FName ActionID; // 0x40(0x08)
	struct UTutorialSignalTargetProvider* *3ec5357c69; // 0x48(0x08)
	float ExecuteDelay; // 0x50(0x04)
	bool bPersistAfterStepEnd; // 0x54(0x01)
	enum class ETutorialStepPlatform Platform; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct FName> NextActionIDs; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)

	void Execute(); // Function TslGameMode.*fcb0576794.Execute //  // @ game+0xe1c4e70
	void Complete(); // Function TslGameMode.*fcb0576794.Complete //  // @ game+0xe1c4798
	void OnCompleted__DelegateSignature(); // DelegateFunction TslGameMode.*fcb0576794.OnCompleted__DelegateSignature //  // @ game+0x43bab4
};

// Class TslGameMode.*be1cd86852
// Size: 0x80 (Inherited: 0x78)  [layout: KHOP]
struct U*be1cd86852 : U*fcb0576794 {
	enum class ETutorialScoreType ScoreType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 Score; // 0x7c(0x04)
};

// Class TslGameMode.*d2a102ce3f
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*d2a102ce3f : U*fcb0576794 {
	bool bUseWarmup; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 WarmupTimeSec; // 0x7c(0x04)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class TslGameMode.*ae066b7ac0
// Size: 0x90 (Inherited: 0x78)  [layout: KHOP]
struct U*ae066b7ac0 : U*fcb0576794 {
	struct UTutorialSignalTargetProvider* *57fdb99214; // 0x78(0x08)
	bool bDetach; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FVector RelativeLocation; // 0x84(0x0c)
};

// Class TslGameMode.*4485bd78f4
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*4485bd78f4 : U*fcb0576794 {
	enum class *3ed9616ad5 ActionType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 Phase; // 0x7c(0x04)
	bool bEnableWarningMessage; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class TslGameMode.*7a6f2bd7d6
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*7a6f2bd7d6 : U*fcb0576794 {
	enum class ETutorialCameraFadeType FadeType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float Duration; // 0x7c(0x04)
	struct FLinearColor FadeColor; // 0x80(0x10)
	bool bWaitForFade; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class TslGameMode.*7269dd324f
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*7269dd324f : U*fcb0576794 {
	struct TArray<struct F*d63d839c5a> Items; // 0x78(0x10)
	float FlyingHeight; // 0x88(0x04)
	float SpawnDistance; // 0x8c(0x04)
	float DropTime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class TslGameMode.*4fc0f7ee35
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*4fc0f7ee35 : U*fcb0576794 {
	struct UTutorialTargetProvider_FindAllByTag* MultiTargetProvider; // 0x78(0x08)
	bool bOverrideHidden; // 0x80(0x01)
	bool bHidden; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
};

// Class TslGameMode.*db197abaec
// Size: 0x78 (Inherited: 0x78)  [layout: KHOP]
struct U*db197abaec : U*fcb0576794 {
};

// Class TslGameMode.*4ad93bd6f2
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*4ad93bd6f2 : U*fcb0576794 {
	struct UTutorialSignalTargetProvider* *3da60ff3d3; // 0x78(0x08)
	bool bSetControlRotation; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class TslGameMode.*e6c14407c3
// Size: 0x88 (Inherited: 0x78)  [layout: KHOP]
struct U*e6c14407c3 : U*fcb0576794 {
	struct UAkAudioEvent* WeaponFireSound; // 0x78(0x08)
	struct UTutorialSignalTargetProvider* *9d8a662f3a; // 0x80(0x08)
};

// Class TslGameMode.*8f08f47f1a
// Size: 0x88 (Inherited: 0x78)  [layout: KHOP]
struct U*8f08f47f1a : U*fcb0576794 {
	struct TArray<struct UTutorialSignalTargetProvider*> SpawnTargetProviders; // 0x78(0x10)
};

// Class TslGameMode.*f6d6fcbace
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*f6d6fcbace : U*fcb0576794 {
	struct FName ItemID; // 0x78(0x08)
	int32 Count; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class TslGameMode.*ff98b21250
// Size: 0x78 (Inherited: 0x78)  [layout: KHOP]
struct U*ff98b21250 : U*fcb0576794 {
};

// Class TslGameMode.*145ce7ae8c
// Size: 0xa8 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*145ce7ae8c : U*fcb0576794 {
	bool bRandomMode; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName VoiceId; // 0x80(0x08)
	struct FName VoiceGroup; // 0x88(0x08)
	struct FName *348619e083; // 0x90(0x08)
	struct FName *c1c2b1c09c; // 0x98(0x08)
	enum class ETutorialVoicePlaybackMode *6ca1c8fcce; // 0xa0(0x01)
	bool *a449ac04f5; // 0xa1(0x01)
	bool *403edcb21b; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
};

// Class TslGameMode.*1d1c09931b
// Size: 0xa0 (Inherited: 0x78)  [layout: KHOP]
struct U*1d1c09931b : U*fcb0576794 {
	enum class EDuoBotActionType ActionType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FName EmoteName; // 0x80(0x08)
	bool bTrackTarget; // 0x88(0x01)
	enum class ECastableItemType CastableItemType; // 0x89(0x01)
	bool bWaitForCompletion; // 0x8a(0x01)
	char pad_8B[0xd]; // 0x8b(0x0d)
	struct UBlackboardComponent* *38f4a00e39; // 0x98(0x08)
};

// Class TslGameMode.*92ab9b8d97
// Size: 0x80 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*92ab9b8d97 : U*fcb0576794 {
	bool bEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class TslGameMode.*8305d0aa7c
// Size: 0x80 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*8305d0aa7c : U*fcb0576794 {
	enum class EDuoBotMapMarkerAction Action; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class TslGameMode.*63aededfa8
// Size: 0x80 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*63aededfa8 : U*fcb0576794 {
	bool bEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class TslGameMode.*d11ebb72e5
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*d11ebb72e5 : U*fcb0576794 {
	enum class ETutorialHealthMode Mode; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float HealthPercent; // 0x7c(0x04)
	float HealthValue; // 0x80(0x04)
	bool bBlockHPIncrease; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class TslGameMode.*5a7bbb9abf
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*5a7bbb9abf : U*fcb0576794 {
	bool bSpeaking; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float Duration; // 0x7c(0x04)
	bool bSpeakingAfterDuration; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class TslGameMode.*b85d4d6dd0
// Size: 0x98 (Inherited: 0x78)  [layout: KHOP]
struct U*b85d4d6dd0 : U*fcb0576794 {
	struct FName EnemyTag; // 0x78(0x08)
	enum class ETutorialEnemyActionType ActionType; // 0x80(0x01)
	bool bWaitForCompletion; // 0x81(0x01)
	char pad_82[0xe]; // 0x82(0x0e)
	struct UBlackboardComponent* *38f4a00e39; // 0x90(0x08)
};

// Class TslGameMode.*fdc744536a
// Size: 0xa8 (Inherited: 0x78)  [layout: KHOP]
struct U*fdc744536a : U*fcb0576794 {
	struct UClass* ItemPackageClass; // 0x78(0x08)
	struct FText CreatorName; // 0x80(0x18)
	struct TArray<struct F*a3350e3fe7> Items; // 0x98(0x10)
};

// Class TslGameMode.*691f27026e
// Size: 0x80 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*691f27026e : U*fcb0576794 {
	bool *353be9ce39; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class TslGameMode.*7a4a3b58ad
// Size: 0x98 (Inherited: 0x78)  [layout: KHOP]
struct U*7a4a3b58ad : U*fcb0576794 {
	int32 SpawnCount; // 0x78(0x04)
	int32 LoadoutIndex; // 0x7c(0x04)
	float HitAccuracy; // 0x80(0x04)
	float DamageScale; // 0x84(0x04)
	float ShootDelay; // 0x88(0x04)
	int32 ShotCount; // 0x8c(0x04)
	struct FName CharacterTag; // 0x90(0x08)
};

// Class TslGameMode.TutorialSignalCondition
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTutorialSignalCondition : UObject {
	struct UTutorialSignalTargetProvider* TargetProvider; // 0x30(0x08)
	char pad_38[0x78]; // 0x38(0x78)
	struct UTutorialSignalTrigger* OwnerTrigger; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class TslGameMode.TutorialCondition_ActionCompleted
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_ActionCompleted : UTutorialSignalCondition {
	struct FName ActionID; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)

	void HandleActionCompleted(); // Function TslGameMode.TutorialCondition_ActionCompleted.HandleActionCompleted //  // @ game+0xe1c6d40
};

// Class TslGameMode.TutorialCondition_ActorDamage
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_ActorDamage : UTutorialSignalCondition {
	float MinDamage; // 0xc0(0x04)
	char pad_C4[0x1c]; // 0xc4(0x1c)

	void HandleTakeAnyDamage(); // Function TslGameMode.TutorialCondition_ActorDamage.HandleTakeAnyDamage //  // @ game+0xe1c7878
};

// Class TslGameMode.TutorialCondition_BlueChipTowerInteraction
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_BlueChipTowerInteraction : UTutorialSignalCondition {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class TslGameMode.TutorialCondition_BlueZoneDamage
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_BlueZoneDamage : UTutorialSignalCondition {
	float MinDamage; // 0xc0(0x04)
	enum class ETutorialBlueZoneDamageTriggerMode TriggerMode; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float CooldownSec; // 0xc8(0x04)
	char pad_CC[0x14]; // 0xcc(0x14)

	void HandleTakeDamage(); // Function TslGameMode.TutorialCondition_BlueZoneDamage.HandleTakeDamage //  // @ game+0xe1c8318
};

// Class TslGameMode.TutorialCondition_BoostGauge
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_BoostGauge : UTutorialSignalCondition {
	float ThresholdPercent; // 0xc0(0x04)
	bool bTriggerWhenBelow; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float TickInterval; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class TslGameMode.TutorialCondition_CharacterDeath
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_CharacterDeath : UTutorialSignalCondition {
	struct UTutorialTargetProvider_FindAllByTag* MultiTargetProvider; // 0xc0(0x08)
	struct UTutorialSignalTargetProvider* KillerProvider; // 0xc8(0x08)
	bool bRequireHeadshot; // 0xd0(0x01)
	enum class EDamageTypeCategory RequiredDamageTypeCategory; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct TArray<enum class EDamageTypeCategory> ExcludedDamageTypeCategories; // 0xd8(0x10)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class TslGameMode.TutorialCondition_CharacterItem
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_CharacterItem : UTutorialSignalCondition {
	enum class ETutorialSignalCharacterItemQueryType QueryType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FName ItemID; // 0xc8(0x08)
	bool bExpectedValue; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// Class TslGameMode.TutorialCondition_CharacterRevive
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_CharacterRevive : UTutorialSignalCondition {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class TslGameMode.TutorialCondition_CharacterState
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_CharacterState : UTutorialSignalCondition {
	bool bUseTick; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float TickInterval; // 0xc4(0x04)
	enum class ETutorialSignalCharacterStateType StateType; // 0xc8(0x01)
	bool bExpectedValue; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// Class TslGameMode.TutorialCondition_Composite
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_Composite : UTutorialSignalCondition {
	struct TArray<struct UTutorialSignalCondition*> SubConditions; // 0xc0(0x10)
	enum class EConditionOperator Operator; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// Class TslGameMode.TutorialCondition_DeathByWeaponClass
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_DeathByWeaponClass : UTutorialSignalCondition {
	struct TArray<enum class EWeaponClass> AllowedWeaponClasses; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
};

// Class TslGameMode.TutorialCondition_Delay
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_Delay : UTutorialSignalCondition {
	float DelaySeconds; // 0xc0(0x04)
	char pad_C4[0x1c]; // 0xc4(0x1c)
};

// Class TslGameMode.TutorialCondition_DuoBotInteract
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_DuoBotInteract : UTutorialSignalCondition {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class TslGameMode.TutorialCondition_Health
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_Health : UTutorialSignalCondition {
	float HealthThresholdPercent; // 0xc0(0x04)
	bool bTriggerWhenBelow; // 0xc4(0x01)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// Class TslGameMode.TutorialCondition_InputAction
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_InputAction : UTutorialSignalCondition {
	struct FName ActionName; // 0xc0(0x08)
	bool bTriggerOnPressed; // 0xc8(0x01)
	bool bLatchOnce; // 0xc9(0x01)
	char pad_CA[0x16]; // 0xca(0x16)
};

// Class TslGameMode.TutorialCondition_InputAxis
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_InputAxis : UTutorialSignalCondition {
	struct FName AxisName; // 0xc0(0x08)
	enum class EAxisCompareType CompareType; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float Threshold; // 0xcc(0x04)
	bool bLatchOnce; // 0xd0(0x01)
	char pad_D1[0x1f]; // 0xd1(0x1f)
};

// Class TslGameMode.TutorialCondition_ItemUsed
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_ItemUsed : UTutorialSignalCondition {
	struct FName ItemID; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)
};

// Class TslGameMode.TutorialCondition_OpenInventoryNearDeathDropItemPackage
// Size: 0xd0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_OpenInventoryNearDeathDropItemPackage : UTutorialSignalCondition {
	bool bIgnoreCarriedDeathDropItemPackage; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// Class TslGameMode.TutorialCondition_ParachuteLanding
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_ParachuteLanding : UTutorialSignalCondition {
	struct UTutorialSignalTargetProvider* CharacterProvider; // 0xc0(0x08)
	bool bAcceptPerfect; // 0xc8(0x01)
	bool bAcceptSuccess; // 0xc9(0x01)
	bool bAcceptFail; // 0xca(0x01)
	char pad_CB[0x15]; // 0xcb(0x15)
};

// Class TslGameMode.TutorialCondition_RadioMessage
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_RadioMessage : UTutorialSignalCondition {
	bool bAnyCategory; // 0xc0(0x01)
	enum class ERadioMessageCategory CategoryFilter; // 0xc1(0x01)
	char pad_C2[0x2e]; // 0xc2(0x2e)
};

// Class TslGameMode.TutorialCondition_TakeDamage
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_TakeDamage : UTutorialSignalCondition {
	float MinDamage; // 0xc0(0x04)
	bool bResetAfterFire; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float CooldownSeconds; // 0xc8(0x04)
	bool bFallDamageOnly; // 0xcc(0x01)
	enum class EDamageTypeCategory RequiredDamageTypeCategory; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct TArray<enum class EDamageTypeCategory> ExcludedDamageTypeCategories; // 0xd0(0x10)
	char pad_E0[0x10]; // 0xe0(0x10)

	void HandleTakeDamage(); // Function TslGameMode.TutorialCondition_TakeDamage.HandleTakeDamage //  // @ game+0xe1c8db0
};

// Class TslGameMode.TutorialCondition_TriggerVolume
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_TriggerVolume : UTutorialSignalCondition {
	struct UTutorialSignalTargetProvider* CharacterProvider; // 0xc0(0x08)
	enum class ETutorialTriggerVolumeTarget TargetType; // 0xc8(0x01)
	enum class ETutorialTriggerVolumeMode TriggerMode; // 0xc9(0x01)
	bool bPersistOnExit; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
	struct UClass* ProjectileClassFilter; // 0xd0(0x08)
	float RequiredDuration; // 0xd8(0x04)
	char pad_DC[0x14]; // 0xdc(0x14)

	void OnCharacterExited(); // Function TslGameMode.TutorialCondition_TriggerVolume.OnCharacterExited //  // @ game+0xe1cb8ac
	void OnCharacterEntered(); // Function TslGameMode.TutorialCondition_TriggerVolume.OnCharacterEntered //  // @ game+0xe1cb830
	void OnProjectileExited(); // Function TslGameMode.TutorialCondition_TriggerVolume.OnProjectileExited //  // @ game+0xe1d12a4
	void OnProjectileEntered(); // Function TslGameMode.TutorialCondition_TriggerVolume.OnProjectileEntered //  // @ game+0xe1d1024
};

// Class TslGameMode.TutorialCondition_VoiceInput
// Size: 0xe0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_VoiceInput : UTutorialSignalCondition {
	float EnergyThreshold; // 0xc0(0x04)
	char pad_C4[0x1c]; // 0xc4(0x1c)

	void OnMicVuMeterUpdated(); // Function TslGameMode.TutorialCondition_VoiceInput.OnMicVuMeterUpdated //  // @ game+0xe1cee64
};

// Class TslGameMode.TutorialCondition_WeaponFireCount
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_WeaponFireCount : UTutorialSignalCondition {
	struct TArray<enum class EWeaponClass> AllowedWeaponClasses; // 0xc0(0x10)
	int32 TargetFireCount; // 0xd0(0x04)
	float CompletionDelaySec; // 0xd4(0x04)
	char pad_D8[0x18]; // 0xd8(0x18)
};

// Class TslGameMode.TutorialCondition_WeaponState
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_WeaponState : UTutorialSignalCondition {
	enum class ETslWeaponStateConditionType ConditionType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FName WeaponItemId; // 0xc8(0x08)
	char pad_D0[0x20]; // 0xd0(0x20)
};

// Class TslGameMode.TutorialCondition_WidgetVisible
// Size: 0xf0 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTutorialCondition_WidgetVisible : UTutorialSignalCondition {
	struct FString WidgetName; // 0xc0(0x10)
	bool bExpectedVisible; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float RequiredVisibleSeconds; // 0xd4(0x04)
	char pad_D8[0x18]; // 0xd8(0x18)
};

// Class TslGameMode.*5b6732e3a8
// Size: 0x1f8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*5b6732e3a8 : UObject {
	struct FMulticastDelegate OnAnyTriggerFired; // 0x30(0x10)
	char pad_40[0xa0]; // 0x40(0xa0)
	struct TArray<struct UTutorialSignalTrigger*> *626be47f2a; // 0xe0(0x10)
	struct TArray<struct U*fcb0576794*> *21bb6c6873; // 0xf0(0x10)
	struct TMap<struct ATslPlayerController*, struct U*276a55ffd1*> *9c9954e618; // 0x100(0x50)
	char pad_150[0xa8]; // 0x150(0xa8)

	void *ddac294140(); // Function TslGameMode.*5b6732e3a8.*ddac294140 //  // @ game+0xe1c52fc
	void *fcb622995b(); // Function TslGameMode.*5b6732e3a8.*fcb622995b //  // @ game+0xe1ddcec
	void *68dee8cd2c(); // Function TslGameMode.*5b6732e3a8.*68dee8cd2c //  // @ game+0xe1c5384
	void OnAnyTriggerFired__DelegateSignature(); // DelegateFunction TslGameMode.*5b6732e3a8.OnAnyTriggerFired__DelegateSignature //  // @ game+0x43bab4
	void *86bc92dfa9(); // Function TslGameMode.*5b6732e3a8.*86bc92dfa9 //  // @ game+0xe1c4dbc
	void *d1d774c30e(); // Function TslGameMode.*5b6732e3a8.*d1d774c30e //  // @ game+0xe1bfea4
	void *c0543132f5(); // Function TslGameMode.*5b6732e3a8.*c0543132f5 //  // @ game+0xe1c5500
	void *092d666f30(); // Function TslGameMode.*5b6732e3a8.*092d666f30 //  // @ game+0xe1bfd68
	void *92c65411a0(); // Function TslGameMode.*5b6732e3a8.*92c65411a0 //  // @ game+0xe1c4b78
	void *fbd8ef0919(); // Function TslGameMode.*5b6732e3a8.*fbd8ef0919 //  // @ game+0xe1c4a70
	void *3868b013f3(); // Function TslGameMode.*5b6732e3a8.*3868b013f3 //  // @ game+0xe1c49b4
	void *2b5e85cd99(); // Function TslGameMode.*5b6732e3a8.*2b5e85cd99 //  // @ game+0xe1c4d30
	void *32d13e62cd(); // Function TslGameMode.*5b6732e3a8.*32d13e62cd //  // @ game+0xe1c5488
	void *09008498f3(); // Function TslGameMode.*5b6732e3a8.*09008498f3 //  // @ game+0xe1bdd40
};

// Class TslGameMode.*276a55ffd1
// Size: 0x240 (Inherited: 0x210)  [layout: KHOP]
struct U*276a55ffd1 : UActorComponent {
	struct U*5b6732e3a8* *9b6de6618d; // 0x208(0x08)
	struct TArray<struct F*de2402ca8b> *2750024afd; // 0x210(0x10) rep=OnRep_TriggerDataList
	struct TArray<struct FName> *36edceb52f; // 0x220(0x10) rep=OnRep_ActiveTriggerIDs
	struct TArray<struct UTutorialSignalPlayerTrigger*> *6f41238a9a; // 0x230(0x10)

	void *325635be0e(); // Function TslGameMode.*276a55ffd1.*325635be0e //  // @ game+0xe1d87b0
	void OnRep_ActiveTriggerIDs(); // Function TslGameMode.*276a55ffd1.OnRep_ActiveTriggerIDs //  // @ game+0xe1d1a48
	void OnRep_TriggerDataList(); // Function TslGameMode.*276a55ffd1.OnRep_TriggerDataList //  // @ game+0xe1d2f00
};

// Class TslGameMode.TutorialSignalTargetProvider
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTutorialSignalTargetProvider : UObject {

	void GetDescription(); // Function TslGameMode.TutorialSignalTargetProvider.GetDescription //  // @ game+0xe1c6230
};

// Class TslGameMode.TutorialTargetProvider_DuoBot
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTutorialTargetProvider_DuoBot : UTutorialSignalTargetProvider {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class TslGameMode.TutorialTargetProvider_FindAllByTag
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UTutorialTargetProvider_FindAllByTag : UTutorialSignalTargetProvider {
	struct TArray<struct FName> ActorTags; // 0x30(0x10)
};

// Class TslGameMode.TutorialTargetProvider_FindByClass
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UTutorialTargetProvider_FindByClass : UTutorialSignalTargetProvider {
	char pad_30[0x10]; // 0x30(0x10)
	struct UClass* ActorClass; // 0x40(0x08)
};

// Class TslGameMode.TutorialTargetProvider_FindByTag
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UTutorialTargetProvider_FindByTag : UTutorialSignalTargetProvider {
	char pad_30[0x10]; // 0x30(0x10)
	struct FName ActorTag; // 0x40(0x08)
};

// Class TslGameMode.TutorialTargetProvider_FindRandomByTag
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UTutorialTargetProvider_FindRandomByTag : UTutorialSignalTargetProvider {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct FName> ActorTags; // 0x40(0x10)
};

// Class TslGameMode.TutorialTargetProvider_OwningPlayer
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTutorialTargetProvider_OwningPlayer : UTutorialSignalTargetProvider {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class TslGameMode.TutorialTargetProvider_Player
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTutorialTargetProvider_Player : UTutorialSignalTargetProvider {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class TslGameMode.TutorialSignalTrigger
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTutorialSignalTrigger : UObject {
	struct FMulticastDelegate OnFired; // 0x30(0x10)
	struct FName TriggerID; // 0x40(0x08)
	struct UTutorialSignalCondition* Condition; // 0x48(0x08)
	struct TArray<struct FName> ActionIDs; // 0x50(0x10)
	bool bIsActive; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)

	void Deactivate(); // Function TslGameMode.TutorialSignalTrigger.Deactivate //  // @ game+0x1180b28
	void Activate(); // Function TslGameMode.TutorialSignalTrigger.Activate //  // @ game+0xffa970
	void Fire(); // Function TslGameMode.TutorialSignalTrigger.Fire //  // @ game+0xdb87190
	void OnFired__DelegateSignature(); // DelegateFunction TslGameMode.TutorialSignalTrigger.OnFired__DelegateSignature //  // @ game+0x43bab4
};

// Class TslGameMode.TutorialSignalPlayerTrigger
// Size: 0x80 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UTutorialSignalPlayerTrigger : UTutorialSignalTrigger {
	char pad_70[0x10]; // 0x70(0x10)
};

// Class TslGameMode.*493abe4ff0
// Size: 0x148 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*493abe4ff0 : UObject {
	struct FMulticastDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastDelegate OnPreEntryCompleted; // 0x40(0x10)
	struct FName StepID; // 0x50(0x08)
	struct TArray<struct U*fcb0576794*> PreEntryActions; // 0x58(0x10)
	struct TArray<struct U*fcb0576794*> *d78b1a432e; // 0x68(0x10)
	struct TArray<struct UTutorialSignalTrigger*> *f3ad9245b1; // 0x78(0x10)
	struct TArray<struct UTutorialSignalTrigger*> *dbccca8fac; // 0x88(0x10)
	struct TArray<struct U*fcb0576794*> *f02090bf96; // 0x98(0x10)
	struct TArray<struct UTutorialSignalTrigger*> *2a21ac856a; // 0xa8(0x10)
	struct TArray<struct U*fcb0576794*> *62ccb626e4; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
	enum class ETutorialStepResult *969ddeb475; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	int32 TargetProgress; // 0xd4(0x04)
	int32 ClearScore; // 0xd8(0x04)
	int32 PenaltyScore; // 0xdc(0x04)
	int32 CurrentProgress; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
	SetProperty *7fc48cfa1e; // 0xf0(0x50)
	char pad_140[0x8]; // 0x140(0x08)

	void *600d013d9e(); // Function TslGameMode.*493abe4ff0.*600d013d9e //  // @ game+0xe1c4c04
	void HandleSuccessTriggerFired(); // Function TslGameMode.*493abe4ff0.HandleSuccessTriggerFired //  // @ game+0xe1c77fc
	void *0c78b002e1(); // Function TslGameMode.*493abe4ff0.*0c78b002e1 //  // @ game+0xe1c4bf0
	void *2e1b9f9d20(); // Function TslGameMode.*493abe4ff0.*2e1b9f9d20 //  // @ game+0xe1c49a0
	void HandleFailTriggerFired(); // Function TslGameMode.*493abe4ff0.HandleFailTriggerFired //  // @ game+0xe1c7014
	void *561a5d80dc(); // Function TslGameMode.*493abe4ff0.*561a5d80dc //  // @ game+0xe1d7ce0
	void *fed8fd4b1a(); // Function TslGameMode.*493abe4ff0.*fed8fd4b1a //  // @ game+0xe1c64b0
	void OnStepCompleted__DelegateSignature(); // DelegateFunction TslGameMode.*493abe4ff0.OnStepCompleted__DelegateSignature //  // @ game+0x43bab4
	void *10328c6c83(); // Function TslGameMode.*493abe4ff0.*10328c6c83 //  // @ game+0xe1c692c
	void ResolvePreEntryActionsToExecute(); // Function TslGameMode.*493abe4ff0.ResolvePreEntryActionsToExecute //  // @ game+0xe1d7d24
	void *cb66768e8c(); // Function TslGameMode.*493abe4ff0.*cb66768e8c //  // @ game+0xe1c6160
	void *8582953db4(); // Function TslGameMode.*493abe4ff0.*8582953db4 //  // @ game+0xe1c60d8
	void *cc30912883(); // Function TslGameMode.*493abe4ff0.*cc30912883 //  // @ game+0xe1c6b28
	void OnTriggerFired(); // Function TslGameMode.*493abe4ff0.OnTriggerFired //  // @ game+0xe1d55ec
	void *09b139e663(); // Function TslGameMode.*493abe4ff0.*09b139e663 //  // @ game+0xe1c98a0
	void OnStepExit(); // Function TslGameMode.*493abe4ff0.OnStepExit //  // @ game+0xe1d4d38
	void *d68582ec33(); // Function TslGameMode.*493abe4ff0.*d68582ec33 //  // @ game+0xe1c4c78
	void OnStepPreEntryCompleted__DelegateSignature(); // DelegateFunction TslGameMode.*493abe4ff0.OnStepPreEntryCompleted__DelegateSignature //  // @ game+0x43bab4
	void *39f18a661a(); // Function TslGameMode.*493abe4ff0.*39f18a661a //  // @ game+0xe1c6638
	void HandlePreEntryActionCompleted(); // Function TslGameMode.*493abe4ff0.HandlePreEntryActionCompleted //  // @ game+0xe1c7638
	void *8ba0b5dfec(); // Function TslGameMode.*493abe4ff0.*8ba0b5dfec //  // @ game+0xe1c6428
	void OnStepEnter(); // Function TslGameMode.*493abe4ff0.OnStepEnter //  // @ game+0xdb87190
};

// Class TslGameMode.TutorialStepEntryWidget
// Size: 0x520 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTutorialStepEntryWidget : UUmgBaseWidget {
	struct UBorder* BorderStep; // 0x420(0x08)
	struct UHorizontalBox* ListStep; // 0x428(0x08)
	struct USizeBox* SizeboxStep; // 0x430(0x08)
	struct UWidgetSwitcher* SwitcherCheckbox; // 0x438(0x08)
	struct UImage* CompletionEffectImage; // 0x440(0x08)
	struct UTslRichTextBlock* TextStep; // 0x448(0x08)
	struct FTutorialWidgetAppearance CurrentAppearance; // 0x450(0x24)
	struct FTutorialWidgetAppearance NormalAppearance; // 0x474(0x24)
	struct U*7fa8406bd3* AnimToInProgress; // 0x498(0x08)
	struct U*7fa8406bd3* AnimToCompleted; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimToFailed; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimToFailedQuiet; // 0x4b0(0x08)
	struct U*7fa8406bd3* AnimToWarn; // 0x4b8(0x08)
	struct FLinearColor ClearColor; // 0x4c0(0x10)
	struct FLinearColor NormalColor; // 0x4d0(0x10)
	struct FText UnboundKeyFallbackText; // 0x4e0(0x18)
	char pad_4F8[0x28]; // 0x4f8(0x28)

	void HandleInputSettingsUpdated(); // Function TslGameMode.TutorialStepEntryWidget.HandleInputSettingsUpdated //  // @ game+0xe1c72d4
};

// Class TslGameMode.TutorialStepListWidget
// Size: 0x4b8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTutorialStepListWidget : UUmgBaseWidget {
	struct UVerticalBox* ListStep; // 0x420(0x08)
	struct UClass* StepWidgetClass; // 0x428(0x08)
	struct TMap<struct FName, struct UTutorialStepEntryWidget*> StepWidgets; // 0x430(0x50)
	struct UDataTable* ChapterDataTable; // 0x480(0x08)
	char pad_488[0x30]; // 0x488(0x30)
};

// Class TslGameMode.*42545a37c0
// Size: 0xf0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*42545a37c0 : UObject {
	struct UDataTable* *c406364be0; // 0x30(0x08)
	struct UStringTable* *3dfc999584; // 0x38(0x08)
	char pad_40[0xb0]; // 0x40(0xb0)
};

