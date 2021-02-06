#include "unity.h"
#include "test_is_prime.h"
#include "test_addition.h"
#include "test_subtraction.h"
#include "test_multiplication.h"
#include "test_division.h"
#include "test_exponential.h"
#include "test_factorial.h"
#include "test_modulus.h"
#include "test_percentage.h"

/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

int main(void)
{
    int ret = 0;

    // Check primality function
    printf("\n");
    ret = test_is_prime();

    // Check addition function
    printf("\n");
    ret |= test_addition();

    // Check subtraction function
    printf("\n");
    ret |= test_subtraction();

    // Check multiplication function
    printf("\n");
    ret |= test_multiplication();

    // Check division function
    printf("\n");
    ret |= test_division();

    // Check exponential function
    printf("\n");
    ret |= test_exponential();

    // Check factorial function
    printf("\n");
    ret |= test_factorial();

    // Check modulus function
    printf("\n");
    ret |= test_modulus();

    // Check percentage function
    printf("\n");
    ret |= test_percentage();

    return ret;
}
