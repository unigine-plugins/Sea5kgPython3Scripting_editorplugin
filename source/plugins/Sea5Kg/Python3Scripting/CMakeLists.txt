##==============================================================================
## General.
##==============================================================================
cmake_minimum_required(VERSION 3.19)

set(current_target Sea5kgPython3Scripting_editorplugin_x64)
if (CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
	set(current_target Sea5kgPython3Scripting_editorplugin_x64d)
endif()
project(${current_target} CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS FALSE)

set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_SKIP_BUILD_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "$ORIGIN")

set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC TRUE)
set(CMAKE_AUTORCC TRUE)

##==============================================================================
## Environment.
##==============================================================================
option(UNIGINE_DOUBLE "build double or not" FALSE)

set(UNIGINE_SDK_PATH ${PROJECT_SOURCE_DIR}/../)
set(UNIGINE_BIN_DIR ${UNIGINE_SDK_PATH}bin/)
set(UNIGINE_LIB_DIR ${UNIGINE_SDK_PATH}lib/)
set(UNIGINE_INCLUDE_DIR ${UNIGINE_SDK_PATH}include/)
set(UNIGINE_OUTPUT_EDITOR_RELEASE_DIR ${UNIGINE_BIN_DIR}editor/)
set(UNIGINE_OUTPUT_EDITOR_DEBUG_DIR ${UNIGINE_BIN_DIR}editor_debug/)

##==============================================================================
## Dependencies.
##==============================================================================
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules)
find_package(Engine REQUIRED MODULE QUIET)
find_package(Editor REQUIRED MODULE QUIET)


# UNIGINE_QTROOT is Unigine related global variable that points to the effective
# Qt's distributive.
set(QT5_ROOT "$ENV{UNIGINE_QTROOT}")
if (QT5_ROOT AND EXISTS "${QT5_ROOT}")
	list(APPEND CMAKE_PREFIX_PATH ${QT5_ROOT})
endif()

# The following construct is required as Editor's Debug build
# uses Release binaries of QT5 framework
set(temp_map_imported ${CMAKE_MAP_IMPORTED_CONFIG_DEBUG})
set(CMAKE_MAP_IMPORTED_CONFIG_DEBUG RELEASE)
cmake_policy(PUSH)
cmake_policy(SET CMP0111 OLD)
# Find additional required packages
find_package(Qt5 5.12.3 CONFIG EXACT COMPONENTS Core Gui Widgets)
# Restore the actual value
set(CMAKE_MAP_IMPORTED_CONFIG_DEBUG ${temp_map_imported})
unset(temp_map_imported)
cmake_policy(POP)



# set(PYTHON3SCRIPTING_VERSION "0.0.2")
file (STRINGS "${PROJECT_SOURCE_DIR}/../../../../version" PYTHON3SCRIPTING_VERSION)

add_definitions(-DPYTHON3SCRIPTING_VERSION="${PYTHON3SCRIPTING_VERSION}")
add_subdirectory(QCodeEditor)



if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Sea5kgPython3Scripting_editorplugin.json.in)
	message(FATAL_ERROR "Required file is missed! - ${CMAKE_CURRENT_SOURCE_DIR}/Sea5kgPython3Scripting_editorplugin.json.in")
endif()

set(PLUGIN_VERSION ${PYTHON3SCRIPTING_VERSION})
set(PLUGIN_COMPAT_VERSION ${PYTHON3SCRIPTING_VERSION})
configure_file(
	${CMAKE_CURRENT_SOURCE_DIR}/Sea5kgPython3Scripting_editorplugin.json.in
	${CMAKE_CURRENT_BINARY_DIR}/Sea5kgPython3Scripting_editorplugin.json
	)

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

add_library(${current_target} SHARED
    ${RESOURCES_FILE}
	${PROJECT_SOURCE_DIR}/src/UnigineEditorPlugin_Python3Scripting.cpp
	${PROJECT_SOURCE_DIR}/src/PythonExecutor.cpp
	${PROJECT_SOURCE_DIR}/src/run_python_in_thread.cpp
    ${PROJECT_SOURCE_DIR}/src/CollectorMenuSelected.cpp
    ${PROJECT_SOURCE_DIR}/src/ModelExtension.cpp
	${PROJECT_SOURCE_DIR}/src/format_unexpy3/FileUnexpy3.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/CreateExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/EditExtensionDialog.cpp
	${PROJECT_SOURCE_DIR}/src/dialogs/ManageScriptsDialog.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_stdout.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_stderr.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/python3_unigine_lib.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_pytypeobjects.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_assetmanager.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_uguid.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_material.cpp
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/python3_unigine_materials.cpp
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

target_include_directories(${current_target} SYSTEM
	PRIVATE
	${PROJECT_SOURCE_DIR}/QCodeEditor/include
    ${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src/
	${PROJECT_SOURCE_DIR}/src/format_unexpy3
	${PROJECT_SOURCE_DIR}/src/python3_wrapper
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/
	${PYTHON3_INCLUDES}
	${CMAKE_CURRENT_BINARY_DIR}
	)

if (CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
    target_compile_definitions(${current_target}
		PRIVATE
		DEBUG
		# QT_DEBUG
	)
else()
	target_compile_definitions(${current_target}
		PRIVATE
		NDEBUG
		# QT_NO_DEBUG
	)
endif()


set_target_properties(${current_target}
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	LIBRARY_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	# ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/../../../../lib/plugins/Sea5kg/Python3Scripting/
	RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	LIBRARY_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${PROJECT_SOURCE_DIR}/../../../../bin/plugins/Sea5kg/Python3Scripting/
	# ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/../../../../lib/plugins/Sea5kg/Python3Scripting/
	C_VISIBILITY_PRESET hidden
	CXX_VISIBILITY_PRESET hidden
)

target_link_libraries(${current_target}
	PRIVATE
	Unigine::Engine
	Unigine::Editor
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
    QCodeEditor
	${PYTHON3_LIB}
	)

if(MSVC)
	target_compile_options(${current_target}
		PRIVATE
    	/arch:SSE4.1
	)
else()
	target_compile_definitions(${current_target} PUBLIC _LINUX)
	target_compile_options(${current_target}
		PRIVATE
		-m64
		-march=athlon64
		-msse4.2
		# Optimizations.
		-ffast-math
		-fno-strict-aliasing
	)
endif()








