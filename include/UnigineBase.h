/* Copyright (C) 2005-2021, UNIGINE. All rights reserved.
 *
 * This file is a part of the UNIGINE 2 SDK.
 *
 * Your use and / or redistribution of this software in source and / or
 * binary form, with or without modification, is subject to: (i) your
 * ongoing acceptance of and compliance with the terms and conditions of
 * the UNIGINE License Agreement; and (ii) your inclusion of this notice
 * in any version of this software that you use or redistribute.
 * A copy of the UNIGINE License Agreement is available by contacting
 * UNIGINE. at http://unigine.com/
 */


#pragma once
/*
 */
#include <new>
#define UNIGINE_NOTHROW_T	std::nothrow_t

/*
 */
#include <time.h>
#include <math.h>
#include <float.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <assert.h>
#include <limits.h>

 /*
 */
#ifdef _WIN32
	#define UNIGINE_EXPORT		__declspec(dllexport)
	#define UNIGINE_IMPORT		__declspec(dllimport)
	#define UNIGINE_INLINE		__forceinline
	#define UNIGINE_RESTRICT	__restrict
#else
	#define UNIGINE_EXPORT		__attribute__((visibility("default")))
	#define UNIGINE_IMPORT
	#define UNIGINE_INLINE		__inline__
	#define UNIGINE_RESTRICT	__restrict
#endif

#if defined(UNIGINE_EMBED)
	#define UNIGINE_API
#elif defined(UNIGINE)
	#define UNIGINE_API			UNIGINE_EXPORT
#else
	#define UNIGINE_API			UNIGINE_IMPORT
#endif

/*
 */
#define UNIGINE_UNUSED(EXP)		(void)EXP;

/*
 */
#ifdef __GNUC__
#define UNIGINE_DEPRECATED(id) id __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define UNIGINE_DEPRECATED(id) __declspec(deprecated) id
#else
#define UNIGINE_DEPRECATED(id) id
#endif

/*
 */
#ifdef __GNUC__
	#define UNIGINE_PRINTF(FORMAT,LIST)	__attribute__((format(printf,FORMAT,LIST)))
	#define UNIGINE_SCANF(FORMAT,LIST)	__attribute__((format(scanf,FORMAT,LIST)))
#else
	#define UNIGINE_PRINTF(FORMAT,LIST)
	#define UNIGINE_SCANF(FORMAT,LIST)
#endif

/*
 */
#ifdef _WIN32
	#pragma warning(disable:4100)	// 'identifier' : unreferenced formal parameter
	#pragma warning(disable:4127)	// conditional expression is constant
	#pragma warning(disable:4201)	// nonstandard extension used : nameless struct/union
	#pragma warning(disable:4250)	// 'class1' : inherits 'class2::member' via dominance
	#pragma warning(disable:4316)	// object allocated on the heap may not be aligned for this type
	#pragma warning(disable:4324)	// 'struct_name' : structure was padded due to __declspec(align())
	#pragma warning(disable:4505)	// 'function' : unreferenced local function has been removed
	#pragma warning(disable:4512)	// 'class' : assignment operator could not be generated
	#pragma warning(disable:4702)	// unreachable code
	#pragma warning(disable:4714)	// function 'function' marked as __forceinline not inlined
#endif

/*
 */
#include "UnigineLog.h"

/*
 */
#ifdef NDEBUG
	#define UNIGINE_ASSERT(EXP)	(static_cast<void>(0))
#else
	#ifdef _LINUX
		#define UNIGINE_ASSERT(EXP) { if(EXP) { } else { Unigine::Log::fatal("%s:%d: %s: Assertion: '%s'\n",__FILE__,__LINE__,__ASSERT_FUNCTION,#EXP); } }
	#elif defined(_MACOS) || defined(_IOS)
		#define UNIGINE_ASSERT(EXP) { if(EXP) { } else { Unigine::Log::fatal("%s:%d: %s: Assertion: '%s'\n",__FILE__,__LINE__,__PRETTY_FUNCTION__,#EXP); } }
	#else
		#define UNIGINE_ASSERT(EXP) { if(EXP) { } else { Unigine::Log::fatal("%s:%d: Assertion: '%s'\n",__FILE__,__LINE__,#EXP); } }
	#endif
#endif

/*
 */
#define UNIGINE_IS_ALIGNED4(VALUE) (((size_t)(VALUE) & 3) == 0)
#define UNIGINE_IS_ALIGNED8(VALUE) (((size_t)(VALUE) & 7) == 0)
#define UNIGINE_IS_ALIGNED16(VALUE) (((size_t)(VALUE) & 15) == 0)
#define UNIGINE_IS_ALIGNED128(VALUE) (((size_t)(VALUE) & 127) == 0)
#define UNIGINE_ASSERT_ALIGNED4(VALUE) UNIGINE_ASSERT(UNIGINE_IS_ALIGNED4(VALUE))
#define UNIGINE_ASSERT_ALIGNED8(VALUE) UNIGINE_ASSERT(UNIGINE_IS_ALIGNED8(VALUE))
#define UNIGINE_ASSERT_ALIGNED16(VALUE) UNIGINE_ASSERT(UNIGINE_IS_ALIGNED16(VALUE))
#define UNIGINE_ASSERT_ALIGNED128(VALUE) UNIGINE_ASSERT(UNIGINE_IS_ALIGNED128(VALUE))

/*
 */
#ifdef _WIN32
	#define UNIGINE_ALIGNED4(NAME) __declspec(align(4)) NAME
	#define UNIGINE_ALIGNED8(NAME) __declspec(align(8)) NAME
	#define UNIGINE_ALIGNED16(NAME) __declspec(align(16)) NAME
	#define UNIGINE_ALIGNED128(NAME) __declspec(align(128)) NAME
#else
	#define UNIGINE_ALIGNED4(NAME) NAME __attribute__ ((aligned(4)))
	#define UNIGINE_ALIGNED8(NAME) NAME __attribute__ ((aligned(8)))
	#define UNIGINE_ALIGNED16(NAME) NAME __attribute__ ((aligned(16)))
	#define UNIGINE_ALIGNED128(NAME) NAME __attribute__ ((aligned(128)))
#endif

/*
 */
#define UNIGINE_DECLARE_USE_MEMORY \
static UNIGINE_INLINE void *operator new(size_t size) { return Unigine::Memory::allocate(size); } \
static UNIGINE_INLINE void *operator new[](size_t size) { return Unigine::Memory::allocate(size); } \
static UNIGINE_INLINE void operator delete(void *ptr) { Unigine::Memory::deallocate(ptr); } \
static UNIGINE_INLINE void operator delete[](void *ptr) { Unigine::Memory::deallocate(ptr); } \
static UNIGINE_INLINE void operator delete(void *ptr,size_t size) { Unigine::Memory::deallocate(ptr,size); } \
static UNIGINE_INLINE void operator delete[](void *ptr,size_t size) { Unigine::Memory::deallocate(ptr,size); }

/*
 */
#include "UnigineMemory.h"
