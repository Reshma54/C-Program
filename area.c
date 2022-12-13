
#include<stdio.h>
int main()
{
	void area(float,float *,float *);
	float r,a,c;
	printf("Enter radius of circle :");
	scanf("%f",&r);
	
	area(r,&a,&c);
	printf("Area =%.2f\n Circumference =%.2f",a,c);
	return 0;
}
void area(float r,float *ap,float *cp)
{
	*ap=3.14*r * r;
	*cp=2 * 3.14 * r;
}
