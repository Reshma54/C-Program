/*
Write the recursive function to calculate the nth Fibonacci number
Use this function in main to display the first n fibonacci number The recursive definition of nth
fibonacci number is as follows
		fib(n) =1							if n=1 or 2
				=fib(n-2)+fib(n-1)			if n>2
				
				*/
				
#include<stdio.h>
int fib(int n)
{
	if(n==1 || n==2) return 1;
	else return fib(n-2) + fib(n-1);
}

int main()
{
	int n,i;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf(" %d",fib(i));
	
	return 0;
}
