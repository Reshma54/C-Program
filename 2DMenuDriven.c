/*
Write a menu driven program to perform the following operation on a square matrix 
Write separate function for each option
1) Check if the matrix is symmetric.  // first row and col same value  A[i][j]==A[j][i]
2) Display the trace of the matrix (sum of diagonal elements). crooss chi add
3) Check if the the matrix is an upper triangular matrix. //  lower triangular la all zero
4) Check if the matrix lower triangular matrix.  // upper triangular la all Zero
5) Check if it is an identity matrix.  // diagonal One And all Zero

*/

#include<stdio.h>

void accept(int a[][10], int n)   // a[][10] same
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0 ;j<n; j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
}

void display(int a[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


int is_symmetric(int a[][10], int n)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1 ;j<n;j++)
		{
			if(a[i][j]!= a[j][i])
			return 0;
		}
	}
	return 1;
}

void trace(int a[][10],int n)
{
	int i,s=0;
	
	for(i=0 ;i<n;i++)
	{
		s+ = a[i][j] + a[i][n-1-i];
	}
	
	printf("Sum of major diagonal elemnt : %d \n",s);
	if(n%2==1)
	{
		s=0;
		for(i=0 ;i<n;i++)
		{
		
		s+= a[i][n/2]+ a[n/2][i];
	}
	printf("Sum of minor diagonal element : %d\n",s-a[n/2][n/2]);
}
}

int upper(int a[][10],int n)
{
	int i,j;
	for(i=1;i<n ;i++)
	{
		for(j=0 ;j<i;j++)
		{
			if(a[i][j]!=0) return 0;
		}
	}
	return 1;
}

int lower(int a[][10] , int n)
{
	int j,i;
	for(i=0 ;i<n;i++)
	{
		for(j=i+1 ;j<n;j++)
		{
			if(a[i][j]!=0) return 0;
		}
	}
	return 1;
}

int identity(int a[][10],int n)
{
	int i,j;
	for(i=0;i<n ;i++)
	{
		for(j=0 j<n;j++)
		{
			if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a[10][10], n,ch;
	
	do
	{
		printf("1 . Accept\n2.Display\n3.Symmetric\n4.Trace\n5.Upper Triangular\n6.Lower Triangular\n7.Indentity\n8.Exit");
		printf("Enter your choice :(1-8)");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("Enter order of matrix :");
				scanf("%d",&n);
				accept(A,n);
				break;
				
			case 2:
				display(A,n)
				break;
				
				case 3:
					if(symmetric(A,n))
					printf("Symmetric\n");
					else
					printf(" not Symmetric\n");
					break;
					
					case 4:
						trace(A,n);
						break;
					
					
					case 5:
						if(upper(A,n))
						printf("Upper Triangular :");
						else
						printf(" Not Upper Triangular :");
						break;
					
					case 6:
							if(lower(A,n))
						printf("Lower Triangular :");
						else
						printf(" Not Lower Triangular :");
						break;
					
					case 7:
					if(identity(A,n))
						printf("Identity:");
						else
						printf(" Not Identity :");
						break;
					
					


		}
	}while(ch!=8);
	
	return 0;

}
