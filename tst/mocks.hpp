#pragma once
#include "gmock/gmock.h"

#include "squarenum.hpp"
#include <functional>

extern std::function<int(int)> _squareNum;
extern std::function<void(int)> _send;

class CMock
{
    public:
    
    CMock();
    ~CMock();

    MOCK_CONST_METHOD1(squareNum,int(int));
    MOCK_CONST_METHOD1(send,void(int));
};