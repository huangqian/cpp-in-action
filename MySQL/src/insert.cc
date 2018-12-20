//
// Created by huangqian on 2018-12-20.
//
#include "posts.h"
#include <iostream>

using namespace std;

bool insert_single(mysqlpp::Connection& conn);

bool batch_insert(mysqlpp::Connection& conn);

int main()
{
    try{
        mysqlpp::Connection conn("test", "127.0.0.1", "root", "123456", 3306);
        bool rst = batch_insert(conn);
        cout << "batch insert result: " << rst << endl;

    }catch (const mysqlpp::BadQuery& er){
        cerr << "Query error" << er.what() << endl;
        return -1;
    }catch (const mysqlpp::BadConversion& es){
        cerr << "Conversion error: " << es.what() << endl;
        return -1;
    }catch (const mysqlpp::Exception& ex){
        cerr << "Error: " << ex.what() << endl;
        return -1;
    }

    return 0;
}

/**
 * 插入单条广告
 */
bool insert_single(mysqlpp::Connection& conn)
{

    posts row(mysqlpp::null, "Clion IDE", "Clion is JetBrant product", 0);

    try{
        mysqlpp::Query query = conn.query();

        query.insert(row);

        query.execute();


    }catch (const mysqlpp::BadQuery& er){
        cerr << "Query error" << er.what() << endl;
        return false;

    }catch (const mysqlpp::BadConversion& es){
        cerr << "Conversion error: " << es.what() << endl;
        return false;
    }catch (const mysqlpp::Exception& ex){
        cerr << "Error: " << ex.what() << endl;
        return false;
    }

    return false;
}


bool batch_insert(mysqlpp::Connection& conn)
{
    posts row(mysqlpp::null, "Clion IDE", "Clion is JetBrant product", 0);

    vector<posts> post_list;

    posts think_in_java(mysqlpp::null, "Think in Java", "Java的入门好书", 1);
    post_list.push_back(think_in_java);

    posts effective_java(mysqlpp::null, "Effective Java", "Java程序设计的最佳实战", 1);
    post_list.push_back(effective_java);

    try{
        mysqlpp::Query query = conn.query();

        query.insert(post_list.begin(), post_list.end()).execute();


    }catch (const mysqlpp::BadQuery& er){
        cerr << "Query error" << er.what() << endl;
        return false;

    }catch (const mysqlpp::BadConversion& es){
        cerr << "Conversion error: " << es.what() << endl;
        return false;
    }catch (const mysqlpp::Exception& ex){
        cerr << "Error: " << ex.what() << endl;
        return false;
    }

    return false;

}