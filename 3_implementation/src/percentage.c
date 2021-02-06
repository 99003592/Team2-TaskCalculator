#include <stdio.h>
#include "percentage.h"

float percentage(int n, int d)
{
   return (float)n / d * 100.0;
}

void do_percentage() 
{
   float p;
   int deno, numo = 0;
   printf("\nPlease enter numerator  : ");
   scanf("%d", &numo); 
   printf("\nPlease enter denominator  : ");
   scanf("%d", &deno);

   p = percentage(numo, deno);

   printf("Percentage = %.2f%%", p);

}

