/*
Write a program to  accept the n number in an array and display the largerst and  smallets number 
using array these values calculate the range of element in the array
*/

#include<stdio.h>
int main()
{
	int a[100],n,i,min,max;
	
	printf("Enter number of Element :");
	scanf("%d ",&n);
	
	for(i=0;i<n;i++)
	{
		printf("[%d]=",i);
		scanf("%d",&a[i]);
	}
	max=min=a[0]; //right to left associvity
	 for(i=1;i<n;i++)
	 {
	 	if(a[i]>max)max=a[i];
	 	if(a[i]<min) min=a[i];
	 	
	 }
	 printf("Range of element is %d",max-min);

return 0;
}
