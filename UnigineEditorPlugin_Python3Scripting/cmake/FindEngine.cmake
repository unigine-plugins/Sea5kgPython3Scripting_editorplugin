# Copyright (C), UNIGINE. All rights reserved.

#  Find `Engine` library.
#  Once done this will define:
#  UnigineExt::Engine - library target.
#  Engine_FOUND - library is found.
#  Engine_LIBRARY - library path.
#  Engine_INCLUDE_DIR - API include path.


if (TARGET Unigine::Engine)
	set(Engine_FOUND TRUE)
	return()
endif()

set(name "Unigine")
if (UNIGINE_DOUBLE)
	string(APPEND name "_double")
endif ()
string(APPEND name "_x64")

find_library(Engine_LIBRARY_RELEASE
	NAMES ${name}
	PATHS ${PROJECT_SOURCE_DIR}/../bin ${PROJECT_SOURCE_DIR}/../lib
	NO_DEFAULT_PATH
	)

find_library(Engine_LIBRARY_DEBUG
	NAMES ${name}d
	PATHS ${PROJECT_SOURCE_DIR}/../bin ${PROJECT_SOURCE_DIR}/../lib
	NO_DEFAULT_PATH
	)

include(SelectLibraryConfigurations)
select_library_configurations(Engine)

find_path(Engine_INCLUDE_DIR
	NAMES "Unigine.h"
	PATHS ${PROJECT_SOURCE_DIR}/../include
	NO_DEFAULT_PATH
	)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Engine
	FOUND_VAR Engine_FOUND
	REQUIRED_VARS
		Engine_LIBRARY
		Engine_INCLUDE_DIR
	)

if(Engine_FOUND)
	add_library(Unigine::Engine UNKNOWN IMPORTED)
	set_target_properties(Unigine::Engine PROPERTIES
		INTERFACE_INCLUDE_DIRECTORIES ${Engine_INCLUDE_DIR}
		INTERFACE_SYSTEM_INCLUDE_DIRECTORIES ${Engine_INCLUDE_DIR}
		)
	set_property(TARGET Unigine::Engine PROPERTY
		INTERFACE_COMPILE_DEFINITIONS $<$<BOOL:${UNIGINE_DOUBLE}>:UNIGINE_DOUBLE>
		)

	if (Engine_LIBRARY_RELEASE)
		set_target_properties(Unigine::Engine PROPERTIES
			IMPORTED_LOCATION_RELEASE ${Engine_LIBRARY_RELEASE}
			)
		set_target_properties(Unigine::Engine PROPERTIES
			IMPORTED_LOCATION_DEBUG ${Engine_LIBRARY_DEBUG}
		)
	endif()

	if (Engine_LIBRARY_DEBUG)
		set_target_properties(Unigine::Engine PROPERTIES
			IMPORTED_LOCATION_DEBUG ${Engine_LIBRARY_DEBUG}
			)
		set_target_properties(Unigine::Engine PROPERTIES
			IMPORTED_LOCATION_RELWITHDEBINFO ${Engine_LIBRARY_DEBUG}
			)
	endif()

endif()
