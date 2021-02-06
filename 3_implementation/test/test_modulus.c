#include "unity.h"
#include "modulus.h"
#include "test_modulus.h"

void test_modulus_basic(void)
{
    // H_05
	TEST_ASSERT_EQUAL( 3, modulus(27, 6));
}

int test_modulus(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_modulus_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
