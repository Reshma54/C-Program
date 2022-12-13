/* Write a program to accept a character  an integer n and display the next n characters
*/

#include<stdio.h>
int main()
{
	int i,n;
	char ch;
	printf("Enter the character an integer : ");
	scanf("%c %d",&ch,&n);
	
	for(i=1;i<n;i++)
	{
		printf("%c",ch+i);
	}
	return 0;
	
	
}
