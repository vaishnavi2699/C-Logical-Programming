// Write a C program to print all even numbers between 1 to 100. - using while     loop
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
    }
}
