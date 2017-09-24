#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LeaderboardTracker
struct LeaderboardTracker_t1356115755;
// Leaderboard/Score[]
struct ScoreU5BU5D_t2678361155;
// System.String[]
struct StringU5BU5D_t1642385972;
// Leaderboard
struct Leaderboard_t2529296107;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardTracker
struct  LeaderboardTracker_t1356115755  : public MonoBehaviour_t1158329972
{
public:
	// Leaderboard/Score[] LeaderboardTracker::highscores
	ScoreU5BU5D_t2678361155* ___highscores_3;
	// System.String[] LeaderboardTracker::myNames
	StringU5BU5D_t1642385972* ___myNames_4;
	// Leaderboard LeaderboardTracker::leaderboard
	Leaderboard_t2529296107 * ___leaderboard_5;

public:
	inline static int32_t get_offset_of_highscores_3() { return static_cast<int32_t>(offsetof(LeaderboardTracker_t1356115755, ___highscores_3)); }
	inline ScoreU5BU5D_t2678361155* get_highscores_3() const { return ___highscores_3; }
	inline ScoreU5BU5D_t2678361155** get_address_of_highscores_3() { return &___highscores_3; }
	inline void set_highscores_3(ScoreU5BU5D_t2678361155* value)
	{
		___highscores_3 = value;
		Il2CppCodeGenWriteBarrier(&___highscores_3, value);
	}

	inline static int32_t get_offset_of_myNames_4() { return static_cast<int32_t>(offsetof(LeaderboardTracker_t1356115755, ___myNames_4)); }
	inline StringU5BU5D_t1642385972* get_myNames_4() const { return ___myNames_4; }
	inline StringU5BU5D_t1642385972** get_address_of_myNames_4() { return &___myNames_4; }
	inline void set_myNames_4(StringU5BU5D_t1642385972* value)
	{
		___myNames_4 = value;
		Il2CppCodeGenWriteBarrier(&___myNames_4, value);
	}

	inline static int32_t get_offset_of_leaderboard_5() { return static_cast<int32_t>(offsetof(LeaderboardTracker_t1356115755, ___leaderboard_5)); }
	inline Leaderboard_t2529296107 * get_leaderboard_5() const { return ___leaderboard_5; }
	inline Leaderboard_t2529296107 ** get_address_of_leaderboard_5() { return &___leaderboard_5; }
	inline void set_leaderboard_5(Leaderboard_t2529296107 * value)
	{
		___leaderboard_5 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboard_5, value);
	}
};

struct LeaderboardTracker_t1356115755_StaticFields
{
public:
	// LeaderboardTracker LeaderboardTracker::instance
	LeaderboardTracker_t1356115755 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(LeaderboardTracker_t1356115755_StaticFields, ___instance_2)); }
	inline LeaderboardTracker_t1356115755 * get_instance_2() const { return ___instance_2; }
	inline LeaderboardTracker_t1356115755 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(LeaderboardTracker_t1356115755 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
