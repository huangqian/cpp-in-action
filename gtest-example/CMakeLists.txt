cmake_minimum_required(VERSION 3.13)
project(gtest_example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

add_executable(gtest_example src/main.cpp)

target_link_libraries(${PROJECT_NAME} gtest gtest_main)


