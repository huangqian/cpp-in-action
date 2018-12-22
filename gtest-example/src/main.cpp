#include <gtest/gtest.h>


int add(int a , int b){

    return a + b;
}

TEST(BasicTests, TestName){

    ASSERT_EQ(3, add(1, 2));
}

TEST(test, test_expect){

    EXPECT_EQ(3, add(0, 3));
}