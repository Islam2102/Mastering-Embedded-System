/*
 ============================================================================
 Name        : MAN_STR_LEN.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : MAN_STR_LEN in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i = 0 ,sum = 0 ;

	char statement[100]={'\0'};

	printf("Enter the statement : ");
	fflush(stdout);

	gets(statement);

	for (i = 0 ; statement[i] != '\0' ; i++)
	{
		sum++;


	}

	printf("Length of the string is %d\n",sum); /* prints  */

	return 0;
}
