#include "addnum.hpp"
#include "squarenum.hpp"

int addNum(int x, int y)
{
    int z = 0;
    z = squareNum(x);
    z = z + y;
    return z;
}