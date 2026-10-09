// Class WebBrowserWidget.WebBrowser
// Size: 0x350 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x130(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x140(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FMulticastDelegate OnMessageReceived; // 0x1e0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1f0(0x10)
	struct FString InitialURL; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)
	bool bSupportsTransparency; // 0x220(0x01)
	bool bAudioSpatialization; // 0x221(0x01)
	bool bQRCodeTracking; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FBox2D QRCodeTrackingArea; // 0x224(0x14)
	bool bBindThisAsDefaultUObject; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USoundClass* SoundClass; // 0x240(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	char pad_250[0x100]; // 0x250(0x100)

	void SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage //  // @ game+0xfacdd24
	void GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl //  // @ game+0xfacd660
	void SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking //  // @ game+0xfacf21c
	void EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME //  // @ game+0xfacd39c
	void OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature //  // @ game+0x43bab4
	void UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject //  // @ game+0xfacf2c8
	void AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn //  // @ game+0xfacbe00
	void OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature //  // @ game+0x43bab4
	void SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch //  // @ game+0xfacdf34
	void BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject //  // @ game+0xfacd1d0
	void AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut //  // @ game+0xfacc808
	void SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted //  // @ game+0xfacde9c
	void OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature //  // @ game+0x43bab4
	void LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString //  // @ game+0xfacd858
	void OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature //  // @ game+0x43bab4
	void SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume //  // @ game+0xface8a8
	void OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature //  // @ game+0x43bab4
	void ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript //  // @ game+0xfacd418
	void LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL //  // @ game+0xfacdb74
	void GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText //  // @ game+0xfacd5b0
	void IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted //  // @ game+0xfacd804
};

