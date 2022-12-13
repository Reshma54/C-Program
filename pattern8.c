#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c ",j+64);  // j 64+1 ascii value of A
			
			}
		printf("\n");
	}
	return 0;
}

