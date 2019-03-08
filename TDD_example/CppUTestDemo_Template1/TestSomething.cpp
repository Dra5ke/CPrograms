#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
	#include "power.h" // Header files from production code are included here
};
TEST_GROUP(TestPower)	
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST(TestPower, zeroTest)
{
	CHECK_EQUAL(1, power(0,0));
	CHECK_EQUAL(1, power(1, 0));
	CHECK_EQUAL(0, power(0, 1));
}

TEST(TestPower, oneTest)
{
	CHECK_EQUAL(1, power(1, 1));
}

TEST(TestPower, manyTest)
{
	CHECK_EQUAL(1, power(1,2));
	CHECK_EQUAL(2, power(2, 1));
	CHECK_EQUAL(4, power(2, 2));
	CHECK_EQUAL(125, power(5, 3));
}