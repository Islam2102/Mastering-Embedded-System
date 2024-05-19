/*
 ============================================================================
 Name        : Prime_No_FUN.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Prime numbers between user defined interval in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////
int is_prime (int number)

{
	int x=0 , i ;
for (i = 2 ; i <number ; i ++ )
{
if ( number % i == 0 )
	{
	x = 0 ;
	break;
	}
}
if (i == number )
x = 1 ;

return x;
}

///////////////////////////////////////////////////////////////////////
int check_interval (int N1 , int N2)

{
	int i , j ;



	for (i = N1 ; i < N2 ; i++)
	{
		j = is_prime (i);
		if (j)
		{
			printf ("%d""\t",i);
		}

	}



return 0 ;
}
////////////////////////////////////////////////////////////////


int main() {

	int x , y;

	printf ("Enter two numbers (intervals)");
	fflush(stdout);

	scanf ("%d %d",&x,&y);

	printf("the prime numbers between %d and %d are:", x ,y);
	fflush (stdout);
 check_interval (x,y);

	return 0;
}
