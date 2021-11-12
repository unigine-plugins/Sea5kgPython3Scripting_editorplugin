# Copyright (C), UNIGINE. All rights reserved.


function(ung_add_plugin target_name)
	cmake_parse_arguments(_arg SOURCES ${ARGN})

	if (${_arg_UNPARSED_ARGUMENTS})
		message(FATAL_ERROR "ung_add_plugin: Invalid arguments.")
	endif ()
endfunction()
