/* Write a program to display Armstrong number between 1 and 500 (An Armstrong number is a 
number such that the sum of cube of digits=number itself 
 Ex.153 = 1*1*1 + 5*5*5 + 3*3*3.
 */
 #include<stdio.h>
 int main()
 {
 	int n;
 	
 	for(n=1;n<=500;n++)
 	{
 		int m=n,s=0;
 		
 		while(m>0)
 		{
 			int r =m%10;
 			s+=r*r*r;
 			m/=10;
		 }
		 if(s==n) 
		 printf("%d\n",n);
	 }
	 
 	
 	return 0;
 }

