/*
 ============================================================================
 Name        : Av_Calc.c
 Author      : ISLAM_ATEF
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n , i ,sum =0  ;

	printf ("please enter the number of element\n");

	fflush(stdout);

	scanf("%d",&n);

	int arr[n] ;


	for (i= 0 ; i < n ; i ++)
	{
		printf("E%d",i+1 );
		fflush(stdout);

		scanf("%d",&arr[i]);
		sum += arr[i];

	}
	printf ("the average is %d",sum/n);


	return 0;
}
