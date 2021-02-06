#include "is_prime.h"
#include <stdio.h>
#include <math.h>

bool check_prime(unsigned long number)
{
	unsigned long factor = 3;
	double limit_sqrt = sqrt(number);
	unsigned long limit_rounded = ceil(limit_sqrt);

	if (number < factor)
	{
		// printf("%lu FAIL\n", number);
		return false;
	}
	else
	{
		for(; factor < limit_rounded; factor+=2)
		{
			// printf("Testing %lu with %lu\n", number, factor);
			if ((factor < 5 && number%factor == 0) ||
				(factor > 5 && factor%3 != 0 && factor%5 != 0 && number%factor == 0))
			{
				// printf("%lu FAIL\n", number);
				return false;
			}
			
		}
		// printf("%lu SUCCESS\n", number);
		return true;
	}
}

void is_prime()
{
	unsigned long num = 0;
	bool prime_test = true;

	printf("\nEnter a number to check primality : ");
    scanf("%lu", &num);

	prime_test = check_prime(num);
	printf("The number is ");
	if (prime_test)
		printf("Not ");
	printf("Prime\n");
}
