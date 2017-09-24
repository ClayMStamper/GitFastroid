#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t1518975274  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Score::moneyAddedYet
	bool ___moneyAddedYet_4;
	// UnityEngine.UI.Text Score::text
	Text_t356221433 * ___text_5;

public:
	inline static int32_t get_offset_of_moneyAddedYet_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___moneyAddedYet_4)); }
	inline bool get_moneyAddedYet_4() const { return ___moneyAddedYet_4; }
	inline bool* get_address_of_moneyAddedYet_4() { return &___moneyAddedYet_4; }
	inline void set_moneyAddedYet_4(bool value)
	{
		___moneyAddedYet_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___text_5)); }
	inline Text_t356221433 * get_text_5() const { return ___text_5; }
	inline Text_t356221433 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t356221433 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}
};

struct Score_t1518975274_StaticFields
{
public:
	// System.Single Score::score
	float ___score_2;
	// System.Single[] Score::scores
	SingleU5BU5D_t577127397* ___scores_3;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(Score_t1518975274_StaticFields, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_scores_3() { return static_cast<int32_t>(offsetof(Score_t1518975274_StaticFields, ___scores_3)); }
	inline SingleU5BU5D_t577127397* get_scores_3() const { return ___scores_3; }
	inline SingleU5BU5D_t577127397** get_address_of_scores_3() { return &___scores_3; }
	inline void set_scores_3(SingleU5BU5D_t577127397* value)
	{
		___scores_3 = value;
		Il2CppCodeGenWriteBarrier(&___scores_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
