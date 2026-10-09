// Class GameplayAbilities.*7b49ff0f54
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*7b49ff0f54 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x16f0 (Inherited: 0x270)  [layout: KHOP]
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x10]; // 0x270(0x10)
	char *88f700b319 : 1; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct TArray<struct F*0217f9d3bd> *ec1c4b131b; // 0x288(0x10)
	struct FName AffectedAnimInstanceTag; // 0x298(0x08)
	char pad_2A0[0x5d0]; // 0x2a0(0x5d0)
	float *d95653f9d5; // 0x870(0x04)
	float *dcfb2cb5a7; // 0x874(0x04)
	char pad_878[0x80]; // 0x878(0x80)
	bool *afa55f2ba0; // 0x8f8(0x01)
	bool *13b188c66b; // 0x8f9(0x01)
	bool *1bcb4e1def; // 0x8fa(0x01)
	bool *a7ee7977b3; // 0x8fb(0x01)
	char pad_8FC[0x4]; // 0x8fc(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *a2672da7b1; // 0x900(0x10)
	char pad_910[0x38]; // 0x910(0x38)
	struct F*7e561ec0d7 ActivatableAbilities; // 0x948(0xc8) rep=OnRep_ActivateAbilities
	char pad_A10[0x30]; // 0xa10(0x30)
	struct TArray<struct UGameplayAbility*> *984cb3cc97; // 0xa40(0x10)
	char pad_A50[0x20c]; // 0xa50(0x20c)
	bool *9093f04dc6; // 0xc5c(0x01)
	bool *0c2d61ec42; // 0xc5d(0x01)
	char pad_C5E[0x2]; // 0xc5e(0x02)
	struct F*384103d7c9 *878276f01f; // 0xc60(0x30)
	char pad_C90[0xa0]; // 0xc90(0xa0)
	struct F*61153aafdb *5d80e834e0; // 0xd30(0x300)
	struct F*91b82e2a9d *ec799b297d; // 0x1030(0xd0)
	struct F*91b82e2a9d *0a810ae4f7; // 0x1100(0xd0)
	char pad_11D0[0x310]; // 0x11d0(0x310)
	struct F*c21404f37a *110b4d1803; // 0x14e0(0x60)
	char pad_1540[0x8]; // 0x1540(0x08)
	struct TArray<struct UAttributeSet*> *fa1e9f9f43; // 0x1548(0x10)
	struct TArray<struct FString> *82300a2f8b; // 0x1558(0x10) rep=OnRep_ClientDebugString
	struct AActor* *c527940717; // 0x1568(0x08) rep=OnRep_OwningActor
	struct AActor* AvatarActor; // 0x1570(0x08) rep=OnRep_OwningActor
	struct F*daed61bcf1 *383b5ba0c7; // 0x1578(0x38) rep=OnRep_ReplicatedAnimMontage
	struct TArray<bool> *1a0926d5cb; // 0x15b0(0x10)
	struct F*c21404f37a *62c4c658fa; // 0x15c0(0x60)
	struct TArray<struct FString> *d5ba19906c; // 0x1620(0x10) rep=OnRep_ServerDebugString
	struct F*b2e37a46c4 *b2e37a46c4; // 0x1630(0xc0)

	void *02bc5724f5(); // Function GameplayAbilities.AbilitySystemComponent.*02bc5724f5 //  // @ game+0xf8f17ac
	void *0cca07b6dc(); // Function GameplayAbilities.AbilitySystemComponent.*0cca07b6dc //  // @ game+0xf8ff4c8
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec //  // @ game+0xf8f96f4
	void *65a44c80a0(); // Function GameplayAbilities.AbilitySystemComponent.*65a44c80a0 //  // @ game+0xf8f57e4
	void *a660fcb7f5(); // Function GameplayAbilities.AbilitySystemComponent.*a660fcb7f5 //  // @ game+0xf8f9ce0
	void *1da3e05f87(); // Function GameplayAbilities.AbilitySystemComponent.*1da3e05f87 //  // @ game+0xf8fe8ec
	void *543933fc74(); // Function GameplayAbilities.AbilitySystemComponent.*543933fc74 //  // @ game+0xf8fe798
	void *fc123f8b8a(); // Function GameplayAbilities.AbilitySystemComponent.*fc123f8b8a //  // @ game+0xf8ff2ac
	void TryActivateAbilitiesByTag(); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag //  // @ game+0xf8ffbe8
	void *3c816739da(); // Function GameplayAbilities.AbilitySystemComponent.*3c816739da //  // @ game+0xf8f4e0c
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor //  // @ game+0xf8fb600
	void *c340febb72(); // Function GameplayAbilities.AbilitySystemComponent.*c340febb72 //  // @ game+0xf8f4cd4
	void *55637e519b(); // Function GameplayAbilities.AbilitySystemComponent.*55637e519b //  // @ game+0xf8ffea8
	void *856687ed5b(); // Function GameplayAbilities.AbilitySystemComponent.*856687ed5b //  // @ game+0xf8ef1a4
	void *82d9ff4d34(); // Function GameplayAbilities.AbilitySystemComponent.*82d9ff4d34 //  // @ game+0xf8ffbb8
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature //  // @ game+0x43bab4
	void *513e0ab07a(); // Function GameplayAbilities.AbilitySystemComponent.*513e0ab07a //  // @ game+0xf8feb4c
	void *4926e7aa06(); // Function GameplayAbilities.AbilitySystemComponent.*4926e7aa06 //  // @ game+0xf8f6e58
	void *65d4de0f7b(); // Function GameplayAbilities.AbilitySystemComponent.*65d4de0f7b //  // @ game+0xf8fc1f0
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString //  // @ game+0xdb4561c
	void *53aa271908(); // Function GameplayAbilities.AbilitySystemComponent.*53aa271908 //  // @ game+0xf8fb9c4
	void *22c6e4e9a0(); // Function GameplayAbilities.AbilitySystemComponent.*22c6e4e9a0 //  // @ game+0xf8ef510
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams //  // @ game+0xf8f9820
	void *09e5ed8573(); // Function GameplayAbilities.AbilitySystemComponent.*09e5ed8573 //  // @ game+0xf8f1b88
	void *afdfe54efd(); // Function GameplayAbilities.AbilitySystemComponent.*afdfe54efd //  // @ game+0xf8ff7ac
	void *8fbee27ea5(); // Function GameplayAbilities.AbilitySystemComponent.*8fbee27ea5 //  // @ game+0xf8fa07c
	void *ab736f58e8(); // Function GameplayAbilities.AbilitySystemComponent.*ab736f58e8 //  // @ game+0xf8eff68
	void *8231b93676(); // Function GameplayAbilities.AbilitySystemComponent.*8231b93676 //  // @ game+0xf8f9568
	void *11fedf5374(); // Function GameplayAbilities.AbilitySystemComponent.*11fedf5374 //  // @ game+0x9b1c08
	void *ccc0af420a(); // Function GameplayAbilities.AbilitySystemComponent.*ccc0af420a //  // @ game+0xf8f5304
	void *65d4c08c18(); // Function GameplayAbilities.AbilitySystemComponent.*65d4c08c18 //  // @ game+0xf8fe74c
	void *e38a05c886(); // Function GameplayAbilities.AbilitySystemComponent.*e38a05c886 //  // @ game+0xf8fefc8
	void *212f1e8a18(); // Function GameplayAbilities.AbilitySystemComponent.*212f1e8a18 //  // @ game+0xf8f57b8
	void *34266c2a87(); // Function GameplayAbilities.AbilitySystemComponent.*34266c2a87 //  // @ game+0xf8f91b0
	void *fe04936fb1(); // Function GameplayAbilities.AbilitySystemComponent.*fe04936fb1 //  // @ game+0xf8fbeb4
	void MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext //  // @ game+0xf8f6378
	void *35fe6aaeef(); // Function GameplayAbilities.AbilitySystemComponent.*35fe6aaeef //  // @ game+0xf8fcefc
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities //  // @ game+0xf3a3cd0
	void *9d7e4a1d14(); // Function GameplayAbilities.AbilitySystemComponent.*9d7e4a1d14 //  // @ game+0xf8f997c
	void *350833f529(); // Function GameplayAbilities.AbilitySystemComponent.*350833f529 //  // @ game+0xf8fed7c
	void *4afc4f283b(); // Function GameplayAbilities.AbilitySystemComponent.*4afc4f283b //  // @ game+0xf8fe854
	void *d4c0d27b6c(); // Function GameplayAbilities.AbilitySystemComponent.*d4c0d27b6c //  // @ game+0xf8fbc3c
	void *05832afdc9(); // Function GameplayAbilities.AbilitySystemComponent.*05832afdc9 //  // @ game+0xf8f1560
	void *9b6b0826c8(); // Function GameplayAbilities.AbilitySystemComponent.*9b6b0826c8 //  // @ game+0xf8fe984
	void RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect //  // @ game+0xf8fc12c
	void *3a0d599057(); // Function GameplayAbilities.AbilitySystemComponent.*3a0d599057 //  // @ game+0xf8f14a4
	void *fd51e42cc2(); // Function GameplayAbilities.AbilitySystemComponent.*fd51e42cc2 //  // @ game+0xf8fd130
	void *436062c54f(); // Function GameplayAbilities.AbilitySystemComponent.*436062c54f //  // @ game+0xf8f18a8
	void *018a9f1ea9(); // Function GameplayAbilities.AbilitySystemComponent.*018a9f1ea9 //  // @ game+0xf8f163c
	void AbilityAbilityKey__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature //  // @ game+0x43bab4
	void *f79b0af7a3(); // Function GameplayAbilities.AbilitySystemComponent.*f79b0af7a3 //  // @ game+0xf8fd04c
	void *4e60a467f9(); // Function GameplayAbilities.AbilitySystemComponent.*4e60a467f9 //  // @ game+0xf8fe58c
	void *f22d1b6428(); // Function GameplayAbilities.AbilitySystemComponent.*f22d1b6428 //  // @ game+0xf8f9024
	void *93c7cceac5(); // Function GameplayAbilities.AbilitySystemComponent.*93c7cceac5 //  // @ game+0xf8fb9c4
	void *be0f03445f(); // Function GameplayAbilities.AbilitySystemComponent.*be0f03445f //  // @ game+0xf8f940c
	void *510183ba65(); // Function GameplayAbilities.AbilitySystemComponent.*510183ba65 //  // @ game+0xf8ef2bc
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage //  // @ game+0xf8fb614
	void *2691cbbee0(); // Function GameplayAbilities.AbilitySystemComponent.*2691cbbee0 //  // @ game+0xf8ff588
	void *5c78db79ac(); // Function GameplayAbilities.AbilitySystemComponent.*5c78db79ac //  // @ game+0xf8f1a7c
	void *73963a7026(); // Function GameplayAbilities.AbilitySystemComponent.*73963a7026 //  // @ game+0xf8f53f4
	void *599bb54eaa(); // Function GameplayAbilities.AbilitySystemComponent.*599bb54eaa //  // @ game+0xf8ff150
	void *356d9a1ffe(); // Function GameplayAbilities.AbilitySystemComponent.*356d9a1ffe //  // @ game+0xf8f92b0
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString //  // @ game+0x1145b7c
	void *7cbed4436f(); // Function GameplayAbilities.AbilitySystemComponent.*7cbed4436f //  // @ game+0xf8f6240
	void *af941c3373(); // Function GameplayAbilities.AbilitySystemComponent.*af941c3373 //  // @ game+0xf8f19a4
	void *e9f1b7e3c8(); // Function GameplayAbilities.AbilitySystemComponent.*e9f1b7e3c8 //  // @ game+0xf8fdbbc
	void *75c34f6bf1(); // Function GameplayAbilities.AbilitySystemComponent.*75c34f6bf1 //  // @ game+0xf8fcde4
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class GameplayAbilities.GameplayEffect
// Size: 0xae0 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *74b6e5badb; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *f8e25dadec; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *c404c63e52 PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*faf0683c80> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x298(0x30)
	struct TArray<struct UClass*> ApplicationRequirements; // 0x2c8(0x10)
	struct TArray<struct F*1681ab95d0> ConditionalGameplayEffects; // 0x2d8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2e8(0x10)
	bool bDenyOverflowApplication; // 0x2f8(0x01)
	bool bClearStackOnOverflow; // 0x2f9(0x01)
	char pad_2FA[0x6]; // 0x2fa(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x300(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x310(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x320(0x01)
	bool *d79f0cd824; // 0x321(0x01)
	char pad_322[0x6]; // 0x322(0x06)
	struct TArray<struct F*01fc87fad6> GameplayCues; // 0x328(0x10)
	struct UGameplayEffectUIData* UIData; // 0x338(0x08)
	struct F*31e09eb06f InheritableGameplayEffectTags; // 0x340(0x60)
	struct F*31e09eb06f InheritableOwnedTagsContainer; // 0x3a0(0x60)
	struct F*31e09eb06f InheritableBlockedAbilityTagsContainer; // 0x400(0x60)
	struct F*4561a4dee3 OngoingTagRequirements; // 0x460(0x88)
	struct F*4561a4dee3 ApplicationTagRequirements; // 0x4e8(0x88)
	struct F*4561a4dee3 RemovalTagRequirements; // 0x570(0x88)
	struct F*31e09eb06f RemoveGameplayEffectsWithTags; // 0x5f8(0x60)
	struct F*4561a4dee3 GrantedApplicationImmunityTags; // 0x658(0x88)
	struct F*3a5184055d GrantedApplicationImmunityQuery; // 0x6e0(0x1b0)
	char pad_890[0x10]; // 0x890(0x10)
	struct F*3a5184055d RemoveGameplayEffectQuery; // 0x8a0(0x1b0)
	char pad_A50[0x1]; // 0xa50(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0xa51(0x01)
	char pad_A52[0x2]; // 0xa52(0x02)
	int32 StackLimitCount; // 0xa54(0x04)
	enum class *2e646f8802 StackDurationRefreshPolicy; // 0xa58(0x01)
	enum class *03aa4b038b StackPeriodResetPolicy; // 0xa59(0x01)
	enum class *7f937a52eb StackExpirationPolicy; // 0xa5a(0x01)
	char pad_A5B[0x5]; // 0xa5b(0x05)
	struct TArray<struct F*032b9fa29e> GrantedAbilities; // 0xa60(0x10)
	char pad_A70[0x60]; // 0xa70(0x60)
	struct TArray<struct UGameplayEffectComponent*> GEComponents; // 0xad0(0x10)
};

