cmake_minimum_required(VERSION 3.13)
project(rocksdb-example)

set(CMAKE_CXX_STANDARD 14)


include_directories(/usr/local/opt/rocksdb/include)

link_directories(/usr/local/opt/rocksdb/lib)
set(PROJECT_LINK_LIBS librocksdb.a)


add_executable(rocksdb-hello src/rocksdb-hello.cc)

target_link_libraries(rocksdb-hello ${PROJECT_LINK_LIBS})