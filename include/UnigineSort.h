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


#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif


namespace Unigine
{

template <class Type>
Type min(Type v0, Type v1)
{
	return (v0 < v1) ? v0 : v1;
}

template <class Type>
Type max(Type v0, Type v1)
{
	return (v0 > v1) ? v0 : v1;
}

template <class Type>
Type clamp(Type v, Type v0, Type v1)
{
	if (v < v0)
		return v0;
	if (v1 < v)
		return v1;
	return v;
}

template <class Type>
Type lerp(Type v0, Type v1, Type k)
{
	return v0 + (v1 - v0) * k;
}

template <class Type>
void swap(Type &v0, Type &v1)
{
	Type temp = v0;
	v0 = v1;
	v1 = temp;
}

/// @cond

template <class Type>
struct quick_sort_default_compare
{
	int operator() (const Type &t0, const Type &t1) const
	{
		return t0 < t1;
	}
};

template <class Type, class Func>
struct quick_sort_function_compare
{
	Func func;

	quick_sort_function_compare(Func f) : func(f) {}

	int operator() (const Type &t0, const Type &t1) const
	{
		return func(t0, t1);
	}
};

//////////////////////////////////////////////////////////////////////////

// integer log2, ie. how many bits we need to store this int
inline int intLog2(unsigned int val)
{
	int bits = 0;
	while (val)
	{
		val >>= 1;
		bits++;
	}
	return bits;
}

// heap sort helper
template <typename Type, typename Data, typename Compare, bool HAS_DATA>
void sift_down(Type *values, int first, int last, Compare COMP, Data *data)
{
	for ( ;; )
	{
		int child = first * 2 + 1;
		if (child > last)
			return;

		int child1 = child + 1;
		if (child1 <= last && COMP(values[child], values[child1]))
			child = child1;

		if (COMP(values[child], values[first]))
			return;
		Unigine::swap(values[child], values[first]);
		if (HAS_DATA)
			Unigine::swap(data[child], data[first]);
		first = child;
	}
}

// heap sort
template <typename Type, typename Data, typename Compare, bool HAS_DATA>
void heap_sort(Type *values, int len, Compare COMP, Data *data)
{
	if (!values || len < 2)
		return;

	// build a max-heap, so that the largest element is root
	for (int start = (len - 2) >> 1; start >= 0; start--)
		sift_down<Type, Data, Compare, HAS_DATA>(values, start, len - 1, COMP, data);

	// now keep popping root into the end of array
	for (int end = len - 1; end > 0;)
	{
		Unigine::swap(values[0], values[end]);
		if (HAS_DATA)
			Unigine::swap(data[0], data[end]);
		sift_down<Type, Data, Compare, HAS_DATA>(values, 0, --end, COMP, data);
	}
}

// quick sort
template <class Type, typename Data, class Compare, bool HAS_DATA>
void quick_sort(Type *values, int len, Compare COMP, Data *data)
{
	if (!values || len < 2)
		return;

	// st0 and st1 are stacks with left and right bounds of array-part.
	// They allow us to avoid recursion in quicksort implementation.
	Type *st0[32], *st1[32], *a, *b, *i, *j, x;
	int k = 1;

	const int SMALL_THRESH = 32;
	int depth_limit = intLog2(len) * 3 / 2;

	st0[0] = values;
	st1[0] = values + len - 1;
	while (k)
	{
		k--;
		i = a = st0[k];
		j = b = st1[k];

		// if quicksort fails on this data, switch to heapsort
		if (!k)
			if (!--depth_limit)
				return heap_sort<Type, Data, Compare, HAS_DATA>(a, (int)(b - a + 1), COMP, data + (a - values));

		// for tiny sub-arrays, switch to insertion sort
		if (b - a <= SMALL_THRESH)
		{
			for (i = a + 1; i <= b; i++)
			{
				for (j = i; j > a;)
				{
					Type *j1 = j - 1;
					if (COMP(*j1, *j))
						break;
					Unigine::swap(*j, *j1);
					if (HAS_DATA)
						Unigine::swap(data[j - values], data[j1 - values]);
					j = j1;
				}
			}
			continue;
		}

		// ATTENTION! This copy can lead to memleaks if your CopyKey
		// copies something which is not freed by objects destructor.
		x = a[(b - a) >> 1];
		while (a < b)
		{
			while (i <= j)
			{
				while (COMP(*i, x))
					i++;
				while (COMP(x, *j))
					j--;
				if (i <= j)
				{
					Unigine::swap(*i, *j);
					if (HAS_DATA)
						Unigine::swap(data[i - values], data[j - values]);
					i++;
					j--;
				}
			}

			// Not so obvious optimization. We put smaller array-parts
			// to the top of stack. That reduces peak stack size.
			if (j - a >= b - i)
			{
				if (a < j)
				{
					st0[k] = a;
					st1[k] = j;
					k++;
				}
				a = i;
			} else
			{
				if (i < b)
				{
					st0[k] = i;
					st1[k] = b;
					k++;
				}
				b = j;
			}
		}
	}
}

/// @endcond

template <class Type>
void quickSort(Type *array, int size)
{
	quick_sort_default_compare<Type> compare;
	quick_sort<Type, Type, quick_sort_default_compare<Type>, false>(array, size, compare, NULL);
}

template <class Type, class Compare>
void quickSort(Type *array, int size, Compare compare)
{
	quick_sort<Type, Type, Compare, false>(array, size, compare, NULL);
}

template <class Type, class A0, class A1>
void quickSort(Type *array, int size, int (*func)(A0,A1))
{
	quick_sort_function_compare<Type, int (*)(A0,A1)> compare(func);
	quick_sort<Type, Type, quick_sort_function_compare<Type,int (*)(A0,A1)>, false>(array, size, compare, NULL);
}

template <class Type, class Data>
void quickDoubleSort(Type *array, Data *data, int size)
{
	quick_sort_default_compare<Type> compare;
	quick_sort<Type, Data, quick_sort_default_compare<Type>, true>(array, size, compare, data);
}

template <class Type, class Data, class Compare>
void quickDoubleSort(Type *array, Data *data, int size, Compare compare)
{
	quick_sort<Type, Data, Compare, true>(array, size, compare, data);
}

template <class Type, class Data, class A0, class A1>
void quickDoubleSort(Type *array, Data *data, int size, int (*func)(A0,A1))
{
	quick_sort_function_compare<Type,int (*)(A0,A1)> compare(func);
	quick_sort<Type, Data, quick_sort_function_compare<Type,int (*)(A0,A1)>, true>(array, size, compare, data);
}

} // namespace Unigine
