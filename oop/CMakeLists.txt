cmake_minimum_required(VERSION 3.13)
project(oop)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop main.cpp)
add_executable(classes-object src/classes-object.cc)
add_executable(constructor-destructor src/constructor-destructor.cc)