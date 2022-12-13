/* Write a progran to display the first n fibonacci number (1 1 2 3 5....)

*/
#include<stdio.h>
int main()
{
	int n,a=1,b=1,c,i;
	printf("Enter  number of terms : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("%d",a);
		
	c=a+b;
	a=b;
	b=c;
	}
	
	return 0;
	
}
