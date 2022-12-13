/*
Write a function to short an array of n integer using Bubble sort method.
Accept n number fron the user store them in an array and short them this function Display the sorted array.
*/

#include<stdio.h>

void accept (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n")
}
	
void display(int a[],int n)
{
	int i;
	for(i=01;i<n;i++)
	{
		printf("4%d",a[i]);
	}
	printf("\n");
}

void bubble_sort(int a[],int n)
{
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j] > a[j+1])
	
	{
		int t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
		}
		
	}
}

 int main()
 {
 	int b[100],n;
 	printf("Enter no of element :");
 	scanf("%d",&n);
 	
 	accept(b,n);	

 	display(b,n);
 	bubble_sort(b,n);
 			display(b,n);

 	
 	return 0;
 }
