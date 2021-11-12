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
#include "UnigineString.h"
#include "UnigineCallback.h"

// Unigine version bits
enum
{
	VERSION_BASE_BITS = 0x0000400d,
	VERSION_DOUBLE_BIT = 1 << 28,
	VERSION_EVALUATION_BIT = 1 << 27,
	VERSION_DEBUG_BIT = 1 << 26,
};

#ifdef USE_EVALUATION
	#ifdef UNIGINE_DOUBLE
		#ifndef NDEBUG
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_EVALUATION_BIT | VERSION_DOUBLE_BIT | VERSION_DEBUG_BIT)
		#else
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_EVALUATION_BIT | VERSION_DOUBLE_BIT)
		#endif
	#else
		#ifndef NDEBUG
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_EVALUATION_BIT | VERSION_DEBUG_BIT)
		#else
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_EVALUATION_BIT)
		#endif
	#endif
#else
	#ifdef UNIGINE_DOUBLE
		#ifndef NDEBUG
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_DOUBLE_BIT | VERSION_DEBUG_BIT)
		#else
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_DOUBLE_BIT)
		#endif
	#else
		#ifndef NDEBUG
			#define UNIGINE_VERSION (VERSION_BASE_BITS | VERSION_DEBUG_BIT)
		#else
			#define UNIGINE_VERSION (VERSION_BASE_BITS)
		#endif
	#endif
#endif

namespace Unigine
{

class App;
class SystemLogic;
class WorldLogic;
class EditorLogic;
class Plugin;
class Variable;

class Engine
{
public:
	enum BUILD_CONFIG
	{
		BUILD_CONFIG_DEBUG = 0,
		BUILD_CONFIG_DEVELOPMENT,
		BUILD_CONFIG_RELEASE,
	};

	enum CALLBACK_INDEX
	{
		// Engine::update()
		CALLBACK_BEGIN_UPDATE = 0,
			CALLBACK_BEGIN_PROPERTIES_UPDATE,
			  CALLBACK_END_PROPERTIES_UPDATE,
			CALLBACK_BEGIN_INPUT_UPDATE,
			  CALLBACK_END_INPUT_UPDATE,
			CALLBACK_BEGIN_CONTROLS_UPDATE,
			  CALLBACK_END_CONTROLS_UPDATE,
			CALLBACK_BEGIN_WORLD_MANAGER_UPDATE,
			  CALLBACK_END_WORLD_MANAGER_UPDATE,
			CALLBACK_BEGIN_SOUND_MANAGER_UPDATE,
			  CALLBACK_END_SOUND_MANAGER_UPDATE,
			CALLBACK_BEGIN_RENDER_MANAGER_UPDATE,
			  CALLBACK_END_RENDER_MANAGER_UPDATE,
			CALLBACK_BEGIN_LANDSCAPE_UPDATE,
			  CALLBACK_END_LANDSCAPE_UPDATE,
			CALLBACK_BEGIN_LANDSCAPE_ASYNC_UPDATE,
			  CALLBACK_END_LANDSCAPE_ASYNC_UPDATE,
			CALLBACK_BEGIN_GAME_UPDATE,
			  CALLBACK_END_GAME_UPDATE,
			CALLBACK_BEGIN_RENDER_UPDATE,
			  CALLBACK_END_RENDER_UPDATE,
			CALLBACK_BEGIN_EXPRESSION_UPDATE,
			  CALLBACK_END_EXPRESSION_UPDATE,
			CALLBACK_BEGIN_SOUNDS_UPDATE,
			  CALLBACK_END_SOUNDS_UPDATE,

