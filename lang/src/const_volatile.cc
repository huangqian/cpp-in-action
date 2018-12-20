//
// Created by huangqian on 2018/11/10.
//
//C++中的类型限定符
//const类型的对象在程序执行期间不能被修改
//volatile修饰符告诉编译器不需要优化volatile声明的变量，让程序直接从内存中读取变量。 对于一般的变量的编译器对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率
//restrict： 由restrict修饰额指针是唯一一种访问它所指向的对象的方式。

#include <iostream>

using namespace std;

//常量
const int BATCH_SIZE = 10;
//一般用于多线程
volatile bool isFirst = false;


int main(){

    cout<< "batch.size=" << BATCH_SIZE << endl;
    cout << boolalpha;
    cout << "is first access ? " << isFirst << endl;

    return 0;
}
