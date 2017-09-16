cmake_minimum_required(VERSION 2.8)
project(Cube)

# Locate libraries and headers
find_package(WiringPi REQUIRED)

find_package(Threads REQUIRED) 

# Include headers
include_directories(${WIRINGPI_INCLUDE_DIRS}) 
include_directories(include)

add_library(cube cube.cpp)
add_library(draw draw.cpp)

add_executable(hello main.cpp)

target_link_libraries(hello cube)
target_link_libraries(hello draw)

# Link against libraries
target_link_libraries(draw ${WIRINGPI_LIBRARIES}) 
target_link_libraries(draw ${CMAKE_THREAD_LIBS_INIT}) 
