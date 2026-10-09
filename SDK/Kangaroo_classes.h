// Class Kangaroo.KangarooCrosshair
// Size: 0x460 (Inherited: 0x400)  [layout: KHOP]
struct AKangarooCrosshair : AActor {
	struct USceneComponent* CrosshairOrigin; // 0x400(0x08)
	struct UPaperSpriteComponent* CrosshairCenter; // 0x408(0x08)
	struct UPaperSpriteComponent* CrosshairL; // 0x410(0x08)
	struct UPaperSpriteComponent* CrosshairT; // 0x418(0x08)
	struct UPaperSpriteComponent* CrosshairR; // 0x420(0x08)
	struct UPaperSpriteComponent* CrosshairB; // 0x428(0x08)
	struct UPaperSpriteComponent* CrosshairNoAmmo; // 0x430(0x08)
	struct UPaperSpriteComponent* CircleIndicator; // 0x438(0x08)
	struct UMaterialInstanceDynamic* *3e12c08882; // 0x440(0x08)
	float *792ac8eb4c; // 0x448(0x04)
	float *c5faa19187; // 0x44c(0x04)
	float CurrentExpansion; // 0x450(0x04)
	struct FRotator CachedWorldRotation; // 0x454(0x0c)

	void *528a2e0fec(); // Function Kangaroo.KangarooCrosshair.*528a2e0fec //  // @ game+0xf762b58
	void *ea3eba3955(); // Function Kangaroo.KangarooCrosshair.*ea3eba3955 //  // @ game+0xf7663c8
};

// Class Kangaroo.KangarooDamageIndicator
// Size: 0x450 (Inherited: 0x408)  [layout: KHOP]
struct AKangarooDamageIndicator : ATextRenderActor {
	char pad_408[0x30]; // 0x408(0x30)
	struct AKangarooDamageIndicatorManager* Manager; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
	struct UMaterialInstanceDynamic* *29c741c310; // 0x448(0x08)
};

// Class Kangaroo.KangarooDamageIndicatorManager
// Size: 0x458 (Inherited: 0x400)  [layout: KHOP]
struct AKangarooDamageIndicatorManager : AActor {
	struct AKangarooGameMode* *3f4871492f; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct UWorld* *ff721c49a4; // 0x410(0x08)
	struct TArray<struct AKangarooDamageIndicator*> *c9b3defe74; // 0x418(0x10)
	struct TArray<struct AKangarooDamageIndicator*> *1bcb322fd4; // 0x428(0x10)
	struct TArray<struct AKangarooDamageIndicator*> *7c1be1f887; // 0x438(0x10)
	struct TArray<struct AKangarooDamageIndicator*> *b7fa430e2b; // 0x448(0x10)
};

// Class Kangaroo.KangarooDamageType
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UKangarooDamageType : U*c4837fc2d7 {
};

// Class Kangaroo.KangarooUserWidget
// Size: 0x258 (Inherited: 0x258)  [layout: KHOP]
struct UKangarooUserWidget : UUserWidget {
};

// Class Kangaroo.KangarooHelpWidget
// Size: 0x440 (Inherited: 0x440)  [layout: KHOP]
struct UKangarooHelpWidget : UStandaloneBaseUserWidget {
};

// Class Kangaroo.KangarooChooseGameWidget
// Size: 0x340 (Inherited: 0x258)  [layout: KHOP]
struct UKangarooChooseGameWidget : UKangarooUserWidget {
	char pad_258[0xc8]; // 0x258(0xc8)
	struct UTextBlock* CurrentMap_Text; // 0x320(0x08)
	struct UButton* PlayEasy_Button; // 0x328(0x08)
	struct UButton* PlayNormal_Button; // 0x330(0x08)
	struct UButton* PlayHard_Button; // 0x338(0x08)

	void OnPlayEasyButtonClicked(); // Function Kangaroo.KangarooChooseGameWidget.OnPlayEasyButtonClicked //  // @ game+0xf761e90
	void OnPlayHardButtonClicked(); // Function Kangaroo.KangarooChooseGameWidget.OnPlayHardButtonClicked //  // @ game+0xf762490
	void OnPlayNormalButtonClicked(); // Function Kangaroo.KangarooChooseGameWidget.OnPlayNormalButtonClicked //  // @ game+0xf7624ac
};

// Class Kangaroo.KangarooHighScorePreviewWidget
// Size: 0x268 (Inherited: 0x258)  [layout: KHOP]
struct UKangarooHighScorePreviewWidget : UKangarooUserWidget {
	struct UTextBlock* NormalBestTime_Text; // 0x258(0x08)
	struct UTextBlock* HardBestTime_Text; // 0x260(0x08)
};

// Class Kangaroo.KangarooMainMenuWidget
// Size: 0x450 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UKangarooMainMenuWidget : UKangarooUserWidget {
	char pad_258[0x1d8]; // 0x258(0x1d8)
	struct UButton* Help_Button; // 0x430(0x08)
	struct UButton* Quit_Button; // 0x438(0x08)
	struct UKangarooChooseGameWidget* ChooseGame_Widget; // 0x440(0x08)
	char pad_448[0x8]; // 0x448(0x08)

	void OnHelpButtonClicked(); // Function Kangaroo.KangarooMainMenuWidget.OnHelpButtonClicked //  // @ game+0xf761e90
	void OnQuitButtonClicked(); // Function Kangaroo.KangarooMainMenuWidget.OnQuitButtonClicked //  // @ game+0xf7624ac
};

// Class Kangaroo.KangarooResultMenuBaseWidget
// Size: 0x488 (Inherited: 0x440)  [layout: KHOP]
struct UKangarooResultMenuBaseWidget : UStandaloneBaseUserWidget {
	char pad_440[0x8]; // 0x440(0x08)
	struct TArray<struct FText> ResultMessagePool; // 0x448(0x10)
	struct UTextBlock* PlayerName; // 0x458(0x08)
	struct UTextBlock* ResultMessage; // 0x460(0x08)
	struct UButton* Retry_Button; // 0x468(0x08)
	struct UButton* Menu_Button; // 0x470(0x08)
	struct UButton* ReturnToPUBG_Button; // 0x478(0x08)
	struct UWidget* ReturnToPUBG_Console; // 0x480(0x08)

	void OnRetryButtonClicked(); // Function Kangaroo.KangarooResultMenuBaseWidget.OnRetryButtonClicked //  // @ game+0xf7625f0
	void OnReturnToPUBGButtonClicked(); // Function Kangaroo.KangarooResultMenuBaseWidget.OnReturnToPUBGButtonClicked //  // @ game+0xf762604
	void OnMenuButtonClicked(); // Function Kangaroo.KangarooResultMenuBaseWidget.OnMenuButtonClicked //  // @ game+0xf76247c
};

// Class Kangaroo.KangarooWinMenuWidget
// Size: 0x5a8 (Inherited: 0x488)  [layout: KHOP]
struct UKangarooWinMenuWidget : UKangarooResultMenuBaseWidget {
	struct UAkAudioEvent* FinalWinMusic; // 0x488(0x08)
	struct UAudioComponent* CurrentMusic; // 0x490(0x08)
	int32 CurrentRunOffset; // 0x498(0x04)
	bool CreditsEnabled; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float RightBeginOffset; // 0x4a0(0x04)
	float LeftBeginOffset; // 0x4a4(0x04)
	float RunDuration; // 0x4a8(0x04)
	float RunSpeed; // 0x4ac(0x04)
	struct TArray<struct FKangarooCreditsCategory> CreditsCategories; // 0x4b0(0x10)
	struct UFlipbookSetAsset* PlayerRunFlipbooks; // 0x4c0(0x08)
	float DelayChickenSeconds; // 0x4c8(0x04)
	bool DelayPassed; // 0x4cc(0x01)
	bool PlayedThankYou; // 0x4cd(0x01)
	char pad_4CE[0x2]; // 0x4ce(0x02)
	int32 CurrentRunSequence; // 0x4d0(0x04)
	int32 CurrentCategoryIndex; // 0x4d4(0x04)
	int32 CurrentCategoryEntryIndex; // 0x4d8(0x04)
	float RunTimer; // 0x4dc(0x04)
	struct UPaperSprite* CurrentPlayerRunFrame; // 0x4e0(0x08)
	struct FString CurrentPlayerText; // 0x4e8(0x10)
	struct FString CurrentChicken1Text; // 0x4f8(0x10)
	struct FString CurrentChicken2Text; // 0x508(0x10)
	struct FString CurrentChicken3Text; // 0x518(0x10)
	struct UTextBlock* CategoryText; // 0x528(0x08)
	struct UTextBlock* Chicken1Text; // 0x530(0x08)
	struct UTextBlock* Chicken2Text; // 0x538(0x08)
	struct UTextBlock* Chicken3Text; // 0x540(0x08)
	struct UImage* RunningPlayer; // 0x548(0x08)
	struct UImage* RunningChicken1; // 0x550(0x08)
	struct UImage* RunningChicken2; // 0x558(0x08)
	struct UImage* RunningChicken3; // 0x560(0x08)
	struct FText DifficultyName; // 0x568(0x18)
	struct FString TimerString; // 0x580(0x10)
	struct UPaperSprite* CurrentChickenRunFrame1; // 0x590(0x08)
	struct UPaperSprite* CurrentChickenRunFrame2; // 0x598(0x08)
	struct UPaperSprite* CurrentChickenRunFrame3; // 0x5a0(0x08)

	void TickRunLogic(); // Function Kangaroo.KangarooWinMenuWidget.TickRunLogic //  // @ game+0xf765a18
	void PlayThankYouAnimation(); // Function Kangaroo.KangarooWinMenuWidget.PlayThankYouAnimation //  // @ game+0x43bab4
	void PlayLogoAnimation(); // Function Kangaroo.KangarooWinMenuWidget.PlayLogoAnimation //  // @ game+0x43bab4
};

// Class Kangaroo.KangarooLoseMenuWidget
// Size: 0x4c8 (Inherited: 0x488)  [layout: KHOP]
struct UKangarooLoseMenuWidget : UKangarooResultMenuBaseWidget {
	struct UImage* PlayerHeadIndicator; // 0x488(0x08)
	struct UImage* KillerImage; // 0x490(0x08)
	struct UImage* KillerWeaponImage; // 0x498(0x08)
	struct FText StageName; // 0x4a0(0x18)
	struct UPaperSprite* KillerSprite; // 0x4b8(0x08)
	struct UPaperSprite* KillerWeaponSprite; // 0x4c0(0x08)
};

// Class Kangaroo.KangarooGameMenuWidget
// Size: 0x330 (Inherited: 0x258)  [layout: LECH - offset chi la uoc luong]
struct UKangarooGameMenuWidget : UKangarooUserWidget {
	struct UButton* Resume_Button; // 0x258(0x08)
	struct UButton* Lobby_Button; // 0x260(0x08)
	struct UButton* Quit_Button; // 0x268(0x08)
	char pad_270[0xc0]; // 0x270(0xc0)

	void OnResumeButtonClicked(); // Function Kangaroo.KangarooGameMenuWidget.OnResumeButtonClicked //  // @ game+0xf7625d4
	void OnQuitButtonClicked(); // Function Kangaroo.KangarooGameMenuWidget.OnQuitButtonClicked //  // @ game+0xf7625b8
	void OnLobbyButtonClicked(); // Function Kangaroo.KangarooGameMenuWidget.OnLobbyButtonClicked //  // @ game+0xf762460
};

// Class Kangaroo.*5b232802ce
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*5b232802ce : UBlueprintFunctionLibrary {

	void *a1e095b545(); // Function Kangaroo.*5b232802ce.*a1e095b545 //  // @ game+0xf76083c
	void *1bc3dfed0d(); // Function Kangaroo.*5b232802ce.*1bc3dfed0d //  // @ game+0xf76083c
};

// Class Kangaroo.KangarooLotteryWidget
// Size: 0x268 (Inherited: 0x258)  [layout: KHOP]
struct UKangarooLotteryWidget : UKangarooUserWidget {
	struct UDataTable* LotteryTable; // 0x258(0x08)
	struct UUniformGridPanel* GridPanel_Widget; // 0x260(0x08)
};

// Class Kangaroo.KangarooDeveloperMenuWidget
// Size: 0x258 (Inherited: 0x258)  [layout: KHOP]
struct UKangarooDeveloperMenuWidget : UKangarooUserWidget {

	void SetMapAndStage(); // Function Kangaroo.KangarooDeveloperMenuWidget.SetMapAndStage //  // @ game+0xf763548
};

// Class Kangaroo.KangarooLobbyMenuWidget
// Size: 0x480 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UKangarooLobbyMenuWidget : UStandaloneBaseUserWidget {
	struct TArray<struct FText> Difficulties; // 0x440(0x10)
	TScriptInterface<struct U*ea8557fa8d> LastFocusedWidget; // 0x450(0x10)
	struct UWidgetSwitcher* MenuWidgetSwitch; // 0x460(0x08)
	struct UVerticalBox* LobbyMenuButtonPannel; // 0x468(0x08)
	struct UTextBlock* DifficultyText; // 0x470(0x08)
	int32 Difficulty; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)

	void HandleGamepadDownOfChild(); // Function Kangaroo.KangarooLobbyMenuWidget.HandleGamepadDownOfChild //  // @ game+0xdbd0598
	void HandleGamepadUpOfChild(); // Function Kangaroo.KangarooLobbyMenuWidget.HandleGamepadUpOfChild //  // @ game+0xdbd06ec
	void OnWidgetBPressed(); // Function Kangaroo.KangarooLobbyMenuWidget.OnWidgetBPressed //  // @ game+0xf762618
	void HandleFocusReceivedOfChild(); // Function Kangaroo.KangarooLobbyMenuWidget.HandleFocusReceivedOfChild //  // @ game+0xe195334
	void HandleGamepadEnterOfChild(); // Function Kangaroo.KangarooLobbyMenuWidget.HandleGamepadEnterOfChild //  // @ game+0xe195294
};

// Class Kangaroo.KangarooShellManager
// Size: 0x438 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AKangarooShellManager : AActor {
	struct U*1a8793303f* Group; // 0x400(0x08)
	char pad_408[0x30]; // 0x408(0x30)
};

// Class Kangaroo.KangarooPlane
// Size: 0x4c8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AKangarooPlane : AActor {
	struct UPaperSpriteComponent* PlaneSprite; // 0x400(0x08)
	struct UPaperSpriteComponent* PlaneShadow; // 0x408(0x08)
	struct USceneComponent* LadderOrigin; // 0x410(0x08)
	struct UPaperSpriteComponent* LadderSprite; // 0x418(0x08)
	struct UBoxComponent* LadderTrigger; // 0x420(0x08)
	bool UseConstantInterp; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float BobHeight; // 0x42c(0x04)
	float BobSpeed; // 0x430(0x04)
	float PreferredShadowZ; // 0x434(0x04)
	float FlightSpeedMultiplier; // 0x438(0x04)
	float FlightConstantInterpSpeed; // 0x43c(0x04)
	float DepartureVelocityInitialSpeed; // 0x440(0x04)
	float DepartureElevationMult; // 0x444(0x04)
	float StopSoundAtDistanceFromLastTarget; // 0x448(0x04)
	float EngineSoundFadeOutSecs; // 0x44c(0x04)
	struct FString AkComponentSwitch; // 0x450(0x10)
	struct UAkAudioEvent* *2105c36230; // 0x460(0x08)
	struct UAkAudioEvent* *a9f00c10e4; // 0x468(0x08)
	struct UAkComponent* AkComponent; // 0x470(0x08)
	int32 *a9cb5346dd; // 0x478(0x04)
	char pad_47C[0x1c]; // 0x47c(0x1c)
	bool *a486b3f7fb; // 0x498(0x01)
	char pad_499[0x2f]; // 0x499(0x2f)
};

