//
// Created by huangqian on 2018-12-20.
//
//指针和引用有什么区别呢？

#include <iostream>

using namespace std;

int main()
{

    //引用本质上是别名
    //应用必须初始化，指针可以在声明的时候不初始化
    int int_value = 1;
    int &int_ref = int_value;

    //引用不能重新绑定
//    int temp = 2;
//    &int_ref = temp;


//====================指针==============================

    //虽然指针和引用都是对对象的简介访问，都能访问到内存。但是还是有很多差别
    //1. 指针本身是一个对象，允许对指针赋值和拷贝，而且在指针的生命周期内它可以先后指向几个不同的对象
    //2. 指针无须在定义时赋初值。

}