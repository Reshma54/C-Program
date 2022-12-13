/* Accept date (dd,mm,yy) Write a functionto add no of days to the days to the date and display the new date.
Pass dd,mm, and yy to the function using pointers
*/
#include<stdio.h>

int main()
{

 void date(int *, int *,int *,int ) // net code,interview bit,hacker rank
 int i,dd,mm,yy;
 printf("Enter date(dd/mm/yyyy) ::");
 scanf("%d/%d/%d",&dd,&mm,&yy);
 
 printf("Enter no of days add:");
 scanf("%d",&n);
 
 printf("Before :%d/%d/%d\n",dd,mm,yy);
 
 date(&dd,&mm,&yy,i);
 printf("After :%d/%d/%d\n",dd,mm,yy);
 return 0;
 	
 }
 
 void date(int *dp,int *mp,int *yp,int n)
 {
 	int i;
 	for(i=1;i<=n;i++)
 	{
 		*dp+=1; // same as *dp=*dp + 1
 		
 		switch(*mp)
 		{
 			case 1:
 			case 3:
 			case 5:
 			case 7:
 			case 8:
 			case 10:
 			case 12:
 				
 				if(*dp>31)
 				{
 					*dp=1;
 					*mp+=1;
				 break;
				 
			case 4:
 			case 6:
 			case 9:
 			case 11:
 			if(*dp>30)
 			{
 				*dp=1;
 				*mp+=1;
			 break;
case 2:
	if(*yp % 4==0 && *yp %100!==0 || *yp%400==0)
	{
		if(*dp>29)
		{
			*dp=1;
			*mp+=1;
		}
	}
	else {
		if(*dp>28)
		{
			*dp=1;
			*mp+=1;
		}
	}

 				
		 }
		 if(*mp>12)
		 {
		 	*mp=1;
		 	*yp+=1;
		 }
	 }
 }
 int date_diff(int d1,int m1,int y1,int d2,int m2,int y2)
 {
 	int n=0;
 	while(d1!=d2 && m1!=m2 && y1!=y2)
 	{
 		d1++;
 		n++;
	 }
 }
