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

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard/Score
struct  Score_t892128102 
{
public:
	// System.String Leaderboard/Score::name
	String_t* ___name_0;
	// System.Int32 Leaderboard/Score::score
	int32_t ___score_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Score_t892128102, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(Score_t892128102, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Leaderboard/Score
struct Score_t892128102_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___score_1;
};
// Native definition for marshalling of: Leaderboard/Score
struct Score_t892128102_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___score_1;
};
