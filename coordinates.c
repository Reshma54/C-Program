/* Accept the x and y coordinates of two point and compute the distence between the two point
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	double d;
	
	printf("Enter the x and y coordinates of point 1 :");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter the x and y coordinates of point 2 :");
	scanf("%d%d",&x2,&y2);
	
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	printf("distance between(%d,%d)&(%d%d) is %f",x1,y1,x2,y2,d);
	
	return 0;
}
