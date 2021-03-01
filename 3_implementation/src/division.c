#include <stdio.h>
#include "division.h"

void do_division()
{
    int a, b;
    float d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
     if(b != 0)
     {
   		d = (float)a/(float)b;
		printf("%.1f\n", d);
	 } 
	else 
	 {
	 		printf("Division not possible.\n");
	  }
return 0;
}

