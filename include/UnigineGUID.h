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

class UNIGINE_API UGUID
{
public:
	static const UGUID empty;

	UGUID();
	explicit UGUID(const char *str);

	UGUID(const UGUID &guid);
	UGUID &operator=(const UGUID &g);
	UGUID &operator=(const char *str);

	int operator==(const UGUID &g) const;
	int operator!=(const UGUID &g) const;
	int operator<=(const UGUID &g) const;
	int operator>=(const UGUID &g) const;
	int operator<(const UGUID &g) const;
	int operator>(const UGUID &g) const;

	void generate();
	void generate(const char *str);

	void setFileSystemString(const char *str);
	UNIGINE_INLINE const char *getFileSystemString() const { return str; }
	const char *getString() const;
	void setString(const char *str);

	void clear();
	int isEmpty() const;
	int isValid() const { return !isEmpty(); }

	UNIGINE_INLINE const char *get() const { return str; }
	UNIGINE_INLINE char &get(int index)
	{
		assert(index < 48 && index >= 0 && "UGUID::get(): bad index");
		return str[index];
	}
	UNIGINE_INLINE char get(int index) const
	{
		assert(index < 48 && index >= 0 && "UGUID::get(): bad index");
		return str[index];
	}
	UNIGINE_INLINE char &operator[](int index) { return get(index); }
	UNIGINE_INLINE char operator[](int index) const { return get(index); }

	UNIGINE_INLINE operator const char *() const { return str; }
	UNIGINE_INLINE operator const void *() const { return str; }

	UNIGINE_INLINE unsigned int hash() const
	{
		return (((value_int[0] ^ value_int[1]) << 5) ^
				value_int[2] ^ value_int[3] ^ value_int[4]);
	}

private:
	void read_string(const char *str, unsigned int *values);
	void write_string(const unsigned int *values, int size, char *str);

private:
	union
	{
		unsigned char value[24];
		unsigned int value_int[6];
		unsigned long long value_long[3];
	};

	char str[48];

};

template<typename Type>
struct Hasher;

template<>
struct Hasher<UGUID>
{
	using HashType = unsigned int;
	UNIGINE_INLINE static HashType create(const UGUID &v) { return v.hash(); }
};

} // namespace
