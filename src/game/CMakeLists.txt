include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable( game
        main.cpp
)

target_link_libraries( game
    Qt5::Widgets)
