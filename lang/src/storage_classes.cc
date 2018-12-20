//
// Created by huangqian on 2018/11/10.
//

#include <iostream>

using namespace std;

void auto_example();

void register_example();

void static_example();

void func(void);

void extern_example();

//全局变量
static int count = 10;

extern int extern_count;



int main() {

    auto_example();

//    register_example();

    static_example();

    extern_example();


}

//auto关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量的类型，声明函数时函数返回值的占位符。
void auto_example() {

    auto f = 3.14; //double
    cout << "f=" << f << endl;

    auto s("hello");// const char*
    cout << "s=" << s << endl;

    auto z = new auto(9); //int*
    cout << "z=" << z << endl;

    auto x1 = 5, x2 = 10, x3 = 15; //必须要相同的类型
    cout << "x1=" << x1 << ", x2=" << x2 << ", x3=" << x3 << endl;


}

//register存储类用于定义存储在寄存器中而不是RAM中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），
//且不能对他应用于一元的'&'运算符（因为它没有内存位置）
void register_example(){

//    register int miles = 20;
//    cout << "register.miles=" << miles << endl;
}


//static存储类指标编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
//因此，使用static修饰局部变量的可以在函数调用之间保持局部变量的值。
//static修饰也可以应用于全局变量。当static修饰全局变量时，会使变量的作用域限制在声明它的文件内。
//在C++中，当static用在类的成员上时，会导致仅有一个该成员的副本被类的所有对象共享



void static_example(){

    for(auto i = 0; i < 10; i++){
        func();
    }

}



void func(void ){
    static int i = 5; //局部变量
    i++;
    cout << "变量i为 "<< i << endl ;
//    cout << "，变量tcount为 " << count << endl;
}

//extern存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。
//当您使用extern是，对无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
//extern修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候。


void write_extern_fn(void){

    extern_count++;
}

void print_count();

void extern_example(){

    print_count();
    write_extern_fn();
    print_count();

}

