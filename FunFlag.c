/*
Write a function which accept a number and threee flags as parameter.
If the number is even set the first flags to 1 . If the number is prime ,set the second flags to 1 
If the number is divisible by 3
*/

#include<stdio.h>
 void flag(int n,int *p,int *q,int *r)
 {
 	int i;
 	if(n%2==0)
 	*p=1;  // p value at that address
 	
 	for(i=2;i<n;i++)
 	{
 		if(n%i==0) break ;
	 }
 	if(i==n)
 	*q=1;
 	if(n%3==0 || n%7==0)
 	*r=1;
 	
 	
 }
 
 int main()
 {
 	int n,f1=0, f2=0 ,f3=0;
 	printf("Enter the number ");
 	scanf("%d",&n);
 	
 	flag(n,&f1,&f2,&f3);
 	if(f1==1)
 	printf("%d is even.\n",n);
 	
 	if(f2==1)
 	printf("%d is even\n",n);
 	
 	if(f3==1)
 	{
 		printf("%d is divisible by 3 or 7 \n",n);
	 }
 	
 	return 0;
 }
