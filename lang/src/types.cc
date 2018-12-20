//
// Created by huangqian on 2018/11/10.
//
//类型的demo

#include <iostream>
#include <type_traits>

using namespace std;

void void_test();

int main(){

    void_test();

    return 0;
}

void void_test(){

    cout << boolalpha;
    cout << is_void<void>::value << endl;
    cout << is_void<int>::value << endl;
}
