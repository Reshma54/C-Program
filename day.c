/* Accept the three positive integers for date fron the user(day,month,year)and check whether the date is valid or invalid Run your program
for the following dates and fill the table 
(hint: for valid date 1<=month<=12,1<=day <=no-of-days is 30 in case of month 4,6,9, and 11.
31 in case of month 1,3,5,7,8,10 and 12. 
in case of month 2 no of days is 28 or 29 depending on year is leap or not
*/

#include<stdio.h>

int main()
{
	int 
	day,month,year;
	printf("Enter the day,month and year :");
	scanf("%d%d%d",&day,&month,&year);
	
	switch(month)
	{
		case 4:   //month 30 april
		case 6:
		case 9:
		case 11:       //throufoll concept
		if(day>=1 && day<=30)
		printf("Valid");
		else 
		printf("Invalid!!!");
		
		break;
		
		case 1:    //month of 31 day 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(day>=1 && day<=31)
			printf("Valid");
			else
			printf("Invalid");
			
			break;
		case 2:
			if(year%4==0 && year%100!=0 || year%400==0)
			{
				if(day>=1 && day<=29)
				printf("valid");
				else printf("Invalid");
			}
			else
			{
				if(day>=1 && day<=28)
				printf("valid");
				else
				printf("Invalid");
			}
			break;
			default:
				printf("INValid");
							
			return 0;
	}
}
