#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Name
struct  Name_t1600141429  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.InputField Name::input
	InputField_t1631627530 * ___input_3;
	// System.String[] Name::swearWords
	StringU5BU5D_t1642385972* ___swearWords_4;
	// UnityEngine.GameObject Name::popupArrow
	GameObject_t1756533147 * ___popupArrow_5;

public:
	inline static int32_t get_offset_of_input_3() { return static_cast<int32_t>(offsetof(Name_t1600141429, ___input_3)); }
	inline InputField_t1631627530 * get_input_3() const { return ___input_3; }
	inline InputField_t1631627530 ** get_address_of_input_3() { return &___input_3; }
	inline void set_input_3(InputField_t1631627530 * value)
	{
		___input_3 = value;
		Il2CppCodeGenWriteBarrier(&___input_3, value);
	}

	inline static int32_t get_offset_of_swearWords_4() { return static_cast<int32_t>(offsetof(Name_t1600141429, ___swearWords_4)); }
	inline StringU5BU5D_t1642385972* get_swearWords_4() const { return ___swearWords_4; }
	inline StringU5BU5D_t1642385972** get_address_of_swearWords_4() { return &___swearWords_4; }
	inline void set_swearWords_4(StringU5BU5D_t1642385972* value)
	{
		___swearWords_4 = value;
		Il2CppCodeGenWriteBarrier(&___swearWords_4, value);
	}

	inline static int32_t get_offset_of_popupArrow_5() { return static_cast<int32_t>(offsetof(Name_t1600141429, ___popupArrow_5)); }
	inline GameObject_t1756533147 * get_popupArrow_5() const { return ___popupArrow_5; }
	inline GameObject_t1756533147 ** get_address_of_popupArrow_5() { return &___popupArrow_5; }
	inline void set_popupArrow_5(GameObject_t1756533147 * value)
	{
		___popupArrow_5 = value;
		Il2CppCodeGenWriteBarrier(&___popupArrow_5, value);
	}
};

struct Name_t1600141429_StaticFields
{
public:
	// System.String Name::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Name_t1600141429_StaticFields, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
