add_executable( game
        main.cpp
)

file(COPY ${CMAKE_SOURCE_DIR}/images DESTINATION ${CMAKE_BINARY_DIR})

target_include_directories( game PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries( game
    Qt5::Widgets
    game-visuals
)
