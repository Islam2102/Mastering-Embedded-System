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




struct S_Distance
{
int feet;
float inches;
};


struct S_Distance* FUN (struct S_Distance* D1 ,struct S_Distance* D2)
{
	struct S_Distance *DT = (struct S_Distance*) malloc(sizeof (struct S_Distance));

 DT->feet = D1->feet + D2->feet;
 DT->inches = D1->inches + D2->inches;

 if((DT->inches/12) >= 1)
 {
	 DT->feet += DT->inches / 12 ;
	 DT->inches = DT->inches - (int)((DT->inches / 12)*12)  ;
 }


	return DT;
}


int main(void) {

	struct S_Distance D_1;
	struct S_Distance D_2;

	printf("Enter the first distance\n");
	printf("Enter feet: ");
	fflush (stdout);
	scanf ("%d",&D_1.feet);
	printf ("Enter inches: ");
	fflush (stdout);
	scanf("%f",&D_1.inches);

	printf("Enter the Second distance\n");
	printf("Enter feet: ");
	fflush (stdout);
	scanf("%d",&D_2.feet);
	printf ("Enter inches: ");
	fflush (stdout);
	scanf("%f",&D_2.inches);

	struct S_Distance *D_T;
//	D_T.feet = D_1.feet + D_2.feet;
//	D_T.inches = D_1.inches + D_2.inches;

	D_T = FUN(&D_1,&D_2);

	printf (" %d' - %0.2f  \"\n" ,D_T->feet,D_T->inches);
	return 0;

}
