// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
void main()
{
	int  num;
	printf("enter number to check divisible by 5 nd 11 or not");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("Divisible \n");
	}
	if(num%11==0)
	{
		printf("Divisible \n");
	}
	else
	{
		printf("not divisible"); 
	}
}
