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

#include <UnigineBase.h>

namespace Unigine
{

struct UNIGINE_API Palette
{
	enum
	{
		RED = 0, ORANGE, YELLOW, CHARTREUSE,
		GREEN, SPRINGGREEN, AQUA, AZURE,
		BLUE, VIOLET, MAGENTA, ROSE,

		SIZE
	};

	Palette();
	Palette(const Palette &palette);
	Palette(const float (&palette)[SIZE]);
	Palette(float value);

	Palette &operator=(const Palette &palette);

	bool operator==(const Palette &palette) const;
	bool operator==(const float (&palette)[SIZE]) const;
	bool operator==(float value) const;

	bool operator!=(const Palette &palette) const;
	bool operator!=(const float (&palette)[SIZE]) const;
	bool operator!=(float value) const;

	void clear(float value = 0.0f);
	void copy(const Palette &src);

	union
	{
		struct
		{
			float red, orange, yellow, chartreuse, green, spring_green, cyan, azure, blue, violet, magenta, rose;
		};

		float colors[SIZE];
	};
};

} // namespace
