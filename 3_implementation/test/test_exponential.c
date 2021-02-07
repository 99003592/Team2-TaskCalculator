#include "unity.h"
#include "exponential.h"
#include "test_exponential.h"

void test_exponential_basic(void)
{
    // L_04
	TEST_ASSERT_EQUAL( 32, exponential(2, 5));
}

int test_exponential(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_exponential_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
