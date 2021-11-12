# Copyright (C), UNIGINE. All rights reserved.

##==============================================================================
## The module defines `Unigine::CompilerFlags` interface target which contains
## all compiler's options, definitions and linker's flags.
## These are the most general and should be used by all Unigine's targets.
##==============================================================================

add_library(UnigineCompilerFlags INTERFACE)
add_library(Unigine::CompilerFlags ALIAS UnigineCompilerFlags)

target_compile_features(UnigineCompilerFlags INTERFACE cxx_std_11)
target_compile_definitions(UnigineCompilerFlags
	INTERFACE
	ARCH_X64
	$<$<BOOL:${UNIX}>:_LINUX>
	)