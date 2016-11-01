﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.Stream::.ctor()
 void Stream__ctor_m45807 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
 void Stream__cctor_m54667 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
 void Stream_Dispose_m45789 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
 void Stream_Dispose_m45824 (Stream_t1038 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
 void Stream_Close_m6534 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::get_ReadTimeout()
 int32_t Stream_get_ReadTimeout_m45790 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::get_WriteTimeout()
 int32_t Stream_get_WriteTimeout_m45791 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
 int32_t Stream_ReadByte_m40388 (Stream_t1038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
 void Stream_WriteByte_m45774 (Stream_t1038 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Stream_BeginRead_m45794 (Stream_t1038 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Stream_BeginWrite_m45800 (Stream_t1038 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
 int32_t Stream_EndRead_m45796 (Stream_t1038 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
 void Stream_EndWrite_m45801 (Stream_t1038 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;