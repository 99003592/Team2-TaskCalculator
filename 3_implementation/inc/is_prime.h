/**
* @file is_prime.h
*
*/
#ifndef __IS_PRIME_H__
#define __IS_PRIME_H__

#include <stdbool.h>

/**
* Calculates the number is prime
* @param[in] number for which primality should be tested
* @return `true` if the `number` is a prime number, `false` otherwise
* @note Returns -1 for negative values
*/
bool is_prime(unsigned long number);

#endif /* #ifndef __IS_PRIME_H__ */
