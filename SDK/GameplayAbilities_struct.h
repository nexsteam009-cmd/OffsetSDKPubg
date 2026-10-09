// Enum GameplayAbilities.*a731d0442a
enum class *a731d0442a : uint8 {
	*36d25a98cb,
	*90af0ee57a,
	*c9c6d9194e,
	*42aec42064,
	*a731d0442a_MAX,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	Source,
	Target,
	EGameplayEffectAttributeCaptureSource_MAX,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	GenericConfirm,
	GenericCancel,
	InputPressed,
	InputReleased,
	GenericSignalFromClient,
	GenericSignalFromServer,
	GameCustom1,
	GameCustom2,
	GameCustom3,
	GameCustom4,
	GameCustom5,
	GameCustom6,
	MAX,
	EAbilityGenericReplicatedEvent_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	Authority,
	NonAuthority,
	Predicting,
	Confirmed,
	Rejected,
	EGameplayAbilityActivationMode_MAX,
};

// Enum GameplayAbilities.*64f64cb61e
enum class *64f64cb61e : uint8 {
	*27c8f974d6,
	*88f80a6a32,
	*b76c0e654d,
	*64f64cb61e_MAX,
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	OnActive,
	WhileActive,
	Executed,
	Removed,
	EGameplayCueEvent_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None,
	AggregateBySource,
	AggregateByTarget,
	EGameplayEffectStackingType_MAX,
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	Additive,
	Multiplicitive,
	Division,
	Override,
	Max,
	EGameplayModOp_MAX,
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Channel4,
	Channel5,
	Channel6,
	Channel7,
	Channel8,
	Channel9,
	Channel_MAX,
	EGameplayModEvaluationChannel_MAX,
};

// Enum GameplayAbilities.*6476c6f3b7
enum class *6476c6f3b7 : uint8 {
	*10bc70fc02,
	*7368929fa7,
	*e31eb35c7a,
	*47136b026f,
	*6476c6f3b7_MAX,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	Instant,
	UserConfirmed,
	Custom,
	CustomMulti,
	EGameplayTargetingConfirmation_MAX,
};

// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8 {
	Position,
	CurrentSectionId,
	ERepAnimPositionMethod_MAX,
};

// Enum GameplayAbilities.*fc5d3180c0
enum class *fc5d3180c0 : uint8 {
	*16da1c4e4b,
	*49d29e96c4,
	*f19d9ffa93,
	*8e03201995,
	*fc5d3180c0_MAX,
};

