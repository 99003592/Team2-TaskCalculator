#include "unity.h"
#include "multiplication.h"
#include "test_multiplication.h"

void test_multiplication_basic(void)
{
    // H_03
	TEST_ASSERT_EQUAL( 63, multiplication(7, 9));
}

int test_multiplication(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_multiplication_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
