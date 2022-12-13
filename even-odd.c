/* write the program to check the even or odd number
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("%d this is even number :",n);
	
	else
	printf("%d this is odd number :",n);
	
	return 0;
}
