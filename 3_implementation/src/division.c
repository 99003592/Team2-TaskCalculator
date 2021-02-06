#include <stdio.h>
#include "division.h"

float division(int n, int d)
{
    return (float)n/d;
}

void do_division()
{
    int a, b;
    float d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%f\n",d);
}
