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

int main(void) {
	int a[30],ele,num,i;

	printf("enter no of elements:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("\n enter the values:");
	fflush(stdin);fflush(stdout);
	for (i=0; i<num;i++){
		scanf("%d",&a[i]);
	}

	printf("\n enter the elements to be searched:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ele);
	i=0;
	while (i<num&& ele!=a[i]){
		i++;
	}
	if (i<num){
		printf("number location is = %d",i+1);
		fflush(stdin);fflush(stdout);
	}
	else{
		printf("number not found");
		fflush(stdin);fflush(stdout);

	}
	return (0);
}
