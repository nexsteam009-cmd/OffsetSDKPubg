// BlueprintGeneratedClass WeapCrossbow.WeapCrossbow_1_C
// Size: 0x1513 (Inherited: 0x1500)  [layout: KHOP]
struct AWeapCrossbow_1_C : ADefaultRifleSetting_C {
	struct F*467c63d8f7 UberGraphFrame; // 0x1500(0x10)
	enum class ENUM_CrossbowState CurrentState; // 0x1510(0x01)
	enum class ENUM_CrossbowState LastState; // 0x1511(0x01)
	bool bWantsToReload; // 0x1512(0x01)

	void UserConstructionScript(); // Function WeapCrossbow.WeapCrossbow_1_C.UserConstructionScript //  // @ game+0x43bab4
	void ServerSetAmmoState(); // Function WeapCrossbow.WeapCrossbow_1_C.ServerSetAmmoState //  // @ game+0x43bab4
	int32 ExecuteUbergraph_WeapCrossbow(); // Function WeapCrossbow.WeapCrossbow_1_C.ExecuteUbergraph_WeapCrossbow //  // @ game+0x43bab4
};

