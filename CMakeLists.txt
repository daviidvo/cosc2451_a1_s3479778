cmake_minimum_required(VERSION 3.6)
project(COSC2451_A1_s3479778)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES largest.c)
add_executable(largest ${SOURCE_FILES})

add_executable(positions positions.c)