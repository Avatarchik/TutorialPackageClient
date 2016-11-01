﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoCMethod
struct MonoCMethod_t7973  : public ConstructorInfo_t7060
{
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t24 ___mhandle;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype;
};