// Class Kangaroo.KangarooGameMode
// Size: 0x968 (Inherited: 0x4a8)  [layout: KHOP]
struct AKangarooGameMode : AStandaloneGameMode {
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct TArray<struct FString> GameLevelNames; // 0x4b0(0x10)
	struct AKangarooShellManager* *b6ce9fcbf1; // 0x4c0(0x08)
	struct AKangarooDamageIndicatorManager* *c190dfec24; // 0x4c8(0x08)
	float *afb3dfa8a8; // 0x4d0(0x04)
	float *3e9b37570a; // 0x4d4(0x04)
	bool *1e637e8310; // 0x4d8(0x01)
	bool *24fb79164b; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	float *fa922f055f; // 0x4dc(0x04)
	float *8b301d77df; // 0x4e0(0x04)
	float *3bfb21a0e4; // 0x4e4(0x04)
	float *010c148441; // 0x4e8(0x04)
	float *ade91b61d0; // 0x4ec(0x04)
	float *edf4d55b16; // 0x4f0(0x04)
	float *947771defc; // 0x4f4(0x04)
	float *b12300b304; // 0x4f8(0x04)
	float *91f30012d6; // 0x4fc(0x04)
	float *e1ef82e25e; // 0x500(0x04)
	float *3d7413c0c4; // 0x504(0x04)
	float *659a9a86b4; // 0x508(0x04)
	float *5038283da1; // 0x50c(0x04)
	float *867ad8cb0f; // 0x510(0x04)
	float *364f963f01; // 0x514(0x04)
	float *7d9374a809; // 0x518(0x04)
	float *8e6fef2b8f; // 0x51c(0x04)
	float *aee5a87c5a; // 0x520(0x04)
	float *bf3bfe38e4; // 0x524(0x04)
	float *adbedb5cdd; // 0x528(0x04)
	float *03531914d6; // 0x52c(0x04)
	float *a66345d3cc; // 0x530(0x04)
	float *c6aa88e842; // 0x534(0x04)
	float *70681b065d; // 0x538(0x04)
	int32 *26db8e4c60; // 0x53c(0x04)
	float *c88ff5e201; // 0x540(0x04)
	float *3004a4ec91; // 0x544(0x04)
	struct UAkAudioEvent* *a2c6a7c97a; // 0x548(0x08)
	float *f060dce676; // 0x550(0x04)
	float *2c267ecc43; // 0x554(0x04)
	float *4f62905511; // 0x558(0x04)
	float *6bbc1053b3; // 0x55c(0x04)
	float *c979a47c14; // 0x560(0x04)
	float *a9d84d414a; // 0x564(0x04)
	float *8eb02b32aa; // 0x568(0x04)
	float *bd8fa3347b; // 0x56c(0x04)
	float *44d57a31e5; // 0x570(0x04)
	float *3a0a5af431; // 0x574(0x04)
	float *153384d40c; // 0x578(0x04)
	float *2f6546beb6; // 0x57c(0x04)
	float *3582f565f9; // 0x580(0x04)
	float *e5ea1e9eee; // 0x584(0x04)
	float *48dff97835; // 0x588(0x04)
	float *8f59c7d03e; // 0x58c(0x04)
	float *0535f946b0; // 0x590(0x04)
	float *1c842b7fd2; // 0x594(0x04)
	float *29348f073d; // 0x598(0x04)
	float *a994e4e81c; // 0x59c(0x04)
	float *d49c533e81; // 0x5a0(0x04)
	float *f34f4ada7c; // 0x5a4(0x04)
	float *6428a65389; // 0x5a8(0x04)
	float *507dc07a5b; // 0x5ac(0x04)
	struct UPaperSprite* *3359be1f5c; // 0x5b0(0x08)
	struct UMaterialInterface* *3810d52ffa; // 0x5b8(0x08)
	struct UAkAudioEvent* *d0623761b0; // 0x5c0(0x08)
	float *fc34033343; // 0x5c8(0x04)
	float *751ab783bb; // 0x5cc(0x04)
	float *a588018ee8; // 0x5d0(0x04)
	float *fd2793ea76; // 0x5d4(0x04)
	struct F*57fe79a95f *ceea51f3bf; // 0x5d8(0x34)
	struct F*57fe79a95f *fd2896db85; // 0x60c(0x34)
	struct F*57fe79a95f *0c0ac638a0; // 0x640(0x34)
	char pad_674[0x4]; // 0x674(0x04)
	struct UCollectibleDataAsset* *f7ffd14aee; // 0x678(0x08)
	struct TArray<struct UCollectibleDataAsset*> *4dc8882d4a; // 0x680(0x10)
	struct TArray<struct UCollectibleDataAsset*> *f9467a5fbd; // 0x690(0x10)
	struct TArray<struct UCollectibleDataAsset*> *d5b1ec9635; // 0x6a0(0x10)
	struct TArray<struct UCollectibleDataAsset*> *aa51257708; // 0x6b0(0x10)
	struct TArray<struct UCollectibleDataAsset*> *4532d402e8; // 0x6c0(0x10)
	struct TArray<struct UCollectibleDataAsset*> *557b338af9; // 0x6d0(0x10)
	struct F*889571c0f1 *d5e872606f[0x04]; // 0x6e0(0x60)
	struct UAkAudioEvent* *c59c9f6666; // 0x740(0x08)
	struct UAkAudioEvent* ArmorDamageSound; // 0x748(0x08)
	struct UAkAudioEvent* ArmorDestructionSound; // 0x750(0x08)
	struct UAkAudioEvent* LuckyPanSound; // 0x758(0x08)
	struct UAkAudioEvent* RoomClearSound; // 0x760(0x08)
	struct UAkAudioEvent* NonBossLevelClearSound; // 0x768(0x08)
	float *06542683d9; // 0x770(0x04)
	float *17f443b813; // 0x774(0x04)
	float *849aaa779d; // 0x778(0x04)
	float *0ba99e6ec3; // 0x77c(0x04)
	struct UClass* *6c48a83b6c; // 0x780(0x08)
	struct UClass* *6354b3d0a5; // 0x788(0x08)
	struct FLinearColor *b5f4d77f8b; // 0x790(0x10)
	struct FLinearColor *01c571767a; // 0x7a0(0x10)
	struct FLinearColor *0d6cab994d; // 0x7b0(0x10)
	struct UPaperFlipbook* *af70c24f45; // 0x7c0(0x08)
	struct UPaperFlipbook* *0503076d3a; // 0x7c8(0x08)
	struct UPaperFlipbook* *e120c1bbcd; // 0x7d0(0x08)
	struct UPaperFlipbook* *81e9f123a2; // 0x7d8(0x08)
	struct FVector *35fceb632e; // 0x7e0(0x0c)
	struct FVector *d61f233baf; // 0x7ec(0x0c)
	struct FVector *0b751a8bf4; // 0x7f8(0x0c)
	struct FVector *c71d7dc0e1; // 0x804(0x0c)
	struct FVector *a284a7cddd; // 0x810(0x0c)
	struct FLinearColor *bcf89a0dff; // 0x81c(0x10)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct UClass* *9ba341341f; // 0x830(0x08)
	struct F*0b394c2c24 *60e05fdd65; // 0x838(0x2c)
	float *60a93379cf; // 0x864(0x04)
	bool GunTrailsActive; // 0x868(0x01)
	char pad_869[0x17]; // 0x869(0x17)
	struct UKangarooGunInfoAsset* *ba3a4f9d1b[0x19]; // 0x880(0xc8)
	struct UKangarooGunInfoAsset* *468118fd95[0x04]; // 0x948(0x20)

	void SpawnCollectibleNextToPlayer(); // Function Kangaroo.KangarooGameMode.SpawnCollectibleNextToPlayer //  // @ game+0xf7657c8
};

// Class Kangaroo.KangarooGameInstance
// Size: 0x310 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct UKangarooGameInstance : UStandaloneGameInstance {
	int32 *00d57b13d5; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UAkAudioEvent* *113bfa70a7; // 0x100(0x08)
	bool *c1b38aeda4; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UClass* *9072d94913; // 0x110(0x08)
	struct UClass* *034f97f53b; // 0x118(0x08)
	struct UDataTable* UpgradeTable; // 0x120(0x08)
	struct TArray<struct FStringAssetReference> KangarooOtherReferencesToUnload; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)
	struct UUserWidget* *3fd23e0223; // 0x148(0x08)
	struct UDataTable* MissionTable; // 0x150(0x08)
	char pad_158[0x38]; // 0x158(0x38)
	struct F*547b5fb367 *aa341b85cd; // 0x190(0xe0)
	char pad_270[0x8]; // 0x270(0x08)
	int32 StageIndex; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct UKangarooPersistentUser* *44d03100a9; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct UNavigationSystem* *565b3c95c8; // 0x290(0x08)
	char pad_298[0x78]; // 0x298(0x78)

	void *b1e808339b(); // Function Kangaroo.KangarooGameInstance.*b1e808339b //  // @ game+0xf760b5c
	void *85c1852877(); // Function Kangaroo.KangarooGameInstance.*85c1852877 //  // @ game+0xf761570
	void *c036695aa6(); // Function Kangaroo.KangarooGameInstance.*c036695aa6 //  // @ game+0x1053c04
	void *7ae5135e92(); // Function Kangaroo.KangarooGameInstance.*7ae5135e92 //  // @ game+0xf7616e4
	void *869daebdc7(); // Function Kangaroo.KangarooGameInstance.*869daebdc7 //  // @ game+0xf760780
	void *bb086f7d60(); // Function Kangaroo.KangarooGameInstance.*bb086f7d60 //  // @ game+0xf7607a4
	void *0a64db3bf2(); // Function Kangaroo.KangarooGameInstance.*0a64db3bf2 //  // @ game+0xf760510
	void *015026cf96(); // Function Kangaroo.KangarooGameInstance.*015026cf96 //  // @ game+0xf7614ec
	void *d0298da246(); // Function Kangaroo.KangarooGameInstance.*d0298da246 //  // @ game+0xf762a00
	void *fb5f0adc84(); // Function Kangaroo.KangarooGameInstance.*fb5f0adc84 //  // @ game+0x1053c04
};

// Class Kangaroo.KangarooGameMode_Menu
// Size: 0x4a8 (Inherited: 0x4a8)  [layout: KHOP]
struct AKangarooGameMode_Menu : AStandaloneGameMode {
};

// Class Kangaroo.KangarooGameState
// Size: 0x488 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct AKangarooGameState : AGameStateBase {
	char pad_440[0x20]; // 0x440(0x20)
	struct TArray<struct ACollectible*> *11a29bb688; // 0x460(0x10)
	struct AKangarooPawn* *5aeba6dfce; // 0x470(0x08)
	struct ARoomTrigger* *a1e28e37f4; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)
};

// Class Kangaroo.KangarooGunProjectileDataAsset
// Size: 0xa8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UKangarooGunProjectileDataAsset : UDataAsset {
	struct UClass* ProjectileClass; // 0x38(0x08)
	struct UPaperSprite* Sprite; // 0x40(0x08)
	struct UPaperSprite* TraceSprite; // 0x48(0x08)
	float SpriteScale; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UMaterialInterface* *82b888b2df; // 0x58(0x08)
	struct FLinearColor SpriteColor; // 0x60(0x10)
	struct FLinearColor TraceSpriteColor; // 0x70(0x10)
	float TraceLengtheningSpeedMult; // 0x80(0x04)
	float TraceTargetLengthMult; // 0x84(0x04)
	struct UClass* DamageType; // 0x88(0x08)
	struct UParticleSystem* HitEnemyPS; // 0x90(0x08)
	struct UParticleSystem* HitWallPS; // 0x98(0x08)
	float NoiseRange; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Kangaroo.KangarooHeadshotIndicator
// Size: 0x428 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct AKangarooHeadshotIndicator : APaperSpriteActor {
	char pad_408[0x20]; // 0x408(0x20)
};

// Class Kangaroo.KangarooMovementComponent
// Size: 0x950 (Inherited: 0x950)  [layout: KHOP]
struct UKangarooMovementComponent : UCharacterMovementComponent {
};

// Class Kangaroo.KangarooWeaponAnimBase
// Size: 0x170 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UKangarooWeaponAnimBase : UObject {
	float *a6a05eb8bb; // 0x30(0x04)
	float CurrentTime; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTimeline Timeline; // 0x40(0xe0)
	struct UCurveFloat* *7c548eea06; // 0x120(0x08)
	struct UCurveFloat* *29bac21cf0; // 0x128(0x08)
	struct UCurveFloat* *601001fd83; // 0x130(0x08)
	bool *0737227575; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector *720330ad10; // 0x13c(0x0c)
	float *2a77af1adb; // 0x148(0x04)
	struct FVector *8ab384f255; // 0x14c(0x0c)
	float *0d6c6d98a1; // 0x158(0x04)
	char pad_15C[0x14]; // 0x15c(0x14)

	void UpdateAdditiveCurve(); // Function Kangaroo.KangarooWeaponAnimBase.UpdateAdditiveCurve //  // @ game+0xf76638c
	void UpdatePositioningCurve(); // Function Kangaroo.KangarooWeaponAnimBase.UpdatePositioningCurve //  // @ game+0xf766498
	void Ended(); // Function Kangaroo.KangarooWeaponAnimBase.Ended //  // @ game+0xf760480
	void UpdateFlipCurve(); // Function Kangaroo.KangarooWeaponAnimBase.UpdateFlipCurve //  // @ game+0xf7663dc
};

// Class Kangaroo.KangarooWeaponAnim
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UKangarooWeaponAnim : UObject {
	float *a6a05eb8bb; // 0x30(0x04)
	char pad_34[0x44]; // 0x34(0x44)

	void Play(); // Function Kangaroo.KangarooWeaponAnim.Play //  // @ game+0xf7626e0
};

// Class Kangaroo.KangarooShell
// Size: 0x468 (Inherited: 0x400)  [layout: KHOP]
struct AKangarooShell : AActor {
	struct UPaperSpriteComponent* Sprite; // 0x400(0x08)
	float MaxLifetimeSeconds; // 0x408(0x04)
	float DisappearingDurationSeconds; // 0x40c(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x410(0x08)
	float InitialLinearVelocity; // 0x418(0x04)
	float InitialAngularVelocity; // 0x41c(0x04)
	float LinearDamping; // 0x420(0x04)
	float AngularDamping; // 0x424(0x04)
	float DirectionModulationDegrees; // 0x428(0x04)
	float LinearVelocityModulation; // 0x42c(0x04)
	float AngularVelocityModulation; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UAkAudioEvent* WallCollisionSound; // 0x438(0x08)
	float InitialCollisionSoundCooldown; // 0x440(0x04)
	int32 MaxCollisionSounds; // 0x444(0x04)
	char pad_448[0x18]; // 0x448(0x18)
	struct UKangarooShellDataAsset* *df592453d0; // 0x460(0x08)

	void OnHit(); // Function Kangaroo.KangarooShell.OnHit //  // @ game+0xf761eac
};

// Class Kangaroo.KangarooWeaponBase
// Size: 0x5c0 (Inherited: 0x408)  [layout: KHOP]
struct AKangarooWeaponBase : APaperFlipbookActor {
	struct AKangarooPawn* *8455b4d7fa; // 0x408(0x08)
	char pad_410[0x108]; // 0x410(0x108)
	struct UKangarooWeaponAnimBase* WeaponAnim; // 0x518(0x08)
	char pad_520[0x70]; // 0x520(0x70)
	struct FTransform *620f2d3aa5; // 0x590(0x30)

	void OnAnimFinished(); // Function Kangaroo.KangarooWeaponBase.OnAnimFinished //  // @ game+0xf761ac4
};

// Class Kangaroo.KangarooHeldGun
// Size: 0x640 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct AKangarooHeldGun : AKangarooWeaponBase {
	struct UPaperSpriteComponent* LaserComponent; // 0x5c0(0x08)
	int32 *34ce81a2ec; // 0x5c8(0x04)
	int32 *8e713d9e4a; // 0x5cc(0x04)
	int32 *09df0bfaef; // 0x5d0(0x04)
	int32 *2eeb633f1f; // 0x5d4(0x04)
	int32 *677c903964; // 0x5d8(0x04)
	int32 *bb718c6ca2; // 0x5dc(0x04)
	struct UKangarooGunInfoAsset* *344bd0f990; // 0x5e0(0x08)
	char pad_5E8[0x58]; // 0x5e8(0x58)
};

// Class Kangaroo.BossGun
// Size: 0x650 (Inherited: 0x640)  [layout: LECH - offset chi la uoc luong]
struct ABossGun : AKangarooHeldGun {
	float *71eb8838e8; // 0x640(0x04)
	char pad_644[0xc]; // 0x644(0x0c)
};

// Class Kangaroo.KangarooPawn
// Size: 0xdb0 (Inherited: 0x930)  [layout: LECH - offset chi la uoc luong]
struct AKangarooPawn : APaperCharacter {
	struct UKangarooMovementComponent* DesertMovement; // 0x930(0x08)
	struct UPaperFlipbookComponent* ShockIndicator; // 0x938(0x08)
	struct UPaperFlipbookComponent* DestroyedShieldIndicator; // 0x940(0x08)
	struct UPaperFlipbookComponent* BigFire; // 0x948(0x08)
	struct UPaperFlipbookComponent* SmallFire1; // 0x950(0x08)
	struct UPaperFlipbookComponent* SmallFire2; // 0x958(0x08)
	struct UPaperFlipbookComponent* SpriteShadow; // 0x960(0x08)
	struct UPaperFlipbookComponent* SpriteShadowOpposite; // 0x968(0x08)
	struct UPaperFlipbookComponent* ParachuteShadow; // 0x970(0x08)
	struct UCapsuleComponent* HitBox; // 0x978(0x08)
	struct UCapsuleComponent* HeadHitBox; // 0x980(0x08)
	struct UCapsuleComponent* SmallHeadHitBox; // 0x988(0x08)
	struct UPaperFlipbookComponent* ParachuteSprite; // 0x990(0x08)
	struct UPaperFlipbookComponent* ParachutingPawnSprite; // 0x998(0x08)
	struct UPaperFlipbookComponent* GuitarPunkFlipbook; // 0x9a0(0x08)
	struct UAkComponent* AkComponent; // 0x9a8(0x08)
	struct TArray<struct AActor*> *f990f1284c; // 0x9b0(0x10)
	char pad_9C0[0x8]; // 0x9c0(0x08)
	struct AController* *925f6ddc22; // 0x9c8(0x08)
	char pad_9D0[0x10]; // 0x9d0(0x10)
	struct U*5059df2463* *baadc64efb; // 0x9e0(0x08)
	struct U*f8bf36e7d7* CurrentBulletWaveCollection; // 0x9e8(0x08)
	int32 BulletWaveIndex; // 0x9f0(0x04)
	int32 BulletWaveShotIndex; // 0x9f4(0x04)
	int32 BulletsFiredThisWaveIndex; // 0x9f8(0x04)
	int32 BulletHellAngleOffset; // 0x9fc(0x04)
	int32 MortarBossPhase; // 0xa00(0x04)
	char pad_A04[0x4]; // 0xa04(0x04)
	struct UKangarooPawnDataAsset* *5604fa9bac; // 0xa08(0x08)
	bool *82de71f952; // 0xa10(0x01)
	char pad_A11[0x7]; // 0xa11(0x07)
	struct UClass* GunClass; // 0xa18(0x08)
	float *29773f99b6; // 0xa20(0x04)
	enum class EKangarooAimingType AimingType; // 0xa24(0x01)
	char pad_A25[0x3]; // 0xa25(0x03)
	struct UMaterialInstanceDynamic* *29c741c310; // 0xa28(0x08)
	struct UMaterialInstanceDynamic* *5e0e10d0df; // 0xa30(0x08)
	struct F*dc55fffc03 Health; // 0xa38(0x20)
	char pad_A58[0x118]; // 0xa58(0x118)
	struct AActor* *3d71f9fd5f; // 0xb70(0x08)
	int32 *107a1b106d; // 0xb78(0x04)
	int32 *5a7c063b5c; // 0xb7c(0x04)
	int32 *ad84821900; // 0xb80(0x04)
	int32 *3944913c32; // 0xb84(0x04)
	int32 *46de64940d; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct ACollectible* *0aa6d61641; // 0xb90(0x08)
	struct TArray<struct ACollectible*> *35bc080683; // 0xb98(0x10)
	char pad_BA8[0x10]; // 0xba8(0x10)
	struct F*547b5fb367 Inventory; // 0xbb8(0xe0)
	int32 ShotsFiredSinceTriggered; // 0xc98(0x04)
	int32 TimesHadLineOfShot; // 0xc9c(0x04)
	bool HasLOSToPlayerOnPathHeight; // 0xca0(0x01)
	char pad_CA1[0x3]; // 0xca1(0x03)
	int32 AutomaticallyTakeAShotIfTimesHadLineOfShot; // 0xca4(0x04)
	bool ShouldTrackLineOfShot; // 0xca8(0x01)
	bool ShouldAttackCount; // 0xca9(0x01)
	char pad_CAA[0x2]; // 0xcaa(0x02)
	int32 AttacksToPerformInSuccession; // 0xcac(0x04)
	bool ForceLockAimOnTarget; // 0xcb0(0x01)
	char pad_CB1[0x3]; // 0xcb1(0x03)
	int32 GrenadesToThrowInSuccession; // 0xcb4(0x04)
	char pad_CB8[0x18]; // 0xcb8(0x18)
	struct AKangarooHeldGun* HeldGun; // 0xcd0(0x08)
	struct AKangarooHeldGrenade* HeldGrenade; // 0xcd8(0x08)
	struct AKangarooHeldMelee* HeldMelee; // 0xce0(0x08)
	struct AKangarooWeaponBase* HeldItem; // 0xce8(0x08)
	struct TArray<struct AKangarooWeaponBase*> Equipment; // 0xcf0(0x10)
	char pad_D00[0x8]; // 0xd00(0x08)
	struct UMaterialParameterCollection* MaterialParamsCollection; // 0xd08(0x08)
	int32 *79815839f6; // 0xd10(0x04)
	float TemporaryMovementSpeed; // 0xd14(0x04)
	bool FireTrailEnabled; // 0xd18(0x01)
	char pad_D19[0x7]; // 0xd19(0x07)
	struct UClass* *6f50758013; // 0xd20(0x08)
	char pad_D28[0x18]; // 0xd28(0x18)
	struct U*e431a18ef4* *d4a63f4061; // 0xd40(0x08)
	char pad_D48[0x40]; // 0xd48(0x40)
	struct FTimerHandle *d93b9019a7; // 0xd88(0x08)
	bool ForceVulnerableToProjectiles; // 0xd90(0x01)
	char pad_D91[0x7]; // 0xd91(0x07)
	struct AKangarooPlane* *c9934fdd26; // 0xd98(0x08)
	char pad_DA0[0x10]; // 0xda0(0x10)

