#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdManager
struct AdManager_t1644758224;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopupAdPlayer
struct  PopupAdPlayer_t81833138  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PopupAdPlayer::scoreThreshold
	float ___scoreThreshold_2;
	// AdManager PopupAdPlayer::adManager
	AdManager_t1644758224 * ___adManager_4;

public:
	inline static int32_t get_offset_of_scoreThreshold_2() { return static_cast<int32_t>(offsetof(PopupAdPlayer_t81833138, ___scoreThreshold_2)); }
	inline float get_scoreThreshold_2() const { return ___scoreThreshold_2; }
	inline float* get_address_of_scoreThreshold_2() { return &___scoreThreshold_2; }
	inline void set_scoreThreshold_2(float value)
	{
		___scoreThreshold_2 = value;
	}

	inline static int32_t get_offset_of_adManager_4() { return static_cast<int32_t>(offsetof(PopupAdPlayer_t81833138, ___adManager_4)); }
	inline AdManager_t1644758224 * get_adManager_4() const { return ___adManager_4; }
	inline AdManager_t1644758224 ** get_address_of_adManager_4() { return &___adManager_4; }
	inline void set_adManager_4(AdManager_t1644758224 * value)
	{
		___adManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___adManager_4, value);
	}
};

struct PopupAdPlayer_t81833138_StaticFields
{
public:
	// System.Single PopupAdPlayer::scoreSum
	float ___scoreSum_3;

public:
	inline static int32_t get_offset_of_scoreSum_3() { return static_cast<int32_t>(offsetof(PopupAdPlayer_t81833138_StaticFields, ___scoreSum_3)); }
	inline float get_scoreSum_3() const { return ___scoreSum_3; }
	inline float* get_address_of_scoreSum_3() { return &___scoreSum_3; }
	inline void set_scoreSum_3(float value)
	{
		___scoreSum_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
