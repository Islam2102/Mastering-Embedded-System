/*
 ============================================================================
 Name        : Calc_PWR_REC.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate a user defined number with user defined power
               using the recursion function in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int  power_of_number (int number,int power)
{
	if (power == 0)
		return 1 ;
	else
	return number*power_of_number(number , (power-1));

}



int main() {

	int number , power ,result;

	printf ("Enter base number : ");
	fflush (stdout);
	scanf ("%d",&number);
	printf ("Enter the power (positive integer) : ");
	fflush (stdout);
	scanf ("%d",&power);

	result = power_of_number (number,power);

	printf("%d ^ %d = %d",number , power ,result);
	return 0;
}
