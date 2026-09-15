cmake_minimum_required(VERSION 3.1)
project(FunnyStuff C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "CMake build type (what do you think)" FORCE)
endif()
message(STATUS "CMAKE_BUILD_TYPE is set to: ${CMAKE_BUILD_TYPE}")

add_executable(declaration declaration.c)
add_executable(ptrnest ptrnest.c)
add_executable(stringtest stringtest.c)
