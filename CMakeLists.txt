cmake_minimum_required(VERSION 2.8)
project(Cube)

include_directories(include)

add_library(cube cube.cpp)

add_executable(hello main.cpp)
target_link_libraries(hello cube)
