
#include<stdio.h>
int main()



{
	int i,j,n,a;
	
	printf("Enter the  n number :");
	scanf("%d",&n);
	
	/*
	
	for(i=0;i<=n;i++)
	{
	
	
	for(j=1;j<=n;j++)
	{
		printf(" * ");
	}
	printf("\n");
}


for(i=1;i<=n;i++)
{
	for(j=1;j<i;j++)
	{
		printf(" * ");
	}
	printf("\n");
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=n-i;j++)
	{
		printf(" * ");
	}
	printf("\n");
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	
	printf(" * ");
}
printf("\n");
}


for(i=n;i>=1;i--)  // reverce asel > use and i--
{
	for(j=1;j<=n;j++)
	{
		printf("%d",i);
	}
	printf("\n");
}


for(i=1;i<=n;i++)
{
	for(j=n;j>=1;j--)
	{
		printf("%d",j);
	}
	printf("\n");
}


for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf(" * ");
	}
	printf("\n");
}


for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1 || i==n || j==1 || j==n)
		
			printf(" * ");
			else
			printf("   ");
		
		
	}
	printf("\n");
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1 || i==n||i==j)
		printf(" * ");
		else
		printf("   ");
	}
	printf("\n");
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1 || i==n || i+j==n+1)
		printf(" * ");
		else 
		printf("   ");
	}
	printf(" \n");
}

*/
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1 || i==n || j==1||j==n|| i==j ||i+j==n+1)
		// if mdi i first no and n no * printf and same as j  
		printf(" * ");
		else 
		printf("   ");
	}
	printf("\n");
}

return 0;
}





