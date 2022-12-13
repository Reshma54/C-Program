/*
Write a program to accept a matrix A of size mXn and store its transpose in matrix B.
Display matrix B.Write separate function
*/

#include<stdio.h>

void acept(int(*a)[10],int m , int n)   // a[][10] same
{
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0 ;j<n; j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
}

void display(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void transpose(int a[][10],int m,int n,int b[][10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
			
		}
	}
}

int main()
{
	int A[10][10] , B[10][10],m,n;
	
	printf("Enter no of rows and columns :");
	scanf("%d %d",&m,&n);
	
	accept(A,m,n);
	
	transpose(A,m,n,B);
	
	display(A,m,n);
	display(B,n,m);
	return 0;
}
