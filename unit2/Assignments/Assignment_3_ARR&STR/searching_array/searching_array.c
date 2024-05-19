/*
 ============================================================================
 Name        : searching.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int i = 0 , size = 0 ,s = 0;

	printf ("Enter no of elements :  ");
	fflush(stdout);
	scanf("%d",&size);

	int arr[size];
	for (i = 0 ; i < size ; i ++)
	{
		printf ("a%d : ",i);
		fflush(stdout);
		scanf("%d",&arr[i]);
		printf("\n");

	}

printf ("Enter the element to be searched : ");
fflush(stdout);
scanf("%d",&s);

for (i = 0 ; i < size  ; i++)
{

if (arr[i]==s)
	{
	printf ("Number found at location : %d", i+1);
    fflush(stdout);
    break ;
	}
else if (i == (size-1) )
{
	printf("Number not found");
	fflush(stdout);

}
}




	return 0;
}
