cmake_minimum_required(VERSION 2.8)
project(Cube)
add_compile_options(-std=c++11 -Wall -Wextra)

# WiringPi does not have a CMake module
set(
  CMAKE_MODULE_PATH
  ${CMAKE_MODULE_PATH}
  "${CMAKE_SOURCE_DIR}/cmake/Modules/"
)

# Locate libraries and headers
find_package(WiringPi REQUIRED)
find_package(Threads REQUIRED)

# Include headers
include_directories(
  include
  ${WIRINGPI_INCLUDE_DIRS}
)

# Cube library
add_library(
  cube
  cube.cpp
)

# Draw library
add_library(
  draw
  draw.cpp
)
target_link_libraries(
  draw
  ${WIRINGPI_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
)

# Main program
add_executable(
  hello
  main.cpp
)
target_link_libraries(
  hello
  cube
  draw
)