			CALLBACK_BEGIN_PLUGINS_UPDATE,
			  CALLBACK_END_PLUGINS_UPDATE,
			CALLBACK_BEGIN_EDITOR_UPDATE,
			  CALLBACK_END_EDITOR_UPDATE,
			CALLBACK_BEGIN_SYSTEM_SCRIPT_UPDATE,
			  CALLBACK_END_SYSTEM_SCRIPT_UPDATE,
			CALLBACK_BEGIN_SYSTEM_LOGIC_UPDATE,
			  CALLBACK_END_SYSTEM_LOGIC_UPDATE,
			CALLBACK_BEGIN_WORLD_UPDATE,
			  CALLBACK_END_WORLD_UPDATE,
			CALLBACK_BEGIN_GUI_UPDATE,
			  CALLBACK_END_GUI_UPDATE,
			CALLBACK_BEGIN_WORLD_POST_UPDATE,
			  CALLBACK_END_WORLD_POST_UPDATE,
			CALLBACK_BEGIN_SYSTEM_SCRIPT_POST_UPDATE,
			  CALLBACK_END_SYSTEM_SCRIPT_POST_UPDATE,
			CALLBACK_BEGIN_SYSTEM_LOGIC_POST_UPDATE,
			  CALLBACK_END_SYSTEM_LOGIC_POST_UPDATE,
			CALLBACK_BEGIN_EDITOR_POST_UPDATE,
			  CALLBACK_END_EDITOR_POST_UPDATE,
			CALLBACK_BEGIN_PLUGINS_POST_UPDATE,
			  CALLBACK_END_PLUGINS_POST_UPDATE,

			CALLBACK_BEGIN_SPATIAL_UPDATE,
			  CALLBACK_END_SPATIAL_UPDATE,
			CALLBACK_BEGIN_ASYNC_TASKS_UPDATE,
			  CALLBACK_END_ASYNC_TASKS_UPDATE,
			CALLBACK_BEGIN_FILESYSTEM_UPDATE,
			  CALLBACK_END_FILESYSTEM_UPDATE,
			CALLBACK_BEGIN_PHYSICS,
			CALLBACK_BEGIN_PATHFINDING,
		CALLBACK_END_UPDATE,

		// Engine::render()
		CALLBACK_BEGIN_RENDER,
			CALLBACK_BEGIN_EDITOR_RENDER,
			  CALLBACK_END_EDITOR_RENDER,
			CALLBACK_BEGIN_PLUGINS_RENDER,
			  CALLBACK_END_PLUGINS_RENDER,
			CALLBACK_BEGIN_RENDER_WORLD,
			  CALLBACK_END_RENDER_WORLD,
			CALLBACK_BEGIN_PLUGINS_GUI,
			  CALLBACK_END_PLUGINS_GUI,
			CALLBACK_BEGIN_GUI_RENDER,
			  CALLBACK_END_GUI_RENDER,
			CALLBACK_BEGIN_POST_RENDER,
			  CALLBACK_END_POST_RENDER,
		CALLBACK_END_RENDER,

		// Engine::swap()
		CALLBACK_BEGIN_SWAP,
			CALLBACK_BEGIN_VIDEOGRAB,
			  CALLBACK_END_VIDEOGRAB,
			CALLBACK_END_PHYSICS,
			CALLBACK_END_PATHFINDING,
			CALLBACK_BEGIN_WORLD_SWAP,
			  CALLBACK_END_WORLD_SWAP,
			CALLBACK_BEGIN_PLUGINS_SWAP,
			  CALLBACK_END_PLUGINS_SWAP,
			CALLBACK_BEGIN_DELETE_OBJECTS,
			  CALLBACK_END_DELETE_OBJECTS,
		CALLBACK_END_SWAP,

		NUM_CALLBACKS,
	};

	/// Initializes a new engine instance.
	static UNIGINE_API Engine *init(int version, int argc, char **argv, const char *project = nullptr, const char *password = nullptr);
	/// Initializes a new engine instance.
	static UNIGINE_API Engine *init(int version, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr);

	/// Initializes a new engine instance.
	static UNIGINE_API Engine *init(int version, const char *window_title, int argc, char **argv, const char *project = nullptr, const char *password = nullptr);
	/// Initializes a new engine instance.
	static UNIGINE_API Engine *init(int version, const char *window_title, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr);

	/// Initializes a new engine instance to be used with an external graphics application.
	static UNIGINE_API Engine *init(int version, App *app, int argc, char **argv, const char *project = nullptr, const char *password = nullptr);
	/// Initializes a new engine instance to be used with an external graphics application.
	static UNIGINE_API Engine *init(int version, App *app, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr);

