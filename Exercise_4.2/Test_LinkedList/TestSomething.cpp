#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
	#include "list.h"
};
TEST_GROUP(TestList)
{	
	void setup()
	{
		
	}
	void teardown()
	{
		free_memory();
	}
};
TEST(TestList, testZero)
{
	int item = 12;
	CHECK_EQUAL(0, add_item(&item));

}