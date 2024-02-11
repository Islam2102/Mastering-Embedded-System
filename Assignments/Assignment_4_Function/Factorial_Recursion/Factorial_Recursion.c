/*
 ============================================================================
 Name        : Factorial_Recursion.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Using the recursion function to find
               the factorial of a user defined number , Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int factorial (int NUM)
{

if (NUM == 0 || NUM == 1 )
	return 1 ;

else
return NUM * factorial(NUM-1) ;

}




int main(void) {

	int x ;

	printf ("Enter an positive Integer : ");
	fflush (stdout);
	scanf ("%d",&x);

	printf ("the factorial of %d is %d", x,factorial(x));

	return 0;
}
