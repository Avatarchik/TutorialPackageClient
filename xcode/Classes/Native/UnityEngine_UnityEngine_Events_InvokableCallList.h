﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t7506;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t7505  : public Object_t
{
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t7506 * ___m_PersistentCalls;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t7506 * ___m_RuntimeCalls;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t7506 * ___m_ExecutingCalls;
};