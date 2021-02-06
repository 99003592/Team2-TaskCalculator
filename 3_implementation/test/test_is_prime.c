#include "unity.h"
#include "is_prime.h"
#include "test_is_prime.h"

void test_prime_basic(void)
{
	TEST_ASSERT_EQUAL(false, check_prime(  2u));
	// L_02
	TEST_ASSERT_EQUAL( true, check_prime(  5u));
	TEST_ASSERT_EQUAL( true, check_prime( 89u));
	TEST_ASSERT_EQUAL(false, check_prime(221u));
	TEST_ASSERT_EQUAL( true, check_prime(257u));
	TEST_ASSERT_EQUAL( true, check_prime(433u));
	TEST_ASSERT_EQUAL( true, check_prime(613u));
	TEST_ASSERT_EQUAL(false, check_prime(667u));
	TEST_ASSERT_EQUAL( true, check_prime(809u));
}

void test_prime_01(void)
{
	TEST_ASSERT_EQUAL(false, check_prime(0u));
	TEST_ASSERT_EQUAL(false, check_prime(1u));
}

void test_prime_large(void)
{
	TEST_ASSERT_EQUAL(false, check_prime(8343u));
	TEST_ASSERT_EQUAL( true, check_prime(8443u));
	TEST_ASSERT_EQUAL(false, check_prime(6443u));
	TEST_ASSERT_EQUAL( true, check_prime(9161u));
	TEST_ASSERT_EQUAL(false, check_prime(9171u));
	TEST_ASSERT_EQUAL( true, check_prime(9181u));
}

void test_prime_very_large(void)
{
	TEST_ASSERT_EQUAL( true, check_prime(2147483647u));
	TEST_ASSERT_EQUAL(false, check_prime(1914582657u));
}

void test_prime_super_large(void)
{
	TEST_IGNORE();
	// Takes very long. Comment above line if you have a powerful enough machine
	TEST_ASSERT_EQUAL( true, check_prime(10911097110311091151u));
	TEST_ASSERT_EQUAL( true, check_prime(11111111111111111011u));
	TEST_ASSERT_EQUAL(false, check_prime(11111111111110011011u));
}

int test_is_prime(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_prime_basic);
	RUN_TEST(test_prime_01);
	RUN_TEST(test_prime_large);
	RUN_TEST(test_prime_very_large);
	RUN_TEST(test_prime_super_large);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
