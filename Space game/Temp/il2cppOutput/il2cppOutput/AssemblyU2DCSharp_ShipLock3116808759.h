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
// PurchasePanel
struct PurchasePanel_t2894737303;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipLock
struct  ShipLock_t3116808759  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ShipLock::isUnlocked
	int32_t ___isUnlocked_2;
	// UnityEngine.GameObject ShipLock::purchasePanel
	GameObject_t1756533147 * ___purchasePanel_3;
	// PurchasePanel ShipLock::purchasePanelScript
	PurchasePanel_t2894737303 * ___purchasePanelScript_4;
	// UnityEngine.GameObject ShipLock::parent
	GameObject_t1756533147 * ___parent_5;

public:
	inline static int32_t get_offset_of_isUnlocked_2() { return static_cast<int32_t>(offsetof(ShipLock_t3116808759, ___isUnlocked_2)); }
	inline int32_t get_isUnlocked_2() const { return ___isUnlocked_2; }
	inline int32_t* get_address_of_isUnlocked_2() { return &___isUnlocked_2; }
	inline void set_isUnlocked_2(int32_t value)
	{
		___isUnlocked_2 = value;
	}

	inline static int32_t get_offset_of_purchasePanel_3() { return static_cast<int32_t>(offsetof(ShipLock_t3116808759, ___purchasePanel_3)); }
	inline GameObject_t1756533147 * get_purchasePanel_3() const { return ___purchasePanel_3; }
	inline GameObject_t1756533147 ** get_address_of_purchasePanel_3() { return &___purchasePanel_3; }
	inline void set_purchasePanel_3(GameObject_t1756533147 * value)
	{
		___purchasePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___purchasePanel_3, value);
	}

	inline static int32_t get_offset_of_purchasePanelScript_4() { return static_cast<int32_t>(offsetof(ShipLock_t3116808759, ___purchasePanelScript_4)); }
	inline PurchasePanel_t2894737303 * get_purchasePanelScript_4() const { return ___purchasePanelScript_4; }
	inline PurchasePanel_t2894737303 ** get_address_of_purchasePanelScript_4() { return &___purchasePanelScript_4; }
	inline void set_purchasePanelScript_4(PurchasePanel_t2894737303 * value)
	{
		___purchasePanelScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___purchasePanelScript_4, value);
	}

	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ShipLock_t3116808759, ___parent_5)); }
	inline GameObject_t1756533147 * get_parent_5() const { return ___parent_5; }
	inline GameObject_t1756533147 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(GameObject_t1756533147 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier(&___parent_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
