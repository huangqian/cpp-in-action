//
// Created by huangqian on 2018/11/10.
//
//类的构造函数与析构函数

#include <iostream>

using namespace std;

class Line {

public:
    Line &set_length(double length);

    double get_length(void);

    Line();//构造函数

    Line(double length);

    ~Line();

private:
    double length_;
};

//长远函数定义，包含构造函数
Line::Line(void) {
    cout << "Line is being created by default constructor." << endl;
}

Line::Line(double length) {
    this->length_ = length;
    cout << "Line is being created by specification construct." << endl;
}

Line &Line::set_length(double length) {
    this->length_ = length;
    return *this;
}

double Line::get_length() {
    return this->length_;
}

Line::~Line() {
    cout << "Object is being deleted" << endl;
}

int main() {

    Line line1;
    line1.set_length(6.0);
    cout << "Length of line1: " << line1.get_length() << endl;

    Line line2(16);
    cout << "Length of line2: " << line2.get_length() << endl;
}