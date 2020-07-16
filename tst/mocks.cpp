#include "mocks.hpp"

std::function<int(int)> _squareNum;

CMock::CMock()
{
    _squareNum = [this](int x){ return squareNum(x); };
}

CMock::~CMock()
{
    _squareNum = {};
}

int squareNum(int x)
{
    return _squareNum(x);
}

void MockAClass::send(int x)
{
    mock->send(x);
}

