// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// Size: 0x518 (Inherited: 0x4f0)  [layout: KHOP]
struct ABuff_DecreaseBreathInApnea_C : ACharacterBreathBuff {
	struct F*467c63d8f7 UberGraphFrame; // 0x4f0(0x10)
	struct USceneComponent* DefaultSceneRoot; // 0x500(0x08)
	float HealthPerTick; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UClass* DamageType; // 0x510(0x08)

	bool DecreaseHealth(struct ATslCharacter* Character, struct UBuffComponent* CallFunc__091ef04084_ReturnValue, bool CallFunc_IsValid_ReturnValue2); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.DecreaseHealth //  // @ game+0x43bab4
	enum class EBreathType UserConstructionScript(struct ATslCharacter* CallFunc__e78f9b5ef7_ReturnValue, bool CallFunc_IsInDBNO_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.UserConstructionScript //  // @ game+0x43bab4
	void TickBuff(); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.TickBuff //  // @ game+0x43bab4
	enum class EBreathType ExecuteUbergraph_Buff_DecreaseBreathInApnea(struct ATslCharacter* K2Node_Event_OtherCharacter, bool CallFunc_IsValid_ReturnValue); // Function Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C.ExecuteUbergraph_Buff_DecreaseBreathInApnea //  // @ game+0x43bab4
};

