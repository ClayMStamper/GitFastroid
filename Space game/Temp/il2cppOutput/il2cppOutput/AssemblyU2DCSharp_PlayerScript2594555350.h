#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t3355282079;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::speed
	float ___speed_2;
	// System.Single PlayerScript::turnSpeed
	float ___turnSpeed_3;
	// System.Single PlayerScript::speedScaling
	float ___speedScaling_4;
	// System.Single PlayerScript::turnSpeedScaling
	float ___turnSpeedScaling_5;
	// System.Single PlayerScript::flatTurnSpeed
	float ___flatTurnSpeed_6;
	// System.Single PlayerScript::speedCap
	float ___speedCap_7;
	// System.Single PlayerScript::turnSpeedCap
	float ___turnSpeedCap_8;
	// LevelManager PlayerScript::levelManager
	LevelManager_t3355282079 * ___levelManager_10;
	// System.Boolean PlayerScript::rightTurnBool
	bool ___rightTurnBool_11;
	// System.Boolean PlayerScript::leftTurnBool
	bool ___leftTurnBool_12;
	// System.Boolean PlayerScript::accelerateBool
	bool ___accelerateBool_13;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___turnSpeed_3)); }
	inline float get_turnSpeed_3() const { return ___turnSpeed_3; }
	inline float* get_address_of_turnSpeed_3() { return &___turnSpeed_3; }
	inline void set_turnSpeed_3(float value)
	{
		___turnSpeed_3 = value;
	}

	inline static int32_t get_offset_of_speedScaling_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___speedScaling_4)); }
	inline float get_speedScaling_4() const { return ___speedScaling_4; }
	inline float* get_address_of_speedScaling_4() { return &___speedScaling_4; }
	inline void set_speedScaling_4(float value)
	{
		___speedScaling_4 = value;
	}

	inline static int32_t get_offset_of_turnSpeedScaling_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___turnSpeedScaling_5)); }
	inline float get_turnSpeedScaling_5() const { return ___turnSpeedScaling_5; }
	inline float* get_address_of_turnSpeedScaling_5() { return &___turnSpeedScaling_5; }
	inline void set_turnSpeedScaling_5(float value)
	{
		___turnSpeedScaling_5 = value;
	}

	inline static int32_t get_offset_of_flatTurnSpeed_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___flatTurnSpeed_6)); }
	inline float get_flatTurnSpeed_6() const { return ___flatTurnSpeed_6; }
	inline float* get_address_of_flatTurnSpeed_6() { return &___flatTurnSpeed_6; }
	inline void set_flatTurnSpeed_6(float value)
	{
		___flatTurnSpeed_6 = value;
	}

	inline static int32_t get_offset_of_speedCap_7() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___speedCap_7)); }
	inline float get_speedCap_7() const { return ___speedCap_7; }
	inline float* get_address_of_speedCap_7() { return &___speedCap_7; }
	inline void set_speedCap_7(float value)
	{
		___speedCap_7 = value;
	}

	inline static int32_t get_offset_of_turnSpeedCap_8() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___turnSpeedCap_8)); }
	inline float get_turnSpeedCap_8() const { return ___turnSpeedCap_8; }
	inline float* get_address_of_turnSpeedCap_8() { return &___turnSpeedCap_8; }
	inline void set_turnSpeedCap_8(float value)
	{
		___turnSpeedCap_8 = value;
	}

	inline static int32_t get_offset_of_levelManager_10() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___levelManager_10)); }
	inline LevelManager_t3355282079 * get_levelManager_10() const { return ___levelManager_10; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_10() { return &___levelManager_10; }
	inline void set_levelManager_10(LevelManager_t3355282079 * value)
	{
		___levelManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_10, value);
	}

	inline static int32_t get_offset_of_rightTurnBool_11() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___rightTurnBool_11)); }
	inline bool get_rightTurnBool_11() const { return ___rightTurnBool_11; }
	inline bool* get_address_of_rightTurnBool_11() { return &___rightTurnBool_11; }
	inline void set_rightTurnBool_11(bool value)
	{
		___rightTurnBool_11 = value;
	}

	inline static int32_t get_offset_of_leftTurnBool_12() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___leftTurnBool_12)); }
	inline bool get_leftTurnBool_12() const { return ___leftTurnBool_12; }
	inline bool* get_address_of_leftTurnBool_12() { return &___leftTurnBool_12; }
	inline void set_leftTurnBool_12(bool value)
	{
		___leftTurnBool_12 = value;
	}

	inline static int32_t get_offset_of_accelerateBool_13() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___accelerateBool_13)); }
	inline bool get_accelerateBool_13() const { return ___accelerateBool_13; }
	inline bool* get_address_of_accelerateBool_13() { return &___accelerateBool_13; }
	inline void set_accelerateBool_13(bool value)
	{
		___accelerateBool_13 = value;
	}
};

struct PlayerScript_t2594555350_StaticFields
{
public:
	// System.Boolean PlayerScript::alive
	bool ___alive_9;

public:
	inline static int32_t get_offset_of_alive_9() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350_StaticFields, ___alive_9)); }
	inline bool get_alive_9() const { return ___alive_9; }
	inline bool* get_address_of_alive_9() { return &___alive_9; }
	inline void set_alive_9(bool value)
	{
		___alive_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
