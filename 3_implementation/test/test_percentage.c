#include "unity.h"
#include "percentage.h"
#include "test_percentage.h"

void test_percentage_basic(void)
{
    // L_01
	TEST_ASSERT_EQUAL( 19, percentage(19, 100));
}

int test_percentage(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_percentage_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
