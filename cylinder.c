/* Accept  dimensions of a cylinder and print the surface area and volume
(Hint: Surface area=2*3.14*rh,volume=3.14r2h
*/

#include<stdio.h>
int main()
{
	float r,h,area,volume;
	printf("Enter the radius,height of cylinder");
	scanf("%f%f",&r,&h);
	
	area=2*3.14*r*(r+h);
	volume=3.14*r*r*h;
	
	printf("Surface area=%f\n volume=%f",area,volume);
	
	return 0;
	
}

