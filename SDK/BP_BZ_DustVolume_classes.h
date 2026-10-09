// BlueprintGeneratedClass BP_BZ_DustVolume.BP_BZ_DustVolume_C
// Size: 0x4c9 (Inherited: 0x410)  [layout: KHOP]
struct ABP_BZ_DustVolume_C : ABZDustVolume {
	struct F*467c63d8f7 UberGraphFrame; // 0x410(0x10)
	struct UStaticMeshComponent* CubeFlippedNormals; // 0x420(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x428(0x08)
	struct UMaterialInstanceDynamic* VolumeMat_MID; // 0x430(0x08)
	float Timer; // 0x438(0x04)
	float BuildTime; // 0x43c(0x04)
	float SettleTime; // 0x440(0x04)
	float MaxDenisty; // 0x444(0x04)
	struct AExplosionEffectsActor_C* EffectActor; // 0x448(0x08)
	struct FLinearColor LightColor; // 0x450(0x10)
	struct FLinearColor DarkColor; // 0x460(0x10)
	float ColorTimer; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct UMaterialInstance*> DustWeatherMI; // 0x478(0x10)
	struct FLinearColor BZ Color; // 0x488(0x10)
	struct FString Dust Sound; // 0x498(0x10)
	struct UAkComponent* Dust AK; // 0x4a8(0x08)
	bool PreviousTestRun; // 0x4b0(0x01)
	bool PreviousTestValue; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct TArray<struct UMaterialInstance*> DustWeatherMI_Volume; // 0x4b8(0x10)
	bool Use Fake Volumetrics; // 0x4c8(0x01)

	int32 GetWeatherMats(struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, int32 Temp_int_Loop_Counter_Variable); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.GetWeatherMats //  // @ game+0x43bab4
	struct FLinearColor Set Dust Color(float StartValue, bool Temp_bool_Variable, struct FLinearColor CallFunc__53450ec709_ReturnValue); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.Set Dust Color //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ReceiveTick //  // @ game+0x43bab4
	float SpawnEffect(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SpawnEffect //  // @ game+0x43bab4
	void SetMaxDensity(); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.SetMaxDensity //  // @ game+0x43bab4
	struct FVector ExecuteUbergraph_BP_BZ_DustVolume(int32 EntryPoint, float K2Node_Event_DeltaSeconds, float K2Node_CustomEvent_BuildTime, float K2Node_CustomEvent_MaxDenisty2, float K2Node_CustomEvent_MaxDenisty, struct FVector CallFunc__a26287f0c3_ReturnValue, bool Temp_bool_Variable3, struct UGameInstance* CallFunc__f37d795282_ReturnValue, struct FTransform CallFunc__c9efaea57b_ReturnValue, struct FVector CallFunc_BreakTransform_Scale, struct FTransform CallFunc_MakeTransform_ReturnValue, struct FLinearColor CallFunc__ac44019aec_ReturnValue, struct UMaterialInstanceDynamic* CallFunc_GetWeatherMats_Dust_Mat_Instance, float CallFunc_FMax_ReturnValue, float CallFunc__d76cc25d00_ReturnValue, float CallFunc__d76cc25d00_ReturnValue2, struct FVector CallFunc__ddb38e6b42_ReturnValue2); // Function BP_BZ_DustVolume.BP_BZ_DustVolume_C.ExecuteUbergraph_BP_BZ_DustVolume // Net|Native|Event|NetMulticast|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

