/* Write the number of accept real number x and integer n and calculate the sum of first n term of the
 series
x+3x+5x+7x+...
*/
#include<stdio.h>
int main()
{
	int i,n;
	float s=0,x;
	printf("Enter number of terms n and value of x :");
	scanf("%d %f",&n,&x);
	
	for(i=1;i<2*n;i+=2) 		// i+=2 is means 
	{
		s+=i*x;	
	}
	printf("Sum = %f",s);
	
	return 0;
}
