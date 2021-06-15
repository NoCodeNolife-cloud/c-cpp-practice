cmake_minimum_required(VERSION 3.19)
project(bit_operator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(bit_operator main.cpp)