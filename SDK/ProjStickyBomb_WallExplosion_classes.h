// BlueprintGeneratedClass ProjStickyBomb_WallExplosion.ProjStickyBomb_WallExplosion_C
// Size: 0x1370 (Inherited: 0x12f8)  [layout: KHOP]
struct AProjStickyBomb_WallExplosion_C : ATslExplosionEffect {
	struct F*467c63d8f7 UberGraphFrame; // 0x12f8(0x10)
	bool bEnableSurfaceSwitch; // 0x1308(0x01)
	char pad_1309[0x7]; // 0x1309(0x07)
	struct FVFX_Surface SurfaceVFX; // 0x1310(0x50)
	bool bRotateSelfToWorld; // 0x1360(0x01)
	char pad_1361[0x3]; // 0x1361(0x03)
	struct FVector NewVar; // 0x1364(0x0c)

	enum class EPhysicalSurface SwitchBasedOnSurface(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue); // Function ProjStickyBomb_WallExplosion.ProjStickyBomb_WallExplosion_C.SwitchBasedOnSurface // NetReliableNetRequest|Exec|Native|NetResponse|Private|Protected|Delegate|NetClient|DLLImport|BlueprintCallable|Const // @ game+0x43bab4
	void UserConstructionScript(); // Function ProjStickyBomb_WallExplosion.ProjStickyBomb_WallExplosion_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjStickyBomb_WallExplosion.ProjStickyBomb_WallExplosion_C.ReceiveBeginPlay //  // @ game+0x43bab4
	void ExecuteUbergraph_ProjStickyBomb_WallExplosion(); // Function ProjStickyBomb_WallExplosion.ProjStickyBomb_WallExplosion_C.ExecuteUbergraph_ProjStickyBomb_WallExplosion //  // @ game+0x43bab4
};

