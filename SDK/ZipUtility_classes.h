// Class ZipUtility.*08ddfe1f48
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*08ddfe1f48 : UInterface {

	void OnDone(); // Function ZipUtility.*08ddfe1f48.OnDone //  // @ game+0xf631700
	void OnProgress(); // Function ZipUtility.*08ddfe1f48.OnProgress //  // @ game+0xf631b9c
	void OnFileFound(); // Function ZipUtility.*08ddfe1f48.OnFileFound //  // @ game+0xf6318b8
	void OnStartProcess(); // Function ZipUtility.*08ddfe1f48.OnStartProcess //  // @ game+0xf6325e4
	void OnFileDone(); // Function ZipUtility.*08ddfe1f48.OnFileDone //  // @ game+0xf62b2f8
};

// Class ZipUtility.*45889c4506
// Size: 0x78 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*45889c4506 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class *4d0dfe6670 CompressionFormat; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString file; // 0x40(0x10)
	struct FString DestinationFolder; // 0x50(0x10)
	int32 *23683aecb6; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UObject* *d462fc2bd2; // 0x68(0x08)
	bool *b57ae1edad; // 0x70(0x01)
	bool *d18967a451; // 0x71(0x01)
	bool *cea8c20cf4; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// Class ZipUtility.*ee0e9b8dc1
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*ee0e9b8dc1 : UBlueprintFunctionLibrary {

	void *c38298f9a3(); // Function ZipUtility.*ee0e9b8dc1.*c38298f9a3 //  // @ game+0xf632c84
	void *e022cd5bea(); // Function ZipUtility.*ee0e9b8dc1.*e022cd5bea //  // @ game+0xf631518
	void *77e84b70a0(); // Function ZipUtility.*ee0e9b8dc1.*77e84b70a0 //  // @ game+0xf63279c
	void *73dbe8ac2d(); // Function ZipUtility.*ee0e9b8dc1.*73dbe8ac2d //  // @ game+0xf6333f0
	void *ab47215be8(); // Function ZipUtility.*ee0e9b8dc1.*ab47215be8 //  // @ game+0xf633854
	void Zip(); // Function ZipUtility.*ee0e9b8dc1.Zip //  // @ game+0xf633b90
	void *0092132493(); // Function ZipUtility.*ee0e9b8dc1.*0092132493 //  // @ game+0xf632978
	void *35e4fb6c3e(); // Function ZipUtility.*ee0e9b8dc1.*35e4fb6c3e //  // @ game+0xf6330b8
};

// Class ZipUtility.*cf98d35abc
// Size: 0xe0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*cf98d35abc : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
};

