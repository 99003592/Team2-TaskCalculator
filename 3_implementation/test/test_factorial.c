#include "unity.h"
#include "factorial.h"
#include "test_factorial.h"

void test_factorial_basic(void)
{
    // L_03
	TEST_ASSERT_EQUAL( 720, factorial(6));
}

int test_factorial(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_factorial_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
