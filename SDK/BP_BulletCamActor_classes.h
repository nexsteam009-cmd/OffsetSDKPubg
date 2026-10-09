// BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C
// Size: 0x430 (Inherited: 0x400)  [layout: KHOP]
struct ABP_BulletCamActor_C : AActor {
	struct F*467c63d8f7 UberGraphFrame; // 0x400(0x10)
	struct UCameraComponent* Camera; // 0x410(0x08)
	struct USpringArmComponent* SpringArm; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct ATslWeapon_Trajectory* WeaponRef; // 0x428(0x08)

	void Init(struct ATslWeapon_Trajectory* NewParam); // Function BP_BulletCamActor.BP_BulletCamActor_C.Init //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick //  // @ game+0x43bab4
	struct AActor* ExecuteUbergraph_BP_BulletCamActor(struct FVector CallFunc__cb53b0e3b7_ReturnValue, struct FTransform CallFunc_MakeTransform_ReturnValue, struct FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_IsValid_ReturnValue); // Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor // NetRequest|Exec|NetResponse|MulticastDelegate|Protected|HasOutParms|HasDefaults|NetClient|BlueprintEvent|EditorOnly|Const // @ game+0x43bab4
};

