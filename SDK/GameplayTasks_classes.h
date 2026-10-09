// Class GameplayTasks.GameplayTasksComponent
// Size: 0x270 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UGameplayTasksComponent : UActorComponent {
	struct TArray<struct UGameplayTask*> *3e6db28aa6; // 0x210(0x10) rep=OnRep_SimulatedTasks
	struct TArray<struct UGameplayTask*> *aad471c5fc; // 0x220(0x10)
	char pad_230[0x10]; // 0x230(0x10)
	struct TArray<struct UGameplayTask*> *e49494055d; // 0x240(0x10)
	char pad_250[0x8]; // 0x250(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks //  // @ game+0xec9ff5c
	void *f1474fcee8(); // Function GameplayTasks.GameplayTasksComponent.*f1474fcee8 //  // @ game+0xec9fb64
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName *6cd0538022; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* ChildTask; // 0x68(0x08)

	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature //  // @ game+0x43bab4
	void *c1af070d7b(); // Function GameplayTasks.GameplayTask.*c1af070d7b //  // @ game+0xec9fa94
	void *b507138ae7(); // Function GameplayTasks.GameplayTask.*b507138ae7 //  // @ game+0xec9ff70
};

// Class GameplayTasks.*2974302f6a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*2974302f6a : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *ce2bead6d3; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)  [layout: KHOP]
struct UGameplayTask_ClaimResource : UGameplayTask {

	void *8e7478f2eb(); // Function GameplayTasks.GameplayTask_ClaimResource.*8e7478f2eb //  // @ game+0xec9f69c
	void *fdf91c69c0(); // Function GameplayTasks.GameplayTask_ClaimResource.*fdf91c69c0 //  // @ game+0xec9f7d8
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)  [layout: KHOP]
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x70(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* *b5d9e7ed57; // 0xa8(0x08)

	void SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor //  // @ game+0xec9ff84
	void FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor //  // @ game+0xec9faa8
	void BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor //  // @ game+0xec9f5d0
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x70(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature //  // @ game+0x43bab4
	void *cef398cec1(); // Function GameplayTasks.GameplayTask_WaitDelay.*cef398cec1 //  // @ game+0xeca018c
};

