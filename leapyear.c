// Write a C program to check whether a year is leap year or not.
#include<stdio.h>
void main()
{
	int year;
	printf("enter year to check leap year or not");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("leapyear");
	}
    else if(year%100==0)
	{
		printf("leapyear");
	}
	else if(year%4==0)
	{
		printf("leapyear");
	}
	else
	{
		printf("not a leapyear");
	}
}
