# Copyright (C), UNIGINE. All rights reserved.

cmake_minimum_required(VERSION 3.14)
project(UnigineEditorPlugin CXX)

set(PYTHON3SCRIPTING_VERSION "0.0.1")
add_definitions(-DPYTHON3SCRIPTING_VERSION="${PYTHON3SCRIPTING_VERSION}")
add_subdirectory(QCodeEditor)

# set(CMAKE_INSTALL_RPATH "./")

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

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_library(UnigineEditorPlugin_Python3Scripting SHARED
    ${RESOURCES_FILE}
	${PROJECT_SOURCE_DIR}/src/UnigineEditorPlugin_Python3Scripting.cpp
	${PROJECT_SOURCE_DIR}/src/PythonExecutor.cpp
	${PROJECT_SOURCE_DIR}/src/run_python_in_thread.cpp
    ${PROJECT_SOURCE_DIR}/src/CollectorMenuSelected.cpp
    ${PROJECT_SOURCE_DIR}/src/ModelExtension.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/CreateExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/EditExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/ManageScriptsDialog.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_stdout.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_stderr.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_lib.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_pytypeobjects.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_material.cpp
	# ${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_material_gen.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_node.cpp
	)

target_include_directories(UnigineEditorPlugin_Python3Scripting SYSTEM
	PRIVATE
	${PROJECT_SOURCE_DIR}/QCodeEditor/include
    ${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src/
	${PROJECT_SOURCE_DIR}/src/python3_wrapper
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/
	${PROJECT_SOURCE_DIR}/python-bin/include/python3.10
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
    QCodeEditor
	${CMAKE_SOURCE_DIR}/python-bin/lib/libpython3.10.a
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








