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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PurchasePanel
struct  PurchasePanel_t2894737303  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PurchasePanel::active
	bool ___active_2;
	// System.Int32 PurchasePanel::gold
	int32_t ___gold_4;
	// System.Int32 PurchasePanel::gems
	int32_t ___gems_5;

public:
	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(PurchasePanel_t2894737303, ___active_2)); }
	inline bool get_active_2() const { return ___active_2; }
	inline bool* get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(bool value)
	{
		___active_2 = value;
	}

	inline static int32_t get_offset_of_gold_4() { return static_cast<int32_t>(offsetof(PurchasePanel_t2894737303, ___gold_4)); }
	inline int32_t get_gold_4() const { return ___gold_4; }
	inline int32_t* get_address_of_gold_4() { return &___gold_4; }
	inline void set_gold_4(int32_t value)
	{
		___gold_4 = value;
	}

	inline static int32_t get_offset_of_gems_5() { return static_cast<int32_t>(offsetof(PurchasePanel_t2894737303, ___gems_5)); }
	inline int32_t get_gems_5() const { return ___gems_5; }
	inline int32_t* get_address_of_gems_5() { return &___gems_5; }
	inline void set_gems_5(int32_t value)
	{
		___gems_5 = value;
	}
};

struct PurchasePanel_t2894737303_StaticFields
{
public:
	// System.String PurchasePanel::shipToPurchase
	String_t* ___shipToPurchase_3;

public:
	inline static int32_t get_offset_of_shipToPurchase_3() { return static_cast<int32_t>(offsetof(PurchasePanel_t2894737303_StaticFields, ___shipToPurchase_3)); }
	inline String_t* get_shipToPurchase_3() const { return ___shipToPurchase_3; }
	inline String_t** get_address_of_shipToPurchase_3() { return &___shipToPurchase_3; }
	inline void set_shipToPurchase_3(String_t* value)
	{
		___shipToPurchase_3 = value;
		Il2CppCodeGenWriteBarrier(&___shipToPurchase_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
