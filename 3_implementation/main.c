#include <stdio.h>
#include <stdlib.h>

#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "percentage.h"
#include "modulus.h"
#include "factorial.h"
#include "exponential.h"
#include "is_prime.h"

void do_addition();
void do_division();
void do_exponential();
void do_factorial();
void do_modulus();
void do_multiplication();
void do_percentage();
void do_subtraction();
void is_prime();

void calc_inst()
{
	
	printf("******* Press 'Q' or 'q' to quit ");
	printf("the program ********\n");
	printf("***** Press 'H' or 'h' to display ");
	printf("below options *****\n\n");
	printf("Enter 'C' or 'c' to clear the screen and");
	printf(" display available option \n\n");
}

void calc_opr()
{
	printf("\n             Welcome to C calculator \n\n");
	calc_inst();

	printf("Enter A or a for Addition \n");
	printf("Enter S or s for Subtraction \n");
	printf("Enter M or m for Multiplication \n");
	printf("Enter D or d for Division \n");
	printf("Enter P or p for Percentage \n");
	printf("Enter L or l for Modulus \n");
	printf("Enter F or f for Factorial \n");
	printf("Enter E or e for Exponential \n");
	printf("Enter R or r for Checking prime \n");
}

int main(void)
{
	int X = 1;
	char Calc_opr_input;
	char respo;

	calc_opr();
	scanf("%c", &Calc_opr_input);
	switch(Calc_opr_input)
	{
		case 'A': 
		case 'a': do_addition();
				break;
		case 'S': 
		case 's': do_subtraction();
				break;
		case 'M': 
		case 'm': do_multiplication();
				break;
		case 'D': 
		case 'd': do_division();
				break;
		case 'P':
		case 'p': do_percentage();
				break;
		case 'L':
		case 'l': do_modulus();
				break;
		case 'F': 
		case 'f': do_factorial();
				break;
		case 'E': 
		case 'e': do_exponential();
				break;
		case 'R': 
		case 'r': is_prime();
				break;					
		case 'Q': 
		case 'q': exit(0);
				break;
		case 'H': case 'h': calc_opr();
							break;
		default : 
			printf("\n**********You have entered unavailable option");
    		printf("***********\n");
    		printf("\n*****Please Enter any one of below available ");
    		printf("options****\n");
			calc_opr();

	}

}
