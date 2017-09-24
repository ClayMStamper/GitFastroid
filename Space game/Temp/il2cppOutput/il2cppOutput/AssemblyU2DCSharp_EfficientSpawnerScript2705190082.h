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

// EfficientSpawnerScript
struct  EfficientSpawnerScript_t2705190082  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EfficientSpawnerScript::timeToSpawn
	bool ___timeToSpawn_2;
	// System.Boolean EfficientSpawnerScript::spawnerActive
	bool ___spawnerActive_3;
	// UnityEngine.GameObject EfficientSpawnerScript::asteroidPrefab
	GameObject_t1756533147 * ___asteroidPrefab_4;

public:
	inline static int32_t get_offset_of_timeToSpawn_2() { return static_cast<int32_t>(offsetof(EfficientSpawnerScript_t2705190082, ___timeToSpawn_2)); }
	inline bool get_timeToSpawn_2() const { return ___timeToSpawn_2; }
	inline bool* get_address_of_timeToSpawn_2() { return &___timeToSpawn_2; }
	inline void set_timeToSpawn_2(bool value)
	{
		___timeToSpawn_2 = value;
	}

	inline static int32_t get_offset_of_spawnerActive_3() { return static_cast<int32_t>(offsetof(EfficientSpawnerScript_t2705190082, ___spawnerActive_3)); }
	inline bool get_spawnerActive_3() const { return ___spawnerActive_3; }
	inline bool* get_address_of_spawnerActive_3() { return &___spawnerActive_3; }
	inline void set_spawnerActive_3(bool value)
	{
		___spawnerActive_3 = value;
	}

	inline static int32_t get_offset_of_asteroidPrefab_4() { return static_cast<int32_t>(offsetof(EfficientSpawnerScript_t2705190082, ___asteroidPrefab_4)); }
	inline GameObject_t1756533147 * get_asteroidPrefab_4() const { return ___asteroidPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_asteroidPrefab_4() { return &___asteroidPrefab_4; }
	inline void set_asteroidPrefab_4(GameObject_t1756533147 * value)
	{
		___asteroidPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___asteroidPrefab_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
