#include "iostream"

#include "AClass.hpp"
#include "BClass.hpp"

void BClass::sendData(int value)
{
    AClass::send(value);
}