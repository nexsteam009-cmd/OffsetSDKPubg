// BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C
// Size: 0xbe0 (Inherited: 0xb80)  [layout: KHOP]
struct AProjFlashBang_C : ATslProjectile {
	struct F*467c63d8f7 UberGraphFrame; // 0xb80(0x10)
	struct UFlashbangComponent* Flashbang; // 0xb90(0x08)
	struct ATslCharacter* LocalShooterCharacter; // 0xb98(0x08)
	struct FVector ExplodeLocation; // 0xba0(0x0c)
	char pad_BAC[0x4]; // 0xbac(0x04)
	struct UClass* FlashbangEffectClass; // 0xbb0(0x08)
	struct TArray<struct UAkAudioEvent*> TinnitusSoundAks; // 0xbb8(0x10)
	float MinPower; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct UCurveFloat* AnglePower; // 0xbd0(0x08)
	struct UCurveFloat* DistancePower; // 0xbd8(0x08)

	float GetFlashBangDistance(struct FRotator CallFunc_BreakTransform_Rotation, struct FVector CallFunc__c87ee391e6_ReturnValue, float CallFunc__375f389eec_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance // NetReliableNetRequest|Native|Event|UbergraphFunction|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	float GetCameraToFlashBangAngle(struct FTransform CallFunc__661f3a5973_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle // Net|Exec|UbergraphFunction|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	bool GetTinnitusSoundIndex(int32 Index, struct FVector CallFunc_BreakTransform_Location); // Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex // Net|NetReliableNetRequest|Event|NetResponse|Static|NetMulticast|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	struct FTransform SpawnFlashBangCaputeEffect(struct ACharacter* ShooterCharacter, struct AActor* CallFunc__9cee7bdc11_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect // NetReliableNetRequest|NetResponse|Static|NetMulticast|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	bool SpawnFlashBangEffect(float FlashBangDistance, struct FTransform CallFunc_MakeTransform_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect // NetReliableNetRequest|Event|NetResponse|Static|UbergraphFunction|MulticastDelegate|Public|Private|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	void PlayTinnitusSound(bool CallFunc__cfdbb4717b_ReturnValue); // Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound //  // @ game+0x43bab4
	void UserConstructionScript(); // Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript //  // @ game+0x43bab4
	struct FHitResult ExplodeBP(); // Function ProjFlashBang.ProjFlashBang_C.ExplodeBP //  // @ game+0x43bab4
	void ExecuteUbergraph_ProjFlashBang(int32 EntryPoint, struct FRotator K2Node_Event_Rotation, struct FHitResult K2Node_Event_Impact); // Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang // NetReliableNetRequest|Event|Static|UbergraphFunction|MulticastDelegate|Public|Private|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

