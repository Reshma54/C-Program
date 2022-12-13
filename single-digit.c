#include<stdio.h>
int main()
{
	int n;
	printf("Enter the single digit(0-9)");
	scanf("%d",&n);
	
	switch(n)
	{

	case 0:
		printf("Zero");
		break;
		
	case 1:
		printf("one");
		break;

	case 2:
		printf("Two");
		break;

	case 3:
		printf("Three");
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
		printf("seven");
		break;

	case 8:
		printf("Eigth");
		break;
		
	case 9:
		printf("Nine");
		break;


defoult:
	printf("Invalid digit %d",n);
}
	return 0;
}
