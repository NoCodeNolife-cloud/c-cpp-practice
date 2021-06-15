cmake_minimum_required(VERSION 3.19)
project(file_find)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(file_find main.cpp)