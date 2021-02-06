#include <stdio.h>
#include "exponential.h"
#include <math.h>
#include <stdlib.h>

void do_exponential()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf to the exponential %lf = %lf \n",a,num,p);
}
