// BlueprintGeneratedClass Buff_DamageOverTime.Buff_DamageOverTime_C
// Size: 0x510 (Inherited: 0x4e8)  [layout: KHOP]
struct ABuff_DamageOverTime_C : ATslBuff {
	struct F*467c63d8f7 UberGraphFrame; // 0x4e8(0x10)
	struct USceneComponent* DefaultSceneRoot; // 0x4f8(0x08)
	float BaseDamage; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UClass* DamageType; // 0x508(0x08)

	void UserConstructionScript(); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.UserConstructionScript //  // @ game+0x43bab4
	void TickBuff(); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.TickBuff //  // @ game+0x43bab4
	void ExecuteUbergraph_Buff_DamageOverTime(int32 EntryPoint, struct APawn* CallFunc__fd1296f09c_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function Buff_DamageOverTime.Buff_DamageOverTime_C.ExecuteUbergraph_Buff_DamageOverTime // NetReliableExec|Event|NetMulticast|Public|Protected|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

