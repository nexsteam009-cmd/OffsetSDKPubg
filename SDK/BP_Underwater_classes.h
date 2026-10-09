// BlueprintGeneratedClass BP_Underwater.BP_Underwater_C
// Size: 0x4b8 (Inherited: 0x428)  [layout: KHOP]
struct ABP_Underwater_C : ATslUnderwaterActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x428(0x10)
	struct UDirectionalLightComponent* CausticsDirectionalLight; // 0x438(0x08)
	struct UBillboardComponent* Billboard; // 0x440(0x08)
	float WetLensBlurFade_Blur_B2C70C3E4A4917173B3F64B8E8588721; // 0x448(0x04)
	enum class ETimelineDirection WetLensBlurFade__Direction_B2C70C3E4A4917173B3F64B8E8588721; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct UTimelineComponent* WetLensBlurFade; // 0x450(0x08)
	float WetLensDistortFade_Distort_DB03BB894275DA67C2B7AE9C6381C460; // 0x458(0x04)
	enum class ETimelineDirection WetLensDistortFade__Direction_DB03BB894275DA67C2B7AE9C6381C460; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct UTimelineComponent* WetLensDistortFade; // 0x460(0x08)
	struct ADirectionalLight* SunLightRef; // 0x468(0x08)
	struct APostProcessVolume* MainPPVolumeRef; // 0x470(0x08)
	struct UMaterialInstanceDynamic* LightFunctionInstance; // 0x478(0x08)
	struct APhysicsVolume* SwimVolumeRef; // 0x480(0x08)
	bool Tick; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FVector LL; // 0x48c(0x0c)
	bool EnableCausticsLight; // 0x498(0x01)
	bool EnableWetLensPP; // 0x499(0x01)
	bool SwimVolumeFollowsChar; // 0x49a(0x01)
	char pad_49B[0x5]; // 0x49b(0x05)
	struct UMaterialInstanceDynamic* WetLensMatInst; // 0x4a0(0x08)
	bool IsUnder; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UMaterialInstanceDynamic* UnderwaterVehicleMatInst; // 0x4b0(0x08)

	bool UserConstructionScript(); // Function BP_Underwater.BP_Underwater_C.UserConstructionScript //  // @ game+0x43bab4
	void WetLensBlurFade__FinishedFunc(); // Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__FinishedFunc //  // @ game+0x43bab4
	void WetLensBlurFade__UpdateFunc(); // Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__UpdateFunc //  // @ game+0x43bab4
	void WetLensDistortFade__FinishedFunc(); // Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__FinishedFunc //  // @ game+0x43bab4
	void WetLensDistortFade__UpdateFunc(); // Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__UpdateFunc //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_Underwater.BP_Underwater_C.ReceiveTick //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function BP_Underwater.BP_Underwater_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void UnderWater(); // Function BP_Underwater.BP_Underwater_C.UnderWater //  // @ game+0x43bab4
	void OutOfWater(); // Function BP_Underwater.BP_Underwater_C.OutOfWater //  // @ game+0x43bab4
	bool ExecuteUbergraph_BP_Underwater(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_BreakVector_X, struct ACharacter* CallFunc__81a4bcd2a0_ReturnValue, bool CallFunc_IsValid_ReturnValue3, TScriptInterface<struct UBlendableInterface> CallFunc__f752129f6c_InBlendableObject2_CastInput, TScriptInterface<struct UBlendableInterface> CallFunc__f752129f6c_InBlendableObject3_CastInput, bool Temp_bool_IsClosed_Variable3, bool Temp_bool_IsClosed_Variable4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_X6, float CallFunc__33fac841ba_ReturnValue, bool CallFunc__5a18eb01b2_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc__5a18eb01b2_ReturnValue2); // Function BP_Underwater.BP_Underwater_C.ExecuteUbergraph_BP_Underwater // Net|NetReliableNetRequest|Native|NetResponse|UbergraphFunction|MulticastDelegate|Public|Private|NetServer|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly|NetValidate // @ game+0x43bab4
};

