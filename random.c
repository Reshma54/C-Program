//This C program generates numbers randomly using random function.

#include<stdio.h>
int main()
{
	int n,c;
	printf("ten randomly number[1,100]\n");
	
	for(c=1;c<=10;c++)
	
	{
	n=rand()%100+1;
	printf("%d\n",n);
}
	
	return 0;
}
