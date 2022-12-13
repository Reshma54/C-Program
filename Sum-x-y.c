/* Accept two integer x and y and calculate the sum of all integers between x and y (both inclusive)
*/

#include<stdio.h>
int main()
{
	int x,y,sum;
	printf("Enter the two integer : ");
	scanf("%d %d",&x,&y);
	
/*	for(x=0;x<=y;x++)  //for(s=0;x<=y;x++)  s+=x;
	
	sum=sum+x;
	
	printf("Ans %d= :",sum);
	
	
	*/
	
	
	sum=0;
	while(x<=y)
	{
		sum+=x;
		x++;
	}
	printf("Sum = %d ",sum);
	return 0;
}
