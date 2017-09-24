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

// Leaderboard
struct Leaderboard_t2529296107;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m3995012990 (Leaderboard_t2529296107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard::Awake()
extern "C"  void Leaderboard_Awake_m2777370151 (Leaderboard_t2529296107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard::AddNewHighscore(System.String,System.Int32)
extern "C"  void Leaderboard_AddNewHighscore_m3305195240 (Leaderboard_t2529296107 * __this, String_t* ___name0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard::AddNewHighscore()
extern "C"  void Leaderboard_AddNewHighscore_m4153287961 (Leaderboard_t2529296107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Leaderboard::UploadNewHighscore(System.String,System.Int32)
extern "C"  Il2CppObject * Leaderboard_UploadNewHighscore_m4253749336 (Leaderboard_t2529296107 * __this, String_t* ___name0, int32_t ___score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard::DownloadHighscores()
extern "C"  void Leaderboard_DownloadHighscores_m3878498375 (Leaderboard_t2529296107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Leaderboard::DownloadHighscoresFromDatabase()
extern "C"  Il2CppObject * Leaderboard_DownloadHighscoresFromDatabase_m2437611658 (Leaderboard_t2529296107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard::FormatHighscores(System.String)
extern "C"  void Leaderboard_FormatHighscores_m1889295346 (Leaderboard_t2529296107 * __this, String_t* ___textStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
