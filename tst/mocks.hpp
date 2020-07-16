#pragma once
#include "gmock/gmock.h"

#include "squarenum.hpp"
#include <functional>

extern std::function<int(int)> _squareNum;

class CMock
{
    public:
    
    CMock();
    ~CMock();

    MOCK_CONST_METHOD1(squareNum,int(int));
};

class SMock
{
    public:
    MOCK_CONST_METHOD1(send,void(int));
};

class MockAClass
{
    public:
    static SMock *mock;
    static void send(int x);
};
