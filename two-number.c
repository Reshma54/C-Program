#include<stdio.h>
int main()
{
	int x,y,z,ch;
	printf(" Enter the two number ");
	scanf("%d %d",x,y);
	
	printf("1.Eqality :\n");
	printf("2.Less Than \n");
	printf("3.Quotient and remainder");
	printf("4.Range");
	printf("5.swap\n");
	
	printf("Enter your choice(1-5)");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			if(x==y)
			printf("Equal");
			else printf("not Equal");
			break;
			
		case 2 :
			if(x<y)
			printf("Less than");
			else printf("not less than");
			break;
			
		case 3:
			printf("Quotient =%d\nRemainder=%d",x/y,x%y);
			break;
			
		case 4:
			printf("Enter the number");
			scanf("%d",&z);
			if(z>=x && z<=y)
			printf("%d is between %d and %d",z,x,y);
			else printf("%d is not between %d and %d",z,x,y);
			break;
			
		case 5:
			(if )
			printf("Before swap : x=%d,y=%d\n",x,y);
			
			else printf("Afte swap : x=%d,y=%d\n",x,y);
			
			z=x;
			x=y;
			y=z;
			
			
			defoult :
				printf("Invalid choice %d",ch);
				
				
			
	}
	return 0;
	
}
