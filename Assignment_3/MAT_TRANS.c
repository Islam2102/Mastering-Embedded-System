/*
 ============================================================================
 Name        : MAT_TRANS.c
 Author      : ISLAM_ATEF
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int X,Y ,i ,j = 0 ;
	printf ("Enter the matrix diamensions ");
	fflush(stdout);
	scanf("%d %d",&X,&Y);

	float mat[X][Y] ;

	//insert the element

for (i = 0 ; i<X ;i++)
{
for (j = 0 ; j <Y ; j++)
{
printf ("Enter Element a%d%d = \n", i+1 ,j+1);
fflush(stdout);
scanf("%f",&mat[i][j]);

}

}

//display elements

printf ("your matrix is\n");

for (i = 0 ; i<X ;i++)
{
for (j = 0 ; j <Y ; j++)
{
printf ("%f \t", mat[i][j]);
fflush(stdout);

}
printf("\n");

}

printf ("Matrix Transpose \n");

for (i = 0 ; i < Y ; i++ )
{

for (j = 0 ; j < X ; j++)
{
	printf ("%f \t", mat[j][i]);

}
printf ("\n");
}

	return 0;
}
