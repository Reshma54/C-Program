/*
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=i;j++)
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
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=i;j++)
			{
				printf(" %d",i);
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
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=i;j++)
			{
				printf(" %d",j);
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
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=i;j++)
			{
				printf(" %c",i+64);  // OR j+ 64;
			}
		printf("\n");
	}
	return 0;

}
