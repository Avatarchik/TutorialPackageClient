﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MemberAccessException
struct MemberAccessException_t8246;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MemberAccessException::.ctor()
 void MemberAccessException__ctor_m56862 (MemberAccessException_t8246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.String)
 void MemberAccessException__ctor_m56863 (MemberAccessException_t8246 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberAccessException__ctor_m56864 (MemberAccessException_t8246 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;