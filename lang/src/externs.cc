//
// Created by huangqian on 2018/11/10.
//

#include <iostream>

using namespace std;

int extern_count = 1;

extern void write_extern_fn();

extern void print_count(){
    cout << "extern_count=" << extern_count << endl;

}