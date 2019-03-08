#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
	// #include <xxxx.h> // Header files from production code is included here
};
TEST_GROUP(TestSomething)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST(TestSomething, myFirstTest)
{
	FAIL("The test failed!!");
}