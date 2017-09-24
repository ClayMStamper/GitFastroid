#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LeaderboardTracker
struct LeaderboardTracker_t1356115755;
// Leaderboard/Score[]
struct ScoreU5BU5D_t2678361155;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void LeaderboardTracker::.ctor()
extern "C"  void LeaderboardTracker__ctor_m1991890940 (LeaderboardTracker_t1356115755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeaderboardTracker::Awake()
extern "C"  void LeaderboardTracker_Awake_m105918583 (LeaderboardTracker_t1356115755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LeaderboardTracker LeaderboardTracker::GetInstance()
extern "C"  LeaderboardTracker_t1356115755 * LeaderboardTracker_GetInstance_m1962823803 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeaderboardTracker::Start()
extern "C"  void LeaderboardTracker_Start_m1962679096 (LeaderboardTracker_t1356115755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LeaderboardTracker::OnHighscoresDownloaded(Leaderboard/Score[])
extern "C"  void LeaderboardTracker_OnHighscoresDownloaded_m2734317703 (LeaderboardTracker_t1356115755 * __this, ScoreU5BU5D_t2678361155* ___highscoreList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LeaderboardTracker::RefreshHighscores()
extern "C"  Il2CppObject * LeaderboardTracker_RefreshHighscores_m1133754036 (LeaderboardTracker_t1356115755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
