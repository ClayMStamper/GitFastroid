#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GemScript
struct  GemScript_t1974344176  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GemScript::movingGem
	bool ___movingGem_2;
	// System.Single GemScript::speed
	float ___speed_3;
	// System.Int32 GemScript::directionDecider
	int32_t ___directionDecider_4;

public:
	inline static int32_t get_offset_of_movingGem_2() { return static_cast<int32_t>(offsetof(GemScript_t1974344176, ___movingGem_2)); }
	inline bool get_movingGem_2() const { return ___movingGem_2; }
	inline bool* get_address_of_movingGem_2() { return &___movingGem_2; }
	inline void set_movingGem_2(bool value)
	{
		___movingGem_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(GemScript_t1974344176, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_directionDecider_4() { return static_cast<int32_t>(offsetof(GemScript_t1974344176, ___directionDecider_4)); }
	inline int32_t get_directionDecider_4() const { return ___directionDecider_4; }
	inline int32_t* get_address_of_directionDecider_4() { return &___directionDecider_4; }
	inline void set_directionDecider_4(int32_t value)
	{
		___directionDecider_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
