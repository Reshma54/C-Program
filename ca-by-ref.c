#include<stdio.h>
int main()
{
	void swapr(int *,int *);
	int a=5,b=6;
	printf("Before swap a=%d b=%d \n",a,b);
	
	swap(&a,&b); //&a address of a
	
	printf("After swap a=%d b=%d \n",a,b);
	
	return 0;
	
}
void swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;  // y* thithe point krto ti values *x mdi yeil
	*y=t;		//
}
