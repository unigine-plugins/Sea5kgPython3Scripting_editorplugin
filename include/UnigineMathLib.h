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

#include "UnigineBase.h"
#include "UniginePair.h"
#include <stdint.h>

#ifndef USE_SSE
#define USE_SSE
#endif

#ifndef USE_SSE2
#define USE_SSE2
#endif

#ifdef USE_SSE
#include <emmintrin.h>
#include <xmmintrin.h>
#include <smmintrin.h>
#endif

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

// deprecated: use Consts::* instead
#define UNIGINE_PI 3.141592654f
#define UNIGINE_PI2 6.283185308f
#define UNIGINE_PI05 1.570796327f
#define UNIGINE_LOG2 0.693147181f
#define UNIGINE_LOG10 2.302585093f
#define UNIGINE_SQRT2 1.414213562f
#define UNIGINE_DEG2RAD (UNIGINE_PI / 180.0f)
#define UNIGINE_RAD2DEG (180.0f / UNIGINE_PI)
#define UNIGINE_EPSILON 1e-6f
#define UNIGINE_INFINITY 1e+9f

#ifdef USE_SSE
#define _MM_PERM2_X 0
#define _MM_PERM2_Y 1
#define _MM_PERM2_Z 2
#define _MM_PERM2_W 3
#define _MM_PERM2(X, Y, Z, W) _MM_SHUFFLE(_MM_PERM2_##W, _MM_PERM2_##Z, _MM_PERM2_##Y, _MM_PERM2_##X)
#define _MM_SWIZZLE(V, X, Y, Z, W) _mm_shuffle_ps(V, V, _MM_PERM2(X, Y, Z, W))
#ifdef USE_SSE2
#define _MM_PERM22(X, Y) _MM_SHUFFLE2(_MM_PERM2_##Y, _MM_PERM2_##X)
#define _MM_SWIZZLE2(V, X, Y) _mm_shuffle_pd(V, V, _MM_PERM22(X, Y))
#endif
#endif


namespace Unigine
{
namespace Math
{
struct half;
struct vec2;
struct vec3;
struct vec4;
struct dvec2;
struct dvec3;
struct dvec4;
struct hvec2;
struct hvec3;
struct hvec4;
struct ivec2;
struct ivec3;
struct ivec4;
struct bvec4;
struct svec4;
struct mat2;
struct mat3;
struct mat4;
struct dmat4;
struct quat;

#if defined(USE_DOUBLE) || defined(UNIGINE_DOUBLE)
	typedef double Scalar;
	typedef Unigine::Math::dvec2 Vec2;
	typedef Unigine::Math::dvec3 Vec3;
	typedef Unigine::Math::dvec4 Vec4;
	typedef Unigine::Math::dmat4 Mat4;
#else
	typedef float Scalar;
	typedef Unigine::Math::vec2 Vec2;
	typedef Unigine::Math::vec3 Vec3;
	typedef Unigine::Math::vec4 Vec4;
	typedef Unigine::Math::mat4 Mat4;
#endif

enum AXIS
{
	AXIS_X = 0,	// positive axes
	AXIS_Y,
	AXIS_Z,
	AXIS_NX,	// negative axes
	AXIS_NY,
	AXIS_NZ,
};


namespace Consts
{
constexpr float PI = 3.141592654f;
constexpr float PI2 = 6.283185308f;
constexpr float PI05 = 1.570796327f;
constexpr float LOG2 = 0.693147181f;
constexpr float LOG10 = 2.302585093f;
constexpr float SQRT2 = 1.414213562f;
constexpr float DEG2RAD = (PI / 180.0f);
constexpr float RAD2DEG = (180.0f / PI);
constexpr float EPS = 1e-6f;
constexpr float INF = 1e+9f;
constexpr float GOLDEN_RATIO = 1.618033989f;

constexpr double EPS_D = 1e-7;
constexpr double DEG2RAD_D = 0.01745329251994329577;
constexpr double RAD2DEG_D = 57.29577951308232087685;
constexpr double IPI2_D = 0.15915494309189533576;
constexpr double PI_D = 3.14159265358979323846;
constexpr double PI05_D = 1.57079632679489661923;


} // namespace Constants

//////////////////////////////////////////////////////////////////////////
// Type conversion
//////////////////////////////////////////////////////////////////////////

union IntFloat
{
	IntFloat() {}
	IntFloat(int i)
		: i(i)
	{
	}

	IntFloat(float f)
		: f(f)
	{
	}

	IntFloat(unsigned int ui)
		: ui(ui)
	{
	}

	int i;
	float f;
	unsigned int ui;
};

union LongDouble
{
	LongDouble() {}
	LongDouble(double d)
		: d(d)
	{
	}

	LongDouble(long long l)
		: l(l)
	{
	}

	LongDouble(unsigned long long ul)
		: ul(ul)
	{
	}

