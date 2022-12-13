/* Accept three dimensions length(l),breadth(b) and height(h) of a cuboid and print surface area and volume 
(Hint :Surface area=2(lb+lh+bh), volume=lbh.
*/

#include<stdio.h>
 int main()
 {
 	float l,b,h,area,volume;
 	printf("Enter the length(l) ,breadth(b) and height(h) of cuboid");
 	scanf("%f%f%f",&l,&b,&h);
 	
 	area=2*(l*b+l*h+b*h);
 	volume=l*b*h;
 	
 	printf("Surface area=%f\n volume=%f",area,volume);
 	
 	return 0;
 	
 }
