#include <stdio.h>
#include "multiplication.h"

void do_multiplication()
{
    double a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%lf", &a); 
    printf("Please enter second number: "); 
    scanf("%lf", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %lf\n",mul);
}
