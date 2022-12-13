#include<stdio.h>

void accept(int(*a)[10],int m , int n)   // a[][10] same
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

void add(int a[][10], int b[][10], int m , int n, int c [][10])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+ b[i][j]
		}
	}
}


int main()
{
	int a[10][10], B[10][10], C[10][10],r1,c1,r2,c2;
	
	do
	{
		printf("Enter the no of rows anf cols of matrix 1 :");
		scanf("%d %d",&r1,&c1);
		
		printf("Enter the no of rows anf cols of matrix 2 :");
		scanf("%d %d",&r2,&c2);
		
	}while(r1!=r2 || c1!=c2);
	accept(A, r1,c1)
	accept(B ,r2,c2);
	
	add(A,B ,r1,c1,C);
	
	display(A,r1,c1);
	display(B ,r2,c2);
	display(C ,r1,c2);
	
		do
	{
		printf("Enter the no of rows anf cols of matrix 1 :");
		scanf("%d %d",&r1,&c1);
		
		printf("Enter the no of rows anf cols of matrix 2 :");
		scanf("%d %d",&r2,&c2);
		
	}while(c1!=r2);

 accept(A, r1,c1)
	accept(B ,r2,c2);
	
	Mult(A,B ,r1,c1,c2,C);
	
	display(A,r1,c1);
	display(B ,r2,c2);
	display(C ,r1,c2);
	
	return 0;
	
	
}
