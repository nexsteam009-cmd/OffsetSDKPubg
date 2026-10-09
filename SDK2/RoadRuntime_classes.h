// Class RoadRuntime.CrossActor
// Size: 0x440 (Inherited: 0x410)  [layout: KHOP]
struct ACrossActor : AStaticMeshActor {
	struct FString *e492499e0c; // 0x410(0x10)
	struct TArray<struct F*0dab064475> *c939be4226; // 0x420(0x10)
	struct TArray<struct F*c6df5752d6> *05d8633db8; // 0x430(0x10)

	void *a00517af02(); // Function RoadRuntime.CrossActor.*a00517af02 //  // @ game+0xfa8ef00
	void *2a92c3c974(); // Function RoadRuntime.CrossActor.*2a92c3c974 //  // @ game+0xfa8eab8
	void *1bc6c8e205(); // Function RoadRuntime.CrossActor.*1bc6c8e205 //  // @ game+0xfa8ea60
	void *798d0c54b3(); // Function RoadRuntime.CrossActor.*798d0c54b3 //  // @ game+0xfa8ecdc
	void *3c1096520e(); // Function RoadRuntime.CrossActor.*3c1096520e //  // @ game+0xfa8f124
};

// Class RoadRuntime.RoadActor
// Size: 0x478 (Inherited: 0x400)  [layout: KHOP]
struct ARoadActor : AActor {
	enum class ESplineMeshAxis *316a74ace4; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector *9056d07750; // 0x404(0x0c)
	struct FString *e492499e0c; // 0x410(0x10)
	struct USplineComponent* Spline; // 0x420(0x08)
	int32 *d03467f303; // 0x428(0x04)
	int32 *d5d008f75f; // 0x42c(0x04)
	struct UStaticMesh* *7a176d3a9a; // 0x430(0x08)
	struct TArray<struct USplineMeshComponent*> *252a975973; // 0x438(0x10)
	struct TArray<struct F*7957670ee7> *c939be4226; // 0x448(0x10)
	struct TArray<struct F*8f163f7f90> *05d8633db8; // 0x458(0x10)
	struct TArray<struct F*02d0017c62> *a6e2df999f; // 0x468(0x10)
};

