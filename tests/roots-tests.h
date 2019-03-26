#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "roots.h"
}
TEST(rootsTest, roots2)
{
    ASSERT_EQ(radical(1,5,4)->count, 2);
    ASSERT_EQ(radical(1,5,4)->x1, -1);
    ASSERT_EQ(radical(1,5,4)->x2, -4);
}
TEST(rootsTest, roots1)
{
    ASSERT_EQ(radical(1,4,4)->count, 1);
    ASSERT_EQ(radical(1,4,4)->x1, -2);
}

TEST(rootsTest, roots0)
{
    ASSERT_EQ(radical(1,2,10)->count, 0);
}

TEST(rootsTest, rootError)
{
    ASSERT_EQ(radical(0,2,7)->error, 1);
}
