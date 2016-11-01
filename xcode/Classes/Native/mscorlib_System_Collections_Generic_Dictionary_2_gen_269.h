﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t23391;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>[]
struct IndexedSet_1U5BU5D_t23424;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t23425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
struct Transform_1_t23426;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t6091  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::keySlots
	CanvasU5BU5D_t23391* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::valueSlots
	IndexedSet_1U5BU5D_t23424* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::generation
	int32_t ___generation;
};
struct Dictionary_2_t6091_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<>f__am$cacheB
	Transform_1_t23426 * ___U3CU3Ef__am$cacheB;
};