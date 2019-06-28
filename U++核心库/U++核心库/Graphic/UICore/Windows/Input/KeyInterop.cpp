#include "Keyboard.h"
using namespace System;
using namespace System::UI::Windows::Input;

#pragma warning( push )
#pragma warning( disable : 4503)

typedef CompileTimeMap< Key::None, 
CompileTimeMapPair< 0, Key::None >,
CompileTimeMapPair< 3, Key::Cancel >,
CompileTimeMapPair< 8, Key::Back >,
CompileTimeMapPair< 9, Key::Tab >,
CompileTimeMapPair< 12, Key::Clear >,
CompileTimeMapPair< 13, Key::Return >,
CompileTimeMapPair< 16, Key::LeftShift >,
CompileTimeMapPair< 17, Key::LeftCtrl >,
CompileTimeMapPair< 18, Key::LeftAlt >,
CompileTimeMapPair< 19, Key::Pause >,
CompileTimeMapPair< 20, Key::Capital >,
CompileTimeMapPair< 21, Key::KanaMode >,
CompileTimeMapPair< 23, Key::JunjaMode >,
CompileTimeMapPair< 24, Key::FinalMode >,
CompileTimeMapPair< 25, Key::HanjaMode >,
CompileTimeMapPair< 27, Key::Escape >,
CompileTimeMapPair< 28, Key::ImeConvert >,
CompileTimeMapPair< 29, Key::ImeNonConvert >,
CompileTimeMapPair< 30, Key::ImeAccept >,
CompileTimeMapPair< 31, Key::ImeModeChange >,
CompileTimeMapPair< 32, Key::Space >,
CompileTimeMapPair< 33, Key::PageUp >,
CompileTimeMapPair< 34, Key::Next >,
CompileTimeMapPair< 35, Key::End >,
CompileTimeMapPair< 36, Key::Home >,
CompileTimeMapPair< 37, Key::Left >,
CompileTimeMapPair< 38, Key::Up >,
CompileTimeMapPair< 39, Key::Right >,
CompileTimeMapPair< 40, Key::Down >,
CompileTimeMapPair< 41, Key::Select >,
CompileTimeMapPair< 42, Key::Print >,
CompileTimeMapPair< 43, Key::Execute >,
CompileTimeMapPair< 44, Key::Snapshot >,
CompileTimeMapPair< 45, Key::Insert >,
CompileTimeMapPair< 46, Key::Delete >,
CompileTimeMapPair< 47, Key::Help >,
CompileTimeMapPair< 48, Key::D0 >,
CompileTimeMapPair< 49, Key::D1 >,
CompileTimeMapPair< 50, Key::D2 >,
CompileTimeMapPair< 51, Key::D3 >,
CompileTimeMapPair< 52, Key::D4 >,
CompileTimeMapPair< 53, Key::D5 >,
CompileTimeMapPair< 54, Key::D6 >,
CompileTimeMapPair< 55, Key::D7 >,
CompileTimeMapPair< 56, Key::D8 >,
CompileTimeMapPair< 57, Key::D9 >,
CompileTimeMapPair< 65, Key::A >,
CompileTimeMapPair< 66, Key::B >,
CompileTimeMapPair< 67, Key::C >,
CompileTimeMapPair< 68, Key::D >,
CompileTimeMapPair< 69, Key::E >,
CompileTimeMapPair< 70, Key::F >,
CompileTimeMapPair< 71, Key::G >,
CompileTimeMapPair< 72, Key::H >,
CompileTimeMapPair< 73, Key::I >,
CompileTimeMapPair< 74, Key::J >,
CompileTimeMapPair< 75, Key::K >,
CompileTimeMapPair< 76, Key::L >,
CompileTimeMapPair< 77, Key::M >,
CompileTimeMapPair< 78, Key::N >,
CompileTimeMapPair< 79, Key::O >,
CompileTimeMapPair< 80, Key::P >,
CompileTimeMapPair< 81, Key::Q >,
CompileTimeMapPair< 82, Key::R >,
CompileTimeMapPair< 83, Key::S >,
CompileTimeMapPair< 84, Key::T >,
CompileTimeMapPair< 85, Key::U >,
CompileTimeMapPair< 86, Key::V >,
CompileTimeMapPair< 87, Key::W >,
CompileTimeMapPair< 88, Key::X >,
CompileTimeMapPair< 89, Key::Y >,
CompileTimeMapPair< 90, Key::Z >,
CompileTimeMapPair< 91, Key::LWin >,
CompileTimeMapPair< 92, Key::RWin >,
CompileTimeMapPair< 93, Key::Apps >,
CompileTimeMapPair< 95, Key::Sleep >,
CompileTimeMapPair< 96, Key::NumPad0 >,
CompileTimeMapPair< 97, Key::NumPad1 >,
CompileTimeMapPair< 98, Key::NumPad2 >,
CompileTimeMapPair< 99, Key::NumPad3 >,
CompileTimeMapPair< 100, Key::NumPad4 >,
CompileTimeMapPair< 101, Key::NumPad5 >,
CompileTimeMapPair< 102, Key::NumPad6 >,
CompileTimeMapPair< 103, Key::NumPad7 >,
CompileTimeMapPair< 104, Key::NumPad8 >,
CompileTimeMapPair< 105, Key::NumPad9 >,
CompileTimeMapPair< 106, Key::Multiply >,
CompileTimeMapPair< 107, Key::Add >,
CompileTimeMapPair< 108, Key::Separator >,
CompileTimeMapPair< 109, Key::Subtract >,
CompileTimeMapPair< 110, Key::Decimal >,
CompileTimeMapPair< 111, Key::Divide >,
CompileTimeMapPair< 112, Key::F1 >,
CompileTimeMapPair< 113, Key::F2 >,
CompileTimeMapPair< 114, Key::F3 >,
CompileTimeMapPair< 115, Key::F4 >,
CompileTimeMapPair< 116, Key::F5 >,
CompileTimeMapPair< 117, Key::F6 >,
CompileTimeMapPair< 118, Key::F7 >,
CompileTimeMapPair< 119, Key::F8 >,
CompileTimeMapPair< 120, Key::F9 >,
CompileTimeMapPair< 121, Key::F10 >,
CompileTimeMapPair< 122, Key::F11 >,
CompileTimeMapPair< 123, Key::F12 >,
CompileTimeMapPair< 124, Key::F13 >,
CompileTimeMapPair< 125, Key::F14 >,
CompileTimeMapPair< 126, Key::F15 >,
CompileTimeMapPair< 127, Key::F16 >,
CompileTimeMapPair< 128, Key::F17 >,
CompileTimeMapPair< 129, Key::F18 >,
CompileTimeMapPair< 130, Key::F19 >,
CompileTimeMapPair< 131, Key::F20 >,
CompileTimeMapPair< 132, Key::F21 >,
CompileTimeMapPair< 133, Key::F22 >,
CompileTimeMapPair< 134, Key::F23 >,
CompileTimeMapPair< 135, Key::F24 >,
CompileTimeMapPair< 144, Key::NumLock >,
CompileTimeMapPair< 145, Key::Scroll >,
CompileTimeMapPair< 160, Key::LeftShift >,
CompileTimeMapPair< 161, Key::RightShift >,
CompileTimeMapPair< 162, Key::LeftCtrl >,
CompileTimeMapPair< 163, Key::RightCtrl >,
CompileTimeMapPair< 164, Key::LeftAlt >,
CompileTimeMapPair< 165, Key::RightAlt >,
CompileTimeMapPair< 166, Key::BrowserBack >,
CompileTimeMapPair< 167, Key::BrowserForward >,
CompileTimeMapPair< 168, Key::BrowserRefresh >,
CompileTimeMapPair< 169, Key::BrowserStop >,
CompileTimeMapPair< 170, Key::BrowserSearch >,
CompileTimeMapPair< 171, Key::BrowserFavorites >,
CompileTimeMapPair< 172, Key::BrowserHome >,
CompileTimeMapPair< 173, Key::VolumeMute >,
CompileTimeMapPair< 174, Key::VolumeDown >,
CompileTimeMapPair< 175, Key::VolumeUp >,
CompileTimeMapPair< 176, Key::MediaNextTrack >,
CompileTimeMapPair< 177, Key::MediaPreviousTrack >,
CompileTimeMapPair< 178, Key::MediaStop >,
CompileTimeMapPair< 179, Key::MediaPlayPause >,
CompileTimeMapPair< 180, Key::LaunchMail >,
CompileTimeMapPair< 181, Key::SelectMedia >,
CompileTimeMapPair< 182, Key::LaunchApplication1 >,
CompileTimeMapPair< 183, Key::LaunchApplication2 >,
CompileTimeMapPair< 186, Key::Oem1 >,
CompileTimeMapPair< 187, Key::OemPlus >,
CompileTimeMapPair< 188, Key::OemComma >,
CompileTimeMapPair< 189, Key::OemMinus >,
CompileTimeMapPair< 190, Key::OemPeriod >,
CompileTimeMapPair< 191, Key::OemQuestion >,
CompileTimeMapPair< 192, Key::Oem3 >,
CompileTimeMapPair< 193, Key::AbntC1 >,
CompileTimeMapPair< 194, Key::AbntC2 >,
CompileTimeMapPair< 219, Key::OemOpenBrackets >,
CompileTimeMapPair< 220, Key::Oem5 >,
CompileTimeMapPair< 221, Key::Oem6 >,
CompileTimeMapPair< 222, Key::OemQuotes >,
CompileTimeMapPair< 223, Key::Oem8 >,
CompileTimeMapPair< 226, Key::OemBackslash >,
CompileTimeMapPair< 229, Key::ImeProcessed >,
CompileTimeMapPair< 240, Key::OemAttn >,
CompileTimeMapPair< 241, Key::OemFinish >,
CompileTimeMapPair< 242, Key::OemCopy >,
CompileTimeMapPair< 243, Key::DbeSbcsChar >,
CompileTimeMapPair< 244, Key::OemEnlw >,
CompileTimeMapPair< 245, Key::OemBackTab >,
CompileTimeMapPair< 246, Key::DbeNoRoman >,
CompileTimeMapPair< 247, Key::DbeEnterWordRegisterMode >,
CompileTimeMapPair< 248, Key::DbeEnterImeConfigureMode >,
CompileTimeMapPair< 249, Key::EraseEof >,
CompileTimeMapPair< 250, Key::Play >,
CompileTimeMapPair< 251, Key::DbeNoCodeInput >,
CompileTimeMapPair< 252, Key::NoName >,
CompileTimeMapPair< 253, Key::Pa1 >,
CompileTimeMapPair< 254, Key::OemClear >>
KeyInteropDictionary_KeyFromVirtualKey;