	void *8ddf810aad(); // Function Kangaroo.KangarooPawn.*8ddf810aad //  // @ game+0xf76166c
	void *090a53ff05(); // Function Kangaroo.KangarooPawn.*090a53ff05 //  // @ game+0xf761858
	void WieldThrowable(); // Function Kangaroo.KangarooPawn.WieldThrowable //  // @ game+0xf766f50
	void *0ed14f010e(); // Function Kangaroo.KangarooPawn.*0ed14f010e //  // @ game+0xf7616c4
	void *bd6d2db947(); // Function Kangaroo.KangarooPawn.*bd6d2db947 //  // @ game+0xf762884
	void *b846b5d770(); // Function Kangaroo.KangarooPawn.*b846b5d770 //  // @ game+0xf760bec
	void *c7f5595a55(); // Function Kangaroo.KangarooPawn.*c7f5595a55 //  // @ game+0xf7659fc
	void *a6ba12fce2(); // Function Kangaroo.KangarooPawn.*a6ba12fce2 //  // @ game+0xf760648
	void *d5d5c9ecb5(); // Function Kangaroo.KangarooPawn.*d5d5c9ecb5 //  // @ game+0xf7616a4
	void *90855e00b4(); // Function Kangaroo.KangarooPawn.*90855e00b4 //  // @ game+0xf760924
	void *b1d4ce7cec(); // Function Kangaroo.KangarooPawn.*b1d4ce7cec //  // @ game+0xf763728
	void *b04653b9f0(); // Function Kangaroo.KangarooPawn.*b04653b9f0 //  // @ game+0xf766ef4
	void *4a22753a20(); // Function Kangaroo.KangarooPawn.*4a22753a20 //  // @ game+0xf7634cc
	void *d40884636a(); // Function Kangaroo.KangarooPawn.*d40884636a //  // @ game+0xf76186c
	void Roll(); // Function Kangaroo.KangarooPawn.Roll //  // @ game+0xf7628b0
	void *9e0f13c605(); // Function Kangaroo.KangarooPawn.*9e0f13c605 //  // @ game+0xf761300
	void WieldMelee(); // Function Kangaroo.KangarooPawn.WieldMelee //  // @ game+0xf766edc
	void *e6705c5f0a(); // Function Kangaroo.KangarooPawn.*e6705c5f0a //  // @ game+0xf7627b8
	void *435e58c1c8(); // Function Kangaroo.KangarooPawn.*435e58c1c8 //  // @ game+0xf760824
	void *dfb2b20451(); // Function Kangaroo.KangarooPawn.*dfb2b20451 //  // @ game+0xf7618e8
	void *e8e7f657d7(); // Function Kangaroo.KangarooPawn.*e8e7f657d7 //  // @ game+0xf7628e8
	void *5fbbb13afb(); // Function Kangaroo.KangarooPawn.*5fbbb13afb //  // @ game+0xf7613a8
	void *4ebbecbb3a(); // Function Kangaroo.KangarooPawn.*4ebbecbb3a //  // @ game+0xf762678
	void *0ac8972226(); // Function Kangaroo.KangarooPawn.*0ac8972226 //  // @ game+0xf765918
	void *c528bc8e39(); // Function Kangaroo.KangarooPawn.*c528bc8e39 //  // @ game+0xf766e0c
	void *619cf13f2c(); // Function Kangaroo.KangarooPawn.*619cf13f2c //  // @ game+0xf766f68
	void *46ad121e50(); // Function Kangaroo.KangarooPawn.*46ad121e50 //  // @ game+0xf766418
	void *ebc94d912d(); // Function Kangaroo.KangarooPawn.*ebc94d912d //  // @ game+0xf7614cc
	void *0a08578e6a(); // Function Kangaroo.KangarooPawn.*0a08578e6a //  // @ game+0xf7606c4
	void *b93e7e070a(); // Function Kangaroo.KangarooPawn.*b93e7e070a //  // @ game+0xf760abc
	void *8cff001ac8(); // Function Kangaroo.KangarooPawn.*8cff001ac8 //  // @ game+0xf761590
	void *0eb7d4f085(); // Function Kangaroo.KangarooPawn.*0eb7d4f085 //  // @ game+0xf760b44
	void *6df563b88e(); // Function Kangaroo.KangarooPawn.*6df563b88e //  // @ game+0xf7614ac
	void *34cbc59b9a(); // Function Kangaroo.KangarooPawn.*34cbc59b9a //  // @ game+0xf766edc
	void *11480c2f00(); // Function Kangaroo.KangarooPawn.*11480c2f00 //  // @ game+0xf761488
	void *5a5a7f5dc8(); // Function Kangaroo.KangarooPawn.*5a5a7f5dc8 //  // @ game+0xf762660
	void *7e8f8cee6c(); // Function Kangaroo.KangarooPawn.*7e8f8cee6c //  // @ game+0xf762724
	void *0367c79a51(); // Function Kangaroo.KangarooPawn.*0367c79a51 //  // @ game+0xf761684
	void *8b3d935734(); // Function Kangaroo.KangarooPawn.*8b3d935734 //  // @ game+0xf760608
	void WieldPrimary(); // Function Kangaroo.KangarooPawn.WieldPrimary //  // @ game+0xf766f20
	void *d7dd41880a(); // Function Kangaroo.KangarooPawn.*d7dd41880a //  // @ game+0xf762830
	void StopMovement(); // Function Kangaroo.KangarooPawn.StopMovement //  // @ game+0xf7659bc
	void *f466815dcd(); // Function Kangaroo.KangarooPawn.*f466815dcd //  // @ game+0xf7615ac
	void OnKamikazeHit(); // Function Kangaroo.KangarooPawn.OnKamikazeHit //  // @ game+0xf7622c8
	void *ff344028fe(); // Function Kangaroo.KangarooPawn.*ff344028fe //  // @ game+0xf7636b0
	void *5d62d41d05(); // Function Kangaroo.KangarooPawn.*5d62d41d05 //  // @ game+0xf7603ec
	void *ff1f1d4a2c(); // Function Kangaroo.KangarooPawn.*ff1f1d4a2c //  // @ game+0x1053c04
	void Reload(); // Function Kangaroo.KangarooPawn.Reload //  // @ game+0xf762870
	void *8a88cc13f3(); // Function Kangaroo.KangarooPawn.*8a88cc13f3 //  // @ game+0xf765880
	void *96dccd2553(); // Function Kangaroo.KangarooPawn.*96dccd2553 //  // @ game+0xf762760
	void *e887d7d3ee(); // Function Kangaroo.KangarooPawn.*e887d7d3ee //  // @ game+0xf760684
	void *946c6a0c80(); // Function Kangaroo.KangarooPawn.*946c6a0c80 //  // @ game+0xf7627f4
	void *8054ea23be(); // Function Kangaroo.KangarooPawn.*8054ea23be //  // @ game+0xf760588
	void *cc4f51dde0(); // Function Kangaroo.KangarooPawn.*cc4f51dde0 //  // @ game+0xf7613c8
	void *3286675c46(); // Function Kangaroo.KangarooPawn.*3286675c46 //  // @ game+0xf76589c
	void *c07ab19684(); // Function Kangaroo.KangarooPawn.*c07ab19684 //  // @ game+0xf7604fc
	void *6fba525a94(); // Function Kangaroo.KangarooPawn.*6fba525a94 //  // @ game+0xf766f0c
	void *6562256664(); // Function Kangaroo.KangarooPawn.*6562256664 //  // @ game+0xf765940
	void *8c89fe3105(); // Function Kangaroo.KangarooPawn.*8c89fe3105 //  // @ game+0xf7605c8
	void *405abf693e(); // Function Kangaroo.KangarooPawn.*405abf693e //  // @ game+0xf7601fc
	void WieldSecondary(); // Function Kangaroo.KangarooPawn.WieldSecondary //  // @ game+0xf766f38
	void *d9c7b79bd2(); // Function Kangaroo.KangarooPawn.*d9c7b79bd2 //  // @ game+0xf766ec8
	void *663ba85eda(); // Function Kangaroo.KangarooPawn.*663ba85eda //  // @ game+0xf760668
	void *093bfbc66d(); // Function Kangaroo.KangarooPawn.*093bfbc66d //  // @ game+0xf761990
	void *9968966801(); // Function Kangaroo.KangarooPawn.*9968966801 //  // @ game+0xf760948
	void WieldPistol(); // Function Kangaroo.KangarooPawn.WieldPistol //  // @ game+0xf766f0c
	void *d6256ef922(); // Function Kangaroo.KangarooPawn.*d6256ef922 //  // @ game+0xf760988
	void *c742092876(); // Function Kangaroo.KangarooPawn.*c742092876 //  // @ game+0xf761a48
	void *6f74f5f522(); // Function Kangaroo.KangarooPawn.*6f74f5f522 //  // @ game+0xf762974
	void *ec864deeef(); // Function Kangaroo.KangarooPawn.*ec864deeef //  // @ game+0xf7604e8
	void *b5ee3981f5(); // Function Kangaroo.KangarooPawn.*b5ee3981f5 //  // @ game+0xf760278
};

