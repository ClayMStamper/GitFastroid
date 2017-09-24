#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.String[]
struct StringU5BU5D_t1642385972;
// SkinManager
struct SkinManager_t2298573004;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// EfficientSpawnerScript[]
struct EfficientSpawnerScriptU5BU5D_t2369801719;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinManager
struct  SkinManager_t2298573004  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] SkinManager::skinPrefabs
	GameObjectU5BU5D_t3057952154* ___skinPrefabs_2;
	// System.String[] SkinManager::skinPrefabKeys
	StringU5BU5D_t1642385972* ___skinPrefabKeys_3;
	// UnityEngine.GameObject SkinManager::asteroid
	GameObject_t1756533147 * ___asteroid_5;
	// UnityEngine.GameObject SkinManager::gem
	GameObject_t1756533147 * ___gem_6;
	// UnityEngine.GameObject SkinManager::background
	GameObject_t1756533147 * ___background_7;
	// EfficientSpawnerScript[] SkinManager::spawners
	EfficientSpawnerScriptU5BU5D_t2369801719* ___spawners_8;

public:
	inline static int32_t get_offset_of_skinPrefabs_2() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___skinPrefabs_2)); }
	inline GameObjectU5BU5D_t3057952154* get_skinPrefabs_2() const { return ___skinPrefabs_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_skinPrefabs_2() { return &___skinPrefabs_2; }
	inline void set_skinPrefabs_2(GameObjectU5BU5D_t3057952154* value)
	{
		___skinPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinPrefabs_2, value);
	}

	inline static int32_t get_offset_of_skinPrefabKeys_3() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___skinPrefabKeys_3)); }
	inline StringU5BU5D_t1642385972* get_skinPrefabKeys_3() const { return ___skinPrefabKeys_3; }
	inline StringU5BU5D_t1642385972** get_address_of_skinPrefabKeys_3() { return &___skinPrefabKeys_3; }
	inline void set_skinPrefabKeys_3(StringU5BU5D_t1642385972* value)
	{
		___skinPrefabKeys_3 = value;
		Il2CppCodeGenWriteBarrier(&___skinPrefabKeys_3, value);
	}

	inline static int32_t get_offset_of_asteroid_5() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___asteroid_5)); }
	inline GameObject_t1756533147 * get_asteroid_5() const { return ___asteroid_5; }
	inline GameObject_t1756533147 ** get_address_of_asteroid_5() { return &___asteroid_5; }
	inline void set_asteroid_5(GameObject_t1756533147 * value)
	{
		___asteroid_5 = value;
		Il2CppCodeGenWriteBarrier(&___asteroid_5, value);
	}

	inline static int32_t get_offset_of_gem_6() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___gem_6)); }
	inline GameObject_t1756533147 * get_gem_6() const { return ___gem_6; }
	inline GameObject_t1756533147 ** get_address_of_gem_6() { return &___gem_6; }
	inline void set_gem_6(GameObject_t1756533147 * value)
	{
		___gem_6 = value;
		Il2CppCodeGenWriteBarrier(&___gem_6, value);
	}

	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___background_7)); }
	inline GameObject_t1756533147 * get_background_7() const { return ___background_7; }
	inline GameObject_t1756533147 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(GameObject_t1756533147 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier(&___background_7, value);
	}

	inline static int32_t get_offset_of_spawners_8() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004, ___spawners_8)); }
	inline EfficientSpawnerScriptU5BU5D_t2369801719* get_spawners_8() const { return ___spawners_8; }
	inline EfficientSpawnerScriptU5BU5D_t2369801719** get_address_of_spawners_8() { return &___spawners_8; }
	inline void set_spawners_8(EfficientSpawnerScriptU5BU5D_t2369801719* value)
	{
		___spawners_8 = value;
		Il2CppCodeGenWriteBarrier(&___spawners_8, value);
	}
};

struct SkinManager_t2298573004_StaticFields
{
public:
	// SkinManager SkinManager::instance
	SkinManager_t2298573004 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SkinManager_t2298573004_StaticFields, ___instance_4)); }
	inline SkinManager_t2298573004 * get_instance_4() const { return ___instance_4; }
	inline SkinManager_t2298573004 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SkinManager_t2298573004 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
