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

#include <UnigineMathLib.h>
#include <UnigineVector.h>

namespace Unigine
{
	namespace Math
	{

		/*
		Types of 2D polygon:
			1) convex, concave
			2) holed, solid
			3) looped, line
			4) CCW or CW winding
		*/

		// sets polygon to counter-clockwise orientation
		UNIGINE_API int setPolygonToCCW(Vector<vec2> &points);

		// triangulation by ear clipping algorithm (complexity: O(n^2)/O(n))
		// support concave polygons, for CCW orientation only
		UNIGINE_API void triangulatePolygon(const Vector<vec2> &points, Vector<unsigned short> &indices, int append_to_result = 0);

		// return points representing an shrunk/enlarged polygon
		// support concave polygons, CCW and CW orientations
		UNIGINE_API void resizePolygon(const Vector<vec2> &points, float offset, Vector<vec2> &result_points, int append_to_result = 0);

		// find the point of intersection between the lines p1 --> p2 and p3 --> p4
		UNIGINE_API void findIntersection(const vec2 &p1, const vec2 &p2, const vec2 &p3, const vec2 &p4,
			int &lines_intersect, int &segments_intersect, vec2 &intersection,
			vec2 &close_p1, vec2 &close_p2);

		// return true if the polygon is oriented clockwise
		UNIGINE_API int polygonIsOrientedClockwise(const Vector<vec2> &points);

		// return the polygon's area in "square units".
		// the value will be negative if the polygon is
		// oriented clockwise
		UNIGINE_API float getPolygonAreaSigned(const Vector<vec2> &points);

		// return the polygon's area in "square units"
		UNIGINE_API float getPolygonArea(const Vector<vec2> &points);

		// find the area of a triangle. This function uses the 1/2 determinant
		// method. Given three points (x1, y1), (x2, y2), (x3, y3):
		//             | x1 y1 1 |
		// Area = .5 * | x2 y2 1 |
		//             | x3 y3 1 |
		// From: http://mcraefamily.com/MathHelp/GeometryTriangleAreaDeterminant.htm
		UNIGINE_API float getTriangleArea(const vec2 &p1, const vec2 &p2, const vec2 &p3);

		// return on which side of the segment the point is
		UNIGINE_API float sign(const vec2 &point, const vec2 &segment_p1, const vec2 &segment_p2);

		// return true if the point is inside triangle
		UNIGINE_API int pointTriangleInside(const vec2 &point, const vec2 &v0, const vec2 &v1, const vec2 &v2);
	}
}
