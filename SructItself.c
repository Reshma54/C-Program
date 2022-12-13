#include<stdio.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node NODE;

int main()
{
	NODE n1,n2,n3,*p;
	n1.data = 10;
	n1.next =&n2;
	
	n2.data = 20;
	n2.next=&n3;
	
	n3.data = 30;
	n3.next=0;
	
	p=&n1;
	
	while(p!=NULL)
	{
		printf("%d",p->data);
		p = p->next;
		
	}
	
	
return 0;
}
