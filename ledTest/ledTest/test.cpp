#include "pch.h"
#include<iostream>
#include<gtest/gtest.h>
#include"led.h"
using namespace std;
TEST(Led, ledtest1)
{
	EXPECT_EQ(0x00,getLedstatus());
}
TEST(led, ledtest2)
{
	EXPECT_EQ(0x01, getLedstatus());
}
int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

