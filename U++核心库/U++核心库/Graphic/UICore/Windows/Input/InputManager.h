#pragma once
#include "InputDevice.h"

namespace System
{
	namespace UI
	{
		namespace Windows
		{
			namespace Input
			{
				#pragma region Key
				__uenum __uobjdef(asm = UICore, ns = System::UI::Windows::Input, ver = 1.0) UICORE_API Key : __uobject
				{
					__uvalue_begin(Key, UInt)
					__uvalue(None)
					__uvalue(Cancel)
					__uvalue(Back)
					__uvalue(Tab)
					__uvalue(LineFeed)
					__uvalue(Clear)
					__uvalue(Return)
					__uvalue(Enter, Return)
					__uvalue(Pause)
					__uvalue(Capital)
					__uvalue(CapsLock,Capital)
					__uvalue(KanaMode)
					__uvalue(HangulMode,KanaMode)
					__uvalue(JunjaMode)
					__uvalue(FinalMode)
					__uvalue(HanjaMode)
					__uvalue(KanjiMode,HanjaMode)
					__uvalue(Escape)
					__uvalue(ImeConvert)
					__uvalue(ImeNonConvert)
					__uvalue(ImeAccept)
					__uvalue(ImeModeChange)
					__uvalue(Space)
					__uvalue(Prior)
					__uvalue(PageUp,Prior)
					__uvalue(Next)
					__uvalue(PageDown,Next)
					__uvalue(End)
					__uvalue(Home)
					__uvalue(Left)
					__uvalue(Up)
					__uvalue(Right)
					__uvalue(Down)
					__uvalue(Select)
					__uvalue(Print)
					__uvalue(Execute)
					__uvalue(Snapshot)
					__uvalue(PrintScreen,Snapshot)
					__uvalue(Insert)
					__uvalue(Delete)
					__uvalue(Help)
					__uvalue(D0)
					__uvalue(D1)
					__uvalue(D2)
					__uvalue(D3)
					__uvalue(D4)
					__uvalue(D5)
					__uvalue(D6)
					__uvalue(D7)
					__uvalue(D8)
					__uvalue(D9)
					__uvalue(A)
					__uvalue(B)
					__uvalue(C)
					__uvalue(D)
					__uvalue(E)
					__uvalue(F)
					__uvalue(G)
					__uvalue(H)
					__uvalue(I)
					__uvalue(J)
					__uvalue(K)
					__uvalue(L)
					__uvalue(M)
					__uvalue(N)
					__uvalue(O)
					__uvalue(P)
					__uvalue(Q)
					__uvalue(R)
					__uvalue(S)
					__uvalue(T)
					__uvalue(U)
					__uvalue(V)
					__uvalue(W)
					__uvalue(X)
					__uvalue(Y)
					__uvalue(Z)
					__uvalue(LWin)
					__uvalue(RWin)
					__uvalue(Apps)
					__uvalue(Sleep)
					__uvalue(NumPad0)
					__uvalue(NumPad1)
					__uvalue(NumPad2)
					__uvalue(NumPad3)
					__uvalue(NumPad4)
					__uvalue(NumPad5)
					__uvalue(NumPad6)
					__uvalue(NumPad7)
					__uvalue(NumPad8)
					__uvalue(NumPad9)
					__uvalue(Multiply)
					__uvalue(Add)
					__uvalue(Separator)
					__uvalue(Subtract)
					__uvalue(Decimal)
					__uvalue(Divide)
					__uvalue(F1)
					__uvalue(F2)
					__uvalue(F3)
					__uvalue(F4)
					__uvalue(F5)
					__uvalue(F6)
					__uvalue(F7)
					__uvalue(F8)
					__uvalue(F9)
					__uvalue(F10)
					__uvalue(F11)
					__uvalue(F12)
					__uvalue(F13)
					__uvalue(F14)
					__uvalue(F15)
					__uvalue(F16)
					__uvalue(F17)
					__uvalue(F18)
					__uvalue(F19)
					__uvalue(F20)
					__uvalue(F21)
					__uvalue(F22)
					__uvalue(F23)
					__uvalue(F24)
					__uvalue(NumLock)
					__uvalue(Scroll)
					__uvalue(LeftShift)
					__uvalue(RightShift)
					__uvalue(LeftCtrl)
					__uvalue(RightCtrl)
					__uvalue(LeftAlt)
					__uvalue(RightAlt)
					__uvalue(BrowserBack)
					__uvalue(BrowserForward)
					__uvalue(BrowserRefresh)
					__uvalue(BrowserStop)
					__uvalue(BrowserSearch)
					__uvalue(BrowserFavorites)
					__uvalue(BrowserHome)
					__uvalue(VolumeMute)
					__uvalue(VolumeDown)
					__uvalue(VolumeUp)
					__uvalue(MediaNextTrack)
					__uvalue(MediaPreviousTrack)
					__uvalue(MediaStop)
					__uvalue(MediaPlayPause)
					__uvalue(LaunchMail)
					__uvalue(SelectMedia)
					__uvalue(LaunchApplication1)
					__uvalue(LaunchApplication2)
					__uvalue(Oem1)
					__uvalue(OemSemicolon = Oem1)
					__uvalue(OemPlus)
					__uvalue(OemComma)
					__uvalue(OemMinus)
					__uvalue(OemPeriod)
					__uvalue(Oem2)
					__uvalue(OemQuestion = Oem2)
					__uvalue(Oem3)
					__uvalue(OemTilde = Oem3)
					__uvalue(AbntC1)
					__uvalue(AbntC2)
					__uvalue(Oem4)
					__uvalue(OemOpenBrackets = Oem4)
					__uvalue(Oem5)
					__uvalue(OemPipe = Oem5)
					__uvalue(Oem6)
					__uvalue(OemCloseBrackets = Oem6)
					__uvalue(Oem7)
					__uvalue(OemQuotes = Oem7)
					__uvalue(Oem8)
					__uvalue(Oem102)
					__uvalue(OemBackslash = Oem102)
					__uvalue(ImeProcessed)
					__uvalue(System)
					__uvalue(OemAttn)
					__uvalue(DbeAlphanumeric = OemAttn)
					__uvalue(OemFinish)
					__uvalue(DbeKatakana = OemFinish)
					__uvalue(OemCopy)
					__uvalue(DbeHiragana = OemCopy)
					__uvalue(OemAuto)
					__uvalue(DbeSbcsChar = OemAuto)
					__uvalue(OemEnlw)
					__uvalue(DbeDbcsChar = OemEnlw)
					__uvalue(OemBackTab)
					__uvalue(DbeRoman = OemBackTab)
					__uvalue(Attn)
					__uvalue(DbeNoRoman = Attn)
					__uvalue(CrSel)
					__uvalue(DbeEnterWordRegisterMode = CrSel)
					__uvalue(ExSel)
					__uvalue(DbeEnterImeConfigureMode = ExSel)
					__uvalue(EraseEof)
					__uvalue(DbeFlushString = EraseEof)
					__uvalue(Play)
					__uvalue(DbeCodeInput = Play)
					__uvalue(Zoom)
					__uvalue(DbeNoCodeInput = Zoom)
					__uvalue(NoName)
					__uvalue(DbeDetermineString = NoName)
					__uvalue(Pa1)
					__uvalue(DbeEnterDialogConversionMode = Pa1)
					__uvalue(OemClear)
					__uvalue(DeadCharProcessed)
					__uvalue_end(Key, None)
				};
				#pragma endregion

				__uenum __uobjdef(asm = UICore, ns = System::UI::Windows::Input, ver = 1.0) UICORE_API InputModifiers : __uobject
				{
					__uvalue_begin(InputModifiers, UInt)
					__uvalue(None,0)
					__uvalue(Alt,1)
					__uvalue(Control,2)
					__uvalue(Shift,4)
					__uvalue(Windows,8)
					__uvalue(LeftMouseButton,16)
					__uvalue(RightMouseButton,32)
					__uvalue(MiddleMouseButton,64)
					__uvalue_end(InputModifiers, None)
				};

				__uenum __uobjdef(asm = UICore, ns = System::UI::Windows::Input, ver = 1.0) UICORE_API KeyStates : __uobject
				{ 
					__uvalue_begin(KeyStates, UInt)
					__uvalue(None,0)
					__uvalue(Down,1)
					__uvalue(Toggled,2)
					__uvalue_end(KeyStates, None)
				};
			}
		}
	}
}

namespace System
{
	__uenum_flag(System::UI::Windows::Input::InputModifiers)
	__uenum_flag(System::UI::Windows::Input::KeyStates)
}