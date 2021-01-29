// Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
void main()
{
	int i=1,n=0,sum=0;
	printf("enter n number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
        i++;
	}
	printf("Sum:%d",sum);
}

