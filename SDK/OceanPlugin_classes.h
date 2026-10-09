// Class OceanPlugin.BuoyancyForceComponent
// Size: 0x530 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct UBuoyancyForceComponent : USceneComponent {
	struct AOceanManager* OceanManager; // 0x478(0x08)
	float MeshDensity; // 0x480(0x04)
	float FluidDensity; // 0x484(0x04)
	float FluidLinearDamping; // 0x488(0x04)
	float FluidAngularDamping; // 0x48c(0x04)
	struct FVector VelocityDamper; // 0x490(0x0c)
	bool ClampMaxVelocity; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	float MaxUnderwaterVelocity; // 0x4a0(0x04)
	float TestPointRadius; // 0x4a4(0x04)
	struct TArray<struct FVector> TestPoints; // 0x4a8(0x10)
	bool ApplyForceToBones; // 0x4b8(0x01)
	bool SnapToSurfaceIfNoPhysics; // 0x4b9(0x01)
	bool TwoGerstnerIterations; // 0x4ba(0x01)
	char pad_4BB[0x5]; // 0x4bb(0x05)
	struct TArray<float> PointDensityOverride; // 0x4c0(0x10)
	struct TArray<struct F*bc5a3dfb44> BoneOverride; // 0x4d0(0x10)
	bool DrawDebugPoints; // 0x4e0(0x01)
	bool EnableStayUprightConstraint; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float StayUprightStiffness; // 0x4e4(0x04)
	float StayUprightDamping; // 0x4e8(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x4ec(0x0c)
	bool EnableWaveForces; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float WaveForceMultiplier; // 0x4fc(0x04)
	enum class ETickingGroup TickGroup; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float WaveHightMultiplier; // 0x504(0x04)
	bool *e9d70abb18; // 0x508(0x01)
	char pad_509[0x27]; // 0x509(0x27)
};

// Class OceanPlugin.OceanManager
// Size: 0x4b8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AOceanManager : AActor {
	bool EnableGerstnerWaves; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FVector2D GlobalWaveDirection; // 0x404(0x08)
	float GlobalWaveSpeed; // 0x40c(0x04)
	float GlobalWaveAmplitude; // 0x410(0x04)
	float DistanceCheck; // 0x414(0x04)
	struct TArray<struct F*0b593f113b> WaveClusters; // 0x418(0x10)
	struct TArray<struct F*189d61c4bc> WaveSetOffsetsOverride; // 0x428(0x10)
	float NetWorkTimeOffset; // 0x438(0x04)
	bool bEnableLandscapeModulation; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	float ModulationStartHeight; // 0x440(0x04)
	float ModulationMaxHeight; // 0x444(0x04)
	float ModulationPower; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ALandscape* Landscape; // 0x450(0x08)
	struct UTexture2D* HeightmapTexture; // 0x458(0x08)
	struct UMaterialParameterCollection* OceanMaterialParameterCollection; // 0x460(0x08)
	char pad_468[0x28]; // 0x468(0x28)
	struct F*c909809b72 *99c3279c91; // 0x490(0x18)
	char pad_4A8[0x10]; // 0x4a8(0x10)

	void *bf9806ea59(); // Function OceanPlugin.OceanManager.*bf9806ea59 //  // @ game+0xe593e0
	void *d3ba093595(); // Function OceanPlugin.OceanManager.*d3ba093595 //  // @ game+0xfa2a270
	void *99faf8984f(); // Function OceanPlugin.OceanManager.*99faf8984f //  // @ game+0xfa2b804
};

