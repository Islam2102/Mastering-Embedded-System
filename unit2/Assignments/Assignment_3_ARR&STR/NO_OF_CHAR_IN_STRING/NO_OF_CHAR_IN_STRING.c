/*
 ============================================================================
 Name        : NO_OF_CHAR_IN_STRING.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : NO_OF_CHAR_IN_STRING in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0 , sum = 0  ;
	char find;
	char statement[100] = {'\0'};//Assume the max string length is 100.
	printf ("Enter the Statement : \n");
	fflush(stdout);
	gets(statement);
	printf("enter the character that you need to find its frequency  : " );
	fflush(stdout);
	scanf("%c",&find);
	for (i = 0 ; statement[i] != '\0' ; i ++)
	{
		if (statement[i] == find)

			sum++;

	}
	printf ("%d",sum);


	return 0;
}