// Class Kangaroo.*e431a18ef4
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e431a18ef4 : UDataAsset {
	struct TArray<struct F*34cc6ed70c> *870c356a7b; // 0x38(0x10)
	bool *76b2f7cf3d; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Kangaroo.*b91090b478
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct U*b91090b478 : UDataAsset {
	struct TArray<struct U*e431a18ef4*> *79abeff85c; // 0x38(0x10)
};

// Class Kangaroo.KangarooPawnDataAsset
// Size: 0x638 (Inherited: 0x38)  [layout: KHOP]
struct UKangarooPawnDataAsset : UDataAsset {
	float StartingHealth; // 0x38(0x04)
	float MaxHealth; // 0x3c(0x04)
	float MaxArmorHealth; // 0x40(0x04)
	float ArmorDamageAbsorptionPercent; // 0x44(0x04)
	float ArmorDamageConstantDeduction; // 0x48(0x04)
	bool ArmoredSinceErangel; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float HealthCriticalPercent; // 0x50(0x04)
	float *c6536fa442; // 0x54(0x04)
	float *103fa956ac; // 0x58(0x04)
	float *4053b0567c; // 0x5c(0x04)
	float *267f246a6d; // 0x60(0x04)
	float *92326ff1fd; // 0x64(0x04)
	float *69365f001e; // 0x68(0x04)
	float *a39a46e4ff; // 0x6c(0x04)
	float *a6fa1d3e20; // 0x70(0x04)
	float *d6661cc057; // 0x74(0x04)
	bool *ba2f0efc73; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *27394fca03; // 0x7c(0x04)
	bool *3afc4c5d43; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *a2916f4ed2; // 0x84(0x04)
	float *cc6b1a1db4; // 0x88(0x04)
	float *dbb443431e; // 0x8c(0x04)
	float *64a0c90876; // 0x90(0x04)
	float *78b6905601; // 0x94(0x04)
	float *4e295b42d2; // 0x98(0x04)
	float *7a38391cb6; // 0x9c(0x04)
	float *6e38869e27; // 0xa0(0x04)
	float *cb6df4ae2a; // 0xa4(0x04)
	float *bf1a7fdfd1; // 0xa8(0x04)
	float *00b2f2064e; // 0xac(0x04)
	float *b48a983601; // 0xb0(0x04)
	float *7d5c0d2d87; // 0xb4(0x04)
	float *f5f40c0012; // 0xb8(0x04)
	float *faf0a64a91; // 0xbc(0x04)
	float *94688712c0; // 0xc0(0x04)
	float *e7958ee423; // 0xc4(0x04)
	bool *65fb6c1988; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *c1424f11ec; // 0xcc(0x04)
	float *f751626278; // 0xd0(0x04)
	float *57fcfc71c9; // 0xd4(0x04)
	bool *66bbd259c9; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FVector2D HoldingOffset; // 0xdc(0x08)
	struct FVector2D ShadowOffset; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UFlipbookSetAsset* *95e7681dd8; // 0xf0(0x08)
	struct UFlipbookSetAsset* *3875fcf7c3; // 0xf8(0x08)
	struct UFlipbookSetAsset* *42342692af; // 0x100(0x08)
	struct UFlipbookSetAsset* *6cc4850271; // 0x108(0x08)
	struct UFlipbookSetAsset* *ca9a70f43a; // 0x110(0x08)
	struct UFlipbookSetAsset* *d5b3ee5efb; // 0x118(0x08)
	struct UPaperFlipbook* *b19e5c7dcd; // 0x120(0x08)
	struct UPaperFlipbook* *9cf9558bbf; // 0x128(0x08)
	struct UFlipbookSetAsset* *114253bf15; // 0x130(0x08)
	struct UFlipbookSetAsset* *e93405868c; // 0x138(0x08)
	struct UPaperFlipbook* *b61f769ad9; // 0x140(0x08)
	struct UPaperFlipbook* *fed1026281; // 0x148(0x08)
	struct UPaperFlipbook* *493e16947f; // 0x150(0x08)
	struct UPaperFlipbook* *741c795681; // 0x158(0x08)
	struct UPaperFlipbook* *f8dc38bbc0; // 0x160(0x08)
	float *a9fc2d5e01; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct F*e168d393a6 *01d4baab93; // 0x170(0x68)
	bool *3ee3c38160; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float *47ecd9fd85; // 0x1dc(0x04)
	struct UMaterialInterface* SourceMaterial; // 0x1e0(0x08)
	struct UMaterialInterface* *576eee592f; // 0x1e8(0x08)
	struct UMaterialInterface* *5e0e10d0df; // 0x1f0(0x08)
	float *aaf3331742; // 0x1f8(0x04)
	float *8642b03cdb; // 0x1fc(0x04)
	float *f7b0ef15cd; // 0x200(0x04)
	float *0e26364df1; // 0x204(0x04)
	float *c81a17ac59; // 0x208(0x04)
	float *3e2c3dc77f; // 0x20c(0x04)
	float *bfb10a6115; // 0x210(0x04)
	float *c725132001; // 0x214(0x04)
	float *9a410f8859; // 0x218(0x04)
	float *dbcf564f04; // 0x21c(0x04)
	float *3f20ae5280; // 0x220(0x04)
	int32 *ad6130e58e[0x04]; // 0x224(0x10)
	char pad_234[0x4]; // 0x234(0x04)
	struct UKangarooGunInfoAsset* *b6634387d8[0x03]; // 0x238(0x18)
	struct UKangarooThrowableDataAsset* StartingThrowable; // 0x250(0x08)
	struct UKangarooMeleeDataAsset* StartingMelee; // 0x258(0x08)
	enum class EHolsterType StartingHolster; // 0x260(0x01)
	enum class EHolsterType OverrideLoseScreenHolster; // 0x261(0x01)
	bool InfiniteThrowables; // 0x262(0x01)
	bool InfiniteAmmo; // 0x263(0x01)
	float *b4dcb6b2e3; // 0x264(0x04)
	struct UAkAudioEvent* *410be6751a; // 0x268(0x08)
	struct UAkAudioEvent* *b559783161; // 0x270(0x08)
	struct UAkAudioEvent* DamageSound; // 0x278(0x08)
	struct UAkAudioEvent* DeathSound; // 0x280(0x08)
	struct UAkAudioEvent* FootstepSound; // 0x288(0x08)
	struct UAkAudioEvent* SpawnSound; // 0x290(0x08)
	struct UAkAudioEvent* *2fbc2b3fa6; // 0x298(0x08)
	struct UAkAudioEvent* *46d4cd0a2a; // 0x2a0(0x08)
	struct UAkAudioEvent* *bbb7af6759; // 0x2a8(0x08)
	struct UAkAudioEvent* *74bc971206; // 0x2b0(0x08)
	struct UAkAudioEvent* *3b7f047550; // 0x2b8(0x08)
	struct F*e168d393a6 *204dbecef6; // 0x2c0(0x68)
	struct UPaperFlipbook* FootstepSmokeAnimation; // 0x328(0x08)
	struct FVector2D FootstepSmokeOffset; // 0x330(0x08)
	float FootstepSmokeAnimationScale; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct TArray<int32> *512b12afec; // 0x340(0x10)
	struct TArray<struct UCollectibleDataAsset*> PossibleLoot; // 0x350(0x10)
	struct TArray<struct FVector2D> HeldItemIdleFrameOffsets; // 0x360(0x10)
	struct TArray<struct FVector2D> HeldItemWalkFrameOffsets; // 0x370(0x10)
	bool ShowDebugColors; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UPaperFlipbook* DamageFlipbook; // 0x388(0x08)
	float DamageFlipbookScale; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UClass* PawnClass; // 0x398(0x08)
	struct UBehaviorTree* StartingBehavior; // 0x3a0(0x08)
	struct TArray<enum class EEggsplosivesAttackType> AIEnabledAttacks; // 0x3a8(0x10)
	bool RollWhenApproachingPlayer; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float DodgeRollProjectilesWithinDistance; // 0x3bc(0x04)
	float RollWhenPlayerCloserThan; // 0x3c0(0x04)
	int32 ShotsInSingleSweep; // 0x3c4(0x04)
	int32 ShotsInSingleSweepCritical; // 0x3c8(0x04)
	float ClosestApproachDistance; // 0x3cc(0x04)
	float MinKamikazeRange; // 0x3d0(0x04)
	float MaxAttackDistance; // 0x3d4(0x04)
	int32 GrenadesToThrowNormal; // 0x3d8(0x04)
	int32 GrenadesToThrowCritical; // 0x3dc(0x04)
	int32 KnivesToThrowNormal; // 0x3e0(0x04)
	int32 KnivesToThrowCritical; // 0x3e4(0x04)
	float AttackCooldown; // 0x3e8(0x04)
	float KamikazeCooldown; // 0x3ec(0x04)
	float KamikazeMaxAccelerationOverride; // 0x3f0(0x04)
	bool KamikazeStopsMovement; // 0x3f4(0x01)
	bool RotateUponDeath; // 0x3f5(0x01)
	bool AbortAIUponDeath; // 0x3f6(0x01)
	bool StopBehaviorTreeUponDeath; // 0x3f7(0x01)
	bool ExplodeUponDeath; // 0x3f8(0x01)
	bool LoopDeathFlipbook; // 0x3f9(0x01)
	bool DestroyActorUponDeath; // 0x3fa(0x01)
	bool StopMovementContinuouslyUponDeath; // 0x3fb(0x01)
	bool UnEquipWeaponUponDeath; // 0x3fc(0x01)
	bool ImmuneToDamageFields; // 0x3fd(0x01)
	char pad_3FE[0x2]; // 0x3fe(0x02)
	int32 NumLungesNormal; // 0x400(0x04)
	int32 NumLungesCritical; // 0x404(0x04)
	int32 RevolverShotsNormal; // 0x408(0x04)
	int32 RevolverShotsCritical; // 0x40c(0x04)
	float FencerPhaseHealthPercent; // 0x410(0x04)
	float FenceBlockTime; // 0x414(0x04)
	float ProbabilityOfSkippingCooldown; // 0x418(0x04)
	float ProbabilityOfSkippingCooldownCritical; // 0x41c(0x04)
	struct UAkAudioEvent* *ec9f7bdba8; // 0x420(0x08)
	float RevolverPhaseHealthPercent; // 0x428(0x04)
	float SmokeGrenadesCooldown; // 0x42c(0x04)
	int32 SecondaryShotsInSingleSweep; // 0x430(0x04)
	int32 SecondaryShotsInSingleSweepCritical; // 0x434(0x04)
	bool LockMovementTillRoomInPhaseTwo; // 0x438(0x01)
	bool ShouldMoveWhenShooting; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	float SniperFreezeBeforeShotDuration; // 0x43c(0x04)
	float SniperFreezeRedLaserDuration; // 0x440(0x04)
	bool AlwaysSetPredictiveAimTargetToPlayer; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float PrepareLungeDuration; // 0x448(0x04)
	float PrepareSuccessionLungeDuration; // 0x44c(0x04)
	float PostLungesWaitTime; // 0x450(0x04)
	float PostBrandishWaitTime; // 0x454(0x04)
	float PostRevolverWaitTime; // 0x458(0x04)
	bool LockMovementUponSpawn; // 0x45c(0x01)
	bool StopMovementOnAnyImpact; // 0x45d(0x01)
	char pad_45E[0x2]; // 0x45e(0x02)
	float StopMovementOnAnyImpactCooldown; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UAkAudioEvent* *a9f00c10e4; // 0x468(0x08)
	float *d4dee02276; // 0x470(0x04)
	float *3e9c3c4aae; // 0x474(0x04)
	float *cd1e494cc2; // 0x478(0x04)
	float *0dfb929457; // 0x47c(0x04)
	struct UAkAudioEvent* *b128b2cd1a; // 0x480(0x08)
	struct UAkAudioEvent* *6d6b1c30f2; // 0x488(0x08)
	struct UAkAudioEvent* *023f9e2046; // 0x490(0x08)
	float *226d65f41d; // 0x498(0x04)
	float *de184f8a0a; // 0x49c(0x04)
	float *5fa4dfc2d6; // 0x4a0(0x04)
	float *83ea6cb2f3; // 0x4a4(0x04)
	float *2c3e061b19; // 0x4a8(0x04)
	float RammingDelay; // 0x4ac(0x04)
	int32 *dd24975599; // 0x4b0(0x04)
	int32 *14c7c0bbe2; // 0x4b4(0x04)
	float *eb0f14292e; // 0x4b8(0x04)
	float *879e6bfe10; // 0x4bc(0x04)
	float *45ef23e755; // 0x4c0(0x04)
	float *487691865f; // 0x4c4(0x04)
	float *da859825ad; // 0x4c8(0x04)
	bool *03bc8cf0dc; // 0x4cc(0x01)
	bool *92117134ef; // 0x4cd(0x01)
	char pad_4CE[0x2]; // 0x4ce(0x02)
	struct TArray<struct U*b91090b478*> *2335a1bdf2; // 0x4d0(0x10)
	struct UAkAudioEvent* *b586695d4e; // 0x4e0(0x08)
	struct UKangarooVerticalRocketDataAsset* *04f3bea73b; // 0x4e8(0x08)
	struct UKangarooVerticalRocketDataAsset* *43b6aaf045; // 0x4f0(0x08)
	float *810eea739e; // 0x4f8(0x04)
	float *e55f4d672d; // 0x4fc(0x04)
	float *e03ce4a901; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UKangarooPawnDataAsset* *c6ba96b22d; // 0x508(0x08)
	struct UKangarooPawnDataAsset* *4dbb1052df; // 0x510(0x08)
	float *c7ca427d55; // 0x518(0x04)
	int32 *dee358d662; // 0x51c(0x04)
	struct UDamageFieldData* *51f4cea9a1; // 0x520(0x08)
	float *925695f881; // 0x528(0x04)
	float *738cf0d091; // 0x52c(0x04)
	float *15e9bed1a5; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UAkAudioEvent* *69fa5c8d59; // 0x538(0x08)
	struct UAkAudioEvent* *8721d47a13; // 0x540(0x08)
	struct UAkAudioEvent* *8afdf3b570; // 0x548(0x08)
	struct FVector2D *9b8cb74605; // 0x550(0x08)
	float *304cc01312; // 0x558(0x04)
	bool *9328581f8e; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	struct F*ad7d201dee *ad7d201dee; // 0x560(0x68)
	struct UAkAudioEvent* *d1ec165fe0; // 0x5c8(0x08)
	float *afa8828855; // 0x5d0(0x04)
	struct FVector2D *fc4112c1a7; // 0x5d4(0x08)
	struct FVector2D KillerWeaponOnLoseScreenOffset; // 0x5dc(0x08)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct UKangarooGunInfoAsset* *884aa1a320[0x03]; // 0x5e8(0x18)
	float *f5487788d5; // 0x600(0x04)
	float *a8a6323654; // 0x604(0x04)
	bool TracePlayerVisibilityOnPathHeight; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	struct FName TracePlayerVisibilityOnPathHeightProfile; // 0x610(0x08)
	struct TArray<struct FName> MissionProgressOnDeath; // 0x618(0x10)
	struct TArray<struct FName> MissionProgressOnKill; // 0x628(0x10)

	void *9eaaee80cc(); // Function Kangaroo.KangarooPawnDataAsset.*9eaaee80cc //  // @ game+0xf7606ec
	void *96d1f282f9(); // Function Kangaroo.KangarooPawnDataAsset.*96d1f282f9 //  // @ game+0xf760a34
	void *43f88ca4a4(); // Function Kangaroo.KangarooPawnDataAsset.*43f88ca4a4 //  // @ game+0xf7609a0
};

// Class Kangaroo.KangarooNavigatableButtonWidget
// Size: 0x460 (Inherited: 0x420)  [layout: LECH - offset chi la uoc luong]
struct UKangarooNavigatableButtonWidget : UUmgBaseWidget {
	char pad_420[0x8]; // 0x420(0x08)
	struct UAkAudioEvent* HoverSound; // 0x428(0x08)
	struct UAkAudioEvent* ClickSound; // 0x430(0x08)
	struct UButton* TargetButton; // 0x438(0x08)
	struct U*d4d01c3d35* NaviWidgetComp; // 0x440(0x08)
	struct FTslStickInputHelper NavigationInputHelper; // 0x448(0x14)
	char pad_45C[0x4]; // 0x45c(0x04)

	void UpdateDesign_Highlighted(); // Function Kangaroo.KangarooNavigatableButtonWidget.UpdateDesign_Highlighted //  // @ game+0x43bab4
	void PlayClickSound(); // Function Kangaroo.KangarooNavigatableButtonWidget.PlayClickSound //  // @ game+0xdbe9c38
	void UpdateDesign_Pressed(); // Function Kangaroo.KangarooNavigatableButtonWidget.UpdateDesign_Pressed //  // @ game+0x43bab4
	void OnButtonHovered(); // Function Kangaroo.KangarooNavigatableButtonWidget.OnButtonHovered //  // @ game+0xf761b10
	void OnButtonUnhovered(); // Function Kangaroo.KangarooNavigatableButtonWidget.OnButtonUnhovered //  // @ game+0xf761b24
	void OnButtonClicked(); // Function Kangaroo.KangarooNavigatableButtonWidget.OnButtonClicked //  // @ game+0xf761afc
	void GetTargetButton(); // Function Kangaroo.KangarooNavigatableButtonWidget.GetTargetButton //  // @ game+0xf760c20
	void PlayHoverSound(); // Function Kangaroo.KangarooNavigatableButtonWidget.PlayHoverSound //  // @ game+0xf76279c
	void UpdateDesign_Normal(); // Function Kangaroo.KangarooNavigatableButtonWidget.UpdateDesign_Normal //  // @ game+0x43bab4
	void OnClicked_Internal(); // Function Kangaroo.KangarooNavigatableButtonWidget.OnClicked_Internal //  // @ game+0x43bab4
};

// Class Kangaroo.KangarooUpgradeButtonWidget
// Size: 0x4e0 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UKangarooUpgradeButtonWidget : UKangarooNavigatableButtonWidget {
	char pad_460[0x9]; // 0x460(0x09)
	bool bIsAssigned; // 0x469(0x01)
	char pad_46A[0xe]; // 0x46a(0x0e)
	struct UWidgetSwitcher* UpgradeSwitcher; // 0x478(0x08)
	struct UImage* UpgradeImage; // 0x480(0x08)
	struct UImage* StampImage; // 0x488(0x08)
	struct UImage* AcquiredFrame; // 0x490(0x08)
	struct UTextBlock* BonusText; // 0x498(0x08)
	struct USizeBox* BonusTextSizeBox; // 0x4a0(0x08)
	char pad_4A8[0x38]; // 0x4a8(0x38)

	void OnPlaySelectionAnimation(); // Function Kangaroo.KangarooUpgradeButtonWidget.OnPlaySelectionAnimation //  // @ game+0x43bab4
	void HasUpgradeData(); // Function Kangaroo.KangarooUpgradeButtonWidget.HasUpgradeData //  // @ game+0xf76120c
	void OnPlayBingoAnimation(); // Function Kangaroo.KangarooUpgradeButtonWidget.OnPlayBingoAnimation //  // @ game+0x43bab4
	void OnPlayAssignedAnimation(); // Function Kangaroo.KangarooUpgradeButtonWidget.OnPlayAssignedAnimation //  // @ game+0x43bab4
};

// Class Kangaroo.KangarooUpgradeWidget
// Size: 0x588 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UKangarooUpgradeWidget : UStandaloneBaseUserWidget {
	char pad_440[0x8]; // 0x440(0x08)
	struct UAkAudioEvent* BingoBlinkSound; // 0x448(0x08)
	struct UAkAudioEvent* BingoBlinkFinishSound; // 0x450(0x08)
	int32 HardSelectionNumber; // 0x458(0x04)
	int32 NormalSelectionNumber; // 0x45c(0x04)
	int32 EasySelectionNumber; // 0x460(0x04)
	int32 BonusBingoNumber; // 0x464(0x04)
	char pad_468[0x4]; // 0x468(0x04)
	int32 SelectionIterationSteps; // 0x46c(0x04)
	float AutoCloseTime; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	TScriptInterface<struct U*ea8557fa8d> LastFocusedNormalWidget; // 0x478(0x10)
	TScriptInterface<struct U*ea8557fa8d> LastFocusedBingoWidget; // 0x488(0x10)
	struct UClass* UpgradeButtonWidget; // 0x498(0x08)
	struct TArray<struct UWidgetSwitcher*> HideOnUpgrade; // 0x4a0(0x10)
	struct UGridPanel* UpgradeButtonPannel; // 0x4b0(0x08)
	struct UPanelWidget* DetailsPanel; // 0x4b8(0x08)
	struct UHorizontalBox* BingoUpgradePannel; // 0x4c0(0x08)
	struct UTextBlock* TitleText; // 0x4c8(0x08)
	struct UTextBlock* DescText; // 0x4d0(0x08)
	struct TArray<struct UKangarooUpgradeButtonWidget*> UpgradeButtons; // 0x4d8(0x10)
	struct UKangarooGameInstance* GI; // 0x4e8(0x08)
	char pad_4F0[0x40]; // 0x4f0(0x40)
	struct UKangarooUpgradeButtonWidget* VerticalBingo; // 0x530(0x08)
	struct UKangarooUpgradeButtonWidget* HorizontalBingo; // 0x538(0x08)
	char pad_540[0x48]; // 0x540(0x48)

	void HandleGamepadDownOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadDownOfNormalButton //  // @ game+0xf760d7c
	void HandleGamepadEnterOfBingoButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadEnterOfBingoButton //  // @ game+0xf760e14
	void HandleGamepadLeftOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadLeftOfNormalButton //  // @ game+0xf760fc4
	void HandleFocusReceivedOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleFocusReceivedOfNormalButton //  // @ game+0xf760ce4
	void HandleGamepadEnterOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadEnterOfNormalButton //  // @ game+0xf760eac
	void HandleGamepadLeftOfBingoButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadLeftOfBingoButton //  // @ game+0xf760f44
	void HandleGamepadRightOfBingoButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadRightOfBingoButton //  // @ game+0xf76105c
	void HandleFocusReceivedOfBingoButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleFocusReceivedOfBingoButton //  // @ game+0xf760c4c
	void HandleGamepadUpOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadUpOfNormalButton //  // @ game+0xf761174
	void HandleGamepadRightOfNormalButton(); // Function Kangaroo.KangarooUpgradeWidget.HandleGamepadRightOfNormalButton //  // @ game+0xf7610dc
};

// Class Kangaroo.KangarooSystemMenuWidget
// Size: 0x488 (Inherited: 0x440)  [layout: KHOP]
struct UKangarooSystemMenuWidget : UStandaloneBaseUserWidget {
	char pad_440[0x8]; // 0x440(0x08)
	struct UClass* UpgradeWidget; // 0x448(0x08)
	struct UClass* UpgradeButtonWidget; // 0x450(0x08)
	struct UVerticalBox* SystemMenuButtonPannel; // 0x458(0x08)
	struct UGridPanel* UpgradePreviewPannel; // 0x460(0x08)
	struct UTextBlock* TitleText; // 0x468(0x08)
	struct UTextBlock* DescText; // 0x470(0x08)
	TScriptInterface<struct U*ea8557fa8d> LastFocusedWidget; // 0x478(0x10)

	void HandleGamepadDownOfChild(); // Function Kangaroo.KangarooSystemMenuWidget.HandleGamepadDownOfChild //  // @ game+0xdbd0598
	void HandleGamepadEnterOfChild(); // Function Kangaroo.KangarooSystemMenuWidget.HandleGamepadEnterOfChild //  // @ game+0xe195294
	void HandleFocusReceivedOfUpgradeButton(); // Function Kangaroo.KangarooSystemMenuWidget.HandleFocusReceivedOfUpgradeButton //  // @ game+0xdbd064c
	void HandleFocusReceivedOfChild(); // Function Kangaroo.KangarooSystemMenuWidget.HandleFocusReceivedOfChild //  // @ game+0xe195334
	void HandleGamepadUpOfChild(); // Function Kangaroo.KangarooSystemMenuWidget.HandleGamepadUpOfChild //  // @ game+0xdbd06ec
	void OnWidgetBPressed(); // Function Kangaroo.KangarooSystemMenuWidget.OnWidgetBPressed //  // @ game+0xf76263c
};

