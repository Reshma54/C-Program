/*
Write the function to accept the character and integer n as parameter and display the next n character
*/

#include<stdio.h>

void displaynext(char c,int n)
{
	int i;
	for(i=1;i<=n;i++)
	printf("%c",c+i);
	
	}
	
	int main()
	{
		char c;
		int n;
		
		printf("Ebter a character and an integer :");
		scanf("%c %d",&c,&n);
		
		displaynext(c,n);
		return 0;
	}
