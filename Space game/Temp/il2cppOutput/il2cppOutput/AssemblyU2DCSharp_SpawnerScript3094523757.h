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

// SpawnerScript
struct  SpawnerScript_t3094523757  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SpawnerScript::timeToSpawn
	bool ___timeToSpawn_2;
	// System.Boolean SpawnerScript::spawnerActive
	bool ___spawnerActive_3;
	// System.Single SpawnerScript::spawnEverySeconds
	float ___spawnEverySeconds_4;
	// System.Single SpawnerScript::timeDifficultyMod
	float ___timeDifficultyMod_5;
	// UnityEngine.GameObject SpawnerScript::asteroidPrefab
	GameObject_t1756533147 * ___asteroidPrefab_6;

public:
	inline static int32_t get_offset_of_timeToSpawn_2() { return static_cast<int32_t>(offsetof(SpawnerScript_t3094523757, ___timeToSpawn_2)); }
	inline bool get_timeToSpawn_2() const { return ___timeToSpawn_2; }
	inline bool* get_address_of_timeToSpawn_2() { return &___timeToSpawn_2; }
	inline void set_timeToSpawn_2(bool value)
	{
		___timeToSpawn_2 = value;
	}

	inline static int32_t get_offset_of_spawnerActive_3() { return static_cast<int32_t>(offsetof(SpawnerScript_t3094523757, ___spawnerActive_3)); }
	inline bool get_spawnerActive_3() const { return ___spawnerActive_3; }
	inline bool* get_address_of_spawnerActive_3() { return &___spawnerActive_3; }
	inline void set_spawnerActive_3(bool value)
	{
		___spawnerActive_3 = value;
	}

	inline static int32_t get_offset_of_spawnEverySeconds_4() { return static_cast<int32_t>(offsetof(SpawnerScript_t3094523757, ___spawnEverySeconds_4)); }
	inline float get_spawnEverySeconds_4() const { return ___spawnEverySeconds_4; }
	inline float* get_address_of_spawnEverySeconds_4() { return &___spawnEverySeconds_4; }
	inline void set_spawnEverySeconds_4(float value)
	{
		___spawnEverySeconds_4 = value;
	}

	inline static int32_t get_offset_of_timeDifficultyMod_5() { return static_cast<int32_t>(offsetof(SpawnerScript_t3094523757, ___timeDifficultyMod_5)); }
	inline float get_timeDifficultyMod_5() const { return ___timeDifficultyMod_5; }
	inline float* get_address_of_timeDifficultyMod_5() { return &___timeDifficultyMod_5; }
	inline void set_timeDifficultyMod_5(float value)
	{
		___timeDifficultyMod_5 = value;
	}

	inline static int32_t get_offset_of_asteroidPrefab_6() { return static_cast<int32_t>(offsetof(SpawnerScript_t3094523757, ___asteroidPrefab_6)); }
	inline GameObject_t1756533147 * get_asteroidPrefab_6() const { return ___asteroidPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_asteroidPrefab_6() { return &___asteroidPrefab_6; }
	inline void set_asteroidPrefab_6(GameObject_t1756533147 * value)
	{
		___asteroidPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___asteroidPrefab_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
