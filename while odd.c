// Write a C program to print all odd numbers between 1 to 100. - using while     loop
#include<stdio.h>
void main()
{
int i=1,n;
printf("enter n number");
scanf("%d\n",&n);
while(i%2!=0)
{
	printf("%d\n",i);
	i++;
}
}
