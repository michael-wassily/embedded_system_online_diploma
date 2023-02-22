/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int a,b;
int main(void) {

	printf("enter the value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("enter the value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a =%d \n" ,a);
	printf("After swapping, value of b =%d \n" ,b);
	fflush(stdin);fflush(stdout);
}
