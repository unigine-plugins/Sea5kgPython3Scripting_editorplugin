/* Copyright (C) 2005-2022, UNIGINE. All rights reserved.
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
#include "UniginePtr.h"

namespace Unigine
{


class UNIGINE_API Dir : public APIInterface
{
public:
	static Ptr<Dir> create();
	static Ptr<Dir> create(const char *name);

	enum
	{
		ATTRIBUTE_HIDDEN = 1 << 0,
		ATTRIBUTE_READONLY = 1 << 1,
		ATTRIBUTE_TEMPORARY = 1 << 2,
	};
	static const char *getHomeDir();
	static const char *getCurrentDir();
	static int chdir(const char *path);
	static int mkdir(const char *path);
	static int mkdir(const char *path, bool recursion);
	static int rmdir(const char *path);
	static int rmdir(const char *path, bool recursion);
	static int remove(const char *path);
	static int rename(const char *path, const char *new_name);
	static int copy(const char *path, const char *new_name);
	static int chmod(const char *path, int mode);
	static int getmod(const char *path);
	static bool isDir(const char *path);
	static bool isFile(const char *path);
	static int setMTime(const char *path, long long time);
	static long long getMTime(const char *path);
	static long long getFileSize(const char *path);
	static int isAbsolute(const char *path);
	static int setAttribute(const char *path, int attribute);
	static int getAttribute(const char *path);
	bool open(const char *name);
	bool close();
	bool isOpened() const;
	const char *getName() const;
	size_t getSize() const;
	int getNumDirs() const;
	const char *getDirName(int num) const;
	int getNumFiles() const;
	const char *getFileName(int num) const;
	long long getFileMTime(int num) const;
	size_t getFileSize(int num) const;
};
typedef Ptr<Dir> DirPtr;

} // namespace Unigine
