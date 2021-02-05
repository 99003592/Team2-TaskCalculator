#include "is_prime.h"
#include <stdio.h>
#include <math.h>

bool is_prime(unsigned long number)
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
