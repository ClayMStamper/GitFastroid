#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Popup
struct  Popup_t161311578  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Popup::Popups
	GameObjectU5BU5D_t3057952154* ___Popups_2;

public:
	inline static int32_t get_offset_of_Popups_2() { return static_cast<int32_t>(offsetof(Popup_t161311578, ___Popups_2)); }
	inline GameObjectU5BU5D_t3057952154* get_Popups_2() const { return ___Popups_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Popups_2() { return &___Popups_2; }
	inline void set_Popups_2(GameObjectU5BU5D_t3057952154* value)
	{
		___Popups_2 = value;
		Il2CppCodeGenWriteBarrier(&___Popups_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
