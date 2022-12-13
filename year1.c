/*Accept the any three year as input through the keybord write a program to check whether the year is leap year or not
 (Hint : leap year is divisible by 4 and not by 100 or divisible by 400
*/
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year =");
	scanf("%d",&y);
	
	if(y%4==0  &&  y%100!=0 ||  y%4==0)
	{
		printf("%d This is the leaf year :",y );
	}
		
		else{
			printf("%d This is not leaf year ",y);
		
	}
	return 0;
}
