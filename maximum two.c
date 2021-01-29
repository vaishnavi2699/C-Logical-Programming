// Write a C program to find maximum between two numbers.
#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter two number to check maximim number");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num1>=num2)
	{
	printf("maximum number:%d",num1);
	}
	else
	{
	printf("maximum number:%d",num2);
	}
}
