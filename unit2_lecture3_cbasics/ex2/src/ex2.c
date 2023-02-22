/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int i;

int main(void) {
	printf("enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	printf("you entered:%d",i);

	return EXIT_SUCCESS;
}
