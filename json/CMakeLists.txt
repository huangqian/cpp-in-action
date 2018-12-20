cmake_minimum_required(VERSION 3.13)
project(json)

set(CMAKE_CXX_STANDARD 14)

set(nlohmann_json_include_dir /usr/local/Cellar/nlohmann_json/3.4.0/include )

include_directories(nlohmann_json_include_dir)

add_executable(json main.cpp)
add_executable(modern-cpp-json src/modern-cpp-json.cpp)