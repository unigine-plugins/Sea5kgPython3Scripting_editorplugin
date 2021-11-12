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

#include <UnigineMemory.h>
#include <UnigineVector.h>
#include <UnigineHashMap.h>

namespace Unigine
{

class String;

template <int Capacity = 256>
class StringStack;

template <int Capacity = 256>
class StringArray;

class UNIGINE_API String
{
public:

	enum class Direction
	{
		LTR,
		RTL,
		Neutral,
		Digit,
	};

	String();
	String(String &&s);
	String(const String &s);
	String(const char *s);
	String(const char *s, int size);
	explicit String(const wchar_t *s);
	explicit String(const unsigned int *s);
	~String();

	String &operator=(const char *s);
	String &operator=(const String &s);
	String &operator=(String &&s);

	UNIGINE_INLINE String &operator+=(char c)
	{
		do_append(c);
		return *this;
	}

	UNIGINE_INLINE String &operator+=(const char *s)
	{
		if (s == nullptr)
			return *this;
		do_append(s, (int)strlen(s));
		return *this;
	}

	UNIGINE_INLINE String &operator+=(const String &s)
	{
		do_append(s.data, s.length);
		return *this;
	}

	UNIGINE_INLINE const char *get() const { return data; }
	UNIGINE_INLINE operator const char *() const { return data; }
	UNIGINE_INLINE operator const void *() const { return data; }
	UNIGINE_INLINE char &get(int index)
	{
		assert(index < length && index >= 0 && "String::get(): bad index");
		return data[index];
	}
	UNIGINE_INLINE char get(int index) const
	{
		assert(index < length && index >= 0 && "String::get(): bad index");
		return data[index];
	}

	UNIGINE_INLINE char &operator[](int index) { return get(index); }
	UNIGINE_INLINE char operator[](int index) const { return get(index); }

	UNIGINE_INLINE char &first() { return get(0); }
	UNIGINE_INLINE char first() const { return get(0); }
	UNIGINE_INLINE char &last() { return get(length - 1); }
	UNIGINE_INLINE char last() const { return get(length - 1); }

	UNIGINE_INLINE int size() const { return length; }
	UNIGINE_INLINE int space() const { return (capacity & CAPACITY_MASK); }
	UNIGINE_INLINE int empty() const { return length == 0; }

	void resize(int size);
	void allocate(int size);
	void reserve(int size);
	void shrink();

	void clear();
	void destroy();

	int find(char c, int case_sensitive = 1) const;
	int find(const char *s, int case_sensitive = 1) const;
	int find(const String &s, int case_sensitive = 1) const;

	int rfind(char c, int case_sensitive = 1) const;
	int rfind(const char *s, int case_sensitive = 1) const;
	int rfind(const String &s, int case_sensitive = 1) const;

	UNIGINE_INLINE int contains(char c, int case_sensitive = 1) const { return find(c, case_sensitive) != -1; }
	UNIGINE_INLINE int contains(const char *s, int case_sensitive = 1) const { return find(s, case_sensitive) != -1; }
	UNIGINE_INLINE int contains(const String &s, int case_sensitive = 1) const { return find(s, case_sensitive) != -1; }

	void copy(const char *s, int size = -1);
	void copy(const String &s, int size = -1);

	void swap(String &s);

	String &append(char c);
	String &append(const char *s, int size = -1);
	String &append(const String &s, int size = -1);
	String &append(String &&s, int size = -1);

	String &append(int pos, char c);
	String &append(int pos, const char *s, int size = -1);
	String &append(int pos, const String &s, int size = -1);

	String &remove();
	String &remove(int pos, int size = 1);

	String &lower();
	String &upper();
	String &capitalize();
	StringStack<> getLower() const;
	StringStack<> getUpper() const;

	String trim(const char *symbols = 0) const;
	String trimLast(const char *symbols = 0) const;
	String trimFirst(const char *symbols = 0) const;
	String replace(char before, char after, int case_sensitive = 1) const;
	String replace(const char *before, const char *after, int case_sensitive = 1) const;
	String substr(int pos, int size = -1) const;
	String dirname() const;
	String basename() const;
	String filename() const;
	String pathname() const;
	String extension() const;