// Class GameplayAbilities.GameplayEffectComponent
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayEffectComponent : UObject {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAttributeSet : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.*4902b8de9a
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*4902b8de9a : UObject {
	struct TArray<struct F*d2205165a1> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*2f49679da2
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*2f49679da2 : U*4902b8de9a {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(); // Function GameplayAbilities.*2f49679da2.Execute //  // @ game+0xf8f4540
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *829126312b; // 0x270(0x20)
	bool *071e77994c; // 0x290(0x01)
	bool *62f3c6093c; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *16e0bbd7a6 *d660e0d801; // 0x296(0x01)
	enum class *3e63755054 *c8e5a4e7d1; // 0x297(0x01)
	bool *b871895e29; // 0x298(0x01)
	bool *72b4c66b58; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*eb1406cac9 CurrentActivationInfo; // 0x2a0(0x20)
	struct F*896d065b08 CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *38062f087f; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *a69401ae43; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *198244226b; // 0x378(0x08)
	struct TArray<struct F*755ccb8167> *efa1ca4698; // 0x380(0x10)
	struct UClass* *60c3eeaf3e; // 0x390(0x08)
	struct FGameplayTagContainer *784e2a8734; // 0x398(0x20)
	struct FGameplayTagContainer *a18d457c63; // 0x3b8(0x20)
	struct FGameplayTagContainer *cf01fb2c0a; // 0x3d8(0x20)
	struct FGameplayTagContainer *30c92d4723; // 0x3f8(0x20)
	struct FGameplayTagContainer *4267981f4f; // 0x418(0x20)
	struct FGameplayTagContainer *fc6986411f; // 0x438(0x20)
	struct FGameplayTagContainer *8b804af1d0; // 0x458(0x20)
	struct FGameplayTagContainer *8ec16d2e19; // 0x478(0x20)
	struct FGameplayTagContainer *e2992e2d8f; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *dc8eff123b; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *3eb022028b; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *49896f2b03; // 0x560(0x01)
	bool *1cc705cc1a; // 0x561(0x01)
	bool *16486a3fb1; // 0x562(0x01)
	bool *f2009ed65d; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	void K2_OnEndAbility(); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility //  // @ game+0x43bab4
	void *bc65c2f9d4(); // Function GameplayAbilities.GameplayAbility.*bc65c2f9d4 //  // @ game+0xf8f5690
	void *6f7cb041f1(); // Function GameplayAbilities.GameplayAbility.*6f7cb041f1 //  // @ game+0xf8f7940
	void *8af47cef43(); // Function GameplayAbilities.GameplayAbility.*8af47cef43 //  // @ game+0xf8f4cb0
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute //  // @ game+0x43bab4
	void *5fe065a83b(); // Function GameplayAbilities.GameplayAbility.*5fe065a83b //  // @ game+0xf8f6130
	void *29b9d30cf3(); // Function GameplayAbilities.GameplayAbility.*29b9d30cf3 //  // @ game+0xf8fccd4
	void *ab736f58e8(); // Function GameplayAbilities.GameplayAbility.*ab736f58e8 //  // @ game+0xf8f09f8
	void *fc409aabaf(); // Function GameplayAbilities.GameplayAbility.*fc409aabaf //  // @ game+0xf8f6408
	void *f4bf1e38b9(); // Function GameplayAbilities.GameplayAbility.*f4bf1e38b9 //  // @ game+0xf8f44c8
	void *5eb3358de6(); // Function GameplayAbilities.GameplayAbility.*5eb3358de6 //  // @ game+0xf8f4444
	void *d174295721(); // Function GameplayAbilities.GameplayAbility.*d174295721 //  // @ game+0xf8f5d9c
	void *1f83ea8d9a(); // Function GameplayAbilities.GameplayAbility.*1f83ea8d9a //  // @ game+0xf8f55c0
	void *ad4aef40c3(); // Function GameplayAbilities.GameplayAbility.*ad4aef40c3 //  // @ game+0xf8ff6ac
	void *67725159a5(); // Function GameplayAbilities.GameplayAbility.*67725159a5 //  // @ game+0xf8f7ab8
	void *3e4b12ba84(); // Function GameplayAbilities.GameplayAbility.*3e4b12ba84 //  // @ game+0xf8f5b30
	void *4cbac9db3c(); // Function GameplayAbilities.GameplayAbility.*4cbac9db3c //  // @ game+0xf8f5870
	void K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility //  // @ game+0x43bab4
	void *655c5ca3c0(); // Function GameplayAbilities.GameplayAbility.*655c5ca3c0 //  // @ game+0xf8f56d8
	void *548eb44e75(); // Function GameplayAbilities.GameplayAbility.*548eb44e75 //  // @ game+0xf8f5e64
	void *800b4e76bd(); // Function GameplayAbilities.GameplayAbility.*800b4e76bd //  // @ game+0xf8f5e3c
	void *c7d2ade266(); // Function GameplayAbilities.GameplayAbility.*c7d2ade266 //  // @ game+0xf8f57d0
	void *69c0084239(); // Function GameplayAbilities.GameplayAbility.*69c0084239 //  // @ game+0xf8f5ff0
	void *5f8d9b7c28(); // Function GameplayAbilities.GameplayAbility.*5f8d9b7c28 //  // @ game+0xf8f5128
	void *214cf028a0(); // Function GameplayAbilities.GameplayAbility.*214cf028a0 //  // @ game+0xf8f52b0
	void K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent //  // @ game+0x43bab4
	void K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent //  // @ game+0x43bab4
	void *44dd9784f7(); // Function GameplayAbilities.GameplayAbility.*44dd9784f7 //  // @ game+0xf8f62f8
	void *08a02d6f43(); // Function GameplayAbilities.GameplayAbility.*08a02d6f43 //  // @ game+0xf8f7b4c
	void *d712c9d941(); // Function GameplayAbilities.GameplayAbility.*d712c9d941 //  // @ game+0xf8f1c04
	void *df16ef9cbf(); // Function GameplayAbilities.GameplayAbility.*df16ef9cbf //  // @ game+0xf8f5f60
	void *692a9869ce(); // Function GameplayAbilities.GameplayAbility.*692a9869ce //  // @ game+0xf8f50d0
	void *1a6449e149(); // Function GameplayAbilities.GameplayAbility.*1a6449e149 //  // @ game+0xf8f0d8c
	void GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining //  // @ game+0xf8f5258
	void *13cdf3d3fc(); // Function GameplayAbilities.GameplayAbility.*13cdf3d3fc //  // @ game+0xf8f6224
	void *33748ffeb3(); // Function GameplayAbilities.GameplayAbility.*33748ffeb3 //  // @ game+0xf8f4bd0
	void *49f27ea7c3(); // Function GameplayAbilities.GameplayAbility.*49f27ea7c3 //  // @ game+0xf8f59fc
	void *13a5820b50(); // Function GameplayAbilities.GameplayAbility.*13a5820b50 //  // @ game+0xf8f5894
	void *29a4746514(); // Function GameplayAbilities.GameplayAbility.*29a4746514 //  // @ game+0xf8f5c14
	void *616c9bd95e(); // Function GameplayAbilities.GameplayAbility.*616c9bd95e //  // @ game+0xf8f0bcc
	void *675326b1db(); // Function GameplayAbilities.GameplayAbility.*675326b1db //  // @ game+0xf8f6008
	void *def71bdc68(); // Function GameplayAbilities.GameplayAbility.*def71bdc68 //  // @ game+0xf8ef41c
	void GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel //  // @ game+0xf8f4bac
	void *8e0096735f(); // Function GameplayAbilities.GameplayAbility.*8e0096735f //  // @ game+0xf8f142c
	void *fd073ea3fe(); // Function GameplayAbilities.GameplayAbility.*fd073ea3fe //  // @ game+0xdafe968
	void *85a52d6040(); // Function GameplayAbilities.GameplayAbility.*85a52d6040 //  // @ game+0xf8f5104
	void *01f6dc45fd(); // Function GameplayAbilities.GameplayAbility.*01f6dc45fd //  // @ game+0xf8f7c20
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility //  // @ game+0x43bab4
	void *7a0e698cc4(); // Function GameplayAbilities.GameplayAbility.*7a0e698cc4 //  // @ game+0xf8f5e8c
	void *ef3ec92471(); // Function GameplayAbilities.GameplayAbility.*ef3ec92471 //  // @ game+0xf8f0cac
	void *acec922f5e(); // Function GameplayAbilities.GameplayAbility.*acec922f5e //  // @ game+0xf8f79d0
	void *756cd66715(); // Function GameplayAbilities.GameplayAbility.*756cd66715 //  // @ game+0xf8f5e14
	void *70368a90e9(); // Function GameplayAbilities.GameplayAbility.*70368a90e9 //  // @ game+0xf8f56b4
	void *95dace5e07(); // Function GameplayAbilities.GameplayAbility.*95dace5e07 //  // @ game+0xf8f5298
	void *2f20835b96(); // Function GameplayAbilities.GameplayAbility.*2f20835b96 //  // @ game+0xf8ff72c
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x460 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGameplayCueNotify_Actor : AActor {
	bool *18843af52e; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float *516383418c; // 0x404(0x04)
	bool *c5839580c2; // 0x408(0x01)
	bool *348b12f812; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct FGameplayTag GameplayCueTag; // 0x410(0x08)
	struct FName GameplayCueName; // 0x418(0x08)
	bool *0e78dc05ee; // 0x420(0x01)
	bool *3ad5272d74; // 0x421(0x01)
	bool *4d77b0b923; // 0x422(0x01)
	bool *15b9c8e660; // 0x423(0x01)
	bool *176c4b130d; // 0x424(0x01)
	bool *bcc8bd47b0; // 0x425(0x01)
	char pad_426[0x2]; // 0x426(0x02)
	int32 *0197b5ed63; // 0x428(0x04)
	char pad_42C[0x34]; // 0x42c(0x34)

	void *7ec0d0788c(); // Function GameplayAbilities.GameplayCueNotify_Actor.*7ec0d0788c //  // @ game+0xc4d2cc
	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute //  // @ game+0xf8fa8f8
	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive //  // @ game+0xf8fa4d8
	void OnOwnerDestroyed(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed //  // @ game+0xdb94018
	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue //  // @ game+0x43bab4
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive //  // @ game+0xf906818
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove //  // @ game+0xf8fb3f8
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *3ad5272d74; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute //  // @ game+0xf8fa9fc
	void K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue //  // @ game+0x43bab4
	void OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove //  // @ game+0xf8fb4fc
	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive //  // @ game+0xf8fa5dc
	void WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive //  // @ game+0xf90691c
};

// Class GameplayAbilities.*67a5f4d958
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*67a5f4d958 : UBlueprintAsyncActionBase {
	char pad_30[0x8]; // 0x30(0x08)

	void *d38f7aab53(); // Function GameplayAbilities.*67a5f4d958.*d38f7aab53 //  // @ game+0xffa970
};

// Class GameplayAbilities.*82685ec3b3
// Size: 0x188 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*82685ec3b3 : U*67a5f4d958 {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0x140]; // 0x48(0x140)

	void *eeffcde06d(); // Function GameplayAbilities.*82685ec3b3.*eeffcde06d //  // @ game+0xf88b8d4
	void OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*82685ec3b3.OnAppliedDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class GameplayAbilities.*5f9f849881
// Size: 0x60 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*5f9f849881 : U*67a5f4d958 {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void *36be75bbcb(); // Function GameplayAbilities.*5f9f849881.*36be75bbcb //  // @ game+0xf88bc0c
	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*5f9f849881.EventReceivedDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class GameplayAbilities.*3322714173
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*3322714173 : U*67a5f4d958 {
	char pad_38[0x20]; // 0x38(0x20)

	void AsyncWaitGameplayTagDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*3322714173.AsyncWaitGameplayTagDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class GameplayAbilities.*8965afcf71
// Size: 0x68 (Inherited: 0x58)  [layout: KHOP]
struct U*8965afcf71 : U*3322714173 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	void *48763d2754(); // Function GameplayAbilities.*8965afcf71.*48763d2754 //  // @ game+0xf88bd34
};

// Class GameplayAbilities.*71f1b643c7
// Size: 0x68 (Inherited: 0x58)  [layout: KHOP]
struct U*71f1b643c7 : U*3322714173 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	void *f982817c77(); // Function GameplayAbilities.*71f1b643c7.*f982817c77 //  // @ game+0xf88be20
};

// Class GameplayAbilities.*1b0ff995e9
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*1b0ff995e9 : UInterface {

	void BlueprintCustomHandler(); // Function GameplayAbilities.*1b0ff995e9.BlueprintCustomHandler //  // @ game+0x43bab4
	void *6554c7b45b(); // Function GameplayAbilities.*1b0ff995e9.*6554c7b45b //  // @ game+0xf885a28
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	void *c4bed269e9(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c4bed269e9 //  // @ game+0xf884324
	void *0d2c893268(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0d2c893268 //  // @ game+0xf889ed0
	void *e0f0722a8b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e0f0722a8b //  // @ game+0xf887460
	void *303a1e8a61(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*303a1e8a61 //  // @ game+0xf885f88
	void SetDuration(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration //  // @ game+0xf88a62c
	void *5ef4133a40(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5ef4133a40 //  // @ game+0xf88096c
	void IsInstigatorLocallyControlled(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled //  // @ game+0xf887f74
	void *2ee07845ad(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*2ee07845ad //  // @ game+0xf885cf0
	void *1d4f09b6e1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1d4f09b6e1 //  // @ game+0xf883b7c
	void *1d580691df(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1d580691df //  // @ game+0xf880e50
	void IsValid(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid //  // @ game+0xf888114
	void *b341fecc88(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b341fecc88 //  // @ game+0xf8858a4
	void HasHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult //  // @ game+0xf887e94
	void *0b983d946b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0b983d946b //  // @ game+0xf889420
	void *733ec3ba37(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*733ec3ba37 //  // @ game+0xf884074
	void *31d9f7371c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*31d9f7371c //  // @ game+0xf8845b0
	void *64b93e784f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*64b93e784f //  // @ game+0xf88b3cc
	void *e771df74c3(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e771df74c3 //  // @ game+0xf887afc
	void *7d6d6b824f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7d6d6b824f //  // @ game+0xf881174
	void *388208496f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*388208496f //  // @ game+0xf887d70
	void *b290fe9f95(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b290fe9f95 //  // @ game+0xf886fb0
	void *5e20204407(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*5e20204407 //  // @ game+0xf88b790
	void *545597805f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*545597805f //  // @ game+0xf8865c4
	void *074e13be7d(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*074e13be7d //  // @ game+0xf883a7c
	void *34f3808f25(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*34f3808f25 //  // @ game+0xf8863bc
	void *07160b89e9(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*07160b89e9 //  // @ game+0xf887c10
	void *adc2315776(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*adc2315776 //  // @ game+0xf88b51c
	void *6f6bcdab77(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6f6bcdab77 //  // @ game+0xf88626c
	void *982ee2913b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*982ee2913b //  // @ game+0xf8833d4
	void BreakGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters //  // @ game+0xf882870
	void *1d49ff2a4e(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1d49ff2a4e //  // @ game+0xf883f20
	void *b114e21103(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*b114e21103 //  // @ game+0xf885bac
	void *dc2d5e5e65(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dc2d5e5e65 //  // @ game+0xf8812d0
	void *300170c42c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*300170c42c //  // @ game+0xf883928
	void *91812e50df(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*91812e50df //  // @ game+0xf886bb0
	void *081dae09f4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*081dae09f4 //  // @ game+0xf88766c
	void *dba91c4799(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dba91c4799 //  // @ game+0xf8882a4
	void *17b86ae931(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*17b86ae931 //  // @ game+0xf880478
	void *bb632f48d0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bb632f48d0 //  // @ game+0xf885a3c
	void *4777bb856c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4777bb856c //  // @ game+0xf88b660
	void *8c696f5501(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8c696f5501 //  // @ game+0xf8807d0
	void *dec479bc07(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dec479bc07 //  // @ game+0xf886184
	void GetHitResult(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult //  // @ game+0xf887344
	void GetOrigin(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin //  // @ game+0xf8879f8
	void *20dabfae25(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*20dabfae25 //  // @ game+0xf883dcc
	void *534fcceff9(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*534fcceff9 //  // @ game+0xf8877d4
	void *710f1137f5(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*710f1137f5 //  // @ game+0xf885c28
	void GetEffectContext(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext //  // @ game+0xf886684
	void *73e4f8b520(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*73e4f8b520 //  // @ game+0xf88a1c8
	void *81ac6086d8(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*81ac6086d8 //  // @ game+0xf88b234
	void *7ca2c7ab66(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*7ca2c7ab66 //  // @ game+0xf88728c
	void *331ddea6e7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*331ddea6e7 //  // @ game+0xf87fd88
	void *12caa89f57(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*12caa89f57 //  // @ game+0xf88012c
	void *cf002b16e7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*cf002b16e7 //  // @ game+0xf88b06c
	void *c6989c3e3f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*c6989c3e3f //  // @ game+0xf886db0
	void *a2511ddb34(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*a2511ddb34 //  // @ game+0xf87fe44
	void *9dee71478f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9dee71478f //  // @ game+0xf880280
	void MakeGameplayCueParameters(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters //  // @ game+0xf8883f0
	void *6a42e5acf9(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6a42e5acf9 //  // @ game+0xf883604
	void *4b952b463f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4b952b463f //  // @ game+0xf8869b0
	void *bd368418fa(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*bd368418fa //  // @ game+0xf880048
	void *627ed95e5f(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*627ed95e5f //  // @ game+0xf8864d0
	void *e51856d7b2(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*e51856d7b2 //  // @ game+0xf885d70
	void *0392b5f66c(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*0392b5f66c //  // @ game+0xf883240
	void *782fefd355(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*782fefd355 //  // @ game+0xf888044
	void *637bcd7cca(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*637bcd7cca //  // @ game+0xf8841cc
	void *797bd657fc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*797bd657fc //  // @ game+0xf884d38
	void *dbe8016f7b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*dbe8016f7b //  // @ game+0xf8867b0
	void *1d0c574af4(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*1d0c574af4 //  // @ game+0xf885ed8
	void GetInstigatorActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor //  // @ game+0xf8875bc
	void *648925f68b(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*648925f68b //  // @ game+0xf881da0
	void *8805ce6985(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*8805ce6985 //  // @ game+0xf886088
	void *4a29810d92(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4a29810d92 //  // @ game+0xf885e30
	void *9e09c805d7(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*9e09c805d7 //  // @ game+0xf8848a8
	void *4ed92a1e24(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*4ed92a1e24 //  // @ game+0xf883cd0
	void SendGameplayEventToActor(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor //  // @ game+0xf88a4e4
	void *3c0b503dcc(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*3c0b503dcc //  // @ game+0xf8870fc
	void *12172a1aa1(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*12172a1aa1 //  // @ game+0xf880b60
	void *90b1ea67ec(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*90b1ea67ec //  // @ game+0xf884444
	void *39fb635918(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*39fb635918 //  // @ game+0xf880c94
	void *811ba3a39a(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*811ba3a39a //  // @ game+0xf886008
	void *6b670ba1c0(); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.*6b670ba1c0 //  // @ game+0xf883740
};

// Class GameplayAbilities.*5ac8614158
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*5ac8614158 : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4e8 (Inherited: 0x4e8)  [layout: KHOP]
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
	struct FGameplayTag *d3cac66c72; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *f11b7d08e0; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *bddb676446; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *b24c13746f; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *565c1287d3; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *ed8834215d; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*87ff8eeece *b1b9878d38; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *1d8a35f841; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *31aedbf985; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *ed8225cc9e; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*5799e968c5* *b0140b4775; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	bool ReplicateActivationOwnedTags; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct UGameplayCueManager* *129901ce2f; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts //  // @ game+0xf8ffbd0
	void ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility //  // @ game+0xda95664
	void ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility //  // @ game+0xda95664
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities //  // @ game+0x1053c04
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns //  // @ game+0xe48ce20
	void ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility //  // @ game+0xda95664
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x4b0 (Inherited: 0x490)  [layout: KHOP]
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_490[0x18]; // 0x490(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x4a8(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *d60ea4430b; // 0x88(0x08)
	enum class *41eaaf581d *2017922a4f; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *d86c0379a3; // 0x94(0x0c)
	float *04f2b9ea98; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf8 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector WorldDirection; // 0xd0(0x0c)
	float Strength; // 0xdc(0x04)
	float Duration; // 0xe0(0x04)
	bool *463e966410; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *f7877bffd6; // 0xe8(0x08)
	bool *8d9af5e6a6; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	void *0184185995(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*0184185995 //  // @ game+0xf8e362c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x118 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FMulticastDelegate OnLanded; // 0xd0(0x10)
	struct FRotator Rotation; // 0xe0(0x0c)
	float Distance; // 0xec(0x04)
	float Height; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	float *9677577b68; // 0xf8(0x04)
	bool *3db618dc94; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*5e2750edbb* *c39106fe82; // 0x100(0x08)
	struct UCurveFloat* *2e199e37c1; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish //  // @ game+0xf8f46fc
	void *5d158d6231(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*5d158d6231 //  // @ game+0xf8e53e0
	void OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback //  // @ game+0xf8fafcc
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c) rep=OnRep_TargetLocation
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *e9f0725222; // 0xf8(0x0c)
	enum class *93ca53f0cb *e2281abc08; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *35043fedd0; // 0x10c(0x01)
	bool *94a912daf0; // 0x10d(0x01)
	enum class EMovementMode *dc29b2f742; // 0x10e(0x01)
	bool *01f1175716; // 0x10f(0x01)
	struct U*5e2750edbb* *c39106fe82; // 0x110(0x08)
	struct UCurveFloat* *2e199e37c1; // 0x118(0x08)
	struct UCurveFloat* *1536585af4; // 0x120(0x08)
	struct UCurveFloat* *04dacc59d9; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void *127c5b98d0(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*127c5b98d0 //  // @ game+0xf8eae38
	void *889d78322c(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*889d78322c //  // @ game+0xf8e8418
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation //  // @ game+0xf8fb62c
	void *b55d66629a(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*b55d66629a //  // @ game+0xf8fb664
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *94a912daf0; // 0xfc(0x01)
	enum class EMovementMode *dc29b2f742; // 0xfd(0x01)
	bool *01f1175716; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*5e2750edbb* *c39106fe82; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void *1f12571bd7(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*1f12571bd7 //  // @ game+0xf8e99dc
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)  [layout: KHOP]
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *6a4d0eb056; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *28c5ad03d9; // 0xf4(0x01)
	bool *463e966410; // 0xf5(0x01)
	bool *8e531f08c1; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *e4ce045186; // 0xf8(0x08)
	struct UCurveFloat* *f7877bffd6; // 0x100(0x08)
	bool *1f368234fa; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *c46c774b7d; // 0x10c(0x0c)

	void *ffad24b94f(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*ffad24b94f //  // @ game+0xf8ec4f0
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)  [layout: KHOP]
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *b83a501e13; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *bec3909269; // 0xc0(0x08)
	struct U*5e2750edbb* *972e255a73; // 0xc8(0x08)

	void MoveToLocation(); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation //  // @ game+0xf8f8594
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *833b24e855(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*833b24e855 //  // @ game+0xf8fb650
	void *9b3502697e(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*9b3502697e //  // @ game+0xf9064c8
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *170a6f3a2c; // 0x158(0x08)
	float *b213864d95; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *5572cf4523; // 0x168(0x08)
	float *fddf77644b; // 0x170(0x04)
	float *2ff71cf8a2; // 0x174(0x04)
	bool *93dee4fab2; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	void *ff67641ee1(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*ff67641ee1 //  // @ game+0xf8fb214
	void *b1ff153b18(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*b1ff153b18 //  // @ game+0xf8fb09c
	void *8620a8a63b(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*8620a8a63b //  // @ game+0xf8f1cc0
	void OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded //  // @ game+0xf8fb158
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction //  // @ game+0xf8fc2dc
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	void SpawnActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor //  // @ game+0xf8ff82c
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor //  // @ game+0xf8f4710
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor //  // @ game+0xf8f0e6c
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *e127b77979(); // Function GameplayAbilities.AbilityTask_StartAbilityState.*e127b77979 //  // @ game+0xf8ff9a0
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct AGameplayAbilityWorldReticle : AActor {
	struct F*047947da65 Parameters; // 0x400(0x0c)
	bool bFaceOwnerFlat; // 0x40c(0x01)
	bool bSnapToTargetedActor; // 0x40d(0x01)
	bool bIsTargetValid; // 0x40e(0x01)
	bool bIsTargetAnActor; // 0x40f(0x01)
	struct APlayerController* MasterPC; // 0x410(0x08)
	struct AActor* TargetingActor; // 0x418(0x08)

	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor //  // @ game+0x43bab4
	void SetReticleMaterialParamFloat(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat //  // @ game+0x43bab4
	void SetReticleMaterialParamVector(); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector //  // @ game+0x43bab4
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized //  // @ game+0x43bab4
	void OnValidTargetChanged(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged //  // @ game+0x43bab4
	void *b6b0960470(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*b6b0960470 //  // @ game+0xf8f4680
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5d0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGameplayAbilityTargetActor : AActor {
	bool *5187a2b595; // 0x400(0x01)
	char pad_401[0xf]; // 0x401(0x0f)
	struct F*653d0e5c27 StartLocation; // 0x410(0x70)
	char pad_480[0xe0]; // 0x480(0xe0)
	struct APlayerController* MasterPC; // 0x560(0x08)
	struct UGameplayAbility* OwningAbility; // 0x568(0x08)
	bool bDestroyOnConfirmation; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct AActor* SourceActor; // 0x578(0x08)
	struct F*047947da65 ReticleParams; // 0x580(0x0c)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UClass* ReticleClass; // 0x590(0x08)
	struct F*cc505002f9 Filter; // 0x598(0x10)
	bool bDebug; // 0x5a8(0x01)
	char pad_5A9[0x17]; // 0x5a9(0x17)
	struct UAbilitySystemComponent* *df480fe052; // 0x5c0(0x08)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting //  // @ game+0x2f318c
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting //  // @ game+0xdae4228
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	void *25e702dfb0(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*25e702dfb0 //  // @ game+0xf9009d0
	void *0cd56e5b5e(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*0cd56e5b5e //  // @ game+0xf8fffbc
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor //  // @ game+0xf8f4854
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor //  // @ game+0xf8f1004
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x188 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xf0]; // 0x98(0xf0)

	void *d3f39faa1a(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*d3f39faa1a //  // @ game+0xf901f14
	void *ec06bfbcc6(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*ec06bfbcc6 //  // @ game+0xf8fa3e0
	void *c142a41651(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*c142a41651 //  // @ game+0xf90228c
	void *3a128c53b4(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*3a128c53b4 //  // @ game+0xf90207c
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	void *c2968f18e6(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*c2968f18e6 //  // @ game+0xf8fa45c
	void *033394ca10(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*033394ca10 //  // @ game+0xf90259c
	void *f7dd2a054a(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*f7dd2a054a //  // @ game+0xf90244c
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)  [layout: KHOP]
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *72b88cb58e; // 0xe0(0x08)

	void *e637dd6652(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*e637dd6652 //  // @ game+0xf902718
	void *ebd13897d7(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*ebd13897d7 //  // @ game+0xf9040cc
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)  [layout: KHOP]
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *72b88cb58e; // 0x110(0x08)

	void *d11d114121(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*d11d114121 //  // @ game+0xf902a20
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)  [layout: KHOP]
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *72b88cb58e; // 0xd8(0x08)

	void *fcae47883e(); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*fcae47883e //  // @ game+0xf9035bc
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *2acadf8980(); // Function GameplayAbilities.AbilityTask_WaitCancel.*2acadf8980 //  // @ game+0xf8fa840
	void *caa56441e3(); // Function GameplayAbilities.AbilityTask_WaitCancel.*caa56441e3 //  // @ game+0xf9013e4
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback //  // @ game+0xf8fb060
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback //  // @ game+0xf8fa868
	void *20bf51d622(); // Function GameplayAbilities.AbilityTask_WaitConfirm.*20bf51d622 //  // @ game+0xf901464
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void *2acadf8980(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*2acadf8980 //  // @ game+0xf8fa854
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback //  // @ game+0xf8fa8e4
	void *a607f1efd8(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*a607f1efd8 //  // @ game+0xf9014e4
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback //  // @ game+0xf8fb088
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback //  // @ game+0xf8fb074
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay //  // @ game+0xf901564
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x250 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x1b8]; // 0x88(0x1b8)
	struct UAbilitySystemComponent* *72b88cb58e; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)

	void *0f27f5acfd(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*0f27f5acfd //  // @ game+0xf8fa6e0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x270 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	void *100b9b4a7c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*100b9b4a7c //  // @ game+0xf904e68
	void *fb5c88f66d(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*fb5c88f66d //  // @ game+0xf9051e4
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x270 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	void *084d13a847(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*084d13a847 //  // @ game+0xf90550c
	void *d4b3ab03c3(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*d4b3ab03c3 //  // @ game+0xf905888
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x1c0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x118]; // 0x98(0x118)
	struct UAbilitySystemComponent* *72b88cb58e; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void *e5fd8737de(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*e5fd8737de //  // @ game+0xf905bb0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	void *cc2d73c453(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*cc2d73c453 //  // @ game+0xf8fab00
	void *c4a10ff1a9(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*c4a10ff1a9 //  // @ game+0xf904c50
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *ae3544759a(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*ae3544759a //  // @ game+0xf8fabe4
	void *602c34692d(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*602c34692d //  // @ game+0xf904d1c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *69606b6737; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	void *5c853856ba(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*5c853856ba //  // @ game+0xf905ec0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *69606b6737; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *0ab5f1567e(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*0ab5f1567e //  // @ game+0xf8f4af0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)  [layout: KHOP]
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	void *e3692b35c5(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*e3692b35c5 //  // @ game+0xf906078
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)  [layout: KHOP]
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	void *a19093f101(); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*a19093f101 //  // @ game+0xf9061dc
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *6da9aff678(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*6da9aff678 //  // @ game+0xf8fb3d0
	void *31bfc22dcd(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*31bfc22dcd //  // @ game+0xf906340
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *25b0ce1209(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*25b0ce1209 //  // @ game+0xf8fb3e4
	void *25f9d1f420(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*25f9d1f420 //  // @ game+0xf906404
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnMovementModeChange(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange //  // @ game+0xf8fb228
	void *06017b11f3(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*06017b11f3 //  // @ game+0xf8f398c
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)  [layout: KHOP]
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	void OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback //  // @ game+0xf8facd0
	void *4286047854(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*4286047854 //  // @ game+0xf904de8
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	void *e6cf89e840(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*e6cf89e840 //  // @ game+0xf8fb9b0
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor //  // @ game+0xf8f4950
	void *a1d667d70c(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*a1d667d70c //  // @ game+0xf906590
	void *61c27e6545(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*61c27e6545 //  // @ game+0xf8fb7e8
	void *1474abf5c8(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*1474abf5c8 //  // @ game+0xf9066d4
	void BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor //  // @ game+0xf8f10fc
	void *53b61fb19e(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*53b61fb19e //  // @ game+0xf8fb8ac
	void *ef2787f47e(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*ef2787f47e //  // @ game+0xf8fb724
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *6257eb4567; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *4a01115e4e(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*4a01115e4e //  // @ game+0xf8f3a54
};

// Class GameplayAbilities.*b4016dd7c4
// Size: 0x78 (Inherited: 0x38)  [layout: KHOP]
struct U*b4016dd7c4 : UAttributeSet {
	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)
};

// Class GameplayAbilities.*3d7ae25d79
// Size: 0x580 (Inherited: 0x580)  [layout: KHOP]
struct U*3d7ae25d79 : UGameplayAbility {
};

// Class GameplayAbilities.*6f47312a28
// Size: 0x5c0 (Inherited: 0x580)  [layout: LECH - offset chi la uoc luong]
struct U*6f47312a28 : UGameplayAbility {
	struct UAnimMontage* *170a6f3a2c; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *d7a18fd59a; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *a0b471e6e8; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)  [layout: KHOP]
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*db56c8bb91> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5d0 (Inherited: 0x5d0)  [layout: KHOP]
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5c8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5f0 (Inherited: 0x5d0)  [layout: LECH - offset chi la uoc luong]
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5c8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5d0(0x08)
	bool bTraceAffectsAimPitch; // 0x5d8(0x01)
	char pad_5D9[0x17]; // 0x5d9(0x17)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x610 (Inherited: 0x5f0)  [layout: LECH - offset chi la uoc luong]
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5e8(0x04)
	float CollisionHeight; // 0x5ec(0x04)
	char pad_5F0[0x20]; // 0x5f0(0x20)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x620 (Inherited: 0x610)  [layout: LECH - offset chi la uoc luong]
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x608(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x610(0x08)
	char pad_618[0x8]; // 0x618(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5f0 (Inherited: 0x5f0)  [layout: KHOP]
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x438 (Inherited: 0x420)  [layout: KHOP]
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x420(0x08)
	struct TArray<struct UActorComponent*> *82dc8b4a3c; // 0x428(0x10)
};

// Class GameplayAbilities.*efaf9e9a62
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*efaf9e9a62 : UObject {
};

// Class GameplayAbilities.*15b714390d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*15b714390d : U*efaf9e9a62 {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*aa45305a91 *2f5cd5fe0c; // 0xb0(0xb0)
	struct F*aa45305a91 *eaeeae8f15; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *e895405ed2; // 0x3b0(0x10)
	struct TArray<struct UClass*> *39519e019d; // 0x3c0(0x10)
	struct TArray<struct F*f1edbe0c54> *24f6ff7981; // 0x3d0(0x10)
	int32 *06cd10027c; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*826a361cfb> *9e51d42ac7; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.*76947086bb
// Size: 0x58 (Inherited: 0x48)  [layout: KHOP]
struct U*76947086bb : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*b324a26150
// Size: 0x98 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*b324a26150 : UDataAsset {
	struct TArray<struct F*9ba94b4d17> *8e52275c27; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*a76752a6d4
// Size: 0xae0 (Inherited: 0xae0)  [layout: KHOP]
struct U*a76752a6d4 : UGameplayEffect {
};

// Class GameplayAbilities.*0219479249
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*0219479249 : U*4902b8de9a {
	bool *2523fe4317; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void CalculateBaseMagnitude(); // Function GameplayAbilities.*0219479249.CalculateBaseMagnitude //  // @ game+0xf8f11f4
};

// Class GameplayAbilities.AbilitiesGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UAbilitiesGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct F*dfb7d0cb93> GrantAbilityConfigs; // 0x30(0x10)
};

// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct UAdditionalEffectsGameplayEffectComponent : UGameplayEffectComponent {
	bool bOnApplicationCopyDataFromOriginalSpec; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*1681ab95d0> OnApplicationGameplayEffects; // 0x38(0x10)
	struct TArray<struct UClass*> OnCompleteAlways; // 0x48(0x10)
	struct TArray<struct UClass*> OnCompleteNormal; // 0x58(0x10)
	struct TArray<struct UClass*> OnCompletePrematurely; // 0x68(0x10)
};

// Class GameplayAbilities.AssetTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)  [layout: KHOP]
struct UAssetTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct F*31e09eb06f InheritableAssetTags; // 0x30(0x60)
};

// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)  [layout: KHOP]
struct UBlockAbilityTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct F*31e09eb06f InheritableBlockedAbilityTagsContainer; // 0x30(0x60)
};

// Class GameplayAbilities.*6d1c352d4c
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*6d1c352d4c : UGameplayEffectComponent {
	struct FScalableFloat ChanceToApplyToTarget; // 0x30(0x30)
};

// Class GameplayAbilities.*74171b91ed
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*74171b91ed : UObject {

	void CanApplyGameplayEffect(); // Function GameplayAbilities.*74171b91ed.CanApplyGameplayEffect //  // @ game+0xf8f12c8
};

// Class GameplayAbilities.*fb1843327d
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*fb1843327d : UGameplayEffectComponent {
	struct TArray<struct UClass*> ApplicationRequirements; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayEffectUIData : UGameplayEffectComponent {
};

// Class GameplayAbilities.*6c57e058ef
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct U*6c57e058ef : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.ImmunityGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UImmunityGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct F*3a5184055d> ImmunityQueries; // 0x30(0x10)
};

// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct URemoveOtherGameplayEffectComponent : UGameplayEffectComponent {
	struct TArray<struct F*3a5184055d> RemoveGameplayEffectQueries; // 0x30(0x10)
};

// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
// Size: 0x1c8 (Inherited: 0x30)  [layout: KHOP]
struct UTargetTagRequirementsGameplayEffectComponent : UGameplayEffectComponent {
	struct F*4561a4dee3 ApplicationTagRequirements; // 0x30(0x88)
	struct F*4561a4dee3 OngoingTagRequirements; // 0xb8(0x88)
	struct F*4561a4dee3 RemovalTagRequirements; // 0x140(0x88)
};

// Class GameplayAbilities.TargetTagsGameplayEffectComponent
// Size: 0x90 (Inherited: 0x30)  [layout: KHOP]
struct UTargetTagsGameplayEffectComponent : UGameplayEffectComponent {
	struct F*31e09eb06f InheritableGrantedTagsContainer; // 0x30(0x60)
};

// Class GameplayAbilities.*5799e968c5
// Size: 0x260 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*5799e968c5 : UDataAsset {
	struct TArray<struct F*25ce64384a> Entries; // 0x38(0x10)
	char pad_48[0x218]; // 0x48(0x218)

	void *c53e067c2b(); // Function GameplayAbilities.*5799e968c5.*c53e067c2b //  // @ game+0xf8ffa90
};

// Class GameplayAbilities.*74d07f3bd1
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*74d07f3bd1 : UInterface {
};

