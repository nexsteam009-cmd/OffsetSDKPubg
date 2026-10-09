// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x130 (Inherited: 0x30)  [layout: KHOP]
struct UWidget : UVisual {
	bool bIsVariable; // 0x30(0x01)
	bool bCreatedByConstructionScript; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UPanelSlot* Slot; // 0x38(0x08)
	bool bIsEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	DelegateProperty bIsEnabledDelegate; // 0x48(0x10)
	DelegateProperty OnPrepass; // 0x58(0x10)
	struct FText ToolTipText; // 0x68(0x18)
	DelegateProperty ToolTipTextDelegate; // 0x80(0x10)
	struct UWidget* ToolTipWidget; // 0x90(0x08)
	DelegateProperty ToolTipWidgetDelegate; // 0x98(0x10)
	enum class ESlateVisibility Visiblity; // 0xa8(0x01)
	enum class ESlateVisibility Visibility; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	DelegateProperty VisibilityDelegate; // 0xb0(0x10)
	char bOverride_Cursor : 1; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class EMouseCursor Cursor; // 0xc4(0x01)
	bool bIsVolatile; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	struct FWidgetTransform RenderTransform; // 0xc8(0x1c)
	struct FVector2D RenderTransformPivot; // 0xe4(0x08)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UWidgetNavigation* Navigation; // 0xf0(0x08)
	char pad_F8[0x28]; // 0xf8(0x28)
	struct TArray<struct U*10b4e1d7c6*> NativeBindings; // 0x120(0x10)

	void IsHovered(); // Function UMG.Widget.IsHovered //  // @ game+0xec0f46c
	void GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature //  // @ game+0x43bab4
	void SetRenderTranslation(); // Function UMG.Widget.SetRenderTranslation //  // @ game+0xec13a5c
	void SetRenderAngle(); // Function UMG.Widget.SetRenderAngle //  // @ game+0xec12f70
	void SetRenderShear(); // Function UMG.Widget.SetRenderShear //  // @ game+0xec13964
	void HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants //  // @ game+0xec0ecf0
	void ResetCursor(); // Function UMG.Widget.ResetCursor //  // @ game+0xec11830
	void SetCursor(); // Function UMG.Widget.SetCursor //  // @ game+0xec11df4
	void SetIsEnabled(); // Function UMG.Widget.SetIsEnabled //  // @ game+0xec120dc
	void SetAllNavigationRules(); // Function UMG.Widget.SetAllNavigationRules //  // @ game+0xec11cbc
	void SetNavigationRule(); // Function UMG.Widget.SetNavigationRule //  // @ game+0xec12170
	void GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature //  // @ game+0x43bab4
	void GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature //  // @ game+0x43bab4
	void GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature //  // @ game+0x43bab4
	void ForceMouseLeave(); // Function UMG.Widget.ForceMouseLeave //  // @ game+0xec0e460
	void HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus //  // @ game+0xec0ec44
	void IsVisible(); // Function UMG.Widget.IsVisible //  // @ game+0xec0f644
	void SetToolTipText(); // Function UMG.Widget.SetToolTipText //  // @ game+0xec13b58
	void GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature //  // @ game+0x43bab4
	void GenerateWidgetForObject__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature //  // @ game+0x43bab4
	void SetRenderScale(); // Function UMG.Widget.SetRenderScale //  // @ game+0xec138e4
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility //  // @ game+0xec0f370
	void ForceVolatile(); // Function UMG.Widget.ForceVolatile //  // @ game+0xec0e474
	void GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature //  // @ game+0x43bab4
	void SetVisibility(); // Function UMG.Widget.SetVisibility //  // @ game+0x1111e4c
	void EventForWidget__DelegateSignature(); // DelegateFunction UMG.Widget.EventForWidget__DelegateSignature //  // @ game+0x43bab4
	void OnPointerEvent__DelegateSignature(); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature //  // @ game+0x43bab4
	void GetParent(); // Function UMG.Widget.GetParent //  // @ game+0xec0e820
	void SetRenderTransform(); // Function UMG.Widget.SetRenderTransform //  // @ game+0xef4fb8
	void HasMouseCapture(); // Function UMG.Widget.HasMouseCapture //  // @ game+0xec0ee24
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus //  // @ game+0xec1215c
	void GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature //  // @ game+0x43bab4
	void HasUserFocus(); // Function UMG.Widget.HasUserFocus //  // @ game+0xec0eebc
	void GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature //  // @ game+0x43bab4
	void GetIsEnabled(); // Function UMG.Widget.GetIsEnabled //  // @ game+0xec0e650
	void HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus //  // @ game+0xec0ed88
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass //  // @ game+0xec0e44c
	void HasUserFocusedDescendants(); // Function UMG.Widget.HasUserFocusedDescendants //  // @ game+0xec0f124
	void GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature //  // @ game+0x43bab4
	void OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature //  // @ game+0x43bab4
	void GetDesiredSize(); // Function UMG.Widget.GetDesiredSize //  // @ game+0xec0e620
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent //  // @ game+0xdb87190
	void SetRenderTransformPivot(); // Function UMG.Widget.SetRenderTransformPivot //  // @ game+0xec139e4
	void SetUserFocus(); // Function UMG.Widget.SetUserFocus //  // @ game+0xec13c14
	void SetToolTip(); // Function UMG.Widget.SetToolTip //  // @ game+0xec13adc
	void GetVisibility(); // Function UMG.Widget.GetVisibility //  // @ game+0xec0eaac
	void GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry //  // @ game+0xec0e5f4
	void GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature //  // @ game+0x43bab4
	void GenerateWidgetForString__DelegateSignature(); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature //  // @ game+0x43bab4
	void GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer //  // @ game+0xec0e7d4
	void GetOuterUserWidget(); // Function UMG.Widget.GetOuterUserWidget //  // @ game+0xec0e78c
	void GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature //  // @ game+0x43bab4
};

// Class UMG.UserWidget
// Size: 0x258 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UUserWidget : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct FLinearColor ColorAndOpacity; // 0x138(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x148(0x10)
	struct FSlateColor ForegroundColor; // 0x158(0x28)
	DelegateProperty ForegroundColorDelegate; // 0x180(0x10)
	struct FMargin Padding; // 0x190(0x10)
	bool bSupportsKeyboardFocus; // 0x1a0(0x01)
	bool bIsFocusable; // 0x1a1(0x01)
	char pad_1A2[0x6]; // 0x1a2(0x06)
	struct TArray<struct U*09a14a51ac*> ActiveSequencePlayers; // 0x1a8(0x10)
	struct TArray<struct U*09a14a51ac*> StoppedSequencePlayers; // 0x1b8(0x10)
	bool bStopAction; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32 Priority; // 0x1cc(0x04)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1d0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1e0(0x08)
	char bCanEverTick : 1; // 0x1e8(0x01)
	char bCanEverPaint : 1; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	char bCookedWidgetTree : 1; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct U*5ed7932f40* InputComponent; // 0x1f8(0x08)
	char pad_200[0x58]; // 0x200(0x58)

	void AddToPlayerScreen(); // Function UMG.UserWidget.AddToPlayerScreen //  // @ game+0xec0dda4
	void IsInViewport(); // Function UMG.UserWidget.IsInViewport //  // @ game+0xec0e674
	void OnPreviewKeyDown(); // Function UMG.UserWidget.OnPreviewKeyDown //  // @ game+0x43bab4
	void SetInputActionPriority(); // Function UMG.UserWidget.SetInputActionPriority //  // @ game+0xec1205c
	void PlayAnimation(); // Function UMG.UserWidget.PlayAnimation //  // @ game+0x131ab44
	void FinishStoppedSequencePlayers(); // Function UMG.UserWidget.FinishStoppedSequencePlayers //  // @ game+0xec0e438
	void OnDragOver(); // Function UMG.UserWidget.OnDragOver //  // @ game+0x43bab4
	void SetInputActionBlocking(); // Function UMG.UserWidget.SetInputActionBlocking //  // @ game+0xec11fc8
	void OnDragDetected(); // Function UMG.UserWidget.OnDragDetected //  // @ game+0x43bab4
	void PlaySound(); // Function UMG.UserWidget.PlaySound //  // @ game+0xec11784
	void OnMouseButtonDoubleClick(); // Function UMG.UserWidget.OnMouseButtonDoubleClick //  // @ game+0x43bab4
	void IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation //  // @ game+0xec0f450
	void OnControllerButtonReleased(); // Function UMG.UserWidget.OnControllerButtonReleased //  // @ game+0x43bab4
	void GetOwningLocalPlayer(); // Function UMG.UserWidget.GetOwningLocalPlayer //  // @ game+0xec0e7b0
	void OnMouseLeave(); // Function UMG.UserWidget.OnMouseLeave //  // @ game+0x43bab4
	void OnMouseMove(); // Function UMG.UserWidget.OnMouseMove //  // @ game+0x43bab4
	void SetForegroundColor(); // Function UMG.UserWidget.SetForegroundColor //  // @ game+0xec11ee8
	void OnDrop(); // Function UMG.UserWidget.OnDrop //  // @ game+0x43bab4
	void SetPositionInViewport(); // Function UMG.UserWidget.SetPositionInViewport //  // @ game+0xec12eb8
	void OnKeyUp(); // Function UMG.UserWidget.OnKeyUp //  // @ game+0x43bab4
	void OnAnalogValueChanged(); // Function UMG.UserWidget.OnAnalogValueChanged //  // @ game+0x43bab4
	void OnMouseWheel(); // Function UMG.UserWidget.OnMouseWheel //  // @ game+0x43bab4
	void SetOwningPlayer(); // Function UMG.UserWidget.SetOwningPlayer //  // @ game+0xec123e4
	void OnMotionDetected(); // Function UMG.UserWidget.OnMotionDetected //  // @ game+0x43bab4
	void OnKeyDown(); // Function UMG.UserWidget.OnKeyDown //  // @ game+0x43bab4
	void OnMouseButtonDown(); // Function UMG.UserWidget.OnMouseButtonDown //  // @ game+0x43bab4
	void SetPadding(); // Function UMG.UserWidget.SetPadding //  // @ game+0xec1247c
	void OnKeyChar(); // Function UMG.UserWidget.OnKeyChar //  // @ game+0x43bab4
	void PreConstruct(); // Function UMG.UserWidget.PreConstruct //  // @ game+0x43bab4
	void OnPreviewMouseButtonDown(); // Function UMG.UserWidget.OnPreviewMouseButtonDown //  // @ game+0x43bab4
	void OnDragLeave(); // Function UMG.UserWidget.OnDragLeave //  // @ game+0x43bab4
	void StopAnimation(); // Function UMG.UserWidget.StopAnimation //  // @ game+0xec13dbc
	void SetAlignmentInViewport(); // Function UMG.UserWidget.SetAlignmentInViewport //  // @ game+0xec11c44
	void OnControllerButtonPressed(); // Function UMG.UserWidget.OnControllerButtonPressed //  // @ game+0x43bab4
	void OnTouchEnded(); // Function UMG.UserWidget.OnTouchEnded //  // @ game+0x43bab4
	void ReverseAnimation(); // Function UMG.UserWidget.ReverseAnimation //  // @ game+0xec11844
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport //  // @ game+0xdb87190
	void OnFocusReceived(); // Function UMG.UserWidget.OnFocusReceived //  // @ game+0x43bab4
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent //  // @ game+0xec1181c
	void OnControllerAnalogValueChanged(); // Function UMG.UserWidget.OnControllerAnalogValueChanged //  // @ game+0x43bab4
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations //  // @ game+0xec13da8
	void OnAnimationFinished(); // Function UMG.UserWidget.OnAnimationFinished //  // @ game+0xc81330
	void IsInteractable(); // Function UMG.UserWidget.IsInteractable //  // @ game+0x43bab4
	void StopListeningForInputAction(); // Function UMG.UserWidget.StopListeningForInputAction //  // @ game+0xec13e78
	void OnDragEnter(); // Function UMG.UserWidget.OnDragEnter //  // @ game+0x43bab4
	void PauseAnimation(); // Function UMG.UserWidget.PauseAnimation //  // @ game+0xec0fa68
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent //  // @ game+0xec13f38
	void OnFocusLost(); // Function UMG.UserWidget.OnFocusLost //  // @ game+0x43bab4
	void GetAnimationCurrentTime(); // Function UMG.UserWidget.GetAnimationCurrentTime //  // @ game+0xec0e534
	void AddToViewport(); // Function UMG.UserWidget.AddToViewport //  // @ game+0xec0de2c
	void GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport //  // @ game+0xec0e4f0
	void Construct(); // Function UMG.UserWidget.Construct //  // @ game+0x43bab4
	void GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport //  // @ game+0xec0e518
	void GetOwningPlayer(); // Function UMG.UserWidget.GetOwningPlayer //  // @ game+0xec0e7d4
	void SetDesiredSizeInViewport(); // Function UMG.UserWidget.SetDesiredSizeInViewport //  // @ game+0xec11e70
	void OnMouseButtonUp(); // Function UMG.UserWidget.OnMouseButtonUp //  // @ game+0x43bab4
	void SetAnchorsInViewport(); // Function UMG.UserWidget.SetAnchorsInViewport //  // @ game+0xec11d74
	void OnTouchMoved(); // Function UMG.UserWidget.OnTouchMoved //  // @ game+0x43bab4
	void ListenForInputAction(); // Function UMG.UserWidget.ListenForInputAction //  // @ game+0xec0f668
	void OnMouseEnter(); // Function UMG.UserWidget.OnMouseEnter //  // @ game+0x43bab4
	void SetNumLoopsToPlay(); // Function UMG.UserWidget.SetNumLoopsToPlay //  // @ game+0xec12260
	void GetWidgetComponent(); // Function UMG.UserWidget.GetWidgetComponent //  // @ game+0xec0ead0
	void GetIsVisible(); // Function UMG.UserWidget.GetIsVisible //  // @ game+0xec0e674
	void OnTouchStarted(); // Function UMG.UserWidget.OnTouchStarted //  // @ game+0x43bab4
	void Destruct(); // Function UMG.UserWidget.Destruct //  // @ game+0x43bab4
	void OnAnimationStarted(); // Function UMG.UserWidget.OnAnimationStarted //  // @ game+0xc81664
	void GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn //  // @ game+0xec0e7fc
	void OnTouchGesture(); // Function UMG.UserWidget.OnTouchGesture //  // @ game+0x43bab4
	void PlayAnimationTo(); // Function UMG.UserWidget.PlayAnimationTo //  // @ game+0xec0fb40
	void IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying //  // @ game+0xec0f450
	void OnPaint(); // Function UMG.UserWidget.OnPaint //  // @ game+0x43bab4
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions //  // @ game+0xec13e64
	void SetOwningLocalPlayer(); // Function UMG.UserWidget.SetOwningLocalPlayer //  // @ game+0xec1234c
	void SetPlaybackSpeed(); // Function UMG.UserWidget.SetPlaybackSpeed //  // @ game+0xec12508
	void IsListeningForInputAction(); // Function UMG.UserWidget.IsListeningForInputAction //  // @ game+0xec0f490
	void Tick(); // Function UMG.UserWidget.Tick //  // @ game+0x43bab4
	void SetColorAndOpacity(); // Function UMG.UserWidget.SetColorAndOpacity //  // @ game+0x37ff34
	void IsAnimationPlaying(); // Function UMG.UserWidget.IsAnimationPlaying //  // @ game+0xec0f384
	void OnDragCancelled(); // Function UMG.UserWidget.OnDragCancelled //  // @ game+0x43bab4
};