	int utf8ToUnicode(wchar_t *dest, int size) const;
	int utf8ToUnicode(unsigned int *dest, int size) const;
	int utf8strlen() const;
	String utf8substr(int pos, int size = -1) const;

	int getInt() const;
	long long getLong() const;
	float getFloat() const;
	double getDouble() const;

	int startsWith(const char *s, int case_sensitive = 1, int size = -1) const;
	int startsWith(const String &s, int case_sensitive = 1, int size = -1) const;
	int endsWith(const char *s, int case_sensitive = 1, int size = -1) const;
	int endsWith(const String &s, int case_sensitive = 1, int size = -1) const;

	void vprintf(const char *format, va_list argptr);
	void printf(const char *format, ...) UNIGINE_PRINTF(2, 3);

	int vscanf(const char *format, va_list argptr);
	int scanf(const char *format, ...) UNIGINE_SCANF(2, 3);

	static int compare(const char *str0, const char *str1);
	static int compare(const char *str0, const char *str1, int case_sensitive);

	static bool isspace(int code);
	static bool isdigit(int code);
	static bool islower(int code);
	static bool isupper(int code);
	static bool isalpha(int code);

	UNIGINE_INLINE static char toLower(char c) { return (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c; }
	UNIGINE_INLINE static char toUpper(char c) { return (c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c; }

	static bool atob(const char *str);
	static int atoi(const char *str);
	static long long atol(const char *str);
	static float atof(const char *str);
	static double atod(const char *str);

	static StringStack<> itoa(int value, int radix = 10);
	static StringStack<> ltoa(long long value, int radix = 10);
	static StringStack<> ftoa(float value, int precision = -1);
	static StringStack<> dtoa(double value, int precision = -1, int use_inf = 0);

	static StringStack<> memory(size_t memory);

	static StringStack<> format(const char *format, va_list argptr);
	static StringStack<> format(const char *format, ...) UNIGINE_PRINTF(1, 2);

	static StringStack<> prettyFormat(int value);
	static StringStack<> prettyFormat(float value, int precision = -1);
	static StringStack<> prettyFormat(double value, int precision = -1);

	static int vsscanf(const char *str, const char *format, va_list argptr);
	static int sscanf(const char *str, const char *format, ...) UNIGINE_SCANF(2, 3);

	static StringStack<> trim(const char *str, const char *symbols);
	static StringStack<> trimFirst(const char *str, const char *symbols);
	static StringStack<> trimLast(const char *str, const char *symbols);
	static StringStack<> replace(const char *str, char before, char after, int case_sensitive = 1);
	static StringStack<> replace(const char *str, const char *before, const char *after, int case_sensitive = 1);

	static int startsWith(const char *data, const char *str, int case_sensitive = 1, int data_size = -1, int str_size = -1);
	static int endsWith(const char *data, const char *str, int case_sensitive = 1, int data_size = -1, int str_size = -1);

	static int getStringArray(const char *str, Vector<String> &dest);
	static StringArray<> split(const char *str, const char *delimiters);
	static StringStack<> substr(const char *str, int pos, int size = -1);
	static StringStack<> substr(const String &str, int pos, int size = -1);
	static StringStack<> addslashes(const char *str);
	static StringStack<> stripslashes(const char *str);
	static unsigned int hash(const char *str, int size = -1);

	static StringStack<> dirname(const char *str);
	static StringStack<> basename(const char *str);
	static StringStack<> filename(const char *str);
	static StringStack<> pathname(const char *str);
	static StringStack<> extension(const char *str);
	static StringStack<> removeExtension(const char *str);

	static StringStack<> absname(const char *path, const char *str);
	static StringStack<> relname(const char *path, const char *str);
	static StringStack<> extension(const char *str, const char *ext);

	static StringStack<> title(const char *str);

	static StringStack<> joinPaths(const char *p0, const char *p1);
	static StringStack<> joinPaths(const char *p0, const String &p1);
	static StringStack<> joinPaths(const String &p0, const char *p1);
	static StringStack<> joinPaths(const String &p0, const String &p1);
	static String &joinPaths(String &ret, const char *p0, const char *p1,
			int size0 = -1, int size1 = -1);

	static StringStack<> normalizePath(const char *path);
	static StringStack<> normalizeDirPath(const char *path);

	static String &normalizePath(String &ret, const char *path, int size = -1);
	static String &normalizeDirPath(String &ret, const char *path, int size = -1);

	static int unicodeToUtf8(unsigned int code, char *dest);
	static StringStack<> unicodeToUtf8(unsigned int code);
	static StringStack<> unicodeToUtf8(const wchar_t *src);
	static StringStack<> unicodeToUtf8(const unsigned int *src);
	static int utf8ToUnicode(const char *src, unsigned int &code);
	static int utf8ToUnicode(const char *src, wchar_t *dest, int size);
	static int utf8ToUnicode(const char *src, unsigned int *dest, int size);

	static bool equal(const char* s0, const char* s1) { return strcmp(s0, s1) == 0; }
	static bool equal(const String &s0, const char* s1) { return strcmp(s0.get(), s1) == 0; }
	static bool equal(const char* s0, const String &s1) { return strcmp(s0, s1.get()) == 0; }
	static bool equal(const String &s0, const String &s1) { return strcmp(s0.get(), s1.get()) == 0; }

	static int utf8strlen(const char *str);
	static StringStack<> utf8substr(const char *str, int pos, int size = -1);

	// bidirectional text support
	static void reverseUtf8BiDirectional(String &string);
	static Direction unicodeGetDirection(unsigned int code);

	static int match(const char *pattern, const char *str);

	static const String null;

protected:
	template <int>
	friend class StringStack;

	UNIGINE_INLINE String(int c, char *d) : length(0), capacity(c), data(d) {}

	enum
	{
		CAPACITY = 4,
		DYNAMIC_FLAG = (int)(1 << (sizeof(int) * 8 - 1)),
		CAPACITY_MASK = ~(int)DYNAMIC_FLAG,
	};

	// bidirectional text
	static void reverse_utf8_bidirectional(char *str);

	UNIGINE_INLINE void do_assign(const char *s, int size = -1)
	{
		assert(length == 0);
		if (s == nullptr)
		{
			data[0] = '\0';
			return;
		}

		length = size == -1 ? int(strlen(s)) : size;
		if (length + 1 > capacity)
		{
			data = (char *)Memory::allocate(length + 1);
			capacity = (length + 1) | DYNAMIC_FLAG;
		}

		memcpy(data, s, length);
		data[length] = '\0';
	}

	UNIGINE_INLINE void do_copy(const char *s, int size)
	{
		length = size;
		if (length + 1 > (capacity & CAPACITY_MASK))
		{
			char *new_data = (char *)Memory::allocate(length + 1);
			memcpy(new_data, s, length);
			if (capacity & DYNAMIC_FLAG)
				Memory::deallocate(data);
			capacity = (length + 1) | DYNAMIC_FLAG;
			data = new_data;
		}

		memmove(data, s, length);
		data[length] = '\0';
	}

	UNIGINE_INLINE void do_append(char c)
	{
		if (length + 2 > (capacity & CAPACITY_MASK))
		{
			int new_capacity = grow_to(length + 1);
			char *new_data = (char *)Memory::allocate(new_capacity);
			memcpy(new_data, data, length);
			if (capacity & DYNAMIC_FLAG)
				Memory::deallocate(data);
			capacity = new_capacity | DYNAMIC_FLAG;
			data = new_data;
		}

		data[length] = c;
		data[++length] = '\0';
	}

	UNIGINE_INLINE void do_append(const char *s, int size)
	{
		if (length + size + 1 > (capacity & CAPACITY_MASK))
		{
			int new_capacity = grow_to(length + size);
			char *new_data = (char *)Memory::allocate(new_capacity);
			memcpy(new_data, data, length);
			if (capacity & DYNAMIC_FLAG)
				Memory::deallocate(data);
			capacity = new_capacity | DYNAMIC_FLAG;
			data = new_data;
		}

		memmove(data + length, s, size);
		length += size;
		data[length] = '\0';
	}

	UNIGINE_INLINE void do_append(int pos, char c)
	{
		assert((unsigned int)pos <= (unsigned int)length && "String::do_append(): bad position");
		int new_length = length + 1;
		if (new_length < (capacity & CAPACITY_MASK))
		{
			memmove(data + pos + 1, data + pos, length - pos);
			data[pos] = c;
		} else
		{
			int new_capacity = grow_to(new_length);
			char *new_data = (char *)Memory::allocate(new_capacity);
			memcpy(new_data, data, pos);
			new_data[pos] = c;
			memcpy(new_data + pos + 1, data + pos, length - pos);
			if (capacity & DYNAMIC_FLAG)
				Memory::deallocate(data);
			capacity = new_capacity | DYNAMIC_FLAG;
			data = new_data;
		}
		length = new_length;
		data[length] = '\0';
	}

	UNIGINE_INLINE void do_append(int pos, const char *s, int size)
	{
		assert((unsigned int)pos <= (unsigned int)length && "String::do_append(): bad position");
		int new_length = length + size;
		if (new_length < (capacity & CAPACITY_MASK))
		{
			memmove(data + pos + size, data + pos, length - pos);
			memmove(data + pos, s, size);
		} else
		{
			int new_capacity = grow_to(new_length);
			char *new_data = (char *)Memory::allocate(new_capacity);
			memcpy(new_data, data, pos);
			memcpy(new_data + pos, s, size);
			memcpy(new_data + pos + size, data + pos, length - pos);
			if (capacity & DYNAMIC_FLAG)
				Memory::deallocate(data);
			capacity = new_capacity | DYNAMIC_FLAG;
			data = new_data;
		}
		length = new_length;
		data[length] = '\0';
	}

	UNIGINE_INLINE int grow_to(int new_length)
	{
		assert((capacity & CAPACITY_MASK) < 0x7fffffff && "String::grow_to: capacity limit");
		size_t ret = new_length + new_length / 2 + 2;
		return int(ret > 0x7fffffff ? 0x7fffffff : ret);
	}

	int length;
	int capacity;
	char *data;

	char stack_data[CAPACITY];
};

class StringPtr
{
public:
	StringPtr();
	StringPtr(const String &s);
	StringPtr(const StringPtr &s);
	StringPtr(const char *s);
	~StringPtr();

	StringPtr &operator=(const char *s);
	StringPtr &operator=(const String &s);
	StringPtr &operator=(const StringPtr &s);
	void swap(StringPtr &s);

	StringPtr &operator+=(const char *s);
	StringPtr &operator+=(const String &s);

	UNIGINE_INLINE const char *get() const { return (string) ? *string : String::null; }
	UNIGINE_INLINE const String &getString() const { return (string) ? *string : String::null; }
	UNIGINE_INLINE operator const char *() const { return (string) ? *string : String::null; }
	UNIGINE_INLINE operator const void *() const { return (string) ? *string : String::null; }
	UNIGINE_INLINE int size() const { return (string) ? string->size() : 0; }
	UNIGINE_INLINE int empty() const { return (string) ? string->empty() : 1; }
	UNIGINE_INLINE void clear()
	{
		delete string;
		string = 0;
	}

private:
	String *string;
};

template <int Capacity>
class StringStack : public String
{
public:
	StringStack() : String(Capacity, stack_data)
	{
		data[length] = '\0';
	}

	StringStack(const String &s) : String(Capacity, stack_data)
	{
		do_assign(s.data, s.length);
	}

	StringStack(String &&s) : String(Capacity, stack_data)
	{
		if (s.capacity & DYNAMIC_FLAG)
		{
			length = s.length;
			capacity = s.capacity;
			data = s.data;

			s.length = 0;
			s.capacity = CAPACITY;
			s.data = s.stack_data;
			s.data[s.length] = '\0';
		} else
		{
			do_assign(s.data, s.length);
			s.clear();
		}
	}

	StringStack(const StringStack &s) : String(Capacity, stack_data)
	{
		do_assign(s.data, s.length);
	}

	template<int OtherCapacity>
	StringStack(StringStack<OtherCapacity> &&s) : String(Capacity, stack_data)
	{
		if (s.capacity & DYNAMIC_FLAG)
		{
			length = s.length;
			capacity = s.capacity;
			data = s.data;

			s.length = 0;
			s.data = nullptr;
			s.capacity = 0;
			s.destroy();
		} else
		{
			do_copy(s.data, s.length);
			s.clear();
		}
	}

	StringStack(const char *s) : String(Capacity, stack_data)
	{
		do_assign(s);
	}

	StringStack(const char *s, int size) : String(Capacity, stack_data)
	{
		do_assign(s, size);
	}

	StringStack &operator=(const char *s)
	{
		if (data == s)
			return *this;
		copy(s);
		return *this;
	}

	StringStack &operator=(const String &s)
	{
		if (data == s.data)
			return *this;
		copy(s);
		return *this;
	}

	StringStack &operator=(const StringStack &s)
	{
		if (data == s.data)
			return *this;
		copy(s);
		return *this;
	}

	template<int OtherCapacity>
	StringStack &operator=(StringStack<OtherCapacity> &&s)
	{
		if (data == s.data)
			return *this;
		if (s.capacity & DYNAMIC_FLAG)
		{
			destroy();
			length = s.length;
			capacity = s.capacity;
			data = s.data;

			s.length = 0;
			s.data = nullptr;
			s.capacity = 0;
			s.destroy();
		} else
		{
			do_copy(s.data, s.length);
			s.clear();
		}
		return *this;
	}

	void destroy()
	{
		String::destroy();
		capacity = Capacity;
		data = stack_data;
		data[length] = '\0';
	}

private:
	char stack_data[Capacity];
};

template <int Capacity>
class StringArray
{
private:
	friend class String;

	StringArray(int size)
		: data_length(size)
		, data(stack_data)
		, indices_length(0)
		, indices_capacity(Capacity)
		, indices(stack_indices)
	{
		if (data_length + 1 > Capacity)
			data = (char *)Memory::allocate(data_length + 1);
		data[data_length] = '\0';
	}

	void append(int index)
	{
		if (indices_length + 1 > indices_capacity)
		{
			indices_capacity = (indices_length + 1) * 2;
			int *new_indices = (int *)Memory::allocate(indices_capacity * sizeof(int));
			memcpy(new_indices, indices, indices_length * sizeof(int));
			if (indices != stack_indices)
				Memory::deallocate(indices);
			indices = new_indices;
		}
		indices[indices_length++] = index;
	}

public:
	StringArray()
		: data_length(0)
		, data(stack_data)
		, indices_length(0)
		, indices_capacity(Capacity)
		, indices(stack_indices)
	{

	}

	StringArray(const StringArray &s)
		: data_length(s.data_length)
		, data(stack_data)
		, indices_length(s.indices_length)
		, indices_capacity(Capacity)
		, indices(stack_indices)
	{
		if (data_length + 1 > Capacity)
			data = (char *)Memory::allocate(data_length + 1);
		memcpy(data, s.data, data_length);
		data[data_length] = '\0';
		if (indices_length > indices_capacity)
		{
			indices_capacity = indices_length;
			indices = (int *)Memory::allocate(indices_capacity * sizeof(int));
		}
		memcpy(indices, s.indices, indices_length * sizeof(int));
	}

	~StringArray()
	{
		if (data != stack_data)
			Memory::deallocate(data);
		if (indices != stack_indices)
			Memory::deallocate(indices);
	}

	UNIGINE_INLINE const char *operator[](int index) const
	{
		assert(index < indices_length && indices_length >= 0 && "StringArray::operator[](): bad index");
		return data + indices[index];
	}

	UNIGINE_INLINE int size() const { return indices_length; }
	UNIGINE_INLINE int empty() const { return indices_length == 0; }

private:
	int data_length;
	char *data;
	char stack_data[Capacity];

	int indices_length;
	int indices_capacity;
	int *indices;
	int stack_indices[Capacity];
};

UNIGINE_API StringStack<> operator+(String &&s0, String &&s1);
UNIGINE_API StringStack<> operator+(String &&s0, const String &s1);
UNIGINE_API StringStack<> operator+(const String &s0, String &&s1);
UNIGINE_API StringStack<> operator+(String &&s0, const char *s1);
UNIGINE_API StringStack<> operator+(const char *s0, String &&s1);
UNIGINE_API StringStack<> operator+(const String &s0, const String &s1);
UNIGINE_API StringStack<> operator+(const String &s0, const char *s1);
UNIGINE_API StringStack<> operator+(const char *s0, const String &s1);
UNIGINE_API StringStack<> operator+(const String &s0, char c1);
UNIGINE_API StringStack<> operator+(String &&s0, char c1);
UNIGINE_API StringStack<> operator+(char c0, const String &s1);
UNIGINE_API StringStack<> operator+(char c0, String &&s1);

UNIGINE_API bool operator==(const String &s0, const String &s1);
UNIGINE_API bool operator==(const String &s0, const char *s1);
UNIGINE_API bool operator==(const char *s0, const String &s1);

UNIGINE_API bool operator!=(const String &s0, const String &s1);
UNIGINE_API bool operator!=(const String &s0, const char *s1);
UNIGINE_API bool operator!=(const char *s0, const String &s1);

UNIGINE_API bool operator<(const String &s0, const String &s1);
UNIGINE_API bool operator<(const String &s0, const char *s1);
UNIGINE_API bool operator<(const char *s0, const String &s1);

UNIGINE_API bool operator>(const String &s0, const String &s1);
UNIGINE_API bool operator>(const String &s0, const char *s1);
UNIGINE_API bool operator>(const char *s0, const String &s1);

UNIGINE_API bool operator<=(const String &s0, const String &s1);
UNIGINE_API bool operator<=(const String &s0, const char *s1);
UNIGINE_API bool operator<=(const char *s0, const String &s1);

UNIGINE_API bool operator>=(const String &s0, const String &s1);
UNIGINE_API bool operator>=(const String &s0, const char *s1);
UNIGINE_API bool operator>=(const char *s0, const String &s1);

UNIGINE_API bool operator==(const StringPtr &s0, const StringPtr &s1);
UNIGINE_API bool operator==(const StringPtr &s0, const char *s1);
UNIGINE_API bool operator==(const char *s0, const StringPtr &s1);

UNIGINE_API bool operator!=(const StringPtr &s0, const StringPtr &s1);
UNIGINE_API bool operator!=(const StringPtr &s0, const char *s1);
UNIGINE_API bool operator!=(const char *s0, const StringPtr &s1);

template<typename Type>
struct Hasher;

template<>
struct Hasher<String>
{
	using HashType = unsigned int;
	UNIGINE_INLINE static HashType create(const String &v) { return String::hash(v.get(), v.size()); }
};

template<int size>
struct Hasher<StringStack<size>>
{
	using HashType = unsigned int;
	UNIGINE_INLINE static HashType create(const StringStack<size> &v) { return String::hash(v.get(), v.size()); }
};


template <typename Type, typename Counter = unsigned int>
class StringMap: public HashMap<String, Type, Counter>
{
public:
	using Parent = HashMap<String, Type, Counter>;

	UNIGINE_INLINE auto find(const char *str)
	{
		temp = str;
		return Parent::find(temp);
	}
	UNIGINE_INLINE auto find(const char *str) const
	{
		temp = str;
		return Parent::find(temp);
	}
	UNIGINE_INLINE auto findFast(const char *str) const
	{
		temp = str;
		return Parent::findFast(temp);
	}

	UNIGINE_INLINE auto value(const char *str) const
	{
		temp = str;
		return Parent::value(temp);
	}
	UNIGINE_INLINE auto value(const char *str, const Type &def) const
	{
		temp = str;
		return Parent::value(temp, def);
	}

	UNIGINE_INLINE auto get(const char *str)
	{
		temp = str;
		return Parent::get(temp);
	}
	UNIGINE_INLINE auto get(const char *str) const
	{
		temp = str;
		return Parent::get(temp);
	}

	UNIGINE_INLINE auto contains(const char *str) const
	{
		temp = str;
		return Parent::contains(temp);
	}
	UNIGINE_INLINE auto contains(const char *str, const Type &value) const
	{
		temp = str;
		return Parent::contains(temp, value);
	}

private:
	thread_local static String temp;
};

template <typename Type, typename Counter>
thread_local String StringMap<Type, Counter>::temp;

} // namespace Unigine
