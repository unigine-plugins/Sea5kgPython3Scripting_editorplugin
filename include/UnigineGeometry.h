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

// DO NOT EDIT DIRECTLY. This is an auto-generated file. Your changes will be lost.

#pragma once

#include "UnigineBase.h"
#include "UnigineMathLib.h"

namespace Unigine
{

namespace Geometry
{
	UNIGINE_API float normalizeAngle(float angle);
	UNIGINE_API void orthoBasis(const Math::vec3 &v, Math::vec3 &tangent, Math::vec3 &binormal);
	UNIGINE_API void orthoBasis(const Math::dvec3 &v, Math::dvec3 &tangent, Math::dvec3 &binormal);
	UNIGINE_API void orthoTransform(const Math::vec3 &v, Math::mat4 &transform);
	UNIGINE_API void orthoTransform(const Math::dvec3 &v, Math::dmat4 &transform);
	UNIGINE_API Math::quat orthoTangent(const Math::vec4 &tangent, const Math::vec3 &normal);
	UNIGINE_API Math::quat orthoTangent(const Math::vec3 &tangent, const Math::vec3 &binormal, const Math::vec3 &normal);
	UNIGINE_API float triangleArea(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API double triangleArea(const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2);
	UNIGINE_API Math::vec3 triangleNormal(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API Math::dvec3 triangleNormal(const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2);
	UNIGINE_API Math::vec4 trianglePlane(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API Math::dvec4 trianglePlane(const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2);
	UNIGINE_API Math::vec4 triangleTangent(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API Math::vec4 triangleTangent(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, const Math::vec2 &t0, const Math::vec2 &t1, const Math::vec2 &t2);
	UNIGINE_API Math::vec4 triangleTangent(const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, const Math::vec2 &t0, const Math::vec2 &t1, const Math::vec2 &t2, const Math::vec3 &normal);
	UNIGINE_API Math::vec4 polygonPlane(const Math::vec3 * vertex, const int *indices, int indices_size);
	UNIGINE_API Math::dvec4 polygonPlane(const Math::dvec3 * vertex, const int *indices, int indices_size);
	UNIGINE_API int pointTriangleInside(const Math::vec3 &point, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API int pointTriangleInside(const Math::dvec3 &point, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2);
	UNIGINE_API int pointTriangleInside(const Math::vec3 &point, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, const Math::vec3 &normal);
	UNIGINE_API int pointTriangleInside(const Math::dvec3 &point, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2, const Math::dvec3 &normal);
	UNIGINE_API float pointTriangleDistance(const Math::vec3 &point, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, const Math::vec4 &plane);
	UNIGINE_API double pointTriangleDistance(const Math::dvec3 &point, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2, const Math::dvec4 &plane);
	UNIGINE_API void pointTriangleCoordinates(const Math::vec3 &point, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, float & a, float & b);
	UNIGINE_API void pointTriangleCoordinates(const Math::dvec3 &point, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2, double & a, double & b);
	UNIGINE_API int pointPolygonInside(const Math::vec3 &point, const Math::vec3 * vertex, const int *indices, int indices_size, const Math::vec3 &normal);
	UNIGINE_API int pointPolygonInside(const Math::dvec3 &point, const Math::dvec3 * vertex, const int *indices, int indices_size, const Math::dvec3 &normal);
	UNIGINE_API float pointPolygonDistance(const Math::vec3 &point, const Math::vec3 * vertex, const int *indices, int indices_size, const Math::vec4 &plane);
	UNIGINE_API double pointPolygonDistance(const Math::dvec3 &point, const Math::dvec3 * vertex, const int *indices, int indices_size, const Math::dvec4 &plane);
	UNIGINE_API bool rayBoundBoxIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec3 &min, const Math::vec3 &max);
	UNIGINE_API bool rayBoundBoxIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec3 &min, const Math::dvec3 &max);
	UNIGINE_API bool irayBoundBoxIntersection(const Math::vec3 &point, const Math::vec3 &idirection, const Math::vec3 &min, const Math::vec3 &max);
	UNIGINE_API bool irayBoundBoxIntersection(const Math::dvec3 &point, const Math::dvec3 &idirection, const Math::dvec3 &min, const Math::dvec3 &max);
	UNIGINE_API bool rayTriangleIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2);
	UNIGINE_API bool rayTriangleIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2);
	UNIGINE_API bool linePlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec4 &plane);
	UNIGINE_API bool linePlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec4 &plane);
	UNIGINE_API bool linePlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec3 &plane_point, const Math::vec3 &plane_normal);
	UNIGINE_API bool linePlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal);
	UNIGINE_API bool linePlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec4 &plane, Math::vec3 &ret);
	UNIGINE_API bool linePlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec4 &plane, Math::dvec3 &ret);
	UNIGINE_API bool linePlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec3 &plane_point, const Math::vec3 &plane_normal, Math::vec3 &ret);
	UNIGINE_API bool linePlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal, Math::dvec3 &ret);
	UNIGINE_API bool rayPlaneIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec4 &plane);
	UNIGINE_API bool rayPlaneIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec4 &plane);
	UNIGINE_API bool rayPlaneIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec3 &plane_point, const Math::vec3 &plane_normal);
	UNIGINE_API bool rayPlaneIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal);
	UNIGINE_API bool rayPlaneIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec4 &plane, Math::vec3 &ret);
	UNIGINE_API bool rayPlaneIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec4 &plane, Math::dvec3 &ret);
	UNIGINE_API bool rayPlaneIntersection(const Math::vec3 &point, const Math::vec3 &direction, const Math::vec3 &plane_point, const Math::vec3 &plane_normal, Math::vec3 &ret);
	UNIGINE_API bool rayPlaneIntersection(const Math::dvec3 &point, const Math::dvec3 &direction, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal, Math::dvec3 &ret);
	UNIGINE_API bool segmentPlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec4 &plane);
	UNIGINE_API bool segmentPlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec4 &plane);
	UNIGINE_API bool segmentPlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec3 &plane_point, const Math::vec3 &plane_normal);
	UNIGINE_API bool segmentPlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal);
	UNIGINE_API bool segmentPlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec4 &plane, Math::vec3 &ret);
	UNIGINE_API bool segmentPlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec4 &plane, Math::dvec3 &ret);
	UNIGINE_API bool segmentPlaneIntersection(const Math::vec3 &p0, const Math::vec3 &p1, const Math::vec3 &plane_point, const Math::vec3 &plane_normal, Math::vec3 &ret);
	UNIGINE_API bool segmentPlaneIntersection(const Math::dvec3 &p0, const Math::dvec3 &p1, const Math::dvec3 &plane_point, const Math::dvec3 &plane_normal, Math::dvec3 &ret);
	UNIGINE_API void getClosestPointOnLine(const Math::vec3 &point, const Math::vec3 &p0, const Math::vec3 &p1, Math::vec3 &ret);
	UNIGINE_API void getClosestPointOnLine(const Math::dvec3 &point, const Math::dvec3 &p0, const Math::dvec3 &p1, Math::dvec3 &ret);
	UNIGINE_API int getClosestPointOnTriangle(const Math::vec3 &point, const Math::vec3 &v0, const Math::vec3 &v1, const Math::vec3 &v2, Math::vec3 &ret);
	UNIGINE_API int getClosestPointOnTriangle(const Math::dvec3 &point, const Math::dvec3 &v0, const Math::dvec3 &v1, const Math::dvec3 &v2, Math::dvec3 &ret);
	UNIGINE_API int getClosestPointsOnLines(const Math::vec3 &p00, const Math::vec3 &p01, const Math::vec3 &p10, const Math::vec3 &p11, Math::vec3 &ret_0, Math::vec3 &ret_1);
	UNIGINE_API int getClosestPointsOnLines(const Math::dvec3 &p00, const Math::dvec3 &p01, const Math::dvec3 &p10, const Math::dvec3 &p11, Math::dvec3 &ret_0, Math::dvec3 &ret_1);
	UNIGINE_API Math::vec3 projectOntoPlane(const Math::vec3 &v, const Math::vec3 &plane_normal);
	UNIGINE_API Math::dvec3 projectOntoPlane(const Math::dvec3 &v, const Math::dvec3 &plane_normal);
} // namespace

} // namespace Unigine
