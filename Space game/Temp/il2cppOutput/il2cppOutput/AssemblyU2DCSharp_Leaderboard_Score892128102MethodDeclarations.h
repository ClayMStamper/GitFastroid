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

// System.String
struct String_t;
// Leaderboard/Score
struct Score_t892128102;
struct Score_t892128102_marshaled_pinvoke;
struct Score_t892128102_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Leaderboard_Score892128102.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Leaderboard/Score::.ctor(System.String,System.Int32)
extern "C"  void Score__ctor_m774661488 (Score_t892128102 * __this, String_t* ____name0, int32_t ____score1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Score_t892128102;
struct Score_t892128102_marshaled_pinvoke;

extern "C" void Score_t892128102_marshal_pinvoke(const Score_t892128102& unmarshaled, Score_t892128102_marshaled_pinvoke& marshaled);
extern "C" void Score_t892128102_marshal_pinvoke_back(const Score_t892128102_marshaled_pinvoke& marshaled, Score_t892128102& unmarshaled);
extern "C" void Score_t892128102_marshal_pinvoke_cleanup(Score_t892128102_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Score_t892128102;
struct Score_t892128102_marshaled_com;

extern "C" void Score_t892128102_marshal_com(const Score_t892128102& unmarshaled, Score_t892128102_marshaled_com& marshaled);
extern "C" void Score_t892128102_marshal_com_back(const Score_t892128102_marshaled_com& marshaled, Score_t892128102& unmarshaled);
extern "C" void Score_t892128102_marshal_com_cleanup(Score_t892128102_marshaled_com& marshaled);
