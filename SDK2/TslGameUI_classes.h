// Class TslGameUI.TutorialMissionListWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTutorialMissionListWidget : UUmgBaseWidget {
};

// Class TslGameUI.MapGridWidget
// Size: 0x990 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMapGridWidget : UUmgBaseWidget {
	struct UCanvasPanel* MainCanvas; // 0x420(0x08)
	struct UClass* MapLayerManagerClass; // 0x428(0x08)
	struct FAnchorData DefaultMapLayerLayout; // 0x430(0x28)
	struct UTslMapLayerManager* MapLayerManager; // 0x458(0x08)
	struct TArray<struct U*631e776af0*> MapLayers; // 0x460(0x10)
	char pad_470[0x70]; // 0x470(0x70)
	struct TMap<struct FString, struct FTslCustomMapGridSettings> CustomMapGridSettingsMap; // 0x4e0(0x50)
	bool bIsMinimap; // 0x530(0x01)
	bool bDrawNextPlayzoneLine; // 0x531(0x01)
	bool bDrawBluezoneLine; // 0x532(0x01)
	char pad_533[0x19]; // 0x533(0x19)
	float ZoomLevel; // 0x54c(0x04)
	float ShowGridZoomLevel; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UCurveFloat* ViewRatioCurve; // 0x558(0x08)
	struct UCurveFloat* MapSizeCurve; // 0x560(0x08)
	bool bRectangleViewMode; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct UFont* GridFont; // 0x570(0x08)
	struct FName FontTypeFace; // 0x578(0x08)
	struct TArray<struct FString> GridTextHorizentalArray; // 0x580(0x10)
	struct TArray<struct FString> GridTextVerticalArray; // 0x590(0x10)
	struct FLinearColor ColorLargeGrid; // 0x5a0(0x10)
	struct FLinearColor ColorSmallGrid; // 0x5b0(0x10)
	struct FLinearColor ColorText; // 0x5c0(0x10)
	float ThicknessLargeGrid; // 0x5d0(0x04)
	float ThicknessSmallGrid; // 0x5d4(0x04)
	struct FLinearColor ColorBlueZoneWarning; // 0x5d8(0x10)
	struct FLinearColor ShapeShadowColor; // 0x5e8(0x10)
	bool bDrawGridLine; // 0x5f8(0x01)
	bool bDrawGridText; // 0x5f9(0x01)
	bool bDrawNextPlayzoneGuideLine; // 0x5fa(0x01)
	char pad_5FB[0x1]; // 0x5fb(0x01)
	float NextPlayzoneGuideDottedLength; // 0x5fc(0x04)
	float NextPlayzoneGuideDottedInterval; // 0x600(0x04)
	float NextPlayzoneGuideAnimationSpeed; // 0x604(0x04)
	struct FLinearColor DefaultIconColor; // 0x608(0x10)
	struct FVector2D MinimapViewSize_MC; // 0x618(0x08)
	float DefaultThicknessMultiplier; // 0x620(0x04)
	float MinThicknessMultiplier; // 0x624(0x04)
	struct FLinearColor WeaponGunFireLineColor; // 0x628(0x10)
	struct FSlateBrush RectangleBlueZoneSlateBrush; // 0x638(0x90)
	struct FSlateBrush RectangleBlueZoneShadowSlateBrush; // 0x6c8(0x90)
	struct FSlateBrush RectangleInnerBlueZoneSlateBrush; // 0x758(0x90)
	struct FSlateBrush RectangleInnerBlueZoneShadowSlateBrush; // 0x7e8(0x90)
	char pad_878[0x18]; // 0x878(0x18)
	struct TArray<struct ATslCharacter*> ReplicatedCharacterList; // 0x890(0x10)
	char pad_8A0[0x80]; // 0x8a0(0x80)
	struct FTimerHandle ReplicatedCharacterListUpdateTimer; // 0x920(0x08)
	char pad_928[0x28]; // 0x928(0x28)
	struct FMulticastDelegate CloseMySelf; // 0x950(0x10)
	struct FMulticastDelegate OnHideOwner; // 0x960(0x10)
	char pad_970[0x18]; // 0x970(0x18)
	bool bIsIgnoreMapClamp; // 0x988(0x01)
	char pad_989[0x7]; // 0x989(0x07)

	void OnGotoTimelineDone(); // Function TslGameUI.MapGridWidget.OnGotoTimelineDone //  // @ game+0xe48ce0c
	void OnReset(); // Function TslGameUI.MapGridWidget.OnReset //  // @ game+0xe48fb78
	void GetMapImageWigetSizeAndImageOffset(); // Function TslGameUI.MapGridWidget.GetMapImageWigetSizeAndImageOffset //  // @ game+0x43bab4
	void UpdateRectangleViewByWidgetSize(); // Function TslGameUI.MapGridWidget.UpdateRectangleViewByWidgetSize //  // @ game+0x43bab4
	void UpdateRectangleView(); // Function TslGameUI.MapGridWidget.UpdateRectangleView //  // @ game+0x43bab4
	void UpdateReplicatedCharacterList(); // Function TslGameUI.MapGridWidget.UpdateReplicatedCharacterList //  // @ game+0xe498d60
	void GetLocalMousePosition(); // Function TslGameUI.MapGridWidget.GetLocalMousePosition //  // @ game+0xe47ef90
	void UCtoMC(); // Function TslGameUI.MapGridWidget.UCtoMC //  // @ game+0xe497cac
	void UpdateWidgetSize_UC(); // Function TslGameUI.MapGridWidget.UpdateWidgetSize_UC //  // @ game+0xe49a564
	void SetCenter_MC(); // Function TslGameUI.MapGridWidget.SetCenter_MC //  // @ game+0xe496d2c
	void SetImageBrush(); // Function TslGameUI.MapGridWidget.SetImageBrush //  // @ game+0x43bab4
};

// Class TslGameUI.*631e776af0
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*631e776af0 : UObject {
	bool *94b423423d; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FAnchorData *d9ee8535de; // 0x34(0x28)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UCanvasPanel* *a3b7223b2f; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)

	void OnGotoTimelineDone(); // Function TslGameUI.*631e776af0.OnGotoTimelineDone //  // @ game+0xe48ce20
};

// Class TslGameUI.*7b03be5e34
// Size: 0xb0 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct U*7b03be5e34 : U*631e776af0 {
	struct FAnchorData *1a58bcae11; // 0x80(0x28)
	bool *48cf3556db; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class TslGameUI.*adc663050a
// Size: 0xb8 (Inherited: 0xb0)  [layout: KHOP]
struct U*adc663050a : U*7b03be5e34 {
	struct UClass* *0944d00c0f; // 0xb0(0x08)
};

// Class TslGameUI.TslKeyNotifyWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslKeyNotifyWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* KeyHint_Switcher; // 0x420(0x08)
	struct USizeBox* KeyHint_SizeBox; // 0x428(0x08)
	float MinimapExtendedOffset; // 0x430(0x04)
	float FlareGunExtendedOffset; // 0x434(0x04)
	float KeyHintExtraOffset; // 0x438(0x04)
	char pad_43C[0xc]; // 0x43c(0x0c)

	void UpdatePositionOnMinimapExtended(); // Function TslGameUI.TslKeyNotifyWidget.UpdatePositionOnMinimapExtended //  // @ game+0xe498d38
};

// Class TslGameUI.TslKeyNotifyWidget_Customizable
// Size: 0x4a0 (Inherited: 0x448)  [layout: LECH - offset chi la uoc luong]
struct UTslKeyNotifyWidget_Customizable : UTslKeyNotifyWidget {
	struct UVerticalBox* KeyHint_VerticalBox_Console; // 0x448(0x08)
	struct UVerticalBox* KeyHint_VerticalBox_Pc; // 0x450(0x08)
	struct TArray<struct FKeyNotifyDataList> KeyDatas_Console; // 0x458(0x10)
	struct TArray<struct FKeyNotifyDataList> KeyDatas_Pc; // 0x468(0x10)
	char pad_478[0x28]; // 0x478(0x28)
};

// Class TslGameUI.TslMapImageMapLayer
// Size: 0xf8 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UTslMapImageMapLayer : U*631e776af0 {
	struct FAnchorData *17e8829cfa; // 0x80(0x28)
	bool *06edee7958; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FColorBlindColorSet *d8ab4c6675; // 0xb0(0x10)
	struct FColorBlindColorSet *7b212812eb; // 0xc0(0x10)
	float BluezoneDesaturation; // 0xd0(0x04)
	float Desaturation; // 0xd4(0x04)
	float Contrast; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UMaterialInstanceDynamic* *47cc36d85a; // 0xe0(0x08)
	struct UImage* *97342fcb87; // 0xe8(0x08)
	char pad_F0[0x8]; // 0xf0(0x08)

	void OnGameUserSettingApplied(); // Function TslGameUI.TslMapImageMapLayer.OnGameUserSettingApplied //  // @ game+0xe48ca8c
};

// Class TslGameUI.BaseResultWidget
// Size: 0x490 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UBaseResultWidget : UBlockInputUserWidget {
	struct UTslGamepadMultipleKeyIconWidget* LobbyKeyIcon; // 0x470(0x08)
	struct UTslGamepadKeyIconWidget* LobbyKeyIconSingle; // 0x478(0x08)
	char pad_480[0x10]; // 0x480(0x10)

	void OnClicked_ButtonLobby(); // Function TslGameUI.BaseResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
	void OnGoToLobby(); // Function TslGameUI.BaseResultWidget.OnGoToLobby //  // @ game+0xe474ef8
	void OnButtonSoundHovered(); // Function TslGameUI.BaseResultWidget.OnButtonSoundHovered //  // @ game+0xe195788
	void OnButtonSoundClicked(); // Function TslGameUI.BaseResultWidget.OnButtonSoundClicked //  // @ game+0xe4747d8
};

// Class TslGameUI.MinimapCanvasWidget
// Size: 0x560 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMinimapCanvasWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTslCompassWidget* BPCompassWidget; // 0x428(0x08)
	struct UObserverBluezoneTimeWidget* BluezoneHudWidget; // 0x430(0x08)
	struct UBluezoneGpsBaseWidget* BluezoneGpsWidget; // 0x438(0x08)
	struct UBluezoneTimeWidget* BluezoneTimeWidget; // 0x440(0x08)
	struct UBluezonePhaseWidget* BluezonePhaseWidget; // 0x448(0x08)
	struct UTslRevivalTimerWidget* RevivalTimer; // 0x450(0x08)
	struct UWidgetSwitcher* TopInfoWidgetSwitcher; // 0x458(0x08)
	struct UTslFlareGunWidget* FlareGunWidget; // 0x460(0x08)
	struct UMiniMapBaseWidget* WidgetMinimap; // 0x468(0x08)
	struct URetainerBox* RetainerboxMinimap; // 0x470(0x08)
	struct USizeBox* SizeboxMinimap; // 0x478(0x08)
	struct UWidgetSwitcher* SwitcherBluezoneInfo; // 0x480(0x08)
	struct TArray<struct FExtendedSizeConfig> ExtendedSizeConfigs; // 0x488(0x10)
	struct TArray<struct FExtendedSizeConfig> ExtendedSizeConfigsForObserver; // 0x498(0x10)
	int32 DefaultMinimapSizeIndex; // 0x4a8(0x04)
	float MinimapSizeOffset; // 0x4ac(0x04)
	struct TMap<enum class EGameModeType, struct UMaterialInterface*> ModeMiniMapRetainerEffectMaterials; // 0x4b0(0x50)
	struct TMap<enum class EGameModeType, int32> ModeMiniMapDefaultSize; // 0x500(0x50)
	char pad_550[0x10]; // 0x550(0x10)

	void UpdateWidgetEnabled(); // Function TslGameUI.MinimapCanvasWidget.UpdateWidgetEnabled //  // @ game+0xe4990e8
	void OnToggleMinimapCenter(); // Function TslGameUI.MinimapCanvasWidget.OnToggleMinimapCenter //  // @ game+0xe494248
	void OnNextMinimapSize(); // Function TslGameUI.MinimapCanvasWidget.OnNextMinimapSize //  // @ game+0xe48ed00
	void OnResetMinimapSize(); // Function TslGameUI.MinimapCanvasWidget.OnResetMinimapSize //  // @ game+0xe48fbb8
	void ToggleExtendedMinimap(); // Function TslGameUI.MinimapCanvasWidget.ToggleExtendedMinimap //  // @ game+0xe497c3c
	void OnPressExtendedMinimap(); // Function TslGameUI.MinimapCanvasWidget.OnPressExtendedMinimap //  // @ game+0xe48f890
	void OnPrevMinimapSize(); // Function TslGameUI.MinimapCanvasWidget.OnPrevMinimapSize //  // @ game+0xe48f8f8
	void OnReleaseExtendedMinimap(); // Function TslGameUI.MinimapCanvasWidget.OnReleaseExtendedMinimap //  // @ game+0xe48fa38
	void OnToggleExtendedMinimap(); // Function TslGameUI.MinimapCanvasWidget.OnToggleExtendedMinimap //  // @ game+0xe494220
};

// Class TslGameUI.TslScreenIndicatorCanvasWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslScreenIndicatorCanvasWidget : UUmgBaseWidget {
	struct TArray<struct UScreenIndicatorBaseWidget*> IndicatorWidgets; // 0x420(0x10)
	struct UClass* IndicatorWidgetClass; // 0x430(0x08)
	struct UCanvasPanel* PanelIndicator; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)
};

// Class TslGameUI.ScreenIndicatorBaseWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UScreenIndicatorBaseWidget : UUmgBaseWidget {
	struct FVector2D ScreenEdgeSize; // 0x420(0x08)
	struct FVector2D IndicatorWidgetSize; // 0x428(0x08)
	bool bHideIfNotInScreen; // 0x430(0x01)
	char pad_431[0x1f]; // 0x431(0x1f)
};

// Class TslGameUI.*9ce5549961
// Size: 0xe0 (Inherited: 0x80)  [layout: KHOP]
struct U*9ce5549961 : U*631e776af0 {
	struct UClass* *eb0f36590e; // 0x80(0x08)
	struct UMaterialInstance* *4a3c1d9720; // 0x88(0x08)
	struct TMap<struct FString, struct UTslMapCharacterIconWidget*> *533ec279b8; // 0x90(0x50)
};

// Class TslGameUI.*0bcba5de25
// Size: 0x148 (Inherited: 0xe0)  [layout: KHOP]
struct U*0bcba5de25 : U*9ce5549961 {
	struct FLinearColor *b3676b083e; // 0xe0(0x10)
	bool *1cdfedb566; // 0xf0(0x01)
	bool *611eb8b125; // 0xf1(0x01)
	bool *94055c07a8; // 0xf2(0x01)
	char pad_F3[0x5]; // 0xf3(0x05)
	struct TMap<struct FString, struct F*b8bd4046c4> *01750284cd; // 0xf8(0x50)

	void NotifyDeath(); // Function TslGameUI.*0bcba5de25.NotifyDeath //  // @ game+0x479a7c
};

// Class TslGameUI.TslObservingCharacterIconMapLayer
// Size: 0x148 (Inherited: 0x148)  [layout: KHOP]
struct UTslObservingCharacterIconMapLayer : U*0bcba5de25 {

	void HandleOnMapIconClicked(); // Function TslGameUI.TslObservingCharacterIconMapLayer.HandleOnMapIconClicked //  // @ game+0xe47fdd4
};

// Class TslGameUI.TslNewWorldMapWidget
// Size: 0x608 (Inherited: 0x470)  [layout: KHOP]
struct UTslNewWorldMapWidget : UBlockInputUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
	struct FMulticastDelegate OnHideMyself; // 0x478(0x10)
	struct UTslWorldMapInfoWidgetBase* TrainingInfo; // 0x488(0x08)
	struct UWidget* ImageTrainingInfoBg; // 0x490(0x08)
	struct UWidget* KeyGuideWidget; // 0x498(0x08)
	struct UTslRevivalWidget* RevivalInfo; // 0x4a0(0x08)
	struct UWidget* FlaregunInfo; // 0x4a8(0x08)
	struct UMapGridWidget* MapGrid; // 0x4b0(0x08)
	struct UTslWorldMapButtonsWidget* WorldMapButtons; // 0x4b8(0x08)
	struct UWidgetSwitcher* SwitcherPadGuide; // 0x4c0(0x08)
	bool bIsFixSize; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UCurveFloat* MapSizeCurve; // 0x4d0(0x08)
	struct UCurveFloat* MapSizeChangeTimeCurve; // 0x4d8(0x08)
	struct UCurveFloat* PositionMoveTimeCurve; // 0x4e0(0x08)
	struct UCurveFloat* MovePadGuideCurve; // 0x4e8(0x08)
	struct UCurveFloat* ZoomMultiplierCurve; // 0x4f0(0x08)
	struct FVector2D SizeOffset; // 0x4f8(0x08)
	struct FVector2D StartSize; // 0x500(0x08)
	struct FVector2D StartPosition; // 0x508(0x08)
	struct FVector2D PositionOffset; // 0x510(0x08)
	struct FVector2D MouseDownPosition; // 0x518(0x08)
	float TacticalWheelResponseTimeSeconds; // 0x520(0x04)
	float IBRMinZoomLevelMargin; // 0x524(0x04)
	struct UTslMinimapNameInfoWidget* MapNameInfoWidget; // 0x528(0x08)
	char pad_530[0x48]; // 0x530(0x48)
	struct UTslMessageRadialBaseWidget* WorldMapMessageRadialWheelWidgetCached; // 0x578(0x08)
	char pad_580[0x48]; // 0x580(0x48)
	struct FStringClassReference SpawnKitWidgetClass; // 0x5c8(0x10)
	struct USizeBox* SizeboxSelectableSpawnKit; // 0x5d8(0x08)
	struct UTslSpawnKitWidget* SpawnKitWidget; // 0x5e0(0x08)
	struct UTslRealTimeMissionWidget* WidgetRealTimeMission; // 0x5e8(0x08)
	struct FStringClassReference RealTimeMissionWidgetClass; // 0x5f0(0x10)
	struct UPanelWidget* RealTimeMissionPanel; // 0x600(0x08)

	void OnTogglePingOrWayPoint(); // Function TslGameUI.TslNewWorldMapWidget.OnTogglePingOrWayPoint //  // @ game+0xe49425c
	void OnMarkerDeleteGeneral(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerDeleteGeneral //  // @ game+0xe48dcf8
	void OnRequestCancelWorldMapMessageRadialTimerPad(); // Function TslGameUI.TslNewWorldMapWidget.OnRequestCancelWorldMapMessageRadialTimerPad //  // @ game+0xe48fb50
	void DeleteWayPoints(); // Function TslGameUI.TslNewWorldMapWidget.DeleteWayPoints //  // @ game+0xe47dd04
	void OnRequestShowWorldMapMessageRadial(); // Function TslGameUI.TslNewWorldMapWidget.OnRequestShowWorldMapMessageRadial //  // @ game+0xdbdbab4
	void OnMapMoveGamepadY(); // Function TslGameUI.TslNewWorldMapWidget.OnMapMoveGamepadY //  // @ game+0xef8ba4
	void OnPadGuideMovingReadyReleased(); // Function TslGameUI.TslNewWorldMapWidget.OnPadGuideMovingReadyReleased //  // @ game+0x13617e8
	void OnPadGuideMovingReadyPressed(); // Function TslGameUI.TslNewWorldMapWidget.OnPadGuideMovingReadyPressed //  // @ game+0x11be2f4
	void CancelWorldMapMessageRadial(); // Function TslGameUI.TslNewWorldMapWidget.CancelWorldMapMessageRadial //  // @ game+0xe47d9dc
	void OnFlightTrailSettingsChanged(); // Function TslGameUI.TslNewWorldMapWidget.OnFlightTrailSettingsChanged //  // @ game+0xe48c984
	void OnPressWayPointKey(); // Function TslGameUI.TslNewWorldMapWidget.OnPressWayPointKey //  // @ game+0xe48f8a4
	void OnMatchState(); // Function TslGameUI.TslNewWorldMapWidget.OnMatchState //  // @ game+0xe48de5c
	void OnPutMarkerPad(); // Function TslGameUI.TslNewWorldMapWidget.OnPutMarkerPad //  // @ game+0x11fadb0
	void OnToggleFlightTrail(); // Function TslGameUI.TslNewWorldMapWidget.OnToggleFlightTrail //  // @ game+0xe494234
	void OnMapMoveY(); // Function TslGameUI.TslNewWorldMapWidget.OnMapMoveY //  // @ game+0xfdf7c8
	void OnMarkWayPoint(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkWayPoint //  // @ game+0xe48dca8
	void OnStopRightTriggerInput(); // Function TslGameUI.TslNewWorldMapWidget.OnStopRightTriggerInput //  // @ game+0x1238b50
	void OnPadGuideMoveUp(); // Function TslGameUI.TslNewWorldMapWidget.OnPadGuideMoveUp //  // @ game+0xfd2304
	void OnPingOrWaypointSettingsChanged(); // Function TslGameUI.TslNewWorldMapWidget.OnPingOrWaypointSettingsChanged //  // @ game+0xe48f62c
	void OnNewWayPointMarker(); // Function TslGameUI.TslNewWorldMapWidget.OnNewWayPointMarker //  // @ game+0xe48ece8
	void OnMarkerDeleteLoot(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerDeleteLoot //  // @ game+0xe48dd0c
	void OnMapZoomPad(); // Function TslGameUI.TslNewWorldMapWidget.OnMapZoomPad //  // @ game+0xcdade4
	void OnMapMoveX(); // Function TslGameUI.TslNewWorldMapWidget.OnMapMoveX //  // @ game+0xfe0168
	void OnMarkerInputPressed(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerInputPressed //  // @ game+0xe48dd34
	void OnMarkerInputReleased(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerInputReleased //  // @ game+0xe48dd54
	void OnMapZoom(); // Function TslGameUI.TslNewWorldMapWidget.OnMapZoom //  // @ game+0x9fbf60
	void OnRequestCancelWorldMapMessageRadialAndClearTimer(); // Function TslGameUI.TslNewWorldMapWidget.OnRequestCancelWorldMapMessageRadialAndClearTimer //  // @ game+0xe48fb3c
	void OnObserverWorldMapTeleport(); // Function TslGameUI.TslNewWorldMapWidget.OnObserverWorldMapTeleport //  // @ game+0xe48ee90
	void OnMapMove(); // Function TslGameUI.TslNewWorldMapWidget.OnMapMove //  // @ game+0xe48dc94
	void OnStartRightTriggerInput(); // Function TslGameUI.TslNewWorldMapWidget.OnStartRightTriggerInput //  // @ game+0x123f2bc
	void OffMapMove(); // Function TslGameUI.TslNewWorldMapWidget.OffMapMove //  // @ game+0xe48966c
	void OnMarkerDeleteAll(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerDeleteAll //  // @ game+0xe48dce4
	void OnMapMoveGamepadX(); // Function TslGameUI.TslNewWorldMapWidget.OnMapMoveGamepadX //  // @ game+0xef81fc
	void OnStartSlowWorldMapMove(); // Function TslGameUI.TslNewWorldMapWidget.OnStartSlowWorldMapMove //  // @ game+0x1267d6c
	void OnMarker(); // Function TslGameUI.TslNewWorldMapWidget.OnMarker //  // @ game+0xe48dcd0
	void OnMapResetZoomGamePad(); // Function TslGameUI.TslNewWorldMapWidget.OnMapResetZoomGamePad //  // @ game+0xcdf68c
	void OnMarkerForReplay(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkerForReplay //  // @ game+0xe48dd20
	void OnReleaseMapMarkerPad(); // Function TslGameUI.TslNewWorldMapWidget.OnReleaseMapMarkerPad //  // @ game+0xe48fa4c
	void OnDeleteWayPoints(); // Function TslGameUI.TslNewWorldMapWidget.OnDeleteWayPoints //  // @ game+0xe48c058
	void OnPadGuideMoveRight(); // Function TslGameUI.TslNewWorldMapWidget.OnPadGuideMoveRight //  // @ game+0xfd2ca8
	void OnMarkWayPointReleased(); // Function TslGameUI.TslNewWorldMapWidget.OnMarkWayPointReleased //  // @ game+0xe48dcbc
	void OnMoveMapGridViewCenterToMyIconCenter(); // Function TslGameUI.TslNewWorldMapWidget.OnMoveMapGridViewCenterToMyIconCenter //  // @ game+0xe48e994
	void OnReleaseWayPointKey(); // Function TslGameUI.TslNewWorldMapWidget.OnReleaseWayPointKey //  // @ game+0xe48fa60
	void OnStopSlowWorldMapMove(); // Function TslGameUI.TslNewWorldMapWidget.OnStopSlowWorldMapMove //  // @ game+0x1267d54
};

// Class TslGameUI.TwoTeamScoreboardWidget
// Size: 0x508 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTwoTeamScoreboardWidget : UUmgBaseWidget {
	struct U*66ca516800* RespawnTimerUpdater; // 0x420(0x08)
	struct U*66ca516800* TimeLimitTimerUpdater; // 0x428(0x08)
	struct UTextBlock* TextRespawnTime; // 0x430(0x08)
	struct UTextBlock* TextTimeLimit; // 0x438(0x08)
	struct UImage* ImageGaugeTeam0; // 0x440(0x08)
	struct UImage* ImageGaugeTeam1; // 0x448(0x08)
	struct UTextBlock* TextScoreTeam0; // 0x450(0x08)
	struct UTextBlock* TextScoreTeam1; // 0x458(0x08)
	struct UTextBlock* TextGameStatusMessage0; // 0x460(0x08)
	struct UTextBlock* TextGameStatusMessage1; // 0x468(0x08)
	char pad_470[0x30]; // 0x470(0x30)
	struct U*7fa8406bd3* AnimVSFadeIn; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimVSFadeOut; // 0x4a8(0x08)
	struct UTextBlock* TextUpperTargetScore; // 0x4b0(0x08)
	struct FName ColorParamName; // 0x4b8(0x08)
	struct FName GaugeParamName; // 0x4c0(0x08)
	bool bUseRespawnTimer; // 0x4c8(0x01)
	bool bUseTimeLimitTimer; // 0x4c9(0x01)
	bool bUseAnimOnMatchStart; // 0x4ca(0x01)
	bool bPlayGaugeAnim; // 0x4cb(0x01)
	float GaugeAnimSpeed; // 0x4cc(0x04)
	float GaugeAnimTime; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TArray<struct FLinearColor> TeamColors; // 0x4d8(0x10)
	char pad_4E8[0x20]; // 0x4e8(0x20)

	void OnRespawnTimeUpdated(); // Function TslGameUI.TwoTeamScoreboardWidget.OnRespawnTimeUpdated //  // @ game+0xe1d3144
	void OnResetLevel(); // Function TslGameUI.TwoTeamScoreboardWidget.OnResetLevel //  // @ game+0xdbd67a8
	void OnHighEnemyScoreChanged(); // Function TslGameUI.TwoTeamScoreboardWidget.OnHighEnemyScoreChanged //  // @ game+0xe1ce048
	void OnMyTeamScoreChanged(); // Function TslGameUI.TwoTeamScoreboardWidget.OnMyTeamScoreChanged //  // @ game+0xe1d0468
	void OnMyGainScoreChanged(); // Function TslGameUI.TwoTeamScoreboardWidget.OnMyGainScoreChanged //  // @ game+0xe4a0a64
	void OnMatchStarted(); // Function TslGameUI.TwoTeamScoreboardWidget.OnMatchStarted //  // @ game+0xe1cece0
	void OnTimeLimitUpdated(); // Function TslGameUI.TwoTeamScoreboardWidget.OnTimeLimitUpdated //  // @ game+0xe1d5290
	void OnMyTeamRankChanged(); // Function TslGameUI.TwoTeamScoreboardWidget.OnMyTeamRankChanged //  // @ game+0xe4a13dc
};

// Class TslGameUI.CraftItemListBaseWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UCraftItemListBaseWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	float MaxLayoutCount; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
};

// Class TslGameUI.CraftItemListWidget
// Size: 0x4a8 (Inherited: 0x438)  [layout: KHOP]
struct UCraftItemListWidget : UCraftItemListBaseWidget {
	char pad_438[0x18]; // 0x438(0x18)
	int32 NumSlotsPerRow; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct UClass* SlotWidgetClass; // 0x458(0x08)
	struct UClass* GameLogicClass; // 0x460(0x08)
	struct UVerticalBox* CraftingItemVerticalBox; // 0x468(0x08)
	struct TArray<struct FCraftableItemAndCount> CachedCraftableItems; // 0x470(0x10)
	struct TArray<struct UHorizontalBox*> SlotRows; // 0x480(0x10)
	struct TArray<struct UCraftItemSlotWidget*> CraftableItemSlots; // 0x490(0x10)
	struct U*67274c7559* GameLogic; // 0x4a0(0x08)

	void OnCraftAllowFilterUpdated(); // Function TslGameUI.CraftItemListWidget.OnCraftAllowFilterUpdated //  // @ game+0xe47498c
	void OnCraftableItemCountChanged(); // Function TslGameUI.CraftItemListWidget.OnCraftableItemCountChanged //  // @ game+0xe474a14
};

// Class TslGameUI.CraftItemSlotWidget
// Size: 0x528 (Inherited: 0x420)  [layout: KHOP]
struct UCraftItemSlotWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UProgressBar* Pgb_Gauge; // 0x428(0x08)
	struct UBorder* CraftingItemSlotBorder; // 0x430(0x08)
	struct UImage* CastingBarGaugeImage; // 0x438(0x08)
	struct UImage* BackgroundTopImage; // 0x440(0x08)
	struct UImage* BackgroundBottomImage; // 0x448(0x08)
	struct UBorder* ItemIconBorder; // 0x450(0x08)
	struct UBorder* ItemQuantityBorder; // 0x458(0x08)
	struct UTextBlock* ItemStackTextBox; // 0x460(0x08)
	struct UTextBlock* ItemQuantityTextBox; // 0x468(0x08)
	struct UImage* ItemIconImage; // 0x470(0x08)
	struct UImage* HighlightImage; // 0x478(0x08)
	char pad_480[0x28]; // 0x480(0x28)
	TScriptInterface<struct U*d8ec02d9cc> CachedInventoryWidgetInterface; // 0x4a8(0x10)
	struct FLinearColor SlotColorEnabled; // 0x4b8(0x10)
	struct FLinearColor SlotColorDisabled; // 0x4c8(0x10)
	struct FLinearColor ItemIconBorderColorDefault; // 0x4d8(0x10)
	struct FLinearColor ItemIconBorderColorHighlight; // 0x4e8(0x10)
	struct FLinearColor ItemQuantityBorderColorDefault; // 0x4f8(0x10)
	struct FLinearColor ItemQuantityBorderColorHighlight; // 0x508(0x10)
	struct UClass* GameLogicClass; // 0x518(0x08)
	struct U*e59fa275dc* GameLogic; // 0x520(0x08)
};

// Class TslGameUI.ItemToolTipBaseWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UItemToolTipBaseWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct U*7fa8406bd3* AnimFadeInToolTip; // 0x428(0x08)
	struct FText CapacityLocText; // 0x430(0x18)
	struct TMap<enum class EWeaponDisplayTypes, struct FText> WeaponDisplayTypeTexts; // 0x448(0x50)
	struct UItem* CurrentItem; // 0x498(0x08)
	char pad_4A0[0x8]; // 0x4a0(0x08)

	void SetItemByInterface(); // Function TslGameUI.ItemToolTipBaseWidget.SetItemByInterface //  // @ game+0xe478048
	void HideIfMine(); // Function TslGameUI.ItemToolTipBaseWidget.HideIfMine //  // @ game+0xe4746e0
	void OnStackCountUpdated(); // Function TslGameUI.ItemToolTipBaseWidget.OnStackCountUpdated //  // @ game+0xdbd078c
	void OnIconLoaded(); // Function TslGameUI.ItemToolTipBaseWidget.OnIconLoaded //  // @ game+0xdafe600
};

// Class TslGameUI.CraftItemToolTipWidget
// Size: 0x508 (Inherited: 0x4a8)  [layout: KHOP]
struct UCraftItemToolTipWidget : UItemToolTipBaseWidget {
	struct UTextBlock* ItemNameText; // 0x4a8(0x08)
	struct UTextBlock* ItemCategoryText; // 0x4b0(0x08)
	struct USizeBox* IconScaleBoxSizeBlock; // 0x4b8(0x08)
	struct UImage* IconImage; // 0x4c0(0x08)
	struct UHorizontalBox* IngredientsItemSlotHorizontalBox; // 0x4c8(0x08)
	struct UTextBlock* ItemDescText; // 0x4d0(0x08)
	struct UTextBlock* CapacityText; // 0x4d8(0x08)
	float DefaultDelayTime; // 0x4e0(0x04)
	char pad_4E4[0x14]; // 0x4e4(0x14)
	struct TArray<struct UCraftMaterialIconWidget*> CachedIconWidgets; // 0x4f8(0x10)
};

// Class TslGameUI.TslInventoryBaseWidget
// Size: 0x628 (Inherited: 0x470)  [layout: KHOP]
struct UTslInventoryBaseWidget : UBlockInputUserWidget {
	char pad_470[0x20]; // 0x470(0x20)
	struct UItem* FocusItem; // 0x490(0x08)
	struct U*6c7f0ccc53* FocusEquipableItem; // 0x498(0x08)
	struct U*eb2b028d39* FocusAttachmentItem; // 0x4a0(0x08)
	struct AItemExplorer* ItemExplorer; // 0x4a8(0x08)
	char pad_4B0[0x58]; // 0x4b0(0x58)
	TScriptInterface<struct U*2044b0f6ef> FocusItemSlot; // 0x508(0x10)
	TScriptInterface<struct U*0574413568> FocusSlotWidget; // 0x518(0x10)
	TScriptInterface<struct U*02e1f6a3c2> FocusItemSlotContainer; // 0x528(0x10)
	struct UItem* MouseOverItem; // 0x538(0x08)
	struct U*eb2b028d39* MouseOverAttachmentItem; // 0x540(0x08)
	struct U*6c7f0ccc53* MouseOverEquipmentItem; // 0x548(0x08)
	TScriptInterface<struct U*2044b0f6ef> MouseOverSlot; // 0x550(0x10)
	TScriptInterface<struct U*02e1f6a3c2> SlotContainer; // 0x560(0x10)
	struct U*0b7ae154e4* SelfPutHelper; // 0x570(0x08)
	struct TArray<struct UUserWidget*> FocusableWidgetList; // 0x578(0x10)
	char pad_588[0x30]; // 0x588(0x30)
	struct FUmgWidgetBinder_CanvasPanel ToolTipCanvas; // 0x5b8(0x28)
	struct UTslInventoryMessageRadialWidget* InventoryMessageRadialWidget; // 0x5e0(0x08)
	char pad_5E8[0x20]; // 0x5e8(0x20)
	float TooltipDelay; // 0x608(0x04)
	float InventoryRadialHoldSeconds; // 0x60c(0x04)
	struct UPanelWidget* PanelRadioMessageGuide; // 0x610(0x08)
	struct UCraftItemListBaseWidget* CraftingWidget; // 0x618(0x08)
	struct UTslTabGroupWidget* InventoryTabWidget; // 0x620(0x08)

	void OnChildSlotFocusBackpack(); // Function TslGameUI.TslInventoryBaseWidget.OnChildSlotFocusBackpack //  // @ game+0xe48a550
	void OnVicinityLeaveSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnVicinityLeaveSlot //  // @ game+0xe495da4
	void OnChildSlotFocusVicinity(); // Function TslGameUI.TslInventoryBaseWidget.OnChildSlotFocusVicinity //  // @ game+0xe48a6a8
	void OnAttachmentFocusedWeapon(); // Function TslGameUI.TslInventoryBaseWidget.OnAttachmentFocusedWeapon //  // @ game+0xe489ed4
	void OnTabUpdated(); // Function TslGameUI.TslInventoryBaseWidget.OnTabUpdated //  // @ game+0xe493630
	void OnVicinityEnterChildSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnVicinityEnterChildSlot //  // @ game+0xe495c74
	void ReleasedEasyDropOrDetachMode(); // Function TslGameUI.TslInventoryBaseWidget.ReleasedEasyDropOrDetachMode //  // @ game+0xe496a44
	void OnPresetChangeFailed(); // Function TslGameUI.TslInventoryBaseWidget.OnPresetChangeFailed //  // @ game+0xe48f87c
	void OnInventoryUpdated(); // Function TslGameUI.TslInventoryBaseWidget.OnInventoryUpdated //  // @ game+0xe48cf6c
	void OnEquipmentEnterSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnEquipmentEnterSlot //  // @ game+0xe48c690
	void OnInventoryRadialPressed(); // Function TslGameUI.TslInventoryBaseWidget.OnInventoryRadialPressed //  // @ game+0xe48cf30
	void OnItemExplorerProxyUpdated(); // Function TslGameUI.TslInventoryBaseWidget.OnItemExplorerProxyUpdated //  // @ game+0xe48cff4
	void OnChildWidgetRefresh(); // Function TslGameUI.TslInventoryBaseWidget.OnChildWidgetRefresh //  // @ game+0x1107f24
	void OnChildFocusSlotIDEquipment(); // Function TslGameUI.TslInventoryBaseWidget.OnChildFocusSlotIDEquipment //  // @ game+0xe14850
	void OnWeaponEquipmentFocusedWeapon(); // Function TslGameUI.TslInventoryBaseWidget.OnWeaponEquipmentFocusedWeapon //  // @ game+0x1149f40
	void PreasedEasyDropOrDetachMode(); // Function TslGameUI.TslInventoryBaseWidget.PreasedEasyDropOrDetachMode //  // @ game+0xe49661c
	void OnVicinityEnterSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnVicinityEnterSlot //  // @ game+0x10fa0bc
	void SetEasyDropOrDetachMode(); // Function TslGameUI.TslInventoryBaseWidget.SetEasyDropOrDetachMode //  // @ game+0xe496e78
	void OnVicinityLeaveChildSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnVicinityLeaveChildSlot //  // @ game+0xe495da4
	void OnForbiddenRadioMessage(); // Function TslGameUI.TslInventoryBaseWidget.OnForbiddenRadioMessage //  // @ game+0xe48c998
	void OnDoSlotAction(); // Function TslGameUI.TslInventoryBaseWidget.OnDoSlotAction //  // @ game+0xe48c104
	void OnAttachmentChangedWeapon(); // Function TslGameUI.TslInventoryBaseWidget.OnAttachmentChangedWeapon //  // @ game+0xe489b84
	void OnBackpackEnterSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnBackpackEnterSlot //  // @ game+0xe48a064
	void OnInventoryDrop(); // Function TslGameUI.TslInventoryBaseWidget.OnInventoryDrop //  // @ game+0xe48ceb0
	void OnBackpackLeaveSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnBackpackLeaveSlot //  // @ game+0xe48a194
	void OnInventoryRadialReleased(); // Function TslGameUI.TslInventoryBaseWidget.OnInventoryRadialReleased //  // @ game+0xe48cf44
	void OnStackCountUpdated(); // Function TslGameUI.TslInventoryBaseWidget.OnStackCountUpdated //  // @ game+0xe493480
	void OnEquipmentLeaveSlot(); // Function TslGameUI.TslInventoryBaseWidget.OnEquipmentLeaveSlot //  // @ game+0xe48c7c0
};

// Class TslGameUI.TslInventoryWidget_GamePad
// Size: 0x760 (Inherited: 0x628)  [layout: LECH - offset chi la uoc luong]
struct UTslInventoryWidget_GamePad : UTslInventoryBaseWidget {
	struct FTslStickInputHelper NavigationInputHelper; // 0x628(0x14)
	float RStickXBlockingTime; // 0x63c(0x04)
	float RStickDeadZone; // 0x640(0x04)
	char pad_644[0xc]; // 0x644(0x0c)
	float R3HoldTime; // 0x650(0x04)
	char pad_654[0x8]; // 0x654(0x08)
	struct FVector2D TooltipPaddingForEquipmentAndWeapon; // 0x65c(0x08)
	char pad_664[0x4]; // 0x664(0x04)
	struct FUmgWidgetBinder_Gerneral GridPanel_Binder; // 0x668(0x20)
	struct FUmgWidgetBinder_WidgetSwitcher MoveGuide_Binder; // 0x688(0x28)
	struct FUmgWidgetBinder_TextBlock CraftingTextblock_Binder; // 0x6b0(0x20)
	struct FUmgWidgetBinder_HorizontalBox PresetGuideBox; // 0x6d0(0x28)
	struct UTslConsoleGuideWidget* InventoryKeyGuideWidget; // 0x6f8(0x08)
	char pad_700[0x8]; // 0x700(0x08)
	struct FStringClassReference TslInventoryPresetWidgetClass; // 0x708(0x10)
	int32 TslInventoryPresetWidgetLayer; // 0x718(0x04)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct UGridPanel* Grp; // 0x720(0x08)
	char pad_728[0x8]; // 0x728(0x08)
	float RTDoubleTapTime; // 0x730(0x04)
	char pad_734[0x4]; // 0x734(0x04)
	float L3HoldTime; // 0x738(0x04)
	char pad_73C[0x24]; // 0x73c(0x24)

	void OnRTPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnRTPressed //  // @ game+0x8d7fec
	void MoveUpPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.MoveUpPressed //  // @ game+0x8d929c
	void OnR3Pressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnR3Pressed //  // @ game+0xe48f9b4
	void OnL3Released(); // Function TslGameUI.TslInventoryWidget_GamePad.OnL3Released //  // @ game+0x8d7e70
	void OnR3Released(); // Function TslGameUI.TslInventoryWidget_GamePad.OnR3Released //  // @ game+0xe48f9c8
	void OnChildSlotFocusVicinity(); // Function TslGameUI.TslInventoryWidget_GamePad.OnChildSlotFocusVicinity //  // @ game+0x38dfe0
	void OnL3Pressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnL3Pressed //  // @ game+0x8d7b78
	void MoveVerticalPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.MoveVerticalPressed //  // @ game+0xe4895c4
	void OnMoveRight(); // Function TslGameUI.TslInventoryWidget_GamePad.OnMoveRight //  // @ game+0x136f338
	void MoveDownPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.MoveDownPressed //  // @ game+0x8d9a0c
	void OnBPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnBPressed //  // @ game+0x1001aec
	void OnLBPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnLBPressed //  // @ game+0x115d0e8
	void MoveUpReleased(); // Function TslGameUI.TslInventoryWidget_GamePad.MoveUpReleased //  // @ game+0x12773b0
	void OnRBPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnRBPressed //  // @ game+0xe48f9dc
	void VehicleMoveForwardPad_Override(); // Function TslGameUI.TslInventoryWidget_GamePad.VehicleMoveForwardPad_Override //  // @ game+0xf93738
	void OnLTPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnLTPressed //  // @ game+0xa9f320
	void BindInteractGamepad(); // Function TslGameUI.TslInventoryWidget_GamePad.BindInteractGamepad //  // @ game+0x1131260
	void OnAPressed(); // Function TslGameUI.TslInventoryWidget_GamePad.OnAPressed //  // @ game+0x11f58d8
	void OnMoveLeft(); // Function TslGameUI.TslInventoryWidget_GamePad.OnMoveLeft //  // @ game+0x136f34c
	void MoveDownReleased(); // Function TslGameUI.TslInventoryWidget_GamePad.MoveDownReleased //  // @ game+0x1258ea4
	void OnGameUserSettingApplied(); // Function TslGameUI.TslInventoryWidget_GamePad.OnGameUserSettingApplied //  // @ game+0xe48ca78
	void BlockInput(); // Function TslGameUI.TslInventoryWidget_GamePad.BlockInput //  // @ game+0x1053c04
	void OnChildSlotFocusBackpack(); // Function TslGameUI.TslInventoryWidget_GamePad.OnChildSlotFocusBackpack //  // @ game+0xe48a550
	void OnChildWidgetRefresh(); // Function TslGameUI.TslInventoryWidget_GamePad.OnChildWidgetRefresh //  // @ game+0x1107f24
};

// Class TslGameUI.TslSpawnKitBaseWidget
// Size: 0x478 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSpawnKitBaseWidget : UBlockInputUserWidget {
	int32 DefaultIndex; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)

	void ChangeIndex(); // Function TslGameUI.TslSpawnKitBaseWidget.ChangeIndex //  // @ game+0xe1c001c
	void ApplyCurrentIndex(); // Function TslGameUI.TslSpawnKitBaseWidget.ApplyCurrentIndex //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslSpawnKitWithDataWidget
// Size: 0x498 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTslSpawnKitWithDataWidget : UTslSpawnKitBaseWidget {
	struct U*71cd5bb9ae* SpawnKitData; // 0x478(0x08)
	struct TArray<struct FSpawnKitInfo> CurrentInfo; // 0x480(0x10)
	char pad_490[0x8]; // 0x490(0x08)
};

// Class TslGameUI.TslVehicleStanceAndTeamListManageWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslVehicleStanceAndTeamListManageWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTslRadioMessageLogWidget* RadioMessageLogWidget; // 0x428(0x08)
	struct UVehicleStanceBaseWidget* VehicleStanceWidget; // 0x430(0x08)
	struct UMortarCanvasWidget* MortarCanvasWidget; // 0x438(0x08)
	struct UTslParachuteFollowConsoleGuideWidget* ConsoleKeyGuideParachuteFollow; // 0x440(0x08)
	struct UTslTeamInfoListWidget* TeamInfoListWidget; // 0x448(0x08)
	struct UWidgetSwitcher* TeamListSwitcher; // 0x450(0x08)
	struct UObserverTeamInfoListBaseWidget* ObserverTeamInfoList; // 0x458(0x08)
	struct FVector2D PosVehicleStanceSingle; // 0x460(0x08)
	struct FVector2D PosVehicleStanceTeam; // 0x468(0x08)
	struct FVector2D PosVehicleStanceTeamAircraft; // 0x470(0x08)
	struct FVector2D PosVehicleStanceTeamObserver; // 0x478(0x08)
	bool bUsePrepassNative; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
};

// Class TslGameUI.TslKeyHintWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslKeyHintWidget : UUmgBaseWidget {
	struct UDataTable* KeyHintDataTable; // 0x420(0x08)
	struct UDataTable* KeyHintInfoDataTable; // 0x428(0x08)
	struct UDataTable* KeyHintTableCheckerSetDataTable; // 0x430(0x08)
	struct UClass* ContentWidgetClass; // 0x438(0x08)
	struct FMargin KeyHintContentPadding; // 0x440(0x10)
	struct TArray<struct FName> DisabledGameModes; // 0x450(0x10)
	float DefaultPositionY; // 0x460(0x04)
	float MinimapExtendedOffset; // 0x464(0x04)
	float FlareGunExtendedOffset; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UVerticalBox* PanelA; // 0x470(0x08)
	struct UVerticalBox* PanelB; // 0x478(0x08)
	struct UInvalidationBox* InvalidationBox; // 0x480(0x08)
	struct U*7fa8406bd3* AnimationOnChangeHint; // 0x488(0x08)
	struct TArray<struct FTslKeyHintSet> KeyHintData; // 0x490(0x10)
	char pad_4A0[0x10]; // 0x4a0(0x10)
	struct TArray<struct UTslKeyHintContentWidget*> KeyHintContentWidgetPool; // 0x4b0(0x10)
	char pad_4C0[0x18]; // 0x4c0(0x18)

	void OnGameUserSettingApplied(); // Function TslGameUI.TslKeyHintWidget.OnGameUserSettingApplied //  // @ game+0x11fadb0
	void OnNotifyUpdateKeyHint(); // Function TslGameUI.TslKeyHintWidget.OnNotifyUpdateKeyHint //  // @ game+0x1070218
	void UpdateSelfPosition(); // Function TslGameUI.TslKeyHintWidget.UpdateSelfPosition //  // @ game+0xf6e264
};

// Class TslGameUI.TslEventDrivenBaseWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslEventDrivenBaseWidget : UUmgBaseWidget {
	struct ATslCharacter* CacheCharacter; // 0x420(0x08)
	char pad_428[0x18]; // 0x428(0x18)

	void OnMatchStarted(); // Function TslGameUI.TslEventDrivenBaseWidget.OnMatchStarted //  // @ game+0xec4da8
	void OnSpectatingChanged(); // Function TslGameUI.TslEventDrivenBaseWidget.OnSpectatingChanged //  // @ game+0xe493400
	void OnUpdateViewTarget(); // Function TslGameUI.TslEventDrivenBaseWidget.OnUpdateViewTarget //  // @ game+0x9fb8ac
};

// Class TslGameUI.TslRoundResultBaseWidget
// Size: 0x4c0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRoundResultBaseWidget : UUmgBaseWidget {
	struct UClass* RoundEndPointClass; // 0x420(0x08)
	float PointWidgetAnimDelayTime; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct FString TitleKeyString; // 0x430(0x10)
	struct FString WinKeyString; // 0x440(0x10)
	struct FString LoseKeyString; // 0x450(0x10)
	struct FString DrawKeyString; // 0x460(0x10)
	struct FString EndKeyString; // 0x470(0x10)
	struct FString YourTeamKeyString; // 0x480(0x10)
	struct FString EnemyTeamKeyString; // 0x490(0x10)
	struct UStringTable* ST_RoundSystem; // 0x4a0(0x08)
	char pad_4A8[0x18]; // 0x4a8(0x18)

	void OnWidgetShowChanged(); // Function TslGameUI.TslRoundResultBaseWidget.OnWidgetShowChanged //  // @ game+0xe4a4b54
	void PlayPointWidgetAnim(); // Function TslGameUI.TslRoundResultBaseWidget.PlayPointWidgetAnim //  // @ game+0xe4a545c
};

// Class TslGameUI.TslCountDownWidget
// Size: 0x388 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslCountDownWidget : UTslUserWidget {
	struct UTextBlock* CountDownPrefixText; // 0x330(0x08)
	struct UTextBlock* CountDownText; // 0x338(0x08)
	struct UTextBlock* CountDownText2; // 0x340(0x08)
	struct U*7fa8406bd3* Under10SAnim; // 0x348(0x08)
	struct UTextBlock* MapNameText; // 0x350(0x08)
	struct U*7fa8406bd3* StartAnim; // 0x358(0x08)
	bool bUseOverridePrefixText; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FText OverridePrefixText; // 0x368(0x18)
	char pad_380[0x8]; // 0x380(0x08)

	void OnToggleShowHUD(); // Function TslGameUI.TslCountDownWidget.OnToggleShowHUD //  // @ game+0xe494270
	void OnUpdateCountDownTime(); // Function TslGameUI.TslCountDownWidget.OnUpdateCountDownTime //  // @ game+0xe494e08
};

// Class TslGameUI.TslInventorySlotWidget
// Size: 0x520 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslInventorySlotWidget : UUmgBaseWidget {
	char pad_420[0x58]; // 0x420(0x58)
	enum class EEquipSlotID EquipSlotID; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	int32 WeaponSlotIndex; // 0x47c(0x04)
	struct UTexture* SlotBackground_NormalEmpty; // 0x480(0x08)
	struct UTexture* SlotBackground_Normal; // 0x488(0x08)
	struct UTexture* SlotBackground_On; // 0x490(0x08)
	struct UTexture* SlotBackGround_SubOn; // 0x498(0x08)
	struct UTexture* SlotBackground_Over; // 0x4a0(0x08)
	struct FName TexParm; // 0x4a8(0x08)
	struct UClass* ItemDragWidgetClass; // 0x4b0(0x08)
	float IconSize; // 0x4b8(0x04)
	float ToolTipShowDelaytime; // 0x4bc(0x04)
	struct UImage* ItemIcon; // 0x4c0(0x08)
	struct UAkAudioEvent* MouseOverSound; // 0x4c8(0x08)
	struct UWeaponProcessorComponent* WeaponProcessor; // 0x4d0(0x08)
	struct UMaterialInstanceDynamic* SlotDynamicMaterial; // 0x4d8(0x08)
	struct AEquipment* Equipment; // 0x4e0(0x08)
	struct UItem* Item; // 0x4e8(0x08)
	struct UTslItemDragDropOperation* TslItemDragDropOperation; // 0x4f0(0x08)
	TScriptInterface<struct U*d8ec02d9cc> CachedInventoryWidgetInterface; // 0x4f8(0x10)
	struct UItemToolTipWidget* CachedToolTip; // 0x508(0x08)
	struct ATslCharacter* SaveCharacter; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)

	void OnPressedUIWidgetInputY(); // Function TslGameUI.TslInventorySlotWidget.OnPressedUIWidgetInputY //  // @ game+0x1135944
	void OnEquipmentUpdated(); // Function TslGameUI.TslInventorySlotWidget.OnEquipmentUpdated //  // @ game+0xe48c8c4
	void OnPressedWidgetInputB(); // Function TslGameUI.TslInventorySlotWidget.OnPressedWidgetInputB //  // @ game+0x1053c04
};

// Class TslGameUI.TslWeaponBodySlotBaseWidget
// Size: 0x748 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponBodySlotBaseWidget : UTslInventorySlotWidget {
	struct UTextureRenderTarget2D* RenderTargetTexture; // 0x520(0x08)
	struct UClass* ItemStudioClass; // 0x528(0x08)
	int32 MaxWeaponNameLength; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct FUmgWidgetBinder_Border BackgroundBorder_Binder; // 0x538(0x30)
	struct FUmgWidgetBinder_Gerneral WeaponInfoText_Bidner; // 0x568(0x20)
	struct FUmgWidgetBinder_TextBlock WeaponHandsOnLoadedAmmoCount_Binder; // 0x588(0x20)
	struct FUmgWidgetBinder_Image AmmoIcon_Binder; // 0x5a8(0x28)
	struct FUmgWidgetBinder_TextBlock WeaponHandsOnUnloadedAmmoCount_Binder; // 0x5d0(0x20)
	struct FUmgWidgetBinder_TextBlock WeaponName_Binder; // 0x5f0(0x20)
	struct FUmgWidgetBinder_TextBlock KeyName_Binder; // 0x610(0x20)
	struct FUmgWidgetBinder_TextBlock AmmoName_Bidner; // 0x630(0x20)
	struct UHorizontalBox* Ammo_HorizontalBox; // 0x650(0x08)
	struct FUmgWidgetBinder_Image AmmoBg_Binder; // 0x658(0x28)
	struct FUmgWidgetBinder_Image WeaponCaptureImage_Binder; // 0x680(0x28)
	struct FSlateColor ImageDisabledColor; // 0x6a8(0x28)
	struct UWidgetSwitcher* UnloadedSwitcher; // 0x6d0(0x08)
	struct UBorder* SlotBG_Border; // 0x6d8(0x08)
	struct UWidget* PanelDurability; // 0x6e0(0x08)
	struct UWidgetSwitcher* SwitcherDurabilityIcon; // 0x6e8(0x08)
	struct UTextBlock* TextDurabilityNumber; // 0x6f0(0x08)
	struct UMaterialInstance* SmallWeaponEquipmentSlotMaterial; // 0x6f8(0x08)
	TScriptInterface<struct U*db70ebf624> WeaponSlotEquipmentWidget; // 0x700(0x10)
	struct U*6c7f0ccc53* EquipableItem; // 0x710(0x08)
	struct ATslWeapon* Weapon; // 0x718(0x08)
	struct ATslWeapon_Gun* Weapon_Gun; // 0x720(0x08)
	struct UMaterialInstanceDynamic* WeaponCaptureMaterial; // 0x728(0x08)
	struct UMaterialInstanceDynamic* BgMID; // 0x730(0x08)
	struct UUserWidget* ChildFocusWidget; // 0x738(0x08)
	char pad_740[0x8]; // 0x740(0x08)

	void DestroyItemStudio(); // Function TslGameUI.TslWeaponBodySlotBaseWidget.DestroyItemStudio //  // @ game+0xe47ddd0
	void SetCustomInputSettingsUpdated(); // Function TslGameUI.TslWeaponBodySlotBaseWidget.SetCustomInputSettingsUpdated //  // @ game+0xe496db0
	void OnSpawnActorInSceneCaptureWorld(); // Function TslGameUI.TslWeaponBodySlotBaseWidget.OnSpawnActorInSceneCaptureWorld //  // @ game+0xe1a1a64
};

// Class TslGameUI.TslWeaponBodySlotWidget
// Size: 0x748 (Inherited: 0x748)  [layout: KHOP]
struct UTslWeaponBodySlotWidget : UTslWeaponBodySlotBaseWidget {
};

// Class TslGameUI.WeaponStudio
// Size: 0x4c0 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct AWeaponStudio : AItemStudio {
	float UpdateDelayTime; // 0x460(0x04)
	float AnimationUpdateDelayTime; // 0x464(0x04)
	float EquipedWeaponUpdateDelayTime; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct U*234f5ce436* *122ef520be; // 0x470(0x08)
	struct ATslWeapon* *8ba8189600; // 0x478(0x08)
	char pad_480[0x40]; // 0x480(0x40)

	void OnChangedAttachment(); // Function TslGameUI.WeaponStudio.OnChangedAttachment //  // @ game+0xe49e77c
	void OnLoadedAttachment(); // Function TslGameUI.WeaponStudio.OnLoadedAttachment //  // @ game+0xe49febc
	void UpdateAttachment(); // Function TslGameUI.WeaponStudio.UpdateAttachment //  // @ game+0xe4a7604
	void UpdateSkin(); // Function TslGameUI.WeaponStudio.UpdateSkin //  // @ game+0xe4a76f4
	void OnUpdateAttachment(); // Function TslGameUI.WeaponStudio.OnUpdateAttachment //  // @ game+0x43bab4
	void *19b9df41de(); // Function TslGameUI.WeaponStudio.*19b9df41de //  // @ game+0xe49ca64
	void *fbab36f07e(); // Function TslGameUI.WeaponStudio.*fbab36f07e //  // @ game+0xe49cae4
	void OnUpdateSkin(); // Function TslGameUI.WeaponStudio.OnUpdateSkin //  // @ game+0x43bab4
	void UpdateMasteryItems(); // Function TslGameUI.WeaponStudio.UpdateMasteryItems //  // @ game+0xe4a76b8
	void UpdateWeaponMesh(); // Function TslGameUI.WeaponStudio.UpdateWeaponMesh //  // @ game+0xdb45604
	void GetWeaponMesh(); // Function TslGameUI.WeaponStudio.GetWeaponMesh //  // @ game+0xe49cb20
};

// Class TslGameUI.TslObserverKillAnimWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverKillAnimWidget : UUmgBaseWidget {
	struct UTslObserverHudAnimManageWidget* Manager; // 0x420(0x08)
};

// Class TslGameUI.TslSpawnKitItemBaseWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSpawnKitItemBaseWidget : UUmgBaseWidget {
	char pad_420[0x28]; // 0x420(0x28)

	void OnSelected(); // Function TslGameUI.TslSpawnKitItemBaseWidget.OnSelected //  // @ game+0xdbdbab4
};

// Class TslGameUI.DamageInfoBaseWidget
// Size: 0x500 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UDamageInfoBaseWidget : UUmgBaseWidget {
	struct FMulticastDelegate FadeOutAnimationFinished; // 0x420(0x10)
	struct UBorder* TeamColorBorder; // 0x430(0x08)
	struct UTextBlock* DamageAmountText; // 0x438(0x08)
	struct USizeBox* HeadShotSizeBox; // 0x440(0x08)
	struct U*7fa8406bd3* DamageFadeIn; // 0x448(0x08)
	struct U*7fa8406bd3* DamageFadeOut; // 0x450(0x08)
	struct AActor* TargetActor; // 0x458(0x08)
	char pad_460[0xa0]; // 0x460(0xa0)
};

// Class TslGameUI.TslTeamInfoWidget
// Size: 0x5e8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamInfoWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTslTeamInfoIconDataAsset* TeamIconDataAsset; // 0x428(0x08)
	struct UBorder* BorderTeamEngageAttacked; // 0x430(0x08)
	struct ULifeGaugeTemplateBaseWidget* WidgetLifeGauge; // 0x438(0x08)
	struct FColorBlindColorSet ColorBlindColorSet; // 0x440(0x10)
	struct UTslSpeakingIconWidget* SpeakingIcon; // 0x450(0x08)
	struct UTextBlock* PlayerNameText; // 0x458(0x08)
	struct UWidgetSwitcher* PlayerColorSwitcher; // 0x460(0x08)
	struct UWidgetSwitcher* PlayerIconNumberSwitcher; // 0x468(0x08)
	struct UImage* PlayerBoostGaugeImage; // 0x470(0x08)
	struct UTextBlock* InteractionTeamNumTxt; // 0x478(0x08)
	struct UImage* InteractionArrowImg; // 0x480(0x08)
	struct UImage* ImagePlayerIcon; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)
	float LessDamageValue; // 0x498(0x04)
	float MediumDamageValue; // 0x49c(0x04)
	struct UBorder* BorderPlayerIcon; // 0x4a0(0x08)
	struct UTextBlock* TextPlayerIcon; // 0x4a8(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x4b0(0x08)
	struct USizeBox* SizeboxTeamFollow; // 0x4b8(0x08)
	struct UWidgetSwitcher* SwitcherTeamFollow; // 0x4c0(0x08)
	struct UButton* ButtonTeamFollow; // 0x4c8(0x08)
	struct UWidgetSwitcher* SwitcherTeamFollowButton; // 0x4d0(0x08)
	struct UWidgetSwitcher* SwitcherTeamFollowButtonConsole; // 0x4d8(0x08)
	struct UButton* ButtonTeamFollowSelected; // 0x4e0(0x08)
	struct ATeam* Team; // 0x4e8(0x08)
	struct FLinearColor DeadColor; // 0x4f0(0x10)
	struct UTextBlock* TextBlockTimer; // 0x500(0x08)
	struct UBorder* PlayerInfoBorder; // 0x508(0x08)
	struct UBorder* PlayerGaugeBorder; // 0x510(0x08)
	struct UBorder* TeamFollowBorder; // 0x518(0x08)
	struct UBorder* TeamVoiceBorder; // 0x520(0x08)
	struct UTslTeamInfoAdditionalIcon* AdditionalIcon; // 0x528(0x08)
	struct UTexture2D* HealItemRequestTexture; // 0x530(0x08)
	struct UTexture2D* AmmoItemRequestTexture; // 0x538(0x08)
	struct ATslCharacter* LastTeamMemberCharacter; // 0x540(0x08)
	char pad_548[0x10]; // 0x548(0x10)
	struct TMap<struct UMaterialInterface*, struct UMaterialInstanceDynamic*> ModeIconMaterialCache; // 0x558(0x50)
	struct U*89f06babe8* PulseAnimator; // 0x5a8(0x08)
	char pad_5B0[0x38]; // 0x5b0(0x38)

	void UpdateBoostGauge(); // Function TslGameUI.TslTeamInfoWidget.UpdateBoostGauge //  // @ game+0xe4a7618
	void OnPulseAnimationFinished(); // Function TslGameUI.TslTeamInfoWidget.OnPulseAnimationFinished //  // @ game+0x1134398
	void UpdateVoiceStatusOnly(); // Function TslGameUI.TslTeamInfoWidget.UpdateVoiceStatusOnly //  // @ game+0x47d304
	void OnLeaveTeamVoiceChannel(); // Function TslGameUI.TslTeamInfoWidget.OnLeaveTeamVoiceChannel //  // @ game+0xe49fea4
	void OnNativeParticipantMuteChanged(); // Function TslGameUI.TslTeamInfoWidget.OnNativeParticipantMuteChanged //  // @ game+0xe4a146c
	void NotifyGunFire(); // Function TslGameUI.TslTeamInfoWidget.NotifyGunFire //  // @ game+0xe41400
	void OnToggleShowHUD(); // Function TslGameUI.TslTeamInfoWidget.OnToggleShowHUD //  // @ game+0xe4a264c
	void OnNativeParticipantRestrictionChanged(); // Function TslGameUI.TslTeamInfoWidget.OnNativeParticipantRestrictionChanged //  // @ game+0xe4a1754
	void NotifyEngageAttacked(); // Function TslGameUI.TslTeamInfoWidget.NotifyEngageAttacked //  // @ game+0xe40ea0
	void OnParticipantMuteChanged(); // Function TslGameUI.TslTeamInfoWidget.OnParticipantMuteChanged //  // @ game+0x43bab4
	void OnParticipantRestrictionChanged(); // Function TslGameUI.TslTeamInfoWidget.OnParticipantRestrictionChanged //  // @ game+0x43bab4
	void UpdateVoiceChat(); // Function TslGameUI.TslTeamInfoWidget.UpdateVoiceChat //  // @ game+0xe4a7808
	void OnBlockUserUpdated(); // Function TslGameUI.TslTeamInfoWidget.OnBlockUserUpdated //  // @ game+0xe49e298
	void FollowParachuteAction(); // Function TslGameUI.TslTeamInfoWidget.FollowParachuteAction //  // @ game+0xe49ca38
	void OnVoiceChat(); // Function TslGameUI.TslTeamInfoWidget.OnVoiceChat //  // @ game+0xe4a34f4
};

// Class TslGameUI.*ba59a8e30a
// Size: 0xb0 (Inherited: 0xb0)  [layout: KHOP]
struct U*ba59a8e30a : U*7b03be5e34 {
};

// Class TslGameUI.*eab4677b30
// Size: 0xd8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct U*eab4677b30 : U*ba59a8e30a {
	struct UMaterialInstance* *5145932421; // 0xb0(0x08)
	struct UCurveFloat* *39212ab9e4; // 0xb8(0x08)
	float *9b89d44394; // 0xc0(0x04)
	float *d1b55e9887; // 0xc4(0x04)
	float *7aef6ea901; // 0xc8(0x04)
	char pad_CC[0xc]; // 0xcc(0x0c)
};

// Class TslGameUI.TslWinningStreakWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslWinningStreakWidget : UUmgBaseWidget {
};

// Class TslGameUI.TslCountInfoBase
// Size: 0x5c0 (Inherited: 0x420)  [layout: KHOP]
struct UTslCountInfoBase : UUmgBaseWidget {
	struct FText Title; // 0x420(0x18)
	char pad_438[0xe8]; // 0x438(0xe8)
	struct UTextBlock* TitleText; // 0x520(0x08)
	struct UTextBlock* CountText; // 0x528(0x08)
	struct UBorder* CounterNumberBorder; // 0x530(0x08)
	struct UBorder* CounterTitleBorder; // 0x538(0x08)
	struct TMap<enum class ECountInfoAnimType, struct U*7fa8406bd3*> AnimBinders; // 0x540(0x50)
	struct U*7fa8406bd3* Default; // 0x590(0x08)
	struct U*7fa8406bd3* Decreasing; // 0x598(0x08)
	struct U*7fa8406bd3* Increasing; // 0x5a0(0x08)
	struct U*7fa8406bd3* Warning; // 0x5a8(0x08)
	struct U*d51199f832* CountInfoImpl; // 0x5b0(0x08)
	struct UClass* CountInfoImplClass; // 0x5b8(0x08)
};

// Class TslGameUI.*d51199f832
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*d51199f832 : UObject {
	char pad_30[0x28]; // 0x30(0x28)

	void *78c6268af0(); // Function TslGameUI.*d51199f832.*78c6268af0 //  // @ game+0xe4968e4
};

// Class TslGameUI.TslWorldMapInfoWidgetBase
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslWorldMapInfoWidgetBase : UUmgBaseWidget {
};

// Class TslGameUI.BaseLobbyRotationTestWidget
// Size: 0x330 (Inherited: 0x330)  [layout: KHOP]
struct UBaseLobbyRotationTestWidget : UTslUserWidget {

	void TestCallback(); // Function TslGameUI.BaseLobbyRotationTestWidget.TestCallback //  // @ game+0xe4784cc
};

// Class TslGameUI.CommonResultWidget
// Size: 0x4e0 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UCommonResultWidget : UBaseResultWidget {
	struct U*7fa8406bd3* Anim_ResultEmerging; // 0x490(0x08)
	struct U*7fa8406bd3* Anim_CelebrateEmerging; // 0x498(0x08)
	struct UBorder* MatchResultWindow; // 0x4a0(0x08)
	struct UButton* ButtonLobby; // 0x4a8(0x08)
	struct UTslGamepadMultipleKeyIconWidget* ButtonLobby_Gamepad; // 0x4b0(0x08)
	struct UHorizontalBox* ExitToLobbyHorizontal; // 0x4b8(0x08)
	struct UResultProxyWidget* ResultProxyWidget; // 0x4c0(0x08)
	struct UTextBlock* BaseLobbyTimerText; // 0x4c8(0x08)
	char pad_4D0[0x10]; // 0x4d0(0x10)

	void OnClicked_ButtonLobby(); // Function TslGameUI.CommonResultWidget.OnClicked_ButtonLobby //  // @ game+0x6d0c20
};

// Class TslGameUI.MatchResultWidget
// Size: 0x6b0 (Inherited: 0x4e0)  [layout: LECH - offset chi la uoc luong]
struct UMatchResultWidget : UCommonResultWidget {
	char pad_4E0[0x8]; // 0x4e0(0x08)
	struct U*7fa8406bd3* SpectateButtonEmerging; // 0x4e8(0x08)
	struct U*7fa8406bd3* SpectateButtonVanishing; // 0x4f0(0x08)
	struct U*7fa8406bd3* ReportButtonEmerging; // 0x4f8(0x08)
	struct U*7fa8406bd3* ReportButtonVanishing; // 0x500(0x08)
	struct U*7fa8406bd3* BigRankBoxEmerging; // 0x508(0x08)
	struct U*7fa8406bd3* DetailScoreLayerEmerging; // 0x510(0x08)
	struct U*7fa8406bd3* Anim_CelebrateToResult; // 0x518(0x08)
	struct UTslClanplate* Clanplate; // 0x520(0x08)
	struct UTextBlock* PlayerNameText; // 0x528(0x08)
	struct UHorizontalBox* BigRankBox; // 0x530(0x08)
	struct UTextBlock* FinalRankText; // 0x538(0x08)
	struct UTextBlock* TotalPlayersText; // 0x540(0x08)
	struct UTextBlock* ResultMsgText; // 0x548(0x08)
	struct USizeBox* RewardsBox; // 0x550(0x08)
	struct UWidgetSwitcher* ScoreSwitcher; // 0x558(0x08)
	struct UBorder* DetailScoreLayer; // 0x560(0x08)
	struct UTextBlock* RankTitleText; // 0x568(0x08)
	struct UTextBlock* RankText; // 0x570(0x08)
	struct UTextBlock* KillCountText; // 0x578(0x08)
	struct UTextBlock* KillCountPlayersText; // 0x580(0x08)
	struct UTextBlock* RewardPointsTotalText; // 0x588(0x08)
	struct UTextBlock* RankAPTitleText; // 0x590(0x08)
	struct UTextBlock* RankAPText; // 0x598(0x08)
	struct UTextBlock* KillAPText; // 0x5a0(0x08)
	struct UTextBlock* HitAPText; // 0x5a8(0x08)
	struct UTextBlock* LobbyTimerText; // 0x5b0(0x08)
	struct UWidgetSwitcher* MatchResultExitButtonSwitcher; // 0x5b8(0x08)
	struct UWidgetSwitcher* MatchResultNextMessage_Switcher; // 0x5c0(0x08)
	struct UBorder* ButtonSpectatorLayer; // 0x5c8(0x08)
	struct UButton* ButtonSpectator; // 0x5d0(0x08)
	struct UHorizontalBox* SpectateHorizontal; // 0x5d8(0x08)
	struct UBorder* ButtonDuelSpectatorLayer; // 0x5e0(0x08)
	struct UButton* ButtonDuelSpectator; // 0x5e8(0x08)
	struct UHorizontalBox* DuelSpectateHorizontal; // 0x5f0(0x08)
	struct UBorder* ButtonObserverLayer; // 0x5f8(0x08)
	struct UButton* ButtonObserver; // 0x600(0x08)
	struct UBorder* ButtonMatchResultLayer; // 0x608(0x08)
	struct UButton* ButtonMatchResult; // 0x610(0x08)
	struct UWidget* GamepadKeyMatchResult; // 0x618(0x08)
	struct UBorder* ButtonHighlightsLayer; // 0x620(0x08)
	struct UButton* ButtonHighlights; // 0x628(0x08)
	struct UButton* ButtonReport; // 0x630(0x08)
	struct UHorizontalBox* ReportHorizontal; // 0x638(0x08)
	struct UButton* ButtonKillcam; // 0x640(0x08)
	struct UTextBlock* ButtonKillcamText; // 0x648(0x08)
	struct UHorizontalBox* DeathCamHorizontal; // 0x650(0x08)
	struct UTslGamepadMultipleKeyIconWidget* DeathCamKeyIconWidget; // 0x658(0x08)
	struct UHorizontalBox* RankedLeaverLayer; // 0x660(0x08)
	struct UTextBlock* RankedLeaverText; // 0x668(0x08)
	struct UHorizontalBox* RankedLeaverLayer_Gamepad; // 0x670(0x08)
	struct UTextBlock* RankedLeaverText_Gamepad; // 0x678(0x08)
	float SpecialRightHoldTime; // 0x680(0x04)
	float StartCelebrateToResultTime; // 0x684(0x04)
	char pad_688[0x4]; // 0x688(0x04)
	float ExitDelayTimeInRevival; // 0x68c(0x04)
	char pad_690[0x4]; // 0x690(0x04)
	float SpectateInputHoldTime; // 0x694(0x04)
	char pad_698[0x8]; // 0x698(0x08)
	float ReportInputHoldTime; // 0x6a0(0x04)
	char pad_6A4[0xc]; // 0x6a4(0x0c)

	void OnReleaseCelebrationToResultPad(); // Function TslGameUI.MatchResultWidget.OnReleaseCelebrationToResultPad //  // @ game+0xe475454
	void OnPressed_ButtonReport(); // Function TslGameUI.MatchResultWidget.OnPressed_ButtonReport //  // @ game+0xe475410
	void OnClicked_ButtonReport(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonReport //  // @ game+0xe474964
	void OnPressCelebrationToResultPad(); // Function TslGameUI.MatchResultWidget.OnPressCelebrationToResultPad //  // @ game+0xe475350
	void OnClicked_ButtonObserver(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonObserver //  // @ game+0xe474950
	void OnPressed_ButtonSpectator(); // Function TslGameUI.MatchResultWidget.OnPressed_ButtonSpectator //  // @ game+0x1362410
	void OnClicked_ButtonSpectator(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonSpectator //  // @ game+0xe474978
	void OnPressed_DeathCam(); // Function TslGameUI.MatchResultWidget.OnPressed_DeathCam //  // @ game+0xe475440
	void OnClicked_ButtonMatchResult(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonMatchResult //  // @ game+0xe47493c
	void OnReleased_ButtonSpectator(); // Function TslGameUI.MatchResultWidget.OnReleased_ButtonSpectator //  // @ game+0x1194390
	void OnClicked_ButtonDuelSpectator(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonDuelSpectator //  // @ game+0xe474900
	void OnClicked_ButtonHighlights(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonHighlights //  // @ game+0xe474914
	void OnClicked_ButtonKillcam(); // Function TslGameUI.MatchResultWidget.OnClicked_ButtonKillcam //  // @ game+0xe474928
	void OnReleased_ButtonReport(); // Function TslGameUI.MatchResultWidget.OnReleased_ButtonReport //  // @ game+0xe47546c
	void OnGoToKillcam(); // Function TslGameUI.MatchResultWidget.OnGoToKillcam //  // @ game+0xe474e80
	void OnCelebrationToResult(); // Function TslGameUI.MatchResultWidget.OnCelebrationToResult //  // @ game+0xe4747ec
};

// Class TslGameUI.EscapableMatchResultWidget
// Size: 0x6b8 (Inherited: 0x6b0)  [layout: LECH - offset chi la uoc luong]
struct UEscapableMatchResultWidget : UMatchResultWidget {
	bool bShowLoseInsteadOfTeamRemain; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
};

// Class TslGameUI.TslIBRMatchResultMatchEOMStatsTeamEntryWidget
// Size: 0x450 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultMatchEOMStatsTeamEntryWidget : UTslUserWidget {
	char pad_330[0x70]; // 0x330(0x70)
	struct UWidgetSwitcher* SwitcherBg; // 0x3a0(0x08)
	struct UWidget* PanelContent; // 0x3a8(0x08)
	struct UTextBlock* TextRankNum; // 0x3b0(0x08)
	struct UTextBlock* TextTeamName; // 0x3b8(0x08)
	struct UBorder* BorderTeamNumber; // 0x3c0(0x08)
	struct UTextBlock* TextTeamNumber; // 0x3c8(0x08)
	struct UTextBlock* TextTeamStatValue1; // 0x3d0(0x08)
	struct UTextBlock* TextTeamStatValue2; // 0x3d8(0x08)
	struct UTextBlock* TextTeamStatValue3; // 0x3e0(0x08)
	struct UPanelWidget* ListPlayerStatsEntries; // 0x3e8(0x08)
	struct UTslCommonButton* Button; // 0x3f0(0x08)
	struct UWidget* SwitcherSelected; // 0x3f8(0x08)
	struct UClass* StatsEntryWidgetClass; // 0x400(0x08)
	struct FText RankText; // 0x408(0x18)
	struct FLinearColor DefaultTextColor; // 0x420(0x10)
	struct FLinearColor WinTextColor; // 0x430(0x10)
	char pad_440[0x10]; // 0x440(0x10)

	void HandleButtonHovered(); // Function TslGameUI.TslIBRMatchResultMatchEOMStatsTeamEntryWidget.HandleButtonHovered //  // @ game+0xe4746a4
	void HandleButtonClicked(); // Function TslGameUI.TslIBRMatchResultMatchEOMStatsTeamEntryWidget.HandleButtonClicked //  // @ game+0xe474680
	void HandleButtonUnhovered(); // Function TslGameUI.TslIBRMatchResultMatchEOMStatsTeamEntryWidget.HandleButtonUnhovered //  // @ game+0xe4746b8
};

// Class TslGameUI.TslIBRMatchResultWidget
// Size: 0x7e0 (Inherited: 0x6b0)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultWidget : UMatchResultWidget {
	char pad_6B0[0xe0]; // 0x6b0(0xe0)
	struct UWidgetSwitcher* SwitcherEOMStats; // 0x790(0x08)
	struct UTslIBRMatchResultTeamEOMStatsWidget* WidgetTeamEOMStats; // 0x798(0x08)
	struct UTslIBRMatchResultMatchEOMStatsWidget* WidgetMatchEOMStats; // 0x7a0(0x08)
	struct UTslIBRMatchResultMatchEOMDetailStatsWidget* WidgetMatchEOMDetailStats; // 0x7a8(0x08)
	struct UWidget* GamepadKeyMoreInfo; // 0x7b0(0x08)
	struct UDataTable* TeamEOMPersonalStatsDataTable; // 0x7b8(0x08)
	struct UDataTable* TeamEOMTeamStatsDataTable; // 0x7c0(0x08)
	struct UDataTable* MatchEOMStatsDataTable; // 0x7c8(0x08)
	struct UDataTable* MatchEOMDetailStatsDataTable; // 0x7d0(0x08)
	char pad_7D8[0x8]; // 0x7d8(0x08)

	void OnPressedWidgetMoveRight(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedWidgetMoveRight //  // @ game+0xe4753d8
	void OnPressedWidgetMoveLeft(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedWidgetMoveLeft //  // @ game+0xe4753bc
	void SetMatchEOMStats(); // Function TslGameUI.TslIBRMatchResultWidget.SetMatchEOMStats //  // @ game+0xe478124
	void OnPressedGamepadInputA(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedGamepadInputA //  // @ game+0xe475378
	void ShowMatchEOMDetailStats(); // Function TslGameUI.TslIBRMatchResultWidget.ShowMatchEOMDetailStats //  // @ game+0xe478424
	void OnPressedWidgetMoveUp(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedWidgetMoveUp //  // @ game+0xe4753f4
	void OnPressedWidgetMoveDown(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedWidgetMoveDown //  // @ game+0xe4753a0
	void OnPressedGamepadInputB(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedGamepadInputB //  // @ game+0xe47538c
	void OnPressedEscape(); // Function TslGameUI.TslIBRMatchResultWidget.OnPressedEscape //  // @ game+0xe475364
	void SetResultState(); // Function TslGameUI.TslIBRMatchResultWidget.SetResultState //  // @ game+0xe4781dc
	void SetTeamEOMStats(); // Function TslGameUI.TslIBRMatchResultWidget.SetTeamEOMStats //  // @ game+0xe478254
};

// Class TslGameUI.ObserverResultWidget
// Size: 0x558 (Inherited: 0x4e0)  [layout: LECH - offset chi la uoc luong]
struct UObserverResultWidget : UCommonResultWidget {
	struct UClass* NameGroupWidgetClass; // 0x4e0(0x08)
	struct UWidgetSwitcher* MainWidgetSwitcher; // 0x4e8(0x08)
	struct UVerticalBox* LeftVerticalBox; // 0x4f0(0x08)
	struct UScrollBox* RightScrollSizeBox; // 0x4f8(0x08)
	struct UImage* WinnerBigLogoImage; // 0x500(0x08)
	struct UTextBlock* WinnerTeamName; // 0x508(0x08)
	struct UTextBlock* TextTeamCount; // 0x510(0x08)
	struct UTextBlock* TextForTotalKillCount; // 0x518(0x08)
	char pad_520[0x38]; // 0x520(0x38)

	void OnStartCelebrate_Animation(); // Function TslGameUI.ObserverResultWidget.OnStartCelebrate_Animation //  // @ game+0x1135944
};

// Class TslGameUI.LeagueMatchResult
// Size: 0x568 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct ULeagueMatchResult : UBaseResultWidget {
	char pad_490[0x8]; // 0x490(0x08)
	struct UButton* ExitLobbyButton; // 0x498(0x08)
	struct UButton* BackOrNextButton; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimMatchResult; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimMatchRanking; // 0x4b0(0x08)
	struct U*7fa8406bd3* AnimMatchStatistics; // 0x4b8(0x08)
	struct U*7fa8406bd3* AnimMatchResultEnd; // 0x4c0(0x08)
	struct U*7fa8406bd3* AnimShowButtons; // 0x4c8(0x08)
	struct UImage* ImageBg; // 0x4d0(0x08)
	struct UTslObserverPlayerIconWidget* PlayerIcon; // 0x4d8(0x08)
	struct UTextBlock* TextBlockWinnerTeamName; // 0x4e0(0x08)
	struct UTextBlock* TextBlockTeamCount; // 0x4e8(0x08)
	struct UTextBlock* TextBlockTotalKillCount; // 0x4f0(0x08)
	struct UTextBlock* TextBlockKill; // 0x4f8(0x08)
	struct UTextBlock* TextBackOrNext; // 0x500(0x08)
	struct UTslCelebrationFlowWidget* Celebration; // 0x508(0x08)
	struct UTslObserverMatchStatistic* StatisticsWidget; // 0x510(0x08)
	struct UTslObserverMatchRanking* RankingWidget; // 0x518(0x08)
	struct UTslGamepadMultipleKeyIconWidget* GamepadKeyIconToLobby; // 0x520(0x08)
	struct UTexture2D* MatchResultBGTexture; // 0x528(0x08)
	struct UTexture2D* DefaultMatchResultBGTexture; // 0x530(0x08)
	float TabTime; // 0x538(0x04)
	char pad_53C[0x24]; // 0x53c(0x24)
	float PausedTime; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)

	void OnAnimRankingToMatchStatistics(); // Function TslGameUI.LeagueMatchResult.OnAnimRankingToMatchStatistics //  // @ game+0xe47479c
	void OnStartAnimWWCD(); // Function TslGameUI.LeagueMatchResult.OnStartAnimWWCD //  // @ game+0xe476b4c
	void GoToLobby(); // Function TslGameUI.LeagueMatchResult.GoToLobby //  // @ game+0xe474608
	void OnBack(); // Function TslGameUI.LeagueMatchResult.OnBack //  // @ game+0xe4747b0
	void OnPressB(); // Function TslGameUI.LeagueMatchResult.OnPressB //  // @ game+0xe475324
	void InitLeagueMatchResult(); // Function TslGameUI.LeagueMatchResult.InitLeagueMatchResult //  // @ game+0xe474774
	void OnEndAnimWWCD(); // Function TslGameUI.LeagueMatchResult.OnEndAnimWWCD //  // @ game+0xe474ae4
	void OnWinnerAnimationFinished(); // Function TslGameUI.LeagueMatchResult.OnWinnerAnimationFinished //  // @ game+0xe4776a8
	void OnAnimMatchStatisticsToRanking(); // Function TslGameUI.LeagueMatchResult.OnAnimMatchStatisticsToRanking //  // @ game+0xe474788
	void OnExitToLobby(); // Function TslGameUI.LeagueMatchResult.OnExitToLobby //  // @ game+0xe474af8
	void OnBackOrNext(); // Function TslGameUI.LeagueMatchResult.OnBackOrNext //  // @ game+0xe4747c4
	void OnNext(); // Function TslGameUI.LeagueMatchResult.OnNext //  // @ game+0xe4752d8
	void OnShowMatchResultButton(); // Function TslGameUI.LeagueMatchResult.OnShowMatchResultButton //  // @ game+0xe4754d0
};

// Class TslGameUI.BluezoneGuideWidget
// Size: 0x428 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBluezoneGuideWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
};

// Class TslGameUI.BluezoneGpsBaseWidget
// Size: 0x6b0 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UBluezoneGpsBaseWidget : UBluezoneGuideWidget {
	struct FName PlayzoneStartParamName; // 0x428(0x08)
	struct FName BluezoneEndParamName; // 0x430(0x08)
	struct FName ColorMultiplyParamName; // 0x438(0x08)
	struct FName IsBlueZoneReleaseParamName; // 0x440(0x08)
	struct FLinearColor InNextPlayzoneColorMultiply; // 0x448(0x10)
	struct FSequence_Float BluezoneResetSequence; // 0x458(0xa0)
	struct FSequence_Float PlayzoneResetSequence; // 0x4f8(0xa0)
	struct FSequence_Float PlayerIconResetSequence; // 0x598(0xa0)
	float StartPlayerIconPosition; // 0x638(0x04)
	float EndPlayerIconPosition; // 0x63c(0x04)
	struct UImage* PlayerIcon; // 0x640(0x08)
	struct UImage* BluezoneGauge; // 0x648(0x08)
	struct TMap<enum class EColorBlindType, struct FLinearColor> PlayerIconEmphasisColors; // 0x650(0x50)
	struct ATslHUD* TslHUD; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)
};

// Class TslGameUI.BluezonePhaseWidget
// Size: 0x448 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UBluezonePhaseWidget : UBluezoneGuideWidget {
	struct UWidget* PanelPhaseCounter; // 0x428(0x08)
	struct UTextBlock* PhaseNumberText; // 0x430(0x08)
	float EmphasisEffectStartScale; // 0x438(0x04)
	char pad_43C[0xc]; // 0x43c(0x0c)

	void UpdateBluezonePhaseText(); // Function TslGameUI.BluezonePhaseWidget.UpdateBluezonePhaseText //  // @ game+0xe478528
};

// Class TslGameUI.BluezoneTimeWidget
// Size: 0x498 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UBluezoneTimeWidget : UBluezoneGuideWidget {
	struct FText TimeTextFormat; // 0x428(0x18)
	struct UTextBlock* TimeText; // 0x440(0x08)
	struct UInvalidationBox* InvalidationBox; // 0x448(0x08)
	struct UWidget* PanelCautionIcon; // 0x450(0x08)
	struct UImage* ImageCautionEmphasis; // 0x458(0x08)
	struct UImage* ImageCaution; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
	struct UMaterialInterface* CautionImageMaterial; // 0x470(0x08)
	bool bShouldPlayEmphasisEffect; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	float EmphasisEffectStartScale; // 0x47c(0x04)
	float EmphasisEffectDurationTime; // 0x480(0x04)
	float EmphasisEffectMaxScale; // 0x484(0x04)
	char pad_488[0x10]; // 0x488(0x10)
};

// Class TslGameUI.ObserverBluezoneTimeWidget
// Size: 0x4c0 (Inherited: 0x498)  [layout: LECH - offset chi la uoc luong]
struct UObserverBluezoneTimeWidget : UBluezoneTimeWidget {
	struct UTextBlock* PhaseNumberText; // 0x498(0x08)
	struct FLinearColor TimeTextEmphasisColor; // 0x4a0(0x10)
	float TimeTextEmphasisEffectCycleDuration; // 0x4b0(0x04)
	char pad_4B4[0xc]; // 0x4b4(0x0c)
};

// Class TslGameUI.BluezoneWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UBluezoneWidget : UUmgBaseWidget {
	struct TArray<struct UWidget*> BluezoneArea; // 0x420(0x10)
	char pad_430[0x8]; // 0x430(0x08)
};

// Class TslGameUI.CarePackageInteractionWidget
// Size: 0x4e0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UCarePackageInteractionWidget : UUmgBaseWidget {
	char pad_420[0x58]; // 0x420(0x58)
	struct FText CarePackageInteractText; // 0x478(0x18)
	struct UBorder* AdditionalMessageLayer; // 0x490(0x08)
	struct UBorder* InteractionLayer; // 0x498(0x08)
	struct UTslKeyboardAndMouseHoldableIconWidget* HoldableKeyImageWidgetBP; // 0x4a0(0x08)
	struct UTextBlock* InteractionText; // 0x4a8(0x08)
	char pad_4B0[0x30]; // 0x4b0(0x30)

	void TryToggleInteractionUI(); // Function TslGameUI.CarePackageInteractionWidget.TryToggleInteractionUI //  // @ game+0xe478514
	void GetCanShowCarePackageList(); // Function TslGameUI.CarePackageInteractionWidget.GetCanShowCarePackageList //  // @ game+0xe4745c8
};

// Class TslGameUI.CarePackageItemListWidget
// Size: 0x550 (Inherited: 0x420)  [layout: KHOP]
struct UCarePackageItemListWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UBorder* BorderCarePackageEmpty; // 0x428(0x08)
	struct UTextBlock* TextCarePackageEmpty; // 0x430(0x08)
	struct UTextBlock* TextEmpty; // 0x438(0x08)
	struct UScrollBox* ScrollboxCarePackageItems; // 0x440(0x08)
	struct UWidget* PanelCarepackage; // 0x448(0x08)
	struct UTextBlock* TextTitle; // 0x450(0x08)
	struct TArray<struct UItem*> Items; // 0x458(0x10)
	struct TArray<struct UCarePackageItemSlotWidget*> ArrItemSlot; // 0x468(0x10)
	char pad_478[0x68]; // 0x478(0x68)
	struct FText CarePackageTitleText; // 0x4e0(0x18)
	struct FText CarePackageEmptyText; // 0x4f8(0x18)
	struct FText TrunkTitleText; // 0x510(0x18)
	struct FText TrunkEmptyText; // 0x528(0x18)
	char pad_540[0x8]; // 0x540(0x08)
	struct UClass* CarePackageItemSlotWidgetClass; // 0x548(0x08)

	void HideTextCarePackageEmptyBorder(); // Function TslGameUI.CarePackageItemListWidget.HideTextCarePackageEmptyBorder //  // @ game+0xe474760
	void OnViewTargetUpdate(); // Function TslGameUI.CarePackageItemListWidget.OnViewTargetUpdate //  // @ game+0xe4775b4
	void HideCarePackageItemList(); // Function TslGameUI.CarePackageItemListWidget.HideCarePackageItemList //  // @ game+0xe4746cc
	void ShowCarePackageItemList(); // Function TslGameUI.CarePackageItemListWidget.ShowCarePackageItemList //  // @ game+0xe478410
};

// Class TslGameUI.CharacterStanceBaseWidget
// Size: 0x480 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UCharacterStanceBaseWidget : UUmgBaseWidget {
	struct UImage* ImageStanceIcon; // 0x420(0x08)
	struct TMap<enum class EStanceMode, struct UTexture2D*> StanceIconTextureMap; // 0x428(0x50)
	char pad_478[0x8]; // 0x478(0x08)
};

// Class TslGameUI.*56b9af0e67
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*56b9af0e67 : UInterface {
};

// Class TslGameUI.*67274c7559
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*67274c7559 : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void OnViewTargetUpdated(); // Function TslGameUI.*67274c7559.OnViewTargetUpdated //  // @ game+0xe47762c
};

// Class TslGameUI.*9fef95e2ae
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*9fef95e2ae : U*67274c7559 {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.CraftMaterialIconWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UCraftMaterialIconWidget : UUmgBaseWidget {
	struct UImage* ItemIconImage; // 0x420(0x08)
	struct UTextBlock* ItemRequiredQuantityTextBox; // 0x428(0x08)
	struct FCraftMaterialCount CachedCraftMaterialCount; // 0x430(0x10)
	struct UItem* CachedItem; // 0x440(0x08)

	void OnItemIconImageAsyncLoadFinished(); // Function TslGameUI.CraftMaterialIconWidget.OnItemIconImageAsyncLoadFinished //  // @ game+0xe47516c
};

// Class TslGameUI.ObserverDamageIndicatorWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UObserverDamageIndicatorWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UCanvasPanel* PanelDamageInfo; // 0x430(0x08)
	struct UClass* DamageInfoWidgetTemplate; // 0x438(0x08)
	struct ATslCharacter* Character; // 0x440(0x08)
	char pad_448[0x68]; // 0x448(0x68)

	void OnFadeOutAnimationFinished(); // Function TslGameUI.ObserverDamageIndicatorWidget.OnFadeOutAnimationFinished //  // @ game+0xe474d68
};

// Class TslGameUI.DamageDirectionIndicatorBaseWidget
// Size: 0x4f8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UDamageDirectionIndicatorBaseWidget : UUmgBaseWidget {
	struct FMulticastDelegate DamageDirectionIndicatorFinished; // 0x420(0x10)
	struct UImage* DirectionIndicator_Image; // 0x430(0x08)
	struct U*d3ff18b806* Curve_Alpha; // 0x438(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x440(0x08)
	struct ATslCharacter* AttackerCharacter; // 0x448(0x08)
	float ActiveTime; // 0x450(0x04)
	char pad_454[0xa4]; // 0x454(0xa4)
};

// Class TslGameUI.DamageDirectionIndicatorWidget
// Size: 0x578 (Inherited: 0x4f8)  [layout: LECH - offset chi la uoc luong]
struct UDamageDirectionIndicatorWidget : UDamageDirectionIndicatorBaseWidget {
	struct UBorder* DamageIndicator_Border; // 0x4f8(0x08)
	struct UWidgetSwitcher* DamageInfo_Switcher; // 0x500(0x08)
	struct UTslObserverPlayerIconWidget* R_PlayerIcon; // 0x508(0x08)
	struct UTextBlock* R_TeamName_Text; // 0x510(0x08)
	struct UTextBlock* R_PlayerName_Text; // 0x518(0x08)
	struct UTextBlock* R_Damage_Text; // 0x520(0x08)
	struct UTslObserverPlayerIconWidget* L_PlayerIcon; // 0x528(0x08)
	struct UTextBlock* L_TeamName_Text; // 0x530(0x08)
	struct UTextBlock* L_PlayerName_Text; // 0x538(0x08)
	struct UTextBlock* L_Damage_Text; // 0x540(0x08)
	struct UTslUserPlatformImageWidget* L_UserPlatformIcon; // 0x548(0x08)
	struct UTslUserPlatformImageWidget* R_UserPlatformIcon; // 0x550(0x08)
	struct UCurveFloat* Curve_Strength; // 0x558(0x08)
	struct UCurveFloat* Curve_Damage; // 0x560(0x08)
	float TurningAngle; // 0x568(0x04)
	char pad_56C[0xc]; // 0x56c(0x0c)
};

// Class TslGameUI.DamageDirectionIndicatorManagerWidget
// Size: 0x518 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UDamageDirectionIndicatorManagerWidget : UUmgBaseWidget {
	struct ATslCharacter* CachedCharacter; // 0x420(0x08)
	struct UGridPanel* IndicatorPanel; // 0x428(0x08)
	struct UClass* DamageDirectionIndicatorWidgetClass; // 0x430(0x08)
	struct UClass* DefaultIndicatorWidgetClass; // 0x438(0x08)
	struct TMap<struct FString, struct UClass*> LeagueTypeWidgetOverrideMap; // 0x440(0x50)
	struct TArray<struct UDamageDirectionIndicatorBaseWidget*> IndicatorWidgetsPool; // 0x490(0x10)
	struct TArray<enum class EDamageTypeCategory> AcceptableDamageTypes; // 0x4a0(0x10)
	char pad_4B0[0x68]; // 0x4b0(0x68)

	void OnIndicatorFinished(); // Function TslGameUI.DamageDirectionIndicatorManagerWidget.OnIndicatorFinished //  // @ game+0xe475050
	void OnUpdateViewTarget(); // Function TslGameUI.DamageDirectionIndicatorManagerWidget.OnUpdateViewTarget //  // @ game+0xe477538
	void UpdateObserverDamageIndicatorVisibility(); // Function TslGameUI.DamageDirectionIndicatorManagerWidget.UpdateObserverDamageIndicatorVisibility //  // @ game+0xe4785c8
	void OnToggleObserverDamageSpectator(); // Function TslGameUI.DamageDirectionIndicatorManagerWidget.OnToggleObserverDamageSpectator //  // @ game+0xe4774e8
};

// Class TslGameUI.DamageIndicatorManagerBaseWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UDamageIndicatorManagerBaseWidget : UUmgBaseWidget {
	bool bAutoSizeDamageInfoWidget; // 0x420(0x01)
	bool bShowCharacterRenderOnScreen; // 0x421(0x01)
	char pad_422[0x2]; // 0x422(0x02)
	float ForceRemoveTime; // 0x424(0x04)
	struct UCanvasPanel* CanvasPanel; // 0x428(0x08)
	struct TArray<struct UDamageInfoBaseWidget*> DamageInfoWidgetPool; // 0x430(0x10)
	struct UClass* DamageInfoTemplate; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)

	void CreateDamageInfoWidget(); // Function TslGameUI.DamageIndicatorManagerBaseWidget.CreateDamageInfoWidget //  // @ game+0xe4744b0
	void OnFadeOutAnimationFinished(); // Function TslGameUI.DamageIndicatorManagerBaseWidget.OnFadeOutAnimationFinished //  // @ game+0xe474b20
};

// Class TslGameUI.ObserverDamageIndicatorManager
// Size: 0x458 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UObserverDamageIndicatorManager : UDamageIndicatorManagerBaseWidget {
	char pad_450[0x8]; // 0x450(0x08)

	void OnToggleObserverDamageIndicator(); // Function TslGameUI.ObserverDamageIndicatorManager.OnToggleObserverDamageIndicator //  // @ game+0xe4774d4
	void CreateDamageInfoWidget(); // Function TslGameUI.ObserverDamageIndicatorManager.CreateDamageInfoWidget //  // @ game+0xe4744b0
	void UpdateObserverDamageIndicatorVisibility(); // Function TslGameUI.ObserverDamageIndicatorManager.UpdateObserverDamageIndicatorVisibility //  // @ game+0x1053c04
};

// Class TslGameUI.ObserverDamageInfoWidget
// Size: 0x500 (Inherited: 0x500)  [layout: KHOP]
struct UObserverDamageInfoWidget : UDamageInfoBaseWidget {

	void UpdateFontColor(); // Function TslGameUI.ObserverDamageInfoWidget.UpdateFontColor //  // @ game+0x43bab4
};

// Class TslGameUI.*8dfff3d66c
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*8dfff3d66c : UObject {
	struct UButton* *dc9a6ad66b; // 0x30(0x08)
	struct UButton* *0b065731a3; // 0x38(0x08)
	struct UButton* *02153d3067; // 0x40(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
	struct UTslReplayTimeline* *63179e060c; // 0x58(0x08)

	void ApplyReplayDataSet(); // Function TslGameUI.*8dfff3d66c.ApplyReplayDataSet //  // @ game+0xe473e84
};

// Class TslGameUI.TslReplayTimeline
// Size: 0xb20 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayTimeline : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UCurveFloat* ZoomLevelCurve; // 0x428(0x08)
	struct UClass* DefaultReplayTimelineCameraEventItemClass; // 0x430(0x08)
	struct UClass* DefaultReplayTimelineKillEventItemClass; // 0x438(0x08)
	struct UClass* DefaultReplayTimelineDBNOEventItemClass; // 0x440(0x08)
	struct UClass* DefaultZoomPositionWidgetClass; // 0x448(0x08)
	struct UClass* DefaultRenderingTimePointClass; // 0x450(0x08)
	struct UClass* DefaultReplayRenderOptionClass; // 0x458(0x08)
	struct TMap<struct FString, struct UTexture*> DefaultLUTMap; // 0x460(0x50)
	float KeyGuideMinimapExtendedOffsetY; // 0x4b0(0x04)
	char pad_4B4[0xc]; // 0x4b4(0x0c)
	struct UTslGameInstance* TslGameInstance; // 0x4c0(0x08)
	struct UTslTimelineZoomPosition* ZoomPositionWidget; // 0x4c8(0x08)
	char pad_4D0[0xa8]; // 0x4d0(0xa8)
	struct FText TimelineJumpTo; // 0x578(0x18)
	char pad_590[0x330]; // 0x590(0x330)
	struct UCanvasPanel* CanvasPanelMain; // 0x8c0(0x08)
	struct UBorder* BorderDragCapture; // 0x8c8(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x8d0(0x08)
	struct UImage* TimelineShadow; // 0x8d8(0x08)
	struct U*7fa8406bd3* JumpingTimeline; // 0x8e0(0x08)
	struct UBackgroundBlur* BackgroundBlurReplayDataSetButtons; // 0x8e8(0x08)
	struct UVerticalBox* ListReplayButtons; // 0x8f0(0x08)
	struct TArray<struct U*8dfff3d66c*> DataSetButtonList; // 0x8f8(0x10)
	struct UVerticalBox* VertivalBoxKeyGuide; // 0x908(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgShowHideTimeline; // 0x910(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgSpectateView; // 0x918(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgFreecamView; // 0x920(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgShowHideUI; // 0x928(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgCameraAscending; // 0x930(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImgCameraDescending; // 0x938(0x08)
	struct USizeBox* SizeBoxButtonEditorModeClose; // 0x940(0x08)
	struct UButton* ButtonEditorModeClose; // 0x948(0x08)
	struct UBorder* BorderReplayControls; // 0x950(0x08)
	struct UHorizontalBox* HorizontalBoxEditorModeControls; // 0x958(0x08)
	struct UButton* ButtonAddMarker; // 0x960(0x08)
	struct UButton* ButtonDelMarker; // 0x968(0x08)
	struct UButton* ButtonDelAllMarker; // 0x970(0x08)
	struct UBorder* BorderCameraPathOver; // 0x978(0x08)
	struct UButton* ButtonCameraPathToggle; // 0x980(0x08)
	struct UButton* ButtonCameraPathToggleText; // 0x988(0x08)
	struct UTextBlock* TextCameraPathToggleText; // 0x990(0x08)
	struct UHorizontalBox* HorizontalBoxReplayModeControls; // 0x998(0x08)
	struct UCheckBox* CheckBoxKills; // 0x9a0(0x08)
	struct UCheckBox* CheckBoxDBNOs; // 0x9a8(0x08)
	struct UHorizontalBox* HorizontalBoxCommonControls; // 0x9b0(0x08)
	struct UHorizontalBox* HorizontalBoxTimelineZoom; // 0x9b8(0x08)
	struct USlider* SliderTimelineZoom; // 0x9c0(0x08)
	struct UButton* ButtonEditorPrev; // 0x9c8(0x08)
	struct UButton* ButtonEditorPause; // 0x9d0(0x08)
	struct UButton* ButtonEditorPlay; // 0x9d8(0x08)
	struct UButton* ButtonEditorNext; // 0x9e0(0x08)
	struct UButton* ButtonEditorStop; // 0x9e8(0x08)
	struct UButton* ButtonEditorRec; // 0x9f0(0x08)
	struct UButton* ButtonTimeSpeedDown; // 0x9f8(0x08)
	struct UTextBlock* TextTimeSpeed; // 0xa00(0x08)
	struct UButton* ButtonTimeSpeedUp; // 0xa08(0x08)
	struct UHorizontalBox* HorizontalBoxReplayModeButtons; // 0xa10(0x08)
	struct USizeBox* SizeBoxButtonReport; // 0xa18(0x08)
	struct UButton* ButtonReplayEdit; // 0xa20(0x08)
	struct UButton* ButtonReport; // 0xa28(0x08)
	struct UHorizontalBox* HorizontalBoxEditorModeButtons; // 0xa30(0x08)
	struct UButton* ButtonSave; // 0xa38(0x08)
	struct UButton* ButtonExport; // 0xa40(0x08)
	struct UBorder* BorderReplayTimeline; // 0xa48(0x08)
	struct UHorizontalBox* HorizontalBoxTimelineWithTime; // 0xa50(0x08)
	struct UHorizontalBox* HorizontalBoxTimeline; // 0xa58(0x08)
	struct UTextBlock* TextTimeNow; // 0xa60(0x08)
	struct UTextBlock* TextTimeTotal; // 0xa68(0x08)
	struct UOverlay* OverlayTimeline; // 0xa70(0x08)
	struct USizeBox* SizeBoxLeftClipCover; // 0xa78(0x08)
	struct USizeBox* SizeBoxRightClipCover; // 0xa80(0x08)
	struct UTextBlock* TextJumpingTimeline; // 0xa88(0x08)
	struct UTextBlock* TextSaveComplete; // 0xa90(0x08)
	struct UTextBlock* TextApplyComplete; // 0xa98(0x08)
	struct UTextBlock* TextShowHideTimeline; // 0xaa0(0x08)
	struct USlider* SliderTimeline; // 0xaa8(0x08)
	struct USlider* SliderScroll; // 0xab0(0x08)
	struct UBorder* BorderTimeline; // 0xab8(0x08)
	struct UBorder* BorderScrollBar; // 0xac0(0x08)
	struct UTslCameraKeyframeSetting* CameraKeyframeSetting; // 0xac8(0x08)
	struct UTslTimelineHighlight* TimelineHighlight; // 0xad0(0x08)
	struct TArray<struct UTslReplayTimelineCameraEventItem*> CameraEventItemWidgets; // 0xad8(0x10)
	struct TArray<struct UTslReplayTimelineKillEventItem*> KillEventItemWidgets; // 0xae8(0x10)
	struct TArray<struct UTslReplayTimelineDBNOEventItem*> DBNOEventItemWidgets; // 0xaf8(0x10)
	struct UTslRenderingTimePoint* RenderingTimePointStart; // 0xb08(0x08)
	struct UTslRenderingTimePoint* RenderingTimePointEnd; // 0xb10(0x08)
	struct UTslReplayRenderOption* ReplayRenderOption; // 0xb18(0x08)

	void GetDBNOEventsDone(); // Function TslGameUI.TslReplayTimeline.GetDBNOEventsDone //  // @ game+0xe4745e0
	void UpdateKeyGuidePosition(); // Function TslGameUI.TslReplayTimeline.UpdateKeyGuidePosition //  // @ game+0x2d0eee0
	void OnHotkeyReplayEditorEditMode(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorEditMode //  // @ game+0xe474fc4
	void DeleteAllCameraMarker(); // Function TslGameUI.TslReplayTimeline.DeleteAllCameraMarker //  // @ game+0xe47458c
	void OnSpeedDown(); // Function TslGameUI.TslReplayTimeline.OnSpeedDown //  // @ game+0xe476b24
	void OnGoToTimelineDoneToFindCharacter(); // Function TslGameUI.TslReplayTimeline.OnGoToTimelineDoneToFindCharacter //  // @ game+0xe474f88
	void ReplayJumpAndPause(); // Function TslGameUI.TslReplayTimeline.ReplayJumpAndPause //  // @ game+0xe4776d4
	void ShowCameraKeyframeSetting(); // Function TslGameUI.TslReplayTimeline.ShowCameraKeyframeSetting //  // @ game+0xe478394
	void BindOnGotoTimelineDoneToFindKillerOrVictim(); // Function TslGameUI.TslReplayTimeline.BindOnGotoTimelineDoneToFindKillerOrVictim //  // @ game+0xe473e98
	void OnHotkeyReplayEditorSettingApply(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorSettingApply //  // @ game+0xe475014
	void OnHotkeyReplayEditorExportCancel(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorExportCancel //  // @ game+0xe474fd8
	void OnSelectPrevCameraMarker(); // Function TslGameUI.TslReplayTimeline.OnSelectPrevCameraMarker //  // @ game+0xe4754bc
	void GetKillEventsDone(); // Function TslGameUI.TslReplayTimeline.GetKillEventsDone //  // @ game+0xe4745f4
	void OnSelectNextCameraMarker(); // Function TslGameUI.TslReplayTimeline.OnSelectNextCameraMarker //  // @ game+0xe4754a8
	void SetReplayClipCover(); // Function TslGameUI.TslReplayTimeline.SetReplayClipCover //  // @ game+0xe4781c8
	void UpdateCurCameraMarkerColor(); // Function TslGameUI.TslReplayTimeline.UpdateCurCameraMarkerColor //  // @ game+0xe4785a0
	void ToggleHiddenTimeLineWidget(); // Function TslGameUI.TslReplayTimeline.ToggleHiddenTimeLineWidget //  // @ game+0xe4784f4
	void OnHotkeyReplayEditorExport(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorExport //  // @ game+0xe474b0c
	void ToggleCameraPathPoints(); // Function TslGameUI.TslReplayTimeline.ToggleCameraPathPoints //  // @ game+0xe4784e0
	void ShowCameraEvents(); // Function TslGameUI.TslReplayTimeline.ShowCameraEvents //  // @ game+0xe478380
	void OnSpeedUp(); // Function TslGameUI.TslReplayTimeline.OnSpeedUp //  // @ game+0xe476b38
	void OnSliderTimelineChanged(); // Function TslGameUI.TslReplayTimeline.OnSliderTimelineChanged //  // @ game+0xe4761b0
	void AllCameraEventDeselect(); // Function TslGameUI.TslReplayTimeline.AllCameraEventDeselect //  // @ game+0xe4739d4
	void ApplyMiniCameraKeyframeSetting(); // Function TslGameUI.TslReplayTimeline.ApplyMiniCameraKeyframeSetting //  // @ game+0xe4739e8
	void OnExport(); // Function TslGameUI.TslReplayTimeline.OnExport //  // @ game+0xe474b0c
	void SetTimelineMaximize(); // Function TslGameUI.TslReplayTimeline.SetTimelineMaximize //  // @ game+0xe47836c
	void OnHotkeyReplayEditorSettingReset(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorSettingReset //  // @ game+0xe475028
	void AddCameraMarker(); // Function TslGameUI.TslReplayTimeline.AddCameraMarker //  // @ game+0xe4739c0
	void OnHoveredButtonCameraPath(); // Function TslGameUI.TslReplayTimeline.OnHoveredButtonCameraPath //  // @ game+0xe47503c
	void OnHotkeyReplayEditorReplayMode(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorReplayMode //  // @ game+0xe474fec
	void OnEditorStop(); // Function TslGameUI.TslReplayTimeline.OnEditorStop //  // @ game+0xe474ad0
	void UpdateKeyImages(); // Function TslGameUI.TslReplayTimeline.UpdateKeyImages //  // @ game+0xe4785b4
	void OnToggleReplayTimeline(); // Function TslGameUI.TslReplayTimeline.OnToggleReplayTimeline //  // @ game+0xe477510
	void OnCheckBoxDBNOsChanged(); // Function TslGameUI.TslReplayTimeline.OnCheckBoxDBNOsChanged //  // @ game+0xe474800
	void OnCheckBoxKillsChanged(); // Function TslGameUI.TslReplayTimeline.OnCheckBoxKillsChanged //  // @ game+0xe474880
	void OnReport(); // Function TslGameUI.TslReplayTimeline.OnReport //  // @ game+0xe475480
	void OnSizeBoxButtonReportPrepass(); // Function TslGameUI.TslReplayTimeline.OnSizeBoxButtonReportPrepass //  // @ game+0xe4754e4
	void OnGotoTimelineDoneToFindKillerOrVictim(); // Function TslGameUI.TslReplayTimeline.OnGotoTimelineDoneToFindKillerOrVictim //  // @ game+0xe474fb0
	void OnTogglePause(); // Function TslGameUI.TslReplayTimeline.OnTogglePause //  // @ game+0xe4774fc
	void OnGotoEndOfReplayTimeline(); // Function TslGameUI.TslReplayTimeline.OnGotoEndOfReplayTimeline //  // @ game+0xe474f9c
	void OnDeleteAllCameraMarkerOK(); // Function TslGameUI.TslReplayTimeline.OnDeleteAllCameraMarkerOK //  // @ game+0xe474a44
	void OnPlay(); // Function TslGameUI.TslReplayTimeline.OnPlay //  // @ game+0xe475310
	void OnSwitchToReplayMode(); // Function TslGameUI.TslReplayTimeline.OnSwitchToReplayMode //  // @ game+0xe474fec
	void OnGoToTimelineDoneToBlockJump(); // Function TslGameUI.TslReplayTimeline.OnGoToTimelineDoneToBlockJump //  // @ game+0xe474f74
	void OnSave(); // Function TslGameUI.TslReplayTimeline.OnSave //  // @ game+0xe475494
	void GetCameraEventsDone(); // Function TslGameUI.TslReplayTimeline.GetCameraEventsDone //  // @ game+0xe4745b4
	void OnMouseMoveBorderTimeline(); // Function TslGameUI.TslReplayTimeline.OnMouseMoveBorderTimeline //  // @ game+0xe475180
	void DeleteSelectedCameraMarker(); // Function TslGameUI.TslReplayTimeline.DeleteSelectedCameraMarker //  // @ game+0xe4745a0
	void OnSliderScrollChanged(); // Function TslGameUI.TslReplayTimeline.OnSliderScrollChanged //  // @ game+0xe47583c
	void OnUnhoveredButtonCameraPath(); // Function TslGameUI.TslReplayTimeline.OnUnhoveredButtonCameraPath //  // @ game+0xe477524
	void CheckReportButton(); // Function TslGameUI.TslReplayTimeline.CheckReportButton //  // @ game+0xe47449c
	void OnHotkeyReplayEditorSave(); // Function TslGameUI.TslReplayTimeline.OnHotkeyReplayEditorSave //  // @ game+0xe475000
	void OnEditorRec(); // Function TslGameUI.TslReplayTimeline.OnEditorRec //  // @ game+0xe474abc
	void OnSwitchToEditMode(); // Function TslGameUI.TslReplayTimeline.OnSwitchToEditMode //  // @ game+0xe474fc4
	void OnTimelineZoomChanged(); // Function TslGameUI.TslReplayTimeline.OnTimelineZoomChanged //  // @ game+0xe476b60
	void OnPause(); // Function TslGameUI.TslReplayTimeline.OnPause //  // @ game+0xe4752fc
};

// Class TslGameUI.FppWeaponSlotHudBaseWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UFppWeaponSlotHudBaseWidget : UUmgBaseWidget {
	struct UUserWidget* WidgetFppWeaponSlot; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)

	void ChangeWeaponListWidgetPosition(); // Function TslGameUI.FppWeaponSlotHudBaseWidget.ChangeWeaponListWidgetPosition //  // @ game+0xfcd4dc
	void OnMinimapExtendToggle(); // Function TslGameUI.FppWeaponSlotHudBaseWidget.OnMinimapExtendToggle //  // @ game+0xe48e92c
};

// Class TslGameUI.GameInfoCanvasBaseWidget
// Size: 0x4c0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UGameInfoCanvasBaseWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* GamePlayInfoSwitcher; // 0x420(0x08)
	struct UWidgetSwitcher* KillCountOrTeamCountSwitcher; // 0x428(0x08)
	struct UInvalidationBox* InvalidationBox_TotalTimeInfo; // 0x430(0x08)
	struct UInvalidationBox* InvalidationBox_TimeLimitInfo; // 0x438(0x08)
	struct UInvalidationBox* InvalidationBox_CountSwitcher; // 0x440(0x08)
	struct UInvalidationBox* InvalidationBox_AssistInfo; // 0x448(0x08)
	struct UInvalidationBox* InvalidationBox_AlivePlayerInfo; // 0x450(0x08)
	struct TMap<uint32, struct UInvalidationBox*> InvalidationBoxMap; // 0x458(0x50)
	struct UTextBlock* TimeLimitText; // 0x4a8(0x08)
	struct U*66ca516800* TimeLimitTextUpdater; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void UpdateWidgetEnabled(); // Function TslGameUI.GameInfoCanvasBaseWidget.UpdateWidgetEnabled //  // @ game+0xe4990d4
	void OnTimeLimitTextUpdated(); // Function TslGameUI.GameInfoCanvasBaseWidget.OnTimeLimitTextUpdated //  // @ game+0xe494034
};

// Class TslGameUI.GameProgressTimeWidget
// Size: 0x440 (Inherited: 0x420)  [layout: KHOP]
struct UGameProgressTimeWidget : UUmgBaseWidget {
	struct FText TimeTextFormat; // 0x420(0x18)
	struct UTextBlock* CachedProgressTimeText; // 0x438(0x08)
};

// Class TslGameUI.TslHudCounterInfoStrategy
// Size: 0x68 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UTslHudCounterInfoStrategy : U*d51199f832 {
	char pad_58[0x10]; // 0x58(0x10)

	void OnPlayerStateRep(); // Function TslGameUI.TslHudCounterInfoStrategy.OnPlayerStateRep //  // @ game+0xe48f6fc
	void ShowForWhile(); // Function TslGameUI.TslHudCounterInfoStrategy.ShowForWhile //  // @ game+0xe497a68
	void OnCountChanged(); // Function TslGameUI.TslHudCounterInfoStrategy.OnCountChanged //  // @ game+0xe48aeb0
};

// Class TslGameUI.HUDCounterWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UHUDCounterWidget : UUmgBaseWidget {
	enum class ECounterWidgetType CountType; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float ShowDuration; // 0x424(0x04)
	struct UTextBlock* TitleText; // 0x428(0x08)
	struct UTextBlock* CountText; // 0x430(0x08)
	struct U*7fa8406bd3* Increasing; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)

	void OnCountChanged(); // Function TslGameUI.HUDCounterWidget.OnCountChanged //  // @ game+0xe48ae38
	void OnPlayerStateRep(); // Function TslGameUI.HUDCounterWidget.OnPlayerStateRep //  // @ game+0xe48f680
	void ShowForWhile(); // Function TslGameUI.HUDCounterWidget.ShowForWhile //  // @ game+0xe497978
	void RefreshVisibility(); // Function TslGameUI.HUDCounterWidget.RefreshVisibility //  // @ game+0xe496868
};

// Class TslGameUI.TslTextBlockWithWrapSetter
// Size: 0x260 (Inherited: 0x260)  [layout: KHOP]
struct UTslTextBlockWithWrapSetter : UTextBlock {
};

// Class TslGameUI.ImageInTextWidget
// Size: 0x578 (Inherited: 0x420)  [layout: KHOP]
struct UImageInTextWidget : UUmgBaseWidget {
	struct FText FormatText; // 0x420(0x18)
	struct TMap<struct FString, struct FTexture2DAndSizePair> Texture2DAndSizeMap; // 0x438(0x50)
	struct FSlateFontInfo FontInfo; // 0x488(0x68)
	enum class EVerticalAlignment VecticalAlignment; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	struct FSlateChildSize HorizontalBoxSize; // 0x4f4(0x08)
	struct FSlateChildSize TextBlockSize; // 0x4fc(0x08)
	bool TextAutoWrap; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	float TextWrapAt; // 0x508(0x04)
	enum class ETextWrappingPolicy TextWrappingPolicy; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	struct FVector2D KeyIconSize; // 0x510(0x08)
	struct UVerticalBox* MainVerticalBox; // 0x518(0x08)
	struct TArray<struct UHorizontalBox*> AvailableHorizontalBoxes; // 0x520(0x10)
	struct TArray<struct UTslTextBlockWithWrapSetter*> AvailableTextBlocks; // 0x530(0x10)
	struct TArray<struct UImage*> AvailableImages; // 0x540(0x10)
	struct TArray<struct USizeBox*> AvailableSizeBoxWithKeyIconWidgets; // 0x550(0x10)
	char pad_560[0x10]; // 0x560(0x10)
	struct UClass* KeyIconWidgetClass; // 0x570(0x08)

	void UpdateText(); // Function TslGameUI.ImageInTextWidget.UpdateText //  // @ game+0xe498d9c
};

// Class TslGameUI.IntegrityCheckResultWidget
// Size: 0x4b0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UIntegrityCheckResultWidget : UBlockInputUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
	struct U*7fa8406bd3* EmergingAnimation; // 0x478(0x08)
	struct UButton* ActionButton; // 0x480(0x08)
	struct UTextBlock* ActionButtonText; // 0x488(0x08)
	struct UButton* CloseButton; // 0x490(0x08)
	struct UTextBlock* CloseButtonText; // 0x498(0x08)
	struct UTextBlock* IntegrityCheckResultText; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)

	void OnClick_ActionButton(); // Function TslGameUI.IntegrityCheckResultWidget.OnClick_ActionButton //  // @ game+0xe48a828
	void OnHover_Button(); // Function TslGameUI.IntegrityCheckResultWidget.OnHover_Button //  // @ game+0xe195788
	void OnClick_CloseButton(); // Function TslGameUI.IntegrityCheckResultWidget.OnClick_CloseButton //  // @ game+0xe48a83c
};

// Class TslGameUI.ItemToolTipFiremode
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UItemToolTipFiremode : UUmgBaseWidget {
	struct UTexture2D* FiremodeIcon; // 0x420(0x08)
	struct FText FiremodeName; // 0x428(0x18)
	int32 FiremodeFontSize; // 0x440(0x04)
	struct FLinearColor FiremodeFontColor; // 0x444(0x10)
	float FiremodeWidth; // 0x454(0x04)
	struct USizeBox* SizeboxFiremode; // 0x458(0x08)
	struct UImage* ImageFiremodeIcon; // 0x460(0x08)
	struct UTextBlock* TextFiremodeName; // 0x468(0x08)
};

// Class TslGameUI.ItemToolTipWidget
// Size: 0x5d8 (Inherited: 0x4a8)  [layout: KHOP]
struct UItemToolTipWidget : UItemToolTipBaseWidget {
	struct UImage* ImageIcon; // 0x4a8(0x08)
	struct UTextBlock* TextItemName; // 0x4b0(0x08)
	struct UTextBlock* TextCategory; // 0x4b8(0x08)
	struct UTslFlowingTextWidget* TextSkinName; // 0x4c0(0x08)
	struct UTslRichTextBlock* TextDescription; // 0x4c8(0x08)
	struct UTextBlock* TextCapacity; // 0x4d0(0x08)
	struct UPanelWidget* ListComparison; // 0x4d8(0x08)
	struct UTextBlock* TextComparingItemName; // 0x4e0(0x08)
	struct UPanelWidget* ListAmmoInfo; // 0x4e8(0x08)
	struct UTextBlock* TextAmmoName; // 0x4f0(0x08)
	struct UTextBlock* TextAmmoPerClip; // 0x4f8(0x08)
	struct UImage* ImageAmmoIcon; // 0x500(0x08)
	struct UPanelWidget* ListWeaponGauge; // 0x508(0x08)
	struct UItemToolTipGaugeWidget* DamageGauge; // 0x510(0x08)
	struct UItemToolTipGaugeWidget* DPSGauge; // 0x518(0x08)
	struct UItemToolTipGaugeWidget* RPMGauge; // 0x520(0x08)
	struct UItemToolTipGaugeWidget* EffectRangeGauge; // 0x528(0x08)
	struct UItemToolTipGaugeWidget* AccuracyGauge; // 0x530(0x08)
	struct UItemToolTipGaugeWidget* VelocityGauge; // 0x538(0x08)
	struct UWrapBox* ListFiremode; // 0x540(0x08)
	char pad_548[0x4]; // 0x548(0x04)
	float MaxDamage; // 0x54c(0x04)
	float MaxEffectRange; // 0x550(0x04)
	float MaxAccuracy; // 0x554(0x04)
	float MaxRPM; // 0x558(0x04)
	float MaxDPS; // 0x55c(0x04)
	float MaxVelocity; // 0x560(0x04)
	bool bPrintDebugWeaponInfoToScreen; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct UClass* ItemTooltipFiremodeClass; // 0x568(0x08)
	struct TMap<enum class EFiremode, struct FTooltipFiremodeImage> FiremodeIcons; // 0x570(0x50)
	int32 FiremodeFontSize; // 0x5c0(0x04)
	struct FLinearColor FiremodeFontColor; // 0x5c4(0x10)
	float FiremodeWidth; // 0x5d4(0x04)

	void RefreshSkinInfo(); // Function TslGameUI.ItemToolTipWidget.RefreshSkinInfo //  // @ game+0xe4967d8
};

// Class TslGameUI.ItemToolTipGaugeWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UItemToolTipGaugeWidget : UUmgBaseWidget {
	struct FLinearColor ComparingBaseColor; // 0x420(0x10)
	struct FLinearColor ComparingEmphasizingColor; // 0x430(0x10)
	struct FLinearColor NonComparingBaseColor; // 0x440(0x10)
	struct FLinearColor NonComparingZeroColor; // 0x450(0x10)
	struct FText GaugeName; // 0x460(0x18)
	int32 GaugeFontSize; // 0x478(0x04)
	struct FLinearColor GaugeFontColor; // 0x47c(0x10)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UImage* Gauge_Image; // 0x490(0x08)
	struct UTextBlock* Gauge_Text; // 0x498(0x08)
	char pad_4A0[0x8]; // 0x4a0(0x08)

	void Update(); // Function TslGameUI.ItemToolTipGaugeWidget.Update //  // @ game+0xe497d38
};

// Class TslGameUI.ItemWidget
// Size: 0x460 (Inherited: 0x420)  [layout: KHOP]
struct UItemWidget : UUmgBaseWidget {
	struct FMulticastDelegate ItemWidgetOnHovered; // 0x420(0x10)
	struct FMulticastDelegate ItemWidgetOnUnhovered; // 0x430(0x10)
	struct UTslFakeButton* ItemIconButton; // 0x440(0x08)
	struct UImage* ItemIconImage; // 0x448(0x08)
	struct FName ItemImageParam; // 0x450(0x08)
	struct UItem* CachedItem; // 0x458(0x08)

	void UpdateWithCachedItem(); // Function TslGameUI.ItemWidget.UpdateWithCachedItem //  // @ game+0xe49a5e8
	void OnUnhovered(); // Function TslGameUI.ItemWidget.OnUnhovered //  // @ game+0xe199c88
	void OnHovered(); // Function TslGameUI.ItemWidget.OnHovered //  // @ game+0xe48ce60
};

// Class TslGameUI.KillCountBaseWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UKillCountBaseWidget : UUmgBaseWidget {
	struct UTextBlock* TextKillCount; // 0x420(0x08)
	struct U*7fa8406bd3* AnimIncreasing; // 0x428(0x08)
	float IncreasingKillCountDisplayTime; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)

	void ShowForWhile(); // Function TslGameUI.KillCountBaseWidget.ShowForWhile //  // @ game+0xe4979f0
};

// Class TslGameUI.LifeGaugeEffectBaseWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct ULifeGaugeEffectBaseWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UImage* Effect; // 0x430(0x08)
	struct UImage* EffectBg; // 0x438(0x08)
	struct FName OldLifeRatioParamName; // 0x440(0x08)
	struct FName CurrentLifeRatioParamName; // 0x448(0x08)
	struct TArray<struct FUiEffectAnimation_FloatCurve> LifeEffectAnimationFloatCurveList; // 0x450(0x10)
	struct TArray<struct FUiEffectAnimation_VectorCurve> LifeEffectAnimationVectorCurveList; // 0x460(0x10)
	struct TArray<struct FUiEffectAnimation_FloatCurve> LifeEffectBgAnimationFloatCurveList; // 0x470(0x10)
	struct TArray<struct FUiEffectAnimation_VectorCurve> LifeEffectBgAnimationVectorCurveList; // 0x480(0x10)
	bool bAutoDestroyOnEffectPlayFinish; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
};

// Class TslGameUI.LifeGaugeTemplateBaseWidget
// Size: 0x530 (Inherited: 0x420)  [layout: KHOP]
struct ULifeGaugeTemplateBaseWidget : UUmgBaseWidget {
	struct UImage* GaugeImage; // 0x420(0x08)
	struct UImage* Background; // 0x428(0x08)
	struct UBorder* BorderEffectLayer; // 0x430(0x08)
	struct UOverlay* EffectLayer; // 0x438(0x08)
	struct UInvalidationBox* InvalidationBox; // 0x440(0x08)
	struct U*7fa8406bd3* Warning2; // 0x448(0x08)
	struct UTslHealthGaugeData* LifeGaugeColorData; // 0x450(0x08)
	struct FName LifeGaugeRatioValueParamName; // 0x458(0x08)
	struct FName LifeGaugeColorParamName; // 0x460(0x08)
	bool bOverrideLifeGaugeMaterial; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UMaterialInterface* OverrideLifeGaugeMaterial; // 0x470(0x08)
	bool bOverrideBackgroundMaterial; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UMaterialInterface* OverrideBackgroundMaterial; // 0x480(0x08)
	bool bUseEffect; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct UClass* DamageEffectClass; // 0x490(0x08)
	struct UClass* HealEffectClass; // 0x498(0x08)
	struct UClass* HealAmountEffectClass; // 0x4a0(0x08)
	int32 DamageEffectMax; // 0x4a8(0x04)
	int32 HealEffectMax; // 0x4ac(0x04)
	bool bOverrideBackgroundColor; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FLinearColor BackgroundColor; // 0x4b4(0x10)
	bool bOverrideGaugeColor; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	struct FLinearColor OverrideGaugeColor; // 0x4c8(0x10)
	bool bOverrideDamageEffectColor; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	struct FLinearColor OverrideDamageEffectColor; // 0x4dc(0x10)
	char pad_4EC[0x14]; // 0x4ec(0x14)
	struct UMaterialInterface* OriginalHealthMat; // 0x500(0x08)
	struct TArray<struct ULifeGaugeEffectBaseWidget*> DamageEffects; // 0x508(0x10)
	struct TArray<struct ULifeGaugeEffectBaseWidget*> HealEffects; // 0x518(0x10)
	struct ULifeGaugeEffectBaseWidget* HealAmountEffect; // 0x528(0x08)

	void OnDestoryDamageEffect(); // Function TslGameUI.LifeGaugeTemplateBaseWidget.OnDestoryDamageEffect //  // @ game+0xad92dc
	void OnDestoryHealEffect(); // Function TslGameUI.LifeGaugeTemplateBaseWidget.OnDestoryHealEffect //  // @ game+0xe48c06c
};

// Class TslGameUI.LobbyTestButton
// Size: 0x2a0 (Inherited: 0x258)  [layout: KHOP]
struct ULobbyTestButton : UUserWidget {
	char pad_258[0x10]; // 0x258(0x10)
	struct FString Value; // 0x268(0x10)
	struct FText DisplayText; // 0x278(0x18)
	struct UButton* TestButton; // 0x290(0x08)
	struct UTextBlock* DisplayTextBlock; // 0x298(0x08)

	void HandleButtonClicked(); // Function TslGameUI.LobbyTestButton.HandleButtonClicked //  // @ game+0xe47f068
};

// Class TslGameUI.MapCarePackageItemIconBaseWidget
// Size: 0x458 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMapCarePackageItemIconBaseWidget : UUmgBaseWidget {
	struct UBorder* BorderIcon; // 0x420(0x08)
	struct UImage* ImageIcon; // 0x428(0x08)
	struct FName IconStateParamName; // 0x430(0x08)
	struct FName IconColorParamName; // 0x438(0x08)
	char pad_440[0x18]; // 0x440(0x18)

	void OnButtonDown(); // Function TslGameUI.MapCarePackageItemIconBaseWidget.OnButtonDown //  // @ game+0xe48a2d8
};

// Class TslGameUI.*f1b16f591d
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct U*f1b16f591d : UDataTable {
};

// Class TslGameUI.MapMarkerBaseWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMapMarkerBaseWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimMyMarkerEmerging; // 0x420(0x08)
	struct UWidgetSwitcher* SwitcherMarkerBackground; // 0x428(0x08)
	struct UImage* ImageTeamNumber; // 0x430(0x08)
	struct UImage* ImageMarkerIcon; // 0x438(0x08)
	struct UBorder* BorderMarker; // 0x440(0x08)
	char pad_448[0x28]; // 0x448(0x28)
};

// Class TslGameUI.MapTrapIconBaseWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UMapTrapIconBaseWidget : UUmgBaseWidget {
};

// Class TslGameUI.MapWayPointBaseWidget
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMapWayPointBaseWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimWayPointEmerging; // 0x420(0x08)
	struct FVector2D Position; // 0x428(0x08)
	struct UImage* ImageWayPointArrow; // 0x430(0x08)
	struct UImage* ImageWayPointCircle; // 0x438(0x08)
	struct UImage* ImageTeamNumber; // 0x440(0x08)
	struct UImage* ImageMarker; // 0x448(0x08)
	struct UImage* ImagePingBg; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
};

// Class TslGameUI.MeshRenderWidget
// Size: 0x268 (Inherited: 0x258)  [layout: KHOP]
struct UMeshRenderWidget : UUserWidget {
	struct UImage* MeshRenderImage; // 0x258(0x08)
	struct UTextureRenderTarget2D* ViewModeStudioTexture; // 0x260(0x08)
};

// Class TslGameUI.MiniMapBaseWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UMiniMapBaseWidget : UUmgBaseWidget {
	struct UMapGridWidget* WidgetMapGrid; // 0x420(0x08)
	struct UImage* ImageBg; // 0x428(0x08)
	struct UImage* ImageBlueZoneOutline; // 0x430(0x08)
	float EmphasisEffectTime; // 0x438(0x04)
	float CountdownEffectTime; // 0x43c(0x04)
	int32 BlueZoneAlarmCountMax; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UMapGridWidget* CachedMapWidget; // 0x448(0x08)
	struct UCurveFloat* ViewScale_AccelerationCurve; // 0x450(0x08)
	struct UCurveFloat* ViewScale_DecelerationCurve; // 0x458(0x08)
	char pad_460[0x4]; // 0x460(0x04)
	float ViewScale1DWithoutNextPlayzone; // 0x464(0x04)
	float ViewScaleInterpSpeed; // 0x468(0x04)
	char pad_46C[0x2c]; // 0x46c(0x2c)

	void OnFlightTrailSettingsChanged(); // Function TslGameUI.MiniMapBaseWidget.OnFlightTrailSettingsChanged //  // @ game+0xe48c970
	void OnPingOrWaypointSettingsChanged(); // Function TslGameUI.MiniMapBaseWidget.OnPingOrWaypointSettingsChanged //  // @ game+0xe48f618
};

// Class TslGameUI.MortarCanvasWidget
// Size: 0x258 (Inherited: 0x258)  [layout: KHOP]
struct UMortarCanvasWidget : UUserWidget {
};

// Class TslGameUI.MortarRangeMeterWidget
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UMortarRangeMeterWidget : UTslUserWidget {
	struct UTextBlock* RangeText; // 0x330(0x08)
	struct UImage* RangeMeterImage; // 0x338(0x08)
	struct UTslKeyboardAndMouseHoldableIconWidget* KeyGuideKeyImage; // 0x340(0x08)
	struct U*7fa8406bd3* MortarRangeMeterEmerging; // 0x348(0x08)
	struct U*7fa8406bd3* MortarRangeMeterVanishing; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)

	void OnGameUserSettingApplied(); // Function TslGameUI.MortarRangeMeterWidget.OnGameUserSettingApplied //  // @ game+0xe48ca50
};

// Class TslGameUI.NetworkInfoWidget
// Size: 0x600 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UNetworkInfoWidget : UUmgBaseWidget {
	struct UWidget* InvalidationboxNetworkInfo; // 0x420(0x08)
	struct UTextBlock* TextPing; // 0x428(0x08)
	struct UTextBlock* TextInfraCode; // 0x430(0x08)
	struct UTextBlock* TextRecvBytes; // 0x438(0x08)
	struct UTextBlock* TextSendBytes; // 0x440(0x08)
	struct UTextBlock* TextRecvPackets; // 0x448(0x08)
	struct UTextBlock* TextSendPackets; // 0x450(0x08)
	struct UTextBlock* TextRecvPktLoss; // 0x458(0x08)
	struct UTextBlock* TextSendPktLoss; // 0x460(0x08)
	struct FText PingTextFormat; // 0x468(0x18)
	struct FText RecvBytesTextFormat; // 0x480(0x18)
	struct FText SendBytesTextFormat; // 0x498(0x18)
	struct FText RecvPacketsTextFormat; // 0x4b0(0x18)
	struct FText SendPacketsTextFormat; // 0x4c8(0x18)
	struct FText RecvPktLossTextFormat; // 0x4e0(0x18)
	struct FText SendPktLossTextFormat; // 0x4f8(0x18)
	char pad_510[0xf0]; // 0x510(0xf0)
};

// Class TslGameUI.NetworkProblemBaseWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UNetworkProblemBaseWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* IconBlinking; // 0x420(0x08)
	char pad_428[0x20]; // 0x428(0x20)
};

// Class TslGameUI.NetworkProblemUserInputWidget
// Size: 0x4a0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UNetworkProblemUserInputWidget : UBlockInputUserWidget {
	struct U*7fa8406bd3* EmergingAnimation; // 0x470(0x08)
	struct UButton* ReconnectButton; // 0x478(0x08)
	struct UButton* ExitToLobbyButton; // 0x480(0x08)
	struct UTslUniversalInputVisibilitySwitcher* ButtonSwitcher; // 0x488(0x08)
	char pad_490[0x10]; // 0x490(0x10)

	void OnClick_ReconnectButton(); // Function TslGameUI.NetworkProblemUserInputWidget.OnClick_ReconnectButton //  // @ game+0xe48a864
	void OnClick_ExitToLobbyButton(); // Function TslGameUI.NetworkProblemUserInputWidget.OnClick_ExitToLobbyButton //  // @ game+0xe48a850
};

// Class TslGameUI.ObserverPlayerStatInfoWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UObserverPlayerStatInfoWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTextBlock* TextKillCount; // 0x428(0x08)
	struct UTextBlock* TextKillRank; // 0x430(0x08)
	struct UTextBlock* TextDamageCount; // 0x438(0x08)
	struct UTextBlock* TextDamageRank; // 0x440(0x08)
	struct UTextBlock* TextAssistCount; // 0x448(0x08)
	struct UTextBlock* TextAssistRank; // 0x450(0x08)
	struct FLinearColor DefaultScoreTextColor; // 0x458(0x10)
	struct FLinearColor BestScoreTextColor; // 0x468(0x10)
	char pad_478[0x20]; // 0x478(0x20)
};

// Class TslGameUI.ObserverResultNameGroupWidget
// Size: 0x2f8 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UObserverResultNameGroupWidget : UUserWidget {
	struct UBorder* GroupLayer; // 0x258(0x08)
	struct UTextBlock* RankingText; // 0x260(0x08)
	struct UHorizontalBox* SoloOrDuo; // 0x268(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x270(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x278(0x08)
	struct UHorizontalBox* Squad; // 0x280(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x288(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x290(0x08)
	struct UHorizontalBox* Hexa; // 0x298(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2a0(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2a8(0x08)
	struct UHorizontalBox* Octa; // 0x2b0(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2b8(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2c0(0x08)
	struct UHorizontalBox* Deca; // 0x2c8(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2d0(0x08)
	struct UObserverResultNameWidget* MatchResulttInfo; // 0x2d8(0x08)
	char pad_2E0[0x18]; // 0x2e0(0x18)
};

// Class TslGameUI.ObserverResultNameWidget
// Size: 0x300 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UObserverResultNameWidget : UUserWidget {
	struct USizeBox* SizeBox; // 0x258(0x08)
	struct USizeBox* UserPlatform_SizeBox; // 0x260(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformImageWidget; // 0x268(0x08)
	struct UTextBlock* PlayerName; // 0x270(0x08)
	struct UTextBlock* Slash; // 0x278(0x08)
	struct UTextBlock* KillCount; // 0x280(0x08)
	struct UTextBlock* Kills; // 0x288(0x08)
	char pad_290[0x70]; // 0x290(0x70)
};

// Class TslGameUI.TslHealthGaugeData
// Size: 0x68 (Inherited: 0x38)  [layout: KHOP]
struct UTslHealthGaugeData : UDataAsset {
	struct TArray<struct F*1094a15388> HealthGaugeColors; // 0x38(0x10)
	struct FFloatInterval WarningRage; // 0x48(0x08)
	struct FLinearColor DBNOColor; // 0x50(0x10)
	struct U*d3ff18b806* DBNOColorCurve; // 0x60(0x08)
};

// Class TslGameUI.TslHealthGaugeBaseWidget
// Size: 0x448 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslHealthGaugeBaseWidget : UUmgBaseWidget {
	struct UImage* GaugeImage; // 0x420(0x08)
	bool bSmoothMode; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UTslHealthGaugeData* HealthGaugeData; // 0x430(0x08)
	char pad_438[0x10]; // 0x438(0x10)
};

// Class TslGameUI.TslSquadPlayerInfoBaseWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: KHOP]
struct UTslSquadPlayerInfoBaseWidget : UUmgBaseWidget {
	struct ATslCharacter* Character; // 0x420(0x08)
	struct ATslPlayerStateBase* PlayerState; // 0x428(0x08)
	bool bShow; // 0x430(0x01)
	bool bCachedSelect; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct UMaterialInstanceDynamic* IconMaterial; // 0x438(0x08)
	bool bIsLeftCtrlDown; // 0x440(0x01)
	bool bIsButtonMouseOvered; // 0x441(0x01)
	enum class EDisplayPlayerInfoType PlayerInfo; // 0x442(0x01)
	char pad_443[0x1]; // 0x443(0x01)
	int32 ShortCutNum; // 0x444(0x04)
	struct FLinearColor DeadColor; // 0x448(0x10)
	struct FLinearColor NormalColor; // 0x458(0x10)
	struct FLinearColor PlayerNameFocusColor; // 0x468(0x10)
	struct USizeBox* SizeboxInfoLayer; // 0x478(0x08)
	struct UImage* ImageIcon; // 0x480(0x08)
	struct USizeBox* SizeboxTeamIcon; // 0x488(0x08)
	struct USizeBox* SizeboxKillCount; // 0x490(0x08)
	struct UTextBlock* TextKillCount; // 0x498(0x08)
	struct UTslFlowingTextWidget* PlayerNameFlowText; // 0x4a0(0x08)
	struct UTextBlock* PlayerNameText; // 0x4a8(0x08)
	struct UTslUserPlatformImageWidget* WidgetUserPlatform; // 0x4b0(0x08)
	struct UBorder* BorderPlayerInfo; // 0x4b8(0x08)
	struct USizeBox* SizeboxHPGauge; // 0x4c0(0x08)
	struct UTslHealthGaugeBaseWidget* WidgetHealthGauge; // 0x4c8(0x08)

	void UpdateKill(); // Function TslGameUI.TslSquadPlayerInfoBaseWidget.UpdateKill //  // @ game+0xe498bfc
};

// Class TslGameUI.ObserverTeamInfoListBaseWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UObserverTeamInfoListBaseWidget : UUmgBaseWidget {
	struct UVerticalBox* ListTeamPlayer; // 0x420(0x08)
	struct ATslCharacter* CachedSpectatorOrFollowCharacter; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	struct UClass* SquadPlayerListItem; // 0x438(0x08)
	struct TArray<struct UTslSquadPlayerInfoBaseWidget*> SquadPlayerInfoPool; // 0x440(0x10)
};

// Class TslGameUI.OutsideMapMarkerWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UOutsideMapMarkerWidget : UUmgBaseWidget {
	struct UImage* ImageIcon; // 0x420(0x08)
};

// Class TslGameUI.PlayerDamageIndicatorWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UPlayerDamageIndicatorWidget : UUmgBaseWidget {
	int32 DamageInfoWidgetCacheMinimum; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UClass* DamageInfoWidgetClass; // 0x428(0x08)
	struct UCanvasPanel* DamageInfoCanvas; // 0x430(0x08)
	struct TArray<struct UPlayerDamageInfoWidget*> DamageInfoWidgets; // 0x438(0x10)

	void AddTakeHitInfo(); // Function TslGameUI.PlayerDamageIndicatorWidget.AddTakeHitInfo //  // @ game+0xe47d8bc
};

// Class TslGameUI.PlayerDamageInfoWidget
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UPlayerDamageInfoWidget : UUmgBaseWidget {
	struct UBorder* OuterBorder; // 0x420(0x08)
	struct UTextBlock* DamageAmountText; // 0x428(0x08)
	struct U*7fa8406bd3* FadeInAnim; // 0x430(0x08)
	struct U*7fa8406bd3* FadeOutAnim; // 0x438(0x08)
	bool bDesiredSizeToContent; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FAnchors DesiredAnchor; // 0x444(0x10)
	struct FVector2D DesiredAlignment; // 0x454(0x08)
	struct FLinearColor HeadShotColor; // 0x45c(0x10)
	struct FLinearColor NormalColor; // 0x46c(0x10)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UCanvasPanelSlot* SelfCanvasSlot; // 0x480(0x08)
};

// Class TslGameUI.PlayerHeadManagerWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UPlayerHeadManagerWidget : UUmgBaseWidget {
	struct FTimerHandle TimerHandler_UpdatePlayerHeadWidget; // 0x420(0x08)
	struct UClass* WidgetTemplate; // 0x428(0x08)
	struct TArray<struct UPlayerHeadWidget*> PlayerHeadWidgets; // 0x430(0x10)
	struct UCanvasPanel* PanelPlayerHeadManager; // 0x440(0x08)
	bool bForSpectatorsOnly; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)

	void UpdatePlayerHeadWidget(); // Function TslGameUI.PlayerHeadManagerWidget.UpdatePlayerHeadWidget //  // @ game+0xe498d24
};

// Class TslGameUI.PlayerHeadWidget
// Size: 0x590 (Inherited: 0x420)  [layout: KHOP]
struct UPlayerHeadWidget : UUmgBaseWidget {
	struct ATslCharacter* Character; // 0x420(0x08)
	char pad_428[0x10]; // 0x428(0x10)
	float OffsetZ; // 0x438(0x04)
	float DBNOOffsetZ; // 0x43c(0x04)
	float DeadOffsetZ; // 0x440(0x04)
	float InVehicleOffsetZ; // 0x444(0x04)
	struct UCurveFloat* AnchorCurve; // 0x448(0x08)
	float MiniSwitchDistance; // 0x450(0x04)
	float DistanceForIndicator; // 0x454(0x04)
	float MinOpacityScale; // 0x458(0x04)
	float MinOpacity; // 0x45c(0x04)
	struct UCurveFloat* WidgetCurve; // 0x460(0x08)
	struct TArray<struct UTexture2D*> TeamBackgroundImages; // 0x468(0x10)
	struct FLinearColor WeaponColor; // 0x478(0x10)
	struct FLinearColor AmmoEmptyColor; // 0x488(0x10)
	char pad_498[0x20]; // 0x498(0x20)
	struct UTexture2D* DeathTexture; // 0x4b8(0x08)
	struct FLinearColor DeathIconColor; // 0x4c0(0x10)
	float LifeSpanOnDeath; // 0x4d0(0x04)
	bool bUseDBNOGauge; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	struct UTexture2D* DBNOTexture; // 0x4d8(0x08)
	bool bUseTwoTeamGameTeamColors; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	struct FLinearColor AttackTeamColor; // 0x4e4(0x10)
	struct FLinearColor DefenceTeamColor; // 0x4f4(0x10)
	char pad_504[0x4]; // 0x504(0x04)
	struct UBorder* BorderNameTag; // 0x508(0x08)
	struct UWidgetSwitcher* SwitcherNameTag; // 0x510(0x08)
	struct UImage* ImageWeapon; // 0x518(0x08)
	struct UTslHealthGaugeBaseWidget* HealthGauge; // 0x520(0x08)
	struct UBorder* BorderBgFull; // 0x528(0x08)
	struct UWidgetSwitcher* SwitcherTeamLogoFull; // 0x530(0x08)
	struct UImage* ImageTeamLogoFull; // 0x538(0x08)
	struct UTextBlock* TextTeamNumberFull; // 0x540(0x08)
	struct UWidget* ListTeamPatternFull; // 0x548(0x08)
	struct UBorder* BorderBgMini; // 0x550(0x08)
	struct UWidgetSwitcher* SwitcherTeamLogoMini; // 0x558(0x08)
	struct UImage* ImageTeamLogoMini; // 0x560(0x08)
	struct UTextBlock* TextTeamNumberMini; // 0x568(0x08)
	struct UWidget* ListTeamPatternMini; // 0x570(0x08)
	struct UTextBlock* TextTeamName; // 0x578(0x08)
	struct UTextBlock* TextPlayerName; // 0x580(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformImage; // 0x588(0x08)

	void OnTimerDie(); // Function TslGameUI.PlayerHeadWidget.OnTimerDie //  // @ game+0xe4941fc
	void OnMatchStarted(); // Function TslGameUI.PlayerHeadWidget.OnMatchStarted //  // @ game+0xe48dd68
};

// Class TslGameUI.ReplayProblemBaseWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UReplayProblemBaseWidget : UUmgBaseWidget {
	int32 CheckElapsedTime; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct U*7fa8406bd3* AnimIconBlinking; // 0x428(0x08)
	struct UTextBlock* TextReplay; // 0x430(0x08)
	struct FText DefaultFailureText; // 0x438(0x18)
	struct FText KillcamUnusualMovementText; // 0x450(0x18)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class TslGameUI.ResultProxyWidget
// Size: 0x4f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UResultProxyWidget : UUmgBaseWidget {
	float BHoldTime; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct TMap<enum class MatchResultTypeEnum, struct FStringClassReference> MatchResultWidgetSoftRefs; // 0x428(0x50)
	struct UWidgetSwitcher* RootSwitcher; // 0x478(0x08)
	struct TMap<enum class MatchResultTypeEnum, struct UClass*> MatchResultWidgetClasses; // 0x480(0x50)
	struct UBaseResultWidget* CurActiveResultWidget; // 0x4d0(0x08)
	char pad_4D8[0x18]; // 0x4d8(0x18)

	void OnPressed_B(); // Function TslGameUI.ResultProxyWidget.OnPressed_B //  // @ game+0xe48f8e4
	void UpdateMatchResultWidget(); // Function TslGameUI.ResultProxyWidget.UpdateMatchResultWidget //  // @ game+0xe498c10
	void OnReplayJump(); // Function TslGameUI.ResultProxyWidget.OnReplayJump //  // @ game+0xe48fb00
	void OnReleased_B(); // Function TslGameUI.ResultProxyWidget.OnReleased_B //  // @ game+0xe48fa88
	void OnClicked_ButtonLobby(); // Function TslGameUI.ResultProxyWidget.OnClicked_ButtonLobby //  // @ game+0xe48a8d8
};

// Class TslGameUI.ResultTitleWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: KHOP]
struct UResultTitleWidget : UUmgBaseWidget {
	struct UTextBlock* PlayerName_Text; // 0x420(0x08)
	struct UTslCelebrationFlowWidget* Celebration; // 0x428(0x08)
	struct U*7fa8406bd3* AnimMatchFinished; // 0x430(0x08)
	struct UBorder* BorderMessage; // 0x438(0x08)
	struct UTextBlock* TextMessage; // 0x440(0x08)
	struct UWidgetSwitcher* SwitcherResult; // 0x448(0x08)
	struct FLinearColor DefaultBackgroundColor; // 0x450(0x10)
	struct FLinearColor RedTeamBackgroundColor; // 0x460(0x10)
	struct FLinearColor BlueTeamBackgroundColor; // 0x470(0x10)
	struct FLinearColor DefaultTextColor; // 0x480(0x10)
	struct FLinearColor PlatoonTextColor; // 0x490(0x10)
	struct FText BlueTeamWinText; // 0x4a0(0x18)
	struct FText RedTeamWinText; // 0x4b8(0x18)
	struct UAkAudioEvent* PlatoonWinAudio; // 0x4d0(0x08)
};

// Class TslGameUI.RiderIconWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct URiderIconWidget : UUmgBaseWidget {
	struct UImage* ImageRiderIcon; // 0x420(0x08)
};

// Class TslGameUI.ScreenMapMarkerIndicatorWidget
// Size: 0x4c8 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UScreenMapMarkerIndicatorWidget : UScreenIndicatorBaseWidget {
	struct UBorder* BorderMapMarker; // 0x450(0x08)
	struct UImage* ImageMarkerIcon; // 0x458(0x08)
	struct UWidgetSwitcher* SwitcherMarkerBackground; // 0x460(0x08)
	struct UCurveFloat* AnimCurveMarkOpacity; // 0x468(0x08)
	struct UCurveFloat* AnimCurveMarkOpacityByCrosshair; // 0x470(0x08)
	struct UCurveFloat* AnimCurveMarkOpacityByDistance; // 0x478(0x08)
	struct UCurveFloat* AnimCurveMarkScale; // 0x480(0x08)
	float AimingImageAlpha; // 0x488(0x04)
	float ScopingImageAlpha; // 0x48c(0x04)
	float ScaleCurveMaxDistance; // 0x490(0x04)
	float VisibleMaxDistance; // 0x494(0x04)
	float PreviewAlpha; // 0x498(0x04)
	char pad_49C[0x2c]; // 0x49c(0x2c)
};

// Class TslGameUI.TeamMarkWidget
// Size: 0x5b0 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UTeamMarkWidget : UScreenIndicatorBaseWidget {
	float OffsetZ; // 0x450(0x04)
	float ParachutingOffsetZ; // 0x454(0x04)
	float DeadMarkInvisibleTime; // 0x458(0x04)
	float DeadMarkInvisibleDistance; // 0x45c(0x04)
	float AnimationMaxPercent; // 0x460(0x04)
	float AnimationMaxDistance; // 0x464(0x04)
	float PlatoonOtherSquadInTeamScale; // 0x468(0x04)
	float EmojiDisplayDuration; // 0x46c(0x04)
	struct UTextBlock* TextPlayerName; // 0x470(0x08)
	struct UImage* ImageOutLine; // 0x478(0x08)
	struct UImage* ImageDirection; // 0x480(0x08)
	struct UImage* PlayerIcon; // 0x488(0x08)
	struct UImage* ImageEngageHint; // 0x490(0x08)
	struct UBorder* BorderImageMark; // 0x498(0x08)
	struct UScaleBox* ScaleBoxTeamMark; // 0x4a0(0x08)
	struct UTslUserPlatformImageWidget* WidgetUserPlatformImage; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimOnEngage; // 0x4b0(0x08)
	struct ATeam* TeamMember; // 0x4b8(0x08)
	float AmingImageAlpha; // 0x4c0(0x04)
	float ScopingImageAlpha; // 0x4c4(0x04)
	float AmingTextAlpha; // 0x4c8(0x04)
	float ScopingTextAlpha; // 0x4cc(0x04)
	struct TMap<enum class EGameModeType, struct FTslOverrideTeamMarkAlphaForModeArray> OverrideTeamMarkAlphaMap; // 0x4d0(0x50)
	struct UTslTeamInfoIconDataAsset* TeamIconDataAsset; // 0x520(0x08)
	struct UTexture* AmmoRequestImage; // 0x528(0x08)
	struct UTexture* HealRequestImage; // 0x530(0x08)
	struct UCurveFloat* AnimCurveMarkOpacity; // 0x538(0x08)
	struct UCurveFloat* AnimCurveNameOpacity; // 0x540(0x08)
	struct UCurveFloat* AnimCurveMarkScale; // 0x548(0x08)
	struct UCurveFloat* AnimCurveNameTranslation; // 0x550(0x08)
	char pad_558[0x30]; // 0x558(0x30)
	struct ATslPlayerStateBase* CachedTeamPlayerState; // 0x588(0x08)
	struct U*f74ec5c77a* RMManager; // 0x590(0x08)
	char pad_598[0x18]; // 0x598(0x18)

	void NotifyEngageAttacked(); // Function TslGameUI.TeamMarkWidget.NotifyEngageAttacked //  // @ game+0xe9d83c
	void OnPlayerNameChanged(); // Function TslGameUI.TeamMarkWidget.OnPlayerNameChanged //  // @ game+0xe48f640
	void PlayEmoji(); // Function TslGameUI.TeamMarkWidget.PlayEmoji //  // @ game+0xdb15f64
};

// Class TslGameUI.SoloTeamMarkWidget
// Size: 0x5b8 (Inherited: 0x5b0)  [layout: KHOP]
struct USoloTeamMarkWidget : UTeamMarkWidget {
	struct ATslCharacter* SoloTeamMember; // 0x5b0(0x08)
};

// Class TslGameUI.ThrowableIndicatorWidget
// Size: 0x4a8 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UThrowableIndicatorWidget : UScreenIndicatorBaseWidget {
	struct UImage* ImageGauge; // 0x450(0x08)
	struct U*7fa8406bd3* AnimNearlyEmpty; // 0x458(0x08)
	float ShowDistance; // 0x460(0x04)
	bool bHideUntilExplode; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float GaugeDurationOverride; // 0x468(0x04)
	bool bUseGaugeBeforeExplosion; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	float GaugeNearlyEmptyRatio; // 0x470(0x04)
	bool bIsReverseFill; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct UCurveFloat* ScaleByDistanceCurve; // 0x478(0x08)
	char pad_480[0x28]; // 0x480(0x28)

	void OnProjectileExplode(); // Function TslGameUI.ThrowableIndicatorWidget.OnProjectileExplode //  // @ game+0xe48f928
	void OnRepCreationTime(); // Function TslGameUI.ThrowableIndicatorWidget.OnRepCreationTime //  // @ game+0xe48fac4
	void Destroy(); // Function TslGameUI.ThrowableIndicatorWidget.Destroy //  // @ game+0xe47ddbc
	void OnRepTimeTilExplosion(); // Function TslGameUI.ThrowableIndicatorWidget.OnRepTimeTilExplosion //  // @ game+0xe48faec
	void OnRepSmokeLifetime(); // Function TslGameUI.ThrowableIndicatorWidget.OnRepSmokeLifetime //  // @ game+0xe48fad8
};

// Class TslGameUI.SlotBaseWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct USlotBaseWidget : UUmgBaseWidget {
	struct UAkAudioEvent* MouseOverSound; // 0x420(0x08)
};

// Class TslGameUI.CarePackageItemSlotWidget
// Size: 0x448 (Inherited: 0x428)  [layout: KHOP]
struct UCarePackageItemSlotWidget : USlotBaseWidget {
	char pad_428[0x8]; // 0x428(0x08)
	struct UTextBlock* SlotName; // 0x430(0x08)
	struct UTextBlock* StackCountText; // 0x438(0x08)
	struct UImage* UseInfo_bg; // 0x440(0x08)
};

// Class TslGameUI.TeamOverallKillCountBaseWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTeamOverallKillCountBaseWidget : UUmgBaseWidget {
	struct UTextBlock* TextTeamOverallKillCount; // 0x420(0x08)
	struct UTextBlock* TextTotalKill; // 0x428(0x08)
	struct UImage* ImageTeamIcon; // 0x430(0x08)
	struct UScaleBox* ScaleboxTeamIcon; // 0x438(0x08)
	struct UWidgetSwitcher* SwitcherTeamIcon; // 0x440(0x08)
	struct UTextBlock* TextTeamName; // 0x448(0x08)
	int32 TotalKillTextIndex; // 0x450(0x04)
	int32 TeamIconImageIndex; // 0x454(0x04)
	float DesiredXStart; // 0x458(0x04)
	float DesiredXEnd; // 0x45c(0x04)
	float DesiredYStart; // 0x460(0x04)
	float DesiredYEnd; // 0x464(0x04)
	char pad_468[0x8]; // 0x468(0x08)
	struct FString LastTeamShortName; // 0x470(0x10)
	char pad_480[0x8]; // 0x480(0x08)
};

// Class TslGameUI.ThrowableItemHintWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UThrowableItemHintWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UImage* IconImage; // 0x430(0x08)
	struct UTextBlock* ItemCountText; // 0x438(0x08)
	struct USizeBox* IconSizeBox; // 0x440(0x08)
	struct U*7fa8406bd3* ShowAnim; // 0x448(0x08)
	char pad_450[0x28]; // 0x450(0x28)

	void PlayShowAnimation(); // Function TslGameUI.ThrowableItemHintWidget.PlayShowAnimation //  // @ game+0xe496608
};

// Class TslGameUI.*66ca516800
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*66ca516800 : UObject {
	struct FMulticastDelegate OnTimeUpdated; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void SetWorldTimeLimitSeconds(); // Function TslGameUI.*66ca516800.SetWorldTimeLimitSeconds //  // @ game+0xe496f7c
	void Reset(); // Function TslGameUI.*66ca516800.Reset //  // @ game+0xe496a5c
};

// Class TslGameUI.TslAirSpeedWidget
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslAirSpeedWidget : UUmgBaseWidget {
	struct UImage* AirSpeedMeterImage; // 0x420(0x08)
	struct UTextBlock* SpeedText; // 0x428(0x08)
	struct FName SpeedParameterName; // 0x430(0x08)
	struct FFloatInterval SpeedParameterValue; // 0x438(0x08)
	float SpeedMeterParamInterpSpeed; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UMaterialInstanceDynamic* AirSpeedMeterImageMI; // 0x448(0x08)
	struct ATslCharacter* ViewTargetCharacter; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)

	void UpdateViewTarget(); // Function TslGameUI.TslAirSpeedWidget.UpdateViewTarget //  // @ game+0xe498db0
};

// Class TslGameUI.TslParachuteAirSpeedWidget
// Size: 0x468 (Inherited: 0x468)  [layout: KHOP]
struct UTslParachuteAirSpeedWidget : UTslAirSpeedWidget {

	void UpdateViewTarget(); // Function TslGameUI.TslParachuteAirSpeedWidget.UpdateViewTarget //  // @ game+0x1112e60
};

// Class TslGameUI.TslAlivePlayerInfoWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslAlivePlayerInfoWidget : UUmgBaseWidget {
	struct ATslGameStateBase* CachedTslGS; // 0x420(0x08)
	struct UWidget* BlurGameInfo; // 0x428(0x08)
	struct U*7fa8406bd3* AnimWarning; // 0x430(0x08)
	struct U*7fa8406bd3* AnimIncreasing; // 0x438(0x08)
	struct U*7fa8406bd3* AnimDecreasing; // 0x440(0x08)
	struct U*7fa8406bd3* AnimDefault; // 0x448(0x08)
	struct UTextBlock* TextAdditionalInfo; // 0x450(0x08)
	struct UTextBlock* TextSurvivorCount; // 0x458(0x08)
	char pad_460[0x18]; // 0x460(0x18)

	void OnAliveCountChanged(); // Function TslGameUI.TslAlivePlayerInfoWidget.OnAliveCountChanged //  // @ game+0xe4897b0
	void OnMatchStarted(); // Function TslGameUI.TslAlivePlayerInfoWidget.OnMatchStarted //  // @ game+0xe48dde4
};

// Class TslGameUI.TslAltitudeWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslAltitudeWidget : UUmgBaseWidget {
	struct FName AltitudeParameterName; // 0x420(0x08)
	struct UImage* AltitudeMeterImage; // 0x428(0x08)
	struct UTextBlock* AltitudeText; // 0x430(0x08)
	struct UMaterialInstanceDynamic* AltitudeMeterImageMI; // 0x438(0x08)
	struct ATslCharacter* ViewTargetCharacter; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)

	void UpdateViewTarget(); // Function TslGameUI.TslAltitudeWidget.UpdateViewTarget //  // @ game+0xe498e30
};

// Class TslGameUI.TslBaseNavigatorbleWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslBaseNavigatorbleWidget : UUmgBaseWidget {
};

// Class TslGameUI.TslBlinkMessageWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslBlinkMessageWidget : UUmgBaseWidget {
	struct FText Message; // 0x420(0x18)
	struct UTextBlock* MessageTextBlock; // 0x438(0x08)
	struct U*7fa8406bd3* AnimBlink; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)

	void OnAnimBlinkFinished(); // Function TslGameUI.TslBlinkMessageWidget.OnAnimBlinkFinished //  // @ game+0xe489918
};

// Class TslGameUI.TslBloodSpotWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslBloodSpotWidget : UUmgBaseWidget {
	struct UImage* BloodSpotImage; // 0x420(0x08)
	struct U*7fa8406bd3* FadeOutAnim; // 0x428(0x08)
	struct FLinearColor RatedBloodColor; // 0x430(0x10)
	char pad_440[0x10]; // 0x440(0x10)
};

// Class TslGameUI.TslBoostGaugeWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslBoostGaugeWidget : UUmgBaseWidget {
	struct UMaterialInstanceDynamic* MID_Gauge0; // 0x420(0x08)
	struct UMaterialInstanceDynamic* MID_Gauge20; // 0x428(0x08)
	struct UMaterialInstanceDynamic* MID_Gauge60; // 0x430(0x08)
	struct UMaterialInstanceDynamic* MID_Gauge90; // 0x438(0x08)
	struct U*7fa8406bd3* AnimWarning; // 0x440(0x08)
	struct UImage* ImageBoost0; // 0x448(0x08)
	struct UImage* ImageBoost20; // 0x450(0x08)
	struct UImage* ImageBoost60; // 0x458(0x08)
	struct UImage* ImageBoost90; // 0x460(0x08)
	char pad_468[0x10]; // 0x468(0x10)
};

// Class TslGameUI.TslReplayEditorStepperWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayEditorStepperWidget : UUmgBaseWidget {
	struct FString AppendString; // 0x420(0x10)

	void SetItem(); // Function TslGameUI.TslReplayEditorStepperWidget.SetItem //  // @ game+0x43bab4
	void GetSelectedItem(); // Function TslGameUI.TslReplayEditorStepperWidget.GetSelectedItem //  // @ game+0x43bab4
	void AddItem(); // Function TslGameUI.TslReplayEditorStepperWidget.AddItem //  // @ game+0x43bab4
};

// Class TslGameUI.TslCameraKeyframeSetting
// Size: 0x5e8 (Inherited: 0x420)  [layout: KHOP]
struct UTslCameraKeyframeSetting : UUmgBaseWidget {
	struct UTslReplayEditorStepperWidget* Stepper_CameraDirection; // 0x420(0x08)
	struct UTslReplayEditorStepperWidget* Stepper_CameraMove; // 0x428(0x08)
	struct UTslReplayEditorStepperWidget* Stepper_CameraType; // 0x430(0x08)
	struct UTslReplayEditorStepperWidget* Stepper_ColorGrading; // 0x438(0x08)
	struct UTslReplayEditorStepperWidget* Stepper_DoFMothod; // 0x440(0x08)
	struct UTslReplayEditorStepperWidget* Stepper_ReplaySpeed; // 0x448(0x08)
	struct UBorder* Border; // 0x450(0x08)
	struct UBorder* Border_DOFSetting; // 0x458(0x08)
	struct UBorder* Border_EffectSetting; // 0x460(0x08)
	struct UButton* Button_Apply; // 0x468(0x08)
	struct UButton* Button_Close; // 0x470(0x08)
	struct UButton* Button_Reset; // 0x478(0x08)
	struct UButton* ButtonDofClose; // 0x480(0x08)
	struct UButton* ButtonDofOpen; // 0x488(0x08)
	struct UButton* ButtonEffectClose; // 0x490(0x08)
	struct UButton* ButtonEffectOpen; // 0x498(0x08)
	struct UCheckBox* CheckBox_AutoExposure; // 0x4a0(0x08)
	struct UCheckBox* CheckBox_DoF_AutoFocus; // 0x4a8(0x08)
	struct UCheckBox* CheckBox_IsSkip; // 0x4b0(0x08)
	struct UComboBoxString* ComboBox_TargetPlayer; // 0x4b8(0x08)
	struct UImage* Image; // 0x4c0(0x08)
	struct USizeBox* SizeBox_BokehMaxSize; // 0x4c8(0x08)
	struct USizeBox* SizeBox_BokehScale; // 0x4d0(0x08)
	struct USizeBox* SizeBox_GaussianFarBlurSize; // 0x4d8(0x08)
	struct USizeBox* SizeBox_GaussianNearBlurSize; // 0x4e0(0x08)
	struct USlider* Slider_Angle; // 0x4e8(0x08)
	struct USlider* Slider_Bloom; // 0x4f0(0x08)
	struct USlider* Slider_ColorGrading_Intensity; // 0x4f8(0x08)
	struct USlider* Slider_Dof_BokehMaxSize; // 0x500(0x08)
	struct USlider* Slider_Dof_BokehScale; // 0x508(0x08)
	struct USlider* Slider_Dof_FarTransitionRegion; // 0x510(0x08)
	struct USlider* Slider_DoF_FocalDistance; // 0x518(0x08)
	struct USlider* Slider_Dof_FocalRegion; // 0x520(0x08)
	struct USlider* Slider_Dof_GaussianFarBlurSize; // 0x528(0x08)
	struct USlider* Slider_Dof_GaussianNearBlurSize; // 0x530(0x08)
	struct USlider* Slider_Dof_NearTransitionRegion; // 0x538(0x08)
	struct USlider* Slider_Fov; // 0x540(0x08)
	struct USlider* Slider_Vignette; // 0x548(0x08)
	struct UTextBlock* TextBlock; // 0x550(0x08)
	struct UEditableTextBox* TextBox_Angle; // 0x558(0x08)
	struct UEditableTextBox* TextBox_Bloom; // 0x560(0x08)
	struct UEditableTextBox* TextBox_ColorGrading_Intensity; // 0x568(0x08)
	struct UEditableTextBox* TextBox_Dof_BokehMaxSize; // 0x570(0x08)
	struct UEditableTextBox* TextBox_Dof_BokehScale; // 0x578(0x08)
	struct UEditableTextBox* TextBox_Dof_FarTransitionRegion; // 0x580(0x08)
	struct UEditableTextBox* TextBox_Dof_FocalDistance; // 0x588(0x08)
	struct UEditableTextBox* TextBox_Dof_FocalRegion; // 0x590(0x08)
	struct UEditableTextBox* TextBox_Dof_GaussianFarBlurSize; // 0x598(0x08)
	struct UEditableTextBox* TextBox_Dof_GaussianNearBlurSize; // 0x5a0(0x08)
	struct UEditableTextBox* TextBox_Dof_NearTransitionRegion; // 0x5a8(0x08)
	struct UEditableTextBox* TextBox_Fov; // 0x5b0(0x08)
	struct UEditableTextBox* TextBox_Vignette; // 0x5b8(0x08)
	struct UTslReplayTimeline* ReplayTimeline; // 0x5c0(0x08)
	struct TArray<struct FString> ReplaySpeedKeyVals; // 0x5c8(0x10)
	int32 CurReplaySpeedValIdx; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct UTslGameInstance* TslGameInstance; // 0x5e0(0x08)

	void HandleTextBoxColorGradingIntensity_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBoxColorGradingIntensity_TextCommitted //  // @ game+0xe488680
	void EffectSettingOpen_False(); // Function TslGameUI.TslCameraKeyframeSetting.EffectSettingOpen_False //  // @ game+0xe47e91c
	void OnClickResetButton(); // Function TslGameUI.TslCameraKeyframeSetting.OnClickResetButton //  // @ game+0xe48a814
	void DofSettingOpen_False(); // Function TslGameUI.TslCameraKeyframeSetting.DofSettingOpen_False //  // @ game+0xe47e864
	void HandleTextBox_Dof_FocalDistance_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_FocalDistance_TextCommitted //  // @ game+0xe488aa0
	void HandleButton_Reset_Hovered(); // Function TslGameUI.TslCameraKeyframeSetting.HandleButton_Reset_Hovered //  // @ game+0xe47f0b8
	void HandleSliderAngle_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderAngle_ValueChange //  // @ game+0xe48098c
	void HandleTextBox_Dof_BokehMaxSize_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_BokehMaxSize_TextCommitted //  // @ game+0xe488788
	void HandleTextBoxAngle_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBoxAngle_TextCommitted //  // @ game+0xe488470
	void DofSettingOpen_True(); // Function TslGameUI.TslCameraKeyframeSetting.DofSettingOpen_True //  // @ game+0xe47e878
	void DofSettingOpen(); // Function TslGameUI.TslCameraKeyframeSetting.DofSettingOpen //  // @ game+0xe47e7e8
	void HandleButton_Close_Clicked(); // Function TslGameUI.TslCameraKeyframeSetting.HandleButton_Close_Clicked //  // @ game+0xe47f0a4
	void EffectSettingOpen_True(); // Function TslGameUI.TslCameraKeyframeSetting.EffectSettingOpen_True //  // @ game+0xe47e930
	void HandleTextBox_Dof_GaussianNearBlurSize_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_GaussianNearBlurSize_TextCommitted //  // @ game+0xe488db8
	void HandleTextBox_Dof_NearTransitionRegion_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_NearTransitionRegion_TextCommitted //  // @ game+0xe488ec0
	void UpdateTargetPlayerList(); // Function TslGameUI.TslCameraKeyframeSetting.UpdateTargetPlayerList //  // @ game+0xe498d88
	void HandleSlider_Dof_FarTransitionRegion_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_Dof_FarTransitionRegion_ValueChange //  // @ game+0xe487188
	void HandleTextBoxBloom_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBoxBloom_TextCommitted //  // @ game+0xe488578
	void EffectSettingOpen(); // Function TslGameUI.TslCameraKeyframeSetting.EffectSettingOpen //  // @ game+0xe47e8a0
	void HandleSlider_Dof_BokehMaxSize_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_Dof_BokehMaxSize_ValueChange //  // @ game+0xe485ea0
	void OnClickApplyButton(); // Function TslGameUI.TslCameraKeyframeSetting.OnClickApplyButton //  // @ game+0xe48a800
	void HandleTextBox_Dof_FocalRegion_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_FocalRegion_TextCommitted //  // @ game+0xe488ba8
	void HandleSliderDofNearTransitionRegion_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderDofNearTransitionRegion_ValueChange //  // @ game+0xe482f5c
	void HandleTextBox_Vignette_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Vignette_TextCommitted //  // @ game+0xe4890d0
	void HandleTextBox_Fov_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Fov_TextCommitted //  // @ game+0xe488fc8
	void HandleSliderVignette_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderVignette_ValueChange //  // @ game+0xe484244
	void HandleSlider_Dof_BokehScale_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_Dof_BokehScale_ValueChange //  // @ game+0xe486814
	void HandleTextBox_Dof_GaussianFarBlurSize_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_GaussianFarBlurSize_TextCommitted //  // @ game+0xe488cb0
	void HandleSliderDofGaussianNearBlurSize_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderDofGaussianNearBlurSize_ValueChange //  // @ game+0xe4825e8
	void HandleSliderColorGradingIntensity_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderColorGradingIntensity_ValueChange //  // @ game+0xe481300
	void HandleButton_Reset_Unhovered(); // Function TslGameUI.TslCameraKeyframeSetting.HandleButton_Reset_Unhovered //  // @ game+0xe47f0cc
	void SetData(); // Function TslGameUI.TslCameraKeyframeSetting.SetData //  // @ game+0xe496dc8
	void HandleTextBox_Dof_FarTransitionRegion_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_FarTransitionRegion_TextCommitted //  // @ game+0xe488998
	void HandleSlider_Dof_FocalRegion_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_Dof_FocalRegion_ValueChange //  // @ game+0xe487afc
	void HandleSliderFov_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderFov_ValueChange //  // @ game+0xe4838d0
	void HandleSlider_Bloom_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_Bloom_ValueChange //  // @ game+0xe484bb8
	void HandleTextBox_Dof_BokehScale_TextCommitted(); // Function TslGameUI.TslCameraKeyframeSetting.HandleTextBox_Dof_BokehScale_TextCommitted //  // @ game+0xe488890
	void HandleSlider_DoF_FocalDistance_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSlider_DoF_FocalDistance_ValueChange //  // @ game+0xe48552c
	void HandleSliderDofGaussianFarBlurSize_ValueChange(); // Function TslGameUI.TslCameraKeyframeSetting.HandleSliderDofGaussianFarBlurSize_ValueChange //  // @ game+0xe481c74
};

// Class TslGameUI.TslCelebrationFlowWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslCelebrationFlowWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimEmerging; // 0x420(0x08)
	struct U*7fa8406bd3* AnimVanishing; // 0x428(0x08)
	struct U*7fa8406bd3* AnimEmergingObserver; // 0x430(0x08)
	struct U*7fa8406bd3* AnimVanishingObserver; // 0x438(0x08)
	struct USizeBox* SizeboxTextArea; // 0x440(0x08)
	struct UTextBlock* Text02; // 0x448(0x08)
	struct UImage* ImageBg; // 0x450(0x08)
	bool bIsBgVisible; // 0x458(0x01)
	bool bUseObserverAnim; // 0x459(0x01)
	char pad_45A[0x2]; // 0x45a(0x02)
	float TextAreaHeightAr; // 0x45c(0x04)
	float Text2PaddingTop; // 0x460(0x04)
	float Text2PaddingTopTr; // 0x464(0x04)
	char pad_468[0x10]; // 0x468(0x10)

	void OnStartCelebrateVanishingAnim(); // Function TslGameUI.TslCelebrationFlowWidget.OnStartCelebrateVanishingAnim //  // @ game+0xe493494
};

// Class TslGameUI.*d9d0704916
// Size: 0x9c0 (Inherited: 0x38)  [layout: KHOP]
struct U*d9d0704916 : USlateWidgetStyleContainerBase {
	struct F*4db90221c0 *560b565c0e; // 0x38(0x988)
};

// Class TslGameUI.TslCheckBoxEntryWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslCheckBoxEntryWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UCheckBox* CheckboxToggle; // 0x430(0x08)
	struct UTextBlock* TextLabel; // 0x438(0x08)
	char pad_440[0x20]; // 0x440(0x20)

	void HandleOnCheckStateChanged(); // Function TslGameUI.TslCheckBoxEntryWidget.HandleOnCheckStateChanged //  // @ game+0xe47f998
};

// Class TslGameUI.TslCompassMarkerWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslCompassMarkerWidget : UUmgBaseWidget {
	struct UImage* CompassMarkerImage; // 0x420(0x08)
	char pad_428[0x28]; // 0x428(0x28)
};

// Class TslGameUI.TslCompassWidget
// Size: 0x548 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslCompassWidget : UUmgBaseWidget {
	struct UImage* CompassImage; // 0x420(0x08)
	struct UImage* Compass_Marker; // 0x428(0x08)
	struct UOverlay* Team; // 0x430(0x08)
	struct UOverlay* TeamPingLayer; // 0x438(0x08)
	struct UTextBlock* DirectionTextBlock; // 0x440(0x08)
	struct UBorder* Compass; // 0x448(0x08)
	struct UMaterialInterface* MI_Compass; // 0x450(0x08)
	struct UClass* CompassMarkerWidgetClass; // 0x458(0x08)
	struct UClass* CompassPingWidgetClass; // 0x460(0x08)
	float DivisionLevel; // 0x468(0x04)
	float Offset; // 0x46c(0x04)
	bool bClockwise; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	float PingShowingTimeSeconds; // 0x474(0x04)
	struct TMap<int32, struct FDirectionTextData> OverrideDirectionTextDatas; // 0x478(0x50)
	struct FLinearColor DefaultDirectionTextColor; // 0x4c8(0x10)
	int32 BearingUnit; // 0x4d8(0x04)
	struct FVector2D MarkerMaskArea; // 0x4dc(0x08)
	float MarkerMaskAreaGapSize; // 0x4e4(0x04)
	struct UMaterialInstanceDynamic* MID_Compass; // 0x4e8(0x08)
	struct UTslCompassMarkerWidget* MyCompassPingWidget; // 0x4f0(0x08)
	struct TArray<struct UTslCompassMarkerWidget*> PingWidgetsOfTeam; // 0x4f8(0x10)
	struct UTslCompassMarkerWidget* MyCompassMarkerWidget; // 0x508(0x08)
	struct TArray<struct UTslCompassMarkerWidget*> TeamMarkerWidgetsOfTeam; // 0x510(0x10)
	struct TArray<struct FTeamMarkerCountInfo> TeamMarkerInfoArr; // 0x520(0x10)
	struct ATslPlayerController* CurrTslPlayerController; // 0x530(0x08)
	struct ATslCharacter* CurrViewTargetCharacter; // 0x538(0x08)
	char pad_540[0x8]; // 0x540(0x08)

	void OnUpdateViewTarget(); // Function TslGameUI.TslCompassWidget.OnUpdateViewTarget //  // @ game+0xfd1774
	void CreateCompassMarkerWidget(); // Function TslGameUI.TslCompassWidget.CreateCompassMarkerWidget //  // @ game+0xe47db20
	void CreateCompassPingWidget(); // Function TslGameUI.TslCompassWidget.CreateCompassPingWidget //  // @ game+0xe47dbb8
	void OnNewTeamPinnedMarker(); // Function TslGameUI.TslCompassWidget.OnNewTeamPinnedMarker //  // @ game+0x11d96f8
	void OnUpdateViewTargetCameraActivate(); // Function TslGameUI.TslCompassWidget.OnUpdateViewTargetCameraActivate //  // @ game+0x128541c
	void OnCompassShadeOptionChanged(); // Function TslGameUI.TslCompassWidget.OnCompassShadeOptionChanged //  // @ game+0xe48ae24
};

// Class TslGameUI.TslCondEditableText
// Size: 0x528 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct UTslCondEditableText : UEditableText {
	char pad_4C0[0x20]; // 0x4c0(0x20)
	int32 AllowedMaxLength; // 0x4e0(0x04)
	bool bOnlyUpperCase; // 0x4e4(0x01)
	bool bOnlyAlphaDigit; // 0x4e5(0x01)
	bool bAllowFallbackText; // 0x4e6(0x01)
	char pad_4E7[0x1]; // 0x4e7(0x01)
	struct FText FallbackText; // 0x4e8(0x18)
	struct FString RegexPattern; // 0x500(0x10)
	char pad_510[0x18]; // 0x510(0x18)

	void HandleTextCommitted(); // Function TslGameUI.TslCondEditableText.HandleTextCommitted //  // @ game+0xe4891d8
};

// Class TslGameUI.TslConsoleGuideWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UTslConsoleGuideWidget : UUmgBaseWidget {
	struct UTslConsoleGuideLineWidget* InventoryGuideLineWidget_Lower; // 0x420(0x08)
	struct UTslConsoleGuideLineWidget* InventoryGuideLineWidget_Upper; // 0x428(0x08)
	struct UTslConsoleGuideLineWidget* InventoryGuideLineWidget_Middle; // 0x430(0x08)
	struct UTslGamepadMultipleKeyIconWidget* TooltipKeyIconWidget; // 0x438(0x08)
	TScriptInterface<struct U*02e1f6a3c2> SlotContainer; // 0x440(0x10)
};

// Class TslGameUI.TslConsoleGuideLineWidget
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTslConsoleGuideLineWidget : UUmgBaseWidget {
	struct UDataTable* DataTable; // 0x420(0x08)
	struct TMap<enum class EGuideKeyType, struct FGamepadMultipleKeyIconInfo> DataMap; // 0x428(0x50)
	struct UTslGamepadMultipleKeyIconWidget* KeyIconWidget1; // 0x478(0x08)
	struct UTslGamepadMultipleKeyIconWidget* KeyIconWidget2; // 0x480(0x08)
	struct UTslGamepadMultipleKeyIconWidget* KeyIconWidget3; // 0x488(0x08)
	struct TArray<struct UTslGamepadMultipleKeyIconWidget*> KeyIconWidgetArray; // 0x490(0x10)
	struct TArray<enum class EGuideKeyType> LastKeyTypeArray; // 0x4a0(0x10)
};

// Class TslGameUI.TslConsolePlatformImageWidget
// Size: 0x458 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UTslConsolePlatformImageWidget : UTslUserPlatformImageWidget {
	enum class EOutGamePlatformProvider TargetPlatform; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
};

// Class TslGameUI.GameProgressTimeStrategy
// Size: 0x78 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UGameProgressTimeStrategy : U*d51199f832 {
	char pad_58[0x20]; // 0x58(0x20)

	void OnUpdateGameProgressTimeText(); // Function TslGameUI.GameProgressTimeStrategy.OnUpdateGameProgressTimeText //  // @ game+0x620cf0
	void OnMatchStarted(); // Function TslGameUI.GameProgressTimeStrategy.OnMatchStarted //  // @ game+0x11fa328
};

// Class TslGameUI.TslAlivePlayerInfoStrategy
// Size: 0x68 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UTslAlivePlayerInfoStrategy : U*d51199f832 {
	char pad_58[0x10]; // 0x58(0x10)

	void *65ef43d1bf(); // Function TslGameUI.TslAlivePlayerInfoStrategy.*65ef43d1bf //  // @ game+0xe489738
	void OnMatchStarted(); // Function TslGameUI.TslAlivePlayerInfoStrategy.OnMatchStarted //  // @ game+0xfda274
};

// Class TslGameUI.TslAliveTeamInfoStrategy
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct UTslAliveTeamInfoStrategy : U*d51199f832 {

	void OnAliveTeamsChanged(); // Function TslGameUI.TslAliveTeamInfoStrategy.OnAliveTeamsChanged //  // @ game+0xe489828
};

// Class TslGameUI.TslKillCountInfoStrategy
// Size: 0x68 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UTslKillCountInfoStrategy : U*d51199f832 {
	char pad_58[0x10]; // 0x58(0x10)

	void OnPlayerStateRep(); // Function TslGameUI.TslKillCountInfoStrategy.OnPlayerStateRep //  // @ game+0xe48f778
	void *a43682f756(); // Function TslGameUI.TslKillCountInfoStrategy.*a43682f756 //  // @ game+0xe489334
	void OnKillCountChanged(); // Function TslGameUI.TslKillCountInfoStrategy.OnKillCountChanged //  // @ game+0xe48d740
};

// Class TslGameUI.*e59fa275dc
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*e59fa275dc : UObject {
	TScriptInterface<struct U*d8ec02d9cc> *a312cd67c1; // 0x30(0x10)
	struct UCraftItemToolTipWidget* *331dc86343; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)

	void OnCraftableItemIconAsyncLoadFinish(); // Function TslGameUI.*e59fa275dc.OnCraftableItemIconAsyncLoadFinish //  // @ game+0xe48aff0
	void OnCraftFinished(); // Function TslGameUI.*e59fa275dc.OnCraftFinished //  // @ game+0xe48af28
};

// Class TslGameUI.*31f25dd125
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct U*31f25dd125 : U*e59fa275dc {
};

// Class TslGameUI.TslCustomMatchWaterMarkWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: KHOP]
struct UTslCustomMatchWaterMarkWidget : UUmgBaseWidget {
	struct UWidget* WidgetWaterMark; // 0x420(0x08)
	struct TMap<enum class EGameModeType, struct FTslCustomMatchWaterMarkPosition> WaterMarkPositionMap; // 0x428(0x50)
	struct TMap<enum class EGameModeType, struct FTslCustomMatchWaterMarkPosition> WaterMarkObserverPositionMap; // 0x478(0x50)
};

// Class TslGameUI.TslEmoteWheelSubWidget
// Size: 0x508 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UTslEmoteWheelSubWidget : UTslWheelBaseSubWidget {
	struct FLinearColor EnableImageColor; // 0x460(0x10)
	struct FLinearColor DisableImageColor; // 0x470(0x10)
	float OriginalOpacity; // 0x480(0x04)
	float NativeActionBrushOpacity; // 0x484(0x04)
	struct UImage* ImageWarning; // 0x488(0x08)
	char pad_490[0x78]; // 0x490(0x78)
};

// Class TslGameUI.TslEmoteWheelWidget
// Size: 0x678 (Inherited: 0x580)  [layout: LECH - offset chi la uoc luong]
struct UTslEmoteWheelWidget : UTslWheelBaseWidget {
	char pad_580[0x8]; // 0x580(0x08)
	struct TArray<struct FEmoteDBDataRow> EmoteDataRows; // 0x588(0x10)
	struct TArray<struct UTslActionWheelNumberSubWidget*> NumberSubWidArray; // 0x598(0x10)
	struct TArray<struct FName> MovementAxises; // 0x5a8(0x10)
	struct TArray<struct FTslAxisInputCallbackConfig> GamepadMovementAxises; // 0x5b8(0x10)
	struct TArray<struct FName> TurnAxises; // 0x5c8(0x10)
	float InputControlInterval; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct UWidgetSwitcher* SwitcherIngame; // 0x5e0(0x08)
	struct UWidgetSwitcher* SwitcherOutgame; // 0x5e8(0x08)
	struct UHorizontalBox* ListActionsIndex; // 0x5f0(0x08)
	struct UWidgetSwitcher* SwitcherBackground; // 0x5f8(0x08)
	struct UWidgetSwitcher* SwitcherMessage; // 0x600(0x08)
	struct UHorizontalBox* ListBoxPaging; // 0x608(0x08)
	struct UTslGameInstance* TslGI; // 0x610(0x08)
	char pad_618[0x60]; // 0x618(0x60)

	void OnSelect2(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect2 //  // @ game+0xe491c50
	void OnSelect8(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect8 //  // @ game+0xe491ce0
	void OnSelect5(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect5 //  // @ game+0xe491c98
	void OnSelect3(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect3 //  // @ game+0xe491c68
	void OnSelect6(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect6 //  // @ game+0xe491cb0
	void OnSelect7(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect7 //  // @ game+0xe491cc8
	void OnSelect1(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect1 //  // @ game+0xe491c3c
	void OnSelect4(); // Function TslGameUI.TslEmoteWheelWidget.OnSelect4 //  // @ game+0xe491c80
};

// Class TslGameUI.TslEquipmentBaseWidget
// Size: 0x520 (Inherited: 0x420)  [layout: KHOP]
struct UTslEquipmentBaseWidget : UUmgBaseWidget {
	char pad_420[0x58]; // 0x420(0x58)
	float MaxLayoutCount; // 0x478(0x04)
	char pad_47C[0x94]; // 0x47c(0x94)
	struct UUserWidget* FocusWidget; // 0x510(0x08)
	struct UTslItemDragDropOperation* TslItemDragDropOperation; // 0x518(0x08)

	void SaveFocusSlotId(); // Function TslGameUI.TslEquipmentBaseWidget.SaveFocusSlotId //  // @ game+0x11eb548
	void OnRefreshFocus_Timer(); // Function TslGameUI.TslEquipmentBaseWidget.OnRefreshFocus_Timer //  // @ game+0xe48fa04
	void OnEnterSlotEvent(); // Function TslGameUI.TslEquipmentBaseWidget.OnEnterSlotEvent //  // @ game+0xe48c444
	void UpdateSpecialSlotVisibility(); // Function TslGameUI.TslEquipmentBaseWidget.UpdateSpecialSlotVisibility //  // @ game+0xe498d74
	void OnRefreshFocus(); // Function TslGameUI.TslEquipmentBaseWidget.OnRefreshFocus //  // @ game+0xe48f9f0
	void OnLeaveSlotEvent(); // Function TslGameUI.TslEquipmentBaseWidget.OnLeaveSlotEvent //  // @ game+0xe48d808
	void OnDoSlotActionEvent(); // Function TslGameUI.TslEquipmentBaseWidget.OnDoSlotActionEvent //  // @ game+0xe48c118
};

// Class TslGameUI.TslEquipmentWidget
// Size: 0x538 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct UTslEquipmentWidget : UTslEquipmentBaseWidget {
	bool bAlwaysHideCharacterCapture; // 0x520(0x01)
	char pad_521[0x17]; // 0x521(0x17)

	void OnReleasedCaptureCharacterRotateOn(); // Function TslGameUI.TslEquipmentWidget.OnReleasedCaptureCharacterRotateOn //  // @ game+0xe48fa74
	void OnPressedCaptureCharacterRotateOn(); // Function TslGameUI.TslEquipmentWidget.OnPressedCaptureCharacterRotateOn //  // @ game+0xe48f8d0
	void OnLookup(); // Function TslGameUI.TslEquipmentWidget.OnLookup //  // @ game+0xdac6c7c
	void OnTurn(); // Function TslGameUI.TslEquipmentWidget.OnTurn //  // @ game+0xe494314
};

// Class TslGameUI.TslEquipmentWidget_Gamepad
// Size: 0x550 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct UTslEquipmentWidget_Gamepad : UTslEquipmentBaseWidget {
	struct FUmgWidgetBinder_VerticalBox ItemVerticalBox_Binder; // 0x520(0x28)
	char pad_548[0x8]; // 0x548(0x08)
};

// Class TslGameUI.TslBluezoneBlockerWidget
// Size: 0x470 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslBluezoneBlockerWidget : UTslEventDrivenBaseWidget {
	struct U*7fa8406bd3* AnimAppear; // 0x440(0x08)
	struct U*7fa8406bd3* AnimDisappear; // 0x448(0x08)
	struct UImage* ImageIcon; // 0x450(0x08)
	struct UMaterial* ActiveIconMaterial; // 0x458(0x08)
	struct UMaterial* DeactiveIconMaterial; // 0x460(0x08)
	enum class EBlueBlockerStateUIType BlueBlockerStateType; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
};

// Class TslGameUI.TslBoostGaugeOverhaulWidget
// Size: 0x468 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslBoostGaugeOverhaulWidget : UTslEventDrivenBaseWidget {
	struct UImage* BoostGaugeImage; // 0x440(0x08)
	struct USizeBox* BoostGaugeSizeBox; // 0x448(0x08)
	char pad_450[0x18]; // 0x450(0x18)

	void UpdateGauge(); // Function TslGameUI.TslBoostGaugeOverhaulWidget.UpdateGauge //  // @ game+0xe498b5c
};

// Class TslGameUI.TslBreathBarBaseWidget
// Size: 0x478 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslBreathBarBaseWidget : UTslEventDrivenBaseWidget {
	struct UImage* BreathGaugeBG; // 0x440(0x08)
	enum class EBreathType BreathType; // 0x448(0x01)
	char pad_449[0x2f]; // 0x449(0x2f)

	void OnUpdateBreathGauge(); // Function TslGameUI.TslBreathBarBaseWidget.OnUpdateBreathGauge //  // @ game+0x5fb110
};

// Class TslGameUI.TslBreathBarADSWidget
// Size: 0x480 (Inherited: 0x478)  [layout: KHOP]
struct UTslBreathBarADSWidget : UTslBreathBarBaseWidget {
	struct U*7fa8406bd3* OutOfBreath; // 0x478(0x08)
};

// Class TslGameUI.TslBreathBarWidget
// Size: 0x4c0 (Inherited: 0x478)  [layout: KHOP]
struct UTslBreathBarWidget : UTslBreathBarBaseWidget {
	struct U*7fa8406bd3* Breathing; // 0x478(0x08)
	struct U*7fa8406bd3* Drowning; // 0x480(0x08)
	struct FLinearColor BreathImgColor_Less; // 0x488(0x10)
	struct FLinearColor BreathImgColor_Less; // 0x498(0x10)
	struct FLinearColor BreathImgColor_Less; // 0x4a8(0x10)
	struct UTslBreathBarADSWidget* ADSWidget; // 0x4b8(0x08)
};

// Class TslGameUI.TslBuffIconWidget
// Size: 0x4b8 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslBuffIconWidget : UTslEventDrivenBaseWidget {
	struct UMaterialInterface* BuffIconBrush; // 0x440(0x08)
	struct UMaterialInstanceDynamic* BuffIconDynamic; // 0x448(0x08)
	struct UImage* BuffIcon; // 0x450(0x08)
	float ThresholdForActive; // 0x458(0x04)
	float ThresholdForActiveLevel2; // 0x45c(0x04)
	struct TMap<float, float> SpeedPerBoostLevel; // 0x460(0x50)
	char pad_4B0[0x8]; // 0x4b0(0x08)

	void UpdateBuffIcon(); // Function TslGameUI.TslBuffIconWidget.UpdateBuffIcon //  // @ game+0xe498744
};

// Class TslGameUI.TslCharacterStateCanvasWidget
// Size: 0x468 (Inherited: 0x440)  [layout: KHOP]
struct UTslCharacterStateCanvasWidget : UTslEventDrivenBaseWidget {
	struct UTslHpAndBoostGaugeHudWidget* HpAndBoostGaugeHudWidget; // 0x440(0x08)
	struct UCharacterStanceBaseWidget* CharacterStanceWidget; // 0x448(0x08)
	struct URetainerBox* CharacterStanceRetainerBoxWidget; // 0x450(0x08)
	struct UTslInstantVolumeReducerIconWidget* VolumeReducerIconWidget; // 0x458(0x08)
	struct UTslVoiceChatMicWidget* VoiceChatMicWidget; // 0x460(0x08)
};

// Class TslGameUI.TslEquipableItemIconBaseWidget
// Size: 0x4a0 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslEquipableItemIconBaseWidget : UTslEventDrivenBaseWidget {
	enum class EEquipSlotID EquipSlotID; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UMaterial* EquipableIconMaterial; // 0x448(0x08)
	float MinAlpha; // 0x450(0x04)
	float MaxAlpha; // 0x454(0x04)
	struct UImage* EquipableItemIconImage; // 0x458(0x08)
	struct U*6c7f0ccc53* CacheEquipableItem; // 0x460(0x08)
	char pad_468[0x18]; // 0x468(0x18)
	struct AInventoryFacade* InventoryFacade; // 0x480(0x08)
	struct AEquipment* Equipment; // 0x488(0x08)
	char pad_490[0x10]; // 0x490(0x10)

	void OnUpdateEquipment(); // Function TslGameUI.TslEquipableItemIconBaseWidget.OnUpdateEquipment //  // @ game+0xf6c958
	void OnUpdateIconGauge(); // Function TslGameUI.TslEquipableItemIconBaseWidget.OnUpdateIconGauge //  // @ game+0xf6c80c
	void OnUpdateIcon(); // Function TslGameUI.TslEquipableItemIconBaseWidget.OnUpdateIcon //  // @ game+0xf6c54c
};

// Class TslGameUI.TslBackpackIconWidget
// Size: 0x4b0 (Inherited: 0x4a0)  [layout: KHOP]
struct UTslBackpackIconWidget : UTslEquipableItemIconBaseWidget {
	struct AInventory* Inventory; // 0x4a0(0x08)
	struct U*7fa8406bd3* CapacityFullWarning; // 0x4a8(0x08)

	void OnNoBagSpaceEvent(); // Function TslGameUI.TslBackpackIconWidget.OnNoBagSpaceEvent //  // @ game+0xe48ed4c
	void OnUpdateSpaceGague(); // Function TslGameUI.TslBackpackIconWidget.OnUpdateSpaceGague //  // @ game+0xe49514c
};

// Class TslGameUI.TslEquipableItemIconWidget
// Size: 0x4a0 (Inherited: 0x4a0)  [layout: KHOP]
struct UTslEquipableItemIconWidget : UTslEquipableItemIconBaseWidget {
};

// Class TslGameUI.TslHpAndBoostGaugeHudWidget
// Size: 0x468 (Inherited: 0x440)  [layout: KHOP]
struct UTslHpAndBoostGaugeHudWidget : UTslEventDrivenBaseWidget {
	struct FSaveDataForLifegauge SaveLifegaugeData; // 0x440(0x18)
	struct UTslBoostGaugeOverhaulWidget* BoostGaugeWidget; // 0x458(0x08)
	struct UTslHpGaugeWidget* HpGaugeWidget; // 0x460(0x08)

	void OnReset(); // Function TslGameUI.TslHpAndBoostGaugeHudWidget.OnReset //  // @ game+0xe1d30a0
};

// Class TslGameUI.TslHpGaugeWidget
// Size: 0x540 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslHpGaugeWidget : UTslEventDrivenBaseWidget {
	struct UTslHealthGaugeData* LifeGaugeColorData; // 0x440(0x08)
	struct UImage* HpBar; // 0x448(0x08)
	struct UProgressBar* BluezoneBlockerSuit_ProgressBar; // 0x450(0x08)
	struct UProgressBar* BluezoneBlocker_ProgressBar; // 0x458(0x08)
	struct UOverlay* EffectLayerBinder; // 0x460(0x08)
	struct UBorder* InnerBg; // 0x468(0x08)
	struct UWidgetSwitcher* HpBgSwitcher; // 0x470(0x08)
	struct UHorizontalBox* HpTextHorizontalBox; // 0x478(0x08)
	struct UTextBlock* HpText; // 0x480(0x08)
	struct UTextBlock* MaxHpText; // 0x488(0x08)
	struct U*7fa8406bd3* Warning; // 0x490(0x08)
	bool bUseEffect; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UClass* DamageEffectClass; // 0x4a0(0x08)
	struct UClass* HealEffectClass; // 0x4a8(0x08)
	struct UClass* HealAmountEffectClass; // 0x4b0(0x08)
	int32 DamageEffectMax; // 0x4b8(0x04)
	int32 HealEffectMax; // 0x4bc(0x04)
	bool bHideHpBg; // 0x4c0(0x01)
	bool bUseDynamicMaterialHpColor; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	struct FLinearColor BluezoneBlockerActivatedColor; // 0x4c4(0x10)
	struct FLinearColor BluezoneBlockerDeactivatedColor; // 0x4d4(0x10)
	char pad_4E4[0x1c]; // 0x4e4(0x1c)
	struct ULifeGaugeEffectBaseWidget* HealAmountEffect; // 0x500(0x08)
	struct TArray<struct ULifeGaugeEffectBaseWidget*> DamageEffects; // 0x508(0x10)
	struct TArray<struct ULifeGaugeEffectBaseWidget*> HealEffects; // 0x518(0x10)
	char pad_528[0x18]; // 0x528(0x18)

	void OnDestoryHealEffect(); // Function TslGameUI.TslHpGaugeWidget.OnDestoryHealEffect //  // @ game+0xad97a8
	void OnDestoryDamageEffect(); // Function TslGameUI.TslHpGaugeWidget.OnDestoryDamageEffect //  // @ game+0xad92dc
	void OnCharacterDeath(); // Function TslGameUI.TslHpGaugeWidget.OnCharacterDeath //  // @ game+0xad986c
	void OnUsingCastObject(); // Function TslGameUI.TslHpGaugeWidget.OnUsingCastObject //  // @ game+0xad9354
	void OnUpdateHP(); // Function TslGameUI.TslHpGaugeWidget.OnUpdateHP //  // @ game+0xad9a30
};

// Class TslGameUI.TslInstantVolumeReducerIconWidget
// Size: 0x450 (Inherited: 0x440)  [layout: KHOP]
struct UTslInstantVolumeReducerIconWidget : UTslEventDrivenBaseWidget {
	struct UImage* VolumeDuckingImage; // 0x440(0x08)
	struct UInvalidationBox* VolumeDuckingInvalidationBox; // 0x448(0x08)

	void UpdateDuckingState(); // Function TslGameUI.TslInstantVolumeReducerIconWidget.UpdateDuckingState //  // @ game+0xe498ae0
};

// Class TslGameUI.TslVoiceChatMicWidget
// Size: 0x448 (Inherited: 0x440)  [layout: KHOP]
struct UTslVoiceChatMicWidget : UTslEventDrivenBaseWidget {
	struct UImage* MicIcon; // 0x440(0x08)

	void OnMuteVoiceFromMe(); // Function TslGameUI.TslVoiceChatMicWidget.OnMuteVoiceFromMe //  // @ game+0xe48ec40
	void OnSetCurrVoiceInputMode(); // Function TslGameUI.TslVoiceChatMicWidget.OnSetCurrVoiceInputMode //  // @ game+0xe491d20
};

// Class TslGameUI.TslWeaponHudCanvasWidget
// Size: 0x470 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponHudCanvasWidget : UTslEventDrivenBaseWidget {
	struct UTslWeaponHudWidget* WeaponHudWidget; // 0x440(0x08)
	struct UWidgetSwitcher* WeaponIconSwitcherWidget; // 0x448(0x08)
	struct UCanvasPanel* CanvasPanel; // 0x450(0x08)
	float PositionYWithBoost; // 0x458(0x04)
	float PositionYWithoutBoost; // 0x45c(0x04)
	float OffsetYWithoutBlueBlocker; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)

	void OnReset(); // Function TslGameUI.TslWeaponHudCanvasWidget.OnReset //  // @ game+0xe1d30a0
};

// Class TslGameUI.TslWeaponHudWidget
// Size: 0x480 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponHudWidget : UTslEventDrivenBaseWidget {
	struct UBackgroundBlur* WeaponHudBackgroundBlur; // 0x440(0x08)
	struct UBorder* WeaponHudBorder; // 0x448(0x08)
	struct USizeBox* BreathIconSizeBox; // 0x450(0x08)
	struct UWidget* PanelWeaponInfo; // 0x458(0x08)
	struct UImage* ThrowableItemIconImage; // 0x460(0x08)
	float CacheStrength; // 0x468(0x04)
	float CacheAlpha; // 0x46c(0x04)
	char pad_470[0x10]; // 0x470(0x10)

	void OnWeaponChangedForThrowableIcon(); // Function TslGameUI.TslWeaponHudWidget.OnWeaponChangedForThrowableIcon //  // @ game+0x10c106c
	void OnUpdateObjectCarryState(); // Function TslGameUI.TslWeaponHudWidget.OnUpdateObjectCarryState //  // @ game+0xe4950d4
	void OnUpdateThrowableIcon(); // Function TslGameUI.TslWeaponHudWidget.OnUpdateThrowableIcon //  // @ game+0x136f2fc
};

// Class TslGameUI.WeaponSlotBaseWidget
// Size: 0x510 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UWeaponSlotBaseWidget : UUmgBaseWidget {
	char bListInSlot : 1; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32 WeaponIndex; // 0x424(0x04)
	enum class ENoReloadGuideType ListSlotNoReloadGuideType; // 0x428(0x01)
	char bUseWeaponIcon : 1; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct UImage* ImageWeaponIcon; // 0x430(0x08)
	struct USizeBox* SizeboxWeaponIcon; // 0x438(0x08)
	float WeaponIconImageSizeBoxHeight; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct FName WeaponIconTextureParmName; // 0x448(0x08)
	struct FName WeaponIconColorParmName; // 0x450(0x08)
	struct FLinearColor WeaponColor_Armed; // 0x458(0x10)
	struct FLinearColor WeaponColor_Normal; // 0x468(0x10)
	struct FLinearColor WeaponColor_Unarmed; // 0x478(0x10)
	struct FColorBlindColorSet WeaponColorSet_NoReload; // 0x488(0x10)
	struct URetainerBox* RetainerboxWeapon; // 0x498(0x08)
	struct UBorder* BorderWeaponIcon; // 0x4a0(0x08)
	float SlotBackgroundAlpha_Armed; // 0x4a8(0x04)
	float SlotBackgroundAlpha_Unarmed; // 0x4ac(0x04)
	float SlotBackgroundAlpha_Normal; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct U*7fa8406bd3* AnimFadeInWeaponSlot; // 0x4b8(0x08)
	struct U*7fa8406bd3* AnimFadeOutWeaponSlot; // 0x4c0(0x08)
	struct U*7fa8406bd3* AnimFadeInUnarmedWeaponSlot; // 0x4c8(0x08)
	struct U*7fa8406bd3* AnimFadeOutUnarmedWeaponSlot; // 0x4d0(0x08)
	struct UTslUniversalInputVisibilitySwitcher* WidgetInputVisibilitySwitcher; // 0x4d8(0x08)
	struct UTextBlock* TextSlotNumber; // 0x4e0(0x08)
	char pad_4E8[0x28]; // 0x4e8(0x28)

	void OnUserSettingApplied(); // Function TslGameUI.WeaponSlotBaseWidget.OnUserSettingApplied //  // @ game+0xe4952e8
};

// Class TslGameUI.TslWeaponSlotBaseWidget
// Size: 0x490 (Inherited: 0x440)  [layout: KHOP]
struct UTslWeaponSlotBaseWidget : UTslEventDrivenBaseWidget {
	struct FLinearColor WeaponColor_Armed; // 0x440(0x10)
	struct FLinearColor WeaponColor_Normal; // 0x450(0x10)
	struct FLinearColor WeaponColor_Unarmed; // 0x460(0x10)
	float AnimationSpeed; // 0x470(0x04)
	char pad_474[0x14]; // 0x474(0x14)
	struct AEquipment* CacheEquipment; // 0x488(0x08)

	void OnUpdateWeapon(); // Function TslGameUI.TslWeaponSlotBaseWidget.OnUpdateWeapon //  // @ game+0xbef700
	void OnChangedWeapon(); // Function TslGameUI.TslWeaponSlotBaseWidget.OnChangedWeapon //  // @ game+0xbf32f4
};

// Class TslGameUI.TslWeaponDoubleBarrelWidget
// Size: 0x4b0 (Inherited: 0x490)  [layout: KHOP]
struct UTslWeaponDoubleBarrelWidget : UTslWeaponSlotBaseWidget {
	struct UImage* DoubleBarrelLeft; // 0x490(0x08)
	struct UImage* DoubleBarrelRight; // 0x498(0x08)
	struct UTexture2D* BarrelFullTexture; // 0x4a0(0x08)
	struct UTexture2D* BarrelEmptyTexture; // 0x4a8(0x08)
};

// Class TslGameUI.TslWeaponFiremodeWidget
// Size: 0x558 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponFiremodeWidget : UTslWeaponSlotBaseWidget {
	struct UImage* ImageCurrentFiremode; // 0x490(0x08)
	struct UImage* ImageNextFiremode; // 0x498(0x08)
	struct U*7fa8406bd3* FiremodeIconChange; // 0x4a0(0x08)
	float IconHeight; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FFiremodeImage FiremodeDefaultIcons; // 0x4b0(0x50)
	struct TMap<struct FName, struct FFiremodeImage> FiremodeIcons; // 0x500(0x50)
	char pad_550[0x8]; // 0x550(0x08)
};

// Class TslGameUI.TslWeaponLoadedAmmoWidget
// Size: 0x4d0 (Inherited: 0x490)  [layout: KHOP]
struct UTslWeaponLoadedAmmoWidget : UTslWeaponSlotBaseWidget {
	struct UTextBlock* CurrentWeaponLoadedAmmoText; // 0x490(0x08)
	struct UTextBlock* NextWeaponLoadedAmmoText; // 0x498(0x08)
	struct U*7fa8406bd3* LoadedAmmoDecreasing; // 0x4a0(0x08)
	struct U*7fa8406bd3* LoadedAmmoIncreasing; // 0x4a8(0x08)
	struct FColorBlindColorSet WeaponColorSet_NoReload; // 0x4b0(0x10)
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct ATslWeapon_Gun* SaveGunWeapon; // 0x4c8(0x08)

	void OnUpdatedInventory(); // Function TslGameUI.TslWeaponLoadedAmmoWidget.OnUpdatedInventory //  // @ game+0xe495210
	void OnGameUserSettingApplied(); // Function TslGameUI.TslWeaponLoadedAmmoWidget.OnGameUserSettingApplied //  // @ game+0xe48caa0
	void OnRiderReplicated(); // Function TslGameUI.TslWeaponLoadedAmmoWidget.OnRiderReplicated //  // @ game+0x120e8c0
};

// Class TslGameUI.TslWeaponReserveAmmoWidget
// Size: 0x4d8 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponReserveAmmoWidget : UTslWeaponSlotBaseWidget {
	struct UTextBlock* CurrentWeaponReserveAmmoText; // 0x490(0x08)
	struct UTextBlock* NextWeaponReserveAmmoText; // 0x498(0x08)
	struct UWidgetSwitcher* SwitcherNext; // 0x4a0(0x08)
	struct UWidgetSwitcher* SwitcherCurrent; // 0x4a8(0x08)
	struct U*7fa8406bd3* ReserveAmmoDecreasing; // 0x4b0(0x08)
	struct U*7fa8406bd3* ReserveAmmoIncreasing; // 0x4b8(0x08)
	struct FColorBlindColorSet WeaponColorSet_NoReload; // 0x4c0(0x10)
	char pad_4D0[0x8]; // 0x4d0(0x08)
};

// Class TslGameUI.TslWeaponTraumaBagWidget
// Size: 0x538 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponTraumaBagWidget : UTslWeaponSlotBaseWidget {
	struct UBorder* BorderHealmodeBind; // 0x490(0x08)
	struct UWidgetSwitcher* SwitcherHealmodeBind; // 0x498(0x08)
	struct UTextBlock* TextHealItemCountBind; // 0x4a0(0x08)
	struct UImage* ImageItemSimpleIcon; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimIconChangeBind; // 0x4b0(0x08)
	struct FHealmodeImage HealmodeDefaultIcons; // 0x4b8(0x50)
	struct FColorBlindColorSet WeaponColorSet_NoReload; // 0x508(0x10)
	char pad_518[0x20]; // 0x518(0x20)

	void OnUpdateInventoryItem(); // Function TslGameUI.TslWeaponTraumaBagWidget.OnUpdateInventoryItem //  // @ game+0xe494e84
};

// Class TslGameUI.TslFakeButton
// Size: 0x7c0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UTslFakeButton : UButton {
	struct FButtonStyle AlternativeStyle; // 0x480(0x2a8)
	char pad_728[0x98]; // 0x728(0x98)
};

// Class TslGameUI.TslFlareGunEntryWidget
// Size: 0x378 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslFlareGunEntryWidget : UTslUserWidget {
	struct UWidget* SizeBoxRoot; // 0x330(0x08)
	struct UBorder* Border; // 0x338(0x08)
	struct USizeBox* SizeBoxIcon; // 0x340(0x08)
	struct UImage* ImageIcon; // 0x348(0x08)
	struct UTextBlock* TextNumber; // 0x350(0x08)
	struct U*7fa8406bd3* AnimSuccess; // 0x358(0x08)
	struct UTexture2D* IconTexture; // 0x360(0x08)
	struct FTslFlareGunEntryUIData CachedData; // 0x368(0x08)
	char pad_370[0x8]; // 0x370(0x08)
};

// Class TslGameUI.TslFlareGunWidget
// Size: 0x378 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslFlareGunWidget : UTslUserWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UWidget* BorderTitle; // 0x338(0x08)
	struct UWidget* ImageEntryGroupBg; // 0x340(0x08)
	struct UWidget* ImageLine; // 0x348(0x08)
	struct UBorder* BorderFlaregun; // 0x350(0x08)
	struct UTslFlareGunEntryWidget* EntryRevival; // 0x358(0x08)
	struct UTslFlareGunEntryWidget* EntryCarePackage; // 0x360(0x08)
	struct UTslFlareGunEntryWidget* EntryVehicle; // 0x368(0x08)
	enum class ETslFlareGunWidgetDisplayType DisplayType; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
};

// Class TslGameUI.TslFlowingContentWidget
// Size: 0x3e0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslFlowingContentWidget : UTslUserWidget {
	struct UHorizontalBox* ClippingBox; // 0x330(0x08)
	struct UHorizontalBox* FlowingContentBox; // 0x338(0x08)
	struct U*7fa8406bd3* TextDisappearAnimation; // 0x340(0x08)
	struct U*7fa8406bd3* TextAppearAnimation; // 0x348(0x08)
	bool bEnableFlow; // 0x350(0x01)
	bool bUseAutoSize; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float MaxClippingWidth; // 0x354(0x04)
	struct FVector2D ClippingSize; // 0x358(0x08)
	struct UClass* ModeFuncClass; // 0x360(0x08)
	float FlowSpeed; // 0x368(0x04)
	float WaitTime; // 0x36c(0x04)
	float WaitTime2; // 0x370(0x04)
	int32 PlayCount; // 0x374(0x04)
	float EaseExp; // 0x378(0x04)
	enum class EHorizontalAlignment TextHorizontalAlignment; // 0x37c(0x01)
	enum class EVerticalAlignment TextVerticalAlignment; // 0x37d(0x01)
	bool bPreventCultureAlignment; // 0x37e(0x01)
	bool bPreventCultureFlow; // 0x37f(0x01)
	struct FSlateColor Inner_ColorAndOpacity; // 0x380(0x28)
	struct FVector2D Inner_ShadowOffset; // 0x3a8(0x08)
	struct FLinearColor Inner_ShadowColorAndOpacity; // 0x3b0(0x10)
	float Inner_MinDesiredWidth; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct UTslFlowTextModeFuncImpl* ModeFuncImpl; // 0x3c8(0x08)
	char pad_3D0[0x10]; // 0x3d0(0x10)
};

// Class TslGameUI.TslFlowingTextWidget
// Size: 0x468 (Inherited: 0x3e0)  [layout: KHOP]
struct UTslFlowingTextWidget : UTslFlowingContentWidget {
	struct FSlateFontInfo Inner_Font; // 0x3e0(0x68)
	struct FText Inner_Text; // 0x448(0x18)
	struct UTextBlock* FlowingTextBox; // 0x460(0x08)
};

// Class TslGameUI.TslFlowingPlayerDataWidget
// Size: 0x4a0 (Inherited: 0x3e0)  [layout: KHOP]
struct UTslFlowingPlayerDataWidget : UTslFlowingContentWidget {
	struct FSlateFontInfo Inner_Font; // 0x3e0(0x68)
	struct UClass* ChildPlayerWidget; // 0x448(0x08)
	struct TMap<struct FString, struct UTslFlowingUserIDWidget*> WidgetMap; // 0x450(0x50)
};

// Class TslGameUI.TslFlowingUserIDWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UTslFlowingUserIDWidget : UTslUserWidget {
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x330(0x08)
	struct UTextBlock* Name_TextBlock; // 0x338(0x08)
};

// Class TslGameUI.TslFlowTextModeFuncImpl
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslFlowTextModeFuncImpl : UObject {
	struct UTslFlowingContentWidget* *c9b3c9982e; // 0x30(0x08)
	struct UHorizontalBoxSlot* *34e691a634; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class TslGameUI.TslFlowTextMode_ToLeft
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct UTslFlowTextMode_ToLeft : UTslFlowTextModeFuncImpl {
};

// Class TslGameUI.TslFlowTextMode_ToLeftAndBlink
// Size: 0x60 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UTslFlowTextMode_ToLeftAndBlink : UTslFlowTextModeFuncImpl {
	char pad_58[0x8]; // 0x58(0x08)
};

// Class TslGameUI.TslFlowTextMode_ToRight
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct UTslFlowTextMode_ToRight : UTslFlowTextModeFuncImpl {
};

// Class TslGameUI.TslFlowTextMode_PingPong
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct UTslFlowTextMode_PingPong : UTslFlowTextModeFuncImpl {
};

// Class TslGameUI.TslFlyingVehicleCockpitWidget
// Size: 0x278 (Inherited: 0x260)  [layout: KHOP]
struct UTslFlyingVehicleCockpitWidget : UTslFlyingVehicleCockpitWidgetBase {
	struct UTslAltitudeWidget* AltitudeGaugeWidget; // 0x260(0x08)
	struct UTslAirSpeedWidget* AirSpeedWidget; // 0x268(0x08)
	struct UVehicleThrottleBaseWidget* ThrottleWidget; // 0x270(0x08)
};

// Class TslGameUI.TslGameOptionNavigatableWidget
// Size: 0x478 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionNavigatableWidget : UTslGameOptionNavigatableWidgetBase {
	struct U*d4d01c3d35* NaviWidgetComp; // 0x428(0x08)
	struct FTslStickInputHelper ModificationInputHelper; // 0x430(0x14)
	char pad_444[0x1c]; // 0x444(0x1c)
	struct FTslStickInputHelper NavigationInputHelper; // 0x460(0x14)
	char pad_474[0x4]; // 0x474(0x04)
};

// Class TslGameUI.TslGameOptionItemWidget
// Size: 0x878 (Inherited: 0x478)  [layout: KHOP]
struct UTslGameOptionItemWidget : UTslGameOptionNavigatableWidget {
	char pad_478[0x218]; // 0x478(0x218)
	struct FTslGameOptionSupplementaryData SupplementaryData; // 0x690(0x138)
	char pad_7C8[0x28]; // 0x7c8(0x28)
	struct FText DescriptionText; // 0x7f0(0x18)
	char pad_808[0x8]; // 0x808(0x08)
	struct U*3b30fac88d* OptFuncImpl; // 0x810(0x08)
	struct UTslGameOptionWidget* CachedGameOptionWidget; // 0x818(0x08)
	struct UTslGameOptionItemNameWidget* OptionItemName; // 0x820(0x08)
	struct UTslGameOptionHoverWidget* OptionHover; // 0x828(0x08)
	struct UTslGameOptionResetButtonWidget* ButtonReset; // 0x830(0x08)
	struct USpacer* SpacerTop; // 0x838(0x08)
	float SpacerTopHeightMain; // 0x840(0x04)
	float SpacerTopHeightSub; // 0x844(0x04)
	struct FLinearColor ColorOptionNormal; // 0x848(0x10)
	struct FLinearColor ColorOptionHighlight; // 0x858(0x10)
	struct FMulticastDelegate OnGamepadYEvent; // 0x868(0x10)

	void UpdateWidgetByDependentStepper(); // Function TslGameUI.TslGameOptionItemWidget.UpdateWidgetByDependentStepper //  // @ game+0xe498f9c
	void UpdateWidgetOnSlider(); // Function TslGameUI.TslGameOptionItemWidget.UpdateWidgetOnSlider //  // @ game+0xe499b30
	void UpdateWidget(); // Function TslGameUI.TslGameOptionItemWidget.UpdateWidget //  // @ game+0xe498f14
	void OnResetButtonClicked(); // Function TslGameUI.TslGameOptionItemWidget.OnResetButtonClicked //  // @ game+0xe48fb8c
	void UpdateWidgetOnDependentSlider(); // Function TslGameUI.TslGameOptionItemWidget.UpdateWidgetOnDependentSlider //  // @ game+0xe4990fc
	void OnCloudOptionTooltipActivated(); // Function TslGameUI.TslGameOptionItemWidget.OnCloudOptionTooltipActivated //  // @ game+0xe48a9b0
	void OnCloudOptionTooltipDeactivated(); // Function TslGameUI.TslGameOptionItemWidget.OnCloudOptionTooltipDeactivated //  // @ game+0xe48a9d8
};

// Class TslGameUI.TslGameOptionCategoryGroupWidget
// Size: 0x4a0 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionCategoryGroupWidget : UUmgBaseWidget {
	char pad_420[0x20]; // 0x420(0x20)
	struct UTslGameOptionWidget* CachedGameOptionWidget; // 0x440(0x08)
	struct UImage* ImageGlow; // 0x448(0x08)
	struct U*7fa8406bd3* AnimBlink; // 0x450(0x08)
	struct UTextBlock* TextCategoryName; // 0x458(0x08)
	struct UImage* TooltipIconImage; // 0x460(0x08)
	struct UButton* HoverHighlightButton; // 0x468(0x08)
	struct UVerticalBox* ListItems; // 0x470(0x08)
	struct USpacer* SpacerCategory; // 0x478(0x08)
	struct FLinearColor ColorNormal; // 0x480(0x10)
	struct FLinearColor ColorTooltipIconHighlighted; // 0x490(0x10)

	void OnCloudOptionTooltipActivated(); // Function TslGameUI.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipActivated //  // @ game+0xe48a99c
	void OnCloudOptionTooltipDeactivated(); // Function TslGameUI.TslGameOptionCategoryGroupWidget.OnCloudOptionTooltipDeactivated //  // @ game+0xe48a9c4
};

// Class TslGameUI.TslGameOptionCategoryListWidget
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionCategoryListWidget : UTslUserWidget {
	struct UWrapBox* ListTocItems; // 0x330(0x08)
	struct UClass* ItemWidgetClass; // 0x338(0x08)
	float HighlightAreaMargin; // 0x340(0x04)
	float ScrollStoppedDistance; // 0x344(0x04)
	struct TArray<struct UTslGameOptionCategoryListItemWidget*> Items; // 0x348(0x10)
	struct UTslGameOptionSubTabWidget* BoundSubTab; // 0x358(0x08)
	struct UTslScrollBox* BoundScrollBox; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)

	void HandleItemClicked(); // Function TslGameUI.TslGameOptionCategoryListWidget.HandleItemClicked //  // @ game+0xe47f1c0
	void HandleScrollToWidgetFinished(); // Function TslGameUI.TslGameOptionCategoryListWidget.HandleScrollToWidgetFinished //  // @ game+0xe480800
};

// Class TslGameUI.*9d312ec5bb
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9d312ec5bb : UObject {
};

// Class TslGameUI.TslGameOptionCloudPopupWidget
// Size: 0x4b8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionCloudPopupWidget : UUmgBaseWidget {
	struct UButton* TopbarButton; // 0x420(0x08)
	struct U*7fa8406bd3* Anim_In; // 0x428(0x08)
	struct U*7fa8406bd3* Anim_Out; // 0x430(0x08)
	struct UButton* UploadButton; // 0x438(0x08)
	struct UButton* DownloadButton; // 0x440(0x08)
	struct UButton* CreateCodeButton; // 0x448(0x08)
	struct UButton* LoadCodeButton; // 0x450(0x08)
	struct UTextBlock* TitleText; // 0x458(0x08)
	struct UTextBlock* DescriptionText; // 0x460(0x08)
	struct UTextBlock* UploadText; // 0x468(0x08)
	struct UTextBlock* DownloadText; // 0x470(0x08)
	struct UTextBlock* CreateCodeText; // 0x478(0x08)
	struct UTextBlock* LoadCodeText; // 0x480(0x08)
	DelegateProperty OnSavePopupButtonPressEvent; // 0x488(0x10)
	DelegateProperty OnLoadPopupButtonPressEvent; // 0x498(0x10)
	struct UTslGameOptionWidget* CachedGameOptionWidget; // 0x4a8(0x08)
	char pad_4B0[0x8]; // 0x4b0(0x08)

	void OnCreateCodeButtonHovered(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnCreateCodeButtonHovered //  // @ game+0xdbdbae0
	void OnSavePopupButtonPressed(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnSavePopupButtonPressed //  // @ game+0xe48fdb4
	void OnLoadPopupButtonPressed(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnLoadPopupButtonPressed //  // @ game+0xe48dc1c
	void OnUploadButtonClicked(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnUploadButtonClicked //  // @ game+0xe4952d4
	void OnDownloadButtonClicked(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnDownloadButtonClicked //  // @ game+0xe48c148
	void OnLoadCodeButtonClicked(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnLoadCodeButtonClicked //  // @ game+0xe48daa8
	void OnCreateCodeButtonClicked(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnCreateCodeButtonClicked //  // @ game+0xe48b004
	void OnDownloadButtonHovered(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnDownloadButtonHovered //  // @ game+0xdbdbae0
	void OnLoadCodeButtonHovered(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnLoadCodeButtonHovered //  // @ game+0xdbdbae0
	void OnTopbarButtonClicked(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnTopbarButtonClicked //  // @ game+0xe494300
	void OnTopbarButtonHovered(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnTopbarButtonHovered //  // @ game+0xdbdbae0
	void OnUploadButtonHovered(); // Function TslGameUI.TslGameOptionCloudPopupWidget.OnUploadButtonHovered //  // @ game+0xdbdbae0
};

// Class TslGameUI.TslGameOptionCloudRequestTimeoutCoverWidget
// Size: 0x570 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionCloudRequestTimeoutCoverWidget : UBlockInputUserWidget {
	struct U*7fa8406bd3* Cover_Fade_In; // 0x470(0x08)
	struct U*7fa8406bd3* Cover_Fade_Out; // 0x478(0x08)
	struct U*7fa8406bd3* Warning_Fade_In; // 0x480(0x08)
	struct U*7fa8406bd3* Warning_Fade_Out; // 0x488(0x08)
	struct UTextBlock* Waiting_Text; // 0x490(0x08)
	struct USizeBox* Warning_SizeBox; // 0x498(0x08)
	struct UTextBlock* Warning_Text; // 0x4a0(0x08)
	struct UTslGameOptionWidget* CachedGameOptionWidget; // 0x4a8(0x08)
	char pad_4B0[0xc0]; // 0x4b0(0xc0)

	void OnTimeout(); // Function TslGameUI.TslGameOptionCloudRequestTimeoutCoverWidget.OnTimeout //  // @ game+0xe4941e8
	void OnFinishShowResultMessage(); // Function TslGameUI.TslGameOptionCloudRequestTimeoutCoverWidget.OnFinishShowResultMessage //  // @ game+0xe48c914
};

// Class TslGameUI.TslGameOptionDetailWidget
// Size: 0x628 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionDetailWidget : UUmgBaseWidget {
	struct FTslGameOptionSupplementaryData RecentSupplementaryData; // 0x420(0x138)
	struct FUmgWidgetBinder_TextBlock DisplayNameText_Binder; // 0x558(0x20)
	struct FUmgWidgetBinder_Gerneral SupplementaryWidgetSizeBox_Binder; // 0x578(0x20)
	struct FUmgWidgetBinder_Gerneral SupplementaryWidgetSwitcher_Binder; // 0x598(0x20)
	struct TMap<enum class ETslGameOptionSupplementaryType, struct UClass*> SupplementaryWidgetClasses; // 0x5b8(0x50)
	struct UTslCommonButton* LinkButton; // 0x608(0x08)
	struct UTextBlock* LinkButtonText; // 0x610(0x08)
	char pad_618[0x10]; // 0x618(0x10)

	void OnClicked_LinkButton(); // Function TslGameUI.TslGameOptionDetailWidget.OnClicked_LinkButton //  // @ game+0xe48a8ec
};

// Class TslGameUI.*3b30fac88d
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*3b30fac88d : U*ac563b465a {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class TslGameUI.*4a6500057a
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*4a6500057a : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_InventoryCharacterRender
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_InventoryCharacterRender : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_ColorBlindMode
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_ColorBlindMode : U*3b30fac88d {
};

// Class TslGameUI.*4c66ffe399
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*4c66ffe399 : U*3b30fac88d {

	void OnCrosshairWeaponIndexChanged(); // Function TslGameUI.*4c66ffe399.OnCrosshairWeaponIndexChanged //  // @ game+0xe48bc0c
};

// Class TslGameUI.*50ff326d6f
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*50ff326d6f : U*3b30fac88d {
};

// Class TslGameUI.*eac1476460
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*eac1476460 : U*3b30fac88d {
};

// Class TslGameUI.*ccdbdce131
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*ccdbdce131 : U*eac1476460 {

	void OnCrosshairUseGeneralWeaponStepperChanged(); // Function TslGameUI.*ccdbdce131.OnCrosshairUseGeneralWeaponStepperChanged //  // @ game+0xe48b408
};

// Class TslGameUI.*ed449570b6
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct U*ed449570b6 : U*3b30fac88d {
	struct UTslGameOptionItemSampleRowWidget* *31b7cbb058; // 0x38(0x08)

	void OnCrosshairSampleClicked(); // Function TslGameUI.*ed449570b6.OnCrosshairSampleClicked //  // @ game+0xe48b390
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CrosshairColor
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Gameplay_UI_CrosshairColor : U*eac1476460 {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CrosshairColorRed
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_CrosshairColorRed : U*eac1476460 {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CrosshairColorGreen
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_CrosshairColorGreen : U*eac1476460 {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CrosshairColorBlue
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_CrosshairColorBlue : U*eac1476460 {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CrosshairColorAlpha
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_CrosshairColorAlpha : U*eac1476460 {
};

// Class TslGameUI.*d77d78291d
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*d77d78291d : U*eac1476460 {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class TslGameUI.*b5bbcb3d6f
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*b5bbcb3d6f : U*eac1476460 {
};

// Class TslGameUI.*dae6d95571
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*dae6d95571 : U*eac1476460 {
};

// Class TslGameUI.*7db84758e5
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*7db84758e5 : U*eac1476460 {
};

// Class TslGameUI.*9fa0932fbd
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*9fa0932fbd : U*eac1476460 {
};

// Class TslGameUI.*33af739750
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*33af739750 : U*eac1476460 {
};

// Class TslGameUI.*bf936db8ef
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*bf936db8ef : U*eac1476460 {
};

// Class TslGameUI.*96a6d52296
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*96a6d52296 : U*eac1476460 {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.*b6d7b5b4b9
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*b6d7b5b4b9 : U*eac1476460 {
};

// Class TslGameUI.*7d6fa30a0b
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*7d6fa30a0b : U*eac1476460 {
};

// Class TslGameUI.*04afa16e07
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*04afa16e07 : U*eac1476460 {
};

// Class TslGameUI.*39a9f1d220
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*39a9f1d220 : U*eac1476460 {
};

// Class TslGameUI.*ede9e2978c
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*ede9e2978c : U*eac1476460 {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class TslGameUI.*7bfa1a68e5
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*7bfa1a68e5 : U*eac1476460 {
};

// Class TslGameUI.*c55638a9e9
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*c55638a9e9 : U*eac1476460 {
};

// Class TslGameUI.*130c895249
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*130c895249 : U*eac1476460 {
};

// Class TslGameUI.*03b1a4619b
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*03b1a4619b : U*eac1476460 {
};

// Class TslGameUI.*e786c06e59
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*e786c06e59 : U*eac1476460 {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_WeaponSlotHUD
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_WeaponSlotHUD : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_WorldMapZoomSensitivity
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_WorldMapZoomSensitivity : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_MinimapDesaturation
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_MinimapDesaturation : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_MinimapDynamicZoom
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_MinimapDynamicZoom : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_KillfeedLimit
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_KillfeedLimit : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_HidePlayerNicknames
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_HidePlayerNicknames : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_DisplayDirectMessage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_DisplayDirectMessage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_DisplayClanMessage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_DisplayClanMessage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_InteractionTargetHighlight
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_InteractionTargetHighlight : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_DropItemFlashing
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_DropItemFlashing : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_NetworkDebugStatistics
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_NetworkDebugStatistics : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_NetworkStatisticsCollecting
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_NetworkStatisticsCollecting : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_GPUDebugGPUDebug
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_GPUDebugGPUDebug : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_GPUDebugGPUCrashCheck
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_GPUDebugGPUCrashCheck : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_OnScreenKeyGuide
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_OnScreenKeyGuide : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_KeyGuideGrade
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_KeyGuideGrade : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_CompassShade
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_CompassShade : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_HelmetHide
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_HelmetHide : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_UI_PadInventoryTooltip
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_UI_PadInventoryTooltip : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_Master
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_Master : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_MasterVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_MasterVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_Music
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_Music : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_MusicVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_MusicVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_Ui
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_Ui : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_UiVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_UiVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_Effects
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_Effects : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_EffectsVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_EffectsVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_EmotesVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_EmotesVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_RadioAudio
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_RadioAudio : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_HRTF
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_HRTF : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_MusicTitle
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Audio_Sound_MusicTitle : U*3b30fac88d {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_Sound_WeaponSound
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_Sound_WeaponSound : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_VoiceInputMode
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceInputMode : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_VoiceInputMode_Console
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceInputMode_Console : UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceInputMode {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatChannel
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatChannel : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_MicrophoneVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_MicrophoneVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_MicrophoneVolume_Console
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_MicrophoneVolume_Console : UTslGameOptionFuncImpl_Audio_VoiceChat_MicrophoneVolume {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatVolume
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatVolume : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatVolume_Console
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatVolume_Console : UTslGameOptionFuncImpl_Audio_VoiceChat_VoiceChatVolume {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_Preset
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_Preset : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_InvertX
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_InvertX : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_InvertY
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_InvertY : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_DeadzoneRight
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_DeadzoneRight : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_DeadzoneLeft
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_DeadzoneLeft : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_Vibration
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_Vibration : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Gamepad_VibrationRate
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Gamepad_VibrationRate : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_Forward
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_Forward : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_Running
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_Running : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_Vertical
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_Vertical : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_NamedSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_NamedSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_ToggleAimAcceleration
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_ToggleAimAcceleration : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_AimAcceleration
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_AimAcceleration : UTslGameOptionFuncImpl_Controls_GamepadSensitivity_NamedSensitivity {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_GamepadSensitivity_Inventory
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_GamepadSensitivity_Inventory : U*3b30fac88d {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Crouch
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Crouch : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Prone
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Prone : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Walk
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Walk : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Sprint
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Sprint : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_FreeLook
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_FreeLook : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_HoldBreath
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_HoldBreath : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_CantedSight
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_CantedSight : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Peek
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Peek : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Map
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Map : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_Aim
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_Aim : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_KeyInputMethod_ADS
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_KeyInputMethod_ADS : U*3b30fac88d {
};

// Class TslGameUI.*0e20cf8712
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*0e20cf8712 : U*3b30fac88d {
};

// Class TslGameUI.*deb0bb64a8
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*deb0bb64a8 : U*3b30fac88d {
};

// Class TslGameUI.*f64a251305
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*f64a251305 : U*3b30fac88d {
};

// Class TslGameUI.*4d2b7fa531
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*4d2b7fa531 : U*3b30fac88d {
};

// Class TslGameUI.*5bc3eedccd
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*5bc3eedccd : U*3b30fac88d {
};

// Class TslGameUI.*fe736b608f
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*fe736b608f : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_InvertMouse
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Mouse_InvertMouse : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_GeneralSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_GeneralSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_VerticalSensitivityMultiplier
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Mouse_VerticalSensitivityMultiplier : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_AimSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_AimSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_IronSightSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_IronSightSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_ScopingSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_ScopingSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_OverrideSensitivityForAllScopes
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Controls_Mouse_OverrideSensitivityForAllScopes : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_2xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_2xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_3xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_3xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_4xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_4xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_6xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_6xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_8xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_8xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Controls_Mouse_15xScopeSensitivity
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Controls_Mouse_15xScopeSensitivity : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticle
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticle : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticleIndex
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticleIndex : U*3b30fac88d {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticleIndex2x3x
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticleIndex2x3x : UTslGameOptionFuncImpl_Gameplay_Functionalities_CustomReticleIndex {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom : U*3b30fac88d {
	char pad_38[0x18]; // 0x38(0x18)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom2X
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom2X : UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom3X
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom3X : UTslGameOptionFuncImpl_Gameplay_Functionalities_ReticleBrightness_Custom {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_FreeLookInterpolation
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_FreeLookInterpolation : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_TPPAimCameraPosition
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_TPPAimCameraPosition : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoReloading
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoReloading : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_HandGun
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_HandGun : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_SMG
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_SMG : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_AR
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_AR : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_Shotgun
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_Shotgun : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_DMR
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_DefaultFiringMode_DMR : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_SecondaryFiringMode_SMG
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_SecondaryFiringMode_SMG : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_SecondaryFiringMode_AR
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_SecondaryFiringMode_AR : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ClanName
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ClanName : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoWeaponSkinReplacement
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoWeaponSkinReplacement : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoVehicleSkinReplacement
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoVehicleSkinReplacement : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipment
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipment : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipAttachmentFromInventory
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipAttachmentFromInventory : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipmentForScope
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoEquipmentForScope : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AutoReplaceAttachment
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AutoReplaceAttachment : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_RadioMessage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_RadioMessage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_RADIO_MESSAGE_PRESET
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_RADIO_MESSAGE_PRESET : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_RADIO_MESSAGE_QUICKPING
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_RADIO_MESSAGE_QUICKPING : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ContinuousHealItemUse
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ContinuousHealItemUse : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_LiveStreaming
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_LiveStreaming : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_ActionQueuing
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_ActionQueuing : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AdjustInstantVolumeReducer
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AdjustInstantVolumeReducer : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_HideArmor
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_HideArmor : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_BulletRecommendOption
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_BulletRecommendOption : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_EquipmentRecommendOption
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_EquipmentRecommendOption : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_AttachmentRecommendOption
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_AttachmentRecommendOption : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_VehicleFallPrevention
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_VehicleFallPrevention : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_VehicleSkinAutoApply
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_VehicleSkinAutoApply : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Functionalities_FlightTrail
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Gameplay_Functionalities_FlightTrail : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_General_CrossPlatformPlay
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_General_CrossPlatformPlay : U*3b30fac88d {
	struct UTslGameOptionItemStepperWidget* *fa2c932a26; // 0x38(0x08)

	void IsInputValid(); // Function TslGameUI.TslGameOptionFuncImpl_Gameplay_General_CrossPlatformPlay.IsInputValid //  // @ game+0xe48944c
	void HandleAppReactivated(); // Function TslGameUI.TslGameOptionFuncImpl_Gameplay_General_CrossPlatformPlay.HandleAppReactivated //  // @ game+0x1053c04
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_General_DVR
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_General_DVR : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_General_InputDevice
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Gameplay_General_InputDevice : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_MovingSpeed
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_MovingSpeed : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_HeaderGunUseage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_HeaderGunUseage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_XRayUseage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_XRayUseage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_TagUseage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_TagUseage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_DamageIndicatorUsage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_DamageIndicatorUsage : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_ShowTracerDisplay
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_ShowTracerDisplay : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_TracerTeamColor
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_TracerTeamColor : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Observer_TracerBulletModeType
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Observer_TracerBulletModeType : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Replay_Replay
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Replay_Replay : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Gameplay_Replay_DeathCam
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Gameplay_Replay_DeathCam : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_RenderScale
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_RenderScale : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_FppCameraFov
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_FppCameraFov : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_GraphicsAPI
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_GraphicsAPI : U*3b30fac88d {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_Sharpen
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_Sharpen : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_VSync
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_VSync : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_MotionBlur
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_MotionBlur : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_OverallQuality
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_OverallQuality : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
	char pad_38[0x20]; // 0x38(0x20)
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_AntiAliasing
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_AntiAliasing : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_PostProcessing
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_PostProcessing : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_Shadows
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_Shadows : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_Textures
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_Textures : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_Effects
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_Effects : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_Foliage
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_Foliage : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_AdvancedSettings_ViewDistance
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_AdvancedSettings_ViewDistance : UTslGameOptionFuncImpl_Graphics_AdvancedSettings_CommonFucImpl {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_DisplayMode
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_DisplayMode : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_Resolution
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_Resolution : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_LobbyFpsCap
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_LobbyFpsCap : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_InGameFpsCap
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_InGameFpsCap : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_SmoothedFrameRate
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_SmoothedFrameRate : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_MaxFps
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_MaxFps : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_Brightness
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_Brightness : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_SafeZone
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_SafeZone : U*3b30fac88d {

	void OpenSafeZoneWidget(); // Function TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_SafeZone.OpenSafeZoneWidget //  // @ game+0xe49618c
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_UniversalBrightnessForAllMaps
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_UniversalBrightnessForAllMaps : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_BrightnessForMap
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_BrightnessForMap : U*3b30fac88d {
	struct FString *e049734d2a; // 0x38(0x10)
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_HDR_Brightness
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_HDR_Brightness : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_VolumetricFog
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_VolumetricFog : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_DisplaySettings_4K
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_DisplaySettings_4K : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_Language_LanguageSetting
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_Graphics_Language_LanguageSetting : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionFuncImpl_Graphics_Nvidia_HighlightSetting
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionFuncImpl_Graphics_Nvidia_HighlightSetting : U*3b30fac88d {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class TslGameUI.*8fac208ed0
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct U*8fac208ed0 : U*3b30fac88d {
	struct UTslGameOptionItemStepperWidget* *d85cb4e61a; // 0x38(0x08)
	struct UTslGameOptionItemStepperWidget* *0e8d4a4ee0; // 0x40(0x08)

	void IsAntiAliasingInputValid(); // Function TslGameUI.*8fac208ed0.IsAntiAliasingInputValid //  // @ game+0xe48935c
};

// Class TslGameUI.*f9e860a6fd
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*f9e860a6fd : U*3b30fac88d {
};

// Class TslGameUI.*4732b47b25
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*4732b47b25 : U*f9e860a6fd {
};

// Class TslGameUI.*dafaa12d90
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*dafaa12d90 : U*f9e860a6fd {
};

// Class TslGameUI.*147032c793
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*147032c793 : U*f9e860a6fd {
};

// Class TslGameUI.*19c2db92a0
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*19c2db92a0 : U*f9e860a6fd {
};

// Class TslGameUI.TslGameOptionItemKeyBinderWidget
// Size: 0x908 (Inherited: 0x878)  [layout: KHOP]
struct UTslGameOptionItemKeyBinderWidget : UTslGameOptionItemWidget {
	struct TArray<struct FTslInputKey> InitialInputKeySlotValues; // 0x878(0x10)
	struct FText DetailedDescriptionText; // 0x888(0x18)
	struct FTslGameOptionKeyBindingDesc KeyBindingDesc; // 0x8a0(0x38)
	struct TArray<struct UTslGameOptionItemKeyBinderSlotWidget*> CachedKeySlotWidgets; // 0x8d8(0x10)
	struct TArray<struct FUmgWidgetBinder_Gerneral> KeyBindingSlot_Binders; // 0x8e8(0x10)
	struct FMulticastDelegate OnKeyBinderValueChangeEvent; // 0x8f8(0x10)

	void OnKeyBinderSlotValueChanged(); // Function TslGameUI.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged //  // @ game+0xe48d524
};

// Class TslGameUI.TslGameOptionFuncImpl_KeyBindings
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UTslGameOptionFuncImpl_KeyBindings : U*3b30fac88d {
};

// Class TslGameUI.TslGameOptionHoverWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionHoverWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimHover; // 0x420(0x08)
	struct U*7fa8406bd3* AnimUnhover; // 0x428(0x08)
	struct UImage* ImageFocus; // 0x430(0x08)
	struct UImage* ImageHover; // 0x438(0x08)
	struct UImage* ImageHoverLineTop; // 0x440(0x08)
	struct UImage* ImageHoverLineBottom; // 0x448(0x08)
	struct UImage* ImageBg; // 0x450(0x08)
	struct UImage* ImageBgLineTop; // 0x458(0x08)
	struct FLinearColor ColorMainBg; // 0x460(0x10)
	struct FLinearColor ColorSubBg; // 0x470(0x10)
	float SubItemHoverAlpha; // 0x480(0x04)
	float NormalAlpha; // 0x484(0x04)
	struct FVector2D HoverImageSize; // 0x488(0x08)
	float FocusAlpha; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
};

// Class TslGameUI.TslGameOptionInputBlockerWidget
// Size: 0x478 (Inherited: 0x470)  [layout: KHOP]
struct UTslGameOptionInputBlockerWidget : UBlockInputUserWidget {
	struct UTslGameOptionWidget* Owner; // 0x470(0x08)
};

// Class TslGameUI.TslGameOptionItemDropDownListSelectableWidget
// Size: 0x4b0 (Inherited: 0x448)  [layout: KHOP]
struct UTslGameOptionItemDropDownListSelectableWidget : UTslDropDownListSelectableWidget {
	struct UBorder* ContentsBorder; // 0x448(0x08)
	struct FLinearColor TitleNormalColor; // 0x450(0x10)
	struct FLinearColor TitleHighlightColor; // 0x460(0x10)
	struct FLinearColor NormalColor; // 0x470(0x10)
	struct FLinearColor HighlightColor; // 0x480(0x10)
	struct FLinearColor SelectedColor; // 0x490(0x10)
	struct UTslFlowingTextWidget* TextName; // 0x4a0(0x08)
	struct UImage* ImageCheck; // 0x4a8(0x08)
};

// Class TslGameUI.TslGameOptionItemKeyBinderSlotWidget
// Size: 0x530 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionItemKeyBinderSlotWidget : UUmgBaseWidget {
	struct TArray<struct FKey> AvailableMouseButtons; // 0x420(0x10)
	struct UTslGameOptionItemKeyBinderWidget* Owner; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
	struct TArray<struct FKey> KeyStack; // 0x440(0x10)
	struct FTslInputKey BuildUp; // 0x450(0x20)
	struct FTslInputKey InputKeyAssigned; // 0x470(0x20)
	bool bForceToUseLeftModifierKeys; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FUmgWidgetBinder_Border InputKeyDisplayBorder_Binder; // 0x498(0x30)
	struct FUmgWidgetBinder_Gerneral InputKeyIconizer_Binder; // 0x4c8(0x20)
	struct FUmgWidgetBinder_Gerneral Highlighter_Binder; // 0x4e8(0x20)
	struct UTexture2D* BackgroundTextureNormal; // 0x508(0x08)
	struct UTexture2D* BackgroundTextureHighlighted; // 0x510(0x08)
	struct UTexture2D* BackgroundTextureInput; // 0x518(0x08)
	struct FMulticastDelegate OnKeyBinderSlotValueChangeEvent; // 0x520(0x10)
};

// Class TslGameUI.TslGameOptionItemNameWidget
// Size: 0x3c8 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemNameWidget : UTslUserWidget {
	struct FMulticastDelegate OnTooltipHoverActivated; // 0x330(0x10)
	struct FMulticastDelegate OnTooltipHoverDeactivated; // 0x340(0x10)
	struct USpacer* SpacerIndent; // 0x350(0x08)
	struct UTslFlowingTextWidget* TextItemName; // 0x358(0x08)
	struct UButton* ButtonHoverHighlight; // 0x360(0x08)
	struct UImage* ImageTooltipIcon; // 0x368(0x08)
	struct FLinearColor ColorTooltipIconHighlighted; // 0x370(0x10)
	struct FLinearColor ColorMainNameNormal; // 0x380(0x10)
	struct FLinearColor ColorMainNameHighlight; // 0x390(0x10)
	struct FLinearColor ColorSubNameNormal; // 0x3a0(0x10)
	struct FLinearColor ColorSubNameHighlight; // 0x3b0(0x10)
	char pad_3C0[0x8]; // 0x3c0(0x08)

	void OnHoverButtonHovered(); // Function TslGameUI.TslGameOptionItemNameWidget.OnHoverButtonHovered //  // @ game+0xe48ce38
	void OnHoverButtonUnhovered(); // Function TslGameUI.TslGameOptionItemNameWidget.OnHoverButtonUnhovered //  // @ game+0xe48ce4c
};

// Class TslGameUI.TslGameOptionItemSampleButtonWidget
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemSampleButtonWidget : UTslUserWidget {
	char pad_330[0x10]; // 0x330(0x10)
	struct UButton* ButtonSample; // 0x340(0x08)
	struct UImage* ImageFocus; // 0x348(0x08)
	struct UImage* ImageSample; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)

	void OnButtonSampleClicked(); // Function TslGameUI.TslGameOptionItemSampleButtonWidget.OnButtonSampleClicked //  // @ game+0xe48a448
};

// Class TslGameUI.TslGameOptionItemStepperIndicatorWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionItemStepperIndicatorWidget : UUmgBaseWidget {
	struct UTslGameOptionItemStepperWidget* Owner; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct FUmgWidgetBinder_SizeBox SizeBox_Binder; // 0x430(0x28)
	struct FUmgWidgetBinder_Gerneral Button_Binder; // 0x458(0x20)
	struct FUmgWidgetBinder_Border InnerBorder_Binder; // 0x478(0x30)
	struct FLinearColor ColorNormal; // 0x4a8(0x10)
	struct FLinearColor ColorHighlighted; // 0x4b8(0x10)

	void OnClicked(); // Function TslGameUI.TslGameOptionItemStepperIndicatorWidget.OnClicked //  // @ game+0xe48a878
};

// Class TslGameUI.TslGameOptionCategoryListItemWidget
// Size: 0x4d8 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionCategoryListItemWidget : UTslGameOptionNavigatableWidget {
	char pad_478[0x10]; // 0x478(0x10)
	struct UTextBlock* TextCategoryName; // 0x488(0x08)
	struct UButton* ButtonTocItem; // 0x490(0x08)
	struct UWidget* ImageBulletActive; // 0x498(0x08)
	struct UWidget* ImageFocus; // 0x4a0(0x08)
	struct UTslGameOptionCategoryGroupWidget* TargetCategoryGroup; // 0x4a8(0x08)
	struct FLinearColor ColorNameNormal; // 0x4b0(0x10)
	struct FLinearColor ColorNameHighlight; // 0x4c0(0x10)
	char pad_4D0[0x8]; // 0x4d0(0x08)

	void OnButtonClicked(); // Function TslGameUI.TslGameOptionCategoryListItemWidget.OnButtonClicked //  // @ game+0xe48a2ac
	void OnButtonUnhovered(); // Function TslGameUI.TslGameOptionCategoryListItemWidget.OnButtonUnhovered //  // @ game+0xe48a47c
	void OnButtonHovered(); // Function TslGameUI.TslGameOptionCategoryListItemWidget.OnButtonHovered //  // @ game+0xe48a434
};

// Class TslGameUI.TslGameOptionItemButtonWidget
// Size: 0x910 (Inherited: 0x878)  [layout: KHOP]
struct UTslGameOptionItemButtonWidget : UTslGameOptionItemWidget {
	float PopupCoolDown; // 0x878(0x04)
	char pad_87C[0x4]; // 0x87c(0x04)
	struct UButton* OptionButton; // 0x880(0x08)
	struct UTextBlock* OptionButtonText; // 0x888(0x08)
	char pad_890[0x78]; // 0x890(0x78)
	struct FTimerHandle PopupTimerHandle; // 0x908(0x08)

	void ShowPopupDialogEx(); // Function TslGameUI.TslGameOptionItemButtonWidget.ShowPopupDialogEx //  // @ game+0xe497ae0
	void OnPopupButtonPressedEvent(); // Function TslGameUI.TslGameOptionItemButtonWidget.OnPopupButtonPressedEvent //  // @ game+0xe48f7f4
};

// Class TslGameUI.TslGameOptionItemDropDownListWidget
// Size: 0x938 (Inherited: 0x878)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemDropDownListWidget : UTslGameOptionItemWidget {
	char pad_878[0x10]; // 0x878(0x10)
	struct TArray<struct FTslGameOptionItemStepperData> DropDownListData; // 0x888(0x10)
	struct UTslGameOptionItemDropDownListSelectableWidget* CachedContentWidget; // 0x898(0x08)
	struct TArray<struct UTslGameOptionItemDropDownListSelectableWidget*> CachedSelectableWidgets; // 0x8a0(0x10)
	char pad_8B0[0x8]; // 0x8b0(0x08)
	struct UStringTable* DropDownListStringTable; // 0x8b8(0x08)
	struct UStringTable* DropDownListDetailedStringTable; // 0x8c0(0x08)
	struct FUmgWidgetBinder_Gerneral DropDownList_Binder; // 0x8c8(0x20)
	struct FUmgWidgetBinder_Image DownArrowImage_Binder; // 0x8e8(0x28)
	struct UClass* DropDownListSelectableWidgetClass; // 0x910(0x08)
	enum class EHorizontalAlignment ComboBoxContentsAlignment; // 0x918(0x01)
	char pad_919[0x7]; // 0x919(0x07)
	struct FMulticastDelegate OnDropDownListSelectionChangeEvent; // 0x920(0x10)
	char pad_930[0x8]; // 0x930(0x08)

	void OnAfterGenerateWidget(); // Function TslGameUI.TslGameOptionItemDropDownListWidget.OnAfterGenerateWidget //  // @ game+0xe4896a8
	void OnGenerateWidget(); // Function TslGameUI.TslGameOptionItemDropDownListWidget.OnGenerateWidget //  // @ game+0xe48cac8
	void OnComboBoxOpening(); // Function TslGameUI.TslGameOptionItemDropDownListWidget.OnComboBoxOpening //  // @ game+0xe48a9ec
	void OnComboBoxSelectionChanged(); // Function TslGameUI.TslGameOptionItemDropDownListWidget.OnComboBoxSelectionChanged //  // @ game+0xe48aa00
};

// Class TslGameUI.TslGameOptionItemMusicDropDownListWidget
// Size: 0x948 (Inherited: 0x938)  [layout: KHOP]
struct UTslGameOptionItemMusicDropDownListWidget : UTslGameOptionItemDropDownListWidget {
	struct TArray<struct FName> MusicList; // 0x938(0x10)

	void OnMusicSelectionChanged(); // Function TslGameUI.TslGameOptionItemMusicDropDownListWidget.OnMusicSelectionChanged //  // @ game+0xe48e9e4
};

// Class TslGameUI.TslGameOptionItemSampleRowWidget
// Size: 0x8f8 (Inherited: 0x878)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemSampleRowWidget : UTslGameOptionItemWidget {
	struct FMulticastDelegate OnSampleRowClicked; // 0x878(0x10)
	struct UClass* SampleButtonClass; // 0x888(0x08)
	struct FLinearColor FocusBorderColor; // 0x890(0x10)
	struct FLinearColor SelectedBorderColor; // 0x8a0(0x10)
	struct TArray<struct FTslGameOptionCrosshairSampleData> RifleSamples; // 0x8b0(0x10)
	struct TArray<struct FTslGameOptionCrosshairSampleData> ShotgunSamples; // 0x8c0(0x10)
	struct TArray<struct FTslGameOptionCrosshairSampleData> PistolSamples; // 0x8d0(0x10)
	struct UWrapBox* ListSamples; // 0x8e0(0x08)
	char pad_8E8[0x10]; // 0x8e8(0x10)

	void OnSampleButtonClicked(); // Function TslGameUI.TslGameOptionItemSampleRowWidget.OnSampleButtonClicked //  // @ game+0xe48fd34
};

// Class TslGameUI.TslGameOptionItemSliderWidget
// Size: 0x8e0 (Inherited: 0x878)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemSliderWidget : UTslGameOptionItemWidget {
	struct FText DetailedDescriptionText; // 0x878(0x18)
	char pad_890[0x14]; // 0x890(0x14)
	bool bUseLeftStick; // 0x8a4(0x01)
	bool bUseDPad; // 0x8a5(0x01)
	bool bUseRightStick; // 0x8a6(0x01)
	char pad_8A7[0x9]; // 0x8a7(0x09)
	struct USlider* Slider; // 0x8b0(0x08)
	struct UEditableText* EditableTextValue; // 0x8b8(0x08)
	struct FMulticastDelegate OnSliderValueChangeEvent; // 0x8c0(0x10)
	char pad_8D0[0x10]; // 0x8d0(0x10)

	void OnSliderAdjustmentEnd(); // Function TslGameUI.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd //  // @ game+0xe491de4
	void OnSliderAdjustmentBegin(); // Function TslGameUI.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin //  // @ game+0xe491dcc
	void OnSliderValueTextCommitted(); // Function TslGameUI.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted //  // @ game+0xe493264
	void OnSliderValueChanged(); // Function TslGameUI.TslGameOptionItemSliderWidget.OnSliderValueChanged //  // @ game+0xe49282c
	void OnSliderValueTextChanged(); // Function TslGameUI.TslGameOptionItemSliderWidget.OnSliderValueTextChanged //  // @ game+0xe4931a8
};

// Class TslGameUI.TslGameOptionItemVolumeSliderWidget
// Size: 0x928 (Inherited: 0x8e0)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemVolumeSliderWidget : UTslGameOptionItemSliderWidget {
	struct UWidgetSwitcher* VolumePreviewButtonSwitcher; // 0x8e0(0x08)
	struct UButton* VolumePreviewButtonPlay; // 0x8e8(0x08)
	struct UButton* VolumePreviewButtonStop; // 0x8f0(0x08)
	struct UAkComponent* VolumeGuideAkComp; // 0x8f8(0x08)
	struct UAkAudioEvent* VolumeGuideStartAk; // 0x900(0x08)
	struct UAkAudioEvent* VolumeGuideStopAk; // 0x908(0x08)
	bool bIsPlaying; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	float AkEventFinishCheckInterval; // 0x914(0x04)
	struct FName RTPC_Name; // 0x918(0x08)
	char pad_920[0x8]; // 0x920(0x08)

	void StartGuideAkEvent(); // Function TslGameUI.TslGameOptionItemVolumeSliderWidget.StartGuideAkEvent //  // @ game+0xe497b70
	void CheckGuideAkEventFinish(); // Function TslGameUI.TslGameOptionItemVolumeSliderWidget.CheckGuideAkEventFinish //  // @ game+0xe47d9f0
	void StopGuideAkEvent(); // Function TslGameUI.TslGameOptionItemVolumeSliderWidget.StopGuideAkEvent //  // @ game+0xe497b84
};

// Class TslGameUI.TslGameOptionItemStepperWidget
// Size: 0x930 (Inherited: 0x878)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemStepperWidget : UTslGameOptionItemWidget {
	char pad_878[0x10]; // 0x878(0x10)
	struct TArray<struct FTslGameOptionItemStepperData> StepperData; // 0x888(0x10)
	struct UStringTable* StepperStringTable; // 0x898(0x08)
	struct UStringTable* StepperDetailedStringTable; // 0x8a0(0x08)
	struct UTslFlowingTextWidget* StepperFlowText; // 0x8a8(0x08)
	struct UClass* StepperIndicatorWidgetClass; // 0x8b0(0x08)
	struct UHorizontalBox* ListIndicator; // 0x8b8(0x08)
	struct UButton* ButtonArrowL; // 0x8c0(0x08)
	struct UButton* ButtonArrowR; // 0x8c8(0x08)
	struct FMulticastDelegate OnStepperValueChangeEvent; // 0x8d0(0x10)
	struct TArray<struct FTslGameOptionItemStepperData_EditorType> StepperDatas; // 0x8e0(0x10)
	char pad_8F0[0x40]; // 0x8f0(0x40)

	void OnLeftArrowButtonClicked(); // Function TslGameUI.TslGameOptionItemStepperWidget.OnLeftArrowButtonClicked //  // @ game+0xe48da3c
	void OnRightArrowButtonClicked(); // Function TslGameUI.TslGameOptionItemStepperWidget.OnRightArrowButtonClicked //  // @ game+0xe48fc08
};

// Class TslGameUI.TslGameOptionItemMusicStepperWidget
// Size: 0x950 (Inherited: 0x930)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionItemMusicStepperWidget : UTslGameOptionItemStepperWidget {
	float MusicPreviewDebounceTime; // 0x930(0x04)
	char pad_934[0x4]; // 0x934(0x04)
	struct TArray<struct FName> MusicList; // 0x938(0x10)
	char pad_948[0x8]; // 0x948(0x08)

	void OnMusicSelectionChanged(); // Function TslGameUI.TslGameOptionItemMusicStepperWidget.OnMusicSelectionChanged //  // @ game+0xe48ebc8
	void OnRightButtonClicked(); // Function TslGameUI.TslGameOptionItemMusicStepperWidget.OnRightButtonClicked //  // @ game+0xe48da50
	void OnLeftButtonClicked(); // Function TslGameUI.TslGameOptionItemMusicStepperWidget.OnLeftButtonClicked //  // @ game+0xe48da50
};

// Class TslGameUI.TslGameOptionResetButtonWidget
// Size: 0x370 (Inherited: 0x330)  [layout: KHOP]
struct UTslGameOptionResetButtonWidget : UTslUserWidget {
	struct FMulticastDelegate OnResetClicked; // 0x330(0x10)
	struct UButton* ButtonReset; // 0x340(0x08)
	struct UImage* ImageReset; // 0x348(0x08)
	struct FLinearColor ColorIconNormal; // 0x350(0x10)
	struct FLinearColor ColorIconHovered; // 0x360(0x10)

	void HandleButtonClicked(); // Function TslGameUI.TslGameOptionResetButtonWidget.HandleButtonClicked //  // @ game+0xe47f088
};

// Class TslGameUI.TslGameOptionSubTabLabelWidget
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSubTabLabelWidget : UUmgBaseWidget {
	char pad_420[0x28]; // 0x420(0x28)
	struct UButton* LabelButton; // 0x448(0x08)
	struct UTextBlock* NormalText; // 0x450(0x08)
	struct UTextBlock* SelectedText; // 0x458(0x08)
	struct UTextBlock* HoverText; // 0x460(0x08)
	struct UWidgetSwitcher* SubTabLabelSwitcher; // 0x468(0x08)

	void OnLabelButtonClicked(); // Function TslGameUI.TslGameOptionSubTabLabelWidget.OnLabelButtonClicked //  // @ game+0xe48d7b8
	void OnLabelButtonOut(); // Function TslGameUI.TslGameOptionSubTabLabelWidget.OnLabelButtonOut //  // @ game+0xe48d7e0
	void OnLableButtonHover(); // Function TslGameUI.TslGameOptionSubTabLabelWidget.OnLableButtonHover //  // @ game+0xe48d7f4
};

// Class TslGameUI.TslGameOptionSubTabSelectWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionSubTabSelectWidget : UUmgBaseWidget {
	struct UClass* SubTabLabelWidgetClass; // 0x420(0x08)
	struct UHorizontalBox* TabLabels; // 0x428(0x08)
	float LabelIntervalWidth; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
};

// Class TslGameUI.TslGameOptionSubTabWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSubTabWidget : UUmgBaseWidget {
	char pad_420[0x18]; // 0x420(0x18)
	struct UClass* CategoryGroupWidgetClass; // 0x438(0x08)
	struct UTslScrollBox* CategoryGroupsScrollBox; // 0x440(0x08)
};

// Class TslGameUI.TslGameOptionSupplementaryWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSupplementaryWidget : UUmgBaseWidget {
};

// Class TslGameUI.TslGameOptionSupplementaryPreviewImageWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSupplementaryPreviewImageWidget : UTslGameOptionSupplementaryWidget {
	struct FUmgWidgetBinder_Image Image_Binder; // 0x420(0x28)
};

// Class TslGameUI.TslGameOptionSupplementaryPreviewMaterialWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSupplementaryPreviewMaterialWidget : UTslGameOptionSupplementaryWidget {
	struct FUmgWidgetBinder_Image Image_Binder; // 0x420(0x28)
	struct TMap<struct FString, struct FMaterialInfo> MaterialInfos; // 0x448(0x50)
	struct FString TempAssetName; // 0x498(0x10)
};

// Class TslGameUI.TslGameOptionSupplementaryPreviewCrosshairWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSupplementaryPreviewCrosshairWidget : UTslGameOptionSupplementaryWidget {
	struct UTslAdaptiveCrosshairWidget* AdaptiveCrosshairWidget; // 0x420(0x08)
};

// Class TslGameUI.TslGameOptionSupplementaryMicrophoneVolumeUnitMeterWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionSupplementaryMicrophoneVolumeUnitMeterWidget : UTslGameOptionSupplementaryWidget {

	void OnMicVuMeterUpdated(); // Function TslGameUI.TslGameOptionSupplementaryMicrophoneVolumeUnitMeterWidget.OnMicVuMeterUpdated //  // @ game+0xe48df28
	void UpdateVolumeUnitMeter(); // Function TslGameUI.TslGameOptionSupplementaryMicrophoneVolumeUnitMeterWidget.UpdateVolumeUnitMeter //  // @ game+0x43bab4
};

// Class TslGameUI.TslGameOptionTabContentsWidget
// Size: 0x458 (Inherited: 0x420)  [layout: KHOP]
struct UTslGameOptionTabContentsWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UClass* SubTabWidgetClass; // 0x428(0x08)
	struct FUmgWidgetBinder_WidgetSwitcher SubTabContentsSwitcher_Binder; // 0x430(0x28)
};

// Class TslGameUI.TslGameOptionTabLabelWidget
// Size: 0x4c8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionTabLabelWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct FUmgWidgetBinder_Gerneral LabelButton_Binder; // 0x428(0x20)
	struct FUmgWidgetBinder_TextBlock LabelText_Binder; // 0x448(0x20)
	struct FUmgWidgetBinder_HorizontalBox HighlightDecoration_Binder; // 0x468(0x28)
	struct FLinearColor LabelTextNormalColor; // 0x490(0x10)
	struct FLinearColor LabelTextHighlightColor; // 0x4a0(0x10)
	struct UBorder* Active_Border; // 0x4b0(0x08)
	char pad_4B8[0x10]; // 0x4b8(0x10)

	void OnLabelButtonClicked(); // Function TslGameUI.TslGameOptionTabLabelWidget.OnLabelButtonClicked //  // @ game+0xe48d7cc
};

// Class TslGameUI.TslGameOptionTabSelectorWidget
// Size: 0x458 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionTabSelectorWidget : UUmgBaseWidget {
	struct UClass* TabLabelWidgetClass; // 0x420(0x08)
	struct FUmgWidgetBinder_HorizontalBox TabLabelWidgetsBox_Binder; // 0x428(0x28)
	float LabelIntervalWidth; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// Class TslGameUI.TslGameOptionTooltipWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGameOptionTooltipWidget : UUmgBaseWidget {
	struct UTextBlock* OptionTooltipText; // 0x420(0x08)
	struct FVector2D PositionOffset; // 0x428(0x08)
	struct UWidget* CurrPosBaseWidget; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
};

// Class TslGameUI.TslGameOptionWidget
// Size: 0xc30 (Inherited: 0x470)  [layout: KHOP]
struct UTslGameOptionWidget : UBlockInputUserWidget {
	char pad_470[0x2d0]; // 0x470(0x2d0)
	SetProperty ItemWidgetsChanged; // 0x740(0x50)
	SetProperty ItemWidgetsNotInDefault; // 0x790(0x50)
	char pad_7E0[0xa8]; // 0x7e0(0xa8)
	struct UWidget* LastInputBlockerInvoker; // 0x888(0x08)
	struct FString SelfIdentityNameString; // 0x890(0x10)
	struct UClass* TabContentsWidgetClass; // 0x8a0(0x08)
	struct UClass* SubTabLabelWidgetClass; // 0x8a8(0x08)
	struct FUmgWidgetBinder_Gerneral TabSelectorWidget_Binder; // 0x8b0(0x20)
	struct FUmgWidgetBinder_Gerneral SubTabSelectorWidget_Binder; // 0x8d0(0x20)
	struct FUmgWidgetBinder_WidgetSwitcher TabContentsSwitcher_Binder; // 0x8f0(0x28)
	struct FUmgWidgetBinder_Gerneral ApplyButton_Binder; // 0x918(0x20)
	struct FUmgWidgetBinder_Gerneral CancelButton_Binder; // 0x938(0x20)
	struct FUmgWidgetBinder_TextBlock CancelButtonText_Binder; // 0x958(0x20)
	struct FUmgWidgetBinder_Gerneral DefaultButton_Binder; // 0x978(0x20)
	struct FUmgWidgetBinder_TextBlock DefaultButtonText_Binder; // 0x998(0x20)
	struct FUmgWidgetBinder_Gerneral GamepadApplyButton_Binder; // 0x9b8(0x20)
	struct FUmgWidgetBinder_Gerneral GamepadCancelButton_Binder; // 0x9d8(0x20)
	struct UWidget* GamepadResetOneItemKeyGuide; // 0x9f8(0x08)
	struct FUmgWidgetBinder_Gerneral GamepadDefaultButton_Binder; // 0xa00(0x20)
	struct UTslGamepadMultipleKeyIconWidget* GamepadDefaultButtonKeyIcon; // 0xa20(0x08)
	struct FUmgWidgetBinder_Gerneral DetailWidget_Binder; // 0xa28(0x20)
	struct FUmgWidgetBinder_Gerneral InputBlocker_Binder; // 0xa48(0x20)
	struct FLinearColor CancelButtonNormalColor; // 0xa68(0x10)
	struct FLinearColor CancelButtonHoverColor; // 0xa78(0x10)
	struct FLinearColor CancelButtonPressColor; // 0xa88(0x10)
	struct FLinearColor DefaultButtonNormalColor; // 0xa98(0x10)
	struct FLinearColor DefaultButtonHoverColor; // 0xaa8(0x10)
	struct FLinearColor DefaultButtonPressColor; // 0xab8(0x10)
	struct FLinearColor CloudButtonNormalColor; // 0xac8(0x10)
	struct FLinearColor CloudButtonHoverColor; // 0xad8(0x10)
	struct FLinearColor CloudButtonPressColor; // 0xae8(0x10)
	struct FLinearColor IngameDimColor; // 0xaf8(0x10)
	struct FLinearColor OutameDimColor; // 0xb08(0x10)
	struct FText UnsavedChangesPopupTitleText; // 0xb18(0x18)
	struct FText UnsavedChangesPopupMessageText; // 0xb30(0x18)
	struct U*7fa8406bd3* AnimShow; // 0xb48(0x08)
	struct UImage* ImageBg; // 0xb50(0x08)
	struct UTslGameOptionCategoryListWidget* CategoryListWidget; // 0xb58(0x08)
	struct UTslGameOptionCloudPopupWidget* CloudPopupWidget; // 0xb60(0x08)
	struct UTslGameOptionCloudRequestTimeoutCoverWidget* CloudRequestTimeoutCoverWidget; // 0xb68(0x08)
	struct UTslGameOptionTooltipWidget* CloudOptionTooltipWidget; // 0xb70(0x08)
	float CloudRequestWaitTime; // 0xb78(0x04)
	float CloudRequestMessageTime; // 0xb7c(0x04)
	DelegateProperty OnEscapeWidgetActionEvent; // 0xb80(0x10)
	DelegateProperty OnUnsavedChangesPopupButtonPressEvent; // 0xb90(0x10)
	DelegateProperty OnInputDeviceChangedPopupButtonPressEvent; // 0xba0(0x10)
	char pad_BB0[0x2c]; // 0xbb0(0x2c)
	float GamepadXHoldTime; // 0xbdc(0x04)
	struct TArray<enum class EOptionWidgetPanel> GamepadPanelOrder; // 0xbe0(0x10)
	char pad_BF0[0x8]; // 0xbf0(0x08)
	struct TArray<struct UTslGameOptionItemWidget*> CurrentTabItemWidgets; // 0xbf8(0x10)
	struct TArray<struct UTslGameOptionItemWidget*> CurrentSubTabItemWidgets; // 0xc08(0x10)
	char pad_C18[0x10]; // 0xc18(0x10)
	struct UWidget* KeyHintClearBind; // 0xc28(0x08)

	void OnGamepadXTap(); // Function TslGameUI.TslGameOptionWidget.OnGamepadXTap //  // @ game+0xe48cab4
	void HandleGamepadEnterOfChild(); // Function TslGameUI.TslGameOptionWidget.HandleGamepadEnterOfChild //  // @ game+0xdbd064c
	void OnApplyLoadedGameOptionPopupButtonPressed(); // Function TslGameUI.TslGameOptionWidget.OnApplyLoadedGameOptionPopupButtonPressed //  // @ game+0xe48997c
	void OnLoadCodePopupButtonPressed(); // Function TslGameUI.TslGameOptionWidget.OnLoadCodePopupButtonPressed //  // @ game+0xe48dabc
	void OnSliderItemWidgetUpdate(); // Function TslGameUI.TslGameOptionWidget.OnSliderItemWidgetUpdate //  // @ game+0xe491df8
	void HandleGamepadUpOfChild(); // Function TslGameUI.TslGameOptionWidget.HandleGamepadUpOfChild //  // @ game+0xfb00d8
	void OnEscape(); // Function TslGameUI.TslGameOptionWidget.OnEscape //  // @ game+0xe48c900
	void OnKeyBinderItemWidgetUpdate(); // Function TslGameUI.TslGameOptionWidget.OnKeyBinderItemWidgetUpdate //  // @ game+0xe48d040
	void OnApplyButtonClicked(); // Function TslGameUI.TslGameOptionWidget.OnApplyButtonClicked //  // @ game+0xe489950
	void OnUnsavedChangesPopupButtonPressed(); // Function TslGameUI.TslGameOptionWidget.OnUnsavedChangesPopupButtonPressed //  // @ game+0xe494c88
	void OnCancelButtonClicked(); // Function TslGameUI.TslGameOptionWidget.OnCancelButtonClicked //  // @ game+0xe48a490
	void PlayHoverMediumSoundInLobby(); // Function TslGameUI.TslGameOptionWidget.PlayHoverMediumSoundInLobby //  // @ game+0xdbdbae0
	void OnStepperItemWidgetUpdate(); // Function TslGameUI.TslGameOptionWidget.OnStepperItemWidgetUpdate //  // @ game+0xe48c15c
	void HandleGamepadDownOfChild(); // Function TslGameUI.TslGameOptionWidget.HandleGamepadDownOfChild //  // @ game+0xdbd0598
	void OnCreateCodeResultPopupButtonPressed(); // Function TslGameUI.TslGameOptionWidget.OnCreateCodeResultPopupButtonPressed //  // @ game+0xe48b018
	void OnSubTabLabelSelected(); // Function TslGameUI.TslGameOptionWidget.OnSubTabLabelSelected //  // @ game+0xe4934ec
	void OnDropDownListItemWidgetUpdate(); // Function TslGameUI.TslGameOptionWidget.OnDropDownListItemWidgetUpdate //  // @ game+0xe48c15c
	void HandleGamepadLeftOfChild(); // Function TslGameUI.TslGameOptionWidget.HandleGamepadLeftOfChild //  // @ game+0xe195334
	void OnDefaultButtonClicked(); // Function TslGameUI.TslGameOptionWidget.OnDefaultButtonClicked //  // @ game+0xe48c044
	void HandleGamepadRightOfChild(); // Function TslGameUI.TslGameOptionWidget.HandleGamepadRightOfChild //  // @ game+0xe195294
	void OnTabLabelSelected(); // Function TslGameUI.TslGameOptionWidget.OnTabLabelSelected //  // @ game+0xe4935b8
};

// Class TslGameUI.TslDisplayOptionWidget
// Size: 0xc90 (Inherited: 0xc30)  [layout: LECH - offset chi la uoc luong]
struct UTslDisplayOptionWidget : UTslGameOptionWidget {
	char pad_C30[0x8]; // 0xc30(0x08)
	struct FMulticastDelegate OnDisplaySettingFinished; // 0xc38(0x10)
	char pad_C48[0x8]; // 0xc48(0x08)
	struct UImage* IconImage; // 0xc50(0x08)
	struct UWidgetSwitcher* BtnsWidgetSwitcher; // 0xc58(0x08)
	struct UButton* BtnsKM_0_Button; // 0xc60(0x08)
	struct UButton* BtnsKM_1_Button; // 0xc68(0x08)
	struct U*7fa8406bd3* Anim_Appear; // 0xc70(0x08)
	struct U*7fa8406bd3* Anim_DisAppear; // 0xc78(0x08)
	struct UTslGameOptionItemSliderWidget* BrightnessSliderWidget; // 0xc80(0x08)
	char pad_C88[0x8]; // 0xc88(0x08)

	void SaveBrightnessValue(); // Function TslGameUI.TslDisplayOptionWidget.SaveBrightnessValue //  // @ game+0xe496cf0
	void ResetBrightnessValue(); // Function TslGameUI.TslDisplayOptionWidget.ResetBrightnessValue //  // @ game+0xe496c18
};

// Class TslGameUI.TslGamepadHudWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGamepadHudWidget : UUmgBaseWidget {
	struct UCanvasPanel* PanelCharacter; // 0x420(0x08)
	struct UTslReloadingGuideWidget* WidgetReloadingGuide; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void NotifyReloadingNeed(); // Function TslGameUI.TslGamepadHudWidget.NotifyReloadingNeed //  // @ game+0xe489640
	void NotifyWeaponUnarmed(); // Function TslGameUI.TslGamepadHudWidget.NotifyWeaponUnarmed //  // @ game+0x11687b8
};

// Class TslGameUI.TslTabSelectorWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTabSelectorWidget : UUmgBaseWidget {
	struct TArray<struct UTslTabSelectorContentsWidget*> TabWidgets; // 0x420(0x10)
	struct FUmgWidgetBinder_Gerneral TabHorizontalBox_Binder; // 0x430(0x20)
	struct FMulticastDelegate OnTabRotated; // 0x450(0x10)
	DelegateProperty OnTabSelectorUpdated; // 0x460(0x10)
	char pad_470[0x8]; // 0x470(0x08)

	void RotateLeft(); // Function TslGameUI.TslTabSelectorWidget.RotateLeft //  // @ game+0xe496c90
	void UpdateIndexTo(); // Function TslGameUI.TslTabSelectorWidget.UpdateIndexTo //  // @ game+0xe498b70
	void RotateRight(); // Function TslGameUI.TslTabSelectorWidget.RotateRight //  // @ game+0xe496cd4
};

// Class TslGameUI.TslGamepadKeyGuideActionWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UTslGamepadKeyGuideActionWidget : UUmgBaseWidget {
	struct UTslGamepadKeyTapIconWidget* WidgetKeyTapIcon; // 0x420(0x08)
	struct UImage* ImageCombinationIcon1; // 0x428(0x08)
	struct UImage* ImageCombinationIcon2; // 0x430(0x08)
	struct UTslGamepadKeyIconWidget* WidgetFirstKeyIcon; // 0x438(0x08)
	struct UTslGamepadKeyIconWidget* WidgetSecondKeyIcon; // 0x440(0x08)
	struct UTslFlowingTextWidget* ActionNameFlowText; // 0x448(0x08)
};

// Class TslGameUI.TslGamepadKeyGuideActionListWidget
// Size: 0x590 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGamepadKeyGuideActionListWidget : UUmgBaseWidget {
	char pad_420[0x18]; // 0x420(0x18)
	struct FKey ActionKey; // 0x438(0x18)
	char pad_450[0x18]; // 0x450(0x18)
	struct UVerticalBox* ListActionList; // 0x468(0x08)
	struct UVerticalBox* ListActionListBg; // 0x470(0x08)
	struct UBorder* BorderKeyIcon; // 0x478(0x08)
	struct USizeBox* SizeboxKeyIcon; // 0x480(0x08)
	struct UBorder* BorderKeyIconAdd; // 0x488(0x08)
	struct UImage* ImageKeyActionListFocus; // 0x490(0x08)
	struct UImage* ImageKeyActionListFocusSmall; // 0x498(0x08)
	struct USpacer* SpacerKeyAction; // 0x4a0(0x08)
	struct UWidgetSwitcher* SwitcherKeyIcon; // 0x4a8(0x08)
	struct UTslGamepadKeyIconWidget* WidgetKeyIcon; // 0x4b0(0x08)
	struct UTslGamepadKeyIconWidget* WidgetKeyIconAdd; // 0x4b8(0x08)
	struct UImage* ImageKeyIconBg; // 0x4c0(0x08)
	struct UImage* ImageKeyIconAddBg; // 0x4c8(0x08)
	struct U*7fa8406bd3* AnimChangeLoop; // 0x4d0(0x08)
	struct U*7fa8406bd3* AnimEmptyLoop; // 0x4d8(0x08)
	struct U*7fa8406bd3* AnimFocusBlink; // 0x4e0(0x08)
	struct FLinearColor CustomableBGColor; // 0x4e8(0x10)
	struct FLinearColor UnCustomableBGColor; // 0x4f8(0x10)
	struct FLinearColor ChangedBGColor; // 0x508(0x10)
	struct FLinearColor EmptyBGColor; // 0x518(0x10)
	struct FLinearColor PopTitleBGColor; // 0x528(0x10)
	struct FLinearColor BlackTextColor; // 0x538(0x10)
	struct FLinearColor WhiteTextColor; // 0x548(0x10)
	struct FLinearColor DefaultColorInEditor; // 0x558(0x10)
	struct FLinearColor DisabledColor; // 0x568(0x10)
	struct FLinearColor EmptyAnimationEndColor; // 0x578(0x10)
	float HorizontalPaddingForEmptyActionInComboTab; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
};

// Class TslGameUI.TslGamepadKeyGuideContentsWidget
// Size: 0x768 (Inherited: 0x420)  [layout: KHOP]
struct UTslGamepadKeyGuideContentsWidget : UUmgBaseWidget {
	char pad_420[0x18]; // 0x420(0x18)
	struct UTslGamepadKeyGuideActionListWidget* FocusedActionListWidget; // 0x438(0x08)
	char pad_440[0x158]; // 0x440(0x158)
	struct TArray<struct UTslGamepadKeyGuideActionListWidget*> LeftActionListWidgetArray; // 0x598(0x10)
	struct TArray<struct UTslGamepadKeyGuideActionListWidget*> CenterActionListWidgetArray; // 0x5a8(0x10)
	struct TArray<struct UTslGamepadKeyGuideActionListWidget*> RightActionListWidgetArray; // 0x5b8(0x10)
	char pad_5C8[0x50]; // 0x5c8(0x50)
	struct UDataTable* EssentialActionTable; // 0x618(0x08)
	struct UDataTable* OverWriteTable; // 0x620(0x08)
	struct UDataTable* ConflictActionTable; // 0x628(0x08)
	struct UTextBlock* TextTypeTitle; // 0x630(0x08)
	struct UHorizontalBox* ListKeyGuide; // 0x638(0x08)
	struct UWidgetSwitcher* SwitcherGamePad; // 0x640(0x08)
	struct UTslGamepadKeyIconWidget* WidgetGuideLeftTrigger; // 0x648(0x08)
	struct UTslGamepadKeyIconWidget* WidgetGuideRightTrigger; // 0x650(0x08)
	struct FName RightStickAxisWidgetName; // 0x658(0x08)
	struct FName LeftStickAxisWidgetName; // 0x660(0x08)
	struct UVerticalBox* ListLeftShoulderAndTrigger; // 0x668(0x08)
	struct UVerticalBox* ListDpad; // 0x670(0x08)
	struct UVerticalBox* ListLeftStick; // 0x678(0x08)
	struct UVerticalBox* ListSpecial; // 0x680(0x08)
	struct UVerticalBox* ListRightBumperAndTrigger; // 0x688(0x08)
	struct UVerticalBox* ListFace; // 0x690(0x08)
	struct UVerticalBox* ListRightStick; // 0x698(0x08)
	struct UScrollBox* ScrollboxLayoutLeft; // 0x6a0(0x08)
	struct UScrollBox* ScrollboxLayoutRight; // 0x6a8(0x08)
	struct TMap<struct FKey, struct FTabStringArray> CustomableKeys; // 0x6b0(0x50)
	struct UTextBlock* Title_Text; // 0x700(0x08)
	char pad_708[0x10]; // 0x708(0x10)
	struct FStringAssetReference ActionListWidgetReference; // 0x718(0x10)
	char pad_728[0x10]; // 0x728(0x10)
	struct FText PresetTitleText; // 0x738(0x18)
	struct FText PresetTitleTextPS5; // 0x750(0x18)
};

// Class TslGameUI.TslGamepadKeyBindingWidget
// Size: 0x560 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslGamepadKeyBindingWidget : UBlockInputUserWidget {
	struct UTslGamepadKeyGuideActionListWidget* WidgetSelectedAction; // 0x470(0x08)
	struct UScrollBox* ScrollboxActionList; // 0x478(0x08)
	struct U*7fa8406bd3* AnimPopupEmerging; // 0x480(0x08)
	struct UTextBlock* TextTooltip; // 0x488(0x08)
	struct USizeBox* SizeboxTooltip; // 0x490(0x08)
	struct UDataTable* UnavailableActionAndKeyTable; // 0x498(0x08)
	struct UDataTable* ConflictActionTable; // 0x4a0(0x08)
	char pad_4A8[0x20]; // 0x4a8(0x20)
	struct UTslGamepadKeyGuideContentsWidget* ContentsWidget; // 0x4c8(0x08)
	struct FStringClassReference ActionListWidgetReference; // 0x4d0(0x10)
	struct TMap<struct FKey, int32> KeyPriorityForSort; // 0x4e0(0x50)
	char pad_530[0x8]; // 0x530(0x08)
	struct UTslGamepadKeyGuideActionListWidget* SelectedActionWidgetForSwitching; // 0x538(0x08)
	struct TArray<struct UTslGamepadKeyGuideActionListWidget*> ActionListItems; // 0x540(0x10)
	char pad_550[0x8]; // 0x550(0x08)
	float OffsetY; // 0x558(0x04)
	char pad_55C[0x4]; // 0x55c(0x04)

	void MoveUp(); // Function TslGameUI.TslGamepadKeyBindingWidget.MoveUp //  // @ game+0xe489588
	void OnScrollActionList(); // Function TslGameUI.TslGamepadKeyBindingWidget.OnScrollActionList //  // @ game+0xe490954
	void SwitchKeyBindingWithFocusedActionList(); // Function TslGameUI.TslGamepadKeyBindingWidget.SwitchKeyBindingWithFocusedActionList //  // @ game+0xe497b98
	void EmptyKeyBinding(); // Function TslGameUI.TslGamepadKeyBindingWidget.EmptyKeyBinding //  // @ game+0xe47e944
	void Cancel(); // Function TslGameUI.TslGamepadKeyBindingWidget.Cancel //  // @ game+0xe47d9b0
	void HideWidget(); // Function TslGameUI.TslGamepadKeyBindingWidget.HideWidget //  // @ game+0xe489304
	void OnQuickScrollingUp(); // Function TslGameUI.TslGamepadKeyBindingWidget.OnQuickScrollingUp //  // @ game+0xe48f98c
	void OnQuickScrollingDown(); // Function TslGameUI.TslGamepadKeyBindingWidget.OnQuickScrollingDown //  // @ game+0xe48f978
	void MoveDown(); // Function TslGameUI.TslGamepadKeyBindingWidget.MoveDown //  // @ game+0xe48954c
	void SetToDefault(); // Function TslGameUI.TslGamepadKeyBindingWidget.SetToDefault //  // @ game+0xe496f68
};

// Class TslGameUI.TslGamepadKeyGuideStepperPopupWidget
// Size: 0x4d0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslGamepadKeyGuideStepperPopupWidget : UBlockInputUserWidget {
	char pad_470[0x18]; // 0x470(0x18)
	struct TArray<struct FText> PresetOptionTextArray; // 0x488(0x10)
	float SelectedOpactiy; // 0x498(0x04)
	float NotSelectedOpacity; // 0x49c(0x04)
	struct UHorizontalBox* ListOptionTab; // 0x4a0(0x08)
	struct UTextBlock* TextOption; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimPopupEmerging; // 0x4b0(0x08)
	struct UUserWidget* WidgetGamepadButtonOKIcon; // 0x4b8(0x08)
	struct UUserWidget* WidgetGamepadButtonCancelIcon; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)

	void OnGamepadRight(); // Function TslGameUI.TslGamepadKeyGuideStepperPopupWidget.OnGamepadRight //  // @ game+0xdbdbab4
	void OnGamepadLeft(); // Function TslGameUI.TslGamepadKeyGuideStepperPopupWidget.OnGamepadLeft //  // @ game+0x11fadb0
	void OnGamepadB(); // Function TslGameUI.TslGamepadKeyGuideStepperPopupWidget.OnGamepadB //  // @ game+0xdafe600
	void OnGamepadA(); // Function TslGameUI.TslGamepadKeyGuideStepperPopupWidget.OnGamepadA //  // @ game+0x6d0c20
};

// Class TslGameUI.TslGamepadKeyGuideWidget
// Size: 0x5e8 (Inherited: 0x470)  [layout: KHOP]
struct UTslGamepadKeyGuideWidget : UBlockInputUserWidget {
	struct UTslGamepadKeyGuideContentsWidget* WidgetKeyGuide; // 0x470(0x08)
	struct UHorizontalBox* ListSelectButton; // 0x478(0x08)
	struct UHorizontalBox* ListGamepadApplyButton; // 0x480(0x08)
	struct UHorizontalBox* ListDefault; // 0x488(0x08)
	struct UHorizontalBox* ListComboButton; // 0x490(0x08)
	struct UTextBlock* Title_Text; // 0x498(0x08)
	struct UWidgetSwitcher* SwitcherTabSelector; // 0x4a0(0x08)
	struct UWidgetSwitcher* SwitcherToggleComboText; // 0x4a8(0x08)
	struct FText UnsavedChangesPopupTitleText; // 0x4b0(0x18)
	struct FText UnsavedChangesPopupMessageText; // 0x4c8(0x18)
	struct FText NotBoundRequiredActionExistsTitle; // 0x4e0(0x18)
	struct FText NotBoundRequiredActionExistsDesc; // 0x4f8(0x18)
	struct FText ConfirmApplyChangesPopupTitleText; // 0x510(0x18)
	struct FText ConfirmApplyChangesPopupMessageText; // 0x528(0x18)
	struct FText ConfirmApplyChangesPopupMessageTextPS5; // 0x540(0x18)
	struct FText KeyBindingTitleText; // 0x558(0x18)
	struct FText KeyBindingTitleTextPS5; // 0x570(0x18)
	char pad_588[0x8]; // 0x588(0x08)
	struct UTslTabSelectorWidget* TabSelectorWidget; // 0x590(0x08)
	DelegateProperty OnUnsavedChangesPopupButtonPressEvent; // 0x598(0x10)
	DelegateProperty OnRotatePresetRightWithUnsavedChangesEvent; // 0x5a8(0x10)
	DelegateProperty OnRotatePresetLeftWithUnsavedChangesEvent; // 0x5b8(0x10)
	DelegateProperty OnRequiredActionNotBoundEvent; // 0x5c8(0x10)
	DelegateProperty OnConfirmApplyButtonPressEvent; // 0x5d8(0x10)

	void OnScrollActionList(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnScrollActionList //  // @ game+0xe4912c8
	void DefaultPresetSelected(); // Function TslGameUI.TslGamepadKeyGuideWidget.DefaultPresetSelected //  // @ game+0xe47dc50
	void RotatePresetRight(); // Function TslGameUI.TslGamepadKeyGuideWidget.RotatePresetRight //  // @ game+0xe496cc0
	void RotatePresetLeft(); // Function TslGameUI.TslGamepadKeyGuideWidget.RotatePresetLeft //  // @ game+0xe496cac
	void RotateCategoryLeft(); // Function TslGameUI.TslGamepadKeyGuideWidget.RotateCategoryLeft //  // @ game+0xe496c68
	void OnRightPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnRightPressed //  // @ game+0xe48fc30
	void OnRotateLeftUnsavedChangesPopupButtonPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnRotateLeftUnsavedChangesPopupButtonPressed //  // @ game+0xe48fc44
	void OnComfirmApplyChnagesPopupButtonPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnComfirmApplyChnagesPopupButtonPressed //  // @ game+0xe48ada8
	void OnRotateRightUnsavedChangesPopupButtonPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnRotateRightUnsavedChangesPopupButtonPressed //  // @ game+0xe48fcbc
	void OnUpPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnUpPressed //  // @ game+0xe494d7c
	void OnActionSelected(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnActionSelected //  // @ game+0xe489694
	void OnCancelButtonClicked(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnCancelButtonClicked //  // @ game+0xe48a4a4
	void OnRequiredActionNotBoundEventButtonPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnRequiredActionNotBoundEventButtonPressed //  // @ game+0xdaa89b0
	void OnLeftPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnLeftPressed //  // @ game+0xe48da94
	void RotateCategoryRight(); // Function TslGameUI.TslGamepadKeyGuideWidget.RotateCategoryRight //  // @ game+0xe496c7c
	void OnUnsavedChangesPopupButtonPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnUnsavedChangesPopupButtonPressed //  // @ game+0xe494d00
	void UpdateCategory(); // Function TslGameUI.TslGamepadKeyGuideWidget.UpdateCategory //  // @ game+0xe498758
	void ResetToBasePreset(); // Function TslGameUI.TslGamepadKeyGuideWidget.ResetToBasePreset //  // @ game+0xe496c2c
	void OnDownPressed(); // Function TslGameUI.TslGamepadKeyGuideWidget.OnDownPressed //  // @ game+0xe48c134
	void ToggleComboTab(); // Function TslGameUI.TslGamepadKeyGuideWidget.ToggleComboTab //  // @ game+0xe497c28
	void TryApplySetting(); // Function TslGameUI.TslGamepadKeyGuideWidget.TryApplySetting //  // @ game+0xe497c98
};

// Class TslGameUI.TslGamepadKeyTapIconWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslGamepadKeyTapIconWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* TapSwitcher; // 0x420(0x08)
};

// Class TslGameUI.TslGroupItemListWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslGroupItemListWidget : UUmgBaseWidget {
	struct UVerticalBox* ListItems; // 0x420(0x08)
	bool bIsCategoryGroup; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct FText CategoryName; // 0x430(0x18)
	struct UClass* ItemSlotClass; // 0x448(0x08)
	int32 WidgetReserveCount; // 0x450(0x04)
	bool bCacheFirstInnerSlot; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	int32 InnerSlotReserveCount; // 0x458(0x04)
	bool bUseHideWhenEmpty; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct UTextBlock* TextCategory; // 0x460(0x08)
	struct UPanelWidget* ListGroup; // 0x468(0x08)
	struct UGridPanel* PanelDot; // 0x470(0x08)
	struct FTslItemSlotCache ItemSlotCache; // 0x478(0x18)
	char pad_490[0x8]; // 0x490(0x08)
};

// Class TslGameUI.TslHealItemWheelSubWidget
// Size: 0x4e8 (Inherited: 0x4d0)  [layout: KHOP]
struct UTslHealItemWheelSubWidget : UTslItemWheelSubWidget {
	struct FText CannotUseItemText; // 0x4d0(0x18)

	void DoAction(); // Function TslGameUI.TslHealItemWheelSubWidget.DoAction //  // @ game+0xe47e758
	void GetStackCount(); // Function TslGameUI.TslHealItemWheelSubWidget.GetStackCount //  // @ game+0xe47f040
};

// Class TslGameUI.TslHealItemWheelWidget
// Size: 0x5a8 (Inherited: 0x5a8)  [layout: KHOP]
struct UTslHealItemWheelWidget : UTslItemWheelWidget {
};

// Class TslGameUI.TslHealthGaugeWidget
// Size: 0x468 (Inherited: 0x448)  [layout: KHOP]
struct UTslHealthGaugeWidget : UTslHealthGaugeBaseWidget {
	struct FLinearColor DefaultColor; // 0x448(0x10)
	struct UBorder* GuageBody; // 0x458(0x08)
	struct U*7fa8406bd3* WarningAnim; // 0x460(0x08)
};

// Class TslGameUI.TslHighlightRenderOption
// Size: 0x3c0 (Inherited: 0x330)  [layout: KHOP]
struct UTslHighlightRenderOption : UTslUserWidget {
	struct UUserWidget* TopWidget; // 0x330(0x08)
	struct FString HighlightTargetName; // 0x338(0x10)
	int32 Idx_Resolutions; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FString ResolutionsStr; // 0x350(0x10)
	int32 Idx_Quality; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct FString QualityStr; // 0x368(0x10)
	bool bOnHighlightInfo; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FString FileName; // 0x380(0x10)
	struct FString DirectoryPath; // 0x390(0x10)
	struct FString AbsoluteFilePath; // 0x3a0(0x10)
	struct TArray<struct FString> FileNames; // 0x3b0(0x10)

	void InitExportInfo(); // Function TslGameUI.TslHighlightRenderOption.InitExportInfo //  // @ game+0xe489348
	void ResolutionsUp(); // Function TslGameUI.TslHighlightRenderOption.ResolutionsUp //  // @ game+0xe496c54
	void ResolutionsDown(); // Function TslGameUI.TslHighlightRenderOption.ResolutionsDown //  // @ game+0xe496c40
	void InitShow(); // Function TslGameUI.TslHighlightRenderOption.InitShow //  // @ game+0x43bab4
	void ToggleHighlightInfoOnOff(); // Function TslGameUI.TslHighlightRenderOption.ToggleHighlightInfoOnOff //  // @ game+0xe497c50
	void QualityUp(); // Function TslGameUI.TslHighlightRenderOption.QualityUp //  // @ game+0xe49674c
	void QualityDown(); // Function TslGameUI.TslHighlightRenderOption.QualityDown //  // @ game+0xe496738
};

// Class TslGameUI.TslHitNotifyWidget
// Size: 0x480 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslHitNotifyWidget : UUmgBaseWidget {
	struct UCanvasPanel* CanvasPanel; // 0x420(0x08)
	struct UImage* HitImage; // 0x428(0x08)
	struct U*7fa8406bd3* FadeOutAnim; // 0x430(0x08)
	int32 BloodSpotWidgetCount; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UClass* BloodSpotWidgetClass; // 0x440(0x08)
	struct UMaterialInterface* ScreenMaterial; // 0x448(0x08)
	struct UAkAudioEvent* HitNotifyManSound; // 0x450(0x08)
	struct UAkAudioEvent* HitNotifyWomanSound; // 0x458(0x08)
	struct TArray<struct UUserWidget*> BloodSpotWidgets; // 0x460(0x10)
	struct AActor* CachedViewTarget; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)

	void OnHitNotify(); // Function TslGameUI.TslHitNotifyWidget.OnHitNotify //  // @ game+0xcce69c
};

// Class TslGameUI.TslHudMainWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslHudMainWidget : UHudMainBaseWidget {
	struct UCanvasPanel* HideOnObserverSpectating; // 0x420(0x08)
	float ObserverSpectatingUpPosOffset; // 0x428(0x04)
	float ObserverSpectatingDownPosOffset; // 0x42c(0x04)
	char pad_430[0x40]; // 0x430(0x40)

	void OnKey_MapCharacterIconShowIconOnly(); // Function TslGameUI.TslHudMainWidget.OnKey_MapCharacterIconShowIconOnly //  // @ game+0xe48d648
	void OnKey_ToggleThrowableItemWheelPressed(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleThrowableItemWheelPressed //  // @ game+0xe48d704
	void OnKey_ShowPackageItemList(); // Function TslGameUI.TslHudMainWidget.OnKey_ShowPackageItemList //  // @ game+0x107b12c
	void OnKey_MapCharacterIconShowNameOnly(); // Function TslGameUI.TslHudMainWidget.OnKey_MapCharacterIconShowNameOnly //  // @ game+0xe48d660
	void OnKey_ToggleOption(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleOption //  // @ game+0xe48d6f0
	void OnKey_ToggleHealItemWheelPressed(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleHealItemWheelPressed //  // @ game+0xe48d6c8
	void OnKey_ToggleThrowableItemWheelReleased(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleThrowableItemWheelReleased //  // @ game+0xe48d718
	void OnKey_ToggleEmoteWheelPressed(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleEmoteWheelPressed //  // @ game+0xe48d6a0
	void OnKey_ToggleHealItemWheelReleased(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleHealItemWheelReleased //  // @ game+0xe48d6dc
	void ShowReplayTimeLine(); // Function TslGameUI.TslHudMainWidget.ShowReplayTimeLine //  // @ game+0xe497af4
	void HideMapForReplay(); // Function TslGameUI.TslHudMainWidget.HideMapForReplay //  // @ game+0xe4892dc
	void OnKey_SystemMenuOrEscape(); // Function TslGameUI.TslHudMainWidget.OnKey_SystemMenuOrEscape //  // @ game+0xe48d68c
	void OnKey_MapCharacterIconShowBoth(); // Function TslGameUI.TslHudMainWidget.OnKey_MapCharacterIconShowBoth //  // @ game+0xe48d630
	void OnKey_ReplayMenuOrEscape(); // Function TslGameUI.TslHudMainWidget.OnKey_ReplayMenuOrEscape //  // @ game+0xe48d678
	void OnKey_ToggleEmoteWheelReleased(); // Function TslGameUI.TslHudMainWidget.OnKey_ToggleEmoteWheelReleased //  // @ game+0xe48d6b4
};

// Class TslGameUI.TslHUDSetting
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslHUDSetting : UObject {
	int32 PingCautionThreshold; // 0x30(0x04)
	int32 PingWarningThreshold; // 0x34(0x04)
	int32 PingVariationThreshold; // 0x38(0x04)
	uint32 PacketLossCautionThreshold; // 0x3c(0x04)
	uint32 PacketLossWarningThreshold; // 0x40(0x04)
	bool bShowNetDebugIcon; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class TslGameUI.TslIBRMatchResultMatchEOMDetailStatsEntryWidget
// Size: 0x378 (Inherited: 0x330)  [layout: KHOP]
struct UTslIBRMatchResultMatchEOMDetailStatsEntryWidget : UTslUserWidget {
	struct UTextBlock* TextStatsName; // 0x330(0x08)
	struct UTextBlock* TextPlayer1Stats; // 0x338(0x08)
	struct UTextBlock* TextPlayer2Stats; // 0x340(0x08)
	struct UTextBlock* TextPlayer3Stats; // 0x348(0x08)
	struct UTextBlock* TextPlayer4Stats; // 0x350(0x08)
	struct FLinearColor DefaultColor; // 0x358(0x10)
	struct FLinearColor MyColor; // 0x368(0x10)
};

// Class TslGameUI.TslIBRMatchResultMatchEOMDetailStatsWidget
// Size: 0x3d0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultMatchEOMDetailStatsWidget : UTslUserWidget {
	struct UTextBlock* TextStatsTitle; // 0x330(0x08)
	struct UTextBlock* TextPlayerName1; // 0x338(0x08)
	struct UTextBlock* TextPlayerName2; // 0x340(0x08)
	struct UTextBlock* TextPlayerName3; // 0x348(0x08)
	struct UTextBlock* TextPlayerName4; // 0x350(0x08)
	struct UTslUserPlatformImageWidget* PlatformIconPlayerName1; // 0x358(0x08)
	struct UTslUserPlatformImageWidget* PlatformIconPlayerName2; // 0x360(0x08)
	struct UTslUserPlatformImageWidget* PlatformIconPlayerName3; // 0x368(0x08)
	struct UTslUserPlatformImageWidget* PlatformIconPlayerName4; // 0x370(0x08)
	struct UPanelWidget* ListStatsEntries; // 0x378(0x08)
	struct UTslCommonButton* ButtonClose; // 0x380(0x08)
	struct UClass* StatsEntryWidgetClass; // 0x388(0x08)
	struct FText TitleText; // 0x390(0x18)
	struct FLinearColor DefaultColor; // 0x3a8(0x10)
	struct FLinearColor MyColor; // 0x3b8(0x10)
	int32 PlayerNameMaxLength; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)

	void HandleCloseButtonHovered(); // Function TslGameUI.TslIBRMatchResultMatchEOMDetailStatsWidget.HandleCloseButtonHovered //  // @ game+0xe47f108
	void HandleCloseButtonClicked(); // Function TslGameUI.TslIBRMatchResultMatchEOMDetailStatsWidget.HandleCloseButtonClicked //  // @ game+0xe47f0f4
};

// Class TslGameUI.TslIBRMatchResultMatchEOMStatsEntryWidget
// Size: 0x3b0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultMatchEOMStatsEntryWidget : UTslUserWidget {
	struct UTextBlock* TextPlayerName; // 0x330(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x338(0x08)
	struct UImage* ImageStatBestIcon1; // 0x340(0x08)
	struct UTextBlock* TextStatValue1; // 0x348(0x08)
	struct UWidget* SpacerStatValue1; // 0x350(0x08)
	struct UImage* ImageStatBestIcon2; // 0x358(0x08)
	struct UTextBlock* TextStatValue2; // 0x360(0x08)
	struct UWidget* SpacerStatValue2; // 0x368(0x08)
	struct UImage* ImageStatBestIcon3; // 0x370(0x08)
	struct UTextBlock* TextStatValue3; // 0x378(0x08)
	struct UWidget* SpacerStatValue3; // 0x380(0x08)
	struct FLinearColor DefaultColor; // 0x388(0x10)
	struct FLinearColor MyColor; // 0x398(0x10)
	int32 PlayerNameMaxLength; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
};

// Class TslGameUI.TslIBRMatchResultMatchEOMStatsWidget
// Size: 0x3e0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultMatchEOMStatsWidget : UTslUserWidget {
	char pad_330[0x70]; // 0x330(0x70)
	struct UScrollBox* ScrollboxEntryList; // 0x3a0(0x08)
	struct UPanelWidget* ListStatsEntries; // 0x3a8(0x08)
	struct UClass* StatsTeamEntryWidgetClass; // 0x3b0(0x08)
	int32 GamepadColumnCount; // 0x3b8(0x04)
	int32 MinEntryCount; // 0x3bc(0x04)
	struct TArray<struct UTslIBRMatchResultMatchEOMStatsTeamEntryWidget*> EntryWidgetList; // 0x3c0(0x10)
	char pad_3D0[0x10]; // 0x3d0(0x10)
};

// Class TslGameUI.TslIBRMatchResultTeamEOMStatsEntryWidget
// Size: 0x360 (Inherited: 0x330)  [layout: KHOP]
struct UTslIBRMatchResultTeamEOMStatsEntryWidget : UTslUserWidget {
	struct UTextBlock* TextStatsName; // 0x330(0x08)
	struct UTextBlock* TextStatsValue; // 0x338(0x08)
	struct FLinearColor DefaultColor; // 0x340(0x10)
	struct FLinearColor HighlightedColor; // 0x350(0x10)
};

// Class TslGameUI.TslIBRMatchResultTeamEOMStatsWidget
// Size: 0x378 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslIBRMatchResultTeamEOMStatsWidget : UTslUserWidget {
	struct UPanelWidget* ListPersonalStatsEntries; // 0x330(0x08)
	struct UScrollBox* ScrollboxPersonalStats; // 0x338(0x08)
	struct UWidget* ImageConsolePersonalOutline; // 0x340(0x08)
	struct UPanelWidget* ListTeamStatsEntries; // 0x348(0x08)
	struct UScrollBox* ScrollboxTeamStats; // 0x350(0x08)
	struct UWidget* ImageConsoleTeamOutline; // 0x358(0x08)
	struct UClass* StatsEntryWidgetClass; // 0x360(0x08)
	float ScrollSpeedMultiplier; // 0x368(0x04)
	int32 MaxVisibleEntryCount; // 0x36c(0x04)
	char pad_370[0x8]; // 0x370(0x08)

	void HandleScroll(); // Function TslGameUI.TslIBRMatchResultTeamEOMStatsWidget.HandleScroll //  // @ game+0xe47fe8c
};

// Class TslGameUI.*bccbe07b05
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*bccbe07b05 : U*96becd27f1 {
	char pad_30[0x58]; // 0x30(0x58)

	void HandleMatchResultFlowTypeChanged(); // Function TslGameUI.*bccbe07b05.HandleMatchResultFlowTypeChanged //  // @ game+0xe47f514
};

// Class TslGameUI.TslInGameMenuButton
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslInGameMenuButton : UUmgBaseWidget {
	struct FTslStickInputHelper NaviInputHelper; // 0x420(0x14)
	char pad_434[0x4]; // 0x434(0x04)

	void NotifyOnGamepadDown(); // Function TslGameUI.TslInGameMenuButton.NotifyOnGamepadDown //  // @ game+0x43bab4
	void NotifyOnGamepadUp(); // Function TslGameUI.TslInGameMenuButton.NotifyOnGamepadUp //  // @ game+0x43bab4
	void NotifyOnFocusReceived(); // Function TslGameUI.TslInGameMenuButton.NotifyOnFocusReceived //  // @ game+0x43bab4
	void NotifyOnGamepadA(); // Function TslGameUI.TslInGameMenuButton.NotifyOnGamepadA //  // @ game+0x43bab4
	void NotifyOnGamepadB(); // Function TslGameUI.TslInGameMenuButton.NotifyOnGamepadB //  // @ game+0x43bab4
};

// Class TslGameUI.TslInGameReplayMenu
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslInGameReplayMenu : UUmgBaseWidget {
	struct ATslHUD* HUD; // 0x420(0x08)

	void HidePopupWidgetForReplay(); // Function TslGameUI.TslInGameReplayMenu.HidePopupWidgetForReplay //  // @ game+0xe4892f0
};

// Class TslGameUI.TslInventoryWidget
// Size: 0x6b8 (Inherited: 0x628)  [layout: LECH - offset chi la uoc luong]
struct UTslInventoryWidget : UTslInventoryBaseWidget {
	struct UTslTooltipWidget* CharacterToolTipWidget; // 0x628(0x08)
	struct UTslKeyboardAndMouseIconWidget* InventoryRadioMessageKeyguide; // 0x630(0x08)
	struct USizeBox* VicinitySizeBox; // 0x638(0x08)
	struct USizeBox* BackpackSizeBox; // 0x640(0x08)
	struct USizeBox* CharacterSizeBox; // 0x648(0x08)
	struct USizeBox* WeaponSizeBox; // 0x650(0x08)
	struct UWidget* PanelRadioMessageGuideGroup; // 0x658(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImageRadioMessage; // 0x660(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImageMessageRadial; // 0x668(0x08)
	struct U*7fa8406bd3* InventoryFadeIn; // 0x670(0x08)
	struct U*7fa8406bd3* VicinityTitleOff; // 0x678(0x08)
	struct U*7fa8406bd3* VicinityTitleOn; // 0x680(0x08)
	struct U*7fa8406bd3* VicinityTitleOffBlinking; // 0x688(0x08)
	float MinViewportRatio; // 0x690(0x04)
	bool bWillDropToVicinity; // 0x694(0x01)
	char pad_695[0x3]; // 0x695(0x03)
	struct FActionOrAxis ActionsAndAxisMessageRadial; // 0x698(0x10)
	float CharacterSizeBoxReducedWidth; // 0x6a8(0x04)
	float DefaultItemListReducedWidth; // 0x6ac(0x04)
	float SizeBoxWidthMultiplier; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)

	void OnChildSlotFocusVicinity(); // Function TslGameUI.TslInventoryWidget.OnChildSlotFocusVicinity //  // @ game+0xe48a6a8
	void OnStopItemStackCountHandling(); // Function TslGameUI.TslInventoryWidget.OnStopItemStackCountHandling //  // @ game+0xe4934d8
	void OnChildSlotFocusBackpack(); // Function TslGameUI.TslInventoryWidget.OnChildSlotFocusBackpack //  // @ game+0xe48a550
	void ApplySkin(); // Function TslGameUI.TslInventoryWidget.ApplySkin //  // @ game+0xe47d994
	void ClearSkin(); // Function TslGameUI.TslInventoryWidget.ClearSkin //  // @ game+0xe47dadc
	void DropFocusedItemSlot(); // Function TslGameUI.TslInventoryWidget.DropFocusedItemSlot //  // @ game+0xe47e88c
	void HandleFocusedItemSlotByHalf(); // Function TslGameUI.TslInventoryWidget.HandleFocusedItemSlotByHalf //  // @ game+0xe47f1ac
	void OnStartItemStackCountHandling(); // Function TslGameUI.TslInventoryWidget.OnStartItemStackCountHandling //  // @ game+0xe4934b0
	void OnGameUserSettingApplied(); // Function TslGameUI.TslInventoryWidget.OnGameUserSettingApplied //  // @ game+0xe48ca64
	void PickupOrUseFocusedItem(); // Function TslGameUI.TslInventoryWidget.PickupOrUseFocusedItem //  // @ game+0xe4965e0
};

// Class TslGameUI.TslStoreWidget
// Size: 0x730 (Inherited: 0x6b8)  [layout: LECH - offset chi la uoc luong]
struct UTslStoreWidget : UTslInventoryWidget {
	char pad_6B8[0x10]; // 0x6b8(0x10)
	struct FText SystemMessage; // 0x6c8(0x18)
	struct UTslMarketShopNotify* NotifyHead; // 0x6e0(0x08)
	struct UTslMarketShopNotify* NotifyBackpack; // 0x6e8(0x08)
	struct UTslMarketShopNotify* NotifyTorsoArmor; // 0x6f0(0x08)
	struct UButton* ButtonClose; // 0x6f8(0x08)
	struct UTslMarketCoinWidget* CoinWidget; // 0x700(0x08)
	struct UTslMarketShopNameWidget* ShopName; // 0x708(0x08)
	struct U*7fa8406bd3* AnimOpen; // 0x710(0x08)
	struct UTslMarketMessageWidget* MessageWidget; // 0x718(0x08)
	struct UTslMarketShopItemListWidget* MarketShopWidget; // 0x720(0x08)
	char pad_728[0x8]; // 0x728(0x08)

	void OnClickedCloseWidget(); // Function TslGameUI.TslStoreWidget.OnClickedCloseWidget //  // @ game+0xe48a88c
	void OnCloseButtonHovered(); // Function TslGameUI.TslStoreWidget.OnCloseButtonHovered //  // @ game+0xe47f108
};

// Class TslGameUI.TslStoreWidget_Gamepad
// Size: 0x7c8 (Inherited: 0x760)  [layout: LECH - offset chi la uoc luong]
struct UTslStoreWidget_Gamepad : UTslInventoryWidget_GamePad {
	struct FText SystemMessage; // 0x760(0x18)
	struct UTslMarketShopNotify* NotifyHead; // 0x778(0x08)
	struct UTslMarketShopNotify* NotifyBackpack; // 0x780(0x08)
	struct UTslMarketShopNotify* NotifyTorsoArmor; // 0x788(0x08)
	struct UTslMarketCoinWidget* CoinWidget; // 0x790(0x08)
	struct U*7fa8406bd3* AnimOpen; // 0x798(0x08)
	struct UTslMarketShopNameWidget* ShopName; // 0x7a0(0x08)
	struct UTslMarketMessageWidget* MessageWidget; // 0x7a8(0x08)
	struct UTslMarketShopItemListWidget* MarketShopWidget; // 0x7b0(0x08)
	struct UWidgetSwitcher* KeyGuideSwitcher; // 0x7b8(0x08)
	char pad_7C0[0x8]; // 0x7c0(0x08)

	void OnChildSlotFocusBackpack(); // Function TslGameUI.TslStoreWidget_Gamepad.OnChildSlotFocusBackpack //  // @ game+0xe48a550
};

// Class TslGameUI.TslInventoryCapacityWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslInventoryCapacityWidget : UUmgBaseWidget {
	struct FUmgWidgetBinder_Image CapacityImage_Binder; // 0x420(0x28)
	struct FUmgWidgetBinder_Image FeedbackImage_Binder; // 0x448(0x28)
	float GameMaxSpace; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct AInventory* InventoryCached; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)

	void OnInventoryUpdateEvent(); // Function TslGameUI.TslInventoryCapacityWidget.OnInventoryUpdateEvent //  // @ game+0xe48cf58
	void RefreshTargetInventory(); // Function TslGameUI.TslInventoryCapacityWidget.RefreshTargetInventory //  // @ game+0xe4967ec
};

// Class TslGameUI.TslInventoryItemListWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslInventoryItemListWidget : UUmgBaseWidget {
};

// Class TslGameUI.TslEquipmentSlotBaseWidget
// Size: 0x6e0 (Inherited: 0x520)  [layout: KHOP]
struct UTslEquipmentSlotBaseWidget : UTslInventorySlotWidget {
	char pad_520[0x20]; // 0x520(0x20)
	struct FUmgWidgetBinder_CanvasPanel CanvasPanel_Binder; // 0x540(0x28)
	struct FUmgWidgetBinder_Border BackgroundSlot_Binder; // 0x568(0x30)
	struct FUmgWidgetBinder_Gerneral IconBlock_Binder; // 0x598(0x20)
	struct FUmgWidgetBinder_Image Icon_Binder; // 0x5b8(0x28)
	struct FUmgWidgetBinder_VerticalBox DurabilityGaugeBlock_Binder; // 0x5e0(0x28)
	struct FUmgWidgetBinder_Gerneral DurabilityIconBlock_Binder; // 0x608(0x20)
	struct FUmgWidgetBinder_Image DestroyedItemTint_Binder; // 0x628(0x28)
	struct FUmgWidgetBinder_TextBlock DurabilityNumber_Binder; // 0x650(0x20)
	struct FUmgWidgetBinder_WidgetSwitcher DurabilityIconSwitcher_Binder; // 0x670(0x28)
	struct FLinearColor DurabilityNumberDamagedColor; // 0x698(0x10)
	struct FLinearColor DurabilityNumberNormalColor; // 0x6a8(0x10)
	struct FLinearColor BlockedIconColor; // 0x6b8(0x10)
	struct UMaterialInstanceDynamic* DurabilityMaterial; // 0x6c8(0x08)
	struct U*6c7f0ccc53* EquipableItem; // 0x6d0(0x08)
	struct UTslInventoryRadioMessageWidget* RadioMessage; // 0x6d8(0x08)
};

// Class TslGameUI.TslEquipmentSlotWidget
// Size: 0x728 (Inherited: 0x6e0)  [layout: KHOP]
struct UTslEquipmentSlotWidget : UTslEquipmentSlotBaseWidget {
	struct FUmgWidgetBinder_Image DurabilityGauge_Binder; // 0x6e0(0x28)
	struct FUmgWidgetBinder_Gerneral ItemIconLayer_Binder; // 0x708(0x20)
};

// Class TslGameUI.TslEquipmentSlotWidget_Gamepad
// Size: 0x750 (Inherited: 0x6e0)  [layout: LECH - offset chi la uoc luong]
struct UTslEquipmentSlotWidget_Gamepad : UTslEquipmentSlotBaseWidget {
	float XHoldTime; // 0x6e0(0x04)
	struct FLinearColor SelectBgFocusColor; // 0x6e4(0x10)
	struct FLinearColor GradientBgNormalColor; // 0x6f4(0x10)
	struct FLinearColor GradientBgLinkColor; // 0x704(0x10)
	struct FLinearColor SelectBgLinkColor; // 0x714(0x10)
	char pad_724[0x4]; // 0x724(0x04)
	struct UProgressBar* Pgb_Durability; // 0x728(0x08)
	struct UImage* Img_GradientBg; // 0x730(0x08)
	struct UImage* Img_SelectBg; // 0x738(0x08)
	char pad_740[0x10]; // 0x740(0x10)

	void OnReleasedX(); // Function TslGameUI.TslEquipmentSlotWidget_Gamepad.OnReleasedX //  // @ game+0x1131c8c
	void OnPressedX(); // Function TslGameUI.TslEquipmentSlotWidget_Gamepad.OnPressedX //  // @ game+0x8d8648
	void OnReleasedLThumb(); // Function TslGameUI.TslEquipmentSlotWidget_Gamepad.OnReleasedLThumb //  // @ game+0x11f1e70
	void OnPressedLThumb(); // Function TslGameUI.TslEquipmentSlotWidget_Gamepad.OnPressedLThumb //  // @ game+0x119c3f0
};

// Class TslGameUI.TslWeaponAttachmentSlotBaseWidget
// Size: 0x670 (Inherited: 0x520)  [layout: KHOP]
struct UTslWeaponAttachmentSlotBaseWidget : UTslInventorySlotWidget {
	char pad_520[0x10]; // 0x520(0x10)
	TScriptInterface<struct U*db70ebf624> OwnerWeaponEquipmentSlotWidget; // 0x530(0x10)
	char pad_540[0x80]; // 0x540(0x80)
	struct UWeaponItem* WeaponItem; // 0x5c0(0x08)
	char pad_5C8[0x10]; // 0x5c8(0x10)
	struct FUmgWidgetBinder_VerticalBox AttachmentIconBlock_Binder; // 0x5d8(0x28)
	struct FUmgWidgetBinder_Image AttachmentIcon_Binder; // 0x600(0x28)
	struct FUmgWidgetBinder_Border AttachmentSlotBackground_Binder; // 0x628(0x30)
	enum class EWeaponAttachmentSlotID AttachmentSlotID; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct UTslInventoryRadioMessageWidget* RadioMessage; // 0x660(0x08)
	struct AInventory* Inventory; // 0x668(0x08)
};

// Class TslGameUI.TslWeaponAttachmentSlotWidget
// Size: 0x6b0 (Inherited: 0x670)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponAttachmentSlotWidget : UTslWeaponAttachmentSlotBaseWidget {
	struct FUmgWidgetBinder_CanvasPanel CanvasPanel_Binder; // 0x670(0x28)
	struct UImage* Recommend_Image; // 0x698(0x08)
	struct UImage* RecommendBG_Image; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)
};

// Class TslGameUI.TslWeaponAttachmentSlotWidget_Gamepad
// Size: 0x710 (Inherited: 0x670)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponAttachmentSlotWidget_Gamepad : UTslWeaponAttachmentSlotBaseWidget {
	struct FUmgWidgetBinder_VerticalBox SizeBox_Binder; // 0x670(0x28)
	struct UImage* Img_Arrow; // 0x698(0x08)
	struct UImage* Img_Bg; // 0x6a0(0x08)
	struct UImage* Img_Icon; // 0x6a8(0x08)
	struct UImage* Img_Focus_Bg; // 0x6b0(0x08)
	struct U*7fa8406bd3* Anim_Arrow; // 0x6b8(0x08)
	float HoldDuration; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct UTexture2D* ImgBgDisabledTexture; // 0x6c8(0x08)
	struct UTexture2D* ImgBgNormalTexture; // 0x6d0(0x08)
	struct UTexture2D* ImgBgLinkTexture; // 0x6d8(0x08)
	struct UTexture2D* ImgBgWeakLinkTexture; // 0x6e0(0x08)
	struct FLinearColor ImgFocusBgFocusColor; // 0x6e8(0x10)
	struct FLinearColor ImgFocusBgSelfPutColor; // 0x6f8(0x10)
	char pad_708[0x8]; // 0x708(0x08)

	void GetCurrentArrowAnimationTime(); // Function TslGameUI.TslWeaponAttachmentSlotWidget_Gamepad.GetCurrentArrowAnimationTime //  // @ game+0xe47ef60
	void PlayArrowAnimation(); // Function TslGameUI.TslWeaponAttachmentSlotWidget_Gamepad.PlayArrowAnimation //  // @ game+0xe4965f4
	void OnInputLThumbReleased(); // Function TslGameUI.TslWeaponAttachmentSlotWidget_Gamepad.OnInputLThumbReleased //  // @ game+0x1172194
	void OnInputLThumbPressed(); // Function TslGameUI.TslWeaponAttachmentSlotWidget_Gamepad.OnInputLThumbPressed //  // @ game+0x111badc
};

// Class TslGameUI.TslTacPackAttachmentSlotWidget
// Size: 0x810 (Inherited: 0x6b0)  [layout: LECH - offset chi la uoc luong]
struct UTslTacPackAttachmentSlotWidget : UTslWeaponAttachmentSlotWidget {
	struct FUmgWidgetBinder_Image CapacityImage_Binder; // 0x6a8(0x28)
	struct FUmgWidgetBinder_Image FeedbackImage_Binder; // 0x6d0(0x28)
	struct FUmgWidgetBinder_Image DurabilityGauge_Binder; // 0x6f8(0x28)
	struct FUmgWidgetBinder_Image DestroyedItemTint_Binder; // 0x720(0x28)
	struct FUmgWidgetBinder_WidgetSwitcher DurabilityIconSwitcher_Binder; // 0x748(0x28)
	struct FUmgWidgetBinder_Gerneral DurabilityBox_Binder; // 0x770(0x20)
	struct FUmgWidgetBinder_TextBlock DurabilityNumber_Binder; // 0x790(0x20)
	struct FLinearColor DurabilityNumberDamagedColor; // 0x7b0(0x10)
	struct FLinearColor DurabilityNumberNormalColor; // 0x7c0(0x10)
	struct UTextBlock* TextStackCount; // 0x7d0(0x08)
	struct UMaterialInstanceDynamic* DurabilityGaugeMaterial; // 0x7d8(0x08)
	struct UGridPanel* PanelUseInfo; // 0x7e0(0x08)
	struct UImage* ImageUseInfoBg; // 0x7e8(0x08)
	struct UImage* ImageUseInfoProgress; // 0x7f0(0x08)
	struct UImage* ImageUseInfoDisabled; // 0x7f8(0x08)
	struct UTextBlock* TextUseInfo; // 0x800(0x08)
	char pad_808[0x8]; // 0x808(0x08)
};

// Class TslGameUI.TslTacPackAttachmentSlotWidget_Gamepad
// Size: 0x870 (Inherited: 0x710)  [layout: KHOP]
struct UTslTacPackAttachmentSlotWidget_Gamepad : UTslWeaponAttachmentSlotWidget_Gamepad {
	struct FUmgWidgetBinder_Image CapacityImage_Binder; // 0x710(0x28)
	struct FUmgWidgetBinder_Image FeedbackImage_Binder; // 0x738(0x28)
	struct FUmgWidgetBinder_Image DestroyedItemTint_Binder; // 0x760(0x28)
	struct FUmgWidgetBinder_WidgetSwitcher DurabilityIconSwitcher_Binder; // 0x788(0x28)
	struct FUmgWidgetBinder_Gerneral DurabilityBox_Binder; // 0x7b0(0x20)
	struct FUmgWidgetBinder_TextBlock DurabilityNumber_Binder; // 0x7d0(0x20)
	struct FLinearColor DurabilityNumberDamagedColor; // 0x7f0(0x10)
	struct FLinearColor DurabilityNumberNormalColor; // 0x800(0x10)
	struct UMaterialInstanceDynamic* DurabilityGaugeMaterial; // 0x810(0x08)
	struct FUmgWidgetBinder_Gerneral DurabilityImagBox_Binder; // 0x818(0x20)
	struct UTextBlock* TextStackCount; // 0x838(0x08)
	struct UProgressBar* Pgb_Durability; // 0x840(0x08)
	struct UGridPanel* PanelUseInfo; // 0x848(0x08)
	struct UImage* ImageUseInfoBg; // 0x850(0x08)
	struct UImage* ImageUseInfoProgress; // 0x858(0x08)
	struct UImage* ImageUseInfoDisabled; // 0x860(0x08)
	struct UTextBlock* TextUseInfo; // 0x868(0x08)
};

// Class TslGameUI.TslMarketWeaponAttachmentSlotWidget_Gamepad
// Size: 0x750 (Inherited: 0x710)  [layout: KHOP]
struct UTslMarketWeaponAttachmentSlotWidget_Gamepad : UTslWeaponAttachmentSlotWidget_Gamepad {
	struct FLinearColor ImgBgNormalColor; // 0x710(0x10)
	struct FLinearColor ImgBgLinkColor; // 0x720(0x10)
	struct FLinearColor ImgBgDisableColor; // 0x730(0x10)
	struct FLinearColor ImgBgSelfPutColor; // 0x740(0x10)
};

// Class TslGameUI.TslWeaponBodySlotWidget_Gamepad
// Size: 0x750 (Inherited: 0x748)  [layout: KHOP]
struct UTslWeaponBodySlotWidget_Gamepad : UTslWeaponBodySlotBaseWidget {
	struct UHorizontalBox* AmmoCount_HorizontalBox; // 0x748(0x08)

	void OnPressedUIWidgetInputY(); // Function TslGameUI.TslWeaponBodySlotWidget_Gamepad.OnPressedUIWidgetInputY //  // @ game+0x1135944
};

// Class TslGameUI.TslWeaponSlotEquipmentBaseWidget
// Size: 0x7d0 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponSlotEquipmentBaseWidget : UTslInventorySlotWidget {
	char pad_520[0x10]; // 0x520(0x10)
	int32 SlotIndex; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	TScriptInterface<struct U*745e8fdaf4> OwnerWeaponEquipmentWidget; // 0x538(0x10)
	char pad_548[0x98]; // 0x548(0x98)
	struct TArray<TScriptInterface<struct U*129b31aac9>> AttachmentSlotList; // 0x5e0(0x10)
	TScriptInterface<struct U*129b31aac9> MuzzleInterface; // 0x5f0(0x10)
	TScriptInterface<struct U*129b31aac9> LowerRailInterface; // 0x600(0x10)
	TScriptInterface<struct U*129b31aac9> MagazineInterface; // 0x610(0x10)
	TScriptInterface<struct U*129b31aac9> CantedSightInterface; // 0x620(0x10)
	TScriptInterface<struct U*129b31aac9> UpperRailInterface; // 0x630(0x10)
	TScriptInterface<struct U*129b31aac9> StockInterface; // 0x640(0x10)
	char pad_650[0x8]; // 0x650(0x08)
	TScriptInterface<struct U*129b31aac9> TacPackSlot1Interface; // 0x658(0x10)
	TScriptInterface<struct U*129b31aac9> TacPackSlot2Interface; // 0x668(0x10)
	TScriptInterface<struct U*129b31aac9> TacPackSlot3Interface; // 0x678(0x10)
	char pad_688[0x8]; // 0x688(0x08)
	struct FUmgWidgetBinder_HorizontalBox AttachmentSlotHorizontalBox_Binder; // 0x690(0x28)
	struct FUmgWidgetBinder_HorizontalBox TacPackAttachmentSlotHorizontalBox_Binder; // 0x6b8(0x28)
	struct FUmgWidgetBinder_CanvasPanel AttachmentSlotPanel_Binder; // 0x6e0(0x28)
	struct FUmgWidgetBinder_Border BackgroundSlot_Binder; // 0x708(0x30)
	struct UTextureRenderTarget2D* RenderTargetTexture; // 0x738(0x08)
	struct UClass* ItemStudioClass; // 0x740(0x08)
	int32 MaxWeaponNameLength; // 0x748(0x04)
	char pad_74C[0x4]; // 0x74c(0x04)
	struct UMaterialInterface* PrimaryMaterialInterface; // 0x750(0x08)
	struct UMaterialInterface* SecondaryMaterialInterface; // 0x758(0x08)
	struct UMaterialInterface* ThrowableOrMeleeMaterialInterface; // 0x760(0x08)
	struct UTslInventoryRadioMessageWidget* RadioMessage; // 0x768(0x08)
	struct UUserWidget* ChildFocusWidget; // 0x770(0x08)
	struct AInventory* Inventory; // 0x778(0x08)
	struct AItemStudio* WeaponStudio; // 0x780(0x08)
	struct UMaterialInstanceDynamic* WeaponCaptureMaterial; // 0x788(0x08)
	struct U*6c7f0ccc53* EquipableItem; // 0x790(0x08)
	struct UWeaponItem* WeaponItem; // 0x798(0x08)
	struct UThrowableItem* ThrowableItem; // 0x7a0(0x08)
	struct ATslWeapon_Gun* Weapon_Gun; // 0x7a8(0x08)
	struct U*6c7f0ccc53* DragDroppingEquipableItem; // 0x7b0(0x08)
	struct UWeaponItem* DragDroppingWeaponItem; // 0x7b8(0x08)
	struct UThrowableItem* DragDroppingThrowableItem; // 0x7c0(0x08)
	char pad_7C8[0x8]; // 0x7c8(0x08)

	void OnAttachmentFocusedEvent(); // Function TslGameUI.TslWeaponSlotEquipmentBaseWidget.OnAttachmentFocusedEvent //  // @ game+0xe489d44
	void OnPressedUIWidgetInputY(); // Function TslGameUI.TslWeaponSlotEquipmentBaseWidget.OnPressedUIWidgetInputY //  // @ game+0x1135944
	void OnEnterSlotFunction(); // Function TslGameUI.TslWeaponSlotEquipmentBaseWidget.OnEnterSlotFunction //  // @ game+0xe48c574
	void OnAttachmentChangedFunction(); // Function TslGameUI.TslWeaponSlotEquipmentBaseWidget.OnAttachmentChangedFunction //  // @ game+0xe4899f4
	void OnLeaveSlotFunction(); // Function TslGameUI.TslWeaponSlotEquipmentBaseWidget.OnLeaveSlotFunction //  // @ game+0xe48d938
};

// Class TslGameUI.TslWeaponSlotEquipmentWidget
// Size: 0x7d0 (Inherited: 0x7d0)  [layout: KHOP]
struct UTslWeaponSlotEquipmentWidget : UTslWeaponSlotEquipmentBaseWidget {
};

// Class TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad
// Size: 0x880 (Inherited: 0x7d0)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponSlotEquipmentWidget_Gamepad : UTslWeaponSlotEquipmentBaseWidget {
	struct USizeBox* MainSizeBox; // 0x7c8(0x08)
	struct UImage* Img_SelectGradientBg; // 0x7d0(0x08)
	struct FVector2D MainSizeBoxMainSize; // 0x7d8(0x08)
	struct FVector2D MainSizeBoxSubSize; // 0x7e0(0x08)
	struct FMargin SelectBgMainMargin; // 0x7e8(0x10)
	struct FMargin SelectBgSubMargin; // 0x7f8(0x10)
	struct FVector2D MainSizeBoxTacticalSize; // 0x808(0x08)
	struct FMargin RadioMessageMainMargin; // 0x810(0x10)
	struct FMargin RadioMessageSubMargin; // 0x820(0x10)
	struct FLinearColor ImgBgFocusColor; // 0x830(0x10)
	struct FLinearColor ImgBgLinkColor; // 0x840(0x10)
	float DefaultHoldTime; // 0x850(0x04)
	float DefaultTapTime; // 0x854(0x04)
	bool bIsTypeMain; // 0x858(0x01)
	char pad_859[0x3]; // 0x859(0x03)
	float WeaponNameWrapTextAt; // 0x85c(0x04)
	char pad_860[0x20]; // 0x860(0x20)

	void OnWidgetInputAReleased(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.OnWidgetInputAReleased //  // @ game+0x11dc0fc
	void ReleasedDropInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.ReleasedDropInput //  // @ game+0x120e838
	void OnWidgetInputL3Pressed(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.OnWidgetInputL3Pressed //  // @ game+0x11fbc48
	void PressedSwapInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.PressedSwapInput //  // @ game+0xe496634
	void ReleaseSwapInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.ReleaseSwapInput //  // @ game+0xe496964
	void PressedDetachInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.PressedDetachInput //  // @ game+0x9fb3f8
	void ReleaseDetachInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.ReleaseDetachInput //  // @ game+0x9fb040
	void PressedDropInput(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.PressedDropInput //  // @ game+0x120e87c
	void OnWidgetInputAPressed(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.OnWidgetInputAPressed //  // @ game+0x1177538
	void OnWidgetInputL3Released(); // Function TslGameUI.TslWeaponSlotEquipmentWidget_Gamepad.OnWidgetInputL3Released //  // @ game+0x1210e94
};

// Class TslGameUI.TslMarketWeaponSlotEquipmentWidget_Gamepad
// Size: 0x880 (Inherited: 0x880)  [layout: KHOP]
struct UTslMarketWeaponSlotEquipmentWidget_Gamepad : UTslWeaponSlotEquipmentWidget_Gamepad {
	struct UImage* ImageSelectGlowBg; // 0x878(0x08)
};

// Class TslGameUI.TslItemIconWidget
// Size: 0x4a0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslItemIconWidget : UUmgBaseWidget {
	struct UTexture* ItemIcon; // 0x420(0x08)
	float ItemIconRatio; // 0x428(0x04)
	struct FLinearColor NormalColor; // 0x42c(0x10)
	struct FLinearColor NoItemColor; // 0x43c(0x10)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UImage* IconImage; // 0x450(0x08)
	struct UTextBlock* ItemCountText; // 0x458(0x08)
	struct USizeBox* IconSizeBox; // 0x460(0x08)
	struct U*7fa8406bd3* UseAnim; // 0x468(0x08)
	struct U*7fa8406bd3* AddAnim; // 0x470(0x08)
	char pad_478[0x20]; // 0x478(0x20)
	bool bSoloModeOnly; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)

	void OnItemsReplicated(); // Function TslGameUI.TslItemIconWidget.OnItemsReplicated //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslAmmoIconWidget
// Size: 0x4b0 (Inherited: 0x4a0)  [layout: KHOP]
struct UTslAmmoIconWidget : UTslItemIconWidget {
	struct FName AmmoItemID; // 0x4a0(0x08)
	struct FName SimpleIconRefItemID; // 0x4a8(0x08)

	void OnItemsReplicated(); // Function TslGameUI.TslAmmoIconWidget.OnItemsReplicated //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslCastableItemIconWidget
// Size: 0x4b0 (Inherited: 0x4a0)  [layout: KHOP]
struct UTslCastableItemIconWidget : UTslItemIconWidget {
	enum class ECastableItemType CastableItemType; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FName IconRefItemID; // 0x4a8(0x08)

	void OnItemsReplicated(); // Function TslGameUI.TslCastableItemIconWidget.OnItemsReplicated //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslThrowableItemIconWidget
// Size: 0x4b8 (Inherited: 0x4a0)  [layout: KHOP]
struct UTslThrowableItemIconWidget : UTslItemIconWidget {
	struct TArray<struct UClass*> WeaponTypes; // 0x4a0(0x10)
	struct FName IconRefItemID; // 0x4b0(0x08)

	void OnItemsReplicated(); // Function TslGameUI.TslThrowableItemIconWidget.OnItemsReplicated //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslItemListBaseWidget
// Size: 0x680 (Inherited: 0x420)  [layout: KHOP]
struct UTslItemListBaseWidget : UUmgBaseWidget {
	char pad_420[0x58]; // 0x420(0x58)
	struct TArray<enum class EItemCategory> ExceptSlots; // 0x478(0x10)
	struct UClass* CachedDeathDropItemClass; // 0x488(0x08)
	char pad_490[0xb0]; // 0x490(0xb0)
	float MaxLayoutCount; // 0x540(0x04)
	char pad_544[0xc]; // 0x544(0x0c)
	struct UClass* ItemSlotClass; // 0x550(0x08)
	bool bSort; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	struct FSlateColor DefaultButtonColor; // 0x560(0x28)
	struct FSlateColor SelectButtonColor; // 0x588(0x28)
	float ItemListOuterHeight; // 0x5b0(0x04)
	float ItemListInnerHeight; // 0x5b4(0x04)
	float ItemListPaddingLeft; // 0x5b8(0x04)
	float ItemListPaddingRight; // 0x5bc(0x04)
	struct FText SectionTitleName; // 0x5c0(0x18)
	bool bVicinity; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	int32 MaxLoop; // 0x5dc(0x04)
	struct TArray<struct UTslItemSlotBaseWidget*> AddList; // 0x5e0(0x10)
	struct ANearbyInteractiveItemExplorer* ItemExplorer; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)
	TScriptInterface<struct U*02e1f6a3c2> container; // 0x600(0x10)
	struct TArray<TScriptInterface<struct U*2044b0f6ef>> PendingSpawnList; // 0x610(0x10)
	TScriptInterface<struct U*2044b0f6ef> EnteredSlot; // 0x620(0x10)
	struct UScrollBox* ScrollboxItemList; // 0x630(0x08)
	struct UVerticalBox* ListItems; // 0x638(0x08)
	struct UTextBlock* TextSectionTitle; // 0x640(0x08)
	struct UHorizontalBox* ListSortMenu; // 0x648(0x08)
	struct UButton* ButtonType; // 0x650(0x08)
	struct UTextBlock* TextType; // 0x658(0x08)
	struct UButton* ButtonTime; // 0x660(0x08)
	struct UTextBlock* TextTime; // 0x668(0x08)
	struct USizeBox* SizeboxItemListOuter; // 0x670(0x08)
	struct USizeBox* SizeboxItemListInner; // 0x678(0x08)

	void OnRefreshList(); // Function TslGameUI.TslItemListBaseWidget.OnRefreshList //  // @ game+0xdafe600
	void OnEquipmentUpdated(); // Function TslGameUI.TslItemListBaseWidget.OnEquipmentUpdated //  // @ game+0xe48c8d8
	void HandleOnEnterChildSlot(); // Function TslGameUI.TslItemListBaseWidget.HandleOnEnterChildSlot //  // @ game+0xe47fa44
	void HandleOnLeaveSlot(); // Function TslGameUI.TslItemListBaseWidget.HandleOnLeaveSlot //  // @ game+0xe47fca4
	void HandleOnDoSlotAction(); // Function TslGameUI.TslItemListBaseWidget.HandleOnDoSlotAction //  // @ game+0xe47fa28
	void OnClickBtn_Type(); // Function TslGameUI.TslItemListBaseWidget.OnClickBtn_Type //  // @ game+0xe1969f8
	void OnChangedStackCount(); // Function TslGameUI.TslItemListBaseWidget.OnChangedStackCount //  // @ game+0xe48a4b8
	void DelayOnChildWidgetRefreshFocus(); // Function TslGameUI.TslItemListBaseWidget.DelayOnChildWidgetRefreshFocus //  // @ game+0xe47dcc8
	void OnSlotFocus(); // Function TslGameUI.TslItemListBaseWidget.OnSlotFocus //  // @ game+0x10ea8e4
	void OnRepCharacterInventory(); // Function TslGameUI.TslItemListBaseWidget.OnRepCharacterInventory //  // @ game+0xe48fab0
	void IsEmptyList(); // Function TslGameUI.TslItemListBaseWidget.IsEmptyList //  // @ game+0xe48941c
	void HandleOnLeaveChildSlot(); // Function TslGameUI.TslItemListBaseWidget.HandleOnLeaveChildSlot //  // @ game+0xe47fb74
	void RefreshList(); // Function TslGameUI.TslItemListBaseWidget.RefreshList //  // @ game+0x120bdf4
	void OnRefreshFocus(); // Function TslGameUI.TslItemListBaseWidget.OnRefreshFocus //  // @ game+0xdbd078c
	void OnClickBtn_Time(); // Function TslGameUI.TslItemListBaseWidget.OnClickBtn_Time //  // @ game+0xbef700
	void OnInventoryUpdated(); // Function TslGameUI.TslItemListBaseWidget.OnInventoryUpdated //  // @ game+0xe48cfb8
	void RefreshItemExplorer(); // Function TslGameUI.TslItemListBaseWidget.RefreshItemExplorer //  // @ game+0xe496760
	void HandleOnEnterSlot(); // Function TslGameUI.TslItemListBaseWidget.HandleOnEnterSlot //  // @ game+0x1171e68
};

// Class TslGameUI.TslItemListWidget
// Size: 0x680 (Inherited: 0x680)  [layout: KHOP]
struct UTslItemListWidget : UTslItemListBaseWidget {
};

// Class TslGameUI.TslItemListWidget_Gamepad
// Size: 0x690 (Inherited: 0x680)  [layout: KHOP]
struct UTslItemListWidget_Gamepad : UTslItemListBaseWidget {
	char pad_680[0x4]; // 0x680(0x04)
	float GroundTitleHeight; // 0x684(0x04)
	float ItemPackageTitleHeight; // 0x688(0x04)
	float ItemSlotHeight; // 0x68c(0x04)
};

// Class TslGameUI.TslItemRequestWheelSubWidget
// Size: 0x4e8 (Inherited: 0x4d0)  [layout: KHOP]
struct UTslItemRequestWheelSubWidget : UTslItemWheelSubWidget {
	struct FText CannotUseItemText; // 0x4d0(0x18)

	void DoAction(); // Function TslGameUI.TslItemRequestWheelSubWidget.DoAction //  // @ game+0xe47e758
};

// Class TslGameUI.TslKeyboardWidget
// Size: 0x480 (Inherited: 0x420)  [layout: KHOP]
struct UTslKeyboardWidget : UUmgBaseWidget {
	struct UPanelWidget* PanelKeys; // 0x420(0x08)
	struct FKey CtrlUnrealKey; // 0x428(0x18)
	struct FKey AltUnrealKey; // 0x440(0x18)
	struct FKey ShiftUnrealKey; // 0x458(0x18)
	struct TArray<struct UTslKeyWidget*> KeysOnKeyboard; // 0x470(0x10)
};

// Class TslGameUI.TslKeyGuideContentWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslKeyGuideContentWidget : UUmgBaseWidget {
	struct UTextBlock* TextDisplayName; // 0x420(0x08)
	struct UHorizontalBox* ListKeyImage; // 0x428(0x08)
};

// Class TslGameUI.*3c8e27dc74
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*3c8e27dc74 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsObserver_FreeCam
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsObserver_FreeCam : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsObserver_PlayerList
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsObserver_PlayerList : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsObserver_FollowCam
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsObserver_FollowCam : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsObserver_SpectatorCam
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsObserver_SpectatorCam : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsObserver_WorldMapEnabled
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsObserver_WorldMapEnabled : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsWaitingToStart
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsWaitingToStart : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsOnFoot
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsOnFoot : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsDriver
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsDriver : U*336a8ab80b {
};

// Class TslGameUI.*ba4b04c914
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ba4b04c914 : U*336a8ab80b {
};

// Class TslGameUI.*a7a7754786
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a7a7754786 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HideMortar
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HideMortar : U*336a8ab80b {
};

// Class TslGameUI.*812261fb03
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*812261fb03 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsPassenger
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsPassenger : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsDBNOInVehicle
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsDBNOInVehicle : U*336a8ab80b {
};

// Class TslGameUI.*0c1373f687
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*0c1373f687 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsHoldingWeaponGun
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsHoldingWeaponGun : U*336a8ab80b {
};

// Class TslGameUI.*4f2d0c1b78
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4f2d0c1b78 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsADS
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsADS : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsAiming
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsAiming : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsADS_IronSight
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsADS_IronSight : U*336a8ab80b {
};

// Class TslGameUI.*793872cf02
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*793872cf02 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanAim
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanAim : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanThrow
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanThrow : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanDriverQuickThrow
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanDriverQuickThrow : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanDriverMeleeOrSidePad
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanDriverMeleeOrSidePad : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanPlant
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanPlant : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanThrowMelee
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanThrowMelee : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanStrikeMelee
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanStrikeMelee : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsHoldingThrowableWeapon
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsHoldingThrowableWeapon : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsHoldingMeleeWeapon
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsHoldingMeleeWeapon : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsThrowingMelee
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsThrowingMelee : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsArmed
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsArmed : U*336a8ab80b {
};

// Class TslGameUI.*7de4ef1bd8
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*7de4ef1bd8 : U*336a8ab80b {
};

// Class TslGameUI.*4927ea6d0b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4927ea6d0b : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_NeedsHeal
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_NeedsHeal : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsSwimming
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsSwimming : U*336a8ab80b {
};

// Class TslGameUI.*bf0e1996aa
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*bf0e1996aa : U*336a8ab80b {
};

// Class TslGameUI.*8ace089ecf
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*8ace089ecf : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsSpectating
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsSpectating : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsSpectatingMyTeam
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsSpectatingMyTeam : U*336a8ab80b {
};

// Class TslGameUI.*f725178b81
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f725178b81 : U*336a8ab80b {
};

// Class TslGameUI.*4db06f62f5
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4db06f62f5 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsWorldMapEnabled
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsWorldMapEnabled : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsWorldMapOn
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsWorldMapOn : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsFreefalling
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsFreefalling : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsParachuting
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsParachuting : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanPeek
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanPeek : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanSwitchToObserver
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanSwitchToObserver : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HasAppliableVehicleSkin
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HasAppliableVehicleSkin : U*336a8ab80b {
};

// Class TslGameUI.*585b735062
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*585b735062 : U*336a8ab80b {
};

// Class TslGameUI.*8363f47b38
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*8363f47b38 : U*336a8ab80b {
};

// Class TslGameUI.*6af8b8d25e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6af8b8d25e : U*336a8ab80b {
};

// Class TslGameUI.*9014db2729
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9014db2729 : U*336a8ab80b {
};

// Class TslGameUI.*62d7bd4dad
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*62d7bd4dad : U*336a8ab80b {
};

// Class TslGameUI.*cbedf45273
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*cbedf45273 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HideStanceCrouch
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HideStanceCrouch : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HideStanceProne
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HideStanceProne : U*336a8ab80b {
};

// Class TslGameUI.*539edda447
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*539edda447 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HideInTeamParkour
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HideInTeamParkour : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanSwitchFOV
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanSwitchFOV : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanMoveOtherSeat
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanMoveOtherSeat : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsMotorGlider
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsMotorGlider : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsBicycle
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsBicycle : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HideFloatingVehicle
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HideFloatingVehicle : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanHorn
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanHorn : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanAirControl
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanAirControl : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanDriverShooting
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanDriverShooting : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanGroundPitch
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanGroundPitch : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanBoost
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanBoost : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanPlayStuntEmotes
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanPlayStuntEmotes : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsWheelMenuOn
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsWheelMenuOn : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsSoloMatch
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsSoloMatch : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsTeamMatch
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsTeamMatch : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsMinimapExtended
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsMinimapExtended : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsTraumabag
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsTraumabag : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsUsingAscender
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsUsingAscender : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsUsingZipLine
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsUsingZipLine : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsUsingZipLineAndWaitingToStart
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsUsingZipLineAndWaitingToStart : U*336a8ab80b {
};

// Class TslGameUI.*47c97db8c5
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*47c97db8c5 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanVehicleAction
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanVehicleAction : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsRepairKit
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsRepairKit : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsFlightTrailEnabled
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsFlightTrailEnabled : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsJerryCan
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsJerryCan : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_HasJerryCanInEquipment
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_HasJerryCanInEquipment : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsGasolineVehicle
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsGasolineVehicle : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_CanTeamParkourReady
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_CanTeamParkourReady : U*336a8ab80b {
};

// Class TslGameUI.*78cf808dc3
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*78cf808dc3 : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsDriverRubberBoat
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsDriverRubberBoat : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsRubberBoat
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsRubberBoat : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsDivingTrailOn
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsDivingTrailOn : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsDivingTrailOff
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsDivingTrailOff : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintChecker_IsCamoNet
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslKeyHintChecker_IsCamoNet : U*336a8ab80b {
};

// Class TslGameUI.TslKeyHintContentWidget
// Size: 0x540 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslKeyHintContentWidget : UUmgBaseWidget {
	struct UClass* KeyImageWidgetClass; // 0x420(0x08)
	struct FMargin KeyIconPadding; // 0x428(0x10)
	float KeyIconDesiredHeight; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UHorizontalBox* KeyImagePanel; // 0x440(0x08)
	struct UTextBlock* InputModeText; // 0x448(0x08)
	struct UTslFlowingTextWidget* DisplayNameFlowText; // 0x450(0x08)
	struct TArray<struct UTslKeyIconWidget*> KeyImageWidgets; // 0x458(0x10)
	struct FTslKeyHintInfo CurrentKeyHintInfo; // 0x468(0xb8)
	char pad_520[0x20]; // 0x520(0x20)
};

// Class TslGameUI.TslGamepadKeyHintContentWidget
// Size: 0x578 (Inherited: 0x540)  [layout: KHOP]
struct UTslGamepadKeyHintContentWidget : UTslKeyHintContentWidget {
	struct UTexture2D* KeyIconPlusTexture; // 0x540(0x08)
	struct FText HoldText; // 0x548(0x18)
	struct FText DoubleTapText; // 0x560(0x18)
};

// Class TslGameUI.TslKeyboardAndMouseHintContentWidget
// Size: 0x578 (Inherited: 0x540)  [layout: KHOP]
struct UTslKeyboardAndMouseHintContentWidget : UTslKeyHintContentWidget {
	struct FName DummyActionName_Aim; // 0x540(0x08)
	struct FName DummyActionName_ADS; // 0x548(0x08)
	struct FName ActionName_Targeting; // 0x550(0x08)
	struct FName ActionName_Aim; // 0x558(0x08)
	struct FText HoldText; // 0x560(0x18)
};

// Class TslGameUI.TslKeyNotifyContentWidget
// Size: 0x540 (Inherited: 0x540)  [layout: KHOP]
struct UTslKeyNotifyContentWidget : UTslKeyHintContentWidget {
};

// Class TslGameUI.TslGamepadKeyHintWidget
// Size: 0x4d8 (Inherited: 0x4d8)  [layout: KHOP]
struct UTslGamepadKeyHintWidget : UTslKeyHintWidget {
};

// Class TslGameUI.TslKeyboardAndMouseHintWidget
// Size: 0x4d8 (Inherited: 0x4d8)  [layout: KHOP]
struct UTslKeyboardAndMouseHintWidget : UTslKeyHintWidget {
};

// Class TslGameUI.TslKeyNotifyWidget_Fixed
// Size: 0x458 (Inherited: 0x448)  [layout: KHOP]
struct UTslKeyNotifyWidget_Fixed : UTslKeyNotifyWidget {
	struct FName ActionName; // 0x448(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImage; // 0x450(0x08)

	void UpdateKeyImage(); // Function TslGameUI.TslKeyNotifyWidget_Fixed.UpdateKeyImage //  // @ game+0xe498be8
};

// Class TslGameUI.TslKeyWidget
// Size: 0x520 (Inherited: 0x420)  [layout: KHOP]
struct UTslKeyWidget : UUmgBaseWidget {
	struct FString KeyName; // 0x420(0x10)
	struct FKey MatchingUnrealKey; // 0x430(0x18)
	struct FSlateFontInfo KeyNameFont; // 0x448(0x68)
	enum class EVerticalAlignment KeyNameVerticalAlignment; // 0x4b0(0x01)
	enum class EHorizontalAlignment KeyNameHorizontalAlignment; // 0x4b1(0x01)
	enum class ETextJustify KeyNameJustification; // 0x4b2(0x01)
	char pad_4B3[0x1]; // 0x4b3(0x01)
	float KeyNameWrapTextAt; // 0x4b4(0x04)
	struct FLinearColor NonSelectedBorderColor; // 0x4b8(0x10)
	struct FLinearColor SelectedBorderColor; // 0x4c8(0x10)
	struct FLinearColor NonSelectedTextColor; // 0x4d8(0x10)
	struct FLinearColor SelectedTextColor; // 0x4e8(0x10)
	struct UTexture2D* SelectedKeyBorderImage; // 0x4f8(0x08)
	struct UTexture2D* NonSelectedKeyBorderImage; // 0x500(0x08)
	bool bSelected; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct UTextBlock* KeyNameTextBlock; // 0x510(0x08)
	struct UImage* BorderImage; // 0x518(0x08)

	void IsSelected(); // Function TslGameUI.TslKeyWidget.IsSelected //  // @ game+0xe4894bc
	void TestSetKeyGuide(); // Function TslGameUI.TslKeyWidget.TestSetKeyGuide //  // @ game+0xe497bac
};

// Class TslGameUI.TslKFCElectronicBoard
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslKFCElectronicBoard : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTslFlowingPlayerDataWidget* FlowUserID; // 0x428(0x08)
};

// Class TslGameUI.TslKickPopupWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UTslKickPopupWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UButton* YesButton; // 0x428(0x08)
	struct UButton* NoButton; // 0x430(0x08)
	struct UTextBlock* KickQuestion; // 0x438(0x08)
	DelegateProperty PopupButtonEvent; // 0x440(0x10)

	void OnClickedYesButton(); // Function TslGameUI.TslKickPopupWidget.OnClickedYesButton //  // @ game+0xe48a8bc
	void OnClickedNoButtion(); // Function TslGameUI.TslKickPopupWidget.OnClickedNoButtion //  // @ game+0xe48a8a0
};

// Class TslGameUI.TslKillBannerAnimationWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslKillBannerAnimationWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimKillBanner; // 0x420(0x08)
};

// Class TslGameUI.TslLobbyCursorHUDWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslLobbyCursorHUDWidget : UUmgBaseWidget {
	struct FVector2D InitLobbyCursorPos; // 0x420(0x08)
	bool SlowModeCursorPadding; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UWidgetSwitcher* LobbyCursorStateSwitcher; // 0x430(0x08)
	char pad_438[0x18]; // 0x438(0x18)
};

// Class TslGameUI.TslLobbyDebugUIWidget
// Size: 0x418 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslLobbyDebugUIWidget : UTslUserWidget {
	struct UButton* MenuButton; // 0x330(0x08)
	struct UCheckBox* ToggleCharacterCheckBox; // 0x338(0x08)
	struct UButton* ToggleDebugTextButton; // 0x340(0x08)
	struct UCanvasPanel* MainCanvasPanel; // 0x348(0x08)
	struct UHorizontalBox* ToggleCharacterHorizontalBox; // 0x350(0x08)
	struct UScrollBox* ItemListScrollBox; // 0x358(0x08)
	struct UScrollBox* SceneScrollBox; // 0x360(0x08)
	struct UScrollBox* SkinItemListScrollBox; // 0x368(0x08)
	struct UScrollBox* ViewModeScrollBox; // 0x370(0x08)
	struct UBorder* SkinListBorder; // 0x378(0x08)
	struct UBorder* ViewModeTypeSelectButtonBorder; // 0x380(0x08)
	struct UBorder* WeaponOrParachuteListBorder; // 0x388(0x08)
	struct ULobbyTestButton* ViewModeSelectCharacter; // 0x390(0x08)
	struct ULobbyTestButton* ViewModeSelectParachute; // 0x398(0x08)
	struct ULobbyTestButton* ViewModeSelectWeapon; // 0x3a0(0x08)
	struct ULobbyTestButton* ViewModeSelectVehicle; // 0x3a8(0x08)
	char pad_3B0[0x68]; // 0x3b0(0x68)
};

// Class TslGameUI.TslLobbyNameTagHudWidget
// Size: 0x448 (Inherited: 0x420)  [layout: KHOP]
struct UTslLobbyNameTagHudWidget : UUmgBaseWidget {
	struct UClass* LobbyNameNameTagWidgetClass; // 0x420(0x08)
	struct UCanvasPanel* PanelNameTag; // 0x428(0x08)
	bool bUseNameTagOffsetTranslations; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct FVector> NameTagOffsetTranslations; // 0x438(0x10)

	void UpdateNameTagWidget(); // Function TslGameUI.TslLobbyNameTagHudWidget.UpdateNameTagWidget //  // @ game+0xe498c98
	void SetupNameTagWidget(); // Function TslGameUI.TslLobbyNameTagHudWidget.SetupNameTagWidget //  // @ game+0xe4978ec
	void GetNameTagWidget(); // Function TslGameUI.TslLobbyNameTagHudWidget.GetNameTagWidget //  // @ game+0xe47efb8
	void CleanUpNameTagWidget(); // Function TslGameUI.TslLobbyNameTagHudWidget.CleanUpNameTagWidget //  // @ game+0xe47da2c
};

// Class TslGameUI.TslLobbyNameTagWidget
// Size: 0x5a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslLobbyNameTagWidget : UUmgBaseWidget {
	struct UTextBlock* TextNickName; // 0x420(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformIcon; // 0x428(0x08)
	struct UImage* ImageCompliance; // 0x430(0x08)
	struct UTslRankEmblemWidget* RankEmblem; // 0x438(0x08)
	struct UWidget* ImageHost; // 0x440(0x08)
	struct UWidget* ImageStateBg; // 0x448(0x08)
	struct UWidgetSwitcher* SwitcherState; // 0x450(0x08)
	struct UWidget* PanelNameTag; // 0x458(0x08)
	struct UTslClanplate* Clanplate; // 0x460(0x08)
	struct URetainerBox* RetainerboxLastRankDeco; // 0x468(0x08)
	struct UImage* ImageLastRankDecoL; // 0x470(0x08)
	struct UImage* ImageLastRankDecoC; // 0x478(0x08)
	struct UImage* ImageLastRankDecoR; // 0x480(0x08)
	bool bTestAlwaysShowIcons; // 0x488(0x01)
	bool bHideIfAlone; // 0x489(0x01)
	bool bHideStateIconIfAlone; // 0x48a(0x01)
	bool bHideIdleStateIcon; // 0x48b(0x01)
	struct FVector RankNameTagOffsetTranslations; // 0x48c(0x0c)
	int32 SlotIndex; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FName NameTagSocketName; // 0x4a0(0x08)
	struct FVector NameTagOffsetTranslation; // 0x4a8(0x0c)
	char pad_4B4[0x1]; // 0x4b4(0x01)
	bool bIsReady; // 0x4b5(0x01)
	char pad_4B6[0x2]; // 0x4b6(0x02)
	struct FString Nickname; // 0x4b8(0x10)
	struct FString ClanTag; // 0x4c8(0x10)
	struct FString ClanplateId; // 0x4d8(0x10)
	struct TMap<enum class EWuCompetitiveRankLobbyTier, struct FPrevRankNameplateTextureData> PrevNameplateTextureMap; // 0x4e8(0x50)
	struct TMap<enum class EWuRankUnplayableReason, struct UTexture2D*> ImageComplianceTextureMap; // 0x538(0x50)
	char pad_588[0x20]; // 0x588(0x20)

	void SetRankEmblem(); // Function TslGameUI.TslLobbyNameTagWidget.SetRankEmblem //  // @ game+0x120c090
	void SetImageCompliance(); // Function TslGameUI.TslLobbyNameTagWidget.SetImageCompliance //  // @ game+0x131d594
	void SetReady(); // Function TslGameUI.TslLobbyNameTagWidget.SetReady //  // @ game+0x1213db0
	void SetPrevRankNameplate(); // Function TslGameUI.TslLobbyNameTagWidget.SetPrevRankNameplate //  // @ game+0x1242e04
	void UpdateNickNameAndClanName(); // Function TslGameUI.TslLobbyNameTagWidget.UpdateNickNameAndClanName //  // @ game+0xe498d10
	void SetHost(); // Function TslGameUI.TslLobbyNameTagWidget.SetHost //  // @ game+0xe496ef0
};

// Class TslGameUI.TslLobbyWebPopupCanvas
// Size: 0x360 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslLobbyWebPopupCanvas : UTslUserWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct UCanvasPanel* WebPopupCanvas; // 0x338(0x08)
	char pad_340[0x20]; // 0x340(0x20)
};

// Class TslGameUI.TslLoopAnimationWidget
// Size: 0x430 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslLoopAnimationWidget : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimLoop; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class TslGameUI.TslMainLobbyHUDWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMainLobbyHUDWidget : UHudMainBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UButton* ButtonSystemMenu; // 0x428(0x08)
	struct UButton* ButtonQuit; // 0x430(0x08)
	struct UButton* ButtonReload; // 0x438(0x08)
	struct UButton* ButtonSetting; // 0x440(0x08)
	struct UButton* ButtonReplayTest; // 0x448(0x08)
	struct UVerticalBox* ListMessage; // 0x450(0x08)
	struct UCanvasPanel* PanelWebPopup; // 0x458(0x08)
	float NameTagHeight; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UClass* WebPopupClass; // 0x468(0x20)
	char pad_488[0x8]; // 0x488(0x08)
	struct TArray<struct UTslWebPopup*> VisibleWebPopups; // 0x490(0x10)
	struct UClass* ReplayListClass; // 0x4a0(0x20)
	struct ATslReplayList* ReplayListActor; // 0x4c0(0x08)
	char pad_4C8[0x10]; // 0x4c8(0x10)

	void OnUpdateCharacterNameTag(); // Function TslGameUI.TslMainLobbyHUDWidget.OnUpdateCharacterNameTag //  // @ game+0xe494d90
	void HideCurtain(); // Function TslGameUI.TslMainLobbyHUDWidget.HideCurtain //  // @ game+0xe4892c8
	void OnCreateCharacter(); // Function TslGameUI.TslMainLobbyHUDWidget.OnCreateCharacter //  // @ game+0x1089e3c
	void OnSettingButtonClicked(); // Function TslGameUI.TslMainLobbyHUDWidget.OnSettingButtonClicked //  // @ game+0xe491da4
	void OnReloadButtonClicked(); // Function TslGameUI.TslMainLobbyHUDWidget.OnReloadButtonClicked //  // @ game+0xe48fa9c
	void OnToggleSystemMenu(); // Function TslGameUI.TslMainLobbyHUDWidget.OnToggleSystemMenu //  // @ game+0xe4942ec
	void OnCloseWebPopup(); // Function TslGameUI.TslMainLobbyHUDWidget.OnCloseWebPopup //  // @ game+0xe48a918
	void ShowCurtain(); // Function TslGameUI.TslMainLobbyHUDWidget.ShowCurtain //  // @ game+0xe497964
	void OnDestroyCharacter(); // Function TslGameUI.TslMainLobbyHUDWidget.OnDestroyCharacter //  // @ game+0x10891d4
	void OnSystemMenuButtonClicked(); // Function TslGameUI.TslMainLobbyHUDWidget.OnSystemMenuButtonClicked //  // @ game+0xe4935a4
	void OnQuitButtonClicked(); // Function TslGameUI.TslMainLobbyHUDWidget.OnQuitButtonClicked //  // @ game+0xe48f9a0
	void OnReplayTestButtonClicked(); // Function TslGameUI.TslMainLobbyHUDWidget.OnReplayTestButtonClicked //  // @ game+0x1053c04
	void OnRequestSystemMenu(); // Function TslGameUI.TslMainLobbyHUDWidget.OnRequestSystemMenu //  // @ game+0xe48fb64
};

// Class TslGameUI.TslMapCharacterIconWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslMapCharacterIconWidget : UUmgBaseWidget {
	struct UTslTeamInfoIconDataAsset* TeamIconDataAsset; // 0x420(0x08)
};

// Class TslGameUI.MapCharacterIconBaseWidget
// Size: 0x798 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UMapCharacterIconBaseWidget : UTslMapCharacterIconWidget {
	struct UWidgetSwitcher* SwitcherIcon; // 0x428(0x08)
	struct UImage* ImageIcon; // 0x430(0x08)
	struct UImage* ImageSimpleIcon; // 0x438(0x08)
	struct UImage* ImageEngageHint; // 0x440(0x08)
	struct U*7fa8406bd3* AnimOnEngage; // 0x448(0x08)
	struct UScaleBox* ScaleboxIcon; // 0x450(0x08)
	struct FName IconStateTexParamName; // 0x458(0x08)
	struct FName IconRotationParamName; // 0x460(0x08)
	struct FName IconColorParamName; // 0x468(0x08)
	struct UBorder* BorderName; // 0x470(0x08)
	struct UTextBlock* TextPlayerName; // 0x478(0x08)
	struct UOverlay* PanelNameTagOverlay; // 0x480(0x08)
	struct UBorder* BorderObserverMuzzleFlash; // 0x488(0x08)
	struct UUserWidget* WidgetObserverPlayerIconMuzzleFlash; // 0x490(0x08)
	struct U*7fa8406bd3* AnimAttacked; // 0x498(0x08)
	struct U*7fa8406bd3* AnimHitted; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimGroggyWarning; // 0x4a8(0x08)
	struct UBorder* BorderLogo; // 0x4b0(0x08)
	struct UImage* ImageTeamLogo; // 0x4b8(0x08)
	struct USpacer* SpacerBG; // 0x4c0(0x08)
	struct FMulticastDelegate OnMapIconClicked; // 0x4c8(0x10)
	bool bTeamNumber; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UTextBlock* TextTeam; // 0x4e0(0x08)
	struct UOverlay* PanelRiderLayer; // 0x4e8(0x08)
	struct UClass* RiderIconClass; // 0x4f0(0x08)
	struct FText DisplayNameFormatWithOtherPlayer; // 0x4f8(0x18)
	struct UTexture* MyDirectionIcon; // 0x510(0x08)
	struct UTexture* TeamDirectionIcon; // 0x518(0x08)
	struct UTexture* AmmoRequestIcon; // 0x520(0x08)
	struct UTexture* HealRequestIcon; // 0x528(0x08)
	struct UBorder* BorderSpectatedIconLayer; // 0x530(0x08)
	struct UImage* ImageNameTagColorImg; // 0x538(0x08)
	struct TArray<struct UTexture2D*> TeamBackgroundImages; // 0x540(0x10)
	struct UButton* ObserverButton; // 0x550(0x08)
	struct UButton* RespawnButton; // 0x558(0x08)
	struct UImage* ImageObserverView; // 0x560(0x08)
	struct FSlateBrush DefaultRespawnButtonBrush; // 0x568(0x90)
	struct FSlateBrush SelectedRespawnButtonBrush; // 0x5f8(0x90)
	struct FSlateBrush HoveredRespawnButtonBrush; // 0x688(0x90)
	struct UTslUserPlatformImageWidget* WidgetUserPlatform; // 0x718(0x08)
	struct UBorder* IconBorder; // 0x720(0x08)
	char pad_728[0x20]; // 0x728(0x20)
	struct UMaterialInterface* PendingIconMaterial; // 0x748(0x08)
	struct TArray<struct URiderIconWidget*> RiderIconList; // 0x750(0x10)
	struct UTexture2D* CachedTeamIcon; // 0x760(0x08)
	char pad_768[0x30]; // 0x768(0x30)

	void OnRespawnButtonDown(); // Function TslGameUI.MapCharacterIconBaseWidget.OnRespawnButtonDown //  // @ game+0xe48fbdc
	void NotifyEngageAttacked(); // Function TslGameUI.MapCharacterIconBaseWidget.NotifyEngageAttacked //  // @ game+0xe9bb4c
};

// Class TslGameUI.OutsideTeamIconWidget
// Size: 0x438 (Inherited: 0x428)  [layout: KHOP]
struct UOutsideTeamIconWidget : UTslMapCharacterIconWidget {
	struct UImage* ImageIcon; // 0x428(0x08)
	struct UCurveFloat* IconDistanceAlhpa; // 0x430(0x08)
};

// Class TslGameUI.TslMyCharacterIconMapLayer
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UTslMyCharacterIconMapLayer : U*9ce5549961 {
};

// Class TslGameUI.TslTeamCharacterIconMapLayer
// Size: 0x150 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamCharacterIconMapLayer : U*0bcba5de25 {
	float *8dd2f6bf77; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class TslGameUI.TslOutOfMapTeamCharacterIconMapLayer
// Size: 0x150 (Inherited: 0x150)  [layout: KHOP]
struct UTslOutOfMapTeamCharacterIconMapLayer : UTslTeamCharacterIconMapLayer {
};

// Class TslGameUI.TslTeamBluechipIconMapLayer
// Size: 0x158 (Inherited: 0x150)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamBluechipIconMapLayer : UTslTeamCharacterIconMapLayer {
	float *fa3db983fe; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// Class TslGameUI.TslCarePackageItemIconMapLayer
// Size: 0x128 (Inherited: 0xb8)  [layout: KHOP]
struct UTslCarePackageItemIconMapLayer : U*adc663050a {
	float *4e46563d24; // 0xb8(0x04)
	bool *fef7d4b2f5; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct TMap<struct ACarePackageItem*, struct UMapCarePackageItemIconBaseWidget*> *74192d6416; // 0xc0(0x50)
	struct TArray<struct ACarePackageItem*> *f100e949a5; // 0x110(0x10)
	struct FTimerHandle *2ce62c5eac; // 0x120(0x08)

	void *29e8af42e1(); // Function TslGameUI.TslCarePackageItemIconMapLayer.*29e8af42e1 //  // @ game+0xe498d4c
};

// Class TslGameUI.TslDebugActorIconMapLayer
// Size: 0xc8 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct UTslDebugActorIconMapLayer : U*adc663050a {
	char pad_B8[0x10]; // 0xb8(0x10)
};

// Class TslGameUI.*0f6b28f9a9
// Size: 0xd0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*0f6b28f9a9 : U*adc663050a {
	char pad_B8[0x18]; // 0xb8(0x18)
};

// Class TslGameUI.*584c2810f6
// Size: 0x108 (Inherited: 0xb8)  [layout: KHOP]
struct U*584c2810f6 : U*adc663050a {
	struct TMap<struct F*bcae7198ea, struct F*e211c8d77e> *2394669948; // 0xb8(0x50)
};

// Class TslGameUI.TslMyMapMarkerMapLayer
// Size: 0x108 (Inherited: 0x108)  [layout: KHOP]
struct UTslMyMapMarkerMapLayer : U*584c2810f6 {
};

// Class TslGameUI.TslTeamMapMarkerMapLayer
// Size: 0x120 (Inherited: 0x108)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamMapMarkerMapLayer : U*584c2810f6 {
	char pad_108[0x18]; // 0x108(0x18)
};

// Class TslGameUI.*9a938c3d23
// Size: 0x108 (Inherited: 0xb8)  [layout: KHOP]
struct U*9a938c3d23 : U*adc663050a {
	struct TMap<struct F*bcae7198ea, struct F*1e180494a8> *2394669948; // 0xb8(0x50)
};

// Class TslGameUI.*2ad6fb0159
// Size: 0xc0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*2ad6fb0159 : U*adc663050a {
	float *d15aeeaea9; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class TslGameUI.TslMyWayPointMapLayer
// Size: 0xd8 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTslMyWayPointMapLayer : U*2ad6fb0159 {
	struct TArray<struct UMapWayPointBaseWidget*> *8201512d42; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)

	void OnNewWayPointMarker(); // Function TslGameUI.TslMyWayPointMapLayer.OnNewWayPointMarker //  // @ game+0xe48ecd4
};

// Class TslGameUI.TslTeamWayPointMapLayer
// Size: 0x130 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamWayPointMapLayer : U*2ad6fb0159 {
	float *e9a17e4bbd; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TMap<struct ATeam*, struct F*068de7f074> *e1a84639dc; // 0xc8(0x50)
	struct TArray<struct ATeam*> *1fb30d525b; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class TslGameUI.*78431d820d
// Size: 0xd0 (Inherited: 0xb8)  [layout: LECH - offset chi la uoc luong]
struct U*78431d820d : U*adc663050a {
	struct UMaterialInterface* MaterialInterface; // 0xb8(0x08)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class TslGameUI.*7544164228
// Size: 0xe0 (Inherited: 0xd0)  [layout: KHOP]
struct U*7544164228 : U*78431d820d {
	struct FColorBlindColorSet ColorSet; // 0xd0(0x10)
};

// Class TslGameUI.*c0ff94ec2c
// Size: 0xf0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*c0ff94ec2c : U*78431d820d {
	int32 *dd4eb0ee39; // 0xd0(0x04)
	struct FVector2D *72f9ca33e9; // 0xd4(0x08)
	struct FVector2D *503673a427; // 0xdc(0x08)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class TslGameUI.TslInnerBlueZoneMapLayer
// Size: 0xf0 (Inherited: 0xe0)  [layout: LECH - offset chi la uoc luong]
struct UTslInnerBlueZoneMapLayer : U*7544164228 {
	char pad_E0[0x10]; // 0xe0(0x10)
};

// Class TslGameUI.TslReplayZoneMapLayer
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UTslReplayZoneMapLayer : U*7544164228 {
};

// Class TslGameUI.TslBlackZoneMapLayer
// Size: 0xf0 (Inherited: 0xf0)  [layout: KHOP]
struct UTslBlackZoneMapLayer : U*c0ff94ec2c {
};

// Class TslGameUI.TslBlizzardZoneMapLayer
// Size: 0xf8 (Inherited: 0xf0)  [layout: LECH - offset chi la uoc luong]
struct UTslBlizzardZoneMapLayer : U*c0ff94ec2c {
	float *c31e61d24c; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class TslGameUI.TslEMPZoneMapLayer
// Size: 0xf0 (Inherited: 0xf0)  [layout: KHOP]
struct UTslEMPZoneMapLayer : U*c0ff94ec2c {
};

// Class TslGameUI.TslRedZoneMapLayer
// Size: 0x100 (Inherited: 0xf0)  [layout: KHOP]
struct UTslRedZoneMapLayer : U*c0ff94ec2c {
	struct FColorBlindColorSet ColorSet; // 0xf0(0x10)
};

// Class TslGameUI.TslSandStormZoneMapLayer
// Size: 0xf8 (Inherited: 0xf0)  [layout: LECH - offset chi la uoc luong]
struct UTslSandStormZoneMapLayer : U*c0ff94ec2c {
	float *c31e61d24c; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class TslGameUI.*966a319d32
// Size: 0x100 (Inherited: 0xf0)  [layout: KHOP]
struct U*966a319d32 : U*c0ff94ec2c {
	struct FColorBlindColorSet ColorSet; // 0xf0(0x10)
};

// Class TslGameUI.*37f61a524e
// Size: 0x130 (Inherited: 0xd8)  [layout: KHOP]
struct U*37f61a524e : U*eab4677b30 {
	struct UTexture2D* *d4c689d071; // 0xd8(0x08)
	struct UTexture2D* *2bb0be1b2d; // 0xe0(0x08)
	struct UTexture2D* *966836c9e0; // 0xe8(0x08)
	struct FLinearColor *a2910d6ddb; // 0xf0(0x10)
	struct FLinearColor *2f07666b4c; // 0x100(0x10)
	struct FLinearColor *68cef5e1e2; // 0x110(0x10)
	struct UMaterialInstance* *ddd8ab422d; // 0x120(0x08)
	float *3b8863eff1; // 0x128(0x04)
	float *7b9bcf2afa; // 0x12c(0x04)
};

// Class TslGameUI.TslAircraftMapLayer
// Size: 0x1b8 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UTslAircraftMapLayer : U*37f61a524e {
	struct UTexture2D* *cf1df992e7; // 0x130(0x08)
	struct FLinearColor *ec08546e6b; // 0x138(0x10)
	struct TMap<enum class ETslMapName, struct UMaterialInstance*> *45e5ef05a9; // 0x148(0x50)
	float *cd7d66ce08; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UMaterialInstance* *e7ef600f71; // 0x1a0(0x08)
	char pad_1A8[0x10]; // 0x1a8(0x10)
};

// Class TslGameUI.TslAircraftTrailMapLayer
// Size: 0x168 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UTslAircraftTrailMapLayer : U*37f61a524e {
	struct FLinearColor *fa6f0f6277; // 0x130(0x10)
	float *337d5731df; // 0x140(0x04)
	struct FLinearColor *2d6ac1a5cc; // 0x144(0x10)
	char pad_154[0x14]; // 0x154(0x14)
};

// Class TslGameUI.TslAuxilaryIconMapLayer
// Size: 0x180 (Inherited: 0xd8)  [layout: KHOP]
struct UTslAuxilaryIconMapLayer : U*eab4677b30 {
	struct UDataTable* *f5eb5e778f; // 0xd8(0x08)
	struct TMap<enum class EAuxilaryIconType, struct FAuxilaryIconAssetInfo> *86fb9791ee; // 0xe0(0x50)
	struct TMap<struct FGuid, struct FAuxilaryIcon> *f59d53aed8; // 0x130(0x50)
};

// Class TslGameUI.*66bf9d08b3
// Size: 0xf8 (Inherited: 0xd8)  [layout: KHOP]
struct U*66bf9d08b3 : U*eab4677b30 {
	struct UTexture* *a5a9bf56f3; // 0xd8(0x08)
	struct UTexture* *810503d15c; // 0xe0(0x08)
	struct TArray<struct F*80c7201b6f> *a268620b05; // 0xe8(0x10)
};

// Class TslGameUI.TslHelicopterIconMapLayer
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct UTslHelicopterIconMapLayer : U*66bf9d08b3 {
};

// Class TslGameUI.TslKillTruckIconMapLayer
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct UTslKillTruckIconMapLayer : U*66bf9d08b3 {
};

// Class TslGameUI.TslLootPackageIconMapLayer
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct UTslLootPackageIconMapLayer : U*66bf9d08b3 {
};

// Class TslGameUI.TslLootTruckIconMapLayer
// Size: 0xf8 (Inherited: 0xf8)  [layout: KHOP]
struct UTslLootTruckIconMapLayer : U*66bf9d08b3 {
};

// Class TslGameUI.TslLastCircleMarkMapLayer
// Size: 0xe8 (Inherited: 0xd8)  [layout: KHOP]
struct UTslLastCircleMarkMapLayer : U*eab4677b30 {
	struct UTexture* *6c475786aa; // 0xd8(0x08)
	struct UImage* *aeaca9c2c2; // 0xe0(0x08)
};

// Class TslGameUI.TslRevivalTowerIconMapLayer
// Size: 0x120 (Inherited: 0xd8)  [layout: LECH - offset chi la uoc luong]
struct UTslRevivalTowerIconMapLayer : U*eab4677b30 {
	struct UClass* *0944d00c0f; // 0xd8(0x08)
	struct TArray<struct F*919705f1af> *bf13ef3ae6; // 0xe0(0x10)
	struct UTexture* *0e576ec4f0; // 0xf0(0x08)
	struct FLinearColor *60901f86c4; // 0xf8(0x10)
	struct UClass* *d75f6a99d6; // 0x108(0x08)
	char pad_110[0x10]; // 0x110(0x10)

	void SetupRevivalTowerUI(); // Function TslGameUI.TslRevivalTowerIconMapLayer.SetupRevivalTowerUI //  // @ game+0x11ad7e8
};

// Class TslGameUI.TslTeamLogoIconMapLayer
// Size: 0x138 (Inherited: 0xd8)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamLogoIconMapLayer : U*eab4677b30 {
	float *722051f54b; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TMap<int32, struct UImage*> *79b666ba68; // 0xe0(0x50)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class TslGameUI.*8713885fcd
// Size: 0xf0 (Inherited: 0xd8)  [layout: LECH - offset chi la uoc luong]
struct U*8713885fcd : U*eab4677b30 {
	struct UTexture* *602b715756; // 0xd8(0x08)
	struct UTexture* *f59e8c88b2; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// Class TslGameUI.TslLastVehicleIconMapLayer
// Size: 0xf8 (Inherited: 0xf0)  [layout: KHOP]
struct UTslLastVehicleIconMapLayer : U*8713885fcd {
	struct UImage* *1bdaf4f7bc; // 0xf0(0x08)
};

// Class TslGameUI.TslAllVehicleIconMapLayer
// Size: 0x108 (Inherited: 0xf0)  [layout: KHOP]
struct UTslAllVehicleIconMapLayer : U*8713885fcd {
	float *6ed47cdaef; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct F*5d540c79ce> *d0aefcadcc; // 0xf8(0x10)
};

// Class TslGameUI.*5049f0c261
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*5049f0c261 : UObject {
};

// Class TslGameUI.AlwaysMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAlwaysMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.CharacterIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UCharacterIconMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.WayPointMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UWayPointMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.LastCircleMarkMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct ULastCircleMarkMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.ReplayMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UReplayMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.TeamMatchMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTeamMatchMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.MiniMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UMiniMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.WorldMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UWorldMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.RevivalTowerMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct URevivalTowerMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.AllVehicleIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAllVehicleIconMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.LastVehicleIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct ULastVehicleIconMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.*6ad228ae01
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6ad228ae01 : U*5049f0c261 {
};

// Class TslGameUI.BlizzardZoneIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlizzardZoneIconMapLayerAvailableChecker : U*6ad228ae01 {
};

// Class TslGameUI.SandStormZoneIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct USandStormZoneIconMapLayerAvailableChecker : U*6ad228ae01 {
};

// Class TslGameUI.EMPZoneIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEMPZoneIconMapLayerAvailableChecker : U*6ad228ae01 {
};

// Class TslGameUI.*f0ce15829a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f0ce15829a : U*6ad228ae01 {
};

// Class TslGameUI.RedZoneMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct URedZoneMapLayerAvailableChecker : U*6ad228ae01 {
};

// Class TslGameUI.BlackZoneMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlackZoneMapLayerAvailableChecker : U*6ad228ae01 {
};

// Class TslGameUI.ObservingMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UObservingMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.InnerBlueZoneMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UInnerBlueZoneMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.AircraftRouteMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAircraftRouteMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.AircraftTrailMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAircraftTrailMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.BluechipMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBluechipMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.ModActorIconMapLayerAvailableChecker
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UModActorIconMapLayerAvailableChecker : U*5049f0c261 {
};

// Class TslGameUI.TslMapLayerManager
// Size: 0x148 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTslMapLayerManager : UObject {
	struct UDataTable* *843f5ad835; // 0x30(0x08)
	struct UDataTable* *0570898e15; // 0x38(0x08)
	char pad_40[0x108]; // 0x40(0x108)
};

// Class TslGameUI.TslMapMarkerObjectWidget
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTslMapMarkerObjectWidget : UUmgBaseWidget {
	struct UImage* ImageBind; // 0x420(0x08)
	bool bCachedAvailable; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UMaterialInstanceDynamic* ImageBindMaterial; // 0x430(0x08)
};

// Class TslGameUI.TslMapMarkerTowerWidget
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct UTslMapMarkerTowerWidget : UTslMapMarkerObjectWidget {
	enum class ETslMapMarkerTowerState CachedTowerState; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
};

// Class TslGameUI.TslMarketBackgroundWidget
// Size: 0x480 (Inherited: 0x470)  [layout: KHOP]
struct UTslMarketBackgroundWidget : UBlockInputUserWidget {
	struct UTslStoreWidget* ItemShopWidget; // 0x470(0x08)
	struct UTslStoreWidget_Gamepad* ItemShopWidget_Gamepad; // 0x478(0x08)

	void OnAPressed(); // Function TslGameUI.TslMarketBackgroundWidget.OnAPressed //  // @ game+0xe489680
	void CloseWidget(); // Function TslGameUI.TslMarketBackgroundWidget.CloseWidget //  // @ game+0xe47db0c
};

// Class TslGameUI.TslMarketCoinWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UTslMarketCoinWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct U*7fa8406bd3* AnimIncrease; // 0x430(0x08)
	struct U*7fa8406bd3* AnimDecrease; // 0x438(0x08)
	struct UTextBlock* TextCoin; // 0x440(0x08)
	struct UTextBlock* TextValueChange; // 0x448(0x08)

	void OnInventoryUpdated(); // Function TslGameUI.TslMarketCoinWidget.OnInventoryUpdated //  // @ game+0xe48cfcc
	void OnUpdateInventoryItemAmount(); // Function TslGameUI.TslMarketCoinWidget.OnUpdateInventoryItemAmount //  // @ game+0xe494f4c
};

// Class TslGameUI.TslMarketMessageWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslMarketMessageWidget : UUmgBaseWidget {
	struct UTextBlock* TextMessage; // 0x420(0x08)
	struct U*7fa8406bd3* AnimMessage; // 0x428(0x08)
};

// Class TslGameUI.TslMarketShopItemWidget
// Size: 0x570 (Inherited: 0x420)  [layout: KHOP]
struct UTslMarketShopItemWidget : UUmgBaseWidget {
	char pad_420[0x1c]; // 0x420(0x1c)
	int32 ItemCount; // 0x43c(0x04)
	int32 Price; // 0x440(0x04)
	float AlphaDimmed; // 0x444(0x04)
	struct FLinearColor ColorTextItemCount; // 0x448(0x10)
	struct FLinearColor ColorTextItemInfo; // 0x458(0x10)
	struct FLinearColor ColorTextShortage; // 0x468(0x10)
	struct UTexture2D* BgNormal; // 0x478(0x08)
	struct UTexture2D* BgHovered; // 0x480(0x08)
	struct UButton* ButtonPurchase; // 0x488(0x08)
	struct UImage* ImageBg; // 0x490(0x08)
	struct UImage* ImageItem; // 0x498(0x08)
	struct UTextBlock* TextItemName; // 0x4a0(0x08)
	struct UImage* ImageDimmed; // 0x4a8(0x08)
	struct UWidgetSwitcher* SwitcherCount; // 0x4b0(0x08)
	struct UTextBlock* TextItemCount; // 0x4b8(0x08)
	struct UImage* ImageCoin; // 0x4c0(0x08)
	struct UTextBlock* TextItemPrice; // 0x4c8(0x08)
	struct UImage* ImageFocus; // 0x4d0(0x08)
	struct UTslMarketShopNotify* ShopNotify; // 0x4d8(0x08)
	struct UItem* CachedItem; // 0x4e0(0x08)
	struct UItemToolTipWidget* CachedToolTip; // 0x4e8(0x08)
	struct FTslAssetLoader IconLoader; // 0x4f0(0x80)

	void OnUpdateInventoryItemAmount(); // Function TslGameUI.TslMarketShopItemWidget.OnUpdateInventoryItemAmount //  // @ game+0xe495010
	void OnPurchaseButtonHovered(); // Function TslGameUI.TslMarketShopItemWidget.OnPurchaseButtonHovered //  // @ game+0xe48f950
	void OnPurchaseButtonUnhovered(); // Function TslGameUI.TslMarketShopItemWidget.OnPurchaseButtonUnhovered //  // @ game+0xe48f964
	void OnPurchaseButtonClicked(); // Function TslGameUI.TslMarketShopItemWidget.OnPurchaseButtonClicked //  // @ game+0xe48f93c
	void OnInventoryUpdated(); // Function TslGameUI.TslMarketShopItemWidget.OnInventoryUpdated //  // @ game+0xe48cfe0
	void OnIconLoaded(); // Function TslGameUI.TslMarketShopItemWidget.OnIconLoaded //  // @ game+0xe48ce74
};

// Class TslGameUI.TslMarketShopItemCategoryWidget
// Size: 0x458 (Inherited: 0x420)  [layout: KHOP]
struct UTslMarketShopItemCategoryWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UClass* ItemClass; // 0x430(0x08)
	struct UTextBlock* TextCategoryName; // 0x438(0x08)
	struct UWrapBox* ListItems; // 0x440(0x08)
	struct TArray<struct UTslMarketShopItemWidget*> ItemWidgets; // 0x448(0x10)
};

// Class TslGameUI.TslMarketShopItemListWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMarketShopItemListWidget : UUmgBaseWidget {
	char pad_420[0x18]; // 0x420(0x18)
	float MaxLayoutCount; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UClass* ItemCategoryClass; // 0x440(0x08)
	char pad_448[0x10]; // 0x448(0x10)
	struct TArray<struct FMarketShopUIItemCategoryInfo> ItemCategoryInfos; // 0x458(0x10)
	struct UScrollBox* ScrollboxList; // 0x468(0x08)
	struct TArray<struct UTslMarketShopItemCategoryWidget*> ItemCategoryWidgets; // 0x470(0x10)
	char pad_480[0x8]; // 0x480(0x08)
};

// Class TslGameUI.TslMarketShopNameWidget
// Size: 0x368 (Inherited: 0x330)  [layout: KHOP]
struct UTslMarketShopNameWidget : UTslUserWidget {
	struct FText ItemShopName; // 0x330(0x18)
	struct FText WeaponShopName; // 0x348(0x18)
	struct UTextBlock* TextShopName; // 0x360(0x08)
};

// Class TslGameUI.TslMarketShopNotify
// Size: 0x4a8 (Inherited: 0x420)  [layout: KHOP]
struct UTslMarketShopNotify : UUmgBaseWidget {
	struct FVector2D NotifySize; // 0x420(0x08)
	struct FText NotifyInsufficientSpace; // 0x428(0x18)
	struct FLinearColor ColorTextNotifyInsufficientSpace; // 0x440(0x10)
	struct UTexture2D* BgNotifyInsufficientSpace; // 0x450(0x08)
	struct FText NotifySold; // 0x458(0x18)
	struct FLinearColor ColorTextNotifySold; // 0x470(0x10)
	struct UTexture2D* BgNotifySold; // 0x480(0x08)
	struct UTexture2D* BgNotifyObtained; // 0x488(0x08)
	struct UImage* ImageNotify; // 0x490(0x08)
	struct UTextBlock* TextNotify; // 0x498(0x08)
	struct U*7fa8406bd3* AnimNotify; // 0x4a0(0x08)
};

// Class TslGameUI.TslMatchLogContentWidget
// Size: 0x5e0 (Inherited: 0x420)  [layout: KHOP]
struct UTslMatchLogContentWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct FSlateColor NormalColor; // 0x428(0x28)
	struct FSlateColor SquadColor; // 0x450(0x28)
	struct FSlateColor YouColor; // 0x478(0x28)
	struct FSlateColor SystemColor; // 0x4a0(0x28)
	struct FSlateColor VictimColor; // 0x4c8(0x28)
	struct FSlateFontInfo NormalFont; // 0x4f0(0x68)
	struct FSlateFontInfo SystemFont; // 0x558(0x68)
	struct UTextBlock* TimestampTextBlock; // 0x5c0(0x08)
	struct UTslRichTextBlock* MessageTextBlock; // 0x5c8(0x08)
	struct UImage* HighlightImage; // 0x5d0(0x08)
	struct USizeBox* MatchLogContentSizeBox; // 0x5d8(0x08)
};

// Class TslGameUI.TslMatchLogWidget
// Size: 0x530 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslMatchLogWidget : UBlockInputUserWidget {
	struct UClass* MatchLogContentWidgetClass; // 0x470(0x08)
	float ScrollSpeedMultiplier; // 0x478(0x04)
	int32 VisibleContentsMax; // 0x47c(0x04)
	struct FText EmptyLogText; // 0x480(0x18)
	struct FText NotSupportedText; // 0x498(0x18)
	struct UTslTabSelectorWidget* TabSelectorWidget; // 0x4b0(0x08)
	struct UScrollBox* ContentsScrollBox; // 0x4b8(0x08)
	struct UTslGamepadKeyIconWidget* GamepadScrollGuideKeyIcon; // 0x4c0(0x08)
	struct USpacer* TopSpacer; // 0x4c8(0x08)
	struct USpacer* BottomSpacer; // 0x4d0(0x08)
	struct UVerticalBox* LogVerticalBox; // 0x4d8(0x08)
	struct UVerticalBox* ListEmptySign; // 0x4e0(0x08)
	struct UTextBlock* TextEmptySign; // 0x4e8(0x08)
	struct TArray<struct FMatchLog> MatchLogs; // 0x4f0(0x10)
	char pad_500[0x8]; // 0x500(0x08)
	struct TArray<struct UTslMatchLogContentWidget*> ContentWidgetPool; // 0x508(0x10)
	struct TArray<bool> ContentWidgetUsages; // 0x518(0x10)
	char pad_528[0x8]; // 0x528(0x08)

	void HandleRotateTabLeft(); // Function TslGameUI.TslMatchLogWidget.HandleRotateTabLeft //  // @ game+0x12747f4
	void HandleScroll(); // Function TslGameUI.TslMatchLogWidget.HandleScroll //  // @ game+0xa8e700
	void HandleNewMatchLogAdded(); // Function TslGameUI.TslMatchLogWidget.HandleNewMatchLogAdded //  // @ game+0x136f3a4
	void HandleTabRotated(); // Function TslGameUI.TslMatchLogWidget.HandleTabRotated //  // @ game+0x106ba80
	void HandleRotateTabRight(); // Function TslGameUI.TslMatchLogWidget.HandleRotateTabRight //  // @ game+0xe47fe78
	void HandleQuickScrollingUp(); // Function TslGameUI.TslMatchLogWidget.HandleQuickScrollingUp //  // @ game+0xe47fe64
	void HandleQuickScrollingDown(); // Function TslGameUI.TslMatchLogWidget.HandleQuickScrollingDown //  // @ game+0xe47fe50
};

// Class TslGameUI.TslMatchRankingPlayerInfo
// Size: 0x4b0 (Inherited: 0x420)  [layout: KHOP]
struct UTslMatchRankingPlayerInfo : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UTslFlowingTextWidget* FlowTextName; // 0x490(0x08)
	struct UTextBlock* TextBlockKills; // 0x498(0x08)
	struct UTslUserPlatformImageWidget* PlatformImage; // 0x4a0(0x08)
	struct U*7fa8406bd3* AnimWinnerTeamInfo; // 0x4a8(0x08)
};

// Class TslGameUI.TslMatchRankingTeamInfo
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMatchRankingTeamInfo : UUmgBaseWidget {
	struct UClass* PlayerInfoWidgetTemplate; // 0x420(0x08)
	struct UVerticalBox* VerticalBoxPlayerList; // 0x428(0x08)
	struct UTextBlock* TextBlockRanking; // 0x430(0x08)
	struct UTextBlock* TextBlockTeamName; // 0x438(0x08)
	struct UTextBlock* TextBlockKillCount; // 0x440(0x08)
	struct UTextBlock* TextBlockKills; // 0x448(0x08)
	struct UTslObserverPlayerIconWidget* TeamIcon; // 0x450(0x08)
	struct U*7fa8406bd3* AnimTeamInfo; // 0x458(0x08)
	struct U*7fa8406bd3* AnimWinnerTeamInfo; // 0x460(0x08)
	char pad_468[0x10]; // 0x468(0x10)

	void OnTeamInfoAnimation(); // Function TslGameUI.TslMatchRankingTeamInfo.OnTeamInfoAnimation //  // @ game+0xe4937a4
};

// Class TslGameUI.TslMediaPlayerWidget
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMediaPlayerWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x428(0x08)
	struct UPlatformMediaSource* MediaSource; // 0x430(0x08)
	struct UAkAudioEvent* MediaSound; // 0x438(0x08)
	struct UAkAudioEvent* MediaEndAkEvent; // 0x440(0x08)
	bool bCanSkipByInput; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct USizeBox* VideoSizeBox; // 0x450(0x08)
	struct UAkComponent* AkCompPtr; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)

	void CloseVideo(); // Function TslGameUI.TslMediaPlayerWidget.CloseVideo //  // @ game+0xe47daf8
	void OpenVideo(); // Function TslGameUI.TslMediaPlayerWidget.OpenVideo //  // @ game+0xe4963ac
	void OnSkipVideoPressed(); // Function TslGameUI.TslMediaPlayerWidget.OnSkipVideoPressed //  // @ game+0xe491db8
	void OnVideoEnded(); // Function TslGameUI.TslMediaPlayerWidget.OnVideoEnded //  // @ game+0xe495ea8
};

// Class TslGameUI.*fb1d963e0b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*fb1d963e0b : UInterface {
};

// Class TslGameUI.TslMenuComboBoxItemWidget
// Size: 0x470 (Inherited: 0x420)  [layout: KHOP]
struct UTslMenuComboBoxItemWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UTslFlowingTextWidget* TextBlockLabel; // 0x430(0x08)
	struct UImage* ImageCheck; // 0x438(0x08)
	struct FLinearColor HighlightColor; // 0x440(0x10)
	struct FLinearColor SelectedColor; // 0x450(0x10)
	struct FLinearColor NormalColor; // 0x460(0x10)
};

// Class TslGameUI.TslMenuOptionWidget
// Size: 0x2b0 (Inherited: 0x258)  [layout: KHOP]
struct UTslMenuOptionWidget : UUserWidget {
	struct UTextBlock* TitleText; // 0x258(0x08)
	struct FLinearColor ColorNormal; // 0x260(0x10)
	struct FLinearColor ColorHighlighted; // 0x270(0x10)
	struct FText NameText; // 0x280(0x18)
	struct FText DescriptionText; // 0x298(0x18)
};

// Class TslGameUI.TslMenuCheckBoxWidget
// Size: 0x300 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuCheckBoxWidget : UTslMenuOptionWidget {
	struct UCheckBox* CheckBox; // 0x2b0(0x08)
	char pad_2B8[0x48]; // 0x2b8(0x48)

	void OnCheckStateChanged(); // Function TslGameUI.TslMenuCheckBoxWidget.OnCheckStateChanged //  // @ game+0xe48a4d4
};

// Class TslGameUI.TslMenuComboBoxWidget
// Size: 0x3a0 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuComboBoxWidget : UTslMenuOptionWidget {
	struct UClass* ComboBoxItemWidgetClass; // 0x2b0(0x08)
	struct UComboBoxString* ComboBox; // 0x2b8(0x08)
	struct UImage* ImageDownArrow; // 0x2c0(0x08)
	struct TMap<int32, TScriptInterface<struct U*fb1d963e0b>> CachedItemWidgets; // 0x2c8(0x50)
	TScriptInterface<struct U*fb1d963e0b> TitleWidget; // 0x318(0x10)
	char pad_328[0x78]; // 0x328(0x78)

	void OnGenerateWidget(); // Function TslGameUI.TslMenuComboBoxWidget.OnGenerateWidget //  // @ game+0xe48cc4c
	void OnAfterMenuOpenChanged(); // Function TslGameUI.TslMenuComboBoxWidget.OnAfterMenuOpenChanged //  // @ game+0xe4896bc
	void OnComboBoxSelectionChanged(); // Function TslGameUI.TslMenuComboBoxWidget.OnComboBoxSelectionChanged //  // @ game+0xe48abc4
};

// Class TslGameUI.TslMenuNumericTextBoxWidget
// Size: 0x610 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuNumericTextBoxWidget : UTslMenuOptionWidget {
	struct UEditableText* TextBox; // 0x2b0(0x08)
	struct UBorder* BorderValue; // 0x2b8(0x08)
	struct UButton* ButtonDecrease; // 0x2c0(0x08)
	struct UButton* ButtonIncrease; // 0x2c8(0x08)
	struct UButton* ButtonMin; // 0x2d0(0x08)
	struct UButton* ButtonMax; // 0x2d8(0x08)
	char pad_2E0[0x330]; // 0x2e0(0x330)

	void OnDecreaseButtonClicked(); // Function TslGameUI.TslMenuNumericTextBoxWidget.OnDecreaseButtonClicked //  // @ game+0xe48c030
	void OnTextCommitted(); // Function TslGameUI.TslMenuNumericTextBoxWidget.OnTextCommitted //  // @ game+0xe4939a4
	void OnMaxButtonClicked(); // Function TslGameUI.TslMenuNumericTextBoxWidget.OnMaxButtonClicked //  // @ game+0xe48df14
	void OnIncreaseButtonClicked(); // Function TslGameUI.TslMenuNumericTextBoxWidget.OnIncreaseButtonClicked //  // @ game+0xe48ce88
	void OnMinButtonClicked(); // Function TslGameUI.TslMenuNumericTextBoxWidget.OnMinButtonClicked //  // @ game+0xe48e918
};

// Class TslGameUI.TslMenuSliderWidget
// Size: 0x2f0 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuSliderWidget : UTslMenuOptionWidget {
	struct USlider* Slider; // 0x2b0(0x08)
	struct UEditableText* EditableTextValue; // 0x2b8(0x08)
	struct UBorder* BorderValue; // 0x2c0(0x08)
	char pad_2C8[0x28]; // 0x2c8(0x28)

	void OnValueChanged(); // Function TslGameUI.TslMenuSliderWidget.OnValueChanged //  // @ game+0xe495300
};

// Class TslGameUI.TslMenuStepperWidget
// Size: 0x2f8 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuStepperWidget : UTslMenuOptionWidget {
	struct UButton* ButtonLeft; // 0x2b0(0x08)
	struct UButton* ButtonRight; // 0x2b8(0x08)
	struct UTslFlowingTextWidget* FlowTextOptionLabel; // 0x2c0(0x08)
	struct UHorizontalBox* HorizontalBoxIndicator; // 0x2c8(0x08)
	char pad_2D0[0x28]; // 0x2d0(0x28)

	void OnLeftButtonClicked(); // Function TslGameUI.TslMenuStepperWidget.OnLeftButtonClicked //  // @ game+0xe48da80
	void OnRightButtonClicked(); // Function TslGameUI.TslMenuStepperWidget.OnRightButtonClicked //  // @ game+0xe48fc1c
};

// Class TslGameUI.TslMenuTextBoxWidget
// Size: 0x2f0 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct UTslMenuTextBoxWidget : UTslMenuOptionWidget {
	struct UBorder* BorderInputKeyDisplay; // 0x2b0(0x08)
	struct UTslCondEditableText* InputText; // 0x2b8(0x08)
	char pad_2C0[0x30]; // 0x2c0(0x30)

	void OnTextCommitted(); // Function TslGameUI.TslMenuTextBoxWidget.OnTextCommitted //  // @ game+0xe493aac
	void OnTextRejected(); // Function TslGameUI.TslMenuTextBoxWidget.OnTextRejected //  // @ game+0xe493b68
};

// Class TslGameUI.*0518f605ea
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*0518f605ea : UBlueprintFunctionLibrary {
};

// Class TslGameUI.TslMessageHudWidget
// Size: 0x4f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMessageHudWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct TArray<struct FSystemMessageInfo> ImportantMessages; // 0x428(0x10)
	struct UTslNewMessageBorderWidget* WidgetSystemMessageBox; // 0x438(0x08)
	struct UTslNewMessageBorderWidget* WidgetImportantMessageBox; // 0x440(0x08)
	struct UTslNewMessageBorderWidget* WidgetVoiceChannelLimitBox; // 0x448(0x08)
	struct UTslNewMessageBorderWidget* WidgetObserverAssignMessage; // 0x450(0x08)
	struct URetainerBox* RetainerboxSystemMessageBox; // 0x458(0x08)
	struct URetainerBox* RetainerboxVoiceChannelLimitBox; // 0x460(0x08)
	struct URetainerBox* RetainerboxImportantMessageBox; // 0x468(0x08)
	struct URetainerBox* RetainerboxObserverAssignMessage; // 0x470(0x08)
	struct UCanvasPanel* PanelSystemMessage; // 0x478(0x08)
	struct UTslBlinkMessageWidget* WidgetJoiningBlinkMessage; // 0x480(0x08)
	struct UTslPubgIdWidget* WidgetPubgId; // 0x488(0x08)
	float PubgIdLifeTime; // 0x490(0x04)
	float ImportanMessageDelayTime; // 0x494(0x04)
	struct UStringTable* UIStringTable; // 0x498(0x08)
	char pad_4A0[0x50]; // 0x4a0(0x50)

	void OnDisplayMessage(); // Function TslGameUI.TslMessageHudWidget.OnDisplayMessage //  // @ game+0xe9f8c8
	void UpdatePubgIdWidgetWithKiller(); // Function TslGameUI.TslMessageHudWidget.UpdatePubgIdWidgetWithKiller //  // @ game+0x11041c4
	void OnUpdateRemainingTime(); // Function TslGameUI.TslMessageHudWidget.OnUpdateRemainingTime //  // @ game+0x1069bc4
	void DisplayMessage(); // Function TslGameUI.TslMessageHudWidget.DisplayMessage //  // @ game+0xe47dde4
	void OnDisplayVoiceChannelStateMessage(); // Function TslGameUI.TslMessageHudWidget.OnDisplayVoiceChannelStateMessage //  // @ game+0xe48c0f0
	void OnMatchStarted(); // Function TslGameUI.TslMessageHudWidget.OnMatchStarted //  // @ game+0x135e008
	void HidePubgIdWidget(); // Function TslGameUI.TslMessageHudWidget.HidePubgIdWidget //  // @ game+0x1104400
};

// Class TslGameUI.TslMinimapNameInfoWidget
// Size: 0x348 (Inherited: 0x330)  [layout: KHOP]
struct UTslMinimapNameInfoWidget : UTslUserWidget {
	struct UTextBlock* MapNameTextBlock; // 0x330(0x08)
	struct UTextBlock* CameraTextBlock; // 0x338(0x08)
	struct UTextBlock* TeamModeTextBlock; // 0x340(0x08)
};

// Class TslGameUI.TslMiniPUBGIdWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslMiniPUBGIdWidget : UUmgBaseWidget {
	struct FString Name; // 0x420(0x10)
	int32 Level; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FString EmblemId; // 0x438(0x10)
	struct FString NameplateId; // 0x448(0x10)
	enum class EOutGamePlatformProvider Platform; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
};

// Class TslGameUI.TslMouseWidget
// Size: 0x440 (Inherited: 0x420)  [layout: KHOP]
struct UTslMouseWidget : UUmgBaseWidget {
	struct UPanelWidget* PanelButtons; // 0x420(0x08)
	struct UImage* ImageMiddleMouse; // 0x428(0x08)
	struct TArray<struct FString> MiddleMouseButtonActionsOrAxies; // 0x430(0x10)
};

// Class TslGameUI.TslMultiCheckBoxWidget
// Size: 0x460 (Inherited: 0x420)  [layout: KHOP]
struct UTslMultiCheckBoxWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UPanelWidget* ListItems; // 0x430(0x08)
	struct UClass* EntryWidgetClass; // 0x438(0x08)
	struct TArray<struct FTslMultiCheckBoxItem> Items; // 0x440(0x10)
	struct TArray<struct UTslCheckBoxEntryWidget*> EntryWidgets; // 0x450(0x10)

	void HandleEntryCheckedStateChanged(); // Function TslGameUI.TslMultiCheckBoxWidget.HandleEntryCheckedStateChanged //  // @ game+0xe47f130
};

// Class TslGameUI.TslNewCastingBarWidget
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslNewCastingBarWidget : UUmgBaseWidget {
	struct UImage* ImageCircleProgress; // 0x420(0x08)
	struct UTextBlock* TextTime; // 0x428(0x08)
	struct UCanvasPanel* PanelCastingBar; // 0x430(0x08)
	struct FVector2D ADSTranslation; // 0x438(0x08)
	struct UMaterialInstanceDynamic* CircleProgressMaterial; // 0x440(0x08)
	struct UTslInteractInfoTextWidget* WidgetCastingBarInfoText; // 0x448(0x08)
	struct UImage* ImageIcon; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
};

// Class TslGameUI.TslNewMessageBorderWidget
// Size: 0x4a8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslNewMessageBorderWidget : UUmgBaseWidget {
	enum class EVerticalAlignment MessageAlignment; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	int32 NumofMaxMessge; // 0x424(0x04)
	bool bForceAddMessage; // 0x428(0x01)
	bool bUniqueCheck; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct UCurveFloat* MoveCurve; // 0x430(0x08)
	struct FVector2D BorderSize; // 0x438(0x08)
	bool bOverrideCanvasInSize; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct TArray<struct UTslNewSystemMessageWidget*> CheckList; // 0x448(0x10)
	struct UTslNewSystemMessageWidget* LastMessageWidget; // 0x458(0x08)
	struct UPanelWidget* PanelMessage; // 0x460(0x08)
	struct FVector2D OverridedBorderSize; // 0x468(0x08)
	struct TArray<struct FVector2D> WidgetPositionList; // 0x470(0x10)
	char pad_480[0x4]; // 0x480(0x04)
	struct FVector2D MessageSize; // 0x484(0x08)
	struct FVector2D BasePosition; // 0x48c(0x08)
	struct FVector2D MoveVector; // 0x494(0x08)
	char pad_49C[0xc]; // 0x49c(0x0c)

	void CheckWantRequestRender(); // Function TslGameUI.TslNewMessageBorderWidget.CheckWantRequestRender //  // @ game+0xe47da04
	void OnRemoveMessage(); // Function TslGameUI.TslNewMessageBorderWidget.OnRemoveMessage //  // @ game+0x10c024c
};

// Class TslGameUI.TslObserverAssignMessageBorderWidget
// Size: 0x4a8 (Inherited: 0x4a8)  [layout: KHOP]
struct UTslObserverAssignMessageBorderWidget : UTslNewMessageBorderWidget {
};

// Class TslGameUI.TslNewObserverKillMessageWidget
// Size: 0x570 (Inherited: 0x470)  [layout: KHOP]
struct UTslNewObserverKillMessageWidget : UTslKillMessageWidget {
	struct UTexture* BGTexture1; // 0x470(0x08)
	struct UTexture* BGTexture2; // 0x478(0x08)
	struct UTexture* BGTexture3; // 0x480(0x08)
	struct UTexture* BGTexture4; // 0x488(0x08)
	struct FLinearColor NormalColor; // 0x490(0x10)
	struct FLinearColor DBNONormalColor; // 0x4a0(0x10)
	struct FLinearColor KillVictimTextColor; // 0x4b0(0x10)
	float WeaponRatioLimit; // 0x4c0(0x04)
	float WeaponIconWidth; // 0x4c4(0x04)
	float WeaponIconHeight; // 0x4c8(0x04)
	float IconHeight; // 0x4cc(0x04)
	struct UTextBlock* TextKillerName; // 0x4d0(0x08)
	struct UTextBlock* TextVictimName; // 0x4d8(0x08)
	struct UTextBlock* TextKillerTeamName; // 0x4e0(0x08)
	struct UTextBlock* TextKillerTeamNumber; // 0x4e8(0x08)
	struct UTextBlock* TextVictimTeamName; // 0x4f0(0x08)
	struct UTextBlock* TextVictimTeamNumber; // 0x4f8(0x08)
	struct UWidgetSwitcher* SwitcherKillerIcon; // 0x500(0x08)
	struct UImage* ImageKillerLogo; // 0x508(0x08)
	struct UImage* ImageKillerStripe; // 0x510(0x08)
	struct UImage* ImageKillerTeamBg; // 0x518(0x08)
	struct UWidgetSwitcher* SwitcherVictimIcon; // 0x520(0x08)
	struct UImage* ImageVictimStripe; // 0x528(0x08)
	struct UImage* ImageVictimTeamBg; // 0x530(0x08)
	struct UImage* ImageVictimLogo; // 0x538(0x08)
	struct UImage* ImageCauser; // 0x540(0x08)
	struct UImage* ImageHeadShot; // 0x548(0x08)
	struct UImage* ImageCondition; // 0x550(0x08)
	struct UImage* ImageKillRedBg; // 0x558(0x08)
	struct UHorizontalBox* ListKillerInfo; // 0x560(0x08)
	struct U*7fa8406bd3* AnimKillRedBg; // 0x568(0x08)
};

// Class TslGameUI.TslNewSystemMessageWidget
// Size: 0x478 (Inherited: 0x420)  [layout: KHOP]
struct UTslNewSystemMessageWidget : UUmgBaseWidget {
	struct FText Message; // 0x420(0x18)
	float Duration; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UAkAudioEvent* Sound; // 0x440(0x08)
	struct FMulticastDelegate EndMessage; // 0x448(0x10)
	struct FTimerHandle SaveTimer; // 0x458(0x08)
	struct UTextBlock* MessageTextBlock; // 0x460(0x08)
	struct U*7fa8406bd3* Anim_FadeIn; // 0x468(0x08)
	struct U*7fa8406bd3* Anim_FadeOut; // 0x470(0x08)

	void StartFadeOut(); // Function TslGameUI.TslNewSystemMessageWidget.StartFadeOut //  // @ game+0x10eb6b0
	void OnFadeOutFinished(); // Function TslGameUI.TslNewSystemMessageWidget.OnFadeOutFinished //  // @ game+0x119394c
	void OnFadeInFinished(); // Function TslGameUI.TslNewSystemMessageWidget.OnFadeInFinished //  // @ game+0xf64218
};

// Class TslGameUI.TslObserverCanvasWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverCanvasWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* SwitcherInfo; // 0x420(0x08)
	struct UTslObserverRanksWidget* ObserverRanksWidget; // 0x428(0x08)

	void ToggleTeamItemUI(); // Function TslGameUI.TslObserverCanvasWidget.ToggleTeamItemUI //  // @ game+0xe497c84
	void OnMinimapExtendToggle(); // Function TslGameUI.TslObserverCanvasWidget.OnMinimapExtendToggle //  // @ game+0xe48e940
	void ToggleRanksUI(); // Function TslGameUI.TslObserverCanvasWidget.ToggleRanksUI //  // @ game+0xe497c70
};

// Class TslGameUI.TslObserverGameInfo
// Size: 0x4b0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverGameInfo : UUmgBaseWidget {
	struct U*7fa8406bd3* AnimLastTeams; // 0x420(0x08)
	struct U*7fa8406bd3* AnimLastTeamsSkip; // 0x428(0x08)
	struct U*7fa8406bd3* AnimLastTeamsInit; // 0x430(0x08)
	struct UHorizontalBox* ListTeamInfo; // 0x438(0x08)
	struct UHorizontalBox* ListLogo; // 0x440(0x08)
	struct TMap<int32, struct UTslObserverGameInfo_LastTeam*> LastTeamInfoWidgets; // 0x448(0x50)
	struct UTslObserverHudAnimManageWidget* ObserverAnimManageWidget; // 0x498(0x08)
	char pad_4A0[0x10]; // 0x4a0(0x10)

	void UpdateCurrentAliveCount(); // Function TslGameUI.TslObserverGameInfo.UpdateCurrentAliveCount //  // @ game+0xe498ab8
	void OnAliveTeamsCountChanged(); // Function TslGameUI.TslObserverGameInfo.OnAliveTeamsCountChanged //  // @ game+0xe4898a0
	void OnInitLastTeams(); // Function TslGameUI.TslObserverGameInfo.OnInitLastTeams //  // @ game+0xe48ce9c
};

// Class TslGameUI.TslObserverGameInfo_LastTeam
// Size: 0x4d8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverGameInfo_LastTeam : UUmgBaseWidget {
	struct UHorizontalBox* ListPlayerIcon; // 0x420(0x08)
	struct UImage* ImageTeamBg; // 0x428(0x08)
	struct UImage* ImageTeamPattern; // 0x430(0x08)
	struct UTextBlock* TextName; // 0x438(0x08)
	struct UImage* ImageTeamIcon; // 0x440(0x08)
	struct U*7fa8406bd3* AnimEnd; // 0x448(0x08)
	struct FLinearColor BGImageDimColor; // 0x450(0x10)
	struct FLinearColor NameTextNormalColor; // 0x460(0x10)
	struct FLinearColor NameTextDimColor; // 0x470(0x10)
	struct FLinearColor PlayerNormalColor; // 0x480(0x10)
	struct FLinearColor PlayerDBNOColor; // 0x490(0x10)
	struct FLinearColor PlayerDieColor; // 0x4a0(0x10)
	struct UMaterialInstanceDynamic* IconMID; // 0x4b0(0x08)
	struct TArray<struct UImage*> PlayerIconArray; // 0x4b8(0x10)
	char pad_4C8[0x10]; // 0x4c8(0x10)
};

// Class TslGameUI.TslObserverGameInfo_Team
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UTslObserverGameInfo_Team : UTslUserWidget {
	struct UTextBlock* TeamCount; // 0x330(0x08)
	struct UBorder* ColorOverlay; // 0x338(0x08)

	void OnOverlayPrepass(); // Function TslGameUI.TslObserverGameInfo_Team.OnOverlayPrepass //  // @ game+0xe48ef50
};

// Class TslGameUI.TslObserverKillBanner
// Size: 0x4d8 (Inherited: 0x428)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverKillBanner : UTslObserverKillAnimWidget {
	struct UTslKillBannerAnimationWidget* KillBannerSolo; // 0x428(0x08)
	struct UTslKillBannerAnimationWidget* KillBannerTeam; // 0x430(0x08)
	struct UTslObserverPlayerIconWidget* PlayerIcon; // 0x438(0x08)
	struct UTslObserverPlayerIconWidget* TeamIcon; // 0x440(0x08)
	struct UTextBlock* TextKillCount; // 0x448(0x08)
	struct UTextBlock* TextKillCountEffect; // 0x450(0x08)
	struct UTextBlock* TextKillingSpree; // 0x458(0x08)
	struct UTslUserPlatformImageWidget* UserPlatformImage; // 0x460(0x08)
	struct UTextBlock* TextName; // 0x468(0x08)
	struct U*7fa8406bd3* AnimSolo; // 0x470(0x08)
	struct U*7fa8406bd3* AnimTeam; // 0x478(0x08)
	struct UMaterialParameterCollection* KillInfoMPC; // 0x480(0x08)
	struct FLinearColor KillingSpreeColor; // 0x488(0x10)
	struct FLinearColor DominatingColor; // 0x498(0x10)
	struct FLinearColor UnstoppableColor; // 0x4a8(0x10)
	struct UAkAudioEvent* KillBannerSoundAk; // 0x4b8(0x08)
	int32 MidLimitSolo; // 0x4c0(0x04)
	int32 MaxLimitSolo; // 0x4c4(0x04)
	int32 MinLimitTeam; // 0x4c8(0x04)
	int32 MidLimitTeam; // 0x4cc(0x04)
	int32 MaxLimitTeam; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)

	void KillingSpreeAnimationFinish(); // Function TslGameUI.TslObserverKillBanner.KillingSpreeAnimationFinish //  // @ game+0xe1c9cd4
};

// Class TslGameUI.TslObserverHudAnimManageWidget
// Size: 0x458 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverHudAnimManageWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UBorder* BorderHudAnim; // 0x430(0x08)
	struct UClass* ObserverTeamWipeOutWidgetClass; // 0x438(0x08)
	struct UClass* ObserverKillBannerWidgetClass; // 0x440(0x08)
	struct UTslObserverKillAnimWidget* CurrAnimWidget; // 0x448(0x08)
	struct UTslObserverGameInfo* TslObserverGameInfo; // 0x450(0x08)

	void IsBusy(); // Function TslGameUI.TslObserverHudAnimManageWidget.IsBusy //  // @ game+0xe4893e4
	void OnPersonalKillingSpree(); // Function TslGameUI.TslObserverHudAnimManageWidget.OnPersonalKillingSpree //  // @ game+0xe48f3cc
	void OnTeamKillingSpree(); // Function TslGameUI.TslObserverHudAnimManageWidget.OnTeamKillingSpree //  // @ game+0xe4937b8
	void Clear(); // Function TslGameUI.TslObserverHudAnimManageWidget.Clear //  // @ game+0xe47daa4
	void IsEmpty(); // Function TslGameUI.TslObserverHudAnimManageWidget.IsEmpty //  // @ game+0xe489400
	void OnCurrAnimFinish(); // Function TslGameUI.TslObserverHudAnimManageWidget.OnCurrAnimFinish //  // @ game+0xe48c01c
	void ProcData(); // Function TslGameUI.TslObserverHudAnimManageWidget.ProcData //  // @ game+0xe496714
	void Peek(); // Function TslGameUI.TslObserverHudAnimManageWidget.Peek //  // @ game+0xe496468
	void OnTeamWipeOut(); // Function TslGameUI.TslObserverHudAnimManageWidget.OnTeamWipeOut //  // @ game+0xe493870
	void Enqueue(); // Function TslGameUI.TslObserverHudAnimManageWidget.Enqueue //  // @ game+0xe47e958
	void Dequeue(); // Function TslGameUI.TslObserverHudAnimManageWidget.Dequeue //  // @ game+0xe47dd18
	void NumElems(); // Function TslGameUI.TslObserverHudAnimManageWidget.NumElems //  // @ game+0xe489654
};

// Class TslGameUI.TslObserverTeamWipeOutWidget
// Size: 0x468 (Inherited: 0x428)  [layout: KHOP]
struct UTslObserverTeamWipeOutWidget : UTslObserverKillAnimWidget {
	struct UTslObserverPlayerIconWidget* ElimTeamLogo; // 0x428(0x08)
	struct UTslObserverPlayerIconWidget* DownedTeamLogo; // 0x430(0x08)
	struct UTslObserverPlayerIconWidget* ElimTeamLogoC; // 0x438(0x08)
	struct UTslObserverPlayerIconWidget* DownedTeamLogoC; // 0x440(0x08)
	struct UTextBlock* TextElimTeam; // 0x448(0x08)
	struct UTextBlock* TextDownedTeam; // 0x450(0x08)
	struct U*7fa8406bd3* AnimWipeOut; // 0x458(0x08)
	struct UAkAudioEvent* WipeOutSoundAk; // 0x460(0x08)

	void WipeOutAnimationFinished(); // Function TslGameUI.TslObserverTeamWipeOutWidget.WipeOutAnimationFinished //  // @ game+0xe49a604
};

// Class TslGameUI.TslObserverMatchRanking
// Size: 0x468 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverMatchRanking : UUmgBaseWidget {
	struct UClass* TeamInfoWidgetTemplate; // 0x420(0x08)
	float ScrollAmount; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct UTslMatchRankingTeamInfo*> MatchRankingTeamInfos; // 0x430(0x10)
	float TeamInfoAnimationDelay; // 0x440(0x04)
	float TeamInfoFirstAnimationDelay; // 0x444(0x04)
	struct UWrapBox* WrapBoxTeamList; // 0x448(0x08)
	struct UScrollBox* ScrollboxList; // 0x450(0x08)
	struct UTslUniversalInputVisibilitySwitcher* SwitcherScrollGuide; // 0x458(0x08)
	struct U*7fa8406bd3* AnimStart; // 0x460(0x08)

	void OnScroll(); // Function TslGameUI.TslObserverMatchRanking.OnScroll //  // @ game+0xe48ffe0
};

// Class TslGameUI.TslObserverMatchStatistic
// Size: 0x440 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverMatchStatistic : UUmgBaseWidget {
	struct UTslObserverMatchStatisticInfo* KillStatisticsWidget; // 0x420(0x08)
	struct UTslObserverMatchStatisticInfo* AssistStatisticsWidget; // 0x428(0x08)
	struct UTslObserverMatchStatisticInfo* DamageStatisticsWidget; // 0x430(0x08)
	struct U*7fa8406bd3* AnimMVP; // 0x438(0x08)
};

// Class TslGameUI.TslObserverMatchStatisticInfo
// Size: 0x458 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverMatchStatisticInfo : UUmgBaseWidget {
	struct UTextBlock* TextTitle; // 0x420(0x08)
	struct UTextBlock* TextTeamName; // 0x428(0x08)
	struct UTextBlock* TextScore; // 0x430(0x08)
	struct UTslObserverPlayerIconWidget* TeamIcon; // 0x438(0x08)
	struct U*7fa8406bd3* AnimStart; // 0x440(0x08)
	enum class ELeagueMatchStatistic LeagueMatchStatisticType; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float AnimationDelay; // 0x44c(0x04)
	char pad_450[0x8]; // 0x450(0x08)

	void OnStatisticsInfoAnimation(); // Function TslGameUI.TslObserverMatchStatisticInfo.OnStatisticsInfoAnimation //  // @ game+0xe4934c4
};

// Class TslGameUI.*e0d4e5b9a8
// Size: 0x70 (Inherited: 0x30)  [layout: KHOP]
struct U*e0d4e5b9a8 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct ATslPlayerStateBase* PlayerState; // 0x58(0x08)
	struct ATslCharacter* Character; // 0x60(0x08)
	struct UTslObserverPlayerListTileInfoWidget* Widget; // 0x68(0x08)
};

// Class TslGameUI.TslObserverPlayerIconWidget
// Size: 0x478 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverPlayerIconWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct FVector2D PlayerIconSize; // 0x428(0x08)
	struct FVector2D NumberIconSize; // 0x430(0x08)
	int32 NumberFontSize; // 0x438(0x04)
	int32 NumberFontOutlineSize; // 0x43c(0x04)
	struct TArray<float> RotationAmounts; // 0x440(0x10)
	struct UWidgetSwitcher* SwitcherPlayerIcon; // 0x450(0x08)
	struct UImage* ImagePattern; // 0x458(0x08)
	struct UImage* ImagePlayerIcon; // 0x460(0x08)
	struct UImage* ImagePlayerBg; // 0x468(0x08)
	struct UTextBlock* TextNumber; // 0x470(0x08)
};

// Class TslGameUI.TslMatchLogSquadNumberWidget
// Size: 0x480 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTslMatchLogSquadNumberWidget : UTslObserverPlayerIconWidget {
	char pad_478[0x8]; // 0x478(0x08)
};

// Class TslGameUI.TslObserverPlayerInfoWidget
// Size: 0x698 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverPlayerInfoWidget : UUmgBaseWidget {
	struct UTexture* UnArmedIcon; // 0x420(0x08)
	float UnArmedIconRatio; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct ATslCharacter* CachedCharacter; // 0x430(0x08)
	int32 OldAmmoCount; // 0x438(0x04)
	int32 LastTotalKill; // 0x43c(0x04)
	char pad_440[0x8]; // 0x440(0x08)
	struct U*7fa8406bd3* AniAmmoIncreasing; // 0x448(0x08)
	struct U*7fa8406bd3* AniAmmoDecreasing; // 0x450(0x08)
	struct UTextBlock* TextUserName; // 0x458(0x08)
	struct UTextBlock* TextUserHealth; // 0x460(0x08)
	struct UTextBlock* TextTeamName; // 0x468(0x08)
	struct UImage* ImageTeamNameBg; // 0x470(0x08)
	struct UWidgetSwitcher* SwitcherPattern; // 0x478(0x08)
	struct UTextBlock* TextAmmoCount; // 0x480(0x08)
	struct UTextBlock* TextSlash; // 0x488(0x08)
	struct UTextBlock* TextAmmoTotalCount; // 0x490(0x08)
	struct UTextBlock* TextTotalKill; // 0x498(0x08)
	struct UTextBlock* TextKillCount; // 0x4a0(0x08)
	struct ULifeGaugeTemplateBaseWidget* LifeGaugeTemplateWidget; // 0x4a8(0x08)
	struct UTslEquipableItemIconBaseWidget* HelmetIconWidget; // 0x4b0(0x08)
	struct UTslEquipableItemIconBaseWidget* VestIconWidget; // 0x4b8(0x08)
	struct UImage* ImageScopeIcon; // 0x4c0(0x08)
	struct UTexture2D* DriverTexture; // 0x4c8(0x08)
	struct UTexture2D* MortarTexture; // 0x4d0(0x08)
	struct UImage* ImageWeaponIcon; // 0x4d8(0x08)
	struct USizeBox* SizeboxWeaponIcon; // 0x4e0(0x08)
	struct UTextBlock* TextMainWeaponName; // 0x4e8(0x08)
	struct UTextBlock* TextMainWeaponEmpty; // 0x4f0(0x08)
	struct FName WeaponIconTextureParmName; // 0x4f8(0x08)
	struct FName WeaponIconColorParmName; // 0x500(0x08)
	struct FLinearColor WeaponColor_Armed; // 0x508(0x10)
	struct FLinearColor WeaponColor_Normal; // 0x518(0x10)
	struct FLinearColor SecondWeaponColor_Normal; // 0x528(0x10)
	struct FLinearColor AmmoTotalCountColor; // 0x538(0x10)
	struct FColorBlindColorSet WeaponColorSet_NoReload; // 0x548(0x10)
	struct FColorBlindColorSet SecondWeaponColorSet_NoReload; // 0x558(0x10)
	struct TMap<struct FName, struct UTexture2D*> WeaponAttachableTextureMap; // 0x568(0x50)
	struct TArray<struct UTexture2D*> TeamBackgroundTextures; // 0x5b8(0x10)
	struct UTslUserPlatformImageWidget* UserPlatformImageWidget; // 0x5c8(0x08)
	struct FLinearColor CachedMainWeaponColor; // 0x5d0(0x10)
	struct FLinearColor CachedSecondWeaponColor; // 0x5e0(0x10)
	struct UTexture2D* CachedMainWeaponTexture; // 0x5f0(0x08)
	struct UTexture2D* CachedSecondWeaponTexture; // 0x5f8(0x08)
	struct UTexture2D* CachedScopeTexture; // 0x600(0x08)
	char pad_608[0x1]; // 0x608(0x01)
	bool bUseTwoTeamGameTeamColors; // 0x609(0x01)
	char pad_60A[0x2]; // 0x60a(0x02)
	struct FLinearColor NoReloadDarkColor; // 0x60c(0x10)
	struct FLinearColor AttackTeamColor; // 0x61c(0x10)
	struct FLinearColor AttackTeamBgColor; // 0x62c(0x10)
	struct FLinearColor AttackTeamDamageEffectColor; // 0x63c(0x10)
	struct FLinearColor DefenceTeamColor; // 0x64c(0x10)
	struct FLinearColor DefenceTeamBgColor; // 0x65c(0x10)
	struct FLinearColor DefenceTeamDamageEffectColor; // 0x66c(0x10)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct UImage* ImageBgItemInfo; // 0x680(0x08)
	char pad_688[0x10]; // 0x688(0x10)

	void OnViewTargetUpdate(); // Function TslGameUI.TslObserverPlayerInfoWidget.OnViewTargetUpdate //  // @ game+0xe495ebc
};

// Class TslGameUI.TslObserverPlayerListTileInfoWidget
// Size: 0x570 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverPlayerListTileInfoWidget : UUmgBaseWidget {
	char pad_420[0x40]; // 0x420(0x40)
	struct UTslFlowingTextWidget* TextPlayerName; // 0x460(0x08)
	struct UTextBlock* TextTeamName; // 0x468(0x08)
	struct UTextBlock* TextKillCount; // 0x470(0x08)
	struct ULifeGaugeTemplateBaseWidget* LifeGauge; // 0x478(0x08)
	struct UButton* ButtonPlayer; // 0x480(0x08)
	struct UButton* ButtonKick; // 0x488(0x08)
	struct UButton* ButtonReport; // 0x490(0x08)
	struct USizeBox* SizeboxTeamTag; // 0x498(0x08)
	struct UImage* ImageTeamPattern; // 0x4a0(0x08)
	struct UImage* ImageTeamBg; // 0x4a8(0x08)
	struct TArray<struct UTexture2D*> TeamBackgroundTextures; // 0x4b0(0x10)
	struct UTslUserPlatformImageWidget* UserPlatformImageWidget; // 0x4c0(0x08)
	struct UTextBlock* TextHotkeyNumber; // 0x4c8(0x08)
	struct FLinearColor HighlightedColor; // 0x4d0(0x10)
	struct FLinearColor ActivatedColor; // 0x4e0(0x10)
	struct FLinearColor DeactivatedColor; // 0x4f0(0x10)
	struct FString PlayerUniqueID; // 0x500(0x10)
	struct FString PlayerName; // 0x510(0x10)
	struct FString ClanName; // 0x520(0x10)
	struct FText KickReason; // 0x530(0x18)
	struct ATslCharacter* Character; // 0x548(0x08)
	struct ATslPlayerStateBase* CachedPlayerState; // 0x550(0x08)
	char pad_558[0x18]; // 0x558(0x18)

	void OnMouseClicked(); // Function TslGameUI.TslObserverPlayerListTileInfoWidget.OnMouseClicked //  // @ game+0xe48e954
	void OnReportButtonClicked(); // Function TslGameUI.TslObserverPlayerListTileInfoWidget.OnReportButtonClicked //  // @ game+0xe48fb14
	void OnSavedCharacter(); // Function TslGameUI.TslObserverPlayerListTileInfoWidget.OnSavedCharacter //  // @ game+0xe48fe2c
	void OnKickButtonClicked(); // Function TslGameUI.TslObserverPlayerListTileInfoWidget.OnKickButtonClicked //  // @ game+0xe48d72c
	void KickPlayer(); // Function TslGameUI.TslObserverPlayerListTileInfoWidget.KickPlayer //  // @ game+0xe4894d4
};

// Class TslGameUI.TslObserverPlayerListTileWidget
// Size: 0x490 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverPlayerListTileWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UPanelWidget* ListPlayer; // 0x428(0x08)
	struct UWidget* ListTeamRank; // 0x430(0x08)
	struct UTextBlock* TextTeamRank; // 0x438(0x08)
	struct UWidgetSwitcher* SwitcherTeamLogo; // 0x440(0x08)
	struct UImage* ImageTeamLogo; // 0x448(0x08)
	struct UImage* ImageTeamNumberBg; // 0x450(0x08)
	struct UTextBlock* TextTeamNumber; // 0x458(0x08)
	struct UTextBlock* TextTotalKill; // 0x460(0x08)
	struct UTexture2D* CachedTeamTexture; // 0x468(0x08)
	char pad_470[0x20]; // 0x470(0x20)

	void UpdateStripeTexture(); // Function TslGameUI.TslObserverPlayerListTileWidget.UpdateStripeTexture //  // @ game+0x43bab4
};

// Class TslGameUI.*fefa0f46de
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*fefa0f46de : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TMap<struct FString, struct U*e0d4e5b9a8*> Players; // 0x40(0x50)
	struct UTslObserverPlayerListTileWidget* Widget; // 0x90(0x08)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class TslGameUI.TslObserverPlayerListWidget
// Size: 0x5c8 (Inherited: 0x470)  [layout: KHOP]
struct UTslObserverPlayerListWidget : UBlockInputUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
	struct UClass* TileWidgetTemplate; // 0x478(0x08)
	struct UClass* TileInfoWidgetTemplate; // 0x480(0x08)
	struct UVerticalBox* ListPlayers; // 0x488(0x08)
	struct UWidgetSwitcher* SwitcherTitle; // 0x490(0x08)
	struct UButton* ButtonSwitchLeft; // 0x498(0x08)
	struct UButton* ButtonSwitchRight; // 0x4a0(0x08)
	struct UScrollBox* ScrollboxPlayers; // 0x4a8(0x08)
	struct U*7fa8406bd3* AnimIn; // 0x4b0(0x08)
	struct FTimerHandle TimerHandler; // 0x4b8(0x08)
	struct FTimerHandle TimerHandler_SortRefreshByDistance; // 0x4c0(0x08)
	struct ATslCharacter* CachedTargetCharacter; // 0x4c8(0x08)
	struct TMap<struct FString, struct FRegistedPlayer> PlayerRegistry; // 0x4d0(0x50)
	struct TMap<int32, struct U*fefa0f46de*> TeamRegistry; // 0x520(0x50)
	struct TArray<enum class EObserverPlayerListType> ObserverSteps; // 0x570(0x10)
	char pad_580[0x8]; // 0x580(0x08)
	struct UTslObserverPlayerListTileInfoWidget* HoveredTileInfoWidget; // 0x588(0x08)
	char pad_590[0x28]; // 0x590(0x28)
	struct TArray<struct UTslObserverPlayerListTileInfoWidget*> CurrentTileInfoWidgetList; // 0x5b8(0x10)

	void OnAnimInFinished(); // Function TslGameUI.TslObserverPlayerListWidget.OnAnimInFinished //  // @ game+0xe48992c
	void MoveUpFastFocus_GamePad(); // Function TslGameUI.TslObserverPlayerListWidget.MoveUpFastFocus_GamePad //  // @ game+0xe48959c
	void OnMoveTileLeft(); // Function TslGameUI.TslObserverPlayerListWidget.OnMoveTileLeft //  // @ game+0xe48e9a8
	void OnSelectPlayer(); // Function TslGameUI.TslObserverPlayerListWidget.OnSelectPlayer //  // @ game+0xe491cf8
	void OnTileInfoSelect(); // Function TslGameUI.TslObserverPlayerListWidget.OnTileInfoSelect //  // @ game+0xe493cd4
	void MoveUpFocus_GamePad(); // Function TslGameUI.TslObserverPlayerListWidget.MoveUpFocus_GamePad //  // @ game+0xe4895b0
	void OnTileInfoMouseEnter(); // Function TslGameUI.TslObserverPlayerListWidget.OnTileInfoMouseEnter //  // @ game+0xe493be0
	void OnTileInfoMouseLeave(); // Function TslGameUI.TslObserverPlayerListWidget.OnTileInfoMouseLeave //  // @ game+0xe493c58
	void OnReportPlayer(); // Function TslGameUI.TslObserverPlayerListWidget.OnReportPlayer //  // @ game+0xe48fb28
	void MoveDownFocus_GamePad(); // Function TslGameUI.TslObserverPlayerListWidget.MoveDownFocus_GamePad //  // @ game+0xe489574
	void UpdateWidget(); // Function TslGameUI.TslObserverPlayerListWidget.UpdateWidget //  // @ game+0xe498f88
	void MoveDownFastFocus_GamePad(); // Function TslGameUI.TslObserverPlayerListWidget.MoveDownFastFocus_GamePad //  // @ game+0xe489560
	void OnNeedSort(); // Function TslGameUI.TslObserverPlayerListWidget.OnNeedSort //  // @ game+0xe48ecbc
	void UpdateSortRefreshByDistance(); // Function TslGameUI.TslObserverPlayerListWidget.UpdateSortRefreshByDistance //  // @ game+0xe48ecbc
	void HideWidget(); // Function TslGameUI.TslObserverPlayerListWidget.HideWidget //  // @ game+0xe489318
	void OnWidgetShowChanged(); // Function TslGameUI.TslObserverPlayerListWidget.OnWidgetShowChanged //  // @ game+0xe495f38
	void OnMoveTileRight(); // Function TslGameUI.TslObserverPlayerListWidget.OnMoveTileRight //  // @ game+0xe48e9bc
};

// Class TslGameUI.TslObserverRankListEntry
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverRankListEntry : UUmgBaseWidget {
	struct UTextBlock* TextPlayerRank; // 0x420(0x08)
	struct UTextBlock* TextPlayerName; // 0x428(0x08)
	struct UTextBlock* TextPlayerValue; // 0x430(0x08)
	struct UImage* ImageEntryBg; // 0x438(0x08)
	bool bIsTopRanker; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	struct FLinearColor TopRankerColor; // 0x444(0x10)
	struct FLinearColor TopRankerBgColor; // 0x454(0x10)
	char pad_464[0x4]; // 0x464(0x04)
};

// Class TslGameUI.TslObserverRankList
// Size: 0x480 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverRankList : UUmgBaseWidget {
	struct UTextBlock* TextRankListTitle; // 0x420(0x08)
	struct UTextBlock* TextRankListValue; // 0x428(0x08)
	struct UImage* ImageRankListIcon; // 0x430(0x08)
	struct UVerticalBox* ListRankedPlayers; // 0x438(0x08)
	struct FText RankListTitle; // 0x440(0x18)
	struct FText RankListValue; // 0x458(0x18)
	struct UTexture2D* RankListIcon; // 0x470(0x08)
	struct UClass* EntryWidgetClass; // 0x478(0x08)
};

// Class TslGameUI.TslObserverRanksWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverRanksWidget : UUmgBaseWidget {
	struct UPanelWidget* ListRanks; // 0x420(0x08)
	struct UTslObserverRankList* KillRankList; // 0x428(0x08)
	struct UTslObserverRankList* DamageDealtRankList; // 0x430(0x08)
	struct UTslObserverRankList* DamageTakenRankList; // 0x438(0x08)
	int32 RankCount; // 0x440(0x04)
	char pad_444[0x34]; // 0x444(0x34)
};

// Class TslGameUI.TslObserverTeamItemEntryWidget
// Size: 0x480 (Inherited: 0x420)  [layout: KHOP]
struct UTslObserverTeamItemEntryWidget : UUmgBaseWidget {
	struct FLinearColor NormalTextColor; // 0x420(0x10)
	struct FLinearColor DeadColor; // 0x430(0x10)
	struct FLinearColor NormalColor; // 0x440(0x10)
	struct UTextBlock* TextBlockName; // 0x450(0x08)
	struct UBorder* BorderWeapon; // 0x458(0x08)
	struct UBorder* BorderItem; // 0x460(0x08)
	struct UHorizontalBox* HorizontalBoxWeapon; // 0x468(0x08)
	struct UHorizontalBox* HorizontalBoxItem; // 0x470(0x08)
	struct ATslPlayerStateBase* CachedPlayerState; // 0x478(0x08)
};

// Class TslGameUI.TslObserverTeamItemWidget
// Size: 0x480 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObserverTeamItemWidget : UUmgBaseWidget {
	struct TArray<struct UTslObserverTeamItemEntryWidget*> PlayerWidget; // 0x420(0x10)
	struct TArray<struct UTslObserverTeamItemEntryWidget*> PlayerWidgetPool; // 0x430(0x10)
	struct UClass* PlayerEntryClass; // 0x440(0x08)
	struct UWrapBox* ListTeamItems; // 0x448(0x08)
	struct UScrollBox* ScrollboxList; // 0x450(0x08)
	struct UTextBlock* TextBlockTeamName; // 0x458(0x08)
	struct UBorder* BorderTeamName; // 0x460(0x08)
	struct UWidgetSwitcher* SwitcherPattern; // 0x468(0x08)
	float ScrollOffset; // 0x470(0x04)
	struct ATslCharacter* LastViewTargetCharacter; // 0x474(0x08)
	char pad_47C[0x4]; // 0x47c(0x04)

	void ScrollUp(); // Function TslGameUI.TslObserverTeamItemWidget.ScrollUp //  // @ game+0xe496d18
	void ScrollDown(); // Function TslGameUI.TslObserverTeamItemWidget.ScrollDown //  // @ game+0xe496d04
};

// Class TslGameUI.TslObsrvTeamEliDataQueueWidget
// Size: 0x430 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslObsrvTeamEliDataQueueWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)

	void Dequeue(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.Dequeue //  // @ game+0xe47dd3c
	void Clear(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.Clear //  // @ game+0xe47dac0
	void IsEmpty(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.IsEmpty //  // @ game+0xe489400
	void Find(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.Find //  // @ game+0xe47ee78
	void Enqueue(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.Enqueue //  // @ game+0xe47ed6c
	void Peek(); // Function TslGameUI.TslObsrvTeamEliDataQueueWidget.Peek //  // @ game+0xe496530
};

// Class TslGameUI.TslParachuteCanvasWidget
// Size: 0x440 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslParachuteCanvasWidget : UUmgBaseWidget {
	struct UTslParachuteGaugeWidget* ParachuteGaugeWidget; // 0x420(0x08)
	struct UTslParachuteAirSpeedWidget* ParachuteAirSpeedWidget; // 0x428(0x08)
	char pad_430[0x4]; // 0x430(0x04)
	struct ATslCharacter* ViewTargetCharacter; // 0x434(0x08)
	char pad_43C[0x4]; // 0x43c(0x04)

	void OnUpdateSkydiveState(); // Function TslGameUI.TslParachuteCanvasWidget.OnUpdateSkydiveState //  // @ game+0x108af60
	void OnUpdateViewTarget(); // Function TslGameUI.TslParachuteCanvasWidget.OnUpdateViewTarget //  // @ game+0x108b004
};

// Class TslGameUI.TslParachuteFollowConsoleGuideWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslParachuteFollowConsoleGuideWidget : UUmgBaseWidget {
	struct USizeBox* FollowGuideSizeBox; // 0x420(0x08)
	struct UWidgetSwitcher* FollowGuideSwitcher; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
};

// Class TslGameUI.TslParachuteGaugeWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslParachuteGaugeWidget : UUmgBaseWidget {
	struct USizeBox* FreeFallBar; // 0x420(0x08)
	struct USizeBox* ParachuteFallBar; // 0x428(0x08)
	struct USizeBox* GroundHeightBar; // 0x430(0x08)
	struct UTextBlock* AltitudeText; // 0x438(0x08)
	struct U*7fa8406bd3* PositionByPlayerAltitude; // 0x440(0x08)
	float CheckHeightPeriod; // 0x448(0x04)
	struct ATslCharacter* ViewTargetCharacter; // 0x44c(0x08)
	char pad_454[0x1c]; // 0x454(0x1c)

	void UpdateViewTarget(); // Function TslGameUI.TslParachuteGaugeWidget.UpdateViewTarget //  // @ game+0x1080ccc
	void SetSkydiveState(); // Function TslGameUI.TslParachuteGaugeWidget.SetSkydiveState //  // @ game+0x122b4b4
};

// Class TslGameUI.TslPCKeyGuideWidget
// Size: 0x508 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslPCKeyGuideWidget : UBlockInputUserWidget {
	struct UDataTable* KeyGuideDataTable; // 0x470(0x08)
	struct UClass* KeyGuideContentWidgetClass; // 0x478(0x08)
	struct FString DividerNamePrefix; // 0x480(0x10)
	struct FTslInputKey UnassignedKey; // 0x490(0x20)
	struct UInvalidationBox* InvalidationboxMain; // 0x4b0(0x08)
	struct UTslKeyboardWidget* WidgetKeyboardBP; // 0x4b8(0x08)
	struct UTslMouseWidget* WidgetMouseBP; // 0x4c0(0x08)
	struct UPanelWidget* PanelKeyGuideDescriptions; // 0x4c8(0x08)
	struct UTslTabSelectorWidget* WidgetKeyGuideTab; // 0x4d0(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x4d8(0x08)
	struct UTslCommonButton* ButtonBack; // 0x4e0(0x08)
	struct TArray<struct UPanelWidget*> CachedDescriptionColumns; // 0x4e8(0x10)
	char pad_4F8[0x10]; // 0x4f8(0x10)

	void OnEscapeEvent(); // Function TslGameUI.TslPCKeyGuideWidget.OnEscapeEvent //  // @ game+0xe48a298
	void UpdateCategory(); // Function TslGameUI.TslPCKeyGuideWidget.UpdateCategory //  // @ game+0xe498908
	void OnButtonBackHovered(); // Function TslGameUI.TslPCKeyGuideWidget.OnButtonBackHovered //  // @ game+0xdbdbae0
	void OnButtonBackClicked(); // Function TslGameUI.TslPCKeyGuideWidget.OnButtonBackClicked //  // @ game+0xe48a298
};

// Class TslGameUI.TslPlaneStanceWidget
// Size: 0x458 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslPlaneStanceWidget : UUmgBaseWidget {
	struct ATslCharacter* ViewTargetCharacter; // 0x420(0x08)
	struct UImage* PlaneImage; // 0x428(0x08)
	struct UGridPanel* SeatPanel; // 0x430(0x08)
	struct UTextBlock* RiderCountText; // 0x438(0x08)
	struct TArray<struct UImage*> PlaneSeats; // 0x440(0x10)
	char pad_450[0x8]; // 0x450(0x08)

	void UpdateViewTarget(); // Function TslGameUI.TslPlaneStanceWidget.UpdateViewTarget //  // @ game+0x1213fb0
};

// Class TslGameUI.TslPlayerSelectListBasePopupWidget
// Size: 0x550 (Inherited: 0x470)  [layout: KHOP]
struct UTslPlayerSelectListBasePopupWidget : UBlockInputUserWidget {
	struct UImage* BindImageTileImage; // 0x470(0x08)
	struct UTslFlowingTextWidget* BindTextTitle; // 0x478(0x08)
	struct UScrollBox* BindScrollBoxSlotGroup; // 0x480(0x08)
	struct UVerticalBox* BindVerticalBoxSlotGroup; // 0x488(0x08)
	struct UVerticalBox* BindVerticalBoxDescriptions; // 0x490(0x08)
	struct TArray<struct UTslPlayerSelectListSlotBaseWidget*> PlayerSelectListSlots; // 0x498(0x10)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct TArray<struct ATeam*> TeamMembers; // 0x4b0(0x10)
	struct FName BlueChipItemID; // 0x4c0(0x08)
	struct FText TitleText; // 0x4c8(0x18)
	struct FText DescriptionText; // 0x4e0(0x18)
	struct FText DisableDescriptionText; // 0x4f8(0x18)
	struct UTexture2D* TitleImage; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
	struct UClass* PlayerSelectListSlotClass; // 0x520(0x08)
	struct UClass* DescriptionWidgetClass; // 0x528(0x08)
	TScriptInterface<struct U*02e1f6a3c2> SlotContainer; // 0x530(0x10)
	TScriptInterface<struct U*2044b0f6ef> ItemSlot; // 0x540(0x10)

	void HandleConfirmButtonClicked(); // Function TslGameUI.TslPlayerSelectListBasePopupWidget.HandleConfirmButtonClicked //  // @ game+0xe47f11c
	void OnNotifyDropSlotOnOtherContainer(); // Function TslGameUI.TslPlayerSelectListBasePopupWidget.OnNotifyDropSlotOnOtherContainer //  // @ game+0xe48ed60
	void HandleCancelButtonClicked(); // Function TslGameUI.TslPlayerSelectListBasePopupWidget.HandleCancelButtonClicked //  // @ game+0xe47f0e0
};

// Class TslGameUI.TslPlayerSelectListPopupWidget
// Size: 0x560 (Inherited: 0x550)  [layout: KHOP]
struct UTslPlayerSelectListPopupWidget : UTslPlayerSelectListBasePopupWidget {
	struct UButton* BindButtonConfirm; // 0x550(0x08)
	struct UButton* BindButtonCancel; // 0x558(0x08)
};

// Class TslGameUI.TslPlayerSelectListPopupWidget_Gamepad
// Size: 0x558 (Inherited: 0x550)  [layout: LECH - offset chi la uoc luong]
struct UTslPlayerSelectListPopupWidget_Gamepad : UTslPlayerSelectListBasePopupWidget {
	float SlotGroupVisibleHieght; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)

	void OnAPressed(); // Function TslGameUI.TslPlayerSelectListPopupWidget_Gamepad.OnAPressed //  // @ game+0xe47f11c
	void OnBPressed(); // Function TslGameUI.TslPlayerSelectListPopupWidget_Gamepad.OnBPressed //  // @ game+0xe47f0e0
	void OnMoveDown(); // Function TslGameUI.TslPlayerSelectListPopupWidget_Gamepad.OnMoveDown //  // @ game+0xe48e980
	void OnMoveUp(); // Function TslGameUI.TslPlayerSelectListPopupWidget_Gamepad.OnMoveUp //  // @ game+0xe48e9d0
};

// Class TslGameUI.TslPlayerSelectListDescriptionWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslPlayerSelectListDescriptionWidget : UUmgBaseWidget {
	struct UTextBlock* BindTextDescription; // 0x420(0x08)
};

// Class TslGameUI.TslPlayerSelectListSlotBaseWidget
// Size: 0x510 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslPlayerSelectListSlotBaseWidget : UUmgBaseWidget {
	struct UBorder* BindBorderNumberBg; // 0x420(0x08)
	struct UTextBlock* BindTextNumber; // 0x428(0x08)
	struct UTslPubgIdWidget* BindWidgetPubgId; // 0x430(0x08)
	struct UWidget* BindWidgetDisable; // 0x438(0x08)
	struct UTextBlock* BindTextDisableText; // 0x440(0x08)
	struct UWidget* BindWidgetSelected; // 0x448(0x08)
	char pad_450[0xc0]; // 0x450(0xc0)
};

// Class TslGameUI.TslPlayerSelectListSlotWidget
// Size: 0x510 (Inherited: 0x510)  [layout: KHOP]
struct UTslPlayerSelectListSlotWidget : UTslPlayerSelectListSlotBaseWidget {
};

// Class TslGameUI.TslPlayerSelectListSlotWidget_Gamepad
// Size: 0x510 (Inherited: 0x510)  [layout: KHOP]
struct UTslPlayerSelectListSlotWidget_Gamepad : UTslPlayerSelectListSlotBaseWidget {
};

// Class TslGameUI.TslPopupWidget
// Size: 0x570 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct UTslPopupWidget : UTslPopupBoxWidget {
	struct UWidget* WarningImage; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
};

// Class TslGameUI.TslGameOptionCodePopupWidget
// Size: 0x580 (Inherited: 0x570)  [layout: KHOP]
struct UTslGameOptionCodePopupWidget : UTslPopupWidget {
	struct UWidgetSwitcher* ContentSwitcher; // 0x568(0x08)
	struct UEditableTextBox* OptionCodeTextInput; // 0x570(0x08)
	struct UTslMultiCheckBoxWidget* MultiCheckBoxWidget; // 0x578(0x08)

	void OnEscape(); // Function TslGameUI.TslGameOptionCodePopupWidget.OnEscape //  // @ game+0xe48c8ec
	void OnSelectedOptionTabsChanged(); // Function TslGameUI.TslGameOptionCodePopupWidget.OnSelectedOptionTabsChanged //  // @ game+0xe491d0c
	void OnOptionCodeTextChanged(); // Function TslGameUI.TslGameOptionCodePopupWidget.OnOptionCodeTextChanged //  // @ game+0xe48eea4
};

// Class TslGameUI.TslPlayerSearchWidget
// Size: 0x580 (Inherited: 0x570)  [layout: KHOP]
struct UTslPlayerSearchWidget : UTslPopupWidget {
	struct UBorder* BorderWarning; // 0x568(0x08)
	struct UEditableTextBox* TextBoxPlayerSearch; // 0x570(0x08)
	struct UTslObserverPlayerListWidget* CachedObserverPlayerListWidget; // 0x578(0x08)

	void OnBtnCancelClicked(); // Function TslGameUI.TslPlayerSearchWidget.OnBtnCancelClicked //  // @ game+0xdbdbab4
	void OnBtnOkClicked(); // Function TslGameUI.TslPlayerSearchWidget.OnBtnOkClicked //  // @ game+0x11fadb0
	void OnTextChanged(); // Function TslGameUI.TslPlayerSearchWidget.OnTextChanged //  // @ game+0xe4a21d4
	void CommitPlayerName(); // Function TslGameUI.TslPlayerSearchWidget.CommitPlayerName //  // @ game+0xe49bf98
};

// Class TslGameUI.TslPopupWidgetForReplay
// Size: 0x3c0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslPopupWidgetForReplay : UTslUserWidget {
	char pad_330[0x8]; // 0x330(0x08)
	struct U*7fa8406bd3* PopupEmerging; // 0x338(0x08)
	struct UBorder* Waiting; // 0x340(0x08)
	struct UButton* ButtonCancel; // 0x348(0x08)
	struct UButton* ButtonOK; // 0x350(0x08)
	struct UTextBlock* TextCancel; // 0x358(0x08)
	struct UTextBlock* TextOK; // 0x360(0x08)
	char pad_368[0x58]; // 0x368(0x58)

	void OnClickOKCallback(); // Function TslGameUI.TslPopupWidgetForReplay.OnClickOKCallback //  // @ game+0xe49e898
	void OnClickCancelCallback(); // Function TslGameUI.TslPopupWidgetForReplay.OnClickCancelCallback //  // @ game+0xe49e834
};

// Class TslGameUI.TslRankEmblemWidget
// Size: 0x498 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRankEmblemWidget : UUmgBaseWidget {
	struct UImage* ImageEmblem; // 0x420(0x08)
	struct UWidget* PanelEmblem; // 0x428(0x08)
	struct TMap<enum class EWuCompetitiveRankLobbyTier, struct FRankEmblemData> RankEmblemTextureMap; // 0x430(0x50)
	char pad_480[0x18]; // 0x480(0x18)
};

// Class TslGameUI.TslRealTimeMissionEntryWidget
// Size: 0x700 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslRealTimeMissionEntryWidget : UTslUserWidget {
	char pad_330[0x2a0]; // 0x330(0x2a0)
	struct UButton* ButtonRoot; // 0x5d0(0x08)
	struct UImage* ImageRewardItem; // 0x5d8(0x08)
	struct UTextBlock* TextRewardItemCount; // 0x5e0(0x08)
	struct UTslRichTextBlock* TextMissionName; // 0x5e8(0x08)
	struct UHorizontalBox* PanelProgressBarContainer; // 0x5f0(0x08)
	struct USizeBox* SizeBoxProgressBar; // 0x5f8(0x08)
	struct UTslRealTimeMissionProgressBarWidget* WidgetProgressBar; // 0x600(0x08)
	struct UTextBlock* TextCountCurrent; // 0x608(0x08)
	struct UTextBlock* TextCountMax; // 0x610(0x08)
	struct UWidget* BorderMissionReset; // 0x618(0x08)
	struct UWidget* ImageNewbieMark; // 0x620(0x08)
	struct UTslGamepadKeyIconWidget* WidgetResetGamepadKeyIcon; // 0x628(0x08)
	struct UTextBlock* TextMissionResetCount; // 0x630(0x08)
	struct UWidget* BorderComplete; // 0x638(0x08)
	struct UButton* ButtonMissionReset; // 0x640(0x08)
	struct UButton* ButtonRewardIconButton; // 0x648(0x08)
	struct UWidget* PanelJackpotEffect; // 0x650(0x08)
	struct UTslInventoryRadioMessageWidget* WidgetRadioMessageEffect; // 0x658(0x08)
	struct UTslInventoryRadioMessageWidget* WidgetFocusOutline; // 0x660(0x08)
	struct U*7fa8406bd3* AnimResetEffect; // 0x668(0x08)
	struct UClass* ProgressBarWidgetClass; // 0x670(0x08)
	struct FTslRealTimeMissionEntryUIData CachedData; // 0x678(0x60)
	struct TArray<struct UTslRealTimeMissionProgressBarWidget*> ProgressBarWidgetPool; // 0x6d8(0x10)
	char pad_6E8[0x18]; // 0x6e8(0x18)

	void HandleRootButtonUnhovered(); // Function TslGameUI.TslRealTimeMissionEntryWidget.HandleRootButtonUnhovered //  // @ game+0xe49db18
	void HandleRootButtonHovered(); // Function TslGameUI.TslRealTimeMissionEntryWidget.HandleRootButtonHovered //  // @ game+0xe49daf8
	void HandleRewardIconButtonUnhovered(); // Function TslGameUI.TslRealTimeMissionEntryWidget.HandleRewardIconButtonUnhovered //  // @ game+0xe49dad8
	void HandleMissionResetButtonClicked(); // Function TslGameUI.TslRealTimeMissionEntryWidget.HandleMissionResetButtonClicked //  // @ game+0xe49cffc
	void HandleRewardIconButtonHovered(); // Function TslGameUI.TslRealTimeMissionEntryWidget.HandleRewardIconButtonHovered //  // @ game+0xe49dab8
};

// Class TslGameUI.TslRealTimeMissionProgressBarWidget
// Size: 0x340 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslRealTimeMissionProgressBarWidget : UTslUserWidget {
	struct UImage* ImageProgressBar; // 0x330(0x08)
	float CachedMissionProgressBarXPosistion; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
};

// Class TslGameUI.TslRealTimeMissionWidget
// Size: 0x460 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslRealTimeMissionWidget : UTslUserWidget {
	char pad_330[0x70]; // 0x330(0x70)
	struct UVerticalBox* PanelEntryListContainer; // 0x3a0(0x08)
	struct UTslUniversalInputVisibilitySwitcher* UniversalSwitcherKeyPad; // 0x3a8(0x08)
	struct UCanvasPanel* ToolTipCanvas; // 0x3b0(0x08)
	struct UTslUniversalInputVisibilitySwitcher* UniversalSwitcherFocusedTooltip; // 0x3b8(0x08)
	struct UClass* MissionEntryWidgetClass; // 0x3c0(0x08)
	struct FVector2D ToolTipPositionOffset; // 0x3c8(0x08)
	float ToolTipDelayTimeForGamepad; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FText RadioMsgNotifyText; // 0x3d8(0x18)
	struct FText RadioMsgFailedText; // 0x3f0(0x18)
	struct FTslRealTimeMissionUIData CachedData; // 0x408(0x10)
	struct TArray<struct UTslRealTimeMissionEntryWidget*> MissionEntryWidgetPool; // 0x418(0x10)
	char pad_428[0x38]; // 0x428(0x38)

	void OnPressedGamepadMoveLeft(); // Function TslGameUI.TslRealTimeMissionWidget.OnPressedGamepadMoveLeft //  // @ game+0xe4a2004
	void OnPressedGamepadMoveDown(); // Function TslGameUI.TslRealTimeMissionWidget.OnPressedGamepadMoveDown //  // @ game+0xe4a1ff0
	void OnPressedGamepadA(); // Function TslGameUI.TslRealTimeMissionWidget.OnPressedGamepadA //  // @ game+0xe4a1fdc
	void Event_OnIngameMissionDataUpdated(); // Function TslGameUI.TslRealTimeMissionWidget.Event_OnIngameMissionDataUpdated //  // @ game+0xe49c0b0
	void OnPressedGamepadMoveUp(); // Function TslGameUI.TslRealTimeMissionWidget.OnPressedGamepadMoveUp //  // @ game+0xe4a2018
	void RequestRadioMessage(); // Function TslGameUI.TslRealTimeMissionWidget.RequestRadioMessage //  // @ game+0xe4a552c
	void OnForbiddenRadioMessage(); // Function TslGameUI.TslRealTimeMissionWidget.OnForbiddenRadioMessage //  // @ game+0xe49ef9c
};

// Class TslGameUI.TslReloadingGuideWidget
// Size: 0x4d8 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslReloadingGuideWidget : UUmgBaseWidget {
	struct FTimerHandle TimerHandle_HideWidget; // 0x420(0x08)
	struct UBorder* BorderTop; // 0x428(0x08)
	struct UTslGamepadMultipleKeyIconWidget* WidgetMultipleKeyIcon; // 0x430(0x08)
	struct U*7fa8406bd3* AnimHide; // 0x438(0x08)
	struct FName ReloadActionName; // 0x440(0x08)
	struct FText HoldText; // 0x448(0x18)
	struct FText DoubleTapText; // 0x460(0x18)
	struct FText ReloadText; // 0x478(0x18)
	char pad_490[0x48]; // 0x490(0x48)

	void OnReloadPadInput(); // Function TslGameUI.TslReloadingGuideWidget.OnReloadPadInput //  // @ game+0x10d62b8
	void OnCharacterDeath(); // Function TslGameUI.TslReloadingGuideWidget.OnCharacterDeath //  // @ game+0x135e0d8
	void OnInteractionWidgetEnabled(); // Function TslGameUI.TslReloadingGuideWidget.OnInteractionWidgetEnabled //  // @ game+0x9f86f4
	void CanHold(); // Function TslGameUI.TslReloadingGuideWidget.CanHold //  // @ game+0xe49be64
	void OnNotifyDBNO(); // Function TslGameUI.TslReloadingGuideWidget.OnNotifyDBNO //  // @ game+0x136f324
	void OnCharacterVault(); // Function TslGameUI.TslReloadingGuideWidget.OnCharacterVault //  // @ game+0xe49e790
	void UpdatePropertiesFromKeyBinding(); // Function TslGameUI.TslReloadingGuideWidget.UpdatePropertiesFromKeyBinding //  // @ game+0xe4a76e0
};

// Class TslGameUI.TslRenderingTimePoint
// Size: 0x428 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRenderingTimePoint : UUmgBaseWidget {
	float TimeInSec; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)

	void Show(); // Function TslGameUI.TslRenderingTimePoint.Show //  // @ game+0x43bab4
	void SetDirection(); // Function TslGameUI.TslRenderingTimePoint.SetDirection //  // @ game+0x43bab4
	void MouseUpEvent(); // Function TslGameUI.TslRenderingTimePoint.MouseUpEvent //  // @ game+0x43bab4
	void Hide(); // Function TslGameUI.TslRenderingTimePoint.Hide //  // @ game+0x43bab4
};

// Class TslGameUI.TslReplayCanvasWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayCanvasWidget : UUmgBaseWidget {
	struct UTslPubgIdWidget* PubgIdWidget; // 0x420(0x08)
	struct U*7fa8406bd3* FadeInAnim; // 0x428(0x08)

	void RefreshPubgIdBySpectator(); // Function TslGameUI.TslReplayCanvasWidget.RefreshPubgIdBySpectator //  // @ game+0xe4a5484
};

// Class TslGameUI.TslReplayList
// Size: 0x518 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATslReplayList : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	struct UClass* *1bbb78ccc5; // 0x410(0x08)
	struct UClass* *40a905ba7b; // 0x418(0x08)
	char pad_420[0xc0]; // 0x420(0xc0)
	struct TArray<struct UTslReplayListItem*> *dcec50c352; // 0x4e0(0x10)
	char pad_4F0[0x18]; // 0x4f0(0x18)
	int32 *ece045f48e; // 0x508(0x04)
	int32 *5fda28db4f; // 0x50c(0x04)
	char pad_510[0x8]; // 0x510(0x08)

	void *49b16efcce(); // Function TslGameUI.TslReplayList.*49b16efcce //  // @ game+0xe4a6260
	void CreateReplayListEvent(); // Function TslGameUI.TslReplayList.CreateReplayListEvent //  // @ game+0xe49c088
	void *2896ae4644(); // Function TslGameUI.TslReplayList.*2896ae4644 //  // @ game+0xe4a624c
};

// Class TslGameUI.TslReplayListItem
// Size: 0x6f0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslReplayListItem : UUmgBaseWidget {
	char pad_420[0x208]; // 0x420(0x208)
	struct UButton* ButtonItem; // 0x628(0x08)
	struct UTextBlock* SessionName; // 0x630(0x08)
	struct UTextBlock* FriendlyName; // 0x638(0x08)
	struct UTextBlock* Size; // 0x640(0x08)
	struct UTextBlock* Length; // 0x648(0x08)
	struct UTextBlock* Mode; // 0x650(0x08)
	struct UTextBlock* Live; // 0x658(0x08)
	struct UTextBlock* VersionCompatibleText; // 0x660(0x08)
	struct UTextBlock* InCompleteText; // 0x668(0x08)
	struct UCheckBox* CheckBoxShouldKeep; // 0x670(0x08)
	struct UCheckBox* CheckBoxDownload; // 0x678(0x08)
	struct UTextBlock* ShouldKeepText; // 0x680(0x08)
	struct UTextBlock* CorruptText; // 0x688(0x08)
	struct UTextBlock* ServerRecordingText; // 0x690(0x08)
	struct UTextBlock* AllDeadOrWinText; // 0x698(0x08)
	struct UTextBlock* GameVersion; // 0x6a0(0x08)
	struct UTextBlock* MK3DReplayVersion; // 0x6a8(0x08)
	struct UTextBlock* CameraEventText; // 0x6b0(0x08)
	struct UButton* Download; // 0x6b8(0x08)
	struct UTextBlock* DN; // 0x6c0(0x08)
	struct UButton* Cancel; // 0x6c8(0x08)
	struct UTextBlock* CAN; // 0x6d0(0x08)
	struct UTextBlock* Date; // 0x6d8(0x08)
	struct UTextBlock* ActionMessage; // 0x6e0(0x08)
	char pad_6E8[0x8]; // 0x6e8(0x08)

	void OnDownloadClicked(); // Function TslGameUI.TslReplayListItem.OnDownloadClicked //  // @ game+0xe49ec70
	void ShowDownloadPercent(); // Function TslGameUI.TslReplayListItem.ShowDownloadPercent //  // @ game+0xe4a64f8
	void UnzipEvent(); // Function TslGameUI.TslReplayListItem.UnzipEvent //  // @ game+0xe4a72e8
	void OnCancelClicked(); // Function TslGameUI.TslReplayListItem.OnCancelClicked //  // @ game+0xe49e768
	void ShowUnzipPercent(); // Function TslGameUI.TslReplayListItem.ShowUnzipPercent //  // @ game+0xe4a6884
	void ShowUnzipDone(); // Function TslGameUI.TslReplayListItem.ShowUnzipDone //  // @ game+0xe4a6710
	void OnButtonClicked(); // Function TslGameUI.TslReplayListItem.OnButtonClicked //  // @ game+0xe49e740
	void OnCheckStateChanged(); // Function TslGameUI.TslReplayListItem.OnCheckStateChanged //  // @ game+0xe49e7b8
};

// Class TslGameUI.TslReplayRenderProgress
// Size: 0x4b0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslReplayRenderProgress : UUmgBaseWidget {
	struct UTslGameInstance* TslGameInstance; // 0x420(0x08)
	struct UTslReplayTimeline* ReplayTimeline; // 0x428(0x08)
	bool IsRenderCapture; // 0x430(0x01)
	bool IsAudioCapture; // 0x431(0x01)
	bool IsRecordComplete; // 0x432(0x01)
	bool IsReadyAudioCapture; // 0x433(0x01)
	bool IsAudioRecordStart; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	int32 StartTimeInSec; // 0x438(0x04)
	int32 EndTimeInSec; // 0x43c(0x04)
	int32 BasicFPS; // 0x440(0x04)
	float StartTimeMS; // 0x444(0x04)
	struct TArray<float> TakeTimes; // 0x448(0x10)
	struct UTslCommonButton* BtnCancel; // 0x458(0x08)
	struct UTslCommonButton* BtnConfirm; // 0x460(0x08)
	struct UProgressBar* ProgressBarMain; // 0x468(0x08)
	struct UTextBlock* TextPercent; // 0x470(0x08)
	struct UTextBlock* StateText; // 0x478(0x08)
	struct UTextBlock* ProgressCount; // 0x480(0x08)
	struct UWidgetSwitcher* ViewSwitcher; // 0x488(0x08)
	struct UCanvasPanel* HBoxTextRender; // 0x490(0x08)
	struct UCanvasPanel* HBoxTextAudio; // 0x498(0x08)
	struct UCanvasPanel* PanelProgress; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)

	void ReturnCodeFunction(); // Function TslGameUI.TslReplayRenderProgress.ReturnCodeFunction //  // @ game+0xe4a5540
	void DummyEvent(); // Function TslGameUI.TslReplayRenderProgress.DummyEvent //  // @ game+0xe49c09c
	void OnPause(); // Function TslGameUI.TslReplayRenderProgress.OnPause //  // @ game+0xe4a1fb4
	void SetCompleteWidget(); // Function TslGameUI.TslReplayRenderProgress.SetCompleteWidget //  // @ game+0xe4a5758
	void ClickRenderCancel(); // Function TslGameUI.TslReplayRenderProgress.ClickRenderCancel //  // @ game+0xe49becc
	void RenderCancel(); // Function TslGameUI.TslReplayRenderProgress.RenderCancel //  // @ game+0xe4a5500
	void HighlightRenderStart(); // Function TslGameUI.TslReplayRenderProgress.HighlightRenderStart //  // @ game+0xe49dd2c
};

// Class TslGameUI.TslReplayRenderOption
// Size: 0x4f8 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayRenderOption : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UTextBlock* TextVideoLengthTime; // 0x428(0x08)
	struct UTextBlock* TextResolutionValue; // 0x430(0x08)
	struct UEditableTextBox* EditableTextSaveFileName; // 0x438(0x08)
	struct UTextBlock* TextFrameRateValue; // 0x440(0x08)
	struct UTextBlock* TextQualityValue; // 0x448(0x08)
	struct UButton* BtnStart; // 0x450(0x08)
	struct UCanvasPanel* CanvasPanelMain; // 0x458(0x08)
	struct UButton* BtnCancel; // 0x460(0x08)
	struct UButton* BtnFileExplorer; // 0x468(0x08)
	struct UButton* BtnFrameRateLeftArrow; // 0x470(0x08)
	struct UButton* BtnFrameRateRightArrow; // 0x478(0x08)
	struct UButton* BtnQualityLeftArrow; // 0x480(0x08)
	struct UButton* BtnQualityRightArrow; // 0x488(0x08)
	struct UButton* BtnResolutionLeftArrow; // 0x490(0x08)
	struct UButton* BtnResolutionRightArrow; // 0x498(0x08)
	float ReplayStartSec; // 0x4a0(0x04)
	float ReplayEndSec; // 0x4a4(0x04)
	struct TArray<struct FString> FileNames; // 0x4a8(0x10)
	int32 fps; // 0x4b8(0x04)
	float VideoBitrateRatio; // 0x4bc(0x04)
	int32 VideoBitrateDefault; // 0x4c0(0x04)
	int32 Width; // 0x4c4(0x04)
	int32 Height; // 0x4c8(0x04)
	int32 VideoLengthMS; // 0x4cc(0x04)
	int32 IndexResolution; // 0x4d0(0x04)
	int32 IndexFPS; // 0x4d4(0x04)
	int32 IndexVideoQuality; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UTslReplayTimeline* ReplayTimeline; // 0x4e0(0x08)
	struct UClass* DefaultReplayRenderProgressClass; // 0x4e8(0x08)
	struct UTslReplayRenderProgress* ReplayRenderWidget; // 0x4f0(0x08)

	void SetCameraPath(); // Function TslGameUI.TslReplayRenderOption.SetCameraPath //  // @ game+0xe4a56dc
	void OnClicked_BtnQualityRightArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnQualityRightArrow //  // @ game+0xe49ea28
	void OnClicked_BtnCancel(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnCancel //  // @ game+0xe49e970
	void OnClicked_BtnResolutionLeftArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnResolutionLeftArrow //  // @ game+0xe49ea58
	void OnClicked_BtnFileExplorer(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnFileExplorer //  // @ game+0xe49e984
	void OnClicked_BtnFrameRateRightArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnFrameRateRightArrow //  // @ game+0xe49e9c8
	void OnClicked_BtnQualityLeftArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnQualityLeftArrow //  // @ game+0xe49e9f8
	void OnClicked_BtnResolutionRightArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnResolutionRightArrow //  // @ game+0xe49ea88
	void OnClicked_BtnFrameRateLeftArrow(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnFrameRateLeftArrow //  // @ game+0xe49e998
	void SetDefaultFileName(); // Function TslGameUI.TslReplayRenderOption.SetDefaultFileName //  // @ game+0xe4a576c
	void OnClicked_BtnStart(); // Function TslGameUI.TslReplayRenderOption.OnClicked_BtnStart //  // @ game+0xe49eab8
};

// Class TslGameUI.TslReplayTimelineCameraEventItem
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayTimelineCameraEventItem : UUmgBaseWidget {
	bool bIsSelected; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	int32 TimeMS; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UTslReplayTimeline* ReplayTimeline; // 0x430(0x08)

	void SetMarkerColor(); // Function TslGameUI.TslReplayTimelineCameraEventItem.SetMarkerColor //  // @ game+0x43bab4
	void ThumbnailCheckStart(); // Function TslGameUI.TslReplayTimelineCameraEventItem.ThumbnailCheckStart //  // @ game+0x43bab4
	void SetDataInit(); // Function TslGameUI.TslReplayTimelineCameraEventItem.SetDataInit //  // @ game+0x43bab4
	void SetSelectMark(); // Function TslGameUI.TslReplayTimelineCameraEventItem.SetSelectMark //  // @ game+0x43bab4
	void OnSelect(); // Function TslGameUI.TslReplayTimelineCameraEventItem.OnSelect //  // @ game+0x43bab4
};

// Class TslGameUI.TslReplayTimelineDBNOEventItem
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayTimelineDBNOEventItem : UUmgBaseWidget {
	int32 DBNOTime; // 0x420(0x04)
	int32 TotalReplayTime; // 0x424(0x04)
	struct FString DBNOInstigatorName; // 0x428(0x10)
	struct FString DBNOInstigatorNetID; // 0x438(0x10)
	struct FString VictimName; // 0x448(0x10)
	struct FString VictimId; // 0x458(0x10)
	struct FText DBNOTooltipText; // 0x468(0x18)
	struct UTslReplayTimeline* ReplayTimeline; // 0x480(0x08)
};

// Class TslGameUI.TslReplayTimelineKillEventItem
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UTslReplayTimelineKillEventItem : UUmgBaseWidget {
	int32 KillTime; // 0x420(0x04)
	int32 TotalReplayTime; // 0x424(0x04)
	struct FString KillerName; // 0x428(0x10)
	struct FString KillerNetId; // 0x438(0x10)
	struct FString VictimName; // 0x448(0x10)
	struct FString VictimNetId; // 0x458(0x10)
	struct FText KillTooltipText; // 0x468(0x18)
	struct UTslReplayTimeline* ReplayTimeline; // 0x480(0x08)
};

// Class TslGameUI.TslRevivalTimerWidget
// Size: 0x338 (Inherited: 0x330)  [layout: KHOP]
struct UTslRevivalTimerWidget : UTslUserWidget {
	struct UTextBlock* TextTimer; // 0x330(0x08)
};

// Class TslGameUI.TslRevivalWidget
// Size: 0x380 (Inherited: 0x330)  [layout: KHOP]
struct UTslRevivalWidget : UTslUserWidget {
	struct FText NoneText; // 0x330(0x18)
	struct FText RemainTimeFormatText; // 0x348(0x18)
	struct UImage* ImageBg; // 0x360(0x08)
	struct UTextBlock* TextRevivalCount; // 0x368(0x08)
	struct UImage* ImageTimer; // 0x370(0x08)
	struct UTextBlock* TextTimer; // 0x378(0x08)
};

// Class TslGameUI.TslRoundCountWidget
// Size: 0x338 (Inherited: 0x330)  [layout: KHOP]
struct UTslRoundCountWidget : UTslUserWidget {
	struct UTextBlock* Count_Text; // 0x330(0x08)
};

// Class TslGameUI.TslRoundEndPointWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRoundEndPointWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* SlotWidgetSwitcher; // 0x420(0x08)
	struct U*7fa8406bd3* Anim_Start; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
};

// Class TslGameUI.TslMatchEndWidget
// Size: 0x500 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct UTslMatchEndWidget : UTslRoundResultBaseWidget {
	struct UTextBlock* MatchEndText; // 0x4c0(0x08)
	struct UTextBlock* MatchResultText; // 0x4c8(0x08)
	struct UTextBlock* ObserverTeamName; // 0x4d0(0x08)
	struct UTextBlock* YourTeamScoreText; // 0x4d8(0x08)
	struct UTextBlock* EnemyTeamScoreText; // 0x4e0(0x08)
	struct U*7fa8406bd3* Victory_Anim; // 0x4e8(0x08)
	struct U*7fa8406bd3* Defeat_Anim; // 0x4f0(0x08)
	bool bHideOtherWidgetsByEscape; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
};

// Class TslGameUI.TslRoundEndWidget
// Size: 0x578 (Inherited: 0x4c0)  [layout: KHOP]
struct UTslRoundEndWidget : UTslRoundResultBaseWidget {
	struct UTextBlock* CurrentRoundText; // 0x4c0(0x08)
	struct UTextBlock* CurrentRoundResultText; // 0x4c8(0x08)
	struct UTextBlock* CurrentRoundScoreText; // 0x4d0(0x08)
	struct UTextBlock* YourTeamText; // 0x4d8(0x08)
	struct UTextBlock* EnemyTeamText; // 0x4e0(0x08)
	struct UTextBlock* YourTeamScoreText; // 0x4e8(0x08)
	struct UTextBlock* EnemyTeamScoreText; // 0x4f0(0x08)
	struct UTslUserPlatformImageWidget* YourTeamPlatformIcon; // 0x4f8(0x08)
	struct UTslUserPlatformImageWidget* EnemyTeamPlatformIcon; // 0x500(0x08)
	struct UHorizontalBox* RoundPointHorizontalBox; // 0x508(0x08)
	struct TArray<struct UTslRoundEndPointWidget*> RoundPointList; // 0x510(0x10)
	struct U*7fa8406bd3* WinEffectAnim; // 0x520(0x08)
	struct U*7fa8406bd3* LossEffectAnim; // 0x528(0x08)
	struct U*7fa8406bd3* DrawEffectAnim; // 0x530(0x08)
	struct UMaterialInterface* TextScratchMI; // 0x538(0x08)
	bool bHideOtherWidgetsByEscape; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UAkAudioEvent* OpenSoundEvent; // 0x548(0x08)
	struct UAkAudioEvent* ScoreSoundEvent; // 0x550(0x08)
	struct UTslWinningStreakWidget* PlayerWinningStreak; // 0x558(0x08)
	struct UTslWinningStreakWidget* EnemyWinningStreak; // 0x560(0x08)
	struct UPanelWidget* PanelNormalRound; // 0x568(0x08)
	struct UTextBlock* TextRound; // 0x570(0x08)
};

// Class TslGameUI.TslRoundScorePointsWidget
// Size: 0x348 (Inherited: 0x330)  [layout: KHOP]
struct UTslRoundScorePointsWidget : UTslUserWidget {
	struct UClass* RoundEndPointClass; // 0x330(0x08)
	bool bAlignLeft; // 0x338(0x01)
	bool bShowEmpty; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct UWrapBox* Score_WrapBox; // 0x340(0x08)
};

// Class TslGameUI.TslRoundStartWidget
// Size: 0x468 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRoundStartWidget : UUmgBaseWidget {
	struct UTextBlock* RoundNumberText; // 0x420(0x08)
	struct U*7fa8406bd3* RoundStart_Anim; // 0x428(0x08)
	struct UTextBlock* RoundText; // 0x430(0x08)
	bool bHideOtherWidgetsByEscape; // 0x438(0x01)
	char pad_439[0x2f]; // 0x439(0x2f)

	void OnWidgetShowChanged(); // Function TslGameUI.TslRoundStartWidget.OnWidgetShowChanged //  // @ game+0xe4a4db0
};

// Class TslGameUI.TslRoundTimeWidget
// Size: 0x348 (Inherited: 0x330)  [layout: KHOP]
struct UTslRoundTimeWidget : UTslUserWidget {
	struct UTextBlock* Hour_Text; // 0x330(0x08)
	struct UTextBlock* Minute_Text; // 0x338(0x08)
	struct UTextBlock* Count_Text; // 0x340(0x08)
};

// Class TslGameUI.TslRoundWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslRoundWidget : UUmgBaseWidget {
	struct UHorizontalBox* YourTeamPointBox; // 0x420(0x08)
	struct UHorizontalBox* EnemyTeamPointBox; // 0x428(0x08)
	struct UClass* RoundEndPointClass; // 0x430(0x08)
	struct TArray<struct UTslRoundEndPointWidget*> YourTeamPointList; // 0x438(0x10)
	struct TArray<struct UTslRoundEndPointWidget*> EnemyTeamPointList; // 0x448(0x10)
	char pad_458[0x8]; // 0x458(0x08)

	void OnWidgetShowChanged(); // Function TslGameUI.TslRoundWidget.OnWidgetShowChanged //  // @ game+0xe4a5004
	void UpdatePointList(); // Function TslGameUI.TslRoundWidget.UpdatePointList //  // @ game+0xe4a76cc
	void OnMatchStateChanged(); // Function TslGameUI.TslRoundWidget.OnMatchStateChanged //  // @ game+0xe4a0050
};

// Class TslGameUI.TslSafeZoneOptionWidget
// Size: 0x4c0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSafeZoneOptionWidget : UBlockInputUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
	struct UScaleBox* ScreenAreaScaleBox; // 0x478(0x08)
	struct UScaleBox* PreviewScaleBox; // 0x480(0x08)
	struct UTextBlock* SafeAreaScaleText; // 0x488(0x08)
	struct USlider* MainSlider; // 0x490(0x08)
	char pad_498[0x10]; // 0x498(0x10)
	struct UWidget* WidgetToFocusOnHide; // 0x4a8(0x08)
	char pad_4B0[0x10]; // 0x4b0(0x10)
};

// Class TslGameUI.TslSandboxConsoleGuideWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslSandboxConsoleGuideWidget : UUmgBaseWidget {
	struct UWidgetSwitcher* KeyGuideSwitcher; // 0x420(0x08)
};

// Class TslGameUI.TslSandboxGroupBoxWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxWidget : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UTextBlock* TitleTextBlock; // 0x430(0x08)
	struct UVerticalBox* SubWidgetVerticalBox; // 0x438(0x08)
	struct UClass* SubWidgetBp; // 0x440(0x08)
	enum class ESandboxGroupType GroupType; // 0x448(0x01)
	char pad_449[0x27]; // 0x449(0x27)
};

// Class TslGameUI.TslSandboxGroupBoxOptionWidget
// Size: 0x478 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxOptionWidget : UTslSandboxGroupBoxWidget {
	bool bGamepadOnly; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
};

// Class TslGameUI.TslSandboxGroupBoxPreArrangedWidget
// Size: 0x488 (Inherited: 0x470)  [layout: KHOP]
struct UTslSandboxGroupBoxPreArrangedWidget : UTslSandboxGroupBoxWidget {
	struct TArray<enum class ESandboxSpecialButtonType> UnusedSpecialButtons; // 0x470(0x10)
	struct UVerticalBox* RootVerticalBox; // 0x480(0x08)
};

// Class TslGameUI.TslSandboxIncreaseItemWidget
// Size: 0x260 (Inherited: 0x258)  [layout: KHOP]
struct UTslSandboxIncreaseItemWidget : UUserWidget {
	struct U*7fa8406bd3* Show_Anim; // 0x258(0x08)
};

// Class TslGameUI.TslSandBoxMasterBaseWidget
// Size: 0x4d0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSandBoxMasterBaseWidget : UBlockInputUserWidget {
	char pad_470[0x8]; // 0x470(0x08)
	struct UTextBlock* SpawnSelectorTextBlock; // 0x478(0x08)
	struct UHorizontalBox* GroupWidget_HorizontalBox; // 0x480(0x08)
	struct UTslSandboxIncreaseItemWidget* IncreaseItem; // 0x488(0x08)
	struct UClass* DescToolTipWidgetClass; // 0x490(0x08)
	struct UClass* ItemToolTipWidgetClass; // 0x498(0x08)
	struct FVector2D IncreaseItemOffset; // 0x4a0(0x08)
	struct UTslTooltipWidget* DescToolTipWidget; // 0x4a8(0x08)
	struct UItemToolTipWidget* ItemToolTipWidget; // 0x4b0(0x08)
	char pad_4B8[0x18]; // 0x4b8(0x18)
};

// Class TslGameUI.TslSandBoxMasterBaseWidget_KeyboardMouse
// Size: 0x4e0 (Inherited: 0x4d0)  [layout: KHOP]
struct UTslSandBoxMasterBaseWidget_KeyboardMouse : UTslSandBoxMasterBaseWidget {
	struct UButton* CloseButton; // 0x4d0(0x08)
	struct UTextBlock* CloseButtonText; // 0x4d8(0x08)

	void OnClick_CloseButton(); // Function TslGameUI.TslSandBoxMasterBaseWidget_KeyboardMouse.OnClick_CloseButton //  // @ game+0xe49e8d4
};

// Class TslGameUI.TslSandboxMasterBaseWidget_Gamepad
// Size: 0x520 (Inherited: 0x4d0)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxMasterBaseWidget_Gamepad : UTslSandBoxMasterBaseWidget {
	char pad_4D0[0x20]; // 0x4d0(0x20)
	struct UTslSandboxConsoleGuideWidget* ConsoleGuideWidget; // 0x4f0(0x08)
	struct FVector2D MinMaxAccelRate; // 0x4f8(0x08)
	float MoveDelayTime; // 0x500(0x04)
	char pad_504[0x1c]; // 0x504(0x1c)

	void OnYReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnYReleased //  // @ game+0x11f58d8
	void MoveLeftReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveLeftReleased //  // @ game+0xe49e01c
	void OnRBPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnRBPressed //  // @ game+0xe4a20bc
	void OnLBPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnLBPressed //  // @ game+0xe49fd64
	void MoveUpReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveUpReleased //  // @ game+0xe49e084
	void OnAPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnAPressed //  // @ game+0xe49e0c4
	void OnRTReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnRTReleased //  // @ game+0xe49dfe8
	void MoveRightPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveRightPressed //  // @ game+0xe49e034
	void MoveDownPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveDownPressed //  // @ game+0xe49dfcc
	void MoveUpPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveUpPressed //  // @ game+0xe49e068
	void OnAReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnAReleased //  // @ game+0xe49e0d8
	void OnBPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnBPressed //  // @ game+0xe49e278
	void MoveRightReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveRightReleased //  // @ game+0xe49e050
	void OnLTPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnLTPressed //  // @ game+0xe49fd84
	void OnLTReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnLTReleased //  // @ game+0xe49e084
	void OnRTPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnRTPressed //  // @ game+0xe4a20dc
	void OnSpecialLeftPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnSpecialLeftPressed //  // @ game+0x1001aec
	void OnYPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.OnYPressed //  // @ game+0xe4a5410
	void MoveDownReleased(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveDownReleased //  // @ game+0xe49dfe8
	void MoveLeftPressed(); // Function TslGameUI.TslSandboxMasterBaseWidget_Gamepad.MoveLeftPressed //  // @ game+0xe49e000
};

// Class TslGameUI.TslSandboxMasterWidget
// Size: 0x4e0 (Inherited: 0x4e0)  [layout: KHOP]
struct UTslSandboxMasterWidget : UTslSandBoxMasterBaseWidget_KeyboardMouse {
};

// Class TslGameUI.TslSandboxMasterWidget_Gamepad
// Size: 0x520 (Inherited: 0x520)  [layout: KHOP]
struct UTslSandboxMasterWidget_Gamepad : UTslSandboxMasterBaseWidget_Gamepad {
};

// Class TslGameUI.TslSandboxItemBaseWidget
// Size: 0x478 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxItemBaseWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	bool bUseFlowText; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UTextBlock* ItemTextBlock; // 0x430(0x08)
	struct UTslFlowingTextWidget* ItemTextBlock_Flow; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
	struct FLinearColor NormalTextColor; // 0x448(0x10)
	struct FLinearColor PressedTextColor; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)
};

// Class TslGameUI.TslSandboxButtonWidget
// Size: 0x498 (Inherited: 0x478)  [layout: KHOP]
struct UTslSandboxButtonWidget : UTslSandboxItemBaseWidget {
	char pad_478[0x8]; // 0x478(0x08)
	struct UButton* ItemButton; // 0x480(0x08)
	struct UImage* Img_SelectOutLine; // 0x488(0x08)
	struct UImage* Img_SelectGradientBg; // 0x490(0x08)

	void OnClick_Button(); // Function TslGameUI.TslSandboxButtonWidget.OnClick_Button //  // @ game+0x11fadb0
	void OnUnhover_Button(); // Function TslGameUI.TslSandboxButtonWidget.OnUnhover_Button //  // @ game+0x6d0c20
	void OnHover_Button(); // Function TslGameUI.TslSandboxButtonWidget.OnHover_Button //  // @ game+0xdbdbab4
};

// Class TslGameUI.TslSandboxSpecialButtonWidget
// Size: 0x4a8 (Inherited: 0x498)  [layout: KHOP]
struct UTslSandboxSpecialButtonWidget : UTslSandboxButtonWidget {
	enum class ESandboxSpecialButtonType ItemType; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct UImage* ItemIcon_Image; // 0x4a0(0x08)
};

// Class TslGameUI.TslSandboxGroupBoxCategoryWidget
// Size: 0x4e0 (Inherited: 0x498)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryWidget : UTslSandboxButtonWidget {
	struct UClass* SubWidgetBp; // 0x498(0x08)
	struct UBorder* ItemBorder; // 0x4a0(0x08)
	struct UVerticalBox* SubWidgetVerticalBox; // 0x4a8(0x08)
	struct UWidgetSwitcher* ExpandSwitcher; // 0x4b0(0x08)
	char pad_4B8[0x28]; // 0x4b8(0x28)
};

// Class TslGameUI.TslSandboxPowerItemWidget
// Size: 0x4a8 (Inherited: 0x498)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxPowerItemWidget : UTslSandboxButtonWidget {
	struct UWidgetSwitcher* ItemWidgetSwitcher; // 0x498(0x08)
	enum class ESandboxPowerType PowerType; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)

	void OnGivePowerComplete(); // Function TslGameUI.TslSandboxPowerItemWidget.OnGivePowerComplete //  // @ game+0xe49f12c
};

// Class TslGameUI.*be5ea4fcda
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*be5ea4fcda : UInterface {
};

// Class TslGameUI.*8d05461883
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*8d05461883 : UInterface {
};

// Class TslGameUI.TslStepperWidget
// Size: 0x500 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslStepperWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct UButton* LeftArrowButton; // 0x490(0x08)
	struct UButton* RightArrowButton; // 0x498(0x08)
	struct UTextBlock* StepperText; // 0x4a0(0x08)
	struct UHorizontalBox* IndicatorHorizontalBox; // 0x4a8(0x08)
	float TotalStepperIndicatorWidthLengthLimit; // 0x4b0(0x04)
	float StepperIndicatorWidth; // 0x4b4(0x04)
	float StepperIndicatorHorizontalMargin; // 0x4b8(0x04)
	float StepperIndicatorBottomPadding; // 0x4bc(0x04)
	struct UClass* StepperIndicatorWidgetClass; // 0x4c0(0x08)
	char pad_4C8[0x38]; // 0x4c8(0x38)

	void OnClickLeft(); // Function TslGameUI.TslStepperWidget.OnClickLeft //  // @ game+0xe49e870
	void OnClickRight(); // Function TslGameUI.TslStepperWidget.OnClickRight //  // @ game+0xe49e8c0
};

// Class TslGameUI.TslStepperIndicatorWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslStepperIndicatorWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct USizeBox* SizeBox; // 0x490(0x08)
	struct UButton* Button; // 0x498(0x08)
	struct UBorder* InnerBorder; // 0x4a0(0x08)
	struct FLinearColor ColorNormal; // 0x4a8(0x10)
	struct FLinearColor ColorHighlighted; // 0x4b8(0x10)
	char pad_4C8[0x8]; // 0x4c8(0x08)

	void OnClicked(); // Function TslGameUI.TslStepperIndicatorWidget.OnClicked //  // @ game+0xe49e8e8
};

// Class TslGameUI.TslSandboxGroupBoxCategoryItemBaseWidget
// Size: 0x4c8 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryItemBaseWidget : UTslSandboxItemBaseWidget {
	char pad_478[0x10]; // 0x478(0x10)
	struct UImage* Img_SelectOutLine; // 0x488(0x08)
	struct UImage* Img_SelectGradientBg; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct FText ItemDesc; // 0x4a0(0x18)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	float ToolTipDelayTimeForGamepad; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
};

// Class TslGameUI.TslSandboxGroupBoxCategoryItemWidget
// Size: 0x4f8 (Inherited: 0x4c8)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryItemWidget : UTslSandboxGroupBoxCategoryItemBaseWidget {
	struct UButton* ItemButton; // 0x4c8(0x08)
	struct UClass* VehicleClass; // 0x4d0(0x08)
	struct UItem* CachedItem; // 0x4d8(0x08)
	struct UTslSandBoxMasterBaseWidget* CachedMasterWidget; // 0x4e0(0x08)
	char pad_4E8[0x10]; // 0x4e8(0x10)

	void OnClicked_ItemButton(); // Function TslGameUI.TslSandboxGroupBoxCategoryItemWidget.OnClicked_ItemButton //  // @ game+0xe49eacc
};

// Class TslGameUI.TslSandboxGroupBoxCategoryItemWidget_OptionBase
// Size: 0x4e8 (Inherited: 0x4c8)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryItemWidget_OptionBase : UTslSandboxGroupBoxCategoryItemBaseWidget {
	struct UBorder* ItemBorder; // 0x4c8(0x08)
	struct UTslSandboxItemFuncImplementation* ItemFuncImpl; // 0x4d0(0x08)
	char pad_4D8[0x10]; // 0x4d8(0x10)
};

// Class TslGameUI.TslSandboxGroupBoxCategoryItemWidget_Slider
// Size: 0x508 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryItemWidget_Slider : UTslSandboxGroupBoxCategoryItemWidget_OptionBase {
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct UTslSliderWidget* SliderWidget; // 0x4f0(0x08)
	char pad_4F8[0x10]; // 0x4f8(0x10)
};

// Class TslGameUI.TslSandboxGroupBoxCategoryItemWidget_Stepper
// Size: 0x570 (Inherited: 0x4e8)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxGroupBoxCategoryItemWidget_Stepper : UTslSandboxGroupBoxCategoryItemWidget_OptionBase {
	char pad_4E8[0x78]; // 0x4e8(0x78)
	struct UTslStepperWidget* StepperWidget; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
};

// Class TslGameUI.TslSandboxQuantityWidget
// Size: 0x4a0 (Inherited: 0x478)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxQuantityWidget : UTslSandboxItemBaseWidget {
	struct UTextBlock* CurNumberTextBlock; // 0x478(0x08)
	struct UTextBlock* MaxNumberTextBlock; // 0x480(0x08)
	struct UImage* SliderImage; // 0x488(0x08)
	enum class ESandboxQuantityType QuantityType; // 0x490(0x04)
	char pad_494[0xc]; // 0x494(0x0c)

	void OnSetCurNumber(); // Function TslGameUI.TslSandboxQuantityWidget.OnSetCurNumber //  // @ game+0xe4a2148
};

// Class TslGameUI.TslSandboxItemFuncImplementation
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImplementation : UObject {
};

// Class TslGameUI.TslSandboxItemFuncImpl_UniversalSensitivity
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_UniversalSensitivity : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxItemFuncImpl_VerticalSensitivityMultiplier
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_VerticalSensitivityMultiplier : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxItemFuncImpl_ScopingSensitivity
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_ScopingSensitivity : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxItemFuncImpl_ScopingModifiedSensitivity
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_ScopingModifiedSensitivity : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxItemFuncImpl_VerticalSensitivityMultiplier_Gamepad
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_VerticalSensitivityMultiplier_Gamepad : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxItemFuncImpl_NamedSensitivity_Gamepad
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UTslSandboxItemFuncImpl_NamedSensitivity_Gamepad : UTslSandboxItemFuncImplementation {
};

// Class TslGameUI.TslSandboxManager_Training
// Size: 0x650 (Inherited: 0x640)  [layout: LECH - offset chi la uoc luong]
struct UTslSandboxManager_Training : U*305841fb08 {
	float *afc2ea219f; // 0x640(0x04)
	char pad_644[0xc]; // 0x644(0x0c)
};

// Class TslGameUI.TslTrainingModeItemSpawner
// Size: 0x4e0 (Inherited: 0x4e0)  [layout: KHOP]
struct UTslTrainingModeItemSpawner : UTslSandBoxMasterBaseWidget_KeyboardMouse {
};

// Class TslGameUI.TslTrainingModeItemSpawner_Gamepad
// Size: 0x528 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct UTslTrainingModeItemSpawner_Gamepad : UTslSandboxMasterBaseWidget_Gamepad {
	char pad_520[0x8]; // 0x520(0x08)
};

// Class TslGameUI.TslSandboxWaterMarkWidget
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslSandboxWaterMarkWidget : UUmgBaseWidget {
};

// Class TslGameUI.TslScopeItemWheelMenuWidget
// Size: 0x580 (Inherited: 0x580)  [layout: KHOP]
struct UTslScopeItemWheelMenuWidget : UTslItemWheelMenuWidget {
};

// Class TslGameUI.ThrowableIndicatorCanvasWidget
// Size: 0x4b8 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UThrowableIndicatorCanvasWidget : UTslScreenIndicatorCanvasWidget {
	struct TMap<struct UClass*, struct UClass*> ProjectileWidgetMap; // 0x450(0x50)
	struct UClass* SmokeIndicatorWidget; // 0x4a0(0x08)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void BindTracerManager(); // Function TslGameUI.ThrowableIndicatorCanvasWidget.BindTracerManager //  // @ game+0xe49bb00
	void OnNewSmoke(); // Function TslGameUI.ThrowableIndicatorCanvasWidget.OnNewSmoke //  // @ game+0xe4a199c
	void OnNewProjectile(); // Function TslGameUI.ThrowableIndicatorCanvasWidget.OnNewProjectile //  // @ game+0xe4a1920
};

// Class TslGameUI.TslMapMarkerIndicatorCanvasWidget
// Size: 0x478 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UTslMapMarkerIndicatorCanvasWidget : UTslScreenIndicatorCanvasWidget {
	char pad_450[0x28]; // 0x450(0x28)
};

// Class TslGameUI.TslTeamWidget
// Size: 0x478 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamWidget : UTslScreenIndicatorCanvasWidget {
	struct UClass* IndicatorWidgetClass_SoloTeam; // 0x450(0x08)
	struct TArray<struct UTeamMarkWidget*> TeamMarkWidgets; // 0x458(0x10)
	struct USoloTeamMarkWidget* SoloTeamMarkWidget; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)

	void UpdateWidgetEnabled(); // Function TslGameUI.TslTeamWidget.UpdateWidgetEnabled //  // @ game+0xe4a8570
};

// Class TslGameUI.TslScrollBox
// Size: 0x8f8 (Inherited: 0x8e0)  [layout: KHOP]
struct UTslScrollBox : UScrollBox {
	char pad_8E0[0x10]; // 0x8e0(0x10)
	float ScrollStoppedDistance; // 0x8f0(0x04)
	float ScrollTrackingTimeout; // 0x8f4(0x04)
};

// Class TslGameUI.TslSelfPutHelperWidget
// Size: 0x258 (Inherited: 0x258)  [layout: KHOP]
struct UTslSelfPutHelperWidget : UUserWidget {
};

// Class TslGameUI.TslSimpleAnimationWidget
// Size: 0x338 (Inherited: 0x330)  [layout: KHOP]
struct UTslSimpleAnimationWidget : UTslUserWidget {
	struct U*7fa8406bd3* BindAnimStart; // 0x330(0x08)

	void PlayAnimStart(); // Function TslGameUI.TslSimpleAnimationWidget.PlayAnimStart //  // @ game+0xe4a5448
};

// Class TslGameUI.TslSkinBaseWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSkinBaseWidget : UUmgBaseWidget {
	struct UButton* ApplyButton; // 0x420(0x08)
	struct UWidgetSwitcher* MouseHoverSwitcher; // 0x428(0x08)
	struct UImage* ConsoleFocusImage; // 0x430(0x08)
	struct UImage* IconImage; // 0x438(0x08)
	struct UTextBlock* NameText; // 0x440(0x08)
	int32 NameTextMaxLength; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct U*286da7131b* CachedSkinItem; // 0x450(0x08)
	bool bHideFirstWidgetOnMouseHovered; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
};

// Class TslGameUI.TslVehicleSkinWidget
// Size: 0x470 (Inherited: 0x460)  [layout: KHOP]
struct UTslVehicleSkinWidget : UTslSkinBaseWidget {
	struct U*7fa8406bd3* PressedPcAni; // 0x460(0x08)
	struct U*7fa8406bd3* PressedConsoleAni; // 0x468(0x08)
};

// Class TslGameUI.TslSkinListBaseWidget
// Size: 0x4a0 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslSkinListBaseWidget : UBlockInputUserWidget {
	char pad_470[0x10]; // 0x470(0x10)
	struct TArray<struct U*286da7131b*> CachedSkinItem; // 0x480(0x10)
	char pad_490[0x8]; // 0x490(0x08)
	bool bSortSkinItem; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
};

// Class TslGameUI.TslVehicleSkinListWidget
// Size: 0x4d0 (Inherited: 0x4a0)  [layout: LECH - offset chi la uoc luong]
struct UTslVehicleSkinListWidget : UTslSkinListBaseWidget {
	struct AActor* InteractTargetActor; // 0x4a0(0x08)
	struct UTslKeyboardAndMouseHoldableIconWidget* SelectPcKey; // 0x4a8(0x08)
	struct UVerticalBox* SkinVerticalBox; // 0x4b0(0x08)
	struct UClass* SkinEntryClass; // 0x4b8(0x08)
	float AxisYThreshold; // 0x4c0(0x04)
	float AxisYCheckPeriod; // 0x4c4(0x04)
	char pad_4C8[0x4]; // 0x4c8(0x04)
	bool bAutoVehicleSkinReplacement; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)

	void OnInputAxisY(); // Function TslGameUI.TslVehicleSkinListWidget.OnInputAxisY //  // @ game+0xe49f364
};

// Class TslGameUI.TslSliderWidget
// Size: 0x4d0 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSliderWidget : UUmgBaseWidget {
	char pad_420[0x70]; // 0x420(0x70)
	struct USlider* MainSlider; // 0x490(0x08)
	struct UEditableText* EditableValueText; // 0x498(0x08)
	struct UBorder* EditableTextBorder; // 0x4a0(0x08)
	char pad_4A8[0x28]; // 0x4a8(0x28)

	void HandleOnSliderValueChanged(); // Function TslGameUI.TslSliderWidget.HandleOnSliderValueChanged //  // @ game+0xe49d010
	void HandleOnTextValueChanged(); // Function TslGameUI.TslSliderWidget.HandleOnTextValueChanged //  // @ game+0xe49d9fc
};

// Class TslGameUI.TslSpawnKitWidget
// Size: 0x578 (Inherited: 0x498)  [layout: LECH - offset chi la uoc luong]
struct UTslSpawnKitWidget : UTslSpawnKitWithDataWidget {
	struct FStringClassReference SpawnKitItemWidgetClass; // 0x498(0x10)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct UPanelWidget* ContentVerticalBox; // 0x4b0(0x08)
	struct UTextBlock* WeaponContent; // 0x4b8(0x08)
	struct UTextBlock* ArmorContent; // 0x4c0(0x08)
	struct UTextBlock* AmmoContent; // 0x4c8(0x08)
	struct UTextBlock* OptionContent; // 0x4d0(0x08)
	struct UPanelWidget* WidgetSelectorParent; // 0x4d8(0x08)
	struct UImage* ImageRStickScroll; // 0x4e0(0x08)
	struct UPanelWidget* WidgetGrid; // 0x4e8(0x08)
	struct FVector2D PadAlignment; // 0x4f0(0x08)
	struct FAnchors PadAnchor; // 0x4f8(0x10)
	struct FVector2D SpawnkitPositionForPad; // 0x508(0x08)
	struct FVector2D ToolTipPositionForPad; // 0x510(0x08)
	float ItemWidgetYOffset; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TMap<int32, struct UTslSpawnKitItemWidget*> ItemWidgets; // 0x520(0x50)
	char pad_570[0x8]; // 0x570(0x08)

	void OnUnHover(); // Function TslGameUI.TslSpawnKitWidget.OnUnHover //  // @ game+0xe4a27c0
	void OnHover(); // Function TslGameUI.TslSpawnKitWidget.OnHover //  // @ game+0xe49f24c
	void ApplyCurrentIndexPad(); // Function TslGameUI.TslSpawnKitWidget.ApplyCurrentIndexPad //  // @ game+0xdbdbab4
	void OnGamepadRightStickUp(); // Function TslGameUI.TslSpawnKitWidget.OnGamepadRightStickUp //  // @ game+0xe49f068
	void OnGamepadRightStickDown(); // Function TslGameUI.TslSpawnKitWidget.OnGamepadRightStickDown //  // @ game+0xe49f054
};

// Class TslGameUI.TslSpawnKitItemWidget
// Size: 0x4c0 (Inherited: 0x448)  [layout: KHOP]
struct UTslSpawnKitItemWidget : UTslSpawnKitItemBaseWidget {
	char pad_448[0x20]; // 0x448(0x20)
	struct UButton* ButtonForSelector; // 0x468(0x08)
	struct UTextBlock* TextBlockForTitle; // 0x470(0x08)
	struct UBorder* ButtonBorder; // 0x478(0x08)
	struct UWidget* CheckMarkSizeBox; // 0x480(0x08)
	struct UWidget* ButtonForSelectorFocus; // 0x488(0x08)
	struct FLinearColor ColorBorderOn; // 0x490(0x10)
	struct FLinearColor ColorBorderOff; // 0x4a0(0x10)
	struct FLinearColor ColorTextOff; // 0x4b0(0x10)

	void OnSelected(); // Function TslGameUI.TslSpawnKitItemWidget.OnSelected //  // @ game+0xdbdbab4
	void OnUnhovered(); // Function TslGameUI.TslSpawnKitItemWidget.OnUnhovered //  // @ game+0xe4a2834
	void OnHovered(); // Function TslGameUI.TslSpawnKitItemWidget.OnHovered //  // @ game+0xe49f2c4
};

// Class TslGameUI.TslSpeakingIconWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSpeakingIconWidget : UUmgBaseWidget {
	struct TMap<enum class ESpeakingIcon, struct UTexture2D*> IconMap; // 0x420(0x50)
	struct U*7fa8406bd3* AnimOnSpeak; // 0x470(0x08)
	struct UImage* ImageIcon; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)
};

// Class TslGameUI.TslSpectatingCanvasWidget
// Size: 0x470 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslSpectatingCanvasWidget : UUmgBaseWidget {
	struct USizeBox* DuelSpectateTextBox; // 0x420(0x08)
	struct UTslCommonButton* ButtonDuelSpectate; // 0x428(0x08)
	struct UTslPubgIdWidget* PubgIdWidget; // 0x430(0x08)
	struct UTslUniversalInputVisibilitySwitcher* SwitcherDuelWatch; // 0x438(0x08)
	struct U*7fa8406bd3* FadeInAnim; // 0x440(0x08)
	struct USafeZone* OuterSafeZone; // 0x448(0x08)
	struct UTextBlock* SpectatorCounter; // 0x450(0x08)
	struct UWidget* ReportGamepadMultipleKeyIconWidget; // 0x458(0x08)
	float SpectateInputHoldTime; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)

	void OnPrepassSizebox(); // Function TslGameUI.TslSpectatingCanvasWidget.OnPrepassSizebox //  // @ game+0x913ca8
	void OnUpdateViewTarget(); // Function TslGameUI.TslSpectatingCanvasWidget.OnUpdateViewTarget //  // @ game+0x10da700
	void OnReleasedDuelSpectatePad(); // Function TslGameUI.TslSpectatingCanvasWidget.OnReleasedDuelSpectatePad //  // @ game+0x136a698
	void OnClickDuelSpectateButton(); // Function TslGameUI.TslSpectatingCanvasWidget.OnClickDuelSpectateButton //  // @ game+0xe49e848
	void OnPressedDuelSpectatePad(); // Function TslGameUI.TslSpectatingCanvasWidget.OnPressedDuelSpectatePad //  // @ game+0x12746f8
};

// Class TslGameUI.TslSpectatingSelectionWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UTslSpectatingSelectionWidget : UTslUserWidget {
	struct UBorder* OuterBorder; // 0x330(0x08)
	struct UTextBlock* SelectionTextName; // 0x338(0x08)

	void OnBorderPrepass(); // Function TslGameUI.TslSpectatingSelectionWidget.OnBorderPrepass //  // @ game+0xe49e314
};

// Class TslGameUI.TslStackCountHandlingPopupWidget
// Size: 0x640 (Inherited: 0x470)  [layout: LECH - offset chi la uoc luong]
struct UTslStackCountHandlingPopupWidget : UBlockInputUserWidget {
	char pad_470[0x20]; // 0x470(0x20)
	struct UMaterialInstanceDynamic* IconMat; // 0x490(0x08)
	TScriptInterface<struct U*2044b0f6ef> ItemSlot; // 0x498(0x10)
	TScriptInterface<struct U*02e1f6a3c2> container; // 0x4a8(0x10)
	TScriptInterface<struct U*02e1f6a3c2> OtherContainer; // 0x4b8(0x10)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FUmgWidgetBinder_TextBlock InputAmountText_Binder; // 0x4d0(0x20)
	struct FUmgWidgetBinder_TextBlock ItemName_Binder; // 0x4f0(0x20)
	struct FUmgWidgetBinder_TextBlock MaxTextBlock_Binder; // 0x510(0x20)
	struct FUmgWidgetBinder_TextBlock OkText_Binder; // 0x530(0x20)
	struct FUmgWidgetBinder_TextBlock ActionText_Binder; // 0x550(0x20)
	struct FUmgWidgetBinder_UserWidget OkKeyIcon_Binder; // 0x570(0x20)
	struct FUmgWidgetBinder_HorizontalBox OkKeyHorizontalBox_Binder; // 0x590(0x28)
	struct FUmgWidgetBinder_HorizontalBox TrunkDropKey_Binder; // 0x5b8(0x28)
	struct FUmgWidgetBinder_Image IconBinder; // 0x5e0(0x28)
	struct USlider* Sdr_Count; // 0x608(0x08)
	struct UItem* Item; // 0x610(0x08)
	struct AInventory* Inventory; // 0x618(0x08)
	struct FTslStickInputHelper NavigationInputHelper; // 0x620(0x14)
	float BlockingTime; // 0x634(0x04)
	float DeadZone; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)

	void OnNotifyUpdateSlotActionName(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnNotifyUpdateSlotActionName //  // @ game+0xe4a1d5c
	void OnStackCountActionPerformed(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnStackCountActionPerformed //  // @ game+0xe4a21c0
	void ClosePopup(); // Function TslGameUI.TslStackCountHandlingPopupWidget.ClosePopup //  // @ game+0xe49bef4
	void OnWidgetInputB(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnWidgetInputB //  // @ game+0xe49bef4
	void OnWidgetInputX(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnWidgetInputX //  // @ game+0xe4a4b08
	void OnWidgetMoveUp(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnWidgetMoveUp //  // @ game+0xe4a4b38
	void OnWidgetMoveDown(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnWidgetMoveDown //  // @ game+0xe4a4b1c
	void BlockInput(); // Function TslGameUI.TslStackCountHandlingPopupWidget.BlockInput //  // @ game+0x1053c04
	void OnNotifyDropSlotOnOtherContainer(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnNotifyDropSlotOnOtherContainer //  // @ game+0xe4a1a34
	void OnWidgetInputA(); // Function TslGameUI.TslStackCountHandlingPopupWidget.OnWidgetInputA //  // @ game+0xe4a4af4
};

// Class TslGameUI.TslStackCountHandlingSliderPopupWidget
// Size: 0x630 (Inherited: 0x470)  [layout: KHOP]
struct UTslStackCountHandlingSliderPopupWidget : UBlockInputUserWidget {
	TScriptInterface<struct U*02e1f6a3c2> SlotContainer; // 0x470(0x10)
	TScriptInterface<struct U*2044b0f6ef> ItemSlot; // 0x480(0x10)
	TScriptInterface<struct U*02e1f6a3c2> OtherContainer; // 0x490(0x10)
	struct AInventory* Inventory; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct FText OkText; // 0x4b0(0x18)
	struct UMaterialInstanceDynamic* IconMat; // 0x4c8(0x08)
	struct UItem* DropItem; // 0x4d0(0x08)
	struct FUmgWidgetBinder_TextBlock ItemNameBinder; // 0x4d8(0x20)
	struct FUmgWidgetBinder_TextBlock ActionTypeTextBinder; // 0x4f8(0x20)
	struct FUmgWidgetBinder_TextBlock TextOKBinder; // 0x518(0x20)
	struct FUmgWidgetBinder_TextBlock MaxQuantityTextBinder; // 0x538(0x20)
	struct FUmgWidgetBinder_Image IconBinder; // 0x558(0x28)
	struct FUmgWidgetBinder_Gerneral InputAmountTextBinder; // 0x580(0x20)
	struct FUmgWidgetBinder_Gerneral QuantitySliderBinder; // 0x5a0(0x20)
	struct FUmgWidgetBinder_Gerneral ButtonOKBinder; // 0x5c0(0x20)
	struct FUmgWidgetBinder_Gerneral ButtonCancelBinder; // 0x5e0(0x20)
	struct FUmgWidgetBinder_WidgetSwitcher WidgetSwitcherBinder; // 0x600(0x28)
	struct UStringTable* UIStringTable; // 0x628(0x08)

	void OnTextCommitted(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OnTextCommitted //  // @ game+0xe4a234c
	void NotifyToCapacityWidget(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.NotifyToCapacityWidget //  // @ game+0xe49e09c
	void ClosePopup(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.ClosePopup //  // @ game+0xe49bf08
	void OnMouseWheelUpDown(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OnMouseWheelUpDown //  // @ game+0xe4a00c8
	void OnNotifyDropSlotOnOtherContainer(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OnNotifyDropSlotOnOtherContainer //  // @ game+0xe4a1b84
	void OkAction(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OkAction //  // @ game+0xe49e0b0
	void OnTextChanged(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OnTextChanged //  // @ game+0xe4a2290
	void CloseAction(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.CloseAction //  // @ game+0xe49bee0
	void OnValueChanged(); // Function TslGameUI.TslStackCountHandlingSliderPopupWidget.OnValueChanged //  // @ game+0xe4a2b04
};

// Class TslGameUI.TslTabButtonWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTabButtonWidget : UUmgBaseWidget {
	struct FMulticastDelegate OnClickedTabButtonWidget; // 0x420(0x10)
	struct FString TitleKeyString; // 0x430(0x10)
	struct FText TitleText; // 0x440(0x18)
	struct UTextBlock* TitleNormal; // 0x458(0x08)
	struct UTextBlock* TitleSelected; // 0x460(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x468(0x08)
	struct UButton* OutsideButton; // 0x470(0x08)
	struct UImage* NotificationImage; // 0x478(0x08)
	bool bTurnOffNotificationIfClicked; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)

	void OnClicked(); // Function TslGameUI.TslTabButtonWidget.OnClicked //  // @ game+0x11fadb0
};

// Class TslGameUI.TslCraftTabButtonWidget
// Size: 0x498 (Inherited: 0x488)  [layout: LECH - offset chi la uoc luong]
struct UTslCraftTabButtonWidget : UTslTabButtonWidget {
	char pad_488[0x10]; // 0x488(0x10)

	void OnViewTargetUpdated(); // Function TslGameUI.TslCraftTabButtonWidget.OnViewTargetUpdated //  // @ game+0xe4a3478
	void OnCraftableItemRemoved(); // Function TslGameUI.TslCraftTabButtonWidget.OnCraftableItemRemoved //  // @ game+0xe49ec04
	void OnNewCraftableItemAdded(); // Function TslGameUI.TslCraftTabButtonWidget.OnNewCraftableItemAdded //  // @ game+0xe4a190c
};

// Class TslGameUI.TslTabGroupWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTabGroupWidget : UUmgBaseWidget {
	struct FMulticastDelegate OnTabGroupUpdated; // 0x420(0x10)
	struct TArray<struct UTslTabButtonWidget*> TabWidgets; // 0x430(0x10)
	struct UWidget* TabHorizontalBox; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)

	void UpdateIndexTo(); // Function TslGameUI.TslTabGroupWidget.UpdateIndexTo //  // @ game+0xe4a762c
};

// Class TslGameUI.TslTabSelectorContentsWidget
// Size: 0x510 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTabSelectorContentsWidget : UUmgBaseWidget {
	DelegateProperty OnClickedContentsWidget; // 0x420(0x10)
	struct FText TitleText; // 0x430(0x18)
	struct FString TitleKeyString; // 0x448(0x10)
	struct FUmgWidgetBinder_TextBlock TitleTextNormal_Binder; // 0x458(0x20)
	struct FUmgWidgetBinder_TextBlock TitleTextSelected_Binder; // 0x478(0x20)
	struct FUmgWidgetBinder_WidgetSwitcher Switcher_Binder; // 0x498(0x28)
	struct FUmgWidgetBinder_Gerneral Button_Binder; // 0x4c0(0x20)
	struct FUmgWidgetBinder_Image DotImage_Binder; // 0x4e0(0x28)
	char pad_508[0x8]; // 0x508(0x08)

	void UpdateDesign_Selected(); // Function TslGameUI.TslTabSelectorContentsWidget.UpdateDesign_Selected //  // @ game+0x43bab4
	void UpdateTitleText(); // Function TslGameUI.TslTabSelectorContentsWidget.UpdateTitleText //  // @ game+0xe4a770c
	void OnClicked(); // Function TslGameUI.TslTabSelectorContentsWidget.OnClicked //  // @ game+0xe49e90c
};

// Class TslGameUI.TslTeamInfoAdditionalIcon
// Size: 0x490 (Inherited: 0x420)  [layout: KHOP]
struct UTslTeamInfoAdditionalIcon : UUmgBaseWidget {
	struct FVector2D IconSize; // 0x420(0x08)
	struct TMap<int32, struct UImage*> IconMap; // 0x428(0x50)
	struct TArray<struct UImage*> ImagePool; // 0x478(0x10)
	struct UHorizontalBox* PanelHorBox; // 0x488(0x08)
};

// Class TslGameUI.TslTeamInfoIconDataAsset
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UTslTeamInfoIconDataAsset : UDataAsset {
	struct TMap<enum class ETslTeamInfoIconState, struct FTslTeamInfoIconData> *4ec484d094; // 0x38(0x50)
};

// Class TslGameUI.TslTeamInfoListWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTeamInfoListWidget : UUmgBaseWidget {
	struct TArray<struct UTslTeamInfoWidget*> TeamInfoWidgetList; // 0x420(0x10)
	struct UClass* TeamInfoWidgetClass; // 0x430(0x08)
	struct UVerticalBox* TeamList; // 0x438(0x08)
	struct ATeam* CurrentViewingTeamMember; // 0x440(0x08)
	bool bDisplayTeamInfoForSoloPlayers; // 0x448(0x01)
	char pad_449[0x17]; // 0x449(0x17)

	void ParachuteFollowFocusMoveDown(); // Function TslGameUI.TslTeamInfoListWidget.ParachuteFollowFocusMoveDown //  // @ game+0x1368454
	void ParachuteFollowButtonPressed(); // Function TslGameUI.TslTeamInfoListWidget.ParachuteFollowButtonPressed //  // @ game+0x1230324
	void ParachuteFollowButtonReleased(); // Function TslGameUI.TslTeamInfoListWidget.ParachuteFollowButtonReleased //  // @ game+0x1369220
	void SelectParachuteFollowPlayer(); // Function TslGameUI.TslTeamInfoListWidget.SelectParachuteFollowPlayer //  // @ game+0x3cb010
	void ParachuteFollowFocusMoveUp(); // Function TslGameUI.TslTeamInfoListWidget.ParachuteFollowFocusMoveUp //  // @ game+0xe4a5430
	void HideParachuteFollowButton(); // Function TslGameUI.TslTeamInfoListWidget.HideParachuteFollowButton //  // @ game+0x1205e58
};

// Class TslGameUI.*dc60d5dc4b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*dc60d5dc4b : UInterface {
};

// Class TslGameUI.TslThrowableItemWheelMenuWidget
// Size: 0x580 (Inherited: 0x580)  [layout: KHOP]
struct UTslThrowableItemWheelMenuWidget : UTslItemWheelMenuWidget {
};

// Class TslGameUI.TslThrowableItemWheelSubWidget
// Size: 0x4e8 (Inherited: 0x4d0)  [layout: KHOP]
struct UTslThrowableItemWheelSubWidget : UTslItemWheelSubWidget {
	struct FText CannotEquipItemText; // 0x4d0(0x18)

	void DoAction(); // Function TslGameUI.TslThrowableItemWheelSubWidget.DoAction //  // @ game+0xe47e758
	void GetStackCount(); // Function TslGameUI.TslThrowableItemWheelSubWidget.GetStackCount //  // @ game+0xe47f040
};

// Class TslGameUI.TslThrowableItemWheelWidget
// Size: 0x5a8 (Inherited: 0x5a8)  [layout: KHOP]
struct UTslThrowableItemWheelWidget : UTslItemWheelWidget {
};

// Class TslGameUI.TslTimelineHighlight
// Size: 0x520 (Inherited: 0x420)  [layout: KHOP]
struct UTslTimelineHighlight : UUmgBaseWidget {
	struct UClass* DefaultTimelineHighlightEventMarker; // 0x420(0x08)
	struct TArray<struct UTslTimelineHighlightEventMarker*> EventMarkers; // 0x428(0x10)
	float KeyGuideMinimapExtendedOffsetY; // 0x438(0x04)
	char pad_43C[0x24]; // 0x43c(0x24)
	struct UCanvasPanel* CanvasPanel_Main; // 0x460(0x08)
	struct UHorizontalBox* HorizontalBox_Timeline; // 0x468(0x08)
	struct UProgressBar* ProgressBar_TimeLine; // 0x470(0x08)
	struct UTextBlock* TextTimeStamp; // 0x478(0x08)
	struct UBorder* Border_TopPanel; // 0x480(0x08)
	struct UBorder* Border_TestTime; // 0x488(0x08)
	struct UEditableText* EditableText_Before; // 0x490(0x08)
	struct UEditableText* EditableText_After; // 0x498(0x08)
	struct UVerticalBox* KeyGuideVertivalBox; // 0x4a0(0x08)
	struct UHorizontalBox* HorizontalBox_HighlightUser; // 0x4a8(0x08)
	struct UHorizontalBox* HorizontalBox_ReportUser; // 0x4b0(0x08)
	struct UTextBlock* TextBlock_TargetNameInKeyGuide; // 0x4b8(0x08)
	struct UTslTimelineHighlight_TopInfo* TimelineHighlight_TopInfoWidget; // 0x4c0(0x08)
	struct UTslKillMessageWidget* Dummy_KillMessageWidget; // 0x4c8(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_HighlightView; // 0x4d0(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_ReportUser; // 0x4d8(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_ShowHideTimeline; // 0x4e0(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_PlayerList; // 0x4e8(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_SpectatorCam; // 0x4f0(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_FollowCam; // 0x4f8(0x08)
	struct UTslKeyboardAndMouseIconWidget* KeyImg_FreecamView; // 0x500(0x08)
	struct UTslReplayTimeline* ReplayTimelineWidget; // 0x508(0x08)
	struct UTslGameInstance* TslGameInstance; // 0x510(0x08)
	struct UTslHighlightRenderOption* RefHighlightRenderOption; // 0x518(0x08)

	void ToggleHighlight(); // Function TslGameUI.TslTimelineHighlight.ToggleHighlight //  // @ game+0xe4a72d4
	void OnTextCommitted_Text_After(); // Function TslGameUI.TslTimelineHighlight.OnTextCommitted_Text_After //  // @ game+0xe4a243c
	void UpdateKeyImages(); // Function TslGameUI.TslTimelineHighlight.UpdateKeyImages //  // @ game+0xe4a76a4
	void FadeInJumpForExport(); // Function TslGameUI.TslTimelineHighlight.FadeInJumpForExport //  // @ game+0xe49c0c4
	void HandleSetFadeInTimer(); // Function TslGameUI.TslTimelineHighlight.HandleSetFadeInTimer //  // @ game+0xe49db38
	void OnClickExport(); // Function TslGameUI.TslTimelineHighlight.OnClickExport //  // @ game+0xe49e85c
	void OnClickExit(); // Function TslGameUI.TslTimelineHighlight.OnClickExit //  // @ game+0xe49dd18
	void OnTextCommitted_Text_Before(); // Function TslGameUI.TslTimelineHighlight.OnTextCommitted_Text_Before //  // @ game+0xe4a2544
	void OnClickPrevious(); // Function TslGameUI.TslTimelineHighlight.OnClickPrevious //  // @ game+0xe49e8ac
	void BeginHighlightByOneEvent(); // Function TslGameUI.TslTimelineHighlight.BeginHighlightByOneEvent //  // @ game+0xe49baec
	void UpdateKeyGuidePosition(); // Function TslGameUI.TslTimelineHighlight.UpdateKeyGuidePosition //  // @ game+0x2d0ef00
	void HandleSetPlayerCamera(); // Function TslGameUI.TslTimelineHighlight.HandleSetPlayerCamera //  // @ game+0xe49db4c
	void OnClickNext(); // Function TslGameUI.TslTimelineHighlight.OnClickNext //  // @ game+0xe49e884
	void HighlightExit(); // Function TslGameUI.TslTimelineHighlight.HighlightExit //  // @ game+0xe49dd18
};

// Class TslGameUI.TslTimelineHighlight_TopInfo
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UTslTimelineHighlight_TopInfo : UUmgBaseWidget {
	struct UButton* Button_HighlightExport; // 0x420(0x08)
	struct UButton* Button_HighlightExit; // 0x428(0x08)
	struct UButton* Button_Previous; // 0x430(0x08)
	struct UButton* Button_Next; // 0x438(0x08)
	struct UTextBlock* TextBlock_CountAndTotal; // 0x440(0x08)
	struct UTextBlock* TextBlock_EventTime; // 0x448(0x08)
	struct UTextBlock* TextBlock_VictimName; // 0x450(0x08)
	struct UTextBlock* TextBlock_KillerName; // 0x458(0x08)
	struct UTextBlock* TextBlock_TargetNameTop; // 0x460(0x08)
	struct UImage* Highlight_CauseOfDeathIcon; // 0x468(0x08)
	struct UImage* Highlight_ConditionOfEventIcon; // 0x470(0x08)
	struct USizeBox* SizeBoxOfCause; // 0x478(0x08)
	struct USizeBox* SizeBoxOfCondition; // 0x480(0x08)
};

// Class TslGameUI.TslTimelineHighlightEventMarker
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslTimelineHighlightEventMarker : UUmgBaseWidget {
	struct UImage* Image_Triangle; // 0x420(0x08)
};

// Class TslGameUI.TslTimelineZoomPosition
// Size: 0x420 (Inherited: 0x420)  [layout: KHOP]
struct UTslTimelineZoomPosition : UUmgBaseWidget {

	void SetCenterPos(); // Function TslGameUI.TslTimelineZoomPosition.SetCenterPos //  // @ game+0x43bab4
};

// Class TslGameUI.TslTrunkCapacityWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslTrunkCapacityWidget : UUmgBaseWidget {
	struct UImage* CapacityImage; // 0x420(0x08)
	struct UImage* FeedbackImage; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void OnLeaveItemSlot(); // Function TslGameUI.TslTrunkCapacityWidget.OnLeaveItemSlot //  // @ game+0xe49fda0
	void OnFocusItemSlotIDEquipment(); // Function TslGameUI.TslTrunkCapacityWidget.OnFocusItemSlotIDEquipment //  // @ game+0x11f819c
	void OnFocusWeaponItemSlotIDEquipment(); // Function TslGameUI.TslTrunkCapacityWidget.OnFocusWeaponItemSlotIDEquipment //  // @ game+0xea0a3c
	void OnEnterItemSlot(); // Function TslGameUI.TslTrunkCapacityWidget.OnEnterItemSlot //  // @ game+0xe49ed14
	void OnFocusItemSlot(); // Function TslGameUI.TslTrunkCapacityWidget.OnFocusItemSlot //  // @ game+0x38b2e4
	void OnAttachmentFocuseSlotID(); // Function TslGameUI.TslTrunkCapacityWidget.OnAttachmentFocuseSlotID //  // @ game+0xe49e100
	void OnDropInOtherWidget(); // Function TslGameUI.TslTrunkCapacityWidget.OnDropInOtherWidget //  // @ game+0xe49ec84
};

// Class TslGameUI.TslTrunkItemSlotWidget
// Size: 0xbc8 (Inherited: 0xb68)  [layout: LECH - offset chi la uoc luong]
struct UTslTrunkItemSlotWidget : UTslItemSlotWidget {
	struct UBorder* HoverBorder; // 0xb68(0x08)
	struct UWidget* CapacityLayer; // 0xb70(0x08)
	struct UTextBlock* CurrentCapacityText; // 0xb78(0x08)
	struct UTextBlock* MaxCapacityText; // 0xb80(0x08)
	struct FLinearColor TrunkDragEnterColor; // 0xb88(0x10)
	struct FLinearColor TrunkDragLeaveColor; // 0xb98(0x10)
	struct FLinearColor TrunkEmptyTextColor; // 0xba8(0x10)
	struct UTexture2D* emptytexture; // 0xbb8(0x08)
	char pad_BC0[0x8]; // 0xbc0(0x08)

	void OnChangedStackCount(); // Function TslGameUI.TslTrunkItemSlotWidget.OnChangedStackCount //  // @ game+0xdbdbc08
};

// Class TslGameUI.TslTrunkItemSlotWidget_Gamepad
// Size: 0xc60 (Inherited: 0xc20)  [layout: LECH - offset chi la uoc luong]
struct UTslTrunkItemSlotWidget_Gamepad : UTslItemSlotWidget_Gamepad {
	struct UVerticalBox* CategoryAndCapacityBox; // 0xc20(0x08)
	struct UImage* Img_IconBg; // 0xc28(0x08)
	struct UGridPanel* IconGrp; // 0xc30(0x08)
	struct UTextBlock* CurrentCapacityText; // 0xc38(0x08)
	struct UTextBlock* MaxCapacityText; // 0xc40(0x08)
	struct FLinearColor TrunkEmptyTextColor; // 0xc48(0x10)
	char pad_C58[0x8]; // 0xc58(0x08)

	void OnChangedStackCount(); // Function TslGameUI.TslTrunkItemSlotWidget_Gamepad.OnChangedStackCount //  // @ game+0xdbdbc08
};

// Class TslGameUI.*89f06babe8
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*89f06babe8 : UObject {
	struct TMap<enum class ETslPulseAnimationType, struct F*c745cdf1b3> PulseTrackMap; // 0x30(0x50)
	char pad_80[0x10]; // 0x80(0x10)
	struct UUserWidget* Owner; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class TslGameUI.TslUIReplayList
// Size: 0x930 (Inherited: 0x420)  [layout: KHOP]
struct UTslUIReplayList : UUmgBaseWidget {
	char pad_420[0x3a0]; // 0x420(0x3a0)
	struct UScrollBox* ReplayListScrollBox; // 0x7c0(0x08)
	struct UTextBlock* NotificationText; // 0x7c8(0x08)
	struct UTextBlock* MatchIdText; // 0x7d0(0x08)
	struct UTextBlock* MapText; // 0x7d8(0x08)
	struct UTextBlock* WeatherText; // 0x7e0(0x08)
	struct UTextBlock* RegionText; // 0x7e8(0x08)
	struct UTextBlock* TeamText; // 0x7f0(0x08)
	struct UTextBlock* RankText; // 0x7f8(0x08)
	struct UTextBlock* HeadShotsText; // 0x800(0x08)
	struct UTextBlock* KillsText; // 0x808(0x08)
	struct UTextBlock* DamageDealtText; // 0x810(0x08)
	struct UTextBlock* LongestKillText; // 0x818(0x08)
	struct UTextBlock* DistanceText; // 0x820(0x08)
	struct UComboBoxString* MapOption; // 0x828(0x08)
	struct UEditableTextBox* VersionInput; // 0x830(0x08)
	struct UComboBoxString* TeamOption; // 0x838(0x08)
	struct UComboBoxString* ViewOption; // 0x840(0x08)
	struct UEditableTextBox* MatchIDInput; // 0x848(0x08)
	struct UEditableTextBox* StartDateInput; // 0x850(0x08)
	struct UEditableTextBox* EndDateInput; // 0x858(0x08)
	struct UEditableTextBox* MinMatchTimeInput; // 0x860(0x08)
	struct UEditableTextBox* MaxMatchTimeInput; // 0x868(0x08)
	struct UComboBoxString* MatchTypeOption; // 0x870(0x08)
	struct UButton* ButtonReset; // 0x878(0x08)
	struct UButton* ButtonSearch; // 0x880(0x08)
	struct UButton* ButtonDownloadCheckedFile; // 0x888(0x08)
	struct UButton* ButtonCheckAll; // 0x890(0x08)
	struct UButton* ButtonDelete; // 0x898(0x08)
	struct UButton* ButtonPlay; // 0x8a0(0x08)
	struct UButton* ButtonDev; // 0x8a8(0x08)
	struct UButton* ButtonSA; // 0x8b0(0x08)
	struct UButton* ButtonSEA; // 0x8b8(0x08)
	struct UButton* ButtonOC; // 0x8c0(0x08)
	struct UButton* ButtonLocal; // 0x8c8(0x08)
	struct UButton* ButtonNA; // 0x8d0(0x08)
	struct UButton* ButtonEU; // 0x8d8(0x08)
	struct UButton* ButtonAS; // 0x8e0(0x08)
	struct UButton* PrevButton; // 0x8e8(0x08)
	struct UButton* NextButton; // 0x8f0(0x08)
	struct UTextBlock* TextPage; // 0x8f8(0x08)
	struct UEditableTextBox* TextBoxGo; // 0x900(0x08)
	struct UButton* ButtonGo; // 0x908(0x08)
	struct UButton* ButtonExit; // 0x910(0x08)
	struct UButton* ButtonDeleteOlds; // 0x918(0x08)
	struct UButton* ButtonJP; // 0x920(0x08)
	struct UImage* DebugCrosshair; // 0x928(0x08)

	void OnCheckAllClicked(); // Function TslGameUI.TslUIReplayList.OnCheckAllClicked //  // @ game+0xe49e7a4
	void OnSAButtonClicked(); // Function TslGameUI.TslUIReplayList.OnSAButtonClicked //  // @ game+0xe4a210c
	void OnDownloadCheckedFileClicked(); // Function TslGameUI.TslUIReplayList.OnDownloadCheckedFileClicked //  // @ game+0xe49ec54
	void OnExitButtonClicked(); // Function TslGameUI.TslUIReplayList.OnExitButtonClicked //  // @ game+0xe49ef88
	void OnSEAButtonClicked(); // Function TslGameUI.TslUIReplayList.OnSEAButtonClicked //  // @ game+0xe4a2120
	void OnGoPageBtnClicked(); // Function TslGameUI.TslUIReplayList.OnGoPageBtnClicked //  // @ game+0xe49f1a8
	void OnSearchButtonClicked(); // Function TslGameUI.TslUIReplayList.OnSearchButtonClicked //  // @ game+0xe4a2134
	void OnJPButtonClicked(); // Function TslGameUI.TslUIReplayList.OnJPButtonClicked //  // @ game+0xe49fcd8
	void OnDeleteOldsButtonClicked(); // Function TslGameUI.TslUIReplayList.OnDeleteOldsButtonClicked //  // @ game+0xe49ec2c
	void OnDevButtonClicked(); // Function TslGameUI.TslUIReplayList.OnDevButtonClicked //  // @ game+0xe49ec40
	void OnResetButtonClicked(); // Function TslGameUI.TslUIReplayList.OnResetButtonClicked //  // @ game+0xe4a20f8
	void OnEUButtonClicked(); // Function TslGameUI.TslUIReplayList.OnEUButtonClicked //  // @ game+0xe49ed00
	void OnKeepAndDeleteOldestReplaysDoneEvent(); // Function TslGameUI.TslUIReplayList.OnKeepAndDeleteOldestReplaysDoneEvent //  // @ game+0xe49fcec
	void OnPlayButtonClicked(); // Function TslGameUI.TslUIReplayList.OnPlayButtonClicked //  // @ game+0xe4a1fc8
	void OnGetReplaySummaryEvent(); // Function TslGameUI.TslUIReplayList.OnGetReplaySummaryEvent //  // @ game+0xe49f07c
	void OnNextPageBtnClicked(); // Function TslGameUI.TslUIReplayList.OnNextPageBtnClicked //  // @ game+0xe4a1a18
	void OnDeleteButtonClicked(); // Function TslGameUI.TslUIReplayList.OnDeleteButtonClicked //  // @ game+0xe49ec18
	void OnNAButtonClicked(); // Function TslGameUI.TslUIReplayList.OnNAButtonClicked //  // @ game+0xe4a1458
	void OnLocalButtonClicked(); // Function TslGameUI.TslUIReplayList.OnLocalButtonClicked //  // @ game+0xe49fed0
	void OnOCButtonClicked(); // Function TslGameUI.TslUIReplayList.OnOCButtonClicked //  // @ game+0xe4a1de8
	void OnASButtonClicked(); // Function TslGameUI.TslUIReplayList.OnASButtonClicked //  // @ game+0xe49e0ec
	void OnPrevPageBtnClicked(); // Function TslGameUI.TslUIReplayList.OnPrevPageBtnClicked //  // @ game+0xe4a20a0
};

// Class TslGameUI.TslUniversalInputComboBoxString
// Size: 0xf40 (Inherited: 0xed0)  [layout: LECH - offset chi la uoc luong]
struct UTslUniversalInputComboBoxString : UComboBoxString {
	char pad_ED0[0x8]; // 0xed0(0x08)
	struct FMulticastDelegate OnAfterGenerateWidgetEvent; // 0xed8(0x10)
	char pad_EE8[0x58]; // 0xee8(0x58)
};

// Class TslGameUI.TslUserPlatformImageRenderWidget
// Size: 0x458 (Inherited: 0x450)  [layout: KHOP]
struct UTslUserPlatformImageRenderWidget : UTslUserPlatformImageWidget {
	struct FVector2D IconPadding; // 0x450(0x08)
};

// Class TslGameUI.TslVehicleFuelWidget
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslVehicleFuelWidget : UTslUserWidget {
	struct FLinearColor EmptyFuelColor; // 0x330(0x10)
	struct FLinearColor FilledFuelColor; // 0x340(0x10)
	struct UImage* Oil_Bg; // 0x350(0x08)
	struct UImage* Oil_Gauge; // 0x358(0x08)
	struct UOverlay* GaugeBody; // 0x360(0x08)
	struct UImage* Oil_Arrow; // 0x368(0x08)
	char pad_370[0x10]; // 0x370(0x10)
};

// Class TslGameUI.TslVirtualScrollListWidget
// Size: 0x488 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslVirtualScrollListWidget : UUmgBaseWidget {
	struct UClass* EntryWidgetClass; // 0x420(0x08)
	float EntryHeight; // 0x428(0x04)
	int32 VisibleContentsMax; // 0x42c(0x04)
	struct UScrollBox* EntryScrollBox; // 0x430(0x08)
	struct USpacer* TopSpacer; // 0x438(0x08)
	struct UVerticalBox* EntryContainer; // 0x440(0x08)
	struct USpacer* BottomSpacer; // 0x448(0x08)
	struct UVerticalBox* EmptySign; // 0x450(0x08)
	struct TArray<struct UUserWidget*> EntryWidgetPool; // 0x458(0x10)
	struct TArray<bool> EntryWidgetUsages; // 0x468(0x10)
	char pad_478[0x10]; // 0x478(0x10)

	void RefreshList(); // Function TslGameUI.TslVirtualScrollListWidget.RefreshList //  // @ game+0xe4a5470
	void ScrollToBottom(); // Function TslGameUI.TslVirtualScrollListWidget.ScrollToBottom //  // @ game+0xe4a56b4
	void ScrollToTop(); // Function TslGameUI.TslVirtualScrollListWidget.ScrollToTop //  // @ game+0xe4a56c8
};

// Class TslGameUI.TslWeaponMenuScrollListWidget
// Size: 0x498 (Inherited: 0x488)  [layout: KHOP]
struct UTslWeaponMenuScrollListWidget : UTslVirtualScrollListWidget {
	struct TArray<struct FName> WeaponItemIDs; // 0x488(0x10)

	void SetWeaponItems(); // Function TslGameUI.TslWeaponMenuScrollListWidget.SetWeaponItems //  // @ game+0xe4a62f4
	void ClearWeaponItems(); // Function TslGameUI.TslWeaponMenuScrollListWidget.ClearWeaponItems //  // @ game+0xe49be88
};

// Class TslGameUI.TslVoiceChatOverlayEntryWidget
// Size: 0x488 (Inherited: 0x420)  [layout: KHOP]
struct UTslVoiceChatOverlayEntryWidget : UUmgBaseWidget {
	struct UTextBlock* TextPlayerName; // 0x420(0x08)
	struct UBorder* BorderIcon; // 0x428(0x08)
	struct UBorder* BorderName; // 0x430(0x08)
	struct UTslUserPlatformImageWidget* WidgetPlatformImage; // 0x438(0x08)
	struct FLinearColor NormalIconBgColor; // 0x440(0x10)
	struct FLinearColor NormalNameBgColor; // 0x450(0x10)
	struct FVoiceChatMemberUIInfo MemberInfo; // 0x460(0x28)
};

// Class TslGameUI.TslVoiceChatOverlayListWidget
// Size: 0x500 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslVoiceChatOverlayListWidget : UUmgBaseWidget {
	struct UInvalidationBox* InvalidationBoxChat; // 0x420(0x08)
	struct UVerticalBox* ListEntries; // 0x428(0x08)
	struct UClass* EntryWidgetClass; // 0x430(0x08)
	float SpeakingDebounceTime; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TArray<struct UTslVoiceChatOverlayEntryWidget*> ActiveEntries; // 0x440(0x10)
	struct TArray<struct UTslVoiceChatOverlayEntryWidget*> PooledEntries; // 0x450(0x10)
	struct TMap<struct FString, struct FVoiceChatMemberUIInfo> AllMembers; // 0x460(0x50)
	char pad_4B0[0x50]; // 0x4b0(0x50)
};

// Class TslGameUI.*b3f5df784e
// Size: 0xd8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*b3f5df784e : U*96becd27f1 {
	char pad_30[0xa8]; // 0x30(0xa8)

	void OnSetVoiceChannelType(); // Function TslGameUI.*b3f5df784e.OnSetVoiceChannelType //  // @ game+0x127cf3c
	void OnParticipantLeft(); // Function TslGameUI.*b3f5df784e.OnParticipantLeft //  // @ game+0xe4a1dfc
	void OnVoiceChatUpdated(); // Function TslGameUI.*b3f5df784e.OnVoiceChatUpdated //  // @ game+0xe4a405c
	void OnVoiceChatChannelDisconnected(); // Function TslGameUI.*b3f5df784e.OnVoiceChatChannelDisconnected //  // @ game+0xe4a3eec
};

// Class TslGameUI.*53aebac515
// Size: 0xe8 (Inherited: 0xd8)  [layout: KHOP]
struct U*53aebac515 : U*b3f5df784e {
	struct TArray<struct ATslPlayerStateBase*> *c4b742fb96; // 0xd8(0x10)

	void OnTeamMemberQuitted(); // Function TslGameUI.*53aebac515.OnTeamMemberQuitted //  // @ game+0x127cf3c
};

// Class TslGameUI.*edca44ad97
// Size: 0xd8 (Inherited: 0xd8)  [layout: KHOP]
struct U*edca44ad97 : U*b3f5df784e {
};

// Class TslGameUI.TslWeaponButtonWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslWeaponButtonWidget : UUmgBaseWidget {
	struct FName WeaponItemId; // 0x420(0x08)

	void SetWeaponItem(); // Function TslGameUI.TslWeaponButtonWidget.SetWeaponItem //  // @ game+0xe4a6274
	void OnUpdateWeaponItem(); // Function TslGameUI.TslWeaponButtonWidget.OnUpdateWeaponItem //  // @ game+0x43bab4
	void GetWeaponItemId(); // Function TslGameUI.TslWeaponButtonWidget.GetWeaponItemId //  // @ game+0xe49cb08
};

// Class TslGameUI.TslWeaponEquipmentBaseWidget
// Size: 0x560 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponEquipmentBaseWidget : UUmgBaseWidget {
	char pad_420[0xc0]; // 0x420(0xc0)
	float MaxLayoutCount; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<TScriptInterface<struct U*db70ebf624>> WeaponSlotList; // 0x4e8(0x10)
	char pad_4F8[0x50]; // 0x4f8(0x50)
	struct UWeaponProcessorComponent* WeaponProcessor; // 0x548(0x08)
	struct UTslItemDragDropOperation* TslItemDragDropOperation; // 0x550(0x08)
	char pad_558[0x8]; // 0x558(0x08)

	void CallOnAttachmentFocused(); // Function TslGameUI.TslWeaponEquipmentBaseWidget.CallOnAttachmentFocused //  // @ game+0xe49bcd4
	void OnChildSlotRefreshFocus(); // Function TslGameUI.TslWeaponEquipmentBaseWidget.OnChildSlotRefreshFocus //  // @ game+0x11fadb0
	void CallOnAttachmentChangedWeaponSlot(); // Function TslGameUI.TslWeaponEquipmentBaseWidget.CallOnAttachmentChangedWeaponSlot //  // @ game+0xe49bb14
	void CallOnWeaponEquipmentFocused(); // Function TslGameUI.TslWeaponEquipmentBaseWidget.CallOnWeaponEquipmentFocused //  // @ game+0xea0820
};

// Class TslGameUI.TslWeaponEquipmentWidget
// Size: 0x560 (Inherited: 0x560)  [layout: KHOP]
struct UTslWeaponEquipmentWidget : UTslWeaponEquipmentBaseWidget {
};

// Class TslGameUI.TslWeaponEquipmentWidget_Gamepad
// Size: 0x570 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct UTslWeaponEquipmentWidget_Gamepad : UTslWeaponEquipmentBaseWidget {
	float LTDoubleTapTime; // 0x560(0x04)
	char pad_564[0xc]; // 0x564(0x0c)

	void OnChildSlotRefreshFocus(); // Function TslGameUI.TslWeaponEquipmentWidget_Gamepad.OnChildSlotRefreshFocus //  // @ game+0x11fadb0
};

// Class TslGameUI.TslWeaponSkinGuideWidget
// Size: 0x490 (Inherited: 0x420)  [layout: KHOP]
struct UTslWeaponSkinGuideWidget : UUmgBaseWidget {
	struct FUmgWidgetBinder_HorizontalBox WeaponSkinOn_Override_Binder; // 0x420(0x28)
	struct FUmgWidgetBinder_HorizontalBox WeaponSkinOn_Delete_Binder; // 0x448(0x28)
	struct U*7fa8406bd3* SkinGuideFadeIn; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct UTslKeyboardAndMouseIconWidget* SkinOverrideKeyGuide; // 0x480(0x08)
	struct UTslKeyboardAndMouseIconWidget* SkinDeleteKeyGuide; // 0x488(0x08)
};

// Class TslGameUI.TslWebPopup
// Size: 0x4a8 (Inherited: 0x420)  [layout: KHOP]
struct UTslWebPopup : UUmgBaseWidget {
	char pad_420[0x10]; // 0x420(0x10)
	struct UButton* Button_Back; // 0x430(0x08)
	struct UButton* Button_Reload; // 0x438(0x08)
	struct UButton* Button_Exit; // 0x440(0x08)
	struct UBorder* LoadingMainBorder; // 0x448(0x08)
	struct UBorder* WebViewBorder; // 0x450(0x08)
	struct UBorder* MainButtonGroup; // 0x458(0x08)
	char pad_460[0x40]; // 0x460(0x40)
	struct UTslCoherentWidget* WebView; // 0x4a0(0x08)

	void UpdateWebPopup(); // Function TslGameUI.TslWebPopup.UpdateWebPopup //  // @ game+0xe4a82a8
	void HandleFinishLoad(); // Function TslGameUI.TslWebPopup.HandleFinishLoad //  // @ game+0xe49ce44
	void SetLayout(); // Function TslGameUI.TslWebPopup.SetLayout //  // @ game+0xe4a5780
	void SetWebPopupVisibility(); // Function TslGameUI.TslWebPopup.SetWebPopupVisibility //  // @ game+0xe4a647c
	void CloseWebPopup(); // Function TslGameUI.TslWebPopup.CloseWebPopup //  // @ game+0xe49bf1c
	void HandleExit(); // Function TslGameUI.TslWebPopup.HandleExit //  // @ game+0xe49cb48
	void HandleFailLoad(); // Function TslGameUI.TslWebPopup.HandleFailLoad //  // @ game+0xe49cb5c
	void HandleStartLoading(); // Function TslGameUI.TslWebPopup.HandleStartLoading //  // @ game+0xe49db60
	void GetSaveWebPopupParam(); // Function TslGameUI.TslWebPopup.GetSaveWebPopupParam //  // @ game+0xe49ca7c
	void SetReuse(); // Function TslGameUI.TslWebPopup.SetReuse //  // @ game+0xe4a61d4
	void IsWebPopupShow(); // Function TslGameUI.TslWebPopup.IsWebPopupShow //  // @ game+0xe49dfb4
	void UpdateURLAndWidget(); // Function TslGameUI.TslWebPopup.UpdateURLAndWidget //  // @ game+0x43bab4
	void OnUpdateWebPopup(); // Function TslGameUI.TslWebPopup.OnUpdateWebPopup //  // @ game+0xe4a2868
};

// Class TslGameUI.TslWelcomeBaseHUD
// Size: 0x810 (Inherited: 0x7b0)  [layout: KHOP]
struct ATslWelcomeBaseHUD : ATslBaseHUD {
	char pad_7B0[0x8]; // 0x7b0(0x08)
	struct FMulticastDelegate OnStateChanged; // 0x7b8(0x10)
	enum class *37ade592c3 WelcomeState; // 0x7c8(0x01)
	char pad_7C9[0x37]; // 0x7c9(0x37)
	struct FString EntitlementsRequestUrl; // 0x800(0x10)

	void OnPressedPopupCommon(); // Function TslGameUI.TslWelcomeBaseHUD.OnPressedPopupCommon //  // @ game+0xe4a202c
};

// Class TslGameUI.TslWelcomeMainWidget
// Size: 0x428 (Inherited: 0x420)  [layout: KHOP]
struct UTslWelcomeMainWidget : UHudMainBaseWidget {
	struct UWidgetSwitcher* SwitcherMessage; // 0x420(0x08)

	void HandleOnStateChanged(); // Function TslGameUI.TslWelcomeMainWidget.HandleOnStateChanged //  // @ game+0xe49d984
};

// Class TslGameUI.TslWorldMapButtonsWidget
// Size: 0x5e0 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslWorldMapButtonsWidget : UTslUserWidget {
	char pad_330[0x150]; // 0x330(0x150)
	struct UCheckBox* ButtonFlightTrail; // 0x480(0x08)
	struct UCheckBox* ButtonPingOrWaypoint; // 0x488(0x08)
	struct UTslCommonButton* ButtonWorldPingClear; // 0x490(0x08)
	struct UTslCommonButton* ButtonItemPingClear; // 0x498(0x08)
	struct UTslCommonButton* ButtonWaypointPingClear; // 0x4a0(0x08)
	struct UTslTextToolTipWidget* WidgetTextToolTip; // 0x4a8(0x08)
	struct FVector2D ToolTipOffset; // 0x4b0(0x08)
	struct FText AirplaneRouteShowButtonHint; // 0x4b8(0x18)
	struct FText AirplaneRouteHideButtonHint; // 0x4d0(0x18)
	struct FText PingOrWaypointShowButtonHint; // 0x4e8(0x18)
	struct FText PingOrWaypointHideButtonHint; // 0x500(0x18)
	struct FText WorldPingClearButtonHint; // 0x518(0x18)
	struct FText ItemPingClearButtonHint; // 0x530(0x18)
	struct FText WaypointPingClearButtonHint; // 0x548(0x18)
	float ButtonDefaultOpacity; // 0x560(0x04)
	float ButtonHoveredOpacity; // 0x564(0x04)
	float CheckBoxDefaultOpacity; // 0x568(0x04)
	float CheckBoxActiveOpacity; // 0x56c(0x04)
	char pad_570[0x70]; // 0x570(0x70)

	void OnUnhoveredWaypointPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnUnhoveredWaypointPingClear //  // @ game+0x124fd94
	void OnHoveredWaypointPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnHoveredWaypointPingClear //  // @ game+0xe49f31c
	void OnClickedWorldPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnClickedWorldPingClear //  // @ game+0xe49e95c
	void OnClickedWaypointPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnClickedWaypointPingClear //  // @ game+0xe49e948
	void OnClickedItemPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnClickedItemPingClear //  // @ game+0xe49e934
	void OnHoveredItemPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnHoveredItemPingClear //  // @ game+0xe49f2f8
	void OnUnhoveredItemPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnUnhoveredItemPingClear //  // @ game+0x124fdb8
	void OnHoveredWorldPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnHoveredWorldPingClear //  // @ game+0xe49f340
	void OnUnhoveredWorldPingClear(); // Function TslGameUI.TslWorldMapButtonsWidget.OnUnhoveredWorldPingClear //  // @ game+0x124fd70
	void OnToggledFlightTrail(); // Function TslGameUI.TslWorldMapButtonsWidget.OnToggledFlightTrail //  // @ game+0xe4a26c8
	void OnToggledPingOrWaypoint(); // Function TslGameUI.TslWorldMapButtonsWidget.OnToggledPingOrWaypoint //  // @ game+0xe4a2744
};

// Class TslGameUI.TslWorldMapKeyGuideWidget
// Size: 0x340 (Inherited: 0x330)  [layout: KHOP]
struct UTslWorldMapKeyGuideWidget : UTslUserWidget {
	struct UButton* Button; // 0x330(0x08)
	struct UWidgetSwitcher* SwitcherButton; // 0x338(0x08)

	void OnClickedButton(); // Function TslGameUI.TslWorldMapKeyGuideWidget.OnClickedButton //  // @ game+0xe49e920
};

// Class TslGameUI.TslZoneImageWidget
// Size: 0x340 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct UTslZoneImageWidget : UTslUserWidget {
	struct UImage* ZoneImage; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
};

// Class TslGameUI.TslBlackZoneImageWidget
// Size: 0x358 (Inherited: 0x340)  [layout: LECH - offset chi la uoc luong]
struct UTslBlackZoneImageWidget : UTslZoneImageWidget {
	struct U*7fa8406bd3* PulseAnim; // 0x340(0x08)
	int32 PulseCycles; // 0x348(0x04)
	char pad_34C[0xc]; // 0x34c(0x0c)
};

// Class TslGameUI.UI_AllInputBlockPopupWidget
// Size: 0x570 (Inherited: 0x560)  [layout: LECH - offset chi la uoc luong]
struct UUI_AllInputBlockPopupWidget : UTslPopupBoxWidget {
	struct UWidget* WarningImage; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)
};

// Class TslGameUI.UIBlurbackground
// Size: 0x268 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UUIBlurbackground : UUserWidget {
	struct UBackgroundBlur* Blurring; // 0x258(0x08)
	float BackgroundBlurStrength; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
};

// Class TslGameUI.VehicleFuelBaseWidget
// Size: 0x498 (Inherited: 0x420)  [layout: KHOP]
struct UVehicleFuelBaseWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UImage* ImageOilGauge; // 0x428(0x08)
	struct UImage* ImageOilGaugeBg; // 0x430(0x08)
	struct UImage* ImageOilArrow; // 0x438(0x08)
	struct UOverlay* PanelGaugeBody; // 0x440(0x08)
	struct FLinearColor NormalColor; // 0x448(0x10)
	struct FLinearColor FuelEmptyColor; // 0x458(0x10)
	struct FName GaugePramName; // 0x468(0x08)
	struct UImage* fuelicon; // 0x470(0x08)
	struct UTexture2D* ICEGaugeTexture; // 0x478(0x08)
	struct UTexture2D* EVGaugeTexture; // 0x480(0x08)
	struct UTexture2D* ICEIconTexture; // 0x488(0x08)
	struct UTexture2D* EvIconTexture; // 0x490(0x08)
};

// Class TslGameUI.VehicleSeatInfoBaseWidget
// Size: 0x450 (Inherited: 0x420)  [layout: KHOP]
struct UVehicleSeatInfoBaseWidget : UUmgBaseWidget {
	struct UBorder* BorderSeat; // 0x420(0x08)
	struct UTextBlock* TextNumber; // 0x428(0x08)
	int32 SeatIndex; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FName StateParamName; // 0x438(0x08)
	struct APawn* CachedVehiclePawn; // 0x440(0x08)
	struct U*1d7b50e5cc* CachedSeatComponent; // 0x448(0x08)
};

// Class TslGameUI.VehicleStanceBaseWidget
// Size: 0x478 (Inherited: 0x420)  [layout: KHOP]
struct UVehicleStanceBaseWidget : UUmgBaseWidget {
	struct UVerticalBox* ListVehicleArea; // 0x420(0x08)
	struct UWidget* WidgetVehicleDetailInfo; // 0x428(0x08)
	struct UTextBlock* TextSpeed; // 0x430(0x08)
	struct UTextBlock* TextSpeedUnits; // 0x438(0x08)
	struct UUserWidget* WidgetLifeGauge; // 0x440(0x08)
	struct UUserWidget* WidgetVehicleFuel; // 0x448(0x08)
	struct U*7fa8406bd3* AnimImminentExplosion; // 0x450(0x08)
	struct U*7fa8406bd3* AnimInit; // 0x458(0x08)
	struct U*7fa8406bd3* AnimExploded; // 0x460(0x08)
	struct APawn* CachedVehiclePawn; // 0x468(0x08)
	struct UUserWidget* CachedVehicleIconWidget; // 0x470(0x08)
};

// Class TslGameUI.VehicleStanceIconWidget
// Size: 0x458 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UVehicleStanceIconWidget : UUmgBaseWidget {
	struct USizeBox* SizeboxMainSize; // 0x420(0x08)
	struct UCanvasPanel* PanelMain; // 0x428(0x08)
	struct UInvalidationBox* InvalidationboxVehicleIcon; // 0x430(0x08)
	struct USizeBox* SizeboxVehicleIcon; // 0x438(0x08)
	struct UImage* ImageVehicleIcon; // 0x440(0x08)
	struct APawn* CachedVehiclePawn; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)
};

// Class TslGameUI.VehicleThrottleBaseWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UVehicleThrottleBaseWidget : UUmgBaseWidget {
	struct UProgressBar* ThrottleUp; // 0x420(0x08)
	struct UProgressBar* ThrottleDown; // 0x428(0x08)
};

// Class TslGameUI.VehicleWheelInfoBaseWidget
// Size: 0x468 (Inherited: 0x420)  [layout: KHOP]
struct UVehicleWheelInfoBaseWidget : UUmgBaseWidget {
	struct FColorBlindColorSet WheelColorSet; // 0x420(0x10)
	int32 WheelIndex; // 0x430(0x04)
	float HeavyDamagedThreshold; // 0x434(0x04)
	struct UImage* ImageWheel; // 0x438(0x08)
	struct UImage* ImagePuncture; // 0x440(0x08)
	struct ATslWheeledVehicle* CachedVehiclePawn; // 0x448(0x08)
	struct UTslWheeledVehicleMovement* CachedVehicleMovement; // 0x450(0x08)
	struct FName WheelColorParamName; // 0x458(0x08)
	struct FName WheelBlinkParamName; // 0x460(0x08)
};

// Class TslGameUI.VersionInfoBaseWidget
// Size: 0x438 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UVersionInfoBaseWidget : UUmgBaseWidget {
	bool bReturnEmptyVersionTextIfNickNameInvalid; // 0x420(0x01)
	bool bHideRegionIfInvalid; // 0x421(0x01)
	bool bHideInfraCodeIfInvalid; // 0x422(0x01)
	char pad_423[0x5]; // 0x423(0x05)
	struct UTextBlock* TextVersionInfo; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)

	void ForceUpdate(); // Function TslGameUI.VersionInfoBaseWidget.ForceUpdate //  // @ game+0xe49ca4c
	void OnElapsedTimeUpdated(); // Function TslGameUI.VersionInfoBaseWidget.OnElapsedTimeUpdated //  // @ game+0xfdea40
	void OnMatchIdUpdated(); // Function TslGameUI.VersionInfoBaseWidget.OnMatchIdUpdated //  // @ game+0xe49fee4
};

// Class TslGameUI.VersionInfoCanvasBaseWidget
// Size: 0x430 (Inherited: 0x420)  [layout: KHOP]
struct UVersionInfoCanvasBaseWidget : UUmgBaseWidget {
	struct UUserWidget* WidgetVersionInfo; // 0x420(0x08)
	struct URetainerBox* RetainerboxVersionInfo; // 0x428(0x08)
};

// Class TslGameUI.WeaponSlotThrowableListWidget
// Size: 0x560 (Inherited: 0x510)  [layout: LECH - offset chi la uoc luong]
struct UWeaponSlotThrowableListWidget : UWeaponSlotBaseWidget {
	struct UTextBlock* CurrentItemCountText; // 0x510(0x08)
	struct UHorizontalBox* NextThrowableHintsPanel; // 0x518(0x08)
	char pad_520[0x10]; // 0x520(0x10)
	struct UClass* ThrowableItemIconWidgetClass; // 0x530(0x08)
	int32 MaxNextThrowableHint; // 0x538(0x04)
	float ShowAnimationDelay; // 0x53c(0x04)
	char pad_540[0x20]; // 0x540(0x20)

	void OnEquippedWeaponsReplicated(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnEquippedWeaponsReplicated //  // @ game+0xfd6ee8
	void OnWidgetVisibilityChanged(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnWidgetVisibilityChanged //  // @ game+0xe4a5258
	void OnConsumeThrowableItem(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnConsumeThrowableItem //  // @ game+0xe49eae0
	void OnNotifyWeaponArm(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnNotifyWeaponArm //  // @ game+0xd8bd7c
	void OnRiderReplicated(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnRiderReplicated //  // @ game+0x12489e0
	void OnInventoryItemAddedOrChanged(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnInventoryItemAddedOrChanged //  // @ game+0x1231a74
	void OnHintShowAnimationFinished(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnHintShowAnimationFinished //  // @ game+0xe49f1c4
	void OnInventoryItemRemoved(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnInventoryItemRemoved //  // @ game+0xfd6f94
	void OnNotifyWeaponChange(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnNotifyWeaponChange //  // @ game+0x109b724
	void OnViewTargetChanged(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnViewTargetChanged //  // @ game+0x11a6324
	void OnViewTargetInventoryReplicated(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnViewTargetInventoryReplicated //  // @ game+0x12489e0
	void OnNotifyThrowableWheelSelection(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnNotifyThrowableWheelSelection //  // @ game+0xe4a1cd4
	void OnEquipmentItemsUpdated(); // Function TslGameUI.WeaponSlotThrowableListWidget.OnEquipmentItemsUpdated //  // @ game+0xfd6f18
};

// Class TslGameUI.WeaponSlotHudBaseWidget
// Size: 0x560 (Inherited: 0x420)  [layout: KHOP]
struct UWeaponSlotHudBaseWidget : UUmgBaseWidget {
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot; // 0x420(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot0; // 0x428(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot1; // 0x430(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot2; // 0x438(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot3; // 0x440(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot4; // 0x448(0x08)
	struct UWeaponSlotBaseWidget* WidgetWeaponSlot5; // 0x450(0x08)
	struct UBorder* BorderWeaponSlotList; // 0x458(0x08)
	struct U*7fa8406bd3* AnimNewFadeInSlot; // 0x460(0x08)
	struct U*7fa8406bd3* AnimNewFadeOutSlot; // 0x468(0x08)
	float SlotOffsetMultiply; // 0x470(0x04)
	float SlotPadding; // 0x474(0x04)
	struct FSequence_Float MovingSequence; // 0x478(0xa0)
	char pad_518[0x38]; // 0x518(0x38)
	struct FTimerHandle FinishTimer; // 0x550(0x08)
	struct UWeaponProcessorComponent* CachedWeaponProcessor; // 0x558(0x08)

	void OnNotifyWeaponArmed(); // Function TslGameUI.WeaponSlotHudBaseWidget.OnNotifyWeaponArmed //  // @ game+0xe4a1dd4
	void OnNotifyWeaponChange(); // Function TslGameUI.WeaponSlotHudBaseWidget.OnNotifyWeaponChange //  // @ game+0x108bcd4
	void OnMovingFinished(); // Function TslGameUI.WeaponSlotHudBaseWidget.OnMovingFinished //  // @ game+0xe4a0a3c
	void OnNotifyWeaponUnarm(); // Function TslGameUI.WeaponSlotHudBaseWidget.OnNotifyWeaponUnarm //  // @ game+0x104c91c
	void OnMovingStarted(); // Function TslGameUI.WeaponSlotHudBaseWidget.OnMovingStarted //  // @ game+0xe4a0a50
};

// Class TslGameUI.ZeroingDistanceBaseWidget
// Size: 0x450 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UZeroingDistanceBaseWidget : UUmgBaseWidget {
	struct UTextBlock* TextZeroingDistance; // 0x420(0x08)
	struct U*7fa8406bd3* AnimZeroDistChange; // 0x428(0x08)
	struct FText ZeroingTextFormat; // 0x430(0x18)
	char pad_448[0x8]; // 0x448(0x08)
};