typedef CompileTimeMap<0,
CompileTimeMapPair<Key::None, 0>,
CompileTimeMapPair< Key::Cancel, 3 >,
CompileTimeMapPair< Key::Back, 8 >,
CompileTimeMapPair< Key::Tab, 9 >,
CompileTimeMapPair< Key::LineFeed, 0 >,
CompileTimeMapPair< Key::Clear, 12 >,
CompileTimeMapPair< Key::Return, 13 >,
CompileTimeMapPair< Key::Pause, 19 >,
CompileTimeMapPair< Key::Capital, 20 >,
CompileTimeMapPair< Key::KanaMode, 21 >,
CompileTimeMapPair< Key::JunjaMode, 23 >,
CompileTimeMapPair< Key::FinalMode, 24 >,
CompileTimeMapPair< Key::HanjaMode, 25 >,
CompileTimeMapPair< Key::Escape, 27 >,
CompileTimeMapPair< Key::ImeConvert, 28 >,
CompileTimeMapPair< Key::ImeNonConvert, 29 >,
CompileTimeMapPair< Key::ImeAccept, 30 >,
CompileTimeMapPair< Key::ImeModeChange, 31 >,
CompileTimeMapPair< Key::Space, 32 >,
CompileTimeMapPair< Key::PageUp, 33 >,
CompileTimeMapPair< Key::Next, 34 >,
CompileTimeMapPair< Key::End, 35 >,
CompileTimeMapPair< Key::Home, 36 >,
CompileTimeMapPair< Key::Left, 37 >,
CompileTimeMapPair< Key::Up, 38 >,
CompileTimeMapPair< Key::Right, 39 >,
CompileTimeMapPair< Key::Down, 40 >,
CompileTimeMapPair< Key::Select, 41 >,
CompileTimeMapPair< Key::Print, 42 >,
CompileTimeMapPair< Key::Execute, 43 >,
CompileTimeMapPair< Key::Snapshot, 44 >,
CompileTimeMapPair< Key::Insert, 45 >,
CompileTimeMapPair< Key::Delete, 46 >,
CompileTimeMapPair< Key::Help, 47 >,
CompileTimeMapPair< Key::D0, 48 >,
CompileTimeMapPair< Key::D1, 49 >,
CompileTimeMapPair< Key::D2, 50 >,
CompileTimeMapPair< Key::D3, 51 >,
CompileTimeMapPair< Key::D4, 52 >,
CompileTimeMapPair< Key::D5, 53 >,
CompileTimeMapPair< Key::D6, 54 >,
CompileTimeMapPair< Key::D7, 55 >,
CompileTimeMapPair< Key::D8, 56 >,
CompileTimeMapPair< Key::D9, 57 >,
CompileTimeMapPair< Key::A, 65 >,
CompileTimeMapPair< Key::B, 66 >,
CompileTimeMapPair< Key::C, 67 >,
CompileTimeMapPair< Key::D, 68 >,
CompileTimeMapPair< Key::E, 69 >,
CompileTimeMapPair< Key::F, 70 >,
CompileTimeMapPair< Key::G, 71 >,
CompileTimeMapPair< Key::H, 72 >,
CompileTimeMapPair< Key::I, 73 >,
CompileTimeMapPair< Key::J, 74 >,
CompileTimeMapPair< Key::K, 75 >,
CompileTimeMapPair< Key::L, 76 >,
CompileTimeMapPair< Key::M, 77 >,
CompileTimeMapPair< Key::N, 78 >,
CompileTimeMapPair< Key::O, 79 >,
CompileTimeMapPair< Key::P, 80 >,
CompileTimeMapPair< Key::Q, 81 >,
CompileTimeMapPair< Key::R, 82 >,
CompileTimeMapPair< Key::S, 83 >,
CompileTimeMapPair< Key::T, 84 >,
CompileTimeMapPair< Key::U, 85 >,
CompileTimeMapPair< Key::V, 86 >,
CompileTimeMapPair< Key::W, 87 >,
CompileTimeMapPair< Key::X, 88 >,
CompileTimeMapPair< Key::Y, 89 >,
CompileTimeMapPair< Key::Z, 90 >,
CompileTimeMapPair< Key::LWin, 91 >,
CompileTimeMapPair< Key::RWin, 92 >,
CompileTimeMapPair< Key::Apps, 93 >,
CompileTimeMapPair< Key::Sleep, 95 >,
CompileTimeMapPair< Key::NumPad0, 96 >,
CompileTimeMapPair< Key::NumPad1, 97 >,
CompileTimeMapPair< Key::NumPad2, 98 >,
CompileTimeMapPair< Key::NumPad3, 99 >,
CompileTimeMapPair< Key::NumPad4, 100 >,
CompileTimeMapPair< Key::NumPad5, 101 >,
CompileTimeMapPair< Key::NumPad6, 102 >,
CompileTimeMapPair< Key::NumPad7, 103 >,
CompileTimeMapPair< Key::NumPad8, 104 >,
CompileTimeMapPair< Key::NumPad9, 105 >,
CompileTimeMapPair< Key::Multiply, 106 >,
CompileTimeMapPair< Key::Add, 107 >,
CompileTimeMapPair< Key::Separator, 108 >,
CompileTimeMapPair< Key::Subtract, 109 >,
CompileTimeMapPair< Key::Decimal, 110 >,
CompileTimeMapPair< Key::Divide, 111 >,
CompileTimeMapPair< Key::F1, 112 >,
CompileTimeMapPair< Key::F2, 113 >,
CompileTimeMapPair< Key::F3, 114 >,
CompileTimeMapPair< Key::F4, 115 >,
CompileTimeMapPair< Key::F5, 116 >,
CompileTimeMapPair< Key::F6, 117 >,
CompileTimeMapPair< Key::F7, 118 >,
CompileTimeMapPair< Key::F8, 119 >,
CompileTimeMapPair< Key::F9, 120 >,
CompileTimeMapPair< Key::F10, 121 >,
CompileTimeMapPair< Key::F11, 122 >,
CompileTimeMapPair< Key::F12, 123 >,
CompileTimeMapPair< Key::F13, 124 >,
CompileTimeMapPair< Key::F14, 125 >,
CompileTimeMapPair< Key::F15, 126 >,
CompileTimeMapPair< Key::F16, 127 >,
CompileTimeMapPair< Key::F17, 128 >,
CompileTimeMapPair< Key::F18, 129 >,
CompileTimeMapPair< Key::F19, 130 >,
CompileTimeMapPair< Key::F20, 131 >,
CompileTimeMapPair< Key::F21, 132 >,
CompileTimeMapPair< Key::F22, 133 >,
CompileTimeMapPair< Key::F23, 134 >,
CompileTimeMapPair< Key::F24, 135 >,
CompileTimeMapPair< Key::NumLock, 144 >,
CompileTimeMapPair< Key::Scroll, 145 >,
CompileTimeMapPair< Key::LeftShift, 160 >,
CompileTimeMapPair< Key::RightShift, 161 >,
CompileTimeMapPair< Key::LeftCtrl, 162 >,
CompileTimeMapPair< Key::RightCtrl, 163 >,
CompileTimeMapPair< Key::LeftAlt, 164 >,
CompileTimeMapPair< Key::RightAlt, 165 >,
CompileTimeMapPair< Key::BrowserBack, 166 >,
CompileTimeMapPair< Key::BrowserForward, 167 >,
CompileTimeMapPair< Key::BrowserRefresh, 168 >,
CompileTimeMapPair< Key::BrowserStop, 169 >,
CompileTimeMapPair< Key::BrowserSearch, 170 >,
CompileTimeMapPair< Key::BrowserFavorites, 171 >,
CompileTimeMapPair< Key::BrowserHome, 172 >,
CompileTimeMapPair< Key::VolumeMute, 173 >,
CompileTimeMapPair< Key::VolumeDown, 174 >,
CompileTimeMapPair< Key::VolumeUp, 175 >,
CompileTimeMapPair< Key::MediaNextTrack, 176 >,
CompileTimeMapPair< Key::MediaPreviousTrack, 177 >,
CompileTimeMapPair< Key::MediaStop, 178 >,
CompileTimeMapPair< Key::MediaPlayPause, 179 >,
CompileTimeMapPair< Key::LaunchMail, 180 >,
CompileTimeMapPair< Key::SelectMedia, 181 >,
CompileTimeMapPair< Key::LaunchApplication1, 182 >,
CompileTimeMapPair< Key::LaunchApplication2, 183 >,
CompileTimeMapPair< Key::Oem1, 186 >,
CompileTimeMapPair< Key::OemPlus, 187 >,
CompileTimeMapPair< Key::OemComma, 188 >,
CompileTimeMapPair< Key::OemMinus, 189 >,
CompileTimeMapPair< Key::OemPeriod, 190 >,
CompileTimeMapPair< Key::OemQuestion, 191 >,
CompileTimeMapPair< Key::Oem3, 192 >,
CompileTimeMapPair< Key::AbntC1, 193 >,
CompileTimeMapPair< Key::AbntC2, 194 >,
CompileTimeMapPair< Key::OemOpenBrackets, 219 >,
CompileTimeMapPair< Key::Oem5, 220 >,
CompileTimeMapPair< Key::Oem6, 221 >,
CompileTimeMapPair< Key::OemQuotes, 222 >,
CompileTimeMapPair< Key::Oem8, 223 >,
CompileTimeMapPair< Key::OemBackslash, 226 >,
CompileTimeMapPair< Key::ImeProcessed, 229 >,
CompileTimeMapPair< Key::System, 0 >,
CompileTimeMapPair< Key::OemAttn, 240 >,
CompileTimeMapPair< Key::OemFinish, 241 >,
CompileTimeMapPair< Key::OemCopy, 242 >,
CompileTimeMapPair< Key::DbeSbcsChar, 243 >,
CompileTimeMapPair< Key::OemEnlw, 244 >,
CompileTimeMapPair< Key::OemBackTab, 245 >,
CompileTimeMapPair< Key::DbeNoRoman, 246 >,
CompileTimeMapPair< Key::DbeEnterWordRegisterMode, 247 >,
CompileTimeMapPair< Key::DbeEnterImeConfigureMode, 248 >,
CompileTimeMapPair< Key::EraseEof, 249 >,
CompileTimeMapPair< Key::Play, 250 >,
CompileTimeMapPair< Key::DbeNoCodeInput, 251 >,
CompileTimeMapPair< Key::NoName, 252 >,
CompileTimeMapPair< Key::Pa1, 253 >,
CompileTimeMapPair< Key::OemClear, 254 >,
CompileTimeMapPair< Key::DeadCharProcessed, 0 >>
KeyInteropDictionary_VirtualKeyFromKey;

Key KeyInterop::KeyFromVirtualKey(int virtualKey)
{
	return (Key::enumbase)KeyInteropDictionary_KeyFromVirtualKey::find(virtualKey);
}

int KeyInterop::VirtualKeyFromKey(Key key)
{
	return (int)KeyInteropDictionary_VirtualKeyFromKey::find(key);
}

#pragma warning( pop )