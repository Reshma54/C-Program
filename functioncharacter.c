/* write a function that accept a character as parameter and return 1 if
an alphabet 2 if it is a digit and 3 is it a special symbol in main accept character till
the user enter EOF and use the function to count the total number of alphabet
digit and special symbol entered.
EOF means :control Z prees
*/

#include<stdio.h>
#include<ctype.h> //check datatype function

int check(char c)
{
	if(isalpha(c))
	return 1;
	else if(isdigit(c))
	return 2;
	else if(ispunct(c))
	return 3;
}
int main()
{
	int ac=0,dc=0, sc=0;
	char ch;
	while((ch=getchar())!=EOF)
	{
		switch(check(ch))
		{
			case 1:
				ac++;
				break;
				case 2:
					dc++;
					break;
			case 3:
				sc++;
				
		}
	}
	printf("Alphabets =%d\nDigit =%d\nSpacial=%d",ac,dc,sc);
	
	return 0;
}



