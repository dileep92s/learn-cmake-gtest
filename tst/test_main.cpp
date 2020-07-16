#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "addnum.hpp"
#include "mocks.hpp"

#include "AClass.hpp"
#include "BClass.hpp"

using namespace ::testing;
using ::testing::Return;

SMock *MockAClass::mock;

class Fixture : public Test
{
    public:
    CMock mock;
    SMock smock;
};

TEST_F(Fixture, test0)
{
    int result;
    
    EXPECT_CALL(mock, squareNum(_)).WillOnce(Return(4));

    result = addNum(2,3);
    EXPECT_EQ(result, 7);
}

TEST_F(Fixture, BClass_SendData)
{
    MockAClass::mock = &smock;
    BClass<MockAClass> obj;
    EXPECT_CALL(smock, send);

    // obj.sendData(99);

    sendData<MockAClass>(99);
}