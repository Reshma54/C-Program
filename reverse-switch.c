/* Write a program which accept a number n and display each digit in words.

Examples : 6702
output : Six-Seven-Zero-two(Hint reverse the number and use a switch statement)

*/

#include<stdio.h>
int main()
{
	int n,r;
	
	printf("Enter the number :");
	scanf("%d",&n);
	
	r=0;
	while(n>0)
	{
		r=r*10+n%10;
		n/=10;
	}
	
	while(r>0)
	{
		switch(r%10)
		{
			case 0:
				printf("Zero-");
				break;
				
					
		
			case 1:
				printf("one -");
				break;
		
		
			case 2:
				printf("Two");
				break;
		
		
			case 3:
				printf("Three ");
				break;
		
			case 4:
				printf("Four");
				break;
		
			case 5:
				printf("Five");
				break;
		
			case 6:
				printf("Six");
				break;
		
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eigth");
				break;
				
					case 9:
				printf("nine");
				break;
		
		
		}
		
		r/=10;
	}
	printf("\b");
	return 0;
}
