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

// AutoLoadNextLevel
struct  AutoLoadNextLevel_t2864077760  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AutoLoadNextLevel::autoLoadAfter
	float ___autoLoadAfter_2;
	// System.Int32 AutoLoadNextLevel::next
	int32_t ___next_3;

public:
	inline static int32_t get_offset_of_autoLoadAfter_2() { return static_cast<int32_t>(offsetof(AutoLoadNextLevel_t2864077760, ___autoLoadAfter_2)); }
	inline float get_autoLoadAfter_2() const { return ___autoLoadAfter_2; }
	inline float* get_address_of_autoLoadAfter_2() { return &___autoLoadAfter_2; }
	inline void set_autoLoadAfter_2(float value)
	{
		___autoLoadAfter_2 = value;
	}

	inline static int32_t get_offset_of_next_3() { return static_cast<int32_t>(offsetof(AutoLoadNextLevel_t2864077760, ___next_3)); }
	inline int32_t get_next_3() const { return ___next_3; }
	inline int32_t* get_address_of_next_3() { return &___next_3; }
	inline void set_next_3(int32_t value)
	{
		___next_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