// Class OceanPlugin.*e6cb51aacd
// Size: 0x590 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*e6cb51aacd : USceneComponent {
	bool bUseDrag; // 0x478(0x01)
	bool bDebugOn; // 0x479(0x01)
	struct AOceanManager* TheOcean; // 0x480(0x08)
	float WaterDensity; // 0x488(0x04)
	float Gravity; // 0x48c(0x04)
	float MeshDensity; // 0x490(0x04)
	char pad_494[0x14]; // 0x494(0x14)
	struct UStaticMeshComponent* BuoyantMesh; // 0x4a8(0x08)
	struct FTransform MeshTransform; // 0x4b0(0x30)
	float FalseVolume; // 0x4e0(0x04)
	float BuoyancyReductionCoefficient; // 0x4e4(0x04)
	float BuoyancyPitchReductionCoefficient; // 0x4e8(0x04)
	float DensityCorrection; // 0x4ec(0x04)
	float DensityCorrectionModifier; // 0x4f0(0x04)
	float SubmergedVolume; // 0x4f4(0x04)
	float ImpactCoefficient; // 0x4f8(0x04)
	struct FVector DragCoefficient; // 0x4fc(0x0c)
	struct FVector SuctionCoefficient; // 0x508(0x0c)
	float ViscousDragCoefficient; // 0x514(0x04)
	float MaxSlamAcceleration; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct TArray<struct FVector> AdvancedGridHeight; // 0x520(0x10)
	struct TArray<struct F*60b5fda44b> SubmergedTris; // 0x530(0x10)
	struct TArray<float> TriSizes; // 0x540(0x10)
	struct TArray<float> TriSubmergedArea; // 0x550(0x10)
	char pad_560[0x30]; // 0x560(0x30)

	void *d5c435aaab(); // Function OceanPlugin.*e6cb51aacd.*d5c435aaab //  // @ game+0xfa29f4c
	void TriangleArea(); // Function OceanPlugin.*e6cb51aacd.TriangleArea //  // @ game+0xfa2e350
	void *96f2ca7802(); // Function OceanPlugin.*e6cb51aacd.*96f2ca7802 //  // @ game+0xfa2e158
	void *34f706100c(); // Function OceanPlugin.*e6cb51aacd.*34f706100c //  // @ game+0xfa2d790
	void *0c000df54c(); // Function OceanPlugin.*e6cb51aacd.*0c000df54c //  // @ game+0xfa29cfc
	void *c8f0788505(); // Function OceanPlugin.*e6cb51aacd.*c8f0788505 //  // @ game+0xfa2ac80
	void *be8ab5dd22(); // Function OceanPlugin.*e6cb51aacd.*be8ab5dd22 //  // @ game+0xfa2ac6c
	void *595cd727f7(); // Function OceanPlugin.*e6cb51aacd.*595cd727f7 //  // @ game+0xfa29dd0
};

// Class OceanPlugin.*0f2127a8c7
// Size: 0x2e0 (Inherited: 0x250)  [layout: LECH - offset chi la uoc luong]
struct U*0f2127a8c7 : UMovementComponent {
	struct AOceanManager* OceanManager; // 0x250(0x08)
	float MeshDensity; // 0x258(0x04)
	float FluidDensity; // 0x25c(0x04)
	float FluidLinearDamping; // 0x260(0x04)
	float FluidAngularDamping; // 0x264(0x04)
	struct FVector VelocityDamper; // 0x268(0x0c)
	bool ClampMaxVelocity; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	float MaxUnderwaterVelocity; // 0x278(0x04)
	float TestPointRadius; // 0x27c(0x04)
	struct TArray<struct FVector> TestPoints; // 0x280(0x10)
	struct TArray<float> PointDensityOverride; // 0x290(0x10)
	bool DrawDebugPoints; // 0x2a0(0x01)
	bool EnableStayUprightConstraint; // 0x2a1(0x01)
	char pad_2A2[0x2]; // 0x2a2(0x02)
	float StayUprightStiffness; // 0x2a4(0x04)
	float StayUprightDamping; // 0x2a8(0x04)
	struct FRotator StayUprightDesiredRotation; // 0x2ac(0x0c)
	bool EnableWaveForces; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float WaveForceMultiplier; // 0x2bc(0x04)
	char pad_2C0[0x20]; // 0x2c0(0x20)
};

