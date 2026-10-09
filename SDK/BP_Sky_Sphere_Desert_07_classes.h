// BlueprintGeneratedClass BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C
// Size: 0x4a0 (Inherited: 0x400)  [layout: KHOP]
struct ABP_Sky_Sphere_Desert_07_C : AActor {
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

	struct FVector UpdateSunDirection(struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Abs_ReturnValue2, float CallFunc_Lerp_ReturnValue, struct FLinearColor CallFunc__bd38fea261_ReturnValue2); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UpdateSunDirection //  // @ game+0x43bab4
	struct FVector UserConstructionScript(struct FRotator CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Pitch, struct FLinearColor CallFunc__bd38fea261_ReturnValue2); // Function BP_Sky_Sphere_Desert_07.BP_Sky_Sphere_Desert_07_C.UserConstructionScript //  // @ game+0x43bab4
};

