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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Highscore
struct  Highscore_t2402909446  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Highscore::text
	Text_t356221433 * ___text_2;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Highscore_t2402909446, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}
};

struct Highscore_t2402909446_StaticFields
{
public:
	// System.Single Highscore::highscore
	float ___highscore_3;

public:
	inline static int32_t get_offset_of_highscore_3() { return static_cast<int32_t>(offsetof(Highscore_t2402909446_StaticFields, ___highscore_3)); }
	inline float get_highscore_3() const { return ___highscore_3; }
	inline float* get_address_of_highscore_3() { return &___highscore_3; }
	inline void set_highscore_3(float value)
	{
		___highscore_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
