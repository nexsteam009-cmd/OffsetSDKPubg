// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision,
	FirstFrameCollision,
	EachFrameCollision,
	EFlipbookCollisionMode_MAX,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left,
	Top_Center,
	Top_Right,
	Center_Left,
	Center_Center,
	Center_Right,
	Bottom_Left,
	Bottom_Center,
	Bottom_Right,
	Custom,
	ESpritePivotMode_MAX,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox,
	TightBoundingBox,
	ShrinkWrapped,
	FullyCustom,
	Diced,
	ESpritePolygonMode_MAX,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box,
	Circle,
	Polygon,
	ESpriteShapeType_MAX,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None,
	Use2DPhysics,
	Use3DPhysics,
	ESpriteCollisionMode_MAX,
};

// Enum Paper2D.*4702eaff57
enum class *4702eaff57 : uint8 {
	*620eeb5004,
	*4dfd724cac,
	*51399c48fa,
	*4702eaff57_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// ScriptStruct Paper2D.*50a8db6895
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*50a8db6895 {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32 *ddec243a02; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*b14cb2d1aa
// Size: 0x50 (Inherited: 0x00)  [layout: KHOP]
struct F*b14cb2d1aa {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* *07014416bb; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32 MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.*ea6d8a0e91
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ea6d8a0e91 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode *5881e8357c; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *1daf7eace0; // 0x14(0x04)
	int32 *5cdb09b5cc; // 0x18(0x04)
	bool *84197aeff4; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *0cc5c1ec86; // 0x20(0x04)
	float *615f1788aa; // 0x24(0x04)
	float *19ea784262; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D *a91a8bfa3f; // 0x18(0x08)
	struct FVector2D *45e226bfd8; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool *7846f93b58; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.*bb24e6b93a
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bb24e6b93a {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.*7d5794e32d
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*7d5794e32d {
	struct UPaperSprite* *bc9da6f4ea; // 0x00(0x20)
	int32 *9cf22c6e99; // 0x20(0x04)
	int32 X; // 0x24(0x04)
	int32 Y; // 0x28(0x04)
	int32 Width; // 0x2c(0x04)
	int32 Height; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*fb7619f2b8
// Size: 0xd0 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fb7619f2b8 {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.*ea53f4fa70
// Size: 0x38 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*ea53f4fa70 {
	struct UPaperSprite* *abfe134178; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* *a75323309a; // 0x18(0x08)
	float *bc2b03c52f; // 0x20(0x04)
	float *465cefff24; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *4d5658ae5b; // 0x2c(0x04)
	int32 DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*bafdac113f
// Size: 0x10 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*bafdac113f {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32 *18be68c6bf; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*0d626724e4
// Size: 0x10 (Inherited: 0x00)  [layout: KHOP]
struct F*0d626724e4 {
	int32 Left; // 0x00(0x04)
	int32 Top; // 0x04(0x04)
	int32 Right; // 0x08(0x04)
	int32 Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*fbca29bc66
// Size: 0x18 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*fbca29bc66 {
	struct FString *1856440740; // 0x00(0x10)
	int32 *4d35db5a6d; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.*728fc8e163
// Size: 0x40 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct F*728fc8e163 {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	bool *5dd240b356[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

