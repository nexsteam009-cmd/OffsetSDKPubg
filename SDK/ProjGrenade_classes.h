// BlueprintGeneratedClass ProjGrenade.ProjGrenade_C
// Size: 0xbb8 (Inherited: 0xb80)  [layout: KHOP]
struct AProjGrenade_C : ATslProjectile {
	struct F*467c63d8f7 UberGraphFrame; // 0xb80(0x10)
	struct FVector ExplodeLocation; // 0xb90(0x0c)
	char pad_B9C[0x4]; // 0xb9c(0x04)
	struct ATslCharacter* LocalShooterCharacter; // 0xba0(0x08)
	struct UAkAudioEvent* Tinnitus_Proximity; // 0xba8(0x08)
	struct UAkAudioEvent* Tinnitus_Direct; // 0xbb0(0x08)

	void UserConstructionScript(); // Function ProjGrenade.ProjGrenade_C.UserConstructionScript //  // @ game+0x43bab4
	struct FRotator ExplodeBP(); // Function ProjGrenade.ProjGrenade_C.ExplodeBP //  // @ game+0x43bab4
	struct FHitResult ExecuteUbergraph_ProjGrenade(); // Function ProjGrenade.ProjGrenade_C.ExecuteUbergraph_ProjGrenade // Net|NetReliableNetRequest|Exec|Native|Event|NetResponse|NetServer|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|EditorOnly // @ game+0x43bab4
};

