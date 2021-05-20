#include <gtest/gtest.h>

#include "../add/add.h"

TEST(AddTests, Add)
{
    int res = addInt(15, 35);
    EXPECT_EQ(res, 50);
}
