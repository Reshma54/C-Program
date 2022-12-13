/* WTP to accept an integer and reverse the number.Example input:546,Reverse=645.
(s=s*10+n%10  
n/=10
n>0)
ex:n		s
	546		0
	54		0*10+6=6
	5		6*10+4=64
	0		64*10+5=645
*/

#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter an integer :");
	scanf("%d",&n);
	
	while(n>0)
	{
		s=s*10 + n%10;
		n/=10;
	}
	printf("Reverse=%d",s);
	
	return 0;
}

