﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t6389;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t16320;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t16455;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t5495  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::keySlots
	TypeU5BU5D_t1042* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::valueSlots
	MethodInfoU5BU5D_t6389* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::generation
	int32_t ___generation;
};
struct Dictionary_2_t5495_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::<>f__am$cacheB
	Transform_1_t16455 * ___U3CU3Ef__am$cacheB;
};