	/// Initializes a new engine instance to be used with an external graphics application, which is stored at the specified path.
	static UNIGINE_API Engine *init(int version, App *app, const char *app_path, const char *home_path, int argc, char **argv, const char *project = nullptr, const char *password = nullptr);
	/// Initializes a new engine instance to be used with an external graphics application, which is stored at the specified path.
	static UNIGINE_API Engine *init(int version, App *app, const char *app_path, const char *home_path, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr);

	static UNIGINE_API Engine *init(int version, App *app, const char *window_title, const char *app_path, const char *home_path, int argc, char **argv, const char *project, const char *password);
	static UNIGINE_API Engine *init(int version, App *app, const char *window_title, const char *app_path, const char *home_path, int argc, wchar_t **argv, const char *project, const char *password);

	/// Deletes the pointer to the existing engine instance.
	static UNIGINE_API void shutdown();

	/// Returns a pointer to the existing engine instance.
	static UNIGINE_API Engine *get();

	/// Returns 1 if the engine is initialized; otherwise, 0.
	static UNIGINE_API int isInitialized();

	/// Returns 1 if the argument is known by the engine; otherwise, 0.
	static UNIGINE_API int isKnownArg(const char *arg);

	/// Returns the build configuration
	static UNIGINE_API BUILD_CONFIG getBuildConfiguration();

	/// Returns the number of command line arguments.
	virtual int getNumArgs() const = 0;

	/// Returns a command line argument by its index.
	virtual const char *getArg(int num) const = 0;

	/// Returns a command line argument by its index converted to an integer value.
	virtual int getArgi(int num) const = 0;

	/// Returns a command line argument by its index converted to a floating point value.
	virtual float getArgf(int num) const = 0;

	/// Returns the number of loaded plugins.
	virtual int getNumPlugins() const = 0;

	/// Finds index of the loaded plugin by its name.
	virtual int findPlugin(const char *name) const = 0;

	/// Returns the name of the loaded plugin by its index.
	virtual const char *getPluginName(int num) const = 0;

	/// Returns the pointer to the main interface of the loaded plugin by its name.
	template <class SingletonClass> SingletonClass *getPlugin(const char *name)
	{
		int index = Engine::get()->findPlugin(name);
		if (index == -1)
			return nullptr;

		return static_cast<SingletonClass*>(Engine::get()->getPluginData(index));
	}

	/// Returns the instance of the loaded plugin by its index.
	virtual Plugin *getPluginInterface(int num) const = 0;

	/// Returns the data of the loaded plugin by its index.
	virtual void *getPluginData(int num) const = 0;

	/// Returns the execution order of the loaded plugin by its index.
	virtual int getPluginOrder(int num) const = 0;

	/// Adds a plugin in engine runtime by using a name of this plugin.
	virtual int addPlugin(const char *name) = 0;

	/// Adds a plugin instance in engine runtime.
	virtual int addPlugin(Plugin *plugin) = 0;

	/// Removes a plugin instance from engine runtime.
	virtual int removePlugin(Plugin *plugin) = 0;

	/// Returns the number of registered SystemLogic instances.
	virtual int getNumSystemLogics() const = 0;

	/// Returns the registered SystemLogic instance.
	virtual SystemLogic *getSystemLogic(int num) const = 0;

	/// Adds a system logic instance in engine runtime.
	virtual int addSystemLogic(SystemLogic *logic) = 0;

	/// Removes a system logic instance from engine runtime.
	virtual int removeSystemLogic(SystemLogic *logic) = 0;

	/// Returns the number of registered WorldLogic instances.
	virtual int getNumWorldLogics() const = 0;

	/// Returns the registered WorldLogic instance.
	virtual WorldLogic *getWorldLogic(int num) const = 0;

	/// Adds a world logic instance in engine runtime.
	virtual int addWorldLogic(WorldLogic *logic) = 0;

	/// Removes a world logic instance from engine runtime.
	virtual int removeWorldLogic(WorldLogic *logic) = 0;

	/// Returns the number of registered EditorLogic instances.
	virtual int getNumEditorLogics() const = 0;

	/// Returns the registered EditorLogic instance.
	virtual EditorLogic *getEditorLogic(int num) const = 0;

	/// Adds an editor logic instance in engine runtime.
	virtual int addEditorLogic(EditorLogic *logic) = 0;

	/// Removes an editor logic instance from engine runtime.
	virtual int removeEditorLogic(EditorLogic *logic) = 0;

