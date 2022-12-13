/*
Write a function power which calculator x^y Write another function which calculator n! using for loop use these
functio to calculate the sum of first n terms of the Taylor series:
	sin(x)=x-x^3/3! + x^5/5!+ .......
	*/
	
	#include<stdio.h>
	
	float power(float x,int y)
	{
		float ans=1;
		int i;
		for(i=1;i<=y;i++)
		ans*=x;
		
		return ans;
	}
	
	long fact(int  n)
	{
		long f=1;
		int i;
		for(i=1;i<=n;i++)
		f*=i;
		
		return f;
	}
	
	
	int main()
	{
		float x,sum=0;
		int n,i;
		
		printf("Enter value of x :");
		scanf("%f",&x);
		
		printf("Enter no of terms n :");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			sum-=power(x,2*i-1)/fact(2*i-1);
			else
			sum+=power(x , 2*i-1)/fact(2*i-1);

		}
		printf("sum=%f",sum);
		return 0;
	}
