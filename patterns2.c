/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" *");
			}
		printf("\n");
	}
	return 0;

}


#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" %d",i);  // OR printf the j
			}
		printf("\n");
	}
	return 0;

}


#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" %c",2*i-1+64);   // OR printf j+64   Or i+64 ;
			}
		printf("\n");
	}
	return 0;

}



#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" %d",2*i-1);
			}
		printf("\n");
	}
	return 0;

}
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" %d",j);
			}
		printf("\n");
	}
	return 0;

}
