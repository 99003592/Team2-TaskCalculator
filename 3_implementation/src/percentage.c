#include <stdio.h>
#include "percentage.h"

void do_percentage() 
{
   float percentage;
   int deno, numo = 0;
   printf("\nPlease enter numerator  : ");
   scanf("%d", &numo); 
   printf("\nPlease enter denominator  : ");
   scanf("%d", &deno);

   percentage = (float)numo / deno * 100.0;

   printf("Percentage = %.2f%%", percentage);

}

