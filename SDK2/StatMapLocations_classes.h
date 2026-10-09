// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// Size: 0x4cc (Inherited: 0x400)  [layout: KHOP]
struct AStatMapLocations_C : AActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct USceneComponent* DefaultSceneRoot; // 0x410(0x08)
	int32 CurrentLocationNumber; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FTransform CurrentTransform; // 0x420(0x30)
	float DelayBeforeStatCheck; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct FString> BeginConsoleCommands; // 0x458(0x10)
	struct TArray<struct FString> StatGroups; // 0x468(0x10)
	float DelayTimeAfterTeleport; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TArray<struct FString> StatCounterNames; // 0x480(0x10)
	struct TArray<struct FString> StatCycleNames; // 0x490(0x10)
	struct FStatLocationsWidget_C* StatsWidget; // 0x4a0(0x08)
	struct TArray<struct FString> StatsOutputArray; // 0x4a8(0x10)
	struct TArray<struct FTransform> MapLocations; // 0x4b8(0x10)
	float StartupDelay; // 0x4c8(0x04)

	struct TArray<struct FString> AppendStatDataToColumnNames(); // Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames //  // @ game+0x43bab4
	void GetCurrentLevelLocations(struct FString CallFunc__938113951d_ReturnValue); // Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations //  // @ game+0x43bab4
	struct FRotator GetMapLocations(struct FString InSection, int32 Temp_int_Array_Index_Variable2, bool K2Node_SwitchInteger2_CmpSuccess, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Split_ReturnValue, struct FString CallFunc_Split_RightS2, struct FString CallFunc_Split_RightS3, struct TArray<struct FString> CallFunc__e8860fd974_ReturnValue2, struct FString CallFunc_Array_Get_Item2, float CallFunc__2795845cef_ReturnValue, float CallFunc_BreakVector_Z, struct FVector CallFunc_MakeVector_ReturnValue3, float CallFunc_BreakRotator_Pitch); // Function StatMapLocations.StatMapLocations_C.GetMapLocations // NetRequest|NetResponse|Static|NetMulticast|UbergraphFunction|Public|Protected|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	void CreateStatWidget(); // Function StatMapLocations.StatMapLocations_C.CreateStatWidget //  // @ game+0x43bab4
	struct FString GatherStats(struct TArray<struct FString> Output, struct TArray<float> CallFunc__b634074887_InclusiveAvg, bool CallFunc__b634074887_ReturnValue, int32 CallFunc__96ddb34662_ReturnValue, struct FString CallFunc__156a5453bd_ReturnValue, struct FString CallFunc__5c08aa2dfe_ReturnValue3, struct FString CallFunc__5c08aa2dfe_ReturnValue5, struct TArray<float> CallFunc__b634074887_InclusiveAvg2, bool CallFunc__b634074887_ReturnValue2, struct FString CallFunc__e30db30ad5_ReturnValue4, struct FString CallFunc__5c08aa2dfe_ReturnValue11, struct FString CallFunc__5c08aa2dfe_ReturnValue13); // Function StatMapLocations.StatMapLocations_C.GatherStats //  // @ game+0x43bab4
	struct ATslCharacter* SetCurrentTransform(struct FTransform CallFunc_GetTransform_ReturnValue); // Function StatMapLocations.StatMapLocations_C.SetCurrentTransform // Exec|Native|Static|UbergraphFunction|Public|Protected|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	void CheckPlayerTransform(struct ATslCharacter* CallFunc__4e73af399d_ReturnValue); // Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform // NetReliableNetRequest|Static|UbergraphFunction|Public|Protected|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	struct FString MoveToDebugLocation(float CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, struct FString CallFunc__5c08aa2dfe_ReturnValue2, struct FString CallFunc__5c08aa2dfe_ReturnValue4, struct FString CallFunc__5c08aa2dfe_ReturnValue7); // Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation // NetRequest|Exec|Native|Event|NetResponse|UbergraphFunction|Public|Protected|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	struct TArray<struct FString> UserConstructionScript(); // Function StatMapLocations.StatMapLocations_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void SetUp(); // Function StatMapLocations.StatMapLocations_C.SetUp //  // @ game+0x43bab4
	void StatMapLocations(); // Function StatMapLocations.StatMapLocations_C.StatMapLocations //  // @ game+0x43bab4
	bool ExecuteUbergraph_StatMapLocations(int32 EntryPoint, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Array_Index_Variable4, struct FString CallFunc__156a5453bd_ReturnValue, struct FString CallFunc_MoveToDebugLocation_OutMoveLocation, struct ATslAirborneEjectionArea* CallFunc_Array_Get_Item, struct TArray<struct ATslPassBluezoneArea*> CallFunc_GetAllActorsOfClass_OutActors2, struct APawn* CallFunc_GetPlayerPawn_ReturnValue, bool K2Node_DynamicCast_bSuccess, struct APawn* CallFunc_GetPlayerPawn_ReturnValue2, bool CallFunc__8c891f7bec_ReturnValue4, struct FString CallFunc__5c08aa2dfe_ReturnValue3, int32 CallFunc__96ddb34662_ReturnValue5, struct FString CallFunc__43c3746773_ReturnValue, bool CallFunc__8c891f7bec_ReturnValue5); // Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations //  // @ game+0x43bab4
};

