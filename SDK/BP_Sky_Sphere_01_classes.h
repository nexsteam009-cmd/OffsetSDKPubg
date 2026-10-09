// BlueprintGeneratedClass BP_Sky_Sphere_01.BP_Sky_Sphere_01_C
// Size: 0x4c8 (Inherited: 0x400)  [layout: KHOP]
struct ABP_Sky_Sphere_01_C : AActor {
	struct UStaticMeshComponent* Sky Sphere mesh; // 0x400(0x08)
	struct USceneComponent* Base; // 0x408(0x08)
	struct UMaterialInstanceDynamic* Sky material; // 0x410(0x08)
	bool Refresh material; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct ADirectionalLight* Directional light actor; // 0x420(0x08)
	bool Colors determined by sun position; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float Sun height; // 0x42c(0x04)
	float Sun brightness; // 0x430(0x04)
	float Horizon falloff; // 0x434(0x04)
	struct FLinearColor Zenith color; // 0x438(0x10)
	struct FLinearColor Horizon color; // 0x448(0x10)
	struct FLinearColor Cloud color; // 0x458(0x10)
	struct FLinearColor Overall color; // 0x468(0x10)
	float Cloud speed; // 0x478(0x04)
	float Cloud opacity; // 0x47c(0x04)
	float Stars brightness; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct U*d3ff18b806* Horizon color curve; // 0x488(0x08)
	struct U*d3ff18b806* Zenith color curve; // 0x490(0x08)
	struct U*d3ff18b806* Cloud color curve; // 0x498(0x08)
	struct UMaterialInterface* SkyMat; // 0x4a0(0x08)
	float NewVar; // 0x4a8(0x04)
	float Use_Blending; // 0x4ac(0x04)
	float BlendRadius; // 0x4b0(0x04)
	float BlendHardness; // 0x4b4(0x04)
	struct FLinearColor HorizonColor; // 0x4b8(0x10)

	struct FLinearColor UpdateSunDirection(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Yaw, float CallFunc__2ed659cc9e_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, struct FVector CallFunc__a2f55c992e_ReturnValue, float CallFunc_Abs_ReturnValue2); // Function BP_Sky_Sphere_01.BP_Sky_Sphere_01_C.UpdateSunDirection //  // @ game+0x43bab4
	struct FLinearColor UserConstructionScript(struct FLinearColor CallFunc__bd38fea261_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc__2ed659cc9e_ReturnValue, struct FRotator CallFunc_K2_GetActorRotation_ReturnValue2, struct FVector CallFunc__a2f55c992e_ReturnValue); // Function BP_Sky_Sphere_01.BP_Sky_Sphere_01_C.UserConstructionScript //  // @ game+0x43bab4
};

