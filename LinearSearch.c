/*
Write a function for linear search which accept an array  of n element and a key as parameters and 
return the position of key in the array and -1 if the key is not found.
Accept n number from the user store them in an array Accept the key to be searched and search it using
 this finction .Display appropriate messages.
 */
 
 #include<stdio.h>
 
 int LinearSearch(int a[],int key)
 {
 	int i,n;
 	for(i=0;i<n;i++)
 	{
 		if(a[i]==key)
 		{
 			return i;
		 }
	 }
	 return -1;
 }
  
  
void accept (int a[],int n)   
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("[%d]",i);
		scanf("%d",&a[i]);
	}
}
 int main()
 {
 	int b[100],n,key,p;
 	char ch;
 	
 	printf("Enter no of element :");
 	scanf("%d",&n);
 	
 	accept(b,n);
 do
 {
 	printf("Enter element to search :");
 	scanf("%d",&key);
 	
 	p=LinearSearch(b,n,key);
 	
 	if(p==-1)

printf("%d not found.\n",key);
else
printf("%d found at position %d.\n",key,p);

printf("Continue Y/N ??");
getchar();
ch=getchar();
 }while(c=='Y');
 	
 	return 0;
 }
