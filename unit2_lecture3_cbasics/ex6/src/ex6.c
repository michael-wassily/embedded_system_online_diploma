/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float a,b,c;
int main(void) {

	printf("enter the value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("enter the value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	c=b;
	b=a;
	a=c;
	printf("After swapping, value of a =%f \n" ,a);
	printf("After swapping, value of b =%f \n" ,b);
	fflush(stdin);fflush(stdout);
}
