/*
Write a recursive function to calculate the sum of digits of a number till you get a single digit number
Example :961->16->5.(NOte DO not use a loop)
*/

#include<stdio.h>
int sum(int n)
{
	if(n<10) return n;
	else return n%10 + sum(n/10);
}

int ssum(int n)
{
	int s;
	s=ssum(n);
	if(s<10)return s;
	else return ssum(s);
}


int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Sum of digit of %d is %d",n,ssum(n));
	
	return 0;
}
