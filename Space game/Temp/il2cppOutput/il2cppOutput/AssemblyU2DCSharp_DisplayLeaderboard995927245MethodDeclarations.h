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

// DisplayLeaderboard
struct DisplayLeaderboard_t995927245;
// Leaderboard/Score[]
struct ScoreU5BU5D_t2678361155;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void DisplayLeaderboard::.ctor()
extern "C"  void DisplayLeaderboard__ctor_m1541029320 (DisplayLeaderboard_t995927245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayLeaderboard::Start()
extern "C"  void DisplayLeaderboard_Start_m4177358520 (DisplayLeaderboard_t995927245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DisplayLeaderboard::OnHighscoresDownloaded(Leaderboard/Score[])
extern "C"  void DisplayLeaderboard_OnHighscoresDownloaded_m3411514365 (DisplayLeaderboard_t995927245 * __this, ScoreU5BU5D_t2678361155* ___highscoreList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DisplayLeaderboard::RefreshHighscores()
extern "C"  Il2CppObject * DisplayLeaderboard_RefreshHighscores_m3124451208 (DisplayLeaderboard_t995927245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
