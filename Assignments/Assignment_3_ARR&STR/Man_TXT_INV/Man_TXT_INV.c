/*
 ============================================================================
 Name        : Man_TXT_INV.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Man_TXT_INV in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


	int i = 0 ,j = 0 ;

		char statement[100]={'\0'};
		char statement_2[100] = {'\0'};

		printf("Enter the statement : ");
			fflush(stdout);

			gets(statement);

	for (i = strlen(statement)-1 ; i >= 0  ; i--)
	{
		statement_2[j]=statement[i];
j++;
	}


	puts(statement_2);
	return 0;
}
