// BlueprintGeneratedClass BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C
// Size: 0x470 (Inherited: 0x400)  [layout: KHOP]
struct ABP_ReplayCurvedSpline_C : ATslReplayCurvedSpline {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UStaticMeshComponent* StaticMesh; // 0x410(0x08)
	struct USplineComponent* Spline; // 0x418(0x08)
	float Spacing; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UStaticMesh* Mesh; // 0x428(0x08)
	struct UMaterial* Material; // 0x430(0x08)
	int32 SplineIdx; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct TArray<struct UStaticMeshComponent*> StaticMeshes; // 0x440(0x10)
	struct TArray<struct FReplayFreeCamPathSections> FreeCamSections; // 0x450(0x10)
	float PrevFreeCamLength; // 0x460(0x04)
	bool IsFreePathSection; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FReplayTimeline_C* ReplayTimeline; // 0x468(0x08)

	float GetInterPoint(float CallFunc__dd07598afb_ReturnValue2, float CallFunc__3cc7671c4e_ReturnValue, float CallFunc__33fac841ba_ReturnValue); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.GetInterPoint //  // @ game+0x43bab4
	void NewFunction(); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.NewFunction //  // @ game+0x43bab4
	int32 GenFreeCamSections(int32 CallFunc__96ddb34662_ReturnValue); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.GenFreeCamSections //  // @ game+0x43bab4
	struct UStaticMeshComponent* SetMeshAndMaterial(struct UStaticMeshComponent* CurStaticMeshComp, bool Temp_bool_True_if_break_was_hit_Variable, struct UStaticMeshComponent* CallFunc_Array_Get_Item2, bool CallFunc__8c891f7bec_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, struct FRotator CallFunc__132191461d_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.SetMeshAndMaterial // Exec|Native|Event|NetResponse|Static|NetMulticast|Public|Private|Protected|Delegate|HasOutParms|BlueprintEvent|BlueprintPure // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.UserConstructionScript //  // @ game+0x43bab4
	void SetPoints(); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.SetPoints //  // @ game+0x43bab4
	void ClearAllPoints(); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.ClearAllPoints //  // @ game+0x43bab4
	bool ExecuteUbergraph_BP_ReplayCurvedSpline(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable2, bool K2Node_DynamicCast_bSuccess, bool CallFunc__8c891f7bec_ReturnValue2, bool CallFunc__6fcb96a7e2_ReturnValue2); // Function BP_ReplayCurvedSpline.BP_ReplayCurvedSpline_C.ExecuteUbergraph_BP_ReplayCurvedSpline // Net|NetReliableExec|Native|NetResponse|Static|Public|Private|Delegate|NetServer|HasOutParms|BlueprintEvent|BlueprintPure // @ game+0x43bab4
};

