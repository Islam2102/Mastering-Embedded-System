/*
 ============================================================================
 Name        : TEST.c
 Author      : ISLAM_ATEF
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int arr1[2][2]={0};
int arr2[2][2]={0};
int arrT[2][2]={0};

	int i ,j ;

	printf("Enter the elements of the 1st Matrix\n");
	fflush(stdout);

	for (i = 0 ; i <2 ; i++)
	{
		for (j = 0 ; j <2 ; j++)
		{
			printf ("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
		   scanf("%d",&arr1[i][j]);
		}
	}

	printf("Enter the elements of the 1st Matrix\n");
		fflush(stdout);
	for (i = 0 ; i <2 ; i++)
		{
			for (j = 0 ; j <2 ; j++)
			{
				printf ("insert b%d%d: ",i+1,j+1);
				fflush(stdout);
			   scanf("%d",&arr2[i][j]);
			}
		}

	printf("sum of matrix:\n");
			fflush(stdout);
	for (i = 0 ; i <2 ; i++)
		{
		 if (i == 1) 	printf("\n");
			for (j = 0 ; j <2 ; j++)
			{


				arrT[i][j] = arr1[i][j]+arr2[i][j];

				printf (" %d\t",arrT[i][j]);
				fflush(stdout);


			}
		}

	return EXIT_SUCCESS;
}