// Enum GameplayAbilities.*16e0bbd7a6
enum class *16e0bbd7a6 : uint8 {
	*dbc18678cf,
	*c72171d836,
	*2c9dc308e8,
	*16e0bbd7a6_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8 {
	ClientOrServer,
	ServerOnlyExecution,
	ServerOnlyTermination,
	ServerOnly,
	EGameplayAbilityNetSecurityPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	LocalPredicted,
	LocalOnly,
	ServerInitiated,
	ServerOnly,
	EGameplayAbilityNetExecutionPolicy_MAX,
};

// Enum GameplayAbilities.*3e63755054
enum class *3e63755054 : uint8 {
	*34cf735df2,
	*7b4badd22e,
	*d920c7105a,
	*0c0270ab95,
	*3e63755054_MAX,
};

// Enum GameplayAbilities.*bb63856c15
enum class *bb63856c15 : uint8 {
	*444767ea36,
	*3eeb97d687,
	*3603189456,
	*86866580e3,
	*bb63856c15_MAX,
};

// Enum GameplayAbilities.*c404c63e52
enum class *c404c63e52 : uint8 {
	*de75737e65,
	*4f99a3db18,
	*b05a7cce47,
	*75ed7b30d2,
	*c404c63e52_MAX,
};

// Enum GameplayAbilities.*7f937a52eb
enum class *7f937a52eb : uint8 {
	*d98656738f,
	*6d24c4827a,
	*8a9f73cbd8,
	*d37fcf4547,
	*7f937a52eb_MAX,
};

// Enum GameplayAbilities.*03aa4b038b
enum class *03aa4b038b : uint8 {
	*5e8c420dc4,
	*de75737e65,
	*418fa7c864,
	*03aa4b038b_MAX,
};

// Enum GameplayAbilities.*2e646f8802
enum class *2e646f8802 : uint8 {
	*efa96cca01,
	*3f4af275ec,
	*c187423ccf,
	*2e646f8802_MAX,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	Instant,
	Infinite,
	HasDuration,
	EGameplayEffectDurationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
	CapturedAttributeBacked,
	Transient,
	EGameplayEffectScopedModifierAggregatorType_MAX,
};

// Enum GameplayAbilities.*1f7229bdf2
enum class *1f7229bdf2 : uint8 {
	*390c0fb61c,
	*6d7a800a86,
	*425597a541,
	*22f4c204e7,
	*1f7229bdf2_MAX,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	AttributeMagnitude,
	AttributeBaseValue,
	AttributeBonusMagnitude,
	AttributeMagnitudeEvaluatedUpToChannel,
	EAttributeBasedFloatCalculationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	ScalableFloat,
	AttributeBased,
	CustomCalculationClass,
	SetByCaller,
	EGameplayEffectMagnitudeCalculation_MAX,
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8 {
	Minimal,
	Mixed,
	Full,
	EGameplayEffectReplicationMode_MAX,
};

// Enum GameplayAbilities.*b986ca3fed
enum class *b986ca3fed : uint8 {
	*0ec422e305,
	*dae4c5500d,
	*40551d45ab,
	*30f462ce90,
	*b986ca3fed_MAX,
};

// Enum GameplayAbilities.*93ca53f0cb
enum class *93ca53f0cb : uint8 {
	*37706d3ddd,
	*c15579df4a,
	*a3e7b8713d,
	*e251f776ea,
	*93ca53f0cb_MAX,
};

// Enum GameplayAbilities.*64e0b8d71b
enum class *64e0b8d71b : uint8 {
	*fe63dbd6f6,
	*c064e610a6,
	*f410cf0be8,
	*32fddaf613,
	*64e0b8d71b_MAX,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None,
	GreaterThan,
	LessThan,
	GreaterThanOrEqualTo,
	LessThanOrEqualTo,
	NotEqualTo,
	ExactlyEqualTo,
	MAX,
	EWaitAttributeChangeComparison_MAX,
};

// Enum GameplayAbilities.*6fcfc61a7d
enum class *6fcfc61a7d : uint8 {
	*b1ddbcbb7a,
	*9c96f57d52,
	*13e43de6af,
	*a1b5296a8a,
	*c27d248786,
	*0cb3779cf1,
	*c5c7f6ce6b,
	*7a1a9de511,
	*0b3fb9a1fd,
	*fee99e04fa,
	*6fcfc61a7d_MAX,
};

// Enum GameplayAbilities.*87412e9cb3
enum class *87412e9cb3 : uint8 {
	*b08574876f,
	*1d9880c4f6,
	*4296b28430,
	*87412e9cb3_MAX,
};

// ScriptStruct GameplayAbilities.*f47e896656
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f47e896656 {
	int32 Handle; // 0x00(0x04)
	bool *7a89a4365c; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.*88b7d2eeb8
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*88b7d2eeb8 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*4561a4dee3
// Size: 0x88 (Inherited: 0x00)  [layout: KHOP]
struct F*4561a4dee3 {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
	struct FGameplayTagQuery TagQuery; // 0x40(0x48)
};

// ScriptStruct GameplayAbilities.*cc505002f9
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cc505002f9 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*896d065b08
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*896d065b08 {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct F*aa8dfed390 ContextHandle; // 0x28(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x40(0x20)
	struct FGameplayTagContainer TargetTags; // 0x60(0x20)
	float EventMagnitude; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct F*fe3dfbf051 TargetData; // 0x88(0x28)
};

// ScriptStruct GameplayAbilities.*fe3dfbf051
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fe3dfbf051 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.*aa8dfed390
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*aa8dfed390 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.*6adf492008
// Size: 0x500 (Inherited: 0x0c)  [layout: LECH - offset chi la uoc luong]
struct F*6adf492008 : F*60282223b2 {
	char pad_C[0xc]; // 0x0c(0x0c)
	struct F*6d7ed62853 Spec; // 0x18(0x258)
	struct FPredictionKey PredictionKey; // 0x270(0x18)
	struct TArray<struct F*d011229320> *11b30f9ba0; // 0x288(0x10)
	float *3437670522; // 0x298(0x04)
	float *17d805027d; // 0x29c(0x04)
	float StartWorldTime; // 0x2a0(0x04)
	bool bIsInhibited; // 0x2a4(0x01)
	char pad_2A5[0x25b]; // 0x2a5(0x25b)
};

// ScriptStruct GameplayAbilities.*d011229320
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*d011229320 {
	int32 Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FPredictionKey {
	int16 Current; // 0x00(0x02)
	int16 Base; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct UPackageMap* *518894dced; // 0x08(0x08)
	bool *66e8b77006; // 0x10(0x01)
	bool *d025852c17; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.*6d7ed62853
// Size: 0x258 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6d7ed62853 {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*074dd6d6ff> *997d630a3a; // 0x08(0x10)
	struct F*c129725845 *c4b45251a3; // 0x18(0x28)
	char pad_40[0x10]; // 0x40(0x10)
	float Duration; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float *289b3ad728; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct F*355ac51d98 CapturedSourceTags; // 0x60(0x68)
	struct F*355ac51d98 CapturedTargetTags; // 0xc8(0x68)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x130(0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x150(0x20)
	struct TArray<struct F*eaeaac2558> Modifiers; // 0x170(0x10)
	int32 StackCount; // 0x180(0x04)
	char *f8a8f16f06 : 1; // 0x184(0x01)
	char *4bb9a5f3a9 : 1; // 0x184(0x01)
	char *92ebb81562 : 1; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct TArray<struct F*032b9fa29e> *056d3379fd; // 0x188(0x10)
	char pad_198[0xa0]; // 0x198(0xa0)
	struct F*aa8dfed390 *cce3b5d3eb; // 0x238(0x18)
	float Level; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
};

// ScriptStruct GameplayAbilities.*032b9fa29e
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*032b9fa29e {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *b5e759d4e6; // 0x08(0x30)
	int32 *a943a24799; // 0x38(0x04)
	enum class *a731d0442a *e2d510eb01; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct UObject* SourceObject; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)
	struct F*d011229320 *de5cb06d55; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FScalableFloat {
	float Value; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
	struct FCurveTableRowHandle Curve; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*eaeaac2558
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*eaeaac2558 {
	float *4904d6d1e1; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*355ac51d98
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*355ac51d98 {
	struct FGameplayTagContainer *3e338e6d80; // 0x00(0x20)
	struct FGameplayTagContainer *70bb2b6db0; // 0x20(0x20)
	char pad_40[0x28]; // 0x40(0x28)
};

// ScriptStruct GameplayAbilities.*c129725845
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c129725845 {
	struct TArray<struct F*1f17990610> *ca8ff1c5af; // 0x00(0x10)
	struct TArray<struct F*1f17990610> *4bf0c89e56; // 0x10(0x10)
	bool *e9fbf4c973; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.*1f17990610
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*1f17990610 {
	struct F*d2205165a1 *6be876ab6e; // 0x00(0x28)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct GameplayAbilities.*d2205165a1
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d2205165a1 {
	struct FGameplayAttribute *2bf9bc8aea; // 0x00(0x20)
	enum class EGameplayEffectAttributeCaptureSource *f7dcf13963; // 0x20(0x01)
	bool *dbe81b14f5; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	struct UProperty* Attribute; // 0x10(0x08)
	struct UStruct* *46ea08d0bd; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.*074dd6d6ff
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*074dd6d6ff {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	float *7e20c9c0ed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayAbilities.*6195775a64
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*6195775a64 {
	bool bPrematureRemoval; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 StackCount; // 0x04(0x04)
	struct F*aa8dfed390 EffectContext; // 0x08(0x18)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*75c34f6bf1
// Size: 0x50 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*75c34f6bf1 {
	struct F*d011229320 *fcf0b9b780; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FPredictionKey PredictionKey; // 0x08(0x18)
	struct F*fe3dfbf051 *5f228fdab5; // 0x20(0x28)
	bool InputPressed; // 0x48(0x01)
	bool Ended; // 0x49(0x01)
	bool Started; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.*79f8f9ada6
// Size: 0xc0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*79f8f9ada6 {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct F*aa8dfed390 EffectContext; // 0x08(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x08)
	struct FGameplayTag OriginalTag; // 0x28(0x08)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	struct FVector_NetQuantize10 Location; // 0x70(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x7c(0x0c)
	struct AActor* Instigator; // 0x88(0x08)
	struct AActor* EffectCauser; // 0x90(0x08)
	struct UObject* SourceObject; // 0x98(0x08)
	struct UPhysicalMaterial* PhysicalMaterial; // 0xa0(0x08)
	int32 GameplayEffectLevel; // 0xa8(0x04)
	int32 AbilityLevel; // 0xac(0x04)
	struct USceneComponent* TargetAttachComponent; // 0xb0(0x08)
	bool bReplicateLocationWhenUsingMinimalRepProxy; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct GameplayAbilities.*3a5184055d
// Size: 0x1b0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*3a5184055d {
	char pad_0[0x40]; // 0x00(0x40)
	DelegateProperty CustomMatchDelegate_BP; // 0x40(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x50(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x98(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xe0(0x48)
	struct FGameplayTagQuery SourceAggregateTagQuery; // 0x128(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0x170(0x20)
	struct UObject* EffectSource; // 0x190(0x08)
	struct UClass* EffectDefinition; // 0x198(0x08)
	char pad_1A0[0x10]; // 0x1a0(0x10)
};

// ScriptStruct GameplayAbilities.*eb1406cac9
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*eb1406cac9 {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char *0293c65b79 : 1; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FPredictionKey *4db796c926; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.*0efadf2dc7
// Size: 0x78 (Inherited: 0x00)  [layout: KHOP]
struct F*0efadf2dc7 {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct F*074dd6d6ff> *997d630a3a; // 0x08(0x10)
	struct F*aa8dfed390 *cce3b5d3eb; // 0x18(0x18)
	struct FGameplayTagContainer *a424329c9d; // 0x30(0x20)
	struct FGameplayTagContainer *03a649e87b; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.*b2e37a46c4
// Size: 0xc0 (Inherited: 0xb0)  [layout: KHOP]
struct F*b2e37a46c4 : F*fdab764c85 {
	struct TArray<struct F*f5c6539c3b> *5e53018f32; // 0xb0(0x10)
};

// ScriptStruct GameplayAbilities.*f5c6539c3b
// Size: 0x28 (Inherited: 0x0c)  [layout: KHOP]
struct F*f5c6539c3b : F*60282223b2 {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.*c21404f37a
// Size: 0x60 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c21404f37a {
	char pad_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.*daed61bcf1
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*daed61bcf1 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	bool *ca3d3093fc; // 0x14(0x01)
	char *fd3fb5190e : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char *9ff6c14460 : 1; // 0x15(0x01)
	char *86632500a6 : 1; // 0x15(0x01)
	char *54342ee405 : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	bool *8b8b8d32d8; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.*91b82e2a9d
// Size: 0xd0 (Inherited: 0xb0)  [layout: KHOP]
struct F*91b82e2a9d : F*fdab764c85 {
	struct TArray<struct F*7cc2af6fda> GameplayCues; // 0xb0(0x10)
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UAbilitySystemComponent* Owner; // 0xc8(0x08)
};

// ScriptStruct GameplayAbilities.*7cc2af6fda
// Size: 0xf8 (Inherited: 0x0c)  [layout: LECH - offset chi la uoc luong]
struct F*7cc2af6fda : F*60282223b2 {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTag GameplayCueTag; // 0x10(0x08)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	struct F*79f8f9ada6 Parameters; // 0x30(0xc0)
	bool *e64029e443; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.*61153aafdb
// Size: 0x300 (Inherited: 0xb0)  [layout: LECH - offset chi la uoc luong]
struct F*61153aafdb : F*fdab764c85 {
	char pad_B0[0x80]; // 0xb0(0x80)
	struct TArray<struct F*6adf492008> *247c418fd3; // 0x130(0x10)
	char pad_140[0x1c0]; // 0x140(0x1c0)
};

// ScriptStruct GameplayAbilities.*384103d7c9
// Size: 0x30 (Inherited: 0x00)  [layout: KHOP]
struct F*384103d7c9 {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	bool *fb5de01b10; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct UGameplayAbility* *4f99a83212; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*7e561ec0d7
// Size: 0xc8 (Inherited: 0xb0)  [layout: KHOP]
struct F*7e561ec0d7 : F*fdab764c85 {
	struct TArray<struct F*a43422adf5> Items; // 0xb0(0x10)
	struct UAbilitySystemComponent* Owner; // 0xc0(0x08)
};

// ScriptStruct GameplayAbilities.*a43422adf5
// Size: 0xe8 (Inherited: 0x0c)  [layout: LECH - offset chi la uoc luong]
struct F*a43422adf5 : F*60282223b2 {
	struct F*d011229320 Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32 Level; // 0x18(0x04)
	int32 *a943a24799; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	bool *80dab79cf7; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char *4034502e1d : 1; // 0x29(0x01)
	char *90e8936270 : 1; // 0x29(0x01)
	char *485c1ad0f4 : 1; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct F*eb1406cac9 *f0c36de086; // 0x30(0x20)
	struct FGameplayTagContainer *7d4bebab1d; // 0x50(0x20)
	struct TArray<struct UGameplayAbility*> *4fc3ea776e; // 0x70(0x10)
	struct TArray<struct UGameplayAbility*> *759efbba86; // 0x80(0x10)
	struct F*f47e896656 *37345dc5e6; // 0x90(0x08)
	char pad_98[0x50]; // 0x98(0x50)
};

// ScriptStruct GameplayAbilities.*0217f9d3bd
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0217f9d3bd {
	struct UClass* Attributes; // 0x00(0x08)
	struct UDataTable* *46a5b2b325; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*31687bb0fc
// Size: 0x08 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*31687bb0fc {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*c57ff0c15c
// Size: 0x70 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c57ff0c15c {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* EffectCauser; // 0x10(0x08)
	struct UGameplayAbility* *a9b421ea01; // 0x18(0x08)
	struct UGameplayAbility* *3a9cff4619; // 0x20(0x08)
	int32 AbilityLevel; // 0x28(0x04)
	struct UObject* SourceObject; // 0x2c(0x08)
	struct UAbilitySystemComponent* *e4b6c61cfa; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct AActor*> Actors; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char *30d93f89f0 : 1; // 0x6c(0x01)
	char *0a5b4e3353 : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.*ed14e6a1c1
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct F*ed14e6a1c1 : FIndexedCurve {
};

// ScriptStruct GameplayAbilities.*506df74acc
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*506df74acc {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*f7274d8017
// Size: 0x30 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*f7274d8017 : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *c2298c1b60; // 0x18(0x10)
	bool bCanStack; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.*9d4837b9c0
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*9d4837b9c0 {
	char pad_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.*472a7f4dde
// Size: 0x20 (Inherited: 0x00)  [layout: KHOP]
struct F*472a7f4dde {
	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct F*dd56fb5ecc> *87f21c9c82; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.*dd56fb5ecc
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dd56fb5ecc {
	struct FGameplayTag *f4ba64066a; // 0x00(0x08)
	struct UProperty* *8d72b5dbf3; // 0x08(0x08)
	struct FName PropertyName; // 0x10(0x08)
	struct FGuid *d38f1875bf; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.*d1a2dc4cbf
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d1a2dc4cbf {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *7f4ef5ac3a; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Magnitude; // 0x24(0x04)
	struct F*f47e896656 Handle; // 0x28(0x08)
	bool IsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*a3f225b606
// Size: 0xa0 (Inherited: 0x08)  [layout: LECH - offset chi la uoc luong]
struct F*a3f225b606 : F*31687bb0fc {
	struct FHitResult HitResult; // 0x08(0x90)
	bool *5bffc65e86; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct GameplayAbilities.*eb7dea8bfa
// Size: 0x90 (Inherited: 0x08)  [layout: KHOP]
struct F*eb7dea8bfa : F*31687bb0fc {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*653d0e5c27 SourceLocation; // 0x10(0x70)
	struct TArray<struct AActor*> *17ce2d1dc7; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.*653d0e5c27
// Size: 0x70 (Inherited: 0x00)  [layout: KHOP]
struct F*653d0e5c27 {
	char pad_0[0x10]; // 0x00(0x10)
	enum class *6476c6f3b7 LocationType; // 0x10(0x01)
	char pad_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.*e57bfc885e
// Size: 0xf0 (Inherited: 0x08)  [layout: KHOP]
struct F*e57bfc885e : F*31687bb0fc {
	char pad_8[0x8]; // 0x08(0x08)
	struct F*653d0e5c27 SourceLocation; // 0x10(0x70)
	struct F*653d0e5c27 TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.*fce770a35e
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct F*fce770a35e {
	struct F*d011229320 *75446109ec; // 0x00(0x04)
	int32 *614c0ffa1e; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.*6cac9a3ab4
// Size: 0x18 (Inherited: 0x00)  [layout: KHOP]
struct F*6cac9a3ab4 {
	struct UGameplayTask* *9d292779fe; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*cab16b699e
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*cab16b699e {
	struct UGameplayAbility* *f5eafaff5a; // 0x00(0x08)
	struct F*d011229320 *fcf0b9b780; // 0x08(0x04)
	bool *99de279f29; // 0x0c(0x01)
	bool *9e58b25b0b; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.*2cada71e2e
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*2cada71e2e {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OwnerActor; // 0x08(0x08)
	struct AActor* AvatarActor; // 0x10(0x08)
	struct APlayerController* PlayerController; // 0x18(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x20(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x28(0x08)
	struct UAnimInstance* AnimInstance; // 0x30(0x08)
	struct UMovementComponent* MovementComponent; // 0x38(0x08)
	struct FName AffectedAnimInstanceTag; // 0x40(0x08)
};

// ScriptStruct GameplayAbilities.*d7f6c60b63
// Size: 0x20 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d7f6c60b63 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	struct UClass* RequiredActorClass; // 0x10(0x08)
	enum class *bb63856c15 SelfFilter; // 0x18(0x01)
	bool bReverseFilter; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct GameplayAbilities.*c1b9af1495
// Size: 0x2a0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*c1b9af1495 {
	char pad_0[0x290]; // 0x00(0x290)
	struct UAbilitySystemComponent* Owner; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.*06828dab84
// Size: 0x01 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*06828dab84 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.*d27593cc2f
// Size: 0xa0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*d27593cc2f {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayAbilities.*31e09eb06f
// Size: 0x60 (Inherited: 0x00)  [layout: KHOP]
struct F*31e09eb06f {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.*01fc87fad6
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct F*01fc87fad6 {
	struct FGameplayAttribute *88990109da; // 0x00(0x20)
	float *7de294a6cb; // 0x20(0x04)
	float *02d4f5eba6; // 0x24(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x28(0x20)
};

// ScriptStruct GameplayAbilities.*faf0683c80
// Size: 0x340 (Inherited: 0x00)  [layout: KHOP]
struct F*faf0683c80 {
	struct FGameplayAttribute Attribute; // 0x00(0x20)
	enum class EGameplayModOp *7f4ef5ac3a; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FGameplayEffectModifierMagnitude *dc003f08b9; // 0x28(0x200)
	struct FGameplayModEvaluationChannelSettings *21ea67b72a; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct F*4561a4dee3 *1e8b5bc1b5; // 0x230(0x88)
	struct F*4561a4dee3 TargetTags; // 0x2b8(0x88)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x200 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation *2fd8fadaf5; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FScalableFloat ScalableFloatMagnitude; // 0x08(0x30)
	struct FAttributeBasedFloat *034c3b581c; // 0x38(0x110)
	struct F*8fb1300614 *b3816f0f13; // 0x148(0xa8)
	struct F*51537ef642 *f7d21ac5b8; // 0x1f0(0x10)
};

// ScriptStruct GameplayAbilities.*51537ef642
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*51537ef642 {
	struct FName *518e0f5510; // 0x00(0x08)
	struct FGameplayTag *5be98a4921; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*8fb1300614
// Size: 0xa8 (Inherited: 0x00)  [layout: KHOP]
struct F*8fb1300614 {
	struct UClass* *68d209529e; // 0x00(0x08)
	struct FScalableFloat *19fb634c2d; // 0x08(0x30)
	struct FScalableFloat *5d4038a493; // 0x38(0x30)
	struct FScalableFloat *4e4a9cd745; // 0x68(0x30)
	struct FCurveTableRowHandle *04e92f6515; // 0x98(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0x110 (Inherited: 0x00)  [layout: KHOP]
struct FAttributeBasedFloat {
	struct FScalableFloat *19fb634c2d; // 0x00(0x30)
	struct FScalableFloat *5d4038a493; // 0x30(0x30)
	struct FScalableFloat *4e4a9cd745; // 0x60(0x30)
	struct F*d2205165a1 *d7383af8d8; // 0x90(0x28)
	struct FCurveTableRowHandle *24e4989d66; // 0xb8(0x10)
	enum class EAttributeBasedFloatCalculationType *8cf1992023; // 0xc8(0x01)
	enum class EGameplayModEvaluationChannel *f0941db9ae; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FGameplayTagContainer *ba13a58832; // 0xd0(0x20)
	struct FGameplayTagContainer *52f422f7b7; // 0xf0(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x48 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayEffectExecutionDefinition {
	struct UClass* *a2921d12a0; // 0x00(0x08)
	struct FGameplayTagContainer *4907ea1d9f; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> *6452b95d4c; // 0x28(0x10)
	struct TArray<struct F*1681ab95d0> *1ea6376586; // 0x38(0x10)
};

// ScriptStruct GameplayAbilities.*1681ab95d0
// Size: 0x28 (Inherited: 0x00)  [layout: KHOP]
struct F*1681ab95d0 {
	struct UClass* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x350 (Inherited: 0x00)  [layout: KHOP]
struct FGameplayEffectExecutionScopedModifierInfo {
	struct F*d2205165a1 *0f4f8f829b; // 0x00(0x28)
	struct FGameplayTag *fe217e17a1; // 0x28(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType *e8aca5d2d8; // 0x30(0x01)
	enum class EGameplayModOp *7f4ef5ac3a; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FGameplayEffectModifierMagnitude *dc003f08b9; // 0x38(0x200)
	struct FGameplayModEvaluationChannelSettings *21ea67b72a; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct F*4561a4dee3 *1e8b5bc1b5; // 0x240(0x88)
	struct F*4561a4dee3 TargetTags; // 0x2c8(0x88)
};

// ScriptStruct GameplayAbilities.*755ccb8167
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*755ccb8167 {
	struct FGameplayTag *588e2c7244; // 0x00(0x08)
	enum class *fc5d3180c0 *ebe9f7e80a; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayAbilities.*87ff8eeece
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*87ff8eeece {
	struct TArray<struct UScriptStruct*> *77fe89c288; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.*047947da65
// Size: 0x0c (Inherited: 0x00)  [layout: KHOP]
struct F*047947da65 {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.*db56c8bb91
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*db56c8bb91 {
	enum class *6fcfc61a7d Command; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UClass* *32865583f0; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.*826a361cfb
// Size: 0x68 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*826a361cfb {
	char pad_0[0x50]; // 0x00(0x50)
	struct TArray<struct UClass*> *b8a515b11f; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.*f1edbe0c54
// Size: 0x178 (Inherited: 0x00)  [layout: KHOP]
struct F*f1edbe0c54 {
	char pad_0[0x18]; // 0x00(0x18)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	enum class *87412e9cb3 *de9011d6ff; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* *a8715ab59d; // 0x38(0x08)
	struct F*0efadf2dc7 *1d9880c4f6; // 0x40(0x78)
	struct F*79f8f9ada6 *b08574876f; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.*f36f200f47
// Size: 0x80 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*f36f200f47 {
	struct TArray<struct F*5c46462231> *600e8783af; // 0x00(0x10)
	struct TMap<struct FName, struct F*3db27901eb> *725b676205; // 0x10(0x50)
	struct U*7957a72b9f* *505175a9e5; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.*3db27901eb
// Size: 0x04 (Inherited: 0x00)  [layout: KHOP]
struct F*3db27901eb {
	int32 Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.*5c46462231
// Size: 0x78 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*5c46462231 {
	struct TArray<struct F*7b5c842451> Links; // 0x00(0x10)
	struct F*3db27901eb *4694604412; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGameplayTag *dc6ee66cc4; // 0x18(0x08)
	struct FName *4f13c4389f; // 0x20(0x08)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct GameplayAbilities.*7b5c842451
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7b5c842451 {
	struct U*efaf9e9a62* *61b8462c99; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.*aa45305a91
// Size: 0xb0 (Inherited: 0x00)  [layout: KHOP]
struct F*aa45305a91 {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
	struct UObjectLibrary* *48bdaa7fe6; // 0x90(0x08)
	struct UObjectLibrary* *cea46fa5c1; // 0x98(0x08)
	struct U*b324a26150* *4ac433a997; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	bool *21e43e774a; // 0xac(0x01)
	bool *59d04fa233; // 0xad(0x01)
	bool *6b648f98d9; // 0xae(0x01)
	bool *9f24cd6e18; // 0xaf(0x01)
};

// ScriptStruct GameplayAbilities.*9ba94b4d17
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*9ba94b4d17 {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FStringAssetReference *2518e2f333; // 0x08(0x10)
	struct UClass* *4868e3e5fd; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayAbilities.*655acd422b
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*655acd422b {
	struct TArray<struct F*d1a2dc4cbf> *03231fd441; // 0x00(0x10)
	char *3daf107be1 : 1; // 0x10(0x01)
	char *5f62867432 : 1; // 0x10(0x01)
	char *19cfd19906 : 1; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.*93c8643673
// Size: 0xa8 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*93c8643673 {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct GameplayAbilities.*dfb7d0cb93
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*dfb7d0cb93 {
	struct UClass* Ability; // 0x00(0x08)
	struct FScalableFloat *b5e759d4e6; // 0x08(0x30)
	int32 *a943a24799; // 0x38(0x04)
	enum class *a731d0442a *e2d510eb01; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct GameplayAbilities.*25ce64384a
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*25ce64384a {
	struct F*596720e5da Positive; // 0x00(0x28)
	struct F*596720e5da Negative; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.*596720e5da
// Size: 0x28 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*596720e5da {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UClass* *6f64b4899a; // 0x08(0x08)
	struct TArray<struct UClass*> *9cc0f6b984; // 0x10(0x10)
	int32 *578a5df196; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