// Class UMG.PanelWidget
// Size: 0x148 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	void GetChildAt(); // Function UMG.PanelWidget.GetChildAt //  // @ game+0xec17578
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren //  // @ game+0xec155ac
	void HasChild(); // Function UMG.PanelWidget.HasChild //  // @ game+0xec19780
	void RemoveChildAt(); // Function UMG.PanelWidget.RemoveChildAt //  // @ game+0xec1aa2c
	void GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount //  // @ game+0xec17688
	void RemoveChild(); // Function UMG.PanelWidget.RemoveChild //  // @ game+0xec1a9a4
	void GetChildIndex(); // Function UMG.PanelWidget.GetChildIndex //  // @ game+0xec17600
	void HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren //  // @ game+0xec19764
	void AddChild(); // Function UMG.PanelWidget.AddChild //  // @ game+0xec143bc
};

// Class UMG.ContentWidget
// Size: 0x148 (Inherited: 0x148)  [layout: KHOP]
struct UContentWidget : UPanelWidget {

	void GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot //  // @ game+0xec176cc
	void GetContent(); // Function UMG.ContentWidget.GetContent //  // @ game+0xec176a0
	void SetContent(); // Function UMG.ContentWidget.SetContent //  // @ game+0xec1d340
};

// Class UMG.Button
// Size: 0x480 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x148(0x08)
	struct FButtonStyle WidgetStyle; // 0x150(0x2a8)
	struct FLinearColor ColorAndOpacity; // 0x3f8(0x10)
	struct FLinearColor BackgroundColor; // 0x408(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x418(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x419(0x01)
	bool IsFocusable; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct FMulticastDelegate OnClicked; // 0x420(0x10)
	struct FMulticastDelegate OnPressed; // 0x430(0x10)
	struct FMulticastDelegate OnReleased; // 0x440(0x10)
	struct FMulticastDelegate OnHovered; // 0x450(0x10)
	struct FMulticastDelegate OnUnhovered; // 0x460(0x10)
	char pad_470[0x10]; // 0x470(0x10)

	void SetColorAndOpacity(); // Function UMG.Button.SetColorAndOpacity //  // @ game+0xec1d158
	void SetStyle(); // Function UMG.Button.SetStyle //  // @ game+0xec2f3ac
	void IsPressed(); // Function UMG.Button.IsPressed //  // @ game+0xec199bc
	void SetBackgroundColor(); // Function UMG.Button.SetBackgroundColor //  // @ game+0xec1c7a4
};

// Class UMG.EditableText
// Size: 0x4c0 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UEditableText : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FText HintText; // 0x158(0x18)
	DelegateProperty HintTextDelegate; // 0x170(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x3d0(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x3d8(0x08)
	struct USlateBrushAsset* CaretImage; // 0x3e0(0x08)
	struct FSlateFontInfo Font; // 0x3e8(0x68)
	struct FSlateColor ColorAndOpacity; // 0x450(0x28)
	bool IsReadOnly; // 0x478(0x01)
	bool IsPassword; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	float MinimumDesiredWidth; // 0x47c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x480(0x01)
	bool SelectAllTextWhenFocused; // 0x481(0x01)
	bool RevertTextOnEscape; // 0x482(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x483(0x01)
	bool SelectAllTextOnCommit; // 0x484(0x01)
	bool AllowContextMenu; // 0x485(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x486(0x01)
	char pad_487[0x1]; // 0x487(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x488(0x08)
	struct FMulticastDelegate OnTextChanged; // 0x490(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x4a0(0x10)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void OnEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetText(); // Function UMG.EditableText.SetText //  // @ game+0xec2f458
	void SetIsPassword(); // Function UMG.EditableText.SetIsPassword //  // @ game+0xec2064c
	void OnEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void GetText(); // Function UMG.EditableText.GetText //  // @ game+0xec19218
	void SetHintText(); // Function UMG.EditableText.SetHintText //  // @ game+0xec1f1b8
	void SetIsReadOnly(); // Function UMG.EditableText.SetIsReadOnly //  // @ game+0xec206f4
};

// Class UMG.DragDropOperation
// Size: 0x90 (Inherited: 0x30)  [layout: KHOP]
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FVector2D Offset; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMulticastDelegate OnDrop; // 0x60(0x10)
	struct FMulticastDelegate OnDragCancelled; // 0x70(0x10)
	struct FMulticastDelegate OnDragged; // 0x80(0x10)

	void Drop(); // Function UMG.DragDropOperation.Drop //  // @ game+0xec0e1f4
	void Dragged(); // Function UMG.DragDropOperation.Dragged //  // @ game+0xec0e128
	void DragCancelled(); // Function UMG.DragDropOperation.DragCancelled //  // @ game+0xec0e05c
};

// Class UMG.WidgetSwitcher
// Size: 0x160 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UWidgetSwitcher : UPanelWidget {
	int32 ActiveWidgetIndex; // 0x148(0x04)
	char pad_14C[0x14]; // 0x14c(0x14)

	void GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex //  // @ game+0xec16cd4
	void GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets //  // @ game+0xec18c90
	void GetWidgetAtIndex(); // Function UMG.WidgetSwitcher.GetWidgetAtIndex //  // @ game+0xec17578
	void SetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex //  // @ game+0x135aa0c
	void SetActiveWidget(); // Function UMG.WidgetSwitcher.SetActiveWidget //  // @ game+0xec1b92c
};

