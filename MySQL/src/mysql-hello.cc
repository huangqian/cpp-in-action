//
// Created by huangqian on 2018-12-20.
//
#include <mysql++.h>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace mysqlpp;

int main() {

    mysqlpp::Connection conn(true);

    if (conn.connect("test", "127.0.0.1", "root", "123456", 3306)) {
        cout << "MySQL connect success !!!" << endl;
    } else {
        cout << "MySQL connect fail!!!" << endl;
        return 0;
    }
    string sql = "select * from posts";
    Query query = conn.query();
    query << sql;
    if (StoreQueryResult result = query.store()) {

        //显示表头
        cout.setf(ios::left);

        cout << setw(10) << "Id"
             << setw(32) << "Title"
             << setw(64) << "Body"
             << setw(10) << "Published" << endl << endl;

        for (size_t i = 0; i < result.num_rows(); ++i) {
            cout << setw(10) << result[i]["id"] << ' '
                 << setw(32) << result[i]["title"] << ' '
                 << setw(64) << result[i]["body"] << ' '
                 << setw(10) << result[i]["published"] << endl;
        }

//        StoreQueryResult::iterator it;
//        for (it = result.begin(); it != result.end(); ++it) {
//            Row row = *it;
//            cout << '\t' << row[0] << '\t' << row[1] << '\t' << row[2] << '\t' << row[3] << endl;
//        }

    } else {
        cout << "Query fail" << query.error() << endl;
    }


}

