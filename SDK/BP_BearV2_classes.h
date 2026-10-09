// BlueprintGeneratedClass BP_BearV2.BP_BearV2_C
// Size: 0x1120 (Inherited: 0x1100)  [layout: KHOP]
struct ABP_BearV2_C : ATslQuadrupedsMonster {
	struct F*467c63d8f7 UberGraphFrame; // 0x1100(0x10)
	struct USphereComponent* ServerHitSphere; // 0x1110(0x08)
	struct UAkComponent* AkSoundComp; // 0x1118(0x08)

	float FindGoodSpot(float Height, float CallFunc_BreakVector_Y, float CallFunc__33fac841ba_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_SweepPush_Hit); // Function BP_BearV2.BP_BearV2_C.FindGoodSpot //  // @ game+0x43bab4
	struct TArray<struct AActor*> SweepPush(bool Hit, struct TArray<struct FHitResult> CallFunc_CapsuleTraceMultiForObjects_OutHits); // Function BP_BearV2.BP_BearV2_C.SweepPush //  // @ game+0x43bab4
	void UserConstructionScript(); // Function BP_BearV2.BP_BearV2_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function BP_BearV2.BP_BearV2_C.ReceiveTick //  // @ game+0x43bab4
	struct FVector ExecuteUbergraph_BP_BearV2(bool CallFunc_HasAuthority_ReturnValue, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z); // Function BP_BearV2.BP_BearV2_C.ExecuteUbergraph_BP_BearV2 //  // @ game+0x43bab4
};

