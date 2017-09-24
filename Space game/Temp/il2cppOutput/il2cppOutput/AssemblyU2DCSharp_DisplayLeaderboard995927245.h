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
// Leaderboard
struct Leaderboard_t2529296107;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisplayLeaderboard
struct  DisplayLeaderboard_t995927245  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] DisplayLeaderboard::highscoreText
	GameObjectU5BU5D_t3057952154* ___highscoreText_2;
	// Leaderboard DisplayLeaderboard::leaderboard
	Leaderboard_t2529296107 * ___leaderboard_3;

public:
	inline static int32_t get_offset_of_highscoreText_2() { return static_cast<int32_t>(offsetof(DisplayLeaderboard_t995927245, ___highscoreText_2)); }
	inline GameObjectU5BU5D_t3057952154* get_highscoreText_2() const { return ___highscoreText_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_highscoreText_2() { return &___highscoreText_2; }
	inline void set_highscoreText_2(GameObjectU5BU5D_t3057952154* value)
	{
		___highscoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreText_2, value);
	}

	inline static int32_t get_offset_of_leaderboard_3() { return static_cast<int32_t>(offsetof(DisplayLeaderboard_t995927245, ___leaderboard_3)); }
	inline Leaderboard_t2529296107 * get_leaderboard_3() const { return ___leaderboard_3; }
	inline Leaderboard_t2529296107 ** get_address_of_leaderboard_3() { return &___leaderboard_3; }
	inline void set_leaderboard_3(Leaderboard_t2529296107 * value)
	{
		___leaderboard_3 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboard_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
