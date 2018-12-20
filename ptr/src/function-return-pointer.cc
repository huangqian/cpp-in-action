//
// Created by huangqian on 2018/11/10.
//
//函数返回指针

#include <iostream>
#include <ctime>
#include <cstdlib>

//定义一个函数，让它生成10个随机数，并使用表示指针的数组名（即第一个数组元素的地址）来返回它们。

using namespace std;

int *get_random() {

    //C++不支持在函数外返回局部变量的地址，除非定义局部变量为static变量
    static int random[10];

    //设置种子
    srand((unsigned) time(NULL));

    for (auto i = 0; i < sizeof(random); ++i) {
        random[i] = rand();
        cout << random[i] << endl;
    }
}

int main() {

    //定义一个指向整数的指针
    int *p;

    p = get_random();

    cout << "--------------------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }

    return 0;
}