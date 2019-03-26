#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

using namespace testing;
extern "C" {
#include "roots.h"
}

TEST(test1, suite1)
{
    EXPECT_EQ(1, 1);
}

TEST(test2, suite1)
{
    EXPECT_EQ(3, 3);
}

TEST(test1, suite2)
{
    EXPECT_EQ(3, 3);
}


