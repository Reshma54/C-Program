/*

#include<stdio.h>
int main()
{
	int n,i,j;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
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
	
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",i+64);
		}
		printf("\n");
	}
	
	return 0;
}
