cmake_minimum_required(VERSION 3.13)
project(json)

set(CMAKE_CXX_STANDARD 14)

add_executable(json main.cpp)
add_executable(modern-cpp-json src/modern-cpp-json.cpp)