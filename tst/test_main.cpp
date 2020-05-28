#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "addnum.hpp"

using namespace ::testing;

class Fixture : public Test
{

};

TEST_F(Fixture, test0)
{
    int result;
    result = addNum(2,3);
    EXPECT_EQ(result, 6);
}