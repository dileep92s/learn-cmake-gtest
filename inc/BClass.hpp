#pragma once
#include "AClass.hpp"

template<class T=AClass>
class BClass
{
    public:
    inline void sendData(int value)
    {
        T::send(value);
    }
};

template<class T=AClass>
inline void sendData(int value){ T::send(value); }
