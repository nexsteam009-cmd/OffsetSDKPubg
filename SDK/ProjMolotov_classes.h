// BlueprintGeneratedClass ProjMolotov.ProjMolotov_C
// Size: 0xc98 (Inherited: 0xc10)  [layout: KHOP]
struct AProjMolotov_C : ATslProjectileMolotov {
	struct F*467c63d8f7 UberGraphFrame; // 0xc10(0x10)
	struct UCapsuleComponent* PotatoCapsule; // 0xc20(0x08)
	struct TArray<struct FRotator> InitialTraceArray; // 0xc28(0x10)
	bool bInitialTraceComplete; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
	struct TArray<struct FHitResult> ConfirmedHitArray; // 0xc40(0x10)
	bool bHitArrayProcessed; // 0xc50(0x01)
	char pad_C51[0x7]; // 0xc51(0x07)
	struct TArray<struct USphereComponent*> SpreadCompArray; // 0xc58(0x10)
	int32 SpreadIndex; // 0xc68(0x04)
	int32 DirectionIndex; // 0xc6c(0x04)
	int32 StepsPerTick; // 0xc70(0x04)
	float SpreadLenXY; // 0xc74(0x04)
	float SpreadLenZ; // 0xc78(0x04)
	int32 ActorSpawnerIndex; // 0xc7c(0x04)
	int32 InstanceCountMax; // 0xc80(0x04)
	int32 MaterialAdditiveInstanceCount; // 0xc84(0x04)
	int32 MaxMaterialAdditiveCount; // 0xc88(0x04)
	char pad_C8C[0x4]; // 0xc8c(0x04)
	struct UClass* DamageFieldClass; // 0xc90(0x08)

	void DisableParticle(); // Function ProjMolotov.ProjMolotov_C.DisableParticle //  // @ game+0x43bab4
	bool TickActorSpawner(int32 CallFunc__f39acf2f68_ReturnValue, bool CallFunc__cfdbb4717b_ReturnValue, struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue); // Function ProjMolotov.ProjMolotov_C.TickActorSpawner // Net|Exec|NetResponse|NetMulticast|MulticastDelegate|Public|Delegate|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	float TickSpread(bool CallFunc__8c891f7bec_ReturnValue, int32 CallFunc__f39acf2f68_ReturnValue3, bool CallFunc__2845f0168c_ReturnValue, float CallFunc__bd259b9ff3_ReturnValue, struct FRotator CallFunc_MakeRotator_ReturnValue, struct TArray<struct AActor*> Temp_object_Variable2, struct FVector CallFunc__ad1a6ecfbd_ReturnValue, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, struct FVector CallFunc_BreakHitResult_ImpactPoint, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc__cfdbb4717b_ReturnValue, struct FVector CallFunc__363bbc0483_ReturnValue4, struct FVector CallFunc_BreakHitResult_ImpactPoint2, struct FVector CallFunc_BreakHitResult_ImpactNormal2, struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat2, struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent2, bool CallFunc__e122bfc350_ReturnValue); // Function ProjMolotov.ProjMolotov_C.TickSpread // Net|NetReliableNative|Event|NetResponse|Static|MulticastDelegate|Public|Delegate|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	struct FHitResult AddSphereColl(struct USphereComponent* CallFunc_AddComponent_ReturnValue, struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue); // Function ProjMolotov.ProjMolotov_C.AddSphereColl // Net|Exec|Native|Event|NetResponse|MulticastDelegate|Public|Delegate|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
	void UserConstructionScript(); // Function ProjMolotov.ProjMolotov_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjMolotov.ProjMolotov_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void SimulationVolumetricSpreadTick_BP(); // Function ProjMolotov.ProjMolotov_C.SimulationVolumetricSpreadTick_BP //  // @ game+0x43bab4
	struct FHitResult ExplodeBP(); // Function ProjMolotov.ProjMolotov_C.ExplodeBP //  // @ game+0x43bab4
	struct FVector Multi_TickSpread(); // Function ProjMolotov.ProjMolotov_C.Multi_TickSpread //  // @ game+0x43bab4
	void OnEnterWater_Event(); // Function ProjMolotov.ProjMolotov_C.OnEnterWater_Event //  // @ game+0x43bab4
	bool ExecuteUbergraph_ProjMolotov(int32 EntryPoint); // Function ProjMolotov.ProjMolotov_C.ExecuteUbergraph_ProjMolotov // Net|NetRequest|Exec|Native|Event|UbergraphFunction|MulticastDelegate|Public|Private|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

