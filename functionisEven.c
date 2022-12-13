/*
Write a function isEven  which accepts an integer as parameter and returns 1 if the number is even and 0 otherwise.
use this function in main to accept n number and check they are even or odd
*/

#include<stdio.h>

int main()
{
	int iseven(int);		//return int krnar second int int give krnar and this is declaration
	int n,i,no;
	
	printf("Enter no of element :");
	scanf("%d",&n);
	
	for( i=1;i<=n;i++)
	{
		printf("Enter number %d :",i);
		scanf("%d",&no);
		
		if(iseven(no)) 		//iseven call  and no acu
		printf("%d is even .\n",no);
		else
		printf("%d is odd .\n",no); 
	}
	return 0;
}
int iseven(int m) // defination
{
	return m%2==0?1:0;
}
