#include <stdio.h>
#include "factorial.h"

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}


void do_factorial()
{
    int fact, num;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
    }

    fact = factorial(num);
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
}
