#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager
struct  MusicManager_t104156498  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] MusicManager::levelMusicChangeArray
	AudioClipU5BU5D_t2203355011* ___levelMusicChangeArray_2;
	// System.Boolean MusicManager::volumeFadeOut
	bool ___volumeFadeOut_3;
	// UnityEngine.AudioClip MusicManager::thisLevelMusic
	AudioClip_t1932558630 * ___thisLevelMusic_4;
	// UnityEngine.AudioSource MusicManager::audioSource
	AudioSource_t1135106623 * ___audioSource_5;

public:
	inline static int32_t get_offset_of_levelMusicChangeArray_2() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___levelMusicChangeArray_2)); }
	inline AudioClipU5BU5D_t2203355011* get_levelMusicChangeArray_2() const { return ___levelMusicChangeArray_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_levelMusicChangeArray_2() { return &___levelMusicChangeArray_2; }
	inline void set_levelMusicChangeArray_2(AudioClipU5BU5D_t2203355011* value)
	{
		___levelMusicChangeArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelMusicChangeArray_2, value);
	}

	inline static int32_t get_offset_of_volumeFadeOut_3() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___volumeFadeOut_3)); }
	inline bool get_volumeFadeOut_3() const { return ___volumeFadeOut_3; }
	inline bool* get_address_of_volumeFadeOut_3() { return &___volumeFadeOut_3; }
	inline void set_volumeFadeOut_3(bool value)
	{
		___volumeFadeOut_3 = value;
	}

	inline static int32_t get_offset_of_thisLevelMusic_4() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___thisLevelMusic_4)); }
	inline AudioClip_t1932558630 * get_thisLevelMusic_4() const { return ___thisLevelMusic_4; }
	inline AudioClip_t1932558630 ** get_address_of_thisLevelMusic_4() { return &___thisLevelMusic_4; }
	inline void set_thisLevelMusic_4(AudioClip_t1932558630 * value)
	{
		___thisLevelMusic_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisLevelMusic_4, value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(MusicManager_t104156498, ___audioSource_5)); }
	inline AudioSource_t1135106623 * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t1135106623 * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
