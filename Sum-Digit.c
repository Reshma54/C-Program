/*
Write a program to accept an integer count number of digits and calculate sum of digit 
in the number [number=
*/

#include<stdio.h>
int main()
{
	int s=0,d=0,n;
	
	// n>0,s=s+n%10,d++
	printf("Enter an integer :");
	scanf("%d",&n);
	
	while(n>0)
	{
		s+=n%10;
		d++;
		n/=10;
	}
	printf("Digits =%d ,sum=%d",d,s);
	
	return 0;
}
/* n        s         d
	7832	0		  0
	783		0+2=2	  1
	78		2+3=5	  2
	7		5+8=13	  3
	0		13+7=20	  4
	*/
