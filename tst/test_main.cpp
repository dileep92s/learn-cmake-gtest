#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "addnum.hpp"
#include "mocks.hpp"

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