include_directories(${CMAKE_SOURCE_DIR}/src)

set(CMAKE_AUTOMOC ON)

add_library( game-visuals
        field.cpp
        field.h
)

target_link_libraries( game-visuals
        Qt5::Widgets
        Qt5::Gui
)
