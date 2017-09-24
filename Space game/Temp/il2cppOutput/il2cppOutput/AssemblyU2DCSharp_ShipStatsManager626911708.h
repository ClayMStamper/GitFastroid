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
// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipStatsManager
struct  ShipStatsManager_t626911708  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShipStatsManager::parent
	GameObject_t1756533147 * ___parent_2;
	// UnityEngine.GameObject[] ShipStatsManager::ships
	GameObjectU5BU5D_t3057952154* ___ships_3;
	// UnityEngine.GameObject[] ShipStatsManager::statsArray
	GameObjectU5BU5D_t3057952154* ___statsArray_4;
	// UnityEngine.UI.Slider ShipStatsManager::accelerationSlider
	Slider_t297367283 * ___accelerationSlider_5;
	// UnityEngine.UI.Slider ShipStatsManager::handelingSlider
	Slider_t297367283 * ___handelingSlider_6;
	// UnityEngine.UI.Slider ShipStatsManager::versatilitySlider
	Slider_t297367283 * ___versatilitySlider_7;
	// UnityEngine.GameObject ShipStatsManager::myShip
	GameObject_t1756533147 * ___myShip_8;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___parent_2)); }
	inline GameObject_t1756533147 * get_parent_2() const { return ___parent_2; }
	inline GameObject_t1756533147 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(GameObject_t1756533147 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___parent_2, value);
	}

	inline static int32_t get_offset_of_ships_3() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___ships_3)); }
	inline GameObjectU5BU5D_t3057952154* get_ships_3() const { return ___ships_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_ships_3() { return &___ships_3; }
	inline void set_ships_3(GameObjectU5BU5D_t3057952154* value)
	{
		___ships_3 = value;
		Il2CppCodeGenWriteBarrier(&___ships_3, value);
	}

	inline static int32_t get_offset_of_statsArray_4() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___statsArray_4)); }
	inline GameObjectU5BU5D_t3057952154* get_statsArray_4() const { return ___statsArray_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_statsArray_4() { return &___statsArray_4; }
	inline void set_statsArray_4(GameObjectU5BU5D_t3057952154* value)
	{
		___statsArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___statsArray_4, value);
	}

	inline static int32_t get_offset_of_accelerationSlider_5() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___accelerationSlider_5)); }
	inline Slider_t297367283 * get_accelerationSlider_5() const { return ___accelerationSlider_5; }
	inline Slider_t297367283 ** get_address_of_accelerationSlider_5() { return &___accelerationSlider_5; }
	inline void set_accelerationSlider_5(Slider_t297367283 * value)
	{
		___accelerationSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___accelerationSlider_5, value);
	}

	inline static int32_t get_offset_of_handelingSlider_6() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___handelingSlider_6)); }
	inline Slider_t297367283 * get_handelingSlider_6() const { return ___handelingSlider_6; }
	inline Slider_t297367283 ** get_address_of_handelingSlider_6() { return &___handelingSlider_6; }
	inline void set_handelingSlider_6(Slider_t297367283 * value)
	{
		___handelingSlider_6 = value;
		Il2CppCodeGenWriteBarrier(&___handelingSlider_6, value);
	}

	inline static int32_t get_offset_of_versatilitySlider_7() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___versatilitySlider_7)); }
	inline Slider_t297367283 * get_versatilitySlider_7() const { return ___versatilitySlider_7; }
	inline Slider_t297367283 ** get_address_of_versatilitySlider_7() { return &___versatilitySlider_7; }
	inline void set_versatilitySlider_7(Slider_t297367283 * value)
	{
		___versatilitySlider_7 = value;
		Il2CppCodeGenWriteBarrier(&___versatilitySlider_7, value);
	}

	inline static int32_t get_offset_of_myShip_8() { return static_cast<int32_t>(offsetof(ShipStatsManager_t626911708, ___myShip_8)); }
	inline GameObject_t1756533147 * get_myShip_8() const { return ___myShip_8; }
	inline GameObject_t1756533147 ** get_address_of_myShip_8() { return &___myShip_8; }
	inline void set_myShip_8(GameObject_t1756533147 * value)
	{
		___myShip_8 = value;
		Il2CppCodeGenWriteBarrier(&___myShip_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
