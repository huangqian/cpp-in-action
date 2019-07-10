//
// Created by huangqian on 2019-07-10.
//

#include <iostream>

using namespace std;

int main(){

    int val = 97;
    int* ip = &val;
    char* cp = reinterpret_cast<char*>(ip);
    cout << *cp << endl;
}