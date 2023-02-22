/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char a;
int main(void) {

	printf("enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	printf("asci code =%d",a);
}
