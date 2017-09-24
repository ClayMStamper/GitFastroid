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

// FadeInActivator
struct  FadeInActivator_t1549913356  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] FadeInActivator::fadePanel
	GameObjectU5BU5D_t3057952154* ___fadePanel_2;

public:
	inline static int32_t get_offset_of_fadePanel_2() { return static_cast<int32_t>(offsetof(FadeInActivator_t1549913356, ___fadePanel_2)); }
	inline GameObjectU5BU5D_t3057952154* get_fadePanel_2() const { return ___fadePanel_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_fadePanel_2() { return &___fadePanel_2; }
	inline void set_fadePanel_2(GameObjectU5BU5D_t3057952154* value)
	{
		___fadePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___fadePanel_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
