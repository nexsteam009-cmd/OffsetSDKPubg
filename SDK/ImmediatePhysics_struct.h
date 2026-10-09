// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// Size: 0x350 (Inherited: 0xf8)  [layout: LECH - offset chi la uoc luong]
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xf8(0x08)
	struct FVector OverrideWorldGravity; // 0x100(0x0c)
	enum class ECollisionChannel OverlapChannel; // 0x10c(0x01)
	bool bEnableWorldGeometry; // 0x10d(0x01)
	bool bComponentSpaceSimulation; // 0x10e(0x01)
	bool bOverrideWorldGravity; // 0x10f(0x01)
	float CachedBoundsScale; // 0x110(0x04)
	char pad_114[0x23c]; // 0x114(0x23c)
};

