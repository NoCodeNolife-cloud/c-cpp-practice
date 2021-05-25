#pragma once
#include "GenericFather.h"

template<typename T, typename Y>
class GenericSun :
    public GenericFather<T>{

private:

    Y y;

public:

    GenericSun(T x,Y y):
        GenericFather<T>(x){

        this->y = y;
    }

    Y getY() {

        return y;
    }

    void setY(Y y) {

        this->y = y;
    }
};