// Class OceanPlugin.*65ae710d05
// Size: 0xf10 (Inherited: 0xec0)  [layout: KHOP]
struct U*65ae710d05 : UDestructibleComponent {
	char pad_EC0[0x10]; // 0xec0(0x10)
	struct AOceanManager* OceanManager; // 0xed0(0x08)
	float ChunkDensity; // 0xed8(0x04)
	float FluidDensity; // 0xedc(0x04)
	float FluidLinearDamping; // 0xee0(0x04)
	float FluidAngularDamping; // 0xee4(0x04)
	struct FVector VelocityDamper; // 0xee8(0x0c)
	bool ClampMaxVelocity; // 0xef4(0x01)
	char pad_EF5[0x3]; // 0xef5(0x03)
	float MaxUnderwaterVelocity; // 0xef8(0x04)
	float TestPointRadius; // 0xefc(0x04)
	bool DrawDebugPoints; // 0xf00(0x01)
	bool EnableWaveForces; // 0xf01(0x01)
	char pad_F02[0x2]; // 0xf02(0x02)
	float WaveForceMultiplier; // 0xf04(0x04)
	float ChunkSleepThreshold; // 0xf08(0x04)
	float ChunkStabilizationThreshold; // 0xf0c(0x04)
};

// Class OceanPlugin.BuoyantDestructible
// Size: 0x408 (Inherited: 0x400)  [layout: KHOP]
struct ABuoyantDestructible : AActor {
	struct U*65ae710d05* BuoyantDestructibleComponent; // 0x400(0x08)
};

// Class OceanPlugin.*92af4a7ea3
// Size: 0xbe0 (Inherited: 0xb80)  [layout: KHOP]
struct U*92af4a7ea3 : UStaticMeshComponent {
	bool bVerticalForcesOnly; // 0xb80(0x01)
	bool bUseWaterPatch; // 0xb81(0x01)
	bool bUseStaticForces; // 0xb82(0x01)
	bool bUseDynamicForces; // 0xb83(0x01)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct AOceanManager* OceanManager; // 0xb88(0x08)
	bool bDrawForceArrows; // 0xb90(0x01)
	bool bDrawWaterline; // 0xb91(0x01)
	bool bDrawVertices; // 0xb92(0x01)
	bool bDrawTriangles; // 0xb93(0x01)
	bool bDrawSubtriangles; // 0xb94(0x01)
	char pad_B95[0x3]; // 0xb95(0x03)
	float ForceArrowSize; // 0xb98(0x04)
	bool bOverrideMeshDensity; // 0xb9c(0x01)
	char pad_B9D[0x3]; // 0xb9d(0x03)
	float MeshDensity; // 0xba0(0x04)
	bool bOverrideMass; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	float Mass; // 0xba8(0x04)
	float WaterDensity; // 0xbac(0x04)
	char pad_BB0[0x28]; // 0xbb0(0x28)
	struct U*8fecf4b28e* *74e9e24021; // 0xbd8(0x08)
};

// Class OceanPlugin.CustomVehicleController
// Size: 0x7e0 (Inherited: 0x7d0)  [layout: LECH - offset chi la uoc luong]
struct ACustomVehicleController : APlayerController {
	struct APawn* PlayerPawn; // 0x7d0(0x08)
	char pad_7D8[0x8]; // 0x7d8(0x08)

	void *56b4ddb697(); // Function OceanPlugin.CustomVehicleController.*56b4ddb697 //  // @ game+0xfa2a078
	void *df63f1f65c(); // Function OceanPlugin.CustomVehicleController.*df63f1f65c //  // @ game+0xfa29ff8
	void EnableBuoyancy(); // Function OceanPlugin.CustomVehicleController.EnableBuoyancy //  // @ game+0xda9a120
	void *cc967fb466(); // Function OceanPlugin.CustomVehicleController.*cc967fb466 //  // @ game+0xfa2ac44
	void DrawBuoyancyPoints(); // Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints //  // @ game+0xfa29f34
};

// Class OceanPlugin.FishManager
// Size: 0x458 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct AFishManager : AActor {
	struct TArray<struct UClass*> flockTypes; // 0x400(0x10)
	struct TArray<float> numInFlock; // 0x410(0x10)
	float minZ; // 0x420(0x04)
	float maxZ; // 0x424(0x04)
	float underwaterBoxLength; // 0x428(0x04)
	bool attachToPlayer; // 0x42c(0x01)
	bool DebugMode; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct UClass* PlayerType; // 0x430(0x08)
	char pad_438[0x20]; // 0x438(0x20)
};

