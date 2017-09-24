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

// ShipSelector
struct  ShipSelector_t2795910205  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShipSelector::selectedPanel
	GameObject_t1756533147 * ___selectedPanel_2;
	// System.Boolean ShipSelector::selected
	bool ___selected_3;

public:
	inline static int32_t get_offset_of_selectedPanel_2() { return static_cast<int32_t>(offsetof(ShipSelector_t2795910205, ___selectedPanel_2)); }
	inline GameObject_t1756533147 * get_selectedPanel_2() const { return ___selectedPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_selectedPanel_2() { return &___selectedPanel_2; }
	inline void set_selectedPanel_2(GameObject_t1756533147 * value)
	{
		___selectedPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPanel_2, value);
	}

	inline static int32_t get_offset_of_selected_3() { return static_cast<int32_t>(offsetof(ShipSelector_t2795910205, ___selected_3)); }
	inline bool get_selected_3() const { return ___selected_3; }
	inline bool* get_address_of_selected_3() { return &___selected_3; }
	inline void set_selected_3(bool value)
	{
		___selected_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