// Class UMG.WidgetComponent
// Size: 0xca0 (Inherited: 0xae0)  [layout: KHOP]
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace *2e3dc0d9b2; // 0xad8(0x01)
	enum class EWidgetTimingPolicy *0b7639ddf0; // 0xad9(0x01)
	struct UClass* WidgetClass; // 0xae0(0x08)
	struct FIntPoint DrawSize; // 0xae8(0x08)
	bool *3fbad63142; // 0xaf0(0x01)
	bool *f00e6ef0a1; // 0xaf1(0x01)
	char pad_AF2[0x2]; // 0xaf2(0x02)
	float *8f15cfcf05; // 0xaf4(0x04)
	char pad_AF8[0x8]; // 0xaf8(0x08)
	struct FIntPoint *16d0501983; // 0xb00(0x08)
	bool *5663549a16; // 0xb08(0x01)
	char pad_B09[0x3]; // 0xb09(0x03)
	struct FVector2D Pivot; // 0xb0c(0x08)
	bool *45e6caee37; // 0xb14(0x01)
	bool *07b3cfb640; // 0xb15(0x01)
	char pad_B16[0x2]; // 0xb16(0x02)
	struct ULocalPlayer* *5db6043595; // 0xb18(0x08)
	struct FLinearColor BackgroundColor; // 0xb20(0x10)
	struct FLinearColor TintColorAndOpacity; // 0xb30(0x10)
	float OpacityFromTexture; // 0xb40(0x04)
	enum class EWidgetBlendMode BlendMode; // 0xb44(0x01)
	bool bIsTwoSided; // 0xb45(0x01)
	bool *1b6ac7ede0; // 0xb46(0x01)
	char pad_B47[0x1]; // 0xb47(0x01)
	struct UUserWidget* Widget; // 0xb48(0x08)
	char pad_B50[0x20]; // 0xb50(0x20)
	struct UBodySetup* BodySetup; // 0xb70(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0xb78(0x08)
	struct UMaterialInterface* *431a6526b6; // 0xb80(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0xb88(0x08)
	struct UMaterialInterface* *0ace798ce2; // 0xb90(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0xb98(0x08)
	struct UMaterialInterface* *f5f08f53f6; // 0xba0(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0xba8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0xbb0(0x08)
	bool *e7127f8920; // 0xbb8(0x01)
	bool *f794ecc746; // 0xbb9(0x01)
	char pad_BBA[0x6]; // 0xbba(0x06)
	struct FName *2bcbd09d30; // 0xbc0(0x08)
	int32 *b113625a14; // 0xbc8(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0xbcc(0x01)
	char pad_BCD[0x3]; // 0xbcd(0x03)
	float CylinderArcAngle; // 0xbd0(0x04)
	char pad_BD4[0x24]; // 0xbd4(0x24)
	struct FVector2D FixedScreenSize; // 0xbf8(0x08)
	enum class EWidgetForcedLOD ForcedLOD; // 0xc00(0x01)
	bool bUseLOD; // 0xc01(0x01)
	bool bAutoSetFixedScreenSize; // 0xc02(0x01)
	char pad_C03[0x5]; // 0xc03(0x05)
	struct TArray<float> LODScreenSizes; // 0xc08(0x10)
	float LODUpdateInterval; // 0xc18(0x04)
	float LODNextUpdateTime; // 0xc1c(0x04)
	float LODLastScreenSize; // 0xc20(0x04)
	float LODScale; // 0xc24(0x04)
	float *8593411aa8; // 0xc28(0x04)
	bool bShouldRenderWidget; // 0xc2c(0x01)
	bool bAlwaysVisibleWidget; // 0xc2d(0x01)
	char pad_C2E[0x2]; // 0xc2e(0x02)
	struct TMap<struct UPrimitiveComponent*, struct UMaterialInstanceDynamic*> *b6fe9dd5d6; // 0xc30(0x50)
	struct TArray<struct UMeshComponent*> *0055c9aad9; // 0xc80(0x10)
	struct UTextureRenderTarget2D* OverrideRenderTarget; // 0xc90(0x08)
	struct USceneComponent* *3017617a8f; // 0xc98(0x08)

	void *8add2bb18a(); // Function UMG.WidgetComponent.*8add2bb18a //  // @ game+0xec17a1c
	void *398063746d(); // Function UMG.WidgetComponent.*398063746d //  // @ game+0xec1e66c
	void *6afea7e3da(); // Function UMG.WidgetComponent.*6afea7e3da //  // @ game+0xec1aca4
	void *f119aed741(); // Function UMG.WidgetComponent.*f119aed741 //  // @ game+0xec17710
	void *f5fa0679f9(); // Function UMG.WidgetComponent.*f5fa0679f9 //  // @ game+0xec1c824
	void *54c84a3853(); // Function UMG.WidgetComponent.*54c84a3853 //  // @ game+0xec1d57c
	void *ed5eada159(); // Function UMG.WidgetComponent.*ed5eada159 //  // @ game+0xec17188
	void *b9dbac88b2(); // Function UMG.WidgetComponent.*b9dbac88b2 //  // @ game+0xec31cf0
	void *4cbe3c1f82(); // Function UMG.WidgetComponent.*4cbe3c1f82 //  // @ game+0xec1d8f8
	void *0b2eed5393(); // Function UMG.WidgetComponent.*0b2eed5393 //  // @ game+0xec178a8
	void *e634db0f21(); // Function UMG.WidgetComponent.*e634db0f21 //  // @ game+0xec18f88
	void *49120e4278(); // Function UMG.WidgetComponent.*49120e4278 //  // @ game+0xec14fcc
	void *0ba3088c30(); // Function UMG.WidgetComponent.*0ba3088c30 //  // @ game+0xec180d8
	void *85abc2285b(); // Function UMG.WidgetComponent.*85abc2285b //  // @ game+0xec15888
	void *7f4488de70(); // Function UMG.WidgetComponent.*7f4488de70 //  // @ game+0xec1bdb4
	void *9f5a09593a(); // Function UMG.WidgetComponent.*9f5a09593a //  // @ game+0xec2a7e8
	void *370be3665b(); // Function UMG.WidgetComponent.*370be3665b //  // @ game+0xec180f0
	void *974898addf(); // Function UMG.WidgetComponent.*974898addf //  // @ game+0xec198d4
	void *2fc15051bb(); // Function UMG.WidgetComponent.*2fc15051bb //  // @ game+0xec31c70
	void *71f204fe00(); // Function UMG.WidgetComponent.*71f204fe00 //  // @ game+0xec339f0
	void *da2f58b61f(); // Function UMG.WidgetComponent.*da2f58b61f //  // @ game+0xec18f0c
	void *255c04b4d9(); // Function UMG.WidgetComponent.*255c04b4d9 //  // @ game+0xec1e3ec
	void *4fe43c5f95(); // Function UMG.WidgetComponent.*4fe43c5f95 //  // @ game+0xec19484
	void *e1425ae3d0(); // Function UMG.WidgetComponent.*e1425ae3d0 //  // @ game+0xec18f60
	void *76d4245b69(); // Function UMG.WidgetComponent.*76d4245b69 //  // @ game+0xec2dba4
	void *3028f92010(); // Function UMG.WidgetComponent.*3028f92010 //  // @ game+0xec1a45c
};

// Class UMG.TextLayoutWidget
// Size: 0x158 (Inherited: 0x130)  [layout: KHOP]
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x130(0x08)
	enum class ETextJustify Justification; // 0x138(0x01)
	bool AutoWrapText; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float WrapTextAt; // 0x13c(0x04)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FMargin Margin; // 0x144(0x10)
	float LineHeightPercentage; // 0x154(0x04)
};

// Class UMG.TextBlock
// Size: 0x260 (Inherited: 0x158)  [layout: LECH - offset chi la uoc luong]
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateColor ColorAndOpacity; // 0x180(0x28)
	DelegateProperty ColorAndOpacityDelegate; // 0x1a8(0x10)
	struct FSlateFontInfo Font; // 0x1b8(0x68)
	struct FVector2D ShadowOffset; // 0x220(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x228(0x10)
	DelegateProperty ShadowColorAndOpacityDelegate; // 0x238(0x10)
	float MinDesiredWidth; // 0x248(0x04)
	bool bWrapWithInvalidationPanel; // 0x24c(0x01)
	char pad_24D[0x13]; // 0x24d(0x13)

	void SetOpacity(); // Function UMG.TextBlock.SetOpacity //  // @ game+0xec29e74
	void SetText(); // Function UMG.TextBlock.SetText //  // @ game+0x120f0bc
	void SetShadowColorAndOpacity(); // Function UMG.TextBlock.SetShadowColorAndOpacity //  // @ game+0xec2daac
	void SetFont(); // Function UMG.TextBlock.SetFont //  // @ game+0xec1e480
	void SetJustification(); // Function UMG.TextBlock.SetJustification //  // @ game+0xec21bcc
	void SetMinDesiredWidth(); // Function UMG.TextBlock.SetMinDesiredWidth //  // @ game+0xec2758c
	void SetWrapTextAt(); // Function UMG.TextBlock.SetWrapTextAt //  // @ game+0xec326e0
	void GetText(); // Function UMG.TextBlock.GetText //  // @ game+0xec19414
	void SetColorAndOpacity(); // Function UMG.TextBlock.SetColorAndOpacity //  // @ game+0xfa692c
	void SetShadowOffset(); // Function UMG.TextBlock.SetShadowOffset //  // @ game+0xec2db2c
};

// Class UMG.ScrollBox
// Size: 0x8e0 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x148(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x390(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x8a8(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x8b0(0x08)
	enum class EOrientation Orientation; // 0x8b8(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8b9(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8ba(0x01)
	char pad_8BB[0x1]; // 0x8bb(0x01)
	struct FVector2D ScrollbarThickness; // 0x8bc(0x08)
	bool AlwaysShowScrollbar; // 0x8c4(0x01)
	bool bUseRightMouseButtonToScroll; // 0x8c5(0x01)
	bool bGainFocusWhenClickedScrollBar; // 0x8c6(0x01)
	bool bLinearScrollOnWheel; // 0x8c7(0x01)
	char pad_8C8[0x18]; // 0x8c8(0x18)

	void SetScrollOffset(); // Function UMG.ScrollBox.SetScrollOffset //  // @ game+0xec2cec0
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart //  // @ game+0xec1ace4
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd //  // @ game+0xec1acd0
	void SetScrollBarVisibility(); // Function UMG.ScrollBox.SetScrollBarVisibility //  // @ game+0xec2ce48
	void GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset //  // @ game+0xec190f8
	void GetScrollToEndOffset(); // Function UMG.ScrollBox.GetScrollToEndOffset //  // @ game+0xec19118
	void ScrollWidgetIntoView(); // Function UMG.ScrollBox.ScrollWidgetIntoView //  // @ game+0xec1b670
};

// Class UMG.ComboBoxString
// Size: 0xed0 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x130(0x10)
	struct FString SelectedOption; // 0x140(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x150(0x428)
	struct FTableRowStyle ItemStyle; // 0x578(0x838)
	struct FMargin ContentPadding; // 0xdb0(0x10)
	float MaxListHeight; // 0xdc0(0x04)
	bool HasDownArrow; // 0xdc4(0x01)
	bool EnableGamepadNavigationMode; // 0xdc5(0x01)
	char pad_DC6[0x2]; // 0xdc6(0x02)
	struct FSlateFontInfo Font; // 0xdc8(0x68)
	struct FSlateColor ForegroundColor; // 0xe30(0x28)
	bool bIsFocusable; // 0xe58(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xe59(0x01)
	char pad_E5A[0x6]; // 0xe5a(0x06)
	DelegateProperty OnGenerateWidgetEvent; // 0xe60(0x10)
	struct FMulticastDelegate OnSelectionChanged; // 0xe70(0x10)
	struct FMulticastDelegate OnOpening; // 0xe80(0x10)
	char pad_E90[0x40]; // 0xe90(0x40)

	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection //  // @ game+0xec156f0
	void GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption //  // @ game+0xec19140
	void GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount //  // @ game+0xec18ef4
	void AddOption(); // Function UMG.ComboBoxString.AddOption //  // @ game+0xec14e58
	void FindOptionIndex(); // Function UMG.ComboBoxString.FindOptionIndex //  // @ game+0xec16b2c
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions //  // @ game+0xec1a448
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions //  // @ game+0xec156dc
	void GetOptionAtIndex(); // Function UMG.ComboBoxString.GetOptionAtIndex //  // @ game+0xec18cf4
	void SetSelectedOption(); // Function UMG.ComboBoxString.SetSelectedOption //  // @ game+0xec2d8fc
	void OnSelectionChangedEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature //  // @ game+0x43bab4
	void RemoveOption(); // Function UMG.ComboBoxString.RemoveOption //  // @ game+0xec1aab4
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastDelegate OnFail; // 0x40(0x10)

	void DownloadImage(); // Function UMG.AsyncTaskDownloadImage.DownloadImage //  // @ game+0xec0deac
};

// Class UMG.*4406c040ab
// Size: 0x3f0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*4406c040ab : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve Translation[0x02]; // 0xd8(0xe0)
	struct FRichCurve Rotation; // 0x1b8(0x70)
	struct FRichCurve Scale[0x02]; // 0x228(0xe0)
	struct FRichCurve Shear[0x02]; // 0x308(0xe0)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class UMG.*d827600630
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct U*d827600630 : UMovieScenePropertyTrack {
};

// Class UMG.*3042546bce
// Size: 0x2a0 (Inherited: 0xd0)  [layout: LECH - offset chi la uoc luong]
struct U*3042546bce : UMovieSceneSection {
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FRichCurve *d0d112a89d; // 0xd8(0x70)
	struct FRichCurve *93edb8e2bb; // 0x148(0x70)
	struct FRichCurve *d391fb88c2; // 0x1b8(0x70)
	struct FRichCurve *05e72f523d; // 0x228(0x70)
	char pad_298[0x8]; // 0x298(0x08)
};

// Class UMG.*5697e866b3
// Size: 0xe0 (Inherited: 0xe0)  [layout: KHOP]
struct U*5697e866b3 : UMovieScenePropertyTrack {
};

// Class UMG.*ebf0a02dd5
// Size: 0xe0 (Inherited: 0xd0)  [layout: KHOP]
struct U*ebf0a02dd5 : U*9785a0f922 {
	struct TArray<struct FName> *b97fd160a4; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x08)
};

// Class UMG.*e202ab892d
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*e202ab892d : UInterface {
};

// Class UMG.*10b4e1d7c6
// Size: 0x50 (Inherited: 0x30)  [layout: KHOP]
struct U*10b4e1d7c6 : UObject {
	struct UObject* SourceObject; // 0x30(0x08)
	struct F*4a5cd09681 SourcePath; // 0x38(0x10)
	struct FName *a4f1a3490b; // 0x48(0x08)
};

// Class UMG.*b7e355bfac
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*b7e355bfac : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*b7e355bfac.GetValue //  // @ game+0xec0e92c
};

