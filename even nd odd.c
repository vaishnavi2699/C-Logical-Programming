// Write a C program to check whether a number is even or odd.
#include<Stdio.h>
void main()
{
	int num;
	printf("enter number to check even or odd number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("evennumber");
	}
	else
	{
		printf("oddnumber");
	}
}
