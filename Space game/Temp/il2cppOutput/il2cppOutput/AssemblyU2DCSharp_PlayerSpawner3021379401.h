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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerSpawner
struct  PlayerSpawner_t3021379401  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] PlayerSpawner::shipsArray
	GameObjectU5BU5D_t3057952154* ___shipsArray_3;

public:
	inline static int32_t get_offset_of_shipsArray_3() { return static_cast<int32_t>(offsetof(PlayerSpawner_t3021379401, ___shipsArray_3)); }
	inline GameObjectU5BU5D_t3057952154* get_shipsArray_3() const { return ___shipsArray_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_shipsArray_3() { return &___shipsArray_3; }
	inline void set_shipsArray_3(GameObjectU5BU5D_t3057952154* value)
	{
		___shipsArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___shipsArray_3, value);
	}
};

struct PlayerSpawner_t3021379401_StaticFields
{
public:
	// UnityEngine.GameObject PlayerSpawner::selectedShip
	GameObject_t1756533147 * ___selectedShip_2;

public:
	inline static int32_t get_offset_of_selectedShip_2() { return static_cast<int32_t>(offsetof(PlayerSpawner_t3021379401_StaticFields, ___selectedShip_2)); }
	inline GameObject_t1756533147 * get_selectedShip_2() const { return ___selectedShip_2; }
	inline GameObject_t1756533147 ** get_address_of_selectedShip_2() { return &___selectedShip_2; }
	inline void set_selectedShip_2(GameObject_t1756533147 * value)
	{
		___selectedShip_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedShip_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
