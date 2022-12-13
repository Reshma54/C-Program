/* Write a recursion C function to calculate the sum digits of a number Use this function in main
to accept a number and print sum of its digits
*/

#include<stdio.h>
int cal(int n)  //parameter n local variable 
{
	if(n<10) return n;
	else return n%10 + cal(n/10);	
}

int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	printf("Sum of digit of %d is %d",x,cal(x));
	
	return 0;
}
