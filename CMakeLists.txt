cmake_minimum_required(VERSION 3.10)

project(gl-matrix)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
add_library(${PROJECT_NAME} STATIC ${SRCS})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
