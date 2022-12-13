/*
Write a C program to check whether given number if armstrong number.
(Hint  :sum of Cube of each digit of the number is = given number
A.g : n=153
		1^3+ 5^3 + 3^3=153 


#include<stdio.h>
#include<math.h>
 int arm(int n)
 {
 	if(n>0)
 	return(pow(n%10,3)+arm(n/10));
 }
 
 int main()
 {
 	int n ;
 	printf("Enter the number :");
 	scanf("%d",&n);
 	if(arm(n)==n)
 	
 		printf("It is the armstrong number",n);
 		
 		else
 		printf("It is not armstrong number:",n);
	 
 	
 	return 0;
 }
 
 */
 
 #include<stdio.h>
 
 int is_arm(int n)
 {
 	int s=0,m;
 	m=n;
 	
 	while(m>0)
 	{
 		int r =m%10;
 		s+=r*r*r;
 		m/=10;
	 }
	 return s==n;
 }
 int main()
 {
 	int n;
 	for(n=1;n<=5000;n++)
 	
 	if(is_arm(n))
 	printf("%d ",n);
 	return 0;
 }
 
