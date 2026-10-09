// Class CustomizableObject.CustomizableSkeletalComponent
// Size: 0x4e0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UCustomizableSkeletalComponent : USceneComponent {
	bool *6f7e833163; // 0x478(0x01)
	float *02f7e673a3; // 0x47c(0x04)
	struct UCustomizableObjectInstance* CustomizableObjectInstance; // 0x480(0x08)
	char pad_488[0x48]; // 0x488(0x48)
	struct USkeletalMesh* *9ba0f0bf2b; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void *7b0ef530f6(); // Function CustomizableObject.CustomizableSkeletalComponent.*7b0ef530f6 //  // @ game+0xf858dcc
};

// Class CustomizableObject.*0b03c75d9b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*0b03c75d9b : UObject {
};

// Class CustomizableObject.*5fd460ff38
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*5fd460ff38 : U*0b03c75d9b {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class CustomizableObject.CustomizableObjectInstance
// Size: 0x210 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCustomizableObjectInstance : UObject {
	struct UCustomizableObject* CustomizableObject; // 0x30(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x38(0x08)
	struct TArray<struct F*6dbe8dcf1d> BoolParameters; // 0x40(0x10)
	struct TArray<struct F*97f8ccbf76> IntParameters; // 0x50(0x10)
	struct TArray<struct F*4049a60e61> FloatParameters; // 0x60(0x10)
	struct TArray<struct F*35ffc657fd> *5d9b3ae08a; // 0x70(0x10)
	struct TArray<struct F*e0145c7e20> *f167615e44; // 0x80(0x10)
	struct TArray<struct F*a89ef57ebe> *70db662ad2; // 0x90(0x10)
	bool bBuildParameterDecorations; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastDelegate UpdatedDelegate; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	struct FString *5264d4d0d5; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FGuid *ea2b27d7a8; // 0x1e0(0x10)
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct U*eb1481a0b6* *cd6d36f036; // 0x1f8(0x08)
	char pad_200[0x10]; // 0x200(0x10)

	void Clone(); // Function CustomizableObject.CustomizableObjectInstance.Clone //  // @ game+0xf85353c
	void *ad229f5699(); // Function CustomizableObject.CustomizableObjectInstance.*ad229f5699 //  // @ game+0xf857ee4
	void *513fbae656(); // Function CustomizableObject.CustomizableObjectInstance.*513fbae656 //  // @ game+0xf8542b0
	void *c8da5ba312(); // Function CustomizableObject.CustomizableObjectInstance.*c8da5ba312 //  // @ game+0xf8545e4
	void *4288ff26b9(); // Function CustomizableObject.CustomizableObjectInstance.*4288ff26b9 //  // @ game+0xf856f7c
	void *12c53c4a05(); // Function CustomizableObject.CustomizableObjectInstance.*12c53c4a05 //  // @ game+0xf85518c
	void *c4553edb0c(); // Function CustomizableObject.CustomizableObjectInstance.*c4553edb0c //  // @ game+0xf85584c
	void *28d611228c(); // Function CustomizableObject.CustomizableObjectInstance.*28d611228c //  // @ game+0xf854224
	void *ba00456c32(); // Function CustomizableObject.CustomizableObjectInstance.*ba00456c32 //  // @ game+0xf856a58
	void *4fe64159a4(); // Function CustomizableObject.CustomizableObjectInstance.*4fe64159a4 //  // @ game+0xf853b90
	void *2da1c57722(); // Function CustomizableObject.CustomizableObjectInstance.*2da1c57722 //  // @ game+0xf853584
	void *f6598bb77d(); // Function CustomizableObject.CustomizableObjectInstance.*f6598bb77d //  // @ game+0xf8554a4
	void *2961f51b0a(); // Function CustomizableObject.CustomizableObjectInstance.*2961f51b0a //  // @ game+0xf8579d4
	void *643433e339(); // Function CustomizableObject.CustomizableObjectInstance.*643433e339 //  // @ game+0xf856c10
	void *39bd236157(); // Function CustomizableObject.CustomizableObjectInstance.*39bd236157 //  // @ game+0xf857cb8
	void *4030c0e1c0(); // Function CustomizableObject.CustomizableObjectInstance.*4030c0e1c0 //  // @ game+0xf853884
	void *5f161d3d8b(); // Function CustomizableObject.CustomizableObjectInstance.*5f161d3d8b //  // @ game+0xf8559e0
	void *bf2f6e9977(); // Function CustomizableObject.CustomizableObjectInstance.*bf2f6e9977 //  // @ game+0xf856808
	void *8695a914ec(); // Function CustomizableObject.CustomizableObjectInstance.*8695a914ec //  // @ game+0xf8547fc
	void *275ffd82cb(); // Function CustomizableObject.CustomizableObjectInstance.*275ffd82cb //  // @ game+0xf856dfc
	void *fd06235172(); // Function CustomizableObject.CustomizableObjectInstance.*fd06235172 //  // @ game+0xf853d10
	void *b2d052b8dc(); // Function CustomizableObject.CustomizableObjectInstance.*b2d052b8dc //  // @ game+0xf858c50
	void *89ddfa64dd(); // Function CustomizableObject.CustomizableObjectInstance.*89ddfa64dd //  // @ game+0xf853ebc
	void *a4d2943cb4(); // Function CustomizableObject.CustomizableObjectInstance.*a4d2943cb4 //  // @ game+0xf855b74
	void *d261a6088b(); // Function CustomizableObject.CustomizableObjectInstance.*d261a6088b //  // @ game+0xf853704
	void *c967a9f40e(); // Function CustomizableObject.CustomizableObjectInstance.*c967a9f40e //  // @ game+0xf856c10
	void *3c0acf8984(); // Function CustomizableObject.CustomizableObjectInstance.*3c0acf8984 //  // @ game+0xf854068
	void *9798eac95f(); // Function CustomizableObject.CustomizableObjectInstance.*9798eac95f //  // @ game+0xf8556b8
	void *baf23d1b60(); // Function CustomizableObject.CustomizableObjectInstance.*baf23d1b60 //  // @ game+0xf855310
	void *7b0ef530f6(); // Function CustomizableObject.CustomizableObjectInstance.*7b0ef530f6 //  // @ game+0xf858cf4
};

