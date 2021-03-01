#include <stdio.h>
#include <math.h>
#include "percentage.h"

void do_percentage() 
{
   ufloat percentage;
   int deno, numo = 0;
   printf("\nPlease enter numerator  : ");
   scanf("%d", &numo); 
   printf("\nPlease enter denominator  : ");
   scanf("%d", &deno);

   percentage = (fabs(numo * 100) / deno);

   printf("Percentage = %.2f%%", percentage);

}