// Class Kangaroo.KangarooHUD
// Size: 0x790 (Inherited: 0x4f8)  [layout: LECH - offset chi la uoc luong]
struct AKangarooHUD : AStandaloneHUD {
	float HealthPct; // 0x4f8(0x04)
	float StaminaPct; // 0x4fc(0x04)
	float ArmorPct; // 0x500(0x04)
	float ArmorValue; // 0x504(0x04)
	float BossHealthPct; // 0x508(0x04)
	float BossArmorPct; // 0x50c(0x04)
	enum class EHolsterType CurrentWeapon; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	int32 CurrentAmmo; // 0x514(0x04)
	int32 AmmoInReserve; // 0x518(0x04)
	int32 NumThrowables; // 0x51c(0x04)
	int32 MaxThrowables; // 0x520(0x04)
	int32 CurrentDeaths; // 0x524(0x04)
	int32 MaxDeaths; // 0x528(0x04)
	int32 NumEnemiesAlive; // 0x52c(0x04)
	bool ShowInfiniteEnemies; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FString SpeedrunCounter; // 0x538(0x10)
	struct FText DifficultyName; // 0x548(0x18)
	struct FText StageName; // 0x560(0x18)
	struct FText BossName; // 0x578(0x18)
	bool ShowHelp; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct UPaperSprite* Slot1Icon; // 0x598(0x08)
	struct UPaperSprite* Slot2Icon; // 0x5a0(0x08)
	struct UPaperSprite* Slot3Icon; // 0x5a8(0x08)
	struct UPaperSprite* Slot4Icon; // 0x5b0(0x08)
	struct UPaperSprite* Slot5Icon; // 0x5b8(0x08)
	struct FLinearColor Slot1Color; // 0x5c0(0x10)
	struct FLinearColor Slot2Color; // 0x5d0(0x10)
	struct FLinearColor Slot3Color; // 0x5e0(0x10)
	struct FLinearColor Slot4Color; // 0x5f0(0x10)
	struct FLinearColor Slot5Color; // 0x600(0x10)
	struct UPaperSprite* Number1Icon; // 0x610(0x08)
	struct UPaperSprite* Number2Icon; // 0x618(0x08)
	struct UPaperSprite* Number3Icon; // 0x620(0x08)
	struct UPaperSprite* Number4Icon; // 0x628(0x08)
	struct UPaperSprite* Number5Icon; // 0x630(0x08)
	struct UPaperSprite* TooltipItemSprite; // 0x638(0x08)
	bool TooltipVisible; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	struct FText TooltipItemName; // 0x648(0x18)
	int32 TooltipMinAmmo; // 0x660(0x04)
	int32 TooltipMaxAmmo; // 0x664(0x04)
	int32 _12GaugeAmmo; // 0x668(0x04)
	int32 SMGAmmo; // 0x66c(0x04)
	int32 _556Ammo; // 0x670(0x04)
	int32 _762Ammo; // 0x674(0x04)
	int32 _12GaugeAmmoMax; // 0x678(0x04)
	int32 SMGAmmoMax; // 0x67c(0x04)
	int32 _556AmmoMax; // 0x680(0x04)
	int32 _762AmmoMax; // 0x684(0x04)
	int32 HoriSlot1X; // 0x688(0x04)
	int32 HoriSlot2X; // 0x68c(0x04)
	int32 HoriSlot3X; // 0x690(0x04)
	int32 HoriSlot4X; // 0x694(0x04)
	int32 HoriSlot5X; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	struct UPaperFlipbook* *d98387e7cc; // 0x6a0(0x08)
	struct UAkAudioEvent* *f9331155cb; // 0x6a8(0x08)
	struct UPaperSprite* CurrentGrenadeChargeFrame; // 0x6b0(0x08)
	int32 HorizontalWeaponPanelPadding; // 0x6b8(0x04)
	float HorizontalWeaponPanelAdditionalScale; // 0x6bc(0x04)
	float HorizontalWeaponPanelEasingSpeed; // 0x6c0(0x04)
	char pad_6C4[0x4]; // 0x6c4(0x04)
	struct UPaperSprite* AmmoIcon; // 0x6c8(0x08)
	struct FLinearColor ActiveSlotColor; // 0x6d0(0x10)
	struct FLinearColor InactiveSlotColor; // 0x6e0(0x10)
	struct FLinearColor ActiveOutOfAmmoSlotColor; // 0x6f0(0x10)
	struct FLinearColor InactiveOutOfAmmoSlotColor; // 0x700(0x10)
	struct TArray<struct UPaperSprite*> NumberIcons; // 0x710(0x10)
	bool ShowAmmunition; // 0x720(0x01)
	bool ShowInfiniteAmmo; // 0x721(0x01)
	char pad_722[0x6]; // 0x722(0x06)
	struct UCollectibleDataAsset* *217c05f94d; // 0x728(0x08)
	char pad_730[0x8]; // 0x730(0x08)
	struct UClass* *3ab24f9cd5; // 0x738(0x08)
	struct UClass* *d641be6400; // 0x740(0x08)
	struct UClass* *80f6b75c75; // 0x748(0x08)
	struct UClass* *5a9102a33d; // 0x750(0x08)
	struct UKangarooSystemMenuWidget* GameMenuWidget; // 0x758(0x08)
	struct UKangarooLoseMenuWidget* LoseMenuWidget; // 0x760(0x08)
	struct UKangarooWinMenuWidget* WinMenuWidget; // 0x768(0x08)
	bool bWeaponSelectionActive; // 0x770(0x01)
	char pad_771[0x1f]; // 0x771(0x1f)

	void OnNewLargeNotification(); // Function Kangaroo.KangarooHUD.OnNewLargeNotification //  // @ game+0x43bab4
	void OnNewNotification(); // Function Kangaroo.KangarooHUD.OnNewNotification //  // @ game+0x43bab4
	void *4b2a8a9d5a(); // Function Kangaroo.KangarooHUD.*4b2a8a9d5a //  // @ game+0xf3fba38
	void OnNewMediumNotification(); // Function Kangaroo.KangarooHUD.OnNewMediumNotification //  // @ game+0x43bab4
	void *b5bd37b4b4(); // Function Kangaroo.KangarooHUD.*b5bd37b4b4 //  // @ game+0xf7635f4
};

// Class Kangaroo.KangarooLevelScriptActor
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct AKangarooLevelScriptActor : ALevelScriptActor {
};

// Class Kangaroo.KangarooLocalPlayer
// Size: 0x298 (Inherited: 0x290)  [layout: KHOP]
struct UKangarooLocalPlayer : ULocalPlayer {
	struct UKangarooPersistentUser* *18b0135a62; // 0x290(0x08)
};

// Class Kangaroo.KangarooLobbyMenuButtonWidget
// Size: 0x488 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UKangarooLobbyMenuButtonWidget : UKangarooNavigatableButtonWidget {
	struct FText ButtonNameText; // 0x460(0x18)
	enum class EKangarooLobbyMenuItem ButtonEnumType; // 0x478(0x01)
	char pad_479[0xf]; // 0x479(0x0f)
};

// Class Kangaroo.KangarooSystemMenuButtonWidget
// Size: 0x480 (Inherited: 0x460)  [layout: LECH - offset chi la uoc luong]
struct UKangarooSystemMenuButtonWidget : UKangarooNavigatableButtonWidget {
	struct FText ButtonNameText; // 0x460(0x18)
	enum class EKangarooSystemMenuItem ButtonEnumType; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
};

// Class Kangaroo.KangarooPlayer
// Size: 0xdf0 (Inherited: 0xdb0)  [layout: LECH - offset chi la uoc luong]
struct AKangarooPlayer : AKangarooPawn {
	struct UCameraComponent* Camera; // 0xda8(0x08)
	struct UPaperSpriteComponent* ProgressBarBackground; // 0xdb0(0x08)
	struct UPaperSpriteComponent* ProgressBar; // 0xdb8(0x08)
	struct UPaperSpriteComponent* TinyBulletIcon; // 0xdc0(0x08)
	float *792ac8eb4c; // 0xdc8(0x04)
	float *c5faa19187; // 0xdcc(0x04)
	float *16f4339045; // 0xdd0(0x04)
	char pad_DD4[0x4]; // 0xdd4(0x04)
	struct U*295aec75d3* TslGamepadInputComponent; // 0xdd8(0x08)
	char pad_DE0[0x10]; // 0xde0(0x10)

	void *17506fcd1f(); // Function Kangaroo.KangarooPlayer.*17506fcd1f //  // @ game+0xf760318
	void *6998d40374(); // Function Kangaroo.KangarooPlayer.*6998d40374 //  // @ game+0xf76039c
	void *4705a83d47(); // Function Kangaroo.KangarooPlayer.*4705a83d47 //  // @ game+0xf7603d8
	void *84ca8cc2d6(); // Function Kangaroo.KangarooPlayer.*84ca8cc2d6 //  // @ game+0xf7603c4
	void *492b0cfe1e(); // Function Kangaroo.KangarooPlayer.*492b0cfe1e //  // @ game+0xf76029c
	void *ba9b03c916(); // Function Kangaroo.KangarooPlayer.*ba9b03c916 //  // @ game+0xf7603b0
};

// Class Kangaroo.KangarooPC_Base
// Size: 0x7d0 (Inherited: 0x7d0)  [layout: KHOP]
struct AKangarooPC_Base : APlayerController {
};

// Class Kangaroo.KangarooPC_Menu
// Size: 0x7d0 (Inherited: 0x7d0)  [layout: KHOP]
struct AKangarooPC_Menu : APlayerController {

	void KangarooToggleMusic(); // Function Kangaroo.KangarooPC_Menu.KangarooToggleMusic //  // @ game+0xf76197c
};

// Class Kangaroo.KangarooPersistentUser
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UKangarooPersistentUser : USaveGame {
	int32 StartingWeapon; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FLevelSaveData LevelData; // 0x38(0x10)
	float BestTime; // 0x48(0x04)
	float LastTime; // 0x4c(0x04)
	int32 LevelNumber; // 0x50(0x04)
	int32 StageNumber; // 0x54(0x04)
	struct FString SlotName; // 0x58(0x10)
	int32 UserIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Kangaroo.KangarooPlayerController
// Size: 0x8d0 (Inherited: 0x810)  [layout: LECH - offset chi la uoc luong]
struct AKangarooPlayerController : ATslPlayerControllerBase {
	char pad_810[0x8]; // 0x810(0x08)
	struct AKangarooPlayer* *065c47dc0e; // 0x818(0x08)
	struct UClass* *3dae80a593; // 0x820(0x08)
	struct AKangarooCrosshair* Crosshair; // 0x828(0x08)
	float *792ac8eb4c; // 0x830(0x04)
	float *c5faa19187; // 0x834(0x04)
	bool *bdc735a7ff; // 0x838(0x01)
	char pad_839[0x7]; // 0x839(0x07)
	struct UMaterialInterface* *3e12c08882; // 0x840(0x08)
	struct UPaperSprite* *5c7ae545da; // 0x848(0x08)
	struct FLinearColor *b9b9608873; // 0x850(0x10)
	float *16c5eb652a; // 0x860(0x04)
	float *2091af65e1; // 0x864(0x04)
	struct FVector2D *180f14e2da; // 0x868(0x08)
	struct FVector2D CrosshairDisplacement; // 0x870(0x08)
	float *6a8a08854e; // 0x878(0x04)
	char pad_87C[0x2a]; // 0x87c(0x2a)
	bool *c1bec36dfd; // 0x8a6(0x01)
	char pad_8A7[0x1]; // 0x8a7(0x01)
	float *bdd6a2747d; // 0x8a8(0x04)
	float *39baebe495; // 0x8ac(0x04)
	float *1cc7cb33fd; // 0x8b0(0x04)
	float *8bbfa3c121; // 0x8b4(0x04)
	float *73e2782c81; // 0x8b8(0x04)
	float *4c6fd700b8; // 0x8bc(0x04)
	float *8b08304d22; // 0x8c0(0x04)
	char pad_8C4[0xc]; // 0x8c4(0x0c)

	void GetUpgradeChance(); // Function Kangaroo.KangarooPlayerController.GetUpgradeChance //  // @ game+0xf760c38
	void *108af17e4a(); // Function Kangaroo.KangarooPlayerController.*108af17e4a //  // @ game+0xf76179c
	void ShowWinMenu(); // Function Kangaroo.KangarooPlayerController.ShowWinMenu //  // @ game+0xf7657b4
	void ShowLoseMenu(); // Function Kangaroo.KangarooPlayerController.ShowLoseMenu //  // @ game+0xf7657a0
};

// Class Kangaroo.KangarooPlayerCameraManager
// Size: 0x22f0 (Inherited: 0x1d40)  [layout: LECH - offset chi la uoc luong]
struct AKangarooPlayerCameraManager : APlayerCameraManager {
	struct AKangarooPlayerController* *dabcab4851; // 0x1d40(0x08)
	float PostProcessBlendWeight; // 0x1d48(0x04)
	char pad_1D4C[0x4]; // 0x1d4c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x1d50(0x580)
	float *8b9d426352; // 0x22d0(0x04)
	float *ba7a92acc5; // 0x22d4(0x04)
	float *f6c56eb433; // 0x22d8(0x04)
	char pad_22DC[0x14]; // 0x22dc(0x14)
};

// Class Kangaroo.KangarooProjectileBase
// Size: 0x508 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AKangarooProjectileBase : AActor {
	struct UPaperSpriteComponent* Sprite; // 0x400(0x08)
	struct UPaperFlipbookComponent* flipbook; // 0x408(0x08)
	struct UProjectileMovementComponent* Projectile; // 0x410(0x08)
	bool UseCCD; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float EasyModeNonDamagingProbability; // 0x41c(0x04)
	float NormalModeNonDamagingProbability; // 0x420(0x04)
	float HardModeNonDamagingProbability; // 0x424(0x04)
	struct UParticleSystem* OverrideHitParticle; // 0x428(0x08)
	struct UClass* TrailActorClass; // 0x430(0x08)
	struct AActor* *90c6bf2f83; // 0x438(0x08)
	bool ExpireWithFlipbook; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UClass* DamageType; // 0x448(0x08)
	struct UParticleSystem* HitParticle; // 0x450(0x08)
	float HitNoiseRange; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UClass* ShellClass; // 0x460(0x08)
	float TraceLengtheningSpeedMult; // 0x468(0x04)
	float TraceTargetLengthMult; // 0x46c(0x04)
	struct UAkAudioEvent* FlightSound; // 0x470(0x08)
	struct UAkAudioEvent* ImpactSound; // 0x478(0x08)
	struct UAkAudioEvent* PawnImpactSound; // 0x480(0x08)
	struct UKangarooGunInfoAsset* *0ff0d65365; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)
	struct AController* *aea75273b6; // 0x498(0x08)
	struct AKangarooPawn* *ddcf5d1ca2; // 0x4a0(0x08)
	struct UKangarooPawnDataAsset* *554146371f; // 0x4a8(0x08)
	bool *6f6134da92; // 0x4b0(0x01)
	char pad_4B1[0x2f]; // 0x4b1(0x2f)
	struct TArray<struct AActor*> *9c80877901; // 0x4e0(0x10)
	bool bDestroyOnCollision; // 0x4f0(0x01)
	bool bDestroyOnCollisionWithPawn; // 0x4f1(0x01)
	bool IsVikendiBullet; // 0x4f2(0x01)
	char pad_4F3[0x15]; // 0x4f3(0x15)

	void *0584d7b1c1(); // Function Kangaroo.KangarooProjectileBase.*0584d7b1c1 //  // @ game+0xf762ae0
	void *b0c589847f(); // Function Kangaroo.KangarooProjectileBase.*b0c589847f //  // @ game+0xf763808
	void OnExpiry(); // Function Kangaroo.KangarooProjectileBase.OnExpiry //  // @ game+0x100d054
	void *7f213a0913(); // Function Kangaroo.KangarooProjectileBase.*7f213a0913 //  // @ game+0xf76417c
	void OnComponentOverlap(); // Function Kangaroo.KangarooProjectileBase.OnComponentOverlap //  // @ game+0xf761b48
	void *66d4e1b0bc(); // Function Kangaroo.KangarooProjectileBase.*66d4e1b0bc //  // @ game+0xf760498
	void OnProjectileBounce(); // Function Kangaroo.KangarooProjectileBase.OnProjectileBounce //  // @ game+0xf7624c8
};

// Class Kangaroo.KangarooGrenade
// Size: 0x528 (Inherited: 0x508)  [layout: KHOP]
struct AKangarooGrenade : AKangarooProjectileBase {
	struct UGrenadeDataAsset* *c3063c11b0; // 0x508(0x08)
	struct UPaperSpriteComponent* RangeIndicatorSprite; // 0x510(0x08)
	struct UMaterialInstanceDynamic* *5ae79ac479; // 0x518(0x08)
	struct UAkComponent* AkComponent; // 0x520(0x08)
};

// Class Kangaroo.KangarooProjectileMovementComponent
// Size: 0x360 (Inherited: 0x310)  [layout: LECH - offset chi la uoc luong]
struct UKangarooProjectileMovementComponent : UProjectileMovementComponent {
	float LinearDamping; // 0x310(0x04)
	struct FVector WorldTargetPoint; // 0x314(0x0c)
	struct FVector WorldSourcePoint; // 0x320(0x0c)
	char pad_32C[0x4]; // 0x32c(0x04)
	float AccumulatedTime; // 0x330(0x04)
	char pad_334[0x2c]; // 0x334(0x2c)

