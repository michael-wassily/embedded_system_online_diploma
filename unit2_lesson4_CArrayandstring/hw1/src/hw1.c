/*
 ============================================================================
 Name        : hw1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	float c[2][2],a[2][2],b[2][2];
	printf("enter the elements of matrix number 1");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		{
			printf("enter a%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("\n%f",&a[i][j]);
		}
	}
	printf("enter the elements of matrix number 2");
	fflush(stdin);fflush(stdout);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++)
		{
			printf("enter b%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("\n%f",&b[i][j]);
		}
	}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("\nsum of matrix:");
		fflush(stdin);fflush(stdout);
		for(i=0;i<2;i++){
if (i=1){printf("\n");}
			for(j=0;j<2;j++)
			{
				printf("%.1f\t",c[i][j]);
				fflush(stdin);fflush(stdout);
			}
		}
	return 0;
}
