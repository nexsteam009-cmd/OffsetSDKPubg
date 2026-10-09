// Class Engine.*c4837fc2d7
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*c4837fc2d7 : UObject {
	char bCausedByWorld : 1; // 0x30(0x01)
	char bScaleMomentumByMass : 1; // 0x30(0x01)
	char bRadialDamageVelChange : 1; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DamageImpulse; // 0x34(0x04)
	float DestructibleImpulse; // 0x38(0x04)
	float DestructibleDamageSpreadScale; // 0x3c(0x04)
	float DamageFalloff; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.Actor
// Size: 0x400 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct AActor : UObject {
	uint64 *56bbcf6d4b; // 0x30(0x08)
	char pad_38[0xc]; // 0x38(0x0c)
	enum class EAutoReceiveInput *d7a7cc0b14; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x48(0x10)
	char pad_58_0 : 3; // 0x58(0x01)
	char *ff8d3c6307 : 1; // 0x58(0x01)
	char pad_59_0 : 1; // 0x59(0x01)
	char *919784995a : 1; // 0x59(0x01)
	char bReplicates : 1; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FName *fb469552c9; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct AActor* Owner; // 0x70(0x10) rep=OnRep_Owner
	struct FRepMovement ReplicatedMovement; // 0x80(0x34) rep=OnRep_ReplicatedMovement
	char pad_B4[0x4]; // 0xb4(0x04)
	struct F*f37dc87288 *46ff9e99d3; // 0xb8(0x40) rep=OnRep_AttachmentReplication
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMulticastDelegate OnTakePointDamage; // 0x100(0x10)
	enum class ENetRole Role; // 0x110(0x01) rep=OnRep_Role
	char pad_111[0x3]; // 0x111(0x03)
	float *bdad586455; // 0x114(0x04)
	struct FMulticastDelegate OnActorHit; // 0x118(0x10)
	float NetCullDistanceSquared; // 0x128(0x04)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FMulticastDelegate OnInputTouchLeave; // 0x130(0x10)
	char pad_140[0x4]; // 0x140(0x04)
	char bAutoDestroyWhenFinished : 1; // 0x144(0x01)
	char bCanBeDamaged : 1; // 0x144(0x01)
	char *6996b5652f : 1; // 0x144(0x01)
	char *4942e65b9f : 1; // 0x144(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x144(0x01)
	char *8899bfb4b2 : 1; // 0x144(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x144(0x01)
	char *95255b5699 : 1; // 0x144(0x01)
	char *1544cfca22 : 1; // 0x145(0x01)
	char pad_146[0x6]; // 0x146(0x06)
	int32 *cb3735cb6a; // 0x14c(0x04)
	struct FGuid DestructibleId; // 0x150(0x10)
	bool bIsDestroyedVersion; // 0x160(0x01)
	bool RemoveFromLevelLOD; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct F*de35836585 PrimaryActorTick; // 0x168(0x58)
	struct FMulticastDelegate OnReleased; // 0x1c0(0x10)
	struct UChildActorComponent* *869b61fb79; // 0x1d0(0x08)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1d8(0x10)
	float CustomTimeDilation; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct FMulticastDelegate OnActorEndOverlap; // 0x1f0(0x10)
	char *0cf3b6cc93 : 1; // 0x200(0x01)
	char pad_200_1 : 5; // 0x200(0x01)
	char *c616ecafe3 : 1; // 0x200(0x01)
	char *d9e26e0610 : 1; // 0x200(0x01)
	char *2c5c9158cf : 1; // 0x201(0x01)
	enum class EActorUpdateOverlapsMethod *b3c68f48b3; // 0x202(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x203(0x01)
	char pad_204[0x4]; // 0x204(0x04)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x208(0x10)
	char pad_218[0x50]; // 0x218(0x50)
	struct FMulticastDelegate OnBeginCursorOver; // 0x268(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x278(0x10)
	float MinNetUpdateFrequency; // 0x288(0x04)
	struct AActor* ParentComponentActor; // 0x28c(0x08)
	char pad_294[0xc]; // 0x294(0x0c)
	float NetUpdateFrequency; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct APawn* Instigator; // 0x2c0(0x08) rep=OnRep_Instigator
	struct TArray<struct FName> Layers; // 0x2c8(0x10)
	char pad_2D8[0x4]; // 0x2d8(0x04)
	int32 *0df550f47a; // 0x2dc(0x04)
	struct TArray<struct AActor*> Children; // 0x2e0(0x10)
	struct TArray<struct AMatineeActor*> *037abcd9f4; // 0x2f0(0x10)
	enum class *b693fa6992 InputConsumeOption; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x308(0x10)
	struct U*5ed7932f40* *5ed7932f40; // 0x318(0x08)
	float NetPriority; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<struct FName> Tags; // 0x328(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x338(0x10)
	char bHidden : 1; // 0x348(0x01)
	char *4bd2db771f : 1; // 0x348(0x01)
	char *b5d8f2348c : 1; // 0x348(0x01)
	char bOnlyRelevantToOwner : 1; // 0x348(0x01)
	char bAlwaysRelevant : 1; // 0x348(0x01)
	char *a806154b21 : 1; // 0x348(0x01) rep=OnRep_ReplicateMovement
	char *02913e3827 : 1; // 0x348(0x01)
	char *b5abc0cf88 : 1; // 0x348(0x01)
	char *f9aaa95402 : 1; // 0x349(0x01)
	char pad_349_1 : 1; // 0x349(0x01)
	char *5873264ad7 : 1; // 0x349(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x349(0x01)
	char *789db02621 : 1; // 0x349(0x01)
	char pad_349_5 : 1; // 0x349(0x01)
	char *dc197fe40c : 1; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	float InitialLifeSpan; // 0x34c(0x04)
	struct FMulticastDelegate OnClicked; // 0x350(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x360(0x10)
	char pad_370[0x50]; // 0x370(0x50)
	struct FMulticastDelegate OnDestroyed; // 0x3c0(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct USceneComponent* RootComponent; // 0x3e8(0x10)
	char pad_3F8[0x8]; // 0x3f8(0x08)

	void K2_SetActorLocation(); // Function Engine.Actor.K2_SetActorLocation //  // @ game+0xf3d13a4
	void *14645bdbf0(); // Function Engine.Actor.*14645bdbf0 //  // @ game+0xf3e1c68
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay //  // @ game+0x43bab4
	void K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation //  // @ game+0xf3d16cc
	void *8d6c328277(); // Function Engine.Actor.*8d6c328277 //  // @ game+0xf3c903c
	void *9f05ffb846(); // Function Engine.Actor.*9f05ffb846 //  // @ game+0xf3c952c
	void *6d98336fae(); // Function Engine.Actor.*6d98336fae //  // @ game+0xf3c84e4
	void *037fbc1930(); // Function Engine.Actor.*037fbc1930 //  // @ game+0xf3c6440
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement //  // @ game+0x11226c4
	void *ba507ba6c2(); // Function Engine.Actor.*ba507ba6c2 //  // @ game+0xf3d2944
	void *ad7ce5b113(); // Function Engine.Actor.*ad7ce5b113 //  // @ game+0xed2d98c
	void *93a8c2f012(); // Function Engine.Actor.*93a8c2f012 //  // @ game+0xf3d0660
	void *a26287f0c3(); // Function Engine.Actor.*a26287f0c3 //  // @ game+0x109235c
	void *82d8999eff(); // Function Engine.Actor.*82d8999eff //  // @ game+0xf3d077c
	void *4d62383d2e(); // Function Engine.Actor.*4d62383d2e //  // @ game+0xf3c9da8
	void K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform //  // @ game+0xf3d1b40
	void *bd6aceba5f(); // Function Engine.Actor.*bd6aceba5f //  // @ game+0xf3c6484
	void *22decd48a9(); // Function Engine.Actor.*22decd48a9 //  // @ game+0xf3c6174
	void K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor //  // @ game+0xf3cfe24
	void *601d227d87(); // Function Engine.Actor.*601d227d87 //  // @ game+0xf3f79fc
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled //  // @ game+0xf3e1ff8
	void GetActorBounds(); // Function Engine.Actor.GetActorBounds //  // @ game+0xf3c5850
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap //  // @ game+0x43bab4
	void ReceiveHit(); // Function Engine.Actor.ReceiveHit //  // @ game+0x43bab4
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript //  // @ game+0x43bab4
	void MakeNoise(); // Function Engine.Actor.MakeNoise //  // @ game+0xf3d38ac
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents //  // @ game+0xf3cac2c
	void *f1c161fab9(); // Function Engine.Actor.*f1c161fab9 //  // @ game+0xf3db230
	void K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation //  // @ game+0xf3ce8ec
	void *43fe6f0ae9(); // Function Engine.Actor.*43fe6f0ae9 //  // @ game+0xf3c5da4
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed //  // @ game+0x43bab4
	void GetTransform(); // Function Engine.Actor.GetTransform //  // @ game+0x1081424
	void K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset //  // @ game+0xf3cec00
	void AddComponent(); // Function Engine.Actor.AddComponent //  // @ game+0x10b961c
	void *f02cfaa66d(); // Function Engine.Actor.*f02cfaa66d //  // @ game+0xf3cbbe8
	void *c818151e2c(); // Function Engine.Actor.*c818151e2c //  // @ game+0xf3f790c
	void *67a847f071(); // Function Engine.Actor.*67a847f071 //  // @ game+0xf3cd11c
	void *e43ffc127f(); // Function Engine.Actor.*e43ffc127f //  // @ game+0xf3e2074
	void *6f37624552(); // Function Engine.Actor.*6f37624552 //  // @ game+0xf3caffc
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role //  // @ game+0x1111c7c
	void ActorHasTag(); // Function Engine.Actor.ActorHasTag //  // @ game+0xf399280
	void *9ee5d0b256(); // Function Engine.Actor.*9ee5d0b256 //  // @ game+0xf3c74d0
	void *be6da76cc6(); // Function Engine.Actor.*be6da76cc6 //  // @ game+0xf3c5bc8
	void K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform //  // @ game+0xf3cea4c
	void *22122297fa(); // Function Engine.Actor.*22122297fa //  // @ game+0xf3caf24
	void GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors //  // @ game+0xf3ca89c
	void *764726194e(); // Function Engine.Actor.*764726194e //  // @ game+0xf3c73f0
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor //  // @ game+0x1261074
	void *3f9277ca50(); // Function Engine.Actor.*3f9277ca50 //  // @ game+0xf3c5d48
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator //  // @ game+0x61a18c
	void *5b0f1f5926(); // Function Engine.Actor.*5b0f1f5926 //  // @ game+0xf3e1f6c
	void *758a4289ac(); // Function Engine.Actor.*758a4289ac //  // @ game+0xf3c8660
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd //  // @ game+0x43bab4
	void DisableInput(); // Function Engine.Actor.DisableInput //  // @ game+0xf3ac2cc
	void K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform //  // @ game+0xf3d198c
	void SetOwner(); // Function Engine.Actor.SetOwner //  // @ game+0xf3f3b8c
	void *c5381d86d7(); // Function Engine.Actor.*c5381d86d7 //  // @ game+0xf3cd138
	void *7949318a2d(); // Function Engine.Actor.*7949318a2d //  // @ game+0xf3f748c
	void *2ae4822ad0(); // Function Engine.Actor.*2ae4822ad0 //  // @ game+0xf3c961c
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate //  // @ game+0xf3c4dd4
	void *c941aceac9(); // Function Engine.Actor.*c941aceac9 //  // @ game+0xf3c9dc0
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver //  // @ game+0x43bab4
	void *a92a6f9d01(); // Function Engine.Actor.*a92a6f9d01 //  // @ game+0xf3edcd8
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin //  // @ game+0x43bab4
	void *b6736e3600(); // Function Engine.Actor.*b6736e3600 //  // @ game+0xf3f740c
	void *1709ebb8fe(); // Function Engine.Actor.*1709ebb8fe //  // @ game+0xdba0a00
	void *88decb25fd(); // Function Engine.Actor.*88decb25fd //  // @ game+0xf3c5bfc
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked //  // @ game+0x43bab4
	void ReceivePointDamage(); // Function Engine.Actor.ReceivePointDamage //  // @ game+0x43bab4
	void *94ba0887eb(); // Function Engine.Actor.*94ba0887eb //  // @ game+0xf3e1ee0
	void *5574d1981b(); // Function Engine.Actor.*5574d1981b //  // @ game+0xf3d0164
	void HasAuthority(); // Function Engine.Actor.HasAuthority //  // @ game+0xea5970
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame //  // @ game+0xf3e1ce8
	void K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation //  // @ game+0xf3d182c
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget //  // @ game+0x43bab4
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner //  // @ game+0xb77768
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement //  // @ game+0x6d0c20
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent //  // @ game+0xf3ac250
	void *8c84ae05d2(); // Function Engine.Actor.*8c84ae05d2 //  // @ game+0xf3c5d60
	void K2_AddActorWorldTransform(); // Function Engine.Actor.K2_AddActorWorldTransform //  // @ game+0xf3ceec0
	void *8a4383565b(); // Function Engine.Actor.*8a4383565b //  // @ game+0xf3c9b40
	void *13edf375cc(); // Function Engine.Actor.*13edf375cc //  // @ game+0xf3db130
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay //  // @ game+0x43bab4
	void *50b72abd43(); // Function Engine.Actor.*50b72abd43 //  // @ game+0xf3ccaa8
	void *1f647c197f(); // Function Engine.Actor.*1f647c197f //  // @ game+0xf3d0e18
	void K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset //  // @ game+0xf3ce78c
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick //  // @ game+0x43bab4
	void *132dadde46(); // Function Engine.Actor.*132dadde46 //  // @ game+0xf3a01f0
	void *6589be2400(); // Function Engine.Actor.*6589be2400 //  // @ game+0xf3cafd8
	void *b1618fe6f3(); // Function Engine.Actor.*b1618fe6f3 //  // @ game+0xf3f973c
	void *1096e8ab60(); // Function Engine.Actor.*1096e8ab60 //  // @ game+0xf3cd1a8
	void *29354d98c1(); // Function Engine.Actor.*29354d98c1 //  // @ game+0xf3c90c8
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver //  // @ game+0x43bab4
	void *ef245c90eb(); // Function Engine.Actor.*ef245c90eb //  // @ game+0xf3c5ab0
	void *53c67901f2(); // Function Engine.Actor.*53c67901f2 //  // @ game+0xf3d3844
	void *93bcb49dfe(); // Function Engine.Actor.*93bcb49dfe //  // @ game+0xf3c8570
	void *f7ff01f27a(); // Function Engine.Actor.*f7ff01f27a //  // @ game+0xf3c75a4
	void *0cbadf84d3(); // Function Engine.Actor.*0cbadf84d3 //  // @ game+0xf3d030c
	void *5c521e91bf(); // Function Engine.Actor.*5c521e91bf //  // @ game+0xf3cc754
	void *f622de680d(); // Function Engine.Actor.*f622de680d //  // @ game+0xf3c4dc0
	void K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo //  // @ game+0xf3cfc24
	void K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation //  // @ game+0xf3ced60
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation //  // @ game+0x11fecc8
	void *0393d9aba1(); // Function Engine.Actor.*0393d9aba1 //  // @ game+0xf3c5d14
	void GetVelocity(); // Function Engine.Actor.GetVelocity //  // @ game+0xf3cca70
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor //  // @ game+0xf3a00f0
	void *c9cf0764a6(); // Function Engine.Actor.*c9cf0764a6 //  // @ game+0xf3fc678
	void ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage //  // @ game+0x43bab4
	void *b69ec2b51f(); // Function Engine.Actor.*b69ec2b51f //  // @ game+0xf3c59ac
	void *6efe3a3426(); // Function Engine.Actor.*6efe3a3426 //  // @ game+0xf3c59d4
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave //  // @ game+0x43bab4
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap //  // @ game+0x43bab4
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter //  // @ game+0x43bab4
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget //  // @ game+0x43bab4
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication //  // @ game+0x9b4fa0
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset //  // @ game+0x43bab4
	void ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage //  // @ game+0x43bab4
	void TearOff(); // Function Engine.Actor.TearOff //  // @ game+0xf3fae68
	void K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation //  // @ game+0xf3d1518
	void *c42e130b79(); // Function Engine.Actor.*c42e130b79 //  // @ game+0xf3c641c
	void *b66ddcd674(); // Function Engine.Actor.*b66ddcd674 //  // @ game+0xf3ce1d8
	void K2_SetActorRotation(); // Function Engine.Actor.K2_SetActorRotation //  // @ game+0x9083e0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased //  // @ game+0x43bab4
	void *0ba48f84ba(); // Function Engine.Actor.*0ba48f84ba //  // @ game+0xf3c9e38
};

// Class Engine.HUD
// Size: 0x4e8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; // 0x400(0x08)
	char bLostFocusPaused : 1; // 0x408(0x01)
	char bShowHUD : 1; // 0x408(0x01)
	char bShowDebugInfo : 1; // 0x408(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x408(0x01)
	char bShowOverlays : 1; // 0x408(0x01)
	char bEnableDebugTextShadow : 1; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct AActor*> *22145f41a4; // 0x410(0x10)
	char pad_420[0x8]; // 0x420(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x428(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x438(0x10)
	struct UCanvas* Canvas; // 0x448(0x08)
	struct UCanvas* *267fcb368c; // 0x450(0x08)
	struct TArray<struct F*a8cc5d64f6> *c0ad332281; // 0x458(0x10)
	struct UClass* *9f93228a10; // 0x468(0x08)
	struct AActor* *a26a8ed90c; // 0x470(0x08)
	char pad_478[0x70]; // 0x478(0x70)

	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver //  // @ game+0x43bab4
	void *371847909f(); // Function Engine.HUD.*371847909f //  // @ game+0xf3daeac
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick //  // @ game+0x43bab4
	void *a10e1cf5c2(); // Function Engine.HUD.*a10e1cf5c2 //  // @ game+0xf3db028
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease //  // @ game+0x43bab4
	void *9b0436f793(); // Function Engine.HUD.*9b0436f793 //  // @ game+0xf3b7cac
	void ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD //  // @ game+0x43bab4
	void Project(); // Function Engine.HUD.Project //  // @ game+0xf3dac78
	void ShowHUD(); // Function Engine.HUD.ShowHUD //  // @ game+0xdac1ed4
	void *4c67965d85(); // Function Engine.HUD.*4c67965d85 //  // @ game+0xf3c5ebc
	void *98cd2f0ab6(); // Function Engine.HUD.*98cd2f0ab6 //  // @ game+0xdb421c8
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle //  // @ game+0xf3f962c
	void *2c0638e33a(); // Function Engine.HUD.*2c0638e33a //  // @ game+0xf3ba4c8
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver //  // @ game+0x43bab4
	void *5ee6e3acb1(); // Function Engine.HUD.*5ee6e3acb1 //  // @ game+0xf3ac3dc
	void *a040c80199(); // Function Engine.HUD.*a040c80199 //  // @ game+0xf39a784
	void Deproject(); // Function Engine.HUD.Deproject //  // @ game+0xf3aab94
	void *d2c862547a(); // Function Engine.HUD.*d2c862547a //  // @ game+0xf3b8028
	void *29fcbd6607(); // Function Engine.HUD.*29fcbd6607 //  // @ game+0xf3caf8c
	void AddHitBox(); // Function Engine.HUD.AddHitBox //  // @ game+0xf39bfb8
	void *393904f73e(); // Function Engine.HUD.*393904f73e //  // @ game+0xf3b4e24
	void DrawTexture(); // Function Engine.HUD.DrawTexture //  // @ game+0xf3bb008
	void *53c94d6eb1(); // Function Engine.HUD.*53c94d6eb1 //  // @ game+0xf3af1e0
	void *68cde72707(); // Function Engine.HUD.*68cde72707 //  // @ game+0xf3c0f04
	void *6817a4e454(); // Function Engine.HUD.*6817a4e454 //  // @ game+0xf3cbc74
	void ShowDebug(); // Function Engine.HUD.ShowDebug //  // @ game+0xdaac2bc
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory //  // @ game+0xf3f96c4
};

// Class Engine.ActorComponent
// Size: 0x210 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UActorComponent : UObject {
	char pad_30[0xf0]; // 0x30(0xf0)
	struct F*1e1a7d45ee PrimaryComponentTick; // 0x120(0x58)
	struct TArray<struct FName> ComponentTags; // 0x178(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x188(0x10)
	char pad_198_0 : 3; // 0x198(0x01)
	char bReplicates : 1; // 0x198(0x01)
	char bNetAddressable : 1; // 0x198(0x01)
	char *3e6e12616c : 1; // 0x198(0x01)
	char pad_199[0x1]; // 0x199(0x01)
	char pad_19A_0 : 2; // 0x19a(0x01)
	char bCreatedByConstructionScript : 1; // 0x19a(0x01)
	char bInstanceComponent : 1; // 0x19a(0x01)
	char bAutoActivate : 1; // 0x19a(0x01)
	char *49896f2b03 : 1; // 0x19a(0x01) rep=OnRep_IsActive
	char *4c91df60b4 : 1; // 0x19a(0x01)
	char pad_19B[0x1]; // 0x19b(0x01)
	struct FGuid DestructibleId; // 0x19c(0x10)
	bool bIsDestroyedVersion; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	char bCanEverAffectNavigation : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 2; // 0x1b0(0x01)
	char bIsEditorOnly : 1; // 0x1b0(0x01)
	char pad_1B1[0xb]; // 0x1b1(0x0b)
	enum class EComponentCreationMethod CreationMethod; // 0x1bc(0x01)
	enum class EPendingCreationType *3b41e0e583; // 0x1bd(0x01)
	char pad_1BE[0xa]; // 0x1be(0x0a)
	struct TArray<struct FSimpleMemberReference> *bee8614653; // 0x1c8(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1d8(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1e8(0x10)
	char pad_1F8[0x9]; // 0x1f8(0x09)
	char *919784995a : 1; // 0x201(0x01)
	char pad_202[0xe]; // 0x202(0x0e)

	void *601d227d87(); // Function Engine.ActorComponent.*601d227d87 //  // @ game+0xf3f7a80
	void *d050b5427a(); // Function Engine.ActorComponent.*d050b5427a //  // @ game+0xf3faed4
	void IsActive(); // Function Engine.ActorComponent.IsActive //  // @ game+0xf3cd0f4
	void *846f5e4ddf(); // Function Engine.ActorComponent.*846f5e4ddf //  // @ game+0xf3e1ba8
	void *22122297fa(); // Function Engine.ActorComponent.*22122297fa //  // @ game+0x108ba00
	void *7d9e7a2573(); // Function Engine.ActorComponent.*7d9e7a2573 //  // @ game+0xf3e7c40
	void *93a8c2f012(); // Function Engine.ActorComponent.*93a8c2f012 //  // @ game+0xf3d06e4
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor //  // @ game+0xf3a0170
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick //  // @ game+0x43bab4
	void *132dadde46(); // Function Engine.ActorComponent.*132dadde46 //  // @ game+0xf3a0270
	void *098a9f76e5(); // Function Engine.ActorComponent.*098a9f76e5 //  // @ game+0xf3e7bc0
	void *c818151e2c(); // Function Engine.ActorComponent.*c818151e2c //  // @ game+0xf3f7984
	void Activate(); // Function Engine.ActorComponent.Activate //  // @ game+0x120947c
	void *7e0648d965(); // Function Engine.ActorComponent.*7e0648d965 //  // @ game+0xf3edc5c
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive //  // @ game+0xf3d696c
	void *fdec1cfa92(); // Function Engine.ActorComponent.*fdec1cfa92 //  // @ game+0xf3cd18c
	void *01fb187d8f(); // Function Engine.ActorComponent.*01fb187d8f //  // @ game+0xf3c7480
	void *f56024d94f(); // Function Engine.ActorComponent.*f56024d94f //  // @ game+0xf3cd298
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay //  // @ game+0x43bab4
	void *13edf375cc(); // Function Engine.ActorComponent.*13edf375cc //  // @ game+0xf3db1b0
	void Deactivate(); // Function Engine.ActorComponent.Deactivate //  // @ game+0x135b6ac
	void *f1c161fab9(); // Function Engine.ActorComponent.*f1c161fab9 //  // @ game+0xf3db2b0
	void *0e66da1f3d(); // Function Engine.ActorComponent.*0e66da1f3d //  // @ game+0xf3e37f4
	void *46ea63fe29(); // Function Engine.ActorComponent.*46ea63fe29 //  // @ game+0xf3aa350
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay //  // @ game+0x43bab4
};

// Class Engine.Brush
// Size: 0x438 (Inherited: 0x400)  [layout: KHOP]
struct ABrush : AActor {
	enum class *341a67330c *7c74c9c6cf; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FColor BrushColor; // 0x404(0x04)
	int32 PolyFlags; // 0x408(0x04)
	char *00ea83bd66 : 1; // 0x40c(0x01)
	char *5ff3834f52 : 1; // 0x40c(0x01)
	char *6470e0f197 : 1; // 0x40c(0x01)
	char *bc228608cb : 1; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct UModel* Brush; // 0x410(0x08)
	struct UBrushComponent* BrushComponent; // 0x418(0x08)
	char *f3304a54a9 : 1; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<struct F*80eeac9a48> *1bc1380520; // 0x428(0x10)
};

// Class Engine.Volume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct AVolume : ABrush {
};

// Class Engine.DataAsset
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct UDataAsset : UObject {
	struct UClass* NativeClass; // 0x30(0x08)
};

// Class Engine.*002e0cdee0
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*002e0cdee0 : UObject {
};

// Class Engine.AnimNotify
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAnimNotify : UObject {
	char pad_30[0x10]; // 0x30(0x10)

	void GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName //  // @ game+0xe1c6230
	void Received_Notify(); // Function Engine.AnimNotify.Received_Notify //  // @ game+0x43bab4
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x40)  [layout: KHOP]
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	char pad_60[0x10]; // 0x60(0x10)
	char Attached : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAnimNotifyState : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void Received_NotifyBegin(); // Function Engine.AnimNotifyState.Received_NotifyBegin //  // @ game+0x43bab4
	void GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName //  // @ game+0xe1c6230
	void Received_NotifyEnd(); // Function Engine.AnimNotifyState.Received_NotifyEnd //  // @ game+0x43bab4
	void Received_NotifyTick(); // Function Engine.AnimNotifyState.Received_NotifyTick //  // @ game+0x43bab4
};

// Class Engine.DataTable
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UDataTable : UObject {
	struct UScriptStruct* *e52c727ffe; // 0x30(0x08)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.Pawn
// Size: 0x468 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APawn : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	char bUseControllerRotationPitch : 1; // 0x408(0x01)
	char bUseControllerRotationYaw : 1; // 0x408(0x01)
	char bUseControllerRotationRoll : 1; // 0x408(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float BaseEyeHeight; // 0x40c(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x410(0x01)
	enum class EAutoPossessAI *f1587761b9; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct UClass* AIControllerClass; // 0x418(0x08)
	struct AController* *ce39156b59; // 0x420(0x08)
	struct APlayerState* PlayerState; // 0x428(0x10) rep=OnRep_PlayerState
	char pad_438[0x4]; // 0x438(0x04)
	uint16 *5fcb45c06c; // 0x43c(0x02)
	char pad_43E[0x2]; // 0x43e(0x02)
	struct AController* Controller; // 0x440(0x08) rep=OnRep_Controller
	char pad_448[0x4]; // 0x448(0x04)
	struct FVector *97874f87eb; // 0x44c(0x0c)
	struct FVector *e469a6e6b4; // 0x458(0x0c)
	char pad_464[0x4]; // 0x464(0x04)

	void ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed //  // @ game+0x43bab4
	void GetControlRotation(); // Function Engine.Pawn.GetControlRotation //  // @ game+0xf3c76f4
	void *d8d0d810d4(); // Function Engine.Pawn.*d8d0d810d4 //  // @ game+0xf3e71e8
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller //  // @ game+0xfbfdcc
	void *b69ea8f19f(); // Function Engine.Pawn.*b69ea8f19f //  // @ game+0xf3ca5b0
	void *9b4dfb631c(); // Function Engine.Pawn.*9b4dfb631c //  // @ game+0xf3aa714
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState //  // @ game+0xc4d2cc
	void AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput //  // @ game+0xf399494
	void *88712386e0(); // Function Engine.Pawn.*88712386e0 //  // @ game+0x131c6e4
	void AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput //  // @ game+0xf399e0c
	void *e17ea150fe(); // Function Engine.Pawn.*e17ea150fe //  // @ game+0xf3d2b3c
	void *4c1475bef0(); // Function Engine.Pawn.*4c1475bef0 //  // @ game+0xf3cd2c4
	void *4da83c628b(); // Function Engine.Pawn.*4da83c628b //  // @ game+0xf3cccb0
	void ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed //  // @ game+0x43bab4
	void *883e1fe463(); // Function Engine.Pawn.*883e1fe463 //  // @ game+0xf3c6620
	void GetController(); // Function Engine.Pawn.GetController //  // @ game+0xf3c7728
	void AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput //  // @ game+0xddaf5c
	void *a88eb3899d(); // Function Engine.Pawn.*a88eb3899d //  // @ game+0xf3ac178
	void K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector //  // @ game+0xf3cb334
	void *7ab001ef02(); // Function Engine.Pawn.*7ab001ef02 //  // @ game+0xf3ce160
	void *e02b0f3711(); // Function Engine.Pawn.*e02b0f3711 //  // @ game+0xf3c9e10
	void *914de554fb(); // Function Engine.Pawn.*914de554fb //  // @ game+0xf3f9988
	void *adff643db9(); // Function Engine.Pawn.*adff643db9 //  // @ game+0xf3cb334
	void *3a51e44343(); // Function Engine.Pawn.*3a51e44343 //  // @ game+0xf39c4ec
	void *4cbac9db3c(); // Function Engine.Pawn.*4cbac9db3c //  // @ game+0x1175d24
	void *f1f43b5878(); // Function Engine.Pawn.*f1f43b5878 //  // @ game+0xf3d6ae0
	void *8eb3723100(); // Function Engine.Pawn.*8eb3723100 //  // @ game+0xf3ca4a4
};

// Class Engine.Character
// Size: 0x920 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct ACharacter : APawn {
	float *fddf77644b; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UCapsuleComponent* ProneCapsuleComponent; // 0x470(0x10)
	int32 JumpCurrentCount; // 0x480(0x04)
	float *ede91f2edc; // 0x484(0x04)
	struct FRootMotionSourceGroup *8e8d9b491e; // 0x488(0x100)
	struct FVector *3d892d92af; // 0x588(0x0c)
	char pad_594[0x4]; // 0x594(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x598(0x10)
	int32 JumpMaxCount; // 0x5a8(0x04)
	float JumpKeyHoldTime; // 0x5ac(0x04)
	struct USkeletalMeshComponent* Mesh; // 0x5b0(0x08)
	char bPressedJump : 1; // 0x5b8(0x01)
	char *0e1889e4f9 : 1; // 0x5b8(0x01)
	char *ed75e4e8a6 : 1; // 0x5b8(0x01)
	char *0e11e6632a : 1; // 0x5b8(0x01)
	char *27c7260f81 : 1; // 0x5b8(0x01)
	char *09423ff402 : 1; // 0x5b8(0x01)
	char *62becc7a5a : 1; // 0x5b8(0x01)
	char *90866bea93 : 1; // 0x5b8(0x01)
	char bWasJumping : 1; // 0x5b9(0x01)
	char pad_5BA[0x6]; // 0x5ba(0x06)
	struct F*eb5785165d *a47cbfedfe; // 0x5c0(0x48) rep=OnRep_ReplicatedBasedMovement
	float CrouchedEyeHeight; // 0x608(0x04)
	char bIsCrouched : 1; // 0x60c(0x01) rep=OnRep_IsCrouched
	char pad_60D[0x3]; // 0x60d(0x03)
	struct F*e7a9ce49b9 *1ccc67f221; // 0x610(0x40)
	struct TArray<struct F*cfe390e867> *81269856a1; // 0x650(0x10)
	bool *b3b1c4bc6f; // 0x660(0x01)
	char pad_661[0x3]; // 0x661(0x03)
	struct F*acd35b5d64 *cab6c68fb0; // 0x664(0x98) rep=OnRep_ReplicatedMovementDiffSerializer
	bool *5aee071169; // 0x6fc(0x01)
	char pad_6FD[0x3]; // 0x6fd(0x03)
	struct FMulticastDelegate OnReachedJumpApex; // 0x700(0x10)
	char pad_710[0x10]; // 0x710(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate; // 0x720(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x730(0x10)
	struct FQuat *35151ae2c3; // 0x740(0x10)
	float JumpMaxHoldTime; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	struct UCapsuleComponent* CapsuleComponent; // 0x758(0x10)
	struct F*eb5785165d *7c0d2d3c3d; // 0x768(0x48)
	struct F*3882790057 *b5d524f2f1; // 0x7b0(0x160) rep=OnRep_RootMotion
	char pad_910[0x10]; // 0x910(0x10)

	void *2864d18e2d(); // Function Engine.Character.*2864d18e2d //  // @ game+0xf3dd3e4
	void *0c34f0b8cf(); // Function Engine.Character.*0c34f0b8cf //  // @ game+0xdb87308
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched //  // @ game+0xda9f498
	void *4db696891f(); // Function Engine.Character.*4db696891f //  // @ game+0xaa03a4
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement //  // @ game+0xa0e2e4
	void OnWalkingOffLedge(); // Function Engine.Character.OnWalkingOffLedge //  // @ game+0x125e594
	void K2_OnEndCrouch(); // Function Engine.Character.K2_OnEndCrouch //  // @ game+0x43bab4
	void UnCrouch(); // Function Engine.Character.UnCrouch //  // @ game+0xf3fb9b8
	void Jump(); // Function Engine.Character.Jump //  // @ game+0xf3ce774
	void *e08f09c292(); // Function Engine.Character.*e08f09c292 //  // @ game+0xf3ce518
	void *ac9d89c7fa(); // Function Engine.Character.*ac9d89c7fa //  // @ game+0xa9f548
	void *fd381ab0e1(); // Function Engine.Character.*fd381ab0e1 //  // @ game+0xdb5165c
	void *dbe0dad3a2(); // Function Engine.Character.*dbe0dad3a2 //  // @ game+0xf3de10c
	void *d82a986c83(); // Function Engine.Character.*d82a986c83 //  // @ game+0xf3dfadc
	void LaunchCharacter(); // Function Engine.Character.LaunchCharacter //  // @ game+0xf3d2a30
	void ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove //  // @ game+0xaa2290
	void IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce //  // @ game+0xf3cdfc4
	void K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch //  // @ game+0x43bab4
	void *c373aa63b6(); // Function Engine.Character.*c373aa63b6 //  // @ game+0xf3c63ec
	void *68697c2b97(); // Function Engine.Character.*68697c2b97 //  // @ game+0xf3a2148
	void *79c7e0e5c6(); // Function Engine.Character.*79c7e0e5c6 //  // @ game+0xf3a3cd0
	void OnJumped(); // Function Engine.Character.OnJumped //  // @ game+0x135ed1c
	void *95dace5e07(); // Function Engine.Character.*95dace5e07 //  // @ game+0xf3c7ad8
	void OnRep_ReplicatedMovementDiffSerializer(); // Function Engine.Character.OnRep_ReplicatedMovementDiffSerializer //  // @ game+0x9c2a44
	void *2080e1e426(); // Function Engine.Character.*2080e1e426 //  // @ game+0xf3c6680
	void OnLaunched(); // Function Engine.Character.OnLaunched //  // @ game+0x43bab4
	void *b6736e3600(); // Function Engine.Character.*b6736e3600 //  // @ game+0xf3f740c
	void *d8bec53042(); // Function Engine.Character.*d8bec53042 //  // @ game+0xf3c66c8
	void *770b2132a5(); // Function Engine.Character.*770b2132a5 //  // @ game+0xf3d7ff4
	void CanJumpInternal(); // Function Engine.Character.CanJumpInternal //  // @ game+0x11b1b74
	void *92737ffaba(); // Function Engine.Character.*92737ffaba //  // @ game+0xf3fa990
	void *b5edc62c65(); // Function Engine.Character.*b5edc62c65 //  // @ game+0xf3a3ce8
	void OnLanded(); // Function Engine.Character.OnLanded //  // @ game+0x43bab4
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion //  // @ game+0xf3d69a4
	void *ef1cd25ac7(); // Function Engine.Character.*ef1cd25ac7 //  // @ game+0xf3dee34
	void Crouch(); // Function Engine.Character.Crouch //  // @ game+0xf3aaae0
	void CanJump(); // Function Engine.Character.CanJump //  // @ game+0xf3a2334
	void *ba5c7762d5(); // Function Engine.Character.*ba5c7762d5 //  // @ game+0xf3e0660
	void ServerMove(); // Function Engine.Character.ServerMove //  // @ game+0xf3dc7e0
	void K2_OnMovementModeChanged(); // Function Engine.Character.K2_OnMovementModeChanged //  // @ game+0x43bab4
	void *c212dbeae9(); // Function Engine.Character.*c212dbeae9 //  // @ game+0x69fab0
	void K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement //  // @ game+0x43bab4
	void *edac5a1f57(); // Function Engine.Character.*edac5a1f57 //  // @ game+0xf3a3108
	void *eb55d7a23d(); // Function Engine.Character.*eb55d7a23d //  // @ game+0xf3ce53c
};

// Class Engine.MovementComponent
// Size: 0x250 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0x208(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x210(0x08)
	char pad_218[0x4]; // 0x218(0x04)
	struct FVector Velocity; // 0x21c(0x0c)
	char bConstrainToPlane : 1; // 0x228(0x01)
	char bSnapToPlaneAtStart : 1; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	enum class EPlaneConstraintAxisSetting *8bee415587; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct FVector PlaneConstraintNormal; // 0x230(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x23c(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x248(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x248(0x01)
	char bTickBeforeOwner : 1; // 0x248(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)

	void *9e883fd4ff(); // Function Engine.MovementComponent.*9e883fd4ff //  // @ game+0xda92598
	void *44b441aa15(); // Function Engine.MovementComponent.*44b441aa15 //  // @ game+0xf3aa628
	void PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged //  // @ game+0x10186f0
	void *5408f6169b(); // Function Engine.MovementComponent.*5408f6169b //  // @ game+0x11fadb0
	void *d79414ee80(); // Function Engine.MovementComponent.*d79414ee80 //  // @ game+0xf3f9970
	void *b30b1646b3(); // Function Engine.MovementComponent.*b30b1646b3 //  // @ game+0xf3cd500
	void *bbc5e6063a(); // Function Engine.MovementComponent.*bbc5e6063a //  // @ game+0xf3cb5e0
	void *50f932837b(); // Function Engine.MovementComponent.*50f932837b //  // @ game+0xf3cb620
	void *09801a45f2(); // Function Engine.MovementComponent.*09801a45f2 //  // @ game+0xf3f52c8
	void *fd256033f2(); // Function Engine.MovementComponent.*fd256033f2 //  // @ game+0xf3f5530
	void *a533e5ae65(); // Function Engine.MovementComponent.*a533e5ae65 //  // @ game+0xf3f54a0
	void *8a658b6476(); // Function Engine.MovementComponent.*8a658b6476 //  // @ game+0xf3cb5f8
	void *4200cd7cee(); // Function Engine.MovementComponent.*4200cd7cee //  // @ game+0xf3ca398
	void *8ed1440149(); // Function Engine.MovementComponent.*8ed1440149 //  // @ game+0xf3cb594
	void *1ae793fc8b(); // Function Engine.MovementComponent.*1ae793fc8b //  // @ game+0xf3c8688
	void K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed //  // @ game+0xf3d0cc0
	void *ae752f0c2f(); // Function Engine.MovementComponent.*ae752f0c2f //  // @ game+0xf3d11c8
	void *f8ef805728(); // Function Engine.MovementComponent.*f8ef805728 //  // @ game+0xf3aa4c0
	void *516e580be9(); // Function Engine.MovementComponent.*516e580be9 //  // @ game+0xf3f53c4
	void ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane //  // @ game+0xf3aa574
	void *79519b03f6(); // Function Engine.MovementComponent.*79519b03f6 //  // @ game+0xf3f5344
	void K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier //  // @ game+0xf3d0c94
};

// Class Engine.NavMovementComponent
// Size: 0x290 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct UNavMovementComponent : UMovementComponent {
	struct FNavAgentProperties NavAgentProps; // 0x250(0x20)
	float *3c466d8b99; // 0x270(0x04)
	char *4d3e87505f : 1; // 0x274(0x01)
	char bUseAccelerationForPaths : 1; // 0x274(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FMovementProperties *ed40845e34; // 0x278(0x04)
	char pad_27C[0x14]; // 0x27c(0x14)

	void *947fb96e60(); // Function Engine.NavMovementComponent.*947fb96e60 //  // @ game+0xf3fac28
	void IsFalling(); // Function Engine.NavMovementComponent.IsFalling //  // @ game+0xf3cde88
	void *4228aa1f61(); // Function Engine.NavMovementComponent.*4228aa1f61 //  // @ game+0xf3ce1b0
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement //  // @ game+0xf3fa6f8
	void *6182078f3c(); // Function Engine.NavMovementComponent.*6182078f3c //  // @ game+0xf3cd47c
	void IsSwimming(); // Function Engine.NavMovementComponent.IsSwimming //  // @ game+0xf3ce724
	void *aa67c55b1a(); // Function Engine.NavMovementComponent.*aa67c55b1a //  // @ game+0xf3cdeb0
};

// Class Engine.PawnMovementComponent
// Size: 0x290 (Inherited: 0x290)  [layout: KHOP]
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *5933dfa954; // 0x288(0x08)

	void *eac564368c(); // Function Engine.PawnMovementComponent.*eac564368c //  // @ game+0xf3cb304
	void *a2b1847fe9(); // Function Engine.PawnMovementComponent.*a2b1847fe9 //  // @ game+0xf3aa6dc
	void *7ab001ef02(); // Function Engine.PawnMovementComponent.*7ab001ef02 //  // @ game+0xf3ce188
	void *63d33eccce(); // Function Engine.PawnMovementComponent.*63d33eccce //  // @ game+0xf39c33c
	void *cd08bc06a4(); // Function Engine.PawnMovementComponent.*cd08bc06a4 //  // @ game+0xf3c9de0
	void *1a80d8f937(); // Function Engine.PawnMovementComponent.*1a80d8f937 //  // @ game+0xf3cb2ec
	void K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector //  // @ game+0xf3d0c60
};

// Class Engine.CharacterMovementComponent
// Size: 0x950 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_290[0x10]; // 0x290(0x10)
	struct ACharacter* *acd9d615b7; // 0x2a0(0x10)
	char bApplyGravityWhileJumping : 1; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float GravityScale; // 0x2b4(0x04)
	float MaxStepHeight; // 0x2b8(0x04)
	float JumpZVelocity; // 0x2bc(0x04)
	float JumpOffJumpZFactor; // 0x2c0(0x04)
	float *78bed0e7b4; // 0x2c4(0x04)
	float *1f77b4f8da; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	float *928eae3d40; // 0x2d0(0x04)
	float *7c6deda246; // 0x2d4(0x04)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	enum class EMovementMode MovementMode; // 0x2e0(0x01)
	bool CustomMovementMode; // 0x2e1(0x01)
	char pad_2E2[0x1e]; // 0x2e2(0x1e)
	float GroundFriction; // 0x300(0x04)
	float MaxWalkSpeed; // 0x304(0x04)
	float MaxWalkSpeedCrouched; // 0x308(0x04)
	float MaxSwimSpeed; // 0x30c(0x04)
	float MaxFlySpeed; // 0x310(0x04)
	float MaxCustomMovementSpeed; // 0x314(0x04)
	float MaxAcceleration; // 0x318(0x04)
	float BrakingFrictionFactor; // 0x31c(0x04)
	float BrakingFriction; // 0x320(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	float BrakingDecelerationWalking; // 0x328(0x04)
	float BrakingDecelerationFalling; // 0x32c(0x04)
	float BrakingDecelerationSwimming; // 0x330(0x04)
	float BrakingDecelerationFlying; // 0x334(0x04)
	float AirControl; // 0x338(0x04)
	float AirControlBoostMultiplier; // 0x33c(0x04)
	float AirControlBoostVelocityThreshold; // 0x340(0x04)
	float FallingLateralFriction; // 0x344(0x04)
	float CrouchedHalfHeight; // 0x348(0x04)
	float PronedHalfHeight; // 0x34c(0x04)
	float PronedRadius; // 0x350(0x04)
	float Buoyancy; // 0x354(0x04)
	float PerchRadiusThreshold; // 0x358(0x04)
	float PerchAdditionalHeight; // 0x35c(0x04)
	struct FRotator RotationRate; // 0x360(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x36c(0x01)
	char bOrientRotationToMovement : 1; // 0x36c(0x01)
	char bSweepWhileNavWalking : 1; // 0x36c(0x01)
	char pad_36C_3 : 2; // 0x36c(0x01)
	char *a4bc960447 : 1; // 0x36c(0x01)
	char *9d2a973d11 : 1; // 0x36c(0x01)
	char bForceMaxAccel : 1; // 0x36c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x36d(0x01)
	char bForceNextFloorCheck : 1; // 0x36d(0x01)
	char *600a91c3c5 : 1; // 0x36d(0x01)
	char bCanWalkOffLedges : 1; // 0x36d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x36d(0x01)
	char pad_36D_5 : 2; // 0x36d(0x01)
	char *7e045188dd : 1; // 0x36d(0x01)
	char *87c5706d14 : 1; // 0x36e(0x01)
	char pad_36F[0x1]; // 0x36f(0x01)
	struct USceneComponent* *320a8fdf80; // 0x370(0x08)
	float MaxOutOfWaterStepHeight; // 0x378(0x04)
	float OutofWaterZ; // 0x37c(0x04)
	float Mass; // 0x380(0x04)
	bool bEnablePhysicsInteraction; // 0x384(0x01)
	bool bTouchForceScaledToMass; // 0x385(0x01)
	bool bPushForceScaledToMass; // 0x386(0x01)
	bool bPushForceUsingZOffset; // 0x387(0x01)
	bool bScalePushForceToVelocity; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float StandingDownwardForceScale; // 0x38c(0x04)
	float InitialPushForceFactor; // 0x390(0x04)
	float PushForceFactor; // 0x394(0x04)
	float PushForcePointZOffsetFactor; // 0x398(0x04)
	float TouchForceFactor; // 0x39c(0x04)
	float MinTouchForce; // 0x3a0(0x04)
	float MaxTouchForce; // 0x3a4(0x04)
	float RepulsionForce; // 0x3a8(0x04)
	char bForceBraking : 1; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	float CrouchedSpeedMultiplier; // 0x3b0(0x04)
	float UpperImpactNormalScale; // 0x3b4(0x04)
	struct FVector Acceleration; // 0x3b8(0x0c)
	struct FVector *c0552dd19f; // 0x3c4(0x0c)
	struct FQuat *3ef4bdd435; // 0x3d0(0x10)
	struct FVector *15688b1042; // 0x3e0(0x0c)
	float *ec2f6faf99; // 0x3ec(0x04)
	float *d146b4527b; // 0x3f0(0x04)
	float *5f98829e8e; // 0x3f4(0x04)
	struct FVector *06af48c425; // 0x3f8(0x0c)
	struct FVector *d67e27b5d9; // 0x404(0x0c)
	float *2e49d5ead4; // 0x410(0x04)
	char pad_414[0x8]; // 0x414(0x08)
	float MaxSimulationTimeStep; // 0x41c(0x04)
	int32 MaxSimulationIterations; // 0x420(0x04)
	float MaxDepenetrationWithGeometry; // 0x424(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x428(0x04)
	float MaxDepenetrationWithPawn; // 0x42c(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x430(0x04)
	float *b78eb1531a; // 0x434(0x04)
	float *24d64cccd8; // 0x438(0x04)
	float *1121df02e8; // 0x43c(0x04)
	float *072e03559d; // 0x440(0x04)
	float *6965382065; // 0x444(0x04)
	float *1404679e89; // 0x448(0x04)
	float *2892e4f8c4; // 0x44c(0x04)
	float *31268966c2; // 0x450(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float *c3617ec329; // 0x458(0x04)
	float *23d8262621; // 0x45c(0x04)
	float *595ea36e83; // 0x460(0x04)
	float *35263dd8f6; // 0x464(0x04)
	float LedgeCheckThreshold; // 0x468(0x04)
	float JumpOutOfWaterPitch; // 0x46c(0x04)
	struct F*45f3bd1284 CurrentFloor; // 0x470(0xa0)
	enum class EMovementMode DefaultLandMovementMode; // 0x510(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x511(0x01)
	enum class EMovementMode *102a5f4af2; // 0x512(0x01)
	char pad_513[0x1]; // 0x513(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x514(0x01)
	char bImpartBaseVelocityX : 1; // 0x514(0x01)
	char bImpartBaseVelocityY : 1; // 0x514(0x01)
	char bImpartBaseVelocityZ : 1; // 0x514(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x514(0x01)
	char bJustTeleported : 1; // 0x514(0x01)
	char *902dc21ab5 : 1; // 0x514(0x01)
	char *d15bb77cb7 : 1; // 0x514(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x515(0x01)
	char bNotifyApex : 1; // 0x515(0x01)
	char *fa79339138 : 1; // 0x515(0x01)
	char bWantsToCrouch : 1; // 0x515(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	enum class EStanceMode StanceMode; // 0x518(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x519(0x01)
	char pad_51A[0x2]; // 0x51a(0x02)
	char bIgnoreBaseRotation : 1; // 0x51c(0x01)
	char *0df4f8812a : 1; // 0x51c(0x01)
	char bAlwaysCheckFloor : 1; // 0x51c(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x51c(0x01)
	char *59f5de89b6 : 1; // 0x51c(0x01)
	char *a4b704c181 : 1; // 0x51c(0x01)
	char bUseRVOAvoidance : 1; // 0x51c(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x51c(0x01)
	char pad_51D[0xf]; // 0x51d(0x0f)
	char *b47ffd1610 : 1; // 0x52c(0x01)
	char *e49a575c45 : 1; // 0x52c(0x01)
	char *26dd037848 : 1; // 0x52c(0x01)
	char pad_52C_3 : 2; // 0x52c(0x01)
	char bProjectNavMeshWalking : 1; // 0x52c(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x52c(0x01)
	char pad_52D[0x13]; // 0x52d(0x13)
	float AvoidanceConsiderationRadius; // 0x540(0x04)
	struct FVector *3f1dcb660f; // 0x544(0x0c)
	int32 AvoidanceUID; // 0x550(0x04)
	struct F*db2d87d85f AvoidanceGroup; // 0x554(0x04)
	struct F*db2d87d85f GroupsToAvoid; // 0x558(0x04)
	struct F*db2d87d85f GroupsToIgnore; // 0x55c(0x04)
	float AvoidanceWeight; // 0x560(0x04)
	struct FVector *729cf09d79; // 0x564(0x0c)
	char pad_570[0xb0]; // 0x570(0xb0)
	float NavMeshProjectionInterval; // 0x620(0x04)
	float *e0455826de; // 0x624(0x04)
	float NavMeshProjectionInterpSpeed; // 0x628(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x62c(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x630(0x04)
	float NavWalkingFloorDistTolerance; // 0x634(0x04)
	char pad_638[0xb8]; // 0x638(0xb8)
	struct F*8ed3500b11 *a37b564c13; // 0x6f0(0x58)
	char pad_748[0x10]; // 0x748(0x10)
	float *17a94e6e0f; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct FRootMotionSourceGroup *e4b6a8aa12; // 0x760(0x100)
	char pad_860[0x90]; // 0x860(0x90)
	struct F*e7a9ce49b9 *13de988190; // 0x8f0(0x40)
	struct FVector *4f234292b5; // 0x930(0x0c)
	bool *7f3f9f3e96; // 0x93c(0x01)
	char pad_93D[0x3]; // 0x93d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x940(0x01)
	char pad_941[0xf]; // 0x941(0x0f)

	void *31b355d15c(); // Function Engine.CharacterMovementComponent.*31b355d15c //  // @ game+0xf48259c
	void *300fa12710(); // Function Engine.CharacterMovementComponent.*300fa12710 //  // @ game+0xf461f54
	void *0bcc633b8d(); // Function Engine.CharacterMovementComponent.*0bcc633b8d //  // @ game+0xf469a3c
	void *970704ec18(); // Function Engine.CharacterMovementComponent.*970704ec18 //  // @ game+0xf524304
	void *cd60866d9a(); // Function Engine.CharacterMovementComponent.*cd60866d9a //  // @ game+0xf469e44
	void *d341cac35a(); // Function Engine.CharacterMovementComponent.*d341cac35a //  // @ game+0xf4815a0
	void *734d2ca59a(); // Function Engine.CharacterMovementComponent.*734d2ca59a //  // @ game+0xf469a10
	void *f5249a5e04(); // Function Engine.CharacterMovementComponent.*f5249a5e04 //  // @ game+0xf51f1bc
	void *4920f50873(); // Function Engine.CharacterMovementComponent.*4920f50873 //  // @ game+0xf45d1c0
	void CapsuleTouched(); // Function Engine.CharacterMovementComponent.CapsuleTouched //  // @ game+0xf427e44
	void *a887a0959f(); // Function Engine.CharacterMovementComponent.*a887a0959f //  // @ game+0xf481b18
	void *5395ed89dd(); // Function Engine.CharacterMovementComponent.*5395ed89dd //  // @ game+0xf4618bc
	void *e3a3c729e9(); // Function Engine.CharacterMovementComponent.*e3a3c729e9 //  // @ game+0xf50073c
	void *0558eab1a2(); // Function Engine.CharacterMovementComponent.*0558eab1a2 //  // @ game+0xf46a45c
	void *73bb4daeaa(); // Function Engine.CharacterMovementComponent.*73bb4daeaa //  // @ game+0xf3cb7c0
	void *ac1370992b(); // Function Engine.CharacterMovementComponent.*ac1370992b //  // @ game+0xf4f06c4
	void AddForce(); // Function Engine.CharacterMovementComponent.AddForce //  // @ game+0xf405e18
	void *c677dd7e5b(); // Function Engine.CharacterMovementComponent.*c677dd7e5b //  // @ game+0xf50c734
	void *272e762dcd(); // Function Engine.CharacterMovementComponent.*272e762dcd //  // @ game+0xf4f0748
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement //  // @ game+0xe1c3c58
	void *c0e4ddf7e0(); // Function Engine.CharacterMovementComponent.*c0e4ddf7e0 //  // @ game+0xf4cd824
	void *25e2d40f17(); // Function Engine.CharacterMovementComponent.*25e2d40f17 //  // @ game+0xf464e74
	void *e0d5be44b4(); // Function Engine.CharacterMovementComponent.*e0d5be44b4 //  // @ game+0xf3fba38
	void *955efedaa4(); // Function Engine.CharacterMovementComponent.*955efedaa4 //  // @ game+0xf4243e0
	void *be016d0da5(); // Function Engine.CharacterMovementComponent.*be016d0da5 //  // @ game+0xf482ef0
	void *146753c9f6(); // Function Engine.CharacterMovementComponent.*146753c9f6 //  // @ game+0xf476694
	void AddImpulse(); // Function Engine.CharacterMovementComponent.AddImpulse //  // @ game+0xf405fe4
	void *510faba8e7(); // Function Engine.CharacterMovementComponent.*510faba8e7 //  // @ game+0xf4cd730
	void *6f999882a4(); // Function Engine.CharacterMovementComponent.*6f999882a4 //  // @ game+0xf48284c
	void *ff53a8a35a(); // Function Engine.CharacterMovementComponent.*ff53a8a35a //  // @ game+0xf469ae8
	void *f3e52bf645(); // Function Engine.CharacterMovementComponent.*f3e52bf645 //  // @ game+0xf482f08
	void *4068f10841(); // Function Engine.CharacterMovementComponent.*4068f10841 //  // @ game+0xf4cd7ac
	void *b0f5240ec0(); // Function Engine.CharacterMovementComponent.*b0f5240ec0 //  // @ game+0xf4f064c
	void *a70844fa34(); // Function Engine.CharacterMovementComponent.*a70844fa34 //  // @ game+0xf3ce1b0
	void *03a303596e(); // Function Engine.CharacterMovementComponent.*03a303596e //  // @ game+0xf51fb30
	void *e91c31a66b(); // Function Engine.CharacterMovementComponent.*e91c31a66b //  // @ game+0xf4f07c0
};

// Class Engine.Info
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct AInfo : AActor {
};

// Class Engine.GameStateBase
// Size: 0x440 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass; // 0x400(0x08) rep=OnRep_GameModeClass
	struct AGameModeBase* AuthorityGameMode; // 0x408(0x08)
	struct UClass* SpectatorClass; // 0x410(0x08) rep=OnRep_SpectatorClass
	struct TArray<struct APlayerState*> PlayerArray; // 0x418(0x10)
	bool *aeeb0d5ddb; // 0x428(0x01) rep=OnRep_ReplicatedHasBegunPlay
	char pad_429[0x3]; // 0x429(0x03)
	float *29a56418e6; // 0x42c(0x04) rep=OnRep_ReplicatedWorldTimeSeconds
	float *0a73e21b02; // 0x430(0x04)
	float *28a6873d76; // 0x434(0x04)
	char pad_438[0x8]; // 0x438(0x08)

	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds //  // @ game+0x10804b4
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay //  // @ game+0xf0ad24
	void *4ac84da057(); // Function Engine.GameStateBase.*4ac84da057 //  // @ game+0xf3ccc60
	void *7a266db33b(); // Function Engine.GameStateBase.*7a266db33b //  // @ game+0xf3cb6d8
	void *94245bfb1b(); // Function Engine.GameStateBase.*94245bfb1b //  // @ game+0xf3cccd8
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass //  // @ game+0xf3d6954
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass //  // @ game+0xe4a76f4
	void *4fe5682f5a(); // Function Engine.GameStateBase.*4fe5682f5a //  // @ game+0xf3cb648
	void *03c680dc48(); // Function Engine.GameStateBase.*03c680dc48 //  // @ game+0xf3cb7c0
	void *58c888251f(); // Function Engine.GameStateBase.*58c888251f //  // @ game+0xf3cb834
	void *f9420384ba(); // Function Engine.GameStateBase.*f9420384ba //  // @ game+0xf3cb860
};

// Class Engine.GameState
// Size: 0x460 (Inherited: 0x440)  [layout: LECH - offset chi la uoc luong]
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x440(0x08) rep=OnRep_MatchState
	struct FName PreviousMatchState; // 0x448(0x08)
	int32 ElapsedTime; // 0x450(0x04) rep=OnRep_ElapsedTime
	char pad_454[0xc]; // 0x454(0x0c)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState //  // @ game+0x8f0d50
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime //  // @ game+0xf3ac178
};

// Class Engine.GameModeBase
// Size: 0x4a0 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x400(0x10)
	struct UClass* GameSessionClass; // 0x410(0x08)
	struct UClass* GameStateClass; // 0x418(0x08)
	struct UClass* PlayerControllerClass; // 0x420(0x08)
	struct UClass* PlayerStateClass; // 0x428(0x08)
	struct FStringClassReference HUDClass; // 0x430(0x10)
	struct UClass* DefaultPawnClass; // 0x440(0x08)
	struct FStringClassReference SpectatorClass; // 0x448(0x10)
	struct UClass* ReplaySpectatorPlayerControllerClass; // 0x458(0x08)
	struct AGameSession* GameSession; // 0x460(0x08)
	struct AGameStateBase* GameState; // 0x468(0x08)
	struct FText *78bc35d229; // 0x470(0x18)
	char bUseSeamlessTravel : 1; // 0x488(0x01)
	char bStartPlayersAsSpectators : 1; // 0x488(0x01)
	char bPauseable : 1; // 0x488(0x01)
	char pad_489[0x17]; // 0x489(0x17)

	void HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer //  // @ game+0x1059a0c
	void RestartPlayerAtPlayerStart(); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart //  // @ game+0xf3dbd98
	void K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout //  // @ game+0x43bab4
	void *33f3397d13(); // Function Engine.GameModeBase.*33f3397d13 //  // @ game+0x8f0d50
	void *3a8877eb66(); // Function Engine.GameModeBase.*3a8877eb66 //  // @ game+0xf3ca800
	void RestartPlayerAtTransform(); // Function Engine.GameModeBase.RestartPlayerAtTransform //  // @ game+0xf3dbe54
	void ShouldReset(); // Function Engine.GameModeBase.ShouldReset //  // @ game+0xf3daf98
	void K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers //  // @ game+0x43bab4
	void *7045194f3e(); // Function Engine.GameModeBase.*7045194f3e //  // @ game+0xf3a24b8
	void *7db521c62f(); // Function Engine.GameModeBase.*7db521c62f //  // @ game+0xf3d09ac
	void GetDefaultPawnClassForController(); // Function Engine.GameModeBase.GetDefaultPawnClassForController //  // @ game+0x1255da8
	void K2_OnChangeName(); // Function Engine.GameModeBase.K2_OnChangeName //  // @ game+0x43bab4
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel //  // @ game+0xf3db348
	void MustSpectate(); // Function Engine.GameModeBase.MustSpectate //  // @ game+0x11f919c
	void K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin //  // @ game+0x43bab4
	void *94245bfb1b(); // Function Engine.GameModeBase.*94245bfb1b //  // @ game+0xf3cccb0
	void RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer //  // @ game+0xf3dbd18
	void StartPlay(); // Function Engine.GameModeBase.StartPlay //  // @ game+0x10804b4
	void SpawnDefaultPawnFor(); // Function Engine.GameModeBase.SpawnDefaultPawnFor //  // @ game+0xf3f9ab4
	void InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer //  // @ game+0x42e0d8
	void FindPlayerStart(); // Function Engine.GameModeBase.FindPlayerStart //  // @ game+0x11b9374
	void CanSpectate(); // Function Engine.GameModeBase.CanSpectate //  // @ game+0xf3a2358
	void SpawnDefaultPawnAtTransform(); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform //  // @ game+0xf3f99a0
	void ChoosePlayerStart(); // Function Engine.GameModeBase.ChoosePlayerStart //  // @ game+0x120b120
	void InitStartSpot(); // Function Engine.GameModeBase.InitStartSpot //  // @ game+0xf3ccea4
	void *2ac70cf7ab(); // Function Engine.GameModeBase.*2ac70cf7ab //  // @ game+0xf3ca734
	void K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer //  // @ game+0x43bab4
	void PlayerCanRestart(); // Function Engine.GameModeBase.PlayerCanRestart //  // @ game+0x1059a80
};

// Class Engine.GameMode
// Size: 0x4e0 (Inherited: 0x4a0)  [layout: LECH - offset chi la uoc luong]
struct AGameMode : AGameModeBase {
	struct FName MatchState; // 0x4a0(0x08)
	char bDelayedStart : 1; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	int32 NumSpectators; // 0x4ac(0x04)
	int32 NumPlayers; // 0x4b0(0x04)
	int32 NumBots; // 0x4b4(0x04)
	float MinRespawnDelay; // 0x4b8(0x04)
	int32 NumTravellingPlayers; // 0x4bc(0x04)
	struct UClass* *6208f0a761; // 0x4c0(0x08)
	struct TArray<struct APlayerState*> *07c6c97657; // 0x4c8(0x10)
	float *efd1f259e5; // 0x4d8(0x04)
	bool bHandleDedicatedServerReplays; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)

	void K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState //  // @ game+0x43bab4
	void Say(); // Function Engine.GameMode.Say //  // @ game+0xf3dc098
	void SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit //  // @ game+0xf3e3b48
	void *023575f828(); // Function Engine.GameMode.*023575f828 //  // @ game+0xf3ccc88
	void *8925288000(); // Function Engine.GameMode.*8925288000 //  // @ game+0xf3c2d30
	void ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch //  // @ game+0x12796d0
	void *9db53be922(); // Function Engine.GameMode.*9db53be922 //  // @ game+0xf3991b0
	void *92fcb2154c(); // Function Engine.GameMode.*92fcb2154c //  // @ game+0xf3db374
	void ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch //  // @ game+0xf19ae4
	void *3a8f04c742(); // Function Engine.GameMode.*3a8f04c742 //  // @ game+0xf3ca050
	void *693ad0f465(); // Function Engine.GameMode.*693ad0f465 //  // @ game+0xf3ce080
	void *8844795aa3(); // Function Engine.GameMode.*8844795aa3 //  // @ game+0xf3fa6b4
};

// Class Engine.AnimInstance
// Size: 0x3a8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAnimInstance : UObject {
	float DeltaTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct USkeleton* *0d7ddfec48; // 0x38(0x08)
	enum class *a57817f14d *cc553ae687; // 0x40(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x41(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x42(0x01)
	bool *a5ff024060; // 0x43(0x01)
	bool bWarnAboutBlueprintUsage; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x48(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x58(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x68(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x78(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x88(0x10)
	char pad_98[0x60]; // 0x98(0x60)
	bool *09835d9442; // 0xf8(0x01)
	char pad_F9[0x9f]; // 0xf9(0x9f)
	struct TArray<struct FAnimNotifyEvent> *d07d998557; // 0x198(0x10)
	char pad_1A8[0x200]; // 0x1a8(0x200)

	void *c5cb31bd2a(); // Function Engine.AnimInstance.*c5cb31bd2a //  // @ game+0xdadea8c
	void *9af6c973bc(); // Function Engine.AnimInstance.*9af6c973bc //  // @ game+0xf525df8
	void *602bac3230(); // Function Engine.AnimInstance.*602bac3230 //  // @ game+0xf4bf858
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation //  // @ game+0x43bab4
	void *6fc637b42f(); // Function Engine.AnimInstance.*6fc637b42f //  // @ game+0xf494c1c
	void GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction //  // @ game+0xf45d318
	void *8668e1a2f7(); // Function Engine.AnimInstance.*8668e1a2f7 //  // @ game+0xf465b8c
	void GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction //  // @ game+0xf45e678
	void *7552ba2314(); // Function Engine.AnimInstance.*7552ba2314 //  // @ game+0xf466184
	void *20f260485b(); // Function Engine.AnimInstance.*20f260485b //  // @ game+0xf4ff390
	void *584f61c087(); // Function Engine.AnimInstance.*584f61c087 //  // @ game+0xf494b90
	void *cf3aa91aa3(); // Function Engine.AnimInstance.*cf3aa91aa3 //  // @ game+0xf495078
	void Montage_Play(); // Function Engine.AnimInstance.Montage_Play //  // @ game+0xe960f4
	void *c382818787(); // Function Engine.AnimInstance.*c382818787 //  // @ game+0xf4950f4
	void *982fb57804(); // Function Engine.AnimInstance.*982fb57804 //  // @ game+0xab9de4
	void PlaySlotAnimationAsDynamicMontage(); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage //  // @ game+0xf4a893c
	void *3866a107f0(); // Function Engine.AnimInstance.*3866a107f0 //  // @ game+0xf494f0c
	void *c97d64e2d2(); // Function Engine.AnimInstance.*c97d64e2d2 //  // @ game+0xab90c0
	void *dcdf6205af(); // Function Engine.AnimInstance.*dcdf6205af //  // @ game+0xf465d20
	void *d177ff6e90(); // Function Engine.AnimInstance.*d177ff6e90 //  // @ game+0xf465ee4
	void *427036c440(); // Function Engine.AnimInstance.*427036c440 //  // @ game+0xf461f7c
	void *cf13ac51c6(); // Function Engine.AnimInstance.*cf13ac51c6 //  // @ game+0xf494df8
	void *4018dfa2ba(); // Function Engine.AnimInstance.*4018dfa2ba //  // @ game+0xf4665c8
	void *08a742cad8(); // Function Engine.AnimInstance.*08a742cad8 //  // @ game+0xf077f8
	void *5a6f37e155(); // Function Engine.AnimInstance.*5a6f37e155 //  // @ game+0xf494ca0
	void *bb91990a4b(); // Function Engine.AnimInstance.*bb91990a4b //  // @ game+0xdadea8c
	void *82c715585e(); // Function Engine.AnimInstance.*82c715585e //  // @ game+0xf46696c
	void *f08a49fb83(); // Function Engine.AnimInstance.*f08a49fb83 //  // @ game+0xf480798
	void *3bdfa4fe26(); // Function Engine.AnimInstance.*3bdfa4fe26 //  // @ game+0xab9818
	void *b83f06fb7d(); // Function Engine.AnimInstance.*b83f06fb7d //  // @ game+0xf494e84
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation //  // @ game+0x43bab4
	void *048ee680f6(); // Function Engine.AnimInstance.*048ee680f6 //  // @ game+0xf54781c
	void *386570fb41(); // Function Engine.AnimInstance.*386570fb41 //  // @ game+0xf46af28
	void GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight //  // @ game+0xf471214
	void *0b92987b98(); // Function Engine.AnimInstance.*0b92987b98 //  // @ game+0xf46ae70
	void *a64aecfdf9(); // Function Engine.AnimInstance.*a64aecfdf9 //  // @ game+0xf46234c
	void *509cba22a5(); // Function Engine.AnimInstance.*509cba22a5 //  // @ game+0xf50dd04
	void GetAnimAssetPlayerTimeFromEnd(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd //  // @ game+0xf45dcc8
	void *a5824374e8(); // Function Engine.AnimInstance.*a5824374e8 //  // @ game+0x10367c8
	void *8e6e028507(); // Function Engine.AnimInstance.*8e6e028507 //  // @ game+0xf4659e0
	void PlaySlotAnimation(); // Function Engine.AnimInstance.PlaySlotAnimation //  // @ game+0xf4a6d1c
	void *6827ff0522(); // Function Engine.AnimInstance.*6827ff0522 //  // @ game+0x1045674
	void *f8769de031(); // Function Engine.AnimInstance.*f8769de031 //  // @ game+0xf466798
	void *5b0d81a636(); // Function Engine.AnimInstance.*5b0d81a636 //  // @ game+0xdb43180
	void *430ef0b0e6(); // Function Engine.AnimInstance.*430ef0b0e6 //  // @ game+0xf424e40
	void *cd53d51d93(); // Function Engine.AnimInstance.*cd53d51d93 //  // @ game+0xf46b10c
	void *769d017ce7(); // Function Engine.AnimInstance.*769d017ce7 //  // @ game+0xf4813c0
	void *1c94b0f078(); // Function Engine.AnimInstance.*1c94b0f078 //  // @ game+0xf540d30
	void *abc48c39fe(); // Function Engine.AnimInstance.*abc48c39fe //  // @ game+0xab9bf8
	void *5a6396d36a(); // Function Engine.AnimInstance.*5a6396d36a //  // @ game+0xf4352d4
	void *686559090e(); // Function Engine.AnimInstance.*686559090e //  // @ game+0xf4716e4
	void *8ff859764c(); // Function Engine.AnimInstance.*8ff859764c //  // @ game+0xf472dd4
	void *c233ce48ee(); // Function Engine.AnimInstance.*c233ce48ee //  // @ game+0xf5589c
	void *6409b3c386(); // Function Engine.AnimInstance.*6409b3c386 //  // @ game+0xf495170
	void *ceedd3c75f(); // Function Engine.AnimInstance.*ceedd3c75f //  // @ game+0xf480f30
	void *2e00731842(); // Function Engine.AnimInstance.*2e00731842 //  // @ game+0xf495b20
	void *c471c03788(); // Function Engine.AnimInstance.*c471c03788 //  // @ game+0x1105814
	void *b4b5ab099d(); // Function Engine.AnimInstance.*b4b5ab099d //  // @ game+0xf465834
	void *8ba1b0d147(); // Function Engine.AnimInstance.*8ba1b0d147 //  // @ game+0xf494d6c
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation //  // @ game+0x43bab4
	void GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime //  // @ game+0xf4622c4
	void GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength //  // @ game+0xf45d298
	void *6b297640a9(); // Function Engine.AnimInstance.*6b297640a9 //  // @ game+0xf47dd4c
	void *ed87d5b0ee(); // Function Engine.AnimInstance.*ed87d5b0ee //  // @ game+0xfd1704
};

// Class Engine.CurveBase
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCurveBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	void *7f484fb491(); // Function Engine.CurveBase.*7f484fb491 //  // @ game+0xf3cc770
	void *81553413cf(); // Function Engine.CurveBase.*81553413cf //  // @ game+0xf3cc9a0
};

// Class Engine.Controller
// Size: 0x490 (Inherited: 0x400)  [layout: KHOP]
struct AController : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct FRotator *4ea96bbcfa; // 0x408(0x0c)
	char pad_414[0xc]; // 0x414(0x0c)
	struct USceneComponent* TransformComponent; // 0x420(0x08)
	struct FName StateName; // 0x428(0x08)
	char *7a3bc88bfb : 1; // 0x430(0x01)
	char *33ccfffe0b : 1; // 0x430(0x01)
	char pad_431[0xf]; // 0x431(0x0f)
	struct ACharacter* Character; // 0x440(0x10)
	struct APawn* Pawn; // 0x450(0x10) rep=OnRep_Pawn
	char pad_460[0x18]; // 0x460(0x18)
	struct APlayerState* PlayerState; // 0x478(0x08) rep=OnRep_PlayerState
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x480(0x10)

	void *8024c3668c(); // Function Engine.Controller.*8024c3668c //  // @ game+0xf3c84ac
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn //  // @ game+0xfbfdcc
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState //  // @ game+0xc4d2cc
	void *3e4a61e0cc(); // Function Engine.Controller.*3e4a61e0cc //  // @ game+0xf3e8634
	void *accb95869c(); // Function Engine.Controller.*accb95869c //  // @ game+0xf3a2418
	void StopMovement(); // Function Engine.Controller.StopMovement //  // @ game+0xf3fac10
	void *94ea6718ed(); // Function Engine.Controller.*94ea6718ed //  // @ game+0xf3db330
	void *24f51b4b07(); // Function Engine.Controller.*24f51b4b07 //  // @ game+0xf3ed040
	void ReceiveInstigatedAnyDamage(); // Function Engine.Controller.ReceiveInstigatedAnyDamage //  // @ game+0x43bab4
	void *c21eed7005(); // Function Engine.Controller.*c21eed7005 //  // @ game+0xe193f80
	void Possess(); // Function Engine.Controller.Possess //  // @ game+0xf3dabf8
	void *7ab001ef02(); // Function Engine.Controller.*7ab001ef02 //  // @ game+0xf3ce138
	void *f88181f6e2(); // Function Engine.Controller.*f88181f6e2 //  // @ game+0xf3a8d44
	void *b185267df4(); // Function Engine.Controller.*b185267df4 //  // @ game+0xf3ce4fc
	void *430c5ec676(); // Function Engine.Controller.*430c5ec676 //  // @ game+0xf3d2c44
	void GetControlRotation(); // Function Engine.Controller.GetControlRotation //  // @ game+0xf3c76bc
	void *9e9e75b813(); // Function Engine.Controller.*9e9e75b813 //  // @ game+0xf3ed0c0
	void *760a533c37(); // Function Engine.Controller.*760a533c37 //  // @ game+0xf3fba38
	void *80ce029b23(); // Function Engine.Controller.*80ce029b23 //  // @ game+0xf3cdfec
	void *6ed6f344d9(); // Function Engine.Controller.*6ed6f344d9 //  // @ game+0xf3ce058
	void K2_GetPawn(); // Function Engine.Controller.K2_GetPawn //  // @ game+0xf3d0cec
	void *0592c28e2f(); // Function Engine.Controller.*0592c28e2f //  // @ game+0xdb7acf0
	void *7799201d6b(); // Function Engine.Controller.*7799201d6b //  // @ game+0xf3ccb34
	void *ca8558f7d2(); // Function Engine.Controller.*ca8558f7d2 //  // @ game+0xf3a8c68
	void *14dee82177(); // Function Engine.Controller.*14dee82177 //  // @ game+0xf3ce014
};

// Class Engine.PlayerController
// Size: 0x7d0 (Inherited: 0x490)  [layout: LECH - offset chi la uoc luong]
struct APlayerController : AController {
	struct UPlayer* Player; // 0x490(0x10)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct APawn* *267f401a86; // 0x4a8(0x10)
	struct U*80eeee8de4* *4e0d4f7ae9; // 0x4b8(0x08)
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct AHUD* *00a66d936c; // 0x4c8(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x4d0(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x4d8(0x08)
	bool *abb45955d6; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	struct FRotator TargetViewRotation; // 0x4e4(0x0c) rep=OnRep_TargetViewRotation
	char pad_4F0[0xc]; // 0x4f0(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x4fc(0x04)
	struct TArray<struct AActor*> *f664a2aa56; // 0x500(0x10)
	char pad_510[0x4]; // 0x510(0x04)
	float *7bc3f10250; // 0x514(0x04)
	struct FVector *b6ff69a958; // 0x518(0x0c)
	struct FRotator *90b3cf405f; // 0x524(0x0c)
	int32 *143ef38c3a; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UCheatManager* CheatManager; // 0x538(0x08)
	struct UClass* CheatClass; // 0x540(0x08)
	struct UPlayerInput* PlayerInput; // 0x548(0x08)
	struct TArray<struct F*5aa7490e12> *0fe937bc38; // 0x550(0x10)
	char pad_560[0x90]; // 0x560(0x90)
	char pad_5F0_0 : 3; // 0x5f0(0x01)
	char bPlayerIsWaiting : 1; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	bool *e052f1da6d; // 0x5f4(0x01)
	char pad_5F5[0x3b]; // 0x5f5(0x3b)
	struct UNetConnection* *8bd4aa5fe9; // 0x630(0x08)
	struct UNetConnection* NetConnection; // 0x638(0x08)
	char pad_640[0xc]; // 0x640(0x0c)
	float InputYawScale; // 0x64c(0x04)
	float InputPitchScale; // 0x650(0x04)
	float InputRollScale; // 0x654(0x04)
	char bShowMouseCursor : 1; // 0x658(0x01)
	char bEnableClickEvents : 1; // 0x658(0x01)
	char bEnableTouchEvents : 1; // 0x658(0x01)
	char bEnableMouseOverEvents : 1; // 0x658(0x01)
	char bEnableTouchOverEvents : 1; // 0x658(0x01)
	char bForceFeedbackEnabled : 1; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct TArray<struct FKey> ClickEventKeys; // 0x660(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x670(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x671(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x672(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x673(0x01)
	float HitResultTraceDistance; // 0x674(0x04)
	char pad_678[0x80]; // 0x678(0x80)
	struct U*5ed7932f40* *34215d6f1a; // 0x6f8(0x08)
	char pad_700_0 : 3; // 0x700(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x700(0x01)
	char pad_701[0x17]; // 0x701(0x17)
	struct UTouchInterface* *bb453c86f8; // 0x718(0x08)
	char pad_720[0x40]; // 0x720(0x40)
	struct ASpectatorPawn* SpectatorPawn; // 0x760(0x08)
	struct FVector SpawnLocation; // 0x768(0x0c)
	char pad_774[0x4]; // 0x774(0x04)
	bool *501f4fb4a8; // 0x778(0x01)
	char pad_779[0x1]; // 0x779(0x01)
	uint16 *55e054d343; // 0x77a(0x02)
	uint16 *4bae93a05c; // 0x77c(0x02)
	char pad_77E[0x2]; // 0x77e(0x02)
	struct AActor* *f55294a64d; // 0x780(0x08)
	struct AActor* *201c6ff6c2; // 0x788(0x08)
	char pad_790[0x40]; // 0x790(0x40)

	void *dfa85b8f50(); // Function Engine.PlayerController.*dfa85b8f50 //  // @ game+0xf3a3cb8
	void *0146477c06(); // Function Engine.PlayerController.*0146477c06 //  // @ game+0xf3cbbd0
	void *5d01566d93(); // Function Engine.PlayerController.*5d01566d93 //  // @ game+0xf3e8694
	void SendToConsole(); // Function Engine.PlayerController.SendToConsole //  // @ game+0xf3dc2f8
	void DeprojectMousePositionToWorld(); // Function Engine.PlayerController.DeprojectMousePositionToWorld //  // @ game+0xf3ab608
	void *d6260f137d(); // Function Engine.PlayerController.*d6260f137d //  // @ game+0xf3c8904
	void *87a7ea29ce(); // Function Engine.PlayerController.*87a7ea29ce //  // @ game+0xf3a906c
	void *1c803775b5(); // Function Engine.PlayerController.*1c803775b5 //  // @ game+0xf3ca3c4
	void ClientSetViewTarget(); // Function Engine.PlayerController.ClientSetViewTarget //  // @ game+0x10f6c3c
	void *85acedcdc1(); // Function Engine.PlayerController.*85acedcdc1 //  // @ game+0xf3c99e4
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel //  // @ game+0xf3db38c
	void StartFire(); // Function Engine.PlayerController.StartFire //  // @ game+0xf3fa638
	void *319232fba3(); // Function Engine.PlayerController.*319232fba3 //  // @ game+0xf3a3d00
	void *0c2da68d50(); // Function Engine.PlayerController.*0c2da68d50 //  // @ game+0xf3aa030
	void *c2e18a44ee(); // Function Engine.PlayerController.*c2e18a44ee //  // @ game+0x12810f0
	void SetName(); // Function Engine.PlayerController.SetName //  // @ game+0xf3f2f84
	void *1a2f460e0b(); // Function Engine.PlayerController.*1a2f460e0b //  // @ game+0xf3c96ac
	void *5dc7af8845(); // Function Engine.PlayerController.*5dc7af8845 //  // @ game+0xf3fc58c
	void *dc9faeed6d(); // Function Engine.PlayerController.*dc9faeed6d //  // @ game+0xc7ce6c
	void *7c78bddb1e(); // Function Engine.PlayerController.*7c78bddb1e //  // @ game+0xed70b8
	void *65180828e3(); // Function Engine.PlayerController.*65180828e3 //  // @ game+0xf3e1950
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation //  // @ game+0xea2404
	void *533e189978(); // Function Engine.PlayerController.*533e189978 //  // @ game+0xf3a3d30
	void *a24ee88105(); // Function Engine.PlayerController.*a24ee88105 //  // @ game+0xf3dc794
	void ServerUpdateLevelVisibility(); // Function Engine.PlayerController.ServerUpdateLevelVisibility //  // @ game+0x1098064
	void *ecd0357d0a(); // Function Engine.PlayerController.*ecd0357d0a //  // @ game+0xf3a6a30
	void *c97f187386(); // Function Engine.PlayerController.*c97f187386 //  // @ game+0xf3dc748
	void *89b0f98198(); // Function Engine.PlayerController.*89b0f98198 //  // @ game+0xf3a3ee4
	void *403a960e8f(); // Function Engine.PlayerController.*403a960e8f //  // @ game+0xf3c8b30
	void *a7cc235e0e(); // Function Engine.PlayerController.*a7cc235e0e //  // @ game+0xf3d6a48
	void *e1c9ad1cf2(); // Function Engine.PlayerController.*e1c9ad1cf2 //  // @ game+0xf3e1754
	void *ab901983a9(); // Function Engine.PlayerController.*ab901983a9 //  // @ game+0x1094498
	void ClientRestart(); // Function Engine.PlayerController.ClientRestart //  // @ game+0xc30b84
	void *2b87568f24(); // Function Engine.PlayerController.*2b87568f24 //  // @ game+0xf3f2558
	void *9d26b67058(); // Function Engine.PlayerController.*9d26b67058 //  // @ game+0xf3a3d18
	void *7d563c76d8(); // Function Engine.PlayerController.*7d563c76d8 //  // @ game+0xf3c9914
	void *eaafb1605c(); // Function Engine.PlayerController.*eaafb1605c //  // @ game+0xf3a9bb4
	void *1cf348fd17(); // Function Engine.PlayerController.*1cf348fd17 //  // @ game+0xf3e19e8
	void *4f7f6ebba2(); // Function Engine.PlayerController.*4f7f6ebba2 //  // @ game+0xf3c921c
	void Pause(); // Function Engine.PlayerController.Pause //  // @ game+0xf3d6ac8
	void ConsoleKey(); // Function Engine.PlayerController.ConsoleKey //  // @ game+0xf3aa3d8
	void *d7af54fec8(); // Function Engine.PlayerController.*d7af54fec8 //  // @ game+0xf3a26a0
	void *7b62ff7456(); // Function Engine.PlayerController.*7b62ff7456 //  // @ game+0xf3a3dcc
	void *305775e516(); // Function Engine.PlayerController.*305775e516 //  // @ game+0xf3a7820
	void AddYawInput(); // Function Engine.PlayerController.AddYawInput //  // @ game+0xf3a03e8
	void *9fa89a5ff5(); // Function Engine.PlayerController.*9fa89a5ff5 //  // @ game+0xf3e12f4
	void *b1ca6c8715(); // Function Engine.PlayerController.*b1ca6c8715 //  // @ game+0xf3e36e0
	void *fde230e94c(); // Function Engine.PlayerController.*fde230e94c //  // @ game+0xfe5778
	void *eb5708ae76(); // Function Engine.PlayerController.*eb5708ae76 //  // @ game+0xf3a9128
	void *0bd90f359a(); // Function Engine.PlayerController.*0bd90f359a //  // @ game+0xf3a75f8
	void *41ef73fa83(); // Function Engine.PlayerController.*41ef73fa83 //  // @ game+0xf3c8628
	void *4da1a81b10(); // Function Engine.PlayerController.*4da1a81b10 //  // @ game+0xf3a6004
	void *e9dab03a48(); // Function Engine.PlayerController.*e9dab03a48 //  // @ game+0xf3e11c8
	void *bcf801e31b(); // Function Engine.PlayerController.*bcf801e31b //  // @ game+0xf3dad20
	void *92f56f7d98(); // Function Engine.PlayerController.*92f56f7d98 //  // @ game+0xf3e1414
	void AddPitchInput(); // Function Engine.PlayerController.AddPitchInput //  // @ game+0xf39d940
	void *3f2af48d82(); // Function Engine.PlayerController.*3f2af48d82 //  // @ game+0xf3e199c
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats //  // @ game+0x11a1e38
	void *25406c2148(); // Function Engine.PlayerController.*25406c2148 //  // @ game+0xf3c86b4
	void Camera(); // Function Engine.PlayerController.Camera //  // @ game+0xf3a2224
	void *8fb2947c78(); // Function Engine.PlayerController.*8fb2947c78 //  // @ game+0xf3d9624
	void ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart //  // @ game+0xf3a7610
	void *26b2975c0c(); // Function Engine.PlayerController.*26b2975c0c //  // @ game+0x1366178
	void *2daa220721(); // Function Engine.PlayerController.*2daa220721 //  // @ game+0xf3dc5ac
	void FOV(); // Function Engine.PlayerController.FOV //  // @ game+0xf3c2dac
	void LocalTravel(); // Function Engine.PlayerController.LocalTravel //  // @ game+0xf3d2d58
	void *d8ca4fb1a5(); // Function Engine.PlayerController.*d8ca4fb1a5 //  // @ game+0xf3ab6f0
	void *9391bb2bf3(); // Function Engine.PlayerController.*9391bb2bf3 //  // @ game+0xf3dc470
	void *3f4cdc893d(); // Function Engine.PlayerController.*3f4cdc893d //  // @ game+0xf3aa130
	void *eac06dc359(); // Function Engine.PlayerController.*eac06dc359 //  // @ game+0xf3a3d48
	void *478fe86b9f(); // Function Engine.PlayerController.*478fe86b9f //  // @ game+0xf3e1080
	void *ada81e83b8(); // Function Engine.PlayerController.*ada81e83b8 //  // @ game+0xf3da1e0
	void *1cb2910e5f(); // Function Engine.PlayerController.*1cb2910e5f //  // @ game+0xf3fab90
	void SwitchLevel(); // Function Engine.PlayerController.SwitchLevel //  // @ game+0xf3facf0
	void *2d470a389d(); // Function Engine.PlayerController.*2d470a389d //  // @ game+0xf3c930c
	void *4bb5a97284(); // Function Engine.PlayerController.*4bb5a97284 //  // @ game+0xf3a8e14
	void *60e9d7b513(); // Function Engine.PlayerController.*60e9d7b513 //  // @ game+0xf3e14bc
	void *2ef632bf38(); // Function Engine.PlayerController.*2ef632bf38 //  // @ game+0xf3a4934
	void *d8a4eea736(); // Function Engine.PlayerController.*d8a4eea736 //  // @ game+0x120f174
	void *cb7e25ea24(); // Function Engine.PlayerController.*cb7e25ea24 //  // @ game+0xe3a6c4
	void *275c5fa147(); // Function Engine.PlayerController.*275c5fa147 //  // @ game+0xf3c86cc
	void *24af54c246(); // Function Engine.PlayerController.*24af54c246 //  // @ game+0xf3a3e64
	void *11e8c3fa12(); // Function Engine.PlayerController.*11e8c3fa12 //  // @ game+0xf3e1904
	void *8091ae012c(); // Function Engine.PlayerController.*8091ae012c //  // @ game+0xf3a7690
	void *4148423295(); // Function Engine.PlayerController.*4148423295 //  // @ game+0xf3c8c8c
	void *a1dc693332(); // Function Engine.PlayerController.*a1dc693332 //  // @ game+0x124c320
	void *06d02238fe(); // Function Engine.PlayerController.*06d02238fe //  // @ game+0xf3aa2a0
	void *be59701326(); // Function Engine.PlayerController.*be59701326 //  // @ game+0xf3a3de4
	void *7b7935b910(); // Function Engine.PlayerController.*7b7935b910 //  // @ game+0xf3c9ca8
	void *c578e5f602(); // Function Engine.PlayerController.*c578e5f602 //  // @ game+0xf3e1508
	void *5b0902f75e(); // Function Engine.PlayerController.*5b0902f75e //  // @ game+0xf3fc4a0
	void *5faef44661(); // Function Engine.PlayerController.*5faef44661 //  // @ game+0xf3c87e8
	void *92118ebc10(); // Function Engine.PlayerController.*92118ebc10 //  // @ game+0xf0eeb8
	void *e9dd0b80b6(); // Function Engine.PlayerController.*e9dd0b80b6 //  // @ game+0xf3ccb5c
	void *5860f0d50e(); // Function Engine.PlayerController.*5860f0d50e //  // @ game+0xf3a5608
	void *4575da7f7b(); // Function Engine.PlayerController.*4575da7f7b //  // @ game+0xf3a8fac
	void *a50e89ce49(); // Function Engine.PlayerController.*a50e89ce49 //  // @ game+0xf3e75a8
	void ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking //  // @ game+0xf3faf38
	void *e2948e895c(); // Function Engine.PlayerController.*e2948e895c //  // @ game+0xf3a4a34
	void *e40cd3fbbe(); // Function Engine.PlayerController.*e40cd3fbbe //  // @ game+0xf3cded8
	void *fa54682986(); // Function Engine.PlayerController.*fa54682986 //  // @ game+0x1264064
	void *ee60b76d31(); // Function Engine.PlayerController.*ee60b76d31 //  // @ game+0xf3a826c
	void *b6d1c9dbd4(); // Function Engine.PlayerController.*b6d1c9dbd4 //  // @ game+0xf3a2718
	void *54be702d83(); // Function Engine.PlayerController.*54be702d83 //  // @ game+0xf3a8f2c
	void *92123e4679(); // Function Engine.PlayerController.*92123e4679 //  // @ game+0xf3ec644
	void *3fea22a4b8(); // Function Engine.PlayerController.*3fea22a4b8 //  // @ game+0x9111a4
	void *6020cd4332(); // Function Engine.PlayerController.*6020cd4332 //  // @ game+0xf3f93cc
	void *d78a6467c9(); // Function Engine.PlayerController.*d78a6467c9 //  // @ game+0xf3a9df0
	void *9ce6370677(); // Function Engine.PlayerController.*9ce6370677 //  // @ game+0xf3a7808
	void *c2f4ea6eca(); // Function Engine.PlayerController.*c2f4ea6eca //  // @ game+0xf3f8940
	void *bb23b851d4(); // Function Engine.PlayerController.*bb23b851d4 //  // @ game+0xf3e12a8
	void *7f65c996a5(); // Function Engine.PlayerController.*7f65c996a5 //  // @ game+0xf3a8f14
	void *ffd1cb6d20(); // Function Engine.PlayerController.*ffd1cb6d20 //  // @ game+0xf3e125c
	void *cd13c19ec4(); // Function Engine.PlayerController.*cd13c19ec4 //  // @ game+0xf3c941c
	void *2d7a14d7ce(); // Function Engine.PlayerController.*2d7a14d7ce //  // @ game+0xf3a7578
	void *034438146a(); // Function Engine.PlayerController.*034438146a //  // @ game+0xf399200
	void *b6d954d1b4(); // Function Engine.PlayerController.*b6d954d1b4 //  // @ game+0x73c56c
	void *acbb6996f6(); // Function Engine.PlayerController.*acbb6996f6 //  // @ game+0xf3a8e94
	void *8976f58276(); // Function Engine.PlayerController.*8976f58276 //  // @ game+0xf3c8de8
	void *dbc07e0371(); // Function Engine.PlayerController.*dbc07e0371 //  // @ game+0xf3c979c
	void AddRollInput(); // Function Engine.PlayerController.AddRollInput //  // @ game+0xf39f778
	void *aa29adfd6e(); // Function Engine.PlayerController.*aa29adfd6e //  // @ game+0xf3a6b24
	void *22eb0783eb(); // Function Engine.PlayerController.*22eb0783eb //  // @ game+0xf3dc50c
	void ServerUpdateCamera(); // Function Engine.PlayerController.ServerUpdateCamera //  // @ game+0xf3e1650
};

// Class Engine.SceneComponent
// Size: 0x480 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct USceneComponent : UActorComponent {
	struct FVector RelativeLocation; // 0x208(0x0c) rep=OnRep_Transform
	char pad_214[0x1c]; // 0x214(0x1c)
	struct FVector *99c2c43559; // 0x230(0x0c)
	enum class EComponentMobility Mobility; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	char pad_240_0 : 1; // 0x240(0x01)
	char bReplicatesAttachmentReference : 1; // 0x240(0x01)
	char bReplicatesAttachment : 1; // 0x240(0x01)
	char *d113030176 : 1; // 0x240(0x01)
	char pad_240_4 : 1; // 0x240(0x01)
	char bAbsoluteLocation : 1; // 0x240(0x01) rep=OnRep_Transform
	char bAbsoluteRotation : 1; // 0x240(0x01) rep=OnRep_Transform
	char bAbsoluteScale : 1; // 0x240(0x01) rep=OnRep_Transform
	char bVisible : 1; // 0x241(0x01) rep=OnRep_Visibility
	char bHiddenInGame : 1; // 0x241(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x241(0x01)
	char *fe6b8c3f78 : 1; // 0x241(0x01)
	char bUseAttachParentBound : 1; // 0x241(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x241(0x01)
	char pad_242_0 : 3; // 0x242(0x01)
	char bAbsoluteTranslation : 1; // 0x242(0x01)
	char pad_243[0x1]; // 0x243(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x244(0x08)
	struct FRotator RelativeRotation; // 0x24c(0x0c) rep=OnRep_Transform
	struct TArray<struct USceneComponent*> AttachChildren; // 0x258(0x10) rep=OnRep_AttachChildren
	SetProperty *1fd868f0f7; // 0x268(0x50)
	char pad_2B8[0x58]; // 0x2b8(0x58)
	struct USceneComponent* AttachParent; // 0x310(0x08) rep=OnRep_AttachParent
	char pad_318[0x39]; // 0x318(0x39)
	enum class *348233a8c0 DetailMode; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	struct FVector RelativeTranslation; // 0x354(0x0c)
	struct FVector RelativeScale3D; // 0x360(0x0c) rep=OnRep_Transform
	char pad_36C[0xc]; // 0x36c(0x0c)
	struct FName *6e6d76b9c1; // 0x378(0x08) rep=OnRep_AttachSocketName
	char pad_380[0x8]; // 0x380(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x388(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x398(0x10)
	char pad_3A8[0xd8]; // 0x3a8(0xd8)

	void *55e9c7fa94(); // Function Engine.SceneComponent.*55e9c7fa94 //  // @ game+0xf3ac34c
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren //  // @ game+0xe96d44
	void K2_SetRelativeRotation(); // Function Engine.SceneComponent.K2_SetRelativeRotation //  // @ game+0xf3d2010
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent //  // @ game+0x106de88
	void K2_AddWorldOffset(); // Function Engine.SceneComponent.K2_AddWorldOffset //  // @ game+0xf3cf7b0
	void *2e838724b3(); // Function Engine.SceneComponent.*2e838724b3 //  // @ game+0xf3c6340
	void *23ca3e5ef6(); // Function Engine.SceneComponent.*23ca3e5ef6 //  // @ game+0xf3cd164
	void *51f7eef609(); // Function Engine.SceneComponent.*51f7eef609 //  // @ game+0xf3cba38
	void *cfa8f4f935(); // Function Engine.SceneComponent.*cfa8f4f935 //  // @ game+0xf3c6f58
	void *0f22240e7b(); // Function Engine.SceneComponent.*0f22240e7b //  // @ game+0xf3d0874
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility //  // @ game+0xf3fafb8
	void *82e7c2ae33(); // Function Engine.SceneComponent.*82e7c2ae33 //  // @ game+0x1125f7c
	void *206d1f34b4(); // Function Engine.SceneComponent.*206d1f34b4 //  // @ game+0xf3cb7ec
	void K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation //  // @ game+0xf3cf4e8
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld //  // @ game+0xf3d0c2c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform //  // @ game+0x100fcdc
	void *cec9eb41df(); // Function Engine.SceneComponent.*cec9eb41df //  // @ game+0xf3ca6d4
	void *d6c940b231(); // Function Engine.SceneComponent.*d6c940b231 //  // @ game+0xf3edb4c
	void *87f9706ece(); // Function Engine.SceneComponent.*87f9706ece //  // @ game+0xf3c7498
	void K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation //  // @ game+0xf3cf64c
	void SetHiddenInGame(); // Function Engine.SceneComponent.SetHiddenInGame //  // @ game+0x47bb80
	void K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation //  // @ game+0xf3cf1d4
	void *4d17be430b(); // Function Engine.SceneComponent.*4d17be430b //  // @ game+0xf3c6fe0
	void *053e11da22(); // Function Engine.SceneComponent.*053e11da22 //  // @ game+0xf3d0bfc
	void *45c95b5c0c(); // Function Engine.SceneComponent.*45c95b5c0c //  // @ game+0xf3e1aa8
	void *9f05a33f26(); // Function Engine.SceneComponent.*9f05a33f26 //  // @ game+0xf3c6404
	void *68d0a92e54(); // Function Engine.SceneComponent.*68d0a92e54 //  // @ game+0xf3f98b0
	void *c9b8940d26(); // Function Engine.SceneComponent.*c9b8940d26 //  // @ game+0xf3f95a0
	void *98a1de422f(); // Function Engine.SceneComponent.*98a1de422f //  // @ game+0xf3cb9a0
	void *4d228821ad(); // Function Engine.SceneComponent.*4d228821ad //  // @ game+0xf3d0b74
	void K2_AttachTo(); // Function Engine.SceneComponent.K2_AttachTo //  // @ game+0xf3d0038
	void *5711ffc723(); // Function Engine.SceneComponent.*5711ffc723 //  // @ game+0xf3db360
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent //  // @ game+0xf3ac190
	void SetRelativeScale3D(); // Function Engine.SceneComponent.SetRelativeScale3D //  // @ game+0x12044e8
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName //  // @ game+0x106de88
	void *0cbadf84d3(); // Function Engine.SceneComponent.*0cbadf84d3 //  // @ game+0xf3d04b4
	void *5d8a487306(); // Function Engine.SceneComponent.*5d8a487306 //  // @ game+0xf3cc958
	void *661f3a5973(); // Function Engine.SceneComponent.*661f3a5973 //  // @ game+0xf3cbad8
	void *c9b3a05386(); // Function Engine.SceneComponent.*c9b3a05386 //  // @ game+0xf3cb170
	void K2_SetWorldLocation(); // Function Engine.SceneComponent.K2_SetWorldLocation //  // @ game+0xf3d2324
	void K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation //  // @ game+0xf3d1d00
	void K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform //  // @ game+0xf3cf334
	void K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation //  // @ game+0xf3cf910
	void K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation //  // @ game+0xf3d2630
	void IsVisible(); // Function Engine.SceneComponent.IsVisible //  // @ game+0xf3ce74c
	void *0af65c0ec8(); // Function Engine.SceneComponent.*0af65c0ec8 //  // @ game+0xf3ce670
	void *8ed1440149(); // Function Engine.SceneComponent.*8ed1440149 //  // @ game+0xf3cb5bc
	void K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform //  // @ game+0xf3d2170
	void SetVisibility(); // Function Engine.SceneComponent.SetVisibility //  // @ game+0xf3f944c
	void *2086a8397a(); // Function Engine.SceneComponent.*2086a8397a //  // @ game+0xf3edbd4
	void *ce65aa954c(); // Function Engine.SceneComponent.*ce65aa954c //  // @ game+0xf3d2484
	void K2_AddWorldTransform(); // Function Engine.SceneComponent.K2_AddWorldTransform //  // @ game+0xf3cfa70
	void *13a5a06575(); // Function Engine.SceneComponent.*13a5a06575 //  // @ game+0xf3cb900
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility //  // @ game+0x11999f4
	void *c87ee391e6(); // Function Engine.SceneComponent.*c87ee391e6 //  // @ game+0xe2d590
	void K2_SetWorldTransform(); // Function Engine.SceneComponent.K2_SetWorldTransform //  // @ game+0xf3d2790
	void *abfe3917a3(); // Function Engine.SceneComponent.*abfe3917a3 //  // @ game+0xf3d1e64
	void K2_AddLocalOffset(); // Function Engine.SceneComponent.K2_AddLocalOffset //  // @ game+0xf3cf074
	void *c9efaea57b(); // Function Engine.SceneComponent.*c9efaea57b //  // @ game+0xf3cb768
	void *5046c8d489(); // Function Engine.SceneComponent.*5046c8d489 //  // @ game+0xf3c646c
};

// Class Engine.PrimitiveComponent
// Size: 0x9d0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UPrimitiveComponent : USceneComponent {
	char pad_480[0x8]; // 0x480(0x08)
	float MinDrawDistance; // 0x488(0x04)
	float LDMaxDrawDistance; // 0x48c(0x04)
	float CachedMaxDrawDistance; // 0x490(0x04)
	enum class *d3f6c3740d *fdc9c33a30; // 0x494(0x01)
	enum class *d3f6c3740d *1a4af27764; // 0x495(0x01)
	char pad_496[0x2]; // 0x496(0x02)
	char pad_498_0 : 3; // 0x498(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x498(0x01)
	char bGenerateOverlapEvents : 1; // 0x498(0x01)
	char bMultiBodyOverlap : 1; // 0x498(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x498(0x01)
	char bTraceComplexOnMove : 1; // 0x498(0x01)
	char bDisableForceFromCharacter : 1; // 0x499(0x01)
	char bReturnMaterialOnMove : 1; // 0x499(0x01)
	char *33b37928ab : 1; // 0x499(0x01)
	char bAllowCullDistanceVolume : 1; // 0x499(0x01)
	char bImportantMesh : 1; // 0x499(0x01)
	char bOverrideCullingDistances : 1; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	float HLODScreenSize; // 0x49c(0x04)
	char *50478d4d29 : 1; // 0x4a0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4a0(0x01)
	char bRenderInMainPass : 1; // 0x4a0(0x01)
	char bRenderInMono : 1; // 0x4a0(0x01)
	char bOwnerNoSee : 1; // 0x4a0(0x01)
	char bOnlyOwnerSee : 1; // 0x4a0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4a0(0x01)
	char bUseAsOccluder : 1; // 0x4a0(0x01)
	char bForceAsOccluder : 1; // 0x4a1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4a1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4a1(0x01)
	char *2c886c33ff : 1; // 0x4a1(0x01)
	char bForceMipStreaming : 1; // 0x4a1(0x01)
	char *00eae22941 : 1; // 0x4a1(0x01)
	char pad_4A1_6 : 1; // 0x4a1(0x01)
	char CastShadow : 1; // 0x4a1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4a2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4a2(0x01)
	char bCastDynamicShadow : 1; // 0x4a2(0x01)
	char bCastStaticShadow : 1; // 0x4a2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4a2(0x01)
	char bSelfShadowOnly : 1; // 0x4a2(0x01)
	char bCastFarShadow : 1; // 0x4a2(0x01)
	char bCastInsetShadow : 1; // 0x4a2(0x01)
	char bCastCinematicShadow : 1; // 0x4a3(0x01)
	char bCastHiddenShadow : 1; // 0x4a3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4a3(0x01)
	char bLightAsIfStatic : 1; // 0x4a3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4a3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4a3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4a3(0x01)
	char *e67a0fcf3e : 1; // 0x4a3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4a4(0x01)
	char bIgnoreRadialForce : 1; // 0x4a4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4a4(0x01)
	char bSyncBodySleep : 1; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	char bOverrideDontGenerateNavMeshOnTop : 1; // 0x4a8(0x01)
	char *5422c63545 : 1; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	char *c99c92be57 : 1; // 0x4ac(0x01)
	char *4ec90026a7 : 1; // 0x4ac(0x01)
	char *9b888235f3 : 1; // 0x4ac(0x01)
	char bRenderCustomDepth : 1; // 0x4ac(0x01)
	char pad_4AD_0 : 4; // 0x4ad(0x01)
	char *8d01ebca1c : 1; // 0x4ad(0x01)
	char *fc51d74975 : 1; // 0x4ad(0x01)
	char *bf8d9ff900 : 1; // 0x4ad(0x01)
	char pad_4AE[0x2]; // 0x4ae(0x02)
	enum class EDecalChannel DecalChannel; // 0x4b0(0x01)
	enum class *dc9bbb7e1b IndoorOutdoorMask; // 0x4b1(0x01)
	struct FLightingChannels LightingChannels; // 0x4b2(0x03)
	enum class *57e521eac5 IndirectLightingCacheQuality; // 0x4b5(0x01)
	bool CustomDepthStencilValue; // 0x4b6(0x01)
	enum class *96e1e342d5 CustomDepthStencilWriteMask; // 0x4b7(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4b8(0x10)
	int32 TranslucencySortPriority; // 0x4c8(0x04)
	int32 *5f614bdabc; // 0x4cc(0x04)
	char pad_4D0[0x4]; // 0x4d0(0x04)
	float LpvBiasMultiplier; // 0x4d4(0x04)
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FBodyInstance BodyInstance; // 0x4e0(0x230)
	char pad_710[0x8]; // 0x710(0x08)
	enum class EHasCustomNavigableGeometry *15ea49ed2b; // 0x718(0x01)
	char pad_719[0x3b]; // 0x719(0x3b)
	float BoundsScale; // 0x754(0x04)
	float *df5e9aa165; // 0x758(0x04)
	float *73e29d56df; // 0x75c(0x04)
	float *2436443b85; // 0x760(0x04)
	enum class *3c2fc2c9b8 CanBeCharacterBase; // 0x764(0x01)
	char pad_765[0x1]; // 0x765(0x01)
	enum class *3c2fc2c9b8 CanCharacterStepUpOn; // 0x766(0x01)
	char pad_767[0x1]; // 0x767(0x01)
	struct TArray<struct AActor*> *8e5dbaf788; // 0x768(0x10)
	struct TArray<struct UPrimitiveComponent*> *5816ac7c36; // 0x778(0x10)
	char pad_788[0xb8]; // 0x788(0xb8)
	struct FMulticastDelegate OnComponentHit; // 0x840(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x850(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x860(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x870(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x880(0x10)
	char pad_890[0x10]; // 0x890(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8b0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8c0(0x10)
	struct FMulticastDelegate OnReleased; // 0x8d0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x8e0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x8f0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x910(0x10)
	char pad_920[0x28]; // 0x920(0x28)
	struct UPrimitiveComponent* *57f47b00e9; // 0x948(0x08)
	struct UPrimitiveComponent* *579be93153; // 0x950(0x08)
	struct F*0e483fb0a0 *2162e9a3d5; // 0x958(0x58)
	char pad_9B0[0x20]; // 0x9b0(0x20)

	void *f54b737bc0(); // Function Engine.PrimitiveComponent.*f54b737bc0 //  // @ game+0xf3e9e30
	void *f6da4ce05b(); // Function Engine.PrimitiveComponent.*f6da4ce05b //  // @ game+0xf3ca828
	void AddForceAtLocationLocal(); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal //  // @ game+0xf39bea0
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale //  // @ game+0xf3f18b4
	void K2_LineTraceComponent(); // Function Engine.PrimitiveComponent.K2_LineTraceComponent //  // @ game+0xf3d0f10
	void *ed5bbde3f3(); // Function Engine.PrimitiveComponent.*ed5bbde3f3 //  // @ game+0xf3ca70c
	void *f5a3e071d2(); // Function Engine.PrimitiveComponent.*f5a3e071d2 //  // @ game+0xf3e72e4
	void *f8904e8055(); // Function Engine.PrimitiveComponent.*f8904e8055 //  // @ game+0xf3c9e90
	void CreateDynamicMaterialInstance(); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance //  // @ game+0xdfde48
	void *f6efbd02e3(); // Function Engine.PrimitiveComponent.*f6efbd02e3 //  // @ game+0xf3e2a68
	void *aaa0c81ff0(); // Function Engine.PrimitiveComponent.*aaa0c81ff0 //  // @ game+0xf3ccde8
	void *227d4e89a4(); // Function Engine.PrimitiveComponent.*227d4e89a4 //  // @ game+0xf3f950c
	void *21d0cb654c(); // Function Engine.PrimitiveComponent.*21d0cb654c //  // @ game+0xf3d0eac
	void *a01669718e(); // Function Engine.PrimitiveComponent.*a01669718e //  // @ game+0xf3d0edc
	void *548a484109(); // Function Engine.PrimitiveComponent.*548a484109 //  // @ game+0xf3f30fc
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents //  // @ game+0xf3cada8
	void *31514bdd8d(); // Function Engine.PrimitiveComponent.*31514bdd8d //  // @ game+0xf3c72d8
	void *9b26ab6d1d(); // Function Engine.PrimitiveComponent.*9b26ab6d1d //  // @ game+0xf3f461c
	void *d2b26a3273(); // Function Engine.PrimitiveComponent.*d2b26a3273 //  // @ game+0xf3f72f0
	void *a57b0d7b8f(); // Function Engine.PrimitiveComponent.*a57b0d7b8f //  // @ game+0xf3fc420
	void SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial //  // @ game+0xf3f2268
	void *ccaac09452(); // Function Engine.PrimitiveComponent.*ccaac09452 //  // @ game+0xf39e2b8
	void *0fdb2a502a(); // Function Engine.PrimitiveComponent.*0fdb2a502a //  // @ game+0xf3e90f4
	void *0184e33cfc(); // Function Engine.PrimitiveComponent.*0184e33cfc //  // @ game+0xf3f7274
	void *e6def7984a(); // Function Engine.PrimitiveComponent.*e6def7984a //  // @ game+0xf3e3588
	void AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse //  // @ game+0xf399308
	void *6feac98170(); // Function Engine.PrimitiveComponent.*6feac98170 //  // @ game+0xf3ca0f4
	void SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity //  // @ game+0xf3f48ac
	void CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial //  // @ game+0xf3aa960
	void *b61cd8d3b6(); // Function Engine.PrimitiveComponent.*b61cd8d3b6 //  // @ game+0xf3efacc
	void *b5dbfde256(); // Function Engine.PrimitiveComponent.*b5dbfde256 //  // @ game+0xf3f317c
	void *d352c83e17(); // Function Engine.PrimitiveComponent.*d352c83e17 //  // @ game+0xf3e907c
	void *206aee2d92(); // Function Engine.PrimitiveComponent.*206aee2d92 //  // @ game+0xf3c7360
	void *a3bab46865(); // Function Engine.PrimitiveComponent.*a3bab46865 //  // @ game+0xf3c7328
	void GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity //  // @ game+0xf3cb41c
	void *fb31eb9647(); // Function Engine.PrimitiveComponent.*fb31eb9647 //  // @ game+0xf3a26cc
	void *7d7dba56e7(); // Function Engine.PrimitiveComponent.*7d7dba56e7 //  // @ game+0xf3f736c
	void SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass //  // @ game+0xf3e73e0
	void *72933bbc9b(); // Function Engine.PrimitiveComponent.*72933bbc9b //  // @ game+0xf3f86c4
	void GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors //  // @ game+0xf3caa64
	void *47ac5e30cd(); // Function Engine.PrimitiveComponent.*47ac5e30cd //  // @ game+0xf3e33e0
	void *c8b8950244(); // Function Engine.PrimitiveComponent.*c8b8950244 //  // @ game+0xdb87de0
	void *af36452596(); // Function Engine.PrimitiveComponent.*af36452596 //  // @ game+0xdb7ad08
	void *b66ddcd674(); // Function Engine.PrimitiveComponent.*b66ddcd674 //  // @ game+0xf3ce260
	void AddForce(); // Function Engine.PrimitiveComponent.AddForce //  // @ game+0xf39bc8c
	void *59bc0914c9(); // Function Engine.PrimitiveComponent.*59bc0914c9 //  // @ game+0xf3ca068
	void *7b9f0221fb(); // Function Engine.PrimitiveComponent.*7b9f0221fb //  // @ game+0xf3e8708
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType //  // @ game+0xf3e773c
	void SetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity //  // @ game+0xf3f469c
	void CreateAndSetMaterialInstanceDynamic(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic //  // @ game+0xf3aa8d4
	void *35665843b6(); // Function Engine.PrimitiveComponent.*35665843b6 //  // @ game+0xf3a22a4
	void *7edc3f5841(); // Function Engine.PrimitiveComponent.*7edc3f5841 //  // @ game+0xf3e78bc
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass //  // @ game+0xf3c9f94
	void *bf049e0b65(); // Function Engine.PrimitiveComponent.*bf049e0b65 //  // @ game+0xf3d54f0
	void *aece75ea58(); // Function Engine.PrimitiveComponent.*aece75ea58 //  // @ game+0xf3c6ec0
	void *a2383c76b6(); // Function Engine.PrimitiveComponent.*a2383c76b6 //  // @ game+0xf3e77bc
	void *eca16d3f71(); // Function Engine.PrimitiveComponent.*eca16d3f71 //  // @ game+0xf3e926c
	void *879986da1f(); // Function Engine.PrimitiveComponent.*879986da1f //  // @ game+0xf3f8524
	void *90766e3832(); // Function Engine.PrimitiveComponent.*90766e3832 //  // @ game+0xf3f3c0c
	void *e3b9608faf(); // Function Engine.PrimitiveComponent.*e3b9608faf //  // @ game+0xf3c7300
	void AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation //  // @ game+0xf39c224
	void *449733baf9(); // Function Engine.PrimitiveComponent.*449733baf9 //  // @ game+0x11b1b74
	void AddTorque(); // Function Engine.PrimitiveComponent.AddTorque //  // @ game+0xf3a02f0
	void *fad4455e7b(); // Function Engine.PrimitiveComponent.*fad4455e7b //  // @ game+0xf3ccc2c
	void *05efc76ab6(); // Function Engine.PrimitiveComponent.*05efc76ab6 //  // @ game+0xf3f0444
	void *8630e3e1b2(); // Function Engine.PrimitiveComponent.*8630e3e1b2 //  // @ game+0xf3a26e8
	void GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity //  // @ game+0xf3cb384
	void SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity //  // @ game+0xf3f47a4
	void *c591edb1cd(); // Function Engine.PrimitiveComponent.*c591edb1cd //  // @ game+0xf39ed18
	void *c3387835d7(); // Function Engine.PrimitiveComponent.*c3387835d7 //  // @ game+0xf3f0eb4
	void *29c7aa6ac9(); // Function Engine.PrimitiveComponent.*29c7aa6ac9 //  // @ game+0xf3f75a4
	void *4e481fc72d(); // Function Engine.PrimitiveComponent.*4e481fc72d //  // @ game+0xf3c71b0
	void *cbb70ba622(); // Function Engine.PrimitiveComponent.*cbb70ba622 //  // @ game+0xf3dc210
	void *d7565d7b52(); // Function Engine.PrimitiveComponent.*d7565d7b52 //  // @ game+0x11d1564
	void *89acffa6c4(); // Function Engine.PrimitiveComponent.*89acffa6c4 //  // @ game+0xf3e5f00
	void *de0a0432a8(); // Function Engine.PrimitiveComponent.*de0a0432a8 //  // @ game+0xf3c63c0
	void *6c561acf1e(); // Function Engine.PrimitiveComponent.*6c561acf1e //  // @ game+0xf3e85b4
	void *9d6b63263d(); // Function Engine.PrimitiveComponent.*9d6b63263d //  // @ game+0xf3aa854
	void *75dc0dfc5b(); // Function Engine.PrimitiveComponent.*75dc0dfc5b //  // @ game+0xf3d0e80
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity //  // @ game+0xf3e34b8
	void *fc95de3892(); // Function Engine.PrimitiveComponent.*fc95de3892 //  // @ game+0xf3ce474
	void *24231d6f7b(); // Function Engine.PrimitiveComponent.*24231d6f7b //  // @ game+0xf3dae34
	void AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse //  // @ game+0xf39c128
	void *aa0159a140(); // Function Engine.PrimitiveComponent.*aa0159a140 //  // @ game+0xf3f2324
	void *4063732194(); // Function Engine.PrimitiveComponent.*4063732194 //  // @ game+0xf3cb4b4
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors //  // @ game+0xf3aa7d4
	void *4193d5e71e(); // Function Engine.PrimitiveComponent.*4193d5e71e //  // @ game+0xf3c917c
	void AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation //  // @ game+0xf39bd88
	void *061d0fef3a(); // Function Engine.PrimitiveComponent.*061d0fef3a //  // @ game+0xf3c9fc0
	void *a37a3ba458(); // Function Engine.PrimitiveComponent.*a37a3ba458 //  // @ game+0xf3e783c
	void *2e3ae9f423(); // Function Engine.PrimitiveComponent.*2e3ae9f423 //  // @ game+0xf3ccd2c
};

// Class Engine.MeshComponent
// Size: 0xae0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x9d0(0x10)
	char pad_9E0[0x100]; // 0x9e0(0x100)

	void *6b291630bd(); // Function Engine.MeshComponent.*6b291630bd //  // @ game+0xf3ca180
	void *8fc35bdb15(); // Function Engine.MeshComponent.*8fc35bdb15 //  // @ game+0xf3ce0a8
	void *e98edb5b58(); // Function Engine.MeshComponent.*e98edb5b58 //  // @ game+0x8379a4
	void *09d4ec9a03(); // Function Engine.MeshComponent.*09d4ec9a03 //  // @ game+0xf3ca210
	void *58bedeadba(); // Function Engine.MeshComponent.*58bedeadba //  // @ game+0xf3ca294
	void *4f189d6881(); // Function Engine.MeshComponent.*4f189d6881 //  // @ game+0x10abd98
};

// Class Engine.StaticMeshComponent
// Size: 0xb80 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel; // 0xad8(0x04)
	int32 *fe5b305e39; // 0xadc(0x04)
	bool bOverrideMinLOD; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	int32 MinLOD; // 0xae4(0x04)
	struct UStaticMesh* StaticMesh; // 0xae8(0x08) rep=OnRep_StaticMesh
	bool bOverrideWireframeColor; // 0xaf0(0x01)
	char pad_AF1[0x3]; // 0xaf1(0x03)
	struct FColor WireframeColorOverride; // 0xaf4(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xaf8(0x10)
	char *89d496ad52 : 1; // 0xb08(0x01)
	char *2b98030cab : 1; // 0xb08(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb08(0x01)
	char *6b015e4949 : 1; // 0xb08(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb08(0x01)
	char bOverrideLightMapRes : 1; // 0xb08(0x01)
	char pad_B09[0x3]; // 0xb09(0x03)
	int32 OverriddenLightMapRes; // 0xb0c(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb10(0x01)
	char pad_B11[0x3]; // 0xb11(0x03)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb14(0x04)
	float StreamingDistanceMultiplier; // 0xb18(0x04)
	int32 *7f863f8fd1; // 0xb1c(0x04)
	char *2010eb07cb : 1; // 0xb20(0x01)
	char pad_B21[0x7]; // 0xb21(0x07)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb28(0x10)
	struct TArray<struct F*fbd7a596cb> *cdecf8b337; // 0xb38(0x10)
	struct TArray<struct F*7dede11b03> *3418c4e29c; // 0xb48(0x10)
	bool *a657d68048; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	struct F*11375ead39 LightmassSettings; // 0xb5c(0x18)
	char pad_B74[0xc]; // 0xb74(0x0c)

	void SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh //  // @ game+0xed42d08
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh //  // @ game+0xf3d69b8
	void *3b79213b4c(); // Function Engine.StaticMeshComponent.*3b79213b4c //  // @ game+0xf3c9ebc
	void *c3945337ab(); // Function Engine.StaticMeshComponent.*c3945337ab //  // @ game+0xf3e9db8
};

// Class Engine.SkinnedMeshComponent
// Size: 0xe20 (Inherited: 0xae0)  [layout: LECH - offset chi la uoc luong]
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xad8(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xae0(0x08)
	char pad_AE8[0x60]; // 0xae8(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct TArray<struct FBoxSphereBounds> *b202661189; // 0xb50(0x10)
	char pad_B60[0x20]; // 0xb60(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xb80(0x08)
	int32 ForcedLodModel; // 0xb88(0x04)
	int32 MinLodModel; // 0xb8c(0x04)
	char pad_B90[0x10]; // 0xb90(0x10)
	struct TArray<struct F*deb1878349> LODInfo; // 0xba0(0x10)
	float StreamingDistanceMultiplier; // 0xbb0(0x04)
	struct FColor WireframeColor; // 0xbb4(0x04)
	char *781ae43b4f : 1; // 0xbb8(0x01)
	char *ba3dcb8806 : 1; // 0xbb8(0x01)
	char bDisableMorphTarget : 1; // 0xbb8(0x01)
	char *01767572d4 : 1; // 0xbb8(0x01)
	char pad_BB9[0x17]; // 0xbb9(0x17)
	char bPerBoneMotionBlur : 1; // 0xbd0(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xbd0(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xbd0(0x01)
	char bSyncAttachParentLOD : 1; // 0xbd0(0x01)
	char pad_BD1[0x3]; // 0xbd1(0x03)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	char *db156b537f : 1; // 0xbd8(0x01)
	char *b08e6c5a65 : 1; // 0xbd8(0x01)
	char *c19053c805 : 1; // 0xbd8(0x01)
	char pad_BD9[0x3]; // 0xbd9(0x03)
	bool *57e693a635; // 0xbdc(0x01)
	char pad_BDD[0x3]; // 0xbdd(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xbe0(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xbe0(0x01)
	char bRenderStatic : 1; // 0xbe0(0x01)
	char *e6dc39214b : 1; // 0xbe0(0x01)
	char pad_BE1[0x3]; // 0xbe1(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0xbe4(0x04)
	char pad_BE8[0x8]; // 0xbe8(0x08)
	bool bEnableUpdateRateOptimizations; // 0xbf0(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xbf1(0x01)
	char pad_BF2[0x1]; // 0xbf2(0x01)
	bool *f5eae56ec4; // 0xbf3(0x01)
	bool *025e236333; // 0xbf4(0x01)
	char pad_BF5[0x1]; // 0xbf5(0x01)
	bool *ffe26c5af1; // 0xbf6(0x01)
	char pad_BF7[0x1]; // 0xbf7(0x01)
	struct FBoxSphereBounds *3190393ad3; // 0xbf8(0x1c)
	char pad_C14[0x4]; // 0xc14(0x04)
	struct TMap<struct FName, struct F*2abec75d36> Slots; // 0xc18(0x50)
	char pad_C68[0x1b8]; // 0xc68(0x1b8)

	void SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh //  // @ game+0xf50e7e0
	void GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex //  // @ game+0xf46084c
	void *817ab5faa4(); // Function Engine.SkinnedMeshComponent.*817ab5faa4 //  // @ game+0xf460a5c
	void *579e65ed69(); // Function Engine.SkinnedMeshComponent.*579e65ed69 //  // @ game+0xf469eac
	void *1d040dfd3b(); // Function Engine.SkinnedMeshComponent.*1d040dfd3b //  // @ game+0xf4e94b4
	void *e11f2dd91d(); // Function Engine.SkinnedMeshComponent.*e11f2dd91d //  // @ game+0xf4fd61c
	void *fbeabbd5c3(); // Function Engine.SkinnedMeshComponent.*fbeabbd5c3 //  // @ game+0xf547670
	void *2cf0d8a575(); // Function Engine.SkinnedMeshComponent.*2cf0d8a575 //  // @ game+0xf455a08
	void *8051a5ebcf(); // Function Engine.SkinnedMeshComponent.*8051a5ebcf //  // @ game+0xf50db54
	void *c0e755697d(); // Function Engine.SkinnedMeshComponent.*c0e755697d //  // @ game+0xf47e520
	void SetSkinWeightOverride(); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride //  // @ game+0xf50e91c
	void *be67959492(); // Function Engine.SkinnedMeshComponent.*be67959492 //  // @ game+0xf547390
	void *cd33d5e7c3(); // Function Engine.SkinnedMeshComponent.*cd33d5e7c3 //  // @ game+0xf4d61a0
	void *02d98ee27d(); // Function Engine.SkinnedMeshComponent.*02d98ee27d //  // @ game+0xf46a1e8
	void *ead8bb1493(); // Function Engine.SkinnedMeshComponent.*ead8bb1493 //  // @ game+0xf4fe00c
	void *806d3832c9(); // Function Engine.SkinnedMeshComponent.*806d3832c9 //  // @ game+0xf5046a0
	void *f35a68e3f6(); // Function Engine.SkinnedMeshComponent.*f35a68e3f6 //  // @ game+0xf41cc80
	void *68e4732f99(); // Function Engine.SkinnedMeshComponent.*68e4732f99 //  // @ game+0xf435380
	void *d863b8b870(); // Function Engine.SkinnedMeshComponent.*d863b8b870 //  // @ game+0xf435f50
	void *eff064acb9(); // Function Engine.SkinnedMeshComponent.*eff064acb9 //  // @ game+0xf547844
	void *f69d215303(); // Function Engine.SkinnedMeshComponent.*f69d215303 //  // @ game+0xf4d27ec
	void *d05d1f666b(); // Function Engine.SkinnedMeshComponent.*d05d1f666b //  // @ game+0xf48084c
	void *7764e56fbe(); // Function Engine.SkinnedMeshComponent.*7764e56fbe //  // @ game+0xf470f8c
	void *57c94a70bb(); // Function Engine.SkinnedMeshComponent.*57c94a70bb //  // @ game+0xf4d6108
	void *f397d4fe6e(); // Function Engine.SkinnedMeshComponent.*f397d4fe6e //  // @ game+0xf51b548
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1320 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0xe20(0x08)
	struct UClass* AnimClass; // 0xe28(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0xe30(0x08)
	struct TArray<struct UAnimInstance*> *49ce203020; // 0xe38(0x10)
	struct UAnimInstance* *4070e32a89; // 0xe48(0x08)
	struct F*9f277fcb14 AnimationData; // 0xe50(0x18)
	char pad_E68[0x30]; // 0xe68(0x30)
	struct TArray<struct FTransform> *643d3c7a42; // 0xe98(0x10)
	struct TArray<struct FTransform> *88f713f796; // 0xea8(0x10)
	char pad_EB8[0x20]; // 0xeb8(0x20)
	float GlobalAnimRateScale; // 0xed8(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xedc(0x01)
	enum class *9d461b4f02 PhysicsTransformUpdateMode; // 0xedd(0x01)
	char pad_EDE[0x1]; // 0xede(0x01)
	enum class EAnimationMode AnimationMode; // 0xedf(0x01)
	char pad_EE0[0x4]; // 0xee0(0x04)
	char pad_EE4_0 : 1; // 0xee4(0x01)
	char *f50991870d : 1; // 0xee4(0x01)
	char pad_EE4_2 : 1; // 0xee4(0x01)
	char *1a72ceeca4 : 1; // 0xee4(0x01)
	char pad_EE4_4 : 2; // 0xee4(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xee4(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xee4(0x01)
	char bDisableClothSimulation : 1; // 0xee5(0x01)
	char pad_EE5_1 : 2; // 0xee5(0x01)
	char bCollideWithEnvironment : 1; // 0xee5(0x01)
	char bCollideWithAttachedChildren : 1; // 0xee5(0x01)
	char bLocalSpaceSimulation : 1; // 0xee5(0x01)
	char *007b66ba18 : 1; // 0xee5(0x01)
	char bResetAfterTeleport : 1; // 0xee5(0x01)
	char pad_EE6_0 : 1; // 0xee6(0x01)
	char bNoSkeletonUpdate : 1; // 0xee6(0x01)
	char bPauseAnims : 1; // 0xee6(0x01)
	char *4af373899b : 1; // 0xee6(0x01)
	char bEnablePerPolyCollision : 1; // 0xee6(0x01)
	char *93e6d12160 : 1; // 0xee6(0x01)
	char *5068f5e89a : 1; // 0xee6(0x01)
	char *9c42fc4d14 : 1; // 0xee6(0x01)
	char *28989cf38c : 1; // 0xee7(0x01)
	char *019d341100 : 1; // 0xee7(0x01)
	char *c99798fe78 : 1; // 0xee7(0x01)
	char *6b2d229618 : 1; // 0xee7(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xee7(0x01)
	char *63b404292c : 1; // 0xee7(0x01)
	char *190acbef88 : 1; // 0xee8(0x01)
	char pad_EE9_0 : 2; // 0xee9(0x01)
	char bDefaultLooping : 1; // 0xee9(0x01)
	char bDefaultPlaying : 1; // 0xee9(0x01)
	uint16 *35bcf12eeb; // 0xeea(0x02)
	float ClothBlendWeight; // 0xeec(0x04)
	struct FVector *78adee9192; // 0xef0(0x0c)
	char pad_EFC[0x4]; // 0xefc(0x04)
	struct UBodySetup* BodySetup; // 0xf00(0x08)
	float TeleportDistanceThreshold; // 0xf08(0x04)
	float TeleportRotationThreshold; // 0xf0c(0x04)
	struct FVector *be571a0702; // 0xf10(0x0c)
	char pad_F1C[0x4]; // 0xf1c(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0xf20(0x10)
	char pad_F30[0xe0]; // 0xf30(0xe0)
	struct UClass* *86f148e255; // 0x1010(0x08)
	char pad_1018[0x1e8]; // 0x1018(0x1e8)
	struct UAnimSequence* SequenceToPlay; // 0x1200(0x08)
	struct UAnimationAsset* AnimToPlay; // 0x1208(0x08)
	float DefaultPosition; // 0x1210(0x04)
	float DefaultPlayRate; // 0x1214(0x04)
	uint32 *064a9f0330; // 0x1218(0x04)
	float *609e9b6dd1; // 0x121c(0x04)
	char pad_1220[0x100]; // 0x1220(0x100)

	void *21cc3cda1e(); // Function Engine.SkeletalMeshComponent.*21cc3cda1e //  // @ game+0xf4dfd48
	void *b565f4fb83(); // Function Engine.SkeletalMeshComponent.*b565f4fb83 //  // @ game+0x11235b0
	void *daf82a3b47(); // Function Engine.SkeletalMeshComponent.*daf82a3b47 //  // @ game+0xf4d870c
	void *9af6c973bc(); // Function Engine.SkeletalMeshComponent.*9af6c973bc //  // @ game+0xf526078
	void *69695a22b5(); // Function Engine.SkeletalMeshComponent.*69695a22b5 //  // @ game+0xf461a78
	void *4c1b82df95(); // Function Engine.SkeletalMeshComponent.*4c1b82df95 //  // @ game+0xf4c146c
	void *8d73bec6a4(); // Function Engine.SkeletalMeshComponent.*8d73bec6a4 //  // @ game+0xda977bc
	void *94a901d57b(); // Function Engine.SkeletalMeshComponent.*94a901d57b //  // @ game+0xf4c1574
	void *4f95f35a03(); // Function Engine.SkeletalMeshComponent.*4f95f35a03 //  // @ game+0xf458bac
	void *c0623a3f88(); // Function Engine.SkeletalMeshComponent.*c0623a3f88 //  // @ game+0xf45f028
	void *61b8139fe8(); // Function Engine.SkeletalMeshComponent.*61b8139fe8 //  // @ game+0xf4d8620
	void *eebabdf024(); // Function Engine.SkeletalMeshComponent.*eebabdf024 //  // @ game+0xf458bc4
	void *7df5724d5b(); // Function Engine.SkeletalMeshComponent.*7df5724d5b //  // @ game+0xf5012e0
	void *77090719f3(); // Function Engine.SkeletalMeshComponent.*77090719f3 //  // @ game+0xf4d78b8
	void *2d2eac075c(); // Function Engine.SkeletalMeshComponent.*2d2eac075c //  // @ game+0xf4567ec
	void *c20a951237(); // Function Engine.SkeletalMeshComponent.*c20a951237 //  // @ game+0xf4dfe00
	void *c50121d718(); // Function Engine.SkeletalMeshComponent.*c50121d718 //  // @ game+0xf4807b4
	void *a42c5bf4d8(); // Function Engine.SkeletalMeshComponent.*a42c5bf4d8 //  // @ game+0xf470f58
	void *b6a7714807(); // Function Engine.SkeletalMeshComponent.*b6a7714807 //  // @ game+0xf5478bc
	void *bf2863ee94(); // Function Engine.SkeletalMeshComponent.*bf2863ee94 //  // @ game+0xf4c1fbc
	void *8a3b97e4ae(); // Function Engine.SkeletalMeshComponent.*8a3b97e4ae //  // @ game+0xf469db8
	void SetPosition(); // Function Engine.SkeletalMeshComponent.SetPosition //  // @ game+0xf508c90
	void *5b92b1b67a(); // Function Engine.SkeletalMeshComponent.*5b92b1b67a //  // @ game+0xf47e270
	void *864ff798c9(); // Function Engine.SkeletalMeshComponent.*864ff798c9 //  // @ game+0xf4c1f40
	void *33c73b1597(); // Function Engine.SkeletalMeshComponent.*33c73b1597 //  // @ game+0xf480904
	void *13dd3bde21(); // Function Engine.SkeletalMeshComponent.*13dd3bde21 //  // @ game+0xf482688
	void *20f260485b(); // Function Engine.SkeletalMeshComponent.*20f260485b //  // @ game+0xf4ffd40
	void *5a6396d36a(); // Function Engine.SkeletalMeshComponent.*5a6396d36a //  // @ game+0xf4352e8
	void *b7e644feab(); // Function Engine.SkeletalMeshComponent.*b7e644feab //  // @ game+0xf405ea8
	void *643fc84caa(); // Function Engine.SkeletalMeshComponent.*643fc84caa //  // @ game+0xf4609a0
	void *f9a81edd67(); // Function Engine.SkeletalMeshComponent.*f9a81edd67 //  // @ game+0xf4cee4c
	void SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass //  // @ game+0xf4cb280
	void *e5f6b554a0(); // Function Engine.SkeletalMeshComponent.*e5f6b554a0 //  // @ game+0xf504760
	void IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying //  // @ game+0xf480ef0
	void *79968539a1(); // Function Engine.SkeletalMeshComponent.*79968539a1 //  // @ game+0xf4060b4
	void Play(); // Function Engine.SkeletalMeshComponent.Play //  // @ game+0xf4a2814
	void *563c14c157(); // Function Engine.SkeletalMeshComponent.*563c14c157 //  // @ game+0xf4bc2f0
	void *584735edd7(); // Function Engine.SkeletalMeshComponent.*584735edd7 //  // @ game+0xf4bc264
	void *15df1e4a2e(); // Function Engine.SkeletalMeshComponent.*15df1e4a2e //  // @ game+0xf4c3b68
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop //  // @ game+0xf540c58
	void *954a27cbb4(); // Function Engine.SkeletalMeshComponent.*954a27cbb4 //  // @ game+0xf4e005c
	void *7c5cba63f2(); // Function Engine.SkeletalMeshComponent.*7c5cba63f2 //  // @ game+0xf49f8ec
	void *bb6225d3b3(); // Function Engine.SkeletalMeshComponent.*bb6225d3b3 //  // @ game+0xf416d08
	void GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate //  // @ game+0xf46a528
	void *c9f031c611(); // Function Engine.SkeletalMeshComponent.*c9f031c611 //  // @ game+0xf4c6c5c
	void *44d7ba910a(); // Function Engine.SkeletalMeshComponent.*44d7ba910a //  // @ game+0xf401104
	void *50d7ae4143(); // Function Engine.SkeletalMeshComponent.*50d7ae4143 //  // @ game+0xf422b6c
	void *e0353c6c82(); // Function Engine.SkeletalMeshComponent.*e0353c6c82 //  // @ game+0xf4bce64
	void PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation //  // @ game+0xf4a3298
	void GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition //  // @ game+0xf46aa80
	void *70c17c169f(); // Function Engine.SkeletalMeshComponent.*70c17c169f //  // @ game+0xf461fa0
	void SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation //  // @ game+0xf4cb2fc
	void *82c4049861(); // Function Engine.SkeletalMeshComponent.*82c4049861 //  // @ game+0xf4c0a34
	void *cb99f52917(); // Function Engine.SkeletalMeshComponent.*cb99f52917 //  // @ game+0xf4cbd64
	void *4f80a08d0e(); // Function Engine.SkeletalMeshComponent.*4f80a08d0e //  // @ game+0xf46ad00
	void *73e6c1dcf7(); // Function Engine.SkeletalMeshComponent.*73e6c1dcf7 //  // @ game+0xf5439c8
	void *6c1c6a6cf2(); // Function Engine.SkeletalMeshComponent.*6c1c6a6cf2 //  // @ game+0xf4c3c68
	void SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate //  // @ game+0xf5063bc
};

// Class Engine.TargetPoint
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ATargetPoint : AActor {
};

// Class Engine.SkeletalMeshActor
// Size: 0x488 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASkeletalMeshActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	char bShouldDoAnimNotifies : 1; // 0x408(0x01)
	char bWakeOnLevelStart : 1; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x410(0x08)
	struct USkeletalMesh* *6132eb2e85; // 0x418(0x08) rep=OnRep_ReplicatedMesh
	struct UPhysicsAsset* *f5bd3f953e; // 0x420(0x08) rep=OnRep_ReplicatedPhysAsset
	struct UMaterialInterface* *69c5f31d37; // 0x428(0x08) rep=OnRep_ReplicatedMaterial0
	struct UMaterialInterface* *1d2f2660e7; // 0x430(0x08) rep=OnRep_ReplicatedMaterial1
	char pad_438[0x50]; // 0x438(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset //  // @ game+0x100d054
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh //  // @ game+0xdac1ed4
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 //  // @ game+0x2f318c
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 //  // @ game+0xdb39b60
};

// Class Engine.DestructibleComponent
// Size: 0xec0 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xe20(0x01)
	char pad_E21[0x7]; // 0xe21(0x07)
	struct TArray<struct F*5d473124e9> FractureEffects; // 0xe28(0x10)
	bool bEnableHardSleeping; // 0xe38(0x01)
	char pad_E39[0x3]; // 0xe39(0x03)
	float LargeChunkThreshold; // 0xe3c(0x04)
	struct FMulticastDelegate OnComponentFracture; // 0xe40(0x10)
	char pad_E50[0x70]; // 0xe50(0x70)

	void *3ce93f5193(); // Function Engine.DestructibleComponent.*3ce93f5193 //  // @ game+0xf411a40
	void *64843df6ca(); // Function Engine.DestructibleComponent.*64843df6ca //  // @ game+0xf40b0cc
	void *edd3cd3f95(); // Function Engine.DestructibleComponent.*edd3cd3f95 //  // @ game+0xf462db0
	void *f26efbc18f(); // Function Engine.DestructibleComponent.*f26efbc18f //  // @ game+0xf4db6cc
};

// Class Engine.SaveGame
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct USaveGame : UObject {
};

// Class Engine.*c606aaa7e3
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*c606aaa7e3 : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x9d0(0x04)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	struct UBodySetup* *b1945ea7f8; // 0x9d8(0x08)
	char *2e7b9e1282 : 1; // 0x9e0(0x01)
	char *829cd236e8 : 1; // 0x9e0(0x01)
	char *cadd90fcf7 : 1; // 0x9e0(0x01)
	char pad_9E1[0x7]; // 0x9e1(0x07)
	struct UClass* AreaClass; // 0x9e8(0x08)
};

// Class Engine.BoxComponent
// Size: 0xa00 (Inherited: 0x9f0)  [layout: LECH - offset chi la uoc luong]
struct UBoxComponent : U*c606aaa7e3 {
	struct FVector BoxExtent; // 0x9f0(0x0c)
	char pad_9FC[0x4]; // 0x9fc(0x04)

	void *4cf764b60b(); // Function Engine.BoxComponent.*4cf764b60b //  // @ game+0xf4d1c60
	void *01a6e5223d(); // Function Engine.BoxComponent.*01a6e5223d //  // @ game+0xf474d64
	void *876022e78f(); // Function Engine.BoxComponent.*876022e78f //  // @ game+0xf470b10
};

// Class Engine.ProjectileMovementComponent
// Size: 0x310 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x250(0x04)
	float MaxSpeed; // 0x254(0x04)
	char bRotationFollowsVelocity : 1; // 0x258(0x01)
	char bShouldBounce : 1; // 0x258(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x258(0x01)
	char bForceSubStepping : 1; // 0x258(0x01)
	char bSimulationEnabled : 1; // 0x258(0x01)
	char bSweepCollision : 1; // 0x258(0x01)
	char bIsHomingProjectile : 1; // 0x258(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x258(0x01)
	char bIsSliding : 1; // 0x259(0x01)
	char bInterpMovement : 1; // 0x259(0x01)
	char bInterpRotation : 1; // 0x259(0x01)
	char pad_25A[0x2]; // 0x25a(0x02)
	float PreviousHitTime; // 0x25c(0x04)
	struct FVector PreviousHitNormal; // 0x260(0x0c)
	float ProjectileGravityScale; // 0x26c(0x04)
	float *f4914d1afc; // 0x270(0x04)
	float Bounciness; // 0x274(0x04)
	float Friction; // 0x278(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x27c(0x04)
	float MinFrictionFraction; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x288(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x298(0x10)
	float HomingAccelerationMagnitude; // 0x2a8(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x2ac(0x08)
	float MaxSimulationTimeStep; // 0x2b4(0x04)
	int32 MaxSimulationIterations; // 0x2b8(0x04)
	int32 BounceAdditionalIterations; // 0x2bc(0x04)
	float InterpLocationTime; // 0x2c0(0x04)
	float InterpRotationTime; // 0x2c4(0x04)
	float InterpLocationMaxLagDistance; // 0x2c8(0x04)
	float InterpLocationSnapToTargetDistance; // 0x2cc(0x04)
	char pad_2D0[0x40]; // 0x2d0(0x40)

	void OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature //  // @ game+0x43bab4
	void *abb773cc3c(); // Function Engine.ProjectileMovementComponent.*abb773cc3c //  // @ game+0xf485760
	void *d0a643c25e(); // Function Engine.ProjectileMovementComponent.*d0a643c25e //  // @ game+0xf481580
	void StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating //  // @ game+0xf540c98
	void *78a609af6b(); // Function Engine.ProjectileMovementComponent.*78a609af6b //  // @ game+0xf4f5a30
	void *2d501d0110(); // Function Engine.ProjectileMovementComponent.*2d501d0110 //  // @ game+0xf497078
	void *ca0d9e49d6(); // Function Engine.ProjectileMovementComponent.*ca0d9e49d6 //  // @ game+0xdaca1f4
	void *79fe1f36bf(); // Function Engine.ProjectileMovementComponent.*79fe1f36bf //  // @ game+0xf480b80
	void OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature //  // @ game+0x43bab4
	void *5f35e79c92(); // Function Engine.ProjectileMovementComponent.*5f35e79c92 //  // @ game+0xf51ab44
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGameInstance : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct U*ae609a0980* *ae609a0980; // 0x50(0x08)
	char pad_58[0xa8]; // 0x58(0xa8)
	struct UOnlineSession* OnlineSession; // 0x100(0x08)
	struct FMulticastDelegate OnKillcamLoadingFinished; // 0x108(0x10)
	char pad_118[0xd8]; // 0x118(0xd8)

	void HandleNetworkError(); // Function Engine.GameInstance.HandleNetworkError //  // @ game+0x43bab4
	void DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer //  // @ game+0xf43ce40
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit //  // @ game+0x43bab4
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature //  // @ game+0x43bab4
	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown //  // @ game+0x43bab4
	void DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer //  // @ game+0xf43cebc
	void HandleTravelError(); // Function Engine.GameInstance.HandleTravelError //  // @ game+0x43bab4
};

// Class Engine.*c60a4a9930
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*c60a4a9930 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*aa53226733
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*aa53226733 : U*c60a4a9930 {
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlueprintFunctionLibrary : UObject {

	void MakeStringAssetReference(); // Function Engine.BlueprintFunctionLibrary.MakeStringAssetReference //  // @ game+0xf490e18
};

// Class Engine.Commandlet
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.SpringArmComponent
// Size: 0x500 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x478(0x04)
	struct FVector SocketOffset; // 0x47c(0x0c)
	struct FVector TargetOffset; // 0x488(0x0c)
	float ProbeSize; // 0x494(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	char bDoCollisionTest : 1; // 0x49c(0x01)
	char bUsePawnControlRotation : 1; // 0x49c(0x01)
	char bInheritPitch : 1; // 0x49c(0x01)
	char bInheritYaw : 1; // 0x49c(0x01)
	char bInheritRoll : 1; // 0x49c(0x01)
	char bLockPitchLag : 1; // 0x49c(0x01)
	char bLockYawLag : 1; // 0x49c(0x01)
	char bLockRollLag : 1; // 0x49c(0x01)
	char bEnableCameraLag : 1; // 0x49d(0x01)
	char bEnableCameraRotationLag : 1; // 0x49d(0x01)
	char bUseCameraLagSubstepping : 1; // 0x49d(0x01)
	char bDrawDebugLagMarkers : 1; // 0x49d(0x01)
	char pad_49E[0x2]; // 0x49e(0x02)
	float CameraLagSpeed; // 0x4a0(0x04)
	float CameraRotationLagSpeed; // 0x4a4(0x04)
	float CameraLagMaxTimeStep; // 0x4a8(0x04)
	float CameraLagMaxDistance; // 0x4ac(0x04)
	char pad_4B0[0x50]; // 0x4b0(0x50)
};

// Class Engine.GameUserSettings
// Size: 0x118 (Inherited: 0x30)  [layout: KHOP]
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x30(0x01)
	bool bUseDynamicResolution; // 0x31(0x01)
	char pad_32[0x4e]; // 0x32(0x4e)
	uint32 ResolutionSizeX; // 0x80(0x04)
	uint32 ResolutionSizeY; // 0x84(0x04)
	uint32 LastUserConfirmedResolutionSizeX; // 0x88(0x04)
	uint32 LastUserConfirmedResolutionSizeY; // 0x8c(0x04)
	int32 WindowPosX; // 0x90(0x04)
	int32 WindowPosY; // 0x94(0x04)
	int32 FullscreenMode; // 0x98(0x04)
	int32 LastConfirmedFullscreenMode; // 0x9c(0x04)
	int32 PreferredFullscreenMode; // 0xa0(0x04)
	uint32 version; // 0xa4(0x04)
	int32 AudioQualityLevel; // 0xa8(0x04)
	float FrameRateLimit; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	int32 DesiredScreenWidth; // 0xb4(0x04)
	bool bUseDesiredScreenHeight; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DesiredScreenHeight; // 0xbc(0x04)
	float LastRecommendedScreenWidth; // 0xc0(0x04)
	float LastRecommendedScreenHeight; // 0xc4(0x04)
	float LastCPUBenchmarkResult; // 0xc8(0x04)
	float LastGPUBenchmarkResult; // 0xcc(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xd0(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xe0(0x10)
	float LastGPUBenchmarkMultiplier; // 0xf0(0x04)
	bool bUseHDRDisplayOutput; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32 HDRDisplayOutputNits; // 0xf8(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xfc(0x01)
	bool bGPUDebug; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct FDateTime GPUDebugActiveDateTime; // 0x100(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x108(0x10)

	void GetGameUserSettings(); // Function Engine.GameUserSettings.GetGameUserSettings //  // @ game+0xf562d14
	void SetFullscreenMode(); // Function Engine.GameUserSettings.SetFullscreenMode //  // @ game+0xf577118
	void RevertVideoMode(); // Function Engine.GameUserSettings.RevertVideoMode //  // @ game+0xf5748d0
	void SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue //  // @ game+0xf578688
	void SetAudioQualityLevel(); // Function Engine.GameUserSettings.SetAudioQualityLevel //  // @ game+0xf575ca8
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings //  // @ game+0xf3faed4
	void GetViewDistanceQuality(); // Function Engine.GameUserSettings.GetViewDistanceQuality //  // @ game+0xf567448
	void GetDefaultResolutionScale(); // Function Engine.GameUserSettings.GetDefaultResolutionScale //  // @ game+0xf56263c
	void SetResolutionScaleValueEx(); // Function Engine.GameUserSettings.SetResolutionScaleValueEx //  // @ game+0xf578704
	void IsScreenResolutionDirty(); // Function Engine.GameUserSettings.IsScreenResolutionDirty //  // @ game+0xf567ec8
	void SetPostProcessingQuality(); // Function Engine.GameUserSettings.SetPostProcessingQuality //  // @ game+0xf577c88
	void IsDynamicResolutionEnabled(); // Function Engine.GameUserSettings.IsDynamicResolutionEnabled //  // @ game+0xf5678c0
	void SetResolutionScaleNormalized(); // Function Engine.GameUserSettings.SetResolutionScaleNormalized //  // @ game+0xf577cfc
	void GetScreenResolution(); // Function Engine.GameUserSettings.GetScreenResolution //  // @ game+0xf5660b4
	void SetVisualEffectQuality(); // Function Engine.GameUserSettings.SetVisualEffectQuality //  // @ game+0xf579fd4
	void ApplyNonResolutionSettings(); // Function Engine.GameUserSettings.ApplyNonResolutionSettings //  // @ game+0xffa970
	void SetFoliageQuality(); // Function Engine.GameUserSettings.SetFoliageQuality //  // @ game+0xf576720
	void SetScreenResolution(); // Function Engine.GameUserSettings.SetScreenResolution //  // @ game+0xf5799e8
	void GetDesktopResolution(); // Function Engine.GameUserSettings.GetDesktopResolution //  // @ game+0xf562680
	void SetAntiAliasingQuality(); // Function Engine.GameUserSettings.SetAntiAliasingQuality //  // @ game+0xf575c34
	void IsDynamicResolutionDirty(); // Function Engine.GameUserSettings.IsDynamicResolutionDirty //  // @ game+0xf56789c
	void SetDynamicResolutionEnabled(); // Function Engine.GameUserSettings.SetDynamicResolutionEnabled //  // @ game+0xf5766ac
	void GetAudioQualityLevel(); // Function Engine.GameUserSettings.GetAudioQualityLevel //  // @ game+0xf561dbc
	void GetRecommendedResolutionScale(); // Function Engine.GameUserSettings.GetRecommendedResolutionScale //  // @ game+0xf565bd8
	void GetTextureQuality(); // Function Engine.GameUserSettings.GetTextureQuality //  // @ game+0xf5668a0
	void SetFrameRateLimit(); // Function Engine.GameUserSettings.SetFrameRateLimit //  // @ game+0xf5767a4
	void IsVSyncEnabled(); // Function Engine.GameUserSettings.IsVSyncEnabled //  // @ game+0xf567f30
	void SetBenchmarkFallbackValues(); // Function Engine.GameUserSettings.SetBenchmarkFallbackValues //  // @ game+0xf575d20
	void GetVisualEffectQuality(); // Function Engine.GameUserSettings.GetVisualEffectQuality //  // @ game+0xf56745c
	void GetLastConfirmedFullscreenMode(); // Function Engine.GameUserSettings.GetLastConfirmedFullscreenMode //  // @ game+0xf5632d8
	void SetViewDistanceQuality(); // Function Engine.GameUserSettings.SetViewDistanceQuality //  // @ game+0xf579f60
	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings //  // @ game+0x135b6ac
	void SetTextureQuality(); // Function Engine.GameUserSettings.SetTextureQuality //  // @ game+0xf579db8
	void GetOverallScalabilityLevel(); // Function Engine.GameUserSettings.GetOverallScalabilityLevel //  // @ game+0xf564110
	void IsFullscreenModeDirty(); // Function Engine.GameUserSettings.IsFullscreenModeDirty //  // @ game+0xf5678d4
	void GetFullscreenMode(); // Function Engine.GameUserSettings.GetFullscreenMode //  // @ game+0xf562bd8
	void GetDefaultWindowMode(); // Function Engine.GameUserSettings.GetDefaultWindowMode //  // @ game+0x1133f40
	void ResetToCurrentSettings(); // Function Engine.GameUserSettings.ResetToCurrentSettings //  // @ game+0xf567548
	void GetResolutionScaleInformationEx(); // Function Engine.GameUserSettings.GetResolutionScaleInformationEx //  // @ game+0xf565f38
	void IsDirty(); // Function Engine.GameUserSettings.IsDirty //  // @ game+0xf5591fc
	void LoadSettings(); // Function Engine.GameUserSettings.LoadSettings //  // @ game+0xf55eaf4
	void IsVSyncDirty(); // Function Engine.GameUserSettings.IsVSyncDirty //  // @ game+0xf567f0c
	void ApplyHardwareBenchmarkResults(); // Function Engine.GameUserSettings.ApplyHardwareBenchmarkResults //  // @ game+0x1111c7c
	void GetPostProcessingQuality(); // Function Engine.GameUserSettings.GetPostProcessingQuality //  // @ game+0xf564584
	void GetLastConfirmedScreenResolution(); // Function Engine.GameUserSettings.GetLastConfirmedScreenResolution //  // @ game+0xf5632fc
	void RunHardwareBenchmark(); // Function Engine.GameUserSettings.RunHardwareBenchmark //  // @ game+0xf5751ec
	void GetCurrentHDRDisplayNits(); // Function Engine.GameUserSettings.GetCurrentHDRDisplayNits //  // @ game+0xf56236c
	void GetDefaultWindowPosition(); // Function Engine.GameUserSettings.GetDefaultWindowPosition //  // @ game+0xf562668
	void SupportsHDRDisplayOutput(); // Function Engine.GameUserSettings.SupportsHDRDisplayOutput //  // @ game+0xf57c344
	void ApplySettings(); // Function Engine.GameUserSettings.ApplySettings //  // @ game+0xdad4edc
	void IsHDREnabled(); // Function Engine.GameUserSettings.IsHDREnabled //  // @ game+0xf5678f8
	void GetDefaultResolution(); // Function Engine.GameUserSettings.GetDefaultResolution //  // @ game+0xf56261c
	void GetFrameRateLimit(); // Function Engine.GameUserSettings.GetFrameRateLimit //  // @ game+0xf562bc0
	void ConfirmVideoMode(); // Function Engine.GameUserSettings.ConfirmVideoMode //  // @ game+0xf55a074
	void SetOverallScalabilityLevel(); // Function Engine.GameUserSettings.SetOverallScalabilityLevel //  // @ game+0xf577c0c
	void ApplySecondaryScreenPercentage(); // Function Engine.GameUserSettings.ApplySecondaryScreenPercentage //  // @ game+0xf5520f4
	void EnableHDRDisplayOutput(); // Function Engine.GameUserSettings.EnableHDRDisplayOutput //  // @ game+0xf55ee10
	void GetPreferredFullscreenMode(); // Function Engine.GameUserSettings.GetPreferredFullscreenMode //  // @ game+0xf564598
	void GetFoliageQuality(); // Function Engine.GameUserSettings.GetFoliageQuality //  // @ game+0xf562bac
	void SetVSyncEnabled(); // Function Engine.GameUserSettings.SetVSyncEnabled //  // @ game+0xf579e2c
	void SetToDefaults(); // Function Engine.GameUserSettings.SetToDefaults //  // @ game+0xb77768
	void GetResolutionScaleInformation(); // Function Engine.GameUserSettings.GetResolutionScaleInformation //  // @ game+0xf565dbc
	void GetShadowQuality(); // Function Engine.GameUserSettings.GetShadowQuality //  // @ game+0xf5660d8
	void ApplyResolutionSettings(); // Function Engine.GameUserSettings.ApplyResolutionSettings //  // @ game+0xf552078
	void SetShadowQuality(); // Function Engine.GameUserSettings.SetShadowQuality //  // @ game+0xf579a60
	void IsConsole4K(); // Function Engine.GameUserSettings.IsConsole4K //  // @ game+0xda9a408
	void GetAntiAliasingQuality(); // Function Engine.GameUserSettings.GetAntiAliasingQuality //  // @ game+0xf561da8
};

// Class Engine.TriggerBase
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ATriggerBase : AActor {
	struct U*c606aaa7e3* CollisionComponent; // 0x400(0x08)
};

// Class Engine.TriggerBox
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct ATriggerBox : ATriggerBase {
};

// Class Engine.CapsuleComponent
// Size: 0xa00 (Inherited: 0x9f0)  [layout: LECH - offset chi la uoc luong]
struct UCapsuleComponent : U*c606aaa7e3 {
	float CapsuleHalfHeight; // 0x9f0(0x04)
	float CapsuleRadius; // 0x9f4(0x04)
	float CapsuleHeight; // 0x9f8(0x04)
	char pad_9FC[0x4]; // 0x9fc(0x04)

	void *b33e0e4215(); // Function Engine.CapsuleComponent.*b33e0e4215 //  // @ game+0xf474da4
	void *7edc3f5841(); // Function Engine.CapsuleComponent.*7edc3f5841 //  // @ game+0xf3e78bc
	void *bdc77fb8b9(); // Function Engine.CapsuleComponent.*bdc77fb8b9 //  // @ game+0xf470ba4
	void *293de5028d(); // Function Engine.CapsuleComponent.*293de5028d //  // @ game+0xf474de0
	void *31bcf0d5d9(); // Function Engine.CapsuleComponent.*31bcf0d5d9 //  // @ game+0xf470d34
	void *f18f82092a(); // Function Engine.CapsuleComponent.*f18f82092a //  // @ game+0xf470f20
	void *12cac04899(); // Function Engine.CapsuleComponent.*12cac04899 //  // @ game+0xf474dc8
	void *ff7acfb2a6(); // Function Engine.CapsuleComponent.*ff7acfb2a6 //  // @ game+0xf474d8c
	void *fca427cb65(); // Function Engine.CapsuleComponent.*fca427cb65 //  // @ game+0xf474eb4
	void *a2383c76b6(); // Function Engine.CapsuleComponent.*a2383c76b6 //  // @ game+0xf3e77bc
	void *f07be99fac(); // Function Engine.CapsuleComponent.*f07be99fac //  // @ game+0xf4d3160
	void *a37a3ba458(); // Function Engine.CapsuleComponent.*a37a3ba458 //  // @ game+0xf3e783c
	void *ab30158e4b(); // Function Engine.CapsuleComponent.*ab30158e4b //  // @ game+0xf470c30
	void *f3d835f776(); // Function Engine.CapsuleComponent.*f3d835f776 //  // @ game+0xf4d1e18
	void *938330c422(); // Function Engine.CapsuleComponent.*938330c422 //  // @ game+0xf4d3b34
	void *4dac8a9fd6(); // Function Engine.CapsuleComponent.*4dac8a9fd6 //  // @ game+0xf470bf0
	void *ef43159b44(); // Function Engine.CapsuleComponent.*ef43159b44 //  // @ game+0xf470b64
};

// Class Engine.DebugCameraController
// Size: 0x820 (Inherited: 0x7d0)  [layout: LECH - offset chi la uoc luong]
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7d0(0x01)
	char *2144c1ffc3 : 1; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct U*66475761fb* *afc42febd0; // 0x7d8(0x08)
	char pad_7E0[0x20]; // 0x7e0(0x20)
	float SpeedScale; // 0x800(0x04)
	float InitialMaxSpeed; // 0x804(0x04)
	float InitialAccel; // 0x808(0x04)
	float InitialDecel; // 0x80c(0x04)
	char pad_810[0x10]; // 0x810(0x10)

	void *64137c4243(); // Function Engine.DebugCameraController.*64137c4243 //  // @ game+0xf3faeec
	void *8c4fcd94bc(); // Function Engine.DebugCameraController.*8c4fcd94bc //  // @ game+0xf3f3ca8
	void ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate //  // @ game+0x43bab4
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo //  // @ game+0xf3f96ac
	void *3b13ddf911(); // Function Engine.DebugCameraController.*3b13ddf911 //  // @ game+0xf3cb81c
	void ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate //  // @ game+0x43bab4
	void ReceiveOnActorSelected(); // Function Engine.DebugCameraController.ReceiveOnActorSelected //  // @ game+0x43bab4
};

// Class Engine.PostProcessVolume
// Size: 0x9d0 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct APostProcessVolume : AVolume {
	char pad_438[0x8]; // 0x438(0x08)
	struct FPostProcessSettings Settings; // 0x440(0x580)
	float Priority; // 0x9c0(0x04)
	float BlendRadius; // 0x9c4(0x04)
	float BlendWeight; // 0x9c8(0x04)
	char bEnabled : 1; // 0x9cc(0x01)
	char bUnbound : 1; // 0x9cc(0x01)
	char pad_9CD[0x3]; // 0x9cd(0x03)

	void *f752129f6c(); // Function Engine.PostProcessVolume.*f752129f6c //  // @ game+0xf39cf70
	void *a62ba0050a(); // Function Engine.PostProcessVolume.*a62ba0050a //  // @ game+0xf3fba64
};

// Class Engine.Channel
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x30(0x08)
	char pad_38[0x38]; // 0x38(0x38)
};

// Class Engine.ActorChannel
// Size: 0x3c0 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x70(0x08)
	char pad_78[0x308]; // 0x78(0x308)
	struct TArray<struct UObject*> *825b7002bc; // 0x380(0x10)
	struct TArray<struct UObject*> *ea39901644; // 0x390(0x10)
	char pad_3A0[0x20]; // 0x3a0(0x20)
};

// Class Engine.DemoActorChannel
// Size: 0x3d0 (Inherited: 0x3c0)  [layout: LECH - offset chi la uoc luong]
struct UDemoActorChannel : UActorChannel {
	char pad_3C0[0x10]; // 0x3c0(0x10)
};

// Class Engine.PlayerState
// Size: 0x490 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APlayerState : AInfo {
	struct UClass* *6208f0a761; // 0x400(0x08)
	int32 PlayerId; // 0x408(0x04)
	char pad_40C[0x10]; // 0x40c(0x10)
	bool Ping; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct FString PlayerName; // 0x420(0x10) rep=OnRep_PlayerName
	float Score; // 0x430(0x04) rep=OnRep_Score
	int32 StartTime; // 0x434(0x04)
	struct FUniqueNetIdRepl UniqueId; // 0x438(0x18) rep=OnRep_UniqueId
	struct FString *75c3c52e4f; // 0x450(0x10)
	char pad_460[0x10]; // 0x460(0x10)
	char bIsSpectator : 1; // 0x470(0x01)
	char *922f072ea1 : 1; // 0x470(0x01)
	char bIsABot : 1; // 0x470(0x01)
	char pad_470_3 : 1; // 0x470(0x01)
	char *ca23fc575c : 1; // 0x470(0x01) rep=OnRep_bIsInactive
	char *c9f95a32c1 : 1; // 0x470(0x01)
	char pad_471[0x1b]; // 0x471(0x1b)
	bool *0a4625381d; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)

	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName //  // @ game+0x100d054
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId //  // @ game+0x2f318c
	void ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith //  // @ game+0x43bab4
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive //  // @ game+0xdb39b60
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score //  // @ game+0xdac1ed4
	void ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties //  // @ game+0x43bab4
};

// Class Engine.NavigationObjectBase
// Size: 0x428 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ANavigationObjectBase : AActor {
	char pad_400[0x8]; // 0x400(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x408(0x08)
	struct UBillboardComponent* *6e654a2228; // 0x410(0x08)
	struct UBillboardComponent* *33780b39df; // 0x418(0x08)
	char *e86285ba86 : 1; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
};

// Class Engine.PlayerStart
// Size: 0x430 (Inherited: 0x428)  [layout: KHOP]
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x428(0x08)
};

// Class Engine.CheatManager
// Size: 0x80 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCheatManager : UObject {
	struct ADebugCameraController* *e4657cd19d; // 0x30(0x08)
	struct UClass* DebugCameraControllerClass; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation //  // @ game+0xf5732c8
	void Teleport(); // Function Engine.CheatManager.Teleport //  // @ game+0xdb87190
	void OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel //  // @ game+0xf3a01f0
	void StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn //  // @ game+0xf3a00f0
	void ViewClass(); // Function Engine.CheatManager.ViewClass //  // @ game+0xf3ac2cc
	void BugItGo(); // Function Engine.CheatManager.BugItGo //  // @ game+0xf5550f8
	void DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel //  // @ game+0xf55dff8
	void DebugCapsuleSweepSize(); // Function Engine.CheatManager.DebugCapsuleSweepSize //  // @ game+0xf55e110
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging //  // @ game+0xdb26844
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault //  // @ game+0xf577284
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse //  // @ game+0xf567828
	void Slomo(); // Function Engine.CheatManager.Slomo //  // @ game+0xf57acc8
	void Fly(); // Function Engine.CheatManager.Fly //  // @ game+0xed27fe4
	void God(); // Function Engine.CheatManager.God //  // @ game+0xe48ce20
	void DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex //  // @ game+0xf55e090
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState //  // @ game+0xf55eca8
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture //  // @ game+0xf3fae68
	void *60e9d7b513(); // Function Engine.CheatManager.*60e9d7b513 //  // @ game+0xf575be8
	void DamageTarget(); // Function Engine.CheatManager.DamageTarget //  // @ game+0xf55d680
	void DestroyPawns(); // Function Engine.CheatManager.DestroyPawns //  // @ game+0xdba0a80
	void ViewActor(); // Function Engine.CheatManager.ViewActor //  // @ game+0xf57e260
	void LogLoc(); // Function Engine.CheatManager.LogLoc //  // @ game+0xf5707ac
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance //  // @ game+0xf57c36c
	void ChangeSize(); // Function Engine.CheatManager.ChangeSize //  // @ game+0xf559224
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear //  // @ game+0xf55e078
	void Summon(); // Function Engine.CheatManager.Summon //  // @ game+0xf57c1cc
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf //  // @ game+0xdb29370
	void CheatScript(); // Function Engine.CheatManager.CheatScript //  // @ game+0xf559b9c
	void ViewPlayer(); // Function Engine.CheatManager.ViewPlayer //  // @ game+0xf57e2e0
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState //  // @ game+0xf55ec78
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState //  // @ game+0xf55ec90
	void FreezeFrame(); // Function Engine.CheatManager.FreezeFrame //  // @ game+0xf56135c
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState //  // @ game+0xf55ec60
	void DestroyAll(); // Function Engine.CheatManager.DestroyAll //  // @ game+0xdba0a00
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera //  // @ game+0xdb26814
	void SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance //  // @ game+0xf577298
	void FlushLog(); // Function Engine.CheatManager.FlushLog //  // @ game+0xf561198
	void BugIt(); // Function Engine.CheatManager.BugIt //  // @ game+0xf554f80
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget //  // @ game+0xdb2674c
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly //  // @ game+0xf573120
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin //  // @ game+0xf57a048
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager //  // @ game+0x43bab4
	void StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut //  // @ game+0xf3db130
	void BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator //  // @ game+0xf555be8
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep //  // @ game+0x61a18c
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn //  // @ game+0x1261074
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay //  // @ game+0x43bab4
	void Walk(); // Function Engine.CheatManager.Walk //  // @ game+0xf3faed4
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget //  // @ game+0x9b4fa0
	void *f81080a237(); // Function Engine.CheatManager.*f81080a237 //  // @ game+0xf55ed2c
	void *da6b67fb30(); // Function Engine.CheatManager.*da6b67fb30 //  // @ game+0xf55eadc
	void Ghost(); // Function Engine.CheatManager.Ghost //  // @ game+0xf567548
};

// Class Engine.*d5fad73e42
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*d5fad73e42 : UPrimitiveComponent {
	char pad_9D0[0x8]; // 0x9d0(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x9d8(0x10)
	char pad_9E8[0x8]; // 0x9e8(0x08)
};

// Class Engine.SphereComponent
// Size: 0xa00 (Inherited: 0x9f0)  [layout: LECH - offset chi la uoc luong]
struct USphereComponent : U*c606aaa7e3 {
	float SphereRadius; // 0x9f0(0x04)
	char pad_9F4[0xc]; // 0x9f4(0x0c)

	void *81dea55a10(); // Function Engine.SphereComponent.*81dea55a10 //  // @ game+0xf470b64
	void *7018b266d1(); // Function Engine.SphereComponent.*7018b266d1 //  // @ game+0xf512480
	void *f18f82092a(); // Function Engine.SphereComponent.*f18f82092a //  // @ game+0xf470f20
	void *b86b3520d9(); // Function Engine.SphereComponent.*b86b3520d9 //  // @ game+0xf474d8c
};

// Class Engine.*48db839311
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*48db839311 : UObject {
	char *8311538d02 : 1; // 0x30(0x01)
	char bExclusive : 1; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	bool Priority; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x38(0x08)
	float AlphaInTime; // 0x40(0x04)
	float AlphaOutTime; // 0x44(0x04)
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void BlueprintModifyPostProcess(); // Function Engine.*48db839311.BlueprintModifyPostProcess //  // @ game+0x43bab4
	void *7799201d6b(); // Function Engine.*48db839311.*7799201d6b //  // @ game+0xec0e7d4
	void *eaa8ba475b(); // Function Engine.*48db839311.*eaa8ba475b //  // @ game+0xf55eaf4
	void *05a88c68d2(); // Function Engine.*48db839311.*05a88c68d2 //  // @ game+0xf5591fc
	void BlueprintModifyCamera(); // Function Engine.*48db839311.BlueprintModifyCamera //  // @ game+0x43bab4
	void *4de5943b06(); // Function Engine.*48db839311.*4de5943b06 //  // @ game+0xf3faed4
};

// Class Engine.StaticMeshActor
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	bool bStaticMeshReplicateMovement; // 0x408(0x01)
	enum class ENavDataGatheringMode *c159113c44; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
};

// Class Engine.NavArea
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNavArea : UObject {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Engine.LevelScriptActor
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALevelScriptActor : AActor {
	char *492dc39aca : 1; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void *a50e89ce49(); // Function Engine.LevelScriptActor.*a50e89ce49 //  // @ game+0x10945b0
	void *9222e7187b(); // Function Engine.LevelScriptActor.*9222e7187b //  // @ game+0xdb743d8
	void WorldOriginLocationChanged(); // Function Engine.LevelScriptActor.WorldOriginLocationChanged //  // @ game+0x43bab4
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset //  // @ game+0x43bab4
};

// Class Engine.ChildActorComponent
// Size: 0x4b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x478(0x08)
	struct AActor* ChildActor; // 0x480(0x08)
	struct AActor* ChildActorTemplate; // 0x488(0x08)
	char pad_490[0x20]; // 0x490(0x20)

	void *7738811183(); // Function Engine.ChildActorComponent.*7738811183 //  // @ game+0xf3e74ac
};

// Class Engine.CameraComponent
// Size: 0xa80 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x478(0x04)
	float OrthoWidth; // 0x47c(0x04)
	float OrthoNearClipPlane; // 0x480(0x04)
	float OrthoFarClipPlane; // 0x484(0x04)
	float AspectRatio; // 0x488(0x04)
	char bConstrainAspectRatio : 1; // 0x48c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x48c(0x01)
	char bLockToHmd : 1; // 0x48c(0x01)
	char bUsePawnControlRotation : 1; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float PostProcessBlendWeight; // 0x494(0x04)
	char pad_498[0x8]; // 0x498(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x4a0(0x580)
	char pad_A20[0x58]; // 0xa20(0x58)
	char bUseControllerViewRotation : 1; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)

	void *f752129f6c(); // Function Engine.CameraComponent.*f752129f6c //  // @ game+0xf4069c4
	void *23c3ce62b2(); // Function Engine.CameraComponent.*23c3ce62b2 //  // @ game+0xf460dfc
	void SetOrthoNearClipPlane(); // Function Engine.CameraComponent.SetOrthoNearClipPlane //  // @ game+0xf50333c
	void SetAspectRatio(); // Function Engine.CameraComponent.SetAspectRatio //  // @ game+0xf4cc020
	void SetOrthoFarClipPlane(); // Function Engine.CameraComponent.SetOrthoFarClipPlane //  // @ game+0xf4f4fc0
	void SetProjectionMode(); // Function Engine.CameraComponent.SetProjectionMode //  // @ game+0xf50c6bc
	void SetPostProcessBlendWeight(); // Function Engine.CameraComponent.SetPostProcessBlendWeight //  // @ game+0xf50a8d0
	void *8b81956b3e(); // Function Engine.CameraComponent.*8b81956b3e //  // @ game+0xf4d8598
	void SetUseFieldOfViewForLOD(); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD //  // @ game+0xf51a144
	void SetFieldOfView(); // Function Engine.CameraComponent.SetFieldOfView //  // @ game+0xf4e4f88
	void SetOrthoWidth(); // Function Engine.CameraComponent.SetOrthoWidth //  // @ game+0xdbb4848
};

// Class Engine.Engine
// Size: 0xf60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEngine : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UFont* TinyFont; // 0x38(0x08)
	struct FStringAssetReference TinyFontName; // 0x40(0x10)
	struct UFont* SmallFont; // 0x50(0x08)
	struct FStringAssetReference SmallFontName; // 0x58(0x10)
	struct UFont* *85baa76fc4; // 0x68(0x08)
	struct FStringAssetReference MediumFontName; // 0x70(0x10)
	struct UFont* LargeFont; // 0x80(0x08)
	struct FStringAssetReference LargeFontName; // 0x88(0x10)
	struct UFont* *6a450dd43f; // 0x98(0x08)
	struct FStringAssetReference SubtitleFontName; // 0xa0(0x10)
	struct TArray<struct UFont*> *5b5ff7f0b0; // 0xb0(0x10)
	struct UTexture2D* *f7869b9767; // 0xc0(0x08)
	struct FStringClassReference LocalPlayerClassName; // 0xc8(0x10)
	int32 *6b97868d90; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UTexture2D* *fa4015325a; // 0xe0(0x08)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0xe8(0x08)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0xf0(0x10)
	struct UTexture2D* DefaultTexture; // 0x100(0x08)
	struct FLinearColor *a00620a8bd; // 0x108(0x10)
	struct UTexture2D* *9a51dee398; // 0x118(0x08)
	struct TArray<struct FPBRValidationReference> PBRValidation_References_NonMetallic; // 0x120(0x10)
	struct TArray<struct FPBRValidationReference> PBRValidation_References_Metallic; // 0x130(0x10)
	int32 *b6d53ebad6; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString LevelColorationUnlitMaterialName; // 0x148(0x10)
	struct FColor *77062c33cd; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct UMaterialInstanceDynamic* *aa8f4bb4f7; // 0x160(0x08)
	struct UClass* *7eecb66e51; // 0x168(0x08)
	struct TArray<struct F*186da0c458> *0630827d1e; // 0x170(0x10)
	struct FColor *646de31381; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FStringClassReference AIControllerClassName; // 0x188(0x10)
	struct FLinearColor LightingOnlyBrightness; // 0x198(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x1a8(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x1b8(0x10)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x1c8(0x10)
	struct FString ShadedLevelColorationLitMaterialName; // 0x1d8(0x10)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x1e8(0x10)
	char bPauseOnLossOfFocus : 1; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32 MaxParticleResize; // 0x1fc(0x04)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x200(0x08)
	struct UClass* *5b2522725f; // 0x208(0x08)
	struct UGameUserSettings* GameUserSettings; // 0x210(0x08)
	struct FString LevelColorationLitMaterialName; // 0x218(0x10)
	struct UClass* *7d703ba7e4; // 0x228(0x08)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x230(0x08)
	struct UTextureCube* *47910f7840; // 0x238(0x08)
	struct FColor *9d8757c10c; // 0x240(0x04)
	float MinDesiredFrameRate; // 0x244(0x04)
	float PrimitiveProbablyVisibleTime; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects; // 0x250(0x10)
	struct UClass* *bd263252ac; // 0x260(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0x268(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0x278(0x10)
	struct UTexture2D* *e6a167dc09; // 0x288(0x08)
	struct FStringAssetReference DefaultBokehTextureName; // 0x290(0x10)
	struct FStringAssetReference LightMapDensityTextureName; // 0x2a0(0x10)
	char bHardwareSurveyEnabled : 1; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	int32 MaxParticleResizeWarn; // 0x2b4(0x04)
	struct UClass* *8299e2e263; // 0x2b8(0x08)
	struct FFloatRange SmoothedFrameRateRange; // 0x2c0(0x10)
	float FixedFrameRate; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x2d8(0x10)
	struct UClass* *bdb2bf86f8; // 0x2e8(0x08)
	struct UMaterial* *b6485154bb; // 0x2f0(0x08)
	struct UTexture2D* *d1656947a1; // 0x2f8(0x08)
	struct UMaterial* *7bf25b94c5; // 0x300(0x08)
	struct UMaterialInstanceDynamic* *d7134c227c; // 0x308(0x08)
	struct UMaterial* *c88eec3ba2; // 0x310(0x08)
	struct FLinearColor LightMapDensitySelectedColor; // 0x318(0x10)
	struct UMaterial* *177bf22ad4; // 0x328(0x08)
	float RenderLightMapDensityGrayscaleScale; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0x338(0x10)
	char bCanBlueprintsTickByDefault : 1; // 0x348(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x348(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x348(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x348(0x01)
	char pad_348_4 : 1; // 0x348(0x01)
	char bSmoothFrameRate : 1; // 0x348(0x01)
	char bUseFixedFrameRate : 1; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UMaterial* WireframeMaterial; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0x360(0x10)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x370(0x10)
	struct FColor *036608ab47; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct TArray<struct FClassRedirect> ActiveClassRedirects; // 0x388(0x10)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x398(0x10)
	struct FLinearColor *99f15b1677; // 0x3a8(0x10)
	struct UMaterial* *9c344c3ee3; // 0x3b8(0x08)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x3c0(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x3d0(0x10)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x3e0(0x10)
	char bSubtitlesForcedOff : 1; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UMaterialInstanceDynamic* *142a087039; // 0x3f8(0x08)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x400(0x10)
	char pad_410[0x8]; // 0x410(0x08)
	struct FColor *ce420e48a6; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct FString> *766ec7c8b4; // 0x420(0x10)
	char pad_430[0x18]; // 0x430(0x18)
	float MeshLODRange; // 0x448(0x04)
	float DisplayGamma; // 0x44c(0x04)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0x450(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UClass* *662cf399bb; // 0x468(0x08)
	struct UMaterial* DebugMeshMaterial; // 0x470(0x08)
	struct UMaterialInstanceDynamic* *86f72b1c4e; // 0x478(0x08)
	float RenderLightMapDensityColorScale; // 0x480(0x04)
	struct FColor *c29d043083; // 0x484(0x04)
	struct UClass* *8471466f0c; // 0x488(0x08)
	struct UGameViewportClient* GameViewport; // 0x490(0x08)
	struct FLinearColor *e38c658966; // 0x498(0x10)
	struct FStringClassReference LevelScriptActorClassName; // 0x4a8(0x10)
	struct FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x4b8(0x1c)
	struct FLinearColor *5b030ebfb8; // 0x4d4(0x10)
	struct FColor *6cb5ce267b; // 0x4e4(0x04)
	float NetClientTicksPerSecond; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x4f0(0x10)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x500(0x10)
	char bAllowMatureLanguage : 1; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float CameraRotationThreshold; // 0x514(0x04)
	struct UTexture* DefaultDiffuseTexture; // 0x518(0x08)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x520(0x10)
	struct FString *87ef237c2c; // 0x530(0x10)
	char bSubtitlesEnabled : 1; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	struct FColor *650c028939; // 0x544(0x04)
	struct UClass* *0e45c4b0ab; // 0x548(0x08)
	float *f76fd7a13d; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UMaterial* *24d95d45ec; // 0x558(0x08)
	struct UTexture2D* *ada717c1c8; // 0x560(0x08)
	float MaxOcclusionPixelsFraction; // 0x568(0x04)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct FStringClassReference AvoidanceManagerClassName; // 0x570(0x10)
	struct FStringClassReference GameSingletonClassName; // 0x580(0x10)
	enum class ETransitionType *d924e49e62; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float IdealLightMapDensity; // 0x594(0x04)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x598(0x10)
	struct TArray<struct FStatColorMapping> StatColorMappings; // 0x5a8(0x10)
	struct UAssetManager* AssetManager; // 0x5b8(0x08)
	bool *bb5766194b; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FStringAssetReference MiniFontTextureName; // 0x5c8(0x10)
	struct UMaterial* *4a8f480e80; // 0x5d8(0x08)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x5e0(0x10)
	struct FStringClassReference NavigationSystemClassName; // 0x5f0(0x10)
	struct UMaterial* VertexColorMaterial; // 0x600(0x08)
	struct FColor *a9969e0e8e; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x610(0x10)
	struct FStringClassReference WorldSettingsClassName; // 0x620(0x10)
	struct UMaterial* *8fb2743d52; // 0x630(0x08)
	struct FStringClassReference GameUserSettingsClassName; // 0x638(0x10)
	char pad_648[0x50]; // 0x648(0x50)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x698(0x10)
	struct FStringAssetReference ArrowMaterialName; // 0x6a8(0x10)
	struct FString *24dd74739b; // 0x6b8(0x10)
	struct UMaterial* *e7d908c706; // 0x6c8(0x08)
	struct FString LightingTexelDensityName; // 0x6d0(0x10)
	struct FStringClassReference AssetManagerClassName; // 0x6e0(0x10)
	int32 MaximumLoopIterationCount; // 0x6f0(0x04)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct FStringAssetReference DebugMeshMaterialName; // 0x6f8(0x10)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0x708(0x10)
	struct FStringClassReference ConsoleClassName; // 0x718(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x728(0x10)
	struct FStringAssetReference VertexColorMaterialName; // 0x738(0x10)
	struct FString WireframeMaterialName; // 0x748(0x10)
	char bEnableOnScreenDebugMessages : 1; // 0x758(0x01)
	char *39130a68b9 : 1; // 0x758(0x01)
	char bSuppressMapWarnings : 1; // 0x758(0x01)
	char bDisableAILogging : 1; // 0x758(0x01)
	char pad_759[0x3]; // 0x759(0x03)
	uint32 bEnableVisualLogRecordingOnStart; // 0x75c(0x04)
	struct FBox *b9a2501733; // 0x760(0x1c)
	char pad_77C[0x4]; // 0x77c(0x04)
	int32 *bb09b8b622; // 0x780(0x04)
	char *a9d0bbda2f : 1; // 0x784(0x01)
	char pad_785[0x3]; // 0x785(0x03)
	struct FString ParticleEventManagerClassPath; // 0x788(0x10)
	char pad_798[0x28]; // 0x798(0x28)
	float SelectionHighlightIntensity; // 0x7c0(0x04)
	float *d52c01b53e; // 0x7c4(0x04)
	float BSPSelectionHighlightIntensity; // 0x7c8(0x04)
	float HoverHighlightIntensity; // 0x7cc(0x04)
	float *79a1952ca4; // 0x7d0(0x04)
	float PrimitiveBaseIntensity; // 0x7d4(0x04)
	float PrimitiveSelectedIntensity; // 0x7d8(0x04)
	float PrimitiveHoverIntensity; // 0x7dc(0x04)
	char pad_7E0[0x290]; // 0x7e0(0x290)
	struct TArray<struct FPluginRedirect> ActivePluginRedirects; // 0xa70(0x10)
	struct UTexture* WeightMapPlaceholderTexture; // 0xa80(0x08)
	struct UMaterialInstanceDynamic* *3b5d398970; // 0xa88(0x08)
	struct FLinearColor DefaultSelectedMaterialColor; // 0xa90(0x10)
	struct FColor *be19d3088d; // 0xaa0(0x04)
	float CameraTranslationThreshold; // 0xaa4(0x04)
	struct UMaterial* *6e6fb9e3b2; // 0xaa8(0x08)
	float NearClipPlane; // 0xab0(0x04)
	float MaxLightMapDensity; // 0xab4(0x04)
	struct FColor *7e217ea392; // 0xab8(0x04)
	char pad_ABC[0x4]; // 0xabc(0x04)
	struct UMaterial* LevelColorationLitMaterial; // 0xac0(0x08)
	struct UMaterialInstanceDynamic* *011437f23e; // 0xac8(0x08)
	char pad_AD0[0x1d0]; // 0xad0(0x1d0)
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions; // 0xca0(0x10)
	struct TArray<struct FString> ServerActors; // 0xcb0(0x10)
	struct TArray<struct FString> *4ae81e58e4; // 0xcc0(0x10)
	char *6fdeaafbab : 1; // 0xcd0(0x01)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0xcd0(0x01)
	char pad_CD1[0x3]; // 0xcd1(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0xcd4(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0xcd8(0x01)
	char pad_CD9[0x7]; // 0xcd9(0x07)
	struct UTexture2D* MiniFontTexture; // 0xce0(0x08)
	struct UMaterial* *68cedcaa96; // 0xce8(0x08)
	struct FColor *54fcecd074; // 0xcf0(0x04)
	struct FColor *f0280a6a51; // 0xcf4(0x04)
	struct UMaterial* RemoveSurfaceMaterial; // 0xcf8(0x08)
	struct FStringAssetReference DefaultTextureName; // 0xd00(0x10)
	int32 *e4333f29ea; // 0xd10(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0xd14(0x10)
	char pad_D24[0x4]; // 0xd24(0x04)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0xd28(0x10)
	char bRenderLightMapDensityGrayscale : 1; // 0xd38(0x01)
	char pad_D39[0x3]; // 0xd39(0x03)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0xd3c(0x04)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0xd40(0x10)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0xd50(0x10)
	struct FStringClassReference GameViewportClientClassName; // 0xd60(0x10)
	float MinLightMapDensity; // 0xd70(0x04)
	char pad_D74[0x4]; // 0xd74(0x04)
	struct UMaterialInstanceDynamic* *31c36736de; // 0xd78(0x08)
	struct UObject* *d0df479178; // 0xd80(0x08)
	struct TArray<struct FStructRedirect> ActiveStructRedirects; // 0xd88(0x10)
	char pad_D98[0x18]; // 0xd98(0x18)
	int32 *fd59ed15d4; // 0xdb0(0x04)
	char pad_DB4[0x1ac]; // 0xdb4(0x1ac)
};

// Class Engine.*e6634705a4
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*e6634705a4 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x680 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UGameViewportClient : U*e6634705a4 {
	char pad_40[0x130]; // 0x40(0x130)
	struct TArray<struct F*b09fe03967> *18f256e6e2; // 0x170(0x10)
	char pad_180[0x278]; // 0x180(0x278)
	struct UConsole* *14a04e0f2f; // 0x3f8(0x08)
	char pad_400[0xe0]; // 0x400(0xe0)
	struct UGameInstance* GameInstance; // 0x4e0(0x10)
	char pad_4F0[0x190]; // 0x4f0(0x190)

	void SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget //  // @ game+0xf4d830c
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers //  // @ game+0xf4bf660
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea //  // @ game+0xf524a48
};

// Class Engine.Console
// Size: 0x110 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UConsole : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct ULocalPlayer* *523ded3187; // 0x40(0x08)
	struct UTexture2D* *4802b938c9; // 0x48(0x08)
	struct UTexture2D* *cfc14f33f6; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)
};

// Class Engine.NetDriver
// Size: 0x4d0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNetDriver : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NetConnectionClassName; // 0x38(0x10)
	int32 MaxDownloadSize; // 0x48(0x04)
	char bClampListenServerTickRate : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 NetServerMaxTickRate; // 0x50(0x04)
	int32 MaxInternetClientRate; // 0x54(0x04)
	int32 MaxClientRate; // 0x58(0x04)
	float ServerTravelPause; // 0x5c(0x04)
	float SpawnPrioritySeconds; // 0x60(0x04)
	float RelevantTimeout; // 0x64(0x04)
	float KeepAliveTime; // 0x68(0x04)
	float InitialConnectTimeout; // 0x6c(0x04)
	float ConnectionTimeout; // 0x70(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x74(0x04)
	bool bNoTimeouts; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UNetConnection* *9432124332; // 0x80(0x08)
	struct TArray<struct UNetConnection*> *1cec9377c2; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
	struct UWorld* World; // 0xc0(0x10)
	struct UPackage* *31578ea077; // 0xd0(0x08)
	char pad_D8[0x20]; // 0xd8(0x20)
	struct UClass* *61227a0b11; // 0xf8(0x08)
	struct UProperty* *cb30d5d0de; // 0x100(0x08)
	struct UProperty* *8493030c38; // 0x108(0x08)
	struct FName NetDriverName; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
	float Time; // 0x120(0x04)
	char pad_124[0x3ac]; // 0x124(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc70 (Inherited: 0x4d0)  [layout: LECH - offset chi la uoc luong]
struct UDemoNetDriver : UNetDriver {
	char pad_4D0[0xf8]; // 0x4d0(0xf8)
	struct TMap<struct FString, struct F*5a81517fe4> *8a840f747f; // 0x5c8(0x50)
	char pad_618[0x438]; // 0x618(0x438)
	bool *bd11e8dbc0; // 0xa50(0x01)
	char pad_A51[0x21f]; // 0xa51(0x21f)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xcd0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*fb45fd4ea4> PerInstanceSMData; // 0xb78(0x10)
	int32 InstancingRandomSeed; // 0xb88(0x04)
	int32 InstanceStartCullDistance; // 0xb8c(0x04)
	int32 InstanceEndCullDistance; // 0xb90(0x04)
	char pad_B94[0x4]; // 0xb94(0x04)
	struct TArray<int32> *03be98bcd6; // 0xb98(0x10)
	struct TArray<int32> *4050140adf; // 0xba8(0x10)
	char pad_BB8[0x78]; // 0xbb8(0x78)
	struct UPhysicsSerializer* PhysicsSerializer; // 0xc30(0x08)
	bool *a6bfdf94fd; // 0xc38(0x01)
	char pad_C39[0x77]; // 0xc39(0x77)
	int32 *2948828b8e; // 0xcb0(0x04)
	char pad_CB4[0x4]; // 0xcb4(0x04)
	struct TArray<struct F*197f4914b3> *10fccf7878; // 0xcb8(0x10)
	char pad_CC8[0x8]; // 0xcc8(0x08)

	void *a2c32137aa(); // Function Engine.InstancedStaticMeshComponent.*a2c32137aa //  // @ game+0xdac6984
	void *04dac403e5(); // Function Engine.InstancedStaticMeshComponent.*04dac403e5 //  // @ game+0xf466b58
	void *676e289cfc(); // Function Engine.InstancedStaticMeshComponent.*676e289cfc //  // @ game+0xf466a24
	void *69fa4dd1da(); // Function Engine.InstancedStaticMeshComponent.*69fa4dd1da //  // @ game+0xf46647c
	void *ed446f1a04(); // Function Engine.InstancedStaticMeshComponent.*ed446f1a04 //  // @ game+0xf4f3a38
	void *08b8bec796(); // Function Engine.InstancedStaticMeshComponent.*08b8bec796 //  // @ game+0xf465ecc
	void *29a169ba41(); // Function Engine.InstancedStaticMeshComponent.*29a169ba41 //  // @ game+0xf4bb940
	void *fb011cdf90(); // Function Engine.InstancedStaticMeshComponent.*fb011cdf90 //  // @ game+0xf547a3c
	void *896d2fe7dd(); // Function Engine.InstancedStaticMeshComponent.*896d2fe7dd //  // @ game+0xf4d9740
	void *52570258f6(); // Function Engine.InstancedStaticMeshComponent.*52570258f6 //  // @ game+0xf406460
	void *d3b6f8a55c(); // Function Engine.InstancedStaticMeshComponent.*d3b6f8a55c //  // @ game+0xf40681c
	void *d364fcbc7f(); // Function Engine.InstancedStaticMeshComponent.*d364fcbc7f //  // @ game+0xf466088
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xe00 (Inherited: 0xcd0)  [layout: LECH - offset chi la uoc luong]
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_CD0[0x68]; // 0xcd0(0x68)
	struct TArray<int32> *7757e685e1; // 0xd38(0x10)
	int32 *95eb17eae8; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct FBox *13e952e2f8; // 0xd50(0x1c)
	struct FBox *3988772726; // 0xd6c(0x1c)
	struct TArray<struct FBox> *8cd61ec6a0; // 0xd88(0x10)
	char pad_D98[0x20]; // 0xd98(0x20)
	int32 *8d953c12c1; // 0xdb8(0x04)
	struct FBoxSphereBounds *394d84070e; // 0xdbc(0x1c)
	char *513afb5065 : 1; // 0xdd8(0x01)
	char *e8fdc805e8 : 1; // 0xdd8(0x01)
	char pad_DD9[0x27]; // 0xdd9(0x27)

	void *340e65e342(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*340e65e342 //  // @ game+0xf4bb9cc
};

// Class Engine.GameEngine
// Size: 0xfc0 (Inherited: 0xf60)  [layout: LECH - offset chi la uoc luong]
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xf58(0x04)
	float ServerFlushLogInterval; // 0xf5c(0x04)
	struct UGameInstance* GameInstance; // 0xf60(0x08)
	char pad_F68[0x40]; // 0xf68(0x40)
	struct TArray<struct UWorld*> *4646008d47; // 0xfa8(0x10)
	char pad_FB8[0x8]; // 0xfb8(0x08)
};

// Class Engine.Player
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPlayer : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	int32 *4db848046a; // 0x40(0x04)
	int32 ConfiguredInternetSpeed; // 0x44(0x04)
	int32 ConfiguredLanSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.NetConnection
// Size: 0x658a8 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *ad7815e62b; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *4df126d324; // 0x78(0x10)
	struct TArray<struct AActor*> *62df96250f; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *75adf45508; // 0xa0(0x08)
	int32 *66b419dc48; // 0xa8(0x04)
	char *acf5d5e634 : 1; // 0xac(0x01)
	char pad_AC_1 : 1; // 0xac(0x01)
	char *3e8626b1bc : 1; // 0xac(0x01)
	char pad_AD[0x8b]; // 0xad(0x8b)
	struct TArray<struct UChannel*> *c7e610fa84; // 0x138(0x10)
	char pad_148[0x28]; // 0x148(0x28)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	char pad_188[0x68]; // 0x188(0x68)
	double *e89e6db3fc; // 0x1f0(0x08)
	char pad_1F8[0x65588]; // 0x1f8(0x65588)
	struct TArray<struct UChannel*> *3f64f1f4ca; // 0x65780(0x10)
	char pad_65790[0x118]; // 0x65790(0x118)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*6d872fac0e> ChannelDetails; // 0x30(0x10)
	float Duration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.GameSession
// Size: 0x418 (Inherited: 0x400)  [layout: KHOP]
struct AGameSession : AInfo {
	int32 MaxSpectators; // 0x400(0x04)
	int32 MaxPlayers; // 0x404(0x04)
	int32 *aa8d334dd1; // 0x408(0x04)
	bool MaxSplitscreensPerConnection; // 0x40c(0x01)
	bool bRequiresPushToTalk; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	struct FName SessionName; // 0x410(0x08)
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: KHOP]
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*7dfe377474> *8bc1951375; // 0x9d0(0x10)
};

// Class Engine.*d08c0480ec
// Size: 0xe00 (Inherited: 0xe00)  [layout: KHOP]
struct U*d08c0480ec : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid; // 0xdf8(0x04)
};

// Class Engine.NavLinkProxy
// Size: 0x450 (Inherited: 0x400)  [layout: KHOP]
struct ANavLinkProxy : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x410(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x420(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x430(0x08)
	bool *4625d87ab4; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x440(0x10)

	void *7bbd3d5bdf(); // Function Engine.NavLinkProxy.*7bbd3d5bdf //  // @ game+0xf3dbf64
	void *cb123466e1(); // Function Engine.NavLinkProxy.*cb123466e1 //  // @ game+0xf3f7624
	void *ae69280675(); // Function Engine.NavLinkProxy.*ae69280675 //  // @ game+0xf3ccd00
	void *f54428607a(); // Function Engine.NavLinkProxy.*f54428607a //  // @ game+0xf3ce700
	void ReceiveSmartLinkReached(); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached //  // @ game+0x43bab4
	void *7ca016b56a(); // Function Engine.NavLinkProxy.*7ca016b56a //  // @ game+0x1053c04
};

// Class Engine.LocalPlayer
// Size: 0x290 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct ULocalPlayer : UPlayer {
	char *8e8aadd82a : 1; // 0x50(0x01)
	char pad_51[0x5f]; // 0x51(0x5f)
	struct UClass* *234cc68b26; // 0xb0(0x08)
	char pad_B8[0x1d8]; // 0xb8(0x1d8)
};

// Class Engine.NavModifierVolume
// Size: 0x448 (Inherited: 0x438)  [layout: KHOP]
struct ANavModifierVolume : AVolume {
	char pad_438[0x8]; // 0x438(0x08)
	struct UClass* AreaClass; // 0x440(0x08)

	void *65da7cefbd(); // Function Engine.NavModifierVolume.*65da7cefbd //  // @ game+0xf3e3608
};

// Class Engine.NavMeshRenderingComponent
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_9D0[0x10]; // 0x9d0(0x10)
};

// Class Engine.*3af65f2d8c
// Size: 0x240 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*3af65f2d8c : UActorComponent {
	char pad_210[0x1c]; // 0x210(0x1c)
	char *a0dfedc061 : 1; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct UObject* *11ced93681; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)

	void *a713c031c3(); // Function Engine.*3af65f2d8c.*a713c031c3 //  // @ game+0xf5008f0
};

// Class Engine.NavModifierComponent
// Size: 0x260 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct UNavModifierComponent : U*3af65f2d8c {
	struct UClass* AreaClass; // 0x238(0x08)
	struct FVector *f79c3cfcb8; // 0x240(0x0c)
	char pad_24C[0x14]; // 0x24c(0x14)

	void *65da7cefbd(); // Function Engine.NavModifierComponent.*65da7cefbd //  // @ game+0xf4cbde0
};

// Class Engine.ParticleEventManager
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct AParticleEventManager : AActor {
};

// Class Engine.*cc88a207bb
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*cc88a207bb : UObject {
};

// Class Engine.PhysicsVolume
// Size: 0x450 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x438(0x04)
	int32 Priority; // 0x43c(0x04)
	float FluidFriction; // 0x440(0x04)
	char bWaterVolume : 1; // 0x444(0x01)
	char bPhysicsOnContact : 1; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	bool *91bb369748; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
};

// Class Engine.PlayerCameraManager
// Size: 0x1d40 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APlayerCameraManager : AActor {
	struct APlayerController* *38f3a03834; // 0x400(0x08)
	struct USceneComponent* TransformComponent; // 0x408(0x08)
	char pad_410[0xc]; // 0x410(0x0c)
	float ViewRollMin; // 0x41c(0x04)
	char pad_420[0x14]; // 0x420(0x14)
	float DefaultOrthoWidth; // 0x434(0x04)
	char pad_438[0x4]; // 0x438(0x04)
	float FreeCamDistance; // 0x43c(0x04)
	struct F*3663b8ac95 *0cb2c63b38; // 0x440(0x5e0)
	struct FVector FreeCamOffset; // 0xa20(0x0c)
	struct FVector ViewTargetOffset; // 0xa2c(0x0c)
	char pad_A38[0xc]; // 0xa38(0x0c)
	float DefaultFOV; // 0xa44(0x04)
	struct TArray<struct UClass*> DefaultModifiers; // 0xa48(0x10)
	char pad_A58[0x18]; // 0xa58(0x18)
	struct F*4f853adcb3 *299bcc2923; // 0xa70(0x5f0)
	char pad_1060[0x18]; // 0x1060(0x18)
	struct TArray<struct U*48db839311*> *3645acd714; // 0x1078(0x10)
	char pad_1088[0x8]; // 0x1088(0x08)
	struct F*4f853adcb3 ViewTarget; // 0x1090(0x5f0)
	struct F*3663b8ac95 *db70705669; // 0x1680(0x5e0)
	char pad_1C60[0x4]; // 0x1c60(0x04)
	float ViewYawMin; // 0x1c64(0x04)
	char pad_1C68[0x18]; // 0x1c68(0x18)
	struct TArray<struct AEmitterCameraLensEffectBase*> *02518e1c42; // 0x1c80(0x10)
	struct U*70696a9360* *1e06714475; // 0x1c90(0x08)
	struct U*aebce27681* *70913cb674[0x08]; // 0x1c98(0x40)
	struct TArray<struct FPostProcessSettings> *ce3d155159; // 0x1cd8(0x10)
	char pad_1CE8[0x10]; // 0x1ce8(0x10)
	struct TArray<struct U*aebce27681*> *1e086ce01d; // 0x1cf8(0x10)
	struct TArray<struct U*aebce27681*> *c4dd03b9b6; // 0x1d08(0x10)
	struct ACameraActor* *5a4b0a7f5f; // 0x1d18(0x08)
	char bIsOrthographic : 1; // 0x1d20(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x1d20(0x01)
	char pad_1D20_2 : 5; // 0x1d20(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1d20(0x01)
	char pad_1D21[0x3]; // 0x1d21(0x03)
	float ViewPitchMax; // 0x1d24(0x04)
	float DefaultAspectRatio; // 0x1d28(0x04)
	float ViewYawMax; // 0x1d2c(0x04)
	float ViewRollMax; // 0x1d30(0x04)
	char pad_1D34[0x4]; // 0x1d34(0x04)
	float ViewPitchMin; // 0x1d38(0x04)
	char pad_1D3C[0x4]; // 0x1d3c(0x04)

	void *f77f75b503(); // Function Engine.PlayerCameraManager.*f77f75b503 //  // @ game+0xf3c85fc
	void BlueprintUpdateCamera(); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera //  // @ game+0x43bab4
	void *1bd75f9bd8(); // Function Engine.PlayerCameraManager.*1bd75f9bd8 //  // @ game+0xf3c4ac8
	void *98cd2f0ab6(); // Function Engine.PlayerCameraManager.*98cd2f0ab6 //  // @ game+0xf3cafb0
	void *f8cf3ae91d(); // Function Engine.PlayerCameraManager.*f8cf3ae91d //  // @ game+0xf3daf98
	void *49bee29b32(); // Function Engine.PlayerCameraManager.*49bee29b32 //  // @ game+0xf3f9b74
	void *cae1e19315(); // Function Engine.PlayerCameraManager.*cae1e19315 //  // @ game+0xf39cee0
	void *c9b1d2c069(); // Function Engine.PlayerCameraManager.*c9b1d2c069 //  // @ game+0xf3a3ce8
	void PhotographyCameraModify(); // Function Engine.PlayerCameraManager.PhotographyCameraModify //  // @ game+0xf3d750c
	void *c5a388f402(); // Function Engine.PlayerCameraManager.*c5a388f402 //  // @ game+0xf3d89f8
	void *18944ed13a(); // Function Engine.PlayerCameraManager.*18944ed13a //  // @ game+0xf3faa10
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart //  // @ game+0x100d054
	void *2178657473(); // Function Engine.PlayerCameraManager.*2178657473 //  // @ game+0xf399404
	void *63f6375549(); // Function Engine.PlayerCameraManager.*63f6375549 //  // @ game+0xf3c6e98
	void *453568f33c(); // Function Engine.PlayerCameraManager.*453568f33c //  // @ game+0xf3daf18
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd //  // @ game+0xdac1ed4
	void *262a38c54e(); // Function Engine.PlayerCameraManager.*262a38c54e //  // @ game+0xf3f04c4
	void *3a69da733b(); // Function Engine.PlayerCameraManager.*3a69da733b //  // @ game+0xf3a26b4
	void *b9c8bbe1f5(); // Function Engine.PlayerCameraManager.*b9c8bbe1f5 //  // @ game+0xf3fa710
	void *180440db6d(); // Function Engine.PlayerCameraManager.*180440db6d //  // @ game+0xf3fa810
	void *3ddc899538(); // Function Engine.PlayerCameraManager.*3ddc899538 //  // @ game+0xf3fa790
	void *86eef9e1f5(); // Function Engine.PlayerCameraManager.*86eef9e1f5 //  // @ game+0xed6670
	void *d6df4ad80b(); // Function Engine.PlayerCameraManager.*d6df4ad80b //  // @ game+0xf3fa8d0
	void *de5a60ef3e(); // Function Engine.PlayerCameraManager.*de5a60ef3e //  // @ game+0xf3faad0
	void *56b5df5d4b(); // Function Engine.PlayerCameraManager.*56b5df5d4b //  // @ game+0xf09e80
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart //  // @ game+0x2f318c
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd //  // @ game+0xdb39b60
};

// Class Engine.PlayerInput
// Size: 0x490 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPlayerInput : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
	struct TArray<struct FKeyBind> DebugExecBindings; // 0x128(0x10)
	char pad_138[0x30]; // 0x138(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x168(0x10)
	char pad_178[0x318]; // 0x178(0x318)

	void SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity //  // @ game+0xf3eb288
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing //  // @ game+0xf3a2704
	void SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone //  // @ game+0xf3e9ecc
	void SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf //  // @ game+0xf3ea840
	void SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity //  // @ game+0xf3f2610
	void InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey //  // @ game+0xf3ccfd8
	void SetGamePadSensitivityOf(); // Function Engine.PlayerInput.SetGamePadSensitivityOf //  // @ game+0xf3ebbfc
	void InvertAxis(); // Function Engine.PlayerInput.InvertAxis //  // @ game+0xf3ccf60
	void SetBind(); // Function Engine.PlayerInput.SetBind //  // @ game+0xf3e5d5c
};

// Class Engine.NavigationData
// Size: 0x5a8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x400(0x08)
	struct FNavDataConfig *628a0665fe; // 0x408(0x50)
	char *0ccd9e2697 : 1; // 0x458(0x01)
	char bForceRebuildOnLoad : 1; // 0x458(0x01)
	char bCanBeMainNavData : 1; // 0x458(0x01)
	char bCanSpawnOnRebuild : 1; // 0x458(0x01)
	char bRebuildAtRuntime : 1; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	float ObservedPathsTickInterval; // 0x460(0x04)
	char *e65caf9eb7 : 1; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	uint32 DataVersion; // 0x468(0x04)
	char pad_46C[0xd4]; // 0x46c(0xd4)
	struct TArray<struct F*28710f2906> *bdce559d10; // 0x540(0x10)
	char pad_550[0x58]; // 0x550(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6c0 (Inherited: 0x5a8)  [layout: LECH - offset chi la uoc luong]
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x5a8(0x01)
	char bDrawPolyEdges : 1; // 0x5a8(0x01)
	char bDrawFilledPolys : 1; // 0x5a8(0x01)
	char bDrawNavMeshEdges : 1; // 0x5a8(0x01)
	char *d1ee951c6a : 1; // 0x5a8(0x01)
	char *06edf4caf1 : 1; // 0x5a8(0x01)
	char *c2416ce75a : 1; // 0x5a8(0x01)
	char *2d0ec1c9dd : 1; // 0x5a8(0x01)
	char *0b8ce8e6f2 : 1; // 0x5a9(0x01)
	char *d4f0a09945 : 1; // 0x5a9(0x01)
	char *d36d832070 : 1; // 0x5a9(0x01)
	char *ab815c14ad : 1; // 0x5a9(0x01)
	char *97a243eb1b : 1; // 0x5a9(0x01)
	char *f65b55c0da : 1; // 0x5a9(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x5a9(0x01)
	char *71aaba040e : 1; // 0x5a9(0x01)
	char pad_5AA[0x2]; // 0x5aa(0x02)
	float DrawOffset; // 0x5ac(0x04)
	char bFixedTilePoolSize : 1; // 0x5b0(0x01)
	char pad_5B1[0x3]; // 0x5b1(0x03)
	int32 TilePoolSize; // 0x5b4(0x04)
	float TileSizeUU; // 0x5b8(0x04)
	float CellSize; // 0x5bc(0x04)
	float CellHeight; // 0x5c0(0x04)
	float AgentRadius; // 0x5c4(0x04)
	float AgentHeight; // 0x5c8(0x04)
	float AgentMaxHeight; // 0x5cc(0x04)
	float AgentMaxSlope; // 0x5d0(0x04)
	float AgentMaxStepHeight; // 0x5d4(0x04)
	float MinRegionArea; // 0x5d8(0x04)
	float MergeRegionSize; // 0x5dc(0x04)
	float MaxSimplificationError; // 0x5e0(0x04)
	int32 MaxSimultaneousTileGenerationJobsCount; // 0x5e4(0x04)
	int32 TileNumberHardLimit; // 0x5e8(0x04)
	int32 *5dbb7bd503; // 0x5ec(0x04)
	int32 *bd2bed3fe8; // 0x5f0(0x04)
	int32 *c46b1a3391; // 0x5f4(0x04)
	float DefaultDrawDistance; // 0x5f8(0x04)
	float DefaultMaxSearchNodes; // 0x5fc(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x600(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x604(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x605(0x01)
	char pad_606[0x2]; // 0x606(0x02)
	int32 RegionChunkSplits; // 0x608(0x04)
	int32 LayerChunkSplits; // 0x60c(0x04)
	char bSortNavigationAreasByCost : 1; // 0x610(0x01)
	char bPerformVoxelFiltering : 1; // 0x610(0x01)
	char bMarkLowHeightAreas : 1; // 0x610(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x610(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x610(0x01)
	char bStoreEmptyTileLayers : 1; // 0x610(0x01)
	char bUseVirtualFilters : 1; // 0x610(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	bool bOnlySavedOnDS; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	char bUseVoxelCache : 1; // 0x618(0x01)
	char pad_619[0x3]; // 0x619(0x03)
	float TileSetUpdateInterval; // 0x61c(0x04)
	float HeuristicScale; // 0x620(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x624(0x04)
	char pad_628[0x98]; // 0x628(0x98)
};

// Class Engine.*ae609a0980
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*ae609a0980 : UObject {
	struct TArray<struct F*2046156b5c> *a5d680ab2e; // 0x30(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x500 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *be198bacd2; // 0x478(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x488(0x10)
	struct TArray<struct UPrimitiveComponent*> *21ac1b5660; // 0x498(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x4a8(0x10)
	bool bIsLobbyCapture; // 0x4b8(0x01)
	bool bCaptureEveryFrame; // 0x4b9(0x01)
	bool bCaptureOnMovement; // 0x4ba(0x01)
	bool bDisableOcclusionCulling; // 0x4bb(0x01)
	float LODDistanceFactor; // 0x4bc(0x04)
	float MaxViewDistanceOverride; // 0x4c0(0x04)
	int32 CaptureSortPriority; // 0x4c4(0x04)
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; // 0x4c8(0x10)
	char pad_4D8[0x28]; // 0x4d8(0x28)

	void *adc976b0c4(); // Function Engine.SceneCaptureComponent.*adc976b0c4 //  // @ game+0xf47e2f4
	void *2c90f52ce1(); // Function Engine.SceneCaptureComponent.*2c90f52ce1 //  // @ game+0xf4d4da8
	void *805e591171(); // Function Engine.SceneCaptureComponent.*805e591171 //  // @ game+0xf4bc124
	void *e4c40b17fc(); // Function Engine.SceneCaptureComponent.*e4c40b17fc //  // @ game+0xf5246ac
	void *e158f6c6ca(); // Function Engine.SceneCaptureComponent.*e158f6c6ca //  // @ game+0xf4bbf24
	void *2a28e4970d(); // Function Engine.SceneCaptureComponent.*2a28e4970d //  // @ game+0xf435304
	void *f1b321d359(); // Function Engine.SceneCaptureComponent.*f1b321d359 //  // @ game+0xf47e5dc
	void *36c05a7d3c(); // Function Engine.SceneCaptureComponent.*36c05a7d3c //  // @ game+0xf524498
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb50 (Inherited: 0x500)  [layout: KHOP]
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float FOVAngle; // 0x504(0x04)
	bool *d274b5fcaa; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float *2025e77ad5; // 0x50c(0x04)
	float OrthoWidth; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x518(0x08)
	enum class ESceneCaptureSource CaptureSource; // 0x520(0x01)
	enum class *0fe85a4a3d CompositeMode; // 0x521(0x01)
	char pad_522[0x2]; // 0x522(0x02)
	struct FLinearColor LightingOnlyBrightness; // 0x524(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x534(0x10)
	struct FLinearColor LightingOnlyCustomData; // 0x544(0x10)
	float LightingOnlyCustomDataAlpha; // 0x554(0x04)
	char pad_558[0x8]; // 0x558(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x560(0x580)
	float PostProcessBlendWeight; // 0xae0(0x04)
	bool bUseCustomProjectionMatrix; // 0xae4(0x01)
	char pad_AE5[0xb]; // 0xae5(0x0b)
	struct FMatrix CustomProjectionMatrix; // 0xaf0(0x40)
	char *4849dca4f8 : 1; // 0xb30(0x01)
	char pad_B31[0x3]; // 0xb31(0x03)
	bool bEnableClipPlane; // 0xb34(0x01)
	char pad_B35[0x3]; // 0xb35(0x03)
	struct FVector ClipPlaneBase; // 0xb38(0x0c)
	struct FVector ClipPlaneNormal; // 0xb44(0x0c)

	void *f752129f6c(); // Function Engine.SceneCaptureComponent2D.*f752129f6c //  // @ game+0xf407d54
	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene //  // @ game+0xf4331d0
};

// Class Engine.ArrowComponent
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x9d0(0x04)
	float ArrowSize; // 0x9d4(0x04)
	bool bIsScreenSizeScaled; // 0x9d8(0x01)
	char pad_9D9[0x3]; // 0x9d9(0x03)
	float ScreenSize; // 0x9dc(0x04)
	char bTreatAsASprite : 1; // 0x9e0(0x01)
	char pad_9E1[0xf]; // 0x9e1(0x0f)

	void SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor //  // @ game+0xf4cbf9c
};

// Class Engine.ParticleSystemComponent
// Size: 0xc40 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x9d0(0x08)
	struct TArray<struct UMaterialInterface*> *3f78b27dc3; // 0x9d8(0x10)
	struct TArray<struct USkeletalMeshComponent*> *79772214fb; // 0x9e8(0x10)
	char pad_9F8_0 : 7; // 0x9f8(0x01)
	char bResetOnDetach : 1; // 0x9f8(0x01)
	char *c1b5733daa : 1; // 0x9f9(0x01)
	char pad_9F9_1 : 2; // 0x9f9(0x01)
	char bAllowRecycling : 1; // 0x9f9(0x01)
	char bAutoManageAttachment : 1; // 0x9f9(0x01)
	char pad_9F9_5 : 2; // 0x9f9(0x01)
	char *f9c7cc1d9c : 1; // 0x9f9(0x01)
	char bOverrideLODMethod : 1; // 0x9fa(0x01)
	char *6cfbb48e21 : 1; // 0x9fa(0x01)
	char pad_9FA_2 : 4; // 0x9fa(0x01)
	char *ca459ddeb5 : 1; // 0x9fa(0x01)
	char pad_9FB[0x5]; // 0x9fb(0x05)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0xa00(0x10)
	struct FMulticastDelegate OnParticleSpawn; // 0xa10(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0xa20(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0xa30(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0xa40(0x10)
	struct FVector *ec0cf13fb8; // 0xa50(0x0c)
	struct FVector *fc599129a3; // 0xa5c(0x0c)
	float WarmupTime; // 0xa68(0x04)
	float *b0d4ac43bb; // 0xa6c(0x04)
	char pad_A70[0x4]; // 0xa70(0x04)
	float SecondsBeforeInactive; // 0xa74(0x04)
	char pad_A78[0x4]; // 0xa78(0x04)
	float *a737357fb7; // 0xa7c(0x04)
	char pad_A80[0x8]; // 0xa80(0x08)
	enum class *9e910afe84 LODMethod; // 0xa88(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xa89(0x01)
	char pad_A8A[0x16]; // 0xa8a(0x16)
	struct TArray<struct U*ab36a02958*> *395ea94580; // 0xaa0(0x10)
	char pad_AB0[0x60]; // 0xab0(0x60)
	float CustomTimeDilation; // 0xb10(0x04)
	char pad_B14[0x4]; // 0xb14(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0xb18(0x10)
	struct USceneComponent* AutoAttachParent; // 0xb28(0x08)
	struct FName AutoAttachSocketName; // 0xb30(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xb38(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xb39(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xb3a(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xb3b(0x01)
	enum class *b51b4ffeef RuntimeOverrideAutoActivate; // 0xb3c(0x01)
	char pad_B3D[0x103]; // 0xb3d(0x103)

	void *ee8e528a4a(); // Function Engine.ParticleSystemComponent.*ee8e528a4a //  // @ game+0xf3e507c
	void *347dab38e4(); // Function Engine.ParticleSystemComponent.*347dab38e4 //  // @ game+0x908354
	void *7368f464ac(); // Function Engine.ParticleSystemComponent.*7368f464ac //  // @ game+0xf3c66f0
	void *fedbce7f5f(); // Function Engine.ParticleSystemComponent.*fedbce7f5f //  // @ game+0xf3e5c64
	void *932aae4275(); // Function Engine.ParticleSystemComponent.*932aae4275 //  // @ game+0xf3c67c4
	void *3e06c5ba96(); // Function Engine.ParticleSystemComponent.*3e06c5ba96 //  // @ game+0x1274480
	void *1a012be1e8(); // Function Engine.ParticleSystemComponent.*1a012be1e8 //  // @ game+0xf3f24a0
	void *23aca5a390(); // Function Engine.ParticleSystemComponent.*23aca5a390 //  // @ game+0xf3e3874
	void *76ac3c85c7(); // Function Engine.ParticleSystemComponent.*76ac3c85c7 //  // @ game+0xf3c6cc8
	void *adf5cbc3d8(); // Function Engine.ParticleSystemComponent.*adf5cbc3d8 //  // @ game+0xf3c4dec
	void *5371076f36(); // Function Engine.ParticleSystemComponent.*5371076f36 //  // @ game+0xf3aaa20
	void *999bc2eca8(); // Function Engine.ParticleSystemComponent.*999bc2eca8 //  // @ game+0xf3ca6b0
	void *16278e97b3(); // Function Engine.ParticleSystemComponent.*16278e97b3 //  // @ game+0xf3e526c
	void *8818531252(); // Function Engine.ParticleSystemComponent.*8818531252 //  // @ game+0xf3c68c8
	void *91d41af721(); // Function Engine.ParticleSystemComponent.*91d41af721 //  // @ game+0xf3a1728
	void *0318bba510(); // Function Engine.ParticleSystemComponent.*0318bba510 //  // @ game+0xf3c2d48
	void *b2f3957572(); // Function Engine.ParticleSystemComponent.*b2f3957572 //  // @ game+0xf3e1e28
	void *b6b7714eec(); // Function Engine.ParticleSystemComponent.*b6b7714eec //  // @ game+0xf3e5174
	void *7119a0544b(); // Function Engine.ParticleSystemComponent.*7119a0544b //  // @ game+0xf3e4684
	void *17ccdbdcd0(); // Function Engine.ParticleSystemComponent.*17ccdbdcd0 //  // @ game+0xf3e39c0
	void *1018fde569(); // Function Engine.ParticleSystemComponent.*1018fde569 //  // @ game+0xf3ca520
	void *50e36b70f3(); // Function Engine.ParticleSystemComponent.*50e36b70f3 //  // @ game+0xf3e44c0
	void *241c8a49e9(); // Function Engine.ParticleSystemComponent.*241c8a49e9 //  // @ game+0xf3c6ac8
	void SetFloatParameter(); // Function Engine.ParticleSystemComponent.SetFloatParameter //  // @ game+0x126ddf4
	void *2f738e9464(); // Function Engine.ParticleSystemComponent.*2f738e9464 //  // @ game+0xf3f7b04
	void *fded7f2402(); // Function Engine.ParticleSystemComponent.*fded7f2402 //  // @ game+0xf3c6bcc
	void *8b504cef5c(); // Function Engine.ParticleSystemComponent.*8b504cef5c //  // @ game+0xf3c69c4
	void *c5863345d3(); // Function Engine.ParticleSystemComponent.*c5863345d3 //  // @ game+0x5490e4
	void *a723a92b9b(); // Function Engine.ParticleSystemComponent.*a723a92b9b //  // @ game+0xf3e7b00
	void *41d46bf717(); // Function Engine.ParticleSystemComponent.*41d46bf717 //  // @ game+0xf3e458c
};

// Class Engine.DefaultPawn
// Size: 0x490 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x468(0x04)
	float BaseLookUpRate; // 0x46c(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x470(0x08)
	struct USphereComponent* CollisionComponent; // 0x478(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x480(0x08)
	char bAddDefaultMovementBindings : 1; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)

	void MoveRight(); // Function Engine.DefaultPawn.MoveRight //  // @ game+0xf3d54f0
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward //  // @ game+0xf3d4b78
	void *b65f1b9a3d(); // Function Engine.DefaultPawn.*b65f1b9a3d //  // @ game+0xf3d2ed0
	void *6b7c2fc69a(); // Function Engine.DefaultPawn.*6b7c2fc69a //  // @ game+0xf3d5e68
	void *d74b1a3d62(); // Function Engine.DefaultPawn.*d74b1a3d62 //  // @ game+0xf3fb044
};

// Class Engine.SpectatorPawn
// Size: 0x490 (Inherited: 0x490)  [layout: KHOP]
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.FloatingPawnMovement
// Size: 0x2b0 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x290(0x04)
	float Acceleration; // 0x294(0x04)
	float Deceleration; // 0x298(0x04)
	float TurningBoost; // 0x29c(0x04)
	char *55e71d8b82 : 1; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2b0 (Inherited: 0x2b0)  [layout: LECH - offset chi la uoc luong]
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *f2995997a9 : 1; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
};

// Class Engine.*7d2bd95133
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*7d2bd95133 : U*c60a4a9930 {
};

// Class Engine.*314482921f
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*314482921f : U*7d2bd95133 {
};

// Class Engine.*ba332f0435
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ba332f0435 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.SplineComponent
// Size: 0xac0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *1d83306974; // 0x9d0(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa30(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa48(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa60(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xa78(0x18)
	bool bAllowSplineEditingPerInstance; // 0xa90(0x01)
	char pad_A91[0x3]; // 0xa91(0x03)
	int32 *39c94ec978; // 0xa94(0x04)
	bool *e04836d3e7; // 0xa98(0x01)
	bool *d1db9b3d47; // 0xa99(0x01)
	char pad_A9A[0x2]; // 0xa9a(0x02)
	float *c1e67e4895; // 0xa9c(0x04)
	float Duration; // 0xaa0(0x04)
	bool bStationaryEndpoints; // 0xaa4(0x01)
	bool *565ee5bc92; // 0xaa5(0x01)
	bool *8ea3a284b3; // 0xaa6(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xaa7(0x01)
	bool bDrawDebug; // 0xaa8(0x01)
	bool *9e68156f46; // 0xaa9(0x01)
	bool bLoopPositionOverride; // 0xaaa(0x01)
	char pad_AAB[0x1]; // 0xaab(0x01)
	float *e2cc45a66d; // 0xaac(0x04)
	struct FVector DefaultUpVector; // 0xab0(0x0c)
	char pad_ABC[0x4]; // 0xabc(0x04)

	void *37831ef13a(); // Function Engine.SplineComponent.*37831ef13a //  // @ game+0xf46e588
	void AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint //  // @ game+0xf408a94
	void *361ad37834(); // Function Engine.SplineComponent.*361ad37834 //  // @ game+0xf468f20
	void *b1e8e446c4(); // Function Engine.SplineComponent.*b1e8e446c4 //  // @ game+0xf4573fc
	void *9b81acb171(); // Function Engine.SplineComponent.*9b81acb171 //  // @ game+0xf4bc1ac
	void *510dac37ee(); // Function Engine.SplineComponent.*510dac37ee //  // @ game+0xf477850
	void *b93f92a918(); // Function Engine.SplineComponent.*b93f92a918 //  // @ game+0xf468160
	void *68e1c5cbe0(); // Function Engine.SplineComponent.*68e1c5cbe0 //  // @ game+0xf47aa4c
	void *26d92a4d10(); // Function Engine.SplineComponent.*26d92a4d10 //  // @ game+0xf4683f8
	void *1706fbcd17(); // Function Engine.SplineComponent.*1706fbcd17 //  // @ game+0xf470130
	void *c5856da798(); // Function Engine.SplineComponent.*c5856da798 //  // @ game+0xf3e8634
	void *179bc6acaf(); // Function Engine.SplineComponent.*179bc6acaf //  // @ game+0xf471038
	void *b24c9f2ddc(); // Function Engine.SplineComponent.*b24c9f2ddc //  // @ game+0xf462d14
	void *64c881c7a5(); // Function Engine.SplineComponent.*64c881c7a5 //  // @ game+0xf520698
	void *bfefcb5cc6(); // Function Engine.SplineComponent.*bfefcb5cc6 //  // @ game+0xf46d0e0
	void *a50f547d0e(); // Function Engine.SplineComponent.*a50f547d0e //  // @ game+0xf4087fc
	void *6511620fa2(); // Function Engine.SplineComponent.*6511620fa2 //  // @ game+0xf46f6e0
	void *658e13ea19(); // Function Engine.SplineComponent.*658e13ea19 //  // @ game+0xf4808ec
	void *f3bf6f8117(); // Function Engine.SplineComponent.*f3bf6f8117 //  // @ game+0xf517804
	void *f927de4c2a(); // Function Engine.SplineComponent.*f927de4c2a //  // @ game+0xf46391c
	void *d8f9b0dddd(); // Function Engine.SplineComponent.*d8f9b0dddd //  // @ game+0xf474f94
	void *c974cdffbb(); // Function Engine.SplineComponent.*c974cdffbb //  // @ game+0xf478bcc
	void *6899c40bef(); // Function Engine.SplineComponent.*6899c40bef //  // @ game+0xf408a0c
	void *d6b0cecdc3(); // Function Engine.SplineComponent.*d6b0cecdc3 //  // @ game+0xf456f2c
	void *d71a91b683(); // Function Engine.SplineComponent.*d71a91b683 //  // @ game+0xf408714
	void *758cebb727(); // Function Engine.SplineComponent.*758cebb727 //  // @ game+0xf46806c
	void *2397779efb(); // Function Engine.SplineComponent.*2397779efb //  // @ game+0xf46806c
	void *db69bb7891(); // Function Engine.SplineComponent.*db69bb7891 //  // @ game+0xf4d6dd8
	void *99f153ad79(); // Function Engine.SplineComponent.*99f153ad79 //  // @ game+0xf513388
	void *fa307a8f6f(); // Function Engine.SplineComponent.*fa307a8f6f //  // @ game+0xf46c710
	void *c30b04fcd6(); // Function Engine.SplineComponent.*c30b04fcd6 //  // @ game+0xf471010
	void *58ccec7c2d(); // Function Engine.SplineComponent.*58ccec7c2d //  // @ game+0xf547c58
	void *f12f5fcbef(); // Function Engine.SplineComponent.*f12f5fcbef //  // @ game+0xf473570
	void *2d700b8abb(); // Function Engine.SplineComponent.*2d700b8abb //  // @ game+0xf45f040
	void *39caec2794(); // Function Engine.SplineComponent.*39caec2794 //  // @ game+0xf4da314
	void *2805ff886e(); // Function Engine.SplineComponent.*2805ff886e //  // @ game+0xf471798
	void *1d49726537(); // Function Engine.SplineComponent.*1d49726537 //  // @ game+0xf4fd3d4
	void *996e939844(); // Function Engine.SplineComponent.*996e939844 //  // @ game+0xf472174
	void *d8a84177e2(); // Function Engine.SplineComponent.*d8a84177e2 //  // @ game+0xf476ebc
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints //  // @ game+0xf469f10
	void *ca6876c8d1(); // Function Engine.SplineComponent.*ca6876c8d1 //  // @ game+0xf464eac
	void *5cee20a1b0(); // Function Engine.SplineComponent.*5cee20a1b0 //  // @ game+0xf456a2c
	void *132191461d(); // Function Engine.SplineComponent.*132191461d //  // @ game+0xf46dbac
	void *80ad78cb89(); // Function Engine.SplineComponent.*80ad78cb89 //  // @ game+0xf512e4c
	void *dd07598afb(); // Function Engine.SplineComponent.*dd07598afb //  // @ game+0xf4645b8
	void *76f7709c12(); // Function Engine.SplineComponent.*76f7709c12 //  // @ game+0xf478c6c
	void *eef3d08554(); // Function Engine.SplineComponent.*eef3d08554 //  // @ game+0xf51a000
	void *29113adfc7(); // Function Engine.SplineComponent.*29113adfc7 //  // @ game+0xf4571b4
	void *cb942f93a4(); // Function Engine.SplineComponent.*cb942f93a4 //  // @ game+0xf474124
	void *635ac6b7f4(); // Function Engine.SplineComponent.*635ac6b7f4 //  // @ game+0xf4682e4
	void *b385f12243(); // Function Engine.SplineComponent.*b385f12243 //  // @ game+0xf4572a8
	void *80573e494d(); // Function Engine.SplineComponent.*80573e494d //  // @ game+0xf456998
	void *4e07c6fb0b(); // Function Engine.SplineComponent.*4e07c6fb0b //  // @ game+0xf46bcec
	void *0b4876c95c(); // Function Engine.SplineComponent.*0b4876c95c //  // @ game+0xf408b94
	void *cbef594850(); // Function Engine.SplineComponent.*cbef594850 //  // @ game+0xf462f40
	void *b6f7528d11(); // Function Engine.SplineComponent.*b6f7528d11 //  // @ game+0xf4de7c0
	void *ced943cb75(); // Function Engine.SplineComponent.*ced943cb75 //  // @ game+0xf4d6eac
	void *ec340d8bd1(); // Function Engine.SplineComponent.*ec340d8bd1 //  // @ game+0xf5130bc
	void *e177e72769(); // Function Engine.SplineComponent.*e177e72769 //  // @ game+0xf468fec
	void SetSplinePointType(); // Function Engine.SplineComponent.SetSplinePointType //  // @ game+0xf512fd0
	void *c3c9b73723(); // Function Engine.SplineComponent.*c3c9b73723 //  // @ game+0xf408cd8
	void *87bfa3dc1f(); // Function Engine.SplineComponent.*87bfa3dc1f //  // @ game+0xf435ed4
	void *83bee0ff7a(); // Function Engine.SplineComponent.*83bee0ff7a //  // @ game+0xf457104
	void *2f0337fbca(); // Function Engine.SplineComponent.*2f0337fbca //  // @ game+0xf5176c0
	void *7888c369fc(); // Function Engine.SplineComponent.*7888c369fc //  // @ game+0xf470074
	void *68852becd0(); // Function Engine.SplineComponent.*68852becd0 //  // @ game+0xf468544
	void *684f6604aa(); // Function Engine.SplineComponent.*684f6604aa //  // @ game+0xf3e8634
	void *3fd54cd162(); // Function Engine.SplineComponent.*3fd54cd162 //  // @ game+0xf457000
	void *f054f1f2a4(); // Function Engine.SplineComponent.*f054f1f2a4 //  // @ game+0xf473fbc
	void *c9143e6a5d(); // Function Engine.SplineComponent.*c9143e6a5d //  // @ game+0xf46e654
	void *e16022571f(); // Function Engine.SplineComponent.*e16022571f //  // @ game+0xf46b20c
	void *b6d014f319(); // Function Engine.SplineComponent.*b6d014f319 //  // @ game+0xf4639e8
	void *60af582e59(); // Function Engine.SplineComponent.*60af582e59 //  // @ game+0xf4568a4
	void *53c4f8b00a(); // Function Engine.SplineComponent.*53c4f8b00a //  // @ game+0xf475a74
	void *1ebc7b5aa4(); // Function Engine.SplineComponent.*1ebc7b5aa4 //  // @ game+0xf46d19c
	void *2d7b43b436(); // Function Engine.SplineComponent.*2d7b43b436 //  // @ game+0xf478230
	void *5a9cbbdf96(); // Function Engine.SplineComponent.*5a9cbbdf96 //  // @ game+0xf4796d8
	void *2829f2641b(); // Function Engine.SplineComponent.*2829f2641b //  // @ game+0xf47a06c
	void *489c2954f0(); // Function Engine.SplineComponent.*489c2954f0 //  // @ game+0xf46bbe8
	void *4ae79ee136(); // Function Engine.SplineComponent.*4ae79ee136 //  // @ game+0xf475970
	void *f514fbcdec(); // Function Engine.SplineComponent.*f514fbcdec //  // @ game+0xf456e38
};

// Class Engine.*c82d443ff2
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*c82d443ff2 : U*c60a4a9930 {
};

// Class Engine.LightComponentBase
// Size: 0x4b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct ULightComponentBase : USceneComponent {
	struct FGuid *da7c7d45bc; // 0x478(0x10)
	float Brightness; // 0x488(0x04)
	float Intensity; // 0x48c(0x04)
	struct FColor LightColor; // 0x490(0x04)
	char bAffectsWorld : 1; // 0x494(0x01)
	char CastShadows : 1; // 0x494(0x01)
	char CastStaticShadows : 1; // 0x494(0x01)
	char CastDynamicShadows : 1; // 0x494(0x01)
	char bAffectTranslucentLighting : 1; // 0x494(0x01)
	char bCastVolumetricShadow : 1; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	float IndirectLightingIntensity; // 0x498(0x04)
	float VolumetricScatteringIntensity; // 0x49c(0x04)
	bool *958c156b71; // 0x4a0(0x01)
	char pad_4A1[0xf]; // 0x4a1(0x0f)

	void *a5cae4c2e5(); // Function Engine.LightComponentBase.*a5cae4c2e5 //  // @ game+0xf4d623c
	void *636144eb11(); // Function Engine.LightComponentBase.*636144eb11 //  // @ game+0xf4d62b8
	void *be5363c1db(); // Function Engine.LightComponentBase.*be5363c1db //  // @ game+0xf468218
};

// Class Engine.LightComponent
// Size: 0x5a0 (Inherited: 0x4b0)  [layout: LECH - offset chi la uoc luong]
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x4a8(0x04)
	float MaxDrawDistance; // 0x4ac(0x04)
	float *7689a9d306; // 0x4b0(0x04)
	char bUseTemperature : 1; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	int32 ShadowMapChannel; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	float MinRoughness; // 0x4c0(0x04)
	float ShadowResolutionScale; // 0x4c4(0x04)
	float ShadowBias; // 0x4c8(0x04)
	float ShadowSharpen; // 0x4cc(0x04)
	float ContactShadowLength; // 0x4d0(0x04)
	char InverseSquaredFalloff : 1; // 0x4d4(0x01)
	char CastTranslucentShadows : 1; // 0x4d4(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x4d4(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	struct FLightingChannels LightingChannels; // 0x4d8(0x03)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct UMaterialInterface* LightFunctionMaterial; // 0x4e0(0x08)
	struct FVector LightFunctionScale; // 0x4e8(0x0c)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct U*0a5889c743* IESTexture; // 0x4f8(0x08)
	char bUseIESBrightness : 1; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float IESBrightnessScale; // 0x504(0x04)
	float LightFunctionFadeDistance; // 0x508(0x04)
	float DisabledBrightness; // 0x50c(0x04)
	char bEnableLightShaftBloom : 1; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float BloomScale; // 0x514(0x04)
	float BloomThreshold; // 0x518(0x04)
	struct FColor BloomTint; // 0x51c(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	float RayStartOffsetDepthScale; // 0x524(0x04)
	char pad_528[0x78]; // 0x528(0x78)

	void *24a0fe928c(); // Function Engine.LightComponent.*24a0fe928c //  // @ game+0xf4c09b8
	void *798ed87a69(); // Function Engine.LightComponent.*798ed87a69 //  // @ game+0xf4cedb8
	void *0b37c6e988(); // Function Engine.LightComponent.*0b37c6e988 //  // @ game+0xf4f81f4
	void *3926e6e7ee(); // Function Engine.LightComponent.*3926e6e7ee //  // @ game+0xf4c08fc
	void *8487b2dc5b(); // Function Engine.LightComponent.*8487b2dc5b //  // @ game+0xf51ded4
	void *2e8663a8f1(); // Function Engine.LightComponent.*2e8663a8f1 //  // @ game+0xf4cdad0
	void SetIntensity(); // Function Engine.LightComponent.SetIntensity //  // @ game+0x64e8bc
	void *40818bed8a(); // Function Engine.LightComponent.*40818bed8a //  // @ game+0xf4f7880
	void *506cfbeaa9(); // Function Engine.LightComponent.*506cfbeaa9 //  // @ game+0xf4f6424
	void *3282035b43(); // Function Engine.LightComponent.*3282035b43 //  // @ game+0xf4ce444
	void *ec38b5abec(); // Function Engine.LightComponent.*ec38b5abec //  // @ game+0xf4f135c
	void SetTemperature(); // Function Engine.LightComponent.SetTemperature //  // @ game+0xf517b8c
	void *c53b044e35(); // Function Engine.LightComponent.*c53b044e35 //  // @ game+0xf4f8270
	void *7cc45b7fef(); // Function Engine.LightComponent.*7cc45b7fef //  // @ game+0xf4f1238
	void *739bf253d5(); // Function Engine.LightComponent.*739bf253d5 //  // @ game+0xf4f6f0c
	void *ee6ec30461(); // Function Engine.LightComponent.*ee6ec30461 //  // @ game+0xf4dfefc
};

// Class Engine.PointLightComponent
// Size: 0x5e0 (Inherited: 0x5a0)  [layout: LECH - offset chi la uoc luong]
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x598(0x04)
	float AttenuationRadius; // 0x59c(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float LightFalloffExponent; // 0x5a4(0x04)
	float SourceRadius; // 0x5a8(0x04)
	float SourceLength; // 0x5ac(0x04)
	struct F*d1e795741c LightmassSettings; // 0x5b0(0x0c)
	struct ULightVolumesContainerComponent* *30703bfbb5; // 0x5bc(0x1c)
	uint32 *a4cc965d31; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)

	void SetLightFalloffExponent(); // Function Engine.PointLightComponent.SetLightFalloffExponent //  // @ game+0xf4f6598
	void SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius //  // @ game+0xf4ccdbc
	void *46581d76b1(); // Function Engine.PointLightComponent.*46581d76b1 //  // @ game+0xf510824
	void *985506ae9b(); // Function Engine.PointLightComponent.*985506ae9b //  // @ game+0xf511198
};

// Class Engine.SpotLightComponent
// Size: 0x5f0 (Inherited: 0x5e0)  [layout: LECH - offset chi la uoc luong]
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x5e0(0x04)
	float OuterConeAngle; // 0x5e4(0x04)
	float *0974a52433; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)

	void *923f5e59b3(); // Function Engine.SpotLightComponent.*923f5e59b3 //  // @ game+0xf4f2644
	void *6d6204b475(); // Function Engine.SpotLightComponent.*6d6204b475 //  // @ game+0xf503cb0
};

// Class Engine.BillboardComponent
// Size: 0xa00 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x9d0(0x08)
	char bIsScreenSizeScaled : 1; // 0x9d8(0x01)
	char pad_9D9[0x3]; // 0x9d9(0x03)
	float ScreenSize; // 0x9dc(0x04)
	float U; // 0x9e0(0x04)
	float UL; // 0x9e4(0x04)
	float V; // 0x9e8(0x04)
	float VL; // 0x9ec(0x04)
	struct FColor Color; // 0x9f0(0x04)
	char pad_9F4[0xc]; // 0x9f4(0x0c)

	void *99b9065e5e(); // Function Engine.BillboardComponent.*99b9065e5e //  // @ game+0xf3f859c
	void *b2c2730c69(); // Function Engine.BillboardComponent.*b2c2730c69 //  // @ game+0xf3f76a4
	void SetColor(); // Function Engine.BillboardComponent.SetColor //  // @ game+0xf3e797c
	void *843bc22cc8(); // Function Engine.BillboardComponent.*843bc22cc8 //  // @ game+0xf3f7724
};

// Class Engine.SceneCapture
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x400(0x08)
};

// Class Engine.SceneCapture2D
// Size: 0x418 (Inherited: 0x408)  [layout: KHOP]
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x408(0x08)
	struct U*66475761fb* *afc42febd0; // 0x410(0x08)

	void OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle //  // @ game+0xf3d68bc
};

// Class Engine.MaterialInterface
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMaterialInterface : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct F*69d5d4c919 LightmassSettings; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct F*caa3095be2> *f330322d6c; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	void *4774d10109(); // Function Engine.MaterialInterface.*4774d10109 //  // @ game+0xf3c6658
	void *13eec965f2(); // Function Engine.MaterialInterface.*13eec965f2 //  // @ game+0xf3cb35c
};

// Class Engine.MaterialInstance
// Size: 0x1e8 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct UMaterialInterface* Parent; // 0x80(0x08)
	char *3fe23592af : 1; // 0x88(0x01)
	char *dc258b829c : 1; // 0x88(0x01)
	char pad_88_2 : 1; // 0x88(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*76ed9c6570> FontParameterValues; // 0x90(0x10)
	struct TArray<struct F*c537011c2c> ScalarParameterValues; // 0xa0(0x10)
	struct TArray<struct F*48c6d7addf> TextureParameterValues; // 0xb0(0x10)
	struct TArray<struct F*6c9d5b17e1> VectorParameterValues; // 0xc0(0x10)
	bool bOverrideBaseProperties; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xd4(0x24)
	char pad_F8[0xf0]; // 0xf8(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e8 (Inherited: 0x1e8)  [layout: KHOP]
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x30(0x08)
	struct UMaterialFunction* Function; // 0x38(0x08)
	struct FString Desc; // 0x40(0x10)
	struct FColor *b7f3848142; // 0x50(0x04)
	char *d69340ad59 : 1; // 0x54(0x01)
	char *44402a72ed : 1; // 0x54(0x01)
	char *ef452d4acc : 1; // 0x54(0x01)
	char bCommentBubbleVisible : 1; // 0x54(0x01)
	char *b5724a939f : 1; // 0x54(0x01)
	char *43353795b2 : 1; // 0x54(0x01)
	char *cf17c35147 : 1; // 0x54(0x01)
	char *ea4f7a554b : 1; // 0x54(0x01)
	char *70bcc6c038 : 1; // 0x55(0x01)
	char *849d477db0 : 1; // 0x55(0x01)
	char *b7ccebd323 : 1; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct FExpressionOutput> Outputs; // 0x58(0x10)
};

// Class Engine.*09d4ab6458
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*09d4ab6458 : UMaterialExpression {
};

// Class Engine.*485bb1da84
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*485bb1da84 : UMaterialExpression {
};

// Class Engine.BlueprintAsyncActionBase
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlueprintAsyncActionBase : UObject {

	void Activate(); // Function Engine.BlueprintAsyncActionBase.Activate //  // @ game+0xf402498
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3c0 (Inherited: 0x2b8)  [layout: LECH - offset chi la uoc luong]
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct U*1bf3e421c5*> *8b194a302d; // 0x2c0(0x10)
	struct TArray<struct UActorComponent*> *ed0f3daee0; // 0x2d0(0x10)
	struct TArray<struct U*978737fff5*> *97b265d31c; // 0x2e0(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x2f0(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x2f8(0x08)
	struct UStructProperty* *ad08e521fd; // 0x300(0x08)
	struct UFunction* *2ec03b8b7d; // 0x308(0x08)
	struct TArray<struct F*6e9c3d76d1> FastCallPairs; // 0x310(0x10)
	bool *147cfc672f; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TMap<struct FName, struct F*cb5daba91b> *f5311ed173; // 0x328(0x50)
	bool *9148db553f; // 0x378(0x01)
	char pad_379[0x47]; // 0x379(0x47)
};

// Class Engine.CameraActor
// Size: 0x9b0 (Inherited: 0x400)  [layout: KHOP]
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *2874a0019f; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UCameraComponent* CameraComponent; // 0x408(0x08)
	struct USceneComponent* SceneComponent; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	char bConstrainAspectRatio : 1; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float AspectRatio; // 0x424(0x04)
	float FOVAngle; // 0x428(0x04)
	float PostProcessBlendWeight; // 0x42c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x430(0x580)

	void *1adf2c5b59(); // Function Engine.CameraActor.*1adf2c5b59 //  // @ game+0xf3c6600
};

// Class Engine.UserDefinedStruct
// Size: 0x108 (Inherited: 0xf8)  [layout: KHOP]
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0xf8(0x10)
};

// Class Engine.AISystemBase
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x30(0x10)
	struct FName AISystemModuleName; // 0x40(0x08)
	bool bInstantiateAISystemOnClient; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*953343ed1f
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*953343ed1f : UObject {
	struct TArray<struct F*f33efb6750> Areas; // 0x30(0x10)
	struct F*38c29743b2 IncludeFlags; // 0x40(0x04)
	struct F*38c29743b2 ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.Model
// Size: 0x568 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UModel : UObject {
	char pad_30[0x538]; // 0x30(0x538)
};

// Class Engine.*c233ee469c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c233ee469c : UObject {
};

// Class Engine.*6ec6c14c5a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6ec6c14c5a : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEdGraphNode : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x40(0x10)
	int32 NodePosX; // 0x50(0x04)
	int32 NodePosY; // 0x54(0x04)
	int32 NodeWidth; // 0x58(0x04)
	int32 NodeHeight; // 0x5c(0x04)
	char bHasCompilerMessage : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString NodeComment; // 0x68(0x10)
	bool bCommentBubblePinned; // 0x78(0x01)
	bool bCommentBubbleVisible; // 0x79(0x01)
	bool *8f6261443d; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	int32 ErrorType; // 0x7c(0x04)
	struct FString ErrorMsg; // 0x80(0x10)
	struct FGuid NodeGuid; // 0x90(0x10)
	enum class ENodeAdvancedPins AdvancedPinDisplay; // 0xa0(0x01)
	enum class ENodeEnabledState *cbda492cca; // 0xa1(0x01)
	bool *4350ae372c; // 0xa2(0x01)
	bool bIsNodeEnabled; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x148 (Inherited: 0x30)  [layout: KHOP]
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x30(0x10)
	struct FString PinToolTip; // 0x40(0x10)
	enum class EEdGraphPinDirection Direction; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct F*acd9dd0020 PinType; // 0x58(0x80)
	struct FString DefaultValue; // 0xd8(0x10)
	struct FString AutogeneratedDefaultValue; // 0xe8(0x10)
	struct UObject* DefaultObject; // 0xf8(0x08)
	struct FText DefaultTextValue; // 0x100(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> LinkedTo; // 0x118(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> SubPins; // 0x128(0x10)
	struct UEdGraphPin_Deprecated* *b693a93eae; // 0x138(0x08)
	struct UEdGraphPin_Deprecated* *069938f6a9; // 0x140(0x08)
};

// Class Engine.*9462c0fc60
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9462c0fc60 : UInterface {
};

// Class Engine.Level
// Size: 0x350 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULevel : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct U*7706f23edc* ActorCluster; // 0x40(0x08)
	char pad_48_0 : 2; // 0x48(0x01)
	char *d2d8d73538 : 1; // 0x48(0x01)
	char bIsVisible : 1; // 0x48(0x01)
	char bLocked : 1; // 0x48(0x01)
	char *08c026e0eb : 1; // 0x48(0x01)
	char pad_49[0x2f]; // 0x49(0x2f)
	struct UWorld* *ac5aea78cb; // 0x78(0x10)
	struct TArray<struct FGuid> *d50dd801e7; // 0x88(0x10)
	struct ALevelScriptActor* LevelScriptActor; // 0x98(0x08)
	char pad_A0[0x20]; // 0xa0(0x20)
	struct TArray<struct FVector> *86b8a70186; // 0xc0(0x10)
	float *e444046ea4; // 0xd0(0x04)
	char pad_D4[0xec]; // 0xd4(0xec)
	struct TArray<struct U*b7262aba83*> *17d8cc3ae7; // 0x1c0(0x10)
	struct TArray<struct U*b1c590a303*> *974c70b5f5; // 0x1d0(0x10)
	char pad_1E0[0x70]; // 0x1e0(0x70)
	struct ANavigationObjectBase* *c5e4bf9bfa; // 0x250(0x08)
	struct ANavigationObjectBase* *b895fca3e2; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)
	struct UMapBuildDataRegistry* *d3ff84c2e0; // 0x268(0x08)
	int32 *2ec677cc80; // 0x270(0x04)
	int32 *6c17d78ba3; // 0x274(0x04)
	float *5b346772ab; // 0x278(0x04)
	char pad_27C[0x8]; // 0x27c(0x08)
	struct FGuid *027eea7ef2; // 0x284(0x10)
	struct FIntVector *5e40f66c85; // 0x294(0x0c)
	struct UModel* Model; // 0x2a0(0x08)
	bool *04d27ea96c; // 0x2a8(0x01)
	char pad_2A9[0x77]; // 0x2a9(0x77)
	struct AWorldSettings* WorldSettings; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)
};

// Class Engine.*1cbb497140
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*1cbb497140 : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x400(0x08)

	void FadeOut(); // Function Engine.AmbientSound.FadeOut //  // @ game+0xf3c40ec
	void *8425a4601b(); // Function Engine.AmbientSound.*8425a4601b //  // @ game+0xf3c3724
	void Stop(); // Function Engine.AmbientSound.Stop //  // @ game+0xf3fa6cc
	void AdjustVolume(); // Function Engine.AmbientSound.AdjustVolume //  // @ game+0xf3a0d60
	void Play(); // Function Engine.AmbientSound.Play //  // @ game+0xf3d7680
};

// Class Engine.AutoBenchSettings
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct UAutoBenchSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FAutoBenchDetailSetting> Settings; // 0x38(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct AAutoBenchControlActor : AActor {
};

// Class Engine.*0bd75d6eda
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*0bd75d6eda : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x188 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UStaticMesh : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	int32 MinLOD; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x50(0x10)
	struct TArray<struct F*d0ed804177> StaticMaterials; // 0x60(0x10)
	float *4246fcf9dc; // 0x70(0x04)
	int32 LightMapResolution; // 0x74(0x04)
	int32 *2d5016ea20; // 0x78(0x04)
	float *2550bbd92e; // 0x7c(0x04)
	struct UBodySetup* BodySetup; // 0x80(0x08)
	int32 *fee5c3d76c; // 0x88(0x04)
	char *e2c5672c96 : 1; // 0x8c(0x01)
	char *107b67022d : 1; // 0x8c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x8c(0x01)
	char *e89152543f : 1; // 0x8c(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float LpvBiasMultiplier; // 0x90(0x04)
	bool *853b603748; // 0x94(0x01)
	char pad_95[0x33]; // 0x95(0x33)
	struct TArray<struct U*9d85998ee1*> Sockets; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct FVector *37e705d31b; // 0xe8(0x0c)
	struct FVector *a50bd35bdf; // 0xf4(0x0c)
	struct FBoxSphereBounds *d46a58b3d2; // 0x100(0x1c)
	bool *c97af11ecf; // 0x11c(0x01)
	bool *75ced7b95f; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	int32 *3f86302edb; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x128(0x10)
	struct UNavCollision* NavCollision; // 0x138(0x08)
	struct F*aa14358a8a *4b24d12155; // 0x140(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *8960c76287; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void *c6f5fcc286(); // Function Engine.StaticMesh.*c6f5fcc286 //  // @ game+0xf3c6e38
	void *1bc9193d36(); // Function Engine.StaticMesh.*1bc9193d36 //  // @ game+0xf3ca75c
	void *056da2b379(); // Function Engine.StaticMesh.*056da2b379 //  // @ game+0xf3ca318
	void *9bdeebea28(); // Function Engine.StaticMesh.*9bdeebea28 //  // @ game+0xf3c6dcc
	void *d67d522a9d(); // Function Engine.StaticMesh.*d67d522a9d //  // @ game+0xf3ca6ec
	void *8081d8d374(); // Function Engine.StaticMesh.*8081d8d374 //  // @ game+0xf3cd4a4
};

// Class Engine.*3bbe65c8b4
// Size: 0x5a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*3bbe65c8b4 : USceneComponent {
	struct FVector Extents; // 0x478(0x0c)
	struct FVector FadeExtents_Neg; // 0x484(0x0c)
	struct FVector FadeExtents_Pos; // 0x490(0x0c)
	bool bOutdoorTransition; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float VolumeAlpha; // 0x4a0(0x04)
	float Brightness; // 0x4a4(0x04)
	float SkyIntensity; // 0x4a8(0x04)
	int32 Priority; // 0x4ac(0x04)
	float FadePower; // 0x4b0(0x04)
	struct FAmbientCube2 AmbientCube2; // 0x4b4(0xc8)
	enum class *e1dccc797a CaptureSource; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	struct FColor DebugColor; // 0x580(0x04)
	char pad_584[0x1c]; // 0x584(0x1c)

	void *b15f586b51(); // Function Engine.*3bbe65c8b4.*b15f586b51 //  // @ game+0x1053c04
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x490 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UGIVolumesContainerComponent : USceneComponent {
	char pad_480[0x10]; // 0x480(0x10)
};

// Class Engine.BoxGIVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ABoxGIVolume : AActor {
	struct U*3bbe65c8b4* VolumeComponent; // 0x400(0x08)
};

// Class Engine.*40d2008597
// Size: 0x4b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*40d2008597 : USceneComponent {
	struct FVector Extents; // 0x478(0x0c)
	struct FVector FadeExtents_Neg; // 0x484(0x0c)
	struct FVector FadeExtents_Pos; // 0x490(0x0c)
	float FadeSize; // 0x49c(0x04)
	char pad_4A0[0x10]; // 0x4a0(0x10)
};

// Class Engine.LightVolumesContainerComponent
// Size: 0x4b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct ULightVolumesContainerComponent : USceneComponent {
	char pad_480[0x30]; // 0x480(0x30)
};

// Class Engine.BoxLightVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ABoxLightVolume : AActor {
	struct U*40d2008597* VolumeComponent; // 0x400(0x08)
};

// Class Engine.BrushShape
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x480 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct AAudioVolume : AVolume {
	float Priority; // 0x438(0x04)
	char bEnabled : 1; // 0x43c(0x01) rep=OnRep_bEnabled
	char pad_43D[0x3]; // 0x43d(0x03)
	struct FReverbSettings Settings; // 0x440(0x18)
	struct FInteriorSettings AmbientZoneSettings; // 0x458(0x24)
	char pad_47C[0x4]; // 0x47c(0x04)

	void *2ba16384cd(); // Function Engine.AudioVolume.*2ba16384cd //  // @ game+0xf3e92ec
	void SetPriority(); // Function Engine.AudioVolume.SetPriority //  // @ game+0xf3f5f8c
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled //  // @ game+0x9d287c
	void SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings //  // @ game+0xf3f7508
	void *95be10ffce(); // Function Engine.AudioVolume.*95be10ffce //  // @ game+0xf3edab4
};

// Class Engine.BlockingVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ABlockingVolume : AVolume {
};

// Class Engine.CameraBlockingVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CullDistanceVolume
// Size: 0x460 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ACullDistanceVolume : AVolume {
	struct TArray<struct F*bb8bb42407> CullDistances; // 0x438(0x10)
	char bEnabled : 1; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float CullDistanceForLODActor; // 0x44c(0x04)
	float CullDistanceForLODActorTooFar; // 0x450(0x04)
	bool bUseActorBound; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float IgnoreActorBoundSize; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
};

// Class Engine.LevelStreamingVolume
// Size: 0x450 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x438(0x10)
	char bEditorPreVisOnly : 1; // 0x448(0x01)
	char bDisabled : 1; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	enum class *20abdab529 StreamingUsage; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.*7e131e0372
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*7e131e0372 : UObject {
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x440 (Inherited: 0x438)  [layout: LECH - offset chi la uoc luong]
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
};

// Class Engine.*51b03dbb0c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*51b03dbb0c : UInterface {
};

// Class Engine.NavStaticModifierTestVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ANavStaticModifierTestVolume : AVolume {
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x450 (Inherited: 0x450)  [layout: KHOP]
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.KillZVolume
// Size: 0x450 (Inherited: 0x450)  [layout: KHOP]
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.PainCausingVolume
// Size: 0x478 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float DamagePerSec; // 0x454(0x04)
	struct UClass* DamageType; // 0x458(0x08)
	float PainInterval; // 0x460(0x04)
	char bEntryPain : 1; // 0x464(0x01)
	char *c3043cc823 : 1; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct AController* *3ba011bf4f; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UScene : UObject {
};

// Class Engine.*ece73fd169
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ece73fd169 : UInterface {
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x468 (Inherited: 0x438)  [layout: KHOP]
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x438(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x448(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x458(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x438 (Inherited: 0x438)  [layout: KHOP]
struct ATriggerVolume : AVolume {
};

// Class Engine.*bd303abce5
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*bd303abce5 : UInterface {
};

// Class Engine.CameraShake
// Size: 0x170 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCameraShake : UObject {
	char *fdeda5b4a6 : 1; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *2dc1324e4e; // 0x34(0x04)
	float *67269690e7; // 0x38(0x04)
	float *ebbc052263; // 0x3c(0x04)
	struct F*a3aa680f5b *d4c9c7a590; // 0x40(0x24)
	struct F*26e98ec05f *cbf725a06d; // 0x64(0x24)
	struct F*b9f6f18c48 *396674b3a4; // 0x88(0x0c)
	float AnimPlayRate; // 0x94(0x04)
	float *29ab3c2d70; // 0x98(0x04)
	float *25fee76e35; // 0x9c(0x04)
	float *50a6999c88; // 0xa0(0x04)
	float *4abded1f04; // 0xa4(0x04)
	struct UCameraAnim* Anim; // 0xa8(0x08)
	char bRandomAnimSegment : 1; // 0xb0(0x01)
	char pad_B1[0x17]; // 0xb1(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc8(0x08)
	char pad_D0[0x88]; // 0xd0(0x88)
	float ShakeScale; // 0x158(0x04)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	struct U*aebce27681* AnimInst; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake //  // @ game+0x43bab4
	void BlueprintUpdateCameraShake(); // Function Engine.CameraShake.BlueprintUpdateCameraShake //  // @ game+0x43bab4
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake //  // @ game+0x43bab4
	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished //  // @ game+0x10eb7c4
};

// Class Engine.*5ed7932f40
// Size: 0x290 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*5ed7932f40 : UActorComponent {
	char pad_210[0x68]; // 0x210(0x68)
	struct TArray<struct F*85469860f7> *85469860f7; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)

	void *9121717a90(); // Function Engine.*5ed7932f40.*9121717a90 //  // @ game+0xf3cd374
	void *f7c8f8587f(); // Function Engine.*5ed7932f40.*f7c8f8587f //  // @ game+0xf3c7848
	void *3a17ee8e70(); // Function Engine.*5ed7932f40.*3a17ee8e70 //  // @ game+0xf3cd374
	void *d1c49b1afd(); // Function Engine.*5ed7932f40.*d1c49b1afd //  // @ game+0xf3c7740
	void *f267a79e0b(); // Function Engine.*5ed7932f40.*f267a79e0b //  // @ game+0xf3c79c8
	void *86ed2d93e2(); // Function Engine.*5ed7932f40.*86ed2d93e2 //  // @ game+0xf3cc840
	void *79c575dc1a(); // Function Engine.*5ed7932f40.*79c575dc1a //  // @ game+0xf3c7740
	void *a8a4a23325(); // Function Engine.*5ed7932f40.*a8a4a23325 //  // @ game+0xf3c7924
	void OnInputOwnerEndPlayed(); // Function Engine.*5ed7932f40.OnInputOwnerEndPlayed //  // @ game+0xf3d6800
	void *22e73442f8(); // Function Engine.*5ed7932f40.*22e73442f8 //  // @ game+0xf3cd374
};

// Class Engine.CurveFloat
// Size: 0xb0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UCurveFloat : UCurveBase {
	struct FRichCurve *13ad54037f; // 0x38(0x70)
	bool *fe8383f8af; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void *a122eb9bd4(); // Function Engine.CurveFloat.*a122eb9bd4 //  // @ game+0xfc8bc4
	void *597b728acf(); // Function Engine.CurveFloat.*597b728acf //  // @ game+0xf3c7b24
};

// Class Engine.DecalActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x400(0x08)

	void *d926354cf9(); // Function Engine.DecalActor.*d926354cf9 //  // @ game+0xf3e916c
	void CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance //  // @ game+0x131c6e4
	void *31e30772cc(); // Function Engine.DecalActor.*31e30772cc //  // @ game+0xf3c7afc
};

// Class Engine.DestructibleActor
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x400(0x08)
	char bAffectNavigation : 1; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastDelegate OnActorFracture; // 0x410(0x10)
};

// Class Engine.DistanceFieldCapture
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ADistanceFieldCapture : AActor {
	struct U*c2929c4b92* CaptureComponent; // 0x400(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ADocumentationActor : AActor {
	char pad_400[0x8]; // 0x400(0x08)
};

// Class Engine.Emitter
// Size: 0x450 (Inherited: 0x400)  [layout: KHOP]
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x400(0x08)
	char *777a1d1002 : 1; // 0x408(0x01)
	char bPostUpdateTickGroup : 1; // 0x408(0x01)
	char *8175b105a5 : 1; // 0x408(0x01) rep=OnRep_bCurrentlyActive
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x410(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x420(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x430(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x440(0x10)

	void SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter //  // @ game+0xf3e9408
	void *b2f3957572(); // Function Engine.Emitter.*b2f3957572 //  // @ game+0xf3e1d68
	void *1a012be1e8(); // Function Engine.Emitter.*1a012be1e8 //  // @ game+0xf3f23e0
	void Activate(); // Function Engine.Emitter.Activate //  // @ game+0xf3991c8
	void *d050b5427a(); // Function Engine.Emitter.*d050b5427a //  // @ game+0xf3fae80
	void *c5863345d3(); // Function Engine.Emitter.*c5863345d3 //  // @ game+0xf3f8870
	void *3e06c5ba96(); // Function Engine.Emitter.*3e06c5ba96 //  // @ game+0xf3f788c
	void IsActive(); // Function Engine.Emitter.IsActive //  // @ game+0xf3cd0b8
	void *a723a92b9b(); // Function Engine.Emitter.*a723a92b9b //  // @ game+0xf3e7a3c
	void OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished //  // @ game+0xdade00c
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive //  // @ game+0x100d054
	void Deactivate(); // Function Engine.Emitter.Deactivate //  // @ game+0xf3aab60
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4c0 (Inherited: 0x450)  [layout: LECH - offset chi la uoc luong]
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *5ef5540a6f; // 0x450(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x458(0x08)
	struct APlayerCameraManager* *d29e2cad93; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
	struct FTransform RelativeTransform; // 0x470(0x30)
	float *ad0a2b0083; // 0x4a0(0x04)
	char *20d7f962ed : 1; // 0x4a4(0x01)
	char *ce288211a1 : 1; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct TArray<struct UClass*> *d6eb382ae7; // 0x4a8(0x10)
	float DistFromCamera; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AFoliageBlockingVolumeActor : AActor {
	struct U*5f134d9729* FoliageBlockingVolumeComponent; // 0x400(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4e8 (Inherited: 0x4e8)  [layout: KHOP]
struct ADebugCameraHUD : AHUD {
};

// Class Engine.AtmosphericFog
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x400(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x400(0x08)
	char bEnabled : 1; // 0x408(0x01) rep=OnRep_bEnabled
	char pad_409[0x7]; // 0x409(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled //  // @ game+0xdac1ed4
};

// Class Engine.GameNetworkManager
// Size: 0x488 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AGameNetworkManager : AInfo {
	int32 *9b90711832; // 0x400(0x04)
	float *23a7c13190; // 0x404(0x04)
	int32 TotalNetBandwidth; // 0x408(0x04)
	int32 MinDynamicBandwidth; // 0x40c(0x04)
	int32 MaxDynamicBandwidth; // 0x410(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x414(0x01)
	char *c963d883e0 : 1; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float StandbyRxCheatTime; // 0x418(0x04)
	float StandbyTxCheatTime; // 0x41c(0x04)
	int32 BadPingThreshold; // 0x420(0x04)
	float PercentMissingForRxStandby; // 0x424(0x04)
	float PercentMissingForTxStandby; // 0x428(0x04)
	float PercentForBadPing; // 0x42c(0x04)
	float JoinInProgressStandbyWaitTime; // 0x430(0x04)
	float MoveRepSize; // 0x434(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x438(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x43c(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x440(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x444(0x04)
	float MaxMoveDeltaTime; // 0x448(0x04)
	float ClientNetSendMoveDeltaTime; // 0x44c(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x450(0x04)
	int32 ClientNetSendMoveThrottleAtNetSpeed; // 0x454(0x04)
	int32 ClientNetSendMoveThrottleOverPlayerCount; // 0x458(0x04)
	bool ClientAuthorativePosition; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	float ClientErrorUpdateRateLimit; // 0x460(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x464(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x465(0x01)
	char pad_466[0x2]; // 0x466(0x02)
	float MovementTimeDiscrepancyResolutionMinFPS; // 0x468(0x04)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x46c(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x470(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x474(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x478(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x47c(0x01)
	bool bUseDistanceBasedRelevancy; // 0x47d(0x01)
	char pad_47E[0xa]; // 0x47e(0x0a)
};

// Class Engine.SkyLight
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x400(0x08)
	char bEnabled : 1; // 0x408(0x01) rep=OnRep_bEnabled
	char pad_409[0x7]; // 0x409(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled //  // @ game+0xdac1ed4
};

// Class Engine.WindDirectionalSource
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AWindDirectionalSource : AInfo {
	struct U*ba79c90513* Component; // 0x400(0x08)
};

// Class Engine.WorldSettings
// Size: 0x5f0 (Inherited: 0x400)  [layout: KHOP]
struct AWorldSettings : AInfo {
	char pad_400[0x8]; // 0x400(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x408(0x01)
	char bEnableNavigationSystem : 1; // 0x408(0x01)
	char bEnableAISystem : 1; // 0x408(0x01)
	char bEnableWorldComposition : 1; // 0x408(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x408(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x408(0x01)
	char *64fa24b6e3 : 1; // 0x408(0x01)
	char bGlobalGravitySet : 1; // 0x408(0x01)
	char bEnableAsyncScene : 1; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	float KillZ; // 0x40c(0x04)
	struct AInfo* LevelAttribute; // 0x410(0x08)
	struct UClass* KillZDamageType; // 0x418(0x08)
	float *65b11e76fe; // 0x420(0x04) rep=OnRep_WorldGravityZ
	float GlobalGravityZ; // 0x424(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x428(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x430(0x08)
	char bForceIncrementalAABBPruner_Server : 1; // 0x438(0x01)
	char bForceIncrementalAABBPruner_Client : 1; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UClass* DefaultGameMode; // 0x440(0x08)
	struct UClass* *994af5e8c5; // 0x448(0x08)
	int32 *0083eb2052; // 0x450(0x04)
	char *14ed6050db : 1; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FVector DefaultColorScale; // 0x458(0x0c)
	float *c681ffed72; // 0x464(0x04)
	float *8a7e3235c1; // 0x468(0x04)
	float *a225c82d63; // 0x46c(0x04)
	char *841dfc1e34 : 1; // 0x470(0x01)
	char *d5e90550fc : 1; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	int32 *6f5ef03b52; // 0x474(0x04)
	enum class *034d083530 *ee6918d51d; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char *c8096f067a : 1; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x480(0x44)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x4c8(0x18)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x4e0(0x24)
	char pad_504[0x4]; // 0x504(0x04)
	struct USoundMix* *fd6ba294da; // 0x508(0x08)
	float WorldToMeters; // 0x510(0x04)
	float MonoCullingDistance; // 0x514(0x04)
	struct UBookMark* BookMarks[0x0a]; // 0x518(0x50)
	float TimeDilation; // 0x568(0x04)
	float *d688857f44; // 0x56c(0x04)
	float DemoPlayTimeDilation; // 0x570(0x04)
	float MinGlobalTimeDilation; // 0x574(0x04)
	float MaxGlobalTimeDilation; // 0x578(0x04)
	char pad_57C[0x8]; // 0x57c(0x08)
	struct FBox MBPBounds; // 0x584(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	char *9e489705ad : 1; // 0x5a4(0x01)
	char *ded155f998 : 1; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	struct TArray<struct F*656374770c> *9f0881b647; // 0x5a8(0x10)
	struct FMulticastDelegate OnPause; // 0x5b8(0x10)
	struct FMulticastDelegate *ba7344e13c; // 0x5c8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5d8(0x10)
	struct APlayerState* *c42522fd79; // 0x5e8(0x08)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ //  // @ game+0x100d054
	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds //  // @ game+0xdac1ed4
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x438 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x400(0x01)
	bool bUseDynamicInstance; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct UMaterialInterface* SharedMaterial; // 0x408(0x08)
	struct UInstancedDeferredDecalComponent* RootDecalComponent; // 0x410(0x08)
	struct TArray<struct UInstancedDeferredDecalComponent*> decals; // 0x418(0x10)
	char pad_428[0x10]; // 0x428(0x10)

	void *31e30772cc(); // Function Engine.InstancedDeferredDecalActor.*31e30772cc //  // @ game+0xdaf23c4
	void *848d46eec9(); // Function Engine.InstancedDeferredDecalActor.*848d46eec9 //  // @ game+0xf3f8780
	void *5b9890cb52(); // Function Engine.InstancedDeferredDecalActor.*5b9890cb52 //  // @ game+0xdc1336c
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance //  // @ game+0x131c6e4
	void *55ea369a99(); // Function Engine.InstancedDeferredDecalActor.*55ea369a99 //  // @ game+0xf3f87f8
	void *18bf96bc82(); // Function Engine.InstancedDeferredDecalActor.*18bf96bc82 //  // @ game+0xf3cc988
	void *d926354cf9(); // Function Engine.InstancedDeferredDecalActor.*d926354cf9 //  // @ game+0xf3e91f0
	void *52570258f6(); // Function Engine.InstancedDeferredDecalActor.*52570258f6 //  // @ game+0xf39c40c
};

// Class Engine.InstancedMeshActor
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct AInstancedMeshActor : AActor {
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AInstancedSplineDecalActor : AActor {
	struct U*85736e0ff6* InstancedSplineDecalComponent; // 0x400(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*92a8cf5482* LandscapeGizmoComponent; // 0x400(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ALevelBlocksDataActor : AActor {
	struct U*b3c06ea390* LevelBlocksDataComponent; // 0x400(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ALevelBlockSpawnedActor : AActor {
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ALevelBlockSpawnPointActor : AActor {
	struct U*2a9c56f252* SpawnPointComponent; // 0x400(0x08)
};

// Class Engine.LevelBounds
// Size: 0x408 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALevelBounds : AActor {
	bool *026892dc39; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
};

// Class Engine.Light
// Size: 0x410 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x400(0x08)
	char bEnabled : 1; // 0x408(0x01) rep=OnRep_bEnabled
	char pad_409[0x7]; // 0x409(0x07)

	void *be5363c1db(); // Function Engine.Light.*be5363c1db //  // @ game+0xf3c9e64
	void *a5cae4c2e5(); // Function Engine.Light.*a5cae4c2e5 //  // @ game+0xf3e7360
	void *6f34513b9e(); // Function Engine.Light.*6f34513b9e //  // @ game+0xf3c6e6c
	void *9b2ebe0f6d(); // Function Engine.Light.*9b2ebe0f6d //  // @ game+0xf3faf00
	void IsEnabled(); // Function Engine.Light.IsEnabled //  // @ game+0xf3cd4d0
	void *c53b044e35(); // Function Engine.Light.*c53b044e35 //  // @ game+0xf3efa3c
	void *24a0fe928c(); // Function Engine.Light.*24a0fe928c //  // @ game+0xf3e29e8
	void *40818bed8a(); // Function Engine.Light.*40818bed8a //  // @ game+0xf3ef048
	void *506cfbeaa9(); // Function Engine.Light.*506cfbeaa9 //  // @ game+0xf3ee650
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled //  // @ game+0xdac1ed4
	void *2ba16384cd(); // Function Engine.Light.*2ba16384cd //  // @ game+0xf3e9388
	void SetBrightness(); // Function Engine.Light.SetBrightness //  // @ game+0xf3e6874
	void *0b37c6e988(); // Function Engine.Light.*0b37c6e988 //  // @ game+0xf3ef9bc
};

// Class Engine.DirectionalLight
// Size: 0x410 (Inherited: 0x410)  [layout: KHOP]
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x418 (Inherited: 0x410)  [layout: KHOP]
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x410(0x08)

	void SetRadius(); // Function Engine.PointLight.SetRadius //  // @ game+0xf3f6900
	void *2ed9485b52(); // Function Engine.PointLight.*2ed9485b52 //  // @ game+0xf3ee6d4
};

// Class Engine.spotlight
// Size: 0x418 (Inherited: 0x410)  [layout: KHOP]
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x410(0x08)

	void *923f5e59b3(); // Function Engine.spotlight.*923f5e59b3 //  // @ game+0xf3ed140
	void *6d6204b475(); // Function Engine.spotlight.*6d6204b475 //  // @ game+0xf3f3218
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x418 (Inherited: 0x418)  [layout: KHOP]
struct AGeneratedMeshAreaLight : Aspotlight {
};

// Class Engine.LightmassPortal
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ALightmassPortal : AActor {
	struct U*fcbbb1f3e6* PortalComponent; // 0x400(0x08)
};

// Class Engine.*93014dd55a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*93014dd55a : UInterface {
};

// Class Engine.LODActor
// Size: 0x438 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x400(0x08)
	struct TArray<struct AActor*> SubActors; // 0x408(0x10)
	float LODDrawDistance; // 0x418(0x04)
	int32 LODLevel; // 0x41c(0x04)
	struct TArray<struct UObject*> SubObjects; // 0x420(0x10)
	char pad_430[0x8]; // 0x430(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x410 (Inherited: 0x400)  [layout: KHOP]
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x400(0x10)
};

// Class Engine.MatineeActor
// Size: 0x4a8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x400(0x08)
	struct FName *59262b7273; // 0x408(0x08)
	float PlayRate; // 0x410(0x04)
	char bPlayOnLevelLoad : 1; // 0x414(0x01)
	char bForceStartPos : 1; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float ForceStartPosition; // 0x418(0x04)
	char bLooping : 1; // 0x41c(0x01)
	char bRewindOnPlay : 1; // 0x41c(0x01)
	char bNoResetOnRewind : 1; // 0x41c(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x41c(0x01)
	char bDisableRadioFilter : 1; // 0x41c(0x01)
	char bClientSideOnly : 1; // 0x41c(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x41c(0x01)
	char bIsSkippable : 1; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	int32 PreferredSplitScreenNum; // 0x420(0x04)
	char bDisableMovementInput : 1; // 0x424(0x01)
	char bDisableLookAtInput : 1; // 0x424(0x01)
	char bHidePlayer : 1; // 0x424(0x01)
	char bHideHud : 1; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct TArray<struct F*4cf0b2c81d> GroupActorInfos; // 0x428(0x10)
	char *5f312021ae : 1; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct TArray<struct U*2d24224c7d*> *516fb8500c; // 0x440(0x10)
	struct TArray<struct F*f23787fab6> CameraCuts; // 0x450(0x10)
	char bIsPlaying : 1; // 0x460(0x01)
	char *bf55da6d62 : 1; // 0x460(0x01)
	char bPaused : 1; // 0x460(0x01)
	char *5dd0f36c48 : 1; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float InterpPosition; // 0x464(0x04)
	char pad_468[0x4]; // 0x468(0x04)
	bool *116e8bfd5f; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct FMulticastDelegate OnPlay; // 0x470(0x10)
	struct FMulticastDelegate OnStop; // 0x480(0x10)
	struct FMulticastDelegate OnPause; // 0x490(0x10)
	char pad_4A0[0x8]; // 0x4a0(0x08)

	void Stop(); // Function Engine.MatineeActor.Stop //  // @ game+0xdb39b60
	void *01fb2ad92b(); // Function Engine.MatineeActor.*01fb2ad92b //  // @ game+0xf3c2afc
	void SetPosition(); // Function Engine.MatineeActor.SetPosition //  // @ game+0xf3f55c0
	void Reverse(); // Function Engine.MatineeActor.Reverse //  // @ game+0x2f318c
	void *3b7aed675a(); // Function Engine.MatineeActor.*3b7aed675a //  // @ game+0x9d287c
	void *849356ccba(); // Function Engine.MatineeActor.*849356ccba //  // @ game+0xdb42ad0
	void Play(); // Function Engine.MatineeActor.Play //  // @ game+0x100d054
	void Pause(); // Function Engine.MatineeActor.Pause //  // @ game+0xdae4228
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x4b0 (Inherited: 0x4a8)  [layout: KHOP]
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x4a8(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AMinimapLabelActor : AActor {
	struct U*af65b40fa1* MinimapLabelComponent; // 0x400(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AMinimapObjectActor : AActor {
	struct U*df74727e1c* MinimapObjectComponent; // 0x400(0x08)
};

// Class Engine.AbstractNavData
// Size: 0x5a8 (Inherited: 0x5a8)  [layout: KHOP]
struct AAbstractNavData : ANavigationData {
};

// Class Engine.NavigationGraph
// Size: 0x5a8 (Inherited: 0x5a8)  [layout: KHOP]
struct ANavigationGraph : ANavigationData {
};

// Class Engine.NavigationGraphNode
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ANavigationGraphNode : AActor {
};

// Class Engine.PlayerStartPIE
// Size: 0x430 (Inherited: 0x430)  [layout: KHOP]
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.*5e57fc70bc
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*5e57fc70bc : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x510 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ANavigationTestingActor : AActor {
	char pad_400[0x10]; // 0x400(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x410(0x08)
	struct U*0d88eb739a* InvokerComponent; // 0x418(0x08)
	char bActAsNavigationInvoker : 1; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FNavAgentProperties *9aaa5918e2; // 0x428(0x20)
	struct FVector *0c236fa986; // 0x448(0x0c)
	char pad_454[0x4]; // 0x454(0x04)
	struct ANavigationData* *fef528f229; // 0x458(0x08)
	struct FVector ProjectedLocation; // 0x460(0x0c)
	char bProjectedLocationValid : 1; // 0x46c(0x01)
	char *4b50a9c00c : 1; // 0x46c(0x01)
	char *da75032d1e : 1; // 0x46c(0x01)
	char *eb026bad7a : 1; // 0x46c(0x01)
	char *65542154c2 : 1; // 0x46c(0x01)
	char *eba82f4313 : 1; // 0x46c(0x01)
	char *03a5e8be35 : 1; // 0x46c(0x01)
	char *f21bb4f4f9 : 1; // 0x46c(0x01)
	char *e262bbbad8 : 1; // 0x46d(0x01)
	char pad_46E[0x2]; // 0x46e(0x02)
	enum class *4b423a681b *fad27e6792; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	struct FVector2D *e9c04d5e04; // 0x474(0x08)
	char bPathExist : 1; // 0x47c(0x01)
	char bPathIsPartial : 1; // 0x47c(0x01)
	char bPathSearchOutOfNodes : 1; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	float PathfindingTime; // 0x480(0x04)
	float PathCost; // 0x484(0x04)
	int32 PathfindingSteps; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x490(0x08)
	struct UClass* *5e10cae0a4; // 0x498(0x08)
	int32 *8cc0f05309; // 0x4a0(0x04)
	float *999ecbc4d9; // 0x4a4(0x04)
	char pad_4A8[0x68]; // 0x4a8(0x68)
};

// Class Engine.*9789587bf2
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*9789587bf2 : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x30(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Engine.*12381b0499
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*12381b0499 : UInterface {
};

// Class Engine.Note
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ANote : AActor {
};

// Class Engine.OutdoorGIDataComponent
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct UOutdoorGIDataComponent : UActorComponent {
};

// Class Engine.*b5b8656c01
// Size: 0x5b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*b5b8656c01 : USceneComponent {
	struct ALandscape* *e2e5618aef; // 0x478(0x1c)
	struct FVector2D Extents; // 0x494(0x08)
	struct FVector2D *56f6d2857a; // 0x49c(0x08)
	struct FVector2D *d3d1e84c13; // 0x4a4(0x08)
	float GridSpacing; // 0x4ac(0x04)
	float FadeDistance; // 0x4b0(0x04)
	float Brightness; // 0x4b4(0x04)
	int32 Priority; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct TArray<struct F*3f6d404c8d> HeightSamples; // 0x4c0(0x10)
	float BottomFadeStart; // 0x4d0(0x04)
	float BottomFadeSize; // 0x4d4(0x04)
	float TopFadeStart; // 0x4d8(0x04)
	float TopFadeSize; // 0x4dc(0x04)
	char pad_4E0[0x18]; // 0x4e0(0x18)
	struct UTexture2D* HeightmapTexture; // 0x4f8(0x08)
	struct UTexture2DArray* ColorTexture; // 0x500(0x08)
	struct UTexture2DArray* SkyVisibilityTexture; // 0x508(0x08)
	char pad_510[0xa0]; // 0x510(0xa0)

	void *89b8e0e6cf(); // Function Engine.*b5b8656c01.*89b8e0e6cf //  // @ game+0x1053c04
	void *49012e84f4(); // Function Engine.*b5b8656c01.*49012e84f4 //  // @ game+0x1053c04
	void *67e8e7124a(); // Function Engine.*b5b8656c01.*67e8e7124a //  // @ game+0x1053c04
	void *691f975fa8(); // Function Engine.*b5b8656c01.*691f975fa8 //  // @ game+0x1053c04
};

// Class Engine.OutdoorGIVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AOutdoorGIVolume : AActor {
	struct U*b5b8656c01* VolumeComponent; // 0x400(0x08)
};

// Class Engine.ParticleSystem
// Size: 0x140 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UParticleSystem : UObject {
	enum class *13f471c754 *1bde8fedf0; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UpdateTime_FPS; // 0x34(0x04)
	float *540677755f; // 0x38(0x04)
	float WarmupTime; // 0x3c(0x04)
	float *b0d4ac43bb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x48(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x58(0x08)
	struct UInterpCurveEdSetup* *e2227b0118; // 0x60(0x08)
	char *350a9efe83 : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float *6b0833ba30; // 0x6c(0x04)
	enum class *9e910afe84 LODMethod; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<float> *74cd5ee7c7; // 0x78(0x10)
	char *ad2b478a5f : 1; // 0x88(0x01)
	char *c3bde51612 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*220fa46d54> LODSettings; // 0x90(0x10)
	char *92d18bc6ab : 1; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FBox *aba5c14dff; // 0xa4(0x1c)
	float *9643fa30cd; // 0xc0(0x04)
	char *3d76921fdd : 1; // 0xc4(0x01)
	char *18510c5d23 : 1; // 0xc4(0x01)
	char *5b871e0df8 : 1; // 0xc4(0x01)
	char *ba1c51070e : 1; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float Delay; // 0xc8(0x04)
	float *a546bfe2fe; // 0xcc(0x04)
	char *cd932ba5ba : 1; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	bool *c15f5f1dec; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	uint32 *919ef67e6c; // 0xd8(0x04)
	enum class EParticleSystemInsignificanceReaction *d561b8652b; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float *89b7adfea7; // 0xe0(0x04)
	enum class EParticleSignificanceLevel *3496eb2f06; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FVector MacroUVPosition; // 0xe8(0x0c)
	float MacroUVRadius; // 0xf4(0x04)
	enum class *42163a0557 *4518f7091d; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FBox *783c0e56de; // 0xfc(0x1c)
	struct TArray<struct F*9c3e70fc9a> *4b9d90b136; // 0x118(0x10)
	struct TArray<struct F*e81d7f5e3d> *ddb2fd58da; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	void *5ca63ee6ee(); // Function Engine.ParticleSystem.*5ca63ee6ee //  // @ game+0xf3aa74c
};

// Class Engine.SkeletalMesh
// Size: 0x308 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USkeletalMesh : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct USkeleton* Skeleton; // 0x50(0x08)
	struct FBoxSphereBounds *9961bc5cc6; // 0x58(0x1c)
	struct FBoxSphereBounds *d46a58b3d2; // 0x74(0x1c)
	struct FVector PositiveBoundsExtension; // 0x90(0x0c)
	struct FVector NegativeBoundsExtension; // 0x9c(0x0c)
	struct TArray<struct F*a6dee56ca4> Materials; // 0xa8(0x10)
	struct TArray<struct F*d677f83bf9> *f7f901899a; // 0xb8(0x10)
	enum class EAxis *23e3876d21; // 0xc8(0x01)
	enum class EAxis *56643804f8; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xd0(0x10)
	char bUseFullPrecisionUVs : 1; // 0xe0(0x01)
	char *d86cbe0fe5 : 1; // 0xe0(0x01)
	char *390a9a5bcc : 1; // 0xe0(0x01)
	char bEnablePerPolyCollision : 1; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UBodySetup* BodySetup; // 0xe8(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xf0(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0xf8(0x08)
	struct TArray<struct U*06901b2a67*> NodeMappingData; // 0x100(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x110(0x10)
	char pad_120[0x168]; // 0x120(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets; // 0x288(0x10)
	struct UClass* PostProcessAnimBlueprint; // 0x298(0x08)
	struct TArray<struct U*8679333388*> MeshClothingAssets; // 0x2a0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x2c8(0x10)
	char pad_2D8[0x18]; // 0x2d8(0x18)
	struct TArray<struct F*cbb0ac9ea1> *88b30922b4; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)

	void *b7e7d71c65(); // Function Engine.SkeletalMesh.*b7e7d71c65 //  // @ game+0xf3c9154
	void *182026e585(); // Function Engine.SkeletalMesh.*182026e585 //  // @ game+0xf3ce560
	void *a73086d956(); // Function Engine.SkeletalMesh.*a73086d956 //  // @ game+0xf3c4c54
	void *563879d365(); // Function Engine.SkeletalMesh.*563879d365 //  // @ game+0xf3ca5ec
	void *4fdb4d5fc9(); // Function Engine.SkeletalMesh.*4fdb4d5fc9 //  // @ game+0xf3d67e0
	void *edf0c61a79(); // Function Engine.SkeletalMesh.*edf0c61a79 //  // @ game+0xf3cb878
	void *c6f5fcc286(); // Function Engine.SkeletalMesh.*c6f5fcc286 //  // @ game+0xf3c6e08
	void *66c41e39f9(); // Function Engine.SkeletalMesh.*66c41e39f9 //  // @ game+0xf3c4b58
};

// Class Engine.AnimationAsset
// Size: 0x80 (Inherited: 0x30)  [layout: KHOP]
struct UAnimationAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* Skeleton; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
	struct TArray<struct U*b12630f5a4*> MetaData; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x400(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCapture
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.SphereReflectionCapture
// Size: 0x410 (Inherited: 0x408)  [layout: KHOP]
struct ASphereReflectionCapture : AReflectionCapture {
	struct U*bdf092b520* *3cb1ab2297; // 0x408(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x400 (Inherited: 0x400)  [layout: KHOP]
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x420 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x400(0x08)
	struct AActor* ConstraintActor1; // 0x408(0x08)
	struct AActor* ConstraintActor2; // 0x410(0x08)
	char bDisableCollision : 1; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x400(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x400(0x08)

	void *f1fea09508(); // Function Engine.RadialForceActor.*f1fea09508 //  // @ game+0x100d054
	void *d61ee48275(); // Function Engine.RadialForceActor.*d61ee48275 //  // @ game+0xdac1ed4
	void *88e8cc0ee0(); // Function Engine.RadialForceActor.*88e8cc0ee0 //  // @ game+0x2f318c
	void *2f2198d9d0(); // Function Engine.RadialForceActor.*2f2198d9d0 //  // @ game+0xdb39b60
};

// Class Engine.PlanarReflection
// Size: 0x418 (Inherited: 0x408)  [layout: LECH - offset chi la uoc luong]
struct APlanarReflection : ASceneCapture {
	struct U*0a1c7444f9* PlanarReflectionComponent; // 0x408(0x08)
	bool *cfd4305ac2; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)

	void OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle //  // @ game+0xf3d68bc
};

// Class Engine.SceneCaptureCube
// Size: 0x418 (Inherited: 0x408)  [layout: KHOP]
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x408(0x08)
	struct U*66475761fb* *afc42febd0; // 0x410(0x08)

	void OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle //  // @ game+0xf3d68bc
};

// Class Engine.*ef68951220
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ef68951220 : UInterface {
};

// Class Engine.*f2bad73143
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*f2bad73143 : UObject {
	struct AActor* Owner; // 0x30(0x08)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.EngineExtChunkedProxyActor
// Size: 0x490 (Inherited: 0x488)  [layout: KHOP]
struct AEngineExtChunkedProxyActor : ASkeletalMeshActor {
	struct U*f2bad73143* *ed25def95e; // 0x488(0x08)
};

// Class Engine.SplineDecalActor
// Size: 0x510 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ASplineDecalActor : AActor {
	struct USplineComponent* SplineComponent; // 0x400(0x08)
	enum class ESplineDecalActorSelector *13a3b6aeea; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UMaterialInterface* *150454c73e[0x04]; // 0x410(0x20)
	struct F*640934f3ac *845d6bdedc; // 0x430(0x2c)
	enum class ESplineDecalActorSelector *a17da934a3; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct UMaterialInterface* *c68c26eb11[0x04]; // 0x460(0x20)
	struct F*640934f3ac *3962655ebd; // 0x480(0x2c)
	enum class *197f0577eb *8825aaf4af; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	float *38a3018be1; // 0x4b0(0x04)
	float *53378c0445; // 0x4b4(0x04)
	struct FRandomStream *d9f4cdf1e8; // 0x4b8(0x08)
	struct UMaterialInterface* *feded09e63[0x04]; // 0x4c0(0x20)
	struct F*640934f3ac *ff63412373; // 0x4e0(0x2c)
	char pad_50C[0x4]; // 0x50c(0x04)

	void *9db51e02c6(); // Function Engine.SplineDecalActor.*9db51e02c6 //  // @ game+0xdb421c8
	void Update(); // Function Engine.SplineDecalActor.Update //  // @ game+0xf3fba50
};

// Class Engine.SplineMeshActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x400(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x4e0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh; // 0x478(0x08)
	float FogModulation; // 0x480(0x04)
	char pad_484[0x5c]; // 0x484(0x5c)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x4c0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x478(0x10)
	struct TArray<struct F*61a6c3f3b6> *5fed273437; // 0x488(0x10)
	char pad_498[0x28]; // 0x498(0x28)
};

// Class Engine.StaticMeshIndoorVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AStaticMeshIndoorVolume : AActor {
	struct UStaticMeshIndoorVolumeComponent* VolumeComponent; // 0x400(0x08)
};

// Class Engine.TextRenderActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x400(0x08)
};

// Class Engine.TriggerCapsule
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x408 (Inherited: 0x408)  [layout: KHOP]
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.VectorFieldVolume
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x400(0x08)
};

// Class Engine.WindPropertiesActor
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct AWindPropertiesActor : AActor {
	struct U*4d50a149b3* WindPropertiesComponent; // 0x400(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x260 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x208(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x218(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x228(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x238(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class Engine.HLODContainerComponent
// Size: 0x2a0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UHLODContainerComponent : UActorComponent {
	struct TArray<struct F*9b45cfa5ad> *dc89ca964c; // 0x208(0x10)
	char pad_218[0x88]; // 0x218(0x88)
};

// Class Engine.LevelBlocksData
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct ULevelBlocksData : UObject {
	struct TArray<struct U*002e0cdee0*> *d3a4660800; // 0x30(0x10)
};

// Class Engine.*b3c06ea390
// Size: 0x2d0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*b3c06ea390 : UActorComponent {
	struct ULevelBlocksData* LevelBlocksData; // 0x210(0x08)
	char pad_218[0x18]; // 0x218(0x18)
	int32 RandomSeed; // 0x230(0x04) rep=OnRep_RandomSeed
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct AActor*> *246711f5d2; // 0x238(0x10)
	char pad_248[0x88]; // 0x248(0x88)

	void OnRep_RandomSeed(); // Function Engine.*b3c06ea390.OnRep_RandomSeed //  // @ game+0xf3d6990
	void OnKillcamLoadingFinished(); // Function Engine.*b3c06ea390.OnKillcamLoadingFinished //  // @ game+0xf3d6940
};

// Class Engine.*e1affe4a82
// Size: 0x2f0 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct U*e1affe4a82 : UMovementComponent {
	float Duration; // 0x250(0x04)
	char bPauseOnImpact : 1; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	enum class *52922ace24 BehaviourType; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	char bForceSubStepping : 1; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FMulticastDelegate OnInterpToReverse; // 0x260(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x270(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x280(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x290(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x2a0(0x10)
	float MaxSimulationTimeStep; // 0x2b0(0x04)
	int32 MaxSimulationIterations; // 0x2b4(0x04)
	struct TArray<struct F*227d7489e2> ControlPoints; // 0x2b8(0x10)
	char pad_2C8[0x28]; // 0x2c8(0x28)

	void OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*e1affe4a82.OnInterpToStopDelegate__DelegateSignature //  // @ game+0x43bab4
	void *81e724d08f(); // Function Engine.*e1affe4a82.*81e724d08f //  // @ game+0xf3c4ab4
	void OnInterpToResetDelegate__DelegateSignature(); // DelegateFunction Engine.*e1affe4a82.OnInterpToResetDelegate__DelegateSignature //  // @ game+0x43bab4
	void OnInterpToWaitBeginDelegate__DelegateSignature(); // DelegateFunction Engine.*e1affe4a82.OnInterpToWaitBeginDelegate__DelegateSignature //  // @ game+0x43bab4
	void StopSimulating(); // Function Engine.*e1affe4a82.StopSimulating //  // @ game+0xf3fac5c
	void *2781f0a198(); // Function Engine.*e1affe4a82.*2781f0a198 //  // @ game+0xf3db3a4
	void OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*e1affe4a82.OnInterpToReverseDelegate__DelegateSignature //  // @ game+0x43bab4
	void OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*e1affe4a82.OnInterpToWaitEndDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class Engine.AssetUserData
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x30)  [layout: KHOP]
struct USkeleton : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*9f627d5e11> *e50ae78e03; // 0x38(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x48(0x10)
	char pad_58[0x110]; // 0x58(0x110)
	struct FGuid *8503f33b0b; // 0x168(0x10)
	struct TArray<struct F*fe03e7f5e9> *2d7abac45d; // 0x178(0x10)
	struct TArray<struct F*26c71918cf> *0eb594737d; // 0x188(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x198(0x10)
	char pad_1A8[0x50]; // 0x1a8(0x50)
	struct F*5ee266f5bc *a7b9128093; // 0x1f8(0x50)
	char pad_248[0x18]; // 0x248(0x18)
	struct TArray<struct UBlendProfile*> *232baad251; // 0x260(0x10)
	struct TArray<struct F*66eacc6092> *9bf04a74d9; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa8 (Inherited: 0x80)  [layout: KHOP]
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x80(0x10)
	float SequenceLength; // 0x90(0x04)
	float *e12abf55ab; // 0x94(0x04)
	struct FRawCurveTracks *40ef2af578; // 0x98(0x10)

	void *733025e344(); // Function Engine.AnimSequenceBase.*733025e344 //  // @ game+0xf46a4fc
};

// Class Engine.*c61e7fd52f
// Size: 0xa8 (Inherited: 0xa8)  [layout: KHOP]
struct U*c61e7fd52f : UAnimSequenceBase {
};

// Class Engine.AnimMontage
// Size: 0x1b0 (Inherited: 0xa8)  [layout: KHOP]
struct UAnimMontage : U*c61e7fd52f {
	struct FAlphaBlend *ea3af5710a; // 0xa8(0x38)
	float BlendInTime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FAlphaBlend *bfa1d67436; // 0xe8(0x38)
	float BlendOutTime; // 0x120(0x04)
	float *8fac154af5; // 0x124(0x04)
	struct FName SyncGroup; // 0x128(0x08)
	int32 *c5e972d030; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct F*08f1054f8e *6da94575cd; // 0x138(0x20)
	struct TArray<struct F*81528e359c> *0a8f2e1ffd; // 0x158(0x10)
	struct TArray<struct F*af5cb241fb> *421dacab7d; // 0x168(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x178(0x10)
	bool *f42382384a; // 0x188(0x01)
	bool *87c68e6990; // 0x189(0x01)
	enum class ERootMotionRootLock *416ef36296; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	struct TArray<struct F*3376578abf> *665919c90b; // 0x190(0x10)
	struct TArray<int32> *89141f2914; // 0x1a0(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature //  // @ game+0x43bab4
};

// Class Engine.*b97dfed3a2
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b97dfed3a2 : UInterface {
};

// Class Engine.*2b0b7dc1e7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*2b0b7dc1e7 : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x270 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x250(0x0c)
	struct FVector PivotTranslation; // 0x25c(0x0c)
	char bRotationInLocalSpace : 1; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class Engine.*0d88eb739a
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct U*0d88eb739a : UActorComponent {
	float *3b2f2873e2; // 0x208(0x04)
	float *d8f54bc5f7; // 0x20c(0x04)
};

// Class Engine.*3033fc1509
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*3033fc1509 : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x350 (Inherited: 0x240)  [layout: LECH - offset chi la uoc luong]
struct UNavLinkCustomComponent : U*3af65f2d8c {
	uint32 *c8d8fd3407; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UClass* *81bc1eece6; // 0x248(0x08)
	struct UClass* *aff3023ddc; // 0x250(0x08)
	struct FVector *40fee13638; // 0x258(0x0c)
	struct FVector *db182276d6; // 0x264(0x0c)
	enum class ENavLinkDirection *5bb2c5de50; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	char *b7e25d4adf : 1; // 0x274(0x01)
	char *3dd89a7593 : 1; // 0x274(0x01)
	char *3e3a41ac41 : 1; // 0x274(0x01)
	char *fd775b55a3 : 1; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FVector *cc9490d469; // 0x278(0x0c)
	struct FVector *166fdf46c0; // 0x284(0x0c)
	struct UClass* *746edde9d2; // 0x290(0x08)
	float *00b8522c21; // 0x298(0x04)
	float *ae982118f7; // 0x29c(0x04)
	enum class ECollisionChannel *e4fc7f7073; // 0x2a0(0x01)
	char pad_2A1[0xaf]; // 0x2a1(0xaf)
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *b0c3e2143e : 1; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	struct FVector *171b4992e1; // 0x20c(0x0c)
	float NoiseLifetime; // 0x218(0x04)
	float *d1832d65df; // 0x21c(0x04)
	float *62656aec96; // 0x220(0x04)
	float *425e6f299d; // 0x224(0x04)
	float *60b75fc52e; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)

	void MakeNoise(); // Function Engine.PawnNoiseEmitterComponent.MakeNoise //  // @ game+0xf48eff0
};

// Class Engine.PhysicalAnimationComponent
// Size: 0x280 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0x208(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x210(0x08)
	char pad_218[0x68]; // 0x218(0x68)

	void *f080a32381(); // Function Engine.PhysicalAnimationComponent.*f080a32381 //  // @ game+0xf40c70c
	void *50fabe3f58(); // Function Engine.PhysicalAnimationComponent.*50fabe3f58 //  // @ game+0xf516090
	void *89d759bef6(); // Function Engine.PhysicalAnimationComponent.*89d759bef6 //  // @ game+0xf40c5d0
	void *a96ad39ed6(); // Function Engine.PhysicalAnimationComponent.*a96ad39ed6 //  // @ game+0xf40c7e8
	void *853292353c(); // Function Engine.PhysicalAnimationComponent.*853292353c //  // @ game+0xf50e8a0
	void *05e268bde0(); // Function Engine.PhysicalAnimationComponent.*05e268bde0 //  // @ game+0xf460798
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2b0 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *9d63edaab0; // 0x208(0x08)
	char pad_210[0xc]; // 0x210(0x0c)
	char pad_21C_0 : 1; // 0x21c(0x01)
	char bSoftAngularConstraint : 1; // 0x21c(0x01)
	char bSoftLinearConstraint : 1; // 0x21c(0x01)
	char bInterpolateTarget : 1; // 0x21c(0x01)
	char pad_21D[0x3]; // 0x21d(0x03)
	float LinearDamping; // 0x220(0x04)
	float LinearStiffness; // 0x224(0x04)
	float AngularDamping; // 0x228(0x04)
	float AngularStiffness; // 0x22c(0x04)
	char pad_230[0x60]; // 0x230(0x60)
	float InterpolationSpeed; // 0x290(0x04)
	char pad_294[0x1c]; // 0x294(0x1c)

	void *f327d5d7ed(); // Function Engine.PhysicsHandleComponent.*f327d5d7ed //  // @ game+0xf517990
	void *de50ce0e2a(); // Function Engine.PhysicsHandleComponent.*de50ce0e2a //  // @ game+0xf4c8938
	void *124658ab19(); // Function Engine.PhysicsHandleComponent.*124658ab19 //  // @ game+0xf464cc8
	void *fd4cbfab1b(); // Function Engine.PhysicsHandleComponent.*fd4cbfab1b //  // @ game+0xf4f5ab0
	void *70839f0499(); // Function Engine.PhysicsHandleComponent.*70839f0499 //  // @ game+0xf47b74c
	void *177f7464ea(); // Function Engine.PhysicsHandleComponent.*177f7464ea //  // @ game+0xf4fabc4
	void *b61cd8d3b6(); // Function Engine.PhysicsHandleComponent.*b61cd8d3b6 //  // @ game+0xf4f8568
	void *bf049e0b65(); // Function Engine.PhysicsHandleComponent.*bf049e0b65 //  // @ game+0xf4c46dc
	void *54c0ba8cf0(); // Function Engine.PhysicsHandleComponent.*54c0ba8cf0 //  // @ game+0xf517a1c
	void *d2f9bd6923(); // Function Engine.PhysicsHandleComponent.*d2f9bd6923 //  // @ game+0xf47b4f8
	void *b8f96c8a94(); // Function Engine.PhysicsHandleComponent.*b8f96c8a94 //  // @ game+0xf47b634
	void *be0a5cf1e7(); // Function Engine.PhysicsHandleComponent.*be0a5cf1e7 //  // @ game+0x124a490
	void *154d06b63a(); // Function Engine.PhysicsHandleComponent.*154d06b63a //  // @ game+0xf472b98
	void *c0ef78caa1(); // Function Engine.PhysicsHandleComponent.*c0ef78caa1 //  // @ game+0xf517af4
};

// Class Engine.*765ce1deea
// Size: 0x230 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*765ce1deea : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0x208(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)

	void *02ef38258f(); // Function Engine.*765ce1deea.*02ef38258f //  // @ game+0xf480b54
	void *b661ca27db(); // Function Engine.*765ce1deea.*b661ca27db //  // @ game+0xf480b28
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*765ce1deea.PlatformEventDelegate__DelegateSignature //  // @ game+0x43bab4
	void *d55cbc1780(); // Function Engine.*765ce1deea.*d55cbc1780 //  // @ game+0xf5439a0
};

// Class Engine.AtmosphericFogComponent
// Size: 0x6a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x478(0x04)
	float FogMultiplier; // 0x47c(0x04)
	float DensityMultiplier; // 0x480(0x04)
	float DensityOffset; // 0x484(0x04)
	float DistanceScale; // 0x488(0x04)
	float AltitudeScale; // 0x48c(0x04)
	float DistanceOffset; // 0x490(0x04)
	float GroundOffset; // 0x494(0x04)
	float StartDistance; // 0x498(0x04)
	float SunDiscScale; // 0x49c(0x04)
	struct TArray<struct F*54a14e1c59> HeightDensityLayers; // 0x4a0(0x10)
	float DefaultBrightness; // 0x4b0(0x04)
	struct FColor DefaultLightColor; // 0x4b4(0x04)
	char bDisableSunDisk : 1; // 0x4b8(0x01)
	char bDisableGroundScattering : 1; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct F*f5b4284c60 PrecomputeParams; // 0x4bc(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x4e8(0x08)
	struct UTexture2D* IrradianceTexture; // 0x4f0(0x08)
	char pad_4F8[0x1a8]; // 0x4f8(0x1a8)

	void SetDensityOffset(); // Function Engine.AtmosphericFogComponent.SetDensityOffset //  // @ game+0xf4dad58
	void *d0810195a8(); // Function Engine.AtmosphericFogComponent.*d0810195a8 //  // @ game+0xf50b244
	void SetDensityMultiplier(); // Function Engine.AtmosphericFogComponent.SetDensityMultiplier //  // @ game+0xf4da3e4
	void *e78495b866(); // Function Engine.AtmosphericFogComponent.*e78495b866 //  // @ game+0x1053c04
	void SetSunMultiplier(); // Function Engine.AtmosphericFogComponent.SetSunMultiplier //  // @ game+0x10996d8
	void *7d24c64b59(); // Function Engine.AtmosphericFogComponent.*7d24c64b59 //  // @ game+0xf4418a0
	void SetDistanceOffset(); // Function Engine.AtmosphericFogComponent.SetDistanceOffset //  // @ game+0xf4dcb64
	void *39021544a7(); // Function Engine.AtmosphericFogComponent.*39021544a7 //  // @ game+0xf441804
	void SetAltitudeScale(); // Function Engine.AtmosphericFogComponent.SetAltitudeScale //  // @ game+0xf4c3d68
	void SetDefaultBrightness(); // Function Engine.AtmosphericFogComponent.SetDefaultBrightness //  // @ game+0xf4d9900
	void SetDefaultLightColor(); // Function Engine.AtmosphericFogComponent.SetDefaultLightColor //  // @ game+0xf4da274
	void SetFogMultiplier(); // Function Engine.AtmosphericFogComponent.SetFogMultiplier //  // @ game+0xf4e8a24
	void SetStartDistance(); // Function Engine.AtmosphericFogComponent.SetStartDistance //  // @ game+0xf5136c0
	void SetDistanceScale(); // Function Engine.AtmosphericFogComponent.SetDistanceScale //  // @ game+0xf4dd4d8
};

// Class Engine.*dd520cbffb
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*dd520cbffb : UObject {
};

// Class Engine.*01657e5459
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*01657e5459 : UObject {
};

// Class Engine.*d1e79edce7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*d1e79edce7 : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x160 (Inherited: 0x30)  [layout: KHOP]
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x30(0x130)
};

// Class Engine.AudioComponent
// Size: 0x750 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x478(0x08)
	struct TArray<struct F*bdd8401f5f> InstanceParameters; // 0x480(0x10)
	struct USoundClass* *031ccb5371; // 0x490(0x08)
	char *5161b69f6a : 1; // 0x498(0x01)
	char *356eb9e97a : 1; // 0x498(0x01)
	char *be403eec99 : 1; // 0x498(0x01)
	char bAllowSpatialization : 1; // 0x498(0x01)
	char bOverrideAttenuation : 1; // 0x498(0x01)
	char pad_499[0x3]; // 0x499(0x03)
	char bOverrideSubtitlePriority : 1; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	char bIsUISound : 1; // 0x4a0(0x01)
	char bEnableLowPassFilter : 1; // 0x4a0(0x01)
	char bOverridePriority : 1; // 0x4a0(0x01)
	char bSuppressSubtitles : 1; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FName *c6f9544c2a; // 0x4a8(0x08)
	float PitchModulationMin; // 0x4b0(0x04)
	float PitchModulationMax; // 0x4b4(0x04)
	float VolumeModulationMin; // 0x4b8(0x04)
	float VolumeModulationMax; // 0x4bc(0x04)
	float VolumeMultiplier; // 0x4c0(0x04)
	float Priority; // 0x4c4(0x04)
	float SubtitlePriority; // 0x4c8(0x04)
	float VolumeWeightedPriorityScale; // 0x4cc(0x04)
	float PitchMultiplier; // 0x4d0(0x04)
	float HighFrequencyGainMultiplier; // 0x4d4(0x04)
	float LowPassFilterFrequency; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x4e0(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4e8(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x618(0x08)
	char pad_620[0x8]; // 0x620(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x628(0x10)
	char pad_638[0x78]; // 0x638(0x78)
	struct FMulticastDelegate OnAudioPlaybackPercent; // 0x6b0(0x10)
	char pad_6C0[0x70]; // 0x6c0(0x70)
	DelegateProperty *f2d01e95e0; // 0x730(0x10)
	char pad_740[0x10]; // 0x740(0x10)

	void SetBoolParameter(); // Function Engine.AudioComponent.SetBoolParameter //  // @ game+0xf4cf388
	void *b096c37a80(); // Function Engine.AudioComponent.*b096c37a80 //  // @ game+0xf516be4
	void *78652161cf(); // Function Engine.AudioComponent.*78652161cf //  // @ game+0xf504624
	void Stop(); // Function Engine.AudioComponent.Stop //  // @ game+0xdaca1f4
	void FadeOut(); // Function Engine.AudioComponent.FadeOut //  // @ game+0xf454d50
	void SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier //  // @ game+0xf5050d4
	void SetWaveParameter(); // Function Engine.AudioComponent.SetWaveParameter //  // @ game+0xf5204a4
	void AdjustVolume(); // Function Engine.AudioComponent.AdjustVolume //  // @ game+0xf40a654
	void SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier //  // @ game+0xf51b784
	void AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation //  // @ game+0xf40a488
	void *8425a4601b(); // Function Engine.AudioComponent.*8425a4601b //  // @ game+0xf454344
	void IsPlaying(); // Function Engine.AudioComponent.IsPlaying //  // @ game+0xf3cde88
	void *2095923289(); // Function Engine.AudioComponent.*2095923289 //  // @ game+0xf50eb58
	void SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter //  // @ game+0xf4f3b34
	void *156f65193c(); // Function Engine.AudioComponent.*156f65193c //  // @ game+0xf519518
	void *14ef1637e9(); // Function Engine.AudioComponent.*14ef1637e9 //  // @ game+0xf416560
	void SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter //  // @ game+0xf4e59b8
	void Play(); // Function Engine.AudioComponent.Play //  // @ game+0xf4a1524
};

// Class Engine.DecalComponent
// Size: 0x500 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x478(0x08)
	int32 SortOrder; // 0x480(0x04)
	float FadeScreenSize; // 0x484(0x04)
	float FadeStartDelay; // 0x488(0x04)
	float FadeDuration; // 0x48c(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x490(0x01)
	struct F*c1d67ea7ec DecalChannels; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	struct FVector DecalSize; // 0x494(0x0c)
	float NormalFadeStart; // 0x4a0(0x04)
	float NormalFadeEnd; // 0x4a4(0x04)
	char pad_4A8[0x58]; // 0x4a8(0x58)

	void *2ca964d9c4(); // Function Engine.DecalComponent.*2ca964d9c4 //  // @ game+0xf4647f8
	void *964c417b78(); // Function Engine.DecalComponent.*964c417b78 //  // @ game+0xf50ead8
	void *d926354cf9(); // Function Engine.DecalComponent.*d926354cf9 //  // @ game+0xf4d9800
	void *09950bf0e7(); // Function Engine.DecalComponent.*09950bf0e7 //  // @ game+0xf464810
	void *2f5534dc8b(); // Function Engine.DecalComponent.*2f5534dc8b //  // @ game+0xf4e3d14
	void *31e30772cc(); // Function Engine.DecalComponent.*31e30772cc //  // @ game+0xe49ca64
	void CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance //  // @ game+0xf439aac
};

// Class Engine.*c2929c4b92
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct U*c2929c4b92 : USceneComponent {
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x540 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x478(0x04)
	struct FLinearColor FogInscatteringColor; // 0x47c(0x10)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct TArray<struct F*6722b19ab7> HeightDensityLayers; // 0x490(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x4a0(0x08)
	float InscatteringColorCubemapAngle; // 0x4a8(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x4ac(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x4bc(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x4c0(0x04)
	float DirectionalInscatteringExponent; // 0x4c4(0x04)
	float DirectionalInscatteringStartDistance; // 0x4c8(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x4cc(0x10)
	float FogHeightFalloff; // 0x4dc(0x04)
	float FogMaxOpacity; // 0x4e0(0x04)
	float StartDistance; // 0x4e4(0x04)
	float FogCutoffDistance; // 0x4e8(0x04)
	bool bEnableVolumetricFog; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	float VolumetricFogScatteringDistribution; // 0x4f0(0x04)
	struct FColor VolumetricFogAlbedo; // 0x4f4(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x4f8(0x10)
	float VolumetricFogExtinctionScale; // 0x508(0x04)
	float VolumetricFogDistance; // 0x50c(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x510(0x01)
	bool bUseExtendedFog; // 0x511(0x01)
	char pad_512[0x2]; // 0x512(0x02)
	float ExtendedFogStartDistance; // 0x514(0x04)
	float ExtendedFogStartFalloffDistance; // 0x518(0x04)
	float ExtendedHeight; // 0x51c(0x04)
	float ExtendedFallOff; // 0x520(0x04)
	float ExtendedFogDensity; // 0x524(0x04)
	float UpDensity; // 0x528(0x04)
	float DownDensity; // 0x52c(0x04)
	float Intensity; // 0x530(0x04)
	bool bUseAtmosphereScattering; // 0x534(0x01)
	char pad_535[0xb]; // 0x535(0x0b)

	void SetFogHeightFalloff(); // Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff //  // @ game+0xf4e76bc
	void SetExtendedFogStartDistance(); // Function Engine.ExponentialHeightFogComponent.SetExtendedFogStartDistance //  // @ game+0xf4e1744
	void SetDirectionalInscatteringColor(); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor //  // @ game+0xf4db748
	void SetDirectionalInscatteringExponent(); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent //  // @ game+0xf4db7c8
	void *e2f07ecf5d(); // Function Engine.ExponentialHeightFogComponent.*e2f07ecf5d //  // @ game+0xf4f2fb8
	void SetExtendedFogStartFalloffDistance(); // Function Engine.ExponentialHeightFogComponent.SetExtendedFogStartFalloffDistance //  // @ game+0xf4e20b8
	void *5f27563cb7(); // Function Engine.ExponentialHeightFogComponent.*5f27563cb7 //  // @ game+0xf50096c
	void SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity //  // @ game+0xf4f3cd4
	void *a8a2588716(); // Function Engine.ExponentialHeightFogComponent.*a8a2588716 //  // @ game+0xf4e6d48
	void *448641aabd(); // Function Engine.ExponentialHeightFogComponent.*448641aabd //  // @ game+0xf51c174
	void SetFogDensity(); // Function Engine.ExponentialHeightFogComponent.SetFogDensity //  // @ game+0x10996d8
	void *1ed60c7351(); // Function Engine.ExponentialHeightFogComponent.*1ed60c7351 //  // @ game+0xf51c0f8
	void *ed8475ddd9(); // Function Engine.ExponentialHeightFogComponent.*ed8475ddd9 //  // @ game+0xf4f39b8
	void SetFogMaxOpacity(); // Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity //  // @ game+0xf4e80b0
	void SetDirectionalInscatteringStartDistance(); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance //  // @ game+0xf4dc13c
	void *fd6a545f84(); // Function Engine.ExponentialHeightFogComponent.*fd6a545f84 //  // @ game+0xf4e96a4
	void *a68e3a863e(); // Function Engine.ExponentialHeightFogComponent.*a68e3a863e //  // @ game+0xf51c1f8
	void *f622437c0a(); // Function Engine.ExponentialHeightFogComponent.*f622437c0a //  // @ game+0xf4f3044
	void SetExtendedHeight(); // Function Engine.ExponentialHeightFogComponent.SetExtendedHeight //  // @ game+0xf4e2a2c
	void SetDownDensity(); // Function Engine.ExponentialHeightFogComponent.SetDownDensity //  // @ game+0xf4dde4c
	void *12bea12380(); // Function Engine.ExponentialHeightFogComponent.*12bea12380 //  // @ game+0xf51cbec
	void SetStartDistance(); // Function Engine.ExponentialHeightFogComponent.SetStartDistance //  // @ game+0xf514034
	void *ceb36922b8(); // Function Engine.ExponentialHeightFogComponent.*ceb36922b8 //  // @ game+0xf4e33a0
	void *503a04f0cb(); // Function Engine.ExponentialHeightFogComponent.*503a04f0cb //  // @ game+0xf51d560
	void SetExtendedFogDensity(); // Function Engine.ExponentialHeightFogComponent.SetExtendedFogDensity //  // @ game+0xf4e0dd0
	void SetFogInscatteringColor(); // Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor //  // @ game+0xf4e8030
	void SetUpDensity(); // Function Engine.ExponentialHeightFogComponent.SetUpDensity //  // @ game+0xf51968c
	void *60913aa3f5(); // Function Engine.ExponentialHeightFogComponent.*60913aa3f5 //  // @ game+0xf51cb6c
};

// Class Engine.*71f80f5ac2
// Size: 0xd8 (Inherited: 0x30)  [layout: KHOP]
struct U*71f80f5ac2 : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x30(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x550 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x478(0x08)
	char *5161b69f6a : 1; // 0x480(0x01)
	char *356eb9e97a : 1; // 0x480(0x01)
	char bLooping : 1; // 0x480(0x01)
	char bOverrideAttenuation : 1; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float IntensityMultiplier; // 0x484(0x04)
	struct U*71f80f5ac2* AttenuationSettings; // 0x488(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x490(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished; // 0x538(0x10)
	char pad_548[0x8]; // 0x548(0x08)

	void Play(); // Function Engine.ForceFeedbackComponent.Play //  // @ game+0xf4a1e9c
	void *6cc0f75627(); // Function Engine.ForceFeedbackComponent.*6cc0f75627 //  // @ game+0xf4f4fc0
	void AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation //  // @ game+0xf40a564
	void Stop(); // Function Engine.ForceFeedbackComponent.Stop //  // @ game+0xf540c40
	void *8d80b52a66(); // Function Engine.ForceFeedbackComponent.*8d80b52a66 //  // @ game+0xf4e9438
	void *14ef1637e9(); // Function Engine.ForceFeedbackComponent.*14ef1637e9 //  // @ game+0xf41664c
};

// Class Engine.InstancedDeferredDecalComponent
// Size: 0x520 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UInstancedDeferredDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x478(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x480(0x01)
	struct F*c1d67ea7ec DecalChannels; // 0x481(0x01)
	char pad_482[0x9e]; // 0x482(0x9e)

	void *d926354cf9(); // Function Engine.InstancedDeferredDecalComponent.*d926354cf9 //  // @ game+0xf4d9800
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalComponent.CreateDynamicMaterialInstance //  // @ game+0xf439aac
	void *31e30772cc(); // Function Engine.InstancedDeferredDecalComponent.*31e30772cc //  // @ game+0xe49ca64
};

// Class Engine.*85736e0ff6
// Size: 0x4e0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*85736e0ff6 : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x478(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x479(0x01)
	struct TArray<struct F*6b71a788a5> PerInstanceDecalData; // 0x480(0x10)
	struct UStaticMesh* StaticMesh; // 0x490(0x08) rep=OnRep_StaticMesh
	struct UMaterialInterface* DecalMaterial; // 0x498(0x08)
	char pad_4A0[0x40]; // 0x4a0(0x40)

	void *d3b6f8a55c(); // Function Engine.*85736e0ff6.*d3b6f8a55c //  // @ game+0xf406584
	void SetStaticMesh(); // Function Engine.*85736e0ff6.SetStaticMesh //  // @ game+0xf515694
	void *29a169ba41(); // Function Engine.*85736e0ff6.*29a169ba41 //  // @ game+0xf4bb7f4
	void *08b8bec796(); // Function Engine.*85736e0ff6.*08b8bec796 //  // @ game+0xf464810
	void *d926354cf9(); // Function Engine.*85736e0ff6.*d926354cf9 //  // @ game+0xf4d9880
	void *31e30772cc(); // Function Engine.*85736e0ff6.*31e30772cc //  // @ game+0xf462c78
	void CreateDynamicMaterialInstance(); // Function Engine.*85736e0ff6.CreateDynamicMaterialInstance //  // @ game+0xf439ad4
	void OnRep_StaticMesh(); // Function Engine.*85736e0ff6.OnRep_StaticMesh //  // @ game+0xf49f550
	void *52570258f6(); // Function Engine.*85736e0ff6.*52570258f6 //  // @ game+0xf4061f0
	void *a2c32137aa(); // Function Engine.*85736e0ff6.*a2c32137aa //  // @ game+0xf43523c
};

// Class Engine.PrimaryDataAsset
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UPrimaryDataAsset : UDataAsset {
};

// Class Engine.LevelBlockType
// Size: 0x60 (Inherited: 0x38)  [layout: KHOP]
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *0383c429c9; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*436cc8b3fc> *4d0ad57a65; // 0x40(0x10)
	struct TArray<struct F*6ec19e2486> *0bd0947547; // 0x50(0x10)
};

// Class Engine.*2a9c56f252
// Size: 0x490 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*2a9c56f252 : USceneComponent {
	struct ULevelBlockType* LevelBlockType; // 0x478(0x08)
	bool *44fbef812e; // 0x480(0x01)
	enum class EPreviewIndexType *df4b2464e7; // 0x481(0x01)
	char pad_482[0x2]; // 0x482(0x02)
	int32 *ef731dbb99; // 0x484(0x04)
	char pad_488[0x8]; // 0x488(0x08)
};

// Class Engine.DirectionalLightComponent
// Size: 0x610 (Inherited: 0x5a0)  [layout: KHOP]
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float OcclusionMaskDarkness; // 0x59c(0x04)
	float OcclusionDepthRange; // 0x5a0(0x04)
	struct FVector LightShaftOverrideDirection; // 0x5a4(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x5b0(0x04)
	float DynamicShadowDistanceMovableLight; // 0x5b4(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x5b8(0x04)
	int32 DynamicShadowCascades; // 0x5bc(0x04)
	float CascadeDistributionExponent; // 0x5c0(0x04)
	float CascadeTransitionFraction; // 0x5c4(0x04)
	float ShadowDistanceFadeoutFraction; // 0x5c8(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x5cc(0x01)
	char pad_5CD[0x3]; // 0x5cd(0x03)
	int32 FarShadowCascadeCount; // 0x5d0(0x04)
	float FarShadowDistance; // 0x5d4(0x04)
	float DistanceFieldShadowDistance; // 0x5d8(0x04)
	float LightSourceAngle; // 0x5dc(0x04)
	float TraceDistance; // 0x5e0(0x04)
	struct F*026f4f4514 LightmassSettings; // 0x5e4(0x10)
	char bCastModulatedShadows : 1; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FColor ModulatedShadowColor; // 0x5f8(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x5fc(0x01)
	char bUseGridShadow : 1; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	struct TArray<struct F*afc50a0f0e> GridShadowSplitSettings; // 0x600(0x10)

	void *a5efc14a4c(); // Function Engine.DirectionalLightComponent.*a5efc14a4c //  // @ game+0xf4df23c
	void *ab273a6763(); // Function Engine.DirectionalLightComponent.*ab273a6763 //  // @ game+0xf4f82fc
	void *c4728c4af4(); // Function Engine.DirectionalLightComponent.*c4728c4af4 //  // @ game+0xf4d4e20
	void *94f6237b28(); // Function Engine.DirectionalLightComponent.*94f6237b28 //  // @ game+0xf4d5794
	void *d3f3adcc63(); // Function Engine.DirectionalLightComponent.*d3f3adcc63 //  // @ game+0xf4de8c8
	void *c832323e57(); // Function Engine.DirectionalLightComponent.*c832323e57 //  // @ game+0xf4dffac
	void *b3b5062483(); // Function Engine.DirectionalLightComponent.*b3b5062483 //  // @ game+0xf4de840
	void *981f3bd16a(); // Function Engine.DirectionalLightComponent.*981f3bd16a //  // @ game+0xf5027a8
	void *6a0ad37579(); // Function Engine.DirectionalLightComponent.*6a0ad37579 //  // @ game+0xf50de6c
};

// Class Engine.SkyLightComponent
// Size: 0x660 (Inherited: 0x4b0)  [layout: LECH - offset chi la uoc luong]
struct USkyLightComponent : ULightComponentBase {
	enum class *1b300b6c96 SourceType; // 0x4a8(0x01)
	struct UTextureCube* Cubemap; // 0x4b0(0x08)
	float SourceCubemapAngle; // 0x4b8(0x04)
	int32 CubemapResolution; // 0x4bc(0x04)
	float SkyDistanceThreshold; // 0x4c0(0x04)
	bool bCaptureEmissiveOnly; // 0x4c4(0x01)
	bool bLowerHemisphereIsBlack; // 0x4c5(0x01)
	char pad_4C6[0x2]; // 0x4c6(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x4c8(0x10)
	float OcclusionMaxDistance; // 0x4d8(0x04)
	float Contrast; // 0x4dc(0x04)
	float OcclusionExponent; // 0x4e0(0x04)
	float MinOcclusion; // 0x4e4(0x04)
	struct FColor OcclusionTint; // 0x4e8(0x04)
	enum class *a2a8175adf OcclusionCombineMode; // 0x4ec(0x01)
	char pad_4ED[0xab]; // 0x4ed(0xab)
	struct UTextureCube* *f6366dad77; // 0x598(0x08)
	char pad_5A0[0xc0]; // 0x5a0(0xc0)

	void *61260059e9(); // Function Engine.SkyLightComponent.*61260059e9 //  // @ game+0xf4bae30
	void *3b40291f95(); // Function Engine.SkyLightComponent.*3b40291f95 //  // @ game+0xf4fe0a8
	void *8487b2dc5b(); // Function Engine.SkyLightComponent.*8487b2dc5b //  // @ game+0xf51e848
	void *21f2d8e2a7(); // Function Engine.SkyLightComponent.*21f2d8e2a7 //  // @ game+0xf4d8bc4
	void *506cfbeaa9(); // Function Engine.SkyLightComponent.*506cfbeaa9 //  // @ game+0xf4f64e8
	void *43d4ef2311(); // Function Engine.SkyLightComponent.*43d4ef2311 //  // @ game+0xf5014c0
	void *462752f349(); // Function Engine.SkyLightComponent.*462752f349 //  // @ game+0xf501e34
	void *4632cc49bb(); // Function Engine.SkyLightComponent.*4632cc49bb //  // @ game+0xf4d8c68
	void *fd6508ab8f(); // Function Engine.SkyLightComponent.*fd6508ab8f //  // @ game+0xf50311c
	void SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity //  // @ game+0xf6fc0c
	void *ec38b5abec(); // Function Engine.SkyLightComponent.*ec38b5abec //  // @ game+0xf4f1cd0
};

// Class Engine.*fcbbb1f3e6
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct U*fcbbb1f3e6 : USceneComponent {
	struct UBoxComponent* *376ae93f74; // 0x478(0x08)
};

// Class Engine.*15cf98efbe
// Size: 0x4a0 (Inherited: 0x480)  [layout: KHOP]
struct U*15cf98efbe : USceneComponent {
	struct F*85151701fc Node; // 0x478(0x18)
	struct U*15cf98efbe* *cc21658390; // 0x490(0x08)
	struct U*15cf98efbe* *5f14673d53; // 0x498(0x08)
};

// Class Engine.*1e16bcac34
// Size: 0x500 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*1e16bcac34 : USceneComponent {
	struct F*54ff67390a *54ff67390a; // 0x480(0x20)
	float *b2fd7da585; // 0x4a0(0x04)
	struct F*b34a7127a1 *539887f545; // 0x4a4(0x24)
	float *738d2693a5; // 0x4c8(0x04)
	char pad_4CC[0x34]; // 0x4cc(0x34)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x6b0 (Inherited: 0x480)  [layout: KHOP]
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *a86666415f; // 0x478(0x08)
	struct F*3c9737ff4a *595cd213c9; // 0x480(0x08)
	struct AActor* *5fdf0d82dd; // 0x488(0x08)
	struct F*3c9737ff4a *c91fdf6b04; // 0x490(0x08)
	char pad_498[0x10]; // 0x498(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x4a8(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x4b0(0x10)
	struct FConstraintInstance ConstraintInstance; // 0x4c0(0x1f0)

	void *2cb31bae30(); // Function Engine.PhysicsConstraintComponent.*2cb31bae30 //  // @ game+0xf4c87f4
	void *96d6ccaac7(); // Function Engine.PhysicsConstraintComponent.*96d6ccaac7 //  // @ game+0xf4c92ac
	void *9591ad5ba2(); // Function Engine.PhysicsConstraintComponent.*9591ad5ba2 //  // @ game+0xf4c5050
	void *81c9c25515(); // Function Engine.PhysicsConstraintComponent.*81c9c25515 //  // @ game+0xf4cafbc
	void *fdaaba1978(); // Function Engine.PhysicsConstraintComponent.*fdaaba1978 //  // @ game+0xf4faa38
	void *482160c910(); // Function Engine.PhysicsConstraintComponent.*482160c910 //  // @ game+0xf462420
	void *d2a7aea572(); // Function Engine.PhysicsConstraintComponent.*d2a7aea572 //  // @ game+0xf4c5100
	void *2627672f40(); // Function Engine.PhysicsConstraintComponent.*2627672f40 //  // @ game+0xf5031c4
	void *bc09191da6(); // Function Engine.PhysicsConstraintComponent.*bc09191da6 //  // @ game+0xf4d8388
	void *de59f73d82(); // Function Engine.PhysicsConstraintComponent.*de59f73d82 //  // @ game+0xf4d87c8
	void *86ca0c06d8(); // Function Engine.PhysicsConstraintComponent.*86ca0c06d8 //  // @ game+0xf4dcab0
	void *41cdb513ee(); // Function Engine.PhysicsConstraintComponent.*41cdb513ee //  // @ game+0xf4fb538
	void *68474e18da(); // Function Engine.PhysicsConstraintComponent.*68474e18da //  // @ game+0xf4cb1f8
	void *492a2db4e9(); // Function Engine.PhysicsConstraintComponent.*492a2db4e9 //  // @ game+0xf4cb138
	void *dfac8d5dcf(); // Function Engine.PhysicsConstraintComponent.*dfac8d5dcf //  // @ game+0xf4fab3c
	void *dce84fb70b(); // Function Engine.PhysicsConstraintComponent.*dce84fb70b //  // @ game+0xf461c60
	void *c6f4a582d5(); // Function Engine.PhysicsConstraintComponent.*c6f4a582d5 //  // @ game+0xf4c9c5c
	void *968eb3aea6(); // Function Engine.PhysicsConstraintComponent.*968eb3aea6 //  // @ game+0xf4fb63c
	void *b2e0f307d8(); // Function Engine.PhysicsConstraintComponent.*b2e0f307d8 //  // @ game+0xf4f8edc
	void *23df25cad6(); // Function Engine.PhysicsConstraintComponent.*23df25cad6 //  // @ game+0xf4ca60c
	void *0fa37cfa72(); // Function Engine.PhysicsConstraintComponent.*0fa37cfa72 //  // @ game+0xf4fca24
	void *ecfcc88f78(); // Function Engine.PhysicsConstraintComponent.*ecfcc88f78 //  // @ game+0xf4d88d8
	void *50d7ae4143(); // Function Engine.PhysicsConstraintComponent.*50d7ae4143 //  // @ game+0xf422b50
	void *e539320019(); // Function Engine.PhysicsConstraintComponent.*e539320019 //  // @ game+0xf4fb6c4
	void *443afa4491(); // Function Engine.PhysicsConstraintComponent.*443afa4491 //  // @ game+0xf4d8a9c
	void *b55b6dcad2(); // Function Engine.PhysicsConstraintComponent.*b55b6dcad2 //  // @ game+0xf4623f8
	void *a52b7c6d34(); // Function Engine.PhysicsConstraintComponent.*a52b7c6d34 //  // @ game+0xf4fc074
	void *cb987528ce(); // Function Engine.PhysicsConstraintComponent.*cb987528ce //  // @ game+0xf4c88b4
	void *fe8d6df41a(); // Function Engine.PhysicsConstraintComponent.*fe8d6df41a //  // @ game+0xf50327c
	void *c78f145251(); // Function Engine.PhysicsConstraintComponent.*c78f145251 //  // @ game+0xf4623d0
	void *719cd11d15(); // Function Engine.PhysicsConstraintComponent.*719cd11d15 //  // @ game+0xf4cb07c
};

// Class Engine.*eeeac9385d
// Size: 0x4a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*eeeac9385d : USceneComponent {
	float SpringStiffness; // 0x478(0x04)
	float SpringDamping; // 0x47c(0x04)
	float SpringLengthAtRest; // 0x480(0x04)
	float SpringRadius; // 0x484(0x04)
	enum class ECollisionChannel SpringChannel; // 0x488(0x01)
	bool bIgnoreSelf; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float SpringCompression; // 0x48c(0x04)
	char pad_490[0x10]; // 0x490(0x10)

	void *df3b4446a7(); // Function Engine.*eeeac9385d.*df3b4446a7 //  // @ game+0xf47111c
	void *c98d566783(); // Function Engine.*eeeac9385d.*c98d566783 //  // @ game+0xf469e8c
	void *2f2140f0af(); // Function Engine.*eeeac9385d.*2f2140f0af //  // @ game+0xe2d590
	void *6bf3045c5f(); // Function Engine.*eeeac9385d.*6bf3045c5f //  // @ game+0xf4710e8
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x478(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0xa10 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UPostProcessComponent : USceneComponent {
	struct FPostProcessSettings Settings; // 0x480(0x580)
	float Priority; // 0xa00(0x04)
	float BlendRadius; // 0xa04(0x04)
	float BlendWeight; // 0xa08(0x04)
	char bEnabled : 1; // 0xa0c(0x01)
	char bUnbound : 1; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)

	void *f752129f6c(); // Function Engine.PostProcessComponent.*f752129f6c //  // @ game+0xf407384
};

// Class Engine.BrushComponent
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x9d0(0x08)
	struct UBodySetup* BrushBodySetup; // 0x9d8(0x08)
	struct FVector PrePivot; // 0x9e0(0x0c)
	char pad_9EC[0x4]; // 0x9ec(0x04)
};

// Class Engine.*fe5c79ce62
// Size: 0xa00 (Inherited: 0x9d0)  [layout: KHOP]
struct U*fe5c79ce62 : UPrimitiveComponent {
	char pad_9D0[0x8]; // 0x9d0(0x08)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x9d8(0x10)
	struct TArray<struct F*fbf312369f> *9c72b41d0a; // 0x9e8(0x10)
	struct UBodySetup* BodySetup; // 0x9f8(0x08)
};

// Class Engine.*66475761fb
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*66475761fb : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x9d0(0x04)
	float FrustumAngle; // 0x9d4(0x04)
	float FrustumAspectRatio; // 0x9d8(0x04)
	float FrustumStartDist; // 0x9dc(0x04)
	float FrustumEndDist; // 0x9e0(0x04)
	char pad_9E4[0x4]; // 0x9e4(0x04)
	struct UTexture* Texture; // 0x9e8(0x08)
};

// Class Engine.*5f134d9729
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*5f134d9729 : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points; // 0x9d0(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBlueprintCore : UObject {
	struct UClass* *e2f14b0c8f; // 0x30(0x08)
	struct UClass* GeneratedClass; // 0x38(0x08)
	bool *19b52975d7; // 0x40(0x01)
	bool *49f6bac39f; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FGuid *c42976b6a5; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UClass* ParentClass; // 0x60(0x08)
	struct UObject* *3a6166bd65; // 0x68(0x08)
	char *7116e952fd : 1; // 0x70(0x01)
	char *58e3bdc2c3 : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x78(0x08)
	struct TArray<struct UActorComponent*> *ed0f3daee0; // 0x80(0x10)
	struct TArray<struct U*978737fff5*> *97b265d31c; // 0x90(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0xa0(0x08)
	enum class EBlueprintType BlueprintType; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32 *69edc343dd; // 0xac(0x04)
	char pad_B0[0xe0]; // 0xb0(0xe0)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.*73e33ac23e
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*73e33ac23e : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x40(0x08)
	char pad_48[0x88]; // 0x48(0x88)
};

// Class Engine.World
// Size: 0xe20 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UWorld : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct TArray<struct UObject*> ExtraReferencedObjects; // 0x48(0x10)
	struct UCanvas* CanvasForRenderingToTarget; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
	struct U*70c6f0aeff* ForegroundLineBatcher; // 0x80(0x08)
	char pad_88[0x90]; // 0x88(0x90)
	struct AParticleEventManager* MyParticleEventManager; // 0x118(0x08)
	struct UAISystemBase* AISystem; // 0x120(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)
	struct TArray<struct UObject*> PerModuleDataObjects; // 0x138(0x10)
	struct UNetDriver* NetDriver; // 0x148(0x08)
	char pad_150[0x28]; // 0x150(0x28)
	struct U*70c6f0aeff* LineBatcher; // 0x178(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x180(0x08)
	char pad_188[0x1e8]; // 0x188(0x1e8)
	struct UWorldComposition* WorldComposition; // 0x370(0x08)
	char pad_378[0x3e0]; // 0x378(0x3e0)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x758(0x08)
	struct TArray<struct ULevel*> Levels; // 0x760(0x10)
	char pad_770[0x8]; // 0x770(0x08)
	struct UDirectionalLightComponent* HeightBufferFakeLight; // 0x778(0x08)
	char pad_780[0x8]; // 0x780(0x08)
	struct TArray<struct FLevelCollection> LevelCollections; // 0x788(0x10)
	char pad_798[0x18]; // 0x798(0x18)
	struct APhysicsVolume* DefaultPhysicsVolume; // 0x7b0(0x08)
	struct TArray<struct ULevelStreaming*> LevelStreamings; // 0x7b8(0x10)
	char pad_7C8[0x98]; // 0x7c8(0x98)
	struct UDemoNetDriver* DemoNetDriver; // 0x860(0x08)
	char pad_868[0x18]; // 0x868(0x18)
	struct FString StreamingLevelsPrefix; // 0x880(0x10)
	struct ULevel* LevelCurrentlyAddingToWorld; // 0x890(0x08)
	struct ULevel* LevelCurrentlyRemovingFromWorld; // 0x898(0x08)
	char pad_8A0[0x8]; // 0x8a0(0x08)
	struct UNavigationSystem* NavigationSystem; // 0x8a8(0x08)
	char pad_8B0[0x20]; // 0x8b0(0x20)
	struct ULevel* CurrentLevel; // 0x8d0(0x10)
	char pad_8E0[0x70]; // 0x8e0(0x70)
	struct U*70c6f0aeff* PersistentLineBatcher; // 0x950(0x08)
	char pad_958[0x8]; // 0x958(0x08)
	struct TArray<struct U*58e2034313*> ParameterCollectionInstances; // 0x960(0x10)
	char pad_970[0x130]; // 0x970(0x130)
	struct UCanvas* CanvasForDrawMaterialToRenderTarget; // 0xaa0(0x08)
	char pad_AA8[0x8]; // 0xaa8(0x08)
	struct AGameNetworkManager* NetworkManager; // 0xab0(0x08)
	char pad_AB8[0x4a]; // 0xab8(0x4a)
	char bAreConstraintsDirty : 1; // 0xb02(0x01)
	char pad_B03[0xe5]; // 0xb03(0xe5)
	struct TMap<struct FLandscapeOverrideKey, struct FLandscapeOverrideData> LandscapeOverrideDatas; // 0xbe8(0x50)
	char pad_C38[0x1e8]; // 0xc38(0x1e8)
};

// Class Engine.GrassVolumeComponent
// Size: 0xa00 (Inherited: 0xa00)  [layout: KHOP]
struct UGrassVolumeComponent : UBoxComponent {
};

// Class Engine.*92a8cf5482
// Size: 0xa30 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*92a8cf5482 : UPrimitiveComponent {
	struct ALandscape* *6d8ba0007f; // 0x9d0(0x1c)
	struct ALandscape* *5c8e7f9357; // 0x9ec(0x1c)
	struct UTexture2D* *4d45a1ab27; // 0xa08(0x08)
	struct FVector2D Extent; // 0xa10(0x08)
	struct FIntPoint *2b69ab881b; // 0xa18(0x08)
	char *e2f4ee89e2 : 1; // 0xa20(0x01)
	char *4a8b5f1dd5 : 1; // 0xa20(0x01)
	char *c7597c8e28 : 1; // 0xa20(0x01)
	char *b8f4d06e0f : 1; // 0xa20(0x01)
	char pad_A21[0xf]; // 0xa21(0x0f)
};

// Class Engine.*70c6f0aeff
// Size: 0xa10 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*70c6f0aeff : UPrimitiveComponent {
	char pad_9D0[0x40]; // 0x9d0(0x40)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: KHOP]
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*8a4ab5faf6> Elements; // 0x9d0(0x10)

	void *bd7aa68abb(); // Function Engine.MaterialBillboardComponent.*bd7aa68abb //  // @ game+0xf4dfbb0
	void *2a12b46c49(); // Function Engine.MaterialBillboardComponent.*2a12b46c49 //  // @ game+0xf4040a4
};

// Class Engine.AssetManager
// Size: 0x3f8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAssetManager : UObject {
	char pad_30[0x260]; // 0x30(0x260)
	struct TArray<struct UObject*> *a9e844e20d; // 0x290(0x10)
	bool *a0753dcab7; // 0x2a0(0x01)
	bool *97215415e6; // 0x2a1(0x01)
	bool *5c744a0bc3; // 0x2a2(0x01)
	bool *cbf5faa487; // 0x2a3(0x01)
	bool *d056668c21; // 0x2a4(0x01)
	bool *9eca7077cc; // 0x2a5(0x01)
	bool *99333c2653; // 0x2a6(0x01)
	char pad_2A7[0x151]; // 0x2a7(0x151)
};

// Class Engine.*16eb1f0463
// Size: 0xf00 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct U*16eb1f0463 : USkinnedMeshComponent {
	char pad_E20[0xe0]; // 0xe20(0xe0)

	void *20ff7ddd44(); // Function Engine.*16eb1f0463.*20ff7ddd44 //  // @ game+0xf4cef08
	void *014d4f4557(); // Function Engine.*16eb1f0463.*014d4f4557 //  // @ game+0xf439050
	void *6a7511164a(); // Function Engine.*16eb1f0463.*6a7511164a //  // @ game+0xf4cf000
	void *bcfeb77d86(); // Function Engine.*16eb1f0463.*bcfeb77d86 //  // @ game+0xf460ca8
	void *79fdbd1109(); // Function Engine.*16eb1f0463.*79fdbd1109 //  // @ game+0xf4608d4
	void *a6fd8fa932(); // Function Engine.*16eb1f0463.*a6fd8fa932 //  // @ game+0xf460ae0
	void *26a1b4753a(); // Function Engine.*16eb1f0463.*26a1b4753a //  // @ game+0xf460bdc
	void *4f4683071f(); // Function Engine.*16eb1f0463.*4f4683071f //  // @ game+0xf4bc278
	void *77a010ab05(); // Function Engine.*16eb1f0463.*77a010ab05 //  // @ game+0xf4cf240
	void *1d7c5e04be(); // Function Engine.*16eb1f0463.*1d7c5e04be //  // @ game+0xf4cf148
};

// Class Engine.WorldComposition
// Size: 0x98 (Inherited: 0x30)  [layout: KHOP]
struct UWorldComposition : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct TArray<struct ULevelStreaming*> *4737a21153; // 0x68(0x10)
	double TilesStreamingTimeThreshold; // 0x78(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x80(0x01)
	bool bRebaseOriginIn3DSpace; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float RebaseOriginDistance; // 0x84(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix; // 0x88(0x10)
};

// Class Engine.ProxyDebugDrawComponent
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UProxyDebugDrawComponent : UPrimitiveComponent {
	char pad_9D0[0x20]; // 0x9d0(0x20)
};

// Class Engine.*f789f28be8
// Size: 0xa8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*f789f28be8 : U*c82d443ff2 {
	char pad_38[0x70]; // 0x38(0x70)
};

// Class Engine.*d763dcf5d1
// Size: 0xe20 (Inherited: 0xe20)  [layout: KHOP]
struct U*d763dcf5d1 : USkinnedMeshComponent {
};

// Class Engine.*94ad1dffcb
// Size: 0xeb0 (Inherited: 0xe20)  [layout: LECH - offset chi la uoc luong]
struct U*94ad1dffcb : USkinnedMeshComponent {
	char pad_E20[0x90]; // 0xe20(0x90)
};

// Class Engine.SplineMeshComponent
// Size: 0xc20 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct USplineMeshComponent : UStaticMeshComponent {
	struct F*ea5f5c4bf5 SplineParams; // 0xb80(0x58)
	struct FVector SplineUpDir; // 0xbd8(0x0c)
	char *d00ebfd32b : 1; // 0xbe4(0x01)
	char *7dfd3302ed : 1; // 0xbe4(0x01)
	char pad_BE5[0x3]; // 0xbe5(0x03)
	enum class ESplineMeshAxis *2bd6016326; // 0xbe8(0x01)
	char pad_BE9[0x3]; // 0xbe9(0x03)
	float *5f0a2c6167; // 0xbec(0x04)
	float *c9e70f09f3; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct UBodySetup* BodySetup; // 0xbf8(0x08)
	struct FGuid *6307a0af5a; // 0xc00(0x10)
	char *1b52bcd6fa : 1; // 0xc10(0x01)
	char pad_C11[0xf]; // 0xc11(0x0f)

	void *d64ab217b1(); // Function Engine.SplineMeshComponent.*d64ab217b1 //  // @ game+0xf5155c8
	void *4b90a4a366(); // Function Engine.SplineMeshComponent.*4b90a4a366 //  // @ game+0xf4646b0
	void *227674e571(); // Function Engine.SplineMeshComponent.*227674e571 //  // @ game+0xf4711c4
	void *3d5cc9820e(); // Function Engine.SplineMeshComponent.*3d5cc9820e //  // @ game+0xf464740
	void *fef59e4e62(); // Function Engine.SplineMeshComponent.*fef59e4e62 //  // @ game+0xf514a78
	void *edaf23abfe(); // Function Engine.SplineMeshComponent.*edaf23abfe //  // @ game+0xf4e95e8
	void *46a99eddfd(); // Function Engine.SplineMeshComponent.*46a99eddfd //  // @ game+0xf464718
	void *30759f64e9(); // Function Engine.SplineMeshComponent.*30759f64e9 //  // @ game+0xf4e01a8
	void *1e15c4f296(); // Function Engine.SplineMeshComponent.*1e15c4f296 //  // @ game+0xf547c34
	void *2bc976e382(); // Function Engine.SplineMeshComponent.*2bc976e382 //  // @ game+0xf460de4
	void *3f96586da0(); // Function Engine.SplineMeshComponent.*3f96586da0 //  // @ game+0xf4cfefc
	void *5319dd7f1e(); // Function Engine.SplineMeshComponent.*5319dd7f1e //  // @ game+0xf4711ec
	void *5fa762da8c(); // Function Engine.SplineMeshComponent.*5fa762da8c //  // @ game+0xf5149a8
	void *bc9f23a9ee(); // Function Engine.SplineMeshComponent.*bc9f23a9ee //  // @ game+0xf4e0d04
	void *c979b927c6(); // Function Engine.SplineMeshComponent.*c979b927c6 //  // @ game+0xf515510
	void *c09a738a1b(); // Function Engine.SplineMeshComponent.*c09a738a1b //  // @ game+0xf424f18
	void *4904c336a3(); // Function Engine.SplineMeshComponent.*4904c336a3 //  // @ game+0xf4e00e4
	void *08e81da6ae(); // Function Engine.SplineMeshComponent.*08e81da6ae //  // @ game+0xf4711ac
	void *5faca7207c(); // Function Engine.SplineMeshComponent.*5faca7207c //  // @ game+0xf514b44
	void *20bcaa00ab(); // Function Engine.SplineMeshComponent.*20bcaa00ab //  // @ game+0xf4648f8
	void *b2fba276a5(); // Function Engine.SplineMeshComponent.*b2fba276a5 //  // @ game+0xf4e0274
	void *8db8be8966(); // Function Engine.SplineMeshComponent.*8db8be8966 //  // @ game+0xf460db4
	void *2a8c06f59c(); // Function Engine.SplineMeshComponent.*2a8c06f59c //  // @ game+0xf471184
	void *a9afff499a(); // Function Engine.SplineMeshComponent.*a9afff499a //  // @ game+0xf4e0c40
	void *c1f92dd29b(); // Function Engine.SplineMeshComponent.*c1f92dd29b //  // @ game+0xf4d1294
	void *549e13a4e3(); // Function Engine.SplineMeshComponent.*549e13a4e3 //  // @ game+0xf5132b8
	void *4b46eee1b8(); // Function Engine.SplineMeshComponent.*4b46eee1b8 //  // @ game+0xf464700
	void *c898b492fd(); // Function Engine.SplineMeshComponent.*c898b492fd //  // @ game+0xf47115c
	void *08865de9b5(); // Function Engine.SplineMeshComponent.*08865de9b5 //  // @ game+0xf4646d8
	void *7b93a68152(); // Function Engine.SplineMeshComponent.*7b93a68152 //  // @ game+0xf4710c0
	void *e51c0ba6d5(); // Function Engine.SplineMeshComponent.*e51c0ba6d5 //  // @ game+0xf51350c
};

// Class Engine.*3be60d7584
// Size: 0xc00 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*3be60d7584 : UStaticMeshComponent {
	struct TArray<struct F*7ff3e53daa> PerInstanceSMData; // 0xb80(0x10)
	struct FVector SplineUpDir; // 0xb90(0x0c)
	char *7dfd3302ed : 1; // 0xb9c(0x01)
	char pad_B9D[0x3]; // 0xb9d(0x03)
	enum class ESplineMeshAxis *2bd6016326; // 0xba0(0x01)
	char pad_BA1[0x3]; // 0xba1(0x03)
	float *5f0a2c6167; // 0xba4(0x04)
	float *c9e70f09f3; // 0xba8(0x04)
	struct FVector *4d5658ae5b; // 0xbac(0x0c)
	int32 InstanceStartCullDistance; // 0xbb8(0x04)
	int32 InstanceEndCullDistance; // 0xbbc(0x04)
	char pad_BC0[0x18]; // 0xbc0(0x18)
	struct UBodySetup* BodySetup; // 0xbd8(0x08)
	struct FGuid *6307a0af5a; // 0xbe0(0x10)
	uint32 *4d4316bb5c; // 0xbf0(0x04)
	char pad_BF4[0xc]; // 0xbf4(0x0c)

	void *08b8bec796(); // Function Engine.*3be60d7584.*08b8bec796 //  // @ game+0xf465eb4
	void *3f96586da0(); // Function Engine.*3be60d7584.*3f96586da0 //  // @ game+0xf4cf530
	void *a2c32137aa(); // Function Engine.*3be60d7584.*a2c32137aa //  // @ game+0xf435254
	void *1e15c4f296(); // Function Engine.*3be60d7584.*1e15c4f296 //  // @ game+0xf547c20
	void *4850f3b0e6(); // Function Engine.*3be60d7584.*4850f3b0e6 //  // @ game+0xf466318
	void *edaf23abfe(); // Function Engine.*3be60d7584.*edaf23abfe //  // @ game+0xf4e952c
	void *8db8be8966(); // Function Engine.*3be60d7584.*8db8be8966 //  // @ game+0xf460d9c
	void *c1f92dd29b(); // Function Engine.*3be60d7584.*c1f92dd29b //  // @ game+0xf4d08c8
	void *20bcaa00ab(); // Function Engine.*3be60d7584.*20bcaa00ab //  // @ game+0xf4648e0
	void *52570258f6(); // Function Engine.*3be60d7584.*52570258f6 //  // @ game+0xf406320
	void *d3b6f8a55c(); // Function Engine.*3be60d7584.*d3b6f8a55c //  // @ game+0xf4066e0
	void *29a169ba41(); // Function Engine.*3be60d7584.*29a169ba41 //  // @ game+0xf4bb880
	void *2bc976e382(); // Function Engine.*3be60d7584.*2bc976e382 //  // @ game+0xf460dcc
	void *896d2fe7dd(); // Function Engine.*3be60d7584.*896d2fe7dd //  // @ game+0xf4d964c
};

// Class Engine.LODParentComponent
// Size: 0xb80 (Inherited: 0xb80)  [layout: KHOP]
struct ULODParentComponent : UStaticMeshComponent {
};

// Class Engine.*d655ab2d70
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*d655ab2d70 : UPrimitiveComponent {
	struct U*a87aa9daa7* *d2d508c775; // 0x9d0(0x08)
	char pad_9D8[0x18]; // 0x9d8(0x18)
};

// Class Engine.*10fc8dbce1
// Size: 0x9f0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*10fc8dbce1 : UPrimitiveComponent {
	struct U*a87aa9daa7* *d2d508c775; // 0x9d0(0x08)
	char pad_9D8[0x18]; // 0x9d8(0x18)
};

// Class Engine.*a87aa9daa7
// Size: 0xbc0 (Inherited: 0xb80)  [layout: LECH - offset chi la uoc luong]
struct U*a87aa9daa7 : UStaticMeshComponent {
	char pad_B80[0x40]; // 0xb80(0x40)
};

// Class Engine.Texture
// Size: 0x180 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTexture : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGuid *7f827ab43a; // 0x38(0x10)
	int32 LODBias; // 0x48(0x04)
	int32 NumCinematicMipLevels; // 0x4c(0x04)
	int32 GlobalLODBias; // 0x50(0x04)
	char SRGB : 1; // 0x54(0x01)
	char NeverStream : 1; // 0x54(0x01)
	char *0b1de6ec2d : 1; // 0x54(0x01)
	char *156b630854 : 1; // 0x54(0x01)
	char *8a0476f85a : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *4cf7d2b871; // 0x58(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x5c(0x01)
	enum class TextureFilter Filter; // 0x5d(0x01)
	enum class TextureGroup LODGroup; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct FPerPlatformFloat Downscale; // 0x60(0x04)
	enum class ETextureDownscaleOptions *fd3e22a597; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
	char pad_78[0x108]; // 0x78(0x108)
};

// Class Engine.Texture2D
// Size: 0x270 (Inherited: 0x180)  [layout: LECH - offset chi la uoc luong]
struct UTexture2D : UTexture {
	int32 *a1829ef1f5; // 0x180(0x04)
	int32 *bf6769b062; // 0x184(0x04)
	int32 *a2754e9cd9; // 0x188(0x04)
	struct FIntPoint *76f0aa61af; // 0x18c(0x08)
	char pad_194[0x4]; // 0x194(0x04)
	double *0fadab665c; // 0x198(0x08)
	char *6342f3b7f8 : 1; // 0x1a0(0x01)
	char *19fad16af0 : 1; // 0x1a0(0x01)
	char *2d16484fd6 : 1; // 0x1a0(0x01)
	char *ea8dff20fa : 1; // 0x1a0(0x01)
	char *8d3b91cfec : 1; // 0x1a0(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x1a0(0x01)
	char *196dc34714 : 1; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	enum class *4e35ac1492 AddressX; // 0x1a4(0x01)
	enum class *4e35ac1492 AddressY; // 0x1a5(0x01)
	char pad_1A6[0xca]; // 0x1a6(0xca)

	void *30d57b125b(); // Function Engine.Texture2D.*30d57b125b //  // @ game+0xb9c480
	void *5f7a9daaee(); // Function Engine.Texture2D.*5f7a9daaee //  // @ game+0xf418ab8
	void *4d8d5e6c6f(); // Function Engine.Texture2D.*4d8d5e6c6f //  // @ game+0xf418a98
};

// Class Engine.*11fb46773f
// Size: 0x58 (Inherited: 0x38)  [layout: KHOP]
struct U*11fb46773f : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
};

// Class Engine.*af65b40fa1
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*af65b40fa1 : UPrimitiveComponent {
	struct U*11fb46773f* LabelData; // 0x9d0(0x08)
	struct FVector2D Offset; // 0x9d8(0x08)
};

// Class Engine.*c880c50ccf
// Size: 0xf0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*c880c50ccf : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
	struct UTexture2D* Normal; // 0x58(0x20)
	float Height; // 0x78(0x04)
	char pad_7C[0x74]; // 0x7c(0x74)
};

// Class Engine.*df74727e1c
// Size: 0x9e0 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*df74727e1c : UPrimitiveComponent {
	struct U*c880c50ccf* ObjectData; // 0x9d0(0x08)
	char pad_9D8[0x8]; // 0x9d8(0x08)
};

// Class Engine.*b1c590a303
// Size: 0xa10 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct U*b1c590a303 : UPrimitiveComponent {
	char pad_9D0[0x18]; // 0x9d0(0x18)
	struct UBodySetup* *81b2e09e4f; // 0x9e8(0x08)
	char pad_9F0[0x20]; // 0x9f0(0x20)
};

// Class Engine.*f5f86ffaca
// Size: 0x9d0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*f5f86ffaca : UPrimitiveComponent {
};

// Class Engine.*55c7fc9481
// Size: 0x9f0 (Inherited: 0x9e0)  [layout: LECH - offset chi la uoc luong]
struct U*55c7fc9481 : UNavMeshRenderingComponent {
	char pad_9E0[0x10]; // 0x9e0(0x10)
};

// Class Engine.*0b6a4f9593
// Size: 0xf8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*0b6a4f9593 : U*c82d443ff2 {
	struct TArray<struct AActor*> *b20120a04d; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)
};

// Class Engine.*149b468683
// Size: 0x9d0 (Inherited: 0x9d0)  [layout: KHOP]
struct U*149b468683 : UPrimitiveComponent {
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0xa40 (Inherited: 0xa00)  [layout: LECH - offset chi la uoc luong]
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0xa00(0x01)
	bool bUseParentBounds; // 0xa01(0x01)
	char pad_A02[0x2]; // 0xa02(0x02)
	float ExtendUpwards; // 0xa04(0x04)
	float ExtendDownwards; // 0xa08(0x04)
	char pad_A0C[0x34]; // 0xa0c(0x34)

	void *2ea8850ccb(); // Function Engine.MeshClippingUnderwaterComponent.*2ea8850ccb //  // @ game+0xf46a0cc
};

// Class Engine.*bdf092b520
// Size: 0xa00 (Inherited: 0xa00)  [layout: KHOP]
struct U*bdf092b520 : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0xa20 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x9d0(0x18)
	struct UMaterialInterface* TextMaterial; // 0x9e8(0x08)
	struct UFont* Font; // 0x9f0(0x08)
	enum class *1cfb9a3d96 HorizontalAlignment; // 0x9f8(0x01)
	enum class *4cf92d6148 VerticalAlignment; // 0x9f9(0x01)
	char pad_9FA[0x2]; // 0x9fa(0x02)
	struct FColor TextRenderColor; // 0x9fc(0x04)
	float XScale; // 0xa00(0x04)
	float YScale; // 0xa04(0x04)
	float WorldSize; // 0xa08(0x04)
	float *0a9a2d1fe6; // 0xa0c(0x04)
	float HorizSpacingAdjust; // 0xa10(0x04)
	float VertSpacingAdjust; // 0xa14(0x04)
	char bAlwaysRenderAsText : 1; // 0xa18(0x01)
	char pad_A19[0x7]; // 0xa19(0x07)

	void *1c0d1923df(); // Function Engine.TextRenderComponent.*1c0d1923df //  // @ game+0xf51b704
	void *b35276f814(); // Function Engine.TextRenderComponent.*b35276f814 //  // @ game+0xf472c70
	void *2b0786acf8(); // Function Engine.TextRenderComponent.*2b0786acf8 //  // @ game+0xf4f11b8
	void *f548c71d91(); // Function Engine.TextRenderComponent.*f548c71d91 //  // @ game+0xf472ca4
	void *f064fd4f4a(); // Function Engine.TextRenderComponent.*f064fd4f4a //  // @ game+0xf5186b8
	void *bf3e0cfdc8(); // Function Engine.TextRenderComponent.*bf3e0cfdc8 //  // @ game+0xf51abd4
	void *3fd464ce03(); // Function Engine.TextRenderComponent.*3fd464ce03 //  // @ game+0xf4f0844
	void *226c1287b8(); // Function Engine.TextRenderComponent.*226c1287b8 //  // @ game+0xf520834
	void *940380c051(); // Function Engine.TextRenderComponent.*940380c051 //  // @ game+0xf521b54
	void SetText(); // Function Engine.TextRenderComponent.SetText //  // @ game+0xf518500
	void *c70b010726(); // Function Engine.TextRenderComponent.*c70b010726 //  // @ game+0xf483a6c
	void *8282486b7f(); // Function Engine.TextRenderComponent.*8282486b7f //  // @ game+0xf4e9398
	void *686c347674(); // Function Engine.TextRenderComponent.*686c347674 //  // @ game+0xf5224c8
	void *73c6afc479(); // Function Engine.TextRenderComponent.*73c6afc479 //  // @ game+0xf518868
};

// Class Engine.VectorFieldComponent
// Size: 0xa00 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x9d0(0x08)
	float Intensity; // 0x9d8(0x04)
	float Tightness; // 0x9dc(0x04)
	char *8ca033cb16 : 1; // 0x9e0(0x01)
	char pad_9E1[0x1f]; // 0x9e1(0x1f)

	void SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity //  // @ game+0xf4f4648
};

// Class Engine.RadialForceComponent
// Size: 0x4b0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x478(0x04)
	enum class *3ce1b7244c Falloff; // 0x47c(0x01)
	float ImpulseStrength; // 0x480(0x04)
	char bImpulseVelChange : 1; // 0x484(0x01)
	char bIgnoreOwningActor : 1; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	float ForceStrength; // 0x488(0x04)
	float DestructibleDamage; // 0x48c(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x490(0x10)
	char pad_4A0[0x10]; // 0x4a0(0x10)

	void *d61ee48275(); // Function Engine.RadialForceComponent.*d61ee48275 //  // @ game+0xe195efc
	void *cf45a98f53(); // Function Engine.RadialForceComponent.*cf45a98f53 //  // @ game+0xf4bbb54
	void *cae36922e8(); // Function Engine.RadialForceComponent.*cae36922e8 //  // @ game+0xf40693c
};

// Class Engine.TextureCube
// Size: 0x2d0 (Inherited: 0x180)  [layout: LECH - offset chi la uoc luong]
struct UTextureCube : UTexture {
	bool *6f96e35d32; // 0x180(0x01)
	char pad_181[0x14f]; // 0x181(0x14f)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x4c0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *96e4312512; // 0x478(0x08)
	enum class *95e0c5b63a ReflectionSourceType; // 0x480(0x01)
	bool bOverrideCullDistance; // 0x481(0x01)
	enum class *dc9bbb7e1b IndoorOutdoorMask; // 0x482(0x01)
	char pad_483[0x5]; // 0x483(0x05)
	struct UTextureCube* Cubemap; // 0x488(0x08)
	struct UTextureCube* *08a9d700a9; // 0x490(0x08)
	float SourceCubemapAngle; // 0x498(0x04)
	float Brightness; // 0x49c(0x04)
	struct FVector CaptureOffset; // 0x4a0(0x0c)
	float CullDistance; // 0x4ac(0x04)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void *91e0f436b3(); // Function Engine.ReflectionCaptureComponent.*91e0f436b3 //  // @ game+0x1053c04
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x4d0 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x4c0(0x04)
	char pad_4C4[0xc]; // 0x4c4(0x0c)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x4d0 (Inherited: 0x4d0)  [layout: KHOP]
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
};

// Class Engine.*fdb30165ad
// Size: 0x4e0 (Inherited: 0x4c0)  [layout: LECH - offset chi la uoc luong]
struct U*fdb30165ad : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct U*bdf092b520* *a0910b3adb; // 0x4c8(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// Class Engine.*11cbdf21e8
// Size: 0x4d0 (Inherited: 0x4c0)  [layout: KHOP]
struct U*11cbdf21e8 : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x4c0(0x04)
	float *2fc121ad9f; // 0x4c4(0x04)
	struct U*bdf092b520* *a0910b3adb; // 0x4c8(0x08)
};

// Class Engine.*0a1c7444f9
// Size: 0x5e0 (Inherited: 0x500)  [layout: LECH - offset chi la uoc luong]
struct U*0a1c7444f9 : USceneCaptureComponent {
	struct UBoxComponent* *376ae93f74; // 0x500(0x08)
	float *154e44c8ef; // 0x508(0x04)
	float *7ef7dd46c8; // 0x50c(0x04)
	float *d9e9218c85; // 0x510(0x04)
	int32 ScreenPercentage; // 0x514(0x04)
	float *f2642ebfc1; // 0x518(0x04)
	float DistanceFromPlaneFadeStart; // 0x51c(0x04)
	float DistanceFromPlaneFadeEnd; // 0x520(0x04)
	float *46a9e40118; // 0x524(0x04)
	float *782cf7aa8c; // 0x528(0x04)
	float *9c58998948; // 0x52c(0x04)
	float *2ab47a8458; // 0x530(0x04)
	bool *9d9be28c28; // 0x534(0x01)
	char pad_535[0xab]; // 0x535(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x510 (Inherited: 0x500)  [layout: LECH - offset chi la uoc luong]
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene //  // @ game+0xf4331e4
};

// Class Engine.*ac44511b18
// Size: 0x510 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*ac44511b18 : USceneComponent {
	char bLiveTexture : 1; // 0x478(0x01)
	char bSupportsDepth : 1; // 0x478(0x01)
	char bNoAlphaChannel : 1; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UTexture* Texture; // 0x480(0x08)
	struct UTexture* LeftTexture; // 0x488(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	struct FVector2D QuadSize; // 0x494(0x08)
	struct FBox2D UVRect; // 0x49c(0x14)
	float CylinderRadius; // 0x4b0(0x04)
	float CylinderOverlayArc; // 0x4b4(0x04)
	int32 CylinderHeight; // 0x4b8(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x4bc(0x01)
	enum class *74e6c36e18 StereoLayerShape; // 0x4bd(0x01)
	char pad_4BE[0x2]; // 0x4be(0x02)
	int32 Priority; // 0x4c0(0x04)
	char pad_4C4[0x4c]; // 0x4c4(0x4c)

	void *ceb62f139a(); // Function Engine.*ac44511b18.*ceb62f139a //  // @ game+0xda99878
	void *cc50f53483(); // Function Engine.*ac44511b18.*cc50f53483 //  // @ game+0xf493890
	void *b63d2a9d1f(); // Function Engine.*ac44511b18.*b63d2a9d1f //  // @ game+0xf46ad60
	void *132b498a24(); // Function Engine.*ac44511b18.*132b498a24 //  // @ game+0xf5195f4
	void *97c380e051(); // Function Engine.*ac44511b18.*97c380e051 //  // @ game+0xf5188e4
	void SetPriority(); // Function Engine.*ac44511b18.SetPriority //  // @ game+0xf50c638
	void *3159a5bc99(); // Function Engine.*ac44511b18.*3159a5bc99 //  // @ game+0xf50d0a8
	void *c792d28d3b(); // Function Engine.*ac44511b18.*c792d28d3b //  // @ game+0xdbcf3b4
	void *41d3c571f6(); // Function Engine.*ac44511b18.*41d3c571f6 //  // @ game+0xf474bcc
};

// Class Engine.*ba79c90513
// Size: 0x4a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*ba79c90513 : USceneComponent {
	float Strength; // 0x478(0x04)
	float Speed; // 0x47c(0x04)
	float MinGustAmount; // 0x480(0x04)
	float MaxGustAmount; // 0x484(0x04)
	float Radius; // 0x488(0x04)
	char bPointWind : 1; // 0x48c(0x01)
	char pad_48D[0x13]; // 0x48d(0x13)

	void SetSpeed(); // Function Engine.*ba79c90513.SetSpeed //  // @ game+0xf511b0c
	void *1ac7a62aad(); // Function Engine.*ba79c90513.*1ac7a62aad //  // @ game+0xf4fd698
	void SetRadius(); // Function Engine.*ba79c90513.SetRadius //  // @ game+0xf50d120
	void *630759a876(); // Function Engine.*ba79c90513.*630759a876 //  // @ game+0xf4fea1c
	void SetStrength(); // Function Engine.*ba79c90513.SetStrength //  // @ game+0xf51571c
	void *605534cdc3(); // Function Engine.*ba79c90513.*605534cdc3 //  // @ game+0xf52055c
};

// Class Engine.*4d50a149b3
// Size: 0x480 (Inherited: 0x480)  [layout: KHOP]
struct U*4d50a149b3 : USceneComponent {
	float *8ff62ec260; // 0x478(0x04)
	float *4e1136babb; // 0x47c(0x04)
};

// Class Engine.TimelineComponent
// Size: 0x300 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct UTimelineComponent : UActorComponent {
	struct FTimeline *739fd6464d; // 0x210(0xe0) rep=OnRep_Timeline
	char *f2995997a9 : 1; // 0x2f0(0x01)
	char pad_2F1[0xf]; // 0x2f1(0x0f)

	void IsLooping(); // Function Engine.TimelineComponent.IsLooping //  // @ game+0xf480e24
	void Play(); // Function Engine.TimelineComponent.Play //  // @ game+0xcf8c94
	void SetPlaybackPosition(); // Function Engine.TimelineComponent.SetPlaybackPosition //  // @ game+0xf5076a4
	void IsPlaying(); // Function Engine.TimelineComponent.IsPlaying //  // @ game+0xf480f14
	void *a539683646(); // Function Engine.TimelineComponent.*a539683646 //  // @ game+0xf46a568
	void SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve //  // @ game+0xf4f8388
	void GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate //  // @ game+0xf46a550
	void *cf6182c23e(); // Function Engine.TimelineComponent.*cf6182c23e //  // @ game+0xf464e58
	void SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate //  // @ game+0xf506d30
	void *5e6b9d8f26(); // Function Engine.TimelineComponent.*5e6b9d8f26 //  // @ game+0xf472ecc
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart //  // @ game+0xcf8c48
	void *6c8c3c0b08(); // Function Engine.TimelineComponent.*6c8c3c0b08 //  // @ game+0xf481280
	void *603b499a04(); // Function Engine.TimelineComponent.*603b499a04 //  // @ game+0xf4f12d4
	void Stop(); // Function Engine.TimelineComponent.Stop //  // @ game+0xf540c6c
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline //  // @ game+0xf49f5d4
	void *07c7fedc41(); // Function Engine.TimelineComponent.*07c7fedc41 //  // @ game+0xf5192e0
	void SetLooping(); // Function Engine.TimelineComponent.SetLooping //  // @ game+0xf4fd594
	void *1e2509af30(); // Function Engine.TimelineComponent.*1e2509af30 //  // @ game+0xf51896c
	void SetNewTime(); // Function Engine.TimelineComponent.SetNewTime //  // @ game+0x11e5a40
	void SetVectorCurve(); // Function Engine.TimelineComponent.SetVectorCurve //  // @ game+0xf51a2c4
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd //  // @ game+0xf4bd8b0
	void Reverse(); // Function Engine.TimelineComponent.Reverse //  // @ game+0xf4bd880
	void SetFloatCurve(); // Function Engine.TimelineComponent.SetFloatCurve //  // @ game+0xf4e58fc
};

// Class Engine.AnimComposite
// Size: 0xb8 (Inherited: 0xa8)  [layout: KHOP]
struct UAnimComposite : U*c61e7fd52f {
	struct F*d1e5bdb7b8 *211e18ffbe; // 0xa8(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*48bdbe8904> *ace8f5f5f1; // 0xb0(0x10)
	char pad_C0[0x98]; // 0xc0(0x98)
	enum class EAdditiveAnimationType *ad67060ffe; // 0x158(0x01)
	enum class *2194bae407 *73de25cb99; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct UAnimSequence* *fd803b54ee; // 0x160(0x08)
	int32 *8d5289941b; // 0x168(0x04)
	int32 *4ce41d7d99; // 0x16c(0x04)
	struct FName RetargetSource; // 0x170(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x178(0x01)
	bool *eba457c398; // 0x179(0x01)
	bool *7be910a8ba; // 0x17a(0x01)
	enum class ERootMotionRootLock *416ef36296; // 0x17b(0x01)
	bool *c966eb2c3e; // 0x17c(0x01)
	bool *a91119d996; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct TArray<struct F*8882c248bf> AuthoredSyncMarkers; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x148 (Inherited: 0x80)  [layout: KHOP]
struct UBlendSpaceBase : UAnimationAsset {
	char pad_80[0x8]; // 0x80(0x08)
	bool *a748d9dee8; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float AnimLength; // 0x8c(0x04)
	struct TArray<struct F*b74054cc0b> *39b116aca1; // 0x90(0x10)
	struct FInterpolationParameter *d2b48ab7dd[0x03]; // 0xa0(0x18)
	float *fd231c05fe; // 0xb8(0x04)
	enum class ENotifyTriggerMode *9302c1f58d; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *6b480437d6; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc8(0x10)
	struct TArray<struct F*03da6e385e> *504403a68e; // 0xd8(0x10)
	struct FBlendParameter *79f786e81a[0x03]; // 0xe8(0x60)
};

// Class Engine.BlendSpace
// Size: 0x150 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UBlendSpace : UBlendSpaceBase {
	enum class *2c21681ba0 *574c7cf6f9; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x150 (Inherited: 0x150)  [layout: KHOP]
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x150 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UBlendSpace1D : UBlendSpaceBase {
	bool *504615fc27; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x150 (Inherited: 0x150)  [layout: KHOP]
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UPoseAsset : UAnimationAsset {
	struct F*d41a5e4f2f *096e7d6fcd; // 0x80(0x90)
	bool *7249bdaecc; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32 *9d27cd9323; // 0x114(0x04)
	struct FName RetargetSource; // 0x118(0x08)
	char pad_120[0x70]; // 0x120(0x70)
};

// Class Engine.*e8e8185420
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*e8e8185420 : UObject {
};

// Class Engine.*e6254a3392
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*e6254a3392 : UInterface {
};

// Class Engine.AnimClassData
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct UAnimClassData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*6ba36945a0> BakedStateMachines; // 0x38(0x10)
	struct USkeleton* TargetSkeleton; // 0x48(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x50(0x10)
	int32 *90e7369814; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32> OrderedSavedPoseIndices; // 0x68(0x10)
	struct UStructProperty* *5f1735769d; // 0x78(0x08)
	struct TArray<struct UStructProperty*> *f5e1f228ee; // 0x80(0x10)
	struct TArray<struct FName> SyncGroupNames; // 0x90(0x10)
};

// Class Engine.AnimCompress
// Size: 0x50 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress : UObject {
	struct FString Description; // 0x30(0x10)
	char *c3a9eadf59 : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class AnimationCompressionFormat *d4753e9c52; // 0x44(0x01)
	enum class AnimationCompressionFormat *678a06c84e; // 0x45(0x01)
	enum class AnimationCompressionFormat *748d11cef9; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	float *c610831c43; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress_Automatic : UAnimCompress {
	float *b6318b1bf1; // 0x50(0x04)
	char *a2547c4c3c : 1; // 0x54(0x01)
	char *a56e669b01 : 1; // 0x54(0x01)
	char *fdec47cfd9 : 1; // 0x54(0x01)
	char *74cebcc19b : 1; // 0x54(0x01)
	char *7a973ba2a7 : 1; // 0x54(0x01)
	char *4098a8598c : 1; // 0x54(0x01)
	char *b765bc5750 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct UAnimCompress_LeastDestructive : UAnimCompress {
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32 *57b30c7f9b; // 0x50(0x04)
	char *e33d078600 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x70 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *cd3be6e10e; // 0x50(0x04)
	float *158e208d83; // 0x54(0x04)
	float *9fd2b6b974; // 0x58(0x04)
	float *6e0f779223; // 0x5c(0x04)
	float *bb56d2ac1f; // 0x60(0x04)
	float *3f62e45a99; // 0x64(0x04)
	float *a021679b6b; // 0x68(0x04)
	char *4a54bd2e56 : 1; // 0x6c(0x01)
	char *277fd2da45 : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xf0 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *5665fb9e07; // 0x70(0x04)
	float *516f2ffdc2; // 0x74(0x04)
	float *bb9639d09a; // 0x78(0x04)
	float *a14b432714; // 0x7c(0x04)
	struct TArray<enum class AnimationCompressionFormat> *76fa1cd90a; // 0x80(0x10)
	struct TArray<enum class AnimationCompressionFormat> *db64958209; // 0x90(0x10)
	struct TArray<enum class AnimationCompressionFormat> *4db7c4fadf; // 0xa0(0x10)
	char bResampleAnimation : 1; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float *9aa3759aa5; // 0xb4(0x04)
	int32 *46a5f25b34; // 0xb8(0x04)
	char *4794a2a36b : 1; // 0xbc(0x01)
	char *d2ca1fccdf : 1; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *505b9fa31f; // 0xc0(0x04)
	float *6a3517d77e; // 0xc4(0x04)
	float *fc78018fa2; // 0xc8(0x04)
	char *51bf05c2a1 : 1; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float *e36a3b4478; // 0xd0(0x04)
	float *451f928e2e; // 0xd4(0x04)
	float *62c27de0e3; // 0xd8(0x04)
	float *e6cb757fe2; // 0xdc(0x04)
	float *cf0ccb0780; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x60 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *cd3be6e10e; // 0x50(0x04)
	float *158e208d83; // 0x54(0x04)
	float *9fd2b6b974; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*9b7cc1d746
// Size: 0x3c0 (Inherited: 0x3a8)  [layout: KHOP]
struct U*9b7cc1d746 : UAnimInstance {
	struct UAnimationAsset* *506cee9258; // 0x3a8(0x08)
	DelegateProperty *9d7d17b2ec; // 0x3b0(0x10)

	void *d1eca3e912(); // Function Engine.*9b7cc1d746.*d1eca3e912 //  // @ game+0xf468138
	void *de845f9edb(); // Function Engine.*9b7cc1d746.*de845f9edb //  // @ game+0xf4cb378
	void *985a83ea1b(); // Function Engine.*9b7cc1d746.*985a83ea1b //  // @ game+0xf50bc38
	void *202b901df5(); // Function Engine.*9b7cc1d746.*202b901df5 //  // @ game+0xf50dbf4
	void *5a83881fa2(); // Function Engine.*9b7cc1d746.*5a83881fa2 //  // @ game+0xf50965c
	void *3b954f5361(); // Function Engine.*9b7cc1d746.*3b954f5361 //  // @ game+0xf4a2890
	void *372b8b6937(); // Function Engine.*9b7cc1d746.*372b8b6937 //  // @ game+0xf508248
	void *f747cb4bed(); // Function Engine.*9b7cc1d746.*f747cb4bed //  // @ game+0xf4cd9a4
	void *efd6e300ac(); // Function Engine.*9b7cc1d746.*efd6e300ac //  // @ game+0xf540c84
	void SetLooping(); // Function Engine.*9b7cc1d746.SetLooping //  // @ game+0xf4fd518
	void SetPlayRate(); // Function Engine.*9b7cc1d746.SetPlayRate //  // @ game+0xf505a48
	void SetPosition(); // Function Engine.*9b7cc1d746.SetPosition //  // @ game+0xf5082c4
};

// Class Engine.*b12630f5a4
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b12630f5a4 : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x60 (Inherited: 0x40)  [layout: KHOP]
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x40(0x08)
	float VolumeMultiplier; // 0x48(0x04)
	float PitchMultiplier; // 0x4c(0x04)
	char bFollow : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName AttachName; // 0x58(0x08)
};

// Class Engine.*738e42adb1
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*738e42adb1 : UAnimNotify {
};

// Class Engine.*69fc398eee
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*69fc398eee : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x68 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bDestroyAtEnd; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x68 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName FirstSocketName; // 0x40(0x08)
	struct FName SecondSocketName; // 0x48(0x08)
	enum class *fb368dcb8a WidthScaleMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName WidthScaleCurve; // 0x58(0x08)
	char bRecycleSpawnedSystems : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	void OverridePSTemplate(); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate //  // @ game+0x43bab4
};

// Class Engine.AnimSet
// Size: 0xf8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAnimSet : UObject {
	char *203b2d1256 : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FName> *d8bfb423b9; // 0x38(0x10)
	struct TArray<struct F*947438f83e> *0eb594737d; // 0x48(0x10)
	struct TArray<bool> *405bf42ab1; // 0x58(0x10)
	struct TArray<bool> *1388565e06; // 0x68(0x10)
	struct TArray<struct FName> *1ba09901bc; // 0x78(0x10)
	struct TArray<struct FName> *f510acfc12; // 0x88(0x10)
	struct FName *41991349e1; // 0x98(0x08)
	struct FName *48b230e203; // 0xa0(0x08)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class Engine.AssetImportData
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UAssetImportData : UObject {
};

// Class Engine.AssetMappingTable
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UAssetMappingTable : UObject {
	struct TArray<struct F*fa0d9b84b5> *c67e82e574; // 0x30(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x328 (Inherited: 0x30)  [layout: KHOP]
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x30(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x40(0x10)
	struct FStringAssetReference AutomationTestmap; // 0x50(0x10)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen; // 0x70(0x10)
	struct FBuildPromotionTestSettings BuildPromotionTest; // 0x80(0x1f0)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x270(0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a0(0x10)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b0(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2e0(0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools; // 0x2f0(0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x300(0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; // 0x310(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x320(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UAvoidanceManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float DefaultTimeToLive; // 0x38(0x04)
	float LockTimeAfterAvoid; // 0x3c(0x04)
	float LockTimeAfterClean; // 0x40(0x04)
	float DeltaTimeToPredict; // 0x44(0x04)
	float ArtificialRadiusExpansion; // 0x48(0x04)
	float TestHeightDifference; // 0x4c(0x04)
	float HeightCheckMargin; // 0x50(0x04)
	char pad_54[0x94]; // 0x54(0x94)

	void *bf6f1aad87(); // Function Engine.AvoidanceManager.*bf6f1aad87 //  // @ game+0xf469e68
	void *dcd42b172b(); // Function Engine.AvoidanceManager.*dcd42b172b //  // @ game+0xf45fb70
	void *71e9e7790a(); // Function Engine.AvoidanceManager.*71e9e7790a //  // @ game+0xf45fc08
	void *b7cb42483d(); // Function Engine.AvoidanceManager.*b7cb42483d //  // @ game+0xf4bae44
	void *60d5881068(); // Function Engine.AvoidanceManager.*60d5881068 //  // @ game+0xf469fe8
	void *f4325d160f(); // Function Engine.AvoidanceManager.*f4325d160f //  // @ game+0xf45f194
};

// Class Engine.BlendProfile
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UBlendProfile : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* *2a4cb031aa; // 0x38(0x08)
	struct TArray<struct F*41857ca1be> *afaf9b14b7; // 0x40(0x10)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)  [layout: LECH - offset chi la uoc luong]
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0x198(0x08)
	struct TArray<struct F*e8a979fbac> Groups; // 0x1a0(0x10)
	bool *a5ff024060; // 0x1b0(0x01)
	bool *a95aa9dda4; // 0x1b1(0x01)
	char pad_1B2[0xe]; // 0x1b2(0x0e)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)  [layout: KHOP]
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.*72097d419a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*72097d419a : UBlueprintFunctionLibrary {

	void *7c3d4105dd(); // Function Engine.*72097d419a.*7c3d4105dd //  // @ game+0xf4934d4
	void *b28765a5cf(); // Function Engine.*72097d419a.*b28765a5cf //  // @ game+0xf492bc8
	void *5d51d9bc46(); // Function Engine.*72097d419a.*5d51d9bc46 //  // @ game+0xf493208
	void *0dcda80dbc(); // Function Engine.*72097d419a.*0dcda80dbc //  // @ game+0xf492ed0
	void *3955a81dac(); // Function Engine.*72097d419a.*3955a81dac //  // @ game+0xf4936d8
	void *2752ef475c(); // Function Engine.*72097d419a.*2752ef475c //  // @ game+0xf4933c0
	void *df43ccb0bd(); // Function Engine.*72097d419a.*df43ccb0bd //  // @ game+0xf4928f8
	void *90de784c89(); // Function Engine.*72097d419a.*90de784c89 //  // @ game+0xf492cc8
};

// Class Engine.*469fb0089a
// Size: 0x2a0 (Inherited: 0x1f0)  [layout: KHOP]
struct U*469fb0089a : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x230(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x240(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x250(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x260(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x270(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x280(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x290(0x10)

	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformReceivedRemoteNotificationDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformReceivedLocalNotificationDelegate__DelegateSignature //  // @ game+0x43bab4
	void PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*469fb0089a.PlatformScreenOrientationChangedDelegate__DelegateSignature //  // @ game+0x43bab4
};

// Class Engine.*08cf672d58
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*08cf672d58 : UBlueprintFunctionLibrary {

	void ScheduleLocalNotificationAtTime(); // Function Engine.*08cf672d58.ScheduleLocalNotificationAtTime //  // @ game+0xf4bf8d8
	void ClearAllLocalNotifications(); // Function Engine.*08cf672d58.ClearAllLocalNotifications //  // @ game+0xf435214
	void GetLaunchNotification(); // Function Engine.*08cf672d58.GetLaunchNotification //  // @ game+0xf467e4c
	void *622b2b8561(); // Function Engine.*08cf672d58.*622b2b8561 //  // @ game+0xf4bfc54
	void CancelLocalNotification(); // Function Engine.*08cf672d58.CancelLocalNotification //  // @ game+0xf425470
};

// Class Engine.*bcb0621b18
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*bcb0621b18 : UBlueprintFunctionLibrary {

	void *93a31e9288(); // Function Engine.*bcb0621b18.*93a31e9288 //  // @ game+0xf5234fc
	void *ce4e14a745(); // Function Engine.*bcb0621b18.*ce4e14a745 //  // @ game+0xf524084
	void *5d0319873f(); // Function Engine.*bcb0621b18.*5d0319873f //  // @ game+0xf523b10
	void *c88716a392(); // Function Engine.*bcb0621b18.*c88716a392 //  // @ game+0xf523ecc
	void *25fbd4526e(); // Function Engine.*bcb0621b18.*25fbd4526e //  // @ game+0xf523d14
	void *c97d467b3c(); // Function Engine.*bcb0621b18.*c97d467b3c //  // @ game+0xf5232f8
	void *cf13644a4c(); // Function Engine.*bcb0621b18.*cf13644a4c //  // @ game+0xf52377c
	void *6f7816c89a(); // Function Engine.*bcb0621b18.*6f7816c89a //  // @ game+0xf5231f8
	void *166aa2ad9c(); // Function Engine.*bcb0621b18.*166aa2ad9c //  // @ game+0xf5239fc
	void *72379a3e51(); // Function Engine.*bcb0621b18.*72379a3e51 //  // @ game+0xf522e3c
	void *da36d9475e(); // Function Engine.*bcb0621b18.*da36d9475e //  // @ game+0xf523040
};

// Class Engine.*7219ada56e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*7219ada56e : UBlueprintFunctionLibrary {

	void *a393aca5ac(); // Function Engine.*7219ada56e.*a393aca5ac //  // @ game+0xf450e88
	void *1425e73b89(); // Function Engine.*7219ada56e.*1425e73b89 //  // @ game+0xf462448
	void *eb1aaccbd9(); // Function Engine.*7219ada56e.*eb1aaccbd9 //  // @ game+0xf46285c
};

// Class Engine.*f5b72a5850
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f5b72a5850 : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x160 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UCollisionProfile : U*ba332f0435 {
	struct TArray<struct FCollisionResponseTemplate> Profiles; // 0x40(0x10)
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses; // 0x50(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x60(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x70(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x80(0x10)
	char pad_90[0xd0]; // 0x90(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void PrintWarning(); // Function Engine.KismetSystemLibrary.PrintWarning //  // @ game+0xdadf054
	void *1184700b3e(); // Function Engine.KismetSystemLibrary.*1184700b3e //  // @ game+0xf44315c
	void *4df29e9fbe(); // Function Engine.KismetSystemLibrary.*4df29e9fbe //  // @ game+0xf437224
	void *5d52020dae(); // Function Engine.KismetSystemLibrary.*5d52020dae //  // @ game+0xf484ae8
	void *d6af82cc50(); // Function Engine.KismetSystemLibrary.*d6af82cc50 //  // @ game+0xf4d822c
	void *2c186d3685(); // Function Engine.KismetSystemLibrary.*2c186d3685 //  // @ game+0xf449ec4
	void OnAssetLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature //  // @ game+0x43bab4
	void *ec854c6eee(); // Function Engine.KismetSystemLibrary.*ec854c6eee //  // @ game+0xf4d6334
	void *292734d53c(); // Function Engine.KismetSystemLibrary.*292734d53c //  // @ game+0xf4b3538
	void *d6a8dd3bb5(); // Function Engine.KismetSystemLibrary.*d6a8dd3bb5 //  // @ game+0xf468280
	void BoxTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile //  // @ game+0xf420eac
	void *ccae5b7ed5(); // Function Engine.KismetSystemLibrary.*ccae5b7ed5 //  // @ game+0xf4964d0
	void *b105a5baa7(); // Function Engine.KismetSystemLibrary.*b105a5baa7 //  // @ game+0xf4d822c
	void *f4aa541060(); // Function Engine.KismetSystemLibrary.*f4aa541060 //  // @ game+0xf48c3c8
	void *ad1bc9cb74(); // Function Engine.KismetSystemLibrary.*ad1bc9cb74 //  // @ game+0xf4f5934
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner //  // @ game+0xf458b78
	void *ab3e657b92(); // Function Engine.KismetSystemLibrary.*ab3e657b92 //  // @ game+0xf480990
	void *654c1805de(); // Function Engine.KismetSystemLibrary.*654c1805de //  // @ game+0xf4252f4
	void *ea1145469d(); // Function Engine.KismetSystemLibrary.*ea1145469d //  // @ game+0x1150e64
	void *6bacd714e7(); // Function Engine.KismetSystemLibrary.*6bacd714e7 //  // @ game+0xf4835c0
	void *3f30e4f4da(); // Function Engine.KismetSystemLibrary.*3f30e4f4da //  // @ game+0xf5193e0
	void DrawDebugPlane(); // Function Engine.KismetSystemLibrary.DrawDebugPlane //  // @ game+0xf44b380
	void *c37d70b0d4(); // Function Engine.KismetSystemLibrary.*c37d70b0d4 //  // @ game+0xf4818dc
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace //  // @ game+0xf540c00
	void *f9b2f6a8cf(); // Function Engine.KismetSystemLibrary.*f9b2f6a8cf //  // @ game+0xf5205ec
	void CapsuleTraceMulti(); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti //  // @ game+0xf428008
	void *4e7af17cab(); // Function Engine.KismetSystemLibrary.*4e7af17cab //  // @ game+0xf483714
	void *8055ceb0cc(); // Function Engine.KismetSystemLibrary.*8055ceb0cc //  // @ game+0xf439a40
	void *0413ece0c9(); // Function Engine.KismetSystemLibrary.*0413ece0c9 //  // @ game+0xf4838f4
	void OnAssetClassLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature //  // @ game+0x43bab4
	void BoxOverlapActors(); // Function Engine.KismetSystemLibrary.BoxOverlapActors //  // @ game+0xf41cef4
	void *a46b9e1042(); // Function Engine.KismetSystemLibrary.*a46b9e1042 //  // @ game+0xf480be8
	void DrawDebugCone(); // Function Engine.KismetSystemLibrary.DrawDebugCone //  // @ game+0xf4468e8
	void *66d5a8526d(); // Function Engine.KismetSystemLibrary.*66d5a8526d //  // @ game+0xf524464
	void *3e55f76a24(); // Function Engine.KismetSystemLibrary.*3e55f76a24 //  // @ game+0x11d56b4
	void *4d50e50d7f(); // Function Engine.KismetSystemLibrary.*4d50e50d7f //  // @ game+0xf462c90
	void *e3d6f122f5(); // Function Engine.KismetSystemLibrary.*e3d6f122f5 //  // @ game+0xf436ebc
	void *08eccf2f6f(); // Function Engine.KismetSystemLibrary.*08eccf2f6f //  // @ game+0xf4488dc
	void *d2153b3196(); // Function Engine.KismetSystemLibrary.*d2153b3196 //  // @ game+0xf481968
	void IsServer(); // Function Engine.KismetSystemLibrary.IsServer //  // @ game+0xf4812a0
	void *883880c683(); // Function Engine.KismetSystemLibrary.*883880c683 //  // @ game+0xf451990
	void *086c2a7350(); // Function Engine.KismetSystemLibrary.*086c2a7350 //  // @ game+0xf4cf444
	void *f90f0ba0d9(); // Function Engine.KismetSystemLibrary.*f90f0ba0d9 //  // @ game+0xf464a80
	void *1698e3d222(); // Function Engine.KismetSystemLibrary.*1698e3d222 //  // @ game+0xf4468e8
	void BoxOverlapComponents(); // Function Engine.KismetSystemLibrary.BoxOverlapComponents //  // @ game+0xf41d3d4
	void *8eb4229530(); // Function Engine.KismetSystemLibrary.*8eb4229530 //  // @ game+0xf48164c
	void SetSuppressViewportTransitionMessage(); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage //  // @ game+0xf517614
	void *fbef2df555(); // Function Engine.KismetSystemLibrary.*fbef2df555 //  // @ game+0x1133f40
	void *66e5032231(); // Function Engine.KismetSystemLibrary.*66e5032231 //  // @ game+0xf4053d0
	void *d059f2e18f(); // Function Engine.KismetSystemLibrary.*d059f2e18f //  // @ game+0xf482a5c
	void *60aa66b79d(); // Function Engine.KismetSystemLibrary.*60aa66b79d //  // @ game+0xf461a90
	void *1ef9380ab2(); // Function Engine.KismetSystemLibrary.*1ef9380ab2 //  // @ game+0xf480920
	void *0cf3b4f570(); // Function Engine.KismetSystemLibrary.*0cf3b4f570 //  // @ game+0xf5007f8
	void *0fb69386e1(); // Function Engine.KismetSystemLibrary.*0fb69386e1 //  // @ game+0xf437074
	void *623d9d94a7(); // Function Engine.KismetSystemLibrary.*623d9d94a7 //  // @ game+0xf48bd0c
	void *677b6ee0cf(); // Function Engine.KismetSystemLibrary.*677b6ee0cf //  // @ game+0xf482e34
	void *d0bd065c9a(); // Function Engine.KismetSystemLibrary.*d0bd065c9a //  // @ game+0xf482f20
	void *a39dd967dc(); // Function Engine.KismetSystemLibrary.*a39dd967dc //  // @ game+0xf484790
	void *35d6e25f6c(); // Function Engine.KismetSystemLibrary.*35d6e25f6c //  // @ game+0xf518738
	void SphereTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile //  // @ game+0xf53c8ac
	void *55be526a47(); // Function Engine.KismetSystemLibrary.*55be526a47 //  // @ game+0xf524754
	void *28aec734d4(); // Function Engine.KismetSystemLibrary.*28aec734d4 //  // @ game+0xf435fe8
	void *dd338b4063(); // Function Engine.KismetSystemLibrary.*dd338b4063 //  // @ game+0xf48ee90
	void CapsuleTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile //  // @ game+0xf4300e4
	void *f4618bb07c(); // Function Engine.KismetSystemLibrary.*f4618bb07c //  // @ game+0xf443488
	void GetPathName(); // Function Engine.KismetSystemLibrary.GetPathName //  // @ game+0xf46a26c
	void *96da87bcda(); // Function Engine.KismetSystemLibrary.*96da87bcda //  // @ game+0xf4e6368
	void SphereTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile //  // @ game+0xf538524
	void SphereTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects //  // @ game+0xf539a70
	void *952341d33e(); // Function Engine.KismetSystemLibrary.*952341d33e //  // @ game+0xf447e38
	void *42e175a0ae(); // Function Engine.KismetSystemLibrary.*42e175a0ae //  // @ game+0xf443f00
	void CapsuleTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects //  // @ game+0xf42be5c
	void *88b4296694(); // Function Engine.KismetSystemLibrary.*88b4296694 //  // @ game+0xf468280
	void *cb2b5a47c1(); // Function Engine.KismetSystemLibrary.*cb2b5a47c1 //  // @ game+0xf482fa0
	void SphereTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects //  // @ game+0xf53e088
	void *0f54d50187(); // Function Engine.KismetSystemLibrary.*0f54d50187 //  // @ game+0xf469c64
	void *610423b551(); // Function Engine.KismetSystemLibrary.*610423b551 //  // @ game+0xf51aa50
	void *729a8fd020(); // Function Engine.KismetSystemLibrary.*729a8fd020 //  // @ game+0xf445de4
	void *a23fd0b69e(); // Function Engine.KismetSystemLibrary.*a23fd0b69e //  // @ game+0x103bcc0
	void CapsuleTraceSingle(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle //  // @ game+0xf42e114
	void *202c1b765e(); // Function Engine.KismetSystemLibrary.*202c1b765e //  // @ game+0xf4cc994
	void *19a8d09891(); // Function Engine.KismetSystemLibrary.*19a8d09891 //  // @ game+0xf474bf0
	void *92b75b8a98(); // Function Engine.KismetSystemLibrary.*92b75b8a98 //  // @ game+0xf4f3bec
	void GetActorBounds(); // Function Engine.KismetSystemLibrary.GetActorBounds //  // @ game+0xf45c9c0
	void *c1bd15f95e(); // Function Engine.KismetSystemLibrary.*c1bd15f95e //  // @ game+0xf50dd78
	void *f6eee615a3(); // Function Engine.KismetSystemLibrary.*f6eee615a3 //  // @ game+0xf45cac4
	void *6407400aa3(); // Function Engine.KismetSystemLibrary.*6407400aa3 //  // @ game+0xf483348
	void K2_SetTimer(); // Function Engine.KismetSystemLibrary.K2_SetTimer //  // @ game+0xf483b10
	void *5aca58c6f1(); // Function Engine.KismetSystemLibrary.*5aca58c6f1 //  // @ game+0xf46b1e8
	void SphereOverlapComponents(); // Function Engine.KismetSystemLibrary.SphereOverlapComponents //  // @ game+0xf536368
	void *a8e6c78b25(); // Function Engine.KismetSystemLibrary.*a8e6c78b25 //  // @ game+0xf44c7f0
	void *90fed53288(); // Function Engine.KismetSystemLibrary.*90fed53288 //  // @ game+0xf483218
	void *b4e10edfc2(); // Function Engine.KismetSystemLibrary.*b4e10edfc2 //  // @ game+0xf44a934
	void *fca3fe0b04(); // Function Engine.KismetSystemLibrary.*fca3fe0b04 //  // @ game+0xf445340
	void *9c75deee36(); // Function Engine.KismetSystemLibrary.*9c75deee36 //  // @ game+0xf48bf90
	void *66942cd99b(); // Function Engine.KismetSystemLibrary.*66942cd99b //  // @ game+0xf44d26c
	void LineTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile //  // @ game+0xf488f24
	void *1da1963a01(); // Function Engine.KismetSystemLibrary.*1da1963a01 //  // @ game+0xf5013d4
	void BoxTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects //  // @ game+0xf41f3a0
	void *c4b8d0cf7b(); // Function Engine.KismetSystemLibrary.*c4b8d0cf7b //  // @ game+0xf4b21f4
	void *2b2365cff3(); // Function Engine.KismetSystemLibrary.*2b2365cff3 //  // @ game+0x1133f40
	void *fa7458c977(); // Function Engine.KismetSystemLibrary.*fa7458c977 //  // @ game+0xf444974
	void *46803c2292(); // Function Engine.KismetSystemLibrary.*46803c2292 //  // @ game+0xf480ba0
	void LineTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects //  // @ game+0xf487528
	void *98fb335bda(); // Function Engine.KismetSystemLibrary.*98fb335bda //  // @ game+0xf482878
	void *cea645f6de(); // Function Engine.KismetSystemLibrary.*cea645f6de //  // @ game+0xf484828
	void *4fe77dd7bc(); // Function Engine.KismetSystemLibrary.*4fe77dd7bc //  // @ game+0xf464768
	void *100e1d6509(); // Function Engine.KismetSystemLibrary.*100e1d6509 //  // @ game+0xf4d1d2c
	void *187891ee37(); // Function Engine.KismetSystemLibrary.*187891ee37 //  // @ game+0xf4619b4
	void *08861da374(); // Function Engine.KismetSystemLibrary.*08861da374 //  // @ game+0xda977bc
	void ShowAdBanner(); // Function Engine.KismetSystemLibrary.ShowAdBanner //  // @ game+0xf524398
	void *e29959abb8(); // Function Engine.KismetSystemLibrary.*e29959abb8 //  // @ game+0xf46b1c4
	void *e08f945fc6(); // Function Engine.KismetSystemLibrary.*e08f945fc6 //  // @ game+0xda95840
	void *dd480780e5(); // Function Engine.KismetSystemLibrary.*dd480780e5 //  // @ game+0xf484908
	void *1cdd87d4f0(); // Function Engine.KismetSystemLibrary.*1cdd87d4f0 //  // @ game+0xda977bc
	void *b41c026a19(); // Function Engine.KismetSystemLibrary.*b41c026a19 //  // @ game+0xf483980
	void Delay(); // Function Engine.KismetSystemLibrary.Delay //  // @ game+0x73afec
	void BoxTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile //  // @ game+0xf41e62c
	void *e021015503(); // Function Engine.KismetSystemLibrary.*e021015503 //  // @ game+0xf482af8
	void LineTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile //  // @ game+0xf486884
	void BoxTraceSingle(); // Function Engine.KismetSystemLibrary.BoxTraceSingle //  // @ game+0xf420144
	void LineTraceSingle(); // Function Engine.KismetSystemLibrary.LineTraceSingle //  // @ game+0xf48823c
	void *f89aea8fdb(); // Function Engine.KismetSystemLibrary.*f89aea8fdb //  // @ game+0xf46a47c
	void CapsuleOverlapActors(); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors //  // @ game+0xf4255ec
	void *8f0c5c26a5(); // Function Engine.KismetSystemLibrary.*8f0c5c26a5 //  // @ game+0xf484b74
	void *01b5887456(); // Function Engine.KismetSystemLibrary.*01b5887456 //  // @ game+0xf44bdd0
	void *788ba73a8c(); // Function Engine.KismetSystemLibrary.*788ba73a8c //  // @ game+0xf471384
	void *36edf17031(); // Function Engine.KismetSystemLibrary.*36edf17031 //  // @ game+0xf482d98
	void BoxTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects //  // @ game+0xf421c10
	void *53074362af(); // Function Engine.KismetSystemLibrary.*53074362af //  // @ game+0xf516a04
	void FlushPersistentDebugLines(); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines //  // @ game+0xda95840
	void *fd7cfc3050(); // Function Engine.KismetSystemLibrary.*fd7cfc3050 //  // @ game+0xf4f8474
	void *f008715ff8(); // Function Engine.KismetSystemLibrary.*f008715ff8 //  // @ game+0xf4644f4
	void *05395051fb(); // Function Engine.KismetSystemLibrary.*05395051fb //  // @ game+0xda977bc
	void *481c40e9f6(); // Function Engine.KismetSystemLibrary.*481c40e9f6 //  // @ game+0xdc51a0
	void *cb44d8bc5a(); // Function Engine.KismetSystemLibrary.*cb44d8bc5a //  // @ game+0xf4bce80
	void ComponentOverlapActors(); // Function Engine.KismetSystemLibrary.ComponentOverlapActors //  // @ game+0xf435ffc
	void SphereTraceMulti(); // Function Engine.KismetSystemLibrary.SphereTraceMulti //  // @ game+0xf536f00
	void *1f19f64300(); // Function Engine.KismetSystemLibrary.*1f19f64300 //  // @ game+0xf483180
	void *87d65520ff(); // Function Engine.KismetSystemLibrary.*87d65520ff //  // @ game+0xf635f4
	void *4181b10f3c(); // Function Engine.KismetSystemLibrary.*4181b10f3c //  // @ game+0xec9a7bc
	void PrintString(); // Function Engine.KismetSystemLibrary.PrintString //  // @ game+0xfe0b08
	void *8a7b2c997e(); // Function Engine.KismetSystemLibrary.*8a7b2c997e //  // @ game+0xf483528
	void *c125d6209d(); // Function Engine.KismetSystemLibrary.*c125d6209d //  // @ game+0xf4493a8
	void *69a2481952(); // Function Engine.KismetSystemLibrary.*69a2481952 //  // @ game+0xf469c44
	void CapsuleOverlapComponents(); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents //  // @ game+0xf426a18
	void *9584ff5677(); // Function Engine.KismetSystemLibrary.*9584ff5677 //  // @ game+0xf48ebd0
	void *1fa1266a99(); // Function Engine.KismetSystemLibrary.*1fa1266a99 //  // @ game+0xf481330
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner //  // @ game+0xf47e4ec
	void CapsuleTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects //  // @ game+0xf432348
	void *8afeeaa76c(); // Function Engine.KismetSystemLibrary.*8afeeaa76c //  // @ game+0x1053c04
	void *d706de3681(); // Function Engine.KismetSystemLibrary.*d706de3681 //  // @ game+0xf4845b0
	void LaunchURL(); // Function Engine.KismetSystemLibrary.LaunchURL //  // @ game+0xf485234
	void ComponentOverlapComponents(); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents //  // @ game+0xf4364dc
	void SphereOverlapActors(); // Function Engine.KismetSystemLibrary.SphereOverlapActors //  // @ game+0xf5357d0
	void *847ab8da85(); // Function Engine.KismetSystemLibrary.*847ab8da85 //  // @ game+0xf480ca8
	void IsValid(); // Function Engine.KismetSystemLibrary.IsValid //  // @ game+0xdc51a0
	void *536f0be854(); // Function Engine.KismetSystemLibrary.*536f0be854 //  // @ game+0xf464910
	void CapsuleTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile //  // @ game+0xf429fd4
	void *4e01daa987(); // Function Engine.KismetSystemLibrary.*4e01daa987 //  // @ game+0xf4473e8
	void *cd4c409ce6(); // Function Engine.KismetSystemLibrary.*cd4c409ce6 //  // @ game+0xf51a1cc
	void *8c37c624fb(); // Function Engine.KismetSystemLibrary.*8c37c624fb //  // @ game+0x1053c04
	void LineTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects //  // @ game+0xf489c08
	void *38ce5091b0(); // Function Engine.KismetSystemLibrary.*38ce5091b0 //  // @ game+0xf48172c
	void *89c53bbd6e(); // Function Engine.KismetSystemLibrary.*89c53bbd6e //  // @ game+0xf4ccba8
	void *94b31cbd94(); // Function Engine.KismetSystemLibrary.*94b31cbd94 //  // @ game+0xf482bb4
	void *6b360ab006(); // Function Engine.KismetSystemLibrary.*6b360ab006 //  // @ game+0xf4381b4
	void SphereTraceSingle(); // Function Engine.KismetSystemLibrary.SphereTraceSingle //  // @ game+0xf53b284
	void *ac59bee9b0(); // Function Engine.KismetSystemLibrary.*ac59bee9b0 //  // @ game+0xf48eb5c
	void *3d0af0637c(); // Function Engine.KismetSystemLibrary.*3d0af0637c //  // @ game+0xf48eae8
	void *181d747fe5(); // Function Engine.KismetSystemLibrary.*181d747fe5 //  // @ game+0xf461d94
	void *72a582c4b1(); // Function Engine.KismetSystemLibrary.*72a582c4b1 //  // @ game+0xf461b10
	void LineTraceMulti(); // Function Engine.KismetSystemLibrary.LineTraceMulti //  // @ game+0xf485be0
	void *4cac0daca3(); // Function Engine.KismetSystemLibrary.*4cac0daca3 //  // @ game+0xf462e54
	void *b92e0a4275(); // Function Engine.KismetSystemLibrary.*b92e0a4275 //  // @ game+0xf45cdb0
	void ShowPlatformSpecificLeaderboardScreen(); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen //  // @ game+0xf5248c8
	void *3e5933c3de(); // Function Engine.KismetSystemLibrary.*3e5933c3de //  // @ game+0xf46ad18
	void *a71ea96f57(); // Function Engine.KismetSystemLibrary.*a71ea96f57 //  // @ game+0xf4836a4
	void BoxTraceMulti(); // Function Engine.KismetSystemLibrary.BoxTraceMulti //  // @ game+0xf41d8b4
};

// Class Engine.GameplayStatics
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void *88b957998d(); // Function Engine.GameplayStatics.*88b957998d //  // @ game+0xf469f28
	void SetBaseSoundMix(); // Function Engine.GameplayStatics.SetBaseSoundMix //  // @ game+0xf4cd8a8
	void *1f557f8b07(); // Function Engine.GameplayStatics.*1f557f8b07 //  // @ game+0xf416d1c
	void *938113951d(); // Function Engine.GameplayStatics.*938113951d //  // @ game+0xf4620fc
	void PushSoundMixModifier(); // Function Engine.GameplayStatics.PushSoundMixModifier //  // @ game+0xf4b3178
	void *3c9e305b80(); // Function Engine.GameplayStatics.*3c9e305b80 //  // @ game+0xf441230
	void SetSoundMixClassOverride(); // Function Engine.GameplayStatics.SetSoundMixClassOverride //  // @ game+0xf50ebd4
	void *3399e0b4df(); // Function Engine.GameplayStatics.*3399e0b4df //  // @ game+0xf45f10c
	void *9b8560d0bd(); // Function Engine.GameplayStatics.*9b8560d0bd //  // @ game+0xf4a3354
	void *4a9b804195(); // Function Engine.GameplayStatics.*4a9b804195 //  // @ game+0xf443214
	void *9cee7bdc11(); // Function Engine.GameplayStatics.*9cee7bdc11 //  // @ game+0xf416748
	void *a0c7f17d27(); // Function Engine.GameplayStatics.*a0c7f17d27 //  // @ game+0xf458b0c
	void *008a3fc079(); // Function Engine.GameplayStatics.*008a3fc079 //  // @ game+0xf5278c8
	void *c10b7b690a(); // Function Engine.GameplayStatics.*c10b7b690a //  // @ game+0xf42545c
	void PopSoundMixModifier(); // Function Engine.GameplayStatics.PopSoundMixModifier //  // @ game+0xf4b2068
	void *e87bae2d8a(); // Function Engine.GameplayStatics.*e87bae2d8a //  // @ game+0xf4712cc
	void *5e7489319f(); // Function Engine.GameplayStatics.*5e7489319f //  // @ game+0xf4ab7e8
	void Blueprint_PredictProjectilePath_ByObjectType(); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType //  // @ game+0xf418c58
	void BeginSpawningActorFromBlueprint(); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint //  // @ game+0xf416914
	void *64843df6ca(); // Function Engine.GameplayStatics.*64843df6ca //  // @ game+0xf40bb4c
	void *e968ec25f3(); // Function Engine.GameplayStatics.*e968ec25f3 //  // @ game+0xf542ef4
	void *f37d795282(); // Function Engine.GameplayStatics.*f37d795282 //  // @ game+0xf464988
	void SetGlobalPitchModulation(); // Function Engine.GameplayStatics.SetGlobalPitchModulation //  // @ game+0xf4eea54
	void *6fedb9e867(); // Function Engine.GameplayStatics.*6fedb9e867 //  // @ game+0xf41bea8
	void BeginSpawningActorFromClass(); // Function Engine.GameplayStatics.BeginSpawningActorFromClass //  // @ game+0xf416b34
	void *c965dedc21(); // Function Engine.GameplayStatics.*c965dedc21 //  // @ game+0xf441410
	void *81a4bcd2a0(); // Function Engine.GameplayStatics.*81a4bcd2a0 //  // @ game+0xf46a580
	void GetGameMode(); // Function Engine.GameplayStatics.GetGameMode //  // @ game+0xf464a04
	void GetAllActorsOfClass(); // Function Engine.GameplayStatics.GetAllActorsOfClass //  // @ game+0x12280c8
	void GetPlayerPawn(); // Function Engine.GameplayStatics.GetPlayerPawn //  // @ game+0x122e2c8
	void SpawnEmitterAttached(); // Function Engine.GameplayStatics.SpawnEmitterAttached //  // @ game+0xf52d41c
	void *e477063db6(); // Function Engine.GameplayStatics.*e477063db6 //  // @ game+0xf52fe40
	void CreateSaveGameObjectFromBlueprint(); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint //  // @ game+0xf439de8
	void *9a07708b54(); // Function Engine.GameplayStatics.*9a07708b54 //  // @ game+0xf520764
	void *b372ea6df3(); // Function Engine.GameplayStatics.*b372ea6df3 //  // @ game+0xf531cdc
	void *8dc2cbe68f(); // Function Engine.GameplayStatics.*8dc2cbe68f //  // @ game+0xf47b89c
	void *b231c3abda(); // Function Engine.GameplayStatics.*b231c3abda //  // @ game+0xf530018
	void *e61248f641(); // Function Engine.GameplayStatics.*e61248f641 //  // @ game+0xf472d58
	void *9e67ba12d9(); // Function Engine.GameplayStatics.*9e67ba12d9 //  // @ game+0xf4ea018
	void SpawnSoundAttached(); // Function Engine.GameplayStatics.SpawnSoundAttached //  // @ game+0xf5339b8
	void *635a6906db(); // Function Engine.GameplayStatics.*635a6906db //  // @ game+0xf48c214
	void *9fb17a103a(); // Function Engine.GameplayStatics.*9fb17a103a //  // @ game+0xf412ed8
	void ClearSoundMixModifiers(); // Function Engine.GameplayStatics.ClearSoundMixModifiers //  // @ game+0xf435e2c
	void *d66bf1b1c1(); // Function Engine.GameplayStatics.*d66bf1b1c1 //  // @ game+0xf4124e8
	void *299cf9310e(); // Function Engine.GameplayStatics.*299cf9310e //  // @ game+0x9fb710
	void *b71b242928(); // Function Engine.GameplayStatics.*b71b242928 //  // @ game+0xf4a4fe0
	void *ac09690bdd(); // Function Engine.GameplayStatics.*ac09690bdd //  // @ game+0xf467604
	void *8ec34a440f(); // Function Engine.GameplayStatics.*8ec34a440f //  // @ game+0xf45c774
	void *d08f08bf6c(); // Function Engine.GameplayStatics.*d08f08bf6c //  // @ game+0xf474cdc
	void OpenLevel(); // Function Engine.GameplayStatics.OpenLevel //  // @ game+0xf49f618
	void BreakHitResult(); // Function Engine.GameplayStatics.BreakHitResult //  // @ game+0xf422f10
	void *c8b5f98510(); // Function Engine.GameplayStatics.*c8b5f98510 //  // @ game+0xf439f04
	void UnloadStreamLevel(); // Function Engine.GameplayStatics.UnloadStreamLevel //  // @ game+0xf547930
	void LoadStreamLevel(); // Function Engine.GameplayStatics.LoadStreamLevel //  // @ game+0xf48c444
	void *77430480ea(); // Function Engine.GameplayStatics.*77430480ea //  // @ game+0xf4566bc
	void *686d650ed9(); // Function Engine.GameplayStatics.*686d650ed9 //  // @ game+0xf439c0c
	void *1aa5021b94(); // Function Engine.GameplayStatics.*1aa5021b94 //  // @ game+0x6a7360
	void *aa1861ff24(); // Function Engine.GameplayStatics.*aa1861ff24 //  // @ game+0xf40c904
	void SetGlobalListenerFocusParameters(); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters //  // @ game+0xf4ea0d0
	void *1222bb1963(); // Function Engine.GameplayStatics.*1222bb1963 //  // @ game+0xf52e9dc
	void *720f90136b(); // Function Engine.GameplayStatics.*720f90136b //  // @ game+0xf5080c0
	void CreateSaveGameObject(); // Function Engine.GameplayStatics.CreateSaveGameObject //  // @ game+0xf439cf8
	void *add5f3d636(); // Function Engine.GameplayStatics.*add5f3d636 //  // @ game+0xf5262f4
	void *c002ec4311(); // Function Engine.GameplayStatics.*c002ec4311 //  // @ game+0xf471500
	void *65f97a4199(); // Function Engine.GameplayStatics.*65f97a4199 //  // @ game+0xf4b3030
	void GetGameState(); // Function Engine.GameplayStatics.GetGameState //  // @ game+0x135be20
	void *c15a80e65f(); // Function Engine.GameplayStatics.*c15a80e65f //  // @ game+0xf47dbc0
	void *8da6150ae3(); // Function Engine.GameplayStatics.*8da6150ae3 //  // @ game+0xf462204
	void *59ca28dfef(); // Function Engine.GameplayStatics.*59ca28dfef //  // @ game+0xf4bf678
	void FinishSpawningActor(); // Function Engine.GameplayStatics.FinishSpawningActor //  // @ game+0xf4574f0
	void *33a0cbfc47(); // Function Engine.GameplayStatics.*33a0cbfc47 //  // @ game+0xf45c4e0
	void *40c9fbacd2(); // Function Engine.GameplayStatics.*40c9fbacd2 //  // @ game+0xf45c5e8
	void *06478aca29(); // Function Engine.GameplayStatics.*06478aca29 //  // @ game+0xf464828
	void ClearSoundMixClassOverride(); // Function Engine.GameplayStatics.ClearSoundMixClassOverride //  // @ game+0xf435418
	void *d1bdd1b292(); // Function Engine.GameplayStatics.*d1bdd1b292 //  // @ game+0xf43cd34
	void *d7291e4b72(); // Function Engine.GameplayStatics.*d7291e4b72 //  // @ game+0xf44e8dc
	void *38c52a47dc(); // Function Engine.GameplayStatics.*38c52a47dc //  // @ game+0xf464c4c
	void *ac16ef7a12(); // Function Engine.GameplayStatics.*ac16ef7a12 //  // @ game+0xf4bad48
	void *943649ff79(); // Function Engine.GameplayStatics.*943649ff79 //  // @ game+0xf4af074
	void *167d72a8f7(); // Function Engine.GameplayStatics.*167d72a8f7 //  // @ game+0xf4024b0
	void *fec010379a(); // Function Engine.GameplayStatics.*fec010379a //  // @ game+0xf45cfdc
	void *53fdd3475d(); // Function Engine.GameplayStatics.*53fdd3475d //  // @ game+0xf47df8c
	void *f7093375c0(); // Function Engine.GameplayStatics.*f7093375c0 //  // @ game+0xf480a08
	void MakeHitResult(); // Function Engine.GameplayStatics.MakeHitResult //  // @ game+0xf48dcb0
	void *29cfe0a3d6(); // Function Engine.GameplayStatics.*29cfe0a3d6 //  // @ game+0xf40e938
	void *3311010f32(); // Function Engine.GameplayStatics.*3311010f32 //  // @ game+0xf46a6f0
	void *0ec7bda8f8(); // Function Engine.GameplayStatics.*0ec7bda8f8 //  // @ game+0xf46a638
	void ApplyRadialDamage(); // Function Engine.GameplayStatics.ApplyRadialDamage //  // @ game+0xf40d424
	void SpawnDialogueAttached(); // Function Engine.GameplayStatics.SpawnDialogueAttached //  // @ game+0xf52b360
	void *2078dedaa9(); // Function Engine.GameplayStatics.*2078dedaa9 //  // @ game+0xf4ad3fc
	void SpawnDecalAttached(); // Function Engine.GameplayStatics.SpawnDecalAttached //  // @ game+0xf526da8
	void *8eb7469f2a(); // Function Engine.GameplayStatics.*8eb7469f2a //  // @ game+0xf517594
	void *46e736e8c9(); // Function Engine.GameplayStatics.*46e736e8c9 //  // @ game+0xf52d208
	void *2194b38b5c(); // Function Engine.GameplayStatics.*2194b38b5c //  // @ game+0xf418ad8
	void GetPlayerCameraManager(); // Function Engine.GameplayStatics.GetPlayerCameraManager //  // @ game+0xe67340
	void SetGlobalTimeDilation(); // Function Engine.GameplayStatics.SetGlobalTimeDilation //  // @ game+0xf4efca0
	void *6eae585297(); // Function Engine.GameplayStatics.*6eae585297 //  // @ game+0xf52d624
	void *0dfddbd251(); // Function Engine.GameplayStatics.*0dfddbd251 //  // @ game+0xf4a0368
	void *c7e3af3e29(); // Function Engine.GameplayStatics.*c7e3af3e29 //  // @ game+0xf45cdf8
	void *f10a836cc1(); // Function Engine.GameplayStatics.*f10a836cc1 //  // @ game+0xf5295c0
	void *13f929f5ab(); // Function Engine.GameplayStatics.*13f929f5ab //  // @ game+0xf47964c
	void RemovePlayer(); // Function Engine.GameplayStatics.RemovePlayer //  // @ game+0xf4bbbdc
	void *0c956843ce(); // Function Engine.GameplayStatics.*0c956843ce //  // @ game+0xf467a54
	void *a660c2219b(); // Function Engine.GameplayStatics.*a660c2219b //  // @ game+0xf4bac60
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void *5c52e29360(); // Function Engine.HeadMountedDisplayFunctionLibrary.*5c52e29360 //  // @ game+0xf464ce0
	void GetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin //  // @ game+0xf473198
	void *49a6ce92fb(); // Function Engine.HeadMountedDisplayFunctionLibrary.*49a6ce92fb //  // @ game+0xf469ecc
	void *ba9d6eb952(); // Function Engine.HeadMountedDisplayFunctionLibrary.*ba9d6eb952 //  // @ game+0xf46a004
	void *e45ae27ab3(); // Function Engine.HeadMountedDisplayFunctionLibrary.*e45ae27ab3 //  // @ game+0xf476594
	void *5cc25dec6d(); // Function Engine.HeadMountedDisplayFunctionLibrary.*5cc25dec6d //  // @ game+0xf5211a8
	void *74e32cb147(); // Function Engine.HeadMountedDisplayFunctionLibrary.*74e32cb147 //  // @ game+0xda977bc
	void *2470800d92(); // Function Engine.HeadMountedDisplayFunctionLibrary.*2470800d92 //  // @ game+0xf47b3e0
	void *54f07551bf(); // Function Engine.HeadMountedDisplayFunctionLibrary.*54f07551bf //  // @ game+0xf47e290
	void *9fa890e3cf(); // Function Engine.HeadMountedDisplayFunctionLibrary.*9fa890e3cf //  // @ game+0xf4d6420
	void *e86ddd3cfe(); // Function Engine.HeadMountedDisplayFunctionLibrary.*e86ddd3cfe //  // @ game+0xf480a94
	void *2c74d567f4(); // Function Engine.HeadMountedDisplayFunctionLibrary.*2c74d567f4 //  // @ game+0xf44e810
	void SetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin //  // @ game+0xf519358
	void *9d26663a60(); // Function Engine.HeadMountedDisplayFunctionLibrary.*9d26663a60 //  // @ game+0xf4731dc
	void *d67262ba37(); // Function Engine.HeadMountedDisplayFunctionLibrary.*d67262ba37 //  // @ game+0xda9a408
	void *821cbd0781(); // Function Engine.HeadMountedDisplayFunctionLibrary.*821cbd0781 //  // @ game+0xf46aaa8
	void *3a481e852b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*3a481e852b //  // @ game+0xf480adc
	void *f5c51443e4(); // Function Engine.HeadMountedDisplayFunctionLibrary.*f5c51443e4 //  // @ game+0xf4bc380
	void *06bdd75230(); // Function Engine.HeadMountedDisplayFunctionLibrary.*06bdd75230 //  // @ game+0xf470e44
};

// Class Engine.KismetArrayLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void *b2f65fc6d8(); // Function Engine.KismetArrayLibrary.*b2f65fc6d8 //  // @ game+0xf413fa0
	void *28528d64ab(); // Function Engine.KismetArrayLibrary.*28528d64ab //  // @ game+0xf4cbebc
	void *3a5a6acc9e(); // Function Engine.KismetArrayLibrary.*3a5a6acc9e //  // @ game+0xf4140ac
	void *3918ebba52(); // Function Engine.KismetArrayLibrary.*3918ebba52 //  // @ game+0xf413bb4
	void *298c6e20a2(); // Function Engine.KismetArrayLibrary.*298c6e20a2 //  // @ game+0xf414614
	void *7858f2b553(); // Function Engine.KismetArrayLibrary.*7858f2b553 //  // @ game+0xf413708
	void *96ddb34662(); // Function Engine.KismetArrayLibrary.*96ddb34662 //  // @ game+0xf5d25c
	void Array_Clear(); // Function Engine.KismetArrayLibrary.Array_Clear //  // @ game+0xf4133e0
	void *369789e963(); // Function Engine.KismetArrayLibrary.*369789e963 //  // @ game+0xcca0b8
	void *33ed854f3f(); // Function Engine.KismetArrayLibrary.*33ed854f3f //  // @ game+0xf45571c
	void *63ce0d5e1b(); // Function Engine.KismetArrayLibrary.*63ce0d5e1b //  // @ game+0xf413170
	void *65add690db(); // Function Engine.KismetArrayLibrary.*65add690db //  // @ game+0xf4141ec
	void Array_Add(); // Function Engine.KismetArrayLibrary.Array_Add //  // @ game+0xf412f00
	void Array_Get(); // Function Engine.KismetArrayLibrary.Array_Get //  // @ game+0xf413918
	void *66cfc68784(); // Function Engine.KismetArrayLibrary.*66cfc68784 //  // @ game+0xf4134f4
	void *cfdbb4717b(); // Function Engine.KismetArrayLibrary.*cfdbb4717b //  // @ game+0xf413e58
	void *3691697ebf(); // Function Engine.KismetArrayLibrary.*3691697ebf //  // @ game+0xf4143fc
	void *3cc7a83c10(); // Function Engine.KismetArrayLibrary.*3cc7a83c10 //  // @ game+0x10e7200
};

// Class Engine.*b6943b31e5
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b6943b31e5 : UBlueprintFunctionLibrary {

	void *c07bee90a0(); // Function Engine.*b6943b31e5.*c07bee90a0 //  // @ game+0xf49d540
	void *ed8c093b39(); // Function Engine.*b6943b31e5.*ed8c093b39 //  // @ game+0xf47f950
	void *51e910dce3(); // Function Engine.*b6943b31e5.*51e910dce3 //  // @ game+0xf49bc60
	void *d4244218d7(); // Function Engine.*b6943b31e5.*d4244218d7 //  // @ game+0xf44ea14
	void *707021129c(); // Function Engine.*b6943b31e5.*707021129c //  // @ game+0xf4814ec
	void *6f4ecb1efb(); // Function Engine.*b6943b31e5.*6f4ecb1efb //  // @ game+0xf437dc4
	void *c40fb6fee6(); // Function Engine.*b6943b31e5.*c40fb6fee6 //  // @ game+0xf4a0694
};

// Class Engine.KismetInputLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	void *6742f99c27(); // Function Engine.KismetInputLibrary.*6742f99c27 //  // @ game+0xf4b101c
	void *7f84ebf2ae(); // Function Engine.KismetInputLibrary.*7f84ebf2ae //  // @ game+0xf47f0e8
	void *bb752aba8c(); // Function Engine.KismetInputLibrary.*bb752aba8c //  // @ game+0xf47f46c
	void *62bab578a0(); // Function Engine.KismetInputLibrary.*62bab578a0 //  // @ game+0xf47f51c
	void *18aa6b6190(); // Function Engine.KismetInputLibrary.*18aa6b6190 //  // @ game+0xf44eb14
	void *74b1f5d6c7(); // Function Engine.KismetInputLibrary.*74b1f5d6c7 //  // @ game+0xf4252a8
	void *eb95e93b0e(); // Function Engine.KismetInputLibrary.*eb95e93b0e //  // @ game+0xf47f304
	void *35d54046a8(); // Function Engine.KismetInputLibrary.*35d54046a8 //  // @ game+0xf4b1274
	void *ed2ea61334(); // Function Engine.KismetInputLibrary.*ed2ea61334 //  // @ game+0xf47f5cc
	void *5253434f19(); // Function Engine.KismetInputLibrary.*5253434f19 //  // @ game+0xf484ee8
	void *c3f5de1b5f(); // Function Engine.KismetInputLibrary.*c3f5de1b5f //  // @ game+0xf4b1338
	void *52c0ada192(); // Function Engine.KismetInputLibrary.*52c0ada192 //  // @ game+0xf436e00
	void *24eb4bb714(); // Function Engine.KismetInputLibrary.*24eb4bb714 //  // @ game+0xf485170
	void *43d5984463(); // Function Engine.KismetInputLibrary.*43d5984463 //  // @ game+0xf4b1400
	void *a1c0df6273(); // Function Engine.KismetInputLibrary.*a1c0df6273 //  // @ game+0xf47f034
	void *b43ca1fa94(); // Function Engine.KismetInputLibrary.*b43ca1fa94 //  // @ game+0xf45d1d8
	void *d067b8bc43(); // Function Engine.KismetInputLibrary.*d067b8bc43 //  // @ game+0xf4b0f4c
	void *d664921512(); // Function Engine.KismetInputLibrary.*d664921512 //  // @ game+0xf47f3b8
	void *33dedd034b(); // Function Engine.KismetInputLibrary.*33dedd034b //  // @ game+0xf4b0e7c
	void *cfe6939b16(); // Function Engine.KismetInputLibrary.*cfe6939b16 //  // @ game+0xf436c0c
	void *bfbaaa64cf(); // Function Engine.KismetInputLibrary.*bfbaaa64cf //  // @ game+0xf4850ac
	void *b100639264(); // Function Engine.KismetInputLibrary.*b100639264 //  // @ game+0xf484e24
	void GetUserIndex(); // Function Engine.KismetInputLibrary.GetUserIndex //  // @ game+0xf476498
	void *d9de5bb01a(); // Function Engine.KismetInputLibrary.*d9de5bb01a //  // @ game+0xf47f19c
	void *3697c38b89(); // Function Engine.KismetInputLibrary.*3697c38b89 //  // @ game+0xf47f89c
	void *dd28f21875(); // Function Engine.KismetInputLibrary.*dd28f21875 //  // @ game+0xf484c4c
	void *244e040d2e(); // Function Engine.KismetInputLibrary.*244e040d2e //  // @ game+0xf4b0c70
	void *b4731fb7fd(); // Function Engine.KismetInputLibrary.*b4731fb7fd //  // @ game+0xf4b10e0
	void *57c2dff443(); // Function Engine.KismetInputLibrary.*57c2dff443 //  // @ game+0xf47f250
	void *63ae27884f(); // Function Engine.KismetInputLibrary.*63ae27884f //  // @ game+0xf484d60
	void *b6419f1c26(); // Function Engine.KismetInputLibrary.*b6419f1c26 //  // @ game+0xf44ed30
	void *a46a778610(); // Function Engine.KismetInputLibrary.*a46a778610 //  // @ game+0xf436cc8
	void *ecaa3dd553(); // Function Engine.KismetInputLibrary.*ecaa3dd553 //  // @ game+0xf47f680
	void *a3d781e339(); // Function Engine.KismetInputLibrary.*a3d781e339 //  // @ game+0xf484fe8
	void *d84c668032(); // Function Engine.KismetInputLibrary.*d84c668032 //  // @ game+0xf4b11b0
	void *6105f6fb06(); // Function Engine.KismetInputLibrary.*6105f6fb06 //  // @ game+0xf47f734
	void *7a8dd6e30c(); // Function Engine.KismetInputLibrary.*7a8dd6e30c //  // @ game+0xf4b0d40
	void *babf2959bb(); // Function Engine.KismetInputLibrary.*babf2959bb //  // @ game+0xf4b157c
	void *a8e4d942e6(); // Function Engine.KismetInputLibrary.*a8e4d942e6 //  // @ game+0xf4678e8
	void *859f56b406(); // Function Engine.KismetInputLibrary.*859f56b406 //  // @ game+0xf47f7e8
};

// Class Engine.KismetMaterialLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue //  // @ game+0xf51a3b0
	void SetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue //  // @ game+0x10abe6c
	void CreateDynamicMaterialInstance(); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance //  // @ game+0xf439afc
	void GetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue //  // @ game+0xf46f078
	void GetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue //  // @ game+0xf476848
};

// Class Engine.KismetMathLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	void *8865a88547(); // Function Engine.KismetMathLibrary.*8865a88547 //  // @ game+0xf5422c0
	void *7ea5b53f17(); // Function Engine.KismetMathLibrary.*7ea5b53f17 //  // @ game+0xf549c4c
	void *8bacee350b(); // Function Engine.KismetMathLibrary.*8bacee350b //  // @ game+0xf493bb8
	void *3316f85698(); // Function Engine.KismetMathLibrary.*3316f85698 //  // @ game+0xf4945fc
	void *45e1a5407e(); // Function Engine.KismetMathLibrary.*45e1a5407e //  // @ game+0xf498498
	void *e123ee3f5a(); // Function Engine.KismetMathLibrary.*e123ee3f5a //  // @ game+0x115b5f0
	void Log(); // Function Engine.KismetMathLibrary.Log //  // @ game+0xf48c5e0
	void *2272e61b15(); // Function Engine.KismetMathLibrary.*2272e61b15 //  // @ game+0xf4b49a8
	void *f6b8e6b79a(); // Function Engine.KismetMathLibrary.*f6b8e6b79a //  // @ game+0xf43ff3c
	void *ce1a6d3fb6(); // Function Engine.KismetMathLibrary.*ce1a6d3fb6 //  // @ game+0xf547144
	void *e7b30371fd(); // Function Engine.KismetMathLibrary.*e7b30371fd //  // @ game+0xf490a38
	void *1805873d9b(); // Function Engine.KismetMathLibrary.*1805873d9b //  // @ game+0xf43f5c0
	void MakeDateTime(); // Function Engine.KismetMathLibrary.MakeDateTime //  // @ game+0xf48dacc
	void *98de1ed489(); // Function Engine.KismetMathLibrary.*98de1ed489 //  // @ game+0xf4537f0
	void MapRangeUnclamped(); // Function Engine.KismetMathLibrary.MapRangeUnclamped //  // @ game+0xf491e4c
	void *516f47166f(); // Function Engine.KismetMathLibrary.*516f47166f //  // @ game+0xf49078c
	void *db281482fe(); // Function Engine.KismetMathLibrary.*db281482fe //  // @ game+0xf4853b8
	void *9d5024835a(); // Function Engine.KismetMathLibrary.*9d5024835a //  // @ game+0xf44e968
	void DaysInMonth(); // Function Engine.KismetMathLibrary.DaysInMonth //  // @ game+0xf43cbc8
	void *1556e9d16d(); // Function Engine.KismetMathLibrary.*1556e9d16d //  // @ game+0xf438d30
	void *2097e75d5c(); // Function Engine.KismetMathLibrary.*2097e75d5c //  // @ game+0xea2f4c
	void *cbab82e2c0(); // Function Engine.KismetMathLibrary.*cbab82e2c0 //  // @ game+0xf541854
	void GetHours(); // Function Engine.KismetMathLibrary.GetHours //  // @ game+0xf464db0
	void FromHours(); // Function Engine.KismetMathLibrary.FromHours //  // @ game+0xf459ee0
	void *50e14ec312(); // Function Engine.KismetMathLibrary.*50e14ec312 //  // @ game+0xf471780
	void *3a38ee5392(); // Function Engine.KismetMathLibrary.*3a38ee5392 //  // @ game+0xf49bc90
	void *1eed7d3489(); // Function Engine.KismetMathLibrary.*1eed7d3489 //  // @ game+0x11ca154
	void *fed4ad7dc0(); // Function Engine.KismetMathLibrary.*fed4ad7dc0 //  // @ game+0xf49e094
	void *aaeea91a78(); // Function Engine.KismetMathLibrary.*aaeea91a78 //  // @ game+0xe2e8c4
	void *9da504c8bb(); // Function Engine.KismetMathLibrary.*9da504c8bb //  // @ game+0xf438084
	void *25910a2626(); // Function Engine.KismetMathLibrary.*25910a2626 //  // @ game+0xf49d494
	void *a5a77cc6dd(); // Function Engine.KismetMathLibrary.*a5a77cc6dd //  // @ game+0xf40992c
	void MakeBox2D(); // Function Engine.KismetMathLibrary.MakeBox2D //  // @ game+0xf48d920
	void Max(); // Function Engine.KismetMathLibrary.Max //  // @ game+0xf4938a8
	void GetMillisecond(); // Function Engine.KismetMathLibrary.GetMillisecond //  // @ game+0xf469b14
	void *ba5ebfaa26(); // Function Engine.KismetMathLibrary.*ba5ebfaa26 //  // @ game+0xf47f9d0
	void *7abc43d356(); // Function Engine.KismetMathLibrary.*7abc43d356 //  // @ game+0xfb374c
	void Round(); // Function Engine.KismetMathLibrary.Round //  // @ game+0xf4becdc
	void *6a63dbde37(); // Function Engine.KismetMathLibrary.*6a63dbde37 //  // @ game+0xf49c8ec
	void RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector //  // @ game+0xf4b97ac
	void *a5b7755dea(); // Function Engine.KismetMathLibrary.*a5b7755dea //  // @ game+0xfe4888
	void *c8061bf050(); // Function Engine.KismetMathLibrary.*c8061bf050 //  // @ game+0xf45658c
	void *4e2997abd3(); // Function Engine.KismetMathLibrary.*4e2997abd3 //  // @ game+0xf4408b8
	void *b14db018ed(); // Function Engine.KismetMathLibrary.*b14db018ed //  // @ game+0xf46a838
	void MakeVector2D(); // Function Engine.KismetMathLibrary.MakeVector2D //  // @ game+0xf491484
	void *26ae916597(); // Function Engine.KismetMathLibrary.*26ae916597 //  // @ game+0xf481118
	void BreakTimespan(); // Function Engine.KismetMathLibrary.BreakTimespan //  // @ game+0xf4236b4
	void *a4f7ef816c(); // Function Engine.KismetMathLibrary.*a4f7ef816c //  // @ game+0xf4856b4
	void GetTotalMinutes(); // Function Engine.KismetMathLibrary.GetTotalMinutes //  // @ game+0xf47308c
	void *99f267aede(); // Function Engine.KismetMathLibrary.*99f267aede //  // @ game+0xf49d2f8
	void *ab52976a98(); // Function Engine.KismetMathLibrary.*ab52976a98 //  // @ game+0xf4859d8
	void *b893a3cd95(); // Function Engine.KismetMathLibrary.*b893a3cd95 //  // @ game+0xf47e668
	void *389d092e9e(); // Function Engine.KismetMathLibrary.*389d092e9e //  // @ game+0xf490ce4
	void *2e0408bf0b(); // Function Engine.KismetMathLibrary.*2e0408bf0b //  // @ game+0xf437384
	void Abs(); // Function Engine.KismetMathLibrary.Abs //  // @ game+0xf83198
	void *af1b67971c(); // Function Engine.KismetMathLibrary.*af1b67971c //  // @ game+0xf46a1d0
	void *93b798e05f(); // Function Engine.KismetMathLibrary.*93b798e05f //  // @ game+0xf49068c
	void Normal(); // Function Engine.KismetMathLibrary.Normal //  // @ game+0xf49bd90
	void *27bb21c20a(); // Function Engine.KismetMathLibrary.*27bb21c20a //  // @ game+0xf47daf0
	void *33fac841ba(); // Function Engine.KismetMathLibrary.*33fac841ba //  // @ game+0xf03518
	void *b25a4b9f43(); // Function Engine.KismetMathLibrary.*b25a4b9f43 //  // @ game+0xf499960
	void *58c16855d2(); // Function Engine.KismetMathLibrary.*58c16855d2 //  // @ game+0xeb8488
	void *4930cec4c5(); // Function Engine.KismetMathLibrary.*4930cec4c5 //  // @ game+0xf4bcdb0
	void Acos(); // Function Engine.KismetMathLibrary.Acos //  // @ game+0xf401b04
	void *7a568ebfa5(); // Function Engine.KismetMathLibrary.*7a568ebfa5 //  // @ game+0xf485600
	void *a05f7fd1f2(); // Function Engine.KismetMathLibrary.*a05f7fd1f2 //  // @ game+0xf4163e8
	void *5e1cdf8741(); // Function Engine.KismetMathLibrary.*5e1cdf8741 //  // @ game+0xf48b314
	void FromMilliseconds(); // Function Engine.KismetMathLibrary.FromMilliseconds //  // @ game+0xf45a860
	void *ea95d69174(); // Function Engine.KismetMathLibrary.*ea95d69174 //  // @ game+0xf49d494
	void *0c6cd8cb1d(); // Function Engine.KismetMathLibrary.*0c6cd8cb1d //  // @ game+0xf06c88
	void *f41fed7bfa(); // Function Engine.KismetMathLibrary.*f41fed7bfa //  // @ game+0xf493e28
	void *1bab76b57d(); // Function Engine.KismetMathLibrary.*1bab76b57d //  // @ game+0xf4a08a0
	void *6700780762(); // Function Engine.KismetMathLibrary.*6700780762 //  // @ game+0xf49ae80
	void *d4988c1ffd(); // Function Engine.KismetMathLibrary.*d4988c1ffd //  // @ game+0xf499a44
	void *f2a1876da0(); // Function Engine.KismetMathLibrary.*f2a1876da0 //  // @ game+0xec97a84
	void *9cf58e28e4(); // Function Engine.KismetMathLibrary.*9cf58e28e4 //  // @ game+0xf4c0028
	void *db14234685(); // Function Engine.KismetMathLibrary.*db14234685 //  // @ game+0xf5417a8
	void *e6ed42961e(); // Function Engine.KismetMathLibrary.*e6ed42961e //  // @ game+0xf4542b4
	void *2061b6b9a1(); // Function Engine.KismetMathLibrary.*2061b6b9a1 //  // @ game+0xf43e270
	void *596b271a94(); // Function Engine.KismetMathLibrary.*596b271a94 //  // @ game+0xf49058c
	void *8ce858437a(); // Function Engine.KismetMathLibrary.*8ce858437a //  // @ game+0xf48f9f4
	void Clamp(); // Function Engine.KismetMathLibrary.Clamp //  // @ game+0xf4331f8
	void *0ec6060d28(); // Function Engine.KismetMathLibrary.*0ec6060d28 //  // @ game+0xf498f00
	void *dd4b9e5210(); // Function Engine.KismetMathLibrary.*dd4b9e5210 //  // @ game+0xf549d68
	void Ease(); // Function Engine.KismetMathLibrary.Ease //  // @ game+0xf44dd2c
	void *de3f4a5c1e(); // Function Engine.KismetMathLibrary.*de3f4a5c1e //  // @ game+0xf4856b4
	void *375f389eec(); // Function Engine.KismetMathLibrary.*375f389eec //  // @ game+0xf549cd0
	void *8bafa1b300(); // Function Engine.KismetMathLibrary.*8bafa1b300 //  // @ game+0xf49bf00
	void GetSeconds(); // Function Engine.KismetMathLibrary.GetSeconds //  // @ game+0xf470e6c
	void *8c891f7bec(); // Function Engine.KismetMathLibrary.*8c891f7bec //  // @ game+0xfceab0
	void *5a18eb01b2(); // Function Engine.KismetMathLibrary.*5a18eb01b2 //  // @ game+0xe6cfec
	void *d42d0da091(); // Function Engine.KismetMathLibrary.*d42d0da091 //  // @ game+0xf48fad4
	void FMax(); // Function Engine.KismetMathLibrary.FMax //  // @ game+0xfa0d98
	void *c87ee391e6(); // Function Engine.KismetMathLibrary.*c87ee391e6 //  // @ game+0x125897c
	void *99b9b5db58(); // Function Engine.KismetMathLibrary.*99b9b5db58 //  // @ game+0xf47c5bc
	void *5d8a487306(); // Function Engine.KismetMathLibrary.*5d8a487306 //  // @ game+0x1199f90
	void *1eb6e5ba14(); // Function Engine.KismetMathLibrary.*1eb6e5ba14 //  // @ game+0xf54237c
	void DaysInYear(); // Function Engine.KismetMathLibrary.DaysInYear //  // @ game+0xf43ccb0
	void *363bbc0483(); // Function Engine.KismetMathLibrary.*363bbc0483 //  // @ game+0xe2d4f4
	void *92087fef1a(); // Function Engine.KismetMathLibrary.*92087fef1a //  // @ game+0xf4c0110
	void *993cf71511(); // Function Engine.KismetMathLibrary.*993cf71511 //  // @ game+0xf549dfc
	void *3af1924e05(); // Function Engine.KismetMathLibrary.*3af1924e05 //  // @ game+0xf490ae4
	void NotEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator //  // @ game+0xf49d640
	void *72af666be1(); // Function Engine.KismetMathLibrary.*72af666be1 //  // @ game+0xf43c99c
	void RandomFloatInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream //  // @ game+0xf4b8930
	void *5ee230ea71(); // Function Engine.KismetMathLibrary.*5ee230ea71 //  // @ game+0xf437224
	void *a2d5339e8a(); // Function Engine.KismetMathLibrary.*a2d5339e8a //  // @ game+0xf41cd7c
	void *7a4e589f0b(); // Function Engine.KismetMathLibrary.*7a4e589f0b //  // @ game+0xf4332e0
	void *ac777808da(); // Function Engine.KismetMathLibrary.*ac777808da //  // @ game+0xf4099e8
	void *bd259b9ff3(); // Function Engine.KismetMathLibrary.*bd259b9ff3 //  // @ game+0xf498550
	void MakeTransform(); // Function Engine.KismetMathLibrary.MakeTransform //  // @ game+0xf491210
	void IsMorning(); // Function Engine.KismetMathLibrary.IsMorning //  // @ game+0xf480e40
	void RandomIntegerInRange(); // Function Engine.KismetMathLibrary.RandomIntegerInRange //  // @ game+0x103e9d4
	void *d5de7f3487(); // Function Engine.KismetMathLibrary.*d5de7f3487 //  // @ game+0xf37f44
	void *2bb9ac723a(); // Function Engine.KismetMathLibrary.*2bb9ac723a //  // @ game+0xf548758
	void *0f23de7797(); // Function Engine.KismetMathLibrary.*0f23de7797 //  // @ game+0xf44fa68
	void *028e08a297(); // Function Engine.KismetMathLibrary.*028e08a297 //  // @ game+0xf525400
	void FMod(); // Function Engine.KismetMathLibrary.FMod //  // @ game+0xef43f8
	void FromSeconds(); // Function Engine.KismetMathLibrary.FromSeconds //  // @ game+0xf45bb60
	void *69f713a205(); // Function Engine.KismetMathLibrary.*69f713a205 //  // @ game+0xf40a3b8
	void NotEqual_NameName(); // Function Engine.KismetMathLibrary.NotEqual_NameName //  // @ game+0xeb6c88
	void *952c9310d1(); // Function Engine.KismetMathLibrary.*952c9310d1 //  // @ game+0xf480510
	void *3f93142d87(); // Function Engine.KismetMathLibrary.*3f93142d87 //  // @ game+0xe648b8
	void BreakRandomStream(); // Function Engine.KismetMathLibrary.BreakRandomStream //  // @ game+0xf423470
	void *7142954f15(); // Function Engine.KismetMathLibrary.*7142954f15 //  // @ game+0xf4b9880
	void Atan(); // Function Engine.KismetMathLibrary.Atan //  // @ game+0xf415a74
	void *0206412741(); // Function Engine.KismetMathLibrary.*0206412741 //  // @ game+0xf4164a4
	void *10b65dd266(); // Function Engine.KismetMathLibrary.*10b65dd266 //  // @ game+0xf456c40
	void *09bfb104f4(); // Function Engine.KismetMathLibrary.*09bfb104f4 //  // @ game+0xf4b1640
	void *ddb38e6b42(); // Function Engine.KismetMathLibrary.*ddb38e6b42 //  // @ game+0xf5491a4
	void Cross_VectorVector(); // Function Engine.KismetMathLibrary.Cross_VectorVector //  // @ game+0xf43c69c
	void GetHour(); // Function Engine.KismetMathLibrary.GetHour //  // @ game+0xf464db0
	void *1aebd0109b(); // Function Engine.KismetMathLibrary.*1aebd0109b //  // @ game+0xf4c0028
	void *aa354f66ac(); // Function Engine.KismetMathLibrary.*aa354f66ac //  // @ game+0xf433cec
	void *d10bf09c3f(); // Function Engine.KismetMathLibrary.*d10bf09c3f //  // @ game+0xf469bc4
	void *be97263290(); // Function Engine.KismetMathLibrary.*be97263290 //  // @ game+0xf4433c8
	void NotEqual_VectorVector(); // Function Engine.KismetMathLibrary.NotEqual_VectorVector //  // @ game+0xf49ea98
	void *943fdddadc(); // Function Engine.KismetMathLibrary.*943fdddadc //  // @ game+0xf54a82c
	void IsLeapYear(); // Function Engine.KismetMathLibrary.IsLeapYear //  // @ game+0xf480c30
	void *97ad6abe78(); // Function Engine.KismetMathLibrary.*97ad6abe78 //  // @ game+0xf497154
	void *ac19526399(); // Function Engine.KismetMathLibrary.*ac19526399 //  // @ game+0xf4b2e60
	void *39dc79d7d5(); // Function Engine.KismetMathLibrary.*39dc79d7d5 //  // @ game+0xf4369bc
	void *b4117e83ac(); // Function Engine.KismetMathLibrary.*b4117e83ac //  // @ game+0xf48cfac
	void *742b815a1e(); // Function Engine.KismetMathLibrary.*742b815a1e //  // @ game+0xf490838
	void *5dae43cd48(); // Function Engine.KismetMathLibrary.*5dae43cd48 //  // @ game+0xf4b567c
	void *fd035e698c(); // Function Engine.KismetMathLibrary.*fd035e698c //  // @ game+0xf43c794
	void *ad4ba504dc(); // Function Engine.KismetMathLibrary.*ad4ba504dc //  // @ game+0xf4b755c
	void *93e28a3641(); // Function Engine.KismetMathLibrary.*93e28a3641 //  // @ game+0xf5416f8
	void GetDirectionUnitVector(); // Function Engine.KismetMathLibrary.GetDirectionUnitVector //  // @ game+0xf46440c
	void RandomIntegerFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerFromStream //  // @ game+0x1186800
	void *b3d5245fd3(); // Function Engine.KismetMathLibrary.*b3d5245fd3 //  // @ game+0xf47d07c
	void REase(); // Function Engine.KismetMathLibrary.REase //  // @ game+0xf4b3628
	void *a9d85eef4e(); // Function Engine.KismetMathLibrary.*a9d85eef4e //  // @ game+0x1098f24
	void *3baac685be(); // Function Engine.KismetMathLibrary.*3baac685be //  // @ game+0xf4239ac
	void *a35dde37ee(); // Function Engine.KismetMathLibrary.*a35dde37ee //  // @ game+0xf47c374
	void *655d3fa1e8(); // Function Engine.KismetMathLibrary.*655d3fa1e8 //  // @ game+0xf408d64
	void RandomInteger(); // Function Engine.KismetMathLibrary.RandomInteger //  // @ game+0xf4b9348
	void *e4fbe413dd(); // Function Engine.KismetMathLibrary.*e4fbe413dd //  // @ game+0xf5417a8
	void *ca0b957c21(); // Function Engine.KismetMathLibrary.*ca0b957c21 //  // @ game+0xf437fa0
	void *e98a5597f2(); // Function Engine.KismetMathLibrary.*e98a5597f2 //  // @ game+0xf541904
	void *36194a38ae(); // Function Engine.KismetMathLibrary.*36194a38ae //  // @ game+0xfe39d4
	void *91e19a61ce(); // Function Engine.KismetMathLibrary.*91e19a61ce //  // @ game+0xf40b01c
	void *5f6160a187(); // Function Engine.KismetMathLibrary.*5f6160a187 //  // @ game+0xf49af3c
	void UtcNow(); // Function Engine.KismetMathLibrary.UtcNow //  // @ game+0xf547c6c
	void Lerp(); // Function Engine.KismetMathLibrary.Lerp //  // @ game+0xdf8da8
	void *43f212fc92(); // Function Engine.KismetMathLibrary.*43f212fc92 //  // @ game+0xf456458
	void GetDays(); // Function Engine.KismetMathLibrary.GetDays //  // @ game+0xf462bf8
	void GetMonth(); // Function Engine.KismetMathLibrary.GetMonth //  // @ game+0xf469d34
	void Today(); // Function Engine.KismetMathLibrary.Today //  // @ game+0xf547218
	void *53450ec709(); // Function Engine.KismetMathLibrary.*53450ec709 //  // @ game+0xf48a91c
	void *71bd5efcba(); // Function Engine.KismetMathLibrary.*71bd5efcba //  // @ game+0xf4380fc
	void *c79ffaa439(); // Function Engine.KismetMathLibrary.*c79ffaa439 //  // @ game+0xf545a38
	void *3cc7671c4e(); // Function Engine.KismetMathLibrary.*3cc7671c4e //  // @ game+0xe555dc
	void *ab8ee1fee7(); // Function Engine.KismetMathLibrary.*ab8ee1fee7 //  // @ game+0xd5a76c
	void *e97a6a3811(); // Function Engine.KismetMathLibrary.*e97a6a3811 //  // @ game+0xf47c2c0
	void VEase(); // Function Engine.KismetMathLibrary.VEase //  // @ game+0xf547c9c
	void GetTimeOfDay(); // Function Engine.KismetMathLibrary.GetTimeOfDay //  // @ game+0xf472cd8
	void *38e878902f(); // Function Engine.KismetMathLibrary.*38e878902f //  // @ game+0xf49b00c
	void *c436eaedfb(); // Function Engine.KismetMathLibrary.*c436eaedfb //  // @ game+0xf438e6c
	void *8b014766a2(); // Function Engine.KismetMathLibrary.*8b014766a2 //  // @ game+0x1033ed0
	void GetDate(); // Function Engine.KismetMathLibrary.GetDate //  // @ game+0xf462a6c
	void *0bd83af1a0(); // Function Engine.KismetMathLibrary.*0bd83af1a0 //  // @ game+0xf4b4b6c
	void *6b18bafab9(); // Function Engine.KismetMathLibrary.*6b18bafab9 //  // @ game+0xf408f70
	void GetDuration(); // Function Engine.KismetMathLibrary.GetDuration //  // @ game+0xf464640
	void *d5e2d56e2c(); // Function Engine.KismetMathLibrary.*d5e2d56e2c //  // @ game+0xdb21bf4
	void BreakVector(); // Function Engine.KismetMathLibrary.BreakVector //  // @ game+0xdb90f0
	void *10cee834f2(); // Function Engine.KismetMathLibrary.*10cee834f2 //  // @ game+0xf43d8d4
	void Min(); // Function Engine.KismetMathLibrary.Min //  // @ game+0xf494080
	void *097d6881ac(); // Function Engine.KismetMathLibrary.*097d6881ac //  // @ game+0xf408e14
	void Dot_VectorVector(); // Function Engine.KismetMathLibrary.Dot_VectorVector //  // @ game+0xf99824
	void *d76cc25d00(); // Function Engine.KismetMathLibrary.*d76cc25d00 //  // @ game+0xe665a8
	void RandomRotator(); // Function Engine.KismetMathLibrary.RandomRotator //  // @ game+0xf4b95c4
	void GetSecond(); // Function Engine.KismetMathLibrary.GetSecond //  // @ game+0xf470e6c
	void *0114ed7dad(); // Function Engine.KismetMathLibrary.*0114ed7dad //  // @ game+0xf438010
	void RandomBool(); // Function Engine.KismetMathLibrary.RandomBool //  // @ game+0xf4b7488
	void MakeColor(); // Function Engine.KismetMathLibrary.MakeColor //  // @ game+0xfb61cc
	void *77f1a355fe(); // Function Engine.KismetMathLibrary.*77f1a355fe //  // @ game+0xf4bffa0
	void Atan2(); // Function Engine.KismetMathLibrary.Atan2 //  // @ game+0xf4150a8
	void *1fe56c959a(); // Function Engine.KismetMathLibrary.*1fe56c959a //  // @ game+0xf54bd74
	void *d2ab91c37b(); // Function Engine.KismetMathLibrary.*d2ab91c37b //  // @ game+0xf441a0c
	void *3678a51645(); // Function Engine.KismetMathLibrary.*3678a51645 //  // @ game+0xf47c420
	void *2845f0168c(); // Function Engine.KismetMathLibrary.*2845f0168c //  // @ game+0x1189db8
	void IsAfternoon(); // Function Engine.KismetMathLibrary.IsAfternoon //  // @ game+0xf4806e8
	void *676c1a761b(); // Function Engine.KismetMathLibrary.*676c1a761b //  // @ game+0xf48546c
	void GetYear(); // Function Engine.KismetMathLibrary.GetYear //  // @ game+0xf47b474
	void BreakRotator(); // Function Engine.KismetMathLibrary.BreakRotator //  // @ game+0xf064cc
	void GetDayOfYear(); // Function Engine.KismetMathLibrary.GetDayOfYear //  // @ game+0xf462b78
	void *44ce6e60a2(); // Function Engine.KismetMathLibrary.*44ce6e60a2 //  // @ game+0xf87cfc
	void Square(); // Function Engine.KismetMathLibrary.Square //  // @ game+0xf540288
	void *9845d4a2a5(); // Function Engine.KismetMathLibrary.*9845d4a2a5 //  // @ game+0x10c5aa8
	void *e122bfc350(); // Function Engine.KismetMathLibrary.*e122bfc350 //  // @ game+0xe2a950
	void *4b9f3abf17(); // Function Engine.KismetMathLibrary.*4b9f3abf17 //  // @ game+0xf436aa4
	void *fd58b40ad3(); // Function Engine.KismetMathLibrary.*fd58b40ad3 //  // @ game+0xf437440
	void *02ad40ff18(); // Function Engine.KismetMathLibrary.*02ad40ff18 //  // @ game+0xf4b7ed0
	void *50e3c0b29e(); // Function Engine.KismetMathLibrary.*50e3c0b29e //  // @ game+0xf4524e4
	void *741ad2474b(); // Function Engine.KismetMathLibrary.*741ad2474b //  // @ game+0xf43cf38
	void BreakTransform(); // Function Engine.KismetMathLibrary.BreakTransform //  // @ game+0xdf97fc
	void *98256bdebe(); // Function Engine.KismetMathLibrary.*98256bdebe //  // @ game+0xfe511c
	void *5694fac521(); // Function Engine.KismetMathLibrary.*5694fac521 //  // @ game+0xf438c90
	void *efd0264265(); // Function Engine.KismetMathLibrary.*efd0264265 //  // @ game+0xf458bdc
	void *fc94f8e7a1(); // Function Engine.KismetMathLibrary.*fc94f8e7a1 //  // @ game+0xf3d5dc
	void *2ec76a1597(); // Function Engine.KismetMathLibrary.*2ec76a1597 //  // @ game+0xf4b94dc
	void *6bae7b6300(); // Function Engine.KismetMathLibrary.*6bae7b6300 //  // @ game+0xf49a4c4
	void ConvertTransformToRelative(); // Function Engine.KismetMathLibrary.ConvertTransformToRelative //  // @ game+0xf438ee8
	void TEase(); // Function Engine.KismetMathLibrary.TEase //  // @ game+0xf5439e0
	void *0126100c47(); // Function Engine.KismetMathLibrary.*0126100c47 //  // @ game+0xdb21bf4
	void *67a2bf5c4b(); // Function Engine.KismetMathLibrary.*67a2bf5c4b //  // @ game+0xf46ad88
	void Exp(); // Function Engine.KismetMathLibrary.Exp //  // @ game+0xf451b70
	void GetTotalMilliseconds(); // Function Engine.KismetMathLibrary.GetTotalMilliseconds //  // @ game+0xf473004
	void *b9d75840be(); // Function Engine.KismetMathLibrary.*b9d75840be //  // @ game+0xf499b14
	void TimespanRatio(); // Function Engine.KismetMathLibrary.TimespanRatio //  // @ game+0xf547160
	void *7f8f840a7d(); // Function Engine.KismetMathLibrary.*7f8f840a7d //  // @ game+0xf441ad4
	void *0c1bc0e283(); // Function Engine.KismetMathLibrary.*0c1bc0e283 //  // @ game+0xf47c374
	void *008b16b078(); // Function Engine.KismetMathLibrary.*008b16b078 //  // @ game+0xf47c5bc
	void RandomIntegerInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream //  // @ game+0xf4b93e8
	void *995a06624e(); // Function Engine.KismetMathLibrary.*995a06624e //  // @ game+0xf43bbc0
	void *8635a80222(); // Function Engine.KismetMathLibrary.*8635a80222 //  // @ game+0xf42353c
	void *d98732715c(); // Function Engine.KismetMathLibrary.*d98732715c //  // @ game+0xf544ed4
	void *59ae027333(); // Function Engine.KismetMathLibrary.*59ae027333 //  // @ game+0xeb1d00
	void *489a7fc8e5(); // Function Engine.KismetMathLibrary.*489a7fc8e5 //  // @ game+0xec9ad1c
	void EqualEqual_VectorVector(); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector //  // @ game+0xf450470
	void *2592d68f90(); // Function Engine.KismetMathLibrary.*2592d68f90 //  // @ game+0xf54b25c
	void Sqrt(); // Function Engine.KismetMathLibrary.Sqrt //  // @ game+0xf53f894
	void *14a33cbafb(); // Function Engine.KismetMathLibrary.*14a33cbafb //  // @ game+0xf934b0
	void *01af2a8bfd(); // Function Engine.KismetMathLibrary.*01af2a8bfd //  // @ game+0xf9dcb8
	void Asin(); // Function Engine.KismetMathLibrary.Asin //  // @ game+0xf414714
	void Tan(); // Function Engine.KismetMathLibrary.Tan //  // @ game+0xf5465a4
	void *994ca6aa2b(); // Function Engine.KismetMathLibrary.*994ca6aa2b //  // @ game+0xf437310
	void *ce2cda4e74(); // Function Engine.KismetMathLibrary.*ce2cda4e74 //  // @ game+0xf4c0214
	void NotEqual_ByteByte(); // Function Engine.KismetMathLibrary.NotEqual_ByteByte //  // @ game+0xe95b50
	void *080a5bf2f7(); // Function Engine.KismetMathLibrary.*080a5bf2f7 //  // @ game+0xf4c07e4
	void *0e7d2bff51(); // Function Engine.KismetMathLibrary.*0e7d2bff51 //  // @ game+0xf4766bc
	void *f43ea08019(); // Function Engine.KismetMathLibrary.*f43ea08019 //  // @ game+0xf4b6b10
	void *e8c2bc955c(); // Function Engine.KismetMathLibrary.*e8c2bc955c //  // @ game+0x11f6b38
	void FromDays(); // Function Engine.KismetMathLibrary.FromDays //  // @ game+0xf459560
	void *ad1a6ecfbd(); // Function Engine.KismetMathLibrary.*ad1a6ecfbd //  // @ game+0xd5a76c
	void *20a9c3ae5f(); // Function Engine.KismetMathLibrary.*20a9c3ae5f //  // @ game+0xf460620
	void *7cf9d4e350(); // Function Engine.KismetMathLibrary.*7cf9d4e350 //  // @ game+0xf546f18
	void RandomRotatorFromStream(); // Function Engine.KismetMathLibrary.RandomRotatorFromStream //  // @ game+0xf4b96a0
	void TransformLocation(); // Function Engine.KismetMathLibrary.TransformLocation //  // @ game+0xf54753c
	void *1dc3d6af11(); // Function Engine.KismetMathLibrary.*1dc3d6af11 //  // @ game+0xf490be4
	void RandomFloatInRange(); // Function Engine.KismetMathLibrary.RandomFloatInRange //  // @ game+0xfebe34
	void *8e170f3e72(); // Function Engine.KismetMathLibrary.*8e170f3e72 //  // @ game+0xf49bbc4
	void *e443cc2a3a(); // Function Engine.KismetMathLibrary.*e443cc2a3a //  // @ game+0xf499a44
	void *2f49356dc3(); // Function Engine.KismetMathLibrary.*2f49356dc3 //  // @ game+0xf50da94
	void GetTotalDays(); // Function Engine.KismetMathLibrary.GetTotalDays //  // @ game+0xf472ef8
	void MakeRotator(); // Function Engine.KismetMathLibrary.MakeRotator //  // @ game+0xe637a0
	void GetMinute(); // Function Engine.KismetMathLibrary.GetMinute //  // @ game+0xf469c84
	void *f7ce0f593e(); // Function Engine.KismetMathLibrary.*f7ce0f593e //  // @ game+0xf43c5dc
	void *e10c3910d4(); // Function Engine.KismetMathLibrary.*e10c3910d4 //  // @ game+0xf485814
	void *07475cc208(); // Function Engine.KismetMathLibrary.*07475cc208 //  // @ game+0xf498fb0
	void BreakVector2D(); // Function Engine.KismetMathLibrary.BreakVector2D //  // @ game+0xf4238ac
	void *6416d277fd(); // Function Engine.KismetMathLibrary.*6416d277fd //  // @ game+0xf4bc308
	void *206d1f34b4(); // Function Engine.KismetMathLibrary.*206d1f34b4 //  // @ game+0xe59d94
	void *ab938ea0db(); // Function Engine.KismetMathLibrary.*ab938ea0db //  // @ game+0x10d8f74
	void RandomBoolFromStream(); // Function Engine.KismetMathLibrary.RandomBoolFromStream //  // @ game+0xf4b74d4
	void *3ed75598ca(); // Function Engine.KismetMathLibrary.*3ed75598ca //  // @ game+0xf4b4c30
	void *28e0028cfd(); // Function Engine.KismetMathLibrary.*28e0028cfd //  // @ game+0xeff764
	void RandomUnitVectorFromStream(); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream //  // @ game+0xf4b97e4
	void FClamp(); // Function Engine.KismetMathLibrary.FClamp //  // @ game+0xef6498
	void *f1cbbe801f(); // Function Engine.KismetMathLibrary.*f1cbbe801f //  // @ game+0xf542e24
	void *5ea700036e(); // Function Engine.KismetMathLibrary.*5ea700036e //  // @ game+0xf542d4c
	void *d585355a0c(); // Function Engine.KismetMathLibrary.*d585355a0c //  // @ game+0xf43ec44
	void *42476f0c0f(); // Function Engine.KismetMathLibrary.*42476f0c0f //  // @ game+0xec97a84
	void BooleanXOR(); // Function Engine.KismetMathLibrary.BooleanXOR //  // @ game+0xf41ce3c
	void FMin(); // Function Engine.KismetMathLibrary.FMin //  // @ game+0x11016e0
	void *2ba31da7d1(); // Function Engine.KismetMathLibrary.*2ba31da7d1 //  // @ game+0xf4382d8
	void GetTotalHours(); // Function Engine.KismetMathLibrary.GetTotalHours //  // @ game+0xf472f7c
	void MakeTimespan(); // Function Engine.KismetMathLibrary.MakeTimespan //  // @ game+0xf491094
	void *cd972e1774(); // Function Engine.KismetMathLibrary.*cd972e1774 //  // @ game+0xf43515c
	void *bb231553e1(); // Function Engine.KismetMathLibrary.*bb231553e1 //  // @ game+0xf49f4ac
	void *4f69924987(); // Function Engine.KismetMathLibrary.*4f69924987 //  // @ game+0xf48546c
	void *80ba0d4523(); // Function Engine.KismetMathLibrary.*80ba0d4523 //  // @ game+0xf437298
	void *3a2c93acfc(); // Function Engine.KismetMathLibrary.*3a2c93acfc //  // @ game+0xf494854
	void *1de11568fc(); // Function Engine.KismetMathLibrary.*1de11568fc //  // @ game+0xf458014
	void *a2f55c992e(); // Function Engine.KismetMathLibrary.*a2f55c992e //  // @ game+0xf43823c
	void Cos(); // Function Engine.KismetMathLibrary.Cos //  // @ game+0xf4390cc
	void *0c3931261d(); // Function Engine.KismetMathLibrary.*0c3931261d //  // @ game+0xf4a145c
	void *d8ad6b168e(); // Function Engine.KismetMathLibrary.*d8ad6b168e //  // @ game+0xfcfa38
	void *e87964c2e5(); // Function Engine.KismetMathLibrary.*e87964c2e5 //  // @ game+0xf524a60
	void *2ed659cc9e(); // Function Engine.KismetMathLibrary.*2ed659cc9e //  // @ game+0xeeac34
	void *2cf2d19c23(); // Function Engine.KismetMathLibrary.*2cf2d19c23 //  // @ game+0xf4ba250
	void *a7fd8afd30(); // Function Engine.KismetMathLibrary.*a7fd8afd30 //  // @ game+0xf46ad88
	void RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat //  // @ game+0xea8524
	void GetMinutes(); // Function Engine.KismetMathLibrary.GetMinutes //  // @ game+0xf469c84
	void *56e29293ae(); // Function Engine.KismetMathLibrary.*56e29293ae //  // @ game+0xf494134
	void *3d27164a44(); // Function Engine.KismetMathLibrary.*3d27164a44 //  // @ game+0xeb6c88
	void *bb793d46e7(); // Function Engine.KismetMathLibrary.*bb793d46e7 //  // @ game+0xf44e968
	void *3e595c1bd5(); // Function Engine.KismetMathLibrary.*3e595c1bd5 //  // @ game+0xf46a960
	void *26da169f1b(); // Function Engine.KismetMathLibrary.*26da169f1b //  // @ game+0xf44ec7c
	void InverseTransformLocation(); // Function Engine.KismetMathLibrary.InverseTransformLocation //  // @ game+0xf4803dc
	void *2828b56d8a(); // Function Engine.KismetMathLibrary.*2828b56d8a //  // @ game+0xf1f5ec
	void *452c9c1033(); // Function Engine.KismetMathLibrary.*452c9c1033 //  // @ game+0x11dfe44
	void *4389c3955d(); // Function Engine.KismetMathLibrary.*4389c3955d //  // @ game+0xf452e6c
	void *bb6324e540(); // Function Engine.KismetMathLibrary.*bb6324e540 //  // @ game+0xf4b60c8
	void GetTotalSeconds(); // Function Engine.KismetMathLibrary.GetTotalSeconds //  // @ game+0xf473110
	void *3518f3f14d(); // Function Engine.KismetMathLibrary.*3518f3f14d //  // @ game+0x107f4c4
	void *9c18b2cd17(); // Function Engine.KismetMathLibrary.*9c18b2cd17 //  // @ game+0xf4c0644
	void *9e61aff958(); // Function Engine.KismetMathLibrary.*9e61aff958 //  // @ game+0xf54725c
	void *0ce3f0f9b9(); // Function Engine.KismetMathLibrary.*0ce3f0f9b9 //  // @ game+0xf4346cc
	void *c0ea8bfe22(); // Function Engine.KismetMathLibrary.*c0ea8bfe22 //  // @ game+0xf494390
	void *118c0b2ba5(); // Function Engine.KismetMathLibrary.*118c0b2ba5 //  // @ game+0xf4229a4
	void *e441f3ab20(); // Function Engine.KismetMathLibrary.*e441f3ab20 //  // @ game+0xf49f83c
	void *3e42e1650c(); // Function Engine.KismetMathLibrary.*3e42e1650c //  // @ game+0xf47c668
	void *760036579b(); // Function Engine.KismetMathLibrary.*760036579b //  // @ game+0xf4904e0
	void *910b7b2070(); // Function Engine.KismetMathLibrary.*910b7b2070 //  // @ game+0xf49bb28
	void GetMilliseconds(); // Function Engine.KismetMathLibrary.GetMilliseconds //  // @ game+0xf469b14
	void *efbf52e6f0(); // Function Engine.KismetMathLibrary.*efbf52e6f0 //  // @ game+0xf49d3e0
	void Conv_VectorToTransform(); // Function Engine.KismetMathLibrary.Conv_VectorToTransform //  // @ game+0xf438dcc
	void *a5d905e3c4(); // Function Engine.KismetMathLibrary.*a5d905e3c4 //  // @ game+0xf5417a8
	void MultiplyMultiply_FloatFloat(); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat //  // @ game+0xf497acc
	void MakeRandomStream(); // Function Engine.KismetMathLibrary.MakeRandomStream //  // @ game+0x11eb5c8
	void Sin(); // Function Engine.KismetMathLibrary.Sin //  // @ game+0xf525484
	void *7addb74568(); // Function Engine.KismetMathLibrary.*7addb74568 //  // @ game+0xf442f74
	void *442bbcb53e(); // Function Engine.KismetMathLibrary.*442bbcb53e //  // @ game+0xf4a0974
	void ProjectVectorOnToVector(); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector //  // @ game+0xf4b2f48
	void RandomFloatFromStream(); // Function Engine.KismetMathLibrary.RandomFloatFromStream //  // @ game+0xf4b88a8
	void *45a11cebf3(); // Function Engine.KismetMathLibrary.*45a11cebf3 //  // @ game+0xf441938
	void EqualEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator //  // @ game+0xf44eeb4
	void *f39acf2f68(); // Function Engine.KismetMathLibrary.*f39acf2f68 //  // @ game+0xf408ec0
	void BreakDateTime(); // Function Engine.KismetMathLibrary.BreakDateTime //  // @ game+0xf422c80
	void Now(); // Function Engine.KismetMathLibrary.Now //  // @ game+0xf49f520
	void *1915896dfa(); // Function Engine.KismetMathLibrary.*1915896dfa //  // @ game+0xf4bd900
	void *51020b9356(); // Function Engine.KismetMathLibrary.*51020b9356 //  // @ game+0xf549bc0
	void *56a390ad54(); // Function Engine.KismetMathLibrary.*56a390ad54 //  // @ game+0xf49395c
	void NotEqual_IntInt(); // Function Engine.KismetMathLibrary.NotEqual_IntInt //  // @ game+0x1127ee0
	void *15f3102d2e(); // Function Engine.KismetMathLibrary.*15f3102d2e //  // @ game+0xf485518
	void *6f114bde4e(); // Function Engine.KismetMathLibrary.*6f114bde4e //  // @ game+0xf456b10
	void Not_PreBool(); // Function Engine.KismetMathLibrary.Not_PreBool //  // @ game+0xdc457c
	void GetHour12(); // Function Engine.KismetMathLibrary.GetHour12 //  // @ game+0xf464d30
	void GetDay(); // Function Engine.KismetMathLibrary.GetDay //  // @ game+0xf462af4
	void *923fdeba68(); // Function Engine.KismetMathLibrary.*923fdeba68 //  // @ game+0xf4b2d28
	void *0414c43cef(); // Function Engine.KismetMathLibrary.*0414c43cef //  // @ game+0xf43cbac
	void BooleanAND(); // Function Engine.KismetMathLibrary.BooleanAND //  // @ game+0x4392a0
	void *5a7841af1b(); // Function Engine.KismetMathLibrary.*5a7841af1b //  // @ game+0xf44f908
	void MakeBox(); // Function Engine.KismetMathLibrary.MakeBox //  // @ game+0xf48d9e8
	void MakeVector(); // Function Engine.KismetMathLibrary.MakeVector //  // @ game+0xe4f1e8
	void *e67bc30724(); // Function Engine.KismetMathLibrary.*e67bc30724 //  // @ game+0xf490938
	void *a6cbddb3c1(); // Function Engine.KismetMathLibrary.*a6cbddb3c1 //  // @ game+0xec97a84
	void *ea630c1cbb(); // Function Engine.KismetMathLibrary.*ea630c1cbb //  // @ game+0xf457608
	void *f1537ed065(); // Function Engine.KismetMathLibrary.*f1537ed065 //  // @ game+0xf4bcd38
	void *2743562a75(); // Function Engine.KismetMathLibrary.*2743562a75 //  // @ game+0xf480ff4
	void *99dc915f67(); // Function Engine.KismetMathLibrary.*99dc915f67 //  // @ game+0xf4be30c
	void *39913d96c5(); // Function Engine.KismetMathLibrary.*39913d96c5 //  // @ game+0x10c77d0
	void *3a3bfe246d(); // Function Engine.KismetMathLibrary.*3a3bfe246d //  // @ game+0xf442518
	void *708531078c(); // Function Engine.KismetMathLibrary.*708531078c //  // @ game+0xf47c508
	void *37a3fb165b(); // Function Engine.KismetMathLibrary.*37a3fb165b //  // @ game+0xf469a68
	void FromMinutes(); // Function Engine.KismetMathLibrary.FromMinutes //  // @ game+0xf45b1e0
	void *4e87f8f69f(); // Function Engine.KismetMathLibrary.*4e87f8f69f //  // @ game+0xf40108c
	void *17882dd704(); // Function Engine.KismetMathLibrary.*17882dd704 //  // @ game+0xf547128
	void *99e5967739(); // Function Engine.KismetMathLibrary.*99e5967739 //  // @ game+0xf408e14
	void *9d0a8ae951(); // Function Engine.KismetMathLibrary.*9d0a8ae951 //  // @ game+0xf443074
	void BooleanOR(); // Function Engine.KismetMathLibrary.BooleanOR //  // @ game+0xe26a34
};

// Class Engine.*74eabb157d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*74eabb157d : UBlueprintFunctionLibrary {

	void *9f0667ab95(); // Function Engine.*74eabb157d.*9f0667ab95 //  // @ game+0xf565af4
	void *019167ef90(); // Function Engine.*74eabb157d.*019167ef90 //  // @ game+0xf5669e0
	void *7526069a86(); // Function Engine.*74eabb157d.*7526069a86 //  // @ game+0xf567560
	void *8a0bcf96ee(); // Function Engine.*74eabb157d.*8a0bcf96ee //  // @ game+0xf559d4c
	void *64ff8f3bb0(); // Function Engine.*74eabb157d.*64ff8f3bb0 //  // @ game+0xf559dbc
	void *3e7fabaa1f(); // Function Engine.*74eabb157d.*3e7fabaa1f //  // @ game+0xf562840
	void *d4dea5eafc(); // Function Engine.*74eabb157d.*d4dea5eafc //  // @ game+0xf562a08
	void *ee5dcc065c(); // Function Engine.*74eabb157d.*ee5dcc065c //  // @ game+0xf562904
	void *a417ebab20(); // Function Engine.*74eabb157d.*a417ebab20 //  // @ game+0xf5668b4
	void *2cb05700ea(); // Function Engine.*74eabb157d.*2cb05700ea //  // @ game+0xf554b94
	void *b6cc296c28(); // Function Engine.*74eabb157d.*b6cc296c28 //  // @ game+0xf57170c
	void *e9d924cd7b(); // Function Engine.*74eabb157d.*e9d924cd7b //  // @ game+0xf567630
	void *b434a1cc4c(); // Function Engine.*74eabb157d.*b434a1cc4c //  // @ game+0xf562ac8
};

// Class Engine.KismetRenderingLibrary
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	void *e61488f8fd(); // Function Engine.KismetRenderingLibrary.*e61488f8fd //  // @ game+0xf55d1d4
	void BreakSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo //  // @ game+0xf554c48
	void DrawMaterialToRenderTarget(); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget //  // @ game+0xf55eb74
	void ExportRenderTarget(); // Function Engine.KismetRenderingLibrary.ExportRenderTarget //  // @ game+0xf55f8bc
	void ExportTexture2D(); // Function Engine.KismetRenderingLibrary.ExportTexture2D //  // @ game+0xf55fbb8
	void BeginDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget //  // @ game+0xf5549f8
	void EndDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget //  // @ game+0xf55ef6c
	void MakeSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo //  // @ game+0xf5714d8
	void *9d8b998760(); // Function Engine.KismetRenderingLibrary.*9d8b998760 //  // @ game+0xf559e80
	void *1a7394ca20(); // Function Engine.KismetRenderingLibrary.*1a7394ca20 //  // @ game+0xf55cd60
};

// Class Engine.*067f1b6aac
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*067f1b6aac : UBlueprintFunctionLibrary {

	void *deea408335(); // Function Engine.*067f1b6aac.*deea408335 //  // @ game+0xf57dc7c
	void *a05c02d771(); // Function Engine.*067f1b6aac.*a05c02d771 //  // @ game+0xf55a36c
	void *323a9ee5d9(); // Function Engine.*067f1b6aac.*323a9ee5d9 //  // @ game+0xf55be20
	void *acc912dad4(); // Function Engine.*067f1b6aac.*acc912dad4 //  // @ game+0xf567aa4
	void *7afc4edeb9(); // Function Engine.*067f1b6aac.*7afc4edeb9 //  // @ game+0xf555f54
	void *532a9be925(); // Function Engine.*067f1b6aac.*532a9be925 //  // @ game+0xf55f028
	void NotEqual_StriStri(); // Function Engine.*067f1b6aac.NotEqual_StriStri //  // @ game+0xf572450
	void Trim(); // Function Engine.*067f1b6aac.Trim //  // @ game+0xf57dab8
	void *3e8a2da782(); // Function Engine.*067f1b6aac.*3e8a2da782 //  // @ game+0xf560b00
	void *d98d848108(); // Function Engine.*067f1b6aac.*d98d848108 //  // @ game+0xf558068
	void Split(); // Function Engine.*067f1b6aac.Split //  // @ game+0xf57b640
	void *2795845cef(); // Function Engine.*067f1b6aac.*2795845cef //  // @ game+0xf55bb2c
	void Left(); // Function Engine.*067f1b6aac.Left //  // @ game+0xf56f8a4
	void *cb31097d85(); // Function Engine.*067f1b6aac.*cb31097d85 //  // @ game+0xf57d8e8
	void *df2bedc931(); // Function Engine.*067f1b6aac.*df2bedc931 //  // @ game+0xf55cbc4
	void *295ceeb1d9(); // Function Engine.*067f1b6aac.*295ceeb1d9 //  // @ game+0xf55b608
	void *36d90627eb(); // Function Engine.*067f1b6aac.*36d90627eb //  // @ game+0xf55779c
	void *6a8529e53c(); // Function Engine.*067f1b6aac.*6a8529e53c //  // @ game+0xf566184
	void *b757d72e1a(); // Function Engine.*067f1b6aac.*b757d72e1a //  // @ game+0xf5621a4
	void *9716106d8d(); // Function Engine.*067f1b6aac.*9716106d8d //  // @ game+0xf55c24c
	void *5c08aa2dfe(); // Function Engine.*067f1b6aac.*5c08aa2dfe //  // @ game+0xeed234
	void *08dffdc4f0(); // Function Engine.*067f1b6aac.*08dffdc4f0 //  // @ game+0xf5741c8
	void *e8860fd974(); // Function Engine.*067f1b6aac.*e8860fd974 //  // @ game+0xf572de4
	void *55a36d7738(); // Function Engine.*067f1b6aac.*55a36d7738 //  // @ game+0xf55bca0
	void *703fe59d3c(); // Function Engine.*067f1b6aac.*703fe59d3c //  // @ game+0xf5584c0
	void *63bae08a59(); // Function Engine.*067f1b6aac.*63bae08a59 //  // @ game+0xf56fbf0
	void *4394f05662(); // Function Engine.*067f1b6aac.*4394f05662 //  // @ game+0xf557c10
	void *a29c6c427c(); // Function Engine.*067f1b6aac.*a29c6c427c //  // @ game+0xf55b928
	void *c564d7b982(); // Function Engine.*067f1b6aac.*c564d7b982 //  // @ game+0xf55a0a8
	void *f23fdd9cb4(); // Function Engine.*067f1b6aac.*f23fdd9cb4 //  // @ game+0xf55b458
	void *c422a27e6e(); // Function Engine.*067f1b6aac.*c422a27e6e //  // @ game+0xf558d88
	void *cdeea0397f(); // Function Engine.*067f1b6aac.*cdeea0397f //  // @ game+0xf55c7f8
	void *b3a48799d9(); // Function Engine.*067f1b6aac.*b3a48799d9 //  // @ game+0xf567f5c
	void *f1e0cf330f(); // Function Engine.*067f1b6aac.*f1e0cf330f //  // @ game+0xf55d4a0
	void Reverse(); // Function Engine.*067f1b6aac.Reverse //  // @ game+0xf574608
	void Len(); // Function Engine.*067f1b6aac.Len //  // @ game+0xf570150
	void *6fcb96a7e2(); // Function Engine.*067f1b6aac.*6fcb96a7e2 //  // @ game+0x10e6fd4
	void *fb602637e9(); // Function Engine.*067f1b6aac.*fb602637e9 //  // @ game+0xf5717d0
	void ToLower(); // Function Engine.*067f1b6aac.ToLower //  // @ game+0xf57d718
	void NotEqual_StrStr(); // Function Engine.*067f1b6aac.NotEqual_StrStr //  // @ game+0xf572174
	void Mid(); // Function Engine.*067f1b6aac.Mid //  // @ game+0xf571ab4
	void *7c35b4c12b(); // Function Engine.*067f1b6aac.*7c35b4c12b //  // @ game+0xf56ff40
	void *1a02ffd437(); // Function Engine.*067f1b6aac.*1a02ffd437 //  // @ game+0xf55c484
	void *d6befee672(); // Function Engine.*067f1b6aac.*d6befee672 //  // @ game+0xf561dd4
	void Replace(); // Function Engine.*067f1b6aac.Replace //  // @ game+0xf573d54
	void *e30db30ad5(); // Function Engine.*067f1b6aac.*e30db30ad5 //  // @ game+0x126c1ac
	void *b5dcf50eac(); // Function Engine.*067f1b6aac.*b5dcf50eac //  // @ game+0xf55b78c
	void *e08fc2889e(); // Function Engine.*067f1b6aac.*e08fc2889e //  // @ game+0xf574fdc
	void *61b374cde3(); // Function Engine.*067f1b6aac.*61b374cde3 //  // @ game+0x10290cc
	void *f60c8c3215(); // Function Engine.*067f1b6aac.*f60c8c3215 //  // @ game+0xf558934
	void *8693433f36(); // Function Engine.*067f1b6aac.*8693433f36 //  // @ game+0xf57cce0
	void Right(); // Function Engine.*067f1b6aac.Right //  // @ game+0xf574904
	void *51346d1132(); // Function Engine.*067f1b6aac.*51346d1132 //  // @ game+0xf55a584
	void *156a5453bd(); // Function Engine.*067f1b6aac.*156a5453bd //  // @ game+0x101b2f0
	void *9641f44bd1(); // Function Engine.*067f1b6aac.*9641f44bd1 //  // @ game+0x1029214
	void *e98c52efdb(); // Function Engine.*067f1b6aac.*e98c52efdb //  // @ game+0xf5563b4
	void Contains(); // Function Engine.*067f1b6aac.Contains //  // @ game+0x11195bc
	void *34e8c5708e(); // Function Engine.*067f1b6aac.*34e8c5708e //  // @ game+0xf55f464
	void *43c3746773(); // Function Engine.*067f1b6aac.*43c3746773 //  // @ game+0xf557344
	void *f0c36ccf7e(); // Function Engine.*067f1b6aac.*f0c36ccf7e //  // @ game+0xf55ca50
	void *92cbe70d3a(); // Function Engine.*067f1b6aac.*92cbe70d3a //  // @ game+0xf556824
	void *36430ab672(); // Function Engine.*067f1b6aac.*36430ab672 //  // @ game+0xf57bbc0
	void *ca75082636(); // Function Engine.*067f1b6aac.*ca75082636 //  // @ game+0xf574c68
};

// Class Engine.*053a5241eb
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*053a5241eb : UBlueprintFunctionLibrary {

	void *0798eb99e1(); // Function Engine.*053a5241eb.*0798eb99e1 //  // @ game+0xf567c4c
	void *9454fd17e3(); // Function Engine.*053a5241eb.*9454fd17e3 //  // @ game+0xf563e40
	void *75d40819cd(); // Function Engine.*053a5241eb.*75d40819cd //  // @ game+0xf5663ac
	void *2e0da67795(); // Function Engine.*053a5241eb.*2e0da67795 //  // @ game+0xf5667d8
	void *1abed930e6(); // Function Engine.*053a5241eb.*1abed930e6 //  // @ game+0xf565c04
	void *201007a2c8(); // Function Engine.*053a5241eb.*201007a2c8 //  // @ game+0xf563238
	void *6e6634756d(); // Function Engine.*053a5241eb.*6e6634756d //  // @ game+0xf567e04
	void *820d674269(); // Function Engine.*053a5241eb.*820d674269 //  // @ game+0xf5665d4
};

// Class Engine.*97d3a9d18b
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*97d3a9d18b : UBlueprintFunctionLibrary {

	void *baa88072f3(); // Function Engine.*97d3a9d18b.*baa88072f3 //  // @ game+0xf55c088
	void *d8f69fd768(); // Function Engine.*97d3a9d18b.*d8f69fd768 //  // @ game+0xf57c7b8
	void *ca4dece234(); // Function Engine.*97d3a9d18b.*ca4dece234 //  // @ game+0xf55f764
	void *f72726ef8d(); // Function Engine.*97d3a9d18b.*f72726ef8d //  // @ game+0xf57c700
	void *23bbd254ca(); // Function Engine.*97d3a9d18b.*23bbd254ca //  // @ game+0xf57c9c8
	void *1be4fdf814(); // Function Engine.*97d3a9d18b.*1be4fdf814 //  // @ game+0xf55a2ac
	void *3c2986c324(); // Function Engine.*97d3a9d18b.*3c2986c324 //  // @ game+0xf57201c
	void *002a9f017d(); // Function Engine.*97d3a9d18b.*002a9f017d //  // @ game+0xf55337c
	void *8e31ff558e(); // Function Engine.*97d3a9d18b.*8e31ff558e //  // @ game+0xf55f30c
	void *5296414a3c(); // Function Engine.*97d3a9d18b.*5296414a3c //  // @ game+0xf572750
	void *c8dc59e9b8(); // Function Engine.*97d3a9d18b.*c8dc59e9b8 //  // @ game+0xf55b6cc
	void *3f8b4c81db(); // Function Engine.*97d3a9d18b.*3f8b4c81db //  // @ game+0xf5626b0
	void Format(); // Function Engine.*97d3a9d18b.Format //  // @ game+0xf5611b0
	void *b40b688ac1(); // Function Engine.*97d3a9d18b.*b40b688ac1 //  // @ game+0xf55c6ec
	void *49d543e27e(); // Function Engine.*97d3a9d18b.*49d543e27e //  // @ game+0xf560e6c
	void *f3fbd248ec(); // Function Engine.*97d3a9d18b.*f3fbd248ec //  // @ game+0x1227a30
	void *dfda7f1d38(); // Function Engine.*97d3a9d18b.*dfda7f1d38 //  // @ game+0xf55b2dc
	void *be9c169a7a(); // Function Engine.*97d3a9d18b.*be9c169a7a //  // @ game+0xf57bf20
	void *87ac6319ae(); // Function Engine.*97d3a9d18b.*87ac6319ae //  // @ game+0xf55b85c
	void *50ca763c6f(); // Function Engine.*97d3a9d18b.*50ca763c6f //  // @ game+0xf57c8c0
	void *1f2a6ab19c(); // Function Engine.*97d3a9d18b.*1f2a6ab19c //  // @ game+0xf57c648
	void *6a5a7cedc1(); // Function Engine.*97d3a9d18b.*6a5a7cedc1 //  // @ game+0xf55350c
	void *74e2c37115(); // Function Engine.*97d3a9d18b.*74e2c37115 //  // @ game+0xf55a708
	void *d4ab83c8ab(); // Function Engine.*97d3a9d18b.*d4ab83c8ab //  // @ game+0xf57cbd8
	void *2f7cdc0570(); // Function Engine.*97d3a9d18b.*2f7cdc0570 //  // @ game+0xf5548c0
	void *a04da4d6a8(); // Function Engine.*97d3a9d18b.*a04da4d6a8 //  // @ game+0xf552fc0
	void *e2ae8984c2(); // Function Engine.*97d3a9d18b.*e2ae8984c2 //  // @ game+0xf552380
	void *3bc7304b26(); // Function Engine.*97d3a9d18b.*3bc7304b26 //  // @ game+0xf55459c
	void *778b8d9a0a(); // Function Engine.*97d3a9d18b.*778b8d9a0a //  // @ game+0xf57cad0
	void *e25a8d496b(); // Function Engine.*97d3a9d18b.*e25a8d496b //  // @ game+0xf55a444
	void *aaca7ce165(); // Function Engine.*97d3a9d18b.*aaca7ce165 //  // @ game+0xf55a658
	void *560b1fb4ba(); // Function Engine.*97d3a9d18b.*560b1fb4ba //  // @ game+0xf57c384
	void *3e642e98be(); // Function Engine.*97d3a9d18b.*3e642e98be //  // @ game+0xf553444
	void *79d22ec1fc(); // Function Engine.*97d3a9d18b.*79d22ec1fc //  // @ game+0xf55c910
	void *fb400ad94f(); // Function Engine.*97d3a9d18b.*fb400ad94f //  // @ game+0xf552108
	void *c2088e257b(); // Function Engine.*97d3a9d18b.*c2088e257b //  // @ game+0xf5540e0
	void *3602e9809c(); // Function Engine.*97d3a9d18b.*3602e9809c //  // @ game+0xf554340
	void *3fda4529d7(); // Function Engine.*97d3a9d18b.*3fda4529d7 //  // @ game+0xf57c58c
	void *3618a4b516(); // Function Engine.*97d3a9d18b.*3618a4b516 //  // @ game+0xf55b538
	void *9fb1c6cf73(); // Function Engine.*97d3a9d18b.*9fb1c6cf73 //  // @ game+0xf55cb0c
	void *c9a34a658b(); // Function Engine.*97d3a9d18b.*c9a34a658b //  // @ game+0xf55cc94
	void *e1525215e5(); // Function Engine.*97d3a9d18b.*e1525215e5 //  // @ game+0xf5547f8
};

// Class Engine.*712ab21675
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*712ab21675 : UBlueprintFunctionLibrary {

	void *0388028084(); // Function Engine.*712ab21675.*0388028084 //  // @ game+0xf572be4
	void *c6f003bee2(); // Function Engine.*712ab21675.*c6f003bee2 //  // @ game+0xf573cd8
	void *41117d2d05(); // Function Engine.*712ab21675.*41117d2d05 //  // @ game+0xf572a60
};

// Class Engine.Polys
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPolys : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavigationSystem
// Size: 0x4f0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *96008d9dfb; // 0x30(0x08)
	struct ANavigationData* *e4e7cf9e68; // 0x38(0x08)
	char bAutoCreateNavigationData : 1; // 0x40(0x01)
	char bAllowClientSideNavigation : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FString> ModesWithDynamicNavigation; // 0x48(0x10)
	char *743f59c35b : 1; // 0x58(0x01)
	char bInitialBuildingLocked : 1; // 0x58(0x01)
	char pad_58_2 : 1; // 0x58(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float ActiveTilesUpdateInterval; // 0x64(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x68(0x10)
	float DirtyAreasUpdateFreq; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct ANavigationData*> *11b40b1bbe; // 0x80(0x10)
	struct TArray<struct FBox> *eaac0b77b4; // 0x90(0x10)
	struct TMap<int32, struct ANavigationData*> *0f0f4c9bf7; // 0xa0(0x50)
	struct TArray<struct ANavigationData*> *3ff95a942b; // 0xf0(0x10)
	char pad_100[0x60]; // 0x100(0x60)
	struct FMulticastDelegate *42ee0e02ff; // 0x160(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0x170(0x10)
	char pad_180[0x124]; // 0x180(0x124)
	enum class FNavigationSystemRunMode OperationMode; // 0x2a4(0x01)
	char pad_2A5[0x243]; // 0x2a5(0x243)
	uint32 DynamicNavThreadNum; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)

	void *334776277a(); // Function Engine.NavigationSystem.*334776277a //  // @ game+0xf560978
	void *0c341f4aa5(); // Function Engine.NavigationSystem.*0c341f4aa5 //  // @ game+0xf564044
	void *11da4ccb84(); // Function Engine.NavigationSystem.*11da4ccb84 //  // @ game+0xf5679f8
	void GetPathLength(); // Function Engine.NavigationSystem.GetPathLength //  // @ game+0xf5643b0
	void *77a0bbf985(); // Function Engine.NavigationSystem.*77a0bbf985 //  // @ game+0xf57a474
	void GetRandomPointInNavigableRadius(); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius //  // @ game+0xf5645b4
	void *ee8f324dac(); // Function Engine.NavigationSystem.*ee8f324dac //  // @ game+0xf571e4c
	void *dac8f13981(); // Function Engine.NavigationSystem.*dac8f13981 //  // @ game+0xf5728a8
	void *4f592b8d23(); // Function Engine.NavigationSystem.*4f592b8d23 //  // @ game+0xf55feb4
	void *a4c29c0c60(); // Function Engine.NavigationSystem.*a4c29c0c60 //  // @ game+0xf5745f4
	void *63a3633a6b(); // Function Engine.NavigationSystem.*63a3633a6b //  // @ game+0xf56f294
	void *a0ba27c128(); // Function Engine.NavigationSystem.*a0ba27c128 //  // @ game+0xf56794c
	void *290ff27d32(); // Function Engine.NavigationSystem.*290ff27d32 //  // @ game+0xf577194
	void *ac397d8f31(); // Function Engine.NavigationSystem.*ac397d8f31 //  // @ game+0xf5641b4
	void *2f3f6d9fe6(); // Function Engine.NavigationSystem.*2f3f6d9fe6 //  // @ game+0xf57e178
	void *780f25e013(); // Function Engine.NavigationSystem.*780f25e013 //  // @ game+0xf57e098
	void *ee42565f57(); // Function Engine.NavigationSystem.*ee42565f57 //  // @ game+0xf57a520
	void *486f7b589a(); // Function Engine.NavigationSystem.*486f7b589a //  // @ game+0xf5732e0
	void *1dd2a22778(); // Function Engine.NavigationSystem.*1dd2a22778 //  // @ game+0xf57720c
	void GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius //  // @ game+0xf565054
	void *26503b8149(); // Function Engine.NavigationSystem.*26503b8149 //  // @ game+0xf56d0a8
	void *c06c25410a(); // Function Engine.NavigationSystem.*c06c25410a //  // @ game+0xf56db7c
	void ProjectPointToNavigation(); // Function Engine.NavigationSystem.ProjectPointToNavigation //  // @ game+0xf573138
};

// Class Engine.*03e0f44d58
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*03e0f44d58 : UBlueprintFunctionLibrary {

	void *07b7a4dafa(); // Function Engine.*03e0f44d58.*07b7a4dafa //  // @ game+0xf57a05c
	void *0b70cc23fd(); // Function Engine.*03e0f44d58.*0b70cc23fd //  // @ game+0xf579ad4
	void *aebfd25e40(); // Function Engine.*03e0f44d58.*aebfd25e40 //  // @ game+0xf55ecc0
	void *e32ceebe25(); // Function Engine.*03e0f44d58.*e32ceebe25 //  // @ game+0xf5676e4
};

// Class Engine.*7f42a3e224
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*7f42a3e224 : U*c60a4a9930 {
};

// Class Engine.*a67aef2862
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a67aef2862 : UBlueprintFunctionLibrary {

	void *942844ad45(); // Function Engine.*a67aef2862.*942844ad45 //  // @ game+0xf562bfc
	void *db68a77491(); // Function Engine.*a67aef2862.*db68a77491 //  // @ game+0xf562720
	void *be4a574ff3(); // Function Engine.*a67aef2862.*be4a574ff3 //  // @ game+0xf563cd0
	void *fbe7555e25(); // Function Engine.*a67aef2862.*fbe7555e25 //  // @ game+0xf563d88
	void *aa6f5c0ab0(); // Function Engine.*a67aef2862.*aa6f5c0ab0 //  // @ game+0xf567470
};

// Class Engine.*f9bf58199e
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f9bf58199e : UBlueprintFunctionLibrary {

	void LogText(); // Function Engine.*f9bf58199e.LogText //  // @ game+0xf5712c8
	void *a7feec160c(); // Function Engine.*f9bf58199e.*a7feec160c //  // @ game+0xf570540
	void LogLocation(); // Function Engine.*f9bf58199e.LogLocation //  // @ game+0xf5707c4
};

// Class Engine.*12dc587694
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*12dc587694 : UObject {
	struct UEdGraphNode* Node; // 0x30(0x08)
	struct FColor *47a0ae7a77; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x430 (Inherited: 0x3c0)  [layout: KHOP]
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3C0[0x8]; // 0x3c0(0x08)
	struct TArray<struct F*6ba36945a0> BakedStateMachines; // 0x3c8(0x10)
	struct USkeleton* TargetSkeleton; // 0x3d8(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x3e0(0x10)
	int32 *90e7369814; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<int32> OrderedSavedPoseIndices; // 0x3f8(0x10)
	char pad_408[0x18]; // 0x408(0x18)
	struct TArray<struct FName> SyncGroupNames; // 0x420(0x10)
};

// Class Engine.BodySetup
// Size: 0x400 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBodySetup : UObject {
	struct F*e06ec6afa3 *e0362ff98b; // 0x30(0x48)
	struct FName BoneName; // 0x78(0x08)
	enum class EPhysicsType PhysicsType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x84(0x01)
	char bConsiderForBounds : 1; // 0x84(0x01)
	char *29e60c4d97 : 1; // 0x84(0x01)
	char *d5edcef92e : 1; // 0x84(0x01)
	char *310cc5de2b : 1; // 0x84(0x01)
	char *42e2995f96 : 1; // 0x84(0x01)
	char *6d25a76083 : 1; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	enum class *c98926c0a7 CollisionReponse; // 0x90(0x01)
	enum class ECollisionTraceFlag *caf9f153f8; // 0x91(0x01)
	char pad_92[0xe]; // 0x92(0x0e)
	struct FBodyInstance DefaultInstance; // 0xa0(0x230)
	struct FWalkableSlopeOverride *0cb220918f; // 0x2d0(0x10)
	float MinContactOffset; // 0x2e0(0x04)
	float BuildScale; // 0x2e4(0x04)
	struct FVector BuildScale3D; // 0x2e8(0x0c)
	char pad_2F4[0x10c]; // 0x2f4(0x10c)
};

// Class Engine.*a24858c285
// Size: 0x430 (Inherited: 0x400)  [layout: KHOP]
struct U*a24858c285 : UBodySetup {
	struct F*28ab25d1e0 *8e15dd2243; // 0x400(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x110 (Inherited: 0x30)  [layout: KHOP]
struct UPhysicsAsset : UObject {
	struct TArray<int32> *d559cd23dd; // 0x30(0x10)
	struct TArray<struct USkeletalBodySetup*> *015fe5f3f6; // 0x40(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *133744eb5b; // 0x50(0x10)
	char pad_60[0xa0]; // 0x60(0xa0)
	struct TArray<struct UBodySetup*> BodySetup; // 0x100(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x410 (Inherited: 0x400)  [layout: KHOP]
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*fa32eee2c4> *7a50502717; // 0x400(0x10)
};

// Class Engine.*34a642b8a1
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*34a642b8a1 : UObject {
	struct TArray<struct FInputBlendPose> *4ddc011dc4; // 0x30(0x10)
};

// Class Engine.BookMark
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct UBookMark : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	struct TArray<struct FString> *9c38f20f7e; // 0x48(0x10)
};

// Class Engine.*4a3f21024d
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*4a3f21024d : UObject {
	float *66f8ab4544; // 0x30(0x04)
	struct FIntPoint Location; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.Breakpoint
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UEdGraphNode* Node; // 0x38(0x08)
	char *4d0ddcbe3d : 1; // 0x40(0x01)
	char *cb8ab75c38 : 1; // 0x40(0x01)
	char *aa94e4af32 : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UBrushBuilder : UObject {
	struct FString *c76a3a341f; // 0x30(0x10)
	struct FString Tooltip; // 0x40(0x10)
	char *1322f86e82 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FVector> Vertices; // 0x58(0x10)
	struct TArray<struct F*64a42c4ed0> Polys; // 0x68(0x10)
	struct FName Layer; // 0x78(0x08)
	char *2e09759c76 : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d8 (Inherited: 0x30)  [layout: KHOP]
struct UButtonStyleAsset : UObject {
	struct FButtonStyle *44483c445e; // 0x30(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5f0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCameraAnim : UObject {
	struct U*638e4a5490* *cd69dcf8ee; // 0x30(0x08)
	float AnimLength; // 0x38(0x04)
	struct FBox *00522f7c62; // 0x3c(0x1c)
	char *808f2a1bfc : 1; // 0x58(0x01)
	char *6b43cec22e : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *ad0a2b0083; // 0x5c(0x04)
	struct FPostProcessSettings *6f790e3838; // 0x60(0x580)
	float *0c926acf6c; // 0x5e0(0x04)
	char pad_5E4[0xc]; // 0x5e4(0x0c)
};

// Class Engine.*aebce27681
// Size: 0x120 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*aebce27681 : UObject {
	struct UCameraAnim* *156d349c27; // 0x30(0x08)
	struct U*2d24224c7d* *2d24224c7d; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
	float PlayRate; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)
	struct U*5d32238268* *86e25bfa76; // 0x70(0x08)
	struct U*003ec2d994* *16ece09c1e; // 0x78(0x08)
	enum class ECameraAnimPlaySpace *93891ae15d; // 0x80(0x01)
	char pad_81[0x9f]; // 0x81(0x9f)

	void Stop(); // Function Engine.*aebce27681.Stop //  // @ game+0xf57bea4
	void *c9a06d536a(); // Function Engine.*aebce27681.*c9a06d536a //  // @ game+0xf579078
	void SetDuration(); // Function Engine.*aebce27681.SetDuration //  // @ game+0xf575d38
};

// Class Engine.*70696a9360
// Size: 0x68 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*70696a9360 : U*48db839311 {
	struct TArray<struct UCameraShake*> *00f2167955; // 0x50(0x10)
	float *04c5b3ddbd; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCanvas : UObject {
	float *68a28f6d9f; // 0x30(0x04)
	float *07056e4b89; // 0x34(0x04)
	float *6f27892fda; // 0x38(0x04)
	float *6f6415f29d; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	char *9e48ddb476 : 1; // 0x44(0x01)
	char *b8032a7f83 : 1; // 0x44(0x01)
	char *4029051f02 : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 SizeX; // 0x48(0x04)
	int32 SizeY; // 0x4c(0x04)
	struct FPlane *60893c1981; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct U*3fd9fd3a43* *3fd9fd3a43; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	void *da1ae58b0c(); // Function Engine.Canvas.*da1ae58b0c //  // @ game+0xf56b328
	void *775a61dc3a(); // Function Engine.Canvas.*775a61dc3a //  // @ game+0xf56f468
	void *79f4c09e27(); // Function Engine.Canvas.*79f4c09e27 //  // @ game+0xf5694a8
	void *c3ba6d60db(); // Function Engine.Canvas.*c3ba6d60db //  // @ game+0xf56b720
	void *43794fc468(); // Function Engine.Canvas.*43794fc468 //  // @ game+0xf56a874
	void *3d35897f5b(); // Function Engine.Canvas.*3d35897f5b //  // @ game+0xf56f1e8
	void *b32b75ea91(); // Function Engine.Canvas.*b32b75ea91 //  // @ game+0xf56f66c
	void *2b21d4c1db(); // Function Engine.Canvas.*2b21d4c1db //  // @ game+0xf5686d4
	void *4a27c27b09(); // Function Engine.Canvas.*4a27c27b09 //  // @ game+0xf56cec8
	void *412b4ebdaf(); // Function Engine.Canvas.*412b4ebdaf //  // @ game+0xf569e84
	void *2d114fd199(); // Function Engine.Canvas.*2d114fd199 //  // @ game+0xf56c36c
	void *766e23b1c3(); // Function Engine.Canvas.*766e23b1c3 //  // @ game+0xf5687f8
	void *3834f8ec70(); // Function Engine.Canvas.*3834f8ec70 //  // @ game+0xf56b508
};

// Class Engine.*1e8b8c252e
// Size: 0x88 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct U*1e8b8c252e : UChannel {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x80 (Inherited: 0x70)  [layout: LECH - offset chi la uoc luong]
struct UVoiceChannel : UChannel {
	char pad_70[0x10]; // 0x70(0x10)
};

// Class Engine.*f4973a7a72
// Size: 0x610 (Inherited: 0x30)  [layout: KHOP]
struct U*f4973a7a72 : UObject {
	struct FCheckBoxStyle *b727066663; // 0x30(0x5e0)
};

// Class Engine.GPCFakeEngine
// Size: 0xf60 (Inherited: 0xf60)  [layout: KHOP]
struct UGPCFakeEngine : UEngine {
};

// Class Engine.GatherPackageChainCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct UGatherPackageChainCommandlet : UCommandlet {
};

// Class Engine.PluginCommandlet
// Size: 0xa8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UPluginCommandlet : UCommandlet {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.*ffaeddfe7a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ffaeddfe7a : UInterface {
};

// Class Engine.*d3ff18b806
// Size: 0x1f8 (Inherited: 0x38)  [layout: KHOP]
struct U*d3ff18b806 : UCurveBase {
	struct FRichCurve *b4ad4b6de1[0x04]; // 0x38(0x1c0)

	void *bd38fea261(); // Function Engine.*d3ff18b806.*bd38fea261 //  // @ game+0xf563340
};

// Class Engine.*5e2750edbb
// Size: 0x188 (Inherited: 0x38)  [layout: KHOP]
struct U*5e2750edbb : UCurveBase {
	struct FRichCurve *b4ad4b6de1[0x03]; // 0x38(0x150)

	void *d26aec0fc1(); // Function Engine.*5e2750edbb.*d26aec0fc1 //  // @ game+0xf566ab4
};

// Class Engine.CurveEdPresetCurve
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*fc4e6ad3ee
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*fc4e6ad3ee : UInterface {

	void GetBindingName(); // Function Engine.*fc4e6ad3ee.GetBindingName //  // @ game+0xdabf4a8
	void GetCurves(); // Function Engine.*fc4e6ad3ee.GetCurves //  // @ game+0xf562420
	void GetCurveValue(); // Function Engine.*fc4e6ad3ee.GetCurveValue //  // @ game+0xf562394
};

// Class Engine.CurveTable
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UCurveTable : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	struct FPrimaryAssetRules Rules; // 0x38(0x10)
	char bLabelAssetsInMyDirectory : 1; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UObject*> ExplicitAssets; // 0x50(0x10)
	struct TArray<struct UClass*> ExplicitBlueprints; // 0x60(0x10)
};

// Class Engine.*e413ab78e0
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e413ab78e0 : UDataAsset {
	float *7c43a8f6c8; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*5072bbc9c0
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*5072bbc9c0 : UObject {
	int32 *9ba44618fc; // 0x30(0x04)
	struct F*161a3ee1b6 *228bd22655; // 0x34(0x24)
	int32 RandomSeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> *4af48136bd; // 0x60(0x10)
	int32 *2f051dcf01; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct F*db69bc25a6> ChunkParameters; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x78 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UAnimationSettings : U*ba332f0435 {
	int32 CompressCommandletVersion; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x48(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x58(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x60(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float MaxCurveError; // 0x64(0x04)
	float AlternativeCompressionThreshold; // 0x68(0x04)
	bool ForceRecompression; // 0x6c(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x6d(0x01)
	bool bForceBelowThreshold; // 0x6e(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x6f(0x01)
	bool bRaiseMaxErrorToExisting; // 0x70(0x01)
	bool bTryFixedBitwiseCompression; // 0x71(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x72(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x73(0x01)
	bool bTryIntervalKeyRemoval; // 0x74(0x01)
	bool bEnablePerformanceLog; // 0x75(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class Engine.AssetManagerSettings
// Size: 0xa8 (Inherited: 0x40)  [layout: KHOP]
struct UAssetManagerSettings : U*ba332f0435 {
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x50(0x10)
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x60(0x10)
	bool bOnlyCookProductionAssets; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x78(0x10)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x88(0x10)
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects; // 0x98(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb8 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UAudioSettings : U*ba332f0435 {
	struct FStringAssetReference DefaultSoundClassName; // 0x40(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName; // 0x50(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x60(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x70(0x10)
	float LowPassFilterResonance; // 0x80(0x04)
	int32 MaximumConcurrentStreams; // 0x84(0x04)
	struct TArray<struct FAudioQualitySettings> QualityLevels; // 0x88(0x10)
	char bAllowVirtualizedSounds : 1; // 0x98(0x01)
	char bDisableMasterEQ : 1; // 0x98(0x01)
	char bDisableMasterReverb : 1; // 0x98(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString DialogueFilenameFormat; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x60 (Inherited: 0x40)  [layout: KHOP]
struct UExcludedPackageSettings : U*ba332f0435 {
	struct TArray<struct FString> CommonExcludedPackages; // 0x40(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages; // 0x50(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x78 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UStreamingSettings : U*ba332f0435 {
	char AsyncLoadingThreadEnabled : 1; // 0x40(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TimeLimitExceededMultiplier; // 0x44(0x04)
	float TimeLimitExceededMinTime; // 0x48(0x04)
	int32 MinBulkDataSizeForAsyncLoading; // 0x4c(0x04)
	float AsyncIOBandwidthLimit; // 0x50(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x54(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x54(0x01)
	char LoadAllStreamingLevels : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float AsyncLoadingTimeLimit; // 0x58(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x5c(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x60(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x64(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x68(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity; // 0x6c(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x60 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UGarbageCollectionSettings : U*ba332f0435 {
	float TimeBetweenPurgingPendingKillObjects; // 0x40(0x04)
	char FlushStreamingOnGC : 1; // 0x44(0x01)
	char AllowParallelGC : 1; // 0x44(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x44(0x01)
	char CreateGCClusters : 1; // 0x44(0x01)
	char MergeGCClusters : 1; // 0x44(0x01)
	char ActorClusteringEnabled : 1; // 0x44(0x01)
	char BlueprintClusteringEnabled : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NumRetriesBeforeForcingGC; // 0x48(0x04)
	int32 MaxObjectsNotConsideredByGC; // 0x4c(0x04)
	int32 SizeOfPermanentObjectPool; // 0x50(0x04)
	int32 MaxObjectsInGame; // 0x54(0x04)
	int32 MaxObjectsInEditor; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct UMeshSimplificationSettings : U*ba332f0435 {
	struct FName MeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x50 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UNetworkSettings : U*ba332f0435 {
	char bVerifyPeer : 1; // 0x40(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxRepArraySize; // 0x44(0x04)
	int32 MaxRepArrayMemory; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0x100 (Inherited: 0x40)  [layout: KHOP]
struct UPhysicsSettings : U*ba332f0435 {
	float DefaultGravityZ; // 0x40(0x04)
	float DefaultTerminalVelocity; // 0x44(0x04)
	float DefaultFluidFriction; // 0x48(0x04)
	int32 SimulateScratchMemorySize; // 0x4c(0x04)
	int32 RagdollAggregateThreshold; // 0x50(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x54(0x04)
	bool bEnableAsyncScene; // 0x58(0x01)
	bool bEnableShapeSharing; // 0x59(0x01)
	bool bEnableAggressiveShapeSharing; // 0x5a(0x01)
	bool bEnableAsyncSceneOnDedicatedServer; // 0x5b(0x01)
	bool bEnableShapeSharingOnDedicatedServer; // 0x5c(0x01)
	bool bEnableAggressiveShapeSharingOnDedicatedServer; // 0x5d(0x01)
	bool bEnableComplexForSim; // 0x5e(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x5f(0x01)
	bool bEnablePCM; // 0x60(0x01)
	bool bEnableStabilization; // 0x61(0x01)
	bool bWarnMissingLocks; // 0x62(0x01)
	bool bEnable2DPhysics; // 0x63(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x64(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float BounceThresholdVelocity; // 0x68(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x6c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	float MaxAngularVelocity; // 0x70(0x04)
	float MaxDepenetrationVelocity; // 0x74(0x04)
	float ContactOffsetMultiplier; // 0x78(0x04)
	float MinContactOffset; // 0x7c(0x04)
	float MaxContactOffset; // 0x80(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x84(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x85(0x01)
	bool bDefaultHasComplexCollision; // 0x86(0x01)
	bool bSuppressFaceRemapTable; // 0x87(0x01)
	bool bSupportUVFromHitResults; // 0x88(0x01)
	bool bDisableActiveActors; // 0x89(0x01)
	bool bDisableCCD; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	float MaxPhysicsDeltaTime; // 0x8c(0x04)
	bool bSubstepping; // 0x90(0x01)
	bool bSubsteppingAsync; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float MaxSubstepDeltaTime; // 0x94(0x04)
	int32 MaxSubsteps; // 0x98(0x04)
	float SyncSceneSmoothingFactor; // 0x9c(0x04)
	float AsyncSceneSmoothingFactor; // 0xa0(0x04)
	float InitialAverageFrameRate; // 0xa4(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer; // 0xa8(0x04)
	bool bSubsteppingOnDedicatedServer; // 0xac(0x01)
	bool bSubsteppingAsyncOnDedicatedServer; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	float MaxSubstepDeltaTimeOnDedicatedServer; // 0xb0(0x04)
	int32 MaxSubstepsOnDedicatedServer; // 0xb4(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer; // 0xb8(0x04)
	float AsyncSceneSmoothingFactorOnDedicatedServer; // 0xbc(0x04)
	float InitialAverageFrameRateOnDedicatedServer; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; // 0xc8(0x10)
	struct FBroadphaseSettings DefaultBroadphaseSettings; // 0xd8(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc8 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct URendererSettings : U*ba332f0435 {
	char bMobileHDR : 1; // 0x40(0x01)
	char bMobileDisableVertexFog : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxMobileCascades; // 0x44(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x4c(0x01)
	char bOcclusionCulling : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MinScreenRadiusForLights; // 0x50(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x54(0x04)
	float MinScreenRadiusForCSMdepth; // 0x58(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x5c(0x01)
	char bTextureStreaming : 1; // 0x5c(0x01)
	char bUseDXT5NormalMaps : 1; // 0x5c(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32 ReflectionCaptureResolution; // 0x60(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x64(0x01)
	char bForwardShading : 1; // 0x64(0x01)
	char bVertexFoggingForOpaque : 1; // 0x64(0x01)
	char bAllowStaticLighting : 1; // 0x64(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x64(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x64(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x64(0x01)
	char bGenerateLandscapeGIData : 1; // 0x64(0x01)
	char bCompressMeshDistanceFields : 1; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x68(0x04)
	char bSeparateTranslucency : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	enum class ETranslucentSortPolicy TranslucentSortPolicy; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TranslucentSortAxis; // 0x74(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bCustomDepthTaaJitter : 1; // 0x84(0x01)
	char bDefaultFeatureBloom : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x84(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bDefaultFeatureMotionBlur : 1; // 0x8c(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x8c(0x01)
	char bTemporalUpsampling : 1; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	enum class EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bStencilForLODDither : 1; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EEarlyZPass EarlyZPass; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char bEarlyZPassMovable : 1; // 0x9c(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x9c(0x01)
	char bEarlyZPassForceFull : 1; // 0x9c(0x01)
	char bDBuffer : 1; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bBasePassOutputsVelocity : 1; // 0xa4(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xa4(0x01)
	char bDefaultParticleCutouts : 1; // 0xa4(0x01)
	char bGlobalClipPlane : 1; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char bUseGPUMorphTargets : 1; // 0xac(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xac(0x01)
	char bInstancedStereo : 1; // 0xac(0x01)
	char bMultiView : 1; // 0xac(0x01)
	char bMobileMultiView : 1; // 0xac(0x01)
	char bMobileMultiViewDirect : 1; // 0xac(0x01)
	char bMonoscopicFarField : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float WireframeCullThreshold; // 0xb0(0x04)
	char bSupportStationarySkylight : 1; // 0xb4(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xb4(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xb4(0x01)
	char bSupportAtmosphericFog : 1; // 0xb4(0x01)
	char bSupportSkinCacheShaders : 1; // 0xb4(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xb4(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xb4(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	uint32 MobileNumDynamicPointLights; // 0xb8(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct URendererOverrideSettings : U*ba332f0435 {
	char bSupportAllShaderPermutations : 1; // 0x40(0x01)
	char bForceRecomputeTangents : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x210 (Inherited: 0x40)  [layout: KHOP]
struct UUserInterfaceSettings : U*ba332f0435 {
	enum class ERenderFocusRule RenderFocusRule; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<enum class EMouseCursor, struct FHardwareCursorReference> HardwareCursors; // 0x48(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors; // 0x98(0x50)
	struct FStringClassReference DefaultCursor; // 0xe8(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0xf8(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x108(0x10)
	struct FStringClassReference HandCursor; // 0x118(0x10)
	struct FStringClassReference GrabHandCursor; // 0x128(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x138(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x148(0x10)
	float ApplicationScale; // 0x158(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0x160(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x170(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct TArray<struct UObject*> *fe294c8861; // 0x1f0(0x10)
	struct UClass* *59484fc99a; // 0x200(0x08)
	struct UDPICustomScalingRule* *9e545a88b0; // 0x208(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x30(0x10)
	char pad_40[0xd0]; // 0x40(0xd0)
};

// Class Engine.DialogueVoice
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x30(0x01)
	enum class EGrammaticalNumber Plurality; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FGuid *5dd857e633; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.DialogueWave
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct UDialogueWave : UObject {
	char *1ae5b28511 : 1; // 0x30(0x01)
	char bOverride_SubtitleOverride : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString *11d0103faf; // 0x38(0x10)
	struct FString *be4a173cbb; // 0x48(0x10)
	struct TArray<struct F*71c0cb9ea0> ContextMappings; // 0x58(0x10)
	struct FGuid *5dd857e633; // 0x68(0x10)
};

// Class Engine.Distribution
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UDistribution : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*f00c361422
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*f00c361422 : UDistribution {
	char *a17d7c3af8 : 1; // 0x38(0x01)
	char pad_38_1 : 1; // 0x38(0x01)
	char *66674883df : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*d09e7bc2e3
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*d09e7bc2e3 : U*f00c361422 {
	float Constant; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*b58ce3d3ae
// Size: 0x68 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct U*b58ce3d3ae : U*d09e7bc2e3 {
	struct FName ParameterName; // 0x48(0x08)
	float *a571160aad; // 0x50(0x04)
	float *026cc1049b; // 0x54(0x04)
	float *13b43ba08a; // 0x58(0x04)
	float *850dd5a90c; // 0x5c(0x04)
	enum class *27f255531e *5811bd3416; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct UDistributionFloatParticleParameter : U*b58ce3d3ae {
};

// Class Engine.*1f97e5c6f9
// Size: 0x58 (Inherited: 0x40)  [layout: KHOP]
struct U*1f97e5c6f9 : U*f00c361422 {
	struct FInterpCurveFloat *d465ca5283; // 0x40(0x18)
};

// Class Engine.*2b38d0386f
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct U*2b38d0386f : U*f00c361422 {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Engine.*9df0c6ee63
// Size: 0x58 (Inherited: 0x40)  [layout: KHOP]
struct U*9df0c6ee63 : U*f00c361422 {
	struct FInterpCurveVector2D *d465ca5283; // 0x40(0x18)
};

// Class Engine.*9e847ab720
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*9e847ab720 : UDistribution {
	char *a17d7c3af8 : 1; // 0x38(0x01)
	char *e348bf02ca : 1; // 0x38(0x01)
	char *66674883df : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*3017781415
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*3017781415 : U*9e847ab720 {
	struct FVector Constant; // 0x40(0x0c)
	char *feaa079332 : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	enum class *94718777a6 *613f518ff0; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*7eac41e9b4
// Size: 0x98 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*7eac41e9b4 : U*3017781415 {
	struct FName ParameterName; // 0x58(0x08)
	struct FVector *a571160aad; // 0x60(0x0c)
	struct FVector *026cc1049b; // 0x6c(0x0c)
	struct FVector *13b43ba08a; // 0x78(0x0c)
	struct FVector *850dd5a90c; // 0x84(0x0c)
	enum class *27f255531e *e41d1c332b[0x03]; // 0x90(0x03)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct UDistributionVectorParticleParameter : U*7eac41e9b4 {
};

// Class Engine.*ebb8a0a46c
// Size: 0x60 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*ebb8a0a46c : U*9e847ab720 {
	struct FInterpCurveVector *d465ca5283; // 0x40(0x18)
	char *feaa079332 : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *94718777a6 *613f518ff0; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.*82e05c827b
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*82e05c827b : U*9e847ab720 {
	struct FVector Max; // 0x40(0x0c)
	struct FVector Min; // 0x4c(0x0c)
	char *feaa079332 : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *94718777a6 *613f518ff0; // 0x5c(0x01)
	enum class *fda3020628 *0eb88d83d6[0x03]; // 0x5d(0x03)
	char *a06bd684a0 : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*c19329fd0d
// Size: 0x88 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*c19329fd0d : U*82e05c827b {
	struct FName *00f9443ef3; // 0x68(0x08)
	struct FName *0884bd62c9; // 0x70(0x08)
	struct FVector Scale; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Engine.*f0fa632d67
// Size: 0x88 (Inherited: 0x88)  [layout: KHOP]
struct U*f0fa632d67 : U*c19329fd0d {
};

// Class Engine.*7b498a60c9
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*7b498a60c9 : U*9e847ab720 {
	struct FInterpCurveTwoVectors *d465ca5283; // 0x40(0x18)
	char *ad67c91ce7 : 1; // 0x58(0x01)
	char *329055cdbb : 1; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *94718777a6 *613f518ff0[0x02]; // 0x5c(0x02)
	enum class *fda3020628 *0eb88d83d6[0x03]; // 0x5e(0x03)
	char pad_61[0x3]; // 0x61(0x03)
	char *a06bd684a0 : 1; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*1bf3e421c5
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*1bf3e421c5 : UObject {
};

// Class Engine.*cfb0831ea5
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*cfb0831ea5 : U*1bf3e421c5 {
	struct TArray<struct F*15b24d26e8> *902e88c14b; // 0x30(0x10)
};

// Class Engine.*384d53016a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*384d53016a : U*1bf3e421c5 {
};

// Class Engine.*6cd8527306
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*6cd8527306 : U*384d53016a {
	struct TArray<struct F*b101b6cac5> *4eabdda221; // 0x30(0x10)
};

// Class Engine.*3a136d2785
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*3a136d2785 : U*384d53016a {
	struct TArray<struct F*46a01f3afc> *f1772eaf2f; // 0x30(0x10)
};

// Class Engine.*19f23744db
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*19f23744db : U*384d53016a {
	struct TArray<struct F*a01fd2324f> *aa632f29a4; // 0x30(0x10)
};

// Class Engine.*1dca4e3412
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*1dca4e3412 : U*19f23744db {
};

// Class Engine.*52bddb0b7c
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*52bddb0b7c : U*384d53016a {
	struct TArray<struct F*a34b1bdd8e> *0da57b37c2; // 0x30(0x10)
};

// Class Engine.*a20db8cb51
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*a20db8cb51 : U*384d53016a {
	struct TArray<struct F*77ce53153a> *507f352d0c; // 0x30(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x30(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x38(0x10)
	char bEditable : 1; // 0x48(0x01)
	char bAllowDeletion : 1; // 0x48(0x01)
	char bAllowRenaming : 1; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)
};

// Class Engine.*799f47701b
// Size: 0xc8 (Inherited: 0xa8)  [layout: KHOP]
struct U*799f47701b : UEdGraphNode {
	struct FString Link; // 0xa8(0x10)
	struct FString Excerpt; // 0xb8(0x10)
};

// Class Engine.*e75b3ef1d0
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*e75b3ef1d0 : UObject {
};

// Class Engine.*b34cec0d0c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*b34cec0d0c : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UEndUserSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x38(0x01)
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x39(0x01)
	bool bAllowUserIdInUsageData; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UEngineHandlerComponentFactory : U*989a0ffa1c {
};

// Class Engine.Exporter
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UExporter : UObject {
	struct UClass* *c3e59fa1cc; // 0x30(0x08)
	struct UObject* *ac5dc917d2; // 0x38(0x08)
	struct TArray<struct FString> *88faedb1dd; // 0x40(0x10)
	struct TArray<struct FString> *da2803b2c1; // 0x50(0x10)
	int32 *f7f21a8675; // 0x60(0x04)
	int32 *74454e7ec1; // 0x64(0x04)
	char *ccd269313e : 1; // 0x68(0x01)
	char *3a9e6655e2 : 1; // 0x68(0x01)
	char *d2addde38f : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*de07b3fa2a
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*de07b3fa2a : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class Engine.*93a6da9a0b
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct U*93a6da9a0b : U*002e0cdee0 {
	struct TArray<struct FVector2D> Points; // 0x30(0x10)
	struct TArray<struct F*a4f9f66168> Instances; // 0x40(0x10)
	struct U*de07b3fa2a* Manager; // 0x50(0x08)
};

// Class Engine.*00378ae1a0
// Size: 0xe0 (Inherited: 0x30)  [layout: KHOP]
struct U*00378ae1a0 : UObject {
	struct F*7f7b0514db Data; // 0x30(0xb0)
};

// Class Engine.Font
// Size: 0x1c8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UFont : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EFontCacheType *1aadacb6b3; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*8fbc7eed0e> Characters; // 0x40(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x50(0x10)
	int32 *f60c11e8b3; // 0x60(0x04)
	float *dc1a3b5cb3; // 0x64(0x04)
	float *e24ec170ea; // 0x68(0x04)
	float Descent; // 0x6c(0x04)
	float *ee64d27390; // 0x70(0x04)
	int32 *7850dfd60c; // 0x74(0x04)
	struct F*7f7b0514db ImportOptions; // 0x78(0xb0)
	int32 *6faa25443f; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32> *cec774edc3; // 0x130(0x10)
	float *97f5b3c33e; // 0x140(0x04)
	int32 *ac8808d65c; // 0x144(0x04)
	struct FName *d3f9ba7632; // 0x148(0x08)
	struct F*c9f8b0888b *c9f8b0888b; // 0x150(0x28)
	char pad_178[0x50]; // 0x178(0x50)
};

// Class Engine.FontFace
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UFontFace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString SourceFilename; // 0x38(0x10)
	enum class EFontHinting Hinting; // 0x48(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x49(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x4a(0x01)
	enum class *e9a1ff2987 LayoutMethod; // 0x4b(0x01)
	char pad_4C[0x14]; // 0x4c(0x14)
};

// Class Engine.*fdc5741844
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*fdc5741844 : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UHapticFeedbackEffect_Buffer : U*fdc5741844 {
	struct TArray<bool> *0e83146b3b; // 0x30(0x10)
	int32 SampleRate; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x120 (Inherited: 0x30)  [layout: KHOP]
struct UHapticFeedbackEffect_Curve : U*fdc5741844 {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x30(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UHapticFeedbackEffect_SoundWave : U*fdc5741844 {
	struct USoundWave* SoundWave; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*4325ad4d59> *d505db451b; // 0x30(0x10)
	struct TArray<struct UActorComponent*> *d965c12bc1; // 0x40(0x10)
};

// Class Engine.InputSettings
// Size: 0xb0 (Inherited: 0x30)  [layout: KHOP]
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x30(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x40(0x01)
	char bF11TogglesFullscreen : 1; // 0x40(0x01)
	char bUseMouseForTouch : 1; // 0x40(0x01)
	char bEnableMouseSmoothing : 1; // 0x40(0x01)
	char bEnableFOVScaling : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float FOVScale; // 0x44(0x04)
	float DoubleClickTime; // 0x48(0x04)
	bool bCaptureMouseOnLaunch; // 0x4c(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x4d(0x01)
	bool bDefaultViewportMouseLock; // 0x4e(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x4f(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x50(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x60(0x10)
	bool bAlwaysShowTouchInterface; // 0x70(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x78(0x10)
	struct FKey ConsoleKey; // 0x88(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0xa0(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*553c42f8a2> Tabs; // 0x30(0x10)
	int32 *b4644662a9; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpData
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct UInterpData : UObject {
	float InterpLength; // 0x30(0x04)
	float *bc5d7ad5dd; // 0x34(0x04)
	struct TArray<struct U*638e4a5490*> *67149baba8; // 0x38(0x10)
	struct UInterpCurveEdSetup* *e2227b0118; // 0x48(0x08)
	float *5edc525129; // 0x50(0x04)
	float *21638cc65d; // 0x54(0x04)
	char *598e99f778 : 1; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct U*1a7a4c030e* *2a23b09627; // 0x60(0x08)
	struct TArray<struct FName> *326f5b931a; // 0x68(0x10)
};

// Class Engine.*1875722008
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*1875722008 : UObject {
	struct FString Caption; // 0x30(0x10)
};

// Class Engine.*bf840cddc2
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*bf840cddc2 : U*1875722008 {
};

// Class Engine.*d7b5a15455
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*d7b5a15455 : U*1875722008 {
};

// Class Engine.*638e4a5490
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*638e4a5490 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct U*6e42544ba5*> *42ab531f58; // 0x38(0x10)
	struct FName GroupName; // 0x48(0x08)
	struct FColor *f5c7f7a483; // 0x50(0x04)
	char *ea4f7a554b : 1; // 0x54(0x01)
	char bVisible : 1; // 0x54(0x01)
	char *4c659e14c9 : 1; // 0x54(0x01)
	char *78c837f80d : 1; // 0x54(0x01)
	char *360a138769 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*b7db78e663
// Size: 0x68 (Inherited: 0x58)  [layout: LECH - offset chi la uoc luong]
struct U*b7db78e663 : U*638e4a5490 {
	struct UCameraAnim* *aebce27681; // 0x58(0x08)
	float *ecda99f827; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*1a7a4c030e
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct U*1a7a4c030e : U*638e4a5490 {
};

// Class Engine.*2d24224c7d
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*2d24224c7d : UObject {
	struct U*638e4a5490* Group; // 0x30(0x08)
	struct AActor* GroupActor; // 0x38(0x08)
	struct TArray<struct U*a9f573a776*> *9e2104ac9d; // 0x40(0x10)
};

// Class Engine.*cbe18e5d88
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*cbe18e5d88 : U*2d24224c7d {
};

// Class Engine.*ff6044e6f1
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*ff6044e6f1 : U*2d24224c7d {
};

// Class Engine.*6e42544ba5
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*6e42544ba5 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct U*6e42544ba5*> *5393e06225; // 0x40(0x10)
	struct UClass* *0eb6931308; // 0x50(0x08)
	enum class *b3102c062a *ec70dd9ffb; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString TrackTitle; // 0x60(0x10)
	char *e181b7fc80 : 1; // 0x70(0x01)
	char *7568ecfe32 : 1; // 0x70(0x01)
	char *79ed7e2c1f : 1; // 0x70(0x01)
	char *360a138769 : 1; // 0x70(0x01)
	char *156a0b58a2 : 1; // 0x70(0x01)
	char *41f70c8289 : 1; // 0x70(0x01)
	char bVisible : 1; // 0x70(0x01)
	char *a75004635f : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*8c54f623cc
// Size: 0x90 (Inherited: 0x78)  [layout: KHOP]
struct U*8c54f623cc : U*6e42544ba5 {
	struct TArray<struct F*8b28a21b8c> *8b4ba6a15b; // 0x78(0x10)
	struct FName PropertyName; // 0x88(0x08)
};

// Class Engine.*2b67d822e5
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*2b67d822e5 : U*6e42544ba5 {
	struct TArray<struct F*23320c8222> *9cbfc731f5; // 0x78(0x10)
	char *e0e48084d9 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*a3c73eeaa8
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*a3c73eeaa8 : U*6e42544ba5 {
	struct TArray<struct F*1d330be6be> *e1f31df2d2; // 0x78(0x10)
	char *ae6be4529a : 1; // 0x88(0x01)
	char *d0889ef2bb : 1; // 0x88(0x01)
	char *d29efdf9ab : 1; // 0x88(0x01)
	char *0f4c6776d9 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*fcec9d12d0
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*fcec9d12d0 : U*6e42544ba5 {
	struct FInterpCurveFloat *2e97652dc4; // 0x78(0x18)
	float *5d956e3c78; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*fbaa04b12a
// Size: 0xb8 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*fbaa04b12a : U*fcec9d12d0 {
	struct FName SlotName; // 0x98(0x08)
	struct TArray<struct F*a4418b4193> *d7d6e70324; // 0xa0(0x10)
	char *7781ebdaf5 : 1; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.*25acfd6a98
// Size: 0xb0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*25acfd6a98 : U*fcec9d12d0 {
	char *07e0c89e26 : 1; // 0x98(0x01)
	char *bc9edfbd20 : 1; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FLinearColor *3fb5984f0d; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Engine.*2e18e3be2d
// Size: 0xb8 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*2e18e3be2d : U*fcec9d12d0 {
	struct UAnimBlueprintGeneratedClass* *763c705507; // 0x98(0x08)
	struct UClass* AnimClass; // 0xa0(0x08)
	struct FName ParamName; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.*20f6230c27
// Size: 0xb0 (Inherited: 0x98)  [layout: KHOP]
struct U*20f6230c27 : U*fcec9d12d0 {
	struct TArray<struct UMaterialInterface*> *0bbc73b703; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*658039e9df
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct U*658039e9df : U*fcec9d12d0 {
	struct FName ParamName; // 0x98(0x08)
};

// Class Engine.*aa4733698a
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct U*aa4733698a : U*fcec9d12d0 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*5d32238268
// Size: 0xd0 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*5d32238268 : U*6e42544ba5 {
	struct FInterpCurveVector *e8d132fb47; // 0x78(0x18)
	struct FInterpCurveVector *26bd36361e; // 0x90(0x18)
	struct F*cf139e3650 *89cfe7f9bd; // 0xa8(0x10)
	struct FName *ab254614a5; // 0xb8(0x08)
	float *0d8d531737; // 0xc0(0x04)
	float *a341a90435; // 0xc4(0x04)
	char *83f91d0806 : 1; // 0xc8(0x01)
	char *5470481f36 : 1; // 0xc8(0x01)
	char *81c72e9c21 : 1; // 0xc8(0x01)
	char *302e5e011f : 1; // 0xc8(0x01)
	char *eacd9a6a4e : 1; // 0xc8(0x01)
	char *3a16c60d57 : 1; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class *abc20a9196 *ef7a35840c; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Engine.*07d61c1a62
// Size: 0xb0 (Inherited: 0x98)  [layout: KHOP]
struct U*07d61c1a62 : U*fcec9d12d0 {
	enum class *ac137bec3f *4586753dd0; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*cf139e3650 *89cfe7f9bd; // 0xa0(0x10)
};

// Class Engine.*c32fe82120
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*c32fe82120 : U*fcec9d12d0 {
};

// Class Engine.*c5a8957cba
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*c5a8957cba : U*6e42544ba5 {
	struct FInterpCurveLinearColor *2b11d7cca8; // 0x78(0x18)
	float *5d956e3c78; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*2f33a83c6f
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct U*2f33a83c6f : U*c5a8957cba {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*1937a0f7f6
// Size: 0x88 (Inherited: 0x78)  [layout: KHOP]
struct U*1937a0f7f6 : U*6e42544ba5 {
	struct TArray<struct F*c86e1d7fc5> *b969ba8370; // 0x78(0x10)
};

// Class Engine.*6ea1ffce7c
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*6ea1ffce7c : U*6e42544ba5 {
	struct TArray<struct F*8fbd1d328b> *d8a7eeed65; // 0x78(0x10)
	char *84328d5af7 : 1; // 0x88(0x01)
	char *5a5ca87fc4 : 1; // 0x88(0x01)
	char *ae6be4529a : 1; // 0x88(0x01)
	char *d0889ef2bb : 1; // 0x88(0x01)
	char *d29efdf9ab : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*e2969d165e
// Size: 0x98 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*e2969d165e : U*6e42544ba5 {
	struct FInterpCurveVector *978384fbee; // 0x78(0x18)
	float *5d956e3c78; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*595c3e8483
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*595c3e8483 : U*e2969d165e {
};

// Class Engine.*4a8fb7374e
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct U*4a8fb7374e : U*e2969d165e {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*b8ddadc108
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*b8ddadc108 : U*e2969d165e {
};

// Class Engine.*d504becb90
// Size: 0xb0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct U*d504becb90 : U*e2969d165e {
	struct TArray<struct F*0072652ab7> Sounds; // 0x98(0x10)
	char *f4b0485a93 : 1; // 0xa8(0x01)
	char *d6ad24a09a : 1; // 0xa8(0x01)
	char *b363b1e1bb : 1; // 0xa8(0x01)
	char *677548e097 : 1; // 0xa8(0x01)
	char *67145cde23 : 1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*2b98a20ef3
// Size: 0xb0 (Inherited: 0x98)  [layout: KHOP]
struct U*2b98a20ef3 : U*e2969d165e {
	struct TArray<struct UMaterialInterface*> *0bbc73b703; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*1e3f402d73
// Size: 0xa0 (Inherited: 0x98)  [layout: KHOP]
struct U*1e3f402d73 : U*e2969d165e {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*50d22663ea
// Size: 0x90 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct U*50d22663ea : U*6e42544ba5 {
	struct TArray<struct F*c9dac7e535> *8adc68eae6; // 0x78(0x10)
	char *ae6be4529a : 1; // 0x88(0x01)
	char *d0889ef2bb : 1; // 0x88(0x01)
	char *d29efdf9ab : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*a9f573a776
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*a9f573a776 : UObject {
};

// Class Engine.*c861ac71a7
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*c861ac71a7 : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*9b01d60acd
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9b01d60acd : U*a9f573a776 {
};

// Class Engine.*9c91308eda
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9c91308eda : U*a9f573a776 {
};

// Class Engine.*80eeee8de4
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct U*80eeee8de4 : U*a9f573a776 {
	struct AActor* *704ad53dea; // 0x30(0x08)
};

// Class Engine.*bb8ee56ebd
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*bb8ee56ebd : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*8754f1cb65
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*8754f1cb65 : U*a9f573a776 {
};

// Class Engine.*8eff1b3b2b
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*8eff1b3b2b : U*a9f573a776 {
	struct UAnimInstance* AnimScriptInstance; // 0x30(0x08)
	float *90ce6648ea; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Engine.*3664e383c7
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct U*3664e383c7 : U*a9f573a776 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<float> *7eb3f2ba48; // 0x40(0x10)
	struct TArray<struct F*72b4737276> *c1ed31cf38; // 0x50(0x10)
	struct U*20f6230c27* *2a994bc76a; // 0x60(0x08)
};

// Class Engine.*7144b5b59e
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*7144b5b59e : U*a9f573a776 {
	float *90ce6648ea; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*003ec2d994
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct U*003ec2d994 : U*a9f573a776 {
	struct FVector ResetLocation; // 0x30(0x0c)
	struct FRotator ResetRotation; // 0x3c(0x0c)
};

// Class Engine.*72b4ebdf1c
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*72b4ebdf1c : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*2c90dc170b
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*2c90dc170b : U*a9f573a776 {
	struct UProperty* *bf88778fd3; // 0x30(0x08)
	struct UObject* *8fc28885e8; // 0x38(0x08)
};

// Class Engine.*2170da7664
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*2170da7664 : U*2c90dc170b {
	char pad_40[0x8]; // 0x40(0x08)
	struct UBoolProperty* BoolProperty; // 0x48(0x08)
	bool *8720931527; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*334bd98e41
// Size: 0x50 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*334bd98e41 : U*2c90dc170b {
	char pad_40[0x8]; // 0x40(0x08)
	struct FColor *4dc6ab69ff; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*92810d049d
// Size: 0x50 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*92810d049d : U*2c90dc170b {
	char pad_40[0x8]; // 0x40(0x08)
	float *90ce6648ea; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*969cc30157
// Size: 0x58 (Inherited: 0x40)  [layout: KHOP]
struct U*969cc30157 : U*2c90dc170b {
	char pad_40[0x8]; // 0x40(0x08)
	struct FLinearColor *4dc6ab69ff; // 0x48(0x10)
};

// Class Engine.*e5e1bfdf74
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*e5e1bfdf74 : U*2c90dc170b {
	char pad_40[0x8]; // 0x40(0x08)
	struct FVector *da6323e064; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*e182b9fcaa
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*e182b9fcaa : U*a9f573a776 {
	float *526121e24c; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*2e5487797e
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*2e5487797e : U*a9f573a776 {
	float *977926455a; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAudioComponent* *a7ee2d7596; // 0x38(0x08)
};

// Class Engine.*09372fad39
// Size: 0x40 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*09372fad39 : U*a9f573a776 {
	enum class *e759acebdc Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *977926455a; // 0x34(0x04)
	char *3437b55122 : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*c3049cb122
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct U*c3049cb122 : U*a9f573a776 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<struct FVector> *24b5796640; // 0x40(0x10)
	struct TArray<struct F*72b4737276> *c1ed31cf38; // 0x50(0x10)
	struct U*2b98a20ef3* *2a994bc76a; // 0x60(0x08)
};

// Class Engine.*013f699fc1
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct U*013f699fc1 : U*a9f573a776 {
	enum class *0a5a696a1e Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *977926455a; // 0x34(0x04)
};

// Class Engine.*5e630c1d4f
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct U*5e630c1d4f : UObject {
	uint16 *1f95f8ccad; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	uint32 *dd7303611e; // 0x34(0x04)
	uint64 *fbc0acb1f6; // 0x38(0x08)
	int8 *5727f3cbcd; // 0x40(0x01)
	char pad_41[0x1]; // 0x41(0x01)
	int16 *2fd6e244ef; // 0x42(0x02)
	char pad_44[0x4]; // 0x44(0x04)
	int64 *f6ec40bdf0; // 0x48(0x08)
	bool *b718b86ced; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *1505f79275; // 0x54(0x04)
};

// Class Engine.LandscapeDeformSetting
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct ULandscapeDeformSetting : UObject {
	struct TArray<struct F*6c7f81d430> *6c7f81d430; // 0x30(0x10)
};

// Class Engine.*3ad5150675
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*3ad5150675 : U*002e0cdee0 {
	struct TArray<struct U*e898bbdc99*> *ed93d40df9; // 0x30(0x10)
	struct TArray<struct F*c0058a9abc> Instances; // 0x40(0x10)
};

// Class Engine.*e898bbdc99
// Size: 0x1d0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*e898bbdc99 : UObject {
	struct UWorld* World; // 0x30(0x08)
	struct ALandscape* Landscape; // 0x38(0x1c)
	struct FGuid *4f77f252af; // 0x54(0x10)
	struct FIntRect *3cf14755ce; // 0x64(0x10)
	char pad_74[0xc]; // 0x74(0x0c)
	struct F*c0058a9abc *ae491ce7e3; // 0x80(0x110)
	struct UMaterialInterface* LandscapeMaterial; // 0x190(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x198(0x08)
	uint32 *abcfaede7a; // 0x1a0(0x04)
	int32 *3a974f4904; // 0x1a4(0x04)
	struct TArray<struct F*89821c8e2a> *48616d3da6; // 0x1a8(0x10)
	struct TArray<struct F*8d88618dc3> *81ef30bff5; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class Engine.Layer
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct ULayer : UObject {
	struct FName LayerName; // 0x30(0x08)
	char bIsVisible : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*6406a7b5b0> ActorStats; // 0x40(0x10)
};

// Class Engine.*7706f23edc
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*7706f23edc : UObject {
	struct TArray<struct AActor*> Actors; // 0x30(0x10)
};

// Class Engine.*9ed14208c2
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*9ed14208c2 : U*002e0cdee0 {
	struct TArray<struct F*9a7c5f5ca4> *4d0ad57a65; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*ed3883767e> *cc4cf1b9cf; // 0x50(0x10)
};

// Class Engine.*7a1fc6fd32
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*7a1fc6fd32 : U*002e0cdee0 {
	struct TArray<struct F*2aaaacacd5> Instances; // 0x30(0x10)
};

// Class Engine.*9a467d3ce7
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*9a467d3ce7 : U*002e0cdee0 {
	struct TArray<struct F*b2a10c47c1> *d5bb0c8322; // 0x30(0x10)
	struct TArray<struct F*decfdd1f21> Instances; // 0x40(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0x190 (Inherited: 0x180)  [layout: LECH - offset chi la uoc luong]
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x180(0x04)
	char pad_184[0xc]; // 0x184(0x0c)
};

// Class Engine.TextureRenderTarget2D
// Size: 0x1b0 (Inherited: 0x190)  [layout: LECH - offset chi la uoc luong]
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX; // 0x188(0x04)
	int32 SizeY; // 0x18c(0x04)
	struct FLinearColor ClearColor; // 0x190(0x10)
	enum class *4e35ac1492 AddressX; // 0x1a0(0x01)
	enum class *4e35ac1492 AddressY; // 0x1a1(0x01)
	char pad_1A2[0x2]; // 0x1a2(0x02)
	char *4f92511ea3 : 1; // 0x1a4(0x01)
	char *40541b8541 : 1; // 0x1a4(0x01)
	char bHDR : 1; // 0x1a4(0x01)
	char bGPUSharedFlag : 1; // 0x1a4(0x01)
	char bAutoGenerateMips : 1; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	enum class EPixelFormat *06bb3d6300; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
};

// Class Engine.*8bdfd59b21
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*8bdfd59b21 : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UTexture2D* *96eb453da9; // 0x60(0x08)
	struct UTextureRenderTarget2D* *e0f6652481; // 0x68(0x08)
	struct TArray<struct F*716e1f7d2f> *3abdb9372e; // 0x70(0x10)
	struct TArray<struct F*d161e056e2> *b5e3b1f489; // 0x80(0x10)
	struct TArray<struct UObject*> *86db8950af; // 0x90(0x10)
};

// Class Engine.*ee2f11b401
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct U*ee2f11b401 : U*002e0cdee0 {
	struct TArray<struct F*716e1f7d2f> *e351f64059; // 0x30(0x10)
	struct TArray<struct F*d161e056e2> *f9f51fada5; // 0x40(0x10)
	struct U*8bdfd59b21* Manager; // 0x50(0x08)
};

// Class Engine.*a4e27890c2
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*a4e27890c2 : U*002e0cdee0 {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.*0a5889c743
// Size: 0x280 (Inherited: 0x270)  [layout: LECH - offset chi la uoc luong]
struct U*0a5889c743 : UTexture2D {
	float Brightness; // 0x270(0x04)
	float *6b8cf0739a; // 0x274(0x04)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class Engine.*4eed9bfccf
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*4eed9bfccf : U*002e0cdee0 {
	struct TArray<struct F*76815819f1> *4d0ad57a65; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*ed3883767e> *cc4cf1b9cf; // 0x50(0x10)
};

// Class Engine.*625ae293c5
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*625ae293c5 : U*002e0cdee0 {
	struct TArray<struct F*ed3883767e> *cc4cf1b9cf; // 0x30(0x10)
};

// Class Engine.*bdda43ba5f
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct U*bdda43ba5f : U*002e0cdee0 {
	struct TArray<struct F*9194f31005> *4d0ad57a65; // 0x30(0x10)
	struct TArray<struct F*e973fdd6ca> Instances; // 0x40(0x10)
	struct TArray<struct F*ed3883767e> *cc4cf1b9cf; // 0x50(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULevelStreaming : UObject {
	struct FName PackageName; // 0x30(0x08)
	struct UWorld* WorldAsset; // 0x38(0x20)
	char pad_58[0x10]; // 0x58(0x10)
	struct FName *bbff87d2fc; // 0x68(0x08)
	struct TArray<struct FName> *ae8f20c899; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	char bLocked : 1; // 0x90(0x01)
	char pad_90_1 : 2; // 0x90(0x01)
	char *53d58f7831 : 1; // 0x90(0x01)
	char bShouldBeLoaded : 1; // 0x90(0x01)
	char bShouldBeVisible : 1; // 0x90(0x01)
	char bShouldBlockOnLoad : 1; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32 LevelLODIndex; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	struct FColor DrawColor; // 0x9c(0x04)
	struct FLinearColor LevelColor; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct ULevel* *a44eefc4c5; // 0xc0(0x08)
	struct ULevel* *b8b49b3f8f; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct ALevelStreamingVolume*> *bb8aa13f03; // 0xd8(0x10)
	float *f49ed12729; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xf0(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0x100(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x110(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x120(0x10)
	struct TArray<struct FString> Keywords; // 0x130(0x10)
	struct FTransform LevelTransform; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *1eb7bc7335 : 1; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *68ffdfccef : 1; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	void *340cf96385(); // Function Engine.LevelStreaming.*340cf96385 //  // @ game+0xf567910
	void *91a5acb1a7(); // Function Engine.LevelStreaming.*91a5acb1a7 //  // @ game+0xf56792c
	void *50867678c9(); // Function Engine.LevelStreaming.*50867678c9 //  // @ game+0xf563320
	void *68ba8d38fe(); // Function Engine.LevelStreaming.*68ba8d38fe //  // @ game+0xf567ee8
	void CreateInstance(); // Function Engine.LevelStreaming.CreateInstance //  // @ game+0xf55d014
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)  [layout: KHOP]
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)  [layout: LECH - offset chi la uoc luong]
struct ULevelStreamingKismet : ULevelStreaming {
	char *b152921e5a : 1; // 0x190(0x01)
	char *43f9080fe1 : 1; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	void *11160d168d(); // Function Engine.LevelStreamingKismet.*11160d168d //  // @ game+0xf5702c8
};

// Class Engine.*5fe7c37c2a
// Size: 0x190 (Inherited: 0x190)  [layout: KHOP]
struct U*5fe7c37c2a : ULevelStreaming {
};

// Class Engine.*53b289fded
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct U*53b289fded : UObject {
	struct UModel* *33918c2b08; // 0x30(0x08)
	struct TArray<int32> Surfaces; // 0x38(0x10)
};

// Class Engine.*c50570f196
// Size: 0x48 (Inherited: 0x30)  [layout: KHOP]
struct U*c50570f196 : UObject {
	struct F*11375ead39 LightmassSettings; // 0x30(0x18)
};

// Class Engine.*00e6c45aed
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*00e6c45aed : UObject {
};

// Class Engine.*e943e210d4
// Size: 0xb0 (Inherited: 0x30)  [layout: KHOP]
struct U*e943e210d4 : U*00e6c45aed {
	struct FString *3e413f660c; // 0x30(0x10)
	struct FString *54e23e8285; // 0x40(0x10)
	struct FString *f197515d79; // 0x50(0x10)
	struct FString *017824261d; // 0x60(0x10)
	struct FString *3fc92b7133; // 0x70(0x10)
	struct FString *03a8317cec; // 0x80(0x10)
	struct FString *846d719670; // 0x90(0x10)
	struct FString *f5ae27895d; // 0xa0(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x128 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMapBuildDataRegistry : UObject {
	enum class *48309b4738 *a45e3bda8c; // 0x30(0x01)
	char pad_31[0xf7]; // 0x31(0xf7)
};

// Class Engine.*49cdef6f4a
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*49cdef6f4a : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*c615f44df1
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*c615f44df1 : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.*865664a287
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*865664a287 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*ff7395d32c
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*ff7395d32c : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*28566b0867
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*28566b0867 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*558de6cc53
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*558de6cc53 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*11ed324af8
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*11ed324af8 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*73f75c60f0
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*73f75c60f0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*99b05ed891
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*99b05ed891 : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*55efc2ffdc
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*55efc2ffdc : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*bcb825275e
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*bcb825275e : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*c519ea2d82
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*c519ea2d82 : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x68(0x38)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x68(0x38)
};

// Class Engine.*a1286f3501
// Size: 0x128 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*a1286f3501 : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x68(0x40)
	struct FMaterialAttributesInput B; // 0xa8(0x40)
	struct FExpressionInput Alpha; // 0xe8(0x38)
	enum class EMaterialAttributeBlend *d9b58e73e2; // 0x120(0x01)
	enum class EMaterialAttributeBlend *41b8401696; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// Class Engine.*2c1b3f0b80
// Size: 0xa8 (Inherited: 0x68)  [layout: KHOP]
struct U*2c1b3f0b80 : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x120 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Height; // 0xa0(0x38)
	struct FExpressionInput HeightRatioInput; // 0xd8(0x38)
	float *992a25b3f1; // 0x110(0x04)
	float *48950d05f8; // 0x114(0x04)
	uint32 *70680ee562; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*fe9a99ae72
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*fe9a99ae72 : UMaterialExpression {
};

// Class Engine.*9b0143a5ad
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*9b0143a5ad : UMaterialExpression {
	struct FExpressionInput *37491ed379; // 0x68(0x38)
	struct FExpressionInput *5d8e2fe88f; // 0xa0(0x38)
};

// Class Engine.*e409b1e460
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*e409b1e460 : UMaterialExpression {
};

// Class Engine.*56f982430a
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*56f982430a : UMaterialExpression {
};

// Class Engine.*0b3a5a609c
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*0b3a5a609c : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*8cd839abe0
// Size: 0x120 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*8cd839abe0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Min; // 0xa0(0x38)
	struct FExpressionInput Max; // 0xd8(0x38)
	enum class *77543981e5 *580436fbbf; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float *5e7423f9bd; // 0x114(0x04)
	float *d70eae6c48; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*20bdb14b2c
// Size: 0x88 (Inherited: 0x68)  [layout: KHOP]
struct U*20bdb14b2c : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid *b0d23278b9; // 0x78(0x10)
};

// Class Engine.*99cd1ed9ed
// Size: 0x90 (Inherited: 0x68)  [layout: KHOP]
struct U*99cd1ed9ed : UMaterialExpression {
	int32 SizeX; // 0x68(0x04)
	int32 SizeY; // 0x6c(0x04)
	struct FString Text; // 0x70(0x10)
	struct FLinearColor *334e4243bb; // 0x80(0x10)
};

// Class Engine.*deb1edd696
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*deb1edd696 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	char R : 1; // 0xa0(0x01)
	char G : 1; // 0xa0(0x01)
	char B : 1; // 0xa0(0x01)
	char A : 1; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x70 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x68(0x04)
	float G; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x78 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x78 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.*e1a699cc6c
// Size: 0xa8 (Inherited: 0x68)  [layout: KHOP]
struct U*e1a699cc6c : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Bias; // 0xa0(0x04)
	float Scale; // 0xa4(0x04)
};

// Class Engine.*29d18a43be
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*29d18a43be : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*fe8c4913d0
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*fe8c4913d0 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*20f3237718
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*20f3237718 : UMaterialExpression {
	struct FString Code; // 0x68(0x10)
	enum class *e5f7ae9513 OutputType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString Description; // 0x80(0x10)
	struct TArray<struct F*12404cdc46> Inputs; // 0x90(0x10)
};

// Class Engine.*e76faa51f6
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*e76faa51f6 : U*485bb1da84 {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*4aa334dc26
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*4aa334dc26 : U*485bb1da84 {
	struct FExpressionInput ID; // 0x68(0x38)
	struct FExpressionInput weight; // 0xa0(0x38)
};

// Class Engine.*9b648b4ada
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*9b648b4ada : UMaterialExpression {
};

// Class Engine.*6afb0386a3
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*6afb0386a3 : U*485bb1da84 {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*eb2d1f9089
// Size: 0xb0 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*eb2d1f9089 : U*485bb1da84 {
	struct FExpressionInput Input; // 0x68(0x38)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class Engine.*6d184ef4ae
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*6d184ef4ae : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*f6d4384cf6
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*f6d4384cf6 : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*313f946183
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*313f946183 : UMaterialExpression {
};

// Class Engine.*9b1ebcac03
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*9b1ebcac03 : UMaterialExpression {
};

// Class Engine.*41d4788185
// Size: 0xa8 (Inherited: 0x68)  [layout: KHOP]
struct U*41d4788185 : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x68(0x38)
	float *381ede2e33; // 0xa0(0x04)
	float *5d46c87709; // 0xa4(0x04)
};

// Class Engine.*a7a738eb2b
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct U*a7a738eb2b : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x68(0x38)
	struct FExpressionInput FadeDistance; // 0xa0(0x38)
	float *427911fa53; // 0xd8(0x04)
	float *f0253fa14c; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa8 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *464083379d *1d8952f3b0; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Depth; // 0x70(0x38)
};

// Class Engine.*c08a0b751f
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*c08a0b751f : UMaterialExpression {
	struct FExpressionInput *ccedf28056; // 0x68(0x38)
};

// Class Engine.*2c1ad0564c
// Size: 0xe8 (Inherited: 0x68)  [layout: KHOP]
struct U*2c1ad0564c : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput *efd0264265; // 0xa0(0x38)
	struct FLinearColor *ed2c5830cb; // 0xd8(0x10)
};

// Class Engine.*f4513eb9e2
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*f4513eb9e2 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*b0c4a2b6c2
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*b0c4a2b6c2 : UMaterialExpression {
};

// Class Engine.*893e0b7f22
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*893e0b7f22 : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.*fad1403321
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*fad1403321 : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.*bf586f1959
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*bf586f1959 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*09f5feb64f
// Size: 0x88 (Inherited: 0x68)  [layout: KHOP]
struct U*09f5feb64f : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x68(0x10)
	struct FLinearColor DefaultValue; // 0x78(0x10)
};

// Class Engine.*5d8d9db4cf
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*5d8d9db4cf : UMaterialExpression {
};

// Class Engine.*969519ac23
// Size: 0x180 (Inherited: 0x68)  [layout: KHOP]
struct U*969519ac23 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x04]; // 0xa0(0xe0)
};

// Class Engine.*ae2ebdfaee
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*ae2ebdfaee : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*fbde342e53
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*fbde342e53 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*ed9e523c1e
// Size: 0x78 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*ed9e523c1e : UMaterialExpression {
	struct UFont* Font; // 0x68(0x08)
	int32 *0ab0844be9; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.*f2ab331cf5
// Size: 0x98 (Inherited: 0x78)  [layout: KHOP]
struct U*f2ab331cf5 : U*ed9e523c1e {
	struct FName ParameterName; // 0x78(0x08)
	struct FGuid ExpressionGUID; // 0x80(0x10)
	struct FName Group; // 0x90(0x08)
};

// Class Engine.*4bceea0988
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*4bceea0988 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*2637b085bc
// Size: 0x120 (Inherited: 0x68)  [layout: KHOP]
struct U*2637b085bc : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x68(0x38)
	float Exponent; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xa8(0x38)
	float *56bbf913f9; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FExpressionInput Normal; // 0xe8(0x38)
};

// Class Engine.*cc24f38008
// Size: 0x140 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*cc24f38008 : UMaterialExpression {
	struct FExpressionInput Preview; // 0x68(0x38)
	struct FString InputName; // 0xa0(0x10)
	struct FString Description; // 0xb0(0x10)
	struct FGuid ID; // 0xc0(0x10)
	enum class *e6c42c26a2 InputType; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
	struct FVector4 *6c7b3ef1a6; // 0xe0(0x10)
	char *1ce181c1e9 : 1; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32 *5ca247130b; // 0xf4(0x04)
	char *20b476df11 : 1; // 0xf8(0x01)
	char pad_F9[0x47]; // 0xf9(0x47)
};

// Class Engine.*7b1c6c6cb2
// Size: 0xe0 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*7b1c6c6cb2 : UMaterialExpression {
	struct FString OutputName; // 0x68(0x10)
	struct FString Description; // 0x78(0x10)
	int32 *5ca247130b; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FExpressionInput A; // 0x90(0x38)
	char *a59bbecd2a : 1; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FGuid ID; // 0xcc(0x10)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb8 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
	struct TArray<struct FGuid> *c1ea64ab6b; // 0xa8(0x10)
};

// Class Engine.*8436c57134
// Size: 0x110 (Inherited: 0x68)  [layout: KHOP]
struct U*8436c57134 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput *c0738916f4; // 0xa0(0x38)
	struct FExpressionInput *0e5b6b46cb; // 0xd8(0x38)
};

// Class Engine.*0639a75695
// Size: 0x110 (Inherited: 0x68)  [layout: KHOP]
struct U*0639a75695 : UMaterialExpression {
	struct FExpressionInput *f4e14d179a; // 0x68(0x38)
	struct FExpressionInput *8ea753020b; // 0xa0(0x38)
	struct FExpressionInput HeightOffset; // 0xd8(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x190 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput AGreaterThanB; // 0xd8(0x38)
	struct FExpressionInput AEqualsB; // 0x110(0x38)
	struct FExpressionInput ALessThanB; // 0x148(0x38)
	float EqualsThreshold; // 0x180(0x04)
	float ConstB; // 0x184(0x04)
	float ConstAEqualsB; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// Class Engine.*64ebdfe4f2
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*64ebdfe4f2 : UMaterialExpression {
};

// Class Engine.*5b0959e8c8
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*5b0959e8c8 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput Lightmass; // 0xa0(0x38)
};

// Class Engine.*bdbcb173cf
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*bdbcb173cf : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x120 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Alpha; // 0xd8(0x38)
	float *82fd5881cc; // 0x110(0x04)
	float ConstB; // 0x114(0x04)
	float *8b1f514e58; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*1c89975d39
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*1c89975d39 : UMaterialExpression {
	struct FExpressionInput X; // 0x68(0x38)
};

// Class Engine.*8e528f8a4e
// Size: 0x650 (Inherited: 0x68)  [layout: KHOP]
struct U*8e528f8a4e : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x68(0x38)
	struct FExpressionInput Metallic; // 0xa0(0x38)
	struct FExpressionInput Specular; // 0xd8(0x38)
	struct FExpressionInput Roughness; // 0x110(0x38)
	struct FExpressionInput EmissiveColor; // 0x148(0x38)
	struct FExpressionInput Opacity; // 0x180(0x38)
	struct FExpressionInput OpacityMask; // 0x1b8(0x38)
	struct FExpressionInput Normal; // 0x1f0(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x228(0x38)
	struct FExpressionInput WorldDisplacement; // 0x260(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x298(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2d0(0x38)
	struct FExpressionInput ClearCoat; // 0x308(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x340(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x378(0x38)
	struct FExpressionInput Refraction; // 0x3b0(0x38)
	struct FExpressionInput *74ae62629b[0x08]; // 0x3e8(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5a8(0x38)
	struct FExpressionInput Temperature; // 0x5e0(0x38)
	struct FExpressionInput TemperatureAlpha; // 0x618(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x90 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x68(0x08)
	struct TArray<struct F*e4ed4a3e2f> *fe5b2a8242; // 0x70(0x10)
	struct TArray<struct F*f6303a3d50> *005f5fe72f; // 0x80(0x10)
};

// Class Engine.*f82f11e7d5
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*f82f11e7d5 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput *e73ad66906; // 0xa0(0x38)
};

// Class Engine.*edf7ad40dc
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct U*edf7ad40dc : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.*eac0e1b0a7
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct U*eac0e1b0a7 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x100 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	struct FExpressionInput *ff5c702473; // 0xa0(0x38)
	float Scale; // 0xd8(0x04)
	int32 Quality; // 0xdc(0x04)
	enum class ENoiseFunction *703124f9f9; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char *da0fe6690f : 1; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32 Levels; // 0xe8(0x04)
	float *4e5ac866f3; // 0xec(0x04)
	float *6041fd2b9f; // 0xf0(0x04)
	float *0457c9203e; // 0xf4(0x04)
	char *46e0cd3fac : 1; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	uint32 RepeatSize; // 0xfc(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *7d01d28e50; // 0x68(0x38)
};

// Class Engine.*017a529386
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*017a529386 : UMaterialExpression {
};

// Class Engine.*282880f2e0
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*282880f2e0 : UMaterialExpression {
};

// Class Engine.*4b2e6b4e2b
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*4b2e6b4e2b : UMaterialExpression {
	enum class *fd5a5aee7f *46e2b3962c; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*cb15f60888
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*cb15f60888 : UMaterialExpression {
};

// Class Engine.*f51614368b
// Size: 0xe8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*f51614368b : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x68(0x38)
	struct FExpressionInput *cc1c9f3914; // 0xa0(0x38)
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x120 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	struct FExpressionInput Speed; // 0xd8(0x38)
	float *77d0786d93; // 0x110(0x04)
	float *8df5150e8f; // 0x114(0x04)
	uint32 *70680ee562; // 0x118(0x04)
	bool *992414f57e; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// Class Engine.*ce989882a0
// Size: 0x88 (Inherited: 0x68)  [layout: KHOP]
struct U*ce989882a0 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	struct FGuid ExpressionGUID; // 0x70(0x10)
	struct FName Group; // 0x80(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x98 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionScalarParameter : U*ce989882a0 {
	float DefaultValue; // 0x88(0x04)
	float SliderMin; // 0x8c(0x04)
	float SliderMax; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*eabeb1f882
// Size: 0x90 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*eabeb1f882 : U*ce989882a0 {
	char DefaultValue : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*ea759afe9e
// Size: 0x100 (Inherited: 0x90)  [layout: KHOP]
struct U*ea759afe9e : U*eabeb1f882 {
	struct FExpressionInput A; // 0x90(0x38)
	struct FExpressionInput B; // 0xc8(0x38)
};

// Class Engine.*e5dca425a3
// Size: 0xc8 (Inherited: 0x88)  [layout: LECH - offset chi la uoc luong]
struct U*e5dca425a3 : U*ce989882a0 {
	struct FExpressionInput Input; // 0x88(0x38)
	char *5ecf70d924 : 1; // 0xc0(0x01)
	char *a48ac2e7b3 : 1; // 0xc0(0x01)
	char *612bf93db4 : 1; // 0xc0(0x01)
	char *718732dc6d : 1; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x98 (Inherited: 0x88)  [layout: KHOP]
struct UMaterialExpressionVectorParameter : U*ce989882a0 {
	struct FLinearColor DefaultValue; // 0x88(0x10)
};

// Class Engine.*3ca49fc73d
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*3ca49fc73d : UMaterialExpression {
};

// Class Engine.*be230b328d
// Size: 0x70 (Inherited: 0x68)  [layout: KHOP]
struct U*be230b328d : UMaterialExpression {
	struct U*95e4ac09c4* Layer; // 0x68(0x08)
};

// Class Engine.*d409d634e0
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*d409d634e0 : UMaterialExpression {
};

// Class Engine.*685f76a5b8
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*685f76a5b8 : UMaterialExpression {
};

// Class Engine.*92a59989c2
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*92a59989c2 : UMaterialExpression {
};

// Class Engine.*e540e28210
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*e540e28210 : UMaterialExpression {
};

// Class Engine.*3370b5a13a
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*3370b5a13a : UMaterialExpression {
};

// Class Engine.*950fc35b9b
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*950fc35b9b : UMaterialExpression {
};

// Class Engine.*2fdc3ddc7f
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*2fdc3ddc7f : UMaterialExpression {
};

// Class Engine.*ef569d8269
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*ef569d8269 : UMaterialExpression {
};

// Class Engine.*e0b600692e
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*e0b600692e : UMaterialExpression {
};

// Class Engine.*e831414b70
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*e831414b70 : UMaterialExpression {
};

// Class Engine.*7eef43bce9
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*7eef43bce9 : UMaterialExpression {
};

// Class Engine.*82a9381882
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*82a9381882 : UMaterialExpression {
};

// Class Engine.*d5a36871ec
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*d5a36871ec : UMaterialExpression {
};

// Class Engine.*c0ab6e627b
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*c0ab6e627b : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xe0 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Exponent; // 0xa0(0x38)
	float *1fb5cc6788; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.*07b3fe527f
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*07b3fe527f : UMaterialExpression {
};

// Class Engine.*937649c45c
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*937649c45c : UMaterialExpression {
};

// Class Engine.*40a8d55f42
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*40a8d55f42 : UMaterialExpression {
};

// Class Engine.*2ecc7b9a2c
// Size: 0xd8 (Inherited: 0x68)  [layout: KHOP]
struct U*2ecc7b9a2c : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x68(0x38)
	struct FExpressionInput *8e9727b44d; // 0xa0(0x38)
};

// Class Engine.*0e5e140085
// Size: 0x148 (Inherited: 0x68)  [layout: KHOP]
struct U*0e5e140085 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x03]; // 0xa0(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *a51a8338d4; // 0x68(0x38)
	char *a54a1eab62 : 1; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*0ca30f8119
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*0ca30f8119 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*4cda29e86a
// Size: 0x150 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*4cda29e86a : UMaterialExpression {
	struct FExpressionInput *592a1ac8f9; // 0x68(0x38)
	struct FExpressionInput RotationAngle; // 0xa0(0x38)
	struct FExpressionInput *25ca423e03; // 0xd8(0x38)
	struct FExpressionInput Position; // 0x110(0x38)
	float Period; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*7c94c92597
// Size: 0xe8 (Inherited: 0x68)  [layout: KHOP]
struct U*7c94c92597 : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	float *3b323f2f79; // 0xd8(0x04)
	float *db8021c0e0; // 0xdc(0x04)
	float Speed; // 0xe0(0x04)
	uint32 *70680ee562; // 0xe4(0x04)
};

// Class Engine.*88064cd633
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*88064cd633 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*148394af23
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*148394af23 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*4e00a683a2
// Size: 0xe8 (Inherited: 0x68)  [layout: KHOP]
struct U*4e00a683a2 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput OffsetFraction; // 0xa8(0x38)
	struct FVector2D *14a60667fb; // 0xe0(0x08)
};

// Class Engine.*aa54a95dcd
// Size: 0xe8 (Inherited: 0x68)  [layout: KHOP]
struct U*aa54a95dcd : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput Coordinates; // 0xa8(0x38)
	struct FVector2D *14a60667fb; // 0xe0(0x08)
};

// Class Engine.*1d6536f25e
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*1d6536f25e : UMaterialExpression {
};

// Class Engine.*212b3a2918
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*212b3a2918 : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x68(0x38)
	enum class ESceneTextureId *3db4ab30ef; // 0xa0(0x01)
	bool *8e82a20b4f; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*0cfbe68960
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*0cfbe68960 : UMaterialExpression {
	enum class *9e0d4bc8b8 *6530f65e4f; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*e9f85b2566
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*e9f85b2566 : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x88 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x68(0x10)
	struct TArray<struct FGuid> *2c90cbf902; // 0x78(0x10)
};

// Class Engine.*854764bfed
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*854764bfed : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*23e20d7e9e
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*23e20d7e9e : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*a9c2dd2b39
// Size: 0x158 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*a9c2dd2b39 : UMaterialExpression {
	struct FExpressionInput *53535e66aa; // 0x68(0x38)
	struct FExpressionInput *f7885e1d93; // 0xa0(0x38)
	struct FExpressionInput *6ff4b890eb; // 0xd8(0x38)
	struct FExpressionInput *c7d4c4b19e; // 0x110(0x38)
	enum class *90c7e3f888 *5881e8357c; // 0x148(0x01)
	enum class *048f7572de *e6eaffc44a; // 0x149(0x01)
	enum class *7f64136e78 LODType; // 0x14a(0x01)
	char pad_14B[0x1]; // 0x14b(0x01)
	float BillboardThreshold; // 0x14c(0x04)
	bool *8eb04aa39c; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class Engine.*fd32e99c9f
// Size: 0x150 (Inherited: 0x68)  [layout: KHOP]
struct U*fd32e99c9f : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Radius; // 0xd8(0x38)
	struct FExpressionInput Hardness; // 0x110(0x38)
	float AttenuationRadius; // 0x148(0x04)
	float *5ebc6fbe70; // 0x14c(0x04)
};

// Class Engine.*62f10fbcdd
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*62f10fbcdd : UMaterialExpression {
	struct FExpressionInput Density; // 0x68(0x38)
	float *b1eaa3d388; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*8994b1f439
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*8994b1f439 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*03ab6012ff
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*03ab6012ff : UMaterialExpression {
	char Value : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*7d0d3b0702
// Size: 0x118 (Inherited: 0x68)  [layout: KHOP]
struct U*7d0d3b0702 : UMaterialExpression {
	char DefaultValue : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput Value; // 0xe0(0x38)
};

// Class Engine.*cf88139965
// Size: 0xe0 (Inherited: 0x68)  [layout: KHOP]
struct U*cf88139965 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *82fd5881cc; // 0xd8(0x04)
	float ConstB; // 0xdc(0x04)
};

// Class Engine.*b1c26385d3
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*b1c26385d3 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*3fb7a5dafe
// Size: 0xc0 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*3fb7a5dafe : U*09d4ab6458 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*e3d2dc9ec8> Inputs; // 0xa0(0x10)
	uint32 *70680ee562; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class Engine.*8725e49420
// Size: 0xc8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*8725e49420 : U*09d4ab6458 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*bce0940700> Inputs; // 0xa0(0x10)
	uint32 *70680ee562; // 0xb0(0x04)
	char pad_B4[0x14]; // 0xb4(0x14)
};

// Class Engine.*4e0e95d1b4
// Size: 0x100 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*4e0e95d1b4 : U*09d4ab6458 {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput *44f57d4daa; // 0xa0(0x38)
	struct TArray<struct F*c2464eb89e> Inputs; // 0xd8(0x10)
	uint32 *70680ee562; // 0xe8(0x04)
	char pad_EC[0x14]; // 0xec(0x14)
};

// Class Engine.*9ff2f4781d
// Size: 0x78 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*9ff2f4781d : UMaterialExpression {
	struct UTexture* Texture; // 0x68(0x08)
	enum class EMaterialSamplerType SamplerType; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*84cff9a50f
// Size: 0x78 (Inherited: 0x78)  [layout: KHOP]
struct U*84cff9a50f : U*9ff2f4781d {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1f0 (Inherited: 0x78)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionTextureSample : U*9ff2f4781d {
	struct FExpressionInput Coordinates; // 0x78(0x38)
	struct FExpressionInput TextureObject; // 0xb0(0x38)
	struct FExpressionInput *0a783ba00e; // 0xe8(0x38)
	struct FExpressionInput *18398f646d; // 0x120(0x38)
	struct FExpressionInput *bcdf8a18aa; // 0x158(0x38)
	struct FExpressionInput SampleCondition; // 0x190(0x38)
	enum class *4b7d5739ea MipValueMode; // 0x1c8(0x01)
	enum class *d7142ae523 *06d8e204b7; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	uint32 *70680ee562; // 0x1cc(0x04)
	int32 *048812a8dd; // 0x1d0(0x04)
	char *cd74cf2c28 : 1; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	bool *cf25ec3b62; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	struct FLinearColor DefaultValue; // 0x1dc(0x10)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// Class Engine.*cdff31eb5a
// Size: 0x1f8 (Inherited: 0x1f0)  [layout: LECH - offset chi la uoc luong]
struct U*cdff31eb5a : UMaterialExpressionTextureSample {
	char *49a4bbafd2 : 1; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// Class Engine.*2e0b71be50
// Size: 0x210 (Inherited: 0x1f0)  [layout: KHOP]
struct U*2e0b71be50 : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1f0(0x08)
	struct FGuid ExpressionGUID; // 0x1f8(0x10)
	struct FName Group; // 0x208(0x08)
};

// Class Engine.*aad1cfefa1
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct U*aad1cfefa1 : U*2e0b71be50 {
};

// Class Engine.*c7684e688b
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct U*c7684e688b : U*2e0b71be50 {
};

// Class Engine.*e2dcb74e4a
// Size: 0x218 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*e2dcb74e4a : U*c7684e688b {
	float Threshold; // 0x210(0x04)
	enum class *c4105ad78d Channel; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Engine.*c0be044942
// Size: 0x218 (Inherited: 0x210)  [layout: LECH - offset chi la uoc luong]
struct U*c0be044942 : U*c7684e688b {
	char *49a4bbafd2 : 1; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class Engine.*8be264edec
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct U*8be264edec : U*2e0b71be50 {
};

// Class Engine.*d6ff4f4c32
// Size: 0x210 (Inherited: 0x210)  [layout: KHOP]
struct U*d6ff4f4c32 : U*2e0b71be50 {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x78 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 CoordinateIndex; // 0x68(0x04)
	float UTiling; // 0x6c(0x04)
	float VTiling; // 0x70(0x04)
	char UnMirrorU : 1; // 0x74(0x01)
	char UnMirrorV : 1; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*90ba584fb4
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*90ba584fb4 : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x68(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*9eca3c0e86
// Size: 0x70 (Inherited: 0x68)  [layout: KHOP]
struct U*9eca3c0e86 : UMaterialExpression {
	char *bdd44d65e5 : 1; // 0x68(0x01)
	char bOverride_Period : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Period; // 0x6c(0x04)
};

// Class Engine.*fe22ff2547
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*fe22ff2547 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialVectorCoordTransformSource *8e5ad380b8; // 0xa0(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*d753ffa7e0
// Size: 0xa8 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*d753ffa7e0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialPositionTransformSource *8e5ad380b8; // 0xa0(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*686fbbaaff
// Size: 0xa0 (Inherited: 0x68)  [layout: KHOP]
struct U*686fbbaaff : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*0a0e20e5db
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*0a0e20e5db : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xb0 (Inherited: 0x68)  [layout: KHOP]
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	enum class *e70594cc36 *703124f9f9; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 Quality; // 0xa4(0x04)
	char *46e0cd3fac : 1; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	uint32 TileSize; // 0xac(0x04)
};

// Class Engine.*bb034a7e98
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*bb034a7e98 : UMaterialExpression {
};

// Class Engine.*cc1407e788
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*cc1407e788 : UMaterialExpression {
};

// Class Engine.*6eaf346984
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*6eaf346984 : UMaterialExpression {
};

// Class Engine.*80bb93bd61
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*80bb93bd61 : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*b68eeec5d0
// Size: 0x68 (Inherited: 0x68)  [layout: KHOP]
struct U*b68eeec5d0 : UMaterialExpression {
};

// Class Engine.*df819b8dd6
// Size: 0x70 (Inherited: 0x68)  [layout: LECH - offset chi la uoc luong]
struct U*df819b8dd6 : UMaterialExpression {
	enum class *4fed6020a6 *5bdbdcdefb; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMaterialFunction : UObject {
	struct FGuid *bd2bf7e8e7; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	char bExposeToLibrary : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct UMaterialExpression*> *4a578a35c4; // 0x58(0x10)
	char *bf80998906 : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.Material
// Size: 0xa88 (Inherited: 0x78)  [layout: KHOP]
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x80(0x40)
	struct FColorMaterialInput SpecularColor; // 0xc0(0x40)
	struct FColorMaterialInput BaseColor; // 0x100(0x40)
	struct FScalarMaterialInput Metallic; // 0x140(0x40)
	struct FScalarMaterialInput Specular; // 0x180(0x40)
	struct FScalarMaterialInput Roughness; // 0x1c0(0x40)
	struct FVectorMaterialInput Normal; // 0x200(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x248(0x40)
	struct FScalarMaterialInput Opacity; // 0x288(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2c8(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x308(0x01)
	enum class EBlendMode BlendMode; // 0x309(0x01)
	enum class *d5a42b1b64 *85d2a99441; // 0x30a(0x01)
	enum class *b6017233f1 MaterialDecalResponse; // 0x30b(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float OpacityMaskClipValue; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x318(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x360(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a8(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e8(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x428(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x468(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a8(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e8(0x40)
	struct FVector2MaterialInput *74ae62629b[0x08]; // 0x528(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x768(0x40)
	struct FScalarMaterialInput PixelDepthOffset; // 0x7a8(0x40)
	struct FScalarMaterialInput Temperature; // 0x7e8(0x40)
	struct FScalarMaterialInput TemperatureAlpha; // 0x828(0x40)
	char bPrepassMasked : 1; // 0x868(0x01)
	char *833d9b1c09 : 1; // 0x868(0x01)
	char *afc8c6eddf : 1; // 0x868(0x01)
	char *efd1568a76 : 1; // 0x868(0x01)
	char *3fca7f6374 : 1; // 0x868(0x01)
	char TwoSided : 1; // 0x868(0x01)
	char DitheredLODTransition : 1; // 0x868(0x01)
	char *85e30f2fc6 : 1; // 0x868(0x01)
	char *df6097130e : 1; // 0x869(0x01)
	char *fb748f8ae6 : 1; // 0x869(0x01)
	char pad_86A[0x2]; // 0x86a(0x02)
	int32 *929be88bc2; // 0x86c(0x04)
	enum class ETranslucencyLightingMode *6cf8e6706f; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *85bade492d; // 0x874(0x04)
	char *984a301c8c : 1; // 0x878(0x01)
	char *ddb09e000c : 1; // 0x878(0x01)
	char pad_879[0x3]; // 0x879(0x03)
	float *f188d17a61; // 0x87c(0x04)
	float *8a9b3c22fc; // 0x880(0x04)
	float *a865bb98c1; // 0x884(0x04)
	float *764a9d6a97; // 0x888(0x04)
	float *452f9a08ba; // 0x88c(0x04)
	struct FLinearColor *3ce1b0157f; // 0x890(0x10)
	float TranslucentShadowStartOffset; // 0x8a0(0x04)
	char *8867721d23 : 1; // 0x8a4(0x01)
	char *68c96d9160 : 1; // 0x8a4(0x01)
	char *19007a8b88 : 1; // 0x8a4(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x8a4(0x01)
	char bBlockGI : 1; // 0x8a4(0x01)
	char *5f05318024 : 1; // 0x8a4(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x8a4(0x01)
	char bUsedWithEditorCompositing : 1; // 0x8a4(0x01)
	char bUsedWithParticleSprites : 1; // 0x8a5(0x01)
	char bUsedWithBeamTrails : 1; // 0x8a5(0x01)
	char bUsedWithMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithStaticLighting : 1; // 0x8a5(0x01)
	char bUsedWithMorphTargets : 1; // 0x8a5(0x01)
	char bUsedWithSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedDeferredDecals : 1; // 0x8a6(0x01)
	char bUsesDistortion : 1; // 0x8a6(0x01)
	char bUsedWithClothing : 1; // 0x8a6(0x01)
	char bUsedWithStaticProxyMeshes : 1; // 0x8a6(0x01)
	char bUsedWithSkeletalProxyMeshes : 1; // 0x8a6(0x01)
	char bUsedWithUI : 1; // 0x8a7(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x8a7(0x01)
	char bFullyRough : 1; // 0x8a7(0x01)
	char bUseFullPrecision : 1; // 0x8a7(0x01)
	char bUseLightmapDirectionality : 1; // 0x8a7(0x01)
	char bUseHQForwardReflections : 1; // 0x8a7(0x01)
	char bUsePlanarForwardReflections : 1; // 0x8a7(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x8a7(0x01)
	enum class *973ee8cf71 D3D11TessellationMode; // 0x8a8(0x01)
	char pad_8A9[0x3]; // 0x8a9(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8ac(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	float *8d4412335e; // 0x8b0(0x04)
	char Wireframe : 1; // 0x8b4(0x01)
	char *cdf3ce2994 : 1; // 0x8b4(0x01)
	char *27c3f0750c : 1; // 0x8b4(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct F*0971a745ef MaterialClipVolumeTypes; // 0x8b8(0x04)
	enum class *ad3f6805e9 MaterialClipVolumeImportance; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	float MaterialClipVolumeFadeRange; // 0x8c0(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8c4(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8c4(0x01)
	char bUseMeshClipping : 1; // 0x8c4(0x01)
	char pad_8C5[0x3]; // 0x8c5(0x03)
	int32 *edfc9e91d2; // 0x8c8(0x04)
	int32 *0aa8242055; // 0x8cc(0x04)
	int32 *7e3bf369b5; // 0x8d0(0x04)
	int32 *b0ad374c5f; // 0x8d4(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x8d8(0x10)
	struct TArray<struct F*5c4b9348b6> *52456d420d; // 0x8e8(0x10)
	struct TArray<struct F*6ea873aeff> *3bfc36e6c6; // 0x8f8(0x10)
	char *07a59fc8a5 : 1; // 0x908(0x01)
	char bIsMasked : 1; // 0x908(0x01)
	char *545b78eab6 : 1; // 0x908(0x01)
	char *1a5ef184dd : 1; // 0x908(0x01)
	char *68aef5b32d : 1; // 0x908(0x01)
	char *42f2bd2559 : 1; // 0x908(0x01)
	char *478295592b : 1; // 0x908(0x01)
	char *e690540fc6 : 1; // 0x908(0x01)
	char *99dafe835c : 1; // 0x909(0x01)
	char pad_90A[0x2]; // 0x90a(0x02)
	uint32 *c7641d5fa6; // 0x90c(0x04)
	enum class *810c60768b BlendableLocation; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	int32 BlendablePriority; // 0x914(0x04)
	bool BlendableOutputAlpha; // 0x918(0x01)
	enum class *fe0a93d242 *52a4252c6d; // 0x919(0x01)
	char pad_91A[0x2]; // 0x91a(0x02)
	float RefractionDepthBias; // 0x91c(0x04)
	struct FGuid *bd2bf7e8e7; // 0x920(0x10)
	char pad_930[0x148]; // 0x930(0x148)
	struct TArray<struct UTexture*> *d6f91a225d; // 0xa78(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x238 (Inherited: 0x1e8)  [layout: LECH - offset chi la uoc luong]
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_1E8[0x50]; // 0x1e8(0x50)

	void *e33df1068a(); // Function Engine.MaterialInstanceDynamic.*e33df1068a //  // @ game+0xf56e650
	void CopyParameterOverrides(); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides //  // @ game+0xf55cf98
	void *a77e8c8e3d(); // Function Engine.MaterialInstanceDynamic.*a77e8c8e3d //  // @ game+0xf579d00
	void SetVectorParameterValue(); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue //  // @ game+0xf579ea0
	void *ac44019aec(); // Function Engine.MaterialInstanceDynamic.*ac44019aec //  // @ game+0xf56e770
	void K2_InterpolateMaterialInstanceParams(); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams //  // @ game+0xf56e804
	void K2_CopyMaterialInstanceParameters(); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters //  // @ game+0xf56819c
	void CopyInterpParameters(); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters //  // @ game+0xf55ce3c
	void SetScalarParameterValue(); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue //  // @ game+0x11ef9f4
	void *837364e7e4(); // Function Engine.MaterialInstanceDynamic.*837364e7e4 //  // @ game+0xf56e6dc
};

// Class Engine.MaterialParameterCollection
// Size: 0x70 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMaterialParameterCollection : UObject {
	struct FGuid *bd2bf7e8e7; // 0x30(0x10)
	struct TArray<struct F*22381a2e68> *a21e390906; // 0x40(0x10)
	struct TArray<struct F*ecbb0fe96d> *f167615e44; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Engine.*58e2034313
// Size: 0xf0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*58e2034313 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMaterialParameterCollection* Collection; // 0x38(0x08)
	struct UWorld* World; // 0x40(0x08)
	char pad_48[0xa8]; // 0x48(0xa8)
};

// Class Engine.*5e49739af0
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*5e49739af0 : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMorphTarget : UObject {
	struct USkeletalMesh* *d7aac4b1ac; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavArea_Default
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UNavArea_Default : UNavArea {
};

// Class Engine.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UNavArea_LowHeight : UNavArea {
};

// Class Engine.NavArea_Null
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UNavArea_Null : UNavArea {
};

// Class Engine.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UNavArea_Obstacle : UNavArea {
};

// Class Engine.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct UNavAreaMeta : UNavArea {
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)  [layout: KHOP]
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* *5b41a8cc09; // 0x48(0x08)
	struct UClass* *b41c352aef; // 0x50(0x08)
	struct UClass* *b1158c1b5e; // 0x58(0x08)
	struct UClass* *8be6a9730f; // 0x60(0x08)
	struct UClass* *1562bf3bdd; // 0x68(0x08)
	struct UClass* *cf28ff85be; // 0x70(0x08)
	struct UClass* *e297496692; // 0x78(0x08)
	struct UClass* *d5e9712227; // 0x80(0x08)
	struct UClass* *c177633115; // 0x88(0x08)
	struct UClass* *e91ea3dec9; // 0x90(0x08)
	struct UClass* *ed32164efc; // 0x98(0x08)
	struct UClass* *2498edcf97; // 0xa0(0x08)
	struct UClass* *21faa5bc33; // 0xa8(0x08)
	struct UClass* *d47ba7a3e3; // 0xb0(0x08)
	struct UClass* *d658c779ef; // 0xb8(0x08)
	struct UClass* *2197b47260; // 0xc0(0x08)
};

// Class Engine.NavCollision
// Size: 0x120 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNavCollision : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct TArray<struct F*34fa2824cb> *339a55704e; // 0x80(0x10)
	struct TArray<struct F*b236a9c121> *bf88a73d89; // 0x90(0x10)
	struct UClass* AreaClass; // 0xa0(0x08)
	char bIsDynamicObstacle : 1; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char *5422c63545 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char pad_B1[0x6f]; // 0xb1(0x6f)
};

// Class Engine.*e8c1a6a436
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*e8c1a6a436 : UInterface {
};

// Class Engine.*b7262aba83
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct U*b7262aba83 : UObject {
	struct FName *13233e6a88; // 0x30(0x08)
};

// Class Engine.*ce7b94e40d
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*ce7b94e40d : U*b7262aba83 {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavigationPath
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x7f]; // 0x51(0x7f)

	void *9c6d12dee1(); // Function Engine.NavigationPath.*9c6d12dee1 //  // @ game+0xf55ed44
	void *76db6eb8bb(); // Function Engine.NavigationPath.*76db6eb8bb //  // @ game+0xda9a408
	void *ac397d8f31(); // Function Engine.NavigationPath.*ac397d8f31 //  // @ game+0xf564178
	void *ebf6ab3518(); // Function Engine.NavigationPath.*ebf6ab3518 //  // @ game+0xf55eec8
	void *158d4a481f(); // Function Engine.NavigationPath.*158d4a481f //  // @ game+0xf567c20
	void IsValid(); // Function Engine.NavigationPath.IsValid //  // @ game+0xf567f44
	void *bd27572e31(); // Function Engine.NavigationPath.*bd27572e31 //  // @ game+0xf56259c
	void GetPathLength(); // Function Engine.NavigationPath.GetPathLength //  // @ game+0xf564388
};

// Class Engine.*fda5dc5033
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*fda5dc5033 : UInterface {
};

// Class Engine.*65b0ccdc92
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*65b0ccdc92 : U*953343ed1f {
};

// Class Engine.*0dd26c30d1
// Size: 0x58 (Inherited: 0x58)  [layout: KHOP]
struct U*0dd26c30d1 : U*9789587bf2 {
};

// Class Engine.*f311960aa1
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f311960aa1 : UInterface {
};

// Class Engine.*5fa1e82245
// Size: 0x378 (Inherited: 0xe8)  [layout: LECH - offset chi la uoc luong]
struct U*5fa1e82245 : UPackageMap {
	char pad_E8[0x290]; // 0xe8(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x65a18 (Inherited: 0x658a8)  [layout: LECH - offset chi la uoc luong]
struct UDemoNetConnection : UNetConnection {
	char pad_658A8[0x20]; // 0x658a8(0x20)
	struct FStringClassReference OverrideActorChannel; // 0x658c8(0x10)
	char pad_658D8[0x140]; // 0x658d8(0x140)
};

// Class Engine.*efc7ada592
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*efc7ada592 : UInterface {
};

// Class Engine.*06901b2a67
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*06901b2a67 : UObject {
	struct TMap<struct FName, struct F*dd0c7b9f8d> NodeMapping; // 0x30(0x50)
	struct UBlueprint* *0bc670926c; // 0x80(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UObjectLibrary : UObject {
	struct UClass* *919a906319; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UObject*> Objects; // 0x40(0x10)
	struct TArray<struct UObject*> *6909aabff5; // 0x50(0x10)
	bool *e152f6b72a; // 0x60(0x01)
	bool *eecee3f33e; // 0x61(0x01)
	char pad_62[0xfe]; // 0x62(0xfe)
};

// Class Engine.*7786f2b279
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*7786f2b279 : UObject {
	struct TArray<struct UObject*> *4b21cf1e36; // 0x30(0x10)
};

// Class Engine.*ef26176ef7
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ef26176ef7 : UObject {

	void Activate(); // Function Engine.*ef26176ef7.Activate //  // @ game+0xf402498
};

// Class Engine.*2754b17ba2
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*2754b17ba2 : UObject {
};

// Class Engine.OnlineSession
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UOnlineSession : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x188 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UParticleEmitter : UObject {
	struct FName EmitterName; // 0x30(0x08)
	int32 *72318db6db; // 0x38(0x04)
	enum class *d91c4a4005 *209ef6741b; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct UParticleLODLevel*> *3589147688; // 0x40(0x10)
	char *d202765cfc : 1; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *dcbd3e1083; // 0x54(0x04)
	int32 *162812be95; // 0x58(0x04)
	float MediumDetailSpawnRateScale; // 0x5c(0x04)
	float *5407097001; // 0x60(0x04)
	enum class *348233a8c0 DetailMode; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	char *1770fce1ad : 1; // 0x68(0x01)
	char *d575855490 : 1; // 0x68(0x01)
	char *e4f8ace816 : 1; // 0x68(0x01)
	char *0536c652a4 : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EParticleSignificanceLevel *1f75b0be0c; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *008cd6822b; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct U*95e4ac09c4* *95e4ac09c4; // 0x78(0x08)
	char pad_80[0x108]; // 0x80(0x108)
};

// Class Engine.*6cca84bdc9
// Size: 0x188 (Inherited: 0x188)  [layout: KHOP]
struct U*6cca84bdc9 : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xc0 (Inherited: 0x30)  [layout: KHOP]
struct UParticleLODLevel : UObject {
	int32 Level; // 0x30(0x04)
	char bEnabled : 1; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UParticleModuleRequired* *1e6e3e7f50; // 0x38(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x40(0x10)
	struct UParticleModuleTypeDataBase* *35d80f9f82; // 0x50(0x08)
	struct UParticleModuleSpawn* *f2b200009f; // 0x58(0x08)
	struct UParticleModuleEventGenerator* *c7acd34dac; // 0x60(0x08)
	struct TArray<struct U*aab323ceb5*> *4277794133; // 0x68(0x10)
	struct TArray<struct UParticleModule*> *e4dacd80c2; // 0x78(0x10)
	struct TArray<struct UParticleModule*> *0314cc2239; // 0x88(0x10)
	struct TArray<struct UParticleModuleOrbit*> *9e424d3e14; // 0x98(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *1a3715de57; // 0xa8(0x10)
	char *d202765cfc : 1; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *dcbd3e1083; // 0xbc(0x04)
};

// Class Engine.ParticleModule
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UParticleModule : UObject {
	char *6f937041a5 : 1; // 0x30(0x01)
	char *080658461c : 1; // 0x30(0x01)
	char *3ffc533e20 : 1; // 0x30(0x01)
	char *6b15111a19 : 1; // 0x30(0x01)
	char *67e5cedc06 : 1; // 0x30(0x01)
	char *26e6893646 : 1; // 0x30(0x01)
	char *641148511d : 1; // 0x30(0x01)
	char bEnabled : 1; // 0x30(0x01)
	char bEditable : 1; // 0x31(0x01)
	char *65950529ad : 1; // 0x31(0x01)
	char *b867ce0f5b : 1; // 0x31(0x01)
	char *b2efa57517 : 1; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	bool *5caedaabb0; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class Engine.*5ea171506f
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*5ea171506f : UParticleModule {
	char *8bf5334d8f : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x98 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleAcceleration : U*5ea171506f {
	struct FRawDistributionVector Acceleration; // 0x40(0x50)
	char *94182e4dee : 1; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*703962562b
// Size: 0x50 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*703962562b : U*5ea171506f {
	struct FVector Acceleration; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x80 (Inherited: 0x40)  [layout: KHOP]
struct UParticleModuleAccelerationDrag : U*5ea171506f {
	struct U*f00c361422* DragCoefficient; // 0x40(0x08)
	struct F*f1f6ef22a8 *16d727f01f; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x80 (Inherited: 0x40)  [layout: KHOP]
struct UParticleModuleAccelerationDragScaleOverLife : U*5ea171506f {
	struct U*f00c361422* DragScale; // 0x40(0x08)
	struct F*f1f6ef22a8 *7877af5e05; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x90 (Inherited: 0x40)  [layout: KHOP]
struct UParticleModuleAccelerationOverLifetime : U*5ea171506f {
	struct FRawDistributionVector *30e9974bbd; // 0x40(0x50)
};

// Class Engine.*86688fb52c
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*86688fb52c : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xc0 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleAttractorLine : U*86688fb52c {
	struct FVector *b39d621439; // 0x38(0x0c)
	struct FVector *9a0d777838; // 0x44(0x0c)
	struct F*f1f6ef22a8 Range; // 0x50(0x38)
	struct F*f1f6ef22a8 Strength; // 0x88(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc8 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleAttractorParticle : U*86688fb52c {
	struct FName EmitterName; // 0x38(0x08)
	struct F*f1f6ef22a8 Range; // 0x40(0x38)
	char *54f90f5f80 : 1; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*f1f6ef22a8 Strength; // 0x80(0x38)
	char *eb89c95712 : 1; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class *136e2a081b *6fb84379ae; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	char *1a154bdf18 : 1; // 0xc0(0x01)
	char *ad35189740 : 1; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32 *6934e678f0; // 0xc4(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0x100 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleAttractorPoint : U*86688fb52c {
	struct FRawDistributionVector Position; // 0x38(0x50)
	struct F*f1f6ef22a8 Range; // 0x88(0x38)
	struct F*f1f6ef22a8 Strength; // 0xc0(0x38)
	char *15362a9375 : 1; // 0xf8(0x01)
	char *eb89c95712 : 1; // 0xf8(0x01)
	char *fb1a11fb7f : 1; // 0xf8(0x01)
	char *8cea801138 : 1; // 0xf8(0x01)
	char *c960cdbc3b : 1; // 0xf8(0x01)
	char *a28f58f44d : 1; // 0xf8(0x01)
	char *df7cd01b48 : 1; // 0xf8(0x01)
	char *451ce2613c : 1; // 0xf8(0x01)
	char *653885cd53 : 1; // 0xf9(0x01)
	char *026c578ed2 : 1; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleAttractorPointGravity : U*86688fb52c {
	struct FVector Position; // 0x38(0x0c)
	float Radius; // 0x44(0x04)
	struct U*f00c361422* Strength; // 0x48(0x08)
	struct F*f1f6ef22a8 *3d3a67d891; // 0x50(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.*a3ede6c097
// Size: 0x128 (Inherited: 0x38)  [layout: KHOP]
struct U*a3ede6c097 : UParticleModuleBeamBase {
	enum class *3d38c0107c *3371c9cd45; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct F*3fb9f48af9 *1f9383a930; // 0x3c(0x04)
	struct FRawDistributionVector Position; // 0x40(0x50)
	struct F*3fb9f48af9 *546b8c0258; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector Tangent; // 0x98(0x50)
	char *f33f44373a : 1; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct F*3fb9f48af9 *6c20bfe183; // 0xec(0x04)
	struct F*f1f6ef22a8 Strength; // 0xf0(0x38)
};

// Class Engine.*18a28bfcad
// Size: 0x1c0 (Inherited: 0x38)  [layout: KHOP]
struct U*18a28bfcad : UParticleModuleBeamBase {
	char *213f3d2adc : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 Frequency; // 0x3c(0x04)
	int32 *a39bdbfcba; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionVector *aad997eeb0; // 0x48(0x50)
	struct F*f1f6ef22a8 *978b2af644; // 0x98(0x38)
	char *7ac3de4a7b : 1; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRawDistributionVector *0da2e70fdb; // 0xd8(0x50)
	char *1f95a22b64 : 1; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *7133b751d3; // 0x12c(0x04)
	char *da0e44beaf : 1; // 0x130(0x01)
	char *bba0aab374 : 1; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *d54cd1381f; // 0x134(0x04)
	float *1ac7f463bb; // 0x138(0x04)
	char *c1901f0552 : 1; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct F*f1f6ef22a8 *320b03c782; // 0x140(0x38)
	int32 NoiseTessellation; // 0x178(0x04)
	char *b8e9cdbab6 : 1; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float *00f432b3bb; // 0x180(0x04)
	char *9c97a0c05a : 1; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct F*f1f6ef22a8 NoiseScale; // 0x188(0x38)
};

// Class Engine.*5dc86ef469
// Size: 0x140 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*5dc86ef469 : UParticleModuleBeamBase {
	enum class *c74e059cea *0817727451; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	char *f4259979d2 : 1; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FRawDistributionVector Source; // 0x50(0x50)
	char *55006e7f44 : 1; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	enum class *bb61234cfc *92844b405a; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FRawDistributionVector *fbd3004833; // 0xa8(0x50)
	char *1eb7da8360 : 1; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct F*f1f6ef22a8 *8297188395; // 0x100(0x38)
	char *e6213262ac : 1; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*6e7eb2a891
// Size: 0x140 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*6e7eb2a891 : UParticleModuleBeamBase {
	enum class *c74e059cea *a37c97040b; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName TargetName; // 0x40(0x08)
	struct FRawDistributionVector Target; // 0x48(0x50)
	char *28e3fe51c8 : 1; // 0x98(0x01)
	char *37720b529c : 1; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *bb61234cfc *bd5542d517; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *c749af731a; // 0xa0(0x50)
	char *200f1612a6 : 1; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*f1f6ef22a8 *4810af4c6c; // 0xf8(0x38)
	char *65e99158dc : 1; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *ccd70239f7; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.*6897647d37
// Size: 0x78 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*6897647d37 : UParticleModuleCameraBase {
	struct F*f1f6ef22a8 *cb14f11580; // 0x38(0x38)
	char *58748e5cfc : 1; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	enum class *7944475c9d *f3754b1098; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*ef7a5fe2a7
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*ef7a5fe2a7 : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1c0 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleCollision : U*ef7a5fe2a7 {
	struct FRawDistributionVector *bbc78aa8dc; // 0x38(0x50)
	struct FRawDistributionVector *9c2ef5ef67; // 0x88(0x50)
	struct F*f1f6ef22a8 *838141a246; // 0xd8(0x38)
	enum class *04e2fde1b3 *dbc2f4c839; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<enum class EObjectTypeQuery> *9c09ed86e5; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
	char *c971da935b : 1; // 0x130(0x01)
	char *3f19672afc : 1; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct F*f1f6ef22a8 *115dffbaf6; // 0x138(0x38)
	float *c819f608c2; // 0x170(0x04)
	char *b4531701a3 : 1; // 0x174(0x01)
	char *d6dd99f5da : 1; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *7294cdbb4b; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct F*f1f6ef22a8 *90784b5b56; // 0x180(0x38)
	char *1ed8ff7366 : 1; // 0x1b8(0x01)
	char *95584cd6be : 1; // 0x1b8(0x01)
	char *413e16a1c4 : 1; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float *b4e2d19733; // 0x1bc(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xc0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleCollisionGPU : U*ef7a5fe2a7 {
	struct F*f1f6ef22a8 *1a734004df; // 0x38(0x38)
	struct F*f1f6ef22a8 ResilienceScaleOverLife; // 0x70(0x38)
	float Friction; // 0xa8(0x04)
	float *cab083e15c; // 0xac(0x04)
	float *c32339fcfb; // 0xb0(0x04)
	float RadiusScale; // 0xb4(0x04)
	float *022274ff44; // 0xb8(0x04)
	enum class EParticleCollisionResponse Response; // 0xbc(0x01)
	enum class EParticleCollisionMode *34ee587afa; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class Engine.*ff73f21bb6
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*ff73f21bb6 : UParticleModule {
};

// Class Engine.*4e3462a147
// Size: 0xc8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*4e3462a147 : U*ff73f21bb6 {
	struct FRawDistributionVector StartColor; // 0x38(0x50)
	struct F*f1f6ef22a8 *a1c424ebe0; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*0a3856045a
// Size: 0xe8 (Inherited: 0xc8)  [layout: KHOP]
struct U*0a3856045a : U*4e3462a147 {
	struct F*4be709fed2 *1fad8b04d0; // 0xc8(0x20)
};

// Class Engine.*e6a10a7fca
// Size: 0xc8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e6a10a7fca : U*ff73f21bb6 {
	struct FRawDistributionVector *9ea7aa2ce0; // 0x38(0x50)
	struct F*f1f6ef22a8 *e3e321c3f3; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*db63407bd0
// Size: 0xc8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*db63407bd0 : U*ff73f21bb6 {
	struct FRawDistributionVector *52e73865f7; // 0x38(0x50)
	struct F*f1f6ef22a8 *6090443004; // 0x88(0x38)
	char *8b912b6502 : 1; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*15f9f33e05
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*15f9f33e05 : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleEventGenerator : U*15f9f33e05 {
	struct TArray<struct F*3172ad46be> Events; // 0x38(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleEventReceiverBase : U*15f9f33e05 {
	enum class EParticleEventType *e1c3567f1b; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName EventName; // 0x40(0x08)
};

// Class Engine.*cbfcc8d99c
// Size: 0x50 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct U*cbfcc8d99c : UParticleModuleEventReceiverBase {
	char *5c1f013258 : 1; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*147e065d17
// Size: 0xf0 (Inherited: 0x48)  [layout: LECH - offset chi la uoc luong]
struct U*147e065d17 : UParticleModuleEventReceiverBase {
	struct F*f1f6ef22a8 SpawnCount; // 0x48(0x38)
	char *9601f00d2b : 1; // 0x80(0x01)
	char *c409d53e0c : 1; // 0x80(0x01)
	char *352837f9bf : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FRawDistributionVector *814b95f938; // 0x88(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xd8(0x10)
	char *83f7c1d5b1 : 1; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.*5d80e3460a
// Size: 0xe0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*5d80e3460a : UParticleModuleKillBase {
	struct FRawDistributionVector *0a1b339692; // 0x38(0x50)
	struct FRawDistributionVector *2d30f4975d; // 0x88(0x50)
	char *184f35d7bd : 1; // 0xd8(0x01)
	char *a92e4f22ac : 1; // 0xd8(0x01)
	char *07e4110ce6 : 1; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.*b09a6f9739
// Size: 0x78 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*b09a6f9739 : UParticleModuleKillBase {
	struct F*f1f6ef22a8 Height; // 0x38(0x38)
	char *184f35d7bd : 1; // 0x70(0x01)
	char *44d830567d : 1; // 0x70(0x01)
	char *5b21236009 : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*58462ba880
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*58462ba880 : UParticleModule {
};

// Class Engine.*a0991c1e1f
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct U*a0991c1e1f : U*58462ba880 {
	struct F*f1f6ef22a8 LifeTime; // 0x38(0x38)
};

// Class Engine.*dbcaf72c1f
// Size: 0x90 (Inherited: 0x70)  [layout: KHOP]
struct U*dbcaf72c1f : U*a0991c1e1f {
	struct F*4be709fed2 *1fad8b04d0; // 0x70(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.*af0f65ba78
// Size: 0x150 (Inherited: 0x38)  [layout: KHOP]
struct U*af0f65ba78 : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x38(0x01)
	bool *6b01eb080e; // 0x39(0x01)
	bool *6c6cb991e4; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float *87c2b7affe; // 0x3c(0x04)
	struct FRawDistributionVector *52e73865f7; // 0x40(0x50)
	struct F*f1f6ef22a8 *996bca57bc; // 0x90(0x38)
	struct F*f1f6ef22a8 RadiusScale; // 0xc8(0x38)
	struct F*f1f6ef22a8 *86c5b3d92b; // 0x100(0x38)
	struct FLightingChannels LightingChannels; // 0x138(0x03)
	char pad_13B[0x1]; // 0x13b(0x01)
	float VolumetricScatteringIntensity; // 0x13c(0x04)
	bool *9178f78431; // 0x140(0x01)
	bool *e5dce9a6e0; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct U*0a5889c743* IESTexture; // 0x148(0x08)
};

// Class Engine.*b10d207dfe
// Size: 0x170 (Inherited: 0x150)  [layout: KHOP]
struct U*b10d207dfe : U*af0f65ba78 {
	struct F*4be709fed2 *1fad8b04d0; // 0x150(0x20)
};

// Class Engine.*3b40133c14
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*3b40133c14 : UParticleModule {
};

// Class Engine.*efeb9ff637
// Size: 0x98 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*efeb9ff637 : U*3b40133c14 {
	struct FRawDistributionVector StartLocation; // 0x38(0x50)
	float *bf73fc60c6; // 0x88(0x04)
	float *ef2bc21ef4; // 0x8c(0x04)
	bool *62add7ceff; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*e4c0d50ddf
// Size: 0xb8 (Inherited: 0x98)  [layout: KHOP]
struct U*e4c0d50ddf : U*efeb9ff637 {
	struct F*4be709fed2 *1fad8b04d0; // 0x98(0x20)
};

// Class Engine.*7035142b15
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct U*7035142b15 : U*efeb9ff637 {
};

// Class Engine.*2235912f80
// Size: 0xb8 (Inherited: 0x98)  [layout: KHOP]
struct U*2235912f80 : U*7035142b15 {
	struct F*4be709fed2 *1fad8b04d0; // 0x98(0x20)
};

// Class Engine.*957a8d7d12
// Size: 0x78 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*957a8d7d12 : U*3b40133c14 {
	enum class *c983b176b8 SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *598105e0c1; // 0x3c(0x0c)
	struct TArray<struct F*f99cd07db1> *21c0bd86cf; // 0x48(0x10)
	enum class *d382eb22ba *6fb84379ae; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char *d8991c733b : 1; // 0x5c(0x01)
	char *f92c2a395d : 1; // 0x5c(0x01)
	char *5a71fa2d47 : 1; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float *814b95f938; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FName *47e59a578f; // 0x68(0x08)
	int32 *f92ac72895; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x178 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleLocationDirect : U*3b40133c14 {
	struct FRawDistributionVector Location; // 0x38(0x50)
	struct FRawDistributionVector *9c5fb64c3a; // 0x88(0x50)
	struct FRawDistributionVector ScaleFactor; // 0xd8(0x50)
	struct FRawDistributionVector Direction; // 0x128(0x50)
};

// Class Engine.*e3a63d723b
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e3a63d723b : U*3b40133c14 {
	struct FName EmitterName; // 0x38(0x08)
	enum class *6d49cb011e *6fb84379ae; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char *3e541494f4 : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *3da3511b69; // 0x48(0x04)
	char *cea9d27e10 : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *5fac49a192; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleLocationEmitterDirect : U*3b40133c14 {
	struct FName EmitterName; // 0x38(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc8 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleLocationPrimitiveBase : U*3b40133c14 {
	char *c960cdbc3b : 1; // 0x38(0x01)
	char *a28f58f44d : 1; // 0x38(0x01)
	char *df7cd01b48 : 1; // 0x38(0x01)
	char *451ce2613c : 1; // 0x38(0x01)
	char *653885cd53 : 1; // 0x38(0x01)
	char *026c578ed2 : 1; // 0x38(0x01)
	char *fd573625b1 : 1; // 0x38(0x01)
	char Velocity : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct F*f1f6ef22a8 *8acd869ed3; // 0x40(0x38)
	struct FRawDistributionVector StartLocation; // 0x78(0x50)
};

// Class Engine.*040bf4d685
// Size: 0x148 (Inherited: 0xc8)  [layout: LECH - offset chi la uoc luong]
struct U*040bf4d685 : UParticleModuleLocationPrimitiveBase {
	char *1f80ab8ba4 : 1; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct F*f1f6ef22a8 *e3eb88e6eb; // 0xd0(0x38)
	struct F*f1f6ef22a8 *f679cb5f63; // 0x108(0x38)
	enum class *5afd25f4f7 *62a3426f42; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.*e73579593d
// Size: 0x168 (Inherited: 0x148)  [layout: KHOP]
struct U*e73579593d : U*040bf4d685 {
	struct F*4be709fed2 *1fad8b04d0; // 0x148(0x20)
};

// Class Engine.*285e4c27ab
// Size: 0x100 (Inherited: 0xc8)  [layout: KHOP]
struct U*285e4c27ab : UParticleModuleLocationPrimitiveBase {
	struct F*f1f6ef22a8 *e3eb88e6eb; // 0xc8(0x38)
};

// Class Engine.*a990b6a8dd
// Size: 0x120 (Inherited: 0x100)  [layout: KHOP]
struct U*a990b6a8dd : U*285e4c27ab {
	struct F*4be709fed2 *1fad8b04d0; // 0x100(0x20)
};

// Class Engine.*bc66e24a46
// Size: 0x130 (Inherited: 0x38)  [layout: KHOP]
struct U*bc66e24a46 : U*3b40133c14 {
	struct FRawDistributionVector StartOffset; // 0x38(0x50)
	struct F*f1f6ef22a8 Height; // 0x88(0x38)
	struct F*f1f6ef22a8 Angle; // 0xc0(0x38)
	struct F*f1f6ef22a8 Thickness; // 0xf8(0x38)
};

// Class Engine.*58e262d5d3
// Size: 0x98 (Inherited: 0x38)  [layout: KHOP]
struct U*58e262d5d3 : U*3b40133c14 {
	enum class *d8b9adc53b SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *598105e0c1; // 0x3c(0x0c)
	char *d8991c733b : 1; // 0x48(0x01)
	char *f92c2a395d : 1; // 0x48(0x01)
	char *5a71fa2d47 : 1; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float *814b95f938; // 0x4c(0x04)
	struct FName *47e59a578f; // 0x50(0x08)
	struct TArray<struct FName> *860d7006a3; // 0x58(0x10)
	char *c2bd93761e : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector *fb077442cb; // 0x6c(0x0c)
	float NormalCheckToleranceDegrees; // 0x78(0x04)
	float *602c547d7c; // 0x7c(0x04)
	struct TArray<int32> *e4e7b7bf83; // 0x80(0x10)
	char *0a83f080cb : 1; // 0x90(0x01)
	char *32efdc9be4 : 1; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	uint32 *8d1a633ced; // 0x94(0x04)
};

// Class Engine.*f481192835
// Size: 0x40 (Inherited: 0x38)  [layout: KHOP]
struct U*f481192835 : U*3b40133c14 {
	struct FVector2D *021685e53a; // 0x38(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleSourceMovement : U*3b40133c14 {
	struct FRawDistributionVector *d795f50520; // 0x38(0x50)
};

// Class Engine.*e6cd7e93d3
// Size: 0x58 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*e6cd7e93d3 : U*3b40133c14 {
	struct FVector *0a1b339692; // 0x38(0x0c)
	struct FVector *2d30f4975d; // 0x44(0x0c)
	char *21559eacda : 1; // 0x50(0x01)
	char *0046503fd5 : 1; // 0x50(0x01)
	char *c2888f1ca7 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*aa305f45af
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*aa305f45af : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleMeshMaterial : U*aa305f45af {
	struct TArray<struct UMaterialInterface*> *416ad35dbc; // 0x38(0x10)
};

// Class Engine.*b73a37dd8c
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*b73a37dd8c : UParticleModule {
	char *29f4906f34 : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x150 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleOrbit : U*b73a37dd8c {
	enum class *6e5f7bad20 *4294ecb2c3; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x48(0x50)
	struct F*6b7cf8b2d7 *d49b50a869; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FRawDistributionVector RotationAmount; // 0xa0(0x50)
	struct F*6b7cf8b2d7 *71bb4ac57d; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xf8(0x50)
	struct F*6b7cf8b2d7 *d1f4aa75f7; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*0771f7242b
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*0771f7242b : UParticleModule {
};

// Class Engine.*cd4fd6cb54
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*cd4fd6cb54 : U*0771f7242b {
	enum class *4ab61602a7 LockAxisFlags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.*804ddadb53
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*804ddadb53 : UParticleModuleParameterBase {
	struct TArray<struct F*0b73c31e7b> *33993f1435; // 0x38(0x10)
	int32 *692464267f; // 0x48(0x04)
	char *dbadcc4bb3 : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*badabe8d18
// Size: 0x70 (Inherited: 0x50)  [layout: KHOP]
struct U*badabe8d18 : U*804ddadb53 {
	struct F*4be709fed2 *1fad8b04d0; // 0x50(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USubUVAnimation : UObject {
	struct UTexture2D* *9dbf829e33; // 0x30(0x08)
	int32 *c45c45e66e; // 0x38(0x04)
	int32 *de58723f31; // 0x3c(0x04)
	enum class *ac7e2f8d49 *c2d9b7eeae; // 0x40(0x01)
	enum class *c7a988d74d *11e1091978; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float *0cc5c1ec86; // 0x44(0x04)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x190 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x38(0x08)
	struct UMaterialInterface* *b6e0a7eb38; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 *3aebc85b37; // 0x50(0x10)
	struct FVector *efd5d5b755; // 0x60(0x0c)
	struct FRotator *471cf3cc61; // 0x6c(0x0c)
	enum class *b5b9476706 *c3b253a962; // 0x78(0x01)
	enum class *9f0ab7b466 SortMode; // 0x79(0x01)
	enum class *fd033a2040 *4c3c78e512; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float *04bdece87e; // 0x7c(0x04)
	float *411507ecbc; // 0x80(0x04)
	float *ba87e11b54; // 0x84(0x04)
	char *5c16d7bdeb : 1; // 0x88(0x01)
	char *72c54ab6c3 : 1; // 0x88(0x01)
	char *5808c7f436 : 1; // 0x88(0x01)
	char *c40cc78cc7 : 1; // 0x88(0x01)
	char *34b6cfe9b8 : 1; // 0x88(0x01)
	char *20f30fdaee : 1; // 0x88(0x01)
	char *668adcb225 : 1; // 0x88(0x01)
	char *4653b1bd33 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *96968448b7; // 0x8c(0x04)
	float *6e4c38e6b3; // 0x90(0x04)
	int32 *a9b6b4555a; // 0x94(0x04)
	struct F*f1f6ef22a8 SpawnRate; // 0x98(0x38)
	struct TArray<struct F*8ff06ee6df> *c42c3c0f67; // 0xd0(0x10)
	float *a006e1d3dd; // 0xe0(0x04)
	float *b4ef65dfb4; // 0xe4(0x04)
	char *14def8b38c : 1; // 0xe8(0x01)
	char *9e1ae80304 : 1; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 *c45c45e66e; // 0xf0(0x04)
	int32 *de58723f31; // 0xf4(0x04)
	char *790fd3d173 : 1; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float *8707bac9cb; // 0xfc(0x04)
	int32 *2fbdf2f650; // 0x100(0x04)
	char *d079a3b4ff : 1; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector MacroUVPosition; // 0x108(0x0c)
	float MacroUVRadius; // 0x114(0x04)
	char *f5b66de8f2 : 1; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32 MaxDrawCount; // 0x11c(0x04)
	enum class EParticleUVFlipMode *1747fb2721; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UTexture2D* *66092b7b67; // 0x128(0x08)
	enum class *ac7e2f8d49 *c2d9b7eeae; // 0x130(0x01)
	enum class *c7a988d74d *11e1091978; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float *0cc5c1ec86; // 0x134(0x04)
	enum class *fb06e9e896 *c7f6904517; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector *7d8359d6ba; // 0x13c(0x0c)
	struct FVector *c7094168a4; // 0x148(0x0c)
	char *5667438f1f : 1; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<struct FName> *1051b7aef0; // 0x158(0x10)
	char pad_168[0x28]; // 0x168(0x28)
};

// Class Engine.*b9c3fe23f1
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*b9c3fe23f1 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x90 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleMeshRotation : U*b9c3fe23f1 {
	struct FRawDistributionVector *90fc8b2eb6; // 0x38(0x50)
	char *5f607821a8 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xb0 (Inherited: 0x90)  [layout: KHOP]
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*4be709fed2 *1fad8b04d0; // 0x90(0x20)
};

// Class Engine.*fdbc95c6ee
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct U*fdbc95c6ee : U*b9c3fe23f1 {
	struct F*f1f6ef22a8 *90fc8b2eb6; // 0x38(0x38)
};

// Class Engine.*e08b602903
// Size: 0x90 (Inherited: 0x70)  [layout: KHOP]
struct U*e08b602903 : U*fdbc95c6ee {
	struct F*4be709fed2 *1fad8b04d0; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x78 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleRotationOverLifetime : U*b9c3fe23f1 {
	struct F*f1f6ef22a8 *47bca645fb; // 0x38(0x38)
	char Scale : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*a912bcefae
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*a912bcefae : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleMeshRotationRate : U*a912bcefae {
	struct FRawDistributionVector *19a6022994; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa8 (Inherited: 0x88)  [layout: KHOP]
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*4be709fed2 *1fad8b04d0; // 0x88(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleMeshRotationRateMultiplyLife : U*a912bcefae {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x90 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleMeshRotationRateOverLife : U*a912bcefae {
	struct FRawDistributionVector *35b49b98da; // 0x38(0x50)
	char *f8eaa94f35 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*5490741d39
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct U*5490741d39 : U*a912bcefae {
	struct F*f1f6ef22a8 *19a6022994; // 0x38(0x38)
};

// Class Engine.*c68215bd25
// Size: 0x90 (Inherited: 0x70)  [layout: KHOP]
struct U*c68215bd25 : U*5490741d39 {
	struct F*4be709fed2 *1fad8b04d0; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x70 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleRotationRateMultiplyLife : U*a912bcefae {
	struct F*f1f6ef22a8 LifeMultiplier; // 0x38(0x38)
};

// Class Engine.*f34d640ffc
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*f34d640ffc : UParticleModule {
};

// Class Engine.*2c84c3ed08
// Size: 0x88 (Inherited: 0x38)  [layout: KHOP]
struct U*2c84c3ed08 : U*f34d640ffc {
	struct FRawDistributionVector *6548ecd154; // 0x38(0x50)
};

// Class Engine.*374e39c968
// Size: 0xa8 (Inherited: 0x88)  [layout: KHOP]
struct U*374e39c968 : U*2c84c3ed08 {
	struct F*4be709fed2 *1fad8b04d0; // 0x88(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x90 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleSizeMultiplyLife : U*f34d640ffc {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
	char *bdb0f7d2dc : 1; // 0x88(0x01)
	char *7f240b6855 : 1; // 0x88(0x01)
	char *5b3ba557d0 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x90 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleSizeScale : U*f34d640ffc {
	struct FRawDistributionVector SizeScale; // 0x38(0x50)
	char *936ba45fa3 : 1; // 0x88(0x01)
	char *85e5f10881 : 1; // 0x88(0x01)
	char *ee07d1f7d8 : 1; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x48 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleSizeScaleBySpeed : U*f34d640ffc {
	struct FVector2D *6210d3f939; // 0x38(0x08)
	struct FVector2D *bf4f376500; // 0x40(0x08)
};

// Class Engine.*aab323ceb5
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*aab323ceb5 : UParticleModule {
	char *3ccea86190 : 1; // 0x38(0x01)
	char *ad13bb890d : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x108 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleSpawn : U*aab323ceb5 {
	struct F*f1f6ef22a8 *b213864d95; // 0x40(0x38)
	struct F*f1f6ef22a8 *e12abf55ab; // 0x78(0x38)
	enum class *fd033a2040 *4c3c78e512; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct F*8ff06ee6df> *c42c3c0f67; // 0xb8(0x10)
	struct F*f1f6ef22a8 *ba0182fd26; // 0xc8(0x38)
	char *de86e5f98a : 1; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Engine.*f35eb7b6c2
// Size: 0x90 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*f35eb7b6c2 : U*aab323ceb5 {
	float *8788a4d128; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*f1f6ef22a8 SpawnPerUnit; // 0x48(0x38)
	char *301876a440 : 1; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *faef74220a; // 0x84(0x04)
	float *94fae98818; // 0x88(0x04)
	char *f512ab869d : 1; // 0x8c(0x01)
	char *2c6c946491 : 1; // 0x8c(0x01)
	char *4ace0d68bc : 1; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class Engine.*969ec806c5
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct U*969ec806c5 : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x80 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleSubUV : U*969ec806c5 {
	struct USubUVAnimation* Animation; // 0x38(0x08)
	struct F*f1f6ef22a8 SubImageIndex; // 0x40(0x38)
	char *7e24d1ba2f : 1; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc8 (Inherited: 0x80)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *29f4906f34 : 1; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct F*f1f6ef22a8 FrameRate; // 0x88(0x38)
	int32 *f7d5c4e63e; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.*69511e1153
// Size: 0xa0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*69511e1153 : UParticleModuleTrailBase {
	enum class *17eb936a6d *0817727451; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	struct F*f1f6ef22a8 *8297188395; // 0x48(0x38)
	char *e6213262ac : 1; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32 SourceOffsetCount; // 0x84(0x04)
	struct TArray<struct FVector> *1c072fe4af; // 0x88(0x10)
	enum class *5595ddf644 *6fb84379ae; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char *82dae8692f : 1; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.*999246799f
// Size: 0x50 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*999246799f : UParticleModuleTypeDataBase {
	char *c38efdfffe : 1; // 0x38(0x01)
	char *ba71cd0846 : 1; // 0x38(0x01)
	char *c96206d902 : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *b7639e37fc; // 0x3c(0x04)
	float *9e80e1f876; // 0x40(0x04)
	float *079a6c5d28; // 0x44(0x04)
	float *531ee907d8; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x170 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *e987ef3f73 *e1cde54231; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 *7b9c57f92c; // 0x3c(0x04)
	float *e5bc8f0144; // 0x40(0x04)
	int32 Sheets; // 0x44(0x04)
	int32 MaxBeamCount; // 0x48(0x04)
	float Speed; // 0x4c(0x04)
	int32 InterpolationPoints; // 0x50(0x04)
	char *fffbf62892 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *9b3da4d128; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *90461492fe; // 0x60(0x08)
	struct F*f1f6ef22a8 Distance; // 0x68(0x38)
	enum class *6bd7d42181 *e0087ce18f; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct F*f1f6ef22a8 TaperFactor; // 0xa8(0x38)
	struct F*f1f6ef22a8 *b25992e430; // 0xe0(0x38)
	char RenderGeometry : 1; // 0x118(0x01)
	char *191e1b1eab : 1; // 0x118(0x01)
	char *7d3a054a2f : 1; // 0x118(0x01)
	char *4c931fa7a2 : 1; // 0x118(0x01)
	char pad_119[0x57]; // 0x119(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x4a0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct F*91497f9582 *3ee441e091; // 0x40(0x2d0)
	struct F*2162352ec5 *bcae20ff3a; // 0x310(0x180)
	float *1684ee1908; // 0x490(0x04)
	char *9e922eee45 : 1; // 0x494(0x01)
	char *e2071c6747 : 1; // 0x494(0x01)
	char pad_495[0xb]; // 0x495(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xc0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x38(0x08)
	char *b4b62d191c : 1; // 0x40(0x01)
	char *f681d6fdf5 : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *ee5a565807 *30adc251b8; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	char *b115023d03 : 1; // 0x48(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x48(0x01)
	char *c4e4f043d9 : 1; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Pitch; // 0x4c(0x04)
	float Roll; // 0x50(0x04)
	float Yaw; // 0x54(0x04)
	struct FRawDistributionVector *ac39c415f6; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
	enum class *4ab61602a7 *d5ff84f383; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	char *e8e7dac385 : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class *4264b5be7b CameraFacingUpAxisOption; // 0xb8(0x01)
	enum class *1afeed6772 *7202664523; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	char *cad6590589 : 1; // 0xbc(0x01)
	char *d054e2f1cd : 1; // 0xbc(0x01)
	char *a3925a398f : 1; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x68 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles; // 0x38(0x04)
	int32 SheetsPerTrail; // 0x3c(0x04)
	int32 MaxTrailCount; // 0x40(0x04)
	int32 MaxParticleInTrailCount; // 0x44(0x04)
	char *c38efdfffe : 1; // 0x48(0x01)
	char *1557e0b7ed : 1; // 0x48(0x01)
	char *40acacbd4e : 1; // 0x48(0x01)
	char *ba71cd0846 : 1; // 0x48(0x01)
	char *c96206d902 : 1; // 0x48(0x01)
	char *55e9d8e4f1 : 1; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	enum class *196c1b0b76 *567280b5cc; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *d6ba5f1840; // 0x50(0x04)
	char *d85ae6aebb : 1; // 0x54(0x01)
	char *491e5014e2 : 1; // 0x54(0x01)
	char *c144930b7c : 1; // 0x54(0x01)
	char *b1f5f96b84 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *b7639e37fc; // 0x58(0x04)
	float *9e80e1f876; // 0x5c(0x04)
	char *ad1379c340 : 1; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *0d525ea538; // 0x64(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x38 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.*8f3c496243
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*8f3c496243 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *ba272f27a7; // 0x3c(0x04)
	float *01abfea9c3; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*4b98a515bf
// Size: 0x70 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*4b98a515bf : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x38(0x08)
	struct FVector RelativeTranslation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale3D; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *04fa7aed80; // 0x68(0x04)
	char *cf588b9f05 : 1; // 0x6c(0x01)
	char *92aaf4fa28 : 1; // 0x6c(0x01)
	char *0733615a53 : 1; // 0x6c(0x01)
	char *f8f4cddc22 : 1; // 0x6c(0x01)
	char *a30220ba7b : 1; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*f317cf30b6
// Size: 0x50 (Inherited: 0x38)  [layout: KHOP]
struct U*f317cf30b6 : UParticleModuleVectorFieldBase {
	struct FVector *e41f852f13; // 0x38(0x0c)
	struct FVector *4cf5357c58; // 0x44(0x0c)
};

// Class Engine.*158f836576
// Size: 0x48 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*158f836576 : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x78 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*f00c361422* VectorFieldScale; // 0x38(0x08)
	struct F*f1f6ef22a8 *1221b80a81; // 0x40(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x78 (Inherited: 0x38)  [layout: KHOP]
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*f00c361422* VectorFieldScaleOverLife; // 0x38(0x08)
	struct F*f1f6ef22a8 *c9f4940ab6; // 0x40(0x38)
};

// Class Engine.*54ef9eca7b
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*54ef9eca7b : UParticleModule {
	char *eb3f6fd360 : 1; // 0x38(0x01)
	char *94182e4dee : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*ccfd79d510
// Size: 0xc8 (Inherited: 0x40)  [layout: KHOP]
struct U*ccfd79d510 : U*54ef9eca7b {
	struct FRawDistributionVector *6d343127a1; // 0x40(0x50)
	struct F*f1f6ef22a8 *0cb2a13eb5; // 0x90(0x38)
};

// Class Engine.*c776e8c403
// Size: 0xe8 (Inherited: 0xc8)  [layout: KHOP]
struct U*c776e8c403 : U*ccfd79d510 {
	struct F*4be709fed2 *1fad8b04d0; // 0xc8(0x20)
};

// Class Engine.*8de7eab449
// Size: 0xc0 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*8de7eab449 : U*54ef9eca7b {
	struct F*f1f6ef22a8 Angle; // 0x40(0x38)
	struct F*f1f6ef22a8 Velocity; // 0x78(0x38)
	struct FVector Direction; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.*b874f214af
// Size: 0x90 (Inherited: 0x40)  [layout: KHOP]
struct U*b874f214af : U*54ef9eca7b {
	struct FRawDistributionVector Scale; // 0x40(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x98 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UParticleModuleVelocityOverLifetime : U*54ef9eca7b {
	struct FRawDistributionVector *6d362f8e68; // 0x40(0x50)
	char Absolute : 1; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*ab36a02958
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ab36a02958 : UObject {
	int32 *f833097469; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)
};

// Class Engine.*1ed0b2740d
// Size: 0xd0 (Inherited: 0xd0)  [layout: KHOP]
struct U*1ed0b2740d : U*73e33ac23e {
};

// Class Engine.PhysicalMaterial
// Size: 0x88 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x34(0x01)
	bool bOverrideFrictionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Restitution; // 0x38(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x3c(0x01)
	bool bOverrideRestitutionCombineMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float Density; // 0x40(0x04)
	float RaiseMassToPower; // 0x44(0x04)
	float DestructibleDamageThresholdScale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPhysicalMaterialPropertyBase* *ca2733c2cb; // 0x50(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *869fdeb4f7; // 0x5c(0x04)
	struct TArray<struct F*27ad8b757b> *e9227f5c1c; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x30(0x04)
	float ImpactReFireDelay; // 0x34(0x04)
	struct USoundBase* DefaultImpactSound; // 0x38(0x08)
	float *00f366b508; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPhysicsConstraintTemplate : UObject {
	struct FConstraintInstance DefaultInstance; // 0x30(0x1f0)
	struct TArray<struct F*551477a941> *6ae0fd7d77; // 0x220(0x10)
	struct F*d62734b6ad DefaultProfile; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPhysicsSerializer : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class Engine.*bae96191dc
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct U*bae96191dc : UObject {
	struct TArray<struct F*9330916f70> *f43c44722a; // 0x30(0x10)
};

// Class Engine.*da9e51eb84
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*da9e51eb84 : U*bae96191dc {
	struct TArray<struct FString> *d74e786b6b; // 0x40(0x10)
	char *f730124694 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*331a5a0b74
// Size: 0x68 (Inherited: 0x40)  [layout: KHOP]
struct U*331a5a0b74 : U*bae96191dc {
	char *59c9430068 : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<DelegateProperty> *6a0de6128f; // 0x48(0x10)
	struct TArray<DelegateProperty> *839a86f7c4; // 0x58(0x10)
};

// Class Engine.*9dd3aa2507
// Size: 0x70 (Inherited: 0x40)  [layout: KHOP]
struct U*9dd3aa2507 : U*bae96191dc {
	struct TArray<struct F*b18a92a651> *0c0b1e735e; // 0x40(0x10)
	struct FString LastError; // 0x50(0x10)
	struct FString *c9fecb4870; // 0x60(0x10)
};

// Class Engine.*2da5ab9e22
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*2da5ab9e22 : U*bae96191dc {

	void *4ff21d0bea(); // Function Engine.*2da5ab9e22.*4ff21d0bea //  // @ game+0xf5591fc
	void *2c96120eb8(); // Function Engine.*2da5ab9e22.*2c96120eb8 //  // @ game+0xf5549d0
	void *5429e2215c(); // Function Engine.*2da5ab9e22.*5429e2215c //  // @ game+0xf5640c0
	void Init(); // Function Engine.*2da5ab9e22.Init //  // @ game+0x1180b28
	void *a43a45bb3f(); // Function Engine.*2da5ab9e22.*a43a45bb3f //  // @ game+0xf57a08c
	void *6ef1bf4c48(); // Function Engine.*2da5ab9e22.*6ef1bf4c48 //  // @ game+0xf561cd4
	void *f197e66921(); // Function Engine.*2da5ab9e22.*f197e66921 //  // @ game+0xf57de40
};

// Class Engine.*a83f4c8124
// Size: 0xb8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*a83f4c8124 : UObject {
	struct FString *590d2c8a2e; // 0x30(0x10)
	int32 ResponseCode; // 0x40(0x04)
	int32 Tag; // 0x44(0x04)
	struct FString *7269721ac6; // 0x48(0x10)
	struct TArray<bool> *911a06cae2; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)

	void *a28dbbc786(); // Function Engine.*a83f4c8124.*a28dbbc786 //  // @ game+0xf5640e8
	void *4b77e715a2(); // Function Engine.*a83f4c8124.*4b77e715a2 //  // @ game+0xf563060
	void GetHeader(); // Function Engine.*a83f4c8124.GetHeader //  // @ game+0xf562d5c
};

// Class Engine.ChildConnection
// Size: 0x658b0 (Inherited: 0x658a8)  [layout: KHOP]
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x658a8(0x08)
};

// Class Engine.*302d02f859
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*302d02f859 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*3fd9fd3a43
// Size: 0xb0 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*3fd9fd3a43 : U*302d02f859 {
	char pad_38[0x78]; // 0x38(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x60 (Inherited: 0x30)  [layout: KHOP]
struct UReverbEffect : UObject {
	float Density; // 0x30(0x04)
	float Diffusion; // 0x34(0x04)
	float Gain; // 0x38(0x04)
	float GainHF; // 0x3c(0x04)
	float DecayTime; // 0x40(0x04)
	float DecayHFRatio; // 0x44(0x04)
	float ReflectionsGain; // 0x48(0x04)
	float ReflectionsDelay; // 0x4c(0x04)
	float LateGain; // 0x50(0x04)
	float LateDelay; // 0x54(0x04)
	float AirAbsorptionGainHF; // 0x58(0x04)
	float RoomRolloffFactor; // 0x5c(0x04)
};

// Class Engine.Rig
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct URig : UObject {
	struct TArray<struct F*d80db2d050> TransformBases; // 0x30(0x10)
	struct TArray<struct FNode> Nodes; // 0x40(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xc0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *7646e26a77; // 0x30(0x10)
	struct TArray<struct USCS_Node*> *d7ea3b19d0; // 0x40(0x10)
	struct USCS_Node* *e26d57242f; // 0x50(0x08)
	struct USCS_Node* RootNode; // 0x58(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes; // 0x60(0x10)
	char pad_70[0x50]; // 0x70(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USCS_Node : UObject {
	struct UClass* ComponentClass; // 0x30(0x08)
	struct UActorComponent* *87d8d572de; // 0x38(0x08)
	struct F*cb5daba91b *f5311ed173; // 0x40(0x50)
	struct FName VariableName; // 0x90(0x08)
	struct FName *eb78f7aa8b; // 0x98(0x08)
	struct FName *e9c9be1b32; // 0xa0(0x08)
	struct FName *2588b2662d; // 0xa8(0x08)
	bool *ea93693251; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xb8(0x10)
	struct USCS_Node* *bfdb541251; // 0xc8(0x08)
	struct TArray<struct F*295605260e> *9ddf0626dd; // 0xd0(0x10)
	struct FGuid VariableGuid; // 0xe0(0x10)
	bool bIsFalseRoot; // 0xf0(0x01)
	bool bIsNative; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FName NativeComponentName; // 0xf8(0x08)
	bool bVariableNameAutoGenerated; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FName InternalVariableName; // 0x108(0x08)
	char pad_110[0x40]; // 0x110(0x40)
};

// Class Engine.Selection
// Size: 0x98 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USelection : UObject {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Engine.DestructibleMesh
// Size: 0x3b0 (Inherited: 0x308)  [layout: LECH - offset chi la uoc luong]
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x308(0x88)
	struct TArray<struct F*5d473124e9> *0cdb3749c0; // 0x390(0x10)
	char pad_3A0[0x10]; // 0x3a0(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct FSkeletalMeshLODGroupSettings> Settings; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FName BoneName; // 0x38(0x08)
	struct FVector RelativeLocation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale; // 0x58(0x0c)
	bool bForceAlwaysAnimated; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)

	void *13a5a06575(); // Function Engine.SkeletalMeshSocket.*13a5a06575 //  // @ game+0xf5660ec
	void *c542aaca1e(); // Function Engine.SkeletalMeshSocket.*c542aaca1e //  // @ game+0xf567714
};

// Class Engine.SlateBrushAsset
// Size: 0xc0 (Inherited: 0x30)  [layout: KHOP]
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x30(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct USoundConcurrency : UObject {
	struct F*f0ddcab9f0 Concurrency; // 0x30(0x10)
};

// Class Engine.*6b19a54e9d
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*6b19a54e9d : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.*5986260596
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct U*5986260596 : U*6b19a54e9d {
};

// Class Engine.SoundSubmix
// Size: 0x58 (Inherited: 0x30)  [layout: KHOP]
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *efe1dde092; // 0x30(0x10)
	struct USoundSubmix* *eaf4789929; // 0x40(0x08)
	struct TArray<struct U*5986260596*> *bc63223d57; // 0x48(0x10)
};

// Class Engine.SoundBase
// Size: 0xa8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USoundBase : UObject {
	struct USoundClass* *ae6c38edf8; // 0x30(0x08)
	char *8311538d02 : 1; // 0x38(0x01)
	char bOverrideConcurrency : 1; // 0x38(0x01)
	char bIgnoreFocus : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x40(0x08)
	struct F*f0ddcab9f0 ConcurrencyOverrides; // 0x48(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 MaxConcurrentPlayCount; // 0x5c(0x04)
	float Duration; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x68(0x08)
	float Priority; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x78(0x08)
	struct TArray<struct F*88c06435a1> SoundSubmixSends; // 0x80(0x10)
	float DefaultMasterReverbSendAmount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct U*ade6a5ea24* SourceEffectChain; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class Engine.*96225cb1b0
// Size: 0xc8 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct U*96225cb1b0 : USoundBase {
	char pad_A8[0x20]; // 0xa8(0x20)
};

// Class Engine.SoundNode
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x30(0x10)
};

// Class Engine.SoundCue
// Size: 0x200 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct USoundNode* *f76142f564; // 0xb0(0x08)
	float *b14e847e10; // 0xb8(0x04)
	float *88eae397bc; // 0xbc(0x04)
	struct FSoundAttenuationSettings *bcfacf3a23; // 0xc0(0x130)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class Engine.SoundGroups
// Size: 0x90 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class Engine.SoundWave
// Size: 0x290 (Inherited: 0xa8)  [layout: LECH - offset chi la uoc luong]
struct USoundWave : USoundBase {
	int32 CompressionQuality; // 0xa8(0x04)
	char bLooping : 1; // 0xac(0x01)
	char *ed431e5f4f : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	int32 *586c2c4606; // 0xb0(0x04)
	char pad_B4_0 : 3; // 0xb4(0x01)
	char *1ae5b28511 : 1; // 0xb4(0x01)
	char *07e1294fc3 : 1; // 0xb4(0x01)
	char *15bac38099 : 1; // 0xb4(0x01)
	char *656722f499 : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class ESoundGroup SoundGroup; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString *11d0103faf; // 0xc0(0x10)
	float *065c9cca06; // 0xd0(0x04)
	float Volume; // 0xd4(0x04)
	float Pitch; // 0xd8(0x04)
	int32 *711619273c; // 0xdc(0x04)
	int32 SampleRate; // 0xe0(0x04)
	int32 *cfca7a188b; // 0xe4(0x04)
	struct TArray<struct F*5f22c370d5> Subtitles; // 0xe8(0x10)
	struct TArray<struct F*86937f5865> *bd4639f94a; // 0xf8(0x10)
	struct UCurveTable* Curves; // 0x108(0x08)
	struct UCurveTable* *9433169084; // 0x110(0x08)
	char pad_118[0x178]; // 0x118(0x178)
};

// Class Engine.*8434e9486a
// Size: 0x310 (Inherited: 0x290)  [layout: LECH - offset chi la uoc luong]
struct U*8434e9486a : USoundWave {
	char pad_290[0x80]; // 0x290(0x80)
};

// Class Engine.SoundClass
// Size: 0x88 (Inherited: 0x30)  [layout: KHOP]
struct USoundClass : UObject {
	struct F*5bb5e3f4be Properties; // 0x30(0x2c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x60(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *8aac4ce7c3; // 0x70(0x10)
	struct USoundClass* ParentClass; // 0x80(0x08)
};

// Class Engine.*6ca8b46b01
// Size: 0x48 (Inherited: 0x48)  [layout: KHOP]
struct U*6ca8b46b01 : U*6b19a54e9d {
};

// Class Engine.*ade6a5ea24
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*ade6a5ea24 : UObject {
	struct TArray<struct F*d38cbd153a> *49af77a993; // 0x30(0x10)
	char *bd5713c738 : 1; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.SoundMix
// Size: 0x90 (Inherited: 0x30)  [layout: KHOP]
struct USoundMix : UObject {
	char *0d90985119 : 1; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *069ababd5b; // 0x34(0x04)
	struct FAudioEQEffect *9be0509ba5; // 0x38(0x38)
	struct TArray<struct F*885ba5bfa4> *077fb166f9; // 0x70(0x10)
	float InitialDelay; // 0x80(0x04)
	float *0fa853e44d; // 0x84(0x04)
	float Duration; // 0x88(0x04)
	float *9bc258d89d; // 0x8c(0x04)
};

// Class Engine.*98df1bdfeb
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*98df1bdfeb : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x70 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct USoundNodeWavePlayer : U*98df1bdfeb {
	struct USoundWave* SoundWaveAssetPtr; // 0x40(0x20)
	struct USoundWave* SoundWave; // 0x60(0x08)
	char pad_68_0 : 1; // 0x68(0x01)
	char bLooping : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*5c8f7b04c9
// Size: 0x180 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*5c8f7b04c9 : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x40(0x08)
	struct FSoundAttenuationSettings *bcfacf3a23; // 0x48(0x130)
	char bOverrideAttenuation : 1; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct USoundNodeBranch : USoundNode {
	struct FName *ff6a03a468; // 0x40(0x08)
};

// Class Engine.*d7391c4fe0
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct U*d7391c4fe0 : USoundNode {
	struct TArray<float> *6b8c68176a; // 0x40(0x10)
};

// Class Engine.*9ae781269b
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct U*9ae781269b : USoundNode {
	float *de63e0eb94; // 0x40(0x04)
	float *b9c701cd06; // 0x44(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x40(0x20)
	char bLooping : 1; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*21ece9a9cc
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct U*21ece9a9cc : USoundNode {
	struct TArray<struct FDistanceDatum> *a6fa4849b0; // 0x40(0x10)
};

// Class Engine.*afe107aee5
// Size: 0x58 (Inherited: 0x50)  [layout: KHOP]
struct U*afe107aee5 : U*21ece9a9cc {
	struct FName ParamName; // 0x50(0x08)
};

// Class Engine.*83802d223a
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*83802d223a : USoundNode {
	float *a649eb6e56; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*5cc0b6be47
// Size: 0x168 (Inherited: 0x40)  [layout: KHOP]
struct U*5cc0b6be47 : USoundNode {
	float *0ada5bd7a4; // 0x40(0x04)
	float LoopEnd; // 0x44(0x04)
	float *060ae3f69a; // 0x48(0x04)
	int32 *12282b293c; // 0x4c(0x04)
	char *601a0cdcb7 : 1; // 0x50(0x01)
	char *9167e14cb0 : 1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*1f97e5c6f9* VolumeInterpCurve; // 0x58(0x08)
	struct U*1f97e5c6f9* PitchInterpCurve; // 0x60(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x68(0x78)
	struct FRuntimeFloatCurve *96083fa7f2; // 0xe0(0x78)
	float PitchMin; // 0x158(0x04)
	float PitchMax; // 0x15c(0x04)
	float *89cce388b3; // 0x160(0x04)
	float *7ac751ba77; // 0x164(0x04)
};

// Class Engine.*e82292b50d
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct U*e82292b50d : USoundNode {
	struct TArray<int32> *abaa760767; // 0x40(0x10)
};

// Class Engine.*8e74eb2158
// Size: 0x48 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*8e74eb2158 : USoundNode {
	int32 *12282b293c; // 0x40(0x04)
	char *601a0cdcb7 : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct USoundNodeMature : USoundNode {
};

// Class Engine.*cbe5f988cc
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct U*cbe5f988cc : USoundNode {
	struct TArray<float> *6b8c68176a; // 0x40(0x10)
};

// Class Engine.*f05ab9dde4
// Size: 0x50 (Inherited: 0x40)  [layout: KHOP]
struct U*f05ab9dde4 : USoundNode {
	float PitchMin; // 0x40(0x04)
	float PitchMax; // 0x44(0x04)
	float *89cce388b3; // 0x48(0x04)
	float *7ac751ba77; // 0x4c(0x04)
};

// Class Engine.*b83a679713
// Size: 0x80 (Inherited: 0x40)  [layout: KHOP]
struct U*b83a679713 : USoundNode {
	struct F*9406c10dd9 *98e72f6d63; // 0x40(0x20)
	struct F*9406c10dd9 *300041d2a4; // 0x60(0x20)
};

// Class Engine.*706ed40d92
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*706ed40d92 : USoundNode {
	char *78d7ccd6a6 : 1; // 0x40(0x01)
	char *86550fae99 : 1; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *96f15a8fde; // 0x44(0x04)
	float *4bf716ca87; // 0x48(0x04)
	float *3c3b0bf8a5; // 0x4c(0x04)
	float *92899f398f; // 0x50(0x04)
	float *ddc352faad; // 0x54(0x04)
	float *933776db5f; // 0x58(0x04)
	float *5906ee5af0; // 0x5c(0x04)
	float *fe192a281a; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*f86f8587fd
// Size: 0x40 (Inherited: 0x40)  [layout: KHOP]
struct U*f86f8587fd : USoundNode {
};

// Class Engine.*89586fa4ff
// Size: 0x70 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct U*89586fa4ff : USoundNode {
	struct TArray<float> Weights; // 0x40(0x10)
	int32 *a217c4c231; // 0x50(0x04)
	char *b10ee45fd8 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<bool> *3928575b40; // 0x58(0x10)
	int32 *64d8342ebb; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*ada51a1578
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct U*ada51a1578 : USoundNode {
	struct USoundClass* *031ccb5371; // 0x40(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct USoundNodeSwitch : USoundNode {
	struct FName *707f142de7; // 0x40(0x08)
};

// Class Engine.*219cae3ecc
// Size: 0x48 (Inherited: 0x40)  [layout: KHOP]
struct U*219cae3ecc : USoundNode {
	struct FName *5fa7f96e9a; // 0x40(0x08)
};

// Class Engine.*9d85998ee1
// Size: 0x70 (Inherited: 0x30)  [layout: KHOP]
struct U*9d85998ee1 : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Tag; // 0x60(0x10)
};

// Class Engine.StringTable
// Size: 0x48 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UStringTable : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*68b5bb5c5d
// Size: 0x40 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct U*68b5bb5c5d : U*c82d443ff2 {
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.*31693f0ce8
// Size: 0x78 (Inherited: 0x30)  [layout: KHOP]
struct U*31693f0ce8 : UObject {
	struct FText DefaultedText; // 0x30(0x18)
	struct FText UndefaultedText; // 0x48(0x18)
	struct FText *f6fd88509a; // 0x60(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x280 (Inherited: 0x270)  [layout: LECH - offset chi la uoc luong]
struct ULightMapTexture2D : UTexture2D {
	char pad_270[0x10]; // 0x270(0x10)
};

// Class Engine.*6bb4b27b38
// Size: 0x280 (Inherited: 0x270)  [layout: LECH - offset chi la uoc luong]
struct U*6bb4b27b38 : UTexture2D {
	enum class *ef90852e39 *e51e9ae9aa; // 0x270(0x01)
	char pad_271[0xf]; // 0x271(0x0f)
};

// Class Engine.Texture2DArray
// Size: 0x270 (Inherited: 0x270)  [layout: KHOP]
struct UTexture2DArray : UTexture2D {
};

// Class Engine.*4b95727658
// Size: 0x1a0 (Inherited: 0x180)  [layout: LECH - offset chi la uoc luong]
struct U*4b95727658 : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class EPixelFormat Format; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)
};

// Class Engine.*8cc8efb930
// Size: 0x1d0 (Inherited: 0x1b0)  [layout: LECH - offset chi la uoc luong]
struct U*8cc8efb930 : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0x1b0(0x10)
	struct UWorld* World; // 0x1c0(0x08)
	bool *0a403f3ac8; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)

	void *e936ffca0b(); // Function Engine.*8cc8efb930.*e936ffca0b //  // @ game+0xf57fb8c
	void *f1e2d1a170(); // Function Engine.*8cc8efb930.*f1e2d1a170 //  // @ game+0xf402498
	void GetSize(); // Function Engine.*8cc8efb930.GetSize //  // @ game+0xf57fd2c
	void ReceiveUpdate(); // Function Engine.*8cc8efb930.ReceiveUpdate //  // @ game+0x43bab4
};

// Class Engine.TextureRenderTargetCube
// Size: 0x1b0 (Inherited: 0x190)  [layout: LECH - offset chi la uoc luong]
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX; // 0x188(0x04)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	enum class EPixelFormat *06bb3d6300; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	char bHDR : 1; // 0x1a0(0x01)
	char *4f92511ea3 : 1; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// Class Engine.TextureLODSettings
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x30(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x40(0x10)
	struct FString BaseProfileName; // 0x50(0x10)
	struct UObject* Parent; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<struct FString> CVars; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
};

// Class Engine.*9a19f23f9a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*9a19f23f9a : UObject {
};

// Class Engine.*978737fff5
// Size: 0xa0 (Inherited: 0x30)  [layout: KHOP]
struct U*978737fff5 : UObject {
	float *2449d77b88; // 0x30(0x04)
	enum class *94773f65a3 *a091323f53; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char *ab17cc4de7 : 1; // 0x38(0x01)
	char *9167e14cb0 : 1; // 0x38(0x01)
	char bReplicated : 1; // 0x38(0x01)
	char *3108c3f3c7 : 1; // 0x38(0x01)
	char *f2995997a9 : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*63a2473ea7> *3bbd334db6; // 0x40(0x10)
	struct TArray<struct F*1c747b587a> *3b16a31e68; // 0x50(0x10)
	struct TArray<struct F*921db8d619> *1c430ab171; // 0x60(0x10)
	struct TArray<struct F*fc5000964c> *874388397c; // 0x70(0x10)
	struct TArray<struct F*295605260e> *9ddf0626dd; // 0x80(0x10)
	struct FGuid *5f07da0d41; // 0x90(0x10)
};

// Class Engine.TouchInterface
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTouchInterface : UObject {
	struct TArray<struct F*3667d47c0f> Controls; // 0x30(0x10)
	float *10f31a666f; // 0x40(0x04)
	float *f5496373d2; // 0x44(0x04)
	float *3d4fe63630; // 0x48(0x04)
	float *ac95e6b0e5; // 0x4c(0x04)
	float *29a2089ee8; // 0x50(0x04)
	bool *6be4336528; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float StartupDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc8 (Inherited: 0x78)  [layout: KHOP]
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *1b98a7287f; // 0x78(0x50)
};

// Class Engine.VectorField
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UVectorField : UObject {
	struct FBox Bounds; // 0x30(0x1c)
	float Intensity; // 0x4c(0x04)
};

// Class Engine.*c908a5a77f
// Size: 0x90 (Inherited: 0x50)  [layout: KHOP]
struct U*c908a5a77f : UVectorField {
	struct UTexture2D* Texture; // 0x50(0x08)
	enum class *1e21444359 *29d8f7990a; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *1aad3049fb; // 0x5c(0x04)
	int32 *9ed58219ae; // 0x60(0x04)
	int32 *9bd0fe828a; // 0x64(0x04)
	int32 *69a9bf0271; // 0x68(0x04)
	int32 *d2bc70f17a; // 0x6c(0x04)
	int32 FrameCount; // 0x70(0x04)
	float *5552874f2d; // 0x74(0x04)
	char *9167e14cb0 : 1; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct U*da5172db2f* NoiseField; // 0x80(0x08)
	float NoiseScale; // 0x88(0x04)
	float *06facfc9da; // 0x8c(0x04)
};

// Class Engine.*da5172db2f
// Size: 0xe8 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*da5172db2f : UVectorField {
	int32 SizeX; // 0x50(0x04)
	int32 SizeY; // 0x54(0x04)
	int32 *eed32a0c84; // 0x58(0x04)
	char pad_5C[0x8c]; // 0x5c(0x8c)
};

// Class Engine.*546ea07194
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*546ea07194 : UObject {
};

// Class Engine.*f9020cb703
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*f9020cb703 : UInterface {
};

// Class Engine.*95e4ac09c4
// Size: 0x60 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*95e4ac09c4 : UObject {
	struct FGuid ID; // 0x30(0x10)
	enum class EVolumetricDataFormat Format; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector VoxelSize; // 0x44(0x0c)
	float SamplingScale; // 0x50(0x04)
	float *22ed1d5b8e; // 0x54(0x04)
	float MaxDrawDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

