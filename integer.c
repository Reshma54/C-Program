/* Accept the two integer from the user and interchange them display the interchange numbers
*/

#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter the two number :");
	scanf("%d%d",&a,&b);
	
	printf("Before wsap a=%d b=%d\n ",a,b);
	
	
	t=a;
	a=b;
	b=t;
	
	printf("After swap a=%d  b=%d \n",a,b);
	
	return 0;
}
