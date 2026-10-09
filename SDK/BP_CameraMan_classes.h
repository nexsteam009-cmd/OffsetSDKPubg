// BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C
// Size: 0x458 (Inherited: 0x400)  [layout: KHOP]
struct ABP_CameraMan_C : AActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UCameraComponent* Camera; // 0x410(0x08)
	struct USpringArmComponent* SpringArm; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct ATslCharacter* ParentRef; // 0x428(0x08)
	bool bInitialized; // 0x430(0x01)
	bool bIsAttached; // 0x431(0x01)
	bool bLookAtTarget; // 0x432(0x01)
	bool bAutoZoom; // 0x433(0x01)
	char pad_434[0x4]; // 0x434(0x04)
	struct UCurveFloat* DistanceZoomCurve; // 0x438(0x08)
	float YawRotation; // 0x440(0x04)
	float YawRotationRate; // 0x444(0x04)
	float TargetOffsetZ; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ATslWheeledVehicle* ParentRefMoto; // 0x450(0x08)

	void Init_Moto(struct ATslWheeledVehicle* ParentRef); // Function BP_CameraMan.BP_CameraMan_C.Init_Moto //  // @ game+0x43bab4
	void Init(); // Function BP_CameraMan.BP_CameraMan_C.Init //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveTick //  // @ game+0x43bab4
	void ReceiveDestroyed(); // Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed //  // @ game+0x43bab4
	struct FHitResult ExecuteUbergraph_BP_CameraMan(int32 EntryPoint, struct FTransform CallFunc_MakeTransform_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc__375f389eec_ReturnValue, float CallFunc__3cc7671c4e_ReturnValue, float CallFunc__3cc7671c4e_ReturnValue2, float CallFunc__1aa5021b94_ReturnValue, bool CallFunc__452c9c1033_ReturnValue2, struct FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult2, float CallFunc__375f389eec_ReturnValue2, struct FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, struct FVector CallFunc__363bbc0483_ReturnValue2, struct FRotator CallFunc__4d228821ad_ReturnValue); // Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan // NetReliableNetRequest|Native|Event|NetResponse|NetMulticast|Public|Protected|Delegate|HasOutParms|NetClient|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly|NetValidate // @ game+0x43bab4
};

