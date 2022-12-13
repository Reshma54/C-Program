/*
Write a recursive C function to calculate the GCD of two number USe this function in main.
the GCD is calculated as :
							gcd(a,b)=a			if b=0
							=gcd(b,a mod b) otherwise
	GCD(Gretes comman Divided)
	*/
	
	#include<stdio.h>
	int gcd(int a,int b)
	{
		if(b==0) return a;
		else return gcd(b, a%b);
	}
	
	int main()
	{
		int a,b;
		printf("Enter the number of a,b:");
		scanf("%d %d",&a,&b);
		
		printf("gcd of (%d,%d)=%d",a,b,gcd(a,b));
		return 0;
	}
