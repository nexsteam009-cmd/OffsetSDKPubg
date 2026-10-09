// Class AIModule.*d885bbd530
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d885bbd530 : UInterface {
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBlackboardKeyType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.PathFollowingComponent
// Size: 0x4d0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UPathFollowingComponent : UActorComponent {
	char pad_210[0x120]; // 0x210(0x120)
	struct UNavMovementComponent* MovementComp; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)
	struct ANavigationData* *fef528f229; // 0x340(0x08)
	char pad_348[0x188]; // 0x348(0x188)

	void *9b73b4dac7(); // Function AIModule.PathFollowingComponent.*9b73b4dac7 //  // @ game+0xed1e87c
	void OnActorBump(); // Function AIModule.PathFollowingComponent.OnActorBump //  // @ game+0xed20790
	void OnNavDataRegistered(); // Function AIModule.PathFollowingComponent.OnNavDataRegistered //  // @ game+0xed20a60
	void *7a607f1f6e(); // Function AIModule.PathFollowingComponent.*7a607f1f6e //  // @ game+0xed1e8f8
};

// Class AIModule.BTNode
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBTNode : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct FString Tag; // 0x48(0x10)
	struct UBehaviorTree* *ee23c107f3; // 0x58(0x08)
	struct UBTCompositeNode* *f790249752; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class AIModule.BTCompositeNode
// Size: 0xe0 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UBTCompositeNode : UBTNode {
	struct TArray<struct F*695b51ef30> Children; // 0x70(0x10)
	struct TArray<struct UBTService*> Services; // 0x80(0x10)
	char pad_90[0x50]; // 0x90(0x50)
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x78 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UBTAuxiliaryNode : UBTNode {
	char pad_70[0x8]; // 0x70(0x08)
};

// Class AIModule.BTDecorator
// Size: 0x80 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator : UBTAuxiliaryNode {
	char pad_78_0 : 7; // 0x78(0x01)
	char *e6dc1be731 : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0xa8 (Inherited: 0x80)  [layout: KHOP]
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xd8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32 IntValue; // 0xa8(0x04)
	float FloatValue; // 0xac(0x04)
	struct FString StringValue; // 0xb0(0x10)
	struct FString *025fd3ad61; // 0xc0(0x10)
	bool OperationType; // 0xd0(0x01)
	enum class *91478a709c NotifyObserver; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// Class AIModule.BTService
// Size: 0x88 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x78(0x04)
	float *d42648cb01; // 0x7c(0x04)
	char *4a3099588f : 1; // 0x80(0x01)
	char *a2b0768e9b : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xb0 (Inherited: 0x88)  [layout: KHOP]
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xb8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	bool *72b73e6fee; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AIModule.AIPerceptionComponent
// Size: 0x2e0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct U*a7de13f368*> *00c9adb487; // 0x208(0x10)
	struct UClass* *fd61aa0866; // 0x218(0x08)
	char pad_220[0x10]; // 0x220(0x10)
	struct AAIController* *79dd94a519; // 0x230(0x08)
	char pad_238[0x80]; // 0x238(0x80)
	struct FMulticastDelegate OnPerceptionUpdated; // 0x2b8(0x10)
	struct FMulticastDelegate OnTargetPerceptionUpdated; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void *4bdb99c1e4(); // Function AIModule.AIPerceptionComponent.*4bdb99c1e4 //  // @ game+0xed23b38
	void *7bf5b29aa9(); // Function AIModule.AIPerceptionComponent.*7bf5b29aa9 //  // @ game+0xed1e384
	void *edc21c178a(); // Function AIModule.AIPerceptionComponent.*edc21c178a //  // @ game+0xed1e6a0
	void OnOwnerEndPlay(); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay //  // @ game+0xed20b24
	void *fad8570656(); // Function AIModule.AIPerceptionComponent.*fad8570656 //  // @ game+0xed1e944
	void *b4351ce74c(); // Function AIModule.AIPerceptionComponent.*b4351ce74c //  // @ game+0xed1e384
	void *7eca567ada(); // Function AIModule.AIPerceptionComponent.*7eca567ada //  // @ game+0xed1dcf8
};

// Class AIModule.BTTaskNode
// Size: 0x88 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char *6c86bd8a28 : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xb0 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x88(0x28)
};

// Class AIModule.BTTask_MoveTo
// Size: 0xc8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UClass* *5e10cae0a4; // 0xb8(0x08)
	float *b99abb3233; // 0xc0(0x04)
	char bObserveBlackboardValue : 1; // 0xc4(0x01)
	char *e092921612 : 1; // 0xc4(0x01)
	char *cdf72c3238 : 1; // 0xc4(0x01)
	char *30092428eb : 1; // 0xc4(0x01)
	char *9ba2bcfb00 : 1; // 0xc4(0x01)
	char *505463b1a9 : 1; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class AIModule.*0404648a7c
// Size: 0x98 (Inherited: 0x88)  [layout: KHOP]
struct U*0404648a7c : UBTTaskNode {
	struct FGameplayTag *505f91616c; // 0x88(0x08)
	bool *47a381b1dc; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float *06b1a6460a; // 0x94(0x04)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xd0 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xc8(0x01)
	char *2b0160a908 : 1; // 0xc8(0x01)
	char *0bbcc9bfc0 : 1; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class AIModule.BTTask_Wait
// Size: 0x90 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_Wait : UBTTaskNode {
	float *d351a68dff; // 0x88(0x04)
	float *d42648cb01; // 0x8c(0x04)
};

// Class AIModule.*c93646e8dd
// Size: 0xb8 (Inherited: 0x90)  [layout: KHOP]
struct U*c93646e8dd : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x90(0x28)
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x520 (Inherited: 0x4d0)  [layout: LECH - offset chi la uoc luong]
struct UCrowdFollowingComponent : UPathFollowingComponent {
	struct FVector *f45d30f173; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4e0(0x08)
	struct F*db2d87d85f AvoidanceGroup; // 0x4e8(0x04)
	struct F*db2d87d85f GroupsToAvoid; // 0x4ec(0x04)
	struct F*db2d87d85f GroupsToIgnore; // 0x4f0(0x04)
	char pad_4F4[0x2c]; // 0x4f4(0x2c)

	void *d3a6b2bf5c(); // Function AIModule.CrowdFollowingComponent.*d3a6b2bf5c //  // @ game+0xed36740
};

