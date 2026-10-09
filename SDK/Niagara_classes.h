// Class Niagara.NiagaraActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x400(0x08)
};

// Class Niagara.NiagaraComponent
// Size: 0xa20 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UNiagaraComponent : UPrimitiveComponent {
	struct UNiagaraEffect* Asset; // 0x9d0(0x08)
	char pad_9D8[0x10]; // 0x9d8(0x10)
	struct TArray<struct F*4cae3d2083> *62e4375868; // 0x9e8(0x10)
	struct TArray<struct F*53a3c09aa7> *4fb295c528; // 0x9f8(0x10)
	struct TArray<struct U*2e8db15b60*> *b0e17eb1de; // 0xa08(0x10)
	bool *8a086d909b; // 0xa18(0x01)
	char pad_A19[0x7]; // 0xa19(0x07)

	void *3260a4e3d2(); // Function Niagara.NiagaraComponent.*3260a4e3d2 //  // @ game+0xedfb810
	void *b2a36941bf(); // Function Niagara.NiagaraComponent.*b2a36941bf //  // @ game+0xedfbbe8
	void *3841e79f0d(); // Function Niagara.NiagaraComponent.*3841e79f0d //  // @ game+0xedfb608
	void *904a4c7673(); // Function Niagara.NiagaraComponent.*904a4c7673 //  // @ game+0xedfa9e8
	void *56513c387b(); // Function Niagara.NiagaraComponent.*56513c387b //  // @ game+0xedf9e0c
	void *94cb0f395a(); // Function Niagara.NiagaraComponent.*94cb0f395a //  // @ game+0xedfa830
	void *ced846415f(); // Function Niagara.NiagaraComponent.*ced846415f //  // @ game+0xedf9dcc
	void *e621d22fb0(); // Function Niagara.NiagaraComponent.*e621d22fb0 //  // @ game+0xedf9d8c
	void *639efa8217(); // Function Niagara.NiagaraComponent.*639efa8217 //  // @ game+0xedfba10
	void *67f7ac283d(); // Function Niagara.NiagaraComponent.*67f7ac283d //  // @ game+0xedfabe4
};

// Class Niagara.*2e8db15b60
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*2e8db15b60 : UObject {
};

// Class Niagara.*92b12d78e3
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*92b12d78e3 : U*2e8db15b60 {
};

// Class Niagara.*d0a2bc5053
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*d0a2bc5053 : U*92b12d78e3 {
	struct FRichCurve Curve; // 0x30(0x70)
};

// Class Niagara.*a7e7c34a59
// Size: 0x180 (Inherited: 0x30)  [layout: KHOP]
struct U*a7e7c34a59 : U*92b12d78e3 {
	struct FRichCurve *0745fb9e91; // 0x30(0x70)
	struct FRichCurve *d768268684; // 0xa0(0x70)
	struct FRichCurve *582a14ae09; // 0x110(0x70)
};

// Class Niagara.*5cac57b4f9
// Size: 0x1f0 (Inherited: 0x30)  [layout: KHOP]
struct U*5cac57b4f9 : U*92b12d78e3 {
	struct FRichCurve *14dbee6761; // 0x30(0x70)
	struct FRichCurve *8c006aa9fe; // 0xa0(0x70)
	struct FRichCurve *3922c065b6; // 0x110(0x70)
	struct FRichCurve *83466db326; // 0x180(0x70)
};

// Class Niagara.*33f075b2c4
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*33f075b2c4 : U*2e8db15b60 {
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNiagaraDataInterfaceSpline : U*2e8db15b60 {
	struct AActor* Source; // 0x30(0x08)
	char pad_38[0x88]; // 0x38(0x88)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x200 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNiagaraDataInterfaceStaticMesh : U*2e8db15b60 {
	struct UStaticMesh* *50096d442b; // 0x30(0x08)
	struct AActor* Source; // 0x38(0x08)
	struct F*b9223d9a85 *3a046c0763; // 0x40(0x68)
	bool *a66f2aca1c; // 0xa8(0x01)
	char pad_A9[0x157]; // 0xa9(0x157)
};

// Class Niagara.NiagaraEffect
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct UNiagaraEffect : UObject {
	struct TArray<struct F*60924d3268> *876105445c; // 0x30(0x10)
	struct U*f0fbc01339* EffectScript; // 0x40(0x08)
	struct TArray<struct F*868b980394> *c07ba54a32; // 0x48(0x10)
	struct TArray<struct F*868b980394> *c08c756696; // 0x58(0x10)
	struct TArray<struct F*7cd0bba9b0> *3a37eeb4d6; // 0x68(0x10)
};

// Class Niagara.*6df9c5168b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6df9c5168b : UObject {
};