// Class UMG.*7c935144ab
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*7c935144ab : U*10b4e1d7c6 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*7c935144ab.GetValue //  // @ game+0xec0e950
};

// Class UMG.*f0fbca4b18
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*f0fbca4b18 : U*10b4e1d7c6 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetValue(); // Function UMG.*f0fbca4b18.GetValue //  // @ game+0xec0e9d0
};

// Class UMG.*a0ddf77a45
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*a0ddf77a45 : U*10b4e1d7c6 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetSlateValue(); // Function UMG.*a0ddf77a45.GetSlateValue //  // @ game+0xec0e840
	void GetLinearValue(); // Function UMG.*a0ddf77a45.GetLinearValue //  // @ game+0xec0e6a8
};

// Class UMG.*bb9c8b5fcc
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*bb9c8b5fcc : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*bb9c8b5fcc.GetValue //  // @ game+0xec0e9f4
};

// Class UMG.*880ac1a6e5
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*880ac1a6e5 : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*880ac1a6e5.GetValue //  // @ game+0xec0ea1c
};

// Class UMG.*fcd09f6873
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*fcd09f6873 : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*fcd09f6873.GetValue //  // @ game+0xec0ea40
};

// Class UMG.*d530431f35
// Size: 0x58 (Inherited: 0x50)  [layout: LECH - offset chi la uoc luong]
struct U*d530431f35 : U*10b4e1d7c6 {
	char pad_50[0x8]; // 0x50(0x08)

	void GetTextValue(); // Function UMG.*d530431f35.GetTextValue //  // @ game+0xf1a6f0
	void GetStringValue(); // Function UMG.*d530431f35.GetStringValue //  // @ game+0xec0e8ac
};

// Class UMG.*217f2b764d
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*217f2b764d : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*217f2b764d.GetValue //  // @ game+0xec0ea64
};

// Class UMG.*78ac4643b4
// Size: 0x50 (Inherited: 0x50)  [layout: KHOP]
struct U*78ac4643b4 : U*10b4e1d7c6 {

	void GetValue(); // Function UMG.*78ac4643b4.GetValue //  // @ game+0xec0ea88
};

// Class UMG.*379e7bf376
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct U*379e7bf376 : UObject {
	bool bReveal; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 RevealedIndex; // 0x34(0x04)
};

// Class UMG.*2625b87d8c
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*2625b87d8c : UBlueprintFunctionLibrary {

	void *9eb32d6037(); // Function UMG.*2625b87d8c.*9eb32d6037 //  // @ game+0xec0db84
	void *358d04bfb6(); // Function UMG.*2625b87d8c.*358d04bfb6 //  // @ game+0xec11900
	void *f3c1de725e(); // Function UMG.*2625b87d8c.*f3c1de725e //  // @ game+0xec0f7c4
	void *c18e63568d(); // Function UMG.*2625b87d8c.*c18e63568d //  // @ game+0xec0e2c0
	void *4734290b4c(); // Function UMG.*2625b87d8c.*4734290b4c //  // @ game+0xec0f8b4
	void *46834445c9(); // Function UMG.*2625b87d8c.*46834445c9 //  // @ game+0xec0dc74
	void *b8a24ccbbf(); // Function UMG.*2625b87d8c.*b8a24ccbbf //  // @ game+0xec11ad8
	void *b259771b5c(); // Function UMG.*2625b87d8c.*b259771b5c //  // @ game+0xec119ec
	void *99363b90e5(); // Function UMG.*2625b87d8c.*99363b90e5 //  // @ game+0xec0f550
	void *75471530e6(); // Function UMG.*2625b87d8c.*75471530e6 //  // @ game+0xec0e6d8
};

// Class UMG.*b63a2d5bc7
// Size: 0x438 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*b63a2d5bc7 : UObject {
	struct UTexture2D* *31e04fb3ae; // 0x30(0x08)
	char pad_38[0x400]; // 0x38(0x400)
};

// Class UMG.*1b1f4940eb
// Size: 0x68 (Inherited: 0x30)  [layout: KHOP]
struct U*1b1f4940eb : UObject {
	struct TArray<struct F*0c1eb149c3> *20b3bb7be7; // 0x30(0x10)
	struct TArray<uint32> *c3b4611bbf; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D *37ecbd568c; // 0x58(0x08)
	struct FVector2D *10375aefa4; // 0x60(0x08)
};

// Class UMG.*cbc1ff01b6
// Size: 0x430 (Inherited: 0x3c0)  [layout: KHOP]
struct U*cbc1ff01b6 : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x3c0(0x08)
	bool *9caa66da00; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct F*e36be61d27> Bindings; // 0x3d0(0x10)
	struct TArray<struct U*7fa8406bd3*> Animations; // 0x3e0(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3f0(0x10)
	bool *3a6336c635; // 0x400(0x01)
	bool *62b36e10c5; // 0x401(0x01)
	bool *65d0b777ff; // 0x402(0x01)
	char pad_403[0x5]; // 0x403(0x05)
	struct UUserWidget* *5618e3edee; // 0x408(0x20)
	struct UUserWidget* Template; // 0x428(0x08)
};

// Class UMG.*09a14a51ac
// Size: 0x6b0 (Inherited: 0x30)  [layout: LECH - offset chi la uoc luong]
struct U*09a14a51ac : UObject {
	char pad_30[0x348]; // 0x30(0x348)
	struct U*7fa8406bd3* Animation; // 0x378(0x08)
	char pad_380[0x330]; // 0x380(0x330)
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)  [layout: KHOP]
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.BackgroundBlurSlot.SetPadding //  // @ game+0xec2a900
	void SetVerticalAlignment(); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment //  // @ game+0xec31508
	void SetHorizontalAlignment(); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment //  // @ game+0xec1f3dc
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.BorderSlot.SetPadding //  // @ game+0xec2aa18
	void SetVerticalAlignment(); // Function UMG.BorderSlot.SetVerticalAlignment //  // @ game+0xec31600
	void SetHorizontalAlignment(); // Function UMG.BorderSlot.SetHorizontalAlignment //  // @ game+0xec1f4d4
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.ButtonSlot.SetPadding //  // @ game+0xec2aaa4
	void SetVerticalAlignment(); // Function UMG.ButtonSlot.SetVerticalAlignment //  // @ game+0xec3167c
	void SetHorizontalAlignment(); // Function UMG.ButtonSlot.SetHorizontalAlignment //  // @ game+0xec1f550
};

// Class UMG.CanvasPanelSlot
// Size: 0x78 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x28)
	bool bAutoSize; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32 ZOrder; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	void SetAlignment(); // Function UMG.CanvasPanelSlot.SetAlignment //  // @ game+0xec1b9ac
	void SetMinimum(); // Function UMG.CanvasPanelSlot.SetMinimum //  // @ game+0xec291e8
	void GetSize(); // Function UMG.CanvasPanelSlot.GetSize //  // @ game+0xec191c0
	void SetSize(); // Function UMG.CanvasPanelSlot.SetSize //  // @ game+0xec2dc1c
	void SetPosition(); // Function UMG.CanvasPanelSlot.SetPosition //  // @ game+0xec2c2f4
	void GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize //  // @ game+0xec171a0
	void GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors //  // @ game+0xec17158
	void GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets //  // @ game+0xec18cb4
	void SetAutoSize(); // Function UMG.CanvasPanelSlot.SetAutoSize //  // @ game+0xec1c728
	void GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder //  // @ game+0xec196a4
	void GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout //  // @ game+0xec180ac
	void SetOffsets(); // Function UMG.CanvasPanelSlot.SetOffsets //  // @ game+0x7ec91c
	void SetLayout(); // Function UMG.CanvasPanelSlot.SetLayout //  // @ game+0xec21e24
	void GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment //  // @ game+0xec16cf8
	void SetZOrder(); // Function UMG.CanvasPanelSlot.SetZOrder //  // @ game+0xec33054
	void SetMaximum(); // Function UMG.CanvasPanelSlot.SetMaximum //  // @ game+0xec24f44
	void SetAnchors(); // Function UMG.CanvasPanelSlot.SetAnchors //  // @ game+0xec1baa8
	void GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition //  // @ game+0xec18f30
};

// Class UMG.GridSlot
// Size: 0x78 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 row; // 0x54(0x04)
	int32 RowSpan; // 0x58(0x04)
	int32 column; // 0x5c(0x04)
	int32 ColumnSpan; // 0x60(0x04)
	int32 Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void SetRow(); // Function UMG.GridSlot.SetRow //  // @ game+0xec2cce0
	void SetVerticalAlignment(); // Function UMG.GridSlot.SetVerticalAlignment //  // @ game+0xec316f8
	void SetColumnSpan(); // Function UMG.GridSlot.SetColumnSpan //  // @ game+0xec1d2c8
	void SetRowSpan(); // Function UMG.GridSlot.SetRowSpan //  // @ game+0xec2cdd0
	void SetLayer(); // Function UMG.GridSlot.SetLayer //  // @ game+0xec21d1c
	void SetHorizontalAlignment(); // Function UMG.GridSlot.SetHorizontalAlignment //  // @ game+0xec1f5cc
	void SetPadding(); // Function UMG.GridSlot.SetPadding //  // @ game+0xec2ab30
	void SetColumn(); // Function UMG.GridSlot.SetColumn //  // @ game+0xec1d1d8
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UHorizontalBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetSize(); // Function UMG.HorizontalBoxSlot.SetSize //  // @ game+0xec2dc94
	void SetPadding(); // Function UMG.HorizontalBoxSlot.SetPadding //  // @ game+0xec2abbc
	void SetVerticalAlignment(); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment //  // @ game+0xec31770
	void SetHorizontalAlignment(); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment //  // @ game+0xec1f644
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UOverlaySlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32 ZOrder; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)

	void SetHorizontalAlignment(); // Function UMG.OverlaySlot.SetHorizontalAlignment //  // @ game+0xec1f6c0
	void SetPadding(); // Function UMG.OverlaySlot.SetPadding //  // @ game+0xec2ac48
	void GetZOrder(); // Function UMG.OverlaySlot.GetZOrder //  // @ game+0xec196c8
	void SetVerticalAlignment(); // Function UMG.OverlaySlot.SetVerticalAlignment //  // @ game+0xec317ec
	void SetZOrder(); // Function UMG.OverlaySlot.SetZOrder //  // @ game+0xec330cc
};

// Class UMG.SafeZoneSlot
// Size: 0x68 (Inherited: 0x40)  [layout: KHOP]
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
};

// Class UMG.ScaleBoxSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.ScaleBoxSlot.SetPadding //  // @ game+0xec2acd4
	void SetVerticalAlignment(); // Function UMG.ScaleBoxSlot.SetVerticalAlignment //  // @ game+0xec31864
	void SetHorizontalAlignment(); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment //  // @ game+0xec1f738
};

// Class UMG.ScrollBoxSlot
// Size: 0x60 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)

	void SetPadding(); // Function UMG.ScrollBoxSlot.SetPadding //  // @ game+0xec2ad50
	void SetHorizontalAlignment(); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment //  // @ game+0xec1f7b4
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.SizeBoxSlot.SetPadding //  // @ game+0xec2addc
	void SetVerticalAlignment(); // Function UMG.SizeBoxSlot.SetVerticalAlignment //  // @ game+0xec318e0
	void SetHorizontalAlignment(); // Function UMG.SizeBoxSlot.SetHorizontalAlignment //  // @ game+0xec1f830
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32 row; // 0x44(0x04)
	int32 column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetColumn(); // Function UMG.UniformGridSlot.SetColumn //  // @ game+0xec1d250
	void SetRow(); // Function UMG.UniformGridSlot.SetRow //  // @ game+0xec2cd58
	void SetVerticalAlignment(); // Function UMG.UniformGridSlot.SetVerticalAlignment //  // @ game+0xec3195c
	void SetHorizontalAlignment(); // Function UMG.UniformGridSlot.SetHorizontalAlignment //  // @ game+0xec1f8ac
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UVerticalBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetSize(); // Function UMG.VerticalBoxSlot.SetSize //  // @ game+0xec2dc94
	void SetPadding(); // Function UMG.VerticalBoxSlot.SetPadding //  // @ game+0xec2abbc
	void SetVerticalAlignment(); // Function UMG.VerticalBoxSlot.SetVerticalAlignment //  // @ game+0xec31770
	void SetHorizontalAlignment(); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment //  // @ game+0xec1f644
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UWidgetSwitcherSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)

	void SetPadding(); // Function UMG.WidgetSwitcherSlot.SetPadding //  // @ game+0xec2ad50
	void SetVerticalAlignment(); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment //  // @ game+0xec317ec
	void SetHorizontalAlignment(); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment //  // @ game+0xec1f6c0
};

