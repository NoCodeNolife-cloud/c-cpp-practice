cmake_minimum_required(VERSION 3.19)
project(read_and_write_file)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(read_and_write_file main.cpp)