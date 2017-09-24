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
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NameChangeWarning
struct  NameChangeWarning_t3581467745  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject NameChangeWarning::popup
	GameObject_t1756533147 * ___popup_2;
	// UnityEngine.UI.Image NameChangeWarning::myRaycastTarget
	Image_t2042527209 * ___myRaycastTarget_3;

public:
	inline static int32_t get_offset_of_popup_2() { return static_cast<int32_t>(offsetof(NameChangeWarning_t3581467745, ___popup_2)); }
	inline GameObject_t1756533147 * get_popup_2() const { return ___popup_2; }
	inline GameObject_t1756533147 ** get_address_of_popup_2() { return &___popup_2; }
	inline void set_popup_2(GameObject_t1756533147 * value)
	{
		___popup_2 = value;
		Il2CppCodeGenWriteBarrier(&___popup_2, value);
	}

	inline static int32_t get_offset_of_myRaycastTarget_3() { return static_cast<int32_t>(offsetof(NameChangeWarning_t3581467745, ___myRaycastTarget_3)); }
	inline Image_t2042527209 * get_myRaycastTarget_3() const { return ___myRaycastTarget_3; }
	inline Image_t2042527209 ** get_address_of_myRaycastTarget_3() { return &___myRaycastTarget_3; }
	inline void set_myRaycastTarget_3(Image_t2042527209 * value)
	{
		___myRaycastTarget_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRaycastTarget_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