// Class AIModule.AIController
// Size: 0x520 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct AAIController : AController {
	char pad_490[0x38]; // 0x490(0x38)
	char bStopAILogicOnUnposses : 1; // 0x4c8(0x01)
	char *c17bcbee9b : 1; // 0x4c8(0x01)
	char *b1e5038fa2 : 1; // 0x4c8(0x01)
	char *e092921612 : 1; // 0x4c8(0x01)
	char *9d3afc9c14 : 1; // 0x4c8(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x4d0(0x08)
	struct UBrainComponent* BrainComponent; // 0x4d8(0x08)
	struct UAIPerceptionComponent* *ffaf5c0fbc; // 0x4e0(0x08)
	struct U*aa2fb33051* ActionsComp; // 0x4e8(0x08)
	struct UBlackboardComponent* Blackboard; // 0x4f0(0x08)
	struct UGameplayTasksComponent* *03ee2134c3; // 0x4f8(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x500(0x08)
	struct FMulticastDelegate ReceiveMoveCompleted; // 0x508(0x10)
	char pad_518[0x8]; // 0x518(0x08)

	void RunBehaviorTree(); // Function AIModule.AIController.RunBehaviorTree //  // @ game+0xed23b4c
	void *67b775c445(); // Function AIModule.AIController.*67b775c445 //  // @ game+0xed1e92c
	void *27e6254a65(); // Function AIModule.AIController.*27e6254a65 //  // @ game+0xed23d44
	void *bccc725f82(); // Function AIModule.AIController.*bccc725f82 //  // @ game+0xed1eba4
	void *84106269a2(); // Function AIModule.AIController.*84106269a2 //  // @ game+0xed1dce0
	void *d79af03c15(); // Function AIModule.AIController.*d79af03c15 //  // @ game+0xed1e85c
	void *c33e3d6d27(); // Function AIModule.AIController.*c33e3d6d27 //  // @ game+0xed23fc0
	void *9f3b985b19(); // Function AIModule.AIController.*9f3b985b19 //  // @ game+0xed1e614
	void *f911b339e5(); // Function AIModule.AIController.*f911b339e5 //  // @ game+0xed1d078
	void *2d4834fc36(); // Function AIModule.AIController.*2d4834fc36 //  // @ game+0xed1e574
	void OnUsingBlackBoard(); // Function AIModule.AIController.OnUsingBlackBoard //  // @ game+0x43bab4
	void K2_SetFocus(); // Function AIModule.AIController.K2_SetFocus //  // @ game+0xed1ee24
	void OnUnpossess(); // Function AIModule.AIController.OnUnpossess //  // @ game+0x43bab4
	void *4265995b26(); // Function AIModule.AIController.*4265995b26 //  // @ game+0xed1e638
	void OnPossess(); // Function AIModule.AIController.OnPossess //  // @ game+0x43bab4
	void MoveToLocation(); // Function AIModule.AIController.MoveToLocation //  // @ game+0xed1fbc0
	void UseBlackboard(); // Function AIModule.AIController.UseBlackboard //  // @ game+0xed24318
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus //  // @ game+0xed1ed78
	void *1ee6187ee6(); // Function AIModule.AIController.*1ee6187ee6 //  // @ game+0xed1e540
	void OnGameplayTaskResourcesClaimed(); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed //  // @ game+0xed208e8
	void K2_SetFocalPoint(); // Function AIModule.AIController.K2_SetFocalPoint //  // @ game+0xed1ed94
	void *57bd4787f0(); // Function AIModule.AIController.*57bd4787f0 //  // @ game+0xed1f068
};

// Class AIModule.AISense
// Size: 0x120 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x30(0x04)
	enum class EAISenseNotifyType NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* *978324fcc8; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
};

// Class AIModule.AISense_Sight
// Size: 0x200 (Inherited: 0x120)  [layout: LECH - offset chi la uoc luong]
struct UAISense_Sight : UAISense {
	char pad_120[0xb0]; // 0x120(0xb0)
	int32 MaxTracesPerTick; // 0x1d0(0x04)
	int32 MinQueriesPerTimeSliceCheck; // 0x1d4(0x04)
	double MaxTimeSlicePerTick; // 0x1d8(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	float MaxQueryImportance; // 0x1e8(0x04)
	float SightLimitQueryImportance; // 0x1ec(0x04)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class AIModule.*a7de13f368
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*a7de13f368 : UObject {
	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)  [layout: KHOP]
struct UAISenseConfig_Hearing : U*a7de13f368 {
	struct UClass* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAISenseConfig_Sight : U*a7de13f368 {
	struct UClass* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class AIModule.BlackboardComponent
// Size: 0x300 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* *143419dcad; // 0x208(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x210(0x08)
	char pad_218[0x20]; // 0x218(0x20)
	struct TArray<struct UBlackboardKeyType*> *37ea67e693; // 0x238(0x10)
	char pad_248[0xb8]; // 0x248(0xb8)

	void *a47b0c8adb(); // Function AIModule.BlackboardComponent.*a47b0c8adb //  // @ game+0xed360a8
	void *d01913ba4e(); // Function AIModule.BlackboardComponent.*d01913ba4e //  // @ game+0xed35fd8
	void *e18ae6d90d(); // Function AIModule.BlackboardComponent.*e18ae6d90d //  // @ game+0xed2fa64
	void *9c16f3fd0f(); // Function AIModule.BlackboardComponent.*9c16f3fd0f //  // @ game+0xed2fc5c
	void *78518cd365(); // Function AIModule.BlackboardComponent.*78518cd365 //  // @ game+0xed2fd58
	void *932e3808c7(); // Function AIModule.BlackboardComponent.*932e3808c7 //  // @ game+0xed2fb04
	void *8e053a8fb0(); // Function AIModule.BlackboardComponent.*8e053a8fb0 //  // @ game+0xed2f730
	void *476712320c(); // Function AIModule.BlackboardComponent.*476712320c //  // @ game+0xed36178
	void *a99e3957d4(); // Function AIModule.BlackboardComponent.*a99e3957d4 //  // @ game+0xed353a0
	void *2f5ecfffc3(); // Function AIModule.BlackboardComponent.*2f5ecfffc3 //  // @ game+0xed2ff08
	void *adc0bb7c73(); // Function AIModule.BlackboardComponent.*adc0bb7c73 //  // @ game+0xed35540
	void *8cd56205b1(); // Function AIModule.BlackboardComponent.*8cd56205b1 //  // @ game+0xed2f9c0
	void *88b0585d9d(); // Function AIModule.BlackboardComponent.*88b0585d9d //  // @ game+0xed36454
	void *c192d2b6b5(); // Function AIModule.BlackboardComponent.*c192d2b6b5 //  // @ game+0xed2f91c
	void *3efead3031(); // Function AIModule.BlackboardComponent.*3efead3031 //  // @ game+0xed2f588
	void *fa64edefd8(); // Function AIModule.BlackboardComponent.*fa64edefd8 //  // @ game+0xed2fba8
	void *6bf8826d9e(); // Function AIModule.BlackboardComponent.*6bf8826d9e //  // @ game+0xed36258
	void *724c0c05dd(); // Function AIModule.BlackboardComponent.*724c0c05dd //  // @ game+0xed352c4
	void *652a76bfbc(); // Function AIModule.BlackboardComponent.*652a76bfbc //  // @ game+0xed35470
	void *92baf18d16(); // Function AIModule.BlackboardComponent.*92baf18d16 //  // @ game+0xed2f038
	void *aa90d074fa(); // Function AIModule.BlackboardComponent.*aa90d074fa //  // @ game+0xed2d4cc
	void *6f60091f92(); // Function AIModule.BlackboardComponent.*6f60091f92 //  // @ game+0xed35f0c
	void *bf8e70bf80(); // Function AIModule.BlackboardComponent.*bf8e70bf80 //  // @ game+0xed2f7d4
	void *4c0caca840(); // Function AIModule.BlackboardComponent.*4c0caca840 //  // @ game+0xed2f878
};

// Class AIModule.AIHotSpotManager
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIResourceInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnMoveCompleted(); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted //  // @ game+0xed209a8
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void *a24b8a1df9(); // Function AIModule.AIBlueprintHelperLibrary.*a24b8a1df9 //  // @ game+0xed23bdc
	void *631ee8d908(); // Function AIModule.AIBlueprintHelperLibrary.*631ee8d908 //  // @ game+0xed1ecf0
	void *4441bd3ef4(); // Function AIModule.AIBlueprintHelperLibrary.*4441bd3ef4 //  // @ game+0xed23df8
	void GetBlackboard(); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard //  // @ game+0xed1e280
	void *926b9f11cb(); // Function AIModule.AIBlueprintHelperLibrary.*926b9f11cb //  // @ game+0xed1eea4
	void *d6e2d7890c(); // Function AIModule.AIBlueprintHelperLibrary.*d6e2d7890c //  // @ game+0xed2403c
	void *75b120776f(); // Function AIModule.AIBlueprintHelperLibrary.*75b120776f //  // @ game+0xed1ec68
	void *a9ad09d634(); // Function AIModule.AIBlueprintHelperLibrary.*a9ad09d634 //  // @ game+0xed1ebe0
	void *19090858a6(); // Function AIModule.AIBlueprintHelperLibrary.*19090858a6 //  // @ game+0xed1d0f4
	void *57b41266db(); // Function AIModule.AIBlueprintHelperLibrary.*57b41266db //  // @ game+0xed1db84
};

// Class AIModule.*b0b70a7fa7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b0b70a7fa7 : UInterface {
};

