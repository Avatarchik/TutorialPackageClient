﻿#pragma once
#include <stdint.h>
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t8152  : public CodeAccessPermission_t8153
{
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags;
};