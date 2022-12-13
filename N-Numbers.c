//This C program adds n number of times which will be entered by the user.

#include<stdio.h>
int main()
{
	int n, sum=0, c , value;
		printf("Enter the number of integers you want to add\n : ");
	scanf("%d",&n);
	printf("enter the %d number :",n);
	for(c=1; c<=n; c++)
	{
		scanf("%d",&value);
		sum=sum+value;
			}
	printf("Sum of intered =%d",sum);
	return 0;
	
}
/*
#include <stdio.h>

int main()
{
    int n, sum = 0, c, value;
    
    printf("Enter the number of integers you want to add\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n",n);
    
    for (c = 1; c <= n; c++)
    {
        scanf("%d",&value);
        sum = sum + value;
    }
    
    printf("Sum of entered integers = %d",sum);
    return 0;
}

*/
