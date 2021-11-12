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

add_library(EditorLibApi INTERFACE)
add_library(Editor::Api ALIAS EditorLibApi)
target_include_directories(EditorLibApi INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

target_sources(EditorLibApi
	INTERFACE
	${CMAKE_CURRENT_SOURCE_DIR}/editor/AssetManager.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/Constants.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/EditorGlobal.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/Plugin.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/PluginInfo.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/PluginManager.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/Selection.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/Selector.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/Undo.h
	${CMAKE_CURRENT_SOURCE_DIR}/editor/WindowManager.h
	)

