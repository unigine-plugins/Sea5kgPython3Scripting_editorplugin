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

#include <QtPlugin>


namespace Editor
{


/// <summary>
/// This class is used for plugin interface implementation when creating Editor plugins. It is a base class for all Editor plugins.
/// </summary>
class EDITOR_API Plugin
{
public:
	Plugin();
	virtual ~Plugin();

	/// <summary> Plugin initialization. Override this method to implement specific initialization for your plugin.</summary>
	/// <returns> <b>true</b> if the plugin was successfully initialized; otherwise, <b>false</b>.</returns>
	virtual bool init()     = 0;
	/// <summary> Plugin shutdown and cleanup. Override this method to implement your plugin's shutdown.</summary>
	virtual void shutdown() = 0;
};


} // namespace Editor

Q_DECLARE_INTERFACE(Editor::Plugin, "com.unigine.EditorPlugin")

