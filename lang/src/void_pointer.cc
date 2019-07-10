//
// Created by huangqian on 2019-07-06.
//
// void*是一种特殊的指针类型，可用于存放任意对象的地址。

#include <iostream>

using namespace std;

int main(){

    double double_value = 3.14;
    int int_value = 10;

    int *int_ptr = &int_value;

    void *pv = &double_value;

    //可以对void指针转化为具体类型指针比如(double*)，然后再通过*提取指针指向的内存中的数据
    cout << *(double*)pv << endl;

    pv = int_ptr;

    cout << *(int*)pv << endl;



}
