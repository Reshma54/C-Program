/*
Write a recursive C function to print the digit of a number in reverse order.Use this function 
in main to accept a number and print the digit in reverse order separated by tab
ex 3456			output=6543
(Hint : Recursiveprintf(n) =print n if n is single digit number)
							=printf n % 10 + tab + Recursiveprintf(n/10)
							
							*/

#include<stdio.h>
void rec_print(int n)
{
	if(n<10)
	printf("%d",n);
	else
	{
		printf("%d\t",n%10);
		rec_print(n/10);
	}
}

int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	rec_print(n);			//rec_print call
	return 0;
}
