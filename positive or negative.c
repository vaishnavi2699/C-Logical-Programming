// Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
void main()
{
	int num;
printf("enter number to check postive or negative");
scanf("%d",&num);
if(num==0)
{
	printf("zero");
}
if(num>=0)
{
	printf("positive");
}
else
{
	printf("negative");
}
}
