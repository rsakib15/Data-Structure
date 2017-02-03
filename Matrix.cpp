/*
======================================================================================
Name		: Matrix Addition
Author		: Sakib Rahman
Date		: 09/07/2014
Copyright	: sakib
Version		: N/A
Description	: N/A
======================================================================================
*/
 
#include <stdio.h>
int main()
{
	int a[3][3]={8,4,-1,0,1,3,5,4,8};
	int b[3][3]={-4,6,2,1,3,7,5,4,1};
	int c[3][3];
	int i,j,k,sum;
 
	printf("First Matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){						//This is the First Matrix//
			printf("%10d\t",a[i][j]);
		}
		printf("\n");
	}
 
 
	printf("Second Matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){						//This is Second Matrix//
			printf("%10d\t",b[i][j]);
		}
		printf("\n");
	}
 
	/*Calculate The Addition of two array*/
 
	printf("Addition of A and B matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%10d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
 
	/*Calculate The Substruction of two array*/
 
	printf("Substruction of A and B matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%10d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
 
	/*Calculate the Multiplication of Matrix*/
	printf("Multiplication of A and B Matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=0;
			for(k=0;k<3;k++){
			sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			printf("%10d\t",c[i][j]);
		}
		printf("\n");
	}
 
	return 0;
}
 