// Class OceanPlugin.FlockFish
// Size: 0x5e8 (Inherited: 0x468)  [layout: LECH - offset chi la uoc luong]
struct AFlockFish : APawn {
	char pad_468[0x10]; // 0x468(0x10)
	struct USphereComponent* FishInteractionSphere; // 0x478(0x08)
	bool isLeader; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct TArray<struct UClass*> EnemyTypes; // 0x488(0x10)
	struct TArray<struct UClass*> preyTypes; // 0x498(0x10)
	struct UClass* neighborType; // 0x4a8(0x08)
	float followDist; // 0x4b0(0x04)
	float Speed; // 0x4b4(0x04)
	float MaxSpeed; // 0x4b8(0x04)
	float turnSpeed; // 0x4bc(0x04)
	float turnFrequency; // 0x4c0(0x04)
	float hungerResetTime; // 0x4c4(0x04)
	float distBehindSpeedUpRange; // 0x4c8(0x04)
	float SeperationDistanceMultiplier; // 0x4cc(0x04)
	float FleeDistanceMultiplier; // 0x4d0(0x04)
	float FleeAccelerationMultiplier; // 0x4d4(0x04)
	float ChaseAccelerationMultiplier; // 0x4d8(0x04)
	float SeekDecelerationMultiplier; // 0x4dc(0x04)
	float AvoidForceMultiplier; // 0x4e0(0x04)
	float AvoidanceForce; // 0x4e4(0x04)
	struct UClass* PlayerType; // 0x4e8(0x08)
	struct FVector underwaterMin; // 0x4f0(0x0c)
	struct FVector underwaterMax; // 0x4fc(0x0c)
	float CustomZSeekMin; // 0x508(0x04)
	float CustomZSeekMax; // 0x50c(0x04)
	float NumNeighborsToEvaluate; // 0x510(0x04)
	float UpdateEveryTick; // 0x514(0x04)
	char pad_518[0x10]; // 0x518(0x10)
	bool DebugMode; // 0x528(0x01)
	char pad_529[0xbf]; // 0x529(0xbf)

	void OnBeginOverlap(); // Function OceanPlugin.FlockFish.OnBeginOverlap //  // @ game+0xfa2b880
	void OnEndOverlap(); // Function OceanPlugin.FlockFish.OnEndOverlap //  // @ game+0xfa2ba50
};

// Class OceanPlugin.*55e102076e
// Size: 0x4a0 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*55e102076e : USceneComponent {
	bool UpdateInEditor; // 0x478(0x01)
	enum class EFollowMethod FollowMethod; // 0x479(0x01)
	float GridSnapSize; // 0x47c(0x04)
	float MaxLookAtDistance; // 0x480(0x04)
	bool ScaleByDistance; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	float ScaleDistanceFactor; // 0x488(0x04)
	float ScaleStartDistance; // 0x48c(0x04)
	float ScaleMin; // 0x490(0x04)
	float ScaleMax; // 0x494(0x04)
	char pad_498[0x8]; // 0x498(0x08)
};

// Class OceanPlugin.OceanMeshComponent
// Size: 0xa10 (Inherited: 0x9d0)  [layout: LECH - offset chi la uoc luong]
struct UOceanMeshComponent : UPrimitiveComponent {
	struct UStaticMesh* SourceMesh; // 0x9d0(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x9d8(0x08)
	struct UMaterialInterface* LODMaterial; // 0x9e0(0x08)
	struct UMaterialInterface* SimpleMaterial; // 0x9e8(0x08)
	struct FVector BoundsExtent; // 0x9f0(0x0c)
	float LODTransitionStart; // 0x9fc(0x04)
	float LODTransitionEnd; // 0xa00(0x04)
	char pad_A04[0xc]; // 0xa04(0x0c)

	void *a87c85250c(); // Function OceanPlugin.OceanMeshComponent.*a87c85250c //  // @ game+0xfa2bb78
	void *b2b1761240(); // Function OceanPlugin.OceanMeshComponent.*b2b1761240 //  // @ game+0xfa2c570
};

