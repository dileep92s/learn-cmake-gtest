#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "addnum.hpp"
#include "mocks.hpp"

#include "AClass.hpp"
#include "BClass.hpp"

using namespace ::testing;
using ::testing::Return;

class Fixture : public Test
{
    public:
    CMock mock;
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
    BClass testObj;
    EXPECT_CALL(mock, send(_));
    testObj.sendData(99);

}