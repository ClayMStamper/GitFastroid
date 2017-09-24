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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GemSpawner
struct  GemSpawner_t3198025277  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GemSpawner::gem
	GameObject_t1756533147 * ___gem_2;
	// System.Single GemSpawner::randX
	float ___randX_3;
	// System.Single GemSpawner::randY
	float ___randY_4;
	// System.Single GemSpawner::rareness
	float ___rareness_5;
	// System.Int32 GemSpawner::totalGemsSpawned
	int32_t ___totalGemsSpawned_6;

public:
	inline static int32_t get_offset_of_gem_2() { return static_cast<int32_t>(offsetof(GemSpawner_t3198025277, ___gem_2)); }
	inline GameObject_t1756533147 * get_gem_2() const { return ___gem_2; }
	inline GameObject_t1756533147 ** get_address_of_gem_2() { return &___gem_2; }
	inline void set_gem_2(GameObject_t1756533147 * value)
	{
		___gem_2 = value;
		Il2CppCodeGenWriteBarrier(&___gem_2, value);
	}

	inline static int32_t get_offset_of_randX_3() { return static_cast<int32_t>(offsetof(GemSpawner_t3198025277, ___randX_3)); }
	inline float get_randX_3() const { return ___randX_3; }
	inline float* get_address_of_randX_3() { return &___randX_3; }
	inline void set_randX_3(float value)
	{
		___randX_3 = value;
	}

	inline static int32_t get_offset_of_randY_4() { return static_cast<int32_t>(offsetof(GemSpawner_t3198025277, ___randY_4)); }
	inline float get_randY_4() const { return ___randY_4; }
	inline float* get_address_of_randY_4() { return &___randY_4; }
	inline void set_randY_4(float value)
	{
		___randY_4 = value;
	}

	inline static int32_t get_offset_of_rareness_5() { return static_cast<int32_t>(offsetof(GemSpawner_t3198025277, ___rareness_5)); }
	inline float get_rareness_5() const { return ___rareness_5; }
	inline float* get_address_of_rareness_5() { return &___rareness_5; }
	inline void set_rareness_5(float value)
	{
		___rareness_5 = value;
	}

	inline static int32_t get_offset_of_totalGemsSpawned_6() { return static_cast<int32_t>(offsetof(GemSpawner_t3198025277, ___totalGemsSpawned_6)); }
	inline int32_t get_totalGemsSpawned_6() const { return ___totalGemsSpawned_6; }
	inline int32_t* get_address_of_totalGemsSpawned_6() { return &___totalGemsSpawned_6; }
	inline void set_totalGemsSpawned_6(int32_t value)
	{
		___totalGemsSpawned_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
