/*
Write a program to check whether the given number spy number
( Sum of digit=product of digit
eg:	=1124
	=1+1+2+4 = 1*1*2*4
*/

#include<stdio.h>
int spy(int n)
{
	int s=0,p=1;
	
	while(n>0)
	{
		s+=n%10;
		p*=n%10;
		n/=10;
	}
	
	
	return s == p;
}

int main()
{
	int n;
	// for(n=1;n<=5000;n++)  if(spy(n)  printf("%d",n)
	printf("Enter the number:");
	scanf("%d",&n);
	if(spy(n))
	printf("%d is a spy number",n);
	else
	printf("%d is not syp number",n);
	return 0;
}
