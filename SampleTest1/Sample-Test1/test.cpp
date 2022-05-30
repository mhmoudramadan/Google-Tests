#include "pch.h"
#include<gtest/gtest.h>
#include<iostream>
#include"Header.h"

using namespace std;
TEST(sum, TestSum) {
  EXPECT_EQ(5, sum(2,3));
}
int main(int agrv,char **agrc)
{
	testing::InitGoogleTest(&agrv,agrc);
	return RUN_ALL_TESTS();
}