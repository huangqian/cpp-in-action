#include <gtest/gtest.h>
#include <iostream>

using namespace std;

int add(int a , int b){

    return a + b;
}


TEST(BasicTests, TestName){

    ASSERT_EQ(3, add(1, 2));

}

TEST(test, test_expect){

    EXPECT_EQ(3, add(0, 3));
}

TEST(BasicTests, test_expect){

    cout << "gtest hello" <<endl;
    ASSERT_EQ(1, 1);
}