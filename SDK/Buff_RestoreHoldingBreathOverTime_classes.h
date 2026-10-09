// BlueprintGeneratedClass Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C
// Size: 0x538 (Inherited: 0x4f0)  [layout: KHOP]
struct ABuff_RestoreHoldingBreathOverTime_C : ACharacterBreathBuff {
	struct F*467c63d8f7 UberGraphFrame; // 0x4f0(0x10)
	struct USceneComponent* DefaultSceneRoot; // 0x500(0x08)
	struct ATslCharacter* CharacterRef; // 0x508(0x08)
	float BreathPerTickMax; // 0x510(0x04)
	float BreathRestoreTickInterval; // 0x514(0x04)
	float BreathRestoreRestBoost; // 0x518(0x04)
	float BreathRestoreRunnin; // 0x51c(0x04)
	float DelayAfterHolding; // 0x520(0x04)
	float LastTimeUnderwater; // 0x524(0x04)
	bool bCanBuff; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct FTimerHandle DelayAfterHoldingTimerHandle; // 0x530(0x08)

	bool CanApplyBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.CanApplyBuff //  // @ game+0x43bab4
	void UserConstructionScript(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void TickBuff(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.TickBuff //  // @ game+0x43bab4
	void AfterDelay(); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.AfterDelay //  // @ game+0x43bab4
	bool ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime(enum class EBreathType CallFunc__87f978f307_ReturnValue, DelegateProperty _69bd57bce3_OutputDelegate, bool CallFunc__9f41ad5cef_ReturnValue, float CallFunc__e5e1a20ae9_ReturnValue, float CallFunc_FMax_ReturnValue); // Function Buff_RestoreHoldingBreathOverTime.Buff_RestoreHoldingBreathOverTime_C.ExecuteUbergraph_Buff_RestoreHoldingBreathOverTime // NetReliableExec|Native|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