// Class UMG.WindowTitleBarArea
// Size: 0x168 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UWindowTitleBarArea : UContentWidget {
	bool bDoubleClickTogglesFullscreen; // 0x148(0x01)
	char pad_149[0x1f]; // 0x149(0x1f)

	void SetPadding(); // Function UMG.WindowTitleBarArea.SetPadding //  // @ game+0xec2ae68
	void SetVerticalAlignment(); // Function UMG.WindowTitleBarArea.SetVerticalAlignment //  // @ game+0xec319d4
	void SetHorizontalAlignment(); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment //  // @ game+0xec1f924
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetPadding(); // Function UMG.WindowTitleBarAreaSlot.SetPadding //  // @ game+0xec2aef4
	void SetVerticalAlignment(); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment //  // @ game+0xec31a50
	void SetHorizontalAlignment(); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment //  // @ game+0xec1f9a0
};

// Class UMG.WrapBoxSlot
// Size: 0x68 (Inherited: 0x40)  [layout: LECH - offset chi la uoc luong]
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	bool bFillEmptySpace; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FillSpanWhenLessThan; // 0x54(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetFillEmptySpace(); // Function UMG.WrapBoxSlot.SetFillEmptySpace //  // @ game+0xec1d9f8
	void SetPadding(); // Function UMG.WrapBoxSlot.SetPadding //  // @ game+0xec2af80
	void SetVerticalAlignment(); // Function UMG.WrapBoxSlot.SetVerticalAlignment //  // @ game+0xec31acc
	void SetFillSpanWhenLessThan(); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan //  // @ game+0xec1da78
	void SetHorizontalAlignment(); // Function UMG.WrapBoxSlot.SetHorizontalAlignment //  // @ game+0xec1fa1c
};

// Class UMG.CircularThrobber
// Size: 0x1f0 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UCircularThrobber : UWidget {
	int32 NumberOfPieces; // 0x130(0x04)
	float Period; // 0x134(0x04)
	float Radius; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct USlateBrushAsset* PieceImage; // 0x140(0x08)
	struct FSlateBrush Image; // 0x148(0x90)
	bool bEnableRadius; // 0x1d8(0x01)
	char pad_1D9[0x17]; // 0x1d9(0x17)

	void SetNumberOfPieces(); // Function UMG.CircularThrobber.SetNumberOfPieces //  // @ game+0xec293d0
	void SetRadius(); // Function UMG.CircularThrobber.SetRadius //  // @ game+0xec2c36c
	void SetPeriod(); // Function UMG.CircularThrobber.SetPeriod //  // @ game+0xec2b980
};

// Class UMG.ComboBox
// Size: 0x168 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x130(0x10)
	DelegateProperty OnGenerateWidgetEvent; // 0x140(0x10)
	bool bIsFocusable; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)
};

// Class UMG.EditableTextBox
// Size: 0xae8 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x130(0x18)
	DelegateProperty TextDelegate; // 0x148(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x158(0x870)
	struct USlateWidgetStyleAsset* Style; // 0x9c8(0x08)
	struct FText HintText; // 0x9d0(0x18)
	DelegateProperty HintTextDelegate; // 0x9e8(0x10)
	struct FSlateFontInfo Font; // 0x9f8(0x68)
	struct FLinearColor ForegroundColor; // 0xa60(0x10)
	struct FLinearColor BackgroundColor; // 0xa70(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xa80(0x10)
	bool IsReadOnly; // 0xa90(0x01)
	bool IsPassword; // 0xa91(0x01)
	char pad_A92[0x2]; // 0xa92(0x02)
	float MinimumDesiredWidth; // 0xa94(0x04)
	struct FMargin Padding; // 0xa98(0x10)
	bool IsCaretMovedWhenGainFocus; // 0xaa8(0x01)
	bool SelectAllTextWhenFocused; // 0xaa9(0x01)
	bool RevertTextOnEscape; // 0xaaa(0x01)
	bool ClearKeyboardFocusOnCommit; // 0xaab(0x01)
	bool SelectAllTextOnCommit; // 0xaac(0x01)
	bool AllowContextMenu; // 0xaad(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0xaae(0x01)
	char pad_AAF[0x1]; // 0xaaf(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0xab0(0x08)
	struct FMulticastDelegate OnTextChanged; // 0xab8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xac8(0x10)
	char pad_AD8[0x10]; // 0xad8(0x10)

	void OnEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature //  // @ game+0x43bab4
	void HasError(); // Function UMG.EditableTextBox.HasError //  // @ game+0xec19814
	void SetText(); // Function UMG.EditableTextBox.SetText //  // @ game+0xec2f52c
	void SetHintText(); // Function UMG.EditableTextBox.SetHintText //  // @ game+0xec1f28c
	void OnEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetIsReadOnly(); // Function UMG.EditableTextBox.SetIsReadOnly //  // @ game+0xec20770
	void GetText(); // Function UMG.EditableTextBox.GetText //  // @ game+0xec19288
	void ClearError(); // Function UMG.EditableTextBox.ClearError //  // @ game+0xec155c0
	void SetError(); // Function UMG.EditableTextBox.SetError //  // @ game+0xec1d670
};

// Class UMG.ExpandableArea
// Size: 0x378 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UExpandableArea : UWidget {
	char pad_130[0x8]; // 0x130(0x08)
	struct FExpandableAreaStyle Style; // 0x138(0x130)
	struct FSlateBrush BorderBrush; // 0x268(0x90)
	struct FSlateColor BorderColor; // 0x2f8(0x28)
	bool bIsExpanded; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MaxHeight; // 0x324(0x04)
	struct FMargin HeaderPadding; // 0x328(0x10)
	struct FMargin AreaPadding; // 0x338(0x10)
	struct FMulticastDelegate OnExpansionChanged; // 0x348(0x10)
	struct UWidget* HeaderContent; // 0x358(0x08)
	struct UWidget* BodyContent; // 0x360(0x08)
	char pad_368[0x10]; // 0x368(0x10)

	void GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded //  // @ game+0xec17ec8
	void SetIsExpanded_Animated(); // Function UMG.ExpandableArea.SetIsExpanded_Animated //  // @ game+0xec20548
	void SetIsExpanded(); // Function UMG.ExpandableArea.SetIsExpanded //  // @ game+0xec204c0
};

// Class UMG.Image
// Size: 0x218 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UImage : UWidget {
	struct USlateBrushAsset* Image; // 0x130(0x08)
	struct FSlateBrush Brush; // 0x138(0x90)
	DelegateProperty BrushDelegate; // 0x1c8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1d8(0x10)
	DelegateProperty ColorAndOpacityDelegate; // 0x1e8(0x10)
	DelegateProperty OnMouseButtonDownEvent; // 0x1f8(0x10)
	char pad_208[0x10]; // 0x208(0x10)

	void SetOpacity(); // Function UMG.Image.SetOpacity //  // @ game+0xec29500
	void GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial //  // @ game+0xec17760
	void SetBrushFromAsset(); // Function UMG.Image.SetBrushFromAsset //  // @ game+0xec1cb40
	void SetBrushFromTexture(); // Function UMG.Image.SetBrushFromTexture //  // @ game+0x1324964
	void SetColorAndOpacity(); // Function UMG.Image.SetColorAndOpacity //  // @ game+0xf09340
	void SetBrushFromMaterial(); // Function UMG.Image.SetBrushFromMaterial //  // @ game+0xec1cc38
	void SetBrush(); // Function UMG.Image.SetBrush //  // @ game+0xec1c9f0
	void SetBrushSize(); // Function UMG.Image.SetBrushSize //  // @ game+0xec1cf54
	void SetBrushFromTextureDynamic(); // Function UMG.Image.SetBrushFromTextureDynamic //  // @ game+0xec1cd30
};

// Class UMG.InputKeySelector
// Size: 0x230 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UInputKeySelector : UWidget {
	struct FInputChord SelectedKey; // 0x130(0x20)
	struct FSlateFontInfo Font; // 0x150(0x68)
	struct FMargin Margin; // 0x1b8(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1c8(0x10)
	struct FText KeySelectionText; // 0x1d8(0x18)
	bool bAllowModifierKeys; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FMulticastDelegate OnKeySelected; // 0x1f8(0x10)
	struct FMulticastDelegate OnIsSelectingKeyChanged; // 0x208(0x10)
	char pad_218[0x18]; // 0x218(0x18)

	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature //  // @ game+0x43bab4
	void SetKeySelectionText(); // Function UMG.InputKeySelector.SetKeySelectionText //  // @ game+0xec21c48
	void SetAllowModifierKeys(); // Function UMG.InputKeySelector.SetAllowModifierKeys //  // @ game+0xec1ba24
	void SetSelectedKey(); // Function UMG.InputKeySelector.SetSelectedKey //  // @ game+0xec2d834
	void OnKeySelected__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature //  // @ game+0x43bab4
	void GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey //  // @ game+0xec17f08
};

// Class UMG.NativeWidgetHost
// Size: 0x140 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UNativeWidgetHost : UWidget {
	char pad_130[0x10]; // 0x130(0x10)
};

// Class UMG.CanvasPanel
// Size: 0x158 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UCanvasPanel : UPanelWidget {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToCanvas(); // Function UMG.CanvasPanel.AddChildToCanvas //  // @ game+0xec144e0
};

// Class UMG.BackgroundBlur
// Size: 0x208 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x148(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x158(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x159(0x01)
	bool bApplyAlphaToBlur; // 0x15a(0x01)
	char pad_15B[0x1]; // 0x15b(0x01)
	float BlurStrength; // 0x15c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32 BlurRadius; // 0x164(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x168(0x90)
	char pad_1F8[0x10]; // 0x1f8(0x10)

	void SetHorizontalAlignment(); // Function UMG.BackgroundBlur.SetHorizontalAlignment //  // @ game+0xec1f360
	void SetApplyAlphaToBlur(); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur //  // @ game+0xec1bd38
	void SetBlurRadius(); // Function UMG.BackgroundBlur.SetBlurRadius //  // @ game+0xec1c8a4
	void SetPadding(); // Function UMG.BackgroundBlur.SetPadding //  // @ game+0xec2a874
	void SetVerticalAlignment(); // Function UMG.BackgroundBlur.SetVerticalAlignment //  // @ game+0xec3148c
	void SetBlurStrength(); // Function UMG.BackgroundBlur.SetBlurStrength //  // @ game+0xec4270
	void SetLowQualityFallbackBrush(); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush //  // @ game+0xec21f2c
};

// Class UMG.Border
// Size: 0x2a8 (Inherited: 0x148)  [layout: KHOP]
struct UBorder : UContentWidget {
	struct FLinearColor ContentColorAndOpacity; // 0x148(0x10)
	DelegateProperty ContentColorAndOpacityDelegate; // 0x158(0x10)
	struct FMargin Padding; // 0x168(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x178(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct FSlateBrush Background; // 0x180(0x90)
	DelegateProperty BackgroundDelegate; // 0x210(0x10)
	struct FLinearColor BrushColor; // 0x220(0x10)
	DelegateProperty BrushColorDelegate; // 0x230(0x10)
	struct FVector2D DesiredSizeScale; // 0x240(0x08)
	bool bShowEffectWhenDisabled; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	DelegateProperty OnMouseButtonDownEvent; // 0x250(0x10)
	DelegateProperty OnMouseButtonUpEvent; // 0x260(0x10)
	DelegateProperty OnMouseMoveEvent; // 0x270(0x10)
	DelegateProperty OnMouseDoubleClickEvent; // 0x280(0x10)
	char pad_290[0x10]; // 0x290(0x10)
	struct USlateBrushAsset* Brush; // 0x2a0(0x08)

