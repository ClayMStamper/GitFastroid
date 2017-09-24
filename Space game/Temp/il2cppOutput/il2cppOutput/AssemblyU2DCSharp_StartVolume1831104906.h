#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicManager
struct MusicManager_t104156498;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartVolume
struct  StartVolume_t1831104906  : public MonoBehaviour_t1158329972
{
public:
	// System.Single StartVolume::volume
	float ___volume_2;
	// MusicManager StartVolume::musicManager
	MusicManager_t104156498 * ___musicManager_3;
	// System.Single StartVolume::masterVolume
	float ___masterVolume_4;
	// System.Int32 StartVolume::firstStart
	int32_t ___firstStart_5;

public:
	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(StartVolume_t1831104906, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_musicManager_3() { return static_cast<int32_t>(offsetof(StartVolume_t1831104906, ___musicManager_3)); }
	inline MusicManager_t104156498 * get_musicManager_3() const { return ___musicManager_3; }
	inline MusicManager_t104156498 ** get_address_of_musicManager_3() { return &___musicManager_3; }
	inline void set_musicManager_3(MusicManager_t104156498 * value)
	{
		___musicManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicManager_3, value);
	}

	inline static int32_t get_offset_of_masterVolume_4() { return static_cast<int32_t>(offsetof(StartVolume_t1831104906, ___masterVolume_4)); }
	inline float get_masterVolume_4() const { return ___masterVolume_4; }
	inline float* get_address_of_masterVolume_4() { return &___masterVolume_4; }
	inline void set_masterVolume_4(float value)
	{
		___masterVolume_4 = value;
	}

	inline static int32_t get_offset_of_firstStart_5() { return static_cast<int32_t>(offsetof(StartVolume_t1831104906, ___firstStart_5)); }
	inline int32_t get_firstStart_5() const { return ___firstStart_5; }
	inline int32_t* get_address_of_firstStart_5() { return &___firstStart_5; }
	inline void set_firstStart_5(int32_t value)
	{
		___firstStart_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
