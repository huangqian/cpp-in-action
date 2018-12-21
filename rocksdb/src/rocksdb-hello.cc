//
// Created by huangqian on 2018-12-21.
//

#include <cstdio>
#include <string>
#include <iostream>

#include "rocksdb/db.h"
#include "rocksdb/slice.h"
#include "rocksdb/options.h"


using namespace std;

int main()
{

    rocksdb::DB* db;
    rocksdb::Options options;
    rocksdb::Status status = rocksdb::DB::Open(options, "/tmp/testdb", &db);
    cout << "status: " << status.ok() << endl;

}