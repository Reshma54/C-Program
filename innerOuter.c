/*Accept the inner and outer radius of a ring and print the perimeter and area of the ring
(Hint:perimeter =2*3.14*(a+b) ,area =3.14(a2+b2)
*/

#include<stdio.h>
int main()
{
	float a,b,area,perimeter;
	printf("Enter outer and inner radius of ring");
	scanf("%f%f",&a,&b);
	
	perimeter=2*3.14*(a+b);
	area=3.14*(a*a-b*b);
	
	printf("perimeter ring id %f\n",perimeter);
	printf("area ring is %f",area);
	return 0;
}
