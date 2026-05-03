cmake_minimum_required(VERSION 4.1)
project(is_prime)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(Peano STATIC src/Peano.cpp)

target_include_directories(Peano
        PRIVATE
            src/Peano.cpp
        PUBLIC
            FILE_SET Peano_headers
            TYPE HEADERS
            BASE_DIRS
                include
            FILES
                include/Peano.h
)

add_library(is_prime STATIC src/is_prime.cpp
        src/Peano.cpp)

target_include_directories(is_prime
        PRIVATE
            src/is_prime.cpp
        PUBLIC
            FILE_SET is_prime_headers
            TYPE HEADERS
            BASE_DIRS
                include
            FILES
                include/is_prime.h
)

# tests
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_Peano tests/test_Peano.cpp)

target_link_libraries(test_Peano PRIVATE Peano gtest_main)

add_executable(is_prime_tests tests/test_is_prime.cpp
        tests/test_Peano.cpp)

target_link_libraries(is_prime_tests PRIVATE Peano is_prime gtest_main)

include(GoogleTest)
gtest_discover_tests(is_prime_tests)
