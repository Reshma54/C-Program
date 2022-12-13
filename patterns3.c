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
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
	
		{
			printf("  ");  
						
			}
			for(j=1;j<=2*i-1;j++)
			{
				printf(" %c",j+64);
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
	int n,i,j;
	printf("Enter the nuber :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j=i-1;j++)
		{
			printf(" ");
		}
		for(j=1;j=2*i-1;j++)
		{
			printf("%d",2*i-1);
		}
		printf("\n");
	}
return 0;
}

