#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerPrefsManager
struct PlayerPrefsManager_t1100855164;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void PlayerPrefsManager::.ctor()
extern "C"  void PlayerPrefsManager__ctor_m857415717 (PlayerPrefsManager_t1100855164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetHighScore(System.Single)
extern "C"  void PlayerPrefsManager_SetHighScore_m2553584182 (Il2CppObject * __this /* static, unused */, float ___highscore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerPrefsManager::GetHighScore()
extern "C"  float PlayerPrefsManager_GetHighScore_m1361563343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetInstructionsShown(System.Int32)
extern "C"  void PlayerPrefsManager_SetInstructionsShown_m1433420620 (Il2CppObject * __this /* static, unused */, int32_t ___shown0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetInstructionsShown()
extern "C"  int32_t PlayerPrefsManager_GetInstructionsShown_m1186789707 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::AddMoney(System.Single)
extern "C"  void PlayerPrefsManager_AddMoney_m4144755517 (Il2CppObject * __this /* static, unused */, float ___money0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetMoney()
extern "C"  int32_t PlayerPrefsManager_GetMoney_m3231657097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::AddGems(System.Int32)
extern "C"  void PlayerPrefsManager_AddGems_m3374271369 (Il2CppObject * __this /* static, unused */, int32_t ___gems0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetGems()
extern "C"  int32_t PlayerPrefsManager_GetGems_m4078130313 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetMasterVolume(System.Single)
extern "C"  void PlayerPrefsManager_SetMasterVolume_m837883564 (Il2CppObject * __this /* static, unused */, float ___volume0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerPrefsManager::GetMasterVolume()
extern "C"  float PlayerPrefsManager_GetMasterVolume_m1527153485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetSelectedShip(System.String)
extern "C"  void PlayerPrefsManager_SetSelectedShip_m2666044022 (Il2CppObject * __this /* static, unused */, String_t* ___shipName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsManager::GetSelectedShip()
extern "C"  String_t* PlayerPrefsManager_GetSelectedShip_m1030379769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::UnlockShip(System.String,System.Int32)
extern "C"  void PlayerPrefsManager_UnlockShip_m4280424456 (Il2CppObject * __this /* static, unused */, String_t* ___shipName0, int32_t ___booleanInt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetShipLockStatus(System.String)
extern "C"  int32_t PlayerPrefsManager_GetShipLockStatus_m596880336 (Il2CppObject * __this /* static, unused */, String_t* ___shipName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetName(System.String)
extern "C"  void PlayerPrefsManager_SetName_m237901506 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsManager::GetName()
extern "C"  String_t* PlayerPrefsManager_GetName_m3243667693 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetInfoPopupShown(System.String,System.Int32)
extern "C"  void PlayerPrefsManager_SetInfoPopupShown_m4001426685 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___shown1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetInfoPopupShown(System.String)
extern "C"  int32_t PlayerPrefsManager_GetInfoPopupShown_m2783871436 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetHighScoreAlreadyReset()
extern "C"  void PlayerPrefsManager_SetHighScoreAlreadyReset_m1919694318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetIfHighScoreAlreadyReset()
extern "C"  int32_t PlayerPrefsManager_GetIfHighScoreAlreadyReset_m3891444539 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetPopUpShown(System.String)
extern "C"  void PlayerPrefsManager_SetPopUpShown_m1412548522 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetPopUpShown(System.String)
extern "C"  int32_t PlayerPrefsManager_GetPopUpShown_m3163941872 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetNameClaimed(System.String)
extern "C"  void PlayerPrefsManager_SetNameClaimed_m2465912257 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetIsNameClaimed(System.String)
extern "C"  int32_t PlayerPrefsManager_GetIsNameClaimed_m163229153 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetSkinUnlocked(System.String)
extern "C"  void PlayerPrefsManager_SetSkinUnlocked_m303054635 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerPrefsManager::GetIsSkinUnlocked(System.String)
extern "C"  int32_t PlayerPrefsManager_GetIsSkinUnlocked_m3433322595 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsManager::SetSelectedSkin(System.String,System.String)
extern "C"  void PlayerPrefsManager_SetSelectedSkin_m3816305041 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___skinKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsManager::GetSelectedSkin(System.String)
extern "C"  String_t* PlayerPrefsManager_GetSelectedSkin_m869460798 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
