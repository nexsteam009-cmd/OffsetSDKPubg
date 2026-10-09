// BlueprintGeneratedClass ProjDecoyGrenade.ProjDecoyGrenade_C
// Size: 0xbcc (Inherited: 0xba0)  [layout: KHOP]
struct AProjDecoyGrenade_C : AProjDecoyGrenade {
	struct F*467c63d8f7 UberGraphFrame; // 0xba0(0x10)
	struct FRotator TargetRotation; // 0xbb0(0x0c)
	bool bRotateUp; // 0xbbc(0x01)
	char pad_BBD[0x3]; // 0xbbd(0x03)
	struct FRotator LerpedTargetRotation; // 0xbc0(0x0c)

	void UserConstructionScript(); // Function ProjDecoyGrenade.ProjDecoyGrenade_C.UserConstructionScript //  // @ game+0x43bab4
	void ReceiveTick(); // Function ProjDecoyGrenade.ProjDecoyGrenade_C.ReceiveTick //  // @ game+0x43bab4
	void ReceiveBeginPlay(); // Function ProjDecoyGrenade.ProjDecoyGrenade_C.ReceiveBeginPlay //  // @ game+0x43bab4
	int32 ExecuteUbergraph_ProjDecoyGrenade(); // Function ProjDecoyGrenade.ProjDecoyGrenade_C.ExecuteUbergraph_ProjDecoyGrenade //  // @ game+0x43bab4
};

