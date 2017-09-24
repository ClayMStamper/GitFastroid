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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonPricesManager
struct  ButtonPricesManager_t1968808801  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ButtonPricesManager::gems
	int32_t ___gems_2;
	// System.Int32 ButtonPricesManager::gold
	int32_t ___gold_3;
	// UnityEngine.GameObject ButtonPricesManager::goldPrice
	GameObject_t1756533147 * ___goldPrice_4;
	// UnityEngine.GameObject ButtonPricesManager::gemsPrice
	GameObject_t1756533147 * ___gemsPrice_5;
	// UnityEngine.UI.Text ButtonPricesManager::gemsText
	Text_t356221433 * ___gemsText_6;
	// UnityEngine.UI.Text ButtonPricesManager::goldText
	Text_t356221433 * ___goldText_7;

public:
	inline static int32_t get_offset_of_gems_2() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___gems_2)); }
	inline int32_t get_gems_2() const { return ___gems_2; }
	inline int32_t* get_address_of_gems_2() { return &___gems_2; }
	inline void set_gems_2(int32_t value)
	{
		___gems_2 = value;
	}

	inline static int32_t get_offset_of_gold_3() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___gold_3)); }
	inline int32_t get_gold_3() const { return ___gold_3; }
	inline int32_t* get_address_of_gold_3() { return &___gold_3; }
	inline void set_gold_3(int32_t value)
	{
		___gold_3 = value;
	}

	inline static int32_t get_offset_of_goldPrice_4() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___goldPrice_4)); }
	inline GameObject_t1756533147 * get_goldPrice_4() const { return ___goldPrice_4; }
	inline GameObject_t1756533147 ** get_address_of_goldPrice_4() { return &___goldPrice_4; }
	inline void set_goldPrice_4(GameObject_t1756533147 * value)
	{
		___goldPrice_4 = value;
		Il2CppCodeGenWriteBarrier(&___goldPrice_4, value);
	}

	inline static int32_t get_offset_of_gemsPrice_5() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___gemsPrice_5)); }
	inline GameObject_t1756533147 * get_gemsPrice_5() const { return ___gemsPrice_5; }
	inline GameObject_t1756533147 ** get_address_of_gemsPrice_5() { return &___gemsPrice_5; }
	inline void set_gemsPrice_5(GameObject_t1756533147 * value)
	{
		___gemsPrice_5 = value;
		Il2CppCodeGenWriteBarrier(&___gemsPrice_5, value);
	}

	inline static int32_t get_offset_of_gemsText_6() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___gemsText_6)); }
	inline Text_t356221433 * get_gemsText_6() const { return ___gemsText_6; }
	inline Text_t356221433 ** get_address_of_gemsText_6() { return &___gemsText_6; }
	inline void set_gemsText_6(Text_t356221433 * value)
	{
		___gemsText_6 = value;
		Il2CppCodeGenWriteBarrier(&___gemsText_6, value);
	}

	inline static int32_t get_offset_of_goldText_7() { return static_cast<int32_t>(offsetof(ButtonPricesManager_t1968808801, ___goldText_7)); }
	inline Text_t356221433 * get_goldText_7() const { return ___goldText_7; }
	inline Text_t356221433 ** get_address_of_goldText_7() { return &___goldText_7; }
	inline void set_goldText_7(Text_t356221433 * value)
	{
		___goldText_7 = value;
		Il2CppCodeGenWriteBarrier(&___goldText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
