cmake_minimum_required(VERSION 4.1)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(crc32_tests test_crc32.cpp)

target_link_libraries(crc32_tests PRIVATE crc32 gtest_main)

include(GoogleTest)
gtest_discover_tests(crc32_tests)