// Class AIModule.*b260fd0a1c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b260fd0a1c : UInterface {
};

// Class AIModule.DetourCrowdAIController
// Size: 0x520 (Inherited: 0x520)  [layout: KHOP]
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.GridPathAIController
// Size: 0x520 (Inherited: 0x520)  [layout: KHOP]
struct AGridPathAIController : AAIController {
};

// Class AIModule.*21d2d7b0a7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*21d2d7b0a7 : UObject {
};

// Class AIModule.*73ae6099d7
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*73ae6099d7 : U*21d2d7b0a7 {
	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32 IntValue; // 0x3c(0x04)
	bool BoolValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class AIModule.*06591b3aaa
// Size: 0x58 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct U*06591b3aaa : U*73ae6099d7 {
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char *abe5c46711 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.AIPerceptionSystem
// Size: 0x138 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAIPerceptionSystem : UObject {
	char pad_30[0x58]; // 0x30(0x58)
	struct TArray<struct UAISense*> *6558f6ab96; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x04)
	char pad_9C[0x9c]; // 0x9c(0x9c)

	void *9fac0b4006(); // Function AIModule.AIPerceptionSystem.*9fac0b4006 //  // @ game+0xed2251c
	void *79cb15920d(); // Function AIModule.AIPerceptionSystem.*79cb15920d //  // @ game+0xed219d4
	void OnPerceptionStimuliSourceEndPlay(); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay //  // @ game+0xed20be8
	void *1886937be9(); // Function AIModule.AIPerceptionSystem.*1886937be9 //  // @ game+0xed20d68
	void *ac1d086e7d(); // Function AIModule.AIPerceptionSystem.*ac1d086e7d //  // @ game+0xed1eac4
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x220 (Inherited: 0x210)  [layout: KHOP]
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x210(0x10)

	void *a58ec71de1(); // Function AIModule.AIPerceptionStimuliSourceComponent.*a58ec71de1 //  // @ game+0xed20c98
	void *8483b167bf(); // Function AIModule.AIPerceptionStimuliSourceComponent.*8483b167bf //  // @ game+0xed20f20
	void *32527c4cbb(); // Function AIModule.AIPerceptionStimuliSourceComponent.*32527c4cbb //  // @ game+0xed24214
	void *a6f557723e(); // Function AIModule.AIPerceptionStimuliSourceComponent.*a6f557723e //  // @ game+0xed24200
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense_Blueprint
// Size: 0x150 (Inherited: 0x120)  [layout: LECH - offset chi la uoc luong]
struct UAISense_Blueprint : UAISense {
	struct UClass* ListenerDataType; // 0x120(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x128(0x10)
	struct TArray<struct U*d891400943*> *e0b07711ee; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)

	void OnListenerRegistered(); // Function AIModule.AISense_Blueprint.OnListenerRegistered //  // @ game+0x43bab4
	void OnListenerUnregistered(); // Function AIModule.AISense_Blueprint.OnListenerUnregistered //  // @ game+0x43bab4
	void *5bc1bbac3d(); // Function AIModule.AISense_Blueprint.*5bc1bbac3d //  // @ game+0xed1df44
	void OnUpdate(); // Function AIModule.AISense_Blueprint.OnUpdate //  // @ game+0x43bab4
	void OnListenerUpdated(); // Function AIModule.AISense_Blueprint.OnListenerUpdated //  // @ game+0x43bab4
	void *761cc3d950(); // Function AIModule.AISense_Blueprint.*761cc3d950 //  // @ game+0xed1e0c0
	void K2_OnNewPawn(); // Function AIModule.AISense_Blueprint.K2_OnNewPawn //  // @ game+0x43bab4
};

// Class AIModule.AISense_Damage
// Size: 0x130 (Inherited: 0x120)  [layout: KHOP]
struct UAISense_Damage : UAISense {
	struct TArray<struct F*4ca244c244> *00c85e37b1; // 0x120(0x10)

	void *54fb183d8a(); // Function AIModule.AISense_Damage.*54fb183d8a //  // @ game+0xed20f34
};

// Class AIModule.AISense_Hearing
// Size: 0x190 (Inherited: 0x120)  [layout: LECH - offset chi la uoc luong]
struct UAISense_Hearing : UAISense {
	struct TArray<struct F*bcdd8a23ee> *0a26aac37b; // 0x120(0x10)
	float SpeedOfSoundSq; // 0x130(0x04)
	char pad_134[0x5c]; // 0x134(0x5c)

	void *ec3f321908(); // Function AIModule.AISense_Hearing.*ec3f321908 //  // @ game+0xed21a90
};

// Class AIModule.AISense_Prediction
// Size: 0x130 (Inherited: 0x120)  [layout: KHOP]
struct UAISense_Prediction : UAISense {
	struct TArray<struct F*f035d5608b> *00c85e37b1; // 0x120(0x10)

	void *69de18c2c3(); // Function AIModule.AISense_Prediction.*69de18c2c3 //  // @ game+0xed22778
	void *f480d3367a(); // Function AIModule.AISense_Prediction.*f480d3367a //  // @ game+0xed23158
};

// Class AIModule.AISense_Team
// Size: 0x130 (Inherited: 0x120)  [layout: KHOP]
struct UAISense_Team : UAISense {
	struct TArray<struct F*5125dd821d> *00c85e37b1; // 0x120(0x10)
};

// Class AIModule.AISense_Touch
// Size: 0x130 (Inherited: 0x120)  [layout: KHOP]
struct UAISense_Touch : UAISense {
	struct TArray<struct F*60899ceeaf> *00c85e37b1; // 0x120(0x10)

	void *097e227845(); // Function AIModule.AISense_Touch.*097e227845 //  // @ game+0xed22624
};

// Class AIModule.*050a77bab8
// Size: 0x108 (Inherited: 0x108)  [layout: KHOP]
struct U*050a77bab8 : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct UAISenseConfig_Blueprint : U*a7de13f368 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct UAISenseConfig_Damage : U*a7de13f368 {
	struct UClass* Implementation; // 0x50(0x08)
};

// Class AIModule.*834164cb7c
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*834164cb7c : U*a7de13f368 {
};

// Class AIModule.*a34f1affdc
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*a34f1affdc : U*a7de13f368 {
};

// Class AIModule.*12cf3d0611
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*12cf3d0611 : U*a7de13f368 {
};

// Class AIModule.*d891400943
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d891400943 : UObject {
};

// Class AIModule.*d23be497e7
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*d23be497e7 : U*d891400943 {
	struct F*4ca244c244 Event; // 0x30(0x30)
};

// Class AIModule.*d19596a7ea
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*d19596a7ea : U*d891400943 {
	struct F*bcdd8a23ee Event; // 0x30(0x30)
};

