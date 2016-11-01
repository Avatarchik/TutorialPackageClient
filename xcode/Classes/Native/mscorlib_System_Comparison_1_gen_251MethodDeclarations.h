﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<GuildWarPushMessageInfo>
struct Comparison_1_t17703;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GuildWarPushMessageInfo
#include "AssemblyU2DCSharp_GuildWarPushMessageInfo.h"

// System.Void System.Comparison`1<GuildWarPushMessageInfo>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m131436 (Comparison_1_t17703 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GuildWarPushMessageInfo>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m131437 (Comparison_1_t17703 * __this, GuildWarPushMessageInfo_t1486  ___x, GuildWarPushMessageInfo_t1486  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<GuildWarPushMessageInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m131438 (Comparison_1_t17703 * __this, GuildWarPushMessageInfo_t1486  ___x, GuildWarPushMessageInfo_t1486  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<GuildWarPushMessageInfo>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m131439 (Comparison_1_t17703 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;