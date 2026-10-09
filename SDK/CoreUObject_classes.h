// Class CoreUObject.Object
// Size: 0x30 (Inherited: 0x00)  [layout: LECH - offset chi la uoc luong]
struct UObject {
	char pad_0[0x30]; // 0x00(0x30)

	void ExecuteUbergraph(); // Function CoreUObject.Object.ExecuteUbergraph //  // @ game+0x43bab4
};

// Class CoreUObject.Interface
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UInterface : UObject {
};

// Class CoreUObject.GCObjectReferencer
// Size: 0x68 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UGCObjectReferencer : UObject {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class CoreUObject.TextBuffer
// Size: 0x58 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UTextBuffer : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class CoreUObject.Field
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UField : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class CoreUObject.Struct
// Size: 0xe8 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UStruct : UField {
	char pad_38[0xb0]; // 0x38(0xb0)
};

// Class CoreUObject.ScriptStruct
// Size: 0xf8 (Inherited: 0xe8)  [layout: LECH - offset chi la uoc luong]
struct UScriptStruct : UStruct {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class CoreUObject.Package
// Size: 0x158 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPackage : UObject {
	char pad_30[0x128]; // 0x30(0x128)
};

// Class CoreUObject.Class
// Size: 0x2b8 (Inherited: 0xe8)  [layout: LECH - offset chi la uoc luong]
struct UClass : UStruct {
	char pad_E8[0x1d0]; // 0xe8(0x1d0)
};

// Class CoreUObject.Function
// Size: 0x138 (Inherited: 0xe8)  [layout: LECH - offset chi la uoc luong]
struct UFunction : UStruct {
	char pad_E8[0x50]; // 0xe8(0x50)
};

// Class CoreUObject.DelegateFunction
// Size: 0x138 (Inherited: 0x138)  [layout: KHOP]
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.DynamicClass
// Size: 0x320 (Inherited: 0x2b8)  [layout: LECH - offset chi la uoc luong]
struct UDynamicClass : UClass {
	char pad_2B8[0x68]; // 0x2b8(0x68)
};

// Class CoreUObject.PackageMap
// Size: 0xe8 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UPackageMap : UObject {
	char pad_30[0xb8]; // 0x30(0xb8)
};

// Class CoreUObject.Enum
// Size: 0x78 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UEnum : UField {
	char pad_38[0x40]; // 0x38(0x40)
};

// Class CoreUObject.Property
// Size: 0x90 (Inherited: 0x38)  [layout: LECH - offset chi la uoc luong]
struct UProperty : UField {
	char pad_38[0x58]; // 0x38(0x58)
};

// Class CoreUObject.EnumProperty
// Size: 0xa0 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UEnumProperty : UProperty {
	char pad_90[0x10]; // 0x90(0x10)
};

// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x458 (Inherited: 0x2b8)  [layout: LECH - offset chi la uoc luong]
struct ULinkerPlaceholderClass : UClass {
	char pad_2B8[0x1a0]; // 0x2b8(0x1a0)
};

// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xe0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct ULinkerPlaceholderExportObject : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};

// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x2d8 (Inherited: 0x138)  [layout: LECH - offset chi la uoc luong]
struct ULinkerPlaceholderFunction : UFunction {
	char pad_138[0x1a0]; // 0x138(0x1a0)
};

// Class CoreUObject.MetaData
// Size: 0xd0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UMetaData : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

// Class CoreUObject.ObjectRedirector
// Size: 0x38 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct UObjectRedirector : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class CoreUObject.ArrayProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UArrayProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.ObjectPropertyBase
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UObjectPropertyBase : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.AssetObjectProperty
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct UAssetObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.AssetClassProperty
// Size: 0xa0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct UAssetClassProperty : UAssetObjectProperty {
	char pad_98[0x8]; // 0x98(0x08)
};

// Class CoreUObject.BoolProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UBoolProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.NumericProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UByteProperty : UNumericProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.ObjectProperty
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
// Size: 0xa0 (Inherited: 0x98)  [layout: LECH - offset chi la uoc luong]
struct UClassProperty : UObjectProperty {
	char pad_98[0x8]; // 0x98(0x08)
};

// Class CoreUObject.DelegateProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UDelegateProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.DoubleProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int16Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.Int8Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UInterfaceProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.LazyObjectProperty
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
// Size: 0xc8 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UMapProperty : UProperty {
	char pad_90[0x38]; // 0x90(0x38)
};

// Class CoreUObject.MulticastDelegateProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UMulticastDelegateProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.NameProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UNameProperty : UProperty {
};

// Class CoreUObject.EncryptedObjectProperty
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct UEncryptedObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SetProperty
// Size: 0xb8 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct USetProperty : UProperty {
	char pad_90[0x28]; // 0x90(0x28)
};

// Class CoreUObject.StrProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
// Size: 0x98 (Inherited: 0x90)  [layout: LECH - offset chi la uoc luong]
struct UStructProperty : UProperty {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class CoreUObject.UInt16Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
// Size: 0x98 (Inherited: 0x98)  [layout: KHOP]
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
// Size: 0x90 (Inherited: 0x90)  [layout: KHOP]
struct UTextProperty : UProperty {
};