// Class AIModule.AISystem
// Size: 0x118 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAISystem : UAISystemBase {
	struct FStringClassReference PerceptionSystemClassName; // 0x50(0x10)
	struct FStringClassReference HotSpotManagerClassName; // 0x60(0x10)
	float AcceptanceRadius; // 0x70(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x74(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0x78(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x7c(0x01)
	bool bAcceptPartialPaths; // 0x7d(0x01)
	bool bAllowStrafing; // 0x7e(0x01)
	bool bEnableBTAITasks; // 0x7f(0x01)
	bool bAllowControllersAsEQSQuerier; // 0x80(0x01)
	bool bEnableDebuggerPlugin; // 0x81(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0x88(0x08)
	struct UEnvQueryManager* *7077128cac; // 0x90(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0x98(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> *ab5e36dfd5; // 0xa0(0x10)
	struct UAIHotSpotManager* *a15821af09; // 0xb0(0x08)
	struct U*018cf160ac* *64ee6a50fa; // 0xb8(0x08)
	char pad_C0[0x58]; // 0xc0(0x58)

	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers //  // @ game+0x135b6ac
	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose //  // @ game+0xed27fe4
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)  [layout: KHOP]
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x70(0x08)
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)  [layout: KHOP]
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size: 0x128 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UAITask_MoveTo : UAITask {
	struct FMulticastDelegate OnRequestFailed; // 0x78(0x10)
	struct FMulticastDelegate OnMoveFinished; // 0x88(0x10)
	struct F*4d27604ee0 *5b66e901d0; // 0x98(0x50)
	char pad_E8[0x40]; // 0xe8(0x40)

	void AIMoveTo(); // Function AIModule.AITask_MoveTo.AIMoveTo //  // @ game+0xed27ffc
};

// Class AIModule.EnvQueryItemType
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryItemType : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AIModule.EnvQueryContext
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryContext : UObject {
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.EnvQueryTypes
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryTypes : UObject {
};

// Class AIModule.AITask_RunEQS
// Size: 0x150 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UAITask_RunEQS : UAITask {
	char pad_78[0xd8]; // 0x78(0xd8)

	void *1cdcfbba0f(); // Function AIModule.AITask_RunEQS.*1cdcfbba0f //  // @ game+0xed303bc
};

// Class AIModule.BrainComponent
// Size: 0x270 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UBrainComponent : UActorComponent {
	struct UBlackboardComponent* BlackboardComp; // 0x210(0x08)
	struct AAIController* *79dd94a519; // 0x218(0x08)
	char pad_220[0x50]; // 0x220(0x50)

	void *073d14e0f2(); // Function AIModule.BrainComponent.*073d14e0f2 //  // @ game+0xed365c8
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic //  // @ game+0x124a490
	void *26def5d039(); // Function AIModule.BrainComponent.*26def5d039 //  // @ game+0xed2fe54
	void IsRunning(); // Function AIModule.BrainComponent.IsRunning //  // @ game+0xed2fe7c
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x3a0 (Inherited: 0x270)  [layout: LECH - offset chi la uoc luong]
struct UBehaviorTreeComponent : UBrainComponent {
	char pad_270[0x18]; // 0x270(0x18)
	struct TArray<struct UBTNode*> *e44cd6f5ca; // 0x288(0x10)
	char pad_298[0x108]; // 0x298(0x108)

