#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AchievementButton
struct AchievementButton_t3780217931;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementButton
struct  AchievementButton_t3780217931  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 AchievementButton::myLeaderboardIndex
	int32_t ___myLeaderboardIndex_2;
	// System.Boolean AchievementButton::asteroidType
	bool ___asteroidType_6;
	// System.Boolean AchievementButton::gemType
	bool ___gemType_7;
	// System.Boolean AchievementButton::backgroundType
	bool ___backgroundType_8;
	// System.Boolean AchievementButton::unlocked
	bool ___unlocked_9;
	// UnityEngine.Sprite AchievementButton::sprite
	Sprite_t309593783 * ___sprite_10;
	// UnityEngine.UI.Image AchievementButton::myImage
	Image_t2042527209 * ___myImage_11;
	// UnityEngine.UI.Image AchievementButton::myBackgroundImage
	Image_t2042527209 * ___myBackgroundImage_12;
	// UnityEngine.GameObject AchievementButton::myLock
	GameObject_t1756533147 * ___myLock_13;
	// UnityEngine.GameObject AchievementButton::selectedPanel
	GameObject_t1756533147 * ___selectedPanel_14;
	// System.Int32 AchievementButton::highScoreToBeat
	int32_t ___highScoreToBeat_15;
	// System.Int32 AchievementButton::leaderBoardIndex
	int32_t ___leaderBoardIndex_16;
	// System.Int32 AchievementButton::gemsAtOnce
	int32_t ___gemsAtOnce_17;
	// System.Int32 AchievementButton::moneyAtOnce
	int32_t ___moneyAtOnce_18;
	// UnityEngine.GameObject AchievementButton::mySkinPrefab
	GameObject_t1756533147 * ___mySkinPrefab_19;
	// System.String AchievementButton::myPlayerPrefsUnlockKey
	String_t* ___myPlayerPrefsUnlockKey_20;

public:
	inline static int32_t get_offset_of_myLeaderboardIndex_2() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___myLeaderboardIndex_2)); }
	inline int32_t get_myLeaderboardIndex_2() const { return ___myLeaderboardIndex_2; }
	inline int32_t* get_address_of_myLeaderboardIndex_2() { return &___myLeaderboardIndex_2; }
	inline void set_myLeaderboardIndex_2(int32_t value)
	{
		___myLeaderboardIndex_2 = value;
	}

	inline static int32_t get_offset_of_asteroidType_6() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___asteroidType_6)); }
	inline bool get_asteroidType_6() const { return ___asteroidType_6; }
	inline bool* get_address_of_asteroidType_6() { return &___asteroidType_6; }
	inline void set_asteroidType_6(bool value)
	{
		___asteroidType_6 = value;
	}

	inline static int32_t get_offset_of_gemType_7() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___gemType_7)); }
	inline bool get_gemType_7() const { return ___gemType_7; }
	inline bool* get_address_of_gemType_7() { return &___gemType_7; }
	inline void set_gemType_7(bool value)
	{
		___gemType_7 = value;
	}

	inline static int32_t get_offset_of_backgroundType_8() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___backgroundType_8)); }
	inline bool get_backgroundType_8() const { return ___backgroundType_8; }
	inline bool* get_address_of_backgroundType_8() { return &___backgroundType_8; }
	inline void set_backgroundType_8(bool value)
	{
		___backgroundType_8 = value;
	}

	inline static int32_t get_offset_of_unlocked_9() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___unlocked_9)); }
	inline bool get_unlocked_9() const { return ___unlocked_9; }
	inline bool* get_address_of_unlocked_9() { return &___unlocked_9; }
	inline void set_unlocked_9(bool value)
	{
		___unlocked_9 = value;
	}

	inline static int32_t get_offset_of_sprite_10() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___sprite_10)); }
	inline Sprite_t309593783 * get_sprite_10() const { return ___sprite_10; }
	inline Sprite_t309593783 ** get_address_of_sprite_10() { return &___sprite_10; }
	inline void set_sprite_10(Sprite_t309593783 * value)
	{
		___sprite_10 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_10, value);
	}

	inline static int32_t get_offset_of_myImage_11() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___myImage_11)); }
	inline Image_t2042527209 * get_myImage_11() const { return ___myImage_11; }
	inline Image_t2042527209 ** get_address_of_myImage_11() { return &___myImage_11; }
	inline void set_myImage_11(Image_t2042527209 * value)
	{
		___myImage_11 = value;
		Il2CppCodeGenWriteBarrier(&___myImage_11, value);
	}

	inline static int32_t get_offset_of_myBackgroundImage_12() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___myBackgroundImage_12)); }
	inline Image_t2042527209 * get_myBackgroundImage_12() const { return ___myBackgroundImage_12; }
	inline Image_t2042527209 ** get_address_of_myBackgroundImage_12() { return &___myBackgroundImage_12; }
	inline void set_myBackgroundImage_12(Image_t2042527209 * value)
	{
		___myBackgroundImage_12 = value;
		Il2CppCodeGenWriteBarrier(&___myBackgroundImage_12, value);
	}

	inline static int32_t get_offset_of_myLock_13() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___myLock_13)); }
	inline GameObject_t1756533147 * get_myLock_13() const { return ___myLock_13; }
	inline GameObject_t1756533147 ** get_address_of_myLock_13() { return &___myLock_13; }
	inline void set_myLock_13(GameObject_t1756533147 * value)
	{
		___myLock_13 = value;
		Il2CppCodeGenWriteBarrier(&___myLock_13, value);
	}

	inline static int32_t get_offset_of_selectedPanel_14() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___selectedPanel_14)); }
	inline GameObject_t1756533147 * get_selectedPanel_14() const { return ___selectedPanel_14; }
	inline GameObject_t1756533147 ** get_address_of_selectedPanel_14() { return &___selectedPanel_14; }
	inline void set_selectedPanel_14(GameObject_t1756533147 * value)
	{
		___selectedPanel_14 = value;
		Il2CppCodeGenWriteBarrier(&___selectedPanel_14, value);
	}

	inline static int32_t get_offset_of_highScoreToBeat_15() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___highScoreToBeat_15)); }
	inline int32_t get_highScoreToBeat_15() const { return ___highScoreToBeat_15; }
	inline int32_t* get_address_of_highScoreToBeat_15() { return &___highScoreToBeat_15; }
	inline void set_highScoreToBeat_15(int32_t value)
	{
		___highScoreToBeat_15 = value;
	}

	inline static int32_t get_offset_of_leaderBoardIndex_16() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___leaderBoardIndex_16)); }
	inline int32_t get_leaderBoardIndex_16() const { return ___leaderBoardIndex_16; }
	inline int32_t* get_address_of_leaderBoardIndex_16() { return &___leaderBoardIndex_16; }
	inline void set_leaderBoardIndex_16(int32_t value)
	{
		___leaderBoardIndex_16 = value;
	}

	inline static int32_t get_offset_of_gemsAtOnce_17() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___gemsAtOnce_17)); }
	inline int32_t get_gemsAtOnce_17() const { return ___gemsAtOnce_17; }
	inline int32_t* get_address_of_gemsAtOnce_17() { return &___gemsAtOnce_17; }
	inline void set_gemsAtOnce_17(int32_t value)
	{
		___gemsAtOnce_17 = value;
	}

	inline static int32_t get_offset_of_moneyAtOnce_18() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___moneyAtOnce_18)); }
	inline int32_t get_moneyAtOnce_18() const { return ___moneyAtOnce_18; }
	inline int32_t* get_address_of_moneyAtOnce_18() { return &___moneyAtOnce_18; }
	inline void set_moneyAtOnce_18(int32_t value)
	{
		___moneyAtOnce_18 = value;
	}

	inline static int32_t get_offset_of_mySkinPrefab_19() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___mySkinPrefab_19)); }
	inline GameObject_t1756533147 * get_mySkinPrefab_19() const { return ___mySkinPrefab_19; }
	inline GameObject_t1756533147 ** get_address_of_mySkinPrefab_19() { return &___mySkinPrefab_19; }
	inline void set_mySkinPrefab_19(GameObject_t1756533147 * value)
	{
		___mySkinPrefab_19 = value;
		Il2CppCodeGenWriteBarrier(&___mySkinPrefab_19, value);
	}

	inline static int32_t get_offset_of_myPlayerPrefsUnlockKey_20() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931, ___myPlayerPrefsUnlockKey_20)); }
	inline String_t* get_myPlayerPrefsUnlockKey_20() const { return ___myPlayerPrefsUnlockKey_20; }
	inline String_t** get_address_of_myPlayerPrefsUnlockKey_20() { return &___myPlayerPrefsUnlockKey_20; }
	inline void set_myPlayerPrefsUnlockKey_20(String_t* value)
	{
		___myPlayerPrefsUnlockKey_20 = value;
		Il2CppCodeGenWriteBarrier(&___myPlayerPrefsUnlockKey_20, value);
	}
};

