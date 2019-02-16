cmake_minimum_required(VERSION 3.13)
project(boost-test-example)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)


add_executable(boost_test  test/boost-test.cpp)
