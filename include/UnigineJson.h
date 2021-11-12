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

#include "UniginePtr.h"
#include "UnigineBase.h"
#include "UnigineString.h"
#include "UnigineMathLib.h"

namespace Unigine
{


class UNIGINE_API Json : public APIInterface
{
public:
	static Ptr<Json> create();
	static Ptr<Json> create(const char *name);
	Ptr<Json> addChild(const Ptr<Json> &json);
	Ptr<Json> addChild(const char *name);
	Ptr<Json> addChild(const char *name, int value);
	Ptr<Json> addChild(const char *name, const char *value);
	Ptr<Json> addChild(const char *name, double value);
	void clearChildren();
	void clear();
	void copy(const Ptr<Json> &source);
	Ptr<Json> find(const char *name);
	int isArray() const;
	void setArray();
	int isBool() const;
	void setBool(int arg1);
	int getBool() const;
	int isChild(const char *name) const;
	Ptr<Json> getChild(int num) const;
	Ptr<Json> getChild(const char *name) const;
	int isNull() const;
	void setNull();
	int isObject() const;
	void setObject();
	int isString() const;
	void setString(const char *arg1);
	String getString();
	int isNumber() const;
	void setNumber(int arg1);
	void setNumber(double arg1);
	double getNumber() const;
	Math::vec2 getVec2() const;
	Math::vec3 getVec3() const;
	Math::vec4 getVec4() const;
	const char *getTypeName() const;
	String getSubTree(const char *name = 0);
	String getFormattedSubTree(const char *name = 0);
	const char *getName() const;
	void setName(const char *name);
	int getNumChildren() const;
	Ptr<Json> getParent();
	int load(const char *path);
	int parse(const char *source);
	Ptr<Json> removeChild(const Ptr<Json> &json);
	Ptr<Json> removeChild(const char *name);
	int save(const char *path) const;
	void read(const char *name, bool & value) const;
	void read(const char *name, int & value) const;
	void read(const char *name, unsigned int & value) const;
	void read(const char *name, char & value) const;
	void read(const char *name, double & value) const;
	void read(const char *name, float & value) const;
	void write(const char *name, bool value);
	void write(const char *name, int value);
	void write(const char *name, unsigned int value);
	void write(const char *name, char value);
	void write(const char *name, double value);
	void write(const char *name, float value);
};
typedef Ptr<Json> JsonPtr;

} // namespace Unigine