// Class Niagara.*7652bab12e
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*7652bab12e : U*6df9c5168b {
	float RadiusScale; // 0x30(0x04)
	struct FVector *5b470797a3; // 0x34(0x0c)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct UNiagaraMeshRendererProperties : U*6df9c5168b {
	struct UStaticMesh* ParticleMesh; // 0x30(0x08)
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UNiagaraRibbonRendererProperties : U*6df9c5168b {
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNiagaraSpriteRendererProperties : U*6df9c5168b {
	struct FVector2D *0ad8126957; // 0x30(0x08)
	enum class *8286f53b50 Alignment; // 0x38(0x01)
	enum class *34a3e722a9 *cd78ad54bb; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector *b8b8cac2eb; // 0x3c(0x0c)
	enum class *e63263516f SortMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Niagara.*f0fbc01339
// Size: 0xf0 (Inherited: 0x30)  [layout: KHOP]
struct U*f0fbc01339 : UObject {
	struct TArray<bool> *193a75bad1; // 0x30(0x10)
	struct F*c9fcc48855 Parameters; // 0x40(0x10)
	struct F*c9fcc48855 *6421d00c3c; // 0x50(0x10)
	struct TArray<struct F*4cae3d2083> Attributes; // 0x60(0x10)
	struct TArray<struct F*0bc9e8110e> EventReceivers; // 0x70(0x10)
	struct TArray<struct F*0bc9e8110e> *d9eb70c5f0; // 0x80(0x10)
	struct F*a616e81096 *cff872c970; // 0x90(0x01)
	enum class ENiagaraScriptUsage Usage; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<struct F*53a3c09aa7> *e6b025d278; // 0x98(0x10)
	struct TArray<struct F*776bc11dbd> *61c8dc1a70; // 0xa8(0x10)
	enum class ENiagaraNumericOutputTypeSelectionMode *f17954daea; // 0xb8(0x01)
	char pad_B9[0x27]; // 0xb9(0x27)
	struct TArray<struct F*68b8fed211> *eef441ddf1; // 0xe0(0x10)
};

// Class Niagara.*4b47ceed83
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*4b47ceed83 : UObject {
};

// Class Niagara.*4b16709241
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*4b16709241 : U*4b47ceed83 {
	uint32 NumParticles; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.*61f5c8c9d7
// Size: 0x110 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*61f5c8c9d7 : UObject {
	float SpawnRate; // 0x30(0x04)
	bool *88f5789495; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UMaterial* Material; // 0x38(0x08)
	float StartTime; // 0x40(0x04)
	float EndTime; // 0x44(0x04)
	int32 *aec7c14030; // 0x48(0x04)
	enum class ENiagaraCollisionMode *34ee587afa; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct U*6df9c5168b* *9d465c6062; // 0x50(0x08)
	struct F*8dad58a322 *0bd811071c; // 0x58(0x28)
	struct F*8dad58a322 *2a26439f7a; // 0x80(0x28)
	struct F*d21a7933f5 *82e391e198; // 0xa8(0x50)
	struct TArray<struct F*cbdeaffd7e> *8150c9991c; // 0xf8(0x10)
	char *db25d1ee6e : 1; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class Niagara.*1f4090bd06
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*1f4090bd06 : UBlueprintFunctionLibrary {

	void *5d6634adb4(); // Function Niagara.*1f4090bd06.*5d6634adb4 //  // @ game+0xedfbc60
	void SpawnEffectAttached(); // Function Niagara.*1f4090bd06.SpawnEffectAttached //  // @ game+0xedfbeb0
};

// Class Niagara.*1019a2af0c
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*1019a2af0c : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0x90 (Inherited: 0x40)  [layout: KHOP]
struct UNiagaraSettings : U*ba332f0435 {
	struct FStringAssetReference DefaultEffect; // 0x40(0x10)
	struct FStringAssetReference DefaultEmitter; // 0x50(0x10)
	struct FStringAssetReference DefaultScript; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AdditionalParameterTypes; // 0x70(0x10)
	struct TArray<struct FStringAssetReference> AdditionalPayloadTypes; // 0x80(0x10)
};

