//Recursion

#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1 ;
	else return n*fact(n-1);
	
}
int main()
{
	int a;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Factorial of %d is %d",a,fact(a));
	return 0;
}
