#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// SpawnerScript
struct SpawnerScript_t3094523757;
// EfficientSpawnerScript
struct EfficientSpawnerScript_t2705190082;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_Leaderboard_Score892128102.h"
#include "AssemblyU2DCSharp_SpawnerScript3094523757.h"
#include "AssemblyU2DCSharp_EfficientSpawnerScript2705190082.h"

#pragma once
// Leaderboard/Score[]
struct ScoreU5BU5D_t2678361155  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Score_t892128102  m_Items[1];

public:
	inline Score_t892128102  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Score_t892128102 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Score_t892128102  value)
	{
		m_Items[index] = value;
	}
};
// SpawnerScript[]
struct SpawnerScriptU5BU5D_t2576419904  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SpawnerScript_t3094523757 * m_Items[1];

public:
	inline SpawnerScript_t3094523757 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline SpawnerScript_t3094523757 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, SpawnerScript_t3094523757 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// EfficientSpawnerScript[]
struct EfficientSpawnerScriptU5BU5D_t2369801719  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) EfficientSpawnerScript_t2705190082 * m_Items[1];

public:
	inline EfficientSpawnerScript_t2705190082 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline EfficientSpawnerScript_t2705190082 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, EfficientSpawnerScript_t2705190082 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