	void SetDesiredSizeScale(); // Function UMG.Border.SetDesiredSizeScale //  // @ game+0xec1d504
	void GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial //  // @ game+0xec1773c
	void SetHorizontalAlignment(); // Function UMG.Border.SetHorizontalAlignment //  // @ game+0xec1f458
	void SetBrushColor(); // Function UMG.Border.SetBrushColor //  // @ game+0x10a6308
	void SetVerticalAlignment(); // Function UMG.Border.SetVerticalAlignment //  // @ game+0xec31584
	void SetBrushFromTexture(); // Function UMG.Border.SetBrushFromTexture //  // @ game+0xec1ccb4
	void SetBrushFromMaterial(); // Function UMG.Border.SetBrushFromMaterial //  // @ game+0xec1cbbc
	void SetBrush(); // Function UMG.Border.SetBrush //  // @ game+0xec1c91c
	void SetBrushFromAsset(); // Function UMG.Border.SetBrushFromAsset //  // @ game+0xec1cac4
	void SetContentColorAndOpacity(); // Function UMG.Border.SetContentColorAndOpacity //  // @ game+0xf94668
	void SetPadding(); // Function UMG.Border.SetPadding //  // @ game+0xec2a98c
};

// Class UMG.CheckBox
// Size: 0x7f8 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty CheckedStateDelegate; // 0x150(0x10)
	struct FCheckBoxStyle WidgetStyle; // 0x160(0x5e0)
	struct USlateWidgetStyleAsset* Style; // 0x740(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x748(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x750(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x758(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x760(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x768(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x770(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x778(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x780(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x788(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x790(0x01)
	char pad_791[0x3]; // 0x791(0x03)
	struct FMargin Padding; // 0x794(0x10)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x7a8(0x28)
	bool IsFocusable; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct FMulticastDelegate OnCheckStateChanged; // 0x7d8(0x10)
	char pad_7E8[0x10]; // 0x7e8(0x10)

	void IsChecked(); // Function UMG.CheckBox.IsChecked //  // @ game+0xec198f8
	void IsPressed(); // Function UMG.CheckBox.IsPressed //  // @ game+0xec199e0
	void SetCheckedState(); // Function UMG.CheckBox.SetCheckedState //  // @ game+0xec1d0e0
	void GetCheckedState(); // Function UMG.CheckBox.GetCheckedState //  // @ game+0xec17554
	void SetIsChecked(); // Function UMG.CheckBox.SetIsChecked //  // @ game+0xec20444
};

// Class UMG.InvalidationBox
// Size: 0x160 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache //  // @ game+0xec1989c
	void SetCanCache(); // Function UMG.InvalidationBox.SetCanCache //  // @ game+0xec1cfd8
	void GetCanCache(); // Function UMG.InvalidationBox.GetCanCache //  // @ game+0xec17528
};

// Class UMG.MenuAnchor
// Size: 0x188 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UMenuAnchor : UContentWidget {
	struct UClass* MenuClass; // 0x148(0x08)
	DelegateProperty OnGetMenuContentEvent; // 0x150(0x10)
	enum class EMenuPlacement Placement; // 0x160(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x161(0x01)
	bool UseApplicationMenuStack; // 0x162(0x01)
	char pad_163[0x5]; // 0x163(0x05)
	struct FMulticastDelegate OnMenuOpenChanged; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)

	void Open(); // Function UMG.MenuAnchor.Open //  // @ game+0xec19fb4
	void IsOpen(); // Function UMG.MenuAnchor.IsOpen //  // @ game+0xec19940
	void ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick //  // @ game+0xec33148
	void ToggleOpen(); // Function UMG.MenuAnchor.ToggleOpen //  // @ game+0xec337f0
	void Close(); // Function UMG.MenuAnchor.Close //  // @ game+0xec15854
	void GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition //  // @ game+0xec18b0c
	void HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus //  // @ game+0xec19864
};

// Class UMG.NamedSlot
// Size: 0x158 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UNamedSlot : UContentWidget {
	char pad_148[0x10]; // 0x148(0x10)
};

// Class UMG.RetainerBox
// Size: 0x178 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct URetainerBox : UContentWidget {
	bool RenderOnPhase; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	int32 Phase; // 0x14c(0x04)
	int32 PhaseCount; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x158(0x08)
	struct FName TextureParameter; // 0x160(0x08)
	char pad_168[0x10]; // 0x168(0x10)

	void GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial //  // @ game+0xec17858
	void RequestRender(); // Function UMG.RetainerBox.RequestRender //  // @ game+0xec1acbc
	void SetTextureParameter(); // Function UMG.RetainerBox.SetTextureParameter //  // @ game+0xec2f7a8
	void SetEffectMaterial(); // Function UMG.RetainerBox.SetEffectMaterial //  // @ game+0xec1d5f4
};

// Class UMG.SafeZone
// Size: 0x160 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x148(0x01)
	bool PadRight; // 0x149(0x01)
	bool PadTop; // 0x14a(0x01)
	bool PadBottom; // 0x14b(0x01)
	char pad_14C[0x14]; // 0x14c(0x14)
};

// Class UMG.ScaleBox
// Size: 0x168 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x148(0x01)
	enum class EStretchDirection StretchDirection; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float UserSpecifiedScale; // 0x14c(0x04)
	bool IgnoreInheritedScale; // 0x150(0x01)
	char pad_151[0x17]; // 0x151(0x17)

	void SetStretchDirection(); // Function UMG.ScaleBox.SetStretchDirection //  // @ game+0xec2f32c
	void SetStretch(); // Function UMG.ScaleBox.SetStretch //  // @ game+0xec2f2ac
	void SetIgnoreInheritedScale(); // Function UMG.ScaleBox.SetIgnoreInheritedScale //  // @ game+0xec1fa94
	void SetUserSpecifiedScale(); // Function UMG.ScaleBox.SetUserSpecifiedScale //  // @ game+0xec2f830
};

// Class UMG.SizeBox
// Size: 0x178 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct USizeBox : UContentWidget {
	char bOverride_WidthOverride : 1; // 0x148(0x01)
	char bOverride_HeightOverride : 1; // 0x148(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x148(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x148(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x148(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x148(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float WidthOverride; // 0x14c(0x04)
	float HeightOverride; // 0x150(0x04)
	float MinDesiredWidth; // 0x154(0x04)
	float MinDesiredHeight; // 0x158(0x04)
	float MaxDesiredWidth; // 0x15c(0x04)
	float MaxDesiredHeight; // 0x160(0x04)
	float MaxAspectRatio; // 0x164(0x04)
	char pad_168[0x10]; // 0x168(0x10)

	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth //  // @ game+0xec156a0
	void SetMaxAspectRatio(); // Function UMG.SizeBox.SetMaxAspectRatio //  // @ game+0xec22000
	void SetMinDesiredWidth(); // Function UMG.SizeBox.SetMinDesiredWidth //  // @ game+0xec26c18
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio //  // @ game+0xec15628
	void SetHeightOverride(); // Function UMG.SizeBox.SetHeightOverride //  // @ game+0xec1e844
	void SetMaxDesiredHeight(); // Function UMG.SizeBox.SetMaxDesiredHeight //  // @ game+0xec22974
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth //  // @ game+0xec15650
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight //  // @ game+0xec1563c
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight //  // @ game+0xec1568c
	void SetWidthOverride(); // Function UMG.SizeBox.SetWidthOverride //  // @ game+0xec31d6c
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride //  // @ game+0xec15840
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride //  // @ game+0xec15614
	void SetMaxDesiredWidth(); // Function UMG.SizeBox.SetMaxDesiredWidth //  // @ game+0xec232e8
	void SetMinDesiredHeight(); // Function UMG.SizeBox.SetMinDesiredHeight //  // @ game+0xec24fbc
};

// Class UMG.TslInvalidationBox
// Size: 0x160 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UTslInvalidationBox : UContentWidget {
	bool bCanCache; // 0x148(0x01)
	bool CacheRelativeTransforms; // 0x149(0x01)
	char pad_14A[0x16]; // 0x14a(0x16)

	void InvalidateCache(); // Function UMG.TslInvalidationBox.InvalidateCache //  // @ game+0xec198b0
	void SetCanCache(); // Function UMG.TslInvalidationBox.SetCanCache //  // @ game+0xec1d054
	void GetCanCache(); // Function UMG.TslInvalidationBox.GetCanCache //  // @ game+0xec17528
};

// Class UMG.Viewport
// Size: 0x170 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	void GetViewLocation(); // Function UMG.Viewport.GetViewLocation //  // @ game+0xec194ec
	void GetViewRotation(); // Function UMG.Viewport.GetViewRotation //  // @ game+0xec19538
	void SetViewRotation(); // Function UMG.Viewport.SetViewRotation //  // @ game+0xec31be4
	void SetViewLocation(); // Function UMG.Viewport.SetViewLocation //  // @ game+0xec31b44
	void GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld //  // @ game+0xec19684
	void Spawn(); // Function UMG.Viewport.Spawn //  // @ game+0xec33768
};

// Class UMG.GridPanel
// Size: 0x178 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x148(0x10)
	struct TArray<float> RowFill; // 0x158(0x10)
	char pad_168[0x10]; // 0x168(0x10)

	void AddChildToGrid(); // Function UMG.GridPanel.AddChildToGrid //  // @ game+0xec145d8
};

// Class UMG.HorizontalBox
// Size: 0x158 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UHorizontalBox : UPanelWidget {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToHorizontalBox(); // Function UMG.HorizontalBox.AddChildToHorizontalBox //  // @ game+0xec1477c
};

// Class UMG.Overlay
// Size: 0x158 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UOverlay : UPanelWidget {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToOverlay(); // Function UMG.Overlay.AddChildToOverlay //  // @ game+0xec14874
};

// Class UMG.UniformGridPanel
// Size: 0x170 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x148(0x10)
	float MinDesiredSlotWidth; // 0x158(0x04)
	float MinDesiredSlotHeight; // 0x15c(0x04)
	char pad_160[0x10]; // 0x160(0x10)

	void SetMinDesiredSlotWidth(); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth //  // @ game+0xec262a4
	void SetSlotPadding(); // Function UMG.UniformGridPanel.SetSlotPadding //  // @ game+0xec2dec0
	void AddChildToUniformGrid(); // Function UMG.UniformGridPanel.AddChildToUniformGrid //  // @ game+0xec14a18
	void SetMinDesiredSlotHeight(); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight //  // @ game+0xec25930
};

// Class UMG.VerticalBox
// Size: 0x158 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UVerticalBox : UPanelWidget {
	char pad_148[0x10]; // 0x148(0x10)

	void AddChildToVerticalBox(); // Function UMG.VerticalBox.AddChildToVerticalBox //  // @ game+0xec14bbc
};

// Class UMG.WrapBox
// Size: 0x168 (Inherited: 0x148)  [layout: LECH - offset chi la uoc luong]
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x148(0x08)
	float WrapWidth; // 0x150(0x04)
	bool bExplicitWrapWidth; // 0x154(0x01)
	char pad_155[0x13]; // 0x155(0x13)

	void SetInnerSlotPadding(); // Function UMG.WrapBox.SetInnerSlotPadding //  // @ game+0xec1fb94
	void AddChildWrapBox(); // Function UMG.WrapBox.AddChildWrapBox //  // @ game+0xec14cb4
};

