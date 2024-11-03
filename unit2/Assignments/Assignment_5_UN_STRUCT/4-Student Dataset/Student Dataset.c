/*
 ============================================================================
 Name        : EX1_STRUCT.c
 Author      : Islam Atef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//student structure

struct ST_Student{
	char roll;
	char name[20] ;
	int marks;

};


int main(void) {
	//define array of structure size 10

	struct ST_Student Data[10];
	int i;
	for (i = 0; i < 10 ; i++  ){
		Data[i].roll = i+1;
		printf("enter roll no:%d data", Data[i].roll);
		fflush(stdout);
		printf("\n name:");
		fflush(stdout);
		scanf("%s",Data[i].name);
		printf("\n marks:");
		fflush(stdout);
		scanf("%d",& Data[i].marks);
	}

	for (i = 0; i < 10 ; i++  ){

		printf(" roll no:%d data is \n name:%s \n marks:%d\n ", Data[i].roll,Data[i].name,Data[i].marks);

	}
	return 0;

}
