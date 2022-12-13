/*
Write the given number to check the perfect number
( sum of factor if given number =given number
n=6 
  1 +2+ 3 + =6
   
*/

#include<stdio.h>

int perfect(int n)
{
	int s=0,i;
	
	for(i=1;i<n;i++)
	{
		if(n%10==0)
		s+=i;
	}
	return s==n;
	
}

int main()
{
	int n;
	printf("Enter number ");
	scanf("%d",&n);
	
	if(perfect(n))
	printf("%d is perfect number",n);
	else
	printf("%d is not perfect number ",n);
	return 0;
}