// Class UMG.ProgressBar
// Size: 0x350 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x130(0x1b8)
	struct USlateWidgetStyleAsset* Style; // 0x2e8(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2f0(0x08)
	struct USlateBrushAsset* FillImage; // 0x2f8(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x300(0x08)
	float Percent; // 0x308(0x04)
	enum class EProgressBarFillType BarFillType; // 0x30c(0x01)
	bool bIsMarquee; // 0x30d(0x01)
	char pad_30E[0x2]; // 0x30e(0x02)
	DelegateProperty PercentDelegate; // 0x310(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x320(0x10)
	DelegateProperty FillColorAndOpacityDelegate; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)

	void SetPercent(); // Function UMG.ProgressBar.SetPercent //  // @ game+0xec2b00c
	void SetIsMarquee(); // Function UMG.ProgressBar.SetIsMarquee //  // @ game+0xec205d0
	void SetFillColorAndOpacity(); // Function UMG.ProgressBar.SetFillColorAndOpacity //  // @ game+0xec1d978
};

// Class UMG.ScrollBar
// Size: 0x670 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x130(0x518)
	struct USlateWidgetStyleAsset* Style; // 0x648(0x08)
	bool bAlwaysShowScrollbar; // 0x650(0x01)
	enum class EOrientation Orientation; // 0x651(0x01)
	char pad_652[0x2]; // 0x652(0x02)
	struct FVector2D Thickness; // 0x654(0x08)
	char pad_65C[0x14]; // 0x65c(0x14)

	void SetState(); // Function UMG.ScrollBar.SetState //  // @ game+0xec2df70
};

// Class UMG.Slider
// Size: 0x428 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct USlider : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct FSliderStyle WidgetStyle; // 0x148(0x250)
	enum class EOrientation Orientation; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FLinearColor SliderBarColor; // 0x39c(0x10)
	struct FLinearColor SliderHandleColor; // 0x3ac(0x10)
	bool IndentHandle; // 0x3bc(0x01)
	bool Locked; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	float StepSize; // 0x3c0(0x04)
	bool IsFocusable; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct FMulticastDelegate OnMouseCaptureBegin; // 0x3c8(0x10)
	struct FMulticastDelegate OnMouseCaptureEnd; // 0x3d8(0x10)
	struct FMulticastDelegate OnControllerCaptureBegin; // 0x3e8(0x10)
	struct FMulticastDelegate OnControllerCaptureEnd; // 0x3f8(0x10)
	struct FMulticastDelegate OnValueChanged; // 0x408(0x10)
	char pad_418[0x10]; // 0x418(0x10)

	void SetValue(); // Function UMG.Slider.SetValue //  // @ game+0xec301a4
	void SetLocked(); // Function UMG.Slider.SetLocked //  // @ game+0xec21eb0
	void SetStepSize(); // Function UMG.Slider.SetStepSize //  // @ game+0xec2e938
	void GetValue(); // Function UMG.Slider.GetValue //  // @ game+0xec1949c
	void SetIndentHandle(); // Function UMG.Slider.SetIndentHandle //  // @ game+0xec1fb18
	void SetSliderBarColor(); // Function UMG.Slider.SetSliderBarColor //  // @ game+0xec2dd98
	void SetSliderHandleColor(); // Function UMG.Slider.SetSliderHandleColor //  // @ game+0xec2de2c
};

// Class UMG.Spacer
// Size: 0x148 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct USpacer : UWidget {
	struct FVector2D Size; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	void SetSize(); // Function UMG.Spacer.SetSize //  // @ game+0xec2dd20
};

// Class UMG.SpinBox
// Size: 0x568 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct USpinBox : UWidget {
	float Value; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	DelegateProperty ValueDelegate; // 0x138(0x10)
	struct FSpinBoxStyle WidgetStyle; // 0x148(0x310)
	struct USlateWidgetStyleAsset* Style; // 0x458(0x08)
	float Delta; // 0x460(0x04)
	float SliderExponent; // 0x464(0x04)
	struct FSlateFontInfo Font; // 0x468(0x68)
	float MinDesiredWidth; // 0x4d0(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x4d4(0x01)
	bool SelectAllTextOnCommit; // 0x4d5(0x01)
	char pad_4D6[0x2]; // 0x4d6(0x02)
	struct FSlateColor ForegroundColor; // 0x4d8(0x28)
	struct FMulticastDelegate OnValueChanged; // 0x500(0x10)
	struct FMulticastDelegate OnValueCommitted; // 0x510(0x10)
	struct FMulticastDelegate OnBeginSliderMovement; // 0x520(0x10)
	struct FMulticastDelegate OnEndSliderMovement; // 0x530(0x10)
	char bOverride_MinValue : 1; // 0x540(0x01)
	char bOverride_MaxValue : 1; // 0x540(0x01)
	char bOverride_MinSliderValue : 1; // 0x540(0x01)
	char bOverride_MaxSliderValue : 1; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float MinValue; // 0x544(0x04)
	float MaxValue; // 0x548(0x04)
	float MinSliderValue; // 0x54c(0x04)
	float MaxSliderValue; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)

	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue //  // @ game+0xec15678
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue //  // @ game+0xec15664
	void GetMinValue(); // Function UMG.SpinBox.GetMinValue //  // @ game+0xec18b64
	void SetValue(); // Function UMG.SpinBox.SetValue //  // @ game+0xec30b18
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature //  // @ game+0x43bab4
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue //  // @ game+0xec156b4
	void SetMaxValue(); // Function UMG.SpinBox.SetMaxValue //  // @ game+0xec245d0
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue //  // @ game+0xec156c8
	void SetMinSliderValue(); // Function UMG.SpinBox.SetMinSliderValue //  // @ game+0xec27f00
	void SetMaxSliderValue(); // Function UMG.SpinBox.SetMaxSliderValue //  // @ game+0xec23c5c
	void OnSpinBoxValueCommittedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetMinValue(); // Function UMG.SpinBox.SetMinValue //  // @ game+0xec28874
	void OnSpinBoxValueChangedEvent__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue //  // @ game+0xec18b3c
	void GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue //  // @ game+0xec18abc
	void SetForegroundColor(); // Function UMG.SpinBox.SetForegroundColor //  // @ game+0xec1e58c
	void GetMaxValue(); // Function UMG.SpinBox.GetMaxValue //  // @ game+0xec18ae4
	void GetValue(); // Function UMG.SpinBox.GetValue //  // @ game+0xec194c4
};

// Class UMG.TableViewBase
// Size: 0x130 (Inherited: 0x130)  [layout: KHOP]
struct UTableViewBase : UWidget {

	void OnGenerateRowUObject__DelegateSignature(); // DelegateFunction UMG.TableViewBase.OnGenerateRowUObject__DelegateSignature //  // @ game+0x43bab4
};

// Class UMG.ListView
// Size: 0x170 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UListView : UTableViewBase {
	float ItemHeight; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode SelectionMode; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateRowEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class UMG.TileView
// Size: 0x170 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UTileView : UTableViewBase {
	float ItemWidth; // 0x130(0x04)
	float ItemHeight; // 0x134(0x04)
	struct TArray<struct UObject*> Items; // 0x138(0x10)
	enum class ESelectionMode SelectionMode; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	DelegateProperty OnGenerateTileEvent; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)

	void SetItemWidth(); // Function UMG.TileView.SetItemWidth //  // @ game+0xec21258
	void RequestListRefresh(); // Function UMG.TileView.RequestListRefresh //  // @ game+0xec1ac88
	void SetItemHeight(); // Function UMG.TileView.SetItemHeight //  // @ game+0xec208e4
};

// Class UMG.MultiLineEditableText
// Size: 0x448 (Inherited: 0x158)  [layout: LECH - offset chi la uoc luong]
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x198(0x208)
	bool bIsReadOnly; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FSlateFontInfo Font; // 0x3a8(0x68)
	bool AllowContextMenu; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastDelegate OnTextChanged; // 0x418(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0x428(0x10)
	char pad_438[0x10]; // 0x438(0x10)

	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature //  // @ game+0x43bab4
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetIsReadOnly(); // Function UMG.MultiLineEditableText.SetIsReadOnly //  // @ game+0xec207ec
	void GetText(); // Function UMG.MultiLineEditableText.GetText //  // @ game+0xec192f8
	void SetText(); // Function UMG.MultiLineEditableText.SetText //  // @ game+0xec2f600
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xce8 (Inherited: 0x158)  [layout: LECH - offset chi la uoc luong]
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x158(0x18)
	struct FText HintText; // 0x170(0x18)
	DelegateProperty HintTextDelegate; // 0x188(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x198(0x870)
	struct FTextBlockStyle TextStyle; // 0xa08(0x208)
	bool bIsReadOnly; // 0xc10(0x01)
	bool AllowContextMenu; // 0xc11(0x01)
	char pad_C12[0x6]; // 0xc12(0x06)
	struct USlateWidgetStyleAsset* Style; // 0xc18(0x08)
	struct FSlateFontInfo Font; // 0xc20(0x68)
	struct FLinearColor ForegroundColor; // 0xc88(0x10)
	struct FLinearColor BackgroundColor; // 0xc98(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xca8(0x10)
	struct FMulticastDelegate OnTextChanged; // 0xcb8(0x10)
	struct FMulticastDelegate OnTextCommitted; // 0xcc8(0x10)
	char pad_CD8[0x10]; // 0xcd8(0x10)

	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetText(); // Function UMG.MultiLineEditableTextBox.SetText //  // @ game+0xec2f6d4
	void SetError(); // Function UMG.MultiLineEditableTextBox.SetError //  // @ game+0xec1d7b4
	void GetText(); // Function UMG.MultiLineEditableTextBox.GetText //  // @ game+0xec193a4
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature //  // @ game+0x43bab4
	void SetIsReadOnly(); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly //  // @ game+0xec20868
};

// Class UMG.RichTextBlock
// Size: 0x420 (Inherited: 0x158)  [layout: LECH - offset chi la uoc luong]
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x158(0x18)
	DelegateProperty TextDelegate; // 0x170(0x10)
	struct FSlateFontInfo Font; // 0x180(0x68)
	struct FLinearColor Color; // 0x1e8(0x10)
	struct TArray<struct U*379e7bf376*> Decorators; // 0x1f8(0x10)
	char pad_208[0x218]; // 0x208(0x218)
};

// Class UMG.Throbber
// Size: 0x1e0 (Inherited: 0x130)  [layout: LECH - offset chi la uoc luong]
struct UThrobber : UWidget {
	int32 NumberOfPieces; // 0x130(0x04)
	bool bAnimateHorizontally; // 0x134(0x01)
	bool bAnimateVertically; // 0x135(0x01)
	bool bAnimateOpacity; // 0x136(0x01)
	char pad_137[0x1]; // 0x137(0x01)
	struct USlateBrushAsset* PieceImage; // 0x138(0x08)
	struct FSlateBrush Image; // 0x140(0x90)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void SetAnimateHorizontally(); // Function UMG.Throbber.SetAnimateHorizontally //  // @ game+0xec1bb34
	void SetNumberOfPieces(); // Function UMG.Throbber.SetNumberOfPieces //  // @ game+0xec29464
	void SetAnimateOpacity(); // Function UMG.Throbber.SetAnimateOpacity //  // @ game+0xec1bbe0
	void SetAnimateVertically(); // Function UMG.Throbber.SetAnimateVertically //  // @ game+0xec1bc90
};

// Class UMG.*7fa8406bd3
// Size: 0x380 (Inherited: 0x330)  [layout: LECH - offset chi la uoc luong]
struct U*7fa8406bd3 : UMovieSceneSequence {
	struct FMulticastDelegate OnAnimationStarted; // 0x330(0x10)
	struct FMulticastDelegate OnAnimationFinished; // 0x340(0x10)
	struct UMovieScene* MovieScene; // 0x350(0x08)
	struct TArray<struct F*72afb62c8c> *ca0ce529f5; // 0x358(0x10)
	struct FString *edc59a6ea1; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)

	void *c7a91f635b(); // Function UMG.*7fa8406bd3.*c7a91f635b //  // @ game+0xec191f0
	void *57790a5764(); // Function UMG.*7fa8406bd3.*57790a5764 //  // @ game+0xec17880
};

