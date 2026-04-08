cmake_minimum_required(VERSION 4.1)
project(crc32)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

add_library(crc32 STATIC
        crc32/crc32.cpp
        crc32/crc32.h
)

target_include_directories(crc32 PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/crc32>
)

enable_testing()
add_subdirectory(tests)