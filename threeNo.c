/* Write a program to accept the three number and check whether thr first is between the other two number
Ex:input 20 10 30,
	output 20 is between 10 and 30
	*/
	#include<stdio.h>
	int main ()
	{
		int a,b,c;
		printf("Enter the number:");
		scanf("%d%d%d",&a,&b,&c);
		
		if(a>=b && a<=c)
		
		printf("%d is between %d and %d",a,b,c);
		
		else
		printf("%d is not between %d and %d",a,b,c);
		
		return 0;
		
	}
