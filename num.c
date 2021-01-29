#include<stdio.h>
void main()
{
	int num;
	printf("enter ur number to check +ve or -ve or zero ");
	scanf("%d",&num);
	if(num>0)
	{
	printf("positive");
   	}
   	else if(num<0)
   	{
   		printf("negative");
	   }
	   else
	   {
	   	printf("zero");
	   }
}
