/*
Write the program to accept n number and store all prime number in an array called prime.
Display 

*/
#include<stdio.h>

	
void display(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("4%d",a[i]);
	}
}

int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main()
{
	int prime[50],n,no,i,m=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a Number :");
		scanf("%d",&no);
		
		if(pprime(no))
		{
			prime[m++]=no;  //prime la no pass
			
		}
		
	}
	
 display ( pprime,m);
 return 0;
}
