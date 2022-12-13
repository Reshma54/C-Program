/*
w T P to accept characters till the user enters EOF and count number of alphabets and digit enterd 
Refer to sample program 5 given above.

*/

#include<stdio.h>
int main()
{
	char ch;
	int a=0,d=0;
	
	while((ch=getchar())!=EOF)  			//getchar use one one charachter keyboard vrn read 
	{
		if((ch>='a' && ch<='z')|| (ch >'A' && ch <='z'))
		
		a++;
		if(ch>='0' && ch<='9')
		d++;
		
	}
	
	printf("Alphabet =%d \n Digit =%d", a,d);
	
	return 0;
}
