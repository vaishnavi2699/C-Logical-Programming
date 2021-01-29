// Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
void main()
{
	int i=1,n=0,sum=0,num=0;
	printf("enter n number");
	scanf("%d",&n);
     for(i==1;i<=n;i++)
	{
		if(num%2==0)
		{
			printf("%d",i);
			sum=sum+i;
             i++;
		}
	   	
	}
	printf("Sum:%d",sum);
}
