/* Write a program to aceept two integer x and n and compute  xn.
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,ans,i;
	printf("Enter base(x) and exponent(n) : ");
	scanf("%d %d ",&x , &n);
	
/*	for(ans=1,i=1 ; i<=n ; i++) 					//innitialization , krun multiple posible

	ans*=x;
	
		printf("%d raise to %d is %d",x,n,ans);
		*/
		
		for(ans=1,i=1;i<=abs(n);i++)					//raise ans negative asel tr
		ans*=x;
		if(n>=0)
		printf("%d raise to %d is %d",x,n,ans);
		else
		printf("%d raise to %d is %f",x,n,1.0/ans);
	
	return 0;
}
