﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.NetworkCredential
struct NetworkCredential_t7190  : public Object_t
{
	// System.String System.Net.NetworkCredential::userName
	String_t* ___userName;
	// System.String System.Net.NetworkCredential::password
	String_t* ___password;
	// System.String System.Net.NetworkCredential::domain
	String_t* ___domain;
};