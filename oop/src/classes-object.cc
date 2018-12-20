//
// Created by huangqian on 2018/11/10.
//

#include <iostream>

using namespace std;

class Box {

private:

//盒子的长度
    double length_;

    //盒子的宽度
    double breadth_;

    //盒子的高度
    double height_;
public:

    Box &set_length(double length) {
        this->length_ = length;
        return *this;
    }

    double get_length() {
        return this->height_;
    }

    Box &set_breadth(double breadth) {
        this->breadth_ = breadth;
        return *this;
    }

    double get_breadth() {
        return this->breadth_;
    }

    Box &set_height(double height) {

        this->height_ = height;
        return *this;
    }

    double get_Height() {
        return this->height_;
    }

    double Volume() {
        return this->height_ * this->breadth_ * this->length_;
    }

};


int main() {

    Box box1;
    Box box2;

    box1.set_length(5.0)
            .set_breadth(6.0)
            .set_height(7.0);

    box2.set_length(10.0)
            .set_breadth(12.0)
            .set_height(13.0);

    cout << "box1的体积：" << box1.Volume() << endl;
    cout << "box2的体积：" << box2.Volume() << endl;

}
