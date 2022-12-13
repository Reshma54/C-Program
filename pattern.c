/*
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c ",i+64);  // j
			
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
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			printf("%c ",j+64);  // j
			
			}
		printf("\n");
	}
	return 0;
}

