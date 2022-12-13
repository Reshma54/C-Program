/* write a program to aceept a number and check if the number is a palindrome
(hint number: reverse of number)
Example number=: 3472  output :it is not palindrome.
		number =: 262,output : it is palindrome.
		*/
		
		#include<stdio.h>
		int main()
		{
			int no,rno,tno;
			
			printf("Enter a number :");
			scanf("%d",&no);
			
			tno=no;
			while(no>0)
			{
				rno=rno*10 + no%10;
				
			}
			
			if(rno == tno)
			printf("It is a palindrome ");
			else
			printf("It is not a palindrome ");
			
			return 0;
		}
