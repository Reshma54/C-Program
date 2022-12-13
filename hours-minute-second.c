/*
Write the function which takes hours,minutes and second as parameter and an integer
 a and increments the time by a second .Aceept time and second in main and display the new time in main using
 using the above function.
 
 */
 
 #include<stdio.h>
 
 int main()
 {
 	void incr(int *,int*,int*,int);
 	
 	int hh,mm,ss,s;
 	printf("Enter time(H,M,S)");
 	scanf("%d%d%d",&hh,&mm,&ss);
 	
 	printf("Enter second :");
 	scanf("%d",s);
 	 	
		printf("Before %d:%d:%d\n",hh,mm,ss);

 	incr(&hh,&mm,&ss,&s);
 	
 	printf("After %d:%d:%d \n",hh,mm,ss);
 	
 	return 0;
 }
 void incr(int *hp,int *mp,int *sp,int x)
 {
 	*sp=*sp+x;
 	*mp=*mp+ *sp/60;
 	*sp=*sp % 60;
 	*hp=*hp + *mp /60;
 	*mp=*mp % 60;
 }
