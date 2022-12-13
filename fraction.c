/* Write the program having menu that has three option add,,subtract,multiplication and division two fraction 
The two fraction of the option are taken as input and the result is display as output.
Each fraction is read as two integers,numerator and denominator.
*/

#include<stdio.h>
int main()
{
	
	int n1,d1,n2,d2,ch;
	printf("Enter  fraction one(numerator/denominator) =");
	scanf("%d%d%d%d", &n1,&d1);
	
	printf("Enter  fraction two(numerator/denominator) =");
	scanf("%d%d%d%d", &n2,&d2);
	
	printf("1.Add \n2.Sub\n 3.Mult \n 4.Div");
	printf("Enter your choice(1-4)");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
	case 1:
		printf("%d/%d",n1*d2+n2*d2,d1*d2);
		break;
	case 2:
		printf("%d/%d",n1*d2-n2*d1,d1*d2);
		break;
	case 3:
		printf("%d/%d",n1*n2,d1*d2);
		break;
	case 4:
		printf("%d/%d",n1*d2,d1*n2);
		break;
		
		defoult :
			printf("Invalide Choice");
		

	}
	return 0;
}
