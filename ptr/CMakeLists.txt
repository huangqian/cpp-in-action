cmake_minimum_required(VERSION 3.13)
project(ptr)

set(CMAKE_CXX_STANDARD 14)

add_executable(ptr main.cpp)
add_executable(function-return-pointer src/function-return-pointer.cc)