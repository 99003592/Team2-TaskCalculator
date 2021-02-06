#include "unity.h"
#include "subtraction.h"
#include "test_subtraction.h"

void test_subtraction_basic(void)
{
    // H_02
	TEST_ASSERT_EQUAL( -30, subtraction(30, 60));
}

int test_subtraction(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_subtraction_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
