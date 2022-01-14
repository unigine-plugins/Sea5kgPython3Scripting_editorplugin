cmake_minimum_required(VERSION 3.14)
set(proj_name UnigineEditorPlugin_Python3Scripting_x64)
if (CMAKE_BUILD_TYPE MATCHES "Debug")
	set(proj_name UnigineEditorPlugin_Python3Scripting_x64d)
endif()
project(${proj_name} CXX)

set(PYTHON3SCRIPTING_VERSION "0.0.1")
add_definitions(-DPYTHON3SCRIPTING_VERSION="${PYTHON3SCRIPTING_VERSION}")
add_subdirectory(QCodeEditor)



include(${PROJECT_SOURCE_DIR}/cmake/Unigine.cmake)

if (EXISTS ${PROJECT_SOURCE_DIR}/${proj_name}.json.in)
	set(PLUGIN_VERSION ${UNIGINE_VERSION})
	set(PLUGIN_COMPAT_VERSION ${PYTHON3SCRIPTING_VERSION})
	configure_file(
		${PROJECT_SOURCE_DIR}/${proj_name}.json.in
		${CMAKE_CURRENT_BINARY_DIR}/Plugin.json
		)
endif()

# message(FATAL_ERROR ${CMAKE_CURRENT_BINARY_DIR})

# Create code for QObjects
set(CMAKE_AUTOMOC ON)

# set(CMAKE_AUTOUIC ON)

# Create code from resource files
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

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

target_include_directories(${proj_name} SYSTEM
	PRIVATE
	${PROJECT_SOURCE_DIR}/QCodeEditor/include
    ${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/src/
	${PROJECT_SOURCE_DIR}/src/python3_wrapper
	${PROJECT_SOURCE_DIR}/src/python3_wrapper/pytypesobjects/
	${PROJECT_SOURCE_DIR}/python-bin/include/python3.10
	${CMAKE_CURRENT_BINARY_DIR}
	)

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    target_compile_definitions(${proj_name}
		PRIVATE
		DEBUG
		QT_DEBUG
	)

	set_target_properties(${proj_name}
		PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
		LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor_debug/
		ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib/editor_debug/
		CXX_VISIBILITY_PRESET hidden
	)
else()
	target_compile_definitions(${proj_name}
		PRIVATE
		NDEBUG
		QT_NO_DEBUG
	)

	set_target_properties(${proj_name}
		PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor/
		LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../bin/editor/
		ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/../lib/editor/
		CXX_VISIBILITY_PRESET hidden
	)
endif()

target_link_libraries(${proj_name}
	PRIVATE
	Unigine::CompilerFlags
	Unigine::Engine
	Unigine::Editor
	Qt5::Core
	Qt5::Gui
	Qt5::Widgets
    QCodeEditor
	${CMAKE_SOURCE_DIR}/python-bin/lib/libpython3.10.a
	)









