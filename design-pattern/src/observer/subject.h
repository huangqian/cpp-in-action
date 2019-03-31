//
// Created by huangqian on 2019-03-31.
//

#ifndef DESIGN_PATTERN_SUBJECT_H
#define DESIGN_PATTERN_SUBJECT_H


class IObserver{

public:
    virtual void Update(float price) = 0;
};

//抽象主题
class ISubject {

public:

    //注册观察者
    virtual void Register(IObserver *) = 0;

    //注销观察者
    virtual void Unregister(IObserver *) = 0;

    //通知
    virtual void Notify() = 0;
};



#endif //DESIGN_PATTERN_SUBJECT_H