	/// Returns a path to the binary executable file.
	virtual const char *getAppPath() const = 0;

	/// Returns a path to the user's home directory.
	virtual const char *getHomePath() const = 0;

	/// Returns a path where a default configuration file, save files and screenshots will be stored.
	virtual const char *getSavePath() const = 0;

	/// Returns a path where cache files will be stored.
	virtual const char *getCachePath() const = 0;

	/// Returns a path to the engine's dynamilc library file.
	virtual const char *getLibraryModulePath() const = 0;

	/// Returns a path to data directory.
	virtual const char *getDataPath() const = 0;

	/// Returns a number of plugin directories (provided with -plugin_path command line argument).
	virtual int getNumPluginPaths() const = 0;

	/// Returns a path to plugin directory by its index.
	virtual const char *getPluginPath(int num) const = 0;

	/// Returns a path to the system script (provided with -system_script command line argument).
	virtual const char *getSystemScript() const = 0;

	/// Returns a path to the editor script (provided with -editor_script command line argument).
	virtual const char *getEditorScript() const = 0;

	/// Returns a path to the system script cache (provided with -system_cache command line argument).
	virtual const char *getSystemCache() const = 0;

	/// Returns a path to the editor script cache (provided with -editor_cache command line argument).
	virtual const char *getEditorCache() const = 0;

	/// Returns a graphics API used for rendering (provided with -video_app command line argument).
	virtual const char *getVideoApp() const = 0;

	/// Returns a sound API used for rendering (provided with -sound_app command line argument).
	virtual const char *getSoundApp() const = 0;

	/// Returns Unigine Script defines specified at launch (provided with -extern_define command line argument).
	virtual const char *getExternDefine() const = 0;

	/// Returns Unigine Engine Version.
	virtual const char *getVersion() const = 0;

	/// Returns Unigine Engine Build Configuration. Example: "Development-Float"
	virtual const char *getBuildConfig() const = 0;

	/// return Returns 1 when engine is build with Double support; otherwise, 0.
	virtual int isDouble() const = 0;

	/// return Returns 1 when engine is quitting; otherwise, 0.
	virtual int isDone() const = 0;

	/// Engine update function. This function must be called every frame.
	virtual void update() = 0;

	/// Engine rendering function. This function must be called every frame.
	virtual void render() = 0;

	/// Engine swap buffers function. This function must be called every frame.
	virtual void swap() = 0;

	/// Engine main loop. Replaces while (isDone() == 0) { update(): render(); swap(); } commands.
	virtual void main(SystemLogic *system = nullptr, WorldLogic *world = nullptr, EditorLogic *editor = nullptr) = 0;

	/// Returns 1 when the function is called from the system script; otherwise, 0.
	virtual int isSystemInterpreter() const = 0;

	/// Returns an instance of the system interpreter.
	virtual void *getSystemInterpreter() const = 0;

	/// Returns 1 if the system script variable exists; otherwise, 0.
	virtual int isSystemVariable(const char *name) const = 0;

	/// Sets a system script variable by a name.
	virtual void setSystemVariable(const char *name, const Variable &v) = 0;

	/// Returns the system script variable by its name.
	virtual const Variable &getSystemVariable(const char *name) const = 0;

	/// Returns 1 if the system script function exists; otherwise, 0.
	virtual int isSystemFunction(const char *name, int num_args) const = 0;

	/// Returns system script function identifier.
	virtual int getSystemFunction(const char *name, int num_args) const = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name) = 0;

