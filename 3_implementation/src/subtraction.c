#include <stdio.h>
#include "subtraction.h"

void do_subtraction()
{ 
    float a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%f", &a); 
    printf("Please enter second number : "); 
    scanf("%f", &b); 
    c = a - b; 
    printf("\n%f - %f = %f\n", a, b, c); 
}
