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

struct S_student
{
char name[20];
int roll;
float marks;
};



int main(void) {

	//struct intialization

	struct S_student Ahmed;
	printf("Enter Information of Students:\n");

	printf("Enetr Name: ");
	fflush (stdout);
	scanf("%s",Ahmed.name);



	printf("Enter roll:  ");
	fflush (stdout);
	scanf ("%d",&Ahmed.roll);



	printf("Enter Marks:  ");
	fflush (stdout);
	scanf("%f",&Ahmed.marks);
	printf ("\n");

//return inserted data

	printf("Displaying Information: \n name: %s \n roll: %d\n marks: %0.2f",Ahmed.name,Ahmed.roll,Ahmed.marks);

	return 0;
}
