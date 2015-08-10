add_executable( _fooTests
    main.cpp
    fooTests.cpp
)

target_include_directories(_fooTests PUBLIC ${CMAKE_SOURCE_DIR}/gtest-1.7.0/include ${CMAKE_SOURCE_DIR}/src)
target_link_libraries( _fooTests
    gtest
)

add_custom_command(
    TARGET _fooTests
    POST_BUILD
    COMMAND _fooTests
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
