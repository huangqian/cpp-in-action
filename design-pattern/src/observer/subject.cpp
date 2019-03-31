//
// Created by huangqian on 2019-03-31.
//

#include <iostream>
#include <list>
#include <string>
#include "subject.h"

using namespace std;

class SimpleSubject : public ISubject {

public:
    SimpleSubject() {
        this->price = 10.0;
    }

    void SetPrice(float price) {
        this->price = price;
    }

    void Register(IObserver *observer) {
        observers.push_back(observer);
    }

    void Unregister(IObserver *observer) {
        observers.remove(observer);
    }

    void Notify() {
        list<IObserver *>::iterator it = observers.begin();
        while (it != observers.end()) {
            (*it)->Update(this->price);
            ++it;
        }
    }

private:
    //观察者列表
    list<IObserver *> observers;
    //价格
    float price;
};


class SimpleObserver : public IObserver {
public:
    SimpleObserver(string name) {
        this->name = name;
    }

    void Update(float price) {
        cout << name << "- price: " << price << "\n";
    }

private:
    string name;
};

int main() {

    //创建主题
    SimpleSubject *subject = new SimpleSubject();

    IObserver *observer1 = new SimpleObserver("A");
    IObserver *observer2 = new SimpleObserver("B");

    //注册
    subject->Register(observer1);
    subject->Register(observer2);

    //更改价格通知
    subject->SetPrice(12.5);
    subject->Notify();

    if (observer1) {
        delete (observer1);
        observer1 = NULL;
    }

    if (observer2) {
        delete (observer2);
        observer2 = NULL;
    }

    if (subject) {
        delete (subject);
        subject = NULL;
    }

    return 0;
}