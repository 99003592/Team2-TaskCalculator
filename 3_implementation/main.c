#include <stdio.h>
#include <math.h>

#include "is_prime.h"




void calc_opr()
{
	printf("\n             Welcome to C calculator \n\n");
	printf("******* Press 'Q' or 'q' to quit ");
	printf("the program ********\n");
	printf("***** Press 'H' or 'h' to display ");
	printf("below options *****\n\n");
	printf("Enter 'C' or 'c' to clear the screen and");
	printf(" display available option \n\n");

	printf("Enter A or a for Addition \n");
	printf("Enter S or s for Subtraction \n");
	printf("Enter M or m for Multiplication \n");
	printf("Enter D or d for Division \n");
	printf("Enter P or p for Percentage \n");
	printf("Enter Mod or mod for Modulus \n");
	printf("Enter F or f for Factorial \n");
	printf("Enter E or e for Exponential \n");
	printf("Enter Pr or pr for Checking prime \n");
}

int main(void)
{
	int X = 1;
	char Calc_opr;

	calc_opr();

}