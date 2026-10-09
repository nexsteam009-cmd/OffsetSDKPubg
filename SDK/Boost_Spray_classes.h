// BlueprintGeneratedClass Boost_Spray.Boost_Spray_C
// Size: 0x45c (Inherited: 0x410)  [layout: KHOP]
struct ABoost_Spray_C : ATslPhysicsBody {
	struct F*467c63d8f7 UberGraphFrame; // 0x410(0x10)
	struct USphereComponent* SmallRadiusSphere; // 0x420(0x08)
	struct U*b9332103eb* TslFPPShadowSupport; // 0x428(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x430(0x08)
	struct UAnimSequence* Animation; // 0x438(0x08)
	float Delay; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct FTimerHandle TimerHandle; // 0x448(0x08)
	struct FVector LocalBaseVelocity; // 0x450(0x0c)

	void CleanupTimers(); // Function Boost_Spray.Boost_Spray_C.CleanupTimers //  // @ game+0x43bab4
	struct FTransform UserConstructionScript(); // Function Boost_Spray.Boost_Spray_C.UserConstructionScript // NetReliableNative|Static|Public|Private|Protected|Delegate|NetClient|BlueprintCallable|BlueprintEvent|Const // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function Boost_Spray.Boost_Spray_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ReceiveTick(); // Function Boost_Spray.Boost_Spray_C.ReceiveTick //  // @ game+0x43bab4
	bool ExecuteUbergraph_Boost_Spray(struct ATslCharacter* K2Node_DynamicCast_AsTsl_Character, bool CallFunc_IsValid_ReturnValue3, struct U*617bca60e2* CallFunc__64d008ed3b_ReturnValue); // Function Boost_Spray.Boost_Spray_C.ExecuteUbergraph_Boost_Spray //  // @ game+0x43bab4
};

