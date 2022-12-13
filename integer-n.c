/* Write a program to accept an integer n and display all even number upto n
*/

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	
	

/*	i=0;          	//while loop solve 
	
	while(i<=n)
	{
		printf("%d ",i);
		i+=2;
		
	}
	*/
	
	for(i=0;i<=n;i+=2)         //for loop solve 
	
	printf("%d ",i);				//
	
	return 0;
}
