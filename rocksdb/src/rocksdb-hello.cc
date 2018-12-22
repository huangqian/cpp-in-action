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
using namespace rocksdb;



int main()
{

    rocksdb::DB* db;
    rocksdb::Options options;
    options.create_if_missing = true;
    rocksdb::Status status = rocksdb::DB::Open(options, "/tmp/testdb", &db);
    if(status.ok()){
        cout << "RocksDB open success !!!" << endl;
    }else {
        cerr << "RocksDB open fail ! message: " << status.ToString() << endl;
    }

    status = db->Put(WriteOptions(), "username", "jerry");
    assert(status.ok());
    status = db->Put(WriteOptions(), "age", "28");
    assert(status.ok());

    string username;
    status = db->Get(ReadOptions(), "username", &username);
    assert(status.ok());

    string age;
    status = db->Get(ReadOptions(), "age", &age);
    assert(status.ok());
    cout << "username=" << username << ", age=" << age << endl;

}