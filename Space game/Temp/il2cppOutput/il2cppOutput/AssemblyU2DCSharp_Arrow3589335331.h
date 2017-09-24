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
// UnityEngine.UI.Image
struct Image_t2042527209;
// PlayerScript
struct PlayerScript_t2594555350;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t1967201810;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Arrow
struct  Arrow_t3589335331  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Arrow::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.UI.Image Arrow::arrowSprite
	Image_t2042527209 * ___arrowSprite_3;
	// PlayerScript Arrow::playerScript
	PlayerScript_t2594555350 * ___playerScript_4;
	// UnityEngine.EventSystems.EventTrigger Arrow::click
	EventTrigger_t1967201810 * ___click_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_arrowSprite_3() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___arrowSprite_3)); }
	inline Image_t2042527209 * get_arrowSprite_3() const { return ___arrowSprite_3; }
	inline Image_t2042527209 ** get_address_of_arrowSprite_3() { return &___arrowSprite_3; }
	inline void set_arrowSprite_3(Image_t2042527209 * value)
	{
		___arrowSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___arrowSprite_3, value);
	}

	inline static int32_t get_offset_of_playerScript_4() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___playerScript_4)); }
	inline PlayerScript_t2594555350 * get_playerScript_4() const { return ___playerScript_4; }
	inline PlayerScript_t2594555350 ** get_address_of_playerScript_4() { return &___playerScript_4; }
	inline void set_playerScript_4(PlayerScript_t2594555350 * value)
	{
		___playerScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_4, value);
	}

	inline static int32_t get_offset_of_click_5() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___click_5)); }
	inline EventTrigger_t1967201810 * get_click_5() const { return ___click_5; }
	inline EventTrigger_t1967201810 ** get_address_of_click_5() { return &___click_5; }
	inline void set_click_5(EventTrigger_t1967201810 * value)
	{
		___click_5 = value;
		Il2CppCodeGenWriteBarrier(&___click_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
