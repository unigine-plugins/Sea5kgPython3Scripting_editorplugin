# Copyright (C), UNIGINE. All rights reserved.

cmake_minimum_required(VERSION 3.14)
project(UnigineEditorPlugin CXX)

set(PYTHON3SCRIPTING_VERSION "0.0.1")
add_definitions(-DPYTHON3SCRIPTING_VERSION="${PYTHON3SCRIPTING_VERSION}")
add_subdirectory(QCodeEditor)

include(${PROJECT_SOURCE_DIR}/cmake/Unigine.cmake)

if (EXISTS ${PROJECT_SOURCE_DIR}/UnigineEditorPlugin_Python3Scripting.json.in)
	set(PLUGIN_VERSION ${UNIGINE_VERSION})
	set(PLUGIN_COMPAT_VERSION ${PYTHON3SCRIPTING_VERSION})
	configure_file(
		${PROJECT_SOURCE_DIR}/UnigineEditorPlugin_Python3Scripting.json.in
		${CMAKE_CURRENT_BINARY_DIR}/Plugin.json
		)
endif()

set(RESOURCES_FILE
    resources/UnigineEditorPlugin_Python3Scripting_resources.qrc
)

set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC TRUE)
set(CMAKE_AUTORCC TRUE)

find_package (Python COMPONENTS Interpreter Development REQUIRED)

message("Python_FOUND:${Python_FOUND}")
message("Python_VERSION:${Python_VERSION}")
message("Python_Development_FOUND:${Python_Development_FOUND}")
message("Python_LIBRARIES:${Python_LIBRARIES}")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_library(UnigineEditorPlugin_Python3Scripting SHARED
    ${RESOURCES_FILE}
	${PROJECT_SOURCE_DIR}/src/UnigineEditorPlugin_Python3Scripting.cpp
	${PROJECT_SOURCE_DIR}/src/PythonExecutor.cpp
    ${PROJECT_SOURCE_DIR}/src/CollectorMenuSelected.cpp
    ${PROJECT_SOURCE_DIR}/src/ModelExtension.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/CreateExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/EditExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/unigine_python_material.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/unigine_python_stdout.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/unigine_python_stderr.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/unigine_python_unigine_lib.cpp
	)

target_include_directories(UnigineEditorPlugin_Python3Scripting SYSTEM
	PRIVATE
	${PROJECT_SOURCE_DIR}/QCodeEditor/include
    ${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src/
	${PROJECT_SOURCE_DIR}/src/python3_wrapper
	${CMAKE_CURRENT_BINARY_DIR}
	${Python_INCLUDE_DIRS}
	)

target_link_libraries(UnigineEditorPlugin_Python3Scripting
	PRIVATE
	Unigine::CompilerFlags
	Unigine::Engine
	Unigine::Editor
	Qt5::Core
	Qt5::Widgets
	${Python_LIBRARIES}
    QCodeEditor
	)

set_target_properties(UnigineEditorPlugin_Python3Scripting
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor/
	LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor/
	ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib/editor/
	CXX_VISIBILITY_PRESET hidden
	)

if (CMAKE_BUILD_TYPE EQUAL "DEBUG")
    target_compile_definitions(UnigineEditorPlugin_Python3Scripting
		PRIVATE
		QT_DEBUG
	)
else()
	target_compile_definitions(UnigineEditorPlugin_Python3Scripting
		PRIVATE
		QT_NO_DEBUG
	)
endif()