	/// Runs the system script function by its name. The target function can receive up to 8 arguments.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable *args, int num_args) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs system script function by its name.
	virtual const Variable &runSystemFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id) = 0;

	/// Runs the system script function by its identifier. The target function can receive up to 8 arguments.
	virtual const Variable &runSystemFunction(int id, const Variable *args, int num_args) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs system script function by its identifier.
	virtual const Variable &runSystemFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Returns 1 if the world script is loaded; otherwise, 0.
	virtual int isWorldLoaded() const = 0;

	/// Returns 1 if the function is called from the world script; otherwise, 0.
	virtual int isWorldInterpreter() const = 0;

	/// Returns the world interpreter instance.
	virtual void *getWorldInterpreter() const = 0;

	/// Returns 1 if the world script variable exists; otherwise, 0.
	virtual int isWorldVariable(const char *name) const = 0;

	/// Sets a world script variable by its name.
	virtual void setWorldVariable(const char *name, const Variable &v) = 0;

	/// Returns a world script variable by its name.
	virtual const Variable &getWorldVariable(const char *name) const = 0;

	/// Returns 1 if the world script function exists; otherwise, 0.
	virtual int isWorldFunction(const char *name, int num_args) const = 0;

	/// Returns the world function identifier.
	virtual int getWorldFunction(const char *name, int num_args) const = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name) = 0;

	/// Runs the world script function by its name. The target function can receive up to 8 arguments.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable *args, int num_args) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs the world script function by its name.
	virtual const Variable &runWorldFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id) = 0;

	/// Runs the world script function by its identifier. The target function can receive up to 8 arguments.
	virtual const Variable &runWorldFunction(int id, const Variable *args, int num_args) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs the world script function by its identifier.
	virtual const Variable &runWorldFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Returns 1 if the editor script is loaded; otherwise, 0.
	virtual int isEditorLoaded() const = 0;

	/// Returns 1 if the function is called from the editor script; otherwise, 0.
	virtual int isEditorInterpreter() const = 0;

	/// Returns the editor interpreter instance.
	virtual void *getEditorInterpreter() const = 0;

	/// Returns 1 if the editor script variable exists; otherwise, 0.
	virtual int isEditorVariable(const char *name) const = 0;

	/// Sets the editor script variable by its name.
	virtual void setEditorVariable(const char *name, const Variable &v) = 0;

	/// Returns the editor script variable by its name.
	virtual const Variable &getEditorVariable(const char *name) const = 0;

	/// Returns 1 if the editor script function exists; otherwise, 0.
	virtual int isEditorFunction(const char *name, int num_args) const = 0;

	/// Returns the editor function identifier.
	virtual int getEditorFunction(const char *name, int num_args) const = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name) = 0;

	/// Runs the editor script function by its name. The target function can receive up to 8 arguments.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable *args, int num_args) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs the editor script function by its name.
	virtual const Variable &runEditorFunction(const Variable &name, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id) = 0;

	/// Runs the editor script function by its identifier. The target function can receive up to 8 arguments.
	virtual const Variable &runEditorFunction(int id, const Variable *args, int num_args) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6) = 0;

	/// Runs the editor script function by its identifier.
	virtual const Variable &runEditorFunction(int id, const Variable &a0, const Variable &a1, const Variable &a2, const Variable &a3, const Variable &a4, const Variable &a5, const Variable &a6, const Variable &a7) = 0;

	/// Returns a total accumulative time spent on preparing engine frames (includes update, render and swap, present).
	virtual float getTotalTime() const = 0;

	/// Returns a accumulative time spent on preparing engine frames (includes update, render and swap).
	virtual float getTotalCPUTime() const = 0;

	/// Returns a total accumulative time spent on updating the scene.
	virtual float getUpdateTime() const = 0;

	/// Returns a total accumulative time spent on rendering the scene.
	virtual float getRenderTime() const = 0;

	/// Returns a total accumulative time spent on waiting for the gpu.
	virtual float getPresentTime() const = 0;

	/// Returns a total accumulative time spent on rendering the interface.
	virtual float getInterfaceTime() const = 0;

	/// Returns current engine frame
	virtual int64_t getFrame() const = 0;

	/// Returns 1 if the function from the main engine thread; otherwise, 0.
	virtual int isMainThread() const = 0;

	/// Returns 1 if engine was built as an evaluation version; otherwise 0.
	virtual int isEvaluation() const = 0;

	/// Callbacks
	virtual void *addCallback(CALLBACK_INDEX callback, CallbackBase *func) = 0;
	virtual bool removeCallback(CALLBACK_INDEX callback, void *id) = 0;
	virtual void clearCallbacks(CALLBACK_INDEX callback) = 0;

protected:
	virtual ~Engine() { }
};

// Unigine Engine smart pointer
class UNIGINE_API EnginePtr
{
public:
	/// Initializes the pointer to a new engine instance.
	EnginePtr() : engine(0), owner(0) { init(); }