	void *3ace12edc3(); // Function Kangaroo.KangarooProjectileMovementComponent.*3ace12edc3 //  // @ game+0xf761228
};

// Class Kangaroo.*a4df7157e7
// Size: 0x1f8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct U*a4df7157e7 : U*44373cd922 {
	char pad_B0[0x148]; // 0xb0(0x148)
};

// Class Kangaroo.KangarooShellDataAsset
// Size: 0xb0 (Inherited: 0x38)  [layout: KHOP]
struct UKangarooShellDataAsset : UDataAsset {
	struct UPaperSprite* Sprite; // 0x38(0x08)
	float SpriteScale; // 0x40(0x04)
	float MaxLifetimeSeconds; // 0x44(0x04)
	float DisappearingDurationSeconds; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct F*39b8b602a0 PhysicParams; // 0x50(0x28)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x78(0x08)
	float InitialLinearVelocity; // 0x80(0x04)
	float InitialAngularVelocity; // 0x84(0x04)
	float LinearDamping; // 0x88(0x04)
	float AngularDamping; // 0x8c(0x04)
	float DirectionModulationDegrees; // 0x90(0x04)
	float LinearVelocityModulation; // 0x94(0x04)
	float AngularVelocityModulation; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UAkAudioEvent* WallCollisionSound; // 0xa0(0x08)
	float CollisionSoundCooldown; // 0xa8(0x04)
	int32 MaxCollisionSounds; // 0xac(0x04)
};

// Class Kangaroo.KangarooVerticalRocket
// Size: 0x468 (Inherited: 0x400)  [layout: KHOP]
struct AKangarooVerticalRocket : AActor {
	struct UBoxComponent* Box; // 0x400(0x08)
	struct UPaperFlipbookComponent* flipbook; // 0x408(0x08)
	struct UPaperSpriteComponent* RangeIndicatorSprite; // 0x410(0x08)
	struct UKangarooVerticalRocketDataAsset* Data; // 0x418(0x08)
	struct AKangarooPawn* *ddcf5d1ca2; // 0x420(0x08)
	struct AController* *aea75273b6; // 0x428(0x08)
	struct UKangarooPawnDataAsset* *554146371f; // 0x430(0x08)
	struct UMaterialInstanceDynamic* *5ae79ac479; // 0x438(0x08)
	struct FVector *1ce82f3c8d; // 0x440(0x0c)
	char pad_44C[0x14]; // 0x44c(0x14)
	struct ARoomTrigger* *f1f313fe99; // 0x460(0x08)

	void *0a812279b7(); // Function Kangaroo.KangarooVerticalRocket.*0a812279b7 //  // @ game+0xf76289c
	void *7f213a0913(); // Function Kangaroo.KangarooVerticalRocket.*7f213a0913 //  // @ game+0xf764c50
};

// Class Kangaroo.KangarooVerticalRocketDataAsset
// Size: 0xf8 (Inherited: 0x38)  [layout: KHOP]
struct UKangarooVerticalRocketDataAsset : UDataAsset {
	struct UClass* RocketClass; // 0x38(0x08)
	struct F*e168d393a6 explosion; // 0x40(0x68)
	float FlightVelocity; // 0xa8(0x04)
	float FlightVelocityModulation; // 0xac(0x04)
	float DownwardVelocity; // 0xb0(0x04)
	float FlightDuration; // 0xb4(0x04)
	struct UPaperFlipbook* FlightFlipbook; // 0xb8(0x08)
	struct UPaperFlipbook* FlightLaunchFlipbook; // 0xc0(0x08)
	struct UAkAudioEvent* FlightLaunchSound; // 0xc8(0x08)
	struct UAkAudioEvent* FallingSound; // 0xd0(0x08)
	struct UMaterialInterface* *64da7751e3; // 0xd8(0x08)
	struct UPaperSprite* *eb14dc5560; // 0xe0(0x08)
	struct FLinearColor *f3ce5b4455; // 0xe8(0x10)
};

// Class Kangaroo.*5d3ddde49c
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*5d3ddde49c : UKangarooWeaponAnim {
	float *976431dad7; // 0x78(0x04)
	float *844d2792ad; // 0x7c(0x04)
	struct FVector2D *bcc2eaa928; // 0x80(0x08)
	float *57431b49b2; // 0x88(0x04)
	bool *bbe4e5f73a; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float *e312dc196a; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Kangaroo.*2d369af868
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*2d369af868 : UKangarooWeaponAnim {
	float *77e8750eff; // 0x78(0x04)
	float *068cc4499f; // 0x7c(0x04)
	struct FVector2D *5e1142920c; // 0x80(0x08)
	float *f5ee84aae4; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Kangaroo.KangarooHeldGrenade
// Size: 0x610 (Inherited: 0x5c0)  [layout: LECH - offset chi la uoc luong]
struct AKangarooHeldGrenade : AKangarooWeaponBase {
	struct UGrenadeDataAsset* *b840d61100; // 0x5c0(0x08)
	char pad_5C8[0x48]; // 0x5c8(0x48)

	void *cd1574f39e(); // Function Kangaroo.KangarooHeldGrenade.*cd1574f39e //  // @ game+0xf76054c
	void *539c05bb7c(); // Function Kangaroo.KangarooHeldGrenade.*539c05bb7c //  // @ game+0xf760560
	void OnAnimUnpinFinished(); // Function Kangaroo.KangarooHeldGrenade.OnAnimUnpinFinished //  // @ game+0xf761adc
	void *c8cbbe6d9b(); // Function Kangaroo.KangarooHeldGrenade.*c8cbbe6d9b //  // @ game+0xf7604ac
};

// Class Kangaroo.KangarooHeldMelee
// Size: 0x600 (Inherited: 0x5c0)  [layout: KHOP]
struct AKangarooHeldMelee : AKangarooWeaponBase {
	struct UBoxComponent* HitBox; // 0x5c0(0x08)
	char pad_5C8[0x10]; // 0x5c8(0x10)
	enum class EMeleeAttackType *fc6b749a00; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct AActor*> *b52e884a01; // 0x5e0(0x10)
	enum class EMeleeAttackType *72446a210c; // 0x5f0(0x04)
	int32 *09df0bfaef; // 0x5f4(0x04)
	struct UKangarooMeleeDataAsset* *c63309ca6c; // 0x5f8(0x08)

	void *bd4dc2d070(); // Function Kangaroo.KangarooHeldMelee.*bd4dc2d070 //  // @ game+0xf7604c0
	void *5e69c427d6(); // Function Kangaroo.KangarooHeldMelee.*5e69c427d6 //  // @ game+0xf7604d4
};

// Class Kangaroo.KangarooWeaponSelectionWidget
// Size: 0x488 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct UKangarooWeaponSelectionWidget : UStandaloneBaseUserWidget {
	struct TArray<struct FText> WeaponNames; // 0x440(0x10)
	struct TArray<struct FText> WeaponDescs; // 0x450(0x10)
	struct UHorizontalBox* WeaponButtonPannel; // 0x460(0x08)
	struct UTextBlock* WeaponNameTextBlock; // 0x468(0x08)
	struct UTextBlock* WeaponDescTextBlock; // 0x470(0x08)
	char pad_478[0x10]; // 0x478(0x10)

	void HandleGamepadRightOfChild(); // Function Kangaroo.KangarooWeaponSelectionWidget.HandleGamepadRightOfChild //  // @ game+0xdbd0598
	void HandleGamepadLeftOfChild(); // Function Kangaroo.KangarooWeaponSelectionWidget.HandleGamepadLeftOfChild //  // @ game+0xdbd06ec
	void HandleGamepadEnterOfChild(); // Function Kangaroo.KangarooWeaponSelectionWidget.HandleGamepadEnterOfChild //  // @ game+0xe195294
	void HandleFocusReceivedOfChild(); // Function Kangaroo.KangarooWeaponSelectionWidget.HandleFocusReceivedOfChild //  // @ game+0xe195334
};

// Class Kangaroo.LevelModule
// Size: 0x440 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALevelModule : AActor {
	struct USceneComponent* Origin; // 0x400(0x08)
	enum class FSizeGroup SizeGroup; // 0x408(0x04)
	float ProbabilityWithinTag; // 0x40c(0x04)
	bool BoundsOnlyFromCollision; // 0x410(0x01)
	bool OnlyOnExternalFloor; // 0x411(0x01)
	bool OnlyOnInternalFloor; // 0x412(0x01)
	bool ForcePlaceInRoomCenter; // 0x413(0x01)
	char pad_414[0x4]; // 0x414(0x04)
	struct TArray<struct F*7a18fda9cd> *83b0b279b2; // 0x418(0x10)
	char pad_428[0x18]; // 0x428(0x18)
};

// Class Kangaroo.LevelModuleComponent
// Size: 0x230 (Inherited: 0x210)  [layout: KHOP]
struct ULevelModuleComponent : UActorComponent {
	enum class FObstacleMode ObstacleMode; // 0x208(0x04)
	float Probability; // 0x20c(0x04)
	struct FVector2D PosOffset; // 0x210(0x08)
	struct FVector2D SizeOffset; // 0x218(0x08)
	float ExpandBoundLeft; // 0x220(0x04)
	float ExpandBoundRight; // 0x224(0x04)
	float ExpandBoundTop; // 0x228(0x04)
	float ExpandBoundBottom; // 0x22c(0x04)
};

// Class Kangaroo.LevelStage
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct ULevelStage : UDataAsset {
	int32 MinRooms; // 0x38(0x04)
	int32 MaxRooms; // 0x3c(0x04)
	int32 NumEnemies; // 0x40(0x04)
	float StartingDifficulty; // 0x44(0x04)
	float EndingDifficulty; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct URoomTheme* BossRoomTheme; // 0x50(0x08)
	struct FText StageName; // 0x58(0x18)
};

// Class Kangaroo.RoomTheme
// Size: 0x108 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct URoomTheme : UDataAsset {
	struct FVector2D MinRoomSize; // 0x38(0x08)
	struct FVector2D MaxRoomSize; // 0x40(0x08)
	int32 MaxIrregularityDepth; // 0x48(0x04)
	float TurnProbability; // 0x4c(0x04)
	int32 MinDepthStreak; // 0x50(0x04)
	int32 MaxDepthStreak; // 0x54(0x04)
	int32 DecreaseIrregularitiesWithinGateDistance; // 0x58(0x04)
	int32 ExtendedFloorDepth; // 0x5c(0x04)
	struct TArray<struct F*3a43c9040a> ModuleTags; // 0x60(0x10)
	struct F*c7f0ee0cf3 HorizontalGateTags; // 0x70(0x30)
	struct FName SpecialFirstModule; // 0xa0(0x08)
	int32 MinGatePassageWidth; // 0xa8(0x04)
	struct F*d88c5a0e2d LargeModules; // 0xac(0x14)
	struct F*d88c5a0e2d MediumModules; // 0xc0(0x14)
	struct F*d88c5a0e2d SmallModules; // 0xd4(0x14)
	struct F*d88c5a0e2d DecorationModules; // 0xe8(0x14)
	bool CanPlaceDecorsUnderObstacles; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	int32 MaxLootboxDistanceFromGate; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Kangaroo.LevelTheme
// Size: 0x360 (Inherited: 0x38)  [layout: KHOP]
struct ULevelTheme : UDataAsset {
	enum class *14d4a8901a LevelDirection; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UAkAudioEvent* *9de767439d; // 0x40(0x08)
	int32 GateThickness; // 0x48(0x04)
	float HorizontalConnectionPercent; // 0x4c(0x04)
	int32 SpawnAreaExtent; // 0x50(0x04)
	bool PreventOppositeHorizontalConnections; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct F*c6c4c5712c RoomConnections; // 0x58(0x14)
	struct F*c6c4c5712c BossRoomConnection; // 0x6c(0x14)
	struct UClass* TriggerClass; // 0x80(0x08)
	struct UClass* BossTriggerClass; // 0x88(0x08)
	struct UClass* GateTriggerClass; // 0x90(0x08)
	struct FVector2D WorldTileSize; // 0x98(0x08)
	struct F*15b45525ea Floor; // 0xa0(0x10)
	struct F*15b45525ea FloorUnderModule; // 0xb0(0x10)
	struct F*15b45525ea FloorUnderEnemy; // 0xc0(0x10)
	struct F*15b45525ea FloorUnderDecoration; // 0xd0(0x10)
	struct F*15b45525ea SpawnArea; // 0xe0(0x10)
	struct F*15b45525ea Gate; // 0xf0(0x10)
	struct F*15b45525ea WallT; // 0x100(0x10)
	struct F*15b45525ea WallB; // 0x110(0x10)
	struct F*15b45525ea WallL; // 0x120(0x10)
	struct F*15b45525ea WallR; // 0x130(0x10)
	struct F*15b45525ea WallLT; // 0x140(0x10)
	struct F*15b45525ea WallRT; // 0x150(0x10)
	struct F*15b45525ea WallRB; // 0x160(0x10)
	struct F*15b45525ea WallLB; // 0x170(0x10)
	struct F*15b45525ea WallExtLT; // 0x180(0x10)
	struct F*15b45525ea WallExtRT; // 0x190(0x10)
	struct F*15b45525ea WallExtRB; // 0x1a0(0x10)
	struct F*15b45525ea WallExtLB; // 0x1b0(0x10)
	struct F*15b45525ea WallInterior; // 0x1c0(0x10)
	struct F*15b45525ea FloorExternal; // 0x1d0(0x10)
	struct F*15b45525ea FloorT; // 0x1e0(0x10)
	struct F*15b45525ea FloorB; // 0x1f0(0x10)
	struct F*15b45525ea FloorL; // 0x200(0x10)
	struct F*15b45525ea FloorR; // 0x210(0x10)
	struct F*15b45525ea FloorLT; // 0x220(0x10)
	struct F*15b45525ea FloorRT; // 0x230(0x10)
	struct F*15b45525ea FloorRB; // 0x240(0x10)
	struct F*15b45525ea FloorLB; // 0x250(0x10)
	struct F*15b45525ea FloorExtLT; // 0x260(0x10)
	struct F*15b45525ea FloorExtRT; // 0x270(0x10)
	struct F*15b45525ea FloorExtRB; // 0x280(0x10)
	struct F*15b45525ea FloorExtLB; // 0x290(0x10)
	struct FName ParentModuleTag; // 0x2a0(0x08)
	bool ShuffleRoomThemes; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct URoomTheme*> SpawnRoomThemes; // 0x2b0(0x10)
	struct TArray<struct URoomTheme*> RoomThemes; // 0x2c0(0x10)
	struct TArray<struct URoomTheme*> ExitRoomThemes; // 0x2d0(0x10)
	float EnemyDensityProgression; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UClass* EnemyWaypointClass; // 0x2e8(0x08)
	struct TArray<struct F*86ce70f3bd> EnemyTypes; // 0x2f0(0x10)
	struct TArray<struct F*86ce70f3bd> BossHelperEnemyTypes; // 0x300(0x10)
	int32 NumBossHelperEnemies; // 0x310(0x04)
	int32 NumBossHelperEnemySpawnSlots; // 0x314(0x04)
	struct TArray<struct F*86ce70f3bd> GunDropperEnemyTypes; // 0x318(0x10)
	struct TArray<struct F*cbdb5a823f> BossTypes; // 0x328(0x10)
	struct UCollectibleDataAsset* LootboxData; // 0x338(0x08)
	float TileSpaceObstacleEpsilon; // 0x340(0x04)
	bool PlaceWallTiles; // 0x344(0x01)
	bool PlaceFloorTiles; // 0x345(0x01)
	bool PlaceDebugFloorTiles; // 0x346(0x01)
	bool ProcessExternalFloors; // 0x347(0x01)
	bool SpawnTestWeapons; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TArray<struct UCollectibleDataAsset*> TestWeapons; // 0x350(0x10)
};

// Class Kangaroo.AISense_ComplexHearing
// Size: 0x190 (Inherited: 0x190)  [layout: KHOP]
struct UAISense_ComplexHearing : UAISense_Hearing {
};

// Class Kangaroo.*5059df2463
// Size: 0x58 (Inherited: 0x38)  [layout: KHOP]
struct U*5059df2463 : UDataAsset {
	float muzzleOffset; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<float> Angles; // 0x40(0x10)
	int32 bulletsPerShot; // 0x50(0x04)
	float distanceBetweenBullets; // 0x54(0x04)
};

// Class Kangaroo.*f8bf36e7d7
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct U*f8bf36e7d7 : UDataAsset {
	struct TArray<struct FCollection> Waves; // 0x38(0x10)
};

// Class Kangaroo.CollectibleDataAsset
// Size: 0xa8 (Inherited: 0x38)  [layout: KHOP]
struct UCollectibleDataAsset : UDataAsset {
	struct FText DisplayedName; // 0x38(0x18)
	struct UPaperSprite* CollectibleSprite; // 0x50(0x08)
	struct FLinearColor CollectibleShadowColor; // 0x58(0x10)
	float BounceHeight; // 0x68(0x04)
	float SpriteScale; // 0x6c(0x04)
	float MagnetForce; // 0x70(0x04)
	bool DelayMagnetizationUntilRoomCleared; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct UMaterialInterface* SourceMaterial; // 0x78(0x08)
	struct UMaterialInterface* *6a2cadcd06; // 0x80(0x08)
	enum class UCollectibleSpecialEffect *9055eb71f2; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *7c702cf774; // 0x8c(0x04)
	bool *a74b1aeec9; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UClass* WorldCollectibleClass; // 0x98(0x08)
	struct UAkAudioEvent* CollectSound; // 0xa0(0x08)
};

// Class Kangaroo.KangarooWeaponDataAsset
// Size: 0x108 (Inherited: 0xa8)  [layout: KHOP]
struct UKangarooWeaponDataAsset : UCollectibleDataAsset {
	struct FVector2D HoldingOffset; // 0xa8(0x08)
	float TargetOrthoMultiplier; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct F*2d1fe88723 Anims; // 0xb8(0x50)
};

