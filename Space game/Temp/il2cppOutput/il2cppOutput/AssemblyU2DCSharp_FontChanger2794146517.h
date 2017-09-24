#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// UnityEngine.Font
struct Font_t4239498691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FontChanger
struct  FontChanger_t2794146517  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text[] FontChanger::textArray
	TextU5BU5D_t4216439300* ___textArray_2;
	// UnityEngine.Font FontChanger::newFont
	Font_t4239498691 * ___newFont_3;

public:
	inline static int32_t get_offset_of_textArray_2() { return static_cast<int32_t>(offsetof(FontChanger_t2794146517, ___textArray_2)); }
	inline TextU5BU5D_t4216439300* get_textArray_2() const { return ___textArray_2; }
	inline TextU5BU5D_t4216439300** get_address_of_textArray_2() { return &___textArray_2; }
	inline void set_textArray_2(TextU5BU5D_t4216439300* value)
	{
		___textArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___textArray_2, value);
	}

	inline static int32_t get_offset_of_newFont_3() { return static_cast<int32_t>(offsetof(FontChanger_t2794146517, ___newFont_3)); }
	inline Font_t4239498691 * get_newFont_3() const { return ___newFont_3; }
	inline Font_t4239498691 ** get_address_of_newFont_3() { return &___newFont_3; }
	inline void set_newFont_3(Font_t4239498691 * value)
	{
		___newFont_3 = value;
		Il2CppCodeGenWriteBarrier(&___newFont_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
