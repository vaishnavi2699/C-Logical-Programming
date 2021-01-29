// Write a C program to count total number of notes in given amount.//500,1000,2000?
#include<stdio.h>
void main()
{
	int amt,a,b,c,total;
	printf("enter amount to print total number of notes: ");
	scanf("%d",&amt);
	if(amt%500)
	{
		if(amt>=2000)
		{
			a=amt/2000;
			amt=amt-(a*2000);
			printf("2000 rupees notes are:%d\n",a);		
		}
		if(amt>=1000)
		{
			b=amt/1000;
			amt=amt-(b*1000);
			printf(" 1000 rupees notes are:%d\n",b);
		}
		if(amt>=500)
		{
			c=amt/500;
			amt=amt-(c*500);
			printf("500 rupees notes are:%d\n",c);
		}
		total=a+b+c;
		printf("\n total number of notes:%d",total);
	}
		else
		{
			printf("invalid amount");
		}
	
}