// Class Kangaroo.Collectible
// Size: 0x468 (Inherited: 0x400)  [layout: KHOP]
struct ACollectible : AActor {
	struct UPaperSpriteComponent* Sprite; // 0x400(0x08)
	struct UPaperSpriteComponent* ShadowSprite; // 0x408(0x08)
	struct UCollectibleDataAsset* CollectibleData; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct UMaterialInstanceDynamic* *ef259c3fc0; // 0x420(0x08)
	struct UMaterialInstanceDynamic* *bcd6d92eea; // 0x428(0x08)
	struct AKangarooPawn* *2fdae94425; // 0x430(0x08)
	char pad_438[0x20]; // 0x438(0x20)
	struct UKangarooGunInfoAsset* *fc69fa3fca; // 0x458(0x08)
	struct AKangarooPawn* *549a316981; // 0x460(0x08)

	void OnBeginOverlap(); // Function Kangaroo.Collectible.OnBeginOverlap //  // @ game+0xf785df8
	void OnEndOverlap(); // Function Kangaroo.Collectible.OnEndOverlap //  // @ game+0xf786518
};

// Class Kangaroo.KangarooLootBox
// Size: 0x4d0 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct AKangarooLootBox : ACollectible {
	struct UMaterialInterface* *185a3141e2; // 0x468(0x08)
	struct TArray<struct UCollectibleDataAsset*> *9a444cb3da; // 0x470(0x10)
	struct UCollectibleDataAsset* *653dd1ba82[0x03]; // 0x480(0x18)
	struct UCollectibleDataAsset* *1a28da5c43; // 0x498(0x08)
	bool *aac9e623ca; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UCollectibleDataAsset* *012525e274; // 0x4a8(0x08)
	struct FVector *7ce4ed9a3f; // 0x4b0(0x0c)
	struct FVector *10ef9738c3; // 0x4bc(0x0c)
	int32 *2d67a449f6; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)

	void *e4182e6800(); // Function Kangaroo.KangarooLootBox.*e4182e6800 //  // @ game+0xf785df8
};

// Class Kangaroo.KangarooGunInfoAsset
// Size: 0x2b8 (Inherited: 0x108)  [layout: LECH - offset chi la uoc luong]
struct UKangarooGunInfoAsset : UKangarooWeaponDataAsset {
	struct UPaperFlipbook* IdleFlipbook; // 0x108(0x08)
	float ShakeOnShot; // 0x110(0x04)
	float RecoilToSpreadMult; // 0x114(0x04)
	float BaseSpread; // 0x118(0x04)
	float MovementSpreadIncreaseSpeed; // 0x11c(0x04)
	float MovementSpreadDamping; // 0x120(0x04)
	float MinMovementSpeedForSpread; // 0x124(0x04)
	float MovementSpreadThreshold; // 0x128(0x04)
	float MaxMovementSpread; // 0x12c(0x04)
	enum class FGunCategory Category; // 0x130(0x04)
	enum class EKangarooAmmoType AmmoType; // 0x134(0x01)
	enum class EGunActionType ActionType; // 0x135(0x01)
	bool PistolSlotOnly; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
	int32 BurstFireShotsNum; // 0x138(0x04)
	float BurstFireInterval; // 0x13c(0x04)
	float BaseDamage; // 0x140(0x04)
	float FireRate; // 0x144(0x04)
	float FireRateVariation; // 0x148(0x04)
	float MuzzleVelocity; // 0x14c(0x04)
	float MuzzleVelocityModulation; // 0x150(0x04)
	float MaxBulletDistance; // 0x154(0x04)
	int32 bulletsPerShot; // 0x158(0x04)
	float BulletSpreadDegrees; // 0x15c(0x04)
	int32 MagazineCapacity; // 0x160(0x04)
	int32 ExtMagazineCapacity; // 0x164(0x04)
	int32 MaximumAmmoInReserve; // 0x168(0x04)
	int32 ReserveAmmoAlongLootbox; // 0x16c(0x04)
	float MagsInUniversalAmmo; // 0x170(0x04)
	float TimeToReload; // 0x174(0x04)
	float TimeToInstantReload; // 0x178(0x04)
	float TimeToChamber; // 0x17c(0x04)
	float AdditionalTimeToChamber; // 0x180(0x04)
	float CrosshairRangeMultiplier; // 0x184(0x04)
	enum class *f5994520ee DropShellMoment; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct UClass* ShellClass; // 0x190(0x08)
	struct UKangarooShellDataAsset* ShellData; // 0x198(0x08)
	float RecoilMultiplier; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<float> RecoilImpulses; // 0x1a8(0x10)
	bool LoopRecoil; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float RecoilHeatPerShot; // 0x1bc(0x04)
	float RecoilCooldownPerSec; // 0x1c0(0x04)
	float RecoilVisualDisplacementMult; // 0x1c4(0x04)
	int32 TriggerLowAmmoCueWhenAmmoLessThan; // 0x1c8(0x04)
	float NoiseRange; // 0x1cc(0x04)
	struct UAkAudioEvent* FireSound; // 0x1d0(0x08)
	struct UAkAudioEvent* ContinuousFireSound; // 0x1d8(0x08)
	struct UAkAudioEvent* ContinuousFireSoundEnd; // 0x1e0(0x08)
	struct UAkAudioEvent* ChamberingSound; // 0x1e8(0x08)
	struct UAkAudioEvent* ReloadSound; // 0x1f0(0x08)
	struct UAkAudioEvent* InstantReloadSound; // 0x1f8(0x08)
	struct UAkAudioEvent* WieldSound; // 0x200(0x08)
	struct UAkAudioEvent* EmptyMagClickSound; // 0x208(0x08)
	struct UAkAudioEvent* AmmoDepletedClickSound; // 0x210(0x08)
	struct UAkAudioEvent* LowAmmoCueSound; // 0x218(0x08)
	struct UClass* ProjectileClass; // 0x220(0x08)
	float AdditionalProjectileScale; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct UClass*> ProjectileClasses; // 0x230(0x10)
	struct UKangarooGunProjectileDataAsset* ProjectileData; // 0x240(0x08)
	struct UPaperSprite* LaserSprite; // 0x248(0x08)
	float LaserThickness; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UMaterialInterface* LaserMaterial; // 0x258(0x08)
	struct FLinearColor LaserReadyColor; // 0x260(0x10)
	struct FLinearColor LaserStandbyColor; // 0x270(0x10)
	struct UPaperSprite* HUDActiveIcon; // 0x280(0x08)
	struct FVector2D ChamberingOffsetMult; // 0x288(0x08)
	float ChamberingStartSequenceBound; // 0x290(0x04)
	float ChamberingEndSequenceBound; // 0x294(0x04)
	float ChamberingSequenceAngle; // 0x298(0x04)
	struct FVector2D ReloadOffsetMult; // 0x29c(0x08)
	float ReloadSequenceChamberingDuration; // 0x2a4(0x04)
	float ReloadStartSequenceBound; // 0x2a8(0x04)
	float ReloadEndSequenceBound; // 0x2ac(0x04)
	float ReloadSequenceAngle; // 0x2b0(0x04)
	bool ReloadFlipMidWay; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
};

// Class Kangaroo.KangarooMeleeDataAsset
// Size: 0x1d8 (Inherited: 0x108)  [layout: KHOP]
struct UKangarooMeleeDataAsset : UKangarooWeaponDataAsset {
	struct F*cb4b14dca2 SwingInfo; // 0x108(0x48)
	struct F*cb4b14dca2 LungeInfo; // 0x150(0x48)
	struct FVector BoxTriggerExtents; // 0x198(0x0c)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct UAkAudioEvent* WieldSound; // 0x1a8(0x08)
	struct UPaperFlipbook* IdleFlipbook; // 0x1b0(0x08)
	struct UPaperSprite* HUDActiveIcon; // 0x1b8(0x08)
	struct FVector2D PrepareHoldingOffset; // 0x1c0(0x08)
	struct FVector2D BlockHoldingOffset; // 0x1c8(0x08)
	float BlockAngle; // 0x1d0(0x04)
	float PrepareSequenceHalfwayMult; // 0x1d4(0x04)
};

// Class Kangaroo.KangarooThrowableDataAsset
// Size: 0x1d0 (Inherited: 0x108)  [layout: KHOP]
struct UKangarooThrowableDataAsset : UKangarooWeaponDataAsset {
	struct UPaperFlipbook* HeldFlipbook; // 0x108(0x08)
	struct UPaperFlipbook* ThrowingHandFlipbook; // 0x110(0x08)
	struct UPaperFlipbook* ThrownFlipbook; // 0x118(0x08)
	float *81df2e9c45; // 0x120(0x04)
	float ThrownLifetime; // 0x124(0x04)
	bool MakeCollectibleUponExpiry; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float SphereRadius; // 0x12c(0x04)
	float Bounciness; // 0x130(0x04)
	bool VelocityDependentOnAimingDistance; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	float ThrowLongLinearVelocityConstant; // 0x138(0x04)
	float ThrowLongLinearVelocityAimingMult; // 0x13c(0x04)
	float ThrowShortLinearVelocityConstant; // 0x140(0x04)
	float ThrowShortLinearVelocityAimingMult; // 0x144(0x04)
	float ThrownLinearDamping; // 0x148(0x04)
	float AIPlayerPositionPredictionTime; // 0x14c(0x04)
	float AIThrowUnderFeetVelocityMult; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x158(0x08)
	struct UMaterialInterface* *64da7751e3; // 0x160(0x08)
	struct UPaperSprite* *eb14dc5560; // 0x168(0x08)
	struct FLinearColor *f3ce5b4455; // 0x170(0x10)
	struct FName PlayerOwnerCollisionProfile; // 0x180(0x08)
	struct FName EnemyOwnerCollisionProfile; // 0x188(0x08)
	int32 InitiallyCarried; // 0x190(0x04)
	int32 MaxCarried; // 0x194(0x04)
	float RegenerationRate; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct UAkAudioEvent* WieldSound; // 0x1a0(0x08)
	struct UAkAudioEvent* PawnCollisionSound; // 0x1a8(0x08)
	struct UAkAudioEvent* WallCollisionSound; // 0x1b0(0x08)
	struct UAkAudioEvent* ThrowSound; // 0x1b8(0x08)
	struct UClass* WorldThrowableClass; // 0x1c0(0x08)
	struct UPaperSprite* HUDActiveIcon; // 0x1c8(0x08)
};

// Class Kangaroo.GrenadeDataAsset
// Size: 0x2a0 (Inherited: 0x1d0)  [layout: KHOP]
struct UGrenadeDataAsset : UKangarooThrowableDataAsset {
	struct F*e168d393a6 explosion; // 0x1d0(0x68)
	struct FVector2D LongUnpinningOffset; // 0x238(0x08)
	struct FVector2D ShortUnpinningOffset; // 0x240(0x08)
	struct UPaperFlipbook* UnpinningFlipbook; // 0x248(0x08)
	struct UPaperFlipbook* CookingFlipbook; // 0x250(0x08)
	float UnpinSequenceDuration; // 0x258(0x04)
	struct FVector2D ThrowingLongHandsOffset; // 0x25c(0x08)
	struct FVector2D ThrowingShortHandsOffset; // 0x264(0x08)
	float ThrowSequenceDuration; // 0x26c(0x04)
	float ThrowSequenceDurationVariation; // 0x270(0x04)
	float LongThrowStartAngle; // 0x274(0x04)
	float LongThrowEndAngle; // 0x278(0x04)
	float ShortThrowStartAngle; // 0x27c(0x04)
	float ShortThrowEndAngle; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UAkAudioEvent* UnpinSound; // 0x288(0x08)
	struct UAkAudioEvent* StartCookingSound; // 0x290(0x08)
	struct UKangarooShellDataAsset* DroppedHandle; // 0x298(0x08)
};

// Class Kangaroo.DamageField
// Size: 0x478 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ADamageField : AActor {
	float *f3c1effdf6; // 0x400(0x04)
	int32 *442bb71327; // 0x404(0x04)
	struct AController* *aea75273b6; // 0x408(0x08)
	struct UKangarooPawnDataAsset* *554146371f; // 0x410(0x08)
	struct AActor* DamageCauser; // 0x418(0x08)
	struct UDamageFieldData* *99ea7002bb; // 0x420(0x08)
	struct TArray<struct AActor*> *ab4c8b8d1b; // 0x428(0x10)
	struct TArray<struct AActor*> OverlappingActors; // 0x438(0x10)
	bool *84a1811d76; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UPaperFlipbookComponent* flipbook; // 0x450(0x08)
	struct USphereComponent* TriggerSphere; // 0x458(0x08)
	struct UAudioComponent* *0e50d9da39; // 0x460(0x08)
	char pad_468[0x10]; // 0x468(0x10)

	void *ac04c2922c(); // Function Kangaroo.DamageField.*ac04c2922c //  // @ game+0xf7833a4
	void ChangeAnimationToLooping(); // Function Kangaroo.DamageField.ChangeAnimationToLooping //  // @ game+0xf783390
	void OnEndOverlap(); // Function Kangaroo.DamageField.OnEndOverlap //  // @ game+0xf786644
	void OnBeginOverlap(); // Function Kangaroo.DamageField.OnBeginOverlap //  // @ game+0xf785fbc
};

// Class Kangaroo.DamageFieldData
// Size: 0xb0 (Inherited: 0x38)  [layout: KHOP]
struct UDamageFieldData : UDataAsset {
	float Radius; // 0x38(0x04)
	float BaseDamage; // 0x3c(0x04)
	float DamageInterval; // 0x40(0x04)
	bool DamagesWhileRolling; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float AnimationHeight; // 0x4c(0x04)
	float SpawnAnimationScale; // 0x50(0x04)
	float LoopedAnimationScale; // 0x54(0x04)
	struct UAkAudioEvent* AmbientSound; // 0x58(0x08)
	struct UPaperFlipbook* SpawnFlipbook; // 0x60(0x08)
	struct UPaperFlipbook* LoopedFlipbook; // 0x68(0x08)
	struct UPaperFlipbook* RandomAddsFlipbook; // 0x70(0x08)
	bool RandomAddsLifetimeSynced; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 RandomAddsSpawnedUpperLimit; // 0x7c(0x04)
	int32 RandomAddsSpawnedEachTime; // 0x80(0x04)
	float RandomAddsExpansionTime; // 0x84(0x04)
	float RandomAddsRadius; // 0x88(0x04)
	float RandomAddsInterval; // 0x8c(0x04)
	float RandomAddsIntervalModulation; // 0x90(0x04)
	float RandomAddsScale; // 0x94(0x04)
	float RandomAddsScaleModulation; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName CollisionProfileName; // 0xa0(0x08)
	struct UClass* Class; // 0xa8(0x08)
};

// Class Kangaroo.EnvironmentDamageField
// Size: 0x488 (Inherited: 0x468)  [layout: KHOP]
struct AEnvironmentDamageField : APawn {
	struct U*1b299b5d1c* *99ea7002bb; // 0x468(0x08)
	struct TArray<struct F*5847f51960> OverlappingActors; // 0x470(0x10)
	struct UAudioComponent* *0e50d9da39; // 0x480(0x08)

	void OnBeginOverlap(); // Function Kangaroo.EnvironmentDamageField.OnBeginOverlap //  // @ game+0xf7861ec
	void OnEndOverlap(); // Function Kangaroo.EnvironmentDamageField.OnEndOverlap //  // @ game+0xf786804
};

