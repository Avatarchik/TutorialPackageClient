﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,Belle>
struct Transform_1_t19059;
// System.Object
struct Object_t;
// Belle
struct Belle_t1881;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,Belle>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m139818 (Transform_1_t19059 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,Belle>::Invoke(TKey,TValue)
 Belle_t1881 * Transform_1_Invoke_m139819 (Transform_1_t19059 * __this, int32_t ___key, Belle_t1881 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,Belle>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m139820 (Transform_1_t19059 * __this, int32_t ___key, Belle_t1881 * ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Belle,Belle>::EndInvoke(System.IAsyncResult)
 Belle_t1881 * Transform_1_EndInvoke_m139821 (Transform_1_t19059 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;