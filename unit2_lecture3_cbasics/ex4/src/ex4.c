/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float a,b;
int main(void) {

	printf("enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("product=%f",a*b);
}
