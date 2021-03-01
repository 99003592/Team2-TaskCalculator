#include <stdio.h>
#include "addition.h"

void do_addition()
{
    int n;
    float total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%f",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %f \n",n,total);
}
