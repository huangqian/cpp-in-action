//
// Created by huangqian on 2018-12-20.
//
//MySQL++的事物API例子
#include <mysql++.h>
#include <iostream>

using namespace std;

int main()
{

    mysqlpp::Connection conn("test", "127.0.0.1", "root", "123456", 3306);

    mysqlpp::Transaction transaction(conn,
            mysqlpp::Transaction::serializable,
            mysqlpp::Transaction::session);
}

