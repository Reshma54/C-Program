/*
Write a program to add and multiply two matrices.Write separate function to accept
 display,add,and multiply the matrices.Perform necessary checks before adding and multiplying the matrices.
 */
 #include<stdio>
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

void add (int a[][10],int b[][10],int m,int n int c[][10]) 
{
 
 int i,j;
 for(i=0;i<m;i++)
 {
 	for(j=0;j<n;j++)
 	{
 		c[i][j] =a[i][j] + b[i][j];
	 }
	 }	
 }
 
 void mult(int a[][10],int b[][10],int m,int n int c[][10])
 {
 	int i,j,k;
 	for(i=0 ;i<m; i++)
 	{
 		for(j=0 ;j<p ; j++)
 		{
 			int s=0;
 			for(k=0 ; k<n; k++)
 			{
 				s +=a[i][k] * b[k][j];
 				
			 }
			 c[i][j]=s;
		 }
	 }
 }
 
 int main()
 {
 	int 
 }
