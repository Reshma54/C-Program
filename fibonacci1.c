/*Fibonacci number
*/

#include<stdio.h>
int main()
{
	int a1=0,a2=1,a3,num,i,n;
	printf("Enter the number :");
	scanf("%d",&num);
	
	printf("/n%d %d",a1,a2);
	
	for(i=2;i<num;++i)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		
		printf("%d",a3);
	}
	return 0;
}
