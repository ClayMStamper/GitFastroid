#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Leaderboard/Score[]
struct ScoreU5BU5D_t2678361155;
// DisplayLeaderboard
struct DisplayLeaderboard_t995927245;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard
struct  Leaderboard_t2529296107  : public MonoBehaviour_t1158329972
{
public:
	// System.String Leaderboard::publicCode
	String_t* ___publicCode_3;
	// System.String Leaderboard::webURL
	String_t* ___webURL_4;
	// Leaderboard/Score[] Leaderboard::highscoresList
	ScoreU5BU5D_t2678361155* ___highscoresList_5;
	// DisplayLeaderboard Leaderboard::leaderboardDisplay
	DisplayLeaderboard_t995927245 * ___leaderboardDisplay_6;

public:
	inline static int32_t get_offset_of_publicCode_3() { return static_cast<int32_t>(offsetof(Leaderboard_t2529296107, ___publicCode_3)); }
	inline String_t* get_publicCode_3() const { return ___publicCode_3; }
	inline String_t** get_address_of_publicCode_3() { return &___publicCode_3; }
	inline void set_publicCode_3(String_t* value)
	{
		___publicCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___publicCode_3, value);
	}

	inline static int32_t get_offset_of_webURL_4() { return static_cast<int32_t>(offsetof(Leaderboard_t2529296107, ___webURL_4)); }
	inline String_t* get_webURL_4() const { return ___webURL_4; }
	inline String_t** get_address_of_webURL_4() { return &___webURL_4; }
	inline void set_webURL_4(String_t* value)
	{
		___webURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___webURL_4, value);
	}

	inline static int32_t get_offset_of_highscoresList_5() { return static_cast<int32_t>(offsetof(Leaderboard_t2529296107, ___highscoresList_5)); }
	inline ScoreU5BU5D_t2678361155* get_highscoresList_5() const { return ___highscoresList_5; }
	inline ScoreU5BU5D_t2678361155** get_address_of_highscoresList_5() { return &___highscoresList_5; }
	inline void set_highscoresList_5(ScoreU5BU5D_t2678361155* value)
	{
		___highscoresList_5 = value;
		Il2CppCodeGenWriteBarrier(&___highscoresList_5, value);
	}

	inline static int32_t get_offset_of_leaderboardDisplay_6() { return static_cast<int32_t>(offsetof(Leaderboard_t2529296107, ___leaderboardDisplay_6)); }
	inline DisplayLeaderboard_t995927245 * get_leaderboardDisplay_6() const { return ___leaderboardDisplay_6; }
	inline DisplayLeaderboard_t995927245 ** get_address_of_leaderboardDisplay_6() { return &___leaderboardDisplay_6; }
	inline void set_leaderboardDisplay_6(DisplayLeaderboard_t995927245 * value)
	{
		___leaderboardDisplay_6 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardDisplay_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
