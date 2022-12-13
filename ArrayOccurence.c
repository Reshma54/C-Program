/*
Write a function which accept an integer arrayy and an integer as parameters and count the 
occurrence of the number in the array
Ex: 1 5 2 1 6 3 8 2 9 15 1 30
Number : 1
Output : i occurs 3 times
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
}


int  count(int a[],int n,int x)
{
	int i,m=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x) m++;
	}
	return m;
}



int main()
{
	int  b[100],n,x,ch;
	printf("Enter no .of element :");
	scanf("%d",&n);
	
	accept(b,n);
	
	do {
		printf("Enter the element :");
		scanf("%d",&x);
		
		printf("%d occirs %d times \n",x,count(b,n,x));
		printf("Continue Y/N");
		getchar();
		ch=getchar();
		
	}while(ch=='Y');
	printf("Enter the element to count:");
	scanf("%d",&x);
	
	printf("%d occurs %d times",x,count(b,n,x));
	
	return 0;
}
