cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "vendor-game")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

if(NOT DEFINED ENV{QT5_HOME})
	message(FATAL_ERROR "ERROR: QT5_HOME not defined. Set QT5_HOME to the Qt5 install path")
else()
	set(CMAKE_PREFIX_PATH $ENV{QT5_HOME}/5.4/gcc_64/lib/cmake)
endif(NOT DEFINED ENV{QT5_HOME})
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
find_package(Qt5Core)
find_package(Qt5Widgets)
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})

add_subdirectory(gtest-1.7.0)

add_subdirectory(src/game)
#add_subdirectory(src/game-visuals)
add_subdirectory(tests)
