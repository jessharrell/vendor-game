add_executable( game
    main.cpp
    startingValues.h
    constantValues.h
)

file(COPY ${CMAKE_SOURCE_DIR}/images DESTINATION ${CMAKE_BINARY_DIR})

target_include_directories( game PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries( game
    Qt5::Widgets
    game-visuals
)
