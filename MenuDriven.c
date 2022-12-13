/*
Write a menu driven program to perforn the following operation using the Taylor series.
Accept uitable data for option.Write separate function for each option

1.e^x  e^x=Ex^n/n!=1+x+x^2/2! + x^3/3! ...... for all x
2.  
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
	
float e(float x,int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=power(x,i)/fact(i);
	}
	return sum;
}

float sine(float x,int n)
{
	float sum=0;
	int i;
	
	for(i=0;i<n;i++)
	{
		sum+=power(-1,i)*power(x,2*i+1)/fact(2*i+1)/fact(2*i+1);
	}
	return sum;
}
float cosine(float x,int n)
{
	float sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=power(-1,i)*power(x,2*i)/fact(2*i);
	}
	return sum;
}

int main()
{
	float x;
	int n,ch;
	
	do
	{
		printf("1.e^x\n :");
		printf("2 . sin(x)\n");
		printf("3.cos(x)\n");
		printf("4.Exit\n");
		
		printf("Enter your choice(1-4) : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value of x and no of terms n :");
				scanf("%f %d",&x,&n);
				printf("sum=%f\n",e(x,n));
				break;
				
					case 2:
				printf("Enter value of x and no of terms n :");
				scanf("%f %d",&x,&n);
				printf("sum=%f\n",sine(x,n));
				break;
				
					case 3:
				printf("Enter value of x and no of terms n :");
				scanf("%f %d",&x,&n);
				printf("sum=%f\n",cosine(x,n));
				break;
		
		
				
		}
	}
	while(ch!=4);
	return 0;
}

