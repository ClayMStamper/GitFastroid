#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageFadeInOut
struct  ImageFadeInOut_t4200670300  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image ImageFadeInOut::image
	Image_t2042527209 * ___image_2;
	// System.Single ImageFadeInOut::fadeTime
	float ___fadeTime_3;
	// UnityEngine.Color ImageFadeInOut::currentColor
	Color_t2020392075  ___currentColor_4;
	// System.Single ImageFadeInOut::alphaChange
	float ___alphaChange_5;
	// System.Boolean ImageFadeInOut::dim
	bool ___dim_6;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(ImageFadeInOut_t4200670300, ___image_2)); }
	inline Image_t2042527209 * get_image_2() const { return ___image_2; }
	inline Image_t2042527209 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2042527209 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_fadeTime_3() { return static_cast<int32_t>(offsetof(ImageFadeInOut_t4200670300, ___fadeTime_3)); }
	inline float get_fadeTime_3() const { return ___fadeTime_3; }
	inline float* get_address_of_fadeTime_3() { return &___fadeTime_3; }
	inline void set_fadeTime_3(float value)
	{
		___fadeTime_3 = value;
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(ImageFadeInOut_t4200670300, ___currentColor_4)); }
	inline Color_t2020392075  get_currentColor_4() const { return ___currentColor_4; }
	inline Color_t2020392075 * get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(Color_t2020392075  value)
	{
		___currentColor_4 = value;
	}

	inline static int32_t get_offset_of_alphaChange_5() { return static_cast<int32_t>(offsetof(ImageFadeInOut_t4200670300, ___alphaChange_5)); }
	inline float get_alphaChange_5() const { return ___alphaChange_5; }
	inline float* get_address_of_alphaChange_5() { return &___alphaChange_5; }
	inline void set_alphaChange_5(float value)
	{
		___alphaChange_5 = value;
	}

	inline static int32_t get_offset_of_dim_6() { return static_cast<int32_t>(offsetof(ImageFadeInOut_t4200670300, ___dim_6)); }
	inline bool get_dim_6() const { return ___dim_6; }
	inline bool* get_address_of_dim_6() { return &___dim_6; }
	inline void set_dim_6(bool value)
	{
		___dim_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
