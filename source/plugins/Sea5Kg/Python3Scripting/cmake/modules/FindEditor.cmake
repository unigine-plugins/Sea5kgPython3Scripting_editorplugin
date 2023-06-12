# Copyright (C), UNIGINE. All rights reserved.

#  Find `Editor` library.
#  Once done this will define:
#  UnigineExt::Editor - library target.
#  Editor_FOUND - library is found.
#  Editor_LIBRARY - library path.
#  Editor_INCLUDE_DIR - API include path.


if (TARGET Unigine::Editor)
	set(Editor_FOUND TRUE)
	return()
endif()

set(name "EditorCore")
if (UNIGINE_DOUBLE)
	string(APPEND name "_double")
endif ()
string(APPEND name "_x64")

find_library(Editor_LIBRARY_RELEASE
	NAMES ${name}
	PATHS ${PROJECT_SOURCE_DIR}/../../../../bin ${PROJECT_SOURCE_DIR}/../../../../lib
	NO_DEFAULT_PATH
	)

find_library(Editor_LIBRARY_DEBUG
	NAMES ${name}d
	PATHS ${PROJECT_SOURCE_DIR}/../../../../bin ${PROJECT_SOURCE_DIR}/../../../../lib
	NO_DEFAULT_PATH
	)

include(SelectLibraryConfigurations)
select_library_configurations(Editor)

message(STATUS ${PROJECT_SOURCE_DIR})
find_path(Editor_INCLUDE_DIR
	NAMES "UniginePlugin.h"
	PATHS ${PROJECT_SOURCE_DIR}/../../../../include/editor
	NO_DEFAULT_PATH
	)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Editor
	FOUND_VAR Editor_FOUND
	REQUIRED_VARS
		Editor_LIBRARY
		Editor_INCLUDE_DIR
	)

if(Editor_FOUND)
	add_library(Unigine::Editor UNKNOWN IMPORTED)
	set_target_properties(Unigine::Editor PROPERTIES
		INTERFACE_INCLUDE_DIRECTORIES ${Editor_INCLUDE_DIR}
		INTERFACE_SYSTEM_INCLUDE_DIRECTORIES ${Editor_INCLUDE_DIR}
		)
	set_property(TARGET Unigine::Editor PROPERTY
		INTERFACE_COMPILE_DEFINITIONS $<$<BOOL:${UNIGINE_DOUBLE}>:UNIGINE_DOUBLE>
		)

	if (Editor_LIBRARY_RELEASE)
		set_target_properties(Unigine::Editor PROPERTIES
			IMPORTED_LOCATION_RELEASE ${Editor_LIBRARY_RELEASE}
			IMPORTED_LOCATION_MINSIZEREL ${Editor_LIBRARY_RELEASE}
			)
	endif()

	if (Editor_LIBRARY_DEBUG)
		set_target_properties(Unigine::Editor PROPERTIES
			IMPORTED_LOCATION_DEBUG ${Editor_LIBRARY_DEBUG}
			)
		set_target_properties(Unigine::Editor PROPERTIES
			IMPORTED_LOCATION_RELWITHDEBINFO ${Editor_LIBRARY_DEBUG}
			)
	endif()

endif()
