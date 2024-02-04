/*
 ============================================================================
 Name        : Insert_Element_Using_Array.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Insert_Element_Using_Array in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned int i= 0 , j= 0, new= 0 ,size= 0 ,loc= 0 ;

	printf("Enter no. of elements:  ");

	fflush(stdout);

	scanf("%d",&size);


	int arr1[size];

	int arr2[size+1];


	printf("insert the elements \n");
	fflush(stdout);


	for (i = 0 ; i < size ; i ++)
	{
		printf ("\t");
				fflush(stdout);
		scanf("%d",&arr1[i]);
	}



	printf("insert the element that you need to insert \n ");

	fflush(stdout);

	scanf("%d",&new);



	printf ("Enter the location \n");

	fflush(stdout);

	scanf("%d",&loc);


j = 0 ;
	for (i = 0  ; i < size+1 ; i++  )

	{

		if ((i+1)==(loc))

		{
			arr2[i] = new ;

			continue;
		}

		arr2[i] = arr1[j];
		j++;


	}

	for (i = 0 ; i < size+1 ; i++)

	{

		printf("%d\t",arr2[i]);
		fflush(stdout);

	}



	return 0;
}
