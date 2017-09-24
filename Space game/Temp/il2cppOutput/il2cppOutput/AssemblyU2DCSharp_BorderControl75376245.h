#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpawnerScript[]
struct SpawnerScriptU5BU5D_t2576419904;
// SpawnerScript
struct SpawnerScript_t3094523757;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BorderControl
struct  BorderControl_t75376245  : public MonoBehaviour_t1158329972
{
public:
	// SpawnerScript[] BorderControl::spawners
	SpawnerScriptU5BU5D_t2576419904* ___spawners_2;
	// SpawnerScript BorderControl::sampleSpawner
	SpawnerScript_t3094523757 * ___sampleSpawner_3;
	// UnityEngine.GameObject BorderControl::player
	GameObject_t1756533147 * ___player_4;
	// System.Single BorderControl::baseSpawnEverSecondsValue
	float ___baseSpawnEverSecondsValue_5;

public:
	inline static int32_t get_offset_of_spawners_2() { return static_cast<int32_t>(offsetof(BorderControl_t75376245, ___spawners_2)); }
	inline SpawnerScriptU5BU5D_t2576419904* get_spawners_2() const { return ___spawners_2; }
	inline SpawnerScriptU5BU5D_t2576419904** get_address_of_spawners_2() { return &___spawners_2; }
	inline void set_spawners_2(SpawnerScriptU5BU5D_t2576419904* value)
	{
		___spawners_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawners_2, value);
	}

	inline static int32_t get_offset_of_sampleSpawner_3() { return static_cast<int32_t>(offsetof(BorderControl_t75376245, ___sampleSpawner_3)); }
	inline SpawnerScript_t3094523757 * get_sampleSpawner_3() const { return ___sampleSpawner_3; }
	inline SpawnerScript_t3094523757 ** get_address_of_sampleSpawner_3() { return &___sampleSpawner_3; }
	inline void set_sampleSpawner_3(SpawnerScript_t3094523757 * value)
	{
		___sampleSpawner_3 = value;
		Il2CppCodeGenWriteBarrier(&___sampleSpawner_3, value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(BorderControl_t75376245, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_baseSpawnEverSecondsValue_5() { return static_cast<int32_t>(offsetof(BorderControl_t75376245, ___baseSpawnEverSecondsValue_5)); }
	inline float get_baseSpawnEverSecondsValue_5() const { return ___baseSpawnEverSecondsValue_5; }
	inline float* get_address_of_baseSpawnEverSecondsValue_5() { return &___baseSpawnEverSecondsValue_5; }
	inline void set_baseSpawnEverSecondsValue_5(float value)
	{
		___baseSpawnEverSecondsValue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
