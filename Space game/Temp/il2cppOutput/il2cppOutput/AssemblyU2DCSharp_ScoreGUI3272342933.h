#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreGUI
struct  ScoreGUI_t3272342933  : public MonoBehaviour_t1158329972
{
public:
	// System.String ScoreGUI::index
	String_t* ___index_2;
	// System.String ScoreGUI::username
	String_t* ___username_3;
	// System.String ScoreGUI::score
	String_t* ___score_4;
	// UnityEngine.UI.Text ScoreGUI::myIndex
	Text_t356221433 * ___myIndex_5;
	// UnityEngine.UI.Text ScoreGUI::myUsername
	Text_t356221433 * ___myUsername_6;
	// UnityEngine.UI.Text ScoreGUI::myScore
	Text_t356221433 * ___myScore_7;
	// System.Boolean ScoreGUI::isMyName
	bool ___isMyName_8;
	// UnityEngine.UI.Image ScoreGUI::myBG
	Image_t2042527209 * ___myBG_9;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___index_2)); }
	inline String_t* get_index_2() const { return ___index_2; }
	inline String_t** get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(String_t* value)
	{
		___index_2 = value;
		Il2CppCodeGenWriteBarrier(&___index_2, value);
	}

	inline static int32_t get_offset_of_username_3() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___username_3)); }
	inline String_t* get_username_3() const { return ___username_3; }
	inline String_t** get_address_of_username_3() { return &___username_3; }
	inline void set_username_3(String_t* value)
	{
		___username_3 = value;
		Il2CppCodeGenWriteBarrier(&___username_3, value);
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___score_4)); }
	inline String_t* get_score_4() const { return ___score_4; }
	inline String_t** get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(String_t* value)
	{
		___score_4 = value;
		Il2CppCodeGenWriteBarrier(&___score_4, value);
	}

	inline static int32_t get_offset_of_myIndex_5() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___myIndex_5)); }
	inline Text_t356221433 * get_myIndex_5() const { return ___myIndex_5; }
	inline Text_t356221433 ** get_address_of_myIndex_5() { return &___myIndex_5; }
	inline void set_myIndex_5(Text_t356221433 * value)
	{
		___myIndex_5 = value;
		Il2CppCodeGenWriteBarrier(&___myIndex_5, value);
	}

	inline static int32_t get_offset_of_myUsername_6() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___myUsername_6)); }
	inline Text_t356221433 * get_myUsername_6() const { return ___myUsername_6; }
	inline Text_t356221433 ** get_address_of_myUsername_6() { return &___myUsername_6; }
	inline void set_myUsername_6(Text_t356221433 * value)
	{
		___myUsername_6 = value;
		Il2CppCodeGenWriteBarrier(&___myUsername_6, value);
	}

	inline static int32_t get_offset_of_myScore_7() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___myScore_7)); }
	inline Text_t356221433 * get_myScore_7() const { return ___myScore_7; }
	inline Text_t356221433 ** get_address_of_myScore_7() { return &___myScore_7; }
	inline void set_myScore_7(Text_t356221433 * value)
	{
		___myScore_7 = value;
		Il2CppCodeGenWriteBarrier(&___myScore_7, value);
	}

	inline static int32_t get_offset_of_isMyName_8() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___isMyName_8)); }
	inline bool get_isMyName_8() const { return ___isMyName_8; }
	inline bool* get_address_of_isMyName_8() { return &___isMyName_8; }
	inline void set_isMyName_8(bool value)
	{
		___isMyName_8 = value;
	}

	inline static int32_t get_offset_of_myBG_9() { return static_cast<int32_t>(offsetof(ScoreGUI_t3272342933, ___myBG_9)); }
	inline Image_t2042527209 * get_myBG_9() const { return ___myBG_9; }
	inline Image_t2042527209 ** get_address_of_myBG_9() { return &___myBG_9; }
	inline void set_myBG_9(Image_t2042527209 * value)
	{
		___myBG_9 = value;
		Il2CppCodeGenWriteBarrier(&___myBG_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
