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

// FadeIn
struct  FadeIn_t669020195  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FadeIn::fadeTime
	float ___fadeTime_2;
	// UnityEngine.UI.Image FadeIn::fadePanel
	Image_t2042527209 * ___fadePanel_3;
	// UnityEngine.Color FadeIn::currentColor
	Color_t2020392075  ___currentColor_4;
	// System.Single FadeIn::alphaChange
	float ___alphaChange_5;

public:
	inline static int32_t get_offset_of_fadeTime_2() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___fadeTime_2)); }
	inline float get_fadeTime_2() const { return ___fadeTime_2; }
	inline float* get_address_of_fadeTime_2() { return &___fadeTime_2; }
	inline void set_fadeTime_2(float value)
	{
		___fadeTime_2 = value;
	}

	inline static int32_t get_offset_of_fadePanel_3() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___fadePanel_3)); }
	inline Image_t2042527209 * get_fadePanel_3() const { return ___fadePanel_3; }
	inline Image_t2042527209 ** get_address_of_fadePanel_3() { return &___fadePanel_3; }
	inline void set_fadePanel_3(Image_t2042527209 * value)
	{
		___fadePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___fadePanel_3, value);
	}

	inline static int32_t get_offset_of_currentColor_4() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___currentColor_4)); }
	inline Color_t2020392075  get_currentColor_4() const { return ___currentColor_4; }
	inline Color_t2020392075 * get_address_of_currentColor_4() { return &___currentColor_4; }
	inline void set_currentColor_4(Color_t2020392075  value)
	{
		___currentColor_4 = value;
	}

	inline static int32_t get_offset_of_alphaChange_5() { return static_cast<int32_t>(offsetof(FadeIn_t669020195, ___alphaChange_5)); }
	inline float get_alphaChange_5() const { return ___alphaChange_5; }
	inline float* get_address_of_alphaChange_5() { return &___alphaChange_5; }
	inline void set_alphaChange_5(float value)
	{
		___alphaChange_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
