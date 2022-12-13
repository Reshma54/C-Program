#include<stdio.h>
int main()
{
	int x=10;
	int *y=&x;
	
	printf("%d\n ",x);  //x chi value print
	printf("%u \n",&x);  //x address

	printf("%u \n",y);	//y pointer variable y value mean x adreed

	printf("%d \n",*y); //* mean x value

	printf("%d \n",&y);//y adrreds
	printf("%d \n",x);
	// %u is unsing variable all posive no 
	return 0;

}
