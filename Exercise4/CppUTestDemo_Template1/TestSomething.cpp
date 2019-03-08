#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>

extern "C" {
#include "strdiff.h"
#include "my_strlen.h"
};

TEST_GROUP(TestStrDiff)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST_GROUP(TestStrlen)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};

TEST(TestStrDiff, testZero)
{
	char a[] = "";
	char b[] = "";
	CHECK_EQUAL(-1, str_diff(a, b));
	
	char c[] = "Hello World";
	CHECK_EQUAL(0, str_diff(c, b));
}

TEST(TestStrDiff, testOne)
{
	char a[] = "a";
	char b[] = "a";
	CHECK_EQUAL(-1, str_diff(a, b));

	b[0] = 'b';
	CHECK_EQUAL(0, str_diff(a, b));
}

TEST(TestStrDiff, testMany)
{
	char a[] = "Hello World";
	char b[] = "Hello World";

	CHECK_EQUAL(-1, str_diff(a, b));

	char c[] = "Hello, world";
	CHECK_EQUAL(5, str_diff(a, c));
}

TEST(TestStrlen, testZero)
{
	char a[] = "";
	CHECK_EQUAL(0, my_strlen(a));
}

TEST(TestStrlen, testOne)
{
	char a[] = "a";
	CHECK_EQUAL(1, my_strlen(a));
}

TEST(TestStrlen, testMany)
{
	char a[] = "Hello, world!";
	CHECK_EQUAL(13, my_strlen(a));

	char *endS = a + 5;
	*endS = '\0';
	CHECK_EQUAL(5, my_strlen(a));

	char b[] = "hello";
	CHECK_EQUAL(5, my_strlen(b));
}