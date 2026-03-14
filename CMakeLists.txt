cmake_minimum_required(VERSION 3.16)
project(c4 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTS "Build tests" OFF)

file(GLOB_RECURSE ENGINE_SOURCES
    ${CMAKE_SOURCE_DIR}/src/*.cpp
    ${CMAKE_SOURCE_DIR}/src/*.c
)

add_executable(c4 ${ENGINE_SOURCES})

target_include_directories(c4 PRIVATE ${CMAKE_SOURCE_DIR}/include)
