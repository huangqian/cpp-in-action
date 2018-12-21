cmake_minimum_required(VERSION 3.13)
project(rocksdb-example)

set(CMAKE_CXX_STANDARD 14)


include_directories(/usr/local/opt/rocksdb/include)



add_executable(rocksdb-example src/main.cpp)
add_executable(rocksdb-hello src/rocksdb-hello.cc)

target_link_libraries(rocksdb-hello rocksdb)