// BlueprintGeneratedClass ProjStickyBomb_Explosion.ProjStickyBomb_Explosion_C
// Size: 0x1370 (Inherited: 0x12f8)  [layout: KHOP]
struct AProjStickyBomb_Explosion_C : ATslExplosionEffect {
	struct F*467c63d8f7 UberGraphFrame; // 0x12f8(0x10)
	bool bEnableSurfaceSwitch; // 0x1308(0x01)
	char pad_1309[0x7]; // 0x1309(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1310(0x50)
	bool bRotateSelfToWorld; // 0x1360(0x01)
	char pad_1361[0x3]; // 0x1361(0x03)
	struct FVector NewVar; // 0x1364(0x0c)

	bool SwitchBasedOnSurface(struct FVector Temp_struct_Variable2, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_BreakVector_X); // Function ProjStickyBomb_Explosion.ProjStickyBomb_Explosion_C.SwitchBasedOnSurface // Net|NetRequest|Native|Static|Private|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
	void UserConstructionScript(); // Function ProjStickyBomb_Explosion.ProjStickyBomb_Explosion_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjStickyBomb_Explosion.ProjStickyBomb_Explosion_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_ProjStickyBomb_Explosion(); // Function ProjStickyBomb_Explosion.ProjStickyBomb_Explosion_C.ExecuteUbergraph_ProjStickyBomb_Explosion //  // @ game+0x43bab4
};