// Class OceanPlugin.TimeManager
// Size: 0x4c8 (Inherited: 0x400)  [layout: LECH - offset chi la uoc luong]
struct ATimeManager : AActor {
	struct F*c51acdb263 CurrentLocalTime; // 0x400(0x1c)
	float Latitude; // 0x41c(0x04)
	float Longitude; // 0x420(0x04)
	int32 OffsetUTC; // 0x424(0x04)
	int32 OffsetDST; // 0x428(0x04)
	bool bAllowDaylightSavings; // 0x42c(0x01)
	bool bDaylightSavingsActive; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	float TimeScaleMultiplier; // 0x430(0x04)
	float SolarTime; // 0x434(0x04)
	float LocalClockTime; // 0x438(0x04)
	float TimeCorrection; // 0x43c(0x04)
	int32 LSTM; // 0x440(0x04)
	int32 DayOfYear; // 0x444(0x04)
	float EoT; // 0x448(0x04)
	float SolarAltAngle; // 0x44c(0x04)
	float SolarDeclination; // 0x450(0x04)
	float SolarAzimuth; // 0x454(0x04)
	float SolarHRA; // 0x458(0x04)
	float SiderealTime; // 0x45c(0x04)
	float LunarAltAngle; // 0x460(0x04)
	float LunarHRA; // 0x464(0x04)
	float LunarDeclination; // 0x468(0x04)
	float LunarAzimuth; // 0x46c(0x04)
	float LunarRightAsc; // 0x470(0x04)
	float LunarElapsedDays; // 0x474(0x04)
	float EcLongitude; // 0x478(0x04)
	float EcLatitude; // 0x47c(0x04)
	float EcDistance; // 0x480(0x04)
	float PartL; // 0x484(0x04)
	float PartM; // 0x488(0x04)
	float PartF; // 0x48c(0x04)
	char pad_490[0x38]; // 0x490(0x38)

	void *58da25331f(); // Function OceanPlugin.TimeManager.*58da25331f //  // @ game+0xfa2ad5c
	void *d79a6f4825(); // Function OceanPlugin.TimeManager.*d79a6f4825 //  // @ game+0xfa29ea8
	void *88e71e2c5e(); // Function OceanPlugin.TimeManager.*88e71e2c5e //  // @ game+0xfa2bbfc
	void *74d77a9e35(); // Function OceanPlugin.TimeManager.*74d77a9e35 //  // @ game+0xfa2a184
	void *a547a96fd3(); // Function OceanPlugin.TimeManager.*a547a96fd3 //  // @ game+0xf43ccb0
	void *bf5d58d533(); // Function OceanPlugin.TimeManager.*bf5d58d533 //  // @ game+0xfa2ad84
	void *f232f773b3(); // Function OceanPlugin.TimeManager.*f232f773b3 //  // @ game+0xfa29edc
	void *6ed8b8a4a6(); // Function OceanPlugin.TimeManager.*6ed8b8a4a6 //  // @ game+0xfa29f00
	void *570c347b23(); // Function OceanPlugin.TimeManager.*570c347b23 //  // @ game+0xfa2a14c
	void *d2d02ad242(); // Function OceanPlugin.TimeManager.*d2d02ad242 //  // @ game+0xfa2b6f8
	void GetDayOfYear(); // Function OceanPlugin.TimeManager.GetDayOfYear //  // @ game+0xfa2a090
	void *2eabf2af37(); // Function OceanPlugin.TimeManager.*2eabf2af37 //  // @ game+0xfa2a250
	void IsLeapYear(); // Function OceanPlugin.TimeManager.IsLeapYear //  // @ game+0xfa2b78c
};

// Class OceanPlugin.*8fecf4b28e
// Size: 0x280 (Inherited: 0x210)  [layout: KHOP]
struct U*8fecf4b28e : UActorComponent {
	float DesiredCellSize; // 0x208(0x04)
	bool bOnlyCollidingComponents; // 0x20c(0x01)
	float GridSizeMultiplier; // 0x210(0x04)
	bool bDrawUsedTriangles; // 0x214(0x01)
	bool bDrawHeightmap; // 0x215(0x01)
	char pad_216[0x62]; // 0x216(0x62)
	struct AOceanManager* OceanManager; // 0x278(0x08)
};

