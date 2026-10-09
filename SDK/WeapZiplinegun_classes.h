// BlueprintGeneratedClass WeapZiplinegun.WeapZiplinegun_C
// Size: 0x1793 (Inherited: 0x1780)  [layout: KHOP]
struct AWeapZiplinegun_C : ATslWeapon_Ziplinegun {
	struct F*467c63d8f7 UberGraphFrame; // 0x1780(0x10)
	enum class ENUM_CrossbowState CurrentState; // 0x1790(0x01)
	enum class ENUM_CrossbowState LastState; // 0x1791(0x01)
	bool bWantsToReload; // 0x1792(0x01)

	void UserConstructionScript(); // Function WeapZiplinegun.WeapZiplinegun_C.UserConstructionScript //  // @ game+0x43bab4
	void ServerSetAmmoState(); // Function WeapZiplinegun.WeapZiplinegun_C.ServerSetAmmoState //  // @ game+0x43bab4
	int32 ExecuteUbergraph_WeapZiplinegun(); // Function WeapZiplinegun.WeapZiplinegun_C.ExecuteUbergraph_WeapZiplinegun //  // @ game+0x43bab4
};

