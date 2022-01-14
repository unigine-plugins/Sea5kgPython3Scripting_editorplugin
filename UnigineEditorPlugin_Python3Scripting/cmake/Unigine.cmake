# Copyright (C), UNIGINE. All rights reserved.

option(UNIGINE_DOUBLE "Use double-precision build." FALSE)

include(${PROJECT_SOURCE_DIR}/cmake/UnigineCompilerFlags.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/UnigineVersion.cmake)
include(${PROJECT_SOURCE_DIR}/cmake/UnigineFunctions.cmake)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(Engine REQUIRED)
find_package(Editor REQUIRED)

# Not working for RCC in debug mode
# # The following construct is required as Editor's Debug build
# # uses Release binaries of QT5 framework
# set(temp_map_imported ${CMAKE_MAP_IMPORTED_CONFIG_DEBUG})
# set(CMAKE_MAP_IMPORTED_CONFIG_DEBUG RELEASE)
# find_package(Qt5 5.12 CONFIG REQUIRED COMPONENTS Core)
# # Restore the actual value
# set(CMAKE_MAP_IMPORTED_CONFIG_DEBUG ${temp_map_imported})
# unset(temp_map_imported)

set(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
set(CMAKE_SKIP_BUILD_RPATH TRUE)
set(CMAKE_INSTALL_RPATH "$ORIGIN")

