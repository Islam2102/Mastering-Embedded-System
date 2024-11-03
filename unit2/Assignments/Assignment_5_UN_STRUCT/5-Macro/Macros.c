/*
 ============================================================================
 Name        : EX1_STRUCT.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Area_circle(x) (3.14*x*x);


int main(void) {

	float R ;
	printf("Enter the radius:");
	fflush(stdout);
	scanf("%f",&R);

float result = Area_circle(R);
fflush(stdout);
printf("Area= %f",result);
	return 0;

}
