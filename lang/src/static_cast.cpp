//
// Created by huangqian on 2019-07-10.
//

#include <iostream>

using namespace std;

int main() {

    float f = 1.23f;
    double d = static_cast<double>(f);
    int i = static_cast<int>(f);

    cout << "d=" << d << endl;
    cout << "i=" << i << endl;

    void* p = &i;
    int* int_ptr = static_cast<int*>(p);
    cout << "*int_ptr=" << *int_ptr << endl;
}