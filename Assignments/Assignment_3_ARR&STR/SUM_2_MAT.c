/*
 ============================================================================
 Name        : SUM_2_MAT.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : SUM_2_MAT in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j ;
	float arr1[2][2] = {0};
	float arr2[2][2] = {0};
	float sum[2][2] = {0};

	printf ("Element of 1st matrix : \n");
	fflush(stdout);

	for (i = 0 ; i < 2 ; i++ )
	{
		for (j = 0 ; j < 2 ; j++ )

		{

			printf("a%d%d:  ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);

		}


	}


	printf ("Element of 2nd matrix : \n");
	fflush(stdout);

		for (i = 0 ; i < 2 ; i++ )
		{
			for (j = 0 ; j < 2 ; j++ )

			{

				printf("b%d%d:  ",i+1,j+1);
				fflush(stdout);
				scanf("%f",&arr2[i][j]);

			}


		}

		printf ("the sum is  : \n");
		fflush(stdout);

			for (i = 0 ; i < 2 ; i++ )
			{
				for (j = 0 ; j < 2 ; j++ )

				{
					sum[i][j] = arr1[i][j] + arr2[i][j];

					printf("%.2f\t",sum[i][j]);
					fflush(stdout);

				}
				printf("\n");

			}



//	puts(""); /* prints  */
	return 0;
}
