
#include<stdio.h>
int main()
{
	int a=10,*b,**c,***d,****e;
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	printf("%d %d %d ",a,a+*b,**c+***d+****e);
	return 0;
}