// Class CustomizableObject.*eb1481a0b6
// Size: 0x3f8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*eb1481a0b6 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*3ebb68acbd> *27395ee835; // 0x38(0x10)
	struct TArray<struct F*883990099c> *7cb8661b74; // 0x48(0x10)
	struct TArray<struct F*ae740c5422> *587e464075; // 0x58(0x10)
	char pad_68[0x88]; // 0x68(0x88)
	struct TArray<struct F*185f902222> *185f902222; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TMap<struct FString, struct UTexture2D*> *32dc690911; // 0x110(0x50)
	char pad_160[0x1c8]; // 0x160(0x1c8)
	struct TArray<struct UMaterialInterface*> *00c48f7564; // 0x328(0x10)
	char pad_338[0xa0]; // 0x338(0xa0)
	struct TArray<struct UPhysicsAsset*> *d79cb70ea9; // 0x3d8(0x10)
	char pad_3E8[0x10]; // 0x3e8(0x10)
};

// Class CustomizableObject.*14dc4d0e3f
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*14dc4d0e3f : UObject {
};

// Class CustomizableObject.*2c4c0e1480
// Size: 0xd0 (Inherited: 0x30)  [layout: KHOP]
struct U*2c4c0e1480 : UObject {
	struct TMap<struct FString, struct FString> Materials; // 0x30(0x50)
	struct TMap<struct FString, struct F*6645ece8da> Textures; // 0x80(0x50)
};

