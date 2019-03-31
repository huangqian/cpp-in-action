//
// Created by huangqian on 2019-03-30.
//

#ifndef DESIGN_PATTERN_FACTORY_H
#define DESIGN_PATTERN_FACTORY_H

#include <string>

using namespace std;

class ICar {

public:
    virtual string Name() = 0;
};

class BenzCar : public ICar {

public:

    string Name() {
        return "Benz Car";
    }
};


class BmwCar : public ICar {

public:
    string Name() {
        return "Bmw Car";
    }
};

class AudiCar : public ICar {

public:
    string Name() {
        return "Audi Car";
    }
};


class factory {

public:

    //品牌
    enum BRAND {
        BENZ,
        BMW,
        AUDI
    };

    ICar *CreateCar(BRAND brand) {

        ICar *pCar = NULL;
        switch (brand) {
            case BENZ:
                pCar = new BenzCar();
                break;
            case BMW:
                pCar = new BmwCar();
                break;
            case AUDI:
                pCar = new AudiCar();
                break;
            default:
                break;
        }
        return pCar;
    }
};


#endif //DESIGN_PATTERN_FACTORY_H
