#include "unity.h"
#include "addition.h"
#include "test_addition.h"

void test_addition_basic(void)
{
    // H_01
    int h01_arr[] = {12, 24};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 36, addition(h01_n, (int*)&h01_arr));
}

void test_addition_advance(void)
{
    // H_01
    int h01_arr[] = {1200000, 24111111};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 25311111, addition(h01_n, (int*)&h01_arr));
}

int test_addition(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_addition_basic);
	RUN_TEST(test_addition_advance);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
