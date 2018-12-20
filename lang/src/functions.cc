//
// Created by huangqian on 2018/11/10.
//

#include <iostream>

using namespace std;

/**
 * 函数参数指针传递调用
 */
void function_call_by_pointer_example();

/**
 * 函数参数引用传递调用
 */
void function_call_by_reference_example();


/**
 * 函数参数传值调用
 */
void function_call_by_value_example();

/**
 * 参数的默认值
 */
void function_args_default_example();

/**
 * lambda函数表达式
 */
void lambada_example();


int main() {

    //值传递
    function_call_by_value_example();

    function_call_by_pointer_example();

    function_call_by_reference_example();

    function_args_default_example();

    lambada_example();

}

//-----------------------------------------------值传递的函数--------------------------//

/**
 * 值传递的参数调用
 * @param x
 * @param y
 */
void swap(int x, int y) {

    int temp = x;
    x = y;
    y = temp;

}

void function_call_by_value_example() {

    int a = 100;
    int b = 200;

    cout << "交换前,a=" << a << endl;
    cout << "交换前,b=" << b << endl;

    swap(a, b);

    cout << "交换后 a=" << a << endl;
    cout << "交换后 b=" << b << endl;
}


//-------------------------------指针传递-------------------------------//
//指针传递：把参数的地址复制给形参数，在函数内通过地址，访问实际的数据，这种形式的调用修改会影响到实际参数

void swap(int *x, int *y) {

    int temp = *x; //保存地址x的值
    *x = *y;  //把y地址中的值赋给x地址指向的内存空间
    *y = temp; //把temp数据放入到y指向的地址空间
}

void function_call_by_pointer_example() {

    cout << "-------------指针传递例子--------" << endl;

    int a = 100;
    int b = 200;

    cout << "交换前 a=" << a << endl;
    cout << "交换前 b=" << b << endl;

    swap(&a, &b);

    cout << "交换后 a=" << a << endl;
    cout << "交换后 b=" << b << endl;
}


//----------------------------引用传递------------------

void swap_by_ref(int &x, int &y) {
    int temp = x; //保存地址x的值
    x = y;
    y = temp;
}

void function_call_by_reference_example() {
    cout << "-------------引用传递例子--------" << endl;

    int a = 100;
    int b = 200;

    cout << "交换前 a=" << a << endl;
    cout << "交换前 b=" << b << endl;

    swap_by_ref(a, b);

    cout << "交换后 a=" << a << endl;
    cout << "交换后 b=" << b << endl;
}


int increment(int val, int step = 1) {

    return val + step;
}

void function_args_default_example() {

    int val = 1;
    cout << "val初始值：" << val << endl;
    val = increment(val);
    cout << "使用默认的step调用increment方法后，val的值为：" << val << endl;
    val = increment(val, 5);
    cout << "使用默认的step=5调用increment方法后，val的值为：" << val << endl;
}


void lambada_example() {

    auto say_hello = [] { cout << "Hello, world!" << endl; };
    say_hello();

    auto incr_by = [](int val, int step = 1) -> int { return val + step; };
    int val = 1;
    cout << "incr_by(val)=" << incr_by(val) << endl;

    int step = 1;
    auto increment_1 = [step](int val) { return val + step; };

    cout << "increment_1(10)=" << increment_1(10) << endl;
    auto increment_2 = [&step](int val) { return val + step; };
    cout << "increment_2(10)=" << increment_2(10) << endl;

    int a = 1;
    int b = 2;
    auto sum = [=] { return a + b; };
    auto swap = [&] {
        int temp = a;
        a = b;
        b = temp;
    };
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    swap();
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

}