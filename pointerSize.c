#include<stdio.h>
int main()
{
	int i,*ip;
	float f,*fp;
	char  c,*cp;
	
	printf("%d %d %d %d %d %d ",sizeof(i),sizeof(ip),sizeof(f),sizeof(fp),sizeof(c),sizeof(cp));
	
	return 0;
}
