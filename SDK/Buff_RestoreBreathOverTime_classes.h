// BlueprintGeneratedClass Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C
// Size: 0x538 (Inherited: 0x4f0)  [layout: KHOP]
struct ABuff_RestoreBreathOverTime_C : ACharacterBreathBuff {
	struct F*467c63d8f7 UberGraphFrame; // 0x4f0(0x10)
	struct USceneComponent* DefaultSceneRoot; // 0x500(0x08)
	struct ATslCharacter* CharacterRef; // 0x508(0x08)
	float BreathPerTickMax; // 0x510(0x04)
	float BreathRestoreTickInterval; // 0x514(0x04)
	float BreathRestoreRestBoost; // 0x518(0x04)
	float BreathRestoreRunnin; // 0x51c(0x04)
	float DelayAfterUnderwaterSwimming; // 0x520(0x04)
	float LastTimeUnderwater; // 0x524(0x04)
	bool bCanBuff; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct FTimerHandle DelayAfterSwimmingTimerHandle; // 0x530(0x08)

	bool CanApplyBuff(enum class EBreathType CallFunc__87f978f307_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.CanApplyBuff //  // @ game+0x43bab4
	void UserConstructionScript(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.UserConstructionScript //  // @ game+0x43bab4
	void TickBuff(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.TickBuff //  // @ game+0x43bab4
	void AfterDelay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.AfterDelay //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ReceiveBeginPlay //  // @ game+0x43bab4
	float ExecuteUbergraph_Buff_RestoreBreathOverTime(bool Temp_bool_Variable, float Temp_float_Variable4, struct ATslCharacter* CallFunc__e78f9b5ef7_ReturnValue, struct ATslCharacter* K2Node_Event_OtherCharacter, enum class EBreathType CallFunc__87f978f307_ReturnValue, enum class EBreathType CallFunc__87f978f307_ReturnValue2, float CallFunc_FMax_ReturnValue); // Function Buff_RestoreBreathOverTime.Buff_RestoreBreathOverTime_C.ExecuteUbergraph_Buff_RestoreBreathOverTime // NetReliableEvent|NetResponse|Static|NetMulticast|MulticastDelegate|Private|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

