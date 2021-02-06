#include <stdio.h>
#include "multiplication.h"

int multiplication(int a, int b)
{
    return a*b;
}

void do_multiplication()
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul = multiplication(a, b);
    printf("\nMultiplication of entered numbers = %d\n",mul);
}