// Class CustomizableObject.CustomizableObject
// Size: 0x2d0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCustomizableObject : UObject {
	struct USkeletalMesh* ReferenceSkeletalMesh; // 0x30(0x08)
	struct UStaticMesh* *1ffb469a92; // 0x38(0x08)
	enum class ECustomizableObjectRelevancy Relevancy; // 0x40(0x01)
	bool *ce8188f123; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TArray<struct UMaterialInterface*> *00c48f7564; // 0x48(0x10)
	struct TArray<struct F*2b4fd84610> *3310a4ec61; // 0x58(0x10)
	struct TMap<struct FString, struct F*f7667cd97f> *f699bf324d; // 0x68(0x50)
	struct TArray<struct UMorphTarget*> *81005e1fdc; // 0xb8(0x10)
	struct TArray<struct F*8f929dcded> *ab67e16a6b; // 0xc8(0x10)
	struct FGuid *428efedcd7; // 0xd8(0x10)
	struct TArray<struct F*eeb0457f1d> *9a202a1507; // 0xe8(0x10)
	char pad_F8[0xa8]; // 0xf8(0xa8)
	struct TMap<struct FString, struct F*ce08bc1e39> *0c2a5d226e; // 0x1a0(0x50)
	struct TMap<struct FString, struct F*ce08bc1e39> *9d9b4f1efb; // 0x1f0(0x50)
	struct TMap<struct FString, struct UPhysicsAsset*> *9478c8582b; // 0x240(0x50)
	struct U*2c4c0e1480* MaskOutCache; // 0x290(0x20)
	bool *6de95b9d10; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct U*2c4c0e1480* *80c8545253; // 0x2b8(0x08)
	char pad_2C0[0x10]; // 0x2c0(0x10)

	void *35149d5929(); // Function CustomizableObject.CustomizableObject.*35149d5929 //  // @ game+0xf854bb0
	void CreateInstance(); // Function CustomizableObject.CustomizableObject.CreateInstance //  // @ game+0xf853560
	void *16ac76f4d6(); // Function CustomizableObject.CustomizableObject.*16ac76f4d6 //  // @ game+0xf85455c
	void *dffe78cc56(); // Function CustomizableObject.CustomizableObject.*dffe78cc56 //  // @ game+0xf854a0c
	void *450481a2c6(); // Function CustomizableObject.CustomizableObject.*450481a2c6 //  // @ game+0xf855ec8
	void *8b7935d937(); // Function CustomizableObject.CustomizableObject.*8b7935d937 //  // @ game+0xf8547e4
	void *83079f04f3(); // Function CustomizableObject.CustomizableObject.*83079f04f3 //  // @ game+0xf856774
	void *a5cb23f7a5(); // Function CustomizableObject.CustomizableObject.*a5cb23f7a5 //  // @ game+0xf856154
	void *87e2f6b692(); // Function CustomizableObject.CustomizableObject.*87e2f6b692 //  // @ game+0xf855eec
	void *c935fd177b(); // Function CustomizableObject.CustomizableObject.*c935fd177b //  // @ game+0xf858cdc
	void *ed194f7fd3(); // Function CustomizableObject.CustomizableObject.*ed194f7fd3 //  // @ game+0xf853a10
	void *b16aa6ece1(); // Function CustomizableObject.CustomizableObject.*b16aa6ece1 //  // @ game+0xf854c40
	void *f428d97f8e(); // Function CustomizableObject.CustomizableObject.*f428d97f8e //  // @ game+0xf856488
	void *977d329bb4(); // Function CustomizableObject.CustomizableObject.*977d329bb4 //  // @ game+0xf85449c
	void *4d74c329e4(); // Function CustomizableObject.CustomizableObject.*4d74c329e4 //  // @ game+0xf855028
	void *9f23a36c97(); // Function CustomizableObject.CustomizableObject.*9f23a36c97 //  // @ game+0xf854e64
	void *b233406e67(); // Function CustomizableObject.CustomizableObject.*b233406e67 //  // @ game+0xf8569a8
	void *0a80fc0560(); // Function CustomizableObject.CustomizableObject.*0a80fc0560 //  // @ game+0xf854ce4
	void *8e4ae1cdee(); // Function CustomizableObject.CustomizableObject.*8e4ae1cdee //  // @ game+0xf855fbc
	void *07cfabfa9c(); // Function CustomizableObject.CustomizableObject.*07cfabfa9c //  // @ game+0xf85664c
};

// Class CustomizableObject.CustomizableObjectCookCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UCustomizableObjectCookCommandlet : UCommandlet {
};

// Class CustomizableObject.*cd169c9f84
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*cd169c9f84 : UObject {
};

// Class CustomizableObject.*87a30b0d12
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*87a30b0d12 : U*cd169c9f84 {
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
};

// Class CustomizableObject.*c1f9ff466a
// Size: 0x150 (Inherited: 0x30)  [layout: KHOP]
struct U*c1f9ff466a : UObject {
	struct TArray<struct F*8f4f522c5b> PendingReleaseSkeletalMesh; // 0x30(0x10)
	struct U*87a30b0d12* *d361c21b97; // 0x40(0x08)
	char pad_48[0xd8]; // 0x48(0xd8)
	struct TArray<struct UTexture2D*> *bb17c04707; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct U*0b03c75d9b* *b5809e1af1; // 0x140(0x08)
	struct U*0b03c75d9b* *3ea212bd6d; // 0x148(0x08)

	void *16f2121bc5(); // Function CustomizableObject.*c1f9ff466a.*16f2121bc5 //  // @ game+0xf853508
	void *b62e88de34(); // Function CustomizableObject.*c1f9ff466a.*b62e88de34 //  // @ game+0xf858c64
	void *d8e1d88f6c(); // Function CustomizableObject.*c1f9ff466a.*d8e1d88f6c //  // @ game+0xf8547b4
	void *101de0d94f(); // Function CustomizableObject.*c1f9ff466a.*101de0d94f //  // @ game+0xf8547cc
	void GetInstance(); // Function CustomizableObject.*c1f9ff466a.GetInstance //  // @ game+0xf854478
	void *083adf198d(); // Function CustomizableObject.*c1f9ff466a.*083adf198d //  // @ game+0xf856740
	void *fffa53999d(); // Function CustomizableObject.*c1f9ff466a.*fffa53999d //  // @ game+0xf8550fc
	void *abab0cce0b(); // Function CustomizableObject.*c1f9ff466a.*abab0cce0b //  // @ game+0xf853e90
	void *7da8071705(); // Function CustomizableObject.*c1f9ff466a.*7da8071705 //  // @ game+0xf85675c
};

// Class CustomizableObject.CustomizableSkeletalMeshActor
// Size: 0x490 (Inherited: 0x488)  [layout: KHOP]
struct ACustomizableSkeletalMeshActor : ASkeletalMeshActor {
	struct UCustomizableSkeletalComponent* CustomizableSkeletalComponent; // 0x488(0x08)
};

