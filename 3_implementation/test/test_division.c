#include "unity.h"
#include "division.h"
#include "test_division.h"

void test_division_basic(void)
{
    // H_04
	TEST_ASSERT_EQUAL( 1.7, division(96, 56));
}

int test_division(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_division_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
