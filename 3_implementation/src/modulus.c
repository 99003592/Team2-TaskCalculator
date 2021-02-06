#include <stdio.h>
#include "modulus.h"

int modulus(int n, int d)
{
    return n%d;
}

void do_modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=modulus(a,b);
    printf("\nModulus of entered numbers = %d\n",d);
}
