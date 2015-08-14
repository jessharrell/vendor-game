include_directories(${CMAKE_SOURCE_DIR}/gmock-1.7.0/include)
include_directories(${CMAKE_SOURCE_DIR}/gmock-1.7.0/gtest/include)
include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable( _gameTests
    main.cpp
    fieldTests.cpp
    foodTests.cpp
    vendorTests.cpp
)

target_link_libraries( _gameTests
    gtest
    game-visuals
)

add_custom_command(
    TARGET _gameTests
    POST_BUILD
    COMMAND _gameTests
    ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
