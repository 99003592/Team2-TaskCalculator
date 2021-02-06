#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "addition.h"

int addition(int n, int *arr)
{
    int t = 0;
    while(n>0)
    {
        t += arr[n-1];
        n--;
    }
    return t;
}

void do_addition()
{
    int n, total=0, k=0, number, *arr;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    arr = (int*) malloc(sizeof(int)*n);
    memset(arr, sizeof(int)*n, 0);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        arr[k] = number;
        k=k+1;
    }
    total = addition(n, arr);
    printf("Sum of %d numbers = %d \n",n,total);
    free(arr);
}
