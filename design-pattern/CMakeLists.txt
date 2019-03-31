cmake_minimum_required(VERSION 3.13)
project(design_pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(design_pattern main.cpp src/singleton/singleton.cc src/factory/factory.cpp src/factory/factory.h)