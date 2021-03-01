#include <stdio.h>
#include "factorial.h"

void do_factorial()
{
    int i,fact=1,num;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        exit(0);
    }               
 
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
}
