/*Write a program to calculate the roots of a quadratic equation consider all possible casses.
*/

#include<stdio.h>
int main()
{
	double a,b,c,d;
	
	printf("Enter the coordinate a,b and c");
	scanf("%f%f%f",&a,&b,&c);
	
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("x1=%lf\n x2=%lf", -b/(2*a),-b/(2*a));
		
	}
	else if(b>0)
	{
		printf("x1=%f\n x2=%f",(-b+sqr(d))/(2*a),(-b-sqr(d))/(2*a));
	}
	else {
		double R=-b/(2*a),
				I=sqr(-d)/(2*a);
				
				printf("x1=%f+%fi\nx2=%f-%fi",R,I,R,I);
	}
	return 0;
}
