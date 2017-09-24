#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider[]
struct SliderU5BU5D_t1144817634;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SliderFixer
struct  SliderFixer_t3304162559  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider[] SliderFixer::sliders
	SliderU5BU5D_t1144817634* ___sliders_2;

public:
	inline static int32_t get_offset_of_sliders_2() { return static_cast<int32_t>(offsetof(SliderFixer_t3304162559, ___sliders_2)); }
	inline SliderU5BU5D_t1144817634* get_sliders_2() const { return ___sliders_2; }
	inline SliderU5BU5D_t1144817634** get_address_of_sliders_2() { return &___sliders_2; }
	inline void set_sliders_2(SliderU5BU5D_t1144817634* value)
	{
		___sliders_2 = value;
		Il2CppCodeGenWriteBarrier(&___sliders_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
