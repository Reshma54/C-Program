/*
Write a program to merge two sorted array into a third array such that the third array is 
also in the sortede order
a1:  10 25 90
a2: 9 16 22 26 10
a3: 9 10 16 52 22 25 26 90 100 

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
	printf("\n");
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


void merge(int p[],int m,int q[],int n, int r[])
{
	int i=0,j=0,k=0;
	
	while(i<m && j<n)
	{
		if(p[i] <= q[j])
		r[k++]=p[i++];
		
		else
		r[k++]=q[j++];
	}
	
	while (i<m)
	{
		r[k++] = p[i++];
	}
	while(j<n)
	{
		r[k++]=p[i++];
		
	}
}


int main()
{
	int a1[100],a2[100],a3[200],m,n;
	
	printf("Enter no of element a1 :");
	scanf("%d",&m);
	
	accept(a1,m);
	
	printf("Enter no of element a2 :");
	scanf("%d",&n);
	accept(a2,n);
	
	bubble_sort(a1,m);
	bubble_sort(a2,n);
	merge(a1,m,a2,n,a3);
	display(a1,m);
	display(a2,n);
	display(a3,m+n);
	
	return 0;
}
