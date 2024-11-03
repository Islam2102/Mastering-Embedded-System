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

struct ST_cmplx{
float R;
float I;
};

struct ST_cmplx* sum (struct ST_cmplx* N1 , struct ST_cmplx* N2)
{
	//memory allocation to the summation address
struct ST_cmplx *sum = (struct ST_cmplx*) malloc (sizeof (struct ST_cmplx));

 sum->I  = N1->I + N2->I ;
 sum->R  = N1->R + N2->R ;

return sum;
}

int main(void) {

	struct ST_cmplx num1;
	struct ST_cmplx num2;
	printf ("for the 1st number \n Enter Real and imaginary parts respictivly\n");
	fflush(stdout);
	scanf("%f %f",&num1.R,&num1.I);
	fflush(stdout);
	printf ("for the 2st number \n Enter Real and imaginary parts respictivly\n");
		fflush(stdout);
		scanf("%f %f",&num2.R,&num2.I);

		struct ST_cmplx * total;

		total = sum (&num1 ,& num2);

		fflush(stdout);
		printf("%0.2f + %0.2fi",total->R,total->I);


	return 0;

}
