#include<stdio.h>
int main()

{
	void swapv(int ,int);
	int a=5,b=6;
	printf("Before swap a=%d b=%d \n",a,b);
	
	swapv(a,b);
		printf("After swap a=%d b=%d \n",a,b);
		return 0;

}

void swapv(int x,int y)
{
	int t;
	t=a;
	a=b;
	b=t;
}
