#include "mocks.hpp"

std::function<int(int)> _squareNum;
std::function<void(int)> _send;

CMock::CMock()
{
    _squareNum = [this](int x){ return squareNum(x); };
    _send = [this](int x){ send(x); };
}

CMock::~CMock()
{
    _squareNum = {};
}

int squareNum(int x)
{
    return _squareNum(x);
}

void send(int x)
{
    _send(x);
}