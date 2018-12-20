cmake_minimum_required(VERSION 3.13)
project(lang)

set(CMAKE_CXX_STANDARD 14)

add_executable(lang main.cpp)
add_executable(const_volatile src/const_volatile.cc)
add_executable(functions src/functions.cc)
add_executable(storage_classes src/storage_classes.cc)
add_executable(types src/types.cc)