/* Accept the cost price and selling price form the keyborad find out the seller has made a profit or loss and display how much profit
or has loss price or loss the been made
*/

#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Enter the cost price and selling price:");
	scanf("%d%d",&cp,&sp);
	
	if(cp<sp)
	printf(" profit=%d",sp-cp);
	
	else
	printf("Loss=%d",cp-sp);
	
	return 0;
}
