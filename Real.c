/* 
Write a program to accept real number x and calculate the sum of first n terms of the series

1/x+2/x2+3/x3+....
*/

#include<stdio.h>
int main()
{
	int n,i;
	float x,s=0,d;			//real number means double or floating number
	
	printf("Enter the number of terms (n) and a real number(x):");
	scanf("%d %f",&n,&x);
	
	for(i=1,d=x;i<=n ; i++)
	{
		
		s+=i/d;
		d*=x;
		
	}
	printf(" sum = %f",s);
	return 0;
}
