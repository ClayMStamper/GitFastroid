#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckStorePopup
struct  CheckStorePopup_t3937356553  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CheckStorePopup::storePopup
	GameObject_t1756533147 * ___storePopup_2;
	// UnityEngine.GameObject CheckStorePopup::leaderboardPopup
	GameObject_t1756533147 * ___leaderboardPopup_3;

public:
	inline static int32_t get_offset_of_storePopup_2() { return static_cast<int32_t>(offsetof(CheckStorePopup_t3937356553, ___storePopup_2)); }
	inline GameObject_t1756533147 * get_storePopup_2() const { return ___storePopup_2; }
	inline GameObject_t1756533147 ** get_address_of_storePopup_2() { return &___storePopup_2; }
	inline void set_storePopup_2(GameObject_t1756533147 * value)
	{
		___storePopup_2 = value;
		Il2CppCodeGenWriteBarrier(&___storePopup_2, value);
	}

	inline static int32_t get_offset_of_leaderboardPopup_3() { return static_cast<int32_t>(offsetof(CheckStorePopup_t3937356553, ___leaderboardPopup_3)); }
	inline GameObject_t1756533147 * get_leaderboardPopup_3() const { return ___leaderboardPopup_3; }
	inline GameObject_t1756533147 ** get_address_of_leaderboardPopup_3() { return &___leaderboardPopup_3; }
	inline void set_leaderboardPopup_3(GameObject_t1756533147 * value)
	{
		___leaderboardPopup_3 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardPopup_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
