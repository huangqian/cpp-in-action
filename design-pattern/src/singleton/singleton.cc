//
// Created by huangqian on 2019-03-30.
//

#include <iostream>
#include <mutex>

using namespace std;

class Singleton {
public:

    static Singleton *GetInstance() {
        if (instance == NULL) {
            std::lock_guard<std::mutex> lock(mutex_lock);//自解锁
            if (instance == NULL) {
                instance = new Singleton();
            }
        }
        return instance;
    }

private:

    //私有构造器
    Singleton() {}

    //禁止编译器生成默认的拷贝构造函数
    Singleton(Singleton const &); //无需实现
    Singleton &operator=(const Singleton &); //无需实现

private:
    static Singleton *instance; //指向单例的指针
    static mutex mutex_lock; //锁


    class GC {
    public:
        ~GC() {
            if (instance != NULL) {

                delete instance;
                instance = NULL;
            }
        }

        static GC gc; //用于释放单例
    };

};