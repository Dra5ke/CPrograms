#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
	#include "multiSwap.h" // Header files from production code is included here
};
TEST_GROUP(TestMultiSwap)
{
	int x, y, z; 
	void setup()
	{
		x = y = z = 0;
	}
	void teardown()
	{
	}
};
TEST(TestMultiSwap, zeroTest)
{
	multiSwap(&x, &y, &z);

	CHECK_EQUAL(0, x);
	CHECK_EQUAL(0, y);
	CHECK_EQUAL(0, z);
}

TEST(TestMultiSwap, oneTest)
{
	x = 1;
	multiSwap(&x, &y, &z);

	CHECK_EQUAL(0, x);
	CHECK_EQUAL(0, y);
	CHECK_EQUAL(1, z);

	y = 1;
	x = 0;
	z = 0;

	multiSwap(&x, &y, &z);

	CHECK_EQUAL(1, x);
	CHECK_EQUAL(0, y);
	CHECK_EQUAL(0, z);
}

TEST(TestMultiSwap, manyTest)
{
	x = 2;
	y = 4;
	z = 5;

	multiSwap(&x, &y, &z);

	CHECK_EQUAL(4, x);
	CHECK_EQUAL(5, y);
	CHECK_EQUAL(2, z);

	multiSwap(&x, &y, &z);

	CHECK_EQUAL(5, x);
	CHECK_EQUAL(2, y);
	CHECK_EQUAL(4, z);

	multiSwap(&x, &y, &z);

	CHECK_EQUAL(2, x);
	CHECK_EQUAL(4, y);
	CHECK_EQUAL(5, z);
}