// Class Kangaroo.*1b299b5d1c
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*1b299b5d1c : UDataAsset {
	float TickTime; // 0x38(0x04)
	bool ImmediateAffect; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FName CollisionProfileName; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Kangaroo.*ef359cbffa
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*ef359cbffa : U*1b299b5d1c {
	struct UKangarooPawnDataAsset* *5604fa9bac; // 0x50(0x08)
	float *b582cde022; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Kangaroo.*4025bf47fa
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*4025bf47fa : U*1b299b5d1c {
	float *39c7958eab; // 0x50(0x04)
	bool *0e275af4f9; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Kangaroo.*cc0e6e4a1b
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*cc0e6e4a1b : UDataAsset {
};

// Class Kangaroo.FlipbookSetAsset
// Size: 0x78 (Inherited: 0x38)  [layout: KHOP]
struct UFlipbookSetAsset : UDataAsset {
	struct UPaperFlipbook* N; // 0x38(0x08)
	struct UPaperFlipbook* S; // 0x40(0x08)
	struct UPaperFlipbook* W; // 0x48(0x08)
	struct UPaperFlipbook* E; // 0x50(0x08)
	struct UPaperFlipbook* NW; // 0x58(0x08)
	struct UPaperFlipbook* NE; // 0x60(0x08)
	struct UPaperFlipbook* SE; // 0x68(0x08)
	struct UPaperFlipbook* SW; // 0x70(0x08)
};

// Class Kangaroo.GateDoors
// Size: 0x4e0 (Inherited: 0x400)  [layout: KHOP]
struct AGateDoors : AActor {
	struct USceneComponent* Origin; // 0x400(0x08)
	struct UAkAudioEvent* OpenSound; // 0x408(0x08)
	struct UAkAudioEvent* CloseSound; // 0x410(0x08)
	float OpenDuration; // 0x418(0x04)
	float CloseDuration; // 0x41c(0x04)
	struct FVector2D TopDoorOffset; // 0x420(0x08)
	struct FVector2D LeftDoorOffset; // 0x428(0x08)
	struct FVector2D RightDoorOffset; // 0x430(0x08)
	struct FName GateDoorTopTag; // 0x438(0x08)
	struct FName GateDoorLeftTag; // 0x440(0x08)
	struct FName GateDoorRightTag; // 0x448(0x08)
	struct FName GatePawnBlockTag; // 0x450(0x08)
	struct FVector GateDoorsCenter; // 0x458(0x0c)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<struct AActor*> PawnBlockActors; // 0x468(0x10)
	struct TArray<struct AActor*> TopDoorActors; // 0x478(0x10)
	struct TArray<struct AActor*> LeftDoorActors; // 0x488(0x10)
	struct TArray<struct AActor*> RightDoorActors; // 0x498(0x10)
	struct TArray<struct FVector> InitialPositionsTop; // 0x4a8(0x10)
	struct TArray<struct FVector> InitialPositionsLeft; // 0x4b8(0x10)
	struct TArray<struct FVector> InitialPositionsRight; // 0x4c8(0x10)
	enum class EGateTransition *8302bb1fb3; // 0x4d8(0x04)
	float *2e9a1d1b55; // 0x4dc(0x04)
};

// Class Kangaroo.RoomTrigger
// Size: 0x508 (Inherited: 0x408)  [layout: KHOP]
struct ARoomTrigger : ATriggerBox {
	struct FText *ae5cf32c2d; // 0x408(0x18)
	struct FText *a7a374242b; // 0x420(0x18)
	struct UAkAudioEvent* *d89ce59d5a; // 0x438(0x08)
	struct UAkAudioEvent* *8ddcda40ba; // 0x440(0x08)
	struct UAkAudioEvent* *c07bb1f607; // 0x448(0x08)
	float *adc459c405; // 0x450(0x04)
	bool *adc0f997f0; // 0x454(0x01)
	bool *b7c641a347; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	struct FVector *58383bc5fa; // 0x458(0x0c)
	bool *473ddd1e7d; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FVector *de1d151947; // 0x468(0x0c)
	bool *caa9fba327; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct UClass* *eaeff90f34; // 0x478(0x08)
	struct UClass* *0f1185f2e3; // 0x480(0x08)
	enum class EEnemyWaveMode *afa842dd83; // 0x488(0x04)
	int32 *5a045ee812; // 0x48c(0x04)
	int32 *6f02616299; // 0x490(0x04)
	float *f752aac2f7; // 0x494(0x04)
	float *b60eb45425; // 0x498(0x04)
	float *945f60de2d; // 0x49c(0x04)
	struct TArray<struct F*5b667910ec> *9fd1b24187; // 0x4a0(0x10)
	struct AGeneratedLevel* ParentLevel; // 0x4b0(0x08)
	int32 RoomIndex; // 0x4b8(0x04)
	bool *ac2baa4112; // 0x4bc(0x01)
	bool *456dc89759; // 0x4bd(0x01)
	bool *1cb1e9840f; // 0x4be(0x01)
	bool *fe0007b578; // 0x4bf(0x01)
	bool *323c172461; // 0x4c0(0x01)
	bool *7eb8ab5942; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	int32 *c87acc799d; // 0x4c4(0x04)
	int32 *339c46856e; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FTimerHandle *5114cf4d05; // 0x4d0(0x08)
	struct FTimerHandle *a48f0c5d14; // 0x4d8(0x08)
	struct FTimerHandle *235d4a0bd5; // 0x4e0(0x08)
	int32 *fe59134fc6; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct AKangarooBlueZone* *532c3efb91; // 0x4f0(0x08)
	struct AKangarooVerticalRocket* *3078fc88a0; // 0x4f8(0x08)
	bool *0b6e9d610a; // 0x500(0x01)
	bool *d19fc27c22; // 0x501(0x01)
	bool *43d356d885; // 0x502(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	float *3b11b713eb; // 0x504(0x04)

	void *f74bdb2d41(); // Function Kangaroo.RoomTrigger.*f74bdb2d41 //  // @ game+0x1053c04
	void OnOverlapEnd(); // Function Kangaroo.RoomTrigger.OnOverlapEnd //  // @ game+0xf78702c
	void OnOverlapBegin(); // Function Kangaroo.RoomTrigger.OnOverlapBegin //  // @ game+0xf786be4
};

// Class Kangaroo.GateTrigger
// Size: 0x410 (Inherited: 0x408)  [layout: KHOP]
struct AGateTrigger : ATriggerBox {
	struct ARoomTrigger* InteriorTrigger; // 0x408(0x08)

	void OnOverlapBegin(); // Function Kangaroo.GateTrigger.OnOverlapBegin //  // @ game+0xf786a88
	void OnOverlapEnd(); // Function Kangaroo.GateTrigger.OnOverlapEnd //  // @ game+0xf786dac
};

// Class Kangaroo.GeneratedLevel
// Size: 0x4c0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGeneratedLevel : AActor {
	struct USceneComponent* Origin; // 0x400(0x08)
	struct ULevelTheme* Theme; // 0x408(0x08)
	struct ULevelStage* DefaultStage; // 0x410(0x08)
	bool GenerateOnStart; // 0x418(0x01)
	bool UsePredefinedSeed; // 0x419(0x01)
	char pad_41A[0x2]; // 0x41a(0x02)
	int32 GeneratorSeed; // 0x41c(0x04)
	struct AActor* PlayerStart; // 0x420(0x08)
	struct AActor* TileMap; // 0x428(0x08)
	struct TArray<struct ULevelStage*> Stages; // 0x430(0x10)
	struct ULevelStage* DebugOnlyBossStage; // 0x440(0x08)
	struct TArray<struct AActor*> LevelActors; // 0x448(0x10)
	struct FLevelLayout LevelLayout; // 0x458(0x50)
	struct TArray<struct AActor*> CurrentPalette; // 0x4a8(0x10)
	char pad_4B8[0x8]; // 0x4b8(0x08)

	void *2699719324(); // Function Kangaroo.GeneratedLevel.*2699719324 //  // @ game+0x1053c04
};

// Class Kangaroo.*6e8f33f2ad
// Size: 0xa8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*6e8f33f2ad : UDataAsset {
	struct UClass* ProjectileClass; // 0x38(0x08)
	struct UPaperSprite* Sprite; // 0x40(0x08)
	struct UPaperSprite* TraceSprite; // 0x48(0x08)
	float SpriteScale; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UMaterialInterface* *82b888b2df; // 0x58(0x08)
	struct FLinearColor SpriteColor; // 0x60(0x10)
	struct FLinearColor TraceSpriteColor; // 0x70(0x10)
	float TraceLengtheningSpeedMult; // 0x80(0x04)
	float TraceTargetLengthMult; // 0x84(0x04)
	struct UClass* DamageType; // 0x88(0x08)
	struct UParticleSystem* HitEnemyPS; // 0x90(0x08)
	struct UParticleSystem* HitWallPS; // 0x98(0x08)
	float NoiseRange; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Kangaroo.KangarooAI
// Size: 0x660 (Inherited: 0x520)  [layout: LECH - offset chi la uoc luong]
struct AKangarooAI : AAIController {
	struct AKangarooPawn* *065c47dc0e; // 0x520(0x08)
	enum class EAIState AIState; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct UBehaviorTree* *39b4d9dae1; // 0x530(0x08)
	struct UBehaviorTree* *368dbb4df5[0x04]; // 0x538(0x20)
	struct UBehaviorTreeComponent* BTComponent; // 0x558(0x08)
	struct UBehaviorTree* *f844640073; // 0x560(0x08)
	float *2bcc07c747; // 0x568(0x04)
	struct FVector2D *429f48af8a; // 0x56c(0x08)
	float AggroFallRate; // 0x574(0x04)
	float CurrentStateEnterTime; // 0x578(0x04)
	char pad_57C[0x9c]; // 0x57c(0x9c)
	struct TArray<struct FEnemyInfo> *35b9aac2a5; // 0x618(0x10)
	struct AKangarooPawn* *372933c2c9; // 0x628(0x08)
	struct UAIPerceptionComponent* AIPerceptionComponent; // 0x630(0x08)
	struct UAISenseConfig_Sight* Sight; // 0x638(0x08)
	struct UAISenseConfig_Hearing* Hearing; // 0x640(0x08)
	struct UAISenseConfig_Damage* Damage; // 0x648(0x08)
	char pad_650[0x10]; // 0x650(0x10)

	void *1479cfb4cb(); // Function Kangaroo.KangarooAI.*1479cfb4cb //  // @ game+0xf7833b8
	void *adc74c2970(); // Function Kangaroo.KangarooAI.*adc74c2970 //  // @ game+0xf785ca8
	void OnActorPerceptionUpdated(); // Function Kangaroo.KangarooAI.OnActorPerceptionUpdated //  // @ game+0xf785d20
	void *567ba3d342(); // Function Kangaroo.KangarooAI.*567ba3d342 //  // @ game+0x1053c04
	void *f40755352a(); // Function Kangaroo.KangarooAI.*f40755352a //  // @ game+0x1053c04
};

// Class Kangaroo.KangarooBlueZone
// Size: 0x468 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct AKangarooBlueZone : APaperSpriteActor {
	float MinRadius; // 0x408(0x04)
	float MaxRadius; // 0x40c(0x04)
	float FillSquareScale; // 0x410(0x04)
	float ShrinkDuration; // 0x414(0x04)
	float BaseDamage; // 0x418(0x04)
	float DamageInterval; // 0x41c(0x04)
	struct UMaterialInterface* ZoneIndicatorMaterial; // 0x420(0x08)
	struct UPaperSprite* ZoneIndicatorSprite; // 0x428(0x08)
	struct FLinearColor ZoneIndicatorColor; // 0x430(0x10)
	struct UKangarooPawnDataAsset* FakePawnDataForDeathIndicator; // 0x440(0x08)
	struct FTimerHandle *ca40f64937; // 0x448(0x08)
	struct FTimerHandle *19ed63dc4a; // 0x450(0x08)
	struct UMaterialInstanceDynamic* *3034ded55b; // 0x458(0x08)
	bool *1fd80bacb8; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
};

// Class Kangaroo.*f0e1cf26c9
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*f0e1cf26c9 : UDataAsset {
};

// Class Kangaroo.*c7d634ba5e
// Size: 0xe8 (Inherited: 0xe8)  [layout: KHOP]
struct U*c7d634ba5e : U*7b56a687a0 {

	void GiveSLR(); // Function Kangaroo.*c7d634ba5e.GiveSLR //  // @ game+0xf7855a0
	void InfiniteHealth(); // Function Kangaroo.*c7d634ba5e.InfiniteHealth //  // @ game+0x1053c04
	void UpgradeTacticalRoll(); // Function Kangaroo.*c7d634ba5e.UpgradeTacticalRoll //  // @ game+0xda977bc
	void KangarooToggleMusic(); // Function Kangaroo.*c7d634ba5e.KangarooToggleMusic //  // @ game+0x1053c04
	void UpgradeRedDotSight(); // Function Kangaroo.*c7d634ba5e.UpgradeRedDotSight //  // @ game+0xda977bc
	void GiveMutant(); // Function Kangaroo.*c7d634ba5e.GiveMutant //  // @ game+0xf784e98
	void GiveAUG(); // Function Kangaroo.*c7d634ba5e.GiveAUG //  // @ game+0xf783548
	void GiveSCAR(); // Function Kangaroo.*c7d634ba5e.GiveSCAR //  // @ game+0xf7852d0
	void GiveDP28(); // Function Kangaroo.*c7d634ba5e.GiveDP28 //  // @ game+0xf784088
	void GiveMini14(); // Function Kangaroo.*c7d634ba5e.GiveMini14 //  // @ game+0xf784d30
	void GiveWin94(); // Function Kangaroo.*c7d634ba5e.GiveWin94 //  // @ game+0xf785b40
	void UpgradeTacticoolReloads(); // Function Kangaroo.*c7d634ba5e.UpgradeTacticoolReloads //  // @ game+0xda977bc
	void GiveUpgrade(); // Function Kangaroo.*c7d634ba5e.GiveUpgrade //  // @ game+0xda977bc
	void UpgradeShoulderPads(); // Function Kangaroo.*c7d634ba5e.UpgradeShoulderPads //  // @ game+0xda977bc
	void UpgradeTriggerHappy(); // Function Kangaroo.*c7d634ba5e.UpgradeTriggerHappy //  // @ game+0xda977bc
	void SetMapAndStage(); // Function Kangaroo.*c7d634ba5e.SetMapAndStage //  // @ game+0xdadea8c
	void GiveDoubleBarrelShotgun(); // Function Kangaroo.*c7d634ba5e.GiveDoubleBarrelShotgun //  // @ game+0xf7841f0
	void GiveKar98k(); // Function Kangaroo.*c7d634ba5e.GiveKar98k //  // @ game+0xf7844c0
	void GiveTommyGun(); // Function Kangaroo.*c7d634ba5e.GiveTommyGun //  // @ game+0xf785708
	void UpgradeVest(); // Function Kangaroo.*c7d634ba5e.UpgradeVest //  // @ game+0xda977bc
	void GiveBasicCrossbow(); // Function Kangaroo.*c7d634ba5e.GiveBasicCrossbow //  // @ game+0xf7836b0
	void UpgradePatience(); // Function Kangaroo.*c7d634ba5e.UpgradePatience //  // @ game+0xda977bc
	void GiveGroza(); // Function Kangaroo.*c7d634ba5e.GiveGroza //  // @ game+0xf784358
	void UpgradePointBlank(); // Function Kangaroo.*c7d634ba5e.UpgradePointBlank //  // @ game+0xda977bc
	void GiveBasicSawedOff(); // Function Kangaroo.*c7d634ba5e.GiveBasicSawedOff //  // @ game+0xf783ae8
	void GiveBeryl(); // Function Kangaroo.*c7d634ba5e.GiveBeryl //  // @ game+0xf783c50
	void GiveMG3(); // Function Kangaroo.*c7d634ba5e.GiveMG3 //  // @ game+0xf784a60
	void UpgradeBackpack(); // Function Kangaroo.*c7d634ba5e.UpgradeBackpack //  // @ game+0xda977bc
	void GiveSKS(); // Function Kangaroo.*c7d634ba5e.GiveSKS //  // @ game+0xf785438
	void UpgradeSniper(); // Function Kangaroo.*c7d634ba5e.UpgradeSniper //  // @ game+0xda977bc
	void GiveM249(); // Function Kangaroo.*c7d634ba5e.GiveM249 //  // @ game+0xf784790
	void UpgradeLastStand(); // Function Kangaroo.*c7d634ba5e.UpgradeLastStand //  // @ game+0xda977bc
	void GiveMicroUZI(); // Function Kangaroo.*c7d634ba5e.GiveMicroUZI //  // @ game+0xf784bc8
	void UpgradeMomentum(); // Function Kangaroo.*c7d634ba5e.UpgradeMomentum //  // @ game+0xda977bc
	void DisableInfiniteHealth(); // Function Kangaroo.*c7d634ba5e.DisableInfiniteHealth //  // @ game+0x1053c04
	void GiveM416(); // Function Kangaroo.*c7d634ba5e.GiveM416 //  // @ game+0xf7848f8
	void UpgradeLooter(); // Function Kangaroo.*c7d634ba5e.UpgradeLooter //  // @ game+0xda977bc
	void GiveS12K(); // Function Kangaroo.*c7d634ba5e.GiveS12K //  // @ game+0xf785000
	void GiveDBS(); // Function Kangaroo.*c7d634ba5e.GiveDBS //  // @ game+0xf783f20
	void UpgradeStunGrenade(); // Function Kangaroo.*c7d634ba5e.UpgradeStunGrenade //  // @ game+0xda977bc
	void UpgradeLuckyPan(); // Function Kangaroo.*c7d634ba5e.UpgradeLuckyPan //  // @ game+0xda977bc
	void UpgradeHardHitter(); // Function Kangaroo.*c7d634ba5e.UpgradeHardHitter //  // @ game+0xda977bc
	void UpgradeRunAndGun(); // Function Kangaroo.*c7d634ba5e.UpgradeRunAndGun //  // @ game+0xda977bc
	void UpgradeMolotovCocktail(); // Function Kangaroo.*c7d634ba5e.UpgradeMolotovCocktail //  // @ game+0xda977bc
	void GiveUMP45(); // Function Kangaroo.*c7d634ba5e.GiveUMP45 //  // @ game+0xf785870
	void GiveAKM(); // Function Kangaroo.*c7d634ba5e.GiveAKM //  // @ game+0xf7833e0
	void GiveBasicPistol(); // Function Kangaroo.*c7d634ba5e.GiveBasicPistol //  // @ game+0xf783818
	void UpgradeExtMagazine(); // Function Kangaroo.*c7d634ba5e.UpgradeExtMagazine //  // @ game+0xda977bc
	void GiveVector(); // Function Kangaroo.*c7d634ba5e.GiveVector //  // @ game+0xf7859d8
	void GiveM16A4(); // Function Kangaroo.*c7d634ba5e.GiveM16A4 //  // @ game+0xf784628
	void SendGameLog(); // Function Kangaroo.*c7d634ba5e.SendGameLog //  // @ game+0x1053c04
	void UpgradeExploiter(); // Function Kangaroo.*c7d634ba5e.UpgradeExploiter //  // @ game+0xda977bc
	void GiveS1897(); // Function Kangaroo.*c7d634ba5e.GiveS1897 //  // @ game+0xf785168
	void KangarooGunDamageMultiplier(); // Function Kangaroo.*c7d634ba5e.KangarooGunDamageMultiplier //  // @ game+0xdac6c7c
	void UpgradeSharpshooter(); // Function Kangaroo.*c7d634ba5e.UpgradeSharpshooter //  // @ game+0xda977bc
	void UpgradeMedicalTraining(); // Function Kangaroo.*c7d634ba5e.UpgradeMedicalTraining //  // @ game+0xda977bc
	void GiveBasicRevolver(); // Function Kangaroo.*c7d634ba5e.GiveBasicRevolver //  // @ game+0xf783980
	void UpgradeFirstBlood(); // Function Kangaroo.*c7d634ba5e.UpgradeFirstBlood //  // @ game+0xda977bc
	void UpgradeQuickdrawMagazine(); // Function Kangaroo.*c7d634ba5e.UpgradeQuickdrawMagazine //  // @ game+0xda977bc
	void GiveBizon(); // Function Kangaroo.*c7d634ba5e.GiveBizon //  // @ game+0xf783db8
};

