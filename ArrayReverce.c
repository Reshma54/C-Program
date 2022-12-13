/*
WAP to accept n number in an array and display the array in the reverse order,
Write separate function to accept and display
*/

#include<stdio.h>
//a []  : pointer 
void accept (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("4%d",a[i]);
	}
}
int main()
{
	int b[100],n;
	printf("Enter the number of element :");
	scanf("%d",&n);
	
	accept(b,n);
	display(b,n);
	
	return 0;
}
