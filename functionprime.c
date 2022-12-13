/*
 WRITE a function isPrime which accepts an integer
 as parameter and return a if the number is prime and 0
 otherwise .use this function in main to display
 the first 10 prime numbers.
 */
 
 #include<stdio.h>
 
 	int isPrime(int n)
 	{
	 
 	int i;
	 for(i=2;i<n;i++)
	 {
	 	if(n%i==0) return 0;
	 	
	 }
	 return 1;
 }
 
 int main()
 {
 	int n=2,count=0;
 	while (count<15)
 	{
 		if(isPrime(n))
 		{	
		 	printf("%d \n",n);
		  	count++;
		  			
		 }
		 

		 n++;
	
	 }
	 
 }
 