	int i[2];
	double d;
	long long l;
	unsigned int ui[2];
	unsigned long long ul;
};

//////////////////////////////////////////////////////////////////////////

UNIGINE_API void sincos(float a, float &s, float &c);
UNIGINE_API void sincos(double a, double &s, double &c);

// bezier curve solver
UNIGINE_API float bezier(const float *t, const float *v, float time);
UNIGINE_API double bezier(const float *t, const double *v, float time);

UNIGINE_INLINE int signMask(int v)
{
	return (v >> 31);
}

UNIGINE_INLINE float sign(float v)
{
	return IntFloat((IntFloat(v).ui & 0x80000000) | 0x3f800000).f;
}

UNIGINE_INLINE double sign(double v)
{
	return (v >= 0.0) ? 1.0 : -1.0;
}

UNIGINE_INLINE int abs(int v)
{
	return (v >= 0) ? v : -v;
}

UNIGINE_INLINE long long abs(long long v)
{
	return (v >= 0) ? v : -v;
}

UNIGINE_INLINE float abs(float v)
{
	return (v >= 0) ? v : -v;
}

UNIGINE_INLINE double abs(double v)
{
	return (v >= 0) ? v : -v;
}

UNIGINE_INLINE float round(float v)
{
	return ::roundf(v);
}

UNIGINE_INLINE double round(double v)
{
	return ::round(v);
}

UNIGINE_INLINE int roundFast(float v)
{
	// Actually this is the fastest code we could get.
	// Both SSE intrinsics and raw assembler didn't give any performance gain on supported systems.
	return static_cast<int>(v + 0.5f);
}

UNIGINE_INLINE float ceil(float v)
{
	return ::ceilf(v);
}

UNIGINE_INLINE double ceil(double v)
{
	return ::ceil(v);
}

UNIGINE_INLINE float floor(float v)
{
	return ::floorf(v);
}

UNIGINE_INLINE double floor(double v)
{
	return ::floor(v);
}

UNIGINE_INLINE float frac(float v)
{
	return v - ::floorf(v);
}

UNIGINE_INLINE double frac(double v)
{
	return v - ::floor(v);
}

UNIGINE_INLINE float fsqrt(float v)
{
#ifdef USE_SSE
	_mm_store_ss(&v, _mm_sqrt_ss(_mm_set_ss(v)));
	return v;
#else
	return ::sqrtf(v);
#endif
}

UNIGINE_INLINE double dsqrt(double v)
{
	return ::sqrt(v);
}

UNIGINE_INLINE Scalar ssqrt(Scalar v)
{
#if defined(USE_DOUBLE) || defined(UNIGINE_DOUBLE)
	return dsqrt(v);
#else
	return fsqrt(v);
#endif
}

UNIGINE_INLINE float rcp(float v)
{
	return 1.0f / v;
}

UNIGINE_INLINE double rcp(double v)
{
	return 1.0 / v;
}

UNIGINE_INLINE float rcpFast(float v)
{
#ifdef USE_SSE
	_mm_store_ss(&v, _mm_rcp_ss(_mm_set_ss(v)));
	return v;
#else
	IntFloat i = v;
	i.i = 0x7f000000 - i.i;
	return i.f * (2.0f - v * i.f);
#endif
}

UNIGINE_INLINE float rsqrt(float v)
{
	return (v < 1e-18f) ? UNIGINE_INFINITY : 1.0f / ::sqrtf(v);
}

UNIGINE_INLINE double rsqrt(double v)
{
	return (v < 1e-18) ? UNIGINE_INFINITY : 1.0 / ::sqrt(v);
}

UNIGINE_INLINE float rsqrtFast(float v)
{
#ifdef USE_SSE
	_mm_store_ss(&v, _mm_rsqrt_ss(_mm_set_ss(v)));
	return v;
#else
	IntFloat i = v;
	i.i = 0x5f3759df - (i.i >> 1);
	return i.f * (1.5f - (i.f * i.f * v * 0.5f));
#endif
}

UNIGINE_INLINE float mod(float x, float y)
{
	return ::fmodf(x, y);
}

UNIGINE_INLINE double mod(double x, double y)
{
	return ::fmod(x, y);
}

UNIGINE_INLINE float pow(float x, float y)
{
	return ::powf(x, y);
}

UNIGINE_INLINE double pow(double x, double y)
{
	return ::pow(x, y);
}

UNIGINE_INLINE float pow2(float x) { return x * x; }
UNIGINE_INLINE double pow2(double x) { return x * x; }
UNIGINE_INLINE int pow2(int x) { return x * x; }

UNIGINE_INLINE float exp(float v)
{
	return ::expf(v);
}

UNIGINE_INLINE double exp(double v)
{
	return ::exp(v);
}

UNIGINE_INLINE float exp2(float v)
{
	return ::expf(v * UNIGINE_LOG2);
}

UNIGINE_INLINE double exp2(double v)
{
	return ::exp(v * UNIGINE_LOG2);
}

UNIGINE_INLINE float log(float v)
{
	return ::logf(v);
}

UNIGINE_INLINE double log(double v)
{
	return ::log(v);
}

UNIGINE_INLINE float log2(float v)
{
	return ::logf(v) * (1.0f / UNIGINE_LOG2);
}

UNIGINE_INLINE double log2(double v)
{
	return ::log(v) * (1.0 / UNIGINE_LOG2);
}

UNIGINE_INLINE float log10(float v)
{
	return ::logf(v) * (1.0f / UNIGINE_LOG10);
}

UNIGINE_INLINE double log10(double v)
{
	return ::log(v) * (1.0 / UNIGINE_LOG10);
}

UNIGINE_INLINE float sin(float a)
{
	return ::sinf(a);
}

UNIGINE_INLINE double sin(double a)
{
	return ::sin(a);
}

UNIGINE_INLINE float cos(float a)
{
	return ::cosf(a);
}

UNIGINE_INLINE double cos(double a)
{
	return ::cos(a);
}

UNIGINE_INLINE float tan(float a)
{
	return ::tanf(a);
}

UNIGINE_INLINE double tan(double a)
{
	return ::tan(a);
}

UNIGINE_INLINE float asin(float v)
{
	return ::asinf(v);
}

UNIGINE_INLINE double asin(double v)
{
	return ::asin(v);
}

UNIGINE_INLINE float acos(float v)
{
	return ::acosf(v);
}

UNIGINE_INLINE double acos(double v)
{
	return ::acos(v);
}

UNIGINE_INLINE float atan(float v)
{
	return ::atanf(v);
}

UNIGINE_INLINE double atan(double v)
{
	return ::atan(v);
}

UNIGINE_INLINE float atan2(float y, float x)
{
	return ::atan2f(y, x);
}

UNIGINE_INLINE double atan2(double y, double x)
{
	return ::atan2(y, x);
}

UNIGINE_INLINE int select(int c, int v0, int v1)
{
	int mask = signMask(c | -c);
	return (v0 & mask) | (v1 & ~mask);
}

UNIGINE_INLINE float select(int c, float v0, float v1)
{
	int mask = signMask(c | -c);
	return IntFloat((IntFloat(v0).i & mask) | (IntFloat(v1).i & ~mask)).f;
}

UNIGINE_INLINE float select(float c, float v0, float v1)
{
	int mask = signMask(IntFloat(c).i);
	return IntFloat((IntFloat(v0).i & mask) | (IntFloat(v1).i & ~mask)).f;
}

UNIGINE_INLINE int npot(int v)
{
	int i = 1;
	while (i < v)
		i += i;
	return i;
}

UNIGINE_INLINE int ispot(int v)
{
	return (((v - 1) & v) == 0);
}

UNIGINE_INLINE float itof(int v)
{
	return static_cast<float>(v);
}

UNIGINE_INLINE int ftoi(float v)
{
	return static_cast<int>(v);
}

UNIGINE_INLINE char ftoc(float v)
{
	return static_cast<char>(v);
}

UNIGINE_INLINE double itod(int v)
{
	return static_cast<double>(v);
}

UNIGINE_INLINE int dtoi(double v)
{
	return static_cast<int>(v);
}

UNIGINE_INLINE float dtof(double v)
{
	return static_cast<float>(v);
}

UNIGINE_INLINE Scalar itos(int v)
{
	return static_cast<Scalar>(v);
}

UNIGINE_INLINE int stoi(Scalar v)
{
	return static_cast<int>(v);
}

UNIGINE_INLINE float ltof(long long v)
{
	return static_cast<float>(v);
}

UNIGINE_INLINE long long ftol(float v)
{
	return static_cast<long long>(v);
}

UNIGINE_INLINE double ltod(long long v)
{
	return static_cast<double>(v);
}

UNIGINE_INLINE long long dtol(double v)
{
	return static_cast<long long>(v);
}

UNIGINE_INLINE int udiv(int x, int y)
{
	return x / y + (x % y != 0);
}

UNIGINE_INLINE float toFloat(double value) { return static_cast<float>(value); }
UNIGINE_INLINE float toFloat(long double value) { return static_cast<float>(value); }
UNIGINE_INLINE float toFloat(char value) { return static_cast<float>(value); }
UNIGINE_INLINE float toFloat(int value) { return static_cast<float>(value); }
UNIGINE_INLINE float toFloat(long long value) { return static_cast<float>(value); }
UNIGINE_INLINE float toFloat(bool value) { return value ? 1.0f : 0.0f; }

UNIGINE_INLINE double toDouble(float value) { return static_cast<double>(value); }
UNIGINE_INLINE double toDouble(char value) { return static_cast<double>(value); }
UNIGINE_INLINE double toDouble(int value) { return static_cast<double>(value); }
UNIGINE_INLINE double toDouble(long long value) { return static_cast<double>(value); }
UNIGINE_INLINE double toDouble(bool value) { return value ? 1.0 : 0.0; }

UNIGINE_INLINE int toInt(float value) { return static_cast<int>(value); }
UNIGINE_INLINE int toInt(double value) { return static_cast<int>(value); }
UNIGINE_INLINE int toInt(char value) { return static_cast<int>(value); }
UNIGINE_INLINE int toInt(long long value) { return static_cast<int>(value); }
UNIGINE_INLINE int toInt(bool value) { return value ? 1 : 0; }

UNIGINE_INLINE char toChar(float value) { return static_cast<char>(value); }
UNIGINE_INLINE char toChar(double value) { return static_cast<char>(value); }
UNIGINE_INLINE char toChar(int value) { return static_cast<char>(value); }
UNIGINE_INLINE char toChar(long long value) { return static_cast<char>(value); }
UNIGINE_INLINE char toChar(bool value) { return value ? 1 : 0; }

UNIGINE_INLINE unsigned char toUChar(float value) { return static_cast<unsigned char>(value); }
UNIGINE_INLINE unsigned char toUChar(double value) { return static_cast<unsigned char>(value); }
UNIGINE_INLINE unsigned char toUChar(int value) { return static_cast<unsigned char>(value); }
UNIGINE_INLINE unsigned char toUChar(long long value) { return static_cast<unsigned char>(value); }
UNIGINE_INLINE unsigned char toUChar(bool value) { return value ? 1 : 0; }

UNIGINE_INLINE bool toBool(float value) { return toInt(value) != 0; }
UNIGINE_INLINE bool toBool(double value) { return toInt(value) != 0.0; }
UNIGINE_INLINE bool toBool(int value) { return value != 0; }
UNIGINE_INLINE bool toBool(char value) { return value != 0; }
UNIGINE_INLINE bool toBool(long long value) { return value != 0; }

//////////////////////////////////////////////////////////////////////////
// Scalars
//////////////////////////////////////////////////////////////////////////

UNIGINE_INLINE int compare(float v0, float v1, float epsilon = UNIGINE_EPSILON)
{
	float v = abs(v0 - v1);
	return (v < epsilon);
}

UNIGINE_INLINE float min(float v0, float v1)
{
	return (v0 < v1) ? v0 : v1;
}

UNIGINE_INLINE float max(float v0, float v1)
{
	return (v0 > v1) ? v0 : v1;
}

UNIGINE_INLINE float clamp(float v, float v0, float v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE float saturate(float v)
{
	if (v < 0.0f)
		return 0.0f;
	if (v > 1.0f)
		return 1.0f;
	return v;
}

UNIGINE_INLINE float lerp(float v0, float v1, float k)
{
	return v0 + (v1 - v0) * k;
}

UNIGINE_INLINE float inverseLerp(float v0, float v1, float v)
{
	return clamp((v - v0) / (v1 - v0), 0.0f, 1.0f);
}

UNIGINE_INLINE int compare(double v0, double v1, double epsilon = UNIGINE_EPSILON)
{
	double v = abs(v0 - v1);
	return (v < epsilon);
}

UNIGINE_INLINE double min(double v0, double v1)
{
	return (v0 < v1) ? v0 : v1;
}

UNIGINE_INLINE double max(double v0, double v1)
{
	return (v0 > v1) ? v0 : v1;
}

UNIGINE_INLINE double clamp(double v, double v0, double v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE double saturate(double v)
{
	if (v < 0.0)
		return 0.0;
	if (v > 1.0)
		return 1.0;
	return v;
}

UNIGINE_INLINE double lerp(double v0, double v1, double k)
{
	return v0 + (v1 - v0) * k;
}

UNIGINE_INLINE double inverseLerp(double v0, double v1, double v)
{
	return clamp((v - v0) / (v1 - v0), 0.0, 1.0);
}

UNIGINE_INLINE int compare(int v0, int v1)
{
	return v0 == v1;
}

UNIGINE_INLINE int min(int v0, int v1)
{
	return (v0 < v1) ? v0 : v1;
}

UNIGINE_INLINE int max(int v0, int v1)
{
	return (v0 > v1) ? v0 : v1;
}

UNIGINE_INLINE int clamp(int v, int v0, int v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE char clamp(char v, char v0, char v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE int lerp(int v0, int v1, int k)
{
	return v0 + (((v1 - v0) * k) >> 16);
}

UNIGINE_INLINE size_t min(size_t v0, size_t v1)
{
	return (v0 < v1) ? v0 : v1;
}

UNIGINE_INLINE size_t max(size_t v0, size_t v1)
{
	return (v0 > v1) ? v0 : v1;
}

UNIGINE_INLINE size_t clamp(size_t v, size_t v0, size_t v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE int compare(long long v0, long long v1)
{
	return v0 == v1;
}

UNIGINE_INLINE long long min(long long v0, long long v1)
{
	return (v0 < v1) ? v0 : v1;
}

UNIGINE_INLINE long long max(long long v0, long long v1)
{
	return (v0 > v1) ? v0 : v1;
}

UNIGINE_INLINE long long lerp(long long v0, long long v1, long long k)
{
	return v0 + (v1 - v0) * k;
}

UNIGINE_INLINE long long clamp(long long v, long long v0, long long v1)
{
	if (v < v0)
		return v0;
	if (v > v1)
		return v1;
	return v;
}

UNIGINE_INLINE float smoothstep(float x) {
	return x * x * (3.0f - 2.0f * x);
}

UNIGINE_INLINE double smoothstep(double x) {
	return x * x * (3.0 - 2.0 * x);
}

UNIGINE_INLINE float smoothstep(float edge0, float edge1, float x) {
	float t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
	return t * t * (3.0f - 2.0f * t);
}

UNIGINE_INLINE double smoothstep(double edge0, double edge1, double x) {
	double t = clamp((x - edge0) / (edge1 - edge0), 0.0, 1.0);
	return t * t * (3.0 - 2.0 * t);
}

UNIGINE_INLINE float smootherstep(float x) {
	return x * x * x * (x * (x * 6.0f - 15.0f) + 10.0f);
}

UNIGINE_INLINE double smootherstep(double x) {
	return x * x * x * (x * (x * 6.0 - 15.0) + 10.0);
}

UNIGINE_INLINE float smootherstep(float edge0, float edge1, float x) {
	float t = clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
	return t * t * t * (t * (t * 6.0f - 15.0f) + 10.0f);
}

UNIGINE_INLINE double smootherstep(double edge0, double edge1, double x) {
	double t = clamp((x - edge0) / (edge1 - edge0), 0.0, 1.0);
	return t * t * t * (t * (t * 6.0 - 15.0) + 10.0);
}


//////////////////////////////////////////////////////////////////////////
// Half float type
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API half
{
public:
	unsigned short h;

public:
	UNIGINE_INLINE half()
		: h(0)
	{
	}

	constexpr UNIGINE_INLINE half(const half &h)
		: h(h.h)
	{
	}

	constexpr explicit UNIGINE_INLINE half(int i)
		: h((unsigned short)i)
	{
	}

	explicit UNIGINE_INLINE half(float f) { setFloat(f); }
	UNIGINE_INLINE half &operator=(half v)
	{
		h = v.h;
		return *this;
	}

	UNIGINE_INLINE half &operator=(float f)
	{
		setFloat(f);
		return *this;
	}

	UNIGINE_INLINE operator float() const { return getFloat(); }
	UNIGINE_INLINE operator unsigned short() const { return h; }
	void setFloat(float f);
	float getFloat() const;
};

UNIGINE_INLINE void half::setFloat(float f)
{
	union
	{
		float f;
		unsigned int i;
	} value = {f};
	unsigned int i = value.i;
	unsigned int e = (i >> 23) & 0x00ff;
	unsigned int m = i & 0x007fffff;
	if (e <= 127 - 15)
		h = (unsigned short)(((m | 0x00800000) >> (127 - 14 - e)) >> 13);
	else
		h = (unsigned short)(i >> 13) & 0x3fff;
	h |= (unsigned short)(i >> 16) & 0xc000;
}

UNIGINE_INLINE float half::getFloat() const
{
	unsigned int i = (h << 16) & 0x80000000;
	unsigned int em = h & 0x7fff;
	if (em > 0x03ff)
		i |= (em << 13) + ((127 - 15) << 23);
	else
	{
		unsigned int m = em & 0x03ff;
		if (m != 0)
		{
			unsigned int e = (em >> 10) & 0x1f;
			while ((m & 0x0400) == 0)
			{
				m <<= 1;
				e--;
			}

			m &= 0x3ff;
			i |= ((e + (127 - 14)) << 23) | (m << 13);
		}
	}

	union
	{
		unsigned int i;
		float f;
	} value = {i};
	return value.f;
}

//////////////////////////////////////////////////////////////////////////
// vec2, vector with 2 float components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED8(struct)
UNIGINE_API vec2
{
	constexpr UNIGINE_INLINE vec2()
		: x(0.0f)
		, y(0.0f)
	{
	}

	constexpr UNIGINE_INLINE vec2(float x, float y)
		: x(x)
		, y(y)
	{
	}

	constexpr explicit UNIGINE_INLINE vec2(float v)
		: x(v)
		, y(v)
	{
	}

	explicit UNIGINE_INLINE vec2(const vec3 &v);
	explicit UNIGINE_INLINE vec2(const vec4 &v);

	constexpr explicit UNIGINE_INLINE vec2(const float *v)
		: x(v[0])
		, y(v[1])
	{
	}

	explicit UNIGINE_INLINE vec2(const dvec2 &v);
	explicit UNIGINE_INLINE vec2(const hvec2 &v);
	explicit UNIGINE_INLINE vec2(const ivec2 &v);

	UNIGINE_INLINE vec2(const vec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

	UNIGINE_INLINE vec2 &operator=(const vec2 &val)
	{
		x = val.x;
		y = val.y;
		return *this;
	}

	UNIGINE_INLINE vec2 operator-() const
	{
		return vec2(-x, -y);
	}

	UNIGINE_INLINE vec2 &operator*=(float val)
	{
		x *= val;
		y *= val;
		return *this;
	}

	UNIGINE_INLINE vec2 &operator*=(const vec2 &val)
	{
		x *= val.x;
		y *= val.y;
		return *this;
	}

	UNIGINE_INLINE vec2 &operator/=(float val)
	{
		float iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		return *this;
	}

	UNIGINE_INLINE vec2 &operator/=(const vec2 &val)
	{
		x /= val.x;
		y /= val.y;
		return *this;
	}

	UNIGINE_INLINE vec2 &operator/=(const ivec2 &val);

	UNIGINE_INLINE vec2 &operator+=(const vec2 &val)
	{
		x += val.x;
		y += val.y;
		return *this;
	}

	UNIGINE_INLINE vec2 &operator-=(const vec2 &val)
	{
		x -= val.x;
		y -= val.y;
		return *this;
	}

	UNIGINE_INLINE operator float *() { return v; }
	UNIGINE_INLINE operator const float *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE float &operator[](int i)
	{
		assert((unsigned int)i < 2 && "vec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		assert((unsigned int)i < 2 && "vec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(float val)
	{
		x = val;
		y = val;
	}

	UNIGINE_INLINE void set(float x_, float y_)
	{
		x = x_;
		y = y_;
	}

	UNIGINE_INLINE void set(const vec2 &val)
	{
		x = val.x;
		y = val.y;
	}

	UNIGINE_INLINE void set(const float *val)
	{
		x = val[0];
		y = val[1];
	}

	UNIGINE_INLINE void get(float *val) const
	{
		val[0] = x;
		val[1] = y;
	}

	UNIGINE_INLINE float *get() { return v; }
	UNIGINE_INLINE const float *get() const { return v; }
	UNIGINE_INLINE float length2() const
	{
		return x * x + y * y;
	}

	UNIGINE_INLINE float length() const
	{
		return (float)sqrt(x * x + y * y);
	}

	UNIGINE_INLINE vec2 &normalize()
	{
		float ilength = Math::rsqrt(x * x + y * y);
		x *= ilength;
		y *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec2 &normalizeValid()
	{
		float length = x * x + y * y;
		if(length == 0.0f)
			return *this;
		float ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		return *this;
	}
	
	UNIGINE_INLINE vec2 frac() const
	{
		return vec2(Math::frac(x), Math::frac(y));
	}

	UNIGINE_INLINE vec2 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		return *this;
	}

	UNIGINE_INLINE vec2 &normalizeFast()
	{
		float ilength = Math::rsqrtFast(x * x + y * y);
		x *= ilength;
		y *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec2 &normalizeValidFast()
	{
		float length = x * x + y * y;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrtFast(length);
		x *= ilength;
		y *= ilength;
		return *this;
	}

	UNIGINE_INLINE float mul() const
	{
		return x * y;
	}

	UNIGINE_INLINE float max() const
	{
		return Math::max(x, y);
	}

	UNIGINE_INLINE float min() const
	{
		return Math::min(x, y);
	}

	UNIGINE_INLINE ivec2 floor() const;
	UNIGINE_INLINE ivec2 ceil() const;

public:
	union
	{
		struct
		{
			float x, y;
		};
		float v[2];
#ifdef USE_SSE
		__m64 vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const vec2 ZERO;
	static const vec2 ONE;
	static const vec2 EPS;
	static const vec2 INF;

}; // end class vec2

constexpr vec2 vec2_zero(0.0f);
constexpr vec2 vec2_one(1.0f);
constexpr vec2 vec2_eps(Consts::EPS);
constexpr vec2 vec2_inf(Consts::INF);

UNIGINE_INLINE int operator==(const vec2 &v0, const vec2 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE int operator!=(const vec2 &v0, const vec2 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE vec2 operator*(const vec2 &v0, float v1)
{
	return vec2(v0.x * v1, v0.y * v1);
}

UNIGINE_INLINE vec2 operator*(const vec2 &v0, const vec2 &v1)
{
	return vec2(v0.x * v1.x, v0.y * v1.y);
}

UNIGINE_INLINE vec2 operator/(const vec2 &v0, float v1)
{
	float iv1 = Math::rcp(v1);
	return vec2(v0.x * iv1, v0.y * iv1);
}

UNIGINE_INLINE vec2 operator/(const vec2 &v0, const vec2 &v1)
{
	return vec2(v0.x / v1.x, v0.y / v1.y);
}

UNIGINE_INLINE vec2 operator+(const vec2 &v0, const vec2 &v1)
{
	return vec2(v0.x + v1.x, v0.y + v1.y);
}

UNIGINE_INLINE vec2 operator-(const vec2 &v0, const vec2 &v1)
{
	return vec2(v0.x - v1.x, v0.y - v1.y);
}

UNIGINE_INLINE vec2 operator-(const vec2 &v0, float v1)
{
	return vec2(v0.x - v1, v0.y - v1);
}

UNIGINE_INLINE vec2 operator-(const vec2 &v0, int v1)
{
	return vec2(v0.x - v1, v0.y - v1);
}

UNIGINE_INLINE vec2 operator-(const vec2 &v0, double v1)
{
	return vec2(v0.x - (float)v1, v0.y - (float)v1);
}

UNIGINE_INLINE vec2 operator+(const vec2 &v0, float v1)
{
	return vec2(v0.x + v1, v0.y + v1);
}

UNIGINE_INLINE vec2 operator+(const vec2 &v0, int v1)
{
	return vec2(v0.x + v1, v0.y + v1);
}

UNIGINE_INLINE vec2 operator+(const vec2 &v0, double v1)
{
	return vec2(v0.x + (float)v1, v0.y + (float)v1);
}

UNIGINE_INLINE int compare(const vec2 &v0, const vec2 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE int compare(const vec2 &v0, const vec2 &v1, float epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon));
}

UNIGINE_INLINE float dot(const vec2 &v0, const vec2 &v1)
{
	return v0.x * v1.x + v0.y * v1.y;
}

UNIGINE_INLINE vec2 &mul(vec2 &ret, const vec2 &v0, float v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	return ret;
}

UNIGINE_INLINE vec2 &mul(vec2 &ret, const vec2 &v0, const vec2 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	return ret;
}

UNIGINE_INLINE vec2 &mad(vec2 &ret, const vec2 &v0, float v1, const vec2 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	return ret;
}

UNIGINE_INLINE vec2 &mad(vec2 &ret, const vec2 &v0, const vec2 &v1, const vec2 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	return ret;
}

UNIGINE_INLINE vec2 &add(vec2 &ret, const vec2 &v0, const vec2 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	return ret;
}

UNIGINE_INLINE vec2 &sub(vec2 &ret, const vec2 &v0, const vec2 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	return ret;
}

UNIGINE_INLINE vec2 &lerp(vec2 &ret, const vec2 &v0, const vec2 &v1, float k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	return ret;
}

UNIGINE_INLINE float length(const vec2 &v)
{
	return v.length();
}

UNIGINE_INLINE float length2(const vec2 &v)
{
	return v.length2();
}

UNIGINE_INLINE vec2 normalize(const vec2 &v)
{
	vec2 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE vec2 normalizeValid(const vec2 &v)
{
	vec2 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE float cross(const vec2 &v0, const vec2 &v1)
{
	return v0.x * v1.y - v0.y * v1.x;
}

UNIGINE_INLINE vec2 round(const vec2 &v)
{
	return { round(v.x), round(v.y) };
}

UNIGINE_INLINE vec2 floor(const vec2 &v)
{
	return {floor(v.x), floor(v.y)};
}

UNIGINE_INLINE vec2 ceil(const vec2 &v)
{
	return {ceil(v.x), ceil(v.y)};
}

UNIGINE_INLINE vec2 abs(const vec2 &v)
{
	return { abs(v.x), abs(v.y) };
}

UNIGINE_API vec2 min(const vec2 &v0, const vec2 &v1);
UNIGINE_API vec2 max(const vec2 &v0, const vec2 &v1);
UNIGINE_API vec2 clamp(const vec2 &v, const vec2 &v0, const vec2 &v1);
UNIGINE_API vec2 saturate(const vec2 &v);
UNIGINE_API vec2 lerp(const vec2 &v0, const vec2 &v1, float k);
UNIGINE_API vec2 inverseLerp(const vec2 &v0, const vec2 &v1, const vec2 &v);

//////////////////////////////////////////////////////////////////////////
// vec3, vector with 3 float components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API vec3
{
	constexpr UNIGINE_INLINE vec3()
		: x(0.0f)
		, y(0.0f)
		, z(0.0f)
		, w(0.0f)
	{
	}

	UNIGINE_INLINE vec3(const vec2 &v, float z)
		: x(v.x)
		, y(v.y)
		, z(z)
		, w(0.0f)
	{
	}

	constexpr UNIGINE_INLINE vec3(float x, float y, float z)
		: x(x)
		, y(y)
		, z(z)
		, w(0.0f)
	{
	}
	constexpr UNIGINE_INLINE vec3(float x, float y, float z, float w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	constexpr explicit UNIGINE_INLINE vec3(float v)
		: x(v)
		, y(v)
		, z(v)
		, w(0.0f)
	{
	}

	explicit UNIGINE_INLINE vec3(const vec2 &v)
		: x(v.x)
		, y(v.y)
		, z(0.0f)
		, w(0.0f)
	{
	}

	explicit UNIGINE_INLINE vec3(const vec4 &v);

	constexpr explicit UNIGINE_INLINE vec3(const float *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(0.0f)
	{
	}

	explicit UNIGINE_INLINE vec3(const dvec3 &v);
	explicit UNIGINE_INLINE vec3(const hvec3 &v);
	explicit UNIGINE_INLINE vec3(const ivec3 &v);

#ifdef USE_SSE
	UNIGINE_INLINE vec3(const vec3 &v)
	{
		sse(v.sse());
	}

	UNIGINE_INLINE vec3(const __m128 &v)
	{
		sse(v);
	}
#else
	UNIGINE_INLINE vec3(const vec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0.0f)
	{
	}
#endif

#ifdef USE_SSE
	UNIGINE_INLINE operator __m128() const
	{
		return sse();
	}

	UNIGINE_INLINE vec3 &operator=(const __m128 &val)
	{
		sse(val);
		return *this;
	}
#endif

	UNIGINE_INLINE vec3 &operator=(const vec3 &val)
	{
#ifdef USE_SSE
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE vec3 operator-() const
	{
		return vec3(-x, -y, -z);
	}

	UNIGINE_INLINE vec3 &operator*=(float val)
	{
		x *= val;
		y *= val;
		z *= val;
		return *this;
	}

	UNIGINE_INLINE vec3 &operator*=(const vec3 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		return *this;
	}

	UNIGINE_INLINE vec3 &operator/=(float val)
	{
		float iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		z *= iv;
		return *this;
	}

	UNIGINE_INLINE vec3 &operator/=(const vec3 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		return *this;
	}

	UNIGINE_INLINE vec3 &operator+=(const vec3 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		return *this;
	}

	UNIGINE_INLINE vec3 &operator-=(const vec3 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		return *this;
	}

	UNIGINE_INLINE operator float *() { return v; }
	UNIGINE_INLINE operator const float *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE float &operator[](int i)
	{
		UNIGINE_ASSERT((unsigned int)i < 3 && "vec3::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		UNIGINE_ASSERT((unsigned int)i < 3 && "vec3::operator[](): bad index");
		return v[i];
	}

	void set(const vec4 &v);

	UNIGINE_INLINE void set(float val)
	{
		x = val;
		y = val;
		z = val;
	}

	UNIGINE_INLINE void set(float x_, float y_, float z_)
	{
		x = x_;
		y = y_;
		z = z_;
	}

	UNIGINE_INLINE void set(const vec2 &val, float z_ = 0.0f)
	{
		x = val.x;
		y = val.y;
		z = z_;
	}

	UNIGINE_INLINE void set(const vec3 &val)
	{
#ifdef USE_SSE
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const float *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
	}

	UNIGINE_INLINE void get(float *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
	}

	UNIGINE_INLINE float *get() { return v; }
	UNIGINE_INLINE const float *get() const { return v; }
	UNIGINE_INLINE float length2() const
	{
		return x * x + y * y + z * z;
	}

	UNIGINE_INLINE float length() const
	{
		return (float)sqrt(x * x + y * y + z * z);
	}

	UNIGINE_INLINE vec3 &normalize()
	{
		float ilength = Math::rsqrt(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec3 &normalizeValid()
	{
		float length = x * x + y * y + z * z;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec3 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		return *this;
	}
	
	UNIGINE_INLINE vec3 &normalizeFast()
	{
		float ilength = Math::rsqrtFast(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec3 &normalizeValidFast()
	{
		float length = x * x + y * y + z * z;
		if(length == 0.0f)
			return *this;
		float ilength = Math::rsqrtFast(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE float maxXY() const
	{
		return Math::max(x, y);
	}
	UNIGINE_INLINE float max() const
	{
		return Math::max(maxXY(), z);
	}

	UNIGINE_INLINE vec3 sign() const
	{
		return vec3(Math::sign(x), Math::sign(y), Math::sign(z));
	}
	UNIGINE_INLINE float minXY()
	{
		return Math::min(x, y);
	}
	UNIGINE_INLINE float min()
	{
		return Math::min(minXY(), z);
	}

#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse() const
	{
		return _mm_loadu_ps((float *)&vec);
	}

	UNIGINE_INLINE void sse(const __m128 &val)
	{
		_mm_storeu_ps((float *)&vec, val);
	}
#endif

public:
	union
	{
		struct
		{
			float x, y, z, w;
		};
		vec2 xy;
		float v[4];
#ifdef USE_SSE
		__m128 vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const vec3 ZERO;
	static const vec3 ONE;
	static const vec3 EPS;
	static const vec3 INF;

	static const vec3 UP;
	static const vec3 DOWN;
	static const vec3 FORWARD;
	static const vec3 BACK;
	static const vec3 RIGHT;
	static const vec3 LEFT;

}; // end class vec3

constexpr vec3 vec3_zero(0.0f);
constexpr vec3 vec3_one(1.0f);
constexpr vec3 vec3_half(0.5f);
constexpr vec3 vec3_eps(Consts::EPS);
constexpr vec3 vec3_inf(Consts::INF);
constexpr vec3 vec3_up(0.0f, 0.0f, 1.0f);
constexpr vec3 vec3_down(0.0f, 0.0f, -1.0f);
constexpr vec3 vec3_forward(0.0f, 1.0f, 0.0f);
constexpr vec3 vec3_back(0.0f, -1.0f, 0.0f);
constexpr vec3 vec3_right(1.0f, 0.0f, 0.0f);
constexpr vec3 vec3_left(-1.0f, 0.0f, 0.0f);

UNIGINE_INLINE vec2::vec2(const vec3 &v)
	: x(v.x)
	, y(v.y)
{
}

UNIGINE_INLINE int operator==(const vec3 &v0, const vec3 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE int operator!=(const vec3 &v0, const vec3 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE vec3 operator*(const vec3 &v0, float v1)
{
	return vec3(v0.x * v1, v0.y * v1, v0.z * v1);
}

UNIGINE_INLINE vec3 operator*(const vec3 &v0, const vec3 &v1)
{
	return vec3(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z);
}

UNIGINE_INLINE vec3 operator/(const vec3 &v0, float v1)
{
	float iv1 = Math::rcp(v1);
	return vec3(v0.x * iv1, v0.y * iv1, v0.z * iv1);
}

UNIGINE_INLINE vec3 operator/(const vec3 &v0, const vec3 &v1)
{
	return vec3(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z);
}

UNIGINE_INLINE vec3 operator+(const vec3 &v0, const vec3 &v1)
{
	return vec3(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
}

UNIGINE_INLINE vec3 operator+(const vec3 &v0, const float v1)
{
	return vec3(v0.x + v1, v0.y + v1, v0.z + v1);
}

UNIGINE_INLINE vec3 operator-(const vec3 &v0, const vec3 &v1)
{
	return vec3(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z);
}

UNIGINE_INLINE int compare(const vec3 &v0, const vec3 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE int compare(const vec3 &v0, const vec3 &v1, float epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon) && compare(v0.z, v1.z, epsilon));
}

UNIGINE_INLINE float dot(const vec2 &v0, const vec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v1.z;
}

UNIGINE_INLINE float dot(const vec3 &v0, const vec2 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z;
}

UNIGINE_INLINE float dot(const vec3 &v0, const vec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE vec3 &mul(vec3 &ret, const vec3 &v0, float v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	ret.z = v0.z * v1;
	return ret;
}

UNIGINE_INLINE vec3 &mul(vec3 &ret, const vec3 &v0, const vec3 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	ret.z = v0.z * v1.z;
	return ret;
}

UNIGINE_INLINE vec3 &mad(vec3 &ret, const vec3 &v0, float v1, const vec3 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	ret.z = v0.z * v1 + v2.z;
	return ret;
}

UNIGINE_INLINE vec3 &mad(vec3 &ret, const vec3 &v0, const vec3 &v1, const vec3 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	ret.z = v0.z * v1.z + v2.z;
	return ret;
}

UNIGINE_INLINE vec3 &add(vec3 &ret, const vec3 &v0, const vec3 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	ret.z = v0.z + v1.z;
	return ret;
}

UNIGINE_INLINE vec3 &sub(vec3 &ret, const vec3 &v0, const vec3 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	ret.z = v0.z - v1.z;
	return ret;
}

UNIGINE_INLINE vec3 &lerp(vec3 &ret, const vec3 &v0, const vec3 &v1, float k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	return ret;
}

UNIGINE_INLINE vec3 &cross(vec3 &ret, const vec3 &v0, const vec3 &v1)
{
	ret.x = v0.y * v1.z - v0.z * v1.y;
	ret.y = v0.z * v1.x - v0.x * v1.z;
	ret.z = v0.x * v1.y - v0.y * v1.x;
	return ret;
}

UNIGINE_INLINE vec3 &reflect(vec3 &ret, const vec3 &v0, const vec3 &v1)
{
	float k = dot(v0, v1) * 2.0f;
	ret.x = v0.x - v1.x * k;
	ret.y = v0.y - v1.y * k;
	ret.z = v0.z - v1.z * k;
	return ret;
}

UNIGINE_INLINE float length(const vec3 &v)
{
	return v.length();
}

UNIGINE_INLINE float length2(const vec3 &v)
{
	return v.length2();
}

UNIGINE_INLINE vec3 frac(const vec3 &v)
{
	return { frac(v.x), frac(v.y), frac(v.z) };
}

UNIGINE_INLINE float length2nan(const vec3 &v)
{
	// in gcc isnan is inside std namespace but in Microsoft compiler it's not
	using namespace std;
	float t = v.length2();
	return isnan(t) ? 0.0f : t;
}

UNIGINE_INLINE vec3 normalize(const vec3 &v)
{
	vec3 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE vec3 normalizeValid(const vec3 &v)
{
	vec3 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE vec3 cross(const vec3 &v0, const vec3 &v1)
{
	vec3 ret;
	return cross(ret, v0, v1);
}

UNIGINE_INLINE vec3 reflect(const vec3 &v0, const vec3 &v1)
{
	vec3 ret;
	return reflect(ret, v0, v1);
}

UNIGINE_INLINE bool areCollinear(const vec3 &v0, const vec3 &v1)
{
	return length(cross(v0, v1)) < 1e-6f;
}

UNIGINE_INLINE vec3 round(const vec3 &v)
{
	return {round(v.x), round(v.y), round(v.z)};
}

UNIGINE_INLINE vec3 floor(const vec3 &v)
{
	return {floor(v.x), floor(v.y), floor(v.z)};
}

UNIGINE_INLINE vec3 ceil(const vec3 &v)
{
	return {ceil(v.x), ceil(v.y), ceil(v.z)};
}


UNIGINE_INLINE vec3 abs(const vec3 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z) };
}

UNIGINE_API vec3 min(const vec3 &v0, const vec3 &v1);
UNIGINE_API vec3 max(const vec3 &v0, const vec3 &v1);
UNIGINE_API vec3 clamp(const vec3 &v, const vec3 &v0, const vec3 &v1);
UNIGINE_API vec3 saturate(const vec3 &v);
UNIGINE_API vec3 lerp(const vec3 &v0, const vec3 &v1, float k);
UNIGINE_API vec3 inverseLerp(const vec3 &v0, const vec3 &v1, const vec3 &v);

//////////////////////////////////////////////////////////////////////////
// vec4, vector with 4 float components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API vec4
{
	constexpr UNIGINE_INLINE vec4()
		: x(0.0f)
		, y(0.0f)
		, z(0.0f)
		, w(0.0f)
	{
	}

	UNIGINE_INLINE vec4(const vec3 &v, float w)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(w)
	{
	}

	UNIGINE_INLINE vec4(const vec2 &v, float z, float w)
		: x(v.x)
		, y(v.y)
		, z(z)
		, w(w)
	{
	}

	constexpr UNIGINE_INLINE vec4(float x, float y, float z = 0.0f, float w = 0.0f)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	constexpr explicit UNIGINE_INLINE vec4(float v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	explicit UNIGINE_INLINE vec4(const vec2 &v)
		: x(v.x)
		, y(v.y)
		, z(0.0f)
		, w(1.0f)
	{
	}

	explicit UNIGINE_INLINE vec4(const vec2 &v0, const vec2 &v1)
		: x(v0.x)
		, y(v0.y)
		, z(v1.x)
		, w(v1.y)
	{
	}

	explicit UNIGINE_INLINE vec4(const vec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(1.0f)
	{
	}

	constexpr explicit UNIGINE_INLINE vec4(const float *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(v[3])
	{
	}

	explicit UNIGINE_INLINE vec4(const dvec4 &v);
	explicit UNIGINE_INLINE vec4(const dvec2 &v0, const dvec2 &v1);
	explicit UNIGINE_INLINE vec4(const hvec4 &v);
	explicit UNIGINE_INLINE vec4(const ivec4 &v);
	explicit UNIGINE_INLINE vec4(const bvec4 &v);
	explicit UNIGINE_INLINE vec4(const svec4 &v);
	explicit UNIGINE_INLINE vec4(const quat &q);

#ifdef USE_SSE
	UNIGINE_INLINE vec4(const vec4 &v)
	{
		sse(v.sse());
	}

	UNIGINE_INLINE vec4(const __m128 &v)
	{
		sse(v);
	}
#else
	UNIGINE_INLINE vec4(const vec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}
#endif

#ifdef USE_SSE
	UNIGINE_INLINE operator __m128() const
	{
		return sse();
	}

	UNIGINE_INLINE vec4 &operator=(const __m128 &val)
	{
		sse(val);
		return *this;
	}
#endif

	UNIGINE_INLINE vec4 &operator=(const vec4 &val)
	{
#ifdef USE_SSE
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE vec4 operator-() const
	{
		return vec4(-x, -y, -z, -w);
	}

	UNIGINE_INLINE vec4 &operator*=(float val)
	{
		x *= val;
		y *= val;
		z *= val;
		w *= val;
		return *this;
	}

	UNIGINE_INLINE vec4 &operator*=(const vec4 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		w *= val.w;
		return *this;
	}

	UNIGINE_INLINE vec4 &operator/=(float val)
	{
		float iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		z *= iv;
		w *= iv;
		return *this;
	}

	UNIGINE_INLINE vec4 &operator/=(const vec4 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		w /= val.w;
		return *this;
	}

	UNIGINE_INLINE vec4 &operator+=(const vec4 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		w += val.w;
		return *this;
	}

	UNIGINE_INLINE vec4 &operator-=(const vec4 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		w -= val.w;
		return *this;
	}

	UNIGINE_INLINE operator float *() { return v; }
	UNIGINE_INLINE operator const float *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE float &operator[](int i)
	{
		UNIGINE_ASSERT((unsigned int)i < 4 && "vec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		UNIGINE_ASSERT((unsigned int)i < 4 && "vec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(float val)
	{
		x = val;
		y = val;
		z = val;
		w = val;
	}

	UNIGINE_INLINE void set(float x_, float y_, float z_, float w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const vec2 &val, float z_ = 0.0f, float w_ = 1.0f)
	{
		x = val.x;
		y = val.y;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const vec3 &val, float w_ = 1.0f)
	{
		x = val.x;
		y = val.y;
		z = val.z;
		w = w_;
	}

	UNIGINE_INLINE void set(const vec4 &val)
	{
#ifdef USE_SSE
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const float *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
		w = val[3];
	}

	UNIGINE_INLINE void get(float *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
		val[3] = w;
	}

	void set(const quat &q);

	UNIGINE_INLINE float *get() { return v; }
	UNIGINE_INLINE const float *get() const { return v; }
	UNIGINE_INLINE float length2() const
	{
		return x * x + y * y + z * z + w * w;
	}

	UNIGINE_INLINE float length() const
	{
		return (float)sqrt(x * x + y * y + z * z + w * w);
	}

	UNIGINE_INLINE vec4 &normalize()
	{
		float ilength = Math::rsqrt(x * x + y * y + z * z + w * w);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeValid()
	{
		float length = x * x + y * y + z * z + w * w;
		if(length == 0.0f)
			return *this;
		float ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeFast()
	{
		float ilength = Math::rsqrtFast(x * x + y * y + z * z + w * w);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeValidFast()
	{
		float length = x * x + y * y + z * z + w * w;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrtFast(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalize3()
	{
		float ilength = Math::rsqrt(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeValid3()
	{
		float length = x * x + y * y + z * z;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeFast3()
	{
		float ilength = Math::rsqrtFast(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &normalizeValidFast3()
	{
		float length = x * x + y * y + z * z;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrtFast(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE vec4 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		w = Math::abs(w);
		return *this;
	}

	UNIGINE_INLINE float maxXY()
	{
		return Math::max(x, y);
	}
	UNIGINE_INLINE float maxXYZ()
	{
		return Math::max(maxXY(), z);
	}
	UNIGINE_INLINE float max()
	{
		return Math::max(maxXYZ(), w);
	}

	static vec4 parseColor(const char *str);

#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse() const
	{
		return _mm_loadu_ps((float *)&vec);
	}

	UNIGINE_INLINE void sse(const __m128 &val)
	{
		_mm_storeu_ps((float *)&vec, val);
	}
#endif

public:
	union
	{
		struct
		{
			float x, y, z, w;
		}; 

		vec3 xyz;
		vec2 xy;

		struct
		{
			vec2 xy;
			vec2 zw;
		} swizzle;

		float v[4];
#ifdef USE_SSE
		__m128 vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};
	
	// deprecated, use new style constants below instead
	static const vec4 ZERO;
	static const vec4 ONE;
	static const vec4 EPS;
	static const vec4 INF;
	static const vec4 WHITE;
	static const vec4 BLACK;
	static const vec4 RED;
	static const vec4 GREEN;
	static const vec4 BLUE;

}; // end class vec4

constexpr vec4 vec4_zero(0.0f);
constexpr vec4 vec4_one(1.0f);
constexpr vec4 vec4_eps(Consts::EPS);
constexpr vec4 vec4_inf(Consts::INF);
constexpr vec4 vec4_white(1.0f);
constexpr vec4 vec4_black(0.0f, 0.0f, 0.0f, 1.0f);
constexpr vec4 vec4_red(1.0f, 0.0f, 0.0f, 1.0f);
constexpr vec4 vec4_green(0.0f, 1.0f, 0.0f, 1.0f);
constexpr vec4 vec4_blue(0.0f, 0.0f, 1.0f, 1.0f);

UNIGINE_INLINE vec2::vec2(const vec4 &v)
	: x(v.x)
	, y(v.y)
{
}

UNIGINE_INLINE vec3::vec3(const vec4 &v)
	: x(v.x)
	, y(v.y)
	, z(v.z)
	, w(0.0f)
{
}

UNIGINE_INLINE void vec3::set(const vec4 &val)
{
	x = val.x;
	y = val.y;
	z = val.z;
	w = 0.0;
}

UNIGINE_INLINE int operator==(const vec4 &v0, const vec4 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE int operator!=(const vec4 &v0, const vec4 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE vec4 operator*(const vec4 &v0, float v1)
{
	return vec4(v0.x * v1, v0.y * v1, v0.z * v1, v0.w * v1);
}

UNIGINE_INLINE vec4 operator*(const vec4 &v0, const vec4 &v1)
{
	return vec4(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z, v0.w * v1.w);
}

UNIGINE_INLINE vec4 operator/(const vec4 &v0, float v1)
{
	float iv1 = Math::rcp(v1);
	return vec4(v0.x * iv1, v0.y * iv1, v0.z * iv1, v0.w * iv1);
}

UNIGINE_INLINE vec4 operator/(const vec4 &v0, const vec4 &v1)
{
	return vec4(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z, v0.w / v1.w);
}

UNIGINE_INLINE vec4 operator+(const vec4 &v0, const vec4 &v1)
{
	return vec4(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z, v0.w + v1.w);
}

UNIGINE_INLINE vec4 operator-(const vec4 &v0, const vec4 &v1)
{
	return vec4(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z, v0.w - v1.w);
}

UNIGINE_INLINE int compare(const vec4 &v0, const vec4 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE int compare(const vec4 &v0, const vec4 &v1, float epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon) && compare(v0.z, v1.z, epsilon) && compare(v0.w, v1.w, epsilon));
}

UNIGINE_INLINE float dot(const vec3 &v0, const vec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v1.w;
}

UNIGINE_INLINE float dot(const vec4 &v0, const vec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w;
}

UNIGINE_INLINE float dot(const vec4 &v0, const vec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w * v1.w;
}

UNIGINE_INLINE float dot3(const vec3 &v0, const vec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE float dot3(const vec4 &v0, const vec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE float dot3(const vec4 &v0, const vec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE vec4 &mul(vec4 &ret, const vec4 &v0, float v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	ret.z = v0.z * v1;
	ret.w = v0.w * v1;
	return ret;
}

UNIGINE_INLINE vec4 &mul(vec4 &ret, const vec4 &v0, const vec4 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	ret.z = v0.z * v1.z;
	ret.w = v0.w * v1.w;
	return ret;
}

UNIGINE_INLINE vec4 &mad(vec4 &ret, const vec4 &v0, float v1, const vec4 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	ret.z = v0.z * v1 + v2.z;
	ret.w = v0.w * v1 + v2.w;
	return ret;
}

UNIGINE_INLINE vec4 &mad(vec4 &ret, const vec4 &v0, const vec4 &v1, const vec4 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	ret.z = v0.z * v1.z + v2.z;
	ret.w = v0.w * v1.w + v2.w;
	return ret;
}

UNIGINE_INLINE vec4 &add(vec4 &ret, const vec4 &v0, const vec4 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	ret.z = v0.z + v1.z;
	ret.w = v0.w + v1.w;
	return ret;
}

UNIGINE_INLINE vec4 &sub(vec4 &ret, const vec4 &v0, const vec4 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	ret.z = v0.z - v1.z;
	ret.w = v0.w - v1.w;
	return ret;
}

UNIGINE_INLINE vec4 &lerp(vec4 &ret, const vec4 &v0, const vec4 &v1, float k)
{
#ifdef USE_SSE
	__m128 vec0 = v0.sse();
	__m128 vec1 = v1.sse();
	ret.sse(_mm_add_ps(vec0, _mm_mul_ps(_mm_sub_ps(vec1, vec0), _mm_set1_ps(k))));
#else
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	ret.w = lerp(v0.w, v1.w, k);
#endif
	return ret;
}

UNIGINE_INLINE vec4 &lerp3(vec4 &ret, const vec4 &v0, const vec4 &v1, const vec4 &v2, float k)
{
	if (k < 0.5f) {
		ret.x = lerp(v0.x, v1.x, k * 2.0f);
		ret.y = lerp(v0.y, v1.y, k * 2.0f);
		ret.z = lerp(v0.z, v1.z, k * 2.0f);
		ret.w = lerp(v0.w, v1.w, k * 2.0f);
	} else {
		ret.x = lerp(v1.x, v2.x, k * 2.0f - 1.0f);
		ret.y = lerp(v1.y, v2.y, k * 2.0f - 1.0f);
		ret.z = lerp(v1.z, v2.z, k * 2.0f - 1.0f);
		ret.w = lerp(v1.w, v2.w, k * 2.0f - 1.0f);
	}

	return ret;
}

UNIGINE_INLINE vec4 &cross(vec4 &ret, const vec3 &v0, const vec3 &v1)
{
	ret.x = v0.y * v1.z - v0.z * v1.y;
	ret.y = v0.z * v1.x - v0.x * v1.z;
	ret.z = v0.x * v1.y - v0.y * v1.x;
	return ret;
}

UNIGINE_INLINE float length(const vec4 &v)
{
	return v.length();
}

UNIGINE_INLINE float length2(const vec4 &v)
{
	return v.length2();
}

UNIGINE_INLINE vec4 normalize(const vec4 &v)
{
	vec4 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE vec4 normalizeValid(const vec4 &v)
{
	vec4 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE vec4 normalize3(const vec4 &v)
{
	vec4 ret = v;
	return ret.normalize3();
}

UNIGINE_INLINE vec4 normalizeValid3(const vec4 &v)
{
	vec4 ret = v;
	return ret.normalizeValid3();
}

UNIGINE_INLINE vec4 round(const vec4 &v)
{
	return {round(v.x), round(v.y), round(v.z), round(v.w)};
}

UNIGINE_INLINE vec4 floor(const vec4 &v)
{
	return {floor(v.x), floor(v.y), floor(v.z), floor(v.w)};
}

UNIGINE_INLINE vec4 ceil(const vec4 &v)
{
	return {ceil(v.x), ceil(v.y), ceil(v.z), ceil(v.w)};
}

UNIGINE_INLINE vec4 abs(const vec4 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z), abs(v.w) };
}

UNIGINE_INLINE vec4 frac(const vec4 &v)
{
	return { frac(v.x), frac(v.y), frac(v.z), frac(v.w) };
}

UNIGINE_API vec4 min(const vec4 &v0, const vec4 &v1);
UNIGINE_API vec4 max(const vec4 &v0, const vec4 &v1);
UNIGINE_API vec4 clamp(const vec4 &v, const vec4 &v0, const vec4 &v1);
UNIGINE_API vec4 saturate(const vec4 &v);
UNIGINE_API vec4 lerp(const vec4 &v0, const vec4 &v1, float k);
UNIGINE_API vec4 lerp3(const vec4 &v0, const vec4 &v1, const vec4 &v2, float k);
UNIGINE_API vec4 inverseLerp(const vec4 &v0, const vec4 &v1, const vec4 &v);

//////////////////////////////////////////////////////////////////////////
// dvec2, vector with 2 double components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API dvec2
{
	constexpr UNIGINE_INLINE dvec2()
		: x(0.0)
		, y(0.0)
	{
	}

	constexpr UNIGINE_INLINE dvec2(double x, double y)
		: x(x)
		, y(y)
	{
	}

	constexpr explicit UNIGINE_INLINE dvec2(double v)
		: x(v)
		, y(v)
	{
	}

	explicit UNIGINE_INLINE dvec2(const dvec3 &v);
	explicit UNIGINE_INLINE dvec2(const dvec4 &v);

	constexpr explicit UNIGINE_INLINE dvec2(const double *v)
		: x(v[0])
		, y(v[1])
	{
	}

	constexpr explicit UNIGINE_INLINE dvec2(const vec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

	explicit UNIGINE_INLINE dvec2(const hvec2 &v);
	explicit UNIGINE_INLINE dvec2(const ivec2 &v);

#ifdef USE_SSE2
	UNIGINE_INLINE dvec2(const dvec2 &v)
	{
		sse(v.sse());
	}

	UNIGINE_INLINE dvec2(const __m128d &v)
	{
		sse(v);
	}
#else
	UNIGINE_INLINE dvec2(const dvec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

#endif

#ifdef USE_SSE2
	UNIGINE_INLINE operator __m128d() const
	{
		return sse();
	}

	UNIGINE_INLINE dvec2 &operator=(const __m128d &val)
	{
		sse(val);
		return *this;
	}
#endif

	UNIGINE_INLINE dvec2 &operator=(const dvec2 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
#endif
		return *this;
	}

	UNIGINE_INLINE dvec2 operator-() const
	{
		return dvec2(-x, -y);
	}

	UNIGINE_INLINE dvec2 &operator*=(double val)
	{
		x *= val;
		y *= val;
		return *this;
	}

	UNIGINE_INLINE dvec2 &operator*=(const dvec2 &val)
	{
		x *= val.x;
		y *= val.y;
		return *this;
	}

	UNIGINE_INLINE dvec2 &operator/=(double val)
	{
		double iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		return *this;
	}

	UNIGINE_INLINE dvec2 &operator/=(const dvec2 &val)
	{
		x /= val.x;
		y /= val.y;
		return *this;
	}

	UNIGINE_INLINE dvec2 &operator+=(const dvec2 &val)
	{
		x += val.x;
		y += val.y;
		return *this;
	}

	UNIGINE_INLINE dvec2 &operator-=(const dvec2 &val)
	{
		x -= val.x;
		y -= val.y;
		return *this;
	}

	UNIGINE_INLINE operator double *() { return v; }
	UNIGINE_INLINE operator const double *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE double &operator[](int i)
	{
		assert((unsigned int)i < 2 && "dvec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE double operator[](int i) const
	{
		assert((unsigned int)i < 2 && "dvec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(double val)
	{
		x = val;
		y = val;
	}

	UNIGINE_INLINE void set(double x_, double y_)
	{
		x = x_;
		y = y_;
	}

	UNIGINE_INLINE void set(const dvec2 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
#endif
	}

	UNIGINE_INLINE void set(const double *val)
	{
		x = val[0];
		y = val[1];
	}

	UNIGINE_INLINE void get(double *val) const
	{
		val[0] = x;
		val[1] = y;
	}

	UNIGINE_INLINE double *get() { return v; }
	UNIGINE_INLINE const double *get() const { return v; }
	UNIGINE_INLINE double length() const
	{
		return sqrt(x * x + y * y);
	}

	UNIGINE_INLINE double length2() const
	{
		return x * x + y * y;
	}

	UNIGINE_INLINE double mul() const
	{
		return x * y;
	}

	UNIGINE_INLINE double max() const
	{
		return Math::max(x, y);
	}

	UNIGINE_INLINE double min() const
	{
		return Math::min(x, y);
	}

	UNIGINE_INLINE dvec2 &normalize()
	{
		double ilength = Math::rsqrt(x * x + y * y);
		x *= ilength;
		y *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec2 &normalizeValid()
	{
		double length = x * x + y * y;
		if (length == 0.0)
			return *this;
		double ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec2 frac() const
	{
		return dvec2(Math::frac(x), Math::frac(y));
	}

	UNIGINE_INLINE dvec2 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		return *this;
	}

	UNIGINE_INLINE double max()
	{
		return Math::max(x, y);
	}

	UNIGINE_INLINE ivec2 floor() const;
	UNIGINE_INLINE ivec2 ceil() const;

#ifdef USE_SSE2
	UNIGINE_INLINE __m128d sse() const
	{
		__m128 xx = _mm_loadu_ps((float *)&vec);
		return *(__m128d *)&xx;
	}

	UNIGINE_INLINE void sse(const __m128d &val)
	{
		_mm_storeu_ps((float *)&vec, *(__m128 *)&val);
	}
#endif

	union
	{
		struct
		{
			double x, y;
		};
		double v[2];
#ifdef USE_SSE2
		__m128d vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const dvec2 ZERO;
	static const dvec2 ONE;
	static const dvec2 EPS;
	static const dvec2 INF;

};

constexpr dvec2 dvec2_zero(0.0);
constexpr dvec2 dvec2_one(1.0);
constexpr dvec2 dvec2_eps(Consts::EPS);
constexpr dvec2 dvec2_inf(Consts::INF);

UNIGINE_INLINE vec2::vec2(const dvec2 &v)
	: x((float)v.x)
	, y((float)v.y)
{
}

UNIGINE_INLINE int operator==(const dvec2 &v0, const dvec2 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE int operator!=(const dvec2 &v0, const dvec2 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE dvec2 operator*(const dvec2 &v0, double v1)
{
	return dvec2(v0.x * v1, v0.y * v1);
}

UNIGINE_INLINE dvec2 operator*(const dvec2 &v0, int v1)
{
	return dvec2(v0.x * v1, v0.y * v1);
}

UNIGINE_INLINE dvec2 operator*(const dvec2 &v0, const dvec2 &v1)
{
	return dvec2(v0.x * v1.x, v0.y * v1.y);
}

UNIGINE_INLINE dvec2 operator/(const dvec2 &v0, double v1)
{
	double iv1 = Math::rcp(v1);
	return dvec2(v0.x * iv1, v0.y * iv1);
}

UNIGINE_INLINE dvec2 operator/(const dvec2 &v0, const dvec2 &v1)
{
	return dvec2(v0.x / v1.x, v0.y / v1.y);
}

UNIGINE_INLINE dvec2 operator+(const dvec2 &v0, const dvec2 &v1)
{
	return dvec2(v0.x + v1.x, v0.y + v1.y);
}

UNIGINE_INLINE dvec2 operator+(const dvec2 &v0, int v1)
{
	return dvec2(v0.x + v1, v0.y + v1);
}

UNIGINE_INLINE dvec2 operator+(const dvec2 &v0, double v1)
{
	return dvec2(v0.x + v1, v0.y + v1);
}
UNIGINE_INLINE dvec2 operator-(const dvec2 &v0, const dvec2 &v1)
{
	return dvec2(v0.x - v1.x, v0.y - v1.y);
}

UNIGINE_INLINE dvec2 operator-(const dvec2 &v0, int v1)
{
	return dvec2(v0.x - v1, v0.y - v1);
}

UNIGINE_INLINE dvec2 operator-(const dvec2 &v0, double v1)
{
	return dvec2(v0.x - v1, v0.y - v1);
}

UNIGINE_INLINE int compare(const dvec2 &v0, const dvec2 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y));
}

UNIGINE_INLINE int compare(const dvec2 &v0, const dvec2 &v1, double epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon));
}

UNIGINE_INLINE double dot(const dvec2 &v0, const dvec2 &v1)
{
	return v0.x * v1.x + v0.y * v1.y;
}

UNIGINE_INLINE dvec2 &mul(dvec2 &ret, const dvec2 &v0, double v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	return ret;
}

UNIGINE_INLINE dvec2 &mul(dvec2 &ret, const dvec2 &v0, const dvec2 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	return ret;
}

UNIGINE_INLINE dvec2 &mad(dvec2 &ret, const dvec2 &v0, double v1, const dvec2 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	return ret;
}

UNIGINE_INLINE dvec2 &mad(dvec2 &ret, const dvec2 &v0, const dvec2 &v1, const dvec2 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	return ret;
}

UNIGINE_INLINE dvec2 &add(dvec2 &ret, const dvec2 &v0, const dvec2 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	return ret;
}

UNIGINE_INLINE dvec2 &sub(dvec2 &ret, const dvec2 &v0, const dvec2 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	return ret;
}

UNIGINE_INLINE dvec2 &lerp(dvec2 &ret, const dvec2 &v0, const dvec2 &v1, double k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	return ret;
}

UNIGINE_INLINE double length(const dvec2 &v)
{
	return v.length();
}

UNIGINE_INLINE double length2(const dvec2 &v)
{
	return v.length2();
}

UNIGINE_INLINE dvec2 normalize(const dvec2 &v)
{
	dvec2 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE dvec2 normalizeValid(const dvec2 &v)
{
	dvec2 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE dvec2 round(const dvec2 &v)
{
	return {round(v.x), round(v.y)};
}

UNIGINE_INLINE dvec2 floor(const dvec2 &v)
{
	return {floor(v.x), floor(v.y)};
}

UNIGINE_INLINE dvec2 ceil(const dvec2 &v)
{
	return {ceil(v.x), ceil(v.y)};
}

UNIGINE_INLINE dvec2 abs(const dvec2 &v)
{
	return { abs(v.x), abs(v.y) };
}

UNIGINE_API dvec2 min(const dvec2 &v0, const dvec2 &v1);
UNIGINE_API dvec2 max(const dvec2 &v0, const dvec2 &v1);
UNIGINE_API dvec2 clamp(const dvec2 &v, const dvec2 &v0, const dvec2 &v1);
UNIGINE_API dvec2 saturate(const dvec2 &v);
UNIGINE_API dvec2 lerp(const dvec2 &v0, const dvec2 &v1, double k);
UNIGINE_API dvec2 inverseLerp(const dvec2 &v0, const dvec2 &v2, const dvec2 &v);

//////////////////////////////////////////////////////////////////////////
// dvec3, vector with 3 double components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API dvec3
{
	UNIGINE_INLINE dvec3()
		: x(0.0)
		, y(0.0)
		, z(0.0)
		, w(0.0)
	{
	}

	UNIGINE_INLINE dvec3(const dvec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0.0)
	{
	}

	UNIGINE_INLINE dvec3(const dvec2 &v, double z)
		: x(v.x)
		, y(v.y)
		, z(z)
		, w(0.0)
	{
	}

	constexpr UNIGINE_INLINE dvec3(double x, double y, double z)
		: x(x)
		, y(y)
		, z(z)
		, w(0.0)
	{
	}

	constexpr explicit UNIGINE_INLINE dvec3(double v)
		: x(v)
		, y(v)
		, z(v)
		, w(0.0)
	{
	}
	constexpr explicit UNIGINE_INLINE dvec3(float v)
		: x(v)
		, y(v)
		, z(v)
		, w(0.0)
	{}

	explicit UNIGINE_INLINE dvec3(const dvec2 &v)
		: x(v.x)
		, y(v.y)
		, z(0.0)
		, w(0.0)
	{
	}

	explicit UNIGINE_INLINE dvec3(const dvec4 &v);

	constexpr explicit UNIGINE_INLINE dvec3(const double *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(0.0)
	{
	}

	explicit UNIGINE_INLINE dvec3(const vec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0.0)
	{
	}

	explicit UNIGINE_INLINE dvec3(const hvec3 &v);
	explicit UNIGINE_INLINE dvec3(const ivec3 &v);

	UNIGINE_INLINE dvec3 &operator=(const dvec3 &val)
	{
#ifdef USE_SSE2
		sse(val.sse0(),val.sse1());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE dvec3 operator-() const
	{
		return dvec3(-x, -y, -z);
	}

	UNIGINE_INLINE dvec3 &operator*=(double val)
	{
		x *= val;
		y *= val;
		z *= val;
		return *this;
	}

	UNIGINE_INLINE dvec3 &operator*=(const dvec3 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		return *this;
	}

	UNIGINE_INLINE dvec3 &operator/=(double val)
	{
		double iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		z *= iv;
		return *this;
	}

	UNIGINE_INLINE dvec3 &operator/=(const dvec3 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		return *this;
	}

	UNIGINE_INLINE dvec3 &operator+=(const dvec3 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		return *this;
	}

	UNIGINE_INLINE dvec3 &operator-=(const dvec3 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		return *this;
	}

	UNIGINE_INLINE operator double *() { return v; }
	UNIGINE_INLINE operator const double *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE double &operator[](int i)
	{
		assert((unsigned int)i < 3 && "dvec3::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE double operator[](int i) const
	{
		assert((unsigned int)i < 3 && "dvec3::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(double val)
	{
		x = val;
		y = val;
		z = val;
	}

	UNIGINE_INLINE void set(double x_, double y_, double z_)
	{
		x = x_;
		y = y_;
		z = z_;
	}

	UNIGINE_INLINE void set(const dvec2 &val, double z_ = 0.0)
	{
		x = val.x;
		y = val.y;
		z = z_;
	}

	UNIGINE_INLINE void set(const dvec3 &val)
	{
#ifdef USE_SSE2
		sse(val.sse0(), val.sse1());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const double *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
	}

	UNIGINE_INLINE void get(double *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
	}

	UNIGINE_INLINE double *get() { return v; }
	UNIGINE_INLINE const double *get() const { return v; }
	UNIGINE_INLINE double length() const
	{
		return sqrt(x * x + y * y + z * z);
	}

	UNIGINE_INLINE double length2() const
	{
		return x * x + y * y + z * z;
	}

	UNIGINE_INLINE dvec3 &normalize()
	{
		double ilength = Math::rsqrt(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec3 &normalizeValid()
	{
		double length = x * x + y * y + z * z;
		if(length == 0.0)
			return *this;
		double ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec3 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		return *this;
	}

	UNIGINE_INLINE double max() const
	{
		return Math::max(Math::max(x, y), z);
	}

#ifdef USE_SSE2
	UNIGINE_INLINE __m128d sse0() const
	{
		__m128 xx = _mm_loadu_ps((float *)&sse_data.vec0);
		return *(__m128d *)&xx;
	}

	UNIGINE_INLINE __m128d sse1() const
	{
		__m128 xx = _mm_loadu_ps((float *)&sse_data.vec1);
		return *(__m128d *)&xx;
	}

	UNIGINE_INLINE void sse0(const __m128d &val)
	{
		_mm_storeu_ps((float *)&sse_data.vec0, *(__m128 *)&val);
	}

	UNIGINE_INLINE void sse1(const __m128d &val)
	{
		_mm_storeu_ps((float *)&sse_data.vec1, *(__m128 *)&val);
	}

	UNIGINE_INLINE void sse(const __m128d &v0, const __m128d &v1)
	{
		sse0(v0);
		sse1(v1);
	}
#endif

	union
	{
		struct
		{
			double x, y, z, w;
		};
		double v[4];
		dvec2 xy;

	#ifdef USE_SSE2
		struct
		{
			__m128d vec0; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d vec1; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
		} sse_data;
	#endif
	};

	// deprecated, use new style constants below instead
	static const dvec3 ZERO;
	static const dvec3 ONE;
	static const dvec3 EPS;
	static const dvec3 INF;

	static const dvec3 UP;
	static const dvec3 DOWN;
	static const dvec3 FORWARD;
	static const dvec3 BACK;
	static const dvec3 RIGHT;
	static const dvec3 LEFT;
};

constexpr dvec3 dvec3_zero(0.0);
constexpr dvec3 dvec3_one(1.0);
constexpr dvec3 dvec3_eps(Consts::EPS);
constexpr dvec3 dvec3_inf(Consts::INF);
constexpr dvec3 dvec3_up(0.0f, 0.0f, 1.0f);
constexpr dvec3 dvec3_down(0.0f, 0.0f, -1.0f);
constexpr dvec3 dvec3_forward(0.0f, 1.0f, 0.0f);
constexpr dvec3 dvec3_back(0.0f, -1.0f, 0.0f);
constexpr dvec3 dvec3_right(1.0f, 0.0f, 0.0f);
constexpr dvec3 dvec3_left(-1.0f, 0.0f, 0.0f);

UNIGINE_INLINE dvec2::dvec2(const dvec3 &v)
	: x(v.x)
	, y(v.y)
{
}

UNIGINE_INLINE vec3::vec3(const dvec3 &v)
	: x((float)v.x)
	, y((float)v.y)
	, z((float)v.z)
	, w(0.0f)
{
}

UNIGINE_INLINE int operator==(const dvec3 &v0, const dvec3 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE int operator!=(const dvec3 &v0, const dvec3 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE dvec3 operator*(const dvec3 &v0, double v1)
{
	return dvec3(v0.x * v1, v0.y * v1, v0.z * v1);
}

UNIGINE_INLINE dvec3 operator*(const dvec3 &v0, const dvec3 &v1)
{
	return dvec3(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z);
}

UNIGINE_INLINE dvec3 operator/(const dvec3 &v0, double v1)
{
	double iv1 = Math::rcp(v1);
	return dvec3(v0.x * iv1, v0.y * iv1, v0.z * iv1);
}

UNIGINE_INLINE dvec3 operator/(const dvec3 &v0, const dvec3 &v1)
{
	return dvec3(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z);
}

UNIGINE_INLINE dvec3 operator+(const dvec3 &v0, const dvec3 &v1)
{
	return dvec3(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
}

UNIGINE_INLINE dvec3 operator-(const dvec3 &v0, const dvec3 &v1)
{
	return dvec3(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z);
}

UNIGINE_INLINE int compare(const dvec3 &v0, const dvec3 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z));
}

UNIGINE_INLINE int compare(const dvec3 &v0, const dvec3 &v1, double epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon) && compare(v0.z, v1.z, epsilon));
}

UNIGINE_INLINE double dot(const dvec2 &v0, const dvec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v1.z;
}

UNIGINE_INLINE double dot(const dvec3 &v0, const dvec2 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z;
}

UNIGINE_INLINE double dot(const dvec3 &v0, const dvec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE dvec3 &mul(dvec3 &ret, const dvec3 &v0, double v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	ret.z = v0.z * v1;
	return ret;
}

UNIGINE_INLINE dvec3 &mul(dvec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	ret.z = v0.z * v1.z;
	return ret;
}

UNIGINE_INLINE dvec3 &mad(dvec3 &ret, const dvec3 &v0, double v1, const dvec3 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	ret.z = v0.z * v1 + v2.z;
	return ret;
}

UNIGINE_INLINE dvec3 &mad(dvec3 &ret, const dvec3 &v0, const dvec3 &v1, const dvec3 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	ret.z = v0.z * v1.z + v2.z;
	return ret;
}

UNIGINE_INLINE vec3 &add(vec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = (float)(v0.x + v1.x);
	ret.y = (float)(v0.y + v1.y);
	ret.z = (float)(v0.z + v1.z);
	return ret;
}

UNIGINE_INLINE dvec3 &add(dvec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	ret.z = v0.z + v1.z;
	return ret;
}

UNIGINE_INLINE vec3 &sub(vec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = (float)(v0.x - v1.x);
	ret.y = (float)(v0.y - v1.y);
	ret.z = (float)(v0.z - v1.z);
	return ret;
}

UNIGINE_INLINE dvec3 &sub(dvec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	ret.z = v0.z - v1.z;
	return ret;
}

UNIGINE_INLINE dvec3 &lerp(dvec3 &ret, const dvec3 &v0, const dvec3 &v1, double k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	return ret;
}

UNIGINE_INLINE dvec3 &cross(dvec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = v0.y * v1.z - v0.z * v1.y;
	ret.y = v0.z * v1.x - v0.x * v1.z;
	ret.z = v0.x * v1.y - v0.y * v1.x;
	return ret;
}

UNIGINE_INLINE dvec3 &reflect(dvec3 &ret, const dvec3 &v0, const dvec3 &v1)
{
	double k = 2.0 * (v0.x * v1.x + v0.y * v1.y + v0.z * v1.z);
	ret.x = v0.x - v1.x * k;
	ret.y = v0.y - v1.y * k;
	ret.z = v0.z - v1.z * k;
	return ret;
}

UNIGINE_INLINE double length(const dvec3 &v)
{
	return v.length();
}

UNIGINE_INLINE double length2(const dvec3 &v)
{
	return v.length2();
}

UNIGINE_INLINE dvec3 normalize(const dvec3 &v)
{
	dvec3 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE dvec3 normalizeValid(const dvec3 &v)
{
	dvec3 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE dvec3 cross(const dvec3 &v0, const dvec3 &v1)
{
	dvec3 ret;
	return cross(ret, v0, v1);
}

UNIGINE_INLINE dvec3 reflect(const dvec3 &v0, const dvec3 &v1)
{
	dvec3 ret;
	return reflect(ret, v0, v1);
}

UNIGINE_INLINE bool areCollinear(const dvec3 &v0, const dvec3 &v1)
{
	return length(cross(v0, v1)) < 1e-6f;
}

UNIGINE_INLINE dvec3 round(const dvec3 &v)
{
	return {round(v.x), round(v.y), round(v.z),};
}

UNIGINE_INLINE dvec3 floor(const dvec3 &v)
{
	return {floor(v.x), floor(v.y), floor(v.z)};
}

UNIGINE_INLINE dvec3 ceil(const dvec3 &v)
{
	return {ceil(v.x), ceil(v.y), ceil(v.z)};
}

UNIGINE_INLINE dvec3 abs(const dvec3 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z) };
}

UNIGINE_API dvec3 min(const dvec3 &v0, const dvec3 &v1);
UNIGINE_API dvec3 max(const dvec3 &v0, const dvec3 &v1);
UNIGINE_API dvec3 clamp(const dvec3 &v, const dvec3 &v0, const dvec3 &v1);
UNIGINE_API dvec3 saturate(const dvec3 &v);
UNIGINE_API dvec3 lerp(const dvec3 &v0, const dvec3 &v1, double k);
UNIGINE_API dvec3 inverseLerp(const dvec3 &v0, const dvec3 &v1, const dvec3 &v);

//////////////////////////////////////////////////////////////////////////
// dvec4, vector with f 4 double components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API dvec4
{
	constexpr UNIGINE_INLINE dvec4()
		: x(0.0)
		, y(0.0)
		, z(0.0)
		, w(0.0)
	{
	}

	UNIGINE_INLINE dvec4(const dvec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	UNIGINE_INLINE dvec4(const dvec3 &v, double w)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(w)
	{
	}

	UNIGINE_INLINE dvec4(const dvec2 &v, double z, double w)
		: x(v.x)
		, y(v.y)
		, z(z)
		, w(w)
	{
	}

	UNIGINE_INLINE dvec4(const dvec2 &v0, const dvec2 &v1)
		: x(v0.x)
		, y(v0.y)
		, z(v1.x)
		, w(v1.y)
	{}

	constexpr UNIGINE_INLINE dvec4(double x, double y, double z, double w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	constexpr explicit UNIGINE_INLINE dvec4(double v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	explicit UNIGINE_INLINE dvec4(const dvec2 &v)
		: x(v.x)
		, y(v.y)
		, z(0.0)
		, w(1.0)
	{
	}

	explicit UNIGINE_INLINE dvec4(const dvec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(1.0)
	{
	}

	constexpr explicit UNIGINE_INLINE dvec4(const double *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(v[3])
	{
	}

	explicit UNIGINE_INLINE dvec4(const vec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	explicit UNIGINE_INLINE dvec4(const hvec4 &v);
	explicit UNIGINE_INLINE dvec4(const ivec4 &v);
	explicit UNIGINE_INLINE dvec4(const bvec4 &v);
	explicit UNIGINE_INLINE dvec4(const svec4 &v);

	UNIGINE_INLINE dvec4 &operator=(const dvec4 &val)
	{
#ifdef USE_SSE2
		sse(val.sse0(), val.sse1());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE dvec4 operator-() const
	{
		return dvec4(-x, -y, -z, -w);
	}

	UNIGINE_INLINE dvec4 &operator*=(double val)
	{
		x *= val;
		y *= val;
		z *= val;
		w *= val;
		return *this;
	}

	UNIGINE_INLINE dvec4 &operator*=(const dvec4 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		w *= val.w;
		return *this;
	}

	UNIGINE_INLINE dvec4 &operator/=(double val)
	{
		double iv = Math::rcp(val);
		x *= iv;
		y *= iv;
		z *= iv;
		w *= iv;
		return *this;
	}

	UNIGINE_INLINE dvec4 &operator/=(const dvec4 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		w /= val.w;
		return *this;
	}

	UNIGINE_INLINE dvec4 &operator+=(const dvec4 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		w += val.w;
		return *this;
	}

	UNIGINE_INLINE dvec4 &operator-=(const dvec4 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		w -= val.w;
		return *this;
	}

	UNIGINE_INLINE operator double *() { return v; }
	UNIGINE_INLINE operator const double *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE double &operator[](int i)
	{
		assert((unsigned int)i < 4 && "dvec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE double operator[](int i) const
	{
		assert((unsigned int)i < 4 && "dvec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(double val)
	{
		x = val;
		y = val;
		z = val;
		w = val;
	}

	UNIGINE_INLINE void set(double x_, double y_, double z_, double w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const dvec2 &val, double z_ = 0.0, double w_ = 1.0)
	{
		x = val.x;
		y = val.y;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const dvec3 &val, double w_ = 1.0)
	{
		x = val.x;
		y = val.y;
		z = val.z;
		w = w_;
	}

	UNIGINE_INLINE void set(const dvec4 &val)
	{
#ifdef USE_SSE2
		sse(val.sse0(), val.sse1());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const double *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
		w = val[3];
	}

	UNIGINE_INLINE void get(double *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
		val[3] = w;
	}

	UNIGINE_INLINE double *get() { return v; }
	UNIGINE_INLINE const double *get() const { return v; }
	UNIGINE_INLINE double length() const
	{
		return sqrt(x * x + y * y + z * z + w * w);
	}

	UNIGINE_INLINE double length2() const
	{
		return x * x + y * y + z * z + w * w;
	}

	UNIGINE_INLINE dvec4 &normalize()
	{
		double ilength = Math::rsqrt(x * x + y * y + z * z + w * w);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec4 &normalizeValid()
	{
		double length = x * x + y * y + z * z + w * w;
		if(length)
			return *this;
		double ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec4 &normalize3()
	{
		double ilength = Math::rsqrt(x * x + y * y + z * z);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec4 &normalizeValid3()
	{
		double length = x * x + y * y + z * z;
		if (length)
			return *this;
		double ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		return *this;
	}

	UNIGINE_INLINE dvec4 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		w = Math::abs(w);
		return *this;
	}

#ifdef USE_SSE2
	UNIGINE_INLINE __m128d sse0() const
	{
		__m128 xx = _mm_loadu_ps((float *)&(sse_data.vec0));
		return *(__m128d *)&xx;
	}

	UNIGINE_INLINE __m128d sse1() const
	{
		__m128 xx = _mm_loadu_ps((float *)&(sse_data.vec1));
		return *(__m128d *)&xx;
	}

	UNIGINE_INLINE void sse0(const __m128d &val)
	{
		_mm_storeu_ps((float *)&(sse_data.vec0), *(__m128 *)&val);
	}

	UNIGINE_INLINE void sse1(const __m128d &val)
	{
		_mm_storeu_ps((float *)&(sse_data.vec1), *(__m128 *)&val);
	}

	UNIGINE_INLINE void sse(const __m128d &v0, const __m128d &v1)
	{
		sse0(v0);
		sse1(v1);
	}
#endif

	union
	{
		struct
		{
			double x, y, z, w;
		};
		double v[4];

		dvec3 xyz;
		dvec2 xy;

		struct
		{
			dvec2 xy;
			dvec2 zw;
		} swizzle;

	#ifdef USE_SSE2
		// msvc bug: storing in the union breaks constexpr compilation
		struct
		{
			__m128d vec0; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d vec1; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
		} sse_data;
	#endif

	};

	// deprecated, use new style constants below instead
	static const dvec4 ZERO;
	static const dvec4 ONE;
	static const dvec4 EPS;
	static const dvec4 INF;
};

constexpr dvec4 dvec4_zero(0.0);
constexpr dvec4 dvec4_one(1.0);
constexpr dvec4 dvec4_eps(Consts::EPS);
constexpr dvec4 dvec4_inf(Consts::INF);

UNIGINE_INLINE dvec2::dvec2(const dvec4 &v)
	: x(v.x)
	, y(v.y)
{
}

UNIGINE_INLINE dvec3::dvec3(const dvec4 &v)
	: x(v.x)
	, y(v.y)
	, z(v.z)
	, w(0.0)
{
}

UNIGINE_INLINE vec4::vec4(const dvec4 &v)
	: x((float)v.x)
	, y((float)v.y)
	, z((float)v.z)
	, w((float)v.w)
{
}

UNIGINE_INLINE vec4::vec4(const dvec2 &v0, const dvec2 &v1)
	: x((float)v0.x)
	, y((float)v0.y)
	, z((float)v1.x)
	, w((float)v1.y)
{}

UNIGINE_INLINE int operator==(const dvec4 &v0, const dvec4 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE int operator!=(const dvec4 &v0, const dvec4 &v1)
{
	return !(compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE dvec4 operator*(const dvec4 &v0, double v1)
{
	return dvec4(v0.x * v1, v0.y * v1, v0.z * v1, v0.w * v1);
}

UNIGINE_INLINE dvec4 operator*(const dvec4 &v0, const dvec4 &v1)
{
	return dvec4(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z, v0.w * v1.w);
}

UNIGINE_INLINE dvec4 operator/(const dvec4 &v0, double v1)
{
	double iv1 = Math::rcp(v1);
	return dvec4(v0.x * iv1, v0.y * iv1, v0.z * iv1, v0.w * iv1);
}

UNIGINE_INLINE dvec4 operator/(const dvec4 &v0, const dvec4 &v1)
{
	return dvec4(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z, v0.w / v1.w);
}

UNIGINE_INLINE dvec4 operator+(const dvec4 &v0, const dvec4 &v1)
{
	return dvec4(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z, v0.w + v1.w);
}

UNIGINE_INLINE dvec4 operator-(const dvec4 &v0, const dvec4 &v1)
{
	return dvec4(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z, v0.w - v1.w);
}

UNIGINE_INLINE int compare(const dvec4 &v0, const dvec4 &v1)
{
	return (compare(v0.x, v1.x) && compare(v0.y, v1.y) && compare(v0.z, v1.z) && compare(v0.w, v1.w));
}

UNIGINE_INLINE int compare(const dvec4 &v0, const dvec4 &v1, double epsilon)
{
	return (compare(v0.x, v1.x, epsilon) && compare(v0.y, v1.y, epsilon) && compare(v0.z, v1.z, epsilon) && compare(v0.w, v1.w, epsilon));
}

UNIGINE_INLINE double dot(const dvec3 &v0, const dvec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v1.w;
}

UNIGINE_INLINE double dot(const dvec4 &v0, const dvec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w;
}

UNIGINE_INLINE double dot(const dvec4 &v0, const dvec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w * v1.w;
}

UNIGINE_INLINE double dot3(const dvec3 &v0, const dvec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE double dot3(const dvec4 &v0, const dvec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE double dot3(const dvec4 &v0, const dvec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE dvec4 &mul(dvec4 &ret, const dvec4 &v0, double v1)
{
	ret.x = v0.x * v1;
	ret.y = v0.y * v1;
	ret.z = v0.z * v1;
	ret.w = v0.w * v1;
	return ret;
}

UNIGINE_INLINE dvec4 &mul(dvec4 &ret, const dvec4 &v0, const dvec4 &v1)
{
	ret.x = v0.x * v1.x;
	ret.y = v0.y * v1.y;
	ret.z = v0.z * v1.z;
	ret.w = v0.w * v1.w;
	return ret;
}

UNIGINE_INLINE dvec4 &mad(dvec4 &ret, const dvec4 &v0, double v1, const dvec4 &v2)
{
	ret.x = v0.x * v1 + v2.x;
	ret.y = v0.y * v1 + v2.y;
	ret.z = v0.z * v1 + v2.z;
	ret.w = v0.w * v1 + v2.w;
	return ret;
}

UNIGINE_INLINE dvec4 &mad(dvec4 &ret, const dvec4 &v0, const dvec4 &v1, const dvec4 &v2)
{
	ret.x = v0.x * v1.x + v2.x;
	ret.y = v0.y * v1.y + v2.y;
	ret.z = v0.z * v1.z + v2.z;
	ret.w = v0.w * v1.w + v2.w;
	return ret;
}

UNIGINE_INLINE dvec4 &add(dvec4 &ret, const dvec4 &v0, const dvec4 &v1)
{
	ret.x = v0.x + v1.x;
	ret.y = v0.y + v1.y;
	ret.z = v0.z + v1.z;
	ret.w = v0.w + v1.w;
	return ret;
}

UNIGINE_INLINE dvec4 &sub(dvec4 &ret, const dvec4 &v0, const dvec4 &v1)
{
	ret.x = v0.x - v1.x;
	ret.y = v0.y - v1.y;
	ret.z = v0.z - v1.z;
	ret.w = v0.w - v1.w;
	return ret;
}

UNIGINE_INLINE dvec4 &lerp(dvec4 &ret, const dvec4 &v0, const dvec4 &v1, double k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	ret.w = lerp(v0.w, v1.w, k);
	return ret;
}

UNIGINE_INLINE dvec4 &cross(dvec4 &ret, const dvec3 &v0, const dvec3 &v1)
{
	ret.x = v0.y * v1.z - v0.z * v1.y;
	ret.y = v0.z * v1.x - v0.x * v1.z;
	ret.z = v0.x * v1.y - v0.y * v1.x;
	return ret;
}

UNIGINE_INLINE double length(const dvec4 &v)
{
	return v.length();
}

UNIGINE_INLINE double length2(const dvec4 &v)
{
	return v.length2();
}

UNIGINE_INLINE dvec4 normalize(const dvec4 &v)
{
	dvec4 ret = v;
	return ret.normalize();
}

UNIGINE_INLINE dvec4 normalizeValid(const dvec4 &v)
{
	dvec4 ret = v;
	return ret.normalizeValid();
}

UNIGINE_INLINE dvec4 normalize3(const dvec4 &v)
{
	dvec4 ret = v;
	return ret.normalize3();
}

UNIGINE_INLINE dvec4 normalizeValid3(const dvec4 &v)
{
	dvec4 ret = v;
	return ret.normalizeValid3();
}

UNIGINE_INLINE dvec4 round(const dvec4 &v)
{
	return {round(v.x), round(v.y), round(v.z), round(v.w)};
}

UNIGINE_INLINE dvec4 floor(const dvec4 &v)
{
	return {floor(v.x), floor(v.y), floor(v.z), floor(v.w)};
}

UNIGINE_INLINE dvec4 ceil(const dvec4 &v)
{
	return {ceil(v.x), ceil(v.y), ceil(v.z), ceil(v.w)};
}

UNIGINE_INLINE dvec4 abs(const dvec4 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z), abs(v.w) };
}

UNIGINE_API dvec4 min(const dvec4 &v0, const dvec4 &v1);
UNIGINE_API dvec4 max(const dvec4 &v0, const dvec4 &v1);
UNIGINE_API dvec4 clamp(const dvec4 &v, const dvec4 &v0, const dvec4 &v1);
UNIGINE_API dvec4 saturate(const dvec4 &v);
UNIGINE_API dvec4 lerp(const dvec4 &v0, const dvec4 &v1, double k);
UNIGINE_API dvec4 inverseLerp(const dvec4 &v0, const dvec4 &v1, const dvec4 &v);

//////////////////////////////////////////////////////////////////////////
// hvec2, vector with 2 half components.
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API hvec2
{
	constexpr UNIGINE_INLINE hvec2()
		: x(0)
		, y(0)
	{
	}

	UNIGINE_INLINE hvec2(const hvec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

	constexpr UNIGINE_INLINE hvec2(half x, half y)
		: x(x)
		, y(y)
	{
	}

	constexpr explicit UNIGINE_INLINE hvec2(half v)
		: x(v)
		, y(v)
	{
	}

	explicit UNIGINE_INLINE hvec2(float v)
		: x(v)
		, y(v)
	{
	}

	explicit UNIGINE_INLINE hvec2(const vec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

	explicit UNIGINE_INLINE hvec2(const dvec2 &v)
		: x((float)v.x)
		, y((float)v.y)
	{
	}

	UNIGINE_INLINE hvec2 &operator=(const hvec2 &v)
	{
		x = v.x;
		y = v.y;
		return *this;
	}

	UNIGINE_INLINE operator half *() { return &x; }
	UNIGINE_INLINE operator const half *() const { return &x; }
	UNIGINE_INLINE operator void *() { return &x; }
	UNIGINE_INLINE operator const void *() const { return &x; }
	UNIGINE_INLINE half &operator[](int i)
	{
		assert((unsigned int)i < 2 && "hvec2::operator[](): bad index");
		return (&x)[i];
	}

	UNIGINE_INLINE half operator[](int i) const
	{
		assert((unsigned int)i < 2 && "hvec2::operator[](): bad index");
		return (&x)[i];
	}

	half x, y;

	// deprecated, use new style constants below instead
	static const hvec2 ZERO;
	static const hvec2 ONE;
};

constexpr hvec2 hvec2_zero(half(0x0000));
constexpr hvec2 hvec2_one(half(0x3c00));

UNIGINE_INLINE vec2::vec2(const hvec2 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
{
}

UNIGINE_INLINE dvec2::dvec2(const hvec2 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
{
}

//////////////////////////////////////////////////////////////////////////
// hvec3, vector with 3 half components
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API hvec3
{
	constexpr UNIGINE_INLINE hvec3()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{
	}

	UNIGINE_INLINE hvec3(const hvec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0)
	{
	}

	constexpr UNIGINE_INLINE hvec3(half x, half y, half z)
		: x(x)
		, y(y)
		, z(z)
		, w(0)
	{
	}

	constexpr explicit UNIGINE_INLINE hvec3(half v)
		: x(v)
		, y(v)
		, z(v)
		, w(0)
	{
	}

	explicit UNIGINE_INLINE hvec3(float v)
		: x(v)
		, y(v)
		, z(v)
		, w(0)
	{
	}

	explicit UNIGINE_INLINE hvec3(const vec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0)
	{
	}

	explicit UNIGINE_INLINE hvec3(const dvec3 &v)
		: x((float)v.x)
		, y((float)v.y)
		, z((float)v.z)
		, w(0)
	{
	}

	UNIGINE_INLINE hvec3 &operator=(const hvec3 &v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		w = v.w;
		return *this;
	}

	UNIGINE_INLINE operator half *() { return &x; }
	UNIGINE_INLINE operator const half *() const { return &x; }
	UNIGINE_INLINE operator void *() { return &x; }
	UNIGINE_INLINE operator const void *() const { return &x; }
	UNIGINE_INLINE half &operator[](int i)
	{
		assert((unsigned int)i < 3 && "hvec3::operator[](): bad index");
		return (&x)[i];
	}

	UNIGINE_INLINE half operator[](int i) const
	{
		assert((unsigned int)i < 3 && "hvec3::operator[](): bad index");
		return (&x)[i];
	}

	half x, y, z, w;

	// deprecated, use new style constants below instead
	static const hvec3 ZERO;
	static const hvec3 ONE;
};

constexpr hvec3 hvec3_zero(half(0x0000));
constexpr hvec3 hvec3_one(half(0x3c00));

UNIGINE_INLINE vec3::vec3(const hvec3 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
	, z(v.z.getFloat())
	, w(0.0f)
{
}

UNIGINE_INLINE dvec3::dvec3(const hvec3 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
	, z(v.z.getFloat())
	, w(0.0)
{
}

//////////////////////////////////////////////////////////////////////////
// hvec4, vector with 4 half components
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API hvec4
{
	constexpr UNIGINE_INLINE hvec4()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{
	}

	UNIGINE_INLINE hvec4(const hvec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	constexpr UNIGINE_INLINE hvec4(half x, half y, half z, half w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	constexpr explicit UNIGINE_INLINE hvec4(half v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	explicit UNIGINE_INLINE hvec4(float v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	explicit UNIGINE_INLINE hvec4(const vec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	explicit UNIGINE_INLINE hvec4(const dvec4 &v)
		: x((float)v.x)
		, y((float)v.y)
		, z((float)v.z)
		, w((float)v.w)
	{
	}

	UNIGINE_INLINE hvec4 &operator=(const hvec4 &v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		w = v.w;
		return *this;
	}

	UNIGINE_INLINE operator half *() { return &x; }
	UNIGINE_INLINE operator const half *() const { return &x; }
	UNIGINE_INLINE operator void *() { return &x; }
	UNIGINE_INLINE operator const void *() const { return &x; }
	UNIGINE_INLINE half &operator[](int i)
	{
		assert((unsigned int)i < 4 && "hvec4::operator[](): bad index");
		return (&x)[i];
	}

	UNIGINE_INLINE half operator[](int i) const
	{
		assert((unsigned int)i < 4 && "hvec4::operator[](): bad index");
		return (&x)[i];
	}

	UNIGINE_INLINE half *get() { return &x; }
	UNIGINE_INLINE const half *get() const { return &x; }

	//TODO. Add v[4] array. When I tried to add array the compiler returned an error 'compiler is out of heap space'.
	half x, y, z, w;

	// deprecated, use new style constants below instead
	static const hvec4 ZERO;
	static const hvec4 ONE;
};

constexpr hvec4 hvec4_zero(half(0x0000));
constexpr hvec4 hvec4_one(half(0x3c00));

UNIGINE_INLINE vec4::vec4(const hvec4 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
	, z(v.z.getFloat())
	, w(v.w.getFloat())
{
}

UNIGINE_INLINE dvec4::dvec4(const hvec4 &v)
	: x(v.x.getFloat())
	, y(v.y.getFloat())
	, z(v.z.getFloat())
	, w(v.w.getFloat())
{
}

//////////////////////////////////////////////////////////////////////////
// ivec2, vector with 2 int components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED8(struct)
UNIGINE_API ivec2
{
	constexpr UNIGINE_INLINE ivec2()
		: x(0)
		, y(0)
	{
	}

	constexpr UNIGINE_INLINE ivec2(int x, int y)
		: x(x)
		, y(y)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec2(int v)
		: x(v)
		, y(v)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec2(const int *v)
		: x(v[0])
		, y(v[1])
	{
	}

	explicit UNIGINE_INLINE ivec2(const dvec2 &v)
		: x(dtoi(v.x))
		, y(dtoi(v.y))
	{
	}

	explicit UNIGINE_INLINE ivec2(const vec2 &v)
		: x(ftoi(v.x))
		, y(ftoi(v.y))
	{
	}

	UNIGINE_INLINE ivec2(const ivec2 &v)
		: x(v.x)
		, y(v.y)
	{
	}

	UNIGINE_INLINE ivec2 &operator=(const ivec2 &val)
	{
		x = val.x;
		y = val.y;
		return *this;
	}

	UNIGINE_INLINE ivec2 operator-() const
	{
		return ivec2(-x, -y);
	}

	UNIGINE_INLINE ivec2 &operator*=(const ivec2 &val)
	{
		x *= val.x;
		y *= val.y;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator/=(const ivec2 &val)
	{
		x /= val.x;
		y /= val.y;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator+=(const ivec2 &val)
	{
		x += val.x;
		y += val.y;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator-=(const ivec2 &val)
	{
		x -= val.x;
		y -= val.y;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator*=(int val)
	{
		x *= val;
		y *= val;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator/=(int val)
	{
		x /= val;
		y /= val;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator+=(int val)
	{
		x += val;
		y += val;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator-=(int val)
	{
		x -= val;
		y -= val;
		return *this;
	}


	UNIGINE_INLINE ivec2 &operator<<=(int val)
	{
		x <<= val;
		y <<= val;
		return *this;
	}

	UNIGINE_INLINE ivec2 &operator>>=(int val)
	{
		x >>= val;
		y >>= val;
		return *this;
	}

	UNIGINE_INLINE operator int *() { return v; }
	UNIGINE_INLINE operator const int *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE int &operator[](int i)
	{
		assert((unsigned int)i < 2 && "ivec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE int operator[](int i) const
	{
		assert((unsigned int)i < 2 && "ivec2::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(int val)
	{
		x = val;
		y = val;
	}

	UNIGINE_INLINE void set(int x_, int y_)
	{
		x = x_;
		y = y_;
	}

	UNIGINE_INLINE void set(const ivec2 &val)
	{
		x = val.x;
		y = val.y;
	}

	UNIGINE_INLINE void set(const int *val)
	{
		x = val[0];
		y = val[1];
	}

	UNIGINE_INLINE void get(int *val) const
	{
		val[0] = x;
		val[1] = y;
	}

	UNIGINE_INLINE ivec2 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		return *this;
	}

	UNIGINE_INLINE int *get() { return v; }
	UNIGINE_INLINE const int *get() const { return v; }
	UNIGINE_INLINE int length2() const
	{
		return x * x + y * y;
	}
	
	UNIGINE_INLINE int mul() const
	{
		return x * y;
	}

	UNIGINE_INLINE int max() const
	{
		return Math::max(x, y);
	}

	UNIGINE_INLINE int min() const
	{
		return Math::min(x, y);
	}

	union
	{
		struct
		{
			int x, y;
		};
		int v[2];
#ifdef USE_SSE
		__m64 vec;
#endif
		long long long_v;
	};

	// deprecated, use new style constants below instead
	static const ivec2 ZERO;
	static const ivec2 ONE;
};

constexpr ivec2 ivec2_zero(0);
constexpr ivec2 ivec2_one(1);

UNIGINE_INLINE vec2 operator/(const vec2 &v0, const ivec2 &v1)
{
	return vec2(v0.x / v1.x, v0.y / v1.y);
}
UNIGINE_INLINE vec2 &vec2::operator/=(const ivec2 &val)
{
	x /= val.x;
	y /= val.y;
	return *this;
}
UNIGINE_INLINE ivec2 vec2::floor() const
{
	return ivec2(int(Math::floor(x)), int(Math::floor(y)));
}

UNIGINE_INLINE ivec2 vec2::ceil() const
{
	return ivec2(int(Math::ceil(x)), int(Math::ceil(y)));
}

UNIGINE_INLINE ivec2 dvec2::floor() const
{
	return ivec2(int(Math::floor(x)), int(Math::floor(y)));
}

UNIGINE_INLINE ivec2 dvec2::ceil() const
{
	return ivec2(int(Math::ceil(x)), int(Math::ceil(y)));
}

UNIGINE_INLINE vec2::vec2(const ivec2 &val)
	: x(itof(val.x))
	, y(itof(val.y))
{
}

UNIGINE_INLINE dvec2::dvec2(const ivec2 &val)
	: x(itod(val.x))
	, y(itod(val.y))
{
}

UNIGINE_INLINE int operator==(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v == v1.long_v;
}

UNIGINE_INLINE int operator!=(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v != v1.long_v;
}

UNIGINE_INLINE int operator<(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v < v1.long_v;
}

UNIGINE_INLINE int operator>(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v > v1.long_v;
}

UNIGINE_INLINE int operator>=(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v >= v1.long_v;
}

UNIGINE_INLINE int operator<=(const ivec2 &v0, const ivec2 &v1)
{
	return v0.long_v <= v1.long_v;
}

UNIGINE_INLINE ivec2 operator*(const ivec2 &v0, int v1)
{
	return ivec2(v0.x * v1, v0.y * v1);
}

UNIGINE_INLINE ivec2 operator*(const ivec2 &v0, const ivec2 &v1)
{
	return ivec2(v0.x * v1.x, v0.y * v1.y);
}

UNIGINE_INLINE ivec2 operator/(const ivec2 &v0, int v1)
{
	return ivec2(v0.x / v1, v0.y / v1);
}
UNIGINE_INLINE ivec2 operator%(const ivec2 &v0, int v1)
{
	return ivec2(v0.x % v1, v0.y % v1);
}

UNIGINE_INLINE ivec2 operator/(const ivec2 &v0, const ivec2 &v1)
{
	return ivec2(v0.x / v1.x, v0.y / v1.y);
}

UNIGINE_INLINE ivec2 operator+(const ivec2 &v0, const ivec2 &v1)
{
	return ivec2(v0.x + v1.x, v0.y + v1.y);
}

UNIGINE_INLINE ivec2 operator-(const ivec2 &v0, const ivec2 &v1)
{
	return ivec2(v0.x - v1.x, v0.y - v1.y);
}

UNIGINE_INLINE ivec2 operator+(const ivec2 &v0, int v1)
{
	return ivec2(v0.x + v1, v0.y + v1);
}

UNIGINE_INLINE ivec2 operator-(const ivec2 &v0, int v1)
{
	return ivec2(v0.x - v1, v0.y - v1);
}

UNIGINE_INLINE ivec2 operator<<(const ivec2 &v0, int v1)
{
	return ivec2(v0.x << v1, v0.y << v1);
}

UNIGINE_INLINE ivec2 operator>>(const ivec2 &v0, int v1)
{
	return ivec2(v0.x >> v1, v0.y >> v1);
}

UNIGINE_INLINE int dot(const ivec2 &v0, const ivec2 &v1)
{
	return v0.x * v1.x + v0.y * v1.y;
}

UNIGINE_INLINE ivec2 &lerp(ivec2 &ret, const ivec2 &v0, const ivec2 &v1, int k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	return ret;
}

UNIGINE_INLINE int length2(const ivec2 &v)
{
	return v.length2();
}

UNIGINE_INLINE ivec2 abs(const ivec2 &v)
{
	return { abs(v.x), abs(v.y) };
}

UNIGINE_API ivec2 min(const ivec2 &v0, const ivec2 &v1);
UNIGINE_API ivec2 max(const ivec2 &v0, const ivec2 &v1);
UNIGINE_API ivec2 clamp(const ivec2 &v, const ivec2 &v0, const ivec2 &v1);
UNIGINE_API ivec2 lerp(const ivec2 &v0, const ivec2 &v1, int k);

//////////////////////////////////////////////////////////////////////////
// ivec3, vector with 3 int components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API ivec3
{
	constexpr UNIGINE_INLINE ivec3()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{
	}

	constexpr UNIGINE_INLINE ivec3(int x, int y, int z)
		: x(x)
		, y(y)
		, z(z)
		, w(0)
	{
	}
	
	UNIGINE_INLINE ivec3(const ivec2 &xy, int z)
		: x(xy.x)
		, y(xy.y)
		, z(z)
		, w(0)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec3(int v)
		: x(v)
		, y(v)
		, z(v)
		, w(0)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec3(const int *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(0)
	{
	}

	explicit UNIGINE_INLINE ivec3(const dvec3 &v)
		: x(dtoi(v.x))
		, y(dtoi(v.y))
		, z(dtoi(v.z))
		, w(0)
	{
	}

	explicit UNIGINE_INLINE ivec3(const ivec4 &v);

#ifdef USE_SSE2
	explicit UNIGINE_INLINE ivec3(const vec3 &v)
	{
		sse(_mm_cvttps_epi32(v.sse()));
	}

	UNIGINE_INLINE ivec3(const ivec3 &v)
	{
		sse(v.sse());
	}

	UNIGINE_INLINE ivec3(const __m128i &v)
	{
		sse(v);
	}
#else
	explicit UNIGINE_INLINE ivec3(const vec3 &v)
		: x(ftoi(v.x))
		, y(ftoi(v.y))
		, z(ftoi(v.z))
		, w(0)
	{
	}

	UNIGINE_INLINE ivec3(const ivec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0)
	{
	}
#endif

#ifdef USE_SSE2
	UNIGINE_INLINE operator __m128i() const
	{
		return sse();
	}

	UNIGINE_INLINE ivec3 &operator=(const __m128i &val)
	{
		sse(val);
		return *this;
	}
#endif

	UNIGINE_INLINE ivec3 &operator=(const ivec3 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE ivec3 operator-() const
	{
		return ivec3(-x, -y, -z);
	}

	UNIGINE_INLINE ivec3 &operator*=(int val)
	{
		x *= val;
		y *= val;
		z *= val;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator*=(const ivec3 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator/=(int val)
	{
		x /= val;
		y /= val;
		z /= val;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator/=(const ivec3 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator+=(const ivec3 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator-=(const ivec3 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator<<=(int val)
	{
		x <<= val;
		y <<= val;
		z <<= val;
		return *this;
	}

	UNIGINE_INLINE ivec3 &operator>>=(int val)
	{
		x >>= val;
		y >>= val;
		z >>= val;
		return *this;
	}

	UNIGINE_INLINE operator int *() { return v; }
	UNIGINE_INLINE operator const int *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE int &operator[](int i)
	{
		assert((unsigned int)i < 3 && "ivec3::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE int operator[](int i) const
	{
		assert((unsigned int)i < 3 && "ivec3::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(int val)
	{
		x = val;
		y = val;
		z = val;
	}

	UNIGINE_INLINE void set(int x_, int y_, int z_)
	{
		x = x_;
		y = y_;
		z = z_;
	}

	UNIGINE_INLINE void set(const ivec3 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const int *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
	}

	UNIGINE_INLINE void get(int *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
	}

	UNIGINE_INLINE int *get() { return v; }
	UNIGINE_INLINE const int *get() const { return v; }
	UNIGINE_INLINE int length2() const
	{
		return x * x + y * y + z * z;
	}

	UNIGINE_INLINE ivec3 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		return *this;
	}

#ifdef USE_SSE2
	UNIGINE_INLINE __m128i sse() const
	{
		__m128 xx = _mm_loadu_ps((float *)&vec);
		return *(__m128i *)&xx;
	}

	UNIGINE_INLINE void sse(const __m128i &val)
	{
		_mm_storeu_ps((float *)&vec, *(__m128 *)&val);
	}
#endif

	union
	{
		struct
		{
			int x, y, z, w;
		};
		ivec2 xy;

		int v[4];
#ifdef USE_SSE2
		__m128i vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const ivec3 ZERO;
	static const ivec3 ONE;
};

constexpr ivec3 ivec3_zero(0);
constexpr ivec3 ivec3_one(1);


#ifdef USE_SSE2
UNIGINE_INLINE vec3::vec3(const ivec3 &v)
{
	sse(_mm_cvtepi32_ps(v.sse()));
}
#else
UNIGINE_INLINE vec3::vec3(const ivec3 &v)
	: x(Math::itof(v.x))
	, y(Math::itof(v.y))
	, z(Math::itof(v.z))
	, w(0.0f)
{
}
#endif

UNIGINE_INLINE dvec3::dvec3(const ivec3 &v)
	: x(itod(v.x))
	, y(itod(v.y))
	, z(itod(v.z))
	, w(0.0)
{
}
UNIGINE_INLINE int operator<(const ivec3 &v0, const ivec3 &v1)
{
	return (v0.x < v1.x && v0.y < v1.y && v0.z < v1.z);
}
UNIGINE_INLINE int operator==(const ivec3 &v0, const ivec3 &v1)
{
	return (v0.x == v1.x && v0.y == v1.y && v0.z == v1.z);
}

UNIGINE_INLINE int operator!=(const ivec3 &v0, const ivec3 &v1)
{
	return (v0.x != v1.x || v0.y != v1.y || v0.z != v1.z);
}

UNIGINE_INLINE ivec3 operator*(const ivec3 &v0, int v1)
{
	return ivec3(v0.x * v1, v0.y * v1, v0.z * v1);
}

UNIGINE_INLINE ivec3 operator*(const ivec3 &v0, const ivec3 &v1)
{
	return ivec3(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z);
}

UNIGINE_INLINE ivec3 operator/(const ivec3 &v0, int v1)
{
	return ivec3(v0.x / v1, v0.y / v1, v0.z / v1);
}

UNIGINE_INLINE ivec3 operator/(const ivec3 &v0, const ivec3 &v1)
{
	return ivec3(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z);
}

UNIGINE_INLINE ivec3 operator+(const ivec3 &v0, const ivec3 &v1)
{
	return ivec3(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z);
}

UNIGINE_INLINE ivec3 operator-(const ivec3 &v0, const ivec3 &v1)
{
	return ivec3(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z);
}

UNIGINE_INLINE ivec3 operator<<(const ivec3 &v0, int v1)
{
	return ivec3(v0.x << v1, v0.y << v1, v0.z << v1);
}

UNIGINE_INLINE ivec3 operator>>(const ivec3 &v0, int v1)
{
	return ivec3(v0.x >> v1, v0.y >> v1, v0.z >> v1);
}

UNIGINE_INLINE int dot(const ivec3 &v0, const ivec3 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z;
}

UNIGINE_INLINE ivec3 &lerp(ivec3 &ret, const ivec3 &v0, const ivec3 &v1, int k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	return ret;
}

UNIGINE_INLINE ivec3 &cross(ivec3 &ret, const ivec3 &v0, const ivec3 &v1)
{
	ret.x = v0.y * v1.z - v0.z * v1.y;
	ret.y = v0.z * v1.x - v0.x * v1.z;
	ret.z = v0.x * v1.y - v0.y * v1.x;
	return ret;
}

UNIGINE_INLINE int length2(const ivec3 &v)
{
	return v.length2();
}

UNIGINE_INLINE ivec3 cross(const ivec3 &v0, const ivec3 &v1)
{
	ivec3 ret;
	return cross(ret, v0, v1);
}

UNIGINE_INLINE ivec3 abs(const ivec3 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z) };
}

UNIGINE_API ivec3 min(const ivec3 &v0, const ivec3 &v1);
UNIGINE_API ivec3 max(const ivec3 &v0, const ivec3 &v1);
UNIGINE_API ivec3 clamp(const ivec3 &v, const ivec3 &v0, const ivec3 &v1);
UNIGINE_API ivec3 lerp(const ivec3 &v0, const ivec3 &v1, int k);

//////////////////////////////////////////////////////////////////////////
// ivec4, vector with 4 int components
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API ivec4
{
	constexpr UNIGINE_INLINE ivec4()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{
	}

	constexpr UNIGINE_INLINE ivec4(int x, int y, int z, int w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec4(int v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	constexpr explicit UNIGINE_INLINE ivec4(const int *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(v[3])
	{
	}

	explicit UNIGINE_INLINE ivec4(const dvec4 &v)
		: x(dtoi(v.x))
		, y(dtoi(v.y))
		, z(dtoi(v.z))
		, w(dtoi(v.w))
	{
	}

	explicit UNIGINE_INLINE ivec4(const bvec4 &v);
	explicit UNIGINE_INLINE ivec4(const svec4 &v);
	explicit UNIGINE_INLINE ivec4(const ivec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(1)
	{
	}
	constexpr explicit UNIGINE_INLINE ivec4(const ivec2 &v, int z, int w)
		: x(v.x)
		, y(v.y)
		, z(z)
		, w(w)
	{
	}
	
	constexpr explicit UNIGINE_INLINE ivec4(const ivec3 &v, int w)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(w)
	{
	}
	
	constexpr explicit UNIGINE_INLINE ivec4(const ivec2 &v0, const ivec2 &v1)
		: x(v0.x)
		, y(v0.y)
		, z(v1.x)
		, w(v1.y)
	{
	}

#ifdef USE_SSE2
	explicit UNIGINE_INLINE ivec4(const vec4 &v)
	{
		sse(_mm_cvttps_epi32(v.sse()));
	}

	UNIGINE_INLINE ivec4(const ivec4 &v)
	{
		sse(v.sse());
	}

	UNIGINE_INLINE ivec4(const __m128i &v)
	{
		sse(v);
	}
#else
	explicit UNIGINE_INLINE ivec4(const vec4 &v)
		: x(ftoi(v.x))
		, y(ftoi(v.y))
		, z(ftoi(v.z))
		, w(ftoi(v.w))
	{
	}

	UNIGINE_INLINE ivec4(const ivec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}
#endif

#ifdef USE_SSE2
	UNIGINE_INLINE operator __m128i() const
	{
		return sse();
	}

	UNIGINE_INLINE ivec4 &operator=(const __m128i &val)
	{
		sse(val);
		return *this;
	}
#endif

	UNIGINE_INLINE ivec4 &operator=(const ivec4 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
		return *this;
	}

	UNIGINE_INLINE ivec4 operator-() const
	{
		return ivec4(-x, -y, -z, -w);
	}

	UNIGINE_INLINE ivec4 &operator*=(int val)
	{
		x *= val;
		y *= val;
		z *= val;
		w *= val;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator*=(const ivec4 &val)
	{
		x *= val.x;
		y *= val.y;
		z *= val.z;
		w *= val.w;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator/=(int val)
	{
		x /= val;
		y /= val;
		z /= val;
		w /= val;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator/=(const ivec4 &val)
	{
		x /= val.x;
		y /= val.y;
		z /= val.z;
		w /= val.w;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator+=(const ivec4 &val)
	{
		x += val.x;
		y += val.y;
		z += val.z;
		w += val.w;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator-=(const ivec4 &val)
	{
		x -= val.x;
		y -= val.y;
		z -= val.z;
		w -= val.w;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator<<=(int val)
	{
		x <<= val;
		y <<= val;
		z <<= val;
		w <<= val;
		return *this;
	}

	UNIGINE_INLINE ivec4 &operator>>=(int val)
	{
		x >>= val;
		y >>= val;
		z >>= val;
		w >>= val;
		return *this;
	}

	UNIGINE_INLINE operator int *() { return v; }
	UNIGINE_INLINE operator const int *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE int &operator[](int i)
	{
		assert((unsigned int)i < 4 && "ivec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE int operator[](int i) const
	{
		assert((unsigned int)i < 4 && "ivec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(int val)
	{
		x = val;
		y = val;
		z = val;
		w = val;
	}

	UNIGINE_INLINE void set(int x_, int y_, int z_, int w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const ivec4 &val)
	{
#ifdef USE_SSE2
		sse(val.sse());
#else
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
#endif
	}

	UNIGINE_INLINE void set(const int *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
		w = val[3];
	}

	UNIGINE_INLINE void get(int *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
		val[3] = w;
	}

	UNIGINE_INLINE int *get() { return v; }
	UNIGINE_INLINE const int *get() const { return v; }
	UNIGINE_INLINE int length2() const
	{
		return x * x + y * y + z * z + w * w;
	}

	UNIGINE_INLINE ivec4 &abs()
	{
		x = Math::abs(x);
		y = Math::abs(y);
		z = Math::abs(z);
		w = Math::abs(w);
		return *this;
	}

#ifdef USE_SSE2
	UNIGINE_INLINE __m128i sse() const
	{
		__m128 xx = _mm_loadu_ps((float *)&vec);
		return *(__m128i *)&xx;
	}

	UNIGINE_INLINE void sse(const __m128i &val)
	{
		_mm_storeu_ps((float *)&vec, *(__m128 *)&val);
	}
#endif

	union
	{
		struct
		{
			int x, y, z, w;
		};

		ivec3 xyz;
		ivec2 xy;

		struct
		{
			ivec2 xy;
			ivec2 zw;
		} swizzle;

		int v[4];
#ifdef USE_SSE2
		__m128i vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const ivec4 ZERO;
	static const ivec4 ONE;
};

constexpr ivec4 ivec4_zero(0);
constexpr ivec4 ivec4_one(1);

UNIGINE_INLINE ivec3::ivec3(const ivec4 &v)
	: x(v.x)
	, y(v.y)
	, z(v.z)
	, w(0)
{
}

#ifdef USE_SSE2
UNIGINE_INLINE vec4::vec4(const ivec4 &v)
{
	sse(_mm_cvtepi32_ps(v.sse()));
}
#else
UNIGINE_INLINE vec4::vec4(const ivec4 &v)
	: x(Math::itof(v.x))
	, y(Math::itof(v.y))
	, z(Math::itof(v.z))
	, w(Math::itof(v.w))
{
}
#endif

UNIGINE_INLINE dvec4::dvec4(const ivec4 &v)
	: x(itod(v.x))
	, y(itod(v.y))
	, z(itod(v.z))
	, w(itod(v.w))
{
}

UNIGINE_INLINE int operator==(const ivec4 &v0, const ivec4 &v1)
{
	return (v0.x == v1.x && v0.y == v1.y && v0.z == v1.z && v0.w == v1.w);
}

UNIGINE_INLINE int operator!=(const ivec4 &v0, const ivec4 &v1)
{
	return (v0.x != v1.x || v0.y != v1.y || v0.z != v1.z || v0.w != v1.w);
}

UNIGINE_INLINE ivec4 operator*(const ivec4 &v0, int v1)
{
	return ivec4(v0.x * v1, v0.y * v1, v0.z * v1, v0.w * v1);
}

UNIGINE_INLINE ivec4 operator*(const ivec4 &v0, const ivec4 &v1)
{
	return ivec4(v0.x * v1.x, v0.y * v1.y, v0.z * v1.z, v0.w * v1.w);
}

UNIGINE_INLINE ivec4 operator/(const ivec4 &v0, int v1)
{
	return ivec4(v0.x / v1, v0.y / v1, v0.z / v1, v0.w / v1);
}

UNIGINE_INLINE ivec4 operator/(const ivec4 &v0, const ivec4 &v1)
{
	return ivec4(v0.x / v1.x, v0.y / v1.y, v0.z / v1.z, v0.w / v1.w);
}

UNIGINE_INLINE ivec4 operator+(const ivec4 &v0, const ivec4 &v1)
{
	return ivec4(v0.x + v1.x, v0.y + v1.y, v0.z + v1.z, v0.w + v1.w);
}

UNIGINE_INLINE ivec4 operator-(const ivec4 &v0, const ivec4 &v1)
{
	return ivec4(v0.x - v1.x, v0.y - v1.y, v0.z - v1.z, v0.w - v1.w);
}

UNIGINE_INLINE ivec4 operator<<(const ivec4 &v0, int v1)
{
	return ivec4(v0.x << v1, v0.y << v1, v0.z << v1, v0.w << v1);
}

UNIGINE_INLINE ivec4 operator>>(const ivec4 &v0, int v1)
{
	return ivec4(v0.x >> v1, v0.y >> v1, v0.z >> v1, v0.w >> v1);
}

UNIGINE_INLINE ivec4 operator%(const ivec4 &v0, int v1)
{
	return ivec4(v0.x % v1, v0.y % v1, v0.z % v1, v0.w % v1);
}

UNIGINE_INLINE int dot(const ivec4 &v0, const ivec4 &v1)
{
	return v0.x * v1.x + v0.y * v1.y + v0.z * v1.z + v0.w * v1.w;
}

UNIGINE_INLINE ivec4 &lerp(ivec4 &ret, const ivec4 &v0, const ivec4 &v1, int k)
{
	ret.x = lerp(v0.x, v1.x, k);
	ret.y = lerp(v0.y, v1.y, k);
	ret.z = lerp(v0.z, v1.z, k);
	ret.w = lerp(v0.w, v1.w, k);
	return ret;
}

UNIGINE_INLINE int length2(const ivec4 &v)
{
	return v.length2();
}

UNIGINE_INLINE ivec4 abs(const ivec4 &v)
{
	return { abs(v.x), abs(v.y), abs(v.z), abs(v.w) };
}

UNIGINE_API ivec4 min(const ivec4 &v0, const ivec4 &v1);
UNIGINE_API ivec4 max(const ivec4 &v0, const ivec4 &v1);
UNIGINE_API ivec4 clamp(const ivec4 &v, const ivec4 &v0, const ivec4 &v1);
UNIGINE_API ivec4 lerp(const ivec4 &v0, const ivec4 &v1, int k);

//////////////////////////////////////////////////////////////////////////
// svec4, vector with 4 short components
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API svec4
{
	constexpr UNIGINE_INLINE svec4()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{}

	constexpr UNIGINE_INLINE svec4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{}

	UNIGINE_INLINE svec4(const vec4 &v, float scale) { set(v, scale); }

	constexpr explicit UNIGINE_INLINE svec4(unsigned short v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{}

	explicit UNIGINE_INLINE svec4(const unsigned short *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(v[3])
	{}

	explicit UNIGINE_INLINE svec4(const vec4 &v)
		: x((unsigned short)ftoi(v.x))
		, y((unsigned short)ftoi(v.y))
		, z((unsigned short)ftoi(v.z))
		, w((unsigned short)ftoi(v.w))
	{}

	explicit UNIGINE_INLINE svec4(const dvec4 &v)
		: x((unsigned short)dtoi(v.x))
		, y((unsigned short)dtoi(v.y))
		, z((unsigned short)dtoi(v.z))
		, w((unsigned short)dtoi(v.w))
	{}

	constexpr explicit UNIGINE_INLINE svec4(const ivec4 &v)
		: x((unsigned short)v.x)
		, y((unsigned short)v.y)
		, z((unsigned short)v.z)
		, w((unsigned short)v.w)
	{}

	UNIGINE_INLINE svec4(const svec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{}

	UNIGINE_INLINE svec4 &operator=(const svec4 &val)
	{
		long_v = val.long_v;
		return *this;
	}

	UNIGINE_INLINE operator unsigned short *() { return v; }
	UNIGINE_INLINE operator const unsigned short *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE unsigned short &operator[](int i)
	{
		assert((unsigned int)i < 4 && "svec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE unsigned short operator[](int i) const
	{
		assert((unsigned int)i < 4 && "svec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(unsigned short val)
	{
		x = val;
		y = val;
		z = val;
		w = val;
	}

	UNIGINE_INLINE void set(unsigned short x_, unsigned short y_, unsigned short z_, unsigned short w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const svec4 &val)
	{
		long_v = val.long_v;
	}

	UNIGINE_INLINE void set(const unsigned short *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
		w = val[3];
	}

	UNIGINE_INLINE void get(unsigned short *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
		val[3] = w;
	}

	UNIGINE_INLINE void set(const vec4 &val, float scale)
	{
		x = (unsigned short)clamp(ftoi(val.x * scale), 0, 65535);
		y = (unsigned short)clamp(ftoi(val.y * scale), 0, 65535);
		z = (unsigned short)clamp(ftoi(val.z * scale), 0, 65535);
		w = (unsigned short)clamp(ftoi(val.w * scale), 0, 65535);
	}

	UNIGINE_INLINE unsigned short *get() { return v; }
	UNIGINE_INLINE const unsigned short *get() const { return v; }
	union
	{
		struct
		{
			unsigned short x, y, z, w;
		};
		unsigned short v[4];
		unsigned long long long_v;
	};
};

constexpr svec4 svec4_zero((unsigned short)0);
constexpr svec4 svec4_one((unsigned short)65535);

UNIGINE_INLINE vec4::vec4(const svec4 &v)
	: x(itof(v.x))
	, y(itof(v.y))
	, z(itof(v.z))
	, w(itof(v.w))
{}

UNIGINE_INLINE dvec4::dvec4(const svec4 &v)
	: x(itod(v.x))
	, y(itod(v.y))
	, z(itod(v.z))
	, w(itod(v.w))
{}

UNIGINE_INLINE ivec4::ivec4(const svec4 &v)
	: x(v.x)
	, y(v.y)
	, z(v.z)
	, w(v.w)
{}

UNIGINE_INLINE int operator==(const svec4 &v0, const svec4 &v1)
{
	return (v0.long_v == v1.long_v);
}

UNIGINE_INLINE int operator!=(const svec4 &v0, const svec4 &v1)
{
	return (v0.long_v != v1.long_v);
}

//////////////////////////////////////////////////////////////////////////
// bvec4, vector with 4 byte components (for vertex color parameters)
//////////////////////////////////////////////////////////////////////////

struct UNIGINE_API bvec4
{
	constexpr UNIGINE_INLINE bvec4()
		: x(0)
		, y(0)
		, z(0)
		, w(0)
	{
	}

	constexpr UNIGINE_INLINE bvec4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
		: x(x)
		, y(y)
		, z(z)
		, w(w)
	{
	}

	UNIGINE_INLINE bvec4(const vec4 &v, float scale) { set(v, scale); }

	constexpr explicit UNIGINE_INLINE bvec4(unsigned char v)
		: x(v)
		, y(v)
		, z(v)
		, w(v)
	{
	}

	explicit UNIGINE_INLINE bvec4(const unsigned char *v)
		: x(v[0])
		, y(v[1])
		, z(v[2])
		, w(v[3])
	{
	}

	explicit UNIGINE_INLINE bvec4(const vec4 &v)
		: x((unsigned char)ftoi(v.x))
		, y((unsigned char)ftoi(v.y))
		, z((unsigned char)ftoi(v.z))
		, w((unsigned char)ftoi(v.w))
	{
	}

	explicit UNIGINE_INLINE bvec4(const dvec4 &v)
		: x((unsigned char)dtoi(v.x))
		, y((unsigned char)dtoi(v.y))
		, z((unsigned char)dtoi(v.z))
		, w((unsigned char)dtoi(v.w))
	{
	}

	constexpr explicit UNIGINE_INLINE bvec4(const ivec4 &v)
		: x((unsigned char)v.x)
		, y((unsigned char)v.y)
		, z((unsigned char)v.z)
		, w((unsigned char)v.w)
	{
	}

	UNIGINE_INLINE bvec4(const bvec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	UNIGINE_INLINE bvec4 &operator=(const bvec4 &val)
	{
		vec = val.vec;
		return *this;
	}

	UNIGINE_INLINE operator unsigned char *() { return v; }
	UNIGINE_INLINE operator const unsigned char *() const { return v; }
	UNIGINE_INLINE operator void *() { return v; }
	UNIGINE_INLINE operator const void *() const { return v; }
	UNIGINE_INLINE unsigned char &operator[](int i)
	{
		assert((unsigned int)i < 4 && "bvec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE unsigned char operator[](int i) const
	{
		assert((unsigned int)i < 4 && "bvec4::operator[](): bad index");
		return v[i];
	}

	UNIGINE_INLINE void set(unsigned char val)
	{
		x = val;
		y = val;
		z = val;
		w = val;
	}

	UNIGINE_INLINE void set(unsigned char x_, unsigned char y_, unsigned char z_, unsigned char w_)
	{
		x = x_;
		y = y_;
		z = z_;
		w = w_;
	}

	UNIGINE_INLINE void set(const bvec4 &val)
	{
		x = val.x;
		y = val.y;
		z = val.z;
		w = val.w;
	}

	UNIGINE_INLINE void set(const unsigned char *val)
	{
		x = val[0];
		y = val[1];
		z = val[2];
		w = val[3];
	}

	UNIGINE_INLINE void get(unsigned char *val) const
	{
		val[0] = x;
		val[1] = y;
		val[2] = z;
		val[3] = w;
	}

	UNIGINE_INLINE void set(const vec4 &val, float scale)
	{
		x = (unsigned char)clamp(ftoi(val.x * scale), 0, 255);
		y = (unsigned char)clamp(ftoi(val.y * scale), 0, 255);
		z = (unsigned char)clamp(ftoi(val.z * scale), 0, 255);
		w = (unsigned char)clamp(ftoi(val.w * scale), 0, 255);
	}

	UNIGINE_INLINE unsigned char *get() { return v; }
	UNIGINE_INLINE const unsigned char *get() const { return v; }
	union
	{
		struct
		{
			unsigned char x, y, z, w;
		};
		unsigned char v[4];
		unsigned int vec;
	};
	
	// deprecated, use new style constants below instead
	static const bvec4 ZERO;
	static const bvec4 ONE;
};

constexpr bvec4 bvec4_zero((unsigned char)0);
constexpr bvec4 bvec4_one((unsigned char)255);

UNIGINE_INLINE vec4::vec4(const bvec4 &v)
	: x(itof(v.x))
	, y(itof(v.y))
	, z(itof(v.z))
	, w(itof(v.w))
{
}

UNIGINE_INLINE dvec4::dvec4(const bvec4 &v)
	: x(itod(v.x))
	, y(itod(v.y))
	, z(itod(v.z))
	, w(itod(v.w))
{
}

UNIGINE_INLINE ivec4::ivec4(const bvec4 &v)
	: x(v.x)
	, y(v.y)
	, z(v.z)
	, w(v.w)
{
}

UNIGINE_INLINE int operator==(const bvec4 &v0, const bvec4 &v1)
{
	return (v0.vec == v1.vec);
}

UNIGINE_INLINE int operator!=(const bvec4 &v0, const bvec4 &v1)
{
	return (v0.vec != v1.vec);
}

UNIGINE_API bvec4 min(const bvec4 &v0, const bvec4 &v1);
UNIGINE_API bvec4 max(const bvec4 &v0, const bvec4 &v1);
UNIGINE_API bvec4 clamp(const bvec4 &v, const bvec4 &v0, const bvec4 &v1);

//////////////////////////////////////////////////////////////////////////
// mat2, 2x2 float matrix
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API mat2
{
	mat2();
	mat2(const mat2 &m);
	constexpr explicit mat2(float v)
		: m00(v)
		, m10(v)
		, m01(v)
		, m11(v)
	{
	}
	explicit mat2(const mat3 &m);
	explicit mat2(const mat4 &m);
	explicit mat2(const dmat4 &m);

	constexpr explicit mat2(const float *m)
		: m00(m[0])
		, m10(m[2])
		, m01(m[1])
		, m11(m[3])
	{
	}
	mat2(const vec2 &col0, const vec2 &col1);

	UNIGINE_INLINE mat2 &operator=(const mat2 &m)
	{
#ifdef USE_SSE
		sse(m.sse());
#else
		m00 = m.m00;
		m10 = m.m10;
		m01 = m.m01;
		m11 = m.m11;
#endif
		return *this;
	}

	mat2 operator-() const;
	mat2 &operator*=(float v);
	mat2 &operator*=(const mat2 &m);
	mat2 &operator+=(const mat2 &m);
	mat2 &operator-=(const mat2 &m);

	UNIGINE_INLINE operator float *() { return mat; }
	UNIGINE_INLINE operator const float *() const { return mat; }
	UNIGINE_INLINE operator void *() { return mat; }
	UNIGINE_INLINE operator const void *() const { return mat; }
	UNIGINE_INLINE float &operator[](int i)
	{
		assert((unsigned int)i < 4 && "mat2::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		assert((unsigned int)i < 4 && "mat2::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE void set(int row, int column, float v)
	{
		assert((unsigned int)row < 2 && "mat2::set(): bad row");
		assert((unsigned int)column < 2 && "mat2::set(): bad column");
		mat[column * 2 + row] = v;
	}

	UNIGINE_INLINE float &get(int row, int column)
	{
		assert((unsigned int)row < 2 && "mat2::get(): bad row");
		assert((unsigned int)column < 2 && "mat2::get(): bad column");
		return mat[column * 2 + row];
	}

	UNIGINE_INLINE float get(int row, int column) const
	{
		assert((unsigned int)row < 2 && "mat2::get(): bad row");
		assert((unsigned int)column < 2 && "mat2::get(): bad column");
		return mat[column * 2 + row];
	}

	void set(const mat2 &m);
	void set(const mat3 &m);
	void set(const mat4 &m);
	void set(const dmat4 &m);
	void set(const float *m);
	void get(float *m) const;
	UNIGINE_INLINE float *get() { return mat; }
	UNIGINE_INLINE const float *get() const { return mat; }
	void setRow(int row, const vec2 &v);
	vec2 getRow(int row) const;

	void setColumn(int column, const vec2 &v);
	vec2 getColumn(int column) const;

	void setZero();
	void setIdentity();
	void setRotate(float angle);
	void setScale(const vec2 &v);

#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse() const
	{
		return _mm_loadu_ps((float *)&col);
	}

	UNIGINE_INLINE void sse(const __m128 &v)
	{
		_mm_storeu_ps((float *)&col, v);
	}
#endif

	union
	{
		struct
		{
			float m00;
			float m10;
			float m01;
			float m11;
		};
		float mat[4];
#ifdef USE_SSE
		__m128 col; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const mat2 ZERO;
	static const mat2 ONE;
	static const mat2 IDENTITY;
};

constexpr float mat2_identity_values[4] = {
	1.0f, 0.0f,
	0.0f, 1.0f,
};
constexpr mat2 mat2_zero(0.0f);
constexpr mat2 mat2_one(1.0f);
constexpr mat2 mat2_identity(mat2_identity_values);

UNIGINE_API int operator==(const mat2 &m0, const mat2 &m1);
UNIGINE_API int operator!=(const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 operator*(const mat2 &m, float v);
UNIGINE_API vec2 operator*(const mat2 &m, const vec2 &v);
UNIGINE_API vec2 operator*(const vec2 &v, const mat2 &m);
UNIGINE_API dvec2 operator*(const mat2 &m, const dvec2 &v);
UNIGINE_API dvec2 operator*(const dvec2 &v, const mat2 &m);
UNIGINE_API mat2 operator*(const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 operator+(const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 operator-(const mat2 &m0, const mat2 &m1);

UNIGINE_API int compare(const mat2 &m0, const mat2 &m1);
UNIGINE_API int compare(const mat2 &m0, const mat2 &m1, float epsilon);
UNIGINE_API float trace(const mat2 &m);
UNIGINE_API float determinant(const mat2 &m);
UNIGINE_API mat2 &mul(mat2 &ret, const mat2 &m, float v);
UNIGINE_API vec2 &mul(vec2 &ret, const mat2 &m, const vec2 &v);
UNIGINE_API vec2 &mul(vec2 &ret, const vec2 &v, const mat2 &m);
UNIGINE_API dvec2 &mul(dvec2 &ret, const mat2 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul(dvec2 &ret, const dvec2 &v, const mat2 &m);
UNIGINE_API mat2 &mul(mat2 &ret, const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 &add(mat2 &ret, const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 &sub(mat2 &ret, const mat2 &m0, const mat2 &m1);
UNIGINE_API mat2 &transpose(mat2 &ret, const mat2 &m);
UNIGINE_API mat2 &inverse(mat2 &ret, const mat2 &m);
UNIGINE_API mat2 &inverse(mat2 &ret, const mat2 &m, float det);

UNIGINE_API mat2 transpose(const mat2 &m);
UNIGINE_API mat2 inverse(const mat2 &m);
UNIGINE_API mat2 inverse(const mat2 &m, float det);

//////////////////////////////////////////////////////////////////////////
// mat3, 3x3 float matrix
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API mat3
{
	mat3();
	mat3(const mat3 &m);
	explicit mat3(float v)
		: m00(v)
		, m10(v)
		, m20(v)
		, m30(0.0f)
		, m01(v)
		, m11(v)
		, m21(v)
		, m31(0.0f)
		, m02(v)
		, m12(v)
		, m22(v)
		, m32(0.0f)
	{
	}
	explicit mat3(const mat2 &m);
	explicit mat3(const mat4 &m);
	explicit mat3(const dmat4 &m);
	explicit mat3(const quat &q);
	explicit mat3(const float *m)
		: m00(m[0])
		, m10(m[1])
		, m20(m[2])
		, m30(0.0f)
		, m01(m[3])
		, m11(m[4])
		, m21(m[5])
		, m31(0.0f)
		, m02(m[6])
		, m12(m[7])
		, m22(m[8])
		, m32(0.0f)
	{
	}
	mat3(const vec3 &col0, const vec3 &col1, const vec3 &col2);

	UNIGINE_INLINE mat3 &operator=(const mat3 &m)
	{
#ifdef USE_SSE
		sse(m.sse0(), m.sse1(), m.sse2());
#else
		m00 = m.m00;
		m01 = m.m01;
		m02 = m.m02;
		m10 = m.m10;
		m11 = m.m11;
		m12 = m.m12;
		m20 = m.m20;
		m21 = m.m21;
		m22 = m.m22;
#endif
		return *this;
	}

	mat3 operator-() const;
	mat3 &operator*=(float v);
	mat3 &operator*=(const mat3 &m);
	mat3 &operator+=(const mat3 &m);
	mat3 &operator-=(const mat3 &m);

	UNIGINE_INLINE operator float *() { return mat; }
	UNIGINE_INLINE operator const float *() const { return mat; }
	UNIGINE_INLINE operator void *() { return mat; }
	UNIGINE_INLINE operator const void *() const { return mat; }
	UNIGINE_INLINE float &operator[](int i)
	{
		assert((unsigned int)i < 12 && "mat3::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		assert((unsigned int)i < 12 && "mat3::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE void set(int row, int column, float v)
	{
		assert((unsigned int)row < 3 && "mat3::set(): bad row");
		assert((unsigned int)column < 3 && "mat3::set(): bad column");
		mat[column * 4 + row] = v;
	}

	UNIGINE_INLINE float &get(int row, int column)
	{
		assert((unsigned int)row < 3 && "mat3::get(): bad row");
		assert((unsigned int)column < 3 && "mat3::get(): bad column");
		return mat[column * 4 + row];
	}

	UNIGINE_INLINE float get(int row, int column) const
	{
		assert((unsigned int)row < 3 && "mat3::get(): bad row");
		assert((unsigned int)column < 3 && "mat3::get(): bad column");
		return mat[column * 4 + row];
	}

	void set(const mat2 &m);
	void set(const mat3 &m);
	void set(const mat4 &m);
	void set(const dmat4 &m);
	void set(const quat &q);
	void set(const float *m);
	void get(float *m) const;
	UNIGINE_INLINE float *get() { return mat; }
	UNIGINE_INLINE const float *get() const { return mat; }
	void setRow(int row, const vec3 &v);
	vec3 getRow(int row) const;

	void setColumn(int column, const vec3 &v);
	vec3 getColumn(int column) const;

	UNIGINE_INLINE vec3 getAxisX() const { return getColumn(0).normalize(); }
	UNIGINE_INLINE vec3 getAxisY() const { return getColumn(1).normalize(); }
	UNIGINE_INLINE vec3 getAxisZ() const { return getColumn(2).normalize(); }

	void setDiagonal(const vec3 &v);
	vec3 getDiagonal() const;

	void setZero();
	void setIdentity();
	void setSkewSymmetric(const vec3 &v);
	void setRotate(const vec3 &axis, float angle);
	void setRotateX(float angle);
	void setRotateY(float angle);
	void setRotateZ(float angle);
	void setScale(const vec3 &v);

	quat getQuat() const;

#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse0() const
	{
		return _mm_loadu_ps((float *)&col0);
	}

	UNIGINE_INLINE __m128 sse1() const
	{
		return _mm_loadu_ps((float *)&col1);
	}

	UNIGINE_INLINE __m128 sse2() const
	{
		return _mm_loadu_ps((float *)&col2);
	}

	UNIGINE_INLINE void sse0(const __m128 &v)
	{
		_mm_storeu_ps((float *)&col0, v);
	}

	UNIGINE_INLINE void sse1(const __m128 &v)
	{
		_mm_storeu_ps((float *)&col1, v);
	}

	UNIGINE_INLINE void sse2(const __m128 &v)
	{
		_mm_storeu_ps((float *)&col2, v);
	}

	UNIGINE_INLINE void sse(const __m128 &v0, const __m128 &v1, const __m128 &v2)
	{
		sse0(v0);
		sse1(v1);
		sse2(v2);
	}
#endif

	union
	{
		struct
		{
			float m00, m10, m20, m30;
			float m01, m11, m21, m31;
			float m02, m12, m22, m32;
		};
		float mat[12];
#ifdef USE_SSE
		struct
		{
			__m128 col0; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128 col1; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128 col2; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
		};
#endif
	};

	// deprecated, use new style constants below instead
	static const mat3 ZERO;
	static const mat3 ONE;
	static const mat3 IDENTITY;
};
constexpr float mat3_identity_values[9] = {
	1.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 1.0f,
};

// TODO: make constexrp when compiler is updated
static const mat3 mat3_zero(0.0f);
static const mat3 mat3_one(1.0f);
static const mat3 mat3_identity(mat3_identity_values);

UNIGINE_API int operator==(const mat3 &m0, const mat3 &m1);
UNIGINE_API int operator!=(const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 operator*(const mat3 &m, float v);
UNIGINE_API vec2 operator*(const mat3 &m, const vec2 &v);
UNIGINE_API vec2 operator*(const vec2 &v, const mat3 &m);
UNIGINE_API vec3 operator*(const mat3 &m, const vec3 &v);
UNIGINE_API vec3 operator*(const vec3 &v, const mat3 &m);
UNIGINE_API dvec2 operator*(const mat3 &m, const dvec2 &v);
UNIGINE_API dvec2 operator*(const dvec2 &v, const mat3 &m);
UNIGINE_API dvec3 operator*(const mat3 &m, const dvec3 &v);
UNIGINE_API dvec3 operator*(const dvec3 &v, const mat3 &m);
UNIGINE_API mat3 operator*(const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 operator+(const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 operator-(const mat3 &m0, const mat3 &m1);

UNIGINE_API int compare(const mat3 &m0, const mat3 &m1);
UNIGINE_API int compare(const mat3 &m0, const mat3 &m1, float epsilon);
UNIGINE_API float trace(const mat3 &m);
UNIGINE_API float determinant(const mat3 &m);
UNIGINE_API mat3 &mul(mat3 &ret, const mat3 &m, float v);
UNIGINE_API vec2 &mul(vec2 &ret, const mat3 &m, const vec2 &v);
UNIGINE_API vec2 &mul(vec2 &ret, const vec2 &v, const mat3 &m);
UNIGINE_API vec3 &mul(vec3 &ret, const mat3 &m, const vec3 &v);
UNIGINE_API vec3 &mul(vec3 &ret, const vec3 &v, const mat3 &m);
UNIGINE_API dvec2 &mul(dvec2 &ret, const mat3 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul(dvec2 &ret, const dvec2 &v, const mat3 &m);
UNIGINE_API dvec3 &mul(dvec3 &ret, const mat3 &m, const dvec3 &v);
UNIGINE_API dvec3 &mul(dvec3 &ret, const dvec3 &v, const mat3 &m);
UNIGINE_API mat3 &mul(mat3 &ret, const mat3 &m, const vec3 &v);
UNIGINE_API mat3 &mul(mat3 &ret, const vec3 &v, const mat3 &m);
UNIGINE_API mat3 &mul(mat3 &ret, const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 &add(mat3 &ret, const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 &sub(mat3 &ret, const mat3 &m0, const mat3 &m1);
UNIGINE_API mat3 &orthonormalize(mat3 &ret, const mat3 &m);
UNIGINE_API mat3 &transpose(mat3 &ret, const mat3 &m);
UNIGINE_API mat3 &inverse(mat3 &ret, const mat3 &m);
UNIGINE_API mat3 &inverse(mat3 &ret, const mat3 &m, float det);

UNIGINE_API mat3 orthonormalize(const mat3 &m);
UNIGINE_API mat3 transpose(const mat3 &m);
UNIGINE_API mat3 inverse(const mat3 &m);
UNIGINE_API mat3 inverse(const mat3 &m, float det);

UNIGINE_API mat3 rotate3(const vec3 &axis, float angle);
UNIGINE_API mat3 rotate3(float x, float y, float z, float angle);
UNIGINE_API mat3 rotate3(const quat &q);
UNIGINE_API mat3 rotateX3(float angle);
UNIGINE_API mat3 rotateY3(float angle);
UNIGINE_API mat3 rotateZ3(float angle);
UNIGINE_API mat3 scale3(const vec3 &v);
UNIGINE_API mat3 scale3(float x, float y, float z);

UNIGINE_API mat3 jacobi(const mat3 &m, mat3 &v);

//////////////////////////////////////////////////////////////////////////
// mat4, 4x4 float matrix
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API mat4
{
	mat4();
	mat4(const mat4 &m);
	explicit mat4(float v)
		: m00(v)
		, m10(v)
		, m20(v)
		, m30(v)
		, m01(v)
		, m11(v)
		, m21(v)
		, m31(v)
		, m02(v)
		, m12(v)
		, m22(v)
		, m32(v)
		, m03(v)
		, m13(v)
		, m23(v)
		, m33(v)
	{
	}
	explicit mat4(const mat2 &m);
	explicit mat4(const mat3 &m);
	explicit mat4(const dmat4 &m);
	explicit mat4(const quat &q);
	explicit mat4(const float *m, int transpose);
	explicit mat4(const float *m)
		: m00(m[0])
		, m10(m[1])
		, m20(m[2])
		, m30(m[3])
		, m01(m[4])
		, m11(m[5])
		, m21(m[6])
		, m31(m[7])
		, m02(m[8])
		, m12(m[9])
		, m22(m[10])
		, m32(m[11])
		, m03(m[12])
		, m13(m[13])
		, m23(m[14])
		, m33(m[15])
	{
	}
	mat4(const mat3 &m, const vec3 &v);
	mat4(const quat &q, const vec3 &v);
	mat4(const vec4 &col0, const vec4 &col1, const vec4 &col2, const vec4 &col3);

	UNIGINE_INLINE mat4 &operator=(const mat4 &m)
	{
#ifdef USE_SSE
		sse(m.sse0(), m.sse1(), m.sse2(), m.sse3());
#else
		m00 = m.m00;
		m01 = m.m01;
		m02 = m.m02;
		m03 = m.m03;
		m10 = m.m10;
		m11 = m.m11;
		m12 = m.m12;
		m13 = m.m13;
		m20 = m.m20;
		m21 = m.m21;
		m22 = m.m22;
		m23 = m.m23;
		m30 = m.m30;
		m31 = m.m31;
		m32 = m.m32;
		m33 = m.m33;
#endif
		return *this;
	}

	mat4 operator-() const;
	mat4 &operator*=(float v);
	mat4 &operator*=(const mat4 &m);
	mat4 &operator+=(const mat4 &m);
	mat4 &operator-=(const mat4 &m);

	UNIGINE_INLINE operator float *() { return mat; }
	UNIGINE_INLINE operator const float *() const { return mat; }
	UNIGINE_INLINE operator void *() { return mat; }
	UNIGINE_INLINE operator const void *() const { return mat; }
	UNIGINE_INLINE float &operator[](int i)
	{
		assert((unsigned int)i < 16 && "mat4::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		assert((unsigned int)i < 16 && "mat4::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE void set(int row, int column, float v)
	{
		assert((unsigned int)row < 4 && "mat4::set(): bad row");
		assert((unsigned int)column < 4 && "mat4::set(): bad column");
		mat[column * 4 + row] = v;
	}

	UNIGINE_INLINE float &get(int row, int column)
	{
		assert((unsigned int)row < 4 && "mat4::get(): bad row");
		assert((unsigned int)column < 4 && "mat4::get(): bad column");
		return mat[column * 4 + row];
	}

	UNIGINE_INLINE float get(int row, int column) const
	{
		assert((unsigned int)row < 4 && "mat4::get(): bad row");
		assert((unsigned int)column < 4 && "mat4::get(): bad column");
		return mat[column * 4 + row];
	}

	void set(const mat2 &m);
	void set(const mat3 &m);
	void set(const mat4 &m);
	void set(const dmat4 &m);
	void set(const quat &q);
	void set(const float *m, int transpose = 0);
	void set(const mat3 &m, const vec3 &v);
	void set(const quat &q, const vec3 &v);
	void get(float *m, int transpose = 0) const;
	UNIGINE_INLINE float *get() { return mat; }
	UNIGINE_INLINE const float *get() const { return mat; }
	void setRow(int row, const vec4 &v);
	void setRow3(int row, const vec3 &v);
	vec4 getRow(int row) const;
	vec3 getRow3(int row) const;

	void setColumn(int column, const vec4 &v);
	void setColumn3(int column, const vec3 &v);
	vec4 getColumn(int column) const;
	vec3 getColumn3(int column) const;

	UNIGINE_INLINE vec3 getAxisX() const { return getColumn3(0).normalize(); }
	UNIGINE_INLINE vec3 getAxisY() const { return getColumn3(1).normalize(); }
	UNIGINE_INLINE vec3 getAxisZ() const { return getColumn3(2).normalize(); }

	void setDiagonal(const vec4 &v);
	vec4 getDiagonal() const;

	void setZero();
	void setIdentity();
	void setTranslate(const vec3 &v);
	vec3 getTranslate() const;
	void setRotate(const vec3 &axis, float angle);
	quat getRotate() const;
	void setRotateX(float angle);
	void setRotateY(float angle);
	void setRotateZ(float angle);
	void setScale(const vec3 &v);
	vec3 getScale() const;

#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse0() const
	{
		return _mm_loadu_ps((float *)&sse_data.col0);
	}

	UNIGINE_INLINE __m128 sse1() const
	{
		return _mm_loadu_ps((float *)&sse_data.col1);
	}

	UNIGINE_INLINE __m128 sse2() const
	{
		return _mm_loadu_ps((float *)&sse_data.col2);
	}

	UNIGINE_INLINE __m128 sse3() const
	{
		return _mm_loadu_ps((float *)&sse_data.col3);
	}

	UNIGINE_INLINE void sse0(const __m128 &v)
	{
		_mm_storeu_ps((float *)&sse_data.col0, v);
	}

	UNIGINE_INLINE void sse1(const __m128 &v)
	{
		_mm_storeu_ps((float *)&sse_data.col1, v);
	}

	UNIGINE_INLINE void sse2(const __m128 &v)
	{
		_mm_storeu_ps((float *)&sse_data.col2, v);
	}

	UNIGINE_INLINE void sse3(const __m128 &v)
	{
		_mm_storeu_ps((float *)&sse_data.col3, v);
	}

	UNIGINE_INLINE void sse(const __m128 &v0, const __m128 &v1, const __m128 &v2, const __m128 &v3)
	{
		sse0(v0);
		sse1(v1);
		sse2(v2);
		sse3(v3);
	}
#endif

	union
	{
		struct
		{
			float m00, m10, m20, m30;
			float m01, m11, m21, m31;
			float m02, m12, m22, m32;
			float m03, m13, m23, m33;
		};
		float mat[16];
	#ifdef USE_SSE
		struct
		{
			__m128 col0; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128 col1; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128 col2; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128 col3; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
		} sse_data;
	#endif
	};

	// deprecated, use new style constants below instead
	static const mat4 ZERO;
	static const mat4 ONE;
	static const mat4 IDENTITY;
};

constexpr float mat4_identity_values[16] = {
	1.0f, 0.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 0.0f, 1.0f,
};

// TODO: make constexrp when compiler is updated
static const mat4 mat4_zero(0.0);
static const mat4 mat4_one(1.0);
static const mat4 mat4_identity(mat4_identity_values);

UNIGINE_API int operator==(const mat4 &m0, const mat4 &m1);
UNIGINE_API int operator!=(const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 operator*(const mat4 &m, float v);
UNIGINE_API vec2 operator*(const mat4 &m, const vec2 &v);
UNIGINE_API vec2 operator*(const vec2 &v, const mat4 &m);
UNIGINE_API vec3 operator*(const mat4 &m, const vec3 &v);
UNIGINE_API vec3 operator*(const vec3 &v, const mat4 &m);
UNIGINE_API vec4 operator*(const mat4 &m, const vec4 &v);
UNIGINE_API vec4 operator*(const vec4 &v, const mat4 &m);
UNIGINE_API dvec2 operator*(const mat4 &m, const dvec2 &v);
UNIGINE_API dvec2 operator*(const dvec2 &v, const mat4 &m);
UNIGINE_API dvec3 operator*(const mat4 &m, const dvec3 &v);
UNIGINE_API dvec3 operator*(const dvec3 &v, const mat4 &m);
UNIGINE_API dvec4 operator*(const mat4 &m, const dvec4 &v);
UNIGINE_API dvec4 operator*(const dvec4 &v, const mat4 &m);
UNIGINE_API mat4 operator*(const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 operator+(const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 operator-(const mat4 &m0, const mat4 &m1);

UNIGINE_API int compare(const mat4 &m0, const mat4 &m1);
UNIGINE_API int compare(const mat4 &m0, const mat4 &m1, float epsilon);
UNIGINE_API float trace(const mat4 &m);
UNIGINE_API float determinant(const mat4 &m);
UNIGINE_API float determinant3(const mat4 &m);
UNIGINE_API mat4 &mul(mat4 &ret, const mat4 &m, float v);
UNIGINE_API vec2 &mul(vec2 &ret, const mat4 &m, const vec2 &v);
UNIGINE_API vec2 &mul(vec2 &ret, const vec2 &v, const mat4 &m);
UNIGINE_API vec3 &mul(vec3 &ret, const mat4 &m, const vec3 &v);
UNIGINE_API vec3 &mul(vec3 &ret, const vec3 &v, const mat4 &m);
UNIGINE_API vec4 &mul(vec4 &ret, const mat4 &m, const vec4 &v);
UNIGINE_API vec4 &mul(vec4 &ret, const vec4 &v, const mat4 &m);

UNIGINE_API dvec2 &mul(dvec2 &ret, const mat4 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul(dvec2 &ret, const dvec2 &v, const mat4 &m);
UNIGINE_API dvec3 &mul(dvec3 &ret, const mat4 &m, const dvec3 &v);
UNIGINE_API dvec3 &mul(dvec3 &ret, const dvec3 &v, const mat4 &m);
UNIGINE_API dvec4 &mul(dvec4 &ret, const mat4 &m, const dvec4 &v);
UNIGINE_API dvec4 &mul(dvec4 &ret, const dvec4 &v, const mat4 &m);

UNIGINE_API vec2 &mul3(vec2 &ret, const mat4 &m, const vec2 &v);
UNIGINE_API vec2 &mul3(vec2 &ret, const vec2 &v, const mat4 &m);
UNIGINE_API vec3 &mul3(vec3 &ret, const mat4 &m, const vec3 &v);
UNIGINE_API vec3 &mul3(vec3 &ret, const vec3 &v, const mat4 &m);
UNIGINE_API vec4 &mul3(vec4 &ret, const mat4 &m, const vec4 &v);
UNIGINE_API vec4 &mul3(vec4 &ret, const vec4 &v, const mat4 &m);

UNIGINE_API dvec2 &mul3(dvec2 &ret, const mat4 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul3(dvec2 &ret, const dvec2 &v, const mat4 &m);
UNIGINE_API dvec3 &mul3(dvec3 &ret, const mat4 &m, const dvec3 &v);
UNIGINE_API dvec3 &mul3(dvec3 &ret, const dvec3 &v, const mat4 &m);
UNIGINE_API dvec4 &mul3(dvec4 &ret, const mat4 &m, const dvec4 &v);
UNIGINE_API dvec4 &mul3(dvec4 &ret, const dvec4 &v, const mat4 &m);

UNIGINE_API mat4 &mul(mat4 &ret, const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 &mul4(mat4 &ret, const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 &mul3(mat4 &ret, const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 &mult(mat4 &ret, const mat4 &m, const vec3 &v);
UNIGINE_API vec3 &proj(vec3 &ret, const mat4 &m, const vec3 &v);
UNIGINE_API vec4 &proj(vec4 &ret, const mat4 &m, const vec4 &v);
UNIGINE_API dvec3 &proj(dvec3 &ret, const mat4 &m, const dvec3 &v);
UNIGINE_API dvec4 &proj(dvec4 &ret, const mat4 &m, const dvec4 &v);
UNIGINE_API mat4 &add(mat4 &ret, const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 &sub(mat4 &ret, const mat4 &m0, const mat4 &m1);
UNIGINE_API mat4 &orthonormalize(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &rotation(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &transpose(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &transpose3(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &inverse(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &inverse4(mat4 &ret, const mat4 &m);
UNIGINE_API mat4 &lerp(mat4 &ret, const mat4 &m0, const mat4 &q1, float k);

UNIGINE_API mat4 orthonormalize(const mat4 &m);
UNIGINE_API mat4 rotation(const mat4 &m);
UNIGINE_API mat4 transpose(const mat4 &m);
UNIGINE_API mat4 transpose3(const mat4 &m);
UNIGINE_API mat4 inverse(const mat4 &m);
UNIGINE_API mat4 inverse4(const mat4 &m);
UNIGINE_API mat4 lerp(const mat4 &m0, const mat4 &q1, float k);

UNIGINE_API mat4 translate(const vec2 &v);
UNIGINE_API mat4 translate(const vec3 &v);
UNIGINE_API mat4 translate(const vec4 &v);
UNIGINE_API mat4 translate(float x, float y = 0.0f, float z = 0.0f);
UNIGINE_API mat4 rotate(const vec3 &axis, float angle);
UNIGINE_API mat4 rotate(float x, float y, float z, float angle);
UNIGINE_API mat4 rotate(const quat &q);
UNIGINE_API mat4 rotateX(float angle);
UNIGINE_API mat4 rotateY(float angle);
UNIGINE_API mat4 rotateZ(float angle);
UNIGINE_API mat4 scale(const vec3 &v);
UNIGINE_API mat4 scale(float x, float y, float z);
UNIGINE_API mat4 scale(float x);

UNIGINE_API mat4 reflect(const vec4 &plane);
UNIGINE_API mat4 ortho(float left, float right, float bottom, float top, float znear, float zfar);
UNIGINE_API mat4 frustum(float left, float right, float bottom, float top, float znear, float zfar);
UNIGINE_API mat4 perspective(float fov, float aspect, float znear, float zfar);
UNIGINE_API mat4 setTo(const vec3 &position, const vec3 &target, const vec3 &up, int axis = AXIS_NZ);
UNIGINE_API mat4 lookAt(const vec3 &position, const vec3 &target, const vec3 &up, int axis = AXIS_NZ);
UNIGINE_API mat4 obliqueProjection(const mat4 &projection, const vec4 &plane);
UNIGINE_API mat4 reverseDepthProjection(const mat4 &projection);
UNIGINE_API mat4 symmetryProjection(const mat4 &projection);
UNIGINE_API const mat4 &cubeTransform(int face);

UNIGINE_API void decomposeTransform(const mat4 &m, vec4 &position, quat &rot);
UNIGINE_API mat4 &composeTransform(mat4 &ret, const vec4 &position, const quat &rot);
UNIGINE_API void decomposeTransform(const mat4 &m, vec3 &position, quat &rot, vec3 &scale);
UNIGINE_API mat4 &composeTransform(mat4 &ret, const vec3 &position, const quat &rot, const vec3 &scale);
UNIGINE_API vec3 decomposeRotationXYZ(const mat3 &t);
UNIGINE_API vec3 decomposeRotationXZY(const mat3 &t);
UNIGINE_API vec3 decomposeRotationYXZ(const mat3 &t);
UNIGINE_API vec3 decomposeRotationYZX(const mat3 &t);
UNIGINE_API vec3 decomposeRotationZXY(const mat3 &t);
UNIGINE_API vec3 decomposeRotationZYX(const mat3 &t);
UNIGINE_API mat4 composeRotationXYZ(const vec3 &r);
UNIGINE_API mat4 composeRotationXZY(const vec3 &r);
UNIGINE_API mat4 composeRotationYXZ(const vec3 &r);
UNIGINE_API mat4 composeRotationYZX(const vec3 &r);
UNIGINE_API mat4 composeRotationZXY(const vec3 &r);
UNIGINE_API mat4 composeRotationZYX(const vec3 &r);
UNIGINE_API void decomposeProjection(const mat4 &projection, float &znear, float &zfar);

//////////////////////////////////////////////////////////////////////////
// dmat4, 3x4 double matrix
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API dmat4
{
	dmat4();
	dmat4(const dmat4 &m);
	explicit dmat4(double v)
		: m00(v)
		, m10(v)
		, m20(v)
		, m01(v)
		, m11(v)
		, m21(v)
		, m02(v)
		, m12(v)
		, m22(v)
		, m03(v)
		, m13(v)
		, m23(v)
	{
	}
	explicit dmat4(const mat2 &m);
	explicit dmat4(const mat3 &m);
	explicit dmat4(const mat4 &m);
	explicit dmat4(const quat &q);
	explicit dmat4(const double *m, int transpose = 0);
	explicit dmat4(const float *m, int transpose);
	explicit dmat4(const float *m)
		: m00(m[0])
		, m10(m[1])
		, m20(m[2])
		, m01(m[4])
		, m11(m[5])
		, m21(m[6])
		, m02(m[8])
		, m12(m[9])
		, m22(m[10])
		, m03(m[12])
		, m13(m[13])
		, m23(m[14])
	{
	}
	explicit dmat4(const mat3 &m, const dvec3 &v);
	explicit dmat4(const quat &q, const dvec3 &v);
	explicit dmat4(const dvec3 &col0, const dvec3 &col1, const dvec3 &col2, const dvec3 &col3);

	UNIGINE_INLINE dmat4 &operator=(const dmat4 &m)
	{
#ifdef USE_SSE2
		sse0(m.sse0());
		sse1(m.sse1());
		sse2(m.sse2());
		sse3(m.sse3());
		sse4(m.sse4());
		sse5(m.sse5());
#else
		m00 = m.m00;
		m10 = m.m10;
		m20 = m.m20;
		m01 = m.m01;
		m11 = m.m11;
		m21 = m.m21;
		m02 = m.m02;
		m12 = m.m12;
		m22 = m.m22;
		m03 = m.m03;
		m13 = m.m13;
		m23 = m.m23;
#endif
		return *this;
	}

	dmat4 operator-() const;
	dmat4 &operator*=(double v);
	dmat4 &operator*=(const dmat4 &m);
	dmat4 &operator+=(const dmat4 &m);
	dmat4 &operator-=(const dmat4 &m);

	UNIGINE_INLINE operator double *() { return mat; }
	UNIGINE_INLINE operator const double *() const { return mat; }
	UNIGINE_INLINE operator void *() { return mat; }
	UNIGINE_INLINE operator const void *() const { return mat; }
	UNIGINE_INLINE double &operator[](int i)
	{
		assert((unsigned int)i < 12 && "dmat4::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE double operator[](int i) const
	{
		assert((unsigned int)i < 12 && "dmat4::operator[](): bad index");
		return mat[i];
	}

	UNIGINE_INLINE void set(int row, int column, double v)
	{
		assert((unsigned int)row < 3 && "dmat4::set(): bad row");
		assert((unsigned int)column < 4 && "dmat4::set(): bad column");
		mat[column * 3 + row] = v;
	}

	UNIGINE_INLINE double &get(int row, int column)
	{
		assert((unsigned int)row < 3 && "dmat4::get(): bad row");
		assert((unsigned int)column < 4 && "dmat4::get(): bad column");
		return mat[column * 3 + row];
	}

	UNIGINE_INLINE double get(int row, int column) const
	{
		assert((unsigned int)row < 3 && "dmat4::get(): bad row");
		assert((unsigned int)column < 4 && "dmat4::get(): bad column");
		return mat[column * 3 + row];
	}

	void set(const mat2 &m);
	void set(const mat3 &m);
	void set(const mat4 &m);
	void set(const dmat4 &m);
	void set(const quat &q);
	void set(const double *v, int transpose = 0);
	void set(const float *v, int transpose = 0);
	void set(const mat3 &m, const dvec3 &v);
	void set(const quat &q, const dvec3 &v);
	void get(double *m, int transpose = 0) const;
	UNIGINE_INLINE double *get() { return mat; }
	UNIGINE_INLINE const double *get() const { return mat; }
	void setRow(int row, const dvec4 &v);
	void setRow3(int row, const dvec3 &v);
	dvec4 getRow(int row) const;
	dvec3 getRow3(int row) const;

	void setColumn(int column, const dvec4 &v);
	void setColumn3(int column, const dvec3 &v);
	dvec4 getColumn(int column) const;
	dvec3 getColumn3(int column) const;

	UNIGINE_INLINE dvec3 getAxisX() const { return getColumn3(0).normalize(); }
	UNIGINE_INLINE dvec3 getAxisY() const { return getColumn3(1).normalize(); }
	UNIGINE_INLINE dvec3 getAxisZ() const { return getColumn3(2).normalize(); }

	void setZero();
	void setIdentity();
	void setTranslate(const dvec3 &v);
	dvec3 getTranslate() const;
	void setRotate(const dvec3 &axis, double angle);
	quat getRotate() const;
	void setRotateX(double angle);
	void setRotateY(double angle);
	void setRotateZ(double angle);
	void setScale(const dvec3 &v);
	vec3 getScale() const;

#ifdef USE_SSE
	UNIGINE_INLINE __m128d sse0() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col0);
		return *(__m128d *)&x;
	}

	UNIGINE_INLINE __m128d sse1() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col1);
		return *(__m128d *)&x;;
	}

	UNIGINE_INLINE __m128d sse2() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col2);
		return *(__m128d *)&x;
	}

	UNIGINE_INLINE __m128d sse3() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col3);
		return *(__m128d *)&x;
	}

	UNIGINE_INLINE __m128d sse4() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col4);
		return *(__m128d *)&x;
	}

	UNIGINE_INLINE __m128d sse5() const
	{
		__m128 x = _mm_loadu_ps((float *)&sse_data.col5);
		return *(__m128d *)&x;
	}

	UNIGINE_INLINE void sse0(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col0, *(__m128 *)&v);
	}

	UNIGINE_INLINE void sse1(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col1, *(__m128 *)&v);
	}

	UNIGINE_INLINE void sse2(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col2, *(__m128 *)&v);
	}

	UNIGINE_INLINE void sse3(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col3, *(__m128 *)&v);
	}

	UNIGINE_INLINE void sse4(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col4, *(__m128 *)&v);
	}

	UNIGINE_INLINE void sse5(const __m128d &v)
	{
		_mm_storeu_ps((float *)&sse_data.col5, *(__m128 *)&v);
	}
#endif

	union
	{
		struct
		{
			double m00, m10, m20;
			double m01, m11, m21;
			double m02, m12, m22;
			double m03, m13, m23;
		};
		double mat[12];
	#ifdef USE_SSE2
		struct
		{
			__m128d col0; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d col1; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d col2; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d col3; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d col4; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
			__m128d col5; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
		} sse_data;
	#endif
	};


	// deprecated, use new style constants below instead
	static const dmat4 ZERO;
	static const dmat4 ONE;
	static const dmat4 IDENTITY;
};

static const dmat4 dmat4_zero(0.0);
static const dmat4 dmat4_one(1.0);
static const dmat4 dmat4_identity(mat4_identity_values);

UNIGINE_API int operator==(const dmat4 &m0, const dmat4 &m1);
UNIGINE_API int operator!=(const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 operator*(const dmat4 &m, double v);
UNIGINE_API vec2 operator*(const dmat4 &m, const vec2 &v);
UNIGINE_API vec2 operator*(const vec2 &v, const dmat4 &m);
UNIGINE_API vec3 operator*(const dmat4 &m, const vec3 &v);
UNIGINE_API vec3 operator*(const vec3 &v, const dmat4 &m);
UNIGINE_API vec4 operator*(const dmat4 &m, const vec4 &v);
UNIGINE_API vec4 operator*(const vec4 &v, const dmat4 &m);
UNIGINE_API dvec2 operator*(const dmat4 &m, const dvec2 &v);
UNIGINE_API dvec2 operator*(const dvec2 &v, const dmat4 &m);
UNIGINE_API dvec3 operator*(const dmat4 &m, const dvec3 &v);
UNIGINE_API dvec3 operator*(const dvec3 &v, const dmat4 &m);
UNIGINE_API dvec4 operator*(const dmat4 &m, const dvec4 &v);
UNIGINE_API dvec4 operator*(const dvec4 &v, const dmat4 &m);
UNIGINE_API dmat4 operator*(const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 operator+(const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 operator-(const dmat4 &m0, const dmat4 &m1);

UNIGINE_API int compare(const dmat4 &m0, const dmat4 &m1);
UNIGINE_API int compare(const dmat4 &m0, const dmat4 &m1, double epsilon);
UNIGINE_API double determinant(const dmat4 &m);
UNIGINE_API dmat4 &mul(dmat4 &ret, const dmat4 &m, double v);
UNIGINE_API vec2 &mul(vec2 &ret, const dmat4 &m, const vec2 &v);
UNIGINE_API vec2 &mul(vec2 &ret, const vec2 &v, const dmat4 &m);
UNIGINE_API vec3 &mul(vec3 &ret, const dmat4 &m, const vec3 &v);
UNIGINE_API vec3 &mul(vec3 &ret, const vec3 &v, const dmat4 &m);
UNIGINE_API vec4 &mul(vec4 &ret, const dmat4 &m, const vec4 &v);
UNIGINE_API vec4 &mul(vec4 &ret, const vec4 &v, const dmat4 &m);
UNIGINE_API vec2 &mul(vec2 &ret, const dmat4 &m, const dvec2 &v);
UNIGINE_API vec2 &mul(vec2 &ret, const dvec2 &v, const dmat4 &m);
UNIGINE_API vec3 &mul(vec3 &ret, const dmat4 &m, const dvec3 &v);
UNIGINE_API vec3 &mul(vec3 &ret, const dvec3 &v, const dmat4 &m);
UNIGINE_API vec4 &mul(vec4 &ret, const dmat4 &m, const dvec4 &v);
UNIGINE_API vec4 &mul(vec4 &ret, const dvec4 &v, const dmat4 &m);
UNIGINE_API dvec2 &mul(dvec2 &ret, const dmat4 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul(dvec2 &ret, const dvec2 &v, const dmat4 &m);
UNIGINE_API dvec3 &mul(dvec3 &ret, const dmat4 &m, const dvec3 &v);
UNIGINE_API dvec3 &mul(dvec3 &ret, const dvec3 &v, const dmat4 &m);
UNIGINE_API dvec4 &mul(dvec4 &ret, const dmat4 &m, const dvec4 &v);
UNIGINE_API dvec4 &mul(dvec4 &ret, const dvec4 &v, const dmat4 &m);
UNIGINE_API vec2 &mul3(vec2 &ret, const dmat4 &m, const vec2 &v);
UNIGINE_API vec2 &mul3(vec2 &ret, const vec2 &v, const dmat4 &m);
UNIGINE_API vec3 &mul3(vec3 &ret, const dmat4 &m, const vec3 &v);
UNIGINE_API vec3 &mul3(vec3 &ret, const vec3 &v, const dmat4 &m);
UNIGINE_API vec4 &mul3(vec4 &ret, const dmat4 &m, const vec4 &v);
UNIGINE_API vec4 &mul3(vec4 &ret, const vec4 &v, const dmat4 &m);
UNIGINE_API vec2 &mul3(vec2 &ret, const dmat4 &m, const dvec2 &v);
UNIGINE_API vec2 &mul3(vec2 &ret, const dvec2 &v, const dmat4 &m);
UNIGINE_API vec3 &mul3(vec3 &ret, const dmat4 &m, const dvec3 &v);
UNIGINE_API vec3 &mul3(vec3 &ret, const dvec3 &v, const dmat4 &m);
UNIGINE_API vec4 &mul3(vec4 &ret, const dmat4 &m, const dvec4 &v);
UNIGINE_API vec4 &mul3(vec4 &ret, const dvec4 &v, const dmat4 &m);
UNIGINE_API dvec2 &mul3(dvec2 &ret, const dmat4 &m, const dvec2 &v);
UNIGINE_API dvec2 &mul3(dvec2 &ret, const dvec2 &v, const dmat4 &m);
UNIGINE_API dvec3 &mul3(dvec3 &ret, const dmat4 &m, const dvec3 &v);
UNIGINE_API dvec3 &mul3(dvec3 &ret, const dvec3 &v, const dmat4 &m);
UNIGINE_API dvec4 &mul3(dvec4 &ret, const dmat4 &m, const dvec4 &v);
UNIGINE_API dvec4 &mul3(dvec4 &ret, const dvec4 &v, const dmat4 &m);
UNIGINE_API dmat4 &mul(dmat4 &ret, const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 &mul4(dmat4 &ret, const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 &mul3(dmat4 &ret, const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 &mult(dmat4 &ret, const dmat4 &m, const dvec3 &v);
UNIGINE_API dmat4 &add(dmat4 &ret, const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 &sub(dmat4 &ret, const dmat4 &m0, const dmat4 &m1);
UNIGINE_API dmat4 &orthonormalize(dmat4 &ret, const dmat4 &m);
UNIGINE_API dmat4 &rotation(dmat4 &ret, const dmat4 &m);
UNIGINE_API dmat4 &inverse(dmat4 &ret, const dmat4 &m);
UNIGINE_API dmat4 &inverse4(dmat4 &ret, const dmat4 &m);
UNIGINE_API dmat4 &lerp(dmat4 &ret, const dmat4 &m0, const dmat4 &q1, double k);

UNIGINE_API dmat4 orthonormalize(const dmat4 &m);
UNIGINE_API dmat4 rotation(const dmat4 &m);
UNIGINE_API dmat4 inverse(const dmat4 &m);
UNIGINE_API dmat4 inverse4(const dmat4 &m);
UNIGINE_API dmat4 lerp(const dmat4 &m0, const dmat4 &m1, double k);

UNIGINE_API dmat4 translate(const dvec2 &v);
UNIGINE_API dmat4 translate(const dvec3 &v);
UNIGINE_API dmat4 translate(const dvec4 &v);
UNIGINE_API dmat4 translate(double x, double y = 0.0, double z = 0.0);
UNIGINE_API dmat4 rotate(const dvec3 &axis, double angle);
UNIGINE_API dmat4 rotate(double x, double y, double z, double angle);
UNIGINE_API dmat4 rotateX(double angle);
UNIGINE_API dmat4 rotateY(double angle);
UNIGINE_API dmat4 rotateZ(double angle);
UNIGINE_API dmat4 scale(const dvec3 &v);
UNIGINE_API dmat4 scale(double x, double y, double z);
UNIGINE_API dmat4 scale(double x);

UNIGINE_API dmat4 reflect(const dvec4 &plane);
UNIGINE_API dmat4 setTo(const dvec3 &position, const dvec3 &target, const vec3 &up, int axis = AXIS_NZ);
UNIGINE_API dmat4 lookAt(const dvec3 &position, const dvec3 &target, const vec3 &up, int axis = AXIS_NZ);

UNIGINE_API void decomposeTransform(const dmat4 &m, dvec3 &position, quat &rot, vec3 &scale);
UNIGINE_API dmat4 &composeTransform(dmat4 &ret, const dvec3 &position, const quat &rot, const vec3 &scale);

//////////////////////////////////////////////////////////////////////////
// quat, Quaternion
//////////////////////////////////////////////////////////////////////////

UNIGINE_ALIGNED16(struct)
UNIGINE_API quat
{
	UNIGINE_INLINE quat() : x(0.0f), y(0.0f), z(0.0f), w(1.0f) {}

	// non-constexpr vec4 workaround constructor
	struct RawValuesTag {};
	constexpr UNIGINE_INLINE quat(float x_, float y_, float z_, float w_, RawValuesTag) : x(x_), y(y_), z(z_), w(w_) {}

	quat(const vec3 &axis, float angle);
	quat(float x, float y, float z, float angle);
	quat(float angle_x, float angle_y, float angle_z);
	quat(const vec3 &col0, const vec3 &col1, const vec3 &col2);
	explicit UNIGINE_INLINE quat(const float *q)
		: x(q[0])
		, y(q[1])
		, z(q[2])
		, w(q[3])
	{
	}

	explicit UNIGINE_INLINE quat(const vec3 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(0.0f)
	{
	}

	explicit UNIGINE_INLINE quat(const vec4 &v)
		: x(v.x)
		, y(v.y)
		, z(v.z)
		, w(v.w)
	{
	}

	explicit quat(const mat3 &m);
	explicit quat(const mat4 &m);
	explicit quat(const dmat4 &m);

#ifdef USE_SSE
	UNIGINE_INLINE quat(const quat &q)
	{
		sse(q.sse());
	}

	UNIGINE_INLINE quat(const __m128 &v)
	{
		sse(v);
	}
#else
	UNIGINE_INLINE quat(const quat &q)
		: x(q.x)
		, y(q.y)
		, z(q.z)
		, w(q.w)
	{
	}
#endif

#ifdef USE_SSE
	UNIGINE_INLINE operator __m128() const
	{
		return sse();
	}

	UNIGINE_INLINE quat &operator=(const __m128 &v)
	{
		sse(v);
		return *this;
	}
#endif

	UNIGINE_INLINE quat &operator=(const quat &qq)
	{
#ifdef USE_SSE
		sse(qq.sse());
#else
		x = qq.x;
		y = qq.y;
		z = qq.z;
		w = qq.w;
#endif
		return *this;
	}

	quat operator-() const;
	quat &operator*=(float v);
	quat &operator*=(const quat &q);
	quat &operator+=(const quat &q);
	quat &operator-=(const quat &q);

	UNIGINE_INLINE operator float *() { return q; }
	UNIGINE_INLINE operator const float *() const { return q; }
	UNIGINE_INLINE operator void *() { return q; }
	UNIGINE_INLINE operator const void *() const { return q; }
	UNIGINE_INLINE float &operator[](int i)
	{
		assert((unsigned int)i < 4 && "quat::operator[](): bad index");
		return q[i];
	}

	UNIGINE_INLINE float operator[](int i) const
	{
		assert((unsigned int)i < 4 && "quat::operator[](): bad index");
		return q[i];
	}

	void set(const vec3 &v);
	void set(const mat3 &m);
	void set(const mat4 &m);
	void set(const dmat4 &m);
	void set(const vec3 &axis, float angle);
	void set(float x, float y, float z, float angle);
	void set(float angle_x, float angle_y, float angle_z);
	void set(const vec3 &col0, const vec3 &col1, const vec3 &col2);
	void get(vec3 &axis, float &angle) const;

	UNIGINE_INLINE void set(const float *qq)
	{
		x = qq[0];
		y = qq[1];
		z = qq[2];
		w = qq[3];
	}

	UNIGINE_INLINE void get(float *qq) const
	{
		qq[0] = x;
		qq[1] = y;
		qq[2] = z;
		qq[3] = w;
	}

	UNIGINE_INLINE float *get() { return q; }
	UNIGINE_INLINE const float *get() const { return q; }
	mat3 getMat3() const;
	vec3 getNormal() const;
	vec3 getTangent() const;
	vec4 getTangent4() const;
	vec3 getBinormal() const;
	float getAngle(const vec3 &axis) const;

	UNIGINE_INLINE quat &normalize()
	{
		float ilength = Math::rsqrt(x * x + y * y + z * z + w * w);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE quat &normalizeValid()
	{
		float length = x * x + y * y + z * z + w * w;
		if(length == 0.0f)
			return *this;
		float ilength = Math::rsqrt(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE quat &normalizeFast()
	{
		float ilength = Math::rsqrtFast(x * x + y * y + z * z + w * w);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}

	UNIGINE_INLINE quat &normalizeValidFast()
	{
		float length = x * x + y * y + z * z + w * w;
		if (length == 0.0f)
			return *this;
		float ilength = Math::rsqrtFast(length);
		x *= ilength;
		y *= ilength;
		z *= ilength;
		w *= ilength;
		return *this;
	}


#ifdef USE_SSE
	UNIGINE_INLINE __m128 sse() const
	{
		return _mm_loadu_ps((float *)&vec);
	}

	UNIGINE_INLINE void sse(const __m128 &v)
	{
		_mm_storeu_ps((float *)&vec, v);
	}
#endif

	union
	{
		struct
		{
			float x, y, z, w;
		};
		float q[4];
#ifdef USE_SSE
		__m128 vec; // DO NOT TOUCH UNLESS ABSOLUTELY SURE
#endif
	};

	// deprecated, use new style constants below instead
	static const quat ZERO;
	static const quat IDENTITY;
};

constexpr quat quat_zero(0.0f, 0.0f, 0.0f, 0.0f, quat::RawValuesTag{});
constexpr quat quat_identity(0.0f, 0.0f, 0.0f, 1.0f, quat::RawValuesTag{});

#ifdef USE_SSE
UNIGINE_INLINE vec4::vec4(const quat &q)
{
	sse(q.sse());
}
#else
UNIGINE_INLINE vec4::vec4(const quat &q)
	: x(q.x)
	, y(q.y)
	, z(q.z)
	, w(q.w)
{
}
#endif

UNIGINE_INLINE void vec4::set(const quat &q)
{
#ifdef USE_SSE
	sse(q.sse());
#else
	x = q.x;
	y = q.y;
	z = q.z;
	w = q.w;
#endif
}

UNIGINE_API int operator==(const quat &q0, const quat &q1);
UNIGINE_API int operator!=(const quat &q0, const quat &q1);
UNIGINE_API quat operator*(const quat &q, float v);
UNIGINE_API vec3 operator*(const quat &q, const vec3 &v);
UNIGINE_API vec3 operator*(const vec3 &v, const quat &q);
UNIGINE_API dvec3 operator*(const quat &q, const dvec3 &v);
UNIGINE_API dvec3 operator*(const dvec3 &v, const quat &q);
UNIGINE_API quat operator*(const quat &q0, const quat &q1);
UNIGINE_API quat operator+(const quat &q0, const quat &q1);
UNIGINE_API quat operator-(const quat &q0, const quat &q1);
UNIGINE_API quat operator/(const quat &q0, const quat &q1);

UNIGINE_INLINE int compare(const quat &q0, const quat &q1)
{
	return (compare(q0.x, q1.x) && compare(q0.y, q1.y) && compare(q0.z, q1.z) && compare(q0.w, q1.w));
}

UNIGINE_INLINE int compare(const quat &q0, const quat &q1, float epsilon)
{
	return (compare(q0.x, q1.x, epsilon) && compare(q0.y, q1.y, epsilon) && compare(q0.z, q1.z, epsilon) && compare(q0.w, q1.w, epsilon));
}

UNIGINE_INLINE float dot(const quat &q0, const quat &q1)
{
	return q0.x * q1.x + q0.y * q1.y + q0.z * q1.z + q0.w * q1.w;
}

UNIGINE_INLINE quat &mul(quat &ret, const quat &q, float v)
{
	ret.x = q.x * v;
	ret.y = q.y * v;
	ret.z = q.z * v;
	ret.w = q.w * v;
	return ret;
}

UNIGINE_INLINE quat &mad(quat &ret, const quat &q0, float v, const quat &q1)
{
	ret.x = q0.x * v + q1.x;
	ret.y = q0.y * v + q1.y;
	ret.z = q0.z * v + q1.z;
	ret.w = q0.w * v + q1.w;
	return ret;
}

UNIGINE_INLINE quat &add(quat &ret, const quat &q0, const quat &q1)
{
	ret.x = q0.x + q1.x;
	ret.y = q0.y + q1.y;
	ret.z = q0.z + q1.z;
	ret.w = q0.w + q1.w;
	return ret;
}

UNIGINE_INLINE quat &sub(quat &ret, const quat &q0, const quat &q1)
{
	ret.x = q0.x - q1.x;
	ret.y = q0.y - q1.y;
	ret.z = q0.z - q1.z;
	ret.w = q0.w - q1.w;
	return ret;
}

UNIGINE_INLINE quat normalize(const quat &q)
{
	quat ret = q;
	return ret.normalize();
}

UNIGINE_INLINE quat normalizeValid(const quat &q)
{
	quat ret = q;
	return ret.normalizeValid();
}

UNIGINE_INLINE quat &inverse(quat &ret, const quat &q)
{
	quat n = normalize(q);
	ret.x = -n.x;
	ret.y = -n.y;
	ret.z = -n.z;
	ret.w = n.w;
	return ret;
}

UNIGINE_INLINE quat &conjugate(quat &ret, const quat &q)
{
	ret.x = -q.x;
	ret.y = -q.y;
	ret.z = -q.z;
	ret.w = q.w;
	return ret;
}

UNIGINE_API vec3 &mul(vec3 &ret, const quat &q, const vec3 &v);
UNIGINE_API vec3 &mul(vec3 &ret, const vec3 &v, const quat &q);
UNIGINE_API dvec3 &mul(dvec3 &ret, const quat &q, const dvec3 &v);
UNIGINE_API dvec3 &mul(dvec3 &ret, const dvec3 &v, const quat &q);
UNIGINE_API quat &mul(quat &ret, const quat &q0, const quat &q1);
UNIGINE_API quat &slerp(quat &ret, const quat &q0, const quat &q1, float k);

UNIGINE_INLINE quat inverse(const quat &q)
{
	quat ret;
	return inverse(ret, q);
}

UNIGINE_INLINE quat conjugate(const quat &q)
{
	quat ret;
	return conjugate(ret, q);
}

UNIGINE_INLINE quat slerp(const quat &q0, const quat &q1, float k)
{
	quat ret;
	return slerp(ret, q0, q1, k);
}

UNIGINE_API void decomposeTransform(const mat4 &m, quat &q0, quat &q1, vec3 &scale);
UNIGINE_API mat4 &composeTransform(mat4 &ret, const quat &q0, const quat &q1, const vec3 &scale);

//////////////////////////////////////////////////////////////////////////
// Random
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API Random
{
public:
	Random();
	Random(unsigned int seed);
	~Random();

	void setSeed(unsigned int seed) const;
	unsigned int getSeed() const;

	enum
	{
		A = 1664525,
		C = 1013904223,
		MAX_RANDOM = 0x7fffffff,
	};

	unsigned int get() const
	{
		seed = (unsigned int)((unsigned long long)seed * A + C) & MAX_RANDOM;
		return seed;
	}

	int getInt(int from, int to) const;
	float getFloat(float from, float to) const;
	double getDouble(double from, double to) const;

	vec4 getColor() const
	{
		vec4 color;
		color.x = getFloat(0.0f, 1.0f);
		color.y = getFloat(0.0f, 1.0f);
		color.z = getFloat(0.0f, 1.0f);
		color /= max(color.xyz.max(), Consts::EPS);
		color.w = 1.0f;
		return color;
	}
	
	vec3 getDir() const
	{
		vec3 dir;
		dir.x = getFloat(0.0f, 1.0f);
		dir.y = getFloat(0.0f, 1.0f);
		dir.z = getFloat(0.0f, 1.0f);
		return dir.normalize();
	}

private:
	mutable unsigned int seed;
};

//////////////////////////////////////////////////////////////////////////

UNIGINE_INLINE float srgb(float x) { return pow(x, 2.2f); }
UNIGINE_INLINE vec2 srgb(const vec2 &color) { return vec2(srgb(color.x), srgb(color.y)); }
UNIGINE_INLINE vec3 srgb(const vec3 &color) { return vec3(srgb(color.x), srgb(color.y), srgb(color.z)); }
UNIGINE_INLINE vec4 srgb(const vec4 &color) { return vec4(srgb(color.x), srgb(color.y), srgb(color.z), srgb(color.w)); }
UNIGINE_INLINE vec4 srgbColor(const vec4 &color) { return vec4(srgb(color.x), srgb(color.y), srgb(color.z), color.w); }

UNIGINE_INLINE float isrgb(float x) { return pow(x, 1.0f / 2.2f); }
UNIGINE_INLINE vec2 isrgb(const vec2 &color) { return vec2(isrgb(color.x), isrgb(color.y)); }
UNIGINE_INLINE vec3 isrgb(const vec3 &color) { return vec3(isrgb(color.x), isrgb(color.y), isrgb(color.z)); }
UNIGINE_INLINE vec4 isrgb(const vec4 &color) { return vec4(isrgb(color.x), isrgb(color.y), isrgb(color.z), isrgb(color.w)); }
UNIGINE_INLINE vec4 isrgbColor(const vec4 &color) { return vec4(isrgb(color.x), isrgb(color.y), isrgb(color.z), color.w); }

UNIGINE_API float getAngle(const quat &q0, const quat &q1);
UNIGINE_API float getAngle(const vec3 &v0, const vec3 &v1);
UNIGINE_API float getAngle(const vec3 &v0, const vec3 &v1, const vec3 &up);

UNIGINE_API quat rotateTowards(const quat &source, const quat &target, float max_angle);
UNIGINE_API vec3 rotateTowards(const vec3 &source, const vec3 &target, float max_angle);

UNIGINE_API quat rotationFromDir(const vec3 &forward);
UNIGINE_API quat rotationFromDir(const vec3 &forward, const vec3 &up);

UNIGINE_API float gradient4(float x, const vec4 &keys);

UNIGINE_API vec4 overlay(vec4 a, vec4 b, float x);
UNIGINE_API float overlay(float a, float b, float x);

UNIGINE_INLINE double changeRange(double value, const dvec4 &range)
{
	return saturate(value - range.x) / range.y * range.w + range.z;
}

UNIGINE_API vec4 blueNoise(int x, int y);

#ifdef USE_SSE

UNIGINE_INLINE __m128 _mm_rcp_ss_nr(__m128 v)
{
	__m128 iv = _mm_rcp_ss(v);
	iv = _mm_sub_ss(_mm_add_ss(iv, iv), _mm_mul_ss(v, _mm_mul_ss(iv, iv)));
	return _mm_sub_ss(_mm_add_ss(iv, iv), _mm_mul_ss(v, _mm_mul_ss(iv, iv)));
}

UNIGINE_INLINE __m128 _mm_rcp_ps_nr(__m128 v)
{
	__m128 iv = _mm_rcp_ps(v);
	iv = _mm_sub_ps(_mm_add_ps(iv, iv), _mm_mul_ps(v, _mm_mul_ps(iv, iv)));
	return _mm_sub_ps(_mm_add_ps(iv, iv), _mm_mul_ps(v, _mm_mul_ps(iv, iv)));
}

UNIGINE_INLINE __m128 _mm_rsqrt_ss_nr(__m128 v)
{
	__m128 iv = _mm_rsqrt_ss(v);
	__m128 nr = _mm_mul_ss(_mm_mul_ss(v, iv), iv);
	return _mm_mul_ss(_mm_mul_ss(_mm_set1_ps(0.5f), iv), _mm_sub_ss(_mm_set1_ps(3.0f), nr));
}

UNIGINE_INLINE __m128 _mm_rsqrt_ps_nr(__m128 v)
{
	__m128 iv = _mm_rsqrt_ps(v);
	__m128 nr = _mm_mul_ps(_mm_mul_ps(v, iv), iv);
	return _mm_mul_ps(_mm_mul_ps(_mm_set1_ps(0.5f), iv), _mm_sub_ps(_mm_set1_ps(3.0f), nr));
}

UNIGINE_INLINE __m128 _mm_dot33_ps(__m128 v0, __m128 v1)
{
	__m128 v2 = _mm_mul_ps(v0, v1);
	__m128 v3 = _mm_add_ps(v2, _MM_SWIZZLE(v2, Y, X, Y, W));
	return _mm_add_ps(v3, _MM_SWIZZLE(v2, Z, Z, X, W));
}

UNIGINE_INLINE __m128 _mm_dot44_ps(__m128 v0, __m128 v1)
{
	__m128 v2 = _mm_mul_ps(v0, v1);
	v2 = _mm_add_ps(v2, _MM_SWIZZLE(v2, Y, X, W, Z));
	return _mm_add_ps(v2, _MM_SWIZZLE(v2, Z, W, X, Y));
}

UNIGINE_INLINE __m128 _mm_normalize3_ps(__m128 v)
{
	__m128 length2 = _mm_dot33_ps(v, v);
	return _mm_mul_ps(v, _mm_rsqrt_ps_nr(length2));
}

UNIGINE_INLINE __m128 _mm_normalize4_ps(__m128 v)
{
	__m128 length2 = _mm_dot44_ps(v, v);
	return _mm_mul_ps(v, _mm_rsqrt_ps_nr(length2));
}

UNIGINE_INLINE __m128 _mm_cross_ps(__m128 v0, __m128 v1)
{
	__m128 v0_yzxw = _MM_SWIZZLE(v0, Y, Z, X, W);
	__m128 v1_yzxw = _MM_SWIZZLE(v1, Y, Z, X, W);
	__m128 v2 = _mm_sub_ps(_mm_mul_ps(v0, v1_yzxw), _mm_mul_ps(v1, v0_yzxw));
	return _MM_SWIZZLE(v2, Y, Z, X, W);
}

#endif // USE_SSE


template <typename Type>
bool getBit(Type value, int bit) { return (((value) >> (bit)) & 0x01ULL); }

constexpr Vec2 Vec2_zero(0.0f);
constexpr Vec2 Vec2_one(1.0f);
constexpr Vec2 Vec2_eps(Consts::EPS);
constexpr Vec2 Vec2_inf(Consts::INF);

constexpr Vec3 Vec3_zero(0.0f);
constexpr Vec3 Vec3_one(1.0f);
constexpr Vec3 Vec3_eps(Consts::EPS);
constexpr Vec3 Vec3_inf(Consts::INF);
constexpr Vec3 Vec3_up(0.0f, 0.0f, 1.0f);
constexpr Vec3 Vec3_down(0.0f, 0.0f, -1.0f);
constexpr Vec3 Vec3_forward(0.0f, 1.0f, 0.0f);
constexpr Vec3 Vec3_back(0.0f, -1.0f, 0.0f);
constexpr Vec3 Vec3_right(1.0f, 0.0f, 0.0f);
constexpr Vec3 Vec3_left(-1.0f, 0.0f, 0.0f);

constexpr Vec4 Vec4_zero(0.0);
constexpr Vec4 Vec4_one(1.0);
constexpr Vec4 Vec4_eps(Consts::EPS);
constexpr Vec4 Vec4_inf(Consts::INF);

// TODO: make constexrp when compiler is updated
static const Mat4 Mat4_zero(0.0);
static const Mat4 Mat4_one(1.0);
static const Mat4 Mat4_identity(mat4_identity_values);

} // end namespace Math

namespace MathLib
{
using Math::AXIS;
}

} // end namespace Unigine

typedef Unigine::Math::Vec3 UNIGINE_VEC3;
typedef Unigine::Math::Vec4 UNIGINE_VEC4;
typedef Unigine::Math::Mat4 UNIGINE_MAT4;
