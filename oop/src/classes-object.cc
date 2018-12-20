//
// Created by huangqian on 2018/11/10.
//

#include <iostream>

using namespace std;

class Box {

private:

//盒子的长度
    double length;

    //盒子的宽度
    double breadth;

    //盒子的高度
    double height;
public:

    Box &setLength(double length) {
        this->length = length;
        return *this;
    }

    double GetLength() {
        return this->height;
    }

    Box &SetBreadth(double breadth) {
        this->breadth = breadth;
        return *this;
    }

    double GetBreadth() {
        return this->breadth;
    }

    Box &SetHeight(double height) {

        this->height = height;
        return *this;
    }

    double GetHeight() {
        return this->height;
    }

    double Volume() {
        return this->height * this->breadth * this->length;
    }

};


int main() {

    Box box1;
    Box box2;

    box1.setLength(5.0)
            .SetBreadth(6.0)
            .SetBreadth(7.0);

    box2.setLength(10.0)
            .SetBreadth(12.0)
            .SetBreadth(13.0);

    cout << "box1的体积：" << box1.Volume() << endl;
    cout << "box2的体积：" << box2.Volume() << endl;

}