	void *eb59cc4bfb(); // Function AIModule.BehaviorTreeComponent.*eb59cc4bfb //  // @ game+0xed2f67c
	void *828edd1fc3(); // Function AIModule.BehaviorTreeComponent.*828edd1fc3 //  // @ game+0xed329f4
	void *8287ea5a16(); // Function AIModule.BehaviorTreeComponent.*8287ea5a16 //  // @ game+0xed28afc
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBehaviorTree : UObject {
	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct F*f473ddfcad> RootDecoratorOps; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct UBehaviorTreeManager : UObject {
	int32 MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct F*01713da1d7> *5d0b69e3fa; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> *4ce1080eb5; // 0x48(0x10)
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char *f8ca62c8aa : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	struct UClass* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char *d747a382c7 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	struct UClass* BaseClass; // 0x38(0x08)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x38(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTFunctionLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void *39fbda8035(); // Function AIModule.BTFunctionLibrary.*39fbda8035 //  // @ game+0xed2e5d0
	void *599012651a(); // Function AIModule.BTFunctionLibrary.*599012651a //  // @ game+0xed2dfb8
	void *f5b82ea575(); // Function AIModule.BTFunctionLibrary.*f5b82ea575 //  // @ game+0xed2db70
	void *51a6a45770(); // Function AIModule.BTFunctionLibrary.*51a6a45770 //  // @ game+0xed2e3ac
	void *fdd436fa71(); // Function AIModule.BTFunctionLibrary.*fdd436fa71 //  // @ game+0xed2eb9c
	void *a6365ad34b(); // Function AIModule.BTFunctionLibrary.*a6365ad34b //  // @ game+0xed31da4
	void *036ac7640e(); // Function AIModule.BTFunctionLibrary.*036ac7640e //  // @ game+0xed2e1dc
	void *cd3acf6f50(); // Function AIModule.BTFunctionLibrary.*cd3acf6f50 //  // @ game+0xed3279c
	void GetOwnersBlackboard(); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard //  // @ game+0xed2f23c
	void *452b720f02(); // Function AIModule.BTFunctionLibrary.*452b720f02 //  // @ game+0xed32224
	void *5e7cb8003e(); // Function AIModule.BTFunctionLibrary.*5e7cb8003e //  // @ game+0xed3652c
	void *cbc8f6d3c7(); // Function AIModule.BTFunctionLibrary.*cbc8f6d3c7 //  // @ game+0xed2d9a0
	void *ba07164362(); // Function AIModule.BTFunctionLibrary.*ba07164362 //  // @ game+0xed31fe4
	void *e0b535115d(); // Function AIModule.BTFunctionLibrary.*e0b535115d //  // @ game+0xed2edb4
	void *38c7849808(); // Function AIModule.BTFunctionLibrary.*38c7849808 //  // @ game+0xed30c84
	void *e446644e95(); // Function AIModule.BTFunctionLibrary.*e446644e95 //  // @ game+0xed2dd94
	void *bdebce80be(); // Function AIModule.BTFunctionLibrary.*bdebce80be //  // @ game+0xed2d2bc
	void *0d23b805c1(); // Function AIModule.BTFunctionLibrary.*0d23b805c1 //  // @ game+0xed30ec4
	void *de24e9f6a1(); // Function AIModule.BTFunctionLibrary.*de24e9f6a1 //  // @ game+0xda95840
	void *573642b72d(); // Function AIModule.BTFunctionLibrary.*573642b72d //  // @ game+0xed2d2bc
	void *74dc3342e1(); // Function AIModule.BTFunctionLibrary.*74dc3342e1 //  // @ game+0xed3247c
	void *5594581ae0(); // Function AIModule.BTFunctionLibrary.*5594581ae0 //  // @ game+0xed31b64
	void *7758fe4bd7(); // Function AIModule.BTFunctionLibrary.*7758fe4bd7 //  // @ game+0xed30a3c
	void *c3b114e8a2(); // Function AIModule.BTFunctionLibrary.*c3b114e8a2 //  // @ game+0xed31104
	void *a0b17c5c8b(); // Function AIModule.BTFunctionLibrary.*a0b17c5c8b //  // @ game+0xed2e9bc
	void *c58710a627(); // Function AIModule.BTFunctionLibrary.*c58710a627 //  // @ game+0xed2f12c
	void *b84e02c908(); // Function AIModule.BTFunctionLibrary.*b84e02c908 //  // @ game+0xed2e798
};

// Class AIModule.*eb9826ed3b
// Size: 0xd8 (Inherited: 0xd8)  [layout: KHOP]
struct U*eb9826ed3b : UBTDecorator_Blackboard {
};

// Class AIModule.*0d3eabf951
// Size: 0xe8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*0d3eabf951 : UBTDecorator_BlackboardBase {
	float *02e80705cd; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FAIDataProviderFloatValue *23057d8a00; // 0xb0(0x30)
	enum class FAIDistanceType *e07e7f5c53; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char bUseParametrizedRadius : 1; // 0xe4(0x01)
	char *07d3bb48b7 : 1; // 0xe4(0x01)
	char bPathFindingBasedTest : 1; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
};

// Class AIModule.*f1f5cb2b50
// Size: 0xb0 (Inherited: 0xa8)  [layout: KHOP]
struct U*f1f5cb2b50 : UBTDecorator_BlackboardBase {
	struct UClass* *ff2888f939; // 0xa8(0x08)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xb8 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* *79dd94a519; // 0x80(0x08)
	struct AActor* *a0c5438e16; // 0x88(0x08)
	struct TArray<struct FName> *cac420dd0d; // 0x90(0x10)
	char pad_A0[0x10]; // 0xa0(0x10)
	char *9ff2560fe9 : 1; // 0xb0(0x01)
	char *3c04efafc1 : 1; // 0xb0(0x01)
	char *2327f85f22 : 1; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void PerformConditionCheck(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck //  // @ game+0x43bab4
	void *93e4359d27(); // Function AIModule.BTDecorator_BlueprintBase.*93e4359d27 //  // @ game+0xed2fe0c
	void ReceiveObserverDeactivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated //  // @ game+0x43bab4
	void *44502dd1d5(); // Function AIModule.BTDecorator_BlueprintBase.*44502dd1d5 //  // @ game+0xed2fe30
	void ReceiveExecutionFinish(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish //  // @ game+0x43bab4
	void ReceiveObserverDeactivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI //  // @ game+0x43bab4
	void ReceiveObserverActivatedAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI //  // @ game+0x43bab4
	void PerformConditionCheckAI(); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI //  // @ game+0x43bab4
	void ReceiveExecutionStartAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI //  // @ game+0x43bab4
	void ReceiveTick(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick //  // @ game+0x43bab4
	void ReceiveExecutionStart(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart //  // @ game+0x43bab4
	void ReceiveObserverActivated(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated //  // @ game+0x43bab4
	void ReceiveExecutionFinishAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI //  // @ game+0x43bab4
	void ReceiveTickAI(); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI //  // @ game+0x43bab4
};

// Class AIModule.*022a16761f
// Size: 0xe0 (Inherited: 0x80)  [layout: KHOP]
struct U*022a16761f : UBTDecorator {
	struct FBlackboardKeySelector *8272df22cd; // 0x80(0x28)
	enum class EGameplayContainerMatchType *b8668c3b22; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xb0(0x20)
	struct FString *025fd3ad61; // 0xd0(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xd8 (Inherited: 0x80)  [layout: KHOP]
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector *731cb7deb8; // 0x88(0x28)
	struct FBlackboardKeySelector *64b3432cf5; // 0xb0(0x28)
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0x108 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_ConeCheck : UBTDecorator {
	float *3bba0ea845; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *fdfcd6947a; // 0x88(0x28)
	struct FBlackboardKeySelector *a7b237e2f6; // 0xb0(0x28)
	struct FBlackboardKeySelector *d01101cc78; // 0xd8(0x28)
	char pad_100[0x8]; // 0x100(0x08)
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x88 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_Cooldown : UBTDecorator {
	float *afd853d674; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xe0 (Inherited: 0x80)  [layout: KHOP]
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector *731cb7deb8; // 0x80(0x28)
	struct FBlackboardKeySelector *64b3432cf5; // 0xa8(0x28)
	char *932f9dd764 : 1; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	enum class EPathExistanceQueryType *438a686db2; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct UClass* *5e10cae0a4; // 0xd8(0x08)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x80 (Inherited: 0x80)  [layout: KHOP]
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xe0 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_KeepInCone : UBTDecorator {
	float *3bba0ea845; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FBlackboardKeySelector *fdfcd6947a; // 0x88(0x28)
	struct FBlackboardKeySelector *d01101cc78; // 0xb0(0x28)
	char *bb61ff20fa : 1; // 0xd8(0x01)
	char *63a32c39e1 : 1; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class AIModule.BTDecorator_Loop
// Size: 0x90 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_Loop : UBTDecorator {
	int32 *aec7c14030; // 0x80(0x04)
	bool bInfiniteLoop; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float *89b6ec7af3; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x80 (Inherited: 0x80)  [layout: KHOP]
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.*c6dd76257a
// Size: 0x90 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct U*c6dd76257a : UBTDecorator {
	struct FGameplayTag *505f91616c; // 0x80(0x08)
	float *06b1a6460a; // 0x88(0x04)
	bool *47a381b1dc; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class AIModule.*9ea48622c3
// Size: 0x90 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct U*9ea48622c3 : UBTDecorator {
	struct FGameplayTag *505f91616c; // 0x80(0x08)
	float *06b1a6460a; // 0x88(0x04)
	bool *47a381b1dc; // 0x8c(0x01)
	bool bActivatesCooldown; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x88 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class AIModule.*1581a5d145
// Size: 0x140 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct U*1581a5d145 : UBTService_BlackboardBase {
	struct F*cef6a2976d *0255850895; // 0xb0(0x48)
	char pad_F8[0x48]; // 0xf8(0x48)
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xb0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* *79dd94a519; // 0x88(0x08)
	struct AActor* *a0c5438e16; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	char *9ff2560fe9 : 1; // 0xa8(0x01)
	char *a3e380af3a : 1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void ReceiveSearchStart(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart //  // @ game+0x43bab4
	void *905257683d(); // Function AIModule.BTService_BlueprintBase.*905257683d //  // @ game+0xed2fea4
	void ReceiveDeactivation(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation //  // @ game+0x43bab4
	void ReceiveTickAI(); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI //  // @ game+0x43bab4
	void ReceiveTick(); // Function AIModule.BTService_BlueprintBase.ReceiveTick //  // @ game+0x43bab4
	void ReceiveActivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI //  // @ game+0x43bab4
	void ReceiveActivation(); // Function AIModule.BTService_BlueprintBase.ReceiveActivation //  // @ game+0x43bab4
	void ReceiveDeactivationAI(); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI //  // @ game+0x43bab4
	void ReceiveSearchStartAI(); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI //  // @ game+0x43bab4
};

// Class AIModule.BTComposite_Selector
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode *40fd5a3195; // 0xd8(0x01)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xb8 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x1a0 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* *1fa3d2e7ce; // 0xb0(0x08)
	struct TArray<struct FEnvNamedValue> *9c8e92ad73; // 0xb8(0x10)
	struct TArray<struct F*17e34b6b79> *d19009600f; // 0xc8(0x10)
	enum class EEnvQueryRunMode *89cf7c7bcd; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FBlackboardKeySelector *9350f22a5d; // 0xe0(0x28)
	bool bUseBBKey; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct F*cef6a2976d *0255850895; // 0x110(0x48)
	char pad_158[0x48]; // 0x158(0x48)
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* *79dd94a519; // 0x88(0x08)
	struct AActor* *a0c5438e16; // 0x90(0x08)
	char pad_98[0x18]; // 0x98(0x18)
	char *9ff2560fe9 : 1; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	void *5b162ccedc(); // Function AIModule.BTTask_BlueprintBase.*5b162ccedc //  // @ game+0xed2d8fc
	void *c022bc74ae(); // Function AIModule.BTTask_BlueprintBase.*c022bc74ae //  // @ game+0xed2fee4
	void *323a7fe5b4(); // Function AIModule.BTTask_BlueprintBase.*323a7fe5b4 //  // @ game+0xed2fec8
	void ReceiveTick(); // Function AIModule.BTTask_BlueprintBase.ReceiveTick //  // @ game+0x43bab4
	void ReceiveAbortAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI //  // @ game+0x43bab4
	void *023a4f37a8(); // Function AIModule.BTTask_BlueprintBase.*023a4f37a8 //  // @ game+0xed32ab0
	void *a056e93a15(); // Function AIModule.BTTask_BlueprintBase.*a056e93a15 //  // @ game+0xed2d910
	void ReceiveTickAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI //  // @ game+0x43bab4
	void *a9ff20807e(); // Function AIModule.BTTask_BlueprintBase.*a9ff20807e //  // @ game+0xed32b28
	void ReceiveExecute(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute //  // @ game+0x43bab4
	void ReceiveAbort(); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort //  // @ game+0x43bab4
	void ReceiveExecuteAI(); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI //  // @ game+0x43bab4
};

// Class AIModule.*8edea51583
// Size: 0x90 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*8edea51583 : UBTTaskNode {
	char *852ab5fe92 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x90 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UBTTask_MakeNoise : UBTTaskNode {
	float *68a215aa3a; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class AIModule.*93cfb0c3ad
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct U*93cfb0c3ad : UBTTaskNode {
};

// Class AIModule.*619af09920
// Size: 0x90 (Inherited: 0x88)  [layout: KHOP]
struct U*619af09920 : U*93cfb0c3ad {
	struct U*10d0ce8e40* Action; // 0x88(0x08)
};

// Class AIModule.*65559b22dd
// Size: 0x100 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*65559b22dd : UBTTaskNode {
	struct UAnimationAsset* *f87b943bb9; // 0x88(0x08)
	char bLooping : 1; // 0x90(0x01)
	char *951d5e4fdb : 1; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UBehaviorTreeComponent* *cb126688a6; // 0x98(0x08)
	struct USkeletalMeshComponent* *831048f9a3; // 0xa0(0x08)
	char pad_A8[0x58]; // 0xa8(0x58)
};

// Class AIModule.BTTask_PlaySound
// Size: 0x90 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* *c9790d8c5a; // 0x88(0x08)
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x90 (Inherited: 0x88)  [layout: KHOP]
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x88(0x08)
};

// Class AIModule.*8cd04a1ad1
// Size: 0xa0 (Inherited: 0x88)  [layout: KHOP]
struct U*8cd04a1ad1 : UBTTaskNode {
	struct FGameplayTag *56f4837f5f; // 0x88(0x08)
	struct UBehaviorTree* *8d619e7a8d; // 0x90(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x98(0x08)
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.CrowdManager
// Size: 0xf0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCrowdManager : UObject {
	struct ANavigationData* *fef528f229; // 0x30(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48(0x10)
	int32 MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32 MaxAvoidedAgents; // 0x60(0x04)
	int32 MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	char pad_74_0 : 4; // 0x74(0x01)
	char bResolveCollisions : 1; // 0x74(0x01)
	char pad_75[0x7b]; // 0x75(0x7b)
};

// Class AIModule.EnvQuery
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQuery : UDataAsset {
	struct FName *bb23b48ce9; // 0x38(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x40(0x10)
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	char pad_30[0x8]; // 0x30(0x08)

	void ProvideSingleLocation(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation //  // @ game+0x43bab4
	void ProvideSingleActor(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor //  // @ game+0x43bab4
	void ProvideLocationsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet //  // @ game+0x43bab4
	void ProvideActorsSet(); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet //  // @ game+0x43bab4
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.*53c872c4cd
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*53c872c4cd : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.*df90ee5df6
// Size: 0x80 (Inherited: 0x30)  [layout: KHOP]
struct U*df90ee5df6 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	int32 QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UClass* ItemType; // 0x60(0x08)
	int32 OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FMulticastDelegate OnQueryFinishedEvent; // 0x70(0x10)

	void *5dd66232f6(); // Function AIModule.*df90ee5df6.*5dd66232f6 //  // @ game+0xed2ef94
	void EQSQueryDoneSignature__DelegateSignature(); // DelegateFunction AIModule.*df90ee5df6.EQSQueryDoneSignature__DelegateSignature //  // @ game+0x43bab4
	void *ab0e38287d(); // Function AIModule.*df90ee5df6.*ab0e38287d //  // @ game+0xed33590
	void *5d7d800717(); // Function AIModule.*df90ee5df6.*5d7d800717 //  // @ game+0xed2f488
	void *1032e5fb07(); // Function AIModule.*df90ee5df6.*1032e5fb07 //  // @ game+0xed2f508
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size: 0x140 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryManager : UObject {
	char pad_30[0x78]; // 0x30(0x78)
	struct TArray<struct F*27f7615bd8> *a908ab542c; // 0xa8(0x10)
	struct TArray<struct UEnvQueryContext*> *a21c28ce0d; // 0xb8(0x10)
	struct TArray<struct U*df90ee5df6*> *59c6fa5863; // 0xc8(0x10)
	char pad_D8[0x54]; // 0xd8(0x54)
	float MaxAllowedTestingTime; // 0x12c(0x04)
	bool bTestQueriesUsingBreadth; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 QueryCountWarningThreshold; // 0x134(0x04)
	double QueryCountWarningInterval; // 0x138(0x08)

	void RunEQSQuery(); // Function AIModule.EnvQueryManager.RunEQSQuery //  // @ game+0xed30494
};

// Class AIModule.*182104bc16
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*182104bc16 : UObject {
	int32 *0740b353fe; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryGenerator : U*182104bc16 {
	struct FString OptionName; // 0x38(0x10)
	struct UClass* *5158a89185; // 0x48(0x08)
	char *e9de6f898d : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AIModule.*61ae5a0bff
// Size: 0xc8 (Inherited: 0x58)  [layout: KHOP]
struct U*61ae5a0bff : UEnvQueryGenerator {
	struct UClass* *87fbcc5a48; // 0x58(0x08)
	struct FAIDataProviderBoolValue *b4a4fdf2b4; // 0x60(0x30)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x30)
	struct UClass* *00312115b1; // 0xc0(0x08)
};

// Class AIModule.*e0d72d443b
// Size: 0x88 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*e0d72d443b : UEnvQueryGenerator {
	struct FText *5fc49fbaf7; // 0x58(0x18)
	struct UClass* Context; // 0x70(0x08)
	struct UClass* *bf13a623b3; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	void *286f7629e7(); // Function AIModule.*e0d72d443b.*286f7629e7 //  // @ game+0xed2955c
	void DoItemGeneration(); // Function AIModule.*e0d72d443b.DoItemGeneration //  // @ game+0x43bab4
	void *fb849924ab(); // Function AIModule.*e0d72d443b.*fb849924ab //  // @ game+0xed2f31c
	void *b279df1f16(); // Function AIModule.*e0d72d443b.*b279df1f16 //  // @ game+0xed294e0
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x70 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	bool *5b5b9491be; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class AIModule.*0f2e9d456d
// Size: 0x60 (Inherited: 0x58)  [layout: KHOP]
struct U*0f2e9d456d : UEnvQueryGenerator {
	struct UClass* *e924718271; // 0x58(0x08)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)  [layout: KHOP]
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData *b284161ef9; // 0x58(0x30)
};

// Class AIModule.*4e9a2a4abe
// Size: 0x158 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*4e9a2a4abe : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *abf734903c; // 0x88(0x30)
	struct FAIDataProviderFloatValue *29d410a747; // 0xb8(0x30)
	struct FAIDataProviderFloatValue *f53d9052f7; // 0xe8(0x30)
	struct FAIDataProviderFloatValue Range; // 0x118(0x30)
	struct UClass* *9200dfbb80; // 0x148(0x08)
	char *2d20aa06af : 1; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class AIModule.*728032e09b
// Size: 0x1b0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*728032e09b : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x30)
	struct FAIDataProviderFloatValue OuterRadius; // 0xb8(0x30)
	struct FAIDataProviderIntValue *569a7cbc25; // 0xe8(0x30)
	struct FAIDataProviderIntValue *e38810b81d; // 0x118(0x30)
	struct FEnvDirection ArcDirection; // 0x148(0x20)
	struct FAIDataProviderFloatValue *ca5b525f5f; // 0x168(0x30)
	bool *dbda919240; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UClass* Center; // 0x1a0(0x08)
	char bDefineArc : 1; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x1f0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue *5723813ea1; // 0x88(0x30)
	struct FAIDataProviderFloatValue *f5cdfacd04; // 0xb8(0x30)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xe8(0x30)
	enum class *1a157b2dbc *43fe93b59b; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FEnvDirection ArcDirection; // 0x120(0x20)
	struct FAIDataProviderFloatValue *ca5b525f5f; // 0x140(0x30)
	float *f7e57f2954; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct UClass* *6e6aa06692; // 0x178(0x08)
	bool *3f89c222e2; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct FAIDataProviderFloatValue *fd3b833ace; // 0x188(0x30)
	struct FEnvTraceData TraceData; // 0x1b8(0x30)
	char bDefineArc : 1; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0xf0 (Inherited: 0x88)  [layout: KHOP]
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x88(0x30)
	struct FAIDataProviderFloatValue *f5cdfacd04; // 0xb8(0x30)
	struct UClass* *17f6d183bb; // 0xe8(0x08)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x158 (Inherited: 0xf0)  [layout: KHOP]
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue *9da21466bf; // 0xf0(0x30)
	struct UClass* NavigationFilter; // 0x120(0x08)
	struct FAIDataProviderFloatValue *df8ade319e; // 0x128(0x30)
};

// Class AIModule.EnvQueryTest
// Size: 0x1c8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryTest : U*182104bc16 {
	int32 *c0219203ff; // 0x38(0x04)
	enum class EEnvTestPurpose *47b9c2aabf; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString *7001e25438; // 0x40(0x10)
	enum class *69c2bcc591 *550413e6b6; // 0x50(0x01)
	enum class *efdf277e0b *0df15e3baa; // 0x51(0x01)
	enum class EEnvTestFilterType *b375ee85f4; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue BoolValue; // 0x58(0x30)
	struct FAIDataProviderFloatValue *9ff81952a0; // 0x88(0x30)
	struct FAIDataProviderFloatValue *a514628675; // 0xb8(0x30)
	char pad_E8[0x1]; // 0xe8(0x01)
	enum class EEnvTestScoreEquation *016812dd18; // 0xe9(0x01)
	enum class EEnvQueryTestClamping *58c46951f5; // 0xea(0x01)
	enum class EEnvQueryTestClamping *fce03034e0; // 0xeb(0x01)
	enum class EEQSNormalizationType *f6655b8d72; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FAIDataProviderFloatValue *bf0d7ea3fb; // 0xf0(0x30)
	struct FAIDataProviderFloatValue *6e717df98e; // 0x120(0x30)
	struct FAIDataProviderFloatValue *958d5ecbaf; // 0x150(0x30)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x180(0x30)
	bool bDefineReferenceValue; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	char *788bced365 : 1; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x1d8 (Inherited: 0x1c8)  [layout: KHOP]
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class *cb6d0e4da6 TestMode; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* *e2aaad833e; // 0x1d0(0x08)
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x210 (Inherited: 0x1c8)  [layout: LECH - offset chi la uoc luong]
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection *d08bdc6b0d; // 0x1c8(0x20)
	struct FEnvDirection *7be86b5d01; // 0x1e8(0x20)
	enum class *0acefd7883 TestMode; // 0x208(0x01)
	bool *1aad41c0a4; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
};

// Class AIModule.*d852157588
// Size: 0x238 (Inherited: 0x1c8)  [layout: KHOP]
struct U*d852157588 : UEnvQueryTest {
	struct FGameplayTagQuery *b728dad16e; // 0x1c8(0x48)
	bool *2556c6d3ab; // 0x210(0x01)
	enum class EGameplayContainerMatchType *b8668c3b22; // 0x211(0x01)
	char pad_212[0x6]; // 0x212(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x218(0x20)
};

// Class AIModule.*f4e6b354a9
// Size: 0x1e8 (Inherited: 0x1c8)  [layout: KHOP]
struct U*f4e6b354a9 : UEnvQueryTest {
	struct F*a0abe4af3e *8e774102b8; // 0x1c8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x240 (Inherited: 0x1c8)  [layout: KHOP]
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UClass* Context; // 0x1d0(0x08)
	struct FAIDataProviderBoolValue *bd0588f12e; // 0x1d8(0x30)
	struct FAIDataProviderBoolValue *87e1099e2a; // 0x208(0x30)
	struct UClass* *5e10cae0a4; // 0x238(0x08)
};

// Class AIModule.*775709353d
// Size: 0x270 (Inherited: 0x240)  [layout: KHOP]
struct U*775709353d : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue *df8ade319e; // 0x240(0x30)
};

// Class AIModule.*c348f4b2e5
// Size: 0x1f8 (Inherited: 0x1c8)  [layout: KHOP]
struct U*c348f4b2e5 : UEnvQueryTest {
	struct FEnvTraceData *b284161ef9; // 0x1c8(0x30)
};

// Class AIModule.*bf30ad9f52
// Size: 0x1c8 (Inherited: 0x1c8)  [layout: KHOP]
struct U*bf30ad9f52 : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x290 (Inherited: 0x1c8)  [layout: KHOP]
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1c8(0x30)
	struct FAIDataProviderBoolValue *7b96ffaa5e; // 0x1f8(0x30)
	struct FAIDataProviderFloatValue *9e84fb475f; // 0x228(0x30)
	struct FAIDataProviderFloatValue *c9679948ef; // 0x258(0x30)
	struct UClass* Context; // 0x288(0x08)
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)
};

// Class AIModule.EQSRenderingComponent
// Size: 0xa10 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UEQSRenderingComponent : UPrimitiveComponent {
	char pad_9D0[0x40]; // 0x9d0(0x40)
};

// Class AIModule.EQSTestingPawn
// Size: 0x990 (Inherited: 0x920)  [layout: LECH - offset chi la uoc luong]
struct AEQSTestingPawn : ACharacter {
	char pad_920[0x8]; // 0x920(0x08)
	struct UEnvQuery* *1fa3d2e7ce; // 0x928(0x08)
	struct TArray<struct FEnvNamedValue> *9c8e92ad73; // 0x930(0x10)
	struct TArray<struct F*17e34b6b79> *d19009600f; // 0x940(0x10)
	float *c3dc76b10d; // 0x950(0x04)
	int32 *5e4bf1af8f; // 0x954(0x04)
	enum class EEnvQueryHightlightMode *758f82d0c4; // 0x958(0x01)
	char pad_959[0x3]; // 0x959(0x03)
	char *3c092fd399 : 1; // 0x95c(0x01)
	char *fcc58310c4 : 1; // 0x95c(0x01)
	char *09ceb3bd67 : 1; // 0x95c(0x01)
	char *e262bbbad8 : 1; // 0x95c(0x01)
	char *ec1d8713f5 : 1; // 0x95c(0x01)
	char pad_95D[0x3]; // 0x95d(0x03)
	enum class EEnvQueryRunMode *fd888c6776; // 0x960(0x01)
	char pad_961[0x2f]; // 0x961(0x2f)
};

// Class AIModule.*069f45c003
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*069f45c003 : U*953343ed1f {
};

// Class AIModule.*018cf160ac
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*018cf160ac : UObject {
	char pad_30[0x30]; // 0x30(0x30)

	void *15106c7053(); // Function AIModule.*018cf160ac.*15106c7053 //  // @ game+0xed2bd9c
	void *4870323264(); // Function AIModule.*018cf160ac.*4870323264 //  // @ game+0xed29634
	void *2e90e36a2d(); // Function AIModule.*018cf160ac.*2e90e36a2d //  // @ game+0xed2a114
	void *d1fb14d351(); // Function AIModule.*018cf160ac.*d1fb14d351 //  // @ game+0xed32be0
	void *f5bf7bbda8(); // Function AIModule.*018cf160ac.*f5bf7bbda8 //  // @ game+0xed2c808
	void *e9e8295f0b(); // Function AIModule.*018cf160ac.*e9e8295f0b //  // @ game+0xed302b8
	void *5cf8b3e3db(); // Function AIModule.*018cf160ac.*5cf8b3e3db //  // @ game+0xed2d614
};

// Class AIModule.*c96415c29d
// Size: 0x500 (Inherited: 0x4d0)  [layout: LECH - offset chi la uoc luong]
struct U*c96415c29d : UPathFollowingComponent {
	struct U*018cf160ac* *8b99a88ba8; // 0x4c8(0x08)
	char pad_4D0[0x30]; // 0x4d0(0x30)
};

// Class AIModule.*10d0ce8e40
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*10d0ce8e40 : UObject {
	struct U*10d0ce8e40* *209b241355; // 0x30(0x08)
	struct U*10d0ce8e40* *8d2fc96f88; // 0x38(0x08)
	struct U*aa2fb33051* *034c0388a1; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* *143419dcad; // 0x50(0x08)
	char pad_58[0x60]; // 0x58(0x60)
	char bAllowNewSameClassInstance : 1; // 0xb8(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0xb8(0x01)
	char bShouldPauseMovement : 1; // 0xb8(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0xb8(0x01)
	char pad_B9[0x17]; // 0xb9(0x17)

	void *3be85849b5(); // Function AIModule.*10d0ce8e40.*3be85849b5 //  // @ game+0xed2d98c
	void Finish(); // Function AIModule.*10d0ce8e40.Finish //  // @ game+0xed2d874
	void *029a036603(); // Function AIModule.*10d0ce8e40.*029a036603 //  // @ game+0xed2d55c
};

// Class AIModule.*5325ef3c0a
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct U*5325ef3c0a : U*10d0ce8e40 {

	void ActionTick(); // Function AIModule.*5325ef3c0a.ActionTick //  // @ game+0x43bab4
	void ActionStart(); // Function AIModule.*5325ef3c0a.ActionStart //  // @ game+0x43bab4
	void ActionFinished(); // Function AIModule.*5325ef3c0a.ActionFinished //  // @ game+0x43bab4
	void ActionPause(); // Function AIModule.*5325ef3c0a.ActionPause //  // @ game+0x43bab4
	void ActionResume(); // Function AIModule.*5325ef3c0a.ActionResume //  // @ game+0x43bab4
};

// Class AIModule.*09f9c46baa
// Size: 0x120 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*09f9c46baa : U*10d0ce8e40 {
	struct AActor* GoalActor; // 0xd0(0x08)
	struct FVector GoalLocation; // 0xd8(0x0c)
	float AcceptableRadius; // 0xe4(0x04)
	struct UClass* FilterClass; // 0xe8(0x08)
	char bAllowStrafe : 1; // 0xf0(0x01)
	char *be5e0e0bde : 1; // 0xf0(0x01)
	char *441ea60a92 : 1; // 0xf0(0x01)
	char *cdf72c3238 : 1; // 0xf0(0x01)
	char *bc1f68fbd7 : 1; // 0xf0(0x01)
	char *59b7da3045 : 1; // 0xf0(0x01)
	char *73608d6cf8 : 1; // 0xf0(0x01)
	char pad_F1[0x2f]; // 0xf1(0x2f)
};

// Class AIModule.*119452ab8b
// Size: 0xf0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*119452ab8b : U*10d0ce8e40 {
	struct U*10d0ce8e40* *a0df9473fa; // 0xd0(0x08)
	struct U*10d0ce8e40* *86cf6e61a0; // 0xd8(0x08)
	enum class *1c84700c7d ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// Class AIModule.*9ff34681e4
// Size: 0x100 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*9ff34681e4 : U*10d0ce8e40 {
	struct TArray<struct U*10d0ce8e40*> *760d924dd4; // 0xd0(0x10)
	enum class *1c84700c7d ChildFailureHandlingMode; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct U*10d0ce8e40* *86cf6e61a0; // 0xe8(0x08)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class AIModule.*131281fcc3
// Size: 0xe0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*131281fcc3 : U*10d0ce8e40 {
	float *f71a004500; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// Class AIModule.*aa2fb33051
// Size: 0x240 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*aa2fb33051 : UActorComponent {
	struct APawn* ControlledPawn; // 0x208(0x08)
	struct TArray<struct F*5f381a4591> *89ef37c882; // 0x210(0x10)
	struct TArray<struct F*662d347f04> *c1046766fc; // 0x220(0x10)
	struct U*10d0ce8e40* *0edb06a5da; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	void *cb65af463a(); // Function AIModule.*aa2fb33051.*cb65af463a //  // @ game+0xed301c0
	void *7e9d2bc3f4(); // Function AIModule.*aa2fb33051.*7e9d2bc3f4 //  // @ game+0xed300c0
	void *a5fb2ed0c1(); // Function AIModule.*aa2fb33051.*a5fb2ed0c1 //  // @ game+0xed3003c
	void *8cf11b0413(); // Function AIModule.*aa2fb33051.*8cf11b0413 //  // @ game+0xed2ffac
};

// Class AIModule.PawnSensingComponent
// Size: 0x250 (Inherited: 0x210)  [layout: KHOP]
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0x208(0x04)
	float LOSHearingThreshold; // 0x20c(0x04)
	float SightRadius; // 0x210(0x04)
	float SensingInterval; // 0x214(0x04)
	float HearingMaxSoundAge; // 0x218(0x04)
	char bEnableSensingUpdates : 1; // 0x21c(0x01)
	char bOnlySensePlayers : 1; // 0x21c(0x01)
	char bSeePawns : 1; // 0x21c(0x01)
	char bHearNoises : 1; // 0x21c(0x01)
	char pad_21D[0xb]; // 0x21d(0x0b)
	struct FMulticastDelegate OnSeePawn; // 0x228(0x10)
	struct FMulticastDelegate OnHearNoise; // 0x238(0x10)
	float PeripheralVisionAngle; // 0x248(0x04)
	float *5c7fcabeae; // 0x24c(0x04)

	void HearNoiseDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature //  // @ game+0x43bab4
	void *5aec2ebc2b(); // Function AIModule.PawnSensingComponent.*5aec2ebc2b //  // @ game+0xed35244
	void *f8cf36cbb5(); // Function AIModule.PawnSensingComponent.*f8cf36cbb5 //  // @ game+0xed33f54
	void SeePawnDelegate__DelegateSignature(); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature //  // @ game+0x43bab4
	void *3a688249ee(); // Function AIModule.PawnSensingComponent.*3a688249ee //  // @ game+0xed348cc
	void *5da618997d(); // Function AIModule.PawnSensingComponent.*5da618997d //  // @ game+0xed2f2ec
	void *b3d0d91a30(); // Function AIModule.PawnSensingComponent.*b3d0d91a30 //  // @ game+0xed2f304
};

// Class AIModule.*396112f20e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*396112f20e : UObject {
};

