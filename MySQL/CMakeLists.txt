cmake_minimum_required(VERSION 3.13)
project(MySQL)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/opt/mysql++/include/mysql++
        /usr/local/opt/mysql-client/include/mysql)


add_executable(MySQL src/mysql-hello.cc)

add_executable(mysql-hello src/mysql-hello.cc)


add_executable(insert src/insert.cc)

#link_directories(/usr/local/opt/mysql-client/lib /usr/local/opt/mysql++/lib)

target_link_libraries(mysql-hello mysqlpp)
target_link_libraries(insert mysqlpp)