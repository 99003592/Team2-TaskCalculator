#include <stdio.h>
#include "subtraction.h"

int subtraction(int a, int b)
{
    return a - b;
}

void do_subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = subtraction(a, b); 
    printf("\n%d - %d = %d\n", a, b, c); 
}
