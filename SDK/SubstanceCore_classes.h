// Class SubstanceCore.SubstanceGraphInstance
// Size: 0x118 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USubstanceGraphInstance : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString *33c35eaf4a; // 0x38(0x10)
	struct USubstanceInstanceFactory* *156716d43d; // 0x48(0x08)
	struct TMap<uint32, struct U*24ce3b5f09*> *f9f9a0a56b; // 0x50(0x50)
	struct UMaterial* *ac596e9563; // 0xa0(0x08)
	struct TMap<int32, struct FGuid> *1c09f35050; // 0xa8(0x50)
	bool bIsFrozen; // 0xf8(0x01)
	char pad_F9[0x1f]; // 0xf9(0x1f)

	void *17476ae5a8(); // Function SubstanceCore.SubstanceGraphInstance.*17476ae5a8 //  // @ game+0xf9f7a10
	void *488ee14367(); // Function SubstanceCore.SubstanceGraphInstance.*488ee14367 //  // @ game+0xf9f83e0
	void *87f852657c(); // Function SubstanceCore.SubstanceGraphInstance.*87f852657c //  // @ game+0xf9f92a4
	void *b4668f4ab5(); // Function SubstanceCore.SubstanceGraphInstance.*b4668f4ab5 //  // @ game+0xf9f8024
	void *ebd89f008b(); // Function SubstanceCore.SubstanceGraphInstance.*ebd89f008b //  // @ game+0xf9f9954
	void *7a1b21367a(); // Function SubstanceCore.SubstanceGraphInstance.*7a1b21367a //  // @ game+0xf9f843c
	void *8fb3ad69b1(); // Function SubstanceCore.SubstanceGraphInstance.*8fb3ad69b1 //  // @ game+0xf9f7fd8
	void *de6459dc12(); // Function SubstanceCore.SubstanceGraphInstance.*de6459dc12 //  // @ game+0xf9f7dd8
	void *582b4090a3(); // Function SubstanceCore.SubstanceGraphInstance.*582b4090a3 //  // @ game+0xf9f94a0
	void *6210758a42(); // Function SubstanceCore.SubstanceGraphInstance.*6210758a42 //  // @ game+0xf9f7444
	void *7806a69027(); // Function SubstanceCore.SubstanceGraphInstance.*7806a69027 //  // @ game+0xf9f8224
	void *0be9b83fe1(); // Function SubstanceCore.SubstanceGraphInstance.*0be9b83fe1 //  // @ game+0xf9f9c40
	void *41ce9e2214(); // Function SubstanceCore.SubstanceGraphInstance.*41ce9e2214 //  // @ game+0xf9f90bc
	void *46ec79e2c3(); // Function SubstanceCore.SubstanceGraphInstance.*46ec79e2c3 //  // @ game+0xf9f978c
	void *90c55489b8(); // Function SubstanceCore.SubstanceGraphInstance.*90c55489b8 //  // @ game+0xf9f7bd8
	void *4885869969(); // Function SubstanceCore.SubstanceGraphInstance.*4885869969 //  // @ game+0xf9f7854
};

// Class SubstanceCore.*24ce3b5f09
// Size: 0x180 (Inherited: 0x30)  [layout: KHOP]
struct U*24ce3b5f09 : UObject {
	char pad_30[0x108]; // 0x30(0x108)
	int32 *5f0e8ff790; // 0x138(0x04)
	int32 *a92d8394ea; // 0x13c(0x04)
	int32 SizeX; // 0x140(0x04)
	int32 SizeY; // 0x144(0x04)
	int32 NumComponents; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FString SourceFilePath; // 0x150(0x10)
	struct FString SourceFileTimestamp; // 0x160(0x10)
	struct TArray<struct USubstanceGraphInstance*> Consumers; // 0x170(0x10)
};

