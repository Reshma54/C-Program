/* Write a program to display all prime number between m and n.
*/

#include<stdio.h>
int main()
{
	int a,b,n,i;
	printf("Enter two number : ") ;
	scanf("%d %d",&a,&b);  
	
	for(n=a;n<=b;n++) 
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0) break ; 		//break; always terminat nearest loop
		}
		if(i==n) 
		printf("%d\n",n);
		
	}
	
	
	return 0;
}