// Class UMG.*c55306ae2a
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*c55306ae2a : UBlueprintFunctionLibrary {

	void *a3c83c447d(); // Function UMG.*c55306ae2a.*a3c83c447d //  // @ game+0xec171c4
	void *a576a29797(); // Function UMG.*c55306ae2a.*a576a29797 //  // @ game+0xec15adc
	void CaptureJoystick(); // Function UMG.*c55306ae2a.CaptureJoystick //  // @ game+0xec151f8
	void *afb905599a(); // Function UMG.*c55306ae2a.*afb905599a //  // @ game+0xec196f0
	void *41d79a3da4(); // Function UMG.*c55306ae2a.*41d79a3da4 //  // @ game+0xec19a08
	void *35661802ef(); // Function UMG.*c55306ae2a.*35661802ef //  // @ game+0xec17784
	void *762d094ac7(); // Function UMG.*c55306ae2a.*762d094ac7 //  // @ game+0xec16a18
	void *e385a266da(); // Function UMG.*c55306ae2a.*e385a266da //  // @ game+0xec153f4
	void *14464e06a0(); // Function UMG.*c55306ae2a.*14464e06a0 //  // @ game+0xec15bf4
	void *bf1fe39649(); // Function UMG.*c55306ae2a.*bf1fe39649 //  // @ game+0xec17f30
	void *374a82954d(); // Function UMG.*c55306ae2a.*374a82954d //  // @ game+0xec17a5c
	void *b2646e525a(); // Function UMG.*c55306ae2a.*b2646e525a //  // @ game+0xec16f40
	void *006ccf75f5(); // Function UMG.*c55306ae2a.*006ccf75f5 //  // @ game+0xec20284
	void *1d9e1fae0d(); // Function UMG.*c55306ae2a.*1d9e1fae0d //  // @ game+0xec2003c
	void *ea5dc98042(); // Function UMG.*c55306ae2a.*ea5dc98042 //  // @ game+0xec176ec
	void *ced13f6288(); // Function UMG.*c55306ae2a.*ced13f6288 //  // @ game+0xec19f34
	void *0e608f6b9a(); // Function UMG.*c55306ae2a.*0e608f6b9a //  // @ game+0xec151dc
	void *e49d37968b(); // Function UMG.*c55306ae2a.*e49d37968b //  // @ game+0xec17c08
	void *6a0afb05ae(); // Function UMG.*c55306ae2a.*6a0afb05ae //  // @ game+0xec15ddc
	void *aa9a7bb157(); // Function UMG.*c55306ae2a.*aa9a7bb157 //  // @ game+0xec167b8
	void *c54c01e3f1(); // Function UMG.*c55306ae2a.*c54c01e3f1 //  // @ game+0xec151f8
	void SetMousePosition(); // Function UMG.*c55306ae2a.SetMousePosition //  // @ game+0xec29260
	void *af23626b11(); // Function UMG.*c55306ae2a.*af23626b11 //  // @ game+0xec19de4
	void *b336fbd99e(); // Function UMG.*c55306ae2a.*b336fbd99e //  // @ game+0xec1fc3c
	void *ee3062b866(); // Function UMG.*c55306ae2a.*ee3062b866 //  // @ game+0xec18fac
	void *934288fc19(); // Function UMG.*c55306ae2a.*934288fc19 //  // @ game+0xec33880
	void *4cf24fe9c3(); // Function UMG.*c55306ae2a.*4cf24fe9c3 //  // @ game+0xec17b30
	void *057e3aba18(); // Function UMG.*c55306ae2a.*057e3aba18 //  // @ game+0xec338f4
	void *9d05daee0e(); // Function UMG.*c55306ae2a.*9d05daee0e //  // @ game+0xec173e0
	void *78acfe1b93(); // Function UMG.*c55306ae2a.*78acfe1b93 //  // @ game+0xec16008
	void *6b9dc9c7f8(); // Function UMG.*c55306ae2a.*6b9dc9c7f8 //  // @ game+0xec200c0
	void Create(); // Function UMG.*c55306ae2a.Create //  // @ game+0xec159f0
	void *c45f7f2b0b(); // Function UMG.*c55306ae2a.*c45f7f2b0b //  // @ game+0xec1ce38
	void *872d3c19b8(); // Function UMG.*c55306ae2a.*872d3c19b8 //  // @ game+0xec16324
	void ReleaseJoystickCapture(); // Function UMG.*c55306ae2a.ReleaseJoystickCapture //  // @ game+0xec1a4e8
	void *4b3e2dc842(); // Function UMG.*c55306ae2a.*4b3e2dc842 //  // @ game+0xec1991c
	void *7cc0612d78(); // Function UMG.*c55306ae2a.*7cc0612d78 //  // @ game+0xec16d28
	void *7dd0d94b65(); // Function UMG.*c55306ae2a.*7dd0d94b65 //  // @ game+0xec1fe3c
	void *2bb0fa4230(); // Function UMG.*c55306ae2a.*2bb0fa4230 //  // @ game+0xec15fe4
	void *d364a1f124(); // Function UMG.*c55306ae2a.*d364a1f124 //  // @ game+0xec17298
	void *ea97ec946a(); // Function UMG.*c55306ae2a.*ea97ec946a //  // @ game+0xec17de8
	void *2c0638e33a(); // Function UMG.*c55306ae2a.*2c0638e33a //  // @ game+0xec16550
	void *39d0601ef3(); // Function UMG.*c55306ae2a.*39d0601ef3 //  // @ game+0xec15704
	void *59df31ba66(); // Function UMG.*c55306ae2a.*59df31ba66 //  // @ game+0xec1e464
	void *b2e72a3cc3(); // Function UMG.*c55306ae2a.*b2e72a3cc3 //  // @ game+0xec1ce38
	void *d4a9db29ab(); // Function UMG.*c55306ae2a.*d4a9db29ab //  // @ game+0xec1a720
	void *c292981cd7(); // Function UMG.*c55306ae2a.*c292981cd7 //  // @ game+0xec17d1c
	void *391955b9d9(); // Function UMG.*c55306ae2a.*391955b9d9 //  // @ game+0xec19bc0
	void *5ee6e3acb1(); // Function UMG.*c55306ae2a.*5ee6e3acb1 //  // @ game+0xec161b0
	void *78ef7a09db(); // Function UMG.*c55306ae2a.*78ef7a09db //  // @ game+0xec19c94
	void *6f6bbe9cb1(); // Function UMG.*c55306ae2a.*6f6bbe9cb1 //  // @ game+0xec1e6e4
};

// Class UMG.*16a134b7e3
// Size: 0x680 (Inherited: 0x480)  [layout: LECH - offset chi la uoc luong]
struct U*16a134b7e3 : USceneComponent {
	struct FMulticastDelegate OnHoveredWidgetChanged; // 0x478(0x10)
	char pad_488[0x10]; // 0x488(0x10)
	int32 VirtualUserIndex; // 0x498(0x04)
	float PointerIndex; // 0x49c(0x04)
	enum class ECollisionChannel TraceChannel; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	float InteractionDistance; // 0x4a4(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x4a8(0x01)
	bool bEnableHitTesting; // 0x4a9(0x01)
	bool bShowDebug; // 0x4aa(0x01)
	char pad_4AB[0x1]; // 0x4ab(0x01)
	struct FLinearColor DebugColor; // 0x4ac(0x10)
	char pad_4BC[0x7c]; // 0x4bc(0x7c)
	struct FHitResult *4b6615b3b1; // 0x538(0x90)
	struct FVector2D *e6b01e1108; // 0x5c8(0x08)
	struct FVector2D *ac70f1b823; // 0x5d0(0x08)
	struct UWidgetComponent* *d258fb683b; // 0x5d8(0x08)
	struct FHitResult *d79d93161e; // 0x5e0(0x90)
	bool *266e2f8240; // 0x670(0x01)
	bool *1e2198ab4b; // 0x671(0x01)
	bool *01c7f91fc2; // 0x672(0x01)
	char pad_673[0xd]; // 0x673(0x0d)

	void *268b241949(); // Function UMG.*16a134b7e3.*268b241949 //  // @ game+0xec1b72c
	void *b340c2eb30(); // Function UMG.*16a134b7e3.*b340c2eb30 //  // @ game+0xec16cac
	void *f2ee5fbdaf(); // Function UMG.*16a134b7e3.*f2ee5fbdaf //  // @ game+0xec1a044
	void *bd0dd516e4(); // Function UMG.*16a134b7e3.*bd0dd516e4 //  // @ game+0xec1d46c
	void *c55b01c86d(); // Function UMG.*16a134b7e3.*c55b01c86d //  // @ game+0xec1a138
	void *045a27e23f(); // Function UMG.*16a134b7e3.*045a27e23f //  // @ game+0xec1998c
	void *4d3149e97a(); // Function UMG.*16a134b7e3.*4d3149e97a //  // @ game+0xec19974
	void *8068cc403e(); // Function UMG.*16a134b7e3.*8068cc403e //  // @ game+0xec18090
	void *a632bb2a16(); // Function UMG.*16a134b7e3.*a632bb2a16 //  // @ game+0xec17a44
	void *5ba053f6fb(); // Function UMG.*16a134b7e3.*5ba053f6fb //  // @ game+0xec1a260
	void *f009af15dc(); // Function UMG.*16a134b7e3.*f009af15dc //  // @ game+0xec1a834
	void *87cf61b229(); // Function UMG.*16a134b7e3.*87cf61b229 //  // @ game+0xec1a62c
	void *41e72fa1f5(); // Function UMG.*16a134b7e3.*41e72fa1f5 //  // @ game+0xec199a4
	void *18302dc904(); // Function UMG.*16a134b7e3.*18302dc904 //  // @ game+0xec1acf8
};

// Class UMG.*6d9bab1738
// Size: 0x30 (Inherited: 0x30)  [layout: KHOP]
struct U*6d9bab1738 : UBlueprintFunctionLibrary {

	void *78cb3dda7a(); // Function UMG.*6d9bab1738.*78cb3dda7a //  // @ game+0xec333c8
	void *bd8379466b(); // Function UMG.*6d9bab1738.*bd8379466b //  // @ game+0xec33680
	void *942bc9bd33(); // Function UMG.*6d9bab1738.*942bc9bd33 //  // @ game+0xec1a91c
	void *e9dd0b80b6(); // Function UMG.*6d9bab1738.*e9dd0b80b6 //  // @ game+0xec19600
	void *b1265a3bc4(); // Function UMG.*6d9bab1738.*b1265a3bc4 //  // @ game+0xec3317c
	void *74e208071e(); // Function UMG.*6d9bab1738.*74e208071e //  // @ game+0xec334b0
	void *dabd9595b2(); // Function UMG.*6d9bab1738.*dabd9595b2 //  // @ game+0xec332e0
	void *1a04abac60(); // Function UMG.*6d9bab1738.*1a04abac60 //  // @ game+0xec33264
	void *cb93c58f02(); // Function UMG.*6d9bab1738.*cb93c58f02 //  // @ game+0xec33598
	void *3348914d82(); // Function UMG.*6d9bab1738.*3348914d82 //  // @ game+0xec1a348
	void *6f091ad384(); // Function UMG.*6d9bab1738.*6f091ad384 //  // @ game+0xec19584
	void *b371ccde6b(); // Function UMG.*6d9bab1738.*b371ccde6b //  // @ game+0xec18b8c
};

// Class UMG.WidgetNavigation
// Size: 0xc0 (Inherited: 0x30)  [layout: KHOP]
struct UWidgetNavigation : UObject {
	struct F*5638a9173e Up; // 0x30(0x18)
	struct F*5638a9173e Down; // 0x48(0x18)
	struct F*5638a9173e Left; // 0x60(0x18)
	struct F*5638a9173e Right; // 0x78(0x18)
	struct F*5638a9173e Next; // 0x90(0x18)
	struct F*5638a9173e Previous; // 0xa8(0x18)
};

// Class UMG.WidgetTree
// Size: 0x38 (Inherited: 0x30)  [layout: KHOP]
struct UWidgetTree : UObject {
	struct UWidget* *4d13094b47; // 0x30(0x08)
};

