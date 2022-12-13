/* Accept the x and y coordinate find the quadrant in which in the point lies.
*/
#include<stdio.h>
#include<math.h>

int main()
{
	int x,y;
	
	printf("Enter the x and y coordinate:");
	scanf("%d%d",&x,&y);
	
	if(x>0 && y>0)
	printf("QI");
	
	else if(x>0 && y<0)
	printf("QII");
	
	else if(x<0&&y>0)
	printf("QIII");
	
	else if(x>0 && y>0)
	printf("QIV");
	
	else if(x!=0 && y==0)
	printf("x_axis");
	
	else if(x==0 && y!=0)
	printf("y-axis");
	
	printf("Origin");
	
	return 0;
}
 
