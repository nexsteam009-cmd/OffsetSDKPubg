// Class CinematicCamera.CameraRig_Crane
// Size: 0x430 (Inherited: 0x400)  [layout: KHOP]
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x400(0x04)
	float CraneYaw; // 0x404(0x04)
	float CraneArmLength; // 0x408(0x04)
	bool bLockMountPitch; // 0x40c(0x01)
	bool bLockMountYaw; // 0x40d(0x01)
	char pad_40E[0x2]; // 0x40e(0x02)
	struct USceneComponent* TransformComponent; // 0x410(0x08)
	struct USceneComponent* CraneYawControl; // 0x418(0x08)
	struct USceneComponent* CranePitchControl; // 0x420(0x08)
	struct USceneComponent* CraneCameraMount; // 0x428(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x420 (Inherited: 0x400)  [layout: KHOP]
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct USceneComponent* TransformComponent; // 0x408(0x08)
	struct USplineComponent* RailSplineComponent; // 0x410(0x08)
	struct USceneComponent* RailCameraMount; // 0x418(0x08)
};

// Class CinematicCamera.CineCameraActor
// Size: 0x9f0 (Inherited: 0x9b0)  [layout: LECH - offset chi la uoc luong]
struct ACineCameraActor : ACameraActor {
	struct F*b7e4ef3a44 LookatTrackingSettings; // 0x9b0(0x30)
	char pad_9E0[0x10]; // 0x9e0(0x10)

	void *d971325c36(); // Function CinematicCamera.CineCameraActor.*d971325c36 //  // @ game+0xec34210
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb40 (Inherited: 0xa80)  [layout: LECH - offset chi la uoc luong]
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa80(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa8c(0x14)
	struct FCameraFocusSettings FocusSettings; // 0xaa0(0x38)
	float CurrentFocalLength; // 0xad8(0x04)
	float CurrentAperture; // 0xadc(0x04)
	float CurrentFocusDistance; // 0xae0(0x04)
	char pad_AE4[0xc]; // 0xae4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xaf0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xb00(0x10)
	struct FString DefaultFilmbackPresetName; // 0xb10(0x10)
	struct FString DefaultLensPresetName; // 0xb20(0x10)
	float DefaultLensFocalLength; // 0xb30(0x04)
	float DefaultLensFStop; // 0xb34(0x04)
	char pad_B38[0x8]; // 0xb38(0x08)

	void *b2f5e4c6b8(); // Function CinematicCamera.CineCameraComponent.*b2f5e4c6b8 //  // @ game+0xec34228
	void *726ba02423(); // Function CinematicCamera.CineCameraComponent.*726ba02423 //  // @ game+0xec34250
};

