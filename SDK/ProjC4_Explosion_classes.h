// BlueprintGeneratedClass ProjC4_Explosion.ProjC4_Explosion_C
// Size: 0x1370 (Inherited: 0x12f8)  [layout: KHOP]
struct AProjC4_Explosion_C : ATslExplosionEffect {
	struct F*467c63d8f7 UberGraphFrame; // 0x12f8(0x10)
	bool bEnableSurfaceSwitch; // 0x1308(0x01)
	char pad_1309[0x7]; // 0x1309(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1310(0x50)
	bool bRotateSelfToWorld; // 0x1360(0x01)
	char pad_1361[0x3]; // 0x1361(0x03)
	struct FVector NewVar; // 0x1364(0x0c)

	enum class EPhysicalSurface SwitchBasedOnSurface(struct FVector Temp_struct_Variable, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_BreakVector_Y, struct APhysicsVolume* CallFunc__b8b811860b_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc__e1bdb315b2_ReturnValue); // Function ProjC4_Explosion.ProjC4_Explosion_C.SwitchBasedOnSurface // NetRequest|Exec|Native|Event|NetResponse|MulticastDelegate|Private|Delegate|NetServer|HasOutParms|NetClient|BlueprintCallable|EditorOnly|Const // @ game+0x43bab4
	void UserConstructionScript(); // Function ProjC4_Explosion.ProjC4_Explosion_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjC4_Explosion.ProjC4_Explosion_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_ProjC4_Explosion(); // Function ProjC4_Explosion.ProjC4_Explosion_C.ExecuteUbergraph_ProjC4_Explosion //  // @ game+0x43bab4
};

