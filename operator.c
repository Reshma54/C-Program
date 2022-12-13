#include<stdio.h>
int main()
{
	int a,b;
	char c;
	
	prinf("Enter two integers and operator ");
	scanf("%d%d%c",&a,&b,&c);
	
	switch(c)
	{
		
		case '+':
			printf(" Addition of %d and %d",a,b,a+b);
			break;
			
		case '-':
				printf("Subtraction of %d and %d",a,b,a-b);
				break;
				
		case '*':
					printf("multiplication of %d and %d",a,b,a*b);
					break;
					
		case '/':
			printf("Division of %d and %d",a,b,a/b);
			
			break;
			
			defoult:
				printf("Invalid operator:%c",c);
				
			
	}
	
}