	/// Initializes the pointer to an existing engine instance.
	EnginePtr(const EnginePtr &ptr)
		: engine(ptr.engine), owner(0)
	{}

	/// Initializes the pointer to a new engine instance.
	EnginePtr(int version, const char *window_title, int argc, char **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, nullptr, window_title, nullptr, nullptr, argc, argv, project, password);
	}
	/// Initializes the pointer to a new engine instance.
	EnginePtr(int version, const char *window_title, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, nullptr, window_title, nullptr, nullptr, argc, argv, project, password);
	}

	/// Initializes the pointer to a new engine instance.
	EnginePtr(int version, int argc, char **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, nullptr, nullptr, nullptr, nullptr, argc, argv, project, password);
	}
	/// Initializes the pointer to a new engine instance.
	EnginePtr(int version, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, nullptr, nullptr, nullptr, nullptr, argc, argv, project, password);
	}

	/// Initializes the pointer to a new engine instance to be used with an external graphics application.
	EnginePtr(int version, App *app, int argc, char **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, app, nullptr, nullptr, nullptr, argc, argv, project, password);
	}
	/// Initializes the pointer to a new engine instance to be used with an external graphics application.
	EnginePtr(int version, App *app, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, app, nullptr, nullptr, nullptr, argc, argv, project, password);
	}

	/// Initializes the pointer to a new engine instance to be used with an external graphics application, which is stored at the specified path.
	EnginePtr(int version, App *app, const char *app_path, const char *home_path, int argc, char **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, app, nullptr, app_path, home_path, argc, argv, project, password);
	}
	/// Initializes the pointer to a new engine instance to be used with an external graphics application, which is stored at the specified path.
	EnginePtr(int version, App *app, const char *app_path, const char *home_path, int argc, wchar_t **argv, const char *project = nullptr, const char *password = nullptr)
		: engine(0), owner(0)
	{
		init(version, app, nullptr, app_path, home_path, argc, argv, project, password);
	}

	~EnginePtr()
	{
		if (isOwner())
			shutdown();
	}

	/// Sets the owner flag for the pointer. Engine instance will be destroyed along with the pointer.
	void grab() { owner = 1; }

	/// Releases the owner flag for the pointer. Engine instance will stay alive upon the pointer destruction.
	void release() { owner = 0; }

	/// Returns the owner flag indicating whether engine instance will be destroyed along with the pointer or not.
	int isOwner() const { return owner; }

	/// Initializes the pointer to a new engine instance.
	void init()
	{
		if (Engine::isInitialized())
			engine = Engine::get();
	}

	/// Initializes the pointer to a new engine instance.
	void init(int version, App *app, const char *window_title, const char *app_path, const char *home_path, int argc, char **argv, const char *project, const char *password)
	{
		UNIGINE_ASSERT(!engine && "Unigine::EnginePtr::init(): engine is already initialized");
		engine = Engine::init(version, app, window_title, app_path, home_path, argc, argv, project, password);
		owner = 1;
	}

	/// Initializes the pointer to a new engine instance.
	void init(int version, App *app, const char *window_title, const char *app_path, const char *home_path, int argc, wchar_t **argv, const char *project, const char *password)
	{
		UNIGINE_ASSERT(!engine && "Unigine::EnginePtr::init(): engine is already initialized");
		engine = Engine::init(version, app, window_title, app_path, home_path, argc, argv, project, password);
		owner = 1;
	}

	/// Destroys the existing engine instance. The pointer must be an owner of the engine instance.
	void shutdown()
	{
		UNIGINE_ASSERT(owner && "Unigine::EnginePtr::shutdown(): is not an owner");
		Engine::shutdown();
		engine = nullptr;
		owner = 0;
	}

	EnginePtr &operator=(const EnginePtr &ptr)
	{
		engine = ptr.engine;
		owner = 0;
		return *this;
	}

	UNIGINE_INLINE Engine *operator->() const
	{
		UNIGINE_ASSERT(engine && "Unigine::EnginePtr::operator->(): pointer is NULL");
		return engine;
	}

	/// Return a raw pointer to the engine instance.
	UNIGINE_INLINE Engine *get() const { return engine;	}

private:
	Engine *engine;
	int owner;
};

} // namespace Unigine
