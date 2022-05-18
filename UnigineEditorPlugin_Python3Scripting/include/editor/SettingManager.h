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

#pragma once

#include <editor/EditorGlobal.h>

#include <UnigineString.h>
#include <UnigineGUID.h>


namespace Editor
{

class EDITOR_API SettingsParameters
{
public:
	virtual ~SettingsParameters();

	virtual bool contains(const char *full_parameter_name) const = 0;
	virtual bool remove(const char *full_parameter_name) = 0;

	virtual void setInt(const char *full_parameter_name, int value) = 0;
	virtual int getInt(const char *full_parameter_name, int default_value = 0) const = 0;

	virtual void setInt64(const char *full_parameter_name, int64_t value) = 0;
	virtual int64_t getInt64(const char *full_parameter_name, int64_t default_value = 0) const = 0;

	virtual void setFloat(const char *full_parameter_name, float value) = 0;
	virtual float getFloat(const char *full_parameter_name, float default_value = 0) const = 0;

	virtual void setDouble(const char *full_parameter_name, double value) = 0;
	virtual double getDouble(const char *full_parameter_name, double default_value = 0) const = 0;

	virtual void setBool(const char *full_parameter_name, bool value) = 0;
	virtual bool getBool(const char *full_parameter_name, bool default_value = false) const = 0;

	virtual void setGUID(const char *full_parameter_name, const Unigine::UGUID &value) = 0;
	virtual Unigine::UGUID getGUID(const char *full_parameter_name,
		const Unigine::UGUID &default_value = Unigine::UGUID::empty) const = 0;

	virtual void setString(const char *full_parameter_name, const char *value) = 0;
	virtual Unigine::StringStack<> getString(const char *full_parameter_name,
		const char *default_value = nullptr) const = 0;
};

class EDITOR_API UserSettings : public SettingsParameters
{
public:
	virtual const char *getPath() const = 0;
};

class EDITOR_API SettingManager final
{
public:
	static UserSettings &userSettings();
};

namespace Utils
{

class SettingsParametersGroup
{
public:
	SettingsParametersGroup(SettingsParameters &s, const char *group)
		: sp{s}
		, group_path(group)
	{}

	bool contains(const char *parameter_name) const
	{
		return sp.contains(makeFullName(parameter_name).get());
	}
	void remove(const char *parameter_name)
	{
		sp.remove(makeFullName(parameter_name).get());
	}

	void setInt(const char *parameter_name, int value)
	{
		sp.setInt(makeFullName(parameter_name).get(), value);
	}
	int getInt(const char *parameter_name, int default_value = 0) const
	{
		return sp.getInt(makeFullName(parameter_name).get(), default_value);
	}

	void setInt64(const char *parameter_name, int64_t value)
	{
		sp.setInt64(makeFullName(parameter_name).get(), value);
	}
	int64_t getInt64(const char *parameter_name, int64_t default_value = 0) const
	{
		return sp.getInt64(makeFullName(parameter_name).get(), default_value);
	}

	void setFloat(const char *parameter_name, float value)
	{
		sp.setFloat(makeFullName(parameter_name).get(), value);
	}
	float getFloat(const char *parameter_name, float default_value = 0.0) const
	{
		return sp.getFloat(makeFullName(parameter_name).get(), default_value);
	}

	void setDouble(const char *parameter_name, double value)
	{
		sp.setDouble(makeFullName(parameter_name).get(), value);
	}
	double getDouble(const char *parameter_name, double default_value = 0.0) const
	{
		return sp.getDouble(makeFullName(parameter_name).get(), default_value);
	}

	void setBool(const char *parameter_name, bool value)
	{
		sp.setBool(makeFullName(parameter_name).get(), value);
	}
	bool getBool(const char *parameter_name, bool default_value = 0) const
	{
		return sp.getBool(makeFullName(parameter_name).get(), default_value);
	}

	void setGUID(const char *parameter_name, const Unigine::UGUID &value)
	{
		sp.setGUID(makeFullName(parameter_name).get(), value);
	}
	Unigine::UGUID getGUID(const char *parameter_name,
		const Unigine::UGUID &default_value = Unigine::UGUID::empty) const
	{
		return sp.getGUID(makeFullName(parameter_name).get(), default_value);
	}

	void setString(const char *parameter_name, const char *value)
	{
		sp.setString(makeFullName(parameter_name).get(), value);
	}
	Unigine::StringStack<> getString(const char *parameter_name,
		const char *default_value = nullptr) const
	{
		return sp.getString(makeFullName(parameter_name).get(), default_value);
	}

	Unigine::StringStack<> makeFullName(const char *parameter_name) const
	{
		return group_path + parameter_name;
	}

private:
	SettingsParameters &sp;
	const Unigine::StringStack<> group_path;
};

} // namespace Utils
} // namespace Editor
