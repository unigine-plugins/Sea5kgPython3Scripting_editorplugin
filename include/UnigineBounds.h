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

#include "UnigineMathLib.h"
#include "UnigineGeometry.h"
#include "UnigineVector.h"

#if defined(USE_DOUBLE) || defined(UNIGINE_DOUBLE)
	#define UNIGINE_BOUND_SPHERE	Unigine::WorldBoundSphere
	#define UNIGINE_BOUND_BOX		Unigine::WorldBoundBox
	#define UNIGINE_BOUND_FRUSTUM	Unigine::WorldBoundFrustum
#else
	#define UNIGINE_BOUND_SPHERE	Unigine::BoundSphere
	#define UNIGINE_BOUND_BOX		Unigine::BoundBox
	#define UNIGINE_BOUND_FRUSTUM	Unigine::BoundFrustum
	#define WorldBoundBox BoundBox
	#define WorldBoundSphere BoundSphere
	#define WorldBoundFrustum BoundFrustum
#endif

namespace Unigine
{

class BoundSphere;
class BoundBox;
class BoundFrustum;

//////////////////////////////////////////////////////////////////////////
// BoundSphere
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API BoundSphere
{
public:
	UNIGINE_INLINE BoundSphere() {}
	BoundSphere(const Math::vec3 &center, float radius);
	BoundSphere(const Math::vec3 *points, int num_points, int optimal);
	BoundSphere(const BoundSphere &bs);
	BoundSphere(const BoundSphere &bs, const Math::mat4 &transform);
	explicit BoundSphere(const BoundBox &bb);
	UNIGINE_INLINE BoundSphere &operator=(const BoundSphere &bs) { set(bs); return *this; }

	void clear();

	void set(const Math::vec3 &center, float radius);
	void set(const Math::vec3 *points, int num_points, int optimal);
	void set(const BoundSphere &bs);
	void set(const BoundSphere &bs, const Math::mat4 &transform);
	void set(const BoundBox &bb);

	// transformation
	void setTransform(const Math::mat4 &transform);
	void setTransform(const Math::dmat4 &transform);

	// compare
	int compare(const BoundSphere &bs) const;
	UNIGINE_INLINE int operator==(const BoundSphere &bs) const { return compare(bs); }
	UNIGINE_INLINE int operator!=(const BoundSphere &bs) const { return !compare(bs); }

	// expand
	void expand(const Math::vec3 &point);
	void expand(const Math::vec3 *points, int num_points);
	void expand(const BoundSphere &bs);
	void expand(const BoundBox &bb);

	// radius expand
	void expandRadius(const Math::vec3 &point);
	void expandRadius(const Math::vec3 *points, int num_points);
	void expandRadius(const BoundSphere &bs);
	void expandRadius(const BoundBox &bb);

	// inside points
	int inside(const Math::vec3 &point) const;
	int inside(const Math::vec3 &point, float radius) const;
	int inside(const Math::vec3 &min, const Math::vec3 &max) const;

	int insideValid(const Math::vec3 &point) const;
	int insideValid(const Math::vec3 &point, float radius) const;
	int insideValid(const Math::vec3 &min, const Math::vec3 &max) const;

	// inside bounds
	int inside(const BoundSphere &bs) const;
	int inside(const BoundBox &bb) const;

	int insideValid(const BoundSphere &bs) const;
	int insideValid(const BoundBox &bb) const;

	int insideAll(const BoundSphere &bs) const;
	int insideAll(const BoundBox &bb) const;

	int insideAllValid(const BoundSphere &bs) const;
	int insideAllValid(const BoundBox &bb) const;

	// intersections
	int rayIntersection(const Math::vec3 &point, const Math::vec3 &direction) const;
	int getIntersection(const Math::vec3 &p0, const Math::vec3 &p1) const;

	int rayIntersectionValid(const Math::vec3 &point, const Math::vec3 &direction) const;
	int getIntersectionValid(const Math::vec3 &p0, const Math::vec3 &p1) const;

	// distance
	float distance() const;
	float distance(const Math::vec3 &point) const;

	float distanceValid() const;
	float distanceValid(const Math::vec3 &point) const;

	// parameters
	UNIGINE_INLINE bool isValid() const { return (center.w > 0.0f); }
	UNIGINE_INLINE const Math::vec3 &getCenter() const { return center; }
	UNIGINE_INLINE float getRadius() const { return center.w; }

	static const BoundSphere INF;

private:
	Math::vec3 center{0.0f, 0.0f, 0.0f, -1.0f}; // bounding sphere center and radius
};

BoundSphere operator*(const Math::mat4 &m, const BoundSphere &bs);
BoundSphere operator*(const Math::dmat4 &m, const BoundSphere &bs);

UNIGINE_INLINE int BoundSphere::insideValid(const Math::vec3 &point) const
{
	return (length2(center - point) <= center.w * center.w);
}

UNIGINE_INLINE int BoundSphere::insideValid(const Math::vec3 &point, float radius) const
{
	radius += center.w;
	return (length2(center - point) <= radius * radius);
}

UNIGINE_INLINE int BoundSphere::insideValid(const Math::vec3 &min, const Math::vec3 &max) const
{
#ifdef USE_SSE
	__m128 radius = _MM_SWIZZLE(center.vec, W, W, W, W);
	__m128 direction = _mm_sub_ps(_mm_min_ps(_mm_max_ps(center.vec, min), max), center.vec);
	direction = _mm_sub_ps(Math::_mm_dot33_ps(direction, direction), _mm_mul_ss(radius, radius));
	return ((_mm_movemask_ps(direction) & 0x01) != 0);
#else
	Math::vec3 direction;
	if (min.x > center.x)
		direction.x = min.x - center.x;
	else if (max.x < center.x)
		direction.x = max.x - center.x;
	else
		direction.x = 0.0f;
	if (min.y > center.y)
		direction.y = min.y - center.y;
	else if (max.y < center.y)
		direction.y = max.y - center.y;
	else
		direction.y = 0.0f;
	if (min.z > center.z)
		direction.z = min.z - center.z;
	else if (max.z < center.z)
		direction.z = max.z - center.z;
	else
		direction.z = 0.0f;
	return (direction.length2() < center.w * center.w);
#endif
}

UNIGINE_INLINE int BoundSphere::insideValid(const BoundSphere &bs) const
{
	return insideValid(bs.center, bs.center.w);
}

UNIGINE_INLINE int BoundSphere::insideAllValid(const BoundSphere &bs) const
{
	float radius = center.w - bs.center.w;
	if (radius > 0.0f)
		return (length2(center - bs.center) <= radius * radius);
	return 0;
}

UNIGINE_INLINE int BoundSphere::rayIntersectionValid(const Math::vec3 &point, const Math::vec3 &direction) const
{
	float k = Math::saturate(dot(direction, center - point) / length2(direction));
	return (length2(center - point - direction * k) <= center.w * center.w);
}

UNIGINE_INLINE int BoundSphere::getIntersectionValid(const Math::vec3 &p0, const Math::vec3 &p1) const
{
	return rayIntersectionValid(p0, p1 - p0);
}

UNIGINE_INLINE float BoundSphere::distanceValid() const
{
#ifdef USE_SSE
	float ret;
	__m128 direction = _mm_rcp_ss(_mm_rsqrt_ss(Math::_mm_dot33_ps(center.vec, center.vec)));
	direction = _mm_sub_ss(direction, _MM_SWIZZLE(center.vec, W, W, W, W));
	_mm_store_ss(&ret, direction);
	return ret;
#else
	return Math::sqrtFast(center.length2()) - center.w;
#endif
}

UNIGINE_INLINE float BoundSphere::distanceValid(const Math::vec3 &point) const
{
#ifdef USE_SSE
	float ret;
	__m128 direction = _mm_sub_ps(center.vec, point);
	direction = _mm_rcp_ss(_mm_rsqrt_ss(Math::_mm_dot33_ps(direction, direction)));
	direction = _mm_sub_ss(direction, _MM_SWIZZLE(center.vec, W, W, W, W));
	_mm_store_ss(&ret, direction);
	return ret;
#else
	Math::vec3 direction;
	sub(direction, center, point);
	return Math::sqrtFast(direction.length2()) - center.w;
#endif
}

//////////////////////////////////////////////////////////////////////////
// BoundBox
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API BoundBox
{
public:
	UNIGINE_INLINE BoundBox() {}
	BoundBox(const Math::vec3 &min, const Math::vec3 &max);
	BoundBox(const Math::vec3 *points, int num_points);
	BoundBox(const BoundBox &bb);
	BoundBox(const BoundBox &bb, const Math::mat4 &transform);
	explicit BoundBox(const BoundSphere &bs);
	BoundBox &operator=(const BoundBox &bb) { set(bb); return *this; }

	void clear();

	void set(const Math::vec3 &min, const Math::vec3 &max);
	void set(const Math::vec3 *points, int num_points);
	void set(const BoundSphere &bs);
	void set(const BoundBox &bb);
	void set(const BoundBox &bb, const Math::mat4 &transform);

	// transformation
	void setTransform(const Math::mat4 &transform);
	void setTransform(const Math::dmat4 &transform);
	void setTransform(const BoundSphere &bs, const Math::mat4 &transform);
	void setTransform(const BoundSphere &bs, const Math::dmat4 &transform);

	// compare
	int compare(const BoundBox &bb) const;
	int operator==(const BoundBox &bb) const { return compare(bb); }
	int operator!=(const BoundBox &bb) const { return !compare(bb); }

	// expand
	void expand(const Math::vec3 &point);
	void expand(const Math::vec3 *points, int num_points);
	void expand(const BoundSphere &bs);
	void expand(const BoundBox &bb);

	// inside points
	int inside(const Math::vec3 &point) const;
	int inside(const Math::vec3 &point, float radius) const;
	int inside(const Math::vec3 &min, const Math::vec3 &max) const;

	int insideValid(const Math::vec3 &point) const;
	int insideValid(const Math::vec3 &point, float radius) const;
	int insideValid(const Math::vec3 &min, const Math::vec3 &max) const;

	// inside bounds
	int inside(const BoundSphere &bs) const;
	int inside(const BoundBox &bb) const;

	int insideValid(const BoundSphere &bs) const;
	int insideValid(const BoundBox &bb) const;

	int insideAll(const BoundSphere &bs) const;
	int insideAll(const BoundBox &bb) const;

	int insideAllValid(const BoundSphere &bs) const;
	int insideAllValid(const BoundBox &bb) const;

	// inside cube
	int insideCube(int face, const Math::vec3 &offset) const;

	// intersections
	int rayIntersection(const Math::vec3 &point, const Math::vec3 &direction) const;
	int irayIntersection(const Math::vec3 &point, const Math::vec3 &idirection) const;
	int getIntersection(const Math::vec3 &p0, const Math::vec3 &p1) const;

	int rayIntersectionValid(const Math::vec3 &point, const Math::vec3 &direction) const;
	int irayIntersectionValid(const Math::vec3 &point, const Math::vec3 &idirection) const;
	int getIntersectionValid(const Math::vec3 &p0, const Math::vec3 &p1) const;

	// distance
	float distance() const;
	float distance(const Math::vec3 &point) const;

	float distanceValid() const;
	float distanceValid(const Math::vec3 &point) const;

	// parameters
	bool isValid() const { return min.x <= max.x; }
	const Math::vec3 &getMin() const { return min; }
	const Math::vec3 &getMax() const { return max; }
	void getPoints(Math::vec3 *points, int num_points) const;
	void getPlanes(Math::vec4 *planes, int num_planes) const;
	Math::vec3 getCenter() const { return (min + max) * 0.5f; }

	static const BoundBox INF;

private:
	Math::vec3 min{Math::vec3_inf}; // bounding box minimum
	Math::vec3 max{-Math::vec3_inf}; // bounding box maximum
};

BoundBox operator*(const Math::mat4 &m, const BoundBox &bb);
BoundBox operator*(const Math::dmat4 &m, const BoundBox &bb);

UNIGINE_INLINE int BoundSphere::insideValid(const BoundBox &bb) const
{
	return insideValid(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int BoundSphere::insideAllValid(const BoundBox &bb) const
{
	const Math::vec3 &min = bb.getMin();
	const Math::vec3 &max = bb.getMax();
	if (insideValid(Math::vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

UNIGINE_INLINE int BoundBox::insideValid(const Math::vec3 &point) const
{
#ifdef USE_SSE
	__m128 res_0 = _mm_cmpgt_ps(min.vec, point);
	__m128 res_1 = _mm_cmplt_ps(max.vec, point);
	return ((_mm_movemask_ps(_mm_or_ps(res_0, res_1)) & 0x07) == 0);
#else
	if (min.x > point.x || max.x < point.x)
		return 0;
	if (min.y > point.y || max.y < point.y)
		return 0;
	if (min.z > point.z || max.z < point.z)
		return 0;
	return 1;
#endif
}

UNIGINE_INLINE int BoundBox::insideValid(const Math::vec3 &point, float radius) const
{
#ifdef USE_SSE
	__m128 r = Math::vec3(radius).vec;
	__m128 direction = _mm_sub_ps(_mm_min_ps(_mm_max_ps(point, min.vec), max.vec), point);
	direction = _mm_sub_ps(Math::_mm_dot33_ps(direction, direction), _mm_mul_ss(r, r));
	return ((_mm_movemask_ps(direction) & 0x01) != 0);
#else
	Math::vec3 direction;
	if (min.x > point.x)
		direction.x = min.x - point.x;
	else if (max.x < point.x)
		direction.x = max.x - point.x;
	else
		direction.x = 0.0f;
	if (min.y > point.y)
		direction.y = min.y - point.y;
	else if (max.y < point.y)
		direction.y = max.y - point.y;
	else
		direction.y = 0.0f;
	if (min.z > point.z)
		direction.z = min.z - point.z;
	else if (max.z < point.z)
		direction.z = max.z - point.z;
	else
		direction.z = 0.0f;
	return (direction.length2() < radius * radius);
#endif
}

UNIGINE_INLINE int BoundBox::insideValid(const Math::vec3 &min_, const Math::vec3 &max_) const
{
#ifdef USE_SSE
	__m128 res_0 = _mm_cmpgt_ps(min.vec, max_);
	__m128 res_1 = _mm_cmplt_ps(max.vec, min_);
	return ((_mm_movemask_ps(_mm_or_ps(res_0, res_1)) & 0x07) == 0);
#else
	if (min.x > max_.x || max.x < min_.x)
		return 0;
	if (min.y > max_.y || max.y < min_.y)
		return 0;
	if (min.z > max_.z || max.z < min_.z)
		return 0;
	return 1;
#endif
}

UNIGINE_INLINE int BoundBox::insideValid(const BoundSphere &bs) const
{
	const Math::vec3 &center = bs.getCenter();
#ifdef USE_SSE
	__m128 radius = _MM_SWIZZLE(center.vec, W, W, W, W);
	__m128 direction = _mm_sub_ps(_mm_min_ps(_mm_max_ps(center.vec, min.vec), max.vec), center.vec);
	direction = _mm_sub_ps(Math::_mm_dot33_ps(direction, direction), _mm_mul_ss(radius, radius));
	return ((_mm_movemask_ps(direction) & 0x01) != 0);
#else
	Math::vec3 direction;
	float radius = bs.getRadius();
	if (min.x > center.x)
		direction.x = min.x - center.x;
	else if (max.x < center.x)
		direction.x = max.x - center.x;
	else
		direction.x = 0.0f;
	if (min.y > center.y)
		direction.y = min.y - center.y;
	else if (max.y < center.y)
		direction.y = max.y - center.y;
	else
		direction.y = 0.0f;
	if (min.z > center.z)
		direction.z = min.z - center.z;
	else if (max.z < center.z)
		direction.z = max.z - center.z;
	else
		direction.z = 0.0f;
	return (direction.length2() < radius * radius);
#endif
}

UNIGINE_INLINE int BoundBox::insideValid(const BoundBox &bb) const
{
	return insideValid(bb.min, bb.max);
}

UNIGINE_INLINE int BoundBox::insideAllValid(const BoundSphere &bs) const
{
	const Math::vec3 &center = bs.getCenter();
#ifdef USE_SSE
	__m128 radius = _MM_SWIZZLE(center.vec, W, W, W, W);
	__m128 res_0 = _mm_cmpgt_ps(min.vec, _mm_sub_ps(center.vec, radius));
	__m128 res_1 = _mm_cmplt_ps(max.vec, _mm_add_ps(center.vec, radius));
	return ((_mm_movemask_ps(_mm_or_ps(res_0, res_1)) & 0x07) == 0);
#else
	float radius = bs.getRadius();
	if (min.x > center.x - radius || max.x < center.x + radius)
		return 0;
	if (min.y > center.y - radius || max.y < center.y + radius)
		return 0;
	if (min.z > center.z - radius || max.z < center.z + radius)
		return 0;
	return 1;
#endif
}

UNIGINE_INLINE int BoundBox::insideAllValid(const BoundBox &bb) const
{
#ifdef USE_SSE
	__m128 res_0 = _mm_cmpgt_ps(min.vec, bb.min.vec);
	__m128 res_1 = _mm_cmplt_ps(max.vec, bb.max.vec);
	return ((_mm_movemask_ps(_mm_or_ps(res_0, res_1)) & 0x07) == 0);
#else
	if (min.x > bb.min.x || max.x < bb.max.x)
		return 0;
	if (min.y > bb.min.y || max.y < bb.max.y)
		return 0;
	if (min.z > bb.min.z || max.z < bb.max.z)
		return 0;
	return 1;
#endif
}

UNIGINE_INLINE int BoundBox::rayIntersectionValid(const Math::vec3 &point, const Math::vec3 &direction) const
{
	return Geometry::rayBoundBoxIntersection(point, direction, min, max);
}

UNIGINE_INLINE int BoundBox::irayIntersectionValid(const Math::vec3 &point, const Math::vec3 &idirection) const
{
	return Geometry::irayBoundBoxIntersection(point, idirection, min, max);
}

UNIGINE_INLINE int BoundBox::getIntersectionValid(const Math::vec3 &p0, const Math::vec3 &p1) const
{
	return Geometry::rayBoundBoxIntersection(p0, p1 - p0, min, max);
}

UNIGINE_INLINE float BoundBox::distanceValid() const
{
#ifdef USE_SSE
	float ret;
	__m128 direction = _mm_min_ps(_mm_max_ps(Math::vec3_zero.vec, min.vec), max.vec);
	direction = _mm_rcp_ss(_mm_rsqrt_ss(Math::_mm_dot33_ps(direction, direction)));
	_mm_store_ss(&ret, direction);
	return ret;
#else
	Math::vec3 direction;
	if (min.x > 0.0f)
		direction.x = min.x;
	else if (max.x < 0.0f)
		direction.x = max.x;
	else
		direction.x = 0.0f;
	if (min.y > 0.0f)
		direction.y = min.y;
	else if (max.y < 0.0f)
		direction.y = max.y;
	else
		direction.y = 0.0f;
	if (min.z > 0.0f)
		direction.z = min.z;
	else if (max.z < 0.0f)
		direction.z = max.z;
	else
		direction.z = 0.0f;
	return Math::sqrtFast(direction.length2());
#endif
}

UNIGINE_INLINE float BoundBox::distanceValid(const Math::vec3 &point) const
{
#ifdef USE_SSE
	float ret;
	__m128 direction = _mm_sub_ps(_mm_min_ps(_mm_max_ps(point, min.vec), max.vec), point);
	direction = _mm_rcp_ss(_mm_rsqrt_ss(Math::_mm_dot33_ps(direction, direction)));
	_mm_store_ss(&ret, direction);
	return ret;
#else
	Math::vec3 direction;
	if (min.x > point.x)
		direction.x = min.x - point.x;
	else if (max.x < point.x)
		direction.x = max.x - point.x;
	else
		direction.x = 0.0f;
	if (min.y > point.y)
		direction.y = min.y - point.y;
	else if (max.y < point.y)
		direction.y = max.y - point.y;
	else
		direction.y = 0.0f;
	if (min.z > point.z)
		direction.z = min.z - point.z;
	else if (max.z < point.z)
		direction.z = max.z - point.z;
	else
		direction.z = 0.0f;
	return Math::sqrtFast(direction.length2());
#endif
}

//////////////////////////////////////////////////////////////////////////
// BoundFrustum
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API BoundFrustum
{
public:
	BoundFrustum();
	BoundFrustum(const Math::mat4 &projection, const Math::mat4 &modelview);
	BoundFrustum(const BoundFrustum &bf);
	BoundFrustum(const BoundFrustum &bf, const Math::mat4 &itransform);
	UNIGINE_INLINE BoundFrustum &operator=(const BoundFrustum &bf) { set(bf); return *this; }

	void clear();

	void set(const Math::mat4 &projection, const Math::mat4 &modelview);
	void set(const BoundFrustum &bf);
	void set(const BoundFrustum &bf, const Math::mat4 &itransform);

	// transformation
	void setITransform(const Math::mat4 &itransform);
	void setITransform(const Math::dmat4 &itransform);

	// compare
	int compare(const BoundFrustum &bf) const;
	UNIGINE_INLINE int operator==(const BoundFrustum &bf) const { return compare(bf); }
	UNIGINE_INLINE int operator!=(const BoundFrustum &bf) const { return !compare(bf); }

	// expand
	void expand(float radius);

	// inside points
	int inside(const Math::vec3 &point) const;
	int inside(const Math::vec3 &point, float radius) const;
	int inside(const Math::vec3 &min, const Math::vec3 &max) const;
	int inside(const Math::vec3 *points, int num) const;

	int insideFast(const Math::vec3 &point) const;
	int insideFast(const Math::vec3 &point, float radius) const;
	int insideFast(const Math::vec3 &min, const Math::vec3 &max) const;
	int insideFast(const Math::vec3 *points, int num) const;

	// inside bounds
	int inside(const BoundSphere &bs) const;
	int inside(const BoundBox &bb) const;
	int inside(const BoundFrustum &bf) const;

	int insideValid(const BoundSphere &bs) const;
	int insideValid(const BoundBox &bb) const;
	int insideValid(const BoundFrustum &bf) const;

	int insideValidFast(const BoundSphere &bs) const;
	int insideValidFast(const BoundBox &bb) const;
	int insideValidFast(const BoundFrustum &bf) const;

	// inside all bounds
	int insideAll(const BoundSphere &bs) const;
	int insideAll(const BoundBox &bb) const;
	int insideAll(const BoundFrustum &bf) const;

	int insideAllValid(const BoundSphere &bs) const;
	int insideAllValid(const BoundBox &bb) const;
	int insideAllValid(const BoundFrustum &bf) const;

	int insideAllValidFast(const BoundSphere &bs) const;
	int insideAllValidFast(const BoundBox &bb) const;
	int insideAllValidFast(const BoundFrustum &bf) const;

	// inside planes bounds
	int insidePlanes(const BoundSphere &bs) const;
	int insidePlanes(const BoundBox &bb) const;
	int insidePlanes(const BoundFrustum &bf) const;

	int insidePlanesValid(const BoundSphere &bs) const;
	int insidePlanesValid(const BoundBox &bb) const;
	int insidePlanesValid(const BoundFrustum &bf) const;

	int insidePlanesValidFast(const BoundSphere &bs) const;
	int insidePlanesValidFast(const BoundBox &bb) const;
	int insidePlanesValidFast(const BoundFrustum &bf) const;

	// inside shadow
	int insideShadowValid(const BoundSphere &object, const Math::vec3 &direction) const;
	int insideShadowValid(const BoundSphere &object, const BoundSphere &light, const Math::vec3 &offset) const;

	// parameters
	UNIGINE_INLINE bool isValid() const { return valid; }
	UNIGINE_INLINE const Math::vec3 &getCamera() const { return camera; }
	UNIGINE_INLINE const Math::vec4 *getPlanes() const { return planes; }
	UNIGINE_INLINE const Math::vec3 *getPoints() const { return points; }

private:
	enum
	{
		PLANE_L = 0,
		PLANE_R,
		PLANE_B,
		PLANE_T,
		PLANE_N,
		PLANE_F,
	};

	int inside_planes(const Math::vec3 &point) const;
	int inside_planes(const Math::vec3 &point, float radius) const;
	int inside_planes(const Math::vec3 &min, const Math::vec3 &max) const;
	int inside_planes(const Math::vec3 *points, int num_points) const;

	int inside_planes_fast(const Math::vec3 &point) const;
	int inside_planes_fast(const Math::vec3 &point, float radius) const;
	int inside_planes_fast(const Math::vec3 &min, const Math::vec3 &max) const;
	int inside_planes_fast(const Math::vec3 *points, int num_points) const;

	bool valid;
	Math::vec3 camera;
	Math::vec4 planes[6];		// aos clipping planes
	Math::vec4 tplanes[8];	// soa clipping planes
	Math::vec3 points[8];		// bounding points

	Math::vec4 alignment[4];	// memory alignment
};

UNIGINE_INLINE int BoundFrustum::inside(const Math::vec3 &point) const
{
	return inside_planes(point);
}

UNIGINE_INLINE int BoundFrustum::inside(const Math::vec3 &point, float radius) const
{
	return inside_planes(point, radius);
}

UNIGINE_INLINE int BoundFrustum::inside(const Math::vec3 &min, const Math::vec3 &max) const
{
	return inside_planes(min, max);
}

UNIGINE_INLINE int BoundFrustum::inside(const Math::vec3 *pts, int num_points) const
{
	return inside_planes(pts, num_points);
}

UNIGINE_INLINE int BoundFrustum::insideFast(const Math::vec3 &point) const
{
	return inside_planes_fast(point);
}

UNIGINE_INLINE int BoundFrustum::insideFast(const Math::vec3 &point, float radius) const
{
	return inside_planes_fast(point, radius);
}

UNIGINE_INLINE int BoundFrustum::insideFast(const Math::vec3 &min, const Math::vec3 &max) const
{
	return inside_planes_fast(min, max);
}

UNIGINE_INLINE int BoundFrustum::insideFast(const Math::vec3 *pts, int num_points) const
{
	return inside_planes_fast(pts, num_points);
}

UNIGINE_INLINE int BoundFrustum::insideValid(const BoundSphere &bs) const
{
	return inside(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insideValid(const BoundBox &bb) const
{
	return inside(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int BoundFrustum::insideValid(const BoundFrustum &bf) const
{
	return inside(bf.points, 8);
}

UNIGINE_INLINE int BoundFrustum::insideValidFast(const BoundSphere &bs) const
{
	return insideFast(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insideValidFast(const BoundBox &bb) const
{
	return insideFast(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int BoundFrustum::insideValidFast(const BoundFrustum &bf) const
{
	return insideFast(bf.points, 8);
}

UNIGINE_INLINE int BoundFrustum::insideAllValid(const BoundSphere &bs) const
{
	return inside(bs.getCenter(), -bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insideAllValid(const BoundBox &bb) const
{
	const Math::vec3 &min = bb.getMin();
	const Math::vec3 &max = bb.getMax();
	if (inside(Math::vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (inside(Math::vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (inside(Math::vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (inside(Math::vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (inside(Math::vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (inside(Math::vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (inside(Math::vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (inside(Math::vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

UNIGINE_INLINE int BoundFrustum::insideAllValid(const BoundFrustum &bf) const
{
	for (int i = 0; i < 8; i++)
	{
		if (inside(bf.points[i]) == 0)
			return 0;
	}
	return 1;
}

UNIGINE_INLINE int BoundFrustum::insideAllValidFast(const BoundSphere &bs) const
{
	return insideFast(bs.getCenter(), -bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insideAllValidFast(const BoundBox &bb) const
{
	const Math::vec3 &min = bb.getMin();
	const Math::vec3 &max = bb.getMax();
	if (insideFast(Math::vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

UNIGINE_INLINE int BoundFrustum::insideAllValidFast(const BoundFrustum &bf) const
{
	for (int i = 0; i < 8; i++)
	{
		if (insideFast(bf.points[i]) == 0)
			return 0;
	}
	return 1;
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValid(const BoundSphere &bs) const
{
	return inside_planes(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValid(const BoundBox &bb) const
{
	return inside_planes(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValid(const BoundFrustum &bf) const
{
	return inside_planes(bf.points, 8);
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValidFast(const BoundSphere &bs) const
{
	return inside_planes_fast(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValidFast(const BoundBox &bb) const
{
	return inside_planes_fast(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int BoundFrustum::insidePlanesValidFast(const BoundFrustum &bf) const
{
	return inside_planes_fast(bf.points, 8);
}

#if defined(USE_DOUBLE) || defined(UNIGINE_DOUBLE)

class BoundSphere;
class BoundBox;
class BoundFrustum;
class WorldBoundSphere;
class WorldBoundBox;
class WorldBoundFrustum;

//////////////////////////////////////////////////////////////////////////
// WorldBoundSphere
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API WorldBoundSphere
{
public:
	WorldBoundSphere();
	WorldBoundSphere(const Math::Vec3 &center, Math::Scalar radius);
	WorldBoundSphere(const BoundSphere &bs, const Math::Mat4 &transform);
	WorldBoundSphere(const WorldBoundSphere &bs);
	explicit WorldBoundSphere(const WorldBoundBox &bb);
	UNIGINE_INLINE WorldBoundSphere &operator=(const WorldBoundSphere &bs) { set(bs); return *this; }

	void clear();

	void set(const Math::Vec3 &center, Math::Scalar radius);
	void set(const BoundSphere &bs, const Math::Mat4 &transform);
	void set(const WorldBoundSphere &bs);
	void set(const WorldBoundBox &bb);

	// expand
	void expand(const Math::Vec3 &point);
	void expand(const WorldBoundSphere &bs);
	void expand(const WorldBoundBox &bb);

	// inside points
	int inside(const Math::Vec3 &point) const;
	int inside(const Math::Vec3 &point, Math::Scalar radius) const;
	int inside(const Math::Vec3 &min, const Math::Vec3 &max) const;

	int insideValid(const Math::Vec3 &point) const;
	int insideValid(const Math::Vec3 &point, Math::Scalar radius) const;
	int insideValid(const Math::Vec3 &min, const Math::Vec3 &max) const;

	// inside bounds
	int inside(const WorldBoundSphere &bs) const;
	int inside(const WorldBoundBox &bb) const;
	int insideValid(const WorldBoundSphere &bs) const;
	int insideValid(const WorldBoundBox &bb) const;

	int insideAll(const WorldBoundSphere &bs) const;
	int insideAll(const WorldBoundBox &bb) const;
	int insideAllValid(const WorldBoundSphere &bs) const;
	int insideAllValid(const WorldBoundBox &bb) const;

	// distance
	Math::Scalar distanceValid(const Math::Vec3 &point) const;

	// parameters
	UNIGINE_INLINE bool isValid() const { return (radius > 0.0); }
	UNIGINE_INLINE const Math::Vec3 &getCenter() const { return center; }
	UNIGINE_INLINE Math::Scalar getRadius() const { return radius; }

private:
	Math::Vec3 center;
	Math::Scalar radius;
};

UNIGINE_INLINE int WorldBoundSphere::insideValid(const Math::Vec3 &point) const
{
	return (length2(center - point) <= radius * radius);
}

UNIGINE_INLINE int WorldBoundSphere::insideValid(const Math::Vec3 &point, Math::Scalar r) const
{
	r += radius;
	return (length2(center - point) <= r * r);
}

UNIGINE_INLINE int WorldBoundSphere::insideValid(const Math::Vec3 &min, const Math::Vec3 &max) const
{
	if (center.x + radius < min.x || center.x - radius > max.x)
		return 0;
	if (center.y + radius < min.y || center.y - radius > max.y)
		return 0;
	if (center.z + radius < min.z || center.z - radius > max.z)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundSphere::insideValid(const WorldBoundSphere &bs) const
{
	return insideValid(bs.center, bs.radius);
}

UNIGINE_INLINE int WorldBoundSphere::insideAllValid(const WorldBoundSphere &bs) const
{
	Math::Scalar r = radius - bs.radius;
	if (r > 0.0f)
		return (length2(center - bs.center) <= r * r);
	return 0;
}

UNIGINE_INLINE Math::Scalar WorldBoundSphere::distanceValid(const Math::Vec3 &point) const
{
	Math::Vec3 direction;
	sub(direction, center, point);
	return direction.length() - radius;
}

//////////////////////////////////////////////////////////////////////////
// WorldBoundBox
//////////////////////////////////////////////////////////////////////////

class UNIGINE_API WorldBoundBox
{
public:
	WorldBoundBox();
	WorldBoundBox(const Math::Vec3 &min, const Math::Vec3 &max);
	WorldBoundBox(const BoundBox &bb, const Math::Mat4 &transform);
	WorldBoundBox(const WorldBoundBox &bb);
	WorldBoundBox(const BoundBox &bb);
	explicit WorldBoundBox(const WorldBoundSphere &bs);
	UNIGINE_INLINE WorldBoundBox &operator=(const WorldBoundBox &bb) { set(bb); return *this; }

	void clear();

	void set(const Math::Vec3 &min, const Math::Vec3 &max);
	void set(const Math::Vec3 *points, int num_points);
	void set(const BoundBox &bb, const Math::Mat4 &transform);
	void set(const WorldBoundSphere &bs);
	void set(const WorldBoundBox &bb);

	// transofmation
	void setTransform(const Math::Mat4 &transform);

	// compare
	int compare(const WorldBoundBox &bb) const;
	UNIGINE_INLINE int operator==(const WorldBoundBox &bb) const { return compare(bb); }
	UNIGINE_INLINE int operator!=(const WorldBoundBox &bb) const { return !compare(bb); }

	// expand
	void expand(const Math::Vec3 &point);
	void expand(const Math::Vec3 *points, int num_points);
	void expand(const WorldBoundSphere &bs);
	void expand(const WorldBoundBox &bb);

	// inside points
	int inside(const Math::Vec3 &point) const;
	int inside(const Math::Vec3 &point, Math::Scalar radius) const;
	int inside(const Math::Vec3 &min, const Math::Vec3 &max) const;
	int insideValid(const Math::Vec3 &point) const;
	int insideValid(const Math::Vec3 &point, Math::Scalar radius) const;
	int insideValid(const Math::Vec3 &min, const Math::Vec3 &max) const;

	// inside bounds
	int inside(const WorldBoundSphere &bs) const;
	int inside(const WorldBoundBox &bb) const;
	int insideValid(const WorldBoundSphere &bs) const;
	int insideValid(const WorldBoundBox &bb) const;

	int insideAll(const WorldBoundSphere &bs) const;
	int insideAll(const WorldBoundBox &bb) const;
	int insideAllValid(const WorldBoundSphere &bs) const;
	int insideAllValid(const WorldBoundBox &bb) const;

	// inside cube
	int insideCube(int face, const Math::Vec3 &point) const;

	// intersections
	int rayIntersection(const  Math::Vec3 &point, const  Math::Vec3 &direction) const;
	int irayIntersection(const  Math::Vec3 &point, const  Math::Vec3 &idirection) const;
	int getIntersection(const  Math::Vec3 &p0, const  Math::Vec3 &p1) const;

	int rayIntersectionValid(const  Math::Vec3 &point, const  Math::Vec3 &direction) const;
	int irayIntersectionValid(const  Math::Vec3 &point, const  Math::Vec3 &idirection) const;
	int getIntersectionValid(const  Math::Vec3 &p0, const  Math::Vec3 &p1) const;

	// distance
	Math::Scalar distanceValid(const Math::Vec3 &point) const;

	// parameters
	UNIGINE_INLINE bool isValid() const { return (min.x <= max.x); }
	UNIGINE_INLINE const Math::Vec3 &getMin() const { return min; }
	UNIGINE_INLINE const Math::Vec3 &getMax() const { return max; }

	Math::Vec3 getCenter() const;

private:
	Math::Vec3 min;
	Math::Vec3 max;
};

WorldBoundBox operator*(const  Math::dmat4 &m, const WorldBoundBox &bb);

UNIGINE_INLINE int WorldBoundSphere::insideValid(const WorldBoundBox &bb) const
{
	return insideValid(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int WorldBoundSphere::insideAllValid(const WorldBoundBox &bb) const
{
	const Math::Vec3 &min = bb.getMin();
	const Math::Vec3 &max = bb.getMax();
	if (insideValid(Math::Vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (insideValid(Math::Vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundBox::insideValid(const Math::Vec3 &point) const
{
	if (min.x > point.x || max.x < point.x)
		return 0;
	if (min.y > point.y || max.y < point.y)
		return 0;
	if (min.z > point.z || max.z < point.z)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundBox::insideValid(const Math::Vec3 &point, Math::Scalar radius) const
{
	if (min.x > point.x + radius || max.x < point.x - radius)
		return 0;
	if (min.y > point.y + radius || max.y < point.y - radius)
		return 0;
	if (min.z > point.z + radius || max.z < point.z - radius)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundBox::insideValid(const Math::Vec3 &min_, const Math::Vec3 &max_) const
{
	if (min.x > max_.x || max.x < min_.x)
		return 0;
	if (min.y > max_.y || max.y < min_.y)
		return 0;
	if (min.z > max_.z || max.z < min_.z)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundBox::insideValid(const WorldBoundSphere &bs) const
{
	return insideValid(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int WorldBoundBox::insideValid(const WorldBoundBox &bb) const
{
	return insideValid(bb.min, bb.max);
}

UNIGINE_INLINE int WorldBoundBox::insideAllValid(const WorldBoundSphere &bs) const
{
	const Math::Vec3 &center = bs.getCenter();
	Math::Scalar radius = bs.getRadius();
	if (min.x > center.x - radius || max.x < center.x + radius)
		return 0;
	if (min.y > center.y - radius || max.y < center.y + radius)
		return 0;
	if (min.z > center.z - radius || max.z < center.z + radius)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundBox::insideAllValid(const WorldBoundBox &bb) const
{
	if (min.x > bb.min.x || max.x < bb.max.x)
		return 0;
	if (min.y > bb.min.y || max.y < bb.max.y)
		return 0;
	if (min.z > bb.min.z || max.z < bb.max.z)
		return 0;
	return 1;
}

UNIGINE_INLINE Math::Scalar WorldBoundBox::distanceValid(const Math::Vec3 &point) const
{
	Math::Vec3 direction;
	if (min.x > point.x)
		direction.x = min.x - point.x;
	else if (max.x < point.x)
		direction.x = max.x - point.x;
	else
		direction.x = 0.0f;
	if (min.y > point.y)
		direction.y = min.y - point.y;
	else if (max.y < point.y)
		direction.y = max.y - point.y;
	else
		direction.y = 0.0f;
	if (min.z > point.z)
		direction.z = min.z - point.z;
	else if (max.z < point.z)
		direction.z = max.z - point.z;
	else
		direction.z = 0.0f;
	return direction.length();
}

UNIGINE_INLINE Math::Vec3 WorldBoundBox::getCenter() const
{
	return (min + max) * 0.5f;
}

class UNIGINE_API WorldBoundFrustum
{
public:
	WorldBoundFrustum();
	WorldBoundFrustum(const Math::mat4 &projection, const Math::Mat4 &modelview);
	WorldBoundFrustum(const WorldBoundFrustum &bf);
	WorldBoundFrustum(const BoundFrustum &bf, const Math::Mat4 &itransform);
	WorldBoundFrustum(const BoundFrustum &bf);
	WorldBoundFrustum(const WorldBoundFrustum &bf, const Math::Mat4 &transform);
	UNIGINE_INLINE WorldBoundFrustum &operator=(const WorldBoundFrustum &bf) { set(bf); return *this; }

	void clear();

	void set(const Math::mat4 &projection, const Math::Mat4 &modelview);
	void set(const WorldBoundFrustum &bf);
	void set(const BoundFrustum &bf, const Math::Mat4 &itransform);
	void set(const WorldBoundFrustum &bf, const Math::Mat4 &itransform);

	// inside points
	int inside(const Math::Vec3 &point) const;
	int inside(const Math::Vec3 &point, Math::Scalar radius) const;
	int inside(const Math::Vec3 &min, const Math::Vec3 &max) const;
	int inside(const Math::Vec3 *points, int num_points) const;

	int insideFast(const Math::Vec3 &point) const;
	int insideFast(const Math::Vec3 &point, Math::Scalar radius) const;
	int insideFast(const Math::Vec3 &min, const Math::Vec3 &max) const;
	int insideFast(const Math::Vec3 *points, int num_points) const;

	// inside bounds
	int inside(const WorldBoundSphere &bs) const;
	int inside(const WorldBoundBox &bb) const;

	int insideValid(const WorldBoundSphere &bs) const;
	int insideValid(const WorldBoundBox &bb) const;

	int insideValidFast(const WorldBoundSphere &bs) const;
	int insideValidFast(const WorldBoundBox &bb) const;

	// inside all bounds
	int insideAll(const WorldBoundSphere &bs) const;
	int insideAll(const WorldBoundBox &bb) const;

	int insideAllValid(const WorldBoundSphere &bs) const;
	int insideAllValid(const WorldBoundBox &bb) const;

	int insideAllValidFast(const WorldBoundSphere &bs) const;
	int insideAllValidFast(const WorldBoundBox &bb) const;

	// inside shadow
	int insideShadowValid(const WorldBoundSphere &object, const Math::Vec3 &direction) const;

	// parameters
	UNIGINE_INLINE bool isValid() const { return true; }
	UNIGINE_INLINE const Math::Vec3 &getCamera() const { return camera; }
	UNIGINE_INLINE const Math::Vec4 *getPlanes() const { return planes; }

private:
	int inside_planes(const Math::Vec3 &point) const;
	int inside_planes(const Math::Vec3 &point, Math::Scalar radius) const;
	int inside_planes(const Math::Vec3 &min, const Math::Vec3 &max) const;
	int inside_planes(const Math::Vec3 *points, int num_points) const;

	int inside_planes_fast(const Math::Vec3 &point) const;
	int inside_planes_fast(const Math::Vec3 &point, Math::Scalar radius) const;
	int inside_planes_fast(const Math::Vec3 &min, const Math::Vec3 &max) const;
	int inside_planes_fast(const Math::Vec3 *points, int num_points) const;

	Math::Vec3 camera;
	Math::Vec4 planes[6];
};

UNIGINE_INLINE int WorldBoundFrustum::inside(const Math::Vec3 &point) const
{
	return inside_planes(point);
}

UNIGINE_INLINE int WorldBoundFrustum::inside(const Math::Vec3 &point, Math::Scalar radius) const
{
	return inside_planes(point, radius);
}

UNIGINE_INLINE int WorldBoundFrustum::inside(const Math::Vec3 &min, const Math::Vec3 &max) const
{
	return inside_planes(min, max);
}

UNIGINE_INLINE int WorldBoundFrustum::inside(const Math::Vec3 *points, int num_points) const
{
	return inside_planes(points, num_points);
}

UNIGINE_INLINE int WorldBoundFrustum::insideFast(const Math::Vec3 &point) const
{
	return inside_planes_fast(point);
}

UNIGINE_INLINE int WorldBoundFrustum::insideFast(const Math::Vec3 &point, Math::Scalar radius) const
{
	return inside_planes_fast(point, radius);
}

UNIGINE_INLINE int WorldBoundFrustum::insideFast(const Math::Vec3 &min, const Math::Vec3 &max) const
{
	return inside_planes_fast(min, max);
}

UNIGINE_INLINE int WorldBoundFrustum::insideFast(const Math::Vec3 *points, int num_points) const
{
	return inside_planes_fast(points, num_points);
}

UNIGINE_INLINE int WorldBoundFrustum::insideValid(const WorldBoundSphere &bs) const
{
	return inside(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int WorldBoundFrustum::insideValid(const WorldBoundBox &bb) const
{
	return inside(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int WorldBoundFrustum::insideValidFast(const WorldBoundSphere &bs) const
{
	return insideFast(bs.getCenter(), bs.getRadius());
}

UNIGINE_INLINE int WorldBoundFrustum::insideValidFast(const WorldBoundBox &bb) const
{
	return insideFast(bb.getMin(), bb.getMax());
}

UNIGINE_INLINE int WorldBoundFrustum::insideAllValid(const WorldBoundSphere &bs) const
{
	return inside(bs.getCenter(), -bs.getRadius());
}

UNIGINE_INLINE int WorldBoundFrustum::insideAllValid(const WorldBoundBox &bb) const
{
	const Math::Vec3 &min = bb.getMin();
	const Math::Vec3 &max = bb.getMax();
	if (inside(Math::Vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (inside(Math::Vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (inside(Math::Vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (inside(Math::Vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (inside(Math::Vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (inside(Math::Vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (inside(Math::Vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (inside(Math::Vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

UNIGINE_INLINE int WorldBoundFrustum::insideAllValidFast(const WorldBoundSphere &bs) const
{
	return insideFast(bs.getCenter(), -bs.getRadius());
}

UNIGINE_INLINE int WorldBoundFrustum::insideAllValidFast(const WorldBoundBox &bb) const
{
	const Math::Vec3 &min = bb.getMin();
	const Math::Vec3 &max = bb.getMax();
	if (insideFast(Math::Vec3(min.x, min.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(max.x, min.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(min.x, max.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(max.x, max.y, min.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(min.x, min.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(max.x, min.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(min.x, max.y, max.z)) == 0)
		return 0;
	if (insideFast(Math::Vec3(max.x, max.y, max.z)) == 0)
		return 0;
	return 1;
}

#endif /* USE_DOUBLE */

} // namespace Unigine
