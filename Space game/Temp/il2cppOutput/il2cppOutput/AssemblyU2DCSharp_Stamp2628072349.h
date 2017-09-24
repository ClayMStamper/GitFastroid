#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stamp
struct  Stamp_t2628072349  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Stamp::smashedBG
	GameObject_t1756533147 * ___smashedBG_2;
	// System.Single Stamp::smashAfter
	float ___smashAfter_3;
	// UnityEngine.AudioSource Stamp::smash
	AudioSource_t1135106623 * ___smash_4;

public:
	inline static int32_t get_offset_of_smashedBG_2() { return static_cast<int32_t>(offsetof(Stamp_t2628072349, ___smashedBG_2)); }
	inline GameObject_t1756533147 * get_smashedBG_2() const { return ___smashedBG_2; }
	inline GameObject_t1756533147 ** get_address_of_smashedBG_2() { return &___smashedBG_2; }
	inline void set_smashedBG_2(GameObject_t1756533147 * value)
	{
		___smashedBG_2 = value;
		Il2CppCodeGenWriteBarrier(&___smashedBG_2, value);
	}

	inline static int32_t get_offset_of_smashAfter_3() { return static_cast<int32_t>(offsetof(Stamp_t2628072349, ___smashAfter_3)); }
	inline float get_smashAfter_3() const { return ___smashAfter_3; }
	inline float* get_address_of_smashAfter_3() { return &___smashAfter_3; }
	inline void set_smashAfter_3(float value)
	{
		___smashAfter_3 = value;
	}

	inline static int32_t get_offset_of_smash_4() { return static_cast<int32_t>(offsetof(Stamp_t2628072349, ___smash_4)); }
	inline AudioSource_t1135106623 * get_smash_4() const { return ___smash_4; }
	inline AudioSource_t1135106623 ** get_address_of_smash_4() { return &___smash_4; }
	inline void set_smash_4(AudioSource_t1135106623 * value)
	{
		___smash_4 = value;
		Il2CppCodeGenWriteBarrier(&___smash_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
