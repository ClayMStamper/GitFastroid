#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Instruction
struct  Instruction_t3275532264  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Instruction::text
	Text_t356221433 * ___text_2;
	// System.Single Instruction::fadeTime
	float ___fadeTime_3;
	// UnityEngine.Color Instruction::currentColor
	Color_t2020392075  ___currentColor_4;
	// System.Single Instruction::alphaChange
	float ___alphaChange_5;
	// System.Int32 Instruction::shown
	int32_t ___shown_6;
	// System.Boolean Instruction::dim
	bool ___dim_7;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___currentColor_4)); }
	inline Color_t2020392075  get_currentColor_4() const { return ___currentColor_4; }
	inline Color_t2020392075 * get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(Color_t2020392075  value)
	{
		___currentColor_4 = value;
	}

	inline static int32_t get_offset_of_alphaChange_5() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___alphaChange_5)); }
	inline float get_alphaChange_5() const { return ___alphaChange_5; }
	inline float* get_address_of_alphaChange_5() { return &___alphaChange_5; }
	inline void set_alphaChange_5(float value)
	{
		___alphaChange_5 = value;
	}

	inline static int32_t get_offset_of_shown_6() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___shown_6)); }
	inline int32_t get_shown_6() const { return ___shown_6; }
	inline int32_t* get_address_of_shown_6() { return &___shown_6; }
	inline void set_shown_6(int32_t value)
	{
		___shown_6 = value;
	}

	inline static int32_t get_offset_of_dim_7() { return static_cast<int32_t>(offsetof(Instruction_t3275532264, ___dim_7)); }
	inline bool get_dim_7() const { return ___dim_7; }
	inline bool* get_address_of_dim_7() { return &___dim_7; }
	inline void set_dim_7(bool value)
	{
		___dim_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
