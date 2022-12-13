/*Write a program to accept an integer and check if it is prime or not
*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enteran integer : ");
	scanf("%d",&n);
	
	for(i=2; i<n;i++)
	{
		if(n%i==0) 
		{
			printf("%d is not prime ",n);
			break;
		}
	}
	if(i==n)
	printf("%d is prime ",n);
	
	return 0;
}


/*
{
	int num,i,c=0;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=1 ; i<=num ; i++)
	{
	
	if(num % i==0)
	c++;
	}
   if(c==2)
	
	{
	
	printf("%d is the prime no !!! : ",num);
	//break;
}


	else
	{
	
	printf("%d is the not prime No :",num);
}

	return 0;
	
	
}
*/
