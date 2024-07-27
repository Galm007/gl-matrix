cmake_minimum_required(VERSION 3.10)

project(gl-matrix)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

file(GLOB SRCS src/*.c)
add_library(${PROJECT_NAME} STATIC ${SRCS})
