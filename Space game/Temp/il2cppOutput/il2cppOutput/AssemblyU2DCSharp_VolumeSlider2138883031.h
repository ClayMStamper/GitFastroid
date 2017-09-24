#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;
// MusicManager
struct MusicManager_t104156498;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VolumeSlider
struct  VolumeSlider_t2138883031  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider VolumeSlider::volumeSlider
	Slider_t297367283 * ___volumeSlider_2;
	// MusicManager VolumeSlider::musicManager
	MusicManager_t104156498 * ___musicManager_3;
	// System.Single VolumeSlider::volume
	float ___volume_4;

public:
	inline static int32_t get_offset_of_volumeSlider_2() { return static_cast<int32_t>(offsetof(VolumeSlider_t2138883031, ___volumeSlider_2)); }
	inline Slider_t297367283 * get_volumeSlider_2() const { return ___volumeSlider_2; }
	inline Slider_t297367283 ** get_address_of_volumeSlider_2() { return &___volumeSlider_2; }
	inline void set_volumeSlider_2(Slider_t297367283 * value)
	{
		___volumeSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___volumeSlider_2, value);
	}

	inline static int32_t get_offset_of_musicManager_3() { return static_cast<int32_t>(offsetof(VolumeSlider_t2138883031, ___musicManager_3)); }
	inline MusicManager_t104156498 * get_musicManager_3() const { return ___musicManager_3; }
	inline MusicManager_t104156498 ** get_address_of_musicManager_3() { return &___musicManager_3; }
	inline void set_musicManager_3(MusicManager_t104156498 * value)
	{
		___musicManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicManager_3, value);
	}

	inline static int32_t get_offset_of_volume_4() { return static_cast<int32_t>(offsetof(VolumeSlider_t2138883031, ___volume_4)); }
	inline float get_volume_4() const { return ___volume_4; }
	inline float* get_address_of_volume_4() { return &___volume_4; }
	inline void set_volume_4(float value)
	{
		___volume_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
