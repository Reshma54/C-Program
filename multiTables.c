/* Write a program to display multiplication tables from a to b having n multiple each. 
The output be displayed in a tabular format for example ,the multiplication tables of 2 to 9 having 10
multiple each is shown below.
2*1=2			3*1=3 .....		9*1=
....			.....		.....
*/
#include<stdio.h>
int main()
{
	int a,b,n,i,j;
	
	printf("Enter the two number :");  //inner loop a and b check 
	scanf("%d %d",&a,&b);
	
	printf("Enter no of multiples :");   //outer loop
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=a;j<=b;j++)
		{
			printf("%d x %d=%d\t",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
