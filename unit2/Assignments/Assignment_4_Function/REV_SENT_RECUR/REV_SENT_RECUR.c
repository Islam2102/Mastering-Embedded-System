/*
 ============================================================================
 Name        : REV_SENT_RECUR.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int string_inverse(char *str,int length,int start)
{
	char temp ;
	if (length <= start)
		return 1;

	else
	{
	temp = str[start];
	str[start] = str[length];
	str[length] = temp ;
		return string_inverse(str,length-1,start+1);
	}

}
int main(void) {

	char statement[10] ;

	printf ("enter the sentence");

	fflush(stdout);

	gets (statement);

	string_inverse(statement,((strlen(statement))-(1)),0);

	puts (statement);

	return 0;
}
