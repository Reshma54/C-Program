/* Accept the character from the kryboard and display its previous and next character in order
Ex.it the character entered is 'd' display The previous charactor is 'c' The next character is 'e'.
*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	
	printf("The previous character is : %c\n",ch-1);
	printf("The next character is : %c",ch+1);
	
	return 0;
}
