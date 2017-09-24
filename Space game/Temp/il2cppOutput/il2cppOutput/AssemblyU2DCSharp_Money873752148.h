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

// Money
struct  Money_t873752148  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Money::text
	Text_t356221433 * ___text_2;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Money_t873752148, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}
};

struct Money_t873752148_StaticFields
{
public:
	// System.Int32 Money::money
	int32_t ___money_3;

public:
	inline static int32_t get_offset_of_money_3() { return static_cast<int32_t>(offsetof(Money_t873752148_StaticFields, ___money_3)); }
	inline int32_t get_money_3() const { return ___money_3; }
	inline int32_t* get_address_of_money_3() { return &___money_3; }
	inline void set_money_3(int32_t value)
	{
		___money_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
