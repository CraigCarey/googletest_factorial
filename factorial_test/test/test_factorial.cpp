#include "gtest/gtest.h"
#include "factorial.cpp"

// these tests should pass
TEST(IntegerFunctionTest, positive) {
	EXPECT_EQ(1, factorial(1));
	EXPECT_EQ(2, factorial(2));
	EXPECT_EQ(6, factorial(3));
	EXPECT_EQ(40320, factorial(8));
}

// negative factorials evaluate to 1
TEST(IntegerFunctionTest, negative) {
	EXPECT_EQ(1, factorial(-5));
	EXPECT_EQ(1, factorial(-1));
	EXPECT_GT(factorial(-10), 0);	// 1 > 0
}

// example of a disabled test
TEST(IntegerFunctionTest, DISABLED_zero) {
	EXPECT_EQ(1, factorial(0));
}

// intentional fail
TEST(IntegerFunctionTest, intentional_fail) {
	EXPECT_EQ(1, factorial(1));
	EXPECT_EQ(6, factorial(0));
	EXPECT_EQ(1, factorial(1));
}

// can define variables in test code
int testVal = 5;
int resVal = 120;
TEST(IntegerFunctionTest, declared_value) {
	EXPECT_EQ(resVal, factorial(testVal));
}