// Class SubstanceCore.SubstanceInstanceFactory
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USubstanceInstanceFactory : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FString *1f5df51687; // 0x40(0x10)
	struct FString *080996afa0; // 0x50(0x10)
	struct FString *4d2bb3ee1b; // 0x60(0x10)
	enum class ESubstanceGenerationMode GenerationMode; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
};

// Class SubstanceCore.SubstanceSettings
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USubstanceSettings : UObject {
	int32 MemoryBudgetMb; // 0x30(0x04)
	int32 CPUCores; // 0x34(0x04)
	int32 AsyncLoadMipClip; // 0x38(0x04)
	int32 MaxAsyncSubstancesRenderedPerFrame; // 0x3c(0x04)
	enum class ESubstanceGenerationMode DefaultGenerationMode; // 0x40(0x01)
	enum class ESubstanceEngineType SubstanceEngine; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class SubstanceCore.*d901f1ec39
// Size: 0x210 (Inherited: 0x1a0)  [layout: LECH - offset chi la uoc luong]
struct U*d901f1ec39 : U*4b95727658 {
	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct USubstanceGraphInstance* *ede3629fee; // 0x1e0(0x08)
	enum class *4e35ac1492 AddressX; // 0x1e8(0x01)
	enum class *4e35ac1492 AddressY; // 0x1e9(0x01)
	bool *77ab5743ed; // 0x1ea(0x01)
	char pad_1EB[0x25]; // 0x1eb(0x25)

	void *6b6b398396(); // Function SubstanceCore.*d901f1ec39.*6b6b398396 //  // @ game+0xf9f7274
};

// Class SubstanceCore.SubstanceUtility
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void *d170047ae4(); // Function SubstanceCore.SubstanceUtility.*d170047ae4 //  // @ game+0xf9f8cd0
	void *516317ab67(); // Function SubstanceCore.SubstanceUtility.*516317ab67 //  // @ game+0xf9f68a0
	void *beb0dff167(); // Function SubstanceCore.SubstanceUtility.*beb0dff167 //  // @ game+0xf9f6b6c
	void *a31f4502a7(); // Function SubstanceCore.SubstanceUtility.*a31f4502a7 //  // @ game+0xf9f8d40
	void *09e0a3276b(); // Function SubstanceCore.SubstanceUtility.*09e0a3276b //  // @ game+0xf9f707c
	void *6aa4b725de(); // Function SubstanceCore.SubstanceUtility.*6aa4b725de //  // @ game+0xf9f6920
	void *febcf7dd97(); // Function SubstanceCore.SubstanceUtility.*febcf7dd97 //  // @ game+0xf9f6d88
	void *6ce25245e4(); // Function SubstanceCore.SubstanceUtility.*6ce25245e4 //  // @ game+0xf9f6938
	void *5c098b0bd8(); // Function SubstanceCore.SubstanceUtility.*5c098b0bd8 //  // @ game+0xf9f8fd4
	void *dd8220a4ec(); // Function SubstanceCore.SubstanceUtility.*dd8220a4ec //  // @ game+0xf9f69e4
	void *bf16793702(); // Function SubstanceCore.SubstanceUtility.*bf16793702 //  // @ game+0xf9f8648
	void *9865da9cf9(); // Function SubstanceCore.SubstanceUtility.*9865da9cf9 //  // @ game+0xf9f9f24
	void *0761ae57fa(); // Function SubstanceCore.SubstanceUtility.*0761ae57fa //  // @ game+0xf9f6f44
	void *325fd03251(); // Function SubstanceCore.SubstanceUtility.*325fd03251 //  // @ game+0xf9f7630
	void *1a51db32cb(); // Function SubstanceCore.SubstanceUtility.*1a51db32cb //  // @ game+0xf9f8950
	void *d1d7d92fa6(); // Function SubstanceCore.SubstanceUtility.*d1d7d92fa6 //  // @ game+0xf9f7294
	void *2cfb3b22af(); // Function SubstanceCore.SubstanceUtility.*2cfb3b22af //  // @ game+0xf9f8628
};

