#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementsTitle
struct  AchievementsTitle_t2613195454  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Scrollbar AchievementsTitle::AchievementSlider
	Scrollbar_t3248359358 * ___AchievementSlider_2;
	// UnityEngine.UI.Text AchievementsTitle::AchievementTitle
	Text_t356221433 * ___AchievementTitle_3;
	// UnityEngine.GameObject AchievementsTitle::leftArrow
	GameObject_t1756533147 * ___leftArrow_4;
	// UnityEngine.GameObject AchievementsTitle::rightArrow
	GameObject_t1756533147 * ___rightArrow_5;

public:
	inline static int32_t get_offset_of_AchievementSlider_2() { return static_cast<int32_t>(offsetof(AchievementsTitle_t2613195454, ___AchievementSlider_2)); }
	inline Scrollbar_t3248359358 * get_AchievementSlider_2() const { return ___AchievementSlider_2; }
	inline Scrollbar_t3248359358 ** get_address_of_AchievementSlider_2() { return &___AchievementSlider_2; }
	inline void set_AchievementSlider_2(Scrollbar_t3248359358 * value)
	{
		___AchievementSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___AchievementSlider_2, value);
	}

	inline static int32_t get_offset_of_AchievementTitle_3() { return static_cast<int32_t>(offsetof(AchievementsTitle_t2613195454, ___AchievementTitle_3)); }
	inline Text_t356221433 * get_AchievementTitle_3() const { return ___AchievementTitle_3; }
	inline Text_t356221433 ** get_address_of_AchievementTitle_3() { return &___AchievementTitle_3; }
	inline void set_AchievementTitle_3(Text_t356221433 * value)
	{
		___AchievementTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___AchievementTitle_3, value);
	}

	inline static int32_t get_offset_of_leftArrow_4() { return static_cast<int32_t>(offsetof(AchievementsTitle_t2613195454, ___leftArrow_4)); }
	inline GameObject_t1756533147 * get_leftArrow_4() const { return ___leftArrow_4; }
	inline GameObject_t1756533147 ** get_address_of_leftArrow_4() { return &___leftArrow_4; }
	inline void set_leftArrow_4(GameObject_t1756533147 * value)
	{
		___leftArrow_4 = value;
		Il2CppCodeGenWriteBarrier(&___leftArrow_4, value);
	}

	inline static int32_t get_offset_of_rightArrow_5() { return static_cast<int32_t>(offsetof(AchievementsTitle_t2613195454, ___rightArrow_5)); }
	inline GameObject_t1756533147 * get_rightArrow_5() const { return ___rightArrow_5; }
	inline GameObject_t1756533147 ** get_address_of_rightArrow_5() { return &___rightArrow_5; }
	inline void set_rightArrow_5(GameObject_t1756533147 * value)
	{
		___rightArrow_5 = value;
		Il2CppCodeGenWriteBarrier(&___rightArrow_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
