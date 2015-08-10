include_directories(
    ${CMAKE_SOURCE_DIR}/gtest-1.7.0/include
    ${CMAKE_SOURCE_DIR}/src
)

add_executable( _fieldTests
    main.cpp
    fieldTests.cpp
)

target_link_libraries( _fieldTests
    gtest
    game-visuals
)

add_custom_command(
    TARGET _fieldTests
    POST_BUILD
    COMMAND _fieldTests
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
