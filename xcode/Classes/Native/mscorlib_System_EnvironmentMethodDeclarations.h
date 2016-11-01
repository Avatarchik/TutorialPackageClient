﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Environment
struct Environment_t8244;
// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t8243;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
 bool Environment_get_SocketSecurityEnabled_m51257 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
 String_t* Environment_get_NewLine_m39113 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
 int32_t Environment_get_Platform_m56810 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
 String_t* Environment_GetOSVersionString_m56811 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
 OperatingSystem_t8243 * Environment_get_OSVersion_m56812 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
 int32_t Environment_get_TickCount_m56813 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
 String_t* Environment_internalGetEnvironmentVariable_m56814 (Object_t * __this/* static, unused */, String_t* ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
 String_t* Environment_GetEnvironmentVariable_m45777 (Object_t * __this/* static, unused */, String_t* ___variable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
 String_t* Environment_GetWindowsFolderPath_m56815 (Object_t * __this/* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
 String_t* Environment_GetFolderPath_m45745 (Object_t * __this/* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
 String_t* Environment_ReadXdgUserDir_m56816 (Object_t * __this/* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
 String_t* Environment_InternalGetFolderPath_m56817 (Object_t * __this/* static, unused */, int32_t ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
 bool Environment_get_IsRunningOnWindows_m56818 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
 String_t* Environment_internalGetHome_m56819 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;