cmake_minimum_required(VERSION 3.14)
set(proj_name UnigineEditorPlugin_Python3Scripting_x64)
if (CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
	set(proj_name UnigineEditorPlugin_Python3Scripting_x64d)
endif()
project(${proj_name} CXX)

# set(PYTHON3SCRIPTING_VERSION "0.0.2")
file (STRINGS "../version" PYTHON3SCRIPTING_VERSION)

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

# message(FATAL_ERROR ${CMAKE_CURRENT_BINARY_DIR})

# Create code for QObjects
set(CMAKE_AUTOMOC ON)

# set(CMAKE_AUTOUIC ON)

# Create code from resource files
set(CMAKE_AUTORCC ON)

IF (WIN32)
	# windows
	find_package(Qt5 HINTS "$ENV{QTDIR}" COMPONENTS Core Widgets Gui REQUIRED)
ELSE()
	# linux
	find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)
ENDIF()

set(RESOURCES_FILE
    resources/UnigineEditorPlugin_Python3Scripting_resources.qrc
)

add_library(${proj_name} SHARED
    ${RESOURCES_FILE}
	${PROJECT_SOURCE_DIR}/src/UnigineEditorPlugin_Python3Scripting.cpp
	${PROJECT_SOURCE_DIR}/src/PythonExecutor.cpp
	${PROJECT_SOURCE_DIR}/src/run_python_in_thread.cpp
    ${PROJECT_SOURCE_DIR}/src/CollectorMenuSelected.cpp
    ${PROJECT_SOURCE_DIR}/src/ModelExtension.cpp
	${PROJECT_SOURCE_DIR}/src/FileUnexpy3.cpp
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

IF (WIN32)
	# windows
	set(PYTHON3_INCLUDES "")
	list (APPEND PYTHON3_INCLUDES "${CMAKE_SOURCE_DIR}/Python-3.10.1/Include")
	list (APPEND PYTHON3_INCLUDES "${CMAKE_SOURCE_DIR}/Python-3.10.1/PC")
	set(PYTHON3_LIB "${CMAKE_SOURCE_DIR}/python-bin-windows/python310.lib")
	
	# if (CMAKE_BUILD_TYPE MATCHES "Debug")
	# 	set(PYTHON3_LIB "${CMAKE_SOURCE_DIR}/python-bin-windows/python310_d.lib")
	# else()
	# 	set(PYTHON3_LIB "${CMAKE_SOURCE_DIR}/python-bin-windows/python310.lib")
	# endif()

	
ELSE()
	# linux
	set(PYTHON3_INCLUDES "${PROJECT_SOURCE_DIR}/python-bin-linux/include/python3.10")
	set(PYTHON3_LIB "${CMAKE_SOURCE_DIR}/python-bin-linux/lib/libpython3.10.a")
ENDIF()

target_include_directories(${proj_name} SYSTEM
	PRIVATE
	${PROJECT_SOURCE_DIR}/QCodeEditor/include
    ${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src/
	${PROJECT_SOURCE_DIR}/src/python3_wrapper
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/
	${PYTHON3_INCLUDES}
	${CMAKE_CURRENT_BINARY_DIR}
	)

if (CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
    target_compile_definitions(${proj_name}
		PRIVATE
		DEBUG
		# QT_DEBUG
	)
else()
	target_compile_definitions(${proj_name}
		PRIVATE
		NDEBUG
		# QT_NO_DEBUG
	)
endif()


set_target_properties(${proj_name}
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../bin/editor/
	LIBRARY_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../bin/editor/
	# ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../lib/editor/
	RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
	LIBRARY_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
	RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
	LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
	# ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../lib/editor_debug/
	C_VISIBILITY_PRESET hidden
	CXX_VISIBILITY_PRESET hidden
)

target_link_libraries(${proj_name}
	PRIVATE
	Unigine::CompilerFlags
	Unigine::Engine
	Unigine::Editor
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
    QCodeEditor
	${PYTHON3_LIB}
	)