struct AchievementButton_t3780217931_StaticFields
{
public:
	// AchievementButton AchievementButton::selectedGem
	AchievementButton_t3780217931 * ___selectedGem_3;
	// AchievementButton AchievementButton::selectedBackground
	AchievementButton_t3780217931 * ___selectedBackground_4;
	// AchievementButton AchievementButton::selectedAsteroid
	AchievementButton_t3780217931 * ___selectedAsteroid_5;

public:
	inline static int32_t get_offset_of_selectedGem_3() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931_StaticFields, ___selectedGem_3)); }
	inline AchievementButton_t3780217931 * get_selectedGem_3() const { return ___selectedGem_3; }
	inline AchievementButton_t3780217931 ** get_address_of_selectedGem_3() { return &___selectedGem_3; }
	inline void set_selectedGem_3(AchievementButton_t3780217931 * value)
	{
		___selectedGem_3 = value;
		Il2CppCodeGenWriteBarrier(&___selectedGem_3, value);
	}

	inline static int32_t get_offset_of_selectedBackground_4() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931_StaticFields, ___selectedBackground_4)); }
	inline AchievementButton_t3780217931 * get_selectedBackground_4() const { return ___selectedBackground_4; }
	inline AchievementButton_t3780217931 ** get_address_of_selectedBackground_4() { return &___selectedBackground_4; }
	inline void set_selectedBackground_4(AchievementButton_t3780217931 * value)
	{
		___selectedBackground_4 = value;
		Il2CppCodeGenWriteBarrier(&___selectedBackground_4, value);
	}

	inline static int32_t get_offset_of_selectedAsteroid_5() { return static_cast<int32_t>(offsetof(AchievementButton_t3780217931_StaticFields, ___selectedAsteroid_5)); }
	inline AchievementButton_t3780217931 * get_selectedAsteroid_5() const { return ___selectedAsteroid_5; }
	inline AchievementButton_t3780217931 ** get_address_of_selectedAsteroid_5() { return &___selectedAsteroid_5; }
	inline void set_selectedAsteroid_5(AchievementButton_t3780217931 * value)
	{
		___selectedAsteroid_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectedAsteroid_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
