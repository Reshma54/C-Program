#include<stdio.h>
int main()
{
	int i=3;
	int *j;
	j=&i;
	
	printf("Addres of i= %u\n",&i);
	printf("Addres of i= %u\n",j);

	printf("Addres of j= %u\n",&j);
	printf("Addres of i= %u\n",j);

	printf("Addres of i= %u\n",*&i);

	printf("Addres of i= %u\n",*j);

	printf("Addres of i= %u\n",&i);
	return 0;

}
